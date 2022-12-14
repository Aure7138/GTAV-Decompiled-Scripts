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
	int iLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
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
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_53 = 2;
	unk_0x3F57BEDBC381CBC7();
	if (unk_0x4B34601C5C56F3EE(32))
	{
		unk_0xAFBDF6A5E54114C1();
	}
	while (true)
	{
		func_104();
		switch (iLocal_54)
		{
			case 0:
				func_99();
				break;
			
			case 1:
				func_90();
				func_2();
				Global_97725 = 0;
				break;
			
			case 2:
				func_1();
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	iLocal_54 = 0;
}

void func_2()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	
	if (iLocal_60)
	{
		iLocal_60 = 0;
	}
	else
	{
		iLocal_55++;
	}
	bLocal_59 = false;
	if (unk_0x9315DBF7D972F07A())
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = func_85();
	}
	if (iVar0 != iLocal_58)
	{
		iLocal_58 = iVar0;
		bLocal_59 = true;
		iLocal_66 = 0;
		iLocal_67 = 0;
		iLocal_74 = 0;
		iLocal_80 = 0;
	}
	if (iLocal_58 == 145)
	{
		return;
	}
	bVar1 = false;
	if ((iLocal_55 == 6 && func_84(64)) || (iLocal_55 == 5 && unk_0xB4C854DD86E40FDA(joaat("pilot_school")) > 0))
	{
		bVar1 = true;
		iLocal_60 = 1;
	}
	func_78();
	if (Global_97723 || (Global_97724 && !func_75(0)))
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			iVar2 = 0;
			while (iVar2 < 8)
			{
				func_74(iLocal_58, iVar2);
				iVar2++;
			}
			Global_97723 = 0;
		}
	}
	if (!bVar1)
	{
		if (((((((((unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) || (!unk_0x9315DBF7D972F07A() && !func_73(iLocal_58))) || unk_0x04458B4E5D9E466A()) || func_72()) || unk_0xF34D8FCAE3FD4EE4()) || unk_0xA829C9A2767AC8EF()) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || Global_78317) || Global_97725) || iLocal_61)
		{
			iLocal_82 = 1;
			iLocal_83 = unk_0x320D1840B6DAA1CC();
			if (unk_0x9315DBF7D972F07A())
			{
				uLocal_84 = unk_0x0A89FDFA763DCAED();
			}
			return;
		}
		if (iLocal_82)
		{
			if ((!unk_0x9315DBF7D972F07A() && (unk_0x320D1840B6DAA1CC() - iLocal_83) > 3000) || (unk_0x9315DBF7D972F07A() && unk_0xE17FF5FAEC73B872(unk_0x0A89FDFA763DCAED(), unk_0x35DE445E5254AFED(uLocal_84, 3000))))
			{
				iLocal_82 = 0;
			}
			else
			{
				return;
			}
		}
	}
	if (((!unk_0x9315DBF7D972F07A() && (unk_0x320D1840B6DAA1CC() - iLocal_56) > 2000) || (unk_0x9315DBF7D972F07A() && unk_0xE17FF5FAEC73B872(unk_0x0A89FDFA763DCAED(), unk_0x35DE445E5254AFED(uLocal_57, 2000)))) || bLocal_59)
	{
		if (iLocal_55 >= 8)
		{
			iLocal_55 = 0;
			iLocal_56 = unk_0x320D1840B6DAA1CC();
			if (unk_0x9315DBF7D972F07A())
			{
				uLocal_57 = unk_0x0A89FDFA763DCAED();
			}
		}
		iVar11 = 1;
		if (bLocal_59)
		{
			iVar11 = 8;
		}
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			bVar13 = true;
			if (bLocal_59)
			{
				iVar8 = iVar12;
			}
			else
			{
				iVar8 = iLocal_55;
			}
			func_71(iLocal_58, iVar8, &iVar6, &iVar7);
			if (unk_0x9315DBF7D972F07A())
			{
				iVar3 = func_70(iVar7, -1, 0);
			}
			else if (iVar8 == 0)
			{
				iVar3 = Global_113386.f_2363.f_539.f_2387[iLocal_58];
			}
			else
			{
				unk_0x61481F9FBB1C7EDD(iVar6, &iVar3, -1);
			}
			iVar5 = iVar3;
			iVar3 = func_69(iVar3, 0, 100);
			if (func_56(iLocal_58, iVar8, iVar3, &iVar4))
			{
				if (unk_0x9315DBF7D972F07A())
				{
					func_55(iVar7, iVar4, -1, 1, 0);
				}
				else if (iVar8 == 0)
				{
					if (Global_113386.f_2363.f_539.f_2387[iLocal_58] == 0)
					{
						bVar13 = false;
					}
					Global_113386.f_2363.f_539.f_2387[iLocal_58] = iVar4;
				}
				else
				{
					unk_0x076A5661EF5ABEE4(iVar6, iVar4, 1);
				}
				if (iVar4 > func_53(iLocal_58, iVar8, -1))
				{
					if (unk_0x9315DBF7D972F07A())
					{
						if (unk_0x44859561F653DD4E() && BitTest(Global_4718592.f_39, 19))
						{
							bVar13 = false;
						}
					}
					else if ((!Global_113386.f_9085 && !func_52(0)) || !BitTest(Global_113386.f_9085.f_2[27 /*3*/], 2))
					{
						bVar13 = false;
					}
					iVar14 = iVar4;
					iVar15 = (iVar14 - (iVar14 % func_51(iLocal_58, iVar8)));
					if ((iVar14 % func_51(iLocal_58, iVar8)) >= 0)
					{
						iVar15 = (iVar15 + func_51(iLocal_58, iVar8));
					}
					if (iVar14 >= iVar15)
					{
						iVar14 = iVar15;
					}
					else
					{
						iVar14 = (iVar15 - func_51(iLocal_58, iVar8));
					}
					if (iVar4 > iVar14)
					{
						bVar13 = false;
					}
					if (func_46())
					{
						bVar13 = false;
					}
					if (bVar13)
					{
						if (!bLocal_59)
						{
							if (unk_0x9315DBF7D972F07A())
							{
								if (func_45(117, -1) == 0)
								{
									if (!unk_0xF847447D4467709D() && func_9())
									{
										func_8("STAT_HELP2", -1);
										func_4(117, 1, -1, 1);
									}
								}
							}
							iLocal_61 = 1;
							iLocal_64 = (iVar4 - iVar3);
							iLocal_64 = (iLocal_64 + (iVar3 % func_51(iLocal_58, iVar8)));
							iLocal_65 = iVar4;
							iLocal_62 = iLocal_58;
							iLocal_63 = iVar8;
						}
					}
					if (iVar4 >= 100)
					{
						if (func_3(iLocal_58, iVar8, &iVar9))
						{
							if (iLocal_58 == 0)
							{
								unk_0x61481F9FBB1C7EDD(joaat("sp0_total_playing_time"), &iVar10, -1);
								unk_0x076A5661EF5ABEE4(iVar9, iVar10, 1);
							}
							else if (iLocal_58 == 1)
							{
								unk_0x61481F9FBB1C7EDD(joaat("sp1_total_playing_time"), &iVar10, -1);
								unk_0x076A5661EF5ABEE4(iVar9, iVar10, 1);
							}
							else if (iLocal_58 == 2)
							{
								unk_0x61481F9FBB1C7EDD(joaat("sp2_total_playing_time"), &iVar10, -1);
								unk_0x076A5661EF5ABEE4(iVar9, iVar10, 1);
							}
							else if (iLocal_58 == 3)
							{
							}
						}
					}
				}
				func_74(iLocal_58, iVar8);
			}
			else if (iVar4 < iVar5)
			{
				bVar16 = true;
				if (unk_0x9315DBF7D972F07A())
				{
					func_55(iVar7, iVar4, -1, 1, 0);
				}
				else if (iVar8 == 0)
				{
					Global_113386.f_2363.f_539.f_2387[iLocal_58] = iVar4;
					bVar16 = false;
				}
				else
				{
					unk_0x076A5661EF5ABEE4(iVar6, iVar4, 1);
				}
				if (bVar16)
				{
					func_74(iLocal_58, iVar8);
				}
			}
			iVar12++;
		}
	}
	else
	{
		iLocal_60 = 1;
	}
}

bool func_3(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = joaat("last_playing_time");
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability_maxed");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability_maxed");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability_maxed");
					break;
			}
			break;
	}
	return *uParam2 != joaat("last_playing_time");
}

void func_4(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_7())
	{
		iVar0 = Global_2866852[iParam0 /*3*/][func_5(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x41483427EFBC0047(iVar0, iParam1, iParam3);
		}
	}
}

int func_5(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
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

int func_6()
{
	return Global_1574918;
}

int func_7()
{
	return 1;
	return 0;
}

void func_8(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

int func_9()
{
	int iVar0;
	
	iVar0 = unk_0x8142A6539DDC180F();
	if (Global_1931615 == iVar0)
	{
		return Global_1931616;
	}
	else
	{
		Global_1931615 = iVar0;
		Global_1931616 = 0;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		if (unk_0x44859561F653DD4E() && BitTest(Global_4718592.f_39, 19))
		{
			return 0;
		}
	}
	if ((unk_0x9C0EC6D1B2FD2795() && unk_0xB7B9FCC926422B4B()) && !func_44(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (Global_1931617 == 1)
	{
		return 0;
	}
	if (Global_1931426 == 1)
	{
		return 0;
	}
	if (func_43())
	{
		return 0;
	}
	if (unk_0x70843A833FDA0155())
	{
		return 0;
	}
	if (Global_1836571 == 1)
	{
		return 0;
	}
	if (unk_0xBF6119A4AD89EF09())
	{
		return 0;
	}
	if (Global_1057410)
	{
		return 0;
	}
	if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_833, 16))
	{
		return 0;
	}
	if (func_42())
	{
		return 0;
	}
	if (func_41())
	{
		return 0;
	}
	if (func_40())
	{
		if (!func_41())
		{
			if (!func_39(3, -1))
			{
				if (func_37(&Global_2727875, 300000, 0) == 1)
				{
					func_36(&Global_2727873);
					func_34(3, -1);
				}
				else if (func_37(&Global_2727873, 7000, 0) == 0)
				{
					return 0;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_33())
	{
		return 0;
	}
	if (func_32())
	{
		return 0;
	}
	if (func_30())
	{
		return 0;
	}
	if (func_29())
	{
		return 0;
	}
	if (func_28())
	{
		return 0;
	}
	if (func_27())
	{
		return 0;
	}
	if (unk_0xC96A605CF3E9295B())
	{
		return 0;
	}
	if (unk_0xF1EC2C71FD1371B8())
	{
		return 0;
	}
	if (unk_0x28FF2C2261B6CBA1())
	{
		if (func_26(unk_0xE2D3D51028F0428A()) == joaat("weapon_sniperrifle") || func_26(unk_0xE2D3D51028F0428A()) == joaat("weapon_heavysniper"))
		{
			return 0;
		}
	}
	if (unk_0xA829C9A2767AC8EF())
	{
		return 0;
	}
	if (func_25(8, -1))
	{
		return 0;
	}
	if (func_24(12, -1))
	{
		return 0;
	}
	if (unk_0x1EC008858F146889(19))
	{
		return 0;
	}
	if (func_23())
	{
		return 0;
	}
	if (func_22())
	{
		return 0;
	}
	if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_833, 2))
	{
		return 0;
	}
	if (Global_1836363)
	{
		return 0;
	}
	if (Global_1836367)
	{
		return 0;
	}
	if (Global_1836369)
	{
		return 0;
	}
	if (Global_2703735.f_3580.f_39)
	{
		return 0;
	}
	if (func_21(0))
	{
		return 0;
	}
	if (func_20())
	{
		return 0;
	}
	if (Global_2815059.f_4032)
	{
		return 0;
	}
	if (Global_2703735.f_3446)
	{
		return 0;
	}
	if (!func_19(unk_0x9E2D6C50374FCFA9(), 1, 0))
	{
		return 0;
	}
	if (func_18(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (Global_2703735.f_3580.f_39 == 1)
	{
		return 0;
	}
	if (Global_2715699.f_2846.f_26 == 1)
	{
		return 0;
	}
	if (func_17(1))
	{
		return 0;
	}
	if (func_15())
	{
		return 0;
	}
	if (unk_0x1EC008858F146889(16))
	{
		return 0;
	}
	if (func_14())
	{
		return 0;
	}
	if (func_13())
	{
		return 0;
	}
	if (unk_0x2D3AAABB780ED9B6())
	{
		if (func_12("FHU_HELP3"))
		{
			return 0;
		}
	}
	if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_833, 6))
	{
		return 0;
	}
	if (func_10(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	Global_1931616 = 1;
	return 1;
}

int func_10(int iParam0)
{
	if (iParam0 != func_11())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_348, 26);
	}
	return 0;
}

int func_11()
{
	return -1;
}

bool func_12(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

bool func_13()
{
	return Global_2703735.f_1571.f_701 != 0;
}

bool func_14()
{
	return Global_2703735.f_2724.f_582;
}

bool func_15()
{
	return func_16();
}

bool func_16()
{
	return Global_1641031.f_40 == 3;
}

bool func_17(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

bool func_18(int iParam0)
{
	return BitTest(Global_1888862[iParam0 /*120*/].f_14, 0);
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

int func_20()
{
	if (unk_0xB4C854DD86E40FDA(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0)
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

bool func_22()
{
	return Global_1648034.f_112;
}

bool func_23()
{
	return Global_2703735.f_2400[0 /*80*/].f_1 != 0;
}

int func_24(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1648034.f_137[iParam1])
				{
					return 1;
				}
				if (Global_1648034.f_170[iParam1])
				{
					return 1;
				}
			}
			break;
		
		default:
			if (BitTest(Global_1648034.f_1046, bParam0))
			{
				return 1;
			}
			if (BitTest(Global_1648034.f_1047, bParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_25(int iParam0, int iParam1)
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

int func_26(int iParam0)
{
	var uVar0;
	
	unk_0xA7E29842FA438ED6(iParam0, &uVar0, 1);
	return uVar0;
}

bool func_27()
{
	return Global_2714762.f_692;
}

bool func_28()
{
	return BitTest(Global_1048576.f_10, 13);
}

bool func_29()
{
	return Global_2714762.f_691;
}

int func_30()
{
	if (func_31() == 1 || func_31() == 4)
	{
		return 1;
	}
	return 0;
}

int func_31()
{
	return Global_1574632.f_18;
}

int func_32()
{
	if (func_31() == 3 || func_31() == 2)
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	if (unk_0xB4C854DD86E40FDA(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_34(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	Global_1659608 = 0;
	if (unk_0xB8F4926B803BFD19() == 0)
	{
		return;
	}
	switch (bParam0)
	{
		case 0:
			unk_0xB625F19076319E9C(0, iParam1);
			iVar1 = func_35(iParam1);
			iVar0 = unk_0x5D851A9195129CE9(iVar1);
			break;
		
		default:
			iVar1 = func_35(iParam1);
			iVar0 = unk_0x5D851A9195129CE9(iVar1);
			if (!BitTest(iVar0, bParam0))
			{
				unk_0xCED9E32812D6C7C7(&iVar0, bParam0);
				unk_0xB625F19076319E9C(iVar0, iParam1);
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			func_4(120, 0, iParam1, 1);
			func_4(124, 0, iParam1, 1);
			func_4(115, 0, iParam1, 1);
			func_4(119, 0, iParam1, 1);
			func_4(121, 0, iParam1, 1);
			func_4(122, 0, iParam1, 1);
			func_4(125, 0, iParam1, 1);
			func_55(1304, 0, iParam1, 1, 0);
			func_55(7236, 0, iParam1, 1, 0);
			break;
	}
}

int func_35(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_6();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_36(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_37(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_38(uParam0, bParam2, 0);
	if (unk_0x9315DBF7D972F07A() && !bParam2)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0)) >= iParam1)
		{
			func_36(uParam0);
			return 1;
		}
	}
	else if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), *uParam0)) >= iParam1)
	{
		func_36(uParam0);
		return 1;
	}
	return 0;
}

void func_38(var uParam0, bool bParam1, bool bParam2)
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

bool func_39(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar0 = func_35(iParam1);
	iVar1 = unk_0x5D851A9195129CE9(iVar0);
	return BitTest(iVar1, iParam0);
}

int func_40()
{
	int iVar0;
	
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
				unk_0x61481F9FBB1C7EDD(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0xCED9E32812D6C7C7(&iVar0, 2);
				unk_0xCED9E32812D6C7C7(&iVar0, 4);
				unk_0xCED9E32812D6C7C7(&iVar0, 6);
				unk_0xCED9E32812D6C7C7(&Global_25, 2);
				unk_0xCED9E32812D6C7C7(&Global_25, 4);
				unk_0xCED9E32812D6C7C7(&Global_25, 6);
				unk_0x076A5661EF5ABEE4(joaat("sp_unlock_exclus_content"), iVar0, 1);
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

bool func_41()
{
	return Global_1575058;
}

bool func_42()
{
	return Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_192 != 0;
}

bool func_43()
{
	return Global_2788198;
}

bool func_44(int iParam0)
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_3, 13);
}

int func_45(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2866852[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0x1BB27397611554CE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_46()
{
	if (!func_49(1))
	{
		return 0;
	}
	if (func_47())
	{
		return 0;
	}
	return Global_1943916;
}

bool func_47()
{
	return func_48(unk_0x9E2D6C50374FCFA9());
}

int func_48(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_11())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

bool func_49(bool bParam0)
{
	return func_50(unk_0x9E2D6C50374FCFA9(), bParam0);
}

bool func_50(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_48(iParam0))
		{
			return 0;
		}
	}
	return Global_1892703[iParam0 /*599*/].f_10 != func_11();
}

int func_51(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
	}
	return 1;
}

int func_52(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_53(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x9315DBF7D972F07A())
	{
		if (func_54(14))
		{
			return 100;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 47;
					break;
				
				case 3:
					return 22;
					break;
				
				case 2:
					return 21;
					break;
				
				case 4:
					return 54;
					break;
				
				case 5:
					return 31;
					break;
				
				case 6:
					return 79;
					break;
				
				case 7:
					return 81;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 51;
					break;
				
				case 3:
					return 46;
					break;
				
				case 2:
					return 49;
					break;
				
				case 4:
					return 71;
					break;
				
				case 5:
					return 19;
					break;
				
				case 6:
					return 24;
					break;
				
				case 7:
					return 21;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 23;
					break;
				
				case 3:
					return 28;
					break;
				
				case 2:
					return 79;
					break;
				
				case 4:
					return 31;
					break;
				
				case 5:
					return 82;
					break;
				
				case 6:
					return 69;
					break;
				
				case 7:
					return 49;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_70(1225, iParam2, 0);
					break;
				
				case 3:
					return func_70(1231, iParam2, 0);
					break;
				
				case 2:
					return func_70(1227, iParam2, 0);
					break;
				
				case 4:
					return func_70(1230, iParam2, 0);
					break;
				
				case 5:
					return func_70(1229, iParam2, 0);
					break;
				
				case 6:
					return func_70(1226, iParam2, 0);
					break;
				
				case 7:
					return func_70(1228, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

bool func_54(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_55(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

int func_56(int iParam0, int iParam1, int iParam2, var uParam3)
{
	*uParam3 = func_57(iParam0, iParam1, 0, -1);
	if (*uParam3 > iParam2)
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	
	iVar2 = 0;
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp0_special_ability_unlocked"), &iVar3, -1);
				fVar0 = unk_0xBBDA792448DB5A89(iVar3);
			}
			else if (iParam0 == 1)
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp1_special_ability_unlocked"), &iVar3, -1);
				fVar0 = unk_0xBBDA792448DB5A89(iVar3);
			}
			else if (iParam0 == 2)
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp2_special_ability_unlocked"), &iVar3, -1);
				fVar0 = unk_0xBBDA792448DB5A89(iVar3);
			}
			else if (iParam0 == 3)
			{
				fVar0 = unk_0xBBDA792448DB5A89(func_70(64, iParam3, 0));
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				unk_0x9A69A54179CEA8E5(joaat("sp0_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113386.f_2363.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 1)
			{
				unk_0x9A69A54179CEA8E5(joaat("sp1_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113386.f_2363.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 2)
			{
				unk_0x9A69A54179CEA8E5(joaat("sp2_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113386.f_2363.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_68(20, iParam3) / 175f);
				func_65(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_64(joaat("sp0_time_swimming"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_64(joaat("sp1_time_swimming"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_64(joaat("sp2_time_swimming"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_64(func_63(50, iParam3))));
				func_65(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_64(joaat("sp0_time_driving_bicycle"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_64(joaat("sp1_time_driving_bicycle"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_64(joaat("sp2_time_driving_bicycle"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_64(func_63(47, iParam3))));
				func_65(&fVar0);
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 + ((4f * Global_262145.f_24361) * IntToFloat(func_70(7237, -1, 0))));
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 * 0.25f);
			}
			break;
		
		case 3:
			if (iParam0 == 0)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_62(joaat("sp0_time_underwater"))) / 30f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_62(joaat("sp1_time_underwater"))) / 30f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_62(joaat("sp2_time_underwater"))) / 30f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_62(func_63(52, iParam3))) / 30f);
				func_65(&fVar0);
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp0_unarmed_hits"), &iVar3, -1);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar3 - Global_113386.f_2363.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 1)
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp1_unarmed_hits"), &iVar3, -1);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar3 - Global_113386.f_2363.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 2)
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp2_unarmed_hits"), &iVar3, -1);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar3 - Global_113386.f_2363.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_70(1500, iParam3, 0)) / 20f);
				func_65(&fVar0);
			}
			break;
		
		case 4:
			if (iParam0 == 0)
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp0_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar3 - Global_113386.f_2363.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 1)
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp1_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar3 - Global_113386.f_2363.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 2)
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp2_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar3 - Global_113386.f_2363.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat((func_70(113, iParam3, 0) / 50)));
				func_65(&fVar0);
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_64(joaat("sp0_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_64(joaat("sp1_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_64(joaat("sp2_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_64(func_63(43, iParam3))) / 10f);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89(func_64(joaat("sp0_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89(func_64(joaat("sp1_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89(func_64(joaat("sp2_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89(func_64(func_63(45, iParam3))) / 10f));
			}
			if (iParam0 == 0)
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp0_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(iVar3));
			}
			else if (iParam0 == 1)
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp1_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(iVar3));
			}
			else if (iParam0 == 2)
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp2_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(iVar3));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_70(61, iParam3, 0)));
				func_65(&fVar0);
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar4 = func_61(iParam0, 0);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 1);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 2);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 3);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 6);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 4);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 5f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 3f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 2f);
				}
				iVar4 = func_61(iParam0, 5);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 7);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 8);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_61(iParam0, 11);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
			}
			break;
		
		case 7:
			if (iParam0 == 0)
			{
				unk_0x9A69A54179CEA8E5(joaat("sp0_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113386.f_2363.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 1)
			{
				unk_0x9A69A54179CEA8E5(joaat("sp1_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113386.f_2363.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 2)
			{
				unk_0x9A69A54179CEA8E5(joaat("sp2_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113386.f_2363.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_68(19, iParam3) / 45f);
			}
			if (iParam0 == 0)
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp0_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((unk_0xBBDA792448DB5A89((iVar3 - Global_113386.f_2363.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 1)
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp1_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((unk_0xBBDA792448DB5A89((iVar3 - Global_113386.f_2363.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 2)
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp2_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((unk_0xBBDA792448DB5A89((iVar3 - Global_113386.f_2363.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 3)
			{
				iVar3 = func_70(34, iParam3, 0);
				fVar0 = (fVar0 + ((unk_0xBBDA792448DB5A89(iVar3) / 2f) * 1.5f));
				func_65(&fVar0);
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp0_hits_mission"), &iVar5, -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar5 - Global_113386.f_2363.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar6 - Global_113386.f_2363.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 1)
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp1_hits_mission"), &iVar5, -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar5 - Global_113386.f_2363.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar6 - Global_113386.f_2363.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 2)
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp2_hits_mission"), &iVar5, -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar5 - Global_113386.f_2363.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar6 - Global_113386.f_2363.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 3)
			{
				iVar6 = func_70(172, iParam3, 0);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89(iVar6) / 80f));
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar7 = 0;
				while (iVar7 < 22)
				{
					switch (func_60(iVar7, iParam0))
					{
						case 3:
							iVar8++;
							break;
						
						case 2:
							iVar9++;
							break;
						
						case 1:
							iVar10++;
							break;
					}
					iVar7++;
				}
				fVar0 = (fVar0 + IntToFloat(iVar8 * 3));
				fVar0 = (fVar0 + IntToFloat(iVar9 * 2));
				fVar0 = (fVar0 + IntToFloat(iVar10 * 1));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_59(joaat("mpply_shootingrange_wins")) * 1));
				func_65(&fVar0);
			}
			break;
	}
	if (iParam1 != 0)
	{
		iVar11 = func_53(iParam0, iParam1, iParam3);
		fVar0 = (fVar0 + IntToFloat(iVar11));
		fVar0 = (fVar0 + IntToFloat(func_58(iParam0, iParam1, iParam3)));
	}
	if (bParam2)
	{
		fVar12 = (fVar0 - (fVar0 % IntToFloat(func_51(iParam0, iParam1))));
		if ((fVar0 % IntToFloat(func_51(iParam0, iParam1))) >= 0f)
		{
			fVar12 = (fVar12 + IntToFloat(func_51(iParam0, iParam1)));
		}
		if (fVar0 >= fVar12)
		{
			fVar0 = fVar12;
		}
		else
		{
			fVar0 = (fVar12 - IntToFloat(func_51(iParam0, iParam1)));
		}
	}
	iVar2 = unk_0xF34EE736CF047844(fVar0);
	iVar2 = func_69(iVar2, 0, 100);
	return iVar2;
}

int func_58(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_113386.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0];
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_70(72, iParam2, 0);
					break;
				
				case 3:
					return func_70(74, iParam2, 0);
					break;
				
				case 2:
					return func_70(73, iParam2, 0);
					break;
				
				case 4:
					return func_70(75, iParam2, 0);
					break;
				
				case 5:
					return func_70(76, iParam2, 0);
					break;
				
				case 6:
					return func_70(77, iParam2, 0);
					break;
				
				case 7:
					return func_70(78, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

int func_59(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x61481F9FBB1C7EDD(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_60(int iParam0, int iParam1)
{
	return Global_113386.f_19147[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_61(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > 2)
	{
		return 0;
	}
	return Global_113386.f_1988[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_62(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + (unk_0xDB9DD213ED802A90(iParam0) * 86400));
	iVar0 = (iVar0 + unk_0x0896CA1F4F0D8AF1(iParam0) * 3600);
	iVar0 = (iVar0 + unk_0xBB9770585F7D56A2(iParam0) * 60);
	iVar0 = (iVar0 + unk_0x687230A23F87A4CB(iParam0));
	return iVar0;
}

int func_63(int iParam0, int iParam1)
{
	return Global_2826809[iParam0 /*3*/][func_5(iParam1)];
}

int func_64(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + unk_0xDB9DD213ED802A90(iParam0) * 1440);
	iVar0 = (iVar0 + unk_0x0896CA1F4F0D8AF1(iParam0) * 60);
	iVar0 = (iVar0 + unk_0xBB9770585F7D56A2(iParam0));
	return iVar0;
}

var func_65(float fParam0)
{
	if (func_46())
	{
		if (func_66() < Global_262145.f_13167)
		{
			if (*fParam0 + (IntToFloat(func_66()) * Global_262145.f_13166)) <= IntToFloat(Global_262145.f_13176)
			{
				*fParam0 = (*fParam0 + (IntToFloat(func_66()) * Global_262145.f_13166));
			}
		}
		return *fParam0;
	}
	return *fParam0;
}

int func_66()
{
	if (func_49(1))
	{
		return Global_1853348[func_67() /*834*/].f_205.f_6;
	}
	return 0;
}

int func_67()
{
	return Global_1892703[unk_0x9E2D6C50374FCFA9() /*599*/].f_10;
}

float func_68(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866176[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0x9A69A54179CEA8E5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_70(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2826809[iParam0 /*3*/][func_5(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_71(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_72()
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

bool func_73(int iParam0)
{
	return iParam0 < 3;
}

void func_74(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_71(iParam0, iParam1, &uVar2, &iVar3);
	if (unk_0x9315DBF7D972F07A())
	{
		iVar0 = func_70(iVar3, -1, 0);
	}
	else
	{
		unk_0x61481F9FBB1C7EDD(uVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (unk_0xBBDA792448DB5A89(iVar0) / 100f)));
			unk_0xABB7C36B502BF82E(unk_0x9E2D6C50374FCFA9(), fVar1, 1);
			break;
		
		case 7:
			if (unk_0xB4C854DD86E40FDA(joaat("armenian3")) != 0 || unk_0xB4C854DD86E40FDA(joaat("trevor3")) != 0)
			{
				Global_97724 = 1;
			}
			else
			{
				fVar1 = (1f - (unk_0xBBDA792448DB5A89(iVar0) / 100f));
				unk_0xF3E520D4DDFE531B(unk_0x9E2D6C50374FCFA9(), fVar1);
				unk_0xA79405544D13368B(unk_0x9E2D6C50374FCFA9(), fVar1);
				unk_0xA5695A8B4FDB4F5E(unk_0x9E2D6C50374FCFA9(), fVar1);
			}
			break;
	}
}

int func_75(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_76(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_76(int iParam0)
{
	return func_77(iParam0, Global_43052);
}

int func_77(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_78()
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (((unk_0xE5965CDF24F93A9F(uVar0) && unk_0x55A0C756C4A8220C(uVar0, 0)) && unk_0xAB793EA186AB8DAA(uVar0, -1, 0) == unk_0xE2D3D51028F0428A()) && (((unk_0xCB09A834F0C86FBB(unk_0x15CAA6D7B11F1A7C(uVar0)) || unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(uVar0))) || unk_0x532C99FAF70C652B(unk_0x15CAA6D7B11F1A7C(uVar0))) || unk_0xCD8C08FA7D84C27E(unk_0x15CAA6D7B11F1A7C(uVar0))))
		{
			iVar1 = 1;
		}
	}
	func_83(&uVar0, &iVar1);
	func_82(&uVar0, &iVar1);
	func_79();
}

void func_79()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iLocal_80)
	{
		if (iLocal_58 == 3)
		{
			if (Global_2359296[func_81() /*5567*/].f_681.f_7)
			{
				iLocal_77 = func_62(func_63(148, -1));
				Global_2359296[func_81() /*5567*/].f_681.f_7 = 0;
			}
			else
			{
				iLocal_77 = Global_2359296[func_81() /*5567*/].f_681.f_6;
			}
			if (Global_2359296[func_81() /*5567*/].f_681.f_4 == 0)
			{
				Global_2359296[func_81() /*5567*/].f_681.f_4 = unk_0x48352343BC5A41AE();
			}
			iLocal_79 = Global_2359296[func_81() /*5567*/].f_681.f_4;
			iLocal_78 = Global_2359296[func_81() /*5567*/].f_681.f_5;
		}
		else
		{
			if (Global_113386.f_2363.f_539.f_2292[iLocal_58])
			{
				switch (iLocal_58)
				{
					case 0:
						iLocal_77 = func_62(joaat("sp0_total_wheelie_time"));
						break;
					
					case 1:
						iLocal_77 = func_62(joaat("sp1_total_wheelie_time"));
						break;
					
					case 2:
						iLocal_77 = func_62(joaat("sp2_total_wheelie_time"));
						break;
				}
				Global_113386.f_2363.f_539.f_2292[iLocal_58] = 0;
			}
			else
			{
				iLocal_77 = Global_113386.f_2363.f_539.f_2288[iLocal_58];
			}
			if (Global_113386.f_2363.f_539.f_2280[iLocal_58] == 0)
			{
				Global_113386.f_2363.f_539.f_2280[iLocal_58] = unk_0x48352343BC5A41AE();
			}
			iLocal_79 = Global_113386.f_2363.f_539.f_2280[iLocal_58];
			iLocal_78 = Global_113386.f_2363.f_539.f_2284[iLocal_58];
		}
		iLocal_80 = 1;
		iLocal_81 = 1;
	}
	else if ((unk_0x48352343BC5A41AE() - iLocal_79) > 86400)
	{
		iLocal_80 = 0;
		iLocal_81 = 0;
		iLocal_79 = unk_0x48352343BC5A41AE();
		iLocal_78 = 0;
		if (iLocal_58 == 3)
		{
			Global_2359296[func_81() /*5567*/].f_681.f_7 = 1;
		}
		else
		{
			Global_113386.f_2363.f_539.f_2292[iLocal_58] = 1;
		}
	}
	if (iLocal_81)
	{
		switch (iLocal_58)
		{
			case 0:
				iVar0 = func_62(joaat("sp0_total_wheelie_time"));
				break;
			
			case 1:
				iVar0 = func_62(joaat("sp1_total_wheelie_time"));
				break;
			
			case 2:
				iVar0 = func_62(joaat("sp2_total_wheelie_time"));
				break;
			
			case 3:
				iVar0 = func_62(func_63(148, -1));
				break;
		}
		iVar1 = (iVar0 - iLocal_77);
		iVar2 = (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar1) / 15f)) - iLocal_78);
		if (iVar2 > 0)
		{
			func_80(iLocal_58, 4, iVar2);
			iLocal_78 = (iLocal_78 + iVar2);
		}
		if (iVar0 > (iLocal_77 + (unk_0x4854CC9BEF210E7C() / 1000) * 60))
		{
			iLocal_81 = 0;
		}
	}
	if (iLocal_58 == 3)
	{
		Global_2359296[func_81() /*5567*/].f_681.f_4 = iLocal_79;
		Global_2359296[func_81() /*5567*/].f_681.f_5 = iLocal_78;
	}
	else
	{
		Global_113386.f_2363.f_539.f_2280[iLocal_58] = iLocal_79;
		Global_113386.f_2363.f_539.f_2284[iLocal_58] = iLocal_78;
	}
}

void func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113386.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_113386.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 13122;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 13122)
			{
				iVar0 = func_70(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_55(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

int func_81()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_82(var uParam0, int iParam1)
{
	bool bVar0;
	
	if (iLocal_74)
	{
		bVar0 = true;
		if ((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && *iParam1) && !unk_0xCE282187B0A6217E(*uParam0))
		{
			bVar0 = false;
			if (unk_0x207D53F9E0190691(*uParam0) >= 53f)
			{
				func_80(iLocal_58, 4, 2);
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			iLocal_74 = 0;
			iLocal_75 = unk_0x320D1840B6DAA1CC();
			if (unk_0x9315DBF7D972F07A())
			{
				uLocal_76 = unk_0x0A89FDFA763DCAED();
			}
		}
	}
	else if (((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && *iParam1) && unk_0x207D53F9E0190691(*uParam0) < 20f) && !unk_0xCE282187B0A6217E(*uParam0))
	{
		if ((!unk_0x9315DBF7D972F07A() && (unk_0x320D1840B6DAA1CC() - iLocal_75) > 10000) || (unk_0x9315DBF7D972F07A() && unk_0xE17FF5FAEC73B872(unk_0x0A89FDFA763DCAED(), unk_0x35DE445E5254AFED(uLocal_76, 10000))))
		{
			iLocal_74 = 1;
		}
	}
}

void func_83(var uParam0, int iParam1)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (*iParam1)
	{
		if (iLocal_66)
		{
			if (!unk_0xCE282187B0A6217E(*uParam0))
			{
				if ((!unk_0x9315DBF7D972F07A() && (unk_0x320D1840B6DAA1CC() - iLocal_68) > 1500) || (unk_0x9315DBF7D972F07A() && unk_0xE17FF5FAEC73B872(unk_0x0A89FDFA763DCAED(), unk_0x35DE445E5254AFED(uLocal_69, 1500))))
				{
					iLocal_70 = unk_0x320D1840B6DAA1CC();
					if (unk_0x9315DBF7D972F07A())
					{
						uLocal_71 = unk_0x0A89FDFA763DCAED();
					}
					iLocal_67 = 1;
				}
				iLocal_66 = 0;
			}
		}
		if (iLocal_67)
		{
			if (!unk_0xCE282187B0A6217E(*uParam0))
			{
				if (unk_0x78006D212FD7243E(*uParam0))
				{
					if ((((!unk_0x9315DBF7D972F07A() && (unk_0x320D1840B6DAA1CC() - iLocal_70) > 20) || (!unk_0x9315DBF7D972F07A() && (unk_0x320D1840B6DAA1CC() - iLocal_70) == 0)) || (unk_0x9315DBF7D972F07A() && unk_0xE17FF5FAEC73B872(unk_0x0A89FDFA763DCAED(), unk_0x35DE445E5254AFED(uLocal_71, 20)))) || (unk_0x9315DBF7D972F07A() && unk_0x12B09BF1B251174F(unk_0x0A89FDFA763DCAED(), uLocal_71)))
					{
					}
					else
					{
						func_80(iLocal_58, 4, 1);
					}
					StringCopy(&cVar1, "Player landed on all wheels in ", 64);
					StringIntConCat(&cVar1, (unk_0x320D1840B6DAA1CC() - iLocal_70), 64);
					StringConCat(&cVar1, "ms", 64);
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
		}
		if (!iLocal_66 && !iLocal_67)
		{
			if ((!unk_0x9315DBF7D972F07A() && (unk_0x320D1840B6DAA1CC() - iLocal_72) > 1000) || (unk_0x9315DBF7D972F07A() && unk_0xE17FF5FAEC73B872(unk_0x0A89FDFA763DCAED(), unk_0x35DE445E5254AFED(uLocal_73, 1000))))
			{
				if (unk_0xCE282187B0A6217E(*uParam0))
				{
					if (!iLocal_66)
					{
						iLocal_68 = unk_0x320D1840B6DAA1CC();
						if (unk_0x9315DBF7D972F07A())
						{
							uLocal_69 = unk_0x0A89FDFA763DCAED();
						}
						iLocal_66 = 1;
					}
				}
			}
		}
	}
	else if (iLocal_66 || iLocal_67)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iLocal_72 = unk_0x320D1840B6DAA1CC();
		if (unk_0x9315DBF7D972F07A())
		{
			uLocal_73 = unk_0x0A89FDFA763DCAED();
		}
		iLocal_66 = 0;
		iLocal_67 = 0;
	}
}

bool func_84(int iParam0)
{
	return (Global_112471 && iParam0) != 0;
}

int func_85()
{
	func_86();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_86()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_88(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_87(unk_0xE2D3D51028F0428A());
			if (func_73(iVar0) && (!func_54(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_73(Global_113386.f_2363.f_539.f_4321))
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

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_88(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_88(int iParam0)
{
	if (func_73(iParam0))
	{
		return func_89(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_89(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_90()
{
	char* sVar0;
	int iVar1;
	
	if (iLocal_61)
	{
		if (iLocal_62 != iLocal_58)
		{
			iLocal_61 = 0;
			return;
		}
		sVar0 = "CHAR_DEFAULT";
		switch (iLocal_62)
		{
			case 0:
				sVar0 = "CHAR_MICHAEL";
				break;
			
			case 1:
				sVar0 = "CHAR_FRANKLIN";
				break;
			
			case 2:
				sVar0 = "CHAR_TREVOR";
				break;
			
			case 3:
				iVar1 = func_93(unk_0x9E2D6C50374FCFA9());
				if (iVar1 == 0)
				{
					return;
				}
				else
				{
					sVar0 = unk_0xE1AFE5E1E834BBF0(iVar1);
				}
				break;
		}
		unk_0x150D8F58B26E9F70("PS_UPDATE");
		unk_0x2AE954BA77A66307(iLocal_65);
		unk_0x4D190C4E8CAFBED1(func_92(iLocal_63), func_91(iLocal_63), iLocal_64, (iLocal_65 - iLocal_64), 0, sVar0, sVar0);
		iLocal_82 = 1;
		iLocal_83 = unk_0x320D1840B6DAA1CC() + 5000;
		if (unk_0x9315DBF7D972F07A())
		{
			uLocal_84 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), 5000);
		}
		iLocal_61 = 0;
	}
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 23;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 24;
			break;
		
		case 2:
			return 25;
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 27;
			break;
		
		case 6:
			return 17;
			break;
		
		case 7:
			return 28;
			break;
	}
	return -1;
}

char* func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PSF_SPEC_AB";
			break;
		
		case 1:
			return "PSF_STAMINA";
			break;
		
		case 3:
			return "PSF_LUNG";
			break;
		
		case 2:
			return "PSF_STRENGTH";
			break;
		
		case 4:
			return "PSF_DRIVING";
			break;
		
		case 5:
			return "PSF_FLYING";
			break;
		
		case 6:
			return "PSF_SHOOTING";
			break;
		
		case 7:
			return "PSF_STEALTH";
			break;
	}
	return "ERROR";
}

int func_93(int iParam0)
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if (iVar0 == -1)
	{
		func_94(iParam0, 1);
		return 0;
	}
	Global_1660783[iVar0 /*5*/].f_4 = 1;
	return Global_1660783[iVar0 /*5*/].f_2;
}

void func_94(int iParam0, bool bParam1)
{
	if (!func_19(iParam0, 0, 1))
	{
		return;
	}
	if (func_96(iParam0) != -1)
	{
		return;
	}
	if (Global_1660946)
	{
		if (iParam0 == Global_1660946.f_1)
		{
			return;
		}
	}
	if (func_95(iParam0))
	{
		return;
	}
	if (Global_1660984 >= 32)
	{
		return;
	}
	Global_1660951[Global_1660984] = iParam0;
	Global_1660984++;
	if (bParam1)
	{
	}
}

int func_95(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660984)
	{
		if (Global_1660951[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_96(int iParam0)
{
	int iVar0;
	
	if (!func_19(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1660944 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660944)
	{
		if (Global_1660783[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x87AF9112820EEC25(Global_1660783[iVar0 /*5*/].f_2) && unk_0x1B28B340344BA310(Global_1660783[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_97(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_97(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1660944)
	{
		return;
	}
	if (unk_0x87AF9112820EEC25(Global_1660783[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1660783[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xE1AFE5E1E834BBF0(Global_1660783[iParam0 /*5*/].f_2), 64);
			unk_0x8BC4D76163FA9E13(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x326ED9DD64134D76(Global_1660783[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1660944)
	{
		Global_1660783[iVar32 /*5*/] = { Global_1660783[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_98(&(Global_1660783[iVar32 /*5*/]));
	Global_1660944 = (Global_1660944 - 1);
}

void func_98(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_11();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x9315DBF7D972F07A())
	{
		uParam0->f_3 = unk_0x0A89FDFA763DCAED();
	}
}

void func_99()
{
	float fVar0;
	int iVar1;
	
	if (unk_0x33D66016FE7B1F4C() != 1)
	{
		return;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		if (!func_103(unk_0x9E2D6C50374FCFA9()))
		{
			return;
		}
		if (func_102() != 0)
		{
			return;
		}
	}
	if (unk_0x9315DBF7D972F07A())
	{
		if (func_102() == 0)
		{
			iLocal_53 = 1;
		}
	}
	else
	{
		iLocal_53 = 0;
	}
	if (!func_101())
	{
		func_100();
	}
	iLocal_55 = 0;
	iLocal_56 = 0;
	if (unk_0x9315DBF7D972F07A())
	{
		uLocal_57 = unk_0x0A89FDFA763DCAED();
	}
	iLocal_72 = unk_0x320D1840B6DAA1CC();
	if (unk_0x9315DBF7D972F07A())
	{
		uLocal_73 = unk_0x0A89FDFA763DCAED();
	}
	if (unk_0x9315DBF7D972F07A())
	{
		if (!BitTest(Global_2359296[func_81() /*5567*/].f_681.f_1274, 2))
		{
			fVar0 = (unk_0xBBDA792448DB5A89(func_70(193, -1, 0)) / 20f);
			iVar1 = unk_0xF34EE736CF047844(fVar0);
			iVar1 = func_69(iVar1, 0, 100);
			func_80(3, 2, iVar1);
			unk_0xCED9E32812D6C7C7(&(Global_2359296[func_81() /*5567*/].f_681.f_1274), 2);
		}
	}
	bLocal_59 = true;
	iLocal_54 = 1;
}

void func_100()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	if (unk_0x9315DBF7D972F07A())
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 != 0)
			{
				func_71(3, iVar0, &uVar1, &iVar2);
				func_55(iVar2, func_53(3, iVar0, -1), -1, 1, 0);
			}
			iVar0++;
		}
		func_4(0, 1, -1, 1);
		Global_97723 = 1;
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar4 = 0;
			while (iVar4 < 8)
			{
				if (iVar4 != 0)
				{
					func_71(iVar3, iVar4, &iVar5, &uVar6);
					unk_0x076A5661EF5ABEE4(iVar5, func_53(iVar3, iVar4, -1), 1);
				}
				iVar4++;
			}
			iVar3++;
		}
		Global_113386.f_2363.f_539.f_2387[0] = func_53(0, 0, -1);
		Global_113386.f_2363.f_539.f_2387[1] = func_53(1, 0, -1);
		Global_113386.f_2363.f_539.f_2387[2] = func_53(2, 0, -1);
		Global_113386.f_2363.f_539.f_2354 = 1;
		Global_97723 = 1;
	}
}

int func_101()
{
	if (unk_0x9315DBF7D972F07A())
	{
		return 1;
	}
	return Global_113386.f_2363.f_539.f_2354;
}

int func_102()
{
	return Global_31959;
}

int func_103(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2703735.f_1, iParam0);
	}
	return 1;
}

void func_104()
{
	if (iLocal_54 != 0 && iLocal_53 != 2)
	{
		if (iLocal_53 == 0)
		{
			if (unk_0x9315DBF7D972F07A())
			{
				iLocal_53 = 2;
			}
			if (!func_101())
			{
				iLocal_53 = 2;
			}
		}
		else if (iLocal_53 == 1)
		{
			if ((!unk_0x9315DBF7D972F07A() || !func_103(unk_0x9E2D6C50374FCFA9())) || func_102() != 0)
			{
				iLocal_53 = 2;
			}
		}
		if (iLocal_53 == 2)
		{
			iLocal_54 = 2;
		}
	}
}

