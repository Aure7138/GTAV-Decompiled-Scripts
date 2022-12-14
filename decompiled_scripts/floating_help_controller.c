void __EntryFunction__()
{
	unk_0x389D5B1C24A046B5();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_112300)
	{
		if (Global_112300[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0xA5E11AF0A2B928C1() > Global_112300[iVar0 /*28*/].f_21 && Global_112300[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0x4F6F113654DD2FF9(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_112300[iVar0 /*28*/].f_21 != -1)
				{
					if (!BitTest(Global_112300[iVar0 /*28*/].f_27, 0))
					{
						Global_112300[iVar0 /*28*/].f_21 = (Global_112300[iVar0 /*28*/].f_21 + unk_0xF2DB717A73826179((unk_0x290D4E218346D595() * 1000f)));
						if (unk_0xD7D4486FB7C71841(iVar1))
						{
							unk_0xECDAB41968FF21A8(&(Global_112300[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_112300[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_112300[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0x055111B11E6624FD(Global_112300[iVar0 /*28*/].f_23, 0))
						{
							if (!BitTest(Global_112300[iVar0 /*28*/].f_27, 3))
							{
								unk_0x4AF5998734141E4B(iVar1, unk_0x7394CB479CCA24AF(Global_112300[iVar0 /*28*/].f_23, Global_112300[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0xCFF918A241935CF9(iVar1, Global_112300[iVar0 /*28*/].f_23, Global_112300[iVar0 /*28*/].f_24, Global_112300[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_112300[iVar0 /*28*/].f_24 != 0f || Global_112300[iVar0 /*28*/].f_24.f_1 != 0f) || Global_112300[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0x4AF5998734141E4B(iVar1, Global_112300[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0xD71A8A9B6EA81C9A(iVar1, Global_112300[iVar0 /*28*/].f_24, Global_112300[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0xA5E11AF0A2B928C1() - Global_112300[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_112300[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_112300[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_112300[iParam0 /*28*/].f_4), "", 64);
	Global_112300[iParam0 /*28*/].f_23 = 0;
	Global_112300[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_112300[iParam0 /*28*/].f_27 = 0;
	Global_112300[iParam0 /*28*/].f_20 = 0;
	Global_112300[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x4310A0DB886F9FED(&(Global_112300[iParam0 /*28*/]), "") && !unk_0xB71C73D0269747D5(&(Global_112300[iParam0 /*28*/])))
	{
		if (BitTest(Global_112300[iParam0 /*28*/].f_27, 1))
		{
			if (BitTest(Global_112300[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_112300[iParam0 /*28*/]), &(Global_112300[iParam0 /*28*/].f_4), Global_112300[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_112300[iParam0 /*28*/]), &(Global_112300[iParam0 /*28*/].f_4));
			}
		}
		else if (BitTest(Global_112300[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_112300[iParam0 /*28*/]), Global_112300[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_112300[iParam0 /*28*/]));
		}
	}
	return 0;
}

var func_4(int iParam0, var uParam1)
{
	unk_0x56C9BC27C0FF68D7(uParam1);
	return unk_0x6A92D111B5409879((1 + iParam0));
}

var func_5(int iParam0, var uParam1, var uParam2)
{
	unk_0x56C9BC27C0FF68D7(uParam1);
	unk_0x64C50E40AA09A6B5(uParam2);
	return unk_0x6A92D111B5409879((1 + iParam0));
}

var func_6(int iParam0, var uParam1, var uParam2)
{
	unk_0x56C9BC27C0FF68D7(uParam1);
	unk_0x48849374B34BB7B9(uParam2);
	return unk_0x6A92D111B5409879((1 + iParam0));
}

var func_7(int iParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0x56C9BC27C0FF68D7(uParam1);
	unk_0x48849374B34BB7B9(uParam2);
	unk_0x64C50E40AA09A6B5(uParam3);
	return unk_0x6A92D111B5409879((1 + iParam0));
}

