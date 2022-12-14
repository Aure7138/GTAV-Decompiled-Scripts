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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	struct<91> Local_36 = { 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_127 = 0;
	var uLocal_128 = 3;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 3;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	int iLocal_142 = 0;
	struct<122> Local_143[5];
	var uLocal_754 = 3;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	unk_0xB65977CD1EC089B5(1);
	if (unk_0x55EEDBBFDC6E810F(3))
	{
		if (!unk_0x2AC37494BBF1DB16(Local_36.f_88))
		{
			unk_0x5C37F509B0398DFA(Local_36.f_88);
		}
		func_41(2);
		func_37(&Local_36);
	}
	while (true)
	{
		if (iLocal_142 > unk_0xA5E11AF0A2B928C1())
		{
			unk_0xEE3623A329794810();
		}
		switch (Local_36.f_0)
		{
			case 0:
				func_27();
				break;
			
			case 1:
				func_4();
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
	switch (Local_36.f_1)
	{
		case 1:
			func_3();
			break;
		
		case 2:
			func_2();
			break;
	}
}

void func_2()
{
	if (!unk_0x2AC37494BBF1DB16(Local_36.f_88))
	{
		unk_0x5C37F509B0398DFA(Local_36.f_88);
	}
	func_41(2);
	func_37(&Local_36);
}

void func_3()
{
	if (!unk_0x2AC37494BBF1DB16(Local_36.f_87))
	{
		unk_0x5C37F509B0398DFA(Local_36.f_87);
	}
	func_41(1);
	func_37(&Local_36);
}

void func_4()
{
	switch (Local_36.f_3)
	{
		case 9:
			unk_0x350F65B0612C7A16(1435f, -2385f, 1690f, -1885f);
			break;
	}
	switch (Local_36.f_83)
	{
		case 0:
			if (func_26(&Local_36))
			{
				Local_36.f_68 = 0;
				Local_36.f_83++;
			}
			break;
		
		case 1:
			if (func_25(&Local_36))
			{
				Local_36.f_68 = 0;
				Local_36.f_83++;
			}
			break;
		
		case 2:
			func_23();
			func_22();
			func_21(&Local_143);
			func_6(&Local_143);
			break;
	}
	if (Local_36.f_70 >= Local_36.f_69)
	{
		Local_36.f_0 = 2;
		Local_36.f_1 = 1;
	}
	if (unk_0x2E496FE654DA4166(func_5(Local_36.f_3), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 1) > 300f)
	{
		Local_36.f_0 = 2;
		Local_36.f_1 = 2;
	}
}

Vector3 func_5(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2147.317f, 4795.208f, 40.08961f;
			break;
		
		case 9:
			return 1524.329f, -2108.269f, 75.7248f;
			break;
		
		case 10:
			return -1172.195f, -1577.427f, 3.38152f;
			break;
		
		case 1:
			return 898.3718f, -177.0764f, 72.68348f;
			break;
		
		case 4:
			return 1191.302f, 2672.064f, 36.73154f;
			break;
		
		case 3:
			return -1584.333f, 5193.487f, 2.95912f;
			break;
		
		case 0:
			return 408.3429f, -1623.836f, 28.29278f;
			break;
		
		case 8:
			return -1339.489f, -21.19435f, 50.34566f;
			break;
		
		case 5:
			return 336.207f, 172.4251f, 102.2055f;
			break;
		
		case 6:
			return 394.5495f, -703.3795f, 28.27281f;
			break;
		
		case 7:
			return -1413.184f, -206.0555f, 46.29474f;
			break;
		
		case 11:
			return -560.3809f, 274.5476f, 82.02014f;
			break;
		
		case 12:
			return 221.0845f, 340.7849f, 104.5883f;
			break;
		
		case 13:
			return -296.7154f, 6259.732f, 30.49339f;
			break;
		
		case 14:
			return -2201.402f, 4291f, 47.32429f;
			break;
	}
	return 10f, 10f, 10f;
}

void func_6(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		switch ((*iParam0)[iVar1 /*122*/])
		{
			case 1:
				switch ((iParam0[iVar1 /*122*/])->f_1)
				{
					case 0:
						if (Local_36.f_70 >= (iParam0[iVar1 /*122*/])->f_116)
						{
							(iParam0[iVar1 /*122*/])->f_1 = 1;
						}
						break;
					
					case 1:
						if (func_18(&Var2, &uVar5))
						{
							(iParam0[iVar1 /*122*/])->f_1 = 2;
							(iParam0[iVar1 /*122*/])->f_118 = { Var2 };
							(iParam0[iVar1 /*122*/])->f_121 = uVar5;
						}
						break;
					
					case 2:
						if (func_16(iParam0, iVar1))
						{
							if (func_13(iParam0, iVar1))
							{
								func_12(iParam0, iVar1);
								(iParam0[iVar1 /*122*/])->f_1 = 3;
							}
						}
						break;
					
					case 3:
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (unk_0x7DE17ACDD8BA2642((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/]))
							{
								if (!unk_0x055111B11E6624FD((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0))
								{
									switch ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_9)
									{
										case 1:
											if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 == 0)
											{
												unk_0x857E9EFB607AD64E((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0);
												unk_0x8F758E95FCF28E36((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 2);
												unk_0x7FE5E05BE63F6CB8((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 1, unk_0x3C3D6D026CF7F51B((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0));
												unk_0x7FE5E05BE63F6CB8((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 3, !unk_0x3C3D6D026CF7F51B((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0));
												if ((iParam0[iVar1 /*122*/])->f_117 == iVar0)
												{
													unk_0x1D8693087A51EF87((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 13, 10f);
													unk_0x7FE5E05BE63F6CB8((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 31, true);
												}
												if ((iParam0[iVar1 /*122*/])->f_117 != iVar0)
												{
													unk_0xD5380AAD96AC7874((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], (iParam0[iVar1 /*122*/])->f_2[(iParam0[iVar1 /*122*/])->f_117 /*20*/], 0f, 0f, 0f, 5f, 0);
												}
												unk_0xB7EB8CCA28444BAB((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 300f, 0);
												unk_0xC5B2830898581862((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0);
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17 = unk_0xA5E11AF0A2B928C1();
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 = 1;
											}
											if ((iParam0[iVar1 /*122*/])->f_117 != iVar0)
											{
												if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17 != 0)
												{
													if ((unk_0xA5E11AF0A2B928C1() - (iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17) > 10000)
													{
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 = 0;
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_9 = 3;
													}
												}
											}
											if ((iParam0[iVar1 /*122*/])->f_117 == iVar0)
											{
												if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17 != 0)
												{
													if ((unk_0xA5E11AF0A2B928C1() - (iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17) > 25000 || unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 1), 1) < 25f)
													{
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 = 0;
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_9 = 3;
													}
												}
											}
											break;
										
										case 3:
											if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 == 0)
											{
												unk_0xF8333B40A1B84297((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0);
												unk_0x8F758E95FCF28E36((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 2);
												unk_0x7FE5E05BE63F6CB8((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 1, false);
												unk_0x7FE5E05BE63F6CB8((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 3, true);
												unk_0xB7EB8CCA28444BAB((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 300f, 0);
												unk_0xC5B2830898581862((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0);
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 = 1;
											}
											break;
									}
									func_10(iParam0, iVar1, iVar0, Local_36.f_84);
								}
								else
								{
									func_8(iParam0, iVar1, iVar0);
									func_7(&Local_36);
								}
							}
							iVar0++;
						}
						break;
				}
				break;
		}
		iVar1++;
	}
}

void func_7(var uParam0)
{
	uParam0->f_70++;
}

void func_8(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x7DE17ACDD8BA2642((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/]))
	{
		if (!unk_0x055111B11E6624FD((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/], 0))
		{
			unk_0x71A535529C1CA5DF((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/], 1);
		}
		unk_0x1EEF71E3CDD868D3(&((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/]));
		func_9(&((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_1));
	}
}

void func_9(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xCE4AAA035282336C(*uParam0))
	{
		unk_0x45533C09A6C9B409(uParam0);
		bVar0 = true;
	}
	if (unk_0xCE4AAA035282336C(uParam0->f_1))
	{
		unk_0x45533C09A6C9B409(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x7DE17ACDD8BA2642(uParam0->f_7))
	{
		if (!unk_0x055111B11E6624FD(uParam0->f_7, 0))
		{
			if (unk_0x265510B0E403B5F6(uParam0->f_7))
			{
				unk_0xDEA765F8C239CEE0(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_10(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	func_11((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/], &((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_1), -1, 0, !bParam3, 0, 300f, 0, -1, -1, 1, 0, 0);
}

int func_11(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12)
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = unk_0x5DC3DCA82C806319();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x66599E73DBA5A850(uParam0))
	{
		if (!unk_0x265510B0E403B5F6(uParam0))
		{
			bVar0 = true;
			if (unk_0xA87ECD5E2653C4A9(uParam0) && iParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					unk_0xDEA765F8C239CEE0(uParam0, 1);
				}
				else
				{
					unk_0x2B1A31992FF9D398(uParam0, 1, iParam8);
				}
				uParam1->f_7 = uParam0;
				unk_0x607EC4A77B2772C7(uParam0, iParam2);
				unk_0x046DEADDB786F985(uParam0, fParam6);
				if (unk_0xCE4AAA035282336C(*uParam1))
				{
					unk_0xC2E0B90856D55E49(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xAA33D108CCE097CF(uParam0, iParam9);
		}
		unk_0xA54CF4556CF17D54(uParam0, bParam4);
		unk_0x77C855860D7E0A7F(uParam0, iParam5);
		*uParam1 = unk_0xD9443754E53A6C0D(uParam0);
		if (!iParam9 == -1 || iParam12)
		{
			if (unk_0xCE4AAA035282336C(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x1886753DA39F38F8(*uParam1, iParam8);
				}
				if (!unk_0x2AC37494BBF1DB16(iParam7))
				{
					unk_0x8A2CDF8102455854("STRING");
					if (bParam10)
					{
						unk_0x76B34CBB6F5FA1BB(iParam7);
					}
					else
					{
						unk_0x48849374B34BB7B9(iParam7);
					}
					unk_0x7FA11514CEBC71C3(*uParam1);
				}
				unk_0xC2E0B90856D55E49(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (unk_0xCE4AAA035282336C(*uParam1))
			{
				unk_0xECDAB41968FF21A8(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x3C3D6D026CF7F51B(uParam0, 0))
		{
			uParam1->f_1 = unk_0x339057845A51EA50(uParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (unk_0xCE4AAA035282336C(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x1886753DA39F38F8(uParam1->f_1, iParam8);
					}
					if (!unk_0x2AC37494BBF1DB16(iParam7))
					{
						unk_0x8A2CDF8102455854("STRING");
						if (bParam10)
						{
							unk_0x76B34CBB6F5FA1BB(iParam7);
						}
						else
						{
							unk_0x48849374B34BB7B9(iParam7);
						}
						unk_0x7FA11514CEBC71C3(uParam1->f_1);
					}
					unk_0xC2E0B90856D55E49(uParam1->f_1, 7);
					unk_0xECDAB41968FF21A8(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xCE4AAA035282336C(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x061B1200C95204CB(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xCE4AAA035282336C(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x061B1200C95204CB(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_12(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (iParam0[iParam1 /*122*/])->f_111)
	{
		(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_9 = 1;
		iVar0++;
	}
}

int func_13(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0[iParam1 /*122*/])->f_113 == (iParam0[iParam1 /*122*/])->f_111)
	{
		return 1;
	}
	else
	{
		iVar0 = (iParam0[iParam1 /*122*/])->f_113;
		if (!unk_0x7DE17ACDD8BA2642((iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/]))
		{
			(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_10 = { (iParam0[iParam1 /*122*/])->f_118 };
			(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_13 = (iParam0[iParam1 /*122*/])->f_121;
			(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/] = func_15(iParam0, iParam1, iVar0);
			func_14((iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/], Local_36, (iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_15);
			(iParam0[iParam1 /*122*/])->f_113++;
		}
	}
	return 0;
}

void func_14(var uParam0, struct<61> Param1, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, int iParam92)
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		if (!unk_0x055111B11E6624FD(uParam0, 0))
		{
			iVar0 = Param1.f_60[unk_0x15A88CFAAFFC6C4B(0, 3)];
			if (iParam92 != 0)
			{
				iVar0 = iParam92;
			}
			unk_0xCBDC2B59922F92C3(uParam0, iVar0, -1, 1, 1);
			unk_0x8CC688927B10006C(uParam0, iVar0, 1);
			unk_0x49ED56E425110B21(uParam0, 1, iVar0);
		}
	}
}

var func_15(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x69FDD9508259E5B5(26, Local_36.f_53[0], (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_10, (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_13, 1, 1);
	unk_0xB7561E3CA1BE2262(uVar0, 1);
	unk_0xBDB9814951DD4D75(uVar0, 1);
	unk_0x8386356641D0DED1(uVar0, Local_36.f_52);
	unk_0xB0F23B683F51C9F0(uVar0, 1, 0);
	unk_0x7FE5E05BE63F6CB8(uVar0, 5, true);
	unk_0xCBFBAAA14CB00CB2(uVar0, 1);
	unk_0x598D91BBD045C1F3(uVar0, 42, 1);
	unk_0x598D91BBD045C1F3(uVar0, 132, 1);
	unk_0x1D8693087A51EF87(uVar0, 12, 30f);
	unk_0x55B25C3B4CEEEF4B(uVar0, 5);
	if ((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_18 != -1 && (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_19 != -2)
	{
		iVar1 = (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_18;
		if (unk_0x7DE17ACDD8BA2642((iParam0[iParam1 /*122*/])->f_83[iVar1 /*9*/]))
		{
			if (!unk_0x055111B11E6624FD((iParam0[iParam1 /*122*/])->f_83[iVar1 /*9*/], 0))
			{
				unk_0x4C18E9202CF6CACA(uVar0, (iParam0[iParam1 /*122*/])->f_83[iVar1 /*9*/], (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_19);
			}
		}
	}
	iLocal_142 = unk_0xA5E11AF0A2B928C1() + 1000;
	return uVar0;
}

int func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0[iParam1 /*122*/])->f_114 == (iParam0[iParam1 /*122*/])->f_112)
	{
		return 1;
	}
	else
	{
		iVar0 = (iParam0[iParam1 /*122*/])->f_114;
		if (!unk_0x7DE17ACDD8BA2642((iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/]))
		{
			(iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/].f_1 = { (iParam0[iParam1 /*122*/])->f_118 };
			(iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/].f_7 = (iParam0[iParam1 /*122*/])->f_121;
			(iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/] = func_17(iParam0, iParam1, iVar0);
			(iParam0[iParam1 /*122*/])->f_114++;
		}
	}
	return 0;
}

var func_17(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = unk_0xABEEDBEF2BBDF5B3((iParam0[iParam1 /*122*/])->f_83[iParam2 /*9*/].f_8, (iParam0[iParam1 /*122*/])->f_83[iParam2 /*9*/].f_1, (iParam0[iParam1 /*122*/])->f_83[iParam2 /*9*/].f_7, 1, 1, 0);
	unk_0xF21DDB900A31AF6D(uVar0, 0);
	return uVar0;
}

int func_18(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = unk_0x15A88CFAAFFC6C4B(0, 10);
	Var1 = { Local_36.f_8[iVar0 /*3*/] };
	if (func_19(Var1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1123024896, 1, 1103626240))
	{
		*uParam0 = { Var1 };
		*uParam1 = Local_36.f_39[iVar0];
		return 1;
	}
	return 0;
}

int func_19(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, float fParam8, int iParam9, float fParam10)
{
	if (func_20(Param0))
	{
		return 0;
	}
	if (fParam3 > 0f)
	{
		if (unk_0x0B5B560B8AF5E5BF(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x5829BBF74D541BA8(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x5829BBF74D541BA8(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xA6FBF829D141DA09(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	if (iParam9 == 1)
	{
		if (unk_0xE2D062C14C126762(Param0, 1.5f) > 0)
		{
			return 0;
		}
	}
	if (iParam7 == 1)
	{
		if (fParam6 > 0f)
		{
			if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Param0, 1) <= (fParam8 + fParam6))
			{
				if (unk_0x67670574D396B9A8(Param0, fParam6))
				{
					return 0;
				}
			}
		}
	}
	if (fParam10 > 0f)
	{
		if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Param0, 1) < fParam10)
		{
			return 0;
		}
	}
	return 1;
}

int func_20(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch ((*iParam0)[iVar0 /*122*/])
		{
			case 0:
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0x7DE17ACDD8BA2642((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/]))
					{
						if (!unk_0x055111B11E6624FD((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/], 0))
						{
							switch ((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_9)
							{
								case 2:
									if (unk_0xB8C39D031C377E33((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/], 0) || Local_36.f_84 == 1)
									{
										Local_36.f_84 = 1;
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_16 = 0;
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_9 = 3;
									}
									break;
								
								case 3:
									if ((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_16 == 0)
									{
										unk_0xB7EB8CCA28444BAB((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/], 150f, 0);
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_16 = 1;
									}
									break;
							}
							func_10(iParam0, iVar0, iVar1, Local_36.f_84);
						}
						else
						{
							func_8(iParam0, iVar0, iVar1);
							func_7(&Local_36);
						}
					}
					iVar1++;
				}
				break;
		}
		iVar0++;
	}
}

void func_22()
{
	if (Local_36.f_89 == 0)
	{
		if (Local_36.f_71 == 1)
		{
			if (!unk_0x2AC37494BBF1DB16(Local_36.f_85))
			{
				if (unk_0x5C37F509B0398DFA(Local_36.f_85))
				{
					Local_36.f_89 = 1;
				}
			}
		}
	}
	if (Local_36.f_90 == 0)
	{
		if (Local_36.f_84 == 1)
		{
			if (!unk_0x2AC37494BBF1DB16(Local_36.f_86))
			{
				if (unk_0x5C37F509B0398DFA(Local_36.f_86))
				{
					Local_36.f_90 = 1;
				}
			}
		}
	}
}

void func_23()
{
	int iVar0;
	int iVar1;
	
	if (Local_36.f_71 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar1 == 0)
			{
				if (unk_0xCE4AAA035282336C(Local_143[0 /*122*/].f_2[iVar0 /*20*/].f_1))
				{
					func_24("PMD_OBJ", 7500, 1);
					iVar1 = 1;
					Local_36.f_71 = 1;
				}
			}
			iVar0++;
		}
	}
}

void func_24(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x7FC9F66A5DE18E09(sParam0);
	unk_0xAC8CD22C06543F95(iParam1, 0);
}

int func_25(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_66 == uParam0->f_64)
	{
		return 1;
	}
	else if (Local_143[uParam0->f_68 /*122*/] == 0)
	{
		if (Local_143[uParam0->f_68 /*122*/].f_113 == Local_143[uParam0->f_68 /*122*/].f_111)
		{
			uParam0->f_68++;
		}
		else
		{
			iVar0 = Local_143[uParam0->f_68 /*122*/].f_113;
			if (!unk_0x7DE17ACDD8BA2642(Local_143[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/]))
			{
				Local_143[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/] = func_15(&Local_143, uParam0->f_68, iVar0);
				func_14(Local_143[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/], Local_36, Local_143[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/].f_15);
				Local_143[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/].f_9 = 2;
				Local_143[uParam0->f_68 /*122*/].f_113++;
				uParam0->f_66++;
			}
		}
	}
	else
	{
		uParam0->f_68++;
	}
	return 0;
}

int func_26(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_67 == uParam0->f_65)
	{
		return 1;
	}
	else if (Local_143[uParam0->f_68 /*122*/] == 0)
	{
		if (Local_143[uParam0->f_68 /*122*/].f_114 == Local_143[uParam0->f_68 /*122*/].f_112)
		{
			uParam0->f_68++;
		}
		else
		{
			iVar0 = Local_143[uParam0->f_68 /*122*/].f_114;
			if (!unk_0x7DE17ACDD8BA2642(Local_143[uParam0->f_68 /*122*/].f_83[iVar0 /*9*/]))
			{
				Local_143[uParam0->f_68 /*122*/].f_83[iVar0 /*9*/] = func_17(&Local_143, uParam0->f_68, iVar0);
				Local_143[uParam0->f_68 /*122*/].f_114++;
				uParam0->f_67++;
			}
		}
	}
	else
	{
		uParam0->f_68++;
	}
	return 0;
}

void func_27()
{
	switch (Local_36.f_51)
	{
		case 0:
			func_31(&Local_36, func_36());
			func_30(&Local_36);
			Local_36.f_51++;
			break;
		
		case 1:
			func_29(Local_36);
			Local_36.f_51++;
			break;
		
		case 2:
			if (func_28(Local_36))
			{
				Local_36.f_51++;
			}
			break;
		
		case 3:
			if (unk_0xDA95D0C19E737224("PMD_ENEMIES", &(Local_36.f_52)))
			{
				unk_0x0133FF6E23A1DCA4(5, joaat("player"), Local_36.f_52);
				unk_0x0133FF6E23A1DCA4(5, Local_36.f_52, joaat("COP"));
				unk_0x0133FF6E23A1DCA4(5, Local_36.f_52, joaat("player"));
				unk_0x0133FF6E23A1DCA4(1, Local_36.f_52, Local_36.f_52);
			}
			Local_36.f_0 = 1;
			break;
	}
}

int func_28(struct<61> Param0, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90)
{
	if (((((((((((Param0.f_53[0] == 0 || unk_0x0CBB7C273DED26E7(Param0.f_53[0])) && (Param0.f_53[1] == 0 || unk_0x0CBB7C273DED26E7(Param0.f_53[1]))) && (Param0.f_53[2] == 0 || unk_0x0CBB7C273DED26E7(Param0.f_53[2]))) && (Param0.f_57[0] == 0 || unk_0x0CBB7C273DED26E7(Param0.f_57[0]))) && (Param0.f_57[1] == 0 || unk_0x0CBB7C273DED26E7(Param0.f_57[1]))) && (Param0.f_57[0] == 0 || unk_0xCF74D35FEBDBE99F(Param0.f_57[0]))) && (Param0.f_57[1] == 0 || unk_0xCF74D35FEBDBE99F(Param0.f_57[1]))) && (Param0.f_60[0] == 0 || unk_0x4ACA2D82C1D0DB4F(Param0.f_60[0]))) && (Param0.f_60[1] == 0 || unk_0x4ACA2D82C1D0DB4F(Param0.f_60[1]))) && (Param0.f_60[2] == 0 || unk_0x4ACA2D82C1D0DB4F(Param0.f_60[2]))) && unk_0x578F9DB3098790E9(0))
	{
		return 1;
	}
	return 0;
}

void func_29(struct<61> Param0, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_53[iVar0] != 0)
		{
			unk_0x852EC2A7DE66202D(Param0.f_53[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Param0.f_57[iVar0] != 0)
		{
			unk_0x852EC2A7DE66202D(Param0.f_57[iVar0]);
			unk_0x93FFD6B088A8E34D(Param0.f_57[iVar0], 3);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_60[iVar0] != 0)
		{
			unk_0xEF8BC9C45E60F0D1(Param0.f_60[iVar0], 31, 0);
		}
		iVar0++;
	}
	unk_0xA3C681843B51A4CC("PMD", 0);
}

void func_30(var uParam0)
{
	if (!func_20(uParam0->f_76) && !func_20(uParam0->f_79))
	{
		uParam0->f_82 = unk_0x54ECDA2DAB9CFB10((uParam0->f_76 - uParam0->f_79), (uParam0->f_76.f_1 - uParam0->f_79.f_1), (uParam0->f_76.f_2 - uParam0->f_79.f_2), (uParam0->f_76 + uParam0->f_79), (uParam0->f_76.f_1 + uParam0->f_79.f_1), (uParam0->f_76.f_2 + uParam0->f_79.f_2), 0, 1, 1, 1);
	}
	if (!func_20(uParam0->f_72) && !uParam0->f_75 <= 0f)
	{
		unk_0xF82BC5193AF62796(uParam0->f_72, uParam0->f_75, 1, 0, 0, 0);
	}
}

void func_31(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 9:
			uParam0->f_3 = 9;
			uParam0->f_4 = func_34();
			uParam0->f_5 = { 1533.77f, -2135.35f, 82.04f };
			uParam0->f_2 = 4;
			uParam0->f_53[0] = joaat("g_m_y_lost_01");
			uParam0->f_53[1] = 0;
			uParam0->f_53[2] = 0;
			uParam0->f_57[0] = joaat("gburrito");
			uParam0->f_57[1] = joaat("hexer");
			uParam0->f_60[0] = joaat("weapon_pistol");
			uParam0->f_60[1] = joaat("weapon_sawnoffshotgun");
			uParam0->f_60[2] = joaat("weapon_assaultrifle");
			uParam0->f_72 = { 1533.77f, -2135.35f, 82.04f };
			uParam0->f_75 = 90f;
			uParam0->f_76 = { 1533.77f, -2135.35f, 82.04f };
			uParam0->f_79 = { 54f, 72f, 8f };
			uParam0->f_50 = 9;
			uParam0->f_8[0 /*3*/] = { 1578.134f, -2317.858f, 86.636f };
			uParam0->f_39[0] = 36.2503f;
			uParam0->f_8[1 /*3*/] = { 1571.414f, -2314.379f, 86.0904f };
			uParam0->f_39[1] = 37.4325f;
			uParam0->f_8[2 /*3*/] = { 1555.674f, -2321.857f, 85.2531f };
			uParam0->f_39[2] = 2.4637f;
			uParam0->f_8[3 /*3*/] = { 1516.694f, -1980.273f, 70.1538f };
			uParam0->f_39[3] = 203.6018f;
			uParam0->f_8[4 /*3*/] = { 1505.077f, -1978.409f, 69.794f };
			uParam0->f_39[4] = 217.0733f;
			uParam0->f_8[5 /*3*/] = { 1498.166f, -1981.469f, 69.5705f };
			uParam0->f_39[5] = 256.7048f;
			uParam0->f_8[6 /*3*/] = { 1670.858f, -2022.844f, 99.5899f };
			uParam0->f_39[6] = 142.5751f;
			uParam0->f_8[7 /*3*/] = { 1677.085f, -2035.785f, 98.5593f };
			uParam0->f_39[7] = 109.2985f;
			uParam0->f_8[8 /*3*/] = { 1659.187f, -2090.027f, 99.2239f };
			uParam0->f_39[8] = 9.0974f;
			Local_143[0 /*122*/] = 0;
			Local_143[0 /*122*/].f_111 = 4;
			Local_143[0 /*122*/].f_112 = 2;
			Local_143[0 /*122*/].f_83[0 /*9*/].f_1 = { 1533.375f, -2087.209f, 76.0832f };
			Local_143[0 /*122*/].f_83[0 /*9*/].f_7 = 152.9678f;
			Local_143[0 /*122*/].f_83[0 /*9*/].f_8 = joaat("gburrito");
			Local_143[0 /*122*/].f_83[1 /*9*/].f_1 = { 1547.824f, -2091.365f, 76.1018f };
			Local_143[0 /*122*/].f_83[1 /*9*/].f_7 = 55.5566f;
			Local_143[0 /*122*/].f_83[1 /*9*/].f_8 = joaat("gburrito");
			Local_143[0 /*122*/].f_2[0 /*20*/].f_10 = { 1525.76f, -2092.838f, 76.0174f };
			Local_143[0 /*122*/].f_2[0 /*20*/].f_13 = 232.9176f;
			Local_143[0 /*122*/].f_2[1 /*20*/].f_10 = { 1527.138f, -2091.832f, 76.031f };
			Local_143[0 /*122*/].f_2[1 /*20*/].f_13 = 190.6337f;
			Local_143[0 /*122*/].f_2[2 /*20*/].f_10 = { 1523.108f, -2115.134f, 75.6351f };
			Local_143[0 /*122*/].f_2[2 /*20*/].f_13 = 350.4627f;
			Local_143[0 /*122*/].f_2[3 /*20*/].f_10 = { 1522.629f, -2112.768f, 75.6853f };
			Local_143[0 /*122*/].f_2[3 /*20*/].f_13 = 264.9478f;
			Local_143[1 /*122*/] = 1;
			Local_143[1 /*122*/].f_111 = 4;
			Local_143[1 /*122*/].f_112 = 1;
			Local_143[1 /*122*/].f_116 = 2;
			Local_143[1 /*122*/].f_83[0 /*9*/].f_8 = joaat("gburrito");
			Local_143[1 /*122*/].f_2[0 /*20*/].f_18 = 0;
			Local_143[1 /*122*/].f_2[0 /*20*/].f_19 = -1;
			Local_143[1 /*122*/].f_2[0 /*20*/].f_15 = joaat("weapon_pistol");
			Local_143[1 /*122*/].f_2[1 /*20*/].f_18 = 0;
			Local_143[1 /*122*/].f_2[1 /*20*/].f_19 = 0;
			Local_143[1 /*122*/].f_2[1 /*20*/].f_15 = joaat("weapon_pistol");
			Local_143[1 /*122*/].f_2[2 /*20*/].f_18 = 0;
			Local_143[1 /*122*/].f_2[2 /*20*/].f_19 = 1;
			Local_143[1 /*122*/].f_2[2 /*20*/].f_15 = joaat("weapon_assaultrifle");
			Local_143[1 /*122*/].f_2[3 /*20*/].f_18 = 0;
			Local_143[1 /*122*/].f_2[3 /*20*/].f_19 = 2;
			Local_143[1 /*122*/].f_2[3 /*20*/].f_15 = joaat("weapon_assaultrifle");
			Local_143[2 /*122*/] = 1;
			Local_143[2 /*122*/].f_111 = 4;
			Local_143[2 /*122*/].f_112 = 1;
			Local_143[2 /*122*/].f_116 = 3;
			Local_143[2 /*122*/].f_83[0 /*9*/].f_8 = joaat("gburrito");
			Local_143[2 /*122*/].f_2[0 /*20*/].f_18 = 0;
			Local_143[2 /*122*/].f_2[0 /*20*/].f_19 = -1;
			Local_143[2 /*122*/].f_2[0 /*20*/].f_15 = joaat("weapon_pistol");
			Local_143[2 /*122*/].f_2[1 /*20*/].f_18 = 0;
			Local_143[2 /*122*/].f_2[1 /*20*/].f_19 = 0;
			Local_143[2 /*122*/].f_2[1 /*20*/].f_15 = joaat("weapon_pistol");
			Local_143[2 /*122*/].f_2[2 /*20*/].f_18 = 0;
			Local_143[2 /*122*/].f_2[2 /*20*/].f_19 = 1;
			Local_143[2 /*122*/].f_2[2 /*20*/].f_15 = joaat("weapon_assaultrifle");
			Local_143[2 /*122*/].f_2[3 /*20*/].f_18 = 0;
			Local_143[2 /*122*/].f_2[3 /*20*/].f_19 = 2;
			Local_143[2 /*122*/].f_2[3 /*20*/].f_15 = joaat("weapon_assaultrifle");
			break;
		
		default:
			uParam0->f_2 = 6;
			uParam0->f_53[0] = joaat("g_m_y_mexgoon_01");
			uParam0->f_53[1] = joaat("g_m_y_mexgoon_02");
			uParam0->f_53[2] = joaat("g_m_y_mexgoon_03");
			uParam0->f_60[0] = joaat("weapon_pistol");
			uParam0->f_60[1] = joaat("weapon_microsmg");
			uParam0->f_60[2] = joaat("weapon_assaultrifle");
			uParam0->f_69 = 10;
			break;
	}
	func_33(uParam0);
	func_32(uParam0);
}

void func_32(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Local_143[iVar0 /*122*/] == 0)
		{
			uParam0->f_64 = (uParam0->f_64 + Local_143[iVar0 /*122*/].f_111);
			uParam0->f_65 = (uParam0->f_65 + Local_143[iVar0 /*122*/].f_112);
		}
		uParam0->f_69 = (uParam0->f_69 + Local_143[iVar0 /*122*/].f_111);
		iVar0++;
	}
}

void func_33(var uParam0)
{
	switch (uParam0->f_3)
	{
		case 9:
			switch (uParam0->f_4)
			{
				case 0:
					uParam0->f_85 = "PM_CV1_START";
					uParam0->f_86 = "PM_CV1_GF";
					uParam0->f_87 = "PM_CV1_STOP";
					uParam0->f_88 = "PM_CV1_FAIL";
					uParam0->f_89 = 0;
					uParam0->f_90 = 0;
					break;
				
				case 1:
					uParam0->f_85 = "PM_CV2_START";
					uParam0->f_86 = "PM_CV2_GF";
					uParam0->f_87 = "PM_CV2_STOP";
					uParam0->f_88 = "PM_CV2_FAIL";
					uParam0->f_89 = 0;
					uParam0->f_90 = 0;
					break;
			}
			break;
	}
}

int func_34()
{
	return func_35(Global_112358.f_20, Global_112358.f_29);
}

int func_35(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_36()
{
	return Global_112358.f_20;
}

void func_37(var uParam0)
{
	func_40(*uParam0);
	func_39(&Local_143);
	func_38(&Local_143);
	if (uParam0->f_82 != 0)
	{
		unk_0x17D46728E18012D3(uParam0->f_82, 0);
	}
	unk_0x675D9C12C73D3DE7();
}

void func_38(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (unk_0x7DE17ACDD8BA2642((uParam0[iVar0 /*122*/])->f_83[iVar1 /*9*/]))
			{
				unk_0x0E4B6CF706BE8AA4(&((uParam0[iVar0 /*122*/])->f_83[iVar1 /*9*/]));
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_39(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			func_8(uParam0, iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_40(struct<61> Param0, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_53[iVar0] != 0)
		{
			unk_0xE0A291F406691F03(Param0.f_53[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Param0.f_57[iVar0] != 0)
		{
			unk_0xE0A291F406691F03(Param0.f_57[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_60[iVar0] != 0)
		{
			unk_0xA6FF08822617CD06(Param0.f_60[iVar0]);
		}
		iVar0++;
	}
}

void func_41(int iParam0)
{
	Global_112358.f_22 = iParam0;
}

