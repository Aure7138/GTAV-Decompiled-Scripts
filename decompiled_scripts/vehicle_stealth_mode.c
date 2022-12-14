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
	int iLocal_28 = 0;
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
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (func_88(&uLocal_46))
	{
		while (!func_79())
		{
			func_67(&uLocal_46);
			if (func_57(&uLocal_46))
			{
			}
			else
			{
				func_17(&uLocal_46);
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	func_1(&uLocal_46);
}

void func_1(var uParam0)
{
	func_16();
	if (func_10(uParam0))
	{
		unk_0x3410421C60BF7143(1);
	}
	if (func_8(&uLocal_46))
	{
		func_4(&uLocal_46);
	}
	unk_0xC0F70A3CDEC87ECE(5);
	func_3();
	unk_0x15167583E169ED45(unk_0x9E2D6C50374FCFA9(), 0);
	func_2();
}

void func_2()
{
	unk_0xAFBDF6A5E54114C1();
}

void func_3()
{
	unk_0xB0550BC91B0159D6(&(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_809), 3);
}

void func_4(var uParam0)
{
	func_7(0, 1);
	func_6(0, -1, 1);
	func_5(&(uParam0->f_6), 5);
}

void func_5(var uParam0, int iParam1)
{
	unk_0xB0550BC91B0159D6(uParam0, iParam1);
}

void func_6(bool bParam0, int iParam1, bool bParam2)
{
	if ((!unk_0x87C0DA419F19FF57(Global_2678393.f_1582) || Global_2678393.f_1582 == unk_0x69CE66B03B2184EB()) || bParam2)
	{
		if (bParam0)
		{
			Global_2678393.f_1582 = unk_0x69CE66B03B2184EB();
			Global_2678393.f_1583 = unk_0x0A89FDFA763DCAED();
		}
		else
		{
			Global_2678393.f_1582 = -1;
		}
		Global_2678393.f_1585 = iParam1;
		Global_2678393.f_1587 = bParam0;
	}
	else if (!bParam2)
	{
	}
}

void func_7(bool bParam0, bool bParam1)
{
	if ((!unk_0x87C0DA419F19FF57(Global_2678393.f_1598) || Global_2678393.f_1598 == unk_0x69CE66B03B2184EB()) || bParam1)
	{
		if (bParam0)
		{
			Global_2678393.f_1598 = unk_0x69CE66B03B2184EB();
			unk_0xCED9E32812D6C7C7(&(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_71.f_2), 23);
		}
		else
		{
			Global_2678393.f_1598 = -1;
			unk_0xB0550BC91B0159D6(&(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_71.f_2), 23);
		}
	}
	else if (!bParam1)
	{
	}
}

bool func_8(var uParam0)
{
	return func_9(&(uParam0->f_6), 5);
}

bool func_9(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

int func_10(var uParam0)
{
	if (uParam0->f_2 != 0)
	{
		if (func_14("STEALTH_OFF", func_15(uParam0->f_2), func_15(uParam0->f_2)) || func_13("STEALTH_ON_P", func_15(uParam0->f_2)))
		{
			return 1;
		}
	}
	return ((func_12("STEALTH_ON") || func_12(func_11())) || func_12("STEALTH_OFF_P"));
}

char* func_11()
{
	return "STEALTH_WARN";
}

var func_12(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

var func_13(char* sParam0, var uParam1)
{
	unk_0xB65782D82090BB33(sParam0);
	unk_0x26C23BE14F66F202(uParam1);
	return unk_0x73CB3406A86A3A02(0);
}

var func_14(char* sParam0, var uParam1, var uParam2)
{
	unk_0xB65782D82090BB33(sParam0);
	unk_0x26C23BE14F66F202(uParam1);
	unk_0x26C23BE14F66F202(uParam2);
	return unk_0x73CB3406A86A3A02(0);
}

var func_15(int iParam0)
{
	if (iParam0 == joaat("annihilator2"))
	{
		return "ANNIH_2_STEALTH";
	}
	return unk_0x01E2429B82E280E6(iParam0);
}

void func_16()
{
	unk_0xB0550BC91B0159D6(&(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_809), 1);
}

void func_17(var uParam0)
{
	func_54(uParam0);
	func_53(uParam0);
	if (func_52(uParam0))
	{
		if (((func_51(uParam0) && !func_50(uParam0)) && unk_0x3A8B0F5B0E3DE13A(uParam0->f_1)) && !func_49())
		{
			func_48(uParam0, 1, 0);
			func_47(uParam0);
		}
		else if (func_9(&(uParam0->f_6), 6) && func_50(uParam0))
		{
			if (unk_0x3A8B0F5B0E3DE13A(uParam0->f_1) && !func_49())
			{
				func_48(uParam0, 0, 0);
				func_5(&(uParam0->f_6), 6);
				func_5(&(uParam0->f_6), 2);
			}
		}
	}
	if (func_46(uParam0))
	{
		unk_0x15167583E169ED45(unk_0x9E2D6C50374FCFA9(), 1);
		func_45();
		func_44(uParam0);
	}
	else if (func_43(uParam0))
	{
		unk_0x15167583E169ED45(unk_0x9E2D6C50374FCFA9(), 0);
		func_16();
		func_44(uParam0);
		func_42(uParam0, 5);
	}
	if (func_50(uParam0) && !func_51(uParam0))
	{
		func_40(uParam0);
		func_39();
		func_42(uParam0, 2);
		if (func_36(uParam0))
		{
			func_34();
		}
	}
	else
	{
		func_18(uParam0);
	}
	func_3();
	unk_0xB0550BC91B0159D6(&(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_809), 4);
}

void func_18(var uParam0)
{
	var uVar0;
	
	if (((((((!func_9(&(uParam0->f_6), 0) && !func_9(&(uParam0->f_6), 2)) && !unk_0xF847447D4467709D()) && func_33(uParam0)) && !func_32(0)) && !func_31()) && func_29()) && unk_0xE5965CDF24F93A9F(unk_0xAB793EA186AB8DAA(uParam0->f_1, -1, 0)))
	{
		func_25(uParam0, 1);
		func_24(&(uParam0->f_6), 3);
		uVar0 = func_23(uParam0->f_6.f_2, 3333, 10000);
		uParam0->f_6.f_2 = 0;
		if (func_52(uParam0))
		{
			func_21(func_22(uParam0), func_15(uParam0->f_2), func_15(uParam0->f_2), uVar0);
		}
		else
		{
			func_20(func_22(uParam0), func_15(uParam0->f_2), uVar0);
		}
		func_19(uParam0);
		func_24(&(uParam0->f_6), 0);
	}
}

void func_19(var uParam0)
{
	func_24(&(uParam0->f_6), 2);
}

void func_20(var uParam0, var uParam1, var uParam2)
{
	unk_0xA83426F7CEDED182(uParam0);
	unk_0x26C23BE14F66F202(uParam1);
	unk_0x89B545A74F93B1DD(0, 0, 1, uParam2);
}

void func_21(var uParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0xA83426F7CEDED182(uParam0);
	unk_0x26C23BE14F66F202(uParam1);
	unk_0x26C23BE14F66F202(uParam2);
	unk_0x89B545A74F93B1DD(0, 0, 1, uParam3);
}

char* func_22(var uParam0)
{
	if (func_52(uParam0))
	{
		return "STEALTH_OFF";
	}
	return "STEALTH_OFF_P";
}

int func_23(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_24(var uParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(uParam0, iParam1);
}

void func_25(var uParam0, int iParam1)
{
	int iVar0;
	
	if (func_52(uParam0))
	{
		switch (uParam0->f_2)
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				iVar0 = (func_28(19004, -1) + iParam1);
				if (iVar0 >= 0)
				{
					func_26(19004, iVar0, -1);
				}
				break;
			}
	}
}

void func_26(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	unk_0x1581503AE529CD2E(iParam0, iParam1, iParam2);
}

int func_27()
{
	return Global_1574918;
}

int func_28(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	return unk_0x0BC900A6FE73770C(iParam0, iParam1);
}

bool func_29()
{
	return (!BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_809, 4) && !func_30());
}

bool func_30()
{
	return ((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) && Global_4718592.f_2 == 20);
}

bool func_31()
{
	return Global_75485;
}

int func_32(int iParam0)
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

int func_33(var uParam0)
{
	if (func_52(uParam0))
	{
		switch (uParam0->f_2)
		{
			case joaat("akula"):
				return func_28(19004, -1) < 3;
			}
		
		default:
	}
	return 1;
}

void func_34()
{
	if (!unk_0xF847447D4467709D())
	{
		func_35("STEALTH_WARN", 3000);
	}
}

void func_35(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

int func_36(var uParam0)
{
	int iVar0;
	
	if (func_32(0) || func_31())
	{
		return 0;
	}
	iVar0 = func_37(uParam0);
	switch (iVar0)
	{
		case 1:
			if ((unk_0xF01464D7AF0B7347(0, 114) || unk_0xF01464D7AF0B7347(0, 99)) || unk_0xF01464D7AF0B7347(0, 100))
			{
				return 1;
			}
			break;
		
		case 0:
			if (unk_0xF01464D7AF0B7347(0, 114))
			{
				return 1;
			}
			break;
		
		case 2:
			if (unk_0xF01464D7AF0B7347(0, 92))
			{
				return 1;
			}
			break;
		
		case 3:
			if (unk_0xF01464D7AF0B7347(0, 68))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_37(var uParam0)
{
	if (!func_38(uParam0))
	{
		return 4;
	}
	switch (uParam0->f_2)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			switch (uParam0->f_4)
			{
				case -1:
					return 1;
				
				case 0:
					return 2;
				
				default:
			}
			return 4;
			break;
	}
	return 4;
}

bool func_38(var uParam0)
{
	return (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()) && !unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0));
}

void func_39()
{
	unk_0x7653D561C9574763(0, 24, 1);
	unk_0x7653D561C9574763(0, 66, 1);
	unk_0x7653D561C9574763(0, 67, 1);
	unk_0x7653D561C9574763(0, 68, 1);
	unk_0x7653D561C9574763(0, 114, 1);
	unk_0x7653D561C9574763(0, 69, 1);
	unk_0x7653D561C9574763(0, 70, 1);
	unk_0x7653D561C9574763(0, 91, 1);
	unk_0x7653D561C9574763(0, 92, 1);
	unk_0x7653D561C9574763(0, 99, 1);
	unk_0x7653D561C9574763(0, 100, 1);
	unk_0x7653D561C9574763(0, 37, 1);
}

void func_40(var uParam0)
{
	var uVar0;
	
	if (((((((!func_9(&(uParam0->f_6), 0) && !func_9(&(uParam0->f_6), 1)) && !unk_0xF847447D4467709D()) && func_9(&(uParam0->f_6), 3)) && !func_32(0)) && !func_31()) && func_29()) && unk_0xE5965CDF24F93A9F(unk_0xAB793EA186AB8DAA(uParam0->f_1, -1, 0)))
	{
		uVar0 = func_23(uParam0->f_6.f_2, 3333, 10000);
		uParam0->f_6.f_2 = 0;
		if (func_52(uParam0))
		{
			func_35(func_41(uParam0), uVar0);
		}
		else
		{
			func_21(func_41(uParam0), func_15(uParam0->f_2), func_15(uParam0->f_2), uVar0);
		}
		func_47(uParam0);
		func_24(&(uParam0->f_6), 0);
	}
}

char* func_41(var uParam0)
{
	if (func_52(uParam0))
	{
		return "STEALTH_ON";
	}
	return "STEALTH_ON_P";
}

void func_42(var uParam0, int iParam1)
{
	if (func_51(uParam0))
	{
		return;
	}
	if (unk_0x847BA8D143D888D1() != iParam1)
	{
		unk_0xC0F70A3CDEC87ECE(iParam1);
	}
	if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > iParam1)
	{
		unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), iParam1, 0);
	}
}

bool func_43(var uParam0)
{
	return (!func_9(uParam0, 0) && func_9(uParam0, 1));
}

void func_44(var uParam0)
{
	func_5(&(uParam0->f_6), 0);
	if (func_10(uParam0))
	{
		unk_0x3410421C60BF7143(1);
	}
	if (!func_52(uParam0))
	{
		if (func_50(uParam0))
		{
			func_5(&(uParam0->f_6), 1);
		}
		else
		{
			func_5(&(uParam0->f_6), 2);
		}
	}
}

void func_45()
{
	unk_0xCED9E32812D6C7C7(&(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_809), 1);
}

bool func_46(var uParam0)
{
	return (func_9(uParam0, 0) && !func_9(uParam0, 1));
}

void func_47(var uParam0)
{
	func_24(&(uParam0->f_6), 1);
}

void func_48(var uParam0, bool bParam1, int iParam2)
{
	switch (uParam0->f_2)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			unk_0x3BC0B31EEC98D938(uParam0->f_1, !bParam1, iParam2);
			break;
	}
}

bool func_49()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_809, 3);
}

bool func_50(var uParam0)
{
	return func_9(uParam0, 0);
}

bool func_51(var uParam0)
{
	return func_9(uParam0, 2);
}

bool func_52(var uParam0)
{
	return ((func_38(uParam0) && uParam0->f_3 == unk_0xE2D3D51028F0428A()) || unk_0xAB793EA186AB8DAA(uParam0->f_1, -1, 0) == unk_0xE2D3D51028F0428A());
}

void func_53(var uParam0)
{
	if (func_10(uParam0) && (func_32(0) || func_31()))
	{
		uParam0->f_6.f_2 = 1;
		unk_0x3410421C60BF7143(1);
		func_5(&(uParam0->f_6), 0);
		if (func_50(uParam0))
		{
			func_5(&(uParam0->f_6), 1);
		}
		else
		{
			func_5(&(uParam0->f_6), 2);
			if (func_52(uParam0))
			{
				func_25(uParam0, -1);
			}
		}
	}
}

void func_54(var uParam0)
{
	if (func_50(uParam0))
	{
		if (func_8(uParam0))
		{
			if (func_56())
			{
				func_4(uParam0);
			}
		}
		else if (!func_56())
		{
			func_55(uParam0);
		}
	}
	else if (func_8(uParam0))
	{
		func_4(uParam0);
	}
	unk_0xB0550BC91B0159D6(&(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_809), 2);
}

void func_55(var uParam0)
{
	func_7(1, 1);
	func_6(1, -1, 1);
	func_24(&(uParam0->f_6), 5);
}

bool func_56()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_809, 2);
}

int func_57(var uParam0)
{
	if (!func_38(uParam0))
	{
		return 1;
	}
	if (!func_66(uParam0))
	{
		return 1;
	}
	if (!func_65(uParam0->f_2))
	{
		return 1;
	}
	if (func_64(unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		return 1;
	}
	if (func_63(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	if (func_60(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	if (func_58(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	return 0;
}

int func_58(int iParam0)
{
	if (iParam0 > -1)
	{
		if (Global_2689235[iParam0 /*453*/].f_244 > -1)
		{
			if (func_59(Global_2689235[iParam0 /*453*/].f_244) == 4)
			{
				return 1;
			}
		}
		if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
	}
	return 6;
}

int func_60(int iParam0)
{
	if (iParam0 != func_62() && func_61(iParam0, 1, 1))
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 3);
	}
	return 0;
}

int func_61(int iParam0, bool bParam1, bool bParam2)
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

int func_62()
{
	return -1;
}

int func_63(int iParam0)
{
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 11))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_62())
	{
		return 0;
	}
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_65(int iParam0)
{
	switch (iParam0)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_66(var uParam0)
{
	return (unk_0xE5965CDF24F93A9F(uParam0->f_1) && unk_0x55A0C756C4A8220C(uParam0->f_1, 0));
}

void func_67(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = func_9(uParam0, 4);
	bVar1 = func_9(uParam0, 0);
	func_78(uParam0);
	if (bVar0)
	{
		func_24(uParam0, 3);
	}
	else
	{
		func_5(uParam0, 3);
	}
	if (bVar1)
	{
		func_24(uParam0, 1);
	}
	else
	{
		func_5(uParam0, 1);
	}
	if (func_38(uParam0))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uParam0->f_1 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
			if (func_66(uParam0))
			{
				uParam0->f_2 = unk_0x15CAA6D7B11F1A7C(uParam0->f_1);
				if (unk_0x7F528E84564C4D10(unk_0xE2D3D51028F0428A(), 2))
				{
					func_24(uParam0, 2);
				}
			}
		}
	}
	if (func_66(uParam0))
	{
		if (!unk_0x7158135695FAE89D(uParam0->f_1, -1, 0))
		{
			iVar2 = unk_0xAB793EA186AB8DAA(uParam0->f_1, -1, 0);
			if ((unk_0xE5965CDF24F93A9F(iVar2) && !unk_0x55B23FE400FCEA6B(iVar2, 0)) && unk_0x65FAB09725E2FE75(iVar2))
			{
				uParam0->f_3 = iVar2;
				if (iVar2 == unk_0xE2D3D51028F0428A())
				{
					func_24(uParam0, 4);
					if (!func_9(uParam0, 3))
					{
						func_24(&(uParam0->f_6), 6);
					}
				}
			}
		}
		if (func_38(uParam0))
		{
			uParam0->f_4 = func_77(unk_0xE2D3D51028F0428A(), 0);
		}
		if (func_52(uParam0))
		{
			if (func_76() && func_70(uParam0))
			{
				func_24(uParam0, 0);
			}
		}
		else
		{
			func_68(uParam0);
		}
	}
	if (func_46(uParam0))
	{
		uParam0->f_6.f_3 = unk_0x0A89FDFA763DCAED();
	}
}

void func_68(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0->f_3) && func_69(unk_0xFF65CDB0EB7ACE71(uParam0->f_3)))
	{
		func_24(uParam0, 0);
	}
	else
	{
		func_5(uParam0, 0);
	}
}

bool func_69(int iParam0)
{
	return (iParam0 != -1 && BitTest(Global_1853348[iParam0 /*834*/].f_809, 1));
}

bool func_70(var uParam0)
{
	bool bVar0;
	
	bVar0 = func_75();
	if (unk_0x3A8B0F5B0E3DE13A(uParam0->f_1))
	{
		func_74(uParam0);
		switch (uParam0->f_2)
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				bVar0 = !unk_0x70578C38F82A5D0D(uParam0->f_1);
				break;
		}
	}
	else if (func_73(uParam0))
	{
		if (func_72(uParam0))
		{
			unk_0xE7DD33D0E2A313F4(uParam0->f_1);
		}
	}
	else
	{
		func_71(uParam0);
	}
	return bVar0;
}

void func_71(var uParam0)
{
	func_24(&(uParam0->f_6), 4);
	uParam0->f_6.f_1 = unk_0x320D1840B6DAA1CC();
}

bool func_72(var uParam0)
{
	return (unk_0x320D1840B6DAA1CC() - uParam0->f_6.f_1) >= 200;
}

bool func_73(var uParam0)
{
	return func_9(&(uParam0->f_6), 4);
}

void func_74(var uParam0)
{
	func_5(&(uParam0->f_6), 4);
}

var func_75()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_809, 1);
}

bool func_76()
{
	return !func_30();
}

int func_77(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (unk_0xD5C6B5E3B93A5EDC(iParam0, iParam1))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(iParam0, iParam1);
			if (unk_0xE5965CDF24F93A9F(uVar0))
			{
				iVar1 = unk_0xD664875C4BDB14B0(unk_0x15CAA6D7B11F1A7C(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x7158135695FAE89D(iVar0, iVar3, 0))
					{
						if (unk_0xAB793EA186AB8DAA(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_78(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_79()
{
	if (func_80())
	{
		return 1;
	}
	return 0;
}

int func_80()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_87())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_86())
	{
		return 1;
	}
	if (func_85(159))
	{
		if (!func_84())
		{
			return 1;
		}
	}
	if (func_85(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_81() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_81()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_81()
{
	switch (func_83())
	{
		case 0:
			return func_82();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_82()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_83()
{
	return Global_31959;
}

bool func_84()
{
	return Global_2714762.f_698;
}

int func_85(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_86()
{
	return Global_2725403;
}

bool func_87()
{
	return Global_2714762.f_693;
}

int func_88(var uParam0)
{
	func_67(uParam0);
	if (func_66(uParam0))
	{
		if (func_52(uParam0))
		{
			if (unk_0x3A8B0F5B0E3DE13A(uParam0->f_1))
			{
				if (!func_49())
				{
					func_48(uParam0, 0, 0);
				}
				else
				{
					func_24(&(uParam0->f_6), 3);
				}
			}
		}
		else
		{
			func_24(&(uParam0->f_6), 3);
		}
	}
	return 1;
}

