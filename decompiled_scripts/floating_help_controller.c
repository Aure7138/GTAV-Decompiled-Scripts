void __EntryFunction__()
{
	unk_0x3F57BEDBC381CBC7();
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
	while (iVar0 < Global_112038)
	{
		if (Global_112038[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0x320D1840B6DAA1CC() > Global_112038[iVar0 /*28*/].f_21 && Global_112038[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0xD4DF0F443B8FD284(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_112038[iVar0 /*28*/].f_21 != -1)
				{
					if (!BitTest(Global_112038[iVar0 /*28*/].f_27, 0))
					{
						Global_112038[iVar0 /*28*/].f_21 = (Global_112038[iVar0 /*28*/].f_21 + unk_0xF2DB717A73826179((unk_0x51109C28352EC9A3() * 1000f)));
						if (unk_0x42A08F69AD1FF739(iVar1))
						{
							unk_0xCED9E32812D6C7C7(&(Global_112038[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_112038[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_112038[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0x55B23FE400FCEA6B(Global_112038[iVar0 /*28*/].f_23, 0))
						{
							if (!BitTest(Global_112038[iVar0 /*28*/].f_27, 3))
							{
								unk_0x9C0F9E5181B36182(iVar1, unk_0xCACAD935C0BEE14F(Global_112038[iVar0 /*28*/].f_23, Global_112038[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0x4AE51BE152CCC94C(iVar1, Global_112038[iVar0 /*28*/].f_23, Global_112038[iVar0 /*28*/].f_24, Global_112038[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_112038[iVar0 /*28*/].f_24 != 0f || Global_112038[iVar0 /*28*/].f_24.f_1 != 0f) || Global_112038[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0x9C0F9E5181B36182(iVar1, Global_112038[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0x103E53B30AF92CA0(iVar1, Global_112038[iVar0 /*28*/].f_24, Global_112038[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0x320D1840B6DAA1CC() - Global_112038[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_112038[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_112038[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_112038[iParam0 /*28*/].f_4), "", 64);
	Global_112038[iParam0 /*28*/].f_23 = 0;
	Global_112038[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_112038[iParam0 /*28*/].f_27 = 0;
	Global_112038[iParam0 /*28*/].f_20 = 0;
	Global_112038[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x3C57C2F07FEE34D2(&(Global_112038[iParam0 /*28*/]), "") && !unk_0xE8F6C1F695B25B91(&(Global_112038[iParam0 /*28*/])))
	{
		if (BitTest(Global_112038[iParam0 /*28*/].f_27, 1))
		{
			if (BitTest(Global_112038[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_112038[iParam0 /*28*/]), &(Global_112038[iParam0 /*28*/].f_4), Global_112038[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_112038[iParam0 /*28*/]), &(Global_112038[iParam0 /*28*/].f_4));
			}
		}
		else if (BitTest(Global_112038[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_112038[iParam0 /*28*/]), Global_112038[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_112038[iParam0 /*28*/]));
		}
	}
	return 0;
}

var func_4(int iParam0, var uParam1)
{
	unk_0xB65782D82090BB33(uParam1);
	return unk_0x73CB3406A86A3A02((1 + iParam0));
}

var func_5(int iParam0, var uParam1, var uParam2)
{
	unk_0xB65782D82090BB33(uParam1);
	unk_0x2AE954BA77A66307(uParam2);
	return unk_0x73CB3406A86A3A02((1 + iParam0));
}

var func_6(int iParam0, var uParam1, var uParam2)
{
	unk_0xB65782D82090BB33(uParam1);
	unk_0x26C23BE14F66F202(uParam2);
	return unk_0x73CB3406A86A3A02((1 + iParam0));
}

var func_7(int iParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0xB65782D82090BB33(uParam1);
	unk_0x26C23BE14F66F202(uParam2);
	unk_0x2AE954BA77A66307(uParam3);
	return unk_0x73CB3406A86A3A02((1 + iParam0));
}

