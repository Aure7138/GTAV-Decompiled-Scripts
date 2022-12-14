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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	bool bVar1;
	
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	if (unk_0x55EEDBBFDC6E810F(3))
	{
		func_20();
	}
	unk_0xB65977CD1EC089B5(1);
	func_19(0);
	func_18();
	unk_0x40FAC93FBC68EC7E();
	while (!bVar1)
	{
		uVar0 = unk_0x48C5C63730C16B76();
		if (unk_0x4310A0DB886F9FED(unk_0x81A767A3C2720859(uVar0), "heist_ctrl_finale"))
		{
			bVar1 = true;
		}
	}
	unk_0x43B07F0C6524441F(uVar0);
	func_17();
	func_1(96.7f, -1288.1f, 28.1f, 104.5f, -1301f, 30f, 2f, 118.3f, -1309.7f, 29f, 120f, 1, 1, 1, 0, 0);
	func_20();
}

void func_1(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_2(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_2(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, var uParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	uVar0 = unk_0xE475C458F52F1781();
	if (unk_0x7DE17ACDD8BA2642(uVar0))
	{
		if (!unk_0x1AFE963DA61006ED(iVar0))
		{
			unk_0x85BAE84748AD1A23(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (unk_0xFBD273FDBCF0C5BD(iVar0, 0))
		{
			if (bParam18)
			{
				func_16(iVar0);
			}
			if (unk_0x9DC9E896F189AAA5(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { unk_0x30BE8A934C020461(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_13(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0xFBD273FDBCF0C5BD(iVar0, 0))
			{
				if (unk_0x091E6E360116B927(iVar0, joaat("taxi")))
				{
					if (unk_0xA66E176E5772E965(iVar0, -1, 0) != unk_0xC1A5EC5C986B98AD() && unk_0xA66E176E5772E965(iVar0, -1, 0) != 0)
					{
						if (unk_0x2E496FE654DA4166(Param0 + Param3 / Vector(2f, 2f, 2f), unk_0x30BE8A934C020461(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_4(iVar0, func_6(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_3(Param11))
				{
					if (unk_0xFBD273FDBCF0C5BD(iVar0, 0))
					{
						iVar13 = unk_0x504B9BB48D41C264(iVar0);
						unk_0xCC5870E2DA147475(iVar0, &Var4, &Var7);
						if (unk_0x2D92D1084D213DC4(iVar13))
						{
							Param11.f_0 = (Param11.f_0 + 3f);
							Param11.f_1 = (Param11.f_1 + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							Param11 = { Param11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							Param11 = { Param11 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var7.f_0 - Var4.f_0) > Param11.f_0)
						{
							bVar2 = false;
						}
						else if ((Var7.f_1 - Var4.f_1) > Param11.f_1)
						{
							bVar2 = false;
						}
						else if ((Var7.f_2 - Var4.f_2) > Param11.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0xFBD273FDBCF0C5BD(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x10DFA2EC4C030EB3(Param7, 5f, 0, 0, 0, 0, 0, 0, 0);
						unk_0x692C3FDAD7DB53CC(iVar0, uParam10);
						unk_0xC2E3C377D893C17A(iVar0, Param7, 1, 0, 0, 1);
						unk_0xCB8DD5B44DBC2DEB(iVar0, 1084227584);
						if (bParam17)
						{
							unk_0xC8EE2E23B410B65A(iVar0, 0, 1, 0);
							unk_0xC8104307D08190D0(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0x1AFE963DA61006ED(iVar0) || !unk_0xAE770DDB34967EC3(iVar0, 1))
						{
							unk_0x85BAE84748AD1A23(iVar0, 1, 1);
						}
						if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iVar0, 0))
						{
							unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), unk_0x30BE8A934C020461(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0x2728CF7242F08BD5(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				unk_0x25578EAEB8729E15(Param0, Param3, fParam6, 0, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0x7DE17ACDD8BA2642(iVar0))
				{
					if (unk_0x1AFE963DA61006ED(iVar0))
					{
						unk_0x0E4B6CF706BE8AA4(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0x1AFE963DA61006ED(iVar0))
			{
				unk_0x85BAE84748AD1A23(iVar0, 1, 0);
			}
			iVar14 = unk_0xA66E176E5772E965(iVar0, -1, 0);
			if (unk_0x7DE17ACDD8BA2642(iVar14) && !unk_0x66599E73DBA5A850(iVar14))
			{
				unk_0xC2E3C377D893C17A(iVar14, unk_0x30BE8A934C020461(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = unk_0xB47599824058F1C1(unk_0x504B9BB48D41C264(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = unk_0xA66E176E5772E965(iVar0, 0, 0);
				if (unk_0x7DE17ACDD8BA2642(iVar14) && !unk_0x66599E73DBA5A850(iVar14))
				{
					unk_0xC2E3C377D893C17A(iVar14, unk_0x30BE8A934C020461(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = unk_0xA66E176E5772E965(iVar0, 1, 0);
				if (unk_0x7DE17ACDD8BA2642(iVar14) && !unk_0x66599E73DBA5A850(iVar14))
				{
					unk_0xC2E3C377D893C17A(iVar14, unk_0x30BE8A934C020461(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = unk_0xA66E176E5772E965(iVar0, 2, 0);
				if (unk_0x7DE17ACDD8BA2642(iVar14) && !unk_0x66599E73DBA5A850(iVar14))
				{
					unk_0xC2E3C377D893C17A(iVar14, unk_0x30BE8A934C020461(iVar14, 1), 1, 0, 0, 1);
				}
			}
			unk_0x2728CF7242F08BD5(&iVar0);
		}
	}
}

int func_3(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_4(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x7DE17ACDD8BA2642(uParam0) || !unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_5(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_113648.f_7231[iVar9], 0))
		{
			if (unk_0x7B0F3D01B676C014(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_5(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_6()
{
	func_7();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_7()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_11(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_10(unk_0xC1A5EC5C986B98AD());
			if (func_9(iVar0) && (!func_8(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_9(Global_113648.f_2365.f_539.f_4321))
				{
					Global_113648.f_2365.f_539.f_4322 = Global_113648.f_2365.f_539.f_4321;
				}
				Global_113648.f_2365.f_539.f_4323 = iVar0;
				Global_113648.f_2365.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_4321 != 145)
			{
				Global_113648.f_2365.f_539.f_4323 = Global_113648.f_2365.f_539.f_4321;
			}
			return;
		}
	}
	Global_113648.f_2365.f_539.f_4321 = 145;
}

bool func_8(int iParam0)
{
	return Global_43257 == iParam0;
}

bool func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_11(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_11(int iParam0)
{
	if (func_9(iParam0))
	{
		return func_12(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_12(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

int func_13(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18[4];
	struct<2> Var31;
	struct<2> Var34;
	
	if (unk_0xFBD273FDBCF0C5BD(uParam0, 0))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_15(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.f_0 = -Var3.f_1;
		Var0.f_1 = Var3.f_0;
		Var0.f_2 = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		unk_0x1C97A6E4D8DA4B2F(unk_0x504B9BB48D41C264(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { unk_0x7394CB479CCA24AF(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { unk_0x7394CB479CCA24AF(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { unk_0x7394CB479CCA24AF(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { unk_0x7394CB479CCA24AF(iParam0, Var34.f_0, Var34.f_1, 0f) };
		if (((((((((((((((func_14(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_14(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_14(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_14(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_14(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_14(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_14(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_14(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_14(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_14(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_14(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_14(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_14(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_14(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_14(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_14(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_14(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0.f_0;
	fVar1 = Param0.f_1;
	fVar2 = Param3.f_0;
	fVar3 = Param3.f_1;
	fVar4 = Param6.f_0;
	fVar5 = Param6.f_1;
	fVar6 = Param9.f_0;
	fVar7 = Param9.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_15(struct<3> Param0)
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

void func_16(int iParam0)
{
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
		{
			if (unk_0x34DAE7F7DF2CC995(iParam0) <= 200f)
			{
				unk_0xA598BD64B909AA08(iParam0, 500f);
			}
			if (unk_0xF7B2B973FAF93B1B(iParam0) <= 700f)
			{
				unk_0xA598BD64B909AA08(iParam0, 900f);
			}
			if (unk_0x2935B4D6CE81318D(iParam0) < 200)
			{
				unk_0xA598BD64B909AA08(iParam0, 500f);
			}
		}
	}
}

void func_17()
{
	Global_112672 = 1;
}

void func_18()
{
	int iVar0;
	
	iVar0 = func_6();
	switch (iVar0)
	{
		case 0:
			unk_0x028B1EDDD6EC4C79("BS_2A_2B_INT", 12, 8);
			break;
		
		case 1:
			unk_0x028B1EDDD6EC4C79("BS_2A_2B_INT", 14, 8);
			break;
		
		case 2:
			unk_0x2A3302E8B9D69CC9("BS_2A_2B_INT", 8);
			break;
	}
	while (!unk_0x834B5C5F458D6972("BS_2A_2B_INT"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_19(int iParam0)
{
	Global_77348.f_138 = iParam0;
}

void func_20()
{
	func_25(24, 1);
	func_21(1, 0);
	unk_0x675D9C12C73D3DE7();
}

void func_21(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_63364)
	{
		Global_63364 = iParam1;
	}
	if (bParam0)
	{
		if ((func_24(0) && Global_78805.f_1 == 1) && func_23(Global_78805))
		{
		}
		else
		{
			Global_63362 = 1;
		}
	}
	if (Global_113648.f_9087 || func_24(0))
	{
		iVar0 = func_22();
		iVar1 = Global_91433[iVar0 /*5*/];
		uVar2 = Global_78828.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113648.f_9087)
			{
			}
			return;
		}
		if (BitTest(Global_91433[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_91433[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xECDAB41968FF21A8(&(Global_91433[iVar0 /*5*/].f_1), 4);
		unk_0xECDAB41968FF21A8(&Global_78807, 1);
		Global_78823 = uVar2;
		Global_78824 = unk_0xA5E11AF0A2B928C1();
	}
}

int func_22()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_91433[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_23(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_24(bool bParam0)
{
	if (!bParam0 && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_25(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_113648.f_9087.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_113648.f_9087.f_99.f_58[iParam0] = iParam1;
}

