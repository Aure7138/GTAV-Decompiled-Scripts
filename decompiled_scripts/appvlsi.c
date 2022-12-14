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
	unk_0x389D5B1C24A046B5();
	iLocal_21 = 0;
	if (iLocal_20 == 0)
	{
		func_10();
		func_9();
		iLocal_20 = 1;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_20383.f_1 != 9)
		{
			switch (Global_20383.f_1)
			{
				case 7:
					if (iLocal_21 == 1)
					{
						if (func_8(2, Global_20352, 0))
						{
							unk_0x531D638530A8DB97(-1, "Lester_Laugh_Phone", "DLC_HEIST_HACKING_SNAKE_SOUNDS", 1);
							Global_20361 = 1;
							func_10();
							func_5();
							unk_0xC1B1E9A034A63A62(0);
							unk_0x5AE11BC36633DE4E(0);
						}
					}
					if (iLocal_21 == 2)
					{
						if (unk_0xC9D9444186B5A374() > 499)
						{
							unk_0x5AE11BC36633DE4E(0);
						}
						if (unk_0x83666F9FB8FEBD4B() > 2200)
						{
							iLocal_21 = 3;
						}
					}
					if (iLocal_21 == 3)
					{
						Global_1836103 = 1;
					}
					break;
				
				case 8:
					if (func_8(2, Global_20351, 0))
					{
						func_4();
						Global_20361 = 1;
						if (Global_20383.f_1 > 3)
						{
							Global_20383.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_20385 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_20383.f_1 == 1 || Global_20383.f_1 == 3) || Global_20383.f_1 == 0) || Global_20327 == 1)
	{
		Global_20370 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0xF297EAB219BB1DC6("DLC_MPHEIST/HEIST_HACK_SNAKE");
	unk_0x675D9C12C73D3DE7();
}

int func_3()
{
	if (Global_8859 == 1 || Global_20383.f_1 < 7)
	{
		Global_20370 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x531D638530A8DB97(-1, "Menu_Back", &Global_20372, 1);
	}
}

void func_5()
{
	if (Global_20371)
	{
		func_6(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x061B1200C95204CB(&Global_8253, 17);
}

void func_6(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x9FD96C5DE6EDFC15(uParam0, sParam1);
	unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x2AC37494BBF1DB16(sParam7))
	{
		func_7(sParam7);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam8))
	{
		func_7(iParam8);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam9))
	{
		func_7(iParam9);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam10))
	{
		func_7(iParam10);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam11))
	{
		func_7(iParam11);
	}
	unk_0xAE3413B0654A0035();
}

void func_7(var uParam0)
{
	unk_0x2AF11E92DE43CDE3(uParam0);
	unk_0xF8FCA9E7130CE1C8();
}

int func_8(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x87644B1F984197FE(iParam0, uParam1) || (iParam2 == 1 && unk_0xE665ABCFC5784C35(iParam0, uParam1)))
	{
		if (unk_0xCC17806DB0C41C19())
		{
			if (unk_0x6C75193377D3CE17() == 0 || (unk_0xEBDA168F3804CE1F() && unk_0x42AAFCB5B7854AA9(2)))
			{
				return 0;
			}
		}
		if (unk_0xFEE065E56A9BEF3F() || unk_0x47F8B78DC1737D5C())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_9()
{
	if (Global_20371)
	{
		func_6(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x061B1200C95204CB(&Global_8253, 17);
}

void func_10()
{
	if (iLocal_21 == 0)
	{
		unk_0xF6AFEDAAE44A2159("DLC_MPHEIST/HEIST_HACK_SNAKE", 0, -1);
		while (unk_0xF6AFEDAAE44A2159("DLC_MPHEIST/HEIST_HACK_SNAKE", 0, -1) == 0)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_11(Global_20364, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
		unk_0xC6A3EF6C4A3412C1(23);
		unk_0xC6A3EF6C4A3412C1(0);
		unk_0xC6A3EF6C4A3412C1(-99);
		unk_0xC6A3EF6C4A3412C1(0);
		unk_0xC6A3EF6C4A3412C1(100);
		unk_0xC6A3EF6C4A3412C1(2);
		unk_0xD546F85F5AF0F231(0);
		if (BitTest(Global_8255, 1))
		{
			unk_0xC49D258FBF3BF214(0f);
		}
		unk_0xAE3413B0654A0035();
		func_11(Global_20364, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
		iLocal_21 = 1;
	}
	else if (iLocal_21 == 1)
	{
		func_11(Global_20364, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
		unk_0xC6A3EF6C4A3412C1(23);
		unk_0xC6A3EF6C4A3412C1(0);
		unk_0xC6A3EF6C4A3412C1(-99);
		unk_0xC6A3EF6C4A3412C1(0);
		unk_0xC6A3EF6C4A3412C1(100);
		unk_0xC6A3EF6C4A3412C1(3);
		unk_0xD546F85F5AF0F231(0);
		if (BitTest(Global_8255, 1))
		{
			unk_0xC49D258FBF3BF214(0f);
		}
		unk_0xAE3413B0654A0035();
		func_11(Global_20364, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
		iLocal_21 = 2;
	}
}

void func_11(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x9FD96C5DE6EDFC15(uParam0, sParam1);
	unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xAE3413B0654A0035();
}

