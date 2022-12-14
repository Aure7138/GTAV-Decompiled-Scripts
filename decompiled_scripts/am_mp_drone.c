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
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	struct<3> Local_96[32];
	var uLocal_193 = 0;
	struct<349> Local_194 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1069547520, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	struct<12> ScriptParam_0 = { 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0xA26A9A07F761D8F8())
	{
		func_526(ScriptParam_0);
	}
	else
	{
		func_495(0);
	}
	while (true)
	{
		func_494();
		if (func_486())
		{
			func_495(0);
		}
		if (func_480())
		{
			func_495(0);
		}
		func_2();
		if (unk_0xE85391CF212DE622())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
	if (!func_479(6))
	{
		func_478();
		func_477();
		func_476();
		func_472();
		func_471();
	}
	func_468();
	func_466();
	func_462();
	func_459();
	if (func_479(0))
	{
		func_410();
	}
	else if (func_479(1))
	{
		if (!func_409())
		{
			func_402();
			func_385();
		}
		else
		{
			func_384(1);
			func_383(7);
		}
	}
	else if (func_479(2))
	{
		func_376();
	}
	else if (func_479(3))
	{
		func_368();
	}
	else if (func_479(4))
	{
		func_367();
		func_366();
		func_364();
		func_363();
		func_362();
		func_361();
		func_360();
		func_352();
		func_348();
		func_332();
		func_330();
		func_287();
		func_286();
		func_270();
		func_376();
		func_267();
		if (func_260(0))
		{
			func_259();
			return;
		}
		func_255();
		func_249();
		func_237(0);
		func_221();
		func_212();
		func_204();
		func_182();
		func_175();
		func_173();
		func_99();
		func_84();
		func_82();
		func_81();
	}
	else if (func_479(5))
	{
		func_33();
	}
	else if (func_479(7))
	{
		func_26();
	}
	if (!func_479(4) && !func_479(6))
	{
		func_20();
	}
	func_5();
	func_4();
	func_3();
}

void func_3()
{
	Local_194.f_45++;
	if (Local_194.f_45 >= 32)
	{
		Local_194.f_45 = 0;
	}
}

void func_4()
{
	if (Local_194.f_45 != -1)
	{
		if (unk_0x5E6D8811A0BD0954(Local_96[Local_194.f_45 /*3*/].f_2))
		{
			if (Global_1914091[unk_0x93E99A2DBCBA9CFA() /*297*/].f_64[Local_194.f_45] != unk_0xDCE61FCD9D7F205E(Local_96[Local_194.f_45 /*3*/].f_2))
			{
				Global_1914091[unk_0x93E99A2DBCBA9CFA() /*297*/].f_64[Local_194.f_45] = unk_0xDCE61FCD9D7F205E(Local_96[Local_194.f_45 /*3*/].f_2);
			}
		}
	}
}

void func_5()
{
	int iVar0;
	
	iVar0 = unk_0xADCF72047FEB806E(Local_194.f_45);
	if (unk_0x93E99A2DBCBA9CFA() != iVar0)
	{
		if (func_19(iVar0, 1, 1))
		{
			if (func_17(func_18()))
			{
				if (BitTest(Local_194.f_7, Local_194.f_45))
				{
					if (!unk_0x33676B7D38C8F4C6(iVar0) && !unk_0x24E00F3323461864(iVar0, "AM_MP_DRONE", 0))
					{
						unk_0x061B1200C95204CB(&(Local_194.f_7), Local_194.f_45);
					}
				}
				if (func_14(iVar0, 0))
				{
					if (!BitTest(Local_194.f_7, Local_194.f_45) && func_9(iVar0))
					{
						func_7(iVar0, 1);
						unk_0xCD80955BA7109E45(Local_194.f_159, iVar0, 1);
						unk_0xECDAB41968FF21A8(&(Local_194.f_7), Local_194.f_45);
					}
				}
				else if ((unk_0xB7A628320EFF8E47(func_6(iVar0), Local_194.f_150) > 504100f && !func_479(1)) && !func_479(3))
				{
					if (BitTest(Local_194.f_7, Local_194.f_45))
					{
						func_7(iVar0, 0);
						unk_0xCD80955BA7109E45(Local_194.f_159, iVar0, 0);
						unk_0x061B1200C95204CB(&(Local_194.f_7), Local_194.f_45);
						unk_0x061B1200C95204CB(&(Local_194.f_8), Local_194.f_45);
					}
				}
			}
			else if (func_14(iVar0, 1) && func_9(iVar0))
			{
				if (!BitTest(Local_194.f_8, Local_194.f_45))
				{
					func_7(iVar0, 1);
					unk_0xECDAB41968FF21A8(&(Local_194.f_8), Local_194.f_45);
				}
			}
			else if (BitTest(Local_194.f_8, Local_194.f_45))
			{
				func_7(iVar0, 0);
				unk_0x061B1200C95204CB(&(Local_194.f_8), Local_194.f_45);
				unk_0x061B1200C95204CB(&(Local_194.f_7), Local_194.f_45);
			}
		}
	}
}

Vector3 func_6(int iParam0)
{
	return unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(iParam0), 0);
}

void func_7(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = -248680084;
	Var0.f_1 = unk_0x93E99A2DBCBA9CFA();
	Var0.f_2 = iParam1;
	iVar3 = func_8(iParam0);
	if (!iVar3 == 0)
	{
		unk_0x46F55A5B9F053761(1, &Var0, 3, iVar3);
	}
}

var func_8(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xECDAB41968FF21A8(&uVar0, iParam0);
	}
	return uVar0;
}

int func_9(int iParam0)
{
	if (func_13(iParam0, 1, 1))
	{
		return 0;
	}
	if (func_11(iParam0))
	{
		return 0;
	}
	if (func_10(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_10(int iParam0)
{
	if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 11))
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0)
{
	if (iParam0 != func_12() && func_19(iParam0, 1, 1))
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321, 3);
	}
	return 0;
}

int func_12()
{
	return -1;
}

int func_13(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_12())
	{
		return 0;
	}
	if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_14(int iParam0, bool bParam1)
{
	struct<3> Var0;
	
	if (func_13(iParam0, 1, 1))
	{
		return 0;
	}
	if (func_11(iParam0))
	{
		return 0;
	}
	if (func_10(iParam0))
	{
		return 0;
	}
	Var0 = { func_6(iParam0) };
	if (bParam1)
	{
		if (func_16())
		{
			if (func_17(func_15()))
			{
				if (unk_0xB7A628320EFF8E47(Var0, unk_0x30BE8A934C020461(func_15(), 1)) < 490000f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xB7A628320EFF8E47(Var0, Local_194.f_150) < 490000f)
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	if (Global_1853756 != func_12())
	{
		if (unk_0x7DE17ACDD8BA2642(Global_1648776))
		{
			return Global_1648776;
		}
		if (unk_0x7DE17ACDD8BA2642(Global_1968178[Global_1853756]))
		{
			return Global_1968178[Global_1853756];
		}
	}
	return -1;
}

bool func_16()
{
	return BitTest(Global_1962996.f_2, 8);
}

int func_17(int iParam0)
{
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if (!unk_0x055111B11E6624FD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_18()
{
	if (unk_0x93E99A2DBCBA9CFA() != -1)
	{
		return Global_1962996.f_20;
	}
	return -1;
}

int func_19(int iParam0, bool bParam1, bool bParam2)
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

void func_20()
{
	int iVar0;
	
	if (Local_194.f_156)
	{
		if (func_25(&(Local_194.f_249)))
		{
			if (func_24())
			{
				iVar0 = Global_262145.f_25311;
			}
			else
			{
				iVar0 = Global_262145.f_24664;
			}
			if (func_22(&(Local_194.f_249), iVar0, 0))
			{
				func_21(&(Local_194.f_249));
				Local_194.f_18 = 100;
				unk_0x061B1200C95204CB(&(Local_194.f_5), 4);
				unk_0x061B1200C95204CB(&(Local_194.f_5), 3);
				unk_0x061B1200C95204CB(&(Local_194.f_5), 24);
				Local_194.f_156 = 0;
			}
		}
	}
}

void func_21(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_22(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_23(uParam0, bParam2, 0);
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

void func_23(var uParam0, bool bParam1, bool bParam2)
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

bool func_24()
{
	return BitTest(Global_1962996.f_2, 2);
}

bool func_25(var uParam0)
{
	return uParam0->f_1;
}

void func_26()
{
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159))
	{
		if (unk_0xFE2AB315FD8C7A6F(Local_194.f_159))
		{
			if (!func_27())
			{
				func_495(1);
			}
			else
			{
				func_495(0);
			}
		}
		else
		{
			unk_0xF05A5F7FFA0C5E2D(Local_194.f_159);
		}
	}
	else if (!func_27())
	{
		func_495(1);
	}
	else
	{
		func_495(0);
	}
}

int func_27()
{
	if (func_32())
	{
		return 1;
	}
	if (func_31())
	{
		return 1;
	}
	if (func_30() && func_28(unk_0x93E99A2DBCBA9CFA()))
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_29(Global_2657589[iParam0 /*466*/].f_321.f_7) == 17;
			}
		}
	}
	return 0;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
	}
	return -1;
}

bool func_30()
{
	return BitTest(Global_1962996.f_2, 5);
}

bool func_31()
{
	return BitTest(Global_1962996, 24);
}

bool func_32()
{
	return BitTest(Global_1962996, 16);
}

void func_33()
{
	int iVar0;
	
	unk_0xEDECDDE17C1E41F5(9);
	unk_0xEDECDDE17C1E41F5(7);
	unk_0xEDECDDE17C1E41F5(8);
	unk_0xE288789FFB1A0C2F();
	unk_0x8B438725D591ED78(0, 199, 1);
	unk_0x8B438725D591ED78(0, 200, 1);
	func_80();
	func_78();
	func_71(1);
	if (!BitTest(Local_194.f_5, 1))
	{
		if (!func_41() && !func_40())
		{
			if ((func_39() || func_24()) || func_38())
			{
				unk_0x35DD50D05C962B6A(unk_0xC1A5EC5C986B98AD());
			}
		}
		if (unk_0x5E6D8811A0BD0954(Local_194.f_159))
		{
			unk_0x73BB407763F5834B(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 1);
		}
		if (unk_0x209C5E3492025E4B(Local_194.f_34))
		{
			Local_194.f_34 = unk_0x9F2C1BA4F2BF5CF8();
			unk_0x531D638530A8DB97(Local_194.f_34, "HUD_Static_Loop", Local_194.f_157, 1);
		}
		if (!func_37())
		{
			unk_0xCA9F34C06A0529CE(0, 300, 100);
			unk_0xADD48E9C814DB7CB(func_36());
			unk_0xECDAB41968FF21A8(&(Local_194.f_6), 0);
		}
		unk_0xECDAB41968FF21A8(&(Local_194.f_5), 1);
	}
	else if (!func_25(&(Local_194.f_245)))
	{
		func_23(&(Local_194.f_245), 0, 0);
	}
	else
	{
		iVar0 = 1000;
		if (func_35())
		{
			iVar0 = 500;
		}
		else if (func_16() && func_34())
		{
			iVar0 = 150;
		}
		if (func_22(&(Local_194.f_245), iVar0, 0) || func_37())
		{
			if (Local_194.f_38 == -1)
			{
				if (unk_0x209C5E3492025E4B(Local_194.f_38))
				{
					Local_194.f_38 = unk_0x9F2C1BA4F2BF5CF8();
					unk_0x531D638530A8DB97(Local_194.f_38, "HUD_Disconnect", Local_194.f_157, 1);
				}
			}
			func_384(1);
			func_383(7);
		}
	}
}

bool func_34()
{
	return Global_2793044.f_354;
}

bool func_35()
{
	return BitTest(Global_1962996.f_2, 4);
}

char* func_36()
{
	if (func_16())
	{
		return "MissileOutOfRange";
	}
	return "RemixDrone";
}

bool func_37()
{
	return BitTest(Global_1962996, 20);
}

bool func_38()
{
	return BitTest(Global_1962996.f_2, 3);
}

bool func_39()
{
	return BitTest(Global_1962996, 11);
}

bool func_40()
{
	return Global_2764615;
}

int func_41()
{
	if ((func_70(unk_0x93E99A2DBCBA9CFA(), 0) && Global_1581961 == 1) && func_42())
	{
		return 1;
	}
	return 0;
}

int func_42()
{
	char* sVar0;
	
	if ((Global_1581961 != -1 || Global_1581967 != -1) || Global_1581970 != -1)
	{
		sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
		if (func_62(unk_0xC1A5EC5C986B98AD()))
		{
			sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
		}
		if ((((((((unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), sVar0, "enter_left", 3)) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), sVar0, "enter", 3)) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), sVar0, "exit", 3)) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), sVar0, "exit_left", 3)) || func_60(unk_0xC1A5EC5C986B98AD(), joaat("script_task_go_straight_to_coord")))
		{
			return 0;
		}
		if (((((((((!unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) && !unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), sVar0, "base", 3)) && !unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), sVar0, "idle_a", 3)) && !unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), sVar0, "idle_b", 3)) && !unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), sVar0, "idle_c", 3))
		{
			return 0;
		}
		if (func_43())
		{
			return 0;
		}
	}
	return 1;
}

int func_43()
{
	int iVar0;
	
	if (func_59(unk_0x93E99A2DBCBA9CFA()))
	{
		iVar0 = func_58(unk_0x93E99A2DBCBA9CFA());
		if (func_19(iVar0, 0, 1))
		{
			if ((((((func_11(iVar0) && func_29(func_57(iVar0)) == 4) && unk_0x7DE17ACDD8BA2642(unk_0xF2CFBB1105511E1A(iVar0))) && !unk_0x66599E73DBA5A850(unk_0xF2CFBB1105511E1A(iVar0))) && unk_0x3C3D6D026CF7F51B(unk_0xF2CFBB1105511E1A(iVar0), 0)) && unk_0x7DE17ACDD8BA2642(unk_0x95DC39736F6748E3(unk_0xF2CFBB1105511E1A(iVar0), 0))) && func_56(unk_0x95DC39736F6748E3(unk_0xF2CFBB1105511E1A(iVar0), 0)))
			{
				return 1;
			}
			if (!func_55(Global_4718592.f_113724))
			{
				if (func_59(iVar0))
				{
					if (func_54(iVar0))
					{
						return 1;
					}
					else if (func_11(unk_0x93E99A2DBCBA9CFA()) || func_53())
					{
						return 1;
					}
				}
			}
		}
	}
	if (Global_1963025)
	{
		return 1;
	}
	if (func_52(unk_0x93E99A2DBCBA9CFA()))
	{
		iVar0 = func_51(unk_0x93E99A2DBCBA9CFA());
		if (func_19(iVar0, 0, 1))
		{
			if ((((((func_11(iVar0) && func_29(func_57(iVar0)) == 9) && unk_0x7DE17ACDD8BA2642(unk_0xF2CFBB1105511E1A(iVar0))) && !unk_0x66599E73DBA5A850(unk_0xF2CFBB1105511E1A(iVar0))) && unk_0x3C3D6D026CF7F51B(unk_0xF2CFBB1105511E1A(iVar0), 0)) && unk_0x7DE17ACDD8BA2642(unk_0x95DC39736F6748E3(unk_0xF2CFBB1105511E1A(iVar0), 0))) && unk_0x504B9BB48D41C264(unk_0x95DC39736F6748E3(unk_0xF2CFBB1105511E1A(iVar0), 0)) == joaat("avenger"))
			{
				return 1;
			}
			if (func_50(iVar0))
			{
				return 1;
			}
			else if (func_11(unk_0x93E99A2DBCBA9CFA()) || func_53())
			{
				return 1;
			}
		}
	}
	if (func_70(unk_0x93E99A2DBCBA9CFA(), 0))
	{
		iVar0 = func_49(unk_0x93E99A2DBCBA9CFA());
		if (func_19(iVar0, 0, 1))
		{
			if ((((Global_1853755 != func_12() && func_11(Global_1853755)) && func_29(func_57(Global_1853755)) == 11) && func_48(Global_1853755, -1)) && unk_0x091E6E360116B927(unk_0x95DC39736F6748E3(unk_0xF2CFBB1105511E1A(Global_1853755), 0), joaat("terbyte")))
			{
				return 1;
			}
			else if (func_47(iVar0))
			{
				return 1;
			}
			else if (func_11(unk_0x93E99A2DBCBA9CFA()) || func_53())
			{
				return 1;
			}
		}
	}
	if (func_46(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x93E99A2DBCBA9CFA() != func_12())
		{
			iVar0 = Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_321.f_10;
			if (func_19(iVar0, 0, 1))
			{
				if (func_11(unk_0x93E99A2DBCBA9CFA()) || func_53())
				{
					return 1;
				}
			}
		}
	}
	if (func_52(unk_0x93E99A2DBCBA9CFA()) || func_45(unk_0x93E99A2DBCBA9CFA()))
	{
		switch (Global_1581967)
		{
			case 1:
				if (Global_262145.f_23092)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_23093)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_23094)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1581965 == 1)
	{
		return 1;
	}
	if (func_44(3))
	{
		if (Global_1835503 == 185)
		{
			if (Global_1836629 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_44(int iParam0)
{
	return Global_262145.f_5042[iParam0] == Global_4718592.f_113724;
}

int func_45(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_29(Global_2657589[iParam0 /*466*/].f_321.f_7) == 10;
			}
		}
	}
	return 0;
}

int func_46(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_12())
			{
				return func_29(Global_2657589[iParam0 /*466*/].f_321.f_7) == 20;
			}
		}
	}
	return 0;
}

int func_47(int iParam0)
{
	if (iParam0 != func_12())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_3, 4);
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	var uVar0;
	
	if (func_19(iParam0, 1, 1))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xF2CFBB1105511E1A(iParam0), 0))
		{
			uVar0 = unk_0x95DC39736F6748E3(unk_0xF2CFBB1105511E1A(iParam0), 0);
			if (unk_0xFBD273FDBCF0C5BD(uVar0, 0))
			{
				if (unk_0xC1A5EC5C986B98AD() == unk_0xA66E176E5772E965(uVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_49(int iParam0)
{
	if (iParam0 == func_12())
	{
		return iParam0;
	}
	return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_50(int iParam0)
{
	if (iParam0 != func_12())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_2, 6);
	}
	return 0;
}

int func_51(int iParam0)
{
	if (iParam0 == func_12())
	{
		return iParam0;
	}
	return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_52(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_12())
			{
				return func_29(Global_2657589[iParam0 /*466*/].f_321.f_7) == 8;
			}
		}
	}
	return 0;
}

var func_53()
{
	return BitTest(Global_1950108, 6);
}

int func_54(int iParam0)
{
	if (iParam0 != func_12())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321, 6);
	}
	return 0;
}

bool func_55(int iParam0)
{
	return Global_262145.f_5033[4] == iParam0;
}

int func_56(int iParam0)
{
	if (unk_0x504B9BB48D41C264(uParam0) == joaat("hauler2") || unk_0x504B9BB48D41C264(iParam0) == joaat("phantom3"))
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0)
{
	if (iParam0 != func_12() && func_19(iParam0, 1, 1))
	{
		return Global_2657589[iParam0 /*466*/].f_321.f_17;
	}
	return -1;
}

int func_58(int iParam0)
{
	if (iParam0 == func_12())
	{
		return iParam0;
	}
	return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_59(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_12())
			{
				return func_29(Global_2657589[iParam0 /*466*/].f_321.f_7) == 5;
			}
		}
	}
	return 0;
}

int func_60(int iParam0, int iParam1)
{
	if (func_61(iParam0))
	{
		if (unk_0xF5F493B789EA063E(iParam0, iParam1) == 1 || unk_0xF5F493B789EA063E(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	if (func_17(uParam0))
	{
		if (!unk_0x66599E73DBA5A850(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x504B9BB48D41C264(iParam0);
	iVar2 = -1;
	iVar3 = -1;
	if (iVar0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_68(iParam0, 6);
		if (iVar1 >= 256)
		{
			iVar2 = func_64(iVar0, iVar1, 6, 4);
			iVar3 = func_63(iVar2);
		}
		if (((((((((((((iVar1 >= 0 && iVar1 <= 15) || (iVar1 >= 96 && iVar1 <= 111)) || (iVar1 >= 112 && iVar1 <= 127)) || (iVar1 >= 128 && iVar1 <= 143)) || (iVar1 >= 192 && iVar1 <= 207)) || (iVar1 >= 224 && iVar1 <= 239)) || iVar3 == 0) || iVar3 == 6) || iVar3 == 7) || iVar3 == 8) || iVar3 == 12) || iVar3 == 14) || (iVar2 != -1 && unk_0x7FEA86016BC12607(iVar2, joaat("high_heels"), 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0x7FEA86016BC12607(iParam0, joaat("draw_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x7FEA86016BC12607(iParam0, joaat("draw_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x7FEA86016BC12607(iParam0, joaat("draw_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x7FEA86016BC12607(iParam0, joaat("draw_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x7FEA86016BC12607(iParam0, joaat("draw_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x7FEA86016BC12607(iParam0, joaat("draw_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x7FEA86016BC12607(iParam0, joaat("draw_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x7FEA86016BC12607(iParam0, joaat("draw_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x7FEA86016BC12607(iParam0, joaat("draw_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x7FEA86016BC12607(iParam0, joaat("draw_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x7FEA86016BC12607(iParam0, joaat("draw_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x7FEA86016BC12607(iParam0, joaat("draw_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x7FEA86016BC12607(iParam0, joaat("draw_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x7FEA86016BC12607(iParam0, joaat("draw_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x7FEA86016BC12607(iParam0, joaat("draw_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x7FEA86016BC12607(iParam0, joaat("draw_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_64(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	struct<2> Var19;
	int iVar36;
	int iVar37;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x469012E2C56B87C8(&Var0);
		iVar17 = (iParam1 - func_67(iParam0));
		if (iVar17 < 0)
		{
			return -1;
		}
		iVar18 = unk_0xDAEB80C06A5C96B9(iParam3, 10, -1, 1, -1, -1);
		if (iVar18 <= iVar17)
		{
			return -1;
		}
		unk_0x58801753BDEA41F4(iVar17, &Var0);
		return Var0.f_1;
	}
	else
	{
		unk_0xF9105E199166E912(&Var19);
		iVar36 = (iParam1 - func_65(iParam0, func_66(iParam2)));
		if (iVar36 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_78491.f_26[iParam2] && iParam1 == Global_78491[iParam2]) && Global_78491.f_13[iParam2] != 0)
		{
			return Global_78491.f_13[iParam2];
		}
		iVar37 = unk_0xDAEB80C06A5C96B9(iParam3, 10, -1, 0, -1, func_66(iParam2));
		if (iVar37 <= iVar36)
		{
			return -1;
		}
		unk_0x6F70EC5F2F78997E(iVar36, &Var19);
		Global_78491.f_13[iParam2] = Var19.f_1;
		Global_78491[iParam2] = iParam1;
		Global_78491.f_26[iParam2] = iParam0;
		return Var19.f_1;
	}
	return -1;
}

int func_65(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_68(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x66599E73DBA5A850(uParam0))
	{
		return -99;
	}
	uVar0 = func_66(iParam1);
	iVar1 = unk_0xAC464F61BE9FD50D(iParam0, uVar0);
	iVar2 = unk_0xEDEBC30DEBDF84C8(iParam0, uVar0);
	return func_69(iParam0, iVar1, iVar2, iParam1);
}

int func_69(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	uVar0 = func_66(iParam3);
	iVar1 = unk_0x39CBCB88BA546BDF(uParam0, uVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + unk_0x2F05A8F9724E2992(uParam0, uVar0, iVar3));
		}
		else
		{
			iVar2 = (iVar2 + iParam2);
			return iVar2;
		}
		iVar3++;
	}
	return -99;
}

int func_70(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			uVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			if (unk_0x504B9BB48D41C264(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_12())
			{
				return func_29(Global_2657589[iParam0 /*466*/].f_321.f_7) == 12;
			}
		}
	}
	return 0;
}

void func_71(int iParam0)
{
	if (func_77())
	{
		return;
	}
	if (!Global_20383.f_1 == 1)
	{
		if (func_76(0))
		{
			func_72(iParam0);
		}
		unk_0xECDAB41968FF21A8(&Global_8254, 2);
	}
}

void func_72(int iParam0)
{
	if (func_77())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_75())
		{
			func_74(1, 1);
		}
		else
		{
			func_74(0, 0);
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
	if (!func_73())
	{
		Global_20383.f_1 = 3;
	}
}

int func_73()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_74(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_76(0))
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

bool func_75()
{
	return BitTest(Global_1962996, 5);
}

int func_76(int iParam0)
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

bool func_77()
{
	return BitTest(Global_1962996, 19);
}

void func_78()
{
	unk_0x063E0F2515867ED4();
	func_79();
}

void func_79()
{
	Global_23131.f_134 = 1;
}

void func_80()
{
	Global_1574839 = 1;
}

void func_81()
{
	if (func_30())
	{
		if (func_31())
		{
			if (func_17(unk_0xC1A5EC5C986B98AD()))
			{
				unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 124, 1);
			}
		}
	}
}

void func_82()
{
	char* sVar0;
	
	if (!func_83())
	{
		return;
	}
	sVar0 = "scr_xs_props";
	unk_0xEC499B98292618DE(sVar0);
	if (unk_0x7B16A34B3A977485(sVar0))
	{
		if (unk_0x5E6D8811A0BD0954(Local_194.f_159))
		{
			if (!unk_0xFB8555459C1C8AE7(Local_194.f_174[unk_0x93E99A2DBCBA9CFA()]))
			{
				unk_0x8DDE86C046BC23A6(sVar0);
				if (func_35())
				{
					Local_194.f_174[unk_0x93E99A2DBCBA9CFA()] = unk_0x785A44AA698F0E32("scr_xs_guided_missile_trail", unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				}
				else
				{
					Local_194.f_174[unk_0x93E99A2DBCBA9CFA()] = unk_0x785A44AA698F0E32("scr_xs_guided_missile_trail", unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0f, 0.25f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
				}
			}
		}
	}
}

int func_83()
{
	if (func_35())
	{
		return 1;
	}
	if (func_16())
	{
		return 1;
	}
	return 0;
}

void func_84()
{
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159))
	{
		if (!unk_0x7DE17ACDD8BA2642(Local_194.f_161))
		{
			unk_0x852EC2A7DE66202D(func_98());
			if (unk_0x0CBB7C273DED26E7(func_98()))
			{
				if (!BitTest(Local_194.f_5, 6))
				{
					if (func_92(unk_0x42AE3F61BF594E6C(false, 0) + 1, 0, 1))
					{
						unk_0xE5CBFFB5DE87586F(unk_0x9E6BB98E57150635(0) + 1);
						unk_0xECDAB41968FF21A8(&(Local_194.f_5), 6);
					}
				}
				else if (unk_0x334CA22E0AD77C7C(1))
				{
					Local_194.f_161 = unk_0x69FDD9508259E5B5(26, func_98(), Local_194.f_150, unk_0xD850DD08D5434072(unk_0xDCE61FCD9D7F205E(Local_194.f_159)), 0, 0);
					unk_0x226C3A30511D5DC4(Local_194.f_161, 1);
					unk_0x724FFAED1C56CE2B(Local_194.f_161, false, 0);
					unk_0x73BB407763F5834B(Local_194.f_161, 0);
					unk_0xC5B2830898581862(Local_194.f_161, 1);
					unk_0xE0A291F406691F03(func_98());
					unk_0x598D91BBD045C1F3(Local_194.f_161, 118, 0);
					unk_0x598D91BBD045C1F3(Local_194.f_161, 108, 1);
					unk_0x598D91BBD045C1F3(Local_194.f_161, 208, 1);
					unk_0x03879CC8EF9E3635(Local_194.f_161, 1, 1, 1, 1, 1, 0, 0, 0);
					unk_0xBD02C9D4D7076ECC(Local_194.f_161, unk_0xDCE61FCD9D7F205E(Local_194.f_159), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
					unk_0x362A7D3F1F776CB5(Local_194.f_161, 0, 0);
					Global_1962996.f_23 = Local_194.f_161;
				}
			}
		}
		else if (func_17(Local_194.f_161))
		{
			if (unk_0x51DF6895C236B231(Local_194.f_161))
			{
				unk_0x724FFAED1C56CE2B(Local_194.f_161, false, 0);
			}
			if (!func_90(unk_0x93E99A2DBCBA9CFA()) && !func_87(unk_0x93E99A2DBCBA9CFA()))
			{
				if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0)
				{
					func_86(Global_1837219);
				}
			}
			else if ((Global_1962996.f_4 == -1 || Global_1962996.f_4 == 0) || Global_1962996.f_4 == Global_1837208)
			{
				func_86(Global_1837219);
			}
			if (unk_0x995186CE2D675C63(Local_194.f_161) != func_85())
			{
				unk_0x8386356641D0DED1(Local_194.f_161, func_85());
			}
			if (!unk_0xDC116D955A63BDBE(Local_194.f_161))
			{
				unk_0xBD02C9D4D7076ECC(Local_194.f_161, unk_0xDCE61FCD9D7F205E(Local_194.f_159), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
				unk_0x362A7D3F1F776CB5(Local_194.f_161, 0, 0);
			}
		}
	}
}

int func_85()
{
	if (Global_1962996.f_4 != -1 && Global_1962996.f_4 != 0)
	{
		return Global_1962996.f_4;
	}
	return Global_1837219;
}

void func_86(int iParam0)
{
	if (Global_1962996.f_4 != iParam0)
	{
		Global_1962996.f_4 = iParam0;
	}
}

int func_87(int iParam0)
{
	if (func_89(iParam0) == 236 || func_89(iParam0) == 150)
	{
		return func_88(iParam0);
	}
	return 0;
}

int func_88(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1894573[iVar0 /*608*/].f_1, 7);
	}
	return 0;
}

int func_89(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1894573[iVar0 /*608*/];
	}
	return -1;
}

bool func_90(int iParam0)
{
	return func_91(iParam0, 20);
}

var func_91(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

bool func_92(int iParam0, bool bParam1, bool bParam2)
{
	return func_93(2, iParam0, 1, bParam1, bParam2);
}

int func_93(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1666891, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_97(iParam0) - func_96(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_96(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_97(iParam0) - func_95(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_96(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_97(iParam0) - func_96(iParam0, 1));
		}
		if (!bParam4 && Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/] != 3)
		{
			iVar1 = (iVar1 - func_94(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1666891.f_1;
			break;
		
		case 1:
			return Global_1666891.f_2;
			break;
		
		case 2:
			return Global_1666891.f_3;
			break;
	}
	return 0;
}

int func_96(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x93E99A2DBCBA9CFA();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x839E00E966CE3F2D())
			{
				return Global_2657589[iVar0 /*466*/].f_219;
			}
			else
			{
				return unk_0x3F6A5B7803413D6A(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x839E00E966CE3F2D())
			{
				return Global_2657589[iVar0 /*466*/].f_220;
			}
			else
			{
				return unk_0x6D465F7CB16AFBB2(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x839E00E966CE3F2D())
			{
				return Global_2657589[iVar0 /*466*/].f_221;
			}
			else
			{
				return unk_0x42AE3F61BF594E6C(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1666899;
			break;
		
		case 1:
			return Global_1666900;
			break;
		
		case 2:
			return Global_1666901;
			break;
	}
	return 0;
}

int func_98()
{
	return joaat("g_m_m_chigoon_01");
}

void func_99()
{
	if (func_172())
	{
		return;
	}
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159) && !unk_0x055111B11E6624FD(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0))
	{
		if (unk_0xF57C1326FD40C8A7(Local_194.f_169) && unk_0x0097C56F4031898F(Local_194.f_169))
		{
			if (!func_83())
			{
				func_163();
				func_131();
			}
			else
			{
				func_112();
				func_102();
			}
			unk_0xEE3623A329794810();
			func_101(1);
			func_100(2);
		}
	}
}

void func_100(int iParam0)
{
	Global_1577898 = iParam0;
}

void func_101(int iParam0)
{
	Global_1655472.f_1163 = iParam0;
}

void func_102()
{
	int iVar0;
	
	if (!unk_0x5FAF55B1F052A2E6(Local_194.f_170))
	{
		if (func_16())
		{
			Local_194.f_170 = func_111();
		}
		else
		{
			Local_194.f_170 = func_110();
		}
		return;
	}
	iVar0 = func_18();
	if (iVar0 < 0 || !func_17(iVar0))
	{
		return;
	}
	if (func_16())
	{
		func_106();
	}
	func_105(Local_194.f_170, 0);
	func_104(Local_194.f_170, 3, 3, 3);
	func_103(Local_194.f_170, 0f, 0f, 0f, 0f, (unk_0xD850DD08D5434072(iVar0) + 180f));
	unk_0xCA0440712A8201E9(1);
	unk_0x55CCA1B8F633F628(Local_194.f_170, 255, 255, 255, 0, 0);
}

void func_103(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	unk_0x9FD96C5DE6EDFC15(uParam0, "SET_ALT_FOV_HEADING");
	unk_0xC49D258FBF3BF214(fParam1);
	unk_0xC49D258FBF3BF214(fParam2);
	unk_0xC49D258FBF3BF214(fParam5);
	unk_0xAE3413B0654A0035();
}

void func_104(var uParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x9FD96C5DE6EDFC15(uParam0, "SET_WEAPON_VALUES");
	unk_0xC6A3EF6C4A3412C1(iParam1);
	unk_0xC6A3EF6C4A3412C1(iParam2);
	unk_0xC6A3EF6C4A3412C1(iParam3);
	unk_0xAE3413B0654A0035();
}

void func_105(var uParam0, int iParam1)
{
	unk_0x9FD96C5DE6EDFC15(uParam0, "SET_ZOOM_VISIBLE");
	unk_0xD546F85F5AF0F231(iParam1);
	unk_0xAE3413B0654A0035();
}

void func_106()
{
	int iVar0;
	float fVar1;
	
	iVar0 = 1;
	if (func_16())
	{
		iVar0 = 10;
	}
	fVar1 = Local_194.f_120;
	if (fVar1 >= (func_109() - IntToFloat((50 * iVar0))))
	{
		if (unk_0x209C5E3492025E4B(Local_194.f_37))
		{
			Local_194.f_37 = unk_0x9F2C1BA4F2BF5CF8();
			unk_0x531D638530A8DB97(Local_194.f_37, "Out_Of_Bounds_Alarm_Loop", Local_194.f_157, 1);
		}
		if (fVar1 >= (func_109() - IntToFloat((50 * iVar0))) && fVar1 < (func_109() - IntToFloat((45 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.1f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((45 * iVar0))) && fVar1 < (func_109() - IntToFloat((40 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.2f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((40 * iVar0))) && fVar1 < (func_109() - IntToFloat((35 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.3f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((35 * iVar0))) && fVar1 < (func_109() - IntToFloat((30 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.4f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((30 * iVar0))) && fVar1 < (func_109() - IntToFloat((25 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.5f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((25 * iVar0))) && fVar1 < (func_109() - IntToFloat((20 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.6f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((20 * iVar0))) && fVar1 < (func_109() - IntToFloat((15 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.7f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((15 * iVar0))) && fVar1 < (func_109() - IntToFloat((10 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.8f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((10 * iVar0))) && fVar1 < (func_109() - IntToFloat((5 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.9f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((5 * iVar0))) && fVar1 < func_109())
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(1f);
		}
	}
	else
	{
		func_108("SET_WARNING_IS_VISIBLE", 0);
		if (!unk_0x209C5E3492025E4B(Local_194.f_37))
		{
			unk_0xA13B5B0EF7402391(Local_194.f_37);
			unk_0x8A1B9F78F1F46A12(Local_194.f_37);
			Local_194.f_37 = -1;
		}
	}
}

void func_107(float fParam0)
{
	unk_0x9FD96C5DE6EDFC15(Local_194.f_170, "SET_WARNING_FLASH_RATE");
	unk_0xC49D258FBF3BF214(fParam0);
	unk_0xAE3413B0654A0035();
}

void func_108(char* sParam0, int iParam1)
{
	unk_0x9FD96C5DE6EDFC15(Local_194.f_170, sParam0);
	unk_0xD546F85F5AF0F231(iParam1);
	unk_0xAE3413B0654A0035();
}

float func_109()
{
	if (Global_1962996.f_8 == 0f)
	{
		return Global_262145.f_24672;
	}
	return Global_1962996.f_8;
}

var func_110()
{
	char* sVar0;
	
	sVar0 = "";
	switch (Global_4718592.f_160097)
	{
		case 1:
			sVar0 = "ARENA_GUN_CAM_APOCALYPSE";
			break;
		
		case 2:
			sVar0 = "ARENA_GUN_CAM_SCIFI";
			break;
		
		case 3:
			sVar0 = "ARENA_GUN_CAM_CONSUMER";
			break;
		
		default:
			sVar0 = "INVALID_THEME";
			break;
	}
	return unk_0x2B4645565204EA06(sVar0);
}

var func_111()
{
	char* sVar0;
	
	sVar0 = "SUBMARINE_MISSILES";
	return unk_0x2B4645565204EA06(sVar0);
}

void func_112()
{
	if (func_16())
	{
		if (!func_130())
		{
			return;
		}
	}
	if (!BitTest(Local_194.f_5, 16))
	{
		if (func_128(0, -1, 0))
		{
			func_127(-1);
			func_126(20, "DRONE_SPACE", -1);
			func_126(21, "DRONE_POSITION", -1);
			if (func_35())
			{
				if (!unk_0x42AAFCB5B7854AA9(0))
				{
					func_125(208, "DRONE_SPEEDU", -1, 0);
					func_125(207, "DRONE_SLOWD", -1, 0);
				}
				else
				{
					func_125(209, "DRONE_SPEEDU", -1, 0);
					func_125(210, "DRONE_SLOWD", -1, 0);
				}
			}
			func_125(75, "MOVE_DRONE_RE", -1, 0);
			unk_0xECDAB41968FF21A8(&(Local_194.f_5), 16);
		}
	}
	else
	{
		func_113(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (unk_0x42AAFCB5B7854AA9(0))
	{
		if (!BitTest(Local_194.f_5, 17))
		{
			unk_0xECDAB41968FF21A8(&(Local_194.f_5), 17);
			unk_0x061B1200C95204CB(&(Local_194.f_5), 16);
		}
	}
	else if (BitTest(Local_194.f_5, 17))
	{
		unk_0x061B1200C95204CB(&(Local_194.f_5), 17);
		unk_0x061B1200C95204CB(&(Local_194.f_5), 16);
	}
}

void func_113(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_124(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_121(bParam4, bParam8))
	{
		return;
	}
	if (func_119())
	{
		return;
	}
	if (unk_0xEBDA168F3804CE1F())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_116(unk_0x93E99A2DBCBA9CFA(), 0))
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
					func_115(&(Global_23270.f_5168[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && unk_0x14580F20CBCE4FA9(&(Global_23270.f_5393[iVar2 /*4*/])) == unk_0x14580F20CBCE4FA9("PREV"))
					{
						func_115(&(Global_23270.f_5168[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23270.f_5450[iVar1] == -1)
					{
						func_114(&(Global_23270.f_5393[iVar1 /*4*/]));
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
				func_115(&Global_4540953);
				if (Global_4540953.f_20 == -1)
				{
					func_114(&(Global_4540953.f_16));
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

void func_114(var uParam0)
{
	unk_0x2AF11E92DE43CDE3(uParam0);
	unk_0xF8FCA9E7130CE1C8();
}

void func_115(var uParam0)
{
	unk_0x7DDE71A42D80E8FA(uParam0);
}

bool func_116(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_117(-1, 0) == 8;
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

int func_117(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_118();
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

int func_118()
{
	return Global_1574918;
}

int func_119()
{
	struct<3> Var0;
	
	if (Global_20383.f_1 > 3)
	{
		return 1;
	}
	if (func_120())
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

int func_120()
{
	if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_121(bool bParam0, bool bParam1)
{
	if (Global_2672505.f_1684.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x35DF833D93BCC488() || (func_123(8, -1) && func_122() != 65)) || (unk_0xD7863C03D2155822() != 0 && !bParam1)) || (unk_0xB53553DC4AAC7D8A() && !bParam0)) || unk_0x4136116828BCAAB6()) || Global_78819) || Global_23270.f_8891) || unk_0x47F8B78DC1737D5C()) || Global_100733.f_1474)
	{
		return 0;
	}
	return 1;
}

int func_122()
{
	return Global_1574993;
}

var func_123(int iParam0, int iParam1)
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

int func_124(var uParam0, bool bParam1, int iParam2)
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

void func_125(int iParam0, char* sParam1, int iParam2, bool bParam3)
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

void func_126(int iParam0, char* sParam1, int iParam2)
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

void func_127(int iParam0)
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
		if (!func_124(&iVar1, 0, iParam0))
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

bool func_128(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_124(&iVar0, 1, iParam1))
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
	bVar2 = func_129(&(Global_23270.f_6103[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_129(var uParam0)
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

bool func_130()
{
	return BitTest(Local_194.f_6, 6);
}

void func_131()
{
	if (!unk_0x5FAF55B1F052A2E6(Local_194.f_170))
	{
		Local_194.f_170 = unk_0x2B4645565204EA06("DRONE_CAM");
		return;
	}
	if ((func_38() || func_77()) || func_162(0))
	{
		func_108("SET_DETONATE_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_108("SET_DETONATE_METER_IS_VISIBLE", 1);
	}
	if ((func_38() || func_77()) || func_24())
	{
		func_108("SET_SHOCK_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_108("SET_SHOCK_METER_IS_VISIBLE", 1);
	}
	if (func_24())
	{
		func_108("SET_EMP_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_108("SET_EMP_METER_IS_VISIBLE", 0);
	}
	if (!func_38() && !func_77())
	{
		func_108("SET_RETICLE_IS_VISIBLE", 1);
	}
	else
	{
		func_108("SET_RETICLE_IS_VISIBLE", 0);
	}
	func_108("SET_HEADING_METER_IS_VISIBLE", 1);
	func_108("SET_ZOOM_METER_IS_VISIBLE", 1);
	if (((!func_38() && !func_77()) && !func_24()) && func_161())
	{
		func_108("SET_BOOST_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_108("SET_BOOST_METER_IS_VISIBLE", 0);
	}
	if (func_160())
	{
		func_108("SET_TRANQUILIZE_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_108("SET_TRANQUILIZE_METER_IS_VISIBLE", 0);
	}
	func_108("SET_MISSILE_METER_IS_VISIBLE", 0);
	func_108("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
	if (func_158(unk_0x93E99A2DBCBA9CFA()) == 240)
	{
		if (Local_194.f_120 >= (func_109() - 50f) || Local_194.f_121 >= IntToFloat((Global_262145.f_24671 - 50)))
		{
			func_108("SET_SOUND_WAVE_IS_VISIBLE", 0);
			func_157();
			if (BitTest(Local_194.f_5, 13))
			{
				unk_0x061B1200C95204CB(&(Local_194.f_5), 13);
			}
		}
		else
		{
			func_153(func_154());
			if (!BitTest(Local_194.f_5, 13))
			{
				func_108("SET_SOUND_WAVE_IS_VISIBLE", 1);
				unk_0xECDAB41968FF21A8(&(Local_194.f_5), 13);
			}
		}
	}
	else
	{
		func_108("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_157();
	}
	func_108("SET_INFO_LIST_IS_VISIBLE", 0);
	if (!func_38() && !func_77())
	{
		if (!func_24())
		{
			func_152(Local_194.f_18);
		}
		else
		{
			func_151(Local_194.f_18);
		}
		if (!func_162(0))
		{
			func_150(Local_194.f_19);
		}
	}
	if (func_160())
	{
		func_149(Local_194.f_24);
	}
	if (func_161())
	{
		func_148(Local_194.f_20);
	}
	func_147(0, "DRONE_ZOOM_1");
	func_147(1, "");
	func_147(2, "DRONE_ZOOM_2");
	func_147(3, "");
	func_147(4, "DRONE_ZOOM_3");
	func_145();
	func_143();
	func_141();
	func_140(unk_0xF2DB717A73826179((unk_0xD850DD08D5434072(unk_0xDCE61FCD9D7F205E(Local_194.f_159)) + 180f)));
	if (func_158(unk_0x93E99A2DBCBA9CFA()) == 240)
	{
		func_139(func_154());
	}
	if (func_138())
	{
		func_133();
	}
	else if (func_24() || func_38())
	{
		func_132();
	}
	else if (func_31())
	{
		func_106();
	}
	unk_0xCA0440712A8201E9(1);
	unk_0x55CCA1B8F633F628(Local_194.f_170, 255, 255, 255, 0, 0);
}

void func_132()
{
	if (Local_194.f_150.f_2 >= (func_109() - 20f))
	{
		if (unk_0x209C5E3492025E4B(Local_194.f_37))
		{
			Local_194.f_37 = unk_0x9F2C1BA4F2BF5CF8();
			unk_0x531D638530A8DB97(Local_194.f_37, "Out_Of_Bounds_Alarm_Loop", Local_194.f_157, 1);
		}
		if (Local_194.f_150.f_2 >= (func_109() - 20f) && Local_194.f_150.f_2 < (func_109() - 16f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.1f);
		}
		else if (Local_194.f_150.f_2 >= (func_109() - 16f) && Local_194.f_150.f_2 < (func_109() - 13f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.2f);
		}
		else if (Local_194.f_150.f_2 >= (func_109() - 13f) && Local_194.f_150.f_2 < (func_109() - 10f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.3f);
		}
		else if (Local_194.f_150.f_2 >= (func_109() - 10f) && Local_194.f_150.f_2 < (func_109() - 8f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.4f);
		}
		else if (Local_194.f_150.f_2 >= (func_109() - 8f) && Local_194.f_150.f_2 < (func_109() - 6f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.5f);
		}
		else if (Local_194.f_150.f_2 >= (func_109() - 6f) && Local_194.f_150.f_2 < (func_109() - 4f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.6f);
		}
		else if (Local_194.f_150.f_2 >= (func_109() - 4f) && Local_194.f_150.f_2 < (func_109() - 3f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.7f);
		}
		else if (Local_194.f_150.f_2 >= (func_109() - 3f) && Local_194.f_150.f_2 < (func_109() - 2f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.8f);
		}
		else if (Local_194.f_150.f_2 >= (func_109() - 2f) && Local_194.f_150.f_2 < (func_109() - 1f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.9f);
		}
		else if (Local_194.f_150.f_2 >= (func_109() - 1f) && Local_194.f_150.f_2 < func_109())
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(1f);
		}
	}
	else
	{
		func_108("SET_WARNING_IS_VISIBLE", 0);
		if (!unk_0x209C5E3492025E4B(Local_194.f_37))
		{
			unk_0xA13B5B0EF7402391(Local_194.f_37);
			unk_0x8A1B9F78F1F46A12(Local_194.f_37);
			Local_194.f_37 = -1;
		}
	}
}

void func_133()
{
	if (Local_194.f_120 >= (func_109() - 50f) || Local_194.f_121 >= IntToFloat((Global_262145.f_24671 - 50)))
	{
		func_134();
		if (unk_0x209C5E3492025E4B(Local_194.f_37))
		{
			Local_194.f_37 = unk_0x9F2C1BA4F2BF5CF8();
			unk_0x531D638530A8DB97(Local_194.f_37, "Out_Of_Bounds_Alarm_Loop", Local_194.f_157, 1);
		}
		if ((Local_194.f_120 >= (func_109() - 50f) && Local_194.f_120 < (func_109() - 45f)) || (Local_194.f_121 >= IntToFloat((Global_262145.f_24671 - 50)) && Local_194.f_121 < IntToFloat((Global_262145.f_24671 - 45))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.1f);
		}
		else if ((Local_194.f_120 >= (func_109() - 45f) && Local_194.f_120 < (func_109() - 40f)) || (Local_194.f_121 >= IntToFloat((Global_262145.f_24671 - 45)) && Local_194.f_121 < IntToFloat((Global_262145.f_24671 - 40))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.2f);
		}
		else if ((Local_194.f_120 >= (func_109() - 40f) && Local_194.f_120 < (func_109() - 35f)) || (Local_194.f_121 >= IntToFloat((Global_262145.f_24671 - 40)) && Local_194.f_121 < IntToFloat((Global_262145.f_24671 - 35))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.3f);
		}
		else if ((Local_194.f_120 >= (func_109() - 35f) && Local_194.f_120 < (func_109() - 30f)) || (Local_194.f_121 >= IntToFloat((Global_262145.f_24671 - 35)) && Local_194.f_121 < IntToFloat((Global_262145.f_24671 - 30))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.4f);
		}
		else if ((Local_194.f_120 >= (func_109() - 30f) && Local_194.f_120 < (func_109() - 25f)) || (Local_194.f_121 >= IntToFloat((Global_262145.f_24671 - 30)) && Local_194.f_121 < IntToFloat((Global_262145.f_24671 - 25))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.5f);
		}
		else if ((Local_194.f_120 >= (func_109() - 25f) && Local_194.f_120 < (func_109() - 20f)) || (Local_194.f_121 >= IntToFloat((Global_262145.f_24671 - 25)) && Local_194.f_121 < IntToFloat((Global_262145.f_24671 - 20))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.6f);
		}
		else if ((Local_194.f_120 >= (func_109() - 20f) && Local_194.f_120 < (func_109() - 15f)) || (Local_194.f_121 >= IntToFloat((Global_262145.f_24671 - 20)) && Local_194.f_121 < IntToFloat((Global_262145.f_24671 - 15))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.7f);
		}
		else if ((Local_194.f_120 >= (func_109() - 15f) && Local_194.f_120 < (func_109() - 10f)) || (Local_194.f_121 >= IntToFloat((Global_262145.f_24671 - 15)) && Local_194.f_121 < IntToFloat((Global_262145.f_24671 - 10))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.8f);
		}
		else if ((Local_194.f_120 >= (func_109() - 10f) && Local_194.f_120 < (func_109() - 5f)) || (Local_194.f_121 >= IntToFloat((Global_262145.f_24671 - 10)) && Local_194.f_121 < IntToFloat((Global_262145.f_24671 - 5))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.9f);
		}
		else if ((Local_194.f_120 >= (func_109() - 5f) && Local_194.f_120 < func_109()) || (Local_194.f_121 >= IntToFloat((Global_262145.f_24671 - 5)) && Local_194.f_121 < IntToFloat(Global_262145.f_24671)))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(1f);
		}
	}
	else
	{
		func_108("SET_WARNING_IS_VISIBLE", 0);
		if (!unk_0x209C5E3492025E4B(Local_194.f_37))
		{
			unk_0xA13B5B0EF7402391(Local_194.f_37);
			unk_0x8A1B9F78F1F46A12(Local_194.f_37);
			Local_194.f_37 = -1;
		}
	}
}

void func_134()
{
	int iVar0;
	
	if (unk_0x35DF833D93BCC488() && !BitTest(Global_1950108.f_3, 15))
	{
		if (!unk_0xF0E4B64AC0B5660E())
		{
			iVar0 = func_137(22045, -1);
			if (iVar0 < 4)
			{
				func_136("HACK_DRONE_DIS", -1);
				iVar0++;
				func_135(22045, iVar0, -1);
				unk_0xECDAB41968FF21A8(&(Global_1950108.f_3), 15);
			}
		}
	}
}

void func_135(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_118();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	unk_0x5B9D75B86493C415(iParam0, iParam1, iParam2);
}

void func_136(char* sParam0, int iParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
}

var func_137(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_118();
	}
	return unk_0x088E49A1CEC4C23F(iParam0, iParam1);
}

bool func_138()
{
	return BitTest(Global_1962996.f_2, 1);
}

void func_139(float fParam0)
{
	unk_0x9FD96C5DE6EDFC15(Local_194.f_170, "ATTENUATE_SOUND_WAVE");
	unk_0xC49D258FBF3BF214(fParam0);
	unk_0xAE3413B0654A0035();
}

void func_140(int iParam0)
{
	unk_0x9FD96C5DE6EDFC15(Local_194.f_170, "SET_HEADING");
	unk_0xC6A3EF6C4A3412C1(iParam0);
	unk_0xAE3413B0654A0035();
}

void func_141()
{
	if (func_24())
	{
		if (BitTest(Local_194.f_5, 11) && !Local_194.f_156)
		{
			func_142(1);
		}
		else
		{
			func_142(0);
		}
	}
	else if (BitTest(Local_194.f_5, 11) || BitTest(Local_194.f_5, 23))
	{
		func_142(1);
	}
	else
	{
		func_142(0);
	}
}

void func_142(int iParam0)
{
	unk_0x9FD96C5DE6EDFC15(Local_194.f_170, "SET_RETICLE_ON_TARGET");
	unk_0xD546F85F5AF0F231(iParam0);
	unk_0xAE3413B0654A0035();
}

void func_143()
{
	if (BitTest(Local_194.f_5, 4) || (BitTest(Local_194.f_5, 3) && func_24()))
	{
		if (Local_194.f_18 == 100)
		{
			func_144(1);
		}
		else if (Local_194.f_18 != 0 && Local_194.f_18 != 100)
		{
			func_144(2);
		}
	}
	else
	{
		func_144(0);
	}
}

void func_144(int iParam0)
{
	unk_0x9FD96C5DE6EDFC15(Local_194.f_170, "SET_RETICLE_STATE");
	unk_0xC6A3EF6C4A3412C1(iParam0);
	unk_0xAE3413B0654A0035();
}

void func_145()
{
	switch (Local_194.f_25)
	{
		case 0:
			func_146(0);
			break;
		
		case 1:
			func_146(2);
			break;
		
		case 2:
			func_146(4);
			break;
	}
}

void func_146(int iParam0)
{
	unk_0x9FD96C5DE6EDFC15(Local_194.f_170, "SET_ZOOM");
	unk_0xC6A3EF6C4A3412C1(iParam0);
	unk_0xAE3413B0654A0035();
}

void func_147(int iParam0, char* sParam1)
{
	unk_0x9FD96C5DE6EDFC15(Local_194.f_170, "SET_ZOOM_LABEL");
	unk_0xC6A3EF6C4A3412C1(iParam0);
	func_114(sParam1);
	unk_0xAE3413B0654A0035();
}

void func_148(int iParam0)
{
	unk_0x9FD96C5DE6EDFC15(Local_194.f_170, "SET_BOOST_PERCENTAGE");
	unk_0xC6A3EF6C4A3412C1(uParam0);
	unk_0xAE3413B0654A0035();
}

void func_149(int iParam0)
{
	unk_0x9FD96C5DE6EDFC15(Local_194.f_170, "SET_TRANQUILIZE_PERCENTAGE");
	unk_0xC6A3EF6C4A3412C1(uParam0);
	unk_0xAE3413B0654A0035();
}

void func_150(int iParam0)
{
	unk_0x9FD96C5DE6EDFC15(Local_194.f_170, "SET_DETONATE_PERCENTAGE");
	unk_0xC6A3EF6C4A3412C1(uParam0);
	unk_0xAE3413B0654A0035();
}

void func_151(int iParam0)
{
	unk_0x9FD96C5DE6EDFC15(Local_194.f_170, "SET_EMP_PERCENTAGE");
	unk_0xC6A3EF6C4A3412C1(uParam0);
	unk_0xAE3413B0654A0035();
}

void func_152(int iParam0)
{
	unk_0x9FD96C5DE6EDFC15(Local_194.f_170, "SET_SHOCK_PERCENTAGE");
	unk_0xC6A3EF6C4A3412C1(uParam0);
	unk_0xAE3413B0654A0035();
}

void func_153(float fParam0)
{
	if (unk_0x209C5E3492025E4B(Local_194.f_44))
	{
		Local_194.f_44 = unk_0x9F2C1BA4F2BF5CF8();
		unk_0x531D638530A8DB97(Local_194.f_44, "Scanner_Loop", "DLC_BTL_Target_Pursuit_Sounds", 1);
		unk_0x30DD80A33ACF3D36(Local_194.f_44, "signalstrength", fParam0);
	}
	else
	{
		unk_0x30DD80A33ACF3D36(Local_194.f_44, "signalstrength", fParam0);
	}
}

float func_154()
{
	float fVar0;
	
	if (func_158(unk_0x93E99A2DBCBA9CFA()) == 240)
	{
		if (unk_0x5E6D8811A0BD0954(Local_194.f_159) && !unk_0x055111B11E6624FD(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0))
		{
			fVar0 = func_155(unk_0xDCE61FCD9D7F205E(Local_194.f_159), func_156(), 1);
			if (fVar0 >= 200f)
			{
				return 0f;
			}
			else if (fVar0 >= 180f && fVar0 < 200f)
			{
				return 0.1f;
			}
			else if (fVar0 >= 160f && fVar0 < 180f)
			{
				return 0.2f;
			}
			else if (fVar0 >= 140f && fVar0 < 160f)
			{
				return 0.3f;
			}
			else if (fVar0 >= 120f && fVar0 < 140f)
			{
				return 0.4f;
			}
			else if (fVar0 >= 100f && fVar0 < 120f)
			{
				return 0.5f;
			}
			else if (fVar0 >= 80f && fVar0 < 100f)
			{
				return 0.6f;
			}
			else if (fVar0 >= 60f && fVar0 < 80f)
			{
				return 0.7f;
			}
			else if (fVar0 >= 40f && fVar0 < 60f)
			{
				return 0.8f;
			}
			else if (fVar0 >= 20f && fVar0 < 40f)
			{
				return 0.9f;
			}
			else if (fVar0 <= 20f)
			{
				return 1f;
			}
		}
	}
	return 0f;
}

float func_155(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 0) };
	}
	return unk_0x2E496FE654DA4166(Var0, Param1, iParam4);
}

Vector3 func_156()
{
	if (func_158(unk_0x93E99A2DBCBA9CFA()) == 240)
	{
		return Global_1968334;
	}
	return 0f, 0f, 0f;
}

void func_157()
{
	if (!unk_0x209C5E3492025E4B(Local_194.f_44))
	{
		unk_0xA13B5B0EF7402391(Local_194.f_44);
		unk_0x8A1B9F78F1F46A12(Local_194.f_44);
		Local_194.f_44 = -1;
	}
}

int func_158(int iParam0)
{
	if (func_159(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

int func_159(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_160()
{
	return BitTest(Global_1962996.f_2, 6);
}

int func_161()
{
	if (func_160())
	{
		if (unk_0x4D3D95146FD3490D(Global_1962996.f_24))
		{
			return 0;
		}
	}
	return 1;
}

int func_162(bool bParam0)
{
	if (func_138())
	{
		if (bParam0)
		{
			if (BitTest(Local_194.f_5, 4))
			{
				return 1;
			}
		}
	}
	if (func_160())
	{
		return 1;
	}
	return 0;
}

void func_163()
{
	int iVar0;
	int iVar1;
	
	if (func_77())
	{
		return;
	}
	if (!BitTest(Local_194.f_5, 16))
	{
		if (func_128(0, -1, 0))
		{
			func_127(-1);
			func_126(21, "DRONE_MOVE", -1);
			func_126(20, "DRONE_POSITION", -1);
			if (!unk_0x42AAFCB5B7854AA9(0))
			{
				func_125(210, "CELL_284", -1, 0);
				if ((!func_38() && !func_24()) && func_161())
				{
					func_125(209, "BOOST_DRONE_E", -1, 0);
				}
				func_125(208, "MOVE_DRONE_UP", -1, 0);
				func_125(207, "MOVE_DRONE_DO", -1, 0);
			}
			else
			{
				func_126(29, "CELL_284", -1);
				if ((!func_38() && !func_24()) && func_161())
				{
					func_125(203, "BOOST_DRONE_E", -1, 0);
				}
				func_125(209, "MOVE_DRONE_UP", -1, 0);
				func_125(210, "MOVE_DRONE_DO", -1, 0);
			}
			if (!func_38())
			{
				iVar0 = 206;
				if (unk_0x42AAFCB5B7854AA9(0))
				{
					iVar0 = 237;
				}
				if (func_24())
				{
					func_125(iVar0, "MOVE_DRONE_EM", -1, 0);
				}
				else
				{
					func_125(iVar0, "MOVE_DRONE_ST", -1, 0);
				}
				iVar1 = 205;
				if (unk_0x42AAFCB5B7854AA9(0))
				{
					iVar1 = 238;
				}
				if (!func_162(0))
				{
					func_125(iVar1, "MOVE_DRONE_EX", -1, 0);
				}
				else if (func_170())
				{
					func_125(iVar1, "MOVE_DRONE_TRG", -1, 0);
				}
			}
			if (!func_24())
			{
				if ((((func_169(0) || func_169(1)) || func_168()) || unk_0xC8FA7761999E73B4()) || func_164(unk_0x93E99A2DBCBA9CFA()))
				{
				}
				else
				{
					func_125(201, "DRONE_PHOTO", -1, 0);
				}
			}
			func_125(80, "MOVE_DRONE_RE", -1, 0);
			unk_0xECDAB41968FF21A8(&(Local_194.f_5), 16);
		}
	}
	else
	{
		func_113(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (unk_0x42AAFCB5B7854AA9(0))
	{
		if (!BitTest(Local_194.f_5, 17))
		{
			unk_0xECDAB41968FF21A8(&(Local_194.f_5), 17);
			unk_0x061B1200C95204CB(&(Local_194.f_5), 16);
		}
	}
	else if (BitTest(Local_194.f_5, 17))
	{
		unk_0x061B1200C95204CB(&(Local_194.f_5), 17);
		unk_0x061B1200C95204CB(&(Local_194.f_5), 16);
	}
}

int func_164(int iParam0)
{
	if (func_167(func_158(iParam0)))
	{
		if (func_166() != func_12())
		{
			if (func_165() == func_166())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_165()
{
	return Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_10.f_35;
}

int func_166()
{
	return Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_10;
}

int func_167(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
			return 1;
		
		default:
	}
	return 0;
}

var func_168()
{
	return Global_23131.f_135;
}

bool func_169(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23131.f_4 && Global_23131.f_104 == 4);
	}
	return Global_23131.f_4;
}

int func_170()
{
	if (func_171() <= 0)
	{
		return 0;
	}
	if (func_160())
	{
		return 1;
	}
	return 0;
}

int func_171()
{
	return Global_1962996.f_6;
}

bool func_172()
{
	return BitTest(Global_1962996, 7);
}

void func_173()
{
	int iVar0;
	
	if (!func_174())
	{
		return;
	}
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159) && !unk_0x055111B11E6624FD(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0))
	{
		if (unk_0xFE2AB315FD8C7A6F(Local_194.f_159))
		{
			if ((unk_0xF57C1326FD40C8A7(Local_194.f_169) && unk_0x0097C56F4031898F(Local_194.f_169)) && !func_77())
			{
				iVar0 = 80;
				if (func_83())
				{
					iVar0 = 75;
				}
				if (unk_0x87644B1F984197FE(2, iVar0) || unk_0xE665ABCFC5784C35(2, iVar0))
				{
					if (!BitTest(Local_194.f_5, 7))
					{
						unk_0xECDAB41968FF21A8(&(Local_194.f_5), 7);
					}
				}
			}
		}
	}
}

int func_174()
{
	if (func_16())
	{
		if (!func_130())
		{
			return 0;
		}
	}
	return 1;
}

void func_175()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((func_181() || !func_164(unk_0x93E99A2DBCBA9CFA())) || !unk_0xA26A9A07F761D8F8())
	{
		return;
	}
	iVar0 = func_180(1);
	func_179(iVar0);
	iVar1 = func_180(0);
	iVar2 = unk_0x0744FA5607ECEB91(Local_194.f_141, 2f, iVar1, 0, 0, 0);
	if (unk_0x7DE17ACDD8BA2642(iVar2) && iVar2 != Local_194.f_162)
	{
		if (unk_0xE0AC9A4743F9BD05(iVar2, joaat("weapon_stungun"), 0) || unk_0x2935B4D6CE81318D(iVar2) == 999)
		{
			if (!BitTest(Local_194.f_5, 26))
			{
				func_178(func_166(), 1, 1, 0);
				unk_0xECDAB41968FF21A8(&(Local_194.f_5), 26);
			}
		}
	}
	if (unk_0x7DE17ACDD8BA2642(Local_194.f_162))
	{
		if (unk_0xE0AC9A4743F9BD05(Local_194.f_162, joaat("weapon_stungun"), 0) || unk_0x2935B4D6CE81318D(Local_194.f_162) == 999)
		{
			if (!BitTest(Local_194.f_5, 26))
			{
				func_178(func_166(), 1, 1, 0);
				unk_0xECDAB41968FF21A8(&(Local_194.f_5), 26);
			}
		}
	}
	if (BitTest(Local_194.f_5, 26))
	{
		iVar3 = unk_0x0744FA5607ECEB91(Local_194.f_141, 2f, iVar0, 0, 0, 0);
		if (unk_0x7DE17ACDD8BA2642(iVar3))
		{
			if (unk_0x7DE17ACDD8BA2642(Local_194.f_162))
			{
				unk_0x724FFAED1C56CE2B(Local_194.f_162, false, 0);
			}
			if (unk_0x7DE17ACDD8BA2642(iVar2))
			{
				unk_0x724FFAED1C56CE2B(iVar2, false, 0);
			}
			func_176(1);
		}
	}
}

void func_176(bool bParam0)
{
	if (bParam0)
	{
		if (!func_177())
		{
			unk_0xECDAB41968FF21A8(&Global_1962996, 1);
		}
	}
	else if (func_177())
	{
		unk_0x061B1200C95204CB(&Global_1962996, 1);
	}
}

bool func_177()
{
	return BitTest(Global_1962996, 1);
}

void func_178(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	int iVar5;
	
	Var0.f_0 = -1296375264;
	Var0.f_1 = unk_0x93E99A2DBCBA9CFA();
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	iVar5 = 0;
	if (iParam0 != func_12())
	{
		unk_0xECDAB41968FF21A8(&iVar5, iParam0);
	}
	if (!iVar5 == 0)
	{
		unk_0x46F55A5B9F053761(1, &Var0, 5, iVar5);
	}
}

bool func_179(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x852EC2A7DE66202D(iParam0);
	return unk_0x0CBB7C273DED26E7(iParam0);
}

int func_180(bool bParam0)
{
	if (!bParam0)
	{
		if (Global_1962996.f_19 != 0)
		{
			return Global_1962996.f_19;
		}
		else
		{
			return joaat("ba_prop_battle_secpanel");
		}
	}
	else
	{
		return joaat("ba_prop_battle_secpanel_dam");
	}
	return 0;
}

var func_181()
{
	return BitTest(Global_1962996, 14);
}

void func_182()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((BitTest(Local_194.f_5, 1) || func_193()) || func_192())
	{
		Local_194.f_18 = 0;
		Local_194.f_19 = 0;
		if (!BitTest(Local_194.f_5, 10))
		{
			unk_0xECDAB41968FF21A8(&(Local_194.f_5), 10);
		}
		return;
	}
	if (!func_192())
	{
		if (BitTest(Local_194.f_5, 10))
		{
			Local_194.f_18 = 100;
			unk_0x061B1200C95204CB(&(Local_194.f_5), 10);
		}
	}
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159) && !unk_0x055111B11E6624FD(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0))
	{
		if (unk_0xFE2AB315FD8C7A6F(Local_194.f_159))
		{
			if ((unk_0xF57C1326FD40C8A7(Local_194.f_169) && unk_0x0097C56F4031898F(Local_194.f_169)) && !BitTest(Local_194.f_5, 2))
			{
				if ((!BitTest(Local_194.f_5, 4) && !BitTest(Local_194.f_5, 3)) && !Local_194.f_156)
				{
					iVar0 = 206;
					if (unk_0x42AAFCB5B7854AA9(0))
					{
						iVar0 = 237;
					}
					if ((((unk_0x6BD2D66249562506(2, iVar0) || unk_0xA2C9DE6085F5645B(2, iVar0)) && !BitTest(Local_194.f_5, 5)) && !BitTest(Local_194.f_5, 24)) && !func_77())
					{
						unk_0xECDAB41968FF21A8(&(Local_194.f_5), 24);
						if (BitTest(Local_194.f_5, 11) || BitTest(Local_194.f_5, 23))
						{
							Local_194.f_27++;
						}
					}
					if (func_24())
					{
						func_189();
					}
					else
					{
						func_188();
					}
				}
				else if (func_25(&(Local_194.f_249)))
				{
					if (func_24())
					{
						iVar1 = Global_262145.f_25311;
					}
					else
					{
						iVar1 = Global_262145.f_24664;
					}
					if (func_22(&(Local_194.f_249), iVar1, 0))
					{
						func_21(&(Local_194.f_249));
						Local_194.f_18 = 100;
						if (Local_194.f_32 != -1)
						{
							unk_0xA13B5B0EF7402391(Local_194.f_32);
							unk_0x8A1B9F78F1F46A12(Local_194.f_32);
							Local_194.f_32 = -1;
						}
						if (unk_0x209C5E3492025E4B(Local_194.f_35))
						{
							unk_0xA13B5B0EF7402391(Local_194.f_35);
							unk_0x8A1B9F78F1F46A12(Local_194.f_35);
							Local_194.f_35 = -1;
						}
						unk_0x061B1200C95204CB(&(Local_194.f_5), 4);
						unk_0x061B1200C95204CB(&(Local_194.f_5), 3);
						unk_0x061B1200C95204CB(&(Local_194.f_5), 24);
						Local_194.f_156 = 0;
					}
					else
					{
						iVar2 = (100 * unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Local_194.f_249)));
						Local_194.f_18 = (iVar2 / iVar1);
						if (!func_24())
						{
							if (unk_0x209C5E3492025E4B(Local_194.f_32))
							{
								Local_194.f_32 = unk_0x9F2C1BA4F2BF5CF8();
								unk_0x531D638530A8DB97(Local_194.f_32, "HUD_Shock_Recharge", Local_194.f_157, 1);
								unk_0x30DD80A33ACF3D36(Local_194.f_32, "Time", (IntToFloat(iVar1) / 1000f));
							}
						}
					}
				}
				func_186();
				func_183();
			}
		}
		else
		{
			unk_0xF05A5F7FFA0C5E2D(Local_194.f_159);
		}
	}
}

void func_183()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	int iVar16;
	
	if (func_170())
	{
		if (unk_0x42AAFCB5B7854AA9(0))
		{
			iVar0 = 238;
		}
		else
		{
			iVar0 = 205;
		}
		if (!BitTest(Local_194.f_6, 5))
		{
			if (!BitTest(Local_194.f_6, 4))
			{
				if (unk_0x6BD2D66249562506(2, iVar0) || unk_0xA2C9DE6085F5645B(2, iVar0))
				{
					unk_0xECDAB41968FF21A8(&(Local_194.f_6), 4);
				}
			}
			else if (Local_194.f_13 == 1)
			{
				if (Local_194.f_244 == 2)
				{
					Var1 = { unk_0x7D4F36E9E86B0A11() };
					Var4 = { unk_0x929C32C999805F0A(2) };
					Var7 = { (-unk_0x0BADBFA3B172435F(Var4.f_2) * unk_0xD0FFB162F40A139C(Var4.f_0)), (unk_0xD0FFB162F40A139C(Var4.f_2) * unk_0xD0FFB162F40A139C(Var4.f_0)), unk_0x0BADBFA3B172435F(Var4.f_0) };
					Var10 = { 10f, 10f, 10f };
					Var13 = { Var1 + Var7 * Var10 };
					iVar16 = Global_262145.f_24665;
					if (BitTest(Local_194.f_5, 23))
					{
						iVar16 = Global_262145.f_24666;
					}
					unk_0x0234DCAAB51635F9(Local_194.f_150 + Vector(0f, 0f, 0f), Var13, iVar16, 1, joaat("WEAPON_TRANQUILIZER"), unk_0xC1A5EC5C986B98AD(), 1, 1, -1082130432, unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0, 0, 0, 1, 0, 0, 0);
					Local_194.f_24 = 100;
					unk_0xCA9F34C06A0529CE(0, 300, unk_0xF2DB717A73826179((150f * Local_194.f_131)));
					if (unk_0x209C5E3492025E4B(Local_194.f_81))
					{
						Local_194.f_81 = unk_0x9F2C1BA4F2BF5CF8();
						unk_0x03AC3DF6C3FAD811(Local_194.f_81, "Remote_Perspective_Fire", unk_0xDCE61FCD9D7F205E(Local_194.f_159), "DLC_H3_Drone_Tranq_Weapon_Sounds", 1, 0);
					}
					unk_0x531D638530A8DB97(-1, "Pilot_Perspective_Fire", "DLC_H3_Drone_Tranq_Weapon_Sounds", 1);
					if (BitTest(Local_194.f_5, 11) || BitTest(Local_194.f_5, 23))
					{
						Local_194.f_29++;
					}
					func_185((func_171() - 1));
					if (func_171() <= 0)
					{
						Local_194.f_24 = 0;
						unk_0x061B1200C95204CB(&(Local_194.f_5), 16);
					}
					unk_0xECDAB41968FF21A8(&(Local_194.f_6), 5);
					func_23(&(Local_194.f_257), 0, 0);
				}
			}
		}
		else
		{
			func_184();
		}
	}
}

void func_184()
{
	int iVar0;
	int iVar1;
	
	if (func_171() > 0)
	{
		if (func_25(&(Local_194.f_257)))
		{
			iVar0 = Global_262145.f_24664;
			if (func_22(&(Local_194.f_257), iVar0, 0))
			{
				unk_0x061B1200C95204CB(&(Local_194.f_6), 5);
				unk_0x061B1200C95204CB(&(Local_194.f_6), 4);
				func_21(&(Local_194.f_257));
				Local_194.f_24 = 100;
				if (unk_0x209C5E3492025E4B(Local_194.f_35))
				{
					unk_0xA13B5B0EF7402391(Local_194.f_35);
					unk_0x8A1B9F78F1F46A12(Local_194.f_35);
					Local_194.f_35 = -1;
				}
			}
			else
			{
				iVar1 = (100 * unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Local_194.f_257)));
				Local_194.f_24 = (iVar1 / iVar0);
			}
		}
	}
}

void func_185(int iParam0)
{
	if (Global_1962996.f_6 != iParam0)
	{
		Global_1962996.f_6 = iParam0;
	}
}

void func_186()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	Local_194.f_348.f_2 = 2;
	if (unk_0x42AAFCB5B7854AA9(0))
	{
		Local_194.f_348.f_3 = 238;
	}
	else
	{
		Local_194.f_348.f_3 = 205;
	}
	iVar0 = Global_262145.f_24667;
	if (!BitTest(Local_194.f_5, 31))
	{
		Local_194.f_22 = 100;
	}
	if (func_24())
	{
		iVar0 = (iVar0 / 2);
		if (BitTest(Local_194.f_6, 1))
		{
			Local_194.f_21 = ((Local_194.f_23 * (Global_262145.f_24667 / 2)) / 100);
			Local_194.f_21 = ((Global_262145.f_24667 / 2) - Local_194.f_21);
			unk_0x061B1200C95204CB(&(Local_194.f_6), 1);
		}
		if (BitTest(Local_194.f_5, 31))
		{
			iVar0 = Local_194.f_21;
		}
	}
	else
	{
		Local_194.f_22 = 100;
	}
	if (!func_162(1))
	{
		if (!func_77() && func_187(&(Local_194.f_348), 1, iVar0))
		{
			if (unk_0x209C5E3492025E4B(Local_194.f_36))
			{
				Local_194.f_36 = unk_0x9F2C1BA4F2BF5CF8();
				unk_0x03AC3DF6C3FAD811(Local_194.f_36, "Destroyed", unk_0xDCE61FCD9D7F205E(Local_194.f_159), Local_194.f_157, 1, 0);
			}
			unk_0x473C524981645659();
			iVar1 = 0;
			if (func_24())
			{
				iVar1 = 69;
			}
			unk_0x8A9729B4F41F00E9(unk_0xC1A5EC5C986B98AD(), Local_194.f_150, iVar1, 0.5f, 1, 0, 1065353216);
			if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) < 1)
			{
				unk_0x8FE445B0989D8C71(unk_0x93E99A2DBCBA9CFA(), 0, 0);
				unk_0x6CDFCA6843DA90FF(unk_0x93E99A2DBCBA9CFA(), 0);
			}
			unk_0xCA9F34C06A0529CE(0, 300, unk_0xF2DB717A73826179((200f * Local_194.f_131)));
			unk_0xECDAB41968FF21A8(&(Local_194.f_5), 2);
		}
	}
	if (func_25(&(Local_194.f_348)))
	{
		unk_0xCA9F34C06A0529CE(0, 300, 20);
		if (!BitTest(Local_194.f_5, 5))
		{
			unk_0xECDAB41968FF21A8(&(Local_194.f_5), 5);
		}
		func_21(&(Local_194.f_273));
		if (!func_22(&(Local_194.f_348), iVar0, 0))
		{
			iVar2 = (Local_194.f_22 * unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Local_194.f_348)));
			if (!func_24())
			{
				Local_194.f_19 = (iVar2 / iVar0);
			}
			else if (!BitTest(Local_194.f_5, 31))
			{
				Local_194.f_19 = (iVar2 / iVar0);
			}
			else
			{
				Local_194.f_19 = (Local_194.f_23 + (iVar2 / iVar0));
			}
			if (unk_0x209C5E3492025E4B(Local_194.f_33))
			{
				Local_194.f_33 = unk_0x9F2C1BA4F2BF5CF8();
				unk_0x531D638530A8DB97(Local_194.f_33, "HUD_Detonate_Charge", Local_194.f_157, 1);
			}
		}
	}
	else if (BitTest(Local_194.f_5, 5))
	{
		unk_0x061B1200C95204CB(&(Local_194.f_5), 5);
		if (!func_24())
		{
			Local_194.f_19 = 0;
		}
		else
		{
			unk_0xECDAB41968FF21A8(&(Local_194.f_5), 31);
			Local_194.f_22 = (100 - Local_194.f_19);
			Local_194.f_21 = (iVar0 - unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Local_194.f_348)));
			Local_194.f_23 = Local_194.f_19;
			func_21(&(Local_194.f_273));
		}
		if (Local_194.f_33 != -1)
		{
			unk_0xA13B5B0EF7402391(Local_194.f_33);
			unk_0x8A1B9F78F1F46A12(Local_194.f_33);
			Local_194.f_33 = -1;
		}
	}
	else if (func_24())
	{
		if (Local_194.f_19 > 0)
		{
			if (Local_194.f_19 <= 2)
			{
				Local_194.f_19 = 0;
			}
			if (!func_25(&(Local_194.f_273)))
			{
				func_23(&(Local_194.f_273), 0, 0);
			}
			else
			{
				iVar3 = Global_262145.f_24667;
				if (!func_22(&(Local_194.f_273), iVar3, 0))
				{
					fVar4 = ((100f - IntToFloat(Local_194.f_22)) / unk_0xBBDA792448DB5A89((iVar3 / unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Local_194.f_273)))));
					Local_194.f_19 = (Local_194.f_19 - unk_0xF2DB717A73826179(fVar4));
					Local_194.f_23 = Local_194.f_19;
					Local_194.f_22 = (100 - Local_194.f_19);
					unk_0xECDAB41968FF21A8(&(Local_194.f_6), 1);
				}
				else
				{
					Local_194.f_19 = 0;
				}
			}
		}
		else
		{
			func_21(&(Local_194.f_348));
			unk_0x061B1200C95204CB(&(Local_194.f_5), 31);
			unk_0x061B1200C95204CB(&(Local_194.f_6), 1);
		}
	}
}

int func_187(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x51EB177CA0562B62(uParam0->f_2, uParam0->f_3) || (unk_0x992AACDC3C066F55(uParam0->f_2, uParam0->f_3) && iParam1))
	{
		if (!func_25(uParam0))
		{
			func_23(uParam0, 0, 0);
		}
		else if (func_22(uParam0, iParam2, 0))
		{
			func_21(uParam0);
			return 1;
		}
	}
	else
	{
		func_21(uParam0);
	}
	return 0;
}

void func_188()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	int iVar15;
	
	if (BitTest(Local_194.f_5, 24))
	{
		if (Local_194.f_13 == 1)
		{
			if (Local_194.f_244 == 2)
			{
				Var0 = { unk_0x7D4F36E9E86B0A11() };
				Var3 = { unk_0x929C32C999805F0A(2) };
				Var6 = { (-unk_0x0BADBFA3B172435F(Var3.f_2) * unk_0xD0FFB162F40A139C(Var3.f_0)), (unk_0xD0FFB162F40A139C(Var3.f_2) * unk_0xD0FFB162F40A139C(Var3.f_0)), unk_0x0BADBFA3B172435F(Var3.f_0) };
				Var9 = { 10f, 10f, 10f };
				Var12 = { Var0 + Var6 * Var9 };
				iVar15 = Global_262145.f_24665;
				if (BitTest(Local_194.f_5, 23))
				{
					iVar15 = Global_262145.f_24666;
				}
				if (func_160())
				{
					iVar15 = 1;
				}
				unk_0x0234DCAAB51635F9(Local_194.f_150 + Vector(0f, 0f, 0f), Var12, iVar15, 1, joaat("weapon_stungun"), unk_0xC1A5EC5C986B98AD(), 1, 1, -1082130432, unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0, 0, 0, 1, 0, 0, 0);
				Local_194.f_18 = 100;
				Local_194.f_19 = 0;
				unk_0xCA9F34C06A0529CE(0, 300, unk_0xF2DB717A73826179((150f * Local_194.f_131)));
				if (unk_0x209C5E3492025E4B(Local_194.f_35))
				{
					Local_194.f_35 = unk_0x9F2C1BA4F2BF5CF8();
					unk_0x03AC3DF6C3FAD811(Local_194.f_35, "Shock_Fire", unk_0xDCE61FCD9D7F205E(Local_194.f_159), Local_194.f_157, 1, 0);
				}
				if (Local_194.f_33 != -1)
				{
					unk_0xA13B5B0EF7402391(Local_194.f_33);
					unk_0x8A1B9F78F1F46A12(Local_194.f_33);
					Local_194.f_33 = -1;
				}
				unk_0xECDAB41968FF21A8(&(Local_194.f_5), 4);
				func_23(&(Local_194.f_249), 0, 0);
			}
		}
	}
}

void func_189()
{
	if ((BitTest(Local_194.f_5, 24) && !BitTest(Local_194.f_5, 3)) && !Local_194.f_156)
	{
		if (unk_0x7B16A34B3A977485("scr_xs_dr"))
		{
			if (unk_0x5E6D8811A0BD0954(Local_194.f_159))
			{
				unk_0x8DDE86C046BC23A6("scr_xs_dr");
				unk_0x73CD2633F927A436("scr_xs_dr_emp", unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0f, -0.5f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
			}
		}
		Local_194.f_18 = 100;
		unk_0xCA9F34C06A0529CE(0, 300, unk_0xF2DB717A73826179((150f * Local_194.f_131)));
		if (unk_0x209C5E3492025E4B(Local_194.f_35))
		{
			Local_194.f_35 = unk_0x9F2C1BA4F2BF5CF8();
			unk_0x03AC3DF6C3FAD811(Local_194.f_35, "Shock_Fire", unk_0xDCE61FCD9D7F205E(Local_194.f_159), Local_194.f_157, 1, 0);
		}
		if (Local_194.f_33 != -1)
		{
			unk_0xA13B5B0EF7402391(Local_194.f_33);
			unk_0x8A1B9F78F1F46A12(Local_194.f_33);
			Local_194.f_33 = -1;
		}
		func_190(unk_0x30BE8A934C020461(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 1), 0);
		unk_0xECDAB41968FF21A8(&(Local_194.f_5), 3);
		Local_194.f_156 = 1;
		func_23(&(Local_194.f_249), 0, 0);
	}
}

void func_190(struct<3> Param0, bool bParam3)
{
	struct<6> Var0;
	
	Var0.f_0 = 267489225;
	Var0.f_1 = unk_0x93E99A2DBCBA9CFA();
	Var0.f_2 = { Param0 };
	Var0.f_5 = bParam3;
	if (!bParam3)
	{
		if (!func_191(1, 1) == 0)
		{
			unk_0x46F55A5B9F053761(1, &Var0, 6, func_191(1, 1));
		}
	}
	else if (Global_1962996.f_21 != func_12())
	{
		unk_0x46F55A5B9F053761(1, &Var0, 6, func_8(Global_1962996.f_21));
	}
}

int func_191(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xADCF72047FEB806E(iVar1);
		if (func_19(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x93E99A2DBCBA9CFA() || iParam0)
			{
				if (bParam1)
				{
					unk_0xECDAB41968FF21A8(&uVar0, iVar1);
				}
				else if (!func_116(iVar2, 0))
				{
					unk_0xECDAB41968FF21A8(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_192()
{
	return BitTest(Global_1962996, 8);
}

int func_193()
{
	if ((unk_0x5E6D8811A0BD0954(Local_194.f_159) && unk_0x055111B11E6624FD(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0)) && !BitTest(Local_194.f_5, 2))
	{
		return 1;
	}
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159))
	{
		if (func_164(unk_0x93E99A2DBCBA9CFA()) && BitTest(Global_2791783, 0))
		{
		}
		else if (func_203())
		{
			if (unk_0x85A0C6DDA57C5652(unk_0xDCE61FCD9D7F205E(Local_194.f_159)) || unk_0x58B1000E5991032B(unk_0xDCE61FCD9D7F205E(Local_194.f_159)) != 0)
			{
				Local_194.f_26 = 1;
				return 1;
			}
		}
	}
	if (BitTest(Local_194.f_5, 2))
	{
		Local_194.f_26 = 4;
		return 1;
	}
	if (BitTest(Local_194.f_5, 9))
	{
		Local_194.f_26 = 1;
		return 1;
	}
	if (BitTest(Local_194.f_5, 7))
	{
		Local_194.f_26 = 0;
		return 1;
	}
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159))
	{
		if (unk_0x1589BC95A4C50F21(unk_0xDCE61FCD9D7F205E(Local_194.f_159)) || func_202(unk_0x177F7E959D2D410B(Local_194.f_159), 0))
		{
			if (BitTest(Local_194.f_5, 29))
			{
				Local_194.f_26 = 3;
				return 1;
			}
		}
	}
	if (func_200(unk_0x93E99A2DBCBA9CFA()))
	{
		Local_194.f_26 = 0;
		return 1;
	}
	if (func_138())
	{
		if (Global_1853755 != func_12())
		{
			if (func_47(Global_1853755))
			{
				Local_194.f_26 = 0;
				return 1;
			}
		}
	}
	if (func_199())
	{
		Local_194.f_26 = 1;
		return 1;
	}
	if (func_198(unk_0x93E99A2DBCBA9CFA()))
	{
		Local_194.f_26 = 0;
		return 1;
	}
	if (func_197())
	{
		Local_194.f_26 = 0;
		return 1;
	}
	if (func_196())
	{
		Local_194.f_26 = 0;
		return 1;
	}
	if (func_32())
	{
		Local_194.f_26 = 0;
		return 1;
	}
	if (func_37())
	{
		Local_194.f_26 = 0;
		return 1;
	}
	if (func_31())
	{
		if (unk_0xE678B2045145CE41(unk_0xC1A5EC5C986B98AD(), 1))
		{
			Local_194.f_26 = 6;
			return 1;
		}
		if (unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) || unk_0xDF599E1CB1AF931D(unk_0xC1A5EC5C986B98AD()))
		{
			Local_194.f_26 = 6;
			return 1;
		}
		if (func_155(unk_0xC1A5EC5C986B98AD(), Local_194.f_153, 1) > 2f)
		{
			Local_194.f_26 = 7;
			return 1;
		}
	}
	if (func_195())
	{
		return 1;
	}
	if (func_16())
	{
		if (func_34())
		{
			return 1;
		}
		if (func_194("AIRDEF_WARN"))
		{
			if (func_22(&(Local_194.f_346), 2000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_21(&(Local_194.f_346));
		}
	}
	return 0;
}

bool func_194(char* sParam0)
{
	unk_0x56C9BC27C0FF68D7(sParam0);
	return unk_0x6A92D111B5409879(0);
}

int func_195()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { -90000f, -90000f, -1600f };
	Var3 = { 90000f, 90000f, 2600f };
	if (!unk_0x5E6D8811A0BD0954(Local_194.f_159))
	{
		return 0;
	}
	if (!unk_0x560AC1A525D14469(unk_0xDCE61FCD9D7F205E(Local_194.f_159), Var0, Var3, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_196()
{
	return Global_97990;
}

bool func_197()
{
	return BitTest(Global_1962996, 9);
}

int func_198(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1894573[iVar0 /*608*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_199()
{
	struct<3> Var0;
	
	if (Local_194.f_17 == joaat("v_faceoffice"))
	{
		if (func_17(unk_0xDCE61FCD9D7F205E(Local_194.f_159)))
		{
			if (unk_0x846426CCFA47452B(unk_0xDCE61FCD9D7F205E(Local_194.f_159)) == joaat("GtaMloRoom001"))
			{
				Var0 = { unk_0x30BE8A934C020461(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 1) };
				if (Var0.f_2 >= 47f)
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159))
	{
		if (func_17(unk_0xDCE61FCD9D7F205E(Local_194.f_159)))
		{
			if (unk_0x9DC9E896F189AAA5(unk_0xDCE61FCD9D7F205E(Local_194.f_159), -1071.258f, -242.5484f, 48.02133f, -1069.456f, -245.9234f, 43.87983f, 3f, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0x9DC9E896F189AAA5(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 2494.398f, -276.2f, -69.09f, 2494.342f, -277.4824f, -67.98756f, 0.7f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_200(int iParam0)
{
	if (iParam0 != func_12() && func_19(iParam0, 1, 1))
	{
		if (func_11(iParam0) && !func_201(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_201(int iParam0)
{
	if (iParam0 != func_12() && func_19(iParam0, 1, 1))
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321, 4);
	}
	return 0;
}

int func_202(int iParam0, int iParam1)
{
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if (!unk_0x055111B11E6624FD(iParam0, 0) || iParam1)
		{
			if (unk_0x1589BC95A4C50F21(iParam0))
			{
				if (unk_0xA57B95471CC90EA4(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_203()
{
	return BitTest(Global_1962996, 15);
}

void func_204()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	int iVar18;
	var uVar19;
	struct<3> Var22;
	int iVar25;
	bool bVar26;
	
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159) && !unk_0x055111B11E6624FD(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0))
	{
		if (unk_0xFE2AB315FD8C7A6F(Local_194.f_159))
		{
			Var0 = { Local_194.f_150 };
			switch (Local_194.f_13)
			{
				case 0:
					Var3 = { unk_0x7D4F36E9E86B0A11() };
					Var6 = { unk_0x929C32C999805F0A(2) };
					Var9 = { (-unk_0x0BADBFA3B172435F(Var6.f_2) * unk_0xD0FFB162F40A139C(Var6.f_0)), (unk_0xD0FFB162F40A139C(Var6.f_2) * unk_0xD0FFB162F40A139C(Var6.f_0)), unk_0x0BADBFA3B172435F(Var6.f_0) };
					Var12 = { 10f, 10f, 10f };
					if (func_24())
					{
						Var12 = { Global_262145.f_25312, Global_262145.f_25312, Global_262145.f_25312 };
					}
					Var15 = { Var3 + Var9 * Var12 };
					Var0 = { unk_0xF2A6E8EA57F9D501(Local_194.f_150, unk_0xD850DD08D5434072(unk_0xDCE61FCD9D7F205E(Local_194.f_159)), 0f, -0.1f, 0f) };
					Local_194.f_167 = unk_0xB4C9A1D39D0533BF(Var0, Var15, 123, unk_0xDCE61FCD9D7F205E(Local_194.f_159), 7);
					if (Local_194.f_167 != 0)
					{
						Local_194.f_13 = 1;
					}
					break;
				
				case 1:
					Local_194.f_244 = unk_0x5A2817B89A8ECCD2(Local_194.f_167, &iVar18, &Var22, &uVar19, &iVar25);
					if (Local_194.f_244 == 2)
					{
						if (iVar18 == 0)
						{
							Local_194.f_14 = 1;
							Var22 = { 0f, 0f, 0f };
							if (BitTest(Local_194.f_5, 11) && !func_24())
							{
								unk_0x061B1200C95204CB(&(Local_194.f_5), 11);
							}
							if (BitTest(Local_194.f_5, 23))
							{
								unk_0x061B1200C95204CB(&(Local_194.f_5), 23);
							}
							func_211();
						}
						else
						{
							Local_194.f_14 = 2;
							if (unk_0x7DE17ACDD8BA2642(iVar25))
							{
								if (unk_0x71904BD37B848CAF(iVar25))
								{
									if (!unk_0x055111B11E6624FD(iVar25, 0))
									{
										if (unk_0x60A06DE259634304(unk_0x9C8D7679C15E75FF(iVar25)))
										{
											if (func_209(unk_0x93E99A2DBCBA9CFA(), unk_0xB850F932D03EF34D(unk_0x9C8D7679C15E75FF(iVar25))))
											{
												bVar26 = true;
											}
										}
										else
										{
											if (!BitTest(Local_194.f_5, 23))
											{
												unk_0xECDAB41968FF21A8(&(Local_194.f_5), 23);
												if (BitTest(Local_194.f_5, 11) && !func_24())
												{
													unk_0x061B1200C95204CB(&(Local_194.f_5), 11);
												}
											}
											if (!func_90(unk_0x93E99A2DBCBA9CFA()) && !func_87(unk_0x93E99A2DBCBA9CFA()))
											{
												if ((func_208(unk_0x9C8D7679C15E75FF(iVar25)) || func_207(unk_0x9C8D7679C15E75FF(iVar25))) || func_206(unk_0x9C8D7679C15E75FF(iVar25)))
												{
													func_86(Global_1837219);
													func_205(&(Local_194.f_259), 0, 0);
												}
												else
												{
													func_211();
												}
											}
										}
										if ((((!BitTest(Local_194.f_5, 11) && !bVar26) && func_17(Global_1962996.f_23)) && unk_0xC832FC847E3442DA(Global_1962996.f_23, iVar25, 511)) && (unk_0x60A06DE259634304(unk_0x9C8D7679C15E75FF(iVar25)) && unk_0xC1A5EC5C986B98AD() != unk_0x9C8D7679C15E75FF(iVar25)))
										{
											unk_0xECDAB41968FF21A8(&(Local_194.f_5), 11);
											if (BitTest(Local_194.f_5, 23))
											{
												unk_0x061B1200C95204CB(&(Local_194.f_5), 23);
											}
										}
									}
								}
								else
								{
									if (!func_24())
									{
										if (BitTest(Local_194.f_5, 11))
										{
											unk_0x061B1200C95204CB(&(Local_194.f_5), 11);
										}
									}
									if (BitTest(Local_194.f_5, 23))
									{
										unk_0x061B1200C95204CB(&(Local_194.f_5), 23);
									}
									func_211();
								}
							}
							else
							{
								func_211();
							}
							Local_194.f_167 = 0;
							Local_194.f_13 = 0;
						}
					}
					else if (Local_194.f_244 == 0)
					{
						Local_194.f_13 = 0;
					}
					break;
			}
		}
		else
		{
			unk_0xF05A5F7FFA0C5E2D(Local_194.f_159);
		}
	}
}

void func_205(var uParam0, bool bParam1, bool bParam2)
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

int func_206(int iParam0)
{
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if (unk_0x995186CE2D675C63(iParam0) == -183807561)
		{
			return 1;
		}
	}
	return 0;
}

int func_207(int iParam0)
{
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if ((((((((((((unk_0x1D9AC8866737E55F(iParam0) == 7 || unk_0x1D9AC8866737E55F(iParam0) == 8) || unk_0x1D9AC8866737E55F(iParam0) == 9) || unk_0x1D9AC8866737E55F(iParam0) == 10) || unk_0x1D9AC8866737E55F(iParam0) == 11) || unk_0x1D9AC8866737E55F(iParam0) == 12) || unk_0x1D9AC8866737E55F(iParam0) == 13) || unk_0x1D9AC8866737E55F(iParam0) == 14) || unk_0x1D9AC8866737E55F(iParam0) == 15) || unk_0x1D9AC8866737E55F(iParam0) == 16) || unk_0x1D9AC8866737E55F(iParam0) == 17) || unk_0x1D9AC8866737E55F(iParam0) == 18) || unk_0x1D9AC8866737E55F(iParam0) == 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_208(int iParam0)
{
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if ((((unk_0x1D9AC8866737E55F(iParam0) == 6 || unk_0x1D9AC8866737E55F(iParam0) == 29) || unk_0x1D9AC8866737E55F(iParam0) == 27) || unk_0x995186CE2D675C63(iParam0) == joaat("army")) || unk_0x995186CE2D675C63(iParam0) == joaat("COP"))
		{
			return 1;
		}
	}
	return 0;
}

int func_209(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_210(iParam0);
	if (!iVar0 == func_12())
	{
		if (iVar0 == func_210(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_210(int iParam0)
{
	if (iParam0 != func_12())
	{
		return Global_1894573[iParam0 /*608*/].f_10;
	}
	return func_12();
}

void func_211()
{
	if (func_25(&(Local_194.f_259)))
	{
		if (func_22(&(Local_194.f_259), 60000, 0))
		{
			func_21(&(Local_194.f_259));
			if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) <= 0)
			{
				func_86(Global_1837208);
			}
		}
	}
}

void func_212()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	struct<3> Var14;
	struct<3> Var17;
	int iVar20;
	var uVar21;
	struct<3> Var24;
	int iVar27;
	int iVar28;
	int iVar29;
	
	if (((func_35() || func_24()) || func_38()) || func_16())
	{
		if (!BitTest(Local_194.f_5, 29))
		{
			return;
		}
	}
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159) && !unk_0x055111B11E6624FD(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0))
	{
		if (unk_0xC3F44DB0D331A035(unk_0xDCE61FCD9D7F205E(Local_194.f_159)))
		{
			return;
		}
		if (unk_0xFE2AB315FD8C7A6F(Local_194.f_159))
		{
			switch (Local_194.f_11)
			{
				case 0:
					if ((func_24() || func_38()) || func_35())
					{
						fVar13 = 0.3f;
					}
					else if (func_16())
					{
						fVar13 = 0.65f;
					}
					else
					{
						fVar13 = (func_215(Local_194.f_240) * 1.5f);
					}
					if (func_83())
					{
						Var14 = { Local_194.f_150 };
						Var1 = { unk_0x7D4F36E9E86B0A11() };
						Var4 = { unk_0x929C32C999805F0A(2) };
						Var7 = { (-unk_0x0BADBFA3B172435F(Var4.f_2) * unk_0xD0FFB162F40A139C(Var4.f_0)), (unk_0xD0FFB162F40A139C(Var4.f_2) * unk_0xD0FFB162F40A139C(Var4.f_0)), unk_0x0BADBFA3B172435F(Var4.f_0) };
						Var10 = { 0.9f, 0.9f, 0.9f };
						if (func_16())
						{
							Var10 = { 1.9f, 1.9f, 1.9f };
						}
						Var17 = { Var1 + Var7 * Var10 };
					}
					else
					{
						Var14 = { Local_194.f_150 };
						Var17 = { Local_194.f_150 };
					}
					Local_194.f_166 = unk_0xD8D74C74516FDA20(Var14, Var17, fVar13, 511, unk_0xDCE61FCD9D7F205E(Local_194.f_159), 4);
					if (Local_194.f_166 != 0)
					{
						Local_194.f_11 = 1;
					}
					break;
				
				case 1:
					iVar28 = unk_0x5A2817B89A8ECCD2(Local_194.f_166, &iVar20, &Var24, &uVar21, &iVar27);
					if (iVar28 == 2)
					{
						if (iVar20 == 0)
						{
							Local_194.f_12 = 1;
							Var24 = { 0f, 0f, 0f };
						}
						else
						{
							if (unk_0x7DE17ACDD8BA2642(iVar27))
							{
								if (unk_0xA6B591D40DE982B5(iVar27))
								{
									if (!unk_0x055111B11E6624FD(iVar27, 0) && unk_0x504B9BB48D41C264(iVar27) != Local_194.f_240)
									{
										if (unk_0xDC58AE028CB223BA(iVar27) > 0.5f || func_213(unk_0x504B9BB48D41C264(iVar27)))
										{
											if (!BitTest(Local_194.f_5, 9))
											{
												unk_0xECDAB41968FF21A8(&(Local_194.f_5), 9);
											}
										}
									}
								}
								else if (unk_0x71904BD37B848CAF(iVar27))
								{
									if (!unk_0x055111B11E6624FD(iVar27, 0))
									{
										if (!unk_0x60A06DE259634304(unk_0x9C8D7679C15E75FF(iVar27)))
										{
											if (Local_194.f_28 == 0)
											{
												iVar0 = unk_0x15A88CFAAFFC6C4B(0, 3);
												if (iVar0 == 0)
												{
													iVar29 = 85;
												}
												else if (iVar0 == 1)
												{
													iVar29 = 90;
												}
												else
												{
													iVar29 = 79;
												}
												Local_194.f_28 = unk_0x29CDE2F9C4D4CAF2(iVar29, Local_194.f_150, 5000f);
												func_205(&(Local_194.f_265), 0, 0);
											}
										}
									}
								}
							}
							Local_194.f_12 = 2;
							unk_0xCA9F34C06A0529CE(0, 300, 50);
							Local_194.f_166 = 0;
							Local_194.f_11 = 0;
						}
					}
					else if (iVar28 == 0)
					{
						Local_194.f_11 = 0;
					}
					break;
			}
			if (Local_194.f_28 != 0)
			{
				if (func_25(&(Local_194.f_265)))
				{
					if (func_22(&(Local_194.f_265), 5000, 0))
					{
						unk_0xE7282371418F8E0E(Local_194.f_28);
						func_21(&(Local_194.f_265));
						Local_194.f_28 = 0;
					}
				}
			}
		}
		else
		{
			unk_0xF05A5F7FFA0C5E2D(Local_194.f_159);
		}
	}
}

int func_213(int iParam0)
{
	switch (iParam0)
	{
		case joaat("chernobog"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("skylift"):
		case joaat("taco"):
			return 1;
			break;
	}
	if (func_214(iParam0, 1))
	{
		return 1;
	}
	if (unk_0x2D92D1084D213DC4(iParam0) || unk_0xAF4434A9F7368F35(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14734)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14735)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14733)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14736)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14738)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14737)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_19141)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_19143)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_19147)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_19144)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_19151)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_19149)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_19154)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_21100)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_21101)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

float func_215(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_216(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	return unk_0x2655A8EC638E4FD1((Var0.f_2 - Var3.f_2));
}

void func_216(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x36A2218D87DEF488(iParam0))
	{
		unk_0x1C97A6E4D8DA4B2F(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_219(iParam0);
		if (iVar0 != 0)
		{
			func_217(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (unk_0x652D2EEEF1D3E62C(*uParam1) <= 0.01f || unk_0x652D2EEEF1D3E62C(*uParam2) <= 0.01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20.7f)
			{
				fParam4 = 20.7f;
			}
			if (fParam3 < 137.2f)
			{
				fParam3 = 137.2f;
			}
			if (fParam5 < 21.1f)
			{
				fParam5 = 21.1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_217(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_218(iParam0, &Global_1577994);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x36A2218D87DEF488(Global_1577994[iVar0]))
		{
			unk_0x1C97A6E4D8DA4B2F(Global_1577994[iVar0], &(Global_1577998[iVar0 /*3*/]), &(Global_1578005[iVar0 /*3*/]));
		}
		if (unk_0x652D2EEEF1D3E62C(Global_1577998[iVar0 /*3*/]) <= 0.01f || unk_0x652D2EEEF1D3E62C(Global_1578005[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1577998[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1578005[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1577998[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1578005[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1577998[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1578005[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1578012[iVar0] = (Global_1578005[iVar0 /*3*/] - Global_1577998[iVar0 /*3*/]);
		Global_1578015[iVar0] = (Global_1578005[iVar0 /*3*/].f_1 - Global_1577998[iVar0 /*3*/].f_1);
		Global_1578018[iVar0] = (Global_1578005[iVar0 /*3*/].f_2 - Global_1577998[iVar0 /*3*/].f_2);
		if (Global_1578012[iVar0] > Global_1578021)
		{
			Global_1578021 = Global_1578012[iVar0];
		}
		if (Global_1578018[iVar0] > Global_1578022)
		{
			Global_1578022 = Global_1578018[iVar0];
		}
		iVar0++;
	}
	Global_1578023 = (Global_1578021 * -0.5f);
	Global_1578026 = (Global_1578021 * 0.5f);
	Global_1578023.f_1 = ((((0.5f * Global_1578015[0]) + Global_1578015[1]) + Global_1577994.f_3) * -1f);
	Global_1578026.f_1 = (0.5f * Global_1578015[0]);
	Global_1578023.f_2 = (Global_1578018[0] * -0.5f);
	Global_1578026.f_2 = (Global_1578018[0] * 0.5f);
	*uParam1 = { Global_1578023 };
	*uParam2 = { Global_1578026 };
}

void func_218(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_219(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_220(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_220(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_221()
{
	int iVar0;
	
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159))
	{
		if (func_17(unk_0xDCE61FCD9D7F205E(Local_194.f_159)))
		{
			iVar0 = func_224(unk_0xDCE61FCD9D7F205E(Local_194.f_159));
			if (iVar0 != -1)
			{
				if (!func_223(&(Global_1835504.f_393), iVar0) && !func_223(&(Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_535), iVar0))
				{
					func_222(1);
				}
			}
		}
	}
}

void func_222(bool bParam0)
{
	if (bParam0)
	{
		if (func_75())
		{
			if (!BitTest(Global_1962996, 9))
			{
				unk_0xECDAB41968FF21A8(&Global_1962996, 9);
			}
		}
	}
	else if (BitTest(Global_1962996, 9))
	{
		unk_0x061B1200C95204CB(&Global_1962996, 9);
	}
}

bool func_223(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return BitTest((*uParam0)[iVar0], iVar1);
}

int func_224(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x7DE17ACDD8BA2642(iParam0) && !unk_0x055111B11E6624FD(iParam0, 0))
	{
		iVar0 = func_228(iParam0);
		if (iVar0 != -1)
		{
			return iVar0;
		}
		iVar1 = unk_0x41AD4BF315E01D41(iParam0);
		if (iVar1 != 0)
		{
			iVar2 = 0;
			while (iVar2 < 43)
			{
				iVar3 = iVar2;
				func_225(iVar3);
				if (Global_1955050[iVar2] == iVar1)
				{
					return iVar3;
				}
				iVar2++;
			}
		}
	}
	return -1;
}

void func_225(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Global_1955050[iVar0] == 0)
	{
		Global_1955050[iVar0] = unk_0xAF0CB15312D8B8E3(func_227(iParam0), func_226(iParam0));
	}
}

char* func_226(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "bkr_biker_dlc_int_03";
		
		case 0:
			return "hei_heist_police_dlc";
		
		case 2:
			return "v_genbank";
		
		case 3:
			return "v_genbank";
		
		case 4:
			return "v_genbank";
		
		case 5:
			return "v_genbank";
		
		case 6:
			return "v_bank4";
		
		case 7:
			return "v_genbank";
		
		case 8:
			return "hei_generic_bank_dlc";
		
		case 9:
			return "v_rockclub";
		
		case 10:
			return "v_factory1";
		
		case 11:
			return "v_factory2";
		
		case 12:
			return "v_factory3";
		
		case 13:
			return "v_factory4";
		
		case 14:
			return "v_farmhouse";
		
		case 15:
			return "gr_gta_milo_bridge";
		
		case 16:
			return "v_recycle";
		
		case 17:
			return "v_lab";
		
		case 18:
			return "v_garagem";
		
		case 19:
			return "v_studio_lo";
		
		case 20:
			return "v_apart_midspaz";
		
		case 21:
			return "v_sheriff";
		
		case 22:
			return "v_sheriff2";
		
		case 23:
			return "dt1_03_carpark";
		
		case 24:
			return "v_carshowroom";
		
		case 27:
			return "v_faceoffice";
		
		case 25:
			return "v_abattoir";
		
		case 26:
			return "V_JEWEL2";
		
		case 28:
			return "smboat";
		
		case 29:
			return "vb_33_garage";
		
		case 30:
			return "v_chopshop";
		
		case 31:
			return "v_methlab";
		
		case 32:
			return "v_office_lobby";
		
		case 33:
			return "v_lab";
		
		case 34:
			return "v_foundry";
		
		case 35:
			return "v_refit";
		
		case 36:
			return "hei_int_mph_carrierhang3";
		
		case 37:
			return "hei_int_mph_carrierhang2";
		
		case 38:
			return "hei_int_mph_carrierhang1";
		
		case 39:
			return "hei_int_mph_carrierupper";
		
		case 40:
			return "hei_int_mph_carriercontrol1";
		
		case 41:
			return "hei_int_mph_carriercontrol2";
		
		case 42:
			return "ch3_01_trlr_int";
		
		default:
	}
	return "";
}

Vector3 func_227(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 983.2747f, -99.3188f, 73.8454f;
		
		case 0:
			return 443.2281f, -984.0744f, 29.6896f;
		
		case 2:
			return -1216.762f, -333.0008f, 36.8508f;
		
		case 3:
			return 145.4168f, -1039.277f, 28.4379f;
		
		case 4:
			return 309.7465f, -277.6442f, 53.2346f;
		
		case 5:
			return -355.4359f, -48.5326f, 48.1064f;
		
		case 6:
			return -109.4503f, 6467.768f, 30.4388f;
		
		case 7:
			return 1179.745f, 2706.985f, 37.1578f;
		
		case 8:
			return -2962.591f, 478.238f, 14.7669f;
		
		case 9:
			return -556.5089f, 286.3181f, 81.1763f;
		
		case 10:
			return -76.6618f, 6222.191f, 32.2412f;
		
		case 11:
			return -100.7106f, 6205.7f, 30.0499f;
		
		case 12:
			return -125.6972f, 6172.923f, 30.0499f;
		
		case 13:
			return -162.4785f, 6155.384f, 30.0499f;
		
		case 14:
			return 2449.785f, 4983.825f, 45.8106f;
		
		case 15:
			return -1426.362f, 6754.506f, 11.7821f;
		
		case 16:
			return -583.2097f, -1599.302f, 26.3052f;
		
		case 17:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 18:
			return 630f, 4750f, -60f;
		
		case 19:
			return 600f, 4750f, -60f;
		
		case 20:
			return 575f, 4750f, -60f;
		
		case 21:
			return 1853.625f, 3687.826f, 33.2671f;
		
		case 22:
			return -447.5651f, 6013.988f, 30.7164f;
		
		case 23:
			return -28.1023f, -688.8687f, 34.4437f;
		
		case 24:
			return -40.2938f, -1097.321f, 25.4223f;
		
		case 27:
			return -1074.853f, -250.3996f, 36.7388f;
		
		case 25:
			return 982.233f, -2160.382f, 28.4761f;
		
		case 26:
			return -630.4205f, -236.7843f, 37.057f;
		
		case 28:
			return -2032f, -1035f, 5f;
		
		case 29:
			return -1078.561f, -1678.615f, 3.5752f;
		
		case 30:
			return 479.88f, -1318.57f, 28.2f;
		
		case 31:
			return 1392.512f, 3603.185f, 38.5f;
		
		case 32:
			return 105.4557f, -745.4835f, 44.7548f;
		
		case 33:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 34:
			return 1087.195f, -1988.445f, 28.649f;
		
		case 35:
			return -583.1606f, -282.3967f, 35.394f;
		
		case 36:
			return 3053.565f, -4653.67f, 5.0773f;
		
		case 37:
			return 3058.002f, -4700.8f, 5.0773f;
		
		case 38:
			return 3080.619f, -4772.69f, 5.0773f;
		
		case 39:
			return 3088.469f, -4708.33f, 20.567f;
		
		case 40:
			return 3085.222f, -4690.66f, 26.2522f;
		
		case 41:
			return 3092.459f, -4711.389f, 26.2657f;
		
		case 42:
			return 2329.242f, 2571.494f, 45.6772f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_228(int iParam0)
{
	if (func_235(iParam0))
	{
		return 15;
	}
	if (func_233(iParam0))
	{
		return 28;
	}
	if (func_231(iParam0))
	{
		return 36;
	}
	if (func_230(iParam0))
	{
		return 23;
	}
	if (func_229(iParam0))
	{
		return 33;
	}
	return -1;
}

int func_229(int iParam0)
{
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		if ((unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 3833.558f, 3666.702f, -20.91209f, 3818.202f, 3654.002f, -26.37315f, 12.25f, 0, 1, 0) || unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 3765.784f, 3661.946f, -15.33658f, 3823.827f, 3654.624f, -24.84368f, 13.75f, 0, 1, 0)) || unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 3519.188f, 3724.821f, -0.487321f, 3767.179f, 3661.705f, -32.33569f, 115f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_230(int iParam0)
{
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(iParam0, 1), -16.2669f, -685.4531f, 31.3381f, 1) <= 80f)
		{
			if ((((((unk_0x9DC9E896F189AAA5(iParam0, -73.06738f, -689.2972f, 31.96555f, -68.41993f, -676.6198f, 36.63721f, 4.25f, 0, 1, 0) || unk_0x9DC9E896F189AAA5(iParam0, 25.07854f, -664.3469f, 30.40673f, 14.14475f, -690.1883f, 38.61758f, 16f, 0, 1, 0)) || unk_0x9DC9E896F189AAA5(iParam0, -18.7689f, -659.366f, 30.79917f, -15.31378f, -703.7052f, 38.08809f, 54.5f, 0, 1, 0)) || unk_0x9DC9E896F189AAA5(iParam0, 9.119493f, -710.9459f, 30.83068f, -39.76558f, -693.0358f, 38.08809f, 24.25f, 0, 1, 0)) || unk_0x9DC9E896F189AAA5(iParam0, -69.84457f, -683.3396f, 30.70474f, -39.69342f, -690.2305f, 36.58809f, 17.25f, 0, 1, 0)) || unk_0x9DC9E896F189AAA5(iParam0, -43.32302f, -693.9668f, 30.58809f, -72.39151f, -683.4483f, 39.48361f, 20f, 0, 1, 0)) || unk_0x9DC9E896F189AAA5(iParam0, -39.63783f, -686.181f, 30.58809f, -39.30408f, -662.2571f, 39.48083f, 20f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_231(int iParam0)
{
	return ((!unk_0x055111B11E6624FD(iParam0, 0) && unk_0x1C4E4DC1EFE24DF1(iParam0, 3042.596f, -4667.915f, 34.26143f, 250f, 300f, 40f, 0, 1, 0)) || func_232());
}

int func_232()
{
	if (!unk_0x72474BA05A104E1E())
	{
		if (unk_0xB7A628320EFF8E47(func_6(unk_0x93E99A2DBCBA9CFA()), 3042.596f, -4667.915f, 34.26143f) <= 25600f)
		{
			if (unk_0x67670574D396B9A8(3042.596f, -4667.915f, 34.26143f, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_233(int iParam0)
{
	return ((!unk_0x055111B11E6624FD(iParam0, 0) && unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -2016.6f, -1039.867f, -3.801932f, -2129.956f, -1003.351f, 22.18234f, 15.75f, 0, 1, 0)) || func_234());
}

int func_234()
{
	struct<3> Var0;
	
	if (!unk_0x72474BA05A104E1E())
	{
		Var0 = { -2073.541f, -1021.104f, 14.99213f };
		if (unk_0xB7A628320EFF8E47(func_6(unk_0x93E99A2DBCBA9CFA()), Var0) <= 25600f)
		{
			if (unk_0x67670574D396B9A8(Var0, 60f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_235(int iParam0)
{
	return ((!unk_0x055111B11E6624FD(iParam0, 0) && unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f), Vector(22.18234f, -1003.351f, -2129.956f) + Vector(0f, 7773.967f, 654.731f), 15.75f, 0, 1, 0)) || func_236());
}

int func_236()
{
	struct<3> Var0;
	
	if (!unk_0x72474BA05A104E1E())
	{
		Var0 = { Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f) };
		if (unk_0xB7A628320EFF8E47(func_6(unk_0x93E99A2DBCBA9CFA()), Var0) <= 25600f)
		{
			if (unk_0x67670574D396B9A8(Var0, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_237(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (func_35())
	{
		return;
	}
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159))
	{
		if (unk_0xF57C1326FD40C8A7(Local_194.f_169) && unk_0x2DDFF72E939527F8(Local_194.f_169))
		{
			if (unk_0x0097C56F4031898F(Local_194.f_169) || iParam0)
			{
				if (!func_77())
				{
					func_71(0);
				}
				func_248(1);
				if ((!func_247() || BitTest(Local_194.f_5, 1)) || func_193())
				{
					unk_0xE288789FFB1A0C2F();
				}
				else
				{
					unk_0xEDECDDE17C1E41F5(9);
					unk_0xEDECDDE17C1E41F5(7);
					unk_0xEDECDDE17C1E41F5(8);
					func_80();
					func_245(1);
					uVar0 = unk_0x41AD4BF315E01D41(unk_0x177F7E959D2D410B(Local_194.f_159));
					if (unk_0x4D3D95146FD3490D(uVar0))
					{
						Global_1962996.f_24 = uVar0;
						if (!BitTest(Local_194.f_5, 8))
						{
							Local_194.f_123 = func_244(unk_0xC582A01EA9449995(uVar0));
							unk_0x8C41B1E296A595C7(uVar0, &(Local_194.f_147), &(Local_194.f_17));
							unk_0xECDAB41968FF21A8(&(Local_194.f_5), 8);
						}
						iVar1 = 0;
						if (func_243(Local_194.f_150.f_2, 43f, 48.7f))
						{
							iVar1 = 1;
						}
						if (Global_1962996.f_9 == -1f)
						{
							unk_0x16F0AA504E7636FB(1f);
						}
						else
						{
							unk_0x16F0AA504E7636FB(Global_1962996.f_9);
						}
						if ((!func_164(unk_0x93E99A2DBCBA9CFA()) && !func_240(unk_0x93E99A2DBCBA9CFA())) && !func_16())
						{
							if (!func_239())
							{
								func_238(1);
							}
						}
						if (!func_16())
						{
							unk_0x09BE33F608C4CBB2(0, 0);
						}
						unk_0x6F02C1D10DD36CE1(Local_194.f_17, Local_194.f_147, Local_194.f_147.f_1, unk_0xF34EE736CF047844(Local_194.f_123), iVar1);
					}
					else
					{
						Local_194.f_17 = -1;
						if (Global_1962996.f_9 == -1f)
						{
							unk_0x16F0AA504E7636FB(0f);
						}
						else
						{
							unk_0x16F0AA504E7636FB(Global_1962996.f_9);
						}
						if (!func_239() && !func_16())
						{
							func_238(1);
						}
						if (!func_16())
						{
							unk_0x09BE33F608C4CBB2(0, 0);
						}
						Global_1962996.f_24 = -1;
						if (BitTest(Local_194.f_5, 8))
						{
							unk_0x061B1200C95204CB(&(Local_194.f_5), 8);
						}
					}
				}
			}
		}
	}
}

void func_238(int iParam0)
{
	Global_2696952 = iParam0;
}

bool func_239()
{
	return Global_2696952;
}

int func_240(int iParam0)
{
	if (func_242(iParam0))
	{
		return 1;
	}
	if (func_241(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_241(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_91(iParam0, 9);
	}
	return 0;
}

int func_242(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1894573[iVar0 /*608*/].f_1, 0);
	}
	return 0;
}

int func_243(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 >= fParam1 && fParam0 < fParam2)
	{
		return 1;
	}
	return 0;
}

float func_244(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_245(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_100733.f_8 = 1;
	}
	else
	{
		Global_100733.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_246(iVar0);
		iVar0++;
	}
}

void func_246(int iParam0)
{
	Global_100733.f_202[iParam0] = 1;
	Global_100733.f_201 = 1;
}

bool func_247()
{
	return BitTest(Global_1962996, 4);
}

void func_248(int iParam0)
{
	if (Global_2793044.f_4653 != iParam0)
	{
		Global_2793044.f_4653 = iParam0;
	}
}

void func_249()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	struct<3> Var14;
	struct<3> Var17;
	float fVar20;
	struct<3> Var21;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	struct<3> Var28;
	struct<3> Var31;
	float fVar34;
	float fVar35;
	var uVar36;
	var uVar37;
	struct<3> Var38;
	
	if ((BitTest(Local_194.f_5, 1) || func_193()) || func_83())
	{
		return;
	}
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159) && !unk_0x055111B11E6624FD(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0))
	{
		if (unk_0xFE2AB315FD8C7A6F(Local_194.f_159))
		{
			fVar0 = 40f;
			fVar1 = 19f;
			fVar2 = 14f;
			iVar3 = 1;
			fVar4 = unk_0xBE130DD171F83A37(unk_0xDCE61FCD9D7F205E(Local_194.f_159));
			fVar5 = unk_0xC175A2FE346B3A79(unk_0xDCE61FCD9D7F205E(Local_194.f_159));
			if (func_30())
			{
				fVar1 = 10f;
			}
			fVar6 = (30f * unk_0x0000000050597EE2());
			func_254();
			unk_0x13EB202976B3AAE2(2);
			func_253(&(Local_194[0]), &(Local_194[1]), &(Local_194[2]), &(Local_194[3]), 0, 0);
			if (unk_0x42AAFCB5B7854AA9(0))
			{
				iVar3 = 5;
				Local_194[2] = (Local_194[2] * iVar3);
				Local_194[3] = (Local_194[3] * iVar3);
			}
			if (unk_0xEDE44CE789C14F9F())
			{
				Local_194[3] = (Local_194[3] * -1);
			}
			if (func_22(&(Local_194.f_277), 750, 0))
			{
				if (!unk_0x42AAFCB5B7854AA9(0))
				{
					bVar7 = unk_0xE665ABCFC5784C35(0, 210);
				}
				else
				{
					bVar7 = (unk_0xE665ABCFC5784C35(0, 241) || unk_0xE665ABCFC5784C35(0, 242));
					if (unk_0xE665ABCFC5784C35(0, 241))
					{
						bVar8 = true;
					}
				}
				if (bVar7)
				{
					func_205(&(Local_194.f_277), 0, 0);
				}
			}
			if (bVar7 && !func_252())
			{
				if (!unk_0x42AAFCB5B7854AA9(0))
				{
					Local_194.f_25++;
				}
				else if (bVar8)
				{
					Local_194.f_25 = (Local_194.f_25 - 1);
				}
				else
				{
					Local_194.f_25++;
				}
				if (unk_0x209C5E3492025E4B(Local_194.f_39))
				{
					Local_194.f_39 = unk_0x9F2C1BA4F2BF5CF8();
					unk_0x531D638530A8DB97(Local_194.f_39, "HUD_Zoom_Change", Local_194.f_157, 1);
				}
				if (Local_194.f_25 > 2)
				{
					Local_194.f_25 = 0;
				}
				else if (Local_194.f_25 < 0)
				{
					Local_194.f_25 = 2;
				}
			}
			else if (unk_0x209C5E3492025E4B(Local_194.f_39))
			{
				unk_0xA13B5B0EF7402391(Local_194.f_39);
				unk_0x8A1B9F78F1F46A12(Local_194.f_39);
				Local_194.f_39 = -1;
			}
			Local_194.f_128 = (Local_194.f_128 + (((Local_194.f_126 - Local_194.f_128) * 0.06f) * fVar6));
			unk_0xE3BD36CCB5EB72F2(Local_194.f_169, Local_194.f_128);
			if (Local_194[2] != 0 || Local_194[3] != 0)
			{
				if (Local_194[2] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_194[2])));
				}
				else
				{
					fVar9 = 0f;
				}
				if (Local_194[3] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_194[3])));
				}
				else
				{
					fVar10 = 0f;
				}
				Var14 = { unk_0x000D018EA42688BA(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 2) };
				fVar11 = (((fVar10 * 0.05f) * fVar6) * Local_194.f_130);
				fVar12 = -(((fVar9 * 0.05f) * fVar6) * Local_194.f_130);
				if ((fVar4 != 0f || Local_194[0] != 0) && !func_77())
				{
					if (Local_194[0] != 0)
					{
						fVar20 = (1f / (127f / IntToFloat(Local_194[0])));
						fVar13 = -(((fVar20 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
					else
					{
						if (fVar4 > 0.1f || fVar4 < -0.1f)
						{
							if (fVar4 > 0f)
							{
								fVar20 = -1f;
							}
							else
							{
								fVar20 = 1f;
							}
						}
						if (Var14.f_1 != 0f)
						{
							if (Var14.f_1 < 1.5f && Var14.f_1 > 0f)
							{
								fVar20 = 0.001f;
							}
							else if (Var14.f_1 > -1.5f && Var14.f_1 < 0f)
							{
								fVar20 = -0.001f;
							}
						}
						else
						{
							fVar20 = 0f;
						}
						fVar13 = -(((fVar20 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				else
				{
					fVar13 = 0f;
				}
				Var17 = { Vector(fVar12, fVar13, fVar11) + Var14 };
				if (fVar4 != 0f)
				{
					if (Local_194[0] == 0)
					{
						if (Var17.f_1 > fVar1)
						{
							Var17.f_1 = fVar1;
						}
						else if (Var17.f_1 < -fVar1)
						{
							Var17.f_1 = -fVar1;
						}
					}
					else if (Var17.f_1 > fVar1)
					{
						Var17.f_1 = fVar1;
					}
					else if (Var17.f_1 < -fVar1)
					{
						Var17.f_1 = -fVar1;
					}
				}
				if (Var17.f_0 > fVar2)
				{
					Var17.f_0 = fVar2;
				}
				else if (Var17.f_0 < -fVar2)
				{
					Var17.f_0 = -fVar2;
				}
				if (!BitTest(Local_194.f_5, 12))
				{
					unk_0xECDAB41968FF21A8(&(Local_194.f_5), 12);
				}
				unk_0x464B5B0F22497FC5(unk_0xDCE61FCD9D7F205E(Local_194.f_159), Vector(0f, 0f, 0f) + Vector(Var17.f_2, Var17.f_1, Var17.f_0), 2, 1);
			}
			else if (((Local_194[0] != 0 || Local_194[1] != 0) && !func_252()) && !func_77())
			{
				Var21 = { unk_0x000D018EA42688BA(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 2) };
				if (func_252())
				{
					if (func_251())
					{
						fVar25 = -1f;
						Local_194.f_129 = fVar25;
					}
				}
				else
				{
					if (Local_194[0] != 0)
					{
						fVar24 = (1f / (127f / IntToFloat(Local_194[0])));
						Local_194.f_129 = fVar24;
					}
					else
					{
						fVar24 = 0f;
					}
					if (Local_194[1] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_194[1])));
						Local_194.f_129 = fVar24;
					}
					else
					{
						fVar25 = 0f;
					}
				}
				fVar26 = -(((fVar25 * 0.05f) * fVar6) * fVar0);
				fVar27 = -(((fVar24 * 0.05f) * fVar6) * fVar0);
				if (fVar4 != 0f)
				{
					if ((Local_194[0] == 0 && !func_77()) || func_252())
					{
						if (fVar4 > 1f || fVar4 < -1f)
						{
							if (fVar4 > 0f)
							{
								fVar24 = -1f;
							}
							else
							{
								fVar24 = 1f;
							}
						}
						if (Var21.f_1 < 1.5f && Var21.f_1 > 0f)
						{
							fVar24 = 0.001f;
						}
						else if (Var21.f_1 > -1.5f && Var21.f_1 < 0f)
						{
							fVar24 = -0.001f;
						}
						fVar27 = -(((fVar24 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				Var28 = { Vector(0f, fVar27, fVar26) + Var21 };
				if (Var28.f_1 > fVar1)
				{
					Var28.f_1 = fVar1;
				}
				else if (Var28.f_1 < -fVar1)
				{
					Var28.f_1 = -fVar1;
				}
				if (Var28.f_0 > fVar2)
				{
					Var28.f_0 = fVar2;
				}
				else if (Var28.f_0 < -fVar2)
				{
					Var28.f_0 = -fVar2;
				}
				if (BitTest(Local_194.f_5, 12))
				{
					unk_0x061B1200C95204CB(&(Local_194.f_5), 12);
				}
				unk_0x464B5B0F22497FC5(unk_0xDCE61FCD9D7F205E(Local_194.f_159), Vector(0f, 0f, 0f) + Vector(Var21.f_2, Var28.f_1, Var28.f_0), 2, 1);
			}
			else if (!func_251() && !func_252())
			{
				Local_194.f_129 = 0f;
				Var31 = { unk_0x000D018EA42688BA(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 2) };
				if (fVar4 != 0f || fVar5 != 0f)
				{
					if (Var31.f_1 != 0f)
					{
						if (Var31.f_1 < 0f)
						{
							fVar34 = -1f;
						}
						else
						{
							fVar34 = 1f;
						}
					}
					else
					{
						fVar34 = 0f;
					}
					if (fVar5 != 0f)
					{
						if (Var31.f_0 < 0f)
						{
							fVar35 = -1f;
						}
						else
						{
							fVar35 = 1f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					if (Var31.f_1 != 0f)
					{
						if (Var31.f_1 < 1.5f && Var31.f_1 > 0f)
						{
							fVar34 = 0.001f;
						}
						else if (Var31.f_1 > -1.5f && Var31.f_1 < 0f)
						{
							fVar34 = -0.001f;
						}
					}
					else
					{
						fVar34 = 0f;
					}
					if (Var31.f_0 != 0f)
					{
						if (Var31.f_0 < 1.5f && Var31.f_0 > 0f)
						{
							fVar35 = 0.001f;
						}
						else if (Var31.f_0 > -1.5f && Var31.f_0 < 0f)
						{
							fVar35 = -0.001f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					uVar36 = func_250(-(((fVar35 * 0.05f) * fVar6) * (fVar0 - 25f)));
					uVar37 = func_250(-(((fVar34 * 0.05f) * fVar6) * (fVar0 - 25f)));
					Var38 = { Vector(0f, uVar37, uVar36) + Var31 };
					if (BitTest(Local_194.f_5, 12))
					{
						Var38.f_0 = Var31.f_0;
					}
					unk_0x464B5B0F22497FC5(unk_0xDCE61FCD9D7F205E(Local_194.f_159), Vector(0f, 0f, 0f) + Vector(Var31.f_2, Var38.f_1, Var38.f_0), 2, 1);
				}
			}
		}
		else
		{
			unk_0xF05A5F7FFA0C5E2D(Local_194.f_159);
		}
	}
}

float func_250(float fParam0)
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

bool func_251()
{
	return BitTest(Local_194.f_5, 22);
}

bool func_252()
{
	return BitTest(Local_194.f_5, 21);
}

void func_253(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0xB6CEF8AB884F869E(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0xB6CEF8AB884F869E(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0xB6CEF8AB884F869E(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0xB6CEF8AB884F869E(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xB378DD9B62D26EF3(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xBD6438016C54920C(2, 218) * 127f));
		}
		if (!unk_0xB378DD9B62D26EF3(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBD6438016C54920C(2, 219) * 127f));
		}
		if (!unk_0xB378DD9B62D26EF3(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xBD6438016C54920C(2, 220) * 127f));
		}
		if (!unk_0xB378DD9B62D26EF3(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0xBD6438016C54920C(2, 221) * 127f));
		}
	}
	if (unk_0x42AAFCB5B7854AA9(2))
	{
		if (bParam5)
		{
			if (unk_0xEDE44CE789C14F9F())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xA12842DEAE51AADE())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_254()
{
	if (func_138())
	{
		switch (Local_194.f_25)
		{
			case 0:
				Local_194.f_127 = 90f;
				Local_194.f_126 = 90f;
				break;
			
			case 1:
				Local_194.f_127 = 75f;
				Local_194.f_126 = 75f;
				break;
			
			case 2:
				Local_194.f_127 = 45f;
				Local_194.f_126 = 45f;
				break;
		}
	}
	else
	{
		switch (Local_194.f_25)
		{
			case 0:
				Local_194.f_127 = 90f;
				Local_194.f_126 = 90f;
				break;
			
			case 1:
				Local_194.f_127 = 80f;
				Local_194.f_126 = 80f;
				break;
			
			case 2:
				Local_194.f_127 = 70f;
				Local_194.f_126 = 70f;
				break;
			}
	}
}

void func_255()
{
	int iVar0;
	int iVar1;
	
	if (func_70(unk_0x93E99A2DBCBA9CFA(), 0))
	{
		iVar0 = func_180(0);
		Local_194.f_141 = { func_258(&Local_194) };
		if (!unk_0x7DE17ACDD8BA2642(Local_194.f_162))
		{
			if (!func_257(Local_194.f_141))
			{
				if (func_179(iVar0))
				{
					Local_194.f_162 = unk_0xF19D6C0E8B56BE23(iVar0, Local_194.f_141, 0, 0, 1);
					unk_0x2EDDA32F6EF3C8B7(Local_194.f_162, Local_194.f_141, 0, 0, 1);
					unk_0xDDE449983CE7572E(Local_194.f_162, true, 0);
					unk_0x351E6B9FD37CFF33(Local_194.f_162, 1, 1);
					unk_0xAFB08ED9E6E0C4FB(Local_194.f_162, 1);
					unk_0x692C3FDAD7DB53CC(Local_194.f_162, func_256());
					unk_0x2718E9CC165A99F6(Local_194.f_162, true);
					unk_0x724FFAED1C56CE2B(Local_194.f_162, false, 0);
					unk_0xE0A291F406691F03(iVar0);
				}
			}
		}
		else
		{
			iVar1 = unk_0x0744FA5607ECEB91(Local_194.f_141, 2f, iVar0, 0, 0, 0);
			if (unk_0x7DE17ACDD8BA2642(iVar1) && iVar1 != Local_194.f_162)
			{
				if (unk_0xB6B927AA8C3DAD36(iVar1))
				{
					unk_0x362A7D3F1F776CB5(iVar1, 0, 0);
					unk_0x2718E9CC165A99F6(iVar1, true);
					unk_0x724FFAED1C56CE2B(iVar1, true, 0);
				}
				else
				{
					unk_0xBDB0FB8EEE50C9CD(iVar1);
				}
			}
		}
	}
	else
	{
		Local_194.f_141 = { func_258(&Local_194) };
	}
}

float func_256()
{
	if (Global_1962996.f_7 != 0f)
	{
		return Global_1962996.f_7;
	}
	return 0f;
}

int func_257(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_258(var uParam0)
{
	if (!func_257(Global_1962996.f_10))
	{
		return Global_1962996.f_10;
	}
	else
	{
		return uParam0->f_141;
	}
	return 0f, 0f, 0f;
}

void func_259()
{
	if (Local_194.f_33 != -1)
	{
		unk_0xA13B5B0EF7402391(Local_194.f_33);
		unk_0x8A1B9F78F1F46A12(Local_194.f_33);
		Local_194.f_33 = -1;
	}
}

int func_260(bool bParam0)
{
	if (unk_0xFEE065E56A9BEF3F() || unk_0x4136116828BCAAB6())
	{
		return 1;
	}
	if (unk_0xEBDA168F3804CE1F())
	{
		return 1;
	}
	if (func_172())
	{
		return 1;
	}
	if (func_265(unk_0x93E99A2DBCBA9CFA()) && !func_264())
	{
		return 1;
	}
	if (func_164(unk_0x93E99A2DBCBA9CFA()))
	{
		if (BitTest(Global_2791783, 0))
		{
			return 1;
		}
	}
	if (Global_1935176 || Global_1574964)
	{
		func_263(1);
		return 1;
	}
	if (((func_261(0) || func_169(1)) || func_168()) && !bParam0)
	{
		func_71(0);
		func_80();
		func_99();
		return 1;
	}
	return 0;
}

int func_261(bool bParam0)
{
	if (unk_0x8FF4A425D460D6C6())
	{
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			if (func_262(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x51EB177CA0562B62(0, 25) || unk_0x51EB177CA0562B62(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23131.f_130)
	{
		return 0;
	}
	if (unk_0x51EB177CA0562B62(0, 19) || (!bParam0 && unk_0x992AACDC3C066F55(0, 19)))
	{
		return 1;
	}
	if (unk_0xCC17806DB0C41C19())
	{
		if (((unk_0x51EB177CA0562B62(0, 166) || unk_0x51EB177CA0562B62(0, 167)) || unk_0x51EB177CA0562B62(0, 168)) || unk_0x51EB177CA0562B62(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x992AACDC3C066F55(0, 166) || unk_0x992AACDC3C066F55(0, 167)) || unk_0x992AACDC3C066F55(0, 168)) || unk_0x992AACDC3C066F55(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_262(int iParam0)
{
	int iVar0;
	
	if (unk_0x59B303498BF93C46())
	{
		if (!unk_0x66599E73DBA5A850(iParam0))
		{
			unk_0xEBC16D60E30C9AE1(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_263(bool bParam0)
{
	if (bParam0)
	{
		if (!func_37())
		{
			unk_0xECDAB41968FF21A8(&Global_1962996, 20);
		}
	}
	else if (func_37())
	{
		unk_0x061B1200C95204CB(&Global_1962996, 20);
	}
}

bool func_264()
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1969892, 0));
}

int func_265(int iParam0)
{
	if (func_116(iParam0, 0))
	{
		return 1;
	}
	if (func_266())
	{
		if (iParam0 == unk_0x93E99A2DBCBA9CFA())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657589[iParam0 /*466*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_266()
{
	return BitTest(Global_2621446, 3);
}

void func_267()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var18;
	float fVar21;
	struct<3> Var22;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	struct<3> Var29;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	var uVar37;
	var uVar38;
	struct<3> Var39;
	var uVar42;
	
	if (!func_83() || func_193())
	{
		return;
	}
	if (func_35() && func_260(0))
	{
		return;
	}
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159) && !unk_0x055111B11E6624FD(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0))
	{
		if (unk_0xFE2AB315FD8C7A6F(Local_194.f_159))
		{
			fVar0 = 40f;
			fVar1 = 30f;
			fVar2 = 30f;
			iVar3 = 1;
			fVar4 = unk_0xBE130DD171F83A37(unk_0xDCE61FCD9D7F205E(Local_194.f_159));
			fVar5 = unk_0xC175A2FE346B3A79(unk_0xDCE61FCD9D7F205E(Local_194.f_159));
			iVar6 = 1;
			if (func_16())
			{
				if (func_260(1))
				{
					iVar6 = 0;
				}
			}
			else if (func_260(0))
			{
				iVar6 = 0;
			}
			if (func_16())
			{
				if (!func_130())
				{
					iVar6 = 0;
				}
				fVar2 = 80f;
			}
			fVar7 = (30f * unk_0x290D4E218346D595());
			func_254();
			unk_0x13EB202976B3AAE2(2);
			func_253(&(Local_194[0]), &(Local_194[1]), &(Local_194[2]), &(Local_194[3]), 0, 0);
			if (unk_0x42AAFCB5B7854AA9(0))
			{
				iVar3 = 2;
				if (func_16())
				{
					iVar3 = 3;
				}
				Local_194[2] = (Local_194[2] * iVar3);
				Local_194[3] = (Local_194[3] * iVar3);
			}
			if (unk_0xEDE44CE789C14F9F())
			{
				Local_194[3] = (Local_194[3] * -1);
				Local_194[1] = (Local_194[1] * -1);
			}
			if (Local_194[3] != 0 && Local_194[2] != 0)
			{
				iVar8 = func_269(unk_0x3CDF9E9E483AADE1(Local_194[3]), unk_0x3CDF9E9E483AADE1(Local_194[2]));
				Local_194.f_129 = (1f / (127f / IntToFloat(iVar8)));
			}
			else if (Local_194[1] != 0 && Local_194[0] != 0)
			{
				iVar9 = func_269(unk_0x3CDF9E9E483AADE1(Local_194[1]), unk_0x3CDF9E9E483AADE1(Local_194[0]));
				Local_194.f_129 = (1f / (127f / IntToFloat(iVar9)));
			}
			else if (Local_194[3] != 0)
			{
				Local_194.f_129 = (1f / (127f / IntToFloat(Local_194[3])));
			}
			else if (Local_194[2] != 0)
			{
				Local_194.f_129 = (1f / (127f / IntToFloat(Local_194[2])));
			}
			else if (Local_194[1] != 0)
			{
				Local_194.f_129 = (1f / (127f / IntToFloat(Local_194[1])));
			}
			else if (Local_194[0] != 0)
			{
				Local_194.f_129 = (1f / (127f / IntToFloat(Local_194[0])));
			}
			else
			{
				Local_194.f_129 = 0f;
			}
			if (iVar6 && ((Local_194[2] != 0 || Local_194[3] != 0) || (Local_194[0] != 0 || Local_194[1] != 0)))
			{
				if (Local_194[2] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_194[2])));
				}
				else if (Local_194[0] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_194[0])));
				}
				else
				{
					fVar10 = 0f;
				}
				if (Local_194[3] != 0)
				{
					fVar11 = (1f / (127f / IntToFloat(Local_194[3])));
				}
				else if (Local_194[1] != 0)
				{
					fVar11 = (1f / (127f / IntToFloat(Local_194[1])));
				}
				else
				{
					fVar11 = 0f;
				}
				Var15 = { unk_0x000D018EA42688BA(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 2) };
				fVar12 = (((fVar11 * 0.05f) * fVar7) * Local_194.f_130);
				fVar13 = -(((fVar10 * 0.05f) * fVar7) * Local_194.f_130);
				if ((fVar4 != 0f || Local_194[2] != 0) || Local_194[0] != 0)
				{
					if (Local_194[2] != 0)
					{
						fVar21 = (1f / (127f / IntToFloat(Local_194[2])));
						fVar14 = -(((fVar21 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
					else if (Local_194[0] != 0)
					{
						fVar21 = (1f / (127f / IntToFloat(Local_194[0])));
						fVar14 = -(((fVar21 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
					else
					{
						if (fVar4 > 0.1f || fVar4 < -0.1f)
						{
							if (fVar4 > 0f)
							{
								fVar21 = -1f;
							}
							else
							{
								fVar21 = 1f;
							}
						}
						if (Var15.f_1 != 0f)
						{
							if (Var15.f_1 < 2f && Var15.f_1 > 0f)
							{
								fVar21 = 0.0001f;
							}
							else if (Var15.f_1 > -2f && Var15.f_1 < 0f)
							{
								fVar21 = -0.0001f;
							}
						}
						else
						{
							fVar21 = 0f;
						}
						fVar14 = -(((fVar21 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
				}
				else
				{
					fVar14 = 0f;
				}
				Var18 = { Vector(fVar13, fVar14, fVar12) + Var15 };
				if (fVar4 != 0f)
				{
					if (Local_194[2] == 0 && Local_194[0] == 0)
					{
						if (Var18.f_1 > fVar1)
						{
							Var18.f_1 = fVar1;
						}
						else if (Var18.f_1 < -fVar1)
						{
							Var18.f_1 = -fVar1;
						}
					}
					else if (Var18.f_1 > fVar1)
					{
						Var18.f_1 = fVar1;
					}
					else if (Var18.f_1 < -fVar1)
					{
						Var18.f_1 = -fVar1;
					}
				}
				if (Var18.f_0 > fVar2)
				{
					Var18.f_0 = fVar2;
				}
				else if (Var18.f_0 < -fVar2)
				{
					Var18.f_0 = -fVar2;
				}
				if (!BitTest(Local_194.f_5, 12))
				{
					unk_0xECDAB41968FF21A8(&(Local_194.f_5), 12);
				}
				unk_0x464B5B0F22497FC5(unk_0xDCE61FCD9D7F205E(Local_194.f_159), Vector(0f, 0f, 0f) + Vector(Var18.f_2, Var18.f_1, Var18.f_0), 2, 1);
			}
			else if (iVar6 && (((Local_194[2] != 0 || Local_194[3] != 0) || Local_194[0] != 0) || Local_194[1] != 0))
			{
				Var22 = { unk_0x000D018EA42688BA(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 2) };
				if (func_252())
				{
					if (func_251())
					{
						fVar26 = -1f;
					}
				}
				else
				{
					if (Local_194[2] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_194[2])));
					}
					else if (Local_194[0] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_194[0])));
					}
					else
					{
						fVar25 = 0f;
					}
					if (Local_194[3] != 0)
					{
						fVar26 = (1f / (127f / IntToFloat(Local_194[3])));
					}
					else if (Local_194[1] != 0)
					{
						fVar26 = (1f / (127f / IntToFloat(Local_194[1])));
					}
					else
					{
						fVar26 = 0f;
					}
				}
				fVar27 = -(((fVar26 * 0.05f) * fVar7) * fVar0);
				fVar28 = -(((fVar25 * 0.05f) * fVar7) * fVar0);
				if (fVar4 != 0f)
				{
					if (Local_194[2] == 0 && Local_194[0] == 0)
					{
						if (fVar4 > 1f || fVar4 < -1f)
						{
							if (fVar4 > 0f)
							{
								fVar25 = -1f;
							}
							else
							{
								fVar25 = 1f;
							}
						}
						if (Var22.f_1 < 2f && Var22.f_1 > 0f)
						{
							fVar25 = 0.0001f;
						}
						else if (Var22.f_1 > -2f && Var22.f_1 < 0f)
						{
							fVar25 = -0.0001f;
						}
						fVar28 = -(((fVar25 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
				}
				Var29 = { Vector(0f, fVar28, fVar27) + Var22 };
				if (Var29.f_1 > fVar1)
				{
					Var29.f_1 = fVar1;
				}
				else if (Var29.f_1 < -fVar1)
				{
					Var29.f_1 = -fVar1;
				}
				if (Var29.f_0 > fVar2)
				{
					Var29.f_0 = fVar2;
				}
				else if (Var29.f_0 < -fVar2)
				{
					Var29.f_0 = -fVar2;
				}
				if (BitTest(Local_194.f_5, 12))
				{
					unk_0x061B1200C95204CB(&(Local_194.f_5), 12);
				}
				unk_0x464B5B0F22497FC5(unk_0xDCE61FCD9D7F205E(Local_194.f_159), Vector(0f, 0f, 0f) + Vector(Var22.f_2, Var29.f_1, Var29.f_0), 2, 1);
			}
			else
			{
				Var32 = { unk_0x000D018EA42688BA(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 2) };
				if (fVar4 != 0f || fVar5 != 0f)
				{
					if (Var32.f_1 != 0f)
					{
						if (Var32.f_1 < 0f)
						{
							fVar35 = -1f;
						}
						else
						{
							fVar35 = 1f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					if (fVar5 != 0f)
					{
						if (Var32.f_0 < 0f)
						{
							fVar36 = -1f;
						}
						else
						{
							fVar36 = 1f;
						}
					}
					else
					{
						fVar36 = 0f;
					}
					if (Var32.f_1 != 0f)
					{
						if (Var32.f_1 < 2f && Var32.f_1 > 0f)
						{
							fVar35 = 0.0001f;
						}
						else if (Var32.f_1 > -2f && Var32.f_1 < 0f)
						{
							fVar35 = -0.0001f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					if (Var32.f_0 != 0f)
					{
						if (Var32.f_0 < 2f && Var32.f_0 > 0f)
						{
							fVar36 = 0.0001f;
						}
						else if (Var32.f_0 > -2f && Var32.f_0 < 0f)
						{
							fVar36 = -0.0001f;
						}
					}
					else
					{
						fVar36 = 0f;
					}
					uVar37 = func_250(-(((fVar36 * 0.05f) * fVar7) * (fVar0 - 25f)));
					uVar38 = func_250(-(((fVar35 * 0.05f) * fVar7) * (fVar0 - 25f)));
					Var39 = { Vector(0f, uVar38, uVar37) + Var32 };
					if (BitTest(Local_194.f_5, 12))
					{
						Var39.f_0 = Var32.f_0;
					}
					uVar42 = Var32.f_2;
					if (func_16())
					{
						if (!func_130())
						{
							uVar42 = Local_194.f_116;
							Var39.f_1 = 0f;
						}
					}
					unk_0x464B5B0F22497FC5(unk_0xDCE61FCD9D7F205E(Local_194.f_159), Vector(0f, 0f, 0f) + Vector(uVar42, Var39.f_1, Var39.f_0), 2, 1);
					if (func_16())
					{
						if (unk_0x2655A8EC638E4FD1(fVar4) < 2.5f && unk_0x2655A8EC638E4FD1(fVar5) < 2.5f)
						{
							func_268(1);
						}
					}
				}
				else if (func_16())
				{
					func_268(1);
				}
			}
		}
		else
		{
			unk_0xF05A5F7FFA0C5E2D(Local_194.f_159);
		}
	}
}

void func_268(bool bParam0)
{
	if (!bParam0)
	{
		if (BitTest(Local_194.f_6, 6))
		{
			unk_0x061B1200C95204CB(&(Local_194.f_6), 6);
		}
	}
	else if (!BitTest(Local_194.f_6, 6))
	{
		unk_0xECDAB41968FF21A8(&(Local_194.f_6), 6);
	}
}

int func_269(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_270()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (func_35())
	{
		return;
	}
	if (func_247())
	{
		if (unk_0x5E6D8811A0BD0954(Local_194.f_159))
		{
			if (!unk_0xCE4AAA035282336C(Local_194.f_171))
			{
				Local_194.f_171 = func_285(Local_194.f_150, 0);
				unk_0xEA4639F4444B7003(Local_194.f_171, func_284());
				if (func_30() && !unk_0xCE4AAA035282336C(Local_194.f_172))
				{
					Local_194.f_172 = func_281(unk_0xC1A5EC5C986B98AD(), 0, 0);
					unk_0xEA4639F4444B7003(Local_194.f_172, 6);
					unk_0xA4B6A532E7DDE178(Local_194.f_172, 0);
					unk_0x225EB85DBC38E707(Local_194.f_172, 0.7f);
					unk_0xC2E0B90856D55E49(Local_194.f_172, (13 - 1));
					if (func_278(unk_0x93E99A2DBCBA9CFA()) != -1)
					{
						func_274(&(Local_194.f_172), func_276(func_278(unk_0x93E99A2DBCBA9CFA())));
					}
					else
					{
						func_274(&(Local_194.f_172), func_273());
					}
					unk_0xDE9F0903D46A94EF(Local_194.f_172, 1);
				}
			}
			else
			{
				fVar0 = func_272(Local_194.f_124);
				fVar1 = Local_194.f_150;
				fVar2 = Local_194.f_150.f_1;
				unk_0x3C1C0549FDA2CF24(Local_194.f_171, 2);
				unk_0x385CFFE850A96C08(Local_194.f_171, Local_194.f_150);
				if (((func_24() || func_38()) && unk_0xFEE065E56A9BEF3F()) && unk_0x1758F8A8511510AB())
				{
					if (!unk_0xCF04843019164ADB())
					{
						fVar1 = -323.1f;
						fVar2 = -1970.9f;
						unk_0x385CFFE850A96C08(Local_194.f_171, fVar1, fVar2, 0f);
						unk_0x8F78EA97D41803A8(fVar1, fVar2);
						unk_0xA0AD9AAE6AF2D705();
					}
				}
				unk_0x1EC8D37647B7D811(fVar1, fVar2);
				unk_0x8ACBB35F79434663(Local_194.f_171, unk_0xF2DB717A73826179(fVar0));
				unk_0x225EB85DBC38E707(Local_194.f_171, 1f);
				unk_0xC2E0B90856D55E49(Local_194.f_171, 9);
				unk_0x64B30D8D659E156C(unk_0xF2DB717A73826179(fVar0));
				if (unk_0xCE4AAA035282336C(Local_194.f_172))
				{
					unk_0x8ACBB35F79434663(Local_194.f_172, func_271(unk_0xC1A5EC5C986B98AD()));
				}
			}
		}
	}
}

int func_271(int iParam0)
{
	float fVar0;
	
	fVar0 = unk_0x3336DC05DA6277BD(iParam0);
	return unk_0xF2DB717A73826179(fVar0);
}

float func_272(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

int func_273()
{
	return 10;
}

void func_274(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xCE4AAA035282336C(*uParam0))
	{
		iVar0 = func_275(iParam1);
		unk_0x1886753DA39F38F8(*uParam0, iVar0);
	}
}

int func_275(int iParam0)
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

int func_276(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_277(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_277(int iParam0)
{
	return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_278(int iParam0)
{
	if (!iParam0 == func_12())
	{
		if (func_279(iParam0, 1))
		{
			return Global_2648605.f_818.f_11[func_210(iParam0)];
		}
	}
	return -1;
}

bool func_279(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_280(iParam0))
		{
			return 0;
		}
	}
	return Global_1894573[iParam0 /*608*/].f_10 != func_12();
}

int func_280(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_12())
		{
			return Global_1894573[iParam0 /*608*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_281(int iParam0, bool bParam1, bool bParam2)
{
	return func_282(iParam0, !bParam1, bParam2);
}

int func_282(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7DE17ACDD8BA2642(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x53B496178AE44636(iParam0);
	if (unk_0xA6B591D40DE982B5(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_283(unk_0xA26A9A07F761D8F8(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x3BCF1F6A3573A1DF(uVar0, bParam1);
		}
		else
		{
			unk_0x1886753DA39F38F8(uVar0, 2);
		}
	}
	else if (unk_0x71904BD37B848CAF(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_283(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
		unk_0x3BCF1F6A3573A1DF(uVar0, bParam1);
	}
	else if (unk_0x4E7A9806173C3AD1(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_283(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_283(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_284()
{
	if (func_16())
	{
		return 548;
	}
	return 627;
}

var func_285(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x7F0C74F83813841D(Param0);
	unk_0x225EB85DBC38E707(uVar0, func_283(unk_0xA26A9A07F761D8F8(), 1f, 1f));
	unk_0xBD91E7D4B770F97E(uVar0, iParam3);
	return uVar0;
}

void func_286()
{
	if (func_35())
	{
		if (Local_194.f_150.f_2 >= (func_109() - 20f))
		{
			if (unk_0x209C5E3492025E4B(Local_194.f_37))
			{
				Local_194.f_37 = unk_0x9F2C1BA4F2BF5CF8();
				unk_0x531D638530A8DB97(Local_194.f_37, "Out_Of_Bounds_Alarm_Loop", Local_194.f_157, 1);
			}
		}
		else if (!unk_0x209C5E3492025E4B(Local_194.f_37))
		{
			unk_0xA13B5B0EF7402391(Local_194.f_37);
			unk_0x8A1B9F78F1F46A12(Local_194.f_37);
			Local_194.f_37 = -1;
		}
	}
}

void func_287()
{
	if (((func_38() || func_138()) || func_30()) || func_160())
	{
		switch (Local_194.f_242)
		{
			case 0:
				func_310();
				break;
			
			case 1:
				func_297();
				break;
			
			case 2:
				func_295();
				break;
			
			case 3:
				func_288();
				break;
			}
	}
}

void func_288()
{
	func_72(1);
	if (!func_294())
	{
		unk_0x78DD793477D04C42(500);
	}
	func_292(0);
	func_290(0);
	func_289(0);
}

void func_289(int iParam0)
{
	if (Local_194.f_242 != iParam0)
	{
		Local_194.f_242 = iParam0;
	}
}

void func_290(bool bParam0)
{
	if (bParam0)
	{
		if (!func_291())
		{
			unk_0xECDAB41968FF21A8(&Global_1962996, 17);
		}
	}
	else if (func_291())
	{
		unk_0x061B1200C95204CB(&Global_1962996, 17);
	}
}

bool func_291()
{
	return BitTest(Global_1962996, 17);
}

void func_292(bool bParam0)
{
	if (bParam0)
	{
		if (!func_293())
		{
			unk_0xECDAB41968FF21A8(&Global_1962996, 18);
		}
	}
	else if (func_293())
	{
		unk_0x061B1200C95204CB(&Global_1962996, 18);
	}
}

bool func_293()
{
	return BitTest(Global_1962996, 18);
}

bool func_294()
{
	return Global_1950108.f_528;
}

void func_295()
{
	if (func_293() || unk_0xFEE065E56A9BEF3F())
	{
		func_72(1);
		func_296(0);
		unk_0x061B1200C95204CB(&(Local_194.f_5), 16);
		func_289(3);
	}
}

void func_296(bool bParam0)
{
	if (bParam0)
	{
		if (!func_77())
		{
			unk_0xECDAB41968FF21A8(&Global_1962996, 19);
		}
	}
	else if (func_77())
	{
		unk_0x061B1200C95204CB(&Global_1962996, 19);
	}
}

void func_297()
{
	if (unk_0x72474BA05A104E1E())
	{
		if (func_22(&(Local_194.f_267), 3000, 0))
		{
			if (func_309())
			{
				if (BitTest(Global_4542297, 2) || func_22(&(Local_194.f_271), 8000, 0))
				{
					if (!BitTest(Global_4542297, 2))
					{
					}
					unk_0x78DD793477D04C42(500);
					func_298(unk_0x93E99A2DBCBA9CFA(), 1, 0, 0);
					func_21(&(Local_194.f_267));
					func_21(&(Local_194.f_271));
					func_289(2);
				}
			}
			else if (func_22(&(Local_194.f_271), 15000, 0))
			{
				func_21(&(Local_194.f_267));
				func_21(&(Local_194.f_271));
				func_72(1);
				func_296(0);
				unk_0x061B1200C95204CB(&(Local_194.f_5), 16);
				func_289(3);
			}
		}
	}
}

void func_298(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	var uVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x9AA69AA7F99F66A2())
		{
			unk_0xD111D6644D1D5BD5(0);
		}
	}
	if (func_308())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0xA26A9A07F761D8F8())
	{
		uVar0 = iParam2;
		unk_0xE333240A90F2FF3C(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0x1758F8A8511510AB())
		{
			bVar1 = false;
		}
		if (!func_306())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0xE6DEE82DB0922DF0(iParam0) && (unk_0x48DC6A21D1CAD89C(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x055111B11E6624FD(unk_0xF2CFBB1105511E1A(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0xF2CFBB1105511E1A(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0xA26A9A07F761D8F8())
				{
					unk_0x0D78C94B1B789F7C(1);
				}
				else if (bVar14 || (!func_116(unk_0x93E99A2DBCBA9CFA(), 0) && !func_266()))
				{
					unk_0x724FFAED1C56CE2B(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0xA26A9A07F761D8F8() && !bVar19)
					{
						unk_0x0D78C94B1B789F7C(0);
					}
					Global_2657589[iParam0 /*466*/].f_254 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_303(0, 0, 0);
					if (bVar25)
					{
						unk_0x3EF548873C55CA64();
					}
				}
				if (!func_302(iVar27) && !unk_0x24405041A9F1A910(iVar27))
				{
					if (!bVar22)
					{
						unk_0xDDE449983CE7572E(iVar27, true, 0);
					}
				}
				if (!unk_0xDC116D955A63BDBE(iVar27))
				{
					if (!bVar21)
					{
						unk_0x2718E9CC165A99F6(iVar27, false);
					}
					unk_0xAD02BD8A749B79F9(iVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x2718E9CC165A99F6(iVar27, false);
				}
				unk_0xD14067404D35AAE7(iVar27, true);
				unk_0xA7225B88CE344621(iParam0, 0);
				unk_0xD99DA01241D40C5D(iParam0, 0);
				if (unk_0x1951CE8AED052DA4(iVar27) && unk_0x655790C883F82CEB(iVar27))
				{
					unk_0xC7A494C74ED33C50(iVar27);
				}
				unk_0xAC2C285C82A9244C(iVar27, 1);
				if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()) == 0)
				{
					func_301();
					func_300();
				}
				if (unk_0xCB964814D9915DE0())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x58A962BEF2DDE1DF())
				{
				}
				Global_2657589[iParam0 /*466*/].f_255 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2635559.f_2681)
				{
					Global_2635559.f_2681 = 0;
				}
			}
			else
			{
				if (!func_302(iVar27) && !unk_0x24405041A9F1A910(iVar27))
				{
					if (!bVar22)
					{
						unk_0xDDE449983CE7572E(iVar27, !bVar15, 0);
					}
					if (!unk_0xDC116D955A63BDBE(iVar27))
					{
						if (!bVar21)
						{
							unk_0x2718E9CC165A99F6(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0xAD02BD8A749B79F9(iVar27, 1);
						}
					}
					if (func_299(Global_4718592.f_166301))
					{
						unk_0x2718E9CC165A99F6(iVar27, true);
					}
				}
				if (Global_1575035)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0xA7225B88CE344621(iParam0, 0);
				}
				else
				{
					unk_0xA7225B88CE344621(iParam0, 1);
				}
				unk_0xD14067404D35AAE7(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x53E0F2012E168A73(iVar27) && !unk_0x3C3D6D026CF7F51B(iVar27, 0))
					{
						unk_0x35DD50D05C962B6A(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0xE333240A90F2FF3C(iParam0, bParam1, iVar28);
		}
	}
}

bool func_299(int iParam0)
{
	return iParam0 == 17;
}

void func_300()
{
	struct<3> Var0;
	
	Global_2672505.f_1023 = 0;
	Global_2672505.f_1024 = 0;
	Global_2672505.f_1025 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672505.f_1030 = -1;
	Global_2672505.f_1031 = 0;
	Global_2635559.f_2692 = { Var0 };
}

void func_301()
{
	Global_2635559.f_702 = 0;
	Global_2635559.f_2735 = 0;
	Global_2635559.f_515 = 0;
	Global_2635559.f_606 = 0;
	Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_217 = 0;
	Global_2635559.f_2690 = 0;
}

int func_302(int iParam0)
{
	int iVar0;
	
	if (unk_0x3C3D6D026CF7F51B(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xF5F493B789EA063E(iParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_303(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x055111B11E6624FD(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0x7DE17ACDD8BA2642(iParam1))
		{
			if (unk_0x60A06DE259634304(iParam1))
			{
				if (!unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), unk_0xB850F932D03EF34D(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_305();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x84365510DF670D46(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xECDAB41968FF21A8(&(Global_2621446.f_67), 1);
			}
		}
		if (func_116(unk_0x93E99A2DBCBA9CFA(), 0))
		{
			unk_0xBD35A36DC2D7FB43(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x7C5666BA9400B9BF(iParam0, iParam1);
		}
		unk_0xC05C32F03C89FD59(iParam0, iParam1);
		func_304(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_304(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD19BD90E0B76FB05(iVar0, iParam1, 1);
	}
}

void func_305()
{
	int iVar0;
	
	if (!unk_0x8253CEEA17ED481B())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0x80A3F4E694565F6A(iVar0);
				iVar0++;
			}
			unk_0xECDAB41968FF21A8(&(Global_2621446.f_67), 2);
			unk_0xECDAB41968FF21A8(&(Global_2621446.f_67), 0);
		}
	}
}

int func_306()
{
	if (func_307() == 0)
	{
		return 1;
	}
	return 0;
}

int func_307()
{
	return Global_1574632.f_18;
}

int func_308()
{
	if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_861, 2) && !Global_2684799.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_309()
{
	if (unk_0x24B651D85CCE5EB4(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_310()
{
	if (func_329())
	{
		if (unk_0x6BD2D66249562506(2, 201) || unk_0xA2C9DE6085F5645B(2, 201))
		{
			if (!func_309())
			{
				if (unk_0x35DF833D93BCC488())
				{
					func_296(1);
					func_127(-1);
					func_298(unk_0x93E99A2DBCBA9CFA(), 0, 512, 0);
					unk_0x6D5ACBBD4CE34249(500);
					func_327(1, -1);
					func_311(3, 1, 1, 0);
					func_23(&(Local_194.f_267), 0, 0);
					func_23(&(Local_194.f_271), 0, 0);
					func_289(1);
				}
			}
		}
	}
}

int func_311(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_78558)
	{
		if (((iParam0 != 17 && iParam0 != 3) && iParam0 != 23) && iParam0 != 1)
		{
			return 0;
		}
		if (!BitTest(Global_4542297, 14))
		{
			if (iParam0 == 17)
			{
				unk_0xECDAB41968FF21A8(&Global_4542297, 14);
				unk_0xECDAB41968FF21A8(&Global_4542297, 16);
			}
			if (iParam0 == 3)
			{
				unk_0xECDAB41968FF21A8(&Global_4542297, 14);
				unk_0xECDAB41968FF21A8(&Global_4542297, 15);
			}
			if (iParam0 == 23)
			{
				unk_0xECDAB41968FF21A8(&Global_4542297, 14);
				unk_0xECDAB41968FF21A8(&Global_4542297, 27);
			}
			if (iParam0 == 1)
			{
				unk_0xECDAB41968FF21A8(&Global_4542297, 14);
				unk_0xECDAB41968FF21A8(&Global_4542297, 29);
			}
		}
		if (Global_8260[iParam0 /*15*/].f_9 == 0)
		{
			func_323();
		}
		if (unk_0x24B651D85CCE5EB4(Global_8260[iParam0 /*15*/].f_9) > 0)
		{
			unk_0x061B1200C95204CB(&Global_4542297, 14);
			unk_0x061B1200C95204CB(&Global_4542297, 16);
			unk_0x061B1200C95204CB(&Global_4542297, 15);
			unk_0x061B1200C95204CB(&Global_4542297, 27);
			unk_0x061B1200C95204CB(&Global_4542297, 29);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_316();
	if (Global_20383.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_76(0) == 1)
		{
			return 0;
		}
	}
	if (Global_20349 == 1)
	{
		return 0;
	}
	if (Global_20383.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!unk_0xB8CEC43FB7EF2D92(Global_20380))
	{
		if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_20383.f_1 < 4)
			{
				func_315("cellphone_flashhand");
				if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) == 0)
				{
					Global_20380 = unk_0xE81651AD79516E48("cellphone_flashhand", 1424);
				}
				unk_0x037A80676B8FF0F5("cellphone_flashhand");
			}
		}
	}
	while (!Global_20365)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_323();
	func_312();
	if (unk_0x24B651D85CCE5EB4(Global_8260[iParam0 /*15*/].f_9) == 0)
	{
		Global_8859 = 0;
		Global_20383.f_1 = 7;
		func_315(&(Global_8260[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (unk_0x24B651D85CCE5EB4(Global_8260[iParam0 /*15*/].f_9) == 0)
			{
				Global_20381 = unk_0xE81651AD79516E48(&(Global_8260[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (unk_0x24B651D85CCE5EB4(Global_8260[iParam0 /*15*/].f_9) == 0)
		{
			Global_20381 = unk_0xE81651AD79516E48(&(Global_8260[iParam0 /*15*/].f_5), 2552);
		}
		unk_0x037A80676B8FF0F5(&(Global_8260[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_312()
{
	if (Global_78558 == 0)
	{
		Global_8260[14 /*15*/].f_4 = -99;
		Global_8260[4 /*15*/].f_4 = -99;
		if (Global_2694519)
		{
			if (func_314(14))
			{
				func_313(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_313(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_313(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_313(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_313(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_8260[iParam0 /*15*/]), sParam1, 16);
	Global_8260[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_8260[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8260[iParam0 /*15*/].f_9 = unk_0x14580F20CBCE4FA9(sParam3);
	Global_8260[iParam0 /*15*/].f_10 = iParam4;
	Global_8260[iParam0 /*15*/].f_11 = iParam5;
	Global_8260[iParam0 /*15*/].f_12 = iParam6;
	Global_8260[iParam0 /*15*/].f_13 = iParam7;
	Global_8260[iParam0 /*15*/].f_14 = iParam8;
	if (Global_8260[iParam0 /*15*/].f_12 == 0)
	{
		Global_8260[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_8260[iParam0 /*15*/].f_13 == 0)
	{
		Global_8260[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_8260[iParam0 /*15*/].f_14 == 0)
	{
		Global_8260[iParam0 /*15*/].f_14 = 0;
	}
}

bool func_314(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_315(char* sParam0)
{
	unk_0x3EC562D93709C894(sParam0);
	while (!unk_0x6CAF14BE58B4BFF8(sParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_316()
{
	if (func_314(14))
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[0 /*29*/])
			{
				Global_20383 = 0;
			}
			else if (unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[1 /*29*/])
			{
				Global_20383 = 1;
			}
			else if (unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[2 /*29*/])
			{
				Global_20383 = 2;
			}
			else
			{
				Global_20383 = 0;
			}
		}
	}
	else
	{
		Global_20383 = func_317();
		if (Global_20383 == 145)
		{
			Global_20383 = 3;
		}
		if (Global_78558)
		{
			Global_20383 = 3;
		}
		if (Global_20383 > 3)
		{
			Global_20383 = 3;
		}
	}
}

var func_317()
{
	func_318();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_318()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_321(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_320(unk_0xC1A5EC5C986B98AD());
			if (func_319(iVar0) && (!func_314(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_319(Global_113648.f_2365.f_539.f_4321))
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

bool func_319(int iParam0)
{
	return iParam0 < 3;
}

int func_320(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_321(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_321(int iParam0)
{
	if (func_319(iParam0))
	{
		return func_322(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_322(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_323()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_8260[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_78558 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_326(iVar2, Global_20383) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_313(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_313(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_313(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_43257 == 15 && func_325(0) == 0) && Global_8258 == 0)
		{
			func_313(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_20587 = 0;
			Global_8259 = 255;
		}
		else
		{
			func_313(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_20587 = 1;
			Global_8259 = 42;
		}
		if (iVar1 == 1)
		{
			func_313(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_313(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_313(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_313(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_313(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_113648.f_14053.f_89 == 1)
		{
			func_313(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_113648.f_14053.f_88 == 1)
		{
			func_313(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_313(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_313(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_313(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_313(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_313(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_313(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_313(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_313(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_313(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_313(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_313(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_313(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_313(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_313(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_313(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_313(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_313(21, "CELL_37", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (BitTest(Global_4542297, 4) == 1)
		{
			func_313(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_313(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_313(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_313(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_313(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_313(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_313(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_313(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_313(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_313(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_313(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_313(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_313(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_313(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_313(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_313(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_313(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!BitTest(Global_4542297, 4) == 1)
		{
			if (Global_1836102)
			{
				func_313(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4542297, 20) == 1)
			{
				func_313(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4542297, 22) == 1)
			{
				func_313(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4542297, 26) == 1)
			{
				if (func_324())
				{
					func_313(23, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
				}
				else
				{
					func_313(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
				}
			}
		}
		if ((((BitTest(Global_4542297, 4) == 0 && Global_1836102 == 0) && BitTest(Global_4542297, 20) == 0) && BitTest(Global_4542297, 22) == 0) && BitTest(Global_4542297, 26) == 0)
		{
			if (func_324())
			{
				func_313(23, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
			}
			else
			{
				func_313(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
			}
		}
	}
}

int func_324()
{
	if (Global_78558)
	{
		if (Global_1836499 || Global_1836500 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_325(bool bParam0)
{
	if (!bParam0 && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

int func_326(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2028[iParam0 /*29*/].f_19[iParam1];
}

void func_327(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_124(&iVar0, 0, iParam1))
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
		func_328(&(Global_23270.f_6103[iVar0 /*10*/]));
		Global_23270.f_6164[iVar0] = 0;
	}
	else
	{
		Global_23270.f_6164[iVar0] = 0;
	}
}

void func_328(var uParam0)
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

int func_329()
{
	if (func_77())
	{
		return 0;
	}
	if (unk_0xFEE065E56A9BEF3F())
	{
		return 0;
	}
	if ((func_169(0) || func_168()) || unk_0xC8FA7761999E73B4())
	{
		func_21(&(Local_194.f_275));
		func_23(&(Local_194.f_275), 0, 0);
		unk_0x061B1200C95204CB(&(Local_194.f_5), 16);
		func_99();
		return 0;
	}
	else if (func_25(&(Local_194.f_275)))
	{
		if (!func_22(&(Local_194.f_275), 2000, 0))
		{
			return 0;
		}
		else
		{
			unk_0x061B1200C95204CB(&(Local_194.f_5), 16);
			func_21(&(Local_194.f_275));
		}
	}
	if (func_164(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	return 1;
}

void func_330()
{
	if (func_331())
	{
		if (unk_0x5E6D8811A0BD0954(Local_194.f_159) && !unk_0x055111B11E6624FD(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0))
		{
			if (unk_0xFE2AB315FD8C7A6F(Local_194.f_159))
			{
				if (!BitTest(Local_194.f_5, 25))
				{
					unk_0x2718E9CC165A99F6(unk_0xDCE61FCD9D7F205E(Local_194.f_159), true);
					unk_0xECDAB41968FF21A8(&(Local_194.f_5), 25);
				}
			}
			else
			{
				unk_0xF05A5F7FFA0C5E2D(Local_194.f_159);
			}
		}
	}
	else if (BitTest(Local_194.f_5, 25))
	{
		if (unk_0x5E6D8811A0BD0954(Local_194.f_159) && !unk_0x055111B11E6624FD(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0))
		{
			if (unk_0xFE2AB315FD8C7A6F(Local_194.f_159))
			{
				unk_0x2718E9CC165A99F6(unk_0xDCE61FCD9D7F205E(Local_194.f_159), false);
				unk_0x061B1200C95204CB(&(Local_194.f_5), 25);
			}
			else
			{
				unk_0xF05A5F7FFA0C5E2D(Local_194.f_159);
			}
		}
	}
}

int func_331()
{
	if (func_164(unk_0x93E99A2DBCBA9CFA()))
	{
		if (BitTest(Global_2791783, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_332()
{
	int iVar0;
	
	if (func_83())
	{
		Global_1962996.f_1 = 0;
	}
	if (func_339() || func_193())
	{
		if (!func_25(&(Local_194.f_247)))
		{
			func_23(&(Local_194.f_247), 0, 0);
		}
		else if (func_22(&(Local_194.f_247), Global_1962996.f_1, 0) || func_193())
		{
			func_21(&(Local_194.f_245));
			if (func_83())
			{
				if (func_17(unk_0xC1A5EC5C986B98AD()))
				{
					unk_0x8A9729B4F41F00E9(unk_0xC1A5EC5C986B98AD(), func_338(), func_337(), func_336(), 1, 0, 1065353216);
				}
				else
				{
					unk_0x06791F908899E862(func_338(), func_337(), func_336(), 1, 0, 1065353216, 0);
				}
				unk_0xCA9F34C06A0529CE(0, 300, unk_0xF2DB717A73826179((200f * Local_194.f_131)));
				unk_0xC325399A972D4359(Local_194.f_159, 1);
				unk_0x3EF548873C55CA64();
				iVar0 = unk_0xDCE61FCD9D7F205E(Local_194.f_159);
				unk_0xEF078F1FEE785D3E(&iVar0);
				unk_0xECDAB41968FF21A8(&(Local_194.f_6), 2);
			}
			if (func_31())
			{
				func_335(1);
				if (Local_194.f_26 == 0)
				{
					func_333(6, 0, 0);
				}
				else
				{
					func_333(5, 0, 0);
				}
			}
			func_384(1);
			func_383(5);
		}
	}
	else if (func_25(&(Local_194.f_247)))
	{
		func_205(&(Local_194.f_247), 0, 0);
	}
}

void func_333(int iParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	float fVar17;
	float fVar18;
	
	StringCopy(&cVar0, func_334(iParam0), 64);
	iVar16 = 5;
	if (bParam1)
	{
		iVar16 = 69;
	}
	fVar17 = 8f;
	fVar18 = -8f;
	Local_194.f_79 = unk_0x62E15BEBEB67DC6D(Local_194.f_153, 0f, 0f, Local_194.f_118, 2, iParam2, bParam1, 1065353216, 0, 1065353216);
	unk_0xA499ADFC7EB2E4DB(unk_0xC1A5EC5C986B98AD(), Local_194.f_79, Local_194.f_158, &cVar0, fVar17, fVar18, iVar16, 0, 1148846080, 0);
	if (iParam0 == 0)
	{
		if (unk_0x5E6D8811A0BD0954(Local_194.f_159))
		{
			StringConCat(&cVar0, "_DRONE", 64);
			unk_0x1312AFEAECF42BFD(unk_0x177F7E959D2D410B(Local_194.f_159), Local_194.f_79, Local_194.f_158, &cVar0, fVar17, fVar18, 8);
		}
	}
	StringCopy(&cVar0, func_334(iParam0), 64);
	StringConCat(&cVar0, "_PHONE", 64);
	if (unk_0x5E6D8811A0BD0954(Local_194.f_160))
	{
		unk_0xB07A1B0E812C8E61(unk_0x177F7E959D2D410B(Local_194.f_160), &cVar0, Local_194.f_158, fVar17, bParam1, iParam2, 0, 0f, 0);
		unk_0x219B35BBE9DF373A(unk_0x177F7E959D2D410B(Local_194.f_160));
	}
	unk_0x16410571CFB5ED71(Local_194.f_79);
}

char* func_334(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ENTER";
		
		case 1:
			return "BASE";
		
		case 2:
			return "USE_01";
		
		case 3:
			return "USE_02";
		
		case 4:
			return "USE_03";
		
		case 5:
			return "FAIL";
		
		case 6:
			return "EXIT";
		
		default:
	}
	return "";
}

void func_335(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x7E80728A2E77D8E8(iVar0);
	if (unk_0x411B750250543BD0(iVar0))
	{
		unk_0x3866645EE42F5E80(iVar0);
		unk_0x5A691093FF311F77(iVar0);
		iVar0 = -1;
	}
	else if (bParam0)
	{
		if (func_17(unk_0xC1A5EC5C986B98AD()))
		{
			unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
		}
	}
}

float func_336()
{
	if (func_16())
	{
		return 1f;
	}
	return 0.5f;
}

int func_337()
{
	if (func_16())
	{
		return 81;
	}
	return 72;
}

Vector3 func_338()
{
	if (func_16())
	{
		return unk_0x103F436394008500(Local_194.f_169);
	}
	return Local_194.f_150;
}

int func_339()
{
	if ((unk_0x5E6D8811A0BD0954(Local_194.f_159) && unk_0x055111B11E6624FD(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0)) && !BitTest(Local_194.f_5, 2))
	{
		return 1;
	}
	if (Local_194.f_12 == 2)
	{
		Local_194.f_26 = 1;
		return 1;
	}
	if (BitTest(Local_194.f_5, 1))
	{
		return 1;
	}
	if (func_347())
	{
		Local_194.f_26 = 5;
		return 1;
	}
	if (func_138() && func_341())
	{
		Local_194.f_26 = 5;
		return 1;
	}
	if (func_31() || func_16())
	{
		if (func_341())
		{
			Local_194.f_26 = 5;
			return 1;
		}
	}
	if (BitTest(Local_194.f_5, 2))
	{
		Local_194.f_26 = 4;
		return 1;
	}
	if (func_177())
	{
		if (!func_25(&(Local_194.f_255)))
		{
			func_23(&(Local_194.f_255), 0, 0);
		}
		else if (func_22(&(Local_194.f_255), 3000, 0))
		{
			Local_194.f_26 = 0;
			return 1;
		}
	}
	if (BitTest(Local_194.f_5, 7))
	{
		Local_194.f_26 = 0;
		return 1;
	}
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159))
	{
		if (unk_0x1589BC95A4C50F21(unk_0xDCE61FCD9D7F205E(Local_194.f_159)) || func_202(unk_0x177F7E959D2D410B(Local_194.f_159), 0))
		{
			if (BitTest(Local_194.f_5, 29))
			{
				Local_194.f_26 = 3;
				return 1;
			}
		}
	}
	if (!func_138() && !func_340())
	{
		if (Local_194.f_150.f_2 >= func_109())
		{
			Local_194.f_26 = 5;
			return 1;
		}
	}
	return 0;
}

bool func_340()
{
	return BitTest(Global_1962996.f_2, 0);
}

int func_341()
{
	struct<3> Var0;
	int iVar3;
	
	if (func_346())
	{
		return 0;
	}
	if (func_19(unk_0x93E99A2DBCBA9CFA(), 1, 1))
	{
		if (unk_0x5E6D8811A0BD0954(Local_194.f_159) && !unk_0x055111B11E6624FD(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0))
		{
			if (func_138())
			{
				if (unk_0x7DE17ACDD8BA2642(func_345()) && !unk_0x055111B11E6624FD(func_345(), 0))
				{
					Var0 = { unk_0x30BE8A934C020461(func_345(), 1) };
				}
			}
			else if (func_30())
			{
				if (!func_31())
				{
					iVar3 = func_342(Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_321.f_10);
					switch (iVar3)
					{
						case 128:
							Var0 = { -245.64f, 6210.96f, 35.94f };
							break;
						
						case 129:
							Var0 = { 1695.88f, 4783.87f, 47.02f };
							break;
						
						case 130:
							Var0 = { -115.15f, -1771.65f, 38.86f };
							break;
						
						case 131:
							Var0 = { -600.96f, 280.47f, 87.04f };
							break;
						
						case 132:
							Var0 = { -1269.72f, -304.09f, 40f };
							break;
						
						case 133:
							Var0 = { 758.46f, -814.57f, 30.3f };
							break;
					}
				}
				else
				{
					Var0 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
				}
			}
			else if (func_16())
			{
				if (func_17(func_15()))
				{
					Var0 = { unk_0x30BE8A934C020461(func_15(), 1) };
				}
			}
			else
			{
				Var0 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
			}
			if (func_17(unk_0xDCE61FCD9D7F205E(Local_194.f_159)))
			{
				Local_194.f_120 = func_155(unk_0xDCE61FCD9D7F205E(Local_194.f_159), Var0, 1);
				if (Local_194.f_120 > func_109())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_342(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_12())
	{
		iVar0 = func_344(iParam0);
		if (iVar0 != 0)
		{
			return func_343(iVar0);
		}
	}
	return -1;
}

int func_343(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 128;
		
		case 2:
			return 129;
		
		case 3:
			return 130;
		
		case 4:
			return 131;
		
		case 5:
			return 132;
		
		case 6:
			return 133;
		
		default:
	}
	return -1;
}

int func_344(int iParam0)
{
	if (iParam0 != func_12())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_428;
	}
	return 0;
}

int func_345()
{
	if (Global_1853755 != func_12())
	{
		if (!func_47(Global_1853755))
		{
			if (unk_0x7DE17ACDD8BA2642(Global_1648768))
			{
				return Global_1648768;
			}
			if (unk_0x7DE17ACDD8BA2642(Global_1968112[Global_1853755]))
			{
				return Global_1968112[Global_1853755];
			}
		}
	}
	return -1;
}

bool func_346()
{
	return BitTest(Global_1962996, 6);
}

int func_347()
{
	float fVar0;
	int iVar1;
	
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159) && !unk_0x055111B11E6624FD(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0))
	{
		iVar1 = Global_262145.f_24671;
		if (func_16())
		{
			iVar1 *= 10;
		}
		if (unk_0xDE209AFE421606C6(Local_194.f_150, &fVar0, 1, 0))
		{
			Local_194.f_121 = (Local_194.f_150.f_2 - fVar0);
			if (Local_194.f_121 > IntToFloat(iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_348()
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	
	if (!func_83())
	{
		return;
	}
	if ((unk_0x5E6D8811A0BD0954(Local_194.f_159) && !unk_0x055111B11E6624FD(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0)) && unk_0xF57C1326FD40C8A7(Local_194.f_169))
	{
		if (unk_0xFE2AB315FD8C7A6F(Local_194.f_159))
		{
			if (BitTest(Local_194.f_5, 1) || func_193())
			{
				return;
			}
			Var0 = { func_349(func_350()) };
			bVar5 = false;
			iVar6 = 1;
			iVar7 = 0;
			if (func_16())
			{
				bVar5 = true;
				iVar6 = 0;
				iVar7 = 0;
			}
			if (func_35())
			{
				if (!unk_0x42AAFCB5B7854AA9(0))
				{
					if (unk_0xB6CEF8AB884F869E(2, 208) != 0f)
					{
						iVar3 = 1;
					}
					if (unk_0xB6CEF8AB884F869E(2, 207) != 0f)
					{
						iVar4 = 1;
					}
				}
				else
				{
					if (unk_0xB6CEF8AB884F869E(2, 209) != 0f)
					{
						iVar3 = 1;
					}
					if (unk_0xB6CEF8AB884F869E(2, 210) != 0f)
					{
						iVar4 = 1;
					}
				}
			}
			if (iVar3 && !func_260(bVar5))
			{
				Local_194.f_119 = 140f;
			}
			else if (iVar4 && !func_260(bVar5))
			{
				Local_194.f_119 = 60f;
			}
			else if (!func_16())
			{
				Local_194.f_119 = 100f;
			}
			unk_0xCA9BC8284D91B406(unk_0xDCE61FCD9D7F205E(Local_194.f_159), iVar7, Var0 * Vector(-Local_194.f_119, -Local_194.f_119, -Local_194.f_119), 0, 1, iVar6, 0);
		}
		else
		{
			unk_0xF05A5F7FFA0C5E2D(Local_194.f_159);
		}
	}
}

Vector3 func_349(struct<3> Param0)
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

Vector3 func_350()
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_351(&Var0);
	return Var0;
}

void func_351(var uParam0)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = unk_0xD0FFB162F40A139C(0f);
	fVar1 = unk_0x0BADBFA3B172435F(0f);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(0f);
	fVar1 = unk_0x0BADBFA3B172435F(0f);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(0f);
	fVar1 = unk_0x0BADBFA3B172435F(0f);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

void func_352()
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	float fVar14;
	float fVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	struct<3> Var21;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	float fVar37;
	float fVar38;
	
	if (func_83())
	{
		return;
	}
	if ((unk_0x5E6D8811A0BD0954(Local_194.f_159) && !unk_0x055111B11E6624FD(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0)) && unk_0xF57C1326FD40C8A7(Local_194.f_169))
	{
		if (unk_0xFE2AB315FD8C7A6F(Local_194.f_159))
		{
			fVar0 = 0f;
			if (!func_38() && !func_24())
			{
				if (!func_252())
				{
					if (func_25(&(Local_194.f_253)))
					{
						iVar1 = Global_262145.f_24669;
						if (func_24())
						{
							iVar1 = (iVar1 / 3);
						}
						if (!func_22(&(Local_194.f_253), iVar1, 0))
						{
							iVar2 = (100 * unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Local_194.f_253)));
							Local_194.f_20 = (iVar2 / iVar1);
						}
						else
						{
							if (func_17(Local_194.f_161))
							{
								unk_0xBD02C9D4D7076ECC(Local_194.f_161, unk_0xDCE61FCD9D7F205E(Local_194.f_159), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
							}
							Local_194.f_20 = 100;
							func_21(&(Local_194.f_253));
							if (!unk_0x209C5E3492025E4B(Local_194.f_43))
							{
								unk_0xA13B5B0EF7402391(Local_194.f_43);
								unk_0x8A1B9F78F1F46A12(Local_194.f_43);
								Local_194.f_43 = -1;
							}
						}
					}
					if (!unk_0x42AAFCB5B7854AA9(0))
					{
						bVar3 = unk_0xE665ABCFC5784C35(0, 209);
					}
					else
					{
						bVar3 = unk_0xE665ABCFC5784C35(0, 203);
					}
					if ((((bVar3 && Local_194.f_20 == 100) && !func_260(0)) && !func_77()) && func_161())
					{
						fVar0 = 120f;
						if (func_24())
						{
							fVar0 = 110f;
						}
						else if (func_30())
						{
							fVar0 = 49f;
						}
						if (IntToFloat(Local_194[1]) != 0f)
						{
							func_359(1);
						}
						else
						{
							func_359(0);
						}
						unk_0x451128B7D435FBF2("RaceTurbo", 0, 0);
						func_23(&(Local_194.f_251), 0, 0);
						func_358(1);
						if (unk_0x209C5E3492025E4B(Local_194.f_42))
						{
							Local_194.f_42 = unk_0x9F2C1BA4F2BF5CF8();
							unk_0x531D638530A8DB97(Local_194.f_42, "HUD_Boost_Loop", Local_194.f_157, 1);
						}
					}
				}
				else
				{
					fVar0 = 120f;
					if (func_24())
					{
						fVar0 = 115f;
					}
					else if (func_30())
					{
						fVar0 = 49f;
					}
					if (unk_0xF57C1326FD40C8A7(Local_194.f_169))
					{
						if (!unk_0x75F9043412E1F207(Local_194.f_169))
						{
							unk_0xA490483DCDA2F37E(Local_194.f_169, "DRONE_BOOST_SHAKE", 1065353216);
							unk_0xC7B060434432D1C9(Local_194.f_169, 0.15f);
						}
					}
					if (func_25(&(Local_194.f_251)))
					{
						if (func_22(&(Local_194.f_251), Global_262145.f_24668, 0))
						{
							Local_194.f_20 = 0;
							func_359(0);
							func_358(0);
							func_21(&(Local_194.f_253));
							func_23(&(Local_194.f_253), 0, 0);
							unk_0x0969F28D2C570575(Local_194.f_169, 1);
							unk_0x7DCD3438237298B6(0);
							unk_0x29978E5D6F8BB77E("RaceTurbo");
							func_21(&(Local_194.f_251));
							if (!unk_0x209C5E3492025E4B(Local_194.f_42))
							{
								unk_0xA13B5B0EF7402391(Local_194.f_42);
								unk_0x8A1B9F78F1F46A12(Local_194.f_42);
								Local_194.f_42 = -1;
							}
							if (unk_0x209C5E3492025E4B(Local_194.f_43))
							{
								Local_194.f_43 = unk_0x9F2C1BA4F2BF5CF8();
								unk_0x531D638530A8DB97(Local_194.f_43, "HUD_Boost_Recharge_Loop", Local_194.f_157, 1);
							}
						}
						else
						{
							fVar4 = (100f / (unk_0xBBDA792448DB5A89(Global_262145.f_24668) / IntToFloat(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Local_194.f_251))));
							Local_194.f_20 = (100 - unk_0xF2DB717A73826179(fVar4));
							unk_0xCA9F34C06A0529CE(0, Global_262145.f_24668, unk_0xF2DB717A73826179((255f * Local_194.f_131)));
						}
					}
				}
			}
			Var5 = { Local_194.f_150 };
			if (BitTest(Local_194.f_5, 1) || func_193())
			{
				return;
			}
			Var8 = { func_349(func_350()) };
			Var11 = { func_349(func_357(func_350())) };
			unk_0xDE209AFE421606C6(Var5, &fVar14, 1, 0);
			if (!func_356())
			{
				if (Local_194.f_10 == 2 || (Var5.f_2 - fVar14) < 2f)
				{
					fVar15 = 24f;
					if (Local_194[1] != 0)
					{
						unk_0x8B438725D591ED78(2, 207, 1);
					}
					if (unk_0xB6CEF8AB884F869E(2, 207) != 0f || Local_194[1] != 0)
					{
						if ((Var5.f_2 - fVar14) < 0.5f || unk_0xB6CEF8AB884F869E(2, 207) != 0f)
						{
							fVar15 = 24f;
						}
						else
						{
							fVar15 = 10f;
						}
					}
					else
					{
						fVar15 = 3f;
					}
					unk_0xCA9BC8284D91B406(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0, 0f, 0f, fVar15, 0, 1, 1, 0);
				}
			}
			if (unk_0x42AAFCB5B7854AA9(0))
			{
				if (Local_194[2] >= 127)
				{
					Local_194[2] = 127;
				}
				else if (Local_194[2] <= -127)
				{
					Local_194[2] = -127;
				}
				if (Local_194[0] >= 127)
				{
					Local_194[0] = 127;
				}
				else if (Local_194[0] <= -127)
				{
					Local_194[0] = -127;
				}
			}
			if (!unk_0x42AAFCB5B7854AA9(0))
			{
				if (unk_0xB6CEF8AB884F869E(2, 208) != 0f)
				{
					iVar16 = 1;
				}
				if (unk_0xB6CEF8AB884F869E(2, 207) != 0f)
				{
					iVar17 = 1;
				}
			}
			else
			{
				if (unk_0xB6CEF8AB884F869E(2, 209) != 0f)
				{
					iVar16 = 1;
				}
				if (unk_0xB6CEF8AB884F869E(2, 210) != 0f)
				{
					iVar17 = 1;
				}
			}
			if (((iVar16 && func_355()) && !func_77()) || (func_252() && !func_251()))
			{
				fVar20 = Local_194.f_119;
				if (func_160())
				{
					fVar20 = 5f;
				}
				if (func_38() || func_24())
				{
					fVar19 = 10f;
				}
				if (func_252() && !func_251())
				{
					if (!unk_0x42AAFCB5B7854AA9(0))
					{
						fVar18 = ((fVar20 + fVar0) / (1f / unk_0xB6CEF8AB884F869E(2, 208)));
					}
					else
					{
						fVar18 = ((fVar20 + fVar0) / (1f / unk_0xB6CEF8AB884F869E(2, 209)));
					}
				}
				else if (!unk_0x42AAFCB5B7854AA9(0))
				{
					fVar18 = ((fVar20 + fVar19) / (1f / unk_0xB6CEF8AB884F869E(2, 208)));
				}
				else
				{
					fVar18 = ((fVar20 + fVar19) / (1f / unk_0xB6CEF8AB884F869E(2, 209)));
				}
				Var21 = { Var11 * Vector(fVar18, fVar18, fVar18) };
				if (Var21.f_2 > 149f)
				{
					Var21.f_2 = 149f;
				}
				unk_0xCA9BC8284D91B406(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0, Var21, 0, 1, 1, 0);
			}
			else if (((iVar17 && !func_77()) && func_355()) && !func_260(0))
			{
				if (func_38() || func_24())
				{
					fVar25 = 10f;
				}
				if (!unk_0x42AAFCB5B7854AA9(0))
				{
					fVar24 = ((Local_194.f_119 + fVar25) / (1f / unk_0xB6CEF8AB884F869E(2, 207)));
				}
				else
				{
					fVar24 = ((Local_194.f_119 + fVar25) / (1f / unk_0xB6CEF8AB884F869E(2, 210)));
				}
				unk_0xCA9BC8284D91B406(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0, Var11 * Vector(-fVar24, -fVar24, -fVar24), 0, 1, 1, 0);
			}
			if (((Local_194[1] > 0 && !func_252()) && !func_260(0)) && !func_77())
			{
				fVar28 = func_354();
				fVar26 = (Local_194.f_119 / (127f / IntToFloat(Local_194[1])));
				fVar27 = (fVar28 / (127f / IntToFloat(Local_194[1])));
				unk_0xCA9BC8284D91B406(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0, Var8 * Vector(fVar26, fVar26, fVar26), 0, 1, 1, 0);
				unk_0xCA9BC8284D91B406(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0, 0f, 0f, fVar27, 0, 1, 1, 0);
			}
			else if ((((Local_194[1] < 0 && !func_252()) && !func_260(0)) && !func_77()) || (func_252() && func_251()))
			{
				if (func_252() && func_251())
				{
					fVar31 = 50f;
					if (func_24())
					{
						fVar29 = (Local_194.f_119 / -1f);
					}
					else
					{
						fVar29 = ((Local_194.f_119 + fVar0) / -1f);
					}
					fVar30 = (fVar31 / -1f);
				}
				else
				{
					fVar31 = func_354();
					if (func_24())
					{
						fVar29 = (Local_194.f_119 / (127f / IntToFloat(Local_194[1])));
					}
					else
					{
						fVar29 = ((Local_194.f_119 + fVar0) / (127f / IntToFloat(Local_194[1])));
					}
					fVar30 = (fVar31 / (127f / IntToFloat(Local_194[1])));
				}
				if (func_24())
				{
					if (!func_251())
					{
						unk_0xCA9BC8284D91B406(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0, 0f, 0f, -fVar30, 0, 1, 1, 0);
						unk_0xCA9BC8284D91B406(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0, Var8 * Vector(fVar29, fVar29, fVar29), 0, 1, 1, 0);
					}
					else
					{
						unk_0xCA9BC8284D91B406(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0, 0f, 0f, 41f, 0, 1, 1, 0);
						unk_0xCA9BC8284D91B406(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0, 0f, -149f, 0f, 0, 1, 1, 0);
					}
				}
				else
				{
					unk_0xCA9BC8284D91B406(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0, 0f, 0f, -fVar30, 0, 1, 1, 0);
					unk_0xCA9BC8284D91B406(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0, Var8 * Vector(fVar29, fVar29, fVar29), 0, 1, 1, 0);
				}
			}
			Var32 = { func_353(Var8, Var11) };
			if ((!func_252() && !func_260(0)) && !func_77())
			{
				if (Local_194[0] > 0)
				{
					fVar35 = -(Local_194.f_119 / (127f / IntToFloat(Local_194[0])));
					fVar36 = (8f / (127f / IntToFloat(Local_194[0])));
					unk_0xCA9BC8284D91B406(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0, Var32 * Vector(fVar35, fVar35, fVar35), 0, 1, 1, 0);
					unk_0xCA9BC8284D91B406(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0, 0f, 0f, fVar36, 0, 1, 1, 0);
				}
				else if (Local_194[0] < 0)
				{
					fVar37 = -(Local_194.f_119 / (127f / IntToFloat(Local_194[0])));
					fVar38 = (8f / (127f / IntToFloat(Local_194[0])));
					unk_0xCA9BC8284D91B406(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0, Var32 * Vector(fVar37, fVar37, fVar37), 0, 1, 1, 0);
					unk_0xCA9BC8284D91B406(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0, 0f, 0f, -fVar38, 0, 1, 1, 0);
				}
			}
		}
		else
		{
			unk_0xF05A5F7FFA0C5E2D(Local_194.f_159);
		}
	}
}

Vector3 func_353(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

float func_354()
{
	if (func_24() || func_38())
	{
		return 40f;
	}
	else if (func_30())
	{
		return 30f;
	}
	else if (func_160())
	{
		return 2.5f;
	}
	return 6.4f;
}

int func_355()
{
	if (func_260(0))
	{
		return 0;
	}
	if (func_252() && !func_251())
	{
		return 0;
	}
	return 1;
}

bool func_356()
{
	return BitTest(Global_1962996, 2);
}

Vector3 func_357(struct<2> Param0, var uParam2)
{
	struct<3> Var0;
	
	Var0 = { unk_0x0BADBFA3B172435F(Param0.f_1), (-unk_0x0BADBFA3B172435F(Param0.f_0) * unk_0xD0FFB162F40A139C(Param0.f_1)), (unk_0xD0FFB162F40A139C(Param0.f_0) * unk_0xD0FFB162F40A139C(Param0.f_1)) };
	return Var0;
}

void func_358(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Local_194.f_5, 21))
		{
			unk_0xECDAB41968FF21A8(&(Local_194.f_5), 21);
		}
	}
	else if (BitTest(Local_194.f_5, 21))
	{
		unk_0x061B1200C95204CB(&(Local_194.f_5), 21);
	}
}

void func_359(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Local_194.f_5, 22))
		{
			unk_0xECDAB41968FF21A8(&(Local_194.f_5), 22);
		}
	}
	else if (BitTest(Local_194.f_5, 22))
	{
		unk_0x061B1200C95204CB(&(Local_194.f_5), 22);
	}
}

void func_360()
{
	float fVar0;
	float fVar1;
	
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159))
	{
		if (!unk_0x055111B11E6624FD(unk_0x972B1BFB16AD20B5(Local_194.f_159), 0))
		{
			if ((func_24() || func_38()) || func_35())
			{
				fVar0 = -323.1f;
				fVar1 = -1970.9f;
			}
			else
			{
				fVar0 = Local_194.f_150;
				fVar1 = Local_194.f_150.f_1;
			}
			unk_0x8F78EA97D41803A8(fVar0, fVar1);
			unk_0x744519E782746847(fVar0, fVar1, 0);
			if (!unk_0x4D3D95146FD3490D(Global_1962996.f_24) && !func_35())
			{
				if (!BitTest(Local_194.f_5, 8))
				{
					unk_0xA0AD9AAE6AF2D705();
				}
				unk_0x36932F704509CA4F();
			}
		}
	}
}

void func_361()
{
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159))
	{
		if (unk_0x209C5E3492025E4B(Local_194.f_41) && Local_194.f_41 == -1)
		{
			Local_194.f_41 = unk_0x9F2C1BA4F2BF5CF8();
			unk_0x531D638530A8DB97(Local_194.f_41, "HUD_Loop", Local_194.f_157, 1);
		}
	}
}

void func_362()
{
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159))
	{
		if (unk_0x209C5E3492025E4B(Local_194.f_31))
		{
			Local_194.f_31 = unk_0x9F2C1BA4F2BF5CF8();
			unk_0x03AC3DF6C3FAD811(Local_194.f_31, "Flight_Loop", unk_0xDCE61FCD9D7F205E(Local_194.f_159), Local_194.f_157, 0, 0);
			unk_0x30DD80A33ACF3D36(Local_194.f_31, "DroneRotationalSpeed", Local_194.f_129);
		}
		else
		{
			unk_0x30DD80A33ACF3D36(Local_194.f_31, "DroneRotationalSpeed", Local_194.f_129);
		}
		if (unk_0x209C5E3492025E4B(Local_194.f_40))
		{
			unk_0x8A1B9F78F1F46A12(Local_194.f_40);
			Local_194.f_40 = -1;
		}
	}
}

void func_363()
{
	if (func_19(unk_0x93E99A2DBCBA9CFA(), 1, 1))
	{
		unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 450, 1);
	}
}

void func_364()
{
	int iVar0;
	
	if (func_24())
	{
		iVar0 = unk_0xADCF72047FEB806E(Local_194.f_45);
		if (unk_0x5E6D8811A0BD0954(Local_194.f_159) && func_19(iVar0, 1, 1))
		{
			if (unk_0x3C3D6D026CF7F51B(unk_0xF2CFBB1105511E1A(iVar0), 0))
			{
				if (func_365(unk_0xDCE61FCD9D7F205E(Local_194.f_159), unk_0xF2CFBB1105511E1A(iVar0), Global_262145.f_25312, 1))
				{
					if (!func_209(unk_0x93E99A2DBCBA9CFA(), iVar0))
					{
						if (unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) != unk_0x4292F1DE8BA2D22E(iVar0) || unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) == -1)
						{
							unk_0xECDAB41968FF21A8(&(Local_194.f_5), 11);
							return;
						}
					}
				}
			}
		}
		unk_0x061B1200C95204CB(&(Local_194.f_5), 11);
	}
}

bool func_365(int iParam0, int iParam1, float fParam2, int iParam3)
{
	return unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(iParam0, iParam3), unk_0x30BE8A934C020461(iParam1, iParam3)) <= (fParam2 * fParam2);
}

void func_366()
{
	int iVar0;
	
	if (((func_35() || func_24()) || func_38()) || func_16())
	{
		iVar0 = 1000;
		if (func_24() || func_38())
		{
			iVar0 = 7000;
		}
		else if (func_16())
		{
			iVar0 = 1100;
		}
		if (!BitTest(Local_194.f_5, 29))
		{
			if (unk_0xF57C1326FD40C8A7(Local_194.f_169) && unk_0x0097C56F4031898F(Local_194.f_169))
			{
				if (func_17(func_18()))
				{
					if (func_22(&(Local_194.f_269), iVar0, 0))
					{
						unk_0x362A7D3F1F776CB5(func_18(), 1, 0);
						unk_0xDDE449983CE7572E(func_18(), true, 0);
						unk_0xECDAB41968FF21A8(&(Local_194.f_5), 29);
					}
				}
			}
		}
	}
}

void func_367()
{
	if (!func_16() || unk_0x93E99A2DBCBA9CFA() == func_12())
	{
		return;
	}
	if (func_22(&(Local_194.f_281[unk_0x93E99A2DBCBA9CFA() /*2*/]), 2500, 0))
	{
		if (unk_0xFB8555459C1C8AE7(Local_194.f_207[unk_0x93E99A2DBCBA9CFA()]))
		{
			unk_0x5F0A993576888020(Local_194.f_207[unk_0x93E99A2DBCBA9CFA()], 0);
		}
		func_21(&(Local_194.f_281[unk_0x93E99A2DBCBA9CFA() /*2*/]));
	}
}

void func_368()
{
	char* sVar0;
	var uVar1;
	var uVar2;
	
	sVar0 = "scr_ih_sub";
	unk_0xEC499B98292618DE(sVar0);
	if (unk_0x7B16A34B3A977485(sVar0))
	{
		if (func_17(func_15()) && unk_0x93E99A2DBCBA9CFA() != func_12())
		{
			if (!unk_0xFB8555459C1C8AE7(Local_194.f_207[unk_0x93E99A2DBCBA9CFA()]))
			{
				unk_0x8DDE86C046BC23A6(sVar0);
				uVar1 = func_375(unk_0x93E99A2DBCBA9CFA());
				uVar2 = unk_0xD854D152961C41A9(func_15(), uVar1);
				Local_194.f_207[unk_0x93E99A2DBCBA9CFA()] = unk_0xCAC5FDE85F08E13F("scr_ih_sub_missile_launch", func_15(), func_374(unk_0x93E99A2DBCBA9CFA()), 0f, 0f, 0f, uVar2, 5f, 0, 0, 0);
			}
			else
			{
				func_23(&(Local_194.f_281[unk_0x93E99A2DBCBA9CFA() /*2*/]), 0, 0);
			}
			if (func_25(&(Local_194.f_281[unk_0x93E99A2DBCBA9CFA() /*2*/])))
			{
				if (func_22(&(Local_194.f_281[unk_0x93E99A2DBCBA9CFA() /*2*/]), 1000, 0))
				{
					unk_0xB41C948EFBF498ED(Local_194.f_207[unk_0x93E99A2DBCBA9CFA()], "flame", 0.15f, 0);
					func_370();
					func_267();
					func_348();
					if (!unk_0x51DF6895C236B231(unk_0xDCE61FCD9D7F205E(Local_194.f_159)))
					{
						unk_0x724FFAED1C56CE2B(unk_0xDCE61FCD9D7F205E(Local_194.f_159), true, 0);
					}
					func_369();
					if (unk_0x209C5E3492025E4B(Local_194.f_40))
					{
						Local_194.f_40 = unk_0x9F2C1BA4F2BF5CF8();
						unk_0x531D638530A8DB97(Local_194.f_40, "HUD_Startup", Local_194.f_157, 1);
					}
					func_270();
					func_102();
					func_237(1);
					unk_0xA2EC5ACB2B5D92A4();
					unk_0xADD48E9C814DB7CB("IslandPeriscope");
					unk_0x9E2404A25985615A(1, 0, 0, 1, 1, 0);
					Local_194.f_173 = unk_0x0DB7F8294D73598B();
					unk_0x226C3A30511D5DC4(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0);
					func_383(4);
				}
			}
		}
		else
		{
			func_384(1);
			func_383(7);
		}
	}
}

void func_369()
{
	if (func_138() || func_31())
	{
		if (!unk_0xD19C2C73F4D74992("DLC_BTL_Hacker_Drone_HUD_Scene"))
		{
			unk_0xAEA29937C5240DA0("DLC_BTL_Hacker_Drone_HUD_Scene");
		}
	}
	else if (func_24())
	{
		if (!unk_0xD19C2C73F4D74992("DLC_Arena_Battle_Drone_HUD_Scene"))
		{
			unk_0xAEA29937C5240DA0("DLC_Arena_Battle_Drone_HUD_Scene");
		}
	}
	else if (func_38())
	{
		if (!unk_0xD19C2C73F4D74992("DLC_Arena_Spectator_Drone_HUD_Scene"))
		{
			unk_0xAEA29937C5240DA0("DLC_Arena_Spectator_Drone_HUD_Scene");
		}
	}
	else if (func_35())
	{
		if (!unk_0xD19C2C73F4D74992("dlc_aw_arena_piloted_missile_scene"))
		{
			unk_0xAEA29937C5240DA0("dlc_aw_arena_piloted_missile_scene");
		}
	}
	else if (func_16())
	{
		if (!unk_0xD19C2C73F4D74992("dlc_hei4_submarine_guided_missile_Scene"))
		{
			unk_0xAEA29937C5240DA0("dlc_hei4_submarine_guided_missile_Scene");
		}
	}
}

void func_370()
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	
	uVar1 = func_375(unk_0x93E99A2DBCBA9CFA());
	if (Global_1581970 == 1)
	{
		uVar0 = unk_0xD854D152961C41A9(func_15(), uVar1);
		Var2 = { unk_0xB4F3ED71EC41EFCC(func_15(), uVar0) };
		Local_194.f_144 = { unk_0xF2A6E8EA57F9D501(Var2, unk_0xD850DD08D5434072(func_15()), 0f, 0f, -2.6f) };
	}
	else if (Global_1581970 == 2)
	{
		uVar0 = unk_0xD854D152961C41A9(func_15(), uVar1);
		Var2 = { unk_0xB4F3ED71EC41EFCC(func_15(), uVar0) };
		Local_194.f_144 = { unk_0xF2A6E8EA57F9D501(Var2, unk_0xD850DD08D5434072(func_15()), 0f, 0f, -2.6f) };
	}
	Var5 = { unk_0x000D018EA42688BA(func_15(), 2) };
	unk_0xC2E3C377D893C17A(unk_0xDCE61FCD9D7F205E(Local_194.f_159), Local_194.f_144, 1, 0, 0, 1);
	func_372(Local_194.f_144, (Var5.f_0 + 90f), 180f, 0f);
	Var8 = { unk_0x30BE8A934C020461(func_15(), 1) };
	Var11 = { 0f, 0f, 0f };
	Local_194.f_116 = func_371(Var11, Var8);
	unk_0x692C3FDAD7DB53CC(unk_0xDCE61FCD9D7F205E(Local_194.f_159), Local_194.f_116);
	unk_0x464B5B0F22497FC5(unk_0xDCE61FCD9D7F205E(Local_194.f_159), (Var5.f_0 - 90f), 0f, Local_194.f_116, 2, 1);
	if (unk_0x209C5E3492025E4B(Local_194.f_115))
	{
		Local_194.f_115 = unk_0x9F2C1BA4F2BF5CF8();
		unk_0x03AC3DF6C3FAD811(Local_194.f_115, "Missile_Launch", unk_0xDCE61FCD9D7F205E(Local_194.f_159), Local_194.f_157, 1, 0);
	}
}

var func_371(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0x06A2A02CDC68090B((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_372(struct<3> Param0, struct<3> Param3)
{
	if (!func_373(Global_1962996.f_13, Param0, 0))
	{
		Global_1962996.f_13 = { Param0 };
		Param3 = { Param3 + Vector(0f, -180f, 180f) };
		Global_1962996.f_16 = { Param3 };
	}
}

bool func_373(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_374(int iParam0)
{
	if (Local_194.f_82[iParam0] > 4)
	{
		return 0f, 0f, 1.5f;
	}
	return 0f, 0f, 1.5f;
}

char* func_375(int iParam0)
{
	if (iParam0 == func_12())
	{
		return "";
	}
	switch (Local_194.f_82[iParam0])
	{
		case 1:
			return "sub_hatch1";
		
		case 2:
			return "sub_hatch2";
		
		case 3:
			return "sub_hatch3";
		
		case 4:
			return "sub_hatch4";
		
		case 5:
			return "sub_hatch5";
		
		case 6:
			return "sub_hatch6";
		
		case 7:
			return "sub_hatch7";
		
		case 8:
			return "sub_hatch8";
		
		default:
	}
	return "sub_hatch4";
}

void func_376()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_382() || !func_31())
	{
		return;
	}
	switch (Local_194.f_80)
	{
		case 0:
			if (!unk_0x5E6D8811A0BD0954(Local_194.f_160))
			{
				iVar0 = joaat("ch_prop_ch_phone_ing_01a");
				if (func_179(iVar0))
				{
					if (func_92(unk_0x42AE3F61BF594E6C(false, 1) + 1, 0, 1))
					{
						if (!BitTest(Local_194.f_6, 3))
						{
							unk_0x1C8B600248309A26(unk_0x42AE3F61BF594E6C(false, 1) + 1);
							unk_0xECDAB41968FF21A8(&(Local_194.f_6), 3);
						}
						if (unk_0x959417B72A20644E(1))
						{
							if (func_381(&(Local_194.f_160), iVar0, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 0, 1, 1, 0, 0, 0, 1))
							{
								unk_0xCD80955BA7109E45(Local_194.f_160, unk_0x93E99A2DBCBA9CFA(), 1);
								iVar1 = unk_0xCF99BEF1317B66DA(unk_0xC1A5EC5C986B98AD(), 28422);
								unk_0xBD02C9D4D7076ECC(unk_0xDCE61FCD9D7F205E(Local_194.f_160), unk_0xC1A5EC5C986B98AD(), iVar1, 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0);
								unk_0xE0A291F406691F03(iVar0);
							}
						}
					}
				}
			}
			else
			{
				Local_194.f_80 = 1;
			}
			break;
		
		case 1:
			if (unk_0xF5F493B789EA063E(unk_0xC1A5EC5C986B98AD(), joaat("script_task_go_straight_to_coord")) != 0 && unk_0xF5F493B789EA063E(unk_0xC1A5EC5C986B98AD(), joaat("script_task_go_straight_to_coord")) != 1)
			{
				func_333(0, 0, 0);
				Local_194.f_80 = 2;
			}
			break;
		
		case 2:
			if (func_380(0, "CREATE"))
			{
				func_362();
				if (func_379(Local_194.f_160))
				{
					if (!unk_0x51DF6895C236B231(unk_0xDCE61FCD9D7F205E(Local_194.f_160)))
					{
						unk_0x724FFAED1C56CE2B(unk_0xDCE61FCD9D7F205E(Local_194.f_160), true, 0);
					}
				}
				if (func_379(Local_194.f_159))
				{
					if (!unk_0x51DF6895C236B231(unk_0xDCE61FCD9D7F205E(Local_194.f_159)))
					{
						unk_0x724FFAED1C56CE2B(unk_0xDCE61FCD9D7F205E(Local_194.f_159), true, 0);
						unk_0x724FFAED1C56CE2B(Local_194.f_163, false, 0);
					}
				}
			}
			if (func_377(1))
			{
				unk_0xBD02C9D4D7076ECC(Local_194.f_163, unk_0xDCE61FCD9D7F205E(Local_194.f_159), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
				unk_0x724FFAED1C56CE2B(Local_194.f_163, false, 0);
				unk_0x219B35BBE9DF373A(unk_0x177F7E959D2D410B(Local_194.f_159));
				unk_0x511CF813FA2C3D30(unk_0xDCE61FCD9D7F205E(Local_194.f_159));
				func_270();
				func_131();
				func_237(1);
				func_249();
				func_352();
				func_369();
				if (unk_0x209C5E3492025E4B(Local_194.f_40))
				{
					Local_194.f_40 = unk_0x9F2C1BA4F2BF5CF8();
					unk_0x531D638530A8DB97(Local_194.f_40, "HUD_Startup", Local_194.f_157, 1);
				}
				unk_0x9E2404A25985615A(1, 0, 0, 1, 1, 0);
				Local_194.f_173 = unk_0x0DB7F8294D73598B();
				func_383(4);
				func_333(1, 1, 0);
				Local_194.f_80 = 3;
			}
			break;
		
		case 3:
			if (func_377(0))
			{
				iVar2 = unk_0x15A88CFAAFFC6C4B(0, 3);
				switch (iVar2)
				{
					case 0:
						func_333(2, 0, 0);
						Local_194.f_243 = 2;
						break;
					
					case 1:
						func_333(3, 0, 0);
						Local_194.f_243 = 3;
						break;
					
					case 2:
						func_333(4, 0, 0);
						Local_194.f_243 = 4;
						break;
				}
				Local_194.f_80 = 4;
			}
			break;
		
		case 4:
			if (func_377(0))
			{
				func_333(1, 1, 0);
				Local_194.f_80 = 3;
			}
			break;
	}
}

int func_377(bool bParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0xC1A5EC5C986B98AD();
	if (func_17(iVar0))
	{
		fVar1 = func_378();
		iVar2 = unk_0x7E80728A2E77D8E8(Local_194.f_79);
		if (unk_0x411B750250543BD0(iVar2) && unk_0xABF98B1999FE64CA(iVar2) >= fVar1)
		{
			if (bParam0)
			{
				func_335(0);
			}
			return 1;
		}
	}
	return 0;
}

float func_378()
{
	return 0.95f;
}

int func_379(var uParam0)
{
	if (unk_0x7E2E2E8A648611F4(uParam0))
	{
		unk_0xF05A5F7FFA0C5E2D(uParam0);
		return unk_0xFE2AB315FD8C7A6F(uParam0);
	}
	return 0;
}

int func_380(int iParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = unk_0x7E80728A2E77D8E8(Local_194.f_79);
	if (iVar0 != -1)
	{
		if (unk_0x411B750250543BD0(iVar0))
		{
			if ((unk_0x18D781E5FEB0E5E3(unk_0xC1A5EC5C986B98AD(), unk_0x14580F20CBCE4FA9(sParam1)) || unk_0x18D781E5FEB0E5E3(unk_0xDCE61FCD9D7F205E(Local_194.f_160), unk_0x14580F20CBCE4FA9(sParam1))) || unk_0x18D781E5FEB0E5E3(unk_0xDCE61FCD9D7F205E(Local_194.f_159), unk_0x14580F20CBCE4FA9(sParam1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_381(var uParam0, int iParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!unk_0x959417B72A20644E(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = unk_0xC620B18026FDD05D(unk_0xC3541ED6B6D42728(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	else
	{
		*uParam0 = unk_0xC620B18026FDD05D(unk_0xF19D6C0E8B56BE23(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	if (unk_0x7E2E2E8A648611F4(*uParam0))
	{
		unk_0xAD02BD8A749B79F9(unk_0xDCE61FCD9D7F205E(*uParam0), iParam8);
		if (bParam10)
		{
			unk_0x9379BECAD1C8BD50(unk_0xDCE61FCD9D7F205E(*uParam0), 1);
		}
		if (bParam11)
		{
			unk_0x724FFAED1C56CE2B(unk_0xDCE61FCD9D7F205E(*uParam0), false, 0);
		}
		if (unk_0xC59A2EB21A3834E2(unk_0xDCE61FCD9D7F205E(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x6CD289A8A1000001(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

bool func_382()
{
	return BitTest(Global_1962996, 13);
}

void func_383(int iParam0)
{
	if (Local_194.f_241 != iParam0)
	{
		Local_194.f_241 = iParam0;
	}
}

void func_384(bool bParam0)
{
	if (bParam0)
	{
		if (!func_382())
		{
			unk_0xECDAB41968FF21A8(&Global_1962996, 13);
		}
	}
	else if (func_382())
	{
		unk_0x061B1200C95204CB(&Global_1962996, 13);
	}
}

void func_385()
{
	struct<3> Var0;
	
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159))
	{
		if (unk_0xFE2AB315FD8C7A6F(Local_194.f_159))
		{
			if (!unk_0xF57C1326FD40C8A7(Local_194.f_169) && BitTest(Local_194.f_5, 0))
			{
				if (func_396())
				{
					if (func_340())
					{
						func_298(unk_0x93E99A2DBCBA9CFA(), 0, 33280, 0);
					}
					else if (!func_35())
					{
						func_298(unk_0x93E99A2DBCBA9CFA(), 0, 512, 0);
					}
					if (!func_395())
					{
						unk_0x5744A4AF6FF72EBA();
					}
					else
					{
						unk_0x473C524981645659();
					}
					Local_194.f_169 = unk_0x002AF75213D62F6C(26379945, 1);
					unk_0xE3BD36CCB5EB72F2(Local_194.f_169, Local_194.f_125);
					unk_0x1E648B5D359EF084(Local_194.f_169, 0.01f);
					unk_0xB19C3EB273114F16(Local_194.f_169, 0.01f);
					unk_0xA2EC5ACB2B5D92A4();
					if (func_35())
					{
						unk_0xADD48E9C814DB7CB("eyeinthesky");
					}
					Var0 = { func_394() };
					unk_0xAFDFBC49D21A1D63(Local_194.f_169, unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0f, 0f, 180f, Var0, 1);
					if (func_35())
					{
						unk_0xB346B70AE8C42AD8(Local_194.f_169, func_393() - Vector(0f, -180f, 180f), 2);
					}
					unk_0xA0A3624F57C53342(Local_194.f_150, 75f, 75f);
					unk_0xD4E2F1C0CFBCE829(Local_194.f_150, unk_0x4C3FED86996E8840(Local_194.f_169, 2));
					if (!func_16())
					{
						unk_0x226C3A30511D5DC4(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0);
					}
					if (!func_340())
					{
						if (unk_0x16760C7780F48003())
						{
							unk_0xB942AB5E12BF630A();
						}
					}
					if (!func_31() && !func_16())
					{
						func_369();
						if (unk_0x209C5E3492025E4B(Local_194.f_40))
						{
							Local_194.f_40 = unk_0x9F2C1BA4F2BF5CF8();
							unk_0x531D638530A8DB97(Local_194.f_40, "HUD_Startup", Local_194.f_157, 1);
						}
						func_270();
						if (func_83())
						{
							func_102();
						}
						else
						{
							func_131();
						}
						func_237(1);
						func_249();
						func_352();
						unk_0x9E2404A25985615A(1, 0, 0, 1, 1, 0);
						Local_194.f_173 = unk_0x0DB7F8294D73598B();
					}
					func_390(1);
					func_389(1);
					func_387(158);
					unk_0xECDAB41968FF21A8(&(Local_96[unk_0x93E99A2DBCBA9CFA() /*3*/]), 0);
					if (!func_31() && !func_16())
					{
						func_383(4);
					}
					else if (func_16())
					{
						func_383(3);
					}
					else
					{
						Local_194.f_153 = { func_6(unk_0x93E99A2DBCBA9CFA()) };
						unk_0xDE209AFE421606C6(Local_194.f_153, &(Local_194.f_153.f_2), 0, 0);
						Local_194.f_118 = unk_0xD850DD08D5434072(unk_0xC1A5EC5C986B98AD());
						func_386();
						Local_194.f_153 = { unk_0xF2A6E8EA57F9D501(Local_194.f_153, Local_194.f_118, -0.0695723f, 0.177497f, 0f) };
						func_383(2);
					}
				}
				else if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
				{
					unk_0x6FE9A0C01D25F413(unk_0xC1A5EC5C986B98AD(), 0, 0);
				}
			}
			else
			{
				if (unk_0xF57C1326FD40C8A7(Local_194.f_169))
				{
				}
				if (!BitTest(Local_194.f_5, 0))
				{
				}
			}
		}
		else
		{
			unk_0xF05A5F7FFA0C5E2D(Local_194.f_159);
		}
	}
}

void func_386()
{
	int iVar0;
	
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &iVar0, 1);
		if (!(iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("object")))
		{
			unk_0x8CC688927B10006C(unk_0xC1A5EC5C986B98AD(), joaat("weapon_unarmed"), 1);
		}
	}
}

void func_387(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_9036)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_388() /*5568*/].f_681.f_4242[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574742.f_1[iVar0] == -1)
			{
				Global_1574742.f_1[iVar0] = iParam0;
				Global_1574742 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_388()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_389(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_365, 26))
		{
			unk_0xECDAB41968FF21A8(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_365), 26);
		}
	}
	else if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_365, 26))
	{
		unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_365), 26);
	}
}

void func_390(bool bParam0)
{
	if (bParam0)
	{
		if (!func_75())
		{
			unk_0xECDAB41968FF21A8(&Global_1962996, 5);
		}
	}
	else
	{
		if (func_75())
		{
			unk_0x061B1200C95204CB(&Global_1962996, 5);
		}
		func_391(0);
	}
}

void func_391(bool bParam0)
{
	if (bParam0)
	{
		if (!func_392())
		{
			unk_0xECDAB41968FF21A8(&Global_1962996, 12);
		}
	}
	else if (func_392())
	{
		unk_0x061B1200C95204CB(&Global_1962996, 12);
	}
}

bool func_392()
{
	return BitTest(Global_1962996, 12);
}

Vector3 func_393()
{
	return Global_1962996.f_16;
}

Vector3 func_394()
{
	if (func_24() || func_38())
	{
		return 0f, -0.099f, -0.02f;
	}
	else if (func_35())
	{
		return 0f, -0.9f, 0f;
	}
	else if (func_30() || func_160())
	{
		return 0f, -0.038f, -0.006f;
	}
	else if (func_16())
	{
		return 0f, -5.48f, 0f;
	}
	return 0f, -0.038f, -0.004f;
}

bool func_395()
{
	return BitTest(Global_1962996, 10);
}

int func_396()
{
	if (func_39() && !func_41())
	{
		return 1;
	}
	if (func_400())
	{
		return 1;
	}
	if (func_399())
	{
		return 1;
	}
	if (func_41() && func_398())
	{
		return 1;
	}
	if (func_397() && func_398())
	{
		return 1;
	}
	if (!func_70(unk_0x93E99A2DBCBA9CFA(), 0) && !func_294())
	{
		return 1;
	}
	return 0;
}

int func_397()
{
	if (func_46(unk_0x93E99A2DBCBA9CFA()) && func_42())
	{
		if (Global_1581970 == 2 || Global_1581970 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_398()
{
	if (Global_1581961 != -1 || Global_1581967 != -1)
	{
		if (((unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_43())
		{
			return 0;
		}
	}
	return 0;
}

int func_399()
{
	return 0;
}

int func_400()
{
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		return 0;
	}
	if (func_41() || func_401())
	{
		return 0;
	}
	if (func_399())
	{
		return 0;
	}
	return 1;
}

int func_401()
{
	if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -1421.593f, -3011.17f, -80.24994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0, 1, 0) || unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -1419.463f, -3009.145f, -80.49994f, -1420.684f, -3010.617f, -77.99994f, 2f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_402()
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	float fVar5;
	
	iVar0 = joaat("blazer5");
	if (func_179(Local_194.f_240) && func_179(iVar0))
	{
		if (!BitTest(Local_194.f_5, 0))
		{
			if (!unk_0x5E6D8811A0BD0954(Local_194.f_159))
			{
				if (!func_340())
				{
					if (func_138())
					{
						if (func_17(func_345()))
						{
							Var1 = { unk_0x30BE8A934C020461(func_345(), 1) };
						}
					}
					else
					{
						Var1 = { Local_194.f_138 };
					}
					if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
					{
						func_298(unk_0x93E99A2DBCBA9CFA(), 0, 512, 0);
					}
					if (!BitTest(Local_194.f_5, 18))
					{
						if (unk_0x46D9CC780489C728(Var1, 100f, 1))
						{
							unk_0xECDAB41968FF21A8(&(Local_194.f_5), 18);
						}
					}
					else if (unk_0x16760C7780F48003())
					{
						if (!BitTest(Local_194.f_5, 19))
						{
							if (func_408())
							{
								if (func_405())
								{
									unk_0xECDAB41968FF21A8(&(Local_194.f_5), 19);
								}
							}
							else
							{
								if (!func_257(func_404()))
								{
									Local_194.f_138 = { func_404() };
								}
								unk_0xECDAB41968FF21A8(&(Local_194.f_5), 19);
								if (func_16())
								{
									Local_194.f_138.f_2 = (Local_194.f_138.f_2 + 1000f);
								}
							}
						}
					}
				}
				if (BitTest(Local_194.f_5, 19) || func_340())
				{
					if (!BitTest(Local_194.f_5, 20))
					{
						Local_194.f_163 = unk_0xABEEDBEF2BBDF5B3(iVar0, Local_194.f_138, 0f, 0, 0, 0);
						unk_0x226C3A30511D5DC4(Local_194.f_163, 1);
						unk_0x2EDDA32F6EF3C8B7(Local_194.f_163, Local_194.f_138, 0, 0, 1);
						unk_0x362A7D3F1F776CB5(Local_194.f_163, 0, 0);
						unk_0x724FFAED1C56CE2B(Local_194.f_163, false, 0);
						unk_0xECDAB41968FF21A8(&(Local_194.f_5), 20);
					}
					else if (func_92(unk_0x42AE3F61BF594E6C(false, 1) + 1, 0, 1))
					{
						if (!BitTest(Local_194.f_5, 30))
						{
							unk_0x1C8B600248309A26(unk_0x42AE3F61BF594E6C(false, 1) + 1);
							unk_0xECDAB41968FF21A8(&(Local_194.f_5), 30);
						}
						if (unk_0x959417B72A20644E(1))
						{
							bVar4 = func_403();
							if (func_31())
							{
								Local_194.f_153 = { func_6(unk_0x93E99A2DBCBA9CFA()) };
								unk_0xDE209AFE421606C6(Local_194.f_153, &(Local_194.f_153.f_2), 0, 0);
								Local_194.f_138 = { unk_0xFC2542C169B039F2(Local_194.f_158, "ENTER", Local_194.f_153, unk_0x000D018EA42688BA(unk_0xC1A5EC5C986B98AD(), 2), 0, 2) };
							}
							if (func_381(&(Local_194.f_159), Local_194.f_240, Local_194.f_138, 0, 1, 1, 1, 1, 0, bVar4))
							{
								Global_1962996.f_20 = unk_0xDCE61FCD9D7F205E(Local_194.f_159);
								unk_0x226C3A30511D5DC4(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 1);
								if (func_138())
								{
									if (func_17(func_345()))
									{
										unk_0x464B5B0F22497FC5(func_18(), unk_0x000D018EA42688BA(func_345(), 2), 2, 1);
										fVar5 = (unk_0xD850DD08D5434072(func_345()) + 180f);
									}
								}
								Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_432 = { Local_194.f_138 };
								Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_435 = fVar5;
								Local_96[unk_0x93E99A2DBCBA9CFA() /*3*/].f_2 = Local_194.f_159;
								unk_0xCD80955BA7109E45(Local_194.f_159, unk_0x93E99A2DBCBA9CFA(), 1);
								unk_0xD78D912CE74CE888(unk_0x177F7E959D2D410B(Local_194.f_159), 1);
								unk_0x351E6B9FD37CFF33(unk_0x177F7E959D2D410B(Local_194.f_159), 1, 1);
								unk_0x2EDDA32F6EF3C8B7(func_18(), Local_194.f_138, 0, 0, 1);
								unk_0x692C3FDAD7DB53CC(func_18(), fVar5);
								unk_0x2661D17C702FA8B9(func_18(), 1);
								if (!func_257(func_393()))
								{
									unk_0x464B5B0F22497FC5(func_18(), func_393(), 2, 1);
								}
								if (func_35() || func_16())
								{
									unk_0x362A7D3F1F776CB5(func_18(), 0, 0);
								}
								unk_0xDA3F12D8D4288EF7(Local_194.f_159, 1);
								if (func_164(unk_0x93E99A2DBCBA9CFA()))
								{
									unk_0xED2BD879E739E86B(func_18(), Global_262145.f_24670 * 5, 0);
								}
								else if (func_16())
								{
									unk_0xED2BD879E739E86B(func_18(), 1, 0);
									unk_0x6CD289A8A1000001(Local_194.f_159, 1);
									unk_0x73562E6072D7A39D(unk_0x177F7E959D2D410B(Local_194.f_159), 700);
								}
								else
								{
									unk_0xED2BD879E739E86B(func_18(), Global_262145.f_24670, 0);
								}
								unk_0xC325399A972D4359(Local_194.f_159, 0);
								unk_0xAFB08ED9E6E0C4FB(unk_0x177F7E959D2D410B(Local_194.f_159), 1);
								unk_0xA0A3624F57C53342(Local_194.f_138, 100f, 200f);
								unk_0xD4E2F1C0CFBCE829(unk_0x30BE8A934C020461(unk_0x177F7E959D2D410B(Local_194.f_159), 1), unk_0x000D018EA42688BA(unk_0x177F7E959D2D410B(Local_194.f_159), 2));
								unk_0xE0A291F406691F03(Local_194.f_240);
								unk_0xE0A291F406691F03(iVar0);
							}
						}
					}
				}
			}
			else
			{
				unk_0x73BB407763F5834B(unk_0xDCE61FCD9D7F205E(Local_194.f_159), 0);
				if (func_17(Local_194.f_163))
				{
					if (func_17(unk_0x177F7E959D2D410B(Local_194.f_159)))
					{
						unk_0xBD02C9D4D7076ECC(Local_194.f_163, unk_0xDCE61FCD9D7F205E(Local_194.f_159), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
						unk_0xECDAB41968FF21A8(&(Local_194.f_5), 0);
					}
				}
			}
		}
	}
}

int func_403()
{
	if (func_31())
	{
		return 1;
	}
	if (func_16())
	{
		return 1;
	}
	return 0;
}

Vector3 func_404()
{
	return Global_1962996.f_13;
}

int func_405()
{
	if (Local_194.f_16 == 0)
	{
		if (!BitTest(Local_194.f_5, 14))
		{
			if ((!func_164(unk_0x93E99A2DBCBA9CFA()) && func_138()) && func_17(func_345()))
			{
				Local_194.f_138 = { unk_0xF2A6E8EA57F9D501(unk_0x30BE8A934C020461(func_345(), 1), unk_0xD850DD08D5434072(func_345()), -0.7f, 1.6f, 4f) };
				unk_0xECDAB41968FF21A8(&(Local_194.f_5), 14);
			}
			else
			{
				if (func_138() && func_17(func_345()))
				{
					Local_194.f_138 = { unk_0xF2A6E8EA57F9D501(unk_0x30BE8A934C020461(func_345(), 1), unk_0xD850DD08D5434072(func_345()), -0.7f, 1.6f, 4f) };
				}
				Local_194.f_138 = unk_0xD88C7A93096DA0F7((Local_194.f_138 - 1.5f), (Local_194.f_138 + 1.5f));
				Local_194.f_138.f_1 = unk_0xD88C7A93096DA0F7((Local_194.f_138.f_1 - 1.5f), (Local_194.f_138.f_1 + 1.5f));
				Local_194.f_138.f_2 = unk_0xD88C7A93096DA0F7((Local_194.f_138.f_2 + 0.5f), (Local_194.f_138.f_2 + 1.5f));
				if (!func_407(Local_194.f_138))
				{
					unk_0xECDAB41968FF21A8(&(Local_194.f_5), 14);
				}
			}
		}
		else if (BitTest(Local_194.f_5, 15))
		{
			Local_194.f_138 = unk_0xD88C7A93096DA0F7((Local_194.f_138 - 1.5f), (Local_194.f_138 + 1.5f));
			Local_194.f_138.f_1 = unk_0xD88C7A93096DA0F7((Local_194.f_138.f_1 - 1.5f), (Local_194.f_138.f_1 + 1.5f));
			Local_194.f_138.f_2 = unk_0xD88C7A93096DA0F7((Local_194.f_138.f_2 + 0.5f), (Local_194.f_138.f_2 + 1.5f));
			if (!func_407(Local_194.f_138))
			{
				unk_0x061B1200C95204CB(&(Local_194.f_5), 15);
			}
		}
		func_406(Local_194.f_138);
	}
	else if (Local_194.f_16 == 1 && !func_407(Local_194.f_138))
	{
		return 1;
	}
	else
	{
		Local_194.f_16 = 0;
		unk_0xECDAB41968FF21A8(&(Local_194.f_5), 15);
	}
	return 0;
}

void func_406(struct<3> Param0)
{
	var uVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	struct<3> Var6;
	var uVar9;
	int iVar10;
	
	switch (Local_194.f_15)
	{
		case 0:
			if (func_138())
			{
				if (func_17(func_345()))
				{
					uVar0 = func_345();
				}
			}
			if (func_24() || func_38())
			{
				fVar1 = func_215(Local_194.f_240);
			}
			else
			{
				fVar1 = (func_215(Local_194.f_240) * 11f);
			}
			Local_194.f_168 = unk_0xD8D74C74516FDA20(Param0, Param0, fVar1, 511, uVar0, 4);
			if (Local_194.f_168 != 0)
			{
				Local_194.f_15 = 1;
			}
			break;
		
		case 1:
			iVar10 = unk_0x5A2817B89A8ECCD2(Local_194.f_168, &iVar2, &Var6, &uVar3, &uVar9);
			if (iVar10 == 2)
			{
				if (iVar2 == 0)
				{
					Local_194.f_16 = 1;
					Var6 = { 0f, 0f, 0f };
				}
				else
				{
					Local_194.f_16 = 2;
					Local_194.f_168 = 0;
					Local_194.f_15 = 0;
				}
			}
			else if (iVar10 == 0)
			{
				Local_194.f_15 = 0;
			}
			break;
	}
}

int func_407(struct<3> Param0)
{
	if (unk_0x9E76D45F14E2C578(Param0, -1036.27f, -228.704f, 53.76435f, -1096.765f, -258.69f, 35.77808f, 20f, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_408()
{
	if (func_138())
	{
		return 1;
	}
	if (func_30() && !func_31())
	{
		return 1;
	}
	return 0;
}

int func_409()
{
	if (func_294())
	{
		return Global_1950108.f_529 == 0;
	}
	return 0;
}

void func_410()
{
	if (func_19(unk_0x93E99A2DBCBA9CFA(), 1, 1))
	{
		Local_194.f_141 = { func_258(&Local_194) };
		if (!func_257(func_404()))
		{
			Local_194.f_138 = { func_404() };
		}
		else
		{
			Local_194.f_138 = { func_6(unk_0x93E99A2DBCBA9CFA()) };
			Local_194.f_138 = { Local_194.f_138, Local_194.f_138.f_1, (Local_194.f_138.f_2 + 1.5f) };
		}
		if (func_70(unk_0x93E99A2DBCBA9CFA(), 0))
		{
			func_458(1);
		}
		if (func_70(unk_0x93E99A2DBCBA9CFA(), 0))
		{
			func_455();
		}
		else if (((func_453(unk_0x93E99A2DBCBA9CFA()) == 2 || func_453(unk_0x93E99A2DBCBA9CFA()) == 1) && !BitTest(Global_1969892, 6)) && !BitTest(Global_1969893, 0))
		{
			if (BitTest(Global_2764742, 0))
			{
				func_452(1);
				func_444(0, 0);
				func_443();
				func_391(1);
				func_383(1);
			}
		}
		else if ((func_40() && func_439()) && !BitTest(Global_1969892, 6))
		{
			func_426();
		}
		else if (BitTest(Global_1969892, 6) && BitTest(Global_1969893, 0))
		{
			func_444(0, 0);
			func_391(1);
			func_383(1);
		}
		else if (func_16())
		{
			func_412();
		}
		else if (func_31() && !func_411())
		{
			unk_0xCD3C8E1022864F65(1);
			func_136("PIM_DRONAMOS", -1);
			func_298(unk_0x93E99A2DBCBA9CFA(), 1, 0, 0);
			func_383(7);
		}
		else if (func_257(Local_194.f_135))
		{
			Local_194.f_156 = 0;
			func_391(1);
			func_383(1);
		}
	}
}

bool func_411()
{
	return BitTest(Global_1962996, 23);
}

void func_412()
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if ((func_397() && !func_425()) && !func_416())
	{
		if (unk_0x51EB177CA0562B62(2, 201) || unk_0x992AACDC3C066F55(2, 201))
		{
			if (Global_1581970 == 1)
			{
				Local_194.f_82[unk_0x93E99A2DBCBA9CFA()] = unk_0x15A88CFAAFFC6C4B(1, 5);
			}
			else
			{
				Local_194.f_82[unk_0x93E99A2DBCBA9CFA()] = unk_0x15A88CFAAFFC6C4B(5, 9);
			}
			if (Global_1581970 == 1)
			{
				uVar0 = unk_0xD854D152961C41A9(func_15(), func_375(unk_0x93E99A2DBCBA9CFA()));
				Var1 = { unk_0xB4F3ED71EC41EFCC(func_15(), uVar0) };
				Local_194.f_144 = { unk_0xF2A6E8EA57F9D501(Var1, unk_0xD850DD08D5434072(func_15()), 0f, 0f, -2.6f) };
			}
			else if (Global_1581970 == 2)
			{
				uVar0 = unk_0xD854D152961C41A9(func_15(), func_375(unk_0x93E99A2DBCBA9CFA()));
				Var1 = { unk_0xB4F3ED71EC41EFCC(func_15(), uVar0) };
				Local_194.f_144 = { unk_0xF2A6E8EA57F9D501(Var1, unk_0xD850DD08D5434072(func_15()), 0f, 0f, -2.6f) };
			}
			Var4 = { unk_0x000D018EA42688BA(func_15(), 2) };
			func_372(Local_194.f_144, (Var4.f_0 + 90f), 180f, Var4.f_2);
			func_391(1);
			func_415(Local_194.f_82[unk_0x93E99A2DBCBA9CFA()]);
			func_383(1);
			func_414();
			func_413();
			unk_0xCD3C8E1022864F65(1);
		}
	}
	else if (!func_17(func_15()))
	{
	}
	if (func_425())
	{
		if (func_194("MP_SUBSEAT_2"))
		{
			unk_0xCD3C8E1022864F65(1);
		}
	}
}

void func_413()
{
	Global_2793044.f_349++;
}

void func_414()
{
	Global_2793044.f_349 = 0;
	Global_2793044.f_349.f_1 = 0;
}

void func_415(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 1910624731;
	Var0.f_1 = unk_0x93E99A2DBCBA9CFA();
	Var0.f_2 = uParam0;
	iVar3 = func_191(0, 1);
	if (iVar3 != 0)
	{
		unk_0x46F55A5B9F053761(1, &Var0, 3, iVar3);
	}
}

int func_416()
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -1420.915f, -3009.132f, -79.99994f, -1421.98f, -3009.121f, -77.74994f, 1f, 0, 1, 0))
	{
		return 1;
	}
	if (func_424())
	{
		return 1;
	}
	if (func_423())
	{
		return 1;
	}
	if (unk_0xFEE065E56A9BEF3F())
	{
		return 1;
	}
	if (func_294())
	{
		return 1;
	}
	if (func_70(unk_0x93E99A2DBCBA9CFA(), 0))
	{
		if (func_47(Global_1853755))
		{
			return 1;
		}
	}
	if (func_138())
	{
		if (func_422())
		{
			if (func_421())
			{
				return 1;
			}
			if (BitTest(Local_194.f_5, 28))
			{
				return 1;
			}
		}
	}
	if (func_16())
	{
		if ((func_420() && Global_1581970 == 1) || (func_419() && Global_1581970 == 2))
		{
			return 1;
		}
		if (BitTest(Local_194.f_5, 28))
		{
			return 1;
		}
		if (!func_17(func_15()))
		{
			return 1;
		}
		Var0 = { unk_0x30BE8A934C020461(func_15(), 1) };
		if (Var0.f_2 <= -3f)
		{
			return 1;
		}
		uVar3 = unk_0xA66E176E5772E965(func_15(), -1, 0);
		if (func_17(uVar3))
		{
			if (unk_0x60A06DE259634304(uVar3))
			{
				if (func_198(unk_0xB850F932D03EF34D(iVar3)))
				{
					return 1;
				}
			}
		}
	}
	if (func_198(unk_0x93E99A2DBCBA9CFA()))
	{
		return 1;
	}
	if (func_76(0))
	{
		return 1;
	}
	if (func_309())
	{
		return 1;
	}
	if (func_138())
	{
		if (func_39())
		{
			if (func_19(unk_0x93E99A2DBCBA9CFA(), 1, 1))
			{
				if (func_155(unk_0xC1A5EC5C986B98AD(), -1422.188f, -3015.926f, -80.1554f, 1) < 1.5f)
				{
					return 1;
				}
				if (func_418())
				{
					return 1;
				}
			}
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1) || func_417(unk_0xC1A5EC5C986B98AD(), 1))
			{
				return 1;
			}
		}
	}
	if (func_196())
	{
		return 1;
	}
	if (Global_262145.f_24680)
	{
		return 1;
	}
	if (BitTest(Local_194.f_5, 27))
	{
		return 1;
	}
	if (func_70(unk_0x93E99A2DBCBA9CFA(), 0))
	{
		if (func_17(func_345()))
		{
			if ((unk_0x9DC9E896F189AAA5(func_345(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0) || unk_0x9DC9E896F189AAA5(func_345(), 908.465f, 34.85726f, 79.35429f, 926.4139f, 64.37743f, 87.99218f, 19f, 0, 1, 0)) || unk_0x9DC9E896F189AAA5(func_345(), 946.8937f, -6.119501f, 77.90774f, 962.0698f, -5.454865f, 88.65581f, 10.75f, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_1581965)
	{
		return 1;
	}
	if (Global_2766481)
	{
		return 1;
	}
	if (Global_2766478)
	{
		return 1;
	}
	return 0;
}

int func_417(int iParam0, int iParam1)
{
	if (iParam1 && (!unk_0x7DE17ACDD8BA2642(iParam0) || unk_0x055111B11E6624FD(iParam0, 0)))
	{
		return 0;
	}
	if (unk_0xA2C02BFE3012901E(iParam0, 2))
	{
		return 1;
	}
	if (unk_0xC2BE6C4C65AB4F14(iParam0) != 0 || unk_0xCE93CAA8D9CF6D36(iParam0) != 0)
	{
		return 1;
	}
	return 0;
}

int func_418()
{
	if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -1420.588f, -3013.374f, -79.99994f, -1421.918f, -3012.804f, -77.99994f, 0.675f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_419()
{
	if (unk_0x93E99A2DBCBA9CFA() == func_12())
	{
		return 0;
	}
	if (Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_321.f_10 != func_12() && unk_0x93E99A2DBCBA9CFA() != func_12())
	{
		return BitTest(Global_1853910[Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_321.f_10 /*862*/].f_267.f_479, 2);
	}
	return 0;
}

int func_420()
{
	if (unk_0x93E99A2DBCBA9CFA() == func_12())
	{
		return 0;
	}
	if (Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_321.f_10 != func_12() && unk_0x93E99A2DBCBA9CFA() != func_12())
	{
		return BitTest(Global_1853910[Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_321.f_10 /*862*/].f_267.f_479, 1);
	}
	return 0;
}

int func_421()
{
	if (Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_321.f_10 != func_12() && unk_0x93E99A2DBCBA9CFA() != func_12())
	{
		return BitTest(Global_1853910[Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_321.f_10 /*862*/].f_267.f_365, 20);
	}
	return 0;
}

int func_422()
{
	if (func_164(unk_0x93E99A2DBCBA9CFA()) && Global_1962996.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_423()
{
	if (Global_2672505.f_946.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_424()
{
	return unk_0xA5E11AF0A2B928C1() <= Global_23270.f_6321 + 100;
}

int func_425()
{
	char* sVar0;
	
	sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
	if (func_62(unk_0xC1A5EC5C986B98AD()))
	{
		sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
	}
	if ((((((((unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), sVar0, "enter_left", 3)) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), sVar0, "enter", 3)) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), sVar0, "exit", 3)) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), sVar0, "exit_left", 3)) || func_60(unk_0xC1A5EC5C986B98AD(), joaat("script_task_go_straight_to_coord")))
	{
		return 1;
	}
	return 0;
}

void func_426()
{
	struct<3> Var0;
	var uVar3;
	
	if (!func_416())
	{
		if ((((((func_438() || func_437()) && !Global_1935176) && func_439()) && !BitTest(Global_2764620, 6)) && Global_1574965) && !(func_438() && Global_262145.f_26644))
		{
			if ((((((unk_0x87644B1F984197FE(2, 224) || unk_0xE665ABCFC5784C35(2, 224)) && !unk_0x87644B1F984197FE(2, 223)) && !unk_0xE665ABCFC5784C35(2, 223)) && !unk_0x87644B1F984197FE(2, 235)) && !unk_0xE665ABCFC5784C35(2, 235)) && !unk_0x992AACDC3C066F55(2, 19))
			{
				if (unk_0x879E9B10E2161FC6(Global_262145.f_26646, 0, 0, 1, -1, 0) || BitTest(Global_2764620, 2))
				{
					unk_0xECDAB41968FF21A8(&Global_2764620, 0);
					func_444(0, 0);
					func_391(1);
					func_383(1);
					func_433();
					func_431(73, -1);
					func_428();
					Var0 = { func_427() };
					func_372(Var0, 0f, 0f, 0f);
					if (func_438())
					{
						unk_0x03AC3DF6C3FAD811(uVar3, "Select_Spec_Drone", unk_0xC1A5EC5C986B98AD(), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
					}
				}
				else if (!BitTest(Global_2764620, 4))
				{
					unk_0xECDAB41968FF21A8(&Global_2764620, 4);
				}
			}
		}
	}
}

Vector3 func_427()
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	
	fVar0 = 0f;
	fVar1 = 6f;
	fVar2 = 6f;
	Var3 = { 2800f, -3800.2f, 170f };
	if ((Global_4718592.f_160097.f_1 == 3 || Global_4718592.f_160097.f_1 == 3) || Global_4718592.f_160097.f_1 == 3)
	{
		Var3.f_1 = -3860f;
	}
	fVar1 = (fVar1 * IntToFloat(unk_0xD378D2332270959A()));
	fVar2 = (fVar2 * IntToFloat((unk_0xD378D2332270959A() / 8)));
	fVar1 = (fVar1 - (8f * fVar2));
	return unk_0xF2A6E8EA57F9D501(Var3, fVar0, fVar1, fVar2, 0f);
}

void func_428()
{
	int iVar0;
	
	iVar0 = func_429(73, -1);
	if (iVar0 >= 50)
	{
		unk_0xECDAB41968FF21A8(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_372.f_3), 13);
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_372.f_3), 13);
	}
}

int func_429(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2850192[iParam0 /*3*/][func_430(iParam1)];
	if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_430(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_118();
		if (iVar1 > -1)
		{
			Global_2804739 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2804739 = 1;
		}
	}
	return iVar0;
}

void func_431(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_429(iParam0, func_430(iParam1));
	iVar0++;
	func_432(iParam0, iVar0, iParam1);
}

void func_432(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2850192[iParam0 /*3*/][func_430(uParam2)];
	unk_0x3CC35ACFFC9C730E(iVar0, iParam1, 1);
}

void func_433()
{
	func_434(1, 7985);
}

void func_434(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_436(iParam1, -1, 0);
	func_435(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_435(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_430(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
}

int func_436(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805027[iParam0 /*3*/][func_430(iParam1)];
		if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_437()
{
	return Global_2694552;
}

int func_438()
{
	if (Global_2694551 >= 0 && Global_2694551 < 10)
	{
		return 1;
	}
	return 0;
}

int func_439()
{
	int iVar0;
	int iVar1;
	
	if (func_442() && !func_441())
	{
		return 1;
	}
	iVar0 = unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA());
	if (iVar0 >= 4 || iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = Global_1058070.f_14[iVar0];
	if (iVar1 < 17)
	{
		if ((((BitTest(Global_4718592.f_1265[iVar0 /*23466*/].f_8085[iVar1], 23) && BitTest(Global_4718592.f_1265[iVar0 /*23466*/].f_8085[iVar1], 24)) && BitTest(Global_4718592.f_1265[iVar0 /*23466*/].f_8085[iVar1], 25)) && BitTest(Global_4718592.f_1265[iVar0 /*23466*/].f_8085[iVar1], 26)) && BitTest(Global_4718592.f_32, 16))
		{
			return 1;
		}
	}
	if (!BitTest(Global_4718592.f_32, 16))
	{
		return 1;
	}
	else if (func_437() || func_440(unk_0x93E99A2DBCBA9CFA()))
	{
		return 1;
	}
	return 0;
}

var func_440(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}

int func_441()
{
	if (Global_4718592.f_114294 == 1 || Global_4718592.f_114294 == 2)
	{
		return 1;
	}
	return 0;
}

var func_442()
{
	return BitTest(Global_4718592.f_160050, 12);
}

void func_443()
{
	unk_0x061B1200C95204CB(&Global_2764742, 0);
}

void func_444(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	Local_194.f_119 = Global_262145.f_24673;
	Local_194.f_130 = 40f;
	if (func_38() || func_24())
	{
		Local_194.f_119 = (Local_194.f_119 * 4.5f);
	}
	else if (func_35())
	{
		Local_194.f_119 = 100f;
		Local_194.f_130 = 26f;
	}
	else if (func_30())
	{
		Local_194.f_119 = 100f;
		Local_194.f_130 = 70f;
	}
	else if (func_160())
	{
		Local_194.f_119 = 10f;
		Local_194.f_130 = 35f;
	}
	else if (func_16())
	{
		Local_194.f_119 = 149f;
		Local_194.f_130 = 16f;
	}
	if (func_38())
	{
		Local_194.f_240 = joaat("xs_prop_arena_drone_01");
	}
	else if (func_24())
	{
		Local_194.f_240 = joaat("xs_prop_arena_drone_02");
	}
	else if (func_35())
	{
		Local_194.f_240 = joaat("xs_prop_arena_airmissile_01a");
		func_451(1);
	}
	else if (func_30())
	{
		if (!func_31())
		{
			iVar0 = func_450(unk_0x93E99A2DBCBA9CFA());
			switch (iVar0)
			{
				case 37:
					Local_194.f_240 = joaat("ch_prop_arcade_drone_01d");
					break;
				
				case 38:
					Local_194.f_240 = joaat("ch_prop_arcade_drone_01a");
					break;
				
				case 39:
					Local_194.f_240 = joaat("ch_prop_arcade_drone_01c");
					break;
				
				case 40:
					Local_194.f_240 = joaat("ch_prop_arcade_drone_01b");
					break;
			}
		}
		else
		{
			Local_194.f_240 = joaat("ch_prop_casino_drone_01a");
		}
	}
	else if (func_160())
	{
		Local_194.f_240 = joaat("ch_prop_casino_drone_01a");
	}
	else if (func_16())
	{
		Local_194.f_240 = joaat("h4_prop_h4_airmissile_01a");
		func_451(1);
	}
	else
	{
		Local_194.f_240 = joaat("ba_prop_battle_drone_quad");
	}
	if (bParam1)
	{
		Local_194.f_138 = { Local_194.f_144 };
	}
	Global_1962996.f_1 = 1500;
	func_449();
	func_448(1);
	func_447(1);
	if (func_38() || func_83())
	{
		func_446(1);
	}
	else if (func_24())
	{
		func_446(0);
	}
	if (func_31())
	{
		Local_194.f_158 = "ANIM_HEIST@HS3F@IG4_DRONE@MALE@";
		unk_0x28818732C8F0F80E(Local_194.f_158);
	}
	if (func_24())
	{
		unk_0xEC499B98292618DE("scr_xs_dr");
	}
	if (func_31())
	{
		func_445(Global_262145.f_28792);
	}
	else if (func_30() && !func_31())
	{
		func_445(Global_262145.f_28793);
	}
	else if (func_16())
	{
		func_445(unk_0xBBDA792448DB5A89(Global_262145.f_30188));
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			Local_194.f_46[iVar1] = -1;
			iVar1++;
		}
	}
	else if (!func_138() && !func_340())
	{
		func_445(200f);
	}
	func_86(Global_1837208);
	if (bParam0)
	{
	}
}

void func_445(float fParam0)
{
	if (Global_1962996.f_8 != fParam0)
	{
		Global_1962996.f_8 = fParam0;
	}
}

void func_446(bool bParam0)
{
	if (bParam0)
	{
		if (!func_192())
		{
			unk_0xECDAB41968FF21A8(&Global_1962996, 8);
		}
	}
	else if (func_192())
	{
		unk_0x061B1200C95204CB(&Global_1962996, 8);
	}
}

void func_447(bool bParam0)
{
	if (bParam0)
	{
		if (!func_356())
		{
			unk_0xECDAB41968FF21A8(&Global_1962996, 2);
		}
	}
	else if (func_356())
	{
		unk_0x061B1200C95204CB(&Global_1962996, 2);
	}
}

void func_448(bool bParam0)
{
	if (bParam0)
	{
		if (!func_247())
		{
			unk_0xECDAB41968FF21A8(&Global_1962996, 4);
		}
	}
	else if (func_247())
	{
		unk_0x061B1200C95204CB(&Global_1962996, 4);
	}
}

void func_449()
{
	if (!Local_194.f_156)
	{
		Local_194.f_18 = 100;
	}
	if (func_160())
	{
		Local_194.f_24 = 100;
	}
	Local_194.f_19 = 0;
	Local_194.f_20 = 100;
	Local_194.f_125 = 90f;
	Local_194.f_128 = 90f;
	if (!func_83())
	{
		Local_194.f_170 = unk_0x2B4645565204EA06("DRONE_CAM");
	}
	else if (func_16())
	{
		Local_194.f_170 = func_111();
	}
	else
	{
		Local_194.f_170 = func_110();
	}
	if (func_38())
	{
		Local_194.f_157 = "DLC_Arena_Drone_Sounds";
	}
	else if (func_24())
	{
		Local_194.f_157 = "DLC_Arena_Battle_Drone_Sounds";
	}
	else if (func_35())
	{
		Local_194.f_157 = "DLC_Arena_Piloted_Missile_Sounds";
	}
	else if (func_16())
	{
		Local_194.f_157 = "DLC_H4_Piloted_Missile_Sounds";
	}
	else
	{
		Local_194.f_157 = "DLC_BTL_Drone_Sounds";
	}
}

int func_450(int iParam0)
{
	if (iParam0 != func_12())
	{
		return Global_2657589[iParam0 /*466*/].f_439.f_1;
	}
	return -1;
}

void func_451(bool bParam0)
{
	if (bParam0)
	{
		if (!func_203())
		{
			unk_0xECDAB41968FF21A8(&Global_1962996, 15);
		}
	}
	else if (func_203())
	{
		unk_0x061B1200C95204CB(&Global_1962996, 15);
	}
}

void func_452(bool bParam0)
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

int func_453(int iParam0)
{
	if (iParam0 == unk_0x93E99A2DBCBA9CFA() && !func_454())
	{
		return Global_2764647.f_1;
	}
	return Global_2648605.f_1399[iParam0 /*3*/].f_1;
}

int func_454()
{
	if (((Global_2764650 != 0 && Global_2764650 == Global_2764651) && Global_2764639 != 3) && Global_2764639 != 1)
	{
		return 0;
	}
	return 1;
}

void func_455()
{
	if (!func_416())
	{
		if (func_41())
		{
			if (func_400())
			{
				if (!unk_0xF0E4B64AC0B5660E() && !unk_0x5835DDABA96BB199())
				{
					func_457("DRONE_TRIG");
				}
			}
			else if (func_194("DRONE_TRIG"))
			{
				unk_0xCD3C8E1022864F65(1);
			}
			if (func_41() || func_399())
			{
				if (unk_0x6BD2D66249562506(2, 176) || unk_0xA2C9DE6085F5645B(2, 176))
				{
					func_391(1);
					func_383(1);
					unk_0xCD3C8E1022864F65(1);
				}
			}
			else if (func_194("DRONE_TRIG"))
			{
				if ((unk_0x6BD2D66249562506(2, 51) || unk_0xA2C9DE6085F5645B(2, 51)) || unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
				{
					Local_194.f_156 = 0;
					func_391(1);
					func_383(1);
					unk_0xCD3C8E1022864F65(1);
				}
			}
		}
		else if ((func_39() && !unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -1420.684f, -3010.617f, -77.99994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0, 1, 0)) && func_400())
		{
			if (!unk_0xF0E4B64AC0B5660E() && !unk_0x5835DDABA96BB199())
			{
				func_457("DRONE_TRIG");
			}
			if (func_194("DRONE_TRIG"))
			{
				if (unk_0x6BD2D66249562506(2, 51) || unk_0xA2C9DE6085F5645B(2, 51))
				{
					Local_194.f_156 = 0;
					func_391(1);
					func_383(1);
					unk_0xCD3C8E1022864F65(1);
				}
			}
		}
		else if (func_194("DRONE_TRIG"))
		{
			unk_0xCD3C8E1022864F65(1);
		}
		if (func_456() || func_41())
		{
			if (func_194("DRONE_TRIG"))
			{
				unk_0xCD3C8E1022864F65(1);
			}
		}
	}
	else if (func_194("DRONE_TRIG"))
	{
		unk_0xCD3C8E1022864F65(1);
	}
}

int func_456()
{
	if ((((unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_60(unk_0xC1A5EC5C986B98AD(), joaat("script_task_go_straight_to_coord")))
	{
		return 1;
	}
	if ((unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) || unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3))
	{
		return 1;
	}
	return 0;
}

void func_457(char* sParam0)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 1, 1, -1);
}

void func_458(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1962996.f_2, 1))
		{
			Global_1962996.f_2 = 0;
			unk_0xECDAB41968FF21A8(&(Global_1962996.f_2), 1);
		}
	}
	else if (BitTest(Global_1962996.f_2, 1))
	{
		unk_0x061B1200C95204CB(&(Global_1962996.f_2), 1);
	}
}

void func_459()
{
	char* sVar0;
	
	if (Local_194.f_45 == -1)
	{
		return;
	}
	if (!func_461(Local_194.f_45) && !func_460(Local_194.f_45))
	{
		return;
	}
	if (unk_0x5E6D8811A0BD0954(Local_96[Local_194.f_45 /*3*/].f_2))
	{
		sVar0 = "scr_xs_props";
		unk_0xEC499B98292618DE(sVar0);
		if (unk_0x7B16A34B3A977485(sVar0))
		{
			if (!unk_0xFB8555459C1C8AE7(Local_194.f_174[Local_194.f_45]))
			{
				unk_0x8DDE86C046BC23A6(sVar0);
				if (func_461(Local_194.f_45))
				{
					Local_194.f_174[Local_194.f_45] = unk_0x785A44AA698F0E32("scr_xs_guided_missile_trail", unk_0xDCE61FCD9D7F205E(Local_96[Local_194.f_45 /*3*/].f_2), 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				}
				else
				{
					Local_194.f_174[Local_194.f_45] = unk_0x785A44AA698F0E32("scr_xs_guided_missile_trail", unk_0xDCE61FCD9D7F205E(Local_96[Local_194.f_45 /*3*/].f_2), 0f, 0.25f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
				}
			}
		}
	}
	else if (unk_0xFB8555459C1C8AE7(Local_194.f_174[Local_194.f_45]))
	{
		unk_0x5F0A993576888020(Local_194.f_174[Local_194.f_45], 0);
	}
}

int func_460(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Local_96[iParam0 /*3*/].f_1 == 8)
		{
			return 1;
		}
	}
	return 0;
}

int func_461(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Local_96[iParam0 /*3*/].f_1 == 4)
		{
			return 1;
		}
	}
	return 0;
}

void func_462()
{
	if (!func_479(6) && !func_465())
	{
		return;
	}
	if (Local_194.f_45 != -1)
	{
		if (unk_0x5E6D8811A0BD0954(Local_96[Local_194.f_45 /*3*/].f_2) && func_17(unk_0xDCE61FCD9D7F205E(Local_96[Local_194.f_45 /*3*/].f_2)))
		{
			if (func_464(Local_194.f_45))
			{
				Local_194.f_157 = "DLC_Arena_Drone_Sounds";
			}
			else if (func_463(Local_194.f_45))
			{
				Local_194.f_157 = "DLC_Arena_Battle_Drone_Sounds";
			}
			else if (func_461(Local_194.f_45))
			{
				Local_194.f_157 = "DLC_Arena_Piloted_Missile_Sounds";
			}
			else if (func_460(Local_194.f_45))
			{
				Local_194.f_157 = "DLC_H4_Piloted_Missile_Sounds";
			}
			else
			{
				Local_194.f_157 = "DLC_BTL_Drone_Sounds";
			}
			if (Local_194.f_46[Local_194.f_45] == -1)
			{
				Local_194.f_46[Local_194.f_45] = unk_0x9F2C1BA4F2BF5CF8();
				unk_0x03AC3DF6C3FAD811(Local_194.f_46[Local_194.f_45], "Flight_Loop", unk_0xDCE61FCD9D7F205E(Local_96[Local_194.f_45 /*3*/].f_2), Local_194.f_157, 0, 0);
				unk_0x30DD80A33ACF3D36(Local_194.f_46[Local_194.f_45], "DroneRotationalSpeed", 1f);
			}
			else
			{
				unk_0x30DD80A33ACF3D36(Local_194.f_46[Local_194.f_45], "DroneRotationalSpeed", 1f);
			}
		}
		else if (Local_194.f_46[Local_194.f_45] != -1)
		{
			unk_0xA13B5B0EF7402391(Local_194.f_46[Local_194.f_45]);
			unk_0x8A1B9F78F1F46A12(Local_194.f_46[Local_194.f_45]);
			Local_194.f_46[Local_194.f_45] = -1;
		}
	}
}

int func_463(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Local_96[iParam0 /*3*/].f_1 == 2)
		{
			return 1;
		}
	}
	return 0;
}

int func_464(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Local_96[iParam0 /*3*/].f_1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_465()
{
	return BitTest(Global_1950108.f_7, 14);
}

void func_466()
{
	int iVar0;
	var uVar1;
	char* sVar2;
	var uVar3;
	var uVar4;
	
	if (Local_194.f_45 == -1)
	{
		return;
	}
	iVar0 = Local_194.f_45;
	if (!func_19(iVar0, 1, 1))
	{
		return;
	}
	if (!func_479(6) && !func_465())
	{
		return;
	}
	if (BitTest(Local_194.f_117, Local_194.f_45))
	{
		uVar1 = func_467(Global_2657589[Local_194.f_45 /*466*/].f_321.f_10);
		if (!func_17(uVar1))
		{
			return;
		}
		sVar2 = "scr_ih_sub";
		unk_0xEC499B98292618DE(sVar2);
		if (unk_0x7B16A34B3A977485(sVar2))
		{
			if (!unk_0xFB8555459C1C8AE7(Local_194.f_207[iVar0]))
			{
				unk_0x8DDE86C046BC23A6(sVar2);
				uVar3 = func_375(iVar0);
				uVar4 = unk_0xD854D152961C41A9(uVar1, uVar3);
				Local_194.f_207[iVar0] = unk_0xCAC5FDE85F08E13F("scr_ih_sub_missile_launch", iVar1, func_374(iVar0), 0f, 0f, 0f, uVar4, 5f, 0, 0, 0);
			}
			else if (!func_25(&(Local_194.f_281[iVar0 /*2*/])))
			{
				func_23(&(Local_194.f_281[iVar0 /*2*/]), 0, 0);
				unk_0xB41C948EFBF498ED(Local_194.f_207[iVar0], "flame", 0.15f, 0);
			}
			if (func_25(&(Local_194.f_281[iVar0 /*2*/])))
			{
				if (func_22(&(Local_194.f_281[iVar0 /*2*/]), 3000, 0))
				{
					if (unk_0xFB8555459C1C8AE7(Local_194.f_207[iVar0]))
					{
						unk_0x5F0A993576888020(Local_194.f_207[iVar0], 0);
					}
					func_21(&(Local_194.f_281[iVar0 /*2*/]));
					unk_0x061B1200C95204CB(&(Local_194.f_117), Local_194.f_45);
				}
				else if (func_22(&(Local_194.f_281[iVar0 /*2*/]), 2000, 0))
				{
					unk_0xB41C948EFBF498ED(Local_194.f_207[iVar0], "flame", 0f, 0);
				}
			}
		}
	}
}

int func_467(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (unk_0x7DE17ACDD8BA2642(Global_1968178[iParam0]))
		{
			return Global_1968178[iParam0];
		}
	}
	return -1;
}

void func_468()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x89DE709C9F3052C5(1))
	{
		iVar1 = unk_0xB09B723333956A0B(1, iVar0);
		switch (iVar1)
		{
			case 186:
				if (!func_479(6))
				{
					func_470(iVar0);
				}
				break;
			
			case 174:
				unk_0x11DE375695504B75(1, iVar0, &iVar2, 2);
				switch (iVar2)
				{
					case 1910624731:
						if (Global_1669394.f_832)
						{
							return;
						}
						func_469(iVar0);
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_469(int iParam0)
{
	struct<3> Var0;
	
	if (!func_479(6) && !func_465())
	{
		return;
	}
	if (unk_0x11DE375695504B75(1, iParam0, &Var0, 3))
	{
		if (Var0.f_1 != func_12())
		{
			Local_194.f_82[Var0.f_1] = Var0.f_2;
			unk_0xECDAB41968FF21A8(&(Local_194.f_117), Var0.f_1);
		}
	}
}

void func_470(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159))
	{
		if (unk_0x11DE375695504B75(1, iParam0, &Var0, 13))
		{
			if (unk_0x7DE17ACDD8BA2642(Var0.f_0) && unk_0x177F7E959D2D410B(Local_194.f_159) == Var0.f_0)
			{
				if (unk_0x7DE17ACDD8BA2642(Var0.f_1))
				{
					if (unk_0x71904BD37B848CAF(Var0.f_1))
					{
						if (unk_0x60A06DE259634304(unk_0x9C8D7679C15E75FF(Var0.f_1)) && unk_0xC1A5EC5C986B98AD() != unk_0x9C8D7679C15E75FF(Var0.f_1))
						{
							Local_194.f_26 = 2;
						}
					}
				}
			}
		}
	}
}

void func_471()
{
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159))
	{
		if (!unk_0x055111B11E6624FD(unk_0x972B1BFB16AD20B5(Local_194.f_159), 0))
		{
			Local_194.f_150 = { unk_0x30BE8A934C020461(unk_0x972B1BFB16AD20B5(Local_194.f_159), 1) };
			Local_194.f_124 = unk_0xD850DD08D5434072(unk_0x972B1BFB16AD20B5(Local_194.f_159));
			if (!func_25(&(Local_194.f_261)))
			{
				func_23(&(Local_194.f_261), 0, 0);
			}
			else if (func_22(&(Local_194.f_261), 1000, 0))
			{
				if (!func_373(Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_432, Local_194.f_150, 0))
				{
					Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_432 = { Local_194.f_150 };
				}
				if (Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_435 != unk_0xD850DD08D5434072(unk_0x972B1BFB16AD20B5(Local_194.f_159)))
				{
					Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_435 = unk_0xD850DD08D5434072(unk_0x972B1BFB16AD20B5(Local_194.f_159));
				}
				func_21(&(Local_194.f_261));
			}
		}
	}
	if (func_17(Local_194.f_163))
	{
		if (unk_0x51DF6895C236B231(Local_194.f_163))
		{
			unk_0x724FFAED1C56CE2B(Local_194.f_163, false, 0);
		}
	}
	if (func_17(Local_194.f_161))
	{
		if (unk_0x51DF6895C236B231(Local_194.f_161))
		{
			unk_0x724FFAED1C56CE2B(Local_194.f_161, false, 0);
		}
	}
}

void func_472()
{
	if (func_479(4))
	{
		if ((((func_138() || func_24()) || func_38()) || (func_30() && !func_31())) || func_16())
		{
			if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
			{
				func_298(unk_0x93E99A2DBCBA9CFA(), 1, 0, 0);
			}
		}
		unk_0x8B438725D591ED78(0, 37, 0);
		if (func_16())
		{
			func_475();
		}
		if (!func_35())
		{
			func_473();
			unk_0x3210A569BAF257BB(0, 19, 1);
			unk_0x3210A569BAF257BB(0, 166, 1);
			unk_0x3210A569BAF257BB(0, 167, 1);
			unk_0x3210A569BAF257BB(0, 168, 1);
			unk_0x3210A569BAF257BB(0, 169, 1);
			unk_0x3210A569BAF257BB(2, 218, 1);
			unk_0x3210A569BAF257BB(2, 219, 1);
			unk_0x3210A569BAF257BB(2, 220, 1);
			unk_0x3210A569BAF257BB(2, 221, 1);
			unk_0x3210A569BAF257BB(2, 205, 1);
			unk_0x3210A569BAF257BB(2, 206, 1);
			unk_0x3210A569BAF257BB(2, 207, 1);
			unk_0x3210A569BAF257BB(2, 208, 1);
			unk_0x3210A569BAF257BB(2, 209, 1);
			unk_0x3210A569BAF257BB(2, 210, 1);
			unk_0x3210A569BAF257BB(2, 202, 1);
			unk_0x3210A569BAF257BB(2, 51, 1);
			unk_0x3210A569BAF257BB(2, 190, 1);
			unk_0x3210A569BAF257BB(2, 189, 1);
			unk_0x3210A569BAF257BB(2, 188, 1);
			unk_0x3210A569BAF257BB(2, 187, 1);
			unk_0x3210A569BAF257BB(2, 201, 1);
			unk_0x3210A569BAF257BB(2, 199, 1);
			unk_0x3210A569BAF257BB(2, 200, 1);
			if (func_16())
			{
				unk_0x3210A569BAF257BB(2, 20, 1);
			}
			if (unk_0x42AAFCB5B7854AA9(0))
			{
				unk_0x3210A569BAF257BB(0, 238, 1);
				unk_0x3210A569BAF257BB(0, 237, 1);
				unk_0x3210A569BAF257BB(2, 235, 1);
				unk_0x3210A569BAF257BB(2, 234, 1);
				unk_0x3210A569BAF257BB(2, 1, 1);
				unk_0x3210A569BAF257BB(2, 174, 1);
				unk_0x3210A569BAF257BB(2, 175, 1);
				unk_0x3210A569BAF257BB(0, 174, 1);
				unk_0x3210A569BAF257BB(0, 175, 1);
				unk_0x3210A569BAF257BB(0, 245, 1);
				unk_0x3210A569BAF257BB(0, 246, 1);
				unk_0x3210A569BAF257BB(0, 247, 1);
				unk_0x3210A569BAF257BB(0, 248, 1);
			}
			if (unk_0xFEE065E56A9BEF3F())
			{
				unk_0x3210A569BAF257BB(0, 201, 1);
				unk_0x3210A569BAF257BB(0, 202, 1);
				unk_0x3210A569BAF257BB(0, 188, 1);
				unk_0x3210A569BAF257BB(0, 187, 1);
				unk_0x3210A569BAF257BB(0, 189, 1);
				unk_0x3210A569BAF257BB(2, 195, 1);
				unk_0x3210A569BAF257BB(2, 196, 1);
				unk_0x3210A569BAF257BB(2, 198, 1);
				unk_0x3210A569BAF257BB(2, 197, 1);
				unk_0x3210A569BAF257BB(2, 217, 1);
			}
		}
	}
}

void func_473()
{
	func_474();
}

void func_474()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 363)
	{
		unk_0x8B438725D591ED78(0, iVar0, 1);
		iVar0++;
	}
}

void func_475()
{
	Global_23131.f_6 = 1;
}

void func_476()
{
	if (BitTest(Local_194.f_5, 28))
	{
		if (!func_25(&(Local_194.f_263)))
		{
			func_23(&(Local_194.f_263), 0, 0);
		}
		else if (func_22(&(Local_194.f_263), 5000, 0))
		{
			unk_0x061B1200C95204CB(&(Local_194.f_5), 28);
			func_21(&(Local_194.f_263));
		}
	}
}

void func_477()
{
	int iVar0;
	
	if (BitTest(Local_194.f_5, 27))
	{
		if (Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_321.f_10 != func_12())
		{
			iVar0 = Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_321.f_10;
		}
		else if (Global_1853755 != func_12())
		{
			iVar0 = Global_1853755;
		}
		else if (func_279(unk_0x93E99A2DBCBA9CFA(), 0))
		{
			if (func_166() != func_12())
			{
				iVar0 = func_166();
			}
		}
		if (iVar0 != func_12())
		{
			if (unk_0xE6DEE82DB0922DF0(iVar0))
			{
				if (unk_0xA26A9A07F761D8F8())
				{
					func_178(iVar0, 0, 1, 0);
					unk_0x061B1200C95204CB(&(Local_194.f_5), 27);
				}
			}
		}
	}
}

void func_478()
{
	struct<3> Var0;
	
	if (func_138())
	{
		if (func_479(1))
		{
			if (func_17(func_345()))
			{
				Var0 = { unk_0x30BE8A934C020461(func_345(), 1) };
				unk_0xA0A3624F57C53342(Var0, 200f, 200f);
				unk_0x13924D38804BAC2A(Local_194.f_150, 60f, 30);
			}
		}
	}
	if (func_479(1) || func_479(4))
	{
		if (unk_0x5E6D8811A0BD0954(Local_194.f_159))
		{
			if (unk_0xF57C1326FD40C8A7(Local_194.f_169) && unk_0x0097C56F4031898F(Local_194.f_169))
			{
				if (func_479(4))
				{
					if (!func_257(Local_194.f_150))
					{
						unk_0xA0A3624F57C53342(Local_194.f_150, 60f, 200f);
						unk_0x3D4DF473D22EE709();
						unk_0xD4E2F1C0CFBCE829(Local_194.f_150, unk_0x7A2C98D06C9C1956(unk_0xDCE61FCD9D7F205E(Local_194.f_159)));
						if ((unk_0xE16824A2A0B2A6D8() % 120) == 0)
						{
							unk_0x13924D38804BAC2A(Local_194.f_150, 60f, 30);
						}
					}
				}
			}
		}
	}
}

bool func_479(int iParam0)
{
	return Local_194.f_241 == iParam0;
}

int func_480()
{
	if (func_485())
	{
		return 1;
	}
	if (!func_306())
	{
		return 1;
	}
	if (unk_0x93E99A2DBCBA9CFA() != func_12())
	{
		if (!func_484())
		{
			if (func_265(unk_0x93E99A2DBCBA9CFA()) && !func_264())
			{
				return 1;
			}
		}
	}
	if (func_200(unk_0x93E99A2DBCBA9CFA()))
	{
		return 1;
	}
	if (func_10(unk_0x93E99A2DBCBA9CFA()))
	{
		return 1;
	}
	if (func_484())
	{
		if (func_483())
		{
			return 1;
		}
		if (func_13(unk_0x93E99A2DBCBA9CFA(), 1, 1))
		{
			return 1;
		}
		if (func_40())
		{
			return 1;
		}
		if (!func_482() && !func_481())
		{
			if (func_22(&(Local_194.f_279), 10000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_21(&(Local_194.f_279));
		}
	}
	return 0;
}

int func_481()
{
	if (Global_1962996.f_22 != func_12())
	{
		if (Global_2657589[Global_1962996.f_22 /*466*/].f_321.f_10 != func_12())
		{
			if (func_17(Global_1968178[Global_2657589[Global_1962996.f_22 /*466*/].f_321.f_10]))
			{
				if (func_19(unk_0x93E99A2DBCBA9CFA(), 1, 1))
				{
					if (unk_0xB7A628320EFF8E47(func_6(unk_0x93E99A2DBCBA9CFA()), unk_0x30BE8A934C020461(Global_1968178[Global_2657589[Global_1962996.f_22 /*466*/].f_321.f_10], 1)) < 490000f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_482()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x1C57E792CD67EF97())
	{
		if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iVar0)))
		{
			if (BitTest(Local_96[iVar0 /*3*/], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_483()
{
	return BitTest(Global_1962996, 22);
}

bool func_484()
{
	return BitTest(Global_1962996.f_2, 9);
}

bool func_485()
{
	return BitTest(Global_1962996, 0);
}

int func_486()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			return 1;
		}
	}
	if (func_493())
	{
		return 1;
	}
	if (Global_2696915)
	{
		return 1;
	}
	if (func_492())
	{
		return 1;
	}
	if (func_491(159))
	{
		if (!func_490())
		{
			return 1;
		}
	}
	if (func_491(157))
	{
		return 1;
	}
	if (!unk_0x67EBFCF2F78761B9())
	{
		return 1;
	}
	if (func_487() != 0)
	{
		if (unk_0x24B651D85CCE5EB4(func_487()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_487()
{
	switch (func_489())
	{
		case 0:
			return func_488();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_488()
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_489()
{
	return Global_32163;
}

bool func_490()
{
	return Global_2683862.f_698;
}

int func_491(int iParam0)
{
	if (unk_0x36D3321E138A43F0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_492()
{
	return Global_2694524;
}

bool func_493()
{
	return Global_2683862.f_693;
}

void func_494()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_495(bool bParam0)
{
	if (!func_484())
	{
		func_502(bParam0);
	}
	else
	{
		func_496();
	}
}

void func_496()
{
	Global_1962996.f_22 = func_12();
	func_21(&(Local_194.f_279));
	func_501(0);
	func_500(0);
	func_499(0);
	func_498(0);
	func_497();
}

void func_497()
{
	unk_0x675D9C12C73D3DE7();
}

void func_498(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1962996.f_2, 9))
		{
			Global_1962996.f_2 = 0;
			unk_0xECDAB41968FF21A8(&(Global_1962996.f_2), 9);
		}
	}
	else if (BitTest(Global_1962996.f_2, 9))
	{
		unk_0x061B1200C95204CB(&(Global_1962996.f_2), 9);
	}
}

void func_499(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1962996, 21))
		{
			unk_0xECDAB41968FF21A8(&Global_1962996, 21);
		}
	}
	else if (BitTest(Global_1962996, 21))
	{
		unk_0x061B1200C95204CB(&Global_1962996, 21);
	}
}

void func_500(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1962996, 22))
		{
			unk_0xECDAB41968FF21A8(&Global_1962996, 22);
		}
	}
	else if (BitTest(Global_1962996, 22))
	{
		unk_0x061B1200C95204CB(&Global_1962996, 22);
	}
}

void func_501(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_307, 31))
		{
			unk_0xECDAB41968FF21A8(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_307), 31);
		}
	}
	else if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_307, 31))
	{
		unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_307), 31);
	}
}

void func_502(bool bParam0)
{
	var uVar0;
	struct<8> Var1;
	var uVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<8> Var14;
	
	if (unk_0x5E6D8811A0BD0954(Local_194.f_159))
	{
		unk_0xC325399A972D4359(Local_194.f_159, 1);
		if (unk_0xFE2AB315FD8C7A6F(Local_194.f_159))
		{
			if (!BitTest(Local_194.f_6, 2))
			{
				if (func_83())
				{
					if (func_17(unk_0xC1A5EC5C986B98AD()))
					{
						unk_0x8A9729B4F41F00E9(unk_0xC1A5EC5C986B98AD(), func_338(), func_337(), func_336(), 1, 0, 1065353216);
					}
					else
					{
						unk_0x06791F908899E862(func_338(), func_337(), func_336(), 1, 0, 1065353216, 0);
					}
					unk_0xCA9F34C06A0529CE(0, 300, unk_0xF2DB717A73826179((200f * Local_194.f_131)));
					unk_0xECDAB41968FF21A8(&(Local_194.f_6), 2);
				}
			}
			unk_0x3EF548873C55CA64();
			uVar0 = unk_0xDCE61FCD9D7F205E(Local_194.f_159);
			unk_0x3298713EEACD1622(uVar0, 0, 1);
			unk_0xEF078F1FEE785D3E(&uVar0);
		}
		else
		{
			unk_0xF05A5F7FFA0C5E2D(Local_194.f_159);
			return;
		}
	}
	if (func_30() && !func_31())
	{
		Var1 = -1;
		Var1.f_6 = 1073741824;
		Var1.f_7 = -1073741824;
		Var1.f_3 = 0;
		Var1.f_4 = 0;
		func_525(&Var1, 11);
	}
	if (func_194("DRONE_TRIG"))
	{
		unk_0xCD3C8E1022864F65(1);
	}
	if (func_17(Local_194.f_161))
	{
		uVar10 = Local_194.f_161;
		unk_0xE9C250FA35A936C8(&uVar10);
	}
	if (unk_0x7DE17ACDD8BA2642(Local_194.f_162))
	{
		unk_0xEF078F1FEE785D3E(&(Local_194.f_162));
	}
	if (unk_0xCE4AAA035282336C(Local_194.f_171))
	{
		unk_0x45533C09A6C9B409(&(Local_194.f_171));
	}
	if (unk_0xCE4AAA035282336C(Local_194.f_172))
	{
		unk_0x45533C09A6C9B409(&(Local_194.f_172));
	}
	if (unk_0x7DE17ACDD8BA2642(Local_194.f_163))
	{
		unk_0x2728CF7242F08BD5(&(Local_194.f_163));
	}
	unk_0x473C524981645659();
	unk_0x7152B1208FF6B120();
	unk_0xE200456884E4F50E();
	unk_0x16F0AA504E7636FB(0f);
	if (func_239())
	{
		func_238(0);
	}
	func_522();
	func_327(1, -1);
	func_521();
	if (func_31())
	{
		func_335(0);
	}
	if (unk_0x5E6D8811A0BD0954(Local_194.f_160))
	{
		uVar11 = unk_0xDCE61FCD9D7F205E(Local_194.f_160);
		unk_0xEF078F1FEE785D3E(&uVar11);
	}
	if (!bParam0)
	{
		if (!unk_0x2AC37494BBF1DB16(Local_194.f_158))
		{
			unk_0x0B34FA69ECCE3927(Local_194.f_158);
		}
		func_520(0);
	}
	func_248(0);
	if (func_519() && (!func_265(unk_0x93E99A2DBCBA9CFA()) || func_264()))
	{
		func_298(unk_0x93E99A2DBCBA9CFA(), 1, 0, 0);
		unk_0x2718E9CC165A99F6(unk_0xC1A5EC5C986B98AD(), false);
	}
	Local_194.f_120 = 0f;
	Local_194.f_121 = 0f;
	Local_194.f_12 = 0;
	Local_194.f_14 = 0;
	Local_194.f_10 = 0;
	Local_194.f_16 = 0;
	func_21(&(Local_194.f_245));
	func_21(&(Local_194.f_247));
	if (!Local_194.f_156)
	{
		func_21(&(Local_194.f_249));
	}
	func_21(&(Local_194.f_253));
	func_21(&(Local_194.f_251));
	func_21(&(Local_194.f_255));
	func_21(&(Local_194.f_259));
	func_21(&(Local_194.f_265));
	func_21(&(Local_194.f_263));
	func_21(&(Local_194.f_261));
	func_21(&(Local_194.f_267));
	func_21(&(Local_194.f_269));
	func_21(&(Local_194.f_271));
	func_21(&(Local_194.f_275));
	func_21(&(Local_194.f_277));
	func_21(&(Local_194.f_257));
	func_21(&(Local_194.f_346));
	if (unk_0x93E99A2DBCBA9CFA() != func_12())
	{
		func_21(&(Local_194.f_281[unk_0x93E99A2DBCBA9CFA() /*2*/]));
	}
	Local_194.f_28 = 0;
	Local_194.f_5 = 0;
	Local_194.f_6 = 0;
	Global_1962996.f_4 = -1;
	func_518(-1f);
	func_445(0f);
	func_245(0);
	func_448(0);
	func_517(0);
	func_446(0);
	func_222(0);
	func_516(0);
	func_176(0);
	func_515(0);
	func_514(0);
	func_513(0);
	func_72(1);
	func_292(0);
	func_290(0);
	func_296(0);
	func_451(0);
	func_372(0f, 0f, 0f, 0f, 0f, 0f);
	func_512();
	Global_1962996.f_24 = -1;
	unk_0x061B1200C95204CB(&Global_2764620, 0);
	unk_0x061B1200C95204CB(&Global_1969893, 0);
	func_383(0);
	if (!func_511(0))
	{
		func_288();
	}
	if (func_75())
	{
		func_108("SET_WARNING_IS_VISIBLE", 0);
		if (func_138() || func_16())
		{
			if (Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_321.f_10 != func_12() && unk_0xE6DEE82DB0922DF0(Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_321.f_10))
			{
				iVar12 = Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_321.f_10;
			}
			else if ((func_138() && Global_1853755 != func_12()) && unk_0xE6DEE82DB0922DF0(Global_1853755))
			{
				iVar12 = Global_1853755;
			}
			else if ((func_16() && Global_1853756 != func_12()) && unk_0xE6DEE82DB0922DF0(Global_1853756))
			{
				iVar12 = Global_1853756;
			}
			else if (func_279(unk_0x93E99A2DBCBA9CFA(), 0))
			{
				if (func_166() != func_12() && unk_0xE6DEE82DB0922DF0(func_166()))
				{
					iVar12 = func_166();
				}
			}
			if (iVar12 != func_12())
			{
				if (unk_0xE6DEE82DB0922DF0(iVar12) && unk_0xA26A9A07F761D8F8())
				{
					if (func_138())
					{
						func_178(iVar12, 0, 1, 0);
					}
					else if (func_16())
					{
						func_178(iVar12, 0, 8, Global_1581970);
					}
					unk_0xECDAB41968FF21A8(&(Local_194.f_5), 28);
				}
				else
				{
					unk_0xECDAB41968FF21A8(&(Local_194.f_5), 27);
				}
			}
			else
			{
				unk_0xECDAB41968FF21A8(&(Local_194.f_5), 27);
			}
		}
		else if (func_30() || func_160())
		{
			func_21(&Global_1962942);
			func_510(300000);
			func_509(1);
			unk_0xECDAB41968FF21A8(&(Local_194.f_5), 28);
		}
		func_390(0);
		func_389(0);
		unk_0x061B1200C95204CB(&(Local_96[unk_0x93E99A2DBCBA9CFA() /*3*/]), 0);
		iVar13 = unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Local_194.f_173));
		if (func_30() || func_160())
		{
			Var14.f_7 = Global_786547;
			Var14.f_1 = Global_786547.f_1;
			if (unk_0x1758F8A8511510AB())
			{
				Var14.f_0 = Global_4718592.f_113724;
			}
			else
			{
				Var14.f_0 = func_507(unk_0x93E99A2DBCBA9CFA());
			}
			Var14.f_6 = 1;
			Var14.f_4 = Local_194.f_27;
			Var14.f_5 = Local_194.f_29;
			Var14.f_3 = iVar13;
			Var14.f_2 = Local_194.f_26;
			unk_0x7E7C67E1F595F1D1(&Var14);
		}
		else
		{
			unk_0x3467946723779269(iVar13, Local_194.f_26, Local_194.f_27);
		}
		if (func_16())
		{
			func_505(2, func_506());
		}
	}
	func_504();
	func_391(0);
	func_263(0);
	func_185(0);
	unk_0xD0AE101DBAA43C98(&(Local_194.f_170));
	if (func_180(1) != 0)
	{
		unk_0xE0A291F406691F03(func_180(1));
	}
	if (func_180(0) != 0)
	{
		unk_0xE0A291F406691F03(func_180(0));
	}
	func_384(0);
	func_327(1, -1);
	Local_194.f_26 = 0;
	Local_194.f_27 = 0;
	Local_194.f_29 = 0;
	unk_0xE7282371418F8E0E(Local_194.f_28);
	if (unk_0xFB8555459C1C8AE7(Local_194.f_174[unk_0x93E99A2DBCBA9CFA()]))
	{
		unk_0x5F0A993576888020(Local_194.f_174[unk_0x93E99A2DBCBA9CFA()], 0);
	}
	if (unk_0xFB8555459C1C8AE7(Local_194.f_207[unk_0x93E99A2DBCBA9CFA()]))
	{
		unk_0x5F0A993576888020(Local_194.f_207[unk_0x93E99A2DBCBA9CFA()], 0);
	}
	if (!bParam0)
	{
		if (!func_164(unk_0x93E99A2DBCBA9CFA()))
		{
			func_503(0f, 0f, 0f, 0f);
		}
		Global_1962996.f_2 = 0;
		func_497();
	}
	else
	{
		func_444(0, 1);
	}
}

void func_503(struct<3> Param0, float fParam3)
{
	if (!func_373(Global_1962996.f_10, Param0, 0))
	{
		Global_1962996.f_10 = { Param0 };
		Global_1962996.f_7 = fParam3;
	}
}

void func_504()
{
	int iVar0;
	
	if (!unk_0x209C5E3492025E4B(Local_194.f_41))
	{
		unk_0xA13B5B0EF7402391(Local_194.f_41);
		unk_0x8A1B9F78F1F46A12(Local_194.f_41);
		Local_194.f_41 = -1;
	}
	if (!unk_0x209C5E3492025E4B(Local_194.f_30))
	{
		unk_0xA13B5B0EF7402391(Local_194.f_30);
		unk_0x8A1B9F78F1F46A12(Local_194.f_30);
		Local_194.f_30 = -1;
	}
	if (!unk_0x209C5E3492025E4B(Local_194.f_31))
	{
		unk_0xA13B5B0EF7402391(Local_194.f_31);
		unk_0x8A1B9F78F1F46A12(Local_194.f_31);
		Local_194.f_31 = -1;
	}
	if (!unk_0x209C5E3492025E4B(Local_194.f_32))
	{
		unk_0xA13B5B0EF7402391(Local_194.f_32);
		unk_0x8A1B9F78F1F46A12(Local_194.f_32);
		Local_194.f_32 = -1;
	}
	if (!unk_0x209C5E3492025E4B(Local_194.f_33))
	{
		unk_0xA13B5B0EF7402391(Local_194.f_33);
		unk_0x8A1B9F78F1F46A12(Local_194.f_33);
		Local_194.f_33 = -1;
	}
	if (!unk_0x209C5E3492025E4B(Local_194.f_34))
	{
		unk_0xA13B5B0EF7402391(Local_194.f_34);
		unk_0x8A1B9F78F1F46A12(Local_194.f_34);
		Local_194.f_34 = -1;
	}
	if (!unk_0x209C5E3492025E4B(Local_194.f_40))
	{
		unk_0xA13B5B0EF7402391(Local_194.f_40);
		unk_0x8A1B9F78F1F46A12(Local_194.f_40);
		Local_194.f_40 = -1;
	}
	if (!unk_0x209C5E3492025E4B(Local_194.f_39))
	{
		unk_0xA13B5B0EF7402391(Local_194.f_39);
		unk_0x8A1B9F78F1F46A12(Local_194.f_39);
		Local_194.f_39 = -1;
	}
	if (!unk_0x209C5E3492025E4B(Local_194.f_38))
	{
		unk_0xA13B5B0EF7402391(Local_194.f_38);
		unk_0x8A1B9F78F1F46A12(Local_194.f_38);
		Local_194.f_38 = -1;
	}
	if (!unk_0x209C5E3492025E4B(Local_194.f_37))
	{
		unk_0xA13B5B0EF7402391(Local_194.f_37);
		unk_0x8A1B9F78F1F46A12(Local_194.f_37);
		Local_194.f_37 = -1;
	}
	if (!unk_0x209C5E3492025E4B(Local_194.f_36))
	{
		unk_0xA13B5B0EF7402391(Local_194.f_36);
		unk_0x8A1B9F78F1F46A12(Local_194.f_36);
		Local_194.f_36 = -1;
	}
	if (!unk_0x209C5E3492025E4B(Local_194.f_35))
	{
		unk_0xA13B5B0EF7402391(Local_194.f_35);
		unk_0x8A1B9F78F1F46A12(Local_194.f_35);
		Local_194.f_35 = -1;
	}
	if (!unk_0x209C5E3492025E4B(Local_194.f_42))
	{
		unk_0xA13B5B0EF7402391(Local_194.f_42);
		unk_0x8A1B9F78F1F46A12(Local_194.f_42);
		Local_194.f_42 = -1;
	}
	if (!unk_0x209C5E3492025E4B(Local_194.f_43))
	{
		unk_0xA13B5B0EF7402391(Local_194.f_43);
		unk_0x8A1B9F78F1F46A12(Local_194.f_43);
		Local_194.f_43 = -1;
	}
	if (!unk_0x209C5E3492025E4B(Local_194.f_81))
	{
		unk_0xA13B5B0EF7402391(Local_194.f_81);
		unk_0x8A1B9F78F1F46A12(Local_194.f_81);
		Local_194.f_81 = -1;
	}
	if (!unk_0x209C5E3492025E4B(Local_194.f_115))
	{
		unk_0xA13B5B0EF7402391(Local_194.f_115);
		unk_0x8A1B9F78F1F46A12(Local_194.f_115);
		Local_194.f_115 = -1;
	}
	if (func_484())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_194.f_46[iVar0] != -1)
			{
				unk_0xA13B5B0EF7402391(Local_194.f_46[iVar0]);
				unk_0x8A1B9F78F1F46A12(Local_194.f_46[iVar0]);
				Local_194.f_46[iVar0] = -1;
			}
			iVar0++;
		}
	}
	func_157();
	if (unk_0xD19C2C73F4D74992("DLC_BTL_Hacker_Drone_HUD_Scene"))
	{
		unk_0x3FA8C73B5856A3E4("DLC_BTL_Hacker_Drone_HUD_Scene");
	}
	if (unk_0xD19C2C73F4D74992("dlc_aw_arena_piloted_missile_scene"))
	{
		unk_0x3FA8C73B5856A3E4("dlc_aw_arena_piloted_missile_scene");
	}
	if (unk_0xD19C2C73F4D74992("DLC_Arena_Battle_Drone_HUD_Scene"))
	{
		unk_0x3FA8C73B5856A3E4("DLC_Arena_Battle_Drone_HUD_Scene");
	}
	if (unk_0xD19C2C73F4D74992("DLC_Arena_Spectator_Drone_HUD_Scene"))
	{
		unk_0x3FA8C73B5856A3E4("DLC_Arena_Spectator_Drone_HUD_Scene");
	}
	if (unk_0xD19C2C73F4D74992("dlc_hei4_submarine_guided_missile_Scene"))
	{
		unk_0x3FA8C73B5856A3E4("dlc_hei4_submarine_guided_missile_Scene");
	}
}

void func_505(int iParam0, var uParam1)
{
	if (Global_2793044.f_349 > 0 || Global_2793044.f_349.f_1 > 0)
	{
		unk_0x35BBD457E67A2BDB(iParam0, uParam1, Global_2793044.f_349, Global_2793044.f_349.f_1);
	}
	func_414();
}

bool func_506()
{
	return Global_1853756 == unk_0x93E99A2DBCBA9CFA();
}

int func_507(int iParam0)
{
	if (func_158(iParam0) == 243)
	{
		return func_508(iParam0);
	}
	return -1;
}

int func_508(int iParam0)
{
	if (func_159(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_182;
	}
	return -1;
}

void func_509(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_365, 20))
		{
			unk_0xECDAB41968FF21A8(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_365), 20);
		}
	}
	else if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_365, 20))
	{
		unk_0x061B1200C95204CB(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_365), 20);
	}
}

void func_510(int iParam0)
{
	if (Global_1962996.f_5 != iParam0)
	{
		Global_1962996.f_5 = iParam0;
	}
}

bool func_511(int iParam0)
{
	return Local_194.f_242 == iParam0;
}

void func_512()
{
	if (func_172())
	{
		unk_0x061B1200C95204CB(&Global_1962996, 7);
	}
}

void func_513(bool bParam0)
{
	if (bParam0)
	{
		if (func_75())
		{
			if (!BitTest(Global_1962996, 16))
			{
				unk_0xECDAB41968FF21A8(&Global_1962996, 16);
			}
		}
	}
	else if (BitTest(Global_1962996, 16))
	{
		unk_0x061B1200C95204CB(&Global_1962996, 16);
	}
}

void func_514(bool bParam0)
{
	if (bParam0)
	{
		if (!func_485())
		{
			unk_0xECDAB41968FF21A8(&Global_1962996, 6);
		}
	}
	else if (func_485())
	{
		unk_0x061B1200C95204CB(&Global_1962996, 6);
	}
}

void func_515(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1962996, 3))
		{
			unk_0xECDAB41968FF21A8(&Global_1962996, 3);
		}
	}
	else if (BitTest(Global_1962996, 3))
	{
		unk_0x061B1200C95204CB(&Global_1962996, 3);
	}
}

void func_516(bool bParam0)
{
	if (bParam0)
	{
		if (!func_395())
		{
			unk_0xECDAB41968FF21A8(&Global_1962996, 10);
		}
	}
	else if (func_395())
	{
		unk_0x061B1200C95204CB(&Global_1962996, 10);
	}
}

void func_517(bool bParam0)
{
	if (bParam0)
	{
		if (unk_0x24B651D85CCE5EB4(unk_0x14580F20CBCE4FA9("AM_MP_DRONE")) > 0)
		{
			if (!func_485())
			{
				unk_0xECDAB41968FF21A8(&Global_1962996, 0);
			}
		}
	}
	else if (func_485())
	{
		unk_0x061B1200C95204CB(&Global_1962996, 0);
	}
}

void func_518(float fParam0)
{
	if (Global_1962996.f_9 != fParam0)
	{
		Global_1962996.f_9 = fParam0;
	}
}

int func_519()
{
	if (!func_306())
	{
		return 0;
	}
	if (func_11(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	if (!func_75())
	{
		return 0;
	}
	if (func_83())
	{
		return 0;
	}
	return 1;
}

void func_520(bool bParam0)
{
	if (bParam0)
	{
		if (!func_31())
		{
			unk_0xECDAB41968FF21A8(&Global_1962996, 24);
		}
	}
	else if (func_31())
	{
		unk_0x061B1200C95204CB(&Global_1962996, 24);
	}
}

void func_521()
{
	if (unk_0xF57C1326FD40C8A7(Local_194.f_169))
	{
		unk_0x42B9FA814615C4F9(Local_194.f_169, 0);
		unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
		if (!func_37() || BitTest(Local_194.f_6, 0))
		{
			unk_0xA2EC5ACB2B5D92A4();
		}
	}
}

void func_522()
{
	if (unk_0xF57C1326FD40C8A7(Local_194.f_169))
	{
		if (func_524(unk_0x93E99A2DBCBA9CFA()))
		{
			func_523(0);
		}
	}
}

void func_523(bool bParam0)
{
	if (bParam0)
	{
		Global_1950108.f_3654 = bParam0;
	}
	if (!Global_1950108.f_3653)
	{
		Global_1950108.f_3653 = 1;
	}
}

int func_524(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
		else if ((Global_1575060 && iParam0 == unk_0x93E99A2DBCBA9CFA()) && func_19(iParam0, 1, 0))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

void func_525(var uParam0, int iParam1)
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	int iVar10;
	
	Var0.f_5 = 1073741824;
	Var0.f_6 = -1073741824;
	Var0.f_0 = -910411066;
	Var0.f_1 = unk_0x93E99A2DBCBA9CFA();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar8 = false;
	if (iParam1 == 11)
	{
		if (BitTest(Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_439, 1))
		{
			unk_0x061B1200C95204CB(&(Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_439), 1);
			bVar8 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_25(&(uParam0->f_1)))
	{
		func_23(&(uParam0->f_1), 0, 0);
	}
	bVar9 = true;
	if (*uParam0 == iParam1 && !bVar8)
	{
		if (func_25(&(uParam0->f_1)) && !func_22(&(uParam0->f_1), 1000, 0))
		{
			bVar9 = false;
		}
		else
		{
			func_21(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_21(&(uParam0->f_1));
	}
	if (bVar9)
	{
		iVar10 = func_8(unk_0x93E99A2DBCBA9CFA());
		if (iVar10 != -1)
		{
			unk_0x46F55A5B9F053761(1, &Var0, 8, iVar10);
			uParam0->f_5 = 1;
		}
	}
}

void func_526(struct<9> Param0, var uParam9, var uParam10, var uParam11)
{
	unk_0xCF50389093DECE87(32, 0, Param0.f_0);
	func_535(0, -1, 0);
	unk_0xAC5E62CB7808A363(&uLocal_193, 1, 0);
	unk_0x10BF12101F9D80A4(&Local_96, 97, 0);
	if (!func_534())
	{
		func_495(0);
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		if (!func_484())
		{
			Local_194.f_135 = { Param0.f_2 };
			switch (Param0.f_1)
			{
				case 1:
					if (unk_0x7DE17ACDD8BA2642(func_345()) && !unk_0x055111B11E6624FD(func_345(), 0))
					{
						Local_194.f_144 = { unk_0xF2A6E8EA57F9D501(unk_0x30BE8A934C020461(func_345(), 1), unk_0xD850DD08D5434072(func_345()), 0f, 1.6f, 2.9f) };
						Local_194.f_138 = { Local_194.f_144 };
					}
					func_458(1);
					Local_96[unk_0x93E99A2DBCBA9CFA() /*3*/].f_1 = 1;
					Global_1914091[unk_0x93E99A2DBCBA9CFA() /*297*/].f_97 = 1;
					break;
				
				case 2:
					func_533(1);
					Local_194.f_144 = { Param0.f_5 };
					Local_96[unk_0x93E99A2DBCBA9CFA() /*3*/].f_1 = 2;
					Global_1914091[unk_0x93E99A2DBCBA9CFA() /*297*/].f_97 = 2;
					break;
				
				case 3:
					func_532(1);
					Local_194.f_144 = { Param0.f_5 };
					Local_96[unk_0x93E99A2DBCBA9CFA() /*3*/].f_1 = 3;
					Global_1914091[unk_0x93E99A2DBCBA9CFA() /*297*/].f_97 = 3;
					break;
				
				case 4:
					func_452(1);
					Local_194.f_144 = { Param0.f_5 };
					Local_96[unk_0x93E99A2DBCBA9CFA() /*3*/].f_1 = 4;
					Global_1914091[unk_0x93E99A2DBCBA9CFA() /*297*/].f_97 = 4;
					break;
				
				case 5:
					func_531(1);
					Local_194.f_144 = { Param0.f_5 };
					Local_96[unk_0x93E99A2DBCBA9CFA() /*3*/].f_1 = 5;
					Global_1914091[unk_0x93E99A2DBCBA9CFA() /*297*/].f_97 = 5;
					break;
				
				case 6:
					func_530(1);
					Local_194.f_144 = { Param0.f_5 };
					Local_96[unk_0x93E99A2DBCBA9CFA() /*3*/].f_1 = 6;
					Global_1914091[unk_0x93E99A2DBCBA9CFA() /*297*/].f_97 = 6;
					break;
				
				case 8:
					func_529(1);
					Local_194.f_144 = { Param0.f_5 };
					Local_96[unk_0x93E99A2DBCBA9CFA() /*3*/].f_1 = 8;
					Global_1914091[unk_0x93E99A2DBCBA9CFA() /*297*/].f_97 = 8;
					break;
				
				case 9:
					func_498(1);
					Local_96[unk_0x93E99A2DBCBA9CFA() /*3*/].f_1 = 9;
					Global_1914091[unk_0x93E99A2DBCBA9CFA() /*297*/].f_97 = 9;
					break;
				
				default:
					func_528(1);
					Local_194.f_144 = { Param0.f_5 };
					break;
			}
			Local_194.f_141 = { Param0.f_8 };
			if (func_257(func_404()))
			{
				func_372(Local_194.f_144, 0f, 0f, 0f);
			}
		}
	}
	else
	{
		func_495(0);
	}
	if (!func_484())
	{
		func_444(1, 1);
	}
	else
	{
		func_527();
	}
}

void func_527()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_194.f_46[iVar0] = -1;
		iVar0++;
	}
	func_383(6);
}

void func_528(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1962996.f_2, 0))
		{
			Global_1962996.f_2 = 0;
			unk_0xECDAB41968FF21A8(&(Global_1962996.f_2), 0);
		}
	}
	else if (BitTest(Global_1962996.f_2, 0))
	{
		unk_0x061B1200C95204CB(&(Global_1962996.f_2), 0);
	}
}

void func_529(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1962996.f_2, 8))
		{
			Global_1962996.f_2 = 0;
			unk_0xECDAB41968FF21A8(&(Global_1962996.f_2), 8);
		}
	}
	else if (BitTest(Global_1962996.f_2, 8))
	{
		unk_0x061B1200C95204CB(&(Global_1962996.f_2), 8);
	}
}

void func_530(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1962996.f_2, 6))
		{
			Global_1962996.f_2 = 0;
			unk_0xECDAB41968FF21A8(&(Global_1962996.f_2), 6);
		}
	}
	else if (BitTest(Global_1962996.f_2, 6))
	{
		unk_0x061B1200C95204CB(&(Global_1962996.f_2), 6);
	}
}

void func_531(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1962996.f_2, 5))
		{
			Global_1962996.f_2 = 0;
			unk_0xECDAB41968FF21A8(&(Global_1962996.f_2), 5);
		}
	}
	else if (BitTest(Global_1962996.f_2, 5))
	{
		unk_0x061B1200C95204CB(&(Global_1962996.f_2), 5);
	}
}

void func_532(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1962996.f_2, 3))
		{
			Global_1962996.f_2 = 0;
			unk_0xECDAB41968FF21A8(&(Global_1962996.f_2), 3);
		}
	}
	else if (BitTest(Global_1962996.f_2, 3))
	{
		unk_0x061B1200C95204CB(&(Global_1962996.f_2), 3);
	}
}

void func_533(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1962996.f_2, 2))
		{
			Global_1962996.f_2 = 0;
			unk_0xECDAB41968FF21A8(&(Global_1962996.f_2), 2);
		}
	}
	else if (BitTest(Global_1962996.f_2, 2))
	{
		unk_0x061B1200C95204CB(&(Global_1962996.f_2), 2);
	}
}

int func_534()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xA26A9A07F761D8F8())
		{
			return 0;
		}
		if (unk_0x0C8B35057DDAA980())
		{
			return 1;
		}
		if (func_493())
		{
			return 0;
		}
		if (func_491(157))
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

int func_535(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xA1089192E8AE61F4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_497();
			}
			else
			{
				return 0;
			}
		}
		if (!func_536(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA26A9A07F761D8F8())
				{
					if (!bParam2)
					{
						func_497();
					}
					else
					{
						return 0;
					}
				}
				if (func_493())
				{
					if (!bParam2)
					{
						func_497();
					}
					else
					{
						return 0;
					}
				}
				if (func_491(157))
				{
					if (!bParam2)
					{
						func_497();
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
					func_497();
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
				func_497();
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
			func_497();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_536(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

