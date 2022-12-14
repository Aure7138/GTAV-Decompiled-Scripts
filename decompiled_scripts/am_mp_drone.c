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
	struct<3> Local_94[32];
	var uLocal_191 = 0;
	struct<349> Local_192 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1069547520, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
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
	if (unk_0x9315DBF7D972F07A())
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
		if (unk_0x54E30A65F4FA4962())
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
	Local_192.f_45++;
	if (Local_192.f_45 >= 32)
	{
		Local_192.f_45 = 0;
	}
}

void func_4()
{
	if (Local_192.f_45 != -1)
	{
		if (unk_0x90F6E2F6488B98BA(Local_94[Local_192.f_45 /*3*/].f_2))
		{
			if (Global_1911933[unk_0x9E2D6C50374FCFA9() /*260*/].f_60[Local_192.f_45] != unk_0xE8BBC6CC2C60F24A(Local_94[Local_192.f_45 /*3*/].f_2))
			{
				Global_1911933[unk_0x9E2D6C50374FCFA9() /*260*/].f_60[Local_192.f_45] = unk_0xE8BBC6CC2C60F24A(Local_94[Local_192.f_45 /*3*/].f_2);
			}
		}
	}
}

void func_5()
{
	int iVar0;
	
	iVar0 = unk_0xA1087A6350CD9244(Local_192.f_45);
	if (unk_0x9E2D6C50374FCFA9() != iVar0)
	{
		if (func_19(iVar0, 1, 1))
		{
			if (func_17(func_18()))
			{
				if (BitTest(Local_192.f_7, Local_192.f_45))
				{
					if (!unk_0x976D40337FCB1481(iVar0) && !unk_0x715C12FF862F6649(iVar0, "AM_MP_DRONE", 0))
					{
						unk_0xB0550BC91B0159D6(&(Local_192.f_7), Local_192.f_45);
					}
				}
				if (func_14(iVar0, 0))
				{
					if (!BitTest(Local_192.f_7, Local_192.f_45) && func_9(iVar0))
					{
						func_7(iVar0, 1);
						unk_0xAEBA172874A3DEFC(Local_192.f_159, iVar0, 1);
						unk_0xCED9E32812D6C7C7(&(Local_192.f_7), Local_192.f_45);
					}
				}
				else if ((unk_0xB7A628320EFF8E47(func_6(iVar0), Local_192.f_150) > 504100f && !func_479(1)) && !func_479(3))
				{
					if (BitTest(Local_192.f_7, Local_192.f_45))
					{
						func_7(iVar0, 0);
						unk_0xAEBA172874A3DEFC(Local_192.f_159, iVar0, 0);
						unk_0xB0550BC91B0159D6(&(Local_192.f_7), Local_192.f_45);
						unk_0xB0550BC91B0159D6(&(Local_192.f_8), Local_192.f_45);
					}
				}
			}
			else if (func_14(iVar0, 1) && func_9(iVar0))
			{
				if (!BitTest(Local_192.f_8, Local_192.f_45))
				{
					func_7(iVar0, 1);
					unk_0xCED9E32812D6C7C7(&(Local_192.f_8), Local_192.f_45);
				}
			}
			else if (BitTest(Local_192.f_8, Local_192.f_45))
			{
				func_7(iVar0, 0);
				unk_0xB0550BC91B0159D6(&(Local_192.f_8), Local_192.f_45);
				unk_0xB0550BC91B0159D6(&(Local_192.f_7), Local_192.f_45);
			}
		}
	}
}

Vector3 func_6(int iParam0)
{
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(iParam0), 0);
}

void func_7(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = -922462511;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = iParam1;
	iVar3 = func_8(iParam0);
	if (!iVar3 == 0)
	{
		unk_0x2700C00F82C16BF0(1, &Var0, 3, iVar3);
	}
}

var func_8(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xCED9E32812D6C7C7(&uVar0, iParam0);
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
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 11))
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0)
{
	if (iParam0 != func_12() && func_19(iParam0, 1, 1))
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 3);
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
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
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
				if (unk_0xB7A628320EFF8E47(Var0, unk_0x6B62510F212526DC(func_15(), 1)) < 490000f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xB7A628320EFF8E47(Var0, Local_192.f_150) < 490000f)
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	if (Global_1853194 != func_12())
	{
		if (unk_0xE5965CDF24F93A9F(Global_1640763))
		{
			return Global_1640763;
		}
		if (unk_0xE5965CDF24F93A9F(Global_1963860[Global_1853194]))
		{
			return Global_1963860[Global_1853194];
		}
	}
	return -1;
}

bool func_16()
{
	return BitTest(Global_1958711.f_2, 8);
}

int func_17(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_18()
{
	if (unk_0x9E2D6C50374FCFA9() != -1)
	{
		return Global_1958711.f_20;
	}
	return -1;
}

int func_19(int iParam0, bool bParam1, bool bParam2)
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

void func_20()
{
	int iVar0;
	
	if (Local_192.f_156)
	{
		if (func_25(&(Local_192.f_249)))
		{
			if (func_24())
			{
				iVar0 = Global_262145.f_25339;
			}
			else
			{
				iVar0 = Global_262145.f_24692;
			}
			if (func_22(&(Local_192.f_249), iVar0, 0))
			{
				func_21(&(Local_192.f_249));
				Local_192.f_18 = 100;
				unk_0xB0550BC91B0159D6(&(Local_192.f_5), 4);
				unk_0xB0550BC91B0159D6(&(Local_192.f_5), 3);
				unk_0xB0550BC91B0159D6(&(Local_192.f_5), 24);
				Local_192.f_156 = 0;
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

void func_23(var uParam0, bool bParam1, bool bParam2)
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

bool func_24()
{
	return BitTest(Global_1958711.f_2, 2);
}

bool func_25(var uParam0)
{
	return uParam0->f_1;
}

void func_26()
{
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159))
	{
		if (unk_0x07B2F8356DC13CF4(Local_192.f_159))
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
			unk_0xC31EECA11005273C(Local_192.f_159);
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
	if (func_30() && func_28(unk_0x9E2D6C50374FCFA9()))
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
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_29(Global_2689235[iParam0 /*453*/].f_318.f_6) == 17;
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
	}
	return -1;
}

bool func_30()
{
	return BitTest(Global_1958711.f_2, 5);
}

bool func_31()
{
	return BitTest(Global_1958711, 24);
}

bool func_32()
{
	return BitTest(Global_1958711, 16);
}

void func_33()
{
	int iVar0;
	
	unk_0xAC765EF46E85A446(9);
	unk_0xAC765EF46E85A446(7);
	unk_0xAC765EF46E85A446(8);
	unk_0xC43E67C9BA871ECB();
	unk_0x7653D561C9574763(0, 199, 1);
	unk_0x7653D561C9574763(0, 200, 1);
	func_80();
	func_78();
	func_71(1);
	if (!BitTest(Local_192.f_5, 1))
	{
		if (!func_41() && !func_40())
		{
			if ((func_39() || func_24()) || func_38())
			{
				unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
			}
		}
		if (unk_0x90F6E2F6488B98BA(Local_192.f_159))
		{
			unk_0x823AC5A743053194(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 1);
		}
		if (unk_0x78D9ADD511FEAD8B(Local_192.f_34))
		{
			Local_192.f_34 = unk_0xA9ADCC8D104AA552();
			unk_0x91DFC8F68F6D9B05(Local_192.f_34, "HUD_Static_Loop", Local_192.f_157, 1);
		}
		if (!func_37())
		{
			unk_0xF7A14A1A76B6DD17(0, 300, 100);
			unk_0x5C3549D308EC0B7F(func_36());
			unk_0xCED9E32812D6C7C7(&(Local_192.f_6), 0);
		}
		unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 1);
	}
	else if (!func_25(&(Local_192.f_245)))
	{
		func_23(&(Local_192.f_245), 0, 0);
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
		if (func_22(&(Local_192.f_245), iVar0, 0) || func_37())
		{
			if (Local_192.f_38 == -1)
			{
				if (unk_0x78D9ADD511FEAD8B(Local_192.f_38))
				{
					Local_192.f_38 = unk_0xA9ADCC8D104AA552();
					unk_0x91DFC8F68F6D9B05(Local_192.f_38, "HUD_Disconnect", Local_192.f_157, 1);
				}
			}
			func_384(1);
			func_383(7);
		}
	}
}

bool func_34()
{
	return Global_2815059.f_342;
}

bool func_35()
{
	return BitTest(Global_1958711.f_2, 4);
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
	return BitTest(Global_1958711, 20);
}

bool func_38()
{
	return BitTest(Global_1958711.f_2, 3);
}

bool func_39()
{
	return BitTest(Global_1958711, 11);
}

bool func_40()
{
	return Global_2787908;
}

int func_41()
{
	if ((func_70(unk_0x9E2D6C50374FCFA9(), 0) && Global_1581350 == 1) && func_42())
	{
		return 1;
	}
	return 0;
}

int func_42()
{
	char* sVar0;
	
	if ((Global_1581350 != -1 || Global_1581356 != -1) || Global_1581359 != -1)
	{
		sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
		if (func_62(unk_0xE2D3D51028F0428A()))
		{
			sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
		}
		if ((((((((unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), sVar0, "enter_left", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), sVar0, "enter", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), sVar0, "exit", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), sVar0, "exit_left", 3)) || func_60(unk_0xE2D3D51028F0428A(), joaat("script_task_go_straight_to_coord")))
		{
			return 0;
		}
		if (((((((((!unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) && !unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), sVar0, "base", 3)) && !unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), sVar0, "idle_a", 3)) && !unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), sVar0, "idle_b", 3)) && !unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), sVar0, "idle_c", 3))
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
	
	if (func_59(unk_0x9E2D6C50374FCFA9()))
	{
		iVar0 = func_58(unk_0x9E2D6C50374FCFA9());
		if (func_19(iVar0, 0, 1))
		{
			if ((((((func_11(iVar0) && func_29(func_57(iVar0)) == 4) && unk_0xE5965CDF24F93A9F(unk_0x407E03586628E458(iVar0))) && !unk_0xF68107C40359970C(unk_0x407E03586628E458(iVar0))) && unk_0xD5C6B5E3B93A5EDC(unk_0x407E03586628E458(iVar0), 0)) && unk_0xE5965CDF24F93A9F(unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(iVar0), 0))) && func_56(unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(iVar0), 0)))
			{
				return 1;
			}
			if (!func_55(Global_4718592.f_116524))
			{
				if (func_59(iVar0))
				{
					if (func_54(iVar0))
					{
						return 1;
					}
					else if (func_11(unk_0x9E2D6C50374FCFA9()) || func_53())
					{
						return 1;
					}
				}
			}
		}
	}
	if (Global_1958740)
	{
		return 1;
	}
	if (func_52(unk_0x9E2D6C50374FCFA9()))
	{
		iVar0 = func_51(unk_0x9E2D6C50374FCFA9());
		if (func_19(iVar0, 0, 1))
		{
			if ((((((func_11(iVar0) && func_29(func_57(iVar0)) == 9) && unk_0xE5965CDF24F93A9F(unk_0x407E03586628E458(iVar0))) && !unk_0xF68107C40359970C(unk_0x407E03586628E458(iVar0))) && unk_0xD5C6B5E3B93A5EDC(unk_0x407E03586628E458(iVar0), 0)) && unk_0xE5965CDF24F93A9F(unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(iVar0), 0))) && unk_0x15CAA6D7B11F1A7C(unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(iVar0), 0)) == joaat("avenger"))
			{
				return 1;
			}
			if (func_50(iVar0))
			{
				return 1;
			}
			else if (func_11(unk_0x9E2D6C50374FCFA9()) || func_53())
			{
				return 1;
			}
		}
	}
	if (func_70(unk_0x9E2D6C50374FCFA9(), 0))
	{
		iVar0 = func_49(unk_0x9E2D6C50374FCFA9());
		if (func_19(iVar0, 0, 1))
		{
			if ((((Global_1853193 != func_12() && func_11(Global_1853193)) && func_29(func_57(Global_1853193)) == 11) && func_48(Global_1853193, -1)) && unk_0x7010991FDA59D3F2(unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(Global_1853193), 0), joaat("terbyte")))
			{
				return 1;
			}
			else if (func_47(iVar0))
			{
				return 1;
			}
			else if (func_11(unk_0x9E2D6C50374FCFA9()) || func_53())
			{
				return 1;
			}
		}
	}
	if (func_46(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0x9E2D6C50374FCFA9() != func_12())
		{
			iVar0 = Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_9;
			if (func_19(iVar0, 0, 1))
			{
				if (func_11(unk_0x9E2D6C50374FCFA9()) || func_53())
				{
					return 1;
				}
			}
		}
	}
	if (func_52(unk_0x9E2D6C50374FCFA9()) || func_45(unk_0x9E2D6C50374FCFA9()))
	{
		switch (Global_1581356)
		{
			case 1:
				if (Global_262145.f_23120)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_23121)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_23122)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1581354 == 1)
	{
		return 1;
	}
	if (func_44(3))
	{
		if (Global_1835501 == 185)
		{
			if (Global_1836616 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_44(int iParam0)
{
	return Global_262145.f_5041[iParam0] == Global_4718592.f_116524;
}

int func_45(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_29(Global_2689235[iParam0 /*453*/].f_318.f_6) == 10;
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
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != func_12())
			{
				return func_29(Global_2689235[iParam0 /*453*/].f_318.f_6) == 20;
			}
		}
	}
	return 0;
}

int func_47(int iParam0)
{
	if (iParam0 != func_12())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_3, 4);
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	var uVar0;
	
	if (func_19(iParam0, 1, 1))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0x407E03586628E458(iParam0), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(iParam0), 0);
			if (unk_0x55A0C756C4A8220C(uVar0, 0))
			{
				if (unk_0xE2D3D51028F0428A() == unk_0xAB793EA186AB8DAA(uVar0, iParam1, 0))
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
	return Global_2689235[iParam0 /*453*/].f_318.f_9;
}

int func_50(int iParam0)
{
	if (iParam0 != func_12())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_2, 6);
	}
	return 0;
}

int func_51(int iParam0)
{
	if (iParam0 == func_12())
	{
		return iParam0;
	}
	return Global_2689235[iParam0 /*453*/].f_318.f_9;
}

int func_52(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != func_12())
			{
				return func_29(Global_2689235[iParam0 /*453*/].f_318.f_6) == 8;
			}
		}
	}
	return 0;
}

var func_53()
{
	return BitTest(Global_1946250, 6);
}

int func_54(int iParam0)
{
	if (iParam0 != func_12())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 6);
	}
	return 0;
}

bool func_55(int iParam0)
{
	return Global_262145.f_5032[4] == iParam0;
}

int func_56(int iParam0)
{
	if (unk_0x15CAA6D7B11F1A7C(uParam0) == joaat("hauler2") || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("phantom3"))
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0)
{
	if (iParam0 != func_12() && func_19(iParam0, 1, 1))
	{
		return Global_2689235[iParam0 /*453*/].f_318.f_16;
	}
	return -1;
}

int func_58(int iParam0)
{
	if (iParam0 == func_12())
	{
		return iParam0;
	}
	return Global_2689235[iParam0 /*453*/].f_318.f_9;
}

int func_59(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != func_12())
			{
				return func_29(Global_2689235[iParam0 /*453*/].f_318.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_60(int iParam0, int iParam1)
{
	if (func_61(iParam0))
	{
		if (unk_0x174CED88B97C78D9(iParam0, iParam1) == 1 || unk_0x174CED88B97C78D9(iParam0, iParam1) == 0)
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
		if (!unk_0xF68107C40359970C(uParam0))
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
	
	iVar0 = unk_0x15CAA6D7B11F1A7C(iParam0);
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
		if (((((((((((((iVar1 >= 0 && iVar1 <= 15) || (iVar1 >= 96 && iVar1 <= 111)) || (iVar1 >= 112 && iVar1 <= 127)) || (iVar1 >= 128 && iVar1 <= 143)) || (iVar1 >= 192 && iVar1 <= 207)) || (iVar1 >= 224 && iVar1 <= 239)) || iVar3 == 0) || iVar3 == 6) || iVar3 == 7) || iVar3 == 8) || iVar3 == 12) || iVar3 == 14) || (iVar2 != -1 && unk_0x036D1EA7243F2CCC(iVar2, joaat("high_heels"), 0)))
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
	if (unk_0x036D1EA7243F2CCC(iParam0, joaat("draw_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("draw_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("draw_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("draw_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("draw_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("draw_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("draw_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("draw_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("draw_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("draw_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("draw_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("draw_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("draw_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("draw_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("draw_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x036D1EA7243F2CCC(iParam0, joaat("draw_15"), 0))
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
		unk_0x1CF199D23D4DFAE4(&Var0);
		iVar17 = (iParam1 - func_67(iParam0));
		if (iVar17 < 0)
		{
			return -1;
		}
		iVar18 = unk_0xA188D1127A77C942(iParam3, 10, -1, 1, -1, -1);
		if (iVar18 <= iVar17)
		{
			return -1;
		}
		unk_0xC99CE91134872039(iVar17, &Var0);
		return Var0.f_1;
	}
	else
	{
		unk_0xB5ABDB2FA64E87F2(&Var19);
		iVar36 = (iParam1 - func_65(iParam0, func_66(iParam2)));
		if (iVar36 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_78252.f_26[iParam2] && iParam1 == Global_78252[iParam2]) && Global_78252.f_13[iParam2] != 0)
		{
			return Global_78252.f_13[iParam2];
		}
		iVar37 = unk_0xA188D1127A77C942(iParam3, 10, -1, 0, -1, func_66(iParam2));
		if (iVar37 <= iVar36)
		{
			return -1;
		}
		unk_0xEA030AC498B5F181(iVar36, &Var19);
		Global_78252.f_13[iParam2] = Var19.f_1;
		Global_78252[iParam2] = iParam1;
		Global_78252.f_26[iParam2] = iParam0;
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
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0xF68107C40359970C(uParam0))
	{
		return -99;
	}
	uVar0 = func_66(iParam1);
	iVar1 = unk_0x5355BAA621C153CF(iParam0, uVar0);
	iVar2 = unk_0xF1050E548C37F4A5(iParam0, uVar0);
	return func_69(iParam0, iVar1, iVar2, iParam1);
}

int func_69(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	uVar0 = func_66(iParam3);
	iVar1 = unk_0x37684F94E628D1AC(uParam0, uVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + unk_0x91E7DA9EAFFB9499(uParam0, uVar0, iVar3));
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
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (unk_0x15CAA6D7B11F1A7C(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != func_12())
			{
				return func_29(Global_2689235[iParam0 /*453*/].f_318.f_6) == 12;
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
	if (!Global_20266.f_1 == 1)
	{
		if (func_76(0))
		{
			func_72(iParam0);
		}
		unk_0xCED9E32812D6C7C7(&Global_8137, 2);
	}
}

void func_72(int iParam0)
{
	if (func_77())
	{
		return;
	}
	if (Global_20464)
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
	if (!func_73())
	{
		Global_20266.f_1 = 3;
	}
}

int func_73()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
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

bool func_75()
{
	return BitTest(Global_1958711, 5);
}

int func_76(int iParam0)
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

bool func_77()
{
	return BitTest(Global_1958711, 19);
}

void func_78()
{
	unk_0x16E09CCC0BD508DA();
	func_79();
}

void func_79()
{
	Global_23011.f_134 = 1;
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
			if (func_17(unk_0xE2D3D51028F0428A()))
			{
				unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 124, 1);
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
	unk_0xD86C99569D4749B0(sVar0);
	if (unk_0x6264B811E8D92198(sVar0))
	{
		if (unk_0x90F6E2F6488B98BA(Local_192.f_159))
		{
			if (!unk_0x6B8F21F773404988(Local_192.f_174[unk_0x9E2D6C50374FCFA9()]))
			{
				unk_0x76B797B61752AAB8(sVar0);
				if (func_35())
				{
					Local_192.f_174[unk_0x9E2D6C50374FCFA9()] = unk_0x2D649DA6DC187D35("scr_xs_guided_missile_trail", unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				}
				else
				{
					Local_192.f_174[unk_0x9E2D6C50374FCFA9()] = unk_0x2D649DA6DC187D35("scr_xs_guided_missile_trail", unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0f, 0.25f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
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
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159))
	{
		if (!unk_0xE5965CDF24F93A9F(Local_192.f_161))
		{
			unk_0xD69A0C3662175E68(func_98());
			if (unk_0x0152AA00FA3130F1(func_98()))
			{
				if (!BitTest(Local_192.f_5, 6))
				{
					if (func_92(unk_0xC162EEC794CBB80B(false, 0) + 1, 0, 1))
					{
						unk_0xF8B8A6EDAA31F196(unk_0xD2A20A5254D61849(0) + 1);
						unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 6);
					}
				}
				else if (unk_0xA777DF215CCFCC77(1))
				{
					Local_192.f_161 = unk_0xA8D58C3AADA2C41C(26, func_98(), Local_192.f_150, unk_0x82FE2343F8BDFF0B(unk_0xE8BBC6CC2C60F24A(Local_192.f_159)), 0, 0);
					unk_0x9210F85E9CD785F1(Local_192.f_161, 1);
					unk_0x1C2ED929474DC6FE(Local_192.f_161, false, 0);
					unk_0x823AC5A743053194(Local_192.f_161, 0);
					unk_0x50274A7EACA3133A(Local_192.f_161, 1);
					unk_0xF1A23B343DFEDFD0(func_98());
					unk_0xD6A76BAB45A4B460(Local_192.f_161, 118, 0);
					unk_0xD6A76BAB45A4B460(Local_192.f_161, 108, 1);
					unk_0xD6A76BAB45A4B460(Local_192.f_161, 208, 1);
					unk_0xBED097BB6359F09C(Local_192.f_161, 1, 1, 1, 1, 1, 0, 0, 0);
					unk_0x9A97DC6DBC7B223D(Local_192.f_161, unk_0xE8BBC6CC2C60F24A(Local_192.f_159), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
					unk_0x3FF6DDE9123AEA35(Local_192.f_161, 0, 0);
					Global_1958711.f_23 = Local_192.f_161;
				}
			}
		}
		else if (func_17(Local_192.f_161))
		{
			if (unk_0x2B5F4FBAF644BEC8(Local_192.f_161))
			{
				unk_0x1C2ED929474DC6FE(Local_192.f_161, false, 0);
			}
			if (!func_90(unk_0x9E2D6C50374FCFA9()) && !func_87(unk_0x9E2D6C50374FCFA9()))
			{
				if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0)
				{
					func_86(Global_1837205);
				}
			}
			else if ((Global_1958711.f_4 == -1 || Global_1958711.f_4 == 0) || Global_1958711.f_4 == Global_1837194)
			{
				func_86(Global_1837205);
			}
			if (unk_0x012A87EEEAD89783(Local_192.f_161) != func_85())
			{
				unk_0xFF4BEB6CFF55A013(Local_192.f_161, func_85());
			}
			if (!unk_0xE85F749F6D5C809E(Local_192.f_161))
			{
				unk_0x9A97DC6DBC7B223D(Local_192.f_161, unk_0xE8BBC6CC2C60F24A(Local_192.f_159), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
				unk_0x3FF6DDE9123AEA35(Local_192.f_161, 0, 0);
			}
		}
	}
}

int func_85()
{
	if (Global_1958711.f_4 != -1 && Global_1958711.f_4 != 0)
	{
		return Global_1958711.f_4;
	}
	return Global_1837205;
}

void func_86(int iParam0)
{
	if (Global_1958711.f_4 != iParam0)
	{
		Global_1958711.f_4 = iParam0;
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
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 7);
	}
	return 0;
}

int func_89(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1892703[iVar0 /*599*/];
	}
	return -1;
}

bool func_90(int iParam0)
{
	return func_91(iParam0, 20);
}

var func_91(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

bool func_92(int iParam0, bool bParam1, bool bParam2)
{
	return func_93(2, iParam0, 1, bParam1, bParam2);
}

int func_93(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1661006, 0))
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
		if (!bParam4 && Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/] != 3)
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
			return Global_1661006.f_1;
			break;
		
		case 1:
			return Global_1661006.f_2;
			break;
		
		case 2:
			return Global_1661006.f_3;
			break;
	}
	return 0;
}

int func_96(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x9E2D6C50374FCFA9();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xDD50B5A22807BAD4())
			{
				return Global_2689235[iVar0 /*453*/].f_217;
			}
			else
			{
				return unk_0x8736933282D0483C(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xDD50B5A22807BAD4())
			{
				return Global_2689235[iVar0 /*453*/].f_218;
			}
			else
			{
				return unk_0xBD7B8099C8298D2F(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xDD50B5A22807BAD4())
			{
				return Global_2689235[iVar0 /*453*/].f_219;
			}
			else
			{
				return unk_0xC162EEC794CBB80B(!bParam1, 0);
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
			return Global_1661014;
			break;
		
		case 1:
			return Global_1661015;
			break;
		
		case 2:
			return Global_1661016;
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
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159) && !unk_0x55B23FE400FCEA6B(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0))
	{
		if (unk_0x876B1078E90C91CB(Local_192.f_169) && unk_0x4B0B4E357722C507(Local_192.f_169))
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
			unk_0x584B286572B48431();
			func_101(1);
			func_100(2);
		}
	}
}

void func_100(int iParam0)
{
	Global_1577896 = iParam0;
}

void func_101(int iParam0)
{
	Global_1649593.f_1163 = iParam0;
}

void func_102()
{
	int iVar0;
	
	if (!unk_0x0347CCBD719C8ADC(Local_192.f_170))
	{
		if (func_16())
		{
			Local_192.f_170 = func_111();
		}
		else
		{
			Local_192.f_170 = func_110();
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
	func_105(Local_192.f_170, 0);
	func_104(Local_192.f_170, 3, 3, 3);
	func_103(Local_192.f_170, 0f, 0f, 0f, 0f, (unk_0x82FE2343F8BDFF0B(iVar0) + 180f));
	unk_0x2E04B7B46A3670E5(1);
	unk_0xC4353D240DCE9533(Local_192.f_170, 255, 255, 255, 0, 0);
}

void func_103(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	unk_0xEA5DEA46C3EE64D3(uParam0, "SET_ALT_FOV_HEADING");
	unk_0xCA5D23E5F0F0306F(fParam1);
	unk_0xCA5D23E5F0F0306F(fParam2);
	unk_0xCA5D23E5F0F0306F(fParam5);
	unk_0x6F06CF0E9AB02847();
}

void func_104(var uParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, "SET_WEAPON_VALUES");
	unk_0x4F47E317C74C543B(iParam1);
	unk_0x4F47E317C74C543B(iParam2);
	unk_0x4F47E317C74C543B(iParam3);
	unk_0x6F06CF0E9AB02847();
}

void func_105(var uParam0, int iParam1)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, "SET_ZOOM_VISIBLE");
	unk_0xD7D6BA6E36AEC182(iParam1);
	unk_0x6F06CF0E9AB02847();
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
	fVar1 = Local_192.f_120;
	if (fVar1 >= (func_109() - IntToFloat((50 * iVar0))))
	{
		if (unk_0x78D9ADD511FEAD8B(Local_192.f_37))
		{
			Local_192.f_37 = unk_0xA9ADCC8D104AA552();
			unk_0x91DFC8F68F6D9B05(Local_192.f_37, "Out_Of_Bounds_Alarm_Loop", Local_192.f_157, 1);
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
		if (!unk_0x78D9ADD511FEAD8B(Local_192.f_37))
		{
			unk_0xF889BDFCC181BA9F(Local_192.f_37);
			unk_0xCDBCC1BC1184B002(Local_192.f_37);
			Local_192.f_37 = -1;
		}
	}
}

void func_107(float fParam0)
{
	unk_0xEA5DEA46C3EE64D3(Local_192.f_170, "SET_WARNING_FLASH_RATE");
	unk_0xCA5D23E5F0F0306F(fParam0);
	unk_0x6F06CF0E9AB02847();
}

void func_108(char* sParam0, int iParam1)
{
	unk_0xEA5DEA46C3EE64D3(Local_192.f_170, sParam0);
	unk_0xD7D6BA6E36AEC182(iParam1);
	unk_0x6F06CF0E9AB02847();
}

float func_109()
{
	if (Global_1958711.f_8 == 0f)
	{
		return Global_262145.f_24700;
	}
	return Global_1958711.f_8;
}

var func_110()
{
	char* sVar0;
	
	sVar0 = "";
	switch (Global_4718592.f_162543)
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
	return unk_0x528279F3F1EEF869(sVar0);
}

var func_111()
{
	char* sVar0;
	
	sVar0 = "SUBMARINE_MISSILES";
	return unk_0x528279F3F1EEF869(sVar0);
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
	if (!BitTest(Local_192.f_5, 16))
	{
		if (func_128(0, -1, 0))
		{
			func_127(-1);
			func_126(20, "DRONE_SPACE", -1);
			func_126(21, "DRONE_POSITION", -1);
			if (func_35())
			{
				if (!unk_0x3A76A0944BE2C291(0))
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
			unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 16);
		}
	}
	else
	{
		func_113(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (unk_0x3A76A0944BE2C291(0))
	{
		if (!BitTest(Local_192.f_5, 17))
		{
			unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 17);
			unk_0xB0550BC91B0159D6(&(Local_192.f_5), 16);
		}
	}
	else if (BitTest(Local_192.f_5, 17))
	{
		unk_0xB0550BC91B0159D6(&(Local_192.f_5), 17);
		unk_0xB0550BC91B0159D6(&(Local_192.f_5), 16);
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
	if (unk_0xD199EE48D2842EB1())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_116(unk_0x9E2D6C50374FCFA9(), 0))
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
					func_115(&(Global_23150.f_5162[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x2E87280918B16506(&(Global_23150.f_5355[iVar2 /*4*/])) == unk_0x2E87280918B16506("PREV"))
					{
						func_115(&(Global_23150.f_5162[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23150.f_5404[iVar1] == -1)
					{
						func_114(&(Global_23150.f_5355[iVar1 /*4*/]));
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
				func_115(&Global_4539885);
				if (Global_4539885.f_20 == -1)
				{
					func_114(&(Global_4539885.f_16));
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

void func_114(var uParam0)
{
	unk_0x4ADC8B166E139423(uParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_115(var uParam0)
{
	unk_0x341872E4D54CD053(uParam0);
}

bool func_116(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_117(-1, 0) == 8;
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

int func_117(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_118();
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

int func_118()
{
	return Global_1574918;
}

int func_119()
{
	struct<3> Var0;
	
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	if (func_120())
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

int func_120()
{
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_121(bool bParam0, bool bParam1)
{
	if (Global_2703735.f_1571.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xE9E8955A780DDA01() || (func_123(8, -1) && func_122() != 65)) || (unk_0x1A76A9A82BD6228C() != 0 && !bParam1)) || (unk_0x04458B4E5D9E466A() && !bParam0)) || unk_0x06C559386AD19942()) || Global_78579) || Global_23150.f_8807) || unk_0x3E6C9DAD84CEFED1()) || Global_100493.f_1458)
	{
		return 0;
	}
	return 1;
}

int func_122()
{
	return Global_1574991;
}

var func_123(int iParam0, int iParam1)
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

int func_124(var uParam0, bool bParam1, int iParam2)
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

void func_125(int iParam0, char* sParam1, int iParam2, bool bParam3)
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

void func_126(int iParam0, char* sParam1, int iParam2)
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

void func_127(int iParam0)
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
		if (!func_124(&iVar1, 0, iParam0))
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
	bVar2 = func_129(&(Global_23150.f_6051[iVar0 /*10*/]));
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

bool func_130()
{
	return BitTest(Local_192.f_6, 6);
}

void func_131()
{
	if (!unk_0x0347CCBD719C8ADC(Local_192.f_170))
	{
		Local_192.f_170 = unk_0x528279F3F1EEF869("DRONE_CAM");
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
	if (func_158(unk_0x9E2D6C50374FCFA9()) == 240)
	{
		if (Local_192.f_120 >= (func_109() - 50f) || Local_192.f_121 >= IntToFloat((Global_262145.f_24699 - 50)))
		{
			func_108("SET_SOUND_WAVE_IS_VISIBLE", 0);
			func_157();
			if (BitTest(Local_192.f_5, 13))
			{
				unk_0xB0550BC91B0159D6(&(Local_192.f_5), 13);
			}
		}
		else
		{
			func_153(func_154());
			if (!BitTest(Local_192.f_5, 13))
			{
				func_108("SET_SOUND_WAVE_IS_VISIBLE", 1);
				unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 13);
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
			func_152(Local_192.f_18);
		}
		else
		{
			func_151(Local_192.f_18);
		}
		if (!func_162(0))
		{
			func_150(Local_192.f_19);
		}
	}
	if (func_160())
	{
		func_149(Local_192.f_24);
	}
	if (func_161())
	{
		func_148(Local_192.f_20);
	}
	func_147(0, "DRONE_ZOOM_1");
	func_147(1, "");
	func_147(2, "DRONE_ZOOM_2");
	func_147(3, "");
	func_147(4, "DRONE_ZOOM_3");
	func_145();
	func_143();
	func_141();
	func_140(unk_0xF2DB717A73826179((unk_0x82FE2343F8BDFF0B(unk_0xE8BBC6CC2C60F24A(Local_192.f_159)) + 180f)));
	if (func_158(unk_0x9E2D6C50374FCFA9()) == 240)
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
	unk_0x2E04B7B46A3670E5(1);
	unk_0xC4353D240DCE9533(Local_192.f_170, 255, 255, 255, 0, 0);
}

void func_132()
{
	if (Local_192.f_150.f_2 >= (func_109() - 20f))
	{
		if (unk_0x78D9ADD511FEAD8B(Local_192.f_37))
		{
			Local_192.f_37 = unk_0xA9ADCC8D104AA552();
			unk_0x91DFC8F68F6D9B05(Local_192.f_37, "Out_Of_Bounds_Alarm_Loop", Local_192.f_157, 1);
		}
		if (Local_192.f_150.f_2 >= (func_109() - 20f) && Local_192.f_150.f_2 < (func_109() - 16f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.1f);
		}
		else if (Local_192.f_150.f_2 >= (func_109() - 16f) && Local_192.f_150.f_2 < (func_109() - 13f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.2f);
		}
		else if (Local_192.f_150.f_2 >= (func_109() - 13f) && Local_192.f_150.f_2 < (func_109() - 10f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.3f);
		}
		else if (Local_192.f_150.f_2 >= (func_109() - 10f) && Local_192.f_150.f_2 < (func_109() - 8f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.4f);
		}
		else if (Local_192.f_150.f_2 >= (func_109() - 8f) && Local_192.f_150.f_2 < (func_109() - 6f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.5f);
		}
		else if (Local_192.f_150.f_2 >= (func_109() - 6f) && Local_192.f_150.f_2 < (func_109() - 4f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.6f);
		}
		else if (Local_192.f_150.f_2 >= (func_109() - 4f) && Local_192.f_150.f_2 < (func_109() - 3f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.7f);
		}
		else if (Local_192.f_150.f_2 >= (func_109() - 3f) && Local_192.f_150.f_2 < (func_109() - 2f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.8f);
		}
		else if (Local_192.f_150.f_2 >= (func_109() - 2f) && Local_192.f_150.f_2 < (func_109() - 1f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.9f);
		}
		else if (Local_192.f_150.f_2 >= (func_109() - 1f) && Local_192.f_150.f_2 < func_109())
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(1f);
		}
	}
	else
	{
		func_108("SET_WARNING_IS_VISIBLE", 0);
		if (!unk_0x78D9ADD511FEAD8B(Local_192.f_37))
		{
			unk_0xF889BDFCC181BA9F(Local_192.f_37);
			unk_0xCDBCC1BC1184B002(Local_192.f_37);
			Local_192.f_37 = -1;
		}
	}
}

void func_133()
{
	if (Local_192.f_120 >= (func_109() - 50f) || Local_192.f_121 >= IntToFloat((Global_262145.f_24699 - 50)))
	{
		func_134();
		if (unk_0x78D9ADD511FEAD8B(Local_192.f_37))
		{
			Local_192.f_37 = unk_0xA9ADCC8D104AA552();
			unk_0x91DFC8F68F6D9B05(Local_192.f_37, "Out_Of_Bounds_Alarm_Loop", Local_192.f_157, 1);
		}
		if ((Local_192.f_120 >= (func_109() - 50f) && Local_192.f_120 < (func_109() - 45f)) || (Local_192.f_121 >= IntToFloat((Global_262145.f_24699 - 50)) && Local_192.f_121 < IntToFloat((Global_262145.f_24699 - 45))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.1f);
		}
		else if ((Local_192.f_120 >= (func_109() - 45f) && Local_192.f_120 < (func_109() - 40f)) || (Local_192.f_121 >= IntToFloat((Global_262145.f_24699 - 45)) && Local_192.f_121 < IntToFloat((Global_262145.f_24699 - 40))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.2f);
		}
		else if ((Local_192.f_120 >= (func_109() - 40f) && Local_192.f_120 < (func_109() - 35f)) || (Local_192.f_121 >= IntToFloat((Global_262145.f_24699 - 40)) && Local_192.f_121 < IntToFloat((Global_262145.f_24699 - 35))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.3f);
		}
		else if ((Local_192.f_120 >= (func_109() - 35f) && Local_192.f_120 < (func_109() - 30f)) || (Local_192.f_121 >= IntToFloat((Global_262145.f_24699 - 35)) && Local_192.f_121 < IntToFloat((Global_262145.f_24699 - 30))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.4f);
		}
		else if ((Local_192.f_120 >= (func_109() - 30f) && Local_192.f_120 < (func_109() - 25f)) || (Local_192.f_121 >= IntToFloat((Global_262145.f_24699 - 30)) && Local_192.f_121 < IntToFloat((Global_262145.f_24699 - 25))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.5f);
		}
		else if ((Local_192.f_120 >= (func_109() - 25f) && Local_192.f_120 < (func_109() - 20f)) || (Local_192.f_121 >= IntToFloat((Global_262145.f_24699 - 25)) && Local_192.f_121 < IntToFloat((Global_262145.f_24699 - 20))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.6f);
		}
		else if ((Local_192.f_120 >= (func_109() - 20f) && Local_192.f_120 < (func_109() - 15f)) || (Local_192.f_121 >= IntToFloat((Global_262145.f_24699 - 20)) && Local_192.f_121 < IntToFloat((Global_262145.f_24699 - 15))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.7f);
		}
		else if ((Local_192.f_120 >= (func_109() - 15f) && Local_192.f_120 < (func_109() - 10f)) || (Local_192.f_121 >= IntToFloat((Global_262145.f_24699 - 15)) && Local_192.f_121 < IntToFloat((Global_262145.f_24699 - 10))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.8f);
		}
		else if ((Local_192.f_120 >= (func_109() - 10f) && Local_192.f_120 < (func_109() - 5f)) || (Local_192.f_121 >= IntToFloat((Global_262145.f_24699 - 10)) && Local_192.f_121 < IntToFloat((Global_262145.f_24699 - 5))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.9f);
		}
		else if ((Local_192.f_120 >= (func_109() - 5f) && Local_192.f_120 < func_109()) || (Local_192.f_121 >= IntToFloat((Global_262145.f_24699 - 5)) && Local_192.f_121 < IntToFloat(Global_262145.f_24699)))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(1f);
		}
	}
	else
	{
		func_108("SET_WARNING_IS_VISIBLE", 0);
		if (!unk_0x78D9ADD511FEAD8B(Local_192.f_37))
		{
			unk_0xF889BDFCC181BA9F(Local_192.f_37);
			unk_0xCDBCC1BC1184B002(Local_192.f_37);
			Local_192.f_37 = -1;
		}
	}
}

void func_134()
{
	int iVar0;
	
	if (unk_0xE9E8955A780DDA01() && !BitTest(Global_1946250.f_3, 15))
	{
		if (!unk_0xF847447D4467709D())
		{
			iVar0 = func_137(22045, -1);
			if (iVar0 < 4)
			{
				func_136("HACK_DRONE_DIS", -1);
				iVar0++;
				func_135(22045, iVar0, -1);
				unk_0xCED9E32812D6C7C7(&(Global_1946250.f_3), 15);
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
	unk_0x1581503AE529CD2E(iParam0, iParam1, iParam2);
}

void func_136(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

int func_137(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_118();
	}
	return unk_0x0BC900A6FE73770C(iParam0, iParam1);
}

bool func_138()
{
	return BitTest(Global_1958711.f_2, 1);
}

void func_139(float fParam0)
{
	unk_0xEA5DEA46C3EE64D3(Local_192.f_170, "ATTENUATE_SOUND_WAVE");
	unk_0xCA5D23E5F0F0306F(fParam0);
	unk_0x6F06CF0E9AB02847();
}

void func_140(int iParam0)
{
	unk_0xEA5DEA46C3EE64D3(Local_192.f_170, "SET_HEADING");
	unk_0x4F47E317C74C543B(iParam0);
	unk_0x6F06CF0E9AB02847();
}

void func_141()
{
	if (func_24())
	{
		if (BitTest(Local_192.f_5, 11) && !Local_192.f_156)
		{
			func_142(1);
		}
		else
		{
			func_142(0);
		}
	}
	else if (BitTest(Local_192.f_5, 11) || BitTest(Local_192.f_5, 23))
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
	unk_0xEA5DEA46C3EE64D3(Local_192.f_170, "SET_RETICLE_ON_TARGET");
	unk_0xD7D6BA6E36AEC182(iParam0);
	unk_0x6F06CF0E9AB02847();
}

void func_143()
{
	if (BitTest(Local_192.f_5, 4) || (BitTest(Local_192.f_5, 3) && func_24()))
	{
		if (Local_192.f_18 == 100)
		{
			func_144(1);
		}
		else if (Local_192.f_18 != 0 && Local_192.f_18 != 100)
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
	unk_0xEA5DEA46C3EE64D3(Local_192.f_170, "SET_RETICLE_STATE");
	unk_0x4F47E317C74C543B(iParam0);
	unk_0x6F06CF0E9AB02847();
}

void func_145()
{
	switch (Local_192.f_25)
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
	unk_0xEA5DEA46C3EE64D3(Local_192.f_170, "SET_ZOOM");
	unk_0x4F47E317C74C543B(iParam0);
	unk_0x6F06CF0E9AB02847();
}

void func_147(int iParam0, char* sParam1)
{
	unk_0xEA5DEA46C3EE64D3(Local_192.f_170, "SET_ZOOM_LABEL");
	unk_0x4F47E317C74C543B(iParam0);
	func_114(sParam1);
	unk_0x6F06CF0E9AB02847();
}

void func_148(int iParam0)
{
	unk_0xEA5DEA46C3EE64D3(Local_192.f_170, "SET_BOOST_PERCENTAGE");
	unk_0x4F47E317C74C543B(uParam0);
	unk_0x6F06CF0E9AB02847();
}

void func_149(int iParam0)
{
	unk_0xEA5DEA46C3EE64D3(Local_192.f_170, "SET_TRANQUILIZE_PERCENTAGE");
	unk_0x4F47E317C74C543B(uParam0);
	unk_0x6F06CF0E9AB02847();
}

void func_150(int iParam0)
{
	unk_0xEA5DEA46C3EE64D3(Local_192.f_170, "SET_DETONATE_PERCENTAGE");
	unk_0x4F47E317C74C543B(uParam0);
	unk_0x6F06CF0E9AB02847();
}

void func_151(int iParam0)
{
	unk_0xEA5DEA46C3EE64D3(Local_192.f_170, "SET_EMP_PERCENTAGE");
	unk_0x4F47E317C74C543B(uParam0);
	unk_0x6F06CF0E9AB02847();
}

void func_152(int iParam0)
{
	unk_0xEA5DEA46C3EE64D3(Local_192.f_170, "SET_SHOCK_PERCENTAGE");
	unk_0x4F47E317C74C543B(uParam0);
	unk_0x6F06CF0E9AB02847();
}

void func_153(float fParam0)
{
	if (unk_0x78D9ADD511FEAD8B(Local_192.f_44))
	{
		Local_192.f_44 = unk_0xA9ADCC8D104AA552();
		unk_0x91DFC8F68F6D9B05(Local_192.f_44, "Scanner_Loop", "DLC_BTL_Target_Pursuit_Sounds", 1);
		unk_0x57973ADDF2BFAA90(Local_192.f_44, "signalstrength", fParam0);
	}
	else
	{
		unk_0x57973ADDF2BFAA90(Local_192.f_44, "signalstrength", fParam0);
	}
}

float func_154()
{
	float fVar0;
	
	if (func_158(unk_0x9E2D6C50374FCFA9()) == 240)
	{
		if (unk_0x90F6E2F6488B98BA(Local_192.f_159) && !unk_0x55B23FE400FCEA6B(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0))
		{
			fVar0 = func_155(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), func_156(), 1);
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
	
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Param1, iParam4);
}

Vector3 func_156()
{
	if (func_158(unk_0x9E2D6C50374FCFA9()) == 240)
	{
		return Global_1963983;
	}
	return 0f, 0f, 0f;
}

void func_157()
{
	if (!unk_0x78D9ADD511FEAD8B(Local_192.f_44))
	{
		unk_0xF889BDFCC181BA9F(Local_192.f_44);
		unk_0xCDBCC1BC1184B002(Local_192.f_44);
		Local_192.f_44 = -1;
	}
}

int func_158(int iParam0)
{
	if (func_159(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_159(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_160()
{
	return BitTest(Global_1958711.f_2, 6);
}

int func_161()
{
	if (func_160())
	{
		if (unk_0xBCC73B466E2B2350(Global_1958711.f_24))
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
			if (BitTest(Local_192.f_5, 4))
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
	if (!BitTest(Local_192.f_5, 16))
	{
		if (func_128(0, -1, 0))
		{
			func_127(-1);
			func_126(21, "DRONE_MOVE", -1);
			func_126(20, "DRONE_POSITION", -1);
			if (!unk_0x3A76A0944BE2C291(0))
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
				if (unk_0x3A76A0944BE2C291(0))
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
				if (unk_0x3A76A0944BE2C291(0))
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
				if ((((func_169(0) || func_169(1)) || func_168()) || unk_0x6C85295E4E1FB8B3()) || func_164(unk_0x9E2D6C50374FCFA9()))
				{
				}
				else
				{
					func_125(201, "DRONE_PHOTO", -1, 0);
				}
			}
			func_125(80, "MOVE_DRONE_RE", -1, 0);
			unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 16);
		}
	}
	else
	{
		func_113(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (unk_0x3A76A0944BE2C291(0))
	{
		if (!BitTest(Local_192.f_5, 17))
		{
			unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 17);
			unk_0xB0550BC91B0159D6(&(Local_192.f_5), 16);
		}
	}
	else if (BitTest(Local_192.f_5, 17))
	{
		unk_0xB0550BC91B0159D6(&(Local_192.f_5), 17);
		unk_0xB0550BC91B0159D6(&(Local_192.f_5), 16);
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
	return Global_1892703[unk_0x9E2D6C50374FCFA9() /*599*/].f_10.f_35;
}

int func_166()
{
	return Global_1892703[unk_0x9E2D6C50374FCFA9() /*599*/].f_10;
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
	return Global_23011.f_135;
}

bool func_169(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
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
	return Global_1958711.f_6;
}

bool func_172()
{
	return BitTest(Global_1958711, 7);
}

void func_173()
{
	int iVar0;
	
	if (!func_174())
	{
		return;
	}
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159) && !unk_0x55B23FE400FCEA6B(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0))
	{
		if (unk_0x07B2F8356DC13CF4(Local_192.f_159))
		{
			if ((unk_0x876B1078E90C91CB(Local_192.f_169) && unk_0x4B0B4E357722C507(Local_192.f_169)) && !func_77())
			{
				iVar0 = 80;
				if (func_83())
				{
					iVar0 = 75;
				}
				if (unk_0xF09A4F413B0D30EB(2, iVar0) || unk_0xF01464D7AF0B7347(2, iVar0))
				{
					if (!BitTest(Local_192.f_5, 7))
					{
						unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 7);
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
	
	if ((func_181() || !func_164(unk_0x9E2D6C50374FCFA9())) || !unk_0x9315DBF7D972F07A())
	{
		return;
	}
	iVar0 = func_180(1);
	func_179(iVar0);
	iVar1 = func_180(0);
	iVar2 = unk_0x87A467676BDF8C35(Local_192.f_141, 2f, iVar1, 0, 0, 0);
	if (unk_0xE5965CDF24F93A9F(iVar2) && iVar2 != Local_192.f_162)
	{
		if (unk_0xEEF1A3C0E56FC8FF(iVar2, joaat("weapon_stungun"), 0) || unk_0x0CF63873D754B965(iVar2) == 999)
		{
			if (!BitTest(Local_192.f_5, 26))
			{
				func_178(func_166(), 1, 1, 0);
				unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 26);
			}
		}
	}
	if (unk_0xE5965CDF24F93A9F(Local_192.f_162))
	{
		if (unk_0xEEF1A3C0E56FC8FF(Local_192.f_162, joaat("weapon_stungun"), 0) || unk_0x0CF63873D754B965(Local_192.f_162) == 999)
		{
			if (!BitTest(Local_192.f_5, 26))
			{
				func_178(func_166(), 1, 1, 0);
				unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 26);
			}
		}
	}
	if (BitTest(Local_192.f_5, 26))
	{
		iVar3 = unk_0x87A467676BDF8C35(Local_192.f_141, 2f, iVar0, 0, 0, 0);
		if (unk_0xE5965CDF24F93A9F(iVar3))
		{
			if (unk_0xE5965CDF24F93A9F(Local_192.f_162))
			{
				unk_0x1C2ED929474DC6FE(Local_192.f_162, false, 0);
			}
			if (unk_0xE5965CDF24F93A9F(iVar2))
			{
				unk_0x1C2ED929474DC6FE(iVar2, false, 0);
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
			unk_0xCED9E32812D6C7C7(&Global_1958711, 1);
		}
	}
	else if (func_177())
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 1);
	}
}

bool func_177()
{
	return BitTest(Global_1958711, 1);
}

void func_178(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	int iVar5;
	
	Var0.f_0 = -1987280249;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	iVar5 = 0;
	if (iParam0 != func_12())
	{
		unk_0xCED9E32812D6C7C7(&iVar5, iParam0);
	}
	if (!iVar5 == 0)
	{
		unk_0x2700C00F82C16BF0(1, &Var0, 5, iVar5);
	}
}

bool func_179(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xD69A0C3662175E68(iParam0);
	return unk_0x0152AA00FA3130F1(iParam0);
}

int func_180(bool bParam0)
{
	if (!bParam0)
	{
		if (Global_1958711.f_19 != 0)
		{
			return Global_1958711.f_19;
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
	return BitTest(Global_1958711, 14);
}

void func_182()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((BitTest(Local_192.f_5, 1) || func_193()) || func_192())
	{
		Local_192.f_18 = 0;
		Local_192.f_19 = 0;
		if (!BitTest(Local_192.f_5, 10))
		{
			unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 10);
		}
		return;
	}
	if (!func_192())
	{
		if (BitTest(Local_192.f_5, 10))
		{
			Local_192.f_18 = 100;
			unk_0xB0550BC91B0159D6(&(Local_192.f_5), 10);
		}
	}
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159) && !unk_0x55B23FE400FCEA6B(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0))
	{
		if (unk_0x07B2F8356DC13CF4(Local_192.f_159))
		{
			if ((unk_0x876B1078E90C91CB(Local_192.f_169) && unk_0x4B0B4E357722C507(Local_192.f_169)) && !BitTest(Local_192.f_5, 2))
			{
				if ((!BitTest(Local_192.f_5, 4) && !BitTest(Local_192.f_5, 3)) && !Local_192.f_156)
				{
					iVar0 = 206;
					if (unk_0x3A76A0944BE2C291(0))
					{
						iVar0 = 237;
					}
					if ((((unk_0x26009F50A14AD073(2, iVar0) || unk_0x51844F589D928A86(2, iVar0)) && !BitTest(Local_192.f_5, 5)) && !BitTest(Local_192.f_5, 24)) && !func_77())
					{
						unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 24);
						if (BitTest(Local_192.f_5, 11) || BitTest(Local_192.f_5, 23))
						{
							Local_192.f_27++;
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
				else if (func_25(&(Local_192.f_249)))
				{
					if (func_24())
					{
						iVar1 = Global_262145.f_25339;
					}
					else
					{
						iVar1 = Global_262145.f_24692;
					}
					if (func_22(&(Local_192.f_249), iVar1, 0))
					{
						func_21(&(Local_192.f_249));
						Local_192.f_18 = 100;
						if (Local_192.f_32 != -1)
						{
							unk_0xF889BDFCC181BA9F(Local_192.f_32);
							unk_0xCDBCC1BC1184B002(Local_192.f_32);
							Local_192.f_32 = -1;
						}
						if (unk_0x78D9ADD511FEAD8B(Local_192.f_35))
						{
							unk_0xF889BDFCC181BA9F(Local_192.f_35);
							unk_0xCDBCC1BC1184B002(Local_192.f_35);
							Local_192.f_35 = -1;
						}
						unk_0xB0550BC91B0159D6(&(Local_192.f_5), 4);
						unk_0xB0550BC91B0159D6(&(Local_192.f_5), 3);
						unk_0xB0550BC91B0159D6(&(Local_192.f_5), 24);
						Local_192.f_156 = 0;
					}
					else
					{
						iVar2 = (100 * unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Local_192.f_249)));
						Local_192.f_18 = (iVar2 / iVar1);
						if (!func_24())
						{
							if (unk_0x78D9ADD511FEAD8B(Local_192.f_32))
							{
								Local_192.f_32 = unk_0xA9ADCC8D104AA552();
								unk_0x91DFC8F68F6D9B05(Local_192.f_32, "HUD_Shock_Recharge", Local_192.f_157, 1);
								unk_0x57973ADDF2BFAA90(Local_192.f_32, "Time", (IntToFloat(iVar1) / 1000f));
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
			unk_0xC31EECA11005273C(Local_192.f_159);
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
		if (unk_0x3A76A0944BE2C291(0))
		{
			iVar0 = 238;
		}
		else
		{
			iVar0 = 205;
		}
		if (!BitTest(Local_192.f_6, 5))
		{
			if (!BitTest(Local_192.f_6, 4))
			{
				if (unk_0x26009F50A14AD073(2, iVar0) || unk_0x51844F589D928A86(2, iVar0))
				{
					unk_0xCED9E32812D6C7C7(&(Local_192.f_6), 4);
				}
			}
			else if (Local_192.f_13 == 1)
			{
				if (Local_192.f_244 == 2)
				{
					Var1 = { unk_0x524171C8263E7C3E() };
					Var4 = { unk_0x52BD0FA2342C7246(2) };
					Var7 = { (-unk_0x0BADBFA3B172435F(Var4.f_2) * unk_0xD0FFB162F40A139C(Var4.f_0)), (unk_0xD0FFB162F40A139C(Var4.f_2) * unk_0xD0FFB162F40A139C(Var4.f_0)), unk_0x0BADBFA3B172435F(Var4.f_0) };
					Var10 = { 10f, 10f, 10f };
					Var13 = { Var1 + Var7 * Var10 };
					iVar16 = Global_262145.f_24693;
					if (BitTest(Local_192.f_5, 23))
					{
						iVar16 = Global_262145.f_24694;
					}
					unk_0x633F41B5CEA31CC2(Local_192.f_150 + Vector(0f, 0f, 0f), Var13, iVar16, 1, joaat("WEAPON_TRANQUILIZER"), unk_0xE2D3D51028F0428A(), 1, 1, -1082130432, unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0, 0, 0, 1, 0, 0, 0);
					Local_192.f_24 = 100;
					unk_0xF7A14A1A76B6DD17(0, 300, unk_0xF2DB717A73826179((150f * Local_192.f_131)));
					if (unk_0x78D9ADD511FEAD8B(Local_192.f_81))
					{
						Local_192.f_81 = unk_0xA9ADCC8D104AA552();
						unk_0x979FC7400A5D0CD2(Local_192.f_81, "Remote_Perspective_Fire", unk_0xE8BBC6CC2C60F24A(Local_192.f_159), "DLC_H3_Drone_Tranq_Weapon_Sounds", 1, 0);
					}
					unk_0x91DFC8F68F6D9B05(-1, "Pilot_Perspective_Fire", "DLC_H3_Drone_Tranq_Weapon_Sounds", 1);
					if (BitTest(Local_192.f_5, 11) || BitTest(Local_192.f_5, 23))
					{
						Local_192.f_29++;
					}
					func_185((func_171() - 1));
					if (func_171() <= 0)
					{
						Local_192.f_24 = 0;
						unk_0xB0550BC91B0159D6(&(Local_192.f_5), 16);
					}
					unk_0xCED9E32812D6C7C7(&(Local_192.f_6), 5);
					func_23(&(Local_192.f_257), 0, 0);
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
		if (func_25(&(Local_192.f_257)))
		{
			iVar0 = Global_262145.f_24692;
			if (func_22(&(Local_192.f_257), iVar0, 0))
			{
				unk_0xB0550BC91B0159D6(&(Local_192.f_6), 5);
				unk_0xB0550BC91B0159D6(&(Local_192.f_6), 4);
				func_21(&(Local_192.f_257));
				Local_192.f_24 = 100;
				if (unk_0x78D9ADD511FEAD8B(Local_192.f_35))
				{
					unk_0xF889BDFCC181BA9F(Local_192.f_35);
					unk_0xCDBCC1BC1184B002(Local_192.f_35);
					Local_192.f_35 = -1;
				}
			}
			else
			{
				iVar1 = (100 * unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Local_192.f_257)));
				Local_192.f_24 = (iVar1 / iVar0);
			}
		}
	}
}

void func_185(int iParam0)
{
	if (Global_1958711.f_6 != iParam0)
	{
		Global_1958711.f_6 = iParam0;
	}
}

void func_186()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	Local_192.f_348.f_2 = 2;
	if (unk_0x3A76A0944BE2C291(0))
	{
		Local_192.f_348.f_3 = 238;
	}
	else
	{
		Local_192.f_348.f_3 = 205;
	}
	iVar0 = Global_262145.f_24695;
	if (!BitTest(Local_192.f_5, 31))
	{
		Local_192.f_22 = 100;
	}
	if (func_24())
	{
		iVar0 = (iVar0 / 2);
		if (BitTest(Local_192.f_6, 1))
		{
			Local_192.f_21 = ((Local_192.f_23 * (Global_262145.f_24695 / 2)) / 100);
			Local_192.f_21 = ((Global_262145.f_24695 / 2) - Local_192.f_21);
			unk_0xB0550BC91B0159D6(&(Local_192.f_6), 1);
		}
		if (BitTest(Local_192.f_5, 31))
		{
			iVar0 = Local_192.f_21;
		}
	}
	else
	{
		Local_192.f_22 = 100;
	}
	if (!func_162(1))
	{
		if (!func_77() && func_187(&(Local_192.f_348), 1, iVar0))
		{
			if (unk_0x78D9ADD511FEAD8B(Local_192.f_36))
			{
				Local_192.f_36 = unk_0xA9ADCC8D104AA552();
				unk_0x979FC7400A5D0CD2(Local_192.f_36, "Destroyed", unk_0xE8BBC6CC2C60F24A(Local_192.f_159), Local_192.f_157, 1, 0);
			}
			unk_0xC8483C4C42152921();
			iVar1 = 0;
			if (func_24())
			{
				iVar1 = 69;
			}
			unk_0x5E0A11B95EE2E0C6(unk_0xE2D3D51028F0428A(), Local_192.f_150, iVar1, 0.5f, 1, 0, 1065353216);
			if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) < 1)
			{
				unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 0, 0);
				unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
			}
			unk_0xF7A14A1A76B6DD17(0, 300, unk_0xF2DB717A73826179((200f * Local_192.f_131)));
			unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 2);
		}
	}
	if (func_25(&(Local_192.f_348)))
	{
		unk_0xF7A14A1A76B6DD17(0, 300, 20);
		if (!BitTest(Local_192.f_5, 5))
		{
			unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 5);
		}
		func_21(&(Local_192.f_273));
		if (!func_22(&(Local_192.f_348), iVar0, 0))
		{
			iVar2 = (Local_192.f_22 * unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Local_192.f_348)));
			if (!func_24())
			{
				Local_192.f_19 = (iVar2 / iVar0);
			}
			else if (!BitTest(Local_192.f_5, 31))
			{
				Local_192.f_19 = (iVar2 / iVar0);
			}
			else
			{
				Local_192.f_19 = (Local_192.f_23 + (iVar2 / iVar0));
			}
			if (unk_0x78D9ADD511FEAD8B(Local_192.f_33))
			{
				Local_192.f_33 = unk_0xA9ADCC8D104AA552();
				unk_0x91DFC8F68F6D9B05(Local_192.f_33, "HUD_Detonate_Charge", Local_192.f_157, 1);
			}
		}
	}
	else if (BitTest(Local_192.f_5, 5))
	{
		unk_0xB0550BC91B0159D6(&(Local_192.f_5), 5);
		if (!func_24())
		{
			Local_192.f_19 = 0;
		}
		else
		{
			unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 31);
			Local_192.f_22 = (100 - Local_192.f_19);
			Local_192.f_21 = (iVar0 - unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Local_192.f_348)));
			Local_192.f_23 = Local_192.f_19;
			func_21(&(Local_192.f_273));
		}
		if (Local_192.f_33 != -1)
		{
			unk_0xF889BDFCC181BA9F(Local_192.f_33);
			unk_0xCDBCC1BC1184B002(Local_192.f_33);
			Local_192.f_33 = -1;
		}
	}
	else if (func_24())
	{
		if (Local_192.f_19 > 0)
		{
			if (Local_192.f_19 <= 2)
			{
				Local_192.f_19 = 0;
			}
			if (!func_25(&(Local_192.f_273)))
			{
				func_23(&(Local_192.f_273), 0, 0);
			}
			else
			{
				iVar3 = Global_262145.f_24695;
				if (!func_22(&(Local_192.f_273), iVar3, 0))
				{
					fVar4 = ((100f - IntToFloat(Local_192.f_22)) / unk_0xBBDA792448DB5A89((iVar3 / unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Local_192.f_273)))));
					Local_192.f_19 = (Local_192.f_19 - unk_0xF2DB717A73826179(fVar4));
					Local_192.f_23 = Local_192.f_19;
					Local_192.f_22 = (100 - Local_192.f_19);
					unk_0xCED9E32812D6C7C7(&(Local_192.f_6), 1);
				}
				else
				{
					Local_192.f_19 = 0;
				}
			}
		}
		else
		{
			func_21(&(Local_192.f_348));
			unk_0xB0550BC91B0159D6(&(Local_192.f_5), 31);
			unk_0xB0550BC91B0159D6(&(Local_192.f_6), 1);
		}
	}
}

int func_187(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x4C1B8C5717647539(uParam0->f_2, uParam0->f_3) || (unk_0x0DBA73788F6E3C5F(uParam0->f_2, uParam0->f_3) && iParam1))
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
	
	if (BitTest(Local_192.f_5, 24))
	{
		if (Local_192.f_13 == 1)
		{
			if (Local_192.f_244 == 2)
			{
				Var0 = { unk_0x524171C8263E7C3E() };
				Var3 = { unk_0x52BD0FA2342C7246(2) };
				Var6 = { (-unk_0x0BADBFA3B172435F(Var3.f_2) * unk_0xD0FFB162F40A139C(Var3.f_0)), (unk_0xD0FFB162F40A139C(Var3.f_2) * unk_0xD0FFB162F40A139C(Var3.f_0)), unk_0x0BADBFA3B172435F(Var3.f_0) };
				Var9 = { 10f, 10f, 10f };
				Var12 = { Var0 + Var6 * Var9 };
				iVar15 = Global_262145.f_24693;
				if (BitTest(Local_192.f_5, 23))
				{
					iVar15 = Global_262145.f_24694;
				}
				if (func_160())
				{
					iVar15 = 1;
				}
				unk_0x633F41B5CEA31CC2(Local_192.f_150 + Vector(0f, 0f, 0f), Var12, iVar15, 1, joaat("weapon_stungun"), unk_0xE2D3D51028F0428A(), 1, 1, -1082130432, unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0, 0, 0, 1, 0, 0, 0);
				Local_192.f_18 = 100;
				Local_192.f_19 = 0;
				unk_0xF7A14A1A76B6DD17(0, 300, unk_0xF2DB717A73826179((150f * Local_192.f_131)));
				if (unk_0x78D9ADD511FEAD8B(Local_192.f_35))
				{
					Local_192.f_35 = unk_0xA9ADCC8D104AA552();
					unk_0x979FC7400A5D0CD2(Local_192.f_35, "Shock_Fire", unk_0xE8BBC6CC2C60F24A(Local_192.f_159), Local_192.f_157, 1, 0);
				}
				if (Local_192.f_33 != -1)
				{
					unk_0xF889BDFCC181BA9F(Local_192.f_33);
					unk_0xCDBCC1BC1184B002(Local_192.f_33);
					Local_192.f_33 = -1;
				}
				unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 4);
				func_23(&(Local_192.f_249), 0, 0);
			}
		}
	}
}

void func_189()
{
	if ((BitTest(Local_192.f_5, 24) && !BitTest(Local_192.f_5, 3)) && !Local_192.f_156)
	{
		if (unk_0x6264B811E8D92198("scr_xs_dr"))
		{
			if (unk_0x90F6E2F6488B98BA(Local_192.f_159))
			{
				unk_0x76B797B61752AAB8("scr_xs_dr");
				unk_0xD9E306FF36C32C21("scr_xs_dr_emp", unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0f, -0.5f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
			}
		}
		Local_192.f_18 = 100;
		unk_0xF7A14A1A76B6DD17(0, 300, unk_0xF2DB717A73826179((150f * Local_192.f_131)));
		if (unk_0x78D9ADD511FEAD8B(Local_192.f_35))
		{
			Local_192.f_35 = unk_0xA9ADCC8D104AA552();
			unk_0x979FC7400A5D0CD2(Local_192.f_35, "Shock_Fire", unk_0xE8BBC6CC2C60F24A(Local_192.f_159), Local_192.f_157, 1, 0);
		}
		if (Local_192.f_33 != -1)
		{
			unk_0xF889BDFCC181BA9F(Local_192.f_33);
			unk_0xCDBCC1BC1184B002(Local_192.f_33);
			Local_192.f_33 = -1;
		}
		func_190(unk_0x6B62510F212526DC(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 1), 0);
		unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 3);
		Local_192.f_156 = 1;
		func_23(&(Local_192.f_249), 0, 0);
	}
}

void func_190(struct<3> Param0, bool bParam3)
{
	struct<6> Var0;
	
	Var0.f_0 = -1427892428;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = { Param0 };
	Var0.f_5 = bParam3;
	if (!bParam3)
	{
		if (!func_191(1, 1) == 0)
		{
			unk_0x2700C00F82C16BF0(1, &Var0, 6, func_191(1, 1));
		}
	}
	else if (Global_1958711.f_21 != func_12())
	{
		unk_0x2700C00F82C16BF0(1, &Var0, 6, func_8(Global_1958711.f_21));
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
		iVar2 = unk_0xA1087A6350CD9244(iVar1);
		if (func_19(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x9E2D6C50374FCFA9() || iParam0)
			{
				if (bParam1)
				{
					unk_0xCED9E32812D6C7C7(&uVar0, iVar1);
				}
				else if (!func_116(iVar2, 0))
				{
					unk_0xCED9E32812D6C7C7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_192()
{
	return BitTest(Global_1958711, 8);
}

int func_193()
{
	if ((unk_0x90F6E2F6488B98BA(Local_192.f_159) && unk_0x55B23FE400FCEA6B(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0)) && !BitTest(Local_192.f_5, 2))
	{
		return 1;
	}
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159))
	{
		if (func_164(unk_0x9E2D6C50374FCFA9()) && BitTest(Global_2813821, 0))
		{
		}
		else if (func_203())
		{
			if (unk_0x5C5B446AD691DEA2(unk_0xE8BBC6CC2C60F24A(Local_192.f_159)) || unk_0x79EE4CEF9CA802B6(unk_0xE8BBC6CC2C60F24A(Local_192.f_159)) != 0)
			{
				Local_192.f_26 = 1;
				return 1;
			}
		}
	}
	if (BitTest(Local_192.f_5, 2))
	{
		Local_192.f_26 = 4;
		return 1;
	}
	if (BitTest(Local_192.f_5, 9))
	{
		Local_192.f_26 = 1;
		return 1;
	}
	if (BitTest(Local_192.f_5, 7))
	{
		Local_192.f_26 = 0;
		return 1;
	}
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159))
	{
		if (unk_0xD8F9DF94CD871327(unk_0xE8BBC6CC2C60F24A(Local_192.f_159)) || func_202(unk_0xF2D8DACFAEBD9629(Local_192.f_159), 0))
		{
			if (BitTest(Local_192.f_5, 29))
			{
				Local_192.f_26 = 3;
				return 1;
			}
		}
	}
	if (func_200(unk_0x9E2D6C50374FCFA9()))
	{
		Local_192.f_26 = 0;
		return 1;
	}
	if (func_138())
	{
		if (Global_1853193 != func_12())
		{
			if (func_47(Global_1853193))
			{
				Local_192.f_26 = 0;
				return 1;
			}
		}
	}
	if (func_199())
	{
		Local_192.f_26 = 1;
		return 1;
	}
	if (func_198(unk_0x9E2D6C50374FCFA9()))
	{
		Local_192.f_26 = 0;
		return 1;
	}
	if (func_197())
	{
		Local_192.f_26 = 0;
		return 1;
	}
	if (func_196())
	{
		Local_192.f_26 = 0;
		return 1;
	}
	if (func_32())
	{
		Local_192.f_26 = 0;
		return 1;
	}
	if (func_37())
	{
		Local_192.f_26 = 0;
		return 1;
	}
	if (func_31())
	{
		if (unk_0xE63474311C6E3825(unk_0xE2D3D51028F0428A(), 1))
		{
			Local_192.f_26 = 6;
			return 1;
		}
		if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) || unk_0xC96A660F9CAB40FC(unk_0xE2D3D51028F0428A()))
		{
			Local_192.f_26 = 6;
			return 1;
		}
		if (func_155(unk_0xE2D3D51028F0428A(), Local_192.f_153, 1) > 2f)
		{
			Local_192.f_26 = 7;
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
			if (func_22(&(Local_192.f_346), 2000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_21(&(Local_192.f_346));
		}
	}
	return 0;
}

bool func_194(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

int func_195()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { -90000f, -90000f, -1600f };
	Var3 = { 90000f, 90000f, 2600f };
	if (!unk_0x90F6E2F6488B98BA(Local_192.f_159))
	{
		return 0;
	}
	if (!unk_0xB950B5D01E8A4868(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), Var0, Var3, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_196()
{
	return Global_97750;
}

bool func_197()
{
	return BitTest(Global_1958711, 9);
}

int func_198(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1892703[iVar0 /*599*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_199()
{
	struct<3> Var0;
	
	if (Local_192.f_17 == joaat("v_faceoffice"))
	{
		if (func_17(unk_0xE8BBC6CC2C60F24A(Local_192.f_159)))
		{
			if (unk_0x782B98242B6BBB25(unk_0xE8BBC6CC2C60F24A(Local_192.f_159)) == joaat("GtaMloRoom001"))
			{
				Var0 = { unk_0x6B62510F212526DC(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 1) };
				if (Var0.f_2 >= 47f)
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159))
	{
		if (func_17(unk_0xE8BBC6CC2C60F24A(Local_192.f_159)))
		{
			if (unk_0xD132EDDA78FF4A51(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), -1071.258f, -242.5484f, 48.02133f, -1069.456f, -245.9234f, 43.87983f, 3f, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0xD132EDDA78FF4A51(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 2494.398f, -276.2f, -69.09f, 2494.342f, -277.4824f, -67.98756f, 0.7f, 0, 1, 0))
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
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 4);
	}
	return 0;
}

int func_202(int iParam0, int iParam1)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0) || iParam1)
		{
			if (unk_0xD8F9DF94CD871327(iParam0))
			{
				if (unk_0x1CC29FEB3B8D48E8(iParam0) >= 0.7f)
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
	return BitTest(Global_1958711, 15);
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
	
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159) && !unk_0x55B23FE400FCEA6B(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0))
	{
		if (unk_0x07B2F8356DC13CF4(Local_192.f_159))
		{
			Var0 = { Local_192.f_150 };
			switch (Local_192.f_13)
			{
				case 0:
					Var3 = { unk_0x524171C8263E7C3E() };
					Var6 = { unk_0x52BD0FA2342C7246(2) };
					Var9 = { (-unk_0x0BADBFA3B172435F(Var6.f_2) * unk_0xD0FFB162F40A139C(Var6.f_0)), (unk_0xD0FFB162F40A139C(Var6.f_2) * unk_0xD0FFB162F40A139C(Var6.f_0)), unk_0x0BADBFA3B172435F(Var6.f_0) };
					Var12 = { 10f, 10f, 10f };
					if (func_24())
					{
						Var12 = { Global_262145.f_25340, Global_262145.f_25340, Global_262145.f_25340 };
					}
					Var15 = { Var3 + Var9 * Var12 };
					Var0 = { unk_0x6DB7FBD602C51670(Local_192.f_150, unk_0x82FE2343F8BDFF0B(unk_0xE8BBC6CC2C60F24A(Local_192.f_159)), 0f, -0.1f, 0f) };
					Local_192.f_167 = unk_0x1E4C19DC2AD86A18(Var0, Var15, 123, unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 7);
					if (Local_192.f_167 != 0)
					{
						Local_192.f_13 = 1;
					}
					break;
				
				case 1:
					Local_192.f_244 = unk_0xB2D581BD7446BBE9(Local_192.f_167, &iVar18, &Var22, &uVar19, &iVar25);
					if (Local_192.f_244 == 2)
					{
						if (iVar18 == 0)
						{
							Local_192.f_14 = 1;
							Var22 = { 0f, 0f, 0f };
							if (BitTest(Local_192.f_5, 11) && !func_24())
							{
								unk_0xB0550BC91B0159D6(&(Local_192.f_5), 11);
							}
							if (BitTest(Local_192.f_5, 23))
							{
								unk_0xB0550BC91B0159D6(&(Local_192.f_5), 23);
							}
							func_211();
						}
						else
						{
							Local_192.f_14 = 2;
							if (unk_0xE5965CDF24F93A9F(iVar25))
							{
								if (unk_0x9044EDB8A7BF67B4(iVar25))
								{
									if (!unk_0x55B23FE400FCEA6B(iVar25, 0))
									{
										if (unk_0x65FAB09725E2FE75(unk_0x28AA31872A651BC7(iVar25)))
										{
											if (func_209(unk_0x9E2D6C50374FCFA9(), unk_0xFF65CDB0EB7ACE71(unk_0x28AA31872A651BC7(iVar25))))
											{
												bVar26 = true;
											}
										}
										else
										{
											if (!BitTest(Local_192.f_5, 23))
											{
												unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 23);
												if (BitTest(Local_192.f_5, 11) && !func_24())
												{
													unk_0xB0550BC91B0159D6(&(Local_192.f_5), 11);
												}
											}
											if (!func_90(unk_0x9E2D6C50374FCFA9()) && !func_87(unk_0x9E2D6C50374FCFA9()))
											{
												if ((func_208(unk_0x28AA31872A651BC7(iVar25)) || func_207(unk_0x28AA31872A651BC7(iVar25))) || func_206(unk_0x28AA31872A651BC7(iVar25)))
												{
													func_86(Global_1837205);
													func_205(&(Local_192.f_259), 0, 0);
												}
												else
												{
													func_211();
												}
											}
										}
										if ((((!BitTest(Local_192.f_5, 11) && !bVar26) && func_17(Global_1958711.f_23)) && unk_0xD936DBC1D824A1BE(Global_1958711.f_23, iVar25, 511)) && (unk_0x65FAB09725E2FE75(unk_0x28AA31872A651BC7(iVar25)) && unk_0xE2D3D51028F0428A() != unk_0x28AA31872A651BC7(iVar25)))
										{
											unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 11);
											if (BitTest(Local_192.f_5, 23))
											{
												unk_0xB0550BC91B0159D6(&(Local_192.f_5), 23);
											}
										}
									}
								}
								else
								{
									if (!func_24())
									{
										if (BitTest(Local_192.f_5, 11))
										{
											unk_0xB0550BC91B0159D6(&(Local_192.f_5), 11);
										}
									}
									if (BitTest(Local_192.f_5, 23))
									{
										unk_0xB0550BC91B0159D6(&(Local_192.f_5), 23);
									}
									func_211();
								}
							}
							else
							{
								func_211();
							}
							Local_192.f_167 = 0;
							Local_192.f_13 = 0;
						}
					}
					else if (Local_192.f_244 == 0)
					{
						Local_192.f_13 = 0;
					}
					break;
			}
		}
		else
		{
			unk_0xC31EECA11005273C(Local_192.f_159);
		}
	}
}

void func_205(var uParam0, bool bParam1, bool bParam2)
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

int func_206(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (unk_0x012A87EEEAD89783(iParam0) == -183807561)
		{
			return 1;
		}
	}
	return 0;
}

int func_207(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if ((((((((((((unk_0xBE07513D5933D805(iParam0) == 7 || unk_0xBE07513D5933D805(iParam0) == 8) || unk_0xBE07513D5933D805(iParam0) == 9) || unk_0xBE07513D5933D805(iParam0) == 10) || unk_0xBE07513D5933D805(iParam0) == 11) || unk_0xBE07513D5933D805(iParam0) == 12) || unk_0xBE07513D5933D805(iParam0) == 13) || unk_0xBE07513D5933D805(iParam0) == 14) || unk_0xBE07513D5933D805(iParam0) == 15) || unk_0xBE07513D5933D805(iParam0) == 16) || unk_0xBE07513D5933D805(iParam0) == 17) || unk_0xBE07513D5933D805(iParam0) == 18) || unk_0xBE07513D5933D805(iParam0) == 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_208(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if ((((unk_0xBE07513D5933D805(iParam0) == 6 || unk_0xBE07513D5933D805(iParam0) == 29) || unk_0xBE07513D5933D805(iParam0) == 27) || unk_0x012A87EEEAD89783(iParam0) == joaat("army")) || unk_0x012A87EEEAD89783(iParam0) == joaat("COP"))
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
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_12();
}

void func_211()
{
	if (func_25(&(Local_192.f_259)))
	{
		if (func_22(&(Local_192.f_259), 60000, 0))
		{
			func_21(&(Local_192.f_259));
			if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) <= 0)
			{
				func_86(Global_1837194);
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
		if (!BitTest(Local_192.f_5, 29))
		{
			return;
		}
	}
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159) && !unk_0x55B23FE400FCEA6B(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0))
	{
		if (unk_0x0BF4B1193E541C22(unk_0xE8BBC6CC2C60F24A(Local_192.f_159)))
		{
			return;
		}
		if (unk_0x07B2F8356DC13CF4(Local_192.f_159))
		{
			switch (Local_192.f_11)
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
						fVar13 = (func_215(Local_192.f_240) * 1.5f);
					}
					if (func_83())
					{
						Var14 = { Local_192.f_150 };
						Var1 = { unk_0x524171C8263E7C3E() };
						Var4 = { unk_0x52BD0FA2342C7246(2) };
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
						Var14 = { Local_192.f_150 };
						Var17 = { Local_192.f_150 };
					}
					Local_192.f_166 = unk_0x9D2C476A7D8D9385(Var14, Var17, fVar13, 511, unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 4);
					if (Local_192.f_166 != 0)
					{
						Local_192.f_11 = 1;
					}
					break;
				
				case 1:
					iVar28 = unk_0xB2D581BD7446BBE9(Local_192.f_166, &iVar20, &Var24, &uVar21, &iVar27);
					if (iVar28 == 2)
					{
						if (iVar20 == 0)
						{
							Local_192.f_12 = 1;
							Var24 = { 0f, 0f, 0f };
						}
						else
						{
							if (unk_0xE5965CDF24F93A9F(iVar27))
							{
								if (unk_0x04D9F44466CBF3CA(iVar27))
								{
									if (!unk_0x55B23FE400FCEA6B(iVar27, 0) && unk_0x15CAA6D7B11F1A7C(iVar27) != Local_192.f_240)
									{
										if (unk_0x207D53F9E0190691(iVar27) > 0.5f || func_213(unk_0x15CAA6D7B11F1A7C(iVar27)))
										{
											if (!BitTest(Local_192.f_5, 9))
											{
												unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 9);
											}
										}
									}
								}
								else if (unk_0x9044EDB8A7BF67B4(iVar27))
								{
									if (!unk_0x55B23FE400FCEA6B(iVar27, 0))
									{
										if (!unk_0x65FAB09725E2FE75(unk_0x28AA31872A651BC7(iVar27)))
										{
											if (Local_192.f_28 == 0)
											{
												iVar0 = unk_0x5853B15F78E1A265(0, 3);
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
												Local_192.f_28 = unk_0xAA8EA67D77D37C61(iVar29, Local_192.f_150, 5000f);
												func_205(&(Local_192.f_265), 0, 0);
											}
										}
									}
								}
							}
							Local_192.f_12 = 2;
							unk_0xF7A14A1A76B6DD17(0, 300, 50);
							Local_192.f_166 = 0;
							Local_192.f_11 = 0;
						}
					}
					else if (iVar28 == 0)
					{
						Local_192.f_11 = 0;
					}
					break;
			}
			if (Local_192.f_28 != 0)
			{
				if (func_25(&(Local_192.f_265)))
				{
					if (func_22(&(Local_192.f_265), 5000, 0))
					{
						unk_0x527AAB28DB255A95(Local_192.f_28);
						func_21(&(Local_192.f_265));
						Local_192.f_28 = 0;
					}
				}
			}
		}
		else
		{
			unk_0xC31EECA11005273C(Local_192.f_159);
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
	if (unk_0x4262B4DCEADC2695(iParam0) || unk_0xD6F7D32A98E07F93(iParam0))
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
			if (!Global_262145.f_14731)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14732)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14730)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14733)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14735)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14734)
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
			if (Global_262145.f_19186)
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
			if (Global_262145.f_19188)
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
			if (Global_262145.f_19192)
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
			if (Global_262145.f_19189)
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
			if (Global_262145.f_19196)
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
			if (Global_262145.f_19194)
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
			if (Global_262145.f_19199)
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
			if (Global_262145.f_21144)
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
			if (Global_262145.f_21145)
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
	return unk_0x48053974ED6F63CE((Var0.f_2 - Var3.f_2));
}

void func_216(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x61ADF697DF551DA6(iParam0))
	{
		unk_0xB38EF75835FAF667(iParam0, uParam1, uParam2);
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
	
	func_218(iParam0, &Global_1577992);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x61ADF697DF551DA6(Global_1577992[iVar0]))
		{
			unk_0xB38EF75835FAF667(Global_1577992[iVar0], &(Global_1577996[iVar0 /*3*/]), &(Global_1578003[iVar0 /*3*/]));
		}
		if (unk_0x652D2EEEF1D3E62C(Global_1577996[iVar0 /*3*/]) <= 0.01f || unk_0x652D2EEEF1D3E62C(Global_1578003[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1577996[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1578003[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1577996[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1578003[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1577996[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1578003[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1578010[iVar0] = (Global_1578003[iVar0 /*3*/] - Global_1577996[iVar0 /*3*/]);
		Global_1578013[iVar0] = (Global_1578003[iVar0 /*3*/].f_1 - Global_1577996[iVar0 /*3*/].f_1);
		Global_1578016[iVar0] = (Global_1578003[iVar0 /*3*/].f_2 - Global_1577996[iVar0 /*3*/].f_2);
		if (Global_1578010[iVar0] > Global_1578019)
		{
			Global_1578019 = Global_1578010[iVar0];
		}
		if (Global_1578016[iVar0] > Global_1578020)
		{
			Global_1578020 = Global_1578016[iVar0];
		}
		iVar0++;
	}
	Global_1578021 = (Global_1578019 * -0.5f);
	Global_1578024 = (Global_1578019 * 0.5f);
	Global_1578021.f_1 = ((((0.5f * Global_1578013[0]) + Global_1578013[1]) + Global_1577992.f_3) * -1f);
	Global_1578024.f_1 = (0.5f * Global_1578013[0]);
	Global_1578021.f_2 = (Global_1578016[0] * -0.5f);
	Global_1578024.f_2 = (Global_1578016[0] * 0.5f);
	*uParam1 = { Global_1578021 };
	*uParam2 = { Global_1578024 };
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
	
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159))
	{
		if (func_17(unk_0xE8BBC6CC2C60F24A(Local_192.f_159)))
		{
			iVar0 = func_224(unk_0xE8BBC6CC2C60F24A(Local_192.f_159));
			if (iVar0 != -1)
			{
				if (!func_223(&(Global_1835502.f_389), iVar0) && !func_223(&(Global_1892703[unk_0x9E2D6C50374FCFA9() /*599*/].f_535), iVar0))
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
			if (!BitTest(Global_1958711, 9))
			{
				unk_0xCED9E32812D6C7C7(&Global_1958711, 9);
			}
		}
	}
	else if (BitTest(Global_1958711, 9))
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 9);
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
	
	if (unk_0xE5965CDF24F93A9F(iParam0) && !unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		iVar0 = func_228(iParam0);
		if (iVar0 != -1)
		{
			return iVar0;
		}
		iVar1 = unk_0x6D7EE245AD1E10B0(iParam0);
		if (iVar1 != 0)
		{
			iVar2 = 0;
			while (iVar2 < 43)
			{
				iVar3 = iVar2;
				func_225(iVar3);
				if (Global_1951109[iVar2] == iVar1)
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
	if (Global_1951109[iVar0] == 0)
	{
		Global_1951109[iVar0] = unk_0x63AC7EFB770FCB6F(func_227(iParam0), func_226(iParam0));
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
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if ((unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 3833.558f, 3666.702f, -20.91209f, 3818.202f, 3654.002f, -26.37315f, 12.25f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 3765.784f, 3661.946f, -15.33658f, 3823.827f, 3654.624f, -24.84368f, 13.75f, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 3519.188f, 3724.821f, -0.487321f, 3767.179f, 3661.705f, -32.33569f, 115f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_230(int iParam0)
{
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(iParam0, 1), -16.2669f, -685.4531f, 31.3381f, 1) <= 80f)
		{
			if ((((((unk_0xD132EDDA78FF4A51(iParam0, -73.06738f, -689.2972f, 31.96555f, -68.41993f, -676.6198f, 36.63721f, 4.25f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(iParam0, 25.07854f, -664.3469f, 30.40673f, 14.14475f, -690.1883f, 38.61758f, 16f, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(iParam0, -18.7689f, -659.366f, 30.79917f, -15.31378f, -703.7052f, 38.08809f, 54.5f, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(iParam0, 9.119493f, -710.9459f, 30.83068f, -39.76558f, -693.0358f, 38.08809f, 24.25f, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(iParam0, -69.84457f, -683.3396f, 30.70474f, -39.69342f, -690.2305f, 36.58809f, 17.25f, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(iParam0, -43.32302f, -693.9668f, 30.58809f, -72.39151f, -683.4483f, 39.48361f, 20f, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(iParam0, -39.63783f, -686.181f, 30.58809f, -39.30408f, -662.2571f, 39.48083f, 20f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_231(int iParam0)
{
	return ((!unk_0x55B23FE400FCEA6B(iParam0, 0) && unk_0x8F41785F110B0DA0(iParam0, 3042.596f, -4667.915f, 34.26143f, 250f, 300f, 40f, 0, 1, 0)) || func_232());
}

int func_232()
{
	if (!unk_0xA829C9A2767AC8EF())
	{
		if (unk_0xB7A628320EFF8E47(func_6(unk_0x9E2D6C50374FCFA9()), 3042.596f, -4667.915f, 34.26143f) <= 25600f)
		{
			if (unk_0x0318E2EE6FB4563F(3042.596f, -4667.915f, 34.26143f, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_233(int iParam0)
{
	return ((!unk_0x55B23FE400FCEA6B(iParam0, 0) && unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -2016.6f, -1039.867f, -3.801932f, -2129.956f, -1003.351f, 22.18234f, 15.75f, 0, 1, 0)) || func_234());
}

int func_234()
{
	struct<3> Var0;
	
	if (!unk_0xA829C9A2767AC8EF())
	{
		Var0 = { -2073.541f, -1021.104f, 14.99213f };
		if (unk_0xB7A628320EFF8E47(func_6(unk_0x9E2D6C50374FCFA9()), Var0) <= 25600f)
		{
			if (unk_0x0318E2EE6FB4563F(Var0, 60f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_235(int iParam0)
{
	return ((!unk_0x55B23FE400FCEA6B(iParam0, 0) && unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f), Vector(22.18234f, -1003.351f, -2129.956f) + Vector(0f, 7773.967f, 654.731f), 15.75f, 0, 1, 0)) || func_236());
}

int func_236()
{
	struct<3> Var0;
	
	if (!unk_0xA829C9A2767AC8EF())
	{
		Var0 = { Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f) };
		if (unk_0xB7A628320EFF8E47(func_6(unk_0x9E2D6C50374FCFA9()), Var0) <= 25600f)
		{
			if (unk_0x0318E2EE6FB4563F(Var0, 50f))
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
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159))
	{
		if (unk_0x876B1078E90C91CB(Local_192.f_169) && unk_0xA24FDA4986456697(Local_192.f_169))
		{
			if (unk_0x4B0B4E357722C507(Local_192.f_169) || iParam0)
			{
				if (!func_77())
				{
					func_71(0);
				}
				func_248(1);
				if ((!func_247() || BitTest(Local_192.f_5, 1)) || func_193())
				{
					unk_0xC43E67C9BA871ECB();
				}
				else
				{
					unk_0xAC765EF46E85A446(9);
					unk_0xAC765EF46E85A446(7);
					unk_0xAC765EF46E85A446(8);
					func_80();
					func_245(1);
					uVar0 = unk_0x6D7EE245AD1E10B0(unk_0xF2D8DACFAEBD9629(Local_192.f_159));
					if (unk_0xBCC73B466E2B2350(uVar0))
					{
						Global_1958711.f_24 = uVar0;
						if (!BitTest(Local_192.f_5, 8))
						{
							Local_192.f_123 = func_244(unk_0xA88BC56DFD999B0A(uVar0));
							unk_0xD0434C3B2D654157(uVar0, &(Local_192.f_147), &(Local_192.f_17));
							unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 8);
						}
						iVar1 = 0;
						if (func_243(Local_192.f_150.f_2, 43f, 48.7f))
						{
							iVar1 = 1;
						}
						if (Global_1958711.f_9 == -1f)
						{
							unk_0x93D95F240BBB4805(1f);
						}
						else
						{
							unk_0x93D95F240BBB4805(Global_1958711.f_9);
						}
						if ((!func_164(unk_0x9E2D6C50374FCFA9()) && !func_240(unk_0x9E2D6C50374FCFA9())) && !func_16())
						{
							if (!func_239())
							{
								func_238(1);
							}
						}
						if (!func_16())
						{
							unk_0x111B8C39EE6C95E7(0, 0);
						}
						unk_0x7886A9E2DC3CF65B(Local_192.f_17, Local_192.f_147, Local_192.f_147.f_1, unk_0xF34EE736CF047844(Local_192.f_123), iVar1);
					}
					else
					{
						Local_192.f_17 = -1;
						if (Global_1958711.f_9 == -1f)
						{
							unk_0x93D95F240BBB4805(0f);
						}
						else
						{
							unk_0x93D95F240BBB4805(Global_1958711.f_9);
						}
						if (!func_239() && !func_16())
						{
							func_238(1);
						}
						if (!func_16())
						{
							unk_0x111B8C39EE6C95E7(0, 0);
						}
						Global_1958711.f_24 = -1;
						if (BitTest(Local_192.f_5, 8))
						{
							unk_0xB0550BC91B0159D6(&(Local_192.f_5), 8);
						}
					}
				}
			}
		}
	}
}

void func_238(int iParam0)
{
	Global_2727832 = iParam0;
}

bool func_239()
{
	return Global_2727832;
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
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
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
		Global_100493.f_8 = 1;
	}
	else
	{
		Global_100493.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 58)
	{
		func_246(iVar0);
		iVar0++;
	}
}

void func_246(int iParam0)
{
	Global_100493.f_196[iParam0] = 1;
	Global_100493.f_195 = 1;
}

bool func_247()
{
	return BitTest(Global_1958711, 4);
}

void func_248(int iParam0)
{
	if (Global_2815059.f_4623 != iParam0)
	{
		Global_2815059.f_4623 = iParam0;
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
	
	if ((BitTest(Local_192.f_5, 1) || func_193()) || func_83())
	{
		return;
	}
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159) && !unk_0x55B23FE400FCEA6B(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0))
	{
		if (unk_0x07B2F8356DC13CF4(Local_192.f_159))
		{
			fVar0 = 40f;
			fVar1 = 19f;
			fVar2 = 14f;
			iVar3 = 1;
			fVar4 = unk_0x89D8EA6BE9E3F747(unk_0xE8BBC6CC2C60F24A(Local_192.f_159));
			fVar5 = unk_0xB8F48796849E41E3(unk_0xE8BBC6CC2C60F24A(Local_192.f_159));
			if (func_30())
			{
				fVar1 = 10f;
			}
			fVar6 = (30f * unk_0x0000000050597EE2());
			func_254();
			unk_0x7BC5E5A5FF7F278F(2);
			func_253(&(Local_192[0]), &(Local_192[1]), &(Local_192[2]), &(Local_192[3]), 0, 0);
			if (unk_0x3A76A0944BE2C291(0))
			{
				iVar3 = 5;
				Local_192[2] = (Local_192[2] * iVar3);
				Local_192[3] = (Local_192[3] * iVar3);
			}
			if (unk_0xC63A09AA9006F776())
			{
				Local_192[3] = (Local_192[3] * -1);
			}
			if (func_22(&(Local_192.f_277), 750, 0))
			{
				if (!unk_0x3A76A0944BE2C291(0))
				{
					bVar7 = unk_0xF01464D7AF0B7347(0, 210);
				}
				else
				{
					bVar7 = (unk_0xF01464D7AF0B7347(0, 241) || unk_0xF01464D7AF0B7347(0, 242));
					if (unk_0xF01464D7AF0B7347(0, 241))
					{
						bVar8 = true;
					}
				}
				if (bVar7)
				{
					func_205(&(Local_192.f_277), 0, 0);
				}
			}
			if (bVar7 && !func_252())
			{
				if (!unk_0x3A76A0944BE2C291(0))
				{
					Local_192.f_25++;
				}
				else if (bVar8)
				{
					Local_192.f_25 = (Local_192.f_25 - 1);
				}
				else
				{
					Local_192.f_25++;
				}
				if (unk_0x78D9ADD511FEAD8B(Local_192.f_39))
				{
					Local_192.f_39 = unk_0xA9ADCC8D104AA552();
					unk_0x91DFC8F68F6D9B05(Local_192.f_39, "HUD_Zoom_Change", Local_192.f_157, 1);
				}
				if (Local_192.f_25 > 2)
				{
					Local_192.f_25 = 0;
				}
				else if (Local_192.f_25 < 0)
				{
					Local_192.f_25 = 2;
				}
			}
			else if (unk_0x78D9ADD511FEAD8B(Local_192.f_39))
			{
				unk_0xF889BDFCC181BA9F(Local_192.f_39);
				unk_0xCDBCC1BC1184B002(Local_192.f_39);
				Local_192.f_39 = -1;
			}
			Local_192.f_128 = (Local_192.f_128 + (((Local_192.f_126 - Local_192.f_128) * 0.06f) * fVar6));
			unk_0x0A18C027350D3C19(Local_192.f_169, Local_192.f_128);
			if (Local_192[2] != 0 || Local_192[3] != 0)
			{
				if (Local_192[2] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_192[2])));
				}
				else
				{
					fVar9 = 0f;
				}
				if (Local_192[3] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_192[3])));
				}
				else
				{
					fVar10 = 0f;
				}
				Var14 = { unk_0x63A8BF5E6C2BF85C(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 2) };
				fVar11 = (((fVar10 * 0.05f) * fVar6) * Local_192.f_130);
				fVar12 = -(((fVar9 * 0.05f) * fVar6) * Local_192.f_130);
				if ((fVar4 != 0f || Local_192[0] != 0) && !func_77())
				{
					if (Local_192[0] != 0)
					{
						fVar20 = (1f / (127f / IntToFloat(Local_192[0])));
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
					if (Local_192[0] == 0)
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
				if (!BitTest(Local_192.f_5, 12))
				{
					unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 12);
				}
				unk_0x8CE3D365F064F69E(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), Vector(0f, 0f, 0f) + Vector(Var17.f_2, Var17.f_1, Var17.f_0), 2, 1);
			}
			else if (((Local_192[0] != 0 || Local_192[1] != 0) && !func_252()) && !func_77())
			{
				Var21 = { unk_0x63A8BF5E6C2BF85C(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 2) };
				if (func_252())
				{
					if (func_251())
					{
						fVar25 = -1f;
						Local_192.f_129 = fVar25;
					}
				}
				else
				{
					if (Local_192[0] != 0)
					{
						fVar24 = (1f / (127f / IntToFloat(Local_192[0])));
						Local_192.f_129 = fVar24;
					}
					else
					{
						fVar24 = 0f;
					}
					if (Local_192[1] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_192[1])));
						Local_192.f_129 = fVar24;
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
					if ((Local_192[0] == 0 && !func_77()) || func_252())
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
				if (BitTest(Local_192.f_5, 12))
				{
					unk_0xB0550BC91B0159D6(&(Local_192.f_5), 12);
				}
				unk_0x8CE3D365F064F69E(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), Vector(0f, 0f, 0f) + Vector(Var21.f_2, Var28.f_1, Var28.f_0), 2, 1);
			}
			else if (!func_251() && !func_252())
			{
				Local_192.f_129 = 0f;
				Var31 = { unk_0x63A8BF5E6C2BF85C(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 2) };
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
					if (BitTest(Local_192.f_5, 12))
					{
						Var38.f_0 = Var31.f_0;
					}
					unk_0x8CE3D365F064F69E(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), Vector(0f, 0f, 0f) + Vector(Var31.f_2, Var38.f_1, Var38.f_0), 2, 1);
				}
			}
		}
		else
		{
			unk_0xC31EECA11005273C(Local_192.f_159);
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
	return BitTest(Local_192.f_5, 22);
}

bool func_252()
{
	return BitTest(Local_192.f_5, 21);
}

void func_253(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x3BF65CF27F6CFBBE(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x3BF65CF27F6CFBBE(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x3BF65CF27F6CFBBE(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x3BF65CF27F6CFBBE(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xF98FF61CD2D3500D(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x1EC2077A4D963881(2, 218) * 127f));
		}
		if (!unk_0xF98FF61CD2D3500D(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0x1EC2077A4D963881(2, 219) * 127f));
		}
		if (!unk_0xF98FF61CD2D3500D(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x1EC2077A4D963881(2, 220) * 127f));
		}
		if (!unk_0xF98FF61CD2D3500D(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0x1EC2077A4D963881(2, 221) * 127f));
		}
	}
	if (unk_0x3A76A0944BE2C291(2))
	{
		if (bParam5)
		{
			if (unk_0xC63A09AA9006F776())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0x2ED671F67654FD28())
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
		switch (Local_192.f_25)
		{
			case 0:
				Local_192.f_127 = 90f;
				Local_192.f_126 = 90f;
				break;
			
			case 1:
				Local_192.f_127 = 75f;
				Local_192.f_126 = 75f;
				break;
			
			case 2:
				Local_192.f_127 = 45f;
				Local_192.f_126 = 45f;
				break;
		}
	}
	else
	{
		switch (Local_192.f_25)
		{
			case 0:
				Local_192.f_127 = 90f;
				Local_192.f_126 = 90f;
				break;
			
			case 1:
				Local_192.f_127 = 80f;
				Local_192.f_126 = 80f;
				break;
			
			case 2:
				Local_192.f_127 = 70f;
				Local_192.f_126 = 70f;
				break;
			}
	}
}

void func_255()
{
	int iVar0;
	int iVar1;
	
	if (func_70(unk_0x9E2D6C50374FCFA9(), 0))
	{
		iVar0 = func_180(0);
		Local_192.f_141 = { func_258(&Local_192) };
		if (!unk_0xE5965CDF24F93A9F(Local_192.f_162))
		{
			if (!func_257(Local_192.f_141))
			{
				if (func_179(iVar0))
				{
					Local_192.f_162 = unk_0x0E536D72AB30F4C8(iVar0, Local_192.f_141, 0, 0, 1);
					unk_0xA539EDE8DA5BBC22(Local_192.f_162, Local_192.f_141, 0, 0, 1);
					unk_0x959E1626CBC7D38A(Local_192.f_162, true, 0);
					unk_0x006574E87E6F1942(Local_192.f_162, 1, 1);
					unk_0x3AA7FA9BA4F7A9E7(Local_192.f_162, 1);
					unk_0xBBF86885619695CE(Local_192.f_162, func_256());
					unk_0x5C65DDDC219B3AA5(Local_192.f_162, true);
					unk_0x1C2ED929474DC6FE(Local_192.f_162, false, 0);
					unk_0xF1A23B343DFEDFD0(iVar0);
				}
			}
		}
		else
		{
			iVar1 = unk_0x87A467676BDF8C35(Local_192.f_141, 2f, iVar0, 0, 0, 0);
			if (unk_0xE5965CDF24F93A9F(iVar1) && iVar1 != Local_192.f_162)
			{
				if (unk_0x3A8B0F5B0E3DE13A(iVar1))
				{
					unk_0x3FF6DDE9123AEA35(iVar1, 0, 0);
					unk_0x5C65DDDC219B3AA5(iVar1, true);
					unk_0x1C2ED929474DC6FE(iVar1, true, 0);
				}
				else
				{
					unk_0xE7DD33D0E2A313F4(iVar1);
				}
			}
		}
	}
	else
	{
		Local_192.f_141 = { func_258(&Local_192) };
	}
}

float func_256()
{
	if (Global_1958711.f_7 != 0f)
	{
		return Global_1958711.f_7;
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
	if (!func_257(Global_1958711.f_10))
	{
		return Global_1958711.f_10;
	}
	else
	{
		return uParam0->f_141;
	}
	return 0f, 0f, 0f;
}

void func_259()
{
	if (Local_192.f_33 != -1)
	{
		unk_0xF889BDFCC181BA9F(Local_192.f_33);
		unk_0xCDBCC1BC1184B002(Local_192.f_33);
		Local_192.f_33 = -1;
	}
}

int func_260(bool bParam0)
{
	if (unk_0xF1EC2C71FD1371B8() || unk_0x06C559386AD19942())
	{
		return 1;
	}
	if (unk_0xD199EE48D2842EB1())
	{
		return 1;
	}
	if (func_172())
	{
		return 1;
	}
	if (func_265(unk_0x9E2D6C50374FCFA9()) && !func_264())
	{
		return 1;
	}
	if (func_164(unk_0x9E2D6C50374FCFA9()))
	{
		if (BitTest(Global_2813821, 0))
		{
			return 1;
		}
	}
	if (Global_1931426 || Global_1574964)
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
	if (unk_0x78711A80544B2439())
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (func_262(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4C1B8C5717647539(0, 25) || unk_0x4C1B8C5717647539(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23011.f_130)
	{
		return 0;
	}
	if (unk_0x4C1B8C5717647539(0, 19) || (!bParam0 && unk_0x0DBA73788F6E3C5F(0, 19)))
	{
		return 1;
	}
	if (unk_0x8FE9914D4872D601())
	{
		if (((unk_0x4C1B8C5717647539(0, 166) || unk_0x4C1B8C5717647539(0, 167)) || unk_0x4C1B8C5717647539(0, 168)) || unk_0x4C1B8C5717647539(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x0DBA73788F6E3C5F(0, 166) || unk_0x0DBA73788F6E3C5F(0, 167)) || unk_0x0DBA73788F6E3C5F(0, 168)) || unk_0x0DBA73788F6E3C5F(0, 169))
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
	
	if (unk_0x28FF2C2261B6CBA1())
	{
		if (!unk_0xF68107C40359970C(iParam0))
		{
			unk_0xA7E29842FA438ED6(iParam0, &iVar0, 1);
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
			unk_0xCED9E32812D6C7C7(&Global_1958711, 20);
		}
	}
	else if (func_37())
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 20);
	}
}

bool func_264()
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965531, 0));
}

int func_265(int iParam0)
{
	if (func_116(iParam0, 0))
	{
		return 1;
	}
	if (func_266())
	{
		if (iParam0 == unk_0x9E2D6C50374FCFA9())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 2))
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
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159) && !unk_0x55B23FE400FCEA6B(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0))
	{
		if (unk_0x07B2F8356DC13CF4(Local_192.f_159))
		{
			fVar0 = 40f;
			fVar1 = 30f;
			fVar2 = 30f;
			iVar3 = 1;
			fVar4 = unk_0x89D8EA6BE9E3F747(unk_0xE8BBC6CC2C60F24A(Local_192.f_159));
			fVar5 = unk_0xB8F48796849E41E3(unk_0xE8BBC6CC2C60F24A(Local_192.f_159));
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
			fVar7 = (30f * unk_0x51109C28352EC9A3());
			func_254();
			unk_0x7BC5E5A5FF7F278F(2);
			func_253(&(Local_192[0]), &(Local_192[1]), &(Local_192[2]), &(Local_192[3]), 0, 0);
			if (unk_0x3A76A0944BE2C291(0))
			{
				iVar3 = 2;
				if (func_16())
				{
					iVar3 = 3;
				}
				Local_192[2] = (Local_192[2] * iVar3);
				Local_192[3] = (Local_192[3] * iVar3);
			}
			if (unk_0xC63A09AA9006F776())
			{
				Local_192[3] = (Local_192[3] * -1);
				Local_192[1] = (Local_192[1] * -1);
			}
			if (Local_192[3] != 0 && Local_192[2] != 0)
			{
				iVar8 = func_269(unk_0x07141611FD632B59(Local_192[3]), unk_0x07141611FD632B59(Local_192[2]));
				Local_192.f_129 = (1f / (127f / IntToFloat(iVar8)));
			}
			else if (Local_192[1] != 0 && Local_192[0] != 0)
			{
				iVar9 = func_269(unk_0x07141611FD632B59(Local_192[1]), unk_0x07141611FD632B59(Local_192[0]));
				Local_192.f_129 = (1f / (127f / IntToFloat(iVar9)));
			}
			else if (Local_192[3] != 0)
			{
				Local_192.f_129 = (1f / (127f / IntToFloat(Local_192[3])));
			}
			else if (Local_192[2] != 0)
			{
				Local_192.f_129 = (1f / (127f / IntToFloat(Local_192[2])));
			}
			else if (Local_192[1] != 0)
			{
				Local_192.f_129 = (1f / (127f / IntToFloat(Local_192[1])));
			}
			else if (Local_192[0] != 0)
			{
				Local_192.f_129 = (1f / (127f / IntToFloat(Local_192[0])));
			}
			else
			{
				Local_192.f_129 = 0f;
			}
			if (iVar6 && ((Local_192[2] != 0 || Local_192[3] != 0) || (Local_192[0] != 0 || Local_192[1] != 0)))
			{
				if (Local_192[2] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_192[2])));
				}
				else if (Local_192[0] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_192[0])));
				}
				else
				{
					fVar10 = 0f;
				}
				if (Local_192[3] != 0)
				{
					fVar11 = (1f / (127f / IntToFloat(Local_192[3])));
				}
				else if (Local_192[1] != 0)
				{
					fVar11 = (1f / (127f / IntToFloat(Local_192[1])));
				}
				else
				{
					fVar11 = 0f;
				}
				Var15 = { unk_0x63A8BF5E6C2BF85C(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 2) };
				fVar12 = (((fVar11 * 0.05f) * fVar7) * Local_192.f_130);
				fVar13 = -(((fVar10 * 0.05f) * fVar7) * Local_192.f_130);
				if ((fVar4 != 0f || Local_192[2] != 0) || Local_192[0] != 0)
				{
					if (Local_192[2] != 0)
					{
						fVar21 = (1f / (127f / IntToFloat(Local_192[2])));
						fVar14 = -(((fVar21 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
					else if (Local_192[0] != 0)
					{
						fVar21 = (1f / (127f / IntToFloat(Local_192[0])));
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
					if (Local_192[2] == 0 && Local_192[0] == 0)
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
				if (!BitTest(Local_192.f_5, 12))
				{
					unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 12);
				}
				unk_0x8CE3D365F064F69E(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), Vector(0f, 0f, 0f) + Vector(Var18.f_2, Var18.f_1, Var18.f_0), 2, 1);
			}
			else if (iVar6 && (((Local_192[2] != 0 || Local_192[3] != 0) || Local_192[0] != 0) || Local_192[1] != 0))
			{
				Var22 = { unk_0x63A8BF5E6C2BF85C(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 2) };
				if (func_252())
				{
					if (func_251())
					{
						fVar26 = -1f;
					}
				}
				else
				{
					if (Local_192[2] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_192[2])));
					}
					else if (Local_192[0] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_192[0])));
					}
					else
					{
						fVar25 = 0f;
					}
					if (Local_192[3] != 0)
					{
						fVar26 = (1f / (127f / IntToFloat(Local_192[3])));
					}
					else if (Local_192[1] != 0)
					{
						fVar26 = (1f / (127f / IntToFloat(Local_192[1])));
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
					if (Local_192[2] == 0 && Local_192[0] == 0)
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
				if (BitTest(Local_192.f_5, 12))
				{
					unk_0xB0550BC91B0159D6(&(Local_192.f_5), 12);
				}
				unk_0x8CE3D365F064F69E(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), Vector(0f, 0f, 0f) + Vector(Var22.f_2, Var29.f_1, Var29.f_0), 2, 1);
			}
			else
			{
				Var32 = { unk_0x63A8BF5E6C2BF85C(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 2) };
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
					if (BitTest(Local_192.f_5, 12))
					{
						Var39.f_0 = Var32.f_0;
					}
					uVar42 = Var32.f_2;
					if (func_16())
					{
						if (!func_130())
						{
							uVar42 = Local_192.f_116;
							Var39.f_1 = 0f;
						}
					}
					unk_0x8CE3D365F064F69E(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), Vector(0f, 0f, 0f) + Vector(uVar42, Var39.f_1, Var39.f_0), 2, 1);
					if (func_16())
					{
						if (unk_0x48053974ED6F63CE(fVar4) < 2.5f && unk_0x48053974ED6F63CE(fVar5) < 2.5f)
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
			unk_0xC31EECA11005273C(Local_192.f_159);
		}
	}
}

void func_268(bool bParam0)
{
	if (!bParam0)
	{
		if (BitTest(Local_192.f_6, 6))
		{
			unk_0xB0550BC91B0159D6(&(Local_192.f_6), 6);
		}
	}
	else if (!BitTest(Local_192.f_6, 6))
	{
		unk_0xCED9E32812D6C7C7(&(Local_192.f_6), 6);
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
		if (unk_0x90F6E2F6488B98BA(Local_192.f_159))
		{
			if (!unk_0x12DD4A0B247D9B4D(Local_192.f_171))
			{
				Local_192.f_171 = func_285(Local_192.f_150, 0);
				unk_0x1A5B5BA56167D412(Local_192.f_171, func_284());
				if (func_30() && !unk_0x12DD4A0B247D9B4D(Local_192.f_172))
				{
					Local_192.f_172 = func_281(unk_0xE2D3D51028F0428A(), 0, 0);
					unk_0x1A5B5BA56167D412(Local_192.f_172, 6);
					unk_0x3430966AC4550BB9(Local_192.f_172, 0);
					unk_0x293A9399E902A33B(Local_192.f_172, 0.7f);
					unk_0x7A610B2EC5DA34E7(Local_192.f_172, (13 - 1));
					if (func_278(unk_0x9E2D6C50374FCFA9()) != -1)
					{
						func_274(&(Local_192.f_172), func_276(func_278(unk_0x9E2D6C50374FCFA9())));
					}
					else
					{
						func_274(&(Local_192.f_172), func_273());
					}
					unk_0x2AE77DBCBF631065(Local_192.f_172, 1);
				}
			}
			else
			{
				fVar0 = func_272(Local_192.f_124);
				fVar1 = Local_192.f_150;
				fVar2 = Local_192.f_150.f_1;
				unk_0x94C2F928B167AA54(Local_192.f_171, 2);
				unk_0xFB7ACC9D9D6401A8(Local_192.f_171, Local_192.f_150);
				if (((func_24() || func_38()) && unk_0xF1EC2C71FD1371B8()) && unk_0x44859561F653DD4E())
				{
					if (!unk_0x77A41B07D1F0A831())
					{
						fVar1 = -323.1f;
						fVar2 = -1970.9f;
						unk_0xFB7ACC9D9D6401A8(Local_192.f_171, fVar1, fVar2, 0f);
						unk_0x9C929B838435DB54(fVar1, fVar2);
						unk_0x9A42DD879A371772();
					}
				}
				unk_0x262D43EBE3CA4397(fVar1, fVar2);
				unk_0xB02954D4F69B7A25(Local_192.f_171, unk_0xF2DB717A73826179(fVar0));
				unk_0x293A9399E902A33B(Local_192.f_171, 1f);
				unk_0x7A610B2EC5DA34E7(Local_192.f_171, 9);
				unk_0xF3F07AAF13926729(unk_0xF2DB717A73826179(fVar0));
				if (unk_0x12DD4A0B247D9B4D(Local_192.f_172))
				{
					unk_0xB02954D4F69B7A25(Local_192.f_172, func_271(unk_0xE2D3D51028F0428A()));
				}
			}
		}
	}
}

int func_271(int iParam0)
{
	float fVar0;
	
	fVar0 = unk_0xFFFDD840FB251A01(iParam0);
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
	
	if (unk_0x12DD4A0B247D9B4D(*uParam0))
	{
		iVar0 = func_275(iParam1);
		unk_0xA582EE8380437B1B(*uParam0, iVar0);
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
	unk_0x2F046C9381D8E91B(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
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
	return Global_2680265.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_278(int iParam0)
{
	if (!iParam0 == func_12())
	{
		if (func_279(iParam0, 1))
		{
			return Global_2680265.f_818.f_11[func_210(iParam0)];
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
	return Global_1892703[iParam0 /*599*/].f_10 != func_12();
}

int func_280(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_12())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
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
	
	if (!unk_0xE5965CDF24F93A9F(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xEFD6451BF0F3352F(iParam0);
	if (unk_0x04D9F44466CBF3CA(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_283(unk_0x9315DBF7D972F07A(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD809204F14EF9B68(uVar0, bParam1);
		}
		else
		{
			unk_0xA582EE8380437B1B(uVar0, 2);
		}
	}
	else if (unk_0x9044EDB8A7BF67B4(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_283(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
		unk_0xD809204F14EF9B68(uVar0, bParam1);
	}
	else if (unk_0x0086095F1731DE17(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_283(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
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
	
	uVar0 = unk_0xC5B823372B67998A(Param0);
	unk_0x293A9399E902A33B(uVar0, func_283(unk_0x9315DBF7D972F07A(), 1f, 1f));
	unk_0xAAD76B24A5282FDD(uVar0, iParam3);
	return uVar0;
}

void func_286()
{
	if (func_35())
	{
		if (Local_192.f_150.f_2 >= (func_109() - 20f))
		{
			if (unk_0x78D9ADD511FEAD8B(Local_192.f_37))
			{
				Local_192.f_37 = unk_0xA9ADCC8D104AA552();
				unk_0x91DFC8F68F6D9B05(Local_192.f_37, "Out_Of_Bounds_Alarm_Loop", Local_192.f_157, 1);
			}
		}
		else if (!unk_0x78D9ADD511FEAD8B(Local_192.f_37))
		{
			unk_0xF889BDFCC181BA9F(Local_192.f_37);
			unk_0xCDBCC1BC1184B002(Local_192.f_37);
			Local_192.f_37 = -1;
		}
	}
}

void func_287()
{
	if (((func_38() || func_138()) || func_30()) || func_160())
	{
		switch (Local_192.f_242)
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
		unk_0x5A7ACD1CDF509B0D(500);
	}
	func_292(0);
	func_290(0);
	func_289(0);
}

void func_289(int iParam0)
{
	if (Local_192.f_242 != iParam0)
	{
		Local_192.f_242 = iParam0;
	}
}

void func_290(bool bParam0)
{
	if (bParam0)
	{
		if (!func_291())
		{
			unk_0xCED9E32812D6C7C7(&Global_1958711, 17);
		}
	}
	else if (func_291())
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 17);
	}
}

bool func_291()
{
	return BitTest(Global_1958711, 17);
}

void func_292(bool bParam0)
{
	if (bParam0)
	{
		if (!func_293())
		{
			unk_0xCED9E32812D6C7C7(&Global_1958711, 18);
		}
	}
	else if (func_293())
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 18);
	}
}

bool func_293()
{
	return BitTest(Global_1958711, 18);
}

bool func_294()
{
	return Global_1946250.f_519;
}

void func_295()
{
	if (func_293() || unk_0xF1EC2C71FD1371B8())
	{
		func_72(1);
		func_296(0);
		unk_0xB0550BC91B0159D6(&(Local_192.f_5), 16);
		func_289(3);
	}
}

void func_296(bool bParam0)
{
	if (bParam0)
	{
		if (!func_77())
		{
			unk_0xCED9E32812D6C7C7(&Global_1958711, 19);
		}
	}
	else if (func_77())
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 19);
	}
}

void func_297()
{
	if (unk_0xA829C9A2767AC8EF())
	{
		if (func_22(&(Local_192.f_267), 3000, 0))
		{
			if (func_309())
			{
				if (BitTest(Global_4541229, 2) || func_22(&(Local_192.f_271), 8000, 0))
				{
					if (!BitTest(Global_4541229, 2))
					{
					}
					unk_0x5A7ACD1CDF509B0D(500);
					func_298(unk_0x9E2D6C50374FCFA9(), 1, 0, 0);
					func_21(&(Local_192.f_267));
					func_21(&(Local_192.f_271));
					func_289(2);
				}
			}
			else if (func_22(&(Local_192.f_271), 15000, 0))
			{
				func_21(&(Local_192.f_267));
				func_21(&(Local_192.f_271));
				func_72(1);
				func_296(0);
				unk_0xB0550BC91B0159D6(&(Local_192.f_5), 16);
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
		if (unk_0x1088B18071ADCCBD())
		{
			unk_0x94B5910A9C945688(0);
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
	if (!unk_0x9315DBF7D972F07A())
	{
		uVar0 = iParam2;
		unk_0x64E21045781AFBC9(iParam0, bParam1, uVar0);
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
		if (iParam2 & 33554432 != 0 || unk_0x44859561F653DD4E())
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
		if (unk_0x0D01086B38EC256F(iParam0) && (unk_0x3583A42587543334(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x55B23FE400FCEA6B(unk_0x407E03586628E458(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0x407E03586628E458(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x9315DBF7D972F07A())
				{
					unk_0x5C53AF694DE011E8(1);
				}
				else if (bVar14 || (!func_116(unk_0x9E2D6C50374FCFA9(), 0) && !func_266()))
				{
					unk_0x1C2ED929474DC6FE(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x9315DBF7D972F07A() && !bVar19)
					{
						unk_0x5C53AF694DE011E8(0);
					}
					Global_2689235[iParam0 /*453*/].f_252 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_303(0, 0, 0);
					if (bVar25)
					{
						unk_0x5639E771F6085BF6();
					}
				}
				if (!func_302(iVar27) && !unk_0xE2ED785E8DB4D3FF(iVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(iVar27, true, 0);
					}
				}
				if (!unk_0xE85F749F6D5C809E(iVar27))
				{
					if (!bVar21)
					{
						unk_0x5C65DDDC219B3AA5(iVar27, false);
					}
					unk_0x398C962F550CF3B4(iVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x5C65DDDC219B3AA5(iVar27, false);
				}
				unk_0xA7266A50941DBAEA(iVar27, true);
				unk_0xC099DA307DD6BC62(iParam0, 0);
				unk_0x7E9CA7389EF595E6(iParam0, 0);
				if (unk_0xA13A75665F7E0689(iVar27) && unk_0x6090FC735660B8F7(iVar27))
				{
					unk_0xAD9047296F9EA375(iVar27);
				}
				unk_0xC252F409BDE7A700(iVar27, 1);
				if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()) == 0)
				{
					func_301();
					func_300();
				}
				if (unk_0xBC4351060BEFB0D2())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x2981C54770E1D19C())
				{
				}
				Global_2689235[iParam0 /*453*/].f_253 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667225.f_2681)
				{
					Global_2667225.f_2681 = 0;
				}
			}
			else
			{
				if (!func_302(iVar27) && !unk_0xE2ED785E8DB4D3FF(iVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(iVar27, !bVar15, 0);
					}
					if (!unk_0xE85F749F6D5C809E(iVar27))
					{
						if (!bVar21)
						{
							unk_0x5C65DDDC219B3AA5(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x398C962F550CF3B4(iVar27, 1);
						}
					}
					if (func_299(Global_4718592.f_168757))
					{
						unk_0x5C65DDDC219B3AA5(iVar27, true);
					}
				}
				if (Global_1575033)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0xC099DA307DD6BC62(iParam0, 0);
				}
				else
				{
					unk_0xC099DA307DD6BC62(iParam0, 1);
				}
				unk_0xA7266A50941DBAEA(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xFD478ECFA85A941A(iVar27) && !unk_0xD5C6B5E3B93A5EDC(iVar27, 0))
					{
						unk_0x51BB443B279E4104(iVar27);
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
			unk_0x64E21045781AFBC9(iParam0, bParam1, iVar28);
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
	
	Global_2703735.f_910 = 0;
	Global_2703735.f_911 = 0;
	Global_2703735.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703735.f_917 = -1;
	Global_2703735.f_918 = 0;
	Global_2667225.f_2692 = { Var0 };
}

void func_301()
{
	Global_2667225.f_702 = 0;
	Global_2667225.f_2735 = 0;
	Global_2667225.f_515 = 0;
	Global_2667225.f_606 = 0;
	Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_215 = 0;
	Global_2667225.f_2690 = 0;
}

int func_302(int iParam0)
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x174CED88B97C78D9(iParam0, joaat("script_task_enter_vehicle"));
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
	
	if (unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xE5965CDF24F93A9F(iParam1))
		{
			if (unk_0x65FAB09725E2FE75(iParam1))
			{
				if (!unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), unk_0xFF65CDB0EB7ACE71(iParam1)))
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
						unk_0x4B1C22133022D7D3(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 1);
			}
		}
		if (func_116(unk_0x9E2D6C50374FCFA9(), 0))
		{
			unk_0x1FD50AAF9DA2199E(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x86998D41F61B3824(iParam0, iParam1);
		}
		unk_0x6CAF65C4F61A4BBD(iParam0, iParam1);
		func_304(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_304(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x41483427EFBC0047(iVar0, iParam1, 1);
	}
}

void func_305()
{
	int iVar0;
	
	if (!unk_0xD852449BF2E2BA8D())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0x4DE6A646AFB7CF5C(iVar0);
				iVar0++;
			}
			unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 2);
			unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 0);
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
	if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_833, 2) && !Global_2715699.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_309()
{
	if (unk_0xB4C854DD86E40FDA(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_310()
{
	if (func_329())
	{
		if (unk_0x26009F50A14AD073(2, 201) || unk_0x51844F589D928A86(2, 201))
		{
			if (!func_309())
			{
				if (unk_0xE9E8955A780DDA01())
				{
					func_296(1);
					func_127(-1);
					func_298(unk_0x9E2D6C50374FCFA9(), 0, 512, 0);
					unk_0x859006DB870314C5(500);
					func_327(1, -1);
					func_311(3, 1, 1, 0);
					func_23(&(Local_192.f_267), 0, 0);
					func_23(&(Local_192.f_271), 0, 0);
					func_289(1);
				}
			}
		}
	}
}

int func_311(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_78319)
	{
		if (((iParam0 != 17 && iParam0 != 3) && iParam0 != 23) && iParam0 != 1)
		{
			return 0;
		}
		if (!BitTest(Global_4541229, 14))
		{
			if (iParam0 == 17)
			{
				unk_0xCED9E32812D6C7C7(&Global_4541229, 14);
				unk_0xCED9E32812D6C7C7(&Global_4541229, 16);
			}
			if (iParam0 == 3)
			{
				unk_0xCED9E32812D6C7C7(&Global_4541229, 14);
				unk_0xCED9E32812D6C7C7(&Global_4541229, 15);
			}
			if (iParam0 == 23)
			{
				unk_0xCED9E32812D6C7C7(&Global_4541229, 14);
				unk_0xCED9E32812D6C7C7(&Global_4541229, 27);
			}
			if (iParam0 == 1)
			{
				unk_0xCED9E32812D6C7C7(&Global_4541229, 14);
				unk_0xCED9E32812D6C7C7(&Global_4541229, 29);
			}
		}
		if (Global_8143[iParam0 /*15*/].f_9 == 0)
		{
			func_323();
		}
		if (unk_0xB4C854DD86E40FDA(Global_8143[iParam0 /*15*/].f_9) > 0)
		{
			unk_0xB0550BC91B0159D6(&Global_4541229, 14);
			unk_0xB0550BC91B0159D6(&Global_4541229, 16);
			unk_0xB0550BC91B0159D6(&Global_4541229, 15);
			unk_0xB0550BC91B0159D6(&Global_4541229, 27);
			unk_0xB0550BC91B0159D6(&Global_4541229, 29);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_316();
	if (Global_20266.f_1 == 9)
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
	if (Global_20232 == 1)
	{
		return 0;
	}
	if (Global_20266.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!unk_0x87C0DA419F19FF57(Global_20263))
	{
		if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_20266.f_1 < 4)
			{
				func_315("cellphone_flashhand");
				if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) == 0)
				{
					Global_20263 = unk_0xE81651AD79516E48("cellphone_flashhand", 1424);
				}
				unk_0xD195D79715508EFA("cellphone_flashhand");
			}
		}
	}
	while (!Global_20248)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_323();
	func_312();
	if (unk_0xB4C854DD86E40FDA(Global_8143[iParam0 /*15*/].f_9) == 0)
	{
		Global_8742 = 0;
		Global_20266.f_1 = 7;
		func_315(&(Global_8143[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (unk_0xB4C854DD86E40FDA(Global_8143[iParam0 /*15*/].f_9) == 0)
			{
				Global_20264 = unk_0xE81651AD79516E48(&(Global_8143[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (unk_0xB4C854DD86E40FDA(Global_8143[iParam0 /*15*/].f_9) == 0)
		{
			Global_20264 = unk_0xE81651AD79516E48(&(Global_8143[iParam0 /*15*/].f_5), 2552);
		}
		unk_0xD195D79715508EFA(&(Global_8143[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_312()
{
	if (Global_78319 == 0)
	{
		Global_8143[14 /*15*/].f_4 = -99;
		Global_8143[4 /*15*/].f_4 = -99;
		if (Global_2725398)
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
	StringCopy(&(Global_8143[iParam0 /*15*/]), sParam1, 16);
	Global_8143[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_8143[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8143[iParam0 /*15*/].f_9 = unk_0x2E87280918B16506(sParam3);
	Global_8143[iParam0 /*15*/].f_10 = iParam4;
	Global_8143[iParam0 /*15*/].f_11 = iParam5;
	Global_8143[iParam0 /*15*/].f_12 = iParam6;
	Global_8143[iParam0 /*15*/].f_13 = iParam7;
	Global_8143[iParam0 /*15*/].f_14 = iParam8;
	if (Global_8143[iParam0 /*15*/].f_12 == 0)
	{
		Global_8143[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_8143[iParam0 /*15*/].f_13 == 0)
	{
		Global_8143[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_8143[iParam0 /*15*/].f_14 == 0)
	{
		Global_8143[iParam0 /*15*/].f_14 = 0;
	}
}

bool func_314(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_315(char* sParam0)
{
	unk_0xAF76A37C80EFD1D8(sParam0);
	while (!unk_0xF79F112CE5999680(sParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_316()
{
	if (func_314(14))
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_113386.f_28050[0 /*29*/])
			{
				Global_20266 = 0;
			}
			else if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_113386.f_28050[1 /*29*/])
			{
				Global_20266 = 1;
			}
			else if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_113386.f_28050[2 /*29*/])
			{
				Global_20266 = 2;
			}
			else
			{
				Global_20266 = 0;
			}
		}
	}
	else
	{
		Global_20266 = func_317();
		if (Global_20266 == 145)
		{
			Global_20266 = 3;
		}
		if (Global_78319)
		{
			Global_20266 = 3;
		}
		if (Global_20266 > 3)
		{
			Global_20266 = 3;
		}
	}
}

var func_317()
{
	func_318();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_318()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_321(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_320(unk_0xE2D3D51028F0428A());
			if (func_319(iVar0) && (!func_314(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_319(Global_113386.f_2363.f_539.f_4321))
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

bool func_319(int iParam0)
{
	return iParam0 < 3;
}

int func_320(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
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
	return Global_1998[iParam0 /*29*/];
}

void func_323()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_8143[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_78319 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_326(iVar2, Global_20266) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_313(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_313(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_313(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_43052 == 15 && func_325(0) == 0) && Global_8141 == 0)
		{
			func_313(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_20467 = 0;
			Global_8142 = 255;
		}
		else
		{
			func_313(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_20467 = 1;
			Global_8142 = 42;
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
		if (Global_113386.f_14051.f_89 == 1)
		{
			func_313(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_113386.f_14051.f_88 == 1)
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
		if (BitTest(Global_4541229, 4) == 1)
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
		if (!BitTest(Global_4541229, 4) == 1)
		{
			if (Global_1836092)
			{
				func_313(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4541229, 20) == 1)
			{
				func_313(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4541229, 22) == 1)
			{
				func_313(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4541229, 26) == 1)
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
		if ((((BitTest(Global_4541229, 4) == 0 && Global_1836092 == 0) && BitTest(Global_4541229, 20) == 0) && BitTest(Global_4541229, 22) == 0) && BitTest(Global_4541229, 26) == 0)
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
	if (Global_78319)
	{
		if (Global_1836487 || Global_1836488 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_325(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_326(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_19[iParam1];
}

void func_327(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_124(&iVar0, 0, iParam1))
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
		func_328(&(Global_23150.f_6051[iVar0 /*10*/]));
		Global_23150.f_6112[iVar0] = 0;
	}
	else
	{
		Global_23150.f_6112[iVar0] = 0;
	}
}

void func_328(var uParam0)
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

int func_329()
{
	if (func_77())
	{
		return 0;
	}
	if (unk_0xF1EC2C71FD1371B8())
	{
		return 0;
	}
	if ((func_169(0) || func_168()) || unk_0x6C85295E4E1FB8B3())
	{
		func_21(&(Local_192.f_275));
		func_23(&(Local_192.f_275), 0, 0);
		unk_0xB0550BC91B0159D6(&(Local_192.f_5), 16);
		func_99();
		return 0;
	}
	else if (func_25(&(Local_192.f_275)))
	{
		if (!func_22(&(Local_192.f_275), 2000, 0))
		{
			return 0;
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(Local_192.f_5), 16);
			func_21(&(Local_192.f_275));
		}
	}
	if (func_164(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	return 1;
}

void func_330()
{
	if (func_331())
	{
		if (unk_0x90F6E2F6488B98BA(Local_192.f_159) && !unk_0x55B23FE400FCEA6B(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0))
		{
			if (unk_0x07B2F8356DC13CF4(Local_192.f_159))
			{
				if (!BitTest(Local_192.f_5, 25))
				{
					unk_0x5C65DDDC219B3AA5(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), true);
					unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 25);
				}
			}
			else
			{
				unk_0xC31EECA11005273C(Local_192.f_159);
			}
		}
	}
	else if (BitTest(Local_192.f_5, 25))
	{
		if (unk_0x90F6E2F6488B98BA(Local_192.f_159) && !unk_0x55B23FE400FCEA6B(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0))
		{
			if (unk_0x07B2F8356DC13CF4(Local_192.f_159))
			{
				unk_0x5C65DDDC219B3AA5(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), false);
				unk_0xB0550BC91B0159D6(&(Local_192.f_5), 25);
			}
			else
			{
				unk_0xC31EECA11005273C(Local_192.f_159);
			}
		}
	}
}

int func_331()
{
	if (func_164(unk_0x9E2D6C50374FCFA9()))
	{
		if (BitTest(Global_2813821, 0))
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
		Global_1958711.f_1 = 0;
	}
	if (func_339() || func_193())
	{
		if (!func_25(&(Local_192.f_247)))
		{
			func_23(&(Local_192.f_247), 0, 0);
		}
		else if (func_22(&(Local_192.f_247), Global_1958711.f_1, 0) || func_193())
		{
			func_21(&(Local_192.f_245));
			if (func_83())
			{
				if (func_17(unk_0xE2D3D51028F0428A()))
				{
					unk_0x5E0A11B95EE2E0C6(unk_0xE2D3D51028F0428A(), func_338(), func_337(), func_336(), 1, 0, 1065353216);
				}
				else
				{
					unk_0x45B4BDAA12353E7D(func_338(), func_337(), func_336(), 1, 0, 1065353216, 0);
				}
				unk_0xF7A14A1A76B6DD17(0, 300, unk_0xF2DB717A73826179((200f * Local_192.f_131)));
				unk_0xBEA5F528349F8F75(Local_192.f_159, 1);
				unk_0x5639E771F6085BF6();
				iVar0 = unk_0xE8BBC6CC2C60F24A(Local_192.f_159);
				unk_0x4BDA5AFD88C085EB(&iVar0);
				unk_0xCED9E32812D6C7C7(&(Local_192.f_6), 2);
			}
			if (func_31())
			{
				func_335(1);
				if (Local_192.f_26 == 0)
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
	else if (func_25(&(Local_192.f_247)))
	{
		func_205(&(Local_192.f_247), 0, 0);
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
	Local_192.f_79 = unk_0x497E09037A63D346(Local_192.f_153, 0f, 0f, Local_192.f_118, 2, iParam2, bParam1, 1065353216, 0, 1065353216);
	unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), Local_192.f_79, Local_192.f_158, &cVar0, fVar17, fVar18, iVar16, 0, 1148846080, 0);
	if (iParam0 == 0)
	{
		if (unk_0x90F6E2F6488B98BA(Local_192.f_159))
		{
			StringConCat(&cVar0, "_DRONE", 64);
			unk_0xF6AC18061D64C197(unk_0xF2D8DACFAEBD9629(Local_192.f_159), Local_192.f_79, Local_192.f_158, &cVar0, fVar17, fVar18, 8);
		}
	}
	StringCopy(&cVar0, func_334(iParam0), 64);
	StringConCat(&cVar0, "_PHONE", 64);
	if (unk_0x90F6E2F6488B98BA(Local_192.f_160))
	{
		unk_0xF07805FFBF204ED8(unk_0xF2D8DACFAEBD9629(Local_192.f_160), &cVar0, Local_192.f_158, fVar17, bParam1, iParam2, 0, 0f, 0);
		unk_0xEC5CB2A3F2052039(unk_0xF2D8DACFAEBD9629(Local_192.f_160));
	}
	unk_0x60E9DD146055C13E(Local_192.f_79);
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
	
	iVar0 = unk_0x57736A7B8965A88A(iVar0);
	if (unk_0xCE2C78E9FC0B01E3(iVar0))
	{
		unk_0x7FF9609F5D8471AF(iVar0);
		unk_0x0B92578FB47DA084(iVar0);
		iVar0 = -1;
	}
	else if (bParam0)
	{
		if (func_17(unk_0xE2D3D51028F0428A()))
		{
			unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
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
		return unk_0x97A9BB81C66772B5(Local_192.f_169);
	}
	return Local_192.f_150;
}

int func_339()
{
	if ((unk_0x90F6E2F6488B98BA(Local_192.f_159) && unk_0x55B23FE400FCEA6B(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0)) && !BitTest(Local_192.f_5, 2))
	{
		return 1;
	}
	if (Local_192.f_12 == 2)
	{
		Local_192.f_26 = 1;
		return 1;
	}
	if (BitTest(Local_192.f_5, 1))
	{
		return 1;
	}
	if (func_347())
	{
		Local_192.f_26 = 5;
		return 1;
	}
	if (func_138() && func_341())
	{
		Local_192.f_26 = 5;
		return 1;
	}
	if (func_31() || func_16())
	{
		if (func_341())
		{
			Local_192.f_26 = 5;
			return 1;
		}
	}
	if (BitTest(Local_192.f_5, 2))
	{
		Local_192.f_26 = 4;
		return 1;
	}
	if (func_177())
	{
		if (!func_25(&(Local_192.f_255)))
		{
			func_23(&(Local_192.f_255), 0, 0);
		}
		else if (func_22(&(Local_192.f_255), 3000, 0))
		{
			Local_192.f_26 = 0;
			return 1;
		}
	}
	if (BitTest(Local_192.f_5, 7))
	{
		Local_192.f_26 = 0;
		return 1;
	}
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159))
	{
		if (unk_0xD8F9DF94CD871327(unk_0xE8BBC6CC2C60F24A(Local_192.f_159)) || func_202(unk_0xF2D8DACFAEBD9629(Local_192.f_159), 0))
		{
			if (BitTest(Local_192.f_5, 29))
			{
				Local_192.f_26 = 3;
				return 1;
			}
		}
	}
	if (!func_138() && !func_340())
	{
		if (Local_192.f_150.f_2 >= func_109())
		{
			Local_192.f_26 = 5;
			return 1;
		}
	}
	return 0;
}

bool func_340()
{
	return BitTest(Global_1958711.f_2, 0);
}

int func_341()
{
	struct<3> Var0;
	int iVar3;
	
	if (func_346())
	{
		return 0;
	}
	if (func_19(unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		if (unk_0x90F6E2F6488B98BA(Local_192.f_159) && !unk_0x55B23FE400FCEA6B(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0))
		{
			if (func_138())
			{
				if (unk_0xE5965CDF24F93A9F(func_345()) && !unk_0x55B23FE400FCEA6B(func_345(), 0))
				{
					Var0 = { unk_0x6B62510F212526DC(func_345(), 1) };
				}
			}
			else if (func_30())
			{
				if (!func_31())
				{
					iVar3 = func_342(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_9);
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
					Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
				}
			}
			else if (func_16())
			{
				if (func_17(func_15()))
				{
					Var0 = { unk_0x6B62510F212526DC(func_15(), 1) };
				}
			}
			else
			{
				Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			}
			if (func_17(unk_0xE8BBC6CC2C60F24A(Local_192.f_159)))
			{
				Local_192.f_120 = func_155(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), Var0, 1);
				if (Local_192.f_120 > func_109())
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
		return Global_1853348[iParam0 /*834*/].f_267.f_408;
	}
	return 0;
}

int func_345()
{
	if (Global_1853193 != func_12())
	{
		if (!func_47(Global_1853193))
		{
			if (unk_0xE5965CDF24F93A9F(Global_1640758))
			{
				return Global_1640758;
			}
			if (unk_0xE5965CDF24F93A9F(Global_1963827[Global_1853193]))
			{
				return Global_1963827[Global_1853193];
			}
		}
	}
	return -1;
}

bool func_346()
{
	return BitTest(Global_1958711, 6);
}

int func_347()
{
	float fVar0;
	int iVar1;
	
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159) && !unk_0x55B23FE400FCEA6B(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0))
	{
		iVar1 = Global_262145.f_24699;
		if (func_16())
		{
			iVar1 *= 10;
		}
		if (unk_0x9CD4CBF2BBE10F00(Local_192.f_150, &fVar0, 1, 0))
		{
			Local_192.f_121 = (Local_192.f_150.f_2 - fVar0);
			if (Local_192.f_121 > IntToFloat(iVar1))
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
	if ((unk_0x90F6E2F6488B98BA(Local_192.f_159) && !unk_0x55B23FE400FCEA6B(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0)) && unk_0x876B1078E90C91CB(Local_192.f_169))
	{
		if (unk_0x07B2F8356DC13CF4(Local_192.f_159))
		{
			if (BitTest(Local_192.f_5, 1) || func_193())
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
				if (!unk_0x3A76A0944BE2C291(0))
				{
					if (unk_0x3BF65CF27F6CFBBE(2, 208) != 0f)
					{
						iVar3 = 1;
					}
					if (unk_0x3BF65CF27F6CFBBE(2, 207) != 0f)
					{
						iVar4 = 1;
					}
				}
				else
				{
					if (unk_0x3BF65CF27F6CFBBE(2, 209) != 0f)
					{
						iVar3 = 1;
					}
					if (unk_0x3BF65CF27F6CFBBE(2, 210) != 0f)
					{
						iVar4 = 1;
					}
				}
			}
			if (iVar3 && !func_260(bVar5))
			{
				Local_192.f_119 = 140f;
			}
			else if (iVar4 && !func_260(bVar5))
			{
				Local_192.f_119 = 60f;
			}
			else if (!func_16())
			{
				Local_192.f_119 = 100f;
			}
			unk_0x57FFAA29E06177F6(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), iVar7, Var0 * Vector(-Local_192.f_119, -Local_192.f_119, -Local_192.f_119), 0, 1, iVar6, 0);
		}
		else
		{
			unk_0xC31EECA11005273C(Local_192.f_159);
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
	if ((unk_0x90F6E2F6488B98BA(Local_192.f_159) && !unk_0x55B23FE400FCEA6B(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0)) && unk_0x876B1078E90C91CB(Local_192.f_169))
	{
		if (unk_0x07B2F8356DC13CF4(Local_192.f_159))
		{
			fVar0 = 0f;
			if (!func_38() && !func_24())
			{
				if (!func_252())
				{
					if (func_25(&(Local_192.f_253)))
					{
						iVar1 = Global_262145.f_24697;
						if (func_24())
						{
							iVar1 = (iVar1 / 3);
						}
						if (!func_22(&(Local_192.f_253), iVar1, 0))
						{
							iVar2 = (100 * unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Local_192.f_253)));
							Local_192.f_20 = (iVar2 / iVar1);
						}
						else
						{
							if (func_17(Local_192.f_161))
							{
								unk_0x9A97DC6DBC7B223D(Local_192.f_161, unk_0xE8BBC6CC2C60F24A(Local_192.f_159), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
							}
							Local_192.f_20 = 100;
							func_21(&(Local_192.f_253));
							if (!unk_0x78D9ADD511FEAD8B(Local_192.f_43))
							{
								unk_0xF889BDFCC181BA9F(Local_192.f_43);
								unk_0xCDBCC1BC1184B002(Local_192.f_43);
								Local_192.f_43 = -1;
							}
						}
					}
					if (!unk_0x3A76A0944BE2C291(0))
					{
						bVar3 = unk_0xF01464D7AF0B7347(0, 209);
					}
					else
					{
						bVar3 = unk_0xF01464D7AF0B7347(0, 203);
					}
					if ((((bVar3 && Local_192.f_20 == 100) && !func_260(0)) && !func_77()) && func_161())
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
						if (IntToFloat(Local_192[1]) != 0f)
						{
							func_359(1);
						}
						else
						{
							func_359(0);
						}
						unk_0x9DCF157443EA30D6("RaceTurbo", 0, 0);
						func_23(&(Local_192.f_251), 0, 0);
						func_358(1);
						if (unk_0x78D9ADD511FEAD8B(Local_192.f_42))
						{
							Local_192.f_42 = unk_0xA9ADCC8D104AA552();
							unk_0x91DFC8F68F6D9B05(Local_192.f_42, "HUD_Boost_Loop", Local_192.f_157, 1);
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
					if (unk_0x876B1078E90C91CB(Local_192.f_169))
					{
						if (!unk_0x629B37AF59212703(Local_192.f_169))
						{
							unk_0x9BAE3263D9B1FCB9(Local_192.f_169, "DRONE_BOOST_SHAKE", 1065353216);
							unk_0x1342E9E0CDE9B323(Local_192.f_169, 0.15f);
						}
					}
					if (func_25(&(Local_192.f_251)))
					{
						if (func_22(&(Local_192.f_251), Global_262145.f_24696, 0))
						{
							Local_192.f_20 = 0;
							func_359(0);
							func_358(0);
							func_21(&(Local_192.f_253));
							func_23(&(Local_192.f_253), 0, 0);
							unk_0x80B66EF081475250(Local_192.f_169, 1);
							unk_0xF4AB1ADB142FD39D(0);
							unk_0x06A78BA0B756C754("RaceTurbo");
							func_21(&(Local_192.f_251));
							if (!unk_0x78D9ADD511FEAD8B(Local_192.f_42))
							{
								unk_0xF889BDFCC181BA9F(Local_192.f_42);
								unk_0xCDBCC1BC1184B002(Local_192.f_42);
								Local_192.f_42 = -1;
							}
							if (unk_0x78D9ADD511FEAD8B(Local_192.f_43))
							{
								Local_192.f_43 = unk_0xA9ADCC8D104AA552();
								unk_0x91DFC8F68F6D9B05(Local_192.f_43, "HUD_Boost_Recharge_Loop", Local_192.f_157, 1);
							}
						}
						else
						{
							fVar4 = (100f / (unk_0xBBDA792448DB5A89(Global_262145.f_24696) / IntToFloat(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Local_192.f_251))));
							Local_192.f_20 = (100 - unk_0xF2DB717A73826179(fVar4));
							unk_0xF7A14A1A76B6DD17(0, Global_262145.f_24696, unk_0xF2DB717A73826179((255f * Local_192.f_131)));
						}
					}
				}
			}
			Var5 = { Local_192.f_150 };
			if (BitTest(Local_192.f_5, 1) || func_193())
			{
				return;
			}
			Var8 = { func_349(func_350()) };
			Var11 = { func_349(func_357(func_350())) };
			unk_0x9CD4CBF2BBE10F00(Var5, &fVar14, 1, 0);
			if (!func_356())
			{
				if (Local_192.f_10 == 2 || (Var5.f_2 - fVar14) < 2f)
				{
					fVar15 = 24f;
					if (Local_192[1] != 0)
					{
						unk_0x7653D561C9574763(2, 207, 1);
					}
					if (unk_0x3BF65CF27F6CFBBE(2, 207) != 0f || Local_192[1] != 0)
					{
						if ((Var5.f_2 - fVar14) < 0.5f || unk_0x3BF65CF27F6CFBBE(2, 207) != 0f)
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
					unk_0x57FFAA29E06177F6(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0, 0f, 0f, fVar15, 0, 1, 1, 0);
				}
			}
			if (unk_0x3A76A0944BE2C291(0))
			{
				if (Local_192[2] >= 127)
				{
					Local_192[2] = 127;
				}
				else if (Local_192[2] <= -127)
				{
					Local_192[2] = -127;
				}
				if (Local_192[0] >= 127)
				{
					Local_192[0] = 127;
				}
				else if (Local_192[0] <= -127)
				{
					Local_192[0] = -127;
				}
			}
			if (!unk_0x3A76A0944BE2C291(0))
			{
				if (unk_0x3BF65CF27F6CFBBE(2, 208) != 0f)
				{
					iVar16 = 1;
				}
				if (unk_0x3BF65CF27F6CFBBE(2, 207) != 0f)
				{
					iVar17 = 1;
				}
			}
			else
			{
				if (unk_0x3BF65CF27F6CFBBE(2, 209) != 0f)
				{
					iVar16 = 1;
				}
				if (unk_0x3BF65CF27F6CFBBE(2, 210) != 0f)
				{
					iVar17 = 1;
				}
			}
			if (((iVar16 && func_355()) && !func_77()) || (func_252() && !func_251()))
			{
				fVar20 = Local_192.f_119;
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
					if (!unk_0x3A76A0944BE2C291(0))
					{
						fVar18 = ((fVar20 + fVar0) / (1f / unk_0x3BF65CF27F6CFBBE(2, 208)));
					}
					else
					{
						fVar18 = ((fVar20 + fVar0) / (1f / unk_0x3BF65CF27F6CFBBE(2, 209)));
					}
				}
				else if (!unk_0x3A76A0944BE2C291(0))
				{
					fVar18 = ((fVar20 + fVar19) / (1f / unk_0x3BF65CF27F6CFBBE(2, 208)));
				}
				else
				{
					fVar18 = ((fVar20 + fVar19) / (1f / unk_0x3BF65CF27F6CFBBE(2, 209)));
				}
				Var21 = { Var11 * Vector(fVar18, fVar18, fVar18) };
				if (Var21.f_2 > 149f)
				{
					Var21.f_2 = 149f;
				}
				unk_0x57FFAA29E06177F6(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0, Var21, 0, 1, 1, 0);
			}
			else if (((iVar17 && !func_77()) && func_355()) && !func_260(0))
			{
				if (func_38() || func_24())
				{
					fVar25 = 10f;
				}
				if (!unk_0x3A76A0944BE2C291(0))
				{
					fVar24 = ((Local_192.f_119 + fVar25) / (1f / unk_0x3BF65CF27F6CFBBE(2, 207)));
				}
				else
				{
					fVar24 = ((Local_192.f_119 + fVar25) / (1f / unk_0x3BF65CF27F6CFBBE(2, 210)));
				}
				unk_0x57FFAA29E06177F6(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0, Var11 * Vector(-fVar24, -fVar24, -fVar24), 0, 1, 1, 0);
			}
			if (((Local_192[1] > 0 && !func_252()) && !func_260(0)) && !func_77())
			{
				fVar28 = func_354();
				fVar26 = (Local_192.f_119 / (127f / IntToFloat(Local_192[1])));
				fVar27 = (fVar28 / (127f / IntToFloat(Local_192[1])));
				unk_0x57FFAA29E06177F6(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0, Var8 * Vector(fVar26, fVar26, fVar26), 0, 1, 1, 0);
				unk_0x57FFAA29E06177F6(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0, 0f, 0f, fVar27, 0, 1, 1, 0);
			}
			else if ((((Local_192[1] < 0 && !func_252()) && !func_260(0)) && !func_77()) || (func_252() && func_251()))
			{
				if (func_252() && func_251())
				{
					fVar31 = 50f;
					if (func_24())
					{
						fVar29 = (Local_192.f_119 / -1f);
					}
					else
					{
						fVar29 = ((Local_192.f_119 + fVar0) / -1f);
					}
					fVar30 = (fVar31 / -1f);
				}
				else
				{
					fVar31 = func_354();
					if (func_24())
					{
						fVar29 = (Local_192.f_119 / (127f / IntToFloat(Local_192[1])));
					}
					else
					{
						fVar29 = ((Local_192.f_119 + fVar0) / (127f / IntToFloat(Local_192[1])));
					}
					fVar30 = (fVar31 / (127f / IntToFloat(Local_192[1])));
				}
				if (func_24())
				{
					if (!func_251())
					{
						unk_0x57FFAA29E06177F6(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0, 0f, 0f, -fVar30, 0, 1, 1, 0);
						unk_0x57FFAA29E06177F6(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0, Var8 * Vector(fVar29, fVar29, fVar29), 0, 1, 1, 0);
					}
					else
					{
						unk_0x57FFAA29E06177F6(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0, 0f, 0f, 41f, 0, 1, 1, 0);
						unk_0x57FFAA29E06177F6(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0, 0f, -149f, 0f, 0, 1, 1, 0);
					}
				}
				else
				{
					unk_0x57FFAA29E06177F6(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0, 0f, 0f, -fVar30, 0, 1, 1, 0);
					unk_0x57FFAA29E06177F6(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0, Var8 * Vector(fVar29, fVar29, fVar29), 0, 1, 1, 0);
				}
			}
			Var32 = { func_353(Var8, Var11) };
			if ((!func_252() && !func_260(0)) && !func_77())
			{
				if (Local_192[0] > 0)
				{
					fVar35 = -(Local_192.f_119 / (127f / IntToFloat(Local_192[0])));
					fVar36 = (8f / (127f / IntToFloat(Local_192[0])));
					unk_0x57FFAA29E06177F6(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0, Var32 * Vector(fVar35, fVar35, fVar35), 0, 1, 1, 0);
					unk_0x57FFAA29E06177F6(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0, 0f, 0f, fVar36, 0, 1, 1, 0);
				}
				else if (Local_192[0] < 0)
				{
					fVar37 = -(Local_192.f_119 / (127f / IntToFloat(Local_192[0])));
					fVar38 = (8f / (127f / IntToFloat(Local_192[0])));
					unk_0x57FFAA29E06177F6(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0, Var32 * Vector(fVar37, fVar37, fVar37), 0, 1, 1, 0);
					unk_0x57FFAA29E06177F6(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0, 0f, 0f, -fVar38, 0, 1, 1, 0);
				}
			}
		}
		else
		{
			unk_0xC31EECA11005273C(Local_192.f_159);
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
	return BitTest(Global_1958711, 2);
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
		if (!BitTest(Local_192.f_5, 21))
		{
			unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 21);
		}
	}
	else if (BitTest(Local_192.f_5, 21))
	{
		unk_0xB0550BC91B0159D6(&(Local_192.f_5), 21);
	}
}

void func_359(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Local_192.f_5, 22))
		{
			unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 22);
		}
	}
	else if (BitTest(Local_192.f_5, 22))
	{
		unk_0xB0550BC91B0159D6(&(Local_192.f_5), 22);
	}
}

void func_360()
{
	float fVar0;
	float fVar1;
	
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159))
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xA5677134B9672173(Local_192.f_159), 0))
		{
			if ((func_24() || func_38()) || func_35())
			{
				fVar0 = -323.1f;
				fVar1 = -1970.9f;
			}
			else
			{
				fVar0 = Local_192.f_150;
				fVar1 = Local_192.f_150.f_1;
			}
			unk_0x9C929B838435DB54(fVar0, fVar1);
			unk_0xC8813DFDECA7BB27(fVar0, fVar1, 0);
			if (!unk_0xBCC73B466E2B2350(Global_1958711.f_24) && !func_35())
			{
				if (!BitTest(Local_192.f_5, 8))
				{
					unk_0x9A42DD879A371772();
				}
				unk_0xA6CE32374156EFA0();
			}
		}
	}
}

void func_361()
{
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159))
	{
		if (unk_0x78D9ADD511FEAD8B(Local_192.f_41) && Local_192.f_41 == -1)
		{
			Local_192.f_41 = unk_0xA9ADCC8D104AA552();
			unk_0x91DFC8F68F6D9B05(Local_192.f_41, "HUD_Loop", Local_192.f_157, 1);
		}
	}
}

void func_362()
{
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159))
	{
		if (unk_0x78D9ADD511FEAD8B(Local_192.f_31))
		{
			Local_192.f_31 = unk_0xA9ADCC8D104AA552();
			unk_0x979FC7400A5D0CD2(Local_192.f_31, "Flight_Loop", unk_0xE8BBC6CC2C60F24A(Local_192.f_159), Local_192.f_157, 0, 0);
			unk_0x57973ADDF2BFAA90(Local_192.f_31, "DroneRotationalSpeed", Local_192.f_129);
		}
		else
		{
			unk_0x57973ADDF2BFAA90(Local_192.f_31, "DroneRotationalSpeed", Local_192.f_129);
		}
		if (unk_0x78D9ADD511FEAD8B(Local_192.f_40))
		{
			unk_0xCDBCC1BC1184B002(Local_192.f_40);
			Local_192.f_40 = -1;
		}
	}
}

void func_363()
{
	if (func_19(unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 450, 1);
	}
}

void func_364()
{
	int iVar0;
	
	if (func_24())
	{
		iVar0 = unk_0xA1087A6350CD9244(Local_192.f_45);
		if (unk_0x90F6E2F6488B98BA(Local_192.f_159) && func_19(iVar0, 1, 1))
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0x407E03586628E458(iVar0), 0))
			{
				if (func_365(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), unk_0x407E03586628E458(iVar0), Global_262145.f_25340, 1))
				{
					if (!func_209(unk_0x9E2D6C50374FCFA9(), iVar0))
					{
						if (unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) != unk_0x0E40F846A70BA3EC(iVar0) || unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1)
						{
							unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 11);
							return;
						}
					}
				}
			}
		}
		unk_0xB0550BC91B0159D6(&(Local_192.f_5), 11);
	}
}

bool func_365(int iParam0, int iParam1, float fParam2, int iParam3)
{
	return unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(iParam0, iParam3), unk_0x6B62510F212526DC(iParam1, iParam3)) <= (fParam2 * fParam2);
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
		if (!BitTest(Local_192.f_5, 29))
		{
			if (unk_0x876B1078E90C91CB(Local_192.f_169) && unk_0x4B0B4E357722C507(Local_192.f_169))
			{
				if (func_17(func_18()))
				{
					if (func_22(&(Local_192.f_269), iVar0, 0))
					{
						unk_0x3FF6DDE9123AEA35(func_18(), 1, 0);
						unk_0x959E1626CBC7D38A(func_18(), true, 0);
						unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 29);
					}
				}
			}
		}
	}
}

void func_367()
{
	if (!func_16() || unk_0x9E2D6C50374FCFA9() == func_12())
	{
		return;
	}
	if (func_22(&(Local_192.f_281[unk_0x9E2D6C50374FCFA9() /*2*/]), 2500, 0))
	{
		if (unk_0x6B8F21F773404988(Local_192.f_207[unk_0x9E2D6C50374FCFA9()]))
		{
			unk_0x0F53BC871BA89C94(Local_192.f_207[unk_0x9E2D6C50374FCFA9()], 0);
		}
		func_21(&(Local_192.f_281[unk_0x9E2D6C50374FCFA9() /*2*/]));
	}
}

void func_368()
{
	char* sVar0;
	var uVar1;
	var uVar2;
	
	sVar0 = "scr_ih_sub";
	unk_0xD86C99569D4749B0(sVar0);
	if (unk_0x6264B811E8D92198(sVar0))
	{
		if (func_17(func_15()) && unk_0x9E2D6C50374FCFA9() != func_12())
		{
			if (!unk_0x6B8F21F773404988(Local_192.f_207[unk_0x9E2D6C50374FCFA9()]))
			{
				unk_0x76B797B61752AAB8(sVar0);
				uVar1 = func_375(unk_0x9E2D6C50374FCFA9());
				uVar2 = unk_0x7F0054A115D66F44(func_15(), uVar1);
				Local_192.f_207[unk_0x9E2D6C50374FCFA9()] = unk_0xDC82D60B1E9406A2("scr_ih_sub_missile_launch", func_15(), func_374(unk_0x9E2D6C50374FCFA9()), 0f, 0f, 0f, uVar2, 5f, 0, 0, 0);
			}
			else
			{
				func_23(&(Local_192.f_281[unk_0x9E2D6C50374FCFA9() /*2*/]), 0, 0);
			}
			if (func_25(&(Local_192.f_281[unk_0x9E2D6C50374FCFA9() /*2*/])))
			{
				if (func_22(&(Local_192.f_281[unk_0x9E2D6C50374FCFA9() /*2*/]), 1000, 0))
				{
					unk_0x39B111DDFA0712B3(Local_192.f_207[unk_0x9E2D6C50374FCFA9()], "flame", 0.15f, 0);
					func_370();
					func_267();
					func_348();
					if (!unk_0x2B5F4FBAF644BEC8(unk_0xE8BBC6CC2C60F24A(Local_192.f_159)))
					{
						unk_0x1C2ED929474DC6FE(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), true, 0);
					}
					func_369();
					if (unk_0x78D9ADD511FEAD8B(Local_192.f_40))
					{
						Local_192.f_40 = unk_0xA9ADCC8D104AA552();
						unk_0x91DFC8F68F6D9B05(Local_192.f_40, "HUD_Startup", Local_192.f_157, 1);
					}
					func_270();
					func_102();
					func_237(1);
					unk_0xDEABC7EC7DA2B48E();
					unk_0x5C3549D308EC0B7F("IslandPeriscope");
					unk_0x850D4EF3D40FB068(1, 0, 0, 1, 1, 0);
					Local_192.f_173 = unk_0x0A89FDFA763DCAED();
					unk_0x9210F85E9CD785F1(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0);
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
		if (!unk_0xA37204C64473B324("DLC_BTL_Hacker_Drone_HUD_Scene"))
		{
			unk_0x66B27A59829491D3("DLC_BTL_Hacker_Drone_HUD_Scene");
		}
	}
	else if (func_24())
	{
		if (!unk_0xA37204C64473B324("DLC_Arena_Battle_Drone_HUD_Scene"))
		{
			unk_0x66B27A59829491D3("DLC_Arena_Battle_Drone_HUD_Scene");
		}
	}
	else if (func_38())
	{
		if (!unk_0xA37204C64473B324("DLC_Arena_Spectator_Drone_HUD_Scene"))
		{
			unk_0x66B27A59829491D3("DLC_Arena_Spectator_Drone_HUD_Scene");
		}
	}
	else if (func_35())
	{
		if (!unk_0xA37204C64473B324("dlc_aw_arena_piloted_missile_scene"))
		{
			unk_0x66B27A59829491D3("dlc_aw_arena_piloted_missile_scene");
		}
	}
	else if (func_16())
	{
		if (!unk_0xA37204C64473B324("dlc_hei4_submarine_guided_missile_Scene"))
		{
			unk_0x66B27A59829491D3("dlc_hei4_submarine_guided_missile_Scene");
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
	
	uVar1 = func_375(unk_0x9E2D6C50374FCFA9());
	if (Global_1581359 == 1)
	{
		uVar0 = unk_0x7F0054A115D66F44(func_15(), uVar1);
		Var2 = { unk_0x851CFDE0CBC150EC(func_15(), uVar0) };
		Local_192.f_144 = { unk_0x6DB7FBD602C51670(Var2, unk_0x82FE2343F8BDFF0B(func_15()), 0f, 0f, -2.6f) };
	}
	else if (Global_1581359 == 2)
	{
		uVar0 = unk_0x7F0054A115D66F44(func_15(), uVar1);
		Var2 = { unk_0x851CFDE0CBC150EC(func_15(), uVar0) };
		Local_192.f_144 = { unk_0x6DB7FBD602C51670(Var2, unk_0x82FE2343F8BDFF0B(func_15()), 0f, 0f, -2.6f) };
	}
	Var5 = { unk_0x63A8BF5E6C2BF85C(func_15(), 2) };
	unk_0xC64B6E13A6A7F517(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), Local_192.f_144, 1, 0, 0, 1);
	func_372(Local_192.f_144, (Var5.f_0 + 90f), 180f, 0f);
	Var8 = { unk_0x6B62510F212526DC(func_15(), 1) };
	Var11 = { 0f, 0f, 0f };
	Local_192.f_116 = func_371(Var11, Var8);
	unk_0xBBF86885619695CE(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), Local_192.f_116);
	unk_0x8CE3D365F064F69E(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), (Var5.f_0 - 90f), 0f, Local_192.f_116, 2, 1);
	if (unk_0x78D9ADD511FEAD8B(Local_192.f_115))
	{
		Local_192.f_115 = unk_0xA9ADCC8D104AA552();
		unk_0x979FC7400A5D0CD2(Local_192.f_115, "Missile_Launch", unk_0xE8BBC6CC2C60F24A(Local_192.f_159), Local_192.f_157, 1, 0);
	}
}

var func_371(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0xD12EFCAB87804BED((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_372(struct<3> Param0, struct<3> Param3)
{
	if (!func_373(Global_1958711.f_13, Param0, 0))
	{
		Global_1958711.f_13 = { Param0 };
		Param3 = { Param3 + Vector(0f, -180f, 180f) };
		Global_1958711.f_16 = { Param3 };
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
	if (Local_192.f_82[iParam0] > 4)
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
	switch (Local_192.f_82[iParam0])
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
	switch (Local_192.f_80)
	{
		case 0:
			if (!unk_0x90F6E2F6488B98BA(Local_192.f_160))
			{
				iVar0 = joaat("ch_prop_ch_phone_ing_01a");
				if (func_179(iVar0))
				{
					if (func_92(unk_0xC162EEC794CBB80B(false, 1) + 1, 0, 1))
					{
						if (!BitTest(Local_192.f_6, 3))
						{
							unk_0x793E115A707D0BF5(unk_0xC162EEC794CBB80B(false, 1) + 1);
							unk_0xCED9E32812D6C7C7(&(Local_192.f_6), 3);
						}
						if (unk_0x853FFA3D0A54864F(1))
						{
							if (func_381(&(Local_192.f_160), iVar0, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 0, 1, 1, 0, 0, 0, 1))
							{
								unk_0xAEBA172874A3DEFC(Local_192.f_160, unk_0x9E2D6C50374FCFA9(), 1);
								iVar1 = unk_0xB897FCFCFA664B38(unk_0xE2D3D51028F0428A(), 28422);
								unk_0x9A97DC6DBC7B223D(unk_0xE8BBC6CC2C60F24A(Local_192.f_160), unk_0xE2D3D51028F0428A(), iVar1, 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0);
								unk_0xF1A23B343DFEDFD0(iVar0);
							}
						}
					}
				}
			}
			else
			{
				Local_192.f_80 = 1;
			}
			break;
		
		case 1:
			if (unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), joaat("script_task_go_straight_to_coord")) != 0 && unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), joaat("script_task_go_straight_to_coord")) != 1)
			{
				func_333(0, 0, 0);
				Local_192.f_80 = 2;
			}
			break;
		
		case 2:
			if (func_380(0, "CREATE"))
			{
				func_362();
				if (func_379(Local_192.f_160))
				{
					if (!unk_0x2B5F4FBAF644BEC8(unk_0xE8BBC6CC2C60F24A(Local_192.f_160)))
					{
						unk_0x1C2ED929474DC6FE(unk_0xE8BBC6CC2C60F24A(Local_192.f_160), true, 0);
					}
				}
				if (func_379(Local_192.f_159))
				{
					if (!unk_0x2B5F4FBAF644BEC8(unk_0xE8BBC6CC2C60F24A(Local_192.f_159)))
					{
						unk_0x1C2ED929474DC6FE(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), true, 0);
						unk_0x1C2ED929474DC6FE(Local_192.f_163, false, 0);
					}
				}
			}
			if (func_377(1))
			{
				unk_0x9A97DC6DBC7B223D(Local_192.f_163, unk_0xE8BBC6CC2C60F24A(Local_192.f_159), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
				unk_0x1C2ED929474DC6FE(Local_192.f_163, false, 0);
				unk_0xEC5CB2A3F2052039(unk_0xF2D8DACFAEBD9629(Local_192.f_159));
				unk_0xC225C3D9CC954480(unk_0xE8BBC6CC2C60F24A(Local_192.f_159));
				func_270();
				func_131();
				func_237(1);
				func_249();
				func_352();
				func_369();
				if (unk_0x78D9ADD511FEAD8B(Local_192.f_40))
				{
					Local_192.f_40 = unk_0xA9ADCC8D104AA552();
					unk_0x91DFC8F68F6D9B05(Local_192.f_40, "HUD_Startup", Local_192.f_157, 1);
				}
				unk_0x850D4EF3D40FB068(1, 0, 0, 1, 1, 0);
				Local_192.f_173 = unk_0x0A89FDFA763DCAED();
				func_383(4);
				func_333(1, 1, 0);
				Local_192.f_80 = 3;
			}
			break;
		
		case 3:
			if (func_377(0))
			{
				iVar2 = unk_0x5853B15F78E1A265(0, 3);
				switch (iVar2)
				{
					case 0:
						func_333(2, 0, 0);
						Local_192.f_243 = 2;
						break;
					
					case 1:
						func_333(3, 0, 0);
						Local_192.f_243 = 3;
						break;
					
					case 2:
						func_333(4, 0, 0);
						Local_192.f_243 = 4;
						break;
				}
				Local_192.f_80 = 4;
			}
			break;
		
		case 4:
			if (func_377(0))
			{
				func_333(1, 1, 0);
				Local_192.f_80 = 3;
			}
			break;
	}
}

int func_377(bool bParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0xE2D3D51028F0428A();
	if (func_17(iVar0))
	{
		fVar1 = func_378();
		iVar2 = unk_0x57736A7B8965A88A(Local_192.f_79);
		if (unk_0xCE2C78E9FC0B01E3(iVar2) && unk_0x54DE1614490C2A83(iVar2) >= fVar1)
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
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		unk_0xC31EECA11005273C(uParam0);
		return unk_0x07B2F8356DC13CF4(uParam0);
	}
	return 0;
}

int func_380(int iParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = unk_0x57736A7B8965A88A(Local_192.f_79);
	if (iVar0 != -1)
	{
		if (unk_0xCE2C78E9FC0B01E3(iVar0))
		{
			if ((unk_0xD9E56EC8ED04E45E(unk_0xE2D3D51028F0428A(), unk_0x2E87280918B16506(sParam1)) || unk_0xD9E56EC8ED04E45E(unk_0xE8BBC6CC2C60F24A(Local_192.f_160), unk_0x2E87280918B16506(sParam1))) || unk_0xD9E56EC8ED04E45E(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), unk_0x2E87280918B16506(sParam1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_381(var uParam0, int iParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!unk_0x853FFA3D0A54864F(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = unk_0x2D0F5291E9305922(unk_0x0A7322C6D0E1A985(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	else
	{
		*uParam0 = unk_0x2D0F5291E9305922(unk_0x0E536D72AB30F4C8(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	if (unk_0xCCDCD6672DAE6835(*uParam0))
	{
		unk_0x398C962F550CF3B4(unk_0xE8BBC6CC2C60F24A(*uParam0), iParam8);
		if (bParam10)
		{
			unk_0x229DD509EDB2FBD4(unk_0xE8BBC6CC2C60F24A(*uParam0), 1);
		}
		if (bParam11)
		{
			unk_0x1C2ED929474DC6FE(unk_0xE8BBC6CC2C60F24A(*uParam0), false, 0);
		}
		if (unk_0xD64C90C3F536F963(unk_0xE8BBC6CC2C60F24A(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x4C6E9D70687FCDCE(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

bool func_382()
{
	return BitTest(Global_1958711, 13);
}

void func_383(int iParam0)
{
	if (Local_192.f_241 != iParam0)
	{
		Local_192.f_241 = iParam0;
	}
}

void func_384(bool bParam0)
{
	if (bParam0)
	{
		if (!func_382())
		{
			unk_0xCED9E32812D6C7C7(&Global_1958711, 13);
		}
	}
	else if (func_382())
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 13);
	}
}

void func_385()
{
	struct<3> Var0;
	
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159))
	{
		if (unk_0x07B2F8356DC13CF4(Local_192.f_159))
		{
			if (!unk_0x876B1078E90C91CB(Local_192.f_169) && BitTest(Local_192.f_5, 0))
			{
				if (func_396())
				{
					if (func_340())
					{
						func_298(unk_0x9E2D6C50374FCFA9(), 0, 33280, 0);
					}
					else if (!func_35())
					{
						func_298(unk_0x9E2D6C50374FCFA9(), 0, 512, 0);
					}
					if (!func_395())
					{
						unk_0xEDD332B8622A1AAA();
					}
					else
					{
						unk_0xC8483C4C42152921();
					}
					Local_192.f_169 = unk_0xAE96F9AFF21228DC(26379945, 1);
					unk_0x0A18C027350D3C19(Local_192.f_169, Local_192.f_125);
					unk_0x74789DA66781DB64(Local_192.f_169, 0.01f);
					unk_0x1D809C24759A3FED(Local_192.f_169, 0.01f);
					unk_0xDEABC7EC7DA2B48E();
					if (func_35())
					{
						unk_0x5C3549D308EC0B7F("eyeinthesky");
					}
					Var0 = { func_394() };
					unk_0x383A38DA6B16DB3A(Local_192.f_169, unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0f, 0f, 180f, Var0, 1);
					if (func_35())
					{
						unk_0x93150D31CE38FE75(Local_192.f_169, func_393() - Vector(0f, -180f, 180f), 2);
					}
					unk_0x940745265434EB5F(Local_192.f_150, 75f, 75f);
					unk_0x7D5C42A7CDB11DB6(Local_192.f_150, unk_0xE42645792657F001(Local_192.f_169, 2));
					if (!func_16())
					{
						unk_0x9210F85E9CD785F1(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0);
					}
					if (!func_340())
					{
						if (unk_0x8A6AB093D1EE5368())
						{
							unk_0xEE3A19A84A10F8B9();
						}
					}
					if (!func_31() && !func_16())
					{
						func_369();
						if (unk_0x78D9ADD511FEAD8B(Local_192.f_40))
						{
							Local_192.f_40 = unk_0xA9ADCC8D104AA552();
							unk_0x91DFC8F68F6D9B05(Local_192.f_40, "HUD_Startup", Local_192.f_157, 1);
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
						unk_0x850D4EF3D40FB068(1, 0, 0, 1, 1, 0);
						Local_192.f_173 = unk_0x0A89FDFA763DCAED();
					}
					func_390(1);
					func_389(1);
					func_387(158);
					unk_0xCED9E32812D6C7C7(&(Local_94[unk_0x9E2D6C50374FCFA9() /*3*/]), 0);
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
						Local_192.f_153 = { func_6(unk_0x9E2D6C50374FCFA9()) };
						unk_0x9CD4CBF2BBE10F00(Local_192.f_153, &(Local_192.f_153.f_2), 0, 0);
						Local_192.f_118 = unk_0x82FE2343F8BDFF0B(unk_0xE2D3D51028F0428A());
						func_386();
						Local_192.f_153 = { unk_0x6DB7FBD602C51670(Local_192.f_153, Local_192.f_118, -0.0695723f, 0.177497f, 0f) };
						func_383(2);
					}
				}
				else if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					unk_0xAB7639D658BBCCEE(unk_0xE2D3D51028F0428A(), 0, 0);
				}
			}
			else
			{
				if (unk_0x876B1078E90C91CB(Local_192.f_169))
				{
				}
				if (!BitTest(Local_192.f_5, 0))
				{
				}
			}
		}
		else
		{
			unk_0xC31EECA11005273C(Local_192.f_159);
		}
	}
}

void func_386()
{
	int iVar0;
	
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar0, 1);
		if (!(iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("object")))
		{
			unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
		}
	}
}

void func_387(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_9035)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_388() /*5567*/].f_681.f_4241[iVar0 /*3*/] == iParam0)
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
		if (!BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_348, 26))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_348), 26);
		}
	}
	else if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_348, 26))
	{
		unk_0xB0550BC91B0159D6(&(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_348), 26);
	}
}

void func_390(bool bParam0)
{
	if (bParam0)
	{
		if (!func_75())
		{
			unk_0xCED9E32812D6C7C7(&Global_1958711, 5);
		}
	}
	else
	{
		if (func_75())
		{
			unk_0xB0550BC91B0159D6(&Global_1958711, 5);
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
			unk_0xCED9E32812D6C7C7(&Global_1958711, 12);
		}
	}
	else if (func_392())
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 12);
	}
}

bool func_392()
{
	return BitTest(Global_1958711, 12);
}

Vector3 func_393()
{
	return Global_1958711.f_16;
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
	return BitTest(Global_1958711, 10);
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
	if (!func_70(unk_0x9E2D6C50374FCFA9(), 0) && !func_294())
	{
		return 1;
	}
	return 0;
}

int func_397()
{
	if (func_46(unk_0x9E2D6C50374FCFA9()) && func_42())
	{
		if (Global_1581359 == 2 || Global_1581359 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_398()
{
	if (Global_1581350 != -1 || Global_1581356 != -1)
	{
		if (((unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
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
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
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
	if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1421.593f, -3011.17f, -80.24994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1419.463f, -3009.145f, -80.49994f, -1420.684f, -3010.617f, -77.99994f, 2f, 0, 1, 0))
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
	if (func_179(Local_192.f_240) && func_179(iVar0))
	{
		if (!BitTest(Local_192.f_5, 0))
		{
			if (!unk_0x90F6E2F6488B98BA(Local_192.f_159))
			{
				if (!func_340())
				{
					if (func_138())
					{
						if (func_17(func_345()))
						{
							Var1 = { unk_0x6B62510F212526DC(func_345(), 1) };
						}
					}
					else
					{
						Var1 = { Local_192.f_138 };
					}
					if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
					{
						func_298(unk_0x9E2D6C50374FCFA9(), 0, 512, 0);
					}
					if (!BitTest(Local_192.f_5, 18))
					{
						if (unk_0xCA60DF1D01DBD440(Var1, 100f, 1))
						{
							unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 18);
						}
					}
					else if (unk_0x8A6AB093D1EE5368())
					{
						if (!BitTest(Local_192.f_5, 19))
						{
							if (func_408())
							{
								if (func_405())
								{
									unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 19);
								}
							}
							else
							{
								if (!func_257(func_404()))
								{
									Local_192.f_138 = { func_404() };
								}
								unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 19);
								if (func_16())
								{
									Local_192.f_138.f_2 = (Local_192.f_138.f_2 + 1000f);
								}
							}
						}
					}
				}
				if (BitTest(Local_192.f_5, 19) || func_340())
				{
					if (!BitTest(Local_192.f_5, 20))
					{
						Local_192.f_163 = unk_0xBA715A7BEBA5A1F9(iVar0, Local_192.f_138, 0f, 0, 0, 0);
						unk_0x9210F85E9CD785F1(Local_192.f_163, 1);
						unk_0xA539EDE8DA5BBC22(Local_192.f_163, Local_192.f_138, 0, 0, 1);
						unk_0x3FF6DDE9123AEA35(Local_192.f_163, 0, 0);
						unk_0x1C2ED929474DC6FE(Local_192.f_163, false, 0);
						unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 20);
					}
					else if (func_92(unk_0xC162EEC794CBB80B(false, 1) + 1, 0, 1))
					{
						if (!BitTest(Local_192.f_5, 30))
						{
							unk_0x793E115A707D0BF5(unk_0xC162EEC794CBB80B(false, 1) + 1);
							unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 30);
						}
						if (unk_0x853FFA3D0A54864F(1))
						{
							bVar4 = func_403();
							if (func_31())
							{
								Local_192.f_153 = { func_6(unk_0x9E2D6C50374FCFA9()) };
								unk_0x9CD4CBF2BBE10F00(Local_192.f_153, &(Local_192.f_153.f_2), 0, 0);
								Local_192.f_138 = { unk_0x3DBAB8E11699EAEE(Local_192.f_158, "ENTER", Local_192.f_153, unk_0x63A8BF5E6C2BF85C(unk_0xE2D3D51028F0428A(), 2), 0, 2) };
							}
							if (func_381(&(Local_192.f_159), Local_192.f_240, Local_192.f_138, 0, 1, 1, 1, 1, 0, bVar4))
							{
								Global_1958711.f_20 = unk_0xE8BBC6CC2C60F24A(Local_192.f_159);
								unk_0x9210F85E9CD785F1(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 1);
								if (func_138())
								{
									if (func_17(func_345()))
									{
										unk_0x8CE3D365F064F69E(func_18(), unk_0x63A8BF5E6C2BF85C(func_345(), 2), 2, 1);
										fVar5 = (unk_0x82FE2343F8BDFF0B(func_345()) + 180f);
									}
								}
								Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_421 = { Local_192.f_138 };
								Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_424 = fVar5;
								Local_94[unk_0x9E2D6C50374FCFA9() /*3*/].f_2 = Local_192.f_159;
								unk_0xAEBA172874A3DEFC(Local_192.f_159, unk_0x9E2D6C50374FCFA9(), 1);
								unk_0xD7E367CFE1819EC5(unk_0xF2D8DACFAEBD9629(Local_192.f_159), 1);
								unk_0x006574E87E6F1942(unk_0xF2D8DACFAEBD9629(Local_192.f_159), 1, 1);
								unk_0xA539EDE8DA5BBC22(func_18(), Local_192.f_138, 0, 0, 1);
								unk_0xBBF86885619695CE(func_18(), fVar5);
								unk_0xBCC4FA7BA265FF12(func_18(), 1);
								if (!func_257(func_393()))
								{
									unk_0x8CE3D365F064F69E(func_18(), func_393(), 2, 1);
								}
								if (func_35() || func_16())
								{
									unk_0x3FF6DDE9123AEA35(func_18(), 0, 0);
								}
								unk_0x4B3731CB7C1CF225(Local_192.f_159, 1);
								if (func_164(unk_0x9E2D6C50374FCFA9()))
								{
									unk_0xF160248D9083ED0C(func_18(), Global_262145.f_24698 * 5, 0);
								}
								else if (func_16())
								{
									unk_0xF160248D9083ED0C(func_18(), 1, 0);
									unk_0x4C6E9D70687FCDCE(Local_192.f_159, 1);
									unk_0x7A93DEA53EFC3CF2(unk_0xF2D8DACFAEBD9629(Local_192.f_159), 700);
								}
								else
								{
									unk_0xF160248D9083ED0C(func_18(), Global_262145.f_24698, 0);
								}
								unk_0xBEA5F528349F8F75(Local_192.f_159, 0);
								unk_0x3AA7FA9BA4F7A9E7(unk_0xF2D8DACFAEBD9629(Local_192.f_159), 1);
								unk_0x940745265434EB5F(Local_192.f_138, 100f, 200f);
								unk_0x7D5C42A7CDB11DB6(unk_0x6B62510F212526DC(unk_0xF2D8DACFAEBD9629(Local_192.f_159), 1), unk_0x63A8BF5E6C2BF85C(unk_0xF2D8DACFAEBD9629(Local_192.f_159), 2));
								unk_0xF1A23B343DFEDFD0(Local_192.f_240);
								unk_0xF1A23B343DFEDFD0(iVar0);
							}
						}
					}
				}
			}
			else
			{
				unk_0x823AC5A743053194(unk_0xE8BBC6CC2C60F24A(Local_192.f_159), 0);
				if (func_17(Local_192.f_163))
				{
					if (func_17(unk_0xF2D8DACFAEBD9629(Local_192.f_159)))
					{
						unk_0x9A97DC6DBC7B223D(Local_192.f_163, unk_0xE8BBC6CC2C60F24A(Local_192.f_159), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
						unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 0);
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
	return Global_1958711.f_13;
}

int func_405()
{
	if (Local_192.f_16 == 0)
	{
		if (!BitTest(Local_192.f_5, 14))
		{
			if ((!func_164(unk_0x9E2D6C50374FCFA9()) && func_138()) && func_17(func_345()))
			{
				Local_192.f_138 = { unk_0x6DB7FBD602C51670(unk_0x6B62510F212526DC(func_345(), 1), unk_0x82FE2343F8BDFF0B(func_345()), -0.7f, 1.6f, 4f) };
				unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 14);
			}
			else
			{
				if (func_138() && func_17(func_345()))
				{
					Local_192.f_138 = { unk_0x6DB7FBD602C51670(unk_0x6B62510F212526DC(func_345(), 1), unk_0x82FE2343F8BDFF0B(func_345()), -0.7f, 1.6f, 4f) };
				}
				Local_192.f_138 = unk_0xC4EAB25A108C2429((Local_192.f_138 - 1.5f), (Local_192.f_138 + 1.5f));
				Local_192.f_138.f_1 = unk_0xC4EAB25A108C2429((Local_192.f_138.f_1 - 1.5f), (Local_192.f_138.f_1 + 1.5f));
				Local_192.f_138.f_2 = unk_0xC4EAB25A108C2429((Local_192.f_138.f_2 + 0.5f), (Local_192.f_138.f_2 + 1.5f));
				if (!func_407(Local_192.f_138))
				{
					unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 14);
				}
			}
		}
		else if (BitTest(Local_192.f_5, 15))
		{
			Local_192.f_138 = unk_0xC4EAB25A108C2429((Local_192.f_138 - 1.5f), (Local_192.f_138 + 1.5f));
			Local_192.f_138.f_1 = unk_0xC4EAB25A108C2429((Local_192.f_138.f_1 - 1.5f), (Local_192.f_138.f_1 + 1.5f));
			Local_192.f_138.f_2 = unk_0xC4EAB25A108C2429((Local_192.f_138.f_2 + 0.5f), (Local_192.f_138.f_2 + 1.5f));
			if (!func_407(Local_192.f_138))
			{
				unk_0xB0550BC91B0159D6(&(Local_192.f_5), 15);
			}
		}
		func_406(Local_192.f_138);
	}
	else if (Local_192.f_16 == 1 && !func_407(Local_192.f_138))
	{
		return 1;
	}
	else
	{
		Local_192.f_16 = 0;
		unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 15);
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
	
	switch (Local_192.f_15)
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
				fVar1 = func_215(Local_192.f_240);
			}
			else
			{
				fVar1 = (func_215(Local_192.f_240) * 11f);
			}
			Local_192.f_168 = unk_0x9D2C476A7D8D9385(Param0, Param0, fVar1, 511, uVar0, 4);
			if (Local_192.f_168 != 0)
			{
				Local_192.f_15 = 1;
			}
			break;
		
		case 1:
			iVar10 = unk_0xB2D581BD7446BBE9(Local_192.f_168, &iVar2, &Var6, &uVar3, &uVar9);
			if (iVar10 == 2)
			{
				if (iVar2 == 0)
				{
					Local_192.f_16 = 1;
					Var6 = { 0f, 0f, 0f };
				}
				else
				{
					Local_192.f_16 = 2;
					Local_192.f_168 = 0;
					Local_192.f_15 = 0;
				}
			}
			else if (iVar10 == 0)
			{
				Local_192.f_15 = 0;
			}
			break;
	}
}

int func_407(struct<3> Param0)
{
	if (unk_0x5F8653E60ED2288E(Param0, -1036.27f, -228.704f, 53.76435f, -1096.765f, -258.69f, 35.77808f, 20f, 0, 1))
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
		return Global_1946250.f_520 == 0;
	}
	return 0;
}

void func_410()
{
	if (func_19(unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		Local_192.f_141 = { func_258(&Local_192) };
		if (!func_257(func_404()))
		{
			Local_192.f_138 = { func_404() };
		}
		else
		{
			Local_192.f_138 = { func_6(unk_0x9E2D6C50374FCFA9()) };
			Local_192.f_138 = { Local_192.f_138, Local_192.f_138.f_1, (Local_192.f_138.f_2 + 1.5f) };
		}
		if (func_70(unk_0x9E2D6C50374FCFA9(), 0))
		{
			func_458(1);
		}
		if (func_70(unk_0x9E2D6C50374FCFA9(), 0))
		{
			func_455();
		}
		else if (((func_453(unk_0x9E2D6C50374FCFA9()) == 2 || func_453(unk_0x9E2D6C50374FCFA9()) == 1) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965532, 0))
		{
			if (BitTest(Global_2788035, 0))
			{
				func_452(1);
				func_444(0, 0);
				func_443();
				func_391(1);
				func_383(1);
			}
		}
		else if ((func_40() && func_439()) && !BitTest(Global_1965531, 6))
		{
			func_426();
		}
		else if (BitTest(Global_1965531, 6) && BitTest(Global_1965532, 0))
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
			unk_0x3410421C60BF7143(1);
			func_136("PIM_DRONAMOS", -1);
			func_298(unk_0x9E2D6C50374FCFA9(), 1, 0, 0);
			func_383(7);
		}
		else if (func_257(Local_192.f_135))
		{
			Local_192.f_156 = 0;
			func_391(1);
			func_383(1);
		}
	}
}

bool func_411()
{
	return BitTest(Global_1958711, 23);
}

void func_412()
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if ((func_397() && !func_425()) && !func_416())
	{
		if (unk_0x4C1B8C5717647539(2, 201) || unk_0x0DBA73788F6E3C5F(2, 201))
		{
			if (Global_1581359 == 1)
			{
				Local_192.f_82[unk_0x9E2D6C50374FCFA9()] = unk_0x5853B15F78E1A265(1, 5);
			}
			else
			{
				Local_192.f_82[unk_0x9E2D6C50374FCFA9()] = unk_0x5853B15F78E1A265(5, 9);
			}
			if (Global_1581359 == 1)
			{
				uVar0 = unk_0x7F0054A115D66F44(func_15(), func_375(unk_0x9E2D6C50374FCFA9()));
				Var1 = { unk_0x851CFDE0CBC150EC(func_15(), uVar0) };
				Local_192.f_144 = { unk_0x6DB7FBD602C51670(Var1, unk_0x82FE2343F8BDFF0B(func_15()), 0f, 0f, -2.6f) };
			}
			else if (Global_1581359 == 2)
			{
				uVar0 = unk_0x7F0054A115D66F44(func_15(), func_375(unk_0x9E2D6C50374FCFA9()));
				Var1 = { unk_0x851CFDE0CBC150EC(func_15(), uVar0) };
				Local_192.f_144 = { unk_0x6DB7FBD602C51670(Var1, unk_0x82FE2343F8BDFF0B(func_15()), 0f, 0f, -2.6f) };
			}
			Var4 = { unk_0x63A8BF5E6C2BF85C(func_15(), 2) };
			func_372(Local_192.f_144, (Var4.f_0 + 90f), 180f, Var4.f_2);
			func_391(1);
			func_415(Local_192.f_82[unk_0x9E2D6C50374FCFA9()]);
			func_383(1);
			func_414();
			func_413();
			unk_0x3410421C60BF7143(1);
		}
	}
	else if (!func_17(func_15()))
	{
	}
	if (func_425())
	{
		if (func_194("MP_SUBSEAT_2"))
		{
			unk_0x3410421C60BF7143(1);
		}
	}
}

void func_413()
{
	Global_2815059.f_337++;
}

void func_414()
{
	Global_2815059.f_337 = 0;
	Global_2815059.f_337.f_1 = 0;
}

void func_415(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = -1007374530;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = uParam0;
	iVar3 = func_191(0, 1);
	if (iVar3 != 0)
	{
		unk_0x2700C00F82C16BF0(1, &Var0, 3, iVar3);
	}
}

int func_416()
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1420.915f, -3009.132f, -79.99994f, -1421.98f, -3009.121f, -77.74994f, 1f, 0, 1, 0))
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
	if (unk_0xF1EC2C71FD1371B8())
	{
		return 1;
	}
	if (func_294())
	{
		return 1;
	}
	if (func_70(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (func_47(Global_1853193))
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
			if (BitTest(Local_192.f_5, 28))
			{
				return 1;
			}
		}
	}
	if (func_16())
	{
		if ((func_420() && Global_1581359 == 1) || (func_419() && Global_1581359 == 2))
		{
			return 1;
		}
		if (BitTest(Local_192.f_5, 28))
		{
			return 1;
		}
		if (!func_17(func_15()))
		{
			return 1;
		}
		Var0 = { unk_0x6B62510F212526DC(func_15(), 1) };
		if (Var0.f_2 <= -3f)
		{
			return 1;
		}
		uVar3 = unk_0xAB793EA186AB8DAA(func_15(), -1, 0);
		if (func_17(uVar3))
		{
			if (unk_0x65FAB09725E2FE75(uVar3))
			{
				if (func_198(unk_0xFF65CDB0EB7ACE71(iVar3)))
				{
					return 1;
				}
			}
		}
	}
	if (func_198(unk_0x9E2D6C50374FCFA9()))
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
			if (func_19(unk_0x9E2D6C50374FCFA9(), 1, 1))
			{
				if (func_155(unk_0xE2D3D51028F0428A(), -1422.188f, -3015.926f, -80.1554f, 1) < 1.5f)
				{
					return 1;
				}
				if (func_418())
				{
					return 1;
				}
			}
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) || func_417(unk_0xE2D3D51028F0428A(), 1))
			{
				return 1;
			}
		}
	}
	if (func_196())
	{
		return 1;
	}
	if (Global_262145.f_24708)
	{
		return 1;
	}
	if (BitTest(Local_192.f_5, 27))
	{
		return 1;
	}
	if (func_70(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (func_17(func_345()))
		{
			if ((unk_0xD132EDDA78FF4A51(func_345(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(func_345(), 908.465f, 34.85726f, 79.35429f, 926.4139f, 64.37743f, 87.99218f, 19f, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(func_345(), 946.8937f, -6.119501f, 77.90774f, 962.0698f, -5.454865f, 88.65581f, 10.75f, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_1581354)
	{
		return 1;
	}
	if (Global_2789737)
	{
		return 1;
	}
	if (Global_2789734)
	{
		return 1;
	}
	return 0;
}

int func_417(int iParam0, int iParam1)
{
	if (iParam1 && (!unk_0xE5965CDF24F93A9F(iParam0) || unk_0x55B23FE400FCEA6B(iParam0, 0)))
	{
		return 0;
	}
	if (unk_0x7F528E84564C4D10(iParam0, 2))
	{
		return 1;
	}
	if (unk_0x6FB52092269A5C69(iParam0) != 0 || unk_0x8DB5C2D06228DF32(iParam0) != 0)
	{
		return 1;
	}
	return 0;
}

int func_418()
{
	if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1420.588f, -3013.374f, -79.99994f, -1421.918f, -3012.804f, -77.99994f, 0.675f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_419()
{
	if (unk_0x9E2D6C50374FCFA9() == func_12())
	{
		return 0;
	}
	if (Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_9 != func_12() && unk_0x9E2D6C50374FCFA9() != func_12())
	{
		return BitTest(Global_1853348[Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_9 /*834*/].f_267.f_459, 2);
	}
	return 0;
}

int func_420()
{
	if (unk_0x9E2D6C50374FCFA9() == func_12())
	{
		return 0;
	}
	if (Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_9 != func_12() && unk_0x9E2D6C50374FCFA9() != func_12())
	{
		return BitTest(Global_1853348[Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_9 /*834*/].f_267.f_459, 1);
	}
	return 0;
}

int func_421()
{
	if (Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_9 != func_12() && unk_0x9E2D6C50374FCFA9() != func_12())
	{
		return BitTest(Global_1853348[Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_9 /*834*/].f_267.f_348, 20);
	}
	return 0;
}

int func_422()
{
	if (func_164(unk_0x9E2D6C50374FCFA9()) && Global_1958711.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_423()
{
	if (Global_2703735.f_833.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_424()
{
	return unk_0x320D1840B6DAA1CC() <= Global_23150.f_6269 + 100;
}

int func_425()
{
	char* sVar0;
	
	sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
	if (func_62(unk_0xE2D3D51028F0428A()))
	{
		sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
	}
	if ((((((((unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), sVar0, "enter_left", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), sVar0, "enter", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), sVar0, "exit", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), sVar0, "exit_left", 3)) || func_60(unk_0xE2D3D51028F0428A(), joaat("script_task_go_straight_to_coord")))
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
		if ((((((func_438() || func_437()) && !Global_1931426) && func_439()) && !BitTest(Global_2787913, 6)) && Global_1574965) && !(func_438() && Global_262145.f_26632))
		{
			if ((((((unk_0xF09A4F413B0D30EB(2, 224) || unk_0xF01464D7AF0B7347(2, 224)) && !unk_0xF09A4F413B0D30EB(2, 223)) && !unk_0xF01464D7AF0B7347(2, 223)) && !unk_0xF09A4F413B0D30EB(2, 235)) && !unk_0xF01464D7AF0B7347(2, 235)) && !unk_0x0DBA73788F6E3C5F(2, 19))
			{
				if (unk_0x616226219F841621(Global_262145.f_26634, 0, 0, 1, -1, 0) || BitTest(Global_2787913, 2))
				{
					unk_0xCED9E32812D6C7C7(&Global_2787913, 0);
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
						unk_0x979FC7400A5D0CD2(uVar3, "Select_Spec_Drone", unk_0xE2D3D51028F0428A(), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
					}
				}
				else if (!BitTest(Global_2787913, 4))
				{
					unk_0xCED9E32812D6C7C7(&Global_2787913, 4);
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
	if ((Global_4718592.f_162543.f_1 == 3 || Global_4718592.f_162543.f_1 == 3) || Global_4718592.f_162543.f_1 == 3)
	{
		Var3.f_1 = -3860f;
	}
	fVar1 = (fVar1 * IntToFloat(unk_0xF1354995C6159A78()));
	fVar2 = (fVar2 * IntToFloat((unk_0xF1354995C6159A78() / 8)));
	fVar1 = (fVar1 - (8f * fVar2));
	return unk_0x6DB7FBD602C51670(Var3, fVar0, fVar1, fVar2, 0f);
}

void func_428()
{
	int iVar0;
	
	iVar0 = func_429(73, -1);
	if (iVar0 >= 50)
	{
		unk_0xCED9E32812D6C7C7(&(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_353.f_3), 13);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_353.f_3), 13);
	}
}

int func_429(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2868734[iParam0 /*3*/][func_430(iParam1)];
	if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
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
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
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
	
	iVar0 = Global_2868734[iParam0 /*3*/][func_430(uParam2)];
	unk_0x076A5661EF5ABEE4(iVar0, iParam1, 1);
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
	iVar0 = Global_2826809[iParam0 /*3*/][func_430(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

int func_436(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2826809[iParam0 /*3*/][func_430(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_437()
{
	return Global_2725431;
}

int func_438()
{
	if (Global_2725430 >= 0 && Global_2725430 < 10)
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
	iVar0 = unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9());
	if (iVar0 >= 4 || iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = Global_1058069.f_14[iVar0];
	if (iVar1 < 17)
	{
		if ((((BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 23) && BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 24)) && BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 25)) && BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 26)) && BitTest(Global_4718592.f_32, 16))
		{
			return 1;
		}
	}
	if (!BitTest(Global_4718592.f_32, 16))
	{
		return 1;
	}
	else if (func_437() || func_440(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	return 0;
}

var func_440(int iParam0)
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_36.f_18, 14);
}

int func_441()
{
	if (Global_4718592.f_117095 == 1 || Global_4718592.f_117095 == 2)
	{
		return 1;
	}
	return 0;
}

var func_442()
{
	return BitTest(Global_4718592.f_162497, 12);
}

void func_443()
{
	unk_0xB0550BC91B0159D6(&Global_2788035, 0);
}

void func_444(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	Local_192.f_119 = Global_262145.f_24701;
	Local_192.f_130 = 40f;
	if (func_38() || func_24())
	{
		Local_192.f_119 = (Local_192.f_119 * 4.5f);
	}
	else if (func_35())
	{
		Local_192.f_119 = 100f;
		Local_192.f_130 = 26f;
	}
	else if (func_30())
	{
		Local_192.f_119 = 100f;
		Local_192.f_130 = 70f;
	}
	else if (func_160())
	{
		Local_192.f_119 = 10f;
		Local_192.f_130 = 35f;
	}
	else if (func_16())
	{
		Local_192.f_119 = 149f;
		Local_192.f_130 = 16f;
	}
	if (func_38())
	{
		Local_192.f_240 = joaat("xs_prop_arena_drone_01");
	}
	else if (func_24())
	{
		Local_192.f_240 = joaat("xs_prop_arena_drone_02");
	}
	else if (func_35())
	{
		Local_192.f_240 = joaat("xs_prop_arena_airmissile_01a");
		func_451(1);
	}
	else if (func_30())
	{
		if (!func_31())
		{
			iVar0 = func_450(unk_0x9E2D6C50374FCFA9());
			switch (iVar0)
			{
				case 37:
					Local_192.f_240 = joaat("ch_prop_arcade_drone_01d");
					break;
				
				case 38:
					Local_192.f_240 = joaat("ch_prop_arcade_drone_01a");
					break;
				
				case 39:
					Local_192.f_240 = joaat("ch_prop_arcade_drone_01c");
					break;
				
				case 40:
					Local_192.f_240 = joaat("ch_prop_arcade_drone_01b");
					break;
			}
		}
		else
		{
			Local_192.f_240 = joaat("ch_prop_casino_drone_01a");
		}
	}
	else if (func_160())
	{
		Local_192.f_240 = joaat("ch_prop_casino_drone_01a");
	}
	else if (func_16())
	{
		Local_192.f_240 = joaat("h4_prop_h4_airmissile_01a");
		func_451(1);
	}
	else
	{
		Local_192.f_240 = joaat("ba_prop_battle_drone_quad");
	}
	if (bParam1)
	{
		Local_192.f_138 = { Local_192.f_144 };
	}
	Global_1958711.f_1 = 1500;
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
		Local_192.f_158 = "ANIM_HEIST@HS3F@IG4_DRONE@MALE@";
		unk_0x8FB472886552D737(Local_192.f_158);
	}
	if (func_24())
	{
		unk_0xD86C99569D4749B0("scr_xs_dr");
	}
	if (func_31())
	{
		func_445(Global_262145.f_28780);
	}
	else if (func_30() && !func_31())
	{
		func_445(Global_262145.f_28781);
	}
	else if (func_16())
	{
		func_445(unk_0xBBDA792448DB5A89(Global_262145.f_30176));
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			Local_192.f_46[iVar1] = -1;
			iVar1++;
		}
	}
	else if (!func_138() && !func_340())
	{
		func_445(200f);
	}
	func_86(Global_1837194);
	if (bParam0)
	{
	}
}

void func_445(float fParam0)
{
	if (Global_1958711.f_8 != fParam0)
	{
		Global_1958711.f_8 = fParam0;
	}
}

void func_446(bool bParam0)
{
	if (bParam0)
	{
		if (!func_192())
		{
			unk_0xCED9E32812D6C7C7(&Global_1958711, 8);
		}
	}
	else if (func_192())
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 8);
	}
}

void func_447(bool bParam0)
{
	if (bParam0)
	{
		if (!func_356())
		{
			unk_0xCED9E32812D6C7C7(&Global_1958711, 2);
		}
	}
	else if (func_356())
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 2);
	}
}

void func_448(bool bParam0)
{
	if (bParam0)
	{
		if (!func_247())
		{
			unk_0xCED9E32812D6C7C7(&Global_1958711, 4);
		}
	}
	else if (func_247())
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 4);
	}
}

void func_449()
{
	if (!Local_192.f_156)
	{
		Local_192.f_18 = 100;
	}
	if (func_160())
	{
		Local_192.f_24 = 100;
	}
	Local_192.f_19 = 0;
	Local_192.f_20 = 100;
	Local_192.f_125 = 90f;
	Local_192.f_128 = 90f;
	if (!func_83())
	{
		Local_192.f_170 = unk_0x528279F3F1EEF869("DRONE_CAM");
	}
	else if (func_16())
	{
		Local_192.f_170 = func_111();
	}
	else
	{
		Local_192.f_170 = func_110();
	}
	if (func_38())
	{
		Local_192.f_157 = "DLC_Arena_Drone_Sounds";
	}
	else if (func_24())
	{
		Local_192.f_157 = "DLC_Arena_Battle_Drone_Sounds";
	}
	else if (func_35())
	{
		Local_192.f_157 = "DLC_Arena_Piloted_Missile_Sounds";
	}
	else if (func_16())
	{
		Local_192.f_157 = "DLC_H4_Piloted_Missile_Sounds";
	}
	else
	{
		Local_192.f_157 = "DLC_BTL_Drone_Sounds";
	}
}

int func_450(int iParam0)
{
	if (iParam0 != func_12())
	{
		return Global_2689235[iParam0 /*453*/].f_428.f_1;
	}
	return -1;
}

void func_451(bool bParam0)
{
	if (bParam0)
	{
		if (!func_203())
		{
			unk_0xCED9E32812D6C7C7(&Global_1958711, 15);
		}
	}
	else if (func_203())
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 15);
	}
}

void func_452(bool bParam0)
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

int func_453(int iParam0)
{
	if (iParam0 == unk_0x9E2D6C50374FCFA9() && !func_454())
	{
		return Global_2787940.f_1;
	}
	return Global_2680265.f_1399[iParam0 /*3*/].f_1;
}

int func_454()
{
	if (((Global_2787943 != 0 && Global_2787943 == Global_2787944) && Global_2787932 != 3) && Global_2787932 != 1)
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
				if (!unk_0xF847447D4467709D() && !unk_0x2D3AAABB780ED9B6())
				{
					func_457("DRONE_TRIG");
				}
			}
			else if (func_194("DRONE_TRIG"))
			{
				unk_0x3410421C60BF7143(1);
			}
			if (func_41() || func_399())
			{
				if (unk_0x26009F50A14AD073(2, 176) || unk_0x51844F589D928A86(2, 176))
				{
					func_391(1);
					func_383(1);
					unk_0x3410421C60BF7143(1);
				}
			}
			else if (func_194("DRONE_TRIG"))
			{
				if ((unk_0x26009F50A14AD073(2, 51) || unk_0x51844F589D928A86(2, 51)) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					Local_192.f_156 = 0;
					func_391(1);
					func_383(1);
					unk_0x3410421C60BF7143(1);
				}
			}
		}
		else if ((func_39() && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1420.684f, -3010.617f, -77.99994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0, 1, 0)) && func_400())
		{
			if (!unk_0xF847447D4467709D() && !unk_0x2D3AAABB780ED9B6())
			{
				func_457("DRONE_TRIG");
			}
			if (func_194("DRONE_TRIG"))
			{
				if (unk_0x26009F50A14AD073(2, 51) || unk_0x51844F589D928A86(2, 51))
				{
					Local_192.f_156 = 0;
					func_391(1);
					func_383(1);
					unk_0x3410421C60BF7143(1);
				}
			}
		}
		else if (func_194("DRONE_TRIG"))
		{
			unk_0x3410421C60BF7143(1);
		}
		if (func_456() || func_41())
		{
			if (func_194("DRONE_TRIG"))
			{
				unk_0x3410421C60BF7143(1);
			}
		}
	}
	else if (func_194("DRONE_TRIG"))
	{
		unk_0x3410421C60BF7143(1);
	}
}

int func_456()
{
	if ((((unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_60(unk_0xE2D3D51028F0428A(), joaat("script_task_go_straight_to_coord")))
	{
		return 1;
	}
	if ((unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3))
	{
		return 1;
	}
	return 0;
}

void func_457(char* sParam0)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 1, 1, -1);
}

void func_458(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 1))
		{
			Global_1958711.f_2 = 0;
			unk_0xCED9E32812D6C7C7(&(Global_1958711.f_2), 1);
		}
	}
	else if (BitTest(Global_1958711.f_2, 1))
	{
		unk_0xB0550BC91B0159D6(&(Global_1958711.f_2), 1);
	}
}

void func_459()
{
	char* sVar0;
	
	if (Local_192.f_45 == -1)
	{
		return;
	}
	if (!func_461(Local_192.f_45) && !func_460(Local_192.f_45))
	{
		return;
	}
	if (unk_0x90F6E2F6488B98BA(Local_94[Local_192.f_45 /*3*/].f_2))
	{
		sVar0 = "scr_xs_props";
		unk_0xD86C99569D4749B0(sVar0);
		if (unk_0x6264B811E8D92198(sVar0))
		{
			if (!unk_0x6B8F21F773404988(Local_192.f_174[Local_192.f_45]))
			{
				unk_0x76B797B61752AAB8(sVar0);
				if (func_461(Local_192.f_45))
				{
					Local_192.f_174[Local_192.f_45] = unk_0x2D649DA6DC187D35("scr_xs_guided_missile_trail", unk_0xE8BBC6CC2C60F24A(Local_94[Local_192.f_45 /*3*/].f_2), 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				}
				else
				{
					Local_192.f_174[Local_192.f_45] = unk_0x2D649DA6DC187D35("scr_xs_guided_missile_trail", unk_0xE8BBC6CC2C60F24A(Local_94[Local_192.f_45 /*3*/].f_2), 0f, 0.25f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
				}
			}
		}
	}
	else if (unk_0x6B8F21F773404988(Local_192.f_174[Local_192.f_45]))
	{
		unk_0x0F53BC871BA89C94(Local_192.f_174[Local_192.f_45], 0);
	}
}

int func_460(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Local_94[iParam0 /*3*/].f_1 == 8)
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
		if (Local_94[iParam0 /*3*/].f_1 == 4)
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
	if (Local_192.f_45 != -1)
	{
		if (unk_0x90F6E2F6488B98BA(Local_94[Local_192.f_45 /*3*/].f_2) && func_17(unk_0xE8BBC6CC2C60F24A(Local_94[Local_192.f_45 /*3*/].f_2)))
		{
			if (func_464(Local_192.f_45))
			{
				Local_192.f_157 = "DLC_Arena_Drone_Sounds";
			}
			else if (func_463(Local_192.f_45))
			{
				Local_192.f_157 = "DLC_Arena_Battle_Drone_Sounds";
			}
			else if (func_461(Local_192.f_45))
			{
				Local_192.f_157 = "DLC_Arena_Piloted_Missile_Sounds";
			}
			else if (func_460(Local_192.f_45))
			{
				Local_192.f_157 = "DLC_H4_Piloted_Missile_Sounds";
			}
			else
			{
				Local_192.f_157 = "DLC_BTL_Drone_Sounds";
			}
			if (Local_192.f_46[Local_192.f_45] == -1)
			{
				Local_192.f_46[Local_192.f_45] = unk_0xA9ADCC8D104AA552();
				unk_0x979FC7400A5D0CD2(Local_192.f_46[Local_192.f_45], "Flight_Loop", unk_0xE8BBC6CC2C60F24A(Local_94[Local_192.f_45 /*3*/].f_2), Local_192.f_157, 0, 0);
				unk_0x57973ADDF2BFAA90(Local_192.f_46[Local_192.f_45], "DroneRotationalSpeed", 1f);
			}
			else
			{
				unk_0x57973ADDF2BFAA90(Local_192.f_46[Local_192.f_45], "DroneRotationalSpeed", 1f);
			}
		}
		else if (Local_192.f_46[Local_192.f_45] != -1)
		{
			unk_0xF889BDFCC181BA9F(Local_192.f_46[Local_192.f_45]);
			unk_0xCDBCC1BC1184B002(Local_192.f_46[Local_192.f_45]);
			Local_192.f_46[Local_192.f_45] = -1;
		}
	}
}

int func_463(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Local_94[iParam0 /*3*/].f_1 == 2)
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
		if (Local_94[iParam0 /*3*/].f_1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_465()
{
	return BitTest(Global_1946250.f_7, 14);
}

void func_466()
{
	int iVar0;
	var uVar1;
	char* sVar2;
	var uVar3;
	var uVar4;
	
	if (Local_192.f_45 == -1)
	{
		return;
	}
	iVar0 = Local_192.f_45;
	if (!func_19(iVar0, 1, 1))
	{
		return;
	}
	if (!func_479(6) && !func_465())
	{
		return;
	}
	if (BitTest(Local_192.f_117, Local_192.f_45))
	{
		uVar1 = func_467(Global_2689235[Local_192.f_45 /*453*/].f_318.f_9);
		if (!func_17(uVar1))
		{
			return;
		}
		sVar2 = "scr_ih_sub";
		unk_0xD86C99569D4749B0(sVar2);
		if (unk_0x6264B811E8D92198(sVar2))
		{
			if (!unk_0x6B8F21F773404988(Local_192.f_207[iVar0]))
			{
				unk_0x76B797B61752AAB8(sVar2);
				uVar3 = func_375(iVar0);
				uVar4 = unk_0x7F0054A115D66F44(uVar1, uVar3);
				Local_192.f_207[iVar0] = unk_0xDC82D60B1E9406A2("scr_ih_sub_missile_launch", iVar1, func_374(iVar0), 0f, 0f, 0f, uVar4, 5f, 0, 0, 0);
			}
			else if (!func_25(&(Local_192.f_281[iVar0 /*2*/])))
			{
				func_23(&(Local_192.f_281[iVar0 /*2*/]), 0, 0);
				unk_0x39B111DDFA0712B3(Local_192.f_207[iVar0], "flame", 0.15f, 0);
			}
			if (func_25(&(Local_192.f_281[iVar0 /*2*/])))
			{
				if (func_22(&(Local_192.f_281[iVar0 /*2*/]), 3000, 0))
				{
					if (unk_0x6B8F21F773404988(Local_192.f_207[iVar0]))
					{
						unk_0x0F53BC871BA89C94(Local_192.f_207[iVar0], 0);
					}
					func_21(&(Local_192.f_281[iVar0 /*2*/]));
					unk_0xB0550BC91B0159D6(&(Local_192.f_117), Local_192.f_45);
				}
				else if (func_22(&(Local_192.f_281[iVar0 /*2*/]), 2000, 0))
				{
					unk_0x39B111DDFA0712B3(Local_192.f_207[iVar0], "flame", 0f, 0);
				}
			}
		}
	}
}

int func_467(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (unk_0xE5965CDF24F93A9F(Global_1963860[iParam0]))
		{
			return Global_1963860[iParam0];
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
	while (iVar0 < unk_0x9418088815C89D59(1))
	{
		iVar1 = unk_0xB1D84E0EF6979085(1, iVar0);
		switch (iVar1)
		{
			case 186:
				if (!func_479(6))
				{
					func_470(iVar0);
				}
				break;
			
			case 174:
				unk_0x92039F20B184AB4D(1, iVar0, &iVar2, 2);
				switch (iVar2)
				{
					case -1007374530:
						if (Global_1663509.f_839)
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
	if (unk_0x92039F20B184AB4D(1, iParam0, &Var0, 3))
	{
		if (Var0.f_1 != func_12())
		{
			Local_192.f_82[Var0.f_1] = Var0.f_2;
			unk_0xCED9E32812D6C7C7(&(Local_192.f_117), Var0.f_1);
		}
	}
}

void func_470(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159))
	{
		if (unk_0x92039F20B184AB4D(1, iParam0, &Var0, 13))
		{
			if (unk_0xE5965CDF24F93A9F(Var0.f_0) && unk_0xF2D8DACFAEBD9629(Local_192.f_159) == Var0.f_0)
			{
				if (unk_0xE5965CDF24F93A9F(Var0.f_1))
				{
					if (unk_0x9044EDB8A7BF67B4(Var0.f_1))
					{
						if (unk_0x65FAB09725E2FE75(unk_0x28AA31872A651BC7(Var0.f_1)) && unk_0xE2D3D51028F0428A() != unk_0x28AA31872A651BC7(Var0.f_1))
						{
							Local_192.f_26 = 2;
						}
					}
				}
			}
		}
	}
}

void func_471()
{
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159))
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xA5677134B9672173(Local_192.f_159), 0))
		{
			Local_192.f_150 = { unk_0x6B62510F212526DC(unk_0xA5677134B9672173(Local_192.f_159), 1) };
			Local_192.f_124 = unk_0x82FE2343F8BDFF0B(unk_0xA5677134B9672173(Local_192.f_159));
			if (!func_25(&(Local_192.f_261)))
			{
				func_23(&(Local_192.f_261), 0, 0);
			}
			else if (func_22(&(Local_192.f_261), 1000, 0))
			{
				if (!func_373(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_421, Local_192.f_150, 0))
				{
					Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_421 = { Local_192.f_150 };
				}
				if (Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_424 != unk_0x82FE2343F8BDFF0B(unk_0xA5677134B9672173(Local_192.f_159)))
				{
					Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_424 = unk_0x82FE2343F8BDFF0B(unk_0xA5677134B9672173(Local_192.f_159));
				}
				func_21(&(Local_192.f_261));
			}
		}
	}
	if (func_17(Local_192.f_163))
	{
		if (unk_0x2B5F4FBAF644BEC8(Local_192.f_163))
		{
			unk_0x1C2ED929474DC6FE(Local_192.f_163, false, 0);
		}
	}
	if (func_17(Local_192.f_161))
	{
		if (unk_0x2B5F4FBAF644BEC8(Local_192.f_161))
		{
			unk_0x1C2ED929474DC6FE(Local_192.f_161, false, 0);
		}
	}
}

void func_472()
{
	if (func_479(4))
	{
		if ((((func_138() || func_24()) || func_38()) || (func_30() && !func_31())) || func_16())
		{
			if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
			{
				func_298(unk_0x9E2D6C50374FCFA9(), 1, 0, 0);
			}
		}
		unk_0x7653D561C9574763(0, 37, 0);
		if (func_16())
		{
			func_475();
		}
		if (!func_35())
		{
			func_473();
			unk_0x5089DD830FA61D71(0, 19, 1);
			unk_0x5089DD830FA61D71(0, 166, 1);
			unk_0x5089DD830FA61D71(0, 167, 1);
			unk_0x5089DD830FA61D71(0, 168, 1);
			unk_0x5089DD830FA61D71(0, 169, 1);
			unk_0x5089DD830FA61D71(2, 218, 1);
			unk_0x5089DD830FA61D71(2, 219, 1);
			unk_0x5089DD830FA61D71(2, 220, 1);
			unk_0x5089DD830FA61D71(2, 221, 1);
			unk_0x5089DD830FA61D71(2, 205, 1);
			unk_0x5089DD830FA61D71(2, 206, 1);
			unk_0x5089DD830FA61D71(2, 207, 1);
			unk_0x5089DD830FA61D71(2, 208, 1);
			unk_0x5089DD830FA61D71(2, 209, 1);
			unk_0x5089DD830FA61D71(2, 210, 1);
			unk_0x5089DD830FA61D71(2, 202, 1);
			unk_0x5089DD830FA61D71(2, 51, 1);
			unk_0x5089DD830FA61D71(2, 190, 1);
			unk_0x5089DD830FA61D71(2, 189, 1);
			unk_0x5089DD830FA61D71(2, 188, 1);
			unk_0x5089DD830FA61D71(2, 187, 1);
			unk_0x5089DD830FA61D71(2, 201, 1);
			unk_0x5089DD830FA61D71(2, 199, 1);
			unk_0x5089DD830FA61D71(2, 200, 1);
			if (func_16())
			{
				unk_0x5089DD830FA61D71(2, 20, 1);
			}
			if (unk_0x3A76A0944BE2C291(0))
			{
				unk_0x5089DD830FA61D71(0, 238, 1);
				unk_0x5089DD830FA61D71(0, 237, 1);
				unk_0x5089DD830FA61D71(2, 235, 1);
				unk_0x5089DD830FA61D71(2, 234, 1);
				unk_0x5089DD830FA61D71(2, 1, 1);
				unk_0x5089DD830FA61D71(2, 174, 1);
				unk_0x5089DD830FA61D71(2, 175, 1);
				unk_0x5089DD830FA61D71(0, 174, 1);
				unk_0x5089DD830FA61D71(0, 175, 1);
				unk_0x5089DD830FA61D71(0, 245, 1);
				unk_0x5089DD830FA61D71(0, 246, 1);
				unk_0x5089DD830FA61D71(0, 247, 1);
				unk_0x5089DD830FA61D71(0, 248, 1);
			}
			if (unk_0xF1EC2C71FD1371B8())
			{
				unk_0x5089DD830FA61D71(0, 201, 1);
				unk_0x5089DD830FA61D71(0, 202, 1);
				unk_0x5089DD830FA61D71(0, 188, 1);
				unk_0x5089DD830FA61D71(0, 187, 1);
				unk_0x5089DD830FA61D71(0, 189, 1);
				unk_0x5089DD830FA61D71(2, 195, 1);
				unk_0x5089DD830FA61D71(2, 196, 1);
				unk_0x5089DD830FA61D71(2, 198, 1);
				unk_0x5089DD830FA61D71(2, 197, 1);
				unk_0x5089DD830FA61D71(2, 217, 1);
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
		unk_0x7653D561C9574763(0, iVar0, 1);
		iVar0++;
	}
}

void func_475()
{
	Global_23011.f_6 = 1;
}

void func_476()
{
	if (BitTest(Local_192.f_5, 28))
	{
		if (!func_25(&(Local_192.f_263)))
		{
			func_23(&(Local_192.f_263), 0, 0);
		}
		else if (func_22(&(Local_192.f_263), 5000, 0))
		{
			unk_0xB0550BC91B0159D6(&(Local_192.f_5), 28);
			func_21(&(Local_192.f_263));
		}
	}
}

void func_477()
{
	int iVar0;
	
	if (BitTest(Local_192.f_5, 27))
	{
		if (Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_9 != func_12())
		{
			iVar0 = Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_9;
		}
		else if (Global_1853193 != func_12())
		{
			iVar0 = Global_1853193;
		}
		else if (func_279(unk_0x9E2D6C50374FCFA9(), 0))
		{
			if (func_166() != func_12())
			{
				iVar0 = func_166();
			}
		}
		if (iVar0 != func_12())
		{
			if (unk_0x0D01086B38EC256F(iVar0))
			{
				if (unk_0x9315DBF7D972F07A())
				{
					func_178(iVar0, 0, 1, 0);
					unk_0xB0550BC91B0159D6(&(Local_192.f_5), 27);
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
				Var0 = { unk_0x6B62510F212526DC(func_345(), 1) };
				unk_0x940745265434EB5F(Var0, 200f, 200f);
				unk_0x90D68B004DE537B5(Local_192.f_150, 60f, 30);
			}
		}
	}
	if (func_479(1) || func_479(4))
	{
		if (unk_0x90F6E2F6488B98BA(Local_192.f_159))
		{
			if (unk_0x876B1078E90C91CB(Local_192.f_169) && unk_0x4B0B4E357722C507(Local_192.f_169))
			{
				if (func_479(4))
				{
					if (!func_257(Local_192.f_150))
					{
						unk_0x940745265434EB5F(Local_192.f_150, 60f, 200f);
						unk_0x8F010262EB7D058C();
						unk_0x7D5C42A7CDB11DB6(Local_192.f_150, unk_0xC35FBD95659582C4(unk_0xE8BBC6CC2C60F24A(Local_192.f_159)));
						if ((unk_0x8142A6539DDC180F() % 120) == 0)
						{
							unk_0x90D68B004DE537B5(Local_192.f_150, 60f, 30);
						}
					}
				}
			}
		}
	}
}

bool func_479(int iParam0)
{
	return Local_192.f_241 == iParam0;
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
	if (unk_0x9E2D6C50374FCFA9() != func_12())
	{
		if (!func_484())
		{
			if (func_265(unk_0x9E2D6C50374FCFA9()) && !func_264())
			{
				return 1;
			}
		}
	}
	if (func_200(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	if (func_10(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	if (func_484())
	{
		if (func_483())
		{
			return 1;
		}
		if (func_13(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			return 1;
		}
		if (func_40())
		{
			return 1;
		}
		if (!func_482() && !func_481())
		{
			if (func_22(&(Local_192.f_279), 10000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_21(&(Local_192.f_279));
		}
	}
	return 0;
}

int func_481()
{
	if (Global_1958711.f_22 != func_12())
	{
		if (Global_2689235[Global_1958711.f_22 /*453*/].f_318.f_9 != func_12())
		{
			if (func_17(Global_1963860[Global_2689235[Global_1958711.f_22 /*453*/].f_318.f_9]))
			{
				if (func_19(unk_0x9E2D6C50374FCFA9(), 1, 1))
				{
					if (unk_0xB7A628320EFF8E47(func_6(unk_0x9E2D6C50374FCFA9()), unk_0x6B62510F212526DC(Global_1963860[Global_2689235[Global_1958711.f_22 /*453*/].f_318.f_9], 1)) < 490000f)
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
	while (iVar0 < unk_0x5D79167FED95F0B0())
	{
		if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar0)))
		{
			if (BitTest(Local_94[iVar0 /*3*/], 0))
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
	return BitTest(Global_1958711, 22);
}

bool func_484()
{
	return BitTest(Global_1958711.f_2, 9);
}

bool func_485()
{
	return BitTest(Global_1958711, 0);
}

int func_486()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_493())
	{
		return 1;
	}
	if (Global_2727795)
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
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_487() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_487()) == 0)
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
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_489()
{
	return Global_31959;
}

bool func_490()
{
	return Global_2714762.f_698;
}

int func_491(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_492()
{
	return Global_2725403;
}

bool func_493()
{
	return Global_2714762.f_693;
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
	Global_1958711.f_22 = func_12();
	func_21(&(Local_192.f_279));
	func_501(0);
	func_500(0);
	func_499(0);
	func_498(0);
	func_497();
}

void func_497()
{
	unk_0xAFBDF6A5E54114C1();
}

void func_498(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 9))
		{
			Global_1958711.f_2 = 0;
			unk_0xCED9E32812D6C7C7(&(Global_1958711.f_2), 9);
		}
	}
	else if (BitTest(Global_1958711.f_2, 9))
	{
		unk_0xB0550BC91B0159D6(&(Global_1958711.f_2), 9);
	}
}

void func_499(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711, 21))
		{
			unk_0xCED9E32812D6C7C7(&Global_1958711, 21);
		}
	}
	else if (BitTest(Global_1958711, 21))
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 21);
	}
}

void func_500(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711, 22))
		{
			unk_0xCED9E32812D6C7C7(&Global_1958711, 22);
		}
	}
	else if (BitTest(Global_1958711, 22))
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 22);
	}
}

void func_501(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_292, 31))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_292), 31);
		}
	}
	else if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_292, 31))
	{
		unk_0xB0550BC91B0159D6(&(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_292), 31);
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
	
	if (unk_0x90F6E2F6488B98BA(Local_192.f_159))
	{
		unk_0xBEA5F528349F8F75(Local_192.f_159, 1);
		if (unk_0x07B2F8356DC13CF4(Local_192.f_159))
		{
			if (!BitTest(Local_192.f_6, 2))
			{
				if (func_83())
				{
					if (func_17(unk_0xE2D3D51028F0428A()))
					{
						unk_0x5E0A11B95EE2E0C6(unk_0xE2D3D51028F0428A(), func_338(), func_337(), func_336(), 1, 0, 1065353216);
					}
					else
					{
						unk_0x45B4BDAA12353E7D(func_338(), func_337(), func_336(), 1, 0, 1065353216, 0);
					}
					unk_0xF7A14A1A76B6DD17(0, 300, unk_0xF2DB717A73826179((200f * Local_192.f_131)));
					unk_0xCED9E32812D6C7C7(&(Local_192.f_6), 2);
				}
			}
			unk_0x5639E771F6085BF6();
			uVar0 = unk_0xE8BBC6CC2C60F24A(Local_192.f_159);
			unk_0xB970266897BDB48D(uVar0, 0, 1);
			unk_0x4BDA5AFD88C085EB(&uVar0);
		}
		else
		{
			unk_0xC31EECA11005273C(Local_192.f_159);
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
		unk_0x3410421C60BF7143(1);
	}
	if (func_17(Local_192.f_161))
	{
		uVar10 = Local_192.f_161;
		unk_0x05CB75C0837196F9(&uVar10);
	}
	if (unk_0xE5965CDF24F93A9F(Local_192.f_162))
	{
		unk_0x4BDA5AFD88C085EB(&(Local_192.f_162));
	}
	if (unk_0x12DD4A0B247D9B4D(Local_192.f_171))
	{
		unk_0xFFD8EB5462B07B59(&(Local_192.f_171));
	}
	if (unk_0x12DD4A0B247D9B4D(Local_192.f_172))
	{
		unk_0xFFD8EB5462B07B59(&(Local_192.f_172));
	}
	if (unk_0xE5965CDF24F93A9F(Local_192.f_163))
	{
		unk_0xD59CC8123FD1A789(&(Local_192.f_163));
	}
	unk_0xC8483C4C42152921();
	unk_0x1C35FDD57F36FBEA();
	unk_0xBD18A1EF31F0166B();
	unk_0x93D95F240BBB4805(0f);
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
	if (unk_0x90F6E2F6488B98BA(Local_192.f_160))
	{
		uVar11 = unk_0xE8BBC6CC2C60F24A(Local_192.f_160);
		unk_0x4BDA5AFD88C085EB(&uVar11);
	}
	if (!bParam0)
	{
		if (!unk_0xACC32B78196FBC2A(Local_192.f_158))
		{
			unk_0xAFC1FBF3F6AE7B9A(Local_192.f_158);
		}
		func_520(0);
	}
	func_248(0);
	if (func_519() && (!func_265(unk_0x9E2D6C50374FCFA9()) || func_264()))
	{
		func_298(unk_0x9E2D6C50374FCFA9(), 1, 0, 0);
		unk_0x5C65DDDC219B3AA5(unk_0xE2D3D51028F0428A(), false);
	}
	Local_192.f_120 = 0f;
	Local_192.f_121 = 0f;
	Local_192.f_12 = 0;
	Local_192.f_14 = 0;
	Local_192.f_10 = 0;
	Local_192.f_16 = 0;
	func_21(&(Local_192.f_245));
	func_21(&(Local_192.f_247));
	if (!Local_192.f_156)
	{
		func_21(&(Local_192.f_249));
	}
	func_21(&(Local_192.f_253));
	func_21(&(Local_192.f_251));
	func_21(&(Local_192.f_255));
	func_21(&(Local_192.f_259));
	func_21(&(Local_192.f_265));
	func_21(&(Local_192.f_263));
	func_21(&(Local_192.f_261));
	func_21(&(Local_192.f_267));
	func_21(&(Local_192.f_269));
	func_21(&(Local_192.f_271));
	func_21(&(Local_192.f_275));
	func_21(&(Local_192.f_277));
	func_21(&(Local_192.f_257));
	func_21(&(Local_192.f_346));
	if (unk_0x9E2D6C50374FCFA9() != func_12())
	{
		func_21(&(Local_192.f_281[unk_0x9E2D6C50374FCFA9() /*2*/]));
	}
	Local_192.f_28 = 0;
	Local_192.f_5 = 0;
	Local_192.f_6 = 0;
	Global_1958711.f_4 = -1;
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
	Global_1958711.f_24 = -1;
	unk_0xB0550BC91B0159D6(&Global_2787913, 0);
	unk_0xB0550BC91B0159D6(&Global_1965532, 0);
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
			if (Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_9 != func_12() && unk_0x0D01086B38EC256F(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_9))
			{
				iVar12 = Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_9;
			}
			else if ((func_138() && Global_1853193 != func_12()) && unk_0x0D01086B38EC256F(Global_1853193))
			{
				iVar12 = Global_1853193;
			}
			else if ((func_16() && Global_1853194 != func_12()) && unk_0x0D01086B38EC256F(Global_1853194))
			{
				iVar12 = Global_1853194;
			}
			else if (func_279(unk_0x9E2D6C50374FCFA9(), 0))
			{
				if (func_166() != func_12() && unk_0x0D01086B38EC256F(func_166()))
				{
					iVar12 = func_166();
				}
			}
			if (iVar12 != func_12())
			{
				if (unk_0x0D01086B38EC256F(iVar12) && unk_0x9315DBF7D972F07A())
				{
					if (func_138())
					{
						func_178(iVar12, 0, 1, 0);
					}
					else if (func_16())
					{
						func_178(iVar12, 0, 8, Global_1581359);
					}
					unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 28);
				}
				else
				{
					unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 27);
				}
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 27);
			}
		}
		else if (func_30() || func_160())
		{
			func_21(&Global_1958657);
			func_510(300000);
			func_509(1);
			unk_0xCED9E32812D6C7C7(&(Local_192.f_5), 28);
		}
		func_390(0);
		func_389(0);
		unk_0xB0550BC91B0159D6(&(Local_94[unk_0x9E2D6C50374FCFA9() /*3*/]), 0);
		iVar13 = unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Local_192.f_173));
		if (func_30() || func_160())
		{
			Var14.f_7 = Global_786547;
			Var14.f_1 = Global_786547.f_1;
			if (unk_0x44859561F653DD4E())
			{
				Var14.f_0 = Global_4718592.f_116524;
			}
			else
			{
				Var14.f_0 = func_507(unk_0x9E2D6C50374FCFA9());
			}
			Var14.f_6 = 1;
			Var14.f_4 = Local_192.f_27;
			Var14.f_5 = Local_192.f_29;
			Var14.f_3 = iVar13;
			Var14.f_2 = Local_192.f_26;
			unk_0x3410B63B8434966B(&Var14);
		}
		else
		{
			unk_0x12CD528EC74914FE(iVar13, Local_192.f_26, Local_192.f_27);
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
	unk_0x705B098546DEB18A(&(Local_192.f_170));
	if (func_180(1) != 0)
	{
		unk_0xF1A23B343DFEDFD0(func_180(1));
	}
	if (func_180(0) != 0)
	{
		unk_0xF1A23B343DFEDFD0(func_180(0));
	}
	func_384(0);
	func_327(1, -1);
	Local_192.f_26 = 0;
	Local_192.f_27 = 0;
	Local_192.f_29 = 0;
	unk_0x527AAB28DB255A95(Local_192.f_28);
	if (unk_0x6B8F21F773404988(Local_192.f_174[unk_0x9E2D6C50374FCFA9()]))
	{
		unk_0x0F53BC871BA89C94(Local_192.f_174[unk_0x9E2D6C50374FCFA9()], 0);
	}
	if (unk_0x6B8F21F773404988(Local_192.f_207[unk_0x9E2D6C50374FCFA9()]))
	{
		unk_0x0F53BC871BA89C94(Local_192.f_207[unk_0x9E2D6C50374FCFA9()], 0);
	}
	if (!bParam0)
	{
		if (!func_164(unk_0x9E2D6C50374FCFA9()))
		{
			func_503(0f, 0f, 0f, 0f);
		}
		Global_1958711.f_2 = 0;
		func_497();
	}
	else
	{
		func_444(0, 1);
	}
}

void func_503(struct<3> Param0, float fParam3)
{
	if (!func_373(Global_1958711.f_10, Param0, 0))
	{
		Global_1958711.f_10 = { Param0 };
		Global_1958711.f_7 = fParam3;
	}
}

void func_504()
{
	int iVar0;
	
	if (!unk_0x78D9ADD511FEAD8B(Local_192.f_41))
	{
		unk_0xF889BDFCC181BA9F(Local_192.f_41);
		unk_0xCDBCC1BC1184B002(Local_192.f_41);
		Local_192.f_41 = -1;
	}
	if (!unk_0x78D9ADD511FEAD8B(Local_192.f_30))
	{
		unk_0xF889BDFCC181BA9F(Local_192.f_30);
		unk_0xCDBCC1BC1184B002(Local_192.f_30);
		Local_192.f_30 = -1;
	}
	if (!unk_0x78D9ADD511FEAD8B(Local_192.f_31))
	{
		unk_0xF889BDFCC181BA9F(Local_192.f_31);
		unk_0xCDBCC1BC1184B002(Local_192.f_31);
		Local_192.f_31 = -1;
	}
	if (!unk_0x78D9ADD511FEAD8B(Local_192.f_32))
	{
		unk_0xF889BDFCC181BA9F(Local_192.f_32);
		unk_0xCDBCC1BC1184B002(Local_192.f_32);
		Local_192.f_32 = -1;
	}
	if (!unk_0x78D9ADD511FEAD8B(Local_192.f_33))
	{
		unk_0xF889BDFCC181BA9F(Local_192.f_33);
		unk_0xCDBCC1BC1184B002(Local_192.f_33);
		Local_192.f_33 = -1;
	}
	if (!unk_0x78D9ADD511FEAD8B(Local_192.f_34))
	{
		unk_0xF889BDFCC181BA9F(Local_192.f_34);
		unk_0xCDBCC1BC1184B002(Local_192.f_34);
		Local_192.f_34 = -1;
	}
	if (!unk_0x78D9ADD511FEAD8B(Local_192.f_40))
	{
		unk_0xF889BDFCC181BA9F(Local_192.f_40);
		unk_0xCDBCC1BC1184B002(Local_192.f_40);
		Local_192.f_40 = -1;
	}
	if (!unk_0x78D9ADD511FEAD8B(Local_192.f_39))
	{
		unk_0xF889BDFCC181BA9F(Local_192.f_39);
		unk_0xCDBCC1BC1184B002(Local_192.f_39);
		Local_192.f_39 = -1;
	}
	if (!unk_0x78D9ADD511FEAD8B(Local_192.f_38))
	{
		unk_0xF889BDFCC181BA9F(Local_192.f_38);
		unk_0xCDBCC1BC1184B002(Local_192.f_38);
		Local_192.f_38 = -1;
	}
	if (!unk_0x78D9ADD511FEAD8B(Local_192.f_37))
	{
		unk_0xF889BDFCC181BA9F(Local_192.f_37);
		unk_0xCDBCC1BC1184B002(Local_192.f_37);
		Local_192.f_37 = -1;
	}
	if (!unk_0x78D9ADD511FEAD8B(Local_192.f_36))
	{
		unk_0xF889BDFCC181BA9F(Local_192.f_36);
		unk_0xCDBCC1BC1184B002(Local_192.f_36);
		Local_192.f_36 = -1;
	}
	if (!unk_0x78D9ADD511FEAD8B(Local_192.f_35))
	{
		unk_0xF889BDFCC181BA9F(Local_192.f_35);
		unk_0xCDBCC1BC1184B002(Local_192.f_35);
		Local_192.f_35 = -1;
	}
	if (!unk_0x78D9ADD511FEAD8B(Local_192.f_42))
	{
		unk_0xF889BDFCC181BA9F(Local_192.f_42);
		unk_0xCDBCC1BC1184B002(Local_192.f_42);
		Local_192.f_42 = -1;
	}
	if (!unk_0x78D9ADD511FEAD8B(Local_192.f_43))
	{
		unk_0xF889BDFCC181BA9F(Local_192.f_43);
		unk_0xCDBCC1BC1184B002(Local_192.f_43);
		Local_192.f_43 = -1;
	}
	if (!unk_0x78D9ADD511FEAD8B(Local_192.f_81))
	{
		unk_0xF889BDFCC181BA9F(Local_192.f_81);
		unk_0xCDBCC1BC1184B002(Local_192.f_81);
		Local_192.f_81 = -1;
	}
	if (!unk_0x78D9ADD511FEAD8B(Local_192.f_115))
	{
		unk_0xF889BDFCC181BA9F(Local_192.f_115);
		unk_0xCDBCC1BC1184B002(Local_192.f_115);
		Local_192.f_115 = -1;
	}
	if (func_484())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_192.f_46[iVar0] != -1)
			{
				unk_0xF889BDFCC181BA9F(Local_192.f_46[iVar0]);
				unk_0xCDBCC1BC1184B002(Local_192.f_46[iVar0]);
				Local_192.f_46[iVar0] = -1;
			}
			iVar0++;
		}
	}
	func_157();
	if (unk_0xA37204C64473B324("DLC_BTL_Hacker_Drone_HUD_Scene"))
	{
		unk_0x0AF8D3A06BB92903("DLC_BTL_Hacker_Drone_HUD_Scene");
	}
	if (unk_0xA37204C64473B324("dlc_aw_arena_piloted_missile_scene"))
	{
		unk_0x0AF8D3A06BB92903("dlc_aw_arena_piloted_missile_scene");
	}
	if (unk_0xA37204C64473B324("DLC_Arena_Battle_Drone_HUD_Scene"))
	{
		unk_0x0AF8D3A06BB92903("DLC_Arena_Battle_Drone_HUD_Scene");
	}
	if (unk_0xA37204C64473B324("DLC_Arena_Spectator_Drone_HUD_Scene"))
	{
		unk_0x0AF8D3A06BB92903("DLC_Arena_Spectator_Drone_HUD_Scene");
	}
	if (unk_0xA37204C64473B324("dlc_hei4_submarine_guided_missile_Scene"))
	{
		unk_0x0AF8D3A06BB92903("dlc_hei4_submarine_guided_missile_Scene");
	}
}

void func_505(int iParam0, var uParam1)
{
	if (Global_2815059.f_337 > 0 || Global_2815059.f_337.f_1 > 0)
	{
		unk_0x1000DF2EB45E521C(iParam0, uParam1, Global_2815059.f_337, Global_2815059.f_337.f_1);
	}
	func_414();
}

bool func_506()
{
	return Global_1853194 == unk_0x9E2D6C50374FCFA9();
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
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

void func_509(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_348, 20))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_348), 20);
		}
	}
	else if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_348, 20))
	{
		unk_0xB0550BC91B0159D6(&(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_348), 20);
	}
}

void func_510(int iParam0)
{
	if (Global_1958711.f_5 != iParam0)
	{
		Global_1958711.f_5 = iParam0;
	}
}

bool func_511(int iParam0)
{
	return Local_192.f_242 == iParam0;
}

void func_512()
{
	if (func_172())
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 7);
	}
}

void func_513(bool bParam0)
{
	if (bParam0)
	{
		if (func_75())
		{
			if (!BitTest(Global_1958711, 16))
			{
				unk_0xCED9E32812D6C7C7(&Global_1958711, 16);
			}
		}
	}
	else if (BitTest(Global_1958711, 16))
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 16);
	}
}

void func_514(bool bParam0)
{
	if (bParam0)
	{
		if (!func_485())
		{
			unk_0xCED9E32812D6C7C7(&Global_1958711, 6);
		}
	}
	else if (func_485())
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 6);
	}
}

void func_515(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711, 3))
		{
			unk_0xCED9E32812D6C7C7(&Global_1958711, 3);
		}
	}
	else if (BitTest(Global_1958711, 3))
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 3);
	}
}

void func_516(bool bParam0)
{
	if (bParam0)
	{
		if (!func_395())
		{
			unk_0xCED9E32812D6C7C7(&Global_1958711, 10);
		}
	}
	else if (func_395())
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 10);
	}
}

void func_517(bool bParam0)
{
	if (bParam0)
	{
		if (unk_0xB4C854DD86E40FDA(unk_0x2E87280918B16506("AM_MP_DRONE")) > 0)
		{
			if (!func_485())
			{
				unk_0xCED9E32812D6C7C7(&Global_1958711, 0);
			}
		}
	}
	else if (func_485())
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 0);
	}
}

void func_518(float fParam0)
{
	if (Global_1958711.f_9 != fParam0)
	{
		Global_1958711.f_9 = fParam0;
	}
}

int func_519()
{
	if (!func_306())
	{
		return 0;
	}
	if (func_11(unk_0x9E2D6C50374FCFA9()))
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
			unk_0xCED9E32812D6C7C7(&Global_1958711, 24);
		}
	}
	else if (func_31())
	{
		unk_0xB0550BC91B0159D6(&Global_1958711, 24);
	}
}

void func_521()
{
	if (unk_0x876B1078E90C91CB(Local_192.f_169))
	{
		unk_0x588DDCB644C6486A(Local_192.f_169, 0);
		unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
		if (!func_37() || BitTest(Local_192.f_6, 0))
		{
			unk_0xDEABC7EC7DA2B48E();
		}
	}
}

void func_522()
{
	if (unk_0x876B1078E90C91CB(Local_192.f_169))
	{
		if (func_524(unk_0x9E2D6C50374FCFA9()))
		{
			func_523(0);
		}
	}
}

void func_523(bool bParam0)
{
	if (bParam0)
	{
		Global_1946250.f_3579 = bParam0;
	}
	if (!Global_1946250.f_3578)
	{
		Global_1946250.f_3578 = 1;
	}
}

int func_524(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
		else if ((Global_1575058 && iParam0 == unk_0x9E2D6C50374FCFA9()) && func_19(iParam0, 1, 0))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
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
	Var0.f_0 = -1887020194;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar8 = false;
	if (iParam1 == 11)
	{
		if (BitTest(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_428, 1))
		{
			unk_0xB0550BC91B0159D6(&(Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_428), 1);
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
		iVar10 = func_8(unk_0x9E2D6C50374FCFA9());
		if (iVar10 != -1)
		{
			unk_0x2700C00F82C16BF0(1, &Var0, 8, iVar10);
			uParam0->f_5 = 1;
		}
	}
}

void func_526(struct<9> Param0, var uParam9, var uParam10, var uParam11)
{
	unk_0xD9B114A8D3A8319F(32, 0, Param0.f_0);
	func_535(0, -1, 0);
	unk_0x21F2B09183F31D02(&uLocal_191, 1, 0);
	unk_0x7157B1051528D729(&Local_94, 97, 0);
	if (!func_534())
	{
		func_495(0);
	}
	if (unk_0x9315DBF7D972F07A())
	{
		if (!func_484())
		{
			Local_192.f_135 = { Param0.f_2 };
			switch (Param0.f_1)
			{
				case 1:
					if (unk_0xE5965CDF24F93A9F(func_345()) && !unk_0x55B23FE400FCEA6B(func_345(), 0))
					{
						Local_192.f_144 = { unk_0x6DB7FBD602C51670(unk_0x6B62510F212526DC(func_345(), 1), unk_0x82FE2343F8BDFF0B(func_345()), 0f, 1.6f, 2.9f) };
						Local_192.f_138 = { Local_192.f_144 };
					}
					func_458(1);
					Local_94[unk_0x9E2D6C50374FCFA9() /*3*/].f_1 = 1;
					Global_1911933[unk_0x9E2D6C50374FCFA9() /*260*/].f_93 = 1;
					break;
				
				case 2:
					func_533(1);
					Local_192.f_144 = { Param0.f_5 };
					Local_94[unk_0x9E2D6C50374FCFA9() /*3*/].f_1 = 2;
					Global_1911933[unk_0x9E2D6C50374FCFA9() /*260*/].f_93 = 2;
					break;
				
				case 3:
					func_532(1);
					Local_192.f_144 = { Param0.f_5 };
					Local_94[unk_0x9E2D6C50374FCFA9() /*3*/].f_1 = 3;
					Global_1911933[unk_0x9E2D6C50374FCFA9() /*260*/].f_93 = 3;
					break;
				
				case 4:
					func_452(1);
					Local_192.f_144 = { Param0.f_5 };
					Local_94[unk_0x9E2D6C50374FCFA9() /*3*/].f_1 = 4;
					Global_1911933[unk_0x9E2D6C50374FCFA9() /*260*/].f_93 = 4;
					break;
				
				case 5:
					func_531(1);
					Local_192.f_144 = { Param0.f_5 };
					Local_94[unk_0x9E2D6C50374FCFA9() /*3*/].f_1 = 5;
					Global_1911933[unk_0x9E2D6C50374FCFA9() /*260*/].f_93 = 5;
					break;
				
				case 6:
					func_530(1);
					Local_192.f_144 = { Param0.f_5 };
					Local_94[unk_0x9E2D6C50374FCFA9() /*3*/].f_1 = 6;
					Global_1911933[unk_0x9E2D6C50374FCFA9() /*260*/].f_93 = 6;
					break;
				
				case 8:
					func_529(1);
					Local_192.f_144 = { Param0.f_5 };
					Local_94[unk_0x9E2D6C50374FCFA9() /*3*/].f_1 = 8;
					Global_1911933[unk_0x9E2D6C50374FCFA9() /*260*/].f_93 = 8;
					break;
				
				case 9:
					func_498(1);
					Local_94[unk_0x9E2D6C50374FCFA9() /*3*/].f_1 = 9;
					Global_1911933[unk_0x9E2D6C50374FCFA9() /*260*/].f_93 = 9;
					break;
				
				default:
					func_528(1);
					Local_192.f_144 = { Param0.f_5 };
					break;
			}
			Local_192.f_141 = { Param0.f_8 };
			if (func_257(func_404()))
			{
				func_372(Local_192.f_144, 0f, 0f, 0f);
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
		Local_192.f_46[iVar0] = -1;
		iVar0++;
	}
	func_383(6);
}

void func_528(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 0))
		{
			Global_1958711.f_2 = 0;
			unk_0xCED9E32812D6C7C7(&(Global_1958711.f_2), 0);
		}
	}
	else if (BitTest(Global_1958711.f_2, 0))
	{
		unk_0xB0550BC91B0159D6(&(Global_1958711.f_2), 0);
	}
}

void func_529(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 8))
		{
			Global_1958711.f_2 = 0;
			unk_0xCED9E32812D6C7C7(&(Global_1958711.f_2), 8);
		}
	}
	else if (BitTest(Global_1958711.f_2, 8))
	{
		unk_0xB0550BC91B0159D6(&(Global_1958711.f_2), 8);
	}
}

void func_530(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 6))
		{
			Global_1958711.f_2 = 0;
			unk_0xCED9E32812D6C7C7(&(Global_1958711.f_2), 6);
		}
	}
	else if (BitTest(Global_1958711.f_2, 6))
	{
		unk_0xB0550BC91B0159D6(&(Global_1958711.f_2), 6);
	}
}

void func_531(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 5))
		{
			Global_1958711.f_2 = 0;
			unk_0xCED9E32812D6C7C7(&(Global_1958711.f_2), 5);
		}
	}
	else if (BitTest(Global_1958711.f_2, 5))
	{
		unk_0xB0550BC91B0159D6(&(Global_1958711.f_2), 5);
	}
}

void func_532(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 3))
		{
			Global_1958711.f_2 = 0;
			unk_0xCED9E32812D6C7C7(&(Global_1958711.f_2), 3);
		}
	}
	else if (BitTest(Global_1958711.f_2, 3))
	{
		unk_0xB0550BC91B0159D6(&(Global_1958711.f_2), 3);
	}
}

void func_533(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 2))
		{
			Global_1958711.f_2 = 0;
			unk_0xCED9E32812D6C7C7(&(Global_1958711.f_2), 2);
		}
	}
	else if (BitTest(Global_1958711.f_2, 2))
	{
		unk_0xB0550BC91B0159D6(&(Global_1958711.f_2), 2);
	}
}

int func_534()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x9315DBF7D972F07A())
		{
			return 0;
		}
		if (unk_0x72FEF2581032D369())
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
	
	iVar0 = unk_0x0EEB2C2CA48FB650();
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
				if (!unk_0x9315DBF7D972F07A())
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
			else if (!unk_0xDB51AF48ABE62D4D())
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
				func_497();
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
	return Global_1575033;
}

