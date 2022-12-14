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
	unk_0x3F57BEDBC381CBC7();
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
		if (Global_20266.f_1 != 9)
		{
			switch (Global_20266.f_1)
			{
				case 7:
					if (iLocal_20 == 1 && unk_0x83666F9FB8FEBD4B() > 1500)
					{
						func_6();
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 8:
					if (func_5(2, Global_20234, 0))
					{
						func_4();
						Global_20244 = 1;
						if (Global_20266.f_1 > 3)
						{
							Global_20266.f_1 = 7;
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
			Global_20268 = 6;
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
	if (((Global_20266.f_1 == 1 || Global_20266.f_1 == 3) || Global_20266.f_1 == 0) || Global_20210 == 1)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0xAFBDF6A5E54114C1();
}

int func_3()
{
	if (Global_8742 == 1 || Global_20266.f_1 < 7)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x91DFC8F68F6D9B05(-1, "Menu_Back", &Global_20255, 1);
	}
}

int func_5(int iParam0, var uParam1, int iParam2)
{
	if (unk_0xF09A4F413B0D30EB(iParam0, uParam1) || (iParam2 == 1 && unk_0xF01464D7AF0B7347(iParam0, uParam1)))
	{
		if (unk_0x8FE9914D4872D601())
		{
			if (unk_0x9417F1137725B4B3() == 0 || (unk_0xD199EE48D2842EB1() && unk_0x3A76A0944BE2C291(2)))
			{
				return 0;
			}
		}
		if (unk_0xF1EC2C71FD1371B8() || unk_0x3E6C9DAD84CEFED1())
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
	func_9(Global_20247, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
	unk_0x4F47E317C74C543B(24);
	unk_0x4F47E317C74C543B(0);
	if (BitTest(Global_4541229, 23))
	{
		unk_0xD7D6BA6E36AEC182(0);
		func_8("CELL_EXTBYOU");
		unk_0x4F47E317C74C543B(Global_4541230);
		unk_0x4F47E317C74C543B(unk_0xF34EE736CF047844(Global_4541510));
		unk_0x4F47E317C74C543B(Global_4541231);
		unk_0x4F47E317C74C543B(unk_0xF34EE736CF047844(Global_4541510.f_1));
		unk_0x4F47E317C74C543B(Global_4541232);
		unk_0x4F47E317C74C543B(unk_0xF34EE736CF047844(Global_4541510.f_2));
		func_8("CELL_BODYG");
		unk_0x4F47E317C74C543B(Global_4541233);
		unk_0x4F47E317C74C543B(unk_0xF34EE736CF047844(Global_4541513));
		unk_0x4F47E317C74C543B(Global_4541234);
		unk_0x4F47E317C74C543B(unk_0xF34EE736CF047844(Global_4541513.f_1));
		unk_0x4F47E317C74C543B(Global_4541235);
		unk_0x4F47E317C74C543B(unk_0xF34EE736CF047844(Global_4541513.f_2));
	}
	else
	{
		unk_0xD7D6BA6E36AEC182(0);
		func_8("CELL_EXTBYOU");
		unk_0x4F47E317C74C543B(Global_4541233);
		unk_0x4F47E317C74C543B(unk_0xF34EE736CF047844(Global_4541513));
		unk_0x4F47E317C74C543B(Global_4541234);
		unk_0x4F47E317C74C543B(unk_0xF34EE736CF047844(Global_4541513.f_1));
		unk_0x4F47E317C74C543B(Global_4541235);
		unk_0x4F47E317C74C543B(unk_0xF34EE736CF047844(Global_4541513.f_2));
		func_8("CELL_EXTBTARG");
		unk_0x4F47E317C74C543B(Global_4541230);
		unk_0x4F47E317C74C543B(unk_0xF34EE736CF047844(Global_4541510));
		unk_0x4F47E317C74C543B(Global_4541231);
		unk_0x4F47E317C74C543B(unk_0xF34EE736CF047844(Global_4541510.f_1));
		unk_0x4F47E317C74C543B(Global_4541232);
		unk_0x4F47E317C74C543B(unk_0xF34EE736CF047844(Global_4541510.f_2));
	}
	unk_0x6F06CF0E9AB02847();
	func_9(Global_20247, "DISPLAY_VIEW", 24f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
}

void func_8(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x6F06CF0E9AB02847();
}

void func_10()
{
	func_7();
}

void func_11()
{
	if (Global_20254)
	{
		func_12(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_12(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_12(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_12(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xB0550BC91B0159D6(&Global_8136, 17);
}

void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xACC32B78196FBC2A(sParam7))
	{
		func_8(sParam7);
	}
	if (!unk_0xACC32B78196FBC2A(iParam8))
	{
		func_8(iParam8);
	}
	if (!unk_0xACC32B78196FBC2A(iParam9))
	{
		func_8(iParam9);
	}
	if (!unk_0xACC32B78196FBC2A(iParam10))
	{
		func_8(iParam10);
	}
	if (!unk_0xACC32B78196FBC2A(iParam11))
	{
		func_8(iParam11);
	}
	unk_0x6F06CF0E9AB02847();
}

