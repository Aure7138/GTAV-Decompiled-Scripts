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
	struct<3> Local_21 = { 0, 0, 0 } ;
	struct<18> Local_24 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	int iLocal_59[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_89 = 0;
	struct<178> Local_90[27];
	var uLocal_4897 = 0;
	struct<24> Local_4898[30];
	var uLocal_5619 = 0;
	struct<24> Local_5620[24];
	var uLocal_6197 = 0;
	var uLocal_6198 = 0;
	float fLocal_6199 = 0f;
	float fLocal_6200 = 0f;
	var uLocal_6201 = 0;
	var uLocal_6202 = 0;
	var uLocal_6203 = 0;
	var uLocal_6204 = 0;
	bool bLocal_6205 = 0;
	bool bLocal_6206 = 0;
	int iLocal_6207 = 0;
	int iLocal_6208 = 0;
	int iLocal_6209 = 0;
	var uLocal_6210 = 0;
	var uLocal_6211 = 0;
	var uLocal_6212 = 0;
	var uLocal_6213 = 0;
	bool bLocal_6214 = 0;
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
	iLocal_89 = 29;
	fLocal_6199 = 0.075f;
	fLocal_6200 = 0.725f;
	iLocal_6207 = 1;
	iLocal_6208 = 1;
	bLocal_6214 = true;
	unk_0xBD1F51FB3FA2C6E4(1);
	if (unk_0x4B34601C5C56F3EE(3))
	{
		func_42();
	}
	unk_0x859006DB870314C5(0);
	unk_0xF8AC79ED8746B0C2(1);
	func_35(1);
	unk_0xD536FD78D8A135F1("les_1b_mcs_2", 8);
	func_18(1);
	func_8(1, 1, 1, 0, 0, 0, 0);
	while (true)
	{
		unk_0x6B81DF75FA671549(0f);
		unk_0x39B76F783934D136(0f);
		func_7(unk_0xE2D3D51028F0428A());
		if (func_2())
		{
			func_42();
		}
		if (bLocal_6206)
		{
			unk_0x3F03C2D4EFA888BC(0.5f, 0.5f);
			func_1(0.1f, 0.1f, "NUMBER", 171, 0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xCDDA0C58B818F6B2(sParam2);
	unk_0x2AE954BA77A66307(iParam3);
	unk_0x1A53079994915FA6(fParam0, fParam1, iParam4);
}

int func_2()
{
	unk_0xAA27C85E5BE092AA(Local_21.f_0, Local_21.f_1, Local_21.f_2);
	unk_0xAB0C65A9AD2E3CFF(-1f);
	switch (iLocal_6209)
	{
		case 0:
			unk_0x5A7ACD1CDF509B0D(0);
			func_6();
			unk_0x5A7ACD1CDF509B0D(500);
			unk_0xF44EE79112016B61(0);
			iLocal_6209++;
			break;
		
		case 1:
			if (!unk_0xA08A61313445DB46())
			{
				if (bLocal_6214)
				{
					func_4();
				}
				unk_0xCF0E3BB302EAC0EA(uLocal_6203);
				unk_0x694170BB080C08FF(uLocal_6201, 0.2f, 0.34f, 0.410001f, 0.69f, 100, 100, 100, 255, 0);
				unk_0xCF0E3BB302EAC0EA(uLocal_6204);
				if (bLocal_6205)
				{
					unk_0xEA5DEA46C3EE64D3(uLocal_6202, "SET_TEXT");
					func_3("KEYNOTE_NAME");
					func_3("KEYNOTE_TITLE");
					unk_0x6F06CF0E9AB02847();
					unk_0x694170BB080C08FF(uLocal_6202, 0.5f, 0.5f, 1f, 1f, 100, 100, 100, 255, 0);
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_3(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_4()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xC10FE9051DBB0E91();
	bVar1 = false;
	while (bVar1 <= (16 - 1))
	{
		if (Local_24[bVar1] != -1)
		{
			if ((!BitTest(uLocal_58, bVar1) && iVar0 >= Local_24[bVar1]) && iVar0 < Local_24.f_17[bVar1])
			{
				func_5();
				unk_0xCED9E32812D6C7C7(&uLocal_58, bVar1);
			}
		}
		bVar1++;
	}
}

void func_5()
{
}

void func_6()
{
}

bool func_7(var uParam0)
{
	if (!unk_0xE5965CDF24F93A9F(uParam0))
	{
		return 0;
	}
	return !unk_0x55B23FE400FCEA6B(uParam0, 0);
}

void func_8(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x85B547885D8F8B40(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 1);
		func_17(1);
		unk_0x1B7AAA85D46FE6FB();
		unk_0xA240F4C910B19938();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (unk_0xA3329B7A7520670E())
			{
				unk_0xD681CC2BC1084DB6(0);
			}
			if (!func_16())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_15(1, iParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_17(0);
		unk_0x45227777D3EBECE5();
		Global_63160 = 0;
		if (bParam1)
		{
			unk_0xA91EC7D49DF9F229();
		}
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 0);
		func_15(0, iParam3, iParam2, 0);
		if (unk_0x9315DBF7D972F07A())
		{
			if (((((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_13(unk_0x9E2D6C50374FCFA9())) && !func_10(unk_0x9E2D6C50374FCFA9(), 0)) && !func_9()) && !bParam4) && !bParam5)
			{
				unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
			}
		}
		else if (((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_13(unk_0x9E2D6C50374FCFA9())) && !bParam4) && !bParam5)
		{
			unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
		}
		Global_78317 = 0;
	}
}

bool func_9()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_36.f_18, 14);
}

bool func_10(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_11(-1, 0) == 8;
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

int func_11(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1574918;
}

int func_13(int iParam0)
{
	if (func_10(iParam0, 0))
	{
		return 1;
	}
	if (func_14())
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

bool func_14()
{
	return BitTest(Global_2621446, 3);
}

int func_15(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x131A54781ECD3789() != iParam0 && uParam2)
		{
			unk_0x10B0B2BEC7FAA911(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_16()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_17(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_8136, 13);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_8136, 13);
	}
}

void func_18(bool bParam0)
{
	int iVar0;
	
	if (func_7(unk_0xE2D3D51028F0428A()))
	{
		unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), 689.1f, 586.5f, 130.5f, 1, 0, 0, 1);
		unk_0xF96094A43D443C41(689.1f, 586.5f, 130.5f, 500f, 0);
		unk_0x70D9EC5AF67D79C4(unk_0xE2D3D51028F0428A(), 1);
	}
	func_34(0);
	func_33(&uLocal_6213, 0);
	unk_0xCA60DF1D01DBD440(689.1f, 586.5f, 130.5f, 80f, 0);
	while (!unk_0x8A6AB093D1EE5368())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xEE3A19A84A10F8B9();
	if (bParam0)
	{
		unk_0x13A763A67BA2A95B("LInvader");
		while (!unk_0x8DD54478CFA35F08("LInvader"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	unk_0x9CD86FAC92DBE038("EXTRASUNNY");
	iLocal_59[0] = joaat("a_m_y_hipster_01");
	iLocal_59[1] = joaat("a_m_y_hipster_02");
	iLocal_59[2] = joaat("a_m_y_hipster_03");
	iLocal_59[3] = joaat("a_f_y_hipster_01");
	iLocal_59[4] = joaat("a_f_y_hipster_02");
	iLocal_59[5] = joaat("a_f_y_hipster_03");
	iLocal_59[6] = joaat("a_f_y_hipster_04");
	iLocal_59[7] = joaat("a_f_y_bevhills_01");
	iLocal_59[8] = joaat("a_m_m_business_01");
	iLocal_59[9] = joaat("a_m_m_bevhills_02");
	iLocal_59[10] = joaat("a_m_m_skater_01");
	iLocal_59[11] = joaat("a_m_y_beachvesp_01");
	iLocal_59[12] = joaat("a_m_y_bevhills_01");
	iLocal_59[13] = joaat("a_f_m_bevhills_01");
	iLocal_59[14] = joaat("a_m_m_ktown_01");
	iLocal_59[15] = joaat("a_m_y_busicas_01");
	iLocal_59[16] = joaat("a_m_y_business_02");
	iLocal_59[17] = joaat("a_m_y_gay_01");
	iLocal_59[18] = joaat("a_m_y_ktown_02");
	iLocal_59[19] = joaat("a_m_m_bevhills_02");
	iLocal_59[20] = joaat("a_m_y_business_03");
	iLocal_59[21] = joaat("a_m_y_gay_02");
	iLocal_59[22] = joaat("a_m_m_malibu_01");
	iLocal_59[22] = joaat("a_m_y_gay_02");
	iLocal_59[23] = joaat("a_m_y_eastsa_02");
	iLocal_59[24] = joaat("a_m_y_soucent_02");
	iLocal_59[25] = joaat("a_m_y_vinewood_01");
	iLocal_59[26] = joaat("a_m_y_vinewood_02");
	iLocal_59[27] = joaat("a_m_y_vinewood_03");
	iLocal_59[28] = joaat("a_m_y_vinewood_04");
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		func_31(func_32(iVar0), 1);
		iVar0++;
	}
	func_31("misslester1b_crowdlow@14@", 1);
	func_31("misslester1b_crowdlow@24@", 1);
	func_30("BREAKING_NEWS", &uLocal_6202, 1);
	func_30("lifeinvader_presentation", &uLocal_6201, 1);
	func_29("LEST1", 0, 1, 0);
	iVar0 = 0;
	while (iVar0 <= 26)
	{
		func_23(&(Local_90[iVar0 /*178*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_22(&(Local_4898[iVar0 /*24*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		func_21(&(Local_5620[iVar0 /*24*/]), iVar0);
		iVar0++;
	}
	unk_0x2E04B7B46A3670E5(1);
	unk_0x7F31E4CDB9FB2193("Big_Disp", 0);
	unk_0xC043F1F3CF279111(joaat("prop_huge_display_01"));
	unk_0xC043F1F3CF279111(joaat("prop_huge_display_02"));
	uLocal_6203 = unk_0x014679E62446327A("Big_Disp");
	uLocal_6204 = unk_0x56555A9ED8B80DFD();
	while (unk_0x301C07463034C65F(unk_0xE2D3D51028F0428A()))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0xC6398AABC3E92273())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x4EDE34FBADD967A6(2000);
	iLocal_6209 = 0;
	Local_21.f_0 = 12;
	Local_21.f_1 = 0;
	Local_21.f_2 = 0;
	iVar0 = 0;
	while (iVar0 <= (16 - 1))
	{
		func_19(iVar0);
		iVar0++;
	}
	if (bLocal_6206)
	{
	}
}

void func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_20(iParam0, 0, 10000);
			break;
		
		case 1:
			func_20(iParam0, 9000, 10000);
			break;
		
		case 2:
			func_20(iParam0, 27000, 32000);
			break;
		
		case 3:
			func_20(iParam0, 32000, 42000);
			break;
		
		case 4:
			func_20(iParam0, 51000, 63000);
			break;
		
		case 5:
			func_20(iParam0, 63600, 69000);
			break;
		
		case 6:
			func_20(iParam0, 66000, 70200);
			break;
		
		case 7:
			func_20(iParam0, 69600, joaat("ss1_03_98_lod"));
			break;
		
		case 8:
			func_20(iParam0, 77400, 84000);
			break;
		
		case 12:
			func_20(iParam0, 81000, 93600);
			break;
		
		case 9:
			func_20(iParam0, -1, -1);
			break;
		
		case 11:
			func_20(iParam0, 90000, 154200);
			break;
		
		case 10:
			func_20(iParam0, 129600, 133200);
			break;
		
		case 13:
			func_20(iParam0, 144600, 154200);
			break;
		
		case 14:
			func_20(iParam0, 152700, 154200);
			break;
		
		case 15:
			func_20(iParam0, 154200, 154200);
			break;
	}
}

void func_20(int iParam0, int iParam1, int iParam2)
{
	Local_24[iParam0] = iParam1;
	Local_24.f_17[iParam0] = iParam2;
}

void func_21(var uParam0, int iParam1)
{
	uParam0->f_22 = 0;
	unk_0xB0550BC91B0159D6(&uLocal_6197, iParam1);
	if (iParam1 == 0 && uParam0->f_22 == 0)
	{
	}
}

void func_22(var uParam0, int iParam1)
{
	uParam0->f_22 = 0;
	unk_0xB0550BC91B0159D6(&uLocal_5619, iParam1);
	if (iParam1 == 0 && uParam0->f_22 == 0)
	{
	}
}

void func_23(var uParam0, int iParam1)
{
	struct<3> Var0;
	
	func_28(uParam0);
	unk_0xB0550BC91B0159D6(&uLocal_4897, iParam1);
	switch (iParam1)
	{
		case 0:
			Var0 = { 0f, 0f, (func_27(-4.29f) + 180f) };
			func_25(uParam0, 82047830, 667.319f, 572.133f, 128.521f, Var0, 6, 0, 0);
			func_25(uParam0, 83248680, 666.312f, 571.675f, 128.521f, Var0, 6, 1, 0);
			func_25(uParam0, 71526810, 665.235f, 571.183f, 128.521f, Var0, 6, 2, 0);
			func_25(uParam0, 49826530, 664.124f, 570.679f, 128.521f, Var0, 6, 0, 0);
			func_25(uParam0, 78575440, 663.029f, 570.181f, 128.521f, Var0, 6, 1, 0);
			func_25(uParam0, 12133230, 661.937f, 569.685f, 128.521f, Var0, 6, 2, 0);
			func_25(uParam0, 89665750, 660.839f, 569.194f, 128.521f, Var0, 6, 0, 0);
			func_25(uParam0, 65990810, 659.537f, 569.392f, 128.521f, Var0, 6, 1, 0);
			func_25(uParam0, 21233450, 658.187f, 569.572f, 128.523f, Var0, 4, 0, 1f);
			func_24(&(uParam0->f_155[0 /*11*/]), 659.867f, 571.539f, 128.531f, Var0, 0, 0.5f, -1.5f);
			func_24(&(uParam0->f_155[1 /*11*/]), 660.646f, 567.108f, 128.521f, Var0, 0, 0.5f, -1.5f);
			break;
		
		case 1:
			Var0 = { 0f, 0f, (func_27(-3.98f) + 180f) };
			func_25(uParam0, 21091970, 670.312f, 568.023f, 128.521f, Var0, 5, 0, 0.5f);
			func_25(uParam0, 97482490, 669.189f, 567.502f, 128.522f, Var0, 6, 1, 0);
			func_25(uParam0, 66764240, 668.28f, 566.688f, 128.522f, Var0, 6, 0, 0);
			func_25(uParam0, 82832850, 667.384f, 565.885f, 128.522f, Var0, 6, 2, 0);
			func_25(uParam0, 33636100, 666.491f, 565.085f, 128.522f, Var0, 6, 0, 0);
			func_25(uParam0, 22769640, 665.595f, 564.282f, 128.522f, Var0, 6, 1, 0);
			break;
		
		case 2:
			Var0 = { 0f, 0f, (func_27(-3.78f) + 180f) };
			func_25(uParam0, 91480760, 673.7f, 564.799f, 128.521f, Var0, 6, 0, 0);
			func_25(uParam0, 64996320, 672.996f, 563.847f, 128.521f, Var0, 6, 1, 0);
			func_25(uParam0, 30855220, 672.271f, 562.865f, 128.521f, Var0, 6, 2, 0);
			func_25(uParam0, 98921990, 671.557f, 561.897f, 128.521f, Var0, 6, 0, 0);
			func_25(uParam0, 73357200, 670.258f, 561.366f, 128.522f, Var0, 6, 1, 0);
			func_24(&(uParam0->f_155[0 /*11*/]), 669.564f, 563.469f, 128.521f, Var0, 2, -1.5f, -1.5f);
			func_24(&(uParam0->f_155[1 /*11*/]), 672.34f, 559.914f, 128.522f, Var0, 2, -1.5f, -1.5f);
			break;
		
		case 3:
			Var0 = { 0f, 0f, (func_27(-3.38f) + 180f) };
			func_25(uParam0, 89689390, 681.517f, 555.801f, 128.522f, Var0, 6, 0, 0);
			func_25(uParam0, 71057000, 681.796f, 556.967f, 128.522f, Var0, 6, 1, 0);
			func_25(uParam0, 26206390, 682.076f, 558.137f, 128.522f, Var0, 6, 2, 0);
			func_25(uParam0, 58207860, 682.36f, 559.342f, 128.522f, Var0, 6, 0, 0);
			func_25(uParam0, 43622440, 682.635f, 560.475f, 128.522f, Var0, 6, 1, 0);
			break;
		
		case 4:
			Var0 = { 0f, 0f, (func_27(-3.17f) + 180f) };
			func_25(uParam0, 78555440, 687.841f, 559.785f, 128.522f, Var0, 6, 0, 0);
			func_25(uParam0, 12324420, 687.807f, 558.602f, 128.522f, Var0, 6, 1, 0);
			func_25(uParam0, 4083210, 687.771f, 557.382f, 128.522f, Var0, 6, 2, 0);
			func_25(uParam0, 2021980, 688.465f, 556.159f, 128.522f, Var0, 6, 0, 0);
			func_25(uParam0, 21091970, 688.431f, 554.961f, 128.521f, Var0, 6, 1, 0);
			func_24(&(uParam0->f_155[0 /*11*/]), 685.931f, 556.306f, 128.522f, Var0, 0, 0.5f, -1.5f);
			func_24(&(uParam0->f_155[1 /*11*/]), 685.897f, 555.108f, 128.521f, Var0, 1, -1.5f, -1.5f);
			break;
		
		case 5:
			Var0 = { 0f, 0f, (func_27(-2.97f) + 180f) };
			func_25(uParam0, 31491440, 692.632f, 559.992f, 128.522f, Var0, 5, 2, -0.5f);
			func_25(uParam0, 34393340, 693.189f, 558.886f, 128.522f, Var0, 6, 0, 0);
			func_25(uParam0, 94762900, 693.396f, 557.684f, 128.522f, Var0, 6, 1, 0);
			func_25(uParam0, 95283980, 693.6f, 556.498f, 128.522f, Var0, 6, 2, 0);
			func_25(uParam0, 92416940, 693.803f, 555.317f, 128.522f, Var0, 6, 0, 0);
			func_25(uParam0, 53597080, 694.007f, 554.131f, 128.522f, Var0, 6, 1, 0);
			break;
		
		case 6:
			Var0 = { 0f, 0f, (func_27(-2.7f) + 180f) };
			func_25(uParam0, 86170110, 697.492f, 561.188f, 128.522f, Var0, 6, 0, 0);
			func_25(uParam0, 62247860, 697.964f, 560.188f, 128.522f, Var0, 6, 1, 0);
			func_25(uParam0, 43665230, 698.467f, 559.116f, 128.522f, Var0, 6, 2, 0);
			func_25(uParam0, 32906070, 698.988f, 558.013f, 128.522f, Var0, 6, 0, 0);
			func_25(uParam0, 70836820, 699.502f, 556.925f, 128.522f, Var0, 6, 1, 0);
			func_25(uParam0, 67800350, 700.014f, 555.841f, 128.522f, Var0, 6, 2, 0);
			func_25(uParam0, 41115560, 701.184f, 555.063f, 128.521f, Var0, 6, 0, 0);
			func_25(uParam0, 98430790, 701.005f, 553.758f, 128.522f, Var0, 6, 1, 0);
			func_24(&(uParam0->f_155[0 /*11*/]), 698.861f, 554.048f, 128.521f, Var0, 0, 0.5f, -1.5f);
			func_24(&(uParam0->f_155[1 /*11*/]), 703.267f, 554.91f, 128.522f, Var0, 0, 0.5f, -1.5f);
			break;
		
		case 7:
			Var0 = { 0f, 0f, (func_27(-3.99f) + 180f) };
			func_25(uParam0, 13168530, 652.833f, 570.052f, 128.529f, Var0, 6, 0, 0);
			func_25(uParam0, 92127780, 652.006f, 569.319f, 128.528f, Var0, 6, 1, 0);
			func_25(uParam0, 51664260, 651.136f, 568.538f, 128.729f, Var0, 6, 2, 0);
			func_25(uParam0, 35914010, 650.242f, 567.746f, 128.729f, Var0, 6, 0, 0);
			func_25(uParam0, 43076060, 649.661f, 566.94f, 128.929f, Var0, 6, 1, 0);
			func_25(uParam0, 21755390, 648.426f, 566.137f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 8:
			Var0 = { 0f, 0f, (func_27(-3.9f) + 180f) };
			func_25(uParam0, 20501110, 656.955f, 565.868f, 128.53f, Var0, 6, 0, 0);
			func_25(uParam0, 10114780, 656.193f, 565.067f, 128.53f, Var0, 6, 1, 0);
			func_25(uParam0, 12664730, 655.358f, 564.19f, 128.73f, Var0, 6, 2, 0);
			func_25(uParam0, 32956570, 654.534f, 563.324f, 128.73f, Var0, 6, 0, 0);
			func_25(uParam0, 11862860, 653.696f, 562.443f, 128.93f, Var0, 6, 1, 0);
			func_25(uParam0, 87809290, 652.862f, 561.566f, 128.93f, Var0, 6, 2, 0);
			break;
		
		case 9:
			Var0 = { 0f, 0f, (func_27(-3.76f) + 180f) };
			func_25(uParam0, 75170110, 662.947f, 560.965f, 128.529f, Var0, 6, 0, 0);
			func_25(uParam0, 62246860, 662.306f, 560.065f, 128.529f, Var0, 6, 1, 0);
			func_25(uParam0, 83665250, 661.603f, 559.079f, 128.73f, Var0, 6, 2, 0);
			func_25(uParam0, 22016170, 660.91f, 558.106f, 128.73f, Var0, 6, 0, 0);
			func_25(uParam0, 41846840, 660.204f, 557.116f, 128.929f, Var0, 6, 1, 0);
			func_25(uParam0, 10000350, 659.502f, 556.13f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 10:
			Var0 = { 0f, 0f, (func_27(-3.68f) + 180f) };
			func_25(uParam0, 86878180, 667.872f, 557.785f, 128.53f, Var0, 6, 0, 0);
			func_25(uParam0, 22242820, 667.31f, 556.833f, 128.53f, Var0, 6, 1, 0);
			func_25(uParam0, 93969290, 666.693f, 555.791f, 128.73f, Var0, 6, 2, 0);
			func_25(uParam0, 12101010, 666.086f, 554.762f, 128.73f, Var0, 6, 0, 0);
			func_25(uParam0, 20232220, 665.467f, 553.715f, 128.93f, Var0, 6, 1, 0);
			func_25(uParam0, 57707370, 664.852f, 552.673f, 128.93f, Var0, 6, 2, 0);
			break;
		
		case 11:
			Var0 = { 0f, 0f, (func_27(-3.53f) + 180f) };
			func_25(uParam0, 13130110, 674.882f, 554.326f, 128.529f, Var0, 6, 0, 0);
			func_25(uParam0, 97845810, 674.46f, 553.305f, 128.529f, Var0, 6, 1, 0);
			func_25(uParam0, 12345670, 673.997f, 552.186f, 128.73f, Var0, 6, 2, 0);
			func_25(uParam0, 89101110, 673.541f, 551.081f, 128.73f, Var0, 6, 0, 0);
			func_25(uParam0, 12131410, 673.076f, 549.958f, 128.929f, Var0, 6, 1, 0);
			func_25(uParam0, 51617180, 672.613f, 548.839f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 12:
			Var0 = { 0f, 0f, (func_27(-3.45f) + 180f) };
			func_25(uParam0, 60616260, 680.396f, 552.335f, 128.53f, Var0, 6, 0, 0);
			func_25(uParam0, 36465660, 680.063f, 551.281f, 128.53f, Var0, 6, 1, 0);
			func_25(uParam0, 67686970, 679.697f, 550.127f, 128.73f, Var0, 6, 2, 0);
			func_25(uParam0, 71727370, 679.336f, 548.988f, 128.73f, Var0, 6, 0, 0);
			func_25(uParam0, 47576770, 678.969f, 547.829f, 128.93f, Var0, 6, 1, 0);
			func_25(uParam0, 78798080, 678.603f, 546.674f, 128.93f, Var0, 6, 2, 0);
			break;
		
		case 13:
			Var0 = { 0f, 0f, (func_27(-3.31f) + 180f) };
			func_25(uParam0, 11511610, 688.034f, 550.483f, 128.529f, Var0, 6, 0, 0);
			func_25(uParam0, 17118110, 687.853f, 549.393f, 128.529f, Var0, 6, 1, 0);
			func_25(uParam0, 91201210, 687.653f, 548.199f, 128.73f, Var0, 6, 2, 0);
			func_25(uParam0, 12212310, 687.457f, 547.02f, 128.73f, Var0, 6, 0, 0);
			func_25(uParam0, 23124120, 687.257f, 545.821f, 128.929f, Var0, 6, 1, 0);
			func_25(uParam0, 51261270, 687.058f, 544.627f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 14:
			Var0 = { 0f, 0f, (func_27(-3.22f) + 180f) };
			func_25(uParam0, 15515610, 693.855f, 549.783f, 128.53f, Var0, 6, 0, 0);
			func_25(uParam0, 57158150, 693.767f, 548.682f, 128.53f, Var0, 6, 1, 0);
			func_25(uParam0, 91601610, 693.67f, 547.474f, 128.73f, Var0, 6, 2, 0);
			func_25(uParam0, 16216310, 693.575f, 546.283f, 128.73f, Var0, 6, 0, 0);
			func_25(uParam0, 64165160, 693.478f, 545.071f, 128.93f, Var0, 6, 1, 0);
			func_25(uParam0, 61671680, 693.381f, 543.865f, 128.93f, Var0, 6, 2, 0);
			break;
		
		case 15:
			Var0 = { 0f, 0f, (func_27(-3.08f) + 180f) };
			func_25(uParam0, 19920020, 701.652f, 549.708f, 128.529f, Var0, 6, 0, 0);
			func_25(uParam0, 1202200, 701.721f, 548.605f, 128.529f, Var0, 6, 1, 0);
			func_25(uParam0, 32042050, 701.795f, 547.396f, 128.729f, Var0, 6, 2, 0);
			func_25(uParam0, 20620720, 701.869f, 546.203f, 128.729f, Var0, 6, 0, 0);
			func_25(uParam0, 8209210, 701.944f, 544.99f, 128.929f, Var0, 6, 1, 0);
			func_25(uParam0, 2112120, 702.019f, 543.781f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 16:
			Var0 = { 0f, 0f, (func_27(-2.99f) + 180f) };
			func_25(uParam0, 24024120, 707.482f, 550.335f, 128.53f, Var0, 6, 0, 0);
			func_25(uParam0, 43244240, 707.644f, 549.242f, 128.53f, Var0, 6, 1, 0);
			func_25(uParam0, 42452460, 707.821f, 548.044f, 128.73f, Var0, 6, 2, 0);
			func_25(uParam0, 24724820, 707.996f, 546.862f, 128.73f, Var0, 6, 0, 0);
			func_25(uParam0, 48249250, 708.174f, 545.659f, 128.929f, Var0, 6, 1, 0);
			func_25(uParam0, 2512520, 708.351f, 544.461f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 17:
			Var0 = { 0f, 0f, (func_27(-3.98f) + 180f) };
			func_25(uParam0, 46779100, 646.434f, 564.522f, 128.927f, Var0, 6, 0, 0);
			func_25(uParam0, 93643160, 645.612f, 563.784f, 128.927f, Var0, 6, 1, 0);
			func_25(uParam0, 34729570, 644.71f, 562.975f, 129.127f, Var0, 6, 2, 0);
			func_25(uParam0, 28556490, 643.821f, 562.177f, 129.127f, Var0, 6, 0, 0);
			func_25(uParam0, 75335160, 642.916f, 561.365f, 129.327f, Var0, 6, 1, 0);
			func_25(uParam0, 84872300, 642.015f, 560.557f, 129.327f, Var0, 6, 2, 0);
			break;
		
		case 18:
			Var0 = { 0f, 0f, (func_27(-3.91f) + 180f) };
			func_25(uParam0, 65187100, 651.092f, 559.707f, 128.926f, Var0, 6, 0, 0);
			func_25(uParam0, 87514460, 650.325f, 558.912f, 128.926f, Var0, 6, 1, 0);
			func_25(uParam0, 46165810, 649.483f, 558.04f, 128.127f, Var0, 6, 2, 0);
			func_25(uParam0, 12560720, 648.654f, 557.18f, 129.127f, Var0, 6, 0, 0);
			func_25(uParam0, 27854880, 647.809f, 556.306f, 129.326f, Var0, 6, 1, 0);
			func_25(uParam0, 97601360, 646.968f, 555.435f, 129.326f, Var0, 6, 2, 0);
			break;
		
		case 19:
			Var0 = { 0f, 0f, (func_27(-3.75f) + 180f) };
			func_25(uParam0, 55178130, 657.925f, 554.108f, 128.927f, Var0, 6, 0, 0);
			func_25(uParam0, 75148880, 657.29f, 553.204f, 128.927f, Var0, 6, 1, 0);
			func_25(uParam0, 88865540, 656.593f, 552.213f, 129.127f, Var0, 6, 2, 0);
			func_25(uParam0, 64916770, 655.906f, 551.235f, 129.127f, Var0, 6, 0, 0);
			func_25(uParam0, 70536220, 655.207f, 550.241f, 129.327f, Var0, 6, 1, 0);
			func_25(uParam0, 17101310, 654.512f, 549.25f, 129.327f, Var0, 6, 2, 0);
			break;
		
		case 20:
			Var0 = { 0f, 0f, (func_27(-3.68f) + 180f) };
			func_25(uParam0, 76870120, 663.545f, 550.463f, 128.926f, Var0, 6, 0, 0);
			func_25(uParam0, 32147850, 662.977f, 549.515f, 128.926f, Var0, 6, 1, 0);
			func_25(uParam0, 97662220, 662.353f, 548.477f, 129.127f, Var0, 6, 2, 0);
			func_25(uParam0, 12107070, 661.738f, 547.453f, 129.127f, Var0, 6, 0, 0);
			func_25(uParam0, 60841880, 661.111f, 546.411f, 129.326f, Var0, 6, 1, 0);
			func_25(uParam0, 27803350, 660.489f, 545.373f, 129.326f, Var0, 6, 2, 0);
			break;
		
		case 21:
			Var0 = { 0f, 0f, (func_27(-3.53f) + 180f) };
			func_25(uParam0, 19202120, 671.531f, 546.515f, 128.927f, Var0, 6, 0, 0);
			func_25(uParam0, 22232420, 671.116f, 545.491f, 128.927f, Var0, 6, 1, 0);
			func_25(uParam0, 52627280, 670.66f, 544.369f, 129.127f, Var0, 6, 2, 0);
			func_25(uParam0, 29303130, 670.211f, 543.262f, 129.127f, Var0, 6, 0, 0);
			func_25(uParam0, 23334350, 669.753f, 542.135f, 129.327f, Var0, 6, 1, 0);
			func_25(uParam0, 36373830, 669.298f, 541.014f, 129.327f, Var0, 6, 2, 0);
			break;
		
		case 22:
			Var0 = { 0f, 0f, (func_27(-3.46f) + 180f) };
			func_25(uParam0, 18283840, 677.828f, 544.227f, 128.926f, Var0, 6, 0, 0);
			func_25(uParam0, 85858680, 677.487f, 543.176f, 128.926f, Var0, 6, 1, 0);
			func_25(uParam0, 78889900, 677.112f, 542.024f, 129.127f, Var0, 6, 2, 0);
			func_25(uParam0, 91929390, 676.744f, 540.888f, 129.127f, Var0, 6, 0, 0);
			func_25(uParam0, 49596970, 676.368f, 539.731f, 129.326f, Var0, 6, 1, 0);
			func_25(uParam0, 98991000, 675.994f, 538.58f, 129.326f, Var0, 6, 2, 0);
			break;
		
		case 23:
			Var0 = { 0f, 0f, (func_27(-3.3f) + 180f) };
			func_25(uParam0, 12812910, 686.526f, 542.118f, 128.927f, Var0, 6, 0, 0);
			func_25(uParam0, 30131130, 686.352f, 541.027f, 128.927f, Var0, 6, 1, 0);
			func_25(uParam0, 21331340, 686.16f, 539.831f, 129.127f, Var0, 6, 1, 0);
			func_25(uParam0, 13513610, 685.972f, 538.652f, 129.127f, Var0, 6, 0, 0);
			func_25(uParam0, 37138130, 685.779f, 537.451f, 129.327f, Var0, 6, 1, 0);
			func_25(uParam0, 91401410, 685.588f, 536.256f, 129.327f, Var0, 6, 2, 0);
			break;
		
		case 24:
			Var0 = { 0f, 0f, (func_27(-3.23f) + 180f) };
			func_25(uParam0, 16917010, 693.176f, 541.306f, 128.926f, Var0, 6, 0, 0);
			func_25(uParam0, 71172170, 693.08f, 540.205f, 128.926f, Var0, 6, 1, 0);
			func_25(uParam0, 31741750, 692.975f, 538.998f, 129.127f, Var0, 6, 2, 0);
			func_25(uParam0, 17617810, 692.871f, 537.808f, 129.127f, Var0, 6, 0, 0);
			func_25(uParam0, 79180180, 692.765f, 536.597f, 129.326f, Var0, 6, 1, 0);
			func_25(uParam0, 21831840, 692.66f, 535.391f, 129.326f, Var0, 6, 2, 0);
			break;
		
		case 25:
			Var0 = { 0f, 0f, (func_27(-3.07f) + 180f) };
			func_25(uParam0, 21321420, 702.065f, 541.218f, 128.927f, Var0, 6, 0, 0);
			func_25(uParam0, 15216210, 702.14f, 540.116f, 128.927f, Var0, 6, 1, 0);
			func_25(uParam0, 72182190, 702.223f, 538.907f, 129.127f, Var0, 6, 2, 0);
			func_25(uParam0, 22022120, 702.304f, 537.715f, 129.127f, Var0, 6, 0, 0);
			func_25(uParam0, 22223220, 702.387f, 536.502f, 129.327f, Var0, 6, 1, 0);
			func_25(uParam0, 42252260, 703.116f, 526.841f, 129.618f, Var0, 6, 2, 0);
			break;
		
		case 26:
			Var0 = { 0f, 0f, (func_27(-3f) + 180f) };
			func_25(uParam0, 25325420, 708.727f, 541.922f, 128.926f, Var0, 6, 0, 0);
			func_25(uParam0, 55256250, 709.881f, 539.828f, 128.926f, Var0, 6, 1, 0);
			func_25(uParam0, 72582590, 709.05f, 539.628f, 129.127f, Var0, 6, 2, 0);
			func_25(uParam0, 26026120, 709.217f, 538.445f, 129.127f, Var0, 6, 0, 0);
			func_25(uParam0, 62263260, 709.386f, 537.241f, 129.326f, Var0, 6, 1, 0);
			func_25(uParam0, 42652650, 709.555f, 536.043f, 129.326f, Var0, 6, 2, 0);
			break;
		
		default:
			break;
	}
}

void func_24(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, float fParam8, float fParam9)
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param4 };
	uParam0->f_7 = iParam7;
	*uParam0 = 1;
	uParam0->f_8 = fParam8;
	uParam0->f_9 = fParam9;
}

void func_25(var uParam0, int iParam1, struct<3> Param2, struct<3> Param5, int iParam8, int iParam9, int iParam10)
{
	if (uParam0->f_154 >= *uParam0)
	{
		return;
	}
	func_26(uParam0[uParam0->f_154 /*17*/], iParam1, Param2, Param5, iParam8, iParam9, iParam10);
	uParam0->f_154++;
}

void func_26(var uParam0, var uParam1, struct<3> Param2, struct<3> Param5, var uParam8, var uParam9, var uParam10)
{
	*uParam0 = { Param2 };
	uParam0->f_3 = { Param5 };
	uParam0->f_6 = uParam8;
	uParam0->f_7 = uParam1;
	uParam0->f_8 = uParam9;
	uParam0->f_9 = uParam10;
}

float func_27(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_28(var uParam0)
{
	uParam0->f_154 = 0;
	uParam0->f_155[0 /*11*/] = 0;
	uParam0->f_155[1 /*11*/] = 0;
}

int func_29(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x320D1840B6DAA1CC() + 7500;
	unk_0x249A0D3C5714BCF4(sParam0, iParam1);
	if (unk_0x01896B71C5AC966E(iParam1) && !bParam3)
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		return 1;
	}
	while (!unk_0x01896B71C5AC966E(iParam1))
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x320D1840B6DAA1CC() > iVar0 && !unk_0x01896B71C5AC966E(iParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_30(char* sParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = unk_0x320D1840B6DAA1CC() + 7500;
	if (*uParam1 == 0)
	{
		*uParam1 = unk_0x528279F3F1EEF869(sParam0);
	}
	if (unk_0x0347CCBD719C8ADC(*uParam1))
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		return 1;
	}
	while (!unk_0x0347CCBD719C8ADC(*uParam1))
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x320D1840B6DAA1CC() > iVar0 && !unk_0x0347CCBD719C8ADC(*uParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_31(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x320D1840B6DAA1CC() + 7500;
	unk_0x8FB472886552D737(sParam0);
	if (unk_0x6F940C2636C076AD(sParam0))
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	while (!unk_0x6F940C2636C076AD(sParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x320D1840B6DAA1CC() > iVar0 && !unk_0x6F940C2636C076AD(sParam0))
		{
			return 0;
		}
	}
	return 1;
}

char* func_32(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "misslester1b_crowd@a_";
			break;
		
		case 1:
			sVar0 = "misslester1b_crowd@b_";
			break;
		
		case 2:
			sVar0 = "misslester1b_crowd@c_";
			break;
		
		case 3:
			sVar0 = "misslester1b_crowd@d_";
			break;
		
		case 4:
			sVar0 = "misslester1b_crowd@e_";
			break;
		
		case 5:
			sVar0 = "misslester1b_crowd@f_";
			break;
		
		case 6:
			sVar0 = "misslester1b_crowd@g_";
			break;
		
		case 7:
			sVar0 = "misslester1b_crowd@h_";
			break;
		
		case 8:
			sVar0 = "misslester1b_crowd@i_";
			break;
		
		case 9:
			sVar0 = "misslester1b_crowd@j_";
			break;
		
		case 10:
			sVar0 = "misslester1b_crowd@k_";
			break;
		
		case 11:
			sVar0 = "misslester1b_crowd@l_";
			break;
		
		case 12:
			sVar0 = "misslester1b_crowd@m_";
			break;
	}
	return sVar0;
}

void func_33(var uParam0, int iParam1)
{
	unk_0x8C5E1B04C94FF212(0);
	unk_0x718886BCAE2BD894(1);
	unk_0xA121D58142738A8D(0);
	unk_0x9A78AA1FBFC8A2AC(1);
	unk_0xF0CA50AC5D6CFD41(unk_0x9E2D6C50374FCFA9(), 0);
	unk_0x3B8C20EF19A49C3E(0);
	unk_0xED7C8628EA95C8C9(1);
	*uParam0 = unk_0x2915D98110F23A29(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0, 1, 1, 1);
	unk_0x247F21B1803F0EC4("DRIVE", 0);
	unk_0x84A65E2E9CFB6A77(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0, 1);
	unk_0x06B8FBA220C6488C(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0);
	if (func_7(unk_0xE2D3D51028F0428A()) && iParam1 == 1)
	{
		unk_0xF96094A43D443C41(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 500f, 0);
	}
}

void func_34(int iParam0)
{
	unk_0x07CECF421D895F3D(2, iParam0);
	unk_0x07CECF421D895F3D(3, iParam0);
	unk_0x07CECF421D895F3D(4, iParam0);
	unk_0x07CECF421D895F3D(5, iParam0);
	unk_0x07CECF421D895F3D(6, iParam0);
	unk_0x07CECF421D895F3D(7, iParam0);
	unk_0x07CECF421D895F3D(8, iParam0);
	unk_0x07CECF421D895F3D(9, iParam0);
	unk_0x07CECF421D895F3D(10, iParam0);
	unk_0x07CECF421D895F3D(11, iParam0);
	unk_0x07CECF421D895F3D(12, iParam0);
}

void func_35(bool bParam0)
{
	if (bParam0)
	{
		func_41();
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			unk_0xCED9E32812D6C7C7(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_40(0))
		{
			func_36(0);
		}
	}
	else if (Global_20266.f_1 == 1)
	{
		if (!Global_20266.f_1 == 0)
		{
			Global_20266.f_1 = 3;
		}
	}
}

void func_36(int iParam0)
{
	if (func_39())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_38())
		{
			func_37(1, 1);
		}
		else
		{
			func_37(0, 0);
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
	if (!func_16())
	{
		Global_20266.f_1 = 3;
	}
}

void func_37(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_40(0))
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

bool func_38()
{
	return BitTest(Global_1958711, 5);
}

bool func_39()
{
	return BitTest(Global_1958711, 19);
}

int func_40(int iParam0)
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

void func_41()
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

void func_42()
{
	func_43();
	func_8(0, 1, 1, 0, 0, 0, 0);
	unk_0xAFBDF6A5E54114C1();
}

void func_43()
{
	int iVar0;
	
	if (unk_0x496531E41FCF5116())
	{
		if (unk_0xF34D8FCAE3FD4EE4())
		{
			unk_0xA43ADA94826528F5();
		}
		unk_0x6D23F8C14190D353();
	}
	func_53(&uLocal_6210);
	unk_0xEFD883943E59207A("Big_Disp");
	unk_0x9D2ACCF306F3A0C5("LInvader");
	unk_0x705B098546DEB18A(&uLocal_6201);
	unk_0x705B098546DEB18A(&uLocal_6202);
	unk_0xC4075F869BC19306();
	iVar0 = 0;
	while (iVar0 < Local_90.f_0)
	{
		func_50(&(Local_90[iVar0 /*178*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_4898.f_0)
	{
		func_47(&(Local_4898[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_5620.f_0)
	{
		func_47(&(Local_5620[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_59)
	{
		func_46(iLocal_59[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		func_45(func_32(iVar0));
		iVar0++;
	}
	func_44(uLocal_6213);
	func_8(0, 1, 1, 0, 0, 0, 0);
}

void func_44(var uParam0)
{
	unk_0x718886BCAE2BD894(0);
	unk_0x8C5E1B04C94FF212(3);
	unk_0x9A78AA1FBFC8A2AC(0);
	unk_0xA121D58142738A8D(3);
	unk_0xF0CA50AC5D6CFD41(unk_0x9E2D6C50374FCFA9(), 1);
	unk_0x3B8C20EF19A49C3E(1);
	unk_0xED7C8628EA95C8C9(0);
	unk_0x7BACBB4C6A7B18B7(uParam0, 0);
	unk_0x247F21B1803F0EC4("DRIVE", 1);
	unk_0x84A65E2E9CFB6A77(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 1, 1);
}

void func_45(var uParam0)
{
	unk_0xAFC1FBF3F6AE7B9A(uParam0);
}

void func_46(int iParam0)
{
	if (iParam0 != 0)
	{
		unk_0xF1A23B343DFEDFD0(iParam0);
	}
}

void func_47(var uParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	uVar1 = func_49(uParam0->f_16);
	uVar2 = func_48(uParam0->f_16);
	iVar0 = 0;
	while (iVar0 < uParam0->f_17)
	{
		if (unk_0xE5965CDF24F93A9F(uParam0->f_17[iVar0]) && !unk_0x55B23FE400FCEA6B(uParam0->f_17[iVar0], 0))
		{
			unk_0xA02157241423F32E(uParam0->f_17[iVar0], uVar2, uVar1, -1000f);
		}
		func_53(&(uParam0->f_17[iVar0]));
		iVar0++;
	}
}

char* func_48(int iParam0)
{
	char* sVar0;
	
	if (iParam0 == 0)
	{
	}
	sVar0 = "001077_01_14";
	return sVar0;
}

char* func_49(int iParam0)
{
	char* sVar0;
	
	if (iParam0 == 0)
	{
	}
	sVar0 = "misslester1b_crowdlow@14@";
	return sVar0;
}

void func_50(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_52(uParam0[iVar0 /*17*/]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_155)
	{
		func_51(&(uParam0->f_155[iVar0 /*11*/].f_10));
		iVar0++;
	}
}

void func_51(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(*uParam0, 0))
		{
			unk_0x006574E87E6F1942(*uParam0, 0, 1);
		}
		if (!unk_0xA6A089369417736E(*uParam0))
		{
			unk_0x2D58A6131679D82C(*uParam0, 1, 0);
		}
		unk_0x05CB75C0837196F9(uParam0);
	}
}

void func_52(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_10)
	{
		func_51(&(uParam0->f_10[iVar0]));
		iVar0++;
	}
}

void func_53(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (unk_0x508CDC652F5361B5(*uParam0))
		{
			unk_0xE6451C2F193342C7(*uParam0, 1, 1);
		}
		unk_0x4BDA5AFD88C085EB(uParam0);
	}
}

