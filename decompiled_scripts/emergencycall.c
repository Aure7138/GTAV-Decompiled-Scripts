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
	int iLocal_28 = 0;
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
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (unk_0x4B34601C5C56F3EE(11))
	{
		iLocal_43 = 5;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			switch (iLocal_43)
			{
				case 0:
					func_9();
					break;
				
				case 1:
					break;
				
				case 2:
					func_8();
					if (unk_0x9315DBF7D972F07A())
					{
						if (unk_0x5D5732191056751C(7, unk_0xE2D3D51028F0428A(), 2, 3f, &uLocal_49, 0, 0))
						{
							iLocal_48 = unk_0x320D1840B6DAA1CC();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x302D843E3C8F40E2(7, Local_45, 2, 3f, &uLocal_49, 0, 0))
					{
						iLocal_48 = unk_0x320D1840B6DAA1CC();
						iLocal_43 = 5;
					}
					break;
				
				case 3:
					func_8();
					if (unk_0x9315DBF7D972F07A())
					{
						if ((func_7(unk_0x9E2D6C50374FCFA9(), 0) && func_4(unk_0x9E2D6C50374FCFA9()) == 5) && Global_1963926)
						{
							if (Global_1963927 == 0)
							{
								Global_1963927 = 1;
							}
							iLocal_43 = 5;
						}
						else if (unk_0x5D5732191056751C(5, unk_0xE2D3D51028F0428A(), 2, 3f, &uLocal_49, 0, 0))
						{
							iLocal_48 = unk_0x320D1840B6DAA1CC();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x302D843E3C8F40E2(5, Local_45, 2, 3f, &uLocal_49, 0, 0))
					{
						iLocal_48 = unk_0x320D1840B6DAA1CC();
						iLocal_43 = 5;
					}
					break;
				
				case 4:
					func_8();
					if (unk_0x9315DBF7D972F07A())
					{
						if (unk_0x5D5732191056751C(3, unk_0xE2D3D51028F0428A(), 4, 3f, &uLocal_49, 0, 0))
						{
							iLocal_48 = unk_0x320D1840B6DAA1CC();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x302D843E3C8F40E2(3, Local_45, 4, 3f, &uLocal_49, 0, 0))
					{
						if (Global_96938.f_358 == unk_0x2E87280918B16506("AGENCY_PREP_1") || (unk_0xB4C854DD86E40FDA(unk_0x2E87280918B16506("agency_prep1")) > 0 && func_3(0)))
						{
							Global_96938.f_358 = unk_0x2E87280918B16506("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_96868 = 1;
						}
						iLocal_48 = unk_0x320D1840B6DAA1CC();
						iLocal_43 = 5;
					}
					break;
				
				case 5:
					if (unk_0x320D1840B6DAA1CC() > (iLocal_48 + 60000) || !unk_0x99B99DA99FB0D4EC(uLocal_49))
					{
						func_1();
					}
					else if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
					{
						if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
						{
							if (unk_0x99B99DA99FB0D4EC(uLocal_49))
							{
								unk_0xA4D968C5E2A5D0A0(uLocal_49);
							}
						}
					}
					break;
				}
		}
	}
}

void func_1()
{
	iLocal_43 = 0;
	iLocal_44 = 0;
	unk_0xAFBDF6A5E54114C1();
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_330[iParam0 /*6*/];
}

int func_3(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_4(int iParam0)
{
	if (func_6(iParam0) == 233)
	{
		return func_5(iParam0);
	}
	return -1;
}

int func_5(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_6(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_7(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (unk_0x320D1840B6DAA1CC() > iLocal_48 + 30000)
	{
		iLocal_43 = 5;
	}
}

void func_9()
{
	var uVar0;
	
	switch (iLocal_44)
	{
		case 0:
			iLocal_44 = 1;
			iLocal_48 = unk_0x320D1840B6DAA1CC();
			break;
		
		case 1:
			while (!func_19())
			{
				unk_0x4EDE34FBADD967A6(0);
				if (func_18() == 3)
				{
					iLocal_43 = 3;
				}
				if (func_18() == 4)
				{
					iLocal_43 = 4;
				}
				if (func_18() == 5)
				{
					iLocal_43 = 2;
				}
				if (unk_0x320D1840B6DAA1CC() > iLocal_48 + 30000)
				{
					iLocal_48 = unk_0x320D1840B6DAA1CC();
					func_12(0);
				}
			}
			if (iLocal_43 == 0)
			{
				iLocal_43 = 5;
			}
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				func_10(unk_0xE2D3D51028F0428A(), &Local_45, &uVar0);
			}
			iLocal_48 = unk_0x320D1840B6DAA1CC();
			break;
	}
}

void func_10(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar7;
	struct<3> Var10;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	var uVar20;
	int iVar21;
	var uVar22;
	struct<3> Var25;
	var uVar28;
	
	fVar18 = 5f;
	iVar0 = 1;
	iVar19 = 0;
	while (iVar19 < 2)
	{
		switch (iVar19)
		{
			case 0:
				unk_0x15CEDAB46D800682(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), iVar0, uParam1, &fVar16, &iVar1, 5, 1077936128, 0);
				unk_0x13FD00A258A58752(*uParam1, 1f, 1, &uVar4, &uVar7, &uVar2, &uVar3, &fVar13, 0);
				if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), -3044.66f, 596.43f, 6.58f, 1) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				Var10 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) - unk_0x6B62510F212526DC(uParam0, 1) };
				fVar14 = unk_0xD12EFCAB87804BED(Var10.f_0, Var10.f_1);
				fVar15 = (fVar16 + 180f);
				if (fVar15 > 360f)
				{
					fVar15 = (fVar15 - 360f);
				}
				if (func_11(fVar14, fVar16, 90f))
				{
					*uParam2 = fVar16;
				}
				else
				{
					*uParam2 = fVar15;
				}
				if (fVar13 < 0f)
				{
					fVar17 = 0f;
				}
				else if (unk_0x535E2CA2F0DA34D4(unk_0xEA3E64155DA5F4D9(*uParam1, 1, 1, 1077936128, 0)))
				{
					fVar17 = 0f;
				}
				else
				{
					fVar17 = (fVar18 * unk_0xBBDA792448DB5A89((iVar1 / 2)));
					if (fVar17 == 0f)
					{
						fVar17 = (fVar17 + fVar18);
					}
					if (iVar1 == 5)
					{
						fVar17 = (fVar17 + fVar18);
					}
					if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), 294f, -895f, 28f, 1) < 25f || unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), -713.01f, -819.64f, 22.63f, 1) < 25f)
					{
						fVar17 = (fVar17 + 5f);
					}
					else
					{
						fVar17 = (fVar17 + 3.75f);
					}
					fVar17 = (fVar17 + (fVar13 / 2f));
				}
				if (unk_0x2A488C176D52CCA5(unk_0x6DB7FBD602C51670(*uParam1, *uParam2, fVar17, 0f, 0f), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) > unk_0x2A488C176D52CCA5(unk_0x6DB7FBD602C51670(*uParam1, *uParam2, -fVar17, 0f, 0f), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)))
				{
					fVar17 = -fVar17;
				}
				*uParam1 = { unk_0x6DB7FBD602C51670(*uParam1, *uParam2, fVar17, 0f, 0f) };
				uVar20 = unk_0x9D2C476A7D8D9385(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar19++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (unk_0xB2D581BD7446BBE9(uVar20, &iVar21, &Var25, &uVar22, &uVar28) == 2)
					{
						if (iVar21 != 0)
						{
							if (Var25.f_2 > (uParam1->f_2 + 8.5f))
							{
								iVar19++;
							}
							else
							{
								iVar0++;
								iVar19 = 0;
							}
						}
						else
						{
							iVar19++;
						}
					}
				}
				else
				{
					iVar19++;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_11(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_12(int iParam0)
{
	if (func_17())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_16())
		{
			func_14(1, 1);
		}
		else
		{
			func_14(0, 0);
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
	if (!func_13())
	{
		Global_20266.f_1 = 3;
	}
}

int func_13()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
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

int func_15(int iParam0)
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

bool func_16()
{
	return BitTest(Global_1958711, 5);
}

bool func_17()
{
	return BitTest(Global_1958711, 19);
}

int func_18()
{
	return Global_22622;
}

int func_19()
{
	if (Global_21605 == 0)
	{
		return 1;
	}
	return 0;
}

