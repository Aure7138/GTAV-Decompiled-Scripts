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
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<8> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	struct<11> Local_57[50];
	int iLocal_608 = 0;
	char* sLocal_609 = NULL;
	int iLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	int iLocal_613 = 0;
	char* sLocal_614[4] = { NULL, NULL, NULL, NULL };
	int iLocal_619 = 0;
	var uLocal_620 = 0;
	int iLocal_621 = 0;
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
	iLocal_608 = 4;
	sLocal_609 = "id1_11_tunnel6_int";
	if (unk_0x55EEDBBFDC6E810F(210))
	{
		func_73();
	}
	if (unk_0x24B651D85CCE5EB4(joaat("letterscraps")) > 1)
	{
		unk_0x675D9C12C73D3DE7();
	}
	func_72(12);
	if (func_71(106) == 1)
	{
		func_70(12);
		func_67(287, 0, 0);
		func_66(106, 1);
		func_65(168, 0);
		func_73();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_64(unk_0xC1A5EC5C986B98AD());
		switch (iLocal_42)
		{
			case 0:
				func_21();
				break;
			
			case 1:
				func_1();
				break;
		}
	}
}

void func_1()
{
	switch (iLocal_43)
	{
		case 0:
			if (unk_0x24B651D85CCE5EB4(joaat("startup_positioning")) > 0)
			{
				iLocal_43 = 2;
			}
			else if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x35DF833D93BCC488())
				{
					if (!func_20())
					{
						if (((!unk_0xE444FD7526C8BB46() && !func_14()) && !func_13()) && !func_12())
						{
							iLocal_619 = 0;
							iLocal_613 = 0;
							sLocal_614[0] = "LETTERS_PAGE_ONE";
							sLocal_614[1] = "LETTERS_PAGE_TWO";
							sLocal_614[2] = "LETTERS_PAGE_THREE";
							sLocal_614[3] = "LETTERS_PAGE_FOUR";
							uLocal_612 = unk_0x2B4645565204EA06("LETTER_SCRAPS");
							while (!unk_0x5FAF55B1F052A2E6(uLocal_612))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							unk_0x9FD96C5DE6EDFC15(uLocal_612, "SET_LETTER_TEXT");
							func_11(sLocal_614[0]);
							unk_0xAE3413B0654A0035();
							unk_0x23D55A1597EDF500(1);
							func_7(1);
							func_6(1, 1, 1, 0);
							unk_0xE686DF32889D09AE("LETTERS_HELP2", 0);
							unk_0x577AE0048ADA90C8(1);
							unk_0x61F7D56FFAFBF706(0);
							iLocal_43 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			func_3(0);
			unk_0x91E7CCDECE70A543();
			unk_0x23D55A1597EDF500(1);
			unk_0xCA0440712A8201E9(1);
			if (iLocal_613 < 4)
			{
				if (!iLocal_619)
				{
					if (unk_0x51EB177CA0562B62(2, 190))
					{
						if (iLocal_613 >= 0 && iLocal_613 < 3)
						{
							iLocal_613++;
							unk_0x9FD96C5DE6EDFC15(uLocal_612, "SET_LETTER_TEXT");
							func_11(sLocal_614[iLocal_613]);
							unk_0xAE3413B0654A0035();
						}
						iLocal_619 = 1;
					}
					else if (unk_0x51EB177CA0562B62(2, 189))
					{
						if (iLocal_613 > 0 && iLocal_613 < 4)
						{
							iLocal_613 = (iLocal_613 - 1);
							unk_0x9FD96C5DE6EDFC15(uLocal_612, "SET_LETTER_TEXT");
							func_11(sLocal_614[iLocal_613]);
							unk_0xAE3413B0654A0035();
						}
						iLocal_619 = 1;
					}
					else if (unk_0x6BD2D66249562506(2, 202))
					{
						iLocal_43 = 2;
					}
				}
				else if (!func_2())
				{
					iLocal_619 = 0;
				}
				unk_0x55CCA1B8F633F628(uLocal_612, 255, 255, 255, 255, 0);
			}
			else
			{
				iLocal_43 = 2;
			}
			break;
		
		case 2:
			unk_0x61F7D56FFAFBF706(1);
			unk_0xCD3C8E1022864F65(1);
			func_6(0, 1, 1, 0);
			func_70(12);
			func_73();
			break;
	}
}

int func_2()
{
	if ((unk_0x51EB177CA0562B62(2, 190) || unk_0x51EB177CA0562B62(2, 189)) || unk_0x51EB177CA0562B62(2, 202))
	{
		return 1;
	}
	return 0;
}

void func_3(int iParam0)
{
	if (func_5())
	{
		return;
	}
	if (!Global_20383.f_1 == 1)
	{
		if (func_4(0))
		{
			func_7(iParam0);
		}
		unk_0xECDAB41968FF21A8(&Global_8254, 2);
	}
}

int func_4(int iParam0)
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

bool func_5()
{
	return BitTest(Global_1962996, 19);
}

int func_6(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xCC17806DB0C41C19())
	{
		if (unk_0x39D9A0A5E812BD25() != iParam0 && iParam2)
		{
			unk_0xA740EFFFBB4FED55(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_7(int iParam0)
{
	if (func_5())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_10())
		{
			func_9(1, 1);
		}
		else
		{
			func_9(0, 0);
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
	if (!func_8())
	{
		Global_20383.f_1 = 3;
	}
}

int func_8()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_4(0))
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

bool func_10()
{
	return BitTest(Global_1962996, 5);
}

void func_11(var uParam0)
{
	unk_0x2AF11E92DE43CDE3(uParam0);
	unk_0xF8FCA9E7130CE1C8();
}

bool func_12()
{
	return Global_1577844;
}

int func_13()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2694418[iVar1] != 0)
		{
			Global_1577845 = iVar1;
			iVar0 = 1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_14()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_112300)
	{
		if (func_15(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_15(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x4310A0DB886F9FED(&(Global_112300[iParam0 /*28*/]), "") && !unk_0xB71C73D0269747D5(&(Global_112300[iParam0 /*28*/])))
	{
		if (BitTest(Global_112300[iParam0 /*28*/].f_27, 1))
		{
			if (BitTest(Global_112300[iParam0 /*28*/].f_27, 2))
			{
				return func_19(iVar0, &(Global_112300[iParam0 /*28*/]), &(Global_112300[iParam0 /*28*/].f_4), Global_112300[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_18(iVar0, &(Global_112300[iParam0 /*28*/]), &(Global_112300[iParam0 /*28*/].f_4));
			}
		}
		else if (BitTest(Global_112300[iParam0 /*28*/].f_27, 2))
		{
			return func_17(iVar0, &(Global_112300[iParam0 /*28*/]), Global_112300[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_16(iVar0, &(Global_112300[iParam0 /*28*/]));
		}
	}
	return 0;
}

var func_16(int iParam0, var uParam1)
{
	unk_0x56C9BC27C0FF68D7(uParam1);
	return unk_0x6A92D111B5409879((1 + iParam0));
}

var func_17(int iParam0, var uParam1, var uParam2)
{
	unk_0x56C9BC27C0FF68D7(uParam1);
	unk_0x64C50E40AA09A6B5(uParam2);
	return unk_0x6A92D111B5409879((1 + iParam0));
}

var func_18(int iParam0, var uParam1, var uParam2)
{
	unk_0x56C9BC27C0FF68D7(uParam1);
	unk_0x48849374B34BB7B9(uParam2);
	return unk_0x6A92D111B5409879((1 + iParam0));
}

var func_19(int iParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0x56C9BC27C0FF68D7(uParam1);
	unk_0x48849374B34BB7B9(uParam2);
	unk_0x64C50E40AA09A6B5(uParam3);
	return unk_0x6A92D111B5409879((1 + iParam0));
}

int func_20()
{
	if (Global_43257 == 15)
	{
		return 0;
	}
	return 1;
}

void func_21()
{
	switch (iLocal_43)
	{
		case 0:
			func_62();
			func_61(&Local_44, 1, joaat("prop_ld_scrap"), "LETTERS_COLLECT");
			func_59(&Local_44, joaat("num_hidden_packages_0"), 705, 50);
			iLocal_43 = 1;
			iLocal_621 = 1;
			break;
		
		case 1:
			if (!func_58(14) && !unk_0x72474BA05A104E1E())
			{
				if (func_23(&Local_44, &Local_57) || uLocal_620)
				{
					iLocal_43 = 2;
				}
				if (Local_44.f_1.f_4 == Local_44.f_1.f_3)
				{
					if (func_71(106) == 0)
					{
						func_66(106, 1);
						func_65(168, 0);
					}
				}
			}
			break;
		
		case 2:
			func_66(106, 1);
			func_65(168, 0);
			func_22(1);
			break;
	}
}

void func_22(int iParam0)
{
	iLocal_42 = iParam0;
	iLocal_43 = 0;
}

int func_23(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	bool bVar5;
	
	bVar5 = (!func_20() && !func_20());
	unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD());
	Var2 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar1 = func_57(&(uParam0->f_1), uParam0->f_10);
		if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
		{
			if (!bVar1)
			{
				if (((((((uParam0->f_10 == 1 || uParam0->f_10 == 5) || uParam0->f_10 == 7) || uParam0->f_10 == 13) || uParam0->f_10 == 18) || uParam0->f_10 == 20) || uParam0->f_10 == 37) || uParam0->f_10 == 42)
				{
					func_55(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 2);
				}
				else if (uParam0->f_10 == iLocal_608)
				{
					func_55(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 2);
					if (unk_0x0E0433D7F75E162D((iParam1[uParam0->f_10 /*11*/])->f_1))
					{
						unk_0x34CACBA26D1C2DED((iParam1[uParam0->f_10 /*11*/])->f_1, sLocal_609);
					}
				}
				else
				{
					func_55(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bVar1)
		{
			if (func_38(uParam0, iParam1, Var2))
			{
				if (bVar5)
				{
					if (!func_37(33))
					{
						func_34("LETTERS_FIRST", 1, 0, -1, 10000, 7, 0, 0, 0);
						func_33(33);
					}
				}
			}
		}
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1)
		{
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (uParam0->f_11)
	{
		if (!Global_78819)
		{
			func_24(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 1, &iLocal_610, &uLocal_611, "LETTERS_TITLE", "LETTERS_COLLECT");
		}
	}
	if (!uParam0->f_12 && !uParam0->f_11)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

void func_24(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, char* sParam6, char* sParam7)
{
	var uVar0;
	
	func_32(0);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0:
				*uParam5 = unk_0x2B4645565204EA06("MIDSIZED_MESSAGE");
				if (unk_0x5FAF55B1F052A2E6(*uParam5))
				{
					uVar0 = unk_0x9F2C1BA4F2BF5CF8();
					if (iParam3 == 6)
					{
						unk_0x531D638530A8DB97(uVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						unk_0x531D638530A8DB97(uVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*iParam4++;
				}
				break;
			
			case 1:
				unk_0x9FD96C5DE6EDFC15(*uParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0x2AF11E92DE43CDE3(sParam6);
				unk_0xF8FCA9E7130CE1C8();
				unk_0x2AF11E92DE43CDE3(sParam7);
				unk_0x64C50E40AA09A6B5(func_26(iParam3));
				unk_0xF8FCA9E7130CE1C8();
				unk_0xAE3413B0654A0035();
				*uParam2 = unk_0xA5E11AF0A2B928C1();
				*iParam4++;
				break;
			
			case 2:
				if ((unk_0xA5E11AF0A2B928C1() - *uParam2) > 7000)
				{
					unk_0x9FD96C5DE6EDFC15(*uParam5, "SHARD_ANIM_OUT");
					unk_0xC6A3EF6C4A3412C1(1);
					unk_0xC49D258FBF3BF214(0.33f);
					unk_0xAE3413B0654A0035();
					*iParam4++;
				}
				else if (!func_25())
				{
					if (unk_0x5FAF55B1F052A2E6(*uParam5))
					{
						func_32(1);
						unk_0x55CCA1B8F633F628(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((unk_0xA5E11AF0A2B928C1() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_25())
				{
					if (unk_0x5FAF55B1F052A2E6(*uParam5))
					{
						func_32(1);
						unk_0x55CCA1B8F633F628(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (unk_0x5FAF55B1F052A2E6(*uParam5))
				{
					unk_0xD0AE101DBAA43C98(uParam5);
				}
				func_32(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

int func_25()
{
	if (Global_78819)
	{
		return 1;
	}
	else if (Global_63356 && !Global_63362)
	{
		return 1;
	}
	return 0;
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_31(iParam0))
		{
			if (BitTest(Global_113648.f_10051.f_108, func_30(func_31(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		unk_0xDD7756E2742E0F6D(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		unk_0xDD7756E2742E0F6D(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		unk_0xDD7756E2742E0F6D(joaat("num_hidden_packages_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_31(iParam0))
		{
			iVar2 = (func_29(iParam0) + iVar1);
			if (func_27(iVar2, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_27(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_28();
	}
	return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}

int func_28()
{
	return Global_1574918;
}

int func_29(int iParam0)
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

int func_30(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_31(int iParam0)
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

void func_32(int iParam0)
{
	if (Global_78826 != iParam0)
	{
		Global_78826 = iParam0;
	}
}

void func_33(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	iVar1 = 0;
	while (bVar0 > 31)
	{
		bVar0 = (bVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xECDAB41968FF21A8(&(Global_113648.f_20412.f_150[iVar1]), bVar0);
	}
}

void func_34(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_35(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_35(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x4310A0DB886F9FED(sParam0, ""))
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
	while (iVar0 < Global_113648.f_20412.f_145)
	{
		if (unk_0x4310A0DB886F9FED(&(Global_113648.f_20412[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113648.f_20412.f_145 < 9)
	{
		StringCopy(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8 = (unk_0xA5E11AF0A2B928C1() + iParam3);
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9 = iParam5;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11 = iParam6;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12 = uParam2;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13 = iParam7;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14 = iParam8;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = ((unk_0xA5E11AF0A2B928C1() + iParam3) + iParam4);
		}
		else
		{
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = -1;
		}
		Global_113648.f_20412.f_145++;
		func_36();
	}
}

void func_36()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113648.f_20412.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_20412.f_145)
	{
		if (BitTest(Global_113648.f_20412[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[0])
			{
				Global_113648.f_20412.f_146[0] = Global_113648.f_20412[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113648.f_20412[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[1])
			{
				Global_113648.f_20412.f_146[1] = Global_113648.f_20412[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113648.f_20412[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[2])
			{
				Global_113648.f_20412.f_146[2] = Global_113648.f_20412[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_113648.f_20412.f_150[iVar1], iVar0);
	}
	return 0;
}

int func_38(var uParam0, var uParam1, struct<3> Param2)
{
	bool bVar0;
	
	bVar0 = uParam0->f_10;
	if ((uParam1[bVar0 /*11*/])->f_10)
	{
		if ((uParam1[bVar0 /*11*/])->f_1 != 0)
		{
			if (unk_0x923599D48C8BCBED((uParam1[bVar0 /*11*/])->f_1) || func_53((uParam1[bVar0 /*11*/])->f_1))
			{
				func_40(uParam0, uParam1, bVar0);
				return 1;
			}
		}
	}
	if (unk_0x0E0433D7F75E162D((uParam1[bVar0 /*11*/])->f_1))
	{
		if ((unk_0xB7A628320EFF8E47(Param2, unk_0x55AE93A6E3B0AE8F((uParam1[bVar0 /*11*/])->f_1)) > (60f * 60f) || func_58(13)) || func_58(14))
		{
			func_39(&((uParam1[bVar0 /*11*/])->f_1));
			(uParam1[bVar0 /*11*/])->f_1 = 0;
			(uParam1[bVar0 /*11*/])->f_10 = 0;
		}
	}
	return 0;
}

void func_39(var uParam0)
{
	if (unk_0x0E0433D7F75E162D(*uParam0))
	{
		unk_0x7E131AB8520C5824(*uParam0);
	}
}

void func_40(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = (func_29(*uParam0) + bParam2);
	func_39(&((uParam1[bParam2 /*11*/])->f_1));
	func_52(&((uParam1[bParam2 /*11*/])->f_2));
	(uParam1[bParam2 /*11*/])->f_1 = 0;
	(uParam1[bParam2 /*11*/])->f_10 = 0;
	func_51(&(uParam0->f_1), bParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_50(*uParam0, bParam2, 1);
	}
	unk_0xCA9F34C06A0529CE(0, 200, 250);
	unk_0xB27C3C2F7357CAA1(uParam0->f_6, 1f);
	if (bLocal_41)
	{
		func_49(&(uParam0->f_1), bParam2);
	}
	else
	{
		func_47(&(uParam0->f_1));
	}
	func_44();
	unk_0x731993066905D54D(iVar0);
	func_43(1, 0);
	func_41();
	uParam0->f_11 = 1;
}

int func_41()
{
	if (func_42(0))
	{
		return 0;
	}
	if (Global_100720.f_8)
	{
		if (Global_100720.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100720.f_10 > 1)
	{
		return 0;
	}
	Global_100720.f_10++;
	return 1;
}

int func_42(bool bParam0)
{
	if (!bParam0 && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_43(int iParam0, int iParam1)
{
	Global_100720.f_7 = iParam0;
	Global_100720.f_8 = iParam1;
}

void func_44()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	unk_0xDD7756E2742E0F6D(func_46(0), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_45(18, iVar0);
	}
	unk_0xDD7756E2742E0F6D(func_46(1), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_45(19, iVar0);
	}
	unk_0xDD7756E2742E0F6D(func_46(3), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_45(20, iVar0);
	}
	iVar2 = ((func_31(0) + func_31(1)) + func_31(3));
	if (iVar2 > 0)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	unk_0x3CC35ACFFC9C730E(joaat("percent_hidden_packages"), iVar3, 1);
}

int func_45(int iParam0, int iParam1)
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
	iVar0 = unk_0xED220A261CE0D89C(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x0B3E167D2C1443C7(iParam0, iParam1);
	}
	return 0;
}

int func_46(int iParam0)
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

void func_47(var uParam0)
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
		if (func_57(uParam0, iVar0))
		{
			iVar1++;
			func_48((uParam0->f_2 + iVar0), 1, -1);
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
		func_65(168, 0);
	}
}

void func_48(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_28();
	}
	unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
}

void func_49(var uParam0, bool bParam1)
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
	if (func_57(uParam0, bParam1))
	{
		uParam0->f_4++;
		func_48((uParam0->f_2 + bParam1), 1, -1);
		if (bLocal_40)
		{
		}
	}
	if (bLocal_40)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_65(168, 0);
	}
}

void func_50(int iParam0, bool bParam1, bool bParam2)
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
				unk_0xECDAB41968FF21A8(&(Global_113648.f_10051.f_122), bParam1);
			}
			else
			{
				unk_0x061B1200C95204CB(&(Global_113648.f_10051.f_122), bParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0xECDAB41968FF21A8(&(Global_113648.f_10051.f_122.f_1), (bParam1 - 32));
		}
		else
		{
			unk_0x061B1200C95204CB(&(Global_113648.f_10051.f_122.f_1), (bParam1 - 32));
		}
	}
	else if (iParam0 == 0)
	{
		if (bParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0xECDAB41968FF21A8(&(Global_113648.f_10051.f_125), bParam1);
			}
			else
			{
				unk_0x061B1200C95204CB(&(Global_113648.f_10051.f_125), bParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0xECDAB41968FF21A8(&(Global_113648.f_10051.f_125.f_1), (bParam1 - 32));
		}
		else
		{
			unk_0x061B1200C95204CB(&(Global_113648.f_10051.f_125.f_1), (bParam1 - 32));
		}
	}
}

void func_51(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 < 0 || bParam1 >= 64)
	{
		return;
	}
	if (bParam1 <= 31)
	{
		if (bParam2)
		{
			unk_0xECDAB41968FF21A8(uParam0, bParam1);
		}
		else
		{
			unk_0x061B1200C95204CB(uParam0, bParam1);
		}
		return;
	}
	if (bParam2)
	{
		unk_0xECDAB41968FF21A8(&(uParam0->f_1), (bParam1 - 32));
	}
	else
	{
		unk_0x061B1200C95204CB(&(uParam0->f_1), (bParam1 - 32));
	}
}

void func_52(var uParam0)
{
	if (unk_0xCE4AAA035282336C(*uParam0))
	{
		unk_0xBD91E7D4B770F97E(*uParam0, 0);
		unk_0x45533C09A6C9B409(uParam0);
	}
}

int func_53(var uParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x0E0433D7F75E162D(uParam0))
	{
		return 0;
	}
	if (func_54(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			uVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			iVar1 = unk_0x504B9BB48D41C264(uVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x55AE93A6E3B0AE8F(uParam0)) < (5f * 5f) || unk_0x110B96B5C67CC73B(unk_0xC1A5EC5C986B98AD(), unk_0x1C4E62D39AEBD677(uParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_54(var uParam0)
{
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		if (!unk_0x055111B11E6624FD(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_55(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	var uVar0;
	
	if (!uParam0->f_10)
	{
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			if (!func_58(13) && !func_58(14))
			{
				if (!unk_0x0E0433D7F75E162D(uParam0->f_1))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), uParam0->f_3) <= (50f * 50f))
					{
						unk_0x852EC2A7DE66202D(uParam1);
						while (!unk_0x0CBB7C273DED26E7(uParam1))
						{
							unk_0x852EC2A7DE66202D(uParam1);
							unk_0x4EDE34FBADD967A6(0);
						}
						if (bParam3)
						{
							func_56(uParam0->f_3);
						}
						unk_0xF82BC5193AF62796(uParam0->f_3, 2.5f, 0, 0, 0, 0);
						if (bParam4)
						{
							unk_0xECDAB41968FF21A8(&uVar0, true);
							uParam0->f_1 = unk_0x9D4156571988E1D4(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, uVar0, -1, iParam5, 1, uParam1);
						}
						else
						{
							unk_0xECDAB41968FF21A8(&uVar0, 3);
							unk_0xECDAB41968FF21A8(&uVar0, 4);
							unk_0xECDAB41968FF21A8(&uVar0, 8);
							unk_0xECDAB41968FF21A8(&uVar0, true);
							uParam0->f_1 = unk_0x8D2015F36A52256C(iParam2, uParam0->f_3, uVar0, -1, 1, uParam1);
						}
						unk_0xE0A291F406691F03(uParam1);
					}
				}
			}
			if (unk_0x0E0433D7F75E162D(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}

void func_56(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0x9CE0235348AE4A4D(Param0);
	if (unk_0x4D3D95146FD3490D(uVar0))
	{
		unk_0x8DA180A7BBDAF957(uVar0);
		while (!unk_0x494DA26A8EE9C560(uVar0))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x4EDE34FBADD967A6(0);
		unk_0x4D14173532616448(uVar0);
	}
}

int func_57(var uParam0, int iParam1)
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

bool func_58(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_59(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_6 = iParam1;
	func_60(&(uParam0->f_1), iParam2, iParam3);
}

void func_60(var uParam0, var uParam1, var uParam2)
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
		if (func_27((uParam0->f_2 + bVar0), -1))
		{
			iVar1++;
			func_51(uParam0, bVar0, 1);
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

void func_61(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

void func_62()
{
	int iVar0;
	
	Global_113648.f_10051.f_122.f_2 = 1;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Local_57[iVar0 /*11*/].f_3 = { func_63(iVar0, 0) };
		Local_57[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	iLocal_610 = 0;
	Local_57[0 /*11*/].f_9 = 179.4746f;
	Local_57[1 /*11*/].f_6 = { 0f, 0f, 198f };
	Local_57[2 /*11*/].f_9 = 104f;
	Local_57[3 /*11*/].f_9 = 321.5f;
	Local_57[4 /*11*/].f_6 = { 0f, 0f, 49f };
	Local_57[5 /*11*/].f_6 = { 0f, 0f, 286.5f };
	Local_57[6 /*11*/].f_9 = 278.0092f;
	Local_57[7 /*11*/].f_6 = { 5.3f, -1801.4f, 15.57f };
	Local_57[8 /*11*/].f_9 = 80.5f;
	Local_57[9 /*11*/].f_9 = 116f;
	Local_57[10 /*11*/].f_9 = 15f;
	Local_57[11 /*11*/].f_9 = 305.5f;
	Local_57[12 /*11*/].f_9 = 0f;
	Local_57[13 /*11*/].f_9 = 95f;
	Local_57[13 /*11*/].f_6 = { -0.91f, -0.03f, -0.81f };
	Local_57[14 /*11*/].f_9 = 40f;
	Local_57[15 /*11*/].f_9 = 40f;
	Local_57[16 /*11*/].f_9 = 40f;
	Local_57[17 /*11*/].f_9 = 90f;
	Local_57[17 /*11*/].f_6 = { -0.55f, 0f, 0.78f };
	Local_57[18 /*11*/].f_6 = { 0f, 0f, 0f };
	Local_57[19 /*11*/].f_9 = 40f;
	Local_57[20 /*11*/].f_6 = { 0f, 2f, 15f };
	Local_57[21 /*11*/].f_9 = 40f;
	Local_57[22 /*11*/].f_9 = 40f;
	Local_57[23 /*11*/].f_9 = 40f;
	Local_57[24 /*11*/].f_9 = 40f;
	Local_57[25 /*11*/].f_9 = 40f;
	Local_57[26 /*11*/].f_9 = 40f;
	Local_57[26 /*11*/].f_6 = { -6f, 10f, 0f };
	Local_57[27 /*11*/].f_9 = 40f;
	Local_57[27 /*11*/].f_6 = { -4.66f, 8.7f, 67.03f };
	Local_57[28 /*11*/].f_9 = 40f;
	Local_57[28 /*11*/].f_6 = { 1.54f, -8.31f, -19.94f };
	Local_57[29 /*11*/].f_9 = 40f;
	Local_57[30 /*11*/].f_9 = 40f;
	Local_57[30 /*11*/].f_6 = { 27.21f, -3.11f, -2.09f };
	Local_57[31 /*11*/].f_9 = 40f;
	Local_57[32 /*11*/].f_9 = 40f;
	Local_57[33 /*11*/].f_9 = 40f;
	Local_57[33 /*11*/].f_6 = { -9.89f, 0.3f, -0.01f };
	Local_57[34 /*11*/].f_9 = 40f;
	Local_57[35 /*11*/].f_9 = 40f;
	Local_57[36 /*11*/].f_9 = 40f;
	Local_57[36 /*11*/].f_6 = { 6.5f, -4.41f, -0.62f };
	Local_57[37 /*11*/].f_6 = { -9f, 5.3f, -2f };
	Local_57[38 /*11*/].f_9 = 40f;
	Local_57[38 /*11*/].f_6 = { -13.32f, -0.57f, -0.15f };
	Local_57[39 /*11*/].f_9 = 40f;
	Local_57[39 /*11*/].f_6 = { 4.71f, -21.26f, -0.06f };
	Local_57[40 /*11*/].f_9 = 40f;
	Local_57[41 /*11*/].f_9 = 80f;
	Local_57[42 /*11*/].f_6 = { -2f, 9f, 1f };
	Local_57[43 /*11*/].f_9 = 198f;
	Local_57[44 /*11*/].f_9 = 198f;
	Local_57[44 /*11*/].f_6 = { 0f, -20f, 0f };
	Local_57[45 /*11*/].f_9 = 198f;
	Local_57[46 /*11*/].f_9 = 198f;
	Local_57[47 /*11*/].f_9 = 198f;
	Local_57[48 /*11*/].f_9 = 198f;
	Local_57[49 /*11*/].f_9 = 198f;
}

Vector3 func_63(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				return 1034.274f, -3026.275f, 4.90197f;
			}
			else
			{
				return 1026.705f, -3026.052f, 13.3323f;
			}
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return -1040.979f, -2743.509f, 12.94983f;
			}
			else
			{
				return -1048.604f, -2734.218f, 12.8895f;
			}
			break;
		
		case 2:
			if (iParam1 == 1)
			{
				return -93.9012f, -2711.314f, 5.01752f;
			}
			else
			{
				return -81.1199f, -2726.511f, 7.74f;
			}
			break;
		
		case 3:
			return -917.6909f, -2527.384f, 22.3218f;
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 746.45f, -2310.32f, 26.03f;
			}
			else
			{
				return 748.922f, -2298.114f, 19.624f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 1509.742f, -2126.038f, 75.21973f;
			}
			else
			{
				return 1509.099f, -2120.551f, 75.61f;
			}
			break;
		
		case 6:
			return 76.0032f, -1970.475f, 20.1302f;
			break;
		
		case 7:
			if (iParam1 == 1)
			{
				return -1.82327f, -1732.614f, 28.29367f;
			}
			else
			{
				return 0.067f, -1734.027f, 30.606f;
			}
			break;
		
		case 8:
			if (iParam1 == 1)
			{
				return -1377.766f, -1409.837f, 4.63205f;
			}
			else
			{
				return -1380.491f, -1404.374f, 1.7273f;
			}
			break;
		
		case 9:
			return 2864.808f, -1372.84f, 1.3151f;
			break;
		
		case 10:
			return -1035.812f, -1273.077f, 0.8919f;
			break;
		
		case 11:
			return -1821.136f, -1201.36f, 18.1698f;
			break;
		
		case 12:
			return 643.0116f, -1035.65f, 35.8891f;
			break;
		
		case 13:
			return -119.0616f, -977.2228f, 303.23f;
			break;
		
		case 14:
			if (iParam1 == 1)
			{
				return -1243.104f, -507.8057f, 30.10775f;
			}
			else
			{
				return -1238.766f, -506.7138f, 37.6019f;
			}
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 83.79993f, -431.9302f, 36.55315f;
			}
			else
			{
				return 86.4f, -433.9f, 36f;
			}
			break;
		
		case 16:
			return 1095.953f, -210.4642f, 54.9477f;
			break;
		
		case 17:
			return -1724.522f, -196f, 57.2387f;
			break;
		
		case 18:
			return 265.374f, -199.546f, 60.795f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -3020.475f, 36.55431f, 9.11777f;
			}
			else
			{
				return -3021.4f, 38f, 10.2945f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return -347.5277f, 53.37161f, 52.97814f;
			}
			else
			{
				return -347.3f, 54.865f, 53.921f;
			}
			break;
		
		case 21:
			return 1052.248f, 167.611f, 87.7406f;
			break;
		
		case 22:
			return -2303.798f, 217.4301f, 166.6017f;
			break;
		
		case 23:
			return -138.9423f, 868.3885f, 231.6956f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return 688.1073f, 1204.671f, 323.3438f;
			}
			else
			{
				return 682.4505f, 1204.928f, 344.3322f;
			}
			break;
		
		case 25:
			return -1548.763f, 1380.173f, 125.3728f;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return -432.14f, 1598.46f, 355.73f;
			}
			else
			{
				return -432.0034f, 1597.129f, 356.613f;
			}
			break;
		
		case 27:
			return 3081.93f, 1648.29f, 2.42f;
			break;
		
		case 28:
			return -594.38f, 2092f, 130.57f;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 3069.213f, 2160.988f, 1.1327f;
			}
			else
			{
				return 3063.583f, 2212.63f, 2.5863f;
			}
			break;
		
		case 30:
			return 180.21f, 2263.83f, 91.87f;
			break;
		
		case 31:
			if (iParam1 == 1)
			{
				return 926.96f, 2445.36f, 49.09f;
			}
			else
			{
				return 929.6946f, 2444.115f, 48.43f;
			}
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return -2380.212f, 2655.176f, 0.832f;
			}
			else
			{
				return -2379.948f, 2656.953f, 1.4906f;
			}
			break;
		
		case 33:
			return -861.38f, 2753.3f, 12.867f;
			break;
		
		case 34:
			return -289.0195f, 2848.853f, 53.331f;
			break;
		
		case 35:
			if (iParam1 == 1)
			{
				return 288.8409f, 2871.912f, 42.6422f;
			}
			else
			{
				return 265.7415f, 2866.416f, 73.19f;
			}
			break;
		
		case 36:
			if (iParam1 == 1)
			{
				return 1297.378f, 2988.71f, 40.11787f;
			}
			else
			{
				return 1294.2f, 3001.9f, 57.7f;
			}
			break;
		
		case 37:
			return 1568.65f, 3572.8f, 32.294f;
			break;
		
		case 38:
			return -1608.62f, 4274.25f, 102.95f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return -3.51812f, 4332.451f, 31.21602f;
			}
			else
			{
				return -1.9585f, 4334.787f, 32.3702f;
			}
			break;
		
		case 40:
			return 1336.737f, 4307.2f, 37.1325f;
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -1007.103f, 4836.936f, 268.5488f;
			}
			else
			{
				return -1001.48f, 4851.322f, 273.6112f;
			}
			break;
		
		case 42:
			return 1877.09f, 5078.98f, 50.49f;
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return 3366.099f, 5182.461f, 0.68317f;
			}
			else
			{
				return 3436.453f, 5176.911f, 6.386f;
			}
			break;
		
		case 44:
			if (iParam1 == 1)
			{
				return -576.12f, 5472.24f, 59.28f;
			}
			else
			{
				return -578.8057f, 5470.164f, 59.0295f;
			}
			break;
		
		case 45:
			return 444.6518f, 5571.781f, 780.1888f;
			break;
		
		case 46:
			return -402.9948f, 6319.279f, 31.2256f;
			break;
		
		case 47:
			return 1439.599f, 6335.208f, 22.9485f;
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return 1466.109f, 6552.266f, 12.95773f;
			}
			else
			{
				return 1469.632f, 6552.174f, 13.6854f;
			}
			break;
		
		case 49:
			if (iParam1 == 1)
			{
				return 66.19278f, 6668.888f, 30.80633f;
			}
			else
			{
				return 66.7136f, 6663.198f, 30.7821f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_64(var uParam0)
{
	if (!unk_0x7DE17ACDD8BA2642(uParam0))
	{
		return 0;
	}
	return !unk_0x055111B11E6624FD(uParam0, 0);
}

void func_65(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_113648.f_8615[iParam0] = 1;
	Global_113648.f_8615.f_236[iParam0] = (unk_0xA5E11AF0A2B928C1() + iParam1);
}

void func_66(int iParam0, int iParam1)
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

void func_67(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_48((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113648.f_10196[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113648.f_10196[iParam0 /*12*/].f_6 == 11 || Global_113648.f_10196[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113648.f_10196[iParam0 /*12*/].f_5 = 1;
		Global_113648.f_10196[iParam0 /*12*/].f_10 = iParam1;
		Global_113648.f_10196[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0xE571C8D0AF67E3B4(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE571C8D0AF67E3B4(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE571C8D0AF67E3B4(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_68();
	}
}

void func_68()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_113384 = 0;
	Global_113385 = 0;
	Global_113386 = 0;
	Global_113387 = 0;
	Global_113388 = 0;
	Global_113389 = 0;
	Global_113390 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113648.f_10196.f_3853;
	Global_113648.f_10196.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113648.f_10196[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113648.f_10196[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113384++;
					fVar1 = (fVar1 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113385++;
					fVar2 = (fVar2 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113386++;
					fVar3 = (fVar3 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113387++;
					fVar4 = (fVar4 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113388++;
					fVar5 = (fVar5 + (Global_113648.f_10196[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113389++;
					fVar6 = (fVar6 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113390++;
					fVar7 = (fVar7 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113367 > 0)
	{
		if (Global_113384 == Global_113367)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113368 > 0)
	{
		if (Global_113385 == Global_113368)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113369 > 0)
	{
		if (Global_113386 == Global_113369)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113370 > 0)
	{
		if (Global_113387 == Global_113370)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113371 > 0)
	{
		if (((Global_113388 == Global_113371 || (Global_113371 * 10 / Global_113388) < 41) || Global_113388 > Global_113374) || Global_113388 == Global_113374)
		{
			if (!BitTest(Global_113648.f_10196.f_3856, 14))
			{
				if (Global_113388 == Global_113371)
				{
					unk_0xE571C8D0AF67E3B4(joaat("num_rndevents_completed"), Global_113371, 0);
					unk_0xECDAB41968FF21A8(&(Global_113648.f_10196.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113372 > 0)
	{
		if (Global_113389 == Global_113372)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113373 > 0)
	{
		if (Global_113390 == Global_113373)
		{
			fVar7 = 5f;
		}
	}
	Global_113648.f_10196.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113388 > Global_113374 || Global_113388 == Global_113374)
	{
		iVar9 = Global_113374;
	}
	else
	{
		iVar9 = Global_113388;
	}
	unk_0x3CC35ACFFC9C730E(joaat("num_missions_completed"), Global_113384, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_missions_available"), Global_113367, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_minigames_completed"), Global_113385, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_minigames_available"), Global_113368, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_oddjobs_completed"), Global_113386, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_oddjobs_available"), Global_113369, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndpeople_completed"), Global_113387, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndpeople_available"), Global_113370, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndevents_available"), Global_113374, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_misc_completed"), (Global_113390 + Global_113389), 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_misc_available"), (Global_113373 + Global_113372), 1);
	Global_113391 = (Global_113384 * 100 / Global_113367);
	Global_113393 = ((Global_113386 + Global_113385) * 100 / (Global_113369 + Global_113368));
	Global_113392 = ((Global_113387 + iVar9) * 100 / (Global_113370 + Global_113374));
	Global_113394 = ((Global_113389 + Global_113390) * 100 / (Global_113372 + Global_113373));
	unk_0x683F4BAF21D6EE25(joaat("total_progress_made"), Global_113648.f_10196.f_3853, 1);
	unk_0x3CC35ACFFC9C730E(joaat("percent_story_missions"), Global_113391, 1);
	unk_0x3CC35ACFFC9C730E(joaat("percent_ambient_missions"), Global_113392, 1);
	unk_0x3CC35ACFFC9C730E(joaat("percent_oddjobs"), Global_113393, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_113648.f_10196.f_3853))
	{
		func_45(13, unk_0xF34EE736CF047844(Global_113648.f_10196.f_3853));
	}
	if (!unk_0xBAB6476CDD8C4AA6())
	{
		if (!Global_78558)
		{
			if (func_69() == 2 == 0 && !unk_0xA26A9A07F761D8F8())
			{
				if (unk_0x3FFDF8D1413D95DE())
				{
					Global_113382 = 0;
				}
				if (!Global_63362)
				{
					func_41();
				}
			}
		}
	}
}

int func_69()
{
	return Global_32163;
}

int func_70(int iParam0)
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
	if (BitTest(Global_113648.f_9087.f_99.f_219[iVar0], bVar1))
	{
		unk_0x061B1200C95204CB(&(Global_113648.f_9087.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

int func_71(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113648.f_9087.f_99.f_58[iParam0];
}

int func_72(int iParam0)
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
	if (BitTest(Global_113648.f_9087.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	unk_0xECDAB41968FF21A8(&(Global_113648.f_9087.f_99.f_219[iVar0]), bVar1);
	return 1;
}

void func_73()
{
	int iVar0;
	
	unk_0x23D55A1597EDF500(0);
	unk_0xD0AE101DBAA43C98(&uLocal_612);
	unk_0x577AE0048ADA90C8(0);
	Global_113648.f_10051.f_122.f_2 = 0;
	iVar0 = 0;
	while (iVar0 < Local_57.f_0)
	{
		func_52(&(Local_57[iVar0 /*11*/].f_2));
		func_39(&(Local_57[iVar0 /*11*/].f_1));
		Local_57[iVar0 /*11*/].f_1 = 0;
		iVar0++;
	}
	if (func_71(106) == 1)
	{
		func_66(106, 1);
		func_75();
		func_70(12);
	}
	else if (func_74(&(Local_44.f_1)))
	{
		func_66(106, 1);
		func_75();
		func_70(12);
	}
	else
	{
		func_72(12);
	}
	if (iLocal_621)
	{
		unk_0xE0A291F406691F03(Local_44.f_7);
	}
	unk_0x675D9C12C73D3DE7();
}

bool func_74(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

void func_75()
{
	int iVar0;
	
	iVar0 = func_76(64);
	Global_2645068[iVar0 /*83*/] = 64;
	StringCopy(&(Global_2645068[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2645068[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2645068[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

