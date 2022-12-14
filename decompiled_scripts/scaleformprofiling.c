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
	if (unk_0xA829C9A2767AC8EF())
	{
		unk_0x5A7ACD1CDF509B0D(500);
	}
	if (unk_0x4B34601C5C56F3EE(3))
	{
		func_2();
	}
	uLocal_18 = unk_0x528279F3F1EEF869("scaleform_profiling");
	while (!unk_0x0347CCBD719C8ADC(uLocal_18))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x694170BB080C08FF(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_18);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	if (Global_20245 == 0)
	{
		if (((((((unk_0x4C1B8C5717647539(2, 189) || unk_0x4C1B8C5717647539(2, 190)) || unk_0x4C1B8C5717647539(2, 188)) || unk_0x4C1B8C5717647539(2, 187)) || unk_0x4C1B8C5717647539(2, 205)) || unk_0x4C1B8C5717647539(2, 206)) || unk_0x4C1B8C5717647539(2, 201)) || unk_0x4C1B8C5717647539(2, 202))
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
		if (unk_0x4C1B8C5717647539(2, 189))
		{
			unk_0xEA5DEA46C3EE64D3(uParam0, "SET_INPUT_EVENT");
			unk_0x4F47E317C74C543B(10);
			unk_0x6F06CF0E9AB02847();
		}
		if (unk_0x4C1B8C5717647539(2, 190))
		{
			unk_0xEA5DEA46C3EE64D3(uParam0, "SET_INPUT_EVENT");
			unk_0x4F47E317C74C543B(11);
			unk_0x6F06CF0E9AB02847();
		}
		if (unk_0x4C1B8C5717647539(2, 205))
		{
			unk_0xEA5DEA46C3EE64D3(uParam0, "SET_INPUT_EVENT");
			unk_0x4F47E317C74C543B(4);
			unk_0x6F06CF0E9AB02847();
		}
		if (unk_0x4C1B8C5717647539(2, 206))
		{
			unk_0xEA5DEA46C3EE64D3(uParam0, "SET_INPUT_EVENT");
			unk_0x4F47E317C74C543B(6);
			unk_0x6F06CF0E9AB02847();
		}
		if (unk_0x4C1B8C5717647539(2, 188))
		{
			unk_0xEA5DEA46C3EE64D3(uParam0, "SET_INPUT_EVENT");
			unk_0x4F47E317C74C543B(8);
			unk_0x6F06CF0E9AB02847();
		}
		if (unk_0x4C1B8C5717647539(2, 187))
		{
			unk_0xEA5DEA46C3EE64D3(uParam0, "SET_INPUT_EVENT");
			unk_0x4F47E317C74C543B(9);
			unk_0x6F06CF0E9AB02847();
		}
		if (unk_0x4C1B8C5717647539(2, 201))
		{
			unk_0xEA5DEA46C3EE64D3(uParam0, "SET_INPUT_EVENT");
			unk_0x4F47E317C74C543B(16);
			unk_0x6F06CF0E9AB02847();
		}
		if (unk_0x4C1B8C5717647539(2, 202))
		{
			unk_0xEA5DEA46C3EE64D3(uParam0, "SET_INPUT_EVENT");
			unk_0x4F47E317C74C543B(17);
			unk_0x6F06CF0E9AB02847();
		}
	}
}

void func_2()
{
	func_3(0);
	unk_0x27F66B7FE7DB7C3A(0);
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

