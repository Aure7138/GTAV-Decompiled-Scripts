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
	
	if (unk_0x4B34601C5C56F3EE(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xE5965CDF24F93A9F(uScriptParam_0))
		{
			if (unk_0xA7FB445015A2AF1C(uScriptParam_0) && unk_0xB4C854DD86E40FDA(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
						{
							uVar0 = unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A());
							if (unk_0xBCC73B466E2B2350(uVar0))
							{
								if (unk_0xEA02B859DE237081(uVar0))
								{
									if (unk_0x479BCCF712B8168E())
									{
										unk_0x9E63031C188793E1();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x51B6C2EF8DBE2E1A())
						{
							if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
							{
								if (!unk_0xE5965CDF24F93A9F(uLocal_4))
								{
									uLocal_4 = unk_0x87A467676BDF8C35(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0x6B8F21F773404988(uLocal_3))
								{
									if (unk_0xE5965CDF24F93A9F(uLocal_4))
									{
										uVar0 = unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A());
										if (unk_0xBCC73B466E2B2350(uVar0))
										{
											if (unk_0xEA02B859DE237081(uVar0))
											{
												if (unk_0x479BCCF712B8168E())
												{
													uLocal_3 = unk_0x2D649DA6DC187D35("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
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
	if (unk_0x6B8F21F773404988(uLocal_3))
	{
		unk_0x0F53BC871BA89C94(uLocal_3, 0);
	}
	if (unk_0xE5965CDF24F93A9F(uLocal_4))
	{
		unk_0x59E393B344098656(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0xAFBDF6A5E54114C1();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x3C57C2F07FEE34D2(uParam0, uParam0))
	{
	}
}

