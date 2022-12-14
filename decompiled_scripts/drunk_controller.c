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
	unk_0x389D5B1C24A046B5();
	if (unk_0x55EEDBBFDC6E810F(32))
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
	if (Global_44411)
	{
		return 1;
	}
	if (unk_0xF57C1326FD40C8A7(Global_44412))
	{
		return 1;
	}
	if (unk_0x24B651D85CCE5EB4(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_44204 > 0)
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
	
	if (!Global_44411)
	{
		return;
	}
	iVar1 = unk_0xA5E11AF0A2B928C1();
	if (Global_44413 > iVar1 || Global_44413 == -1)
	{
		if (unk_0xB53553DC4AAC7D8A())
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
		if (Global_44416 != Global_44417)
		{
			fVar6 = (Global_44417 - Global_44416);
			Global_44416 = (Global_44416 + (fVar6 * 0.1f));
			if (unk_0x2655A8EC638E4FD1((Global_44416 - Global_44417)) < 0.01f)
			{
				Global_44416 = Global_44417;
			}
		}
		if (!unk_0x5943EF839F5E017B() && !func_8(unk_0x93E99A2DBCBA9CFA()))
		{
			unk_0x7FE424904239EBA6("DRUNK_SHAKE", ((Global_44416 * fVar3) * fVar5));
		}
		if ((unk_0xA5E11AF0A2B928C1() % 100) == 0)
		{
			if (Global_44413 == -1)
			{
			}
			else
			{
				if (fLocal_26 == -1f)
				{
					fLocal_26 = fVar3;
				}
				unk_0x349662FEA4ECE81F(((Global_44416 * fVar3) * fVar5));
				unk_0x8660199B2F4898FA(((Global_44415 * fVar3) * fVar5));
				fLocal_26 = fVar3;
			}
		}
		if (((Global_44415 * fVar3) * fVar5) < 1f)
		{
			unk_0x7BCAFEC02B563C0E(((Global_44415 * fVar3) * fVar5));
		}
		else
		{
			unk_0x7BCAFEC02B563C0E(1f);
		}
		if (!unk_0xF4B77997BE81F7D9())
		{
			unk_0xAE4F0A81118E0B44("DRUNK_SHAKE", (((Global_44416 * Global_44410) * fVar3) * fVar5));
		}
		unk_0xE4752D69CC8F9119((((Global_44416 * Global_44410) * fVar3) * fVar5));
		if (unk_0xF57C1326FD40C8A7(Global_44412))
		{
			if (unk_0x75F9043412E1F207(Global_44412))
			{
				unk_0xC7B060434432D1C9(Global_44412, ((Global_44416 * fVar3) * fVar5));
			}
		}
		if (!unk_0x2AC37494BBF1DB16(&Global_44440) && !unk_0x2AC37494BBF1DB16(&Global_44424))
		{
			unk_0xAEA29937C5240DA0(&Global_44424);
			StringCopy(&Global_44440, "", 16);
		}
		unk_0x9F55C97959F56295();
		if (Global_44419 > 0f)
		{
			if (fLocal_16 != Global_44419)
			{
				if (unk_0xB31050BAEF14E6F4() != -1)
				{
				}
				else if (!unk_0xE90D4680D447065A())
				{
					unk_0x86CC3402B0F6BB13(&Global_44420, 15f);
					fLocal_16 = Global_44419;
					if (Global_44418 != 1f)
					{
						unk_0x9A3E74048B14EBC9(Global_44418);
					}
				}
			}
			else
			{
				if (unk_0xB31050BAEF14E6F4() != -1 && unk_0x4F873840FC0FA8FE() != -1)
				{
					fLocal_16 = -99f;
				}
				unk_0xBF6A4C0559E4BF39(2);
				iVar7 = (Global_44413 - iVar1);
				if (iVar7 <= (Global_44414 / 2) && Global_44413 != -1)
				{
					bVar8 = false;
					if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
					{
						if (unk_0x70ACD9400516DB25(unk_0xC1A5EC5C986B98AD()))
						{
							bVar8 = true;
						}
					}
					if (func_6(unk_0xC1A5EC5C986B98AD()))
					{
						Global_44413 += 1000;
					}
					else if (bVar8)
					{
						Global_44413 += 1000;
					}
					else if (unk_0xB31050BAEF14E6F4() != -1)
					{
						Global_44413 += 1000;
					}
					else if (func_5())
					{
						Global_44413 += 1000;
					}
					else
					{
						if (unk_0x4F873840FC0FA8FE() != -1)
						{
							unk_0xDEE79DD80BE13DE8((unk_0xBBDA792448DB5A89((Global_44414 / 2)) / 1000f));
						}
						fLocal_16 = -99f;
						Global_44419 = 0f;
						StringCopy(&Global_44420, "", 16);
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
	unk_0x8660199B2F4898FA(0f);
	unk_0x7BCAFEC02B563C0E(0f);
	unk_0x349662FEA4ECE81F(0f);
	unk_0x7EC07327DEB05AC6(1);
	unk_0xE4752D69CC8F9119(0f);
	unk_0x1936275185C4A0E5(1);
	unk_0xBF6A4C0559E4BF39(0);
	if (unk_0xD19C2C73F4D74992("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x3FA8C73B5856A3E4("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x2AC37494BBF1DB16(&Global_44424))
	{
		if (unk_0xD19C2C73F4D74992(&Global_44424))
		{
			unk_0x3FA8C73B5856A3E4(&Global_44424);
		}
	}
	if (unk_0xF57C1326FD40C8A7(Global_44412))
	{
		if (unk_0x75F9043412E1F207(Global_44412))
		{
			unk_0xC7B060434432D1C9(Global_44412, 0f);
			unk_0x0969F28D2C570575(Global_44412, 1);
		}
	}
	if (unk_0xC0A15A60BC0C570E())
	{
		unk_0x282AA8C5BDD0836B(0);
	}
	if (bParam0)
	{
		if (unk_0x4F873840FC0FA8FE() != -1 || unk_0xB31050BAEF14E6F4() != -1)
		{
			unk_0xA2EC5ACB2B5D92A4();
		}
		else if (unk_0xB53553DC4AAC7D8A())
		{
			unk_0xA2EC5ACB2B5D92A4();
		}
	}
	Global_44419 = 0f;
	StringCopy(&Global_44420, "", 16);
	StringCopy(&Global_44424, "", 64);
	StringCopy(&Global_44440, "", 16);
	func_4();
}

void func_4()
{
	Global_44411 = 0;
	Global_44412 = 0;
	Global_44413 = 0;
	Global_44414 = 30000;
	Global_44415 = 0f;
	Global_44417 = 0f;
	Global_44416 = 0f;
	Global_44418 = 1f;
	Global_44419 = 0f;
	StringCopy(&Global_44420, "", 16);
}

bool func_5()
{
	return Global_2766478;
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
		if (!Global_44232[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44232[iVar0 /*5*/].f_1)
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
	return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_3, 13);
}

float func_9()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 0.1f;
	iVar1 = func_13(unk_0xC1A5EC5C986B98AD());
	iVar2 = func_10(unk_0xC1A5EC5C986B98AD());
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
	if (!unk_0x7DE17ACDD8BA2642(iParam0))
	{
		return 0;
	}
	iVar0 = func_12(iParam0);
	iVar1 = func_11(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_44232[iVar1 /*5*/].f_4;
}

int func_11(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44232[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_44232[iVar0 /*5*/].f_1)
		{
			return Global_44232[iVar0 /*5*/];
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
	if (!unk_0x7DE17ACDD8BA2642(iParam0))
	{
		return 0;
	}
	iVar0 = func_12(iParam0);
	iVar1 = func_11(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_44232[iVar1 /*5*/].f_3;
}

float func_14()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0xA5E11AF0A2B928C1();
	fVar1 = 1f;
	iVar2 = (Global_44413 - iVar0);
	if (iVar2 <= Global_44414)
	{
		if (Global_44413 != -1)
		{
			fVar1 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(Global_44414));
		}
	}
	return fVar1;
}

void func_15()
{
	if (Global_44206[iLocal_15 /*5*/] == 0)
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
	if (unk_0x055111B11E6624FD(Global_44206[iParam0 /*5*/].f_1, 0))
	{
		func_19(iParam0);
		return;
	}
	if (func_6(Global_44206[iParam0 /*5*/].f_1))
	{
		func_19(iParam0);
		return;
	}
	if (!unk_0x6CAF14BE58B4BFF8("drunk"))
	{
		unk_0x3EC562D93709C894("drunk");
		return;
	}
	iVar0 = func_18();
	if (iVar0 == -1)
	{
		func_19(iParam0);
		return;
	}
	Global_44232[iVar0 /*5*/] = func_17();
	Global_44232[iVar0 /*5*/].f_1 = Global_44206[iParam0 /*5*/].f_1;
	Global_44232[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_44206[iParam0 /*5*/] };
	unk_0xB8BA7F44DF1575E1("drunk", &Var1, 5, 1424);
	unk_0x037A80676B8FF0F5("drunk");
	func_19(iParam0);
}

var func_17()
{
	var uVar0;
	
	uVar0 = Global_44203;
	Global_44203++;
	return uVar0;
}

int func_18()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44232[iVar0 /*5*/] == -1)
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
	if (!Global_44206[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_44206[iParam0 /*5*/].f_1 == unk_0xC1A5EC5C986B98AD())
		{
			Global_44444 = 0;
		}
	}
	Global_44206[iParam0 /*5*/] = 13;
	Global_44206[iParam0 /*5*/].f_1 = 0;
	Global_44206[iParam0 /*5*/].f_2 = 0;
	Global_44206[iParam0 /*5*/].f_3 = 0;
	Global_44206[iParam0 /*5*/].f_4 = 0;
	Global_44204 = (Global_44204 - 1);
	if (Global_44204 < 0)
	{
		Global_44204 = 0;
	}
}

void func_20()
{
	if (!Global_44313[iLocal_13 /*6*/].f_2 == 6)
	{
		if (Global_44313[iLocal_13 /*6*/].f_1 == 0)
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
	Global_44313[iParam0 /*6*/] = -1;
	Global_44313[iParam0 /*6*/].f_1 = -1;
	Global_44313[iParam0 /*6*/].f_2 = 6;
	Global_44313[iParam0 /*6*/].f_3 = 0;
	Global_44313[iParam0 /*6*/].f_4 = 0;
}

void func_22(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_44313[iParam0 /*6*/].f_2;
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
	if (!Global_44232[iLocal_14 /*5*/] == -1)
	{
		iVar0 = func_29(Global_44232[iLocal_14 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_24(Global_44232[iLocal_14 /*5*/]);
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
	Global_44232[iParam0 /*5*/] = -1;
	Global_44232[iParam0 /*5*/].f_1 = 0;
	Global_44232[iParam0 /*5*/].f_2 = -1;
	Global_44232[iParam0 /*5*/].f_3 = 0;
	Global_44232[iParam0 /*5*/].f_4 = 0;
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44232[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_44313[iVar0 /*6*/].f_1)
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
		if (iParam1 == Global_44313[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44313[iVar0 /*6*/])
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
	if (Global_44313[iLocal_13 /*6*/] == 1)
	{
		Global_44313[iLocal_13 /*6*/] = 0;
	}
}

void func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44313[iVar0 /*6*/])
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
	unk_0x675D9C12C73D3DE7();
}

void func_33()
{
	func_36();
	func_35();
	func_34();
	func_4();
	Global_44445 = 0;
	Global_44444 = 0;
	Global_44204 = 0;
	unk_0x031879EF9A711F74("drunk");
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

