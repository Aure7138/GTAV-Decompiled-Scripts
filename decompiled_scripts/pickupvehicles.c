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
	if (unk_0x55EEDBBFDC6E810F(18))
	{
		if (unk_0xC62B624C267237C2() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x24B651D85CCE5EB4(joaat("docks_setup")) == 0)
		{
			if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
			{
				if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
				{
					iLocal_28 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
				}
				else
				{
					iLocal_28 = 0;
				}
			}
			if (unk_0x7DE17ACDD8BA2642(iLocal_28))
			{
				if (unk_0xFBD273FDBCF0C5BD(iLocal_28, 0))
				{
					if (unk_0x091E6E360116B927(iLocal_28, joaat("handler")))
					{
						unk_0x4150CF46B891FFF5(0, 51);
						if (!unk_0xE78F9945DE0A031E(iLocal_28))
						{
							if (iLocal_32 == 0)
							{
								if (!unk_0x7DE17ACDD8BA2642(iLocal_29) || (unk_0x7DE17ACDD8BA2642(iLocal_29) && unk_0x0744FA5607ECEB91(unk_0x30BE8A934C020461(iLocal_28, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1) != iLocal_29))
								{
									iLocal_29 = unk_0x0744FA5607ECEB91(unk_0x30BE8A934C020461(iLocal_28, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1);
								}
								if (unk_0x7DE17ACDD8BA2642(iLocal_29))
								{
									if (func_1(&uLocal_30, 1000))
									{
										if (unk_0x4FF8B59CB27F97A3(iLocal_28, iLocal_29))
										{
											if (unk_0x87644B1F984197FE(0, 51))
											{
												unk_0xDC78CC0796A37113(iLocal_28, iLocal_29);
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
								uLocal_30 = unk_0xA5E11AF0A2B928C1();
								iLocal_31 = 0;
								iLocal_32 = 0;
							}
							if (unk_0x87644B1F984197FE(0, 51))
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
	
	iVar0 = unk_0xA5E11AF0A2B928C1();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x675D9C12C73D3DE7();
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
	if (BitTest(Global_113648.f_9087.f_99.f_219[iVar0], bVar1))
	{
		unk_0x061B1200C95204CB(&(Global_113648.f_9087.f_99.f_219[iVar0]), bVar1);
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
	if (BitTest(Global_113648.f_9087.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	unk_0xECDAB41968FF21A8(&(Global_113648.f_9087.f_99.f_219[iVar0]), bVar1);
	return 1;
}

