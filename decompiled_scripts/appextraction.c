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
	if (iLocal_20 == 0)
	{
		func_11();
		func_10();
		iLocal_20 = 1;
		unk_0xC1B1E9A034A63A62(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_20383.f_1 != 9)
		{
			switch (Global_20383.f_1)
			{
				case 7:
					if (iLocal_20 == 1 && unk_0x83666F9FB8FEBD4B() > 1500)
					{
						func_6();
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 8:
					if (func_5(2, Global_20351, 0))
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

int func_5(int iParam0, var uParam1, int iParam2)
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

void func_6()
{
	func_7();
}

void func_7()
{
	func_9(Global_20364, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
	unk_0xC6A3EF6C4A3412C1(24);
	unk_0xC6A3EF6C4A3412C1(0);
	if (BitTest(Global_4542297, 23))
	{
		unk_0xD546F85F5AF0F231(0);
		func_8("CELL_EXTBYOU");
		unk_0xC6A3EF6C4A3412C1(Global_4542298);
		unk_0xC6A3EF6C4A3412C1(unk_0xF34EE736CF047844(Global_4542578));
		unk_0xC6A3EF6C4A3412C1(Global_4542299);
		unk_0xC6A3EF6C4A3412C1(unk_0xF34EE736CF047844(Global_4542578.f_1));
		unk_0xC6A3EF6C4A3412C1(Global_4542300);
		unk_0xC6A3EF6C4A3412C1(unk_0xF34EE736CF047844(Global_4542578.f_2));
		func_8("CELL_BODYG");
		unk_0xC6A3EF6C4A3412C1(Global_4542301);
		unk_0xC6A3EF6C4A3412C1(unk_0xF34EE736CF047844(Global_4542581));
		unk_0xC6A3EF6C4A3412C1(Global_4542302);
		unk_0xC6A3EF6C4A3412C1(unk_0xF34EE736CF047844(Global_4542581.f_1));
		unk_0xC6A3EF6C4A3412C1(Global_4542303);
		unk_0xC6A3EF6C4A3412C1(unk_0xF34EE736CF047844(Global_4542581.f_2));
	}
	else
	{
		unk_0xD546F85F5AF0F231(0);
		func_8("CELL_EXTBYOU");
		unk_0xC6A3EF6C4A3412C1(Global_4542301);
		unk_0xC6A3EF6C4A3412C1(unk_0xF34EE736CF047844(Global_4542581));
		unk_0xC6A3EF6C4A3412C1(Global_4542302);
		unk_0xC6A3EF6C4A3412C1(unk_0xF34EE736CF047844(Global_4542581.f_1));
		unk_0xC6A3EF6C4A3412C1(Global_4542303);
		unk_0xC6A3EF6C4A3412C1(unk_0xF34EE736CF047844(Global_4542581.f_2));
		func_8("CELL_EXTBTARG");
		unk_0xC6A3EF6C4A3412C1(Global_4542298);
		unk_0xC6A3EF6C4A3412C1(unk_0xF34EE736CF047844(Global_4542578));
		unk_0xC6A3EF6C4A3412C1(Global_4542299);
		unk_0xC6A3EF6C4A3412C1(unk_0xF34EE736CF047844(Global_4542578.f_1));
		unk_0xC6A3EF6C4A3412C1(Global_4542300);
		unk_0xC6A3EF6C4A3412C1(unk_0xF34EE736CF047844(Global_4542578.f_2));
	}
	unk_0xAE3413B0654A0035();
	func_9(Global_20364, "DISPLAY_VIEW", 24f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
}

void func_8(char* sParam0)
{
	unk_0x2AF11E92DE43CDE3(sParam0);
	unk_0xF8FCA9E7130CE1C8();
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_10()
{
	func_7();
}

void func_11()
{
	if (Global_20371)
	{
		func_12(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_12(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_12(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_12(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x061B1200C95204CB(&Global_8253, 17);
}

void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_8(sParam7);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam8))
	{
		func_8(iParam8);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam9))
	{
		func_8(iParam9);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam10))
	{
		func_8(iParam10);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam11))
	{
		func_8(iParam11);
	}
	unk_0xAE3413B0654A0035();
}

