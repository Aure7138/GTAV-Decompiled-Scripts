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
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17[8] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_26 = 0f;
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
	fLocal_16 = -99f;
	fLocal_26 = -1f;
	unk_0x3F57BEDBC381CBC7();
	if (unk_0x4B34601C5C56F3EE(32))
	{
		func_32();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_31(0);
		func_30();
		func_23();
		func_20();
		func_15();
		func_2();
		iLocal_13++;
		if (iLocal_13 >= 16)
		{
			iLocal_13 = 0;
		}
		iLocal_14++;
		if (iLocal_14 >= 16)
		{
			iLocal_14 = 0;
		}
		iLocal_15++;
		if (iLocal_15 >= 5)
		{
			iLocal_15 = 0;
		}
		if (!func_1())
		{
			func_32();
		}
	}
}

int func_1()
{
	if (Global_44203)
	{
		return 1;
	}
	if (unk_0x876B1078E90C91CB(Global_44204))
	{
		return 1;
	}
	if (unk_0xB4C854DD86E40FDA(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_43996 > 0)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	
	if (!Global_44203)
	{
		return;
	}
	iVar1 = unk_0x320D1840B6DAA1CC();
	if (Global_44205 > iVar1 || Global_44205 == -1)
	{
		if (unk_0x04458B4E5D9E466A())
		{
			return;
		}
		iVar2 = func_14();
		iVar0 = (fLocal_17 - 1);
		while (iVar0 >= 1)
		{
			fLocal_17[iVar0] = fLocal_17[(iVar0 - 1)];
			iVar0 = (iVar0 + -1);
		}
		fLocal_17[0] = iVar2;
		iVar4 = 0;
		iVar0 = 0;
		while (iVar0 < fLocal_17)
		{
			fVar3 = (fVar3 + fLocal_17[iVar0]);
			iVar4++;
			iVar0++;
		}
		fVar3 = (fVar3 / IntToFloat(iVar4));
		fVar5 = func_9();
		if (Global_44208 != Global_44209)
		{
			fVar6 = (Global_44209 - Global_44208);
			Global_44208 = (Global_44208 + (fVar6 * 0.1f));
			if (unk_0x48053974ED6F63CE((Global_44208 - Global_44209)) < 0.01f)
			{
				Global_44208 = Global_44209;
			}
		}
		if (!unk_0xF8F3D410542C80DB() && !func_8(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x87CA6430083E790D("DRUNK_SHAKE", ((Global_44208 * fVar3) * fVar5));
		}
		if ((unk_0x320D1840B6DAA1CC() % 100) == 0)
		{
			if (Global_44205 == -1)
			{
			}
			else
			{
				if (fLocal_26 == -1f)
				{
					fLocal_26 = fVar3;
				}
				unk_0x0ED8565383E33DA1(((Global_44208 * fVar3) * fVar5));
				unk_0xE776D70A603C3C81(((Global_44207 * fVar3) * fVar5));
				fLocal_26 = fVar3;
			}
		}
		if (((Global_44207 * fVar3) * fVar5) < 1f)
		{
			unk_0x97E56574A6AA6C7D(((Global_44207 * fVar3) * fVar5));
		}
		else
		{
			unk_0x97E56574A6AA6C7D(1f);
		}
		if (!unk_0xBEE2F63C2DA77F95())
		{
			unk_0x3B58BE9E133FD48D("DRUNK_SHAKE", (((Global_44208 * Global_44202) * fVar3) * fVar5));
		}
		unk_0x86A2751C5F3AF8F8((((Global_44208 * Global_44202) * fVar3) * fVar5));
		if (unk_0x876B1078E90C91CB(Global_44204))
		{
			if (unk_0x629B37AF59212703(Global_44204))
			{
				unk_0x1342E9E0CDE9B323(Global_44204, ((Global_44208 * fVar3) * fVar5));
			}
		}
		if (!unk_0xACC32B78196FBC2A(&Global_44232) && !unk_0xACC32B78196FBC2A(&Global_44216))
		{
			unk_0x66B27A59829491D3(&Global_44216);
			StringCopy(&Global_44232, "", 16);
		}
		unk_0x62EA3913642EDF8E();
		if (Global_44211 > 0f)
		{
			if (fLocal_16 != Global_44211)
			{
				if (unk_0x7234E7FF7B1C3AE3() != -1)
				{
				}
				else if (!unk_0x31E4C810A77A13F8())
				{
					unk_0x4ECB2825299DF02E(&Global_44212, 15f);
					fLocal_16 = Global_44211;
					if (Global_44210 != 1f)
					{
						unk_0xAC7136A72DE288C8(Global_44210);
					}
				}
			}
			else
			{
				if (unk_0x7234E7FF7B1C3AE3() != -1 && unk_0x607B649F72D20B6A() != -1)
				{
					fLocal_16 = -99f;
				}
				unk_0x085DC39D279EE40F(2);
				iVar7 = (Global_44205 - iVar1);
				if (iVar7 <= (Global_44206 / 2) && Global_44205 != -1)
				{
					bVar8 = false;
					if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
					{
						if (unk_0x4239F34C6EE6A3E9(unk_0xE2D3D51028F0428A()))
						{
							bVar8 = true;
						}
					}
					if (func_6(unk_0xE2D3D51028F0428A()))
					{
						Global_44205 += 1000;
					}
					else if (bVar8)
					{
						Global_44205 += 1000;
					}
					else if (unk_0x7234E7FF7B1C3AE3() != -1)
					{
						Global_44205 += 1000;
					}
					else if (func_5())
					{
						Global_44205 += 1000;
					}
					else
					{
						if (unk_0x607B649F72D20B6A() != -1)
						{
							unk_0xBBFAAE0F5C7709C5((unk_0xBBDA792448DB5A89((Global_44206 / 2)) / 1000f));
						}
						fLocal_16 = -99f;
						Global_44211 = 0f;
						StringCopy(&Global_44212, "", 16);
					}
				}
			}
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < fLocal_17)
	{
		fLocal_17[iVar0] = 0f;
		iVar0++;
	}
	fLocal_26 = -1f;
	fLocal_16 = -99f;
	func_3(1);
	iLocal_12 = 1;
}

void func_3(bool bParam0)
{
	unk_0xE776D70A603C3C81(0f);
	unk_0x97E56574A6AA6C7D(0f);
	unk_0x0ED8565383E33DA1(0f);
	unk_0x84CF415AEAB83B93(1);
	unk_0x86A2751C5F3AF8F8(0f);
	unk_0xC3D04B421E077910(1);
	unk_0x085DC39D279EE40F(0);
	if (unk_0xA37204C64473B324("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x0AF8D3A06BB92903("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xACC32B78196FBC2A(&Global_44216))
	{
		if (unk_0xA37204C64473B324(&Global_44216))
		{
			unk_0x0AF8D3A06BB92903(&Global_44216);
		}
	}
	if (unk_0x876B1078E90C91CB(Global_44204))
	{
		if (unk_0x629B37AF59212703(Global_44204))
		{
			unk_0x1342E9E0CDE9B323(Global_44204, 0f);
			unk_0x80B66EF081475250(Global_44204, 1);
		}
	}
	if (unk_0xE9331AEA6C1820C9())
	{
		unk_0x8564F0807A5C1CD6(0);
	}
	if (bParam0)
	{
		if (unk_0x607B649F72D20B6A() != -1 || unk_0x7234E7FF7B1C3AE3() != -1)
		{
			unk_0xDEABC7EC7DA2B48E();
		}
		else if (unk_0x04458B4E5D9E466A())
		{
			unk_0xDEABC7EC7DA2B48E();
		}
	}
	Global_44211 = 0f;
	StringCopy(&Global_44212, "", 16);
	StringCopy(&Global_44216, "", 64);
	StringCopy(&Global_44232, "", 16);
	func_4();
}

void func_4()
{
	Global_44203 = 0;
	Global_44204 = 0;
	Global_44205 = 0;
	Global_44206 = 30000;
	Global_44207 = 0f;
	Global_44209 = 0f;
	Global_44208 = 0f;
	Global_44210 = 1f;
	Global_44211 = 0f;
	StringCopy(&Global_44212, "", 16);
}

bool func_5()
{
	return Global_2789734;
}

int func_6(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_7(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_7(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_44024[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44024[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_8(int iParam0)
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_3, 13);
}

float func_9()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 0.1f;
	iVar1 = func_13(unk_0xE2D3D51028F0428A());
	iVar2 = func_10(unk_0xE2D3D51028F0428A());
	if (iVar2 == 0)
	{
		if (iVar1 == 0)
		{
			fVar0 = 0.1f;
		}
		else
		{
			fVar0 = (unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 == 0)
	{
		fVar0 = 0.1f;
	}
	else
	{
		fVar0 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(5));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	iVar0 = func_12(iParam0);
	iVar1 = func_11(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_44024[iVar1 /*5*/].f_4;
}

int func_11(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44024[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_12(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44024[iVar0 /*5*/].f_1)
		{
			return Global_44024[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	iVar0 = func_12(iParam0);
	iVar1 = func_11(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_44024[iVar1 /*5*/].f_3;
}

float func_14()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x320D1840B6DAA1CC();
	fVar1 = 1f;
	iVar2 = (Global_44205 - iVar0);
	if (iVar2 <= Global_44206)
	{
		if (Global_44205 != -1)
		{
			fVar1 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(Global_44206));
		}
	}
	return fVar1;
}

void func_15()
{
	if (Global_43998[iLocal_15 /*5*/] == 0)
	{
		func_16(iLocal_15);
	}
}

void func_16(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (unk_0x55B23FE400FCEA6B(Global_43998[iParam0 /*5*/].f_1, 0))
	{
		func_19(iParam0);
		return;
	}
	if (func_6(Global_43998[iParam0 /*5*/].f_1))
	{
		func_19(iParam0);
		return;
	}
	if (!unk_0xF79F112CE5999680("drunk"))
	{
		unk_0xAF76A37C80EFD1D8("drunk");
		return;
	}
	iVar0 = func_18();
	if (iVar0 == -1)
	{
		func_19(iParam0);
		return;
	}
	Global_44024[iVar0 /*5*/] = func_17();
	Global_44024[iVar0 /*5*/].f_1 = Global_43998[iParam0 /*5*/].f_1;
	Global_44024[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_43998[iParam0 /*5*/] };
	unk_0xB8BA7F44DF1575E1("drunk", &Var1, 5, 1424);
	unk_0xD195D79715508EFA("drunk");
	func_19(iParam0);
}

var func_17()
{
	var uVar0;
	
	uVar0 = Global_43995;
	Global_43995++;
	return uVar0;
}

int func_18()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44024[iVar0 /*5*/] == -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_19(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_43998[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_43998[iParam0 /*5*/].f_1 == unk_0xE2D3D51028F0428A())
		{
			Global_44236 = 0;
		}
	}
	Global_43998[iParam0 /*5*/] = 13;
	Global_43998[iParam0 /*5*/].f_1 = 0;
	Global_43998[iParam0 /*5*/].f_2 = 0;
	Global_43998[iParam0 /*5*/].f_3 = 0;
	Global_43998[iParam0 /*5*/].f_4 = 0;
	Global_43996 = (Global_43996 - 1);
	if (Global_43996 < 0)
	{
		Global_43996 = 0;
	}
}

void func_20()
{
	if (!Global_44105[iLocal_13 /*6*/].f_2 == 6)
	{
		if (Global_44105[iLocal_13 /*6*/].f_1 == 0)
		{
			func_22(iLocal_13);
			func_21(iLocal_13);
		}
	}
}

void func_21(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_44105[iParam0 /*6*/] = -1;
	Global_44105[iParam0 /*6*/].f_1 = -1;
	Global_44105[iParam0 /*6*/].f_2 = 6;
	Global_44105[iParam0 /*6*/].f_3 = 0;
	Global_44105[iParam0 /*6*/].f_4 = 0;
}

void func_22(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_44105[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
		
		default:
			break;
	}
}

void func_23()
{
	int iVar0;
	
	iVar0 = -1;
	if (!Global_44024[iLocal_14 /*5*/] == -1)
	{
		iVar0 = func_29(Global_44024[iLocal_14 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_24(Global_44024[iLocal_14 /*5*/]);
		}
		else
		{
			func_21(iVar0);
		}
	}
}

void func_24(int iParam0)
{
	int iVar0;
	
	func_27(iParam0);
	iVar0 = func_26(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_25(iVar0);
}

void func_25(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_44024[iParam0 /*5*/] = -1;
	Global_44024[iParam0 /*5*/].f_1 = 0;
	Global_44024[iParam0 /*5*/].f_2 = -1;
	Global_44024[iParam0 /*5*/].f_3 = 0;
	Global_44024[iParam0 /*5*/].f_4 = 0;
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44024[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_27(int iParam0)
{
	func_31(iParam0);
	func_28(iParam0);
}

void func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44105[iVar0 /*6*/].f_1)
		{
			func_21(iVar0);
		}
		iVar0++;
	}
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam1 == Global_44105[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44105[iVar0 /*6*/])
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_30()
{
	if (Global_44105[iLocal_13 /*6*/] == 1)
	{
		Global_44105[iLocal_13 /*6*/] = 0;
	}
}

void func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44105[iVar0 /*6*/])
		{
			func_21(iVar0);
		}
		iVar0++;
	}
}

void func_32()
{
	func_33();
	if (!iLocal_12)
	{
		func_3(1);
	}
	unk_0xAFBDF6A5E54114C1();
}

void func_33()
{
	func_36();
	func_35();
	func_34();
	func_4();
	Global_44237 = 0;
	Global_44236 = 0;
	Global_43996 = 0;
	unk_0xCB67CDEE283E73DC("drunk");
}

void func_34()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_21(iVar0);
		iVar0++;
	}
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_25(iVar0);
		iVar0++;
	}
}

void func_36()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_19(iVar0);
		iVar0++;
	}
}

