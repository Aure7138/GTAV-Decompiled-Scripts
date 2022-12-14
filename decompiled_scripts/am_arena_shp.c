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
	int iLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	struct<67> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2147483647 } ;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	struct<2> Local_107 = { 0, 0 } ;
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
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 1;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	int iLocal_153 = 0;
	struct<34> ScriptParam_0 = { 2147483647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_14 = -1;
	fLocal_15 = 0.001f;
	sLocal_18 = "NULL";
	if (unk_0xA26A9A07F761D8F8())
	{
		func_51(ScriptParam_0);
	}
	else
	{
		func_49();
	}
	while (true)
	{
		func_48();
		if (Global_262145.f_24076)
		{
			func_49();
		}
		if (func_40())
		{
			func_49();
		}
		func_1();
	}
}

void func_1()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (Global_4536658)
	{
		if (Global_4540733[iLocal_21 /*12*/].f_11)
		{
			func_37(iLocal_21);
			Global_4540733[iLocal_21 /*12*/].f_11 = 0;
		}
	}
	if (Local_22.f_66.f_8)
	{
		func_17(Local_22.f_66);
	}
	if ((Local_22.f_66.f_2 == 1 && Global_4536659) && func_16(&Local_22))
	{
		bVar0 = true;
	}
	if (Global_4535172[iLocal_21 /*85*/].f_66 == 2147483647 && Local_22.f_66.f_12)
	{
		if (bVar0)
		{
			func_15(0);
		}
		func_49();
	}
	if (Local_22.f_66.f_18 > 0 && !func_14())
	{
		iVar2 = (1000 / unk_0xF2DB717A73826179((unk_0x290D4E218346D595() * 1000f)));
		if ((unk_0xE16824A2A0B2A6D8() - Local_22.f_66.f_18) > iVar2 * 10)
		{
			Local_22.f_66.f_18 = -1;
		}
	}
	if (((func_13() && Local_22.f_66.f_2 == 1) && Local_22.f_66.f_13) && !Local_22.f_66.f_12)
	{
		if (unk_0xE16824A2A0B2A6D8() - Local_22.f_66.f_14) >= func_12(Local_22.f_66.f_5)
		{
			iVar1 = 0;
			if (!unk_0x366262A55539062C(func_11()) || unk_0xF0773A1CAE4717D9())
			{
				iVar1 = 1;
			}
			else if (Local_22.f_66.f_2 != 1)
			{
				iVar1 = 2;
			}
			else if (Local_22.f_66.f_5 != 1 && !unk_0x8C722BABE4726C11(&(Local_22.f_66), Local_22.f_66.f_6, Local_22.f_66.f_4, Local_22.f_66.f_7, Local_22.f_66.f_1, Local_22.f_66.f_10))
			{
				iVar1 = 3;
			}
			else if (!unk_0xE0AAA58EEB49D003(Local_22.f_66))
			{
				iVar1 = 4;
			}
			else
			{
				Local_22.f_66.f_12 = 1;
				Global_4535172[iLocal_21 /*85*/].f_66.f_12 = 1;
				Global_4535172[iLocal_21 /*85*/].f_66 = Local_22.f_66;
			}
			if (iVar1 != 0)
			{
				func_7(iLocal_21);
				func_49();
			}
		}
	}
	if (!iLocal_153)
	{
		if (bVar0)
		{
			func_5(&Local_107, 0);
			iLocal_153 = 1;
		}
	}
	else if (bVar0)
	{
		StringCopy(&(Local_107.f_1), "HUD_TRANSP", 64);
		func_2(&Local_107, func_4(&Local_107));
	}
	else
	{
		iLocal_153 = 0;
		func_15(0);
	}
}

void func_2(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_3(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0xCB4985E4432AAAC3(&(uParam0->f_1));
			unk_0x64C50E40AA09A6B5(uParam0->f_33);
			unk_0x64C50E40AA09A6B5(uParam0->f_34);
			unk_0x287337934DFDC8C3(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0xCB4985E4432AAAC3(&(uParam0->f_1));
			unk_0x64C50E40AA09A6B5(uParam0->f_33);
			unk_0x287337934DFDC8C3(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0xCB4985E4432AAAC3(&(uParam0->f_1));
			unk_0x76B34CBB6F5FA1BB(&(uParam0->f_17));
			unk_0x64C50E40AA09A6B5(uParam0->f_33);
			unk_0x64C50E40AA09A6B5(uParam0->f_34);
			unk_0x287337934DFDC8C3(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0xCB4985E4432AAAC3(&(uParam0->f_1));
			unk_0x76B34CBB6F5FA1BB(&(uParam0->f_17));
			unk_0x287337934DFDC8C3(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0xCB4985E4432AAAC3(&(uParam0->f_1));
			unk_0x610EBC15DA88FA9D(uParam0->f_33, 70);
			unk_0x287337934DFDC8C3(uParam0->f_41);
		}
		else
		{
			unk_0xCB4985E4432AAAC3(&(uParam0->f_1));
			unk_0x287337934DFDC8C3(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_3(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_4(var uParam0)
{
	return uParam0->f_35;
}

void func_5(var uParam0, bool bParam1)
{
	func_6(uParam0);
	if (bParam1)
	{
		func_15(0);
	}
	uParam0->f_35 = 1;
}

void func_6(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_7(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_10(iParam0))
		{
			if (!bVar0)
			{
				unk_0xD327B45EF800DBCD();
			}
		}
		else if (!bVar0)
		{
			unk_0xCF052ECECC8D7067(Global_4535172[iParam0 /*85*/].f_66);
		}
		func_8(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_8(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_9(&(uParam0->f_14));
	func_9(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_9(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_10(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

var func_11()
{
	return Global_1574918;
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_4536661;
			break;
		
		case 1:
			return Global_4536660;
			break;
	}
	return 0;
}

int func_13()
{
	if (unk_0xCC17806DB0C41C19())
	{
		return unk_0xF6919DB2626A28C5();
	}
	return 0;
}

bool func_14()
{
	return Global_100733.f_388 > 0;
}

void func_15(bool bParam0)
{
	unk_0x5E49B93D34BD8FC0();
	if (bParam0)
	{
		unk_0xDAB6A70C3E31CFEB();
	}
}

int func_16(var uParam0)
{
	if (uParam0->f_66.f_4 == 2043854386)
	{
		return 0;
	}
	return 1;
}

void func_17(var uParam0)
{
	struct<7> Var0;
	int iVar7;
	bool bVar8;
	int iVar9;
	struct<67> Var10;
	bool bVar95;
	var uVar96;
	int iVar101;
	int iVar102;
	int iVar103;
	
	iVar7 = 0;
	bVar8 = false;
	if (!func_13())
	{
		iVar7 = 1;
		Var0.f_0 = uParam0;
		Var0.f_2 = 0;
	}
	if (iVar7 || unk_0x11DE375695504B75(1, uParam0, &Var0, 7))
	{
		Var10.f_66 = 2147483647;
		iVar9 = func_36(Var0.f_0, &Var10);
		if (iVar9 != -1)
		{
			Global_4535172[iVar9 /*85*/].f_66.f_8 = 0;
			if (Global_4535172[iVar9 /*85*/].f_66.f_18 == 0)
			{
				Global_4535172[iVar9 /*85*/].f_66.f_18 = unk_0xE16824A2A0B2A6D8();
			}
		}
		bVar95 = true;
		if (iVar9 != -1)
		{
			Global_4535172[iVar9 /*85*/].f_66.f_17 = Var0.f_2;
		}
		else
		{
			Global_4536646.f_4 = Var0.f_2;
			Global_4536646.f_6 = Var0.f_3;
			Global_4536646.f_7 = Var0.f_4;
			Global_4536646.f_8 = Var0.f_5;
			Global_4536646.f_9 = Var0.f_6;
			if (Global_4536646.f_10 == 0)
			{
				Global_4536646.f_10 = unk_0xE16824A2A0B2A6D8();
			}
		}
		switch (Var0.f_2)
		{
			case 0:
				if (iVar9 != -1)
				{
					Global_4540733[iVar9 /*12*/] = Global_4535172[iVar9 /*85*/].f_66.f_3;
					Global_4540733[iVar9 /*12*/].f_1 = Global_4535172[iVar9 /*85*/].f_66.f_7;
					Global_4540733[iVar9 /*12*/].f_2 = Global_4535172[iVar9 /*85*/].f_66.f_4;
					Global_4540733[iVar9 /*12*/].f_3 = Global_4535172[iVar9 /*85*/].f_66.f_1;
					Global_4540733[iVar9 /*12*/].f_5 = Var0.f_1;
					Global_4540733[iVar9 /*12*/].f_6 = Var0.f_3;
					Global_4540733[iVar9 /*12*/].f_7 = Var0.f_4;
					Global_4540733[iVar9 /*12*/].f_8 = Var0.f_5;
					Global_4540733[iVar9 /*12*/].f_9 = Var0.f_6;
					Global_4540733[iVar9 /*12*/].f_11 = 1;
					Global_4535172[iVar9 /*85*/].f_66.f_2 = 2;
					if (Global_4535172[iVar9 /*85*/].f_66.f_11 & 4 != 0)
					{
						func_32(iVar9, bVar95);
					}
					else if (func_13())
					{
						if (bVar95)
						{
							unk_0x5FC5FA7790930BE8(Global_4535172[iVar9 /*85*/].f_66, &uVar96);
						}
					}
				}
				break;
			
			default:
				if (iVar9 != -1)
				{
					Global_4535172[iVar9 /*85*/].f_66.f_2 = 3;
					if ((Global_4535172[iVar9 /*85*/].f_66.f_11 & 1 != 0 && Global_4535172[iVar9 /*85*/].f_66.f_9 < 2) && func_31(Var0.f_2))
					{
						if (func_10(iVar9))
						{
							if (func_24())
							{
								Global_4535172[iVar9 /*85*/].f_66.f_2 = 1;
								Global_4535172[iVar9 /*85*/].f_66.f_9++;
							}
							else if (Global_4535172[iVar9 /*85*/].f_66.f_11 & 2 != 0)
							{
								Global_4536676 = Global_4535172[iVar9 /*85*/].f_66.f_4;
								Global_4536678 = Global_4535172[iVar9 /*85*/].f_66.f_6;
								Global_4536679 = Var0.f_2;
								Global_4536677 = Global_4535172[iVar9 /*85*/].f_66.f_1;
								if (func_23(Global_4536676) && func_13())
								{
									if (!func_22(Global_4535172[iVar9 /*85*/].f_66))
									{
										iVar101 = func_21();
										Global_4536533[iVar101 /*7*/] = Global_4535172[iVar9 /*85*/].f_66;
										Global_4536533[iVar101 /*7*/].f_2 = Global_4536676;
										Global_4536533[iVar101 /*7*/].f_3 = Global_4536678;
										Global_4536533[iVar101 /*7*/].f_1 = Global_4536677;
										Global_4536533[iVar101 /*7*/].f_4 = unk_0x0DB7F8294D73598B();
									}
								}
								else
								{
									Global_4536673 = 1;
								}
							}
						}
						else if (func_20(&iVar9))
						{
							Global_4535172[iVar9 /*85*/].f_66.f_2 = 1;
							Global_4535172[iVar9 /*85*/].f_66.f_9++;
						}
						else if (Global_4535172[iVar9 /*85*/].f_66.f_11 & 2 != 0)
						{
							Global_4536676 = Global_4535172[iVar9 /*85*/].f_66.f_4;
							Global_4536678 = Global_4535172[iVar9 /*85*/].f_66.f_6;
							Global_4536679 = Var0.f_2;
							Global_4536677 = Global_4535172[iVar9 /*85*/].f_66.f_1;
							if (func_23(Global_4536676) && func_13())
							{
								if (!func_22(Global_4535172[iVar9 /*85*/].f_66))
								{
									iVar102 = func_21();
									Global_4536533[iVar102 /*7*/] = Global_4535172[iVar9 /*85*/].f_66;
									Global_4536533[iVar102 /*7*/].f_2 = Global_4536676;
									Global_4536533[iVar102 /*7*/].f_3 = Global_4536678;
									Global_4536533[iVar102 /*7*/].f_1 = Global_4536677;
									Global_4536533[iVar102 /*7*/].f_4 = unk_0x0DB7F8294D73598B();
								}
							}
							else
							{
								Global_4536673 = 1;
							}
						}
					}
					else if (Global_4535172[iVar9 /*85*/].f_66.f_11 & 2 != 0)
					{
						Global_4536676 = Global_4535172[iVar9 /*85*/].f_66.f_4;
						Global_4536678 = Global_4535172[iVar9 /*85*/].f_66.f_6;
						Global_4536679 = Var0.f_2;
						Global_4536677 = Global_4535172[iVar9 /*85*/].f_66.f_1;
						if ((func_23(Global_4536676) && func_13()) && func_31(Var0.f_2))
						{
							if (!func_22(Global_4535172[iVar9 /*85*/].f_66))
							{
								iVar103 = func_21();
								Global_4536533[iVar103 /*7*/] = Global_4535172[iVar9 /*85*/].f_66;
								Global_4536533[iVar103 /*7*/].f_2 = Global_4536676;
								Global_4536533[iVar103 /*7*/].f_3 = Global_4536678;
								Global_4536533[iVar103 /*7*/].f_1 = Global_4536677;
								Global_4536533[iVar103 /*7*/].f_4 = unk_0x0DB7F8294D73598B();
							}
						}
						else
						{
							Global_4536673 = 1;
						}
					}
					if (Global_4535172[iVar9 /*85*/].f_66.f_2 == 3)
					{
						if (bVar8)
						{
							func_19(1, Global_4535172[iVar9 /*85*/].f_66.f_4);
							Global_4536673 = 0;
						}
						if (Global_4535172[iVar9 /*85*/].f_66.f_11 & 4 != 0)
						{
							func_18(iVar9, Global_4535172[iVar9 /*85*/].f_66.f_4, Global_4535172[iVar9 /*85*/].f_66.f_10, Global_4535172[iVar9 /*85*/].f_66.f_1, Var0.f_2);
						}
					}
				}
				break;
			}
	}
}

void func_18(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xECDAB41968FF21A8(&(Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_7(iParam0);
	}
}

void func_19(int iParam0, var uParam1)
{
	Global_2697013 = uParam1;
	Global_2697012 = iParam0;
}

int func_20(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (*iParam0 == -1 || func_10(*iParam0))
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x366262A55539062C(func_11()) || unk_0xF0773A1CAE4717D9())
		{
			Global_4536674 = 1;
			return 0;
		}
		if (Global_2695819)
		{
			if (Global_4535172[*iParam0 /*85*/].f_66.f_6 == 1067618600 || Global_4535172[*iParam0 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4536675 = 1;
				return 0;
			}
		}
	}
	if ((bVar0 || iVar1) || unk_0xE0AAA58EEB49D003(Global_4535172[*iParam0 /*85*/].f_66))
	{
		if (iVar1 && !bVar0)
		{
		}
		Global_4535172[*iParam0 /*85*/].f_66.f_13 = 1;
		Global_4535172[*iParam0 /*85*/].f_66.f_12 = 0;
		Global_4535172[*iParam0 /*85*/].f_66.f_14 = unk_0xE16824A2A0B2A6D8();
		if (bVar0)
		{
			if (*iParam0 != -1)
			{
				Global_4535172[*iParam0 /*85*/].f_66.f_8 = 1;
				Global_4535172[*iParam0 /*85*/].f_66.f_12 = 1;
			}
		}
		Global_4535172[*iParam0 /*85*/].f_66.f_18 = 0;
		return 1;
	}
	return 0;
}

int func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = Global_4536533;
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (Global_4536533[iVar0 /*7*/] != 0 && Global_4536533[iVar0 /*7*/] != 2147483647)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= iVar2)
	{
		return 0;
	}
	return iVar1;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = Global_4536533;
	if (iParam0 == 2147483647 || iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (Global_4536533[iVar0 /*7*/] == iParam0)
		{
			return 1;
		}
		if (Global_4536533[iVar0 /*7*/].f_6 == iParam0)
		{
			Global_4536533[iVar0 /*7*/].f_4 = unk_0x0DB7F8294D73598B();
			Global_4536533[iVar0 /*7*/].f_6 = 2147483647;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_23(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 1780666425 || iParam0 == -2043695058) || iParam0 == -1586170317) || iParam0 == 393059668) || iParam0 == -1027218631) || iParam0 == 1048226110) || iParam0 == 569170531) || iParam0 == -856006867) || iParam0 == 848090538) || iParam0 == -293060240) || iParam0 == -47546905) || iParam0 == 463142405) || iParam0 == 1550217370) || iParam0 == -101307780) || iParam0 == 1052472386) || iParam0 == -2130199671) || iParam0 == -1227654538) || iParam0 == -876012764) || iParam0 == -722894325) || iParam0 == 1407278493) || iParam0 == -1579394494) || iParam0 == 1179783540) || iParam0 == 923419301) || iParam0 == -308826175) || iParam0 == 603298940) || iParam0 == -12619854) || iParam0 == -311112675) || iParam0 == 870439158) || iParam0 == -974288740) || iParam0 == -4138654) || iParam0 == -1180954122) || iParam0 == -1918051016) || iParam0 == 844330594) || iParam0 == 1934825517) || iParam0 == 1852024236) || iParam0 == 2099238988) || iParam0 == 1952643559) || iParam0 == -1172900789) || iParam0 == -2015399333) || iParam0 == -1574795641) || iParam0 == -961034881) || iParam0 == 1135468152) || iParam0 == 1265272476) || iParam0 == -634726636) || iParam0 == 696556762) || iParam0 == 443347049) || iParam0 == 403506509) || iParam0 == -883876414) || iParam0 == -1064150715) || iParam0 == -1387253055) || iParam0 == -716963152) || iParam0 == 1138089938) || iParam0 == -561012053) || iParam0 == 1240683675) || iParam0 == 1241904665) || iParam0 == -494565059) || iParam0 == 827308208) || iParam0 == -1857685192) || iParam0 == 1698417709) || iParam0 == -2017925037) || iParam0 == 1057653594) || iParam0 == 1810506918) || iParam0 == 451427308) || iParam0 == 824622151) || iParam0 == 1253978276) || iParam0 == -1576080766) || iParam0 == 1508411869) || iParam0 == 1428501742) || iParam0 == -1918967151) || iParam0 == 1261538664) || iParam0 == 1180397655) || iParam0 == 1414674366) || iParam0 == 261460130) || iParam0 == -2027658376) || iParam0 == 1668610896) || iParam0 == -2032529561) || iParam0 == -1224479447) || iParam0 == -319306689) || iParam0 == -466527264) || iParam0 == 1925965142) || iParam0 == 592152676) || iParam0 == 2035612943) || iParam0 == 1568659720) || iParam0 == 1220095570) || iParam0 == 2050320631) || iParam0 == 592672421) || iParam0 == 1775876058) || iParam0 == -842062976) || iParam0 == -518651910) || iParam0 == 14658715) || iParam0 == -604793592) || iParam0 == -823426392) || iParam0 == -1401862980) || iParam0 == -173354274) || iParam0 == 409533976) || iParam0 == -1472522337) || iParam0 == 542574408) || iParam0 == -1261799063) || iParam0 == 784631574) || iParam0 == -2027479156) || iParam0 == -837690641) || iParam0 == -1029672338) || iParam0 == -1503749970) || iParam0 == -1843409092) || iParam0 == 1669058563) || iParam0 == 2102747615) || iParam0 == 2030771998) || iParam0 == 1708747007) || iParam0 == 645293860) || iParam0 == -818859193) || iParam0 == 300796227) || iParam0 == -1999832346) || iParam0 == 1058055395) || iParam0 == -321151125) || iParam0 == 2078731875) || iParam0 == 1280785534) || iParam0 == -1878824774) || iParam0 == 247992227) || iParam0 == -229237358) || iParam0 == -1123183389) || iParam0 == 1814197076) || iParam0 == 713955548) || iParam0 == -2026544524) || iParam0 == -719580138) || iParam0 == -163417439) || iParam0 == -550417574) || iParam0 == 208223429) || iParam0 == -1433071892) || iParam0 == 761999406) || iParam0 == -1101941763) || iParam0 == 1748245957) || iParam0 == 1036772696) || iParam0 == -1384648535) || iParam0 == -800037808) || iParam0 == -695852120) || iParam0 == 77355315) || iParam0 == 2097889166) || iParam0 == 1707592130) || iParam0 == 1628412596) || iParam0 == 883337077) || iParam0 == -1274418755) || iParam0 == -1853979468) || iParam0 == -239888995) || iParam0 == 1163066566) || iParam0 == -955087020) || iParam0 == 1874391251) || iParam0 == 1633116913) || iParam0 == 668586600) || iParam0 == 15168061) || iParam0 == 590289134) || iParam0 == 99792878) || iParam0 == 1866258778) || iParam0 == -178394060) || iParam0 == 409592287) || iParam0 == 593836803) || iParam0 == 1973036520) || iParam0 == 2063456538) || iParam0 == -728008329) || iParam0 == 119239868)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_30();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x366262A55539062C(func_11()) || unk_0xF0773A1CAE4717D9())
		{
			if (func_29(Global_4535172[iVar2 /*85*/].f_66.f_6, Global_4535172[iVar2 /*85*/].f_66.f_4, Global_4535172[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4536674 = 1;
			}
			return 0;
		}
		if (Global_2695819)
		{
			if (Global_4535172[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4535172[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4536675 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_28(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0xE0AAA58EEB49D003(iVar3))
		{
			Global_4535172[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4535172[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4535172[iVar2 /*85*/].f_66.f_14 = unk_0xE16824A2A0B2A6D8();
			if (bVar0)
			{
				Global_4535172[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4535172[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4535172[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_25(Global_4535172[iVar2 /*85*/], iVar2);
			}
			Global_4536659 = 1;
			return 1;
		}
	}
	return 0;
}

void func_25(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -444617715;
	Var0.f_1 = unk_0x93E99A2DBCBA9CFA();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_27(Var0.f_1);
	if ((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_26();
		unk_0x46F55A5B9F053761(1, &Var0, 36, iVar36);
	}
}

void func_26()
{
	unk_0x3EC562D93709C894("AM_ARENA_SHP");
}

var func_27(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xECDAB41968FF21A8(&uVar0, iParam0);
	}
	return uVar0;
}

int func_28(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
			case 14658715:
			case -604793592:
			case -823426392:
			case -1401862980:
			case -173354274:
			case 409533976:
			case -1472522337:
			case 542574408:
			case -1261799063:
			case 784631574:
			case -2027479156:
			case -837690641:
			case -1029672338:
			case -1503749970:
			case -1843409092:
			case 1669058563:
			case 2102747615:
			case 2030771998:
			case 1708747007:
			case 645293860:
			case -818859193:
			case 300796227:
			case -1999832346:
			case 1058055395:
			case -321151125:
			case 2078731875:
			case 1280785534:
			case -1878824774:
			case 247992227:
			case -229237358:
			case -1123183389:
			case 1814197076:
			case 713955548:
			case -2026544524:
			case -719580138:
			case -163417439:
			case -550417574:
			case 208223429:
			case -1433071892:
			case 761999406:
			case -1101941763:
			case 1748245957:
			case 1036772696:
			case -1384648535:
			case -800037808:
			case -695852120:
			case 77355315:
			case 2097889166:
			case 1707592130:
			case 1628412596:
			case 883337077:
			case -1274418755:
			case -1853979468:
			case -239888995:
			case 1163066566:
			case -955087020:
			case 1874391251:
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_30()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_28(iVar0) != 2147483647)
		{
			if (func_10(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_31(int iParam0)
{
	if ((iParam0 >= 500 && iParam0 <= 599) || iParam0 == 408)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<10> Var6;
	int iVar16;
	struct<3> Var17;
	var uVar20;
	
	if (iParam0 == -1)
	{
		return;
	}
	unk_0x63A4A2A61A346797(func_28(iParam0));
	if (Global_4535172[iParam0 /*85*/].f_66.f_10 == 1)
	{
	}
	else if (Global_4535172[iParam0 /*85*/].f_66.f_10 == 4)
	{
		iVar0 = 1;
	}
	else if (Global_4535172[iParam0 /*85*/].f_66.f_10 == 2)
	{
		iVar1 = 1;
	}
	Var6 = -1;
	Var6.f_1 = -1;
	Var6.f_2 = -1;
	Var6.f_3 = -1;
	Var6.f_4 = -1;
	Var6.f_5 = -1;
	Var6.f_6 = -1;
	Var6.f_7 = -1;
	Var6.f_8 = -1;
	Var6.f_9 = -1;
	func_35(&Var6);
	switch (Global_4535172[iParam0 /*85*/].f_66.f_4)
	{
		case 631654431:
			unk_0x763C22EA2115CE16(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case -180141073:
			unk_0x17E677BC555ACA6B(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14), iVar1, iVar0, 0);
			break;
		
		case 68030260:
			unk_0x91750CC10F9AAC70(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], &(Global_4535172[iParam0 /*85*/].f_14), iVar1, iVar0);
			break;
		
		case -982394051:
			unk_0x95E0D7F175BF7B6B(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0);
			break;
		
		case 454359403:
			unk_0xEB243C4A81B0227D(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, Global_4535172[iParam0 /*85*/].f_2, iVar0);
			break;
		
		case -1586170317:
			unk_0x1E1D1E1D68DD39B5(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_34));
			break;
		
		case 650665123:
			unk_0x37EE530FB5CB98FA(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case 1654961868:
			unk_0x1DC0E583651677AE(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14), iVar1, iVar0);
			break;
		
		case 1182673174:
			unk_0xF56D4A562532EC65(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0);
			break;
		
		case 563463121:
			unk_0x31E14A51C83D4A6F(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1940862352:
			unk_0xB3EEC33E9AB390EA(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), iVar1, iVar0);
			break;
		
		case -1389227906:
			unk_0xB3EEC33E9AB390EA(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), iVar1, iVar0);
			break;
		
		case -516219046:
			unk_0x1A58093BA0FBDDFA(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case -1398318418:
			unk_0xB8A0D4EBFFF3F34E(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_34));
			break;
		
		case 2043854386:
			unk_0x337F802D4D55222A(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case 277665518:
			unk_0x9FA396EFDD52565D(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case -1077156170:
			unk_0xA4E4AB7B246BB4B4(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_34), -1);
			break;
		
		case -96593501:
			unk_0xA4789C8F31F28BE4(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case 742499889:
			unk_0xB028602A9DE34C4F(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 2050093329:
			unk_0x902E7F5EA6F641C7(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1752488069:
			unk_0x2D5A5E4C003023CE(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 634375935:
			unk_0x402AE31D618D5B9D(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case 2115896461:
			unk_0x446798F7495DD7D8(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, func_34(&(Global_1914091[unk_0x93E99A2DBCBA9CFA() /*297*/].f_265)));
			break;
		
		case 797947947:
			unk_0x842B1C5AF61ACDE9(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, func_34(&(Global_1914091[unk_0x93E99A2DBCBA9CFA() /*297*/].f_281)));
			break;
		
		case -1027218631:
			unk_0xF511D6491EEFDEB6(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
			break;
		
		case -47546905:
			unk_0x2B221D0CBCA49F2F(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
			break;
		
		case 291576838:
			unk_0x2AF653A620D7D7B4(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 14, 1, iVar1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 0, 0, 0, iVar0);
			break;
		
		case 1612072658:
			unk_0x43BB1316FFDE3086(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, 0);
			break;
		
		case -990286235:
			unk_0x022F26BC1F7D186B(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14), &(Global_4535172[iParam0 /*85*/].f_14.f_13), 1);
			break;
		
		case 1349151477:
			unk_0x75608F07625A3BF2(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -31156877:
		case -327918414:
		case 550898518:
		case 835976347:
			unk_0x6255901DA61FFDA6(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1186079845:
			unk_0x096377350FDE5108(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1734805203:
			unk_0x69BF04590412824E(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1645229221:
			unk_0x6E4CC2DF4ECC3E1B(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case -585718395:
			unk_0xF2D8B7E30F34379C(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, &Global_4540944);
			break;
		
		case -2129781826:
			unk_0xBCD0BD6B2A87805C(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], iVar1, iVar0);
			break;
		
		case 1941570214:
			unk_0x222F66B91454E01F(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], iVar1, iVar0);
			break;
		
		case 1869490922:
			unk_0xD7623BA4F78C3763(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0);
			break;
		
		case -336803850:
			unk_0xD7623BA4F78C3763(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0);
			break;
		
		case -1412692765:
			unk_0xD7623BA4F78C3763(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0);
			break;
		
		case 618167454:
			unk_0xD7623BA4F78C3763(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0);
			break;
		
		case 980623936:
			unk_0xD7623BA4F78C3763(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0);
			break;
		
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case -664597565:
		case -1100963799:
			unk_0x49D5B8FAB4CA32F5(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_40), &(Global_4535172[iParam0 /*85*/].f_14.f_44), iVar1);
			break;
		
		case 312105838:
			unk_0x1A8D4673028FB15B(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1922554349:
			unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_DESTROY_VEH", &uVar2);
			break;
		
		case -2043695058:
			unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_DISTRACT_COPS", &uVar2);
			break;
		
		case 1780666425:
			unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_PLANE_TAKEDOWN", &uVar2);
			break;
		
		case 1643659499:
			unk_0x837F36B7DB3207B6(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_1, iVar1, iVar0, 0);
			break;
		
		case 1839532116:
			unk_0x38FB1F701131E803(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0);
			break;
		
		case 941287179:
			unk_0xC2531A4C46B7D49C(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_3);
			break;
		
		case -352356931:
			unk_0x82C8D1D96493F78B(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 1948102096:
			unk_0x0EFA00C4FDC0C9FE(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, Global_4535172[iParam0 /*85*/]);
			break;
		
		case -1834046564:
			if (Global_4535172[iParam0 /*85*/].f_66.f_16 == 1)
			{
				iVar16 = 1;
			}
			unk_0xE80C5CBEC787289E(Global_4535172[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, 0, iVar16);
			break;
		
		case 393059668:
			unk_0x9ACCA092BF1DAECB(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
			break;
		
		case -57868256:
			unk_0x0706E3C3521ABA09(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_34), Global_4535172[iParam0 /*85*/].f_4);
			break;
		
		case -1127021384:
			unk_0x3DA76C075D744655(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1564537328:
			unk_0xB3EEC33E9AB390EA(Global_4535172[iParam0 /*85*/].f_66.f_1, "RaceToPoint", 0, 0);
			break;
		
		case -1359375127:
			unk_0x4301840A5D77DA80(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case 283351220:
			unk_0x2AF653A620D7D7B4(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_5, 1, iVar1, &(Global_4535172[iParam0 /*85*/].f_14.f_40), 0, 0, 0, iVar0);
			break;
		
		case -2085313189:
			switch (Global_4535172[iParam0 /*85*/].f_66.f_6)
			{
				case 1067618600:
					unk_0x2AF653A620D7D7B4(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_5, 1, iVar1, &(Global_4535172[iParam0 /*85*/].f_14.f_40), 0, 0, 0, iVar0);
					break;
			}
			break;
		
		case 1704445500:
			unk_0xC43E9B5A9F9874B6(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, &(Global_4535172[iParam0 /*85*/].f_14.f_34), 0, 0);
			break;
		
		case 1620609399:
			unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_DELIVER", &uVar2);
			break;
		
		case 1961641934:
			unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_KILL", &uVar2);
			break;
		
		case 210955503:
			unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_KILL_LIST", &uVar2);
			break;
		
		case -59668082:
			unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_CP_COLLECTION", &uVar2);
			break;
		
		case 1736933716:
			unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_TIME_TRIAL", &uVar2);
			break;
		
		case -1468524125:
			unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_CHALLENGES", &uVar2);
			break;
		
		case 111573502:
			unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_HELI", &uVar2);
			break;
		
		case 1525644423:
			unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_DEAD_DROP", &uVar2);
			break;
		
		case 968073639:
			unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_PENNED_IN", &uVar2);
			break;
		
		case 1577781788:
			unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_PASS_THE_PARCEL", &uVar2);
			break;
		
		case -934465332:
			unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_CRIMINAL_DAMAGE", &uVar2);
			break;
		
		case -1194253122:
			unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HOT_PROPERTY", &uVar2);
			break;
		
		case -212607085:
			unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_KING_OF_THE_HILL", &uVar2);
			break;
		
		case -815546555:
			unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HUNT_THE_BEAST", &uVar2);
			break;
		
		case 1048226110:
			unk_0xF2EAC2D361290FDF(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 569170531:
			unk_0x372B9739C8714A20(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -856006867:
			unk_0x7683BFF07A975DD5(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_8);
			break;
		
		case 208223429:
			unk_0xAC4D157E65A97331(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_9);
			break;
		
		case 848090538:
			unk_0x2E2512FC819510F5(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 665109499:
			unk_0x5BBD758E3DA658A4(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 0, 1);
			break;
		
		case -1330755006:
			unk_0x1FACC5FC19325E73(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 0, 1);
			break;
		
		case 1976384368:
			unk_0x0DC10F26F0647637(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 0, 0);
			break;
		
		case 268924934:
			unk_0xB74CC062C16A230A(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/].f_9);
			break;
		
		case -293060240:
			unk_0xE81393D25A63AAB0(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7);
			break;
		
		case 437291904:
			unk_0xE4D33F13F4C118F3(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_10, Global_4535172[iParam0 /*85*/].f_11, Global_4535172[iParam0 /*85*/].f_12);
			break;
		
		case -135813048:
			unk_0x795D0D6DE247602E(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case 463142405:
			unk_0x9C45376A1294E50D(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_8);
			break;
		
		case 1550217370:
			unk_0x90C555F79ED4E3F1(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -101307780:
			unk_0x9A9E6CDBC9F34AE5(Global_4535172[iParam0 /*85*/].f_66.f_1, 0);
			break;
		
		case 599804707:
			unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, "GB_SALVAGE", &uVar2);
			break;
		
		case 1347433368:
			unk_0x3E57F9C573370AC8(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1052472386:
			unk_0xD9F1B54B70098ED3(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_34));
			break;
		
		case -2130199671:
			unk_0xA4C94984AEC0AF8E(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_34));
			break;
		
		case -1227654538:
			unk_0x234E95F48622ED8C(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_34));
			break;
		
		case -930104477:
			unk_0xF3FB9A322D3D7724(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 1864522104:
			unk_0x099E48D3921DDDE2(Global_4535172[iParam0 /*85*/].f_66.f_1, 0);
			break;
		
		case 215608230:
			unk_0x099E48D3921DDDE2(Global_4535172[iParam0 /*85*/].f_66.f_1, 1);
			break;
		
		case -876012764:
			unk_0xC5DA66D48AEE62EF(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case -722894325:
			unk_0x1AA248FC370C22CA(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 1407278493:
			unk_0x3850B24AA1B492B1(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1579394494:
		case -27443911:
			unk_0x4BE89D7780833986(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
			break;
		
		case 1179783540:
			unk_0xBD3BB8C166FC22EF(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
			break;
		
		case 923419301:
			unk_0xAE31E4841BA3FDC0(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 0);
			break;
		
		case -308826175:
			unk_0xAE31E4841BA3FDC0(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 1);
			break;
		
		case 603298940:
			unk_0xAE31E4841BA3FDC0(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 2);
			break;
		
		case -12619854:
			unk_0xAE31E4841BA3FDC0(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 3);
			break;
		
		case -311112675:
			unk_0xAE31E4841BA3FDC0(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 4);
			break;
		
		case 870439158:
			unk_0xAE31E4841BA3FDC0(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 5);
			break;
		
		case -974288740:
			unk_0xAE31E4841BA3FDC0(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 6);
			break;
		
		case -4138654:
			unk_0xAE31E4841BA3FDC0(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 7);
			break;
		
		case -1180954122:
			unk_0xAE31E4841BA3FDC0(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 8);
			break;
		
		case -1918051016:
			unk_0xAE31E4841BA3FDC0(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 9);
			break;
		
		case 844330594:
			unk_0xAE31E4841BA3FDC0(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 10);
			break;
		
		case 1934825517:
			unk_0x2B50D2CF7D570DF1(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 0);
			break;
		
		case 1852024236:
			unk_0x2B50D2CF7D570DF1(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 1);
			break;
		
		case 2099238988:
			unk_0x2B50D2CF7D570DF1(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 2);
			break;
		
		case 1952643559:
			break;
		
		case 2039302543:
			break;
		
		case -1172900789:
			unk_0x33E6299FF4F398F1(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_9);
			break;
		
		case -1733398043:
			unk_0x51124E24238DED0B(Global_4535172[iParam0 /*85*/].f_9, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case -1892760262:
			unk_0x37BD685C8CE33611(Global_4535172[iParam0 /*85*/].f_9, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case -2015399333:
			unk_0x5002576F53E7A305(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 402505853:
			if (func_33(unk_0xADCF72047FEB806E(Global_4535172[iParam0 /*85*/]), 0, 0))
			{
				unk_0xCBF9D424AEA9BD0A(unk_0xADCF72047FEB806E(Global_4535172[iParam0 /*85*/]), Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
			}
			break;
		
		case 1678112166:
			unk_0x2FECBC5E529B515F(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 0, 1);
			break;
		
		case -1143510182:
			unk_0x98D8095FC26CE3BA(Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case -1574795641:
			unk_0xD8933369E583642F(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -961034881:
			unk_0x0A5CE8E122DC0B42(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 1135468152:
			unk_0xB83B085744F6C174(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1265272476:
			unk_0xE9B81871DBE737DF(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/].f_9);
			break;
		
		case -634726636:
			unk_0x7B21B556399F29A8(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 696556762:
			unk_0x830469427E8EC403(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 837955913:
			unk_0xBBB28717CEDFCB52(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_15, 0, 1);
			break;
		
		case 403506509:
			unk_0x3209BA4553D11A25(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -883876414:
			unk_0x5B7CA0ED8BB6B05C(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
			unk_0xE47F05CD8EF473F8(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -1532467144:
			unk_0x0B56F818A3D191FA(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 0, 1);
			break;
		
		case 1815541181:
			unk_0x2F96685D3A4D7E46(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case -561012053:
			unk_0xCD9263B0BE15CA7D(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1342064661:
			unk_0x84CCD4013F16E960(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case 1240683675:
			unk_0x9F8A386B7C63DA45(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1241904665:
			unk_0xFD12CBA13D75A922(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_16, Global_4535172[iParam0 /*85*/].f_1);
			break;
		
		case -494565059:
			unk_0xF31093840F4EBC43(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 827308208:
			unk_0x8B66D9203947094E(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1857685192:
			unk_0x19C2987F9FA07618(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1698417709:
			unk_0x7F9E8B7A03DB8482(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -2017925037:
			unk_0xBAC94016DEFB439B(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
			unk_0x1270001ABCACBA44(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case -1693570755:
			unk_0xFA5071F459A54000(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), Global_4535172[iParam0 /*85*/]);
			break;
		
		case 1868043300:
			unk_0x7E19BA32BABC2852(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -697248883:
			unk_0x199E4260A2687FD6(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1295545795:
			unk_0x4375CE234ABCAFDC(Global_4535172[iParam0 /*85*/].f_9, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case 914079366:
			unk_0x628FCAC92F49DD95(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 0, 0);
			break;
		
		case 395122350:
			unk_0x628FCAC92F49DD95(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
			break;
		
		case -331981076:
			unk_0x628FCAC92F49DD95(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case 1671535231:
			unk_0x628FCAC92F49DD95(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1982688246:
			break;
	}
	switch (Global_4535172[iParam0 /*85*/].f_66.f_4)
	{
		case 1668610896:
			unk_0xC83F91E0277B9309(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case -2032529561:
			unk_0xC83F91E0277B9309(Global_4535172[iParam0 /*85*/].f_66.f_1, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
			break;
		
		case -1224479447:
			unk_0xC83F91E0277B9309(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
			unk_0xD0F0867FE3C309AF(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case 1220095570:
		case 2050320631:
		case 592672421:
			unk_0xD0F0867FE3C309AF(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1775876058:
			unk_0x56DA82754FF63C65(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case -842062976:
			unk_0xA240BAD676962A5C(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case -1896606724:
			Var6.f_0 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			unk_0x393F75C0A1034E40(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var6);
			break;
		
		case -1291433573:
			Var6.f_1 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			unk_0x393F75C0A1034E40(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var6);
			break;
		
		case 538631715:
			Var6.f_2 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			unk_0x393F75C0A1034E40(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var6);
			break;
		
		case 133782822:
			Var6.f_3 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			unk_0x393F75C0A1034E40(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var6);
			break;
		
		case 2081885153:
			Var6.f_4 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			unk_0x393F75C0A1034E40(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var6);
			break;
		
		case -1314365345:
			Var6.f_5 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			unk_0x393F75C0A1034E40(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var6);
			break;
		
		case 1322977732:
			Var6.f_6 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			unk_0x393F75C0A1034E40(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var6);
			break;
		
		case 396623013:
			Var6.f_7 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			unk_0x393F75C0A1034E40(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var6);
			break;
		
		case 1981664462:
			unk_0x97F89C47E27A65B7(Global_4535172[iParam0 /*85*/]);
			break;
		
		case -518651910:
		case 14658715:
			unk_0xDDC3F536EDA530D7(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
			unk_0xF25A11D8FFA66258(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_15, Global_4535172[iParam0 /*85*/].f_66.f_16, Global_4535172[iParam0 /*85*/], 0, 0);
			break;
		
		case -837690641:
			unk_0xF25A11D8FFA66258(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, Global_4535172[iParam0 /*85*/].f_66.f_15, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1029672338:
			unk_0x14E5D107B7B6266D(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1921250821:
			unk_0xAEBD4D2078576CE2(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case -1370731547:
			unk_0xAEBD4D2078576CE2(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, Global_4535172[iParam0 /*85*/].f_66.f_1, 0);
			break;
		
		case 1683798242:
			unk_0xAEBD4D2078576CE2(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -910968288:
			unk_0xF86A1EE7ECFDB530(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_10, Global_4535172[iParam0 /*85*/].f_11, Global_4535172[iParam0 /*85*/].f_12, Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7);
			break;
		
		case -1503749970:
			unk_0xD506AB2E4CDCB58C(Global_4535172[iParam0 /*85*/].f_66.f_1, -1, -1, Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1843409092:
			unk_0xD506AB2E4CDCB58C(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_1, unk_0x14580F20CBCE4FA9(&(Global_4535172[iParam0 /*85*/].f_14.f_26)), -1, -1);
			break;
		
		case 1669058563:
			unk_0xBA98173736DA2572(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 2102747615:
			unk_0xDB43A0693FAD4356(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 2030771998:
			unk_0x508F408CBB092652(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
			unk_0x1A01677EC27573F3(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_44));
			break;
		
		case 1051883823:
			unk_0x09436E068DF4158E(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 1280785534:
			unk_0x2FB9E5AFF13BBBD1(Global_4535172[iParam0 /*85*/].f_66.f_1, 277);
			break;
		
		case -168319378:
			unk_0xB0AFE4CB8169C915(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Global_4540926);
			break;
		
		case -1878824774:
			unk_0x050E00EF3147C8A7(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 247992227:
			unk_0xC8D7A0BD9DF03F2C(Global_4535172[iParam0 /*85*/].f_66.f_15, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -229237358:
			unk_0x08FC800C8292E3D7(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1123183389:
			unk_0x89B53A3D8B028463(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 1814197076:
			unk_0x51C57EB1393F5210(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 713955548:
			unk_0x1F937579254BC384(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -2026544524:
			unk_0x0ECD9F20C4C766A8(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -719580138:
			unk_0xF5F76DD24A185B08(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -163417439:
			unk_0x3479FBC3BA30F235(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1658225921:
			unk_0x5B16305919429CC1(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -551835600:
			unk_0x7B3712C16D170E76(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -1230687625:
			unk_0x12430783CDB9E80B(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -550417574:
			unk_0x9A817A880869D611(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 1637817605:
			unk_0x59C66FFC48B94777(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_16, Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case 830018386:
			unk_0xB05F90B296113984(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case -1433071892:
			unk_0x0A5CE8E122DC0B42(Global_4535172[iParam0 /*85*/].f_66.f_1, 1989714117);
			break;
		
		case -2013760296:
			unk_0x430F4990DB2E9D49(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 761999406:
			unk_0x9D37ED16F0152789(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_15, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1033889004:
			unk_0x76BFD614D74017E7(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -754024203:
			unk_0xDF34820949F1269B(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 1208553146:
			unk_0xEFD482B815CC8ACF(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case -1101941763:
		case 1748245957:
		case 1036772696:
		case -1384648535:
		case -800037808:
		case -695852120:
		case 77355315:
		case 2097889166:
		case 1707592130:
		case -239888995:
		case 1163066566:
		case -955087020:
		case 1874391251:
			unk_0x3115693297B13B7A(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &uVar2);
			break;
		
		case 1628412596:
			unk_0x4FAF261C88BF8D20(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/].f_9, Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -2081984382:
			unk_0x4BCEE63376B4298A(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0);
			break;
		
		case 1089562091:
			unk_0x76BFD614D74017E7(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case 883337077:
			Var17.f_0 = Global_4535172[iParam0 /*85*/].f_13;
			Var17.f_1 = Global_4535172[iParam0 /*85*/];
			Var17.f_2 = Global_4535172[iParam0 /*85*/].f_66.f_15;
			unk_0x991E1588FAD9019D(Global_4535172[iParam0 /*85*/].f_66.f_1, &Var17);
			break;
		
		case -1274418755:
			unk_0x9C0C6BD0F94CE391(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case -1853979468:
			unk_0xCABC9874AFA70D6D(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 1633116913:
			unk_0xE01D10BA8CD53621(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 668586600:
			unk_0x40FF6CCCC476185C(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 15168061:
			unk_0xCE4452AE85F5E252(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 590289134:
			unk_0xC376B92D0E060970(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 99792878:
			unk_0xDDF047577F1A02A7(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 1866258778:
			unk_0xD1A8165767AD2D23(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case -178394060:
			unk_0xC30650FA74A19D02(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 409592287:
			unk_0xD01EBAEA1F905EF6(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 593836803:
			unk_0xBEAFBB1B98B7EF55(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 1973036520:
			unk_0xA914768AD35CD3A5(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 2063456538:
			unk_0xE3942D59E8A7F70D(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case -728008329:
			unk_0x136F11B5DF1B304D(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case 119239868:
			unk_0xCA3EF9B09A8D76B4(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
	}
	if (func_13())
	{
		if (bParam1)
		{
			unk_0x5FC5FA7790930BE8(Global_4535172[iParam0 /*85*/].f_66, &uVar20);
		}
	}
	func_7(iParam0);
}

int func_33(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0xE6DEE82DB0922DF0(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x48DC6A21D1CAD89C(uParam0))
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

var func_34(var uParam0)
{
	return uParam0;
}

void func_35(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = -1;
}

int func_36(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66 == iParam0)
		{
			*uParam1 = { Global_4535172[iVar0 /*85*/] };
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_37(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Global_4540733[iParam0 /*12*/].f_1 == Global_4540733[iParam0 /*12*/].f_6)
	{
		if (Global_4540733[iParam0 /*12*/].f_1 != 1445302971 && Global_4540733[iParam0 /*12*/].f_1 != -1316591359)
		{
			return;
		}
	}
	iVar0 = 0;
	sVar2 = "Wardrobe";
	iVar0 = unk_0x14580F20CBCE4FA9(sVar2);
	iVar0 = (iVar0 || func_39());
	iVar0 = (iVar0 + Global_4538682);
	func_38(&uVar1);
	iVar0 = (iVar0 || uVar1);
	unk_0x061B1200C95204CB(&iVar0, 28);
	unk_0x061B1200C95204CB(&iVar0, 29);
	unk_0x061B1200C95204CB(&iVar0, 26);
	iVar3 = (Global_4540733[iParam0 /*12*/].f_9 && iVar0);
	iVar4 = (Global_4540733[iParam0 /*12*/].f_8 && iVar0);
	iVar5 = Global_4540733[iParam0 /*12*/].f_7;
	if (iVar5 == 0)
	{
		iVar5 = -2085313189;
	}
	if (((Global_4540733[iParam0 /*12*/] != Global_4540733[iParam0 /*12*/].f_5 || Global_4540733[iParam0 /*12*/].f_1 != Global_4540733[iParam0 /*12*/].f_6) || Global_4540733[iParam0 /*12*/].f_2 != iVar5) || Global_4540733[iParam0 /*12*/].f_3 != (iVar4 + iVar3))
	{
		Global_110350 = 1;
	}
}

int func_38(var uParam0)
{
	*uParam0 = unk_0xEDD95A39E5544DE8(1, 2);
	return 5410420;
}

int func_39()
{
	return unk_0xEDD95A39E5544DE8(1, 25);
}

int func_40()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			return 1;
		}
	}
	if (func_47())
	{
		return 1;
	}
	if (Global_2696915)
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	if (func_45(159))
	{
		if (!func_44())
		{
			return 1;
		}
	}
	if (func_45(157))
	{
		return 1;
	}
	if (!unk_0x67EBFCF2F78761B9())
	{
		return 1;
	}
	if (func_41() != 0)
	{
		if (unk_0x24B651D85CCE5EB4(func_41()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_41()
{
	switch (func_43())
	{
		case 0:
			return func_42();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_42()
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_43()
{
	return Global_32163;
}

bool func_44()
{
	return Global_2683862.f_698;
}

int func_45(int iParam0)
{
	if (unk_0x36D3321E138A43F0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_46()
{
	return Global_2694524;
}

bool func_47()
{
	return Global_2683862.f_693;
}

void func_48()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_49()
{
	func_50();
}

void func_50()
{
	unk_0x675D9C12C73D3DE7();
}

void func_51(struct<34> Param0)
{
	if (Global_262145.f_24076)
	{
		func_49();
	}
	Local_22.f_66 = { Param0 };
	Local_22 = { Param0.f_19 };
	Local_22.f_14 = { Global_4535172[Param0.f_33 /*85*/].f_14 };
	iLocal_21 = Param0.f_33;
	if (Param0.f_33 < 0)
	{
		func_49();
	}
	if (!func_52(Param0, Param0.f_33))
	{
		func_7(Param0.f_33);
		func_49();
	}
	if (Local_22.f_66.f_2 != 0)
	{
		Local_22.f_66.f_2 = 1;
	}
}

int func_52(struct<18> Param0, var uParam18, int iParam19)
{
	if (Global_4535172[iParam19 /*85*/].f_66.f_1 != Param0.f_1)
	{
		return 0;
	}
	if (Global_4535172[iParam19 /*85*/].f_66.f_3 != Param0.f_3)
	{
		return 0;
	}
	if (Global_4535172[iParam19 /*85*/].f_66.f_4 != Param0.f_4)
	{
		return 0;
	}
	if (Global_4535172[iParam19 /*85*/].f_66.f_5 != Param0.f_5)
	{
		return 0;
	}
	if (Global_4535172[iParam19 /*85*/].f_66.f_6 != Param0.f_6)
	{
		return 0;
	}
	if (Global_4535172[iParam19 /*85*/].f_66.f_7 != Param0.f_7)
	{
		return 0;
	}
	if (Global_4535172[iParam19 /*85*/].f_66.f_14 != Param0.f_14)
	{
		return 0;
	}
	if (Global_4535172[iParam19 /*85*/].f_66.f_17 != Param0.f_17)
	{
		return 0;
	}
	return 1;
}

