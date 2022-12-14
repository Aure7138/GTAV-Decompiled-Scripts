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
	if (unk_0x9315DBF7D972F07A())
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
		unk_0x7653D561C9574763(2, 199, 1);
		unk_0x7653D561C9574763(2, 200, 1);
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
	unk_0xE4FA4FBF0BAFD2A8(0);
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
	if (BitTest(Global_2788035, 1))
	{
		unk_0xB0550BC91B0159D6(&Global_2788035, true);
		func_96(Global_2788034);
	}
	if (Local_160.f_61 != Global_2788165)
	{
		Local_160.f_61 = { Global_2788165 };
	}
	else
	{
		Local_160.f_61.f_1 = 0;
		Local_160.f_61.f_2 = 0;
	}
	if (!unk_0xF1EC2C71FD1371B8() && !func_95())
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
	unk_0xB0550BC91B0159D6(&Global_2788035, 4);
	unk_0xB0550BC91B0159D6(&(Local_160.f_60), true);
	unk_0xB0550BC91B0159D6(&(Local_160.f_60), 2);
	unk_0xB0550BC91B0159D6(&(Local_160.f_60), 3);
	unk_0xB0550BC91B0159D6(&(Local_160.f_60), 6);
	unk_0xB0550BC91B0159D6(&(Local_160.f_60), 7);
}

void func_3(var uParam0, var uParam1)
{
	struct<3> Var0;
	var uVar3;
	struct<3> Var4;
	
	func_9();
	Var0 = { unk_0x524171C8263E7C3E() };
	if ((((unk_0xF1EC2C71FD1371B8() || func_8()) || unk_0xF09A4F413B0D30EB(2, 199)) || unk_0x4C1B8C5717647539(2, 199)) || unk_0x26009F50A14AD073(2, 199))
	{
		unk_0x9C929B838435DB54(Var0.f_0, Var0.f_1);
		unk_0xC8813DFDECA7BB27(Var0.f_0, Var0.f_1, 0);
		if (unk_0xF1EC2C71FD1371B8() || func_8())
		{
			if (unk_0x12DD4A0B247D9B4D(unk_0x74248A89DFCAA77F()))
			{
				unk_0xFBBD8F124403B0F5(unk_0x74248A89DFCAA77F(), 255);
			}
		}
	}
	else if (unk_0x12DD4A0B247D9B4D(unk_0x74248A89DFCAA77F()))
	{
		unk_0xFBBD8F124403B0F5(unk_0x74248A89DFCAA77F(), 0);
	}
	unk_0x262D43EBE3CA4397(Var0.f_0, Var0.f_1);
	uVar3 = unk_0x0065A2CB8ECECAF1();
	if (unk_0x876B1078E90C91CB(uVar3))
	{
		unk_0x8D32379EC749B177(uVar3, 1);
	}
	Var4 = { unk_0x52BD0FA2342C7246(0) };
	Var4 = { func_7(Var4) };
	if (!unk_0x12DD4A0B247D9B4D(*uParam0))
	{
		*uParam1 = func_5(Var0, 0);
		unk_0x1A5B5BA56167D412(*uParam1, 425);
		unk_0x3430966AC4550BB9(*uParam1, 0);
		unk_0x94C2F928B167AA54(*uParam1, 4);
		unk_0xA582EE8380437B1B(*uParam1, func_4(2));
		unk_0xFF833B22CE9EBABD(*uParam1, 1, 11);
		unk_0x293A9399E902A33B(*uParam1, 0.54f);
		unk_0x7A610B2EC5DA34E7(*uParam1, 13 + 1);
		*uParam0 = func_5(Var0, 0);
		unk_0x1A5B5BA56167D412(*uParam0, 425);
		unk_0x3430966AC4550BB9(*uParam0, 0);
		unk_0x94C2F928B167AA54(*uParam0, 4);
		unk_0xA582EE8380437B1B(*uParam0, func_4(18));
		unk_0xFF833B22CE9EBABD(*uParam0, 1, 11);
		unk_0x293A9399E902A33B(*uParam0, 0.44f);
		unk_0x7A610B2EC5DA34E7(*uParam0, 13 + 1);
		unk_0x2AE77DBCBF631065(*uParam0, 1);
		unk_0xB02954D4F69B7A25(*uParam0, unk_0xF2DB717A73826179(unk_0xD12EFCAB87804BED(Var4.f_0, Var4.f_1)));
		unk_0x2AE77DBCBF631065(*uParam1, 1);
		unk_0xB02954D4F69B7A25(*uParam1, unk_0xF2DB717A73826179(unk_0xD12EFCAB87804BED(Var4.f_0, Var4.f_1)));
	}
	else
	{
		unk_0xFB7ACC9D9D6401A8(*uParam0, Var0);
		unk_0xB02954D4F69B7A25(*uParam0, unk_0xF2DB717A73826179(unk_0xD12EFCAB87804BED(Var4.f_0, Var4.f_1)));
		unk_0x94C2F928B167AA54(*uParam0, 5);
		unk_0xFB7ACC9D9D6401A8(*uParam1, Var0);
		unk_0xB02954D4F69B7A25(*uParam1, unk_0xF2DB717A73826179(unk_0xD12EFCAB87804BED(Var4.f_0, Var4.f_1)));
		unk_0x94C2F928B167AA54(*uParam1, 5);
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
	unk_0x2F046C9381D8E91B(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

var func_5(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xC5B823372B67998A(Param0);
	unk_0x293A9399E902A33B(uVar0, func_6(unk_0x9315DBF7D972F07A(), 1f, 1f));
	unk_0xAAD76B24A5282FDD(uVar0, iParam3);
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
	return unk_0x1A76A9A82BD6228C() != 0;
}

void func_9()
{
	Global_1574839 = 1;
}

void func_10(var uParam0, bool bParam1)
{
	if (unk_0xACC32B78196FBC2A(uParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_12(uParam0))
		{
			unk_0x3410421C60BF7143(1);
		}
		return;
	}
	if (!func_12(uParam0))
	{
		unk_0x3410421C60BF7143(1);
		func_11(uParam0);
	}
}

void func_11(var uParam0)
{
	unk_0xA83426F7CEDED182(uParam0);
	unk_0x89B545A74F93B1DD(0, 1, 1, -1);
}

bool func_12(var uParam0)
{
	unk_0xB65782D82090BB33(uParam0);
	return unk_0x73CB3406A86A3A02(0);
}

void func_13()
{
	if (BitTest(Global_2788035, 5))
	{
		unk_0xB0550BC91B0159D6(&Global_2788035, 5);
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
			if ((!*uParam1 || unk_0xB1C1E679BD17A4F0(2)) || unk_0xB1C1E679BD17A4F0(0))
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
	if (unk_0xD199EE48D2842EB1())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_18(unk_0x9E2D6C50374FCFA9(), 0))
		{
			return;
		}
	}
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x9417F1137725B4B3() == 0 || unk_0xD199EE48D2842EB1())
		{
			return;
		}
	}
	if (Global_23150.f_5160 != 0)
	{
		if (unk_0xB1C1E679BD17A4F0(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23150.f_5160)
			{
				if (Global_23150.f_5417[iVar1] != 363)
				{
					StringCopy(&(Global_23150.f_5162[iVar1 /*16*/]), unk_0x2018949B2C9FD96A(2, Global_23150.f_5417[iVar1], 1), 64);
				}
				else if (Global_23150.f_5430[iVar1] != 32)
				{
					StringCopy(&(Global_23150.f_5162[iVar1 /*16*/]), unk_0x19214818F925D149(2, Global_23150.f_5430[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_23150.f_5161 = 0;
		}
		if (!Global_23150.f_5161)
		{
			unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xCA5D23E5F0F0306F((1f - (Global_23150.f_5472 / 100f)));
			unk_0x6F06CF0E9AB02847();
			if (unk_0x8FE9914D4872D601())
			{
				unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xD7D6BA6E36AEC182(1);
				unk_0x6F06CF0E9AB02847();
			}
			iVar1 = 0;
			while (iVar1 < Global_23150.f_5160)
			{
				if (unk_0x2E87280918B16506(&(Global_23150.f_5355[iVar1 /*4*/])) != unk_0x2E87280918B16506("PREV"))
				{
					unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x4F47E317C74C543B(iVar1);
					func_17(&(Global_23150.f_5162[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x2E87280918B16506(&(Global_23150.f_5355[iVar2 /*4*/])) == unk_0x2E87280918B16506("PREV"))
					{
						func_17(&(Global_23150.f_5162[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23150.f_5404[iVar1] == -1)
					{
						func_16(&(Global_23150.f_5355[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23150.f_5404[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x4ADC8B166E139423(&(Global_23150.f_5355[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x28594D0D61DB1278(iVar3, 70);
						}
						else
						{
							unk_0x2AE954BA77A66307(iVar3);
						}
						unk_0xD1D4F8D5470AFA4C();
					}
					if (unk_0x8FE9914D4872D601())
					{
						if (Global_23150.f_5417[iVar1] != 363 && BitTest(Global_23150.f_5443, iVar1))
						{
							unk_0xD7D6BA6E36AEC182(1);
							unk_0x4F47E317C74C543B(Global_23150.f_5417[iVar1]);
						}
						else
						{
							unk_0xD7D6BA6E36AEC182(0);
							unk_0x4F47E317C74C543B(363);
						}
					}
					unk_0x6F06CF0E9AB02847();
				}
				iVar1++;
			}
			if (unk_0x2E87280918B16506(&(Global_4539885.f_16)) != unk_0x2E87280918B16506(""))
			{
				unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x4F47E317C74C543B(Global_23150.f_5160);
				func_17(&Global_4539885);
				if (Global_4539885.f_20 == -1)
				{
					func_16(&(Global_4539885.f_16));
				}
				else
				{
					iVar4 = Global_23150.f_5404[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x4ADC8B166E139423(&(Global_4539885.f_16));
					if (bParam5)
					{
						unk_0x28594D0D61DB1278(iVar4, 70);
					}
					else
					{
						unk_0x2AE954BA77A66307(iVar4);
					}
					unk_0xD1D4F8D5470AFA4C();
				}
				unk_0x6F06CF0E9AB02847();
			}
			unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(80);
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23150.f_5473)
			{
				unk_0x4F47E317C74C543B(1);
			}
			else
			{
				unk_0x4F47E317C74C543B(0);
			}
			unk_0x6F06CF0E9AB02847();
			Global_23150.f_5161 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23150.f_5160)
		{
			if (Global_23150.f_5404[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x4F47E317C74C543B(iVar1);
					unk_0x4ADC8B166E139423(&(Global_23150.f_5355[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x28594D0D61DB1278(iParam2, 70);
					}
					else
					{
						unk_0x2AE954BA77A66307(iParam2);
					}
					unk_0xD1D4F8D5470AFA4C();
					unk_0x6F06CF0E9AB02847();
				}
			}
			iVar1++;
		}
		if (Global_4539885.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x4F47E317C74C543B(iVar1);
				unk_0x4ADC8B166E139423(&(Global_4539885.f_16));
				if (bParam5)
				{
					unk_0x28594D0D61DB1278(iParam2, 70);
				}
				else
				{
					unk_0x2AE954BA77A66307(iParam2);
				}
				unk_0xD1D4F8D5470AFA4C();
				unk_0x6F06CF0E9AB02847();
			}
		}
		unk_0xA5AAB00FA8C570A4(76, 66);
		unk_0x98F560BC13E5293F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23150.f_8808)
			{
				unk_0xE73F8CB95153F5B1(15, 0f, -0.0375f);
				Global_23150.f_8808 = 1;
			}
		}
		else if (Global_23150.f_8808)
		{
			unk_0x4FEF096D3AB4AA8C(15);
			Global_23150.f_8808 = 0;
		}
		unk_0xB5A50A903B9AB61B();
		if (Global_23150.f_5446)
		{
			unk_0xA5AAB00FA8C570A4(82, 66);
			unk_0x98F560BC13E5293F(0f, 0f, 0f, 0f);
			unk_0x694170BB080C08FF(Global_23150.f_6051[iVar0 /*10*/], Global_23150.f_5444, Global_23150.f_5445, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xB5A50A903B9AB61B();
		}
		else
		{
			unk_0xC4353D240DCE9533(Global_23150.f_6051[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_16(var uParam0)
{
	unk_0x4ADC8B166E139423(uParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_17(var uParam0)
{
	unk_0x341872E4D54CD053(uParam0);
}

bool func_18(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_19(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853348[iParam0 /*834*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			bVar0 = unk_0x0E40F846A70BA3EC(iParam0) == 8;
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
	if (Global_1575038[iVar1] == 1)
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
	
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	if (func_22())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0xC81489026785778A(&Var0);
		if (Global_20211 == 0)
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
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_23(bool bParam0, bool bParam1)
{
	if (Global_2703735.f_1571.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xE9E8955A780DDA01() || (func_25(8, -1) && func_24() != 65)) || (unk_0x1A76A9A82BD6228C() != 0 && !bParam1)) || (unk_0x04458B4E5D9E466A() && !bParam0)) || unk_0x06C559386AD19942()) || Global_78579) || Global_23150.f_8807) || unk_0x3E6C9DAD84CEFED1()) || Global_100493.f_1458)
	{
		return 0;
	}
	return 1;
}

int func_24()
{
	return Global_1574991;
}

var func_25(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1648034.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1648034.f_1048, iParam0);
}

int func_26(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x9315DBF7D972F07A() && unk_0xDD50B5A22807BAD4())
		{
			iParam2 = unk_0x5C5CE5291FB79534();
		}
	}
	StringCopy(&cVar0, unk_0x05CBA41180F5D521(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x2E87280918B16506(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_23150.f_6112[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23150.f_6112[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23150.f_6112[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_27(int iParam0)
{
	Global_1649593.f_1163 = iParam0;
}

void func_28(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x2018949B2C9FD96A(2, iParam0, 1);
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sVar0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xCED9E32812D6C7C7(&(Global_23150.f_5443), Global_23150.f_5160);
	}
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = iParam0;
	Global_23150.f_5430[Global_23150.f_5160] = 32;
	Global_23150.f_5160++;
}

void func_29(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x19214818F925D149(2, iParam0, 1);
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sVar0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	unk_0xB0550BC91B0159D6(&(Global_23150.f_5443), Global_23150.f_5160);
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = 363;
	Global_23150.f_5430[Global_23150.f_5160] = iParam0;
	Global_23150.f_5160++;
}

void func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_23150.f_5160 = 0;
	Global_23150.f_5161 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_23150.f_5355[iVar0 /*4*/]), "", 16);
		Global_23150.f_5404[iVar0] = -1;
		Global_23150.f_5417[iVar0] = 363;
		Global_23150.f_5430[iVar0] = 32;
		iVar0++;
	}
	Global_23150.f_5443 = 0;
	StringCopy(&(Global_4539885.f_16), "", 16);
	Global_4539885.f_20 = -1;
	if (unk_0x8FE9914D4872D601())
	{
		if (!func_26(&iVar1, 0, iParam0))
		{
			return;
		}
		if (unk_0x0347CCBD719C8ADC(Global_23150.f_6051[iVar1 /*10*/]))
		{
			unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
			unk_0xD7D6BA6E36AEC182(0);
			unk_0x6F06CF0E9AB02847();
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
	StringCopy(&(Global_23150.f_6026[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xACC32B78196FBC2A(&(Global_23150.f_6026[iVar0 /*4*/])))
	{
		unk_0x249A0D3C5714BCF4(&(Global_23150.f_6026[iVar0 /*4*/]), 9);
		Global_23150.f_6019[iVar0] = 1;
		if (!unk_0x5FABFB823FD821D4(&(Global_23150.f_6026[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xA9911C122B3210B5("CommonMenu", 0);
	Global_23150.f_6005[iVar0] = 1;
	if (!unk_0x9D4AFED2949F7082("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xA9911C122B3210B5("MPShopSale", 0);
		Global_23150.f_6012[iVar0] = 1;
		if (!unk_0x9D4AFED2949F7082("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23150.f_6051[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_32(&(Global_23150.f_6051[iVar0 /*10*/]));
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
			if (!unk_0x0347CCBD719C8ADC(*uParam0))
			{
				*uParam0 = unk_0x528279F3F1EEF869(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x0347CCBD719C8ADC(*uParam0))
					{
						uParam0->f_8 = unk_0x320D1840B6DAA1CC();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x320D1840B6DAA1CC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x0347CCBD719C8ADC(*uParam0))
			{
				uParam0->f_8 = unk_0x320D1840B6DAA1CC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x0347CCBD719C8ADC(*uParam0))
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
		iVar0 = unk_0x607B649F72D20B6A();
		if (Local_160.f_56 != iVar0)
		{
			unk_0x5C3549D308EC0B7F("eyeinthesky");
			Local_160.f_56 = unk_0x607B649F72D20B6A();
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
	else if (!BitTest(Local_160.f_60, 5) && !unk_0xACC32B78196FBC2A(&(Local_64.f_80)))
	{
		func_35(&(Local_64.f_80));
	}
}

void func_35(var uParam0)
{
	if (unk_0xACC32B78196FBC2A(uParam0))
	{
		return;
	}
	if (BitTest(Local_160.f_60, 5))
	{
	}
	else
	{
		unk_0x9E4A185A00C358E1(uParam0);
		unk_0xCED9E32812D6C7C7(&(Local_160.f_60), 5);
	}
}

void func_36()
{
	if (BitTest(Local_160.f_60, 5))
	{
		unk_0x027F803A942FB98F();
		unk_0xB0550BC91B0159D6(&(Local_160.f_60), 5);
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
	if (!unk_0x0347CCBD719C8ADC(Local_160.f_36))
	{
		Local_160.f_36 = unk_0x528279F3F1EEF869(Local_64.f_86.f_1);
		return;
	}
	Var0 = { unk_0xE42645792657F001(Local_160.f_0, 2) };
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
			func_38(Local_160.f_36, 0f, unk_0x703CB0B4057DDDF5(Local_160.f_0), Local_64.f_4, Local_64.f_5, Var0.f_2);
			break;
	}
	unk_0x2E04B7B46A3670E5(0);
	unk_0xC4353D240DCE9533(Local_160.f_36, 255, 255, 255, 0, 0);
}

void func_38(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	unk_0xEA5DEA46C3EE64D3(uParam0, "SET_ALT_FOV_HEADING");
	unk_0xCA5D23E5F0F0306F(fParam1);
	unk_0xCA5D23E5F0F0306F(fParam2);
	unk_0xCA5D23E5F0F0306F(fParam5);
	unk_0x6F06CF0E9AB02847();
}

void func_39(var uParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, "SET_WEAPON_VALUES");
	unk_0x4F47E317C74C543B(uParam1);
	unk_0x4F47E317C74C543B(uParam2);
	unk_0x4F47E317C74C543B(uParam3);
	unk_0x6F06CF0E9AB02847();
}

void func_40(var uParam0, int iParam1)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, "SET_ZOOM_VISIBLE");
	unk_0xD7D6BA6E36AEC182(uParam1);
	unk_0x6F06CF0E9AB02847();
}

void func_41()
{
	struct<4> Var0;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	
	if (Local_64.f_94 != 0)
	{
		Local_160.f_4 = { unk_0x6B62510F212526DC(Local_64.f_95, 1) };
		Local_160.f_4.f_3 = { unk_0x63A8BF5E6C2BF85C(Local_64.f_95, 2) };
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
	Local_160.f_4.f_6 = { unk_0x97A9BB81C66772B5(Local_160.f_0) };
	Local_160.f_4.f_9 = { unk_0xE42645792657F001(Local_160.f_0, 2) };
}

void func_42(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, char* sParam7, int iParam8, char* sParam9, int iParam10, char* sParam11, float fParam12, struct<3> Param13, int iParam16, bool bParam17)
{
	float fVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	float fVar4;
	
	if (unk_0xACC32B78196FBC2A(uParam0) || unk_0x70F555A7CCF10659(uParam0, 0, -1))
	{
		if (fParam12 != 0f)
		{
			if (iParam4 != -1)
			{
				if (unk_0x78D9ADD511FEAD8B(iParam4))
				{
					unk_0x91DFC8F68F6D9B05(iParam4, uParam5, uParam1, 1);
				}
				unk_0x57973ADDF2BFAA90(iParam4, "Ctrl", fParam12);
				if (fParam12 < 0f)
				{
					unk_0x57973ADDF2BFAA90(iParam4, "Dir", -1f);
				}
				else
				{
					unk_0x57973ADDF2BFAA90(iParam4, "Dir", 1f);
				}
			}
		}
		else if (iParam4 != -1)
		{
			if (!unk_0x78D9ADD511FEAD8B(iParam4))
			{
				unk_0xF889BDFCC181BA9F(iParam4);
			}
		}
		fVar0 = unk_0x652D2EEEF1D3E62C(Param13);
		if (fVar0 > 0f)
		{
			if (iParam2 != -1)
			{
				if (unk_0x78D9ADD511FEAD8B(iParam2))
				{
					unk_0x91DFC8F68F6D9B05(iParam2, uParam3, sParam1, 1);
				}
				unk_0x57973ADDF2BFAA90(iParam2, "Ctrl", fVar0);
			}
		}
		else if (iParam2 != -1)
		{
			if (!unk_0x78D9ADD511FEAD8B(iParam2))
			{
				unk_0xF889BDFCC181BA9F(iParam2);
			}
		}
		if (iParam6 != -1)
		{
			if (unk_0x78D9ADD511FEAD8B(iParam6))
			{
				unk_0x91DFC8F68F6D9B05(iParam6, uParam7, sParam1, 1);
			}
		}
		uVar1 = unk_0xE2D3D51028F0428A();
		if (unk_0xD5C6B5E3B93A5EDC(uVar1, 0))
		{
			uVar2 = unk_0xB3FF0049C1FD38EC(uVar1, 0);
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
				fVar4 = unk_0xBBDA792448DB5A89(unk_0x72649CAA101B626C(uVar2));
				bVar3 = (IntToFloat(iParam16) / fVar4) > 0.1f;
			}
			if (bVar3)
			{
				if (unk_0x78D9ADD511FEAD8B(iParam8))
				{
					unk_0x91DFC8F68F6D9B05(iParam8, uParam9, uParam9, 1);
				}
			}
		}
		if (iParam10 != -1)
		{
			if ((IntToFloat(unk_0x0CF63873D754B965(uVar1)) / unk_0xBBDA792448DB5A89(unk_0x72649CAA101B626C(uVar1))) < 0.15f || (IntToFloat(unk_0x0CF63873D754B965(uVar2)) / unk_0xBBDA792448DB5A89(unk_0x72649CAA101B626C(uVar2))) < 0.15f)
			{
				if (unk_0x78D9ADD511FEAD8B(iParam10))
				{
					unk_0x91DFC8F68F6D9B05(iParam10, uParam11, sParam1, 1);
				}
			}
			else if (!unk_0x78D9ADD511FEAD8B(iParam10))
			{
				unk_0xF889BDFCC181BA9F(iParam10);
			}
		}
	}
}

void func_43(var uParam0, struct<3> Param1, struct<3> Param4, var uParam7)
{
	unk_0x3FB84450A94CB528(uParam0, uParam7, Param1, 1);
	unk_0x93150D31CE38FE75(uParam0, Param4 + unk_0x63A8BF5E6C2BF85C(uParam7, 2), 2);
}

void func_44(var uParam0, struct<3> Param1, struct<3> Param4)
{
	unk_0xDEE4F5F0B93BE664(uParam0, Param1);
	unk_0x93150D31CE38FE75(uParam0, Param4, 2);
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
	
	fVar0 = unk_0x703CB0B4057DDDF5(uParam0);
	Var1.f_0 = -fVar0;
	Var1.f_1 = { -*uParam1 };
	fVar5 = unk_0x159F9B5A2920DF4E(0, 39);
	Var6 = { -Vector(unk_0x1EC2077A4D963881(0, 290), 0f, unk_0x1EC2077A4D963881(0, 291)) };
	if (unk_0x3A76A0944BE2C291(2))
	{
		fParam8 = (fParam8 * 8f);
	}
	else
	{
		if (unk_0x48053974ED6F63CE(fVar5) < 0.06f)
		{
			fVar5 = 0f;
		}
		if (unk_0x652D2EEEF1D3E62C(Var6) < 0.06f)
		{
			Var6 = { 0f, 0f, 0f };
		}
	}
	fVar9 = unk_0x51109C28352EC9A3();
	fVar10 = func_49((fVar0 + ((fVar5 * fParam9) * fVar9)), Param2.f_4, Param2.f_5);
	unk_0x0A18C027350D3C19(uParam0, fVar10);
	unk_0x74789DA66781DB64(uParam0, 0.01f);
	fVar11 = ((fVar10 - 5f) / 42f);
	unk_0xE776D70A603C3C81(1f);
	unk_0xB27951EAA6BC6646(fVar11);
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
	
	if (unk_0xB4C854DD86E40FDA(joaat("am_mp_drone")) < 1)
	{
		if (!Local_160.f_29.f_5)
		{
			Local_160.f_29.f_5 = 1;
		}
		if (!func_65(4, 0f, 0f, 0f, Local_160.f_4.f_6, 0f, 0f, 0f))
		{
			if (func_64())
			{
				unk_0x91DFC8F68F6D9B05(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			}
			return;
		}
	}
	if (Local_160.f_29)
	{
		if (unk_0xA829C9A2767AC8EF())
		{
			if (Local_160.f_29.f_1)
			{
				if (func_62(unk_0x9E2D6C50374FCFA9()))
				{
					unk_0x5A7ACD1CDF509B0D(250);
					unk_0xD336F8D9637B963F(Local_160.f_40.f_13.f_2, Local_160.f_40.f_13.f_1, Local_160.f_29.f_2, Local_160.f_40.f_13, 1, 500, 0);
					Local_160.f_29.f_1 = 0;
					Local_160.f_29 = 0;
				}
			}
			else
			{
				Local_160.f_29.f_1 = 1;
				func_61(&(Local_160.f_17), 0, 0);
				unk_0xCED9E32812D6C7C7(&Global_2788035, 0);
				func_58(3f, 100f, &(Local_160.f_29.f_2), &uVar0, &uVar3, &Var6);
				func_57(1);
				func_55(Local_160.f_29.f_2, Var6);
			}
		}
	}
	if (func_54() || Local_160.f_29)
	{
		unk_0xCED9E32812D6C7C7(&(Local_160.f_60), 1);
		unk_0xCED9E32812D6C7C7(&(Local_160.f_60), 2);
		unk_0xCED9E32812D6C7C7(&(Local_160.f_60), 3);
		if (!Local_160.f_29)
		{
			unk_0xCED9E32812D6C7C7(&(Local_160.f_60), 6);
			unk_0xCED9E32812D6C7C7(&(Local_160.f_60), 7);
		}
		return;
	}
	if (func_64())
	{
		if (func_52(&(Local_160.f_17), Local_64.f_8.f_2, 0))
		{
			Local_160.f_29 = 1;
			unk_0x859006DB870314C5(250);
		}
		else
		{
			unk_0x91DFC8F68F6D9B05(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
	if (unk_0x9315DBF7D972F07A() && !bParam2)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_53(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x9315DBF7D972F07A() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				*uParam0 = unk_0xE75390F3CA208D5E();
			}
		}
		else
		{
			*uParam0 = unk_0x320D1840B6DAA1CC();
		}
		uParam0->f_1 = 1;
	}
}

bool func_54()
{
	return BitTest(Global_1958711, 5);
}

void func_55(struct<3> Param0, struct<3> Param3)
{
	if (!func_56(Global_1958711.f_13, Param0, 0))
	{
		Global_1958711.f_13 = { Param0 };
		Param3 = { Param3 + Vector(0f, -180f, 180f) };
		Global_1958711.f_16 = { Param3 };
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
		if (!BitTest(Global_1958711.f_2, 4))
		{
			Global_1958711.f_2 = 0;
			unk_0xCED9E32812D6C7C7(&(Global_1958711.f_2), 4);
		}
	}
	else if (BitTest(Global_1958711.f_2, 4))
	{
		unk_0xB0550BC91B0159D6(&(Global_1958711.f_2), 4);
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
		*uParam5 = { unk_0xE42645792657F001(Local_160.f_0, 2) };
		*uParam4 = { func_7(*uParam5) };
		*uParam2 = { Local_160.f_4.f_6 + Vector(fParam0, fParam0, fParam0) * *uParam4 };
		*uParam3 = { func_60(*uParam2, fParam1) };
	}
	else
	{
		Var0 = { func_7(unk_0xE42645792657F001(Local_160.f_0, 2)) };
		Var3 = { unk_0xCACAD935C0BEE14F(Local_64.f_95, Local_64.f_88) };
		Var6 = { unk_0x851CFDE0CBC150EC(Local_64.f_95, Local_64.f_74.f_1[0]) };
		Var9 = { Var6 - Var3 };
		*uParam2 = { Var6 };
		iVar12 = 0;
		fVar13 = func_59(Var9, Var0);
		iVar14 = 1;
		while (iVar14 <= (Local_64.f_74 - 1))
		{
			Var6 = { unk_0x851CFDE0CBC150EC(Local_64.f_95, Local_64.f_74.f_1[iVar14]) };
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
		*uParam5 = { unk_0x9C668C5B3EFA1DEC(Local_64.f_95, Local_64.f_74.f_1[iVar12]) };
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
	
	Var0 = { unk_0x52BD0FA2342C7246(2) };
	Var3 = { func_7(Var0) };
	return Param0 + Vector(fParam3, fParam3, fParam3) * Var3;
}

void func_61(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x9315DBF7D972F07A() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x0A89FDFA763DCAED();
		}
		else
		{
			*uParam0 = unk_0xE75390F3CA208D5E();
		}
	}
	else
	{
		*uParam0 = unk_0x320D1840B6DAA1CC();
	}
	uParam0->f_1 = 1;
}

int func_62(int iParam0)
{
	if (iParam0 != func_63())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_348, 26);
	}
	return 0;
}

int func_63()
{
	return -1;
}

bool func_64()
{
	return (BitTest(Global_2788035, 4) || unk_0xF01464D7AF0B7347(0, 229));
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
	if (!unk_0x87C0DA419F19FF57(iLocal_50) && !unk_0x095032C22DEE1587(joaat("am_mp_drone")))
	{
		unk_0xAF76A37C80EFD1D8("AM_MP_DRONE");
	}
	if ((unk_0x095032C22DEE1587(joaat("am_mp_drone")) && !unk_0x87C0DA419F19FF57(iLocal_50)) && !func_69())
	{
		Var0.f_1 = -1;
		Var0.f_0 = 0;
		Var0.f_2 = { Param1 };
		Var0.f_5 = { Param4 };
		Var0.f_8 = { Param7 };
		Var0.f_1 = iParam0;
		if (unk_0xB4C854DD86E40FDA(joaat("am_mp_drone")) < 1)
		{
			if (!unk_0x7B0A672B0283F03E("AM_MP_DRONE", Var0.f_0, 1, 0))
			{
				iLocal_50 = unk_0xC4BB298BD441BE78(joaat("am_mp_drone"), &Var0, 12, 1424);
				unk_0xD48AC12D763BBE7F(joaat("am_mp_drone"));
				func_67(&uLocal_48);
			}
			else
			{
				return 1;
			}
		}
	}
	else if (unk_0x87C0DA419F19FF57(iLocal_50) && !func_69())
	{
		return 1;
	}
	return 0;
}

void func_66(bool bParam0)
{
	if (bParam0)
	{
		if (unk_0xB4C854DD86E40FDA(unk_0x2E87280918B16506("AM_MP_DRONE")) > 0)
		{
			if (!func_69())
			{
				unk_0xCED9E32812D6C7C7(&Global_1958711, 0);
			}
		}
	}
	else if (func_69())
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, false);
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
	return BitTest(Global_1958711, 0);
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
			if (unk_0x04D9F44466CBF3CA(Local_160.f_22.f_4))
			{
				uVar2 = unk_0x31EB55FAEEE9C0F5(Local_160.f_22.f_4);
				unk_0x8955D96A20FF3811(uVar2, 2);
			}
			func_76(&(Local_160.f_22.f_5));
			func_75(&(Local_160.f_22.f_6), "Bleep", "DLC_IE_Steal_EITS_Sounds", 1);
			iVar1 = 6;
		}
		else
		{
			if (unk_0x04D9F44466CBF3CA(Local_160.f_22.f_4))
			{
				uVar3 = unk_0x31EB55FAEEE9C0F5(Local_160.f_22.f_4);
				unk_0x8955D96A20FF3811(uVar3, 1);
			}
			func_75(&(Local_160.f_22.f_5), "VULKAN_LOCK_ON_AMBER", 0, 1);
			iVar1 = 9;
		}
		func_72(Local_160.f_22.f_4, !bVar0, iVar1);
		if (func_64())
		{
			if (Local_64.f_16 != 0 && !unk_0x0152AA00FA3130F1(Local_64.f_16))
			{
				unk_0x91DFC8F68F6D9B05(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				return;
			}
			if (bVar0 && func_52(&(Local_160.f_17), Local_64.f_8.f_2, 0))
			{
				func_61(&(Local_160.f_17), 0, 0);
				func_71(1f, &Var4, &Var7);
				unk_0x633F41B5CEA31CC2(Var4, Var7, Local_64.f_8.f_3, 1, Local_64.f_8, unk_0xE2D3D51028F0428A(), 1, 1, -1082130432, Local_64.f_95, 0, 0, Local_160.f_22, 1, 0, Local_64.f_94 != 0, 0);
				unk_0xD336F8D9637B963F(Local_160.f_40.f_13.f_2, Local_160.f_40.f_13.f_1, Var4, Local_160.f_40.f_13, 1, 500, 0);
			}
			else
			{
				unk_0x91DFC8F68F6D9B05(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
	
	if (!unk_0x9D4AFED2949F7082("helicopterhud"))
	{
		return;
	}
	unk_0x2E04B7B46A3670E5(1);
	Var2 = { unk_0x6B62510F212526DC(uParam0, 1) };
	unk_0x691736A810DA2BD4(Var2, 0);
	fVar0 = func_74(uParam0, Local_160.f_0, 0.5f);
	fVar0 = func_49(fVar0, 0.015f, fVar0);
	fVar1 = (fVar0 * unk_0xF4CC509EEB975296(0));
	unk_0x2F046C9381D8E91B(iParam2, &uVar5, &uVar6, &uVar7, &iVar8);
	uVar9 = func_73((bParam1 && (unk_0x320D1840B6DAA1CC() % 300) < 150), unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar8) / 4f)), iVar8);
	unk_0xEBF08DA37D86CD05("helicopterhud", "hud_outline", 0f, 0f, fVar0, fVar1, 0f, uVar5, uVar6, uVar7, uVar9, 0, 0);
	unk_0xCCC0A2EF3DC76A34();
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
	
	Var0 = { unk_0x97A9BB81C66772B5(uParam1) };
	Var3 = { unk_0x6B62510F212526DC(uParam0, 1) };
	fVar6 = unk_0x987A5F1E1A67E3C0(Var0, Var3, 1);
	fVar7 = unk_0x703CB0B4057DDDF5(uParam1);
	fVar8 = 1f;
	fVar9 = (fVar8 / unk_0x06A2016215B8E171((fVar7 / 2f)));
	fVar10 = ((fVar9 * fParam2) / fVar6);
	return fVar10;
}

void func_75(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (*uParam0 == -1)
	{
		*uParam0 = unk_0xA9ADCC8D104AA552();
		unk_0x91DFC8F68F6D9B05(*uParam0, sParam1, sParam2, iParam3);
	}
}

void func_76(var uParam0)
{
	if (*uParam0 != -1)
	{
		unk_0xF889BDFCC181BA9F(*uParam0);
		unk_0xCDBCC1BC1184B002(*uParam0);
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
		if (((Local_160.f_22.f_4 != Local_160.f_22 || unk_0x55B23FE400FCEA6B(Local_160.f_22, 0)) || func_78(Local_160.f_22) > 0.04f) || unk_0x652D2EEEF1D3E62C(unk_0x6B62510F212526DC(Local_160.f_22, 1) - Local_160.f_4.f_6) > Local_64.f_8.f_4)
		{
			func_83();
		}
	}
}

float func_78(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { unk_0x6B62510F212526DC(uParam0, 1) };
	if (!unk_0xF00526C1598A6868(Var0, &Var0, &(Var0.f_1)))
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
	
	Var0 = { unk_0x97A9BB81C66772B5(Local_160.f_0) };
	Var3 = { unk_0x6B62510F212526DC(uParam0, 1) };
	Var3 = { Var3 + Vector(2f, 2f, 2f) * func_80(Var3 - Var0) };
	Local_160.f_22.f_1 = unk_0x1E4C19DC2AD86A18(Var0, Var3, 511, 0, 4);
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
	
	iVar0 = unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9());
	bVar1 = iVar0 != -1;
	fVar3 = 0.005f;
	bVar4 = false;
	fVar5 = (fParam0 * fParam0);
	iVar6 = 0;
	while (iVar6 < 32)
	{
		iVar7 = iVar6;
		uVar8 = unk_0x407E03586628E458(iVar7);
		if (((!unk_0x0D01086B38EC256F(iVar7) || !func_82(iVar7, 1, 1)) || (bVar1 && unk_0x0E40F846A70BA3EC(iVar7) == iVar0)) || unk_0xA8CEACB4F35AE058(Local_160.f_4.f_6 - unk_0x6B62510F212526DC(uVar8, 1)) > fVar5)
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
		uVar10 = unk_0x407E03586628E458(iVar2);
		if (unk_0xD5C6B5E3B93A5EDC(uVar10, 0))
		{
			iVar11 = unk_0xB3FF0049C1FD38EC(uVar10, 0);
			if (!unk_0x55B23FE400FCEA6B(iVar11, 0))
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
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x3583A42587543334(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
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
	iVar8 = unk_0xB2D581BD7446BBE9(*uParam0, &iVar0, &uVar4, &uVar1, &iVar7);
	if (!unk_0x04D9F44466CBF3CA(iVar7))
	{
		if (unk_0x9044EDB8A7BF67B4(iVar7))
		{
			uVar9 = unk_0x28AA31872A651BC7(iVar7);
			if (unk_0xD5C6B5E3B93A5EDC(uVar9, 0))
			{
				iVar7 = unk_0xB3FF0049C1FD38EC(uVar9, 0);
			}
		}
	}
	if (iVar8 == 2)
	{
		if (iVar0 != 0)
		{
			if (unk_0xE5965CDF24F93A9F(iVar7))
			{
				*uParam2 = (iParam1 == iVar7 && !unk_0x55B23FE400FCEA6B(iVar7, 0));
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
	
	unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 452, 1);
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
		if (unk_0xF01464D7AF0B7347(0, 225))
		{
			func_90();
		}
	}
	if (!bVar1 && func_89())
	{
		Local_160.f_19.f_2 = (Local_160.f_19.f_2 + unk_0xF2DB717A73826179((unk_0x51109C28352EC9A3() * 1000f)));
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
			unk_0x633F41B5CEA31CC2(Var6, Var9, Local_64.f_8.f_3, 0, Local_64.f_8, unk_0xE2D3D51028F0428A(), 1, 1, -1082130432, Local_64.f_95, 0, 0, 0, 1, 0, Local_64.f_94 != 0, 0);
			if (Local_160.f_40.f_13.f_2 != -1 && unk_0x78D9ADD511FEAD8B(Local_160.f_40.f_13.f_2))
			{
				unk_0xD336F8D9637B963F(Local_160.f_40.f_13.f_2, Local_160.f_40.f_13.f_1, Var6, Local_160.f_40.f_13, 1, 500, 0);
			}
		}
	}
	else if (Local_160.f_40.f_13.f_2 != -1 && !unk_0x78D9ADD511FEAD8B(Local_160.f_40.f_13.f_2))
	{
		unk_0xF889BDFCC181BA9F(Local_160.f_40.f_13.f_2);
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
		Var0 = { unk_0xC4EAB25A108C2429(-fParam3, fParam3), unk_0xC4EAB25A108C2429(-fParam3, fParam3), unk_0xC4EAB25A108C2429(-fParam3, fParam3) };
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
	
	Var0 = { unk_0xC4EAB25A108C2429(-1f, 1f), unk_0xC4EAB25A108C2429(-1f, 1f), unk_0xC4EAB25A108C2429(-1f, 1f) };
	return Param0 + func_88(Var0, unk_0xC4EAB25A108C2429(0f, fParam3));
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
	return (BitTest(Global_2788035, 4) || unk_0x0DBA73788F6E3C5F(0, 229));
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
		Global_1649593.f_1 = 1;
		func_92(0, iVar0);
		Global_1649593.f_1177[iVar0] = iParam0;
		Global_1649593.f_1177.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1649593.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_1177.f_194[iVar0] = iParam3;
		Global_1649593.f_1177.f_183[iVar0] = iParam4;
		Global_1649593.f_1177.f_216[iVar0] = iParam5;
		Global_1649593.f_1177.f_227[iVar0 /*3*/] = iParam6;
		Global_1649593.f_1177.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1649593.f_1177.f_258[iVar0] = iParam8;
		Global_1649593.f_1177.f_269[iVar0] = iParam9;
		Global_1649593.f_1177.f_312[iVar0] = iParam10;
		Global_1649593.f_1177.f_323[iVar0] = iParam11;
		Global_1649593.f_1177.f_334[iVar0] = iParam12;
		Global_1649593.f_1177.f_345[iVar0] = iParam13;
		Global_1649593.f_1172 = 1;
		Global_1649593.f_1177.f_356[iVar0] = iParam14;
		Global_1649593.f_1177.f_367[iVar0] = iParam15;
		Global_1649593.f_1177.f_378[iVar0] = iParam16;
		Global_1649593.f_1177.f_389[iVar0] = iParam17;
		Global_1649593.f_1177.f_400[iVar0] = iParam18;
		Global_1649593.f_1177.f_411[iVar0] = iParam19;
		Global_1649593.f_1177.f_422[iVar0] = iParam20;
		Global_1649593.f_1177.f_433[iVar0] = iParam21;
		Global_1649593.f_1177.f_444[iVar0] = iParam22;
		Global_1649593.f_1177.f_455[iVar0] = iParam23;
		Global_1649593.f_1177.f_466[iVar0] = iParam24;
		Global_1649593.f_1177.f_205[iVar0] = iParam25;
		Global_1649593.f_1177.f_477[iVar0] = iParam26;
		Global_1649593.f_1177.f_488[iVar0] = iParam27;
		Global_1649593.f_1177.f_499[iVar0] = iParam28;
		Global_1649593.f_1177.f_510[iVar0] = iParam29;
		Global_1649593.f_1177.f_521[iVar0] = iParam30;
		Global_1649593.f_1177.f_532[iVar0] = iParam31;
		Global_1649593.f_1177.f_543[iVar0] = iParam32;
		Global_1649593.f_1177.f_554[iVar0] = iParam33;
		Global_1649593.f_1177.f_565[iVar0] = iParam34;
		Global_1649593.f_1177.f_576[iVar0] = iParam35;
		Global_1649593.f_1177.f_587[iVar0] = iParam36;
	}
}

void func_92(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_1649593.f_7009[iParam0]), iParam1);
}

int func_93(int iParam0, int iParam1)
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

var func_94(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x9315DBF7D972F07A() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0);
		}
		else
		{
			return unk_0x780A854E3A976A66(unk_0xE75390F3CA208D5E(), *uParam0);
		}
	}
	return unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), *uParam0);
}

bool func_95()
{
	return Global_75485;
}

void func_96(int iParam0)
{
	var uVar0;
	
	uVar0 = iParam0;
	func_103(iParam0);
	if (func_102(&uVar0, 2))
	{
		func_61(&(Local_160.f_17), 0, 0);
		Local_64.f_8 = { Global_2787947.f_8 };
	}
	if (func_102(&uVar0, 6))
	{
		Local_64.f_19 = Global_2787947.f_19;
	}
	if (func_102(&uVar0, 10))
	{
		Local_64.f_74 = { Global_2787947.f_74 };
	}
	if (func_102(&uVar0, 8))
	{
		Local_64.f_67 = { Global_2787947.f_67 };
	}
	if (func_102(&uVar0, 12))
	{
		Local_64.f_20 = { Global_2787947.f_20 };
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
		Local_64.f_8 = { Global_2787947.f_8 };
		switch (Local_64.f_8.f_1)
		{
			case 1:
				unk_0x4E7172E30CC3CA0A(1.5f);
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
				Local_64.f_16 = Global_2787947.f_16;
				if (Local_64.f_16 != 0)
				{
					unk_0xD69A0C3662175E68(Local_64.f_16);
				}
				break;
			
			default:
				break;
		}
		if (!unk_0xACC32B78196FBC2A(Local_64.f_86))
		{
			unk_0xA9911C122B3210B5(Local_64.f_86, 0);
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
		if (!unk_0xACC32B78196FBC2A(Local_64.f_86.f_1))
		{
			Local_160.f_36 = unk_0x528279F3F1EEF869(Local_64.f_86.f_1);
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
				Local_160.f_40.f_13.f_2 = unk_0xA9ADCC8D104AA552();
				break;
			
			case 1:
				Local_160.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_160.f_40.f_13.f_1 = "Fire_MG_Loop";
				Local_160.f_40.f_13.f_2 = unk_0xA9ADCC8D104AA552();
				break;
			
			case 2:
				Local_160.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_160.f_40.f_13.f_1 = "Fire_Rockets_Oneshot";
				Local_160.f_40.f_13.f_2 = unk_0xA9ADCC8D104AA552();
				break;
			
			case 3:
				Local_160.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_160.f_40.f_13.f_1 = "Launch_Piloted_Missile";
				Local_160.f_40.f_13.f_2 = unk_0xA9ADCC8D104AA552();
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
				Local_160.f_40.f_10 = unk_0xA9ADCC8D104AA552();
				Local_160.f_40.f_3 = "Pan";
				Local_160.f_40.f_8 = unk_0xA9ADCC8D104AA552();
				Local_160.f_40.f_4 = "Zoom";
				Local_160.f_40.f_9 = unk_0xA9ADCC8D104AA552();
				break;
			
			case 1:
				Local_160.f_40 = "SCRIPT\POLICE_CHOPPER_CAM";
				Local_160.f_40.f_1 = "dlc_aw_arena_turret_scene";
				Local_160.f_40.f_2 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_160.f_40.f_5 = "Turret_Camera_Hum_Loop";
				Local_160.f_40.f_10 = unk_0xA9ADCC8D104AA552();
				Local_160.f_40.f_3 = "Pan";
				Local_160.f_40.f_8 = unk_0xA9ADCC8D104AA552();
				Local_160.f_40.f_4 = "Zoom";
				Local_160.f_40.f_9 = unk_0xA9ADCC8D104AA552();
				Local_160.f_40.f_6 = "Take_Damage";
				Local_160.f_40.f_11 = unk_0xA9ADCC8D104AA552();
				Local_160.f_40.f_7 = "Low_Health_Warning";
				Local_160.f_40.f_12 = unk_0xA9ADCC8D104AA552();
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
		if (!unk_0xACC32B78196FBC2A(Local_160.f_40))
		{
			unk_0x925A4A10597C775B(Local_160.f_40, 0, -1);
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
		if (!unk_0xACC32B78196FBC2A(&(Local_64.f_80)))
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
		*uParam0 = unk_0x35DE445E5254AFED(func_100(bParam2, bParam3), func_99(-iParam1, 0));
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
	if (unk_0x9315DBF7D972F07A() && !bParam0)
	{
		if (!bParam1)
		{
			return unk_0x0A89FDFA763DCAED();
		}
		else
		{
			return unk_0xE75390F3CA208D5E();
		}
	}
	return unk_0x320D1840B6DAA1CC();
}

bool func_101()
{
	return (!func_68(&(Local_160.f_19)) || func_52(&(Local_160.f_19), Local_64.f_13.f_2, 0));
}

int func_102(var uParam0, bool bParam1)
{
	if (BitTest(*uParam0, bParam1))
	{
		unk_0xB0550BC91B0159D6(uParam0, bParam1);
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
				unk_0x4E7172E30CC3CA0A(1f);
				break;
			
			case 3:
				if (Local_160.f_29)
				{
					unk_0x5A7ACD1CDF509B0D(250);
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
					unk_0xF1A23B343DFEDFD0(Local_64.f_16);
					Local_64.f_16 = 0;
				}
				break;
		}
		if (!unk_0xACC32B78196FBC2A(Local_64.f_86))
		{
			unk_0x861D35D42CFD2991(Local_64.f_86);
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
			unk_0x705B098546DEB18A(&(Local_160.f_36));
			Local_160.f_36 = -1;
		}
	}
	if (func_102(&iParam0, 6))
	{
		func_76(&(Local_160.f_40.f_13.f_2));
	}
	if (func_102(&iParam0, 5))
	{
		unk_0xC33BA49210B9FBBF();
		unk_0x2E8BCE38B05B7486();
		if (!unk_0xACC32B78196FBC2A(Local_160.f_40))
		{
			unk_0xE24865B69D79521B(Local_160.f_40);
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
		if (!unk_0xACC32B78196FBC2A(&(Local_64.f_67)) && func_12(&(Local_64.f_67)))
		{
			unk_0x3410421C60BF7143(1);
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
		if (!unk_0xACC32B78196FBC2A(&(Local_64.f_80)))
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
	if (Global_23150.f_8808)
	{
		unk_0x4FEF096D3AB4AA8C(15);
		Global_23150.f_8808 = 0;
	}
	unk_0x7ED668FC4CB0F4C4(0f);
	if (Global_23150.f_6019[iVar0])
	{
		unk_0xC511E7C272201CF7(9, 0);
		Global_23150.f_6019[iVar0] = 0;
	}
	if (Global_23150.f_6005[iVar0])
	{
		unk_0x861D35D42CFD2991("CommonMenu");
		Global_23150.f_6005[iVar0] = 0;
	}
	if (Global_23150.f_6012[iVar0])
	{
		unk_0x861D35D42CFD2991("MPShopSale");
		Global_23150.f_6012[iVar0] = 0;
	}
	if (bParam0)
	{
		func_105(&(Global_23150.f_6051[iVar0 /*10*/]));
		Global_23150.f_6112[iVar0] = 0;
	}
	else
	{
		Global_23150.f_6112[iVar0] = 0;
	}
}

void func_105(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x0347CCBD719C8ADC(*uParam0))
		{
			unk_0x705B098546DEB18A(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

void func_106()
{
	if ((!unk_0xCB1EF1E7B77ADF4C() && !unk_0xA829C9A2767AC8EF()) && BitTest(Local_64.f_84.f_1, 1))
	{
		unk_0x859006DB870314C5(Local_64.f_84);
	}
	if (func_52(&(Local_160.f_58), Local_64.f_84, 0))
	{
		if (!BitTest(Local_64.f_84.f_1, 0) || func_108(Local_64.f_88, 0))
		{
			if (!unk_0x876B1078E90C91CB(Local_160.f_0))
			{
				Local_160.f_0 = unk_0xAE96F9AFF21228DC(26379945, 1);
				unk_0xCED9E32812D6C7C7(&(Local_160.f_60), 2);
				func_41();
				unk_0xB0550BC91B0159D6(&(Local_160.f_60), 2);
				unk_0x23793FF4DED698B1(Local_160.f_4.f_6);
			}
			else
			{
				if (BitTest(Local_64.f_84.f_1, 0))
				{
					unk_0xEE3A19A84A10F8B9();
				}
				unk_0x850D4EF3D40FB068(1, 0, 0, 1, 1, 0);
				func_3(&(Local_160.f_38), &(Local_160.f_39));
				func_37();
				if (!unk_0xACC32B78196FBC2A(Local_160.f_40.f_1))
				{
					unk_0x66B27A59829491D3(Local_160.f_40.f_1);
				}
				func_61(&(Local_160.f_17), 0, 0);
				unk_0xCED9E32812D6C7C7(&Global_2788035, 3);
				func_107(1);
				if (unk_0x607B649F72D20B6A() >= 0)
				{
					Local_160.f_57 = 1;
					unk_0x75896FBC1C205DF1();
				}
				unk_0x5C3549D308EC0B7F("eyeinthesky");
				Local_160.f_56 = unk_0x607B649F72D20B6A();
				if (BitTest(Local_64.f_84.f_1, 2))
				{
					if (unk_0xCB1EF1E7B77ADF4C() || unk_0xA829C9A2767AC8EF())
					{
						unk_0x5A7ACD1CDF509B0D(800);
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
		if (unk_0x8A6AB093D1EE5368())
		{
			return 1;
		}
	}
	else if (unk_0xCA60DF1D01DBD440(Param0, 100f, iParam3))
	{
		unk_0xCED9E32812D6C7C7(&(Local_160.f_60), 0);
	}
	return 0;
}

void func_109(int iParam0)
{
	if (func_114())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_113(0))
		{
			func_110(iParam0);
		}
		unk_0xCED9E32812D6C7C7(&Global_8137, 2);
	}
}

void func_110(int iParam0)
{
	if (func_114())
	{
		return;
	}
	if (Global_20464)
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
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		unk_0xCED9E32812D6C7C7(&Global_8137, 16);
	}
	if (unk_0xA3329B7A7520670E())
	{
		unk_0xD681CC2BC1084DB6(0);
	}
	Global_21605 = 5;
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_8136, 30);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_8136, 30);
	}
	if (!func_111())
	{
		Global_20266.f_1 = 3;
	}
}

int func_111()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
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
			Global_20464 = 1;
			if (bParam1)
			{
				unk_0xC81489026785778A(&Global_20203);
			}
			Global_20194 = { Global_20212[Global_20211 /*3*/] };
			unk_0x31636F0193379566(Global_20194);
		}
	}
	else if (Global_20464 == 1)
	{
		Global_20464 = 0;
		Global_20194 = { Global_20219[Global_20211 /*3*/] };
		if (bParam1)
		{
			unk_0x31636F0193379566(Global_20203);
		}
		else
		{
			unk_0x31636F0193379566(Global_20194);
		}
	}
}

int func_113(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20266.f_1 > 3)
		{
			if (BitTest(Global_8136, 14))
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
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_114()
{
	return BitTest(Global_1958711, 19);
}

int func_115()
{
	if (Local_64.f_94 != 0)
	{
		if (!unk_0xE5965CDF24F93A9F(Local_64.f_95) || unk_0x55B23FE400FCEA6B(Local_64.f_95, 0))
		{
			return 1;
		}
	}
	if (!func_82(unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		return 1;
	}
	if (Global_2787945)
	{
		return 1;
	}
	return 0;
}

int func_116()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_123())
	{
		return 1;
	}
	if (Global_2727795)
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
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_117() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_117()) == 0)
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
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_119()
{
	return Global_31959;
}

bool func_120()
{
	return Global_2714762.f_698;
}

int func_121(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_122()
{
	return Global_2725403;
}

bool func_123()
{
	return Global_2714762.f_693;
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
		unk_0x5A7ACD1CDF509B0D(250);
	}
	func_103(-1);
	if (func_133())
	{
		func_132(0);
	}
	unk_0xE4FA4FBF0BAFD2A8(1);
	unk_0x1C35FDD57F36FBEA();
	unk_0xBD18A1EF31F0166B();
	uVar0 = unk_0xE2D3D51028F0428A();
	if (func_131(uVar0) && unk_0xD5C6B5E3B93A5EDC(uVar0, 1))
	{
		uVar1 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (unk_0x3A8B0F5B0E3DE13A(uVar1))
		{
			unk_0xBD10A469F50E1A2A(uVar1, 1);
			func_129(1);
		}
	}
	if (BitTest(Local_160.f_60, 4))
	{
		func_128();
	}
	unk_0x483DE9CEC1CBFD93();
	unk_0xDEABC7EC7DA2B48E();
	if (Local_160.f_57)
	{
		unk_0x200C8054B5D04EB5();
	}
	func_127(Local_160.f_38);
	func_127(Local_160.f_39);
	Global_2787934 = 0;
	Global_2788035 = 0;
	func_126();
}

void func_126()
{
	unk_0xAFBDF6A5E54114C1();
}

void func_127(var uParam0)
{
	if (unk_0x12DD4A0B247D9B4D(uParam0))
	{
		unk_0xFFD8EB5462B07B59(&uParam0);
	}
}

void func_128()
{
	if (Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 0;
	}
}

void func_129(int iParam0)
{
	var uVar0;
	
	if (Global_2667225.f_2690 == 1)
	{
		Global_2667225.f_2690 = 0;
		return;
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!Global_2667225.f_2692.f_1)
		{
			if (!Global_2667225.f_2688 == -1)
			{
				if (((Global_2667225.f_2688 < 255 && !func_130()) && !BitTest(Global_4718592.f_168795, 0)) && !(unk_0xF1557162766FCDEB() && (Global_2667225.f_2689 == 0 && iParam0 == 0)))
				{
					unk_0xD0B0F5E50CE08C52(Global_2667225.f_2688);
				}
				else if (Global_2667225.f_2688 >= 255)
				{
					unk_0x65C31D05DD70B2CC("OFF");
					uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
					if (unk_0xE5965CDF24F93A9F(uVar0))
					{
						if (unk_0x3A8B0F5B0E3DE13A(iVar0))
						{
							unk_0xD501428969A52C0F(iVar0, "OFF");
						}
					}
				}
			}
			Global_2667225.f_2688 = -1;
			Global_2667225.f_2692.f_1 = 1;
		}
	}
}

bool func_130()
{
	return Global_1888107;
}

int func_131(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_132(int iParam0)
{
	Global_2727832 = iParam0;
}

bool func_133()
{
	return Global_2727832;
}

void func_134(var uParam0)
{
	unk_0xCED9E32812D6C7C7(&Global_2788035, 2);
	if (unk_0x9315DBF7D972F07A())
	{
		unk_0xD9B114A8D3A8319F(32, 0, -1);
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
	uVar0 = unk_0xE2D3D51028F0428A();
	if (func_131(uVar0) && unk_0xD5C6B5E3B93A5EDC(uVar0, 1))
	{
		uVar1 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (unk_0x3A8B0F5B0E3DE13A(uVar1))
		{
			func_151(1);
			unk_0xBD10A469F50E1A2A(iVar1, 0);
		}
	}
	if (!func_150())
	{
		unk_0xCED9E32812D6C7C7(&(Local_160.f_60), 4);
		func_149();
	}
	func_136();
}

void func_136()
{
	if (!BitTest(Global_2788033, 0))
	{
		func_148(-1028390912, 1119092736, -1036779520, 1110704128, 1106247680, 1114636288);
	}
	if (!BitTest(Global_2788033, 1))
	{
		func_147(1058642330, 1101004800);
	}
	if (!BitTest(Global_2788033, 2))
	{
		func_146();
	}
	if (!BitTest(Global_2788033, 3))
	{
		func_144(1, 1, 0, 500);
	}
	if (!BitTest(Global_2788033, 4))
	{
		func_143(0);
	}
	if (!BitTest(Global_2788033, 5))
	{
		func_142(0);
	}
	if (!BitTest(Global_2788033, 6))
	{
		func_141(0);
	}
	if (!BitTest(Global_2788033, 7))
	{
		unk_0xCED9E32812D6C7C7(&Global_2788033, 7);
		Global_2787947.f_24 = 0;
	}
	if (!BitTest(Global_2788033, 8))
	{
		func_140(0);
	}
	if (!BitTest(Global_2788033, 9))
	{
		func_139(0f, 0f, 0f);
	}
	if (!BitTest(Global_2788033, 10))
	{
		unk_0xCED9E32812D6C7C7(&Global_2788033, 10);
		Global_2787947.f_74 = 0;
	}
	if (!BitTest(Global_2788033, 11))
	{
		func_138(0);
	}
	if (!BitTest(Global_2788033, 12))
	{
		func_137(1, 3, 3, 3);
	}
	Local_64 = { Global_2787947 };
	func_97(Global_2788033);
	func_107(0);
}

void func_137(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xCED9E32812D6C7C7(&Global_2788033, 12);
	Global_2787947.f_20 = iParam0;
	Global_2787947.f_20.f_1 = iParam1;
	Global_2787947.f_20.f_2 = iParam2;
	Global_2787947.f_20.f_3 = iParam3;
}

void func_138(char* sParam0)
{
	unk_0xCED9E32812D6C7C7(&Global_2788033, 11);
	StringCopy(&(Global_2787947.f_80), sParam0, 16);
}

void func_139(struct<3> Param0)
{
	unk_0xCED9E32812D6C7C7(&Global_2788033, 9);
	Global_2787947.f_71 = { Param0 };
}

void func_140(char* sParam0)
{
	unk_0xCED9E32812D6C7C7(&Global_2788033, 8);
	StringCopy(&(Global_2787947.f_67), sParam0, 16);
}

void func_141(int iParam0)
{
	unk_0xCED9E32812D6C7C7(&Global_2788033, 6);
	Global_2787947.f_19 = iParam0;
}

void func_142(int iParam0)
{
	unk_0xCED9E32812D6C7C7(&Global_2788033, 5);
	Global_2787947.f_18 = iParam0;
}

void func_143(int iParam0)
{
	unk_0xCED9E32812D6C7C7(&Global_2788033, 4);
	Global_2787947.f_17 = iParam0;
}

void func_144(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	unk_0xCED9E32812D6C7C7(&Global_2788033, 3);
	Global_2787947.f_84 = iParam3;
	func_145(&(Global_2787947.f_84.f_1), 1, bParam0);
	func_145(&(Global_2787947.f_84.f_1), 2, bParam1);
	func_145(&(Global_2787947.f_84.f_1), 0, bParam2);
}

void func_145(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0xCED9E32812D6C7C7(uParam0, bParam1);
	}
	else
	{
		unk_0xB0550BC91B0159D6(uParam0, bParam1);
	}
}

void func_146()
{
	unk_0xCED9E32812D6C7C7(&Global_2788033, 2);
	Global_2787947.f_8.f_1 = 0;
}

void func_147(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&Global_2788033, true);
	Global_2787947.f_6.f_1 = iParam0;
	Global_2787947.f_6 = iParam1;
}

void func_148(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xCED9E32812D6C7C7(&Global_2788033, false);
	Global_2787947 = iParam0;
	Global_2787947.f_1 = iParam1;
	Global_2787947.f_2 = iParam2;
	Global_2787947.f_3 = iParam3;
	Global_2787947.f_4 = iParam4;
	Global_2787947.f_5 = iParam5;
}

void func_149()
{
	if (!Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 1;
	}
}

bool func_150()
{
	return Global_2703735.f_833.f_10;
}

void func_151(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2667225.f_2691;
	if ((unk_0xF1557162766FCDEB() && Global_2667225.f_2689 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2667225.f_2688)
	{
		if (!unk_0xF5A00C1EB6E872B8())
		{
			Global_2667225.f_2688 = iVar0;
		}
	}
}

int func_152(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x0EEB2C2CA48FB650();
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
				if (!unk_0x9315DBF7D972F07A())
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
			else if (!unk_0xDB51AF48ABE62D4D())
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
				func_126();
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
	return Global_1575033;
}

