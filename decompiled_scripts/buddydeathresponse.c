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
	if (unk_0x4B34601C5C56F3EE(2) || unk_0xD6F85402E4158EAD())
	{
		unk_0xAFBDF6A5E54114C1();
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
	if (!unk_0xF68107C40359970C(iLocal_20))
	{
		if (!Global_96936)
		{
			unk_0x2D58A6131679D82C(iLocal_20, 1, 1);
			if (unk_0x174CED88B97C78D9(iLocal_20, joaat("script_task_any")) != 7)
			{
				unk_0x03A927199A2DFE46(iLocal_20);
			}
			Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) };
			unk_0x50274A7EACA3133A(iLocal_20, 1);
			unk_0xA888F8CC04F25CC8(&uVar3);
			if (!unk_0xD5C6B5E3B93A5EDC(iLocal_20, 0))
			{
				if (!unk_0xCED7266BAB0BDC20(iLocal_20, 0) && !unk_0xD5C6B5E3B93A5EDC(iLocal_20, 0))
				{
					unk_0x1A96B8B416BC07D0(0, Var0, 6000);
				}
			}
			unk_0xE1E1AF00CA06A2B7(0, Var0, 6000, 0, 2);
			unk_0xC963A45B50851768(uVar3);
			unk_0x8ACADA903FCAA42F(iLocal_20, uVar3);
		}
		func_2(iLocal_20);
	}
	while (!unk_0xA829C9A2767AC8EF())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_20))
	{
		if (!unk_0xF68107C40359970C(iLocal_20))
		{
			unk_0xABC2CA6F28903308(iLocal_20, 1);
		}
		unk_0xB3822DB3D538C8F3(&iLocal_20);
	}
	Global_96936 = 0;
	unk_0xAFBDF6A5E54114C1();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x320D1840B6DAA1CC() + 1000;
	while (unk_0x320D1840B6DAA1CC() < iVar0 && !unk_0xA829C9A2767AC8EF())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0xF68107C40359970C(uParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(unk_0xE2D3D51028F0428A()))
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
			switch (func_5(unk_0xE2D3D51028F0428A()))
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
			switch (func_5(unk_0xE2D3D51028F0428A()))
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
	unk_0x49C085D876A9986D(uParam0, sParam1, sParam2, func_4(iParam3), 0);
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
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
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
	return Global_1998[iParam0 /*29*/];
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
		if (unk_0xE5965CDF24F93A9F(Global_97810[iLocal_18]) && !unk_0xF68107C40359970C(Global_97810[iLocal_18]))
		{
			if (Global_97810[iLocal_18] != unk_0xE2D3D51028F0428A())
			{
				if (!unk_0xA6A089369417736E(Global_97810[iLocal_18]))
				{
					if (unk_0xD5C6B5E3B93A5EDC(Global_97810[iLocal_18], 0) || !unk_0xE85F749F6D5C809E(Global_97810[iLocal_18]))
					{
						if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(Global_97810[iLocal_18], 1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), 1) < 10f)
						{
							iLocal_19 = func_5(Global_97810[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_10())
								{
									if (unk_0xD936DBC1D824A1BE(Global_97810[iLocal_18], unk_0xE2D3D51028F0428A(), 17))
									{
										if (unk_0xD5C6B5E3B93A5EDC(Global_97810[iLocal_18], 0))
										{
											iVar0 = unk_0xB3FF0049C1FD38EC(Global_97810[iLocal_18], 0);
										}
										if ((unk_0xE5965CDF24F93A9F(iVar0) && unk_0x55A0C756C4A8220C(iVar0, 0)) || !unk_0xE5965CDF24F93A9F(iVar0))
										{
											*uParam0 = Global_97810[iLocal_18];
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
	if (unk_0xA829C9A2767AC8EF())
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	func_11();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_11()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_6(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_5(unk_0xE2D3D51028F0428A());
			if (func_8(iVar0) && (!func_12(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_8(Global_113386.f_2363.f_539.f_4321))
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

bool func_12(int iParam0)
{
	return Global_43052 == iParam0;
}

