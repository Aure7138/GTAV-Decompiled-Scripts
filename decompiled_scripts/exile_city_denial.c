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
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = 0;
	var uLocal_33 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	
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
	iLocal_28 = -1;
	bLocal_32 = true;
	if (unk_0xB4C854DD86E40FDA(joaat("exile_city_denial")) > 1)
	{
		Global_43017 = 0;
		unk_0xAFBDF6A5E54114C1();
	}
	func_42(18);
	func_41();
	unk_0xC1B1E9A034A63A62(0);
	unk_0x5AE11BC36633DE4E(0);
	iVar0 = 2;
	iVar1 = 0;
	while (!iLocal_31)
	{
		iLocal_31 = 1;
		if (unk_0x4B34601C5C56F3EE(83))
		{
			Global_43017 = 0;
			if (!func_40(130))
			{
				func_39(18);
				func_38();
			}
			else if (func_40(131))
			{
				func_39(18);
				func_38();
			}
			switch (unk_0x27400A3FFA074F8B())
			{
				case 16:
					func_39(18);
					func_38();
					break;
				
				case 2:
					func_38();
					break;
				
				case 1:
					func_25(1628462442);
					func_25(1791324372);
					func_25(-240877892);
					func_25(1806999335);
					func_25(2054503592);
					func_25(-2009081795);
					bLocal_29 = false;
					while (!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
					{
						unk_0x4EDE34FBADD967A6(1000);
					}
					iLocal_31 = 0;
					break;
				}
		}
	}
	while (true)
	{
		if (iVar1 > 0)
		{
			iVar1 = (iVar1 - unk_0x83666F9FB8FEBD4B());
			unk_0xC1B1E9A034A63A62(0);
			if (iVar1 < 0)
			{
				iVar1 = 0;
			}
		}
		Var2 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) };
		bLocal_29 = func_24(Var2, &bLocal_32);
		if (Global_78588 || Global_78588.f_1)
		{
			bLocal_29 = false;
		}
		bVar5 = false;
		bVar6 = false;
		if (func_40(131))
		{
			bVar5 = true;
		}
		if (!func_40(130))
		{
			bVar5 = true;
		}
		if (bVar5)
		{
			Global_43017 = 0;
			func_39(18);
			func_38();
		}
		if (func_22() == 1)
		{
			bVar6 = true;
		}
		Global_43017 = bLocal_29;
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (unk_0xB73D201873640749(unk_0xE2D3D51028F0428A()) || unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0xCE282187B0A6217E(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)))
				{
					bLocal_29 = false;
				}
			}
		}
		if (bLocal_30 != bLocal_29)
		{
			if (!bLocal_29)
			{
				func_20();
			}
			if (bLocal_29 && !bVar6)
			{
				bVar7 = false;
				bVar8 = true;
				while (bVar8)
				{
					switch (func_18(&iLocal_28, 6, 12, 0, 0))
					{
						case 0:
							bVar8 = false;
							bVar7 = false;
							break;
						
						case 1:
							bVar8 = false;
							bVar7 = true;
							break;
						
						default:
							unk_0x4EDE34FBADD967A6(0);
							break;
					}
					if (Global_78319)
					{
						unk_0xAFBDF6A5E54114C1();
					}
				}
				if (bVar7)
				{
					unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A());
					if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
					{
						uVar9 = unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A());
						while (unk_0xBCC73B466E2B2350(uVar9))
						{
							unk_0x4EDE34FBADD967A6(5000);
							unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A());
							if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
							{
								uVar9 = unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A());
							}
						}
					}
					if (func_15(unk_0xE2D3D51028F0428A()) == 0)
					{
						if (!BitTest(Global_113386.f_7688.f_923, 0))
						{
							func_10(1628462442, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
						else if (!BitTest(Global_113386.f_7688.f_923, 1))
						{
							func_10(1791324372, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
						else if (!BitTest(Global_113386.f_7688.f_923, 2))
						{
							func_10(-240877892, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
					}
					else if (func_15(unk_0xE2D3D51028F0428A()) == 2)
					{
						if (!BitTest(Global_113386.f_7688.f_923, 3))
						{
							func_10(1806999335, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
						else if (!BitTest(Global_113386.f_7688.f_923, 4))
						{
							func_10(2054503592, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
						else if (!BitTest(Global_113386.f_7688.f_923, 4))
						{
							func_10(-2009081795, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
					}
					if (iVar1 == 0 && !bVar6)
					{
						if ((!func_9(0) && !func_9(4)) && !func_9(3))
						{
							if (unk_0x75EFF7187A7D4DC4(11) < 256)
							{
								if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
								{
									if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
									{
										unk_0x5D5732191056751C(11, unk_0xE2D3D51028F0428A(), iVar0, 0f, &uLocal_33, 0, 0);
									}
								}
							}
							if (unk_0xE9E8955A780DDA01())
							{
								if (bLocal_32)
								{
									func_8("CITDENAL", -1);
								}
								else
								{
									func_8("CITDENAL_R", -1);
								}
								iVar1 = 120000;
							}
						}
					}
				}
				else
				{
					bLocal_29 = false;
				}
			}
			else
			{
				func_20();
			}
		}
		if (bLocal_29)
		{
			if (!unk_0x99B99DA99FB0D4EC(uLocal_33))
			{
				if (unk_0x75EFF7187A7D4DC4(11) < 256)
				{
					if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
					{
						if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
						{
							unk_0x5D5732191056751C(11, unk_0xE2D3D51028F0428A(), iVar0, 0f, &uLocal_33, 0, 0);
						}
					}
				}
			}
		}
		if (bLocal_29 && unk_0xC9D9444186B5A374() > 60000)
		{
			unk_0x5AE11BC36633DE4E(0);
			iVar0 = (iVar0 + unk_0x5853B15F78E1A265(1, 2));
			if (iVar0 < 8)
			{
				if (unk_0x99B99DA99FB0D4EC(uLocal_33))
				{
					unk_0x337E4F61A2792EFE(uLocal_33, 11, iVar0);
				}
				else if (unk_0x75EFF7187A7D4DC4(11) < 256)
				{
					if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
					{
						if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
						{
							unk_0x5D5732191056751C(11, unk_0xE2D3D51028F0428A(), iVar0, 0f, &uLocal_33, 0, 0);
						}
					}
				}
			}
			else
			{
				iVar0 = 8;
			}
		}
		bLocal_30 = bLocal_29;
		if (bVar6)
		{
			Global_43017 = 0;
			if (bLocal_29)
			{
				func_20();
			}
			func_4();
			while (func_22() == 1)
			{
				unk_0x4EDE34FBADD967A6(2000);
			}
			func_41();
			bVar6 = false;
		}
		if (bLocal_29)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		else
		{
			unk_0x4EDE34FBADD967A6(10000);
		}
		if (func_1(12) && !func_9(12))
		{
			if (bLocal_29)
			{
				func_20();
			}
			while (func_9(0) || func_9(4))
			{
				unk_0x4EDE34FBADD967A6(8000);
			}
		}
	}
	func_4();
}

int func_1(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_2(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_2(int iParam0)
{
	return func_3(iParam0, Global_43052);
}

int func_3(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_4()
{
	func_7(0, 1);
	func_7(2, 1);
	func_7(1, 1);
	func_5(0, 1);
	func_5(1, 1);
	func_5(3, 1);
	func_5(2, 1);
}

void func_5(int iParam0, bool bParam1)
{
	if (iParam0 == 7)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&(Global_113386.f_7229.f_17[iParam0]), false);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_113386.f_7229.f_17[iParam0]), false);
	}
	unk_0xCB7DBDA526904496(Global_95580[iParam0 /*9*/].f_8, !bParam1);
	func_6(Global_95580[iParam0 /*9*/].f_7, 0, 0);
}

void func_6(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = BitTest(Global_32338[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != BitTest(Global_32338[iVar0 /*23*/].f_11, 0))
	{
		unk_0xCED9E32812D6C7C7(&(Global_32338[iVar0 /*23*/].f_11), 18);
		if (Global_32335 == 1)
		{
			Global_32336 = 1;
		}
		Global_32335 = 1;
	}
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&(Global_32338[iVar0 /*23*/].f_11), false);
		unk_0xCED9E32812D6C7C7(&(Global_32338[iVar0 /*23*/].f_11), 15);
		unk_0xCED9E32812D6C7C7(&(Global_32338[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_32338[iVar0 /*23*/].f_11), false);
		unk_0xB0550BC91B0159D6(&(Global_32338[iVar0 /*23*/].f_11), 15);
	}
	if (!BitTest(Global_32338[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0x12DD4A0B247D9B4D(Global_32338[iVar0 /*23*/].f_19))
		{
			unk_0xE2B3315F89FB203D(1);
			unk_0xFFD8EB5462B07B59(&(Global_32338[iVar0 /*23*/].f_19));
			unk_0xE2B3315F89FB203D(0);
		}
	}
}

void func_7(int iParam0, bool bParam1)
{
	if (iParam0 == 5)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&(Global_113386.f_7229.f_11[iParam0]), false);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_113386.f_7229.f_11[iParam0]), false);
	}
	unk_0x582D074C5CDB512A(Global_95644[iParam0 /*9*/].f_8, !bParam1);
	func_6(Global_95644[iParam0 /*9*/].f_7, 0, 0);
}

void func_8(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

bool func_9(int iParam0)
{
	return Global_43052 == iParam0;
}

int func_10(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	bool bVar15;
	
	if (func_14(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (bParam3 < 3)
	{
		if (BitTest(iParam2, bParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != bParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_113386.f_7688.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_113386.f_7688.f_911 == Var0.f_0)
		{
			Global_113386.f_7688.f_911 = -1;
		}
		Var0.f_3 = func_13(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x320D1840B6DAA1CC() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = bParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0xB0550BC91B0159D6(&(Var0.f_1), true);
		unk_0xB0550BC91B0159D6(&(Var0.f_1), false);
		if (iParam7 != -1)
		{
			unk_0xCED9E32812D6C7C7(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0xCED9E32812D6C7C7(&(Var0.f_1), 10);
		}
		Global_113386.f_7688[Global_113386.f_7688.f_136 /*15*/] = { Var0 };
		Global_113386.f_7688.f_136++;
		bVar15 = false;
		while (bVar15 < 3)
		{
			if (BitTest(iParam2, bVar15))
			{
				func_11(bVar15);
			}
			bVar15++;
		}
		return 1;
	}
	return 0;
}

void func_11(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_12(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_136)
	{
		if (BitTest(Global_113386.f_7688[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_113386.f_7688[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_113386.f_7688[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_113386.f_7688.f_764)
	{
		if (BitTest(Global_113386.f_7688.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_113386.f_7688.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_113386.f_7688.f_919[bParam0] = iVar1;
}

bool func_12(int iParam0)
{
	return iParam0 < 3;
}

int func_13(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_14(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)
{
	if (func_12(iParam0))
	{
		return func_17(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_17(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_18(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_97919.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_1(0))
		{
			return 0;
		}
		Global_43016++;
		*iParam0 = Global_43016;
		unk_0xC099DA307DD6BC62(unk_0xB6BA8B8E3D0B41C6(), 0);
		Global_23011.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x2481B055C8B5CA09(8);
		}
		Global_43052 = iParam2;
		Global_43014 = *iParam0;
		Global_43015 = iParam4;
		Global_43013 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_43013 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43013)
			{
				if (Global_43019[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43014 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_2(iParam2))
		{
			return 0;
		}
		if (Global_43013 == 8)
		{
			return 0;
		}
		Global_43016++;
		*iParam0 = Global_43016;
		Global_43019[Global_43013 /*4*/] = Global_43016;
		Global_43019[Global_43013 /*4*/].f_1 = iParam1;
		Global_43019[Global_43013 /*4*/].f_2 = iParam2;
		Global_43019[Global_43013 /*4*/].f_3 = 0;
		Global_43013++;
		if (iParam4 != 0)
		{
			func_19(iParam0, iParam4);
		}
	}
	return 2;
}

void func_19(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_43013 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43013)
	{
		if (Global_43019[iVar0 /*4*/] == *uParam0)
		{
			Global_43019[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

void func_20()
{
	if (iLocal_28 != -1)
	{
		func_21(&iLocal_28);
	}
	func_25(1628462442);
	func_25(1791324372);
	func_25(-240877892);
	func_25(1806999335);
	func_25(2054503592);
	func_25(-2009081795);
	bLocal_29 = false;
	bLocal_30 = false;
	Global_43017 = 0;
	unk_0xA4D968C5E2A5D0A0(uLocal_33);
}

void func_21(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_43014)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_43013 = 0;
	Global_43015 = 0;
	Global_43052 = 15;
	Global_63151 = 0;
	Global_63152 = 0;
}

int func_22()
{
	func_23();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_23()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_16(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_15(unk_0xE2D3D51028F0428A());
			if (func_12(iVar0) && (!func_9(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_12(Global_113386.f_2363.f_539.f_4321))
				{
					Global_113386.f_2363.f_539.f_4322 = Global_113386.f_2363.f_539.f_4321;
				}
				Global_113386.f_2363.f_539.f_4323 = iVar0;
				Global_113386.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113386.f_2363.f_539.f_4321 != 145)
			{
				Global_113386.f_2363.f_539.f_4323 = Global_113386.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_113386.f_2363.f_539.f_4321 = 145;
}

int func_24(struct<2> Param0, var uParam2, int iParam3)
{
	if (!(unk_0xE9E8955A780DDA01() || unk_0xECD40FEF3CF43BDB()))
	{
		return 0;
	}
	if (Param0.f_1 < 400f)
	{
		if (Param0.f_0 < 1400f)
		{
			if (Param0.f_0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					*iParam3 = 1;
					return 1;
				}
			}
		}
	}
	if (Param0.f_0 < 1536.35f)
	{
		if (Param0.f_1 > 1016.18f)
		{
			if (Param0.f_1 < 1213.53f)
			{
				if (Param0.f_0 > 1278.08f)
				{
					*iParam3 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_136)
	{
		if (Global_113386.f_7688[iVar0 /*15*/] == iParam0)
		{
			if (Global_43599 != iVar0)
			{
				func_37(iVar0);
				func_29(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_198)
	{
		if (Global_113386.f_7688.f_137[iVar0 /*15*/] == iParam0)
		{
			func_29(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_650)
	{
		if (Global_113386.f_7688.f_199[iVar0 /*15*/] == iParam0)
		{
			func_28(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_764)
	{
		if (Global_113386.f_7688.f_651[iVar0 /*14*/] == iParam0)
		{
			func_27(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_866)
	{
		if (Global_113386.f_7688.f_765[iVar0 /*10*/] == iParam0)
		{
			func_26(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_26(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_113386.f_7688.f_866)
	{
		return;
	}
	if (Global_113386.f_7688.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_113386.f_7688.f_866 - 2))
		{
			Global_113386.f_7688.f_765[iVar0 /*10*/] = { Global_113386.f_7688.f_765[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_113386.f_7688.f_866 > 0)
	{
		Global_113386.f_7688.f_765[(Global_113386.f_7688.f_866 - 1) /*10*/] = { Var1 };
		Global_113386.f_7688.f_866 = (Global_113386.f_7688.f_866 - 1);
	}
}

void func_27(int iParam0)
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_113386.f_7688.f_764)
	{
		return;
	}
	if (Global_113386.f_7688.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_113386.f_7688.f_764 - 2))
		{
			Global_113386.f_7688.f_651[iVar0 /*14*/] = { Global_113386.f_7688.f_651[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_113386.f_7688.f_764 > 0)
	{
		Global_113386.f_7688.f_651[(Global_113386.f_7688.f_764 - 1) /*14*/] = { Var1 };
		Global_113386.f_7688.f_764 = (Global_113386.f_7688.f_764 - 1);
	}
	func_11(0);
	func_11(1);
	func_11(2);
}

void func_28(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_113386.f_7688.f_650)
	{
		if (Global_113386.f_7688.f_199[iVar15 /*15*/] == iParam0)
		{
			iVar16 = iVar15;
			while (iVar16 <= (Global_113386.f_7688.f_650 - 2))
			{
				Global_113386.f_7688.f_199[iVar16 /*15*/] = { Global_113386.f_7688.f_199[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_113386.f_7688.f_199[(Global_113386.f_7688.f_650 - 1) /*15*/] = { Var0 };
			Global_113386.f_7688.f_650 = (Global_113386.f_7688.f_650 - 1);
			return;
		}
		iVar15++;
	}
}

void func_29(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_113386.f_7688.f_198)
	{
		if (Global_113386.f_7688.f_137[iVar15 /*15*/] == iParam0)
		{
			func_30(Global_113386.f_7688.f_137[iVar15 /*15*/].f_6);
			iVar16 = iVar15;
			while (iVar16 <= (Global_113386.f_7688.f_198 - 2))
			{
				Global_113386.f_7688.f_137[iVar16 /*15*/] = { Global_113386.f_7688.f_137[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_113386.f_7688.f_137[(Global_113386.f_7688.f_198 - 1) /*15*/] = { Var0 };
			Global_113386.f_7688.f_198 = (Global_113386.f_7688.f_198 - 1);
			return;
		}
		iVar15++;
	}
}

int func_30(int iParam0)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		if (func_36(iParam0, Global_20266) == 1)
		{
			func_35(iParam0, Global_20266, 0);
			if (func_34(iParam0, Global_20266) == 0)
			{
				iVar0 = Global_20266;
				func_31(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_33(iParam0, iVar0, 0);
			func_32(iParam0, iVar0, 0);
		}
	}
}

void func_32(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1998[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_33(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1998[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_34(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_24[iParam1];
}

void func_35(int iParam0, int iParam1, int iParam2)
{
	Global_1998[iParam0 /*29*/].f_19[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_19[iParam1] = iParam2;
	}
}

int func_36(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_19[iParam1];
}

void func_37(int iParam0)
{
	bool bVar0;
	var uVar1;
	struct<15> Var2;
	
	if (iParam0 < 0 || iParam0 >= Global_113386.f_7688.f_136)
	{
		return;
	}
	uVar1 = Global_113386.f_7688[iParam0 /*15*/].f_2;
	if (Global_113386.f_7688.f_136 > 1)
	{
		bVar0 = iParam0;
		while (bVar0 <= (Global_113386.f_7688.f_136 - 2))
		{
			Global_113386.f_7688[bVar0 /*15*/] = { Global_113386.f_7688[bVar0 + 1 /*15*/] };
			bVar0++;
		}
	}
	if (Global_113386.f_7688.f_136 > 0)
	{
		Global_113386.f_7688[(Global_113386.f_7688.f_136 - 1) /*15*/] = { Var2 };
		Global_113386.f_7688.f_136 = (Global_113386.f_7688.f_136 - 1);
	}
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (BitTest(uVar1, bVar0))
		{
			func_11(bVar0);
		}
		bVar0++;
	}
}

void func_38()
{
	func_20();
	func_4();
	unk_0xAFBDF6A5E54114C1();
}

int func_39(int iParam0)
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

int func_40(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_99.f_58[iParam0];
}

void func_41()
{
	func_7(0, 0);
	func_7(2, 0);
	func_7(1, 0);
	func_5(0, 0);
	func_5(1, 0);
	func_5(3, 0);
	func_5(2, 0);
}

int func_42(int iParam0)
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

