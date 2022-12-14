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
	if (unk_0x55EEDBBFDC6E810F(210))
	{
		func_48();
	}
	if (unk_0x24B651D85CCE5EB4(joaat("epsilontract")) > 1)
	{
		unk_0x675D9C12C73D3DE7();
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
	
	if ((func_45(unk_0xC1A5EC5C986B98AD()) && !func_44(14)) && !unk_0x72474BA05A104E1E())
	{
		if (iLocal_41 < 10)
		{
			if (iLocal_41 == 0)
			{
				if (!func_43(36) && (unk_0xA5E11AF0A2B928C1() - iLocal_42) > iLocal_43)
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
					if ((unk_0xA5E11AF0A2B928C1() - iLocal_42) > 15000)
					{
						func_42(0, 60, sLocal_160[iLocal_41], 1, 0, 0, 0, 0, 1);
						iLocal_42 = -1;
					}
				}
			}
			if (Local_49[iLocal_41 /*11*/].f_10)
			{
				if (unk_0x923599D48C8BCBED(Local_49[iLocal_41 /*11*/].f_1) || func_40(Local_49[iLocal_41 /*11*/].f_1))
				{
					if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
					{
						unk_0x1F9F6C767BE640D5(unk_0xC1A5EC5C986B98AD());
					}
					func_39(&(Local_49[iLocal_41 /*11*/].f_1));
					Local_49[iLocal_41 /*11*/].f_10 = 0;
					unk_0xCA9F34C06A0529CE(0, 200, 250);
					iVar0 = (805 + iLocal_41);
					func_38(iVar0, 1, -1);
					unk_0xB27C3C2F7357CAA1(joaat("num_hidden_packages_2"), 1f);
					bLocal_46 = true;
					if (iLocal_41 < 10)
					{
						iLocal_41++;
						iLocal_42 = unk_0xA5E11AF0A2B928C1();
						func_37(1, 0);
						func_35();
					}
				}
				else if (unk_0x0E0433D7F75E162D(Local_49[iLocal_41 /*11*/].f_1))
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
				*uParam5 = unk_0x2B4645565204EA06("MIDSIZED_MESSAGE");
				if (unk_0x5FAF55B1F052A2E6(*uParam5))
				{
					iVar0 = unk_0x9F2C1BA4F2BF5CF8();
					if (iParam3 == 6)
					{
						unk_0x531D638530A8DB97(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						unk_0x531D638530A8DB97(iVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*uParam4++;
				}
				break;
			
			case 1:
				unk_0x9FD96C5DE6EDFC15(*uParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0x2AF11E92DE43CDE3(sParam6);
				unk_0xF8FCA9E7130CE1C8();
				unk_0x2AF11E92DE43CDE3(sParam7);
				unk_0x64C50E40AA09A6B5(func_4(iParam3));
				unk_0xF8FCA9E7130CE1C8();
				unk_0xAE3413B0654A0035();
				*uParam2 = unk_0xA5E11AF0A2B928C1();
				*uParam4++;
				break;
			
			case 2:
				if ((unk_0xA5E11AF0A2B928C1() - *uParam2) > 7000)
				{
					unk_0x9FD96C5DE6EDFC15(*uParam5, "SHARD_ANIM_OUT");
					unk_0xC6A3EF6C4A3412C1(1);
					unk_0xC49D258FBF3BF214(0.33f);
					unk_0xAE3413B0654A0035();
					*uParam4++;
				}
				else if (!func_3())
				{
					if (unk_0x5FAF55B1F052A2E6(*uParam5))
					{
						func_10(1);
						unk_0x55CCA1B8F633F628(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((unk_0xA5E11AF0A2B928C1() - *uParam2) > 7500)
				{
					*uParam4++;
				}
				else if (!func_3())
				{
					if (unk_0x5FAF55B1F052A2E6(*uParam5))
					{
						func_10(1);
						unk_0x55CCA1B8F633F628(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (unk_0x5FAF55B1F052A2E6(*uParam5))
				{
					unk_0xD0AE101DBAA43C98(uParam5);
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
			if (BitTest(Global_113648.f_10051.f_108, func_8(func_9(iParam0), iVar1)))
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
	return unk_0xD03506C6E58E4E95(iParam0, iParam1);
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
	if (Global_78826 != iParam0)
	{
		Global_78826 = iParam0;
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
	if (BitTest(Global_113648.f_9087.f_99.f_219[iVar0], bVar1))
	{
		unk_0x061B1200C95204CB(&(Global_113648.f_9087.f_99.f_219[iVar0]), bVar1);
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
	if (Global_53765[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_53765[iVar0 /*203*/].f_2 = iParam0;
	Global_53765[iVar0 /*203*/].f_10[Global_53765[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_53765[iVar0 /*203*/].f_10[Global_53765[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_53765[iVar0 /*203*/].f_10[Global_53765[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_53765[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_53765[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_53765[iVar0 /*203*/].f_4[iVar1] == Global_44465[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_53765[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_53765[iVar0 /*203*/].f_4[Global_53765[iVar0 /*203*/].f_3] = Global_44465[iParam1 /*12*/].f_3;
			Global_53765[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_53765[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_53765[iVar0 /*203*/].f_4[iVar1] == Global_44465[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_53765[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_53765[iVar0 /*203*/].f_4[Global_53765[iVar0 /*203*/].f_3] = Global_44465[iParam1 /*12*/].f_2;
			Global_53765[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_53765[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_53765[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_14(Global_53765[iVar0 /*203*/].f_4[iVar1], Global_53765[iVar0 /*203*/].f_1, 1, bParam2, 0);
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
		iVar19 = (Global_47790[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_47790[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_25(Global_44465[iVar20 /*12*/].f_1) };
		if (Global_44465[iVar20 /*12*/].f_2 == iParam0 && !Global_44465[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_44465[iVar20 /*12*/].f_2;
		iVar0 = Global_53403[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_53403[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_44457 = (Global_44457 - 1);
						if (Global_44457 < 0)
						{
							Global_44457 = 0;
						}
						break;
					
					case 1:
						Global_44458 = (Global_44458 - 1);
						if (Global_44458 < 0)
						{
							Global_44458 = 0;
						}
						break;
					
					case 2:
						Global_44459 = (Global_44459 - 1);
						if (Global_44459 < 0)
						{
							Global_44459 = 0;
						}
						break;
					}
				}
		}
		Global_53403[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_53403[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_53403[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_53403[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_53403[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_53403[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_53403[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_53403[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_44457 = (Global_44457 - 1);
						if (Global_44457 < 0)
						{
							Global_44457 = 0;
						}
						break;
					
					case 1:
						Global_44458 = (Global_44458 - 1);
						if (Global_44458 < 0)
						{
							Global_44458 = 0;
						}
						break;
					
					case 2:
						Global_44459 = (Global_44459 - 1);
						if (Global_44459 < 0)
						{
							Global_44459 = 0;
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
			if (Global_53765[iVar24 /*203*/].f_1 == iParam1 && Global_53765[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_53403[iParam0 /*120*/].f_18[iVar0] = Global_53765[iVar23 /*203*/].f_1;
		Global_53403[iParam0 /*120*/].f_1[iVar0] = (Global_53765[iVar23 /*203*/].f_9 - 1);
		Global_53403[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_53403[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_53403[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_53403[iParam0 /*120*/]++;
		iVar25 = Global_53403[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_53765[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_44465[iVar26 /*12*/].f_2;
		if (Global_53765[iVar23 /*203*/].f_10[(Global_53765[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_53765[iVar23 /*203*/].f_10[(Global_53765[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_25(Global_44465[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_53403[iParam0 /*120*/].f_69[iVar0] && !bParam3)
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
	
	if (unk_0x2FECE8D166B3056B())
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
				unk_0xD30970E11AD0FF0D("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0xD30970E11AD0FF0D("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0xD30970E11AD0FF0D("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0xD30970E11AD0FF0D(sParam3);
				if (!unk_0x2AC37494BBF1DB16(iParam4))
				{
					unk_0x48849374B34BB7B9(iParam4);
				}
				if (!unk_0x2AC37494BBF1DB16(iParam5))
				{
					unk_0x48849374B34BB7B9(iParam5);
				}
				if (!unk_0x2AC37494BBF1DB16(iParam6))
				{
					unk_0x48849374B34BB7B9(iParam6);
				}
				if (!unk_0x2AC37494BBF1DB16(iParam7))
				{
					unk_0x48849374B34BB7B9(iParam7);
				}
				if (!unk_0x2AC37494BBF1DB16(iParam8))
				{
					unk_0x48849374B34BB7B9(iParam8);
				}
				if (!unk_0x2AC37494BBF1DB16(iParam9))
				{
					unk_0x48849374B34BB7B9(iParam9);
				}
				if (!unk_0x2AC37494BBF1DB16(iParam10))
				{
					unk_0x48849374B34BB7B9(iParam10);
				}
				if (!unk_0x2AC37494BBF1DB16(iParam11))
				{
					unk_0x48849374B34BB7B9(iParam11);
				}
				if (!unk_0x2AC37494BBF1DB16(iParam12))
				{
					unk_0x48849374B34BB7B9(iParam12);
				}
				if (!unk_0x2AC37494BBF1DB16(iParam13))
				{
					unk_0x48849374B34BB7B9(iParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_16(unk_0x4BE755B3858339A1(&cVar2, &cVar2, 0, 2, unk_0x45816CECE89B5B19(func_17(iParam1)), 0));
		}
		else
		{
			func_16(unk_0x4BE755B3858339A1("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0x45816CECE89B5B19(func_17(iParam1)), 0));
		}
		switch (Global_20383)
		{
			case 0:
				StringCopy(&Global_20372, "Phone_SoundSet_Michael", 24);
				Global_44457++;
				if (Global_44457 > 16)
				{
					Global_44457 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_20372, "Phone_SoundSet_Trevor", 24);
				Global_44459++;
				if (Global_44459 > 16)
				{
					Global_44459 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_20372, "Phone_SoundSet_Franklin", 24);
				Global_44458++;
				if (Global_44458 > 16)
				{
					Global_44458 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_20372, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0x531D638530A8DB97(-1, "Notification", &Global_20372, 1);
	}
}

void func_16(var uParam0)
{
	Global_44460[Global_44464] = uParam0;
	Global_22783 = 1;
	Global_22782 = uParam0;
	Global_44464++;
	if (Global_44464 == 3)
	{
		Global_44464 = 0;
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
			return unk_0x45816CECE89B5B19(&(Global_2028[0 /*29*/].f_7));
		
		case 1:
			return unk_0x45816CECE89B5B19(&(Global_2028[1 /*29*/].f_7));
		
		case 2:
			return unk_0x45816CECE89B5B19(&(Global_2028[2 /*29*/].f_7));
		
		case 7:
			return unk_0x45816CECE89B5B19(&(Global_2028[12 /*29*/].f_7));
		
		case 4:
			return unk_0x45816CECE89B5B19(&(Global_2028[60 /*29*/].f_7));
		
		case 6:
			return unk_0x45816CECE89B5B19(&(Global_2028[62 /*29*/].f_7));
		
		case 3:
			return unk_0x45816CECE89B5B19(&(Global_2028[14 /*29*/].f_7));
		
		case 16:
			return unk_0x45816CECE89B5B19(&(Global_2028[97 /*29*/].f_7));
		
		case 19:
			return unk_0x45816CECE89B5B19(&(Global_2028[99 /*29*/].f_7));
		
		case 15:
			return unk_0x45816CECE89B5B19(&(Global_2028[96 /*29*/].f_7));
		
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
			return unk_0x45816CECE89B5B19(&(Global_2028[15 /*29*/].f_7));
		
		case 26:
			return unk_0x45816CECE89B5B19(&(Global_2028[30 /*29*/].f_7));
		
		case 27:
			return unk_0x45816CECE89B5B19(&(Global_2028[17 /*29*/].f_7));
		
		case 29:
			return unk_0x45816CECE89B5B19(&(Global_2028[20 /*29*/].f_7));
		
		case 30:
			return unk_0x45816CECE89B5B19(&(Global_2028[43 /*29*/].f_7));
		
		case 31:
			return unk_0x45816CECE89B5B19(&(Global_2028[44 /*29*/].f_7));
		
		case 32:
			return unk_0x45816CECE89B5B19(&(Global_2028[19 /*29*/].f_7));
		
		case 34:
			return unk_0x45816CECE89B5B19(&(Global_2028[40 /*29*/].f_7));
		
		case 36:
			return unk_0x45816CECE89B5B19("CELL_E_381");
		
		case 38:
			return unk_0x45816CECE89B5B19(&(Global_2028[64 /*29*/].f_7));
		
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
			return unk_0x45816CECE89B5B19(&(Global_2028[122 /*29*/].f_7));
		
		case 40:
			return unk_0x45816CECE89B5B19(&(Global_2028[125 /*29*/].f_7));
		
		case 41:
			return unk_0x45816CECE89B5B19(&(Global_2028[113 /*29*/].f_7));
		
		case 42:
			return unk_0x45816CECE89B5B19(&(Global_2028[126 /*29*/].f_7));
		
		case 43:
			return unk_0x45816CECE89B5B19(&(Global_2028[127 /*29*/].f_7));
		
		case 44:
			return unk_0x45816CECE89B5B19(&(Global_2028[124 /*29*/].f_7));
		
		case 45:
			return unk_0x45816CECE89B5B19(&(Global_2028[114 /*29*/].f_7));
		
		case 46:
			return unk_0x45816CECE89B5B19(&(Global_2028[115 /*29*/].f_7));
		
		case 47:
			return unk_0x45816CECE89B5B19(&(Global_2028[116 /*29*/].f_7));
		
		case 48:
			return unk_0x45816CECE89B5B19(&(Global_2028[123 /*29*/].f_7));
		
		case 49:
			return unk_0x45816CECE89B5B19(&(Global_2028[117 /*29*/].f_7));
		
		case 50:
			return unk_0x45816CECE89B5B19(&(Global_2028[118 /*29*/].f_7));
		
		case 51:
			return unk_0x45816CECE89B5B19(&(Global_2028[119 /*29*/].f_7));
		
		case 52:
			return unk_0x45816CECE89B5B19(&(Global_2028[120 /*29*/].f_7));
		
		case 53:
			return unk_0x45816CECE89B5B19(&(Global_2028[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

var func_19()
{
	func_20();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_20()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_23(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_22(unk_0xC1A5EC5C986B98AD());
			if (func_21(iVar0) && (!func_44(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_21(Global_113648.f_2365.f_539.f_4321))
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

bool func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(uParam0);
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
	return Global_2028[iParam0 /*29*/];
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
		if (Global_53765[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_53765[iVar1 /*203*/] == 0)
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
		if (Global_53765[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_53765[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_53765[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_53765[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_53765[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_53765[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_53403[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_53403[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_53403[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_53403[iVar6 /*120*/].f_18[iVar8] == Global_53765[iVar4 /*203*/].f_1)
							{
								if (Global_53403[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_44457 = (Global_44457 - 1);
											break;
										
										case 1:
											Global_44458 = (Global_44458 - 1);
											break;
										
										case 2:
											Global_44459 = (Global_44459 - 1);
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
	Global_53765[iVar4 /*203*/].f_2 = iParam0;
	Global_53765[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_53765[iVar4 /*203*/] = 1;
	}
	Global_113648.f_21039.f_310++;
	if (Global_113648.f_21039.f_310 == 0)
	{
		Global_113648.f_21039.f_310 = 1;
	}
	Global_53765[iVar4 /*203*/].f_1 = Global_113648.f_21039.f_310;
	Global_53765[iVar4 /*203*/].f_9 = 0;
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
		if (Global_53765[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_53765[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_53765[iVar0 /*203*/].f_1;
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
	if (Global_113648.f_9087.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_113648.f_9087.f_99.f_58[iParam0] = iParam1;
}

void func_29(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	var uVar0;
	
	if (!uParam0->f_10)
	{
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			if (!func_44(13) && !func_44(14))
			{
				if (!unk_0x0E0433D7F75E162D(uParam0->f_1))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), uParam0->f_3) <= (50f * 50f))
					{
						unk_0x852EC2A7DE66202D(iParam1);
						while (!unk_0x0CBB7C273DED26E7(iParam1))
						{
							unk_0x852EC2A7DE66202D(iParam1);
							unk_0x4EDE34FBADD967A6(0);
						}
						if (bParam3)
						{
							func_30(uParam0->f_3);
						}
						unk_0xF82BC5193AF62796(uParam0->f_3, 2.5f, 0, 0, 0, 0);
						if (bParam4)
						{
							unk_0xECDAB41968FF21A8(&uVar0, true);
							uParam0->f_1 = unk_0x9D4156571988E1D4(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, uVar0, -1, iParam5, 1, iParam1);
						}
						else
						{
							unk_0xECDAB41968FF21A8(&uVar0, 3);
							unk_0xECDAB41968FF21A8(&uVar0, 4);
							unk_0xECDAB41968FF21A8(&uVar0, 8);
							unk_0xECDAB41968FF21A8(&uVar0, true);
							uParam0->f_1 = unk_0x8D2015F36A52256C(iParam2, uParam0->f_3, uVar0, -1, 1, iParam1);
						}
						unk_0xE0A291F406691F03(iParam1);
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

void func_30(struct<3> Param0)
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
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x55AE93A6E3B0AE8F(*uParam0), 1) >= 60f)
		{
			func_39(uParam0);
			*uParam0 = 0;
			*uParam1 = 0;
		}
	}
}

void func_33(struct<3> Param0)
{
	if (func_34(unk_0xC1A5EC5C986B98AD(), Param0, 7f, 1))
	{
		unk_0x952D2B8A054C4FF8(unk_0xC1A5EC5C986B98AD(), Param0, 100, 2048, 1);
	}
}

bool func_34(var uParam0, struct<3> Param1, float fParam4, int iParam5)
{
	return unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(uParam0, iParam5), Param1) <= (fParam4 * fParam4);
}

int func_35()
{
	if (func_36(0))
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

int func_36(bool bParam0)
{
	if (!bParam0 && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_37(int iParam0, int iParam1)
{
	Global_100720.f_7 = iParam0;
	Global_100720.f_8 = iParam1;
}

void func_38(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_6();
	}
	unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
}

void func_39(var uParam0)
{
	if (unk_0x0E0433D7F75E162D(*uParam0))
	{
		unk_0x7E131AB8520C5824(*uParam0);
	}
}

int func_40(var uParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x0E0433D7F75E162D(uParam0))
	{
		return 0;
	}
	if (func_45(unk_0xC1A5EC5C986B98AD()))
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
		unk_0xECDAB41968FF21A8(&(Global_113648.f_20412.f_150[iVar1]), bVar0);
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
	StringCopy(&(Global_113648.f_14143[iVar0 /*104*/]), sParam2, 64);
	Global_113648.f_14143[iVar0 /*104*/].f_17 = iParam1;
	if (iParam3 == 0)
	{
		return 0;
	}
	else
	{
		Global_113648.f_14143[iVar0 /*104*/].f_24 = iParam3;
	}
	Global_113648.f_14143[iVar0 /*104*/].f_25 = iParam4;
	Global_113648.f_14143[iVar0 /*104*/].f_26 = iParam5;
	Global_113648.f_14143[iVar0 /*104*/].f_29 = iParam6;
	Global_113648.f_14143[iVar0 /*104*/].f_30 = iParam8;
	Global_113648.f_14143[iVar0 /*104*/].f_31 = iParam7;
	Global_113648.f_14143[iVar0 /*104*/].f_28 = 0;
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
		return BitTest(Global_113648.f_20412.f_150[iVar1], iVar0);
	}
	return 0;
}

bool func_44(int iParam0)
{
	return Global_43257 == iParam0;
}

int func_45(var uParam0)
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

void func_46()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (Global_113648.f_18576.f_388)
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
	iLocal_42 = unk_0xA5E11AF0A2B928C1();
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
	if (BitTest(Global_113648.f_9087.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	unk_0xECDAB41968FF21A8(&(Global_113648.f_9087.f_99.f_219[iVar0]), bVar1);
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
	unk_0x675D9C12C73D3DE7();
}

