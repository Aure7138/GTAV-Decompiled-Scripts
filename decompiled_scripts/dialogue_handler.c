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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	char cLocal_38[24] = "";
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	char cLocal_44[24] = "";
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	char cLocal_50[64] = "";
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	char cLocal_66[24] = "";
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	char* sLocal_72 = NULL;
	char cLocal_73[24] = "";
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	char* sLocal_79 = NULL;
	char* sLocal_80 = NULL;
	char* sLocal_81 = NULL;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	char cLocal_85[24] = "";
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	char* sLocal_91 = NULL;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_142[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_173[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_204[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_235 = 0;
	var uLocal_236 = 0;
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
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_34 = 5000;
	iLocal_35 = 5000;
	unk_0x3F57BEDBC381CBC7();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (BitTest(Global_8137, 1))
		{
			if (!BitTest(Global_8136, 20))
			{
				if (unk_0xA3329B7A7520670E())
				{
					if (Global_20254)
					{
						func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_20209)
						{
							func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0xB0550BC91B0159D6(&Global_8137, 1);
				}
			}
		}
		if (BitTest(Global_20471, 0))
		{
			if (!func_120())
			{
				if (!BitTest(Global_20471, 1))
				{
					unk_0xCED9E32812D6C7C7(&Global_20471, 1);
					if (unk_0x9315DBF7D972F07A())
					{
						uLocal_106 = unk_0x0A89FDFA763DCAED();
					}
					else
					{
						iLocal_102 = unk_0x320D1840B6DAA1CC();
					}
				}
				if (unk_0x9315DBF7D972F07A())
				{
					iLocal_108 = unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), uLocal_106);
				}
				else
				{
					iLocal_103 = unk_0x320D1840B6DAA1CC();
					iLocal_108 = (iLocal_103 - iLocal_102);
				}
				if (iLocal_108 < 3000)
				{
					if (func_113(&Global_21059, &Global_21675, &Global_21595, Global_21608, Global_22590, Global_22591, 0))
					{
						Global_20471 = 0;
					}
				}
				else
				{
					Global_20471 = 0;
				}
			}
		}
		if (((!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !BitTest(Global_4718592.f_17, 4)) && !func_112()) && unk_0xB4C854DD86E40FDA(joaat("fm_mission_controller_2020")) == 0)
		{
			if (Global_21605 != 0)
			{
				if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) == 0)
				{
					func_111();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_107();
		}
		switch (Global_21605)
		{
			case 0:
				break;
			
			case 1:
				if (Global_21611)
				{
					if (Global_21601 == 0)
					{
						func_105();
					}
					else
					{
						func_104();
						func_105();
					}
				}
				else if (Global_21601 == 0)
				{
					func_92();
				}
				else
				{
					func_104();
					func_74();
				}
				break;
			
			case 2:
				func_68();
				break;
			
			case 3:
				func_64();
				break;
			
			case 4:
				if (Global_21611)
				{
					if (Global_21613)
					{
						func_63();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			
			case 5:
				func_4();
				break;
			
			case 6:
				func_1();
				break;
			
			default:
				break;
		}
	}
}

void func_1()
{
	Global_21615 = 0;
	Global_20265 = 0;
	func_2();
}

void func_2()
{
	Global_2883585 = 0;
	Global_2883586 = 0;
	Global_21616 = 0;
	Global_21617 = 0;
	Global_21618 = 0;
	Global_21619 = 0;
	Global_20894.f_161 = -99;
	Global_20894.f_162 = { 0f, 0f, 0f };
	Global_21609 = 0;
	Global_21610 = 0;
	Global_21652 = 0;
	Global_21653 = 0;
	Global_21656 = 0;
	Global_21658 = 0;
	Global_21657 = 0;
	Global_21660 = 0;
	Global_21659 = 0;
	Global_22622 = 0;
	Global_21662 = 0;
	if (Global_20266.f_1 == 10)
	{
	}
	else if (BitTest(Global_8136, 11))
	{
		func_3();
	}
	Global_21611 = 0;
	Global_21612 = 0;
	Global_21613 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22595 = 0;
	Global_22602 = 0;
	Global_22601 = 0;
	Global_22598 = 0;
	Global_22597 = 0;
	Global_22599 = 0;
	Global_22600 = 0;
	Global_21601 = 0;
	Global_21602 = 0;
	Global_21603 = 0;
	Global_21604 = 0;
	Global_21863 = 0;
	Global_22626 = 5000;
	Global_20249 = 0;
	unk_0xB0550BC91B0159D6(&Global_8136, 20);
	unk_0xB0550BC91B0159D6(&Global_8136, 24);
	unk_0xB0550BC91B0159D6(&Global_8137, 23);
	unk_0xB0550BC91B0159D6(&Global_8138, 0);
	unk_0xB0550BC91B0159D6(&Global_8137, 9);
	unk_0xB0550BC91B0159D6(&Global_8137, 31);
	unk_0xB0550BC91B0159D6(&Global_8137, 17);
	unk_0xB0550BC91B0159D6(&Global_8138, 5);
	Global_22589 = 0;
	Global_22588 = 0;
	if (unk_0x2E5F8A288A954523())
	{
		Global_21605 = 4;
	}
	else
	{
		Global_21605 = 0;
		Global_22616 = 0;
		Global_22627 = unk_0x320D1840B6DAA1CC();
	}
}

void func_3()
{
	if (!Global_78319)
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (BitTest(Global_8136, 11))
			{
				if (!Global_20209)
				{
					unk_0x57CAA5FBF134D4AE(unk_0xE2D3D51028F0428A(), 0, 1);
				}
				if (Global_78319)
				{
					unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 244, 1);
					unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 243, 1);
					unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 242, 1);
				}
				unk_0xB0550BC91B0159D6(&Global_8136, 11);
			}
		}
	}
}

void func_4()
{
	Global_21615 = 0;
	Global_20265 = 0;
	func_2();
}

void func_5()
{
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A()))
		{
			if (Global_21661 == 0)
			{
				func_6();
			}
		}
	}
	if (iLocal_33 == 1)
	{
		func_6();
		func_6();
	}
	if (Global_22597 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_22616 == 1)
			{
				unk_0x1195A02D3676E6AF(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_22616 == 0)
		{
			unk_0x82B0661A78CC39CF();
			iLocal_31 = 0;
		}
	}
	else if (Global_22599 > 0)
	{
		iLocal_37 = unk_0x320D1840B6DAA1CC();
		if ((iLocal_37 - iLocal_36) > Global_22599)
		{
			unk_0xFED65F7C525B4505();
			Global_22597 = 0;
		}
	}
	if (Global_22616 == 0)
	{
		if (!unk_0x2E5F8A288A954523())
		{
			Global_21605 = 6;
		}
	}
}

void func_6()
{
	unk_0x82B0661A78CC39CF();
	Global_22616 = 0;
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21605 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xA3329B7A7520670E())
	{
		if (!BitTest(Global_8136, 11))
		{
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					if (Global_78319 == 0)
					{
						func_61();
					}
				}
			}
		}
		else if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
			{
				if (Global_78319 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_78319 == 0)
	{
		func_60();
	}
	if (iLocal_33 == 1)
	{
		func_55(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_22616 == 1)
		{
			if (Global_22617 == 1)
			{
				unk_0x1195A02D3676E6AF(1);
				iLocal_31 = 1;
				Global_22617 = 0;
			}
		}
	}
	else if (Global_22616 == 0)
	{
		if (Global_22617 == 1)
		{
			unk_0x82B0661A78CC39CF();
			iLocal_31 = 0;
			Global_22617 = 0;
		}
	}
	if (Global_21658 == 0)
	{
		if (!Global_21618)
		{
			if (!BitTest(Global_8137, 31))
			{
				if (!BitTest(Global_8137, 27))
				{
					if (func_54())
					{
						if (Global_20266.f_1 > 6)
						{
							unk_0xCED9E32812D6C7C7(&Global_8137, 24);
							unk_0xCED9E32812D6C7C7(&Global_8137, 27);
							unk_0xB0550BC91B0159D6(&Global_8137, 26);
							unk_0xB0550BC91B0159D6(&Global_8137, 25);
						}
					}
				}
			}
		}
	}
	if (unk_0xA3329B7A7520670E() == 0 && Global_21618 == 0)
	{
		if (Global_21658 == 1)
		{
			unk_0xCED9E32812D6C7C7(&Global_8137, 23);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&Global_8137, 23);
		}
		if (Global_21662)
		{
			if (Global_21658 == 0)
			{
				Global_21224 = { Global_21663 };
				Global_21681 = { Global_21669 };
				Global_21615 = 0;
				Global_22622 = 6;
				func_53();
				return;
			}
		}
		if (!Global_21660)
		{
			while (Global_21658 == 1)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (Global_20266.f_1 < 6)
				{
					Global_21658 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_52();
						if (Global_21660)
						{
							iLocal_30 = 1;
							Global_22620 = 1;
							func_121(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_21747, &(Global_1998[Global_7451 /*29*/].f_7), &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_3), 0);
							func_51(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_20254)
							{
								func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_121(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								unk_0xCED9E32812D6C7C7(&Global_8136, 17);
								func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_121(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								unk_0xCED9E32812D6C7C7(&Global_8136, 17);
								func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_22618 = 1;
							if (func_50(Global_7451, Global_20266) == 0)
							{
								func_121(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_21747, "CELL_300", &(Global_117[Global_7451 /*10*/].f_4), "CELL_195", 0);
								func_51(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_121(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_21747, &(Global_1998[Global_7451 /*29*/].f_7), &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_3), 0);
								func_51(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_20254)
							{
								func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_121(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							unk_0xB0550BC91B0159D6(&Global_8136, 17);
						}
					}
					if (func_49(2, Global_20235, 0))
					{
						func_47();
						Global_20192 = 0.19f;
						Global_21658 = 0;
						func_45();
						if (Global_21660)
						{
							Global_21224 = { Global_21741 };
							Global_22622 = 5;
						}
						else if (Global_21603 > 0)
						{
							Global_21863 = 1;
							Global_21605 = 0;
							Global_22626 = 0;
							if (BitTest(Global_8137, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_22589 + 1)
								{
									uLocal_111[iVar0] = func_44(&(Global_21864[iVar0 /*6*/]));
									uLocal_142[iVar0] = func_44(&(Global_22226[iVar0 /*6*/]));
									iVar0++;
								}
								func_43(Global_22589, &Global_20894, Global_7451, &Global_21681, &uLocal_111, &uLocal_142, 9, 0, 0, 0, 0);
							}
							else if (Global_21603 == 2)
							{
								func_25(&Global_20894, Global_7451, &Global_21681, &(Global_21759[0 /*6*/]), &(Global_21811[0 /*6*/]), &(Global_21759[1 /*6*/]), &(Global_21811[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_22622 = 1;
							Global_22618 = 0;
							Global_22620 = 0;
							Global_21615 = 0;
							func_23();
							return;
						}
						else
						{
							Global_21224 = { Global_21699 };
							Global_22622 = 1;
						}
						Global_22618 = 0;
						Global_22620 = 0;
						Global_21615 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_20236, 0) || BitTest(Global_8136, 24))
					{
						func_47();
						Global_20192 = 0.19f;
						Global_21658 = 0;
						func_45();
						if (Global_21660)
						{
							Global_21224 = { Global_21735 };
							Global_22622 = 4;
						}
						else if (Global_21603 > 0)
						{
							Global_21863 = 1;
							Global_21605 = 0;
							Global_22626 = 0;
							if (BitTest(Global_8137, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_22588 + 1)
								{
									uLocal_173[iVar1] = func_44(&(Global_22045[iVar1 /*6*/]));
									uLocal_204[iVar1] = func_44(&(Global_22407[iVar1 /*6*/]));
									iVar1++;
								}
								func_43(Global_22588, &Global_20894, Global_7451, &Global_21681, &uLocal_173, &uLocal_204, 9, 0, 0, 0, 0);
							}
							else if (Global_21603 == 2)
							{
								func_25(&Global_20894, Global_7451, &Global_21681, &(Global_21772[0 /*6*/]), &(Global_21824[0 /*6*/]), &(Global_21772[1 /*6*/]), &(Global_21824[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_22622 = 2;
							Global_22618 = 0;
							Global_22620 = 0;
							Global_21615 = 0;
							func_23();
							return;
						}
						else
						{
							Global_21224 = { Global_21705 };
							Global_22622 = 2;
						}
						Global_22618 = 0;
						Global_22620 = 0;
						Global_21615 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_20238, 0))
					{
						if (Global_21660)
						{
							Global_20192 = 0.19f;
							Global_21658 = 0;
							func_45();
							func_47();
							Global_21224 = { Global_21729 };
							Global_22622 = 3;
							Global_22618 = 0;
							Global_22620 = 0;
							Global_21615 = 0;
							func_23();
							func_53();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_21658)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (Global_20266.f_1 < 6)
				{
					Global_21658 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_52();
						func_51(Global_20247, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_121(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_121(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_121(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_51(Global_20247, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_22(Global_20247, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_20254)
						{
							func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_121(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0xB0550BC91B0159D6(&Global_8136, 17);
						iLocal_235 = 0;
						iLocal_30 = 1;
					}
					func_16();
					if (func_49(2, Global_20235, 0))
					{
						func_47();
						Global_21658 = 0;
						func_45();
						unk_0xEA5DEA46C3EE64D3(Global_20247, "GET_CURRENT_SELECTION");
						uLocal_236 = unk_0xD452B47F164A4D79();
						while (!unk_0x17E14239FB53CCE3(uLocal_236))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						iVar2 = unk_0xC2F770299DFFA794(uLocal_236);
						switch (iVar2)
						{
							case 0:
								Global_21224 = { Global_21735 };
								Global_22622 = 4;
								break;
							
							case 1:
								Global_21224 = { Global_21729 };
								Global_22622 = 3;
								break;
							
							case 2:
								Global_21224 = { Global_21741 };
								Global_22622 = 5;
								break;
						}
						Global_22618 = 0;
						Global_22620 = 0;
						Global_21615 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_20236, 0))
					{
						Global_21658 = 0;
						func_45();
					}
				}
			}
		}
		if (Global_21606 == 0)
		{
			unk_0xD681CC2BC1084DB6(0);
			unk_0xC1B1E9A034A63A62(0);
			while (unk_0x83666F9FB8FEBD4B() < 900 && Global_20266.f_1 == 9)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			Global_21605 = 6;
		}
		if (!Global_1574982)
		{
			unk_0x91DFC8F68F6D9B05(-1, "Hang_Up", &Global_20255, 1);
		}
		func_15();
		Global_20266.f_1 = Global_20268;
		func_8();
	}
	else if (Global_20464 == 0)
	{
		if (func_49(2, Global_20234, 0))
		{
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
				{
					if (BitTest(Global_8136, 20))
					{
					}
					else
					{
						Global_20244 = 1;
						func_45();
						unk_0xD681CC2BC1084DB6(0);
						Global_21654 = 1;
						Global_21655 = 1;
						Global_21605 = 6;
						func_15();
						Global_20266.f_1 = Global_20268;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()
{
	struct<3> Var0;
	
	if (Global_20249 == 1)
	{
		return;
	}
	if (Global_20266.f_1 < 4)
	{
		return;
	}
	while (!unk_0x0347CCBD719C8ADC(Global_20247))
	{
		if (Global_78319)
		{
			return;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_20266.f_1)
	{
		case 6:
			func_51(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_8741);
			if (Global_8741 == 1)
			{
				func_51(Global_20247, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20270), -1082130432, -1082130432, -1082130432);
				Global_20246 = Global_20270;
			}
			else
			{
				func_51(Global_20247, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20271), -1082130432, -1082130432, -1082130432);
				Global_20246 = Global_20271;
			}
			if (Global_20254)
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20466 == 0)
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xB0550BC91B0159D6(&Global_8136, 17);
			}
			else if (Global_78319)
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xB0550BC91B0159D6(&Global_8136, 17);
			}
			else
			{
				if (Global_20465 == 1)
				{
					if (Global_20254)
					{
						func_121(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_121(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20254)
				{
					func_121(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_121(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xCED9E32812D6C7C7(&Global_8136, 17);
			}
			if (Global_78319)
			{
				func_11();
				unk_0xB0550BC91B0159D6(&Global_8138, 9);
				func_51(Global_20247, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20270), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_51(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_121(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_121(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xB0550BC91B0159D6(&Global_8136, 17);
			if (BitTest(Global_8136, 20))
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20209)
				{
					func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20265 == 1)
			{
				func_10();
				func_51(Global_20247, "SET_THEME", unk_0xBBDA792448DB5A89(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21618)
				{
					unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
					unk_0x4F47E317C74C543B(4);
					unk_0x4F47E317C74C543B(0);
					unk_0x4F47E317C74C543B(2);
					unk_0x4ADC8B166E139423("CELL_CONDFON");
					unk_0x76DB21247AE4E4E2(&Global_21620);
					unk_0xD1D4F8D5470AFA4C();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0x6F06CF0E9AB02847();
				}
				else if (func_50(Global_7451, Global_20266) == 0)
				{
					func_121(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_121(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), "CELL_217", &(Global_1998[Global_7451 /*29*/].f_3), 0);
				}
				func_51(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21605 == 4 || Global_21605 == 3)
			{
				func_51(Global_20247, "SET_THEME", unk_0xBBDA792448DB5A89(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_21618)
				{
					unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
					unk_0x4F47E317C74C543B(4);
					unk_0x4F47E317C74C543B(0);
					unk_0x4F47E317C74C543B(2);
					unk_0x4ADC8B166E139423("CELL_CONDFON");
					unk_0x76DB21247AE4E4E2(&Global_21620);
					unk_0xD1D4F8D5470AFA4C();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					unk_0x6F06CF0E9AB02847();
				}
				else
				{
					if (Global_21863)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (func_50(Global_7451, Global_20266) == 0)
					{
						func_51(Global_20247, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_121(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_51(Global_20247, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_121(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), &Var0, &(Global_1998[Global_7451 /*29*/].f_3), 0);
					}
				}
				func_51(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_23();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_10()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		if (Global_20266 == 0)
		{
			switch (Global_113386.f_14051[Global_20266 /*20*/].f_6)
			{
				case 1:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 0);
					break;
				
				case 2:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 1);
					break;
				
				case 3:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 2);
					break;
				
				case 4:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 3);
					break;
				
				case 5:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 4);
					break;
				
				case 6:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 5);
					break;
				
				case 7:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_20266 == 1)
		{
			switch (Global_113386.f_14051[Global_20266 /*20*/].f_6)
			{
				case 1:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 6);
					break;
				
				case 2:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 0);
					break;
				
				case 3:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 1);
					break;
				
				case 4:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 2);
					break;
				
				case 5:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 3);
					break;
				
				case 6:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 4);
					break;
				
				case 7:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_20266 == 2)
		{
			switch (Global_113386.f_14051[Global_20266 /*20*/].f_6)
			{
				case 1:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 5);
					break;
				
				case 2:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 6);
					break;
				
				case 3:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 1);
					break;
				
				case 4:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 0);
					break;
				
				case 5:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 2);
					break;
				
				case 6:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 3);
					break;
				
				case 7:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_20266 == 3)
		{
			switch (Global_4541505)
			{
				case 1:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 0);
					break;
				
				case 2:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 1);
					break;
				
				case 3:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 2);
					break;
				
				case 4:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 3);
					break;
				
				case 5:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 4);
					break;
				
				case 6:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 5);
					break;
				
				case 7:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_11()
{
	if (Global_78319)
	{
		if (func_12() == 0)
		{
			return;
		}
		func_121(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xCED9E32812D6C7C7(&Global_8136, 17);
	}
}

int func_12()
{
	return 0;
}

void func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_22673 = 0;
	Global_8741 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8705[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_14(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar2 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20468 = 0;
								}
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_9(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar2);
								unk_0x6F06CF0E9AB02847();
							}
							if (Global_2725398)
							{
								if (iVar1 == 14)
								{
									func_121(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8705[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113386.f_14141[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113386.f_14141[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113386.f_14141[iVar3 /*104*/].f_99[Global_20266] == 1)
											{
												Global_22673++;
											}
										}
									}
									iVar3++;
								}
								func_121(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22673), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_78319)
								{
									iVar4 = 0;
									iVar4 = Global_4539963;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4539964[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4539964[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4539964[iVar5 /*104*/].f_99[Global_20266] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_121(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20266)
									{
										case 0:
											iVar6 = Global_44249;
											break;
										
										case 1:
											iVar6 = Global_44250;
											break;
										
										case 2:
											iVar6 = Global_44251;
											break;
										
										default:
											break;
									}
									func_121(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_121(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_9(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(Global_8142);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8137, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_9(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar7);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar8 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20468 = 0;
								}
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_9(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar8);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 8)
							{
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_9(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(42);
								unk_0x6F06CF0E9AB02847();
							}
							else if ((iVar1 == 23 && unk_0x3C57C2F07FEE34D2(&(Global_8143[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8137, 6))
							{
								unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_8143[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_9(&(Global_8143[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(42);
								unk_0x6F06CF0E9AB02847();
							}
							else if (Global_8143[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1888478.f_1;
								func_121(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_121(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8143[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8705[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_14(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_15()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return;
	}
	switch (Global_20268)
	{
		case 5:
			Global_20268 = 6;
			break;
		
		case 6:
			if (BitTest(Global_8137, 5))
			{
				Global_20268 = 6;
				unk_0xB0550BC91B0159D6(&Global_8137, 5);
			}
			else
			{
				Global_20268 = 3;
			}
			break;
		
		case 7:
			Global_20268 = 3;
			break;
		
		case 3:
			if (BitTest(Global_8137, 5))
			{
				Global_20268 = 6;
				unk_0xB0550BC91B0159D6(&Global_8137, 5);
			}
			else
			{
				Global_20268 = 3;
			}
			break;
		
		default:
			Global_20268 = 3;
			break;
	}
}

void func_16()
{
	if (iLocal_235)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_235 = 0;
		}
	}
	if (iLocal_235 == 0)
	{
		if (func_49(2, Global_20242, 0) || unk_0xF09A4F413B0D30EB(2, 181))
		{
			func_20();
			iLocal_235 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_49(2, Global_20243, 0) || unk_0xF09A4F413B0D30EB(2, 180))
		{
			func_17();
			iLocal_235 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_17()
{
	func_51(Global_20247, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_20255, 1);
	func_18();
}

void func_18()
{
	if (func_19())
	{
		if (Global_20469 == 0)
		{
			unk_0xBCA3FA8D0984A7D3(2);
		}
		else
		{
			unk_0xBCA3FA8D0984A7D3(1);
		}
	}
}

int func_19()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x47E529DA87615548();
	iVar1 = unk_0x4DE6A646AFB7CF5C(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4541507 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_20()
{
	func_51(Global_20247, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_20255, 1);
	func_21();
}

void func_21()
{
	if (func_19())
	{
		if (Global_20469 == 0)
		{
			unk_0xBCA3FA8D0984A7D3(1);
		}
		else
		{
			unk_0xBCA3FA8D0984A7D3(2);
		}
	}
}

void func_22(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	func_9(sParam2);
	if (!unk_0xACC32B78196FBC2A(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0xACC32B78196FBC2A(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0xACC32B78196FBC2A(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0xACC32B78196FBC2A(sParam6))
	{
		func_9(sParam6);
	}
	unk_0x6F06CF0E9AB02847();
}

void func_23()
{
	if (unk_0x0347CCBD719C8ADC(Global_20247))
	{
		func_24();
		if (Global_20265 == 1)
		{
			if (Global_20254)
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21652)
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8136, 20))
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_121(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xB0550BC91B0159D6(&Global_8136, 17);
		}
		else
		{
			func_121(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_121(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xB0550BC91B0159D6(&Global_8136, 17);
			if (BitTest(Global_8136, 20))
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20209)
				{
					func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_24()
{
	if (Global_78319)
	{
		func_121(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xB0550BC91B0159D6(&Global_8136, 17);
	}
}

int func_25(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar11;
	
	func_42(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_41();
	if (iParam8 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_39(2, &uVar0, &uVar11, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_26(&uVar0, &uVar11, iParam7, bParam11);
}

int func_26(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam2 > Global_21607)
			{
				if (bParam3 == 0)
				{
					unk_0xD681CC2BC1084DB6(0);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
				}
				else
				{
					func_111();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x2E5F8A288A954523())
		{
			return 0;
		}
		if (func_38(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_37();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22601 = Global_22602;
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21224.f_370 = Global_22594;
		Global_21601 = Global_21602;
		Global_21603 = Global_21604;
		if (Global_21863 == 0)
		{
			Global_21759[0 /*6*/] = { Global_21785[0 /*6*/] };
			Global_21759[1 /*6*/] = { Global_21785[1 /*6*/] };
			Global_21811[0 /*6*/] = { Global_21837[0 /*6*/] };
			Global_21811[1 /*6*/] = { Global_21837[1 /*6*/] };
			Global_21772[0 /*6*/] = { Global_21798[0 /*6*/] };
			Global_21772[1 /*6*/] = { Global_21798[1 /*6*/] };
			Global_21824[0 /*6*/] = { Global_21850[0 /*6*/] };
			Global_21824[1 /*6*/] = { Global_21850[1 /*6*/] };
		}
		if (Global_21611)
		{
			unk_0xB0550BC91B0159D6(&Global_8136, 20);
			unk_0xB0550BC91B0159D6(&Global_8137, 17);
			unk_0xB0550BC91B0159D6(&Global_8138, 0);
			if (bParam3)
			{
				func_30();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				if (unk_0x7A6B8C262362C722(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (func_29())
				{
					return 0;
				}
				if (unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x90DCD1F6C0982DC1(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x8DE48073046D4CF0(unk_0xE2D3D51028F0428A(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (Global_21863 == 0)
					{
						if (unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A()))
						{
							return 0;
						}
						if (unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9()))
						{
							return 0;
						}
						if (unk_0x3DA4842FA4407BE2(unk_0xE2D3D51028F0428A()))
						{
							return 0;
						}
						if (unk_0xA89C6F3818CC3ACB(unk_0x9E2D6C50374FCFA9(), 0))
						{
							return 0;
						}
					}
				}
			}
			if (func_28())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
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
			}
			func_27();
			Global_21615 = bParam3;
		}
		Global_21607 = iParam2;
		if (Global_21601 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_21601)
			{
				StringCopy(&(Global_21224.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_21224.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_20471 = 0;
		func_53();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_21607 || iParam2 == Global_21607)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_111();
	}
	return 0;
}

void func_27()
{
	Global_21658 = Global_21657;
	Global_21652 = Global_21653;
	Global_21699 = { Global_21687 };
	Global_21705 = { Global_21693 };
	Global_21660 = Global_21659;
	Global_21729 = { Global_21711 };
	Global_21735 = { Global_21717 };
	Global_21741 = { Global_21723 };
	Global_21747 = { Global_21753 };
	Global_7451 = Global_7452;
	Global_7453 = Global_7454;
	Global_21616 = Global_21617;
	Global_21618 = Global_21619;
	Global_21620 = { Global_21636 };
	Global_21609 = Global_21610;
	Global_22621 = 0;
	Global_21654 = 0;
	Global_21655 = 0;
	unk_0xB0550BC91B0159D6(&Global_8137, 16);
}

int func_28()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_29()
{
	int iVar0;
	int iVar1;
	
	if (Global_78319)
	{
		iVar0 = 0;
		unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar1, 1);
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x2358AE4C940CF1DF() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0x98C2AE9A4C384CBF(unk_0xE2D3D51028F0428A(), 78, 1))
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

void func_30()
{
	if (func_14(14))
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
		Global_20266 = func_31();
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

var func_31()
{
	func_32();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_32()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_35(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_34(unk_0xE2D3D51028F0428A());
			if (func_33(iVar0) && (!func_14(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_33(Global_113386.f_2363.f_539.f_4321))
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

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return func_36(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_37()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20894[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20894[iVar0 /*10*/].f_1), "", 24);
		Global_20894[iVar0 /*10*/].f_7 = 0;
		Global_20894[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20894.f_161 = -99;
	Global_20894.f_162 = { 0f, 0f, 0f };
}

bool func_38(int iParam0, int iParam1)
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

void func_39(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_40(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_40(var uParam0)
{
	Global_21602 = uParam0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
}

void func_41()
{
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_21619 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	Global_2883585 = 0;
}

void func_42(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = iParam5;
	if (iParam3 == 0)
	{
		Global_22592 = 1;
		Global_22590 = 0;
	}
	else
	{
		Global_22592 = 0;
		Global_22590 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22593 = 1;
		Global_22591 = 0;
	}
	else
	{
		Global_22593 = 0;
		Global_22591 = 1;
	}
}

int func_43(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_42(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_41();
	if (iParam7 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	func_40(uParam0);
	return func_26(uParam4, uParam5, iParam6, bParam10);
}

var func_44(var uParam0)
{
	return uParam0;
}

void func_45()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x91DFC8F68F6D9B05(-1, "Menu_Accept", &Global_20255, 1);
		func_46();
	}
}

void func_46()
{
	if (func_19())
	{
		unk_0xBCA3FA8D0984A7D3(5);
	}
}

void func_47()
{
	if (func_48())
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				if (!Global_20209)
				{
					if (!BitTest(Global_8136, 11))
					{
						func_61();
					}
				}
			}
		}
	}
}

int func_48()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			if (Global_20209 == 0)
			{
				if (Global_7451 != 128)
				{
					if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						if (Global_21605 != 2)
						{
						}
					}
				}
			}
		}
		if (func_14(14))
		{
			return 0;
		}
		if (unk_0x1CFDD57741085128(unk_0xE2D3D51028F0428A(), 0))
		{
			return 0;
		}
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			if (!unk_0x94398B6170DCA18C())
			{
				if (unk_0xD8F9DF94CD871327(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A()) || unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A())) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || (unk_0xED99779C40AEE6C4(unk_0xE2D3D51028F0428A()) && !(BitTest(Global_4718592.f_37, 17) && (unk_0x44859561F653DD4E() || Global_1922883))))
		{
			return 0;
		}
		if (Global_112434)
		{
			return 0;
		}
	}
	if (Global_78319)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x47E529DA87615548();
	iVar1 = unk_0x4DE6A646AFB7CF5C(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x94398B6170DCA18C()))
	{
		iVar2 = 1;
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				uVar3 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
				if ((((((((unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(uVar3)) || unk_0x532C99FAF70C652B(unk_0x15CAA6D7B11F1A7C(uVar3))) || unk_0xCD8C08FA7D84C27E(unk_0x15CAA6D7B11F1A7C(uVar3))) || unk_0x15CAA6D7B11F1A7C(uVar3) == joaat("seashark")) || unk_0x15CAA6D7B11F1A7C(uVar3) == joaat("seashark2")) || unk_0x15CAA6D7B11F1A7C(uVar3) == joaat("rhino")) || unk_0x15CAA6D7B11F1A7C(uVar3) == joaat("submersible")) || unk_0x15CAA6D7B11F1A7C(uVar3) == joaat("submersible2")) || unk_0x15CAA6D7B11F1A7C(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4541507 || iVar2 == 1)
	{
		if (unk_0xB4C854DD86E40FDA(joaat("apptrackify")) > 0 || Global_113386.f_14051.f_89)
		{
			if (unk_0xB4C854DD86E40FDA(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xF09A4F413B0D30EB(iParam0, uParam1) || (iParam2 == 1 && unk_0xF01464D7AF0B7347(iParam0, iParam1)))
	{
		if (unk_0x8FE9914D4872D601())
		{
			if (unk_0x9417F1137725B4B3() == 0 || (unk_0xD199EE48D2842EB1() && unk_0x3A76A0944BE2C291(2)))
			{
				return 0;
			}
		}
		if (unk_0xF1EC2C71FD1371B8() || unk_0x3E6C9DAD84CEFED1())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_24[iParam1];
}

void func_51(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x6F06CF0E9AB02847();
}

void func_52()
{
	if (func_48())
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				if (!Global_20209)
				{
					if (BitTest(Global_8136, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_53()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20473[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD681CC2BC1084DB6(0);
	Global_21605 = 1;
}

int func_54()
{
	if (unk_0x9315DBF7D972F07A())
	{
		iLocal_108 = unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), uLocal_107);
	}
	else
	{
		iLocal_105 = unk_0x320D1840B6DAA1CC();
		iLocal_108 = (iLocal_105 - iLocal_104);
	}
	return 0;
}

void func_55(int iParam0)
{
	if (func_59())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_58())
		{
			func_56(1, 1);
		}
		else
		{
			func_56(0, 0);
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
	if (!func_28())
	{
		Global_20266.f_1 = 3;
	}
}

void func_56(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_57(0))
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

int func_57(int iParam0)
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

bool func_58()
{
	return BitTest(Global_1958711, 5);
}

bool func_59()
{
	return BitTest(Global_1958711, 19);
}

void func_60()
{
	if (func_49(2, Global_20243, 0))
	{
		if (Global_22616 == 0)
		{
			if (Global_21611)
			{
				if (BitTest(Global_8137, 17))
				{
				}
				else
				{
					unk_0x26A09F012CC86E43();
				}
			}
		}
	}
}

void func_61()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (func_62() && unk_0x1CFDD57741085128(unk_0xE2D3D51028F0428A(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_78319)
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && iVar1 == 0)
		{
			iVar2 = unk_0xF2BC143F97765619(unk_0xE2D3D51028F0428A(), 0);
			if (Global_78319)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x5540488889EC816A(unk_0xE2D3D51028F0428A()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x5540488889EC816A(unk_0xE2D3D51028F0428A()))
			{
				iVar0 = 1;
			}
			if (!Global_20209)
			{
				if (Global_7451 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
						{
							if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
							{
							}
							else
							{
								if (Global_78319)
								{
									unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 244, 0);
									unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 243, 0);
									unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 242, 0);
								}
								unk_0xCED9E32812D6C7C7(&Global_8136, 11);
								unk_0x57CAA5FBF134D4AE(unk_0xE2D3D51028F0428A(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_62()
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x47E529DA87615548();
	iVar1 = unk_0x4DE6A646AFB7CF5C(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_63()
{
	if (Global_78319 == 0)
	{
		func_60();
	}
	if (iLocal_33 == 1)
	{
		func_55(0);
	}
	if (iLocal_30 == 0)
	{
		iLocal_30 = 1;
		Global_22618 = 1;
		if (func_50(Global_7451, Global_20266) == 0)
		{
			func_121(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_21747, "CELL_300", "CELL_195", "CELL_195", 0);
			func_51(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_121(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(4), -1f, -1f, &Global_21747, &(Global_1998[Global_7451 /*29*/].f_7), &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_3), 0);
			func_51(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_20192 = 0.2f;
		if (Global_20254)
		{
			func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_121(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xB0550BC91B0159D6(&Global_8136, 17);
	}
	if (Global_21658 == 1)
	{
		if (Global_20266.f_1 < 6)
		{
			Global_21658 = 0;
		}
		else
		{
			if (Global_20206 == 0)
			{
				if (func_49(2, Global_20235, 0))
				{
					Global_20192 = 0.19f;
					Global_21658 = 0;
					func_45();
					Global_22623 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_49(2, Global_20236, 0))
			{
				Global_20192 = 0.19f;
				Global_21658 = 0;
				func_45();
				Global_22623 = 2;
			}
		}
	}
	else if (Global_22623 == 2)
	{
		if (Global_21606 == 0)
		{
			unk_0xD681CC2BC1084DB6(0);
			Global_21605 = 6;
		}
		func_15();
		Global_20266.f_1 = Global_20268;
		func_8();
	}
	else if (!unk_0xA3329B7A7520670E())
	{
		iLocal_32 = 0;
		unk_0xD681CC2BC1084DB6(0);
		Global_21605 = 6;
		unk_0x91DFC8F68F6D9B05(-1, "Hang_Up", &Global_20255, 1);
		func_15();
		Global_20266.f_1 = Global_20268;
		func_8();
	}
}

void func_64()
{
	if (Global_20472 == 1)
	{
		if (unk_0xA3329B7A7520670E())
		{
			if (unk_0xD973AA641A1CF78A())
			{
				Global_20472 = 0;
			}
		}
		if (!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			Global_20472 = 0;
			unk_0xD681CC2BC1084DB6(0);
			Global_21605 = 6;
		}
	}
	if (unk_0xC9D9444186B5A374() > iLocal_35)
	{
		if (Global_20472 == 1)
		{
			Global_20472 = 0;
		}
	}
	if (unk_0x83666F9FB8FEBD4B() < Global_22626 || Global_20472 == 1)
	{
		if (func_49(2, Global_20234, 0))
		{
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
				{
					if (BitTest(Global_8136, 20))
					{
					}
					else
					{
						Global_20244 = 1;
						func_45();
						unk_0xD681CC2BC1084DB6(0);
						Global_21654 = 1;
						Global_21605 = 6;
						unk_0xB0550BC91B0159D6(&Global_8136, 27);
						if (!Global_21616)
						{
							unk_0xCED9E32812D6C7C7(&Global_8137, 5);
						}
						func_15();
						Global_20266.f_1 = Global_20268;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_8136, 27);
		Global_21605 = 4;
		Global_21662 = 0;
		func_67();
		func_66();
		if (!Global_21618)
		{
			if (Global_22622 == 0)
			{
				if (!BitTest(Global_8138, 5))
				{
					unk_0xFED65F7C525B4505();
				}
				unk_0xB0550BC91B0159D6(&Global_8138, 5);
			}
			else
			{
				unk_0x0C42FE4000B56A73(Global_21224.f_368, Global_21224.f_369);
			}
		}
		func_65();
	}
}

void func_65()
{
	if (unk_0x9315DBF7D972F07A())
	{
		uLocal_107 = unk_0x0A89FDFA763DCAED();
	}
	else
	{
		iLocal_104 = unk_0x320D1840B6DAA1CC();
	}
}

void func_66()
{
	if (Global_21618)
	{
		if (Global_78319)
		{
			if (unk_0x0347CCBD719C8ADC(Global_20247))
			{
				if (!unk_0x8FE9914D4872D601())
				{
					func_121(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					unk_0xCED9E32812D6C7C7(&(Global_2815059.f_1795), 15);
				}
			}
		}
	}
}

void func_67()
{
	if (unk_0x0347CCBD719C8ADC(Global_20247))
	{
		if (!Global_21613)
		{
			func_121(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_121(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xB0550BC91B0159D6(&Global_8136, 17);
			if (BitTest(Global_8136, 20))
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20209)
				{
					func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21618)
			{
				unk_0xEA5DEA46C3EE64D3(Global_20247, "SET_DATA_SLOT");
				unk_0x4F47E317C74C543B(4);
				unk_0x4F47E317C74C543B(0);
				unk_0x4F47E317C74C543B(2);
				unk_0x4ADC8B166E139423("CELL_CONDFON");
				unk_0x76DB21247AE4E4E2(&Global_21620);
				unk_0xD1D4F8D5470AFA4C();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				unk_0x6F06CF0E9AB02847();
			}
			else if (func_50(Global_7451, Global_20266) == 0)
			{
				func_121(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_121(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), "CELL_219", &(Global_1998[Global_7451 /*29*/].f_3), 0);
			}
		}
		func_51(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_68()
{
	if (unk_0x9315DBF7D972F07A())
	{
		iLocal_109 = unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), uLocal_95);
		iLocal_110 = unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), uLocal_98);
	}
	else
	{
		iLocal_94 = unk_0x320D1840B6DAA1CC();
		iLocal_109 = (iLocal_94 - iLocal_93);
		iLocal_97 = unk_0x320D1840B6DAA1CC();
		iLocal_110 = (iLocal_97 - iLocal_96);
	}
	if (Global_21652 == 1)
	{
		if (func_48())
		{
			if (iLocal_109 > 4000)
			{
				if (BitTest(Global_8136, 14))
				{
					if (unk_0x0347CCBD719C8ADC(Global_20247))
					{
						func_45();
						Global_20265 = 2;
						func_67();
						func_66();
					}
				}
			}
		}
		else if (iLocal_109 > 2000)
		{
			if (BitTest(Global_8136, 14))
			{
				if (unk_0x0347CCBD719C8ADC(Global_20247))
				{
					func_45();
					Global_20265 = 2;
					func_67();
					func_66();
				}
			}
		}
	}
	if (iLocal_110 > 10000)
	{
		Global_20265 = 3;
	}
	if (Global_20265 == 2)
	{
		iLocal_30 = 0;
		Global_21605 = 4;
		func_61();
		Global_21662 = 0;
		func_67();
		func_66();
		if (!Global_21618)
		{
			if (Global_22622 == 0)
			{
				unk_0xFED65F7C525B4505();
			}
			else
			{
				unk_0x0C42FE4000B56A73(Global_21224.f_368, Global_21224.f_369);
			}
		}
		func_65();
		Global_22621 = 0;
	}
	if (Global_21652 == 0)
	{
		if (Global_20265 == 3)
		{
			if (Global_21618)
			{
				func_70();
				func_55(0);
			}
			else
			{
				func_69();
				Global_22621 = 1;
				unk_0xD681CC2BC1084DB6(0);
				Global_21605 = 6;
				func_15();
				Global_20266.f_1 = Global_20268;
				func_8();
			}
		}
	}
	else if (Global_20265 == 3)
	{
	}
}

void func_69()
{
}

void func_70()
{
	Global_2821909.f_2 = 1;
	Global_2821909.f_38 = 1;
	if (unk_0x20E4972CBF3DBE1B())
	{
		if (unk_0xEE03516F1F1A249B())
		{
			while (unk_0x8D9B0AD025E894AD())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x39FC9DEDBEF0B2CE();
			Global_2821909 = 0;
			Global_2821909.f_2 = 0;
		}
		else if (func_73(Global_2821909.f_20))
		{
			if (unk_0x106C9EE9D83F20DF(&(Global_2821909.f_20)))
			{
				if (!unk_0x98E8458382A8BD60(&(Global_2821909.f_20)))
				{
					func_71();
				}
			}
		}
		else
		{
			func_71();
		}
	}
	else
	{
		func_71();
	}
	if (Global_2821909.f_37)
	{
		func_55(0);
	}
	Global_2821909.f_37 = 0;
	Global_2821909.f_3 = 0;
}

void func_71()
{
	Global_2821909.f_1 = 0;
	Global_2821909 = 0;
	Global_2821909.f_2 = 0;
	Global_2821909.f_33 = -1;
	Global_2821909.f_34 = -1;
	StringCopy(&(Global_2821909.f_4), "", 64);
	StringCopy(&(Global_2821909.f_39[0 /*16*/]), "", 64);
	Global_2821909.f_38 = 0;
	Global_2821909.f_56 = 0;
	Global_2821909.f_57 = 0;
	Global_2821909.f_58 = -2;
	Global_2821909.f_3 = 0;
	func_72(&(Global_2821909.f_20));
}

void func_72(var uParam0)
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

bool func_73(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x66237ABAFDF8615A(&uParam0, 13);
}

void func_74()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	
	iLocal_92 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	while (iLocal_92 < Global_21601)
	{
		func_91();
		func_90();
		func_89();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_44 = { Global_21224.f_6[iLocal_92 /*6*/] };
			StringConCat(&cLocal_44, "A", 24);
			Global_20473[iVar2 /*6*/] = { Global_21224.f_6[iLocal_92 /*6*/] };
			StringConCat(&(Global_20473[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_20473[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_20473[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (unk_0xE73671E3D37CF79E(&cLocal_38))
			{
				StringCopy(&cLocal_50, unk_0xAEF70623D03F7B02(&cLocal_38), 64);
				iVar3 = func_88(iVar13);
				iVar4 = func_87(iVar13);
				uVar5 = func_85(iVar13);
				uLocal_82 = func_84();
				uLocal_83 = func_83();
				uLocal_84 = func_82();
				uVar6 = func_81(iVar13);
				uVar7 = func_80(iVar13);
				uVar8 = func_79(iVar13);
				uVar12 = func_78(iVar13);
				uVar9 = func_77(iVar13);
				uVar10 = func_76(iVar13);
				uVar11 = func_75(iVar13);
				if (unk_0xE73671E3D37CF79E(&(Global_20473[iVar2 /*6*/])))
				{
					if (unk_0x3C57C2F07FEE34D2(&(Global_20473[iVar2 /*6*/]), &(Global_21224.f_187[iLocal_92 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						unk_0x532C5782EA6BC972(iVar3, &cLocal_50, &(Global_20473[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (unk_0xE73671E3D37CF79E(&cLocal_44))
			{
				StringCopy(&cLocal_50, unk_0xAEF70623D03F7B02(&cLocal_44), 64);
				iVar3 = func_88(0);
				iVar4 = func_87(0);
				uVar5 = func_85(0);
				uLocal_82 = func_84();
				uLocal_83 = func_83();
				uLocal_84 = func_82();
				uVar6 = func_81(0);
				uVar7 = func_80(0);
				uVar8 = func_79(0);
				uVar12 = func_78(0);
				uVar9 = func_77(0);
				uVar10 = func_76(0);
				uVar11 = func_75(0);
				unk_0x532C5782EA6BC972(iVar3, &cLocal_50, &(Global_21224.f_6[iLocal_92 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_20473[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_20473[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_92++;
		iLocal_29 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_21611 == 0)
	{
		unk_0x524B5FC84F413CA8(uLocal_83);
		unk_0x91700CAD9F55AC58(uLocal_84);
		unk_0x71C95EBA363BDEAE(Global_21224.f_368, Global_21224.f_369, Global_21224.f_370, uLocal_82);
		Global_21605 = 4;
	}
}

int func_75(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_85), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (unk_0x3C57C2F07FEE34D2(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_85), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (unk_0x3C57C2F07FEE34D2(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_85), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (unk_0x3C57C2F07FEE34D2(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_85), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (unk_0x3C57C2F07FEE34D2(uVar0, "0"))
	{
		return 1;
	}
	if (unk_0x3C57C2F07FEE34D2(uVar0, "1"))
	{
		return 1;
	}
	if (unk_0x3C57C2F07FEE34D2(uVar0, "2"))
	{
		return 2;
	}
	if (unk_0x3C57C2F07FEE34D2(uVar0, "3"))
	{
		return 3;
	}
	if (unk_0x3C57C2F07FEE34D2(uVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_79(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_85), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (unk_0x3C57C2F07FEE34D2(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_80(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_85), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (unk_0x3C57C2F07FEE34D2(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_81(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_85), iParam0 * 7, iParam0 * 7 + 1);
	if (unk_0x3C57C2F07FEE34D2(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_82()
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_73), 2, 3);
	if (unk_0x3C57C2F07FEE34D2(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_83()
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_73), 1, 2);
	if (unk_0x3C57C2F07FEE34D2(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_84()
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_73), 0, 1);
	if (unk_0x3C57C2F07FEE34D2(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_85(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_66), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_86(uVar0);
}

int func_86(var uParam0)
{
	if (unk_0x3C57C2F07FEE34D2(uParam0, "0"))
	{
		return 0;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "1"))
	{
		return 1;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "2"))
	{
		return 2;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "3"))
	{
		return 3;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "4"))
	{
		return 4;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "5"))
	{
		return 5;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "6"))
	{
		return 6;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "7"))
	{
		return 7;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "8"))
	{
		return 8;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "9"))
	{
		return 9;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "A"))
	{
		return 10;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "B"))
	{
		return 11;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "C"))
	{
		return 12;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "D"))
	{
		return 13;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "E"))
	{
		return 14;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "F"))
	{
		return 15;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "G"))
	{
		return 16;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "H"))
	{
		return 17;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "I"))
	{
		return 18;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "J"))
	{
		return 19;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "K"))
	{
		return 20;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "L"))
	{
		return 21;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "M"))
	{
		return 22;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "N"))
	{
		return 23;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "O"))
	{
		return 24;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "P"))
	{
		return 25;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "Q"))
	{
		return 26;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "R"))
	{
		return 27;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "S"))
	{
		return 28;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "T"))
	{
		return 29;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "U"))
	{
		return 30;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "V"))
	{
		return 31;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "W"))
	{
		return 32;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "X"))
	{
		return 33;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "Y"))
	{
		return 34;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "Z"))
	{
		return 35;
	}
	if (unk_0x3C57C2F07FEE34D2(uParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_87(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_66), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_86(uVar0);
}

int func_88(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_66), iParam0 * 3, iParam0 * 3 + 1);
	return func_86(uVar0);
}

void func_89()
{
	cLocal_85 = { Global_21224.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_85, "LF", 24);
	if (unk_0xE73671E3D37CF79E(&cLocal_85))
	{
		sLocal_91 = unk_0xAEF70623D03F7B02(&cLocal_85);
		if (unk_0xE8F6C1F695B25B91(sLocal_91))
		{
		}
	}
}

void func_90()
{
	cLocal_73 = { Global_21224.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_73, "IF", 24);
	if (unk_0xE73671E3D37CF79E(&cLocal_73))
	{
		sLocal_79 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_73), 0, 1);
		if (unk_0xE8F6C1F695B25B91(sLocal_79))
		{
		}
		sLocal_80 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_73), 1, 2);
		if (unk_0xE8F6C1F695B25B91(sLocal_80))
		{
		}
		sLocal_81 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_73), 2, 3);
		if (unk_0xE8F6C1F695B25B91(sLocal_81))
		{
		}
	}
}

void func_91()
{
	cLocal_66 = { Global_21224.f_6[iLocal_92 /*6*/] };
	StringConCat(&cLocal_66, "SL", 24);
	if (unk_0xE73671E3D37CF79E(&cLocal_66))
	{
		sLocal_72 = unk_0xAEF70623D03F7B02(&cLocal_66);
		if (unk_0xE8F6C1F695B25B91(sLocal_72))
		{
		}
	}
}

void func_92()
{
	func_93();
	unk_0x524B5FC84F413CA8(uLocal_83);
	unk_0x91700CAD9F55AC58(uLocal_84);
	if (Global_22597)
	{
		unk_0x3A8253262437BA02(Global_21224.f_368, Global_21224.f_369, Global_21224.f_370, uLocal_82);
		iLocal_36 = unk_0x320D1840B6DAA1CC();
	}
	else
	{
		unk_0x71C95EBA363BDEAE(Global_21224.f_368, Global_21224.f_369, Global_21224.f_370, uLocal_82);
	}
	Global_21605 = 4;
}

void func_93()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	iLocal_33 = 0;
	if (unk_0x7B32AFE3B3F7D5EB(&Global_21681))
	{
		if (unk_0x3C57C2F07FEE34D2(&Global_21681, "CT_AUD"))
		{
			Global_2883586 = 1;
		}
		iVar13 = 0;
		if (func_103() || func_102())
		{
			if (Global_1835497 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_78319 || func_101(0))
		{
			if (Global_1835497 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_99())
		{
			iVar14 = 1;
		}
		if (func_98(unk_0x2E87280918B16506(&Global_21681)))
		{
			iVar14 = 0;
			Global_2883586 = 0;
			iVar13 = 1;
		}
		if (((Global_21607 < 5 || Global_21607 == 10) || Global_21607 == 12) || Global_21607 == 13)
		{
			if ((iVar14 == 1 || Global_2883586 == 1) || iVar13 == 2)
			{
				unk_0x249A0D3C5714BCF4(&Global_21681, 7);
				while (!unk_0x01896B71C5AC966E(7))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
			else
			{
				unk_0xC5BF49FEF70EBF12(&Global_21681, 15);
				while (!unk_0x01896B71C5AC966E(15))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2883586 == 1) || iVar13 == 2)
		{
			unk_0x249A0D3C5714BCF4(&Global_21681, 6);
			while (!unk_0x01896B71C5AC966E(6))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		else if (unk_0xB4C854DD86E40FDA(joaat("fm_mission_controller_2020")) == 0)
		{
			unk_0xC5BF49FEF70EBF12(&Global_21681, 14);
			while (!unk_0x01896B71C5AC966E(14))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else
	{
		iLocal_33 = 1;
		return;
	}
	unk_0x59B217A592638F61();
	func_97();
	func_96();
	func_95();
	func_94();
	Global_22615 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_44 = { Global_21224 };
		StringConCat(&cLocal_44, "A", 24);
		Global_20473[iVar2 /*6*/] = { Global_21224 };
		StringConCat(&(Global_20473[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_20473[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_20473[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (unk_0xE73671E3D37CF79E(&cLocal_38))
		{
			StringCopy(&cLocal_50, unk_0xAEF70623D03F7B02(&cLocal_38), 64);
			iVar3 = func_88(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4541417 == 0)
				{
				}
			}
			iVar4 = func_87(iVar2);
			uVar5 = func_85(iVar2);
			uLocal_82 = func_84();
			uLocal_83 = func_83();
			uLocal_84 = func_82();
			uVar6 = func_81(iVar2);
			uVar7 = func_80(iVar2);
			uVar8 = func_79(iVar2);
			uVar12 = func_78(iVar2);
			uVar9 = func_77(iVar2);
			uVar10 = func_76(iVar2);
			uVar11 = func_75(iVar2);
			if (unk_0xE73671E3D37CF79E(&(Global_20473[iVar2 /*6*/])))
			{
				if (Global_22595 == 0 && Global_22601 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x532C5782EA6BC972(iVar3, &cLocal_50, &(Global_20473[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (unk_0x3C57C2F07FEE34D2(&(Global_20473[iVar2 /*6*/]), &Global_22603))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x532C5782EA6BC972(iVar3, &cLocal_50, &(Global_20473[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_22615 = iVar2;
					if (Global_22601 == 1)
					{
						Global_22601 = 0;
					}
				}
			}
			else if (Global_22601 == 0 && Global_22595 == 0)
			{
				unk_0x532C5782EA6BC972(iVar3, &cLocal_50, &cLocal_50, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (unk_0xE73671E3D37CF79E(&cLocal_44))
			{
				StringCopy(&cLocal_50, unk_0xAEF70623D03F7B02(&cLocal_44), 64);
				iVar3 = func_88(iVar2);
				iVar4 = func_87(iVar2);
				uVar5 = func_85(iVar2);
				uLocal_82 = func_84();
				uLocal_83 = func_83();
				uLocal_84 = func_82();
				uVar6 = func_81(iVar2);
				uVar7 = func_80(iVar2);
				uVar8 = func_79(iVar2);
				uVar12 = func_78(iVar2);
				uVar9 = func_77(iVar2);
				uVar10 = func_76(iVar2);
				uVar11 = func_75(iVar2);
				unk_0x532C5782EA6BC972(iVar3, &cLocal_50, &Global_21224, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_94()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_20894[iVar0 /*10*/].f_7 == 1)
		{
			if (unk_0xE5965CDF24F93A9F(Global_20894[iVar0 /*10*/]) || Global_20894[iVar0 /*10*/] == 0)
			{
				unk_0x5EC2D166433A9AA4(iVar0, Global_20894[iVar0 /*10*/], &(Global_20894[iVar0 /*10*/].f_1));
			}
			if (Global_20894.f_161 == iVar0)
			{
				if ((Global_20894.f_162 != 0f && Global_20894.f_162.f_1 != 0f) && Global_20894.f_162.f_2 != 0f)
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0x71995CC4A2EFFFBF(Global_20894.f_161, Global_20894.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4541417 == 1)
	{
		Global_4541417 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4541236[iVar0 /*9*/].f_7 == 1)
			{
				if (unk_0xE5965CDF24F93A9F(Global_4541236[iVar0 /*9*/]) || Global_4541236[iVar0 /*9*/] == 0)
				{
					unk_0x5EC2D166433A9AA4(Global_4541236[iVar0 /*9*/].f_8, Global_4541236[iVar0 /*9*/], &(Global_4541236[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_95()
{
	cLocal_85 = { Global_21224 };
	StringConCat(&cLocal_85, "LF", 24);
	if (unk_0xE73671E3D37CF79E(&cLocal_85))
	{
		sLocal_91 = unk_0xAEF70623D03F7B02(&cLocal_85);
		if (unk_0xE8F6C1F695B25B91(sLocal_91))
		{
		}
	}
}

void func_96()
{
	cLocal_73 = { Global_21224 };
	StringConCat(&cLocal_73, "IF", 24);
	if (unk_0xE73671E3D37CF79E(&cLocal_73))
	{
		sLocal_79 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_73), 0, 1);
		if (unk_0xE8F6C1F695B25B91(sLocal_79))
		{
		}
		sLocal_80 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_73), 1, 2);
		if (unk_0xE8F6C1F695B25B91(sLocal_80))
		{
		}
		sLocal_81 = unk_0x6ABF9C6F18308B78(unk_0xAEF70623D03F7B02(&cLocal_73), 2, 3);
		if (unk_0xE8F6C1F695B25B91(sLocal_81))
		{
		}
	}
}

void func_97()
{
	cLocal_66 = { Global_21224 };
	StringConCat(&cLocal_66, "SL", 24);
	if (unk_0xE73671E3D37CF79E(&cLocal_66))
	{
		sLocal_72 = unk_0xAEF70623D03F7B02(&cLocal_66);
		if (unk_0xE8F6C1F695B25B91(sLocal_72))
		{
		}
	}
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case joaat("apcutau"):
		case joaat("apair"):
		case joaat("apcalau"):
		case joaat("pbpau"):
		case joaat("pbbau"):
		case joaat("expowau"):
		case joaat("excalau"):
		case joaat("excpaau"):
		case joaat("exhelau"):
		case joaat("bplesau"):
		case joaat("bpmalau"):
		case joaat("lowreau"):
		case 1566303118:
		case 1220013368:
		case 71115730:
		case -251854137:
		case -243052328:
		case -1417718107:
		case joaat("impaaud"):
		case joaat("imdunau"):
		case joaat("imruiau"):
		case joaat("immecau"):
		case joaat("imarmau"):
		case joaat("imblzau"):
		case joaat("imphaau"):
		case joaat("imtecau"):
		case joaat("imvolau"):
		case joaat("imwasau"):
		case joaat("gnrcaud"):
		case joaat("gnrweau"):
		case joaat("grapcau"):
		case joaat("grhalau"):
		case joaat("grdunau"):
		case joaat("grmocau"):
		case joaat("groppau"):
		case joaat("grop2au"):
		case joaat("grtamau"):
		case joaat("grtrsau"):
		case joaat("smgcaud"):
		case joaat("smgfzau"):
		case joaat("iaafiau"):
		case joaat("iaamoau"):
		case joaat("iaasfau"):
		case joaat("iaadeau"):
		case joaat("silprau"):
		case joaat("subbmau"):
		case joaat("subfiau"):
		case joaat("subfoau"):
		case joaat("subosau"):
		case joaat("subcaau"):
		case joaat("xmfmaud"):
		case joaat("tufin"):
		case joaat("subriau"):
		case joaat("silbcau"):
		case joaat("silspau"):
		case joaat("siltaau"):
		case joaat("silfiau"):
		case joaat("h2cutau"):
		case joaat("batfmau"):
		case joaat("lazfmau"):
		case joaat("paifmau"):
		case joaat("arintau"):
		case joaat("arannau"):
		case joaat("arasau"):
		case 1931750438:
		case joaat("cagtau"):
		case joaat("ctomau"):
		case joaat("caspaud"):
		case joaat("cas1aud"):
		case joaat("cas2aud"):
		case joaat("cas3aud"):
		case joaat("cas4aud"):
		case joaat("cas5aud"):
		case joaat("cas6aud"):
		case joaat("casuiau"):
		case joaat("casinau"):
		case 365230037:
		case joaat("casbkau"):
		case joaat("hs3faau"):
		case joaat("hs3prau"):
		case joaat("hs3cwau"):
		case joaat("hs3leau"):
		case -342942601:
		case joaat("hs3ceau"):
		case joaat("hs3reau"):
		case joaat("hs3fiau"):
		case joaat("hs3mnau"):
		case joaat("hs3vnau"):
		case joaat("ccycaud"):
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case 1971768146:
		case joaat("hs4paau"):
		case -519616352:
		case 718322585:
		case joaat("hs4edau"):
		case joaat("hs4bpau"):
		case joaat("hs4moau"):
		case joaat("hs4piau"):
		case joaat("hs4fiau"):
		case joaat("h4scpau"):
		case joaat("hs4faud"):
		case joaat("hs4csau"):
		case joaat("hs4psau"):
		case joaat("tnssaud"):
		case joaat("tnmmaud"):
		case joaat("tnrpaud"):
		case joaat("tnfudau"):
		case joaat("tnfmcau"):
		case joaat("tnfiaau"):
		case joaat("tnfftau"):
		case joaat("tnfboau"):
		case joaat("tnfflau"):
		case joaat("tnfbkau"):
		case joaat("tnfmhau"):
		case joaat("tnfbbau"):
		case joaat("tncutau"):
		case joaat("tnheaud"):
		case joaat("tnaraud"):
		case joaat("tumsaud"):
		case joaat("tncsbau"):
		case joaat("lowcaau"):
		case joaat("lcau"):
		case joaat("fxdl0au"):
		case joaat("fxdl1au"):
		case joaat("fxdl2au"):
		case joaat("fxdl3au"):
		case joaat("fxdl4au"):
		case joaat("fxdl5au"):
		case joaat("fxflaud"):
		case joaat("fxfraud"):
		case joaat("fximaud"):
		case joaat("fxlmaud"):
		case joaat("fxbaaud"):
		case joaat("fxfaaud"):
		case joaat("fxcutau"):
		case joaat("fxigaud"):
		case -1018917633:
		case 1332392277:
		case -1889985881:
		case -1536828534:
		case -580715848:
		case -947428706:
		case -790967848:
		case 1475512972:
		case -9119060:
		case 1748914928:
		case -105714609:
		case -1463539315:
			return 1;
		
		default:
	}
	return 0;
}

int func_99()
{
	if (Global_2883694)
	{
		if (func_14(0))
		{
			if (Global_3407872 || func_100(0))
			{
				return 1;
			}
		}
	}
	if (Global_2883693)
	{
		if (func_14(0))
		{
			if (Global_3932160 || func_100(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_100(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

var func_101(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

bool func_102()
{
	return (unk_0x3EBD3AF4E5D7A08C() || unk_0xC545AB1CF97ABB34());
}

bool func_103()
{
	return (unk_0xA7384DAD7CF469DA() || unk_0x807ABE1AB65C24D2());
}

void func_104()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_103() || func_102())
	{
		if (Global_1835497 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_78319)
	{
		if (Global_1835497 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_99())
	{
		iVar1 = 1;
	}
	if (unk_0x7B32AFE3B3F7D5EB(&Global_21681))
	{
		if (unk_0x3C57C2F07FEE34D2(&Global_21681, "CT_AUD"))
		{
			Global_2883586 = 1;
		}
	}
	if (func_98(unk_0x2E87280918B16506(&Global_21681)))
	{
		iVar1 = 0;
		Global_2883586 = 0;
		iVar0 = 1;
	}
	if (((Global_21607 < 5 || Global_21607 == 10) || Global_21607 == 12) || Global_21607 == 13)
	{
		if ((iVar1 == 1 || Global_2883586 == 1) || iVar0 == 2)
		{
			unk_0x249A0D3C5714BCF4(&Global_21681, 7);
			while (!unk_0x01896B71C5AC966E(7))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		else
		{
			unk_0xC5BF49FEF70EBF12(&Global_21681, 15);
			while (!unk_0x01896B71C5AC966E(15))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2883586 == 1) || iVar0 == 2)
	{
		unk_0x249A0D3C5714BCF4(&Global_21681, 6);
		while (!unk_0x01896B71C5AC966E(6))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	else
	{
		unk_0xC5BF49FEF70EBF12(&Global_21681, 14);
		while (!unk_0x01896B71C5AC966E(14))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	unk_0x59B217A592638F61();
	func_94();
}

void func_105()
{
	while (Global_20249 == 1 && unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_20249 = 0;
	if (BitTest(Global_8136, 20))
	{
		unk_0xCED9E32812D6C7C7(&Global_8137, 1);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_8137, 1);
	}
	Global_20250 = 0;
	if (Global_21601 == 0)
	{
		if (!Global_21618)
		{
			func_93();
		}
	}
	else
	{
		func_74();
	}
	Global_20472 = 0;
	if (Global_21615)
	{
		if (Global_22622 == 0)
		{
			if (Global_21618 == 0)
			{
				iLocal_34 = 5000;
				unk_0xB4CAA90C9DD83932(Global_21224.f_368, Global_21224.f_369);
			}
			else
			{
				iLocal_34 = 0;
			}
		}
		else
		{
			iLocal_34 = 0;
		}
		Global_20472 = 1;
		unk_0x5AE11BC36633DE4E(0);
		while ((Global_20472 == 1 && Global_21605 == 1) && unk_0xC9D9444186B5A374() < iLocal_34)
		{
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				Global_20472 = 0;
				unk_0xD681CC2BC1084DB6(0);
				Global_21605 = 6;
			}
			if (unk_0xA3329B7A7520670E())
			{
				if (unk_0xD973AA641A1CF78A())
				{
					Global_20472 = 0;
				}
			}
		}
		if (unk_0xC9D9444186B5A374() > iLocal_34)
		{
		}
		if (Global_21605 != 1)
		{
		}
		if (Global_20472 == 0)
		{
		}
	}
	Global_20472 = 0;
	if (((Global_20266.f_1 == 1 || Global_20266.f_1 == 0) || Global_21605 != 1) || Global_20232 == 1)
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21605 = 6;
	}
	else
	{
		if (Global_21613)
		{
			Global_22623 = 0;
			iLocal_32 = 0;
		}
		if (Global_21615 == 0)
		{
			if (Global_21656 == 0)
			{
				Global_20268 = Global_20266.f_1;
				Global_21656 = 1;
			}
			iLocal_30 = 0;
			if (Global_22622 == 0)
			{
				unk_0xB4CAA90C9DD83932(Global_21224.f_368, Global_21224.f_369);
				unk_0x4EDE34FBADD967A6(0);
				Global_21605 = 3;
				Global_20472 = 1;
				unk_0x5AE11BC36633DE4E(0);
				unk_0xCED9E32812D6C7C7(&Global_8136, 27);
				unk_0xC1B1E9A034A63A62(0);
			}
			else
			{
				Global_20472 = 0;
				Global_21605 = 4;
			}
			Global_20265 = 0;
			if (Global_21616 == 1)
			{
				if (Global_20266.f_1 == 10)
				{
				}
				if (!Global_20266.f_1 == 9)
				{
					if (Global_20266.f_1 > 4)
					{
						if (Global_20249 == 0)
						{
							Global_20266.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_20266.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_20266.f_1 == 4)
				{
					unk_0x4EDE34FBADD967A6(0);
					if (Global_20472 == 1)
					{
						if (unk_0xA3329B7A7520670E())
						{
							if (unk_0xD973AA641A1CF78A())
							{
								Global_20472 = 0;
							}
						}
					}
				}
				if (Global_20266.f_1 == 6)
				{
				}
				if (Global_20266.f_1 == 10)
				{
				}
				if (Global_20266.f_1 == 3)
				{
					unk_0xD681CC2BC1084DB6(0);
					Global_21605 = 6;
					Global_20250 = 1;
					return;
				}
				Global_20266.f_1 = 9;
				func_8();
			}
			if (unk_0x9315DBF7D972F07A())
			{
				uLocal_101 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				iLocal_99 = unk_0x320D1840B6DAA1CC();
			}
			while (Global_20266.f_1 != 9 && Global_20249 == 0)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (Global_20472 == 1)
				{
					if (unk_0xA3329B7A7520670E())
					{
						if (unk_0xD973AA641A1CF78A())
						{
							Global_20472 = 0;
						}
					}
				}
				if (unk_0x9315DBF7D972F07A())
				{
					iLocal_108 = unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), uLocal_101);
				}
				else
				{
					iLocal_100 = unk_0x320D1840B6DAA1CC();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_108 > 15000)
					{
						Global_22621 = 1;
						Global_20249 = 1;
					}
				}
			}
			if (!BitTest(Global_8136, 11))
			{
				if (func_48() == 0)
				{
					func_61();
				}
			}
			if (Global_20249 == 0)
			{
				if (!Global_22622 == 0)
				{
					Global_21662 = 0;
					func_67();
					func_66();
					if (!Global_21618)
					{
						if (Global_22622 == 0)
						{
							unk_0xFED65F7C525B4505();
						}
						else
						{
							unk_0x0C42FE4000B56A73(Global_21224.f_368, Global_21224.f_369);
						}
					}
					func_65();
				}
			}
			else
			{
				func_106();
				Global_20250 = 1;
			}
		}
		else
		{
			Global_20265 = 1;
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					if (Global_20266.f_1 == 3)
					{
					}
				}
				else
				{
					unk_0xB0550BC91B0159D6(&Global_8137, 21);
				}
			}
			if (Global_21656 == 0)
			{
				Global_20268 = Global_20266.f_1;
				Global_21656 = 1;
			}
			if (Global_20266.f_1 == 3)
			{
				Global_20266.f_1 = 4;
			}
			else
			{
				while (Global_20266.f_1 == 4)
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				if (Global_20266.f_1 == 6)
				{
				}
				Global_20266.f_1 = 9;
				func_8();
			}
			if (unk_0x9315DBF7D972F07A())
			{
				uLocal_101 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				iLocal_99 = unk_0x320D1840B6DAA1CC();
			}
			while (Global_20266.f_1 != 9 && Global_20249 == 0)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x9315DBF7D972F07A())
				{
					iLocal_108 = unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), uLocal_101);
				}
				else
				{
					iLocal_100 = unk_0x320D1840B6DAA1CC();
					iLocal_108 = (iLocal_100 - iLocal_99);
				}
				if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_108 > 20000)
					{
						Global_22621 = 1;
						Global_20249 = 1;
						unk_0xB0550BC91B0159D6(&Global_8137, 21);
					}
				}
			}
			if (Global_20249 == 0)
			{
				Global_21605 = 2;
			}
			else
			{
				func_106();
				Global_20250 = 1;
			}
			if (unk_0x9315DBF7D972F07A())
			{
				uLocal_95 = unk_0x0A89FDFA763DCAED();
				uLocal_98 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				iLocal_93 = unk_0x320D1840B6DAA1CC();
				iLocal_96 = unk_0x320D1840B6DAA1CC();
			}
		}
	}
}

void func_106()
{
	Global_20471 = 0;
	func_111();
}

void func_107()
{
	float fVar0;
	
	fVar0 = func_108(Global_20219[Global_20211 /*3*/], Global_20212[Global_20211 /*3*/], Global_20226, Global_20197, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_22619 == 0)
		{
			unk_0xB60709BD0E075903(1);
		}
		iLocal_32 = 0;
	}
}

float func_108(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_4541508 == 0)
	{
		if (BitTest(Global_8136, 14) && Global_20266.f_1 < 4)
		{
			unk_0xC81489026785778A(&Var0);
			if (Global_20219[Global_20211 /*3*/].f_1 == Var0.f_1)
			{
				Global_4541508 = 1;
			}
		}
	}
	if (func_48() && Global_4541508 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x320D1840B6DAA1CC();
	}
	fVar3 = func_110((unk_0xBBDA792448DB5A89((unk_0x320D1840B6DAA1CC() - iLocal_18)) / fParam12), 0f, 1f);
	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
		if (bParam13)
		{
			fVar4 = (fVar4 - 1f);
			fVar5 = 0.670158f;
			fVar4 = (((fVar4 * fVar4) * (((fVar5 + 1f) * fVar4) + fVar5)) + 1f);
		}
		else
		{
			fVar4 = unk_0x0BADBFA3B172435F((fVar3 * 90f));
		}
		Global_20194 = { func_109(Param0, Param3, fVar4) };
		Global_20197 = { func_109(Param6, Param9, fVar4) };
	}
	else
	{
		Global_20194 = { Param3 };
		Global_20197 = { Param9 };
	}
	unk_0x31636F0193379566(Global_20194);
	unk_0x6447DA2F47A963E9(Global_20197, 0);
	return fVar3;
}

Vector3 func_109(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_110(float fParam0, float fParam1, float fParam2)
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

void func_111()
{
	unk_0x82B0661A78CC39CF();
	Global_22616 = 0;
	if ((unk_0xA3329B7A7520670E() || Global_20266.f_1 == 9) || Global_20265 == 1)
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21605 = 6;
		Global_20266.f_1 = 3;
		return;
	}
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(1);
		Global_21605 = 6;
		return;
	}
}

bool func_112()
{
	return BitTest(Global_4718592.f_162497, 12);
}

bool func_113(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_42(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return func_114(sParam2, iParam3, 0);
}

int func_114(char* sParam0, int iParam1, bool bParam2)
{
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam1 > Global_21607)
			{
				if (Global_21612 == 0)
				{
					unk_0xD681CC2BC1084DB6(0);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
					Global_21616 = 0;
					Global_21615 = 0;
					Global_20265 = 0;
				}
				else
				{
					func_111();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x2E5F8A288A954523())
		{
			return 0;
		}
		if (func_38(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_37();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_22601 = Global_22602;
		Global_21224.f_370 = Global_22594;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21601 = Global_21602;
		if (Global_21611)
		{
			unk_0xB0550BC91B0159D6(&Global_8136, 20);
			unk_0xB0550BC91B0159D6(&Global_8137, 17);
			unk_0xB0550BC91B0159D6(&Global_8138, 0);
			if (bParam2)
			{
				func_30();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				if (unk_0x7A6B8C262362C722(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (func_29())
				{
					return 0;
				}
				if (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x90DCD1F6C0982DC1(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x8DE48073046D4CF0(unk_0xE2D3D51028F0428A(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A()))
					{
						return 0;
					}
					if (unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9()))
					{
						return 0;
					}
					if (unk_0x3DA4842FA4407BE2(unk_0xE2D3D51028F0428A()))
					{
						return 0;
					}
					if (unk_0xA89C6F3818CC3ACB(unk_0x9E2D6C50374FCFA9(), 0))
					{
						return 0;
					}
				}
			}
			if (func_28())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
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
				if (BitTest(Global_8136, 9))
				{
					return 0;
				}
			}
			func_27();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_53();
		func_115();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21607 || iParam1 == Global_21607)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_111();
	}
	return 0;
}

void func_115()
{
	if (!func_116())
	{
		return;
	}
	if (Global_21611)
	{
		MemCopy(&(Global_1973149.f_1), {Global_21224}, 4);
		Global_1973149 = Global_7451;
		Global_1973149.f_6 = Global_21615;
	}
}

int func_116()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_119())
	{
		return 0;
	}
	if (func_117(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (BitTest(Global_1892703[unk_0x9E2D6C50374FCFA9() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x44859561F653DD4E())
	{
		return 0;
	}
	return 1;
}

bool func_117(int iParam0)
{
	return func_118(iParam0, 20);
}

var func_118(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_119()
{
	return -1;
}

int func_120()
{
	if (Global_21605 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

void func_121(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4F47E317C74C543B(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xACC32B78196FBC2A(sParam7))
	{
		func_9(sParam7);
	}
	if (!unk_0xACC32B78196FBC2A(iParam8))
	{
		func_9(iParam8);
	}
	if (!unk_0xACC32B78196FBC2A(iParam9))
	{
		func_9(iParam9);
	}
	if (!unk_0xACC32B78196FBC2A(iParam10))
	{
		func_9(iParam10);
	}
	if (!unk_0xACC32B78196FBC2A(iParam11))
	{
		func_9(iParam11);
	}
	unk_0x6F06CF0E9AB02847();
}

