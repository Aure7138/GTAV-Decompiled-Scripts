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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
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
	if (unk_0x4B34601C5C56F3EE(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0x8FE9914D4872D601()) && unk_0x05C8821CD3E101BA())
	{
		unk_0x94B5910A9C945688(1);
		if (!unk_0xA829C9A2767AC8EF())
		{
			if (!unk_0xCB1EF1E7B77ADF4C())
			{
				unk_0x859006DB870314C5(800);
			}
		}
		iLocal_20 = unk_0x528279F3F1EEF869("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0x528279F3F1EEF869("INSTRUCTIONAL_BUTTONS");
		while (!unk_0x0347CCBD719C8ADC(iLocal_20) || !unk_0x0347CCBD719C8ADC(iLocal_21))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xEA5DEA46C3EE64D3(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0x6F06CF0E9AB02847();
		unk_0xEA5DEA46C3EE64D3(iLocal_21, "SET_DATA_SLOT_EMPTY");
		unk_0x6F06CF0E9AB02847();
		unk_0xEA5DEA46C3EE64D3(iLocal_21, "SET_DATA_SLOT");
		unk_0x4F47E317C74C543B(0);
		func_4(unk_0x2018949B2C9FD96A(2, 201, 1));
		func_5("HUD_CONTINUE");
		unk_0x6F06CF0E9AB02847();
		unk_0xEA5DEA46C3EE64D3(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xD7D6BA6E36AEC182(0);
		unk_0x6F06CF0E9AB02847();
		while (!unk_0xA829C9A2767AC8EF())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xCDEE827E5CE50CA4();
		while (!iLocal_22)
		{
			unk_0x33F5772842F16E82();
			unk_0x2E04B7B46A3670E5(7);
			unk_0xC4353D240DCE9533(iLocal_20, 255, 255, 255, 0, 0);
			unk_0xC4353D240DCE9533(iLocal_21, 255, 255, 255, 0, 0);
			if (unk_0x4C1B8C5717647539(2, 201))
			{
				iLocal_22 = 1;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x94B5910A9C945688(0);
		func_3(1, 1);
		func_1();
	}
	Global_78588.f_1 = 0;
	unk_0xCED9E32812D6C7C7(&(Global_113386.f_10016.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_100480.f_8)
	{
		if (Global_100480.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100480.f_10 > 1)
	{
		return 0;
	}
	Global_100480.f_10++;
	return 1;
}

int func_2(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_100480.f_7 = iParam0;
	Global_100480.f_8 = iParam1;
}

void func_4(var uParam0)
{
	unk_0x341872E4D54CD053(uParam0);
}

void func_5(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_6()
{
	if (iLocal_20 != 0)
	{
		unk_0x705B098546DEB18A(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		unk_0x705B098546DEB18A(&iLocal_21);
	}
	unk_0x2E04B7B46A3670E5(4);
	unk_0x94B5910A9C945688(0);
	unk_0xAFBDF6A5E54114C1();
}

