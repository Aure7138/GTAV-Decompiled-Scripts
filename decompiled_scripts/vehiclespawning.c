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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	struct<3> Local_65 = { 0, 0, 0 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	fLocal_63 = 277.7314f;
	Local_65 = { -196.045f, -580.13f, 135.0004f };
	unk_0x859006DB870314C5(800);
	func_16();
	while (true)
	{
		unk_0xC1A703145662449B();
		func_15();
		if (func_7() || uLocal_62)
		{
			func_3();
		}
		if (!iLocal_58)
		{
			if (!iLocal_57 && unk_0xA829C9A2767AC8EF())
			{
				unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), Local_65, 1, 0, 0, 1);
				unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), fLocal_63);
				unk_0xCA60DF1D01DBD440(Local_65, 2500f, 0);
				unk_0x94953C3FF0664F66(0);
				iLocal_57 = 1;
			}
			else if (unk_0x2981C54770E1D19C())
			{
				if (!bLocal_61)
				{
					bLocal_61 = func_2();
				}
				else if (!bLocal_59)
				{
					bLocal_59 = func_1();
				}
				else
				{
					unk_0x5A7ACD1CDF509B0D(800);
					iLocal_58 = 1;
				}
			}
		}
	}
}

int func_1()
{
	if (!unk_0x9B28DEEC684DA500(uLocal_64, "garage_decor_01"))
	{
		unk_0x9F9FADBC78E66B6A(uLocal_64, "garage_decor_01");
	}
	else
	{
		unk_0xD665FC4F45F67B23(uLocal_64);
		return 1;
	}
	return 0;
}

int func_2()
{
	uLocal_64 = unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A());
	if (unk_0xBCC73B466E2B2350(uLocal_64))
	{
		if (!iLocal_60)
		{
			unk_0x62EB051F5ED6DD41(uLocal_64);
			iLocal_60 = 1;
		}
		else if (unk_0xEA02B859DE237081(uLocal_64))
		{
			unk_0xAED5221F05DAE55E(uLocal_64);
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_56)
	{
		func_5(iVar0);
		iVar0++;
	}
	func_4();
}

void func_4()
{
	unk_0xAFBDF6A5E54114C1();
}

void func_5(int iParam0)
{
	func_6(&(uLocal_35[iParam0]));
	unk_0xC1F83F3B5F8E7D3B((unk_0xBD7B8099C8298D2F(0, 0) - 1));
}

void func_6(var uParam0)
{
	var uVar0;
	
	if (unk_0xCCDCD6672DAE6835(*uParam0))
	{
		if (!unk_0x07B2F8356DC13CF4(*uParam0))
		{
		}
	}
	if (unk_0x90F6E2F6488B98BA(*uParam0))
	{
		uVar0 = unk_0xF2D8DACFAEBD9629(*uParam0);
		unk_0x531055A66E7A812C(&uVar0);
	}
}

int func_7()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_14())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_13())
	{
		return 1;
	}
	if (func_12(159))
	{
		if (!func_11())
		{
			return 1;
		}
	}
	if (func_12(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_8() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_8()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_8()
{
	switch (func_10())
	{
		case 0:
			return func_9();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_9()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_10()
{
	return Global_31959;
}

bool func_11()
{
	return Global_2714762.f_698;
}

int func_12(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_13()
{
	return Global_2725403;
}

bool func_14()
{
	return Global_2714762.f_693;
}

void func_15()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_16()
{
	unk_0xD9B114A8D3A8319F(32, 0, -1);
	func_18(0, -1, 0);
	unk_0x21F2B09183F31D02(&uLocal_35, 21, 0);
	if (!func_17())
	{
		func_3();
	}
	unk_0x2C07CBAFAC54A645(0);
	if (!unk_0x8DD54478CFA35F08("imp_dt1_02_cargarage_a"))
	{
		unk_0x13A763A67BA2A95B("imp_dt1_02_cargarage_a");
	}
}

int func_17()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x9315DBF7D972F07A())
		{
			return 0;
		}
		if (unk_0x72FEF2581032D369())
		{
			return 1;
		}
		if (func_14())
		{
			return 0;
		}
		if (func_12(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_18(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x0EEB2C2CA48FB650();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_4();
			}
			else
			{
				return 0;
			}
		}
		if (!func_19(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x9315DBF7D972F07A())
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
				if (func_14())
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
				if (func_12(157))
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xDB51AF48ABE62D4D())
			{
				if (!bParam2)
				{
					func_4();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x0EEB2C2CA48FB650();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			if (!bParam2)
			{
				func_4();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xDB51AF48ABE62D4D())
	{
		if (!bParam2)
		{
			func_4();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_19(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

