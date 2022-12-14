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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	struct<96> Local_64 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3, 3, 3, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<62> Local_160 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (unk_0xA26A9A07F761D8F8())
	{
		func_134(&uScriptParam_0);
	}
	else
	{
		func_125();
	}
	while (true)
	{
		func_124();
		unk_0x8B438725D591ED78(2, 199, 1);
		unk_0x8B438725D591ED78(2, 200, 1);
		if (func_116())
		{
			func_125();
		}
		if (func_115())
		{
			func_125();
		}
		func_1();
	}
}

void func_1()
{
	func_109(0);
	unk_0xEF54B7007CB2210B(0);
	switch (Local_160.f_16)
	{
		case 0:
			func_106();
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()
{
	if (BitTest(Global_2764742, 1))
	{
		unk_0x061B1200C95204CB(&Global_2764742, true);
		func_96(Global_2764741);
	}
	if (Local_160.f_61 != Global_2764872)
	{
		Local_160.f_61 = { Global_2764872 };
	}
	else
	{
		Local_160.f_61.f_1 = 0;
		Local_160.f_61.f_2 = 0;
	}
	if (!unk_0xFEE065E56A9BEF3F() && !func_95())
	{
		func_50();
		func_41();
		func_37();
		func_34();
		func_33();
		func_13();
	}
	func_10(&(Local_64.f_67), BitTest(Local_160.f_60, 3));
	func_3(&(Local_160.f_38), &(Local_160.f_39));
	unk_0x061B1200C95204CB(&Global_2764742, 4);
	unk_0x061B1200C95204CB(&(Local_160.f_60), true);
	unk_0x061B1200C95204CB(&(Local_160.f_60), 2);
	unk_0x061B1200C95204CB(&(Local_160.f_60), 3);
	unk_0x061B1200C95204CB(&(Local_160.f_60), 6);
	unk_0x061B1200C95204CB(&(Local_160.f_60), 7);
}

void func_3(var uParam0, var uParam1)
{
	struct<3> Var0;
	var uVar3;
	struct<3> Var4;
	
	func_9();
	Var0 = { unk_0x7D4F36E9E86B0A11() };
	if ((((unk_0xFEE065E56A9BEF3F() || func_8()) || unk_0x87644B1F984197FE(2, 199)) || unk_0x51EB177CA0562B62(2, 199)) || unk_0x6BD2D66249562506(2, 199))
	{
		unk_0x8F78EA97D41803A8(Var0.f_0, Var0.f_1);
		unk_0x744519E782746847(Var0.f_0, Var0.f_1, 0);
		if (unk_0xFEE065E56A9BEF3F() || func_8())
		{
			if (unk_0xCE4AAA035282336C(unk_0xE9E936CE791EB484()))
			{
				unk_0x5E3A54CF3E9DF9FC(unk_0xE9E936CE791EB484(), 255);
			}
		}
	}
	else if (unk_0xCE4AAA035282336C(unk_0xE9E936CE791EB484()))
	{
		unk_0x5E3A54CF3E9DF9FC(unk_0xE9E936CE791EB484(), 0);
	}
	unk_0x1EC8D37647B7D811(Var0.f_0, Var0.f_1);
	uVar3 = unk_0x3401C73FB9F2E08B();
	if (unk_0xF57C1326FD40C8A7(uVar3))
	{
		unk_0xF7A24FA32EE5B341(uVar3, 1);
	}
	Var4 = { unk_0x929C32C999805F0A(0) };
	Var4 = { func_7(Var4) };
	if (!unk_0xCE4AAA035282336C(*uParam0))
	{
		*uParam1 = func_5(Var0, 0);
		unk_0xEA4639F4444B7003(*uParam1, 425);
		unk_0xA4B6A532E7DDE178(*uParam1, 0);
		unk_0x3C1C0549FDA2CF24(*uParam1, 4);
		unk_0x1886753DA39F38F8(*uParam1, func_4(2));
		unk_0x414544B2666E3E0E(*uParam1, 1, 11);
		unk_0x225EB85DBC38E707(*uParam1, 0.54f);
		unk_0xC2E0B90856D55E49(*uParam1, 13 + 1);
		*uParam0 = func_5(Var0, 0);
		unk_0xEA4639F4444B7003(*uParam0, 425);
		unk_0xA4B6A532E7DDE178(*uParam0, 0);
		unk_0x3C1C0549FDA2CF24(*uParam0, 4);
		unk_0x1886753DA39F38F8(*uParam0, func_4(18));
		unk_0x414544B2666E3E0E(*uParam0, 1, 11);
		unk_0x225EB85DBC38E707(*uParam0, 0.44f);
		unk_0xC2E0B90856D55E49(*uParam0, 13 + 1);
		unk_0xDE9F0903D46A94EF(*uParam0, 1);
		unk_0x8ACBB35F79434663(*uParam0, unk_0xF2DB717A73826179(unk_0x06A2A02CDC68090B(Var4.f_0, Var4.f_1)));
		unk_0xDE9F0903D46A94EF(*uParam1, 1);
		unk_0x8ACBB35F79434663(*uParam1, unk_0xF2DB717A73826179(unk_0x06A2A02CDC68090B(Var4.f_0, Var4.f_1)));
	}
	else
	{
		unk_0x385CFFE850A96C08(*uParam0, Var0);
		unk_0x8ACBB35F79434663(*uParam0, unk_0xF2DB717A73826179(unk_0x06A2A02CDC68090B(Var4.f_0, Var4.f_1)));
		unk_0x3C1C0549FDA2CF24(*uParam0, 5);
		unk_0x385CFFE850A96C08(*uParam1, Var0);
		unk_0x8ACBB35F79434663(*uParam1, unk_0xF2DB717A73826179(unk_0x06A2A02CDC68090B(Var4.f_0, Var4.f_1)));
		unk_0x3C1C0549FDA2CF24(*uParam1, 5);
	}
}

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0x2D32CB870722E022(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

var func_5(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x7F0C74F83813841D(Param0);
	unk_0x225EB85DBC38E707(uVar0, func_6(unk_0xA26A9A07F761D8F8(), 1f, 1f));
	unk_0xBD91E7D4B770F97E(uVar0, iParam3);
	return uVar0;
}

float func_6(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_7(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0.f_0 = unk_0xD0FFB162F40A139C(Param0.f_0);
	Var0.f_1 = unk_0xD0FFB162F40A139C(Param0.f_2);
	Var0.f_2 = unk_0x0BADBFA3B172435F(Param0.f_0);
	Var0.f_1 = (Var0.f_1 * Var0.f_0);
	Var0.f_0 = (Var0.f_0 * -unk_0x0BADBFA3B172435F(Param0.f_2));
	return Var0;
}

bool func_8()
{
	return unk_0xD7863C03D2155822() != 0;
}

void func_9()
{
	Global_1574839 = 1;
}

void func_10(var uParam0, bool bParam1)
{
	if (unk_0x2AC37494BBF1DB16(uParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_12(uParam0))
		{
			unk_0xCD3C8E1022864F65(1);
		}
		return;
	}
	if (!func_12(uParam0))
	{
		unk_0xCD3C8E1022864F65(1);
		func_11(uParam0);
	}
}

void func_11(var uParam0)
{
	unk_0x476CC3711883B966(uParam0);
	unk_0xBC8969B539DCA239(0, 1, 1, -1);
}

bool func_12(var uParam0)
{
	unk_0x56C9BC27C0FF68D7(uParam0);
	return unk_0x6A92D111B5409879(0);
}

void func_13()
{
	if (BitTest(Global_2764742, 5))
	{
		unk_0x061B1200C95204CB(&Global_2764742, 5);
		Local_160.f_35 = 0;
	}
	func_14(&(Local_64.f_24), &(Local_160.f_35));
}

void func_14(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (*uParam0 > 0)
	{
		bVar0 = func_31(0, -1, 0);
		if (bVar0)
		{
			if ((!*uParam1 || unk_0x6163ED6C61AD64FC(2)) || unk_0x6163ED6C61AD64FC(0))
			{
				func_30(-1);
				iVar1 = 0;
				while (iVar1 < *uParam0)
				{
					iVar2 = uParam0->f_34[iVar1];
					if (iVar2 < 32)
					{
						func_29(iVar2, &(uParam0->f_1[iVar1 /*4*/]), -1);
					}
					else
					{
						iVar3 = (iVar2 - 32);
						func_28(iVar3, &(uParam0->f_1[iVar1 /*4*/]), -1, 0);
					}
					iVar1++;
				}
				*uParam1 = 1;
			}
			func_27(1);
			func_15(0, -1, 0, 1, 0, 0, 1, 1, 0);
		}
	}
}

void func_15(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_26(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_23(bParam4, bParam8))
	{
		return;
	}
	if (func_21())
	{
		return;
	}
	if (unk_0xEBDA168F3804CE1F())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_18(unk_0x93E99A2DBCBA9CFA(), 0))
		{
			return;
		}
	}
	if (unk_0xCC17806DB0C41C19())
	{
		if (unk_0x6C75193377D3CE17() == 0 || unk_0xEBDA168F3804CE1F())
		{
			return;
		}
	}
	if (Global_23270.f_5166 != 0)
	{
		if (unk_0x6163ED6C61AD64FC(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23270.f_5166)
			{
				if (Global_23270.f_5465[iVar1] != 363)
				{
					StringCopy(&(Global_23270.f_5168[iVar1 /*16*/]), unk_0x28AEB293270C3DDA(2, Global_23270.f_5465[iVar1], 1), 64);
				}
				else if (Global_23270.f_5480[iVar1] != 32)
				{
					StringCopy(&(Global_23270.f_5168[iVar1 /*16*/]), unk_0xB49FF1EF1051E9DA(2, Global_23270.f_5480[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_23270.f_5167 = 0;
		}
		if (!Global_23270.f_5167)
		{
			unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xC49D258FBF3BF214((1f - (Global_23270.f_5524 / 100f)));
			unk_0xAE3413B0654A0035();
			if (unk_0xCC17806DB0C41C19())
			{
				unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xD546F85F5AF0F231(1);
				unk_0xAE3413B0654A0035();
			}
			iVar1 = 0;
			while (iVar1 < Global_23270.f_5166)
			{
				if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_5393[iVar1 /*4*/])) != unk_0x14580F20CBCE4FA9("PREV"))
				{
					unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xC6A3EF6C4A3412C1(iVar1);
					func_17(&(Global_23270.f_5168[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && unk_0x14580F20CBCE4FA9(&(Global_23270.f_5393[iVar2 /*4*/])) == unk_0x14580F20CBCE4FA9("PREV"))
					{
						func_17(&(Global_23270.f_5168[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23270.f_5450[iVar1] == -1)
					{
						func_16(&(Global_23270.f_5393[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23270.f_5450[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x2AF11E92DE43CDE3(&(Global_23270.f_5393[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x610EBC15DA88FA9D(iVar3, 70);
						}
						else
						{
							unk_0x64C50E40AA09A6B5(iVar3);
						}
						unk_0xF8FCA9E7130CE1C8();
					}
					if (unk_0xCC17806DB0C41C19())
					{
						if (Global_23270.f_5465[iVar1] != 363 && BitTest(Global_23270.f_5495, iVar1))
						{
							unk_0xD546F85F5AF0F231(1);
							unk_0xC6A3EF6C4A3412C1(Global_23270.f_5465[iVar1]);
						}
						else
						{
							unk_0xD546F85F5AF0F231(0);
							unk_0xC6A3EF6C4A3412C1(363);
						}
					}
					unk_0xAE3413B0654A0035();
				}
				iVar1++;
			}
			if (unk_0x14580F20CBCE4FA9(&(Global_4540953.f_16)) != unk_0x14580F20CBCE4FA9(""))
			{
				unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xC6A3EF6C4A3412C1(Global_23270.f_5166);
				func_17(&Global_4540953);
				if (Global_4540953.f_20 == -1)
				{
					func_16(&(Global_4540953.f_16));
				}
				else
				{
					iVar4 = Global_23270.f_5450[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x2AF11E92DE43CDE3(&(Global_4540953.f_16));
					if (bParam5)
					{
						unk_0x610EBC15DA88FA9D(iVar4, 70);
					}
					else
					{
						unk_0x64C50E40AA09A6B5(iVar4);
					}
					unk_0xF8FCA9E7130CE1C8();
				}
				unk_0xAE3413B0654A0035();
			}
			unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(80);
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23270.f_5525)
			{
				unk_0xC6A3EF6C4A3412C1(1);
			}
			else
			{
				unk_0xC6A3EF6C4A3412C1(0);
			}
			unk_0xAE3413B0654A0035();
			Global_23270.f_5167 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23270.f_5166)
		{
			if (Global_23270.f_5450[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xC6A3EF6C4A3412C1(iVar1);
					unk_0x2AF11E92DE43CDE3(&(Global_23270.f_5393[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x610EBC15DA88FA9D(iParam2, 70);
					}
					else
					{
						unk_0x64C50E40AA09A6B5(iParam2);
					}
					unk_0xF8FCA9E7130CE1C8();
					unk_0xAE3413B0654A0035();
				}
			}
			iVar1++;
		}
		if (Global_4540953.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xC6A3EF6C4A3412C1(iVar1);
				unk_0x2AF11E92DE43CDE3(&(Global_4540953.f_16));
				if (bParam5)
				{
					unk_0x610EBC15DA88FA9D(iParam2, 70);
				}
				else
				{
					unk_0x64C50E40AA09A6B5(iParam2);
				}
				unk_0xF8FCA9E7130CE1C8();
				unk_0xAE3413B0654A0035();
			}
		}
		unk_0x8241C4807850E84A(76, 66);
		unk_0x345E4FB614ACF508(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23270.f_8892)
			{
				unk_0x71CD983E90DB042A(15, 0f, -0.0375f);
				Global_23270.f_8892 = 1;
			}
		}
		else if (Global_23270.f_8892)
		{
			unk_0x833DC7C29EA6EEF3(15);
			Global_23270.f_8892 = 0;
		}
		unk_0x4B358573708E8571();
		if (Global_23270.f_5498)
		{
			unk_0x8241C4807850E84A(82, 66);
			unk_0x345E4FB614ACF508(0f, 0f, 0f, 0f);
			unk_0x20C68F87D0FDD976(Global_23270.f_6103[iVar0 /*10*/], Global_23270.f_5496, Global_23270.f_5497, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x4B358573708E8571();
		}
		else
		{
			unk_0x55CCA1B8F633F628(Global_23270.f_6103[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_16(var uParam0)
{
	unk_0x2AF11E92DE43CDE3(uParam0);
	unk_0xF8FCA9E7130CE1C8();
}

void func_17(var uParam0)
{
	unk_0x7DDE71A42D80E8FA(uParam0);
}

bool func_18(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_19(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853910[iParam0 /*862*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xE6DEE82DB0922DF0(iParam0))
		{
			bVar0 = unk_0x4292F1DE8BA2D22E(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_19(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
	}
	if (Global_1575040[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_20()
{
	return Global_1574918;
}

int func_21()
{
	struct<3> Var0;
	
	if (Global_20383.f_1 > 3)
	{
		return 1;
	}
	if (func_22())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0xF756EDB27C588BED(&Var0);
		if (Global_20328 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_22()
{
	if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_23(bool bParam0, bool bParam1)
{
	if (Global_2672505.f_1684.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x35DF833D93BCC488() || (func_25(8, -1) && func_24() != 65)) || (unk_0xD7863C03D2155822() != 0 && !bParam1)) || (unk_0xB53553DC4AAC7D8A() && !bParam0)) || unk_0x4136116828BCAAB6()) || Global_78819) || Global_23270.f_8891) || unk_0x47F8B78DC1737D5C()) || Global_100733.f_1474)
	{
		return 0;
	}
	return 1;
}

int func_24()
{
	return Global_1574993;
}

var func_25(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1653913.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1653913.f_1048, iParam0);
}

int func_26(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0xA26A9A07F761D8F8() && unk_0x839E00E966CE3F2D())
		{
			iParam2 = unk_0x3B01E4A065DEF5C7();
		}
	}
	StringCopy(&cVar0, unk_0x688846D56810779A(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x14580F20CBCE4FA9(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_23270.f_6164[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23270.f_6164[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23270.f_6164[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_27(int iParam0)
{
	Global_1655472.f_1163 = iParam0;
}

void func_28(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x28AEB293270C3DDA(2, iParam0, 1);
	if (Global_23270.f_5166 >= 14)
	{
		StringCopy(&Global_4540953, sVar0, 64);
		StringCopy(&(Global_4540953.f_16), sParam1, 16);
		Global_4540953.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xECDAB41968FF21A8(&(Global_23270.f_5495), Global_23270.f_5166);
	}
	StringCopy(&(Global_23270.f_5168[Global_23270.f_5166 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23270.f_5393[Global_23270.f_5166 /*4*/]), sParam1, 16);
	Global_23270.f_5450[Global_23270.f_5166] = iParam2;
	Global_23270.f_5465[Global_23270.f_5166] = iParam0;
	Global_23270.f_5480[Global_23270.f_5166] = 32;
	Global_23270.f_5166++;
}

void func_29(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xB49FF1EF1051E9DA(2, iParam0, 1);
	if (Global_23270.f_5166 >= 14)
	{
		StringCopy(&Global_4540953, sVar0, 64);
		StringCopy(&(Global_4540953.f_16), sParam1, 16);
		Global_4540953.f_20 = iParam2;
		return;
		return;
	}
	unk_0x061B1200C95204CB(&(Global_23270.f_5495), Global_23270.f_5166);
	StringCopy(&(Global_23270.f_5168[Global_23270.f_5166 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23270.f_5393[Global_23270.f_5166 /*4*/]), sParam1, 16);
	Global_23270.f_5450[Global_23270.f_5166] = iParam2;
	Global_23270.f_5465[Global_23270.f_5166] = 363;
	Global_23270.f_5480[Global_23270.f_5166] = iParam0;
	Global_23270.f_5166++;
}

void func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_23270.f_5166 = 0;
	Global_23270.f_5167 = 0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23270.f_5393[iVar0 /*4*/]), "", 16);
		Global_23270.f_5450[iVar0] = -1;
		Global_23270.f_5465[iVar0] = 363;
		Global_23270.f_5480[iVar0] = 32;
		iVar0++;
	}
	Global_23270.f_5495 = 0;
	StringCopy(&(Global_4540953.f_16), "", 16);
	Global_4540953.f_20 = -1;
	if (unk_0xCC17806DB0C41C19())
	{
		if (!func_26(&iVar1, 0, iParam0))
		{
			return;
		}
		if (unk_0x5FAF55B1F052A2E6(Global_23270.f_6103[iVar1 /*10*/]))
		{
			unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
			unk_0xD546F85F5AF0F231(0);
			unk_0xAE3413B0654A0035();
		}
	}
}

bool func_31(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_26(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23270.f_6078[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x2AC37494BBF1DB16(&(Global_23270.f_6078[iVar0 /*4*/])))
	{
		unk_0xA3C681843B51A4CC(&(Global_23270.f_6078[iVar0 /*4*/]), 9);
		Global_23270.f_6071[iVar0] = 1;
		if (!unk_0x7F29CD9C0A5C1E44(&(Global_23270.f_6078[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xEBA1698B77FD0A86("CommonMenu", 0);
	Global_23270.f_6057[iVar0] = 1;
	if (!unk_0x9812897315C21146("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xEBA1698B77FD0A86("MPShopSale", 0);
		Global_23270.f_6064[iVar0] = 1;
		if (!unk_0x9812897315C21146("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23270.f_6103[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_32(&(Global_23270.f_6103[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_32(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x5FAF55B1F052A2E6(*uParam0))
			{
				*uParam0 = unk_0x2B4645565204EA06(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x5FAF55B1F052A2E6(*uParam0))
					{
						uParam0->f_8 = unk_0xA5E11AF0A2B928C1();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0xA5E11AF0A2B928C1();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x5FAF55B1F052A2E6(*uParam0))
			{
				uParam0->f_8 = unk_0xA5E11AF0A2B928C1();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x5FAF55B1F052A2E6(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_33()
{
	int iVar0;
	
	if (!BitTest(Local_160.f_60, 7))
	{
		iVar0 = unk_0x4F873840FC0FA8FE();
		if (Local_160.f_56 != iVar0)
		{
			unk_0xADD48E9C814DB7CB("eyeinthesky");
			Local_160.f_56 = unk_0x4F873840FC0FA8FE();
		}
	}
}

void func_34()
{
	if (BitTest(Local_160.f_60, 6))
	{
		if (BitTest(Local_160.f_60, 5))
		{
			func_36();
		}
	}
	else if (!BitTest(Local_160.f_60, 5) && !unk_0x2AC37494BBF1DB16(&(Local_64.f_80)))
	{
		func_35(&(Local_64.f_80));
	}
}

void func_35(var uParam0)
{
	if (unk_0x2AC37494BBF1DB16(uParam0))
	{
		return;
	}
	if (BitTest(Local_160.f_60, 5))
	{
	}
	else
	{
		unk_0x176EB4F2EF6454CB(uParam0);
		unk_0xECDAB41968FF21A8(&(Local_160.f_60), 5);
	}
}

void func_36()
{
	if (BitTest(Local_160.f_60, 5))
	{
		unk_0x6FCC012A63184153();
		unk_0x061B1200C95204CB(&(Local_160.f_60), 5);
	}
}

void func_37()
{
	struct<3> Var0;
	
	if (Local_64.f_17 == 4)
	{
		return;
	}
	if (BitTest(Local_160.f_60, 1))
	{
		return;
	}
	if (!unk_0x5FAF55B1F052A2E6(Local_160.f_36))
	{
		Local_160.f_36 = unk_0x2B4645565204EA06(Local_64.f_86.f_1);
		return;
	}
	Var0 = { unk_0x4C3FED86996E8840(Local_160.f_0, 2) };
	switch (Local_64.f_17)
	{
		case 1:
		case 2:
		case 3:
			if (!Local_160.f_37)
			{
				Local_160.f_37 = 1;
				func_40(Local_160.f_36, Local_64.f_20);
				func_39(Local_160.f_36, Local_64.f_20.f_1, Local_64.f_20.f_2, Local_64.f_20.f_3);
			}
		
		case 0:
			func_38(Local_160.f_36, 0f, unk_0xD164D1587C07E718(Local_160.f_0), Local_64.f_4, Local_64.f_5, Var0.f_2);
			break;
	}
	unk_0xCA0440712A8201E9(0);
	unk_0x55CCA1B8F633F628(Local_160.f_36, 255, 255, 255, 0, 0);
}

void func_38(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	unk_0x9FD96C5DE6EDFC15(uParam0, "SET_ALT_FOV_HEADING");
	unk_0xC49D258FBF3BF214(fParam1);
	unk_0xC49D258FBF3BF214(fParam2);
	unk_0xC49D258FBF3BF214(fParam5);
	unk_0xAE3413B0654A0035();
}

void func_39(var uParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x9FD96C5DE6EDFC15(uParam0, "SET_WEAPON_VALUES");
	unk_0xC6A3EF6C4A3412C1(uParam1);
	unk_0xC6A3EF6C4A3412C1(uParam2);
	unk_0xC6A3EF6C4A3412C1(uParam3);
	unk_0xAE3413B0654A0035();
}

void func_40(var uParam0, int iParam1)
{
	unk_0x9FD96C5DE6EDFC15(uParam0, "SET_ZOOM_VISIBLE");
	unk_0xD546F85F5AF0F231(uParam1);
	unk_0xAE3413B0654A0035();
}

void func_41()
{
	struct<4> Var0;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	
	if (Local_64.f_94 != 0)
	{
		Local_160.f_4 = { unk_0x30BE8A934C020461(Local_64.f_95, 1) };
		Local_160.f_4.f_3 = { unk_0x000D018EA42688BA(Local_64.f_95, 2) };
	}
	if (!BitTest(Local_160.f_60, 2))
	{
		Var0 = { func_46(Local_160.f_0, &(Local_160.f_1), Local_64, Local_64.f_6.f_1, Local_64.f_6) };
	}
	Var4 = { Local_64.f_91 + Local_160.f_1 };
	Var7 = { func_45(Local_64.f_71, Var4.f_2) };
	Var10 = { Local_64.f_88 + Var7 };
	switch (Local_64.f_94)
	{
		case 0:
			func_44(Local_160.f_0, Var10, Var4);
			break;
		
		case 1:
			func_43(Local_160.f_0, Var10, Var4, Local_64.f_95);
			break;
	}
	func_42(Local_160.f_40, Local_160.f_40.f_2, Local_160.f_40.f_8, Local_160.f_40.f_3, Local_160.f_40.f_9, Local_160.f_40.f_4, Local_160.f_40.f_10, Local_160.f_40.f_5, Local_160.f_40.f_11, Local_160.f_40.f_6, Local_160.f_40.f_12, Local_160.f_40.f_7, Var0.f_0, Var0.f_1, Local_160.f_61.f_1, Local_160.f_61.f_2 > 0);
	Local_160.f_4.f_6 = { unk_0x103F436394008500(Local_160.f_0) };
	Local_160.f_4.f_9 = { unk_0x4C3FED86996E8840(Local_160.f_0, 2) };
}

void func_42(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, char* sParam7, int iParam8, char* sParam9, int iParam10, char* sParam11, float fParam12, struct<3> Param13, int iParam16, bool bParam17)
{
	float fVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	float fVar4;
	
	if (unk_0x2AC37494BBF1DB16(uParam0) || unk_0xF6AFEDAAE44A2159(uParam0, 0, -1))
	{
		if (fParam12 != 0f)
		{
			if (iParam4 != -1)
			{
				if (unk_0x209C5E3492025E4B(iParam4))
				{
					unk_0x531D638530A8DB97(iParam4, uParam5, uParam1, 1);
				}
				unk_0x30DD80A33ACF3D36(iParam4, "Ctrl", fParam12);
				if (fParam12 < 0f)
				{
					unk_0x30DD80A33ACF3D36(iParam4, "Dir", -1f);
				}
				else
				{
					unk_0x30DD80A33ACF3D36(iParam4, "Dir", 1f);
				}
			}
		}
		else if (iParam4 != -1)
		{
			if (!unk_0x209C5E3492025E4B(iParam4))
			{
				unk_0xA13B5B0EF7402391(iParam4);
			}
		}
		fVar0 = unk_0x652D2EEEF1D3E62C(Param13);
		if (fVar0 > 0f)
		{
			if (iParam2 != -1)
			{
				if (unk_0x209C5E3492025E4B(iParam2))
				{
					unk_0x531D638530A8DB97(iParam2, uParam3, sParam1, 1);
				}
				unk_0x30DD80A33ACF3D36(iParam2, "Ctrl", fVar0);
			}
		}
		else if (iParam2 != -1)
		{
			if (!unk_0x209C5E3492025E4B(iParam2))
			{
				unk_0xA13B5B0EF7402391(iParam2);
			}
		}
		if (iParam6 != -1)
		{
			if (unk_0x209C5E3492025E4B(iParam6))
			{
				unk_0x531D638530A8DB97(iParam6, uParam7, sParam1, 1);
			}
		}
		uVar1 = unk_0xC1A5EC5C986B98AD();
		if (unk_0x3C3D6D026CF7F51B(uVar1, 0))
		{
			uVar2 = unk_0x95DC39736F6748E3(uVar1, 0);
		}
		else
		{
			uVar2 = uVar1;
		}
		if (iParam8 != -1)
		{
			bVar3 = bParam17;
			if (!bVar3)
			{
				fVar4 = unk_0xBBDA792448DB5A89(unk_0x15848AD475FC952B(uVar2));
				bVar3 = (IntToFloat(iParam16) / fVar4) > 0.1f;
			}
			if (bVar3)
			{
				if (unk_0x209C5E3492025E4B(iParam8))
				{
					unk_0x531D638530A8DB97(iParam8, uParam9, uParam9, 1);
				}
			}
		}
		if (iParam10 != -1)
		{
			if ((IntToFloat(unk_0x2935B4D6CE81318D(uVar1)) / unk_0xBBDA792448DB5A89(unk_0x15848AD475FC952B(uVar1))) < 0.15f || (IntToFloat(unk_0x2935B4D6CE81318D(uVar2)) / unk_0xBBDA792448DB5A89(unk_0x15848AD475FC952B(uVar2))) < 0.15f)
			{
				if (unk_0x209C5E3492025E4B(iParam10))
				{
					unk_0x531D638530A8DB97(iParam10, uParam11, sParam1, 1);
				}
			}
			else if (!unk_0x209C5E3492025E4B(iParam10))
			{
				unk_0xA13B5B0EF7402391(iParam10);
			}
		}
	}
}

void func_43(var uParam0, struct<3> Param1, struct<3> Param4, var uParam7)
{
	unk_0xB109E9D7B544BA66(uParam0, uParam7, Param1, 1);
	unk_0xB346B70AE8C42AD8(uParam0, Param4 + unk_0x000D018EA42688BA(uParam7, 2), 2);
}

void func_44(var uParam0, struct<3> Param1, struct<3> Param4)
{
	unk_0x5BF3CF5BAF6ABBBB(uParam0, Param1);
	unk_0xB346B70AE8C42AD8(uParam0, Param4, 2);
}

Vector3 func_45(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = unk_0x0BADBFA3B172435F(fParam3);
	fVar4 = unk_0xD0FFB162F40A139C(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<4> func_46(var uParam0, var uParam1, struct<6> Param2, float fParam8, float fParam9)
{
	float fVar0;
	struct<4> Var1;
	float fVar5;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	float fVar18;
	struct<3> Var19;
	bool bVar22;
	
	fVar0 = unk_0xD164D1587C07E718(uParam0);
	Var1.f_0 = -fVar0;
	Var1.f_1 = { -*uParam1 };
	fVar5 = unk_0xA436D585B7588C3A(0, 39);
	Var6 = { -Vector(unk_0xBD6438016C54920C(0, 290), 0f, unk_0xBD6438016C54920C(0, 291)) };
	if (unk_0x42AAFCB5B7854AA9(2))
	{
		fParam8 = (fParam8 * 8f);
	}
	else
	{
		if (unk_0x2655A8EC638E4FD1(fVar5) < 0.06f)
		{
			fVar5 = 0f;
		}
		if (unk_0x652D2EEEF1D3E62C(Var6) < 0.06f)
		{
			Var6 = { 0f, 0f, 0f };
		}
	}
	fVar9 = unk_0x290D4E218346D595();
	fVar10 = func_49((fVar0 + ((fVar5 * fParam9) * fVar9)), Param2.f_4, Param2.f_5);
	unk_0xE3BD36CCB5EB72F2(uParam0, fVar10);
	unk_0x1E648B5D359EF084(uParam0, 0.01f);
	fVar11 = ((fVar10 - 5f) / 42f);
	unk_0x8660199B2F4898FA(1f);
	unk_0x2B41232E5A40D6DD(fVar11);
	Var12.f_0 = Param2.f_2;
	Var12.f_1 = 0f;
	Var12.f_2 = Param2.f_0;
	Var15.f_0 = Param2.f_3;
	Var15.f_1 = 0f;
	Var15.f_2 = Param2.f_1;
	fVar18 = (((fVar9 * fVar10) * fParam8) * (1f + ((fVar10 - Param2.f_4) / (Param2.f_5 - Param2.f_4))));
	Var19 = { Var6 };
	Var19.f_2 = (Var19.f_2 * fVar18);
	Var19.f_0 = (Var19.f_0 * fVar18);
	*uParam1 = { *uParam1 + Var19 };
	bVar22 = Var12.f_2 > Var15.f_2;
	if (bVar22)
	{
		*uParam1 = func_49(*uParam1, Var12.f_0, Var15.f_0);
		uParam1->f_1 = func_49(uParam1->f_1, Var12.f_1, Var15.f_1);
		uParam1->f_2 = func_48(uParam1->f_2);
	}
	else
	{
		*uParam1 = { func_47(*uParam1, Var12, Var15) };
	}
	Var1.f_0 = (Var1.f_0 + fVar10);
	Var1.f_1 = { Var1.f_1 + *uParam1 };
	return Var1;
}

Vector3 func_47(struct<3> Param0, struct<3> Param3, struct<3> Param6)
{
	Param0.f_0 = func_49(Param0.f_0, Param3.f_0, Param6.f_0);
	Param0.f_1 = func_49(Param0.f_1, Param3.f_1, Param6.f_1);
	Param0.f_2 = func_49(Param0.f_2, Param3.f_2, Param6.f_2);
	return Param0;
}

float func_48(float fParam0)
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

float func_49(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_50()
{
	switch (Local_64.f_8.f_1)
	{
		case 1:
			func_85();
			break;
		
		case 2:
			func_70();
			break;
		
		case 3:
			func_51();
			break;
	}
}

void func_51()
{
	var uVar0;
	var uVar3;
	struct<3> Var6;
	
	if (unk_0x24B651D85CCE5EB4(joaat("am_mp_drone")) < 1)
	{
		if (!Local_160.f_29.f_5)
		{
			Local_160.f_29.f_5 = 1;
		}
		if (!func_65(4, 0f, 0f, 0f, Local_160.f_4.f_6, 0f, 0f, 0f))
		{
			if (func_64())
			{
				unk_0x531D638530A8DB97(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			}
			return;
		}
	}
	if (Local_160.f_29)
	{
		if (unk_0x72474BA05A104E1E())
		{
			if (Local_160.f_29.f_1)
			{
				if (func_62(unk_0x93E99A2DBCBA9CFA()))
				{
					unk_0x78DD793477D04C42(250);
					unk_0x4473578485E594D7(Local_160.f_40.f_13.f_2, Local_160.f_40.f_13.f_1, Local_160.f_29.f_2, Local_160.f_40.f_13, 1, 500, 0);
					Local_160.f_29.f_1 = 0;
					Local_160.f_29 = 0;
				}
			}
			else
			{
				Local_160.f_29.f_1 = 1;
				func_61(&(Local_160.f_17), 0, 0);
				unk_0xECDAB41968FF21A8(&Global_2764742, 0);
				func_58(3f, 100f, &(Local_160.f_29.f_2), &uVar0, &uVar3, &Var6);
				func_57(1);
				func_55(Local_160.f_29.f_2, Var6);
			}
		}
	}
	if (func_54() || Local_160.f_29)
	{
		unk_0xECDAB41968FF21A8(&(Local_160.f_60), 1);
		unk_0xECDAB41968FF21A8(&(Local_160.f_60), 2);
		unk_0xECDAB41968FF21A8(&(Local_160.f_60), 3);
		if (!Local_160.f_29)
		{
			unk_0xECDAB41968FF21A8(&(Local_160.f_60), 6);
			unk_0xECDAB41968FF21A8(&(Local_160.f_60), 7);
		}
		return;
	}
	if (func_64())
	{
		if (func_52(&(Local_160.f_17), Local_64.f_8.f_2, 0))
		{
			Local_160.f_29 = 1;
			unk_0x6D5ACBBD4CE34249(250);
		}
		else
		{
			unk_0x531D638530A8DB97(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		}
	}
}

int func_52(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_53(uParam0, bParam2, 0);
	if (unk_0xA26A9A07F761D8F8() && !bParam2)
	{
		if (unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0xA5E11AF0A2B928C1(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_53(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xA26A9A07F761D8F8() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x0DB7F8294D73598B();
			}
			else
			{
				*uParam0 = unk_0xB78F034955403399();
			}
		}
		else
		{
			*uParam0 = unk_0xA5E11AF0A2B928C1();
		}
		uParam0->f_1 = 1;
	}
}

bool func_54()
{
	return BitTest(Global_1962996, 5);
}

void func_55(struct<3> Param0, struct<3> Param3)
{
	if (!func_56(Global_1962996.f_13, Param0, 0))
	{
		Global_1962996.f_13 = { Param0 };
		Param3 = { Param3 + Vector(0f, -180f, 180f) };
		Global_1962996.f_16 = { Param3 };
	}
}

bool func_56(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1962996.f_2, 4))
		{
			Global_1962996.f_2 = 0;
			unk_0xECDAB41968FF21A8(&(Global_1962996.f_2), 4);
		}
	}
	else if (BitTest(Global_1962996.f_2, 4))
	{
		unk_0x061B1200C95204CB(&(Global_1962996.f_2), 4);
	}
}

void func_58(float fParam0, float fParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	int iVar12;
	float fVar13;
	int iVar14;
	float fVar15;
	
	if (Local_64.f_74 == 0)
	{
		*uParam5 = { unk_0x4C3FED86996E8840(Local_160.f_0, 2) };
		*uParam4 = { func_7(*uParam5) };
		*uParam2 = { Local_160.f_4.f_6 + Vector(fParam0, fParam0, fParam0) * *uParam4 };
		*uParam3 = { func_60(*uParam2, fParam1) };
	}
	else
	{
		Var0 = { func_7(unk_0x4C3FED86996E8840(Local_160.f_0, 2)) };
		Var3 = { unk_0x7394CB479CCA24AF(Local_64.f_95, Local_64.f_88) };
		Var6 = { unk_0xB4F3ED71EC41EFCC(Local_64.f_95, Local_64.f_74.f_1[0]) };
		Var9 = { Var6 - Var3 };
		*uParam2 = { Var6 };
		iVar12 = 0;
		fVar13 = func_59(Var9, Var0);
		iVar14 = 1;
		while (iVar14 <= (Local_64.f_74 - 1))
		{
			Var6 = { unk_0xB4F3ED71EC41EFCC(Local_64.f_95, Local_64.f_74.f_1[iVar14]) };
			Var9 = { Var6 - Var3 };
			fVar15 = func_59(Var9, Var0);
			if (fVar15 > fVar13)
			{
				fVar13 = fVar15;
				iVar12 = iVar14;
				*uParam2 = { Var6 };
			}
			iVar14++;
		}
		*uParam5 = { unk_0xFF2D800B33BBE068(Local_64.f_95, Local_64.f_74.f_1[iVar12]) };
		*uParam4 = { func_7(*uParam5) };
		*uParam2 = { *uParam2 + Vector(fParam0, fParam0, fParam0) * *uParam4 };
		*uParam3 = { *uParam2 + Vector(fParam1, fParam1, fParam1) * *uParam4 };
	}
}

float func_59(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_60(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x929C32C999805F0A(2) };
	Var3 = { func_7(Var0) };
	return Param0 + Vector(fParam3, fParam3, fParam3) * Var3;
}

void func_61(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xA26A9A07F761D8F8() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x0DB7F8294D73598B();
		}
		else
		{
			*uParam0 = unk_0xB78F034955403399();
		}
	}
	else
	{
		*uParam0 = unk_0xA5E11AF0A2B928C1();
	}
	uParam0->f_1 = 1;
}

int func_62(int iParam0)
{
	if (iParam0 != func_63())
	{
		return BitTest(Global_1853910[iParam0 /*862*/].f_267.f_365, 26);
	}
	return 0;
}

int func_63()
{
	return -1;
}

bool func_64()
{
	return (BitTest(Global_2764742, 4) || unk_0xE665ABCFC5784C35(0, 229));
}

int func_65(int iParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7)
{
	struct<9> Var0;
	
	if (func_69())
	{
		if (!func_68(&uLocal_48))
		{
			func_53(&uLocal_48, 0, 0);
		}
		else if (func_52(&uLocal_48, 8000, 0))
		{
			func_67(&uLocal_48);
			func_66(0);
		}
	}
	if (!unk_0xB8CEC43FB7EF2D92(iLocal_50) && !unk_0xAF83A305E6D700D3(joaat("am_mp_drone")))
	{
		unk_0x3EC562D93709C894("AM_MP_DRONE");
	}
	if ((unk_0xAF83A305E6D700D3(joaat("am_mp_drone")) && !unk_0xB8CEC43FB7EF2D92(iLocal_50)) && !func_69())
	{
		Var0.f_1 = -1;
		Var0.f_0 = 0;
		Var0.f_2 = { Param1 };
		Var0.f_5 = { Param4 };
		Var0.f_8 = { Param7 };
		Var0.f_1 = iParam0;
		if (unk_0x24B651D85CCE5EB4(joaat("am_mp_drone")) < 1)
		{
			if (!unk_0x269C91515A1405D5("AM_MP_DRONE", Var0.f_0, 1, 0))
			{
				iLocal_50 = unk_0xC4BB298BD441BE78(joaat("am_mp_drone"), &Var0, 12, 1424);
				unk_0xA46627DF9B8B1FBE(joaat("am_mp_drone"));
				func_67(&uLocal_48);
			}
			else
			{
				return 1;
			}
		}
	}
	else if (unk_0xB8CEC43FB7EF2D92(iLocal_50) && !func_69())
	{
		return 1;
	}
	return 0;
}

void func_66(bool bParam0)
{
	if (bParam0)
	{
		if (unk_0x24B651D85CCE5EB4(unk_0x14580F20CBCE4FA9("AM_MP_DRONE")) > 0)
		{
			if (!func_69())
			{
				unk_0xECDAB41968FF21A8(&Global_1962996, 0);
			}
		}
	}
	else if (func_69())
	{
		unk_0x061B1200C95204CB(&Global_1962996, false);
	}
}

void func_67(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_68(var uParam0)
{
	return uParam0->f_1;
}

bool func_69()
{
	return BitTest(Global_1962996, 0);
}

void func_70()
{
	bool bVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	func_77();
	if (Local_160.f_22 != -1)
	{
		bVar0 = func_52(&(Local_160.f_22.f_2), 2000, 0);
		if (bVar0)
		{
			if (unk_0xA6B591D40DE982B5(Local_160.f_22.f_4))
			{
				uVar2 = unk_0x4DFB7A1A6909D574(Local_160.f_22.f_4);
				unk_0xA13CC11D53A5CEF3(uVar2, 2);
			}
			func_76(&(Local_160.f_22.f_5));
			func_75(&(Local_160.f_22.f_6), "Bleep", "DLC_IE_Steal_EITS_Sounds", 1);
			iVar1 = 6;
		}
		else
		{
			if (unk_0xA6B591D40DE982B5(Local_160.f_22.f_4))
			{
				uVar3 = unk_0x4DFB7A1A6909D574(Local_160.f_22.f_4);
				unk_0xA13CC11D53A5CEF3(uVar3, 1);
			}
			func_75(&(Local_160.f_22.f_5), "VULKAN_LOCK_ON_AMBER", 0, 1);
			iVar1 = 9;
		}
		func_72(Local_160.f_22.f_4, !bVar0, iVar1);
		if (func_64())
		{
			if (Local_64.f_16 != 0 && !unk_0x0CBB7C273DED26E7(Local_64.f_16))
			{
				unk_0x531D638530A8DB97(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				return;
			}
			if (bVar0 && func_52(&(Local_160.f_17), Local_64.f_8.f_2, 0))
			{
				func_61(&(Local_160.f_17), 0, 0);
				func_71(1f, &Var4, &Var7);
				unk_0x0234DCAAB51635F9(Var4, Var7, Local_64.f_8.f_3, 1, Local_64.f_8, unk_0xC1A5EC5C986B98AD(), 1, 1, -1082130432, Local_64.f_95, 0, 0, Local_160.f_22, 1, 0, Local_64.f_94 != 0, 0);
				unk_0x4473578485E594D7(Local_160.f_40.f_13.f_2, Local_160.f_40.f_13.f_1, Var4, Local_160.f_40.f_13, 1, 500, 0);
			}
			else
			{
				unk_0x531D638530A8DB97(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			}
		}
	}
}

void func_71(float fParam0, var uParam1, var uParam2)
{
	var uVar0;
	
	func_58(0f, fParam0, uParam1, uParam2, &uVar0, &uVar0);
}

void func_72(var uParam0, bool bParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	var uVar9;
	
	if (!unk_0x9812897315C21146("helicopterhud"))
	{
		return;
	}
	unk_0xCA0440712A8201E9(1);
	Var2 = { unk_0x30BE8A934C020461(uParam0, 1) };
	unk_0x44B56BC1E0FB0FA8(Var2, 0);
	fVar0 = func_74(uParam0, Local_160.f_0, 0.5f);
	fVar0 = func_49(fVar0, 0.015f, fVar0);
	fVar1 = (fVar0 * unk_0xE5A34D583EE533B7(0));
	unk_0x2D32CB870722E022(iParam2, &uVar5, &uVar6, &uVar7, &iVar8);
	uVar9 = func_73((bParam1 && (unk_0xA5E11AF0A2B928C1() % 300) < 150), unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar8) / 4f)), iVar8);
	unk_0xB978B5D428DA5DE9("helicopterhud", "hud_outline", 0f, 0f, fVar0, fVar1, 0f, uVar5, uVar6, uVar7, uVar9, 0, 0);
	unk_0xA5726989A9722512();
}

int func_73(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

float func_74(var uParam0, var uParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	Var0 = { unk_0x103F436394008500(uParam1) };
	Var3 = { unk_0x30BE8A934C020461(uParam0, 1) };
	fVar6 = unk_0x2E496FE654DA4166(Var0, Var3, 1);
	fVar7 = unk_0xD164D1587C07E718(uParam1);
	fVar8 = 1f;
	fVar9 = (fVar8 / unk_0xFB30D0CD31C8C4E2((fVar7 / 2f)));
	fVar10 = ((fVar9 * fParam2) / fVar6);
	return fVar10;
}

void func_75(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (*uParam0 == -1)
	{
		*uParam0 = unk_0x9F2C1BA4F2BF5CF8();
		unk_0x531D638530A8DB97(*uParam0, sParam1, sParam2, iParam3);
	}
}

void func_76(var uParam0)
{
	if (*uParam0 != -1)
	{
		unk_0xA13B5B0EF7402391(*uParam0);
		unk_0x8A1B9F78F1F46A12(*uParam0);
		*uParam0 = -1;
	}
}

void func_77()
{
	bool bVar0;
	var uVar1;
	
	if (func_84(&(Local_160.f_22.f_1), Local_160.f_22.f_4, &bVar0))
	{
		if (bVar0)
		{
			if (Local_160.f_22 != Local_160.f_22.f_4)
			{
				func_61(&(Local_160.f_22.f_2), 0, 0);
				func_76(&(Local_160.f_22.f_5));
				func_76(&(Local_160.f_22.f_6));
			}
			Local_160.f_22 = Local_160.f_22.f_4;
		}
		else
		{
			func_83();
			uVar1 = func_81(Local_64.f_8.f_4);
			Local_160.f_22.f_4 = uVar1;
		}
		if (Local_160.f_22.f_4 != -1)
		{
			func_79(Local_160.f_22.f_4);
		}
	}
	if (Local_160.f_22 != -1)
	{
		if (((Local_160.f_22.f_4 != Local_160.f_22 || unk_0x055111B11E6624FD(Local_160.f_22, 0)) || func_78(Local_160.f_22) > 0.04f) || unk_0x652D2EEEF1D3E62C(unk_0x30BE8A934C020461(Local_160.f_22, 1) - Local_160.f_4.f_6) > Local_64.f_8.f_4)
		{
			func_83();
		}
	}
}

float func_78(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { unk_0x30BE8A934C020461(uParam0, 1) };
	if (!unk_0x02A83258E03436BA(Var0, &Var0, &(Var0.f_1)))
	{
		return 1f;
	}
	Var0 = { Var0 - Vector(0f, 0.5f, 0.5f) };
	Var0.f_2 = 0f;
	return unk_0xA8CEACB4F35AE058(Var0);
}

void func_79(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x103F436394008500(Local_160.f_0) };
	Var3 = { unk_0x30BE8A934C020461(uParam0, 1) };
	Var3 = { Var3 + Vector(2f, 2f, 2f) * func_80(Var3 - Var0) };
	Local_160.f_22.f_1 = unk_0xB4C9A1D39D0533BF(Var0, Var3, 511, 0, 4);
	if (Local_160.f_22.f_1 == 0)
	{
	}
}

Vector3 func_80(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_81(float fParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	
	iVar0 = unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA());
	bVar1 = iVar0 != -1;
	fVar3 = 0.005f;
	bVar4 = false;
	fVar5 = (fParam0 * fParam0);
	iVar6 = 0;
	while (iVar6 < 32)
	{
		iVar7 = iVar6;
		uVar8 = unk_0xF2CFBB1105511E1A(iVar7);
		if (((!unk_0xE6DEE82DB0922DF0(iVar7) || !func_82(iVar7, 1, 1)) || (bVar1 && unk_0x4292F1DE8BA2D22E(iVar7) == iVar0)) || unk_0xA8CEACB4F35AE058(Local_160.f_4.f_6 - unk_0x30BE8A934C020461(uVar8, 1)) > fVar5)
		{
		}
		else
		{
			fVar9 = func_78(uVar8);
			if (fVar9 < fVar3)
			{
				iVar2 = iVar7;
				fVar3 = fVar9;
				bVar4 = true;
			}
		}
		iVar6++;
	}
	if (bVar4)
	{
		uVar10 = unk_0xF2CFBB1105511E1A(iVar2);
		if (unk_0x3C3D6D026CF7F51B(uVar10, 0))
		{
			iVar11 = unk_0x95DC39736F6748E3(uVar10, 0);
			if (!unk_0x055111B11E6624FD(iVar11, 0))
			{
				return iVar11;
			}
		}
	}
	return -1;
}

int func_82(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xE6DEE82DB0922DF0(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x48DC6A21D1CAD89C(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672505.f_3)
				{
					return Global_2672505.f_2;
				}
				else if (Global_2657589[iVar0 /*466*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_83()
{
	Local_160.f_22 = -1;
	Local_160.f_22.f_4 = -1;
	func_76(&(Local_160.f_22.f_5));
	func_76(&(Local_160.f_22.f_6));
}

int func_84(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	var uVar1;
	var uVar4;
	int iVar7;
	int iVar8;
	var uVar9;
	
	*uParam2 = 0;
	if (*uParam0 == 0 || iParam1 == -1)
	{
		return 1;
	}
	iVar8 = unk_0x5A2817B89A8ECCD2(*uParam0, &iVar0, &uVar4, &uVar1, &iVar7);
	if (!unk_0xA6B591D40DE982B5(iVar7))
	{
		if (unk_0x71904BD37B848CAF(iVar7))
		{
			uVar9 = unk_0x9C8D7679C15E75FF(iVar7);
			if (unk_0x3C3D6D026CF7F51B(uVar9, 0))
			{
				iVar7 = unk_0x95DC39736F6748E3(uVar9, 0);
			}
		}
	}
	if (iVar8 == 2)
	{
		if (iVar0 != 0)
		{
			if (unk_0x7DE17ACDD8BA2642(iVar7))
			{
				*uParam2 = (iParam1 == iVar7 && !unk_0x055111B11E6624FD(iVar7, 0));
			}
		}
		return 1;
	}
	else if (iVar8 == 0)
	{
		return 1;
	}
	return 0;
}

void func_85()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var9;
	var uVar12;
	struct<3> Var15;
	struct<3> Var18;
	
	unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 452, 1);
	bVar0 = Local_64.f_13.f_1 > 0;
	bVar1 = (bVar0 && !func_52(&(Local_160.f_19), Local_64.f_13.f_2, 0));
	if (bVar0)
	{
		if (bVar1)
		{
			iVar2 = 6;
			sVar3 = "TC_RELOAD";
			iVar5 = Local_64.f_13.f_2;
			iVar4 = func_94(&(Local_160.f_19), 0, 0);
		}
		else
		{
			iVar2 = 1;
			sVar3 = "TC_AMMO";
			iVar5 = Local_64.f_13.f_1;
			iVar4 = (iVar5 - Local_160.f_19.f_2);
		}
		func_91(iVar4, iVar5, sVar3, iVar2, -1, 11, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	if (bVar0 && !bVar1)
	{
		if (unk_0xE665ABCFC5784C35(0, 225))
		{
			func_90();
		}
	}
	if (!bVar1 && func_89())
	{
		Local_160.f_19.f_2 = (Local_160.f_19.f_2 + unk_0xF2DB717A73826179((unk_0x290D4E218346D595() * 1000f)));
		if (func_52(&(Local_160.f_17), Local_64.f_8.f_2, 0))
		{
			func_61(&(Local_160.f_17), 0, 0);
			if (Local_64.f_13.f_1 > 0 && Local_160.f_19.f_2 >= Local_64.f_13.f_1)
			{
				func_61(&(Local_160.f_19), 0, 0);
				Local_160.f_19.f_2 = 0;
			}
			func_58(0f, Local_64.f_8.f_4, &Var6, &Var9, &uVar12, &Var15);
			Var18 = { Vector(Local_64.f_13, Local_64.f_13, Local_64.f_13) * func_86(0f, 0f, 0f, 1f) };
			Var18.f_1 = 0f;
			Var15 = { Var15 + Var18 };
			Var9 = { Var6 + FtoV(unk_0x652D2EEEF1D3E62C(Var9 - Var6)) * func_7(Var15) };
			Var6.f_2 = (Var6.f_2 - 1f);
			unk_0x0234DCAAB51635F9(Var6, Var9, Local_64.f_8.f_3, 0, Local_64.f_8, unk_0xC1A5EC5C986B98AD(), 1, 1, -1082130432, Local_64.f_95, 0, 0, 0, 1, 0, Local_64.f_94 != 0, 0);
			if (Local_160.f_40.f_13.f_2 != -1 && unk_0x209C5E3492025E4B(Local_160.f_40.f_13.f_2))
			{
				unk_0x4473578485E594D7(Local_160.f_40.f_13.f_2, Local_160.f_40.f_13.f_1, Var6, Local_160.f_40.f_13, 1, 500, 0);
			}
		}
	}
	else if (Local_160.f_40.f_13.f_2 != -1 && !unk_0x209C5E3492025E4B(Local_160.f_40.f_13.f_2))
	{
		unk_0xA13B5B0EF7402391(Local_160.f_40.f_13.f_2);
	}
}

Vector3 func_86(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	
	fVar3 = (fParam3 * fParam3);
	iVar4 = 0;
	while (iVar4 < 20)
	{
		Var0 = { unk_0xD88C7A93096DA0F7(-fParam3, fParam3), unk_0xD88C7A93096DA0F7(-fParam3, fParam3), unk_0xD88C7A93096DA0F7(-fParam3, fParam3) };
		if (unk_0xB7A628320EFF8E47(Var0, 0f, 0f, 0f) <= fVar3)
		{
			return Param0 + Var0;
		}
		iVar4++;
	}
	return func_87(Param0, fParam3);
}

Vector3 func_87(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { unk_0xD88C7A93096DA0F7(-1f, 1f), unk_0xD88C7A93096DA0F7(-1f, 1f), unk_0xD88C7A93096DA0F7(-1f, 1f) };
	return Param0 + func_88(Var0, unk_0xD88C7A93096DA0F7(0f, fParam3));
}

Vector3 func_88(struct<3> Param0, float fParam3)
{
	float fVar0;
	
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

var func_89()
{
	return (BitTest(Global_2764742, 4) || unk_0x992AACDC3C066F55(0, 229));
}

void func_90()
{
	func_61(&(Local_160.f_19), 0, 0);
	Local_160.f_19.f_2 = 0;
}

void func_91(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_93(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655472.f_1 = 1;
		func_92(0, iVar0);
		Global_1655472.f_1177[iVar0] = iParam0;
		Global_1655472.f_1177.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1655472.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1655472.f_1177.f_194[iVar0] = iParam3;
		Global_1655472.f_1177.f_183[iVar0] = iParam4;
		Global_1655472.f_1177.f_216[iVar0] = iParam5;
		Global_1655472.f_1177.f_227[iVar0 /*3*/] = iParam6;
		Global_1655472.f_1177.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1655472.f_1177.f_258[iVar0] = iParam8;
		Global_1655472.f_1177.f_269[iVar0] = iParam9;
		Global_1655472.f_1177.f_312[iVar0] = iParam10;
		Global_1655472.f_1177.f_323[iVar0] = iParam11;
		Global_1655472.f_1177.f_334[iVar0] = iParam12;
		Global_1655472.f_1177.f_345[iVar0] = iParam13;
		Global_1655472.f_1172 = 1;
		Global_1655472.f_1177.f_356[iVar0] = iParam14;
		Global_1655472.f_1177.f_367[iVar0] = iParam15;
		Global_1655472.f_1177.f_378[iVar0] = iParam16;
		Global_1655472.f_1177.f_389[iVar0] = iParam17;
		Global_1655472.f_1177.f_400[iVar0] = iParam18;
		Global_1655472.f_1177.f_411[iVar0] = iParam19;
		Global_1655472.f_1177.f_422[iVar0] = iParam20;
		Global_1655472.f_1177.f_433[iVar0] = iParam21;
		Global_1655472.f_1177.f_444[iVar0] = iParam22;
		Global_1655472.f_1177.f_455[iVar0] = iParam23;
		Global_1655472.f_1177.f_466[iVar0] = iParam24;
		Global_1655472.f_1177.f_205[iVar0] = iParam25;
		Global_1655472.f_1177.f_477[iVar0] = iParam26;
		Global_1655472.f_1177.f_488[iVar0] = iParam27;
		Global_1655472.f_1177.f_499[iVar0] = iParam28;
		Global_1655472.f_1177.f_510[iVar0] = iParam29;
		Global_1655472.f_1177.f_521[iVar0] = iParam30;
		Global_1655472.f_1177.f_532[iVar0] = iParam31;
		Global_1655472.f_1177.f_543[iVar0] = iParam32;
		Global_1655472.f_1177.f_554[iVar0] = iParam33;
		Global_1655472.f_1177.f_565[iVar0] = iParam34;
		Global_1655472.f_1177.f_576[iVar0] = iParam35;
		Global_1655472.f_1177.f_587[iVar0] = iParam36;
	}
}

void func_92(int iParam0, int iParam1)
{
	unk_0xECDAB41968FF21A8(&(Global_1655472.f_7009[iParam0]), iParam1);
}

int func_93(int iParam0, int iParam1)
{
	return BitTest(Global_1655472.f_7009[iParam0], iParam1);
}

var func_94(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xA26A9A07F761D8F8() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam0);
		}
		else
		{
			return unk_0x55DB5FC567C065D9(unk_0xB78F034955403399(), *uParam0);
		}
	}
	return unk_0x55DB5FC567C065D9(unk_0xA5E11AF0A2B928C1(), *uParam0);
}

bool func_95()
{
	return Global_75693;
}

void func_96(int iParam0)
{
	var uVar0;
	
	uVar0 = iParam0;
	func_103(iParam0);
	if (func_102(&uVar0, 2))
	{
		func_61(&(Local_160.f_17), 0, 0);
		Local_64.f_8 = { Global_2764654.f_8 };
	}
	if (func_102(&uVar0, 6))
	{
		Local_64.f_19 = Global_2764654.f_19;
	}
	if (func_102(&uVar0, 10))
	{
		Local_64.f_74 = { Global_2764654.f_74 };
	}
	if (func_102(&uVar0, 8))
	{
		Local_64.f_67 = { Global_2764654.f_67 };
	}
	if (func_102(&uVar0, 12))
	{
		Local_64.f_20 = { Global_2764654.f_20 };
	}
	func_97(iParam0);
}

void func_97(int iParam0)
{
	var uVar0;
	
	uVar0 = iParam0;
	if (func_102(&uVar0, 0))
	{
	}
	if (func_102(&uVar0, 1))
	{
	}
	if (func_102(&uVar0, 2))
	{
		Local_64.f_8 = { Global_2764654.f_8 };
		switch (Local_64.f_8.f_1)
		{
			case 1:
				unk_0x55D1184AB2ACC766(1.5f);
				if (Local_160.f_19.f_2 == 0 && func_101())
				{
					func_98(&(Local_160.f_19), Local_64.f_13.f_2, 0, 0);
				}
				else
				{
					func_90();
				}
				break;
			
			case 2:
				Local_64.f_86 = "helicopterhud";
				Local_64.f_16 = Global_2764654.f_16;
				if (Local_64.f_16 != 0)
				{
					unk_0x852EC2A7DE66202D(Local_64.f_16);
				}
				break;
			
			default:
				break;
		}
		if (!unk_0x2AC37494BBF1DB16(Local_64.f_86))
		{
			unk_0xEBA1698B77FD0A86(Local_64.f_86, 0);
		}
	}
	if (func_102(&uVar0, 4))
	{
		switch (Local_64.f_17)
		{
			case 4:
				Local_64.f_86.f_1 = "";
				break;
			
			case 0:
				Local_64.f_86.f_1 = "turret_cam";
				break;
			
			case 1:
				Local_64.f_86.f_1 = "ARENA_GUN_CAM_APOCALYPSE";
				break;
			
			case 2:
				Local_64.f_86.f_1 = "ARENA_GUN_CAM_SCIFI";
				break;
			
			case 3:
				Local_64.f_86.f_1 = "ARENA_GUN_CAM_CONSUMER";
				break;
			
			default:
				Local_64.f_86.f_1 = "UNDEFINED";
				break;
		}
		if (!unk_0x2AC37494BBF1DB16(Local_64.f_86.f_1))
		{
			Local_160.f_36 = unk_0x2B4645565204EA06(Local_64.f_86.f_1);
		}
	}
	if (func_102(&uVar0, 6))
	{
		Local_160.f_40.f_13.f_2 = -1;
		switch (Local_64.f_19)
		{
			case 0:
				Local_160.f_40.f_13 = "dlc_aw_Arena_Spectator_Turret_turret_Sounds";
				Local_160.f_40.f_13.f_1 = "Fire_MG_Loop";
				Local_160.f_40.f_13.f_2 = unk_0x9F2C1BA4F2BF5CF8();
				break;
			
			case 1:
				Local_160.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_160.f_40.f_13.f_1 = "Fire_MG_Loop";
				Local_160.f_40.f_13.f_2 = unk_0x9F2C1BA4F2BF5CF8();
				break;
			
			case 2:
				Local_160.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_160.f_40.f_13.f_1 = "Fire_Rockets_Oneshot";
				Local_160.f_40.f_13.f_2 = unk_0x9F2C1BA4F2BF5CF8();
				break;
			
			case 3:
				Local_160.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_160.f_40.f_13.f_1 = "Launch_Piloted_Missile";
				Local_160.f_40.f_13.f_2 = unk_0x9F2C1BA4F2BF5CF8();
				break;
			
			default:
				Local_160.f_40.f_13 = 0;
				Local_160.f_40.f_13.f_1 = 0;
				Local_160.f_40.f_13.f_2 = -1;
				break;
			}
	}
	if (func_102(&uVar0, 5))
	{
		Local_160.f_40.f_10 = -1;
		Local_160.f_40.f_8 = -1;
		Local_160.f_40.f_9 = -1;
		Local_160.f_40.f_11 = -1;
		Local_160.f_40.f_12 = -1;
		switch (Local_64.f_18)
		{
			case 0:
				Local_160.f_40 = "SCRIPT\POLICE_CHOPPER_CAM";
				Local_160.f_40.f_1 = "dlc_aw_arena_turret_scene";
				Local_160.f_40.f_2 = "dlc_aw_Arena_Spectator_Turret_turret_Sounds";
				Local_160.f_40.f_5 = "Turret_Camera_Hum_Loop";
				Local_160.f_40.f_10 = unk_0x9F2C1BA4F2BF5CF8();
				Local_160.f_40.f_3 = "Pan";
				Local_160.f_40.f_8 = unk_0x9F2C1BA4F2BF5CF8();
				Local_160.f_40.f_4 = "Zoom";
				Local_160.f_40.f_9 = unk_0x9F2C1BA4F2BF5CF8();
				break;
			
			case 1:
				Local_160.f_40 = "SCRIPT\POLICE_CHOPPER_CAM";
				Local_160.f_40.f_1 = "dlc_aw_arena_turret_scene";
				Local_160.f_40.f_2 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_160.f_40.f_5 = "Turret_Camera_Hum_Loop";
				Local_160.f_40.f_10 = unk_0x9F2C1BA4F2BF5CF8();
				Local_160.f_40.f_3 = "Pan";
				Local_160.f_40.f_8 = unk_0x9F2C1BA4F2BF5CF8();
				Local_160.f_40.f_4 = "Zoom";
				Local_160.f_40.f_9 = unk_0x9F2C1BA4F2BF5CF8();
				Local_160.f_40.f_6 = "Take_Damage";
				Local_160.f_40.f_11 = unk_0x9F2C1BA4F2BF5CF8();
				Local_160.f_40.f_7 = "Low_Health_Warning";
				Local_160.f_40.f_12 = unk_0x9F2C1BA4F2BF5CF8();
				break;
			
			default:
				Local_160.f_40 = 0;
				Local_160.f_40.f_2 = 0;
				Local_160.f_40.f_5 = 0;
				Local_160.f_40.f_10 = -1;
				Local_160.f_40.f_3 = 0;
				Local_160.f_40.f_8 = -1;
				Local_160.f_40.f_4 = 0;
				Local_160.f_40.f_9 = -1;
				break;
		}
		if (!unk_0x2AC37494BBF1DB16(Local_160.f_40))
		{
			unk_0x2E09B6089A1271EB(Local_160.f_40, 0, -1);
		}
	}
	if (func_102(&uVar0, 3))
	{
	}
	if (func_102(&uVar0, 7))
	{
		if (Local_64.f_24 > 0)
		{
			func_31(0, -1, 0);
		}
	}
	if (func_102(&uVar0, 8))
	{
	}
	if (func_102(&uVar0, 9))
	{
	}
	if (func_102(&uVar0, 10))
	{
	}
	if (func_102(&uVar0, 11))
	{
		if (!unk_0x2AC37494BBF1DB16(&(Local_64.f_80)))
		{
			func_35(&(Local_64.f_80));
		}
	}
	if (func_102(&uVar0, 12))
	{
	}
}

void func_98(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1 == 0)
	{
		*uParam0 = unk_0xEBF66E179FB47D4E(func_100(bParam2, bParam3), func_99(-iParam1, 0));
		uParam0->f_1 = 1;
	}
}

int func_99(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_100(bool bParam0, bool bParam1)
{
	if (unk_0xA26A9A07F761D8F8() && !bParam0)
	{
		if (!bParam1)
		{
			return unk_0x0DB7F8294D73598B();
		}
		else
		{
			return unk_0xB78F034955403399();
		}
	}
	return unk_0xA5E11AF0A2B928C1();
}

bool func_101()
{
	return (!func_68(&(Local_160.f_19)) || func_52(&(Local_160.f_19), Local_64.f_13.f_2, 0));
}

int func_102(var uParam0, bool bParam1)
{
	if (BitTest(*uParam0, bParam1))
	{
		unk_0x061B1200C95204CB(uParam0, bParam1);
		return 1;
	}
	return 0;
}

void func_103(int iParam0)
{
	if (func_102(&iParam0, 0))
	{
	}
	if (func_102(&iParam0, 1))
	{
	}
	if (func_102(&iParam0, 2))
	{
		Local_160.f_37 = 0;
		switch (Local_64.f_8.f_1)
		{
			case 1:
				unk_0x55D1184AB2ACC766(1f);
				break;
			
			case 3:
				if (Local_160.f_29)
				{
					unk_0x78DD793477D04C42(250);
				}
				Local_160.f_29.f_1 = 0;
				Local_160.f_29 = 0;
				if (Local_160.f_29.f_5)
				{
					Local_160.f_29.f_5 = 0;
					func_66(1);
				}
				break;
			
			case 2:
				func_83();
				if (Local_64.f_16 != 0)
				{
					unk_0xE0A291F406691F03(Local_64.f_16);
					Local_64.f_16 = 0;
				}
				break;
		}
		if (!unk_0x2AC37494BBF1DB16(Local_64.f_86))
		{
			unk_0xFBA79BC11313B81D(Local_64.f_86);
			Local_64.f_86 = "";
		}
	}
	if (func_102(&iParam0, 3))
	{
	}
	if (func_102(&iParam0, 4))
	{
		Local_160.f_37 = 0;
		Local_64.f_86.f_1 = "";
		if (Local_160.f_36 != -1)
		{
			unk_0xD0AE101DBAA43C98(&(Local_160.f_36));
			Local_160.f_36 = -1;
		}
	}
	if (func_102(&iParam0, 6))
	{
		func_76(&(Local_160.f_40.f_13.f_2));
	}
	if (func_102(&iParam0, 5))
	{
		unk_0x2CDECFBE1D3C6FBD();
		unk_0x02DBB75285BF2FDE();
		if (!unk_0x2AC37494BBF1DB16(Local_160.f_40))
		{
			unk_0xF297EAB219BB1DC6(Local_160.f_40);
		}
		func_76(&(Local_160.f_40.f_8));
		func_76(&(Local_160.f_40.f_9));
		func_76(&(Local_160.f_40.f_10));
		func_76(&(Local_160.f_40.f_11));
		func_76(&(Local_160.f_40.f_12));
	}
	if (func_102(&iParam0, 7))
	{
		if (Local_64.f_24 > 0)
		{
			func_104(1, -1);
		}
	}
	if (func_102(&iParam0, 8))
	{
		if (!unk_0x2AC37494BBF1DB16(&(Local_64.f_67)) && func_12(&(Local_64.f_67)))
		{
			unk_0xCD3C8E1022864F65(1);
		}
	}
	if (func_102(&iParam0, 9))
	{
	}
	if (func_102(&iParam0, 10))
	{
	}
	if (func_102(&iParam0, 11))
	{
		if (!unk_0x2AC37494BBF1DB16(&(Local_64.f_80)))
		{
			func_36();
			StringCopy(&(Local_64.f_80), "", 16);
		}
	}
	if (func_102(&iParam0, 12))
	{
		Local_160.f_37 = 0;
	}
}

void func_104(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_26(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23270.f_8892)
	{
		unk_0x833DC7C29EA6EEF3(15);
		Global_23270.f_8892 = 0;
	}
	unk_0x314A52B02A05EEDE(0f);
	if (Global_23270.f_6071[iVar0])
	{
		unk_0x32FF0B09752F532B(9, 0);
		Global_23270.f_6071[iVar0] = 0;
	}
	if (Global_23270.f_6057[iVar0])
	{
		unk_0xFBA79BC11313B81D("CommonMenu");
		Global_23270.f_6057[iVar0] = 0;
	}
	if (Global_23270.f_6064[iVar0])
	{
		unk_0xFBA79BC11313B81D("MPShopSale");
		Global_23270.f_6064[iVar0] = 0;
	}
	if (bParam0)
	{
		func_105(&(Global_23270.f_6103[iVar0 /*10*/]));
		Global_23270.f_6164[iVar0] = 0;
	}
	else
	{
		Global_23270.f_6164[iVar0] = 0;
	}
}

void func_105(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x5FAF55B1F052A2E6(*uParam0))
		{
			unk_0xD0AE101DBAA43C98(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

void func_106()
{
	if ((!unk_0x984CA71F26DF483C() && !unk_0x72474BA05A104E1E()) && BitTest(Local_64.f_84.f_1, 1))
	{
		unk_0x6D5ACBBD4CE34249(Local_64.f_84);
	}
	if (func_52(&(Local_160.f_58), Local_64.f_84, 0))
	{
		if (!BitTest(Local_64.f_84.f_1, 0) || func_108(Local_64.f_88, 0))
		{
			if (!unk_0xF57C1326FD40C8A7(Local_160.f_0))
			{
				Local_160.f_0 = unk_0x002AF75213D62F6C(26379945, 1);
				unk_0xECDAB41968FF21A8(&(Local_160.f_60), 2);
				func_41();
				unk_0x061B1200C95204CB(&(Local_160.f_60), 2);
				unk_0xD3E1840E0D86534D(Local_160.f_4.f_6);
			}
			else
			{
				if (BitTest(Local_64.f_84.f_1, 0))
				{
					unk_0xB942AB5E12BF630A();
				}
				unk_0x9E2404A25985615A(1, 0, 0, 1, 1, 0);
				func_3(&(Local_160.f_38), &(Local_160.f_39));
				func_37();
				if (!unk_0x2AC37494BBF1DB16(Local_160.f_40.f_1))
				{
					unk_0xAEA29937C5240DA0(Local_160.f_40.f_1);
				}
				func_61(&(Local_160.f_17), 0, 0);
				unk_0xECDAB41968FF21A8(&Global_2764742, 3);
				func_107(1);
				if (unk_0x4F873840FC0FA8FE() >= 0)
				{
					Local_160.f_57 = 1;
					unk_0xF14F2441769B343B();
				}
				unk_0xADD48E9C814DB7CB("eyeinthesky");
				Local_160.f_56 = unk_0x4F873840FC0FA8FE();
				if (BitTest(Local_64.f_84.f_1, 2))
				{
					if (unk_0x984CA71F26DF483C() || unk_0x72474BA05A104E1E())
					{
						unk_0x78DD793477D04C42(800);
					}
				}
			}
		}
	}
}

void func_107(int iParam0)
{
	Local_160.f_16 = iParam0;
}

int func_108(struct<3> Param0, int iParam3)
{
	if (BitTest(Local_160.f_60, 0))
	{
		if (unk_0x16760C7780F48003())
		{
			return 1;
		}
	}
	else if (unk_0x46D9CC780489C728(Param0, 100f, iParam3))
	{
		unk_0xECDAB41968FF21A8(&(Local_160.f_60), 0);
	}
	return 0;
}

void func_109(int iParam0)
{
	if (func_114())
	{
		return;
	}
	if (!Global_20383.f_1 == 1)
	{
		if (func_113(0))
		{
			func_110(iParam0);
		}
		unk_0xECDAB41968FF21A8(&Global_8254, 2);
	}
}

void func_110(int iParam0)
{
	if (func_114())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_54())
		{
			func_112(1, 1);
		}
		else
		{
			func_112(0, 0);
		}
	}
	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
	{
		unk_0xECDAB41968FF21A8(&Global_8254, 16);
	}
	if (unk_0xE444FD7526C8BB46())
	{
		unk_0xD6625E11483B2324(0);
	}
	Global_21725 = 5;
	if (iParam0 == 1)
	{
		unk_0xECDAB41968FF21A8(&Global_8253, 30);
	}
	else
	{
		unk_0x061B1200C95204CB(&Global_8253, 30);
	}
	if (!func_111())
	{
		Global_20383.f_1 = 3;
	}
}

int func_111()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_112(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_113(0))
		{
			Global_20584 = 1;
			if (bParam1)
			{
				unk_0xF756EDB27C588BED(&Global_20320);
			}
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			unk_0x6B2D55EA37C443D5(Global_20311);
		}
	}
	else if (Global_20584 == 1)
	{
		Global_20584 = 0;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
		if (bParam1)
		{
			unk_0x6B2D55EA37C443D5(Global_20320);
		}
		else
		{
			unk_0x6B2D55EA37C443D5(Global_20311);
		}
	}
}

int func_113(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20383.f_1 > 3)
		{
			if (BitTest(Global_8253, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20383.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_114()
{
	return BitTest(Global_1962996, 19);
}

int func_115()
{
	if (Local_64.f_94 != 0)
	{
		if (!unk_0x7DE17ACDD8BA2642(Local_64.f_95) || unk_0x055111B11E6624FD(Local_64.f_95, 0))
		{
			return 1;
		}
	}
	if (!func_82(unk_0x93E99A2DBCBA9CFA(), 1, 1))
	{
		return 1;
	}
	if (Global_2764652)
	{
		return 1;
	}
	return 0;
}

int func_116()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			return 1;
		}
	}
	if (func_123())
	{
		return 1;
	}
	if (Global_2696915)
	{
		return 1;
	}
	if (func_122())
	{
		return 1;
	}
	if (func_121(159))
	{
		if (!func_120())
		{
			return 1;
		}
	}
	if (func_121(157))
	{
		return 1;
	}
	if (!unk_0x67EBFCF2F78761B9())
	{
		return 1;
	}
	if (func_117() != 0)
	{
		if (unk_0x24B651D85CCE5EB4(func_117()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_117()
{
	switch (func_119())
	{
		case 0:
			return func_118();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_118()
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_119()
{
	return Global_32163;
}

bool func_120()
{
	return Global_2683862.f_698;
}

int func_121(int iParam0)
{
	if (unk_0x36D3321E138A43F0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_122()
{
	return Global_2694524;
}

bool func_123()
{
	return Global_2683862.f_693;
}

void func_124()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_125()
{
	var uVar0;
	var uVar1;
	
	if (Local_160.f_16 == 0 && BitTest(Local_64.f_84.f_1, 1))
	{
		unk_0x78DD793477D04C42(250);
	}
	func_103(-1);
	if (func_133())
	{
		func_132(0);
	}
	unk_0xEF54B7007CB2210B(1);
	unk_0x7152B1208FF6B120();
	unk_0xE200456884E4F50E();
	uVar0 = unk_0xC1A5EC5C986B98AD();
	if (func_131(uVar0) && unk_0x3C3D6D026CF7F51B(uVar0, 1))
	{
		uVar1 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		if (unk_0xB6B927AA8C3DAD36(uVar1))
		{
			unk_0x325BA8A2EF6F869F(uVar1, 1);
			func_129(1);
		}
	}
	if (BitTest(Local_160.f_60, 4))
	{
		func_128();
	}
	unk_0x18C85D1D14AA05DE();
	unk_0xA2EC5ACB2B5D92A4();
	if (Local_160.f_57)
	{
		unk_0xEC569A921AC23789();
	}
	func_127(Local_160.f_38);
	func_127(Local_160.f_39);
	Global_2764641 = 0;
	Global_2764742 = 0;
	func_126();
}

void func_126()
{
	unk_0x675D9C12C73D3DE7();
}

void func_127(var uParam0)
{
	if (unk_0xCE4AAA035282336C(uParam0))
	{
		unk_0x45533C09A6C9B409(&uParam0);
	}
}

void func_128()
{
	if (Global_2672505.f_946.f_10)
	{
		Global_2672505.f_946.f_10 = 0;
	}
}

void func_129(int iParam0)
{
	var uVar0;
	
	if (Global_2635559.f_2690 == 1)
	{
		Global_2635559.f_2690 = 0;
		return;
	}
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (!Global_2635559.f_2692.f_1)
		{
			if (!Global_2635559.f_2688 == -1)
			{
				if (((Global_2635559.f_2688 < 255 && !func_130()) && !BitTest(Global_4718592.f_166337, 0)) && !(unk_0xAB605E2CD1CEA631() && (Global_2635559.f_2689 == 0 && iParam0 == 0)))
				{
					unk_0x1631BA3D3848C1A5(Global_2635559.f_2688);
				}
				else if (Global_2635559.f_2688 >= 255)
				{
					unk_0xE605188F72FDAF2F("OFF");
					uVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
					if (unk_0x7DE17ACDD8BA2642(uVar0))
					{
						if (unk_0xB6B927AA8C3DAD36(iVar0))
						{
							unk_0xF6DC858A24814B39(iVar0, "OFF");
						}
					}
				}
			}
			Global_2635559.f_2688 = -1;
			Global_2635559.f_2692.f_1 = 1;
		}
	}
}

bool func_130()
{
	return Global_1889629;
}

int func_131(int iParam0)
{
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		if (!unk_0x055111B11E6624FD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_132(int iParam0)
{
	Global_2696952 = iParam0;
}

bool func_133()
{
	return Global_2696952;
}

void func_134(var uParam0)
{
	unk_0xECDAB41968FF21A8(&Global_2764742, 2);
	if (unk_0xA26A9A07F761D8F8())
	{
		unk_0xCF50389093DECE87(32, 0, -1);
		func_152(0, -1, 0);
	}
	else
	{
		func_125();
	}
	func_135(uParam0);
}

void func_135(var uParam0)
{
	var uVar0;
	var uVar1;
	
	Local_64.f_88 = { *uParam0 };
	Local_64.f_91 = { uParam0->f_3 };
	Local_64.f_94 = uParam0->f_6;
	Local_64.f_95 = uParam0->f_7;
	Local_160.f_22.f_4 = -1;
	uVar0 = unk_0xC1A5EC5C986B98AD();
	if (func_131(uVar0) && unk_0x3C3D6D026CF7F51B(uVar0, 1))
	{
		uVar1 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		if (unk_0xB6B927AA8C3DAD36(uVar1))
		{
			func_151(1);
			unk_0x325BA8A2EF6F869F(iVar1, 0);
		}
	}
	if (!func_150())
	{
		unk_0xECDAB41968FF21A8(&(Local_160.f_60), 4);
		func_149();
	}
	func_136();
}

void func_136()
{
	if (!BitTest(Global_2764740, 0))
	{
		func_148(-1028390912, 1119092736, -1036779520, 1110704128, 1106247680, 1114636288);
	}
	if (!BitTest(Global_2764740, 1))
	{
		func_147(1058642330, 1101004800);
	}
	if (!BitTest(Global_2764740, 2))
	{
		func_146();
	}
	if (!BitTest(Global_2764740, 3))
	{
		func_144(1, 1, 0, 500);
	}
	if (!BitTest(Global_2764740, 4))
	{
		func_143(0);
	}
	if (!BitTest(Global_2764740, 5))
	{
		func_142(0);
	}
	if (!BitTest(Global_2764740, 6))
	{
		func_141(0);
	}
	if (!BitTest(Global_2764740, 7))
	{
		unk_0xECDAB41968FF21A8(&Global_2764740, 7);
		Global_2764654.f_24 = 0;
	}
	if (!BitTest(Global_2764740, 8))
	{
		func_140(0);
	}
	if (!BitTest(Global_2764740, 9))
	{
		func_139(0f, 0f, 0f);
	}
	if (!BitTest(Global_2764740, 10))
	{
		unk_0xECDAB41968FF21A8(&Global_2764740, 10);
		Global_2764654.f_74 = 0;
	}
	if (!BitTest(Global_2764740, 11))
	{
		func_138(0);
	}
	if (!BitTest(Global_2764740, 12))
	{
		func_137(1, 3, 3, 3);
	}
	Local_64 = { Global_2764654 };
	func_97(Global_2764740);
	func_107(0);
}

void func_137(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xECDAB41968FF21A8(&Global_2764740, 12);
	Global_2764654.f_20 = iParam0;
	Global_2764654.f_20.f_1 = iParam1;
	Global_2764654.f_20.f_2 = iParam2;
	Global_2764654.f_20.f_3 = iParam3;
}

void func_138(char* sParam0)
{
	unk_0xECDAB41968FF21A8(&Global_2764740, 11);
	StringCopy(&(Global_2764654.f_80), sParam0, 16);
}

void func_139(struct<3> Param0)
{
	unk_0xECDAB41968FF21A8(&Global_2764740, 9);
	Global_2764654.f_71 = { Param0 };
}

void func_140(char* sParam0)
{
	unk_0xECDAB41968FF21A8(&Global_2764740, 8);
	StringCopy(&(Global_2764654.f_67), sParam0, 16);
}

void func_141(int iParam0)
{
	unk_0xECDAB41968FF21A8(&Global_2764740, 6);
	Global_2764654.f_19 = iParam0;
}

void func_142(int iParam0)
{
	unk_0xECDAB41968FF21A8(&Global_2764740, 5);
	Global_2764654.f_18 = iParam0;
}

void func_143(int iParam0)
{
	unk_0xECDAB41968FF21A8(&Global_2764740, 4);
	Global_2764654.f_17 = iParam0;
}

void func_144(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	unk_0xECDAB41968FF21A8(&Global_2764740, 3);
	Global_2764654.f_84 = iParam3;
	func_145(&(Global_2764654.f_84.f_1), 1, bParam0);
	func_145(&(Global_2764654.f_84.f_1), 2, bParam1);
	func_145(&(Global_2764654.f_84.f_1), 0, bParam2);
}

void func_145(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0xECDAB41968FF21A8(uParam0, bParam1);
	}
	else
	{
		unk_0x061B1200C95204CB(uParam0, bParam1);
	}
}

void func_146()
{
	unk_0xECDAB41968FF21A8(&Global_2764740, 2);
	Global_2764654.f_8.f_1 = 0;
}

void func_147(int iParam0, int iParam1)
{
	unk_0xECDAB41968FF21A8(&Global_2764740, true);
	Global_2764654.f_6.f_1 = iParam0;
	Global_2764654.f_6 = iParam1;
}

void func_148(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xECDAB41968FF21A8(&Global_2764740, false);
	Global_2764654 = iParam0;
	Global_2764654.f_1 = iParam1;
	Global_2764654.f_2 = iParam2;
	Global_2764654.f_3 = iParam3;
	Global_2764654.f_4 = iParam4;
	Global_2764654.f_5 = iParam5;
}

void func_149()
{
	if (!Global_2672505.f_946.f_10)
	{
		Global_2672505.f_946.f_10 = 1;
	}
}

bool func_150()
{
	return Global_2672505.f_946.f_10;
}

void func_151(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2635559.f_2691;
	if ((unk_0xAB605E2CD1CEA631() && Global_2635559.f_2689 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2635559.f_2688)
	{
		if (!unk_0x063237C0B49D75C9())
		{
			Global_2635559.f_2688 = iVar0;
		}
	}
}

int func_152(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xA1089192E8AE61F4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_126();
			}
			else
			{
				return 0;
			}
		}
		if (!func_153(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA26A9A07F761D8F8())
				{
					if (!bParam2)
					{
						func_126();
					}
					else
					{
						return 0;
					}
				}
				if (func_123())
				{
					if (!bParam2)
					{
						func_126();
					}
					else
					{
						return 0;
					}
				}
				if (func_121(157))
				{
					if (!bParam2)
					{
						func_126();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xE3C3FF8D5649A77D())
			{
				if (!bParam2)
				{
					func_126();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xA1089192E8AE61F4();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			if (!bParam2)
			{
				func_126();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xE3C3FF8D5649A77D())
	{
		if (!bParam2)
		{
			func_126();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_153(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

