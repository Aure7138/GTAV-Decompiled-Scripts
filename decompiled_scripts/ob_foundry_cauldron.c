#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	
	if (unk_0x55EEDBBFDC6E810F(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x7DE17ACDD8BA2642(uScriptParam_0))
		{
			if (unk_0x4B85D97500605AE9(uScriptParam_0) && unk_0x24B651D85CCE5EB4(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
						{
							uVar0 = unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD());
							if (unk_0x4D3D95146FD3490D(uVar0))
							{
								if (unk_0x494DA26A8EE9C560(uVar0))
								{
									if (unk_0xF4AED47DB65D91CE())
									{
										unk_0x10FC49B73AEEBE87();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x399D29F9238EE6B0())
						{
							if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
							{
								if (!unk_0x7DE17ACDD8BA2642(uLocal_4))
								{
									uLocal_4 = unk_0x0744FA5607ECEB91(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0xFB8555459C1C8AE7(uLocal_3))
								{
									if (unk_0x7DE17ACDD8BA2642(uLocal_4))
									{
										uVar0 = unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD());
										if (unk_0x4D3D95146FD3490D(uVar0))
										{
											if (unk_0x494DA26A8EE9C560(uVar0))
											{
												if (unk_0xF4AED47DB65D91CE())
												{
													uLocal_3 = unk_0x785A44AA698F0E32("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (unk_0xFB8555459C1C8AE7(uLocal_3))
	{
		unk_0x5F0A993576888020(uLocal_3, 0);
	}
	if (unk_0x7DE17ACDD8BA2642(uLocal_4))
	{
		unk_0xC621CC7313639986(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x675D9C12C73D3DE7();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x4310A0DB886F9FED(uParam0, uParam0))
	{
	}
}

