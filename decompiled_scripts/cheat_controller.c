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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	char* sLocal_70 = NULL;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	float fLocal_78 = 0f;
	int iLocal_79 = 0;
	int iLocal_80[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = 1;
	iLocal_47 = 1;
	iLocal_48 = 1;
	iLocal_49 = 1;
	iLocal_50 = 1;
	iLocal_51 = 1;
	iLocal_52 = 1;
	iLocal_53 = 1;
	iLocal_54 = 1;
	iLocal_55 = 1;
	iLocal_56 = 1;
	iLocal_57 = 1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	iLocal_60 = 1;
	iLocal_61 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	iLocal_64 = 1;
	iLocal_65 = 1;
	iLocal_66 = 1;
	iLocal_67 = joaat("bmx");
	iLocal_73 = 300000;
	fLocal_78 = 1f;
	if (unk_0x4B34601C5C56F3EE(34))
	{
		func_113();
	}
	Global_32208 = 0;
	Global_32207 = 0;
	Global_32209 = 0;
	Global_32210 = 0;
	Global_32212 = 0;
	Global_32211 = 0;
	func_112();
	while (true)
	{
		func_2();
		if (((unk_0x9315DBF7D972F07A() && func_1(unk_0x9E2D6C50374FCFA9(), 1, 1)) && !Global_1836373) && Global_31959 == 0)
		{
			func_113();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x0D01086B38EC256F(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x3583A42587543334(uParam0))
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

void func_2()
{
	func_88();
	func_68();
	func_22();
	func_3(iLocal_67);
}

void func_3(int iParam0)
{
	switch (iLocal_46)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0x479BCCF712B8168E())
			{
				func_21("CHEAT_VEHICLE_SPAWN_DENIED");
				iLocal_46 = 1;
			}
			else
			{
				func_20(iParam0);
			}
			break;
		
		case 4:
			func_4(iParam0);
			break;
		
		default:
			break;
	}
}

void func_4(int iParam0)
{
	struct<3> Var0;
	float fVar3;
	bool bVar4;
	
	bVar4 = false;
	if (unk_0x0152AA00FA3130F1(iParam0))
	{
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if (unk_0xE5965CDF24F93A9F(iLocal_68))
			{
				if (!unk_0x55B23FE400FCEA6B(iLocal_68, 0))
				{
					if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_68, 0))
					{
						Var0 = { unk_0x6B62510F212526DC(iLocal_68, 1) };
						fVar3 = unk_0x82FE2343F8BDFF0B(iLocal_68);
						unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), Var0.f_0, Var0.f_1, (Var0.f_2 + 4f), 1, 0, 0, 1);
						bVar4 = true;
					}
				}
				unk_0xD59CC8123FD1A789(&iLocal_68);
			}
			if (!bVar4)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					Var0 = { unk_0xCACAD935C0BEE14F(unk_0xE2D3D51028F0428A(), -1.5f, 3.5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					Var0 = { unk_0xCACAD935C0BEE14F(unk_0xE2D3D51028F0428A(), 0f, 6f, 2f) };
				}
				else
				{
					Var0 = { unk_0xCACAD935C0BEE14F(unk_0xE2D3D51028F0428A(), 0f, 3.5f, 1f) };
				}
				fVar3 = (unk_0x82FE2343F8BDFF0B(unk_0xE2D3D51028F0428A()) + 90f);
			}
			if (func_18(iParam0, Var0, fVar3))
			{
				iLocal_68 = unk_0xBA715A7BEBA5A1F9(iParam0, Var0, fVar3, 0, 1, 0);
				unk_0x9F65B3BAFA302A65(iLocal_68, 1084227584);
				unk_0xF1A23B343DFEDFD0(iParam0);
				unk_0x3D81769BEC61BFF8(&iLocal_68);
				func_16(sLocal_70);
				func_5(20);
			}
			else
			{
				unk_0xF1A23B343DFEDFD0(iParam0);
				func_21("CHEAT_VEHICLE_SPAWN_DENIED");
			}
			iLocal_46 = 1;
		}
	}
}

void func_5(int iParam0)
{
	if (!func_15(14) && !func_14(""))
	{
		unk_0xCED9E32812D6C7C7(&Global_32209, iParam0);
		Global_32212 = 1;
		func_6();
	}
}

void func_6()
{
	int iVar0;
	
	iVar0 = func_8();
	switch (iVar0)
	{
		case 0:
			func_7(joaat("sp0_times_cheated"), 1);
			break;
		
		case 1:
			func_7(joaat("sp1_times_cheated"), 1);
			break;
		
		case 2:
			func_7(joaat("sp2_times_cheated"), 1);
			break;
	}
}

void func_7(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x61481F9FBB1C7EDD(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x076A5661EF5ABEE4(iParam0, iVar0, 1);
}

int func_8()
{
	func_9();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_9()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_12(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_11(unk_0xE2D3D51028F0428A());
			if (func_10(iVar0) && (!func_15(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_10(Global_113386.f_2363.f_539.f_4321))
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

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)
{
	if (func_10(iParam0))
	{
		return func_13(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_13(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_14(char* sParam0)
{
	if (iLocal_94 != 0)
	{
		if (func_15(14) && unk_0xE9E8955A780DDA01())
		{
			if (unk_0x3C57C2F07FEE34D2(sParam0, "CHEAT_SUPER_JUMP") && unk_0x479BCCF712B8168E())
			{
				return 0;
			}
			if ((unk_0x3C57C2F07FEE34D2(sParam0, "CHEAT_GRAVITY_MOON") && !unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0)) && unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A()))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_15(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_16(char* sParam0)
{
	if (func_14(""))
	{
	}
	else
	{
		unk_0x150D8F58B26E9F70("CHEAT_ACTIVATED");
		unk_0x26C23BE14F66F202(sParam0);
		func_17(unk_0x187DF98ED95E5557(0, 1));
		unk_0x0A5EBD0F656B440C(sParam0);
	}
}

void func_17(int iParam0)
{
	iLocal_80[iLocal_91] = iParam0;
	iLocal_91++;
	if (iLocal_91 >= 10)
	{
		iLocal_91 = 0;
	}
}

int func_18(int iParam0, struct<3> Param1, float fParam4)
{
	struct<3> Var0[9];
	struct<3> Var28;
	struct<3> Var31;
	struct<3> Var34;
	var uVar37;
	var uVar40;
	int iVar43;
	var uVar44;
	var uVar45;
	var uVar46;
	var uVar47;
	var uVar48;
	var uVar49;
	var uVar50;
	var uVar51;
	
	unk_0xB38EF75835FAF667(iParam0, &Var28, &Var31);
	Var34.f_0 = (unk_0x48053974ED6F63CE((Var31.f_0 - Var28.f_0)) / 2f);
	Var34.f_1 = (unk_0x48053974ED6F63CE((Var31.f_1 - Var28.f_1)) / 2f);
	Var34.f_2 = (unk_0x48053974ED6F63CE((Var31.f_2 - Var28.f_2)) / 2f);
	Var0[0 /*3*/] = { Param1 };
	Var0[1 /*3*/] = { unk_0x6DB7FBD602C51670(Param1, fParam4, -Var34.f_0, -Var34.f_1, -Var34.f_2) };
	Var0[2 /*3*/] = { unk_0x6DB7FBD602C51670(Param1, fParam4, Var34.f_0, -Var34.f_1, -Var34.f_2) };
	Var0[3 /*3*/] = { unk_0x6DB7FBD602C51670(Param1, fParam4, Var34.f_0, Var34.f_1, -Var34.f_2) };
	Var0[4 /*3*/] = { unk_0x6DB7FBD602C51670(Param1, fParam4, -Var34.f_0, Var34.f_1, -Var34.f_2) };
	Var0[5 /*3*/] = { unk_0x6DB7FBD602C51670(Param1, fParam4, -Var34.f_0, -Var34.f_1, Var34.f_2) };
	Var0[6 /*3*/] = { unk_0x6DB7FBD602C51670(Param1, fParam4, Var34.f_0, -Var34.f_1, Var34.f_2) };
	Var0[7 /*3*/] = { unk_0x6DB7FBD602C51670(Param1, fParam4, Var34.f_0, Var34.f_1, Var34.f_2) };
	Var0[8 /*3*/] = { unk_0x6DB7FBD602C51670(Param1, fParam4, -Var34.f_0, Var34.f_1, Var34.f_2) };
	if (!unk_0x15616E8442D3D1E8(Param1))
	{
		return 0;
	}
	uVar50 = unk_0x53DFE85FC69724BD(func_19(unk_0x9E2D6C50374FCFA9()) + Vector(1f, 0f, 0f), Param1, 87, unk_0xE2D3D51028F0428A(), 0);
	unk_0xB2D581BD7446BBE9(uVar50, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar44 = unk_0x53DFE85FC69724BD(Var0[1 /*3*/], Var0[3 /*3*/], 87, unk_0xE2D3D51028F0428A(), 0);
	unk_0xB2D581BD7446BBE9(uVar44, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar45 = unk_0x53DFE85FC69724BD(Var0[2 /*3*/], Var0[4 /*3*/], 87, unk_0xE2D3D51028F0428A(), 0);
	unk_0xB2D581BD7446BBE9(uVar45, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar46 = unk_0x53DFE85FC69724BD(Var0[5 /*3*/], Var0[7 /*3*/], 87, unk_0xE2D3D51028F0428A(), 0);
	unk_0xB2D581BD7446BBE9(uVar46, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar47 = unk_0x53DFE85FC69724BD(Var0[6 /*3*/], Var0[8 /*3*/], 87, unk_0xE2D3D51028F0428A(), 0);
	unk_0xB2D581BD7446BBE9(uVar47, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar48 = unk_0x53DFE85FC69724BD(Var0[1 /*3*/], Var0[8 /*3*/], 87, unk_0xE2D3D51028F0428A(), 0);
	unk_0xB2D581BD7446BBE9(uVar48, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar49 = unk_0x53DFE85FC69724BD(Var0[2 /*3*/], Var0[7 /*3*/], 87, unk_0xE2D3D51028F0428A(), 0);
	unk_0xB2D581BD7446BBE9(uVar49, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_19(var uParam0)
{
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(uParam0), 0);
}

void func_20(int iParam0)
{
	if (unk_0x51046EEE00E2BBDA(uParam0))
	{
		unk_0xD69A0C3662175E68(uParam0);
		if (unk_0x0152AA00FA3130F1(uParam0))
		{
			iLocal_46 = 4;
		}
	}
}

void func_21(char* sParam0)
{
	if (!func_15(14))
	{
		unk_0x150D8F58B26E9F70("CHEAT_DENIED");
		unk_0x26C23BE14F66F202(sParam0);
		func_17(unk_0x187DF98ED95E5557(0, 1));
	}
}

void func_22()
{
	func_65();
	func_64();
	func_45();
	func_44();
	func_43();
	func_39();
	func_36();
	func_32();
	func_23();
}

void func_23()
{
	switch (iLocal_66)
	{
		case 1:
			break;
		
		case 4:
			func_31(19, 1);
			func_30();
			break;
		
		case 5:
			if ((((!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) || func_28()) || func_27(23)) || func_27(21)) || func_27(19))
			{
				iLocal_66 = 9;
				return;
			}
			func_25();
			break;
		
		case 9:
			func_24("CHEAT_AIM_SLOW_MO");
			func_31(19, 0);
			unk_0x434E3AE126DDC5B5(1f);
			iLocal_77 = 0;
			iLocal_66 = 1;
			break;
		
		default:
			break;
	}
}

void func_24(char* sParam0)
{
	if (func_14(sParam0))
	{
	}
	else
	{
		unk_0x150D8F58B26E9F70("CHEAT_DEACTIVATED");
		unk_0x26C23BE14F66F202(sParam0);
		func_17(unk_0x187DF98ED95E5557(0, 1));
	}
}

void func_25()
{
	if (unk_0x3C7ED37A9FE7C585(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0x4C1B8C5717647539(2, 25))
		{
			if (func_26(unk_0xE2D3D51028F0428A()) != joaat("weapon_unarmed") && func_26(unk_0xE2D3D51028F0428A()) != joaat("object"))
			{
				unk_0x434E3AE126DDC5B5(fLocal_78);
			}
			else
			{
				unk_0x434E3AE126DDC5B5(1f);
			}
		}
		else
		{
			unk_0x434E3AE126DDC5B5(1f);
		}
	}
}

int func_26(int iParam0)
{
	var uVar0;
	
	unk_0xA7E29842FA438ED6(iParam0, &uVar0, 1);
	return uVar0;
}

int func_27(bool bParam0)
{
	if (BitTest(Global_32207, bParam0))
	{
		return 1;
	}
	return 0;
}

int func_28()
{
	if (((((((func_15(0) || func_15(11)) || func_15(4)) || func_15(9)) || func_15(10)) || func_15(3)) || func_15(2)) || func_29(35))
	{
		return 1;
	}
	return 0;
}

int func_29(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_99.f_58[iParam0];
}

void func_30()
{
	iLocal_77++;
	if (iLocal_77 > 3)
	{
		iLocal_77 = 0;
		iLocal_66 = 9;
		return;
	}
	switch (iLocal_77)
	{
		case 1:
			func_16("CHEAT_AIM_SLOW_MO1");
			fLocal_78 = 0.6f;
			break;
		
		case 2:
			func_16("CHEAT_AIM_SLOW_MO2");
			fLocal_78 = 0.4f;
			break;
		
		case 3:
			func_16("CHEAT_AIM_SLOW_MO3");
			fLocal_78 = 0.2f;
			break;
		
		default:
			break;
	}
	iLocal_66 = 5;
}

void func_31(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&Global_32208, bParam0);
		func_5(bParam0);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_32208, bParam0);
	}
}

void func_32()
{
	switch (iLocal_63)
	{
		case 1:
			break;
		
		case 4:
			func_31(16, 1);
			func_35();
			break;
		
		case 5:
			unk_0x7653D561C9574763(2, 37, 1);
			unk_0x7653D561C9574763(2, 19, 1);
			if ((((((((!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) || func_28()) || func_34()) || func_33(1)) || unk_0xF01464D7AF0B7347(2, 37)) || unk_0xF01464D7AF0B7347(2, 19)) || func_27(23)) || func_27(21)) || func_27(16))
			{
				iLocal_63 = 9;
			}
			break;
		
		case 9:
			unk_0x7653D561C9574763(2, 37, 1);
			unk_0x7653D561C9574763(2, 19, 1);
			func_24("CHEAT_SLOW_MO");
			func_31(16, 0);
			iLocal_76 = 0;
			unk_0x434E3AE126DDC5B5(1f);
			iLocal_63 = 1;
			break;
		
		default:
			break;
	}
}

bool func_33(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

int func_34()
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

void func_35()
{
	iLocal_76++;
	if (iLocal_76 > 3)
	{
		iLocal_63 = 9;
		return;
	}
	switch (iLocal_76)
	{
		case 1:
			func_16("CHEAT_SLOW_MO1");
			unk_0x434E3AE126DDC5B5(0.6f);
			break;
		
		case 2:
			func_16("CHEAT_SLOW_MO2");
			unk_0x434E3AE126DDC5B5(0.4f);
			break;
		
		case 3:
			func_16("CHEAT_SLOW_MO3");
			unk_0x434E3AE126DDC5B5(0.2f);
			break;
		
		default:
			break;
	}
	iLocal_63 = 5;
}

void func_36()
{
	struct<3> Var0;
	var uVar3;
	float fVar4;
	
	switch (iLocal_64)
	{
		case 1:
			break;
		
		case 2:
			func_31(17, 1);
			unk_0x5C65DDDC219B3AA5(unk_0xE2D3D51028F0428A(), 1);
			unk_0xC099DA307DD6BC62(unk_0x9E2D6C50374FCFA9(), 1);
			unk_0xBED097BB6359F09C(unk_0xE2D3D51028F0428A(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0x9521FB98DB6DDF50(unk_0xE2D3D51028F0428A(), joaat("gadget_parachute"), 1, 0, 1);
			Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			uVar3 = unk_0x82FE2343F8BDFF0B(unk_0xE2D3D51028F0428A());
			unk_0x9CD4CBF2BBE10F00(Var0, &fVar4, 0, 0);
			fVar4 = (fVar4 + 500f);
			unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), Var0.f_0, Var0.f_1, fVar4, 1, 0, 0, 1);
			unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), uVar3);
			iLocal_72 = unk_0x320D1840B6DAA1CC();
			unk_0x859006DB870314C5(0);
			iLocal_64 = 3;
			break;
		
		case 3:
			if (func_38(1000, iLocal_72))
			{
				unk_0x5C65DDDC219B3AA5(unk_0xE2D3D51028F0428A(), 0);
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
				iLocal_72 = unk_0x320D1840B6DAA1CC();
				iLocal_64 = 4;
			}
			break;
		
		case 4:
			if (func_38(1000, iLocal_72))
			{
				unk_0x7653D561C9574763(0, 144, 1);
				unk_0x7653D561C9574763(0, 149, 1);
				if (func_8() == 0)
				{
					unk_0xE3752B10DC995E95(unk_0xE2D3D51028F0428A(), 9, 0, 0, 0);
				}
				else
				{
					unk_0xE3752B10DC995E95(unk_0xE2D3D51028F0428A(), 8, 0, 0, 0);
				}
				unk_0x5A7ACD1CDF509B0D(250);
				iLocal_72 = unk_0x320D1840B6DAA1CC();
				func_16("CHEAT_SKYFALL");
				unk_0x9B8A09AAD1CFEFB3(2);
				iLocal_64 = 5;
			}
			break;
		
		case 5:
			if ((((!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) || func_28()) || func_27(23)) || func_27(21)) || func_27(17))
			{
				iLocal_64 = 9;
				break;
			}
			unk_0x7653D561C9574763(0, 144, 1);
			unk_0xAC765EF46E85A446(2);
			if (unk_0x90DCD1F6C0982DC1(unk_0xE2D3D51028F0428A()))
			{
				unk_0x3F6DE6DBA9A99FEA(unk_0xE2D3D51028F0428A(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
				if (unk_0x5C5B446AD691DEA2(unk_0xE2D3D51028F0428A()))
				{
					iLocal_64 = 9;
				}
			}
			else
			{
				iLocal_64 = 9;
			}
			break;
		
		case 9:
			func_37();
			func_24("CHEAT_SKYFALL");
			func_31(17, 0);
			iLocal_64 = 1;
			break;
		
		default:
			break;
	}
}

void func_37()
{
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		unk_0xE002DFD518BF86A7(unk_0xE2D3D51028F0428A(), joaat("gadget_parachute"));
	}
	if (iLocal_62 != 5)
	{
		unk_0xC099DA307DD6BC62(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0xBED097BB6359F09C(unk_0xE2D3D51028F0428A(), 0, 0, 0, 0, 0, 0, 0, 0);
	}
	unk_0x9B8A09AAD1CFEFB3(0);
}

int func_38(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x320D1840B6DAA1CC();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_39()
{
	struct<3> Var0;
	
	switch (iLocal_62)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_INVINCIBILITY");
			func_31(15, 1);
			iLocal_62 = 5;
			iLocal_74 = unk_0x320D1840B6DAA1CC();
			unk_0xC099DA307DD6BC62(unk_0x9E2D6C50374FCFA9(), 1);
			unk_0xBED097BB6359F09C(unk_0xE2D3D51028F0428A(), 1, 1, 1, 1, 1, 0, 0, 0);
			break;
		
		case 5:
			if (!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) || unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				iLocal_62 = 9;
				return;
			}
			Var0 = { func_19(unk_0x9E2D6C50374FCFA9()) };
			if (((((func_28() || func_34()) || func_27(23)) || func_27(21)) || func_27(15)) || Var0.f_2 <= -170f)
			{
				iLocal_62 = 9;
				return;
			}
			iLocal_75 = (unk_0x320D1840B6DAA1CC() - iLocal_74);
			if (unk_0xB4C854DD86E40FDA(joaat("appinternet")) == 0)
			{
				func_40((iLocal_73 - iLocal_75), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			if (iLocal_75 >= (iLocal_73 - 1000))
			{
				iLocal_62 = 9;
				return;
			}
			unk_0xC099DA307DD6BC62(unk_0x9E2D6C50374FCFA9(), 1);
			unk_0xBED097BB6359F09C(unk_0xE2D3D51028F0428A(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0xADA020ED8ED3A5CD();
			break;
		
		case 9:
			func_24("CHEAT_INVINCIBILITY_OFF");
			func_31(15, 0);
			iLocal_62 = 1;
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				unk_0xC099DA307DD6BC62(unk_0x9E2D6C50374FCFA9(), 0);
				unk_0xBED097BB6359F09C(unk_0xE2D3D51028F0428A(), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		default:
			break;
	}
}

void func_40(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_42(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_41(7, iVar0);
		Global_1649593.f_4659[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4659.f_172[iVar0] = iParam2;
		Global_1649593.f_4659.f_216[iVar0] = iParam3;
		Global_1649593.f_4659.f_183[iVar0] = iParam4;
		Global_1649593.f_4659.f_194[iVar0] = iParam5;
		Global_1649593.f_4659.f_249[iVar0] = iParam6;
		Global_1649593.f_4659.f_260[iVar0] = iParam7;
		Global_1649593.f_4659.f_205[iVar0] = iParam8;
		Global_1649593.f_4659.f_314[iVar0] = iParam9;
		Global_1649593.f_4659.f_325[iVar0] = iParam10;
		Global_1649593.f_4659.f_357[iVar0] = iParam11;
		Global_1649593.f_4659.f_238[iVar0] = iParam12;
		Global_1649593.f_4659.f_271[iVar0] = iParam13;
		Global_1649593.f_4659.f_368[iVar0] = iParam14;
		Global_1649593.f_4659.f_379[iVar0] = iParam15;
		Global_1649593.f_4659.f_390[iVar0] = iParam16;
		Global_1649593.f_4659.f_227[iVar0] = iParam17;
	}
}

void func_41(int iParam0, bool bParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_1649593.f_7009[iParam0]), iParam1);
}

int func_42(int iParam0, int iParam1)
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

void func_43()
{
	switch (iLocal_59)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_FLAMING_BULLETS");
			func_31(12, 1);
			iLocal_59 = 5;
			break;
		
		case 5:
			if (((!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) || func_27(23)) || func_27(21)) || func_27(12))
			{
				iLocal_59 = 9;
				return;
			}
			if (func_28())
			{
				iLocal_59 = 9;
				return;
			}
			unk_0x7FE655CE221E741B(unk_0x9E2D6C50374FCFA9());
			break;
		
		case 9:
			func_24("CHEAT_FLAMING_BULLETS");
			func_31(12, 0);
			iLocal_59 = 1;
			break;
		
		default:
			break;
	}
}

void func_44()
{
	switch (iLocal_60)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_EXPLOSIVE_MELEE");
			func_31(13, 1);
			iLocal_60 = 5;
			break;
		
		case 5:
			if ((((!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) || func_27(23)) || func_27(21)) || func_27(13)) || func_28())
			{
				iLocal_60 = 9;
				return;
			}
			unk_0xC3562BA50C82388B(unk_0x9E2D6C50374FCFA9());
			break;
		
		case 9:
			func_24("CHEAT_EXPLOSIVE_MELEE");
			func_31(13, 0);
			iLocal_60 = 1;
			break;
		
		default:
			break;
	}
}

void func_45()
{
	switch (iLocal_65)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_DRUNK");
			func_31(18, 1);
			func_60(unk_0xE2D3D51028F0428A());
			func_58(30000, 1050253722, 1065353216, 0);
			iLocal_65 = 5;
			break;
		
		case 5:
			if ((((func_28() || !unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9())) || func_27(23)) || func_27(21)) || func_27(18))
			{
				iLocal_65 = 9;
			}
			break;
		
		case 9:
			func_24("CHEAT_DRUNK");
			func_31(18, 0);
			func_49(unk_0xE2D3D51028F0428A());
			func_48(1000);
			iLocal_65 = 1;
			break;
		
		case 10:
			func_46(1);
			func_31(18, 0);
			iLocal_65 = 1;
			break;
		
		default:
			break;
	}
}

void func_46(bool bParam0)
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
	func_47();
}

void func_47()
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

void func_48(int iParam0)
{
	int iVar0;
	
	if (!Global_44203)
	{
		return;
	}
	iVar0 = unk_0x320D1840B6DAA1CC();
	Global_44205 = (iVar0 + iParam0);
	Global_44206 = iParam0;
}

void func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_44024[iVar0 /*5*/];
		func_52(1, iVar1, 1);
		return;
	}
	iVar2 = func_51(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_50(iVar2);
}

void func_50(int iParam0)
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

int func_51(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_43998[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_52(int iParam0, int iParam1, int iParam2)
{
	func_53(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_55(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_54();
	if (iVar0 == -1)
	{
		return;
	}
	Global_44105[iVar0 /*6*/] = iParam0;
	Global_44105[iVar0 /*6*/].f_1 = iParam1;
	Global_44105[iVar0 /*6*/].f_2 = iParam2;
	Global_44105[iVar0 /*6*/].f_3 = iParam3;
	Global_44105[iVar0 /*6*/].f_4 = iParam4;
	Global_44105[iVar0 /*6*/].f_5 = iParam5;
}

int func_54()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44105[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_55(int iParam0, int iParam1, int iParam2)
{
	if (func_56(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_56(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_44105[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44105[iVar0 /*6*/])
			{
				if (iParam1 == Global_44105[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_57(int iParam0)
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

void func_58(int iParam0, float fParam1, float fParam2, int iParam3)
{
	func_59(-1, iParam0, fParam1, fParam2, iParam3, 1);
}

void func_59(int iParam0, var uParam1, float fParam2, float fParam3, var uParam4, bool bParam5)
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_44203)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!unk_0xF8F3D410542C80DB())
	{
		unk_0x87CA6430083E790D("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0xBEE2F63C2DA77F95())
	{
		unk_0x3B58BE9E133FD48D("DRUNK_SHAKE", (fParam3 * Global_44202));
	}
	if (unk_0x876B1078E90C91CB(uParam4))
	{
		unk_0x9BAE3263D9B1FCB9(uParam4, "DRUNK_SHAKE", fParam3);
		Global_44204 = uParam4;
	}
	else
	{
		Global_44204 = 0;
	}
	Global_44203 = 1;
	iVar0 = unk_0x320D1840B6DAA1CC();
	Global_44205 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_44205 = -1;
		}
	}
	Global_44206 = uParam1;
	Global_44207 = fParam2;
	Global_44209 = fParam3;
	Global_44208 = fParam3;
}

int func_60(int iParam0)
{
	return func_61(iParam0, -1, 1);
}

int func_61(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	iVar0 = func_63(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_51(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_62();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_43998[iVar2 /*5*/] = 0;
	Global_43998[iVar2 /*5*/].f_1 = iParam0;
	Global_43998[iVar2 /*5*/].f_2 = iParam1;
	Global_43998[iVar2 /*5*/].f_3 = iParam1;
	Global_43998[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0xE2D3D51028F0428A())
	{
		Global_44236 = 1;
	}
	Global_43996++;
	return 1;
}

int func_62()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_43998[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_63(int iParam0)
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

void func_64()
{
	switch (iLocal_58)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_BANG_BANG");
			func_31(11, 1);
			iLocal_58 = 5;
			break;
		
		case 5:
			if (((!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) || func_27(23)) || func_27(21)) || func_27(11))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_28())
			{
				iLocal_58 = 9;
				return;
			}
			unk_0x582EF587CC7597AE(unk_0x9E2D6C50374FCFA9());
			break;
		
		case 9:
			func_24("CHEAT_BANG_BANG");
			func_31(11, 0);
			iLocal_58 = 1;
			break;
		
		default:
			break;
	}
}

void func_65()
{
	switch (iLocal_61)
	{
		case 1:
			break;
		
		case 4:
			func_5(14);
			func_31(14, 1);
			func_67();
			break;
		
		case 5:
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if ((((((!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) || func_28()) || func_27(23)) || func_27(21)) || func_27(14)) || func_66(17)) || unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A()))
				{
					iLocal_61 = 9;
				}
			}
			else
			{
				iLocal_61 = 9;
			}
			break;
		
		case 9:
			func_24("CHEAT_GRAVITY_MOON");
			func_31(14, 0);
			unk_0x29F437C0738A11D6(0);
			iLocal_79 = 0;
			iLocal_61 = 1;
			break;
		
		default:
			break;
	}
}

int func_66(bool bParam0)
{
	if (BitTest(Global_32208, bParam0))
	{
		return 1;
	}
	return 0;
}

void func_67()
{
	iLocal_79++;
	if (iLocal_79 > 1)
	{
		iLocal_61 = 9;
		return;
	}
	switch (iLocal_79)
	{
		case 1:
			func_16("CHEAT_GRAVITY_MOON");
			unk_0x29F437C0738A11D6(1);
			break;
		
		default:
			break;
	}
	iLocal_61 = 5;
}

void func_68()
{
	func_87();
	func_81();
	func_80();
	func_79();
	func_78();
	func_77();
	func_76();
	func_74();
	func_73();
	func_72();
	func_69();
}

void func_69()
{
	if (iLocal_57 == 4)
	{
		iLocal_57 = 1;
		if ((func_27(23) || func_27(22)) || func_27(10))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			func_16("CHEAT_GIVE_PARACHUTE");
			unk_0x9521FB98DB6DDF50(unk_0xE2D3D51028F0428A(), joaat("gadget_parachute"), 1, 1, 1);
			func_5(10);
		}
	}
}

int func_70()
{
	if (iLocal_93)
	{
		iLocal_93 = 0;
		return 0;
	}
	if (func_71(0))
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0)
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

void func_72()
{
	int iVar0;
	
	if (iLocal_56 == 4)
	{
		iLocal_56 = 1;
		if ((func_27(23) || func_27(22)) || func_27(9))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if (unk_0x847BA8D143D888D1() == 0)
			{
				func_21("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9());
			if (iVar0 > 0)
			{
				func_16("CHEAT_WANTED_DOWN");
				unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), (iVar0 - 1), 0);
				func_5(9);
			}
			else
			{
				func_21("CHEAT_WANTED_DOWN_DENIED");
			}
		}
	}
}

void func_73()
{
	int iVar0;
	
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
		if ((func_27(23) || func_27(22)) || func_27(8))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if (unk_0x847BA8D143D888D1() == 0)
			{
				func_21("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9());
			if (iVar0 < unk_0x847BA8D143D888D1())
			{
				unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), iVar0 + 1, 0);
				unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
				func_16("CHEAT_WANTED_UP");
				func_5(8);
			}
			else
			{
				func_21("CHEAT_WANTED_UP_DENIED");
			}
		}
	}
}

void func_74()
{
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
		if ((((((func_27(23) || func_27(22)) || func_27(7)) || func_15(9)) || func_15(10)) || !unk_0xBDE74E4E16908DF5(func_75())) || !unk_0x74EACB77C7688F1C(unk_0x9E2D6C50374FCFA9(), 0))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x6DD7EC85B970FFF8(unk_0x9E2D6C50374FCFA9(), 1, 0);
			func_16("CHEAT_SPECIAL_ABILITY");
			func_5(7);
		}
	}
}

int func_75()
{
	return unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A());
}

void func_76()
{
	int iVar0;
	
	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
		if ((((func_27(23) || func_27(22)) || func_27(6)) || func_15(9)) || func_15(10))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			func_16("CHEAT_HEALTH_ARMOR");
			func_5(6);
			unk_0xF160248D9083ED0C(unk_0xE2D3D51028F0428A(), unk_0x72649CAA101B626C(unk_0xE2D3D51028F0428A()), 0);
			unk_0x4C12922738B94758(unk_0xE2D3D51028F0428A(), (unk_0x57A3E5A15723F6CA(unk_0x9E2D6C50374FCFA9()) - unk_0x28E4040BE8C027EF(unk_0xE2D3D51028F0428A())));
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				iVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
				if (unk_0xE5965CDF24F93A9F(iVar0))
				{
					if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
					{
						unk_0x02443408423266F9(iVar0);
					}
				}
			}
		}
	}
}

void func_77()
{
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
		if ((func_27(23) || func_27(22)) || func_27(5))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		func_5(5);
		switch (iLocal_71)
		{
			case 0:
				iLocal_71 = 1;
			
			case 1:
				unk_0x9CD86FAC92DBE038("EXTRASUNNY");
				unk_0xC4075F869BC19306();
				func_16("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_71 = 2;
				break;
			
			case 2:
				unk_0x9CD86FAC92DBE038("CLEAR");
				unk_0xC4075F869BC19306();
				func_16("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_71 = 3;
				break;
			
			case 3:
				unk_0x9CD86FAC92DBE038("CLOUDS");
				unk_0xC4075F869BC19306();
				func_16("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_71 = 4;
				break;
			
			case 4:
				unk_0x9CD86FAC92DBE038("SMOG");
				unk_0xC4075F869BC19306();
				func_16("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_71 = 6;
				break;
			
			case 6:
				unk_0x9CD86FAC92DBE038("OVERCAST");
				unk_0xC4075F869BC19306();
				func_16("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_71 = 7;
				break;
			
			case 7:
				unk_0x9CD86FAC92DBE038("RAIN");
				unk_0xC4075F869BC19306();
				func_16("CHEAT_ADVANCE_WEATHER_RAIN");
				func_31(5, 1);
				iLocal_71 = 8;
				break;
			
			case 8:
				unk_0x9CD86FAC92DBE038("THUNDER");
				unk_0xC4075F869BC19306();
				func_16("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_71 = 9;
				break;
			
			case 9:
				unk_0x9CD86FAC92DBE038("CLEARING");
				unk_0xC4075F869BC19306();
				func_16("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_71 = 11;
				break;
			
			case 11:
				unk_0x9CD86FAC92DBE038("XMAS");
				unk_0xC4075F869BC19306();
				func_16("CHEAT_ADVANCE_WEATHER_SNOW");
				iLocal_71 = 0;
				break;
			
			default:
				break;
			}
	}
}

void func_78()
{
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
		if ((func_27(23) || func_27(22)) || func_27(4))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		func_16("CHEAT_GIVE_WEAPONS");
		func_5(4);
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x5399A284D9FAD3BD(unk_0xE2D3D51028F0428A(), joaat("weapon_knife"), -1, 0);
			unk_0x5399A284D9FAD3BD(unk_0xE2D3D51028F0428A(), joaat("weapon_smg"), 300, 0);
			unk_0x5399A284D9FAD3BD(unk_0xE2D3D51028F0428A(), joaat("weapon_assaultrifle"), 300, 1);
			unk_0x5399A284D9FAD3BD(unk_0xE2D3D51028F0428A(), joaat("weapon_pumpshotgun"), 150, 0);
			unk_0x5399A284D9FAD3BD(unk_0xE2D3D51028F0428A(), joaat("weapon_sniperrifle"), 30, 0);
			unk_0x5399A284D9FAD3BD(unk_0xE2D3D51028F0428A(), joaat("weapon_grenade"), 5, 0);
			unk_0x5399A284D9FAD3BD(unk_0xE2D3D51028F0428A(), joaat("weapon_rpg"), 5, 0);
		}
	}
}

void func_79()
{
	switch (iLocal_50)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_FAST_SWIM");
			func_31(3, 1);
			iLocal_50 = 5;
			break;
		
		case 5:
			if (((!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) || func_27(23)) || func_27(22)) || func_27(3))
			{
				iLocal_50 = 9;
			}
			else
			{
				unk_0xC04F56833375054E(unk_0x9E2D6C50374FCFA9(), 1.49f);
				unk_0xADA020ED8ED3A5CD();
			}
			break;
		
		case 9:
			unk_0xC04F56833375054E(unk_0x9E2D6C50374FCFA9(), 1f);
			func_24("CHEAT_FAST_SWIM");
			func_31(3, 0);
			iLocal_50 = 1;
			break;
		
		default:
			break;
	}
}

void func_80()
{
	switch (iLocal_49)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_FAST_RUN");
			func_31(2, 1);
			iLocal_49 = 5;
			break;
		
		case 5:
			if ((((!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) || unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A())) || func_27(23)) || func_27(22)) || func_27(2))
			{
				iLocal_49 = 9;
			}
			else
			{
				if (unk_0x81BBCAF9FE3B469D(unk_0xE2D3D51028F0428A()) || (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()) && !unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())))
				{
					unk_0x0C6EBABC089A80BE(unk_0x9E2D6C50374FCFA9(), 1.49f);
				}
				else
				{
					unk_0x0C6EBABC089A80BE(unk_0x9E2D6C50374FCFA9(), 1f);
				}
				unk_0xADA020ED8ED3A5CD();
			}
			break;
		
		case 9:
			unk_0x0C6EBABC089A80BE(unk_0x9E2D6C50374FCFA9(), 1f);
			func_24("CHEAT_FAST_RUN");
			func_31(2, 0);
			iLocal_49 = 1;
			break;
		
		default:
			break;
	}
}

void func_81()
{
	int iVar0;
	
	switch (iLocal_48)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_SLIDEY_CARS");
			func_31(1, 1);
			iLocal_48 = 5;
			break;
		
		case 5:
			if (((!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) || func_27(23)) || func_27(22)) || func_27(1))
			{
				iLocal_48 = 9;
			}
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
				if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
				{
					if (unk_0xAB793EA186AB8DAA(iVar0, -1, 0) == unk_0xE2D3D51028F0428A())
					{
						if (iLocal_69 == 0)
						{
							iLocal_69 = iVar0;
							if (!unk_0x55B23FE400FCEA6B(iLocal_69, 0))
							{
								if (func_82(1))
								{
									unk_0x03E7CA3DC742FA72(iLocal_69, 1);
								}
								else
								{
									iLocal_69 = 0;
								}
							}
						}
						else if (iLocal_69 != iVar0)
						{
							if (!unk_0x55B23FE400FCEA6B(iLocal_69, 0))
							{
								unk_0x03E7CA3DC742FA72(iLocal_69, 0);
							}
							iLocal_69 = 0;
						}
					}
				}
			}
			break;
		
		case 9:
			func_24("CHEAT_SLIDEY_CARS");
			iLocal_48 = 10;
			break;
		
		case 10:
			if (!unk_0x55B23FE400FCEA6B(iLocal_69, 0))
			{
				unk_0x03E7CA3DC742FA72(iLocal_69, 0);
				iLocal_69 = 0;
			}
			func_31(1, 0);
			iLocal_48 = 1;
			break;
		
		default:
			break;
	}
}

int func_82(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		uVar0 = unk_0x9993EF7FDBCDB632();
		if (unk_0xE5965CDF24F93A9F(uVar0))
		{
			if (unk_0x55A0C756C4A8220C(iVar0, 0))
			{
				iVar1 = unk_0x15CAA6D7B11F1A7C(iVar0);
				iVar2 = func_8();
				if (iParam0 & 1 != 0)
				{
					if (!unk_0xCB09A834F0C86FBB(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!unk_0x6F0299ED3CEB4E5D(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!unk_0x4262B4DCEADC2695(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!unk_0xD2B5B1C8FC84FE0F(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (unk_0x7F0054A115D66F44(iVar0, "door_dside_r") != -1 || unk_0x7F0054A115D66F44(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (unk_0x7F0054A115D66F44(iVar0, "door_dside_r") == -1 || unk_0x7F0054A115D66F44(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (unk_0x6F0299ED3CEB4E5D(iVar1))
					{
						if (unk_0x7F0054A115D66F44(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (unk_0x7F0054A115D66F44(iVar0, "seat_dside_r") != -1 || unk_0x7F0054A115D66F44(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (unk_0x7F0054A115D66F44(iVar0, "seat_dside_r") == -1 || unk_0x7F0054A115D66F44(iVar0, "seat_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 256 != 0)
				{
					if (!func_10(iVar2))
					{
						return 0;
					}
					if (func_85(iVar2, 0) != iVar1)
					{
						return 0;
					}
				}
				if (iParam0 & 512 != 0)
				{
					if (!unk_0xCB09A834F0C86FBB(iVar1) && !unk_0x6F0299ED3CEB4E5D(iVar1))
					{
						return 0;
					}
					if (unk_0xA94E098B1788A730(iVar0))
					{
						return 0;
					}
					uVar4 = unk_0x24466A99E2719412(iVar0, &uVar3);
					if (!unk_0xACC32B78196FBC2A(uVar4))
					{
						if (unk_0x2E87280918B16506(uVar4) == unk_0x2E87280918B16506("taxiService"))
						{
							return 0;
						}
					}
					if (func_83(iVar0, iVar2, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_83(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xE5965CDF24F93A9F(uParam0) || !unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_84(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_113386.f_7229[iVar9], 0))
		{
			if (unk_0xBEF939CD3AF0B8F0(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_84(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_85(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_10(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_86(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_86(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113386.f_9085.f_99.f_58[128] && !Global_113386.f_9085.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113386.f_9085.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113386.f_9085.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_87()
{
	switch (iLocal_47)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_SUPER_JUMP");
			func_31(0, 1);
			iLocal_47 = 5;
			break;
		
		case 5:
			if ((((!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) || func_27(23)) || func_27(22)) || func_27(0)) || unk_0x479BCCF712B8168E())
			{
				iLocal_47 = 9;
				return;
			}
			unk_0xA39A115964CB8D41(unk_0x9E2D6C50374FCFA9());
			unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 217, 1);
			break;
		
		case 9:
			func_24("CHEAT_SUPER_JUMP");
			func_31(0, 0);
			iLocal_47 = 1;
			break;
		
		default:
			break;
	}
}

void func_88()
{
	if ((func_111() || iLocal_94 != 0) || func_15(14))
	{
		unk_0x7653D561C9574763(2, 243, 1);
	}
	func_110();
	if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		return;
	}
	if (unk_0x1C7F03843C4541AD(unk_0xE2D3D51028F0428A()))
	{
		return;
	}
	if (!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		return;
	}
	if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
	{
		return;
	}
	if (func_34() || unk_0x04458B4E5D9E466A())
	{
		return;
	}
	if (func_109())
	{
		if (!iLocal_92)
		{
			func_108();
			iLocal_92 = 1;
		}
		return;
	}
	iLocal_92 = 0;
	iLocal_93 = 0;
	if ((func_107(988027572, 12) || unk_0x21D2B24A19AD8996(joaat("buzzoff"))) || func_106(20, joaat("buzzard")))
	{
		func_103(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((func_107(-1134279030, 11) || unk_0x21D2B24A19AD8996(joaat("bandit"))) || func_106(20, joaat("bmx")))
	{
		func_103(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((func_107(971352167, 10) || unk_0x21D2B24A19AD8996(joaat("holein1"))) || func_106(20, joaat("caddy")))
	{
		func_103(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((func_107(-269863225, 10) || unk_0x21D2B24A19AD8996(joaat("comet"))) || func_106(20, joaat("comet2")))
	{
		func_103(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((func_107(458579068, 12) || unk_0x21D2B24A19AD8996(joaat("flyspray"))) || func_106(20, joaat("duster")))
	{
		func_103(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((func_107(-666513193, 12) || unk_0x21D2B24A19AD8996(joaat("rocket"))) || func_106(20, joaat("pcj")))
	{
		func_103(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((func_107(-1245984749, 10) || unk_0x21D2B24A19AD8996(joaat("rapidgt"))) || func_106(20, joaat("rapidgt")))
	{
		func_103(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((func_107(2076774618, 12) || unk_0x21D2B24A19AD8996(joaat("offroad"))) || func_106(20, joaat("sanchez")))
	{
		func_103(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((func_107(855685457, 9) || unk_0x21D2B24A19AD8996(joaat("vinewood"))) || func_106(20, joaat("stretch")))
	{
		func_103(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((func_107(-591395876, 12) || unk_0x21D2B24A19AD8996(joaat("barnstorm"))) || func_106(20, joaat("stunt")))
	{
		func_103(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((func_107(-1399217582, 10) || unk_0x21D2B24A19AD8996(joaat("trashed"))) || func_106(20, joaat("trash")))
	{
		func_103(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_102())
	{
		if ((func_107(-375917581, 10) || unk_0x21D2B24A19AD8996(joaat("extinct"))) || func_106(20, joaat("dodo")))
		{
			func_103(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((func_107(-2124307881, 10) || unk_0x21D2B24A19AD8996(joaat("deathcar"))) || func_106(20, joaat("dukes2")))
		{
			func_103(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((func_107(1028964594, 9) || unk_0x21D2B24A19AD8996(joaat("bubbles"))) || func_106(20, joaat("submersible2")))
		{
			func_103(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((func_107(-393416581, 11) || unk_0x21D2B24A19AD8996(joaat("hoptoit"))) || func_106(0, 0))
	{
		func_101();
	}
	if ((func_107(-296509791, 8) || unk_0x21D2B24A19AD8996(joaat("snowday"))) || func_106(1, 0))
	{
		func_100();
	}
	if ((func_107(1120820643, 7) || unk_0x21D2B24A19AD8996(joaat("catchme"))) || func_106(2, 0))
	{
		func_99();
	}
	if ((func_107(-421458016, 9) || unk_0x21D2B24A19AD8996(joaat("gotgills"))) || func_106(3, 0))
	{
		func_98();
	}
	if ((func_107(372390926, 12) || unk_0x21D2B24A19AD8996(joaat("toolup"))) || func_106(4, 0))
	{
		iLocal_51 = 4;
	}
	if ((func_107(606506837, 8) || unk_0x21D2B24A19AD8996(joaat("makeitrain"))) || func_106(5, 0))
	{
		iLocal_52 = 4;
	}
	if ((func_107(453014206, 12) || unk_0x21D2B24A19AD8996(joaat("turtle"))) || func_106(6, 0))
	{
		iLocal_53 = 4;
	}
	if ((func_107(1773187142, 9) || unk_0x21D2B24A19AD8996(joaat("powerup"))) || func_106(7, 0))
	{
		iLocal_54 = 4;
	}
	if ((func_107(1173296014, 10) || unk_0x21D2B24A19AD8996(joaat("fugitive"))) || func_106(8, 0))
	{
		iLocal_55 = 4;
	}
	if ((func_107(-381269753, 10) || unk_0x21D2B24A19AD8996(joaat("lawyerup"))) || func_106(9, 0))
	{
		iLocal_56 = 4;
	}
	if ((func_107(-2023988698, 11) || unk_0x21D2B24A19AD8996(joaat("skydive"))) || func_106(10, 0))
	{
		iLocal_57 = 4;
	}
	if ((func_107(-835863906, 12) || unk_0x21D2B24A19AD8996(joaat("highex"))) || func_106(11, 0))
	{
		func_97();
	}
	if ((func_107(1958387485, 12) || unk_0x21D2B24A19AD8996(joaat("incendiary"))) || func_106(12, 0))
	{
		func_96();
	}
	if ((func_107(-903985180, 9) || unk_0x21D2B24A19AD8996(joaat("hothands"))) || func_106(13, 0))
	{
		func_95();
	}
	if ((func_107(2087642905, 9) || unk_0x21D2B24A19AD8996(joaat("floater"))) || func_106(14, 0))
	{
		func_94();
	}
	if ((func_107(1257820019, 10) || unk_0x21D2B24A19AD8996(joaat("painkiller"))) || func_106(15, 0))
	{
		func_93();
	}
	if ((func_107(1540206179, 7) || unk_0x21D2B24A19AD8996(joaat("slowmo"))) || func_106(16, 0))
	{
		func_92();
	}
	if ((func_107(115565392, 16) || unk_0x21D2B24A19AD8996(joaat("skyfall"))) || func_106(17, 0))
	{
		func_91();
	}
	if ((func_107(-1276513277, 8) || unk_0x21D2B24A19AD8996(joaat("liquor"))) || func_106(18, 0))
	{
		func_90();
	}
	if ((func_107(2040433593, 9) || unk_0x21D2B24A19AD8996(joaat("deadeye"))) || func_106(19, 0))
	{
		func_89();
	}
}

void func_89()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(16))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_63 != 1)
	{
		func_21("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_66 = 4;
	}
}

void func_90()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_65 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_65 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(18))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_65 = 1;
		return;
	}
	if (iLocal_65 == 1)
	{
		iLocal_65 = 4;
	}
	else if (iLocal_65 == 5)
	{
		iLocal_65 = 9;
	}
}

void func_91()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (unk_0x479BCCF712B8168E())
	{
		func_21("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_64 != 1)
	{
		func_21("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_27(23) || func_27(21)) || func_27(17)) || func_66(0)) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) || !unk_0x66DEF7450747437A())
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if ((unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 0)) || unk_0xB4C854DD86E40FDA(joaat("respawn_controller")) > 0)
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	iLocal_64 = 2;
}

void func_92()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(16))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_66 != 1)
	{
		func_21("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_63 = 4;
	}
}

void func_93()
{
	struct<3> Var0;
	
	Var0 = { func_19(unk_0x9E2D6C50374FCFA9()) };
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (((func_27(23) || func_27(21)) || func_27(15)) || Var0.f_2 <= -170f)
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_62 == 1)
	{
		iLocal_62 = 4;
	}
	else if (iLocal_62 == 5)
	{
		iLocal_62 = 9;
	}
}

void func_94()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((((func_27(23) || func_27(21)) || func_27(14)) || func_66(17)) || unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A()))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	iLocal_61 = 4;
}

void func_95()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_60 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_60 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(13))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_60 = 1;
		return;
	}
	if (iLocal_60 == 1)
	{
		iLocal_60 = 4;
	}
	else if (iLocal_60 == 5)
	{
		iLocal_60 = 9;
	}
}

void func_96()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_59 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_59 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(12))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_59 = 1;
		return;
	}
	if (iLocal_59 == 1)
	{
		iLocal_59 = 4;
	}
	else if (iLocal_59 == 5)
	{
		iLocal_59 = 9;
	}
}

void func_97()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_58 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_58 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(11))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_58 = 1;
		return;
	}
	if (iLocal_58 == 1)
	{
		iLocal_58 = 4;
	}
	else if (iLocal_58 == 5)
	{
		iLocal_58 = 9;
	}
}

void func_98()
{
	if ((((func_27(23) || func_27(22)) || func_27(3)) || func_15(9)) || func_15(10))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_50 == 1)
	{
		iLocal_50 = 4;
	}
	else if (iLocal_50 == 5)
	{
		iLocal_50 = 9;
	}
}

void func_99()
{
	if ((((func_27(23) || func_27(22)) || func_27(2)) || func_15(9)) || func_15(10))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_49 == 1)
	{
		iLocal_49 = 4;
	}
	else if (iLocal_49 == 5)
	{
		iLocal_49 = 9;
	}
}

void func_100()
{
	if ((func_27(23) || func_27(22)) || func_27(1))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_48 == 1)
	{
		iLocal_48 = 4;
	}
	else if (iLocal_48 == 5)
	{
		iLocal_48 = 9;
	}
}

void func_101()
{
	if (((func_27(23) || func_27(22)) || func_27(0)) || unk_0x479BCCF712B8168E())
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_47 == 1)
	{
		iLocal_47 = 4;
	}
	else if (iLocal_47 == 5)
	{
		iLocal_47 = 9;
	}
}

int func_102()
{
	var uVar0;
	
	if (Global_152259 == 2)
	{
		return 1;
	}
	else if (Global_152259 == 3)
	{
		return 0;
	}
	if (unk_0xAF5DBE95205A49D1())
	{
		if (unk_0x5B66E9FB7530BB95())
		{
			if (unk_0x2F04A4784A70593C())
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xCED9E32812D6C7C7(&uVar0, 2);
				unk_0xCED9E32812D6C7C7(&uVar0, 4);
				unk_0xCED9E32812D6C7C7(&uVar0, 6);
				unk_0xCED9E32812D6C7C7(&Global_25, 2);
				unk_0xCED9E32812D6C7C7(&Global_25, 4);
				unk_0xCED9E32812D6C7C7(&Global_25, 6);
				unk_0x076A5661EF5ABEE4(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xB8F4926B803BFD19())
				{
					iVar0 = unk_0x5D851A9195129CE9(866);
					unk_0xCED9E32812D6C7C7(&iVar0, false);
					unk_0x212EDDD868F364B5(iVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0xB8F4926B803BFD19())
	{
		if (BitTest(unk_0x5D851A9195129CE9(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_103(int iParam0, char* sParam1)
{
	if (iLocal_46 == 1)
	{
		if (((((func_15(9) || unk_0xB4C854DD86E40FDA(joaat("barry1")) > 0) || unk_0xB4C854DD86E40FDA(joaat("tennis")) > 0) || func_27(23)) || func_27(22)) || func_27(20))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (!func_104(iParam0))
		{
			func_21("CHEAT_VEHICLE_LOCKED_DENIED");
			return;
		}
		iLocal_67 = iParam0;
		sLocal_70 = sParam1;
		iLocal_46 = 2;
	}
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (func_105(66, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("dukes2"):
			if (func_105(64, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("submersible2"):
			if (func_105(63, 0) == 0)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_105(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_32749[iParam0], iParam1);
}

int func_106(bool bParam0, int iParam1)
{
	if (BitTest(Global_32210, bParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_32211)
			{
				unk_0xB0550BC91B0159D6(&Global_32210, bParam0);
				iLocal_93 = 1;
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			unk_0xB0550BC91B0159D6(&Global_32210, bParam0);
			iLocal_93 = 1;
			return 1;
		}
	}
	return 0;
}

int func_107(int iParam0, int iParam1)
{
	if (!func_15(14))
	{
		return unk_0x549ECFC9F246E127(iParam0, iParam1);
	}
	return 0;
}

void func_108()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_80[iVar0] != -1)
		{
			unk_0x35A0954FC4DC4CAD(iLocal_80[iVar0]);
			iLocal_80[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_109()
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

void func_110()
{
	if (func_15(14) || (!unk_0xE9E8955A780DDA01() && iLocal_94 != 0))
	{
		iLocal_94 = unk_0x320D1840B6DAA1CC();
	}
	if (iLocal_94 != 0)
	{
		if (!func_15(14))
		{
			if ((unk_0x320D1840B6DAA1CC() - iLocal_94) > 1000)
			{
				iLocal_94 = 0;
			}
		}
	}
}

int func_111()
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

void func_112()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_80[iVar0] = -1;
		iVar0++;
	}
	iLocal_92 = 0;
	iLocal_91 = 0;
}

void func_113()
{
	unk_0xF542970145BC96B5(0);
	if (iLocal_64 == 5)
	{
		func_37();
	}
	if (iLocal_65 == 5)
	{
		func_46(1);
	}
	if (iLocal_63 == 5 || iLocal_66 == 5)
	{
		unk_0x434E3AE126DDC5B5(1f);
	}
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (iLocal_62 == 5)
		{
			unk_0xC099DA307DD6BC62(unk_0x9E2D6C50374FCFA9(), 0);
			unk_0xBED097BB6359F09C(unk_0xE2D3D51028F0428A(), 0, 0, 0, 0, 0, 0, 0, 0);
		}
		unk_0x0C6EBABC089A80BE(unk_0x9E2D6C50374FCFA9(), 1f);
		unk_0xC04F56833375054E(unk_0x9E2D6C50374FCFA9(), 1f);
	}
	unk_0x29F437C0738A11D6(0);
	Global_32208 = 0;
	Global_32207 = 0;
	Global_32209 = 0;
	Global_32210 = 0;
	Global_32212 = 0;
	Global_32211 = 0;
	unk_0xAFBDF6A5E54114C1();
}

