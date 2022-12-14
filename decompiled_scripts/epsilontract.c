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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	var uLocal_48 = 0;
	struct<11> Local_49[10];
	char* sLocal_160[10] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_37 = 1;
	iLocal_38 = 1;
	iLocal_40 = joaat("prop_time_capsule_01");
	if (unk_0x4B34601C5C56F3EE(210))
	{
		func_48();
	}
	if (unk_0xB4C854DD86E40FDA(joaat("epsilontract")) > 1)
	{
		unk_0xAFBDF6A5E54114C1();
	}
	func_47(9);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		switch (iLocal_39)
		{
			case 0:
				func_46();
				break;
			
			case 1:
				func_1();
				break;
			
			case 2:
				func_48();
				break;
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if ((func_45(unk_0xE2D3D51028F0428A()) && !func_44(14)) && !unk_0xA829C9A2767AC8EF())
	{
		if (iLocal_41 < 10)
		{
			if (iLocal_41 == 0)
			{
				if (!func_43(36) && (unk_0x320D1840B6DAA1CC() - iLocal_42) > iLocal_43)
				{
					func_42(0, 60, sLocal_160[0], 1, 0, 0, 0, 0, 1);
					func_41(36);
					iLocal_42 = -1;
				}
			}
			else if (iLocal_41 < 10)
			{
				if (!iLocal_42 == -1)
				{
					if ((unk_0x320D1840B6DAA1CC() - iLocal_42) > 15000)
					{
						func_42(0, 60, sLocal_160[iLocal_41], 1, 0, 0, 0, 0, 1);
						iLocal_42 = -1;
					}
				}
			}
			if (Local_49[iLocal_41 /*11*/].f_10)
			{
				if (unk_0x803592456AE579B3(Local_49[iLocal_41 /*11*/].f_1) || func_40(Local_49[iLocal_41 /*11*/].f_1))
				{
					if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
					{
						unk_0xC89EA639A6F338A6(unk_0xE2D3D51028F0428A());
					}
					func_39(&(Local_49[iLocal_41 /*11*/].f_1));
					Local_49[iLocal_41 /*11*/].f_10 = 0;
					unk_0xF7A14A1A76B6DD17(0, 200, 250);
					iVar0 = (805 + iLocal_41);
					func_38(iVar0, 1, -1);
					unk_0xFA38CF6FFD2BF050(joaat("num_hidden_packages_2"), 1f);
					bLocal_46 = true;
					if (iLocal_41 < 10)
					{
						iLocal_41++;
						iLocal_42 = unk_0x320D1840B6DAA1CC();
						func_37(1, 0);
						func_35();
					}
				}
				else if (unk_0x2791155FB0769FE5(Local_49[iLocal_41 /*11*/].f_1))
				{
					func_33(Local_49[iLocal_41 /*11*/].f_3);
					func_32(&(Local_49[iLocal_41 /*11*/].f_1), &(Local_49[iLocal_41 /*11*/].f_10));
				}
			}
			else
			{
				while (func_31(4, iVar1) && iVar1 < 10)
				{
					iVar1++;
				}
				if (iVar1 == iLocal_41)
				{
					func_29(&(Local_49[iLocal_41 /*11*/]), iLocal_40, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bLocal_47 && !bLocal_46)
		{
			func_11();
		}
		func_2(&bLocal_46, &bLocal_47, &uLocal_48, 4, &uLocal_44, &uLocal_45, "TRACT_TITLE", "TRACT_COLLECT");
	}
}

void func_2(bool bParam0, bool bParam1, var uParam2, int iParam3, var uParam4, var uParam5, char* sParam6, char* sParam7)
{
	int iVar0;
	
	func_10(0);
	if (*bParam0)
	{
		switch (*uParam4)
		{
			case 0:
				*uParam5 = unk_0x528279F3F1EEF869("MIDSIZED_MESSAGE");
				if (unk_0x0347CCBD719C8ADC(*uParam5))
				{
					iVar0 = unk_0xA9ADCC8D104AA552();
					if (iParam3 == 6)
					{
						unk_0x91DFC8F68F6D9B05(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						unk_0x91DFC8F68F6D9B05(iVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*uParam4++;
				}
				break;
			
			case 1:
				unk_0xEA5DEA46C3EE64D3(*uParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0x4ADC8B166E139423(sParam6);
				unk_0xD1D4F8D5470AFA4C();
				unk_0x4ADC8B166E139423(sParam7);
				unk_0x2AE954BA77A66307(func_4(iParam3));
				unk_0xD1D4F8D5470AFA4C();
				unk_0x6F06CF0E9AB02847();
				*uParam2 = unk_0x320D1840B6DAA1CC();
				*uParam4++;
				break;
			
			case 2:
				if ((unk_0x320D1840B6DAA1CC() - *uParam2) > 7000)
				{
					unk_0xEA5DEA46C3EE64D3(*uParam5, "SHARD_ANIM_OUT");
					unk_0x4F47E317C74C543B(1);
					unk_0xCA5D23E5F0F0306F(0.33f);
					unk_0x6F06CF0E9AB02847();
					*uParam4++;
				}
				else if (!func_3())
				{
					if (unk_0x0347CCBD719C8ADC(*uParam5))
					{
						func_10(1);
						unk_0xC4353D240DCE9533(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((unk_0x320D1840B6DAA1CC() - *uParam2) > 7500)
				{
					*uParam4++;
				}
				else if (!func_3())
				{
					if (unk_0x0347CCBD719C8ADC(*uParam5))
					{
						func_10(1);
						unk_0xC4353D240DCE9533(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (unk_0x0347CCBD719C8ADC(*uParam5))
				{
					unk_0x705B098546DEB18A(uParam5);
				}
				func_10(0);
				*bParam1 = 0;
				*bParam0 = 0;
				*uParam4 = 0;
				break;
			}
	}
}

int func_3()
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

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_9(iParam0))
		{
			if (BitTest(Global_113386.f_10049.f_108, func_8(func_9(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		unk_0x61481F9FBB1C7EDD(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		unk_0x61481F9FBB1C7EDD(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		unk_0x61481F9FBB1C7EDD(joaat("num_hidden_packages_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_9(iParam0))
		{
			iVar2 = (func_7(iParam0) + iVar1);
			if (func_5(iVar2, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_5(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, iParam1);
}

int func_6()
{
	return Global_1574918;
}

int func_7(int iParam0)
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

int func_8(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_9(int iParam0)
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

void func_10(int iParam0)
{
	if (Global_78586 != iParam0)
	{
		Global_78586 = iParam0;
	}
}

void func_11()
{
	func_28(95, 1);
	func_13(27, 84, 0);
	func_12(9);
	iLocal_39 = 2;
}

int func_12(int iParam0)
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
	if (BitTest(Global_113386.f_9085.f_99.f_219[iVar0], bVar1))
	{
		unk_0xB0550BC91B0159D6(&(Global_113386.f_9085.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

int func_13(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_26(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_53557[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_53557[iVar0 /*203*/].f_2 = iParam0;
	Global_53557[iVar0 /*203*/].f_10[Global_53557[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_53557[iVar0 /*203*/].f_10[Global_53557[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_53557[iVar0 /*203*/].f_10[Global_53557[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_53557[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_53557[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_53557[iVar0 /*203*/].f_4[iVar1] == Global_44257[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_53557[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_53557[iVar0 /*203*/].f_4[Global_53557[iVar0 /*203*/].f_3] = Global_44257[iParam1 /*12*/].f_3;
			Global_53557[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_53557[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_53557[iVar0 /*203*/].f_4[iVar1] == Global_44257[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_53557[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_53557[iVar0 /*203*/].f_4[Global_53557[iVar0 /*203*/].f_3] = Global_44257[iParam1 /*12*/].f_2;
			Global_53557[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_53557[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_53557[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_14(Global_53557[iVar0 /*203*/].f_4[iVar1], Global_53557[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_14(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_47582[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_47582[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_25(Global_44257[iVar20 /*12*/].f_1) };
		if (Global_44257[iVar20 /*12*/].f_2 == iParam0 && !Global_44257[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_44257[iVar20 /*12*/].f_2;
		iVar0 = Global_53195[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_53195[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_44249 = (Global_44249 - 1);
						if (Global_44249 < 0)
						{
							Global_44249 = 0;
						}
						break;
					
					case 1:
						Global_44250 = (Global_44250 - 1);
						if (Global_44250 < 0)
						{
							Global_44250 = 0;
						}
						break;
					
					case 2:
						Global_44251 = (Global_44251 - 1);
						if (Global_44251 < 0)
						{
							Global_44251 = 0;
						}
						break;
					}
				}
		}
		Global_53195[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_53195[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_53195[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_53195[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_53195[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_53195[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_53195[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_53195[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_44249 = (Global_44249 - 1);
						if (Global_44249 < 0)
						{
							Global_44249 = 0;
						}
						break;
					
					case 1:
						Global_44250 = (Global_44250 - 1);
						if (Global_44250 < 0)
						{
							Global_44250 = 0;
						}
						break;
					
					case 2:
						Global_44251 = (Global_44251 - 1);
						if (Global_44251 < 0)
						{
							Global_44251 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_53557[iVar24 /*203*/].f_1 == iParam1 && Global_53557[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_53195[iParam0 /*120*/].f_18[iVar0] = Global_53557[iVar23 /*203*/].f_1;
		Global_53195[iParam0 /*120*/].f_1[iVar0] = (Global_53557[iVar23 /*203*/].f_9 - 1);
		Global_53195[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_53195[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_53195[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_53195[iParam0 /*120*/]++;
		iVar25 = Global_53195[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_53557[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_44257[iVar26 /*12*/].f_2;
		if (Global_53557[iVar23 /*203*/].f_10[(Global_53557[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_53557[iVar23 /*203*/].f_10[(Global_53557[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_25(Global_44257[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_53195[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_15(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_15(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_15(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_15(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_15(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0xF34D8FCAE3FD4EE4())
	{
		return;
	}
	iVar0 = func_19();
	bVar1 = false;
	StringCopy(&cVar2, func_18(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0x150D8F58B26E9F70("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0x150D8F58B26E9F70("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0x150D8F58B26E9F70("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x150D8F58B26E9F70(sParam3);
				if (!unk_0xACC32B78196FBC2A(iParam4))
				{
					unk_0x26C23BE14F66F202(iParam4);
				}
				if (!unk_0xACC32B78196FBC2A(iParam5))
				{
					unk_0x26C23BE14F66F202(iParam5);
				}
				if (!unk_0xACC32B78196FBC2A(iParam6))
				{
					unk_0x26C23BE14F66F202(iParam6);
				}
				if (!unk_0xACC32B78196FBC2A(iParam7))
				{
					unk_0x26C23BE14F66F202(iParam7);
				}
				if (!unk_0xACC32B78196FBC2A(iParam8))
				{
					unk_0x26C23BE14F66F202(iParam8);
				}
				if (!unk_0xACC32B78196FBC2A(iParam9))
				{
					unk_0x26C23BE14F66F202(iParam9);
				}
				if (!unk_0xACC32B78196FBC2A(iParam10))
				{
					unk_0x26C23BE14F66F202(iParam10);
				}
				if (!unk_0xACC32B78196FBC2A(iParam11))
				{
					unk_0x26C23BE14F66F202(iParam11);
				}
				if (!unk_0xACC32B78196FBC2A(iParam12))
				{
					unk_0x26C23BE14F66F202(iParam12);
				}
				if (!unk_0xACC32B78196FBC2A(iParam13))
				{
					unk_0x26C23BE14F66F202(iParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_16(unk_0x3B81B9627E7885CF(&cVar2, &cVar2, 0, 2, unk_0xAEF70623D03F7B02(func_17(iParam1)), 0));
		}
		else
		{
			func_16(unk_0x3B81B9627E7885CF("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xAEF70623D03F7B02(func_17(iParam1)), 0));
		}
		switch (Global_20266)
		{
			case 0:
				StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
				Global_44249++;
				if (Global_44249 > 16)
				{
					Global_44249 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
				Global_44251++;
				if (Global_44251 > 16)
				{
					Global_44251 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
				Global_44250++;
				if (Global_44250 > 16)
				{
					Global_44250 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0x91DFC8F68F6D9B05(-1, "Notification", &Global_20255, 1);
	}
}

void func_16(var uParam0)
{
	Global_44252[Global_44256] = uParam0;
	Global_22663 = 1;
	Global_22662 = uParam0;
	Global_44256++;
	if (Global_44256 == 3)
	{
		Global_44256 = 0;
	}
}

char* func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_18(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0xAEF70623D03F7B02(&(Global_1998[0 /*29*/].f_7));
		
		case 1:
			return unk_0xAEF70623D03F7B02(&(Global_1998[1 /*29*/].f_7));
		
		case 2:
			return unk_0xAEF70623D03F7B02(&(Global_1998[2 /*29*/].f_7));
		
		case 7:
			return unk_0xAEF70623D03F7B02(&(Global_1998[12 /*29*/].f_7));
		
		case 4:
			return unk_0xAEF70623D03F7B02(&(Global_1998[60 /*29*/].f_7));
		
		case 6:
			return unk_0xAEF70623D03F7B02(&(Global_1998[62 /*29*/].f_7));
		
		case 3:
			return unk_0xAEF70623D03F7B02(&(Global_1998[14 /*29*/].f_7));
		
		case 16:
			return unk_0xAEF70623D03F7B02(&(Global_1998[97 /*29*/].f_7));
		
		case 19:
			return unk_0xAEF70623D03F7B02(&(Global_1998[99 /*29*/].f_7));
		
		case 15:
			return unk_0xAEF70623D03F7B02(&(Global_1998[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return unk_0xAEF70623D03F7B02(&(Global_1998[15 /*29*/].f_7));
		
		case 26:
			return unk_0xAEF70623D03F7B02(&(Global_1998[30 /*29*/].f_7));
		
		case 27:
			return unk_0xAEF70623D03F7B02(&(Global_1998[17 /*29*/].f_7));
		
		case 29:
			return unk_0xAEF70623D03F7B02(&(Global_1998[20 /*29*/].f_7));
		
		case 30:
			return unk_0xAEF70623D03F7B02(&(Global_1998[43 /*29*/].f_7));
		
		case 31:
			return unk_0xAEF70623D03F7B02(&(Global_1998[44 /*29*/].f_7));
		
		case 32:
			return unk_0xAEF70623D03F7B02(&(Global_1998[19 /*29*/].f_7));
		
		case 34:
			return unk_0xAEF70623D03F7B02(&(Global_1998[40 /*29*/].f_7));
		
		case 36:
			return unk_0xAEF70623D03F7B02("CELL_E_381");
		
		case 38:
			return unk_0xAEF70623D03F7B02(&(Global_1998[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return unk_0xAEF70623D03F7B02(&(Global_1998[122 /*29*/].f_7));
		
		case 40:
			return unk_0xAEF70623D03F7B02(&(Global_1998[125 /*29*/].f_7));
		
		case 41:
			return unk_0xAEF70623D03F7B02(&(Global_1998[113 /*29*/].f_7));
		
		case 42:
			return unk_0xAEF70623D03F7B02(&(Global_1998[126 /*29*/].f_7));
		
		case 43:
			return unk_0xAEF70623D03F7B02(&(Global_1998[127 /*29*/].f_7));
		
		case 44:
			return unk_0xAEF70623D03F7B02(&(Global_1998[124 /*29*/].f_7));
		
		case 45:
			return unk_0xAEF70623D03F7B02(&(Global_1998[114 /*29*/].f_7));
		
		case 46:
			return unk_0xAEF70623D03F7B02(&(Global_1998[115 /*29*/].f_7));
		
		case 47:
			return unk_0xAEF70623D03F7B02(&(Global_1998[116 /*29*/].f_7));
		
		case 48:
			return unk_0xAEF70623D03F7B02(&(Global_1998[123 /*29*/].f_7));
		
		case 49:
			return unk_0xAEF70623D03F7B02(&(Global_1998[117 /*29*/].f_7));
		
		case 50:
			return unk_0xAEF70623D03F7B02(&(Global_1998[118 /*29*/].f_7));
		
		case 51:
			return unk_0xAEF70623D03F7B02(&(Global_1998[119 /*29*/].f_7));
		
		case 52:
			return unk_0xAEF70623D03F7B02(&(Global_1998[120 /*29*/].f_7));
		
		case 53:
			return unk_0xAEF70623D03F7B02(&(Global_1998[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

var func_19()
{
	func_20();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_20()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_23(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_22(unk_0xE2D3D51028F0428A());
			if (func_21(iVar0) && (!func_44(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_21(Global_113386.f_2363.f_539.f_4321))
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

bool func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)
{
	if (func_21(iParam0))
	{
		return func_24(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_24(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

struct<16> func_25(int iParam0)
{
	struct<16> Var0;
	struct<16> Var16;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_27(iParam0);
	if (iVar0 > -1)
	{
		if (Global_53557[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_53557[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_53557[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_53557[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_53557[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_53557[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_53557[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_53557[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_53195[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_53195[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_53195[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_53195[iVar6 /*120*/].f_18[iVar8] == Global_53557[iVar4 /*203*/].f_1)
							{
								if (Global_53195[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_44249 = (Global_44249 - 1);
											break;
										
										case 1:
											Global_44250 = (Global_44250 - 1);
											break;
										
										case 2:
											Global_44251 = (Global_44251 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_53557[iVar4 /*203*/].f_2 = iParam0;
	Global_53557[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_53557[iVar4 /*203*/] = 1;
	}
	Global_113386.f_21037.f_310++;
	if (Global_113386.f_21037.f_310 == 0)
	{
		Global_113386.f_21037.f_310 = 1;
	}
	Global_53557[iVar4 /*203*/].f_1 = Global_113386.f_21037.f_310;
	Global_53557[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_53557[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_53557[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_53557[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

void func_28(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_113386.f_9085.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_113386.f_9085.f_99.f_58[iParam0] = iParam1;
}

void func_29(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	var uVar0;
	
	if (!uParam0->f_10)
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (!func_44(13) && !func_44(14))
			{
				if (!unk_0x2791155FB0769FE5(uParam0->f_1))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), uParam0->f_3) <= (50f * 50f))
					{
						unk_0xD69A0C3662175E68(iParam1);
						while (!unk_0x0152AA00FA3130F1(iParam1))
						{
							unk_0xD69A0C3662175E68(iParam1);
							unk_0x4EDE34FBADD967A6(0);
						}
						if (bParam3)
						{
							func_30(uParam0->f_3);
						}
						unk_0x7A997A0A971D305F(uParam0->f_3, 2.5f, 0, 0, 0, 0);
						if (bParam4)
						{
							unk_0xCED9E32812D6C7C7(&uVar0, true);
							uParam0->f_1 = unk_0x1EE09F99FEF19DAF(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, uVar0, -1, iParam5, 1, iParam1);
						}
						else
						{
							unk_0xCED9E32812D6C7C7(&uVar0, 3);
							unk_0xCED9E32812D6C7C7(&uVar0, 4);
							unk_0xCED9E32812D6C7C7(&uVar0, 8);
							unk_0xCED9E32812D6C7C7(&uVar0, true);
							uParam0->f_1 = unk_0x1CD347D2BD906560(iParam2, uParam0->f_3, uVar0, -1, 1, iParam1);
						}
						unk_0xF1A23B343DFEDFD0(iParam1);
					}
				}
			}
			if (unk_0x2791155FB0769FE5(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}

void func_30(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0xA0F62C1038208492(Param0);
	if (unk_0xBCC73B466E2B2350(uVar0))
	{
		unk_0x62EB051F5ED6DD41(uVar0);
		while (!unk_0xEA02B859DE237081(uVar0))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x4EDE34FBADD967A6(0);
		unk_0xAED5221F05DAE55E(uVar0);
	}
}

bool func_31(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 1)
	{
		iVar1 = 705;
	}
	else if (iParam0 == 0)
	{
		iVar1 = 755;
	}
	else if (iParam0 == 3)
	{
		iVar1 = 815;
	}
	else if (iParam0 == 4)
	{
		iVar1 = 805;
	}
	else if (iParam0 == 5)
	{
		iVar1 = 845;
	}
	iVar0 = (iVar1 + iParam1);
	return func_5(iVar0, -1);
}

void func_32(var uParam0, var uParam1)
{
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x70453F7DF40780A5(*uParam0), 1) >= 60f)
		{
			func_39(uParam0);
			*uParam0 = 0;
			*uParam1 = 0;
		}
	}
}

void func_33(struct<3> Param0)
{
	if (func_34(unk_0xE2D3D51028F0428A(), Param0, 7f, 1))
	{
		unk_0xE1E1AF00CA06A2B7(unk_0xE2D3D51028F0428A(), Param0, 100, 2048, 1);
	}
}

bool func_34(var uParam0, struct<3> Param1, float fParam4, int iParam5)
{
	return unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(uParam0, iParam5), Param1) <= (fParam4 * fParam4);
}

int func_35()
{
	if (func_36(0))
	{
		return 0;
	}
	if (Global_100480.f_8)
	{
		if (Global_100480.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100480.f_10 > 1)
	{
		return 0;
	}
	Global_100480.f_10++;
	return 1;
}

int func_36(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_37(int iParam0, int iParam1)
{
	Global_100480.f_7 = iParam0;
	Global_100480.f_8 = iParam1;
}

void func_38(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_6();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, iParam2);
}

void func_39(var uParam0)
{
	if (unk_0x2791155FB0769FE5(*uParam0))
	{
		unk_0x451F33099166532A(*uParam0);
	}
}

int func_40(var uParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x2791155FB0769FE5(uParam0))
	{
		return 0;
	}
	if (func_45(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			iVar1 = unk_0x15CAA6D7B11F1A7C(uVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x70453F7DF40780A5(uParam0)) < (5f * 5f) || unk_0x72F6AE51B7E34865(unk_0xE2D3D51028F0428A(), unk_0x7AF1DEF5F183C1A6(uParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_41(int iParam0)
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
		unk_0xCED9E32812D6C7C7(&(Global_113386.f_20410.f_150[iVar1]), bVar0);
	}
}

int func_42(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 21;
			break;
		
		case 1:
			iVar0 = 22;
			break;
		
		case 2:
			iVar0 = 23;
			break;
		
		default:
			return 0;
			break;
	}
	StringCopy(&(Global_113386.f_14141[iVar0 /*104*/]), sParam2, 64);
	Global_113386.f_14141[iVar0 /*104*/].f_17 = iParam1;
	if (iParam3 == 0)
	{
		return 0;
	}
	else
	{
		Global_113386.f_14141[iVar0 /*104*/].f_24 = iParam3;
	}
	Global_113386.f_14141[iVar0 /*104*/].f_25 = iParam4;
	Global_113386.f_14141[iVar0 /*104*/].f_26 = iParam5;
	Global_113386.f_14141[iVar0 /*104*/].f_29 = iParam6;
	Global_113386.f_14141[iVar0 /*104*/].f_30 = iParam8;
	Global_113386.f_14141[iVar0 /*104*/].f_31 = iParam7;
	Global_113386.f_14141[iVar0 /*104*/].f_28 = 0;
	return 1;
}

int func_43(int iParam0)
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
		return BitTest(Global_113386.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

bool func_44(int iParam0)
{
	return Global_43052 == iParam0;
}

int func_45(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_46()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (Global_113386.f_18574.f_388)
	{
		sLocal_160[0] = "TRACT_HINT1B";
		iLocal_43 = 300000;
	}
	else
	{
		sLocal_160[0] = "TRACT_HINT1";
		iLocal_43 = 16000;
	}
	Local_49[0 /*11*/].f_3 = { 501.9415f, 5604.429f, 796.9146f };
	Local_49[1 /*11*/].f_3 = { 2658.18f, -1361.14f, -21.63f };
	sLocal_160[1] = "TRACT_HINT2";
	Local_49[2 /*11*/].f_3 = { 24.7139f, 7644.334f, 18.0792f };
	sLocal_160[2] = "TRACT_HINT3";
	Local_49[3 /*11*/].f_3 = { -263.55f, 4729.6f, 137.37f };
	sLocal_160[3] = "TRACT_HINT4";
	Local_49[4 /*11*/].f_3 = { -771.98f, -685.22f, 28.86f };
	sLocal_160[4] = "TRACT_HINT5";
	Local_49[5 /*11*/].f_3 = { -1605.03f, 5256.55f, 1.08f };
	sLocal_160[5] = "TRACT_HINT6";
	Local_49[6 /*11*/].f_3 = { -1804.546f, 403.9298f, 112.1966f };
	sLocal_160[6] = "TRACT_HINT7";
	Local_49[7 /*11*/].f_3 = { 484.2701f, 5617.175f, 787.4708f };
	sLocal_160[7] = "TRACT_HINT8";
	Local_49[8 /*11*/].f_3 = { -75.1004f, -819.0673f, 325.3656f };
	sLocal_160[8] = "TRACT_HINT9";
	Local_49[9 /*11*/].f_3 = { -1725.34f, -189.95f, 57.52f };
	sLocal_160[9] = "TRACT_HINT10";
	iLocal_42 = unk_0x320D1840B6DAA1CC();
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = (805 + iVar0);
		if (func_5(iVar1, -1))
		{
			iLocal_41++;
		}
		iVar0++;
	}
	iLocal_39 = 1;
}

int func_47(int iParam0)
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
	if (BitTest(Global_113386.f_9085.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	unk_0xCED9E32812D6C7C7(&(Global_113386.f_9085.f_99.f_219[iVar0]), bVar1);
	return 1;
}

void func_48()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_39(&(Local_49[iVar0 /*11*/].f_1));
		iVar0++;
	}
	unk_0xAFBDF6A5E54114C1();
}

