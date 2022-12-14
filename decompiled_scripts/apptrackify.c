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
	struct<3> Local_20 = { 0, 0, 0 } ;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	int iLocal_31 = 0;
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
	fLocal_27 = 9.99f;
	fLocal_28 = 0f;
	fLocal_29 = 0f;
	fLocal_30 = 0f;
	unk_0x389D5B1C24A046B5();
	func_10();
	func_7();
	unk_0xC1B1E9A034A63A62(0);
	unk_0x5AE11BC36633DE4E(0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_20383.f_1 != 9)
		{
			switch (Global_20383.f_1)
			{
				case 7:
					if (unk_0x83666F9FB8FEBD4B() > 125)
					{
						func_10();
						unk_0xC1B1E9A034A63A62(0);
					}
					if (unk_0xC9D9444186B5A374() > unk_0xF34EE736CF047844(fLocal_29) * 30 && unk_0xC9D9444186B5A374() > 150)
					{
						unk_0x9FD96C5DE6EDFC15(Global_20364, "APP_FUNCTION");
						unk_0xC6A3EF6C4A3412C1(1);
						unk_0xAE3413B0654A0035();
						unk_0x5AE11BC36633DE4E(0);
					}
					if (unk_0xC9D9444186B5A374() > 2000)
					{
						unk_0x9FD96C5DE6EDFC15(Global_20364, "APP_FUNCTION");
						unk_0xC6A3EF6C4A3412C1(1);
						unk_0xAE3413B0654A0035();
						unk_0x5AE11BC36633DE4E(0);
					}
					break;
				
				case 8:
					if (func_6(2, Global_20351, 0))
					{
						func_5();
						Global_20361 = 1;
						func_10();
						func_7();
						if (Global_20383.f_1 > 3)
						{
							Global_20383.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_4())
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
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	unk_0x061B1200C95204CB(&Global_8254, 22);
	unk_0x675D9C12C73D3DE7();
}

void func_3(int iParam0, int iParam1)
{
	Global_4542550[iParam0] = iParam1;
}

int func_4()
{
	if (Global_8859 == 1 || Global_20383.f_1 < 7)
	{
		Global_20370 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x531D638530A8DB97(-1, "Menu_Back", &Global_20372, 1);
	}
}

int func_6(int iParam0, var uParam1, int iParam2)
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

void func_7()
{
	if (Global_20371)
	{
		func_8(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_8(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_8(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x061B1200C95204CB(&Global_8253, 17);
}

void func_8(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_9(sParam7);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam8))
	{
		func_9(iParam8);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam9))
	{
		func_9(iParam9);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam10))
	{
		func_9(iParam10);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam11))
	{
		func_9(iParam11);
	}
	unk_0xAE3413B0654A0035();
}

void func_9(var uParam0)
{
	unk_0x2AF11E92DE43CDE3(uParam0);
	unk_0xF8FCA9E7130CE1C8();
}

void func_10()
{
	int iVar0;
	bool bVar1;
	
	if (func_18() == 0)
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			Local_20 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
			fLocal_23 = unk_0xD850DD08D5434072(unk_0xC1A5EC5C986B98AD());
			func_17();
			func_16();
			func_15();
			fLocal_24 = (360f - fLocal_23);
			fLocal_27 = (fLocal_27 - fLocal_24);
			if (fLocal_27 < 0f)
			{
				fLocal_27 = (fLocal_27 + 360f);
			}
			if (iLocal_31 == 0)
			{
				unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
				unk_0xC6A3EF6C4A3412C1(23);
				unk_0xC6A3EF6C4A3412C1(0);
				if (BitTest(Global_8254, 30))
				{
					unk_0xC6A3EF6C4A3412C1(-99);
					unk_0xC6A3EF6C4A3412C1(0);
				}
				else
				{
					unk_0xC6A3EF6C4A3412C1(unk_0xF34EE736CF047844(fLocal_27));
					unk_0xC6A3EF6C4A3412C1(unk_0xF34EE736CF047844(fLocal_28));
				}
				unk_0xC6A3EF6C4A3412C1(100);
				if (BitTest(Global_8254, 22))
				{
					unk_0xC6A3EF6C4A3412C1(1);
				}
				else
				{
					unk_0xC6A3EF6C4A3412C1(0);
				}
				if (BitTest(Global_8254, 29))
				{
					unk_0xD546F85F5AF0F231(0);
				}
				else
				{
					unk_0xD546F85F5AF0F231(1);
				}
				if (BitTest(Global_8255, 1))
				{
					unk_0xC49D258FBF3BF214(fLocal_30);
				}
				unk_0xAE3413B0654A0035();
			}
			if (fLocal_23 == fLocal_23)
			{
			}
			func_14(Global_20364, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		Local_20 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
		fLocal_23 = unk_0xD850DD08D5434072(unk_0xC1A5EC5C986B98AD());
		if (Global_4542572 > 21)
		{
		}
		iVar0 = 0;
		while (iVar0 < Global_4542572)
		{
			func_13(iVar0);
			func_12(iVar0);
			func_11(iVar0);
			fLocal_24 = (360f - fLocal_23);
			fLocal_27 = (fLocal_27 - fLocal_24);
			if (fLocal_27 < 0f)
			{
				fLocal_27 = (fLocal_27 + 360f);
			}
			if (iLocal_31 == 0)
			{
				unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
				unk_0xC6A3EF6C4A3412C1(23);
				unk_0xC6A3EF6C4A3412C1(iVar0);
				bVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (BitTest(Global_4542297, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (BitTest(Global_4542297, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (BitTest(Global_4542297, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (BitTest(Global_4542297, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					unk_0xC6A3EF6C4A3412C1(-99);
					unk_0xC6A3EF6C4A3412C1(0);
				}
				else
				{
					unk_0xC6A3EF6C4A3412C1(unk_0xF34EE736CF047844(fLocal_27));
					unk_0xC6A3EF6C4A3412C1(unk_0xF34EE736CF047844(fLocal_28));
				}
				unk_0xC6A3EF6C4A3412C1(100);
				if (BitTest(Global_8254, 22))
				{
					unk_0xD546F85F5AF0F231(1);
				}
				else
				{
					unk_0xD546F85F5AF0F231(1);
				}
				if (BitTest(Global_8254, 29))
				{
					unk_0xD546F85F5AF0F231(0);
				}
				else
				{
					unk_0xD546F85F5AF0F231(1);
				}
				unk_0xC49D258FBF3BF214(fLocal_30);
				unk_0xC6A3EF6C4A3412C1(Global_4542550[iVar0]);
				unk_0xAE3413B0654A0035();
			}
			if (fLocal_23 == fLocal_23)
			{
			}
			func_14(Global_20364, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

float func_11(int iParam0)
{
	fLocal_25 = (Global_4542486[iParam0 /*3*/] - Local_20.f_0);
	fLocal_26 = (unk_0xD0FFB162F40A139C(((3.14159f / 180f) * Local_20.f_0)) * (Global_4542486[iParam0 /*3*/].f_1 - Local_20.f_1));
	fLocal_27 = unk_0x360118B65D6530C6(fLocal_25, fLocal_26);
	if (fLocal_27 < 0f)
	{
		fLocal_27 = (fLocal_27 + 360f);
	}
	return fLocal_27;
}

float func_12(int iParam0)
{
	fLocal_29 = unk_0x71D93B57D07F9804(unk_0xB7A628320EFF8E47(Global_4542486[iParam0 /*3*/], Local_20));
	fLocal_30 = (Global_4542486[iParam0 /*3*/].f_2 - Local_20.f_2);
	return fLocal_29;
}

float func_13(int iParam0)
{
	fLocal_28 = unk_0x71D93B57D07F9804((((Global_4542486[iParam0 /*3*/] - Local_20.f_0) * (Global_4542486[iParam0 /*3*/] - Local_20.f_0)) + ((Global_4542486[iParam0 /*3*/].f_1 - Local_20.f_1) * (Global_4542486[iParam0 /*3*/].f_1 - Local_20.f_1))));
	return fLocal_28;
}

void func_14(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

float func_15()
{
	fLocal_25 = (Global_22831 - Local_20.f_0);
	fLocal_26 = (unk_0xD0FFB162F40A139C(((3.14159f / 180f) * Local_20.f_0)) * (Global_22831.f_1 - Local_20.f_1));
	fLocal_27 = unk_0x360118B65D6530C6(fLocal_25, fLocal_26);
	if (fLocal_27 < 0f)
	{
		fLocal_27 = (fLocal_27 + 360f);
	}
	return fLocal_27;
}

float func_16()
{
	fLocal_29 = unk_0x71D93B57D07F9804(unk_0xB7A628320EFF8E47(Global_22831, Local_20));
	fLocal_30 = (Global_22831.f_2 - Local_20.f_2);
	return fLocal_29;
}

float func_17()
{
	fLocal_28 = unk_0x71D93B57D07F9804((((Global_22831 - Local_20.f_0) * (Global_22831 - Local_20.f_0)) + ((Global_22831.f_1 - Local_20.f_1) * (Global_22831.f_1 - Local_20.f_1))));
	return fLocal_28;
}

int func_18()
{
	if (Global_78558 == 1)
	{
		return 1;
	}
	return 0;
}

