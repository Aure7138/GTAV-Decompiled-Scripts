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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	char* sLocal_44 = NULL;
	char* sLocal_45 = NULL;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	sLocal_44 = "RCMBarryLeadInOut";
	sLocal_45 = "idle";
	Local_49 = { 189.5964f, -956.0344f, 29.5771f };
	Local_52 = { 190.2424f, -956.379f, 28.63f };
	unk_0x8B438725D591ED78(0, 26, 1);
	if (func_25(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) != 0)
		{
			unk_0x8FE445B0989D8C71(unk_0x93E99A2DBCBA9CFA(), 0, 0);
		}
	}
	if (unk_0x55EEDBBFDC6E810F(83))
	{
		func_22(0);
	}
	unk_0x28818732C8F0F80E(sLocal_44);
	unk_0xA3C681843B51A4CC("BARY1", 7);
	while (!unk_0x2BBF749E555360DC(sLocal_44) || !unk_0x578F9DB3098790E9(7))
	{
		unk_0x8B438725D591ED78(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x8B438725D591ED78(0, 26, 1);
	func_25(unk_0xC1A5EC5C986B98AD());
	iLocal_46 = unk_0xA5E11AF0A2B928C1() + 13000;
	iLocal_47 = unk_0x15A88CFAAFFC6C4B(0, 5);
	func_19();
	while (!func_13(&uLocal_43, 49, Local_52, func_18(1.12f), 0))
	{
		unk_0x8B438725D591ED78(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x8B438725D591ED78(0, 26, 1);
	func_12();
	iLocal_48 = unk_0xA5E11AF0A2B928C1() + 1000;
	unk_0x8B438725D591ED78(0, 26, 1);
	while (true)
	{
		func_25(unk_0xC1A5EC5C986B98AD());
		if (unk_0xA5E11AF0A2B928C1() < iLocal_48)
		{
			unk_0x8B438725D591ED78(0, 26, 1);
		}
		func_11();
		if (!func_25(uLocal_43))
		{
			func_22(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0xC1A5EC5C986B98AD(), Local_52, 1) > 70f)
		{
			func_1(&uLocal_40, 0);
			func_1(&uLocal_41, 0);
			func_1(&uLocal_42, 0);
			func_22(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0, bool bParam1)
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (unk_0xEFF022A75A217E08(*uParam0))
		{
			unk_0xA81AA70A4D25E140(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xC621CC7313639986(uParam0);
		}
		else
		{
			unk_0x6CB555E9F2BCE87A(*uParam0);
		}
	}
}

float func_2(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x055111B11E6624FD(uParam0, 0))
	{
		Var0 = { unk_0x30BE8A934C020461(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x30BE8A934C020461(uParam0, 0) };
	}
	return unk_0x2E496FE654DA4166(Var0, Param1, iParam4);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0xC1A5EC5C986B98AD()) && func_10(uLocal_43)) && !func_9()) && unk_0xA5E11AF0A2B928C1() > iLocal_46) && func_8(unk_0xC1A5EC5C986B98AD(), uLocal_43, 1) < 20f) && !unk_0x5ABCFD3441B37CA6())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, uLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (unk_0xA5E11AF0A2B928C1() + unk_0x15A88CFAAFFC6C4B(12000, 18000));
		return 1;
	}
	return 0;
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0xECDAB41968FF21A8(&Global_20591, 0);
	Global_21728 = iParam3;
	StringCopy(&Global_21715, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	StringCopy(&Global_21795, sParam2, 24);
	Global_22714 = iParam5;
	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}
}

char* func_6()
{
	char* sVar0;
	
	switch (iLocal_47)
	{
		case 0:
			sVar0 = "BARY1_RCMLI1";
			break;
		
		case 1:
			sVar0 = "BARY1_RCMLI2";
			break;
		
		case 2:
			sVar0 = "BARY1_RCMLI3";
			break;
		
		case 3:
			sVar0 = "BARY1_RCMLI4";
			break;
		
		case 4:
			sVar0 = "BARY1_RCMLI5";
			break;
	}
	iLocal_47++;
	if (iLocal_47 > 4)
	{
		iLocal_47 = 0;
	}
	return sVar0;
}

void func_7(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78558)
	{
		if (!unk_0x66599E73DBA5A850(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xAD4CEC14FE6404F6(uParam2, 0);
			}
			else
			{
				unk_0xAD4CEC14FE6404F6(uParam2, 1);
			}
		}
		if (!unk_0x66599E73DBA5A850(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59B8D6E436F5B21C(uParam2, 0);
			}
			else
			{
				unk_0x59B8D6E436F5B21C(uParam2, 1);
			}
		}
	}
}

float func_8(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x055111B11E6624FD(uParam0, 0))
	{
		Var0 = { unk_0x30BE8A934C020461(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x30BE8A934C020461(uParam0, 0) };
	}
	if (!unk_0x055111B11E6624FD(uParam1, 0))
	{
		Var3 = { unk_0x30BE8A934C020461(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x30BE8A934C020461(uParam1, 0) };
	}
	return unk_0x2E496FE654DA4166(Var0, Var3, iParam2);
}

int func_9()
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
	{
		return 1;
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		if (!unk_0x055111B11E6624FD(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	if (unk_0xD612176B6DC58EF7(-1, Local_52, 5f))
	{
		if (func_10(uLocal_43))
		{
			unk_0x2718E9CC165A99F6(uLocal_43, 0);
			unk_0xBDB4E7074E200B95(uLocal_43, 1000, 1, 0);
		}
		if (func_10(uLocal_41))
		{
			unk_0x2718E9CC165A99F6(uLocal_41, 0);
		}
		if (func_10(uLocal_40))
		{
			unk_0x2718E9CC165A99F6(uLocal_40, 0);
		}
	}
}

void func_12()
{
	if (func_10(uLocal_43))
	{
		if (!unk_0x1AFE963DA61006ED(uLocal_43))
		{
			unk_0x85BAE84748AD1A23(uLocal_43, 1, 0);
		}
		unk_0x0A3B6B850C2EC4FD(uLocal_43, 1, 0, 0, 0, 1);
		unk_0xC5B2830898581862(uLocal_43, 1);
		unk_0xCFFDA1550DF82B52(uLocal_43, 0);
		unk_0xD14067404D35AAE7(uLocal_43, 0);
		unk_0x260A70C42FAA4EDC(uLocal_43, "POSTBARRY");
		unk_0x8386356641D0DED1(uLocal_43, joaat("player"));
		unk_0xDDE449983CE7572E(uLocal_43, 0, 0);
		unk_0x2718E9CC165A99F6(uLocal_43, 1);
		unk_0xC2E3C377D893C17A(uLocal_43, Local_52, 1, 0, 0, 1);
		unk_0x692C3FDAD7DB53CC(uLocal_43, func_18(1.12f));
		unk_0x2718E9CC165A99F6(uLocal_43, 1);
		unk_0x3EE48ADC8C7F5CC4(uLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0xEDB03CCB50D11479(uLocal_43, unk_0xC1A5EC5C986B98AD(), -1, 0, 2);
	}
}

int func_13(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_17(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0x852EC2A7DE66202D(iVar0);
		if (unk_0x0CBB7C273DED26E7(iVar0))
		{
			if (unk_0x7DE17ACDD8BA2642(*uParam0))
			{
				unk_0xE9C250FA35A936C8(uParam0);
			}
			*uParam0 = unk_0x69FDD9508259E5B5(26, iVar0, Param2, uParam5, 0, 0);
			unk_0x87EDBB907BE25521(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0xAC464F61BE9FD50D(*uParam0, 3) == 0)
				{
					unk_0xFECAE061D8C80757(*uParam0, 5, 2, 0, 0);
				}
			}
			func_14(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0xE0A291F406691F03(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_14(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_96515[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_17(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

float func_18(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_19()
{
	if (unk_0x17AE936FF608BF89(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_41 = unk_0x0744FA5607ECEB91(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_25(uLocal_41))
		{
			if (!unk_0x1AFE963DA61006ED(uLocal_41))
			{
				unk_0x85BAE84748AD1A23(uLocal_41, 1, 0);
			}
			Local_49 = { 189.5964f, -956.0344f, 29.54f };
			unk_0xC2E3C377D893C17A(uLocal_41, Local_49, 1, 0, 0, 1);
			unk_0x692C3FDAD7DB53CC(uLocal_41, func_18(-2.01f));
			unk_0x2718E9CC165A99F6(uLocal_41, 1);
		}
	}
	if (unk_0x17AE936FF608BF89(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_40 = unk_0x0744FA5607ECEB91(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_25(uLocal_40))
		{
			if (!unk_0x1AFE963DA61006ED(uLocal_40))
			{
				unk_0x85BAE84748AD1A23(uLocal_40, 1, 0);
			}
			Local_49 = { 190.2574f, -956.3513f, 29.621f };
			unk_0xC2E3C377D893C17A(uLocal_40, Local_49, 1, 0, 0, 1);
			unk_0x692C3FDAD7DB53CC(uLocal_40, func_18(-1.68f));
			unk_0x2718E9CC165A99F6(uLocal_40, 1);
		}
	}
	else
	{
		Local_49 = { 190.2574f, -956.3513f, 29.621f };
		func_20(&uLocal_40, joaat("prop_chair_08"), Local_49, func_18(-1.68f));
		unk_0xC2E3C377D893C17A(uLocal_40, Local_49, 1, 0, 0, 1);
		unk_0x692C3FDAD7DB53CC(uLocal_40, func_18(-1.68f));
		unk_0x2718E9CC165A99F6(uLocal_40, 1);
	}
	Local_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0x17AE936FF608BF89(Local_49, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_42 = unk_0x0744FA5607ECEB91(Local_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_25(uLocal_42))
		{
			if (!unk_0x1AFE963DA61006ED(uLocal_42))
			{
				unk_0x85BAE84748AD1A23(uLocal_42, 1, 0);
			}
			Local_49.f_2 = 29.603f;
			unk_0xC2E3C377D893C17A(uLocal_42, Local_49, 1, 0, 0, 1);
			unk_0x692C3FDAD7DB53CC(uLocal_42, 23.45f);
		}
	}
	else
	{
		func_20(&uLocal_42, joaat("prop_protest_sign_01"), Local_49, 23.45f);
		unk_0xC2E3C377D893C17A(uLocal_42, Local_49, 1, 0, 0, 1);
		unk_0x692C3FDAD7DB53CC(uLocal_42, 23.45f);
	}
}

void func_20(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_21(uParam0);
	*uParam0 = unk_0xF19D6C0E8B56BE23(iParam1, Param2, 1, 1, 0);
	unk_0x692C3FDAD7DB53CC(*uParam0, fParam5);
}

void func_21(var uParam0)
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (unk_0xEFF022A75A217E08(*uParam0))
		{
			unk_0xA81AA70A4D25E140(*uParam0, 1, 1);
		}
		unk_0xEF078F1FEE785D3E(uParam0);
	}
}

void func_22(bool bParam0)
{
	if (bParam0)
	{
		func_24(&uLocal_43);
	}
	else
	{
		func_23(&uLocal_43, 1, 0, 1);
	}
	if (func_10(uLocal_41))
	{
		unk_0x2718E9CC165A99F6(uLocal_41, 0);
	}
	if (func_10(uLocal_40))
	{
		unk_0x2718E9CC165A99F6(uLocal_40, 0);
	}
	if (bParam0)
	{
		func_21(&uLocal_40);
		func_21(&uLocal_41);
		func_21(&uLocal_42);
	}
	else
	{
		func_1(&uLocal_40, 0);
		func_1(&uLocal_41, 0);
		func_1(&uLocal_42, 0);
	}
	unk_0x0B34FA69ECCE3927(sLocal_44);
	unk_0x32FF0B09752F532B(7, 0);
	unk_0x675D9C12C73D3DE7();
}

void func_23(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (!unk_0x66599E73DBA5A850(*uParam0))
		{
			unk_0x351E6B9FD37CFF33(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xA0E06A3361300416(*uParam0);
			}
			unk_0x71A535529C1CA5DF(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xC5B2830898581862(*uParam0, 0);
			}
		}
		unk_0x1EEF71E3CDD868D3(uParam0);
	}
}

void func_24(var uParam0)
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (!unk_0x055111B11E6624FD(*uParam0, 0))
		{
			unk_0x351E6B9FD37CFF33(*uParam0, 0, 1);
		}
		if (!unk_0x1AFE963DA61006ED(*uParam0))
		{
			unk_0x85BAE84748AD1A23(*uParam0, 1, 0);
		}
		unk_0xE9C250FA35A936C8(uParam0);
	}
}

bool func_25(var uParam0)
{
	if (!unk_0x7DE17ACDD8BA2642(uParam0))
	{
		return 0;
	}
	return !unk_0x055111B11E6624FD(uParam0, 0);
}

