#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x4B34601C5C56F3EE(83))
	{
		func_10();
	}
	unk_0x47C032CD609587EE(0);
	unk_0xB0550BC91B0159D6(&(Global_113386.f_10016.f_25), 1);
	func_7();
	unk_0x94B5910A9C945688(1);
	if (!unk_0xA829C9A2767AC8EF())
	{
		unk_0x859006DB870314C5(0);
	}
	iLocal_0 = unk_0x528279F3F1EEF869("OPENING_CREDITS");
	while (!unk_0x0347CCBD719C8ADC(iLocal_0))
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0xA829C9A2767AC8EF())
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0x320D1840B6DAA1CC() + 8000 + unk_0xF2DB717A73826179((2f * 1000f)));
	while (!unk_0xF34D8FCAE3FD4EE4())
	{
		func_7();
		if (!BitTest(Global_113386.f_10016.f_25, 1))
		{
			unk_0xC4353D240DCE9533(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0x320D1840B6DAA1CC() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0x320D1840B6DAA1CC() + unk_0xF2DB717A73826179((2f * 1000f)));
				}
			}
			else if (unk_0x320D1840B6DAA1CC() > iLocal_1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_113386.f_10016.f_25), 1);
				if (unk_0x05C8821CD3E101BA() || unk_0x8FE9914D4872D601())
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
	Global_100480 = 1;
}

int func_2()
{
	if (func_3(0))
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

int func_3(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_100480.f_7 = iParam0;
	Global_100480.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0xEA5DEA46C3EE64D3(iLocal_0, "HIDE_LOGO");
	unk_0x4ADC8B166E139423("STRING");
	unk_0x76DB21247AE4E4E2(sParam0);
	unk_0xD1D4F8D5470AFA4C();
	unk_0x6F06CF0E9AB02847();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0xEA5DEA46C3EE64D3(iLocal_0, "SHOW_LOGO");
	unk_0x4ADC8B166E139423("STRING");
	unk_0x76DB21247AE4E4E2(sParam0);
	unk_0xD1D4F8D5470AFA4C();
	unk_0xCA5D23E5F0F0306F(fParam1);
	unk_0xCA5D23E5F0F0306F(fParam2);
	unk_0xCA5D23E5F0F0306F(fParam3);
	unk_0xCA5D23E5F0F0306F(fParam4);
	unk_0xCA5D23E5F0F0306F(fParam5);
	unk_0xCA5D23E5F0F0306F(fParam6);
	unk_0xCA5D23E5F0F0306F(fParam7);
	unk_0x6F06CF0E9AB02847();
}

void func_7()
{
	unk_0x33F5772842F16E82();
	unk_0x7653D561C9574763(2, 199, 1);
	unk_0x2E04B7B46A3670E5(7);
	func_8();
}

void func_8()
{
	unk_0x16E09CCC0BD508DA();
	func_9();
}

void func_9()
{
	Global_23011.f_134 = 1;
}

void func_10()
{
	unk_0xCED9E32812D6C7C7(&(Global_113386.f_10016.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0x705B098546DEB18A(&iLocal_0);
	}
	unk_0x2E04B7B46A3670E5(4);
	unk_0x94B5910A9C945688(0);
	unk_0x47C032CD609587EE(1);
	unk_0xAFBDF6A5E54114C1();
}

