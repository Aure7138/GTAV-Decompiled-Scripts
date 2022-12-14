#region Local Var
	int iLocal_0 = 0;
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
	if (unk_0x24B651D85CCE5EB4(joaat("wp_partyboombox")) > 1)
	{
		unk_0x675D9C12C73D3DE7();
	}
	if (unk_0x55EEDBBFDC6E810F(18))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0xCBE2EC2868A6C438())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0x30DFE1FFD2CC7420() >= 22 || unk_0x30DFE1FFD2CC7420() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0x3BF907958F785E30("ID2_21_G_Night"))
				{
					unk_0x108D43DF91602F20("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0x58A962BEF2DDE1DF() && !unk_0xB53553DC4AAC7D8A())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0x3BF907958F785E30("ID2_21_G_Night"))
	{
		unk_0x1D85BDB30A17CCD8("ID2_21_G_Night");
	}
	unk_0x675D9C12C73D3DE7();
}

