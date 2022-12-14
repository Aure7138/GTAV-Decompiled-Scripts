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
	var uLocal_19 = 0;
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
		func_5();
	}
	uLocal_19 = unk_0x528279F3F1EEF869("instructional_buttons");
	while (!unk_0x0347CCBD719C8ADC(uLocal_19))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0xC4353D240DCE9533(uLocal_19, 255, 255, 255, 0, 0);
		func_4();
		func_1(iLocal_18, uLocal_19);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xEA5DEA46C3EE64D3(uParam1, "CLEAR_ALL");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(uParam1, "SET_CLEAR_SPACE");
			unk_0x4F47E317C74C543B(200);
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(uParam1, "SET_DATA_SLOT");
			unk_0x4F47E317C74C543B(0);
			func_3(unk_0x2018949B2C9FD96A(2, 191, 1));
			func_2("PRESS A");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(uParam1, "SET_DATA_SLOT");
			unk_0x4F47E317C74C543B(1);
			func_3(unk_0x2018949B2C9FD96A(2, 194, 1));
			func_2("PRESS B");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(uParam1, "SET_DATA_SLOT");
			unk_0x4F47E317C74C543B(2);
			func_3(unk_0x2018949B2C9FD96A(2, 193, 1));
			func_2("PRESS X");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(uParam1, "SET_DATA_SLOT");
			unk_0x4F47E317C74C543B(3);
			func_3(unk_0x2018949B2C9FD96A(2, 192, 1));
			func_2("PRESS Y");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(80);
			unk_0x6F06CF0E9AB02847();
			iLocal_18 = -1;
			break;
		
		case 1:
			unk_0xEA5DEA46C3EE64D3(uParam1, "CLEAR_ALL");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(uParam1, "SET_CLEAR_SPACE");
			unk_0x4F47E317C74C543B(200);
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(uParam1, "SET_DATA_SLOT");
			unk_0x4F47E317C74C543B(0);
			func_3(unk_0x2018949B2C9FD96A(2, 187, 1));
			func_2("DOWN");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(uParam1, "SET_DATA_SLOT");
			unk_0x4F47E317C74C543B(1);
			func_3(unk_0x2018949B2C9FD96A(2, 188, 1));
			func_2("UP");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(uParam1, "SET_DATA_SLOT");
			unk_0x4F47E317C74C543B(2);
			func_3(unk_0x2018949B2C9FD96A(2, 190, 1));
			func_2("LEFT");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(uParam1, "SET_DATA_SLOT");
			unk_0x4F47E317C74C543B(3);
			func_3(unk_0x2018949B2C9FD96A(2, 189, 1));
			func_2("RIGHT");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(80);
			unk_0x6F06CF0E9AB02847();
			iLocal_18 = -1;
			break;
		
		case 2:
			unk_0xEA5DEA46C3EE64D3(uParam1, "CLEAR_ALL");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(uParam1, "SET_CLEAR_SPACE");
			unk_0x4F47E317C74C543B(200);
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(uParam1, "SET_DATA_SLOT");
			unk_0x4F47E317C74C543B(0);
			func_3(unk_0x2018949B2C9FD96A(2, 202, 1));
			func_2("BACK");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(80);
			unk_0x6F06CF0E9AB02847();
			iLocal_18 = -1;
			break;
		
		default:
			break;
	}
}

void func_2(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_3(var uParam0)
{
	unk_0x341872E4D54CD053(uParam0);
}

void func_4()
{
	if (Global_20245 == 0)
	{
		if (((((((((unk_0x4C1B8C5717647539(2, 189) || unk_0x4C1B8C5717647539(2, 190)) || unk_0x4C1B8C5717647539(2, 188)) || unk_0x4C1B8C5717647539(2, 187)) || unk_0x4C1B8C5717647539(2, 205)) || unk_0x4C1B8C5717647539(2, 206)) || unk_0x4C1B8C5717647539(2, 207)) || unk_0x4C1B8C5717647539(2, 208)) || unk_0x4C1B8C5717647539(2, 201)) || unk_0x4C1B8C5717647539(2, 202))
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
		if (unk_0x4C1B8C5717647539(2, 217))
		{
			iLocal_18 = 1;
		}
		if (unk_0x4C1B8C5717647539(2, 189))
		{
			iLocal_18 = 2;
		}
		if (unk_0x4C1B8C5717647539(2, 190))
		{
			iLocal_18 = 2;
		}
		if (unk_0x4C1B8C5717647539(2, 205))
		{
		}
		if (unk_0x4C1B8C5717647539(2, 206))
		{
		}
		if (unk_0x4C1B8C5717647539(2, 207))
		{
		}
		if (unk_0x4C1B8C5717647539(2, 208))
		{
		}
		if (unk_0x4C1B8C5717647539(2, 188))
		{
			iLocal_18 = 2;
		}
		if (unk_0x4C1B8C5717647539(2, 187))
		{
			iLocal_18 = 2;
		}
		if (unk_0x4C1B8C5717647539(2, 201))
		{
			iLocal_18 = 1;
		}
		if (unk_0x4C1B8C5717647539(2, 202))
		{
			iLocal_18 = 0;
		}
		if (unk_0x4C1B8C5717647539(2, 203))
		{
			iLocal_18 = 1;
		}
		if (unk_0x4C1B8C5717647539(2, 204))
		{
			iLocal_18 = 1;
		}
	}
}

void func_5()
{
	func_6(0);
	unk_0x27F66B7FE7DB7C3A(0);
	unk_0x705B098546DEB18A(&uLocal_19);
	unk_0xAFBDF6A5E54114C1();
}

void func_6(bool bParam0)
{
	if (bParam0)
	{
		func_13();
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			unk_0xCED9E32812D6C7C7(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_12(0))
		{
			func_7(0);
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

void func_7(int iParam0)
{
	if (func_11())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_10())
		{
			func_9(1, 1);
		}
		else
		{
			func_9(0, 0);
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
	if (!func_8())
	{
		Global_20266.f_1 = 3;
	}
}

int func_8()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_12(0))
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

bool func_10()
{
	return BitTest(Global_1958711, 5);
}

bool func_11()
{
	return BitTest(Global_1958711, 19);
}

int func_12(int iParam0)
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

void func_13()
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

