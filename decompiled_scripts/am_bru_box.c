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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	var uLocal_59 = 0;
	struct<10> Local_60 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_70 = 0;
	struct<3> Local_71[32];
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	int iLocal_173 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (unk_0xA26A9A07F761D8F8())
	{
		if (!func_234(ScriptParam_0))
		{
			func_228();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_227(unk_0x93E99A2DBCBA9CFA()) != 1 && !BitTest(Global_2793044.f_912.f_7, 0))
			{
				func_228();
			}
		}
	}
	uLocal_169 = ScriptParam_0.f_19;
	while (true)
	{
		func_226();
		if (func_219())
		{
			func_228();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_227(unk_0x93E99A2DBCBA9CFA()) != 1 && Global_1889846 == 0)
			{
				func_228();
			}
		}
		if (unk_0x359808AE8C4C629B() != iLocal_173)
		{
			func_228();
		}
		unk_0x91DEF39FBB4F10A2();
		switch (func_218(unk_0xD378D2332270959A()))
		{
			case 0:
				if (func_217())
				{
					if (func_216() == 1)
					{
						Local_71[unk_0xD378D2332270959A() /*3*/] = 1;
					}
					else if (func_216() == 4)
					{
						Local_71[unk_0xD378D2332270959A() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_216() == 1)
				{
					func_190();
				}
				else if (func_216() == 4)
				{
					Local_71[unk_0xD378D2332270959A() /*3*/] = 3;
				}
				if (Local_71[unk_0xD378D2332270959A() /*3*/].f_2 == 0)
				{
					if ((!unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_60.f_3, 500f, 500f, 500f, 0, 1, 0) && func_227(unk_0x93E99A2DBCBA9CFA()) != 1) && !BitTest(Global_2793044.f_912.f_7, 0))
					{
						Local_71[unk_0xD378D2332270959A() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_188(&(Local_60.f_9));
				if (func_187(&(Local_60.f_9)))
				{
					Local_71[unk_0xD378D2332270959A() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_71[unk_0xD378D2332270959A() /*3*/] = 4;
			
			case 4:
				func_228();
				break;
		}
		if (unk_0xE85391CF212DE622())
		{
			switch (func_216())
			{
				case 0:
					if (func_7())
					{
						Local_60.f_0 = 1;
					}
					break;
				
				case 1:
					func_6();
					func_5();
					if (func_1())
					{
						Local_60.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Local_60.f_7 >= 32 && func_227(unk_0x93E99A2DBCBA9CFA()) == 1)
	{
		if (func_4(Global_2793044.f_912.f_1))
		{
			return 1;
		}
	}
	if (func_3(unk_0x93E99A2DBCBA9CFA()))
	{
		return 1;
	}
	if (Local_60.f_8 == 2)
	{
		return 1;
	}
	return 0;
}

int func_3(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0xA26A9A07F761D8F8())
	{
		return 0;
	}
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		return Global_2764905;
	}
	else
	{
		uVar0 = unk_0xF2CFBB1105511E1A(iParam0);
		if (unk_0x7DE17ACDD8BA2642(uVar0))
		{
			iVar1 = unk_0x504B9BB48D41C264(uVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_4(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_5()
{
	switch (Local_60.f_8)
	{
		case 0:
			if (!unk_0x7E2E2E8A648611F4(Local_60.f_2) || Local_60.f_6 != -1)
			{
				Local_60.f_8 = 1;
			}
			break;
		
		case 1:
			Local_60.f_8 = 2;
			break;
		
		case 2:
			break;
	}
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x1C57E792CD67EF97())
	{
		if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iVar0)))
		{
			if (Local_60.f_6 == -1)
			{
				if (BitTest(Local_71[iVar0 /*3*/].f_1, 0))
				{
					Local_60.f_6 = iVar0;
				}
			}
			if (!BitTest(Local_60.f_1, 7))
			{
				if (BitTest(Local_71[iVar0 /*3*/].f_1, 1))
				{
					unk_0xECDAB41968FF21A8(&(Local_60.f_1), 7);
				}
			}
		}
		iVar0++;
	}
}

int func_7()
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var9;
	int iVar12;
	struct<35> Var13;
	
	if (!unk_0x7E2E2E8A648611F4(Local_60.f_2))
	{
		if (func_217())
		{
			if (unk_0x959417B72A20644E(1))
			{
				fVar5 = 250f;
				Var6 = { Local_60.f_3 };
				if (BitTest(Local_60.f_1, 8))
				{
					Var0 = { Global_2793044.f_912.f_1 };
					uVar3 = Global_2793044.f_912.f_4;
				}
				if (func_227(unk_0x93E99A2DBCBA9CFA()) == 7)
				{
					iVar12 = unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA());
					if (Global_4718592.f_1265[iVar12 /*23466*/].f_2787[0 /*36*/].f_23 > 0f)
					{
						Var6 = { Global_4718592.f_1265[iVar12 /*23466*/].f_2787[0 /*36*/].f_16 };
						Var9 = { Global_4718592.f_1265[iVar12 /*23466*/].f_2787[0 /*36*/].f_19 };
						fVar5 = Global_4718592.f_1265[iVar12 /*23466*/].f_2787[0 /*36*/].f_23;
						iVar4 = 1;
					}
					else if (Global_4718592.f_1265[iVar12 /*23466*/].f_2787[0 /*36*/].f_22 > 0f)
					{
						Var6 = { Global_4718592.f_1265[iVar12 /*23466*/].f_2787[0 /*36*/].f_13 };
						fVar5 = Global_4718592.f_1265[iVar12 /*23466*/].f_2787[0 /*36*/].f_22;
					}
				}
				Var13.f_5 = 1115815936;
				Var13.f_13 = 2;
				Var13.f_20 = 2;
				Var13.f_32 = -1082130432;
				Var13.f_34 = 1;
				Var13.f_4 = 1;
				Var13.f_5 = 30f;
				Var13.f_10 = 1;
				if (iVar4 == 0)
				{
					if (BitTest(Local_60.f_1, 8) || func_186(Var6, fVar5, &Var0, &uVar3, &Var13))
					{
						if (Local_60.f_7 >= 32 || func_227(unk_0x93E99A2DBCBA9CFA()) == 1)
						{
							Local_60.f_2 = unk_0xC620B18026FDD05D(unk_0x927352BD9ED16D05(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_60.f_2 = unk_0xC620B18026FDD05D(unk_0x55536E78CC2AB292(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						unk_0x692C3FDAD7DB53CC(unk_0xDCE61FCD9D7F205E(Local_60.f_2), uVar3);
					}
				}
				else if (BitTest(Local_60.f_1, 8) || func_8(Var6, Var9, fVar5, &Var0, &uVar3, Var13))
				{
					if (Local_60.f_7 >= 32 || func_227(unk_0x93E99A2DBCBA9CFA()) == 1)
					{
						Local_60.f_2 = unk_0xC620B18026FDD05D(unk_0x927352BD9ED16D05(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_60.f_2 = unk_0xC620B18026FDD05D(unk_0x55536E78CC2AB292(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					unk_0x692C3FDAD7DB53CC(unk_0xDCE61FCD9D7F205E(Local_60.f_2), uVar3);
				}
			}
		}
	}
	if (unk_0x7E2E2E8A648611F4(Local_60.f_2))
	{
		return 1;
	}
	return 0;
}

int func_8(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7, var uParam8, struct<8> Param9, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43)
{
	struct<17> Var0;
	struct<29> Var34;
	
	if (Param9.f_5 < 20f)
	{
		Param9.f_5 = 20f;
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var34.f_16 = 1;
	Var34.f_22 = 1;
	Var34.f_23 = 1;
	Var34.f_24 = 1;
	Var34.f_28 = -1;
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 2;
	Var34.f_8 = { Param0 };
	Var34.f_11 = { Param3 };
	Var34.f_14 = fParam6;
	Var34.f_15 = 0;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	Param9.f_7 = 0;
	if (func_9(&Var34, &Param9, &Var0))
	{
		*uParam7 = { Var0[0 /*3*/] };
		*uParam8 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_9(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	int iVar17;
	struct<3> Var18;
	struct<3> Var21;
	var uVar24;
	bool bVar25;
	struct<61> Var26;
	bool bVar87;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2635559.f_2466 == *uParam0 || !Global_2635559.f_2466.f_1 == uParam0->f_1) || !Global_2635559.f_2466.f_2 == uParam0->f_2) || !Global_2635559.f_2469 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2635559.f_2480 == uParam0->f_8 || !Global_2635559.f_2480.f_1 == uParam0->f_8.f_1) || !Global_2635559.f_2480.f_2 == uParam0->f_8.f_2) || !Global_2635559.f_2483 == uParam0->f_11) || !Global_2635559.f_2483.f_1 == uParam0->f_11.f_1) || !Global_2635559.f_2483.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2635559.f_2480 == uParam0->f_8 || !Global_2635559.f_2480.f_1 == uParam0->f_8.f_1) || !Global_2635559.f_2480.f_2 == uParam0->f_8.f_2) || !Global_2635559.f_2483 == uParam0->f_11) || !Global_2635559.f_2483.f_1 == uParam0->f_11.f_1) || !Global_2635559.f_2483.f_2 == uParam0->f_11.f_2) || !Global_2635559.f_2486 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (Global_1574477)
	{
		if (!Global_2635559.f_2487 == uParam0->f_7)
		{
			bVar25 = true;
		}
		if (unk_0xB8CEC43FB7EF2D92(Global_2635559.f_2473) && !Global_2635559.f_2473 == unk_0xAF908D5E2416DA93())
		{
			bVar25 = true;
		}
	}
	if (bVar25)
	{
		if (Global_2635559.f_2464 == 1)
		{
			if (unk_0xB8CEC43FB7EF2D92(Global_2635559.f_2473))
			{
				if (Global_2635559.f_2473 == unk_0xAF908D5E2416DA93())
				{
					if (unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Global_2635559.f_2470) < func_185(0))
					{
						return 0;
					}
				}
				else if (unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Global_2635559.f_2470) < func_185(0))
				{
					return 0;
				}
			}
			unk_0xE8064964433196F6();
			unk_0x012897049FFE52B9();
			func_184();
		}
		Global_2635559.f_2464 = 0;
	}
	else if (unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Global_2635559.f_2470) > func_185(0))
	{
		Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
		func_178();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar4 = (*uParam0 - uParam0->f_4);
			fVar5 = (uParam0->f_1 - uParam0->f_4);
			fVar6 = (*uParam0 + uParam0->f_4);
			fVar7 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = uParam0->f_8;
				fVar6 = uParam0->f_11;
			}
			else
			{
				fVar4 = uParam0->f_11;
				fVar6 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = uParam0->f_8.f_1;
				fVar7 = uParam0->f_11.f_1;
			}
			else
			{
				fVar5 = uParam0->f_11.f_1;
				fVar7 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar4 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar5 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	unk_0x350F65B0612C7A16(fVar4, fVar5, fVar6, fVar7);
	if (uParam0->f_7 == 0)
	{
		Var8 = { *uParam0 };
	}
	else
	{
		Var8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var11 = { Var8 + Vector(-0.1f, -0.1f, -0.1f) };
	Var14 = { Var8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2635559.f_2464)
	{
		unk_0xE8064964433196F6();
		unk_0x012897049FFE52B9();
		func_184();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_177(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0x15F34AE5010EC735())
		{
			Global_2635559.f_2487 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2635559.f_2466 = { *uParam0 };
					Global_2635559.f_2469 = uParam0->f_4;
					break;
				
				case 1:
					Global_2635559.f_2480 = { uParam0->f_8 };
					Global_2635559.f_2483 = { uParam0->f_11 };
					Global_2635559.f_2486 = 0f;
					Global_2635559.f_2466 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2635559.f_2480 = { uParam0->f_8 };
					Global_2635559.f_2483 = { uParam0->f_11 };
					Global_2635559.f_2486 = uParam0->f_14;
					Global_2635559.f_2466 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_176(Var8.f_0, Var8.f_1);
			}
			Global_2635559.f_2465 = 1;
			Global_2635559.f_2464 = 1;
			Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
			Global_2635559.f_2470 = unk_0x0DB7F8294D73598B();
			Global_2635559.f_2473 = unk_0xAF908D5E2416DA93();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2635559.f_2464)
	{
		if (Global_2635559.f_2465 == 1)
		{
			if (unk_0x9ADDEEB34545AD94(fVar4, fVar5, fVar6, fVar7) || unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Global_2635559.f_2471) > 5000)
			{
				Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var8 };
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = joaat("tailgater");
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26.f_57 = 1;
					Var26 = { *uParam1 };
					Var26.f_3 = uParam1->f_5;
					Var26.f_11 = uParam1->f_9;
					Var26.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var26.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var26.f_19 = { *uParam0 };
							Var26.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = 0f;
							break;
						
						case 2:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = uParam0->f_14;
							break;
					}
					Var26.f_26 = uParam0->f_7;
					Var26.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17 /*3*/] = { uParam1->f_13[iVar17 /*3*/] };
						Var26.f_45[iVar17] = uParam1->f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = uParam1->f_30;
					Var26.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var26.f_10 = 0;
					}
					if (func_175(Global_4718592.f_166301))
					{
						Var26.f_9 = 1;
					}
					Var26.f_60 = uParam0->f_30;
					func_148(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_147(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2635559.f_2465 = 9;
				}
				else
				{
					Global_2635559.f_2465 = 2;
				}
			}
		}
		if (Global_2635559.f_2465 == 2)
		{
			if ((unk_0xEB34AFF09AB10808(Var11, Var14) || unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Global_2635559.f_2471) > 15000) || unk_0x9E01F84110A94180(Var11, Var14) == 0)
			{
				Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
				if (uParam0->f_5 && !func_144(unk_0x93E99A2DBCBA9CFA(), 0))
				{
					Global_2635559.f_2465 = 3;
				}
				else
				{
					Global_2635559.f_2465 = 4;
				}
			}
			else if (unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Global_2635559.f_2475) > 7000)
			{
				func_143(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2635559.f_2465 == 3)
		{
			if (func_142() || unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Global_2635559.f_2471) > 10000)
			{
				Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
				Global_2635559.f_2465 = 4;
			}
		}
		if (Global_2635559.f_2465 == 4)
		{
			if (unk_0x15F34AE5010EC735())
			{
				unk_0xE8064964433196F6();
				unk_0x012897049FFE52B9();
			}
			else
			{
				iVar0 = 0;
				func_178();
				if (uParam0->f_5)
				{
					if (unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0x2BC7E947F8C8689A(unk_0x93E99A2DBCBA9CFA(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
								Global_2635559.f_2465 = 5;
							}
							break;
						
						case 1:
							func_141(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0x7F629900E1BACBE5(unk_0x93E99A2DBCBA9CFA(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
								Global_2635559.f_2465 = 5;
							}
							break;
						
						case 2:
							if (unk_0x7F629900E1BACBE5(unk_0x93E99A2DBCBA9CFA(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
								Global_2635559.f_2465 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
					Global_2635559.f_2465 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0xF842385C6D91CA51(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_141(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0x8CA5F0E81F53EAB7(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x8CA5F0E81F53EAB7(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2635559.f_2465 == 5)
		{
			if (func_64(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2635559.f_2491.f_5)
				{
					Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
					Global_2635559.f_2465 = 6;
				}
				else
				{
					Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0x06A2A02CDC68090B(Var1.f_0, Var1.f_1);
						}
					}
					Global_2635559.f_2465 = 9;
				}
			}
			else if (unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Global_2635559.f_2471) > 20000)
			{
				unk_0xE8064964433196F6();
				unk_0x012897049FFE52B9();
				Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
				Global_2635559.f_2465 = 8;
			}
		}
		if (Global_2635559.f_2465 == 6)
		{
			iVar0 = 0;
			Global_2635559.f_2491.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_63(uParam0->f_4))
				{
					if (unk_0x4D3D95146FD3490D(unk_0x9CE0235348AE4A4D(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_62(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x4D3D95146FD3490D(unk_0x9CE0235348AE4A4D(Var8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
			Global_2635559.f_2465 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0xF842385C6D91CA51(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_141(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0x8CA5F0E81F53EAB7(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x8CA5F0E81F53EAB7(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2635559.f_2465 == 7)
		{
			if (func_64(uParam2, uParam0, uParam1, 1))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!unk_0x652D2EEEF1D3E62C(Global_2635559.f_2625[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_147(Global_2635559.f_2625[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2635559.f_2625[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_60(Global_2635559.f_2625[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2635559.f_2625[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x9E76D45F14E2C578(Global_2635559.f_2625[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2635559.f_2625[iVar17 /*3*/] };
										}
										break;
									}
								}
						}
						iVar17++;
					}
					if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_12(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_16[iVar17] = unk_0x06A2A02CDC68090B(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2635559.f_2465 = 9;
			}
			else if (unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), Global_2635559.f_2471) > 20000)
			{
				Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
				Global_2635559.f_2465 = 8;
			}
		}
		if (Global_2635559.f_2465 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_11(Global_2635559.f_489))
				{
				}
			}
			else if (Global_2635559.f_2491.f_2)
			{
				func_10(uParam2, &(Global_2635559.f_2491.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar87 = false;
				}
				else
				{
					bVar87 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2635559.f_2466 };
				func_12(uParam2[0 /*3*/], 0, bVar87, 0, 0, uParam0, uParam1);
			}
			Global_2635559.f_2471 = unk_0x0DB7F8294D73598B();
			Global_2635559.f_2465 = 9;
		}
		if (Global_2635559.f_2465 == 9)
		{
			Global_2635559.f_2464 = 0;
			unk_0xE8064964433196F6();
			unk_0x012897049FFE52B9();
			func_184();
			return 1;
		}
		Global_2635559.f_2470 = unk_0x0DB7F8294D73598B();
	}
	return 0;
}

void func_10(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_11(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_12(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	struct<3> Var0;
	var uVar3;
	struct<61> Var4;
	var uVar65;
	int iVar66;
	bool bVar67;
	int iVar68;
	struct<3> Var69;
	struct<3> Var72;
	struct<3> Var75;
	float fVar78;
	
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("tailgater");
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	Var4.f_57 = 1;
	if (bParam1)
	{
		iVar68 = 0;
	}
	else
	{
		iVar68 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar68 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var69 = { *uParam5 };
						if (func_63(uParam5->f_4) || !unk_0x4D3D95146FD3490D(unk_0x9CE0235348AE4A4D(Var69)))
						{
							iVar68 += 4;
						}
						break;
					
					case 1:
						Var69 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_62(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x4D3D95146FD3490D(unk_0x9CE0235348AE4A4D(Var69)))
						{
							iVar68 += 4;
						}
						break;
					
					case 2:
						Var69 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_62(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x4D3D95146FD3490D(unk_0x9CE0235348AE4A4D(Var69)))
						{
							iVar68 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar68 += 4;
		}
	}
	if (func_28(*uParam0, &Var0, iVar68, iParam3, 1))
	{
	}
	else
	{
		bVar67 = true;
	}
	if (bVar67)
	{
		Var0 = { *uParam0 };
		Var4 = { *uParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var4.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var4.f_19 = { *uParam5 };
					Var4.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = 0f;
					break;
				
				case 2:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar66 = 0;
		while (iVar66 < 2)
		{
			Var4.f_38[iVar66 /*3*/] = { uParam6->f_13[iVar66 /*3*/] };
			Var4.f_45[iVar66] = uParam6->f_20[iVar66];
			iVar66++;
		}
		Var4.f_51 = uParam6->f_30;
		Var4.f_55 = uParam5->f_16;
		if (func_24(unk_0x93E99A2DBCBA9CFA(), 0))
		{
			Var4.f_9 = 1;
		}
		Var4.f_60 = uParam5->f_30;
		func_148(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var72 = { *uParam5 };
				fVar78 = uParam5->f_4;
				break;
			
			case 1:
				Var72 = { uParam5->f_8 };
				Var75 = { uParam5->f_11 };
				break;
			
			case 2:
				Var72 = { uParam5->f_8 };
				Var75 = { uParam5->f_11 };
				fVar78 = uParam5->f_14;
				break;
		}
		if (!func_23(Var0, uParam5->f_7, Var72, Var75, fVar78))
		{
			if (func_28(*uParam0, &Var0, iVar68, iParam3, 0))
			{
				if (!func_23(Var0, uParam5->f_7, Var72, Var75, fVar78))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var72 + Var75 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var72 };
					}
					if (unk_0xDE209AFE421606C6(Var0, &uVar65, 0, 0))
					{
						Var0.f_2 = uVar65;
					}
				}
			}
			else if (func_13(uParam0, 1, 1, 1, 1))
			{
				func_12(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var72 + Var75 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var72 };
				}
				if (unk_0xDE209AFE421606C6(Var0, &uVar65, 0, 0))
				{
					Var0.f_2 = uVar65;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2635559.f_667 = 1;
}

int func_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2640505[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2640505[iVar0 /*17*/].f_16))
			{
				if (func_22(*uParam0, &(Global_2640505[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2640505[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2640505[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_14(&Var1, &(Global_2640505[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_13(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_14(&Var1, &(Global_2640505[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_14(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_21(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_21(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_21(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_19(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_18(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_15(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_15(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	
	Var0 = { Param4 - Param1 };
	Var0.f_2 = 0f;
	Var3 = { *uParam0 - Param1 };
	Var3.f_2 = 0f;
	Var6 = { func_17(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0xB43F151D3D35221A(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_16(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_16(Var6, Var3) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		Var10 = { *uParam0 + Var6 };
		fVar16 = unk_0x2A488C176D52CCA5(Param1.f_0, Param1.f_1, 0f, Param4.f_0, Param4.f_1, 0f);
		Var17 = { Param1 + Param4 / Vector(2f, 2f, 2f) };
		Var17.f_2 = 0f;
		Var6 = { func_17(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_17(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0xB43F151D3D35221A(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_16(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_16(Var6, Var29) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		Var13 = { *uParam0 + Var6 };
		if (unk_0x2A488C176D52CCA5(Var10, *uParam0, uParam0->f_1, 0f) < unk_0x2A488C176D52CCA5(Var13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var10 };
		}
		else
		{
			*uParam0 = { Var13 };
		}
	}
}

float func_16(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_17(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_18(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1.f_0);
	fVar4 = (*uParam0 - Param4.f_0);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	Var0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				Var0.f_0 = (Param1.f_0 - fParam7);
			}
			else
			{
				Var0.f_0 = (Param4.f_0 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			Var0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			Var0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			Var0.f_0 = (Param4.f_0 + fParam7);
		}
		else
		{
			Var0.f_0 = (Param1.f_0 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		Var0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam7);
	}
	*uParam0 = { Var0 };
}

void func_19(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_20(&Var0, 0f, 0f, unk_0xD88C7A93096DA0F7(0f, 360f));
		}
		else
		{
			func_20(&Var0, 0f, 0f, fParam7);
		}
	}
	Var0 = { Var0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		Var3 = { Param1 + Var0 };
	}
	else
	{
		Var3 = { Param1 - Var0 };
	}
	*uParam0 = Var3.f_0;
	uParam0->f_1 = Var3.f_1;
}

void func_20(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_0);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_1);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_2);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

Vector3 func_21(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_19(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_18(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_15(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x16BB0517A69884B4(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_147(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_60(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x9E76D45F14E2C578(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_22(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_147(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2635559.f_2735) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_60(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x9E76D45F14E2C578(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x9E76D45F14E2C578(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (unk_0x9E76D45F14E2C578(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x9E76D45F14E2C578(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_23(struct<3> Param0, int iParam3, struct<3> Param4, struct<3> Param7, float fParam10)
{
	switch (iParam3)
	{
		case 0:
			if (unk_0x2A488C176D52CCA5(Param0, Param4) <= fParam10)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_60(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return unk_0x9E76D45F14E2C578(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_24(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			uVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			if (unk_0x504B9BB48D41C264(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_27())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_27())
			{
				return func_25(Global_2657589[iParam0 /*466*/].f_321.f_7) == 12;
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
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
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
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
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
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
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
	}
	return -1;
}

int func_26(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xE6DEE82DB0922DF0(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x48DC6A21D1CAD89C(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672505.f_3)
				{
					return Global_2672505.f_2;
				}
				else if (Global_2657589[iVar0 /*466*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_27()
{
	return -1;
}

int func_28(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_59(Param0, uParam3))
	{
		if (func_29(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (unk_0xD150D18ADFDC5159(Param0, 0, uParam3, iParam4))
	{
		if (func_29(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(struct<3> Param0, var uParam3, int iParam4, bool bParam5)
{
	float fVar0;
	var uVar1;
	var uVar8;
	
	fVar0 = unk_0x2A488C176D52CCA5(Param0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_45(Global_2635559.f_512, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
		{
			if (!func_33(*uParam3, 1056964608))
			{
				if (!func_30(uParam3, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_30(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { *uParam0 };
	iVar4 = func_32(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2642106[iVar4])
	{
		if (func_31(Var1, &(Global_2640710[iVar4 /*155*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_15(&Var1, Global_2640710[iVar4 /*155*/][iVar0 /*7*/], Global_2640710[iVar4 /*155*/][iVar0 /*7*/].f_3, Global_2640710[iVar4 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2642106[8])
	{
		if (func_31(Var1, &(Global_2640710[8 /*155*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_15(&Var1, Global_2640710[8 /*155*/][iVar0 /*7*/], Global_2640710[8 /*155*/][iVar0 /*7*/].f_3, Global_2640710[8 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_31(struct<3> Param0, var uParam3)
{
	return unk_0x9E76D45F14E2C578(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_32(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2642117[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2642117[1])
	{
		if (Param0.f_0 < Global_2642121[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2642117[2])
	{
		if (Param0.f_0 < Global_2642121[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2642121[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2642121[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_33(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_42(unk_0x93E99A2DBCBA9CFA(), 1, 0))
	{
		if (Global_4980736.f_39172 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_39172)
			{
				if (Global_4980736.f_39173[iVar0 /*148*/].f_7 != 0)
				{
					if (func_34(Param0, Global_4980736.f_39173[iVar0 /*148*/], Global_4980736.f_39173[iVar0 /*148*/].f_6, Global_4980736.f_39173[iVar0 /*148*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_5991 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_5991)
			{
				if (Global_4980736.f_5994[iVar0 /*492*/].f_15 != 0)
				{
					if (func_34(Param0, Global_4980736.f_5994[iVar0 /*492*/], Global_4980736.f_5994[iVar0 /*492*/].f_3, Global_4980736.f_5994[iVar0 /*492*/].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_84915 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_84915)
			{
				if (Global_4980736.f_84919[iVar0 /*499*/].f_12 != 0)
				{
					if (func_34(Param0, Global_4980736.f_84919[iVar0 /*499*/], Global_4980736.f_84919[iVar0 /*499*/].f_3, Global_4980736.f_84919[iVar0 /*499*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058070.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058070.f_268)
			{
				if (unk_0x7DE17ACDD8BA2642(Global_1058070.f_233[iVar0]) && !unk_0x055111B11E6624FD(Global_1058070.f_233[iVar0], 0))
				{
					if (func_34(Param0, unk_0x30BE8A934C020461(Global_1058070.f_233[iVar0], 1), unk_0xD850DD08D5434072(Global_1058070.f_233[iVar0]), unk_0x504B9BB48D41C264(Global_1058070.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058070.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058070.f_266)
			{
				if (unk_0x7DE17ACDD8BA2642(Global_1058070.f_119[iVar0]) && !unk_0x055111B11E6624FD(Global_1058070.f_119[iVar0], 0))
				{
					if (func_34(Param0, unk_0x30BE8A934C020461(Global_1058070.f_119[iVar0], 1), unk_0xD850DD08D5434072(Global_1058070.f_119[iVar0]), unk_0x504B9BB48D41C264(Global_1058070.f_119[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_34(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_41(iParam7, 1008981770))
	{
		func_35(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (unk_0x9E76D45F14E2C578(Param0, Var0, Var3, fVar6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_35(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_20(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	func_36(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0.5f * unk_0x2655A8EC638E4FD1((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * unk_0x2655A8EC638E4FD1((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = unk_0x2655A8EC638E4FD1((Var6.f_0 - Var3.f_0));
}

void func_36(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x36A2218D87DEF488(iParam0))
	{
		unk_0x1C97A6E4D8DA4B2F(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_39(iParam0);
		if (iVar0 != 0)
		{
			func_37(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (unk_0x652D2EEEF1D3E62C(*uParam1) <= 0.01f || unk_0x652D2EEEF1D3E62C(*uParam2) <= 0.01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20.7f)
			{
				fParam4 = 20.7f;
			}
			if (fParam3 < 137.2f)
			{
				fParam3 = 137.2f;
			}
			if (fParam5 < 21.1f)
			{
				fParam5 = 21.1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_37(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_38(iParam0, &Global_1577994);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x36A2218D87DEF488(Global_1577994[iVar0]))
		{
			unk_0x1C97A6E4D8DA4B2F(Global_1577994[iVar0], &(Global_1577998[iVar0 /*3*/]), &(Global_1578005[iVar0 /*3*/]));
		}
		if (unk_0x652D2EEEF1D3E62C(Global_1577998[iVar0 /*3*/]) <= 0.01f || unk_0x652D2EEEF1D3E62C(Global_1578005[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1577998[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1578005[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1577998[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1578005[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1577998[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1578005[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1578012[iVar0] = (Global_1578005[iVar0 /*3*/] - Global_1577998[iVar0 /*3*/]);
		Global_1578015[iVar0] = (Global_1578005[iVar0 /*3*/].f_1 - Global_1577998[iVar0 /*3*/].f_1);
		Global_1578018[iVar0] = (Global_1578005[iVar0 /*3*/].f_2 - Global_1577998[iVar0 /*3*/].f_2);
		if (Global_1578012[iVar0] > Global_1578021)
		{
			Global_1578021 = Global_1578012[iVar0];
		}
		if (Global_1578018[iVar0] > Global_1578022)
		{
			Global_1578022 = Global_1578018[iVar0];
		}
		iVar0++;
	}
	Global_1578023 = (Global_1578021 * -0.5f);
	Global_1578026 = (Global_1578021 * 0.5f);
	Global_1578023.f_1 = ((((0.5f * Global_1578015[0]) + Global_1578015[1]) + Global_1577994.f_3) * -1f);
	Global_1578026.f_1 = (0.5f * Global_1578015[0]);
	Global_1578023.f_2 = (Global_1578018[0] * -0.5f);
	Global_1578026.f_2 = (Global_1578018[0] * 0.5f);
	*uParam1 = { Global_1578023 };
	*uParam2 = { Global_1578026 };
}

void func_38(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_40(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_41(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_36(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (unk_0x71D93B57D07F9804(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_42(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_43(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853910[iParam0 /*862*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_43(int iParam0)
{
	return func_44(iParam0);
}

var func_44(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

int func_45(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_52(Param0))
	{
		if (func_13(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_47(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_46(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (unk_0x2A488C176D52CCA5(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_19(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_46(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2635559.f_2737[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_47(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_49(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_14(&Var2, &(Global_2635559.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_49(Var2, &uVar1) || func_48(Var2))
			{
				Var2 = { *uParam0 };
				func_14(&Var2, &(Global_2635559.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_48(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2635559.f_596 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2635559.f_593);
		if (fVar0 < Global_2635559.f_596)
		{
			return 1;
		}
	}
	return 0;
}

int func_49(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_51())
	{
		return 0;
	}
	iVar1 = func_50();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2635559.f_368[iVar0 /*12*/].f_9 == 1)
		{
			if (func_22(Param0, &(Global_2635559.f_368[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_50()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2635559.f_368[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_51()
{
	return Global_1950108.f_528;
}

int func_52(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2635559.f_515 && !Global_2635559.f_516)
	{
		if (!Global_2635559.f_45.f_317)
		{
			if (!func_56(unk_0x93E99A2DBCBA9CFA(), 1))
			{
				return 1;
			}
			if (!func_55(Param0, 1008981770))
			{
				if (!func_13(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_13(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_54(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_53(&(Global_2635559.f_45[iVar0 /*12*/])) };
					if (!func_13(&Var1, 0, 0, 0, 1))
					{
						if (!func_13(&Param0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_53(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_54(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635559.f_45[iVar0 /*12*/].f_9)
		{
			if (func_22(Param0, &(Global_2635559.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_55(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635559.f_45[iVar0 /*12*/].f_9)
		{
			if (func_22(Param0, &(Global_2635559.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_56(int iParam0, bool bParam1)
{
	if (func_58() != 0)
	{
		return func_57(iParam0) != 0;
	}
	return func_42(iParam0, bParam1, 0);
}

int func_57(int iParam0)
{
	if (func_26(iParam0, 0, 1))
	{
		return Global_2657589[iParam0 /*466*/].f_1;
	}
	return 0;
}

int func_58()
{
	return Global_32163;
}

int func_59(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2635559.f_2262 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2635559.f_2262)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2635559.f_2263[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2635559.f_2263[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_60(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_61(&Param3, &Param6);
	if (((!Param0.f_0 >= Param3.f_0 || !Param0.f_1 >= Param3.f_1) || !Param0.f_0 <= Param6.f_0) || !Param0.f_1 <= Param6.f_1)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (Param0.f_2 >= Param3.f_2)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (Param0.f_2 <= Param6.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param3.f_2 && Param0.f_2 <= Param6.f_2)
	{
		return 1;
	}
	return 0;
}

void func_61(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_62(struct<3> Param0, struct<3> Param3, float fParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (Param0.f_0 > Param3.f_0)
	{
		Var3.f_0 = Param0.f_0;
		Var0.f_0 = Param3.f_0;
	}
	else
	{
		Var3.f_0 = Param3.f_0;
		Var0.f_0 = Param0.f_0;
	}
	if (Param0.f_1 > Param3.f_1)
	{
		Var3.f_1 = Param0.f_1;
		Var0.f_1 = Param3.f_1;
	}
	else
	{
		Var3.f_1 = Param3.f_1;
		Var0.f_1 = Param0.f_1;
	}
	if (Param0.f_2 > Param3.f_2)
	{
		Var3.f_2 = Param0.f_2;
		Var0.f_2 = Param3.f_2;
	}
	else
	{
		Var3.f_2 = Param3.f_2;
		Var0.f_2 = Param0.f_2;
	}
	if (unk_0x652D2EEEF1D3E62C(Var3 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam6 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_63(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_64(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2635559.f_2491.f_1 == 0 && Global_2635559.f_2491 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x51E00353AA7C8C23(&(Global_2635559.f_2491.f_1)))
			{
				case 0:
					func_139(uParam1, uParam2);
					if (!Global_2635559.f_2491.f_2)
					{
						if (uParam2->f_7 && Global_2635559.f_555.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2635559.f_2466 };
							}
							if (uParam1->f_5 && func_11(Global_2635559.f_489))
							{
								if (!Global_2635559.f_2491.f_5)
								{
									Global_2635559.f_2491.f_5 = 1;
								}
								else
								{
									func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_12(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = unk_0xD88C7A93096DA0F7(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_139(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0x15F34AE5010EC735())
		{
			if (!unk_0xC4E6C26C01C762B9())
			{
				if (unk_0xDF3754F63FE8C705())
				{
					func_139(uParam1, uParam2);
					Global_2635559.f_2491.f_1 = unk_0xE993DEF3CDE767EB();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x012897049FFE52B9();
				func_139(uParam1, uParam2);
				if (!Global_2635559.f_2491.f_2)
				{
					Global_2635559.f_2491.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_136(Global_2635559.f_555, &(Global_2635559.f_2491.f_57), &(Global_2635559.f_2491.f_90));
	}
	if (uParam2->f_7 && !Global_2635559.f_2491.f_4)
	{
		Global_2635559.f_2491.f_4 = 1;
		func_72(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 64;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2635559.f_2491.f_1 > 0 || Global_2635559.f_2491 > 0)
	{
		if (uParam1->f_5 || unk_0x15F34AE5010EC735())
		{
			iVar4 = 0;
			while (iVar4 < Global_2635559.f_2491.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2635559.f_2491.f_3)
					{
						iVar4 = Global_2635559.f_2491.f_3 + 1;
					}
					if (iVar4 > (Global_2635559.f_2491.f_1 - 1))
					{
						iVar4 = (Global_2635559.f_2491.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0xF2069351918A58E0(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0x7612340B41629249(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0xAC7C551A7F3A46C0(iVar4);
					}
					else
					{
						unk_0x9E50944C32896E43(iVar4, &iVar5);
					}
					func_72(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2635559.f_2491.f_3 = iVar4;
				}
				else
				{
					return 0;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2635559.f_2491.f_1;
		}
		if (Global_2635559.f_2491.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2635559.f_2889)
			{
				func_66(&(Global_2635559.f_2491.f_6[0 /*10*/]), &(Global_2635559.f_2491.f_6[1 /*10*/]), &(Global_2635559.f_2491.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_11(Global_2635559.f_489))
			{
				if (Global_2635559.f_2491.f_2)
				{
					func_10(uParam0, &(Global_2635559.f_2491.f_6));
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2635559.f_2466 };
					func_12(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0xD88C7A93096DA0F7(0f, 360f);
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2635559.f_2491.f_2)
			{
				func_10(uParam0, &(Global_2635559.f_2491.f_6));
				func_65(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x15A88CFAAFFC6C4B(0, Global_2635559.f_2491.f_1);
				unk_0xF2069351918A58E0(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_30(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2635559.f_2466 };
					func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0xD88C7A93096DA0F7(0f, 360f);
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2635559.f_2466 };
				func_12(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0xD88C7A93096DA0F7(0f, 360f);
				func_65(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2635559.f_2466 };
		if (uParam1->f_5 && func_11(Global_2635559.f_489))
		{
			if (!Global_2635559.f_2491.f_5)
			{
				Global_2635559.f_2491.f_5 = 1;
			}
			else
			{
				func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar8 = false;
			}
			else
			{
				bVar8 = true;
			}
			func_12(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = unk_0xD88C7A93096DA0F7(0f, 360f);
		func_65(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_65(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2635559.f_2625[(3 - iVar0) /*3*/] = { Global_2635559.f_2625[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2635559.f_2625[0 /*3*/] = { Param0 };
}

void func_66(var uParam0, var uParam1, var uParam2)
{
	if (func_11(Global_2635559.f_489) && func_71() < 4096)
	{
		func_70(uParam0, 0f);
		func_70(uParam1, uParam0->f_2);
		func_70(uParam2, uParam1->f_2);
	}
	else
	{
		func_69(uParam0);
		func_68(uParam2, uParam0->f_4);
		func_67(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_67(var uParam0, struct<3> Param1, struct<3> Param4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638502[iVar0 /*10*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2638502[iVar0 /*10*/].f_4, Param1);
			fVar3 = unk_0x2A488C176D52CCA5(Global_2638502[iVar0 /*10*/].f_4, Param4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2638502[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2638502[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_68(var uParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638502[iVar0 /*10*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2638502[iVar0 /*10*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2638502[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2638502[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_69(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638502[iVar0 /*10*/] > 0)
		{
			if (Global_2638502[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2638502[iVar0 /*10*/].f_1;
				Var2 = { Global_2638502[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_70(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638502[iVar0 /*10*/] > 0)
		{
			if (Global_2638502[iVar0 /*10*/].f_2 < fVar1 && Global_2638502[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2638502[iVar0 /*10*/].f_2;
				Var2 = { Global_2638502[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_71()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638502[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2638502[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_72(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	bool bVar15;
	int iVar16;
	struct<3> Var17;
	struct<3> Var20;
	float fVar23;
	int iVar24;
	struct<10> Var25;
	bool bVar35;
	bool bVar36;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam4->f_5)
	{
		if (Global_2635559.f_489 == 1)
		{
			if (unk_0x2655A8EC638E4FD1((Global_2635559.f_512.f_2 - Param0.f_2)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam4->f_5)
	{
		if (func_132(unk_0x93E99A2DBCBA9CFA()))
		{
			if (iParam7 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam4->f_5 && uParam4->f_6)
	{
		if (!func_131(Param0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam4->f_5)
	{
		if (!unk_0xD672EE955D5E7855(unk_0xC1A5EC5C986B98AD(), Param0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!unk_0xD672EE955D5E7855(unk_0xC1A5EC5C986B98AD(), Param0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam4->f_5)
	{
		if (!func_130(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1, 0))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar15 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (unk_0x652D2EEEF1D3E62C(uParam5->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!unk_0x2A488C176D52CCA5(Param0, uParam5->f_13[iVar11 /*3*/]) > uParam5->f_20[iVar11])
			{
				bVar15 = false;
			}
		}
		iVar11++;
	}
	if (bVar15)
	{
		if ((unk_0x652D2EEEF1D3E62C(uParam5->f_23) > 0f && unk_0x652D2EEEF1D3E62C(uParam5->f_26) > 0f) && uParam5->f_29 > 0f)
		{
			if (unk_0x9E76D45F14E2C578(Param0, uParam5->f_23, uParam5->f_26, uParam5->f_29, 0, 1))
			{
				bVar15 = false;
			}
		}
	}
	if (bVar15)
	{
		iVar8 += 256;
	}
	if (uParam4->f_5)
	{
		if (func_124(Param0, fParam3, uParam4->f_15, func_129(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2635559.f_3;
		}
	}
	else if (!func_121(Param0, 25f, unk_0x93E99A2DBCBA9CFA(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_118(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_118(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2635559.f_701)
		{
			Var12 = { Global_2635559.f_512 };
			if (Global_2635559.f_489 == 26)
			{
				Var12 = { Global_2635559.f_555.f_18 };
			}
			if (!func_46(Param0, 0.5f))
			{
				if (func_52(Var12))
				{
					if (!func_13(&Param0, 0, 0, 0, 1) && !func_117(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_117(&Param0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_116(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_115(unk_0x93E99A2DBCBA9CFA()) && func_113(unk_0x93E99A2DBCBA9CFA())))
		{
			if (!func_112(&Param0, &(Global_2635559.f_2491.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam4->f_5)
	{
		if (!func_113(unk_0x93E99A2DBCBA9CFA()))
		{
			if (!func_111(Param0, &(Global_2635559.f_2491.f_57), &(Global_2635559.f_2491.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_110(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_11(Global_2635559.f_489))
			{
				if (func_55(Param0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (func_109(Param0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2635559.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0x4D3D95146FD3490D(unk_0x9CE0235348AE4A4D(Param0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0x4D3D95146FD3490D(unk_0x9CE0235348AE4A4D(Param0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2635559.f_701)
		{
			if (!func_47(&Param0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_30(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar16 = func_54(Param0, 1008981770);
		if (iVar16 > -1)
		{
			func_108(Param0, &Var17, &Var20, &fVar23);
			if (!func_103(&(Global_2635559.f_45[iVar16 /*12*/]), Var17, Var20, fVar23))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_33(Param0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam5->f_33)
	{
		if (unk_0x5829BBF74D541BA8(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam5->f_34)
	{
		if (unk_0x0B5B560B8AF5E5BF(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam4->f_5)
	{
	}
	else if (func_102(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var25.f_2 = 1176256410;
	bVar35 = false;
	bVar36 = false;
	if (Global_2635559.f_2889 && uParam4->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam6)
			{
				uParam5->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam4->f_21)
			{
				fVar0 = func_93(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			else
			{
				fVar0 = func_93(Param0, Global_2635559.f_2466, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_11(Global_2635559.f_489) && iVar8 < 4096)
			{
				Var25.f_2 = func_91(Param0);
			}
			uVar7 = func_78(Param0, 1, 0, 0, 0, 0);
			Var25.f_4 = { Param0 };
			Var25.f_7 = fParam3;
			Var25.f_0 = iVar8;
			Var25.f_1 = fVar0;
			Var25.f_9 = uVar7;
			func_77(Var25);
			Global_2635559.f_2491.f_2 = 1;
		}
	}
	else
	{
		iVar24 = 0;
		while (iVar24 < 5)
		{
			if (iVar8 >= Global_2635559.f_2491.f_6[iVar24 /*10*/])
			{
				if (uParam4->f_5)
				{
					if (!bVar35)
					{
						if (bParam6)
						{
							uParam5->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam4->f_21)
						{
							fVar0 = func_93(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						else
						{
							fVar0 = func_93(Param0, Global_2635559.f_2466, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar35 = true;
					}
					if ((func_11(Global_2635559.f_489) && iVar8 == Global_2635559.f_2491.f_6[iVar24 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar36)
						{
							fVar2 = func_91(Param0);
							bVar36 = true;
						}
						if (fVar2 < Global_2635559.f_2491.f_6[iVar24 /*10*/].f_2)
						{
							Var25.f_4 = { Param0 };
							Var25.f_7 = fParam3;
							Var25.f_0 = iVar8;
							Var25.f_1 = fVar0;
							Var25.f_2 = fVar2;
							func_76(Var25, iVar24);
							Global_2635559.f_2491.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2635559.f_2491.f_6[iVar24 /*10*/] || (iVar8 == Global_2635559.f_2491.f_6[iVar24 /*10*/] && fVar0 > Global_2635559.f_2491.f_6[iVar24 /*10*/].f_1))
					{
						Var25.f_4 = { Param0 };
						Var25.f_7 = fParam3;
						Var25.f_0 = iVar8;
						Var25.f_1 = fVar0;
						func_76(Var25, iVar24);
						Global_2635559.f_2491.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar35)
					{
						if (uParam4->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_74(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_78(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_73(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_73(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar35 = true;
					}
					if (iVar8 > Global_2635559.f_2491.f_6[iVar24 /*10*/] || (iVar8 == Global_2635559.f_2491.f_6[iVar24 /*10*/] && fVar3 > Global_2635559.f_2491.f_6[iVar24 /*10*/].f_3))
					{
						Var25.f_4 = { Param0 };
						Var25.f_7 = fParam3;
						Var25.f_0 = iVar8;
						Var25.f_3 = fVar3;
						func_76(Var25, iVar24);
						Global_2635559.f_2491.f_2 = 1;
						return;
					}
				}
			}
			iVar24++;
		}
	}
}

float func_73(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_74(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam4 && !bParam6)
	{
		if (func_26(unk_0x93E99A2DBCBA9CFA(), 1, 1))
		{
			if (!unk_0x72474BA05A104E1E())
			{
				if (unk_0x67670574D396B9A8(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_26(iVar1, 1, 1))
		{
			if (!func_144(iVar1, 0) && unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x93E99A2DBCBA9CFA()))
				{
					if (func_75(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x4292F1DE8BA2D22E(iVar1) != unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()))) || unk_0x4292F1DE8BA2D22E(iVar1) == -1)
							{
								if (unk_0x9BC088F261691923(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x4292F1DE8BA2D22E(iVar1) != iParam7 || unk_0x4292F1DE8BA2D22E(iVar1) == -1)
						{
							if (unk_0x9BC088F261691923(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return unk_0x71D93B57D07F9804(fVar3);
	}
	return -1f;
}

int func_75(int iParam0)
{
	if (unk_0x8FC78693DAAD4372(unk_0xF2CFBB1105511E1A(iParam0)) || Global_2657589[iParam0 /*466*/].f_255)
	{
		return 1;
	}
	return 0;
}

void func_76(struct<10> Param0, int iParam10)
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2635559.f_2491.f_6[iParam10 /*10*/] };
	Global_2635559.f_2491.f_6[iParam10 /*10*/] = { Param0 };
	if (iParam10 < 4)
	{
		func_76(Var0, iParam10 + 1);
	}
}

void func_77(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	float fVar12;
	int iVar13;
	
	Var1.f_2 = 1176256410;
	iVar11 = func_71();
	if (Param0.f_0 > iVar11)
	{
		iVar11 = Param0.f_0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638502[iVar0 /*10*/] < iVar11)
		{
			Global_2638502[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0.f_0 < iVar11)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638502[iVar0 /*10*/] == 0)
		{
			Global_2638502[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar12 = 9999.9f;
	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638502[iVar0 /*10*/] > 0)
		{
			if (Global_2638502[iVar0 /*10*/].f_1 < fVar12)
			{
				fVar12 = Global_2638502[iVar0 /*10*/].f_1;
				iVar13 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar13 > -1)
	{
		Global_2638502[iVar13 /*10*/] = { Param0 };
	}
}

float func_78(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar11 = iVar0;
		if (func_26(iVar11, 1, 1) || (iParam7 == 1 && func_26(iVar11, 0, 0)))
		{
			if (!iVar11 == unk_0x93E99A2DBCBA9CFA() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_80(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0x4292F1DE8BA2D22E(iVar11) == unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()))
					{
						if (!unk_0x4292F1DE8BA2D22E(iVar11) == -1 || !func_56(unk_0x93E99A2DBCBA9CFA(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iVar11) || !bParam6)
					{
						if (func_75(iVar11))
						{
							Var5 = { func_79(iVar11) };
							if (!iVar11 == unk_0x93E99A2DBCBA9CFA())
							{
								Var8 = { unk_0x3079F36CF73A06A0(unk_0xF2CFBB1105511E1A(iVar11)) };
							}
							else
							{
								Var8 = { Var5 };
							}
							if (!bParam6)
							{
								if (Var5.f_2 < -100f)
								{
									Var5.f_2 = Param0.f_2;
								}
								if (Var8.f_2 < -100f)
								{
									Var8.f_2 = Param0.f_2;
								}
							}
							fVar1 = unk_0x2E496FE654DA4166(Param0, Var5, 1);
							fVar2 = unk_0x2E496FE654DA4166(Param0, Var8, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

Vector3 func_79(int iParam0)
{
	return unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(iParam0), 0);
}

int func_80(int iParam0)
{
	if (func_26(iParam0, 0, 1))
	{
		if (!func_89(iParam0))
		{
			if (unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iParam0))
			{
				if (!unk_0x4292F1DE8BA2D22E(iParam0) == unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()))
				{
					if (func_42(unk_0x93E99A2DBCBA9CFA(), 1, 0))
					{
						if (!func_86(unk_0x4292F1DE8BA2D22E(iParam0), unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()), 0, -1))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x4292F1DE8BA2D22E(iParam0) == -1 && unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) == -1)
				{
					if (!func_42(unk_0x93E99A2DBCBA9CFA(), 1, 0))
					{
						if (!func_81(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_81(int iParam0)
{
	if (func_85(unk_0x93E99A2DBCBA9CFA(), iParam0))
	{
		return 1;
	}
	Global_2764201 = { func_84(iParam0) };
	if (unk_0xF27423FF2D483551(&Global_2764201))
	{
		return 1;
	}
	if (func_82(unk_0x93E99A2DBCBA9CFA(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_83(iParam0);
	if (!iVar0 == func_27())
	{
		if (iVar0 == func_83(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_83(int iParam0)
{
	if (iParam0 != func_27())
	{
		return Global_1894573[iParam0 /*608*/].f_10;
	}
	return func_27();
}

struct<13> func_84(var uParam0)
{
	struct<13> Var0;
	
	unk_0x23BD70608BA4F8D9(uParam0, &Var0, 13);
	return Var0;
}

int func_85(int iParam0, var uParam1)
{
	if (unk_0xE52BCF7D5014E06E())
	{
		Global_2764201 = { func_84(iParam0) };
		Global_2764214 = { func_84(uParam1) };
		if (unk_0x7DD2CE58D33238D9(&Global_2764201))
		{
			if (unk_0x7DD2CE58D33238D9(&Global_2764214))
			{
				unk_0xEB463FCE742A28B2(&Global_2764131, 35, &Global_2764201);
				unk_0xEB463FCE742A28B2(&Global_2764166, 35, &Global_2764214);
				if (Global_2764131 == Global_2764166)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_86(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058070.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23341, bVar0))
			{
				bVar1 = Global_1058070.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_87(iParam0, bVar0, iParam1, bVar1) || !func_87(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_87(iParam0, bVar0, iParam1, bVar1) || !func_87(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_87(iParam0, bVar0, iParam1, bVar1) || !func_87(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_87(iParam0, bVar0, iParam1, bVar1) || !func_87(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 0);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 1);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 2);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 4);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 5);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 6);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 8);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 9);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 10);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 12);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 13);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 14);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_87(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23342, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_1265[iParam2 /*23466*/].f_23342, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		iVar4 = unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar1 = iVar5;
		if (((!func_26(iVar1, 1, 1) || func_144(iVar1, 0)) || BitTest(Global_2657589[iVar1 /*466*/].f_199, 2)) || func_88(iVar1))
		{
		}
		else if (unk_0x4292F1DE8BA2D22E(iVar1) != iParam2)
		{
		}
		else
		{
			uVar2 = unk_0xF2CFBB1105511E1A(iVar1);
			if (unk_0x66599E73DBA5A850(uVar2))
			{
			}
			else
			{
				iVar3 = unk_0x504B9BB48D41C264(uVar2);
				if (iVar4 == joaat("mp_f_freemode_01") || iVar4 == joaat("mp_m_freemode_01"))
				{
					if (iVar3 == joaat("mp_f_freemode_01") || iVar3 == joaat("mp_m_freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_88(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}

int func_89(int iParam0)
{
	if (func_144(iParam0, 0))
	{
		return 1;
	}
	if (func_90())
	{
		if (iParam0 == unk_0x93E99A2DBCBA9CFA())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657589[iParam0 /*466*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_90()
{
	return BitTest(Global_2621446, 3);
}

float func_91(struct<3> Param0)
{
	var uVar0;
	
	return func_92(Param0, &(Global_2635559.f_45), &uVar0);
}

float func_92(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if ((uParam3[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam3[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*12*/]), Param0);
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2635559.f_2735) * (uParam3[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (Param0.f_0 < (*uParam3)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0 /*12*/] - Param0.f_0));
					}
					else if (Param0.f_0 > (uParam3[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (Param0.f_0 - (uParam3[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam3[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam3[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.f_1 - (uParam3[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam3[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam3[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.f_2 - (uParam3[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_93(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (unk_0xBBDA792448DB5A89(iParam9) / unk_0xBBDA792448DB5A89(8));
	}
	if (bParam6)
	{
		fVar0 = func_73(unk_0x2A488C176D52CCA5(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_78(Param0, 1, 0, 0, 1, 0);
	fVar0 = func_73(fVar4, 0f, func_101(), func_99(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_97(Param0);
	fVar0 = func_73(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) == -1 && !func_56(unk_0x93E99A2DBCBA9CFA(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_95(Param0, unk_0x93E99A2DBCBA9CFA(), 0);
	fVar0 = func_73(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_94(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_73(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_73(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_73(unk_0x2A488C176D52CCA5(Global_2635559.f_512, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_94(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0x0754F207039DA45A(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0x6683A7D1A593A7B4(uVar3))
	{
		unk_0xBCE3586A35418057(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0x2655A8EC638E4FD1((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_95(struct<3> Param0, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_26(iParam3, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam3 == iVar2 || iParam4 == 1)
			{
				iVar3 = iVar2;
				if (func_26(iVar3, 0, 1))
				{
					if (unk_0x4292F1DE8BA2D22E(iVar3) != unk_0x4292F1DE8BA2D22E(iParam3) || (unk_0x4292F1DE8BA2D22E(iVar3) == -1 && unk_0x4292F1DE8BA2D22E(iParam3) == -1))
					{
						if (!func_96(iVar3, iParam3))
						{
							if (Global_2648605.f_261[iVar2])
							{
								fVar1 = unk_0x2A488C176D52CCA5(Global_2648605.f_131[iVar2 /*3*/], Param0);
								if (fVar1 < fVar0)
								{
									fVar0 = fVar1;
								}
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

int func_96(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_27() && iParam1 != func_27())
	{
		iVar0 = func_83(iParam0);
		if (iVar0 != func_27())
		{
			return iVar0 == func_83(iParam1);
		}
	}
	return 0;
}

float func_97(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0xA5D17FEE5372152E(unk_0xC1A5EC5C986B98AD(), &uVar6, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0x7DE17ACDD8BA2642(uVar6[iVar2]))
		{
			if (!unk_0x055111B11E6624FD(uVar6[iVar2], 0))
			{
				if (func_98(uVar6[iVar2]))
				{
					Var3 = { unk_0x30BE8A934C020461(uVar6[iVar2], 1) };
					fVar1 = unk_0x2E496FE654DA4166(Param0, Var3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2635559.f_2934)
	{
		if (Global_1058070.f_267 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_1058070.f_267)
			{
				if (unk_0x7DE17ACDD8BA2642(Global_1058070.f_152[iVar2]))
				{
					if (!unk_0x055111B11E6624FD(Global_1058070.f_152[iVar2], 0))
					{
						if (func_98(Global_1058070.f_152[iVar2]))
						{
							Var3 = { unk_0x30BE8A934C020461(Global_1058070.f_152[iVar2], 1) };
							fVar1 = unk_0x2E496FE654DA4166(Param0, Var3, 1);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_98(var uParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x3C6D9801F427CC2E(uParam0);
	switch (unk_0x8B48F80291B64EA6(uVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0xCBAD2BB7D5709DFA(Global_1837175[unk_0x93E99A2DBCBA9CFA()]))
	{
		switch (unk_0x8B48F80291B64EA6(uVar0, Global_1837175[unk_0x93E99A2DBCBA9CFA()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/] == 0)
	{
		iVar1 = unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0xCBAD2BB7D5709DFA(Global_1836885[iVar1]))
			{
				switch (unk_0x8B48F80291B64EA6(uVar0, Global_1836885[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_99()
{
	if (func_100())
	{
		if ((unk_0xAF4434A9F7368F35(Global_2635559.f_45.f_67) || unk_0x2D92D1084D213DC4(Global_2635559.f_45.f_67)) || Global_2635559.f_45.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_100()
{
	if (Global_2635559.f_45.f_65 && !Global_2635559.f_45.f_304)
	{
		if (!func_89(unk_0x93E99A2DBCBA9CFA()))
		{
			return 1;
		}
	}
	return 0;
}

float func_101()
{
	if (func_100())
	{
		if ((unk_0xAF4434A9F7368F35(Global_2635559.f_45.f_67) || unk_0x2D92D1084D213DC4(Global_2635559.f_45.f_67)) || Global_2635559.f_45.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_102(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0x0B5B560B8AF5E5BF(Param0, fParam7)) || (fVar0 > 0f && unk_0x5829BBF74D541BA8(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0xA6FBF829D141DA09(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0xA6FBF829D141DA09(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_103(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_107(*uParam0, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_106(*uParam0, uParam0->f_3, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_104(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_104(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, struct<3> Param10, float fParam13)
{
	struct<3> Var0[8];
	int iVar25;
	
	func_105(Param0, Param3, fParam6, &Var0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x9E76D45F14E2C578(Var0[iVar25 /*3*/], Param7, Param10, fParam13, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_105(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	var uVar7;
	
	if (Param0.f_2 == Param3.f_2)
	{
		Param3.f_2 = (Param3.f_2 + 0.01f);
	}
	Var0 = { Param0 - Param3 };
	Var3 = { func_17(Var0, Var0.f_0, Var0.f_1, 0f) };
	Var3 = { Var3 / FtoV(unk_0x652D2EEEF1D3E62C(Var3)) };
	Var3 = { Var3 * FtoV((fParam6 * 0.5f)) };
	if (Param0.f_2 > Param3.f_2)
	{
		uVar6 = Param3.f_2;
		uVar7 = Param0.f_2;
	}
	else
	{
		uVar6 = Param0.f_2;
		uVar7 = Param3.f_2;
	}
	*(uParam7[0 /*3*/]) = { Vector(uVar6, Param0.f_1, Param0.f_0) + Var3 };
	*(uParam7[1 /*3*/]) = { Vector(uVar6, Param0.f_1, Param0.f_0) - Var3 };
	*(uParam7[2 /*3*/]) = { Vector(uVar7, Param0.f_1, Param0.f_0) - Var3 };
	*(uParam7[3 /*3*/]) = { Vector(uVar7, Param0.f_1, Param0.f_0) + Var3 };
	*(uParam7[4 /*3*/]) = { Vector(uVar6, Param3.f_1, Param3.f_0) + Var3 };
	*(uParam7[5 /*3*/]) = { Vector(uVar6, Param3.f_1, Param3.f_0) - Var3 };
	*(uParam7[6 /*3*/]) = { Vector(uVar7, Param3.f_1, Param3.f_0) - Var3 };
	*(uParam7[7 /*3*/]) = { Vector(uVar7, Param3.f_1, Param3.f_0) + Var3 };
}

int func_106(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12)
{
	struct<3> Var0[8];
	int iVar25;
	
	Var0[0 /*3*/] = { Param0.f_0, Param0.f_1, Param0.f_2 };
	Var0[1 /*3*/] = { Param0.f_0, Param0.f_1, Param3.f_2 };
	Var0[2 /*3*/] = { Param0.f_0, Param3.f_1, Param3.f_2 };
	Var0[3 /*3*/] = { Param0.f_0, Param3.f_1, Param0.f_2 };
	Var0[4 /*3*/] = { Param3.f_0, Param0.f_1, Param0.f_2 };
	Var0[5 /*3*/] = { Param3.f_0, Param0.f_1, Param3.f_2 };
	Var0[6 /*3*/] = { Param3.f_0, Param3.f_1, Param3.f_2 };
	Var0[7 /*3*/] = { Param3.f_0, Param3.f_1, Param0.f_2 };
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x9E76D45F14E2C578(Var0[iVar25 /*3*/], Param6, Param9, fParam12, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_107(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, float fParam10)
{
	struct<3> Var0[4];
	int iVar13;
	
	Var0[0 /*3*/] = { Param0 + Vector(0f, fParam3, 0f) };
	Var0[1 /*3*/] = { Param0 + Vector(0f, (-1f * fParam3), 0f) };
	Var0[2 /*3*/] = { Param0 + Vector(0f, 0f, fParam3) };
	Var0[3 /*3*/] = { Param0 + Vector(0f, 0f, (-1f * fParam3)) };
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (!unk_0x9E76D45F14E2C578(Var0[iVar13 /*3*/], Param4, Param7, fParam10, 0, 1))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_108(struct<3> Param0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { Param0 };
	iVar4 = func_32(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2642106[iVar4])
	{
		if (func_31(Var1, &(Global_2640710[iVar4 /*155*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2640710[iVar4 /*155*/][iVar0 /*7*/] };
			*uParam4 = { Global_2640710[iVar4 /*155*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2640710[iVar4 /*155*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2642106[8])
	{
		if (func_31(Var1, &(Global_2640710[8 /*155*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2640710[8 /*155*/][iVar0 /*7*/] };
			*uParam4 = { Global_2640710[8 /*155*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2640710[8 /*155*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_109(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2635559.f_45.f_55)
	{
		if (unk_0x4D3D95146FD3490D(Global_2635559.f_45.f_56))
		{
			if (!unk_0x5B1AFB012FBCA44D(Param0))
			{
				uVar0 = unk_0x9CE0235348AE4A4D(Param0);
				if (unk_0x4D3D95146FD3490D(uVar0))
				{
					iVar1 = unk_0x04F08B8CE27A9B9B(uVar0);
					if (!iVar1 == Global_2635559.f_45.f_57)
					{
						return 0;
					}
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
	}
	return 1;
}

int func_110(struct<3> Param0)
{
	switch (Global_2635559.f_2487)
	{
		case 0:
			return func_147(Param0, Global_2635559.f_2466, Global_2635559.f_2469, 0, 0);
			break;
		
		case 1:
			return func_60(Param0, Global_2635559.f_2480, Global_2635559.f_2483, 0, 0);
			break;
		
		case 2:
			return unk_0x9E76D45F14E2C578(Param0, Global_2635559.f_2480, Global_2635559.f_2483, Global_2635559.f_2486, 0, 1);
			break;
	}
	return 0;
}

int func_111(struct<3> Param0, var uParam3, var uParam4, float fParam5)
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		fVar0 = ((uParam3[iVar1 /*4*/])->f_3 + fParam5);
		if (unk_0x2A488C176D52CCA5(*(uParam3[iVar1 /*4*/]), Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var5 = { 0f, 0f, 0f };
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		Var2 = { *(uParam4[iVar1 /*10*/]) };
		Var5 = { (uParam4[iVar1 /*10*/])->f_3 };
		fVar8 = (uParam4[iVar1 /*10*/])->f_6;
		if (unk_0x9E76D45F14E2C578(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_112(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (unk_0x2A488C176D52CCA5((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				func_19(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_113(int iParam0)
{
	switch (func_58())
	{
		case 0:
			if (!func_114(iParam0))
			{
				if (Global_1853910[iParam0 /*862*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_114(int iParam0)
{
	return Global_1853910[iParam0 /*862*/].f_192 != 0;
}

int func_115(int iParam0)
{
	if (func_42(iParam0, 1, 0))
	{
		if (Global_1853910[iParam0 /*862*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_116(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2635559.f_2625[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_117(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_48(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0xD88C7A93096DA0F7(0.01f, 360f);
			func_19(&Var1, Global_2635559.f_593, Global_2635559.f_596, 1036831949, 0, fVar4);
			if (func_49(Var1, &uVar0) || func_48(Var1))
			{
				Var1 = { *uParam0 };
				func_19(&Var1, Global_2635559.f_593, Global_2635559.f_596, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_118(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_26(unk_0x93E99A2DBCBA9CFA(), 1, 1))
		{
			if (!unk_0x72474BA05A104E1E())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x2E496FE654DA4166(func_119(unk_0x93E99A2DBCBA9CFA()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x67670574D396B9A8(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_26(iVar1, 1, 1))
		{
			if (!func_144(iVar1, 0) && unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x93E99A2DBCBA9CFA()))
				{
					if ((func_75(iVar1) || !bParam10) && !Global_2657589[iVar1 /*466*/].f_270)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x4292F1DE8BA2D22E(iVar1) == -1)
							{
								if (unk_0x4292F1DE8BA2D22E(iVar1) == unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x4292F1DE8BA2D22E(iVar1) != unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()))) || unk_0x4292F1DE8BA2D22E(iVar1) == -1)
							{
								if (unk_0x2E496FE654DA4166(func_119(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x9BC088F261691923(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x4292F1DE8BA2D22E(iVar1) != iParam8 || unk_0x4292F1DE8BA2D22E(iVar1) == -1)
						{
							if (unk_0x2E496FE654DA4166(func_119(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x9BC088F261691923(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_120() && Global_1853910[iVar0 /*862*/].f_832) && !func_4(Global_1853910[iVar0 /*862*/].f_833))
	{
		return Global_1853910[iVar0 /*862*/].f_833;
	}
	return func_79(iParam0);
}

var func_120()
{
	return Global_2683862.f_19;
}

int func_121(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_123(Param0, fParam3, iParam4, iParam5, 0) || func_122(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_122(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_34(Param0, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_26(iVar2, 0, 1) && func_26(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_123(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_26(iVar1, 0, 1) && func_26(iParam4, 0, 1))
				{
					if (unk_0x4292F1DE8BA2D22E(iVar1) == unk_0x4292F1DE8BA2D22E(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_26(iVar1, 0, 1) && func_26(iParam4, 0, 1))
				{
					if (Global_2648605.f_261[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2648605.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_79(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2648605.f_261[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2648605.f_131[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_26(iVar1, 0, 1))
				{
					if (unk_0x2A488C176D52CCA5(func_79(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_124(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15)
{
	Global_2635559.f_3 = 0;
	if (!func_121(Param0, 0.5f, unk_0x93E99A2DBCBA9CFA(), 0, 0))
	{
		Global_2635559.f_3++;
		if (bParam5)
		{
			if (func_177(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2635559.f_3 = (Global_2635559.f_3 + Global_2635559.f_2);
				if (!func_128(Param0, fParam12))
				{
					Global_2635559.f_3++;
					if (!func_33(Param0, 1056964608))
					{
						Global_2635559.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2635559.f_3 = (Global_2635559.f_3 + Global_2635559.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_177(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2635559.f_3 = (Global_2635559.f_3 + Global_2635559.f_2);
				if (!func_128(Param0, fParam12))
				{
					Global_2635559.f_3++;
					if (!func_125(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2635559.f_3++;
						if (!func_33(Param0, 1056964608))
						{
							Global_2635559.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2635559.f_3 = (Global_2635559.f_3 + Global_2635559.f_2);
			}
		}
		else if (func_177(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2635559.f_3 = (Global_2635559.f_3 + Global_2635559.f_2);
			if (!func_128(Param0, fParam12))
			{
				Global_2635559.f_3++;
				if (!func_125(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2635559.f_3++;
					if (!func_33(Param0, 1056964608))
					{
						Global_2635559.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2635559.f_3 = (Global_2635559.f_3 + Global_2635559.f_2);
		}
	}
	return 0;
}

int func_125(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x93E99A2DBCBA9CFA() == iVar1)
		{
			if ((func_26(iVar1, 1, 1) && func_75(iVar1)) && unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iVar1))
			{
				if (!func_127(unk_0x93E99A2DBCBA9CFA(), iVar1, -2, 0))
				{
					if (func_126(func_79(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_126(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	
	fParam6 = (fParam6 * -1f);
	fParam6 = (fParam6 + 360f);
	Var0.f_0 = unk_0x0BADBFA3B172435F(fParam6);
	Var0.f_1 = unk_0xD0FFB162F40A139C(fParam6);
	Var0.f_2 = 0f;
	Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	Var0 = { Var0 * Vector(fParam7, fParam7, fParam7) };
	Var3 = { Param3 + Var0 };
	Var3.f_2 = Param3.f_2;
	Var3.f_2 = (Var3.f_2 + fParam9);
	Param3.f_2 = (Param3.f_2 + fParam9);
	return unk_0x9E76D45F14E2C578(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_127(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x4292F1DE8BA2D22E(iParam0) == -1 && unk_0x4292F1DE8BA2D22E(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x4292F1DE8BA2D22E(iParam0) == unk_0x4292F1DE8BA2D22E(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x4292F1DE8BA2D22E(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x4292F1DE8BA2D22E(iParam0) == iParam2;
	}
	return unk_0x4292F1DE8BA2D22E(iParam0) == iParam2;
}

int func_128(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_26(iVar1, 1, 1) && func_75(iVar1)) && unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iVar1))
		{
			if ((unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) == -1 && unk_0x4292F1DE8BA2D22E(iVar1) == -1) && !func_56(unk_0x93E99A2DBCBA9CFA(), 1))
			{
				return 0;
			}
			else if ((unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) == -1 && !unk_0x93E99A2DBCBA9CFA() == iVar1) || !func_127(unk_0x93E99A2DBCBA9CFA(), iVar1, -2, 0))
			{
				if (unk_0x2A488C176D52CCA5(Param0, func_79(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_129(int iParam0)
{
	if ((Global_2635559.f_489 == 9 || Global_2635559.f_489 == 9) || (Global_2635559.f_489 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_130(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x93E99A2DBCBA9CFA() != iVar1) || iParam8 == 0)
		{
			if (func_26(iVar1, bParam4, bParam5))
			{
				if (iParam10 || unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iVar1))
				{
					if (!bParam7 || (!unk_0x66599E73DBA5A850(unk_0xF2CFBB1105511E1A(iVar1)) && func_75(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) != unk_0x4292F1DE8BA2D22E(iVar1))) || unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) == -1)
						{
							if (((unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) == -1 && iParam9) && bParam6) && func_81(iVar1))
							{
							}
							else if (unk_0x7DE17ACDD8BA2642(unk_0xF2CFBB1105511E1A(iVar1)))
							{
								if (unk_0x2E496FE654DA4166(func_79(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_131(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_26(iVar1, 1, 1))
			{
				if ((!func_144(iVar1, 0) && unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iVar1)) && iVar1 != unk_0x93E99A2DBCBA9CFA())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x4292F1DE8BA2D22E(iVar1) == -1)
						{
							if (unk_0x4292F1DE8BA2D22E(iVar1) == unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x4292F1DE8BA2D22E(iVar1) == iVar3)
					{
						if (unk_0x2E496FE654DA4166(func_79(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x9BC088F261691923(iVar1, Param0, fParam3))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_132(int iParam0)
{
	if (((func_56(iParam0, 1) || func_135(iParam0)) || func_134(iParam0, 0)) || func_133(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_133(int iParam0)
{
	if (!func_26(iParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_861, 2);
}

int func_134(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_135(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1894573[iVar0 /*608*/] != -1;
	}
	return 0;
}

void func_136(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var7;
	struct<3> Var17;
	struct<3> Var20;
	
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = { Var7 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!BitTest(Global_4543624[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_4543624[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_4543624[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_4543624[iVar1 /*26*/].f_6.f_2;
					func_138(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_262145.f_6293[iVar1 /*3*/], Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
			{
				Var3 = { Global_262145.f_6293[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_138(&Var3, uParam3, iVar0);
				iVar0 = *uParam3;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_262145.f_6351[iVar1 /*19*/][iVar2 /*3*/], Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_262145.f_6351[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_138(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573850)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			Var17 = { Global_1573169[iVar1 /*8*/].f_1 + Global_1573169[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var20 = { *(uParam4[iVar0 /*10*/]) + (uParam4[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (unk_0x652D2EEEF1D3E62C(*(uParam4[iVar0 /*10*/])) == 0f || unk_0x2A488C176D52CCA5(Var17, Param0) < unk_0x2A488C176D52CCA5(Var20, Param0))
			{
				Var7 = { Global_1573169[iVar1 /*8*/].f_1 };
				Var7.f_3 = { Global_1573169[iVar1 /*8*/].f_4 };
				Var7.f_6 = Global_1573169[iVar1 /*8*/].f_7;
				Var7.f_7 = { Global_4543300[iVar1 /*3*/] };
				func_137(&Var7, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_137(var uParam0, var uParam1, int iParam2)
{
	Global_2643112 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_137(&Global_2643112, uParam1, iParam2 + 1);
	}
}

void func_138(var uParam0, var uParam1, int iParam2)
{
	Global_2643108 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_138(&Global_2643108, uParam1, iParam2 + 1);
	}
}

void func_139(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2635559.f_2262 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2635559.f_2262)
		{
			if (func_140(Global_2635559.f_2263[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2635559.f_2263[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2635559.f_2263[iVar0 /*4*/] };
					fVar4 = unk_0x06A2A02CDC68090B(Var1.f_0, Var1.f_1);
				}
				func_72(Global_2635559.f_2263[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, uParam0->f_28);
				Global_2635559.f_2491++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2635559.f_2889)
	{
		func_66(&(Global_2635559.f_2491.f_6[0 /*10*/]), &(Global_2635559.f_2491.f_6[1 /*10*/]), &(Global_2635559.f_2491.f_6[2 /*10*/]));
	}
}

int func_140(struct<3> Param0, var uParam3)
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_23(Param0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		
		case 1:
		case 2:
			return func_23(Param0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		
		default:
	}
	return 0;
}

void func_141(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_61(&Param0, &Param3);
	fVar0 = (Param3.f_0 - Param0.f_0);
	*uParam6 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*uParam8 = (fVar0 * 0.5f);
}

var func_142()
{
	return Global_1573131.f_4;
}

void func_143(var uParam0, var uParam1)
{
	func_184();
	func_176(uParam0, uParam1);
}

bool func_144(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_145(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853910[iParam0 /*862*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xE6DEE82DB0922DF0(iParam0))
		{
			bVar0 = unk_0x4292F1DE8BA2D22E(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_145(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_146();
	}
	if (Global_1575040[iVar1] == 1)
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

int func_146()
{
	return Global_1574918;
}

bool func_147(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		Param0.f_2 = 0f;
		Param3.f_2 = 0f;
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (Param0.f_2 > Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (Param0.f_2 < Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
}

void func_148(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2635559.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_170(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_149(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_149(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	float fVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	var uVar30;
	struct<3> Var31;
	float fVar34;
	bool bVar35;
	
	iVar0 = 0;
	if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_45(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_169(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar5 = 0;
	iVar10 = 1;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2643122.f_162 = 0;
	Global_2643122.f_163 = 0;
	Global_2643122.f_164 = -99;
	Global_2643122.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2643122[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2643122.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_39(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = unk_0x0754F207039DA45A(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0x6683A7D1A593A7B4(iVar8))
		{
			unk_0xBCE3586A35418057(iVar8, &Var1);
			bVar12 = false;
			if (Global_2643122.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2643122.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xBD0716EB92E5A53F(iVar8)) || unk_0x452C74D04BD4A4C1(iVar8))
			{
				unk_0x84AFCB2EC2CA9FCB(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_117(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_168(Var1))
									{
										Var1 = { func_164(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51, uParam2->f_60) };
										if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
										{
											if (!func_33(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_163(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_169(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_159(Var1, fVar4, uParam2->f_34, unk_0x93E99A2DBCBA9CFA(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_45(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar19 = uParam2->f_31;
																					bVar20 = true;
																					iVar21 = 1;
																					fVar22 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						fVar22 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar22 = (fVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar20 = true;
																						iVar21 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar22 = (fVar22 * 0.375f);
																							}
																						}
																					}
																					iVar23 = 0;
																					if (!func_158(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_177(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_177(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_156(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar23 = 1;
																						}
																					}
																					if (iVar23 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar24 = func_155(Var1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2643122.f_162)
																										{
																											Global_2643122[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2643122.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2643122.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2643122.f_162 == 0)
																									{
																										Global_2643122[0 /*3*/] = { Var1 };
																										Global_2643122.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2643122.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2643122[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_154(Var1, fVar4, iVar16);
																													iVar16 = Global_2643122.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2643122.f_162++;
																									if (Global_2643122.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2643122.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2643122[Global_2643122.f_162 /*3*/] = { Var1 };
																									Global_2643122.f_121[Global_2643122.f_162] = fVar4;
																									Global_2643122.f_162++;
																									if (func_163(Var1, uParam2))
																									{
																										Global_2643122.f_163++;
																									}
																									if (Global_2643122.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2643122.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2643122.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2643122[0 /*3*/] };
						*uParam1 = Global_2643122.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2643122.f_163 > 0 && !Global_2643122.f_163 == Global_2643122.f_162)
						{
							func_152(0, uParam2);
						}
						iVar26 = unk_0x15A88CFAAFFC6C4B(0, Global_2643122.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						Var27 = { Global_2643122[0 /*3*/] };
						uVar30 = Global_2643122.f_121[0];
						Global_2643122[0 /*3*/] = { Global_2643122[iVar26 /*3*/] };
						Global_2643122.f_121[0] = Global_2643122.f_121[iVar26];
						Global_2643122[iVar26 /*3*/] = { Var27 };
						Global_2643122.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2643122[0 /*3*/] };
						*uParam1 = Global_2643122.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_151(iVar15, *uParam0, &iVar0, &Var1, &fVar4, uParam2, iVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
						Var31 = { Var1 };
						fVar34 = fVar4;
						if (!uParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_45(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_169(&Var31, bVar35))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var31 };
							*uParam1 = fVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_150(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2643122.f_164 = iVar8;
	}
	return 0;
}

void func_150(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = unk_0x2A488C176D52CCA5(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_121(*(uParam0[iVar2 /*4*/]), 5f, unk_0x93E99A2DBCBA9CFA(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_151(int iParam0, struct<3> Param1, int iParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = unk_0x15A88CFAAFFC6C4B((1 + iParam0), (40 + iParam0));
		if (unk_0xF205ECAF6E47803C(Param1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12))
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam5) > 0f)
			{
				*uParam5 = { func_164(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, iParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51, uParam7->f_60) };
				if (!func_168(*uParam5))
				{
					iVar0 = 999;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_152(int iParam0, var uParam1)
{
	if (!func_163(Global_2643122[iParam0 /*3*/], uParam1))
	{
		Global_2643122.f_162 = (Global_2643122.f_162 - 1);
		func_153(iParam0);
		if (Global_2643122.f_162 > Global_2643122.f_163)
		{
			func_152(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_152(iParam0 + 1, uParam1);
	}
}

void func_153(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2643122[iParam0 /*3*/] = { Global_2643122[iParam0 + 1 /*3*/] };
			Global_2643122.f_121[iParam0] = Global_2643122.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_154(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2643122[iParam4 /*3*/] };
	uVar3 = Global_2643122.f_121[iParam4];
	Global_2643122[iParam4 /*3*/] = { Param0 };
	Global_2643122.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2643122.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_154(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_155(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_80(iVar5))
		{
			Var1 = { func_79(iVar5) };
			fVar7 = unk_0x2A488C176D52CCA5(Param0, Var1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_156(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	int iVar4;
	struct<3> Var5;
	float fVar8;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0x93E99A2DBCBA9CFA() != iVar1) || iParam9 == 0)
		{
			if (func_26(iVar1, bParam5, bParam6))
			{
				if (unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), iVar1))
				{
					if (!bParam8 || (!unk_0x66599E73DBA5A850(unk_0xF2CFBB1105511E1A(iVar1)) && func_75(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) != unk_0x4292F1DE8BA2D22E(iVar1))) || unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) == -1)
						{
							if (((unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA()) == -1 && iParam10) && bParam7) && func_81(iVar1))
							{
							}
							else if (unk_0x7DE17ACDD8BA2642(unk_0xF2CFBB1105511E1A(iVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0x3C3D6D026CF7F51B(unk_0xF2CFBB1105511E1A(iVar1), 0))
								{
									uVar3 = unk_0x95DC39736F6748E3(unk_0xF2CFBB1105511E1A(iVar1), 0);
									if (unk_0x7DE17ACDD8BA2642(uVar3) && !unk_0x055111B11E6624FD(uVar3, 0))
									{
										iVar4 = unk_0x504B9BB48D41C264(uVar3);
										Var5 = { unk_0x30BE8A934C020461(uVar3, 0) };
										fVar8 = unk_0xD850DD08D5434072(uVar3);
										if (func_157(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_34(func_79(iVar1), Param0, fParam3, iParam4, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_157(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, int iParam10)
{
	if (func_34(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_35(Param0, fParam3, iParam4, &Global_1981305, &(Global_1981305.f_3), &(Global_1981305.f_6), 1036831949);
	func_35(Param5, fParam8, iParam9, &(Global_1981305.f_7), &(Global_1981305.f_10), &(Global_1981305.f_13), 1036831949);
	if (unk_0x3ED477BC92415F4F(Global_1981305, Global_1981305.f_3, Global_1981305.f_6, Global_1981305.f_7, Global_1981305.f_10, Global_1981305.f_13))
	{
		return 1;
	}
	return 0;
}

int func_158(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	uVar1 = unk_0xC51EF944AABAC0E5(Param0, 30f, 0, iVar0);
	if (unk_0x7DE17ACDD8BA2642(uVar1) && !unk_0x055111B11E6624FD(uVar1, 0))
	{
		iVar2 = unk_0x504B9BB48D41C264(uVar1);
		Var3 = { unk_0x30BE8A934C020461(uVar1, 0) };
		fVar6 = unk_0xD850DD08D5434072(uVar1);
		if (func_157(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	uVar1 = unk_0xC51EF944AABAC0E5(Param0, 30f, 0, iVar0);
	if (unk_0x7DE17ACDD8BA2642(uVar1) && !unk_0x055111B11E6624FD(uVar1, 0))
	{
		iVar2 = unk_0x504B9BB48D41C264(uVar1);
		Var3 = { unk_0x30BE8A934C020461(uVar1, 0) };
		fVar6 = unk_0xD850DD08D5434072(uVar1);
		if (func_157(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_159(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_162(Param0, fParam3, iParam4, iParam5, iParam6) || func_160(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_160(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_161(Param0, iParam4, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_157(Param0, fParam3, iParam4, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_26(iVar2, 0, 1) && func_26(iParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_161(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_41(iParam3, 1008981770);
	fVar1 = func_41(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_162(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_26(iVar1, 0, 1) && func_26(iParam5, 0, 1))
			{
				if (Global_2648605.f_261[iVar0])
				{
					if (func_34(Global_2648605.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_34(func_79(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2648605.f_261[iVar0])
			{
				if (func_34(Global_2648605.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_26(iVar1, 0, 0))
			{
				if (unk_0x7DE17ACDD8BA2642(unk_0xF2CFBB1105511E1A(iVar1)))
				{
					if (func_34(func_79(iVar1), Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_163(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_147(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_60(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x9E76D45F14E2C578(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_164(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15, var uParam16)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	
	if (bParam15)
	{
		if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
		{
			if (!func_167(Param0, *uParam3, Param6))
			{
				*uParam3 = (*uParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0x84AFCB2EC2CA9FCB(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x2826D335F2B1621B(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
		if (iVar8 == iVar9)
		{
			*uParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (unk_0x2D92D1084D213DC4(iParam11) && func_166(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *uParam12)
		{
			*uParam3 = (*uParam3 + 180f);
			if (*uParam3 > 360f)
			{
				*uParam3 = (*uParam3 + -360f);
			}
		}
		if (*uParam3 <= 90f || *uParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (unk_0xBBDA792448DB5A89(iVar8) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * unk_0xBBDA792448DB5A89(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (unk_0xBBDA792448DB5A89(iVar9) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * unk_0xBBDA792448DB5A89(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0.95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_165(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_165(iParam11, 1.5f);
				}
				if (fVar14 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar14 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
	{
		if (!func_167(Param0, *uParam3, Param6))
		{
			if ((bParam5 || uParam16) || ((uVar4 & 1024 != 0 || Param0.f_2 == 0f) && bParam10))
			{
				*uParam3 = (*uParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	Var0 = { unk_0xF2A6E8EA57F9D501(Param0, *uParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x833D59D9DD080BB6(Param0, *uParam3, &Var15))
		{
			Var18 = { Var15 - Param0 };
			if (!iParam11 == 0)
			{
				Var21 = { Var18 / FtoV(unk_0x652D2EEEF1D3E62C(Var18)) };
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_165(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_165(iParam11, 1.5f);
				}
				Var21 = { Var21 * FtoV((fVar14 * 0.5f)) };
				Var18 = { Var18 - Var21 };
				Var15 = { Param0 + Var18 };
			}
			Var21 = { Var0 - Var15 };
			Var0 = { Var15 };
		}
	}
	return Var0;
}

float func_165(int iParam0, float fParam1)
{
	float fVar0;
	float fVar3;
	float fVar6;
	
	func_36(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_166(struct<3> Param0)
{
	float fVar0;
	
	if (unk_0xDE209AFE421606C6(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_167(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_20(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_16(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_168(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_32(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2642829[iVar1])
	{
		if (func_31(Param0, &(Global_2642126[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2642829[8])
	{
		if (func_31(Param0, &(Global_2642126[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_169(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2635559.f_26.f_18)
	{
		switch (Global_2635559.f_26.f_17)
		{
			case 0:
				if (func_147(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_60(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x9E76D45F14E2C578(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, Global_2635559.f_26.f_16, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_21(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, Global_2635559.f_26.f_16, Global_2635559.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_170(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	bool bVar12;
	int iVar13;
	float fVar14;
	struct<3> Var15;
	var uVar18;
	
	if (Global_2635559.f_1754 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_45(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_169(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2643122.f_162 = 0;
		Global_2643122.f_163 = 0;
		iVar7 = 0;
		while (iVar7 < 40)
		{
			Global_2643122[iVar7 /*3*/] = { 0f, 0f, 0f };
			Global_2643122.f_121[iVar7] = 0f;
			iVar7++;
		}
		if (uParam2->f_30)
		{
			func_173(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_172();
		}
		else
		{
			func_171();
		}
		iVar1 = 0;
		while (iVar1 < Global_2635559.f_1754)
		{
			iVar2 = Global_2635559.f_2160[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2635559.f_1755[iVar2 /*4*/] };
				fVar6 = Global_2635559.f_1755[iVar2 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(Var3) > 0f)
				{
					if ((uParam2->f_57 && unk_0x2A488C176D52CCA5(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_159(Var3, fVar6, uParam2->f_34, unk_0x93E99A2DBCBA9CFA(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_45(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar8 = uParam2->f_31;
										bVar9 = true;
										iVar10 = 1;
										fVar11 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar8 = 0;
											bVar9 = false;
											iVar10 = 0;
											fVar11 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar8 = 0;
											bVar9 = false;
											iVar10 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar11 = (fVar11 * 0.375f);
											}
										}
										else
										{
											bVar9 = true;
											iVar10 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar11 = (fVar11 * 0.375f);
												}
											}
										}
										bVar12 = false;
										if (!func_158(Var3, fVar6, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_177(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar12 = true;
												}
											}
											else if (func_177(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_156(Var3, fVar6, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar12 = true;
											}
										}
										if (bVar12)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar14 = 0f;
												if (uParam2->f_52)
												{
													iVar13 = func_155(Var3, uParam2->f_54, &fVar14);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar13 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar13 < uParam2->f_53)
														{
															iVar7 = 0;
															while (iVar7 < Global_2643122.f_162)
															{
																Global_2643122[iVar7 /*3*/] = { 0f, 0f, 0f };
																Global_2643122.f_121[iVar7] = 0f;
																iVar7++;
															}
															Global_2643122.f_162 = 0;
															uParam2->f_53 = iVar13;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2643122.f_162 == 0)
														{
															Global_2643122[0 /*3*/] = { Var3 };
															Global_2643122.f_121[0] = fVar6;
														}
														else
														{
															iVar7 = 0;
															while (iVar7 < Global_2643122.f_162 + 1)
															{
																if (iVar7 < 40)
																{
																	if (unk_0xB7A628320EFF8E47(Var3, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2643122[iVar7 /*3*/], uParam2->f_35))
																	{
																		func_154(Var3, fVar6, iVar7);
																		iVar7 = Global_2643122.f_162 + 1;
																	}
																}
																iVar7++;
															}
														}
														Global_2643122.f_162++;
														if (Global_2643122.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2635559.f_1754;
															}
															else if (Global_2643122.f_162 == 40)
															{
																iVar1 = Global_2635559.f_1754;
															}
														}
													}
													else
													{
														Global_2643122[Global_2643122.f_162 /*3*/] = { Var3 };
														Global_2643122.f_121[Global_2643122.f_162] = fVar6;
														Global_2643122.f_162++;
														if (Global_2643122.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2635559.f_1754;
															}
															else if (Global_2643122.f_162 == 40)
															{
																iVar1 = Global_2635559.f_1754;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar6;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar6;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2643122.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2643122[0 /*3*/] };
				*uParam1 = Global_2643122.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2643122.f_163 > 0 && !Global_2643122.f_163 == Global_2643122.f_162)
				{
					func_152(0, uParam2);
				}
				iVar0 = unk_0x15A88CFAAFFC6C4B(0, Global_2643122.f_162);
				Var15 = { Global_2643122[0 /*3*/] };
				uVar18 = Global_2643122.f_121[0];
				Global_2643122[0 /*3*/] = { Global_2643122[iVar0 /*3*/] };
				Global_2643122.f_121[0] = Global_2643122.f_121[iVar0];
				Global_2643122[iVar0 /*3*/] = { Var15 };
				Global_2643122.f_121[iVar0] = uVar18;
				*uParam0 = { Global_2643122[0 /*3*/] };
				*uParam1 = Global_2643122.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2635559.f_1754 > 0)
			{
				iVar0 = unk_0x15A88CFAAFFC6C4B(0, Global_2635559.f_1754);
				*uParam0 = { Global_2635559.f_1755[iVar0 /*4*/] };
				*uParam1 = Global_2635559.f_1755[iVar0 /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_171()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2635559.f_1754)
	{
		Global_2635559.f_2160[iVar0] = iVar0;
		iVar0++;
	}
}

void func_172()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2635559.f_1754)
	{
		Global_2635559.f_2160[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2635559.f_1754)
	{
		iVar1 = unk_0x15A88CFAAFFC6C4B(0, Global_2635559.f_1754);
		iVar2 = unk_0x15A88CFAAFFC6C4B(0, Global_2635559.f_1754);
		uVar3 = Global_2635559.f_2160[iVar1];
		Global_2635559.f_2160[iVar1] = Global_2635559.f_2160[iVar2];
		Global_2635559.f_2160[iVar2] = uVar3;
		iVar0++;
	}
}

void func_173(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2635559.f_1754)
	{
		uVar1 = func_174(Param0, fVar0, &fVar0);
		Global_2635559.f_2160[iVar2] = uVar1;
		iVar2++;
	}
}

int func_174(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2635559.f_1754)
	{
		fVar2 = unk_0xB7A628320EFF8E47(Param0, Global_2635559.f_1755[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

bool func_175(int iParam0)
{
	return iParam0 == 50;
}

void func_176(var uParam0, var uParam1)
{
	unk_0x71F08D3A3C5EA09B(uParam0, uParam1, 0.1f);
	Global_2635559.f_2474 = unk_0xAF908D5E2416DA93();
	Global_2635559.f_2472 = 1;
	Global_2635559.f_2475 = unk_0x0DB7F8294D73598B();
}

int func_177(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2635559.f_2 = 0;
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
		if (unk_0xA6FBF829D141DA09(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (bParam13)
	{
		if (unk_0xE2D062C14C126762(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (fParam14 > 0f)
	{
		if (func_130(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_118(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2635559.f_2++;
	return 1;
}

void func_178()
{
	func_183();
	func_182();
	func_181();
	func_180();
	func_179();
}

void func_179()
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 128)
	{
		Global_2638502[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_180()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2635559.f_2491.f_90[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_181()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2635559.f_2491.f_57[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_182()
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 5)
	{
		Global_2635559.f_2491.f_6[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_183()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2635559.f_2491 = { Var0 };
}

void func_184()
{
	if (Global_2635559.f_2472)
	{
		if (unk_0xAF908D5E2416DA93() == Global_2635559.f_2474)
		{
			unk_0x92A550B29F3691DA();
		}
		else
		{
			unk_0x92A550B29F3691DA();
		}
		Global_2635559.f_2472 = 0;
	}
}

int func_185(bool bParam0)
{
	if (unk_0x72474BA05A104E1E())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_186(struct<3> Param0, float fParam3, var uParam4, var uParam5, var uParam6)
{
	struct<17> Var0;
	struct<18> Var34;
	struct<3> Var65;
	
	if (uParam6->f_5 > (fParam3 - 20f))
	{
		uParam6->f_5 = (fParam3 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var34.f_16 = 1;
	Var34.f_22 = 1;
	Var34.f_23 = 1;
	Var34.f_24 = 1;
	Var34.f_28 = -1;
	Var34 = { Param0 };
	Var34.f_3 = uParam6->f_11;
	Var34.f_4 = fParam3;
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 0;
	Var34.f_15 = 0;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	if (func_9(&Var34, uParam6, &Var0))
	{
		if ((uParam6->f_12 > 0f && uParam6->f_7) && uParam6->f_8)
		{
			Var65 = { Param0 - Var0[0 /*3*/] };
			if (Var65.f_2 > uParam6->f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_16[0] = uParam6->f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*uParam5 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_187(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_188(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xE85391CF212DE622())
		{
			func_189(uParam0, 0, 0);
		}
	}
}

void func_189(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xA26A9A07F761D8F8() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x0DB7F8294D73598B();
			}
			else
			{
				*uParam0 = unk_0xB78F034955403399();
			}
		}
		else
		{
			*uParam0 = unk_0xA5E11AF0A2B928C1();
		}
		uParam0->f_1 = 1;
	}
}

void func_190()
{
	switch (Local_71[unk_0xD378D2332270959A() /*3*/].f_2)
	{
		case 0:
			func_215();
			func_213();
			if (func_202())
			{
				func_194();
				func_193();
				func_191(35);
				Local_71[unk_0xD378D2332270959A() /*3*/].f_2 = 1;
			}
			else if (Local_60.f_8 >= 1)
			{
				func_193();
				Local_71[unk_0xD378D2332270959A() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_60.f_8 >= 2)
			{
				Local_71[unk_0xD378D2332270959A() /*3*/].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_191(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_9036)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_192() /*5568*/].f_681.f_4242[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574742.f_1[iVar0] == -1)
			{
				Global_1574742.f_1[iVar0] = iParam0;
				Global_1574742 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_192()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_193()
{
	if (unk_0xCE4AAA035282336C(uLocal_170))
	{
		unk_0x45533C09A6C9B409(&uLocal_170);
	}
}

void func_194()
{
	if (!BitTest(Global_2672505.f_3689, 0))
	{
		unk_0xECDAB41968FF21A8(&(Global_2672505.f_3689), 0);
		func_195();
	}
	else
	{
		unk_0xECDAB41968FF21A8(&(Global_2672505.f_3689), 1);
	}
}

void func_195()
{
	func_196(1189, -1);
}

void func_196(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_200(iParam0, func_201(iParam1), 0);
	iVar0++;
	if (!func_199(iParam0))
	{
		func_198(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_197(iParam0, iVar0, iParam1, 1);
	}
}

void func_197(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2805027[iParam0 /*3*/][func_201(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1665566[func_201(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1665572[func_201(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1665578[func_201(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1665584[func_201(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1665590[func_201(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1665536[func_201(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1665542[func_201(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1665548[func_201(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1665554[func_201(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1665560[func_201(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1665506[func_201(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1665512[func_201(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1665518[func_201(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1665524[func_201(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1665530[func_201(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1665596[func_201(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1665602[func_201(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1665608[func_201(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1665614[func_201(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1665620[func_201(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1665626[func_201(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1665632[func_201(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1665638[func_201(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1665644[func_201(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2851323[0 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2851323[1 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2851323[2 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2851323[3 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 12424:
			Global_2851502[func_201(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1665650[func_201(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1665656[func_201(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1665662[func_201(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1665668[func_201(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1665674[func_201(iParam2)] = iParam1;
			break;
		
		case 11803:
			Global_1665680[func_201(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1665686[func_201(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2851411[0 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2851411[1 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2851411[2 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2851411[3 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2851411[4 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2851505[0 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2851505[1 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2851505[2 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2851505[3 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2851505[4 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2851521[0 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2851521[1 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2851521[2 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2851521[3 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2851521[4 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2851411[5 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2851323[4 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2851537[func_201(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2851546[func_201(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2851540[func_201(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2851549[func_201(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2851543[func_201(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2851552[func_201(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2851555[func_201(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2851411[6 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2851323[5 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2851411[7 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2851323[6 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2851411[8 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2851323[7 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2851411[9 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2851323[8 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2851411[10 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2851323[9 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2851411[11 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2851323[10 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2851411[12 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2851323[11 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2851411[13 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2851323[12 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2851411[14 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2851323[13 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2851411[15 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2851323[14 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2851411[16 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2851323[15 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2851411[17 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2851323[16 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2851323[17 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2851323[18 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2851323[19 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2851323[20 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2851558[func_201(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2851561[func_201(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2851564[func_201(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2851567[func_201(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2851570[func_201(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2851573[func_201(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2851576[func_201(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2851579[func_201(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2851582[func_201(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2851585[func_201(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2851588[func_201(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2851591[func_201(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2851594[func_201(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2851597[func_201(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2851323[21 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2851411[23 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2851323[22 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2851411[24 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2851323[23 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2851323[24 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2851323[25 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2851411[27 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2851323[26 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2851411[28 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2851323[27 /*3*/][func_201(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_198(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_201(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
}

int func_199(int iParam0)
{
	if (Global_1665487)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8729:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8731:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8733:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8735:
			case 1304:
			case 7236:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8734:
			case 9538:
			case 11803:
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 12424:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3060:
			case 3235:
			case 3237:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3230:
			case 3224:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3671:
			case 3692:
			case 3233:
			case 3232:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 4032:
			case 4031:
			case 6113:
			case 6112:
			case 6171:
			case 6170:
			case 6536:
			case 6535:
			case 6549:
			case 6548:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 6568:
			case 6567:
			case 7286:
			case 7288:
			case 7290:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8297:
			case 8905:
			case 8013:
			case 8537:
			case 8980:
			case 8982:
			case 8983:
			case 8985:
			case 9624:
			case 9913:
			case 10441:
			case 10443:
			case 10444:
			case 10446:
				return 1;
				break;
			}
	}
	return 0;
}

int func_200(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805027[iParam0 /*3*/][func_201(iParam1)];
		if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_201(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_146();
		if (iVar1 > -1)
		{
			Global_2804739 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2804739 = 1;
		}
	}
	return iVar0;
}

int func_202()
{
	struct<14> Var0;
	
	if (unk_0x7E2E2E8A648611F4(Local_60.f_2))
	{
		if (unk_0x5E6D8811A0BD0954(Local_60.f_2))
		{
			if (unk_0x836874EEF89A8AC0(unk_0xDCE61FCD9D7F205E(Local_60.f_2), unk_0xC1A5EC5C986B98AD()) && func_212(Local_60.f_2))
			{
				func_211(&(Local_60.f_2));
				if (unk_0xCE4AAA035282336C(uLocal_170))
				{
					unk_0x45533C09A6C9B409(&uLocal_170);
				}
				if (!func_210(1))
				{
					func_205("ABB_BOXCT", 0);
				}
				Var0.f_2 = -1824270533;
				Var0.f_10 = unk_0x93E99A2DBCBA9CFA();
				Var0.f_3 = uLocal_169;
				func_203(Var0, func_204(1));
				unk_0xECDAB41968FF21A8(&(Local_71[unk_0xD378D2332270959A() /*3*/].f_1), 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_203(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 548471420;
	Param0.f_1 = unk_0x93E99A2DBCBA9CFA();
	if (!iParam14 == 0)
	{
		unk_0x46F55A5B9F053761(1, &Param0, 14, iParam14);
	}
}

int func_204(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x1C57E792CD67EF97())
	{
		if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iVar1)))
		{
			iVar2 = unk_0xFE2D0B37A9596A4C(unk_0x74A08123C183740A(iVar1));
			if (func_26(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x93E99A2DBCBA9CFA() || iParam0)
				{
					unk_0xECDAB41968FF21A8(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_205(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	unk_0xD30970E11AD0FF0D(sParam0);
	iVar0 = unk_0xEAFC6135DF75DE92(0, 1);
	func_206(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_206(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_209() || !unk_0x1758F8A8511510AB()) || !func_144(unk_0x93E99A2DBCBA9CFA(), 0))
	{
		return;
	}
	iVar0 = func_207(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1944061.f_5[iVar0 /*53*/] = iParam0;
		Global_1944061.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1944061.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1944061.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1944061.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1944061.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1944061.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_207(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1944061 - 1))
	{
		if (iParam0 > Global_1944061.f_5[iVar0 /*53*/].f_1)
		{
			func_208(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1944061++;
	if (Global_1944061 > 5)
	{
		Global_1944061 = 5;
		return Global_1944061;
	}
	return (Global_1944061 - 1);
}

void func_208(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1944061.f_5[iVar0 /*53*/] = { Global_1944061.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_209()
{
	return unk_0x7681F180D7938DA8(-1762644250);
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1889846 > 0;
		
		case 2:
			return Global_1889846.f_1 > 0;
		
		case 3:
			return Global_1889846.f_2 > 0;
		
		case 4:
			return Global_1889846.f_4 > 0;
		
		case 5:
			return Global_1889846.f_3 > 0;
		
		default:
	}
	return 0;
}

void func_211(var uParam0)
{
	var uVar0;
	
	if (unk_0x7E2E2E8A648611F4(*uParam0))
	{
		if (!unk_0xFE2AB315FD8C7A6F(*uParam0))
		{
		}
	}
	if (unk_0x5E6D8811A0BD0954(*uParam0))
	{
		uVar0 = unk_0x177F7E959D2D410B(*uParam0);
		unk_0x782D744058B1DFA3(&uVar0);
	}
}

int func_212(var uParam0)
{
	if (unk_0x7E2E2E8A648611F4(uParam0))
	{
		unk_0xF05A5F7FFA0C5E2D(uParam0);
		return unk_0xFE2AB315FD8C7A6F(uParam0);
	}
	return 0;
}

void func_213()
{
	if (!unk_0xCE4AAA035282336C(uLocal_170))
	{
		if (unk_0x7E2E2E8A648611F4(Local_60.f_2))
		{
			uLocal_170 = unk_0x53B496178AE44636(unk_0xDCE61FCD9D7F205E(Local_60.f_2));
			if (func_214())
			{
				unk_0x225EB85DBC38E707(uLocal_170, 0.85f);
			}
			else
			{
				unk_0x225EB85DBC38E707(uLocal_170, 1.2f);
			}
			unk_0xEA4639F4444B7003(uLocal_170, 403);
			unk_0x1886753DA39F38F8(uLocal_170, 2);
			unk_0x4049FDC177C92D4B(uLocal_170, "ABB_BLIPN");
		}
	}
}

bool func_214()
{
	if (unk_0x1758F8A8511510AB())
	{
		return BitTest(Global_4718592.f_170488, 0);
	}
	return ((BitTest(Global_4718592.f_170488, 0) || Global_1926644) && unk_0x24B651D85CCE5EB4(joaat("fm_deathmatch_creator")) > 0);
}

void func_215()
{
	var uVar0;
	
	if (!unk_0xF0E4B64AC0B5660E())
	{
		uVar0 = func_200(1191, -1, 0);
		if (!BitTest(uVar0, 14))
		{
			unk_0xECDAB41968FF21A8(&uVar0, 14);
			func_198(1191, uVar0, -1, 1, 0);
		}
	}
}

int func_216()
{
	return Local_60.f_0;
}

int func_217()
{
	unk_0x852EC2A7DE66202D(joaat("prop_drug_package_02"));
	if (unk_0x0CBB7C273DED26E7(joaat("prop_drug_package_02")))
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0)
{
	return Local_71[iParam0 /*3*/];
}

int func_219()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			return 1;
		}
	}
	if (func_225())
	{
		return 1;
	}
	if (Global_2696915)
	{
		return 1;
	}
	if (func_224())
	{
		return 1;
	}
	if (func_223(159))
	{
		if (!func_222())
		{
			return 1;
		}
	}
	if (func_223(157))
	{
		return 1;
	}
	if (!unk_0x67EBFCF2F78761B9())
	{
		return 1;
	}
	if (func_220() != 0)
	{
		if (unk_0x24B651D85CCE5EB4(func_220()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_220()
{
	switch (func_58())
	{
		case 0:
			return func_221();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_221()
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_222()
{
	return Global_2683862.f_698;
}

int func_223(int iParam0)
{
	if (unk_0x36D3321E138A43F0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_224()
{
	return Global_2694524;
}

bool func_225()
{
	return Global_2683862.f_693;
}

void func_226()
{
	unk_0x4EDE34FBADD967A6(0);
}

int func_227(int iParam0)
{
	return Global_1853910[iParam0 /*862*/];
}

void func_228()
{
	Global_1665752 = -1;
	if (unk_0xCE4AAA035282336C(uLocal_170))
	{
		unk_0x45533C09A6C9B409(&uLocal_170);
	}
	func_231();
	if (unk_0xA26A9A07F761D8F8())
	{
		if (unk_0xE85391CF212DE622())
		{
			if (unk_0x7E2E2E8A648611F4(Local_60.f_2) && unk_0xFE2AB315FD8C7A6F(Local_60.f_2))
			{
				func_211(&(Local_60.f_2));
			}
			Local_60.f_0 = 4;
		}
	}
	if (BitTest(Local_60.f_1, 8))
	{
		func_230();
	}
	func_229();
}

void func_229()
{
	unk_0x675D9C12C73D3DE7();
}

void func_230()
{
	Global_2793044.f_912 = 0;
	Global_2793044.f_912.f_1 = { 0f, 0f, 0f };
	Global_2793044.f_912.f_4 = 0f;
	Global_2793044.f_912.f_8 = 0;
	unk_0x061B1200C95204CB(&(Global_2793044.f_912.f_7), 0);
}

void func_231()
{
	if (BitTest(uLocal_168, 4))
	{
		unk_0x0AC355F45E074D43(unk_0x93E99A2DBCBA9CFA(), 0.72f);
		unk_0xA2F7F7E359BF6D39(unk_0x93E99A2DBCBA9CFA(), 1f, 1);
		unk_0x1B2BE912944D92B7(unk_0x93E99A2DBCBA9CFA(), 1f);
		unk_0xF3E2FD8BE3F2F5E1(unk_0x93E99A2DBCBA9CFA(), 1f);
		func_232(1);
		unk_0x061B1200C95204CB(&uLocal_168, 5);
		unk_0x061B1200C95204CB(&uLocal_168, 7);
		unk_0x061B1200C95204CB(&uLocal_168, 4);
	}
}

void func_232(int iParam0)
{
	var uVar0;
	
	uVar0 = func_233(iParam0, 0);
	unk_0x29978E5D6F8BB77E(uVar0);
}

char* func_233(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "MP_Bull_tost_Out";
			}
			else
			{
				return "MP_Bull_tost";
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return "MP_Powerplay_Out";
			}
			else
			{
				return "MP_Powerplay";
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return "MP_Killstreak_Out";
			}
			else
			{
				return "MP_Killstreak";
			}
			break;
		
		case 4:
			if (bParam1)
			{
				return "MP_Loser_Streak_Out";
			}
			else
			{
				return "MP_Loser_Streak";
			}
			break;
		
		case 6:
			if (bParam1)
			{
				return "BikerFilterOut";
			}
			else
			{
				return "BikerFilter";
			}
			break;
	}
	return "";
}

int func_234(struct<21> Param0)
{
	func_238(func_239(Param0.f_0), Param0);
	unk_0xF759B94A928DAFDC(1);
	func_236(0, -1, 0);
	unk_0xAC5E62CB7808A363(&Local_60, 11, 0);
	unk_0x10BF12101F9D80A4(&Local_71, 97, 0);
	if (!func_235())
	{
		return 0;
	}
	unk_0xF1440897111F3111(0);
	if (unk_0xE85391CF212DE622())
	{
		Local_60.f_7 = Param0.f_16;
		Global_1665752 = Local_60.f_7;
		Local_60.f_3 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0) };
		if (!func_4(Global_2793044.f_912.f_1))
		{
			unk_0xECDAB41968FF21A8(&(Local_60.f_1), 8);
		}
	}
	iLocal_173 = unk_0x359808AE8C4C629B();
	Local_71[unk_0xD378D2332270959A() /*3*/] = 0;
	return 1;
}

int func_235()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xA26A9A07F761D8F8())
		{
			return 0;
		}
		if (unk_0x0C8B35057DDAA980())
		{
			return 1;
		}
		if (func_225())
		{
			return 0;
		}
		if (func_223(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_236(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xA1089192E8AE61F4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_229();
			}
			else
			{
				return 0;
			}
		}
		if (!func_237(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA26A9A07F761D8F8())
				{
					if (!bParam2)
					{
						func_229();
					}
					else
					{
						return 0;
					}
				}
				if (func_225())
				{
					if (!bParam2)
					{
						func_229();
					}
					else
					{
						return 0;
					}
				}
				if (func_223(157))
				{
					if (!bParam2)
					{
						func_229();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xE3C3FF8D5649A77D())
			{
				if (!bParam2)
				{
					func_229();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xA1089192E8AE61F4();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			if (!bParam2)
			{
				func_229();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xE3C3FF8D5649A77D())
	{
		if (!bParam2)
		{
			func_229();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_237(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

void func_238(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		func_229();
	}
	unk_0xCF50389093DECE87(uParam0, 0, Param1.f_16);
}

int func_239(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 173:
			return 32;
		
		case 174:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 185:
			return 32;
		
		case 186:
			return 32;
		
		case 175:
			return 32;
		
		case 176:
			return 32;
		
		case 180:
			return 32;
		
		case 178:
			return 32;
		
		case 179:
			return 32;
		
		case 183:
			return 32;
		
		case 184:
			return 32;
		
		case 181:
			return 32;
		
		case 182:
			return 32;
		
		case 187:
			return 32;
		
		case 188:
			return 32;
		
		case 189:
			return 32;
		
		case 190:
			return 32;
		
		case 191:
			return 2;
		
		case 196:
			return 1;
		
		case 192:
			return 2;
		
		case 193:
			return 4;
		
		case 194:
			return 2;
		
		case 195:
			return 2;
		
		case 177:
			return 1;
		
		case 197:
			return 2;
		
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
			return 0;
		
		case 219:
			return 1;
		
		case 204:
			return 4;
		
		case 207:
			return 4;
		
		case 208:
			return 1;
		
		case 209:
			return 1;
		
		case 215:
			return 1;
		
		case 211:
			return 2;
		
		case 216:
			return 1;
		
		case 212:
			return 1;
		
		case 210:
			return 2;
		
		case 213:
			return 8;
		
		case 214:
			return 8;
		
		case 217:
			return 1;
		
		case 218:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 205:
			return 16;
		
		case 206:
			return 32;
		
		default:
	}
	switch (func_240(func_241(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_240(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		default:
	}
	return -1;
}

int func_241(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 191:
			return 15;
		
		case 198:
			return 8;
		
		case 192:
			return 14;
		
		case 196:
			return 122;
		
		case 199:
			return 1;
		
		case 197:
			return 5;
		
		case 200:
			return 6;
		
		case 193:
			return 11;
		
		case 201:
			return 0;
		
		case 202:
			return 2;
		
		case 194:
			return 13;
		
		case 203:
			return 3;
		
		case 195:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		default:
	}
	if (bParam1)
	{
	}
	return 312;
}

