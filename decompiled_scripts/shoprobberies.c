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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	struct<487> Local_68 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1500, 45, 1103626240, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	bool bLocal_574 = 0;
	int iLocal_575 = 0;
	bool bLocal_576 = 0;
	int iLocal_577 = 0;
	char* sLocal_578 = NULL;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	bool bLocal_582 = 0;
	int iLocal_583 = 0;
	struct<33> Local_584 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_617 = 1;
	var uLocal_618[3] = { 0, 0, 0 };
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	var uLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	int iLocal_642 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
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
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	struct<3> Var13;
	struct<3> Var16;
	int iVar19;
	
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
	Local_49 = { 500f, 500f, 500f };
	iLocal_630 = 3;
	if (unk_0x55EEDBBFDC6E810F(98))
	{
		func_320();
	}
	if (func_317(0))
	{
		bLocal_574 = true;
		iLocal_571 = unk_0x5CFA88F5D9B5E4B8();
	}
	if (Global_3)
	{
		unk_0xCD3C8E1022864F65(1);
		unk_0x675D9C12C73D3DE7();
	}
	if (func_316(14))
	{
		unk_0xCD3C8E1022864F65(1);
		unk_0x675D9C12C73D3DE7();
	}
	func_315(&Local_584, 3);
	func_306(&uScriptParam_0);
	Var0 = { 24.088f, -1345.623f, 29.5082f };
	Var3 = { 24.94562f, -1344.954f, 29.49f };
	Var6 = { Var0 - Var3 };
	Var6 = { Var3 - Var0 };
	fVar12 = 147.297f;
	Var9 = { -1228.443f, -905.3416f, 13.523f };
	Var6 = { Var9 - Vector(12.31f, -907.8234f, -1222.331f) };
	Var6 = { func_305(Var6, fVar12) };
	if ((((func_304() && !func_303()) || Global_113592) || Global_32166) || Global_113637 != -1)
	{
		if (func_304() && !func_303())
		{
		}
		else if (Global_113592)
		{
		}
		else if (Global_32166)
		{
		}
		else if (Global_113637 != -1)
		{
		}
		if (!func_302())
		{
			func_300(&(Local_68.f_470), 64);
			func_298(1);
		}
		else
		{
			func_298(0);
		}
		func_320();
	}
	else if (Global_113648.f_20037[iLocal_568] > 0)
	{
		if (func_297())
		{
			func_295(iLocal_568, Local_68.f_486.f_9.f_2, &Var13, &Var16);
			unk_0x6FCA8E220FB1053D(Local_68.f_181, 15f, 0);
			uLocal_567 = unk_0x54ECDA2DAB9CFB10(Var13, Var16, 0, 1, 1, 1);
			if (!func_302())
			{
				func_298(1);
			}
			else
			{
				func_298(0);
				func_293(&(Local_68.f_470), 512);
			}
			iLocal_67 = 2;
		}
		else
		{
			func_298(0);
		}
		if (!func_292())
		{
			iLocal_64 = 10;
			iVar19 = unk_0x15A88CFAAFFC6C4B(0, 3);
			if (iVar19 == 0)
			{
				Local_68.f_2.f_12 = 1;
			}
			else
			{
				Local_68.f_2.f_12 = 0;
			}
		}
	}
	else
	{
		func_298(0);
	}
	while (true)
	{
		func_289(&Local_584);
		if (func_284())
		{
			func_320();
		}
		if (!bLocal_574)
		{
			if (func_317(0))
			{
				func_283();
				bLocal_574 = true;
			}
		}
		switch (iLocal_67)
		{
			case 0:
				func_254();
				break;
			
			case 1:
				func_6();
				break;
			
			case 2:
				if (func_302())
				{
					if (!unk_0xF0E4B64AC0B5660E())
					{
						if (!func_4("SHOP_CLOSED", func_5(iLocal_568)) && !func_3(unk_0x93E99A2DBCBA9CFA()))
						{
							unk_0x6C45B4AA0D637138(0);
							func_2("SHOP_CLOSED", func_5(iLocal_568));
						}
					}
				}
				else
				{
					if (func_4("SHOP_CLOSED", func_5(iLocal_568)))
					{
						unk_0xCD3C8E1022864F65(1);
					}
					if (func_1(Local_68.f_470, 512))
					{
						func_298(1);
						func_300(&(Local_68.f_470), 512);
					}
				}
				break;
			
			case 3:
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_1(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_2(char* sParam0, char* sParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0x48849374B34BB7B9(sParam1);
	unk_0xBC8969B539DCA239(0, 1, 1, -1);
}

int func_3(int iParam0)
{
	int iVar0;
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
		iVar0 = unk_0xF2CFBB1105511E1A(iParam0);
		if (unk_0x7DE17ACDD8BA2642(iVar0))
		{
			iVar1 = unk_0x504B9BB48D41C264(iVar0);
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

int func_4(char* sParam0, char* sParam1)
{
	unk_0x56C9BC27C0FF68D7(sParam0);
	unk_0x48849374B34BB7B9(sParam1);
	return unk_0x6A92D111B5409879(0);
}

char* func_5(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "SHR_GAS";
		
		case 5:
			return "SHR_LIQ1";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "SHR_LIQ2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "SHR_CONV";
		
		case -2:
			return "SHR_ACE";
		
		default:
	}
	return "";
}

void func_6()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_251();
	func_248();
	func_243();
	func_237();
	func_219();
	func_197();
	func_191();
	func_67();
	func_66();
	func_65();
	func_55();
	func_54();
	func_51();
	if (!func_50())
	{
		func_37();
		func_27();
	}
	if (unk_0x7DE17ACDD8BA2642(Local_68.f_0))
	{
		unk_0xEBC16D60E30C9AE1(Local_68.f_0, &iVar0, 1);
	}
	else
	{
		return;
	}
	bLocal_576 = false;
	if (!unk_0x66599E73DBA5A850(Local_68.f_2) && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &iVar1, 1))
		{
			if ((iVar1 != joaat("weapon_unarmed") && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare"))
			{
				if ((((unk_0x5C3926F501DBBD3A(unk_0x93E99A2DBCBA9CFA()) && unk_0xD495130AEF425591(unk_0xC1A5EC5C986B98AD(), Local_68.f_2, 45f)) && unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), Local_68.f_2, 5f, 5f, 2f, 0, 1, 0)) || unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), Local_68.f_2)) || unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), Local_68.f_2))
				{
					if (!func_26() && !unk_0x59B303498BF93C46())
					{
						bLocal_576 = true;
					}
				}
			}
		}
	}
	if (bLocal_576)
	{
		if (!iLocal_577 && func_1(Local_68.f_470, 4))
		{
			iVar2 = func_25(unk_0xC1A5EC5C986B98AD());
			iVar3 = unk_0x4C65E4658A34DD54(iVar2);
			if (iVar3 == joaat("GROUP_PISTOL"))
			{
				sLocal_578 = "hold_up_head_additive_pistol";
				unk_0x3EE48ADC8C7F5CC4(unk_0xC1A5EC5C986B98AD(), "mp_am_hold_up", sLocal_578, 8f, -8f, -1, 305, 0, 0, 0, 0);
			}
			else if ((((iVar3 == joaat("GROUP_MG") || iVar3 == joaat("GROUP_RIFLE")) || iVar3 == joaat("GROUP_SHOTGUN")) || iVar3 == joaat("GROUP_SNIPER")) || iVar3 == joaat("GROUP_SMG"))
			{
				sLocal_578 = "hold_up_head_additive_rifle";
				unk_0x3EE48ADC8C7F5CC4(unk_0xC1A5EC5C986B98AD(), "mp_am_hold_up", sLocal_578, 8f, -8f, -1, 305, 0, 0, 0, 0);
			}
			else
			{
				sLocal_578 = "";
			}
			iLocal_577 = 1;
		}
	}
	else if (iLocal_577)
	{
		if (!unk_0x2AC37494BBF1DB16(sLocal_578))
		{
			if (unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "mp_am_hold_up", sLocal_578, 3))
			{
				unk_0x82F27DF65F4D68B5(unk_0xC1A5EC5C986B98AD(), "mp_am_hold_up", sLocal_578, -1056964608);
			}
		}
		iLocal_577 = 0;
	}
	switch (iLocal_64)
	{
		case 0:
			if (func_302())
			{
				if (unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
				{
					iLocal_64 = 12;
				}
				else
				{
					iLocal_52 = 2;
					iLocal_59 = 1;
					if (!unk_0x055111B11E6624FD(Local_68.f_0, 0))
					{
						if (!unk_0x3C3D6D026CF7F51B(Local_68.f_0, 0))
						{
							if ((func_25(Local_68.f_0) == joaat("weapon_unarmed") || func_25(Local_68.f_0) == joaat("object")) || func_25(Local_68.f_0) == joaat("weapon_briefcase"))
							{
								iLocal_62 = 1;
								iLocal_64 = 1;
							}
							else if (!func_1(Local_68.f_470, 1))
							{
								if (iVar0 == joaat("weapon_bat"))
								{
									iLocal_62 = 2;
									iLocal_64 = 5;
								}
								else if ((iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer")) || iVar0 == joaat("weapon_bottle"))
								{
									iLocal_62 = 3;
									iLocal_64 = 5;
								}
								else if (iVar0 == joaat("weapon_stickybomb"))
								{
									iLocal_62 = 4;
									iLocal_64 = 5;
								}
								else
								{
									iLocal_64 = 2;
								}
								func_293(&(Local_68.f_470), 1);
							}
						}
						else
						{
							iLocal_64 = 3;
						}
					}
				}
			}
			else if (func_24())
			{
				iLocal_52 = 2;
				iLocal_64 = 3;
			}
			else if (!func_302() && func_21(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1))
			{
				iLocal_64 = 12;
			}
			break;
		
		case 1:
			if (!func_1(Local_68.f_470, 2))
			{
				iLocal_53 = 1;
				iLocal_58 = 1;
				func_293(&(Local_68.f_470), 2);
			}
			iLocal_64 = 5;
			break;
		
		case 2:
			iLocal_53 = 5;
			iLocal_58 = 3;
			iLocal_64 = 5;
			break;
		
		case 3:
			iLocal_53 = 6;
			iLocal_58 = 4;
			iLocal_64 = 5;
			break;
		
		case 5:
			if (!func_302() && !func_1(Local_68.f_470, 1))
			{
				iLocal_64 = 0;
			}
			break;
		
		case 6:
			if (iLocal_53 >= 13)
			{
				if (Local_68.f_2.f_12)
				{
					if (!func_20())
					{
						iLocal_64 = 7;
					}
				}
				else
				{
					iLocal_64 = 8;
				}
				iLocal_54 = 1;
			}
			break;
		
		case 7:
			if (func_1(Local_68.f_470, 256))
			{
				func_19();
				unk_0x061B1200C95204CB(&Global_96532, 3);
				iLocal_64 = 13;
			}
			break;
		
		case 8:
			if (func_1(Local_68.f_470, 16))
			{
				if (func_17())
				{
					if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
					{
						if (!unk_0x48A4D45B3B4CEFFD(Local_68.f_2))
						{
							if (func_302())
							{
								if (Local_68.f_486 >= 0)
								{
									if (unk_0x411B750250543BD0(Local_68.f_486))
									{
										unk_0x3EE48ADC8C7F5CC4(Local_68.f_2, Local_68.f_486.f_1, "handsup_base", 4f, -8f, -1, 1, 0, 0, 0, 0);
										iLocal_60 = 10;
									}
								}
							}
							else
							{
								unk_0xC6C9BF71106ABCAC(Local_68.f_2, unk_0xC1A5EC5C986B98AD(), 100f, -1, 0, 0);
								iLocal_60 = 10;
							}
						}
					}
					unk_0x061B1200C95204CB(&Global_96532, 3);
					iLocal_64 = 13;
				}
			}
			break;
		
		case 9:
			func_16(2, 0);
			iLocal_61 = 7;
			if (iLocal_65 == 1)
			{
				iLocal_64 = 8;
			}
			else
			{
				iLocal_64 = 13;
			}
			break;
		
		case 10:
			if (func_302())
			{
				iLocal_64 = 11;
			}
			break;
		
		case 11:
			if (!func_15(&(Local_68.f_477)))
			{
				if (!Local_68.f_2.f_12)
				{
					iLocal_53 = 28;
				}
				else
				{
					iLocal_53 = 29;
				}
				func_12(&(Local_68.f_477));
			}
			else if (func_9(&(Local_68.f_477)) > 5f)
			{
				func_16(1, 0);
				iLocal_64 = 13;
			}
			else if (func_9(&(Local_68.f_477)) > 1.5f)
			{
				if (!func_20())
				{
					if (iLocal_60 != 12)
					{
						iLocal_60 = 12;
						if (!Local_68.f_2.f_12)
						{
							func_8();
						}
						else
						{
							func_19();
						}
					}
				}
			}
			break;
		
		case 12:
			if (!func_15(&(Local_68.f_477)))
			{
				func_7();
				iLocal_53 = 30;
				iLocal_60 = 12;
				func_12(&(Local_68.f_477));
			}
			else if (func_9(&(Local_68.f_477)) > 3f)
			{
				iLocal_64 = 13;
			}
			break;
		
		case 13:
			break;
	}
}

void func_7()
{
	var uVar0;
	
	if (unk_0x055111B11E6624FD(Local_68.f_2, 0))
	{
		return;
	}
	unk_0xDBC7406226B5540E(&uVar0);
	unk_0x7D9A648CC1936BDA(0, Local_68.f_2.f_6, 2f, -1, 0.25f, 0, Local_68.f_2.f_9);
	unk_0xA2C73FAE5789EC05(0, -1);
	unk_0xF2CFC6EC8C85FA78(uVar0);
	unk_0x3D7110D966B0CEA2(Local_68.f_2, uVar0);
	unk_0x63EF69C6969A3D26(&uVar0);
	func_293(&(Local_68.f_470), 128);
}

void func_8()
{
	if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
	{
		unk_0x63EF69C6969A3D26(&uLocal_566);
		unk_0xDBC7406226B5540E(&uLocal_566);
		unk_0xA2C73FAE5789EC05(0, 5000);
		unk_0xC6C9BF71106ABCAC(0, unk_0xC1A5EC5C986B98AD(), 100f, -1, 0, 0);
		unk_0xF2CFC6EC8C85FA78(uLocal_566);
		unk_0x3D7110D966B0CEA2(Local_68.f_2, uLocal_566);
	}
}

float func_9(var uParam0)
{
	if (func_15(uParam0))
	{
		if (func_11(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_10(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_10(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0xA5E11AF0A2B928C1());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		iVar2 = unk_0x0DB7F8294D73598B();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0xA5E11AF0A2B928C1()) / 1000f);
}

bool func_11(var uParam0)
{
	return BitTest(*uParam0, 2);
}

void func_12(var uParam0)
{
	if (!func_15(uParam0))
	{
		func_13(uParam0);
	}
}

void func_13(var uParam0)
{
	func_14(uParam0, 0f);
}

void func_14(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_10(BitTest(*uParam0, 4)) - fParam1);
	unk_0xECDAB41968FF21A8(uParam0, true);
	unk_0x061B1200C95204CB(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_15(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_16(int iParam0, bool bParam1)
{
	if (unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()) < iParam0 && (!bLocal_574 || (bLocal_574 && iParam0 < iLocal_571)))
	{
		unk_0x8FE445B0989D8C71(unk_0x5DC3DCA82C806319(), iParam0, 0);
		unk_0x6CDFCA6843DA90FF(unk_0x5DC3DCA82C806319(), 0);
		Local_68.f_158 = 1;
		if (bParam1)
		{
			unk_0x508B7A54DEE39001(iParam0);
		}
		else
		{
			unk_0x508B7A54DEE39001(5);
		}
	}
	else if (bLocal_574 && iParam0 > iLocal_571)
	{
	}
}

int func_17()
{
	func_18();
	switch (iLocal_56)
	{
		case 0:
			Local_68.f_486 = unk_0x191673E3F99212B2(Local_68.f_486.f_6, Local_68.f_486.f_9, 2);
			if (!unk_0xE678B2045145CE41(Local_68.f_2, 1))
			{
				if (!unk_0x055111B11E6624FD(Local_68.f_28, 0))
				{
					if (Local_68.f_486 >= 0)
					{
						unk_0xDDE449983CE7572E(Local_68.f_28, 1, 0);
						unk_0x8D62C770FD5498FA(Local_68.f_28, 1);
						unk_0x468D976993BF7FE1(Local_68.f_2, Local_68.f_486, Local_68.f_486.f_1, Local_68.f_486.f_3, 8f, -1.5f, 25, 0, 1148846080, 0);
						unk_0xA2CBB04560DD6361(Local_68.f_28, Local_68.f_486, Local_68.f_486.f_4, Local_68.f_486.f_1, 1000f, 8f, 137, 1148846080);
						unk_0xA2CBB04560DD6361(Local_68.f_96.f_1, Local_68.f_486, Local_68.f_486.f_5, Local_68.f_486.f_1, 1000f, 8f, 137, 1148846080);
					}
					else
					{
						return 1;
					}
					iLocal_57 = 1;
					iLocal_60 = 5;
					iLocal_56 = 2;
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			if (Local_68.f_486 >= 0)
			{
				if (unk_0x411B750250543BD0(Local_68.f_486))
				{
					if (unk_0xABF98B1999FE64CA(Local_68.f_486) > 0.478f)
					{
						if (!unk_0x055111B11E6624FD(Local_68.f_28, 0))
						{
							unk_0xA2CBB04560DD6361(Local_68.f_28, Local_68.f_486, Local_68.f_486.f_4, Local_68.f_486.f_1, 1000f, 8f, 137, 1148846080);
							Local_68.f_28.f_7 = { Local_68.f_28.f_7, Local_68.f_28.f_7.f_1, (Local_68.f_28.f_7.f_2 + 0.2f) };
						}
						iLocal_56 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_68.f_486 >= 0)
			{
				if (unk_0x411B750250543BD0(Local_68.f_486))
				{
					if (unk_0xABF98B1999FE64CA(Local_68.f_486) > 0.447f)
					{
						if (!unk_0x055111B11E6624FD(Local_68.f_28, 0))
						{
							if (!unk_0x51DF6895C236B231(Local_68.f_28))
							{
								unk_0x724FFAED1C56CE2B(Local_68.f_28, 1, 0);
							}
						}
					}
					if (Local_68.f_467)
					{
						if (unk_0xC605ACE0A0F9E32E(Local_68.f_486) != 1.45f)
						{
							unk_0x2D33E7175ED5D45D(Local_68.f_486, 1.45f);
						}
					}
					if (unk_0xABF98B1999FE64CA(Local_68.f_486) > 0.894f)
					{
						iLocal_56 = 3;
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x055111B11E6624FD(Local_68.f_28, 0))
			{
				if (Local_68.f_486 >= 0)
				{
					if (unk_0x411B750250543BD0(Local_68.f_486))
					{
						if (iLocal_55 >= 4)
						{
							if (unk_0xABF98B1999FE64CA(Local_68.f_486) < 0.871f)
							{
								iLocal_57 = 4;
							}
							unk_0xFB58581C53CF4C05(Local_68.f_28, -16f, 1);
							unk_0x787BE15D36C401A5(Local_68.f_28);
						}
					}
				}
			}
			iLocal_56 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_18()
{
	if (Local_68.f_486 >= 0)
	{
		if (unk_0x411B750250543BD0(Local_68.f_486))
		{
			if (unk_0xABF98B1999FE64CA(Local_68.f_486) >= 0f)
			{
				if (unk_0xABF98B1999FE64CA(Local_68.f_486) < 0.117f)
				{
					iLocal_55 = 1;
				}
				else if (unk_0xABF98B1999FE64CA(Local_68.f_486) < 0.154f)
				{
					iLocal_55 = 2;
				}
				else if (unk_0xABF98B1999FE64CA(Local_68.f_486) < 0.477f)
				{
					iLocal_55 = 3;
				}
				else if (unk_0xABF98B1999FE64CA(Local_68.f_486) < 0.487f)
				{
					iLocal_55 = 4;
				}
				else if (unk_0xABF98B1999FE64CA(Local_68.f_486) < 0.809f)
				{
					iLocal_55 = 5;
				}
				else if (unk_0xABF98B1999FE64CA(Local_68.f_486) < 0.871f)
				{
					iLocal_55 = 6;
				}
				else if (unk_0xABF98B1999FE64CA(Local_68.f_486) < 0.894f)
				{
					iLocal_55 = 7;
				}
				else if (unk_0xABF98B1999FE64CA(Local_68.f_486) < 0.999f)
				{
					iLocal_55 = 8;
				}
				else if (iLocal_55 == 9)
				{
				}
			}
			else
			{
				iLocal_55 = 0;
			}
		}
		else if (iLocal_55 == 0)
		{
		}
	}
	else
	{
		iLocal_55 = 0;
	}
}

void func_19()
{
	if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
	{
		unk_0xCBDC2B59922F92C3(Local_68.f_2, joaat("weapon_pumpshotgun"), 12, 0, 1);
		unk_0x8CC688927B10006C(Local_68.f_2, joaat("weapon_pumpshotgun"), 0);
		unk_0x8386356641D0DED1(Local_68.f_2, -2065892691);
		unk_0xDBC7406226B5540E(&(Local_68.f_2.f_22));
		unk_0xFD42C7B0CE08BA68(0, Local_68.f_0, 2000, 0);
		unk_0x3EFB5DE67FDF106B(0, Local_68.f_0, 4000, joaat("FIRING_PATTERN_FULL_AUTO"));
		unk_0xB7EB8CCA28444BAB(0, 25f, 0);
		unk_0xF2CFC6EC8C85FA78(Local_68.f_2.f_22);
		unk_0x3D7110D966B0CEA2(Local_68.f_2, Local_68.f_2.f_22);
	}
}

int func_20()
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x055111B11E6624FD(uParam1, 0))
	{
		Var0 = { unk_0x30BE8A934C020461(iParam1, 1) };
	}
	if (unk_0x612907CF3208D1E3(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x32C00474D0DDF069(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x2D1125ABF6C8F8C4(uParam0, 2))
	{
		if (unk_0x110D030CCD4E83A6(uParam0))
		{
			if (unk_0x1C4E4DC1EFE24DF1(iParam1, unk_0x30BE8A934C020461(uParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0xD495130AEF425591(unk_0x9C8D7679C15E75FF(iParam1), iParam0, 120f) && unk_0xC832FC847E3442DA(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x3C3D6D026CF7F51B(unk_0x9C8D7679C15E75FF(iParam1), 0))
			{
				iVar3 = unk_0x95DC39736F6748E3(unk_0x9C8D7679C15E75FF(iParam1), 0);
			}
			if (unk_0x197DD015F81B0D16(iParam0) || func_22(iVar3))
			{
				if (unk_0x1C4E4DC1EFE24DF1(iParam1, unk_0x30BE8A934C020461(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0xD495130AEF425591(unk_0x9C8D7679C15E75FF(iParam1), iParam0, 120f) && unk_0xC832FC847E3442DA(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x332F7E85F9805351((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_22(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
		{
			if (unk_0xA66E176E5772E965(iParam0, -1, 0) != 0)
			{
				if (unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_23(unk_0xC1A5EC5C986B98AD(), iParam0, 1) < 40f)
						{
							if (unk_0x005E10EF94E1E6A5(unk_0x93E99A2DBCBA9CFA(), &uVar1))
							{
								if ((unk_0xA6B591D40DE982B5(uVar1) && unk_0x4DFB7A1A6909D574(iVar1) == iParam0) || (unk_0x71904BD37B848CAF(iVar1) && unk_0x9C8D7679C15E75FF(iVar1) == unk_0xA66E176E5772E965(iParam0, -1, 0)))
								{
									if ((unk_0x4FBDBA15B9C41492(unk_0xC1A5EC5C986B98AD()) && unk_0x51EB177CA0562B62(0, 24)) || (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) && unk_0x51EB177CA0562B62(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_23(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x055111B11E6624FD(uParam0, 0))
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 0) };
	}
	if (!unk_0x055111B11E6624FD(uParam1, 0))
	{
		Var3 = { unk_0x30BE8A934C020461(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x30BE8A934C020461(iParam1, 0) };
	}
	return unk_0x2E496FE654DA4166(Var0, Var3, iParam2);
}

int func_24()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!unk_0x055111B11E6624FD(Local_68.f_0, 0))
	{
		if (unk_0x3C3D6D026CF7F51B(Local_68.f_0, 0))
		{
			iVar1 = unk_0x95DC39736F6748E3(Local_68.f_0, 0);
			bVar0 = true;
		}
		else if (!unk_0x055111B11E6624FD(unk_0xE475C458F52F1781(), 0))
		{
			iVar1 = unk_0xE475C458F52F1781();
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!unk_0x055111B11E6624FD(iVar1, 0))
		{
			if (unk_0x9DC9E896F189AAA5(iVar1, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0))
			{
				return 1;
			}
			else if (unk_0x9DC9E896F189AAA5(iVar1, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0))
			{
				return 1;
			}
			else if (unk_0x9DC9E896F189AAA5(iVar1, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, 1, 0))
			{
				return 1;
			}
			else if (Local_68.f_199 != -1f)
			{
				if (unk_0x9DC9E896F189AAA5(iVar1, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
{
	var uVar0;
	
	unk_0xEBC16D60E30C9AE1(iParam0, &uVar0, 1);
	return uVar0;
}

int func_26()
{
	if (unk_0x24B651D85CCE5EB4(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_27()
{
	switch (iLocal_52)
	{
		case 0:
			break;
		
		case 2:
			if (!func_50())
			{
				if (func_302())
				{
					if (!func_1(Global_113648.f_20037.f_20, 1))
					{
						switch (func_36("SHR_HOLDUP_1"))
						{
							case 2:
								func_34("SHR_HOLDUP_1", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_293(&(Global_113648.f_20037.f_20), 1);
								iLocal_52 = 1;
								break;
						}
						if (iLocal_65 > 0)
						{
							if (func_33("SHR_HOLDUP_1"))
							{
								func_29("SHR_HOLDUP_1", 1);
								iLocal_52 = 4;
							}
						}
						if ((unk_0xA5E11AF0A2B928C1() % 1000) < 50)
						{
						}
					}
					else
					{
						iLocal_52 = 1;
					}
				}
				else if (func_33("SHR_HOLDUP_1"))
				{
					func_29("SHR_HOLDUP_1", 1);
				}
			}
			break;
		
		case 1:
			if (!func_50())
			{
				if (func_302())
				{
					if (!func_1(Global_113648.f_20037.f_20, 2))
					{
						switch (func_36("SHR_SNK_TUT"))
						{
							case 2:
								func_34("SHR_SNK_TUT", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_293(&(Global_113648.f_20037.f_20), 2);
								iLocal_52 = 4;
								break;
						}
					}
					else
					{
						iLocal_52 = 4;
					}
				}
				else if (func_33("SHR_SNK_TUT"))
				{
					func_29("SHR_SNK_TUT", 1);
				}
			}
			break;
		
		case 3:
			if (func_28("SHR_HOLDUP_1") || func_28("SHR_SNK_TUT"))
			{
				unk_0xCD3C8E1022864F65(1);
			}
			if (func_33("SHR_SNK_TUT") && !func_1(Global_113648.f_20037.f_20, 2))
			{
				func_29("SHR_SNK_TUT", 1);
			}
			if (func_33("SHR_HOLDUP_1") && !func_1(Global_113648.f_20037.f_20, 1))
			{
				func_29("SHR_HOLDUP_1", 1);
			}
			iLocal_52 = 4;
			break;
		
		case 4:
			if ((!func_302() && func_33("SHR_HOLDUP_1")) && !func_1(Global_113648.f_20037.f_20, 1))
			{
				func_29("SHR_HOLDUP_1", 1);
				iLocal_52 = 2;
			}
			if ((!func_302() && func_33("SHR_SNK_TUT")) && !func_1(Global_113648.f_20037.f_20, 2))
			{
				func_29("SHR_SNK_TUT", 1);
				iLocal_52 = 2;
			}
			break;
	}
}

int func_28(char* sParam0)
{
	unk_0x56C9BC27C0FF68D7(sParam0);
	return unk_0x6A92D111B5409879(0);
}

void func_29(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_112288 && iParam1)
	{
		if (func_28(sParam0) && !unk_0xCA33061A0ABF7745())
		{
			unk_0xCD3C8E1022864F65(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_20412.f_145)
	{
		if (unk_0x4310A0DB886F9FED(sParam0, &(Global_113648.f_20412[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_113648.f_20412.f_145 - 2))
			{
				func_32(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_31((Global_113648.f_20412.f_145 - 1));
			Global_113648.f_20412.f_145 = (Global_113648.f_20412.f_145 - 1);
			func_30();
			return;
		}
		iVar0++;
	}
}

void func_30()
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

void func_31(int iParam0)
{
	StringCopy(&(Global_113648.f_20412[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_113648.f_20412[iParam0 /*16*/].f_4), "", 16);
	Global_113648.f_20412[iParam0 /*16*/].f_8 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_9 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_11 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_10 = -1;
	Global_113648.f_20412[iParam0 /*16*/].f_12 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_13 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_14 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_15 = 0;
}

void func_32(int iParam0, int iParam1)
{
	Global_113648.f_20412[iParam0 /*16*/] = { Global_113648.f_20412[iParam1 /*16*/] };
	Global_113648.f_20412[iParam0 /*16*/].f_4 = { Global_113648.f_20412[iParam1 /*16*/].f_4 };
	Global_113648.f_20412[iParam0 /*16*/].f_8 = Global_113648.f_20412[iParam1 /*16*/].f_8;
	Global_113648.f_20412[iParam0 /*16*/].f_10 = Global_113648.f_20412[iParam1 /*16*/].f_10;
	Global_113648.f_20412[iParam0 /*16*/].f_9 = Global_113648.f_20412[iParam1 /*16*/].f_9;
	Global_113648.f_20412[iParam0 /*16*/].f_11 = Global_113648.f_20412[iParam1 /*16*/].f_11;
	Global_113648.f_20412[iParam0 /*16*/].f_12 = Global_113648.f_20412[iParam1 /*16*/].f_12;
	Global_113648.f_20412[iParam0 /*16*/].f_13 = Global_113648.f_20412[iParam1 /*16*/].f_13;
	Global_113648.f_20412[iParam0 /*16*/].f_14 = Global_113648.f_20412[iParam1 /*16*/].f_14;
	Global_113648.f_20412[iParam0 /*16*/].f_15 = Global_113648.f_20412[iParam1 /*16*/].f_15;
}

int func_33(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_113648.f_20412.f_145)
	{
		if (unk_0x4310A0DB886F9FED(sParam0, &(Global_113648.f_20412[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
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
		func_30();
	}
}

int func_36(char* sParam0)
{
	if (unk_0x4310A0DB886F9FED(sParam0, &Global_112291))
	{
		return 1;
	}
	if (func_33(sParam0))
	{
		return 0;
	}
	return 2;
}

void func_37()
{
	if (func_302())
	{
		if (!unk_0x055111B11E6624FD(Local_68.f_0, 0))
		{
		}
	}
	if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
	{
	}
	switch (iLocal_53)
	{
		case 1:
			if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_GREET", 3);
			}
			iLocal_53 = 14;
			break;
		
		case 2:
			if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, func_46(bLocal_582, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 3:
			if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, func_46(bLocal_582, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 4:
			if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, func_46(bLocal_582, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 5:
			if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, func_46(bLocal_582, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 6:
			if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, func_46(bLocal_582, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 15:
			if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_STUBBORN", 3);
			}
			iLocal_53 = 14;
			break;
		
		case 7:
			if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_53 = 14;
			break;
		
		case 8:
			if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_53 = 14;
			break;
		
		case 36:
			if (!func_20())
			{
				if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "SHOP_THREATENED", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 9:
			if (!func_20())
			{
				if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "BUMP", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 10:
			if (!func_20())
			{
				if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "GENERIC_FRIGHTENED_HIGH", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 11:
			if (!func_20())
			{
				if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "SHOP_BRAVE", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 14:
			if (func_45() || func_44())
			{
				if (func_45())
				{
					if (!iLocal_579)
					{
						iLocal_53 = 7;
						iLocal_579 = 1;
					}
				}
				else if (func_44())
				{
					if (!iLocal_580)
					{
						iLocal_53 = 8;
						iLocal_580 = 1;
					}
				}
				if (!func_15(&(Local_68.f_483)))
				{
					func_12(&(Local_68.f_483));
				}
				else if (func_11(&(Local_68.f_483)))
				{
					func_43(&(Local_68.f_483));
				}
				else if (func_9(&(Local_68.f_483)) > 10f)
				{
					if (!func_1(Local_68.f_470, 32))
					{
						if (!unk_0x66599E73DBA5A850(Local_68.f_2) && func_1(Local_68.f_470, 4))
						{
							unk_0x3EE48ADC8C7F5CC4(Local_68.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_53 = 36;
						func_16(1, 0);
						func_293(&(Local_68.f_470), 32);
					}
				}
			}
			else if (func_15(&(Local_68.f_483)) && !func_11(&(Local_68.f_483)))
			{
				func_42(&(Local_68.f_483));
			}
			break;
		
		case 12:
			if (!unk_0x967D885AAF973497(unk_0xC1A5EC5C986B98AD()))
			{
				if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
				{
					func_48(unk_0xC1A5EC5C986B98AD(), "SHOP_HOLDUP", 8);
				}
				func_13(&(Local_68.f_471));
				if (Local_68.f_2.f_11)
				{
					iLocal_53 = 37;
				}
				else
				{
					iLocal_53 = 13;
				}
			}
			else
			{
				unk_0x90B639B1CCB1446C(unk_0xC1A5EC5C986B98AD());
			}
			break;
		
		case 13:
			if (func_41(&(Local_68.f_471)) > 3f)
			{
				if (Local_68.f_2.f_12)
				{
					iLocal_53 = 22;
				}
				else if (Local_68.f_458)
				{
					iLocal_53 = 17;
				}
				else if (Local_68.f_459)
				{
					iLocal_53 = 18;
				}
				else if (Local_68.f_460)
				{
					iLocal_53 = 19;
				}
				else if (Local_68.f_461)
				{
					iLocal_53 = 20;
				}
				else if (Local_68.f_462)
				{
					iLocal_53 = 21;
				}
				else
				{
					iLocal_53 = 16;
				}
				func_40(&(Local_68.f_471));
			}
			break;
		
		case 16:
			if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 17:
			if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 18:
			if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 19:
			if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 20:
			if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 21:
			if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 22:
			if (!unk_0x967D885AAF973497(unk_0xC1A5EC5C986B98AD()))
			{
				if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "SHOP_BRAVE", 8);
				}
				func_293(&(Local_68.f_470), 256);
				iLocal_53 = 37;
			}
			break;
		
		case 23:
			if (!unk_0x967D885AAF973497(unk_0xC1A5EC5C986B98AD()))
			{
				if (Local_68.f_28.f_14)
				{
					if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
					{
						func_48(Local_68.f_2, "SHOP_GAVE_YOU_EVERYTHING", 3);
					}
				}
				iLocal_53 = 37;
			}
			else
			{
				unk_0x90B639B1CCB1446C(unk_0xC1A5EC5C986B98AD());
			}
			break;
		
		case 24:
			if (unk_0xFBD273FDBCF0C5BD(Local_68.f_46.f_4[0], 0))
			{
				unk_0x0C561FA44BBB3B8F(Local_68.f_46.f_4[0], 0);
			}
			if (!unk_0x055111B11E6624FD(Local_68.f_46[0], 0))
			{
				func_48(Local_68.f_46[0], "SURROUNDED", 15);
			}
			iLocal_53 = 25;
			break;
		
		case 25:
			if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
			{
				func_48(unk_0xC1A5EC5C986B98AD(), "SPOT_POLICE", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 26:
			if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_POUR_CAN", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 27:
			if (!func_20())
			{
				if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "SCREAM_PANIC", 3);
				}
				iLocal_53 = 37;
			}
			else
			{
				func_38();
			}
			break;
		
		case 28:
			if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_53 = 37;
			break;
		
		case 29:
			if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_53 = 37;
			break;
		
		case 30:
			if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_NO_COPS", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 31:
			if (!func_20())
			{
				iLocal_53 = 37;
			}
			break;
		
		case 33:
			if (!unk_0x967D885AAF973497(unk_0xC1A5EC5C986B98AD()) && !unk_0x967D885AAF973497(Local_68.f_2))
			{
				if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
				{
					func_48(unk_0xC1A5EC5C986B98AD(), "SHOP_HURRY", 11);
				}
				func_13(&(Local_68.f_471));
				iLocal_53 = 32;
			}
			break;
		
		case 32:
			if (func_41(&(Local_68.f_471)) > 1f)
			{
				if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "SHOP_HURRYING", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 34:
			if (!func_20())
			{
				if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "SHOP_SELL", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 35:
			if (!func_20())
			{
				if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "SHOP_STEAL", 3);
				}
				iLocal_53 = 37;
			}
			break;
	}
}

void func_38()
{
	Global_20591 = 0;
	func_39();
}

void func_39()
{
	unk_0x782234C275AFBA24();
	Global_22736 = 0;
	if (unk_0x0DCB385165FDE763())
	{
		unk_0xD6625E11483B2324(0);
		Global_21725 = 6;
	}
}

void func_40(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_41(var uParam0)
{
	if (func_15(uParam0))
	{
		if (func_11(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_10(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_42(var uParam0)
{
	if (func_15(uParam0))
	{
		if (!func_11(uParam0))
		{
			uParam0->f_2 = (func_10(BitTest(*uParam0, 4)) - uParam0->f_1);
			unk_0xECDAB41968FF21A8(uParam0, 2);
		}
	}
}

void func_43(var uParam0)
{
	if (func_15(uParam0))
	{
		if (func_11(uParam0))
		{
			uParam0->f_1 = (func_10(BitTest(*uParam0, 4)) - uParam0->f_2);
			uParam0->f_2 = 0f;
			unk_0x061B1200C95204CB(uParam0, 2);
		}
	}
}

int func_44()
{
	if (!unk_0x055111B11E6624FD(Local_68.f_0, 0))
	{
		if (unk_0x9DC9E896F189AAA5(Local_68.f_0, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_45()
{
	if (!unk_0x055111B11E6624FD(Local_68.f_0, 0))
	{
		if (unk_0x9DC9E896F189AAA5(Local_68.f_0, Local_68.f_214, Local_68.f_217, Local_68.f_220, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_46(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_47()
{
	if (BitTest(unk_0x15A88CFAAFFC6C4B(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_48(int iParam0, char* sParam1, int iParam2)
{
	unk_0x824D23CC0FE1835A(iParam0, sParam1, func_49(iParam2), 1);
}

int func_49(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

bool func_50()
{
	return Global_23129;
}

void func_51()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_302() && iLocal_66 != 3)
	{
		iVar2 = 0;
		while (iVar2 < unk_0x89DE709C9F3052C5(0))
		{
			iVar0 = unk_0xB09B723333956A0B(0, iVar2);
			switch (iVar0)
			{
				case 142:
					unk_0x11DE375695504B75(0, iVar2, &iVar1, 1);
					if (func_53(iVar1))
					{
						if (unk_0x71904BD37B848CAF(iVar1))
						{
							if (iVar1 != func_52(Local_68.f_2) && iVar1 != func_52(unk_0xC1A5EC5C986B98AD()))
							{
								func_293(&(Local_68.f_470), 8);
							}
						}
						if (!unk_0x71904BD37B848CAF(iVar1) && !unk_0xA6B591D40DE982B5(iVar1))
						{
							func_293(&(Local_68.f_470), 8);
						}
					}
					break;
				
				case 141:
					unk_0x11DE375695504B75(0, iVar2, &iVar1, 1);
					if (func_53(iVar1))
					{
						if (unk_0x71904BD37B848CAF(iVar1))
						{
							if (iVar1 != func_52(Local_68.f_2) && iVar1 != func_52(unk_0xC1A5EC5C986B98AD()))
							{
								func_293(&(Local_68.f_470), 8);
							}
						}
						if (!unk_0x71904BD37B848CAF(iVar1) && !unk_0xA6B591D40DE982B5(iVar1))
						{
							func_293(&(Local_68.f_470), 8);
						}
					}
					break;
			}
			iVar2++;
		}
	}
}

int func_52(int iParam0)
{
	return iParam0;
}

int func_53(int iParam0)
{
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		if (unk_0x41AD4BF315E01D41(iParam0) == Local_68.f_185)
		{
			return 1;
		}
		else if (unk_0x9DC9E896F189AAA5(iParam0, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0x9DC9E896F189AAA5(iParam0, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0x9DC9E896F189AAA5(iParam0, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, 1, 0))
		{
			return 1;
		}
		else if (Local_68.f_199 != -1f)
		{
			if (unk_0x9DC9E896F189AAA5(iParam0, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_54()
{
	int iVar0;
	var uVar1[10];
	int iVar12;
	int iVar13;
	
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_302())
		{
			if (!BitTest(Local_68.f_162.f_18, 0))
			{
				iVar12 = 0;
				iVar13 = 0;
				iVar12 = unk_0xA5D17FEE5372152E(unk_0xC1A5EC5C986B98AD(), &uVar1, -1);
				iVar0 = 0;
				while (iVar0 < Local_68.f_162)
				{
					Local_68.f_162[iVar0] = 0;
					iVar0++;
				}
				iVar0 = 0;
				iVar13 = 0;
				while (iVar13 < iVar12)
				{
					if (iVar0 < Local_68.f_162)
					{
						if ((unk_0x7DE17ACDD8BA2642(uVar1[iVar13]) && !unk_0x66599E73DBA5A850(uVar1[iVar13])) && !unk_0x3C3D6D026CF7F51B(uVar1[iVar13], 0))
						{
							if (unk_0x29FD30D3B1A307D6(uVar1[iVar13], unk_0x2165FE3E3189DC71(unk_0x93E99A2DBCBA9CFA())))
							{
								Local_68.f_162[iVar0] = uVar1[iVar13];
								Local_68.f_162.f_5[iVar0 /*3*/] = { unk_0x30BE8A934C020461(uVar1[iVar13], 1) };
								iVar0++;
							}
						}
					}
					iVar13++;
				}
				unk_0xECDAB41968FF21A8(&(Local_68.f_162.f_18), false);
			}
			iVar0 = 0;
			while (iVar0 < Local_68.f_162)
			{
				if ((unk_0x7DE17ACDD8BA2642(Local_68.f_162[iVar0]) && !unk_0x66599E73DBA5A850(Local_68.f_162[iVar0])) && !unk_0x3C3D6D026CF7F51B(Local_68.f_162[iVar0], 0))
				{
					if (BitTest(Local_68.f_162.f_18, 1))
					{
						if ((unk_0xA5E11AF0A2B928C1() % 1500) < 50)
						{
						}
						unk_0x724FFAED1C56CE2B(Local_68.f_162[iVar0], 0, 0);
						unk_0xDDE449983CE7572E(Local_68.f_162[iVar0], 0, 0);
						unk_0x2718E9CC165A99F6(Local_68.f_162[iVar0], 1);
						unk_0x2EDDA32F6EF3C8B7(Local_68.f_162[iVar0], Local_68.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
					else if (!unk_0x51DF6895C236B231(Local_68.f_162[iVar0]))
					{
						unk_0x724FFAED1C56CE2B(Local_68.f_162[iVar0], 1, 0);
						unk_0xDDE449983CE7572E(Local_68.f_162[iVar0], 1, 0);
						unk_0x2718E9CC165A99F6(Local_68.f_162[iVar0], 0);
						unk_0x2EDDA32F6EF3C8B7(Local_68.f_162[iVar0], Local_68.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				iVar0++;
			}
		}
		else
		{
			if (BitTest(Local_68.f_162.f_18, 0))
			{
				unk_0x061B1200C95204CB(&(Local_68.f_162.f_18), false);
			}
			iVar0 = 0;
			while (iVar0 < Local_68.f_162)
			{
				if ((unk_0x7DE17ACDD8BA2642(Local_68.f_162[iVar0]) && !unk_0x66599E73DBA5A850(Local_68.f_162[iVar0])) && !unk_0x3C3D6D026CF7F51B(Local_68.f_162[iVar0], 0))
				{
					if (!unk_0x51DF6895C236B231(Local_68.f_162[iVar0]))
					{
						unk_0x724FFAED1C56CE2B(Local_68.f_162[iVar0], 1, 0);
						unk_0xDDE449983CE7572E(Local_68.f_162[iVar0], 1, 0);
						unk_0x2718E9CC165A99F6(Local_68.f_162[iVar0], 0);
						unk_0x2EDDA32F6EF3C8B7(Local_68.f_162[iVar0], Local_68.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				iVar0++;
			}
		}
	}
}

void func_55()
{
	switch (iLocal_622)
	{
		case 0:
			if (func_302())
			{
				unk_0x617AEFB7754C6AA9(unk_0x93E99A2DBCBA9CFA());
				unk_0x28818732C8F0F80E("oddjobs@shop_robbery@rob_till");
				unk_0x28818732C8F0F80E("misscommon@response");
				unk_0xEBA1698B77FD0A86(func_64(iLocal_568), 0);
				unk_0x852EC2A7DE66202D(joaat("prop_choc_ego"));
				unk_0x852EC2A7DE66202D(joaat("prop_choc_meto"));
				unk_0x852EC2A7DE66202D(joaat("prop_choc_pq"));
				if (!bLocal_574)
				{
					unk_0x852EC2A7DE66202D(Local_68.f_46.f_26);
					unk_0x852EC2A7DE66202D(Local_68.f_46.f_27);
				}
				iLocal_622 = 1;
			}
			break;
		
		case 1:
			if (!unk_0xF6AFEDAAE44A2159("SCRIPT\MARKET_CASH_REGISTER", 0, -1))
			{
				return;
			}
			if (!unk_0x2BBF749E555360DC("oddjobs@shop_robbery@rob_till"))
			{
				return;
			}
			if (!unk_0x2BBF749E555360DC("misscommon@response"))
			{
				return;
			}
			if (!unk_0x0CBB7C273DED26E7(joaat("prop_choc_ego")))
			{
				return;
			}
			if (!unk_0x0CBB7C273DED26E7(joaat("prop_choc_meto")))
			{
				return;
			}
			if (!unk_0x0CBB7C273DED26E7(joaat("prop_choc_pq")))
			{
				return;
			}
			if (!bLocal_574)
			{
				if (!unk_0x0CBB7C273DED26E7(Local_68.f_46.f_26))
				{
					return;
				}
				if (!unk_0x0CBB7C273DED26E7(Local_68.f_46.f_27))
				{
					return;
				}
			}
			if (!func_62("SNK_MNU", iLocal_568, 0))
			{
				return;
			}
			if (!func_1(Local_68.f_470, 4))
			{
				if (!func_1(Local_68.f_470, 1024))
				{
					uLocal_618[0] = unk_0xF19D6C0E8B56BE23(func_61(0), func_60(0), 1, 1, 0);
					uLocal_618[1] = unk_0xF19D6C0E8B56BE23(func_61(1), func_60(1), 1, 1, 0);
					uLocal_618[2] = unk_0xF19D6C0E8B56BE23(func_61(2), func_60(2), 1, 1, 0);
					unk_0x724FFAED1C56CE2B(uLocal_618[0], 0, 0);
					unk_0x724FFAED1C56CE2B(uLocal_618[1], 0, 0);
					unk_0x724FFAED1C56CE2B(uLocal_618[2], 0, 0);
					func_293(&(Local_68.f_470), 1024);
				}
				func_293(&(Local_68.f_470), 4);
				iLocal_622 = 2;
			}
			break;
		
		case 2:
			if (!func_302())
			{
				func_56();
				func_300(&(Local_68.f_470), 4);
				iLocal_622 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_68.f_470, 4))
			{
				func_56();
				func_300(&(Local_68.f_470), 4);
			}
			break;
	}
}

void func_56()
{
	unk_0x0B34FA69ECCE3927("oddjobs@shop_robbery@rob_till");
	unk_0x0B34FA69ECCE3927("misscommon@response");
	unk_0xF297EAB219BB1DC6("SCRIPT\MARKET_CASH_REGISTER");
	unk_0xFBA79BC11313B81D(func_64(iLocal_568));
	unk_0xE0A291F406691F03(joaat("prop_choc_ego"));
	unk_0xE0A291F406691F03(joaat("prop_choc_meto"));
	unk_0xE0A291F406691F03(joaat("prop_choc_pq"));
	func_57(1, iLocal_568);
	if (!bLocal_574)
	{
		unk_0xE0A291F406691F03(Local_68.f_46.f_26);
		unk_0xE0A291F406691F03(Local_68.f_46.f_27);
	}
}

void func_57(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_59(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23270.f_8892)
	{
		unk_0x833DC7C29EA6EEF3(15);
		Global_23270.f_8892 = 0;
	}
	unk_0x314A52B02A05EEDE(0f);
	if (Global_23270.f_6071[iVar0])
	{
		unk_0x32FF0B09752F532B(9, 0);
		Global_23270.f_6071[iVar0] = 0;
	}
	if (Global_23270.f_6057[iVar0])
	{
		unk_0xFBA79BC11313B81D("CommonMenu");
		Global_23270.f_6057[iVar0] = 0;
	}
	if (Global_23270.f_6064[iVar0])
	{
		unk_0xFBA79BC11313B81D("MPShopSale");
		Global_23270.f_6064[iVar0] = 0;
	}
	if (bParam0)
	{
		func_58(&(Global_23270.f_6103[iVar0 /*10*/]));
		Global_23270.f_6164[iVar0] = 0;
	}
	else
	{
		Global_23270.f_6164[iVar0] = 0;
	}
}

void func_58(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x5FAF55B1F052A2E6(*uParam0))
		{
			unk_0xD0AE101DBAA43C98(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_59(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0xA26A9A07F761D8F8() && unk_0x839E00E966CE3F2D())
		{
			iParam2 = unk_0x3B01E4A065DEF5C7();
		}
	}
	StringCopy(&cVar0, unk_0x688846D56810779A(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x14580F20CBCE4FA9(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_23270.f_6164[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23270.f_6164[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23270.f_6164[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

Vector3 func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_68.f_486.f_6 - Vector(1f, 0f, 0.1f);
		
		case 1:
			return Local_68.f_486.f_6 - Vector(1f, 0f, 0f);
		
		case 2:
			return Local_68.f_486.f_6 - Vector(1f, 0f, -0.1f);
		
		default:
	}
	return Local_68.f_486.f_6 - Vector(1f, 0f, -0.1f);
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		default:
	}
	return joaat("prop_choc_pq");
}

bool func_62(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_59(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23270.f_6078[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x2AC37494BBF1DB16(&(Global_23270.f_6078[iVar0 /*4*/])))
	{
		unk_0xA3C681843B51A4CC(&(Global_23270.f_6078[iVar0 /*4*/]), 9);
		Global_23270.f_6071[iVar0] = 1;
		if (!unk_0x7F29CD9C0A5C1E44(&(Global_23270.f_6078[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xEBA1698B77FD0A86("CommonMenu", 0);
	Global_23270.f_6057[iVar0] = 1;
	if (!unk_0x9812897315C21146("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xEBA1698B77FD0A86("MPShopSale", 0);
		Global_23270.f_6064[iVar0] = 1;
		if (!unk_0x9812897315C21146("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23270.f_6103[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_63(&(Global_23270.f_6103[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_63(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x5FAF55B1F052A2E6(*uParam0))
			{
				*uParam0 = unk_0x2B4645565204EA06(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x5FAF55B1F052A2E6(*uParam0))
					{
						uParam0->f_8 = unk_0xA5E11AF0A2B928C1();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0xA5E11AF0A2B928C1();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x5FAF55B1F052A2E6(*uParam0))
			{
				uParam0->f_8 = unk_0xA5E11AF0A2B928C1();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x5FAF55B1F052A2E6(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

char* func_64(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

void func_65()
{
	switch (iLocal_623)
	{
		case 0:
			if (func_302())
			{
				unk_0x28818732C8F0F80E(Local_68.f_486.f_1);
				iLocal_623 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x2BBF749E555360DC(Local_68.f_486.f_1))
			{
				return;
			}
			if (!func_1(Local_68.f_470, 16))
			{
				func_293(&(Local_68.f_470), 16);
				iLocal_623 = 2;
			}
			break;
		
		case 2:
			if (!func_302() && iLocal_65 != 1)
			{
				unk_0x0B34FA69ECCE3927(Local_68.f_486.f_1);
				func_300(&(Local_68.f_470), 16);
				iLocal_623 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_68.f_470, 16))
			{
				unk_0x0B34FA69ECCE3927(Local_68.f_486.f_1);
				func_300(&(Local_68.f_470), 16);
			}
			break;
	}
}

void func_66()
{
	switch (iLocal_642)
	{
		case 0:
			if (Local_68.f_158)
			{
				iLocal_642 = 1;
			}
			break;
		
		case 1:
			if (func_302())
			{
				if (func_15(&(Local_68.f_158.f_1)))
				{
					func_40(&(Local_68.f_158.f_1));
				}
				if ((unk_0xA5E11AF0A2B928C1() % 1000) < 50)
				{
				}
				if (unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
				{
					unk_0x1A743F113DFE1529(unk_0x93E99A2DBCBA9CFA());
				}
			}
			else
			{
				func_13(&(Local_68.f_158.f_1));
				iLocal_642 = 2;
			}
			break;
		
		case 2:
			if (func_302())
			{
				iLocal_642 = 1;
			}
			break;
		
		case 3:
			break;
	}
}

void func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	char* sVar7;
	var uVar8;
	
	func_190();
	if (((((iLocal_60 == 1 || iLocal_60 == 2) && unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0) && !unk_0x66599E73DBA5A850(Local_68.f_0)) && !func_189(-1082130432)) && !unk_0x66599E73DBA5A850(Local_68.f_2))
	{
		iVar1 = unk_0x2935B4D6CE81318D(unk_0xC1A5EC5C986B98AD());
		iVar2 = unk_0x15848AD475FC952B(unk_0xC1A5EC5C986B98AD());
		if (((iLocal_66 != 2 && iLocal_66 != 3) && iLocal_66 != 4) && func_302())
		{
			if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
			{
				unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
			}
		}
		iVar6 = 0;
		switch (iLocal_66)
		{
			case 0:
				if (func_1(Local_68.f_470, 4) && func_25(Local_68.f_0) == joaat("weapon_unarmed"))
				{
					if (func_188(iLocal_568, &(Local_68.f_486.f_6), Local_68.f_486.f_9.f_2, &(Local_68.f_102.f_26[0 /*3*/]), &(Local_68.f_102.f_26[1 /*3*/]), &(Local_68.f_102.f_33), &(Local_68.f_102.f_36)))
					{
						Var3 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
						if (unk_0x2E496FE654DA4166(Var3, Local_68.f_102.f_33, 1) < 5f)
						{
							if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), Local_68.f_102.f_26[0 /*3*/], Local_68.f_102.f_26[1 /*3*/], Local_68.f_102.f_36, 0, 1, 0))
							{
								if (unk_0x55EDDA33F4D8BBE2(unk_0xC1A5EC5C986B98AD(), Local_68.f_102.f_33, 135f))
								{
									if ((unk_0xA5E11AF0A2B928C1() % 1000) < 50)
									{
									}
									if (((!func_28("SHR_HOLDUP_1") && !func_28("SHR_MENU")) && !func_50()) && func_187())
									{
										func_186("SHR_MENU");
									}
									Local_68.f_469 = -1;
									func_185(&(Local_68.f_469), 4, "SHR_MENU", 0, 0, 0, 0);
									unk_0x061B1200C95204CB(&(Local_68.f_162.f_18), true);
									unk_0x061B1200C95204CB(&(Local_68.f_162.f_18), false);
									iLocal_66 = 1;
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (!unk_0x55EDDA33F4D8BBE2(unk_0xC1A5EC5C986B98AD(), Local_68.f_102.f_33, 135f) || !func_25(Local_68.f_0) == joaat("weapon_unarmed"))
				{
					if (func_28("SHR_MENU"))
					{
						unk_0xCD3C8E1022864F65(1);
					}
					Local_68.f_102.f_22 = -1;
					func_184(&(Local_68.f_469));
					iLocal_66 = 0;
				}
				else if (((!func_28("SHR_MENU") && !func_28("SHR_HOLDUP_1")) && func_187()) && !func_183(Local_68.f_469, 0))
				{
					func_186("SHR_MENU");
				}
				if ((!unk_0x5C50456CDB486BD0(unk_0xC1A5EC5C986B98AD()) && !unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) && !unk_0xFBB1B9D2B4CDD7DF(unk_0xC1A5EC5C986B98AD()))
				{
					if (func_181(Local_68.f_469, 1))
					{
						if (func_28("SHR_MENU"))
						{
							unk_0xCD3C8E1022864F65(1);
						}
						unk_0xECDAB41968FF21A8(&(Local_68.f_162.f_18), true);
						func_13(&(Local_68.f_102.f_53));
						func_184(&(Local_68.f_469));
						func_180(23, 1);
						if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !unk_0x66599E73DBA5A850(Local_68.f_2))
						{
							unk_0x06A2A5F6A6959BE7(unk_0xC1A5EC5C986B98AD(), Local_68.f_2, 0);
						}
						iLocal_66 = 2;
					}
				}
				break;
			
			case 2:
				if (!unk_0xF57C1326FD40C8A7(uLocal_641))
				{
					uLocal_641 = unk_0xD5B705094825AC04(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				func_179(iLocal_568, Local_68.f_486.f_6, Local_68.f_486.f_9.f_2, &(Local_68.f_102), &(Local_68.f_102.f_3), &uVar8);
				unk_0x5BF3CF5BAF6ABBBB(uLocal_641, Local_68.f_102);
				unk_0xB346B70AE8C42AD8(uLocal_641, Local_68.f_102.f_3, 2);
				unk_0xE3BD36CCB5EB72F2(uLocal_641, 35f);
				unk_0xA490483DCDA2F37E(uLocal_641, "HAND_SHAKE", 0.1f);
				unk_0xEEF11E0DB5769366(uLocal_641, 1);
				unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
				if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
				{
					unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 0);
					func_293(&(Local_68.f_470), 2048);
				}
				Local_68.f_102.f_46 = func_64(iLocal_568);
				Local_68.f_102.f_23 = 0;
				Local_68.f_102.f_24 = 3;
				func_178(0, 0);
				func_177(1, 1, 0, 0, 0);
				func_176(1, 2, 1, 1, 1);
				func_175(func_5(iLocal_568));
				func_173(1, Local_68.f_102.f_46, Local_68.f_102.f_46);
				func_172();
				func_168(0, "SNK_ITEM1", 0, 1, 0, 0, 0);
				func_168(0, "ITEM_COST", 1, 1, 0, 0, 0);
				func_164(func_167(0), 0);
				func_168(1, "SNK_ITEM2", 0, 1, 0, 0, 0);
				func_168(1, "ITEM_COST", 1, 1, 0, 0, 0);
				func_164(func_167(1), 0);
				func_168(2, "SNK_ITEM3", 0, 1, 0, 0, 0);
				func_168(2, "ITEM_COST", 1, 1, 0, 0, 0);
				func_164(func_167(2), 0);
				func_163(0);
				func_162(Local_68.f_102.f_23, 1, 1);
				func_161("SNK_ITEM1_D", 0, 0);
				func_160(201, "ITEM_SELECT", -1, 0);
				func_160(202, "ITEM_BACK", -1, 0);
				func_160(203, "SNK_LIFT", -1, 0);
				iLocal_66 = 3;
				break;
			
			case 3:
				iVar6 = 0;
				if (unk_0xCC17806DB0C41C19())
				{
					if (unk_0x4566EBBAF3C1E749(2))
					{
						unk_0x8B438725D591ED78(0, 1, 1);
						unk_0x8B438725D591ED78(0, 2, 1);
						unk_0x3210A569BAF257BB(0, 237, 1);
						unk_0x3210A569BAF257BB(0, 238, 1);
						unk_0x3210A569BAF257BB(0, 241, 1);
						unk_0x3210A569BAF257BB(0, 242, 1);
						func_157(0, 0, 0, 1);
						func_156(0, -1, 1);
						if (func_155())
						{
							if (Global_4541029 != Local_68.f_102.f_23)
							{
								unk_0x531D638530A8DB97(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								Local_68.f_102.f_23 = Global_4541029;
								func_162(Local_68.f_102.f_23, 1, 1);
								Local_68.f_102.f_37 = 0;
								Local_68.f_102.f_41 = 0;
								Local_68.f_102.f_42 = 0;
								sVar7 = func_154(Local_68.f_102.f_23);
								if (unk_0x42FA33BDEDF21186(sVar7))
								{
									func_161(sVar7, 0, 0);
								}
							}
							else
							{
								iVar6 = 1;
							}
						}
					}
				}
				func_114(1, iLocal_568, 1, 0, 1, -1082130432, 0, 0, -1);
				func_110();
				if (unk_0xE665ABCFC5784C35(2, 201) || iVar6 == 1)
				{
					Local_68.f_102.f_37 = 1;
					Local_68.f_102.f_41 = 0;
					Local_68.f_102.f_42 = 0;
					if (Local_68.f_102.f_40 && Local_68.f_102.f_43)
					{
						Local_68.f_102.f_44 = 1;
						unk_0x531D638530A8DB97(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						iLocal_631 = 1;
						iLocal_634 = Local_68.f_102.f_23;
						iLocal_66 = 4;
					}
					else
					{
						Local_68.f_102.f_44 = 0;
						unk_0x531D638530A8DB97(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
				}
				if (unk_0xE665ABCFC5784C35(2, 203))
				{
					iLocal_66 = 6;
					unk_0x531D638530A8DB97(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					func_109();
				}
				if (unk_0xE665ABCFC5784C35(2, 202) || unk_0x6BD2D66249562506(2, 238))
				{
					iLocal_66 = 7;
					Local_68.f_102.f_45 = unk_0xA5E11AF0A2B928C1();
					unk_0x531D638530A8DB97(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					func_109();
				}
				break;
			
			case 4:
				func_114(1, iLocal_568, 1, 0, 1, -1082130432, 0, 0, -1);
				switch (Local_68.f_102.f_23)
				{
					case 0:
						iVar0 = func_167(Local_68.f_102.f_23);
						if (iVar1 + 10 > iVar2)
						{
							unk_0xED2BD879E739E86B(unk_0xC1A5EC5C986B98AD(), iVar2, 0);
						}
						else
						{
							unk_0xED2BD879E739E86B(unk_0xC1A5EC5C986B98AD(), iVar1 + 10, 0);
						}
						break;
					
					case 1:
						iVar0 = func_167(Local_68.f_102.f_23);
						if (iVar1 + 20 > iVar2)
						{
							unk_0xED2BD879E739E86B(unk_0xC1A5EC5C986B98AD(), iVar2, 0);
						}
						else
						{
							unk_0xED2BD879E739E86B(unk_0xC1A5EC5C986B98AD(), iVar1 + 20, 0);
						}
						break;
					
					case 2:
						iVar0 = func_167(Local_68.f_102.f_23);
						if (iVar1 + 15 > iVar2)
						{
							unk_0xED2BD879E739E86B(unk_0xC1A5EC5C986B98AD(), iVar2, 0);
						}
						else
						{
							unk_0xED2BD879E739E86B(unk_0xC1A5EC5C986B98AD(), iVar1 + 15, 0);
						}
						break;
				}
				func_69(func_103(), 98, iVar0);
				if (!Local_68.f_102.f_39)
				{
					iLocal_53 = 34;
					Local_68.f_102.f_39 = 1;
				}
				func_13(&(Local_68.f_102.f_53));
				iLocal_66 = 3;
				break;
			
			case 5:
				if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
				{
					if (!bLocal_574)
					{
					}
					iLocal_66 = 6;
				}
				break;
			
			case 6:
				switch (Local_68.f_102.f_23)
				{
					case 0:
						if (iVar1 + 10 > iVar2)
						{
							unk_0xED2BD879E739E86B(unk_0xC1A5EC5C986B98AD(), iVar2, 0);
						}
						else
						{
							unk_0xED2BD879E739E86B(unk_0xC1A5EC5C986B98AD(), iVar1 + 10, 0);
						}
						break;
					
					case 1:
						if (iVar1 + 20 > iVar2)
						{
							unk_0xED2BD879E739E86B(unk_0xC1A5EC5C986B98AD(), iVar2, 0);
						}
						else
						{
							unk_0xED2BD879E739E86B(unk_0xC1A5EC5C986B98AD(), iVar1 + 20, 0);
						}
						break;
					
					case 2:
						if (iVar1 + 15 > iVar2)
						{
							unk_0xED2BD879E739E86B(unk_0xC1A5EC5C986B98AD(), iVar2, 0);
						}
						else
						{
							unk_0xED2BD879E739E86B(unk_0xC1A5EC5C986B98AD(), iVar1 + 15, 0);
						}
						break;
				}
				unk_0xE333240A90F2FF3C(unk_0x5DC3DCA82C806319(), 1, 0);
				func_180(23, 0);
				iLocal_53 = 35;
				if (!unk_0x66599E73DBA5A850(Local_68.f_2) && func_1(Local_68.f_470, 4))
				{
					unk_0x3EE48ADC8C7F5CC4(Local_68.f_2, "misscommon@response", "give_me_a_break", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
				if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) < 1)
				{
					func_16(1, 0);
				}
				iLocal_66 = 8;
				break;
			
			case 7:
				if ((unk_0xA5E11AF0A2B928C1() - Local_68.f_102.f_45) > 1000)
				{
					iLocal_66 = 0;
				}
				else
				{
					unk_0x4150CF46B891FFF5(2, 193);
					unk_0x4150CF46B891FFF5(2, 202);
					unk_0x4150CF46B891FFF5(2, 188);
					unk_0x4150CF46B891FFF5(2, 187);
					unk_0x4150CF46B891FFF5(2, 189);
					unk_0x4150CF46B891FFF5(2, 190);
				}
				break;
			
			case 8:
				break;
		}
	}
	else
	{
		if (iLocal_66 != 8 && func_1(Local_68.f_470, 4))
		{
			if ((iLocal_66 == 3 || iLocal_66 == 2) || iLocal_66 == 4)
			{
				func_109();
			}
			iLocal_66 = 8;
		}
		if (func_28("SHR_SNACKS"))
		{
			unk_0xCD3C8E1022864F65(1);
			func_184(&(Local_68.f_469));
		}
		if (func_28("SHR_MENU"))
		{
			unk_0xCD3C8E1022864F65(1);
			func_184(&(Local_68.f_469));
		}
		if (BitTest(Local_68.f_162.f_18, 1) && iLocal_624 < 2)
		{
			unk_0x061B1200C95204CB(&(Local_68.f_162.f_18), true);
		}
		if (func_1(Local_68.f_470, 4))
		{
			func_68();
		}
	}
}

void func_68()
{
	if (func_1(Local_68.f_470, 2048))
	{
		if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
			}
			unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
			func_300(&(Local_68.f_470), 2048);
		}
	}
	Local_68.f_102.f_37 = 0;
	unk_0x061B1200C95204CB(&(Local_68.f_162.f_18), true);
	if (unk_0xF57C1326FD40C8A7(uLocal_641))
	{
		unk_0x42B9FA814615C4F9(uLocal_641, 0);
	}
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	if (func_102(iParam0) == 3)
	{
		return 0;
	}
	if (func_102(iParam0) == 4)
	{
		return 0;
	}
	return func_70(func_102(iParam0), 0, iParam1, iParam2, 0);
}

int func_70(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_101();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_100(99, 1);
					func_99(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_99(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_99(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_84(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_81(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_99(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_99(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_99(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_81(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_99(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_99(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_99(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_99(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_99(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_99(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_99(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_99(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_99(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x63C7B2D430A46FC3())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_99(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_99(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_99(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_99(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_99(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_99(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_81(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_99(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_99(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_99(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_99(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_99(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_99(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_80(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_100(95, iParam3);
					break;
				
				case 1:
					func_100(97, iParam3);
					break;
				
				case 2:
					func_100(96, iParam3);
					break;
			}
			func_100(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_73(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_73(bVar1);
	}
	iVar5 = (Global_60536[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60536[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60536[iVar2] = 2147483647;
				}
				else
				{
					Global_60536[iVar2] = (Global_60536[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_99(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_99(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_99(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60536[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60536[iVar2];
			Global_60536[iVar2] = (Global_60536[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113648.f_20566.f_233[iVar2 /*69*/]++;
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_1++;
		if (Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_72(iParam0);
	if (Global_43257 == 15)
	{
		func_71(0);
	}
	return 1;
}

void func_71(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60544[iVar0 /*3*/][0] = Global_113648.f_20566[iVar0];
		Global_60544.f_31[iVar0 /*3*/][0] = Global_113648.f_20566.f_11[iVar0];
		Global_60544.f_62[iVar0 /*3*/][0] = Global_113648.f_20566.f_22[iVar0];
		Global_60544.f_93[iVar0 /*3*/][0] = Global_113648.f_20566.f_33[iVar0];
		Global_60544.f_124[iVar0 /*3*/][0] = Global_113648.f_20566.f_44[iVar0];
		Global_60544.f_155[iVar0 /*3*/][0] = Global_113648.f_20566.f_55[iVar0];
		Global_60544.f_186[iVar0 /*3*/][0] = Global_113648.f_20566.f_66[iVar0];
		Global_60544.f_217[iVar0 /*3*/][0] = Global_113648.f_20566.f_77[iVar0];
		Global_60544.f_248[iVar0 /*3*/][0] = Global_113648.f_20566.f_88[iVar0];
		if (!bParam0)
		{
			Global_60544[iVar0 /*3*/][1] = Global_113648.f_20566[iVar0];
			Global_60544.f_31[iVar0 /*3*/][1] = Global_113648.f_20566.f_11[iVar0];
			Global_60544.f_62[iVar0 /*3*/][1] = Global_113648.f_20566.f_22[iVar0];
			Global_60544.f_93[iVar0 /*3*/][1] = Global_113648.f_20566.f_33[iVar0];
			Global_60544.f_124[iVar0 /*3*/][1] = Global_113648.f_20566.f_44[iVar0];
			Global_60544.f_155[iVar0 /*3*/][1] = Global_113648.f_20566.f_55[iVar0];
			Global_60544.f_186[iVar0 /*3*/][1] = Global_113648.f_20566.f_66[iVar0];
			Global_60544.f_217[iVar0 /*3*/][1] = Global_113648.f_20566.f_77[iVar0];
			Global_60544.f_248[iVar0 /*3*/][1] = Global_113648.f_20566.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_72(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_60536[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x3CC35ACFFC9C730E(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x3CC35ACFFC9C730E(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x3CC35ACFFC9C730E(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_73(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_79(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_79(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_79(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_79(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_76(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_76(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_76(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_76(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_76(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_76(8277, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0xA26A9A07F761D8F8())
	{
		if (BitTest(Global_113648.f_20566.f_471, bParam0))
		{
			bVar0 = true;
			unk_0x061B1200C95204CB(&(Global_113648.f_20566.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113648.f_20566.f_471, bParam0) || BitTest(Global_2359296[func_75() /*5568*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0x061B1200C95204CB(&(Global_113648.f_20566.f_471), bParam0);
		unk_0x061B1200C95204CB(&(Global_2359296[func_75() /*5568*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xD30970E11AD0FF0D("COUP_RED");
		unk_0x48849374B34BB7B9(func_74(bParam0));
		unk_0x4BE755B3858339A1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_74(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_75()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_76(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_77(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
}

int func_77(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_78();
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

int func_78()
{
	return Global_1574918;
}

void func_79(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_78();
	}
	unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
}

void func_80(int iParam0)
{
	func_100(93, iParam0);
	func_100(29, iParam0);
	func_100(30, iParam0);
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_83(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_83(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_83(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_83(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xD48CE560FB238316();
		iVar1 = func_82(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xD48CE560FB238316();
		iVar3 = func_82(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xD48CE560FB238316();
		iVar5 = func_82(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xD48CE560FB238316();
		iVar7 = func_82(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xD48CE560FB238316();
		iVar9 = func_82(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xD48CE560FB238316();
		iVar11 = func_82(8277, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0xA26A9A07F761D8F8())
	{
		return BitTest(Global_113648.f_20566.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_75() /*5568*/].f_681.f_10, iParam0);
}

int func_82(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2805027[iParam0 /*3*/][func_77(iParam1)];
		if (unk_0xDD7756E2742E0F6D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_83(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_78();
	}
	return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}

int func_84(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x73651E4B1D91FE32(27))
	{
		return 0;
	}
	if (unk_0xDD7756E2742E0F6D(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xDD7756E2742E0F6D(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xDD7756E2742E0F6D(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xDD7756E2742E0F6D(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x3CC35ACFFC9C730E(joaat("num_cash_spent"), iVar1, 1);
		func_98(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_85(27, 1);
	return 1;
}

int func_85(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_86(iParam0, iParam1);
}

int func_86(int iParam0, int iParam1)
{
	if (func_316(14) && !func_97(iParam0))
	{
		return 0;
	}
	if (unk_0x73651E4B1D91FE32(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32414 != 0 && !Global_78558)
	{
		return 0;
	}
	if (func_96(&Global_4542597))
	{
		if (func_94(&Global_4542597, iParam0))
		{
			return 0;
		}
		if (func_87(&Global_4542597, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xD530287A65F961E4(iParam0))
		{
			return 0;
		}
		if (unk_0x73651E4B1D91FE32(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_87(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x73651E4B1D91FE32(iParam1))
	{
		return 0;
	}
	if (func_316(14) && !func_97(iParam1))
	{
		return 0;
	}
	if (func_94(uParam0, iParam1))
	{
		return 0;
	}
	if (func_93(uParam0) < 0f)
	{
		func_92(uParam0, 0);
	}
	func_90(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_88(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_88(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x73651E4B1D91FE32(iParam1))
	{
		return 0;
	}
	if (func_316(14) && !func_97(iParam1))
	{
		return 0;
	}
	if (func_94(uParam0, iParam1))
	{
		return 0;
	}
	if (func_93(uParam0) < 0f)
	{
		func_92(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_89(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_89(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_90(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_91(uParam0, iVar0);
		iVar0++;
	}
	func_92(uParam0, (Global_4542596 - 0.5f));
}

void func_91(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_92(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_93(var uParam0)
{
	return uParam0->f_80;
}

bool func_94(var uParam0, int iParam1)
{
	return func_95(uParam0, iParam1) != -1;
}

int func_95(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_96(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

int func_98(int iParam0, int iParam1)
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

void func_99(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xDD7756E2742E0F6D(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3CC35ACFFC9C730E(iParam0, iVar0, 1);
}

void func_100(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59104[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		return;
	}
	if (Global_59104[iParam0 /*7*/])
	{
		unk_0xDD7756E2742E0F6D(Global_59104[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x3CC35ACFFC9C730E(Global_59104[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_101()
{
	int iVar0;
	
	if (unk_0x7FFBE14C34D75E19())
	{
		unk_0xDD7756E2742E0F6D(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_60536[0] == iVar0)
		{
			Global_60536[0] = iVar0;
		}
		unk_0xDD7756E2742E0F6D(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_60536[1] == iVar0)
		{
			Global_60536[1] = iVar0;
		}
		unk_0xDD7756E2742E0F6D(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_60536[2] == iVar0)
		{
			Global_60536[2] = iVar0;
		}
	}
}

int func_102(int iParam0)
{
	return Global_2028[iParam0 /*29*/].f_17;
}

int func_103()
{
	func_104();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_104()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_107(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_106(unk_0xC1A5EC5C986B98AD());
			if (func_105(iVar0) && (!func_316(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_105(Global_113648.f_2365.f_539.f_4321))
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

bool func_105(int iParam0)
{
	return iParam0 < 3;
}

int func_106(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_107(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_107(int iParam0)
{
	if (func_105(iParam0))
	{
		return func_108(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_108(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_109()
{
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
	}
	func_300(&(Local_68.f_470), 2048);
	unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
	unk_0xAABD7B0753C5C286(0);
	unk_0xEAB390443C680F72(0, 1065353216);
	func_180(23, 0);
	Local_68.f_102.f_37 = 0;
	unk_0x061B1200C95204CB(&(Local_68.f_162.f_18), true);
	if (unk_0xF57C1326FD40C8A7(uLocal_641))
	{
		unk_0x42B9FA814615C4F9(uLocal_641, 0);
	}
	unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
}

void func_110()
{
	char* sVar0;
	
	unk_0x4150CF46B891FFF5(2, 193);
	unk_0x4150CF46B891FFF5(2, 202);
	unk_0x4150CF46B891FFF5(2, 188);
	unk_0x4150CF46B891FFF5(2, 187);
	unk_0x4150CF46B891FFF5(2, 189);
	unk_0x4150CF46B891FFF5(2, 190);
	if (func_113())
	{
		Local_68.f_102.f_37 = 0;
		func_40(&(Local_68.f_102.f_53));
		Local_68.f_102.f_23 = (Local_68.f_102.f_23 - 1);
		if (Local_68.f_102.f_23 < 0)
		{
			Local_68.f_102.f_23 = (Local_68.f_102.f_24 - 1);
		}
		unk_0x531D638530A8DB97(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_162(Local_68.f_102.f_23, 1, 1);
		sVar0 = func_154(Local_68.f_102.f_23);
		Local_68.f_102.f_41 = 0;
		Local_68.f_102.f_42 = 0;
		if (unk_0x42FA33BDEDF21186(sVar0))
		{
			func_161(sVar0, 0, 0);
		}
	}
	if (func_112())
	{
		Local_68.f_102.f_37 = 0;
		func_40(&(Local_68.f_102.f_53));
		Local_68.f_102.f_23++;
		if (Local_68.f_102.f_23 > (Local_68.f_102.f_24 - 1))
		{
			Local_68.f_102.f_23 = 0;
		}
		unk_0x531D638530A8DB97(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_162(Local_68.f_102.f_23, 1, 1);
		sVar0 = func_154(Local_68.f_102.f_23);
		Local_68.f_102.f_41 = 0;
		Local_68.f_102.f_42 = 0;
		if (unk_0x42FA33BDEDF21186(sVar0))
		{
			func_161(sVar0, 0, 0);
		}
	}
	if (!Local_68.f_102.f_41)
	{
		Local_68.f_102.f_40 = func_111(func_106(unk_0xC1A5EC5C986B98AD())) >= func_167(Local_68.f_102.f_23);
		Local_68.f_102.f_41 = 1;
	}
	if (!Local_68.f_102.f_42)
	{
		Local_68.f_102.f_43 = unk_0x2935B4D6CE81318D(unk_0xC1A5EC5C986B98AD()) < unk_0x15848AD475FC952B(unk_0xC1A5EC5C986B98AD());
		Local_68.f_102.f_42 = 1;
	}
	if (Local_68.f_102.f_37)
	{
		if (func_41(&(Local_68.f_102.f_53)) < 3f)
		{
			if (Local_68.f_102.f_44)
			{
				func_161("SNK_BOUGHT", 0, 0);
			}
			else if (!Local_68.f_102.f_40)
			{
				func_161("SNK_AFFORD", 0, 0);
			}
			else if (!Local_68.f_102.f_43)
			{
				func_161("SNK_NEEDED", 0, 0);
			}
		}
		else
		{
			Local_68.f_102.f_37 = 0;
			Local_68.f_102.f_44 = 0;
			func_40(&(Local_68.f_102.f_53));
			sVar0 = func_154(Local_68.f_102.f_23);
			if (unk_0x42FA33BDEDF21186(sVar0))
			{
				func_161(sVar0, 0, 0);
			}
		}
	}
}

int func_111(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0xDD7756E2742E0F6D(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xDD7756E2742E0F6D(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xDD7756E2742E0F6D(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_112()
{
	float fVar0;
	
	fVar0 = unk_0x081A0AFF82F20357(2, 219);
	if ((fVar0 > 0.8f || unk_0x51EB177CA0562B62(2, 187)) || unk_0x87644B1F984197FE(2, 242))
	{
		if (!func_15(&uLocal_638))
		{
			func_12(&uLocal_638);
			return 1;
		}
		else if (func_9(&uLocal_638) > 0.25f)
		{
			func_13(&uLocal_638);
			return 1;
		}
	}
	else if (func_15(&uLocal_638))
	{
		func_40(&uLocal_638);
	}
	return 0;
}

int func_113()
{
	float fVar0;
	
	fVar0 = unk_0x081A0AFF82F20357(2, 219);
	if ((fVar0 < -0.8f || unk_0x51EB177CA0562B62(2, 188)) || unk_0x87644B1F984197FE(2, 241))
	{
		if (!func_15(&uLocal_635))
		{
			func_12(&uLocal_635);
			return 1;
		}
		else if (func_9(&uLocal_635) > 0.25f)
		{
			func_13(&uLocal_635);
			return 1;
		}
	}
	else if (func_15(&uLocal_635))
	{
		func_40(&uLocal_635);
	}
	return 0;
}

void func_114(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	var uVar60;
	var uVar61;
	float fVar62;
	char cVar63[64];
	char cVar79[64];
	float fVar95;
	int iVar96;
	float fVar97;
	float fVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	char cVar105[16];
	float fVar109;
	float fVar110;
	float fVar111;
	float fVar112;
	float fVar113;
	
	if (!func_59(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_151(0, bParam6))
	{
		return;
	}
	unk_0x8241C4807850E84A(76, 84);
	unk_0x345E4FB614ACF508(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	if (Global_23270)
	{
		if (func_149(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = (fVar37 / fVar36);
		}
		else
		{
			Global_23270 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23269;
	}
	fVar57 = (fParam5 * fVar58);
	if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_1)) == unk_0x14580F20CBCE4FA9("HIDE"))
	{
		fVar59 = Global_23268;
	}
	else
	{
		fVar59 = (((Global_23268 + fVar57) + 0.034722f) + 0f);
	}
	fVar62 = 1f;
	func_147(bParam7, &uVar60, &uVar61, &fVar62);
	if (bParam3)
	{
		if (Global_23270.f_5661 <= 1)
		{
			func_168(Global_23270.f_5661 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_23270.f_6457 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23270.f_6171)
		{
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_1)) == unk_0x14580F20CBCE4FA9("HIDE"))
			{
				fVar51 = Global_23268;
			}
			else
			{
				if (Global_23270)
				{
					StringCopy(&cVar63, func_146(29), 64);
					StringCopy(&cVar79, func_143(29, 1), 64);
					if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_7488[29 /*16*/])) == joaat("crew_logo"))
					{
						func_142(Global_23267, Global_23268, fParam5, fVar57, 0, 0, 0, 255);
						unk_0xB978B5D428DA5DE9(&cVar63, &cVar79, (Global_23267 + (fParam5 * 0.5f)), (Global_23268 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, 0, 0);
					}
					else
					{
						unk_0xB978B5D428DA5DE9(&cVar63, &cVar79, (Global_23267 + (fParam5 * 0.5f)), (Global_23268 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, 0, 0);
					}
				}
				if (Global_23270.f_8862)
				{
					iVar1 = Global_23270.f_8858;
					iVar2 = Global_23270.f_8859;
					iVar3 = Global_23270.f_8860;
					iVar4 = Global_23270.f_8861;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_142(Global_23267, (Global_23268 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_23268 + fVar57) + 0.034722f) + 0f);
				if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_1)) != 0)
				{
					func_141();
					unk_0x1AFC19685A6AF4A9(&(Global_23270.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23270.f_74)
					{
						if (Global_23270.f_5[iVar14] == 2)
						{
							unk_0x64C50E40AA09A6B5(Global_23270.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23270.f_5[iVar14] == 3)
						{
							unk_0xC072D668E49D9A7A(Global_23270.f_14[iVar16], Global_23270.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23270.f_5[iVar14] == 1)
						{
							unk_0x48849374B34BB7B9(&(Global_23270.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23270.f_5[iVar14] == 8)
						{
							unk_0x48849374B34BB7B9(&(Global_23270.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23270.f_5[iVar14] == 5)
						{
							unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23270.f_5[iVar14] == 6)
						{
							unk_0x48849374B34BB7B9(&(Global_23270.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23270.f_5[iVar14] == 7)
						{
							unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23270.f_5[iVar14] == 9)
						{
							unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x8E03B3A2F624EF8B((Global_23267 + 0.00390625f), ((Global_23268 + fVar57) + 0.00416664f), 0);
				}
				if (Global_23270.f_6178)
				{
					func_141();
					func_139((((Global_23267 + fParam5) - 0.00390625f) - func_140("CM_ITEM_COUNT", Global_23270.f_6179, Global_23270.f_6180)), ((Global_23268 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_23270.f_6179, Global_23270.f_6180);
				}
				else if (Global_23270.f_6174 > Global_23270.f_5668)
				{
					if (Global_23270.f_6177 != 0)
					{
						func_141();
						func_139((((Global_23267 + fParam5) - 0.00390625f) - func_140("CM_ITEM_COUNT", Global_23270.f_6177, Global_23270.f_6176)), ((Global_23268 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_23270.f_6177, Global_23270.f_6176);
					}
				}
			}
			iVar6 = Global_23270.f_6181;
			iVar9 = 0;
			fVar95 = fVar51;
			if (Global_23270.f_8872)
			{
				iVar1 = Global_23270.f_8868;
				iVar2 = Global_23270.f_8869;
				iVar3 = Global_23270.f_8870;
				iVar4 = Global_23270.f_8871;
			}
			else
			{
				unk_0x2D32CB870722E022(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23270.f_5668 && iVar6 <= Global_23270.f_5661)
			{
				if (iVar6 >= 0)
				{
					if (Global_23270.f_5928[iVar6])
					{
						if (Global_23270.f_5799[iVar6] && iVar6 != Global_23270.f_6181)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_23270.f_6188[iVar6] != 0f)
						{
							fVar56 = Global_23270.f_6188[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0xB978B5D428DA5DE9("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar95 + ((fVar51 - fVar95) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar95), 0f, 255, 255, 255, 255, 0, 0);
			if (Global_23270.f_6174 > Global_23270.f_5668)
			{
				if (Global_23270.f_8877)
				{
					iVar1 = Global_23270.f_8873;
					iVar2 = Global_23270.f_8874;
					iVar3 = Global_23270.f_8875;
					iVar4 = Global_23270.f_8876;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_142(Global_23267, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0x2D09CBD1F5910DEC("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_23270.f_8890)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x2D32CB870722E022(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xB978B5D428DA5DE9("CommonMenu", "shop_arrows_upANDdown", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_5081)) != 0 && Global_23270.f_5163 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23267 + 0.0046875f);
				if (Global_23270.f_5165 != 0)
				{
					func_149(Global_23270.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23267 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_138(fVar42);
				unk_0x4DCD7891F910F5EC(&(Global_23270.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23270.f_5159)
				{
					if (Global_23270.f_5093[iVar14] == 2)
					{
						unk_0x64C50E40AA09A6B5(Global_23270.f_5098[iVar15]);
						iVar15++;
					}
					else if (Global_23270.f_5093[iVar14] == 3)
					{
						unk_0xC072D668E49D9A7A(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
						iVar16++;
					}
					else if (Global_23270.f_5093[iVar14] == 1)
					{
						unk_0x48849374B34BB7B9(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 5)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 6)
					{
						unk_0x48849374B34BB7B9(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 7)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 9)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xDFA8EC685FA880FE(fVar42, (fVar51 + 0.00277776f));
				unk_0x2D32CB870722E022(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_142(Global_23267, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23270.f_8882)
				{
					iVar1 = Global_23270.f_8878;
					iVar2 = Global_23270.f_8879;
					iVar3 = Global_23270.f_8880;
					iVar4 = Global_23270.f_8881;
				}
				else
				{
					unk_0x2D32CB870722E022(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xB978B5D428DA5DE9("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_138(fVar42);
				unk_0x1AFC19685A6AF4A9(&(Global_23270.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23270.f_5159)
				{
					if (Global_23270.f_5093[iVar14] == 2)
					{
						unk_0x64C50E40AA09A6B5(Global_23270.f_5098[iVar15]);
						iVar15++;
					}
					else if (Global_23270.f_5093[iVar14] == 3)
					{
						unk_0xC072D668E49D9A7A(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
						iVar16++;
					}
					else if (Global_23270.f_5093[iVar14] == 1)
					{
						unk_0x48849374B34BB7B9(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 5)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 6)
					{
						unk_0x48849374B34BB7B9(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 7)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 9)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 8)
					{
						unk_0x48849374B34BB7B9(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x8E03B3A2F624EF8B(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_23270.f_5165 != 0)
				{
					func_149(Global_23270.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
					func_137(Global_23270.f_5165, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0xB978B5D428DA5DE9(func_146(Global_23270.f_5165), func_143(Global_23270.f_5165, 1), ((Global_23267 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
				}
				fVar51 = (fVar51 + (((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (!unk_0x2AC37494BBF1DB16(&(Global_23270.f_5087)))
				{
					fVar51 = (fVar51 + (0.00138888f * 6f));
					func_138(fVar42);
					unk_0x4DCD7891F910F5EC(&(Global_23270.f_5087));
					iVar6 = unk_0xDFA8EC685FA880FE(fVar42, (fVar51 + 0.00277776f));
					unk_0x2D32CB870722E022(2, &iVar1, &iVar2, &iVar3, &iVar4);
					func_142(Global_23267, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
					if (Global_23270.f_8882)
					{
						iVar1 = Global_23270.f_8878;
						iVar2 = Global_23270.f_8879;
						iVar3 = Global_23270.f_8880;
						iVar4 = Global_23270.f_8881;
					}
					else
					{
						unk_0x2D32CB870722E022(140, &iVar1, &iVar2, &iVar3, &iVar4);
					}
					unk_0xB978B5D428DA5DE9("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
					func_138(fVar42);
					unk_0x1AFC19685A6AF4A9(&(Global_23270.f_5087));
					unk_0x8E03B3A2F624EF8B(fVar42, (fVar51 + 0.00277776f), 0);
					fVar51 = (fVar51 + (((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				}
				if (Global_23270.f_5163 > 0)
				{
					if ((unk_0xA5E11AF0A2B928C1() - Global_23270.f_5164) > Global_23270.f_5163)
					{
						StringCopy(&(Global_23270.f_5081), "", 24);
						Global_23270.f_5163 = -1;
					}
				}
			}
			else if (!unk_0x2AC37494BBF1DB16(&(Global_23270.f_5087)))
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23267 + 0.0046875f);
				func_138(fVar42);
				unk_0x4DCD7891F910F5EC(&(Global_23270.f_5087));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23270.f_5159)
				{
					if (Global_23270.f_5093[iVar14] == 2)
					{
						unk_0x64C50E40AA09A6B5(Global_23270.f_5098[iVar15]);
						iVar15++;
					}
					else if (Global_23270.f_5093[iVar14] == 3)
					{
						unk_0xC072D668E49D9A7A(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
						iVar16++;
					}
					else if (Global_23270.f_5093[iVar14] == 1)
					{
						unk_0x48849374B34BB7B9(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 5)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 6)
					{
						unk_0x48849374B34BB7B9(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 7)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 9)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xDFA8EC685FA880FE(fVar42, (fVar51 + 0.00277776f));
				unk_0x2D32CB870722E022(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_142(Global_23267, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23270.f_8882)
				{
					iVar1 = Global_23270.f_8878;
					iVar2 = Global_23270.f_8879;
					iVar3 = Global_23270.f_8880;
					iVar4 = Global_23270.f_8881;
				}
				else
				{
					unk_0x2D32CB870722E022(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xB978B5D428DA5DE9("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_138(fVar42);
				unk_0x1AFC19685A6AF4A9(&(Global_23270.f_5087));
				unk_0x8E03B3A2F624EF8B(fVar42, (fVar51 + 0.00277776f), 0);
			}
			if (unk_0x14580F20CBCE4FA9(&(Global_4540953.f_21)) != 0 && Global_4540953.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23267 + 0.0046875f);
				if (Global_4540953.f_67 != 0)
				{
					func_149(Global_4540953.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23267 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_138(fVar42);
				unk_0x4DCD7891F910F5EC(&(Global_4540953.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4540953.f_61)
				{
					if (Global_4540953.f_25[iVar14] == 2)
					{
						unk_0x64C50E40AA09A6B5(Global_4540953.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4540953.f_25[iVar14] == 3)
					{
						unk_0xC072D668E49D9A7A(Global_4540953.f_34[iVar16], Global_4540953.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4540953.f_25[iVar14] == 1)
					{
						unk_0x48849374B34BB7B9(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 5)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 6)
					{
						unk_0x48849374B34BB7B9(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 7)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 9)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 8)
					{
						unk_0x48849374B34BB7B9(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xDFA8EC685FA880FE(fVar42, (fVar51 + 0.00277776f));
				unk_0x2D32CB870722E022(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_142(Global_23267, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23270.f_8882)
				{
					iVar1 = Global_23270.f_8878;
					iVar2 = Global_23270.f_8879;
					iVar3 = Global_23270.f_8880;
					iVar4 = Global_23270.f_8881;
				}
				else
				{
					unk_0x2D32CB870722E022(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xB978B5D428DA5DE9("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_138(fVar42);
				unk_0x1AFC19685A6AF4A9(&(Global_4540953.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4540953.f_61)
				{
					if (Global_4540953.f_25[iVar14] == 2)
					{
						unk_0x64C50E40AA09A6B5(Global_4540953.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4540953.f_25[iVar14] == 3)
					{
						unk_0xC072D668E49D9A7A(Global_4540953.f_34[iVar16], Global_4540953.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4540953.f_25[iVar14] == 1)
					{
						unk_0x48849374B34BB7B9(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 8)
					{
						unk_0x48849374B34BB7B9(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 5)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 6)
					{
						unk_0x48849374B34BB7B9(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 7)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 9)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x8E03B3A2F624EF8B(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4540953.f_67 != 0)
				{
					func_149(Global_4540953.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_137(Global_4540953.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0xB978B5D428DA5DE9(func_146(Global_4540953.f_67), func_143(Global_4540953.f_67, 1), ((Global_23267 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
				}
				fVar51 = (fVar51 + (((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4540953.f_65 > 0)
				{
					if ((unk_0xA5E11AF0A2B928C1() - Global_4540953.f_66) > Global_4540953.f_65)
					{
						StringCopy(&(Global_4540953.f_21), "", 16);
						Global_4540953.f_65 = -1;
					}
				}
			}
			func_130(uVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0x8241C4807850E84A(76, 84);
			unk_0x345E4FB614ACF508(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23270.f_6171)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar96 = Global_23270.f_5661;
			if (Global_23270.f_6172)
			{
				iVar96 = (Global_23270.f_6175 - 1);
			}
			fVar97 = 0f;
			fVar98 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar96)
			{
				fVar56 = 0.034722f;
				if (Global_23270.f_6188[iVar6] != 0f)
				{
					fVar56 = Global_23270.f_6188[iVar6];
				}
				if (Global_23270.f_6172)
				{
					iVar6 = Global_23270.f_8513[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23270.f_6181 && iVar9 < Global_23270.f_5668)
				{
					bVar33 = true;
					if (Global_23270.f_6182 == iVar6)
					{
						fVar98 = fVar97;
					}
					if (Global_23270.f_5799[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23270.f_6322[iVar6] = fVar35;
				fVar34 = (Global_23267 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_23270.f_6182 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_23270.f_8884)
					{
						unk_0x2D32CB870722E022(Global_23270.f_8883, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else
					{
						unk_0x2D32CB870722E022(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					unk_0xB978B5D428DA5DE9("CommonMenu", "Gradient_Nav", (Global_23267 + (fParam5 * 0.5f)), (((fVar59 + fVar98) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar100, iVar101, iVar102, iVar103, 0, 0);
					Global_23270.f_6320 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23270.f_5669)
				{
					if (BitTest(Global_23270.f_5532[iVar6], iVar8) || Global_23270.f_5499[iVar8] == 5)
					{
						if (Global_23270.f_6172)
						{
							iVar19 = Global_23270.f_8529[((iVar9 * Global_23270.f_5669) + iVar8)];
							iVar20 = Global_23270.f_8570[((iVar9 * Global_23270.f_5669) + iVar8)];
							iVar21 = Global_23270.f_8611[((iVar9 * Global_23270.f_5669) + iVar8)];
							iVar22 = Global_23270.f_8652[((iVar9 * Global_23270.f_5669) + iVar8)];
							iVar23 = Global_23270.f_8693[((iVar9 * Global_23270.f_5669) + iVar8)];
						}
						else
						{
							Global_23270.f_8529[((iVar9 * Global_23270.f_5669) + iVar8)] = iVar19;
							Global_23270.f_8570[((iVar9 * Global_23270.f_5669) + iVar8)] = iVar20;
							Global_23270.f_8611[((iVar9 * Global_23270.f_5669) + iVar8)] = iVar21;
							Global_23270.f_8652[((iVar9 * Global_23270.f_5669) + iVar8)] = iVar22;
							Global_23270.f_8693[((iVar9 * Global_23270.f_5669) + iVar8)] = iVar23;
						}
						iVar104 = 0;
						bVar55 = false;
						if (Global_23270.f_6454[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23270.f_6451[0])
							{
								bVar55 = true;
								iVar104 = 0;
							}
						}
						if (Global_23270.f_6454[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23270.f_6451[1])
							{
								bVar55 = true;
								iVar104 = 1;
							}
						}
						if (Global_23270.f_5505[iVar8] != -1f)
						{
							fVar34 = ((Global_23267 + 0.0046875f) + Global_23270.f_5505[iVar8]);
						}
						if ((iVar8 < 4 && Global_23270.f_5505[iVar8 + 1] != -1f) && fVar34 < Global_23270.f_5505[iVar8 + 1])
						{
							fVar46 = (Global_23270.f_5505[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_23267 + Global_23269) - 0.0046875f) - fVar34);
						}
						if ((Global_23270.f_5518[iVar8] && Global_23270.f_6317) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_23270.f_5499[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23270.f_6172)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23270.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											if (Global_23270.f_2130[iVar24])
											{
												bVar53 = true;
											}
											func_128(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, iVar104, bVar53, bVar52);
											unk_0x061288CA1E28CA54(&(Global_23270.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x48849374B34BB7B9(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x48849374B34BB7B9(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x76B34CBB6F5FA1BB(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x48849374B34BB7B9(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x76B34CBB6F5FA1BB(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x76B34CBB6F5FA1BB(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x64C50E40AA09A6B5(Global_23270.f_4309[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xC072D668E49D9A7A(Global_23270.f_4566[(iVar21 + iVar27)], Global_23270.f_4695[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
										{
											fVar43 = unk_0x1337CDB3E4371A85(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_149(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_23270.f_4824[(iVar22 + iVar14)] == 2 || Global_23270.f_4824[(iVar22 + iVar14)] == 52) || Global_23270.f_4824[(iVar22 + iVar14)] == 62)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_23270.f_5526[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_23270.f_5526[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar42;
										Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar43;
										Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar44;
										if (Global_23270.f_5526[iVar8] == 2)
										{
											iVar99 = (iVar8 - 1);
											while (iVar99 >= 0)
											{
												if (Global_23270.f_5526[iVar99] == 2)
												{
													Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar99)] = (Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar99)] - Global_23270.f_5511[iVar8]);
												}
												iVar99 = (iVar99 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
										fVar43 = Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
										fVar44 = Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)];
									}
									if (bVar54)
									{
										if (func_149(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23270.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_149(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_137(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xB978B5D428DA5DE9(func_146(26), func_143(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_149(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_149(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_137(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xB978B5D428DA5DE9(func_146(27), func_143(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23270.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										if (Global_23270.f_2130[iVar24])
										{
											bVar53 = true;
										}
										func_128(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_23270.f_8888 && Global_23270.f_8889 == iVar6)
										{
											func_127(bVar32);
										}
										unk_0x1AFC19685A6AF4A9(&(Global_23270.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x48849374B34BB7B9(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x48849374B34BB7B9(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76B34CBB6F5FA1BB(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x48849374B34BB7B9(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76B34CBB6F5FA1BB(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76B34CBB6F5FA1BB(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x64C50E40AA09A6B5(Global_23270.f_4309[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xC072D668E49D9A7A(Global_23270.f_4566[(iVar21 + iVar27)], Global_23270.f_4695[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23270.f_4824[(iVar22 + iVar28)] == 2 || Global_23270.f_4824[(iVar22 + iVar28)] == 52) || Global_23270.f_4824[(iVar22 + iVar28)] == 62)
											{
												if (func_149(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_149(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_137(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_23270.f_5526[iVar8] == 2)
															{
																unk_0xB978B5D428DA5DE9(func_146(Global_23270.f_4824[(iVar22 + iVar28)]), func_143(Global_23270.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else
															{
																unk_0xB978B5D428DA5DE9(func_146(Global_23270.f_4824[(iVar22 + iVar28)]), func_143(Global_23270.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23270.f_5526[iVar8] == 2)
										{
											unk_0x8E03B3A2F624EF8B(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0x8E03B3A2F624EF8B((fVar34 + fVar42), fVar35, 0);
											if (func_126() && unk_0x24B651D85CCE5EB4(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23270.f_2130[iVar24])
													{
														bVar53 = true;
													}
													func_128(0, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar105, "TEST_LABEL", 16);
													fVar109 = 0f;
													fVar110 = 55f;
													fVar111 = 0.0185f;
													fVar112 = 0.004f;
													fVar113 = 0.02f;
													unk_0xF4621DEB617A5113(0f, (0.35f * 0.7f));
													unk_0x4EC989440A6E11DD(255, 255, 255, 150);
													unk_0xD88E9AF5626B0121((fVar34 - (fVar113 * 0.6f)), (fVar35 + (fVar111 * 0.75f)), 0.0175f, 0.035f, unk_0xF34EE736CF047844(fVar109), unk_0xF34EE736CF047844(fVar109), unk_0xF34EE736CF047844(fVar109), unk_0xF34EE736CF047844(fVar110), 0);
													unk_0x1AFC19685A6AF4A9(&cVar105);
													unk_0x64C50E40AA09A6B5((Global_23270.f_6181 + iVar30));
													unk_0x8E03B3A2F624EF8B((fVar34 - fVar113), (fVar35 + fVar112), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23270.f_4824[(iVar22 + iVar14)] != 2 && Global_23270.f_4824[(iVar22 + iVar14)] != 52) && Global_23270.f_4824[(iVar22 + iVar14)] != 62)
											{
												if (func_149(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_149(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_137(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_23270.f_4824[(iVar22 + iVar14)] == 30)
															{
																unk_0xB978B5D428DA5DE9(func_146(Global_23270.f_4824[(iVar22 + iVar14)]), func_143(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), (Global_23267 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else if (Global_23270.f_5526[iVar8] == 2)
															{
																unk_0xB978B5D428DA5DE9(func_146(Global_23270.f_4824[(iVar22 + iVar14)]), func_143(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else
															{
																unk_0xB978B5D428DA5DE9(func_146(Global_23270.f_4824[(iVar22 + iVar14)]), func_143(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23270.f_6172)
									{
										func_128(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23270.f_8888 && Global_23270.f_8889 == iVar6)
										{
											func_127(bVar32);
										}
										unk_0x061288CA1E28CA54("NUMBER");
										unk_0x64C50E40AA09A6B5(Global_23270.f_4309[iVar20]);
										fVar43 = unk_0x1337CDB3E4371A85(1);
										fVar42 = 0f;
										if (Global_23270.f_5526[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23270.f_5526[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar42;
										Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
										fVar43 = Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
									}
									if (bVar54)
									{
										if (func_149(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23270.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_149(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_137(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xB978B5D428DA5DE9(func_146(26), func_143(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_149(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_149(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_137(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xB978B5D428DA5DE9(func_146(27), func_143(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_128(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, 0, 0);
										func_125((fVar34 + fVar42), fVar35, "NUMBER", Global_23270.f_4309[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23270.f_6172)
									{
										func_128(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23270.f_8888 && Global_23270.f_8889 == iVar6)
										{
											func_127(bVar32);
										}
										unk_0x061288CA1E28CA54("NUMBER");
										unk_0xC072D668E49D9A7A(Global_23270.f_4566[iVar21], Global_23270.f_4695[iVar21]);
										fVar43 = unk_0x1337CDB3E4371A85(1);
										fVar42 = 0f;
										if (Global_23270.f_5526[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23270.f_5526[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar42;
										Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
										fVar43 = Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
									}
									if (bVar54)
									{
										if (func_149(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23270.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_149(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_137(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xB978B5D428DA5DE9(func_146(26), func_143(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_149(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_149(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_137(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xB978B5D428DA5DE9(func_146(27), func_143(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									func_128(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, 0, 0);
									func_124((fVar34 + fVar42), fVar35, "NUMBER", Global_23270.f_4566[iVar21], Global_23270.f_4695[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_149(Global_23270.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23270.f_6172)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_23270.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_23270.f_5526[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar42;
											Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
											fVar44 = Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)];
										}
										if (bVar54)
										{
											if (func_149(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23270.f_5526[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_149(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_137(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0xB978B5D428DA5DE9(func_146(26), func_143(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
													}
												}
											}
											if (func_149(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_149(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_137(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0xB978B5D428DA5DE9(func_146(27), func_143(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_149(Global_23270.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_137(Global_23270.f_4824[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												unk_0xB978B5D428DA5DE9(func_146(Global_23270.f_4824[iVar22]), func_143(Global_23270.f_4824[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_123(Global_23270.f_4824[iVar22])), (fVar37 * func_123(Global_23270.f_4824[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_23270.f_5499[iVar8] == 5)
						{
							if (Global_23270.f_5511[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23270.f_5511[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23270.f_5511[iVar8]);
							if (Global_23270.f_5518[iVar8])
							{
								if (func_149(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23270.f_5511[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_23270.f_8513[iVar9] = iVar6;
						Global_23270.f_6183 = iVar6;
						iVar9++;
						if (Global_23270.f_5799[iVar6])
						{
							iVar13++;
						}
						if (Global_23270.f_6188[iVar6] != 0f)
						{
							fVar97 = (fVar97 + Global_23270.f_6188[iVar6]);
						}
						else
						{
							fVar97 = (fVar97 + 0.034722f);
						}
					}
					if (!Global_23270.f_6171)
					{
						Global_23270.f_5928[iVar6] = 1;
						if (Global_23270.f_5670[iVar6])
						{
							if (bVar32)
							{
								Global_23270.f_6177 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23270.f_6177 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23270.f_6171)
			{
				Global_23270.f_6173 = ((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12)));
				Global_23270.f_6176 = iVar11;
				Global_23270.f_6174 = iVar10;
				Global_23270.f_6171 = 1;
			}
		}
		if (!Global_23270.f_6172)
		{
			Global_23270.f_6175 = iVar9;
			Global_23270.f_6172 = 1;
		}
		iVar5++;
	}
	Global_23270.f_6319 = fVar51;
	Global_23270.f_6321 = unk_0xA5E11AF0A2B928C1();
	unk_0x314A52B02A05EEDE(Global_23270.f_6319);
	if (!Global_23270.f_8857)
	{
		func_116(0);
	}
	Global_23270.f_8857 = 0;
	if (bParam2)
	{
		unk_0xEDECDDE17C1E41F5(10);
	}
	unk_0xEDECDDE17C1E41F5(6);
	unk_0xEDECDDE17C1E41F5(7);
	unk_0xEDECDDE17C1E41F5(9);
	unk_0xEDECDDE17C1E41F5(8);
	if (bParam0)
	{
		func_115(1);
	}
	unk_0x4B358573708E8571();
}

void func_115(int iParam0)
{
	Global_1655472.f_1163 = iParam0;
}

void func_116(int iParam0)
{
	if (func_122())
	{
		return;
	}
	if (!Global_20383.f_1 == 1)
	{
		if (func_121(0))
		{
			func_117(iParam0);
		}
		unk_0xECDAB41968FF21A8(&Global_8254, 2);
	}
}

void func_117(int iParam0)
{
	if (func_122())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_120())
		{
			func_119(1, 1);
		}
		else
		{
			func_119(0, 0);
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
	if (!func_118())
	{
		Global_20383.f_1 = 3;
	}
}

int func_118()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_119(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_121(0))
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

bool func_120()
{
	return BitTest(Global_1962996, 5);
}

int func_121(int iParam0)
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

bool func_122()
{
	return BitTest(Global_1962996, 19);
}

float func_123(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 49:
		case 48:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 54:
		case 45:
		case 46:
		case 47:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_124(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x1AFC19685A6AF4A9(sParam2);
	unk_0xC072D668E49D9A7A(uParam3, uParam4);
	unk_0x8E03B3A2F624EF8B(fParam0, fParam1, 0);
}

void func_125(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x1AFC19685A6AF4A9(sParam2);
	unk_0x64C50E40AA09A6B5(iParam3);
	unk_0x8E03B3A2F624EF8B(fParam0, fParam1, iParam4);
}

var func_126()
{
	return unk_0x7681F180D7938DA8(-1762644250);
}

void func_127(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x2D32CB870722E022(Global_23270.f_8885[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x2D32CB870722E022(Global_23270.f_8885[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x4EC989440A6E11DD(iVar0, iVar1, iVar2, 255);
}

void func_128(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_129(Global_23270.f_6454[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x2D32CB870722E022(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x4EC989440A6E11DD(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x2D32CB870722E022(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x4EC989440A6E11DD(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x2D32CB870722E022(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x4EC989440A6E11DD(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x4EC989440A6E11DD(155, 155, 155, 255);
		}
		else
		{
			unk_0x4EC989440A6E11DD(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x4EC989440A6E11DD(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x2D32CB870722E022(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x4EC989440A6E11DD(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x4EC989440A6E11DD(155, 155, 155, 255);
	}
	else
	{
		unk_0x4EC989440A6E11DD(155, 155, 155, 255);
	}
	unk_0xF4621DEB617A5113(0f, 0.35f);
	unk_0x44B717E97A50473A(1);
	if (bParam5)
	{
		unk_0xF4621DEB617A5113(0f, 0.425f);
		unk_0x3EACBAAEB55B5131(4);
	}
	else if (bParam6)
	{
		unk_0xF4621DEB617A5113(0f, 0.425f);
		unk_0x3EACBAAEB55B5131(6);
	}
	else
	{
		unk_0x3EACBAAEB55B5131(0);
	}
	unk_0xD2087B0A3696F221(0f, 1f);
	unk_0x60E303D153236F74(0);
	unk_0xD03168FF6874527E(0, 0, 0, 0, 0);
	unk_0x7CC33148FD727621(0, 0, 0, 0, 0);
}

void func_129(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_130(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_59(&iVar0, 0, iParam1))
	{
		return;
	}
	uParam0 = uParam0;
	if (iParam3 && !func_151(bParam4, bParam8))
	{
		return;
	}
	if (func_135())
	{
		return;
	}
	if (unk_0xEBDA168F3804CE1F())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_133(unk_0x93E99A2DBCBA9CFA(), 0))
		{
			return;
		}
	}
	if (unk_0xCC17806DB0C41C19())
	{
		if (unk_0x6C75193377D3CE17() == 0 || unk_0xEBDA168F3804CE1F())
		{
			return;
		}
	}
	if (Global_23270.f_5166 != 0)
	{
		if (unk_0x6163ED6C61AD64FC(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23270.f_5166)
			{
				if (Global_23270.f_5465[iVar1] != 363)
				{
					StringCopy(&(Global_23270.f_5168[iVar1 /*16*/]), unk_0x28AEB293270C3DDA(2, Global_23270.f_5465[iVar1], 1), 64);
				}
				else if (Global_23270.f_5480[iVar1] != 32)
				{
					StringCopy(&(Global_23270.f_5168[iVar1 /*16*/]), unk_0xB49FF1EF1051E9DA(2, Global_23270.f_5480[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_23270.f_5167 = 0;
		}
		if (!Global_23270.f_5167)
		{
			unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xC49D258FBF3BF214((1f - (Global_23270.f_5524 / 100f)));
			unk_0xAE3413B0654A0035();
			if (unk_0xCC17806DB0C41C19())
			{
				unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xD546F85F5AF0F231(1);
				unk_0xAE3413B0654A0035();
			}
			iVar1 = 0;
			while (iVar1 < Global_23270.f_5166)
			{
				if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_5393[iVar1 /*4*/])) != unk_0x14580F20CBCE4FA9("PREV"))
				{
					unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xC6A3EF6C4A3412C1(iVar1);
					func_132(&(Global_23270.f_5168[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && unk_0x14580F20CBCE4FA9(&(Global_23270.f_5393[iVar2 /*4*/])) == unk_0x14580F20CBCE4FA9("PREV"))
					{
						func_132(&(Global_23270.f_5168[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23270.f_5450[iVar1] == -1)
					{
						func_131(&(Global_23270.f_5393[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23270.f_5450[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x2AF11E92DE43CDE3(&(Global_23270.f_5393[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x610EBC15DA88FA9D(iVar3, 70);
						}
						else
						{
							unk_0x64C50E40AA09A6B5(iVar3);
						}
						unk_0xF8FCA9E7130CE1C8();
					}
					if (unk_0xCC17806DB0C41C19())
					{
						if (Global_23270.f_5465[iVar1] != 363 && BitTest(Global_23270.f_5495, iVar1))
						{
							unk_0xD546F85F5AF0F231(1);
							unk_0xC6A3EF6C4A3412C1(Global_23270.f_5465[iVar1]);
						}
						else
						{
							unk_0xD546F85F5AF0F231(0);
							unk_0xC6A3EF6C4A3412C1(363);
						}
					}
					unk_0xAE3413B0654A0035();
				}
				iVar1++;
			}
			if (unk_0x14580F20CBCE4FA9(&(Global_4540953.f_16)) != unk_0x14580F20CBCE4FA9(""))
			{
				unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xC6A3EF6C4A3412C1(Global_23270.f_5166);
				func_132(&Global_4540953);
				if (Global_4540953.f_20 == -1)
				{
					func_131(&(Global_4540953.f_16));
				}
				else
				{
					iVar4 = Global_23270.f_5450[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x2AF11E92DE43CDE3(&(Global_4540953.f_16));
					if (bParam5)
					{
						unk_0x610EBC15DA88FA9D(iVar4, 70);
					}
					else
					{
						unk_0x64C50E40AA09A6B5(iVar4);
					}
					unk_0xF8FCA9E7130CE1C8();
				}
				unk_0xAE3413B0654A0035();
			}
			unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(80);
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23270.f_5525)
			{
				unk_0xC6A3EF6C4A3412C1(1);
			}
			else
			{
				unk_0xC6A3EF6C4A3412C1(0);
			}
			unk_0xAE3413B0654A0035();
			Global_23270.f_5167 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23270.f_5166)
		{
			if (Global_23270.f_5450[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xC6A3EF6C4A3412C1(iVar1);
					unk_0x2AF11E92DE43CDE3(&(Global_23270.f_5393[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x610EBC15DA88FA9D(iParam2, 70);
					}
					else
					{
						unk_0x64C50E40AA09A6B5(iParam2);
					}
					unk_0xF8FCA9E7130CE1C8();
					unk_0xAE3413B0654A0035();
				}
			}
			iVar1++;
		}
		if (Global_4540953.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xC6A3EF6C4A3412C1(iVar1);
				unk_0x2AF11E92DE43CDE3(&(Global_4540953.f_16));
				if (bParam5)
				{
					unk_0x610EBC15DA88FA9D(iParam2, 70);
				}
				else
				{
					unk_0x64C50E40AA09A6B5(iParam2);
				}
				unk_0xF8FCA9E7130CE1C8();
				unk_0xAE3413B0654A0035();
			}
		}
		unk_0x8241C4807850E84A(76, 66);
		unk_0x345E4FB614ACF508(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23270.f_8892)
			{
				unk_0x71CD983E90DB042A(15, 0f, -0.0375f);
				Global_23270.f_8892 = 1;
			}
		}
		else if (Global_23270.f_8892)
		{
			unk_0x833DC7C29EA6EEF3(15);
			Global_23270.f_8892 = 0;
		}
		unk_0x4B358573708E8571();
		if (Global_23270.f_5498)
		{
			unk_0x8241C4807850E84A(82, 66);
			unk_0x345E4FB614ACF508(0f, 0f, 0f, 0f);
			unk_0x20C68F87D0FDD976(Global_23270.f_6103[iVar0 /*10*/], Global_23270.f_5496, Global_23270.f_5497, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x4B358573708E8571();
		}
		else
		{
			unk_0x55CCA1B8F633F628(Global_23270.f_6103[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_131(var uParam0)
{
	unk_0x2AF11E92DE43CDE3(uParam0);
	unk_0xF8FCA9E7130CE1C8();
}

void func_132(var uParam0)
{
	unk_0x7DDE71A42D80E8FA(uParam0);
}

bool func_133(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_134(-1, 0) == 8;
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

int func_134(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_78();
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

int func_135()
{
	struct<3> Var0;
	
	if (Global_20383.f_1 > 3)
	{
		return 1;
	}
	if (func_136())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0xF756EDB27C588BED(&Var0);
		if (Global_20328 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_136()
{
	if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_137(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x2D32CB870722E022(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 49:
		case 48:
		case 42:
		case 36:
		case 37:
		case 54:
		case 39:
		case 40:
		case 38:
		case 44:
		case 43:
		case 45:
		case 46:
		case 47:
		case 53:
		case 57:
		case 58:
		case 59:
		case 60:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 55:
			*iParam5 = 100;
			break;
		
		case 63:
			*iParam5 = 100;
			break;
		
		case 56:
			unk_0x2D32CB870722E022(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_138(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x2D32CB870722E022(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x3EACBAAEB55B5131(0);
	unk_0xF4621DEB617A5113(0f, 0.35f);
	unk_0xE4FA115EFC04A654(2);
	unk_0x4EC989440A6E11DD(iVar0, iVar1, iVar2, iVar3);
	unk_0xD2087B0A3696F221(fParam0, ((Global_23267 + Global_23269) - 0.0046875f));
	unk_0x60E303D153236F74(0);
	unk_0xD03168FF6874527E(0, 0, 0, 0, 0);
	unk_0x7CC33148FD727621(0, 0, 0, 0, 0);
}

void func_139(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x1AFC19685A6AF4A9(sParam2);
	unk_0x64C50E40AA09A6B5(uParam3);
	unk_0x64C50E40AA09A6B5(uParam4);
	unk_0x8E03B3A2F624EF8B(fParam0, fParam1, 0);
}

float func_140(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xB71C73D0269747D5(sParam0))
	{
		if (unk_0x14580F20CBCE4FA9(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_141();
	unk_0x061288CA1E28CA54(sParam0);
	unk_0x64C50E40AA09A6B5(uParam1);
	unk_0x64C50E40AA09A6B5(uParam2);
	return unk_0x1337CDB3E4371A85(1);
}

void func_141()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x2D32CB870722E022(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23270.f_8867)
	{
		iVar0 = Global_23270.f_8863;
		iVar1 = Global_23270.f_8864;
		iVar2 = Global_23270.f_8865;
		iVar3 = Global_23270.f_8866;
	}
	unk_0x3EACBAAEB55B5131(0);
	unk_0xF4621DEB617A5113(0f, 0.35f);
	unk_0x4EC989440A6E11DD(iVar0, iVar1, iVar2, iVar3);
	unk_0xD2087B0A3696F221((Global_23267 + 0.0046875f), ((Global_23267 + Global_23269) - 0.0046875f));
	unk_0x60E303D153236F74(0);
	unk_0xD03168FF6874527E(0, 0, 0, 0, 0);
	unk_0x7CC33148FD727621(0, 0, 0, 0, 0);
}

void func_142(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xD88E9AF5626B0121((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_143(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0x2AC37494BBF1DB16(&(Global_23270.f_7488[iParam0 /*16*/])))
	{
		if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_7488[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var19 = { func_145(unk_0x93E99A2DBCBA9CFA()) };
			if (unk_0x5513B5F4E17C7720(&Var19, &uVar3))
			{
				return func_144(&uVar3);
			}
		}
		else
		{
			return func_144(&(Global_23270.f_7488[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 52:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 53:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 55:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 56:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 60:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 61:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 63:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_144(var uParam0)
{
	return uParam0;
}

struct<13> func_145(int iParam0)
{
	struct<13> Var0;
	
	unk_0x23BD70608BA4F8D9(iParam0, &Var0, 13);
	return Var0;
}

char* func_146(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0x2AC37494BBF1DB16(&(Global_23270.f_6463[iParam0 /*16*/])))
	{
		if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_6463[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var16 = { func_145(unk_0x93E99A2DBCBA9CFA()) };
			unk_0x5513B5F4E17C7720(&Var16, &uVar0);
			return func_144(&uVar0);
		}
		else
		{
			return func_144(&(Global_23270.f_6463[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 52)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_147(bool bParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		unk_0xC36FC65019094E47(uParam1, uParam2);
		return;
	}
	unk_0x6FC658A1BD624E7C(uParam1, uParam2);
	fVar0 = unk_0xBBDA792448DB5A89(*uParam1);
	fVar1 = unk_0xBBDA792448DB5A89(*uParam2);
	fVar2 = unk_0xE5A34D583EE533B7(0);
	if (func_148(*uParam1, *uParam2))
	{
		*fParam3 = 1f;
		*uParam1 = unk_0xF2DB717A73826179((fVar1 * fVar2));
		*uParam2 = unk_0xF2DB717A73826179(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*uParam1 = unk_0xF2DB717A73826179((fVar0 / *fParam3));
	*uParam2 = unk_0xF2DB717A73826179((fVar1 / *fParam3));
}

bool func_148(int iParam0, int iParam1)
{
	return (unk_0xBBDA792448DB5A89(iParam0) / unk_0xBBDA792448DB5A89(iParam1)) > 3.5f;
}

int func_149(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	
	StringCopy(&cVar0, func_146(iParam0), 64);
	StringCopy(&cVar16, func_143(iParam0, bParam1), 64);
	if (unk_0x14580F20CBCE4FA9(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_147(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { unk_0x2D09CBD1F5910DEC(&cVar0, &cVar16) };
		fVar38 = (func_150(iParam0) / fVar34);
		Var35 = { Var35 * Vector(fVar38, fVar38, fVar38) };
		if (!bParam2)
		{
			Var35.f_0 = (Var35.f_0 - 2f);
			Var35.f_1 = (Var35.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var35.f_0 = 288f;
			Var35.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x14580F20CBCE4FA9(&(Global_23270.f_7488[29 /*16*/])) == joaat("crew_logo"))
		{
			Var35.f_0 = 106f;
			Var35.f_1 = 106f;
		}
		*fParam3 = ((Var35.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var35.f_1 / IntToFloat(iVar33)) / (Var35.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0xF764DD4275E8FDF4() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23269)
			{
				*fParam4 = (*fParam4 * (Global_23269 / *fParam3));
				*fParam3 = Global_23269;
			}
		}
		return 1;
	}
	return 0;
}

float func_150(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 53:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 63:
			return 0.5f;
			break;
		
		case 62:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_151(bool bParam0, bool bParam1)
{
	if (Global_2672505.f_1684.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x35DF833D93BCC488() || (func_153(8, -1) && func_152() != 65)) || (unk_0xD7863C03D2155822() != 0 && !bParam1)) || (unk_0xB53553DC4AAC7D8A() && !bParam0)) || unk_0x4136116828BCAAB6()) || Global_78819) || Global_23270.f_8891) || unk_0x47F8B78DC1737D5C()) || Global_100733.f_1474)
	{
		return 0;
	}
	return 1;
}

int func_152()
{
	return Global_1574993;
}

var func_153(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1653913.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1653913.f_1048, iParam0);
}

char* func_154(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		default:
	}
	return "";
}

int func_155()
{
	if (unk_0x42AAFCB5B7854AA9(2))
	{
		if (Global_4541029 > -1)
		{
			if (unk_0x87644B1F984197FE(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_156(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x42AAFCB5B7854AA9(2))
	{
		return 0;
	}
	if (unk_0xFEE065E56A9BEF3F() || unk_0x47F8B78DC1737D5C())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x90B3C4F0C0772F5A();
	}
	if (Global_4541029 == -6)
	{
		unk_0x497006BE45C6EFA5(4);
		if (iParam0 && unk_0x51EB177CA0562B62(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4541029 = -1;
			return 0;
		}
	}
	if (((Global_4541029 > -1 || Global_4541029 == -3) || Global_4541029 == -2) || unk_0x18226C2FEDF3E3A5())
	{
		unk_0x497006BE45C6EFA5(1);
		return 0;
	}
	if (Global_4541029 == -1 && iParam0)
	{
		if (unk_0x51EB177CA0562B62(2, 237))
		{
			unk_0x497006BE45C6EFA5(4);
			Global_4541029 = -6;
			return 1;
		}
		else
		{
			unk_0x497006BE45C6EFA5(3);
			return 0;
		}
	}
	unk_0x497006BE45C6EFA5(1);
	return 0;
}

void func_157(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0x42AAFCB5B7854AA9(2))
	{
		Global_4541029 = -1;
		return;
	}
	unk_0x43C58E3DBF30505A(1);
	fVar0 = Global_23267;
	fVar2 = (fVar0 + Global_23269);
	fVar3 = Global_23270.f_6173;
	fVar1 = (Global_23270.f_6173 - (IntToFloat(Global_23270.f_6175) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_23270.f_6175 < 1)
	{
		fVar1 = (Global_23270.f_6173 - 0.034722f);
	}
	unk_0x8241C4807850E84A(76, 84);
	unk_0x345E4FB614ACF508(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x052C2DE4A27A4869(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x052C2DE4A27A4869(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x4B358573708E8571();
	func_159();
	if (Global_4541029 == -6)
	{
		return;
	}
	Global_4541029 = -1;
	fVar7 = Global_4541023;
	fVar8 = Global_4541024;
	if (Global_23270.f_6176 > Global_23270.f_6175)
	{
		if (((Global_4541023 >= fVar0 && Global_4541023 <= fVar2) && Global_4541024 >= fVar3) && Global_4541024 < (fVar3 + fVar6))
		{
			Global_4541029 = -2;
			if (bParam3)
			{
				func_158(0);
			}
			return;
		}
		if (((Global_4541023 >= fVar0 && Global_4541023 <= fVar2) && Global_4541024 >= (fVar3 + fVar6)) && Global_4541024 < (fVar3 + 0.034722f))
		{
			Global_4541029 = -3;
			if (bParam3)
			{
				func_158(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_23270.f_6176 == -1)
		{
			Global_4541029 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_23270.f_6175);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x8241C4807850E84A(76, 84);
				unk_0x345E4FB614ACF508(-0.05f, -0.05f, 0f, 0f);
				func_142(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_23269, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x4B358573708E8571();
			}
		}
		Global_4541029 = Global_23270.f_8513[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4541029 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4541029 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4541029 = -4;
		return;
	}
	Global_4541029 = -1;
}

void func_158(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_23267;
	fVar1 = Global_23270.f_6173;
	unk_0x8241C4807850E84A(76, 84);
	unk_0x345E4FB614ACF508(-0.05f, -0.05f, 0f, 0f);
	if (Global_4541029 == -2)
	{
		func_142(fVar0, fVar1, Global_23269, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4541029 == -3)
	{
		func_142(fVar0, (fVar1 + fVar2), Global_23269, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x4B358573708E8571();
}

void func_159()
{
	Global_4541025 = Global_4541023;
	Global_4541026 = Global_4541024;
	Global_4541023 = unk_0xA436D585B7588C3A(2, 239);
	Global_4541024 = unk_0xA436D585B7588C3A(2, 240);
	Global_4541027 = (Global_4541023 - Global_4541025);
	Global_4541028 = (Global_4541024 - Global_4541026);
}

void func_160(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x28AEB293270C3DDA(2, iParam0, 1);
	if (Global_23270.f_5166 >= 14)
	{
		StringCopy(&Global_4540953, sVar0, 64);
		StringCopy(&(Global_4540953.f_16), sParam1, 16);
		Global_4540953.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xECDAB41968FF21A8(&(Global_23270.f_5495), Global_23270.f_5166);
	}
	StringCopy(&(Global_23270.f_5168[Global_23270.f_5166 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23270.f_5393[Global_23270.f_5166 /*4*/]), sParam1, 16);
	Global_23270.f_5450[Global_23270.f_5166] = iParam2;
	Global_23270.f_5465[Global_23270.f_5166] = iParam0;
	Global_23270.f_5480[Global_23270.f_5166] = 32;
	Global_23270.f_5166++;
}

void func_161(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_23270.f_5081), sParam0, 24);
	Global_23270.f_5159 = 0;
	Global_23270.f_5160 = 0;
	Global_23270.f_5161 = 0;
	Global_23270.f_5162 = 0;
	Global_23270.f_5163 = iParam1;
	Global_23270.f_5164 = unk_0xA5E11AF0A2B928C1();
	Global_23270.f_5165 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23270.f_5093[iVar0] = 0;
		iVar0++;
	}
}

void func_162(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_23270.f_6182 = uParam0;
	Global_23270.f_6317 = iParam2;
	if (Global_23270.f_6182 < Global_23270.f_6181)
	{
		Global_23270.f_6181 = Global_23270.f_6182;
	}
	else if ((Global_23270.f_6172 && Global_23270.f_6182 > Global_23270.f_6183) || (!Global_23270.f_6172 && Global_23270.f_6182 >= (Global_23270.f_6181 + Global_23270.f_5668)))
	{
		iVar0 = Global_23270.f_6181;
		while (iVar0 <= Global_23270.f_6182)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23270.f_5532[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23270.f_5668 && Global_23270.f_6181 < 128)
		{
			Global_23270.f_6181++;
			iVar1 = 0;
			iVar0 = Global_23270.f_6181;
			while (iVar0 <= Global_23270.f_6182)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23270.f_5532[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23270.f_6171 = 0;
	Global_23270.f_6172 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23270.f_5081), "", 24);
		StringCopy(&(Global_4540953.f_21), "", 16);
	}
}

void func_163(int iParam0)
{
	Global_23270.f_6181 = iParam0;
}

void func_164(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23270.f_5665 >= 256)
	{
		return;
	}
	if (Global_23270.f_6186 >= 4)
	{
		return;
	}
	if (Global_23270.f_6187 != 1)
	{
		return;
	}
	if (Global_23270.f_6186 >= Global_23270.f_6184)
	{
		return;
	}
	Global_23270.f_4309[Global_23270.f_5665] = uParam0;
	Global_23270.f_5665++;
	Global_23270.f_2387[Global_23270.f_6185 /*5*/][Global_23270.f_6186] = 2;
	Global_23270.f_6186++;
	if (Global_23270.f_6186 >= Global_23270.f_6184)
	{
		fVar0 = func_166();
		if (Global_23270.f_5518[Global_23270.f_5662] && Global_23270.f_6186 == Global_23270.f_6184)
		{
			func_149(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23270.f_5511[(Global_23270.f_5662 - 1)])
		{
			Global_23270.f_5511[(Global_23270.f_5662 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23270.f_6186 >= Global_23270.f_6184)
		{
			fVar3 = func_165();
			if (fVar3 > Global_23270.f_6188[Global_23270.f_5661])
			{
				Global_23270.f_6188[Global_23270.f_5661] = fVar3;
			}
		}
	}
}

float func_165()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_23270.f_6186)
	{
		if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_23270.f_4824[((Global_23270.f_5667 - iVar1) + iVar0)] != 0)
		{
			if (func_149(Global_23270.f_4824[((Global_23270.f_5667 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0xF9BE0DFC714A1056(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0xF9BE0DFC714A1056(0.35f, 0);
}

float func_166()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_23270.f_6186)
	{
		if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_128(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
	{
		unk_0x061288CA1E28CA54(&(Global_23270.f_79[Global_23270.f_6185 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_23270.f_6186)
	{
		if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x48849374B34BB7B9(&(Global_23270.f_79[(Global_23270.f_6185 + iVar8) /*6*/]));
			}
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x48849374B34BB7B9(&(Global_23270.f_79[(Global_23270.f_6185 + iVar8) /*6*/]));
			}
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 2)
		{
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x64C50E40AA09A6B5(Global_23270.f_4309[((Global_23270.f_5665 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 3)
		{
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0xC072D668E49D9A7A(Global_23270.f_4566[((Global_23270.f_5666 - iVar4) + iVar10)], Global_23270.f_4695[((Global_23270.f_5666 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 5)
		{
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x76B34CBB6F5FA1BB(&(Global_2695070[((Global_23270.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 6)
		{
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x48849374B34BB7B9(&(Global_2695070[((Global_23270.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 7)
		{
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x76B34CBB6F5FA1BB(&(Global_2695070[((Global_23270.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 9)
		{
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x76B34CBB6F5FA1BB(&(Global_2695070[((Global_23270.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
	{
		fVar0 = unk_0x1337CDB3E4371A85(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_23270.f_4824[((Global_23270.f_5667 - iVar5) + iVar7)] != 0)
		{
			func_149(Global_23270.f_4824[((Global_23270.f_5667 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_167(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 4;
		
		default:
	}
	return 0;
}

void func_168(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23270.f_5661 > iParam0)
	{
		return;
	}
	if (Global_23270.f_5661 >= 128)
	{
		return;
	}
	if (Global_23270.f_5663 >= 256)
	{
		return;
	}
	if (Global_23270.f_6186 < Global_23270.f_6184)
	{
		return;
	}
	if (Global_23270.f_5661 != iParam0)
	{
		Global_23270.f_5661 = iParam0;
		Global_23270.f_5662 = 0;
	}
	iVar0 = Global_23270.f_5499[Global_23270.f_5662];
	if (iVar0 != 1)
	{
		while (Global_23270.f_5662 < 4 && iVar0 != 1)
		{
			Global_23270.f_5662++;
			iVar0 = Global_23270.f_5499[Global_23270.f_5662];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]), sParam1, 24);
	if (!unk_0x2AC37494BBF1DB16(sParam1) && !unk_0x42FA33BDEDF21186(sParam1))
	{
	}
	Global_23270.f_1616[Global_23270.f_5663] = bParam3;
	Global_23270.f_1873[Global_23270.f_5663] = iParam4;
	Global_23270.f_2130[Global_23270.f_5663] = iParam6;
	Global_23270.f_5663++;
	if (!bParam3)
	{
		func_171(Global_23270.f_5661, 1);
	}
	else
	{
		func_171(Global_23270.f_5661, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_170(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]));
		if (Global_23270.f_5518[Global_23270.f_5662])
		{
			func_149(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23270.f_5511[Global_23270.f_5662])
		{
			Global_23270.f_5511[Global_23270.f_5662] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_169(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]));
			if (fVar4 > Global_23270.f_6188[iParam0])
			{
				Global_23270.f_6188[iParam0] = fVar4;
			}
		}
	}
	unk_0xECDAB41968FF21A8(&(Global_23270.f_5532[iParam0]), Global_23270.f_5662);
	Global_23270.f_5662++;
	Global_23270.f_6187 = 1;
	Global_23270.f_6185 = (Global_23270.f_5663 - 1);
	Global_23270.f_6186 = 0;
	Global_23270.f_6184 = iParam2;
}

float func_169(char* sParam0)
{
	if (!unk_0x42FA33BDEDF21186(sParam0))
	{
	}
	return unk_0xF9BE0DFC714A1056(0.35f, 0);
}

float func_170(char* sParam0)
{
	if (!unk_0xB71C73D0269747D5(sParam0))
	{
		if (unk_0x14580F20CBCE4FA9(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_128(0, 1, 0, 0, 0, 0, 0);
	unk_0x061288CA1E28CA54(sParam0);
	return unk_0x1337CDB3E4371A85(1);
}

void func_171(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xECDAB41968FF21A8(&(Global_23270.f_6458[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_23270.f_6458[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_172()
{
	if (unk_0xCC17806DB0C41C19())
	{
		unk_0xCE976F518CBAEC2A(0.325f, 0.3f);
	}
}

void func_173(int iParam0, char* sParam1, char* sParam2)
{
	Global_23270 = iParam0;
	func_174(29, sParam1, sParam2);
}

void func_174(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_23270.f_6463[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_23270.f_7488[iParam0 /*16*/]), sParam2, 64);
}

void func_175(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_23270.f_1), sParam0, 16);
	Global_23270.f_74 = 0;
	Global_23270.f_75 = 0;
	Global_23270.f_76 = 0;
	Global_23270.f_77 = 0;
	Global_23270.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23270.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_176(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23270.f_5526[0] = iParam0;
	Global_23270.f_5526[1] = iParam1;
	Global_23270.f_5526[2] = iParam2;
	Global_23270.f_5526[3] = iParam3;
	Global_23270.f_5526[4] = iParam4;
}

void func_177(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23270.f_5499[0] = iParam0;
	Global_23270.f_5499[1] = iParam1;
	Global_23270.f_5499[2] = iParam2;
	Global_23270.f_5499[3] = iParam3;
	Global_23270.f_5499[4] = iParam4;
	Global_23270.f_5669 = 0;
	if (iParam0 != 0)
	{
		Global_23270.f_5669++;
	}
	if (iParam1 != 0)
	{
		Global_23270.f_5669++;
	}
	if (iParam2 != 0)
	{
		Global_23270.f_5669++;
	}
	if (iParam3 != 0)
	{
		Global_23270.f_5669++;
	}
	if (iParam4 != 0)
	{
		Global_23270.f_5669++;
	}
}

void func_178(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23270.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23270.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		StringCopy(&(Global_2695070[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23270.f_4309[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23270.f_4566[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23270.f_4824[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23270.f_5532[iVar0] = 0;
		Global_23270.f_5670[iVar0] = 0;
		Global_23270.f_5799[iVar0] = 0;
		Global_23270.f_6322[iVar0] = 0f;
		Global_23270.f_5928[iVar0] = 0;
		Global_23270.f_6188[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23270.f_5499[iVar0] = 0;
		Global_23270.f_5511[iVar0] = 0f;
		Global_23270.f_5505[iVar0] = -1f;
		Global_23270.f_5518[iVar0] = 0;
		Global_23270.f_5526[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23270.f_5393[iVar0 /*4*/]), "", 16);
		Global_23270.f_5450[iVar0] = -1;
		Global_23270.f_5465[iVar0] = 363;
		Global_23270.f_5480[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 64)
	{
		StringCopy(&(Global_23270.f_6463[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23270.f_7488[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23270.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4540953.f_16), "", 16);
	Global_4540953.f_20 = -1;
	Global_23270 = 0;
	Global_23270.f_5661 = 0;
	Global_23270.f_5662 = 0;
	Global_23270.f_5663 = 0;
	Global_23270.f_5665 = 0;
	Global_23270.f_5666 = 0;
	Global_23270.f_5667 = 0;
	Global_23270.f_5664 = 0;
	Global_23270.f_6317 = 0;
	Global_23270.f_6457 = 0;
	Global_23270.f_6182 = 0;
	Global_23270.f_6181 = 0;
	Global_23270.f_6183 = 0;
	StringCopy(&(Global_23270.f_5081), "", 24);
	Global_23270.f_5159 = 0;
	Global_23270.f_5160 = 0;
	Global_23270.f_5161 = 0;
	Global_23270.f_5162 = 0;
	Global_23270.f_5163 = 0;
	Global_23270.f_5164 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23270.f_5093[iVar0] = 0;
		iVar0++;
	}
	Global_23270.f_5165 = 0;
	StringCopy(&(Global_4540953.f_21), "", 16);
	Global_4540953.f_61 = 0;
	Global_4540953.f_62 = 0;
	Global_4540953.f_63 = 0;
	Global_4540953.f_64 = 0;
	Global_4540953.f_65 = 0;
	Global_4540953.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4540953.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4540953.f_67 = 0;
	StringCopy(&(Global_23270.f_1), "", 16);
	Global_23270.f_5517 = 0f;
	Global_23270.f_74 = 0;
	Global_23270.f_75 = 0;
	Global_23270.f_76 = 0;
	Global_23270.f_77 = 0;
	Global_23270.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23270.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23270.f_6187 = 0;
	Global_23270.f_6186 = 0;
	Global_23270.f_6184 = 0;
	Global_23270.f_6185 = 0;
	Global_23270.f_5166 = 0;
	Global_23270.f_5167 = 0;
	Global_23270.f_5668 = 10;
	Global_23270.f_5669 = 0;
	Global_23270.f_6319 = 0f;
	Global_23270.f_6320 = 0f;
	Global_23270.f_6171 = 0;
	Global_23270.f_6172 = 0;
	Global_23270.f_6173 = 0f;
	Global_23270.f_6174 = 0;
	Global_23270.f_6176 = 0;
	Global_23270.f_6175 = 0;
	Global_23270.f_6177 = 0;
	Global_23270.f_6178 = 0;
	Global_23270.f_6179 = 0;
	Global_23270.f_6180 = 0;
	Global_23270.f_8888 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23270.f_6451[iVar0] = -1;
		Global_23270.f_6454[iVar0] = -1;
		iVar0++;
	}
	Global_23270.f_5524 = 0f;
	Global_23270.f_5495 = 0;
	Global_23270.f_5525 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23270.f_6458)
	{
		Global_23270.f_6458[iVar0] = 0;
		iVar0++;
	}
	Global_23270.f_8867 = 0;
	Global_23270.f_8862 = 0;
	Global_23270.f_8872 = 0;
	Global_23270.f_8877 = 0;
	Global_23270.f_8882 = 0;
	Global_23270.f_8884 = 0;
	Global_23270.f_8890 = 0;
	Global_23267 = 0.05f;
	Global_23268 = 0.05f;
	Global_23269 = 0.225f;
	fVar2 = unk_0xE5A34D583EE533B7(0);
	if (bParam0)
	{
		Global_23269 = (0.225f * (1.777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23269 = (0.225f * (1.777778f / fVar2));
	}
	else
	{
		Global_23269 = 0.225f;
	}
}

int func_179(int iParam0, struct<3> Param1, float fParam4, var uParam5, var uParam6, var uParam7)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam5 = { unk_0xF2A6E8EA57F9D501(Param1, fParam4, 2.40015f, -7.75244f, 1.0825f) };
			*uParam6 = -4.2069f;
			uParam6->f_1 = -0.027f;
			uParam6->f_2 = (fParam4 + 22.8175f);
			*uParam7 = 32.8283f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam5 = { unk_0xF2A6E8EA57F9D501(Param1, fParam4, 3.80296f, -5.391f, 1.213f) };
			*uParam6 = -9.3866f;
			uParam6->f_1 = -0.0011f;
			uParam6->f_2 = (fParam4 + 46.9866f);
			*uParam7 = 35f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam5 = { unk_0xF2A6E8EA57F9D501(Param1, fParam4, 2.97963f, -3.39452f, 0.934498f) };
			*uParam6 = -8.483f;
			uParam6->f_1 = 0.0149f;
			uParam6->f_2 = (fParam4 + 53.5519f);
			*uParam7 = 35f;
			break;
		
		case -2:
			*uParam5 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam6 = { -3.6091f, 0.022f, -8.6461f };
			*uParam7 = 35f;
			break;
	}
	return 1;
}

void func_180(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xECDAB41968FF21A8(&Global_32412, bParam0);
	}
	else
	{
		unk_0x061B1200C95204CB(&Global_32412, bParam0);
	}
}

int func_181(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_182(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x48DC6A21D1CAD89C(unk_0x5DC3DCA82C806319()))
	{
		return 0;
	}
	if (func_121(0))
	{
		return 0;
	}
	if (unk_0x2FECE8D166B3056B())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44000[iVar0 /*32*/] == 1 && Global_44000[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_44000[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_44000[iVar0 /*32*/].f_5 = 1;
			Global_44000[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_44000[iVar0 /*32*/] == 0)
			{
			}
			if (Global_44000[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_182(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44000[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_183(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_182(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_44000[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_44000[iVar0 /*32*/].f_12)
	{
		unk_0x56C9BC27C0FF68D7(&(Global_44000[iVar0 /*32*/].f_8));
		unk_0x48849374B34BB7B9(&Global_44195);
		iVar1 = unk_0x6A92D111B5409879(0);
	}
	else
	{
		unk_0x56C9BC27C0FF68D7(&(Global_44000[iVar0 /*32*/].f_8));
		unk_0x48849374B34BB7B9(&Global_44195);
		if (Global_44000[iVar0 /*32*/].f_30)
		{
			unk_0x76B34CBB6F5FA1BB(&(Global_44000[iVar0 /*32*/].f_13));
		}
		else
		{
			unk_0x48849374B34BB7B9(&(Global_44000[iVar0 /*32*/].f_13));
		}
		iVar1 = unk_0x6A92D111B5409879(0);
	}
	return iVar1;
}

void func_184(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_182(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44000[iVar0 /*32*/])
		{
			Global_44000[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

void func_185(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x24B651D85CCE5EB4(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xB53553DC4AAC7D8A())
	{
		if (!*uParam0 == -1)
		{
			func_184(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_44000[iVar0 /*32*/])
		{
			Global_44000[iVar0 /*32*/] = 1;
			Global_44000[iVar0 /*32*/].f_1 = Global_44201;
			Global_44201++;
			Global_44000[iVar0 /*32*/].f_4 = 0;
			Global_44000[iVar0 /*32*/].f_29 = 0;
			Global_44000[iVar0 /*32*/].f_5 = 0;
			Global_44000[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44000[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44000[iVar0 /*32*/].f_6 = iParam3;
			Global_44000[iVar0 /*32*/].f_31 = unk_0xAF908D5E2416DA93();
			Global_44000[iVar0 /*32*/].f_7 = 0;
			Global_44000[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x2AC37494BBF1DB16(sParam4))
			{
				Global_44000[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44000[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44000[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44000[iVar0 /*32*/].f_12 = 0;
				Global_44000[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_44000[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_186(char* sParam0)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 1, 1, -1);
}

int func_187()
{
	if (Global_113648.f_20412.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

int func_188(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { unk_0xF2A6E8EA57F9D501(*uParam1, uParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { unk_0xF2A6E8EA57F9D501(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { unk_0xF2A6E8EA57F9D501(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { unk_0xF2A6E8EA57F9D501(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { unk_0xF2A6E8EA57F9D501(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { unk_0xF2A6E8EA57F9D501(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { unk_0xF2A6E8EA57F9D501(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { unk_0xF2A6E8EA57F9D501(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { unk_0xF2A6E8EA57F9D501(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case -2:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

int func_189(float fParam0)
{
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()) && !unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (fParam0 <= 0f)
		{
			return unk_0x98B3AA67B555D71E(unk_0xC1A5EC5C986B98AD()) > 0;
		}
		else
		{
			return unk_0x42B9D77090959095(unk_0xC1A5EC5C986B98AD(), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), fParam0) > 0;
		}
	}
	return 0;
}

void func_190()
{
	if (iLocal_631)
	{
		if (iLocal_630 == 3)
		{
			iLocal_630 = 0;
		}
		iLocal_631 = 0;
	}
	switch (iLocal_630)
	{
		case 0:
			unk_0x724FFAED1C56CE2B(uLocal_618[iLocal_634], 1, 0);
			uLocal_632 = unk_0x191673E3F99212B2(unk_0xF2A6E8EA57F9D501(Local_68.f_486.f_6, Local_68.f_486.f_9.f_2, -0.07f, 0.06f, -0.02f), Local_68.f_486.f_9, 2);
			if (!unk_0x66599E73DBA5A850(Local_68.f_2))
			{
				unk_0x468D976993BF7FE1(Local_68.f_2, uLocal_632, "mp_am_hold_up", "purchase_chocbar_shopkeeper", 1.5f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xA2CBB04560DD6361(uLocal_618[iLocal_634], uLocal_632, "purchase_chocbar", "mp_am_hold_up", 1000f, 1090519040, 1, 1148846080);
				iLocal_630 = 1;
			}
			break;
		
		case 1:
			if (unk_0x411B750250543BD0(uLocal_632))
			{
				if (unk_0xABF98B1999FE64CA(uLocal_632) == 1f)
				{
					if (!unk_0x66599E73DBA5A850(Local_68.f_2))
					{
						unk_0x909F139DC199D8E0(Local_68.f_2);
					}
					if (unk_0x7DE17ACDD8BA2642(uLocal_618[iLocal_634]))
					{
						unk_0x8D62C770FD5498FA(uLocal_618[iLocal_634], 1);
					}
					iLocal_633 = unk_0xA5E11AF0A2B928C1();
					iLocal_630 = 2;
				}
			}
			else
			{
				iLocal_633 = unk_0xA5E11AF0A2B928C1();
				iLocal_630 = 2;
			}
			break;
		
		case 2:
			if ((unk_0xA5E11AF0A2B928C1() - iLocal_633) > 1000)
			{
				if (unk_0x7DE17ACDD8BA2642(uLocal_618[iLocal_634]))
				{
					unk_0x724FFAED1C56CE2B(uLocal_618[iLocal_634], 0, 0);
					unk_0xC2E3C377D893C17A(uLocal_618[iLocal_634], func_60(iLocal_634), 1, 0, 0, 1);
					unk_0x8D62C770FD5498FA(uLocal_618[iLocal_634], 0);
				}
				iLocal_630 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

void func_191()
{
	if (iLocal_54 != 6)
	{
		switch (iLocal_54)
		{
			case 1:
				if (func_196())
				{
					iLocal_54 = 2;
				}
				else
				{
					iLocal_54 = 6;
				}
				break;
			
			case 2:
				if (!unk_0x055111B11E6624FD(Local_68.f_86, 0))
				{
					func_195();
					func_12(&(Local_68.f_86.f_7));
					iLocal_54 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x055111B11E6624FD(Local_68.f_86, 0))
				{
					if ((func_194(&(Local_68.f_86.f_7), 5f) || func_192(Local_68.f_2, &(Local_68.f_451))) || unk_0x48A4D45B3B4CEFFD(Local_68.f_86))
					{
						iLocal_54 = 4;
					}
				}
				break;
			
			case 4:
				if (!unk_0x055111B11E6624FD(Local_68.f_86, 0))
				{
					iLocal_53 = 31;
					unk_0xC6C9BF71106ABCAC(Local_68.f_86, Local_68.f_0, 500f, -1, 0, 0);
					iLocal_54 = 5;
				}
				func_40(&(Local_68.f_86.f_7));
				break;
			}
	}
}

int func_192(int iParam0, var uParam1)
{
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 7))
		{
			if (unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), iParam0) || unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iParam0))
			{
				if (unk_0xD495130AEF425591(iParam0, unk_0xC1A5EC5C986B98AD(), 90f))
				{
					if (func_193(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0xA5E11AF0A2B928C1();
						}
						else if ((unk_0xA5E11AF0A2B928C1() - uParam1->f_1) > uParam1->f_3)
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

float func_193(int iParam0, int iParam1)
{
	return func_23(unk_0xF2CFBB1105511E1A(unk_0x5DC3DCA82C806319()), iParam0, iParam1);
}

int func_194(var uParam0, float fParam1)
{
	if (func_15(uParam0))
	{
		if (func_9(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_195()
{
	if (!unk_0x055111B11E6624FD(Local_68.f_86, 0))
	{
		unk_0xDBC7406226B5540E(&(Local_68.f_86.f_6));
		unk_0x06A2A5F6A6959BE7(0, Local_68.f_0, 0);
		unk_0xEDB03CCB50D11479(0, Local_68.f_0, 2500, 0, 2);
		unk_0x276790CEA18D2881(0, 2500, 0, -1, 0);
		unk_0xF2CFC6EC8C85FA78(Local_68.f_86.f_6);
		unk_0x3D7110D966B0CEA2(Local_68.f_86, Local_68.f_86.f_6);
	}
}

int func_196()
{
	unk_0x4CC2E3CEA74EF758(Local_68.f_86.f_2, Local_68.f_86.f_5, 1, 0, &(Local_68.f_86), 0, 1, -1);
	if (!unk_0x055111B11E6624FD(Local_68.f_86, 0))
	{
		if (unk_0x504B9BB48D41C264(Local_68.f_86) == Local_68.f_86.f_1)
		{
			unk_0x85BAE84748AD1A23(Local_68.f_86, 1, 0);
			unk_0xC5B2830898581862(Local_68.f_86, 1);
			return 1;
		}
	}
	return 0;
}

void func_197()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	
	if (iLocal_624 > 1 && iLocal_624 < 5)
	{
		if (func_218())
		{
			unk_0x6D5ACBBD4CE34249(500);
			iLocal_624 = 6;
		}
	}
	switch (iLocal_624)
	{
		case 0:
			if ((((unk_0x055111B11E6624FD(Local_68.f_2, 0) || !func_217()) || func_1(Local_68.f_470, 128)) && iLocal_57 < 3) && unk_0xE2D062C14C126762(Local_68.f_2.f_1, 1.5f) == 0)
			{
				if ((func_45() && !unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0)) && !func_216(0))
				{
					func_215("SHR_ROBTILL", -1);
					Local_68.f_469 = -1;
					func_185(&(Local_68.f_469), 4, "SHR_ROBTILL", 0, 0, 0, 0);
					unk_0x061B1200C95204CB(&(Local_68.f_162.f_18), true);
					unk_0x061B1200C95204CB(&(Local_68.f_162.f_18), false);
					iLocal_624 = 1;
				}
			}
			else if (!unk_0x66599E73DBA5A850(Local_68.f_2))
			{
			}
			else if (iLocal_57 == 7)
			{
			}
			else if (unk_0xE2D062C14C126762(Local_68.f_2.f_1, 1.5f) > 0)
			{
			}
			break;
		
		case 1:
			if (func_45())
			{
				if (func_181(Local_68.f_469, 1))
				{
					if (!unk_0x055111B11E6624FD(Local_68.f_0, 0))
					{
						if (!unk_0x055111B11E6624FD(unk_0xE475C458F52F1781(), 0))
						{
							iVar3 = unk_0xE475C458F52F1781();
							if (unk_0x9DC9E896F189AAA5(iVar3, Local_68.f_214, Local_68.f_217, Local_68.f_220, 0, 1, 0))
							{
								unk_0xC2E3C377D893C17A(iVar3, unk_0xF2A6E8EA57F9D501(Local_68.f_486.f_6, Local_68.f_486.f_9.f_2, -0.7961f, -1.562f, -0.4215f), 0, 0, 0, 1);
							}
						}
					}
					unk_0xECDAB41968FF21A8(&(Local_68.f_162.f_18), true);
					if (func_28("SHR_ROBTILL"))
					{
						unk_0xCD3C8E1022864F65(1);
					}
					func_184(&(Local_68.f_469));
					bVar2 = unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &iLocal_628, 1);
					if (bVar2)
					{
						unk_0x8CC688927B10006C(unk_0xC1A5EC5C986B98AD(), joaat("weapon_unarmed"), 1);
					}
					unk_0xE333240A90F2FF3C(unk_0x5DC3DCA82C806319(), 0, 0);
					unk_0x636EFA4C5BC401A8(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 15f);
					unk_0xC3578D74003B8E01(0);
					func_117(0);
					func_209(1, 1, 1, 0, 0, 0, 0);
					unk_0x61F7D56FFAFBF706(0);
					func_180(23, 1);
					unk_0xB7591EFB00E1E4E4(Local_68.f_2.f_1, 3f, 0);
					iLocal_624 = 2;
				}
				else if ((unk_0xA5E11AF0A2B928C1() % 1000) < 50)
				{
					if (Local_68.f_469 <= 0)
					{
						Local_68.f_469 = -1;
						func_185(&(Local_68.f_469), 4, "SHR_ROBTILL", 0, 0, 0, 0);
					}
				}
			}
			else
			{
				if (func_28("SHR_ROBTILL"))
				{
					unk_0xCD3C8E1022864F65(1);
				}
				func_184(&(Local_68.f_469));
				iLocal_624 = 0;
			}
			break;
		
		case 2:
			if (unk_0x055111B11E6624FD(Local_68.f_2, 0))
			{
				unk_0xDDE449983CE7572E(Local_68.f_2, 0, 0);
				unk_0x2718E9CC165A99F6(Local_68.f_2, 1);
			}
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), unk_0xF2A6E8EA57F9D501(Local_68.f_2.f_1, Local_68.f_2.f_4, -0.75f, 0f, -1f), 1, 0, 0, 1);
				unk_0x692C3FDAD7DB53CC(unk_0xC1A5EC5C986B98AD(), Local_68.f_2.f_4);
				unk_0x63EF69C6969A3D26(&uLocal_566);
				unk_0xDBC7406226B5540E(&uLocal_566);
				unk_0x3EE48ADC8C7F5CC4(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x3EE48ADC8C7F5CC4(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 1, 0, 0, 0, 0);
				unk_0x3EE48ADC8C7F5CC4(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0xF2CFC6EC8C85FA78(uLocal_566);
				unk_0x3D7110D966B0CEA2(unk_0xC1A5EC5C986B98AD(), uLocal_566);
				if (!unk_0xF57C1326FD40C8A7(uLocal_625))
				{
					uLocal_625 = unk_0xD5B705094825AC04(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0xB109E9D7B544BA66(uLocal_625, unk_0xC1A5EC5C986B98AD(), -0.1878f, 3.0635f, 0.68f, 1);
				unk_0x60F73A757779E5B6(uLocal_625, unk_0xC1A5EC5C986B98AD(), -0.0129f, 0.0927f, 0.3008f, 1);
				unk_0xE3BD36CCB5EB72F2(uLocal_625, 35f);
				unk_0xA490483DCDA2F37E(uLocal_625, "HAND_SHAKE", 0.1f);
				unk_0xEEF11E0DB5769366(uLocal_625, 1);
				unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
			}
			iLocal_624 = 3;
			break;
		
		case 3:
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				if (!unk_0xF57C1326FD40C8A7(uLocal_626))
				{
					uLocal_626 = unk_0xD5B705094825AC04(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0xB109E9D7B544BA66(uLocal_626, unk_0xC1A5EC5C986B98AD(), -1.0346f, 2.9183f, 0.68f, 1);
				unk_0x60F73A757779E5B6(uLocal_626, unk_0xC1A5EC5C986B98AD(), -0.0574f, 0.1074f, 0.3008f, 1);
				unk_0xE3BD36CCB5EB72F2(uLocal_626, 35f);
				unk_0xA490483DCDA2F37E(uLocal_626, "HAND_SHAKE", 0.3f);
				unk_0x6FF2543994335DB3(uLocal_626, uLocal_625, 8000, 1, 1);
			}
			iLocal_629 = unk_0xA5E11AF0A2B928C1();
			iLocal_624 = 4;
			break;
		
		case 4:
			if (((unk_0xA5E11AF0A2B928C1() - iLocal_629) > 4800 || (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()))) || unk_0xE2D062C14C126762(Local_68.f_2.f_1, 3f) > 0)
			{
				iLocal_624 = 5;
			}
			else if ((unk_0xA5E11AF0A2B928C1() - iLocal_629) > 4500)
			{
				if (func_208())
				{
					if (!iLocal_583)
					{
						unk_0x451128B7D435FBF2("CamPushInNeutral", 0, 0);
						unk_0x531D638530A8DB97(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_583 = 1;
					}
				}
			}
			else if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "oddjobs@shop_robbery@rob_till", "loop", 3))
			{
				fVar0 = unk_0x92377426879E21FF(unk_0xC1A5EC5C986B98AD(), "oddjobs@shop_robbery@rob_till", "loop");
				if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
				{
					if (!iLocal_627)
					{
						iVar1 = unk_0x15A88CFAAFFC6C4B(10, 51);
						func_207(func_103(), 1, iVar1, 0, 0);
						iLocal_569 = (iLocal_569 + iVar1);
						Local_68.f_28.f_6 = unk_0x9F2C1BA4F2BF5CF8();
						unk_0x531D638530A8DB97(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
						iLocal_627 = 1;
					}
				}
				else if (iLocal_627)
				{
					iLocal_627 = 0;
				}
			}
			break;
		
		case 5:
			if (unk_0x055111B11E6624FD(Local_68.f_2, 0))
			{
				unk_0xDDE449983CE7572E(Local_68.f_2, 1, 0);
				unk_0x2718E9CC165A99F6(Local_68.f_2, 0);
			}
			unk_0xAABD7B0753C5C286(0);
			unk_0xEAB390443C680F72(0, 1065353216);
			if (unk_0xF57C1326FD40C8A7(uLocal_625))
			{
				unk_0x42B9FA814615C4F9(uLocal_625, 0);
			}
			if (unk_0xF57C1326FD40C8A7(uLocal_626))
			{
				unk_0x42B9FA814615C4F9(uLocal_626, 0);
			}
			unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
			if (!unk_0x055111B11E6624FD(unk_0xE475C458F52F1781(), 0))
			{
				iVar3 = unk_0xE475C458F52F1781();
				Var4 = { unk_0x30BE8A934C020461(iVar3, 1) };
			}
			if (iLocal_628 != joaat("weapon_unarmed") && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				unk_0x8CC688927B10006C(unk_0xC1A5EC5C986B98AD(), iLocal_628, 1);
			}
			if (BitTest(Local_68.f_162.f_18, 1))
			{
				unk_0x061B1200C95204CB(&(Local_68.f_162.f_18), true);
			}
			func_206(1, 1, 1);
			func_16(1, 0);
			iLocal_62 = 12;
			func_203();
			func_198(297, 0, 0);
			Local_68.f_468 = 1;
			iLocal_624 = 7;
			break;
		
		case 6:
			if (unk_0x72474BA05A104E1E())
			{
				unk_0xEEF11E0DB5769366(uLocal_626, 0);
				unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
				if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
				{
					unk_0x35DD50D05C962B6A(unk_0xC1A5EC5C986B98AD());
				}
				if (iLocal_569 < 15)
				{
					iVar1 = unk_0x15A88CFAAFFC6C4B(25, 65);
					func_207(func_103(), 1, iVar1, 0, 0);
					iLocal_569 = (iLocal_569 + iVar1);
				}
				unk_0x78DD793477D04C42(500);
				iLocal_624 = 5;
			}
			break;
	}
}

void func_198(int iParam0, int iParam1, int iParam2)
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
		func_79((891 + iParam0), 1, -1);
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
		func_199();
	}
}

void func_199()
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
		func_98(13, unk_0xF34EE736CF047844(Global_113648.f_10196.f_3853));
	}
	if (!unk_0xBAB6476CDD8C4AA6())
	{
		if (!Global_78558)
		{
			if (func_202() == 2 == 0 && !unk_0xA26A9A07F761D8F8())
			{
				if (unk_0x3FFDF8D1413D95DE())
				{
					Global_113382 = 0;
				}
				if (!Global_63362)
				{
					func_200();
				}
			}
		}
	}
}

int func_200()
{
	if (func_201(0))
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

int func_201(bool bParam0)
{
	if (!bParam0 && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

int func_202()
{
	return Global_32163;
}

void func_203()
{
	if (!iLocal_575)
	{
		Global_113648.f_20037[iLocal_568]++;
		Global_113648.f_20037.f_62[iLocal_568] = Local_68.f_1;
		if (func_103() == 0)
		{
			func_204(5);
		}
		iLocal_575 = 1;
	}
}

void func_204(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_205(&Global_97149, 1);
			break;
		
		case 1:
			func_205(&Global_97151, 3);
			break;
		
		case 2:
			func_205(&Global_97155, 1);
			break;
		
		case 3:
			func_205(&Global_97157, 1);
			break;
		
		case 4:
			func_205(&Global_97159, 1);
			break;
		
		case 5:
			func_205(&Global_97161, 1);
			break;
		
		case 6:
			func_205(&Global_97163, 1);
			break;
		
		case 7:
			func_205(&Global_97165, 2);
			break;
		
		case 8:
			func_205(&Global_97168, 1);
			break;
		
		case 9:
			func_205(&Global_97170, 1);
			break;
	}
}

void func_205(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (iVar0 < (iParam1 - 1))
		{
			(*uParam0)[iVar0] = (*uParam0)[iVar0 + 1];
		}
		else
		{
			(*uParam0)[iVar0] = unk_0xA5E11AF0A2B928C1();
		}
		iVar0++;
	}
}

void func_206(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xE333240A90F2FF3C(unk_0x5DC3DCA82C806319(), 1, 0);
	}
	unk_0xC3578D74003B8E01(1);
	func_209(0, 1, iParam2, 0, 0, 0, 0);
	if (bParam1)
	{
		unk_0x61F7D56FFAFBF706(1);
		unk_0xB1A691274215E4CE(1);
	}
	func_180(23, 0);
}

void func_207(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_102(iParam0) == 3)
	{
		return;
	}
	if (func_102(iParam0) == 4)
	{
		return;
	}
	func_70(func_102(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0xDD7756E2742E0F6D(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x3CC35ACFFC9C730E(iVar1, iVar0, 1);
	}
}

int func_208()
{
	if (unk_0x80A3F4E694565F6A(unk_0x990C52ABB0EFEBA9()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_209(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x8ECAA315E07E3A17(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 1);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 1);
		func_214(1);
		unk_0x2A7FF4CA1CC371B5();
		unk_0x3096CB6635EB839E();
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE444FD7526C8BB46())
			{
				unk_0xD6625E11483B2324(0);
			}
			if (!func_118())
			{
				Global_20383.f_1 = 3;
			}
			Global_21725 = 5;
		}
		func_213(1, iParam3, iParam2, 0);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_214(0);
		unk_0x5862CC4FD19EB752();
		Global_63368 = 0;
		if (bParam1)
		{
			unk_0xDB4D82037BD5A339();
		}
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 0);
		func_213(0, iParam3, iParam2, 0);
		if (unk_0xA26A9A07F761D8F8())
		{
			if ((((((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_211(unk_0x93E99A2DBCBA9CFA())) && !func_133(unk_0x93E99A2DBCBA9CFA(), 0)) && !func_210()) && !bParam4) && !bParam5) && !unk_0x8253CEEA17ED481B())
			{
				unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
			}
		}
		else if (((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_211(unk_0x93E99A2DBCBA9CFA())) && !bParam4) && !bParam5)
		{
			unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
		}
		Global_78556 = 0;
	}
}

bool func_210()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 14);
}

int func_211(int iParam0)
{
	if (func_133(iParam0, 0))
	{
		return 1;
	}
	if (func_212())
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

bool func_212()
{
	return BitTest(Global_2621446, 3);
}

int func_213(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xCC17806DB0C41C19())
	{
		if (unk_0x39D9A0A5E812BD25() != iParam0 && uParam2)
		{
			unk_0xA740EFFFBB4FED55(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_214(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xECDAB41968FF21A8(&Global_8253, 13);
	}
	else
	{
		unk_0x061B1200C95204CB(&Global_8253, 13);
	}
}

void func_215(char* sParam0, int iParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
}

int func_216(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20383.f_1 > 3)
		{
			if (BitTest(Global_8253, 14))
			{
				if (Global_20382 == 1)
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
		else
		{
			return 0;
		}
	}
	if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_20382 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_20383.f_1 > 3)
	{
		if (Global_20382 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_217()
{
	if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
	{
		if (unk_0x41AD4BF315E01D41(Local_68.f_2) == Local_68.f_185)
		{
			return 1;
		}
		else if (unk_0x9DC9E896F189AAA5(Local_68.f_2, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0x9DC9E896F189AAA5(Local_68.f_2, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0x9DC9E896F189AAA5(Local_68.f_2, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, 1, 0))
		{
			return 1;
		}
		else if (Local_68.f_199 != -1f)
		{
			if (unk_0x9DC9E896F189AAA5(Local_68.f_2, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_218()
{
	if (unk_0xFEE065E56A9BEF3F())
	{
		return 0;
	}
	if (unk_0x87644B1F984197FE(0, 18) || unk_0x87644B1F984197FE(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_219()
{
	int iVar0;
	
	func_236();
	func_233();
	if (unk_0x7DE17ACDD8BA2642(Local_68.f_0))
	{
		unk_0xEBC16D60E30C9AE1(Local_68.f_0, &iVar0, 1);
		if ((iLocal_60 == 1 && iLocal_622 == 2) && ((unk_0xBA9A13B3E8BC6817(unk_0x93E99A2DBCBA9CFA()) || func_232()) || func_231()))
		{
			unk_0x617AEFB7754C6AA9(unk_0x93E99A2DBCBA9CFA());
			func_16(1, 0);
			iLocal_60 = 9;
		}
	}
	else
	{
		return;
	}
	func_228();
	if (!bLocal_574)
	{
		func_227();
	}
	switch (iLocal_60)
	{
		case 1:
			if (func_302())
			{
				if ((func_21(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1) || (func_192(Local_68.f_2, &(Local_68.f_451)) && !unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))) && iVar0 != joaat("weapon_unarmed"))
				{
					func_226();
					unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 1);
					iLocal_53 = 12;
					iLocal_52 = 3;
					iLocal_60 = 5;
					unk_0xECDAB41968FF21A8(&Global_96532, 3);
					func_225();
				}
				if (func_1(Local_68.f_470, 8))
				{
					if (!func_1(Local_68.f_470, 32))
					{
						if (!unk_0x66599E73DBA5A850(Local_68.f_2) && func_1(Local_68.f_470, 4))
						{
							unk_0x3EE48ADC8C7F5CC4(Local_68.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_53 = 36;
						func_16(1, 0);
						func_224();
						func_293(&(Local_68.f_470), 32);
					}
				}
			}
			break;
		
		case 2:
			if (func_302())
			{
				if (func_192(Local_68.f_2, &(Local_68.f_451)) && iVar0 != joaat("weapon_unarmed"))
				{
					unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 1);
					Local_68.f_2.f_11 = 1;
					func_203();
					iLocal_53 = 12;
					iLocal_52 = 3;
					iLocal_62 = 11;
					iLocal_60 = 3;
					unk_0xECDAB41968FF21A8(&Global_96532, 3);
					func_225();
				}
				else if (func_21(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1))
				{
					unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 1);
					func_224();
					func_226();
					iLocal_53 = 12;
					iLocal_60 = 5;
					func_225();
				}
				else if (func_1(Local_68.f_470, 8))
				{
					if (!func_1(Local_68.f_470, 32))
					{
						if (!unk_0x66599E73DBA5A850(Local_68.f_2) && func_1(Local_68.f_470, 4))
						{
							unk_0x3EE48ADC8C7F5CC4(Local_68.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_53 = 36;
						func_16(1, 0);
						func_224();
						func_293(&(Local_68.f_470), 32);
					}
				}
			}
			break;
		
		case 3:
			if (iLocal_53 >= 13)
			{
				if (!unk_0x967D885AAF973497(unk_0xC1A5EC5C986B98AD()) && !unk_0x967D885AAF973497(Local_68.f_2))
				{
					iLocal_53 = 15;
					iLocal_58 = 5;
					iLocal_62 = 12;
					iLocal_60 = 4;
				}
			}
			break;
		
		case 4:
			if (func_21(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1) && func_302())
			{
				func_226();
				if (Local_68.f_2.f_12)
				{
					iLocal_53 = 22;
				}
				else
				{
					iLocal_53 = 16;
				}
				iLocal_60 = 5;
			}
			break;
		
		case 5:
			if (Local_68.f_486 >= 0)
			{
				if (func_21(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1) && func_302())
				{
					if (unk_0x411B750250543BD0(Local_68.f_486) && !Local_68.f_467)
					{
						iLocal_53 = 33;
						Local_68.f_467 = 1;
					}
				}
			}
			if (iLocal_55 >= 1 && iLocal_55 < 7)
			{
				unk_0x617AEFB7754C6AA9(unk_0x5DC3DCA82C806319());
				if (func_222(Local_68.f_2, 0, 1, 0, 1, 1) || !unk_0x411B750250543BD0(Local_68.f_486))
				{
					iLocal_60 = 6;
				}
			}
			break;
		
		case 6:
			if (iLocal_56 != 3 && iLocal_56 != 4)
			{
				iLocal_56 = 4;
			}
			unk_0x061B1200C95204CB(&Global_96532, 3);
			if (!unk_0x48A4D45B3B4CEFFD(Local_68.f_2))
			{
				func_7();
				iLocal_60 = 0;
			}
			break;
		
		case 7:
			if (!unk_0x48A4D45B3B4CEFFD(Local_68.f_2))
			{
				func_221();
				iLocal_53 = 36;
				func_16(1, 0);
				func_293(&(Local_68.f_470), 32);
				iLocal_58 = 7;
				iLocal_60 = 8;
			}
			break;
		
		case 8:
			if (((func_21(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1) || func_192(Local_68.f_2, &(Local_68.f_451))) && func_302()) && iVar0 != joaat("weapon_unarmed"))
			{
				if (!Local_68.f_2.f_12)
				{
					iLocal_53 = 10;
					iLocal_60 = 9;
				}
				else
				{
					func_19();
					iLocal_53 = 11;
					iLocal_60 = 0;
				}
				Local_68.f_2.f_13 = 0;
			}
			break;
		
		case 9:
			func_7();
			iLocal_60 = 12;
			break;
		
		case 10:
			if ((((func_21(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1) || func_192(Local_68.f_2, &(Local_68.f_451))) && func_302()) && iVar0 != joaat("weapon_unarmed")) && !func_15(&(Local_68.f_480)))
			{
				func_12(&(Local_68.f_480));
				if (unk_0x48A4D45B3B4CEFFD(Local_68.f_2))
				{
					func_7();
				}
				iLocal_53 = 23;
			}
			else if (func_41(&(Local_68.f_480)) > 10f)
			{
				if (!unk_0x66599E73DBA5A850(Local_68.f_2))
				{
					unk_0xC6C9BF71106ABCAC(Local_68.f_2, unk_0xC1A5EC5C986B98AD(), 100f, -1, 0, 0);
				}
				iLocal_60 = 12;
			}
			break;
		
		case 11:
			func_220();
			iLocal_60 = 12;
			break;
	}
}

void func_220()
{
	if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
	{
		unk_0xC5B2830898581862(Local_68.f_2, 0);
	}
}

void func_221()
{
	if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
	{
		unk_0xEDB03CCB50D11479(Local_68.f_2, Local_68.f_0, -1, 0, 2);
	}
}

int func_222(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_45)
		{
			iLocal_46 = unk_0x2935B4D6CE81318D(iParam0);
			bLocal_45 = true;
		}
		iLocal_47 = unk_0x2935B4D6CE81318D(iParam0);
		iLocal_48 = (iLocal_46 - iLocal_47);
		iVar0 = unk_0xE475C458F52F1781();
		if (!unk_0x055111B11E6624FD(iVar0, 0))
		{
			if (unk_0x7559C38E6535AB89(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_45)
		{
			if (unk_0x7559C38E6535AB89(iParam0, unk_0xC1A5EC5C986B98AD(), 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7559C38E6535AB89(iParam0, unk_0xC1A5EC5C986B98AD(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0xE475C458F52F1781();
		if (!unk_0x055111B11E6624FD(iVar1, 0))
		{
			if (unk_0x7559C38E6535AB89(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x055111B11E6624FD(iParam0, 0))
		{
			if (unk_0xF276A75C8A36B189(iParam0))
			{
				if (unk_0xD2A91DBF15D12CD1(iParam0) == unk_0xC1A5EC5C986B98AD())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xE3A9F9074FB79A61(unk_0xC1A5EC5C986B98AD()))
		{
			if (unk_0x1C4E4DC1EFE24DF1(iParam0, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0xBA9A13B3E8BC6817(unk_0x93E99A2DBCBA9CFA()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x23AE149202140E10(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0xEFE236615D4F5BE8(iParam0))
		{
			return 1;
		}
	}
	if (func_223(unk_0xC1A5EC5C986B98AD(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x48A4D45B3B4CEFFD(iParam0) && func_193(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x3C3D6D026CF7F51B(iParam0, 0))
		{
			if (unk_0x110B96B5C67CC73B(unk_0xC1A5EC5C986B98AD(), unk_0x95DC39736F6748E3(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x110B96B5C67CC73B(unk_0xC1A5EC5C986B98AD(), iParam0))
		{
			return 1;
		}
		if (!unk_0x055111B11E6624FD(iParam1, 0))
		{
			if (unk_0x7559C38E6535AB89(iParam1, unk_0xC1A5EC5C986B98AD(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_223(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xEBC16D60E30C9AE1(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x110D030CCD4E83A6(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(iParam0, 1), unk_0x30BE8A934C020461(iParam1, 1)) < 2.5f)
			{
				if (unk_0xD495130AEF425591(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_224()
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0) && func_302())
	{
		iVar3 = unk_0xA5D17FEE5372152E(unk_0xC1A5EC5C986B98AD(), &uVar0, -1);
		iVar4 = 0;
		while (iVar4 < iVar3)
		{
			if ((((uVar0[iVar4] != unk_0xC1A5EC5C986B98AD() && uVar0[iVar4] != Local_68.f_2) && !unk_0x66599E73DBA5A850(uVar0[iVar4])) && !unk_0x1AFE963DA61006ED(uVar0[iVar4])) && !unk_0xB8C39D031C377E33(uVar0[iVar4], 0))
			{
				unk_0x85BAE84748AD1A23(uVar0[iVar4], 1, 1);
				unk_0xC6C9BF71106ABCAC(uVar0[iVar4], unk_0xC1A5EC5C986B98AD(), 100f, -1, 0, 0);
			}
			iVar4++;
		}
	}
}

void func_225()
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0) && func_302())
	{
		iVar3 = unk_0xA5D17FEE5372152E(unk_0xC1A5EC5C986B98AD(), &uVar0, -1);
		iVar4 = 0;
		while (iVar4 < iVar3)
		{
			if ((uVar0[iVar4] != unk_0xC1A5EC5C986B98AD() && uVar0[iVar4] != Local_68.f_2) && !unk_0x1AFE963DA61006ED(uVar0[iVar4]))
			{
				unk_0x85BAE84748AD1A23(uVar0[iVar4], 1, 1);
				unk_0x63EF69C6969A3D26(&uLocal_566);
				unk_0xDBC7406226B5540E(&uLocal_566);
				unk_0xA2C73FAE5789EC05(0, 5000);
				unk_0xC6C9BF71106ABCAC(0, unk_0xC1A5EC5C986B98AD(), 100f, -1, 0, 0);
				unk_0xF2CFC6EC8C85FA78(uLocal_566);
				unk_0x3D7110D966B0CEA2(uVar0[iVar4], uLocal_566);
			}
			iVar4++;
		}
	}
}

void func_226()
{
	if (func_25(Local_68.f_0) == joaat("weapon_rpg"))
	{
		Local_68.f_458 = 1;
	}
	else if (func_25(Local_68.f_0) == joaat("weapon_knife"))
	{
		Local_68.f_459 = 1;
	}
	else if (((func_25(Local_68.f_0) == joaat("weapon_hammer") || func_25(Local_68.f_0) == joaat("weapon_crowbar")) || func_25(Local_68.f_0) == joaat("weapon_bat")) || func_25(Local_68.f_0) == joaat("weapon_bottle"))
	{
		Local_68.f_460 = 1;
	}
	else if ((func_25(Local_68.f_0) == joaat("weapon_grenade") || func_25(Local_68.f_0) == joaat("weapon_smokegrenade")) || func_25(Local_68.f_0) == joaat("weapon_molotov"))
	{
		Local_68.f_461 = 1;
	}
	else if (func_25(Local_68.f_0) == joaat("weapon_stickybomb"))
	{
		Local_68.f_462 = 1;
	}
	iLocal_62 = 12;
	func_203();
	iLocal_61 = 2;
	iLocal_65 = 1;
	iLocal_64 = 6;
	Local_68.f_2.f_13 = 0;
}

void func_227()
{
	if (iLocal_55 == 0)
	{
		if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
		{
			switch (iLocal_58)
			{
				case 1:
					iLocal_58 = 0;
					break;
				
				case 2:
					unk_0x3EE48ADC8C7F5CC4(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_17, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				
				case 3:
					unk_0x3EE48ADC8C7F5CC4(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_18, 8f, -4f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				
				case 4:
					unk_0x3EE48ADC8C7F5CC4(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_19, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				
				case 5:
					unk_0x3EE48ADC8C7F5CC4(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_20, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				
				case 6:
					iLocal_58 = 0;
					break;
				
				case 7:
					unk_0x3EE48ADC8C7F5CC4(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_21, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				}
			}
	}
}

void func_228()
{
	switch (iLocal_59)
	{
		case 1:
			func_221();
			iLocal_59 = 2;
			break;
		
		case 2:
			if (iLocal_55 == 2)
			{
				func_230();
				Local_68.f_2.f_13 = 0;
				iLocal_59 = 3;
			}
			if ((func_45() || func_44()) && !Local_68.f_2.f_13)
			{
				Local_68.f_2.f_13 = 1;
			}
			if (!Local_68.f_2.f_14)
			{
				if (!unk_0x66599E73DBA5A850(Local_68.f_2) && unk_0xC78375EA6037A7DB(Local_68.f_2))
				{
					Local_68.f_2.f_14 = 1;
				}
			}
			if ((Local_68.f_2.f_13 && !unk_0x66599E73DBA5A850(Local_68.f_2)) && !iLocal_60 == 12)
			{
				func_229();
			}
			break;
		
		case 3:
			if (iLocal_55 >= 7)
			{
				func_221();
				iLocal_59 = 4;
			}
			break;
	}
}

void func_229()
{
	if ((unk_0xA5E11AF0A2B928C1() - Local_68.f_2.f_10) > 5000)
	{
		unk_0x63EF69C6969A3D26(&(Local_68.f_2.f_24));
		unk_0xDBC7406226B5540E(&(Local_68.f_2.f_24));
		unk_0x06A2A5F6A6959BE7(0, Local_68.f_0, 0);
		unk_0xEDB03CCB50D11479(0, Local_68.f_0, -1, 0, 2);
		unk_0xF2CFC6EC8C85FA78(Local_68.f_2.f_24);
		unk_0x3D7110D966B0CEA2(Local_68.f_2, Local_68.f_2.f_24);
		Local_68.f_2.f_10 = unk_0xA5E11AF0A2B928C1();
	}
}

void func_230()
{
	if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
	{
		unk_0x1F9F6C767BE640D5(Local_68.f_2);
	}
}

int func_231()
{
	if (unk_0x3AB7E936BFFD6DF3(Local_68.f_186, Local_68.f_189, Local_68.f_192, 1))
	{
		return 1;
	}
	return 0;
}

int func_232()
{
	if (unk_0xAFC34601EB143C10(-1, Local_68.f_186, Local_68.f_189, Local_68.f_192))
	{
		return 1;
	}
	return 0;
}

void func_233()
{
	if (!Local_68.f_465)
	{
		if (func_234())
		{
			if (!func_15(&(Local_68.f_474)))
			{
				func_12(&(Local_68.f_474));
			}
			else if (func_194(&(Local_68.f_474), 1f))
			{
				Local_68.f_465 = 1;
				iLocal_53 = 26;
				if (!unk_0x66599E73DBA5A850(Local_68.f_2))
				{
					unk_0xC6C9BF71106ABCAC(Local_68.f_2, unk_0xC1A5EC5C986B98AD(), 100f, -1, 0, 0);
					func_16(1, 0);
				}
			}
		}
		else if (func_15(&(Local_68.f_474)))
		{
			func_40(&(Local_68.f_474));
		}
	}
}

int func_234()
{
	int iVar0;
	
	if (!unk_0x055111B11E6624FD(Local_68.f_0, 0))
	{
		if (func_235())
		{
			unk_0xEBC16D60E30C9AE1(Local_68.f_0, &iVar0, 1);
			if (iVar0 == joaat("weapon_petrolcan"))
			{
				if (unk_0x110D030CCD4E83A6(Local_68.f_0))
				{
					if (unk_0xD495130AEF425591(Local_68.f_2, Local_68.f_0, 180f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_235()
{
	if (!unk_0x055111B11E6624FD(Local_68.f_0, 0))
	{
		if (unk_0x9DC9E896F189AAA5(Local_68.f_0, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_236()
{
	if (iLocal_60 != 12)
	{
		if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
		{
			if (unk_0xC78375EA6037A7DB(Local_68.f_2))
			{
				unk_0xC6C9BF71106ABCAC(Local_68.f_2, Local_68.f_0, 100f, -1, 0, 0);
				iLocal_60 = 12;
				iLocal_59 = 4;
				iLocal_58 = 8;
				iLocal_62 = 15;
				if (iLocal_65 == 1)
				{
					iLocal_65 = 2;
				}
				else
				{
					iLocal_65 = 3;
				}
				iLocal_64 = 13;
				iLocal_53 = 27;
				if (!Local_68.f_2.f_14)
				{
					Local_68.f_2.f_14 = 1;
				}
			}
		}
	}
}

void func_237()
{
	switch (iLocal_57)
	{
		case 1:
			if (Local_68.f_486 >= 0)
			{
				if (unk_0x411B750250543BD0(Local_68.f_486))
				{
					if (unk_0xABF98B1999FE64CA(Local_68.f_486) > 0.876f)
					{
						iLocal_57 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_68.f_486 >= 0)
			{
				if (unk_0x411B750250543BD0(Local_68.f_486))
				{
					if (unk_0xABF98B1999FE64CA(Local_68.f_486) > 0.894f || (unk_0xABF98B1999FE64CA(Local_68.f_486) > 0.871f && unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(Local_68.f_28, 1), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1)) < 1f))
					{
						iLocal_57 = 3;
					}
				}
			}
			break;
		
		case 3:
			func_16(1, 0);
			func_238(0);
			unk_0x7B20BBC4C133A1DF(Local_68.f_28, 0, 0);
			iLocal_57 = 5;
			break;
		
		case 4:
			func_16(1, 0);
			func_238(1);
			unk_0x724FFAED1C56CE2B(Local_68.f_28, 0, 0);
			iLocal_57 = 5;
			break;
		
		case 5:
			if (unk_0x836874EEF89A8AC0(Local_68.f_28, unk_0xC1A5EC5C986B98AD()))
			{
				func_207(func_103(), 1, iLocal_569, 0, 0);
				unk_0x724FFAED1C56CE2B(Local_68.f_28, 0, 0);
				if (unk_0xCE4AAA035282336C(Local_68.f_28.f_2))
				{
					unk_0x45533C09A6C9B409(&(Local_68.f_28.f_2));
				}
				if (iLocal_62 != 12)
				{
					iLocal_62 = 12;
				}
				func_198(297, 0, 0);
				Local_68.f_468 = 1;
				Local_68.f_28.f_6 = unk_0x9F2C1BA4F2BF5CF8();
				unk_0x531D638530A8DB97(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
				func_13(&(Local_68.f_28.f_15));
				iLocal_57 = 6;
			}
			else if (!unk_0x055111B11E6624FD(Local_68.f_28, 0) && unk_0x51DF6895C236B231(Local_68.f_28))
			{
			}
			break;
		
		case 6:
			if (func_9(&(Local_68.f_28.f_15)) > 2.5f)
			{
				if (unk_0x7DE17ACDD8BA2642(Local_68.f_28) && unk_0x836874EEF89A8AC0(Local_68.f_28, unk_0xC1A5EC5C986B98AD()))
				{
					unk_0xA81AA70A4D25E140(unk_0xC1A5EC5C986B98AD(), 1, 1);
					unk_0xEF078F1FEE785D3E(&(Local_68.f_28));
				}
				iLocal_57 = 7;
			}
			break;
	}
}

void func_238(bool bParam0)
{
	Local_68.f_28.f_3 = 0;
	unk_0xECDAB41968FF21A8(&(Local_68.f_28.f_3), 3);
	unk_0xECDAB41968FF21A8(&(Local_68.f_28.f_3), 4);
	if (!bParam0)
	{
		iLocal_569 = unk_0x15A88CFAAFFC6C4B(Local_68.f_28.f_4, Local_68.f_28.f_5);
		if (!unk_0xCE4AAA035282336C(Local_68.f_28.f_2))
		{
			Local_68.f_28.f_2 = func_241(Local_68.f_28);
			unk_0x1886753DA39F38F8(Local_68.f_28.f_2, 2);
		}
		unk_0x7AB9248A72CECD17(Local_68.f_28, -0.2f, 1);
	}
	else
	{
		iLocal_569 = unk_0x15A88CFAAFFC6C4B(50, Local_68.f_28.f_4);
		Local_68.f_28.f_1 = unk_0x8D2015F36A52256C(joaat("pickup_money_variable"), unk_0x30BE8A934C020461(Local_68.f_28, 1), Local_68.f_28.f_3, iLocal_569, 1, 0);
		if (!unk_0xCE4AAA035282336C(Local_68.f_28.f_2))
		{
			Local_68.f_28.f_2 = func_239(Local_68.f_28.f_1);
		}
	}
	Local_68.f_28.f_14 = 1;
}

int func_239(var uParam0)
{
	var uVar0;
	
	if (!unk_0x0E0433D7F75E162D(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x76C6595450F90E77(uParam0);
	unk_0x225EB85DBC38E707(uVar0, func_240(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
	return uVar0;
}

float func_240(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_241(var uParam0)
{
	return func_242(uParam0, 1, 0);
}

int func_242(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7DE17ACDD8BA2642(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x53B496178AE44636(iParam0);
	if (unk_0xA6B591D40DE982B5(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_240(unk_0xA26A9A07F761D8F8(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x3BCF1F6A3573A1DF(uVar0, iParam1);
		}
		else
		{
			unk_0x1886753DA39F38F8(uVar0, 2);
		}
	}
	else if (unk_0x71904BD37B848CAF(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_240(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
		unk_0x3BCF1F6A3573A1DF(uVar0, iParam1);
	}
	else if (unk_0x4E7A9806173C3AD1(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_240(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_243()
{
	int iVar0;
	int iVar1;
	
	if (Local_68.f_464)
	{
		switch (iLocal_61)
		{
			case 2:
				if (func_1(Local_68.f_470, 4))
				{
					func_247();
					Local_68.f_46.f_39 = unk_0xA5E11AF0A2B928C1();
					iLocal_61 = 3;
				}
				break;
			
			case 3:
				if (unk_0xA5E11AF0A2B928C1() - Local_68.f_46.f_39) > unk_0x15A88CFAAFFC6C4B(1000, 3000)
				{
					if (unk_0xFBD273FDBCF0C5BD(Local_68.f_46.f_4[0], 0))
					{
						unk_0x0C561FA44BBB3B8F(Local_68.f_46.f_4[0], 1);
					}
					iLocal_61 = 4;
				}
				break;
			
			case 4:
				if (func_246() && func_245())
				{
					iLocal_61 = 5;
				}
				break;
			
			case 5:
				iLocal_53 = 24;
				func_16(1, 0);
				iLocal_61 = 6;
				break;
			
			case 6:
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if ((((unk_0x66599E73DBA5A850(Local_68.f_46[iVar0]) || (!unk_0x055111B11E6624FD(Local_68.f_46[iVar0], 0) && unk_0xE0AC9A4743F9BD05(Local_68.f_46[iVar0], 0, 2))) || unk_0x66599E73DBA5A850(Local_68.f_2)) || (!unk_0x055111B11E6624FD(Local_68.f_2, 0) && unk_0xE0AC9A4743F9BD05(Local_68.f_2, 0, 2))) || func_21(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1))
					{
						func_16(2, 0);
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!unk_0x66599E73DBA5A850(Local_68.f_46[iVar1]))
							{
								unk_0xCAC2B0C65B18E755(Local_68.f_46[iVar1], unk_0xC1A5EC5C986B98AD(), 0, 16);
								unk_0xC5B2830898581862(Local_68.f_46[iVar1], 0);
							}
							iVar1++;
						}
						iLocal_61 = 0;
					}
					iVar0++;
				}
				break;
			
			case 7:
				func_244();
				iLocal_61 = 0;
				break;
			}
	}
}

void func_244()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x055111B11E6624FD(Local_68.f_46[iVar0], 0))
		{
			unk_0xC5B2830898581862(Local_68.f_46[iVar0], 0);
		}
		iVar0++;
	}
}

int func_245()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x055111B11E6624FD(Local_68.f_46[iVar0], 0))
		{
			if (!unk_0x3C3D6D026CF7F51B(Local_68.f_46[iVar0], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_246()
{
	int iVar0;
	
	if (!unk_0x055111B11E6624FD(Local_68.f_0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!unk_0x055111B11E6624FD(Local_68.f_46[iVar0], 0))
			{
				if (!unk_0xDB08595445CDE2FF(Local_68.f_46[iVar0]))
				{
					return 1;
				}
			}
			if (!unk_0x055111B11E6624FD(Local_68.f_46.f_4[iVar0], 0))
			{
				if (!unk_0xDB08595445CDE2FF(Local_68.f_46.f_4[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_247()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_68.f_46[iVar0] = unk_0x69FDD9508259E5B5(6, Local_68.f_46.f_26, Local_68.f_46.f_8[iVar0 /*3*/], Local_68.f_46.f_18[iVar0], 1, 1);
		unk_0x85BAE84748AD1A23(Local_68.f_46[iVar0], 1, 0);
		unk_0xC5B2830898581862(Local_68.f_46[iVar0], 1);
		Local_68.f_46.f_4[iVar0] = unk_0xABEEDBEF2BBDF5B3(Local_68.f_46.f_27, Local_68.f_46.f_8[iVar0 /*3*/], Local_68.f_46.f_18[iVar0], 1, 1, 0);
		unk_0x85BAE84748AD1A23(Local_68.f_46.f_4[iVar0], 1, 0);
		if (!(unk_0x055111B11E6624FD(Local_68.f_46[iVar0], 0) && unk_0x055111B11E6624FD(Local_68.f_46.f_4[iVar0], 0)))
		{
			unk_0x4C18E9202CF6CACA(Local_68.f_46[iVar0], Local_68.f_46.f_4[iVar0], -1);
			unk_0xCBDC2B59922F92C3(Local_68.f_46[iVar0], joaat("weapon_pistol"), 99, 0, 1);
		}
		unk_0xDBC7406226B5540E(&(Local_68.f_46.f_35[iVar0]));
		unk_0xC562419B5DA3BB96(0, Local_68.f_46.f_4[iVar0], Local_68.f_46.f_22, (unk_0x9CEF19C982CCE911(Local_68.f_46.f_4[iVar0]) - 8f), 1, Local_68.f_46.f_27, 786981, Local_68.f_46.f_25, -1f);
		unk_0x6FE9A0C01D25F413(0, 0, 0);
		unk_0xFD42C7B0CE08BA68(0, Local_68.f_0, -1, 0);
		unk_0xF2CFC6EC8C85FA78(Local_68.f_46.f_35[iVar0]);
		unk_0x3D7110D966B0CEA2(Local_68.f_46[iVar0], Local_68.f_46.f_35[iVar0]);
		iVar0++;
	}
}

void func_248()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(Local_68.f_0))
	{
		unk_0xEBC16D60E30C9AE1(Local_68.f_0, &iVar0, 1);
	}
	else
	{
		return;
	}
	iVar1 = 0;
	switch (iLocal_62)
	{
		case 1:
			iLocal_62 = 6;
			break;
		
		case 2:
			iLocal_53 = 2;
			iLocal_62 = 5;
			break;
		
		case 3:
			iLocal_53 = 3;
			iLocal_62 = 5;
			break;
		
		case 4:
			iLocal_53 = 4;
			iLocal_62 = 5;
			break;
		
		case 5:
			if (((((func_25(Local_68.f_0) != joaat("weapon_unarmed") && iVar0 != joaat("weapon_bat")) && iVar0 != joaat("weapon_hammer")) && iVar0 != joaat("weapon_crowbar")) && iVar0 != joaat("weapon_bottle")) && func_302())
			{
				iLocal_62 = 7;
			}
			break;
		
		case 6:
			if (func_25(Local_68.f_0) != joaat("weapon_unarmed") && func_302())
			{
				if (iVar0 == joaat("weapon_bat"))
				{
					iLocal_62 = 8;
				}
				else if ((iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer")) || iVar0 == joaat("weapon_bottle"))
				{
					iLocal_62 = 9;
				}
				else if (iVar0 == joaat("weapon_stickybomb"))
				{
					iLocal_62 = 10;
				}
				else if ((iVar0 != joaat("weapon_petrolcan") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_briefcase"))
				{
					iLocal_62 = 7;
				}
			}
			break;
		
		case 7:
			iLocal_53 = 5;
			iLocal_58 = 3;
			iLocal_62 = 15;
			break;
		
		case 8:
			iLocal_53 = 2;
			iLocal_58 = 2;
			iLocal_62 = 5;
			break;
		
		case 9:
			iLocal_53 = 3;
			iLocal_58 = 2;
			iLocal_62 = 5;
			break;
		
		case 10:
			iLocal_53 = 4;
			iLocal_58 = 2;
			iLocal_62 = 5;
			break;
		
		case 11:
			if (func_21(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1))
			{
				func_226();
				iLocal_60 = 5;
			}
			break;
		
		case 12:
			if (!func_302())
			{
				if (!Local_68.f_464)
				{
					iLocal_64 = 9;
					iLocal_62 = 15;
				}
				else
				{
					iLocal_62 = 13;
				}
			}
			break;
		
		case 13:
			if (unk_0xDC58AE028CB223BA(Local_68.f_0) < 0.1f && !func_250())
			{
				func_249();
				iLocal_62 = 14;
			}
			else if (func_250() && !func_302())
			{
				iLocal_62 = 14;
			}
			break;
		
		case 14:
			if (func_250() && !func_302())
			{
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!unk_0x66599E73DBA5A850(Local_68.f_46[iVar1]))
					{
						unk_0xCAC2B0C65B18E755(Local_68.f_46[iVar1], unk_0xC1A5EC5C986B98AD(), 0, 16);
						unk_0xC5B2830898581862(Local_68.f_46[iVar1], 0);
					}
					iVar1++;
				}
				iLocal_64 = 9;
				iLocal_62 = 15;
			}
			break;
	}
}

void func_249()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x055111B11E6624FD(Local_68.f_46[iVar0], 0))
		{
			if (!unk_0x608D3524886DE93B(Local_68.f_46[iVar0]))
			{
				unk_0x909F139DC199D8E0(Local_68.f_46[iVar0]);
				unk_0xE69C94FB78B395B5(Local_68.f_46[iVar0], Local_68.f_0);
			}
		}
		iVar0++;
	}
}

int func_250()
{
	if (!unk_0x055111B11E6624FD(Local_68.f_0, 0))
	{
		if (unk_0x9DC9E896F189AAA5(Local_68.f_0, Local_68.f_46.f_28, Local_68.f_46.f_31, Local_68.f_46.f_34, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_251()
{
	switch (iLocal_65)
	{
		case 0:
			if (!iLocal_581)
			{
				if (func_252())
				{
					iLocal_53 = 9;
					iLocal_60 = 7;
					iLocal_52 = 3;
					iLocal_64 = 13;
					iLocal_65 = 3;
					iLocal_581 = 1;
				}
			}
			break;
		
		case 1:
			break;
	}
}

int func_252()
{
	int iVar0;
	struct<3> Var1;
	
	if (unk_0x7DE17ACDD8BA2642(Local_68.f_0))
	{
		unk_0xEBC16D60E30C9AE1(Local_68.f_0, &iVar0, 1);
	}
	else
	{
		return 0;
	}
	if (!func_1(Local_68.f_470, 128))
	{
		if ((unk_0x48A4D45B3B4CEFFD(Local_68.f_2) || (unk_0x7559C38E6535AB89(Local_68.f_2, Local_68.f_0, 1) && iVar0 == joaat("weapon_unarmed"))) || func_253(Local_68.f_2, Local_68.f_2.f_1, 1) > 1.15f)
		{
			if (unk_0x48A4D45B3B4CEFFD(Local_68.f_2))
			{
			}
			if (unk_0x7559C38E6535AB89(Local_68.f_2, Local_68.f_0, 1) && iVar0 == joaat("weapon_unarmed"))
			{
			}
			if (func_253(Local_68.f_2, Local_68.f_2.f_1, 1) > 1.15f)
			{
			}
			if (!unk_0x1C4E4DC1EFE24DF1(Local_68.f_2, Local_68.f_2.f_1, 0.35f, 0.35f, 1f, 0, 1, 0))
			{
				Var1 = { unk_0x30BE8A934C020461(Local_68.f_2, 1) };
				Var1 = { Local_68.f_2.f_1 };
			}
			return 1;
		}
	}
	return 0;
}

float func_253(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x055111B11E6624FD(uParam0, 0))
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 0) };
	}
	return unk_0x2E496FE654DA4166(Var0, Param1, iParam4);
}

void func_254()
{
	switch (iLocal_63)
	{
		case 0:
			if (func_282())
			{
				iLocal_63 = 1;
			}
			break;
		
		case 1:
			func_275();
			iLocal_63 = 2;
			break;
		
		case 2:
			func_271();
			iLocal_63 = 3;
			break;
		
		case 3:
			if (func_266())
			{
				iLocal_63 = 4;
			}
			break;
		
		case 4:
			func_255();
			unk_0x617AEFB7754C6AA9(unk_0x93E99A2DBCBA9CFA());
			iLocal_67 = 1;
			break;
	}
}

void func_255()
{
	func_259();
	func_258();
	func_257();
	if (unk_0x4D3D95146FD3490D(Local_68.f_185))
	{
		unk_0x826624DF58AE6057(Local_68.f_2, Local_68.f_185);
		unk_0x826624DF58AE6057(Local_68.f_28, Local_68.f_185);
		if (!bLocal_574)
		{
			unk_0x826624DF58AE6057(Local_68.f_96.f_1, Local_68.f_185);
		}
	}
	func_256();
}

void func_256()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	
	iVar0 = unk_0x15A88CFAAFFC6C4B(1, 11);
	iVar1 = unk_0x15A88CFAAFFC6C4B(1, 5);
	iVar2 = unk_0x15A88CFAAFFC6C4B(1, 5);
	iVar3 = unk_0x15A88CFAAFFC6C4B(1, 3);
	iVar4 = unk_0x15A88CFAAFFC6C4B(1, 6);
	iVar5 = unk_0x15A88CFAAFFC6C4B(1, 4);
	iVar6 = unk_0x15A88CFAAFFC6C4B(1, 5);
	iVar7 = unk_0x15A88CFAAFFC6C4B(1, 4);
	iVar8 = unk_0x15A88CFAAFFC6C4B(1, 4);
	iVar9 = unk_0x15A88CFAAFFC6C4B(1, 5);
	iVar10 = unk_0x15A88CFAAFFC6C4B(1, 5);
	iVar11 = unk_0x15A88CFAAFFC6C4B(1, 5);
	iVar12 = unk_0x15A88CFAAFFC6C4B(1, 5);
	iVar13 = unk_0x15A88CFAAFFC6C4B(1, 9);
	iVar14 = unk_0x15A88CFAAFFC6C4B(1, 3);
	iVar15 = unk_0x15A88CFAAFFC6C4B(1, 5);
	iVar16 = unk_0x15A88CFAAFFC6C4B(1, 3);
	iVar17 = unk_0x15A88CFAAFFC6C4B(1, 6);
	iVar18 = unk_0x15A88CFAAFFC6C4B(1, 5);
	iVar19 = unk_0x15A88CFAAFFC6C4B(1, 4);
	iVar20 = unk_0x15A88CFAAFFC6C4B(1, 4);
	iVar21 = unk_0x15A88CFAAFFC6C4B(1, 4);
	iVar22 = unk_0x15A88CFAAFFC6C4B(1, 6);
	iVar23 = unk_0x15A88CFAAFFC6C4B(1, 6);
	iVar24 = unk_0x15A88CFAAFFC6C4B(1, 6);
	iVar25 = unk_0x15A88CFAAFFC6C4B(1, 6);
	iVar26 = unk_0x15A88CFAAFFC6C4B(1, 4);
	iVar27 = unk_0x15A88CFAAFFC6C4B(1, 3);
	iVar28 = unk_0x15A88CFAAFFC6C4B(1, 4);
	iVar29 = unk_0x15A88CFAAFFC6C4B(1, 4);
	if (func_103() == 0)
	{
		switch (iVar12)
		{
			case 1:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_1";
				break;
			
			case 2:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_2";
				break;
			
			case 3:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_3";
				break;
			
			case 4:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_4";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_68.f_221.f_220 = "OJSR_COPS_1";
				break;
			
			case 2:
				Local_68.f_221.f_220 = "OJSR_COPS_2";
				break;
			
			case 3:
				Local_68.f_221.f_220 = "OJSR_COPS_3";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_68.f_221.f_227 = "OJSR_PLRHUR_1";
				break;
			
			case 2:
				Local_68.f_221.f_227 = "OJSR_PLRHUR_2";
				break;
		}
	}
	else if (func_103() == 1)
	{
		switch (iVar12)
		{
			case 1:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_5";
				break;
			
			case 2:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_6";
				break;
			
			case 3:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_7";
				break;
			
			case 4:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_8";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_68.f_221.f_220 = "OJSR_COPS_5";
				break;
			
			case 2:
				Local_68.f_221.f_220 = "OJSR_COPS_6";
				break;
			
			case 3:
				Local_68.f_221.f_220 = "OJSR_COPS_7";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_68.f_221.f_227 = "OJSR_PLRHUR_3";
				break;
			
			case 2:
				Local_68.f_221.f_227 = "OJSR_PLRHUR_4";
				break;
		}
	}
	else if (func_103() == 2)
	{
		switch (iVar12)
		{
			case 1:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_9";
				break;
			
			case 2:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_10";
				break;
			
			case 3:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_11";
				break;
			
			case 4:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_12";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_68.f_221.f_220 = "OJSR_COPS_9";
				break;
			
			case 2:
				Local_68.f_221.f_220 = "OJSR_COPS_10";
				break;
			
			case 3:
				Local_68.f_221.f_220 = "OJSR_COPS_11";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_68.f_221.f_227 = "OJSR_PLRHUR_5";
				break;
			
			case 2:
				Local_68.f_221.f_227 = "OJSR_PLRHUR_6";
				break;
			}
	}
	switch (iVar0)
	{
		case 1:
			Local_68.f_221.f_198 = "OJSR_GREET_1";
			break;
		
		case 2:
			Local_68.f_221.f_198 = "OJSR_GREET_2";
			break;
		
		case 3:
			Local_68.f_221.f_198 = "OJSR_GREET_3";
			break;
		
		case 4:
			Local_68.f_221.f_198 = "OJSR_GREET_4";
			break;
		
		case 5:
			Local_68.f_221.f_198 = "OJSR_GREET_5";
			break;
		
		case 6:
			Local_68.f_221.f_198 = "OJSR_GREET_6";
			break;
		
		case 7:
			Local_68.f_221.f_198 = "OJSR_GREET_7";
			break;
		
		case 8:
			Local_68.f_221.f_198 = "OJSR_GREET_8";
			break;
		
		case 9:
			Local_68.f_221.f_198 = "OJSR_GREET_9";
			break;
		
		case 10:
			Local_68.f_221.f_198 = "OJSR_GREET_10";
			break;
	}
	switch (iVar1)
	{
		case 1:
			Local_68.f_221.f_199 = "OJSR_BATEQ_1";
			break;
		
		case 2:
			Local_68.f_221.f_199 = "OJSR_BATEQ_2";
			break;
		
		case 3:
			Local_68.f_221.f_199 = "OJSR_BATEQ_3";
			break;
		
		case 4:
			Local_68.f_221.f_199 = "OJSR_BATEQ_4";
			break;
	}
	switch (iVar2)
	{
		case 1:
			Local_68.f_221.f_200 = "OJSR_TOOLEQ_1";
			break;
		
		case 2:
			Local_68.f_221.f_200 = "OJSR_TOOLEQ_2";
			break;
		
		case 3:
			Local_68.f_221.f_200 = "OJSR_TOOLEQ_3";
			break;
		
		case 4:
			Local_68.f_221.f_200 = "OJSR_TOOLEQ_4";
			break;
	}
	switch (iVar3)
	{
		case 1:
			Local_68.f_221.f_201 = "OJSR_STICKEQ_1";
			break;
		
		case 2:
			Local_68.f_221.f_201 = "OJSR_STICKEQ_2";
			break;
	}
	switch (iVar4)
	{
		case 1:
			Local_68.f_221.f_202 = "OJSR_WORRY_1";
			break;
		
		case 2:
			Local_68.f_221.f_202 = "OJSR_WORRY_2";
			break;
		
		case 3:
			Local_68.f_221.f_202 = "OJSR_WORRY_3";
			break;
		
		case 4:
			Local_68.f_221.f_202 = "OJSR_WORRY_4";
			break;
		
		case 5:
			Local_68.f_221.f_202 = "OJSR_WORRY_5";
			break;
	}
	switch (iVar5)
	{
		case 1:
			Local_68.f_221.f_203 = "OJSR_SHOCK_1";
			break;
		
		case 2:
			Local_68.f_221.f_203 = "OJSR_SHOCK_2";
			break;
		
		case 3:
			Local_68.f_221.f_203 = "OJSR_SHOCK_3";
			break;
	}
	switch (iVar6)
	{
		case 1:
			Local_68.f_221.f_204 = "OJSR_STUBBRN_1";
			break;
		
		case 2:
			Local_68.f_221.f_204 = "OJSR_STUBBRN_2";
			break;
		
		case 3:
			Local_68.f_221.f_204 = "OJSR_STUBBRN_3";
			break;
		
		case 4:
			Local_68.f_221.f_204 = "OJSR_STUBBRN_4";
			break;
	}
	switch (iVar7)
	{
		case 1:
			Local_68.f_221.f_205 = "OJSR_COUNTER_1";
			break;
		
		case 2:
			Local_68.f_221.f_205 = "OJSR_COUNTER_2";
			break;
		
		case 3:
			Local_68.f_221.f_205 = "OJSR_COUNTER_3";
			break;
	}
	switch (iVar8)
	{
		case 1:
			Local_68.f_221.f_206 = "OJSR_BACKRM_1";
			break;
		
		case 2:
			Local_68.f_221.f_206 = "OJSR_BACKRM_2";
			break;
		
		case 3:
			Local_68.f_221.f_206 = "OJSR_BACKRM_3";
			break;
	}
	switch (iVar9)
	{
		case 1:
			Local_68.f_221.f_207 = "OJSR_BUMP_1";
			break;
		
		case 2:
			Local_68.f_221.f_207 = "OJSR_BUMP_2";
			break;
		
		case 3:
			Local_68.f_221.f_207 = "OJSR_BUMP_3";
			break;
		
		case 4:
			Local_68.f_221.f_207 = "OJSR_BUMP_4";
			break;
	}
	switch (iVar10)
	{
		case 1:
			Local_68.f_221.f_208 = "OJSR_BPAIM_1";
			break;
		
		case 2:
			Local_68.f_221.f_208 = "OJSR_BPAIM_2";
			break;
		
		case 3:
			Local_68.f_221.f_208 = "OJSR_BPAIM_3";
			break;
		
		case 4:
			Local_68.f_221.f_208 = "OJSR_BPAIM_4";
			break;
	}
	switch (iVar11)
	{
		case 1:
			Local_68.f_221.f_209 = "OJSR_BPAIMAG_1";
			break;
		
		case 2:
			Local_68.f_221.f_209 = "OJSR_BPAIMAG_2";
			break;
		
		case 3:
			Local_68.f_221.f_209 = "OJSR_BPAIMAG_3";
			break;
		
		case 4:
			Local_68.f_221.f_209 = "OJSR_BPAIMAG_4";
			break;
	}
	switch (iVar13)
	{
		case 1:
			Local_68.f_221.f_211 = "OJSR_SCARED_1";
			break;
		
		case 2:
			Local_68.f_221.f_211 = "OJSR_SCARED_2";
			break;
		
		case 3:
			Local_68.f_221.f_211 = "OJSR_SCARED_3";
			break;
		
		case 4:
			Local_68.f_221.f_211 = "OJSR_SCARED_4";
			break;
		
		case 5:
			Local_68.f_221.f_211 = "OJSR_SCARED_5";
			break;
		
		case 6:
			Local_68.f_221.f_211 = "OJSR_SCARED_6";
			break;
		
		case 7:
			Local_68.f_221.f_211 = "OJSR_SCARED_7";
			break;
		
		case 8:
			Local_68.f_221.f_211 = "OJSR_SCARED_8";
			break;
	}
	switch (iVar14)
	{
		case 1:
			Local_68.f_221.f_213 = "OJSR_SCARED_9";
			break;
		
		case 2:
			Local_68.f_221.f_213 = "OJSR_SCARED_10";
			break;
	}
	switch (iVar15)
	{
		case 1:
			Local_68.f_221.f_216 = "OJSR_GRANAIM_1";
			break;
		
		case 2:
			Local_68.f_221.f_216 = "OJSR_GRANAIM_2";
			break;
		
		case 3:
			Local_68.f_221.f_216 = "OJSR_GRANAIM_3";
			break;
		
		case 4:
			Local_68.f_221.f_216 = "OJSR_GRANAIM_4";
			break;
	}
	switch (iVar16)
	{
		case 1:
			Local_68.f_221.f_217 = "OJSR_STICAIM_1";
			break;
		
		case 2:
			Local_68.f_221.f_217 = "OJSR_STICAIM_2";
			break;
	}
	switch (iVar17)
	{
		case 1:
			Local_68.f_221.f_212 = "OJSR_BRAVE_1";
			break;
		
		case 2:
			Local_68.f_221.f_212 = "OJSR_BRAVE_2";
			break;
		
		case 3:
			Local_68.f_221.f_212 = "OJSR_BRAVE_3";
			break;
		
		case 4:
			Local_68.f_221.f_212 = "OJSR_BRAVE_4";
			break;
		
		case 5:
			Local_68.f_221.f_212 = "OJSR_BRAVE_5";
			break;
	}
	switch (iVar18)
	{
		case 1:
			Local_68.f_221.f_218 = "OJSR_MOREAIM_1";
			break;
		
		case 2:
			Local_68.f_221.f_218 = "OJSR_MOREAIM_2";
			break;
		
		case 3:
			Local_68.f_221.f_218 = "OJSR_MOREAIM_3";
			break;
		
		case 4:
			Local_68.f_221.f_218 = "OJSR_MOREAIM_4";
			break;
	}
	switch (iVar19)
	{
		case 1:
			Local_68.f_221.f_219 = "OJSR_SURNDER_1";
			break;
		
		case 2:
			Local_68.f_221.f_219 = "OJSR_SURNDER_2";
			break;
		
		case 3:
			Local_68.f_221.f_219 = "OJSR_SURNDER_3";
			break;
	}
	switch (iVar21)
	{
		case 1:
			Local_68.f_221.f_221 = "OJSR_POURCAN_1";
			break;
		
		case 2:
			Local_68.f_221.f_221 = "OJSR_POURCAN_2";
			break;
		
		case 3:
			Local_68.f_221.f_221 = "OJSR_POURCAN_3";
			break;
	}
	switch (iVar22)
	{
		case 1:
			Local_68.f_221.f_222 = "OJSR_FLEE_1";
			break;
		
		case 2:
			Local_68.f_221.f_222 = "OJSR_FLEE_2";
			break;
		
		case 3:
			Local_68.f_221.f_222 = "OJSR_FLEE_3";
			break;
		
		case 4:
			Local_68.f_221.f_222 = "OJSR_FLEE_4";
			break;
		
		case 5:
			Local_68.f_221.f_222 = "OJSR_FLEE_5";
			break;
	}
	switch (iVar23)
	{
		case 1:
			Local_68.f_221.f_223 = "OJSR_RECSCAR_1";
			break;
		
		case 2:
			Local_68.f_221.f_223 = "OJSR_RECSCAR_2";
			break;
		
		case 3:
			Local_68.f_221.f_223 = "OJSR_RECSCAR_3";
			break;
		
		case 4:
			Local_68.f_221.f_223 = "OJSR_RECSCAR_4";
			break;
		
		case 5:
			Local_68.f_221.f_223 = "OJSR_RECSCAR_5";
			break;
	}
	switch (iVar24)
	{
		case 1:
			Local_68.f_221.f_224 = "OJSR_RECAGGR_1";
			break;
		
		case 2:
			Local_68.f_221.f_224 = "OJSR_RECAGGR_2";
			break;
		
		case 3:
			Local_68.f_221.f_224 = "OJSR_RECAGGR_3";
			break;
		
		case 4:
			Local_68.f_221.f_224 = "OJSR_RECAGGR_4";
			break;
		
		case 5:
			Local_68.f_221.f_224 = "OJSR_RECAGGR_5";
			break;
	}
	switch (iVar25)
	{
		case 1:
			Local_68.f_221.f_225 = "OJSR_CSTMER_1";
			break;
		
		case 2:
			Local_68.f_221.f_225 = "OJSR_CSTMER_2";
			break;
		
		case 3:
			Local_68.f_221.f_225 = "OJSR_CSTMER_3";
			break;
		
		case 4:
			Local_68.f_221.f_225 = "OJSR_CSTMER_4";
			break;
		
		case 5:
			Local_68.f_221.f_225 = "OJSR_CSTMER_5";
			break;
	}
	switch (iVar26)
	{
		case 1:
			Local_68.f_221.f_226 = "OJSR_MOSC_1";
			break;
		
		case 2:
			Local_68.f_221.f_226 = "OJSR_MOSC_2";
			break;
		
		case 3:
			Local_68.f_221.f_226 = "OJSR_MOSC_3";
			break;
	}
	switch (iVar28)
	{
		case 1:
			Local_68.f_221.f_228 = "OJSR_BUY_1";
			break;
		
		case 2:
			Local_68.f_221.f_228 = "OJSR_BUY_2";
			break;
		
		case 3:
			Local_68.f_221.f_228 = "OJSR_BUY_3";
			break;
	}
	switch (iVar29)
	{
		case 1:
			Local_68.f_221.f_229 = "OJSR_STEAL_1";
			break;
		
		case 2:
			Local_68.f_221.f_229 = "OJSR_STEAL_2";
			break;
		
		case 3:
			Local_68.f_221.f_229 = "OJSR_STEAL_3";
			break;
	}
	Local_68.f_221.f_166 = "OJSRAUD";
	Local_68.f_221.f_167 = "OJSR_GREET";
	Local_68.f_221.f_168 = "OJSR_BATEQ";
	Local_68.f_221.f_169 = "OJSR_TOOLEQ";
	Local_68.f_221.f_170 = "OJSR_STICKEQ";
	Local_68.f_221.f_171 = "OJSR_WORRY";
	Local_68.f_221.f_172 = "OJSR_SHOCK";
	Local_68.f_221.f_173 = "OJSR_STUBBRN";
	Local_68.f_221.f_174 = "OJSR_COUNTER";
	Local_68.f_221.f_175 = "OJSR_BACKRM";
	Local_68.f_221.f_176 = "OJSR_BUMP";
	Local_68.f_221.f_177 = "OJSR_BPAIM";
	Local_68.f_221.f_178 = "OJSR_BPAIMAG";
	Local_68.f_221.f_179 = "OJSR_HOLDUP";
	Local_68.f_221.f_180 = "OJSR_SCARED";
	Local_68.f_221.f_181 = "OJSR_KNIFAIM";
	Local_68.f_221.f_182 = "OJSR_TOOLAIM";
	Local_68.f_221.f_183 = "OJSR_GRANAIM";
	Local_68.f_221.f_184 = "OJSR_STICAIM";
	Local_68.f_221.f_185 = "OJSR_BRAVE";
	Local_68.f_221.f_186 = "OJSR_MOREAIM";
	Local_68.f_221.f_187 = "OJSR_SURNDER";
	Local_68.f_221.f_188 = "OJSR_COPS";
	Local_68.f_221.f_189 = "OJSR_POURCAN";
	Local_68.f_221.f_190 = "OJSR_FLEE";
	Local_68.f_221.f_191 = "OJSR_RECSCAR";
	Local_68.f_221.f_192 = "OJSR_RECAGGR";
	Local_68.f_221.f_193 = "OJSR_CSTMER";
	Local_68.f_221.f_194 = "OJSR_MOSC";
	Local_68.f_221.f_195 = "OJSR_PLRHUR";
	Local_68.f_221.f_196 = "OJSR_BUY";
	Local_68.f_221.f_197 = "OJSR_STEAL";
	iLocal_579 = 0;
	iLocal_580 = 0;
	iLocal_581 = 0;
}

void func_257()
{
	unk_0xC0409460F325D2EB(Local_68.f_486.f_6, 0.5f, joaat("prop_till_01"), 1);
	unk_0xC0409460F325D2EB(Local_68.f_486.f_6, 0.5f, joaat("prop_till_02"), 1);
	unk_0xC0409460F325D2EB(Local_68.f_486.f_6, 0.5f, joaat("prop_till_03"), 1);
	Local_68.f_96.f_1 = unk_0xF19D6C0E8B56BE23(Local_68.f_96, Local_68.f_486.f_6, 1, 1, 0);
	unk_0x692C3FDAD7DB53CC(Local_68.f_96.f_1, Local_68.f_96.f_5);
	unk_0x2718E9CC165A99F6(Local_68.f_96.f_1, 1);
}

void func_258()
{
	Local_68.f_28 = unk_0x927352BD9ED16D05(joaat("pickup_portable_crate_unfixed"), Local_68.f_28.f_7, 0, Local_68.f_28.f_13);
	unk_0x464B5B0F22497FC5(Local_68.f_28, Local_68.f_28.f_10, 2, 1);
	unk_0x724FFAED1C56CE2B(Local_68.f_28, 0, 0);
	unk_0x7B20BBC4C133A1DF(Local_68.f_28, 1, 0);
	Local_68.f_28.f_14 = 0;
}

void func_259()
{
	var uVar0;
	var uVar1;
	
	Local_68.f_2 = unk_0x69FDD9508259E5B5(4, Local_68.f_2.f_5, Local_68.f_2.f_1, Local_68.f_2.f_4, 1, 1);
	func_265(iLocal_568, &uVar1, &uVar0);
	unk_0xFECAE061D8C80757(Local_68.f_2, 0, uVar1, uVar0, 0);
	func_264(&uVar1, &uVar0);
	unk_0xFECAE061D8C80757(Local_68.f_2, 2, uVar1, uVar0, 0);
	func_263(&uVar1, &uVar0);
	unk_0xFECAE061D8C80757(Local_68.f_2, 3, uVar1, uVar0, 0);
	func_262(&uVar1, &uVar0);
	unk_0xFECAE061D8C80757(Local_68.f_2, 4, uVar1, uVar0, 0);
	func_261(&uVar1, &uVar0);
	unk_0xFECAE061D8C80757(Local_68.f_2, 8, uVar1, uVar0, 0);
	unk_0xC5B2830898581862(Local_68.f_2, 1);
	if (Local_68.f_2.f_12)
	{
		func_260();
	}
}

void func_260()
{
	if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
	{
	}
}

void func_261(var uParam0, var uParam1)
{
	*uParam0 = unk_0x15A88CFAAFFC6C4B(0, 2);
	if (*uParam0 == 0)
	{
		*uParam1 = unk_0x15A88CFAAFFC6C4B(0, 2);
	}
	else
	{
		*uParam1 = 0;
	}
}

void func_262(var uParam0, var uParam1)
{
	*uParam0 = 0;
	*uParam1 = unk_0x15A88CFAAFFC6C4B(0, 2);
}

void func_263(var uParam0, var uParam1)
{
	*uParam0 = unk_0x15A88CFAAFFC6C4B(0, 2);
	*uParam1 = unk_0x15A88CFAAFFC6C4B(0, 3);
}

void func_264(var uParam0, var uParam1)
{
	*uParam0 = unk_0x15A88CFAAFFC6C4B(0, 3);
	if (*uParam0 > 0)
	{
		*uParam1 = unk_0x15A88CFAAFFC6C4B(0, 2);
	}
	else
	{
		*uParam1 = 0;
	}
}

void func_265(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam1 = 0;
			*uParam2 = unk_0x15A88CFAAFFC6C4B(0, 3);
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam1 = 2;
			*uParam2 = unk_0x15A88CFAAFFC6C4B(0, 3);
			break;
	}
}

int func_266()
{
	if (!func_267(&Local_584))
	{
		return 0;
	}
	if (!bLocal_574)
	{
		if (!unk_0x2BBF749E555360DC(Local_68.f_2.f_15))
		{
			return 0;
		}
	}
	if (!unk_0x494DA26A8EE9C560(Local_68.f_185))
	{
		return 0;
	}
	unk_0x78E45C2D5AB9D24C(0);
	return 1;
}

int func_267(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_268(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_268(var uParam0)
{
	return func_269(*uParam0, "NULL", uParam0->f_1);
}

int func_269(var uParam0, char* sParam1, int iParam2)
{
	if (BitTest(uParam0, 30))
	{
		if (BitTest(uParam0, 29))
		{
			switch (func_270(uParam0))
			{
				case 0:
					return unk_0x0CBB7C273DED26E7(uParam2);
					break;
				
				case 1:
					return unk_0x2BBF749E555360DC(sParam1);
					break;
				
				case 2:
					return unk_0xA6FA26A80B445074(sParam1);
					break;
				
				case 3:
					return unk_0x9812897315C21146(sParam1);
					break;
				
				case 4:
					return unk_0x56659E29BE303D7F(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xC546C50EE3EA181E(sParam1);
					break;
				
				case 6:
					return unk_0xF6AFEDAAE44A2159(sParam1, BitTest(uParam0, 27), -1);
					break;
				
				case 7:
					return unk_0xAF83A305E6D700D3(iParam2);
					break;
				
				case 8:
					return unk_0x578F9DB3098790E9(iParam2);
					break;
				
				case 9:
					return unk_0x399D29F9238EE6B0();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_270(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (BitTest(uParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_271()
{
	unk_0x78E45C2D5AB9D24C(1);
	if (!bLocal_574)
	{
		unk_0x28818732C8F0F80E(Local_68.f_2.f_15);
		Local_584.f_32 = unk_0xE16824A2A0B2A6D8();
	}
	func_272(&Local_584, Local_68.f_2.f_5);
	func_272(&Local_584, Local_68.f_28.f_13);
	func_272(&Local_584, Local_68.f_96);
	Local_68.f_466 = 1;
}

void func_272(var uParam0, int iParam1)
{
	func_273(uParam0, 0, iParam1, 0);
}

void func_273(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_274(bParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*2*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0xECDAB41968FF21A8(uParam0[iVar0 /*2*/], bParam1);
			unk_0xECDAB41968FF21A8(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_275()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	func_280(iLocal_568, &(Local_68.f_46.f_8), &(Local_68.f_46.f_18), &(Local_68.f_46.f_22), &(Local_68.f_46.f_25), &(Local_68.f_46.f_26), &(Local_68.f_46.f_27), &(Local_68.f_46.f_28), &(Local_68.f_46.f_31), &(Local_68.f_46.f_34));
	func_278(iLocal_568);
	Var0 = { -3244.573f, 1000.658f, 12.83f };
	fVar9 = 175.074f;
	Var3 = { -3242.008f, 1001.202f, 11.83071f };
	Var6 = { Var3 - Var0 };
	Var6 = { func_305(Var6, fVar9) };
	Var3 = { -3245.088f, 1001.468f, 13.65071f };
	Var6 = { Var3 - Var0 };
	Var6 = { func_305(Var6, fVar9) };
	Var3 = { -3243.37f, 1000.37f, 12.83f };
	Var6 = { Var3 - Var0 };
	Var6 = { func_305(Var6, fVar9) };
	Local_68.f_469 = -1;
	Local_68.f_102.f_22 = -1;
	Local_68.f_96 = joaat("p_till_01_s");
	Local_68.f_96.f_2 = { Local_68.f_486.f_6 };
	Local_68.f_96.f_5 = (Local_68.f_486.f_9.f_2 + 180f);
	Local_68.f_451.f_3 = 0;
	Local_68.f_458 = 0;
	Local_68.f_459 = 0;
	Local_68.f_460 = 0;
	Local_68.f_461 = 0;
	Local_68.f_462 = 0;
	Local_68.f_465 = 0;
	func_277(iLocal_568, &(Local_68.f_2.f_6), &(Local_68.f_2.f_9));
	func_276();
}

void func_276()
{
	Local_68.f_86.f_1 = joaat("a_m_y_soucent_04");
	Local_68.f_86.f_2 = { -1224.15f, -907.2f, 12.33f };
	Local_68.f_86.f_5 = 2f;
}

void func_277(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -709.7998f, -907.1352f, 18.2156f };
			*uParam2 = 291.6504f;
			break;
		
		case 1:
			*uParam1 = { -41.8128f, -1749.685f, 28.421f };
			*uParam2 = 214.6526f;
			break;
		
		case 2:
			*uParam1 = { 1159.682f, -314.254f, 68.2051f };
			*uParam2 = 232.6337f;
			break;
		
		case 3:
			*uParam1 = { 1707.303f, 4918.31f, 41.0636f };
			*uParam2 = 24.9178f;
			break;
		
		case 4:
			*uParam1 = { -1828.907f, 799.6096f, 137.1776f };
			*uParam2 = 247.1234f;
			break;
		
		case 5:
			*uParam1 = { 1168.971f, 2719.118f, 36.0632f };
			*uParam2 = 136.5945f;
			break;
		
		case 6:
			*uParam1 = { -2962.983f, 391.9788f, 14.0433f };
			*uParam2 = 176.1174f;
			break;
		
		case 7:
			*uParam1 = { -1218.283f, -915.7103f, 10.3264f };
			*uParam2 = 43.8031f;
			break;
		
		case 8:
			*uParam1 = { 1130.155f, -979.2816f, 45.4158f };
			*uParam2 = 269.2587f;
			break;
		
		case 9:
			*uParam1 = { -1479.163f, -375.0302f, 38.1633f };
			*uParam2 = 36.5415f;
			break;
		
		case 10:
			*uParam1 = { -3249.114f, 1006.558f, 11.8307f };
			*uParam2 = 191.594f;
			break;
		
		case 11:
			*uParam1 = { -3047.512f, 588.9807f, 6.9089f };
			*uParam2 = 178.8753f;
			break;
		
		case 12:
			*uParam1 = { 543.0796f, 2663.967f, 41.1565f };
			*uParam2 = 228.4295f;
			break;
		
		case 13:
			*uParam1 = { 2549.85f, 387.1622f, 107.623f };
			*uParam2 = 197.2994f;
			break;
		
		case 14:
			*uParam1 = { 2671.351f, 3283.136f, 54.2411f };
			*uParam2 = 296.5427f;
			break;
		
		case 15:
			*uParam1 = { 1733.967f, 6421.495f, 34.0372f };
			*uParam2 = 130.9518f;
			break;
		
		case 16:
			*uParam1 = { 1958.92f, 3746.267f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
		
		case 17:
			*uParam1 = { 30.5721f, -1339.782f, 28.4939f };
			*uParam2 = 110.7699f;
			break;
		
		case 18:
			*uParam1 = { 376.2976f, 331.8158f, 102.5664f };
			*uParam2 = 52.0064f;
			break;
		
		case -2:
			*uParam1 = { 1958.92f, 3746.267f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
	}
}

void func_278(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_279(Local_68.f_186, Local_68.f_189) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Local_68.f_185 = unk_0xAF0CB15312D8B8E3(Var0, "v_gasstation");
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			Local_68.f_185 = unk_0xAF0CB15312D8B8E3(Var0, "v_gen_liquor");
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			Local_68.f_185 = unk_0xAF0CB15312D8B8E3(Var0, "v_shop_247");
			break;
	}
}

Vector3 func_279(struct<3> Param0, struct<3> Param3)
{
	struct<3> Var0;
	
	Var0.f_0 = ((Param0.f_0 + Param3.f_0) / 2f);
	Var0.f_1 = ((Param0.f_1 + Param3.f_1) / 2f);
	Var0.f_2 = ((Param0.f_2 + Param3.f_2) / 2f);
	return Var0;
}

void func_280(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	if (!func_281(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			*(uParam1[0 /*3*/]) = { -677.0792f, -952.9478f, 20.4712f };
			(*uParam2)[0] = 90.5427f;
			*(uParam1[1 /*3*/]) = { -668.8872f, -961.7076f, 20.6313f };
			(*uParam2)[1] = 90.5427f;
			*(uParam1[2 /*3*/]) = { -749.7003f, -901.2264f, 19.6691f };
			(*uParam2)[2] = 170.7498f;
			*uParam3 = { -715.81f, -930.27f, 18.04f };
			*uParam4 = 8.81f;
			*uParam7 = { -714.079f, -918.088f, 18.196f };
			*uParam8 = { -709.079f, -918.166f, 22.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 1:
			*(uParam1[0 /*3*/]) = { -133.86f, -1764.29f, 29.39f };
			(*uParam2)[0] = 297.87f;
			*(uParam1[1 /*3*/]) = { -63.16f, -1793.14f, 27.23f };
			(*uParam2)[1] = 50.66f;
			*(uParam1[2 /*3*/]) = { -56.5f, -1810.22f, 26.6f };
			(*uParam2)[2] = 50.67f;
			*uParam3 = { -68.92f, -1764.16f, 28.23f };
			*uParam4 = 9f;
			*uParam7 = { -55.922f, -1756.021f, 28.196f };
			*uParam8 = { -52.122f, -1759.271f, 32.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 2:
			*(uParam1[0 /*3*/]) = { 1103.004f, -378.3616f, 66.6258f };
			(*uParam2)[0] = 310.6741f;
			*(uParam1[1 /*3*/]) = { 1186.703f, -289.3757f, 68.5913f };
			(*uParam2)[1] = 214.1061f;
			*(uParam1[2 /*3*/]) = { 1251.639f, -371.6591f, 68.7078f };
			(*uParam2)[2] = 164.5987f;
			*uParam3 = { 1161.84f, -339.25f, 67.29f };
			*uParam4 = 9.17f;
			*uParam7 = { 1157.417f, -328.616f, 68.048f };
			*uParam8 = { 1162.351f, -327.81f, 72.048f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 3:
			*(uParam1[0 /*3*/]) = { 1667.82f, 4916.04f, 41.71f };
			(*uParam2)[0] = 346.32f;
			*(uParam1[1 /*3*/]) = { 1710.43f, 4963.03f, 43.92f };
			(*uParam2)[1] = 112.11f;
			*(uParam1[2 /*3*/]) = { 1727.59f, 4986.13f, 46.4f };
			(*uParam2)[2] = 132.27f;
			*uParam3 = { 1692.99f, 4939.56f, 41.16f };
			*uParam4 = 10f;
			*uParam7 = { 1699.338f, 4932.104f, 41.083f };
			*uParam8 = { 1696.313f, 4928.124f, 45.083f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 4:
			*(uParam1[0 /*3*/]) = { -1862.436f, 732.8416f, 130.8709f };
			(*uParam2)[0] = 301.6958f;
			*(uParam1[1 /*3*/]) = { -1870.955f, 722.3616f, 129.6428f };
			(*uParam2)[1] = 300.6013f;
			*(uParam1[2 /*3*/]) = { -1711.103f, 873.6471f, 145.9411f };
			(*uParam2)[2] = 146.5694f;
			*uParam3 = { -1814.22f, 782.55f, 136.57f };
			*uParam4 = 7.24f;
			*uParam7 = { -1823.281f, 785.687f, 137.027f };
			*uParam8 = { -1819.465f, 788.918f, 141.027f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 5:
			*(uParam1[0 /*3*/]) = { 1127.43f, 2680.61f, 38.02f };
			(*uParam2)[0] = 268.18f;
			*(uParam1[1 /*3*/]) = { 1205.02f, 2687.1f, 37.34f };
			(*uParam2)[1] = 91.37f;
			*(uParam1[2 /*3*/]) = { 1218.17f, 2677.4f, 37.27f };
			(*uParam2)[2] = 88.15f;
			*uParam3 = { 1164.39f, 2683.2f, 37.06f };
			*uParam4 = 8.49f;
			*uParam7 = { 1164.771f, 2702.528f, 38.162f };
			*uParam8 = { 1167.771f, 2702.548f, 41.162f };
			*uParam9 = 3f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 6:
			*(uParam1[0 /*3*/]) = { -3021.405f, 236.3884f, 15.6982f };
			(*uParam2)[0] = 354.8025f;
			*(uParam1[1 /*3*/]) = { -3021.883f, 207.4436f, 15.7511f };
			(*uParam2)[1] = 2.3146f;
			*(uParam1[2 /*3*/]) = { -3015.012f, 640.891f, 21.0514f };
			(*uParam2)[2] = 193.5162f;
			*uParam3 = { -2990.03f, 391.19f, 13.83f };
			*uParam4 = 9.41f;
			*uParam7 = { -2974.55f, 393.338f, 14.037f };
			*uParam8 = { -2975.084f, 388.366f, 18.037f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 7:
			*(uParam1[0 /*3*/]) = { -1270.806f, -944.262f, 10.8025f };
			(*uParam2)[0] = 17.2662f;
			*(uParam1[1 /*3*/]) = { -1327.767f, -855.9691f, 16.4331f };
			(*uParam2)[1] = 216.1689f;
			*(uParam1[2 /*3*/]) = { -1155.798f, -862.4445f, 13.4857f };
			(*uParam2)[2] = 36.347f;
			*uParam3 = { -1233.36f, -891.39f, 11.35f };
			*uParam4 = 5.7f;
			*uParam7 = { -1225.2f, -899.881f, 11.275f };
			*uParam8 = { -1229.293f, -902.753f, 15.275f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 8:
			*(uParam1[0 /*3*/]) = { 1132.016f, -956.2646f, 47.2548f };
			(*uParam2)[0] = 278.2335f;
			*(uParam1[1 /*3*/]) = { 1121.218f, -959.5676f, 46.788f };
			(*uParam2)[1] = 289.4738f;
			*(uParam1[2 /*3*/]) = { 1236.959f, -1153.587f, 37.1736f };
			(*uParam2)[2] = 27.5191f;
			*uParam3 = { 1154.17f, -979.23f, 45.36f };
			*uParam4 = 6.02f;
			*uParam7 = { 1142.794f, -983.315f, 45.205f };
			*uParam8 = { 1142.519f, -978.322f, 49.205f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 9:
			*(uParam1[0 /*3*/]) = { -1525.77f, -389.17f, 41.39f };
			(*uParam2)[0] = 229.73f;
			*(uParam1[1 /*3*/]) = { -1537.28f, -378.84f, 43.02f };
			(*uParam2)[1] = 226.22f;
			*(uParam1[2 /*3*/]) = { -1475.06f, -418.35f, 35.71f };
			(*uParam2)[2] = 45.71f;
			*uParam3 = { -1502.71f, -400.39f, 38.41f };
			*uParam4 = 7.86f;
			*uParam7 = { -1493.544f, -382.617f, 38.994f };
			*uParam8 = { -1489.947f, -386.09f, 42.994f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 10:
			*(uParam1[0 /*3*/]) = { -3218.999f, 1105.409f, 9.9489f };
			(*uParam2)[0] = 175.7402f;
			*(uParam1[1 /*3*/]) = { -3210.846f, 1114.875f, 9.8453f };
			(*uParam2)[1] = 152.4543f;
			*(uParam1[2 /*3*/]) = { -3201.518f, 920.3387f, 13.8887f };
			(*uParam2)[2] = 54.6774f;
			*uParam3 = { -3230.27f, 1003.54f, 11.31f };
			*uParam4 = 5.42f;
			*uParam7 = { -3238.442f, 1001.727f, 11.161f };
			*uParam8 = { -3238.268f, 1006.724f, 15.161f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 11:
			*(uParam1[0 /*3*/]) = { -3061.218f, 658.6545f, 9.6541f };
			(*uParam2)[0] = 216.9221f;
			*(uParam1[1 /*3*/]) = { -3017.391f, 509.7967f, 6.7435f };
			(*uParam2)[1] = 348.3592f;
			*(uParam1[2 /*3*/]) = { -3029.232f, 521.1291f, 6.975f };
			(*uParam2)[2] = 337.5117f;
			*uParam3 = { -3027.51f, 594.25f, 6.87f };
			*uParam4 = 5.89f;
			*uParam7 = { -3036.615f, 587.625f, 6.818f };
			*uParam8 = { -3038.087f, 592.404f, 10.818f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 12:
			*(uParam1[0 /*3*/]) = { 523.8614f, 2658.057f, 42.068f };
			(*uParam2)[0] = 2.8999f;
			*(uParam1[1 /*3*/]) = { 471.6328f, 2657.835f, 42.9164f };
			(*uParam2)[1] = 329.1264f;
			*(uParam1[2 /*3*/]) = { 656.9346f, 2731.927f, 41.5306f };
			(*uParam2)[2] = 183.28f;
			*uParam3 = { 545.05f, 2684.96f, 41.3f };
			*uParam4 = 6.77f;
			*uParam7 = { 546.505f, 2674.393f, 41.152f };
			*uParam8 = { 541.547f, 2673.75f, 45.152f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 13:
			*(uParam1[0 /*3*/]) = { 2593.841f, 273.2788f, 104.926f };
			(*uParam2)[0] = 345.1121f;
			*(uParam1[1 /*3*/]) = { 2595.69f, 262.9971f, 104.2577f };
			(*uParam2)[1] = 350.3949f;
			*(uParam1[2 /*3*/]) = { 2591.545f, 256.5517f, 103.7544f };
			(*uParam2)[2] = 343.9362f;
			*uParam3 = { 2575.75f, 385.11f, 107.46f };
			*uParam4 = 11.61f;
			*uParam7 = { 2560.435f, 382.891f, 107.626f };
			*uParam8 = { 2560.67f, 387.886f, 111.626f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 14:
			*(uParam1[0 /*3*/]) = { 2672.64f, 3259.44f, 54.87f };
			(*uParam2)[0] = 324.3f;
			*(uParam1[1 /*3*/]) = { 2703.37f, 3294.47f, 55.31f };
			(*uParam2)[1] = 152.87f;
			*(uParam1[2 /*3*/]) = { 2699.45f, 3299.76f, 55.35f };
			(*uParam2)[2] = 152.55f;
			*uParam3 = { 2691.41f, 3275.22f, 54.24f };
			*uParam4 = 7.56f;
			*uParam7 = { 2681.77f, 3279.805f, 54.245f };
			*uParam8 = { 2684.297f, 3284.12f, 58.245f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 15:
			*(uParam1[0 /*3*/]) = { 1740.035f, 6378.202f, 35.0341f };
			(*uParam2)[0] = 81.6255f;
			*(uParam1[1 /*3*/]) = { 1755.786f, 6375.046f, 36.2501f };
			(*uParam2)[1] = 76.057f;
			*(uParam1[2 /*3*/]) = { 1752.839f, 6367.344f, 36.135f };
			(*uParam2)[2] = 75.9713f;
			*uParam3 = { 1725.56f, 6400.85f, 33.42f };
			*uParam4 = 7.09f;
			*uParam7 = { 1728.266f, 6411.254f, 34.006f };
			*uParam8 = { 1732.739f, 6409.022f, 38.006f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 16:
			*(uParam1[0 /*3*/]) = { 1942.142f, 3738.897f, 31.9693f };
			(*uParam2)[0] = 210.3384f;
			*(uParam1[1 /*3*/]) = { 2024.891f, 3780.588f, 31.9156f };
			(*uParam2)[1] = 210.1552f;
			*(uParam1[2 /*3*/]) = { 1879.631f, 3673.292f, 33.1966f };
			(*uParam2)[2] = 302.2257f;
			*uParam3 = { 1968.55f, 3731.03f, 31.36f };
			*uParam4 = 6.12f;
			*uParam7 = { 1963.491f, 3738.337f, 31.324f };
			*uParam8 = { 1967.792f, 3740.886f, 35.324f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 17:
			*(uParam1[0 /*3*/]) = { 73.57f, -1359.63f, 28.96f };
			(*uParam2)[0] = 93.85f;
			*(uParam1[1 /*3*/]) = { 77.26f, -1364.69f, 28.97f };
			(*uParam2)[1] = 88.25f;
			*(uParam1[2 /*3*/]) = { -17.95f, -1366.03f, 28.97f };
			(*uParam2)[2] = 267.29f;
			*uParam3 = { 30.98f, -1362.09f, 28.33f };
			*uParam4 = 6f;
			*uParam7 = { 27.296f, -1350.255f, 28.33232f };
			*uParam8 = { 30.795f, -1350.308f, 30.82019f };
			*uParam9 = 3f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 18:
			*(uParam1[0 /*3*/]) = { 424.9115f, 314.1133f, 102.622f };
			(*uParam2)[0] = 155.4277f;
			*(uParam1[1 /*3*/]) = { 439.6049f, 292.7892f, 102.5935f };
			(*uParam2)[1] = 74.6758f;
			*(uParam1[2 /*3*/]) = { 275.961f, 331.2577f, 105.1467f };
			(*uParam2)[2] = 250.7508f;
			*uParam3 = { 372.79f, 313f, 102.47f };
			*uParam4 = 3.94f;
			*uParam7 = { 373.907f, 322.739f, 102.439f };
			*uParam8 = { 378.778f, 321.61f, 106.439f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
	}
}

int func_281(int iParam0)
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= -1)
	{
		return 0;
	}
	return 1;
}

int func_282()
{
	struct<3> Var0;
	
	if (!unk_0x055111B11E6624FD(Local_68.f_0, 0))
	{
		Var0 = { unk_0x30BE8A934C020461(Local_68.f_0, 1) };
		if (unk_0x2E496FE654DA4166(Var0, Local_68.f_181, 1) < 50f)
		{
			return 1;
		}
	}
	return 0;
}

void func_283()
{
	if (Local_68.f_46.f_26 != 0)
	{
		unk_0xE0A291F406691F03(Local_68.f_46.f_26);
	}
	if (Local_68.f_46.f_27 != 0)
	{
		unk_0xE0A291F406691F03(Local_68.f_46.f_27);
	}
	if (!unk_0x2AC37494BBF1DB16(Local_68.f_2.f_15))
	{
		unk_0x0B34FA69ECCE3927(Local_68.f_2.f_15);
	}
}

int func_284()
{
	if (Global_113648.f_9087)
	{
		if (!func_288(56))
		{
			return 1;
		}
	}
	if (func_287())
	{
		return 1;
	}
	if (!unk_0xCBE2EC2868A6C438())
	{
		return 1;
	}
	if (func_304() && !func_303())
	{
		return 1;
	}
	if (func_286() && func_285())
	{
		return 1;
	}
	if (Global_32166)
	{
		unk_0xCD3C8E1022864F65(1);
		unk_0x675D9C12C73D3DE7();
	}
	return 0;
}

bool func_285()
{
	return Global_113366 > 0;
}

int func_286()
{
	if (Global_97603 != -1)
	{
		return 1;
	}
	return 0;
}

int func_287()
{
	struct<3> Var0;
	float fVar3;
	
	if (!unk_0x055111B11E6624FD(Local_68.f_0, 0))
	{
		Var0 = { unk_0x30BE8A934C020461(Local_68.f_0, 1) };
		fVar3 = unk_0x2E496FE654DA4166(Var0, Local_68.f_181, 1);
		if (fVar3 > Local_68.f_184)
		{
			return 1;
		}
	}
	return 0;
}

int func_288(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113648.f_9087.f_99.f_58[iParam0];
}

void func_289(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0xE16824A2A0B2A6D8() >= (uParam0->f_32 + uParam0->f_33) || BitTest(Global_100681.f_20, 2)) || BitTest(Global_100681.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (BitTest((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*2*/], 29))
					{
						func_290(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0xE16824A2A0B2A6D8();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_290(var uParam0)
{
	func_291(uParam0, "NULL", uParam0->f_1);
}

void func_291(var uParam0, char* sParam1, int iParam2)
{
	if (BitTest(*uParam0, 30))
	{
		switch (func_270(*uParam0))
		{
			case 0:
				unk_0x852EC2A7DE66202D(uParam2);
				break;
			
			case 1:
				unk_0x28818732C8F0F80E(sParam1);
				break;
			
			case 2:
				unk_0x14004648CB41E983(sParam1);
				break;
			
			case 3:
				unk_0xEBA1698B77FD0A86(sParam1, BitTest(*uParam0, 28));
				break;
			
			case 4:
				unk_0xC0B5FC4796023855(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x7F2BD159A7FF94C0(sParam1);
				break;
			
			case 6:
				unk_0xF6AFEDAAE44A2159(sParam1, BitTest(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0xD9C38C2E8E7C8C13(iParam2);
				break;
			
			case 8:
				unk_0xA3C681843B51A4CC(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x10FC49B73AEEBE87();
				break;
			
			default:
				break;
		}
		unk_0xECDAB41968FF21A8(uParam0, 29);
	}
}

int func_292()
{
	int iVar0;
	
	if (Local_68.f_1 != Global_113648.f_20037.f_62[iLocal_568])
	{
		return 1;
	}
	iVar0 = (unk_0x8C0F17CAC308A14B() - Global_113648.f_20037.f_42[iLocal_568]);
	iLocal_573 = 2;
	if (iVar0 < 0)
	{
		iVar0 = unk_0x8C0F17CAC308A14B() + 31;
		iVar0 = (iVar0 - Global_113648.f_20037.f_42[iLocal_568]);
	}
	if (iVar0 < iLocal_573)
	{
		return 0;
	}
	return 1;
}

void func_293(var uParam0, int iParam1)
{
	func_294(uParam0, iParam1);
}

void func_294(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_295(int iParam0, float fParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam2 = { unk_0xF2A6E8EA57F9D501(func_296(iParam0), uParam1, 5.95155f, -8.251f, -0.2377f) };
			*uParam3 = { unk_0xF2A6E8EA57F9D501(func_296(iParam0), fParam1, -12.7268f, 7.21174f, 2.93854f) };
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam2 = { unk_0xF2A6E8EA57F9D501(func_296(iParam0), fParam1, -6.52428f, -8.8002f, -0.657398f) };
			*uParam3 = { unk_0xF2A6E8EA57F9D501(func_296(iParam0), fParam1, 3.54253f, 16.8382f, 3.20474f) };
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam2 = { unk_0xF2A6E8EA57F9D501(func_296(iParam0), fParam1, -4.55363f, -7.52366f, -0.75f) };
			*uParam3 = { unk_0xF2A6E8EA57F9D501(func_296(iParam0), fParam1, 11.8868f, 7.00122f, 3.9688f) };
			break;
	}
	return 1;
}

Vector3 func_296(int iParam0)
{
	if (!func_281(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 1:
			return -52.7185f, -1756.175f, 28.4432f;
		
		case 2:
			return 1159.441f, -325.6666f, 68.2272f;
		
		case 3:
			return 1699.429f, 4928.642f, 41.0858f;
		
		case 4:
			return -1822.926f, 788.9531f, 137.212f;
		
		case 5:
			return 1166.427f, 2703.528f, 37.1574f;
		
		case 6:
			return -2973.414f, 390.6885f, 14.0433f;
		
		case 7:
			return -1225.86f, -903.5782f, 11.3263f;
		
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 9:
			return -1490.275f, -382.8514f, 39.1634f;
		
		case 10:
			return -3240.719f, 1004.508f, 11.8468f;
		
		case 11:
			return -3039.249f, 589.3831f, 6.9251f;
		
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 13:
			return 2558.754f, 385.599f, 107.6391f;
		
		case 14:
			return 2681.511f, 3282.763f, 54.2573f;
		
		case 15:
			return 1731.153f, 6411.633f, 34.0373f;
		
		case 16:
			return 1964.931f, 3741.207f, 31.3599f;
		
		case 17:
			return 29.0707f, -1348.773f, 28.5101f;
		
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_297()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (unk_0x30DFE1FFD2CC7420() - Global_113648.f_20037.f_21[iLocal_568]);
	iVar1 = (unk_0x8C0F17CAC308A14B() - Global_113648.f_20037.f_42[iLocal_568]);
	iLocal_572 = 2;
	if (iVar0 < 0)
	{
		iVar0 = unk_0x30DFE1FFD2CC7420() + 24;
		iVar0 = (iVar0 - Global_113648.f_20037.f_21[iLocal_568]);
		iVar2 = 1;
	}
	if ((iVar0 < iLocal_572 && iVar1 == 0) || (iVar0 < iLocal_572 && iVar2))
	{
		return 1;
	}
	return 0;
}

void func_298(bool bParam0)
{
	int iVar0;
	var uVar1[2];
	var uVar4[2];
	struct<3> Var7[2];
	
	func_299(iLocal_568, &uVar1, &uVar4, &Var7);
	if (!func_1(Local_68.f_470, 64))
	{
		if (!unk_0xB2FB1E59B6F71D15(uVar1[iVar0]))
		{
			unk_0xC6DABC9B8ADA3309(uVar1[0], uVar4[0], Var7[0 /*3*/], 0, 0, 0);
			if (uVar1[1] != -1)
			{
				unk_0xC6DABC9B8ADA3309(uVar1[1], uVar4[1], Var7[1 /*3*/], 0, 0, 0);
			}
		}
		func_293(&(Local_68.f_470), 64);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xB2FB1E59B6F71D15(uVar1[iVar0]))
		{
			if (bParam0)
			{
				if (unk_0x27392A4A2ADE7016(uVar1[iVar0]) != 1)
				{
					unk_0x289D605FFACC399B(uVar1[iVar0], 1, 0, 0);
				}
			}
			else if (unk_0x27392A4A2ADE7016(uVar1[iVar0]) != 0)
			{
				unk_0x289D605FFACC399B(uVar1[iVar0], 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_299(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			(*uParam1)[0] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_GAS_2A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -713.07f, -916.54f, 19.37f };
			(*uParam1)[1] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_GAS_2B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -710.47f, -916.54f, 19.37f };
			break;
		
		case 1:
			(*uParam1)[0] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_GAS_3A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -53.96f, -1755.72f, 29.57f };
			(*uParam1)[1] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_GAS_3B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -51.97f, -1757.39f, 29.57f };
			break;
		
		case 2:
			(*uParam1)[0] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_GAS_4A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1158.36f, -326.82f, 69.36f };
			(*uParam1)[1] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_GAS_4B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1160.93f, -326.36f, 69.36f };
			break;
		
		case 3:
			(*uParam1)[0] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_GAS_1A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1699.66f, 4930.28f, 42.21f };
			(*uParam1)[1] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_GAS_1B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1698.17f, 4928.15f, 42.21f };
			break;
		
		case 4:
			(*uParam1)[0] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_GAS_5A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -1823.28f, 787.37f, 138.36f };
			(*uParam1)[1] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_GAS_5B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -1821.37f, 789.13f, 138.31f };
			break;
		
		case 5:
			(*uParam1)[0] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_LIQUOR_1A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { 1167.13f, 2703.75f, 38.3f };
			(*uParam1)[1] = -1;
			break;
		
		case 6:
			(*uParam1)[0] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_LIQUOR_2A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -2973.53f, 390.14f, 15.19f };
			(*uParam1)[1] = -1;
			break;
		
		case 7:
			(*uParam1)[0] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_LIQUOR_3A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -1226.89f, -903.12f, 12.47f };
			(*uParam1)[1] = -1;
			break;
		
		case 8:
			(*uParam1)[0] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_LIQUOR_4A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { 1141.04f, -980.32f, 46.56f };
			(*uParam1)[1] = -1;
			break;
		
		case 9:
			(*uParam1)[0] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_LIQUOR_5A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -1490.41f, -383.85f, 40.31f };
			(*uParam1)[1] = -1;
			break;
		
		case 10:
			(*uParam1)[0] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_SHOP247_3A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3240.13f, 1003.16f, 12.98f };
			(*uParam1)[1] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_SHOP247_3B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3239.9f, 1005.75f, 12.98f };
			break;
		
		case 11:
			(*uParam1)[0] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_SHOP247_2A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3038.22f, 588.29f, 8.06f };
			(*uParam1)[1] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_SHOP247_2B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3039.01f, 590.76f, 8.06f };
			break;
		
		case 12:
			(*uParam1)[0] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_SHOP247_4A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 545.5f, 2672.75f, 42.31f };
			(*uParam1)[1] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_SHOP247_4B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 542.93f, 2672.41f, 42.31f };
			break;
		
		case 13:
			(*uParam1)[0] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_SHOP247_5A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2559.2f, 384.09f, 108.77f };
			(*uParam1)[1] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_SHOP247_5B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2559.3f, 386.69f, 108.77f };
			break;
		
		case 14:
			(*uParam1)[0] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_SHOP247_6A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2681.29f, 3281.43f, 55.39f };
			(*uParam1)[1] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_SHOP247_6B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2682.56f, 3283.7f, 55.39f };
			break;
		
		case 15:
			(*uParam1)[0] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_SHOP247_7A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1730.03f, 6412.07f, 35.19f };
			(*uParam1)[1] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_SHOP247_7B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1732.36f, 6410.92f, 35.19f };
			break;
		
		case 16:
			(*uParam1)[0] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_SHOP247_8A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1963.92f, 3740.08f, 32.49f };
			(*uParam1)[1] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_SHOP247_8B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1966.17f, 3741.38f, 32.49f };
			break;
		
		case 17:
			(*uParam1)[0] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_SHOP247_9A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 27.82f, -1349.17f, 29.65f };
			(*uParam1)[1] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_SHOP247_9B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 30.42f, -1349.17f, 29.65f };
			break;
		
		case 18:
			(*uParam1)[0] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_SHOP247_10A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 375.35f, 323.8f, 103.72f };
			(*uParam1)[1] = unk_0x14580F20CBCE4FA9("eCRIM_HUP_SHOP247_10B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 377.88f, 323.17f, 103.72f };
			break;
	}
}

void func_300(var uParam0, int iParam1)
{
	func_301(uParam0, iParam1);
}

void func_301(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_302()
{
	if (!unk_0x055111B11E6624FD(Local_68.f_0, 0))
	{
		if (unk_0x9DC9E896F189AAA5(Local_68.f_0, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0x9DC9E896F189AAA5(Local_68.f_0, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0x9DC9E896F189AAA5(Local_68.f_0, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, 1, 0))
		{
			return 1;
		}
		else if (Local_68.f_199 != -1f)
		{
			if (unk_0x9DC9E896F189AAA5(Local_68.f_0, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_303()
{
	if (unk_0xCC17806DB0C41C19())
	{
		if (unk_0x27654E358E874F45() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_304()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 20);
	}
	return 0;
}

Vector3 func_305(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = unk_0x0BADBFA3B172435F(fParam3);
	fVar4 = unk_0xD0FFB162F40A139C(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

void func_306(var uParam0)
{
	iLocal_67 = 0;
	iLocal_65 = 0;
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_62 = 0;
	iLocal_61 = 1;
	iLocal_57 = 0;
	iLocal_60 = 1;
	iLocal_59 = 0;
	iLocal_56 = 0;
	iLocal_55 = 0;
	iLocal_53 = 0;
	iLocal_52 = 0;
	Local_68.f_0 = unk_0xC1A5EC5C986B98AD();
	func_314(&(uParam0->f_1[0 /*3*/]), &(Local_68.f_181), &iLocal_568);
	if ((((((((iLocal_568 == 10 || iLocal_568 == 11) || iLocal_568 == 12) || iLocal_568 == 13) || iLocal_568 == 14) || iLocal_568 == 15) || iLocal_568 == 16) || iLocal_568 == 17) || iLocal_568 == 18)
	{
		bLocal_582 = true;
	}
	Local_68.f_184 = 150f;
	Local_68.f_2.f_15 = "random@shop_robbery_reactions@";
	Local_68.f_2.f_16 = "absolutely";
	Local_68.f_2.f_17 = "is_this_it";
	Local_68.f_2.f_18 = "shock";
	Local_68.f_2.f_19 = "anger_a";
	Local_68.f_2.f_20 = "screw_you";
	Local_68.f_2.f_21 = "but_why";
	Local_68.f_486.f_1 = "mp_am_hold_up";
	Local_68.f_486.f_2 = "guard_handsup_loop";
	Local_68.f_486.f_3 = "holdup_victim_20s";
	Local_68.f_486.f_4 = "holdup_victim_20s_bag";
	Local_68.f_486.f_5 = "holdup_victim_20s_till";
	iLocal_570 = func_313();
	if (!bLocal_574)
	{
		func_309();
	}
	iLocal_575 = 0;
	if (iLocal_568 != 7)
	{
		iLocal_54 = 6;
	}
	else
	{
		iLocal_54 = 0;
	}
	if (func_103() == 0)
	{
		Local_68.f_1 = 0;
	}
	else if (func_103() == 1)
	{
		Local_68.f_1 = 1;
	}
	else if (func_103() == 2)
	{
		Local_68.f_1 = 2;
	}
	func_308(iLocal_568, &(Local_68.f_186), &(Local_68.f_189), &(Local_68.f_192), &(Local_68.f_193), &(Local_68.f_196), &(Local_68.f_199), &(Local_68.f_200), &(Local_68.f_203), &(Local_68.f_206), &(Local_68.f_207), &(Local_68.f_210), &(Local_68.f_213), &(Local_68.f_214), &(Local_68.f_217), &(Local_68.f_220), &(Local_68.f_102.f_6), &(Local_68.f_102.f_9));
	func_307(iLocal_568, &(Local_68.f_486.f_6), &(Local_68.f_486.f_9), &(Local_68.f_2.f_1), &(Local_68.f_2.f_4), &(Local_68.f_2.f_5), &(Local_68.f_28.f_7), &(Local_68.f_28.f_10), &(Local_68.f_28.f_13), &(Local_68.f_28.f_4), &(Local_68.f_28.f_5), &(Local_68.f_102.f_21));
}

void func_307(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	switch (iParam0)
	{
		case 0:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -706.6382f, -913.6887f, 19.21f };
			*uParam2 = { 0f, 0f, -89.999f };
			break;
		
		case 1:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -47.19871f, -1757.67f, 29.42f };
			*uParam2 = { 0f, 0f, -130f };
			break;
		
		case 2:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1164.21f, -322.89f, 69.2f };
			*uParam2 = { 0f, 0f, -80f };
			break;
		
		case 3:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1698.307f, 4923.371f, 42.06f };
			*uParam2 = { 0f, 0f, 145f };
			break;
		
		case 4:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1820.465f, 793.8166f, 138.09f };
			*uParam2 = { 0f, 0f, -47.53f };
			break;
		
		case 5:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1165.958f, 2710.201f, 38.14286f };
			*uParam2 = { 0f, 0f, -1.15f };
			break;
		
		case 6:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -2967.027f, 390.9038f, 15.02f };
			*uParam2 = { 0f, 0f, -94.76f };
			break;
		
		case 7:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1222.331f, -907.8234f, 12.31f };
			*uParam2 = { 0f, 0f, -147.297f };
			break;
		
		case 8:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1134.811f, -982.3615f, 46.4f };
			*uParam2 = { 0f, 0f, 96.68562f };
			break;
		
		case 9:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1486.673f, -378.4638f, 40.15f };
			*uParam2 = { 0f, 0f, -46.229f };
			break;
		
		case 10:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3244.573f, 1000.658f, 12.83f };
			*uParam2 = { 0f, 0f, 175.074f };
			break;
		
		case 11:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3041.357f, 584.2665f, 7.9f };
			*uParam2 = { 0f, 0f, -162.241f };
			break;
		
		case 12:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 548.9015f, 2668.941f, 42.15f };
			*uParam2 = { 0f, 0f, -82.5f };
			break;
		
		case 13:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2554.875f, 381.3857f, 108.62f };
			*uParam2 = { 0f, 0f, 177.716f };
			break;
		
		case 14:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2676.212f, 3280.969f, 55.24f };
			*uParam2 = { 0f, 0f, 150.87f };
			break;
		
		case 15:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1729.329f, 6417.123f, 35.03f };
			*uParam2 = { 0f, 0f, 63.641f };
			break;
		
		case 16:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1959.323f, 3742.29f, 32.34f };
			*uParam2 = { 0f, 0f, 120f };
			break;
		
		case 17:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 24.94562f, -1344.954f, 29.49f };
			*uParam2 = { 0f, 0f, 90f };
			break;
		
		case 18:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 373.5954f, 328.5892f, 103.56f };
			*uParam2 = { 0f, 0f, 75.885f };
			break;
	}
	*uParam9 = 220;
	*uParam10 = 787;
	*uParam3 = { unk_0xF2A6E8EA57F9D501(*uParam1, uParam2->f_2, -0.668213f, 0.85762f, 0.0181999f) };
	*uParam4 = (180f + uParam2->f_2);
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam6 = { unk_0xF2A6E8EA57F9D501(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.088f), -0.428174f) };
			*uParam11 = 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam6 = { unk_0xF2A6E8EA57F9D501(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.033f), -0.398174f) };
			*uParam11 = 2;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam6 = { unk_0xF2A6E8EA57F9D501(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.077f), -0.378174f) };
			*uParam11 = 3;
			break;
	}
	*uParam7 = { 5f, 0f, uParam2->f_2 };
}

Vector3 func_308(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -711.81f, -916.36f, 18.22f };
			*uParam2 = { -711.74f, -908.75f, 21.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -705.76f, -908.76f, 18.22f };
			*uParam5 = { -705.8f, -903.16f, 21.24f };
			*uParam6 = 2.32f;
			*uParam7 = { -709.02f, -907.72f, 18.22f };
			*uParam8 = { -708.96f, -903.15f, 21.25f };
			*uParam9 = 3.66f;
			*uParam10 = { -707.05f, -907.18f, 18.23f };
			*uParam11 = { -707.04f, -905.9f, 20.51f };
			*uParam12 = 0.75f;
			*uParam13 = { -704.528f, -913.948f, 18f };
			*uParam14 = { -706.528f, -913.948f, 22.221f };
			*uParam15 = 4f;
			*uParam16 = { -711.2905f, -913.7919f, 19.1156f };
			*uParam17 = 1.05f;
			break;
		
		case 1:
			*uParam1 = { -52.86f, -1756.43f, 28.42f };
			*uParam2 = { -47.94f, -1750.6f, 31.93f };
			*uParam3 = 13.92f;
			*uParam4 = { -43.36f, -1754.47f, 28.44f };
			*uParam5 = { -39.78f, -1750.15f, 31.46f };
			*uParam6 = 2.32f;
			*uParam7 = { -45.14f, -1751.51f, 28.43f };
			*uParam8 = { -42.23f, -1748.08f, 31.48f };
			*uParam9 = 3.66f;
			*uParam10 = { -43.3f, -1752.4f, 28.48f };
			*uParam11 = { -42.5f, -1751.44f, 30.71f };
			*uParam12 = 0.75f;
			*uParam13 = { -45.23195f, -1756.996f, 28.42101f };
			*uParam14 = { -47.68424f, -1759.943f, 31.92101f };
			*uParam15 = 1.8f;
			*uParam16 = { -50.83334f, -1754.827f, 29.321f };
			*uParam17 = 1.05f;
			break;
		
		case 2:
			*uParam1 = { 1159.64f, -326.47f, 68.21f };
			*uParam2 = { 1158.33f, -318.91f, 71.71f };
			*uParam3 = 13.92f;
			*uParam4 = { 1164.22f, -317.89f, 68.21f };
			*uParam5 = { 1163.26f, -312.51f, 71.2f };
			*uParam6 = 2.32f;
			*uParam7 = { 1160.91f, -317.34f, 68.21f };
			*uParam8 = { 1160.11f, -313.19f, 71.13f };
			*uParam9 = 3.66f;
			*uParam10 = { 1162.68f, -316.51f, 68.23f };
			*uParam11 = { 1162.46f, -315.28f, 70.49f };
			*uParam12 = 0.75f;
			*uParam13 = { 1164.222f, -323.349f, 68.21f };
			*uParam14 = { 1166.191f, -323.001f, 72.21f };
			*uParam15 = 4f;
			*uParam16 = { 1159.639f, -323.7686f, 69.1051f };
			*uParam17 = 1.05f;
			break;
		
		case 3:
			*uParam1 = { 1699.09f, 4929.01f, 41.06f };
			*uParam2 = { 1705.3f, 4924.67f, 44.58f };
			*uParam3 = 13.92f;
			*uParam4 = { 1701.85f, 4919.78f, 41.06f };
			*uParam5 = { 1706.43f, 4916.54f, 44.1f };
			*uParam6 = 2.32f;
			*uParam7 = { 1704.57f, 4921.8f, 41.06f };
			*uParam8 = { 1708.29f, 4919.18f, 44.1f };
			*uParam9 = 3.66f;
			*uParam10 = { 1703.9f, 4919.88f, 41.09f };
			*uParam11 = { 1704.92f, 4919.15f, 43.36f };
			*uParam12 = 0.75f;
			*uParam13 = { 1698.032f, 4923.538f, 41.069f };
			*uParam14 = { 1696.99f, 4921.831f, 45.069f };
			*uParam15 = 4f;
			*uParam16 = { 1700.856f, 4927.15f, 41.96366f };
			*uParam17 = 1.05f;
			break;
		
		case 4:
			*uParam1 = { -1822.46f, 788.35f, 137.19f };
			*uParam2 = { -1827.54f, 794.02f, 140.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -1823.17f, 798.02f, 137.1f };
			*uParam5 = { -1826.81f, 802.05f, 140.12f };
			*uParam6 = 2.32f;
			*uParam7 = { -1826.25f, 796.63f, 137.16f };
			*uParam8 = { -1829.17f, 799.88f, 140.16f };
			*uParam9 = 3.66f;
			*uParam10 = { -1825.16f, 798.33f, 137.13f };
			*uParam11 = { -1826f, 799.31f, 139.43f };
			*uParam12 = 0.75f;
			*uParam13 = { -1820.332f, 793.679f, 137.084f };
			*uParam14 = { -1818.891f, 795.067f, 141.084f };
			*uParam15 = 4f;
			*uParam16 = { -1823.841f, 790.7311f, 138.0864f };
			*uParam17 = 1.05f;
			break;
		
		case 5:
			*uParam1 = { 1170.182f, 2708.049f, 37.6f };
			*uParam2 = { 1162.385f, 2708.255f, 40.6f };
			*uParam3 = 8.8f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1170.399f, 2716.422f, 37f };
			*uParam8 = { 1162.601f, 2716.628f, 41.19f };
			*uParam9 = 9f;
			*uParam10 = { 1170.7f, 2712.368f, 37.7f };
			*uParam11 = { 1168.3f, 2712.431f, 40.73f };
			*uParam12 = 1.5f;
			*uParam13 = { 1165.149f, 2712.433f, 37.138f };
			*uParam14 = { 1165.132f, 2710.033f, 41.138f };
			*uParam15 = 5f;
			*uParam16 = { 1165.946f, 2709.136f, 37.96316f };
			*uParam17 = 1f;
			break;
		
		case 6:
			*uParam1 = { -2973.31f, 390.75f, 14.04f };
			*uParam2 = { -2964.67f, 390.23f, 17.65f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -2956.98f, 389.73f, 13.21f };
			*uParam8 = { -2964.11f, 390.19f, 17.65f };
			*uParam9 = 7.5f;
			*uParam10 = { -2964.86f, 388.43f, 14.05f };
			*uParam11 = { -2964.98f, 386.49f, 17.63f };
			*uParam12 = 1.72f;
			*uParam13 = { -2964.645f, 391.391f, 14.048f };
			*uParam14 = { -2966.636f, 391.577f, 18.048f };
			*uParam15 = 4.5f;
			*uParam16 = { -2967.906f, 391.0424f, 14.94331f };
			*uParam17 = 1f;
			break;
		
		case 7:
			*uParam1 = { -1226.29f, -902.84f, 11.33f };
			*uParam2 = { -1221.4f, -910.16f, 14.93f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1217.01f, -916.41f, 10.47f };
			*uParam8 = { -1221.13f, -910.58f, 14.89f };
			*uParam9 = 7.5f;
			*uParam10 = { -1222.99f, -911.03f, 11.33f };
			*uParam11 = { -1224.59f, -912.13f, 14.93f };
			*uParam12 = 1.72f;
			*uParam13 = { -1220.512f, -909.343f, 11.331f };
			*uParam14 = { -1221.766f, -907.785f, 15.331f };
			*uParam15 = 4.5f;
			*uParam16 = { -1222.687f, -907.0001f, 12.22635f };
			*uParam17 = 1.15f;
			break;
		
		case 8:
			*uParam1 = { 1141f, -980.98f, 45.42f };
			*uParam2 = { 1132.3f, -982.16f, 48.99f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1124.73f, -983.22f, 44.57f };
			*uParam8 = { 1131.81f, -982.24f, 48.99f };
			*uParam9 = 7.5f;
			*uParam10 = { 1132.21f, -980.35f, 45.42f };
			*uParam11 = { 1131.91f, -978.44f, 49.02f };
			*uParam12 = 1.72f;
			*uParam13 = { 1132.764f, -983.742f, 45.42f };
			*uParam14 = { 1134.692f, -983.21f, 49.42f };
			*uParam15 = 4.5f;
			*uParam16 = { 1135.651f, -982.4113f, 46.31583f };
			*uParam17 = 1.05f;
			break;
		
		case 9:
			*uParam1 = { -1490.78f, -383.33f, 39.16f };
			*uParam2 = { -1484.56f, -377.1f, 42.74f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1479.17f, -371.69f, 38.33f };
			*uParam8 = { -1484.2f, -376.75f, 42.73f };
			*uParam9 = 7.5f;
			*uParam10 = { -1483.39f, -378.48f, 39.17f };
			*uParam11 = { -1482.01f, -379.86f, 42.77f };
			*uParam12 = 1.72f;
			*uParam13 = { -1485.5f, -376.545f, 39.167f };
			*uParam14 = { -1486.889f, -377.985f, 43.167f };
			*uParam15 = 4.5f;
			*uParam16 = { -1487.306f, -378.922f, 39.81341f };
			*uParam17 = 1.05f;
			break;
		
		case 10:
			*uParam1 = { -3240.12f, 1004.46f, 11.84f };
			*uParam2 = { -3247.19f, 1005.06f, 15.36f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3249.75f, 999.74f, 11.83f };
			*uParam8 = { -3249.05f, 1007.41f, 15.2f };
			*uParam9 = 3.66f;
			*uParam10 = { -3247.71f, 1000.33f, 11.83f };
			*uParam11 = { -3247.59f, 1001.62f, 14.13f };
			*uParam12 = 0.75f;
			*uParam13 = { -3242.573f, 999.168f, 11.835f };
			*uParam14 = { -3242.482f, 1000.365f, 15.835f };
			*uParam15 = 4.2f;
			*uParam16 = { -3241.872f, 1006.54f, 12.73071f };
			*uParam17 = 1f;
			break;
		
		case 11:
			*uParam1 = { -3038.7f, 589.51f, 6.92f };
			*uParam2 = { -3045.47f, 587.31f, 10.45f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3045.77f, 581.47f, 6.91f };
			*uParam8 = { -3048.23f, 589.1f, 10.43f };
			*uParam9 = 3.66f;
			*uParam10 = { -3044.12f, 582.75f, 6.9f };
			*uParam11 = { -3044.51f, 583.99f, 9.21f };
			*uParam12 = 0.75f;
			*uParam13 = { -3039.04f, 583.639f, 6.914f };
			*uParam14 = { -3039.453f, 584.766f, 10.914f };
			*uParam15 = 4.2f;
			*uParam16 = { -3041.18f, 590.7718f, 7.808933f };
			*uParam17 = 1f;
			break;
		
		case 12:
			*uParam1 = { 544.21f, 2672.5f, 41.16f };
			*uParam2 = { 545.16f, 2665.44f, 44.68f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 550.96f, 2664.13f, 41.16f };
			*uParam8 = { 542.86f, 2663.05f, 44.69f };
			*uParam9 = 3.66f;
			*uParam10 = { 549.89f, 2665.96f, 41.17f };
			*uParam11 = { 548.61f, 2665.78f, 43.46f };
			*uParam12 = 0.75f;
			*uParam13 = { 549.913f, 2671.202f, 41.161f };
			*uParam14 = { 548.726f, 2671.024f, 45.161f };
			*uParam15 = 4.2f;
			*uParam16 = { 542.5831f, 2670.376f, 42.05651f };
			*uParam17 = 1f;
			break;
		
		case 13:
			*uParam1 = { 2559.12f, 385.39f, 107.62f };
			*uParam2 = { 2552.06f, 385.68f, 111.17f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam10 = { 2551.76f, 380.95f, 107.65f };
			*uParam11 = { 2551.82f, 382.21f, 109.92f };
			*uParam12 = 0.75f;
			*uParam13 = { 2556.854f, 379.973f, 107.627f };
			*uParam14 = { 2556.845f, 381.173f, 111.627f };
			*uParam15 = 4.2f;
			*uParam16 = { 2557.248f, 387.3177f, 108.523f };
			*uParam17 = 1f;
			break;
		
		case 14:
			*uParam1 = { 2681.84f, 3282.62f, 54.24f };
			*uParam2 = { 2675.63f, 3286.07f, 57.79f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 2671.06f, 3282.22f, 54.48f };
			*uParam8 = { 2675.1f, 3289.37f, 57.77f };
			*uParam9 = 3.66f;
			*uParam10 = { 2673.23f, 3281.96f, 54.25f };
			*uParam11 = { 2673.85f, 3283.09f, 56.53f };
			*uParam12 = 0.75f;
			*uParam13 = { 2677.411f, 3278.796f, 54.246f };
			*uParam14 = { 2677.978f, 3279.854f, 58.246f };
			*uParam15 = 4.2f;
			*uParam16 = { 2680.964f, 3285.271f, 55.14115f };
			*uParam17 = 1f;
			break;
		
		case 15:
			*uParam1 = { 1731.25f, 6411.58f, 34.04f };
			*uParam2 = { 1734.35f, 6417.97f, 37.58f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1730.29f, 6422.24f, 34.23f };
			*uParam8 = { 1737.68f, 6418.66f, 37.59f };
			*uParam9 = 3.66f;
			*uParam10 = { 1730.17f, 6420.17f, 34.04f };
			*uParam11 = { 1731.33f, 6419.58f, 36.34f };
			*uParam12 = 0.75f;
			*uParam13 = { 1727.219f, 6415.816f, 34.042f };
			*uParam14 = { 1728.296f, 6415.289f, 38.042f };
			*uParam15 = 4.2f;
			*uParam16 = { 1733.865f, 6412.566f, 34.93724f };
			*uParam17 = 1f;
			break;
		
		case 16:
			*uParam1 = { 1964.96f, 3740.86f, 31.38f };
			*uParam2 = { 1961.43f, 3746.95f, 34.89f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1955.68f, 3746.02f, 31.4f };
			*uParam8 = { 1962.38f, 3749.91f, 34.72f };
			*uParam9 = 3.66f;
			*uParam10 = { 1957.3f, 3744.68f, 31.35f };
			*uParam11 = { 1958.38f, 3745.33f, 33.63f };
			*uParam12 = 0.75f;
			*uParam13 = { 1959.255f, 3739.774f, 31.349f };
			*uParam14 = { 1960.274f, 3740.408f, 35.349f };
			*uParam15 = 4.2f;
			*uParam16 = { 1965.634f, 3743.55f, 32.24376f };
			*uParam17 = 1f;
			break;
		
		case 17:
			*uParam1 = { 34.84f, -1345.6f, 27f };
			*uParam2 = { 23.34f, -1345.56f, 32f };
			*uParam3 = 7.2f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 27.44f, -1341.815f, 27.01f };
			*uParam8 = { 27.46f, -1337.815f, 32.01f };
			*uParam9 = 9f;
			*uParam10 = { 24.05f, -1341.89f, 27f };
			*uParam11 = { 26.05f, -1341.87f, 32f };
			*uParam12 = 1f;
			*uParam13 = { 23.566f, -1346.956f, 27f };
			*uParam14 = { 25.065f, -1346.901f, 32f };
			*uParam15 = 4f;
			*uParam16 = { 30.97348f, -1347.115f, 29.39393f };
			*uParam17 = 1f;
			break;
		
		case 18:
			*uParam1 = { 376.65f, 323.6f, 102.57f };
			*uParam2 = { 378.35f, 330.47f, 106.12f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 373.45f, 333.81f, 102.58f };
			*uParam8 = { 381.42f, 331.81f, 106.11f };
			*uParam9 = 3.66f;
			*uParam10 = { 373.79f, 331.72f, 102.58f };
			*uParam11 = { 375.03f, 331.41f, 104.86f };
			*uParam12 = 0.75f;
			*uParam13 = { 371.789f, 326.823f, 102.571f };
			*uParam14 = { 372.957f, 326.548f, 106.571f };
			*uParam15 = 4.2f;
			*uParam16 = { 378.9936f, 325.0343f, 103.4664f };
			*uParam17 = 1f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_309()
{
	func_312();
	func_311();
	func_310();
}

void func_310()
{
	int iVar0;
	
	if (iLocal_570 >= 9)
	{
		if (Global_113648.f_20037.f_41 > 3)
		{
			if (iLocal_570 == 9)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = unk_0x15A88CFAAFFC6C4B(0, 5);
			}
			if (iVar0 < 1)
			{
				Local_68.f_464 = 1;
				Global_113648.f_20037.f_41 = 0;
			}
			else
			{
				Local_68.f_464 = 0;
				Global_113648.f_20037.f_41++;
			}
		}
		else
		{
			Global_113648.f_20037.f_41++;
		}
	}
	else
	{
		Global_113648.f_20037.f_41++;
	}
}

void func_311()
{
	int iVar0;
	
	if (iLocal_570 >= 3)
	{
		if (iLocal_570 == 3)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = unk_0x15A88CFAAFFC6C4B(0, 10);
		}
		if (iVar0 < 1)
		{
			Local_68.f_2.f_12 = 1;
		}
		else
		{
			Local_68.f_2.f_12 = 0;
		}
	}
}

void func_312()
{
	int iVar0;
	
	if (iLocal_570 >= 6)
	{
		if (iLocal_570 == 6)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = unk_0x15A88CFAAFFC6C4B(0, 7);
		}
		if (iVar0 < 1)
		{
			iLocal_60 = 2;
		}
		else
		{
			iLocal_60 = 1;
		}
	}
}

int func_313()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = (iVar0 + Global_113648.f_20037[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_314(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	*iParam2 = 0;
	fVar0 = unk_0xB7A628320EFF8E47(func_296(0), *uParam0);
	fVar2 = 0f;
	iVar1 = 1;
	while (iVar1 <= (19 - 1))
	{
		fVar2 = unk_0xB7A628320EFF8E47(*uParam0, func_296(iVar1));
		if (fVar2 < fVar0)
		{
			*iParam2 = iVar1;
			fVar0 = fVar2;
		}
		iVar1++;
	}
	*uParam1 = { func_296(*iParam2) };
}

void func_315(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

bool func_316(int iParam0)
{
	return Global_43257 == iParam0;
}

int func_317(int iParam0)
{
	if (Global_43257 == 15)
	{
		return 0;
	}
	if (func_318(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_318(int iParam0)
{
	return func_319(iParam0, Global_43257);
}

int func_319(int iParam0, int iParam1)
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

void func_320()
{
	if (((iLocal_65 == 1 || iLocal_65 == 2) || iLocal_624 == 7) || (unk_0x055111B11E6624FD(Local_68.f_2, 0) && iLocal_67 == 1))
	{
		if (iLocal_65 == 1)
		{
		}
		if (iLocal_65 == 2)
		{
		}
		if (iLocal_624 == 7)
		{
		}
		if (unk_0x055111B11E6624FD(Local_68.f_2, 0) && iLocal_67 == 1)
		{
		}
		Global_113648.f_20037.f_21[iLocal_568] = unk_0x30DFE1FFD2CC7420();
		Global_113648.f_20037.f_42[iLocal_568] = unk_0x8C0F17CAC308A14B();
	}
	if ((unk_0x67EBFCF2F78761B9() && func_331()) && Local_68.f_468)
	{
		func_327(&iLocal_568, &iLocal_575, &iLocal_569);
	}
	func_326();
	iLocal_575 = 0;
	iLocal_579 = 0;
	iLocal_580 = 0;
	iLocal_581 = 0;
	if (!bLocal_574)
	{
		unk_0x508B7A54DEE39001(5);
	}
	unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 0);
	unk_0x17D46728E18012D3(uLocal_567, 0);
	func_29("SHR_HOLDUP_1", 1);
	func_29("SHR_SNK_TUT", 1);
	if ((func_28("SHR_MENU") || func_28("SHR_HOLDUP_1")) || func_28("SHR_SNK_TUT"))
	{
		unk_0xCD3C8E1022864F65(1);
	}
	if (func_1(Local_68.f_470, 1024))
	{
		if ((unk_0x7DE17ACDD8BA2642(uLocal_618[0]) && unk_0x7DE17ACDD8BA2642(uLocal_618[1])) && unk_0x7DE17ACDD8BA2642(uLocal_618[2]))
		{
			unk_0xEF078F1FEE785D3E(&(uLocal_618[0]));
			unk_0xEF078F1FEE785D3E(&(uLocal_618[1]));
			unk_0xEF078F1FEE785D3E(&(uLocal_618[2]));
		}
	}
	if (iLocal_623 == 2)
	{
		unk_0x0B34FA69ECCE3927(Local_68.f_486.f_1);
	}
	func_321(&Local_584, 0);
	unk_0x675D9C12C73D3DE7();
}

void func_321(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_323(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_322(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_322(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_323(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			func_324(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_324(var uParam0)
{
	func_325(*uParam0, "NULL", uParam0->f_1);
}

void func_325(var uParam0, char* sParam1, int iParam2)
{
	if (BitTest(uParam0, 30))
	{
		switch (func_270(uParam0))
		{
			case 0:
				unk_0xE0A291F406691F03(uParam2);
				break;
			
			case 1:
				unk_0x0B34FA69ECCE3927(sParam1);
				break;
			
			case 2:
				unk_0x1401DAE4BB7FBFCD(sParam1);
				break;
			
			case 3:
				unk_0xFBA79BC11313B81D(sParam1);
				break;
			
			case 4:
				unk_0xC062EB7C484973F7(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x0DE8FEF68764819C(sParam1);
				break;
			
			case 6:
				unk_0x214F8822B61C46FE();
				break;
			
			case 7:
				unk_0xA46627DF9B8B1FBE(iParam2);
				break;
			
			case 8:
				unk_0x32FF0B09752F532B(iParam2, BitTest(uParam0, 26));
				break;
			
			case 9:
				unk_0x42665493F0D75951();
				break;
			
			default:
				break;
		}
	}
}

void func_326()
{
	if (!unk_0x055111B11E6624FD(Local_68.f_2, 0))
	{
		unk_0x909F139DC199D8E0(Local_68.f_2);
	}
	if (unk_0x7DE17ACDD8BA2642(Local_68.f_2))
	{
		func_220();
		unk_0x1EEF71E3CDD868D3(&(Local_68.f_2));
	}
	if (unk_0x7DE17ACDD8BA2642(Local_68.f_86))
	{
		unk_0x1EEF71E3CDD868D3(&(Local_68.f_86));
	}
	if (!unk_0x055111B11E6624FD(Local_68.f_28, 0))
	{
		if (iLocal_55 >= 4)
		{
			unk_0xFB58581C53CF4C05(Local_68.f_28, -8f, 1);
			unk_0x9E1A4BBC2E70DCFB(Local_68.f_28, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
		}
	}
	if (unk_0x7DE17ACDD8BA2642(Local_68.f_28))
	{
		unk_0xC621CC7313639986(&(Local_68.f_28));
	}
	if (unk_0x7DE17ACDD8BA2642(Local_68.f_96.f_1))
	{
		unk_0xEF078F1FEE785D3E(&(Local_68.f_96.f_1));
		unk_0x82EC7C3BD3DA9941(Local_68.f_486.f_6, 0.5f, joaat("prop_till_01"), 0);
		unk_0x82EC7C3BD3DA9941(Local_68.f_486.f_6, 0.5f, joaat("prop_till_02"), 0);
		unk_0x82EC7C3BD3DA9941(Local_68.f_486.f_6, 0.5f, joaat("prop_till_03"), 0);
	}
	if (unk_0x0E0433D7F75E162D(Local_68.f_28.f_1))
	{
		unk_0x7E131AB8520C5824(Local_68.f_28.f_1);
	}
	if (func_15(&(Local_68.f_477)))
	{
		func_40(&(Local_68.f_477));
	}
	if (Local_68.f_466)
	{
		if (!bLocal_574)
		{
			unk_0x0B34FA69ECCE3927(Local_68.f_2.f_15);
		}
		Local_68.f_466 = 0;
	}
}

void func_327(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<6> Var1[3];
	struct<8> Var20[2];
	
	iVar0 = func_330(*uParam1, 1, 0);
	StringCopy(&(Var20[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var20[1 /*8*/]), "Location", 32);
	StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	MemCopy(&(Var1[1 /*6*/]), {func_329(iParam0)}, 6);
	if (func_328(276, &Var1, &Var20, 2, -1, 0, 0))
	{
		unk_0x64AB5E3FDD8C16CB(131, *uParam2, unk_0xBBDA792448DB5A89(*uParam2));
		unk_0x64AB5E3FDD8C16CB(114, iVar0, unk_0xBBDA792448DB5A89(iVar0));
	}
}

int func_328(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0x67EBFCF2F78761B9())
	{
	}
	if ((!unk_0x2BD01C3CAF96EB66() && (unk_0x1D05BD8EFF80B3E3() || !unk_0x2367D34D8582249E())) && unk_0x9CCA2C4CB2E405AE())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0xE52BCF7D5014E06E())
			{
				Var69 = { func_145(unk_0x93E99A2DBCBA9CFA()) };
				if (unk_0x7DD2CE58D33238D9(&Var69))
				{
					if (unk_0xEB463FCE742A28B2(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_2097157.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0xA26A9A07F761D8F8() && Global_2692733.f_3)
			{
				unk_0x598DA40EF1AD2575(&Var0, &(Global_1935368.f_10));
			}
			else
			{
				unk_0x5BD9D15E4CD3C15B(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x2BD01C3CAF96EB66())
	{
	}
	if (!unk_0x1D05BD8EFF80B3E3())
	{
	}
	if (unk_0x2367D34D8582249E())
	{
	}
	if (!unk_0x9CCA2C4CB2E405AE())
	{
	}
	return 0;
}

struct<8> func_329(var uParam0)
{
	struct<8> Var0;
	
	switch (*uParam0)
	{
		case -2:
		case -1:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			StringCopy(&Var0, "SHR_GAS", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "SHR_LIQ1", 32);
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			StringCopy(&Var0, "SHR_LIQ2", 32);
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			StringCopy(&Var0, "SHR_CONV", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

int func_330(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_331()
{
	if (func_333() && func_332(0))
	{
		return 1;
	}
	return 0;
}

var func_332(int iParam0)
{
	return Global_1574538[iParam0];
}

var func_333()
{
	return func_332(func_78() + 1);
}

