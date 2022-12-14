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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
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
	if (unk_0x55EEDBBFDC6E810F(2) || unk_0xE68F132454F8CEEA())
	{
		unk_0x675D9C12C73D3DE7();
	}
	func_1();
}

void func_1()
{
	struct<3> Var0;
	var uVar3;
	
	while (!func_9(&iLocal_20))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x66599E73DBA5A850(iLocal_20))
	{
		if (!Global_97176)
		{
			unk_0x85BAE84748AD1A23(iLocal_20, 1, 1);
			if (unk_0xF5F493B789EA063E(iLocal_20, joaat("script_task_any")) != 7)
			{
				unk_0x909F139DC199D8E0(iLocal_20);
			}
			Var0 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0) };
			unk_0xC5B2830898581862(iLocal_20, 1);
			unk_0xDBC7406226B5540E(&uVar3);
			if (!unk_0x3C3D6D026CF7F51B(iLocal_20, 0))
			{
				if (!unk_0xB8C39D031C377E33(iLocal_20, 0) && !unk_0x3C3D6D026CF7F51B(iLocal_20, 0))
				{
					unk_0x195020A03AE6C628(0, Var0, 6000);
				}
			}
			unk_0x952D2B8A054C4FF8(0, Var0, 6000, 0, 2);
			unk_0xF2CFC6EC8C85FA78(uVar3);
			unk_0x3D7110D966B0CEA2(iLocal_20, uVar3);
		}
		func_2(iLocal_20);
	}
	while (!unk_0x72474BA05A104E1E())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_20))
	{
		if (!unk_0x66599E73DBA5A850(iLocal_20))
		{
			unk_0x71A535529C1CA5DF(iLocal_20, 1);
		}
		unk_0x1EEF71E3CDD868D3(&iLocal_20);
	}
	Global_97176 = 0;
	unk_0x675D9C12C73D3DE7();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xA5E11AF0A2B928C1() + 1000;
	while (unk_0xA5E11AF0A2B928C1() < iVar0 && !unk_0x72474BA05A104E1E())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x66599E73DBA5A850(uParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(unk_0xC1A5EC5C986B98AD()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 2)
		{
			switch (func_5(unk_0xC1A5EC5C986B98AD()))
			{
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 0)
		{
			switch (func_5(unk_0xC1A5EC5C986B98AD()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3);
					break;
				
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3);
					break;
				}
			}
	}
}

void func_3(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xB7C28610A558761B(uParam0, sParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)
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

int func_5(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_6(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_6(int iParam0)
{
	if (func_8(iParam0))
	{
		return func_7(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_7(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

bool func_8(int iParam0)
{
	return iParam0 < 3;
}

int func_9(var uParam0)
{
	int iVar0;
	
	iLocal_18 = 0;
	while (iLocal_18 < 9)
	{
		if (unk_0x7DE17ACDD8BA2642(Global_98050[iLocal_18]) && !unk_0x66599E73DBA5A850(Global_98050[iLocal_18]))
		{
			if (Global_98050[iLocal_18] != unk_0xC1A5EC5C986B98AD())
			{
				if (!unk_0x1AFE963DA61006ED(Global_98050[iLocal_18]))
				{
					if (unk_0x3C3D6D026CF7F51B(Global_98050[iLocal_18], 0) || !unk_0xDC116D955A63BDBE(Global_98050[iLocal_18]))
					{
						if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(Global_98050[iLocal_18], 1), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 1) < 10f)
						{
							iLocal_19 = func_5(Global_98050[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_10())
								{
									if (unk_0xC832FC847E3442DA(Global_98050[iLocal_18], unk_0xC1A5EC5C986B98AD(), 17))
									{
										if (unk_0x3C3D6D026CF7F51B(Global_98050[iLocal_18], 0))
										{
											iVar0 = unk_0x95DC39736F6748E3(Global_98050[iLocal_18], 0);
										}
										if ((unk_0x7DE17ACDD8BA2642(iVar0) && unk_0xFBD273FDBCF0C5BD(iVar0, 0)) || !unk_0x7DE17ACDD8BA2642(iVar0))
										{
											*uParam0 = Global_98050[iLocal_18];
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
		iLocal_18++;
	}
	if (unk_0x72474BA05A104E1E())
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	func_11();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_11()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_6(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_5(unk_0xC1A5EC5C986B98AD());
			if (func_8(iVar0) && (!func_12(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_8(Global_113648.f_2365.f_539.f_4321))
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

bool func_12(int iParam0)
{
	return Global_43257 == iParam0;
}

