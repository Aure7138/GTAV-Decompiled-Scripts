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
	int iLocal_18[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	int iLocal_44 = 0;
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
	fLocal_40 = 0.82f;
	fLocal_41 = 0.42f;
	fLocal_42 = 0f;
	fLocal_43 = 0f;
	unk_0x3F57BEDBC381CBC7();
	func_28();
	iLocal_39 = 1;
	func_27();
	func_26();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_20266.f_1 != 9)
		{
			switch (Global_20266.f_1)
			{
				case 7:
					func_21();
					if (iLocal_39)
					{
						func_18();
					}
					else
					{
						func_12();
					}
					break;
				
				case 8:
					func_21();
					func_12();
					if (func_11(2, Global_20234, 0))
					{
						func_10();
						Global_20244 = 1;
						func_9(Global_20247, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26();
						if (Global_20266.f_1 > 3)
						{
							Global_20266.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
			{
				func_2();
			}
		}
		else
		{
			Global_20268 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_20266.f_1 == 1 || Global_20266.f_1 == 3) || Global_20266.f_1 == 0) || Global_20210 == 1)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	unk_0xAFBDF6A5E54114C1();
}

void func_3()
{
	if (Global_8941[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8941[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8941[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xB0550BC91B0159D6(&Global_8136, 25);
	unk_0xCED9E32812D6C7C7(&Global_8137, 11);
}

int func_4(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_5(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)
{
	return func_6(iParam0, Global_43052);
}

int func_6(int iParam0, int iParam1)
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

void func_7()
{
	func_28();
	Global_8941[Global_20266 /*2811*/][0 /*281*/].f_124[2] = 1;
}

int func_8()
{
	if (Global_8742 == 1 || Global_20266.f_1 < 7)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_10()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x91DFC8F68F6D9B05(-1, "Menu_Back", &Global_20255, 1);
	}
}

int func_11(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xF09A4F413B0D30EB(iParam0, iParam1) || (iParam2 == 1 && unk_0xF01464D7AF0B7347(iParam0, iParam1)))
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

void func_12()
{
	if (Global_20244 == 0)
	{
		if (func_11(2, Global_20235, 0))
		{
			func_15();
			Global_20244 = 1;
			func_28();
			unk_0xEA5DEA46C3EE64D3(Global_20247, "GET_CURRENT_SELECTION");
			uLocal_36 = unk_0xD452B47F164A4D79();
			while (!unk_0x17E14239FB53CCE3(uLocal_36))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			Global_8941[Global_20266 /*2811*/][iLocal_38 /*281*/].f_259 = iLocal_18[unk_0xC2F770299DFFA794(uLocal_36)];
			func_13(Global_20247, "SET_HEADER", &(Global_8941[Global_20266 /*2811*/][iLocal_38 /*281*/].f_7[Global_8941[Global_20266 /*2811*/][iLocal_38 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
			{
				func_9(Global_20247, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else
			{
				func_9(Global_20247, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	func_14(sParam2);
	if (!unk_0xACC32B78196FBC2A(iParam3))
	{
		func_14(iParam3);
	}
	if (!unk_0xACC32B78196FBC2A(iParam4))
	{
		func_14(iParam4);
	}
	if (!unk_0xACC32B78196FBC2A(iParam5))
	{
		func_14(iParam5);
	}
	if (!unk_0xACC32B78196FBC2A(iParam6))
	{
		func_14(iParam6);
	}
	unk_0x6F06CF0E9AB02847();
}

void func_14(var uParam0)
{
	unk_0x4ADC8B166E139423(uParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_15()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x91DFC8F68F6D9B05(-1, "Menu_Accept", &Global_20255, 1);
		func_16();
	}
}

void func_16()
{
	if (func_17())
	{
		unk_0xBCA3FA8D0984A7D3(5);
	}
}

int func_17()
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

void func_18()
{
	Global_20244 = 1;
	iLocal_38 = 0;
	iLocal_39 = 0;
	func_19();
}

void func_19()
{
	int iVar0[15];
	int iVar16;
	int iVar17;
	int iVar18;
	
	func_9(Global_20247, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_28();
	iLocal_34 = 0;
	iVar16 = 0;
	while (iVar16 < 9)
	{
		iVar17 = 0;
		iVar18 = 9;
		Global_8941[Global_20266 /*2811*/][iLocal_38 /*281*/].f_84[iVar18] = 5000;
		while (iVar17 < 9)
		{
			if (Global_8941[Global_20266 /*2811*/][iLocal_38 /*281*/].f_124[iVar17] == 1)
			{
				if (iVar0[iVar17] == 0)
				{
					if (Global_8941[Global_20266 /*2811*/][iLocal_38 /*281*/].f_84[iVar17] < Global_8941[Global_20266 /*2811*/][iLocal_38 /*281*/].f_84[iVar18])
					{
						iVar18 = iVar17;
						func_20(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(iVar16), unk_0xBBDA792448DB5A89(Global_8941[Global_20266 /*2811*/][iLocal_38 /*281*/].f_104[iVar18]), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_38 /*281*/].f_7[iVar18 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar17++;
		}
		iLocal_18[iVar16] = iVar18;
		iVar0[iVar18] = 1;
		if (Global_8941[Global_20266 /*2811*/][iLocal_38 /*281*/].f_124[iVar16] == 1)
		{
			iLocal_34++;
		}
		iVar16++;
	}
	func_9(Global_20247, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_20247, "SET_HEADER", &(Global_8941[Global_20266 /*2811*/][iLocal_38 /*281*/].f_7[Global_8941[Global_20266 /*2811*/][iLocal_38 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_20254)
	{
		func_20(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_20(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_20(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xB0550BC91B0159D6(&Global_8136, 17);
}

void func_20(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_14(sParam7);
	}
	if (!unk_0xACC32B78196FBC2A(iParam8))
	{
		func_14(iParam8);
	}
	if (!unk_0xACC32B78196FBC2A(iParam9))
	{
		func_14(iParam9);
	}
	if (!unk_0xACC32B78196FBC2A(iParam10))
	{
		func_14(iParam10);
	}
	if (!unk_0xACC32B78196FBC2A(iParam11))
	{
		func_14(iParam11);
	}
	unk_0x6F06CF0E9AB02847();
}

void func_21()
{
	if (iLocal_44)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_44 = 0;
		}
	}
	if (unk_0x3A76A0944BE2C291(2))
	{
		if (func_11(2, 181, 0))
		{
			if (iLocal_35 > 0)
			{
				iLocal_35 = (iLocal_35 - 1);
			}
			func_24();
		}
		if (func_11(2, 180, 0))
		{
			iLocal_35++;
			if (iLocal_35 == iLocal_34)
			{
				iLocal_35 = 0;
			}
			func_22();
		}
	}
	if (iLocal_44 == 0)
	{
		if (func_11(2, Global_20242, 0))
		{
			if (iLocal_35 > 0)
			{
				iLocal_35 = (iLocal_35 - 1);
			}
			func_24();
			iLocal_44 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_11(2, Global_20243, 0))
		{
			iLocal_35++;
			if (iLocal_35 == iLocal_34)
			{
				iLocal_35 = 0;
			}
			func_22();
			iLocal_44 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_22()
{
	func_9(Global_20247, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_20255, 1);
	func_23();
}

void func_23()
{
	if (func_17())
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

void func_24()
{
	func_9(Global_20247, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_20255, 1);
	func_25();
}

void func_25()
{
	if (func_17())
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

void func_26()
{
	int iVar0[15];
	int iVar16;
	int iVar17;
	int iVar18;
	
	iLocal_34 = 0;
	iVar16 = 0;
	func_28();
	while (iVar16 < 9)
	{
		iVar17 = 0;
		iVar18 = 9;
		Global_8941[Global_20266 /*2811*/][iVar18 /*281*/] = 5000;
		while (iVar17 < 9)
		{
			if (Global_8941[Global_20266 /*2811*/][iVar17 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar17] == 0)
				{
					if (iVar17 == 0)
					{
						if (Global_8941[Global_20266 /*2811*/][iVar17 /*281*/] < Global_8941[Global_20266 /*2811*/][iVar18 /*281*/])
						{
							iVar18 = iVar17;
							func_20(Global_20247, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar16), -1f, -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iVar18 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar17++;
		}
		iLocal_18[iVar16] = iVar18;
		iVar0[iVar18] = 1;
		if (Global_8941[Global_20266 /*2811*/][iVar16 /*281*/].f_280 == 1)
		{
			iLocal_34++;
		}
		iVar16++;
	}
	func_9(Global_20247, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_20247, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_20254)
	{
		func_20(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_20(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_20(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xB0550BC91B0159D6(&Global_8136, 17);
}

void func_27()
{
	if (Global_43052 != 15)
	{
		func_28();
		Global_8941[Global_20266 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

void func_28()
{
	if (func_35(14))
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
		Global_20266 = func_29();
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

var func_29()
{
	func_30();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_30()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_33(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_32(unk_0xE2D3D51028F0428A());
			if (func_31(iVar0) && (!func_35(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_31(Global_113386.f_2363.f_539.f_4321))
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

bool func_31(int iParam0)
{
	return iParam0 < 3;
}

int func_32(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)
{
	if (func_31(iParam0))
	{
		return func_34(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_34(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_35(int iParam0)
{
	return Global_43052 == iParam0;
}

