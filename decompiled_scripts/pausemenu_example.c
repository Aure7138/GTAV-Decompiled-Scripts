#region Local Var
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	switch (ScriptParam_0.f_0)
	{
		case 3:
			while (true)
			{
				unk_0x4EDE34FBADD967A6(5000);
			}
			break;
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1705870862, 25, 1, "PM_PANE_AUD", 0, 0);
				func_2(1, 1, -1705870862, 50, 1, "PM_PANE_DIS", 0, 0);
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1705871862)
			{
			}
			break;
		
		case 2:
			switch (ScriptParam_0.f_1)
			{
				case -1931845307:
					break;
				
				case -1705871862:
					switch (ScriptParam_0.f_3)
					{
						case 25:
							break;
						
						case 50:
							break;
					}
					break;
			}
			break;
	}
	unk_0xAFBDF6A5E54114C1();
}

void func_1(int iParam0)
{
	if (unk_0xCA3CB5CE1B9BFE03("DISPLAY_DATA_SLOT"))
	{
		unk_0x4F47E317C74C543B(iParam0);
		unk_0x6F06CF0E9AB02847();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, int iParam6, int iParam7)
{
	if (unk_0xCA3CB5CE1B9BFE03("SET_DATA_SLOT"))
	{
		unk_0x4F47E317C74C543B(iParam0);
		unk_0x4F47E317C74C543B(iParam1);
		unk_0x4F47E317C74C543B(iParam2);
		unk_0x4F47E317C74C543B(iParam3);
		unk_0x4F47E317C74C543B(iParam7);
		unk_0x4F47E317C74C543B(0);
		if (bParam4)
		{
			unk_0x4F47E317C74C543B(1);
		}
		else
		{
			unk_0x4F47E317C74C543B(0);
		}
		if (iParam6 == 0)
		{
			func_3(sParam5);
		}
		else
		{
			unk_0x341872E4D54CD053(sParam5);
		}
		unk_0x6F06CF0E9AB02847();
	}
}

void func_3(var uParam0)
{
	unk_0x4ADC8B166E139423(uParam0);
	unk_0xD1D4F8D5470AFA4C();
}

