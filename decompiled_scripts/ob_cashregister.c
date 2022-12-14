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
	struct<3> Local_19 = { 0, 0, 0 } ;
	int iLocal_22 = 0;
	var uScriptParam_0 = 0;
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
	if (unk_0xA26A9A07F761D8F8())
	{
		if (BitTest(Global_1666891, 1))
		{
			func_25();
		}
		else
		{
			unk_0xCF50389093DECE87(32, 0, -1);
			func_22(0, -1, 0);
			unk_0xF1440897111F3111(0);
			iLocal_22 = 1;
		}
	}
	else if (unk_0x55EEDBBFDC6E810F(2))
	{
		func_25();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_22 == 1)
		{
			if (func_14())
			{
				func_25();
			}
		}
		if (unk_0x7DE17ACDD8BA2642(uScriptParam_0))
		{
			if (unk_0x4B85D97500605AE9(uScriptParam_0))
			{
				switch (iLocal_18)
				{
					case 0:
						if (unk_0x28B891F3A70F9A2A(uScriptParam_0))
						{
							Local_19 = { unk_0x30BE8A934C020461(uScriptParam_0, 1) };
							iLocal_18 = 1;
						}
						break;
					
					case 1:
						if ((unk_0x34A8666A2B64A52B(uScriptParam_0, 0) && unk_0x51DF6895C236B231(uScriptParam_0)) && !unk_0x1AFE963DA61006ED(uScriptParam_0))
						{
							func_1();
							iLocal_18 = 2;
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_25();
			}
		}
		else
		{
			func_25();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = joaat("prop_money_bag_01");
	iVar1 = joaat("pickup_money_med_bag");
	iVar3 = unk_0x15A88CFAAFFC6C4B(70, 121);
	if (unk_0xA26A9A07F761D8F8())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = unk_0x15A88CFAAFFC6C4B(50, 101);
		iVar3 = func_13(iVar3, 1);
	}
	unk_0xECDAB41968FF21A8(&uVar2, 3);
	unk_0xECDAB41968FF21A8(&uVar2, 4);
	unk_0x852EC2A7DE66202D(iVar0);
	while (!unk_0x0CBB7C273DED26E7(iVar0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		func_2(iVar1, unk_0x223044F9F739377D(Local_19, 1067030938, 1069547520), uVar2, iVar3, iVar0, 0, 0);
	}
	else
	{
		unk_0x8D2015F36A52256C(iVar1, unk_0x223044F9F739377D(Local_19, 1067030938, 1069547520), uVar2, iVar3, 0, iVar0);
	}
}

struct<5> func_2(int iParam0, struct<3> Param1, var uParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	struct<5> Var0;
	
	Var0 = 123;
	if (func_12() && func_11(iParam0))
	{
		Var0 = { func_3(iParam0, Param1, uParam4, iParam5, iParam6, bParam7) };
	}
	else
	{
		Var0.f_4 = unk_0x16526865BBC2DF87(iParam0, Param1, uParam4, iParam5, iParam6, bParam7, iParam8);
	}
	return Var0;
}

struct<5> func_3(int iParam0, struct<3> Param1, var uParam4, var uParam5, var uParam6, bool bParam7)
{
	struct<5> Var0;
	int iVar5;
	struct<5> Var6;
	int iVar11;
	
	Var0 = 123;
	if (func_10() == -1)
	{
		return Var0;
	}
	iVar5 = func_9(-1);
	if (iVar5 == -1)
	{
		return Var0;
	}
	Var6 = 123;
	Var6.f_0 = iParam0;
	Var6.f_1 = { Param1 };
	if (func_4(&Var6) != -1)
	{
		return Var0;
	}
	unk_0xECDAB41968FF21A8(&uParam4, 5);
	Var6.f_4 = unk_0x03EFEB142988DB87(iParam0, Param1, uParam4, uParam5, uParam6, bParam7, 0);
	iVar11 = unk_0xD056B8CB0E6A5169();
	if (bParam7)
	{
		Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_12 = unk_0x63C7B2D430A46FC3();
		Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_13 = unk_0xCF6C13BA964C2E66();
		if (Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_13 == 0)
		{
			Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_13 = unk_0x3B01E4A065DEF5C7();
			Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_11 = 1;
		}
		else
		{
			Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_11 = 2;
		}
	}
	Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/] = { Var6 };
	Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_5 = { Param1 };
	Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_8 = uParam4;
	Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_9 = uParam5;
	Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_10 = uParam6;
	return Var6;
}

int func_4(var uParam0)
{
	int iVar0;
	
	if (!func_7(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_5(uParam0, &(Global_2652258.f_2452[iVar0 /*16*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_5(var uParam0, var uParam1)
{
	if ((*uParam0 == *uParam1 && func_6(uParam0->f_1, uParam1->f_1, 0)) && uParam0->f_4 == uParam1->f_4)
	{
		return 1;
	}
	return 0;
}

bool func_6(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_7(var uParam0)
{
	if ((*uParam0 == 123 || func_8(uParam0->f_1)) || uParam0->f_4 == 0)
	{
		return 0;
	}
	return 1;
}

int func_8(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = unk_0xD056B8CB0E6A5169();
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_7(&(Global_1914091[iParam0 /*297*/].f_98.f_21[iVar1 /*14*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_10()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_7(&(Global_2652258.f_2452[iVar1 /*16*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case joaat("pickup_money_variable"):
		case joaat("pickup_money_case"):
		case joaat("pickup_money_wallet"):
		case joaat("pickup_money_purse"):
		case joaat("pickup_money_dep_bag"):
		case joaat("pickup_money_med_bag"):
		case joaat("pickup_money_paper_bag"):
		case joaat("pickup_money_security_case"):
		case joaat("pickup_gang_attack_money"):
			return 1;
		
		default:
	}
	return 0;
}

var func_12()
{
	return Global_262145.f_30937;
}

int func_13(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(iParam0) * Global_262145);
				iParam0 = unk_0xF2DB717A73826179(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_14()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			return 1;
		}
	}
	if (func_21())
	{
		return 1;
	}
	if (Global_2696915)
	{
		return 1;
	}
	if (func_20())
	{
		return 1;
	}
	if (func_19(159))
	{
		if (!func_18())
		{
			return 1;
		}
	}
	if (func_19(157))
	{
		return 1;
	}
	if (!unk_0x67EBFCF2F78761B9())
	{
		return 1;
	}
	if (func_15() != 0)
	{
		if (unk_0x24B651D85CCE5EB4(func_15()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_15()
{
	switch (func_17())
	{
		case 0:
			return func_16();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_16()
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_17()
{
	return Global_32163;
}

bool func_18()
{
	return Global_2683862.f_698;
}

int func_19(int iParam0)
{
	if (unk_0x36D3321E138A43F0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_20()
{
	return Global_2694524;
}

bool func_21()
{
	return Global_2683862.f_693;
}

int func_22(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xA1089192E8AE61F4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_24();
			}
			else
			{
				return 0;
			}
		}
		if (!func_23(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA26A9A07F761D8F8())
				{
					if (!bParam2)
					{
						func_24();
					}
					else
					{
						return 0;
					}
				}
				if (func_21())
				{
					if (!bParam2)
					{
						func_24();
					}
					else
					{
						return 0;
					}
				}
				if (func_19(157))
				{
					if (!bParam2)
					{
						func_24();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xE3C3FF8D5649A77D())
			{
				if (!bParam2)
				{
					func_24();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xA1089192E8AE61F4();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			if (!bParam2)
			{
				func_24();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xE3C3FF8D5649A77D())
	{
		if (!bParam2)
		{
			func_24();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_23(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

void func_24()
{
	unk_0x675D9C12C73D3DE7();
}

void func_25()
{
	unk_0x675D9C12C73D3DE7();
}

