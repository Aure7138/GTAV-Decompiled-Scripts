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
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	float fLocal_64 = 0f;
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
	struct<3> Local_95 = { 0, 0, 0 } ;
	struct<4> Local_98 = { 2, 0, 0, 3 } ;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 2;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 2;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	struct<8> Local_125[32];
	struct<184> Local_382 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_566 = 0;
	bool bLocal_567 = 0;
	bool bLocal_568 = 0;
	bool bLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	var uLocal_573 = 0;
	int iLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_64 = ((0.05f + 0.275f) - 0.01f);
	Local_95 = { -2357.12f, 3250.68f, 106.04f };
	iLocal_574 = -1;
	if (unk_0xA26A9A07F761D8F8())
	{
		func_180(ScriptParam_0);
	}
	else
	{
		func_177();
	}
	while (true)
	{
		func_176();
		func_168();
		if (func_160() || unk_0x359808AE8C4C629B())
		{
			func_177();
		}
		if (unk_0xA26A9A07F761D8F8())
		{
			if ((func_156() && !Global_262145.f_21969) && !unk_0x1758F8A8511510AB())
			{
				func_147();
			}
			if (func_40())
			{
				func_177();
			}
			if (func_37(unk_0x93E99A2DBCBA9CFA()))
			{
				if (!BitTest(Local_382.f_182, 3))
				{
					unk_0xECDAB41968FF21A8(&(Local_382.f_182), 3);
				}
			}
			if ((((((((((!Global_1836156 && !func_36(2)) && !func_33(unk_0x93E99A2DBCBA9CFA(), 0)) && !unk_0xB53553DC4AAC7D8A()) && unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA())) && !func_31(unk_0x93E99A2DBCBA9CFA())) && !func_29(func_30(unk_0x93E99A2DBCBA9CFA()))) && !func_27(unk_0x93E99A2DBCBA9CFA(), 146)) && !func_23(unk_0x93E99A2DBCBA9CFA())) && !func_22(unk_0x93E99A2DBCBA9CFA())) && !func_21())
			{
				if (func_20(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 3, 1000, 0) || func_19(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 1000))
				{
					if (!BitTest(Global_2793044.f_4654, 0))
					{
						if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
						{
							if (!func_156())
							{
								func_18();
								if (unk_0x2AE2D64A5E125BF2(unk_0xC1A5EC5C986B98AD()) || unk_0x6DFDDBD2D0067A98(unk_0xC1A5EC5C986B98AD()))
								{
									if (func_20(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 3, 0, 0) || func_19(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 0))
									{
										if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) < 4)
										{
											unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 36, (unk_0x7F5C2D0AC2228834(4) - unk_0x7F5C2D0AC2228834(unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()))));
										}
										else
										{
											unk_0x8CB2000285DDE093(unk_0x93E99A2DBCBA9CFA());
										}
									}
									else if (!func_17(&(Local_382.f_3)))
									{
										func_14(&(Local_382.f_3));
									}
									else if (func_11(&(Local_382.f_3)) > 20f || Local_382.f_177)
									{
										if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) < 4)
										{
											unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 36, (unk_0x7F5C2D0AC2228834(4) - unk_0x7F5C2D0AC2228834(unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()))));
										}
										else
										{
											unk_0x8CB2000285DDE093(unk_0x93E99A2DBCBA9CFA());
										}
									}
								}
								else if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) < 4)
								{
									unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 36, (unk_0x7F5C2D0AC2228834(4) - unk_0x7F5C2D0AC2228834(unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()))));
								}
								else
								{
									unk_0x8CB2000285DDE093(unk_0x93E99A2DBCBA9CFA());
								}
							}
							else
							{
								if (Global_2793044.f_6853)
								{
									bLocal_567 = false;
									Global_2793044.f_6853 = 0;
								}
								if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0 && !iLocal_571)
								{
									iLocal_571 = 1;
								}
								if (Global_262145.f_21953 && !func_9(unk_0x93E99A2DBCBA9CFA()))
								{
									if ((!bLocal_567 && unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) != 0) && iLocal_571)
									{
										unk_0xE90EAC9EC6471EB9(unk_0x93E99A2DBCBA9CFA());
										unk_0x508B7A54DEE39001(0);
										iLocal_570 = 1;
									}
									if (func_2() && !bLocal_567)
									{
										bLocal_567 = true;
										unk_0x508B7A54DEE39001(5);
									}
								}
								if (func_2() && !bLocal_567)
								{
									bLocal_567 = true;
								}
								if (bLocal_567)
								{
									if (bLocal_568)
									{
										if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) < 2)
										{
											unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 36, (unk_0x7F5C2D0AC2228834(2) - unk_0x7F5C2D0AC2228834(unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()))));
										}
										else
										{
											unk_0x8CB2000285DDE093(unk_0x93E99A2DBCBA9CFA());
										}
									}
									else if (bLocal_569)
									{
										if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) < 3)
										{
											unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 36, (unk_0x7F5C2D0AC2228834(3) - unk_0x7F5C2D0AC2228834(unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()))));
										}
										else
										{
											unk_0x8CB2000285DDE093(unk_0x93E99A2DBCBA9CFA());
										}
									}
									else if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) < Global_262145.f_21890)
									{
										unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 36, (unk_0x7F5C2D0AC2228834(Global_262145.f_21890) - unk_0x7F5C2D0AC2228834(unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()))));
									}
									else
									{
										unk_0x8CB2000285DDE093(unk_0x93E99A2DBCBA9CFA());
									}
								}
							}
						}
						else
						{
							if (func_17(&(Local_382.f_3)))
							{
								func_1(&(Local_382.f_3));
							}
							if (Local_382.f_177)
							{
								Local_382.f_177 = 0;
							}
							func_18();
						}
					}
					else
					{
						if (!Local_382.f_177)
						{
							Local_382.f_177 = 1;
						}
						func_18();
					}
				}
				else
				{
					if (Local_382.f_177)
					{
						Local_382.f_177 = 0;
					}
					func_18();
				}
			}
			else
			{
				func_18();
			}
		}
		else
		{
			func_177();
		}
	}
}

void func_1(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_2()
{
	int iVar0;
	
	if (((func_20(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 3, 1000, 0) || func_19(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 1000)) && !func_8()) && !func_22(unk_0x93E99A2DBCBA9CFA()))
	{
		if (Global_262145.f_21884)
		{
			return 0;
		}
		if (((unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -2346.975f, 3259.757f, 31.81074f, -2349.507f, 3261.232f, 33.81074f, 9.5625f, 0, 1, 0) || unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -2054.865f, 3240.977f, 30.51001f, -2056.552f, 3237.846f, 32.50156f, 4.0625f, 0, 1, 0)) || unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -1792.908f, 3091.104f, 31.81257f, -1812.707f, 3102.736f, 39.46682f, 18.187f, 0, 1, 0)) || func_7(unk_0x93E99A2DBCBA9CFA()))
		{
			bLocal_568 = false;
			bLocal_569 = false;
			return 1;
		}
		if (Global_262145.f_21891)
		{
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
				if (unk_0x41D114B661987866(iVar0))
				{
					if (func_6(iVar0))
					{
						if ((!func_5(iVar0, 1) && !func_4(iVar0)) && !func_3(iVar0))
						{
							bLocal_568 = true;
							bLocal_569 = false;
							return 1;
						}
					}
				}
			}
		}
		else if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0x41D114B661987866(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
			{
				if ((!func_5(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 1) && !func_4(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0))) && !func_3(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
				{
					bLocal_568 = true;
					bLocal_569 = false;
					return 1;
				}
			}
		}
		if (Global_2793044.f_6851 || Global_2793044.f_6852)
		{
			if (Global_2793044.f_6852)
			{
				bLocal_568 = false;
				bLocal_569 = true;
			}
			else
			{
				bLocal_568 = true;
				bLocal_569 = false;
			}
			Global_2793044.f_6851 = 0;
			Global_2793044.f_6852 = 0;
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	var uVar0;
	
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		if (unk_0x19D6457970A9D67E("MPBitset", 3) && unk_0x2B6E67EB7FF3FD10(iParam0, "MPBitset"))
		{
			uVar0 = unk_0xC2DE378329C46B2E(iParam0, "MPBitset");
			if (BitTest(uVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(int iParam0)
{
	if ((unk_0x19D6457970A9D67E("CreatedByPegasus", 2) && unk_0x2B6E67EB7FF3FD10(iParam0, "CreatedByPegasus")) && unk_0x8FA309E9ECEE409A(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1)
{
	if (Global_78558)
	{
		if (unk_0x7DE17ACDD8BA2642(iParam0) && (!bParam1 || unk_0xFBD273FDBCF0C5BD(iParam0, 0)))
		{
			if (unk_0x2B6E67EB7FF3FD10(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x504B9BB48D41C264(iParam0);
	switch (iVar0)
	{
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("besra"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("cargobob"):
		case joaat("crusader"):
		case joaat("firetruk"):
		case joaat("lazer"):
		case joaat("rhino"):
		case joaat("titan"):
			return 1;
		
		default:
	}
	return 0;
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x41AD4BF315E01D41(unk_0xF2CFBB1105511E1A(iParam0));
	iVar1 = unk_0xAF0CB15312D8B8E3(-2346.975f, 3259.757f, 31.81074f, "v_tower");
	if (unk_0x4D3D95146FD3490D(iVar0) && unk_0x4D3D95146FD3490D(iVar1))
	{
		if ((iVar0 == iVar1 && !unk_0x9DC9E896F189AAA5(unk_0xF2CFBB1105511E1A(iParam0), -2345.4f, 3270.1f, 31.81f, -2347.9f, 3265.8f, 34.811f, 8.25f, 0, 1, 0)) && !unk_0x9DC9E896F189AAA5(unk_0xF2CFBB1105511E1A(iParam0), -2349.3f, 3266.7f, 31.81f, -2350f, 3265.5f, 34.811f, 5.15f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_8()
{
	return Global_4718592 == 3;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_10(iParam0, 9);
	}
	return 0;
}

var func_10(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

float func_11(var uParam0)
{
	if (func_17(uParam0))
	{
		if (func_13(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_12(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_12(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0xA5E11AF0A2B928C1());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		iVar2 = unk_0x0DB7F8294D73598B();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0xA5E11AF0A2B928C1()) / 1000f);
}

bool func_13(var uParam0)
{
	return BitTest(*uParam0, 2);
}

void func_14(var uParam0)
{
	if (!func_17(uParam0))
	{
		func_15(uParam0);
	}
}

void func_15(var uParam0)
{
	func_16(uParam0, 0f);
}

void func_16(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_12(BitTest(*uParam0, 4)) - fParam1);
	unk_0xECDAB41968FF21A8(uParam0, 1);
	unk_0x061B1200C95204CB(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_17(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_18()
{
	if (iLocal_570)
	{
		unk_0x508B7A54DEE39001(5);
	}
	Global_2793044.f_6851 = 0;
	Global_2793044.f_6852 = 0;
	iLocal_570 = 0;
	bLocal_567 = false;
	bLocal_568 = false;
	iLocal_571 = 0;
}

int func_19(struct<3> Param0, int iParam3)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	
	iVar110 = 0;
	Var0[0 /*3*/] = { -1877.436f, 2783.151f, 31.80618f };
	Var46[0 /*3*/] = { -1797.873f, 2924.37f, (307.1106f + IntToFloat(iParam3)) };
	fVar92[0] = 88f;
	Var0[1 /*3*/] = { -1761.116f, 2834.651f, 31.80622f };
	Var46[1 /*3*/] = { -1720.887f, 2906.419f, (281.8062f + IntToFloat(iParam3)) };
	fVar92[1] = 88f;
	Var0[2 /*3*/] = { -1761.493f, 2817.68f, 32.37125f };
	Var46[2 /*3*/] = { -1769.704f, 2913.734f, (281.8066f + IntToFloat(iParam3)) };
	fVar92[2] = 88f;
	Var0[3 /*3*/] = { -1879.297f, 2772.653f, 29.57795f };
	Var46[3 /*3*/] = { -1864.521f, 2825.472f, (281.8062f + IntToFloat(iParam3)) };
	fVar92[3] = 88f;
	Var0[4 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	Var46[4 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam3)) };
	fVar92[4] = 9f;
	Var0[5 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	Var46[5 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam3)) };
	fVar92[5] = 9.5f;
	Var0[6 /*3*/] = { -2807.397f, 3264.226f, 29.92764f };
	Var46[6 /*3*/] = { -2879.805f, 3309.01f, (37.57864f + IntToFloat(iParam3)) };
	fVar92[6] = 9.5f;
	Var0[7 /*3*/] = { -2808.236f, 3264.634f, 29.92764f };
	Var46[7 /*3*/] = { -2747.55f, 3187.8f, (37.45682f + IntToFloat(iParam3)) };
	fVar92[7] = 9.5f;
	Var0[8 /*3*/] = { -2530.996f, 3064.151f, 29.71081f };
	Var46[8 /*3*/] = { -2748.557f, 3189.939f, (37.45682f + IntToFloat(iParam3)) };
	fVar92[8] = 9.5f;
	Var0[9 /*3*/] = { -2533.902f, 3062.491f, 29.70715f };
	Var46[9 /*3*/] = { -2520.674f, 2996.817f, (37.45715f + IntToFloat(iParam3)) };
	fVar92[9] = 9.5f;
	Var0[10 /*3*/] = { -2500.716f, 2927.103f, 29.45663f };
	Var46[10 /*3*/] = { -2445.696f, 2896.657f, (37.68009f + IntToFloat(iParam3)) };
	fVar92[10] = 9.5f;
	Var0[11 /*3*/] = { -2020.543f, 2810.747f, 29.45658f };
	Var46[11 /*3*/] = { -1927.949f, 2785.779f, (37.67057f + IntToFloat(iParam3)) };
	fVar92[11] = 9.5f;
	Var0[12 /*3*/] = { -2261.899f, 3376.549f, 29.77859f };
	Var46[12 /*3*/] = { -2141.067f, 3376.773f, (37.90019f + IntToFloat(iParam3)) };
	fVar92[12] = 9.5f;
	iVar108 = 13;
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0x9E76D45F14E2C578(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_20(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 140f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0x9E76D45F14E2C578(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

bool func_21()
{
	return Global_2793044.f_6854;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xA26A9A07F761D8F8())
	{
		return 0;
	}
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		return Global_2764905;
	}
	else
	{
		iVar0 = unk_0xF2CFBB1105511E1A(iParam0);
		if (unk_0x7DE17ACDD8BA2642(iVar0))
		{
			iVar1 = unk_0x504B9BB48D41C264(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_23(int iParam0)
{
	return func_24(func_25(iParam0));
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_25(int iParam0)
{
	if (func_26(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

int func_26(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_27(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/] == iParam1)
	{
		return func_28(iParam0);
	}
	return 0;
}

int func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1894573[iVar0 /*608*/].f_1, 0);
	}
	return 0;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_28(unk_0x93E99A2DBCBA9CFA()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1894573[iVar0 /*608*/];
	}
	return -1;
}

int func_31(int iParam0)
{
	if (func_33(iParam0, 0))
	{
		return 1;
	}
	if (func_32())
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

bool func_32()
{
	return BitTest(Global_2621446, 3);
}

bool func_33(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_34(-1, 0) == 8;
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

int func_34(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_35();
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

int func_35()
{
	return Global_1574918;
}

bool func_36(int iParam0)
{
	return BitTest(Global_1836155, iParam0);
}

int func_37(int iParam0)
{
	if (iParam0 != func_39() && func_38(iParam0, 1, 1))
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321, 3);
	}
	return 0;
}

int func_38(int iParam0, bool bParam1, bool bParam2)
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

int func_39()
{
	return -1;
}

int func_40()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xE85391CF212DE622())
	{
		if (func_124())
		{
			iVar0 = 1;
		}
	}
	if (func_41())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_41()
{
	int iVar0;
	
	switch (Local_382.f_6)
	{
		case 0:
			func_123();
			if ((((((((func_120(unk_0x93E99A2DBCBA9CFA(), 1, 0) && func_119()) || func_25(unk_0x93E99A2DBCBA9CFA()) == 159) || func_25(unk_0x93E99A2DBCBA9CFA()) == 225) || func_25(unk_0x93E99A2DBCBA9CFA()) == 233) || func_118(unk_0x93E99A2DBCBA9CFA())) || func_21()) || Global_1836597) || (unk_0x1758F8A8511510AB() && func_8()))
			{
				unk_0x9C56520AE72AFDBF(joaat("rhino"), 1);
			}
			func_116(&(Local_125[unk_0xD378D2332270959A() /*8*/]), 1);
			Local_382.f_176 = 1;
			Local_382.f_6 = 1;
			break;
		
		case 1:
			if (func_115())
			{
				func_116(&(Local_125[unk_0xD378D2332270959A() /*8*/]), 2);
				Local_382.f_6 = 2;
			}
			break;
		
		case 2:
			if (func_114(Local_98.f_20, 1))
			{
				Local_382.f_6 = 3;
			}
			break;
		
		case 3:
			if ((!func_120(unk_0x93E99A2DBCBA9CFA(), 1, 0) && !func_119()) && !func_156())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_108(iVar0);
					iVar0++;
				}
			}
			if (unk_0xA26A9A07F761D8F8())
			{
				if ((((func_106() && !func_120(unk_0x93E99A2DBCBA9CFA(), 1, 0)) && !func_119()) && !unk_0x1758F8A8511510AB()) && func_104(unk_0x93E99A2DBCBA9CFA()) != 6)
				{
					func_49();
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_42(iVar0);
				iVar0++;
			}
			if (((((func_25(unk_0x93E99A2DBCBA9CFA()) == 225 || func_25(unk_0x93E99A2DBCBA9CFA()) == 233) || func_118(unk_0x93E99A2DBCBA9CFA())) || Global_1836597) || func_21()) || (unk_0x1758F8A8511510AB() && func_8()))
			{
				unk_0x9C56520AE72AFDBF(joaat("rhino"), 1);
			}
			if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_382.f_6 = 4;
			}
			break;
		
		case 4:
			if ((((((((func_120(unk_0x93E99A2DBCBA9CFA(), 1, 0) && func_119()) || func_25(unk_0x93E99A2DBCBA9CFA()) == 159) || func_25(unk_0x93E99A2DBCBA9CFA()) == 225) || func_25(unk_0x93E99A2DBCBA9CFA()) == 233) || func_118(unk_0x93E99A2DBCBA9CFA())) || Global_1836597) || func_21()) || (unk_0x1758F8A8511510AB() && func_8()))
			{
				unk_0x9C56520AE72AFDBF(joaat("rhino"), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (Local_98.f_3[iParam0 /*5*/].f_2 > 2 && unk_0x5E6D8811A0BD0954(Local_98.f_3[iParam0 /*5*/]))
	{
		if (unk_0x055111B11E6624FD(unk_0x972B1BFB16AD20B5(Local_98.f_3[iParam0 /*5*/]), 0))
		{
			if (unk_0xCE4AAA035282336C(Local_382.f_172[iParam0]))
			{
				unk_0x45533C09A6C9B409(&(Local_382.f_172[iParam0]));
			}
		}
		else if (!unk_0xCE4AAA035282336C(Local_382.f_172[iParam0]) && unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) >= 2)
		{
			Local_382.f_172[iParam0] = unk_0x53B496178AE44636(unk_0x177F7E959D2D410B(Local_98.f_3[iParam0 /*5*/]));
			unk_0x1886753DA39F38F8(Local_382.f_172[iParam0], 1);
		}
	}
	else if (unk_0xCE4AAA035282336C(Local_382.f_172[iParam0]))
	{
		unk_0x45533C09A6C9B409(&(Local_382.f_172[iParam0]));
	}
	switch (Local_98.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!func_48(Local_125[unk_0xD378D2332270959A() /*8*/].f_4[iParam0], 16))
			{
				Local_125[unk_0xD378D2332270959A() /*8*/].f_4[iParam0] = 0;
				func_47(&(Local_125[unk_0xD378D2332270959A() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_48(Local_125[unk_0xD378D2332270959A() /*8*/].f_4[iParam0], 1))
			{
				if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
				{
					if (unk_0x2AE2D64A5E125BF2(unk_0xC1A5EC5C986B98AD()) || unk_0x6DFDDBD2D0067A98(unk_0xC1A5EC5C986B98AD()))
					{
						if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) >= 4)
						{
							if (func_20(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 3, 500, 0))
							{
								func_47(&(Local_125[unk_0xD378D2332270959A() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_48(Local_125[unk_0xD378D2332270959A() /*8*/].f_4[iParam0], 2))
			{
				if (func_46(iParam0))
				{
					iVar2 = unk_0xF2CFBB1105511E1A(Local_98.f_3[iParam0 /*5*/].f_4);
					iVar0 = unk_0x0DB8386015E986B7(Local_98.f_3[iParam0 /*5*/].f_1);
					iVar1 = unk_0x972B1BFB16AD20B5(Local_98.f_3[iParam0 /*5*/]);
					if (!unk_0x055111B11E6624FD(iVar2, 0))
					{
						if (unk_0x2AE2D64A5E125BF2(iVar2))
						{
							iVar3 = unk_0x95DC39736F6748E3(iVar2, 0);
							if ((!unk_0x055111B11E6624FD(iVar0, 0) && !unk_0x055111B11E6624FD(iVar1, 0)) && !unk_0x055111B11E6624FD(iVar3, 0))
							{
								unk_0x90C54F90572AEB53(iVar0, iVar1, iVar3, iVar2, unk_0x30BE8A934C020461(iVar2, 1), 6, 70f, -1f, 30f, 500, 50, 1);
								unk_0x248CD16D76130942(iVar0, joaat("vehicle_weapon_space_rocket"));
								unk_0xD423AF25169EB260(iVar0, 0);
							}
						}
					}
				}
				if (func_45(iParam0))
				{
					iVar0 = unk_0x0DB8386015E986B7(Local_98.f_3[iParam0 /*5*/].f_1);
					iVar2 = unk_0xF2CFBB1105511E1A(Local_98.f_3[iParam0 /*5*/].f_4);
					if (!unk_0x055111B11E6624FD(iVar2, 0))
					{
						if (unk_0x2AE2D64A5E125BF2(iVar2))
						{
							unk_0xDB5C27EB21B3848A(iVar0, iVar2, unk_0x30BE8A934C020461(iVar2, 1));
						}
					}
				}
				if (func_44(iParam0, 6))
				{
					func_47(&(Local_125[unk_0xD378D2332270959A() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_48(Local_125[unk_0xD378D2332270959A() /*8*/].f_4[iParam0], 8))
			{
				if (func_46(iParam0))
				{
					iVar0 = unk_0x0DB8386015E986B7(Local_98.f_3[iParam0 /*5*/].f_1);
					iVar1 = unk_0x972B1BFB16AD20B5(Local_98.f_3[iParam0 /*5*/]);
					if (!unk_0x055111B11E6624FD(iVar0, 0) && !unk_0x055111B11E6624FD(iVar1, 0))
					{
						unk_0x90C54F90572AEB53(iVar0, iVar1, 0, 0, -2076.374f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 500, 50, 1);
					}
				}
				if (func_44(iParam0, 9))
				{
					func_47(&(Local_125[unk_0xD378D2332270959A() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (unk_0x7E2E2E8A648611F4(Local_98.f_3[iParam0 /*5*/]) || unk_0x7E2E2E8A648611F4(Local_98.f_3[iParam0 /*5*/].f_1))
			{
				if (!unk_0x67670574D396B9A8(unk_0x30BE8A934C020461(unk_0x177F7E959D2D410B(Local_98.f_3[iParam0 /*5*/]), 0), 10f) && !unk_0x2AB7404F34D939DC(unk_0x30BE8A934C020461(unk_0x177F7E959D2D410B(Local_98.f_3[iParam0 /*5*/]), 0), 10f))
				{
					if (unk_0x5E6D8811A0BD0954(Local_98.f_3[iParam0 /*5*/].f_1) && unk_0xFE2AB315FD8C7A6F(Local_98.f_3[iParam0 /*5*/].f_1))
					{
						uVar4 = unk_0x177F7E959D2D410B(Local_98.f_3[iParam0 /*5*/].f_1);
						unk_0x782D744058B1DFA3(&uVar4);
					}
					if (unk_0x5E6D8811A0BD0954(Local_98.f_3[iParam0 /*5*/]) && unk_0xFE2AB315FD8C7A6F(Local_98.f_3[iParam0 /*5*/]))
					{
						uVar5 = unk_0x177F7E959D2D410B(Local_98.f_3[iParam0 /*5*/]);
						unk_0x782D744058B1DFA3(&uVar5);
					}
				}
			}
			else if (func_48(Local_125[unk_0xD378D2332270959A() /*8*/].f_4[iParam0], 16))
			{
				func_43(&(Local_125[unk_0xD378D2332270959A() /*8*/].f_4[iParam0]), 16);
			}
			break;
	}
}

void func_43(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_44(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x5E6D8811A0BD0954(Local_98.f_3[iParam0 /*5*/]))
	{
		return 1;
	}
	iVar0 = unk_0x972B1BFB16AD20B5(Local_98.f_3[iParam0 /*5*/]);
	if (unk_0x055111B11E6624FD(iVar0, 0))
	{
		return 1;
	}
	if (unk_0x3E7D788FCA7134C4(iVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0)
{
	int iVar0;
	
	if (!unk_0x5E6D8811A0BD0954(Local_98.f_3[iParam0 /*5*/].f_1))
	{
		return 0;
	}
	iVar0 = unk_0x0DB8386015E986B7(Local_98.f_3[iParam0 /*5*/].f_1);
	if (unk_0x055111B11E6624FD(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xB6B927AA8C3DAD36(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0)
{
	int iVar0;
	
	if (!unk_0x5E6D8811A0BD0954(Local_98.f_3[iParam0 /*5*/]))
	{
		return 0;
	}
	iVar0 = unk_0x972B1BFB16AD20B5(Local_98.f_3[iParam0 /*5*/]);
	if (unk_0x055111B11E6624FD(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xB6B927AA8C3DAD36(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_47(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_48(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_49()
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	struct<6> Var5;
	
	func_103();
	func_98();
	Var2 = { Local_95 };
	if (((func_20(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 3, 1000, 0) || func_19(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 1000)) || func_96(unk_0xC1A5EC5C986B98AD())) && func_95(unk_0xC1A5EC5C986B98AD()))
	{
		bVar0 = true;
	}
	else
	{
		Local_382.f_178 = 0;
	}
	if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		bVar1 = true;
	}
	else
	{
		Local_382.f_179 = 0;
	}
	if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
	{
		Var2 = { -1592.1f, 2797.2f, 17.1f };
		Local_382.f_181 = 1;
	}
	else if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		Var2 = { -2303.9f, 3388f, 31.3f };
		Local_382.f_181 = 2;
	}
	if (func_93(bVar0, bVar1))
	{
		func_91();
		if (!func_90())
		{
			Global_1835499 = 1;
			func_89(&(Local_382.f_7), 2);
			func_88(&(Local_382.f_7), 2);
			func_87(&(Local_382.f_7), 2, 0, "AIRMECH", 0, 1);
			func_86(&(Local_382.f_7), 2, Var2);
			Global_21014.f_162 = { Var2 };
			Var5 = { func_85() };
			if (!unk_0x2AC37494BBF1DB16(&Var5))
			{
				if (func_64(&(Local_382.f_7), "SMGFZAU", &Var5, 7, 0, 0, 0))
				{
					func_50(bVar0, bVar1);
				}
			}
		}
	}
	else if (!func_90())
	{
		if (!BitTest(Local_382.f_182, 2))
		{
			Global_1835499 = 0;
			func_89(&(Local_382.f_7), 2);
			func_88(&(Local_382.f_7), 2);
			unk_0xECDAB41968FF21A8(&(Local_382.f_182), 2);
		}
	}
}

void func_50(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!func_63(16000, -1))
		{
			func_62(16000, 1, -1);
			if (Global_2793044.f_6859)
			{
				if (func_56())
				{
					func_54("AB_ENTRY_HT");
					Local_382.f_180 = 1;
				}
			}
			else if (func_56())
			{
				func_53("AB_ENTRY_HT", -1);
			}
		}
		else if (!func_63(16001, -1))
		{
			func_62(16001, 1, -1);
			if (Global_2793044.f_6859)
			{
				if (func_56())
				{
					func_54("AB_ENTRY_HT");
					Local_382.f_180 = 1;
				}
			}
			else if (func_56())
			{
				func_53("AB_ENTRY_HT", -1);
			}
		}
		Local_382.f_178 = 1;
	}
	else if (bParam1)
	{
		if (!func_63(15999, -1))
		{
			func_62(15999, 1, -1);
			if (Global_2793044.f_6859)
			{
				if (func_56())
				{
					func_54("AB_ENTRY_HT");
					Local_382.f_180 = 1;
				}
			}
			else if (func_56())
			{
				func_53("AB_ENTRY_HT", -1);
			}
		}
		else if (Local_382.f_181 == 1)
		{
			if (!func_63(16002, -1))
			{
				func_62(16002, 1, -1);
				if (Global_2793044.f_6859)
				{
					if (func_56())
					{
						func_54("AB_ENTRY_HT");
						Local_382.f_180 = 1;
					}
				}
				else if (func_56())
				{
					func_53("AB_ENTRY_HT", -1);
				}
			}
		}
		else if (Local_382.f_181 == 2)
		{
			if (func_52(18097, -1) == 0)
			{
				func_51(18097, 1, -1);
				if (Global_2793044.f_6859)
				{
					if (func_56())
					{
						func_54("AB_ENTRY_HT");
						Local_382.f_180 = 1;
					}
				}
				else if (func_56())
				{
					func_53("AB_ENTRY_HT", -1);
				}
			}
		}
		Local_382.f_179 = 1;
		Local_382.f_181 = 0;
	}
	if (BitTest(Local_382.f_182, 2))
	{
		unk_0x061B1200C95204CB(&(Local_382.f_182), 2);
	}
}

void func_51(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_35();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	unk_0x5B9D75B86493C415(iParam0, iParam1, iParam2);
}

int func_52(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	return unk_0x088E49A1CEC4C23F(iParam0, iParam1);
}

void func_53(char* sParam0, int iParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
}

void func_54(char* sParam0)
{
	if (unk_0xF0E4B64AC0B5660E())
	{
		unk_0xCD3C8E1022864F65(1);
	}
	if (!func_55(sParam0))
	{
		func_53(sParam0, -1);
	}
}

bool func_55(char* sParam0)
{
	unk_0x56C9BC27C0FF68D7(sParam0);
	return unk_0x6A92D111B5409879(0);
}

int func_56()
{
	if (func_59(unk_0x93E99A2DBCBA9CFA()) && !func_57(unk_0x93E99A2DBCBA9CFA(), 0))
	{
		return 1;
	}
	return 0;
}

bool func_57(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_58(iParam0))
		{
			return 0;
		}
	}
	return Global_1894573[iParam0 /*608*/].f_10 != func_39();
}

int func_58(int iParam0)
{
	if (iParam0 != func_39())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_39())
		{
			return Global_1894573[iParam0 /*608*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_59(int iParam0)
{
	int iVar0;
	
	if (func_61(iParam0))
	{
		iVar0 = func_60(iParam0);
		if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	if (iParam0 != func_39())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_293;
	}
	return 0;
}

int func_61(int iParam0)
{
	if (iParam0 != func_39())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_293 != 0;
	}
	return 0;
}

void func_62(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_35();
	}
	unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
}

bool func_63(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}

bool func_64(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_84(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21732 = 0;
	Global_21734 = 0;
	Global_21739 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
	return func_65(sParam2, iParam3, 0);
}

int func_65(char* sParam0, int iParam1, bool bParam2)
{
	Global_21726 = 0;
	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam1 > Global_21727)
			{
				if (Global_21732 == 0)
				{
					unk_0xD6625E11483B2324(0);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
					Global_21736 = 0;
					Global_21735 = 0;
					Global_20382 = 0;
				}
				else
				{
					func_83();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x0DCB385165FDE763())
		{
			return 0;
		}
		if (func_82(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_81();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_22721 = Global_22722;
		Global_21344.f_370 = Global_22714;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21721 = Global_21722;
		if (Global_21731)
		{
			unk_0x061B1200C95204CB(&Global_8253, 20);
			unk_0x061B1200C95204CB(&Global_8254, 17);
			unk_0x061B1200C95204CB(&Global_8255, 0);
			if (bParam2)
			{
				func_73();
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20383.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20349 == 1)
			{
				return 0;
			}
			if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
			{
				if (unk_0xE3A9F9074FB79A61(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (func_72())
				{
					return 0;
				}
				if (unk_0xFC42DF91E1950588(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (unk_0xA92CED053FDC0D06(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (unk_0x87B83AFF6D0F83FD(unk_0xC1A5EC5C986B98AD(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78558)
				{
					if (unk_0x1589BC95A4C50F21(unk_0xC1A5EC5C986B98AD()))
					{
						return 0;
					}
					if (unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA()))
					{
						return 0;
					}
					if (unk_0x197DD015F81B0D16(unk_0xC1A5EC5C986B98AD()))
					{
						return 0;
					}
					if (unk_0xF56A91A191EDA1FC(unk_0x93E99A2DBCBA9CFA(), 0))
					{
						return 0;
					}
				}
			}
			if (func_71())
			{
				return 0;
			}
			else
			{
				switch (Global_20383.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8253, 9))
				{
					return 0;
				}
			}
			func_70();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_69();
		func_66();
		return 1;
	}
	if (Global_21725 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21727 || iParam1 == Global_21727)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_83();
	}
	return 0;
}

void func_66()
{
	if (!func_67())
	{
		return;
	}
	if (Global_21731)
	{
		MemCopy(&(Global_1977511.f_1), {Global_21344}, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}
}

int func_67()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_39())
	{
		return 0;
	}
	if (func_68(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	if (BitTest(Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x1758F8A8511510AB())
	{
		return 0;
	}
	return 1;
}

bool func_68(int iParam0)
{
	return func_10(iParam0, 20);
}

void func_69()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD6625E11483B2324(0);
	Global_21725 = 1;
}

void func_70()
{
	Global_21778 = Global_21777;
	Global_21772 = Global_21773;
	Global_21819 = { Global_21807 };
	Global_21825 = { Global_21813 };
	Global_21780 = Global_21779;
	Global_21849 = { Global_21831 };
	Global_21855 = { Global_21837 };
	Global_21861 = { Global_21843 };
	Global_21867 = { Global_21873 };
	Global_7568 = Global_7569;
	Global_7570 = Global_7571;
	Global_21736 = Global_21737;
	Global_21738 = Global_21739;
	Global_21740 = { Global_21756 };
	Global_21729 = Global_21730;
	Global_22741 = 0;
	Global_21774 = 0;
	Global_21775 = 0;
	unk_0x061B1200C95204CB(&Global_8254, 16);
}

int func_71()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_72()
{
	int iVar0;
	int iVar1;
	
	if (Global_78558)
	{
		iVar0 = 0;
		unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &iVar1, 1);
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC67B4044F323AEB2() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x97247A0CAE4CEFB6(unk_0xC1A5EC5C986B98AD(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_73()
{
	if (func_80(14))
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
		Global_20383 = func_74();
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

var func_74()
{
	func_75();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_75()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_78(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_77(unk_0xC1A5EC5C986B98AD());
			if (func_76(iVar0) && (!func_80(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_76(Global_113648.f_2365.f_539.f_4321))
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

bool func_76(int iParam0)
{
	return iParam0 < 3;
}

int func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_78(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_78(int iParam0)
{
	if (func_76(iParam0))
	{
		return func_79(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_79(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

bool func_80(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_81()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21014[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21014[iVar0 /*10*/].f_1), "", 24);
		Global_21014[iVar0 /*10*/].f_7 = 0;
		Global_21014[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21014.f_161 = -99;
	Global_21014.f_162 = { 0f, 0f, 0f };
}

bool func_82(int iParam0, int iParam1)
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

void func_83()
{
	unk_0x782234C275AFBA24();
	Global_22736 = 0;
	if ((unk_0xE444FD7526C8BB46() || Global_20383.f_1 == 9) || Global_20382 == 1)
	{
		unk_0xD6625E11483B2324(0);
		Global_21725 = 6;
		Global_20383.f_1 = 3;
		return;
	}
	if (unk_0x0DCB385165FDE763())
	{
		unk_0xD6625E11483B2324(1);
		Global_21725 = 6;
		return;
	}
}

void func_84(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	StringCopy(&Global_21795, sParam2, 24);
	Global_22714 = uParam5;
	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}
}

struct<6> func_85()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "", 24);
	if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		if (!func_63(15999, -1))
		{
			StringCopy(&Var0, "SMGFZ_WLK1ST", 24);
		}
		else if (!func_63(16002, -1) || func_52(18097, -1) == 0)
		{
			StringCopy(&Var0, "SMGFZ_WLKENT", 24);
		}
	}
	else if (((func_20(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 3, 1000, 0) || func_19(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 1000)) || func_96(unk_0xC1A5EC5C986B98AD())) && func_95(unk_0xC1A5EC5C986B98AD()))
	{
		if (!func_63(16000, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLY1ST", 24);
		}
		else if (!func_63(16001, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLYENT", 24);
		}
	}
	return Var0;
}

void func_86(var uParam0, int iParam1, struct<3> Param2)
{
	uParam0->f_161 = iParam1;
	uParam0->f_162 = { Param2 };
}

void func_87(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78558)
	{
		if (!unk_0x66599E73DBA5A850(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xAD4CEC14FE6404F6(iParam2, 0);
			}
			else
			{
				unk_0xAD4CEC14FE6404F6(iParam2, 1);
			}
		}
		if (!unk_0x66599E73DBA5A850(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59B8D6E436F5B21C(iParam2, 0);
			}
			else
			{
				unk_0x59B8D6E436F5B21C(iParam2, 1);
			}
		}
	}
}

void func_88(var uParam0, int iParam1)
{
	uParam0->f_161 = -99;
	uParam0->f_162 = { 0f, 0f, 0f };
	if (iParam1 < 0)
	{
	}
}

void func_89(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_90()
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
	{
		return 1;
	}
	return 0;
}

void func_91()
{
	Global_20591 = 0;
	func_92();
}

void func_92()
{
	if (unk_0x0DCB385165FDE763())
	{
		unk_0x782234C275AFBA24();
		Global_22736 = 0;
		unk_0xD6625E11483B2324(1);
		Global_21725 = 6;
		return;
	}
}

int func_93(bool bParam0, bool bParam1)
{
	if (func_22(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (!Local_382.f_178)
		{
			if (BitTest(Local_382.f_182, 1))
			{
				if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
				{
					if (!func_63(16000, -1) || !func_63(16001, -1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (bParam1)
	{
		if (!Local_382.f_179)
		{
			if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()) && unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0)
			{
				if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) || func_94())
				{
					if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
					{
						if (!func_63(15999, -1) || !func_63(16002, -1))
						{
							if (unk_0xD850DD08D5434072(unk_0xC1A5EC5C986B98AD()) >= -25f && unk_0xD850DD08D5434072(unk_0xC1A5EC5C986B98AD()) <= 125f)
							{
								return 1;
							}
						}
					}
					else if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
					{
						if (!func_63(15999, -1) || func_52(18097, -1) == 0)
						{
							if (unk_0xD850DD08D5434072(unk_0xC1A5EC5C986B98AD()) >= 160f && unk_0xD850DD08D5434072(unk_0xC1A5EC5C986B98AD()) <= 290f)
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_94()
{
	int iVar0;
	
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		if (unk_0x41D114B661987866(iVar0))
		{
			if (func_6(iVar0))
			{
				if (!func_5(iVar0, 1) && !func_4(iVar0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_95(int iParam0)
{
	if (unk_0x2AE2D64A5E125BF2(iParam0) || unk_0x6DFDDBD2D0067A98(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0)
{
	if (unk_0x7DE17ACDD8BA2642(iParam0) && func_97(iParam0))
	{
		if ((unk_0x9DC9E896F189AAA5(iParam0, -2013.3f, 2878.6f, 1000f, -2864.6f, 3357.6f, 31f, 400f, 0, 1, 0) || unk_0x9DC9E896F189AAA5(iParam0, -1700f, 3150f, 1000f, -2039f, 3342f, 30f, 175f, 0, 1, 0)) || unk_0x9DC9E896F189AAA5(iParam0, -1950f, 2786f, 1000f, -1856f, 3141f, 31f, 270f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_97(int iParam0)
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

void func_98()
{
	if (Local_382.f_180)
	{
		if (!func_102(&(Local_382.f_183)))
		{
			func_101(&(Local_382.f_183), 0, 0);
		}
		else if (!func_100(&(Local_382.f_183), 17000, 0))
		{
			if (!func_55("AB_ENTRY_HT"))
			{
				func_53("AB_ENTRY_HT", -1);
			}
		}
		else if (func_100(&(Local_382.f_183), 17000, 0))
		{
			if (func_55("AB_ENTRY_HT"))
			{
				unk_0xCD3C8E1022864F65(1);
			}
			func_99(&(Local_382.f_183));
			Local_382.f_180 = 0;
		}
	}
}

void func_99(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_100(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_101(uParam0, bParam2, 0);
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

void func_101(var uParam0, bool bParam1, bool bParam2)
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

bool func_102(var uParam0)
{
	return uParam0->f_1;
}

void func_103()
{
	if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
	{
		if ((func_20(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 3, 1000, 0) || func_19(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 1000)) || func_96(unk_0xC1A5EC5C986B98AD()))
		{
			if (!BitTest(Local_382.f_182, 0))
			{
				if ((((func_95(unk_0xC1A5EC5C986B98AD()) && unk_0xDA70CA6A0D1738D3(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0))) && unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0) && func_94()) && !Global_1962913)
				{
					if (!BitTest(Local_382.f_182, 1) && !BitTest(Local_382.f_182, 3))
					{
						unk_0xECDAB41968FF21A8(&(Local_382.f_182), 1);
					}
				}
				unk_0xECDAB41968FF21A8(&(Local_382.f_182), 0);
			}
		}
		else
		{
			if (BitTest(Local_382.f_182, 0))
			{
				unk_0x061B1200C95204CB(&(Local_382.f_182), 0);
			}
			if (BitTest(Local_382.f_182, 1))
			{
				unk_0x061B1200C95204CB(&(Local_382.f_182), 1);
			}
			if (BitTest(Local_382.f_182, 3))
			{
				unk_0x061B1200C95204CB(&(Local_382.f_182), 3);
			}
			if (Global_1962913)
			{
				Global_1962913 = 0;
			}
		}
	}
}

int func_104(int iParam0)
{
	if (func_25(iParam0) == 233)
	{
		return func_105(iParam0);
	}
	return -1;
}

int func_105(int iParam0)
{
	if (func_26(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_182;
	}
	return -1;
}

int func_106()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_59(unk_0x93E99A2DBCBA9CFA()))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xADCF72047FEB806E(iVar0);
		if (func_38(iVar1, 0, 1))
		{
			if (iVar1 != unk_0x93E99A2DBCBA9CFA())
			{
				if (func_107(unk_0xF2CFBB1105511E1A(unk_0x93E99A2DBCBA9CFA()), unk_0xF2CFBB1105511E1A(iVar1)))
				{
					iVar2 = unk_0x95DC39736F6748E3(unk_0xF2CFBB1105511E1A(iVar1), 0);
					if (unk_0xA66E176E5772E965(iVar2, -1, 0) == unk_0xF2CFBB1105511E1A(iVar1))
					{
						if (func_59(iVar1))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_107(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!unk_0x3C3D6D026CF7F51B(iParam0, 0) || !unk_0x3C3D6D026CF7F51B(iParam1, 0))
	{
		return 0;
	}
	return unk_0x95DC39736F6748E3(iParam0, 0) == unk_0x95DC39736F6748E3(iParam1, 0);
}

void func_108(int iParam0)
{
	int iVar0;
	
	if (!unk_0x5E6D8811A0BD0954(Local_98[iParam0]))
	{
		return;
	}
	iVar0 = unk_0x0DB8386015E986B7(Local_98[iParam0]);
	if (unk_0x055111B11E6624FD(iVar0, 0))
	{
		return;
	}
	switch (Local_98.f_21[iParam0])
	{
		case 0:
			if (!func_48(Local_125[unk_0xD378D2332270959A() /*8*/].f_1[iParam0], 64))
			{
				Local_125[unk_0xD378D2332270959A() /*8*/].f_1[iParam0] = 0;
				func_47(&(Local_125[unk_0xD378D2332270959A() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_48(Local_125[unk_0xD378D2332270959A() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(iVar0, 1)) <= 900f)
					{
						func_47(&(Local_125[unk_0xD378D2332270959A() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if ((!func_48(Local_125[unk_0xD378D2332270959A() /*8*/].f_1[iParam0], 2) && unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(iVar0, 1)) <= 900f) && !func_22(unk_0x93E99A2DBCBA9CFA()))
			{
				func_87(&(Local_382.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				func_113(&(Local_382.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_47(&(Local_125[unk_0xD378D2332270959A() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_48(Local_125[unk_0xD378D2332270959A() /*8*/].f_1[iParam0], 4))
			{
				if (func_112(iParam0))
				{
					unk_0xFD42C7B0CE08BA68(iVar0, func_111(iParam0), -1, 0);
				}
				if (func_110(iParam0, joaat("script_task_aim_gun_at_entity")))
				{
					func_47(&(Local_125[unk_0xD378D2332270959A() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_48(Local_125[unk_0xD378D2332270959A() /*8*/].f_1[iParam0], 8) && unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), unk_0x30BE8A934C020461(iVar0, 1)) <= 900f) && unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) < 1)
			{
				if (!func_17(&Local_382))
				{
					func_14(&Local_382);
				}
				if (func_11(&Local_382) >= 7f && !func_22(unk_0x93E99A2DBCBA9CFA()))
				{
					func_47(&(Local_125[unk_0xD378D2332270959A() /*8*/].f_1[iParam0]), 8);
					func_113(&(Local_382.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_17(&Local_382))
			{
				func_1(&Local_382);
			}
			if (!func_48(Local_125[unk_0xD378D2332270959A() /*8*/].f_1[iParam0], 16))
			{
				if (func_109(iParam0) && unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), unk_0x30BE8A934C020461(iVar0, 1)) <= 900f)
				{
					func_47(&(Local_125[unk_0xD378D2332270959A() /*8*/].f_1[iParam0]), 16);
					if (!func_156())
					{
						unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 36, unk_0x7F5C2D0AC2228834(4));
					}
					else
					{
						unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 36, unk_0x7F5C2D0AC2228834(Global_262145.f_21890));
					}
				}
			}
			if (func_48(Local_125[unk_0xD378D2332270959A() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(iVar0, 1)) > 900f)
					{
						func_43(&(Local_125[unk_0xD378D2332270959A() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_48(Local_125[unk_0xD378D2332270959A() /*8*/].f_1[iParam0], 16))
			{
				if (func_109(iParam0) && unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), unk_0x30BE8A934C020461(iVar0, 1)) <= 900f)
				{
					func_47(&(Local_125[unk_0xD378D2332270959A() /*8*/].f_1[iParam0]), 16);
					if (!func_156())
					{
						unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 36, (unk_0x7F5C2D0AC2228834(4) - unk_0x7F5C2D0AC2228834(unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()))));
					}
					else
					{
						unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 36, (unk_0x7F5C2D0AC2228834(Global_262145.f_21890) - unk_0x7F5C2D0AC2228834(unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()))));
					}
				}
			}
			if (func_48(Local_125[unk_0xD378D2332270959A() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(iVar0, 1)) > 900f)
					{
						func_43(&(Local_125[unk_0xD378D2332270959A() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_110(iParam0, joaat("script_task_aim_gun_at_entity")))
			{
				if (func_112(iParam0))
				{
					unk_0xFD42C7B0CE08BA68(iVar0, func_111(iParam0), -1, 0);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_48(Local_125[unk_0xD378D2332270959A() /*8*/].f_1[iParam0], 4))
			{
				if (func_112(iParam0))
				{
					unk_0x909F139DC199D8E0(iVar0);
				}
				if (!func_110(iParam0, joaat("script_task_any")))
				{
					func_43(&(Local_125[unk_0xD378D2332270959A() /*8*/].f_1[iParam0]), 4);
					func_43(&(Local_125[unk_0xD378D2332270959A() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_109(int iParam0)
{
	int iVar0;
	
	if (!unk_0x5E6D8811A0BD0954(Local_98[iParam0]))
	{
		return 0;
	}
	iVar0 = unk_0x0DB8386015E986B7(Local_98[iParam0]);
	if (unk_0x055111B11E6624FD(iVar0, 0))
	{
		return 0;
	}
	if (unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		return 0;
	}
	if (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
	{
		return 1;
	}
	if (unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), iVar0))
	{
		return 1;
	}
	if (unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iVar0))
	{
		return 1;
	}
	if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(iVar0, 1)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x5E6D8811A0BD0954(Local_98[iParam0]))
	{
		return 1;
	}
	iVar0 = unk_0x0DB8386015E986B7(Local_98[iParam0]);
	if (unk_0x055111B11E6624FD(iVar0, 0))
	{
		return 1;
	}
	if (unk_0xF5F493B789EA063E(iVar0, iParam1) != 1 && unk_0xF5F493B789EA063E(iVar0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

int func_111(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = 0;
	while (iVar0 < unk_0x1C57E792CD67EF97())
	{
		if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iVar0)))
		{
			iVar2 = unk_0xF2CFBB1105511E1A(unk_0xFE2D0B37A9596A4C(unk_0x74A08123C183740A(iVar0)));
			if (!unk_0x055111B11E6624FD(iVar2, 0))
			{
				fVar4 = unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(iVar2, 1), unk_0x30BE8A934C020461(unk_0x177F7E959D2D410B(Local_98[iParam0]), 1));
				if (fVar4 < fVar3)
				{
					iVar1 = iVar2;
					fVar3 = fVar4;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_112(int iParam0)
{
	int iVar0;
	
	if (!unk_0x5E6D8811A0BD0954(Local_98[iParam0]))
	{
		return 0;
	}
	iVar0 = unk_0x0DB8386015E986B7(Local_98[iParam0]);
	if (unk_0x055111B11E6624FD(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xB6B927AA8C3DAD36(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_113(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_84(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21732 = 0;
	Global_21734 = 0;
	Global_21739 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_2883585 = 1;
	return func_65(sParam2, iParam3, 0);
}

bool func_114(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_115()
{
	if (!unk_0x0CBB7C273DED26E7(joaat("s_m_y_marine_01")))
	{
		return 0;
	}
	if (!unk_0x0CBB7C273DED26E7(joaat("lazer")))
	{
		return 0;
	}
	if (!unk_0x0CBB7C273DED26E7(joaat("s_m_y_pilot_01")))
	{
		return 0;
	}
	return 1;
}

void func_116(var uParam0, int iParam1)
{
	func_117(uParam0, iParam1);
}

void func_117(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_118(int iParam0)
{
	if (func_30(iParam0) == 236 || func_30(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

bool func_119()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 0);
}

int func_120(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_121(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853910[iParam0 /*862*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_121(int iParam0)
{
	return func_122(iParam0);
}

var func_122(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

void func_123()
{
	unk_0x852EC2A7DE66202D(joaat("s_m_y_marine_01"));
	unk_0x852EC2A7DE66202D(joaat("lazer"));
	unk_0x852EC2A7DE66202D(joaat("s_m_y_pilot_01"));
}

int func_124()
{
	int iVar0;
	
	switch (Local_98.f_19)
	{
		case 0:
			if (func_146())
			{
				Local_98.f_19 = 1;
			}
			break;
		
		case 1:
			if (func_145())
			{
				Local_98.f_19 = 2;
			}
			break;
		
		case 2:
			if (((((((func_120(unk_0x93E99A2DBCBA9CFA(), 1, 0) || func_119()) || func_25(unk_0x93E99A2DBCBA9CFA()) == 225) || func_25(unk_0x93E99A2DBCBA9CFA()) == 233) || func_118(unk_0x93E99A2DBCBA9CFA())) || func_21()) || Global_1836597) || (unk_0x1758F8A8511510AB() && func_8()))
			{
				func_116(&(Local_98.f_20), 1);
				Local_98.f_19 = 3;
			}
			else if (func_143())
			{
				func_116(&(Local_98.f_20), 1);
				Local_98.f_19 = 3;
			}
			break;
		
		case 3:
			if (!func_120(unk_0x93E99A2DBCBA9CFA(), 1, 0) && !func_119())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_140(iVar0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_127(iVar0);
					iVar0++;
				}
			}
			if (((((func_25(unk_0x93E99A2DBCBA9CFA()) == 225 || func_25(unk_0x93E99A2DBCBA9CFA()) == 233) || func_118(unk_0x93E99A2DBCBA9CFA())) || Global_1836597) || func_21()) || (unk_0x1758F8A8511510AB() && func_8()))
			{
				func_126();
			}
			if (func_125())
			{
				Local_98.f_19 = 4;
			}
			break;
		
		case 4:
			func_126();
			return 1;
			break;
	}
	return 0;
}

int func_125()
{
	if (unk_0xA9B8A7219CCBCD56() > 1)
	{
		return 0;
	}
	if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_126()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x5E6D8811A0BD0954(Local_98[iVar0]))
		{
			uVar1 = unk_0x0DB8386015E986B7(Local_98[iVar0]);
			if (!unk_0x055111B11E6624FD(uVar1, 0))
			{
				unk_0x1EEF71E3CDD868D3(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x5E6D8811A0BD0954(Local_98.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = unk_0x0DB8386015E986B7(Local_98.f_3[iVar0 /*5*/].f_1);
			if (!unk_0x055111B11E6624FD(iVar1, 0))
			{
				unk_0x1EEF71E3CDD868D3(&iVar1);
			}
		}
		if (unk_0x5E6D8811A0BD0954(Local_98.f_3[iVar0 /*5*/]))
		{
			uVar2 = unk_0x972B1BFB16AD20B5(Local_98.f_3[iVar0 /*5*/]);
			if (!unk_0x055111B11E6624FD(uVar2, 0))
			{
				unk_0x0E4B6CF706BE8AA4(&iVar2);
			}
		}
		iVar0++;
	}
}

void func_127(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	struct<3> Var5;
	int iVar8;
	
	if (Local_98.f_3[iParam0 /*5*/].f_2 > 2)
	{
		if (unk_0x5E6D8811A0BD0954(Local_98.f_3[iParam0 /*5*/].f_1))
		{
			if (!unk_0x055111B11E6624FD(unk_0x0DB8386015E986B7(Local_98.f_3[iParam0 /*5*/].f_1), 0))
			{
				uVar0 = unk_0x0DB8386015E986B7(Local_98.f_3[iParam0 /*5*/].f_1);
				Var1 = { unk_0x30BE8A934C020461(uVar0, 1) };
				if (Var1.f_2 <= -150f)
				{
					unk_0x1EEF71E3CDD868D3(&iVar0);
					if (unk_0x5E6D8811A0BD0954(Local_98.f_3[iParam0 /*5*/]))
					{
						if (!unk_0x055111B11E6624FD(unk_0x972B1BFB16AD20B5(Local_98.f_3[iParam0 /*5*/]), 0))
						{
							uVar4 = unk_0x972B1BFB16AD20B5(Local_98.f_3[iParam0 /*5*/]);
							unk_0x0E4B6CF706BE8AA4(&uVar4);
						}
					}
				}
			}
		}
	}
	switch (Local_98.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (func_139(iParam0, 16))
			{
				Local_98.f_3[iParam0 /*5*/].f_4 = -1;
				Local_98.f_3[iParam0 /*5*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_137(iParam0))
			{
				Local_98.f_3[iParam0 /*5*/].f_2 = 2;
			}
			break;
		
		case 2:
			Var5 = { func_136(iParam0) };
			if (!func_135(Var5))
			{
				if (!unk_0x2AB7404F34D939DC(Var5, 20f) && !unk_0x67670574D396B9A8(Var5, 20f))
				{
					if (func_130(Var5, unk_0xD850DD08D5434072(unk_0xF2CFBB1105511E1A(Local_98.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_98.f_3[iParam0 /*5*/].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_139(iParam0, 2))
			{
				Local_98.f_3[iParam0 /*5*/].f_2 = 4;
			}
			break;
		
		case 4:
			iVar8 = unk_0xF2CFBB1105511E1A(Local_98.f_3[iParam0 /*5*/].f_4);
			if (!unk_0x7DE17ACDD8BA2642(iVar8))
			{
				Local_98.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0x055111B11E6624FD(iVar8, 0))
			{
				Local_98.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0x2AE2D64A5E125BF2(iVar8) || unk_0x6DFDDBD2D0067A98(iVar8))
			{
				if (func_129(unk_0x95DC39736F6748E3(iVar8, 0)))
				{
					Local_98.f_3[iParam0 /*5*/].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_139(iParam0, 8))
			{
				Local_98.f_3[iParam0 /*5*/].f_2 = 6;
				Local_98.f_3[iParam0 /*5*/].f_4 = -1;
			}
			break;
		
		case 6:
			if (!func_128(iParam0, 16))
			{
				Local_98.f_3[iParam0 /*5*/].f_2 = 0;
			}
			if (func_137(iParam0))
			{
				Local_98.f_3[iParam0 /*5*/].f_2 = 3;
			}
			break;
	}
}

int func_128(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x1C57E792CD67EF97())
	{
		if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iVar0)))
		{
			if (func_48(Local_125[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_129(int iParam0)
{
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if (unk_0x055111B11E6624FD(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xFBD273FDBCF0C5BD(iParam0, 0))
		{
			if (!unk_0x584CD220C093B0B4(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_130(struct<3> Param0, var uParam3, int iParam4)
{
	int iVar0;
	
	if (!unk_0xE85391CF212DE622())
	{
		return 1;
	}
	iVar0 = 1;
	if (!unk_0x5E6D8811A0BD0954(Local_98.f_3[iParam4 /*5*/]))
	{
		if (!func_132(&(Local_98.f_3[iParam4 /*5*/]), joaat("lazer"), Param0, uParam3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = 0;
		}
		else
		{
			unk_0xD1081E1D2877ED71(unk_0x972B1BFB16AD20B5(Local_98.f_3[iParam4 /*5*/]), 3);
		}
	}
	if (unk_0x5E6D8811A0BD0954(Local_98.f_3[iParam4 /*5*/]))
	{
		if (!unk_0x5E6D8811A0BD0954(Local_98.f_3[iParam4 /*5*/].f_1))
		{
			if (!func_131(&(Local_98.f_3[iParam4 /*5*/].f_1), Local_98.f_3[iParam4 /*5*/], 29, joaat("s_m_y_pilot_01"), -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				unk_0x248CD16D76130942(unk_0x0DB8386015E986B7(Local_98.f_3[iParam4 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
				unk_0xD423AF25169EB260(unk_0x0DB8386015E986B7(Local_98.f_3[iParam4 /*5*/].f_1), 0);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_131(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x334CA22E0AD77C7C(1))
	{
		return 0;
	}
	if (!unk_0x7E2E2E8A648611F4(uParam1))
	{
		return 0;
	}
	if (!unk_0xFBD273FDBCF0C5BD(unk_0x972B1BFB16AD20B5(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xFDCB460E036BA39B(unk_0x4FA078B1B32445FD(unk_0x972B1BFB16AD20B5(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x7E2E2E8A648611F4(*uParam0))
	{
		unk_0xAD02BD8A749B79F9(unk_0x0DB8386015E986B7(*uParam0), iParam7);
		if (unk_0xC59A2EB21A3834E2(unk_0x0DB8386015E986B7(*uParam0)))
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

int func_132(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x36A2218D87DEF488(iParam1))
	{
		return 0;
	}
	if (!unk_0xD46C7FE1113E7469(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		unk_0x10DFA2EC4C030EB3(Param2, fVar0, 0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0xABEEDBEF2BBDF5B3(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	if (unk_0x7DE17ACDD8BA2642(iVar1))
	{
		*uParam0 = unk_0x5FCD9CA713B11294(iVar1);
		Global_2793044.f_6736 = iVar1;
		if (unk_0x7E2E2E8A648611F4(*uParam0))
		{
			if (bParam15)
			{
				unk_0x9379BECAD1C8BD50(iVar1, 1);
			}
			unk_0xAD02BD8A749B79F9(iVar1, iParam10);
			if (unk_0xC59A2EB21A3834E2(iVar1))
			{
				if (bParam8)
				{
					unk_0x6CD289A8A1000001(*uParam0, 1);
				}
				else
				{
					unk_0x6CD289A8A1000001(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0xCD80955BA7109E45(*uParam0, unk_0x93E99A2DBCBA9CFA(), 1);
				}
			}
			unk_0xC34E0415D83DCE33(iVar1, iParam9);
			unk_0xA9354A2957681244(iVar1, 1);
			if (bParam12)
			{
				unk_0xFC6FD643FAF9B719(iVar1);
				unk_0x70B81583DCDC7F26(iVar1, 5, 5, 1f);
			}
			func_133(Param2, uParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_133(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_134(unk_0x93E99A2DBCBA9CFA(), Param0, iParam4) > -1)
	{
		if ((Global_2635559.f_2921[1 /*6*/].f_5 == iParam5 && Global_2635559.f_2921[1 /*6*/].f_4 == iParam4) && unk_0x2A488C176D52CCA5(Global_2635559.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635559.f_2921[iVar0 /*6*/] = { Global_2635559.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635559.f_2921[1 /*6*/] = { Param0 };
		Global_2635559.f_2921[1 /*6*/].f_3 = uParam3;
		Global_2635559.f_2921[1 /*6*/].f_4 = iParam4;
		Global_2635559.f_2921[1 /*6*/].f_5 = iParam5;
	}
}

int func_134(int iParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (unk_0x2655A8EC638E4FD1((Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (unk_0x2A488C176D52CCA5(Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_135(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_136(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = unk_0xF2CFBB1105511E1A(Local_98.f_3[iParam0 /*5*/].f_4);
	if (unk_0x055111B11E6624FD(iVar0, 0))
	{
		return 0f, 0f, 0f;
	}
	Var1 = { unk_0xF2A6E8EA57F9D501(unk_0x30BE8A934C020461(iVar0, 1), unk_0xD850DD08D5434072(iVar0), 0f, -250f, (40f * unk_0xBBDA792448DB5A89(iParam0))) };
	if (Var1.f_2 < 100f)
	{
		Var1.f_2 = 100f;
	}
	return Var1;
}

int func_137(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x1C57E792CD67EF97())
	{
		if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iVar0)))
		{
			iVar1 = unk_0xF2CFBB1105511E1A(unk_0xFE2D0B37A9596A4C(unk_0x74A08123C183740A(iVar0)));
			if (!func_138(unk_0xFE2D0B37A9596A4C(unk_0x74A08123C183740A(iVar0))))
			{
				if (unk_0x2AE2D64A5E125BF2(iVar1) || unk_0x6DFDDBD2D0067A98(iVar1))
				{
					if (unk_0x83C5A442AAD15BAF(unk_0xFE2D0B37A9596A4C(unk_0x74A08123C183740A(iVar0))) >= 4)
					{
						Var2 = { unk_0x30BE8A934C020461(iVar1, 0) };
						if (func_20(Var2, 3, 1000, 0) && Var2.f_2 > 90f)
						{
							Local_98.f_3[iParam0 /*5*/].f_4 = unk_0xFE2D0B37A9596A4C(unk_0x74A08123C183740A(iVar0));
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_138(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xF2CFBB1105511E1A(iParam0);
	if (!unk_0x7DE17ACDD8BA2642(iVar0))
	{
		return 1;
	}
	if (unk_0x055111B11E6624FD(iVar0, 0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = unk_0xF2CFBB1105511E1A(Local_98.f_3[iVar1 /*5*/].f_4);
		if (unk_0x7DE17ACDD8BA2642(iVar2))
		{
			if (iParam0 == Local_98.f_3[iVar1 /*5*/].f_4)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_139(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x1C57E792CD67EF97())
	{
		if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iVar0)))
		{
			if (!func_48(Local_125[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_140(int iParam0)
{
	switch (Local_98.f_21[iParam0])
	{
		case 0:
			if (func_142(iParam0, 64))
			{
				Local_98.f_21[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_141(iParam0, 1))
			{
				Local_98.f_21[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_141(iParam0, 2))
			{
				Local_98.f_21[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_142(iParam0, 4))
			{
				Local_98.f_21[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_141(iParam0, 8))
			{
				Local_98.f_21[iParam0] = 5;
			}
			if (!func_141(iParam0, 1))
			{
				Local_98.f_21[iParam0] = 7;
			}
			if (func_141(iParam0, 16))
			{
				Local_98.f_21[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_141(iParam0, 16))
			{
				Local_98.f_21[iParam0] = 6;
			}
			if (!func_141(iParam0, 1))
			{
				Local_98.f_21[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_141(iParam0, 4))
			{
				Local_98.f_21[iParam0] = 0;
			}
			break;
	}
}

int func_141(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x1C57E792CD67EF97())
	{
		if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iVar0)))
		{
			if (func_48(Local_125[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_142(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x1C57E792CD67EF97())
	{
		if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iVar0)))
		{
			if (!func_48(Local_125[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_143()
{
	int iVar0;
	
	if (!unk_0xE85391CF212DE622())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_144(&(Local_98[0]), 29, joaat("s_m_y_marine_01"), -2308.4f, 3391f, 30.0601f, 55.8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0x5E6D8811A0BD0954(Local_98[0]))
	{
		unk_0xCBDC2B59922F92C3(unk_0x0DB8386015E986B7(Local_98[0]), joaat("weapon_assaultrifle"), 200, 1, 1);
	}
	if (!func_144(&(Local_98[1]), 29, joaat("s_m_y_marine_01"), -1588.9f, 2792.9f, 16.1385f, 229.437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0x5E6D8811A0BD0954(Local_98[1]))
	{
		unk_0xCBDC2B59922F92C3(unk_0x0DB8386015E986B7(Local_98[1]), joaat("weapon_assaultrifle"), 200, 1, 1);
	}
	return iVar0;
}

int func_144(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	
	if (!unk_0x334CA22E0AD77C7C(1))
	{
		return 0;
	}
	uVar0 = unk_0x69FDD9508259E5B5(iParam1, iParam2, Param3, fParam6, iParam8, bParam7);
	*uParam0 = unk_0xFDCB460E036BA39B(uVar0);
	if (unk_0x7E2E2E8A648611F4(*uParam0))
	{
		unk_0xAD02BD8A749B79F9(uVar0, iParam9);
		if (unk_0xC59A2EB21A3834E2(iVar0))
		{
			if (bParam7)
			{
				unk_0x6CD289A8A1000001(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_145()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0x1C57E792CD67EF97())
	{
		if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iVar1)))
		{
			if (!func_114(Local_125[iVar1 /*8*/], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_146()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0x1C57E792CD67EF97())
	{
		if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iVar1)))
		{
			if (!func_114(Local_125[iVar1 /*8*/], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_147()
{
	if (!func_152())
	{
		return;
	}
	if (func_102(&uLocal_577) && func_100(&uLocal_577, Global_262145.f_21970, 0))
	{
		func_99(&uLocal_577);
	}
	if (func_102(&uLocal_575) && func_100(&uLocal_575, Global_262145.f_21971, 0))
	{
		func_99(&uLocal_575);
		iLocal_572 = 0;
	}
	if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) <= 0)
	{
		if (func_148())
		{
			if (!Global_2793044.f_6860)
			{
				Global_2793044.f_6860 = 1;
				func_53("BASE_EXP_WARN", -1);
			}
			if (!iLocal_572)
			{
				iLocal_572 = 1;
				func_101(&uLocal_577, 0, 0);
				func_101(&uLocal_575, 0, 0);
			}
			else if (!func_102(&uLocal_577))
			{
				unk_0x508B7A54DEE39001(5);
				bLocal_567 = true;
				bLocal_568 = true;
				iLocal_572 = 0;
				func_99(&uLocal_577);
				func_99(&uLocal_575);
			}
		}
	}
}

int func_148()
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 26)
	{
		func_151(&uLocal_573, iVar1);
		iLocal_574 = func_150();
		if (iLocal_574 >= 0)
		{
			uVar0 = func_149(iLocal_574);
			if (unk_0x7DE17ACDD8BA2642(uVar0) && unk_0x71904BD37B848CAF(iVar0))
			{
				if (unk_0x9C8D7679C15E75FF(iVar0) == unk_0xC1A5EC5C986B98AD())
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

var func_149(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f);
			break;
		
		case 1:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f);
			break;
		
		case 2:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f);
			break;
		
		case 3:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f);
			break;
		
		case 4:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f);
			break;
		
		case 5:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f);
			break;
		
		case 6:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f);
			break;
		
		case 7:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f);
			break;
		
		case 8:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f);
			break;
		
		case 9:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f);
			break;
		
		case 10:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f);
			break;
		
		case 11:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f);
			break;
		
		case 12:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f);
			break;
		
		case 13:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f);
			break;
		
		case 14:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f);
			break;
		
		case 15:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f);
			break;
		
		case 16:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f);
			break;
		
		case 17:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f);
			break;
		
		case 18:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f);
			break;
		
		case 19:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 20:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 21:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f);
			break;
		
		case 22:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f);
			break;
		
		case 23:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f);
			break;
		
		case 24:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f);
			break;
		
		case 25:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f);
			break;
		
		case 26:
			uVar0 = unk_0x30E163ABABA9A9B9(uLocal_573, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f);
			break;
	}
	return uVar0;
}

int func_150()
{
	if (unk_0xAFC34601EB143C10(uLocal_573, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f))
	{
		return 0;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f))
	{
		return 1;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f))
	{
		return 2;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f))
	{
		return 3;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f))
	{
		return 4;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f))
	{
		return 5;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f))
	{
		return 6;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f))
	{
		return 7;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f))
	{
		return 8;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f))
	{
		return 9;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f))
	{
		return 10;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f))
	{
		return 11;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f))
	{
		return 12;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f))
	{
		return 13;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f))
	{
		return 14;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f))
	{
		return 15;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f))
	{
		return 16;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f))
	{
		return 17;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f))
	{
		return 18;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 19;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 20;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f))
	{
		return 21;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f))
	{
		return 22;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f))
	{
		return 23;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f))
	{
		return 24;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f))
	{
		return 25;
	}
	else if (unk_0xAFC34601EB143C10(uLocal_573, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f))
	{
		return 26;
	}
	return -1;
}

void func_151(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 0;
			break;
		
		case 1:
			*uParam0 = 1;
			break;
		
		case 2:
			*uParam0 = 2;
			break;
		
		case 3:
			*uParam0 = 3;
			break;
		
		case 4:
			*uParam0 = 4;
			break;
		
		case 5:
			*uParam0 = 5;
			break;
		
		case 6:
			*uParam0 = 19;
			break;
		
		case 7:
			*uParam0 = 20;
			break;
		
		case 8:
			*uParam0 = 21;
			break;
		
		case 9:
			*uParam0 = 32;
			break;
		
		case 10:
			*uParam0 = 36;
			break;
		
		case 11:
			*uParam0 = 40;
			break;
		
		case 12:
			*uParam0 = 41;
			break;
		
		case 13:
			*uParam0 = 43;
			break;
		
		case 14:
			*uParam0 = 44;
			break;
		
		case 15:
			*uParam0 = 45;
			break;
		
		case 16:
			*uParam0 = 46;
			break;
		
		case 17:
			*uParam0 = 47;
			break;
		
		case 18:
			*uParam0 = 48;
			break;
		
		case 19:
			*uParam0 = 49;
			break;
		
		case 20:
			*uParam0 = 50;
			break;
		
		case 21:
			*uParam0 = 53;
			break;
		
		case 22:
			*uParam0 = 54;
			break;
		
		case 23:
			*uParam0 = 55;
			break;
		
		case 24:
			*uParam0 = 56;
			break;
		
		case 25:
			*uParam0 = 57;
			break;
	}
}

int func_152()
{
	int iVar0;
	
	if (func_155(unk_0x93E99A2DBCBA9CFA(), 150) == 2)
	{
		return 0;
	}
	if (func_59(unk_0x93E99A2DBCBA9CFA()))
	{
		return 1;
	}
	if (func_154(1))
	{
		iVar0 = func_153();
		if (iVar0 != func_39())
		{
			if (func_59(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_153()
{
	return Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_10;
}

bool func_154(bool bParam0)
{
	return func_57(unk_0x93E99A2DBCBA9CFA(), bParam0);
}

int func_155(int iParam0, int iParam1)
{
	if (func_30(iParam0) == iParam1)
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_474;
	}
	return -1;
}

int func_156()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (func_155(unk_0x93E99A2DBCBA9CFA(), 150) == 2)
	{
		return 1;
	}
	if (func_59(unk_0x93E99A2DBCBA9CFA()))
	{
		return 1;
	}
	if (func_154(1))
	{
		iVar0 = func_153();
		if (iVar0 != func_39())
		{
			if (func_59(iVar0))
			{
				return 1;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xADCF72047FEB806E(iVar1);
		if (func_38(iVar2, 0, 1))
		{
			if (iVar2 != unk_0x93E99A2DBCBA9CFA())
			{
				if (func_154(1))
				{
					if (func_158(unk_0x93E99A2DBCBA9CFA(), iVar2))
					{
						if (func_59(iVar2))
						{
							return 1;
						}
					}
				}
				if (func_157(unk_0xF2CFBB1105511E1A(unk_0x93E99A2DBCBA9CFA()), unk_0xF2CFBB1105511E1A(iVar2)))
				{
					uVar3 = unk_0x95DC39736F6748E3(unk_0xF2CFBB1105511E1A(iVar2), 0);
					if (unk_0xA66E176E5772E965(uVar3, -1, 0) == unk_0xF2CFBB1105511E1A(iVar2))
					{
						if (func_59(iVar2))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_157(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0) && unk_0x7DE17ACDD8BA2642(uParam1))
	{
		if (!unk_0x055111B11E6624FD(iParam0, 0) && !unk_0x055111B11E6624FD(iParam1, 0))
		{
			if (unk_0x3C3D6D026CF7F51B(iParam0, 0) && unk_0x3C3D6D026CF7F51B(iParam1, 0))
			{
				iVar0 = unk_0x95DC39736F6748E3(iParam0, 0);
				iVar1 = unk_0x95DC39736F6748E3(iParam1, 0);
				if (unk_0x7DE17ACDD8BA2642(iVar0) && unk_0x7DE17ACDD8BA2642(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_158(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_159(iParam0);
	if (!iVar0 == func_39())
	{
		if (iVar0 == func_159(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_159(int iParam0)
{
	if (iParam0 != func_39())
	{
		return Global_1894573[iParam0 /*608*/].f_10;
	}
	return func_39();
}

int func_160()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			return 1;
		}
	}
	if (func_167())
	{
		return 1;
	}
	if (Global_2696915)
	{
		return 1;
	}
	if (func_166())
	{
		return 1;
	}
	if (func_165(159))
	{
		if (!func_164())
		{
			return 1;
		}
	}
	if (func_165(157))
	{
		return 1;
	}
	if (!unk_0x67EBFCF2F78761B9())
	{
		return 1;
	}
	if (func_161() != 0)
	{
		if (unk_0x24B651D85CCE5EB4(func_161()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_161()
{
	switch (func_163())
	{
		case 0:
			return func_162();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_162()
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_163()
{
	return Global_32163;
}

bool func_164()
{
	return Global_2683862.f_698;
}

int func_165(int iParam0)
{
	if (unk_0x36D3321E138A43F0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_166()
{
	return Global_2694524;
}

bool func_167()
{
	return Global_2683862.f_693;
}

void func_168()
{
	if (unk_0x3F6A5B7803413D6A(false, 0) != 5)
	{
		if (func_175(5, 0, 1))
		{
			if (unk_0x9E6BB98E57150635(0) <= 5)
			{
				unk_0xE5CBFFB5DE87586F(5);
			}
		}
	}
	if (unk_0x6D465F7CB16AFBB2(false, 0) != 3)
	{
		if (func_169(3, 0, 1))
		{
			if (unk_0xCACA703588E52B18(0) <= 3)
			{
				unk_0x08914D2D4A110A6F(3);
			}
		}
	}
}

bool func_169(int iParam0, bool bParam1, bool bParam2)
{
	return func_170(1, iParam0, 1, bParam1, bParam2);
}

int func_170(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1666891, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_174(iParam0) - func_173(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_173(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_174(iParam0) - func_172(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_173(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_174(iParam0) - func_173(iParam0, 1));
		}
		if (!bParam4 && Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/] != 3)
		{
			iVar1 = (iVar1 - func_171(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_171(int iParam0)
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

int func_172(int iParam0)
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

int func_173(int iParam0, bool bParam1)
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

int func_174(int iParam0)
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

bool func_175(int iParam0, bool bParam1, bool bParam2)
{
	return func_170(0, iParam0, 1, bParam1, bParam2);
}

void func_176()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_177()
{
	int iVar0;
	
	if (unk_0xA26A9A07F761D8F8())
	{
		if (unk_0xE85391CF212DE622())
		{
			if (func_125())
			{
				func_126();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xCE4AAA035282336C(Local_382.f_172[iVar0]))
		{
			unk_0x45533C09A6C9B409(&(Local_382.f_172[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_570)
	{
		unk_0x508B7A54DEE39001(5);
		iLocal_570 = 0;
	}
	Global_1962913 = 0;
	func_179();
	func_178();
}

void func_178()
{
	unk_0x675D9C12C73D3DE7();
}

void func_179()
{
	if (!Local_382.f_176)
	{
		return;
	}
	if (unk_0x0CBB7C273DED26E7(joaat("s_m_y_marine_01")))
	{
		unk_0xE0A291F406691F03(joaat("s_m_y_marine_01"));
	}
	if (unk_0x0CBB7C273DED26E7(joaat("lazer")))
	{
		unk_0xE0A291F406691F03(joaat("lazer"));
	}
	if (unk_0x0CBB7C273DED26E7(joaat("s_m_y_pilot_01")))
	{
		unk_0xE0A291F406691F03(joaat("s_m_y_pilot_01"));
	}
}

void func_180(struct<21> Param0)
{
	func_184(func_185(Param0.f_0), Param0);
	func_182(0, -1, 0);
	unk_0xE5CBFFB5DE87586F(5);
	unk_0x08914D2D4A110A6F(3);
	unk_0xAC5E62CB7808A363(&Local_98, 27, 0);
	unk_0x10BF12101F9D80A4(&Local_125, 257, 0);
	unk_0xF1440897111F3111(0);
	if (!func_181())
	{
		func_177();
	}
	if (unk_0x55EEDBBFDC6E810F(3))
	{
		func_177();
	}
	Global_2793044.f_6853 = 0;
}

int func_181()
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
		if (func_167())
		{
			return 0;
		}
		if (func_165(157))
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

int func_182(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xA1089192E8AE61F4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_178();
			}
			else
			{
				return 0;
			}
		}
		if (!func_183(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA26A9A07F761D8F8())
				{
					if (!bParam2)
					{
						func_178();
					}
					else
					{
						return 0;
					}
				}
				if (func_167())
				{
					if (!bParam2)
					{
						func_178();
					}
					else
					{
						return 0;
					}
				}
				if (func_165(157))
				{
					if (!bParam2)
					{
						func_178();
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
					func_178();
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
				func_178();
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
			func_178();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_183(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

void func_184(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		func_178();
	}
	unk_0xCF50389093DECE87(uParam0, 0, Param1.f_16);
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 173:
			return 32;
		
		case 174:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 185:
			return 32;
		
		case 186:
			return 32;
		
		case 175:
			return 32;
		
		case 176:
			return 32;
		
		case 180:
			return 32;
		
		case 178:
			return 32;
		
		case 179:
			return 32;
		
		case 183:
			return 32;
		
		case 184:
			return 32;
		
		case 181:
			return 32;
		
		case 182:
			return 32;
		
		case 187:
			return 32;
		
		case 188:
			return 32;
		
		case 189:
			return 32;
		
		case 190:
			return 32;
		
		case 191:
			return 2;
		
		case 196:
			return 1;
		
		case 192:
			return 2;
		
		case 193:
			return 4;
		
		case 194:
			return 2;
		
		case 195:
			return 2;
		
		case 177:
			return 1;
		
		case 197:
			return 2;
		
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
			return 0;
		
		case 219:
			return 1;
		
		case 204:
			return 4;
		
		case 207:
			return 4;
		
		case 208:
			return 1;
		
		case 209:
			return 1;
		
		case 215:
			return 1;
		
		case 211:
			return 2;
		
		case 216:
			return 1;
		
		case 212:
			return 1;
		
		case 210:
			return 2;
		
		case 213:
			return 8;
		
		case 214:
			return 8;
		
		case 217:
			return 1;
		
		case 218:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 205:
			return 16;
		
		case 206:
			return 32;
		
		default:
	}
	switch (func_186(func_187(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_186(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		default:
	}
	return -1;
}

int func_187(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 191:
			return 15;
		
		case 198:
			return 8;
		
		case 192:
			return 14;
		
		case 196:
			return 122;
		
		case 199:
			return 1;
		
		case 197:
			return 5;
		
		case 200:
			return 6;
		
		case 193:
			return 11;
		
		case 201:
			return 0;
		
		case 202:
			return 2;
		
		case 194:
			return 13;
		
		case 203:
			return 3;
		
		case 195:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		default:
	}
	if (bParam1)
	{
	}
	return 312;
}

