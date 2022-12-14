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
	var uLocal_50 = 0;
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
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	struct<4> Local_96 = { 0, 0, 0, 0 } ;
	struct<16> Local_100 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_119 = -1;
	if (unk_0x24B651D85CCE5EB4(joaat("context_controller")) > 1)
	{
		unk_0x675D9C12C73D3DE7();
	}
	unk_0x389D5B1C24A046B5();
	iVar0 = 0;
	iVar1 = iVar0;
	unk_0xC1B1E9A034A63A62(0);
	Global_44194 = 0;
	func_41();
	StringCopy(&Global_44195, "CC_SUBSTR", 16);
	iVar2 = -1;
	iVar3 = -1;
	bVar4 = false;
	bVar5 = false;
	iVar6 = 0;
	iVar7 = -1;
	iVar8 = Global_78558;
	while (true)
	{
		if (Global_78558)
		{
			func_35();
		}
		else
		{
			func_33();
		}
		func_26();
		if (Global_78558 != iVar8)
		{
			func_25();
			func_41();
			iVar2 = -1;
			iVar8 = Global_78558;
			while (unk_0xB53553DC4AAC7D8A())
			{
				unk_0x4EDE34FBADD967A6(2000);
			}
		}
		if (Global_44200)
		{
			if (Global_44202 > -1)
			{
				if (!Global_44000[Global_44202 /*32*/].f_6)
				{
					if (!func_23(Global_44202, 1))
					{
						Global_44202 = -1;
					}
				}
			}
		}
		if (func_19())
		{
			iVar2 = -1;
			func_25();
		}
		if (iVar2 > -1)
		{
			if (!Global_44200)
			{
				if (Global_44202 != iVar2)
				{
					if (func_18(Global_44202))
					{
						func_25();
						if (!Global_44000[iVar2 /*32*/].f_5 && Global_44000[iVar2 /*32*/])
						{
							if (!func_19())
							{
								if (!Global_44000[iVar2 /*32*/].f_7)
								{
									if (!Global_44000[iVar2 /*32*/].f_6)
									{
										if (!Global_44000[iVar2 /*32*/].f_12)
										{
											func_17(Global_44000[iVar2 /*32*/].f_8, Global_44000[iVar2 /*32*/].f_3);
										}
										else
										{
											func_16(Global_44000[iVar2 /*32*/].f_8, Global_44000[iVar2 /*32*/].f_13, Global_44000[iVar2 /*32*/].f_3, Global_44000[iVar2 /*32*/].f_30);
										}
										Global_44202 = iVar2;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				func_25();
			}
		}
		else
		{
			func_25();
		}
		switch (iVar0)
		{
			case 0:
				iVar2 = func_15();
				if (unk_0x330E28807DE713E2(2, 51))
				{
					iVar6 = 1;
				}
				if (!func_19())
				{
					if (iVar2 > -1 && iVar6)
					{
						if (unk_0x87644B1F984197FE(2, 51))
						{
							Global_44000[iVar2 /*32*/].f_4 = 1;
							Global_44000[iVar2 /*32*/].f_29 = 0;
							iVar7 = Global_44000[iVar2 /*32*/].f_1;
							iVar0 = 1;
							Global_44193 = 0;
						}
					}
				}
				else
				{
					iVar2 = -1;
				}
				if (iVar3 != iVar2)
				{
					if (iVar2 != -1)
					{
						if (!unk_0xE678B2045145CE41(unk_0xF2CFBB1105511E1A(unk_0x5DC3DCA82C806319()), 1))
						{
							if (unk_0x3C3D6D026CF7F51B(unk_0xF2CFBB1105511E1A(unk_0x5DC3DCA82C806319()), 0))
							{
								if (unk_0xB378DD9B62D26EF3(0, 101))
								{
									bVar5 = true;
									unk_0x8B438725D591ED78(0, 101, 1);
								}
								if (unk_0xB378DD9B62D26EF3(0, 74))
								{
									bVar4 = true;
									unk_0x8B438725D591ED78(0, 74, 1);
								}
							}
						}
					}
					else
					{
						if (bVar5)
						{
							unk_0x3210A569BAF257BB(0, 101, 1);
							bVar5 = false;
						}
						if (bVar4)
						{
							unk_0x3210A569BAF257BB(0, 74, 1);
							bVar4 = false;
						}
					}
					iVar3 = iVar2;
				}
				break;
			
			case 1:
				if (iVar2 < 0 || func_14() == 0)
				{
					iVar0 = 0;
				}
				else
				{
					if (unk_0x83666F9FB8FEBD4B() > 5000)
					{
						Global_44000[iVar2 /*32*/].f_7 = 1;
						iVar0 = 0;
					}
					else if (func_13(iVar2))
					{
						iVar0 = 2;
					}
					if (!iVar7 == Global_44000[iVar2 /*32*/].f_1)
					{
						iVar0 = 0;
					}
					if (Global_44000[iVar2 /*32*/].f_7 || Global_44000[iVar2 /*32*/] == 0)
					{
						iVar0 = 0;
					}
				}
				break;
			
			case 2:
				if (Global_44193)
				{
					func_25();
				}
				if (unk_0x87644B1F984197FE(2, 51))
				{
					if (iVar2 > -1)
					{
						Global_44000[iVar2 /*32*/].f_29 = 0;
					}
				}
				if (Global_44194)
				{
					Global_44194 = 0;
					iVar0 = 0;
				}
				else if (iVar2 > -1)
				{
					if (!(Global_44000[iVar2 /*32*/].f_4 || Global_44000[iVar2 /*32*/].f_7))
					{
						Global_44194 = 0;
						iVar2 = -1;
					}
				}
				if (iVar2 > -1)
				{
					if (Global_44000[iVar2 /*32*/].f_7 || Global_44000[iVar2 /*32*/] == 0)
					{
						iVar2 = -1;
					}
				}
				if (iVar2 == -1)
				{
					iVar0 = 0;
					iVar6 = 0;
				}
				break;
		}
		if (iVar2 > -1)
		{
			unk_0x8B438725D591ED78(0, 46, 1);
			unk_0x8B438725D591ED78(0, 54, 1);
		}
		if (iVar0 != iVar1)
		{
			iVar1 = iVar0;
			unk_0xC1B1E9A034A63A62(0);
			iVar6 = 0;
		}
		func_12();
		func_10(&iVar2);
		Global_44199 = 0;
		Global_44200 = 0;
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	int iVar0;
	
	if (!bLocal_93)
	{
		return;
	}
	iVar0 = 1;
	if (iLocal_116 == 1)
	{
		iVar0 = 0;
	}
	if (bLocal_94)
	{
		if (bLocal_95)
		{
			unk_0x6C45B4AA0D637138(0);
		}
		unk_0x476CC3711883B966(&Local_96);
		if (bLocal_95)
		{
			unk_0x76B34CBB6F5FA1BB(&Local_100);
		}
		else
		{
			unk_0x48849374B34BB7B9(&Global_44195);
			unk_0x48849374B34BB7B9(&Local_100);
		}
		unk_0xBC8969B539DCA239(0, 0, iVar0, 50);
	}
	else
	{
		unk_0x476CC3711883B966(&Local_96);
		unk_0x48849374B34BB7B9(&Global_44195);
		unk_0xBC8969B539DCA239(0, 0, iVar0, 50);
	}
	switch (iLocal_116)
	{
		case 0:
			break;
		
		case 1:
			func_9(0);
			break;
		
		case 2:
			func_2(0);
			break;
	}
}

void func_2(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_4(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_3())
	{
		unk_0x531D638530A8DB97(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

bool func_3()
{
	return Global_2672505.f_2513[0 /*80*/].f_1 != 0;
}

bool func_4(bool bParam0)
{
	return func_5(unk_0x93E99A2DBCBA9CFA(), bParam0);
}

int func_5(int iParam0, bool bParam1)
{
	return func_6(iParam0, bParam1, 1);
}

int func_6(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_7(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1894573[iParam0 /*608*/].f_10;
	if (iVar0 != func_8() && Global_1894573[iVar0 /*608*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_7(int iParam0, int iParam1)
{
	if (iParam0 != func_8())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_8())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 == iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_8()
{
	return -1;
}

void func_9(int iParam0)
{
	unk_0x9D7DD9F2D270206C(3, 21, 200, 0, 0);
	if (iParam0 && !func_3())
	{
		unk_0x531D638530A8DB97(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_10(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44000[iVar0 /*32*/] && Global_44000[iVar0 /*32*/].f_4)
		{
			if (Global_44000[iVar0 /*32*/].f_31 != 0)
			{
				if (!unk_0xB8CEC43FB7EF2D92(Global_44000[iVar0 /*32*/].f_31))
				{
					if (*iParam0 > -1)
					{
						func_11();
					}
					Global_44000[iVar0 /*32*/] = 0;
					Global_44000[iVar0 /*32*/].f_31 = 0;
					Global_44000[iVar0 /*32*/] = 0;
					Global_44000[iVar0 /*32*/].f_4 = 0;
					Global_44000[iVar0 /*32*/].f_5 = 0;
					Global_44000[iVar0 /*32*/].f_2 = 0;
					Global_44000[iVar0 /*32*/].f_7 = 0;
					Global_44000[iVar0 /*32*/].f_6 = 0;
					Global_44000[iVar0 /*32*/].f_3 = 0;
					*iParam0 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_11()
{
	if (Global_44202 != -1 || bLocal_93)
	{
		bLocal_93 = false;
		Global_44202 = -1;
	}
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44000[iVar0 /*32*/].f_7)
		{
			if (iVar0 == Global_44202)
			{
				func_25();
			}
			Global_44000[iVar0 /*32*/].f_31 = 0;
			Global_44000[iVar0 /*32*/] = 0;
			Global_44000[iVar0 /*32*/].f_4 = 0;
			Global_44000[iVar0 /*32*/].f_5 = 0;
			Global_44000[iVar0 /*32*/].f_2 = 0;
			Global_44000[iVar0 /*32*/].f_7 = 0;
			Global_44000[iVar0 /*32*/].f_6 = 0;
			Global_44000[iVar0 /*32*/].f_1 = -1;
			Global_44000[iVar0 /*32*/].f_3 = 0;
		}
		iVar0++;
	}
}

int func_13(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_44000[iParam0 /*32*/].f_5)
	{
		return 1;
	}
	return 0;
}

int func_14()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44000[iVar0 /*32*/] == 1)
		{
			if (Global_44000[iVar0 /*32*/].f_4 == 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_25();
	}
	return iVar1;
}

int func_15()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44000[iVar0 /*32*/])
		{
			if (Global_44000[iVar0 /*32*/].f_2 > iVar1)
			{
				iVar2 = iVar0;
				iVar1 = Global_44000[iVar0 /*32*/].f_2;
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_16(struct<4> Param0, struct<16> Param4, var uParam20, var uParam21)
{
	Local_96 = { Param0 };
	Local_100 = { Param4 };
	bLocal_93 = true;
	bLocal_94 = true;
	iLocal_116 = uParam20;
	bLocal_95 = uParam21;
}

void func_17(struct<4> Param0, var uParam4)
{
	Local_96 = { Param0 };
	bLocal_93 = true;
	bLocal_94 = false;
	iLocal_116 = uParam4;
}

int func_18(int iParam0)
{
	int iVar0;
	
	if (Global_97610 && Global_97609)
	{
		return 0;
	}
	if (iParam0 > 0)
	{
		if (func_23(iParam0, 1) || bLocal_93)
		{
			return 1;
		}
	}
	if (unk_0xF0E4B64AC0B5660E() && !unk_0x6460A65B237F74F2())
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_23(iVar0, 1))
			{
				return 1;
			}
			iVar0++;
		}
		return 0;
	}
	return 1;
}

int func_19()
{
	if (Global_75693)
	{
		return 1;
	}
	if (!unk_0x48DC6A21D1CAD89C(unk_0x5DC3DCA82C806319()))
	{
		return 1;
	}
	if (func_22(0))
	{
		return 1;
	}
	if (unk_0x2FECE8D166B3056B())
	{
		return 1;
	}
	if (Global_44199)
	{
		return 1;
	}
	if (unk_0x32540FC8CD86BBDC(19))
	{
		return 1;
	}
	if (func_21(1))
	{
		return 1;
	}
	if (unk_0xB53553DC4AAC7D8A())
	{
		return 1;
	}
	if (func_20(8, -1))
	{
		return 1;
	}
	return 0;
}

bool func_20(int iParam0, int iParam1)
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

bool func_21(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23131.f_4 && Global_23131.f_104 == 4);
	}
	return Global_23131.f_4;
}

int func_22(int iParam0)
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

int func_23(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_24(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_44000[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_44000[iVar0 /*32*/].f_12)
	{
		unk_0x56C9BC27C0FF68D7(&(Global_44000[iVar0 /*32*/].f_8));
		unk_0x48849374B34BB7B9(&Global_44195);
		iVar1 = unk_0x6A92D111B5409879(0);
	}
	else
	{
		unk_0x56C9BC27C0FF68D7(&(Global_44000[iVar0 /*32*/].f_8));
		unk_0x48849374B34BB7B9(&Global_44195);
		if (Global_44000[iVar0 /*32*/].f_30)
		{
			unk_0x76B34CBB6F5FA1BB(&(Global_44000[iVar0 /*32*/].f_13));
		}
		else
		{
			unk_0x48849374B34BB7B9(&(Global_44000[iVar0 /*32*/].f_13));
		}
		iVar1 = unk_0x6A92D111B5409879(0);
	}
	return iVar1;
}

int func_24(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44000[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25()
{
	func_11();
	Global_44202 = -1;
}

void func_26()
{
	if (!unk_0xB53553DC4AAC7D8A() && !func_32())
	{
		if (func_31(0))
		{
			if (!unk_0x2AC37494BBF1DB16(&(Global_2683862.f_785.f_12)))
			{
				func_30();
				func_27(6, 0, 0);
			}
		}
	}
}

int func_27(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Global_75806 = iParam0;
	bVar0 = iParam2 == true;
	bVar1 = iParam2 == 2;
	bVar2 = iParam2 == 3;
	switch (Global_75806)
	{
		case 3:
			Global_75804 = 0;
			break;
		
		case 4:
			Global_75804 = 3;
			break;
	}
	if (unk_0x24B651D85CCE5EB4(joaat("appsecuroserv")) > 0)
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (unk_0x24B651D85CCE5EB4(joaat("appbikerbusiness")) > 0)
	{
		if (bVar1)
		{
		}
		return 0;
	}
	if (unk_0x24B651D85CCE5EB4(joaat("appimportexport")) > 0)
	{
		if (bVar2)
		{
		}
		return 0;
	}
	if (unk_0x24B651D85CCE5EB4(joaat("appinternet")) > 0)
	{
		if ((bVar0 || bVar1) || bVar2)
		{
		}
		return 0;
	}
	if (Global_78558 && func_29())
	{
		return 0;
	}
	if (!Global_78558 && func_28())
	{
		return 0;
	}
	if (bVar0)
	{
		if (!unk_0x6CAF14BE58B4BFF8("appSecuroServ"))
		{
			unk_0x3EC562D93709C894("appSecuroServ");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0x6CAF14BE58B4BFF8("appSecuroServ"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appSecuroServ", 4592);
		unk_0x037A80676B8FF0F5("appSecuroServ");
		return 1;
	}
	if (bVar1)
	{
		if (!unk_0x6CAF14BE58B4BFF8("appBikerBusiness"))
		{
			unk_0x3EC562D93709C894("appBikerBusiness");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0x6CAF14BE58B4BFF8("appBikerBusiness"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appBikerBusiness", 4592);
		unk_0x037A80676B8FF0F5("appBikerBusiness");
		return 1;
	}
	if (bVar2)
	{
		if (!unk_0x6CAF14BE58B4BFF8("appImportExport"))
		{
			unk_0x3EC562D93709C894("appImportExport");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0x6CAF14BE58B4BFF8("appImportExport"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appImportExport", 4592);
		unk_0x037A80676B8FF0F5("appImportExport");
		return 1;
	}
	if (!unk_0x6CAF14BE58B4BFF8("appInternet"))
	{
		unk_0x3EC562D93709C894("appInternet");
		if (bParam1)
		{
			return 0;
		}
	}
	while (!unk_0x6CAF14BE58B4BFF8("appInternet"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xE81651AD79516E48("appInternet", 4592);
	unk_0x037A80676B8FF0F5("appInternet");
	return 1;
}

var func_28()
{
	return Global_75694;
}

var func_29()
{
	return Global_1935689;
}

void func_30()
{
	Global_2683862.f_785.f_28 = 0;
}

bool func_31(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2683862.f_785.f_28 && unk_0x14580F20CBCE4FA9(unk_0x688846D56810779A()) == Global_2683862.f_785.f_31);
	}
	return Global_2683862.f_785.f_28;
}

bool func_32()
{
	return Global_75693;
}

void func_33()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_60536[iVar1] < 0)
		{
			Global_60536[iVar1] = 0;
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		func_34(0);
		func_34(1);
		func_34(2);
	}
}

void func_34(int iParam0)
{
	var uVar0;
	
	uVar0 = Global_60536[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x3CC35ACFFC9C730E(joaat("sp0_total_cash"), uVar0, 1);
			break;
		
		case 1:
			unk_0x3CC35ACFFC9C730E(joaat("sp1_total_cash"), uVar0, 1);
			break;
		
		case 2:
			unk_0x3CC35ACFFC9C730E(joaat("sp2_total_cash"), uVar0, 1);
			break;
	}
}

void func_35()
{
	struct<13> Var0[1];
	struct<16> Var14[1];
	int iVar31;
	
	if (Global_1835457 != -1)
	{
		Var0[0 /*13*/] = Global_1835458[0];
		Var0[0 /*13*/].f_1 = Global_1835458[1];
		Var0[0 /*13*/].f_2 = Global_1835458[2];
		Var0[0 /*13*/].f_3 = Global_1835458[3];
		Var0[0 /*13*/].f_4 = Global_1835458[4];
		Var0[0 /*13*/].f_5 = Global_1835458[5];
		Var0[0 /*13*/].f_6 = Global_1835458[6];
		Var0[0 /*13*/].f_7 = Global_1835458[7];
		Var0[0 /*13*/].f_8 = Global_1835458[8];
		Var0[0 /*13*/].f_9 = Global_1835458[9];
		Var0[0 /*13*/].f_10 = Global_1835458[10];
		Var0[0 /*13*/].f_11 = Global_1835458[11];
		Var0[0 /*13*/].f_12 = Global_1835458[12];
		if (unk_0xCCE9BCDAB8B7FAED() || func_40())
		{
			if (!iLocal_117)
			{
				if (unk_0xFD3D22CC2DCA16CD(&(Var0[0 /*13*/])))
				{
					iLocal_117 = 1;
				}
			}
			if (iLocal_117)
			{
				if (unk_0x19286027B59307C4())
				{
				}
				else
				{
					if (unk_0xD49277143D604526())
					{
						StringCopy(&(Global_2359296[func_39() /*5568*/].f_5391.f_18[Global_1835457 /*6*/]), unk_0x035CE87BB6CCBF5E(&(Var0[0 /*13*/])), 24);
					}
					func_38();
				}
			}
		}
		else if (unk_0x674D69D3896862C7() || func_37())
		{
			if (func_36(Var0[0 /*13*/]))
			{
				switch (iLocal_118)
				{
					case 0:
						iLocal_119 = unk_0xDAC1363CD05D8904(&Var0, 1);
						if (iLocal_119 >= 0)
						{
							iLocal_118++;
						}
						break;
					
					case 1:
						iVar31 = unk_0xCBAFCB22881A78EE(iLocal_119, &Var14, 1);
						switch (iVar31)
						{
							case -1:
								func_38();
								break;
							
							case 0:
								MemCopy(&(Global_2359296[func_39() /*5568*/].f_5391.f_18[Global_1835457 /*6*/]), {Var14[0 /*16*/]}, 6);
								func_38();
								break;
							
							case 1:
								break;
						}
						break;
				}
			}
			else
			{
				func_38();
			}
		}
		else
		{
			if (func_36(Var0[0 /*13*/]))
			{
				StringCopy(&(Global_2359296[func_39() /*5568*/].f_5391.f_18[Global_1835457 /*6*/]), unk_0x90C516AC4D68271F(&(Var0[0 /*13*/])), 24);
			}
			func_38();
		}
	}
}

bool func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x73EC603A60C832F3(&uParam0, 13);
}

var func_37()
{
	return (unk_0x01689609224A6C92() || unk_0xEE17703CF2C2875A());
}

void func_38()
{
	Global_1835457 = -1;
	iLocal_117 = 0;
	iLocal_119 = -1;
	iLocal_118 = 0;
}

int func_39()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

var func_40()
{
	return (unk_0x8CCF8DC8E92BDA94() || unk_0x14F62099DEBAEA33());
}

void func_41()
{
	int iVar0;
	
	Global_44193 = 0;
	Global_44199 = 0;
	Global_44200 = 0;
	Global_44201 = 1;
	Global_44202 = -1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_44000[iVar0 /*32*/] = 0;
		iVar0++;
	}
}

