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
	if (unk_0xB4C854DD86E40FDA(joaat("wp_partyboombox")) > 1)
	{
		unk_0xAFBDF6A5E54114C1();
	}
	if (unk_0x4B34601C5C56F3EE(18))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0xC92F9F18E020B461())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0x09FC827691DACE59() >= 22 || unk_0x09FC827691DACE59() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0x8DD54478CFA35F08("ID2_21_G_Night"))
				{
					unk_0x13A763A67BA2A95B("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0x2981C54770E1D19C() && !unk_0x04458B4E5D9E466A())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0x8DD54478CFA35F08("ID2_21_G_Night"))
	{
		unk_0x9D2ACCF306F3A0C5("ID2_21_G_Night");
	}
	unk_0xAFBDF6A5E54114C1();
}

