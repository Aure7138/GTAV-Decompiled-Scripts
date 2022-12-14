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
	if (unk_0x72474BA05A104E1E())
	{
		unk_0x78DD793477D04C42(500);
	}
	if (unk_0x55EEDBBFDC6E810F(3))
	{
		func_2();
	}
	uLocal_18 = unk_0x2B4645565204EA06("scaleform_profiling");
	while (!unk_0x5FAF55B1F052A2E6(uLocal_18))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x20C68F87D0FDD976(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_18);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	if (Global_20362 == 0)
	{
		if (((((((unk_0x51EB177CA0562B62(2, 189) || unk_0x51EB177CA0562B62(2, 190)) || unk_0x51EB177CA0562B62(2, 188)) || unk_0x51EB177CA0562B62(2, 187)) || unk_0x51EB177CA0562B62(2, 205)) || unk_0x51EB177CA0562B62(2, 206)) || unk_0x51EB177CA0562B62(2, 201)) || unk_0x51EB177CA0562B62(2, 202))
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
		if (unk_0x51EB177CA0562B62(2, 189))
		{
			unk_0x9FD96C5DE6EDFC15(uParam0, "SET_INPUT_EVENT");
			unk_0xC6A3EF6C4A3412C1(10);
			unk_0xAE3413B0654A0035();
		}
		if (unk_0x51EB177CA0562B62(2, 190))
		{
			unk_0x9FD96C5DE6EDFC15(uParam0, "SET_INPUT_EVENT");
			unk_0xC6A3EF6C4A3412C1(11);
			unk_0xAE3413B0654A0035();
		}
		if (unk_0x51EB177CA0562B62(2, 205))
		{
			unk_0x9FD96C5DE6EDFC15(uParam0, "SET_INPUT_EVENT");
			unk_0xC6A3EF6C4A3412C1(4);
			unk_0xAE3413B0654A0035();
		}
		if (unk_0x51EB177CA0562B62(2, 206))
		{
			unk_0x9FD96C5DE6EDFC15(uParam0, "SET_INPUT_EVENT");
			unk_0xC6A3EF6C4A3412C1(6);
			unk_0xAE3413B0654A0035();
		}
		if (unk_0x51EB177CA0562B62(2, 188))
		{
			unk_0x9FD96C5DE6EDFC15(uParam0, "SET_INPUT_EVENT");
			unk_0xC6A3EF6C4A3412C1(8);
			unk_0xAE3413B0654A0035();
		}
		if (unk_0x51EB177CA0562B62(2, 187))
		{
			unk_0x9FD96C5DE6EDFC15(uParam0, "SET_INPUT_EVENT");
			unk_0xC6A3EF6C4A3412C1(9);
			unk_0xAE3413B0654A0035();
		}
		if (unk_0x51EB177CA0562B62(2, 201))
		{
			unk_0x9FD96C5DE6EDFC15(uParam0, "SET_INPUT_EVENT");
			unk_0xC6A3EF6C4A3412C1(16);
			unk_0xAE3413B0654A0035();
		}
		if (unk_0x51EB177CA0562B62(2, 202))
		{
			unk_0x9FD96C5DE6EDFC15(uParam0, "SET_INPUT_EVENT");
			unk_0xC6A3EF6C4A3412C1(17);
			unk_0xAE3413B0654A0035();
		}
	}
}

void func_2()
{
	func_3(0);
	unk_0x577AE0048ADA90C8(0);
	unk_0xD0AE101DBAA43C98(&uLocal_18);
	unk_0x675D9C12C73D3DE7();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		{
			unk_0xECDAB41968FF21A8(&Global_8254, 16);
		}
		Global_20383.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
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

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_20584)
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
	if (!func_5())
	{
		Global_20383.f_1 = 3;
	}
}

int func_5()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
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

bool func_7()
{
	return BitTest(Global_1962996, 5);
}

bool func_8()
{
	return BitTest(Global_1962996, 19);
}

int func_9(int iParam0)
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

void func_10()
{
	if (Global_20383.f_1 == 9 || Global_20383.f_1 == 10)
	{
		Global_21778 = 0;
		Global_21774 = 1;
	}
}

