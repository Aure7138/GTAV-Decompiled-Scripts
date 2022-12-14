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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
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
	int iVar0;
	int iVar1;
	char* sVar2;
	struct<3> Var3;
	int iVar6;
	
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
	sLocal_23 = "NULL";
	fLocal_26 = 80f;
	fLocal_27 = 140f;
	fLocal_28 = 180f;
	fLocal_31 = 0f;
	fLocal_35 = -0.0375f;
	fLocal_36 = 0.17f;
	iLocal_39 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	iVar1 = joaat("carwash1");
	sVar2 = "carwash1";
	Var3 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xB4C854DD86E40FDA(joaat("am_mp_carwash_launch")) > 1)
	{
		unk_0xAFBDF6A5E54114C1();
	}
	if (unk_0x9315DBF7D972F07A())
	{
		unk_0x3F57BEDBC381CBC7();
		unk_0x2C07CBAFAC54A645(0);
	}
	else
	{
		unk_0xAFBDF6A5E54114C1();
	}
	if (Global_2883694)
	{
		if (unk_0xB4C854DD86E40FDA(131838674) == 0)
		{
			unk_0x251C5C1DDC74D01D(131838674);
			while (!unk_0x095032C22DEE1587(131838674))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xC4BB298BD441BE78(131838674, &ScriptParam_0, 23, 1424);
		}
		unk_0xAFBDF6A5E54114C1();
	}
	if (func_12(unk_0xE2D3D51028F0428A()))
	{
	}
	iVar6 = 0;
	while (iVar6 == 0)
	{
		if ((((((func_9(unk_0x9E2D6C50374FCFA9(), 1, 0) || func_8()) || !func_7(unk_0x9E2D6C50374FCFA9())) || func_6()) || func_5(unk_0x9E2D6C50374FCFA9())) || func_4(unk_0x9E2D6C50374FCFA9())) || func_2(unk_0x9E2D6C50374FCFA9()))
		{
			iVar6 = 0;
		}
		else
		{
			iVar6 = 1;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0xB7A628320EFF8E47(Var3, func_1(157)) < unk_0xB7A628320EFF8E47(Var3, func_1(156)))
	{
		sVar2 = "carwash2";
	}
	iVar0 = unk_0x320D1840B6DAA1CC();
	iVar1 = unk_0x2E87280918B16506(sVar2);
	if (unk_0xB4C854DD86E40FDA(iVar1) == 0)
	{
		unk_0xAF76A37C80EFD1D8(sVar2);
		while (!unk_0xF79F112CE5999680(sVar2))
		{
			unk_0xAF76A37C80EFD1D8(sVar2);
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x320D1840B6DAA1CC() > iVar0 + 20000)
			{
				unk_0xAFBDF6A5E54114C1();
			}
		}
		if (unk_0xF79F112CE5999680(sVar2))
		{
			unk_0xE81651AD79516E48(sVar2, 1424);
			unk_0xD195D79715508EFA(sVar2);
		}
	}
	unk_0xAFBDF6A5E54114C1();
}

Vector3 func_1(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_32338[iVar0 /*23*/][0 /*3*/];
}

int func_2(int iParam0)
{
	if (iParam0 != func_3())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_5, 4);
	}
	return 0;
}

int func_3()
{
	return -1;
}

int func_4(int iParam0)
{
	if (iParam0 != func_3())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_408.f_2, 16);
	}
	return 0;
}

int func_5(int iParam0)
{
	if (iParam0 != func_3())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_348, 29);
	}
	return 0;
}

var func_6()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_36.f_18, 0);
}

bool func_7(int iParam0)
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_139, 6);
}

int func_8()
{
	int iVar0;
	
	iVar0 = Global_2703735;
	if (BitTest(Global_1888862[iVar0 /*120*/].f_14, 0) && Global_1888862[iVar0 /*120*/].f_23 == 2)
	{
		return 1;
	}
	return 0;
}

int func_9(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_10(iParam0))
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

bool func_10(int iParam0)
{
	return func_11(iParam0);
}

var func_11(int iParam0)
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
}

bool func_12(var uParam0)
{
	if (!unk_0xE5965CDF24F93A9F(uParam0))
	{
		return 0;
	}
	return !unk_0x55B23FE400FCEA6B(uParam0, 0);
}

