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
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
	char* sLocal_23 = NULL;
	struct<3> Local_24 = { 0, 0, 0 } ;
	struct<3> Local_27 = { 0, 0, 0 } ;
	int iLocal_30 = 0;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	bool bLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	
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
	sLocal_21 = "CHECKPOINT_NORMAL";
	sLocal_22 = "CHECKPOINT_MISSED";
	sLocal_23 = "CHECKPOINT_PERFECT";
	Local_24 = { 1694.74f, 3276.502f, 41.2796f };
	Local_27 = { 8.79494f, 0.59893f, 154.8464f };
	iLocal_30 = 3;
	fLocal_31 = 0f;
	fLocal_35 = -0.0375f;
	fLocal_36 = 0.17f;
	fLocal_39 = 80f;
	fLocal_40 = 140f;
	fLocal_41 = 180f;
	bLocal_50 = true;
	iLocal_53 = -1;
	if (unk_0x55EEDBBFDC6E810F(2))
	{
		func_52();
	}
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		if (func_51(iVar0))
		{
			iVar1 = func_50(iVar0);
			func_47(iVar1, func_48(iVar0));
		}
		iVar0++;
	}
	func_46(91, 1);
	func_46(92, 1);
	Global_32540 = 1;
	while (Global_32542)
	{
		if ((unk_0xA5E11AF0A2B928C1() % 250) == 0)
		{
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		iLocal_55[iVar2] = -1;
		iVar2++;
	}
	unk_0xECDAB41968FF21A8(&(Global_32543[iVar2 /*23*/].f_11), 18);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 263)
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iVar2 /*23*/].f_11), 18);
		iVar2++;
	}
	iLocal_71 = Global_38594;
	bVar3 = false;
	func_45();
	func_43();
	while (true)
	{
		if (!bVar3)
		{
			func_42();
		}
		bVar3 = func_35();
		if (bVar3)
		{
			Global_32540 = 1;
		}
		iVar4 = 0;
		iVar5 = 0;
		iVar2 = 0;
		if (Global_32540)
		{
			func_45();
			func_43();
			iVar6 = 0;
			iVar2 = 0;
			while (iVar2 < 263)
			{
				bVar7 = BitTest(Global_32543[iVar2 /*23*/].f_11, 18);
				if (!bVar7)
				{
					if (func_34(iVar2))
					{
						iVar5++;
						bVar7 = true;
					}
				}
				iVar4++;
				if (bVar7)
				{
					iVar8 = 0;
					iVar9 = 0;
					if (Global_38594)
					{
						iVar8++;
						iVar9++;
					}
					else
					{
						if (BitTest(Global_32543[iVar2 /*23*/].f_11, 13))
						{
							if (func_33())
							{
								iVar8++;
							}
							iVar9++;
						}
						if (BitTest(Global_32543[iVar2 /*23*/].f_11, 1))
						{
							if (!bLocal_50)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (BitTest(Global_32543[iVar2 /*23*/].f_11, 2))
						{
							if (bLocal_50)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (BitTest(Global_32543[iVar2 /*23*/].f_11, 7))
						{
							if (!func_32(15))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (BitTest(Global_32543[iVar2 /*23*/].f_11, 16))
						{
							if (!func_30(Global_32543[iVar2 /*23*/].f_22))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (BitTest(Global_32543[iVar2 /*23*/].f_11, 14))
						{
							if (func_32(5))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (BitTest(Global_32543[iVar2 /*23*/].f_11, 8))
						{
							if (Global_32543[iVar2 /*23*/].f_16 != 4 && Global_32543[iVar2 /*23*/].f_16 != 8)
							{
								if (!func_29(iVar2))
								{
									iVar8++;
								}
								iVar9++;
							}
						}
						if (BitTest(Global_32543[iVar2 /*23*/].f_11, 19))
						{
							switch (iLocal_64)
							{
								case 1:
								case 0:
								case 2:
									break;
								
								default:
									iVar8++;
									break;
							}
							iVar9++;
						}
						if (BitTest(Global_32543[iVar2 /*23*/].f_11, 27))
						{
							if (bLocal_45)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (Global_32543[iVar2 /*23*/].f_16 == 1)
						{
							func_23();
						}
					}
					if (iVar9 > 0)
					{
						if (iVar8 > 0)
						{
							unk_0x061B1200C95204CB(&(Global_32543[iVar2 /*23*/].f_11), 0);
						}
						else if (BitTest(Global_32543[iVar2 /*23*/].f_11, 15))
						{
							unk_0xECDAB41968FF21A8(&(Global_32543[iVar2 /*23*/].f_11), 0);
						}
					}
					else if (BitTest(Global_32543[iVar2 /*23*/].f_11, 15))
					{
						unk_0xECDAB41968FF21A8(&(Global_32543[iVar2 /*23*/].f_11), 0);
					}
					if (BitTest(Global_32543[iVar2 /*23*/].f_11, 0) && BitTest(Global_32543[iVar2 /*23*/].f_11, 3))
					{
						bVar10 = false;
						if (!unk_0xCE4AAA035282336C(Global_32543[iVar2 /*23*/].f_19))
						{
							while (!unk_0xC290661FB44F56F1() < 150)
							{
								unk_0x4EDE34FBADD967A6(2000);
							}
							if (BitTest(Global_32543[iVar2 /*23*/].f_11, 19))
							{
								switch (iLocal_64)
								{
									case 1:
									case 0:
									case 2:
										if (BitTest(Global_32543[iVar2 /*23*/].f_11, 28))
										{
											Global_32543[iVar2 /*23*/].f_19 = unk_0xF63CADB0077DA829(Global_32543[iVar2 /*23*/][0 /*3*/], Global_32543[iVar2 /*23*/].f_10);
											unk_0x5E3A54CF3E9DF9FC(Global_32543[iVar2 /*23*/].f_19, 128);
											unk_0xA4B6A532E7DDE178(Global_32543[iVar2 /*23*/].f_19, 0);
										}
										else
										{
											Global_32543[iVar2 /*23*/].f_19 = unk_0x7F0C74F83813841D(Global_32543[iVar2 /*23*/][iLocal_64 /*3*/]);
											unk_0xEA4639F4444B7003(Global_32543[iVar2 /*23*/].f_19, Global_32543[iVar2 /*23*/].f_12[iLocal_64]);
										}
										break;
									
									default:
										Global_32543[iVar2 /*23*/].f_19 = unk_0x7F0C74F83813841D(1f, 2f, 3f);
										break;
								}
							}
							else if (BitTest(Global_32543[iVar2 /*23*/].f_11, 28))
							{
								Global_32543[iVar2 /*23*/].f_19 = unk_0xF63CADB0077DA829(Global_32543[iVar2 /*23*/][0 /*3*/], Global_32543[iVar2 /*23*/].f_10);
								unk_0x5E3A54CF3E9DF9FC(Global_32543[iVar2 /*23*/].f_19, 128);
								unk_0xA4B6A532E7DDE178(Global_32543[iVar2 /*23*/].f_19, 0);
							}
							else
							{
								Global_32543[iVar2 /*23*/].f_19 = unk_0x7F0C74F83813841D(Global_32543[iVar2 /*23*/][0 /*3*/]);
								unk_0xEA4639F4444B7003(Global_32543[iVar2 /*23*/].f_19, Global_32543[iVar2 /*23*/].f_12[0]);
							}
							if (Global_32543[iVar2 /*23*/].f_16 == 1)
							{
								bVar10 = true;
							}
						}
						else
						{
							if (BitTest(Global_32543[iVar2 /*23*/].f_11, 19))
							{
								switch (iLocal_64)
								{
									case 1:
									case 0:
									case 2:
										unk_0x385CFFE850A96C08(Global_32543[iVar2 /*23*/].f_19, Global_32543[iVar2 /*23*/][iLocal_64 /*3*/]);
										break;
									
									default:
										break;
								}
							}
							else
							{
								unk_0x385CFFE850A96C08(Global_32543[iVar2 /*23*/].f_19, Global_32543[iVar2 /*23*/][0 /*3*/]);
							}
							if (BitTest(Global_32543[iVar2 /*23*/].f_11, 9))
							{
								if (iLocal_47)
								{
									unk_0x37B37B8045788E6A(Global_32543[iVar2 /*23*/].f_19, 1);
									iLocal_47 = 0;
								}
								else
								{
									unk_0xD953A349527E09EA(Global_32543[iVar2 /*23*/].f_19, 1);
									iLocal_47 = 1;
								}
								unk_0xD48486CAAB189227(Global_32543[iVar2 /*23*/].f_19, 10000);
								unk_0x061B1200C95204CB(&(Global_32543[iVar2 /*23*/].f_11), 9);
							}
							else
							{
								unk_0x37B37B8045788E6A(Global_32543[iVar2 /*23*/].f_19, 0);
							}
						}
						func_20(Global_32543[iVar2 /*23*/].f_19, iVar2);
						if (bVar10)
						{
							func_19(iVar2);
						}
						iVar5++;
					}
					else
					{
						if (unk_0xCE4AAA035282336C(Global_32543[iVar2 /*23*/].f_19))
						{
							unk_0x45533C09A6C9B409(&(Global_32543[iVar2 /*23*/].f_19));
							iVar5++;
							if (Global_32543[iVar2 /*23*/].f_16 == 1)
							{
								func_18(iVar2);
							}
						}
						Global_32543[iVar2 /*23*/].f_19 = 0;
					}
				}
				unk_0x061B1200C95204CB(&(Global_32543[iVar2 /*23*/].f_11), 18);
				iVar11 = 30;
				if (unk_0x72474BA05A104E1E())
				{
					iVar11 = 250;
				}
				if (iVar5 > iVar11)
				{
					unk_0x4EDE34FBADD967A6(0);
					iVar5 = 0;
				}
				if ((iVar4 / 20) > iVar6)
				{
					iVar6 = (iVar4 / 20);
					unk_0x4EDE34FBADD967A6(0);
				}
				iVar2++;
			}
		}
		Global_32540 = Global_32541;
		Global_32541 = 0;
		if (iVar4 == 0)
		{
			func_11();
			func_7();
			unk_0x4EDE34FBADD967A6(500);
			iLocal_64 = func_1();
		}
	}
}

int func_1()
{
	func_2();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_2()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_5(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_4(unk_0xC1A5EC5C986B98AD());
			if (func_3(iVar0) && (!func_32(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_3(Global_113648.f_2365.f_539.f_4321))
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

bool func_3(int iParam0)
{
	return iParam0 < 3;
}

int func_4(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_5(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_5(int iParam0)
{
	if (func_3(iParam0))
	{
		return func_6(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_6(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_7()
{
	if (func_1() == 1)
	{
		if (func_10(63))
		{
			if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
			{
				if (func_10(126))
				{
					if (func_9(138))
					{
						func_8(138, 0, 0);
					}
					if (!func_9(139))
					{
						if (unk_0x24B651D85CCE5EB4(joaat("chop")) == 0)
						{
							if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 19.3f, 528.24f, 169.63f, 1) > 50f)
							{
								func_8(139, 1, 0);
							}
						}
					}
				}
				else
				{
					if (func_9(139))
					{
						func_8(139, 0, 0);
					}
					if (!func_9(138))
					{
						if (unk_0x24B651D85CCE5EB4(joaat("chop")) == 0)
						{
							if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), -11.15f, -1425.56f, 29.67f, 1) > 50f)
							{
								func_8(138, 1, 0);
							}
						}
					}
				}
			}
		}
	}
}

void func_8(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = BitTest(Global_32543[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != BitTest(Global_32543[iVar0 /*23*/].f_11, 0))
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 18);
		if (Global_32540 == 1)
		{
			Global_32541 = 1;
		}
		Global_32540 = 1;
	}
	if (bParam1)
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 0);
		unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 15);
		unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_32543[iVar0 /*23*/].f_11), 0);
		unk_0x061B1200C95204CB(&(Global_32543[iVar0 /*23*/].f_11), 15);
	}
	if (!BitTest(Global_32543[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xCE4AAA035282336C(Global_32543[iVar0 /*23*/].f_19))
		{
			unk_0xC9BB10E64C4DE9F9(1);
			unk_0x45533C09A6C9B409(&(Global_32543[iVar0 /*23*/].f_19));
			unk_0xC9BB10E64C4DE9F9(0);
		}
	}
}

bool func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xCE4AAA035282336C(Global_32543[iVar0 /*23*/].f_19);
}

int func_10(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113648.f_9087.f_99.f_58[iParam0];
}

void func_11()
{
	struct<3> Var0;
	int iVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	
	if (unk_0x8C1810CF0182E949(unk_0x5DC3DCA82C806319()))
	{
		return;
	}
	Var0 = { func_17(unk_0x5DC3DCA82C806319()) };
	iVar3 = -1;
	fVar4 = 1000000f;
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 < 7)
	{
		if (iLocal_55[iVar5] != -1)
		{
			if (unk_0xCE4AAA035282336C(Global_32543[iLocal_55[iVar5] /*23*/].f_19))
			{
				fVar6 = unk_0x2E496FE654DA4166(Var0, unk_0x8D16B409D1BC42CD(Global_32543[iLocal_55[iVar5] /*23*/].f_19), 1);
				if (fVar6 < fVar4)
				{
					fVar4 = fVar6;
					iVar3 = iVar5;
				}
			}
		}
		iVar5++;
	}
	if (iLocal_53 == iVar3)
	{
		return;
	}
	iLocal_53 = iVar3;
	if (iVar3 == -1)
	{
		return;
	}
	iVar5 = 0;
	while (iVar5 < 7)
	{
		if (iLocal_55[iVar5] != -1)
		{
			if (iVar5 == iVar3)
			{
				if (unk_0xCE4AAA035282336C(Global_32543[iLocal_55[iVar5] /*23*/].f_19))
				{
					func_16(iLocal_55[iVar5]);
				}
			}
			else if (unk_0xCE4AAA035282336C(Global_32543[iLocal_55[iVar5] /*23*/].f_19))
			{
				func_12(iLocal_55[iVar5]);
			}
		}
		iVar5++;
	}
}

void func_12(int iParam0)
{
	func_15(iParam0, 0, 0);
	func_14(iParam0, 1);
	func_13(iParam0, 1);
}

void func_13(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_32543[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_32543[iVar0 /*23*/].f_11), 4);
	}
	if (Global_32540 == 1)
	{
		Global_32541 = 1;
	}
	Global_32540 = 1;
	unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 18);
}

void func_14(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_32543[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_32543[iVar0 /*23*/].f_11), 5);
	}
	if (Global_32540 == 1)
	{
		Global_32541 = 1;
	}
	Global_32540 = 1;
	unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 18);
}

void func_15(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_32543[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_32543[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_32543[iVar0 /*23*/].f_11), 11);
	}
	if (Global_32540 == 1)
	{
		Global_32541 = 1;
	}
	Global_32540 = 1;
	unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 18);
}

void func_16(int iParam0)
{
	func_15(iParam0, 1, 0);
	func_14(iParam0, 1);
	func_13(iParam0, 1);
}

Vector3 func_17(var uParam0)
{
	return unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(uParam0), 0);
}

void func_18(int iParam0)
{
	int iVar0;
	
	if (iLocal_54 < 1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iLocal_55[iVar0] == iParam0)
		{
			iLocal_54 = (iLocal_54 - 1);
			iLocal_55[iVar0] = -1;
			if (iParam0 == iLocal_53)
			{
				iLocal_53 = -1;
			}
			return;
		}
		iVar0++;
	}
}

void func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iLocal_54 == 7)
	{
		return;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < iLocal_54)
	{
		if (iLocal_55[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iLocal_55[iVar0] == -1)
		{
			iVar1 = iVar0;
			iVar0 = 7;
		}
		iVar0++;
	}
	iLocal_55[iVar1] = iParam0;
	iLocal_54++;
}

void func_20(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	iVar0 = func_1();
	unk_0xCF3E14F89A1F7829(uParam0, 1);
	unk_0xC2E0B90856D55E49(uParam0, 2);
	unk_0x1886753DA39F38F8(uParam0, func_22(iParam1));
	if (Global_32543[iParam1 /*23*/].f_16 == 4 || Global_32543[iParam1 /*23*/].f_16 == 8)
	{
		switch (iVar0)
		{
			case 0:
				unk_0x1886753DA39F38F8(uParam0, 42);
				break;
			
			case 1:
				unk_0x1886753DA39F38F8(uParam0, 43);
				break;
			
			case 2:
				unk_0x1886753DA39F38F8(uParam0, 44);
				break;
			}
	}
	if (!BitTest(Global_32543[iParam1 /*23*/].f_11, 28))
	{
		unk_0x225EB85DBC38E707(uParam0, 1f);
	}
	if (!unk_0x2AC37494BBF1DB16(&(Global_32543[iParam1 /*23*/].f_20)))
	{
		if (unk_0x42FA33BDEDF21186(&(Global_32543[iParam1 /*23*/].f_20)))
		{
			unk_0x4049FDC177C92D4B(uParam0, &(Global_32543[iParam1 /*23*/].f_20));
		}
	}
	bVar1 = BitTest(Global_32543[iParam1 /*23*/].f_11, 4);
	bVar2 = BitTest(Global_32543[iParam1 /*23*/].f_11, 5);
	iVar3 = BitTest(Global_32543[iParam1 /*23*/].f_11, 6);
	bVar4 = false;
	if (func_21(0))
	{
		bVar4 = BitTest(Global_32543[iParam1 /*23*/].f_11, 11);
	}
	if (iVar3 && !bVar4)
	{
		unk_0xDFA9D2A64046A409(uParam0, 0);
	}
	else
	{
		unk_0xDFA9D2A64046A409(uParam0, 1);
	}
	if (bVar2 && bVar1)
	{
		unk_0x3C1C0549FDA2CF24(uParam0, 4);
	}
	else
	{
		if (bVar2)
		{
			unk_0x3C1C0549FDA2CF24(uParam0, 5);
		}
		if (bVar1)
		{
			unk_0x3C1C0549FDA2CF24(uParam0, 3);
		}
	}
	switch (Global_32543[iParam1 /*23*/].f_16)
	{
		case 7:
			unk_0xC2E0B90856D55E49(uParam0, 2);
			unk_0xD522B8C7C7C89629(uParam0, 0);
			break;
		
		case 6:
		case 5:
			unk_0xC2E0B90856D55E49(uParam0, 2);
			unk_0xD522B8C7C7C89629(uParam0, 0);
			break;
		
		case 1:
			unk_0xC2E0B90856D55E49(uParam0, 3);
			unk_0xD522B8C7C7C89629(uParam0, 1);
			break;
		
		case 9:
			unk_0xC2E0B90856D55E49(uParam0, 1);
			unk_0xF5B7BFB8552DB074(uParam0, 10);
			unk_0xD522B8C7C7C89629(uParam0, 0);
			break;
		
		case 4:
		case 8:
			unk_0xD522B8C7C7C89629(uParam0, 1);
			if (Global_32543[iParam1 /*23*/].f_16 == 4)
			{
				unk_0xC2E0B90856D55E49(uParam0, 7);
			}
			else
			{
				unk_0xC2E0B90856D55E49(uParam0, 5);
			}
			if (BitTest(Global_32543[iParam1 /*23*/].f_11, 8))
			{
				if (!func_29(iParam1))
				{
					if (BitTest(Global_32543[iParam1 /*23*/].f_11, 28))
					{
						unk_0x5E3A54CF3E9DF9FC(uParam0, 0);
					}
					else
					{
						if (Global_32543[iParam1 /*23*/].f_17 == 0)
						{
							unk_0x1886753DA39F38F8(uParam0, 42);
						}
						if (Global_32543[iParam1 /*23*/].f_17 == 1)
						{
							unk_0x1886753DA39F38F8(uParam0, 43);
						}
						if (Global_32543[iParam1 /*23*/].f_17 == 2)
						{
							unk_0x1886753DA39F38F8(uParam0, 44);
						}
						if (Global_32543[iParam1 /*23*/].f_16 == 8)
						{
							unk_0xDFA9D2A64046A409(uParam0, BitTest(Global_32543[iParam1 /*23*/].f_11, 5));
							unk_0xC2E0B90856D55E49(uParam0, 3);
							unk_0xDFA9D2A64046A409(uParam0, 1);
							unk_0xDE9F0903D46A94EF(uParam0, 1);
							unk_0x225EB85DBC38E707(uParam0, 0.77f);
						}
						else
						{
							unk_0x225EB85DBC38E707(uParam0, 0.72f);
						}
					}
				}
				else
				{
					if (BitTest(Global_32543[iParam1 /*23*/].f_11, 28))
					{
						unk_0x5E3A54CF3E9DF9FC(uParam0, 128);
					}
					if (Global_32543[iParam1 /*23*/].f_16 == 8)
					{
						unk_0xDE9F0903D46A94EF(uParam0, 0);
					}
				}
			}
			break;
		
		default:
			unk_0xC2E0B90856D55E49(uParam0, 5);
			break;
	}
	switch (iParam1)
	{
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			unk_0xD522B8C7C7C89629(uParam0, 1);
			break;
	}
	if (BitTest(Global_32543[iParam1 /*23*/].f_11, 19))
	{
		switch (iVar0)
		{
			case 1:
			case 0:
			case 2:
				unk_0x385CFFE850A96C08(Global_32543[iParam1 /*23*/].f_19, Global_32543[iParam1 /*23*/][iVar0 /*3*/]);
				break;
			}
	}
	if (BitTest(Global_32543[iParam1 /*23*/].f_11, 17))
	{
		unk_0x09C78F553DA1AC9D(uParam0, 1);
	}
	else
	{
		unk_0x09C78F553DA1AC9D(uParam0, 0);
	}
	if (BitTest(Global_32543[iParam1 /*23*/].f_11, 20))
	{
		unk_0x36013A432586DEC5(uParam0, 1);
	}
	else
	{
		unk_0x36013A432586DEC5(uParam0, 0);
	}
	if (BitTest(Global_32543[iParam1 /*23*/].f_11, 29))
	{
		unk_0x1886753DA39F38F8(uParam0, 39);
	}
}

int func_21(int iParam0)
{
	if (Global_43257 == 15)
	{
		return 0;
	}
	if (func_30(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_22(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	uVar1 = unk_0x4186606EC622CA48(Global_32543[iVar0 /*23*/].f_11, 21, 26);
	return uVar1;
}

void func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_24(iVar0);
		iVar0++;
	}
}

void func_24(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == 10)
	{
		return;
	}
	if (Global_95719[iParam0 /*10*/].f_7 == 263)
	{
		return;
	}
	bVar0 = false;
	if (BitTest(Global_113648.f_7231[iParam0], 0))
	{
		if (Global_95719[iParam0 /*10*/].f_9 != func_28())
		{
			bVar0 = true;
		}
		else if (!func_26(iParam0))
		{
			bVar0 = true;
		}
	}
	if (iParam0 == 5)
	{
		if (func_25(6))
		{
			bVar0 = false;
		}
	}
	if (func_21(14))
	{
		bVar0 = false;
	}
	func_8(Global_95719[iParam0 /*10*/].f_7, bVar0, 0);
}

bool func_25(int iParam0)
{
	return BitTest(Global_113648.f_7231[iParam0], 0);
}

int func_26(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (Global_100733.f_385 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_26(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		func_27(iParam0, &sVar1);
		iVar9 = unk_0xAF0CB15312D8B8E3(Global_95719[iParam0 /*10*/].f_3, &sVar1);
		if (iVar9 != 0 && Global_100733.f_385 == iVar9)
		{
			return 1;
		}
	}
	return 0;
}

bool func_27(int iParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (unk_0x3BF907958F785E30("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (unk_0x3BF907958F785E30("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (unk_0x3BF907958F785E30("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !unk_0x4310A0DB886F9FED(sParam1, "");
}

int func_28()
{
	func_2();
	return Global_113648.f_2365.f_539.f_4321;
}

int func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	if (!BitTest(Global_32543[iVar0 /*23*/].f_11, 8))
	{
		return 0;
	}
	if (Global_32543[iVar0 /*23*/].f_17 == func_1())
	{
		return 1;
	}
	if (!BitTest(Global_32543[iVar0 /*23*/].f_11, 10))
	{
		return 0;
	}
	if (Global_32543[iVar0 /*23*/].f_18 == func_1())
	{
		return 1;
	}
	return 0;
}

bool func_30(int iParam0)
{
	return func_31(iParam0, Global_43257);
}

int func_31(int iParam0, int iParam1)
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

bool func_32(int iParam0)
{
	return Global_43257 == iParam0;
}

int func_33()
{
	if (unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()) != 0)
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0)
{
	if (iLocal_68 && BitTest(Global_32543[iParam0 /*23*/].f_11, 13))
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_69 && ((BitTest(Global_32543[iParam0 /*23*/].f_11, 7) || BitTest(Global_32543[iParam0 /*23*/].f_11, 11)) || BitTest(Global_32543[iParam0 /*23*/].f_11, 16)))
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_70 && BitTest(Global_32543[iParam0 /*23*/].f_11, 14))
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_65 && ((BitTest(Global_32543[iParam0 /*23*/].f_11, 10) || BitTest(Global_32543[iParam0 /*23*/].f_11, 8)) || BitTest(Global_32543[iParam0 /*23*/].f_11, 19)))
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (bLocal_66)
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_72 && BitTest(Global_32543[iParam0 /*23*/].f_11, 27))
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if ((iLocal_73 && (BitTest(Global_32543[iParam0 /*23*/].f_11, 1) || BitTest(Global_32543[iParam0 /*23*/].f_11, 2))) || Global_32543[iParam0 /*23*/].f_16 == 1)
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	return 0;
}

int func_35()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_41())
	{
		if (!iLocal_67)
		{
			iLocal_67 = 1;
			iVar0 = 1;
		}
	}
	if (func_40())
	{
		if (!iLocal_68)
		{
			iLocal_68 = 1;
			iVar0 = 1;
		}
	}
	if (func_39())
	{
		if (!iLocal_69)
		{
			iLocal_69 = 1;
			iVar0 = 1;
		}
	}
	if (func_38())
	{
		if (!iLocal_70)
		{
			iLocal_70 = 1;
			iVar0 = 1;
		}
	}
	bLocal_66 = false;
	if (Global_38594 != iLocal_71)
	{
		iLocal_71 = Global_38594;
		if (!bLocal_66)
		{
			bLocal_66 = true;
			iVar0 = 1;
		}
	}
	if (func_36())
	{
		if (!iLocal_73)
		{
			iLocal_73 = 1;
			iVar0 = 1;
		}
	}
	iLocal_64 = func_1();
	if (iLocal_64 != iLocal_63)
	{
		iLocal_63 = iLocal_64;
		iLocal_65 = 1;
		iVar0 = 1;
	}
	iLocal_46 = bLocal_45;
	if (func_10(130))
	{
		bLocal_45 = true;
	}
	if (func_10(131))
	{
		bLocal_45 = false;
	}
	if (bLocal_45 != iLocal_46)
	{
		if (!iLocal_72)
		{
			iVar0 = 1;
		}
		iLocal_72 = 1;
	}
	return iVar0;
}

int func_36()
{
	int iVar0;
	
	if (unk_0x055111B11E6624FD(unk_0xF2CFBB1105511E1A(unk_0x5DC3DCA82C806319()), 0))
	{
		return 0;
	}
	iVar0 = unk_0x41AD4BF315E01D41(unk_0xF2CFBB1105511E1A(unk_0x5DC3DCA82C806319()));
	if (iLocal_51 != iVar0)
	{
		iLocal_51 = iVar0;
		if (iVar0 == 0 || func_37(iVar0))
		{
			bLocal_50 = true;
		}
		else
		{
			bLocal_50 = false;
		}
		return 1;
	}
	return 0;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 60)
	{
		if (Global_30[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_38()
{
	if (iLocal_52 != func_21(0))
	{
		iLocal_52 = func_21(0);
		return 1;
	}
	return 0;
}

bool func_39()
{
	bool bVar0;
	
	bVar0 = Global_38595;
	Global_38595 = 0;
	if (bVar0)
	{
	}
	return bVar0;
}

int func_40()
{
	if (unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()) != iLocal_49)
	{
		iLocal_49 = unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319());
		return 1;
	}
	return 0;
}

int func_41()
{
	if (Global_43257 != 15)
	{
		return 0;
	}
	if (unk_0x30DFE1FFD2CC7420() != iLocal_48)
	{
		iLocal_48 = unk_0x30DFE1FFD2CC7420();
		return 1;
	}
	return 0;
}

void func_42()
{
	iLocal_65 = 0;
	bLocal_66 = false;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
	iLocal_70 = 0;
	iLocal_71 = 0;
	iLocal_72 = 0;
	iLocal_73 = 0;
}

void func_43()
{
	if (func_44(0) == 1 && !func_32(6))
	{
		func_8(112, 1, 0);
		func_8(113, 1, 0);
		func_8(114, 1, 0);
	}
}

int func_44(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

void func_45()
{
	if (func_44(0) == 1 && !func_32(6))
	{
		func_8(156, 1, 0);
		func_8(157, 1, 0);
		func_8(161, 1, 0);
		func_8(160, 1, 0);
		func_8(158, 1, 0);
		func_12(158);
		func_8(159, 1, 0);
		func_12(159);
	}
}

void func_46(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_32543[iVar0 /*23*/].f_11, 2))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 2);
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_32543[iVar0 /*23*/].f_11), 2);
	}
	if (Global_32540 == 1)
	{
		Global_32541 = 1;
	}
	Global_32540 = 1;
	unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 18);
}

void func_47(int iParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	StringCopy(&(Global_32543[iVar0 /*23*/].f_20), sParam1, 8);
	if (unk_0xCE4AAA035282336C(Global_32543[iVar0 /*23*/].f_19))
	{
		unk_0x4049FDC177C92D4B(Global_32543[iVar0 /*23*/].f_19, sParam1);
	}
}

char* func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL";
			break;
		
		case 1:
			return "SB_BAR";
			break;
		
		case 2:
			return "SB_BAR";
			break;
		
		case 3:
			return "SB_BAR";
			break;
		
		case 4:
			return "SB_BAR";
			break;
		
		case 5:
			return "SB_BAR";
			break;
		
		case 6:
			return "SB_BAR";
			break;
		
		case 7:
			return func_49(iParam0, 0, 0);
			break;
		
		case 8:
			return func_49(iParam0, 0, 0);
			break;
		
		case 9:
			return func_49(iParam0, 0, 0);
			break;
		
		case 10:
			return func_49(iParam0, 0, 0);
			break;
		
		case 11:
			return func_49(iParam0, 0, 0);
			break;
		
		case 12:
			return func_49(iParam0, 0, 0);
			break;
		
		case 13:
			return func_49(iParam0, 0, 0);
			break;
		
		case 14:
			return func_49(iParam0, 0, 0);
			break;
		
		case 15:
			return func_49(iParam0, 0, 0);
			break;
		
		case 16:
			return func_49(iParam0, 0, 0);
			break;
		
		case 17:
			return func_49(iParam0, 0, 0);
			break;
		
		case 18:
			return func_49(iParam0, 0, 0);
			break;
		
		case 19:
			return func_49(iParam0, 0, 0);
			break;
		
		case 20:
			return func_49(iParam0, 0, 0);
			break;
		
		case 21:
			return func_49(iParam0, 0, 0);
			break;
		
		case 22:
			return "SB_TAT";
			break;
		
		case 23:
			return "SB_TAT";
			break;
		
		case 24:
			return "SB_TAT";
			break;
		
		case 25:
			return "SB_TAT";
			break;
		
		case 26:
			return "SB_TAT";
			break;
		
		case 27:
			return "SB_TAT";
			break;
		
		case 28:
			return "SB_AMU2";
			break;
		
		case 29:
			return "SB_AMU";
			break;
		
		case 30:
			return "SB_AMU";
			break;
		
		case 31:
			return "SB_AMU";
			break;
		
		case 32:
			return "SB_AMU";
			break;
		
		case 33:
			return "SB_AMU";
			break;
		
		case 34:
			return "SB_AMU";
			break;
		
		case 35:
			return "SB_AMU";
			break;
		
		case 36:
			return "SB_AMU";
			break;
		
		case 37:
			return "SB_AMU";
			break;
		
		case 38:
			return "SB_AMU2";
			break;
		
		case 39:
			return func_49(iParam0, 0, 0);
			break;
		
		case 40:
			return func_49(iParam0, 0, 0);
			break;
		
		case 41:
			return func_49(iParam0, 0, 0);
			break;
		
		case 42:
			return func_49(iParam0, 0, 0);
			break;
		
		case 43:
			return func_49(iParam0, 0, 0);
			break;
		
		case 44:
			return func_49(iParam0, 0, 0);
			break;
		
		case 45:
			return func_49(iParam0, 0, 0);
			break;
		
		case 46:
			return "SB_AMU";
			break;
		
		case 47:
			return "SB_AMU";
			break;
		
		case 48:
			return "SB_AMU";
			break;
		
		case 49:
			return "SB_AMU";
			break;
		
		case 52:
			return "SB_AMU";
			break;
		
		case 50:
			return "SB_BAR";
			break;
		
		case 51:
			return "S_CL_BL";
			break;
		
		case 53:
			return "SB_AMU";
			break;
		
		case 54:
			return "SB_TAT";
			break;
		
		case 55:
			return func_49(iParam0, 0, 0);
			break;
		
		case 56:
			return "SB_AMU";
			break;
		
		case 57:
			return func_49(iParam0, 0, 0);
			break;
		
		case 58:
			return func_49(iParam0, 0, 0);
			break;
		
		case 59:
			return "SB_AMU";
			break;
	}
	return "SHOP_BLIP_INV";
}

char* func_49(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
		
		case 44:
			return "S_MO_09";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_ONE";
					}
					else
					{
						return "S_MO_10";
					}
					break;
				
				case 5:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_TWO";
					}
					else
					{
						return "S_MO_10";
					}
					break;
				
				case 11:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BUNKER";
					}
					else
					{
						return "S_MO_B";
					}
					break;
				
				case 10:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_TRUCK";
					}
					else
					{
						return "S_MO_T";
					}
					break;
				
				case 12:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_HANGAR";
					}
					else
					{
						return "S_MO_HA";
					}
					break;
				
				case 13:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_AOC";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 14:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BASE";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 15:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BUSINESS_HUB";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 16:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_HACKER_TRUCK";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 17:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_ARENA_WARS";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 18:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_CAR_MEET";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 19:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_TUNER_AUTO_SHOP";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 20:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_FIXER_HQ";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 21:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_JUGGALO_HIDEOUT";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
			}
			return "S_MO_11";
			break;
		
		case 46:
			return "S_G_12";
			break;
		
		case 47:
			return "S_G_13";
			break;
		
		case 48:
			return "S_G_14";
			break;
		
		case 49:
			return "S_G_15";
			break;
		
		case 52:
			return "S_G_16";
			break;
		
		case 53:
			return "S_G_17";
			break;
		
		case 50:
			return "S_H_08";
			break;
		
		case 51:
			return "S_CL_09";
			break;
		
		case 54:
			return "S_T_07";
			break;
		
		case 55:
			return "S_CL_10";
			break;
		
		case 56:
			return "S_G_18";
			break;
		
		case 57:
			return "S_CL_11";
			break;
		
		case 58:
			return "S_G_19";
			break;
		
		case 59:
			return "S_G_20";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 263;
			break;
		
		case 0:
			return 19;
			break;
		
		case 1:
			return 20;
			break;
		
		case 2:
			return 21;
			break;
		
		case 3:
			return 22;
			break;
		
		case 4:
			return 23;
			break;
		
		case 5:
			return 24;
			break;
		
		case 6:
			return 25;
			break;
		
		case 7:
			return 26;
			break;
		
		case 8:
			return 27;
			break;
		
		case 9:
			return 28;
			break;
		
		case 10:
			return 29;
			break;
		
		case 11:
			return 30;
			break;
		
		case 12:
			return 31;
			break;
		
		case 13:
			return 32;
			break;
		
		case 14:
			return 33;
			break;
		
		case 15:
			return 35;
			break;
		
		case 16:
			return 36;
			break;
		
		case 17:
			return 37;
			break;
		
		case 18:
			return 38;
			break;
		
		case 19:
			return 39;
			break;
		
		case 20:
			return 40;
			break;
		
		case 21:
			return 41;
			break;
		
		case 22:
			return 42;
			break;
		
		case 23:
			return 43;
			break;
		
		case 24:
			return 44;
			break;
		
		case 25:
			return 45;
			break;
		
		case 26:
			return 46;
			break;
		
		case 27:
			return 47;
			break;
		
		case 28:
			return 48;
			break;
		
		case 29:
			return 49;
			break;
		
		case 30:
			return 50;
			break;
		
		case 31:
			return 51;
			break;
		
		case 32:
			return 52;
			break;
		
		case 33:
			return 53;
			break;
		
		case 34:
			return 54;
			break;
		
		case 35:
			return 55;
			break;
		
		case 36:
			return 56;
			break;
		
		case 37:
			return 57;
			break;
		
		case 38:
			return 58;
			break;
		
		case 39:
			return 59;
			break;
		
		case 40:
			return 60;
			break;
		
		case 41:
			return 61;
			break;
		
		case 42:
			return 62;
			break;
		
		case 43:
			return 63;
			break;
		
		case 44:
			return 64;
			break;
		
		case 45:
			return 64;
			break;
		
		case 46:
			return 48;
			break;
		
		case 47:
			return 48;
			break;
		
		case 48:
			return 48;
			break;
		
		case 49:
			return 48;
			break;
		
		case 52:
			return 48;
			break;
		
		case 50:
			return 25;
			break;
		
		case 51:
			return 40;
			break;
		
		case 53:
			return 48;
			break;
		
		case 54:
			return 42;
			break;
		
		case 55:
			return 40;
			break;
		
		case 56:
			return 48;
			break;
		
		case 57:
			return 40;
			break;
		
		case 58:
			return 48;
			break;
		
		case 59:
			return 48;
			break;
		
		default:
			break;
	}
	return 263;
}

int func_51(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 1;
			break;
		
		case 44:
			break;
	}
	return 0;
}

void func_52()
{
	unk_0x675D9C12C73D3DE7();
}

