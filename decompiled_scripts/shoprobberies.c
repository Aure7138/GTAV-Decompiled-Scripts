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
	if (unk_0x4B34601C5C56F3EE(98))
	{
		func_320();
	}
	if (func_317(0))
	{
		bLocal_574 = true;
		iLocal_571 = unk_0x847BA8D143D888D1();
	}
	if (Global_3)
	{
		unk_0x3410421C60BF7143(1);
		unk_0xAFBDF6A5E54114C1();
	}
	if (func_316(14))
	{
		unk_0x3410421C60BF7143(1);
		unk_0xAFBDF6A5E54114C1();
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
	if ((((func_304() && !func_303()) || Global_113330) || Global_31962) || Global_113375 != -1)
	{
		if (func_304() && !func_303())
		{
		}
		else if (Global_113330)
		{
		}
		else if (Global_31962)
		{
		}
		else if (Global_113375 != -1)
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
	else if (Global_113386.f_20035[iLocal_568] > 0)
	{
		if (func_297())
		{
			func_295(iLocal_568, Local_68.f_486.f_9.f_2, &Var13, &Var16);
			unk_0xF96094A43D443C41(Local_68.f_181, 15f, 0);
			uLocal_567 = unk_0x2915D98110F23A29(Var13, Var16, 0, 1, 1, 1);
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
			iVar19 = unk_0x5853B15F78E1A265(0, 3);
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
					if (!unk_0xF847447D4467709D())
					{
						if (!func_4("SHOP_CLOSED", func_5(iLocal_568)) && !func_3(unk_0x9E2D6C50374FCFA9()))
						{
							unk_0x4976AB7D95C4657E(0);
							func_2("SHOP_CLOSED", func_5(iLocal_568));
						}
					}
				}
				else
				{
					if (func_4("SHOP_CLOSED", func_5(iLocal_568)))
					{
						unk_0x3410421C60BF7143(1);
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
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x26C23BE14F66F202(sParam1);
	unk_0x89B545A74F93B1DD(0, 1, 1, -1);
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x9315DBF7D972F07A())
	{
		return 0;
	}
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		return Global_2788198;
	}
	else
	{
		iVar0 = unk_0x407E03586628E458(iParam0);
		if (unk_0xE5965CDF24F93A9F(iVar0))
		{
			iVar1 = unk_0x15CAA6D7B11F1A7C(iVar0);
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
	unk_0xB65782D82090BB33(sParam0);
	unk_0x26C23BE14F66F202(sParam1);
	return unk_0x73CB3406A86A3A02(0);
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
	if (unk_0xE5965CDF24F93A9F(Local_68.f_0))
	{
		unk_0xA7E29842FA438ED6(Local_68.f_0, &iVar0, 1);
	}
	else
	{
		return;
	}
	bLocal_576 = false;
	if (!unk_0xF68107C40359970C(Local_68.f_2) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar1, 1))
		{
			if ((iVar1 != joaat("weapon_unarmed") && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare"))
			{
				if ((((unk_0x55E78B6AAFEF4EB8(unk_0x9E2D6C50374FCFA9()) && unk_0x2E7F5417D4F4DD69(unk_0xE2D3D51028F0428A(), Local_68.f_2, 45f)) && unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), Local_68.f_2, 5f, 5f, 2f, 0, 1, 0)) || unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), Local_68.f_2)) || unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), Local_68.f_2))
				{
					if (!func_26() && !unk_0x28FF2C2261B6CBA1())
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
			iVar2 = func_25(unk_0xE2D3D51028F0428A());
			iVar3 = unk_0x7F4CB90BCA531A70(iVar2);
			if (iVar3 == joaat("GROUP_PISTOL"))
			{
				sLocal_578 = "hold_up_head_additive_pistol";
				unk_0x49D97B076E3590AC(unk_0xE2D3D51028F0428A(), "mp_am_hold_up", sLocal_578, 8f, -8f, -1, 305, 0, 0, 0, 0);
			}
			else if ((((iVar3 == joaat("GROUP_MG") || iVar3 == joaat("GROUP_RIFLE")) || iVar3 == joaat("GROUP_SHOTGUN")) || iVar3 == joaat("GROUP_SNIPER")) || iVar3 == joaat("GROUP_SMG"))
			{
				sLocal_578 = "hold_up_head_additive_rifle";
				unk_0x49D97B076E3590AC(unk_0xE2D3D51028F0428A(), "mp_am_hold_up", sLocal_578, 8f, -8f, -1, 305, 0, 0, 0, 0);
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
		if (!unk_0xACC32B78196FBC2A(sLocal_578))
		{
			if (unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "mp_am_hold_up", sLocal_578, 3))
			{
				unk_0x227B2DD85A708E68(unk_0xE2D3D51028F0428A(), "mp_am_hold_up", sLocal_578, -1056964608);
			}
		}
		iLocal_577 = 0;
	}
	switch (iLocal_64)
	{
		case 0:
			if (func_302())
			{
				if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
				{
					iLocal_64 = 12;
				}
				else
				{
					iLocal_52 = 2;
					iLocal_59 = 1;
					if (!unk_0x55B23FE400FCEA6B(Local_68.f_0, 0))
					{
						if (!unk_0xD5C6B5E3B93A5EDC(Local_68.f_0, 0))
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
				unk_0xB0550BC91B0159D6(&Global_96292, 3);
				iLocal_64 = 13;
			}
			break;
		
		case 8:
			if (func_1(Local_68.f_470, 16))
			{
				if (func_17())
				{
					if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
					{
						if (!unk_0x32DCDA1B2F8A0694(Local_68.f_2))
						{
							if (func_302())
							{
								if (Local_68.f_486 >= 0)
								{
									if (unk_0xCE2C78E9FC0B01E3(Local_68.f_486))
									{
										unk_0x49D97B076E3590AC(Local_68.f_2, Local_68.f_486.f_1, "handsup_base", 4f, -8f, -1, 1, 0, 0, 0, 0);
										iLocal_60 = 10;
									}
								}
							}
							else
							{
								unk_0x7734082B0EDB0BE0(Local_68.f_2, unk_0xE2D3D51028F0428A(), 100f, -1, 0, 0);
								iLocal_60 = 10;
							}
						}
					}
					unk_0xB0550BC91B0159D6(&Global_96292, 3);
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
	
	if (unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
	{
		return;
	}
	unk_0xA888F8CC04F25CC8(&uVar0);
	unk_0x7D1424753688EE7A(0, Local_68.f_2.f_6, 2f, -1, 0.25f, 0, Local_68.f_2.f_9);
	unk_0x402A537158A551BD(0, -1);
	unk_0xC963A45B50851768(uVar0);
	unk_0x8ACADA903FCAA42F(Local_68.f_2, uVar0);
	unk_0x7461D7C5BA953BC7(&uVar0);
	func_293(&(Local_68.f_470), 128);
}

void func_8()
{
	if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
	{
		unk_0x7461D7C5BA953BC7(&uLocal_566);
		unk_0xA888F8CC04F25CC8(&uLocal_566);
		unk_0x402A537158A551BD(0, 5000);
		unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 100f, -1, 0, 0);
		unk_0xC963A45B50851768(uLocal_566);
		unk_0x8ACADA903FCAA42F(Local_68.f_2, uLocal_566);
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
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x320D1840B6DAA1CC());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		iVar2 = unk_0x0A89FDFA763DCAED();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x320D1840B6DAA1CC()) / 1000f);
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
	unk_0xCED9E32812D6C7C7(uParam0, true);
	unk_0xB0550BC91B0159D6(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_15(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_16(int iParam0, bool bParam1)
{
	if (unk_0xC378B7F0D175A5B0(unk_0xB6BA8B8E3D0B41C6()) < iParam0 && (!bLocal_574 || (bLocal_574 && iParam0 < iLocal_571)))
	{
		unk_0xBCD99B4EDAE55BE6(unk_0xB6BA8B8E3D0B41C6(), iParam0, 0);
		unk_0xB78CBE6C9550E5EF(unk_0xB6BA8B8E3D0B41C6(), 0);
		Local_68.f_158 = 1;
		if (bParam1)
		{
			unk_0xC0F70A3CDEC87ECE(iParam0);
		}
		else
		{
			unk_0xC0F70A3CDEC87ECE(5);
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
			Local_68.f_486 = unk_0x8F5F4164BF5FB513(Local_68.f_486.f_6, Local_68.f_486.f_9, 2);
			if (!unk_0xE63474311C6E3825(Local_68.f_2, 1))
			{
				if (!unk_0x55B23FE400FCEA6B(Local_68.f_28, 0))
				{
					if (Local_68.f_486 >= 0)
					{
						unk_0x959E1626CBC7D38A(Local_68.f_28, 1, 0);
						unk_0x4536AE3DABDE0C44(Local_68.f_28, 1);
						unk_0x950B26F4C891073F(Local_68.f_2, Local_68.f_486, Local_68.f_486.f_1, Local_68.f_486.f_3, 8f, -1.5f, 25, 0, 1148846080, 0);
						unk_0xAA8557AFE4A4A184(Local_68.f_28, Local_68.f_486, Local_68.f_486.f_4, Local_68.f_486.f_1, 1000f, 8f, 137, 1148846080);
						unk_0xAA8557AFE4A4A184(Local_68.f_96.f_1, Local_68.f_486, Local_68.f_486.f_5, Local_68.f_486.f_1, 1000f, 8f, 137, 1148846080);
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
				if (unk_0xCE2C78E9FC0B01E3(Local_68.f_486))
				{
					if (unk_0x54DE1614490C2A83(Local_68.f_486) > 0.478f)
					{
						if (!unk_0x55B23FE400FCEA6B(Local_68.f_28, 0))
						{
							unk_0xAA8557AFE4A4A184(Local_68.f_28, Local_68.f_486, Local_68.f_486.f_4, Local_68.f_486.f_1, 1000f, 8f, 137, 1148846080);
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
				if (unk_0xCE2C78E9FC0B01E3(Local_68.f_486))
				{
					if (unk_0x54DE1614490C2A83(Local_68.f_486) > 0.447f)
					{
						if (!unk_0x55B23FE400FCEA6B(Local_68.f_28, 0))
						{
							if (!unk_0x2B5F4FBAF644BEC8(Local_68.f_28))
							{
								unk_0x1C2ED929474DC6FE(Local_68.f_28, 1, 0);
							}
						}
					}
					if (Local_68.f_467)
					{
						if (unk_0x75408AE37923C89B(Local_68.f_486) != 1.45f)
						{
							unk_0x7541CCCB5B62C54D(Local_68.f_486, 1.45f);
						}
					}
					if (unk_0x54DE1614490C2A83(Local_68.f_486) > 0.894f)
					{
						iLocal_56 = 3;
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_28, 0))
			{
				if (Local_68.f_486 >= 0)
				{
					if (unk_0xCE2C78E9FC0B01E3(Local_68.f_486))
					{
						if (iLocal_55 >= 4)
						{
							if (unk_0x54DE1614490C2A83(Local_68.f_486) < 0.871f)
							{
								iLocal_57 = 4;
							}
							unk_0xA5D8BA53953077C8(Local_68.f_28, -16f, 1);
							unk_0xAA8C46C452582702(Local_68.f_28);
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
		if (unk_0xCE2C78E9FC0B01E3(Local_68.f_486))
		{
			if (unk_0x54DE1614490C2A83(Local_68.f_486) >= 0f)
			{
				if (unk_0x54DE1614490C2A83(Local_68.f_486) < 0.117f)
				{
					iLocal_55 = 1;
				}
				else if (unk_0x54DE1614490C2A83(Local_68.f_486) < 0.154f)
				{
					iLocal_55 = 2;
				}
				else if (unk_0x54DE1614490C2A83(Local_68.f_486) < 0.477f)
				{
					iLocal_55 = 3;
				}
				else if (unk_0x54DE1614490C2A83(Local_68.f_486) < 0.487f)
				{
					iLocal_55 = 4;
				}
				else if (unk_0x54DE1614490C2A83(Local_68.f_486) < 0.809f)
				{
					iLocal_55 = 5;
				}
				else if (unk_0x54DE1614490C2A83(Local_68.f_486) < 0.871f)
				{
					iLocal_55 = 6;
				}
				else if (unk_0x54DE1614490C2A83(Local_68.f_486) < 0.894f)
				{
					iLocal_55 = 7;
				}
				else if (unk_0x54DE1614490C2A83(Local_68.f_486) < 0.999f)
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
	if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
	{
		unk_0x9521FB98DB6DDF50(Local_68.f_2, joaat("weapon_pumpshotgun"), 12, 0, 1);
		unk_0x202B28FEABEC4034(Local_68.f_2, joaat("weapon_pumpshotgun"), 0);
		unk_0xFF4BEB6CFF55A013(Local_68.f_2, -2065892691);
		unk_0xA888F8CC04F25CC8(&(Local_68.f_2.f_22));
		unk_0x636B3584208A6D73(0, Local_68.f_0, 2000, 0);
		unk_0x913E191F1F726271(0, Local_68.f_0, 4000, joaat("FIRING_PATTERN_FULL_AUTO"));
		unk_0x766D377A16F499E3(0, 25f, 0);
		unk_0xC963A45B50851768(Local_68.f_2.f_22);
		unk_0x8ACADA903FCAA42F(Local_68.f_2, Local_68.f_2.f_22);
	}
}

int func_20()
{
	if (Global_21605 != 0 || unk_0x2E5F8A288A954523())
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
	if (!unk_0x55B23FE400FCEA6B(uParam1, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam1, 1) };
	}
	if (unk_0x9AC74C7EF847A074(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x81C70E8A536AAC9E(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x5007A91D57C39FFC(uParam0, 2))
	{
		if (unk_0xE323E6755636A70E(uParam0))
		{
			if (unk_0x8F41785F110B0DA0(iParam1, unk_0x6B62510F212526DC(uParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0x2E7F5417D4F4DD69(unk_0x28AA31872A651BC7(iParam1), iParam0, 120f) && unk_0xD936DBC1D824A1BE(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0x28AA31872A651BC7(iParam1), 0))
			{
				iVar3 = unk_0xB3FF0049C1FD38EC(unk_0x28AA31872A651BC7(iParam1), 0);
			}
			if (unk_0x3DA4842FA4407BE2(iParam0) || func_22(iVar3))
			{
				if (unk_0x8F41785F110B0DA0(iParam1, unk_0x6B62510F212526DC(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0x2E7F5417D4F4DD69(unk_0x28AA31872A651BC7(iParam1), iParam0, 120f) && unk_0xD936DBC1D824A1BE(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x863026E0C5C2E52B((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
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
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (unk_0xAB793EA186AB8DAA(iParam0, -1, 0) != 0)
			{
				if (unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_23(unk_0xE2D3D51028F0428A(), iParam0, 1) < 40f)
						{
							if (unk_0xFD48978E4E1BAA06(unk_0x9E2D6C50374FCFA9(), &uVar1))
							{
								if ((unk_0x04D9F44466CBF3CA(uVar1) && unk_0x31EB55FAEEE9C0F5(iVar1) == iParam0) || (unk_0x9044EDB8A7BF67B4(iVar1) && unk_0x28AA31872A651BC7(iVar1) == unk_0xAB793EA186AB8DAA(iParam0, -1, 0)))
								{
									if ((unk_0x3C7ED37A9FE7C585(unk_0xE2D3D51028F0428A()) && unk_0x4C1B8C5717647539(0, 24)) || (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && unk_0x4C1B8C5717647539(0, 69)))
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
	
	if (!unk_0x55B23FE400FCEA6B(uParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	if (!unk_0x55B23FE400FCEA6B(uParam1, 0))
	{
		Var3 = { unk_0x6B62510F212526DC(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x6B62510F212526DC(iParam1, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Var3, iParam2);
}

int func_24()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!unk_0x55B23FE400FCEA6B(Local_68.f_0, 0))
	{
		if (unk_0xD5C6B5E3B93A5EDC(Local_68.f_0, 0))
		{
			iVar1 = unk_0xB3FF0049C1FD38EC(Local_68.f_0, 0);
			bVar0 = true;
		}
		else if (!unk_0x55B23FE400FCEA6B(unk_0x9993EF7FDBCDB632(), 0))
		{
			iVar1 = unk_0x9993EF7FDBCDB632();
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!unk_0x55B23FE400FCEA6B(iVar1, 0))
		{
			if (unk_0xD132EDDA78FF4A51(iVar1, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0))
			{
				return 1;
			}
			else if (unk_0xD132EDDA78FF4A51(iVar1, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0))
			{
				return 1;
			}
			else if (unk_0xD132EDDA78FF4A51(iVar1, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, 1, 0))
			{
				return 1;
			}
			else if (Local_68.f_199 != -1f)
			{
				if (unk_0xD132EDDA78FF4A51(iVar1, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, 1, 0))
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
	
	unk_0xA7E29842FA438ED6(iParam0, &uVar0, 1);
	return uVar0;
}

int func_26()
{
	if (unk_0xB4C854DD86E40FDA(joaat("appcamera")) > 0)
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
					if (!func_1(Global_113386.f_20035.f_20, 1))
					{
						switch (func_36("SHR_HOLDUP_1"))
						{
							case 2:
								func_34("SHR_HOLDUP_1", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_293(&(Global_113386.f_20035.f_20), 1);
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
						if ((unk_0x320D1840B6DAA1CC() % 1000) < 50)
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
					if (!func_1(Global_113386.f_20035.f_20, 2))
					{
						switch (func_36("SHR_SNK_TUT"))
						{
							case 2:
								func_34("SHR_SNK_TUT", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_293(&(Global_113386.f_20035.f_20), 2);
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
				unk_0x3410421C60BF7143(1);
			}
			if (func_33("SHR_SNK_TUT") && !func_1(Global_113386.f_20035.f_20, 2))
			{
				func_29("SHR_SNK_TUT", 1);
			}
			if (func_33("SHR_HOLDUP_1") && !func_1(Global_113386.f_20035.f_20, 1))
			{
				func_29("SHR_HOLDUP_1", 1);
			}
			iLocal_52 = 4;
			break;
		
		case 4:
			if ((!func_302() && func_33("SHR_HOLDUP_1")) && !func_1(Global_113386.f_20035.f_20, 1))
			{
				func_29("SHR_HOLDUP_1", 1);
				iLocal_52 = 2;
			}
			if ((!func_302() && func_33("SHR_SNK_TUT")) && !func_1(Global_113386.f_20035.f_20, 2))
			{
				func_29("SHR_SNK_TUT", 1);
				iLocal_52 = 2;
			}
			break;
	}
}

int func_28(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

void func_29(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_112026 && iParam1)
	{
		if (func_28(sParam0) && !unk_0xD2FC6B4FE564A470())
		{
			unk_0x3410421C60BF7143(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (unk_0x3C57C2F07FEE34D2(sParam0, &(Global_113386.f_20410[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_113386.f_20410.f_145 - 2))
			{
				func_32(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_31((Global_113386.f_20410.f_145 - 1));
			Global_113386.f_20410.f_145 = (Global_113386.f_20410.f_145 - 1);
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
		Global_113386.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[0])
			{
				Global_113386.f_20410.f_146[0] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[1])
			{
				Global_113386.f_20410.f_146[1] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[2])
			{
				Global_113386.f_20410.f_146[2] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_31(int iParam0)
{
	StringCopy(&(Global_113386.f_20410[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_113386.f_20410[iParam0 /*16*/].f_4), "", 16);
	Global_113386.f_20410[iParam0 /*16*/].f_8 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_9 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_11 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_10 = -1;
	Global_113386.f_20410[iParam0 /*16*/].f_12 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_13 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_14 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_15 = 0;
}

void func_32(int iParam0, int iParam1)
{
	Global_113386.f_20410[iParam0 /*16*/] = { Global_113386.f_20410[iParam1 /*16*/] };
	Global_113386.f_20410[iParam0 /*16*/].f_4 = { Global_113386.f_20410[iParam1 /*16*/].f_4 };
	Global_113386.f_20410[iParam0 /*16*/].f_8 = Global_113386.f_20410[iParam1 /*16*/].f_8;
	Global_113386.f_20410[iParam0 /*16*/].f_10 = Global_113386.f_20410[iParam1 /*16*/].f_10;
	Global_113386.f_20410[iParam0 /*16*/].f_9 = Global_113386.f_20410[iParam1 /*16*/].f_9;
	Global_113386.f_20410[iParam0 /*16*/].f_11 = Global_113386.f_20410[iParam1 /*16*/].f_11;
	Global_113386.f_20410[iParam0 /*16*/].f_12 = Global_113386.f_20410[iParam1 /*16*/].f_12;
	Global_113386.f_20410[iParam0 /*16*/].f_13 = Global_113386.f_20410[iParam1 /*16*/].f_13;
	Global_113386.f_20410[iParam0 /*16*/].f_14 = Global_113386.f_20410[iParam1 /*16*/].f_14;
	Global_113386.f_20410[iParam0 /*16*/].f_15 = Global_113386.f_20410[iParam1 /*16*/].f_15;
}

int func_33(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (unk_0x3C57C2F07FEE34D2(sParam0, &(Global_113386.f_20410[iVar0 /*16*/])))
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
	
	if (unk_0x3C57C2F07FEE34D2(sParam0, ""))
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
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (unk_0x3C57C2F07FEE34D2(&(Global_113386.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113386.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_8 = (unk_0x320D1840B6DAA1CC() + iParam3);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = ((unk_0x320D1840B6DAA1CC() + iParam3) + iParam4);
		}
		else
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_113386.f_20410.f_145++;
		func_30();
	}
}

int func_36(char* sParam0)
{
	if (unk_0x3C57C2F07FEE34D2(sParam0, &Global_112029))
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
		if (!unk_0x55B23FE400FCEA6B(Local_68.f_0, 0))
		{
		}
	}
	if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
	{
	}
	switch (iLocal_53)
	{
		case 1:
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_GREET", 3);
			}
			iLocal_53 = 14;
			break;
		
		case 2:
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, func_46(bLocal_582, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 3:
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, func_46(bLocal_582, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 4:
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, func_46(bLocal_582, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 5:
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, func_46(bLocal_582, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 6:
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, func_46(bLocal_582, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 15:
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_STUBBORN", 3);
			}
			iLocal_53 = 14;
			break;
		
		case 7:
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_53 = 14;
			break;
		
		case 8:
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_53 = 14;
			break;
		
		case 36:
			if (!func_20())
			{
				if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "SHOP_THREATENED", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 9:
			if (!func_20())
			{
				if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "BUMP", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 10:
			if (!func_20())
			{
				if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "GENERIC_FRIGHTENED_HIGH", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 11:
			if (!func_20())
			{
				if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
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
						if (!unk_0xF68107C40359970C(Local_68.f_2) && func_1(Local_68.f_470, 4))
						{
							unk_0x49D97B076E3590AC(Local_68.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
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
			if (!unk_0xB6F46ABD140050F1(unk_0xE2D3D51028F0428A()))
			{
				if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
				{
					func_48(unk_0xE2D3D51028F0428A(), "SHOP_HOLDUP", 8);
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
				unk_0x642EEAB0CFC6A636(unk_0xE2D3D51028F0428A());
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
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 17:
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 18:
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 19:
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 20:
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 21:
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 22:
			if (!unk_0xB6F46ABD140050F1(unk_0xE2D3D51028F0428A()))
			{
				if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "SHOP_BRAVE", 8);
				}
				func_293(&(Local_68.f_470), 256);
				iLocal_53 = 37;
			}
			break;
		
		case 23:
			if (!unk_0xB6F46ABD140050F1(unk_0xE2D3D51028F0428A()))
			{
				if (Local_68.f_28.f_14)
				{
					if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
					{
						func_48(Local_68.f_2, "SHOP_GAVE_YOU_EVERYTHING", 3);
					}
				}
				iLocal_53 = 37;
			}
			else
			{
				unk_0x642EEAB0CFC6A636(unk_0xE2D3D51028F0428A());
			}
			break;
		
		case 24:
			if (unk_0x55A0C756C4A8220C(Local_68.f_46.f_4[0], 0))
			{
				unk_0xBF0DDDDACD98C554(Local_68.f_46.f_4[0], 0);
			}
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_46[0], 0))
			{
				func_48(Local_68.f_46[0], "SURROUNDED", 15);
			}
			iLocal_53 = 25;
			break;
		
		case 25:
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				func_48(unk_0xE2D3D51028F0428A(), "SPOT_POLICE", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 26:
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_POUR_CAN", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 27:
			if (!func_20())
			{
				if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
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
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_53 = 37;
			break;
		
		case 29:
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_53 = 37;
			break;
		
		case 30:
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
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
			if (!unk_0xB6F46ABD140050F1(unk_0xE2D3D51028F0428A()) && !unk_0xB6F46ABD140050F1(Local_68.f_2))
			{
				if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
				{
					func_48(unk_0xE2D3D51028F0428A(), "SHOP_HURRY", 11);
				}
				func_13(&(Local_68.f_471));
				iLocal_53 = 32;
			}
			break;
		
		case 32:
			if (func_41(&(Local_68.f_471)) > 1f)
			{
				if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "SHOP_HURRYING", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 34:
			if (!func_20())
			{
				if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "SHOP_SELL", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 35:
			if (!func_20())
			{
				if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
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
	Global_20471 = 0;
	func_39();
}

void func_39()
{
	unk_0x82B0661A78CC39CF();
	Global_22616 = 0;
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21605 = 6;
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
			unk_0xCED9E32812D6C7C7(uParam0, 2);
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
			unk_0xB0550BC91B0159D6(uParam0, 2);
		}
	}
}

int func_44()
{
	if (!unk_0x55B23FE400FCEA6B(Local_68.f_0, 0))
	{
		if (unk_0xD132EDDA78FF4A51(Local_68.f_0, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_45()
{
	if (!unk_0x55B23FE400FCEA6B(Local_68.f_0, 0))
	{
		if (unk_0xD132EDDA78FF4A51(Local_68.f_0, Local_68.f_214, Local_68.f_217, Local_68.f_220, 0, 1, 0))
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
	if (BitTest(unk_0x5853B15F78E1A265(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_48(int iParam0, char* sParam1, int iParam2)
{
	unk_0xB0C559BD7D5D270D(iParam0, sParam1, func_49(iParam2), 1);
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
	return Global_23009;
}

void func_51()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_302() && iLocal_66 != 3)
	{
		iVar2 = 0;
		while (iVar2 < unk_0x9418088815C89D59(0))
		{
			iVar0 = unk_0xB1D84E0EF6979085(0, iVar2);
			switch (iVar0)
			{
				case 142:
					unk_0x92039F20B184AB4D(0, iVar2, &iVar1, 1);
					if (func_53(iVar1))
					{
						if (unk_0x9044EDB8A7BF67B4(iVar1))
						{
							if (iVar1 != func_52(Local_68.f_2) && iVar1 != func_52(unk_0xE2D3D51028F0428A()))
							{
								func_293(&(Local_68.f_470), 8);
							}
						}
						if (!unk_0x9044EDB8A7BF67B4(iVar1) && !unk_0x04D9F44466CBF3CA(iVar1))
						{
							func_293(&(Local_68.f_470), 8);
						}
					}
					break;
				
				case 141:
					unk_0x92039F20B184AB4D(0, iVar2, &iVar1, 1);
					if (func_53(iVar1))
					{
						if (unk_0x9044EDB8A7BF67B4(iVar1))
						{
							if (iVar1 != func_52(Local_68.f_2) && iVar1 != func_52(unk_0xE2D3D51028F0428A()))
							{
								func_293(&(Local_68.f_470), 8);
							}
						}
						if (!unk_0x9044EDB8A7BF67B4(iVar1) && !unk_0x04D9F44466CBF3CA(iVar1))
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
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x6D7EE245AD1E10B0(iParam0) == Local_68.f_185)
		{
			return 1;
		}
		else if (unk_0xD132EDDA78FF4A51(iParam0, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0xD132EDDA78FF4A51(iParam0, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0xD132EDDA78FF4A51(iParam0, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, 1, 0))
		{
			return 1;
		}
		else if (Local_68.f_199 != -1f)
		{
			if (unk_0xD132EDDA78FF4A51(iParam0, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, 1, 0))
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
	
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (func_302())
		{
			if (!BitTest(Local_68.f_162.f_18, 0))
			{
				iVar12 = 0;
				iVar13 = 0;
				iVar12 = unk_0x46951D3186547C7A(unk_0xE2D3D51028F0428A(), &uVar1, -1);
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
						if ((unk_0xE5965CDF24F93A9F(uVar1[iVar13]) && !unk_0xF68107C40359970C(uVar1[iVar13])) && !unk_0xD5C6B5E3B93A5EDC(uVar1[iVar13], 0))
						{
							if (unk_0x2F52E009BBC0AFCE(uVar1[iVar13], unk_0xFD8E434495EC2F26(unk_0x9E2D6C50374FCFA9())))
							{
								Local_68.f_162[iVar0] = uVar1[iVar13];
								Local_68.f_162.f_5[iVar0 /*3*/] = { unk_0x6B62510F212526DC(uVar1[iVar13], 1) };
								iVar0++;
							}
						}
					}
					iVar13++;
				}
				unk_0xCED9E32812D6C7C7(&(Local_68.f_162.f_18), false);
			}
			iVar0 = 0;
			while (iVar0 < Local_68.f_162)
			{
				if ((unk_0xE5965CDF24F93A9F(Local_68.f_162[iVar0]) && !unk_0xF68107C40359970C(Local_68.f_162[iVar0])) && !unk_0xD5C6B5E3B93A5EDC(Local_68.f_162[iVar0], 0))
				{
					if (BitTest(Local_68.f_162.f_18, 1))
					{
						if ((unk_0x320D1840B6DAA1CC() % 1500) < 50)
						{
						}
						unk_0x1C2ED929474DC6FE(Local_68.f_162[iVar0], 0, 0);
						unk_0x959E1626CBC7D38A(Local_68.f_162[iVar0], 0, 0);
						unk_0x5C65DDDC219B3AA5(Local_68.f_162[iVar0], 1);
						unk_0xA539EDE8DA5BBC22(Local_68.f_162[iVar0], Local_68.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
					else if (!unk_0x2B5F4FBAF644BEC8(Local_68.f_162[iVar0]))
					{
						unk_0x1C2ED929474DC6FE(Local_68.f_162[iVar0], 1, 0);
						unk_0x959E1626CBC7D38A(Local_68.f_162[iVar0], 1, 0);
						unk_0x5C65DDDC219B3AA5(Local_68.f_162[iVar0], 0);
						unk_0xA539EDE8DA5BBC22(Local_68.f_162[iVar0], Local_68.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				iVar0++;
			}
		}
		else
		{
			if (BitTest(Local_68.f_162.f_18, 0))
			{
				unk_0xB0550BC91B0159D6(&(Local_68.f_162.f_18), false);
			}
			iVar0 = 0;
			while (iVar0 < Local_68.f_162)
			{
				if ((unk_0xE5965CDF24F93A9F(Local_68.f_162[iVar0]) && !unk_0xF68107C40359970C(Local_68.f_162[iVar0])) && !unk_0xD5C6B5E3B93A5EDC(Local_68.f_162[iVar0], 0))
				{
					if (!unk_0x2B5F4FBAF644BEC8(Local_68.f_162[iVar0]))
					{
						unk_0x1C2ED929474DC6FE(Local_68.f_162[iVar0], 1, 0);
						unk_0x959E1626CBC7D38A(Local_68.f_162[iVar0], 1, 0);
						unk_0x5C65DDDC219B3AA5(Local_68.f_162[iVar0], 0);
						unk_0xA539EDE8DA5BBC22(Local_68.f_162[iVar0], Local_68.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
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
				unk_0x3C2A46BB06553CEE(unk_0x9E2D6C50374FCFA9());
				unk_0x8FB472886552D737("oddjobs@shop_robbery@rob_till");
				unk_0x8FB472886552D737("misscommon@response");
				unk_0xA9911C122B3210B5(func_64(iLocal_568), 0);
				unk_0xD69A0C3662175E68(joaat("prop_choc_ego"));
				unk_0xD69A0C3662175E68(joaat("prop_choc_meto"));
				unk_0xD69A0C3662175E68(joaat("prop_choc_pq"));
				if (!bLocal_574)
				{
					unk_0xD69A0C3662175E68(Local_68.f_46.f_26);
					unk_0xD69A0C3662175E68(Local_68.f_46.f_27);
				}
				iLocal_622 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x70F555A7CCF10659("SCRIPT\MARKET_CASH_REGISTER", 0, -1))
			{
				return;
			}
			if (!unk_0x6F940C2636C076AD("oddjobs@shop_robbery@rob_till"))
			{
				return;
			}
			if (!unk_0x6F940C2636C076AD("misscommon@response"))
			{
				return;
			}
			if (!unk_0x0152AA00FA3130F1(joaat("prop_choc_ego")))
			{
				return;
			}
			if (!unk_0x0152AA00FA3130F1(joaat("prop_choc_meto")))
			{
				return;
			}
			if (!unk_0x0152AA00FA3130F1(joaat("prop_choc_pq")))
			{
				return;
			}
			if (!bLocal_574)
			{
				if (!unk_0x0152AA00FA3130F1(Local_68.f_46.f_26))
				{
					return;
				}
				if (!unk_0x0152AA00FA3130F1(Local_68.f_46.f_27))
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
					uLocal_618[0] = unk_0x0E536D72AB30F4C8(func_61(0), func_60(0), 1, 1, 0);
					uLocal_618[1] = unk_0x0E536D72AB30F4C8(func_61(1), func_60(1), 1, 1, 0);
					uLocal_618[2] = unk_0x0E536D72AB30F4C8(func_61(2), func_60(2), 1, 1, 0);
					unk_0x1C2ED929474DC6FE(uLocal_618[0], 0, 0);
					unk_0x1C2ED929474DC6FE(uLocal_618[1], 0, 0);
					unk_0x1C2ED929474DC6FE(uLocal_618[2], 0, 0);
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
	unk_0xAFC1FBF3F6AE7B9A("oddjobs@shop_robbery@rob_till");
	unk_0xAFC1FBF3F6AE7B9A("misscommon@response");
	unk_0xE24865B69D79521B("SCRIPT\MARKET_CASH_REGISTER");
	unk_0x861D35D42CFD2991(func_64(iLocal_568));
	unk_0xF1A23B343DFEDFD0(joaat("prop_choc_ego"));
	unk_0xF1A23B343DFEDFD0(joaat("prop_choc_meto"));
	unk_0xF1A23B343DFEDFD0(joaat("prop_choc_pq"));
	func_57(1, iLocal_568);
	if (!bLocal_574)
	{
		unk_0xF1A23B343DFEDFD0(Local_68.f_46.f_26);
		unk_0xF1A23B343DFEDFD0(Local_68.f_46.f_27);
	}
}

void func_57(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_59(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23150.f_8808)
	{
		unk_0x4FEF096D3AB4AA8C(15);
		Global_23150.f_8808 = 0;
	}
	unk_0x7ED668FC4CB0F4C4(0f);
	if (Global_23150.f_6019[iVar0])
	{
		unk_0xC511E7C272201CF7(9, 0);
		Global_23150.f_6019[iVar0] = 0;
	}
	if (Global_23150.f_6005[iVar0])
	{
		unk_0x861D35D42CFD2991("CommonMenu");
		Global_23150.f_6005[iVar0] = 0;
	}
	if (Global_23150.f_6012[iVar0])
	{
		unk_0x861D35D42CFD2991("MPShopSale");
		Global_23150.f_6012[iVar0] = 0;
	}
	if (bParam0)
	{
		func_58(&(Global_23150.f_6051[iVar0 /*10*/]));
		Global_23150.f_6112[iVar0] = 0;
	}
	else
	{
		Global_23150.f_6112[iVar0] = 0;
	}
}

void func_58(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x0347CCBD719C8ADC(*uParam0))
		{
			unk_0x705B098546DEB18A(uParam0);
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
		if (unk_0x9315DBF7D972F07A() && unk_0xDD50B5A22807BAD4())
		{
			iParam2 = unk_0x5C5CE5291FB79534();
		}
	}
	StringCopy(&cVar0, unk_0x05CBA41180F5D521(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x2E87280918B16506(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_23150.f_6112[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23150.f_6112[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23150.f_6112[iVar18] = iVar16;
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
	StringCopy(&(Global_23150.f_6026[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xACC32B78196FBC2A(&(Global_23150.f_6026[iVar0 /*4*/])))
	{
		unk_0x249A0D3C5714BCF4(&(Global_23150.f_6026[iVar0 /*4*/]), 9);
		Global_23150.f_6019[iVar0] = 1;
		if (!unk_0x5FABFB823FD821D4(&(Global_23150.f_6026[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xA9911C122B3210B5("CommonMenu", 0);
	Global_23150.f_6005[iVar0] = 1;
	if (!unk_0x9D4AFED2949F7082("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xA9911C122B3210B5("MPShopSale", 0);
		Global_23150.f_6012[iVar0] = 1;
		if (!unk_0x9D4AFED2949F7082("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23150.f_6051[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_63(&(Global_23150.f_6051[iVar0 /*10*/]));
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
			if (!unk_0x0347CCBD719C8ADC(*uParam0))
			{
				*uParam0 = unk_0x528279F3F1EEF869(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x0347CCBD719C8ADC(*uParam0))
					{
						uParam0->f_8 = unk_0x320D1840B6DAA1CC();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x320D1840B6DAA1CC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x0347CCBD719C8ADC(*uParam0))
			{
				uParam0->f_8 = unk_0x320D1840B6DAA1CC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x0347CCBD719C8ADC(*uParam0))
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
				unk_0x8FB472886552D737(Local_68.f_486.f_1);
				iLocal_623 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x6F940C2636C076AD(Local_68.f_486.f_1))
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
				unk_0xAFC1FBF3F6AE7B9A(Local_68.f_486.f_1);
				func_300(&(Local_68.f_470), 16);
				iLocal_623 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_68.f_470, 16))
			{
				unk_0xAFC1FBF3F6AE7B9A(Local_68.f_486.f_1);
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
				if ((unk_0x320D1840B6DAA1CC() % 1000) < 50)
				{
				}
				if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
				{
					unk_0xABB7D34A8925C872(unk_0x9E2D6C50374FCFA9());
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
	if (((((iLocal_60 == 1 || iLocal_60 == 2) && unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0) && !unk_0xF68107C40359970C(Local_68.f_0)) && !func_189(-1082130432)) && !unk_0xF68107C40359970C(Local_68.f_2))
	{
		iVar1 = unk_0x0CF63873D754B965(unk_0xE2D3D51028F0428A());
		iVar2 = unk_0x72649CAA101B626C(unk_0xE2D3D51028F0428A());
		if (((iLocal_66 != 2 && iLocal_66 != 3) && iLocal_66 != 4) && func_302())
		{
			if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
			{
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
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
						Var3 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
						if (unk_0x987A5F1E1A67E3C0(Var3, Local_68.f_102.f_33, 1) < 5f)
						{
							if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_68.f_102.f_26[0 /*3*/], Local_68.f_102.f_26[1 /*3*/], Local_68.f_102.f_36, 0, 1, 0))
							{
								if (unk_0xC9CD8C710046A3DD(unk_0xE2D3D51028F0428A(), Local_68.f_102.f_33, 135f))
								{
									if ((unk_0x320D1840B6DAA1CC() % 1000) < 50)
									{
									}
									if (((!func_28("SHR_HOLDUP_1") && !func_28("SHR_MENU")) && !func_50()) && func_187())
									{
										func_186("SHR_MENU");
									}
									Local_68.f_469 = -1;
									func_185(&(Local_68.f_469), 4, "SHR_MENU", 0, 0, 0, 0);
									unk_0xB0550BC91B0159D6(&(Local_68.f_162.f_18), true);
									unk_0xB0550BC91B0159D6(&(Local_68.f_162.f_18), false);
									iLocal_66 = 1;
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (!unk_0xC9CD8C710046A3DD(unk_0xE2D3D51028F0428A(), Local_68.f_102.f_33, 135f) || !func_25(Local_68.f_0) == joaat("weapon_unarmed"))
				{
					if (func_28("SHR_MENU"))
					{
						unk_0x3410421C60BF7143(1);
					}
					Local_68.f_102.f_22 = -1;
					func_184(&(Local_68.f_469));
					iLocal_66 = 0;
				}
				else if (((!func_28("SHR_MENU") && !func_28("SHR_HOLDUP_1")) && func_187()) && !func_183(Local_68.f_469, 0))
				{
					func_186("SHR_MENU");
				}
				if ((!unk_0x81BBCAF9FE3B469D(unk_0xE2D3D51028F0428A()) && !unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) && !unk_0xAB3249ACBDE2D8B9(unk_0xE2D3D51028F0428A()))
				{
					if (func_181(Local_68.f_469, 1))
					{
						if (func_28("SHR_MENU"))
						{
							unk_0x3410421C60BF7143(1);
						}
						unk_0xCED9E32812D6C7C7(&(Local_68.f_162.f_18), true);
						func_13(&(Local_68.f_102.f_53));
						func_184(&(Local_68.f_469));
						func_180(23, 1);
						if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !unk_0xF68107C40359970C(Local_68.f_2))
						{
							unk_0x529D306014D3C29A(unk_0xE2D3D51028F0428A(), Local_68.f_2, 0);
						}
						iLocal_66 = 2;
					}
				}
				break;
			
			case 2:
				if (!unk_0x876B1078E90C91CB(uLocal_641))
				{
					uLocal_641 = unk_0x1BCEC0B1056BD6AC(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				func_179(iLocal_568, Local_68.f_486.f_6, Local_68.f_486.f_9.f_2, &(Local_68.f_102), &(Local_68.f_102.f_3), &uVar8);
				unk_0xDEE4F5F0B93BE664(uLocal_641, Local_68.f_102);
				unk_0x93150D31CE38FE75(uLocal_641, Local_68.f_102.f_3, 2);
				unk_0x0A18C027350D3C19(uLocal_641, 35f);
				unk_0x9BAE3263D9B1FCB9(uLocal_641, "HAND_SHAKE", 0.1f);
				unk_0xDD786B89B15AA63F(uLocal_641, 1);
				unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
				if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
				{
					unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 0);
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
				if (unk_0x8FE9914D4872D601())
				{
					if (unk_0xE360D4C4CE76E4BB(2))
					{
						unk_0x7653D561C9574763(0, 1, 1);
						unk_0x7653D561C9574763(0, 2, 1);
						unk_0x5089DD830FA61D71(0, 237, 1);
						unk_0x5089DD830FA61D71(0, 238, 1);
						unk_0x5089DD830FA61D71(0, 241, 1);
						unk_0x5089DD830FA61D71(0, 242, 1);
						func_157(0, 0, 0, 1);
						func_156(0, -1, 1);
						if (func_155())
						{
							if (Global_4539961 != Local_68.f_102.f_23)
							{
								unk_0x91DFC8F68F6D9B05(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								Local_68.f_102.f_23 = Global_4539961;
								func_162(Local_68.f_102.f_23, 1, 1);
								Local_68.f_102.f_37 = 0;
								Local_68.f_102.f_41 = 0;
								Local_68.f_102.f_42 = 0;
								sVar7 = func_154(Local_68.f_102.f_23);
								if (unk_0xE73671E3D37CF79E(sVar7))
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
				if (unk_0xF01464D7AF0B7347(2, 201) || iVar6 == 1)
				{
					Local_68.f_102.f_37 = 1;
					Local_68.f_102.f_41 = 0;
					Local_68.f_102.f_42 = 0;
					if (Local_68.f_102.f_40 && Local_68.f_102.f_43)
					{
						Local_68.f_102.f_44 = 1;
						unk_0x91DFC8F68F6D9B05(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						iLocal_631 = 1;
						iLocal_634 = Local_68.f_102.f_23;
						iLocal_66 = 4;
					}
					else
					{
						Local_68.f_102.f_44 = 0;
						unk_0x91DFC8F68F6D9B05(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
				}
				if (unk_0xF01464D7AF0B7347(2, 203))
				{
					iLocal_66 = 6;
					unk_0x91DFC8F68F6D9B05(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					func_109();
				}
				if (unk_0xF01464D7AF0B7347(2, 202) || unk_0x26009F50A14AD073(2, 238))
				{
					iLocal_66 = 7;
					Local_68.f_102.f_45 = unk_0x320D1840B6DAA1CC();
					unk_0x91DFC8F68F6D9B05(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
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
							unk_0xF160248D9083ED0C(unk_0xE2D3D51028F0428A(), iVar2, 0);
						}
						else
						{
							unk_0xF160248D9083ED0C(unk_0xE2D3D51028F0428A(), iVar1 + 10, 0);
						}
						break;
					
					case 1:
						iVar0 = func_167(Local_68.f_102.f_23);
						if (iVar1 + 20 > iVar2)
						{
							unk_0xF160248D9083ED0C(unk_0xE2D3D51028F0428A(), iVar2, 0);
						}
						else
						{
							unk_0xF160248D9083ED0C(unk_0xE2D3D51028F0428A(), iVar1 + 20, 0);
						}
						break;
					
					case 2:
						iVar0 = func_167(Local_68.f_102.f_23);
						if (iVar1 + 15 > iVar2)
						{
							unk_0xF160248D9083ED0C(unk_0xE2D3D51028F0428A(), iVar2, 0);
						}
						else
						{
							unk_0xF160248D9083ED0C(unk_0xE2D3D51028F0428A(), iVar1 + 15, 0);
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
				if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
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
							unk_0xF160248D9083ED0C(unk_0xE2D3D51028F0428A(), iVar2, 0);
						}
						else
						{
							unk_0xF160248D9083ED0C(unk_0xE2D3D51028F0428A(), iVar1 + 10, 0);
						}
						break;
					
					case 1:
						if (iVar1 + 20 > iVar2)
						{
							unk_0xF160248D9083ED0C(unk_0xE2D3D51028F0428A(), iVar2, 0);
						}
						else
						{
							unk_0xF160248D9083ED0C(unk_0xE2D3D51028F0428A(), iVar1 + 20, 0);
						}
						break;
					
					case 2:
						if (iVar1 + 15 > iVar2)
						{
							unk_0xF160248D9083ED0C(unk_0xE2D3D51028F0428A(), iVar2, 0);
						}
						else
						{
							unk_0xF160248D9083ED0C(unk_0xE2D3D51028F0428A(), iVar1 + 15, 0);
						}
						break;
				}
				unk_0x64E21045781AFBC9(unk_0xB6BA8B8E3D0B41C6(), 1, 0);
				func_180(23, 0);
				iLocal_53 = 35;
				if (!unk_0xF68107C40359970C(Local_68.f_2) && func_1(Local_68.f_470, 4))
				{
					unk_0x49D97B076E3590AC(Local_68.f_2, "misscommon@response", "give_me_a_break", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
				if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) < 1)
				{
					func_16(1, 0);
				}
				iLocal_66 = 8;
				break;
			
			case 7:
				if ((unk_0x320D1840B6DAA1CC() - Local_68.f_102.f_45) > 1000)
				{
					iLocal_66 = 0;
				}
				else
				{
					unk_0x07899AAA5D680386(2, 193);
					unk_0x07899AAA5D680386(2, 202);
					unk_0x07899AAA5D680386(2, 188);
					unk_0x07899AAA5D680386(2, 187);
					unk_0x07899AAA5D680386(2, 189);
					unk_0x07899AAA5D680386(2, 190);
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
			unk_0x3410421C60BF7143(1);
			func_184(&(Local_68.f_469));
		}
		if (func_28("SHR_MENU"))
		{
			unk_0x3410421C60BF7143(1);
			func_184(&(Local_68.f_469));
		}
		if (BitTest(Local_68.f_162.f_18, 1) && iLocal_624 < 2)
		{
			unk_0xB0550BC91B0159D6(&(Local_68.f_162.f_18), true);
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
		if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
			}
			unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
			func_300(&(Local_68.f_470), 2048);
		}
	}
	Local_68.f_102.f_37 = 0;
	unk_0xB0550BC91B0159D6(&(Local_68.f_162.f_18), true);
	if (unk_0x876B1078E90C91CB(uLocal_641))
	{
		unk_0x588DDCB644C6486A(uLocal_641, 0);
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
					switch (unk_0x1307D54181723A6E())
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
	iVar5 = (Global_60328[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60328[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60328[iVar2] = 2147483647;
				}
				else
				{
					Global_60328[iVar2] = (Global_60328[iVar2] + iParam3);
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
				if ((Global_60328[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60328[iVar2];
			Global_60328[iVar2] = (Global_60328[iVar2] - iParam3);
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
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113386.f_20564.f_233[iVar2 /*69*/]++;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_1++;
		if (Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_72(iParam0);
	if (Global_43052 == 15)
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
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60336[iVar0 /*3*/][0] = Global_113386.f_20564[iVar0];
		Global_60336.f_31[iVar0 /*3*/][0] = Global_113386.f_20564.f_11[iVar0];
		Global_60336.f_62[iVar0 /*3*/][0] = Global_113386.f_20564.f_22[iVar0];
		Global_60336.f_93[iVar0 /*3*/][0] = Global_113386.f_20564.f_33[iVar0];
		Global_60336.f_124[iVar0 /*3*/][0] = Global_113386.f_20564.f_44[iVar0];
		Global_60336.f_155[iVar0 /*3*/][0] = Global_113386.f_20564.f_55[iVar0];
		Global_60336.f_186[iVar0 /*3*/][0] = Global_113386.f_20564.f_66[iVar0];
		Global_60336.f_217[iVar0 /*3*/][0] = Global_113386.f_20564.f_77[iVar0];
		Global_60336.f_248[iVar0 /*3*/][0] = Global_113386.f_20564.f_88[iVar0];
		if (!bParam0)
		{
			Global_60336[iVar0 /*3*/][1] = Global_113386.f_20564[iVar0];
			Global_60336.f_31[iVar0 /*3*/][1] = Global_113386.f_20564.f_11[iVar0];
			Global_60336.f_62[iVar0 /*3*/][1] = Global_113386.f_20564.f_22[iVar0];
			Global_60336.f_93[iVar0 /*3*/][1] = Global_113386.f_20564.f_33[iVar0];
			Global_60336.f_124[iVar0 /*3*/][1] = Global_113386.f_20564.f_44[iVar0];
			Global_60336.f_155[iVar0 /*3*/][1] = Global_113386.f_20564.f_55[iVar0];
			Global_60336.f_186[iVar0 /*3*/][1] = Global_113386.f_20564.f_66[iVar0];
			Global_60336.f_217[iVar0 /*3*/][1] = Global_113386.f_20564.f_77[iVar0];
			Global_60336.f_248[iVar0 /*3*/][1] = Global_113386.f_20564.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_72(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_60328[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x076A5661EF5ABEE4(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x076A5661EF5ABEE4(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x076A5661EF5ABEE4(joaat("sp2_total_cash"), iVar0, 1);
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
	if (!unk_0x9315DBF7D972F07A())
	{
		if (BitTest(Global_113386.f_20564.f_471, bParam0))
		{
			bVar0 = true;
			unk_0xB0550BC91B0159D6(&(Global_113386.f_20564.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_75() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0xB0550BC91B0159D6(&(Global_113386.f_20564.f_471), bParam0);
		unk_0xB0550BC91B0159D6(&(Global_2359296[func_75() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x150D8F58B26E9F70("COUP_RED");
		unk_0x26C23BE14F66F202(func_74(bParam0));
		unk_0x3B81B9627E7885CF(&cVar1, &cVar1, 1, 0, "", 0);
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
	iVar0 = Global_2826809[iParam0 /*3*/][func_77(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
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
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
		}
	}
	return iVar0;
}

int func_78()
{
	return Global_1574918;
}

void func_79(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_78();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, iParam2);
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
		iVar0 = unk_0x48352343BC5A41AE();
		iVar1 = func_82(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x48352343BC5A41AE();
		iVar3 = func_82(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x48352343BC5A41AE();
		iVar5 = func_82(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x48352343BC5A41AE();
		iVar7 = func_82(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x48352343BC5A41AE();
		iVar9 = func_82(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x48352343BC5A41AE();
		iVar11 = func_82(8277, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x9315DBF7D972F07A())
	{
		return BitTest(Global_113386.f_20564.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_75() /*5567*/].f_681.f_10, iParam0);
}

int func_82(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_77(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_83(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_78();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, iParam1);
}

int func_84(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xDA4421F81DF4B90D(27))
	{
		return 0;
	}
	if (unk_0x61481F9FBB1C7EDD(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x61481F9FBB1C7EDD(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x61481F9FBB1C7EDD(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x61481F9FBB1C7EDD(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x076A5661EF5ABEE4(joaat("num_cash_spent"), iVar1, 1);
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
	if (unk_0xDA4421F81DF4B90D(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32209 != 0 && !Global_78319)
	{
		return 0;
	}
	if (func_96(&Global_4541529))
	{
		if (func_94(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_87(&Global_4541529, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xB8D77780DF8E1242(iParam0))
		{
			return 0;
		}
		if (unk_0xDA4421F81DF4B90D(iParam0))
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
	
	if (unk_0xDA4421F81DF4B90D(iParam1))
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
	
	if (unk_0xDA4421F81DF4B90D(iParam1))
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
	func_92(uParam0, (Global_4541528 - 0.5f));
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
	iVar0 = unk_0xE70CD2CDEE98DF14(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xEE587CFF91CF5EDA(iParam0, iParam1);
	}
	return 0;
}

void func_99(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x61481F9FBB1C7EDD(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x076A5661EF5ABEE4(iParam0, iVar0, 1);
}

void func_100(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/])
	{
		unk_0x61481F9FBB1C7EDD(Global_58896[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x076A5661EF5ABEE4(Global_58896[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_101()
{
	int iVar0;
	
	if (unk_0xAF5DBE95205A49D1())
	{
		unk_0x61481F9FBB1C7EDD(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_60328[0] == iVar0)
		{
			Global_60328[0] = iVar0;
		}
		unk_0x61481F9FBB1C7EDD(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_60328[1] == iVar0)
		{
			Global_60328[1] = iVar0;
		}
		unk_0x61481F9FBB1C7EDD(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_60328[2] == iVar0)
		{
			Global_60328[2] = iVar0;
		}
	}
}

int func_102(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_17;
}

int func_103()
{
	func_104();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_104()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_107(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_106(unk_0xE2D3D51028F0428A());
			if (func_105(iVar0) && (!func_316(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_105(Global_113386.f_2363.f_539.f_4321))
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

bool func_105(int iParam0)
{
	return iParam0 < 3;
}

int func_106(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
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
	return Global_1998[iParam0 /*29*/];
}

void func_109()
{
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
	}
	func_300(&(Local_68.f_470), 2048);
	unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
	unk_0x94953C3FF0664F66(0);
	unk_0x080C97B891E2F3AA(0, 1065353216);
	func_180(23, 0);
	Local_68.f_102.f_37 = 0;
	unk_0xB0550BC91B0159D6(&(Local_68.f_162.f_18), true);
	if (unk_0x876B1078E90C91CB(uLocal_641))
	{
		unk_0x588DDCB644C6486A(uLocal_641, 0);
	}
	unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
}

void func_110()
{
	char* sVar0;
	
	unk_0x07899AAA5D680386(2, 193);
	unk_0x07899AAA5D680386(2, 202);
	unk_0x07899AAA5D680386(2, 188);
	unk_0x07899AAA5D680386(2, 187);
	unk_0x07899AAA5D680386(2, 189);
	unk_0x07899AAA5D680386(2, 190);
	if (func_113())
	{
		Local_68.f_102.f_37 = 0;
		func_40(&(Local_68.f_102.f_53));
		Local_68.f_102.f_23 = (Local_68.f_102.f_23 - 1);
		if (Local_68.f_102.f_23 < 0)
		{
			Local_68.f_102.f_23 = (Local_68.f_102.f_24 - 1);
		}
		unk_0x91DFC8F68F6D9B05(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_162(Local_68.f_102.f_23, 1, 1);
		sVar0 = func_154(Local_68.f_102.f_23);
		Local_68.f_102.f_41 = 0;
		Local_68.f_102.f_42 = 0;
		if (unk_0xE73671E3D37CF79E(sVar0))
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
		unk_0x91DFC8F68F6D9B05(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_162(Local_68.f_102.f_23, 1, 1);
		sVar0 = func_154(Local_68.f_102.f_23);
		Local_68.f_102.f_41 = 0;
		Local_68.f_102.f_42 = 0;
		if (unk_0xE73671E3D37CF79E(sVar0))
		{
			func_161(sVar0, 0, 0);
		}
	}
	if (!Local_68.f_102.f_41)
	{
		Local_68.f_102.f_40 = func_111(func_106(unk_0xE2D3D51028F0428A())) >= func_167(Local_68.f_102.f_23);
		Local_68.f_102.f_41 = 1;
	}
	if (!Local_68.f_102.f_42)
	{
		Local_68.f_102.f_43 = unk_0x0CF63873D754B965(unk_0xE2D3D51028F0428A()) < unk_0x72649CAA101B626C(unk_0xE2D3D51028F0428A());
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
			if (unk_0xE73671E3D37CF79E(sVar0))
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
			unk_0x61481F9FBB1C7EDD(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x61481F9FBB1C7EDD(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x61481F9FBB1C7EDD(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_112()
{
	float fVar0;
	
	fVar0 = unk_0x664C0A1BF5E133FA(2, 219);
	if ((fVar0 > 0.8f || unk_0x4C1B8C5717647539(2, 187)) || unk_0xF09A4F413B0D30EB(2, 242))
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
	
	fVar0 = unk_0x664C0A1BF5E133FA(2, 219);
	if ((fVar0 < -0.8f || unk_0x4C1B8C5717647539(2, 188)) || unk_0xF09A4F413B0D30EB(2, 241))
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
	unk_0xA5AAB00FA8C570A4(76, 84);
	unk_0x98F560BC13E5293F(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	if (Global_23150)
	{
		if (func_149(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = (fVar37 / fVar36);
		}
		else
		{
			Global_23150 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23149;
	}
	fVar57 = (fParam5 * fVar58);
	if (unk_0x2E87280918B16506(&(Global_23150.f_1)) == unk_0x2E87280918B16506("HIDE"))
	{
		fVar59 = Global_23148;
	}
	else
	{
		fVar59 = (((Global_23148 + fVar57) + 0.034722f) + 0f);
	}
	fVar62 = 1f;
	func_147(bParam7, &uVar60, &uVar61, &fVar62);
	if (bParam3)
	{
		if (Global_23150.f_5609 <= 1)
		{
			func_168(Global_23150.f_5609 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_23150.f_6405 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23150.f_6119)
		{
			if (unk_0x2E87280918B16506(&(Global_23150.f_1)) == unk_0x2E87280918B16506("HIDE"))
			{
				fVar51 = Global_23148;
			}
			else
			{
				if (Global_23150)
				{
					StringCopy(&cVar63, func_146(29), 64);
					StringCopy(&cVar79, func_143(29, 1), 64);
					if (unk_0x2E87280918B16506(&(Global_23150.f_7420[29 /*16*/])) == joaat("crew_logo"))
					{
						func_142(Global_23147, Global_23148, fParam5, fVar57, 0, 0, 0, 255);
						unk_0xEBF08DA37D86CD05(&cVar63, &cVar79, (Global_23147 + (fParam5 * 0.5f)), (Global_23148 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, 0, 0);
					}
					else
					{
						unk_0xEBF08DA37D86CD05(&cVar63, &cVar79, (Global_23147 + (fParam5 * 0.5f)), (Global_23148 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, 0, 0);
					}
				}
				if (Global_23150.f_8778)
				{
					iVar1 = Global_23150.f_8774;
					iVar2 = Global_23150.f_8775;
					iVar3 = Global_23150.f_8776;
					iVar4 = Global_23150.f_8777;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_142(Global_23147, (Global_23148 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_23148 + fVar57) + 0.034722f) + 0f);
				if (unk_0x2E87280918B16506(&(Global_23150.f_1)) != 0)
				{
					func_141();
					unk_0xCDDA0C58B818F6B2(&(Global_23150.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23150.f_74)
					{
						if (Global_23150.f_5[iVar14] == 2)
						{
							unk_0x2AE954BA77A66307(Global_23150.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23150.f_5[iVar14] == 3)
						{
							unk_0x957E514A6E999374(Global_23150.f_14[iVar16], Global_23150.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23150.f_5[iVar14] == 1)
						{
							unk_0x26C23BE14F66F202(&(Global_23150.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23150.f_5[iVar14] == 8)
						{
							unk_0x26C23BE14F66F202(&(Global_23150.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23150.f_5[iVar14] == 5)
						{
							unk_0x76DB21247AE4E4E2(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 6)
						{
							unk_0x26C23BE14F66F202(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 7)
						{
							unk_0x76DB21247AE4E4E2(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 9)
						{
							unk_0x76DB21247AE4E4E2(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x1A53079994915FA6((Global_23147 + 0.00390625f), ((Global_23148 + fVar57) + 0.00416664f), 0);
				}
				if (Global_23150.f_6126)
				{
					func_141();
					func_139((((Global_23147 + fParam5) - 0.00390625f) - func_140("CM_ITEM_COUNT", Global_23150.f_6127, Global_23150.f_6128)), ((Global_23148 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_23150.f_6127, Global_23150.f_6128);
				}
				else if (Global_23150.f_6122 > Global_23150.f_5616)
				{
					if (Global_23150.f_6125 != 0)
					{
						func_141();
						func_139((((Global_23147 + fParam5) - 0.00390625f) - func_140("CM_ITEM_COUNT", Global_23150.f_6125, Global_23150.f_6124)), ((Global_23148 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_23150.f_6125, Global_23150.f_6124);
					}
				}
			}
			iVar6 = Global_23150.f_6129;
			iVar9 = 0;
			fVar95 = fVar51;
			if (Global_23150.f_8788)
			{
				iVar1 = Global_23150.f_8784;
				iVar2 = Global_23150.f_8785;
				iVar3 = Global_23150.f_8786;
				iVar4 = Global_23150.f_8787;
			}
			else
			{
				unk_0x2F046C9381D8E91B(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23150.f_5616 && iVar6 <= Global_23150.f_5609)
			{
				if (iVar6 >= 0)
				{
					if (Global_23150.f_5876[iVar6])
					{
						if (Global_23150.f_5747[iVar6] && iVar6 != Global_23150.f_6129)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_23150.f_6136[iVar6] != 0f)
						{
							fVar56 = Global_23150.f_6136[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0xEBF08DA37D86CD05("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar95 + ((fVar51 - fVar95) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar95), 0f, 255, 255, 255, 255, 0, 0);
			if (Global_23150.f_6122 > Global_23150.f_5616)
			{
				if (Global_23150.f_8793)
				{
					iVar1 = Global_23150.f_8789;
					iVar2 = Global_23150.f_8790;
					iVar3 = Global_23150.f_8791;
					iVar4 = Global_23150.f_8792;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_142(Global_23147, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0x7DF13542ADA68880("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_23150.f_8806)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x2F046C9381D8E91B(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEBF08DA37D86CD05("CommonMenu", "shop_arrows_upANDdown", (Global_23147 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (unk_0x2E87280918B16506(&(Global_23150.f_5081)) != 0 && Global_23150.f_5157 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23147 + 0.0046875f);
				if (Global_23150.f_5159 != 0)
				{
					func_149(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_138(fVar42);
				unk_0xB733C0853476F0C1(&(Global_23150.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23150.f_5153)
				{
					if (Global_23150.f_5087[iVar14] == 2)
					{
						unk_0x2AE954BA77A66307(Global_23150.f_5092[iVar15]);
						iVar15++;
					}
					else if (Global_23150.f_5087[iVar14] == 3)
					{
						unk_0x957E514A6E999374(Global_23150.f_5096[iVar16], Global_23150.f_5100[iVar16]);
						iVar16++;
					}
					else if (Global_23150.f_5087[iVar14] == 1)
					{
						unk_0x26C23BE14F66F202(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 5)
					{
						unk_0x76DB21247AE4E4E2(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 6)
					{
						unk_0x26C23BE14F66F202(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 7)
					{
						unk_0x76DB21247AE4E4E2(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 9)
					{
						unk_0x76DB21247AE4E4E2(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xBD7DCBC4F2DF91F8(fVar42, (fVar51 + 0.00277776f));
				unk_0x2F046C9381D8E91B(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_142(Global_23147, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23150.f_8798)
				{
					iVar1 = Global_23150.f_8794;
					iVar2 = Global_23150.f_8795;
					iVar3 = Global_23150.f_8796;
					iVar4 = Global_23150.f_8797;
				}
				else
				{
					unk_0x2F046C9381D8E91B(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEBF08DA37D86CD05("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_138(fVar42);
				unk_0xCDDA0C58B818F6B2(&(Global_23150.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23150.f_5153)
				{
					if (Global_23150.f_5087[iVar14] == 2)
					{
						unk_0x2AE954BA77A66307(Global_23150.f_5092[iVar15]);
						iVar15++;
					}
					else if (Global_23150.f_5087[iVar14] == 3)
					{
						unk_0x957E514A6E999374(Global_23150.f_5096[iVar16], Global_23150.f_5100[iVar16]);
						iVar16++;
					}
					else if (Global_23150.f_5087[iVar14] == 1)
					{
						unk_0x26C23BE14F66F202(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 5)
					{
						unk_0x76DB21247AE4E4E2(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 6)
					{
						unk_0x26C23BE14F66F202(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 7)
					{
						unk_0x76DB21247AE4E4E2(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 9)
					{
						unk_0x76DB21247AE4E4E2(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 8)
					{
						unk_0x26C23BE14F66F202(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x1A53079994915FA6(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_23150.f_5159 != 0)
				{
					func_149(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					func_137(Global_23150.f_5159, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0xEBF08DA37D86CD05(func_146(Global_23150.f_5159), func_143(Global_23150.f_5159, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
				}
				fVar51 = (fVar51 + (((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_23150.f_5157 > 0)
				{
					if ((unk_0x320D1840B6DAA1CC() - Global_23150.f_5158) > Global_23150.f_5157)
					{
						StringCopy(&(Global_23150.f_5081), "", 24);
						Global_23150.f_5157 = -1;
					}
				}
			}
			if (unk_0x2E87280918B16506(&(Global_4539885.f_21)) != 0 && Global_4539885.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23147 + 0.0046875f);
				if (Global_4539885.f_67 != 0)
				{
					func_149(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_138(fVar42);
				unk_0xB733C0853476F0C1(&(Global_4539885.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4539885.f_61)
				{
					if (Global_4539885.f_25[iVar14] == 2)
					{
						unk_0x2AE954BA77A66307(Global_4539885.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4539885.f_25[iVar14] == 3)
					{
						unk_0x957E514A6E999374(Global_4539885.f_34[iVar16], Global_4539885.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4539885.f_25[iVar14] == 1)
					{
						unk_0x26C23BE14F66F202(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 5)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 6)
					{
						unk_0x26C23BE14F66F202(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 7)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 9)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 8)
					{
						unk_0x26C23BE14F66F202(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xBD7DCBC4F2DF91F8(fVar42, (fVar51 + 0.00277776f));
				unk_0x2F046C9381D8E91B(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_142(Global_23147, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23150.f_8798)
				{
					iVar1 = Global_23150.f_8794;
					iVar2 = Global_23150.f_8795;
					iVar3 = Global_23150.f_8796;
					iVar4 = Global_23150.f_8797;
				}
				else
				{
					unk_0x2F046C9381D8E91B(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEBF08DA37D86CD05("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_138(fVar42);
				unk_0xCDDA0C58B818F6B2(&(Global_4539885.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4539885.f_61)
				{
					if (Global_4539885.f_25[iVar14] == 2)
					{
						unk_0x2AE954BA77A66307(Global_4539885.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4539885.f_25[iVar14] == 3)
					{
						unk_0x957E514A6E999374(Global_4539885.f_34[iVar16], Global_4539885.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4539885.f_25[iVar14] == 1)
					{
						unk_0x26C23BE14F66F202(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 8)
					{
						unk_0x26C23BE14F66F202(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 5)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 6)
					{
						unk_0x26C23BE14F66F202(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 7)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 9)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x1A53079994915FA6(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4539885.f_67 != 0)
				{
					func_149(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_137(Global_4539885.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0xEBF08DA37D86CD05(func_146(Global_4539885.f_67), func_143(Global_4539885.f_67, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
				}
				fVar51 = (fVar51 + (((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4539885.f_65 > 0)
				{
					if ((unk_0x320D1840B6DAA1CC() - Global_4539885.f_66) > Global_4539885.f_65)
					{
						StringCopy(&(Global_4539885.f_21), "", 16);
						Global_4539885.f_65 = -1;
					}
				}
			}
			func_130(uVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0xA5AAB00FA8C570A4(76, 84);
			unk_0x98F560BC13E5293F(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23150.f_6119)
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
			iVar96 = Global_23150.f_5609;
			if (Global_23150.f_6120)
			{
				iVar96 = (Global_23150.f_6123 - 1);
			}
			fVar97 = 0f;
			fVar98 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar96)
			{
				fVar56 = 0.034722f;
				if (Global_23150.f_6136[iVar6] != 0f)
				{
					fVar56 = Global_23150.f_6136[iVar6];
				}
				if (Global_23150.f_6120)
				{
					iVar6 = Global_23150.f_8429[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23150.f_6129 && iVar9 < Global_23150.f_5616)
				{
					bVar33 = true;
					if (Global_23150.f_6130 == iVar6)
					{
						fVar98 = fVar97;
					}
					if (Global_23150.f_5747[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23150.f_6270[iVar6] = fVar35;
				fVar34 = (Global_23147 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_23150.f_6130 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_23150.f_8800)
					{
						unk_0x2F046C9381D8E91B(Global_23150.f_8799, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else
					{
						unk_0x2F046C9381D8E91B(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					unk_0xEBF08DA37D86CD05("CommonMenu", "Gradient_Nav", (Global_23147 + (fParam5 * 0.5f)), (((fVar59 + fVar98) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar100, iVar101, iVar102, iVar103, 0, 0);
					Global_23150.f_6268 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23150.f_5617)
				{
					if (BitTest(Global_23150.f_5480[iVar6], iVar8) || Global_23150.f_5447[iVar8] == 5)
					{
						if (Global_23150.f_6120)
						{
							iVar19 = Global_23150.f_8445[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar20 = Global_23150.f_8486[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar21 = Global_23150.f_8527[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar22 = Global_23150.f_8568[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar23 = Global_23150.f_8609[((iVar9 * Global_23150.f_5617) + iVar8)];
						}
						else
						{
							Global_23150.f_8445[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar19;
							Global_23150.f_8486[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar20;
							Global_23150.f_8527[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar21;
							Global_23150.f_8568[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar22;
							Global_23150.f_8609[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar23;
						}
						iVar104 = 0;
						bVar55 = false;
						if (Global_23150.f_6402[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23150.f_6399[0])
							{
								bVar55 = true;
								iVar104 = 0;
							}
						}
						if (Global_23150.f_6402[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23150.f_6399[1])
							{
								bVar55 = true;
								iVar104 = 1;
							}
						}
						if (Global_23150.f_5453[iVar8] != -1f)
						{
							fVar34 = ((Global_23147 + 0.0046875f) + Global_23150.f_5453[iVar8]);
						}
						if ((iVar8 < 4 && Global_23150.f_5453[iVar8 + 1] != -1f) && fVar34 < Global_23150.f_5453[iVar8 + 1])
						{
							fVar46 = (Global_23150.f_5453[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_23147 + Global_23149) - 0.0046875f) - fVar34);
						}
						if ((Global_23150.f_5466[iVar8] && Global_23150.f_6265) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_23150.f_5447[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											if (Global_23150.f_2130[iVar24])
											{
												bVar53 = true;
											}
											func_128(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar55, iVar104, bVar53, bVar52);
											unk_0x27ED46EA48C0A455(&(Global_23150.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x26C23BE14F66F202(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x26C23BE14F66F202(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x76DB21247AE4E4E2(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x26C23BE14F66F202(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x76DB21247AE4E4E2(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x76DB21247AE4E4E2(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x2AE954BA77A66307(Global_23150.f_4309[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x957E514A6E999374(Global_23150.f_4566[(iVar21 + iVar27)], Global_23150.f_4695[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
										{
											fVar43 = unk_0x63F498818B4DEE3E(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_149(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_23150.f_4824[(iVar22 + iVar14)] == 2 || Global_23150.f_4824[(iVar22 + iVar14)] == 51) || Global_23150.f_4824[(iVar22 + iVar14)] == 61)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar43;
										Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar44;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											iVar99 = (iVar8 - 1);
											while (iVar99 >= 0)
											{
												if (Global_23150.f_5474[iVar99] == 2)
												{
													Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar99)] = (Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar99)] - Global_23150.f_5459[iVar8]);
												}
												iVar99 = (iVar99 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar43 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar44 = Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar54)
									{
										if (func_149(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_149(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_137(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_146(26), func_143(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
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
													unk_0xEBF08DA37D86CD05(func_146(27), func_143(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
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
									if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										if (Global_23150.f_2130[iVar24])
										{
											bVar53 = true;
										}
										func_128(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_127(bVar32);
										}
										unk_0xCDDA0C58B818F6B2(&(Global_23150.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x26C23BE14F66F202(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x26C23BE14F66F202(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76DB21247AE4E4E2(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x26C23BE14F66F202(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76DB21247AE4E4E2(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76DB21247AE4E4E2(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x2AE954BA77A66307(Global_23150.f_4309[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x957E514A6E999374(Global_23150.f_4566[(iVar21 + iVar27)], Global_23150.f_4695[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23150.f_4824[(iVar22 + iVar28)] == 2 || Global_23150.f_4824[(iVar22 + iVar28)] == 51) || Global_23150.f_4824[(iVar22 + iVar28)] == 61)
											{
												if (func_149(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_149(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_137(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_23150.f_5474[iVar8] == 2)
															{
																unk_0xEBF08DA37D86CD05(func_146(Global_23150.f_4824[(iVar22 + iVar28)]), func_143(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else
															{
																unk_0xEBF08DA37D86CD05(func_146(Global_23150.f_4824[(iVar22 + iVar28)]), func_143(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
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
									if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23150.f_5474[iVar8] == 2)
										{
											unk_0x1A53079994915FA6(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0x1A53079994915FA6((fVar34 + fVar42), fVar35, 0);
											if (func_126() && unk_0xB4C854DD86E40FDA(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23150.f_2130[iVar24])
													{
														bVar53 = true;
													}
													func_128(0, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar105, "TEST_LABEL", 16);
													fVar109 = 0f;
													fVar110 = 55f;
													fVar111 = 0.0185f;
													fVar112 = 0.004f;
													fVar113 = 0.02f;
													unk_0x3F03C2D4EFA888BC(0f, (0.35f * 0.7f));
													unk_0x71F4002CB1A0B451(255, 255, 255, 150);
													unk_0xCA4C0AD3CAFF651E((fVar34 - (fVar113 * 0.6f)), (fVar35 + (fVar111 * 0.75f)), 0.0175f, 0.035f, unk_0xF34EE736CF047844(fVar109), unk_0xF34EE736CF047844(fVar109), unk_0xF34EE736CF047844(fVar109), unk_0xF34EE736CF047844(fVar110), 0);
													unk_0xCDDA0C58B818F6B2(&cVar105);
													unk_0x2AE954BA77A66307((Global_23150.f_6129 + iVar30));
													unk_0x1A53079994915FA6((fVar34 - fVar113), (fVar35 + fVar112), 0);
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
											if ((Global_23150.f_4824[(iVar22 + iVar14)] != 2 && Global_23150.f_4824[(iVar22 + iVar14)] != 51) && Global_23150.f_4824[(iVar22 + iVar14)] != 61)
											{
												if (func_149(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_149(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_137(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_23150.f_4824[(iVar22 + iVar14)] == 30)
															{
																unk_0xEBF08DA37D86CD05(func_146(Global_23150.f_4824[(iVar22 + iVar14)]), func_143(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (Global_23147 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else if (Global_23150.f_5474[iVar8] == 2)
															{
																unk_0xEBF08DA37D86CD05(func_146(Global_23150.f_4824[(iVar22 + iVar14)]), func_143(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else
															{
																unk_0xEBF08DA37D86CD05(func_146(Global_23150.f_4824[(iVar22 + iVar14)]), func_143(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
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
									if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										func_128(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_127(bVar32);
										}
										unk_0x27ED46EA48C0A455("NUMBER");
										unk_0x2AE954BA77A66307(Global_23150.f_4309[iVar20]);
										fVar43 = unk_0x63F498818B4DEE3E(1);
										fVar42 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar43 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar54)
									{
										if (func_149(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_149(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_137(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_146(26), func_143(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
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
													unk_0xEBF08DA37D86CD05(func_146(27), func_143(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_128(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar55, 0, 0, 0);
										func_125((fVar34 + fVar42), fVar35, "NUMBER", Global_23150.f_4309[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										func_128(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_127(bVar32);
										}
										unk_0x27ED46EA48C0A455("NUMBER");
										unk_0x957E514A6E999374(Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
										fVar43 = unk_0x63F498818B4DEE3E(1);
										fVar42 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar43 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar54)
									{
										if (func_149(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_149(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_137(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_146(26), func_143(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
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
													unk_0xEBF08DA37D86CD05(func_146(27), func_143(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									func_128(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar55, 0, 0, 0);
									func_124((fVar34 + fVar42), fVar35, "NUMBER", Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_149(Global_23150.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23150.f_6120)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_23150.f_5474[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
											Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
											fVar44 = Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)];
										}
										if (bVar54)
										{
											if (func_149(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23150.f_5474[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_149(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_137(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0xEBF08DA37D86CD05(func_146(26), func_143(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
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
														unk_0xEBF08DA37D86CD05(func_146(27), func_143(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_149(Global_23150.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_137(Global_23150.f_4824[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												unk_0xEBF08DA37D86CD05(func_146(Global_23150.f_4824[iVar22]), func_143(Global_23150.f_4824[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_123(Global_23150.f_4824[iVar22])), (fVar37 * func_123(Global_23150.f_4824[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
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
						if (Global_23150.f_5447[iVar8] == 5)
						{
							if (Global_23150.f_5459[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
							if (Global_23150.f_5466[iVar8])
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
						fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_23150.f_8429[iVar9] = iVar6;
						Global_23150.f_6131 = iVar6;
						iVar9++;
						if (Global_23150.f_5747[iVar6])
						{
							iVar13++;
						}
						if (Global_23150.f_6136[iVar6] != 0f)
						{
							fVar97 = (fVar97 + Global_23150.f_6136[iVar6]);
						}
						else
						{
							fVar97 = (fVar97 + 0.034722f);
						}
					}
					if (!Global_23150.f_6119)
					{
						Global_23150.f_5876[iVar6] = 1;
						if (Global_23150.f_5618[iVar6])
						{
							if (bVar32)
							{
								Global_23150.f_6125 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23150.f_6125 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23150.f_6119)
			{
				Global_23150.f_6121 = ((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12)));
				Global_23150.f_6124 = iVar11;
				Global_23150.f_6122 = iVar10;
				Global_23150.f_6119 = 1;
			}
		}
		if (!Global_23150.f_6120)
		{
			Global_23150.f_6123 = iVar9;
			Global_23150.f_6120 = 1;
		}
		iVar5++;
	}
	Global_23150.f_6267 = fVar51;
	Global_23150.f_6269 = unk_0x320D1840B6DAA1CC();
	unk_0x7ED668FC4CB0F4C4(Global_23150.f_6267);
	if (!Global_23150.f_8773)
	{
		func_116(0);
	}
	Global_23150.f_8773 = 0;
	if (bParam2)
	{
		unk_0xAC765EF46E85A446(10);
	}
	unk_0xAC765EF46E85A446(6);
	unk_0xAC765EF46E85A446(7);
	unk_0xAC765EF46E85A446(9);
	unk_0xAC765EF46E85A446(8);
	if (bParam0)
	{
		func_115(1);
	}
	unk_0xB5A50A903B9AB61B();
}

void func_115(int iParam0)
{
	Global_1649593.f_1163 = iParam0;
}

void func_116(int iParam0)
{
	if (func_122())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_121(0))
		{
			func_117(iParam0);
		}
		unk_0xCED9E32812D6C7C7(&Global_8137, 2);
	}
}

void func_117(int iParam0)
{
	if (func_122())
	{
		return;
	}
	if (Global_20464)
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
	if (!func_118())
	{
		Global_20266.f_1 = 3;
	}
}

int func_118()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
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

bool func_120()
{
	return BitTest(Global_1958711, 5);
}

int func_121(int iParam0)
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

bool func_122()
{
	return BitTest(Global_1958711, 19);
}

float func_123(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_124(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0xCDDA0C58B818F6B2(sParam2);
	unk_0x957E514A6E999374(uParam3, uParam4);
	unk_0x1A53079994915FA6(fParam0, fParam1, 0);
}

void func_125(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xCDDA0C58B818F6B2(sParam2);
	unk_0x2AE954BA77A66307(iParam3);
	unk_0x1A53079994915FA6(fParam0, fParam1, iParam4);
}

var func_126()
{
	return unk_0x014D8C5910A5B01B(-1762644250);
}

void func_127(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x2F046C9381D8E91B(Global_23150.f_8801[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x2F046C9381D8E91B(Global_23150.f_8801[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, 255);
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
			func_129(Global_23150.f_6402[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x2F046C9381D8E91B(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x2F046C9381D8E91B(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x2F046C9381D8E91B(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x71F4002CB1A0B451(155, 155, 155, 255);
		}
		else
		{
			unk_0x71F4002CB1A0B451(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x71F4002CB1A0B451(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x2F046C9381D8E91B(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x71F4002CB1A0B451(155, 155, 155, 255);
	}
	else
	{
		unk_0x71F4002CB1A0B451(155, 155, 155, 255);
	}
	unk_0x3F03C2D4EFA888BC(0f, 0.35f);
	unk_0xB8306DA8A5D18C52(1);
	if (bParam5)
	{
		unk_0x3F03C2D4EFA888BC(0f, 0.425f);
		unk_0xF68E5437AF17EFBC(4);
	}
	else if (bParam6)
	{
		unk_0x3F03C2D4EFA888BC(0f, 0.425f);
		unk_0xF68E5437AF17EFBC(6);
	}
	else
	{
		unk_0xF68E5437AF17EFBC(0);
	}
	unk_0xE835F806BE49C67B(0f, 1f);
	unk_0x21FC15AE6B6188C4(0);
	unk_0xE570B77D940667FF(0, 0, 0, 0, 0);
	unk_0xB133F9D28DFD4E1E(0, 0, 0, 0, 0);
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
	if (unk_0xD199EE48D2842EB1())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_133(unk_0x9E2D6C50374FCFA9(), 0))
		{
			return;
		}
	}
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x9417F1137725B4B3() == 0 || unk_0xD199EE48D2842EB1())
		{
			return;
		}
	}
	if (Global_23150.f_5160 != 0)
	{
		if (unk_0xB1C1E679BD17A4F0(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23150.f_5160)
			{
				if (Global_23150.f_5417[iVar1] != 363)
				{
					StringCopy(&(Global_23150.f_5162[iVar1 /*16*/]), unk_0x2018949B2C9FD96A(2, Global_23150.f_5417[iVar1], 1), 64);
				}
				else if (Global_23150.f_5430[iVar1] != 32)
				{
					StringCopy(&(Global_23150.f_5162[iVar1 /*16*/]), unk_0x19214818F925D149(2, Global_23150.f_5430[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_23150.f_5161 = 0;
		}
		if (!Global_23150.f_5161)
		{
			unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xCA5D23E5F0F0306F((1f - (Global_23150.f_5472 / 100f)));
			unk_0x6F06CF0E9AB02847();
			if (unk_0x8FE9914D4872D601())
			{
				unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xD7D6BA6E36AEC182(1);
				unk_0x6F06CF0E9AB02847();
			}
			iVar1 = 0;
			while (iVar1 < Global_23150.f_5160)
			{
				if (unk_0x2E87280918B16506(&(Global_23150.f_5355[iVar1 /*4*/])) != unk_0x2E87280918B16506("PREV"))
				{
					unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x4F47E317C74C543B(iVar1);
					func_132(&(Global_23150.f_5162[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x2E87280918B16506(&(Global_23150.f_5355[iVar2 /*4*/])) == unk_0x2E87280918B16506("PREV"))
					{
						func_132(&(Global_23150.f_5162[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23150.f_5404[iVar1] == -1)
					{
						func_131(&(Global_23150.f_5355[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23150.f_5404[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x4ADC8B166E139423(&(Global_23150.f_5355[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x28594D0D61DB1278(iVar3, 70);
						}
						else
						{
							unk_0x2AE954BA77A66307(iVar3);
						}
						unk_0xD1D4F8D5470AFA4C();
					}
					if (unk_0x8FE9914D4872D601())
					{
						if (Global_23150.f_5417[iVar1] != 363 && BitTest(Global_23150.f_5443, iVar1))
						{
							unk_0xD7D6BA6E36AEC182(1);
							unk_0x4F47E317C74C543B(Global_23150.f_5417[iVar1]);
						}
						else
						{
							unk_0xD7D6BA6E36AEC182(0);
							unk_0x4F47E317C74C543B(363);
						}
					}
					unk_0x6F06CF0E9AB02847();
				}
				iVar1++;
			}
			if (unk_0x2E87280918B16506(&(Global_4539885.f_16)) != unk_0x2E87280918B16506(""))
			{
				unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x4F47E317C74C543B(Global_23150.f_5160);
				func_132(&Global_4539885);
				if (Global_4539885.f_20 == -1)
				{
					func_131(&(Global_4539885.f_16));
				}
				else
				{
					iVar4 = Global_23150.f_5404[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x4ADC8B166E139423(&(Global_4539885.f_16));
					if (bParam5)
					{
						unk_0x28594D0D61DB1278(iVar4, 70);
					}
					else
					{
						unk_0x2AE954BA77A66307(iVar4);
					}
					unk_0xD1D4F8D5470AFA4C();
				}
				unk_0x6F06CF0E9AB02847();
			}
			unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(80);
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23150.f_5473)
			{
				unk_0x4F47E317C74C543B(1);
			}
			else
			{
				unk_0x4F47E317C74C543B(0);
			}
			unk_0x6F06CF0E9AB02847();
			Global_23150.f_5161 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23150.f_5160)
		{
			if (Global_23150.f_5404[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x4F47E317C74C543B(iVar1);
					unk_0x4ADC8B166E139423(&(Global_23150.f_5355[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x28594D0D61DB1278(iParam2, 70);
					}
					else
					{
						unk_0x2AE954BA77A66307(iParam2);
					}
					unk_0xD1D4F8D5470AFA4C();
					unk_0x6F06CF0E9AB02847();
				}
			}
			iVar1++;
		}
		if (Global_4539885.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x4F47E317C74C543B(iVar1);
				unk_0x4ADC8B166E139423(&(Global_4539885.f_16));
				if (bParam5)
				{
					unk_0x28594D0D61DB1278(iParam2, 70);
				}
				else
				{
					unk_0x2AE954BA77A66307(iParam2);
				}
				unk_0xD1D4F8D5470AFA4C();
				unk_0x6F06CF0E9AB02847();
			}
		}
		unk_0xA5AAB00FA8C570A4(76, 66);
		unk_0x98F560BC13E5293F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23150.f_8808)
			{
				unk_0xE73F8CB95153F5B1(15, 0f, -0.0375f);
				Global_23150.f_8808 = 1;
			}
		}
		else if (Global_23150.f_8808)
		{
			unk_0x4FEF096D3AB4AA8C(15);
			Global_23150.f_8808 = 0;
		}
		unk_0xB5A50A903B9AB61B();
		if (Global_23150.f_5446)
		{
			unk_0xA5AAB00FA8C570A4(82, 66);
			unk_0x98F560BC13E5293F(0f, 0f, 0f, 0f);
			unk_0x694170BB080C08FF(Global_23150.f_6051[iVar0 /*10*/], Global_23150.f_5444, Global_23150.f_5445, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xB5A50A903B9AB61B();
		}
		else
		{
			unk_0xC4353D240DCE9533(Global_23150.f_6051[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_131(var uParam0)
{
	unk_0x4ADC8B166E139423(uParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_132(var uParam0)
{
	unk_0x341872E4D54CD053(uParam0);
}

bool func_133(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_134(-1, 0) == 8;
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

int func_134(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_78();
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

int func_135()
{
	struct<3> Var0;
	
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	if (func_136())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0xC81489026785778A(&Var0);
		if (Global_20211 == 0)
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
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_137(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x2F046C9381D8E91B(1, iParam2, iParam3, iParam4, iParam5);
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
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			unk_0x2F046C9381D8E91B(24, iParam2, iParam3, iParam4, iParam5);
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
	
	unk_0x2F046C9381D8E91B(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xF68E5437AF17EFBC(0);
	unk_0x3F03C2D4EFA888BC(0f, 0.35f);
	unk_0x28EC5961FD3B75F0(2);
	unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, iVar3);
	unk_0xE835F806BE49C67B(fParam0, ((Global_23147 + Global_23149) - 0.0046875f));
	unk_0x21FC15AE6B6188C4(0);
	unk_0xE570B77D940667FF(0, 0, 0, 0, 0);
	unk_0xB133F9D28DFD4E1E(0, 0, 0, 0, 0);
}

void func_139(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xCDDA0C58B818F6B2(sParam2);
	unk_0x2AE954BA77A66307(uParam3);
	unk_0x2AE954BA77A66307(uParam4);
	unk_0x1A53079994915FA6(fParam0, fParam1, 0);
}

float func_140(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xE8F6C1F695B25B91(sParam0))
	{
		if (unk_0x2E87280918B16506(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_141();
	unk_0x27ED46EA48C0A455(sParam0);
	unk_0x2AE954BA77A66307(uParam1);
	unk_0x2AE954BA77A66307(uParam2);
	return unk_0x63F498818B4DEE3E(1);
}

void func_141()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x2F046C9381D8E91B(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23150.f_8783)
	{
		iVar0 = Global_23150.f_8779;
		iVar1 = Global_23150.f_8780;
		iVar2 = Global_23150.f_8781;
		iVar3 = Global_23150.f_8782;
	}
	unk_0xF68E5437AF17EFBC(0);
	unk_0x3F03C2D4EFA888BC(0f, 0.35f);
	unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, iVar3);
	unk_0xE835F806BE49C67B((Global_23147 + 0.0046875f), ((Global_23147 + Global_23149) - 0.0046875f));
	unk_0x21FC15AE6B6188C4(0);
	unk_0xE570B77D940667FF(0, 0, 0, 0, 0);
	unk_0xB133F9D28DFD4E1E(0, 0, 0, 0, 0);
}

void func_142(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xCA4C0AD3CAFF651E((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_143(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0xACC32B78196FBC2A(&(Global_23150.f_7420[iParam0 /*16*/])))
	{
		if (unk_0x2E87280918B16506(&(Global_23150.f_7420[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var19 = { func_145(unk_0x9E2D6C50374FCFA9()) };
			if (unk_0xF9518F925A4A1894(&Var19, &uVar3))
			{
				return func_144(&uVar3);
			}
		}
		else
		{
			return func_144(&(Global_23150.f_7420[iParam0 /*16*/]));
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
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
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
	
	unk_0x460FFCEC183339C6(iParam0, &Var0, 13);
	return Var0;
}

char* func_146(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0xACC32B78196FBC2A(&(Global_23150.f_6411[iParam0 /*16*/])))
	{
		if (unk_0x2E87280918B16506(&(Global_23150.f_6411[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var16 = { func_145(unk_0x9E2D6C50374FCFA9()) };
			unk_0xF9518F925A4A1894(&Var16, &uVar0);
			return func_144(&uVar0);
		}
		else
		{
			return func_144(&(Global_23150.f_6411[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
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
		unk_0xBE74EC1CD33D16EA(uParam1, uParam2);
		return;
	}
	unk_0x604161EB05F29E6D(uParam1, uParam2);
	fVar0 = unk_0xBBDA792448DB5A89(*uParam1);
	fVar1 = unk_0xBBDA792448DB5A89(*uParam2);
	fVar2 = unk_0xF4CC509EEB975296(0);
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
	if (unk_0x2E87280918B16506(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_147(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { unk_0x7DF13542ADA68880(&cVar0, &cVar16) };
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
		if (iParam0 == 29 && unk_0x2E87280918B16506(&(Global_23150.f_7420[29 /*16*/])) == joaat("crew_logo"))
		{
			Var35.f_0 = 106f;
			Var35.f_1 = 106f;
		}
		*fParam3 = ((Var35.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var35.f_1 / IntToFloat(iVar33)) / (Var35.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0xD87C62FA7E75D2C5() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23149)
			{
				*fParam4 = (*fParam4 * (Global_23149 / *fParam3));
				*fParam3 = Global_23149;
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
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_151(bool bParam0, bool bParam1)
{
	if (Global_2703735.f_1571.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xE9E8955A780DDA01() || (func_153(8, -1) && func_152() != 65)) || (unk_0x1A76A9A82BD6228C() != 0 && !bParam1)) || (unk_0x04458B4E5D9E466A() && !bParam0)) || unk_0x06C559386AD19942()) || Global_78579) || Global_23150.f_8807) || unk_0x3E6C9DAD84CEFED1()) || Global_100493.f_1458)
	{
		return 0;
	}
	return 1;
}

int func_152()
{
	return Global_1574991;
}

var func_153(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1648034.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1648034.f_1048, iParam0);
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
	if (unk_0x3A76A0944BE2C291(2))
	{
		if (Global_4539961 > -1)
		{
			if (unk_0xF09A4F413B0D30EB(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_156(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x3A76A0944BE2C291(2))
	{
		return 0;
	}
	if (unk_0xF1EC2C71FD1371B8() || unk_0x3E6C9DAD84CEFED1())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x60236500251FDE8E();
	}
	if (Global_4539961 == -6)
	{
		unk_0x147141484022751B(4);
		if (iParam0 && unk_0x4C1B8C5717647539(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4539961 = -1;
			return 0;
		}
	}
	if (((Global_4539961 > -1 || Global_4539961 == -3) || Global_4539961 == -2) || unk_0xFF792DDC17AFA777())
	{
		unk_0x147141484022751B(1);
		return 0;
	}
	if (Global_4539961 == -1 && iParam0)
	{
		if (unk_0x4C1B8C5717647539(2, 237))
		{
			unk_0x147141484022751B(4);
			Global_4539961 = -6;
			return 1;
		}
		else
		{
			unk_0x147141484022751B(3);
			return 0;
		}
	}
	unk_0x147141484022751B(1);
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
	if (!unk_0x3A76A0944BE2C291(2))
	{
		Global_4539961 = -1;
		return;
	}
	unk_0x4522E5855673D159(1);
	fVar0 = Global_23147;
	fVar2 = (fVar0 + Global_23149);
	fVar3 = Global_23150.f_6121;
	fVar1 = (Global_23150.f_6121 - (IntToFloat(Global_23150.f_6123) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_23150.f_6123 < 1)
	{
		fVar1 = (Global_23150.f_6121 - 0.034722f);
	}
	unk_0xA5AAB00FA8C570A4(76, 84);
	unk_0x98F560BC13E5293F(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x9CCCA5F1EBB26C03(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x9CCCA5F1EBB26C03(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xB5A50A903B9AB61B();
	func_159();
	if (Global_4539961 == -6)
	{
		return;
	}
	Global_4539961 = -1;
	fVar7 = Global_4539955;
	fVar8 = Global_4539956;
	if (Global_23150.f_6124 > Global_23150.f_6123)
	{
		if (((Global_4539955 >= fVar0 && Global_4539955 <= fVar2) && Global_4539956 >= fVar3) && Global_4539956 < (fVar3 + fVar6))
		{
			Global_4539961 = -2;
			if (bParam3)
			{
				func_158(0);
			}
			return;
		}
		if (((Global_4539955 >= fVar0 && Global_4539955 <= fVar2) && Global_4539956 >= (fVar3 + fVar6)) && Global_4539956 < (fVar3 + 0.034722f))
		{
			Global_4539961 = -3;
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
		if (Global_23150.f_6124 == -1)
		{
			Global_4539961 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_23150.f_6123);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xA5AAB00FA8C570A4(76, 84);
				unk_0x98F560BC13E5293F(-0.05f, -0.05f, 0f, 0f);
				func_142(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_23149, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0xB5A50A903B9AB61B();
			}
		}
		Global_4539961 = Global_23150.f_8429[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4539961 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4539961 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4539961 = -4;
		return;
	}
	Global_4539961 = -1;
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
	fVar0 = Global_23147;
	fVar1 = Global_23150.f_6121;
	unk_0xA5AAB00FA8C570A4(76, 84);
	unk_0x98F560BC13E5293F(-0.05f, -0.05f, 0f, 0f);
	if (Global_4539961 == -2)
	{
		func_142(fVar0, fVar1, Global_23149, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4539961 == -3)
	{
		func_142(fVar0, (fVar1 + fVar2), Global_23149, fVar2, 255, 255, 255, iVar3);
	}
	unk_0xB5A50A903B9AB61B();
}

void func_159()
{
	Global_4539957 = Global_4539955;
	Global_4539958 = Global_4539956;
	Global_4539955 = unk_0x159F9B5A2920DF4E(2, 239);
	Global_4539956 = unk_0x159F9B5A2920DF4E(2, 240);
	Global_4539959 = (Global_4539955 - Global_4539957);
	Global_4539960 = (Global_4539956 - Global_4539958);
}

void func_160(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x2018949B2C9FD96A(2, iParam0, 1);
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sVar0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xCED9E32812D6C7C7(&(Global_23150.f_5443), Global_23150.f_5160);
	}
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = iParam0;
	Global_23150.f_5430[Global_23150.f_5160] = 32;
	Global_23150.f_5160++;
}

void func_161(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_23150.f_5081), sParam0, 24);
	Global_23150.f_5153 = 0;
	Global_23150.f_5154 = 0;
	Global_23150.f_5155 = 0;
	Global_23150.f_5156 = 0;
	Global_23150.f_5157 = iParam1;
	Global_23150.f_5158 = unk_0x320D1840B6DAA1CC();
	Global_23150.f_5159 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5087[iVar0] = 0;
		iVar0++;
	}
}

void func_162(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_23150.f_6130 = uParam0;
	Global_23150.f_6265 = iParam2;
	if (Global_23150.f_6130 < Global_23150.f_6129)
	{
		Global_23150.f_6129 = Global_23150.f_6130;
	}
	else if ((Global_23150.f_6120 && Global_23150.f_6130 > Global_23150.f_6131) || (!Global_23150.f_6120 && Global_23150.f_6130 >= (Global_23150.f_6129 + Global_23150.f_5616)))
	{
		iVar0 = Global_23150.f_6129;
		while (iVar0 <= Global_23150.f_6130)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23150.f_5480[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23150.f_5616 && Global_23150.f_6129 < 128)
		{
			Global_23150.f_6129++;
			iVar1 = 0;
			iVar0 = Global_23150.f_6129;
			while (iVar0 <= Global_23150.f_6130)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23150.f_5480[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23150.f_5081), "", 24);
		StringCopy(&(Global_4539885.f_21), "", 16);
	}
}

void func_163(int iParam0)
{
	Global_23150.f_6129 = iParam0;
}

void func_164(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23150.f_5613 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 >= 4)
	{
		return;
	}
	if (Global_23150.f_6135 != 1)
	{
		return;
	}
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		return;
	}
	Global_23150.f_4309[Global_23150.f_5613] = uParam0;
	Global_23150.f_5613++;
	Global_23150.f_2387[Global_23150.f_6133 /*5*/][Global_23150.f_6134] = 2;
	Global_23150.f_6134++;
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		fVar0 = func_166();
		if (Global_23150.f_5466[Global_23150.f_5610] && Global_23150.f_6134 == Global_23150.f_6132)
		{
			func_149(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23150.f_5459[(Global_23150.f_5610 - 1)])
		{
			Global_23150.f_5459[(Global_23150.f_5610 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23150.f_6134 >= Global_23150.f_6132)
		{
			fVar3 = func_165();
			if (fVar3 > Global_23150.f_6136[Global_23150.f_5609])
			{
				Global_23150.f_6136[Global_23150.f_5609] = fVar3;
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
	while (iVar0 < Global_23150.f_6134)
	{
		if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_23150.f_4824[((Global_23150.f_5615 - iVar1) + iVar0)] != 0)
		{
			if (func_149(Global_23150.f_4824[((Global_23150.f_5615 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0xC23444E9B1B8D081(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0xC23444E9B1B8D081(0.35f, 0);
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
	while (iVar7 < Global_23150.f_6134)
	{
		if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_128(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x2E87280918B16506(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
	{
		unk_0x27ED46EA48C0A455(&(Global_23150.f_79[Global_23150.f_6133 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_23150.f_6134)
	{
		if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x2E87280918B16506(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				unk_0x26C23BE14F66F202(&(Global_23150.f_79[(Global_23150.f_6133 + iVar8) /*6*/]));
			}
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x2E87280918B16506(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				unk_0x26C23BE14F66F202(&(Global_23150.f_79[(Global_23150.f_6133 + iVar8) /*6*/]));
			}
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 2)
		{
			if (unk_0x2E87280918B16506(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				unk_0x2AE954BA77A66307(Global_23150.f_4309[((Global_23150.f_5613 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 3)
		{
			if (unk_0x2E87280918B16506(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				unk_0x957E514A6E999374(Global_23150.f_4566[((Global_23150.f_5614 - iVar4) + iVar10)], Global_23150.f_4695[((Global_23150.f_5614 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 5)
		{
			if (unk_0x2E87280918B16506(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				unk_0x76DB21247AE4E4E2(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 6)
		{
			if (unk_0x2E87280918B16506(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				unk_0x26C23BE14F66F202(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 7)
		{
			if (unk_0x2E87280918B16506(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				unk_0x76DB21247AE4E4E2(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 9)
		{
			if (unk_0x2E87280918B16506(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				unk_0x76DB21247AE4E4E2(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x2E87280918B16506(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
	{
		fVar0 = unk_0x63F498818B4DEE3E(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_23150.f_4824[((Global_23150.f_5615 - iVar5) + iVar7)] != 0)
		{
			func_149(Global_23150.f_4824[((Global_23150.f_5615 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
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
	
	if (Global_23150.f_5609 > iParam0)
	{
		return;
	}
	if (Global_23150.f_5609 >= 128)
	{
		return;
	}
	if (Global_23150.f_5611 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 < Global_23150.f_6132)
	{
		return;
	}
	if (Global_23150.f_5609 != iParam0)
	{
		Global_23150.f_5609 = iParam0;
		Global_23150.f_5610 = 0;
	}
	iVar0 = Global_23150.f_5447[Global_23150.f_5610];
	if (iVar0 != 1)
	{
		while (Global_23150.f_5610 < 4 && iVar0 != 1)
		{
			Global_23150.f_5610++;
			iVar0 = Global_23150.f_5447[Global_23150.f_5610];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]), sParam1, 24);
	if (!unk_0xACC32B78196FBC2A(sParam1) && !unk_0xE73671E3D37CF79E(sParam1))
	{
	}
	Global_23150.f_1616[Global_23150.f_5611] = bParam3;
	Global_23150.f_1873[Global_23150.f_5611] = iParam4;
	Global_23150.f_2130[Global_23150.f_5611] = iParam6;
	Global_23150.f_5611++;
	if (!bParam3)
	{
		func_171(Global_23150.f_5609, 1);
	}
	else
	{
		func_171(Global_23150.f_5609, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_170(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]));
		if (Global_23150.f_5466[Global_23150.f_5610])
		{
			func_149(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23150.f_5459[Global_23150.f_5610])
		{
			Global_23150.f_5459[Global_23150.f_5610] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_169(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]));
			if (fVar4 > Global_23150.f_6136[iParam0])
			{
				Global_23150.f_6136[iParam0] = fVar4;
			}
		}
	}
	unk_0xCED9E32812D6C7C7(&(Global_23150.f_5480[iParam0]), Global_23150.f_5610);
	Global_23150.f_5610++;
	Global_23150.f_6135 = 1;
	Global_23150.f_6133 = (Global_23150.f_5611 - 1);
	Global_23150.f_6134 = 0;
	Global_23150.f_6132 = iParam2;
}

float func_169(char* sParam0)
{
	if (!unk_0xE73671E3D37CF79E(sParam0))
	{
	}
	return unk_0xC23444E9B1B8D081(0.35f, 0);
}

float func_170(char* sParam0)
{
	if (!unk_0xE8F6C1F695B25B91(sParam0))
	{
		if (unk_0x2E87280918B16506(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_128(0, 1, 0, 0, 0, 0, 0);
	unk_0x27ED46EA48C0A455(sParam0);
	return unk_0x63F498818B4DEE3E(1);
}

void func_171(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&(Global_23150.f_6406[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_23150.f_6406[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_172()
{
	if (unk_0x8FE9914D4872D601())
	{
		unk_0x2969B478FF4DB4DF(0.325f, 0.3f);
	}
}

void func_173(int iParam0, char* sParam1, char* sParam2)
{
	Global_23150 = iParam0;
	func_174(29, sParam1, sParam2);
}

void func_174(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_23150.f_6411[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_23150.f_7420[iParam0 /*16*/]), sParam2, 64);
}

void func_175(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_23150.f_1), sParam0, 16);
	Global_23150.f_74 = 0;
	Global_23150.f_75 = 0;
	Global_23150.f_76 = 0;
	Global_23150.f_77 = 0;
	Global_23150.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_176(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23150.f_5474[0] = iParam0;
	Global_23150.f_5474[1] = iParam1;
	Global_23150.f_5474[2] = iParam2;
	Global_23150.f_5474[3] = iParam3;
	Global_23150.f_5474[4] = iParam4;
}

void func_177(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23150.f_5447[0] = iParam0;
	Global_23150.f_5447[1] = iParam1;
	Global_23150.f_5447[2] = iParam2;
	Global_23150.f_5447[3] = iParam3;
	Global_23150.f_5447[4] = iParam4;
	Global_23150.f_5617 = 0;
	if (iParam0 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam1 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam2 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam3 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam4 != 0)
	{
		Global_23150.f_5617++;
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
		StringCopy(&(Global_23150.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23150.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		StringCopy(&(Global_2725950[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23150.f_4309[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23150.f_4566[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23150.f_4824[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23150.f_5480[iVar0] = 0;
		Global_23150.f_5618[iVar0] = 0;
		Global_23150.f_5747[iVar0] = 0;
		Global_23150.f_6270[iVar0] = 0f;
		Global_23150.f_5876[iVar0] = 0;
		Global_23150.f_6136[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23150.f_5447[iVar0] = 0;
		Global_23150.f_5459[iVar0] = 0f;
		Global_23150.f_5453[iVar0] = -1f;
		Global_23150.f_5466[iVar0] = 0;
		Global_23150.f_5474[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_23150.f_5355[iVar0 /*4*/]), "", 16);
		Global_23150.f_5404[iVar0] = -1;
		Global_23150.f_5417[iVar0] = 363;
		Global_23150.f_5430[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_23150.f_6411[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23150.f_7420[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23150.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4539885.f_16), "", 16);
	Global_4539885.f_20 = -1;
	Global_23150 = 0;
	Global_23150.f_5609 = 0;
	Global_23150.f_5610 = 0;
	Global_23150.f_5611 = 0;
	Global_23150.f_5613 = 0;
	Global_23150.f_5614 = 0;
	Global_23150.f_5615 = 0;
	Global_23150.f_5612 = 0;
	Global_23150.f_6265 = 0;
	Global_23150.f_6405 = 0;
	Global_23150.f_6130 = 0;
	Global_23150.f_6129 = 0;
	Global_23150.f_6131 = 0;
	StringCopy(&(Global_23150.f_5081), "", 24);
	Global_23150.f_5153 = 0;
	Global_23150.f_5154 = 0;
	Global_23150.f_5155 = 0;
	Global_23150.f_5156 = 0;
	Global_23150.f_5157 = 0;
	Global_23150.f_5158 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5087[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_5159 = 0;
	StringCopy(&(Global_4539885.f_21), "", 16);
	Global_4539885.f_61 = 0;
	Global_4539885.f_62 = 0;
	Global_4539885.f_63 = 0;
	Global_4539885.f_64 = 0;
	Global_4539885.f_65 = 0;
	Global_4539885.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4539885.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4539885.f_67 = 0;
	StringCopy(&(Global_23150.f_1), "", 16);
	Global_23150.f_5465 = 0f;
	Global_23150.f_74 = 0;
	Global_23150.f_75 = 0;
	Global_23150.f_76 = 0;
	Global_23150.f_77 = 0;
	Global_23150.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_6135 = 0;
	Global_23150.f_6134 = 0;
	Global_23150.f_6132 = 0;
	Global_23150.f_6133 = 0;
	Global_23150.f_5160 = 0;
	Global_23150.f_5161 = 0;
	Global_23150.f_5616 = 10;
	Global_23150.f_5617 = 0;
	Global_23150.f_6267 = 0f;
	Global_23150.f_6268 = 0f;
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	Global_23150.f_6121 = 0f;
	Global_23150.f_6122 = 0;
	Global_23150.f_6124 = 0;
	Global_23150.f_6123 = 0;
	Global_23150.f_6125 = 0;
	Global_23150.f_6126 = 0;
	Global_23150.f_6127 = 0;
	Global_23150.f_6128 = 0;
	Global_23150.f_8804 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23150.f_6399[iVar0] = -1;
		Global_23150.f_6402[iVar0] = -1;
		iVar0++;
	}
	Global_23150.f_5472 = 0f;
	Global_23150.f_5443 = 0;
	Global_23150.f_5473 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23150.f_6406)
	{
		Global_23150.f_6406[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_8783 = 0;
	Global_23150.f_8778 = 0;
	Global_23150.f_8788 = 0;
	Global_23150.f_8793 = 0;
	Global_23150.f_8798 = 0;
	Global_23150.f_8800 = 0;
	Global_23150.f_8806 = 0;
	Global_23147 = 0.05f;
	Global_23148 = 0.05f;
	Global_23149 = 0.225f;
	fVar2 = unk_0xF4CC509EEB975296(0);
	if (bParam0)
	{
		Global_23149 = (0.225f * (1.777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23149 = (0.225f * (1.777778f / fVar2));
	}
	else
	{
		Global_23149 = 0.225f;
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
			*uParam5 = { unk_0x6DB7FBD602C51670(Param1, fParam4, 2.40015f, -7.75244f, 1.0825f) };
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
			*uParam5 = { unk_0x6DB7FBD602C51670(Param1, fParam4, 3.80296f, -5.391f, 1.213f) };
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
			*uParam5 = { unk_0x6DB7FBD602C51670(Param1, fParam4, 2.97963f, -3.39452f, 0.934498f) };
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
		unk_0xCED9E32812D6C7C7(&Global_32207, bParam0);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_32207, bParam0);
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
	if (!unk_0x3583A42587543334(unk_0xB6BA8B8E3D0B41C6()))
	{
		return 0;
	}
	if (func_121(0))
	{
		return 0;
	}
	if (unk_0xF34D8FCAE3FD4EE4())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/] == 1 && Global_43792[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_43792[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_43792[iVar0 /*32*/].f_5 = 1;
			Global_43792[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_43792[iVar0 /*32*/] == 0)
			{
			}
			if (Global_43792[iVar0 /*32*/].f_7)
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
		if (Global_43792[iVar0 /*32*/].f_1 == iParam0)
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
	if (Global_43792[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_43792[iVar0 /*32*/].f_12)
	{
		unk_0xB65782D82090BB33(&(Global_43792[iVar0 /*32*/].f_8));
		unk_0x26C23BE14F66F202(&Global_43987);
		iVar1 = unk_0x73CB3406A86A3A02(0);
	}
	else
	{
		unk_0xB65782D82090BB33(&(Global_43792[iVar0 /*32*/].f_8));
		unk_0x26C23BE14F66F202(&Global_43987);
		if (Global_43792[iVar0 /*32*/].f_30)
		{
			unk_0x76DB21247AE4E4E2(&(Global_43792[iVar0 /*32*/].f_13));
		}
		else
		{
			unk_0x26C23BE14F66F202(&(Global_43792[iVar0 /*32*/].f_13));
		}
		iVar1 = unk_0x73CB3406A86A3A02(0);
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
		if (Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

void func_185(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xB4C854DD86E40FDA(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x04458B4E5D9E466A())
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
		if (!Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/] = 1;
			Global_43792[iVar0 /*32*/].f_1 = Global_43993;
			Global_43993++;
			Global_43792[iVar0 /*32*/].f_4 = 0;
			Global_43792[iVar0 /*32*/].f_29 = 0;
			Global_43792[iVar0 /*32*/].f_5 = 0;
			Global_43792[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_43792[iVar0 /*32*/].f_8), sParam2, 16);
			Global_43792[iVar0 /*32*/].f_6 = iParam3;
			Global_43792[iVar0 /*32*/].f_31 = unk_0x69CE66B03B2184EB();
			Global_43792[iVar0 /*32*/].f_7 = 0;
			Global_43792[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xACC32B78196FBC2A(sParam4))
			{
				Global_43792[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_43792[iVar0 /*32*/].f_13), sParam4, 64);
				Global_43792[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_43792[iVar0 /*32*/].f_12 = 0;
				Global_43792[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_43792[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_186(char* sParam0)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 1, 1, -1);
}

int func_187()
{
	if (Global_113386.f_20410.f_145 > 0)
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
			*uParam3 = { unk_0x6DB7FBD602C51670(*uParam1, uParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { unk_0x6DB7FBD602C51670(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { unk_0x6DB7FBD602C51670(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { unk_0x6DB7FBD602C51670(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { unk_0x6DB7FBD602C51670(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { unk_0x6DB7FBD602C51670(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
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
			*uParam3 = { unk_0x6DB7FBD602C51670(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { unk_0x6DB7FBD602C51670(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { unk_0x6DB7FBD602C51670(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
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
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()) && !unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		if (fParam0 <= 0f)
		{
			return unk_0xBE961A177A9EC01C(unk_0xE2D3D51028F0428A()) > 0;
		}
		else
		{
			return unk_0xCA0ED3B082A9C834(unk_0xE2D3D51028F0428A(), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), fParam0) > 0;
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
			unk_0x1C2ED929474DC6FE(uLocal_618[iLocal_634], 1, 0);
			uLocal_632 = unk_0x8F5F4164BF5FB513(unk_0x6DB7FBD602C51670(Local_68.f_486.f_6, Local_68.f_486.f_9.f_2, -0.07f, 0.06f, -0.02f), Local_68.f_486.f_9, 2);
			if (!unk_0xF68107C40359970C(Local_68.f_2))
			{
				unk_0x950B26F4C891073F(Local_68.f_2, uLocal_632, "mp_am_hold_up", "purchase_chocbar_shopkeeper", 1.5f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xAA8557AFE4A4A184(uLocal_618[iLocal_634], uLocal_632, "purchase_chocbar", "mp_am_hold_up", 1000f, 1090519040, 1, 1148846080);
				iLocal_630 = 1;
			}
			break;
		
		case 1:
			if (unk_0xCE2C78E9FC0B01E3(uLocal_632))
			{
				if (unk_0x54DE1614490C2A83(uLocal_632) == 1f)
				{
					if (!unk_0xF68107C40359970C(Local_68.f_2))
					{
						unk_0x03A927199A2DFE46(Local_68.f_2);
					}
					if (unk_0xE5965CDF24F93A9F(uLocal_618[iLocal_634]))
					{
						unk_0x4536AE3DABDE0C44(uLocal_618[iLocal_634], 1);
					}
					iLocal_633 = unk_0x320D1840B6DAA1CC();
					iLocal_630 = 2;
				}
			}
			else
			{
				iLocal_633 = unk_0x320D1840B6DAA1CC();
				iLocal_630 = 2;
			}
			break;
		
		case 2:
			if ((unk_0x320D1840B6DAA1CC() - iLocal_633) > 1000)
			{
				if (unk_0xE5965CDF24F93A9F(uLocal_618[iLocal_634]))
				{
					unk_0x1C2ED929474DC6FE(uLocal_618[iLocal_634], 0, 0);
					unk_0xC64B6E13A6A7F517(uLocal_618[iLocal_634], func_60(iLocal_634), 1, 0, 0, 1);
					unk_0x4536AE3DABDE0C44(uLocal_618[iLocal_634], 0);
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
				if (!unk_0x55B23FE400FCEA6B(Local_68.f_86, 0))
				{
					func_195();
					func_12(&(Local_68.f_86.f_7));
					iLocal_54 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x55B23FE400FCEA6B(Local_68.f_86, 0))
				{
					if ((func_194(&(Local_68.f_86.f_7), 5f) || func_192(Local_68.f_2, &(Local_68.f_451))) || unk_0x32DCDA1B2F8A0694(Local_68.f_86))
					{
						iLocal_54 = 4;
					}
				}
				break;
			
			case 4:
				if (!unk_0x55B23FE400FCEA6B(Local_68.f_86, 0))
				{
					iLocal_53 = 31;
					unk_0x7734082B0EDB0BE0(Local_68.f_86, Local_68.f_0, 500f, -1, 0, 0);
					iLocal_54 = 5;
				}
				func_40(&(Local_68.f_86.f_7));
				break;
			}
	}
}

int func_192(int iParam0, var uParam1)
{
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 7))
		{
			if (unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iParam0) || unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iParam0))
			{
				if (unk_0x2E7F5417D4F4DD69(iParam0, unk_0xE2D3D51028F0428A(), 90f))
				{
					if (func_193(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x320D1840B6DAA1CC();
						}
						else if ((unk_0x320D1840B6DAA1CC() - uParam1->f_1) > uParam1->f_3)
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
	return func_23(unk_0x407E03586628E458(unk_0xB6BA8B8E3D0B41C6()), iParam0, iParam1);
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
	if (!unk_0x55B23FE400FCEA6B(Local_68.f_86, 0))
	{
		unk_0xA888F8CC04F25CC8(&(Local_68.f_86.f_6));
		unk_0x529D306014D3C29A(0, Local_68.f_0, 0);
		unk_0xF30F15F203736DE4(0, Local_68.f_0, 2500, 0, 2);
		unk_0x3598F95A00026DD8(0, 2500, 0, -1, 0);
		unk_0xC963A45B50851768(Local_68.f_86.f_6);
		unk_0x8ACADA903FCAA42F(Local_68.f_86, Local_68.f_86.f_6);
	}
}

int func_196()
{
	unk_0x72E575062E5D1004(Local_68.f_86.f_2, Local_68.f_86.f_5, 1, 0, &(Local_68.f_86), 0, 1, -1);
	if (!unk_0x55B23FE400FCEA6B(Local_68.f_86, 0))
	{
		if (unk_0x15CAA6D7B11F1A7C(Local_68.f_86) == Local_68.f_86.f_1)
		{
			unk_0x2D58A6131679D82C(Local_68.f_86, 1, 0);
			unk_0x50274A7EACA3133A(Local_68.f_86, 1);
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
			unk_0x859006DB870314C5(500);
			iLocal_624 = 6;
		}
	}
	switch (iLocal_624)
	{
		case 0:
			if ((((unk_0x55B23FE400FCEA6B(Local_68.f_2, 0) || !func_217()) || func_1(Local_68.f_470, 128)) && iLocal_57 < 3) && unk_0x3FDE5764A07BA515(Local_68.f_2.f_1, 1.5f) == 0)
			{
				if ((func_45() && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && !func_216(0))
				{
					func_215("SHR_ROBTILL", -1);
					Local_68.f_469 = -1;
					func_185(&(Local_68.f_469), 4, "SHR_ROBTILL", 0, 0, 0, 0);
					unk_0xB0550BC91B0159D6(&(Local_68.f_162.f_18), true);
					unk_0xB0550BC91B0159D6(&(Local_68.f_162.f_18), false);
					iLocal_624 = 1;
				}
			}
			else if (!unk_0xF68107C40359970C(Local_68.f_2))
			{
			}
			else if (iLocal_57 == 7)
			{
			}
			else if (unk_0x3FDE5764A07BA515(Local_68.f_2.f_1, 1.5f) > 0)
			{
			}
			break;
		
		case 1:
			if (func_45())
			{
				if (func_181(Local_68.f_469, 1))
				{
					if (!unk_0x55B23FE400FCEA6B(Local_68.f_0, 0))
					{
						if (!unk_0x55B23FE400FCEA6B(unk_0x9993EF7FDBCDB632(), 0))
						{
							iVar3 = unk_0x9993EF7FDBCDB632();
							if (unk_0xD132EDDA78FF4A51(iVar3, Local_68.f_214, Local_68.f_217, Local_68.f_220, 0, 1, 0))
							{
								unk_0xC64B6E13A6A7F517(iVar3, unk_0x6DB7FBD602C51670(Local_68.f_486.f_6, Local_68.f_486.f_9.f_2, -0.7961f, -1.562f, -0.4215f), 0, 0, 0, 1);
							}
						}
					}
					unk_0xCED9E32812D6C7C7(&(Local_68.f_162.f_18), true);
					if (func_28("SHR_ROBTILL"))
					{
						unk_0x3410421C60BF7143(1);
					}
					func_184(&(Local_68.f_469));
					bVar2 = unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iLocal_628, 1);
					if (bVar2)
					{
						unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
					}
					unk_0x64E21045781AFBC9(unk_0xB6BA8B8E3D0B41C6(), 0, 0);
					unk_0x85050CAC8798CDD0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 15f);
					unk_0xEE61327A6ED2D0B8(0);
					func_117(0);
					func_209(1, 1, 1, 0, 0, 0, 0);
					unk_0xB60709BD0E075903(0);
					func_180(23, 1);
					unk_0x917F631782A9CB32(Local_68.f_2.f_1, 3f, 0);
					iLocal_624 = 2;
				}
				else if ((unk_0x320D1840B6DAA1CC() % 1000) < 50)
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
					unk_0x3410421C60BF7143(1);
				}
				func_184(&(Local_68.f_469));
				iLocal_624 = 0;
			}
			break;
		
		case 2:
			if (unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
			{
				unk_0x959E1626CBC7D38A(Local_68.f_2, 0, 0);
				unk_0x5C65DDDC219B3AA5(Local_68.f_2, 1);
			}
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), unk_0x6DB7FBD602C51670(Local_68.f_2.f_1, Local_68.f_2.f_4, -0.75f, 0f, -1f), 1, 0, 0, 1);
				unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), Local_68.f_2.f_4);
				unk_0x7461D7C5BA953BC7(&uLocal_566);
				unk_0xA888F8CC04F25CC8(&uLocal_566);
				unk_0x49D97B076E3590AC(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x49D97B076E3590AC(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 1, 0, 0, 0, 0);
				unk_0x49D97B076E3590AC(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0xC963A45B50851768(uLocal_566);
				unk_0x8ACADA903FCAA42F(unk_0xE2D3D51028F0428A(), uLocal_566);
				if (!unk_0x876B1078E90C91CB(uLocal_625))
				{
					uLocal_625 = unk_0x1BCEC0B1056BD6AC(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0x3FB84450A94CB528(uLocal_625, unk_0xE2D3D51028F0428A(), -0.1878f, 3.0635f, 0.68f, 1);
				unk_0x98A99A554B458431(uLocal_625, unk_0xE2D3D51028F0428A(), -0.0129f, 0.0927f, 0.3008f, 1);
				unk_0x0A18C027350D3C19(uLocal_625, 35f);
				unk_0x9BAE3263D9B1FCB9(uLocal_625, "HAND_SHAKE", 0.1f);
				unk_0xDD786B89B15AA63F(uLocal_625, 1);
				unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
			}
			iLocal_624 = 3;
			break;
		
		case 3:
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (!unk_0x876B1078E90C91CB(uLocal_626))
				{
					uLocal_626 = unk_0x1BCEC0B1056BD6AC(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0x3FB84450A94CB528(uLocal_626, unk_0xE2D3D51028F0428A(), -1.0346f, 2.9183f, 0.68f, 1);
				unk_0x98A99A554B458431(uLocal_626, unk_0xE2D3D51028F0428A(), -0.0574f, 0.1074f, 0.3008f, 1);
				unk_0x0A18C027350D3C19(uLocal_626, 35f);
				unk_0x9BAE3263D9B1FCB9(uLocal_626, "HAND_SHAKE", 0.3f);
				unk_0x889B4F9D52E23DEE(uLocal_626, uLocal_625, 8000, 1, 1);
			}
			iLocal_629 = unk_0x320D1840B6DAA1CC();
			iLocal_624 = 4;
			break;
		
		case 4:
			if (((unk_0x320D1840B6DAA1CC() - iLocal_629) > 4800 || (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))) || unk_0x3FDE5764A07BA515(Local_68.f_2.f_1, 3f) > 0)
			{
				iLocal_624 = 5;
			}
			else if ((unk_0x320D1840B6DAA1CC() - iLocal_629) > 4500)
			{
				if (func_208())
				{
					if (!iLocal_583)
					{
						unk_0x9DCF157443EA30D6("CamPushInNeutral", 0, 0);
						unk_0x91DFC8F68F6D9B05(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_583 = 1;
					}
				}
			}
			else if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "oddjobs@shop_robbery@rob_till", "loop", 3))
			{
				fVar0 = unk_0xD01FAFCE275C94F3(unk_0xE2D3D51028F0428A(), "oddjobs@shop_robbery@rob_till", "loop");
				if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
				{
					if (!iLocal_627)
					{
						iVar1 = unk_0x5853B15F78E1A265(10, 51);
						func_207(func_103(), 1, iVar1, 0, 0);
						iLocal_569 = (iLocal_569 + iVar1);
						Local_68.f_28.f_6 = unk_0xA9ADCC8D104AA552();
						unk_0x91DFC8F68F6D9B05(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
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
			if (unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
			{
				unk_0x959E1626CBC7D38A(Local_68.f_2, 1, 0);
				unk_0x5C65DDDC219B3AA5(Local_68.f_2, 0);
			}
			unk_0x94953C3FF0664F66(0);
			unk_0x080C97B891E2F3AA(0, 1065353216);
			if (unk_0x876B1078E90C91CB(uLocal_625))
			{
				unk_0x588DDCB644C6486A(uLocal_625, 0);
			}
			if (unk_0x876B1078E90C91CB(uLocal_626))
			{
				unk_0x588DDCB644C6486A(uLocal_626, 0);
			}
			unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
			if (!unk_0x55B23FE400FCEA6B(unk_0x9993EF7FDBCDB632(), 0))
			{
				iVar3 = unk_0x9993EF7FDBCDB632();
				Var4 = { unk_0x6B62510F212526DC(iVar3, 1) };
			}
			if (iLocal_628 != joaat("weapon_unarmed") && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), iLocal_628, 1);
			}
			if (BitTest(Local_68.f_162.f_18, 1))
			{
				unk_0xB0550BC91B0159D6(&(Local_68.f_162.f_18), true);
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
			if (unk_0xA829C9A2767AC8EF())
			{
				unk_0xDD786B89B15AA63F(uLocal_626, 0);
				unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
				if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
				{
					unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
				}
				if (iLocal_569 < 15)
				{
					iVar1 = unk_0x5853B15F78E1A265(25, 65);
					func_207(func_103(), 1, iVar1, 0, 0);
					iLocal_569 = (iLocal_569 + iVar1);
				}
				unk_0x5A7ACD1CDF509B0D(500);
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
	if (Global_113386.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113386.f_10194[iParam0 /*12*/].f_6 == 11 || Global_113386.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113386.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_113386.f_10194[iParam0 /*12*/].f_10 = iParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_113122 = 0;
	Global_113123 = 0;
	Global_113124 = 0;
	Global_113125 = 0;
	Global_113126 = 0;
	Global_113127 = 0;
	Global_113128 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113386.f_10194.f_3853;
	Global_113386.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113386.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113386.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113122++;
					fVar1 = (fVar1 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113123++;
					fVar2 = (fVar2 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113124++;
					fVar3 = (fVar3 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113125++;
					fVar4 = (fVar4 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113126++;
					fVar5 = (fVar5 + (Global_113386.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113127++;
					fVar6 = (fVar6 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113128++;
					fVar7 = (fVar7 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113105 > 0)
	{
		if (Global_113122 == Global_113105)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113106 > 0)
	{
		if (Global_113123 == Global_113106)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113107 > 0)
	{
		if (Global_113124 == Global_113107)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113108 > 0)
	{
		if (Global_113125 == Global_113108)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113109 > 0)
	{
		if (((Global_113126 == Global_113109 || (Global_113109 * 10 / Global_113126) < 41) || Global_113126 > Global_113112) || Global_113126 == Global_113112)
		{
			if (!BitTest(Global_113386.f_10194.f_3856, 14))
			{
				if (Global_113126 == Global_113109)
				{
					unk_0x423A6008CEED5D6C(joaat("num_rndevents_completed"), Global_113109, 0);
					unk_0xCED9E32812D6C7C7(&(Global_113386.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113110 > 0)
	{
		if (Global_113127 == Global_113110)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113111 > 0)
	{
		if (Global_113128 == Global_113111)
		{
			fVar7 = 5f;
		}
	}
	Global_113386.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113126 > Global_113112 || Global_113126 == Global_113112)
	{
		iVar9 = Global_113112;
	}
	else
	{
		iVar9 = Global_113126;
	}
	unk_0x076A5661EF5ABEE4(joaat("num_missions_completed"), Global_113122, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_missions_available"), Global_113105, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_minigames_completed"), Global_113123, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_minigames_available"), Global_113106, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_oddjobs_completed"), Global_113124, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_oddjobs_available"), Global_113107, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndpeople_completed"), Global_113125, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndpeople_available"), Global_113108, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndevents_available"), Global_113112, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_misc_completed"), (Global_113128 + Global_113127), 1);
	unk_0x076A5661EF5ABEE4(joaat("num_misc_available"), (Global_113111 + Global_113110), 1);
	Global_113129 = (Global_113122 * 100 / Global_113105);
	Global_113131 = ((Global_113124 + Global_113123) * 100 / (Global_113107 + Global_113106));
	Global_113130 = ((Global_113125 + iVar9) * 100 / (Global_113108 + Global_113112));
	Global_113132 = ((Global_113127 + Global_113128) * 100 / (Global_113110 + Global_113111));
	unk_0xD9B28F1445FFCEE7(joaat("total_progress_made"), Global_113386.f_10194.f_3853, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_story_missions"), Global_113129, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_ambient_missions"), Global_113130, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_oddjobs"), Global_113131, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853))
	{
		func_98(13, unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853));
	}
	if (!unk_0x665245305CD9E866())
	{
		if (!Global_78319)
		{
			if (func_202() == 2 == 0 && !unk_0x9315DBF7D972F07A())
			{
				if (unk_0x47C86377AA337CBE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
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

int func_201(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_202()
{
	return Global_31959;
}

void func_203()
{
	if (!iLocal_575)
	{
		Global_113386.f_20035[iLocal_568]++;
		Global_113386.f_20035.f_62[iLocal_568] = Local_68.f_1;
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
			func_205(&Global_96909, 1);
			break;
		
		case 1:
			func_205(&Global_96911, 3);
			break;
		
		case 2:
			func_205(&Global_96915, 1);
			break;
		
		case 3:
			func_205(&Global_96917, 1);
			break;
		
		case 4:
			func_205(&Global_96919, 1);
			break;
		
		case 5:
			func_205(&Global_96921, 1);
			break;
		
		case 6:
			func_205(&Global_96923, 1);
			break;
		
		case 7:
			func_205(&Global_96925, 2);
			break;
		
		case 8:
			func_205(&Global_96928, 1);
			break;
		
		case 9:
			func_205(&Global_96930, 1);
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
			(*uParam0)[iVar0] = unk_0x320D1840B6DAA1CC();
		}
		iVar0++;
	}
}

void func_206(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x64E21045781AFBC9(unk_0xB6BA8B8E3D0B41C6(), 1, 0);
	}
	unk_0xEE61327A6ED2D0B8(1);
	func_209(0, 1, iParam2, 0, 0, 0, 0);
	if (bParam1)
	{
		unk_0xB60709BD0E075903(1);
		unk_0x72DB022C36FCEA24(1);
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
		unk_0x61481F9FBB1C7EDD(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x076A5661EF5ABEE4(iVar1, iVar0, 1);
	}
}

int func_208()
{
	if (unk_0x4DE6A646AFB7CF5C(unk_0x47E529DA87615548()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_209(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x85B547885D8F8B40(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 1);
		func_214(1);
		unk_0x1B7AAA85D46FE6FB();
		unk_0xA240F4C910B19938();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (unk_0xA3329B7A7520670E())
			{
				unk_0xD681CC2BC1084DB6(0);
			}
			if (!func_118())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_213(1, iParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_214(0);
		unk_0x45227777D3EBECE5();
		Global_63160 = 0;
		if (bParam1)
		{
			unk_0xA91EC7D49DF9F229();
		}
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 0);
		func_213(0, iParam3, iParam2, 0);
		if (unk_0x9315DBF7D972F07A())
		{
			if (((((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_211(unk_0x9E2D6C50374FCFA9())) && !func_133(unk_0x9E2D6C50374FCFA9(), 0)) && !func_210()) && !bParam4) && !bParam5)
			{
				unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
			}
		}
		else if (((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_211(unk_0x9E2D6C50374FCFA9())) && !bParam4) && !bParam5)
		{
			unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
		}
		Global_78317 = 0;
	}
}

bool func_210()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_36.f_18, 14);
}

int func_211(int iParam0)
{
	if (func_133(iParam0, 0))
	{
		return 1;
	}
	if (func_212())
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

bool func_212()
{
	return BitTest(Global_2621446, 3);
}

int func_213(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_214(int iParam0)
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

void func_215(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

int func_216(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20266.f_1 > 3)
		{
			if (BitTest(Global_8136, 14))
			{
				if (Global_20265 == 1)
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
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_20265 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_20266.f_1 > 3)
	{
		if (Global_20265 == 1)
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
	if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
	{
		if (unk_0x6D7EE245AD1E10B0(Local_68.f_2) == Local_68.f_185)
		{
			return 1;
		}
		else if (unk_0xD132EDDA78FF4A51(Local_68.f_2, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0xD132EDDA78FF4A51(Local_68.f_2, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0xD132EDDA78FF4A51(Local_68.f_2, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, 1, 0))
		{
			return 1;
		}
		else if (Local_68.f_199 != -1f)
		{
			if (unk_0xD132EDDA78FF4A51(Local_68.f_2, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_218()
{
	if (unk_0xF1EC2C71FD1371B8())
	{
		return 0;
	}
	if (unk_0xF09A4F413B0D30EB(0, 18) || unk_0xF09A4F413B0D30EB(2, 18))
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
	if (unk_0xE5965CDF24F93A9F(Local_68.f_0))
	{
		unk_0xA7E29842FA438ED6(Local_68.f_0, &iVar0, 1);
		if ((iLocal_60 == 1 && iLocal_622 == 2) && ((unk_0x51223AB40E2F620E(unk_0x9E2D6C50374FCFA9()) || func_232()) || func_231()))
		{
			unk_0x3C2A46BB06553CEE(unk_0x9E2D6C50374FCFA9());
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
				if ((func_21(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1) || (func_192(Local_68.f_2, &(Local_68.f_451)) && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))) && iVar0 != joaat("weapon_unarmed"))
				{
					func_226();
					unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
					iLocal_53 = 12;
					iLocal_52 = 3;
					iLocal_60 = 5;
					unk_0xCED9E32812D6C7C7(&Global_96292, 3);
					func_225();
				}
				if (func_1(Local_68.f_470, 8))
				{
					if (!func_1(Local_68.f_470, 32))
					{
						if (!unk_0xF68107C40359970C(Local_68.f_2) && func_1(Local_68.f_470, 4))
						{
							unk_0x49D97B076E3590AC(Local_68.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
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
					unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
					Local_68.f_2.f_11 = 1;
					func_203();
					iLocal_53 = 12;
					iLocal_52 = 3;
					iLocal_62 = 11;
					iLocal_60 = 3;
					unk_0xCED9E32812D6C7C7(&Global_96292, 3);
					func_225();
				}
				else if (func_21(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1))
				{
					unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
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
						if (!unk_0xF68107C40359970C(Local_68.f_2) && func_1(Local_68.f_470, 4))
						{
							unk_0x49D97B076E3590AC(Local_68.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
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
				if (!unk_0xB6F46ABD140050F1(unk_0xE2D3D51028F0428A()) && !unk_0xB6F46ABD140050F1(Local_68.f_2))
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
					if (unk_0xCE2C78E9FC0B01E3(Local_68.f_486) && !Local_68.f_467)
					{
						iLocal_53 = 33;
						Local_68.f_467 = 1;
					}
				}
			}
			if (iLocal_55 >= 1 && iLocal_55 < 7)
			{
				unk_0x3C2A46BB06553CEE(unk_0xB6BA8B8E3D0B41C6());
				if (func_222(Local_68.f_2, 0, 1, 0, 1, 1) || !unk_0xCE2C78E9FC0B01E3(Local_68.f_486))
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
			unk_0xB0550BC91B0159D6(&Global_96292, 3);
			if (!unk_0x32DCDA1B2F8A0694(Local_68.f_2))
			{
				func_7();
				iLocal_60 = 0;
			}
			break;
		
		case 7:
			if (!unk_0x32DCDA1B2F8A0694(Local_68.f_2))
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
				if (unk_0x32DCDA1B2F8A0694(Local_68.f_2))
				{
					func_7();
				}
				iLocal_53 = 23;
			}
			else if (func_41(&(Local_68.f_480)) > 10f)
			{
				if (!unk_0xF68107C40359970C(Local_68.f_2))
				{
					unk_0x7734082B0EDB0BE0(Local_68.f_2, unk_0xE2D3D51028F0428A(), 100f, -1, 0, 0);
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
	if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
	{
		unk_0x50274A7EACA3133A(Local_68.f_2, 0);
	}
}

void func_221()
{
	if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
	{
		unk_0xF30F15F203736DE4(Local_68.f_2, Local_68.f_0, -1, 0, 2);
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
			iLocal_46 = unk_0x0CF63873D754B965(iParam0);
			bLocal_45 = true;
		}
		iLocal_47 = unk_0x0CF63873D754B965(iParam0);
		iLocal_48 = (iLocal_46 - iLocal_47);
		iVar0 = unk_0x9993EF7FDBCDB632();
		if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
		{
			if (unk_0x0747E45CFF1F74AA(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_45)
		{
			if (unk_0x0747E45CFF1F74AA(iParam0, unk_0xE2D3D51028F0428A(), 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x0747E45CFF1F74AA(iParam0, unk_0xE2D3D51028F0428A(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x9993EF7FDBCDB632();
		if (!unk_0x55B23FE400FCEA6B(iVar1, 0))
		{
			if (unk_0x0747E45CFF1F74AA(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			if (unk_0x177106D5E97D1958(iParam0))
			{
				if (unk_0xBA67EB7A53262B5B(iParam0) == unk_0xE2D3D51028F0428A())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x7A6B8C262362C722(unk_0xE2D3D51028F0428A()))
		{
			if (unk_0x8F41785F110B0DA0(iParam0, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0x51223AB40E2F620E(unk_0x9E2D6C50374FCFA9()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x06FF19E64D0C2827(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xE573ACA59D8C5C18(iParam0))
		{
			return 1;
		}
	}
	if (func_223(unk_0xE2D3D51028F0428A(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x32DCDA1B2F8A0694(iParam0) && func_193(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0xD5C6B5E3B93A5EDC(iParam0, 0))
		{
			if (unk_0x72F6AE51B7E34865(unk_0xE2D3D51028F0428A(), unk_0xB3FF0049C1FD38EC(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x72F6AE51B7E34865(unk_0xE2D3D51028F0428A(), iParam0))
		{
			return 1;
		}
		if (!unk_0x55B23FE400FCEA6B(iParam1, 0))
		{
			if (unk_0x0747E45CFF1F74AA(iParam1, unk_0xE2D3D51028F0428A(), 1))
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
	
	unk_0xA7E29842FA438ED6(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0xE323E6755636A70E(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(iParam0, 1), unk_0x6B62510F212526DC(iParam1, 1)) < 2.5f)
			{
				if (unk_0x2E7F5417D4F4DD69(iParam0, iParam1, 180f))
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
	
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0) && func_302())
	{
		iVar3 = unk_0x46951D3186547C7A(unk_0xE2D3D51028F0428A(), &uVar0, -1);
		iVar4 = 0;
		while (iVar4 < iVar3)
		{
			if ((((uVar0[iVar4] != unk_0xE2D3D51028F0428A() && uVar0[iVar4] != Local_68.f_2) && !unk_0xF68107C40359970C(uVar0[iVar4])) && !unk_0xA6A089369417736E(uVar0[iVar4])) && !unk_0xCED7266BAB0BDC20(uVar0[iVar4], 0))
			{
				unk_0x2D58A6131679D82C(uVar0[iVar4], 1, 1);
				unk_0x7734082B0EDB0BE0(uVar0[iVar4], unk_0xE2D3D51028F0428A(), 100f, -1, 0, 0);
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
	
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0) && func_302())
	{
		iVar3 = unk_0x46951D3186547C7A(unk_0xE2D3D51028F0428A(), &uVar0, -1);
		iVar4 = 0;
		while (iVar4 < iVar3)
		{
			if ((uVar0[iVar4] != unk_0xE2D3D51028F0428A() && uVar0[iVar4] != Local_68.f_2) && !unk_0xA6A089369417736E(uVar0[iVar4]))
			{
				unk_0x2D58A6131679D82C(uVar0[iVar4], 1, 1);
				unk_0x7461D7C5BA953BC7(&uLocal_566);
				unk_0xA888F8CC04F25CC8(&uLocal_566);
				unk_0x402A537158A551BD(0, 5000);
				unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 100f, -1, 0, 0);
				unk_0xC963A45B50851768(uLocal_566);
				unk_0x8ACADA903FCAA42F(uVar0[iVar4], uLocal_566);
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
		if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
		{
			switch (iLocal_58)
			{
				case 1:
					iLocal_58 = 0;
					break;
				
				case 2:
					unk_0x49D97B076E3590AC(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_17, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				
				case 3:
					unk_0x49D97B076E3590AC(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_18, 8f, -4f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				
				case 4:
					unk_0x49D97B076E3590AC(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_19, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				
				case 5:
					unk_0x49D97B076E3590AC(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_20, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				
				case 6:
					iLocal_58 = 0;
					break;
				
				case 7:
					unk_0x49D97B076E3590AC(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_21, 8f, -2f, -1, 0, 0, 0, 0, 0);
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
				if (!unk_0xF68107C40359970C(Local_68.f_2) && unk_0x51B334B227EC8042(Local_68.f_2))
				{
					Local_68.f_2.f_14 = 1;
				}
			}
			if ((Local_68.f_2.f_13 && !unk_0xF68107C40359970C(Local_68.f_2)) && !iLocal_60 == 12)
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
	if ((unk_0x320D1840B6DAA1CC() - Local_68.f_2.f_10) > 5000)
	{
		unk_0x7461D7C5BA953BC7(&(Local_68.f_2.f_24));
		unk_0xA888F8CC04F25CC8(&(Local_68.f_2.f_24));
		unk_0x529D306014D3C29A(0, Local_68.f_0, 0);
		unk_0xF30F15F203736DE4(0, Local_68.f_0, -1, 0, 2);
		unk_0xC963A45B50851768(Local_68.f_2.f_24);
		unk_0x8ACADA903FCAA42F(Local_68.f_2, Local_68.f_2.f_24);
		Local_68.f_2.f_10 = unk_0x320D1840B6DAA1CC();
	}
}

void func_230()
{
	if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
	{
		unk_0xC89EA639A6F338A6(Local_68.f_2);
	}
}

int func_231()
{
	if (unk_0x42D790A6634DC8DC(Local_68.f_186, Local_68.f_189, Local_68.f_192, 1))
	{
		return 1;
	}
	return 0;
}

int func_232()
{
	if (unk_0x44808D06C0FF7D30(-1, Local_68.f_186, Local_68.f_189, Local_68.f_192))
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
				if (!unk_0xF68107C40359970C(Local_68.f_2))
				{
					unk_0x7734082B0EDB0BE0(Local_68.f_2, unk_0xE2D3D51028F0428A(), 100f, -1, 0, 0);
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
	
	if (!unk_0x55B23FE400FCEA6B(Local_68.f_0, 0))
	{
		if (func_235())
		{
			unk_0xA7E29842FA438ED6(Local_68.f_0, &iVar0, 1);
			if (iVar0 == joaat("weapon_petrolcan"))
			{
				if (unk_0xE323E6755636A70E(Local_68.f_0))
				{
					if (unk_0x2E7F5417D4F4DD69(Local_68.f_2, Local_68.f_0, 180f))
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
	if (!unk_0x55B23FE400FCEA6B(Local_68.f_0, 0))
	{
		if (unk_0xD132EDDA78FF4A51(Local_68.f_0, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0))
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
		if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
		{
			if (unk_0x51B334B227EC8042(Local_68.f_2))
			{
				unk_0x7734082B0EDB0BE0(Local_68.f_2, Local_68.f_0, 100f, -1, 0, 0);
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
				if (unk_0xCE2C78E9FC0B01E3(Local_68.f_486))
				{
					if (unk_0x54DE1614490C2A83(Local_68.f_486) > 0.876f)
					{
						iLocal_57 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_68.f_486 >= 0)
			{
				if (unk_0xCE2C78E9FC0B01E3(Local_68.f_486))
				{
					if (unk_0x54DE1614490C2A83(Local_68.f_486) > 0.894f || (unk_0x54DE1614490C2A83(Local_68.f_486) > 0.871f && unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(Local_68.f_28, 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) < 1f))
					{
						iLocal_57 = 3;
					}
				}
			}
			break;
		
		case 3:
			func_16(1, 0);
			func_238(0);
			unk_0x8175B06ED630A82A(Local_68.f_28, 0, 0);
			iLocal_57 = 5;
			break;
		
		case 4:
			func_16(1, 0);
			func_238(1);
			unk_0x1C2ED929474DC6FE(Local_68.f_28, 0, 0);
			iLocal_57 = 5;
			break;
		
		case 5:
			if (unk_0x099CAD293190F449(Local_68.f_28, unk_0xE2D3D51028F0428A()))
			{
				func_207(func_103(), 1, iLocal_569, 0, 0);
				unk_0x1C2ED929474DC6FE(Local_68.f_28, 0, 0);
				if (unk_0x12DD4A0B247D9B4D(Local_68.f_28.f_2))
				{
					unk_0xFFD8EB5462B07B59(&(Local_68.f_28.f_2));
				}
				if (iLocal_62 != 12)
				{
					iLocal_62 = 12;
				}
				func_198(297, 0, 0);
				Local_68.f_468 = 1;
				Local_68.f_28.f_6 = unk_0xA9ADCC8D104AA552();
				unk_0x91DFC8F68F6D9B05(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
				func_13(&(Local_68.f_28.f_15));
				iLocal_57 = 6;
			}
			else if (!unk_0x55B23FE400FCEA6B(Local_68.f_28, 0) && unk_0x2B5F4FBAF644BEC8(Local_68.f_28))
			{
			}
			break;
		
		case 6:
			if (func_9(&(Local_68.f_28.f_15)) > 2.5f)
			{
				if (unk_0xE5965CDF24F93A9F(Local_68.f_28) && unk_0x099CAD293190F449(Local_68.f_28, unk_0xE2D3D51028F0428A()))
				{
					unk_0xE6451C2F193342C7(unk_0xE2D3D51028F0428A(), 1, 1);
					unk_0x4BDA5AFD88C085EB(&(Local_68.f_28));
				}
				iLocal_57 = 7;
			}
			break;
	}
}

void func_238(bool bParam0)
{
	Local_68.f_28.f_3 = 0;
	unk_0xCED9E32812D6C7C7(&(Local_68.f_28.f_3), 3);
	unk_0xCED9E32812D6C7C7(&(Local_68.f_28.f_3), 4);
	if (!bParam0)
	{
		iLocal_569 = unk_0x5853B15F78E1A265(Local_68.f_28.f_4, Local_68.f_28.f_5);
		if (!unk_0x12DD4A0B247D9B4D(Local_68.f_28.f_2))
		{
			Local_68.f_28.f_2 = func_241(Local_68.f_28);
			unk_0xA582EE8380437B1B(Local_68.f_28.f_2, 2);
		}
		unk_0x1092ED0CC7E5A2F5(Local_68.f_28, -0.2f, 1);
	}
	else
	{
		iLocal_569 = unk_0x5853B15F78E1A265(50, Local_68.f_28.f_4);
		Local_68.f_28.f_1 = unk_0x1CD347D2BD906560(joaat("pickup_money_variable"), unk_0x6B62510F212526DC(Local_68.f_28, 1), Local_68.f_28.f_3, iLocal_569, 1, 0);
		if (!unk_0x12DD4A0B247D9B4D(Local_68.f_28.f_2))
		{
			Local_68.f_28.f_2 = func_239(Local_68.f_28.f_1);
		}
	}
	Local_68.f_28.f_14 = 1;
}

int func_239(var uParam0)
{
	var uVar0;
	
	if (!unk_0x2791155FB0769FE5(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x455B7FFC90053189(uParam0);
	unk_0x293A9399E902A33B(uVar0, func_240(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
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
	
	if (!unk_0xE5965CDF24F93A9F(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xEFD6451BF0F3352F(iParam0);
	if (unk_0x04D9F44466CBF3CA(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_240(unk_0x9315DBF7D972F07A(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD809204F14EF9B68(uVar0, iParam1);
		}
		else
		{
			unk_0xA582EE8380437B1B(uVar0, 2);
		}
	}
	else if (unk_0x9044EDB8A7BF67B4(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_240(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
		unk_0xD809204F14EF9B68(uVar0, iParam1);
	}
	else if (unk_0x0086095F1731DE17(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_240(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
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
					Local_68.f_46.f_39 = unk_0x320D1840B6DAA1CC();
					iLocal_61 = 3;
				}
				break;
			
			case 3:
				if (unk_0x320D1840B6DAA1CC() - Local_68.f_46.f_39) > unk_0x5853B15F78E1A265(1000, 3000)
				{
					if (unk_0x55A0C756C4A8220C(Local_68.f_46.f_4[0], 0))
					{
						unk_0xBF0DDDDACD98C554(Local_68.f_46.f_4[0], 1);
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
					if ((((unk_0xF68107C40359970C(Local_68.f_46[iVar0]) || (!unk_0x55B23FE400FCEA6B(Local_68.f_46[iVar0], 0) && unk_0xEEF1A3C0E56FC8FF(Local_68.f_46[iVar0], 0, 2))) || unk_0xF68107C40359970C(Local_68.f_2)) || (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0) && unk_0xEEF1A3C0E56FC8FF(Local_68.f_2, 0, 2))) || func_21(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1))
					{
						func_16(2, 0);
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!unk_0xF68107C40359970C(Local_68.f_46[iVar1]))
							{
								unk_0xC1A74225341AA9FB(Local_68.f_46[iVar1], unk_0xE2D3D51028F0428A(), 0, 16);
								unk_0x50274A7EACA3133A(Local_68.f_46[iVar1], 0);
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
		if (!unk_0x55B23FE400FCEA6B(Local_68.f_46[iVar0], 0))
		{
			unk_0x50274A7EACA3133A(Local_68.f_46[iVar0], 0);
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
		if (!unk_0x55B23FE400FCEA6B(Local_68.f_46[iVar0], 0))
		{
			if (!unk_0xD5C6B5E3B93A5EDC(Local_68.f_46[iVar0], 0))
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
	
	if (!unk_0x55B23FE400FCEA6B(Local_68.f_0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_46[iVar0], 0))
			{
				if (!unk_0x4D21C9FB671ED18F(Local_68.f_46[iVar0]))
				{
					return 1;
				}
			}
			if (!unk_0x55B23FE400FCEA6B(Local_68.f_46.f_4[iVar0], 0))
			{
				if (!unk_0x4D21C9FB671ED18F(Local_68.f_46.f_4[iVar0]))
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
		Local_68.f_46[iVar0] = unk_0xA8D58C3AADA2C41C(6, Local_68.f_46.f_26, Local_68.f_46.f_8[iVar0 /*3*/], Local_68.f_46.f_18[iVar0], 1, 1);
		unk_0x2D58A6131679D82C(Local_68.f_46[iVar0], 1, 0);
		unk_0x50274A7EACA3133A(Local_68.f_46[iVar0], 1);
		Local_68.f_46.f_4[iVar0] = unk_0xBA715A7BEBA5A1F9(Local_68.f_46.f_27, Local_68.f_46.f_8[iVar0 /*3*/], Local_68.f_46.f_18[iVar0], 1, 1, 0);
		unk_0x2D58A6131679D82C(Local_68.f_46.f_4[iVar0], 1, 0);
		if (!(unk_0x55B23FE400FCEA6B(Local_68.f_46[iVar0], 0) && unk_0x55B23FE400FCEA6B(Local_68.f_46.f_4[iVar0], 0)))
		{
			unk_0xA9F390242F9EB2E1(Local_68.f_46[iVar0], Local_68.f_46.f_4[iVar0], -1);
			unk_0x9521FB98DB6DDF50(Local_68.f_46[iVar0], joaat("weapon_pistol"), 99, 0, 1);
		}
		unk_0xA888F8CC04F25CC8(&(Local_68.f_46.f_35[iVar0]));
		unk_0x3B8F94419979A0B1(0, Local_68.f_46.f_4[iVar0], Local_68.f_46.f_22, (unk_0x0BEA3E6C636CAE2B(Local_68.f_46.f_4[iVar0]) - 8f), 1, Local_68.f_46.f_27, 786981, Local_68.f_46.f_25, -1f);
		unk_0xAB7639D658BBCCEE(0, 0, 0);
		unk_0x636B3584208A6D73(0, Local_68.f_0, -1, 0);
		unk_0xC963A45B50851768(Local_68.f_46.f_35[iVar0]);
		unk_0x8ACADA903FCAA42F(Local_68.f_46[iVar0], Local_68.f_46.f_35[iVar0]);
		iVar0++;
	}
}

void func_248()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(Local_68.f_0))
	{
		unk_0xA7E29842FA438ED6(Local_68.f_0, &iVar0, 1);
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
			if (unk_0x207D53F9E0190691(Local_68.f_0) < 0.1f && !func_250())
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
					if (!unk_0xF68107C40359970C(Local_68.f_46[iVar1]))
					{
						unk_0xC1A74225341AA9FB(Local_68.f_46[iVar1], unk_0xE2D3D51028F0428A(), 0, 16);
						unk_0x50274A7EACA3133A(Local_68.f_46[iVar1], 0);
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
		if (!unk_0x55B23FE400FCEA6B(Local_68.f_46[iVar0], 0))
		{
			if (!unk_0x64152DD440E37F50(Local_68.f_46[iVar0]))
			{
				unk_0x03A927199A2DFE46(Local_68.f_46[iVar0]);
				unk_0x463D4F9C4826A59B(Local_68.f_46[iVar0], Local_68.f_0);
			}
		}
		iVar0++;
	}
}

int func_250()
{
	if (!unk_0x55B23FE400FCEA6B(Local_68.f_0, 0))
	{
		if (unk_0xD132EDDA78FF4A51(Local_68.f_0, Local_68.f_46.f_28, Local_68.f_46.f_31, Local_68.f_46.f_34, 0, 1, 0))
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
	
	if (unk_0xE5965CDF24F93A9F(Local_68.f_0))
	{
		unk_0xA7E29842FA438ED6(Local_68.f_0, &iVar0, 1);
	}
	else
	{
		return 0;
	}
	if (!func_1(Local_68.f_470, 128))
	{
		if ((unk_0x32DCDA1B2F8A0694(Local_68.f_2) || (unk_0x0747E45CFF1F74AA(Local_68.f_2, Local_68.f_0, 1) && iVar0 == joaat("weapon_unarmed"))) || func_253(Local_68.f_2, Local_68.f_2.f_1, 1) > 1.15f)
		{
			if (unk_0x32DCDA1B2F8A0694(Local_68.f_2))
			{
			}
			if (unk_0x0747E45CFF1F74AA(Local_68.f_2, Local_68.f_0, 1) && iVar0 == joaat("weapon_unarmed"))
			{
			}
			if (func_253(Local_68.f_2, Local_68.f_2.f_1, 1) > 1.15f)
			{
			}
			if (!unk_0x8F41785F110B0DA0(Local_68.f_2, Local_68.f_2.f_1, 0.35f, 0.35f, 1f, 0, 1, 0))
			{
				Var1 = { unk_0x6B62510F212526DC(Local_68.f_2, 1) };
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
			unk_0x3C2A46BB06553CEE(unk_0x9E2D6C50374FCFA9());
			iLocal_67 = 1;
			break;
	}
}

void func_255()
{
	func_259();
	func_258();
	func_257();
	if (unk_0xBCC73B466E2B2350(Local_68.f_185))
	{
		unk_0xEE4B783969C74BA1(Local_68.f_2, Local_68.f_185);
		unk_0xEE4B783969C74BA1(Local_68.f_28, Local_68.f_185);
		if (!bLocal_574)
		{
			unk_0xEE4B783969C74BA1(Local_68.f_96.f_1, Local_68.f_185);
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
	
	iVar0 = unk_0x5853B15F78E1A265(1, 11);
	iVar1 = unk_0x5853B15F78E1A265(1, 5);
	iVar2 = unk_0x5853B15F78E1A265(1, 5);
	iVar3 = unk_0x5853B15F78E1A265(1, 3);
	iVar4 = unk_0x5853B15F78E1A265(1, 6);
	iVar5 = unk_0x5853B15F78E1A265(1, 4);
	iVar6 = unk_0x5853B15F78E1A265(1, 5);
	iVar7 = unk_0x5853B15F78E1A265(1, 4);
	iVar8 = unk_0x5853B15F78E1A265(1, 4);
	iVar9 = unk_0x5853B15F78E1A265(1, 5);
	iVar10 = unk_0x5853B15F78E1A265(1, 5);
	iVar11 = unk_0x5853B15F78E1A265(1, 5);
	iVar12 = unk_0x5853B15F78E1A265(1, 5);
	iVar13 = unk_0x5853B15F78E1A265(1, 9);
	iVar14 = unk_0x5853B15F78E1A265(1, 3);
	iVar15 = unk_0x5853B15F78E1A265(1, 5);
	iVar16 = unk_0x5853B15F78E1A265(1, 3);
	iVar17 = unk_0x5853B15F78E1A265(1, 6);
	iVar18 = unk_0x5853B15F78E1A265(1, 5);
	iVar19 = unk_0x5853B15F78E1A265(1, 4);
	iVar20 = unk_0x5853B15F78E1A265(1, 4);
	iVar21 = unk_0x5853B15F78E1A265(1, 4);
	iVar22 = unk_0x5853B15F78E1A265(1, 6);
	iVar23 = unk_0x5853B15F78E1A265(1, 6);
	iVar24 = unk_0x5853B15F78E1A265(1, 6);
	iVar25 = unk_0x5853B15F78E1A265(1, 6);
	iVar26 = unk_0x5853B15F78E1A265(1, 4);
	iVar27 = unk_0x5853B15F78E1A265(1, 3);
	iVar28 = unk_0x5853B15F78E1A265(1, 4);
	iVar29 = unk_0x5853B15F78E1A265(1, 4);
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
	unk_0xE87A5B1B96B0EC6F(Local_68.f_486.f_6, 0.5f, joaat("prop_till_01"), 1);
	unk_0xE87A5B1B96B0EC6F(Local_68.f_486.f_6, 0.5f, joaat("prop_till_02"), 1);
	unk_0xE87A5B1B96B0EC6F(Local_68.f_486.f_6, 0.5f, joaat("prop_till_03"), 1);
	Local_68.f_96.f_1 = unk_0x0E536D72AB30F4C8(Local_68.f_96, Local_68.f_486.f_6, 1, 1, 0);
	unk_0xBBF86885619695CE(Local_68.f_96.f_1, Local_68.f_96.f_5);
	unk_0x5C65DDDC219B3AA5(Local_68.f_96.f_1, 1);
}

void func_258()
{
	Local_68.f_28 = unk_0x9431D28BFC30340B(joaat("pickup_portable_crate_unfixed"), Local_68.f_28.f_7, 0, Local_68.f_28.f_13);
	unk_0x8CE3D365F064F69E(Local_68.f_28, Local_68.f_28.f_10, 2, 1);
	unk_0x1C2ED929474DC6FE(Local_68.f_28, 0, 0);
	unk_0x8175B06ED630A82A(Local_68.f_28, 1, 0);
	Local_68.f_28.f_14 = 0;
}

void func_259()
{
	var uVar0;
	var uVar1;
	
	Local_68.f_2 = unk_0xA8D58C3AADA2C41C(4, Local_68.f_2.f_5, Local_68.f_2.f_1, Local_68.f_2.f_4, 1, 1);
	func_265(iLocal_568, &uVar1, &uVar0);
	unk_0xE3752B10DC995E95(Local_68.f_2, 0, uVar1, uVar0, 0);
	func_264(&uVar1, &uVar0);
	unk_0xE3752B10DC995E95(Local_68.f_2, 2, uVar1, uVar0, 0);
	func_263(&uVar1, &uVar0);
	unk_0xE3752B10DC995E95(Local_68.f_2, 3, uVar1, uVar0, 0);
	func_262(&uVar1, &uVar0);
	unk_0xE3752B10DC995E95(Local_68.f_2, 4, uVar1, uVar0, 0);
	func_261(&uVar1, &uVar0);
	unk_0xE3752B10DC995E95(Local_68.f_2, 8, uVar1, uVar0, 0);
	unk_0x50274A7EACA3133A(Local_68.f_2, 1);
	if (Local_68.f_2.f_12)
	{
		func_260();
	}
}

void func_260()
{
	if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
	{
	}
}

void func_261(var uParam0, var uParam1)
{
	*uParam0 = unk_0x5853B15F78E1A265(0, 2);
	if (*uParam0 == 0)
	{
		*uParam1 = unk_0x5853B15F78E1A265(0, 2);
	}
	else
	{
		*uParam1 = 0;
	}
}

void func_262(var uParam0, var uParam1)
{
	*uParam0 = 0;
	*uParam1 = unk_0x5853B15F78E1A265(0, 2);
}

void func_263(var uParam0, var uParam1)
{
	*uParam0 = unk_0x5853B15F78E1A265(0, 2);
	*uParam1 = unk_0x5853B15F78E1A265(0, 3);
}

void func_264(var uParam0, var uParam1)
{
	*uParam0 = unk_0x5853B15F78E1A265(0, 3);
	if (*uParam0 > 0)
	{
		*uParam1 = unk_0x5853B15F78E1A265(0, 2);
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
			*uParam2 = unk_0x5853B15F78E1A265(0, 3);
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
			*uParam2 = unk_0x5853B15F78E1A265(0, 3);
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
		if (!unk_0x6F940C2636C076AD(Local_68.f_2.f_15))
		{
			return 0;
		}
	}
	if (!unk_0xEA02B859DE237081(Local_68.f_185))
	{
		return 0;
	}
	unk_0x3E397AA8C35A7536(0);
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
					return unk_0x0152AA00FA3130F1(uParam2);
					break;
				
				case 1:
					return unk_0x6F940C2636C076AD(sParam1);
					break;
				
				case 2:
					return unk_0xA7A5D14F877C9047(sParam1);
					break;
				
				case 3:
					return unk_0x9D4AFED2949F7082(sParam1);
					break;
				
				case 4:
					return unk_0xF777CAA43F4B281A(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xBD3CEA9CD36E271E(sParam1);
					break;
				
				case 6:
					return unk_0x70F555A7CCF10659(sParam1, BitTest(uParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x095032C22DEE1587(iParam2);
					break;
				
				case 8:
					return unk_0x01896B71C5AC966E(iParam2);
					break;
				
				case 9:
					return unk_0x51B6C2EF8DBE2E1A();
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
	unk_0x3E397AA8C35A7536(1);
	if (!bLocal_574)
	{
		unk_0x8FB472886552D737(Local_68.f_2.f_15);
		Local_584.f_32 = unk_0x8142A6539DDC180F();
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
			unk_0xCED9E32812D6C7C7(uParam0[iVar0 /*2*/], bParam1);
			unk_0xCED9E32812D6C7C7(uParam0[iVar0 /*2*/], 30);
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
			Local_68.f_185 = unk_0x63AC7EFB770FCB6F(Var0, "v_gasstation");
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			Local_68.f_185 = unk_0x63AC7EFB770FCB6F(Var0, "v_gen_liquor");
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
			Local_68.f_185 = unk_0x63AC7EFB770FCB6F(Var0, "v_shop_247");
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
	
	if (!unk_0x55B23FE400FCEA6B(Local_68.f_0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(Local_68.f_0, 1) };
		if (unk_0x987A5F1E1A67E3C0(Var0, Local_68.f_181, 1) < 50f)
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
		unk_0xF1A23B343DFEDFD0(Local_68.f_46.f_26);
	}
	if (Local_68.f_46.f_27 != 0)
	{
		unk_0xF1A23B343DFEDFD0(Local_68.f_46.f_27);
	}
	if (!unk_0xACC32B78196FBC2A(Local_68.f_2.f_15))
	{
		unk_0xAFC1FBF3F6AE7B9A(Local_68.f_2.f_15);
	}
}

int func_284()
{
	if (Global_113386.f_9085)
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
	if (!unk_0xC92F9F18E020B461())
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
	if (Global_31962)
	{
		unk_0x3410421C60BF7143(1);
		unk_0xAFBDF6A5E54114C1();
	}
	return 0;
}

bool func_285()
{
	return Global_113104 > 0;
}

int func_286()
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_287()
{
	struct<3> Var0;
	float fVar3;
	
	if (!unk_0x55B23FE400FCEA6B(Local_68.f_0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(Local_68.f_0, 1) };
		fVar3 = unk_0x987A5F1E1A67E3C0(Var0, Local_68.f_181, 1);
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
	return Global_113386.f_9085.f_99.f_58[iParam0];
}

void func_289(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0x8142A6539DDC180F() >= (uParam0->f_32 + uParam0->f_33) || BitTest(Global_100441.f_20, 2)) || BitTest(Global_100441.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (BitTest((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*2*/], 29))
					{
						func_290(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0x8142A6539DDC180F();
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
				unk_0xD69A0C3662175E68(uParam2);
				break;
			
			case 1:
				unk_0x8FB472886552D737(sParam1);
				break;
			
			case 2:
				unk_0x511A0AF0E8B0BF9A(sParam1);
				break;
			
			case 3:
				unk_0xA9911C122B3210B5(sParam1, BitTest(*uParam0, 28));
				break;
			
			case 4:
				unk_0xB018BAA4ED9AA217(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x70F260358D1A42C4(sParam1);
				break;
			
			case 6:
				unk_0x70F555A7CCF10659(sParam1, BitTest(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x251C5C1DDC74D01D(iParam2);
				break;
			
			case 8:
				unk_0x249A0D3C5714BCF4(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x9E63031C188793E1();
				break;
			
			default:
				break;
		}
		unk_0xCED9E32812D6C7C7(uParam0, 29);
	}
}

int func_292()
{
	int iVar0;
	
	if (Local_68.f_1 != Global_113386.f_20035.f_62[iLocal_568])
	{
		return 1;
	}
	iVar0 = (unk_0xD52BD97E61483713() - Global_113386.f_20035.f_42[iLocal_568]);
	iLocal_573 = 2;
	if (iVar0 < 0)
	{
		iVar0 = unk_0xD52BD97E61483713() + 31;
		iVar0 = (iVar0 - Global_113386.f_20035.f_42[iLocal_568]);
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
			*uParam2 = { unk_0x6DB7FBD602C51670(func_296(iParam0), uParam1, 5.95155f, -8.251f, -0.2377f) };
			*uParam3 = { unk_0x6DB7FBD602C51670(func_296(iParam0), fParam1, -12.7268f, 7.21174f, 2.93854f) };
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam2 = { unk_0x6DB7FBD602C51670(func_296(iParam0), fParam1, -6.52428f, -8.8002f, -0.657398f) };
			*uParam3 = { unk_0x6DB7FBD602C51670(func_296(iParam0), fParam1, 3.54253f, 16.8382f, 3.20474f) };
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
			*uParam2 = { unk_0x6DB7FBD602C51670(func_296(iParam0), fParam1, -4.55363f, -7.52366f, -0.75f) };
			*uParam3 = { unk_0x6DB7FBD602C51670(func_296(iParam0), fParam1, 11.8868f, 7.00122f, 3.9688f) };
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
	
	iVar0 = (unk_0x09FC827691DACE59() - Global_113386.f_20035.f_21[iLocal_568]);
	iVar1 = (unk_0xD52BD97E61483713() - Global_113386.f_20035.f_42[iLocal_568]);
	iLocal_572 = 2;
	if (iVar0 < 0)
	{
		iVar0 = unk_0x09FC827691DACE59() + 24;
		iVar0 = (iVar0 - Global_113386.f_20035.f_21[iLocal_568]);
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
		if (!unk_0xEC32121F2E3875C8(uVar1[iVar0]))
		{
			unk_0x5DD86AC785D8E188(uVar1[0], uVar4[0], Var7[0 /*3*/], 0, 0, 0);
			if (uVar1[1] != -1)
			{
				unk_0x5DD86AC785D8E188(uVar1[1], uVar4[1], Var7[1 /*3*/], 0, 0, 0);
			}
		}
		func_293(&(Local_68.f_470), 64);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xEC32121F2E3875C8(uVar1[iVar0]))
		{
			if (bParam0)
			{
				if (unk_0xA570D693C4A2B421(uVar1[iVar0]) != 1)
				{
					unk_0x7E15597AA5F53F9A(uVar1[iVar0], 1, 0, 0);
				}
			}
			else if (unk_0xA570D693C4A2B421(uVar1[iVar0]) != 0)
			{
				unk_0x7E15597AA5F53F9A(uVar1[iVar0], 0, 0, 0);
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
			(*uParam1)[0] = unk_0x2E87280918B16506("eCRIM_HUP_GAS_2A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -713.07f, -916.54f, 19.37f };
			(*uParam1)[1] = unk_0x2E87280918B16506("eCRIM_HUP_GAS_2B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -710.47f, -916.54f, 19.37f };
			break;
		
		case 1:
			(*uParam1)[0] = unk_0x2E87280918B16506("eCRIM_HUP_GAS_3A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -53.96f, -1755.72f, 29.57f };
			(*uParam1)[1] = unk_0x2E87280918B16506("eCRIM_HUP_GAS_3B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -51.97f, -1757.39f, 29.57f };
			break;
		
		case 2:
			(*uParam1)[0] = unk_0x2E87280918B16506("eCRIM_HUP_GAS_4A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1158.36f, -326.82f, 69.36f };
			(*uParam1)[1] = unk_0x2E87280918B16506("eCRIM_HUP_GAS_4B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1160.93f, -326.36f, 69.36f };
			break;
		
		case 3:
			(*uParam1)[0] = unk_0x2E87280918B16506("eCRIM_HUP_GAS_1A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1699.66f, 4930.28f, 42.21f };
			(*uParam1)[1] = unk_0x2E87280918B16506("eCRIM_HUP_GAS_1B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1698.17f, 4928.15f, 42.21f };
			break;
		
		case 4:
			(*uParam1)[0] = unk_0x2E87280918B16506("eCRIM_HUP_GAS_5A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -1823.28f, 787.37f, 138.36f };
			(*uParam1)[1] = unk_0x2E87280918B16506("eCRIM_HUP_GAS_5B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -1821.37f, 789.13f, 138.31f };
			break;
		
		case 5:
			(*uParam1)[0] = unk_0x2E87280918B16506("eCRIM_HUP_LIQUOR_1A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { 1167.13f, 2703.75f, 38.3f };
			(*uParam1)[1] = -1;
			break;
		
		case 6:
			(*uParam1)[0] = unk_0x2E87280918B16506("eCRIM_HUP_LIQUOR_2A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -2973.53f, 390.14f, 15.19f };
			(*uParam1)[1] = -1;
			break;
		
		case 7:
			(*uParam1)[0] = unk_0x2E87280918B16506("eCRIM_HUP_LIQUOR_3A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -1226.89f, -903.12f, 12.47f };
			(*uParam1)[1] = -1;
			break;
		
		case 8:
			(*uParam1)[0] = unk_0x2E87280918B16506("eCRIM_HUP_LIQUOR_4A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { 1141.04f, -980.32f, 46.56f };
			(*uParam1)[1] = -1;
			break;
		
		case 9:
			(*uParam1)[0] = unk_0x2E87280918B16506("eCRIM_HUP_LIQUOR_5A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -1490.41f, -383.85f, 40.31f };
			(*uParam1)[1] = -1;
			break;
		
		case 10:
			(*uParam1)[0] = unk_0x2E87280918B16506("eCRIM_HUP_SHOP247_3A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3240.13f, 1003.16f, 12.98f };
			(*uParam1)[1] = unk_0x2E87280918B16506("eCRIM_HUP_SHOP247_3B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3239.9f, 1005.75f, 12.98f };
			break;
		
		case 11:
			(*uParam1)[0] = unk_0x2E87280918B16506("eCRIM_HUP_SHOP247_2A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3038.22f, 588.29f, 8.06f };
			(*uParam1)[1] = unk_0x2E87280918B16506("eCRIM_HUP_SHOP247_2B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3039.01f, 590.76f, 8.06f };
			break;
		
		case 12:
			(*uParam1)[0] = unk_0x2E87280918B16506("eCRIM_HUP_SHOP247_4A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 545.5f, 2672.75f, 42.31f };
			(*uParam1)[1] = unk_0x2E87280918B16506("eCRIM_HUP_SHOP247_4B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 542.93f, 2672.41f, 42.31f };
			break;
		
		case 13:
			(*uParam1)[0] = unk_0x2E87280918B16506("eCRIM_HUP_SHOP247_5A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2559.2f, 384.09f, 108.77f };
			(*uParam1)[1] = unk_0x2E87280918B16506("eCRIM_HUP_SHOP247_5B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2559.3f, 386.69f, 108.77f };
			break;
		
		case 14:
			(*uParam1)[0] = unk_0x2E87280918B16506("eCRIM_HUP_SHOP247_6A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2681.29f, 3281.43f, 55.39f };
			(*uParam1)[1] = unk_0x2E87280918B16506("eCRIM_HUP_SHOP247_6B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2682.56f, 3283.7f, 55.39f };
			break;
		
		case 15:
			(*uParam1)[0] = unk_0x2E87280918B16506("eCRIM_HUP_SHOP247_7A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1730.03f, 6412.07f, 35.19f };
			(*uParam1)[1] = unk_0x2E87280918B16506("eCRIM_HUP_SHOP247_7B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1732.36f, 6410.92f, 35.19f };
			break;
		
		case 16:
			(*uParam1)[0] = unk_0x2E87280918B16506("eCRIM_HUP_SHOP247_8A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1963.92f, 3740.08f, 32.49f };
			(*uParam1)[1] = unk_0x2E87280918B16506("eCRIM_HUP_SHOP247_8B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1966.17f, 3741.38f, 32.49f };
			break;
		
		case 17:
			(*uParam1)[0] = unk_0x2E87280918B16506("eCRIM_HUP_SHOP247_9A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 27.82f, -1349.17f, 29.65f };
			(*uParam1)[1] = unk_0x2E87280918B16506("eCRIM_HUP_SHOP247_9B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 30.42f, -1349.17f, 29.65f };
			break;
		
		case 18:
			(*uParam1)[0] = unk_0x2E87280918B16506("eCRIM_HUP_SHOP247_10A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 375.35f, 323.8f, 103.72f };
			(*uParam1)[1] = unk_0x2E87280918B16506("eCRIM_HUP_SHOP247_10B");
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
	if (!unk_0x55B23FE400FCEA6B(Local_68.f_0, 0))
	{
		if (unk_0xD132EDDA78FF4A51(Local_68.f_0, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0xD132EDDA78FF4A51(Local_68.f_0, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0xD132EDDA78FF4A51(Local_68.f_0, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, 1, 0))
		{
			return 1;
		}
		else if (Local_68.f_199 != -1f)
		{
			if (unk_0xD132EDDA78FF4A51(Local_68.f_0, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_303()
{
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x5CC952A51A751C4C() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_304()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
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
	Local_68.f_0 = unk_0xE2D3D51028F0428A();
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
	*uParam3 = { unk_0x6DB7FBD602C51670(*uParam1, uParam2->f_2, -0.668213f, 0.85762f, 0.0181999f) };
	*uParam4 = (180f + uParam2->f_2);
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam6 = { unk_0x6DB7FBD602C51670(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.088f), -0.428174f) };
			*uParam11 = 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam6 = { unk_0x6DB7FBD602C51670(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.033f), -0.398174f) };
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
			*uParam6 = { unk_0x6DB7FBD602C51670(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.077f), -0.378174f) };
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
		if (Global_113386.f_20035.f_41 > 3)
		{
			if (iLocal_570 == 9)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = unk_0x5853B15F78E1A265(0, 5);
			}
			if (iVar0 < 1)
			{
				Local_68.f_464 = 1;
				Global_113386.f_20035.f_41 = 0;
			}
			else
			{
				Local_68.f_464 = 0;
				Global_113386.f_20035.f_41++;
			}
		}
		else
		{
			Global_113386.f_20035.f_41++;
		}
	}
	else
	{
		Global_113386.f_20035.f_41++;
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
			iVar0 = unk_0x5853B15F78E1A265(0, 10);
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
			iVar0 = unk_0x5853B15F78E1A265(0, 7);
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
		iVar0 = (iVar0 + Global_113386.f_20035[iVar1]);
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
	return Global_43052 == iParam0;
}

int func_317(int iParam0)
{
	if (Global_43052 == 15)
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
	return func_319(iParam0, Global_43052);
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
	if (((iLocal_65 == 1 || iLocal_65 == 2) || iLocal_624 == 7) || (unk_0x55B23FE400FCEA6B(Local_68.f_2, 0) && iLocal_67 == 1))
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
		if (unk_0x55B23FE400FCEA6B(Local_68.f_2, 0) && iLocal_67 == 1)
		{
		}
		Global_113386.f_20035.f_21[iLocal_568] = unk_0x09FC827691DACE59();
		Global_113386.f_20035.f_42[iLocal_568] = unk_0xD52BD97E61483713();
	}
	if ((unk_0x20E4972CBF3DBE1B() && func_331()) && Local_68.f_468)
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
		unk_0xC0F70A3CDEC87ECE(5);
	}
	unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 0);
	unk_0x7BACBB4C6A7B18B7(uLocal_567, 0);
	func_29("SHR_HOLDUP_1", 1);
	func_29("SHR_SNK_TUT", 1);
	if ((func_28("SHR_MENU") || func_28("SHR_HOLDUP_1")) || func_28("SHR_SNK_TUT"))
	{
		unk_0x3410421C60BF7143(1);
	}
	if (func_1(Local_68.f_470, 1024))
	{
		if ((unk_0xE5965CDF24F93A9F(uLocal_618[0]) && unk_0xE5965CDF24F93A9F(uLocal_618[1])) && unk_0xE5965CDF24F93A9F(uLocal_618[2]))
		{
			unk_0x4BDA5AFD88C085EB(&(uLocal_618[0]));
			unk_0x4BDA5AFD88C085EB(&(uLocal_618[1]));
			unk_0x4BDA5AFD88C085EB(&(uLocal_618[2]));
		}
	}
	if (iLocal_623 == 2)
	{
		unk_0xAFC1FBF3F6AE7B9A(Local_68.f_486.f_1);
	}
	func_321(&Local_584, 0);
	unk_0xAFBDF6A5E54114C1();
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
				unk_0xF1A23B343DFEDFD0(uParam2);
				break;
			
			case 1:
				unk_0xAFC1FBF3F6AE7B9A(sParam1);
				break;
			
			case 2:
				unk_0x840DCE5F5F53D8E0(sParam1);
				break;
			
			case 3:
				unk_0x861D35D42CFD2991(sParam1);
				break;
			
			case 4:
				unk_0xA72858C94E70296C(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x10F7BFE3A88CB99B(sParam1);
				break;
			
			case 6:
				unk_0xECCDAE4E977BDA96();
				break;
			
			case 7:
				unk_0xD48AC12D763BBE7F(iParam2);
				break;
			
			case 8:
				unk_0xC511E7C272201CF7(iParam2, BitTest(uParam0, 26));
				break;
			
			case 9:
				unk_0xE6239CCB98B8AB66();
				break;
			
			default:
				break;
		}
	}
}

void func_326()
{
	if (!unk_0x55B23FE400FCEA6B(Local_68.f_2, 0))
	{
		unk_0x03A927199A2DFE46(Local_68.f_2);
	}
	if (unk_0xE5965CDF24F93A9F(Local_68.f_2))
	{
		func_220();
		unk_0xB3822DB3D538C8F3(&(Local_68.f_2));
	}
	if (unk_0xE5965CDF24F93A9F(Local_68.f_86))
	{
		unk_0xB3822DB3D538C8F3(&(Local_68.f_86));
	}
	if (!unk_0x55B23FE400FCEA6B(Local_68.f_28, 0))
	{
		if (iLocal_55 >= 4)
		{
			unk_0xA5D8BA53953077C8(Local_68.f_28, -8f, 1);
			unk_0x3F6DE6DBA9A99FEA(Local_68.f_28, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
		}
	}
	if (unk_0xE5965CDF24F93A9F(Local_68.f_28))
	{
		unk_0x59E393B344098656(&(Local_68.f_28));
	}
	if (unk_0xE5965CDF24F93A9F(Local_68.f_96.f_1))
	{
		unk_0x4BDA5AFD88C085EB(&(Local_68.f_96.f_1));
		unk_0xA1F6E5EF42ACDB8C(Local_68.f_486.f_6, 0.5f, joaat("prop_till_01"), 0);
		unk_0xA1F6E5EF42ACDB8C(Local_68.f_486.f_6, 0.5f, joaat("prop_till_02"), 0);
		unk_0xA1F6E5EF42ACDB8C(Local_68.f_486.f_6, 0.5f, joaat("prop_till_03"), 0);
	}
	if (unk_0x2791155FB0769FE5(Local_68.f_28.f_1))
	{
		unk_0x451F33099166532A(Local_68.f_28.f_1);
	}
	if (func_15(&(Local_68.f_477)))
	{
		func_40(&(Local_68.f_477));
	}
	if (Local_68.f_466)
	{
		if (!bLocal_574)
		{
			unk_0xAFC1FBF3F6AE7B9A(Local_68.f_2.f_15);
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
		unk_0x6D1A116F1B08FA08(131, *uParam2, unk_0xBBDA792448DB5A89(*uParam2));
		unk_0x6D1A116F1B08FA08(114, iVar0, unk_0xBBDA792448DB5A89(iVar0));
	}
}

int func_328(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0x20E4972CBF3DBE1B())
	{
	}
	if ((!unk_0xC8EB486898DDBCF0() && (unk_0x17C7C36F1FCE1AC2() || !unk_0x74A0CF38086BFA4D())) && unk_0x8D4166B8EC28F8D5())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0xF453DE81BDFDAE6F())
			{
				Var69 = { func_145(unk_0x9E2D6C50374FCFA9()) };
				if (unk_0x8C992447292D600F(&Var69))
				{
					if (unk_0x4FFBF2C0D8249E45(&uVar82, 35, &Var69))
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
			if (unk_0x9315DBF7D972F07A() && Global_2723612.f_3)
			{
				unk_0x40CEB23E136D8EA3(&Var0, &(Global_1931618.f_10));
			}
			else
			{
				unk_0x4A42A2E45A8D2C8B(&Var0);
			}
		}
		return 1;
	}
	if (unk_0xC8EB486898DDBCF0())
	{
	}
	if (!unk_0x17C7C36F1FCE1AC2())
	{
	}
	if (unk_0x74A0CF38086BFA4D())
	{
	}
	if (!unk_0x8D4166B8EC28F8D5())
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

