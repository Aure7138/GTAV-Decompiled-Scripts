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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	struct<8> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	struct<11> Local_55[50];
	int iLocal_606 = 0;
	int iLocal_607 = 0;
	bool bLocal_608 = 0;
	var uLocal_609 = 0;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	bLocal_40 = true;
	bLocal_41 = true;
	iLocal_606 = 15;
	if (unk_0x4B34601C5C56F3EE(210))
	{
		func_53();
	}
	if (unk_0xB4C854DD86E40FDA(joaat("spaceshipparts")) > 1)
	{
		unk_0xAFBDF6A5E54114C1();
	}
	func_52(14);
	func_50();
	func_49(&Local_42, 0, joaat("prop_power_cell"), "SSHIP_COLLECT");
	func_47(&Local_42, joaat("num_hidden_packages_1"), 755, 50);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_46(unk_0xE2D3D51028F0428A());
		if (func_16(&Local_42, &Local_55) || func_15(107) == 1)
		{
			if (!bLocal_608)
			{
				bLocal_608 = func_11(367701416, 1, 2, 69, 5000, 10000, -1, 179, -1, 32, 1);
			}
			if (bLocal_608)
			{
				if (!func_4() == 1)
				{
					func_1("SSHIP_SWITCH", 1, 0, 20000, 10000, 3, 0, 0, 0);
				}
				func_53();
			}
		}
	}
}

void func_1(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_2(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_2(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x3C57C2F07FEE34D2(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (unk_0x3C57C2F07FEE34D2(&(Global_113386.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113386.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_8 = (unk_0x320D1840B6DAA1CC() + iParam3);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = ((unk_0x320D1840B6DAA1CC() + iParam3) + iParam4);
		}
		else
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_113386.f_20410.f_145++;
		func_3();
	}
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113386.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[0])
			{
				Global_113386.f_20410.f_146[0] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[1])
			{
				Global_113386.f_20410.f_146[1] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[2])
			{
				Global_113386.f_20410.f_146[2] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_4()
{
	func_5();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_5()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_9(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_8(unk_0xE2D3D51028F0428A());
			if (func_7(iVar0) && (!func_6(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_7(Global_113386.f_2363.f_539.f_4321))
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

bool func_6(int iParam0)
{
	return Global_43052 == iParam0;
}

bool func_7(int iParam0)
{
	return iParam0 < 3;
}

int func_8(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_9(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_9(int iParam0)
{
	if (func_7(iParam0))
	{
		return func_10(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_10(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_11(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<14> Var0;
	
	if (func_14(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
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
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_113386.f_7688.f_764 < 8)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_13(iParam1);
		Var0.f_4 = (unk_0x320D1840B6DAA1CC() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = bParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_13 = iParam10;
		unk_0xB0550BC91B0159D6(&(Var0.f_1), false);
		Global_113386.f_7688.f_651[Global_113386.f_7688.f_764 /*14*/] = { Var0 };
		Global_113386.f_7688.f_764++;
		func_12(0);
		func_12(1);
		func_12(2);
		return 1;
	}
	return 0;
}

void func_12(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_7(bParam0))
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

int func_15(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_99.f_58[iParam0];
}

int func_16(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	
	if (!func_6(14) && !unk_0xA829C9A2767AC8EF())
	{
		unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A());
		Var2 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
		iVar0 = 0;
		while (iVar0 < 1)
		{
			bVar1 = func_45(&(uParam0->f_1), uParam0->f_10);
			if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
			{
				if (!bVar1)
				{
					if (uParam0->f_10 == iLocal_606)
					{
						func_43(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 1, 0, 2);
						if (unk_0x2791155FB0769FE5((iParam1[uParam0->f_10 /*11*/])->f_1))
						{
							unk_0x28692DF126DAC03E((iParam1[uParam0->f_10 /*11*/])->f_1, "GtaMloRoomTun5");
						}
					}
					else if ((((uParam0->f_10 == 6 || uParam0->f_10 == 14) || uParam0->f_10 == 21) || uParam0->f_10 == 34) || uParam0->f_10 == 39)
					{
						func_43(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 2);
					}
					else
					{
						func_43(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
					}
				}
			}
			else if (!bVar1)
			{
				func_26(uParam0, iParam1, Var2);
			}
			uParam0->f_10++;
			if (uParam0->f_10 >= *iParam1)
			{
				uParam0->f_10 = 0;
			}
			iVar0++;
		}
		if (!Global_78579)
		{
			func_17(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 0, &iLocal_607, &uLocal_609, "SSHIP_TITLE", "SSHIP_COLLECT");
		}
		if (!bLocal_608)
		{
			if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
			{
				bLocal_608 = func_11(367701416, 1, 2, 69, 5000, 10000, -1, 179, -1, 32, 1);
			}
		}
		if (!uParam0->f_12 && !uParam0->f_11)
		{
			return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
		}
	}
	return 0;
}

void func_17(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, char* sParam6, char* sParam7)
{
	var uVar0;
	
	func_25(0);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0:
				*uParam5 = unk_0x528279F3F1EEF869("MIDSIZED_MESSAGE");
				if (unk_0x0347CCBD719C8ADC(*uParam5))
				{
					uVar0 = unk_0xA9ADCC8D104AA552();
					if (iParam3 == 6)
					{
						unk_0x91DFC8F68F6D9B05(uVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						unk_0x91DFC8F68F6D9B05(uVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*iParam4++;
				}
				break;
			
			case 1:
				unk_0xEA5DEA46C3EE64D3(*uParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0x4ADC8B166E139423(sParam6);
				unk_0xD1D4F8D5470AFA4C();
				unk_0x4ADC8B166E139423(sParam7);
				unk_0x2AE954BA77A66307(func_19(iParam3));
				unk_0xD1D4F8D5470AFA4C();
				unk_0x6F06CF0E9AB02847();
				*uParam2 = unk_0x320D1840B6DAA1CC();
				*iParam4++;
				break;
			
			case 2:
				if ((unk_0x320D1840B6DAA1CC() - *uParam2) > 7000)
				{
					unk_0xEA5DEA46C3EE64D3(*uParam5, "SHARD_ANIM_OUT");
					unk_0x4F47E317C74C543B(1);
					unk_0xCA5D23E5F0F0306F(0.33f);
					unk_0x6F06CF0E9AB02847();
					*iParam4++;
				}
				else if (!func_18())
				{
					if (unk_0x0347CCBD719C8ADC(*uParam5))
					{
						func_25(1);
						unk_0xC4353D240DCE9533(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((unk_0x320D1840B6DAA1CC() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_18())
				{
					if (unk_0x0347CCBD719C8ADC(*uParam5))
					{
						func_25(1);
						unk_0xC4353D240DCE9533(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (unk_0x0347CCBD719C8ADC(*uParam5))
				{
					unk_0x705B098546DEB18A(uParam5);
				}
				func_25(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

int func_18()
{
	if (Global_78579)
	{
		return 1;
	}
	else if (Global_63148 && !Global_63154)
	{
		return 1;
	}
	return 0;
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_24(iParam0))
		{
			if (BitTest(Global_113386.f_10049.f_108, func_23(func_24(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		unk_0x61481F9FBB1C7EDD(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		unk_0x61481F9FBB1C7EDD(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		unk_0x61481F9FBB1C7EDD(joaat("num_hidden_packages_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_24(iParam0))
		{
			iVar2 = (func_22(iParam0) + iVar1);
			if (func_20(iVar2, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_20(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_21();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, iParam1);
}

int func_21()
{
	return Global_1574918;
}

int func_22(int iParam0)
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_23(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_24(int iParam0)
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_25(int iParam0)
{
	if (Global_78586 != iParam0)
	{
		Global_78586 = iParam0;
	}
}

int func_26(var uParam0, var uParam1, struct<3> Param2)
{
	bool bVar0;
	
	bVar0 = uParam0->f_10;
	if ((uParam1[bVar0 /*11*/])->f_10)
	{
		if ((uParam1[bVar0 /*11*/])->f_1 != 0)
		{
			if (unk_0x803592456AE579B3((uParam1[bVar0 /*11*/])->f_1) || func_41((uParam1[bVar0 /*11*/])->f_1))
			{
				func_28(uParam0, uParam1, bVar0);
				return 1;
			}
		}
	}
	if (unk_0x2791155FB0769FE5((uParam1[bVar0 /*11*/])->f_1))
	{
		if ((unk_0xB7A628320EFF8E47(Param2, unk_0x70453F7DF40780A5((uParam1[bVar0 /*11*/])->f_1)) > (60f * 60f) || func_6(13)) || func_6(14))
		{
			func_27(&((uParam1[bVar0 /*11*/])->f_1));
			(uParam1[bVar0 /*11*/])->f_1 = 0;
			(uParam1[bVar0 /*11*/])->f_10 = 0;
		}
	}
	return 0;
}

void func_27(var uParam0)
{
	if (unk_0x2791155FB0769FE5(*uParam0))
	{
		unk_0x451F33099166532A(*uParam0);
	}
}

void func_28(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = (func_22(*uParam0) + bParam2);
	func_27(&((uParam1[bParam2 /*11*/])->f_1));
	func_40(&((uParam1[bParam2 /*11*/])->f_2));
	(uParam1[bParam2 /*11*/])->f_1 = 0;
	(uParam1[bParam2 /*11*/])->f_10 = 0;
	func_39(&(uParam0->f_1), bParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_38(*uParam0, bParam2, 1);
	}
	unk_0xF7A14A1A76B6DD17(0, 200, 250);
	unk_0xFA38CF6FFD2BF050(uParam0->f_6, 1f);
	if (bLocal_41)
	{
		func_37(&(uParam0->f_1), bParam2);
	}
	else
	{
		func_34(&(uParam0->f_1));
	}
	func_31();
	unk_0x599A5BFB6E56DDFC(iVar0);
	func_30(1, 0);
	func_29();
	uParam0->f_11 = 1;
}

int func_29()
{
	if (func_14(0))
	{
		return 0;
	}
	if (Global_100480.f_8)
	{
		if (Global_100480.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100480.f_10 > 1)
	{
		return 0;
	}
	Global_100480.f_10++;
	return 1;
}

void func_30(int iParam0, int iParam1)
{
	Global_100480.f_7 = iParam0;
	Global_100480.f_8 = iParam1;
}

void func_31()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	unk_0x61481F9FBB1C7EDD(func_33(0), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_32(18, iVar0);
	}
	unk_0x61481F9FBB1C7EDD(func_33(1), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_32(19, iVar0);
	}
	unk_0x61481F9FBB1C7EDD(func_33(3), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_32(20, iVar0);
	}
	iVar2 = ((func_24(0) + func_24(1)) + func_24(3));
	if (iVar2 > 0)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	unk_0x076A5661EF5ABEE4(joaat("percent_hidden_packages"), iVar3, 1);
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xE70CD2CDEE98DF14(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xEE587CFF91CF5EDA(iParam0, iParam1);
	}
	return 0;
}

int func_33(int iParam0)
{
	if (iParam0 == 3)
	{
		return joaat("num_hidden_packages_3");
	}
	if (iParam0 == 1)
	{
		return joaat("num_hidden_packages_0");
	}
	if (iParam0 == 0)
	{
		return joaat("num_hidden_packages_1");
	}
	if (iParam0 == 5)
	{
		return joaat("num_hidden_packages_4");
	}
	return joaat("num_hidden_packages_2");
}

void func_34(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_45(uParam0, iVar0))
		{
			iVar1++;
			func_36((uParam0->f_2 + iVar0), 1, -1);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_35(168, 0);
	}
}

void func_35(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_113386.f_8613[iParam0] = 1;
	Global_113386.f_8613.f_236[iParam0] = (unk_0x320D1840B6DAA1CC() + iParam1);
}

void func_36(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_21();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, iParam2);
}

void func_37(var uParam0, bool bParam1)
{
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	if (bParam1 >= uParam0->f_3)
	{
	}
	if (func_45(uParam0, bParam1))
	{
		uParam0->f_4++;
		func_36((uParam0->f_2 + bParam1), 1, -1);
		if (bLocal_40)
		{
		}
	}
	if (bLocal_40)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_35(168, 0);
	}
}

void func_38(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 < 0 || bParam1 >= 64)
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (bParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0xCED9E32812D6C7C7(&(Global_113386.f_10049.f_122), bParam1);
			}
			else
			{
				unk_0xB0550BC91B0159D6(&(Global_113386.f_10049.f_122), bParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0xCED9E32812D6C7C7(&(Global_113386.f_10049.f_122.f_1), (bParam1 - 32));
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(Global_113386.f_10049.f_122.f_1), (bParam1 - 32));
		}
	}
	else if (iParam0 == 0)
	{
		if (bParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0xCED9E32812D6C7C7(&(Global_113386.f_10049.f_125), bParam1);
			}
			else
			{
				unk_0xB0550BC91B0159D6(&(Global_113386.f_10049.f_125), bParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0xCED9E32812D6C7C7(&(Global_113386.f_10049.f_125.f_1), (bParam1 - 32));
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(Global_113386.f_10049.f_125.f_1), (bParam1 - 32));
		}
	}
}

void func_39(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 < 0 || bParam1 >= 64)
	{
		return;
	}
	if (bParam1 <= 31)
	{
		if (bParam2)
		{
			unk_0xCED9E32812D6C7C7(uParam0, bParam1);
		}
		else
		{
			unk_0xB0550BC91B0159D6(uParam0, bParam1);
		}
		return;
	}
	if (bParam2)
	{
		unk_0xCED9E32812D6C7C7(&(uParam0->f_1), (bParam1 - 32));
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(uParam0->f_1), (bParam1 - 32));
	}
}

void func_40(var uParam0)
{
	if (unk_0x12DD4A0B247D9B4D(*uParam0))
	{
		unk_0xAAD76B24A5282FDD(*uParam0, 0);
		unk_0xFFD8EB5462B07B59(uParam0);
	}
}

int func_41(var uParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x2791155FB0769FE5(uParam0))
	{
		return 0;
	}
	if (func_42(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			iVar1 = unk_0x15CAA6D7B11F1A7C(uVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x70453F7DF40780A5(uParam0)) < (5f * 5f) || unk_0x72F6AE51B7E34865(unk_0xE2D3D51028F0428A(), unk_0x7AF1DEF5F183C1A6(uParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_42(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_43(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	var uVar0;
	
	if (!uParam0->f_10)
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (!func_6(13) && !func_6(14))
			{
				if (!unk_0x2791155FB0769FE5(uParam0->f_1))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), uParam0->f_3) <= (50f * 50f))
					{
						unk_0xD69A0C3662175E68(uParam1);
						while (!unk_0x0152AA00FA3130F1(uParam1))
						{
							unk_0xD69A0C3662175E68(uParam1);
							unk_0x4EDE34FBADD967A6(0);
						}
						if (bParam3)
						{
							func_44(uParam0->f_3);
						}
						unk_0x7A997A0A971D305F(uParam0->f_3, 2.5f, 0, 0, 0, 0);
						if (bParam4)
						{
							unk_0xCED9E32812D6C7C7(&uVar0, true);
							uParam0->f_1 = unk_0x1EE09F99FEF19DAF(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, uVar0, -1, iParam5, 1, uParam1);
						}
						else
						{
							unk_0xCED9E32812D6C7C7(&uVar0, 3);
							unk_0xCED9E32812D6C7C7(&uVar0, 4);
							unk_0xCED9E32812D6C7C7(&uVar0, 8);
							unk_0xCED9E32812D6C7C7(&uVar0, true);
							uParam0->f_1 = unk_0x1CD347D2BD906560(iParam2, uParam0->f_3, uVar0, -1, 1, uParam1);
						}
						unk_0xF1A23B343DFEDFD0(uParam1);
					}
				}
			}
			if (unk_0x2791155FB0769FE5(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}

void func_44(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0xA0F62C1038208492(Param0);
	if (unk_0xBCC73B466E2B2350(uVar0))
	{
		unk_0x62EB051F5ED6DD41(uVar0);
		while (!unk_0xEA02B859DE237081(uVar0))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x4EDE34FBADD967A6(0);
		unk_0xAED5221F05DAE55E(uVar0);
	}
}

int func_45(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return 0;
	}
	if (iParam1 <= 31)
	{
		return BitTest(*uParam0, iParam1);
	}
	return BitTest(uParam0->f_1, (iParam1 - 32));
}

bool func_46(var uParam0)
{
	if (!unk_0xE5965CDF24F93A9F(uParam0))
	{
		return 0;
	}
	return !unk_0x55B23FE400FCEA6B(uParam0, 0);
}

void func_47(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_6 = iParam1;
	func_48(&(uParam0->f_1), iParam2, iParam3);
}

void func_48(var uParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	if (bLocal_40)
	{
	}
	bVar0 = false;
	while (bVar0 < uParam0->f_3)
	{
		if (func_20((uParam0->f_2 + bVar0), -1))
		{
			iVar1++;
			func_39(uParam0, bVar0, 1);
			if (bLocal_40)
			{
			}
		}
		bVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
}

void func_49(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

void func_50()
{
	int iVar0;
	
	iLocal_607 = 0;
	Global_113386.f_10049.f_125.f_2 = 1;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Local_55[iVar0 /*11*/].f_3 = { func_51(iVar0, 0) };
		Local_55[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	Local_55[0 /*11*/].f_9 = 179.4746f;
	Local_55[1 /*11*/].f_9 = 198f;
	Local_55[2 /*11*/].f_9 = 104f;
	Local_55[3 /*11*/].f_9 = 321.5f;
	Local_55[4 /*11*/].f_9 = 256.25f;
	Local_55[5 /*11*/].f_9 = 286.5f;
	Local_55[6 /*11*/].f_9 = 0f;
	Local_55[6 /*11*/].f_6 = { 0f, 0f, 1f };
	Local_55[7 /*11*/].f_9 = -165.6051f;
	Local_55[8 /*11*/].f_9 = 91.5f;
	Local_55[9 /*11*/].f_9 = 116f;
	Local_55[10 /*11*/].f_9 = 15f;
	Local_55[11 /*11*/].f_9 = 305.5f;
	Local_55[12 /*11*/].f_9 = 0f;
	Local_55[13 /*11*/].f_9 = 95f;
	Local_55[14 /*11*/].f_9 = 40f;
	Local_55[15 /*11*/].f_9 = 40f;
	Local_55[16 /*11*/].f_9 = 40f;
	Local_55[17 /*11*/].f_9 = 40f;
	Local_55[18 /*11*/].f_9 = 40f;
	Local_55[19 /*11*/].f_9 = 40f;
	Local_55[20 /*11*/].f_9 = 40f;
	Local_55[21 /*11*/].f_6 = { 90f, 0f, 57f };
	Local_55[22 /*11*/].f_9 = 40f;
	Local_55[23 /*11*/].f_9 = 40f;
	Local_55[24 /*11*/].f_9 = 40f;
	Local_55[25 /*11*/].f_9 = 40f;
	Local_55[26 /*11*/].f_9 = 40f;
	Local_55[27 /*11*/].f_9 = 40f;
	Local_55[28 /*11*/].f_9 = 40f;
	Local_55[29 /*11*/].f_9 = 40f;
	Local_55[29 /*11*/].f_6 = { -24.35f, 15.74f, 14.31f };
	Local_55[30 /*11*/].f_9 = 40f;
	Local_55[31 /*11*/].f_9 = 40f;
	Local_55[32 /*11*/].f_9 = 40f;
	Local_55[33 /*11*/].f_9 = 40f;
	Local_55[34 /*11*/].f_6 = { 0f, 0f, -15f };
	Local_55[35 /*11*/].f_9 = 40f;
	Local_55[36 /*11*/].f_9 = 40f;
	Local_55[37 /*11*/].f_9 = 40f;
	Local_55[38 /*11*/].f_9 = 40f;
	Local_55[38 /*11*/].f_6 = { 20.18f, -0.87f, 20.46f };
	Local_55[39 /*11*/].f_6 = { 0f, 0f, -4.39f };
	Local_55[40 /*11*/].f_9 = 40f;
	Local_55[41 /*11*/].f_9 = 80f;
	Local_55[42 /*11*/].f_9 = 198f;
	Local_55[43 /*11*/].f_9 = 198f;
	Local_55[44 /*11*/].f_9 = 198f;
	Local_55[45 /*11*/].f_9 = 198f;
	Local_55[46 /*11*/].f_9 = 198f;
	Local_55[47 /*11*/].f_9 = 198f;
	Local_55[48 /*11*/].f_9 = 198f;
	Local_55[49 /*11*/].f_9 = 198f;
}

Vector3 func_51(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1219f, -3495.9f, 12.9448f;
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return 606.8925f, -3250.188f, 5.06951f;
			}
			else
			{
				return 634.5865f, -3232.79f, -16.5774f;
			}
			break;
		
		case 2:
			return 1590.6f, -2810.174f, 3.4494f;
			break;
		
		case 3:
			if (iParam1 == 1)
			{
				return 327.99f, -2757.61f, 4.99f;
			}
			else
			{
				return 338.4039f, -2762.106f, 42.6543f;
			}
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 1134.422f, -2607.024f, 14.77071f;
			}
			else
			{
				return 1133.688f, -2605.073f, 14.9729f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 368.9316f, -2118.533f, 15.40341f;
			}
			else
			{
				return 369.945f, -2116.756f, 16.1688f;
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				return 1741.82f, -1623.85f, 111.41f;
			}
			else
			{
				return 1742.024f, -1618.777f, 111.8313f;
			}
			break;
		
		case 7:
			return 287.7294f, -1444.4f, 45.5095f;
			break;
		
		case 8:
			return 17.5926f, -1213.207f, 28.3678f;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return -910.0172f, -1147.44f, 1.06785f;
			}
			else
			{
				return -900.3597f, -1165.551f, 31.8047f;
			}
			break;
		
		case 10:
			if (iParam1 == 1)
			{
				return 1237.728f, -1099.15f, 37.52579f;
			}
			else
			{
				return 1231.973f, -1102.308f, 34.4289f;
			}
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 87.69075f, 810.3736f, 210.1258f;
			}
			else
			{
				return 81.2213f, 814.0283f, 213.2917f;
			}
			break;
		
		case 12:
			if (iParam1 == 1)
			{
				return -1900.951f, 1389.582f, 218.1509f;
			}
			else
			{
				return -1907.515f, 1388.69f, 217.9728f;
			}
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 467.369f, -730.7552f, 26.36373f;
			}
			else
			{
				return 469.8529f, -730.8f, 26.3985f;
			}
			break;
		
		case 14:
			return 202.1081f, -569.7198f, 128.18f;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 163.0531f, -566.3394f, 21.029f;
			}
			else
			{
				return 159.39f, -563.82f, 21f;
			}
			break;
		
		case 16:
			if (iParam1 == 1)
			{
				return -1183.152f, -518.5386f, 38.53018f;
			}
			else
			{
				return -1182.538f, -525.5859f, 39.9114f;
			}
			break;
		
		case 17:
			return -228.0476f, -236.4184f, 49.1361f;
			break;
		
		case 18:
			return -407.7026f, -151.7918f, 63.5505f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -1169.397f, -56.76701f, 44.45705f;
			}
			else
			{
				return -1175.488f, -65.4649f, 44.6563f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return 1679.056f, 39.44059f, 160.7736f;
			}
			else
			{
				return 1684.664f, 40.7142f, 153.4074f;
			}
			break;
		
		case 21:
			if (iParam1 == 1)
			{
				return 1964.25f, 553.68f, 160.72f;
			}
			else
			{
				return 1965.58f, 555.99f, 160.79f;
			}
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 24.21706f, 637.1212f, 206.3897f;
			}
			else
			{
				return 22.4492f, 638.8155f, 189.6085f;
			}
			break;
		
		case 23:
			return 2901.204f, 796.1192f, 3.3556f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return -1531.895f, 870.3203f, 180.6775f;
			}
			else
			{
				return -1529.722f, 871.4257f, 180.6421f;
			}
			break;
		
		case 25:
			return -404.3191f, 1100.889f, 331.535f;
			break;
		
		case 26:
			return -2809.354f, 1449.643f, 99.928f;
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 3144.045f, 2184.413f, -5.2961f;
			}
			else
			{
				return 3144.045f, 2184.413f, -5.2961f;
			}
			break;
		
		case 28:
			return 815.7574f, 1850.879f, 120.1796f;
			break;
		
		case 29:
			return -1944.24f, 1941.07f, 162.8f;
			break;
		
		case 30:
			if (iParam1 == 1)
			{
				return -1452.23f, 2127.41f, 42.84f;
			}
			else
			{
				return -1436.87f, 2130.22f, 26.78f;
			}
			break;
		
		case 31:
			return 1367.413f, 2180.632f, 96.6914f;
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return 170.1652f, 2217.637f, 89.30811f;
			}
			else
			{
				return 172.1426f, 2220.131f, 89.7842f;
			}
			break;
		
		case 33:
			return 889.3209f, 2870.052f, 55.2834f;
			break;
		
		case 34:
			if (iParam1 == 1)
			{
				return 1980.2f, 2914.79f, 45.48f;
			}
			else
			{
				return 1963.55f, 2922.81f, 57.76f;
			}
			break;
		
		case 35:
			return -390.384f, 2963.26f, 18.2713f;
			break;
		
		case 36:
			return 71.6642f, 3279.368f, 30.3918f;
			break;
		
		case 37:
			return 1924.186f, 3471.256f, 50.3238f;
			break;
		
		case 38:
			return -583.1569f, 3580.375f, 266.2471f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return 2514.302f, 3789.519f, 52.077f;
			}
			else
			{
				return 2516.98f, 3789.35f, 53.79f;
			}
			break;
		
		case 40:
			if (iParam1 == 1)
			{
				return 1517.613f, 3803.926f, 30.95605f;
			}
			else
			{
				return 1486.047f, 3857.217f, 22.2905f;
			}
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -530.2739f, 4474.358f, 59.45993f;
			}
			else
			{
				return -528.8246f, 4440.644f, 31.7384f;
			}
			break;
		
		case 42:
			if (iParam1 == 1)
			{
				return 3815.055f, 4447.343f, 2.06631f;
			}
			else
			{
				return 3820.813f, 4441.683f, 1.8007f;
			}
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return -1946.95f, 4584.36f, 56.06f;
			}
			else
			{
				return -1943.055f, 4585.194f, 46.6362f;
			}
			break;
		
		case 44:
			return 2437.545f, 4779.959f, 33.5101f;
			break;
		
		case 45:
			return -1441.495f, 5414.888f, 23.3f;
			break;
		
		case 46:
			return 2196.251f, 5599.034f, 52.7129f;
			break;
		
		case 47:
			if (iParam1 == 1)
			{
				return -503.95f, 5673.55f, 51.24f;
			}
			else
			{
				return -503.2193f, 5665.61f, 48.8487f;
			}
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return -378.4192f, 6080.782f, 30.44296f;
			}
			else
			{
				return -381.291f, 6086.949f, 38.6147f;
			}
			break;
		
		case 49:
			return 440.9546f, 6459.642f, 27.7432f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_52(int iParam0)
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

void func_53()
{
	int iVar0;
	
	Global_113386.f_10049.f_125.f_2 = 0;
	iVar0 = 0;
	while (iVar0 < Local_55.f_0)
	{
		func_40(&(Local_55[iVar0 /*11*/].f_2));
		func_27(&(Local_55[iVar0 /*11*/].f_1));
		iVar0++;
	}
	if (func_58(&(Local_42.f_1)) || func_15(107) == 1)
	{
		func_57(107, 1);
		func_55();
		func_54(14);
	}
	unk_0xF1A23B343DFEDFD0(Local_42.f_7);
	unk_0xAFBDF6A5E54114C1();
}

int func_54(int iParam0)
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

void func_55()
{
	int iVar0;
	
	iVar0 = func_56(63);
	Global_2676732[iVar0 /*83*/] = 63;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_56(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2676732[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2676732[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_57(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_113386.f_9085.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_113386.f_9085.f_99.f_58[iParam0] = iParam1;
}

bool func_58(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

