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
	int iLocal_19[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	struct<16> Local_46 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_62[59];
	struct<16> Local_417[59];
	int iLocal_1362 = 0;
	struct<3> Local_1363 = { 0, 0, 0 } ;
	struct<3> Local_1366 = { 0, 0, 0 } ;
	var uLocal_1369 = 0;
	int iLocal_1370 = 0;
	bool bLocal_1371 = 0;
	int iLocal_1372 = 0;
	int iLocal_1373 = 0;
	struct<314> Local_1374 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	unk_0x389D5B1C24A046B5();
	if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) == 0)
	{
		func_59();
	}
	func_58();
	Global_22791 = 0;
	Global_113648.f_14053[Global_20383 /*20*/].f_18 = 0;
	Global_20583 = 0;
	func_57();
	func_56(Global_20364, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_53();
	func_51();
	if (Global_20383.f_1 > 3)
	{
		Global_20383.f_1 = 7;
	}
	iLocal_43 = unk_0xA5E11AF0A2B928C1();
	Global_20387 = 0;
	unk_0xF756EDB27C588BED(&Local_1366);
	Local_1363 = { Local_1366 };
	Local_1363.f_0 = (Local_1363.f_0 - 10f);
	Local_1363.f_1 = (Local_1363.f_1 + 20f);
	Global_22758 = 0;
	Global_22759 = 1;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_22759 == 0 && Global_22758 == 1)
		{
			func_50();
		}
		if (Global_22759 == 1 && Global_22758 == 0)
		{
			func_45();
		}
		if (iLocal_42 == 0)
		{
			iLocal_44 = unk_0xA5E11AF0A2B928C1();
			if ((iLocal_44 - iLocal_43) > 500)
			{
				iLocal_42 = 1;
			}
		}
		if ((Global_20383.f_1 != 9 && Global_22759 == 0) && Global_22758 == 0)
		{
			switch (Global_20383.f_1)
			{
				case 7:
					if (Global_22791 == 0)
					{
						if (Global_2803652 == 0)
						{
							func_44();
							func_37();
						}
					}
					break;
				
				case 8:
					if (Global_22791 == 1)
					{
						func_11();
						func_5();
					}
					break;
				
				default:
					break;
			}
			if (Global_22791 == 0)
			{
				if (func_4())
				{
					Global_22758 = 1;
				}
			}
			else if (func_3(2, Global_20351, 0) || BitTest(Global_8254, 12))
			{
				if (unk_0x4310A0DB886F9FED(&(Global_4541032[iLocal_36 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0x061B1200C95204CB(&Global_8254, 12);
					func_2();
					Global_20361 = 1;
					Global_22791 = 0;
					if (Global_20383.f_1 > 3)
					{
						Global_20383.f_1 = 7;
					}
					if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) == 0)
					{
						func_59();
					}
					func_56(Global_20364, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_53();
					func_51();
					if (Global_4541032[iLocal_36 /*104*/].f_29 > 0)
					{
						if (Global_4541032[iLocal_36 /*104*/].f_31 == 1)
						{
							Global_4541032[iLocal_36 /*104*/].f_29 = 4;
							Global_4541032[iLocal_36 /*104*/].f_24 = 1;
						}
						else
						{
							Global_4541032[iLocal_36 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) == 0)
		{
			func_59();
		}
		if (func_1())
		{
			func_59();
		}
	}
}

int func_1()
{
	if (((Global_20383.f_1 == 1 || Global_20383.f_1 == 3) || Global_20383.f_1 == 0) || Global_20327 == 1)
	{
		Global_20370 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x531D638530A8DB97(-1, "Menu_Back", &Global_20372, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x87644B1F984197FE(iParam0, iParam1) || (iParam2 == 1 && unk_0xE665ABCFC5784C35(iParam0, iParam1)))
	{
		if (unk_0xCC17806DB0C41C19())
		{
			if (unk_0x6C75193377D3CE17() == 0 || (unk_0xEBDA168F3804CE1F() && unk_0x42AAFCB5B7854AA9(2)))
			{
				return 0;
			}
		}
		if (unk_0xFEE065E56A9BEF3F() || unk_0x47F8B78DC1737D5C())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	if (Global_8859 == 1 || Global_20383.f_1 < 7)
	{
		Global_20370 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	if (iLocal_39)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_39 = 0;
		}
	}
	if (unk_0x42AAFCB5B7854AA9(2))
	{
		if (func_3(2, 181, 0))
		{
			func_9();
		}
		if (func_3(2, 180, 0))
		{
			func_6();
		}
	}
	if (iLocal_39 == 0)
	{
		if (func_3(2, Global_20359, 0))
		{
			func_9();
			iLocal_39 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_3(2, Global_20360, 0))
		{
			func_6();
			iLocal_39 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_6()
{
	func_56(Global_20364, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x531D638530A8DB97(-1, "Menu_Navigate", &Global_20372, 1);
	func_7();
}

void func_7()
{
	if (func_8())
	{
		if (Global_20589 == 0)
		{
			unk_0x8C27BB4299B24A0D(2);
		}
		else
		{
			unk_0x8C27BB4299B24A0D(1);
		}
	}
}

int func_8()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78558)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x990C52ABB0EFEBA9();
	iVar1 = unk_0x80A3F4E694565F6A(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4542575 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_9()
{
	func_56(Global_20364, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x531D638530A8DB97(-1, "Menu_Navigate", &Global_20372, 1);
	func_10();
}

void func_10()
{
	if (func_8())
	{
		if (Global_20589 == 0)
		{
			unk_0x8C27BB4299B24A0D(1);
		}
		else
		{
			unk_0x8C27BB4299B24A0D(2);
		}
	}
}

void func_11()
{
	func_12();
}

void func_12()
{
	if (Global_4541032[iLocal_36 /*104*/].f_24 == 1)
	{
		if (Global_20361 == 0)
		{
			if (unk_0x51EB177CA0562B62(2, Global_20354))
			{
				func_2();
				Global_20361 = 1;
				func_30();
				if (Global_4541032[iLocal_36 /*104*/].f_27 == 1)
				{
					Global_4541032[iLocal_36 /*104*/].f_99[0] = 0;
					Global_4541032[iLocal_36 /*104*/].f_99[1] = 0;
					Global_4541032[iLocal_36 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_4541032[iLocal_36 /*104*/].f_99[Global_20383] = 0;
				}
				if (func_29(iLocal_36))
				{
				}
				else
				{
					Global_4541032[iLocal_36 /*104*/].f_24 = 0;
					Global_4541032[iLocal_36 /*104*/].f_28 = 0;
				}
				unk_0x341B37C2C5AA5999(Global_4541032[iLocal_36 /*104*/].f_16);
				func_56(Global_20364, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_53();
				if (iLocal_34 > 0)
				{
					iLocal_34 = (iLocal_34 - 1);
				}
				func_51();
				if (Global_20383.f_1 > 3)
				{
					Global_20383.f_1 = 7;
					Global_22791 = 0;
				}
			}
		}
	}
	else if (Global_20361 == 0)
	{
		if (unk_0x51EB177CA0562B62(2, Global_20355))
		{
			if (iLocal_38 == 1)
			{
				if (Global_20383.f_1 > 3)
				{
					StringCopy(&Global_75676, unk_0x45816CECE89B5B19(&Global_22766), 64);
					if (unk_0x4310A0DB886F9FED(&Global_75676, "HARDCODED_4207156"))
					{
						Global_20383.f_1 = 3;
						Global_1968338 = 1;
					}
					else
					{
						Global_75806 = 7;
						unk_0xECDAB41968FF21A8(&Global_8254, 10);
						Global_20383.f_1 = 6;
					}
				}
				func_59();
			}
		}
	}
	if (Global_4541032[iLocal_36 /*104*/].f_31 == 1)
	{
		if (Global_20361 == 0)
		{
			if (func_3(2, Global_20355, 0))
			{
				func_27();
				Global_20361 = 1;
				Global_4541032[iLocal_36 /*104*/].f_29 = 2;
				Global_4541032[iLocal_36 /*104*/].f_24 = 1;
				Global_4541032[iLocal_36 /*104*/].f_31 = 0;
				unk_0x061B1200C95204CB(&Global_8253, 17);
				Global_22791 = 0;
				if (Global_20383.f_1 > 3)
				{
					Global_20383.f_1 = 7;
				}
				func_56(Global_20364, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_53();
				func_51();
			}
		}
	}
	if (Global_20361 == 0 && iLocal_42 == 1)
	{
		if (func_3(2, Global_20352, 0))
		{
			Global_20361 = 1;
			if (Global_4541032[iLocal_36 /*104*/].f_29 > 0)
			{
				func_27();
				Global_4541032[iLocal_36 /*104*/].f_29 = 3;
				Global_4541032[iLocal_36 /*104*/].f_24 = 1;
				Global_22791 = 0;
				if (Global_20383.f_1 > 3)
				{
					Global_20383.f_1 = 7;
				}
				func_56(Global_20364, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_53();
				func_51();
			}
			else if (Global_4541032[iLocal_36 /*104*/].f_30 == 1)
			{
				func_27();
				Global_7568 = 144;
				if (Global_20383.f_1 > 3)
				{
					Global_20383.f_1 = 10;
					func_25();
				}
				func_24("appContacts");
				Global_20381 = unk_0xE81651AD79516E48("appContacts", 4000);
				unk_0x037A80676B8FF0F5("appContacts");
				Global_7568 = Global_4541032[iLocal_36 /*104*/].f_17;
				if (func_23(Global_7568, Global_20383) == 0)
				{
					func_22(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_22(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), "CELL_211", &(Global_2028[Global_7568 /*29*/].f_3), 0);
				}
				func_13();
				func_59();
			}
		}
	}
}

void func_13()
{
	char cVar0[24];
	
	if (Global_20366 == 1)
	{
		return;
	}
	if (Global_20383.f_1 < 4)
	{
		return;
	}
	while (!unk_0x5FAF55B1F052A2E6(Global_20364))
	{
		if (Global_78558)
		{
			return;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_20383.f_1)
	{
		case 6:
			func_56(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_20(Global_8858);
			if (Global_8858 == 1)
			{
				func_56(Global_20364, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20387), -1082130432, -1082130432, -1082130432);
				Global_20363 = Global_20387;
			}
			else
			{
				func_56(Global_20364, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20388), -1082130432, -1082130432, -1082130432);
				Global_20363 = Global_20388;
			}
			if (Global_20371)
			{
				func_22(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_22(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_22(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20586 == 0)
			{
				func_22(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x061B1200C95204CB(&Global_8253, 17);
			}
			else if (Global_78558)
			{
				func_22(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x061B1200C95204CB(&Global_8253, 17);
			}
			else
			{
				if (Global_20585 == 1)
				{
					if (Global_20371)
					{
						func_22(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20371)
				{
					func_22(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_22(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xECDAB41968FF21A8(&Global_8253, 17);
			}
			if (Global_78558)
			{
				func_18();
				unk_0x061B1200C95204CB(&Global_8255, 9);
				func_56(Global_20364, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20387), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_56(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_22(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_22(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x061B1200C95204CB(&Global_8253, 17);
			if (BitTest(Global_8253, 20))
			{
				func_22(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_22(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20326)
				{
					func_22(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_22(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20382 == 1)
			{
				func_17();
				func_56(Global_20364, "SET_THEME", unk_0xBBDA792448DB5A89(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21738)
				{
					unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
					unk_0xC6A3EF6C4A3412C1(4);
					unk_0xC6A3EF6C4A3412C1(0);
					unk_0xC6A3EF6C4A3412C1(2);
					unk_0x2AF11E92DE43CDE3("CELL_CONDFON");
					unk_0x76B34CBB6F5FA1BB(&Global_21740);
					unk_0xF8FCA9E7130CE1C8();
					func_16("CELL_300");
					func_16("CELL_217");
					func_16("CELL_217");
					unk_0xAE3413B0654A0035();
				}
				else if (func_23(Global_7568, Global_20383) == 0)
				{
					func_22(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_22(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), "CELL_217", &(Global_2028[Global_7568 /*29*/].f_3), 0);
				}
				func_56(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21725 == 4 || Global_21725 == 3)
			{
				func_56(Global_20364, "SET_THEME", unk_0xBBDA792448DB5A89(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_17();
				if (Global_21738)
				{
					unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
					unk_0xC6A3EF6C4A3412C1(4);
					unk_0xC6A3EF6C4A3412C1(0);
					unk_0xC6A3EF6C4A3412C1(2);
					unk_0x2AF11E92DE43CDE3("CELL_CONDFON");
					unk_0x76B34CBB6F5FA1BB(&Global_21740);
					unk_0xF8FCA9E7130CE1C8();
					func_16("CELL_300");
					func_16("CELL_219");
					func_16("CELL_219");
					unk_0xAE3413B0654A0035();
				}
				else
				{
					if (Global_21983)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_23(Global_7568, Global_20383) == 0)
					{
						func_56(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_22(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_56(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_22(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), &cVar0, &(Global_2028[Global_7568 /*29*/].f_3), 0);
					}
				}
				func_56(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_14();
			break;
		
		default:
			break;
	}
}

void func_14()
{
	if (unk_0x5FAF55B1F052A2E6(Global_20364))
	{
		func_15();
		if (Global_20382 == 1)
		{
			if (Global_20371)
			{
				func_22(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21772)
			{
				func_22(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8253, 20))
			{
				func_22(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_22(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_22(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x061B1200C95204CB(&Global_8253, 17);
		}
		else
		{
			func_22(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_22(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x061B1200C95204CB(&Global_8253, 17);
			if (BitTest(Global_8253, 20))
			{
				func_22(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_22(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20326)
				{
					func_22(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_22(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_15()
{
	if (Global_78558)
	{
		func_22(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x061B1200C95204CB(&Global_8253, 17);
	}
}

void func_16(char* sParam0)
{
	unk_0x2AF11E92DE43CDE3(sParam0);
	unk_0xF8FCA9E7130CE1C8();
}

void func_17()
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (Global_20383 == 0)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
			{
				case 1:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 0);
					break;
				
				case 2:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 1);
					break;
				
				case 3:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 2);
					break;
				
				case 4:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 3);
					break;
				
				case 5:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 4);
					break;
				
				case 6:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 5);
					break;
				
				case 7:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_20383 == 1)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
			{
				case 1:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 6);
					break;
				
				case 2:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 0);
					break;
				
				case 3:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 1);
					break;
				
				case 4:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 2);
					break;
				
				case 5:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 3);
					break;
				
				case 6:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 4);
					break;
				
				case 7:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_20383 == 2)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
			{
				case 1:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 5);
					break;
				
				case 2:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 6);
					break;
				
				case 3:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 1);
					break;
				
				case 4:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 0);
					break;
				
				case 5:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 2);
					break;
				
				case 6:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 3);
					break;
				
				case 7:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_20383 == 3)
		{
			switch (Global_4542573)
			{
				case 1:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 0);
					break;
				
				case 2:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 1);
					break;
				
				case 3:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 2);
					break;
				
				case 4:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 3);
					break;
				
				case 5:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 4);
					break;
				
				case 6:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 5);
					break;
				
				case 7:
					unk_0xE41C8C5C1EACC561(unk_0x93E99A2DBCBA9CFA(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_18()
{
	if (Global_78558)
	{
		if (func_19() == 0)
		{
			return;
		}
		func_22(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xECDAB41968FF21A8(&Global_8253, 17);
	}
}

int func_19()
{
	return 0;
}

void func_20(int iParam0)
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
	
	Global_22793 = 0;
	Global_8858 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8822[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_21(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8260[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8260[iVar1 /*15*/].f_4)
					{
						if (Global_8822[iVar0] == 0)
						{
							Global_8786[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8254, 3))
								{
									iVar2 = 42;
									Global_20588 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20588 = 0;
								}
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(iVar0);
								unk_0xC6A3EF6C4A3412C1(Global_8260[iVar1 /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_16(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(iVar2);
								unk_0xAE3413B0654A0035();
							}
							if (Global_2694519)
							{
								if (iVar1 == 14)
								{
									func_22(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8822[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8260[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8260[iVar1 /*15*/].f_4)
					{
						if (Global_8822[iVar0] == 0)
						{
							Global_8786[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113648.f_14143[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113648.f_14143[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113648.f_14143[iVar3 /*104*/].f_99[Global_20383] == 1)
											{
												Global_22793++;
											}
										}
									}
									iVar3++;
								}
								func_22(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22793), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_78558)
								{
									iVar4 = 0;
									iVar4 = Global_4541031;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4541032[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4541032[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4541032[iVar5 /*104*/].f_99[Global_20383] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_22(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20383)
									{
										case 0:
											iVar6 = Global_44457;
											break;
										
										case 1:
											iVar6 = Global_44458;
											break;
										
										case 2:
											iVar6 = Global_44459;
											break;
										
										default:
											break;
									}
									func_22(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_22(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(iVar0);
								unk_0xC6A3EF6C4A3412C1(Global_8260[iVar1 /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_16(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(Global_8259);
								unk_0xAE3413B0654A0035();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8254, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(iVar0);
								unk_0xC6A3EF6C4A3412C1(Global_8260[iVar1 /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_16(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(iVar7);
								unk_0xAE3413B0654A0035();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8254, 3))
								{
									iVar8 = 42;
									Global_20588 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20588 = 0;
								}
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(iVar0);
								unk_0xC6A3EF6C4A3412C1(Global_8260[iVar1 /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_16(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(iVar8);
								unk_0xAE3413B0654A0035();
							}
							else if (iVar1 == 8)
							{
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(iVar0);
								unk_0xC6A3EF6C4A3412C1(Global_8260[iVar1 /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_16(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(42);
								unk_0xAE3413B0654A0035();
							}
							else if ((iVar1 == 23 && unk_0x4310A0DB886F9FED(&(Global_8260[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8254, 6))
							{
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(iVar0);
								unk_0xC6A3EF6C4A3412C1(Global_8260[iVar1 /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_16(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(42);
								unk_0xAE3413B0654A0035();
							}
							else if (Global_8260[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1890001.f_1;
								func_22(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_22(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8822[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_21(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_22(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x9FD96C5DE6EDFC15(uParam0, sParam1);
	unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x2AC37494BBF1DB16(sParam7))
	{
		func_16(sParam7);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam8))
	{
		func_16(sParam8);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam9))
	{
		func_16(sParam9);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam10))
	{
		func_16(sParam10);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam11))
	{
		func_16(sParam11);
	}
	unk_0xAE3413B0654A0035();
}

int func_23(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

void func_24(char* sParam0)
{
	unk_0x3EC562D93709C894(sParam0);
	while (!unk_0x6CAF14BE58B4BFF8(sParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_25()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_26() && unk_0x8DEE51D44B32DE1F(unk_0xC1A5EC5C986B98AD(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_78558)
	{
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && iVar1 == 0)
		{
			iVar2 = unk_0x6BC6C26115124DFE(unk_0xC1A5EC5C986B98AD(), 0, 1);
			if (Global_78558)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x2394F256C5B1D879(unk_0xC1A5EC5C986B98AD()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x2394F256C5B1D879(unk_0xC1A5EC5C986B98AD()))
			{
				iVar0 = 1;
			}
			if (!Global_20326)
			{
				if (Global_7568 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
						{
							if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
							{
							}
							else
							{
								if (Global_78558)
								{
									unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 244, 0);
									unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 243, 0);
									unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 242, 0);
								}
								unk_0xECDAB41968FF21A8(&Global_8253, 11);
								unk_0x1830A4193EBC57B2(unk_0xC1A5EC5C986B98AD(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_26()
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x990C52ABB0EFEBA9();
	iVar1 = unk_0x80A3F4E694565F6A(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_27()
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x531D638530A8DB97(-1, "Menu_Accept", &Global_20372, 1);
		func_28();
	}
}

void func_28()
{
	if (func_8())
	{
		unk_0x8C27BB4299B24A0D(5);
	}
}

int func_29(int iParam0)
{
	if ((Global_113648.f_14143[iParam0 /*104*/].f_99[0] == 1 || Global_113648.f_14143[iParam0 /*104*/].f_99[1] == 1) || Global_113648.f_14143[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_30()
{
	if (func_21(14))
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[0 /*29*/])
			{
				Global_20383 = 0;
			}
			else if (unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[1 /*29*/])
			{
				Global_20383 = 1;
			}
			else if (unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[2 /*29*/])
			{
				Global_20383 = 2;
			}
			else
			{
				Global_20383 = 0;
			}
		}
	}
	else
	{
		Global_20383 = func_31();
		if (Global_20383 == 145)
		{
			Global_20383 = 3;
		}
		if (Global_78558)
		{
			Global_20383 = 3;
		}
		if (Global_20383 > 3)
		{
			Global_20383 = 3;
		}
	}
}

var func_31()
{
	func_32();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_32()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_35(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_34(unk_0xC1A5EC5C986B98AD());
			if (func_33(iVar0) && (!func_21(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_33(Global_113648.f_2365.f_539.f_4321))
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

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return func_36(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_37()
{
	struct<16> Var0;
	
	if (Global_20361 == 0)
	{
		if ((func_3(2, Global_20352, 0) || Global_4542282 == 1) || Global_22785 == 1)
		{
			if (Global_4542282 == 0 && Global_22785 == 0)
			{
				func_27();
			}
			Global_20361 = 1;
			iLocal_42 = 0;
			func_22(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x061B1200C95204CB(&Global_8253, 17);
			iLocal_36 = iLocal_19[iLocal_34];
			if (iLocal_34 == iLocal_33 || iLocal_34 > iLocal_33)
			{
				if (Global_20383.f_1 > 3)
				{
					Global_20383.f_1 = 8;
					Global_22791 = 1;
					iLocal_35 = iLocal_34;
					unk_0x3A7643AAE17CF799(iLocal_19[iLocal_34], &Local_1374);
				}
				unk_0x5AE11BC36633DE4E(0);
				iLocal_40 = 0;
				unk_0x9FD96C5DE6EDFC15(Global_20364, "GET_CURRENT_SELECTION");
				uLocal_45 = unk_0x08320883763BEFA3();
				while (!unk_0x4F815B9C87A967FD(uLocal_45) && iLocal_40 == 0)
				{
					unk_0x4EDE34FBADD967A6(0);
					if (unk_0xC9D9444186B5A374() > 2000)
					{
						iLocal_40 = 1;
					}
				}
				func_42();
				unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
				unk_0xC6A3EF6C4A3412C1(9);
				unk_0xC6A3EF6C4A3412C1(0);
				func_16("CELL_1");
				unk_0x2AF11E92DE43CDE3("CELL_TO_FIELD");
				unk_0x76B34CBB6F5FA1BB(unk_0x1D25117F71EE3811(unk_0x93E99A2DBCBA9CFA()));
				unk_0xF8FCA9E7130CE1C8();
				unk_0x2AF11E92DE43CDE3("CELL_FROM_FIELD");
				unk_0x76B34CBB6F5FA1BB(&(Local_1374.f_2));
				unk_0xF8FCA9E7130CE1C8();
				unk_0x2AF11E92DE43CDE3("CELL_EMAIL_BCON");
				unk_0x76B34CBB6F5FA1BB(&(Local_1374.f_56[0 /*16*/]));
				unk_0x76B34CBB6F5FA1BB(&(Local_1374.f_56[1 /*16*/]));
				unk_0x76B34CBB6F5FA1BB(&(Local_1374.f_56[2 /*16*/]));
				unk_0x76B34CBB6F5FA1BB(&(Local_1374.f_56[3 /*16*/]));
				unk_0x76B34CBB6F5FA1BB(&(Local_1374.f_56[4 /*16*/]));
				unk_0x76B34CBB6F5FA1BB(&(Local_1374.f_56[5 /*16*/]));
				unk_0x76B34CBB6F5FA1BB(&(Local_1374.f_56[6 /*16*/]));
				unk_0x76B34CBB6F5FA1BB(&(Local_1374.f_56[7 /*16*/]));
				unk_0x76B34CBB6F5FA1BB(&(Local_1374.f_56[8 /*16*/]));
				unk_0x76B34CBB6F5FA1BB(&(Local_1374.f_56[9 /*16*/]));
				unk_0xF8FCA9E7130CE1C8();
				unk_0x2AF11E92DE43CDE3("CELL_2000");
				unk_0x76B34CBB6F5FA1BB(&(Local_1374.f_2));
				unk_0xF8FCA9E7130CE1C8();
				switch (Local_1374.f_313)
				{
					case 0:
						break;
					
					case 1:
						break;
					
					case 2:
						unk_0xB4541E12446D5367("EmailAds_Dock_Tease");
						unk_0xD546F85F5AF0F231(1);
						break;
					
					case 3:
						unk_0xB4541E12446D5367("EmailAds_Warstock");
						unk_0xD546F85F5AF0F231(1);
						break;
					
					case 4:
						unk_0xB4541E12446D5367("EmailAds_Legendary_Motorsport");
						unk_0xD546F85F5AF0F231(1);
						break;
					
					case 5:
						unk_0xB4541E12446D5367("EmailAds_LS_Customs");
						unk_0xD546F85F5AF0F231(1);
						break;
					
					case 6:
						unk_0xB4541E12446D5367("EmailAds_Elitas_Travel");
						unk_0xD546F85F5AF0F231(1);
						break;
					
					case 7:
						unk_0xB4541E12446D5367("EmailAds_LS_Tourist_Info");
						unk_0xD546F85F5AF0F231(1);
						break;
					
					case 8:
						unk_0xB4541E12446D5367("emailads_dynasty8");
						unk_0xD546F85F5AF0F231(1);
						break;
					
					case 9:
						unk_0xB4541E12446D5367("emailads_bennys");
						unk_0xD546F85F5AF0F231(1);
						break;
					
					case 10:
						unk_0xB4541E12446D5367("emailads_ammunation");
						unk_0xD546F85F5AF0F231(1);
						break;
					
					case 11:
						unk_0xB4541E12446D5367("emailads_SSSA");
						unk_0xD546F85F5AF0F231(1);
						break;
					
					case 12:
						unk_0xB4541E12446D5367("emailads_maze_bank");
						unk_0xD546F85F5AF0F231(1);
						break;
					
					case 13:
						unk_0xB4541E12446D5367("emailads_shark");
						unk_0xD546F85F5AF0F231(1);
						break;
					
					case 14:
						unk_0xB4541E12446D5367("emailads_RP");
						unk_0xD546F85F5AF0F231(1);
						break;
				}
				unk_0xAE3413B0654A0035();
				func_22(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_56(Global_20364, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (iLocal_34 == iLocal_33)
				{
					if (BitTest(Global_4542297, 25))
					{
						unk_0x061B1200C95204CB(&Global_4542297, 25);
					}
					if (Global_4541031 > 0)
					{
						func_39(12388, uLocal_1369, -1, 1, 0);
						if (Global_4541031 > 0)
						{
							Global_4541031 = 0;
						}
					}
				}
				return;
			}
			if (Global_4541032[iLocal_36 /*104*/].f_24 != 0)
			{
				if (Global_20383.f_1 > 3)
				{
					Global_20383.f_1 = 8;
				}
				if (Global_4542282 == 1 || Global_22785 == 1)
				{
					iLocal_36 = iLocal_19[0];
					iLocal_35 = 0;
					if (Global_4542282 == 1)
					{
					}
					Global_22785 = 0;
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_40 = 0;
					unk_0x9FD96C5DE6EDFC15(Global_20364, "GET_CURRENT_SELECTION");
					uLocal_45 = unk_0x08320883763BEFA3();
					while (!unk_0x4F815B9C87A967FD(uLocal_45) && iLocal_40 == 0)
					{
						unk_0x4EDE34FBADD967A6(0);
						if (unk_0xC9D9444186B5A374() > 2000)
						{
							iLocal_40 = 1;
						}
					}
					if (iLocal_40 == 1)
					{
						iLocal_41 = 0;
					}
					else
					{
						iLocal_41 = unk_0x67FFE44BB8589F1E(uLocal_45);
					}
					if (iLocal_41 < 0)
					{
						iLocal_41 = 0;
					}
					iLocal_36 = iLocal_19[iLocal_34];
					iLocal_35 = iLocal_34;
				}
				Global_4541032[iLocal_36 /*104*/].f_28 = 1;
				iLocal_38 = 0;
				StringCopy(&Global_22766, "NO_HYPERLINK", 64);
				Var0 = { Global_4541032[iLocal_36 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0x42FA33BDEDF21186(&Var0))
				{
					Global_22766 = { Var0 };
					iLocal_38 = 1;
					if (Global_20371)
					{
						func_22(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0xECDAB41968FF21A8(&Global_8253, 17);
					Global_4541032[iLocal_36 /*104*/].f_26 = 1;
					Global_4541032[iLocal_36 /*104*/].f_24 = 2;
				}
				if (Global_4541032[iLocal_36 /*104*/].f_26 == 0)
				{
					Global_4541032[iLocal_36 /*104*/].f_24 = 1;
				}
				func_42();
				unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
				unk_0xC6A3EF6C4A3412C1(9);
				unk_0xC6A3EF6C4A3412C1(0);
				func_16("CELL_1");
				unk_0x2AF11E92DE43CDE3("CELL_TO_FIELD");
				unk_0x76B34CBB6F5FA1BB(unk_0x1D25117F71EE3811(unk_0x93E99A2DBCBA9CFA()));
				unk_0xF8FCA9E7130CE1C8();
				if (Global_4541032[iLocal_36 /*104*/].f_17 == 145)
				{
					unk_0x2AF11E92DE43CDE3("CELL_FROM_FIELD");
					unk_0x76B34CBB6F5FA1BB(&(Global_4541032[iLocal_36 /*104*/].f_50));
					unk_0xF8FCA9E7130CE1C8();
				}
				else
				{
					unk_0x2AF11E92DE43CDE3("CELL_FROM_FIELD");
					unk_0x48849374B34BB7B9(&(Global_2028[Global_4541032[iLocal_36 /*104*/].f_17 /*29*/].f_3));
					unk_0xF8FCA9E7130CE1C8();
				}
				switch (Global_4541032[iLocal_36 /*104*/].f_32)
				{
					case 0:
						func_16(&(Global_4541032[iLocal_36 /*104*/]));
						break;
					
					case 1:
						unk_0x2AF11E92DE43CDE3(&(Global_4541032[iLocal_36 /*104*/]));
						unk_0x76B34CBB6F5FA1BB(&(Global_4541032[iLocal_36 /*104*/].f_33));
						if (Global_4541032[iLocal_36 /*104*/].f_66 == 1 && !unk_0x4310A0DB886F9FED(&(Global_4541032[iLocal_36 /*104*/].f_67), "NULL"))
						{
							unk_0x76B34CBB6F5FA1BB(&(Global_4541032[iLocal_36 /*104*/].f_67));
						}
						if ((Global_4541032[iLocal_36 /*104*/].f_66 == 2 && !unk_0x4310A0DB886F9FED(&(Global_4541032[iLocal_36 /*104*/].f_67), "NULL")) && !unk_0x4310A0DB886F9FED(&(Global_4541032[iLocal_36 /*104*/].f_83), "NULL"))
						{
							if (unk_0x42FA33BDEDF21186(&(Global_4541032[iLocal_36 /*104*/].f_67)))
							{
								unk_0x48849374B34BB7B9(&(Global_4541032[iLocal_36 /*104*/].f_67));
							}
							else
							{
								unk_0x76B34CBB6F5FA1BB(&(Global_4541032[iLocal_36 /*104*/].f_67));
							}
							if (unk_0x42FA33BDEDF21186(&(Global_4541032[iLocal_36 /*104*/].f_83)))
							{
								unk_0x48849374B34BB7B9(&(Global_4541032[iLocal_36 /*104*/].f_83));
							}
							else
							{
								unk_0x76B34CBB6F5FA1BB(&(Global_4541032[iLocal_36 /*104*/].f_83));
							}
						}
						unk_0xF8FCA9E7130CE1C8();
						break;
					
					case 2:
						unk_0x2AF11E92DE43CDE3(&(Global_4541032[iLocal_36 /*104*/]));
						unk_0x64C50E40AA09A6B5(Global_4541032[iLocal_36 /*104*/].f_49);
						unk_0xF8FCA9E7130CE1C8();
						break;
					
					case 3:
						unk_0x2AF11E92DE43CDE3(&(Global_4541032[iLocal_36 /*104*/]));
						unk_0x76B34CBB6F5FA1BB(&(Global_4541032[iLocal_36 /*104*/].f_33));
						unk_0x64C50E40AA09A6B5(Global_4541032[iLocal_36 /*104*/].f_49);
						if (Global_4541032[iLocal_36 /*104*/].f_66 == 1 && !unk_0x4310A0DB886F9FED(&(Global_4541032[iLocal_36 /*104*/].f_67), "NULL"))
						{
							unk_0x76B34CBB6F5FA1BB(&(Global_4541032[iLocal_36 /*104*/].f_67));
						}
						if ((Global_4541032[iLocal_36 /*104*/].f_66 == 2 && !unk_0x4310A0DB886F9FED(&(Global_4541032[iLocal_36 /*104*/].f_67), "NULL")) && !unk_0x4310A0DB886F9FED(&(Global_4541032[iLocal_36 /*104*/].f_83), "NULL"))
						{
							if (unk_0x42FA33BDEDF21186(&(Global_4541032[iLocal_36 /*104*/].f_67)))
							{
								unk_0x48849374B34BB7B9(&(Global_4541032[iLocal_36 /*104*/].f_67));
							}
							else
							{
								unk_0x76B34CBB6F5FA1BB(&(Global_4541032[iLocal_36 /*104*/].f_67));
							}
							if (unk_0x42FA33BDEDF21186(&(Global_4541032[iLocal_36 /*104*/].f_83)))
							{
								unk_0x48849374B34BB7B9(&(Global_4541032[iLocal_36 /*104*/].f_83));
							}
							else
							{
								unk_0x76B34CBB6F5FA1BB(&(Global_4541032[iLocal_36 /*104*/].f_83));
							}
						}
						unk_0xF8FCA9E7130CE1C8();
						break;
					
					case 4:
						func_38(iLocal_36);
						break;
					
					case 5:
						func_38(iLocal_36);
						break;
					
					case 6:
						func_38(iLocal_36);
						break;
					
					case 7:
						func_38(iLocal_36);
						break;
					
					case 8:
						func_38(iLocal_36);
						break;
					
					case 9:
						func_38(iLocal_36);
						break;
					
					case 10:
						func_38(iLocal_36);
						break;
					
					case 11:
						func_38(iLocal_36);
						break;
				}
				if (Global_4541032[iLocal_36 /*104*/].f_17 == 145)
				{
					unk_0x2AF11E92DE43CDE3("CELL_2000");
					unk_0x76B34CBB6F5FA1BB(&(Global_4541032[iLocal_36 /*104*/].f_50));
					unk_0xF8FCA9E7130CE1C8();
				}
				else
				{
					func_16(&(Global_2028[Global_4541032[iLocal_36 /*104*/].f_17 /*29*/].f_3));
				}
				if (Global_4541032[iLocal_36 /*104*/].f_17 == 149)
				{
					unk_0xB4541E12446D5367("emailads_maze_bank");
					unk_0xD546F85F5AF0F231(1);
				}
				if (Global_4541032[iLocal_36 /*104*/].f_17 == 140)
				{
					unk_0xB4541E12446D5367("EmailAds_Warstock");
					unk_0xD546F85F5AF0F231(1);
				}
				if (Global_4541032[iLocal_36 /*104*/].f_17 == 155)
				{
					unk_0xB4541E12446D5367("emailads_arena");
					unk_0xD546F85F5AF0F231(1);
				}
				if (Global_4541032[iLocal_36 /*104*/].f_17 == 160)
				{
					unk_0xB4541E12446D5367("emailads_diamond");
					unk_0xD546F85F5AF0F231(1);
				}
				if (Global_4541032[iLocal_36 /*104*/].f_17 == 174)
				{
					unk_0xB4541E12446D5367("emailads_ls_car_meet");
					unk_0xD546F85F5AF0F231(1);
				}
				if (Global_4541032[iLocal_36 /*104*/].f_17 == 185)
				{
					unk_0xB4541E12446D5367("SUM2_EMAIL_LUXURY_AUTOS");
					unk_0xD546F85F5AF0F231(1);
				}
				if (Global_4541032[iLocal_36 /*104*/].f_17 == 186)
				{
					unk_0xB4541E12446D5367("SUM2_EMAIL_PREMIUM_DELUXE");
					unk_0xD546F85F5AF0F231(1);
				}
				unk_0xAE3413B0654A0035();
				Global_22791 = 1;
				func_56(Global_20364, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x341B37C2C5AA5999(Global_4541032[iLocal_36 /*104*/].f_16);
				if (Global_4541032[iLocal_36 /*104*/].f_29 > 0)
				{
					if (Global_20371)
					{
						func_22(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_4541032[iLocal_36 /*104*/].f_30 == 1)
				{
					if (Global_20371)
					{
						func_22(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_22(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4541032[iLocal_36 /*104*/].f_29 > 0)
				{
					if (unk_0x4310A0DB886F9FED(&(Global_4541032[iLocal_36 /*104*/]), "CELL_FINV"))
					{
						if (Global_20371)
						{
							func_22(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_22(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_20371)
					{
						func_22(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20371)
				{
					func_22(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_22(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4541032[iLocal_36 /*104*/].f_24 == 2)
				{
					if (Global_4541032[iLocal_36 /*104*/].f_31 == 1)
					{
						iLocal_38 = 0;
						if (Global_20371)
						{
							func_22(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_22(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0xECDAB41968FF21A8(&Global_8253, 17);
					}
					else if (iLocal_38 == 0)
					{
						func_22(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x061B1200C95204CB(&Global_8253, 17);
					}
				}
				else if (Global_20371)
				{
					func_22(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0xECDAB41968FF21A8(&Global_8253, 17);
				}
				else
				{
					func_22(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xECDAB41968FF21A8(&Global_8253, 17);
				}
				Global_113648.f_14053[Global_20383 /*20*/].f_18 = 0;
				Global_4542282 = 0;
			}
			else
			{
				Global_113648.f_14053[Global_20383 /*20*/].f_18 = 0;
				Global_4542282 = 0;
			}
		}
		if (Global_2803652 == 0)
		{
			if (Global_78558)
			{
			}
		}
	}
}

void func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_113648.f_14143[iParam0 /*104*/].f_49)
	{
		case 1:
			unk_0x2AF11E92DE43CDE3("CELL_CL01");
			break;
		
		case 2:
			unk_0x2AF11E92DE43CDE3("CELL_CL02");
			break;
		
		case 3:
			unk_0x2AF11E92DE43CDE3("CELL_CL03");
			break;
		
		case 4:
			unk_0x2AF11E92DE43CDE3("CELL_CL04");
			break;
		
		case 5:
			unk_0x2AF11E92DE43CDE3("CELL_CL05");
			break;
		
		case 6:
			unk_0x2AF11E92DE43CDE3("CELL_CL06");
			break;
		
		case 7:
			unk_0x2AF11E92DE43CDE3("CELL_CL07");
			break;
		
		case 8:
			unk_0x2AF11E92DE43CDE3("CELL_CL08");
			break;
		
		case 9:
			unk_0x2AF11E92DE43CDE3("CELL_CL09");
			break;
	}
	unk_0x48849374B34BB7B9(&(Global_113648.f_14143[iParam0 /*104*/]));
	while (iVar0 < Global_113648.f_14143[iParam0 /*104*/].f_49)
	{
		switch (Global_113648.f_14143[iParam0 /*104*/].f_32)
		{
			case 4:
				unk_0x48849374B34BB7B9(&(Global_2793044.f_1755[iVar0 /*4*/]));
				break;
			
			case 5:
				unk_0x48849374B34BB7B9(&(Global_1935188[iVar0 /*4*/]));
				break;
			
			case 6:
				unk_0x48849374B34BB7B9(&(Global_1935229[iVar0 /*4*/]));
				break;
			
			case 7:
				unk_0x48849374B34BB7B9(&(Global_1935250[iVar0 /*4*/]));
				break;
			
			case 8:
				unk_0x48849374B34BB7B9(&(Global_1935267[iVar0 /*4*/]));
				break;
			
			case 9:
				unk_0x48849374B34BB7B9(&(Global_1935280[iVar0 /*4*/]));
				break;
			
			case 10:
				unk_0x48849374B34BB7B9(&(Global_1935293[iVar0 /*4*/]));
				break;
			
			case 11:
				unk_0x48849374B34BB7B9(&(Global_1935306[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0xF8FCA9E7130CE1C8();
}

void func_39(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_40(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, uParam1, iParam3);
	}
}

int func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
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

int func_41()
{
	return Global_1574918;
}

void func_42()
{
	int iVar0;
	
	if (iLocal_1362)
	{
		unk_0xFBA79BC11313B81D(&Local_46);
	}
	iLocal_1362 = 0;
	if (Global_4541032[iLocal_36 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 59)
		{
			if (unk_0x4310A0DB886F9FED(&(Global_4541032[iLocal_36 /*104*/]), &(Local_62[iVar0 /*6*/])))
			{
				if (func_43(&(Local_62[iVar0 /*6*/])))
				{
					StringCopy(&Local_46, "BAT_CASE_", 64);
					StringIntConCat(&Local_46, Global_1968330, 64);
				}
				else
				{
					Local_46 = { Local_417[iVar0 /*16*/] };
				}
				iLocal_1362 = 1;
				unk_0xEBA1698B77FD0A86(&Local_46, 0);
				while (!unk_0x9812897315C21146(&Local_46))
				{
					unk_0x4EDE34FBADD967A6(100);
				}
			}
			iVar0++;
		}
	}
}

int func_43(var uParam0)
{
	switch (unk_0x14580F20CBCE4FA9(uParam0))
	{
		case 368818696:
		case -242537573:
		case 293851599:
		case 1276417163:
		case -695052470:
		case -272335065:
		case 1286719131:
		case -1417266496:
		case -469944288:
		case -687436221:
		case 1989355620:
		case 549480519:
		case 1944388503:
		case -934641488:
		case -728564821:
		case 1522380948:
		case -1256768569:
		case -320488889:
		case -539437394:
		case -1801936221:
			return 1;
		
		default:
	}
	return 0;
}

void func_44()
{
	if (iLocal_39)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_39 = 0;
		}
	}
	if (unk_0x42AAFCB5B7854AA9(2))
	{
		if (func_3(2, 181, 0))
		{
			if (iLocal_34 > 0)
			{
				iLocal_34 = (iLocal_34 - 1);
				func_9();
			}
		}
		if (func_3(2, 180, 0))
		{
			iLocal_34++;
			if (iLocal_34 == iLocal_32)
			{
				iLocal_34 = 0;
			}
			func_6();
		}
	}
	if (iLocal_39 == 0)
	{
		if (func_3(2, Global_20359, 0))
		{
			if (iLocal_34 > 0)
			{
				iLocal_34 = (iLocal_34 - 1);
				func_9();
			}
			iLocal_39 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_3(2, Global_20360, 0))
		{
			iLocal_34++;
			if (iLocal_34 == iLocal_32)
			{
				iLocal_34 = 0;
			}
			func_6();
			iLocal_39 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_45()
{
	float fVar0;
	
	fVar0 = func_46(Local_1366, Local_1363, Global_20343, -90f, 0f, 90f, 350f, 0);
	unk_0x7BA47AF53B54E791((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_22759 = 0;
		iLocal_18 = 0;
	}
}

float func_46(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_4542576 == 0)
	{
		if (BitTest(Global_8253, 14) && Global_20383.f_1 < 4)
		{
			unk_0xF756EDB27C588BED(&Var0);
			if (Global_20336[Global_20328 /*3*/].f_1 == Var0.f_1)
			{
				Global_4542576 = 1;
			}
		}
	}
	if (func_49() && Global_4542576 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0xA5E11AF0A2B928C1();
	}
	fVar3 = func_48((unk_0xBBDA792448DB5A89((unk_0xA5E11AF0A2B928C1() - iLocal_18)) / fParam12), 0f, 1f);
	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
		if (bParam13)
		{
			fVar4 = (fVar4 - 1f);
			fVar5 = 0.670158f;
			fVar4 = (((fVar4 * fVar4) * (((fVar5 + 1f) * fVar4) + fVar5)) + 1f);
		}
		else
		{
			fVar4 = unk_0x0BADBFA3B172435F((fVar3 * 90f));
		}
		Global_20311 = { func_47(Param0, Param3, fVar4) };
		Global_20314 = { func_47(Param6, Param9, fVar4) };
	}
	else
	{
		Global_20311 = { Param3 };
		Global_20314 = { Param9 };
	}
	unk_0x6B2D55EA37C443D5(Global_20311);
	unk_0xB9A6388BF8103D8F(Global_20314, 0);
	return fVar3;
}

Vector3 func_47(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_48(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_49()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		{
			if (Global_20326 == 0)
			{
				if (Global_7568 != 128)
				{
					if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
					{
						if (Global_21725 != 2)
						{
						}
					}
				}
			}
		}
		if (func_21(14))
		{
			return 0;
		}
		if (unk_0x8DEE51D44B32DE1F(unk_0xC1A5EC5C986B98AD(), 0))
		{
			return 0;
		}
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (!unk_0xB7D65B9FB14C2AE5())
			{
				if (unk_0x1589BC95A4C50F21(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x279D0BCF8F708D74(unk_0xC1A5EC5C986B98AD()) || unk_0x1774A64AB2C276EF(unk_0xC1A5EC5C986B98AD())) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || (unk_0x9C42F9EEAF66B131(unk_0xC1A5EC5C986B98AD()) && !(BitTest(Global_4718592.f_37, 17) && (unk_0x1758F8A8511510AB() || Global_1926632))))
		{
			return 0;
		}
		if (Global_112696)
		{
			return 0;
		}
	}
	if (Global_78558)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x990C52ABB0EFEBA9();
	iVar1 = unk_0x80A3F4E694565F6A(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xB7D65B9FB14C2AE5()))
	{
		iVar2 = 1;
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				uVar3 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
				if ((((((((unk_0x6CEF99E452573979(unk_0x504B9BB48D41C264(uVar3)) || unk_0x9C7BEEE2232D4F8A(unk_0x504B9BB48D41C264(uVar3))) || unk_0x5BCB88597C004FED(unk_0x504B9BB48D41C264(uVar3))) || unk_0x504B9BB48D41C264(uVar3) == joaat("seashark")) || unk_0x504B9BB48D41C264(uVar3) == joaat("seashark2")) || unk_0x504B9BB48D41C264(uVar3) == joaat("rhino")) || unk_0x504B9BB48D41C264(uVar3) == joaat("submersible")) || unk_0x504B9BB48D41C264(uVar3) == joaat("submersible2")) || unk_0x504B9BB48D41C264(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4542575 || iVar2 == 1)
	{
		if (unk_0x24B651D85CCE5EB4(joaat("apptrackify")) > 0 || Global_113648.f_14053.f_89)
		{
			if (unk_0x24B651D85CCE5EB4(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_50()
{
	float fVar0;
	
	fVar0 = func_46(Local_1363, Local_1366, -90f, 0f, 90f, Global_20343, 350f, 0);
	unk_0x7BA47AF53B54E791((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_22758 = 0;
		func_59();
		iLocal_18 = 0;
	}
}

void func_51()
{
	if (Global_4542282 == 0)
	{
		if (iLocal_35 < 0)
		{
			iLocal_35 = 0;
		}
		func_52(Global_20364, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_56(Global_20364, "DISPLAY_VIEW", 8f, unk_0xBBDA792448DB5A89(iLocal_35), -1082130432, -1082130432, -1082130432);
		if (Global_20371)
		{
			if (iLocal_32 > 0)
			{
				func_22(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_22(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_32 > 0)
			{
				func_22(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_22(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_78558)
		{
			func_22(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x061B1200C95204CB(&Global_8253, 17);
		}
		else
		{
			func_22(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x061B1200C95204CB(&Global_8253, 17);
		}
	}
	else
	{
		iLocal_35 = 0;
	}
}

void func_52(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x9FD96C5DE6EDFC15(uParam0, sParam1);
	func_16(sParam2);
	if (!unk_0x2AC37494BBF1DB16(sParam3))
	{
		func_16(sParam3);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam4))
	{
		func_16(sParam4);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam5))
	{
		func_16(sParam5);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam6))
	{
		func_16(sParam6);
	}
	unk_0xAE3413B0654A0035();
}

void func_53()
{
	int iVar0[12];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<8> Var17;
	int iVar33;
	int iVar34[10];
	int iVar45;
	
	iLocal_32 = 0;
	iLocal_33 = 0;
	func_30();
	iVar13 = 0;
	iVar14 = 0;
	while (iVar13 < 11)
	{
		if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) == 0)
		{
			func_59();
		}
		iVar15 = 0;
		iVar16 = 11;
		Global_4541032[iVar16 /*104*/].f_18 = -1;
		Global_4541032[iVar16 /*104*/].f_18.f_1 = 0;
		Global_4541032[iVar16 /*104*/].f_18.f_2 = 0;
		Global_4541032[iVar16 /*104*/].f_18.f_3 = 0;
		Global_4541032[iVar16 /*104*/].f_18.f_5 = 0;
		while (iVar15 < 12)
		{
			if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) == 0)
			{
				func_59();
			}
			if (iVar0[iVar15] == 0)
			{
				if (Global_4541032[iVar15 /*104*/].f_24 != 0)
				{
					if (Global_4541032[iVar15 /*104*/].f_99[Global_20383] == 1)
					{
						if (func_55(Global_4541032[iVar15 /*104*/].f_18, Global_4541032[iVar16 /*104*/].f_18))
						{
							iVar16 = iVar15;
							if (Global_4541032[iVar16 /*104*/].f_28 == 0)
							{
								iLocal_37 = 0;
							}
							else
							{
								iLocal_37 = 1;
							}
						}
					}
				}
			}
			iVar15++;
		}
		iLocal_19[iVar13] = iVar16;
		iVar0[iVar16] = 1;
		if (Global_4541032[iVar16 /*104*/].f_24 != 0)
		{
			if (Global_4541032[iVar16 /*104*/].f_99[Global_20383] == 1)
			{
				unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
				unk_0xC6A3EF6C4A3412C1(8);
				unk_0xC6A3EF6C4A3412C1(iVar13);
				unk_0xC6A3EF6C4A3412C1(iLocal_37);
				unk_0xD546F85F5AF0F231(0);
				if (Global_4541032[iVar16 /*104*/].f_17 == 145)
				{
					unk_0x2AF11E92DE43CDE3("CELL_2000");
					unk_0x76B34CBB6F5FA1BB(&(Global_4541032[iVar16 /*104*/].f_50));
					unk_0xF8FCA9E7130CE1C8();
				}
				else
				{
					func_16(&(Global_2028[Global_4541032[iVar16 /*104*/].f_17 /*29*/].f_3));
				}
				Var17 = { Global_4541032[iVar16 /*104*/] };
				if (func_43(&(Global_4541032[iVar16 /*104*/])))
				{
					iVar33 = func_54(7315, -1);
					switch (iVar33)
					{
						case 0:
							StringCopy(&Var17, "BONEMAIL_TXT_SUB", 64);
							break;
						
						case 1:
							StringCopy(&Var17, "BONEMAIL2_TXT_SUB", 64);
							break;
						
						case 2:
							StringCopy(&Var17, "BONEMAIL3_TXT_SUB", 64);
							break;
						
						case 3:
							StringCopy(&Var17, "BONEMAIL4_TXT_SUB", 64);
							break;
						
						case 4:
							StringCopy(&Var17, "BONEMAIL5_TXT_SUB", 64);
							break;
					}
				}
				else
				{
					StringConCat(&Var17, "_SUB", 64);
				}
				func_16(&Var17);
				unk_0xAE3413B0654A0035();
				iLocal_32++;
				iLocal_33++;
			}
		}
		iVar13++;
	}
	iVar13 = iLocal_32;
	iVar45 = 0;
	while (iVar13 < (iLocal_1373 + iLocal_32))
	{
		iVar14 = 0;
		iVar45 = 0;
		while (iVar14 < iLocal_1373 && iVar45 == 0)
		{
			unk_0x3A7643AAE17CF799(iVar14, &Local_1374);
			if (iVar34[iVar14] == 0)
			{
				unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
				unk_0xC6A3EF6C4A3412C1(8);
				unk_0xC6A3EF6C4A3412C1(iVar13);
				if (iVar13 == 0)
				{
					if (Global_4541031 == 0)
					{
						unk_0xC6A3EF6C4A3412C1(1);
					}
					else
					{
						unk_0xC6A3EF6C4A3412C1(0);
					}
				}
				else
				{
					unk_0xC6A3EF6C4A3412C1(1);
				}
				unk_0xD546F85F5AF0F231(0);
				unk_0x2AF11E92DE43CDE3("CELL_2000");
				unk_0x76B34CBB6F5FA1BB(&(Local_1374.f_2));
				unk_0xF8FCA9E7130CE1C8();
				unk_0x2AF11E92DE43CDE3("CELL_EMAIL_SUBJ");
				unk_0x76B34CBB6F5FA1BB(&(Local_1374.f_23[0 /*16*/]));
				unk_0x76B34CBB6F5FA1BB(&(Local_1374.f_23[1 /*16*/]));
				unk_0xF8FCA9E7130CE1C8();
				unk_0xAE3413B0654A0035();
				iVar34[iVar14] = 1;
				iLocal_19[iVar13] = iVar14;
				iVar45 = 1;
				iLocal_32++;
				if (iVar14 == 0)
				{
					uLocal_1369 = Local_1374.f_1;
				}
			}
			iVar14++;
		}
		iVar13++;
	}
}

var func_54(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	return unk_0x088E49A1CEC4C23F(iParam0, iParam1);
}

int func_55(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
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

void func_56(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x9FD96C5DE6EDFC15(uParam0, sParam1);
	unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC6A3EF6C4A3412C1(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xAE3413B0654A0035();
}

void func_57()
{
	switch (unk_0x1CD355F775EE640C())
	{
		case -1:
			unk_0xBFB9C30889C63CE4("gta5mkt_en");
			break;
		
		case 0:
			unk_0xBFB9C30889C63CE4("gta5mkt_en");
			break;
		
		case 1:
			unk_0xBFB9C30889C63CE4("gta5mkt_fr");
			break;
		
		case 2:
			unk_0xBFB9C30889C63CE4("gta5mkt_ge");
			break;
		
		case 3:
			unk_0xBFB9C30889C63CE4("gta5mkt_it");
			break;
		
		case 4:
			unk_0xBFB9C30889C63CE4("gta5mkt_sp");
			break;
		
		case 5:
			unk_0xBFB9C30889C63CE4("gta5mkt_pt");
			break;
		
		case 6:
			unk_0xBFB9C30889C63CE4("gta5mkt_pl");
			break;
		
		case 7:
			unk_0xBFB9C30889C63CE4("gta5mkt_ru");
			break;
		
		case 8:
			unk_0xBFB9C30889C63CE4("gta5mkt_ko");
			break;
		
		case 9:
			unk_0xBFB9C30889C63CE4("gta5mkt_ch");
			break;
		
		case 10:
			unk_0xBFB9C30889C63CE4("gta5mkt_ja");
			break;
		
		case 11:
			unk_0xBFB9C30889C63CE4("gta5mkt_me");
			break;
		
		case 12:
			unk_0xBFB9C30889C63CE4("gta5mkt_cn");
			break;
	}
	unk_0x9E0FA276C0BC8BDF(0, 6);
	unk_0x4EDE34FBADD967A6(0);
	iLocal_1370 = 1;
	bLocal_1371 = false;
	while (iLocal_1370 && Global_20383.f_1 > 3)
	{
		unk_0x4EDE34FBADD967A6(0);
		iLocal_1372 = unk_0xCBD9A6B946C80AC4();
		if (func_4())
		{
			Global_20383.f_1 = 3;
			iLocal_1370 = 0;
			bLocal_1371 = false;
		}
		switch (iLocal_1372)
		{
			case 3:
				iLocal_1370 = 0;
				bLocal_1371 = true;
				break;
			
			case 0:
				iLocal_1370 = 0;
				bLocal_1371 = true;
				break;
			
			case 1:
				break;
			
			case 4:
				iLocal_1370 = 0;
				bLocal_1371 = false;
				break;
			
			case 2:
				iLocal_1370 = 0;
				bLocal_1371 = false;
				break;
		}
	}
	if (bLocal_1371)
	{
		iLocal_1373 = unk_0xDC867E8F25C2B456();
	}
	else
	{
		iLocal_1373 = 0;
	}
}

void func_58()
{
	StringCopy(&(Local_62[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_417[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_62[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_417[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_62[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_417[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_62[3 /*6*/]), "MAPEMAIL_TXT", 24);
	StringCopy(&(Local_417[3 /*16*/]), "NHP_PHOTO_19", 64);
	StringCopy(&(Local_62[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_417[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_62[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_417[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_62[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_417[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_62[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_417[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_62[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_417[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_62[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_417[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_62[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_417[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_62[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_417[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_62[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_417[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_62[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_417[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_62[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_417[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_62[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_417[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_62[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_417[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_62[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_417[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_62[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_417[18 /*16*/]), "executiveproducer", 64);
	StringCopy(&(Local_62[19 /*6*/]), "MAPEMAIL_TXT1", 24);
	StringCopy(&(Local_417[19 /*16*/]), "NHP_PHOTO_18", 64);
	StringCopy(&(Local_62[20 /*6*/]), "MAPEMAIL_TXT2", 24);
	StringCopy(&(Local_417[20 /*16*/]), "NHP_PHOTO_11", 64);
	StringCopy(&(Local_62[21 /*6*/]), "MAPEMAIL_TXT3", 24);
	StringCopy(&(Local_417[21 /*16*/]), "NHP_PHOTO_13", 64);
	StringCopy(&(Local_62[22 /*6*/]), "MAPEMAIL_TXT4", 24);
	StringCopy(&(Local_417[22 /*16*/]), "NHP_PHOTO_5", 64);
	StringCopy(&(Local_62[23 /*6*/]), "MAPEMAIL_TXT5", 24);
	StringCopy(&(Local_417[23 /*16*/]), "NHP_PHOTO_12", 64);
	StringCopy(&(Local_62[24 /*6*/]), "MAPEMAIL_TXT6", 24);
	StringCopy(&(Local_417[24 /*16*/]), "NHP_PHOTO_3", 64);
	StringCopy(&(Local_62[25 /*6*/]), "MAPEMAIL_TXT7", 24);
	StringCopy(&(Local_417[25 /*16*/]), "NHP_PHOTO_1", 64);
	StringCopy(&(Local_62[26 /*6*/]), "MAPEMAIL_TXT8", 24);
	StringCopy(&(Local_417[26 /*16*/]), "NHP_PHOTO_10", 64);
	StringCopy(&(Local_62[27 /*6*/]), "MAPEMAIL_TXT9", 24);
	StringCopy(&(Local_417[27 /*16*/]), "NHP_PHOTO_6", 64);
	StringCopy(&(Local_62[28 /*6*/]), "MAPEMAIL_TXT10", 24);
	StringCopy(&(Local_417[28 /*16*/]), "NHP_PHOTO_20", 64);
	StringCopy(&(Local_62[29 /*6*/]), "MAPEMAIL_TXT11", 24);
	StringCopy(&(Local_417[29 /*16*/]), "NHP_PHOTO_7", 64);
	StringCopy(&(Local_62[30 /*6*/]), "MAPEMAIL_TXT12", 24);
	StringCopy(&(Local_417[30 /*16*/]), "NHP_PHOTO_14", 64);
	StringCopy(&(Local_62[31 /*6*/]), "MAPEMAIL_TXT13", 24);
	StringCopy(&(Local_417[31 /*16*/]), "NHP_PHOTO_4", 64);
	StringCopy(&(Local_62[32 /*6*/]), "MAPEMAIL_TXT14", 24);
	StringCopy(&(Local_417[32 /*16*/]), "NHP_PHOTO_17", 64);
	StringCopy(&(Local_62[33 /*6*/]), "MAPEMAIL_TXT15", 24);
	StringCopy(&(Local_417[33 /*16*/]), "NHP_PHOTO_2", 64);
	StringCopy(&(Local_62[34 /*6*/]), "MAPEMAIL_TXT16", 24);
	StringCopy(&(Local_417[34 /*16*/]), "NHP_PHOTO_15", 64);
	StringCopy(&(Local_62[35 /*6*/]), "MAPEMAIL_TXT17", 24);
	StringCopy(&(Local_417[35 /*16*/]), "NHP_PHOTO_8", 64);
	StringCopy(&(Local_62[36 /*6*/]), "MAPEMAIL_TXT18", 24);
	StringCopy(&(Local_417[36 /*16*/]), "NHP_PHOTO_9", 64);
	StringCopy(&(Local_62[37 /*6*/]), "MAPEMAIL_TXT19", 24);
	StringCopy(&(Local_417[37 /*16*/]), "NHP_PHOTO_16", 64);
	StringCopy(&(Local_62[38 /*6*/]), "MC_EMAIL_0", 24);
	StringCopy(&(Local_417[38 /*16*/]), "NHP_prep_mines", 64);
	StringCopy(&(Local_62[39 /*6*/]), "BONEPIC1_TXT", 24);
	StringCopy(&(Local_417[39 /*16*/]), "", 64);
	StringCopy(&(Local_62[40 /*6*/]), "BONEPIC2_TXT", 24);
	StringCopy(&(Local_417[40 /*16*/]), "", 64);
	StringCopy(&(Local_62[41 /*6*/]), "BONEPIC3_TXT", 24);
	StringCopy(&(Local_417[41 /*16*/]), "", 64);
	StringCopy(&(Local_62[42 /*6*/]), "BONEPIC4_TXT", 24);
	StringCopy(&(Local_417[42 /*16*/]), "", 64);
	StringCopy(&(Local_62[43 /*6*/]), "BONEPIC5_TXT", 24);
	StringCopy(&(Local_417[43 /*16*/]), "", 64);
	StringCopy(&(Local_62[44 /*6*/]), "BONEPIC6_TXT", 24);
	StringCopy(&(Local_417[44 /*16*/]), "", 64);
	StringCopy(&(Local_62[45 /*6*/]), "BONEPIC7_TXT", 24);
	StringCopy(&(Local_417[45 /*16*/]), "", 64);
	StringCopy(&(Local_62[46 /*6*/]), "BONEPIC8_TXT", 24);
	StringCopy(&(Local_417[46 /*16*/]), "", 64);
	StringCopy(&(Local_62[47 /*6*/]), "BONEPIC9_TXT", 24);
	StringCopy(&(Local_417[47 /*16*/]), "", 64);
	StringCopy(&(Local_62[48 /*6*/]), "BONEPIC10_TXT", 24);
	StringCopy(&(Local_417[48 /*16*/]), "", 64);
	StringCopy(&(Local_62[49 /*6*/]), "BONEPIC11_TXT", 24);
	StringCopy(&(Local_417[49 /*16*/]), "", 64);
	StringCopy(&(Local_62[50 /*6*/]), "BONEPIC12_TXT", 24);
	StringCopy(&(Local_417[50 /*16*/]), "", 64);
	StringCopy(&(Local_62[51 /*6*/]), "BONEPIC13_TXT", 24);
	StringCopy(&(Local_417[51 /*16*/]), "", 64);
	StringCopy(&(Local_62[52 /*6*/]), "BONEPIC14_TXT", 24);
	StringCopy(&(Local_417[52 /*16*/]), "", 64);
	StringCopy(&(Local_62[53 /*6*/]), "BONEPIC15_TXT", 24);
	StringCopy(&(Local_417[53 /*16*/]), "", 64);
	StringCopy(&(Local_62[54 /*6*/]), "BONEPIC16_TXT", 24);
	StringCopy(&(Local_417[54 /*16*/]), "", 64);
	StringCopy(&(Local_62[55 /*6*/]), "BONEPIC17_TXT", 24);
	StringCopy(&(Local_417[55 /*16*/]), "", 64);
	StringCopy(&(Local_62[56 /*6*/]), "BONEPIC18_TXT", 24);
	StringCopy(&(Local_417[56 /*16*/]), "", 64);
	StringCopy(&(Local_62[57 /*6*/]), "BONEPIC19_TXT", 24);
	StringCopy(&(Local_417[57 /*16*/]), "", 64);
	StringCopy(&(Local_62[58 /*6*/]), "BONEPIC20_TXT", 24);
	StringCopy(&(Local_417[58 /*16*/]), "", 64);
}

void func_59()
{
	if (func_49() == 0)
	{
		unk_0x6B2D55EA37C443D5(Global_20336[Global_20328 /*3*/]);
	}
	if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) == 0)
	{
		func_60(0);
	}
	if (iLocal_1362)
	{
		unk_0xFBA79BC11313B81D(&Local_46);
	}
	Global_22759 = 0;
	Global_22758 = 0;
	unk_0x675D9C12C73D3DE7();
}

void func_60(int iParam0)
{
	if (func_65())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_64())
		{
			func_62(1, 1);
		}
		else
		{
			func_62(0, 0);
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
	if (!func_61())
	{
		Global_20383.f_1 = 3;
	}
}

int func_61()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_62(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_63(0))
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

int func_63(int iParam0)
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

bool func_64()
{
	return BitTest(Global_1962996, 5);
}

bool func_65()
{
	return BitTest(Global_1962996, 19);
}

