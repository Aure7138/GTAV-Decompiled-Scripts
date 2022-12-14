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
	uLocal_20 = unk_0x7F0C74F83813841D(100f, 100f, 30f);
	iLocal_22 = 1;
	fLocal_25 = 0f;
	fLocal_28 = 0f;
	fLocal_31 = 0f;
	fLocal_34 = 0f;
	fLocal_37 = 0f;
	fLocal_40 = 0f;
	fLocal_43 = 0f;
	fLocal_46 = 0f;
	if (unk_0x72474BA05A104E1E())
	{
		unk_0x78DD793477D04C42(500);
	}
	if (unk_0x55EEDBBFDC6E810F(3))
	{
		func_2();
	}
	uLocal_18 = unk_0x2B4645565204EA06("p_bubblegum");
	while (!unk_0x5FAF55B1F052A2E6(uLocal_18))
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
			uLocal_19 = unk_0xDEE46CEB08617ECA("DEFAULT_SCRIPTED_CAMERA", 1);
			if (unk_0xF57C1326FD40C8A7(uLocal_19))
			{
				unk_0xCE4412DC4B679860(uLocal_19, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				unk_0x1E648B5D359EF084(uLocal_19, 0.01f);
				unk_0x340E065534525A8A(uLocal_19, 0.02f);
				unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
			}
			unk_0xEA4639F4444B7003(uLocal_20, 66);
		}
		iLocal_21 = 1;
		unk_0x20C68F87D0FDD976(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_18);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	if (Global_20362 == 0)
	{
		if (unk_0x51EB177CA0562B62(2, 189) || unk_0x51EB177CA0562B62(2, 190))
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
		if (unk_0x87644B1F984197FE(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (unk_0x51EB177CA0562B62(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (!unk_0x51EB177CA0562B62(2, 189))
		{
			bLocal_23 = false;
			fLocal_25 = 0f;
		}
		if (!bLocal_23 == bLocal_24)
		{
			bLocal_24 = bLocal_23;
			unk_0x9FD96C5DE6EDFC15(uParam0, "SET_INPUT_EVENT");
			unk_0xC6A3EF6C4A3412C1(10);
			unk_0xC49D258FBF3BF214(fLocal_25);
			unk_0xAE3413B0654A0035();
		}
		if (unk_0x87644B1F984197FE(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (unk_0x51EB177CA0562B62(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (!unk_0x51EB177CA0562B62(2, 190))
		{
			bLocal_26 = false;
			fLocal_28 = 0f;
		}
		if (!bLocal_26 == bLocal_27)
		{
			bLocal_27 = bLocal_26;
			unk_0x9FD96C5DE6EDFC15(uParam0, "SET_INPUT_EVENT");
			unk_0xC6A3EF6C4A3412C1(11);
			unk_0xC49D258FBF3BF214(fLocal_28);
			unk_0xAE3413B0654A0035();
		}
		if (unk_0x87644B1F984197FE(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (unk_0x51EB177CA0562B62(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (!unk_0x51EB177CA0562B62(2, 188))
		{
			bLocal_29 = false;
			fLocal_31 = 0f;
		}
		if (!bLocal_29 == bLocal_30)
		{
			bLocal_30 = bLocal_29;
			unk_0x9FD96C5DE6EDFC15(uParam0, "SET_INPUT_EVENT");
			unk_0xC6A3EF6C4A3412C1(8);
			unk_0xC49D258FBF3BF214(fLocal_31);
			unk_0xAE3413B0654A0035();
		}
		if (unk_0x87644B1F984197FE(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (unk_0x51EB177CA0562B62(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (!unk_0x51EB177CA0562B62(2, 187))
		{
			bLocal_32 = false;
			fLocal_34 = 0f;
		}
		if (!bLocal_32 == bLocal_33)
		{
			bLocal_33 = bLocal_32;
			unk_0x9FD96C5DE6EDFC15(uParam0, "SET_INPUT_EVENT");
			unk_0xC6A3EF6C4A3412C1(9);
			unk_0xC49D258FBF3BF214(fLocal_34);
			unk_0xAE3413B0654A0035();
		}
		if (unk_0x87644B1F984197FE(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (unk_0x51EB177CA0562B62(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (!unk_0x51EB177CA0562B62(2, 202))
		{
			bLocal_35 = false;
			fLocal_37 = 0f;
		}
		if (!bLocal_35 == bLocal_36)
		{
			bLocal_36 = bLocal_35;
			unk_0x9FD96C5DE6EDFC15(uParam0, "SET_INPUT_EVENT");
			unk_0xC6A3EF6C4A3412C1(17);
			unk_0xC49D258FBF3BF214(fLocal_37);
			unk_0xAE3413B0654A0035();
		}
		if (unk_0x87644B1F984197FE(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (unk_0x51EB177CA0562B62(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (!unk_0x51EB177CA0562B62(2, 204))
		{
			bLocal_38 = false;
			fLocal_40 = 0f;
		}
		if (!bLocal_38 == bLocal_39)
		{
			bLocal_39 = bLocal_38;
			unk_0x9FD96C5DE6EDFC15(uParam0, "SET_INPUT_EVENT");
			unk_0xC6A3EF6C4A3412C1(15);
			unk_0xC49D258FBF3BF214(fLocal_40);
			unk_0xAE3413B0654A0035();
		}
		if (unk_0x87644B1F984197FE(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (unk_0x51EB177CA0562B62(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (!unk_0x51EB177CA0562B62(2, 201))
		{
			bLocal_41 = false;
			fLocal_43 = 0f;
		}
		if (!bLocal_41 == bLocal_42)
		{
			bLocal_42 = bLocal_41;
			unk_0x9FD96C5DE6EDFC15(uParam0, "SET_INPUT_EVENT");
			unk_0xC6A3EF6C4A3412C1(16);
			unk_0xC49D258FBF3BF214(fLocal_43);
			unk_0xAE3413B0654A0035();
		}
		if (unk_0x87644B1F984197FE(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (unk_0x51EB177CA0562B62(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (!unk_0x51EB177CA0562B62(2, 203))
		{
			bLocal_44 = false;
			fLocal_46 = 0f;
		}
		if (!bLocal_44 == bLocal_45)
		{
			bLocal_45 = bLocal_44;
			unk_0x9FD96C5DE6EDFC15(uParam0, "SET_INPUT_EVENT");
			unk_0xC6A3EF6C4A3412C1(14);
			unk_0xC49D258FBF3BF214(fLocal_46);
			unk_0xAE3413B0654A0035();
		}
	}
}

void func_2()
{
	if (unk_0xF57C1326FD40C8A7(uLocal_19))
	{
		unk_0x42B9FA814615C4F9(uLocal_19, 0);
	}
	unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
	func_3(0);
	unk_0x577AE0048ADA90C8(0);
	unk_0xCD3C8E1022864F65(1);
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

