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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	func_4(21);
	if (unk_0x4B34601C5C56F3EE(18))
	{
		if (unk_0x27400A3FFA074F8B() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xB4C854DD86E40FDA(joaat("docks_setup")) == 0)
		{
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					iLocal_28 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
				}
				else
				{
					iLocal_28 = 0;
				}
			}
			if (unk_0xE5965CDF24F93A9F(iLocal_28))
			{
				if (unk_0x55A0C756C4A8220C(iLocal_28, 0))
				{
					if (unk_0x7010991FDA59D3F2(iLocal_28, joaat("handler")))
					{
						unk_0x07899AAA5D680386(0, 51);
						if (!unk_0x70E571BF95BE7243(iLocal_28))
						{
							if (iLocal_32 == 0)
							{
								if (!unk_0xE5965CDF24F93A9F(iLocal_29) || (unk_0xE5965CDF24F93A9F(iLocal_29) && unk_0x87A467676BDF8C35(unk_0x6B62510F212526DC(iLocal_28, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1) != iLocal_29))
								{
									iLocal_29 = unk_0x87A467676BDF8C35(unk_0x6B62510F212526DC(iLocal_28, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1);
								}
								if (unk_0xE5965CDF24F93A9F(iLocal_29))
								{
									if (func_1(&uLocal_30, 1000))
									{
										if (unk_0x36D170C816C17270(iLocal_28, iLocal_29))
										{
											if (unk_0xF09A4F413B0D30EB(0, 51))
											{
												unk_0x618335AB4B1AD654(iLocal_28, iLocal_29);
												iLocal_31 = 1;
												iLocal_32 = 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if (iLocal_31 == 1)
							{
								uLocal_30 = unk_0x320D1840B6DAA1CC();
								iLocal_31 = 0;
								iLocal_32 = 0;
							}
							if (unk_0xF09A4F413B0D30EB(0, 51))
							{
							}
						}
					}
				}
			}
		}
	}
}

int func_1(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x320D1840B6DAA1CC();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0xAFBDF6A5E54114C1();
}

int func_3(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113386.f_9085.f_99.f_219[iVar0], bVar1))
	{
		unk_0xB0550BC91B0159D6(&(Global_113386.f_9085.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

int func_4(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113386.f_9085.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	unk_0xCED9E32812D6C7C7(&(Global_113386.f_9085.f_99.f_219[iVar0]), bVar1);
	return 1;
}

