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
	if (unk_0x72474BA05A104E1E())
	{
		unk_0x78DD793477D04C42(500);
	}
	if (unk_0x55EEDBBFDC6E810F(3))
	{
		func_5();
	}
	uLocal_19 = unk_0x2B4645565204EA06("instructional_buttons");
	while (!unk_0x5FAF55B1F052A2E6(uLocal_19))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x55CCA1B8F633F628(uLocal_19, 255, 255, 255, 0, 0);
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
			unk_0x9FD96C5DE6EDFC15(uParam1, "CLEAR_ALL");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_CLEAR_SPACE");
			unk_0xC6A3EF6C4A3412C1(200);
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_DATA_SLOT");
			unk_0xC6A3EF6C4A3412C1(0);
			func_3(unk_0x28AEB293270C3DDA(2, 191, 1));
			func_2("PRESS A");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_DATA_SLOT");
			unk_0xC6A3EF6C4A3412C1(1);
			func_3(unk_0x28AEB293270C3DDA(2, 194, 1));
			func_2("PRESS B");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_DATA_SLOT");
			unk_0xC6A3EF6C4A3412C1(2);
			func_3(unk_0x28AEB293270C3DDA(2, 193, 1));
			func_2("PRESS X");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_DATA_SLOT");
			unk_0xC6A3EF6C4A3412C1(3);
			func_3(unk_0x28AEB293270C3DDA(2, 192, 1));
			func_2("PRESS Y");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(80);
			unk_0xAE3413B0654A0035();
			iLocal_18 = -1;
			break;
		
		case 1:
			unk_0x9FD96C5DE6EDFC15(uParam1, "CLEAR_ALL");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_CLEAR_SPACE");
			unk_0xC6A3EF6C4A3412C1(200);
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_DATA_SLOT");
			unk_0xC6A3EF6C4A3412C1(0);
			func_3(unk_0x28AEB293270C3DDA(2, 187, 1));
			func_2("DOWN");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_DATA_SLOT");
			unk_0xC6A3EF6C4A3412C1(1);
			func_3(unk_0x28AEB293270C3DDA(2, 188, 1));
			func_2("UP");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_DATA_SLOT");
			unk_0xC6A3EF6C4A3412C1(2);
			func_3(unk_0x28AEB293270C3DDA(2, 190, 1));
			func_2("LEFT");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_DATA_SLOT");
			unk_0xC6A3EF6C4A3412C1(3);
			func_3(unk_0x28AEB293270C3DDA(2, 189, 1));
			func_2("RIGHT");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(80);
			unk_0xAE3413B0654A0035();
			iLocal_18 = -1;
			break;
		
		case 2:
			unk_0x9FD96C5DE6EDFC15(uParam1, "CLEAR_ALL");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_CLEAR_SPACE");
			unk_0xC6A3EF6C4A3412C1(200);
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_DATA_SLOT");
			unk_0xC6A3EF6C4A3412C1(0);
			func_3(unk_0x28AEB293270C3DDA(2, 202, 1));
			func_2("BACK");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(80);
			unk_0xAE3413B0654A0035();
			iLocal_18 = -1;
			break;
		
		default:
			break;
	}
}

void func_2(char* sParam0)
{
	unk_0x2AF11E92DE43CDE3(sParam0);
	unk_0xF8FCA9E7130CE1C8();
}

void func_3(var uParam0)
{
	unk_0x7DDE71A42D80E8FA(uParam0);
}

void func_4()
{
	if (Global_20362 == 0)
	{
		if (((((((((unk_0x51EB177CA0562B62(2, 189) || unk_0x51EB177CA0562B62(2, 190)) || unk_0x51EB177CA0562B62(2, 188)) || unk_0x51EB177CA0562B62(2, 187)) || unk_0x51EB177CA0562B62(2, 205)) || unk_0x51EB177CA0562B62(2, 206)) || unk_0x51EB177CA0562B62(2, 207)) || unk_0x51EB177CA0562B62(2, 208)) || unk_0x51EB177CA0562B62(2, 201)) || unk_0x51EB177CA0562B62(2, 202))
		{
			Global_20362 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
	else if (unk_0x83666F9FB8FEBD4B() > 50)
	{
		Global_20362 = 0;
	}
	if (Global_20362 == 0)
	{
		if (unk_0x51EB177CA0562B62(2, 217))
		{
			iLocal_18 = 1;
		}
		if (unk_0x51EB177CA0562B62(2, 189))
		{
			iLocal_18 = 2;
		}
		if (unk_0x51EB177CA0562B62(2, 190))
		{
			iLocal_18 = 2;
		}
		if (unk_0x51EB177CA0562B62(2, 205))
		{
		}
		if (unk_0x51EB177CA0562B62(2, 206))
		{
		}
		if (unk_0x51EB177CA0562B62(2, 207))
		{
		}
		if (unk_0x51EB177CA0562B62(2, 208))
		{
		}
		if (unk_0x51EB177CA0562B62(2, 188))
		{
			iLocal_18 = 2;
		}
		if (unk_0x51EB177CA0562B62(2, 187))
		{
			iLocal_18 = 2;
		}
		if (unk_0x51EB177CA0562B62(2, 201))
		{
			iLocal_18 = 1;
		}
		if (unk_0x51EB177CA0562B62(2, 202))
		{
			iLocal_18 = 0;
		}
		if (unk_0x51EB177CA0562B62(2, 203))
		{
			iLocal_18 = 1;
		}
		if (unk_0x51EB177CA0562B62(2, 204))
		{
			iLocal_18 = 1;
		}
	}
}

void func_5()
{
	func_6(0);
	unk_0x577AE0048ADA90C8(0);
	unk_0xD0AE101DBAA43C98(&uLocal_19);
	unk_0x675D9C12C73D3DE7();
}

void func_6(bool bParam0)
{
	if (bParam0)
	{
		func_13();
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		{
			unk_0xECDAB41968FF21A8(&Global_8254, 16);
		}
		Global_20383.f_1 = 1;
		if (func_12(0))
		{
			func_7(0);
		}
	}
	else if (Global_20383.f_1 == 1)
	{
		if (!Global_20383.f_1 == 0)
		{
			Global_20383.f_1 = 3;
		}
	}
}

void func_7(int iParam0)
{
	if (func_11())
	{
		return;
	}
	if (Global_20584)
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
	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
	{
		unk_0xECDAB41968FF21A8(&Global_8254, 16);
	}
	if (unk_0xE444FD7526C8BB46())
	{
		unk_0xD6625E11483B2324(0);
	}
	Global_21725 = 5;
	if (iParam0 == 1)
	{
		unk_0xECDAB41968FF21A8(&Global_8253, 30);
	}
	else
	{
		unk_0x061B1200C95204CB(&Global_8253, 30);
	}
	if (!func_8())
	{
		Global_20383.f_1 = 3;
	}
}

int func_8()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
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
			Global_20584 = 1;
			if (bParam1)
			{
				unk_0xF756EDB27C588BED(&Global_20320);
			}
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			unk_0x6B2D55EA37C443D5(Global_20311);
		}
	}
	else if (Global_20584 == 1)
	{
		Global_20584 = 0;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
		if (bParam1)
		{
			unk_0x6B2D55EA37C443D5(Global_20320);
		}
		else
		{
			unk_0x6B2D55EA37C443D5(Global_20311);
		}
	}
}

bool func_10()
{
	return BitTest(Global_1962996, 5);
}

bool func_11()
{
	return BitTest(Global_1962996, 19);
}

int func_12(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20383.f_1 > 3)
		{
			if (BitTest(Global_8253, 14))
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
	if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20383.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_13()
{
	if (Global_20383.f_1 == 9 || Global_20383.f_1 == 10)
	{
		Global_21778 = 0;
		Global_21774 = 1;
	}
}

