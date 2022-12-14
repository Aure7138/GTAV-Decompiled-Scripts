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
	struct<24> Local_40[2];
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
	var uLocal_101 = -1;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	bool bLocal_106 = 0;
	struct<3> Local_107[2];
	var uLocal_114[2] = { 0, 0 };
	int iLocal_117[2] = { 0, 0 };
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	var uVar1;
	struct<3> Var2;
	int iVar5;
	
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
	Var2 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xB4C854DD86E40FDA(joaat("launcher_carwash")) > 1)
	{
		unk_0xAFBDF6A5E54114C1();
	}
	if (unk_0x9315DBF7D972F07A())
	{
		unk_0x3F57BEDBC381CBC7();
		unk_0x2C07CBAFAC54A645(0);
	}
	else if (unk_0x4B34601C5C56F3EE(99))
	{
		func_74();
	}
	if (Global_2883694)
	{
		if (unk_0xB4C854DD86E40FDA(-949873222) == 0)
		{
			unk_0x251C5C1DDC74D01D(-949873222);
			while (!unk_0x095032C22DEE1587(-949873222))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xC4BB298BD441BE78(-949873222, &ScriptParam_0, 23, 1424);
		}
		unk_0xAFBDF6A5E54114C1();
	}
	if (func_73(unk_0xE2D3D51028F0428A()))
	{
	}
	func_65();
	while (true)
	{
		func_73(unk_0xE2D3D51028F0428A());
		if (func_64(unk_0xE2D3D51028F0428A(), Var2, 0) > (100f + 20f))
		{
			func_74();
		}
		bVar0 = false;
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar1 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			bVar0 = (func_60(uVar1) || func_59(uVar1));
			bLocal_106 = unk_0xBCF71E2C4B3DF832(uVar1);
			func_58(bLocal_106);
		}
		iVar5 = 0;
		while (iVar5 < Local_40.f_0)
		{
			func_57(iVar5);
			iVar5++;
		}
		if (func_1(&Local_40, &uLocal_89, bVar0, 0, 1, 1424))
		{
			func_74();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam1->f_10)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			func_52(iParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_13)
	{
		case 0:
			iVar0 = 0;
			if (func_45(uParam1->f_16))
			{
				iVar0 = 0;
				while (iVar0 < *iParam0)
				{
					if (func_42(iParam0[iVar0 /*24*/]) && (*iParam0)[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
						if ((iParam0[iVar0 /*24*/])->f_7 || (unk_0x969475FA6AB2673A() && uParam1->f_16 == 0))
						{
							func_41(uParam1, 6);
						}
						else if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0)
						{
							func_41(uParam1, 8);
						}
						else if (bParam2)
						{
							func_41(uParam1, 3);
						}
						else if ((iParam0[iVar0 /*24*/])->f_8)
						{
							func_41(uParam1, 2);
						}
						else if (func_30() < (iParam0[uParam1->f_12 /*24*/])->f_9)
						{
							func_41(uParam1, 1);
						}
						else if (func_25())
						{
							func_41(uParam1, 7);
						}
						else
						{
							func_41(uParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				func_24(uParam1);
			}
			break;
		
		case 2:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_6);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || (iParam0[iVar0 /*24*/])->f_8 == 0)
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 1:
			if (!uParam1->f_9)
			{
				func_13(uParam1, uParam1->f_2, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || func_30() >= (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 6:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_1);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 3:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_3);
			}
			if ((func_18(iParam0[uParam1->f_12 /*24*/]) || bParam2 == 0) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 7:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_5);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 8:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_4);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 9:
			if (!uParam1->f_9)
			{
				if (func_12())
				{
					func_22(uParam1, uParam1->f_7);
				}
				else
				{
					func_22(uParam1, uParam1->f_8);
				}
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || func_9(iParam0[uParam1->f_12 /*24*/]))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 4:
			unk_0x07899AAA5D680386(2, 51);
			unk_0x7653D561C9574763(0, 101, 1);
			func_8();
			if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0)
			{
				func_41(uParam1, 8);
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_8)
			{
				func_41(uParam1, 2);
				return 0;
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			if (Global_75485)
			{
				return 0;
			}
			if (func_5(1))
			{
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) || func_4(unk_0xE2D3D51028F0428A(), 0) != -1)
				{
					func_41(uParam1, 0);
					return 0;
				}
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_7 || (unk_0x969475FA6AB2673A() && uParam1->f_16 == 0))
			{
				func_41(uParam1, 6);
				return 0;
			}
			if (func_25())
			{
				func_41(uParam1, 7);
				return 0;
			}
			if (func_30() < (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_41(uParam1, 1);
				return 0;
			}
			if (!uParam1->f_9)
			{
				func_13(uParam1, *uParam1, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && !unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
			}
			if (unk_0xF1EC2C71FD1371B8() || unk_0xDFA2E5162727D6D2())
			{
				return 0;
			}
			if (unk_0x3C7ED37A9FE7C585(unk_0xE2D3D51028F0428A()))
			{
				if ((unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A()) || unk_0xAB3249ACBDE2D8B9(unk_0xE2D3D51028F0428A())) || unk_0x679B82F98EF660A7(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if ((unk_0x41FECC8DB00381BD(unk_0xE2D3D51028F0428A()) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x03454821A9ECF4AA(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x1755A0CD57C780C6(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0xFF45C7CD7F890B51(unk_0xE2D3D51028F0428A()) || unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x207D53F9E0190691(unk_0xE2D3D51028F0428A()) > 0.05f)
				{
					return 0;
				}
			}
			if (unk_0xF09A4F413B0D30EB(2, 51) && uParam1->f_9 == 1)
			{
				if (!func_9(iParam0[uParam1->f_12 /*24*/]))
				{
					func_41(uParam1, 9);
				}
				else
				{
					func_41(uParam1, 5);
				}
			}
			break;
		
		case 5:
			func_24(uParam1);
			(iParam0[uParam1->f_12 /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				func_41(uParam1, 0);
				return 1;
			}
			unk_0x3410421C60BF7143(1);
			unk_0x917F631782A9CB32(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 20f, 0);
			if (!unk_0xACC32B78196FBC2A((iParam0[uParam1->f_12 /*24*/])->f_5))
			{
				unk_0xAF76A37C80EFD1D8((iParam0[uParam1->f_12 /*24*/])->f_5);
				while (!unk_0xF79F112CE5999680((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					func_8();
					if (func_73(unk_0xE2D3D51028F0428A()))
					{
						if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && !Global_78319)
						{
							func_2(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 2f, 1, 1056964608, 0, 1, 0);
							unk_0xA3E3FC2853E2107B(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0);
						}
					}
					unk_0x07899AAA5D680386(2, 51);
					unk_0xAF76A37C80EFD1D8((iParam0[uParam1->f_12 /*24*/])->f_5);
					unk_0x7653D561C9574763(0, 101, 1);
					unk_0x7653D561C9574763(0, 75, 1);
					unk_0x7653D561C9574763(0, 23, 1);
					unk_0x4EDE34FBADD967A6(0);
				}
				if (bParam3)
				{
					unk_0x859006DB870314C5(250);
				}
				if (unk_0xF79F112CE5999680((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!unk_0xA829C9A2767AC8EF())
						{
							if (func_73(unk_0xE2D3D51028F0428A()))
							{
								if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && !Global_78319)
								{
									func_2(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 2f, 1, 1056964608, 0, 1, 0);
									unk_0xA3E3FC2853E2107B(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0);
								}
							}
							unk_0x07899AAA5D680386(2, 51);
							unk_0x7653D561C9574763(0, 101, 1);
							unk_0x7653D561C9574763(0, 75, 1);
							unk_0x7653D561C9574763(0, 23, 1);
							func_8();
							unk_0x4EDE34FBADD967A6(0);
						}
					}
					unk_0xE81651AD79516E48((iParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					unk_0xD195D79715508EFA((iParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_2(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x7653D561C9574763(0, 71, 1);
	unk_0x7653D561C9574763(0, 72, 1);
	unk_0x7653D561C9574763(0, 76, 1);
	unk_0x7653D561C9574763(0, 73, 1);
	unk_0x7653D561C9574763(0, 59, 1);
	unk_0x7653D561C9574763(0, 60, 1);
	if (bParam5)
	{
		unk_0x7653D561C9574763(0, 75, 1);
	}
	unk_0x7653D561C9574763(0, 80, 1);
	if (!bParam6)
	{
		unk_0x7653D561C9574763(0, 69, 1);
		unk_0x7653D561C9574763(0, 70, 1);
		unk_0x7653D561C9574763(0, 68, 1);
	}
	unk_0x7653D561C9574763(0, 74, 1);
	unk_0x7653D561C9574763(0, 86, 1);
	unk_0x7653D561C9574763(0, 81, 1);
	unk_0x7653D561C9574763(0, 82, 1);
	unk_0x7653D561C9574763(0, 138, 1);
	unk_0x7653D561C9574763(0, 136, 1);
	unk_0x7653D561C9574763(0, 114, 1);
	unk_0x7653D561C9574763(0, 107, 1);
	unk_0x7653D561C9574763(0, 110, 1);
	unk_0x7653D561C9574763(0, 89, 1);
	unk_0x7653D561C9574763(0, 89, 1);
	unk_0x7653D561C9574763(0, 87, 1);
	unk_0x7653D561C9574763(0, 88, 1);
	unk_0x7653D561C9574763(0, 113, 1);
	unk_0x7653D561C9574763(0, 115, 1);
	unk_0x7653D561C9574763(0, 116, 1);
	unk_0x7653D561C9574763(0, 117, 1);
	unk_0x7653D561C9574763(0, 118, 1);
	unk_0x7653D561C9574763(0, 119, 1);
	unk_0x7653D561C9574763(0, 352, 1);
	unk_0x7653D561C9574763(0, 131, 1);
	unk_0x7653D561C9574763(0, 132, 1);
	unk_0x7653D561C9574763(0, 123, 1);
	unk_0x7653D561C9574763(0, 126, 1);
	unk_0x7653D561C9574763(0, 129, 1);
	unk_0x7653D561C9574763(0, 130, 1);
	unk_0x7653D561C9574763(0, 133, 1);
	unk_0x7653D561C9574763(0, 134, 1);
	unk_0x5951E2E1DB653567();
	func_3(iParam0);
	if ((unk_0x320D1840B6DAA1CC() - Global_29) > 500)
	{
		unk_0xD28E3800883DED83(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x320D1840B6DAA1CC();
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x48053974ED6F63CE(unk_0x207D53F9E0190691(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_3(int iParam0)
{
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x4545AF649BD80692(iParam0))
		{
			if (unk_0xD377CBCD474FDCFA(iParam0))
			{
				unk_0x416220C999F84215(iParam0, 0);
			}
		}
	}
}

int func_4(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (unk_0xD5C6B5E3B93A5EDC(iParam0, iParam1))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(iParam0, iParam1);
			if (unk_0xE5965CDF24F93A9F(uVar0))
			{
				iVar1 = unk_0xD664875C4BDB14B0(unk_0x15CAA6D7B11F1A7C(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x7158135695FAE89D(iVar0, iVar3, 0))
					{
						if (unk_0xAB793EA186AB8DAA(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_5(bool bParam0)
{
	if (bParam0)
	{
		if (func_7())
		{
			return 1;
		}
	}
	if (func_6(14))
	{
		return 1;
	}
	return 0;
}

bool func_6(int iParam0)
{
	return Global_43052 == iParam0;
}

int func_7()
{
	if (Global_112331)
	{
		return 1;
	}
	if (!func_6(14) && unk_0xB4C854DD86E40FDA(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	Global_23011.f_6 = 1;
}

int func_9(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0xE2D3D51028F0428A();
	if (uParam0->f_15 == 360f)
	{
		return 1;
	}
	if (func_11(uParam0->f_12))
	{
		return 1;
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		iVar3 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (func_73(iVar3))
		{
			Var0 = { unk_0x63A8BF5E6C2BF85C(iVar3, 2) };
			if (Var0.f_1 > 45f || Var0.f_1 < -45f)
			{
				return 0;
			}
			iVar4 = iVar3;
		}
	}
	Var0 = { unk_0x63BEA94AB58D4E6D(iVar4) };
	if (func_10(uParam0->f_12, Var0) > unk_0xD0FFB162F40A139C(uParam0->f_15))
	{
		return 1;
	}
	return 0;
}

float func_10(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return ((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1));
}

int func_11(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	var uVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		return unk_0xEFD1745E9D77E91C(uVar0, 1119092736);
	}
	return unk_0xEFD1745E9D77E91C(unk_0xE2D3D51028F0428A(), 1119092736);
}

int func_13(var uParam0, var uParam1, var uParam2)
{
	if (unk_0xACC32B78196FBC2A(uParam1))
	{
		return 0;
	}
	if (func_15(uParam0) || !unk_0xF847447D4467709D())
	{
		unk_0x3410421C60BF7143(1);
		func_14(uParam1, uParam2);
		uParam0->f_14 = uParam1;
		uParam0->f_15 = uParam2;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_14(var uParam0, var uParam1)
{
	unk_0xA83426F7CEDED182(uParam0);
	unk_0x2AE954BA77A66307(uParam1);
	unk_0x89B545A74F93B1DD(0, 1, 1, -1);
}

int func_15(var uParam0)
{
	if (unk_0xACC32B78196FBC2A(uParam0->f_14))
	{
		return 0;
	}
	if (!unk_0xF847447D4467709D())
	{
		return 0;
	}
	if (unk_0x3C57C2F07FEE34D2(*uParam0, uParam0->f_14) || unk_0x3C57C2F07FEE34D2(uParam0->f_2, uParam0->f_14))
	{
		return func_17(uParam0->f_14, uParam0->f_15);
	}
	return func_16(uParam0->f_14);
}

var func_16(var uParam0)
{
	unk_0xB65782D82090BB33(uParam0);
	return unk_0x73CB3406A86A3A02(0);
}

var func_17(var uParam0, var uParam1)
{
	unk_0xB65782D82090BB33(uParam0);
	unk_0x2AE954BA77A66307(uParam1);
	return unk_0x73CB3406A86A3A02(0);
}

bool func_18(var uParam0)
{
	struct<8> Var0;
	
	Var0 = 2;
	if (uParam0->f_6 == 0)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			return 1;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			return 1;
		}
		if (func_4(unk_0xE2D3D51028F0428A(), 0) != -1)
		{
			return 1;
		}
	}
	if (uParam0->f_11 == 0)
	{
		return !func_21(unk_0xE2D3D51028F0428A(), uParam0->f_1, (uParam0->f_10 + 2f), 1);
	}
	Var0 = { func_19(uParam0->f_16, 2f) };
	return !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, 0, 1, 0);
}

struct<8> func_19(struct<8> Param0, float fParam8)
{
	struct<8> Var0;
	struct<3> Var8;
	
	Var0 = 2;
	Var8 = { func_20(Param0[1 /*3*/] - Param0[0 /*3*/]) * Vector(fParam8, fParam8, fParam8) };
	Var0[0 /*3*/] = { Param0[0 /*3*/] - Var8 };
	Var0[1 /*3*/] = { Param0[1 /*3*/] + Var8 };
	Var0.f_7 = (Param0.f_7 + (fParam8 * 2f));
	return Var0;
}

Vector3 func_20(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

bool func_21(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	return unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(iParam0, iParam5), Param1) <= (fParam4 * fParam4);
}

int func_22(var uParam0, var uParam1)
{
	if (unk_0xACC32B78196FBC2A(uParam1))
	{
		return 0;
	}
	if (func_15(uParam0) || !unk_0xF847447D4467709D())
	{
		unk_0x3410421C60BF7143(1);
		func_23(uParam1);
		uParam0->f_14 = uParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_23(var uParam0)
{
	unk_0xA83426F7CEDED182(uParam0);
	unk_0x89B545A74F93B1DD(0, 1, 1, -1);
}

void func_24(var uParam0)
{
	if (func_15(uParam0))
	{
		unk_0x3410421C60BF7143(1);
	}
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	if (uParam0->f_9 == 1)
	{
		uParam0->f_9 = 0;
	}
}

bool func_25()
{
	int iVar0;
	
	if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		return 0;
	}
	iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
	if (unk_0xEF9410C312F2B117(iVar0))
	{
		return 1;
	}
	if (func_29(iVar0))
	{
		return 1;
	}
	if (func_26(iVar0, 3))
	{
		return 1;
	}
	return !unk_0x55A0C756C4A8220C(iVar0, 0);
}

int func_26(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_27(iParam0))
	{
		iVar0 = 0;
		if (unk_0xB4C63F21D1DC6C23(iParam0, 0, 0) && unk_0xB4C63F21D1DC6C23(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0xB4C63F21D1DC6C23(iParam0, 4, 0) && unk_0xB4C63F21D1DC6C23(iParam0, 5, 0))
		{
			return 1;
		}
		if (unk_0xB4C63F21D1DC6C23(iParam0, 0, 0))
		{
			iVar0++;
		}
		if (unk_0xB4C63F21D1DC6C23(iParam0, 1, 0))
		{
			iVar0++;
		}
		if (unk_0xB4C63F21D1DC6C23(iParam0, 4, 0))
		{
			iVar0++;
		}
		if (unk_0xB4C63F21D1DC6C23(iParam0, 5, 0))
		{
			iVar0++;
		}
		if (iVar0 >= iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	if (func_28(iParam0))
	{
		if (unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (!unk_0xEF9410C312F2B117(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_28(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (!unk_0xEF9410C312F2B117(iParam0))
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

int func_30()
{
	if (unk_0x9315DBF7D972F07A())
	{
		return func_38(unk_0x9E2D6C50374FCFA9());
	}
	switch (func_32())
	{
		case 2:
			return func_31(2);
		
		case 0:
			return func_31(0);
		
		case 1:
			return func_31(1);
		
		default:
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_60328[iParam0];
}

int func_32()
{
	func_33();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_33()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_36(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_35(unk_0xE2D3D51028F0428A());
			if (func_34(iVar0) && (!func_6(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_34(Global_113386.f_2363.f_539.f_4321))
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

bool func_34(int iParam0)
{
	return iParam0 < 3;
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)
{
	if (func_34(iParam0))
	{
		return func_37(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_37(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

var func_38(int iParam0)
{
	var uVar0;
	
	uVar0 = func_39(iParam0);
	return uVar0;
}

int func_39(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x9E2D6C50374FCFA9())
		{
			return unk_0xEEE6DAFBF451B942(-1);
		}
		else if (func_40(iParam0))
		{
			return Global_1853348[iParam0 /*834*/].f_205.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_40(int iParam0)
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

void func_41(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
	func_24(uParam0);
}

bool func_42(var uParam0)
{
	func_73(unk_0xE2D3D51028F0428A());
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (func_44(0))
	{
		return 0;
	}
	if (func_43())
	{
		return 0;
	}
	if (uParam0->f_6 == 0)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			return 0;
		}
		if (func_4(unk_0xE2D3D51028F0428A(), 0) != -1)
		{
			return 0;
		}
	}
	if (uParam0->f_11 == 1)
	{
		return unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, 0, 1, 0);
	}
	return func_21(unk_0xE2D3D51028F0428A(), uParam0->f_1, uParam0->f_10, 1);
}

bool func_43()
{
	return unk_0x320D1840B6DAA1CC() <= Global_23150.f_6269 + 100;
}

bool func_44(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

int func_45(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_51())
		{
			return 0;
		}
	}
	if (unk_0xF1EC2C71FD1371B8())
	{
		return 0;
	}
	if (unk_0xDFA2E5162727D6D2())
	{
		return 0;
	}
	if (func_43())
	{
		return 0;
	}
	if (Global_63148)
	{
		return 0;
	}
	if (func_44(0))
	{
		return 0;
	}
	if (func_50(0))
	{
		return 0;
	}
	if (func_46(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0)
{
	if (func_49(iParam0))
	{
		return 1;
	}
	if (func_47(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_48(iParam0, 9);
	}
	return 0;
}

var func_48(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_49(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

int func_50(int iParam0)
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

int func_51()
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	return 1;
}

void func_52(var uParam0)
{
	if (uParam0->f_11 == 1)
	{
		func_54(&(uParam0->f_16), 255, 100, 0, 100);
	}
	else
	{
		func_53(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}

void func_53(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	
	fVar1 = (360f / unk_0xBBDA792448DB5A89(iParam8));
	Var2 = { Param0 };
	Var5 = { Param0 };
	fVar8 = 0f;
	Var2 = { Param0 };
	Var2.f_0 = (Var2.f_0 + (unk_0x0BADBFA3B172435F((fVar8 - fVar1)) * fParam3));
	Var2.f_1 = (Var2.f_1 + (unk_0xD0FFB162F40A139C((fVar8 - fVar1)) * fParam3));
	iVar0 = 0;
	while (iVar0 <= iParam8)
	{
		Var5 = { Param0 };
		Var5.f_0 = (Var5.f_0 + (unk_0x0BADBFA3B172435F(fVar8) * fParam3));
		Var5.f_1 = (Var5.f_1 + (unk_0xD0FFB162F40A139C(fVar8) * fParam3));
		unk_0x116FAA21FEE61C2C(Var2, Var5, iParam4, iParam5, iParam6, iParam7);
		Var2 = { Var5 };
		fVar8 = (fVar8 + fVar1);
		iVar0++;
	}
}

void func_54(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_55(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_55(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13[8];
	int iVar38;
	
	if (fParam6 == 0f)
	{
		return;
	}
	Var0 = { func_20(Param3 - Param0) };
	Var3 = { func_56(Var0, 0f, 0f, 1f) };
	fVar6 = (fParam6 / 2f);
	Var7 = { Param0 };
	Var10 = { Param3 };
	Var10.f_2 = Param0.f_2;
	Var13[0 /*3*/] = { Var7 - Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[1 /*3*/] = { Var7 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[2 /*3*/] = { Var10 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[3 /*3*/] = { Var10 - Var3 * Vector(fVar6, fVar6, fVar6) };
	unk_0x116FAA21FEE61C2C(Var13[0 /*3*/], Var13[1 /*3*/], uParam7, uParam8, uParam9, uParam10);
	unk_0x116FAA21FEE61C2C(Var13[1 /*3*/], Var13[2 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x116FAA21FEE61C2C(Var13[2 /*3*/], Var13[3 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x116FAA21FEE61C2C(Var13[3 /*3*/], Var13[0 /*3*/], iParam7, iParam8, iParam9, iParam10);
	iVar38 = 0;
	while (iVar38 <= 3)
	{
		Var13[(4 + iVar38) /*3*/] = { Var13[iVar38 /*3*/] };
		Var13[(4 + iVar38) /*3*/].f_2 = Param3.f_2;
		iVar38++;
	}
	unk_0x116FAA21FEE61C2C(Var13[4 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x116FAA21FEE61C2C(Var13[5 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x116FAA21FEE61C2C(Var13[6 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x116FAA21FEE61C2C(Var13[7 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x116FAA21FEE61C2C(Var13[0 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x116FAA21FEE61C2C(Var13[1 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x116FAA21FEE61C2C(Var13[2 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x116FAA21FEE61C2C(Var13[3 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
}

Vector3 func_56(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_57(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar5;
	int iVar8;
	
	if (!func_42(&(Local_40[iParam0 /*24*/])))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_117[iParam0] = 0;
		return;
	}
	if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_117[iParam0] = 0;
		return;
	}
	if (iLocal_117[iParam0] == 0)
	{
		if (unk_0x320D1840B6DAA1CC() > uLocal_114[iParam0])
		{
			iLocal_117[iParam0] = unk_0x418F12B9602CB2C7(Local_107[iParam0 /*3*/], Local_107[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2, unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 4);
		}
	}
	else
	{
		iVar0 = unk_0xB2D581BD7446BBE9(iLocal_117[iParam0], &iVar8, &uVar2, &uVar5, &uVar1);
		if (iVar0 == 2)
		{
			Local_40[iParam0 /*24*/].f_8 = 0;
			if (iVar8 > 0)
			{
				if (unk_0xE5965CDF24F93A9F(uVar1))
				{
					if (unk_0x04D9F44466CBF3CA(iVar1))
					{
						Local_40[iParam0 /*24*/].f_8 = 1;
					}
				}
			}
			iLocal_117[iParam0] = 0;
		}
		if (iVar0 == 0)
		{
			iLocal_117[iParam0] = 0;
		}
		uLocal_114[iParam0] = unk_0x320D1840B6DAA1CC() + 250;
	}
}

void func_58(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_59(int iParam0)
{
	if (!unk_0xCB09A834F0C86FBB(unk_0x15CAA6D7B11F1A7C(uParam0)))
	{
		return 1;
	}
	if (unk_0x2ABE742A1B0BF1A6(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x2ABE742A1B0BF1A6(iParam0, 1))
	{
		return 1;
	}
	if (unk_0x2ABE742A1B0BF1A6(iParam0, 2))
	{
		return 1;
	}
	if (unk_0x2ABE742A1B0BF1A6(iParam0, 3))
	{
		return 1;
	}
	if (unk_0x351E83123EFC0A15(iParam0, 1))
	{
		if (unk_0x0C2181485E5FB7C2(iParam0) == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_28(uParam0))
	{
		return 0;
	}
	if (!unk_0xBCF71E2C4B3DF832(uParam0))
	{
		return 1;
	}
	if (unk_0x817B926B53C0589A(uParam0))
	{
		return 1;
	}
	if (!unk_0xCB09A834F0C86FBB(unk_0x15CAA6D7B11F1A7C(uParam0)))
	{
		return 1;
	}
	if (unk_0xEF9410C312F2B117(iParam0))
	{
		return 1;
	}
	if (func_63(iParam0, 1))
	{
		return 1;
	}
	if (func_61(iParam0))
	{
		return 1;
	}
	unk_0xB38EF75835FAF667(unk_0x15CAA6D7B11F1A7C(iParam0), &Var0, &Var3);
	if (unk_0x15CAA6D7B11F1A7C(iParam0) != joaat("zeno"))
	{
		if (unk_0x48053974ED6F63CE((Var3.f_0 - Var0.f_0)) > 3.4f)
		{
			return 1;
		}
	}
	if (unk_0x48053974ED6F63CE((Var3.f_2 - Var0.f_2)) > 2.9f)
	{
		return 1;
	}
	if (Global_78319)
	{
		if (!unk_0x3A8B0F5B0E3DE13A(iParam0))
		{
			return 0;
		}
	}
	if (unk_0x351E83123EFC0A15(iParam0, 1) && !unk_0xBCF71E2C4B3DF832(iParam0))
	{
		return 1;
	}
	if (!unk_0x351E83123EFC0A15(iParam0, 1) && !unk_0xBCF71E2C4B3DF832(iParam0))
	{
		return 1;
	}
	if (unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("btype") || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("btype3"))
	{
		if (((((func_28(unk_0xAB793EA186AB8DAA(iParam0, 3, 0)) || func_28(unk_0xAB793EA186AB8DAA(iParam0, 4, 0))) || func_28(unk_0xAB793EA186AB8DAA(iParam0, 5, 0))) || func_28(unk_0xAB793EA186AB8DAA(iParam0, 6, 0))) || func_28(unk_0xAB793EA186AB8DAA(iParam0, 7, 0))) || func_28(unk_0xAB793EA186AB8DAA(iParam0, 8, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x15CAA6D7B11F1A7C(uParam0);
	if (func_62(iVar0))
	{
		return 1;
	}
	if (iVar0 == joaat("regina"))
	{
		if (unk_0xC49329A4E58D025B(iParam0, 2))
		{
			return 1;
		}
		if (unk_0xC49329A4E58D025B(iParam0, 3) && unk_0xC49329A4E58D025B(iParam0, 4))
		{
			return 1;
		}
	}
	if (iVar0 == joaat("banshee") && unk_0xC49329A4E58D025B(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("peyote") && unk_0xC49329A4E58D025B(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("coquette") && !unk_0xBCF71E2C4B3DF832(iParam0))
	{
		return 1;
	}
	if (iVar0 == joaat("manana") && unk_0xC49329A4E58D025B(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("mesa") && !unk_0xC49329A4E58D025B(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("voltic") && unk_0xC49329A4E58D025B(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("bobcatxl") && !unk_0xC49329A4E58D025B(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("ruiner"))
	{
		if (unk_0xC49329A4E58D025B(iParam0, 3) && !unk_0xC49329A4E58D025B(iParam0, 7))
		{
			return 0;
		}
		return 1;
	}
	if (iVar0 == joaat("yosemite3"))
	{
		if (unk_0x0DD0BC46C4CFD6AD(iParam0, 5) == 4)
		{
			return 1;
		}
	}
	if (iVar0 == joaat("rt3000") && unk_0x0DD0BC46C4CFD6AD(iParam0, 10) == 3)
	{
		return 1;
	}
	if (iVar0 == joaat("brioso3"))
	{
		switch (unk_0x0DD0BC46C4CFD6AD(iParam0, 10))
		{
			case 1:
			case 4:
			case 7:
			case 10:
				return 1;
			}
		
		default:
	}
	if (iVar0 == joaat("zr350") && unk_0x0DD0BC46C4CFD6AD(iParam0, 0) > 11)
	{
		return 1;
	}
	return 0;
}

int func_62(int iParam0)
{
	if (!unk_0xCB09A834F0C86FBB(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("ambulance"):
		case joaat("armytrailer"):
		case joaat("airtug"):
		case joaat("bifta"):
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("bodhi2"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("bulldozer"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("caddy3"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dubsta3"):
		case joaat("dump"):
		case joaat("dune"):
		case joaat("dloader"):
		case joaat("forklift"):
		case joaat("guardian"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kalahari"):
		case joaat("mesa3"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("ratloader"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("ripley"):
		case joaat("riot"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("scrap"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("technical"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tornado4"):
		case joaat("tourbus"):
		case joaat("limo2"):
		case joaat("raptor"):
		case joaat("ratloader2"):
		case joaat("dune3"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("vigilante"):
		case joaat("deluxo"):
		case joaat("caracara"):
		case joaat("scramjet"):
		case joaat("menacer"):
		case joaat("caracara2"):
		case joaat("locust"):
		case joaat("jugular"):
		case joaat("zorrusso"):
		case joaat("formula"):
		case joaat("everon"):
		case joaat("zhaba"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("peyote3"):
		case joaat("youga3"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("winky"):
		case joaat("slamtruck"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("squaddie"):
		case joaat("comet7"):
		case joaat("sm722"):
		case joaat("draugur"):
			return 1;
			break;
	}
	return 0;
}

int func_63(int iParam0, bool bParam1)
{
	if (Global_78319)
	{
		if (unk_0xE5965CDF24F93A9F(uParam0) && (!bParam1 || unk_0x55A0C756C4A8220C(iParam0, 0)))
		{
			if (unk_0x6BD06F4780EAC5DD("TestDrive", 2))
			{
				if (unk_0xF2549FF74D64B720(iParam0, "TestDrive"))
				{
					return unk_0x9A1E55620A6C250D(iParam0, "TestDrive");
				}
			}
		}
	}
	return 0;
}

float func_64(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x55B23FE400FCEA6B(uParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Param1, iParam4);
}

void func_65()
{
	func_71(&(Local_40[0 /*24*/]), 1, "Carwash1", func_72(156), 15, "", 0, 4f);
	func_71(&(Local_40[1 /*24*/]), 1, "Carwash2", func_72(157), 15, "", 0, 4f);
	func_69(&(Local_40[0 /*24*/]), -1f, 0f, 0f, 360f);
	func_69(&(Local_40[1 /*24*/]), 0f, -1f, 0f, 360f);
	func_66(&uLocal_89, 0);
	Local_107[0 /*3*/] = { 47.6f, -1392f, 29.4f };
	Local_107[1 /*3*/] = { -700f, -925.3f, 19f };
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = "CWASH_RIDEHLP";
	uParam0->f_1 = "";
	uParam0->f_3 = "CWASH_NOWAY";
	uParam0->f_4 = "CWASH_WANTED";
	uParam0->f_5 = "CWASH_CARBROKE";
	uParam0->f_6 = "CWASH_BLOCKED";
	uParam0->f_7 = "CWASH_WRONGWAY";
	uParam0->f_8 = "CWASH_UPSIDEDO";
	uParam0->f_16 = iParam1;
	if (!Global_78319)
	{
		uParam0->f_2 = "CWASH_NOMONEY";
		return;
	}
	if (unk_0x527312C0DF85960A() || func_68())
	{
		uParam0->f_2 = "CWASH_POOR_PSN";
	}
	else if (unk_0xDFC67688F9088B45() || func_67())
	{
		uParam0->f_2 = "CWASH_POOR_XBX";
	}
	else
	{
		uParam0->f_2 = "CWASH_POOR_STD";
	}
}

bool func_67()
{
	return (unk_0x3EBD3AF4E5D7A08C() || unk_0xC545AB1CF97ABB34());
}

bool func_68()
{
	return (unk_0xA7384DAD7CF469DA() || unk_0x807ABE1AB65C24D2());
}

void func_69(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_12 = { func_20(Param1 * Vector(5f, 5f, 5f)) };
	uParam0->f_15 = func_70(fParam4, 0f, 360f);
}

float func_70(float fParam0, float fParam1, float fParam2)
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

void func_71(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam6, char* sParam7, int iParam8, float fParam9)
{
	uParam0->f_5 = sParam2;
	uParam0->f_1 = { Param3 };
	uParam0->f_4 = sParam7;
	uParam0->f_9 = iParam6;
	uParam0->f_7 = iParam8;
	uParam0->f_6 = iParam1;
	uParam0->f_11 = 0;
	*uParam0 = 1;
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 360f;
	if (iParam1 == 0)
	{
		uParam0->f_10 = 2.75f;
	}
	else
	{
		uParam0->f_10 = (2.75f * 2f);
	}
	if (fParam9 > 0f)
	{
		uParam0->f_10 = fParam9;
	}
}

Vector3 func_72(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_32338[iVar0 /*23*/][0 /*3*/];
}

bool func_73(int iParam0)
{
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	return !unk_0x55B23FE400FCEA6B(iParam0, 0);
}

void func_74()
{
	func_75(&Local_40);
	func_24(&uLocal_89);
	unk_0xAFBDF6A5E54114C1();
}

void func_75(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_76(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
}

void func_76(var uParam0)
{
	*uParam0 = 0;
}

