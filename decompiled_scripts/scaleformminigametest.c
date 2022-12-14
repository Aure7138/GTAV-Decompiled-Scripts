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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23 = 0;
	bool bLocal_24 = 0;
	float fLocal_25 = 0f;
	bool bLocal_26 = 0;
	bool bLocal_27 = 0;
	float fLocal_28 = 0f;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	float fLocal_31 = 0f;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	float fLocal_34 = 0f;
	bool bLocal_35 = 0;
	bool bLocal_36 = 0;
	float fLocal_37 = 0f;
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	float fLocal_40 = 0f;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	float fLocal_43 = 0f;
	bool bLocal_44 = 0;
	bool bLocal_45 = 0;
	float fLocal_46 = 0f;
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
	uLocal_20 = unk_0xC5B823372B67998A(100f, 100f, 30f);
	iLocal_22 = 1;
	fLocal_25 = 0f;
	fLocal_28 = 0f;
	fLocal_31 = 0f;
	fLocal_34 = 0f;
	fLocal_37 = 0f;
	fLocal_40 = 0f;
	fLocal_43 = 0f;
	fLocal_46 = 0f;
	if (unk_0xA829C9A2767AC8EF())
	{
		unk_0x5A7ACD1CDF509B0D(500);
	}
	if (unk_0x4B34601C5C56F3EE(3))
	{
		func_2();
	}
	uLocal_18 = unk_0x528279F3F1EEF869("p_bubblegum");
	while (!unk_0x0347CCBD719C8ADC(uLocal_18))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (iLocal_21 == 1)
		{
		}
		if (iLocal_22 == 1)
		{
			iLocal_22 = 0;
			uLocal_19 = unk_0xB93A4265CB0F5B1F("DEFAULT_SCRIPTED_CAMERA", 1);
			if (unk_0x876B1078E90C91CB(uLocal_19))
			{
				unk_0x15F5DB94F871E803(uLocal_19, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				unk_0x74789DA66781DB64(uLocal_19, 0.01f);
				unk_0xAC79343A28CEA8E0(uLocal_19, 0.02f);
				unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
			}
			unk_0x1A5B5BA56167D412(uLocal_20, 66);
		}
		iLocal_21 = 1;
		unk_0x694170BB080C08FF(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_18);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	if (Global_20245 == 0)
	{
		if (unk_0x4C1B8C5717647539(2, 189) || unk_0x4C1B8C5717647539(2, 190))
		{
			Global_20245 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
	else if (unk_0x83666F9FB8FEBD4B() > 50)
	{
		Global_20245 = 0;
	}
	if (Global_20245 == 0)
	{
		if (unk_0xF09A4F413B0D30EB(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (unk_0x4C1B8C5717647539(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (!unk_0x4C1B8C5717647539(2, 189))
		{
			bLocal_23 = false;
			fLocal_25 = 0f;
		}
		if (!bLocal_23 == bLocal_24)
		{
			bLocal_24 = bLocal_23;
			unk_0xEA5DEA46C3EE64D3(uParam0, "SET_INPUT_EVENT");
			unk_0x4F47E317C74C543B(10);
			unk_0xCA5D23E5F0F0306F(fLocal_25);
			unk_0x6F06CF0E9AB02847();
		}
		if (unk_0xF09A4F413B0D30EB(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (unk_0x4C1B8C5717647539(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (!unk_0x4C1B8C5717647539(2, 190))
		{
			bLocal_26 = false;
			fLocal_28 = 0f;
		}
		if (!bLocal_26 == bLocal_27)
		{
			bLocal_27 = bLocal_26;
			unk_0xEA5DEA46C3EE64D3(uParam0, "SET_INPUT_EVENT");
			unk_0x4F47E317C74C543B(11);
			unk_0xCA5D23E5F0F0306F(fLocal_28);
			unk_0x6F06CF0E9AB02847();
		}
		if (unk_0xF09A4F413B0D30EB(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (unk_0x4C1B8C5717647539(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (!unk_0x4C1B8C5717647539(2, 188))
		{
			bLocal_29 = false;
			fLocal_31 = 0f;
		}
		if (!bLocal_29 == bLocal_30)
		{
			bLocal_30 = bLocal_29;
			unk_0xEA5DEA46C3EE64D3(uParam0, "SET_INPUT_EVENT");
			unk_0x4F47E317C74C543B(8);
			unk_0xCA5D23E5F0F0306F(fLocal_31);
			unk_0x6F06CF0E9AB02847();
		}
		if (unk_0xF09A4F413B0D30EB(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (unk_0x4C1B8C5717647539(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (!unk_0x4C1B8C5717647539(2, 187))
		{
			bLocal_32 = false;
			fLocal_34 = 0f;
		}
		if (!bLocal_32 == bLocal_33)
		{
			bLocal_33 = bLocal_32;
			unk_0xEA5DEA46C3EE64D3(uParam0, "SET_INPUT_EVENT");
			unk_0x4F47E317C74C543B(9);
			unk_0xCA5D23E5F0F0306F(fLocal_34);
			unk_0x6F06CF0E9AB02847();
		}
		if (unk_0xF09A4F413B0D30EB(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (unk_0x4C1B8C5717647539(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (!unk_0x4C1B8C5717647539(2, 202))
		{
			bLocal_35 = false;
			fLocal_37 = 0f;
		}
		if (!bLocal_35 == bLocal_36)
		{
			bLocal_36 = bLocal_35;
			unk_0xEA5DEA46C3EE64D3(uParam0, "SET_INPUT_EVENT");
			unk_0x4F47E317C74C543B(17);
			unk_0xCA5D23E5F0F0306F(fLocal_37);
			unk_0x6F06CF0E9AB02847();
		}
		if (unk_0xF09A4F413B0D30EB(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (unk_0x4C1B8C5717647539(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (!unk_0x4C1B8C5717647539(2, 204))
		{
			bLocal_38 = false;
			fLocal_40 = 0f;
		}
		if (!bLocal_38 == bLocal_39)
		{
			bLocal_39 = bLocal_38;
			unk_0xEA5DEA46C3EE64D3(uParam0, "SET_INPUT_EVENT");
			unk_0x4F47E317C74C543B(15);
			unk_0xCA5D23E5F0F0306F(fLocal_40);
			unk_0x6F06CF0E9AB02847();
		}
		if (unk_0xF09A4F413B0D30EB(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (unk_0x4C1B8C5717647539(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (!unk_0x4C1B8C5717647539(2, 201))
		{
			bLocal_41 = false;
			fLocal_43 = 0f;
		}
		if (!bLocal_41 == bLocal_42)
		{
			bLocal_42 = bLocal_41;
			unk_0xEA5DEA46C3EE64D3(uParam0, "SET_INPUT_EVENT");
			unk_0x4F47E317C74C543B(16);
			unk_0xCA5D23E5F0F0306F(fLocal_43);
			unk_0x6F06CF0E9AB02847();
		}
		if (unk_0xF09A4F413B0D30EB(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (unk_0x4C1B8C5717647539(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (!unk_0x4C1B8C5717647539(2, 203))
		{
			bLocal_44 = false;
			fLocal_46 = 0f;
		}
		if (!bLocal_44 == bLocal_45)
		{
			bLocal_45 = bLocal_44;
			unk_0xEA5DEA46C3EE64D3(uParam0, "SET_INPUT_EVENT");
			unk_0x4F47E317C74C543B(14);
			unk_0xCA5D23E5F0F0306F(fLocal_46);
			unk_0x6F06CF0E9AB02847();
		}
	}
}

void func_2()
{
	if (unk_0x876B1078E90C91CB(uLocal_19))
	{
		unk_0x588DDCB644C6486A(uLocal_19, 0);
	}
	unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
	func_3(0);
	unk_0x27F66B7FE7DB7C3A(0);
	unk_0x3410421C60BF7143(1);
	unk_0x705B098546DEB18A(&uLocal_18);
	unk_0xAFBDF6A5E54114C1();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			unk_0xCED9E32812D6C7C7(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
		}
	}
	else if (Global_20266.f_1 == 1)
	{
		if (!Global_20266.f_1 == 0)
		{
			Global_20266.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_7())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
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
	if (!func_5())
	{
		Global_20266.f_1 = 3;
	}
}

int func_5()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
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

bool func_7()
{
	return BitTest(Global_1958711, 5);
}

bool func_8()
{
	return BitTest(Global_1958711, 19);
}

int func_9(int iParam0)
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

void func_10()
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

