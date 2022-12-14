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
	unk_0x7653D561C9574763(0, 26, 1);
	if (func_25(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) != 0)
		{
			unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 0, 0);
		}
	}
	if (unk_0x4B34601C5C56F3EE(83))
	{
		func_22(0);
	}
	unk_0x8FB472886552D737(sLocal_44);
	unk_0x249A0D3C5714BCF4("BARY1", 7);
	while (!unk_0x6F940C2636C076AD(sLocal_44) || !unk_0x01896B71C5AC966E(7))
	{
		unk_0x7653D561C9574763(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x7653D561C9574763(0, 26, 1);
	func_25(unk_0xE2D3D51028F0428A());
	iLocal_46 = unk_0x320D1840B6DAA1CC() + 13000;
	iLocal_47 = unk_0x5853B15F78E1A265(0, 5);
	func_19();
	while (!func_13(&uLocal_43, 49, Local_52, func_18(1.12f), 0))
	{
		unk_0x7653D561C9574763(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x7653D561C9574763(0, 26, 1);
	func_12();
	iLocal_48 = unk_0x320D1840B6DAA1CC() + 1000;
	unk_0x7653D561C9574763(0, 26, 1);
	while (true)
	{
		func_25(unk_0xE2D3D51028F0428A());
		if (unk_0x320D1840B6DAA1CC() < iLocal_48)
		{
			unk_0x7653D561C9574763(0, 26, 1);
		}
		func_11();
		if (!func_25(uLocal_43))
		{
			func_22(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0xE2D3D51028F0428A(), Local_52, 1) > 70f)
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
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (unk_0x508CDC652F5361B5(*uParam0))
		{
			unk_0xE6451C2F193342C7(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x59E393B344098656(uParam0);
		}
		else
		{
			unk_0x13A78FCE42E3B132(*uParam0);
		}
	}
}

float func_2(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x55B23FE400FCEA6B(uParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(uParam0, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Param1, iParam4);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0xE2D3D51028F0428A()) && func_10(uLocal_43)) && !func_9()) && unk_0x320D1840B6DAA1CC() > iLocal_46) && func_8(unk_0xE2D3D51028F0428A(), uLocal_43, 1) < 20f) && !unk_0x969475FA6AB2673A())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, uLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (unk_0x320D1840B6DAA1CC() + unk_0x5853B15F78E1A265(12000, 18000));
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
	unk_0xCED9E32812D6C7C7(&Global_20471, 0);
	Global_21608 = iParam3;
	StringCopy(&Global_21595, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = iParam5;
	if (iParam3 == 0)
	{
		Global_22592 = 1;
		Global_22590 = 0;
	}
	else
	{
		Global_22592 = 0;
		Global_22590 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22593 = 1;
		Global_22591 = 0;
	}
	else
	{
		Global_22593 = 0;
		Global_22591 = 1;
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
	if (!Global_78319)
	{
		if (!unk_0xF68107C40359970C(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x2378080C93821600(uParam2, 0);
			}
			else
			{
				unk_0x2378080C93821600(uParam2, 1);
			}
		}
		if (!unk_0xF68107C40359970C(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x102D1A546FDB4B6D(uParam2, 0);
			}
			else
			{
				unk_0x102D1A546FDB4B6D(uParam2, 1);
			}
		}
	}
}

float func_8(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x55B23FE400FCEA6B(uParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(uParam0, 0) };
	}
	if (!unk_0x55B23FE400FCEA6B(uParam1, 0))
	{
		Var3 = { unk_0x6B62510F212526DC(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x6B62510F212526DC(uParam1, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Var3, iParam2);
}

int func_9()
{
	if (Global_21605 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	if (unk_0x89D0E0233F6E59A7(-1, Local_52, 5f))
	{
		if (func_10(uLocal_43))
		{
			unk_0x5C65DDDC219B3AA5(uLocal_43, 0);
			unk_0xAD22EA15D9200B6E(uLocal_43, 1000, 1, 0);
		}
		if (func_10(uLocal_41))
		{
			unk_0x5C65DDDC219B3AA5(uLocal_41, 0);
		}
		if (func_10(uLocal_40))
		{
			unk_0x5C65DDDC219B3AA5(uLocal_40, 0);
		}
	}
}

void func_12()
{
	if (func_10(uLocal_43))
	{
		if (!unk_0xA6A089369417736E(uLocal_43))
		{
			unk_0x2D58A6131679D82C(uLocal_43, 1, 0);
		}
		unk_0xD9D122A54FFE62B8(uLocal_43, 1, 0, 0, 0);
		unk_0x50274A7EACA3133A(uLocal_43, 1);
		unk_0x62BDDA84CCCF90A9(uLocal_43, 0);
		unk_0xA7266A50941DBAEA(uLocal_43, 0);
		unk_0xD8B630F464FE1D6D(uLocal_43, "POSTBARRY");
		unk_0xFF4BEB6CFF55A013(uLocal_43, joaat("player"));
		unk_0x959E1626CBC7D38A(uLocal_43, 0, 0);
		unk_0x5C65DDDC219B3AA5(uLocal_43, 1);
		unk_0xC64B6E13A6A7F517(uLocal_43, Local_52, 1, 0, 0, 1);
		unk_0xBBF86885619695CE(uLocal_43, func_18(1.12f));
		unk_0x5C65DDDC219B3AA5(uLocal_43, 1);
		unk_0x49D97B076E3590AC(uLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0xF30F15F203736DE4(uLocal_43, unk_0xE2D3D51028F0428A(), -1, 0, 2);
	}
}

int func_13(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_17(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0xD69A0C3662175E68(iVar0);
		if (unk_0x0152AA00FA3130F1(iVar0))
		{
			if (unk_0xE5965CDF24F93A9F(*uParam0))
			{
				unk_0x05CB75C0837196F9(uParam0);
			}
			*uParam0 = unk_0xA8D58C3AADA2C41C(26, iVar0, Param2, uParam5, 0, 0);
			unk_0xDCB52C614B3660EC(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x5355BAA621C153CF(*uParam0, 3) == 0)
				{
					unk_0xE3752B10DC995E95(*uParam0, 5, 2, 0, 0);
				}
			}
			func_14(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0xF1A23B343DFEDFD0(iVar0);
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
	Global_96275[(iVar0 - 3)] = uParam0;
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
	return Global_1998[iParam0 /*29*/];
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
	if (unk_0x574E2A23F0F76E35(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_41 = unk_0x87A467676BDF8C35(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_25(uLocal_41))
		{
			if (!unk_0xA6A089369417736E(uLocal_41))
			{
				unk_0x2D58A6131679D82C(uLocal_41, 1, 0);
			}
			Local_49 = { 189.5964f, -956.0344f, 29.54f };
			unk_0xC64B6E13A6A7F517(uLocal_41, Local_49, 1, 0, 0, 1);
			unk_0xBBF86885619695CE(uLocal_41, func_18(-2.01f));
			unk_0x5C65DDDC219B3AA5(uLocal_41, 1);
		}
	}
	if (unk_0x574E2A23F0F76E35(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_40 = unk_0x87A467676BDF8C35(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_25(uLocal_40))
		{
			if (!unk_0xA6A089369417736E(uLocal_40))
			{
				unk_0x2D58A6131679D82C(uLocal_40, 1, 0);
			}
			Local_49 = { 190.2574f, -956.3513f, 29.621f };
			unk_0xC64B6E13A6A7F517(uLocal_40, Local_49, 1, 0, 0, 1);
			unk_0xBBF86885619695CE(uLocal_40, func_18(-1.68f));
			unk_0x5C65DDDC219B3AA5(uLocal_40, 1);
		}
	}
	else
	{
		Local_49 = { 190.2574f, -956.3513f, 29.621f };
		func_20(&uLocal_40, joaat("prop_chair_08"), Local_49, func_18(-1.68f));
		unk_0xC64B6E13A6A7F517(uLocal_40, Local_49, 1, 0, 0, 1);
		unk_0xBBF86885619695CE(uLocal_40, func_18(-1.68f));
		unk_0x5C65DDDC219B3AA5(uLocal_40, 1);
	}
	Local_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0x574E2A23F0F76E35(Local_49, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_42 = unk_0x87A467676BDF8C35(Local_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_25(uLocal_42))
		{
			if (!unk_0xA6A089369417736E(uLocal_42))
			{
				unk_0x2D58A6131679D82C(uLocal_42, 1, 0);
			}
			Local_49.f_2 = 29.603f;
			unk_0xC64B6E13A6A7F517(uLocal_42, Local_49, 1, 0, 0, 1);
			unk_0xBBF86885619695CE(uLocal_42, 23.45f);
		}
	}
	else
	{
		func_20(&uLocal_42, joaat("prop_protest_sign_01"), Local_49, 23.45f);
		unk_0xC64B6E13A6A7F517(uLocal_42, Local_49, 1, 0, 0, 1);
		unk_0xBBF86885619695CE(uLocal_42, 23.45f);
	}
}

void func_20(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_21(uParam0);
	*uParam0 = unk_0x0E536D72AB30F4C8(iParam1, Param2, 1, 1, 0);
	unk_0xBBF86885619695CE(*uParam0, fParam5);
}

void func_21(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (unk_0x508CDC652F5361B5(*uParam0))
		{
			unk_0xE6451C2F193342C7(*uParam0, 1, 1);
		}
		unk_0x4BDA5AFD88C085EB(uParam0);
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
		unk_0x5C65DDDC219B3AA5(uLocal_41, 0);
	}
	if (func_10(uLocal_40))
	{
		unk_0x5C65DDDC219B3AA5(uLocal_40, 0);
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
	unk_0xAFC1FBF3F6AE7B9A(sLocal_44);
	unk_0xC511E7C272201CF7(7, 0);
	unk_0xAFBDF6A5E54114C1();
}

void func_23(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (!unk_0xF68107C40359970C(*uParam0))
		{
			unk_0x006574E87E6F1942(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xCA2872F050840231(*uParam0);
			}
			unk_0xABC2CA6F28903308(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x50274A7EACA3133A(*uParam0, 0);
			}
		}
		unk_0xB3822DB3D538C8F3(uParam0);
	}
}

void func_24(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(*uParam0, 0))
		{
			unk_0x006574E87E6F1942(*uParam0, 0, 1);
		}
		if (!unk_0xA6A089369417736E(*uParam0))
		{
			unk_0x2D58A6131679D82C(*uParam0, 1, 0);
		}
		unk_0x05CB75C0837196F9(uParam0);
	}
}

bool func_25(var uParam0)
{
	if (!unk_0xE5965CDF24F93A9F(uParam0))
	{
		return 0;
	}
	return !unk_0x55B23FE400FCEA6B(uParam0, 0);
}

