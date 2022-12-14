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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 1176255488;
	var uScriptParam_4 = 1;
	var uScriptParam_5 = -1;
	var uScriptParam_6 = -1;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	func_43(&uScriptParam_0);
	while (true)
	{
		func_42();
		if (func_33())
		{
		}
		else
		{
			func_14();
		}
	}
	func_1();
}

void func_1()
{
	func_3(&uLocal_37);
	func_2();
}

void func_2()
{
	unk_0xAFBDF6A5E54114C1();
}

void func_3(var uParam0)
{
	struct<7> Var0;
	
	func_4(0, 1, 1, 0, 0, 0, 0);
	if (unk_0x876B1078E90C91CB(uParam0->f_6))
	{
		unk_0x588DDCB644C6486A(uParam0->f_6, 0);
	}
	unk_0x12FAE55D27F5BC42(unk_0xE2D3D51028F0428A());
	*uParam0 = { Var0 };
}

void func_4(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x85B547885D8F8B40(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 1);
		func_13(1);
		unk_0x1B7AAA85D46FE6FB();
		unk_0xA240F4C910B19938();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (unk_0xA3329B7A7520670E())
			{
				unk_0xD681CC2BC1084DB6(0);
			}
			if (!func_12())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_11(1, iParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_13(0);
		unk_0x45227777D3EBECE5();
		Global_63160 = 0;
		if (bParam1)
		{
			unk_0xA91EC7D49DF9F229();
		}
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 0);
		func_11(0, iParam3, iParam2, 0);
		if (unk_0x9315DBF7D972F07A())
		{
			if (((((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_9(unk_0x9E2D6C50374FCFA9())) && !func_6(unk_0x9E2D6C50374FCFA9(), 0)) && !func_5()) && !bParam4) && !bParam5)
			{
				unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
			}
		}
		else if (((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_9(unk_0x9E2D6C50374FCFA9())) && !bParam4) && !bParam5)
		{
			unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
		}
		Global_78317 = 0;
	}
}

bool func_5()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_36.f_18, 14);
}

bool func_6(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_7(-1, 0) == 8;
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

int func_7(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
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

int func_8()
{
	return Global_1574918;
}

int func_9(int iParam0)
{
	if (func_6(iParam0, 0))
	{
		return 1;
	}
	if (func_10())
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

bool func_10()
{
	return BitTest(Global_2621446, 3);
}

int func_11(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x131A54781ECD3789() != iParam0 && uParam2)
		{
			unk_0x10B0B2BEC7FAA911(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_12()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_13(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_8136, 13);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_8136, 13);
	}
}

void func_14()
{
	if (func_15(&uLocal_37))
	{
		func_1();
	}
}

int func_15(var uParam0)
{
	unk_0xC43E67C9BA871ECB();
	unk_0xF43060DF31ACEA55();
	func_30(1);
	unk_0xCAFE3D4FD6C43219();
	func_24(0);
	if (unk_0xF1EC2C71FD1371B8())
	{
		unk_0xE6D8097F6A553F2A(0);
	}
	switch (func_23(uParam0))
	{
		case 0:
			func_18(uParam0);
			break;
		
		case 1:
			func_16(uParam0);
			break;
		
		case 2:
			return 1;
	}
	return 0;
}

void func_16(var uParam0)
{
	var uVar0;
	
	uVar0 = unk_0x57736A7B8965A88A(uParam0->f_5);
	if (unk_0x54DE1614490C2A83(uVar0) >= 0.9f)
	{
		unk_0x0B92578FB47DA084(uParam0->f_5);
		unk_0x850D4EF3D40FB068(0, 1, 3000, 1, 0, 0);
		unk_0x44B88FB74A8DDC72(unk_0x9E2D6C50374FCFA9(), 1f, 2000, 0, 1, 0);
		func_17(uParam0, 2);
	}
}

void func_17(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_18(var uParam0)
{
	var uVar0;
	
	uVar0 = func_20();
	unk_0x8FB472886552D737(uVar0);
	if (!unk_0x6F940C2636C076AD(uVar0))
	{
		return;
	}
	unk_0x5A7ACD1CDF509B0D(800);
	func_17(uParam0, 1);
	func_19(uParam0);
}

void func_19(var uParam0)
{
	var uVar0;
	
	uVar0 = func_20();
	uParam0->f_5 = unk_0x497E09037A63D346(uParam0->f_1, 0f, 0f, uParam0->f_4, 2, 0, 0, 1065353216, 0, 1065353216);
	unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), uParam0->f_5, uVar0, "action", 1000f, -1.5f, 0, 0, 1148846080, 0);
	unk_0x60E9DD146055C13E(uParam0->f_5);
	unk_0x4EE98FB70F8A09DE(unk_0xE2D3D51028F0428A(), "HS4F_IG25_BEACH", 0);
	unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 0, 0);
	uParam0->f_6 = unk_0xAE96F9AFF21228DC(964613260, 1);
	unk_0x8B28384F571E6DA9(uParam0->f_6, "action_camera", uVar0, uParam0->f_1, 0f, 0f, uParam0->f_4, 0, 2);
	unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
	unk_0xAFC1FBF3F6AE7B9A(uVar0);
}

char* func_20()
{
	if (func_21())
	{
		return "ANIM@SCRIPTED@HEIST@IG25_BEACH@HEELED@";
	}
	return "ANIM@SCRIPTED@HEIST@IG25_BEACH@MALE@";
}

bool func_21()
{
	return func_22(unk_0x9E2D6C50374FCFA9());
}

int func_22(int iParam0)
{
	if (unk_0x15CAA6D7B11F1A7C(unk_0x407E03586628E458(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_23(var uParam0)
{
	return *uParam0;
}

void func_24(int iParam0)
{
	if (func_29())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_28(0))
		{
			func_25(iParam0);
		}
		unk_0xCED9E32812D6C7C7(&Global_8137, 2);
	}
}

void func_25(int iParam0)
{
	if (func_29())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_27())
		{
			func_26(1, 1);
		}
		else
		{
			func_26(0, 0);
		}
	}
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		unk_0xCED9E32812D6C7C7(&Global_8137, 16);
	}
	if (unk_0xA3329B7A7520670E())
	{
		unk_0xD681CC2BC1084DB6(0);
	}
	Global_21605 = 5;
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_8136, 30);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_8136, 30);
	}
	if (!func_12())
	{
		Global_20266.f_1 = 3;
	}
}

void func_26(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_28(0))
		{
			Global_20464 = 1;
			if (bParam1)
			{
				unk_0xC81489026785778A(&Global_20203);
			}
			Global_20194 = { Global_20212[Global_20211 /*3*/] };
			unk_0x31636F0193379566(Global_20194);
		}
	}
	else if (Global_20464 == 1)
	{
		Global_20464 = 0;
		Global_20194 = { Global_20219[Global_20211 /*3*/] };
		if (bParam1)
		{
			unk_0x31636F0193379566(Global_20203);
		}
		else
		{
			unk_0x31636F0193379566(Global_20194);
		}
	}
}

bool func_27()
{
	return BitTest(Global_1958711, 5);
}

int func_28(int iParam0)
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

bool func_29()
{
	return BitTest(Global_1958711, 19);
}

void func_30(bool bParam0)
{
	if (bParam0)
	{
		func_32();
	}
	func_31(4, -1);
	func_31(6, -1);
	func_31(7, -1);
	func_31(3, -1);
	func_31(1, -1);
	func_31(2, -1);
	func_31(11, -1);
	func_31(13, -1);
	func_31(14, -1);
	func_31(16, -1);
}

void func_31(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_1648034.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1648034.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_32()
{
	Global_2815059.f_4599 = 0;
}

int func_33()
{
	if (func_34())
	{
		return 1;
	}
	return 0;
}

int func_34()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_41())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_40())
	{
		return 1;
	}
	if (func_39(159))
	{
		if (!func_38())
		{
			return 1;
		}
	}
	if (func_39(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_35() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_35()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_35()
{
	switch (func_37())
	{
		case 0:
			return func_36();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_36()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_37()
{
	return Global_31959;
}

bool func_38()
{
	return Global_2714762.f_698;
}

int func_39(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_40()
{
	return Global_2725403;
}

bool func_41()
{
	return Global_2714762.f_693;
}

void func_42()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_43(var uParam0)
{
	unk_0xD9B114A8D3A8319F(32, 0, -1);
	func_44(&uLocal_37, *uParam0, uParam0->f_3);
}

void func_44(var uParam0, struct<3> Param1, var uParam4)
{
	func_46(uParam0, Param1);
	func_45(uParam0, uParam4);
	func_4(1, 1, 1, 0, 0, 0, 0);
	unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), Param1, 1, 0, 0, 1);
	if (unk_0xA829C9A2767AC8EF())
	{
		unk_0x0F3DC7925AFEBDFC();
	}
}

void func_45(var uParam0, var uParam1)
{
	uParam0->f_4 = uParam1;
}

void func_46(var uParam0, struct<3> Param1)
{
	uParam0->f_1 = { Param1 };
}

