#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x55EEDBBFDC6E810F(83))
	{
		func_10();
	}
	unk_0xBD933493403CCF9D(0);
	unk_0x061B1200C95204CB(&(Global_113648.f_10018.f_25), 1);
	func_7();
	unk_0xD111D6644D1D5BD5(1);
	if (!unk_0x72474BA05A104E1E())
	{
		unk_0x6D5ACBBD4CE34249(0);
	}
	iLocal_0 = unk_0x2B4645565204EA06("OPENING_CREDITS");
	while (!unk_0x5FAF55B1F052A2E6(iLocal_0))
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0x72474BA05A104E1E())
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0xA5E11AF0A2B928C1() + 8000 + unk_0xF2DB717A73826179((2f * 1000f)));
	while (!unk_0x2FECE8D166B3056B())
	{
		func_7();
		if (!BitTest(Global_113648.f_10018.f_25, 1))
		{
			unk_0x55CCA1B8F633F628(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0xA5E11AF0A2B928C1() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0xA5E11AF0A2B928C1() + unk_0xF2DB717A73826179((2f * 1000f)));
				}
			}
			else if (unk_0xA5E11AF0A2B928C1() > iLocal_1)
			{
				unk_0xECDAB41968FF21A8(&(Global_113648.f_10018.f_25), 1);
				if (unk_0xAC9206863F7EE1BB() || unk_0xCC17806DB0C41C19())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_10();
}

void func_1()
{
	Global_100720 = 1;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_100720.f_8)
	{
		if (Global_100720.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100720.f_10 > 1)
	{
		return 0;
	}
	Global_100720.f_10++;
	return 1;
}

int func_3(bool bParam0)
{
	if (!bParam0 && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_100720.f_7 = iParam0;
	Global_100720.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0x9FD96C5DE6EDFC15(iLocal_0, "HIDE_LOGO");
	unk_0x2AF11E92DE43CDE3("STRING");
	unk_0x76B34CBB6F5FA1BB(sParam0);
	unk_0xF8FCA9E7130CE1C8();
	unk_0xAE3413B0654A0035();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0x9FD96C5DE6EDFC15(iLocal_0, "SHOW_LOGO");
	unk_0x2AF11E92DE43CDE3("STRING");
	unk_0x76B34CBB6F5FA1BB(sParam0);
	unk_0xF8FCA9E7130CE1C8();
	unk_0xC49D258FBF3BF214(fParam1);
	unk_0xC49D258FBF3BF214(fParam2);
	unk_0xC49D258FBF3BF214(fParam3);
	unk_0xC49D258FBF3BF214(fParam4);
	unk_0xC49D258FBF3BF214(fParam5);
	unk_0xC49D258FBF3BF214(fParam6);
	unk_0xC49D258FBF3BF214(fParam7);
	unk_0xAE3413B0654A0035();
}

void func_7()
{
	unk_0xAD8D6CE83138FEB5();
	unk_0x8B438725D591ED78(2, 199, 1);
	unk_0xCA0440712A8201E9(7);
	func_8();
}

void func_8()
{
	unk_0x063E0F2515867ED4();
	func_9();
}

void func_9()
{
	Global_23131.f_134 = 1;
}

void func_10()
{
	unk_0xECDAB41968FF21A8(&(Global_113648.f_10018.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0xD0AE101DBAA43C98(&iLocal_0);
	}
	unk_0xCA0440712A8201E9(4);
	unk_0xD111D6644D1D5BD5(0);
	unk_0xBD933493403CCF9D(1);
	unk_0x675D9C12C73D3DE7();
}

