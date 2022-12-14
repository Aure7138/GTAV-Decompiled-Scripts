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
	int iLocal_19[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	struct<6> Local_84[165];
	struct<6> Local_1075[165];
	struct<8> Local_2066[19];
	int iLocal_2219 = 0;
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
	func_47();
	Global_22791 = 0;
	Global_113648.f_14053[Global_20383 /*20*/].f_18 = 0;
	Global_20583 = 0;
	func_46(Global_20364, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_44();
	func_43();
	if (Global_20383.f_1 > 3)
	{
		Global_20383.f_1 = 7;
	}
	iLocal_65 = unk_0xA5E11AF0A2B928C1();
	Global_20387 = 1;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_64 == 0)
		{
			iLocal_66 = unk_0xA5E11AF0A2B928C1();
			if ((iLocal_66 - iLocal_65) > 500)
			{
				iLocal_64 = 1;
			}
		}
		if (Global_20383.f_1 != 9)
		{
			switch (Global_20383.f_1)
			{
				case 7:
					if (Global_22791 == 0)
					{
						if (Global_2803652 == 0)
						{
							func_38();
							func_33();
						}
					}
					break;
				
				case 8:
					if (Global_22791 == 1)
					{
						func_5();
						func_38();
					}
					break;
				
				default:
					break;
			}
			if (Global_22791 == 0)
			{
				if (func_4())
				{
					func_59();
				}
			}
			else if (func_3(2, Global_20351, 0) || BitTest(Global_8254, 12))
			{
				if (unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[iLocal_58 /*104*/]), "CELL_FINV"))
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
					func_46(Global_20364, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_44();
					func_43();
					if (Global_113648.f_14143[iLocal_58 /*104*/].f_29 > 0)
					{
						if (Global_113648.f_14143[iLocal_58 /*104*/].f_31 == 1)
						{
							Global_113648.f_14143[iLocal_58 /*104*/].f_29 = 4;
							Global_113648.f_14143[iLocal_58 /*104*/].f_24 = 1;
						}
						else
						{
							Global_113648.f_14143[iLocal_58 /*104*/].f_29 = 4;
							Global_113648.f_14143[iLocal_58 /*104*/].f_24 = 1;
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
	if (unk_0x87644B1F984197FE(iParam0, uParam1) || (iParam2 == 1 && unk_0xE665ABCFC5784C35(iParam0, iParam1)))
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
	func_6();
}

void func_6()
{
	if (Global_113648.f_14143[iLocal_58 /*104*/].f_24 == 1)
	{
		if (Global_20361 == 0)
		{
			if (unk_0x87644B1F984197FE(2, Global_20354))
			{
				func_2();
				Global_20361 = 1;
				func_26();
				if (Global_113648.f_14143[iLocal_58 /*104*/].f_27 == 1)
				{
					Global_113648.f_14143[iLocal_58 /*104*/].f_99[0] = 0;
					Global_113648.f_14143[iLocal_58 /*104*/].f_99[1] = 0;
					Global_113648.f_14143[iLocal_58 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_113648.f_14143[iLocal_58 /*104*/].f_99[Global_20383] = 0;
				}
				if (func_25(iLocal_58))
				{
				}
				else
				{
					Global_113648.f_14143[iLocal_58 /*104*/].f_24 = 0;
					Global_113648.f_14143[iLocal_58 /*104*/].f_28 = 0;
				}
				unk_0x341B37C2C5AA5999(Global_113648.f_14143[iLocal_58 /*104*/].f_16);
				func_46(Global_20364, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_44();
				if (iLocal_56 > 0)
				{
					iLocal_56 = (iLocal_56 - 1);
				}
				func_43();
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
			if (iLocal_60 == 1)
			{
				if (Global_20383.f_1 > 3)
				{
					StringCopy(&Global_75676, unk_0x45816CECE89B5B19(&Global_22766), 64);
					Global_75806 = 7;
					unk_0xECDAB41968FF21A8(&Global_8254, 10);
					Global_20383.f_1 = 6;
				}
				func_59();
			}
		}
	}
	if (Global_113648.f_14143[iLocal_58 /*104*/].f_31 == 1)
	{
		if (Global_20361 == 0)
		{
			if (func_3(2, Global_20355, 0))
			{
				func_22();
				Global_20361 = 1;
				Global_113648.f_14143[iLocal_58 /*104*/].f_29 = 2;
				Global_113648.f_14143[iLocal_58 /*104*/].f_24 = 1;
				Global_113648.f_14143[iLocal_58 /*104*/].f_31 = 0;
				unk_0x061B1200C95204CB(&Global_8253, 17);
				Global_22791 = 0;
				if (Global_20383.f_1 > 3)
				{
					Global_20383.f_1 = 7;
				}
				func_46(Global_20364, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_44();
				func_43();
			}
		}
	}
	if (Global_20361 == 0 && iLocal_64 == 1)
	{
		if (func_3(2, Global_20352, 0))
		{
			Global_20361 = 1;
			if (Global_113648.f_14143[iLocal_58 /*104*/].f_29 > 0)
			{
				func_22();
				Global_113648.f_14143[iLocal_58 /*104*/].f_29 = 3;
				Global_113648.f_14143[iLocal_58 /*104*/].f_24 = 1;
				Global_22791 = 0;
				if (Global_20383.f_1 > 3)
				{
					Global_20383.f_1 = 7;
				}
				func_46(Global_20364, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_44();
				func_43();
			}
			else if (Global_113648.f_14143[iLocal_58 /*104*/].f_30 == 1)
			{
				func_22();
				Global_7568 = 144;
				if (Global_20383.f_1 > 3)
				{
					Global_20383.f_1 = 10;
					if (func_21() == 0)
					{
						func_19();
					}
				}
				func_18("appContacts");
				Global_20381 = unk_0xE81651AD79516E48("appContacts", 4000);
				unk_0x037A80676B8FF0F5("appContacts");
				Global_7568 = Global_113648.f_14143[iLocal_58 /*104*/].f_17;
				if (func_17(Global_7568, Global_20383) == 0)
				{
					func_16(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_16(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), "CELL_211", &(Global_2028[Global_7568 /*29*/].f_3), 0);
				}
				func_7();
				func_59();
			}
		}
	}
}

void func_7()
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
			func_46(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_14(Global_8858);
			if (Global_8858 == 1)
			{
				func_46(Global_20364, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20387), -1082130432, -1082130432, -1082130432);
				Global_20363 = Global_20387;
			}
			else
			{
				func_46(Global_20364, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20388), -1082130432, -1082130432, -1082130432);
				Global_20363 = Global_20388;
			}
			if (Global_20371)
			{
				func_16(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_16(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_16(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20586 == 0)
			{
				func_16(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x061B1200C95204CB(&Global_8253, 17);
			}
			else if (Global_78558)
			{
				func_16(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x061B1200C95204CB(&Global_8253, 17);
			}
			else
			{
				if (Global_20585 == 1)
				{
					if (Global_20371)
					{
						func_16(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20371)
				{
					func_16(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_16(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xECDAB41968FF21A8(&Global_8253, 17);
			}
			if (Global_78558)
			{
				func_12();
				unk_0x061B1200C95204CB(&Global_8255, 9);
				func_46(Global_20364, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_20387), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_46(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_16(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_16(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x061B1200C95204CB(&Global_8253, 17);
			if (BitTest(Global_8253, 20))
			{
				func_16(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_16(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20326)
				{
					func_16(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_16(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20382 == 1)
			{
				func_11();
				func_46(Global_20364, "SET_THEME", unk_0xBBDA792448DB5A89(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21738)
				{
					unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
					unk_0xC6A3EF6C4A3412C1(4);
					unk_0xC6A3EF6C4A3412C1(0);
					unk_0xC6A3EF6C4A3412C1(2);
					unk_0x2AF11E92DE43CDE3("CELL_CONDFON");
					unk_0x76B34CBB6F5FA1BB(&Global_21740);
					unk_0xF8FCA9E7130CE1C8();
					func_10("CELL_300");
					func_10("CELL_217");
					func_10("CELL_217");
					unk_0xAE3413B0654A0035();
				}
				else if (func_17(Global_7568, Global_20383) == 0)
				{
					func_16(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_16(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), "CELL_217", &(Global_2028[Global_7568 /*29*/].f_3), 0);
				}
				func_46(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21725 == 4 || Global_21725 == 3)
			{
				func_46(Global_20364, "SET_THEME", unk_0xBBDA792448DB5A89(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_11();
				if (Global_21738)
				{
					unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
					unk_0xC6A3EF6C4A3412C1(4);
					unk_0xC6A3EF6C4A3412C1(0);
					unk_0xC6A3EF6C4A3412C1(2);
					unk_0x2AF11E92DE43CDE3("CELL_CONDFON");
					unk_0x76B34CBB6F5FA1BB(&Global_21740);
					unk_0xF8FCA9E7130CE1C8();
					func_10("CELL_300");
					func_10("CELL_219");
					func_10("CELL_219");
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
					if (func_17(Global_7568, Global_20383) == 0)
					{
						func_46(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_16(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_46(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_16(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), &cVar0, &(Global_2028[Global_7568 /*29*/].f_3), 0);
					}
				}
				func_46(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_8();
			break;
		
		default:
			break;
	}
}

void func_8()
{
	if (unk_0x5FAF55B1F052A2E6(Global_20364))
	{
		func_9();
		if (Global_20382 == 1)
		{
			if (Global_20371)
			{
				func_16(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21772)
			{
				func_16(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8253, 20))
			{
				func_16(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_16(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_16(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x061B1200C95204CB(&Global_8253, 17);
		}
		else
		{
			func_16(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_16(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x061B1200C95204CB(&Global_8253, 17);
			if (BitTest(Global_8253, 20))
			{
				func_16(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_16(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20326)
				{
					func_16(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_16(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_9()
{
	if (Global_78558)
	{
		func_16(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x061B1200C95204CB(&Global_8253, 17);
	}
}

void func_10(char* sParam0)
{
	unk_0x2AF11E92DE43CDE3(sParam0);
	unk_0xF8FCA9E7130CE1C8();
}

void func_11()
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

void func_12()
{
	if (Global_78558)
	{
		if (func_13() == 0)
		{
			return;
		}
		func_16(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xECDAB41968FF21A8(&Global_8253, 17);
	}
}

int func_13()
{
	return 0;
}

void func_14(int iParam0)
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
		if (func_15(14))
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
								func_10(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(iVar2);
								unk_0xAE3413B0654A0035();
							}
							if (Global_2694519)
							{
								if (iVar1 == 14)
								{
									func_16(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_16(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22793), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_16(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_16(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_16(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
								unk_0xC6A3EF6C4A3412C1(1);
								unk_0xC6A3EF6C4A3412C1(iVar0);
								unk_0xC6A3EF6C4A3412C1(Global_8260[iVar1 /*15*/].f_10);
								unk_0xC6A3EF6C4A3412C1(0);
								func_10(&(Global_8260[iVar1 /*15*/]));
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
								func_10(&(Global_8260[iVar1 /*15*/]));
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
								func_10(&(Global_8260[iVar1 /*15*/]));
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
								func_10(&(Global_8260[iVar1 /*15*/]));
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
								func_10(&(Global_8260[iVar1 /*15*/]));
								unk_0xC6A3EF6C4A3412C1(42);
								unk_0xAE3413B0654A0035();
							}
							else if (Global_8260[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1890001.f_1;
								func_16(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_16(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_8260[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_15(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_16(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_10(sParam7);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam8))
	{
		func_10(sParam8);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam9))
	{
		func_10(sParam9);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam10))
	{
		func_10(sParam10);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam11))
	{
		func_10(sParam11);
	}
	unk_0xAE3413B0654A0035();
}

int func_17(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

void func_18(char* sParam0)
{
	unk_0x3EC562D93709C894(sParam0);
	while (!unk_0x6CAF14BE58B4BFF8(sParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_20() && unk_0x8DEE51D44B32DE1F(unk_0xC1A5EC5C986B98AD(), 0))
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

int func_20()
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

int func_21()
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
		if (func_15(14))
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

void func_22()
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x531D638530A8DB97(-1, "Menu_Accept", &Global_20372, 1);
		func_23();
	}
}

void func_23()
{
	if (func_24())
	{
		unk_0x8C27BB4299B24A0D(5);
	}
}

int func_24()
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

int func_25(int iParam0)
{
	if ((Global_113648.f_14143[iParam0 /*104*/].f_99[0] == 1 || Global_113648.f_14143[iParam0 /*104*/].f_99[1] == 1) || Global_113648.f_14143[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_26()
{
	if (func_15(14))
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
		Global_20383 = func_27();
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

var func_27()
{
	func_28();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_28()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_31(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_30(unk_0xC1A5EC5C986B98AD());
			if (func_29(iVar0) && (!func_15(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_29(Global_113648.f_2365.f_539.f_4321))
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

bool func_29(int iParam0)
{
	return iParam0 < 3;
}

int func_30(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_31(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_31(int iParam0)
{
	if (func_29(iParam0))
	{
		return func_32(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_32(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_33()
{
	struct<16> Var0;
	char* sVar16;
	int iVar17;
	
	if (Global_20361 == 0)
	{
		if ((func_3(2, Global_20352, 0) || Global_113648.f_14053[Global_20383 /*20*/].f_17 == 1) || Global_22785 == 1)
		{
			if (Global_113648.f_14053[Global_20383 /*20*/].f_17 == 0 && Global_22785 == 0)
			{
				func_22();
			}
			Global_20361 = 1;
			iLocal_64 = 0;
			iLocal_58 = iLocal_19[iLocal_56];
			if (Global_113648.f_14143[iLocal_58 /*104*/].f_24 != 0)
			{
				if (Global_20383.f_1 > 3)
				{
					func_16(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x061B1200C95204CB(&Global_8253, 17);
					Global_20383.f_1 = 8;
				}
				if (Global_113648.f_14053[Global_20383 /*20*/].f_17 == 1 || Global_22785 == 1)
				{
					iLocal_58 = iLocal_19[0];
					iLocal_57 = 0;
					if (Global_113648.f_14053[Global_20383 /*20*/].f_17 == 1)
					{
					}
					Global_22785 = 0;
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_62 = 0;
					unk_0x9FD96C5DE6EDFC15(Global_20364, "GET_CURRENT_SELECTION");
					uLocal_67 = unk_0x08320883763BEFA3();
					while (!unk_0x4F815B9C87A967FD(uLocal_67) && iLocal_62 == 0)
					{
						unk_0x4EDE34FBADD967A6(0);
						if (unk_0xC9D9444186B5A374() > 2000)
						{
							iLocal_62 = 1;
						}
					}
					if (iLocal_62 == 1)
					{
						iLocal_63 = 0;
					}
					else
					{
						iLocal_63 = unk_0x67FFE44BB8589F1E(uLocal_67);
					}
					if (iLocal_63 < 0)
					{
						iLocal_63 = 0;
					}
					iLocal_58 = iLocal_19[iLocal_63];
					iLocal_57 = iLocal_63;
				}
				Global_113648.f_14143[iLocal_58 /*104*/].f_28 = 1;
				iLocal_60 = 0;
				StringCopy(&Global_22766, "NO_HYPERLINK", 64);
				Var0 = { Global_113648.f_14143[iLocal_58 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0x42FA33BDEDF21186(&Var0))
				{
					Global_22766 = { Var0 };
					iLocal_60 = 1;
					if (Global_20371)
					{
						func_16(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0xECDAB41968FF21A8(&Global_8253, 17);
					Global_113648.f_14143[iLocal_58 /*104*/].f_26 = 1;
					Global_113648.f_14143[iLocal_58 /*104*/].f_24 = 2;
				}
				if (Global_113648.f_14143[iLocal_58 /*104*/].f_26 == 0)
				{
					Global_113648.f_14143[iLocal_58 /*104*/].f_24 = 1;
				}
				func_37();
				unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
				unk_0xC6A3EF6C4A3412C1(7);
				unk_0xC6A3EF6C4A3412C1(0);
				if (Global_113648.f_14143[iLocal_58 /*104*/].f_17 == 145)
				{
					unk_0x2AF11E92DE43CDE3("CELL_2000");
					unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[iLocal_58 /*104*/].f_50));
					unk_0xF8FCA9E7130CE1C8();
				}
				else
				{
					func_10(&(Global_2028[Global_113648.f_14143[iLocal_58 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_113648.f_14143[iLocal_58 /*104*/].f_32)
				{
					case 0:
						func_10(&(Global_113648.f_14143[iLocal_58 /*104*/]));
						break;
					
					case 1:
						unk_0x2AF11E92DE43CDE3(&(Global_113648.f_14143[iLocal_58 /*104*/]));
						unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[iLocal_58 /*104*/].f_33));
						if (Global_113648.f_14143[iLocal_58 /*104*/].f_66 == 1 && !unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[iLocal_58 /*104*/].f_67), "NULL"))
						{
							unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[iLocal_58 /*104*/].f_67));
						}
						if ((Global_113648.f_14143[iLocal_58 /*104*/].f_66 == 2 && !unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[iLocal_58 /*104*/].f_67), "NULL")) && !unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[iLocal_58 /*104*/].f_83), "NULL"))
						{
							if (unk_0x42FA33BDEDF21186(&(Global_113648.f_14143[iLocal_58 /*104*/].f_67)))
							{
								unk_0x48849374B34BB7B9(&(Global_113648.f_14143[iLocal_58 /*104*/].f_67));
							}
							else
							{
								unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[iLocal_58 /*104*/].f_67));
							}
							if (unk_0x42FA33BDEDF21186(&(Global_113648.f_14143[iLocal_58 /*104*/].f_83)))
							{
								unk_0x48849374B34BB7B9(&(Global_113648.f_14143[iLocal_58 /*104*/].f_83));
							}
							else
							{
								unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[iLocal_58 /*104*/].f_83));
							}
						}
						unk_0xF8FCA9E7130CE1C8();
						break;
					
					case 2:
						unk_0x2AF11E92DE43CDE3(&(Global_113648.f_14143[iLocal_58 /*104*/]));
						unk_0x64C50E40AA09A6B5(Global_113648.f_14143[iLocal_58 /*104*/].f_49);
						unk_0xF8FCA9E7130CE1C8();
						break;
					
					case 3:
						unk_0x2AF11E92DE43CDE3(&(Global_113648.f_14143[iLocal_58 /*104*/]));
						unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[iLocal_58 /*104*/].f_33));
						unk_0x64C50E40AA09A6B5(Global_113648.f_14143[iLocal_58 /*104*/].f_49);
						if (Global_113648.f_14143[iLocal_58 /*104*/].f_66 == 1 && !unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[iLocal_58 /*104*/].f_67), "NULL"))
						{
							unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[iLocal_58 /*104*/].f_67));
						}
						if ((Global_113648.f_14143[iLocal_58 /*104*/].f_66 == 2 && !unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[iLocal_58 /*104*/].f_67), "NULL")) && !unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[iLocal_58 /*104*/].f_83), "NULL"))
						{
							if (unk_0x42FA33BDEDF21186(&(Global_113648.f_14143[iLocal_58 /*104*/].f_67)))
							{
								unk_0x48849374B34BB7B9(&(Global_113648.f_14143[iLocal_58 /*104*/].f_67));
							}
							else
							{
								unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[iLocal_58 /*104*/].f_67));
							}
							if (unk_0x42FA33BDEDF21186(&(Global_113648.f_14143[iLocal_58 /*104*/].f_83)))
							{
								unk_0x48849374B34BB7B9(&(Global_113648.f_14143[iLocal_58 /*104*/].f_83));
							}
							else
							{
								unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[iLocal_58 /*104*/].f_83));
							}
						}
						unk_0xF8FCA9E7130CE1C8();
						break;
					
					case 4:
						func_36(iLocal_58);
						break;
					
					case 5:
						func_36(iLocal_58);
						break;
					
					case 6:
						func_36(iLocal_58);
						break;
					
					case 7:
						func_36(iLocal_58);
						break;
					
					case 8:
						func_36(iLocal_58);
						break;
					
					case 9:
						func_36(iLocal_58);
						break;
					
					case 10:
						func_36(iLocal_58);
						break;
					
					case 11:
						func_36(iLocal_58);
						break;
					
					case 12:
						func_35(iLocal_58);
						break;
				}
				if (Global_22794[iLocal_58] == 0)
				{
					if (Global_113648.f_14143[iLocal_58 /*104*/].f_17 == 159)
					{
						func_10("CELL_COMIC_P");
					}
					else
					{
						func_10(&(Global_2028[Global_113648.f_14143[iLocal_58 /*104*/].f_17 /*29*/].f_7));
					}
				}
				else
				{
					if (unk_0xDFF9E7382B675942(Global_22794[iLocal_58]))
					{
						if (unk_0x367CC6D9413FE353(Global_22794[iLocal_58]))
						{
							sVar16 = unk_0x0E2FD3D4F40014B2(Global_22794[iLocal_58]);
						}
						else
						{
							sVar16 = "CHAR_DEFAULT";
						}
					}
					else
					{
						sVar16 = "CHAR_DEFAULT";
					}
					unk_0x2AF11E92DE43CDE3("CELL_2000");
					unk_0x76B34CBB6F5FA1BB(sVar16);
					unk_0xF8FCA9E7130CE1C8();
				}
				unk_0xAE3413B0654A0035();
				Global_22791 = 1;
				func_46(Global_20364, "DISPLAY_VIEW", 7f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_34(Global_20364, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
				unk_0x341B37C2C5AA5999(Global_113648.f_14143[iLocal_58 /*104*/].f_16);
				if (Global_113648.f_14143[iLocal_58 /*104*/].f_29 > 0)
				{
					if (Global_20371)
					{
						func_16(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_113648.f_14143[iLocal_58 /*104*/].f_30 == 1)
				{
					if (Global_20371)
					{
						func_16(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_16(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_113648.f_14143[iLocal_58 /*104*/].f_29 > 0)
				{
					if (unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[iLocal_58 /*104*/]), "CELL_FINV"))
					{
						if (Global_20371)
						{
							func_16(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_16(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_20371)
					{
						func_16(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20371)
				{
					func_16(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_16(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_113648.f_14143[iLocal_58 /*104*/].f_24 == 2)
				{
					if (Global_113648.f_14143[iLocal_58 /*104*/].f_31 == 1)
					{
						iLocal_60 = 0;
						if (Global_20371)
						{
							func_16(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_16(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0xECDAB41968FF21A8(&Global_8253, 17);
					}
					else if (iLocal_60 == 0)
					{
						func_16(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x061B1200C95204CB(&Global_8253, 17);
					}
				}
				else if (Global_20371)
				{
					func_16(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0xECDAB41968FF21A8(&Global_8253, 17);
				}
				else
				{
					func_16(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xECDAB41968FF21A8(&Global_8253, 17);
				}
				Global_113648.f_14053[Global_20383 /*20*/].f_18 = 0;
				Global_113648.f_14053[Global_20383 /*20*/].f_17 = 0;
			}
			else
			{
				iVar17 = 0;
				if (Global_113648.f_14053[Global_20383 /*20*/].f_17 == 1 || Global_22785 == 1)
				{
					if (Global_22785)
					{
					}
					iVar17 = 1;
				}
				Global_113648.f_14053[Global_20383 /*20*/].f_18 = 0;
				Global_113648.f_14053[Global_20383 /*20*/].f_17 = 0;
				if (iVar17 == 1)
				{
					iVar17 = 0;
					Global_20383.f_1 = 3;
				}
			}
		}
		if (Global_2803652 == 0)
		{
			if (Global_78558)
			{
				unk_0x4150CF46B891FFF5(0, Global_20355);
				if (func_3(2, Global_20355, 0))
				{
					Global_20361 = 1;
					Global_2803652 = 1;
				}
			}
		}
	}
}

void func_34(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x9FD96C5DE6EDFC15(uParam0, sParam1);
	func_10(sParam2);
	if (!unk_0x2AC37494BBF1DB16(sParam3))
	{
		func_10(sParam3);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam4))
	{
		func_10(sParam4);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam5))
	{
		func_10(sParam5);
	}
	if (!unk_0x2AC37494BBF1DB16(sParam6))
	{
		func_10(sParam6);
	}
	unk_0xAE3413B0654A0035();
}

void func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_113648.f_14143[iParam0 /*104*/].f_49)
	{
		case 1:
			unk_0x2AF11E92DE43CDE3("TUN_CBL_L01");
			break;
		
		case 2:
			unk_0x2AF11E92DE43CDE3("TUN_CBL_L02");
			break;
		
		case 3:
			unk_0x2AF11E92DE43CDE3("TUN_CBL_L03");
			break;
		
		case 4:
			unk_0x2AF11E92DE43CDE3("TUN_CBL_L04");
			break;
		
		case 5:
			unk_0x2AF11E92DE43CDE3("TUN_CBL_L05");
			break;
		
		case 6:
			unk_0x2AF11E92DE43CDE3("TUN_CBL_L06");
			break;
		
		case 7:
			unk_0x2AF11E92DE43CDE3("TUN_CBL_L07");
			break;
		
		case 8:
			unk_0x2AF11E92DE43CDE3("TUN_CBL_L08");
			break;
		
		case 9:
			unk_0x2AF11E92DE43CDE3("TUN_CBL_L09");
			break;
		
		case 10:
			unk_0x2AF11E92DE43CDE3("TUN_CBL_L10");
			break;
	}
	while (iVar0 < Global_113648.f_14143[iParam0 /*104*/].f_49)
	{
		switch (Global_113648.f_14143[iParam0 /*104*/].f_32)
		{
			case 12:
				unk_0x48849374B34BB7B9(&(Global_1935319[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0xF8FCA9E7130CE1C8();
}

void func_36(int iParam0)
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

void func_37()
{
	int iVar0;
	
	if (iLocal_2219)
	{
		unk_0xFBA79BC11313B81D(&uLocal_68);
	}
	iLocal_2219 = 0;
	if (Global_113648.f_14143[iLocal_58 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 165)
		{
			if (!unk_0x2AC37494BBF1DB16(&(Local_84[iVar0 /*6*/])) && unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[iLocal_58 /*104*/]), &(Local_84[iVar0 /*6*/])))
			{
				if (iVar0 < 19)
				{
					MemCopy(&uLocal_68, {Local_2066[iVar0 /*8*/]}, 16);
				}
				else
				{
					MemCopy(&uLocal_68, {Local_1075[iVar0 /*6*/]}, 16);
				}
				iLocal_2219 = 1;
				unk_0xEBA1698B77FD0A86(&uLocal_68, 0);
				while (!unk_0x9812897315C21146(&uLocal_68))
				{
					unk_0x4EDE34FBADD967A6(100);
				}
			}
			iVar0++;
		}
	}
}

void func_38()
{
	if (iLocal_61)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_61 = 0;
		}
	}
	if (iLocal_61 == 0)
	{
		if (func_3(2, Global_20359, 0) || unk_0x87644B1F984197FE(2, 181))
		{
			if (iLocal_56 > 0)
			{
				iLocal_56 = (iLocal_56 - 1);
			}
			func_41();
			iLocal_61 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_3(2, Global_20360, 0) || unk_0x87644B1F984197FE(2, 180))
		{
			iLocal_56++;
			if (iLocal_56 == iLocal_55)
			{
				iLocal_56 = 0;
			}
			func_39();
			iLocal_61 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_39()
{
	func_46(Global_20364, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x531D638530A8DB97(-1, "Menu_Navigate", &Global_20372, 1);
	func_40();
}

void func_40()
{
	if (func_24())
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

void func_41()
{
	func_46(Global_20364, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x531D638530A8DB97(-1, "Menu_Navigate", &Global_20372, 1);
	func_42();
}

void func_42()
{
	if (func_24())
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

void func_43()
{
	if (Global_113648.f_14053[Global_20383 /*20*/].f_17 == 0)
	{
		if (iLocal_57 < 0)
		{
			iLocal_57 = 0;
		}
		func_46(Global_20364, "DISPLAY_VIEW", 6f, unk_0xBBDA792448DB5A89(iLocal_57), -1082130432, -1082130432, -1082130432);
		func_34(Global_20364, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
		if (Global_20371)
		{
			if (iLocal_55 > 0)
			{
				func_16(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_16(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_55 > 0)
			{
				func_16(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_16(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_78558)
		{
			func_16(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x061B1200C95204CB(&Global_8253, 17);
		}
		else
		{
			func_16(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x061B1200C95204CB(&Global_8253, 17);
		}
	}
	else
	{
		iLocal_57 = 0;
	}
}

void func_44()
{
	int iVar0[35];
	int iVar36;
	int iVar37;
	int iVar38;
	
	iLocal_55 = 0;
	func_26();
	iVar36 = 0;
	while (iVar36 < 34)
	{
		if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) == 0)
		{
			func_59();
		}
		iVar37 = 0;
		iVar38 = 34;
		Global_113648.f_14143[iVar38 /*104*/].f_18 = -1;
		Global_113648.f_14143[iVar38 /*104*/].f_18.f_1 = 0;
		Global_113648.f_14143[iVar38 /*104*/].f_18.f_2 = 0;
		Global_113648.f_14143[iVar38 /*104*/].f_18.f_3 = 0;
		Global_113648.f_14143[iVar38 /*104*/].f_18.f_5 = 0;
		while (iVar37 < 35)
		{
			if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) == 0)
			{
				func_59();
			}
			if (iVar0[iVar37] == 0)
			{
				if (Global_113648.f_14143[iVar37 /*104*/].f_24 != 0)
				{
					if (Global_113648.f_14143[iVar37 /*104*/].f_99[Global_20383] == 1)
					{
						if (func_45(Global_113648.f_14143[iVar37 /*104*/].f_18, Global_113648.f_14143[iVar38 /*104*/].f_18))
						{
							iVar38 = iVar37;
							if (Global_113648.f_14143[iVar38 /*104*/].f_28 == 0)
							{
								iLocal_59 = 33;
							}
							else
							{
								iLocal_59 = 34;
							}
						}
					}
				}
			}
			iVar37++;
		}
		iLocal_19[iVar36] = iVar38;
		iVar0[iVar38] = 1;
		if (Global_113648.f_14143[iVar38 /*104*/].f_24 != 0)
		{
			if (Global_113648.f_14143[iVar38 /*104*/].f_99[Global_20383] == 1)
			{
				unk_0x9FD96C5DE6EDFC15(Global_20364, "SET_DATA_SLOT");
				unk_0xC6A3EF6C4A3412C1(6);
				unk_0xC6A3EF6C4A3412C1(iVar36);
				unk_0xC6A3EF6C4A3412C1(Global_113648.f_14143[iVar38 /*104*/].f_18.f_2);
				unk_0xC6A3EF6C4A3412C1(Global_113648.f_14143[iVar38 /*104*/].f_18.f_1);
				unk_0xC6A3EF6C4A3412C1(iLocal_59);
				if (Global_113648.f_14143[iVar38 /*104*/].f_17 == 145)
				{
					unk_0x2AF11E92DE43CDE3("CELL_CONDFNH");
					unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[iVar38 /*104*/].f_50));
					unk_0xF8FCA9E7130CE1C8();
				}
				else
				{
					func_10(&(Global_2028[Global_113648.f_14143[iVar38 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_113648.f_14143[iVar38 /*104*/].f_32)
				{
					case 0:
						func_10(&(Global_113648.f_14143[iVar38 /*104*/]));
						break;
					
					case 1:
						unk_0x2AF11E92DE43CDE3(&(Global_113648.f_14143[iVar38 /*104*/]));
						unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[iVar38 /*104*/].f_33));
						if (Global_113648.f_14143[iVar38 /*104*/].f_66 == 1 && !unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[iVar38 /*104*/].f_67), "NULL"))
						{
							unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[iVar38 /*104*/].f_67));
						}
						if ((Global_113648.f_14143[iVar38 /*104*/].f_66 == 2 && !unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[iVar38 /*104*/].f_67), "NULL")) && !unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[iVar38 /*104*/].f_83), "NULL"))
						{
							if (unk_0x42FA33BDEDF21186(&(Global_113648.f_14143[iVar38 /*104*/].f_67)))
							{
								unk_0x48849374B34BB7B9(&(Global_113648.f_14143[iVar38 /*104*/].f_67));
							}
							else
							{
								unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[iVar38 /*104*/].f_67));
							}
							if (unk_0x42FA33BDEDF21186(&(Global_113648.f_14143[iVar38 /*104*/].f_83)))
							{
								unk_0x48849374B34BB7B9(&(Global_113648.f_14143[iVar38 /*104*/].f_83));
							}
							else
							{
								unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[iVar38 /*104*/].f_83));
							}
						}
						unk_0xF8FCA9E7130CE1C8();
						break;
					
					case 2:
						unk_0x2AF11E92DE43CDE3(&(Global_113648.f_14143[iVar38 /*104*/]));
						unk_0x64C50E40AA09A6B5(Global_113648.f_14143[iVar38 /*104*/].f_49);
						unk_0xF8FCA9E7130CE1C8();
						break;
					
					case 3:
						unk_0x2AF11E92DE43CDE3(&(Global_113648.f_14143[iVar38 /*104*/]));
						unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[iVar38 /*104*/].f_33));
						unk_0x64C50E40AA09A6B5(Global_113648.f_14143[iVar38 /*104*/].f_49);
						if (Global_113648.f_14143[iVar38 /*104*/].f_66 == 1 && !unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[iVar38 /*104*/].f_67), "NULL"))
						{
							unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[iVar38 /*104*/].f_67));
						}
						if ((Global_113648.f_14143[iVar38 /*104*/].f_66 == 2 && !unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[iVar38 /*104*/].f_67), "NULL")) && !unk_0x4310A0DB886F9FED(&(Global_113648.f_14143[iVar38 /*104*/].f_83), "NULL"))
						{
							if (unk_0x42FA33BDEDF21186(&(Global_113648.f_14143[iVar38 /*104*/].f_67)))
							{
								unk_0x48849374B34BB7B9(&(Global_113648.f_14143[iVar38 /*104*/].f_67));
							}
							else
							{
								unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[iVar38 /*104*/].f_67));
							}
							if (unk_0x42FA33BDEDF21186(&(Global_113648.f_14143[iVar38 /*104*/].f_83)))
							{
								unk_0x48849374B34BB7B9(&(Global_113648.f_14143[iVar38 /*104*/].f_83));
							}
							else
							{
								unk_0x76B34CBB6F5FA1BB(&(Global_113648.f_14143[iVar38 /*104*/].f_83));
							}
						}
						unk_0xF8FCA9E7130CE1C8();
						break;
					
					case 4:
						func_36(iVar38);
						break;
					
					case 5:
						func_36(iVar38);
						break;
					
					case 6:
						func_36(iVar38);
						break;
					
					case 7:
						func_36(iVar38);
						break;
					
					case 8:
						func_36(iVar38);
						break;
					
					case 9:
						func_36(iVar38);
						break;
					
					case 10:
						func_36(iVar38);
						break;
					
					case 11:
						func_36(iVar38);
						break;
					
					case 12:
						func_35(iVar38);
						break;
				}
				unk_0xAE3413B0654A0035();
			}
		}
		if (Global_113648.f_14143[iVar36 /*104*/].f_24 != 0)
		{
			if (Global_113648.f_14143[iVar36 /*104*/].f_99[Global_20383] == 1)
			{
				iLocal_55++;
			}
		}
		iVar36++;
	}
}

int func_45(struct<6> Param0, struct<6> Param6)
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

void func_46(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_47()
{
	StringCopy(&(Local_84[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_2066[0 /*8*/]), "05_a_sext_stripperJuliet", 32);
	StringCopy(&(Local_84[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_2066[1 /*8*/]), "05_b_sext_stripperJuliet", 32);
	StringCopy(&(Local_84[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_2066[2 /*8*/]), "05_c_sext_stripperJuliet", 32);
	StringCopy(&(Local_84[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_2066[3 /*8*/]), "06_a_sext_stripperNikki", 32);
	StringCopy(&(Local_84[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_2066[4 /*8*/]), "06_b_sext_stripperNikki", 32);
	StringCopy(&(Local_84[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_2066[5 /*8*/]), "06_c_sext_stripperNikki", 32);
	StringCopy(&(Local_84[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_2066[6 /*8*/]), "08_a_sext_stripperSapphire", 32);
	StringCopy(&(Local_84[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_2066[7 /*8*/]), "08_b_sext_stripperSapphire", 32);
	StringCopy(&(Local_84[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_2066[8 /*8*/]), "08_c_sext_stripperSapphire", 32);
	StringCopy(&(Local_84[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_2066[9 /*8*/]), "04_a_sext_stripperInfernus", 32);
	StringCopy(&(Local_84[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_2066[10 /*8*/]), "04_b_sext_stripperInfernus", 32);
	StringCopy(&(Local_84[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_2066[11 /*8*/]), "04_c_sext_stripperInfernus", 32);
	StringCopy(&(Local_84[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_2066[12 /*8*/]), "11_a_sext_taxiLiz", 32);
	StringCopy(&(Local_84[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_2066[13 /*8*/]), "11_b_sext_taxiLiz", 32);
	StringCopy(&(Local_84[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_2066[14 /*8*/]), "11_c_sext_taxiLiz", 32);
	StringCopy(&(Local_84[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_2066[15 /*8*/]), "10_a_sext_hitcherGirl", 32);
	StringCopy(&(Local_84[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_2066[16 /*8*/]), "10_b_sext_hitcherGirl", 32);
	StringCopy(&(Local_84[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_2066[17 /*8*/]), "10_c_sext_hitcherGirl", 32);
	StringCopy(&(Local_84[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_2066[18 /*8*/]), "executiveproducer", 32);
	StringCopy(&(Local_84[19 /*6*/]), "LR_PIC_TXT1", 24);
	StringCopy(&(Local_1075[19 /*6*/]), "mt_phone_image_1", 24);
	StringCopy(&(Local_84[20 /*6*/]), "LR_PIC_TXT2", 24);
	StringCopy(&(Local_1075[20 /*6*/]), "mt_phone_image_2", 24);
	StringCopy(&(Local_84[21 /*6*/]), "LR_PIC_TXT3", 24);
	StringCopy(&(Local_1075[21 /*6*/]), "mt_phone_image_3", 24);
	StringCopy(&(Local_84[22 /*6*/]), "LR_PIC_TXT4", 24);
	StringCopy(&(Local_1075[22 /*6*/]), "mt_phone_image_4", 24);
	StringCopy(&(Local_84[23 /*6*/]), "LR_PIC_TXT5", 24);
	StringCopy(&(Local_1075[23 /*6*/]), "mt_phone_image_5", 24);
	StringCopy(&(Local_84[24 /*6*/]), "SAD_SMS_0", 24);
	StringCopy(&(Local_1075[24 /*6*/]), "MP_SND_TARGET_01", 24);
	StringCopy(&(Local_84[25 /*6*/]), "SAD_SMS_1", 24);
	StringCopy(&(Local_1075[25 /*6*/]), "MP_SND_TARGET_02", 24);
	StringCopy(&(Local_84[26 /*6*/]), "SAD_SMS_2", 24);
	StringCopy(&(Local_1075[26 /*6*/]), "MP_SND_TARGET_03", 24);
	StringCopy(&(Local_84[27 /*6*/]), "SAD_SMS_3", 24);
	StringCopy(&(Local_1075[27 /*6*/]), "MP_SND_TARGET_04", 24);
	StringCopy(&(Local_84[28 /*6*/]), "SAD_SMS_4", 24);
	StringCopy(&(Local_1075[28 /*6*/]), "MP_SND_TARGET_05", 24);
	StringCopy(&(Local_84[29 /*6*/]), "SAD_SMS_5", 24);
	StringCopy(&(Local_1075[29 /*6*/]), "MP_SND_TARGET_06", 24);
	StringCopy(&(Local_84[30 /*6*/]), "SAD_SMS_6", 24);
	StringCopy(&(Local_1075[30 /*6*/]), "MP_SND_TARGET_07", 24);
	StringCopy(&(Local_84[31 /*6*/]), "SAD_SMS_7", 24);
	StringCopy(&(Local_1075[31 /*6*/]), "MP_SND_TARGET_08", 24);
	StringCopy(&(Local_84[32 /*6*/]), "SAD_SMS_8", 24);
	StringCopy(&(Local_1075[32 /*6*/]), "MP_SND_TARGET_09", 24);
	StringCopy(&(Local_84[33 /*6*/]), "SAD_SMS_9", 24);
	StringCopy(&(Local_1075[33 /*6*/]), "MP_SND_TARGET_10", 24);
	StringCopy(&(Local_84[34 /*6*/]), "SAD_SMS_10", 24);
	StringCopy(&(Local_1075[34 /*6*/]), "MP_SND_TARGET_11", 24);
	StringCopy(&(Local_84[35 /*6*/]), "SAD_SMS_11", 24);
	StringCopy(&(Local_1075[35 /*6*/]), "MP_SND_TARGET_12", 24);
	StringCopy(&(Local_84[36 /*6*/]), "SAD_SMS_12", 24);
	StringCopy(&(Local_1075[36 /*6*/]), "MP_SND_TARGET_13", 24);
	StringCopy(&(Local_84[37 /*6*/]), "SAD_SMS_13", 24);
	StringCopy(&(Local_1075[37 /*6*/]), "MP_SND_TARGET_14", 24);
	StringCopy(&(Local_84[38 /*6*/]), "SAD_SMS_14", 24);
	StringCopy(&(Local_1075[38 /*6*/]), "MP_SND_TARGET_15", 24);
	StringCopy(&(Local_84[39 /*6*/]), "SAD_SMS_15", 24);
	StringCopy(&(Local_1075[39 /*6*/]), "MP_SND_TARGET_16", 24);
	StringCopy(&(Local_84[40 /*6*/]), "SAD_SMS_16", 24);
	StringCopy(&(Local_1075[40 /*6*/]), "MP_SND_TARGET_17", 24);
	StringCopy(&(Local_84[41 /*6*/]), "SAD_SMS_17", 24);
	StringCopy(&(Local_1075[41 /*6*/]), "MP_SND_TARGET_18", 24);
	StringCopy(&(Local_84[42 /*6*/]), "SAD_SMS_18", 24);
	StringCopy(&(Local_1075[42 /*6*/]), "MP_SND_TARGET_19", 24);
	StringCopy(&(Local_84[43 /*6*/]), "SAD_SMS_19", 24);
	StringCopy(&(Local_1075[43 /*6*/]), "MP_SND_TARGET_20", 24);
	StringCopy(&(Local_84[44 /*6*/]), "VEX_PM_PHOTO0", 24);
	StringCopy(&(Local_1075[44 /*6*/]), "MP_EX_LOCATION_01", 24);
	StringCopy(&(Local_84[45 /*6*/]), "VEX_PM_PHOTO1", 24);
	StringCopy(&(Local_1075[45 /*6*/]), "MP_EX_LOCATION_02", 24);
	StringCopy(&(Local_84[46 /*6*/]), "VEX_PM_PHOTO2", 24);
	StringCopy(&(Local_1075[46 /*6*/]), "MP_EX_LOCATION_03", 24);
	StringCopy(&(Local_84[47 /*6*/]), "VEX_PM_PHOTO3", 24);
	StringCopy(&(Local_1075[47 /*6*/]), "MP_EX_LOCATION_04", 24);
	StringCopy(&(Local_84[48 /*6*/]), "VEX_PM_PHOTO4", 24);
	StringCopy(&(Local_1075[48 /*6*/]), "MP_EX_LOCATION_05", 24);
	StringCopy(&(Local_84[49 /*6*/]), "VEX_PM_PHOTO5", 24);
	StringCopy(&(Local_1075[49 /*6*/]), "MP_EX_LOCATION_06", 24);
	StringCopy(&(Local_84[50 /*6*/]), "VEX_PM_PHOTO6", 24);
	StringCopy(&(Local_1075[50 /*6*/]), "MP_EX_LOCATION_07", 24);
	StringCopy(&(Local_84[51 /*6*/]), "VEX_PM_PHOTO7", 24);
	StringCopy(&(Local_1075[51 /*6*/]), "MP_EX_LOCATION_08", 24);
	StringCopy(&(Local_84[52 /*6*/]), "VEX_PM_PHOTO8", 24);
	StringCopy(&(Local_1075[52 /*6*/]), "MP_EX_LOCATION_09", 24);
	StringCopy(&(Local_84[53 /*6*/]), "VEX_PM_PHOTO9", 24);
	StringCopy(&(Local_1075[53 /*6*/]), "MP_EX_LOCATION_10", 24);
	StringCopy(&(Local_84[54 /*6*/]), "VEX_PM_PHOTO10", 24);
	StringCopy(&(Local_1075[54 /*6*/]), "MP_EX_LOCATION_11", 24);
	StringCopy(&(Local_84[55 /*6*/]), "VEX_PM_PHOTO11", 24);
	StringCopy(&(Local_1075[55 /*6*/]), "MP_EX_LOCATION_12", 24);
	StringCopy(&(Local_84[56 /*6*/]), "VEX_PM_PHOTO12", 24);
	StringCopy(&(Local_1075[56 /*6*/]), "MP_EX_LOCATION_13", 24);
	StringCopy(&(Local_84[57 /*6*/]), "VEX_PM_PHOTO13", 24);
	StringCopy(&(Local_1075[57 /*6*/]), "MP_EX_LOCATION_14", 24);
	StringCopy(&(Local_84[58 /*6*/]), "VEX_1_PROTO", 24);
	StringCopy(&(Local_1075[58 /*6*/]), "IE_TEXTVECH_01", 24);
	StringCopy(&(Local_84[59 /*6*/]), "VEX_2_PROTO", 24);
	StringCopy(&(Local_1075[59 /*6*/]), "IE_TEXTVECH_02", 24);
	StringCopy(&(Local_84[60 /*6*/]), "VEX_3_PROTO", 24);
	StringCopy(&(Local_1075[60 /*6*/]), "IE_TEXTVECH_03", 24);
	StringCopy(&(Local_84[61 /*6*/]), "VEX_4_TYRUS", 24);
	StringCopy(&(Local_1075[61 /*6*/]), "IE_TEXTVECH_04", 24);
	StringCopy(&(Local_84[62 /*6*/]), "VEX_5_TYRUS", 24);
	StringCopy(&(Local_1075[62 /*6*/]), "IE_TEXTVECH_05", 24);
	StringCopy(&(Local_84[63 /*6*/]), "VEX_6_TYRUS", 24);
	StringCopy(&(Local_1075[63 /*6*/]), "IE_TEXTVECH_06", 24);
	StringCopy(&(Local_84[64 /*6*/]), "VEX_7_BESTIA", 24);
	StringCopy(&(Local_1075[64 /*6*/]), "IE_TEXTVECH_07", 24);
	StringCopy(&(Local_84[65 /*6*/]), "VEX_8_BESTIA", 24);
	StringCopy(&(Local_1075[65 /*6*/]), "IE_TEXTVECH_08", 24);
	StringCopy(&(Local_84[66 /*6*/]), "VEX_9_BESTIA", 24);
	StringCopy(&(Local_1075[66 /*6*/]), "IE_TEXTVECH_09", 24);
	StringCopy(&(Local_84[67 /*6*/]), "VEX_10_T20", 24);
	StringCopy(&(Local_1075[67 /*6*/]), "IE_TEXTVECH_10", 24);
	StringCopy(&(Local_84[68 /*6*/]), "VEX_11_T20", 24);
	StringCopy(&(Local_1075[68 /*6*/]), "IE_TEXTVECH_11", 24);
	StringCopy(&(Local_84[69 /*6*/]), "VEX_12_T20", 24);
	StringCopy(&(Local_1075[69 /*6*/]), "IE_TEXTVECH_12", 24);
	StringCopy(&(Local_84[70 /*6*/]), "VEX_13_SHEAVA", 24);
	StringCopy(&(Local_1075[70 /*6*/]), "IE_TEXTVECH_13", 24);
	StringCopy(&(Local_84[71 /*6*/]), "VEX_14_SHEAVA", 24);
	StringCopy(&(Local_1075[71 /*6*/]), "IE_TEXTVECH_14", 24);
	StringCopy(&(Local_84[72 /*6*/]), "VEX_15_SHEAVA", 24);
	StringCopy(&(Local_1075[72 /*6*/]), "IE_TEXTVECH_15", 24);
	StringCopy(&(Local_84[73 /*6*/]), "VEX_16_OSIRIS", 24);
	StringCopy(&(Local_1075[73 /*6*/]), "IE_TEXTVECH_16", 24);
	StringCopy(&(Local_84[74 /*6*/]), "VEX_17_OSIRIS", 24);
	StringCopy(&(Local_1075[74 /*6*/]), "IE_TEXTVECH_17", 24);
	StringCopy(&(Local_84[75 /*6*/]), "VEX_18_OSIRIS", 24);
	StringCopy(&(Local_1075[75 /*6*/]), "IE_TEXTVECH_18", 24);
	StringCopy(&(Local_84[76 /*6*/]), "VEX_19_FMJ", 24);
	StringCopy(&(Local_1075[76 /*6*/]), "IE_TEXTVECH_19", 24);
	StringCopy(&(Local_84[77 /*6*/]), "VEX_20_FMJ", 24);
	StringCopy(&(Local_1075[77 /*6*/]), "IE_TEXTVECH_20", 24);
	StringCopy(&(Local_84[78 /*6*/]), "VEX_21_FMJ", 24);
	StringCopy(&(Local_1075[78 /*6*/]), "IE_TEXTVECH_21", 24);
	StringCopy(&(Local_84[79 /*6*/]), "VEX_22_REAPER", 24);
	StringCopy(&(Local_1075[79 /*6*/]), "IE_TEXTVECH_22", 24);
	StringCopy(&(Local_84[80 /*6*/]), "VEX_23_REAPER", 24);
	StringCopy(&(Local_1075[80 /*6*/]), "IE_TEXTVECH_23", 24);
	StringCopy(&(Local_84[81 /*6*/]), "VEX_24_REAPER", 24);
	StringCopy(&(Local_1075[81 /*6*/]), "IE_TEXTVECH_24", 24);
	StringCopy(&(Local_84[82 /*6*/]), "VEX_25_PFISTER", 24);
	StringCopy(&(Local_1075[82 /*6*/]), "IE_TEXTVECH_25", 24);
	StringCopy(&(Local_84[83 /*6*/]), "VEX_26_PFISTER", 24);
	StringCopy(&(Local_1075[83 /*6*/]), "IE_TEXTVECH_26", 24);
	StringCopy(&(Local_84[84 /*6*/]), "VEX_27_PFISTER", 24);
	StringCopy(&(Local_1075[84 /*6*/]), "IE_TEXTVECH_27", 24);
	StringCopy(&(Local_84[85 /*6*/]), "VEX_28_ALPHA", 24);
	StringCopy(&(Local_1075[85 /*6*/]), "IE_TEXTVECH_28", 24);
	StringCopy(&(Local_84[86 /*6*/]), "VEX_29_ALPHA", 24);
	StringCopy(&(Local_1075[86 /*6*/]), "IE_TEXTVECH_29", 24);
	StringCopy(&(Local_84[87 /*6*/]), "VEX_30_ALPHA", 24);
	StringCopy(&(Local_1075[87 /*6*/]), "IE_TEXTVECH_30", 24);
	StringCopy(&(Local_84[88 /*6*/]), "VEX_31_MAMBA", 24);
	StringCopy(&(Local_1075[88 /*6*/]), "IE_TEXTVECH_31", 24);
	StringCopy(&(Local_84[89 /*6*/]), "VEX_32_MAMBA", 24);
	StringCopy(&(Local_1075[89 /*6*/]), "IE_TEXTVECH_32", 24);
	StringCopy(&(Local_84[90 /*6*/]), "VEX_33_MAMBA", 24);
	StringCopy(&(Local_1075[90 /*6*/]), "IE_TEXTVECH_33", 24);
	StringCopy(&(Local_84[91 /*6*/]), "VEX_34_TAMPA", 24);
	StringCopy(&(Local_1075[91 /*6*/]), "IE_TEXTVECH_34", 24);
	StringCopy(&(Local_84[92 /*6*/]), "VEX_35_TAMPA", 24);
	StringCopy(&(Local_1075[92 /*6*/]), "IE_TEXTVECH_35", 24);
	StringCopy(&(Local_84[93 /*6*/]), "VEX_36_TAMPA", 24);
	StringCopy(&(Local_1075[93 /*6*/]), "IE_TEXTVECH_36", 24);
	StringCopy(&(Local_84[94 /*6*/]), "VEX_37_BTYPE", 24);
	StringCopy(&(Local_1075[94 /*6*/]), "IE_TEXTVECH_37", 24);
	StringCopy(&(Local_84[95 /*6*/]), "VEX_38_BTYPE", 24);
	StringCopy(&(Local_1075[95 /*6*/]), "IE_TEXTVECH_38", 24);
	StringCopy(&(Local_84[96 /*6*/]), "VEX_39_BTYPE", 24);
	StringCopy(&(Local_1075[96 /*6*/]), "IE_TEXTVECH_39", 24);
	StringCopy(&(Local_84[97 /*6*/]), "VEX_40_FELTZ3", 24);
	StringCopy(&(Local_1075[97 /*6*/]), "IE_TEXTVECH_40", 24);
	StringCopy(&(Local_84[98 /*6*/]), "VEX_41_FELTZ3", 24);
	StringCopy(&(Local_1075[98 /*6*/]), "IE_TEXTVECH_41", 24);
	StringCopy(&(Local_84[99 /*6*/]), "VEX_42_FELTZ3", 24);
	StringCopy(&(Local_1075[99 /*6*/]), "IE_TEXTVECH_42", 24);
	StringCopy(&(Local_84[100 /*6*/]), "VEX_43_ZTYPE", 24);
	StringCopy(&(Local_1075[100 /*6*/]), "IE_TEXTVECH_43", 24);
	StringCopy(&(Local_84[101 /*6*/]), "VEX_44_ZTYPE", 24);
	StringCopy(&(Local_1075[101 /*6*/]), "IE_TEXTVECH_44", 24);
	StringCopy(&(Local_84[102 /*6*/]), "VEX_45_ZTYPE", 24);
	StringCopy(&(Local_1075[102 /*6*/]), "IE_TEXTVECH_45", 24);
	StringCopy(&(Local_84[103 /*6*/]), "VEX_46_TROPOS", 24);
	StringCopy(&(Local_1075[103 /*6*/]), "IE_TEXTVECH_46", 24);
	StringCopy(&(Local_84[104 /*6*/]), "VEX_47_TROPOS", 24);
	StringCopy(&(Local_1075[104 /*6*/]), "IE_TEXTVECH_47", 24);
	StringCopy(&(Local_84[105 /*6*/]), "VEX_48_TROPOS", 24);
	StringCopy(&(Local_1075[105 /*6*/]), "IE_TEXTVECH_48", 24);
	StringCopy(&(Local_84[106 /*6*/]), "VEX_49_ENTITYXF", 24);
	StringCopy(&(Local_1075[106 /*6*/]), "IE_TEXTVECH_49", 24);
	StringCopy(&(Local_84[107 /*6*/]), "VEX_50_ENTITYXF", 24);
	StringCopy(&(Local_1075[107 /*6*/]), "IE_TEXTVECH_50", 24);
	StringCopy(&(Local_84[108 /*6*/]), "VEX_51_ENTITYXF", 24);
	StringCopy(&(Local_1075[108 /*6*/]), "IE_TEXTVECH_51", 24);
	StringCopy(&(Local_84[109 /*6*/]), "VEX_52_SULTANRS", 24);
	StringCopy(&(Local_1075[109 /*6*/]), "IE_TEXTVECH_52", 24);
	StringCopy(&(Local_84[110 /*6*/]), "VEX_53_SULTANRS", 24);
	StringCopy(&(Local_1075[110 /*6*/]), "IE_TEXTVECH_53", 24);
	StringCopy(&(Local_84[111 /*6*/]), "VEX_54_SULTANRS", 24);
	StringCopy(&(Local_1075[111 /*6*/]), "IE_TEXTVECH_54", 24);
	StringCopy(&(Local_84[112 /*6*/]), "VEX_55_ZENTORNO", 24);
	StringCopy(&(Local_1075[112 /*6*/]), "IE_TEXTVECH_55", 24);
	StringCopy(&(Local_84[113 /*6*/]), "VEX_56_ZENTORNO", 24);
	StringCopy(&(Local_1075[113 /*6*/]), "IE_TEXTVECH_56", 24);
	StringCopy(&(Local_84[114 /*6*/]), "VEX_57_ZENTORNO", 24);
	StringCopy(&(Local_1075[114 /*6*/]), "IE_TEXTVECH_57", 24);
	StringCopy(&(Local_84[115 /*6*/]), "VEX_58_OMNIS", 24);
	StringCopy(&(Local_1075[115 /*6*/]), "IE_TEXTVECH_58", 24);
	StringCopy(&(Local_84[116 /*6*/]), "VEX_59_OMNIS", 24);
	StringCopy(&(Local_1075[116 /*6*/]), "IE_TEXTVECH_59", 24);
	StringCopy(&(Local_84[117 /*6*/]), "VEX_60_OMNIS", 24);
	StringCopy(&(Local_1075[117 /*6*/]), "IE_TEXTVECH_60", 24);
	StringCopy(&(Local_84[118 /*6*/]), "VEX_61_COQUET3", 24);
	StringCopy(&(Local_1075[118 /*6*/]), "IE_TEXTVECH_61", 24);
	StringCopy(&(Local_84[119 /*6*/]), "VEX_62_COQUET3", 24);
	StringCopy(&(Local_1075[119 /*6*/]), "IE_TEXTVECH_62", 24);
	StringCopy(&(Local_84[120 /*6*/]), "VEX_63_COQUET3", 24);
	StringCopy(&(Local_1075[120 /*6*/]), "IE_TEXTVECH_63", 24);
	StringCopy(&(Local_84[121 /*6*/]), "VEX_64_SEVEN70", 24);
	StringCopy(&(Local_1075[121 /*6*/]), "IE_TEXTVECH_64", 24);
	StringCopy(&(Local_84[122 /*6*/]), "VEX_65_SEVEN70", 24);
	StringCopy(&(Local_1075[122 /*6*/]), "IE_TEXTVECH_65", 24);
	StringCopy(&(Local_84[123 /*6*/]), "VEX_66_SEVEN70", 24);
	StringCopy(&(Local_1075[123 /*6*/]), "IE_TEXTVECH_66", 24);
	StringCopy(&(Local_84[124 /*6*/]), "VEX_67_VERLI", 24);
	StringCopy(&(Local_1075[124 /*6*/]), "IE_TEXTVECH_67", 24);
	StringCopy(&(Local_84[125 /*6*/]), "VEX_68_VERLI", 24);
	StringCopy(&(Local_1075[125 /*6*/]), "IE_TEXTVECH_68", 24);
	StringCopy(&(Local_84[126 /*6*/]), "VEX_69_VERLI", 24);
	StringCopy(&(Local_1075[126 /*6*/]), "IE_TEXTVECH_69", 24);
	StringCopy(&(Local_84[127 /*6*/]), "VEX_70_FELTZ2", 24);
	StringCopy(&(Local_1075[127 /*6*/]), "IE_TEXTVECH_70", 24);
	StringCopy(&(Local_84[128 /*6*/]), "VEX_71_FELTZ2", 24);
	StringCopy(&(Local_1075[128 /*6*/]), "IE_TEXTVECH_71", 24);
	StringCopy(&(Local_84[129 /*6*/]), "VEX_72_FELTZ2", 24);
	StringCopy(&(Local_1075[129 /*6*/]), "IE_TEXTVECH_72", 24);
	StringCopy(&(Local_84[130 /*6*/]), "VEX_73_COQUET2", 24);
	StringCopy(&(Local_1075[130 /*6*/]), "IE_TEXTVECH_73", 24);
	StringCopy(&(Local_84[131 /*6*/]), "VEX_74_COQUET2", 24);
	StringCopy(&(Local_1075[131 /*6*/]), "IE_TEXTVECH_74", 24);
	StringCopy(&(Local_84[132 /*6*/]), "VEX_75_COQUET2", 24);
	StringCopy(&(Local_1075[132 /*6*/]), "IE_TEXTVECH_75", 24);
	StringCopy(&(Local_84[133 /*6*/]), "VEX_76_CHEETAH", 24);
	StringCopy(&(Local_1075[133 /*6*/]), "IE_TEXTVECH_76", 24);
	StringCopy(&(Local_84[134 /*6*/]), "VEX_77_CHEETAH", 24);
	StringCopy(&(Local_1075[134 /*6*/]), "IE_TEXTVECH_77", 24);
	StringCopy(&(Local_84[135 /*6*/]), "VEX_78_CHEETAH", 24);
	StringCopy(&(Local_1075[135 /*6*/]), "IE_TEXTVECH_78", 24);
	StringCopy(&(Local_84[136 /*6*/]), "VEX_79_NSHADE", 24);
	StringCopy(&(Local_1075[136 /*6*/]), "IE_TEXTVECH_79", 24);
	StringCopy(&(Local_84[137 /*6*/]), "VEX_80_NSHADE", 24);
	StringCopy(&(Local_1075[137 /*6*/]), "IE_TEXTVECH_80", 24);
	StringCopy(&(Local_84[138 /*6*/]), "VEX_81_NSHADE", 24);
	StringCopy(&(Local_1075[138 /*6*/]), "IE_TEXTVECH_81", 24);
	StringCopy(&(Local_84[139 /*6*/]), "VEX_82_BANSH2", 24);
	StringCopy(&(Local_1075[139 /*6*/]), "IE_TEXTVECH_82", 24);
	StringCopy(&(Local_84[140 /*6*/]), "VEX_83_BANSH2", 24);
	StringCopy(&(Local_1075[140 /*6*/]), "IE_TEXTVECH_84", 24);
	StringCopy(&(Local_84[141 /*6*/]), "VEX_84_BANSH2", 24);
	StringCopy(&(Local_1075[141 /*6*/]), "IE_TEXTVECH_85", 24);
	StringCopy(&(Local_84[142 /*6*/]), "VEX_82_TURIS", 24);
	StringCopy(&(Local_1075[142 /*6*/]), "IE_TEXTVECH_83", 24);
	StringCopy(&(Local_84[143 /*6*/]), "VEX_86_TURIS", 24);
	StringCopy(&(Local_1075[143 /*6*/]), "IE_TEXTVECH_86", 24);
	StringCopy(&(Local_84[144 /*6*/]), "VEX_87_TURIS", 24);
	StringCopy(&(Local_1075[144 /*6*/]), "IE_TEXTVECH_87", 24);
	StringCopy(&(Local_84[145 /*6*/]), "VEX_88_MASS", 24);
	StringCopy(&(Local_1075[145 /*6*/]), "IE_TEXTVECH_88", 24);
	StringCopy(&(Local_84[146 /*6*/]), "VEX_89_MASS", 24);
	StringCopy(&(Local_1075[146 /*6*/]), "IE_TEXTVECH_89", 24);
	StringCopy(&(Local_84[147 /*6*/]), "VEX_90_MASS", 24);
	StringCopy(&(Local_1075[147 /*6*/]), "IE_TEXTVECH_90", 24);
	StringCopy(&(Local_84[148 /*6*/]), "VEX_91_SABRE2", 24);
	StringCopy(&(Local_1075[148 /*6*/]), "IE_TEXTVECH_91", 24);
	StringCopy(&(Local_84[149 /*6*/]), "VEX_92_SABRE2", 24);
	StringCopy(&(Local_1075[149 /*6*/]), "IE_TEXTVECH_92", 24);
	StringCopy(&(Local_84[150 /*6*/]), "VEX_93_SABRE2", 24);
	StringCopy(&(Local_1075[150 /*6*/]), "IE_TEXTVECH_93", 24);
	StringCopy(&(Local_84[151 /*6*/]), "VEX_94_JESTER", 24);
	StringCopy(&(Local_1075[151 /*6*/]), "IE_TEXTVECH_94", 24);
	StringCopy(&(Local_84[152 /*6*/]), "VEX_95_JESTER", 24);
	StringCopy(&(Local_1075[152 /*6*/]), "IE_TEXTVECH_95", 24);
	StringCopy(&(Local_84[153 /*6*/]), "VEX_96_JESTER", 24);
	StringCopy(&(Local_1075[153 /*6*/]), "IE_TEXTVECH_96", 24);
	StringCopy(&(Local_84[154 /*6*/]), "GO_AS_PICM", 24);
	StringCopy(&(Local_1075[154 /*6*/]), "NHP_prep_autosalvage", 24);
	StringCopy(&(Local_84[155 /*6*/]), "GO_DR_PICM", 24);
	StringCopy(&(Local_1075[155 /*6*/]), "nhp_prep_daylightrob", 24);
	StringCopy(&(Local_84[156 /*6*/]), "FHTXT_DDR00M", 24);
	StringCopy(&(Local_1075[156 /*6*/]), "NHP_prep_deaddrop", 24);
	StringCopy(&(Local_84[157 /*6*/]), "BBTXT_CPS00M", 24);
	StringCopy(&(Local_1075[157 /*6*/]), "BAT_carpark_1", 24);
	StringCopy(&(Local_84[158 /*6*/]), "BBTXT_CPS10M", 24);
	StringCopy(&(Local_1075[158 /*6*/]), "BAT_carpark_2", 24);
	StringCopy(&(Local_84[159 /*6*/]), "BBTXT_CPS20M", 24);
	StringCopy(&(Local_1075[159 /*6*/]), "BAT_carpark_3", 24);
	StringCopy(&(Local_84[160 /*6*/]), "ICEBR_EMAIL", 24);
	StringCopy(&(Local_1075[160 /*6*/]), "ib_aircon", 24);
	StringCopy(&(Local_84[161 /*6*/]), "XM22FLOW_TXT_0", 24);
	StringCopy(&(Local_1075[161 /*6*/]), "PHONE_MESSAGE_D_DUDE", 24);
	if (func_58(unk_0x93E99A2DBCBA9CFA()) == 19)
	{
		StringCopy(&(Local_84[44 /*6*/]), "SNP_IMG_0_0", 24);
		StringCopy(&(Local_1075[44 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[45 /*6*/]), "SNP_IMG_0_1", 24);
		StringCopy(&(Local_1075[45 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[46 /*6*/]), "SNP_IMG_0_2", 24);
		StringCopy(&(Local_1075[46 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[47 /*6*/]), "SNP_IMG_0_3", 24);
		StringCopy(&(Local_1075[47 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[48 /*6*/]), "SNP_IMG_0_4", 24);
		StringCopy(&(Local_1075[48 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[49 /*6*/]), "SNP_IMG_0_5", 24);
		StringCopy(&(Local_1075[49 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[50 /*6*/]), "SNP_IMG_0_6", 24);
		StringCopy(&(Local_1075[50 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[51 /*6*/]), "SNP_IMG_0_7", 24);
		StringCopy(&(Local_1075[51 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[52 /*6*/]), "SNP_IMG_0_8", 24);
		StringCopy(&(Local_1075[52 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[53 /*6*/]), "SNP_IMG_0_9", 24);
		StringCopy(&(Local_1075[53 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_84[54 /*6*/]), "SNP_IMG_1_0", 24);
		StringCopy(&(Local_1075[54 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[55 /*6*/]), "SNP_IMG_1_1", 24);
		StringCopy(&(Local_1075[55 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[56 /*6*/]), "SNP_IMG_1_2", 24);
		StringCopy(&(Local_1075[56 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[57 /*6*/]), "SNP_IMG_1_3", 24);
		StringCopy(&(Local_1075[57 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[58 /*6*/]), "SNP_IMG_1_4", 24);
		StringCopy(&(Local_1075[58 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[59 /*6*/]), "SNP_IMG_1_5", 24);
		StringCopy(&(Local_1075[59 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[60 /*6*/]), "SNP_IMG_1_6", 24);
		StringCopy(&(Local_1075[60 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[61 /*6*/]), "SNP_IMG_1_7", 24);
		StringCopy(&(Local_1075[61 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[62 /*6*/]), "SNP_IMG_1_8", 24);
		StringCopy(&(Local_1075[62 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[64 /*6*/]), "SNP_IMG_1_9", 24);
		StringCopy(&(Local_1075[64 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_84[65 /*6*/]), "SNP_IMG_2_0", 24);
		StringCopy(&(Local_1075[65 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[66 /*6*/]), "SNP_IMG_2_1", 24);
		StringCopy(&(Local_1075[66 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[67 /*6*/]), "SNP_IMG_2_2", 24);
		StringCopy(&(Local_1075[67 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[68 /*6*/]), "SNP_IMG_2_3", 24);
		StringCopy(&(Local_1075[68 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[69 /*6*/]), "SNP_IMG_2_4", 24);
		StringCopy(&(Local_1075[69 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[70 /*6*/]), "SNP_IMG_2_5", 24);
		StringCopy(&(Local_1075[70 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[71 /*6*/]), "SNP_IMG_2_6", 24);
		StringCopy(&(Local_1075[71 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[72 /*6*/]), "SNP_IMG_2_7", 24);
		StringCopy(&(Local_1075[72 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[73 /*6*/]), "SNP_IMG_2_8", 24);
		StringCopy(&(Local_1075[73 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_84[74 /*6*/]), "SNP_IMG_2_9", 24);
		StringCopy(&(Local_1075[74 /*6*/]), "SCLUB_3", 24);
	}
	else if (func_57(unk_0x93E99A2DBCBA9CFA()) == 14)
	{
		StringCopy(&(Local_84[44 /*6*/]), "GBC_TM_TC100", 24);
		StringCopy(&(Local_1075[44 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[45 /*6*/]), "GBC_TM_TC101", 24);
		StringCopy(&(Local_1075[45 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[46 /*6*/]), "GBC_TM_TC102", 24);
		StringCopy(&(Local_1075[46 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[47 /*6*/]), "GBC_TM_TC103", 24);
		StringCopy(&(Local_1075[47 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[48 /*6*/]), "GBC_TM_TC104", 24);
		StringCopy(&(Local_1075[48 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[49 /*6*/]), "GBC_TM_TC105", 24);
		StringCopy(&(Local_1075[49 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_84[50 /*6*/]), "GBC_TM_TC110", 24);
		StringCopy(&(Local_1075[50 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[51 /*6*/]), "GBC_TM_TC111", 24);
		StringCopy(&(Local_1075[51 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[52 /*6*/]), "GBC_TM_TC120", 24);
		StringCopy(&(Local_1075[52 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[53 /*6*/]), "GBC_TM_TC121", 24);
		StringCopy(&(Local_1075[53 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[54 /*6*/]), "GBC_TM_TC130", 24);
		StringCopy(&(Local_1075[54 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[55 /*6*/]), "GBC_TM_TC140", 24);
		StringCopy(&(Local_1075[55 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[56 /*6*/]), "GBC_TM_TC200", 24);
		StringCopy(&(Local_1075[56 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[57 /*6*/]), "GBC_TM_TC201", 24);
		StringCopy(&(Local_1075[57 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[58 /*6*/]), "GBC_TM_TC202", 24);
		StringCopy(&(Local_1075[58 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[59 /*6*/]), "GBC_TM_TC203", 24);
		StringCopy(&(Local_1075[59 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[60 /*6*/]), "GBC_TM_TC204", 24);
		StringCopy(&(Local_1075[60 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[61 /*6*/]), "GBC_TM_TC205", 24);
		StringCopy(&(Local_1075[61 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_84[62 /*6*/]), "GBC_TM_TC210", 24);
		StringCopy(&(Local_1075[62 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[63 /*6*/]), "GBC_TM_TC211", 24);
		StringCopy(&(Local_1075[63 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[64 /*6*/]), "GBC_TM_TC220", 24);
		StringCopy(&(Local_1075[64 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_84[65 /*6*/]), "GBC_TM_TC221", 24);
		StringCopy(&(Local_1075[65 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[66 /*6*/]), "GBC_TM_TC230", 24);
		StringCopy(&(Local_1075[66 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_84[67 /*6*/]), "GBC_TM_TC240", 24);
		StringCopy(&(Local_1075[67 /*6*/]), "VC_TC_CASINOCCTV", 24);
	}
	else if (func_56(unk_0x93E99A2DBCBA9CFA()) == 30)
	{
		StringCopy(&(Local_84[44 /*6*/]), "CSH_TXT_MD_01M", 24);
		StringCopy(&(Local_1075[44 /*6*/]), "heist3_prep_maid01", 24);
		StringCopy(&(Local_84[45 /*6*/]), "CSH_TXT_MD_02M", 24);
		StringCopy(&(Local_1075[45 /*6*/]), "heist3_prep_maid02", 24);
	}
	else if (func_56(unk_0x93E99A2DBCBA9CFA()) == 32)
	{
		StringCopy(&(Local_84[44 /*6*/]), "CSHT_IMC_00M", 24);
		StringCopy(&(Local_1075[44 /*6*/]), "heist3_cashier1", 24);
		StringCopy(&(Local_84[45 /*6*/]), "CSHT_IMC_10M", 24);
		StringCopy(&(Local_1075[45 /*6*/]), "heist3_cashier2", 24);
		StringCopy(&(Local_84[46 /*6*/]), "CSHT_IMC_20M", 24);
		StringCopy(&(Local_1075[46 /*6*/]), "heist3_cashier3", 24);
		StringCopy(&(Local_84[47 /*6*/]), "CSHT_IMC_30M", 24);
		StringCopy(&(Local_1075[47 /*6*/]), "heist3_cashier4", 24);
	}
	else if (func_55(unk_0x93E99A2DBCBA9CFA()) == 17)
	{
		StringCopy(&(Local_84[44 /*6*/]), "ILHTEXT_SFE00M", 24);
		StringCopy(&(Local_1075[44 /*6*/]), "heist4_sec_guard", 24);
	}
	else if (func_54(unk_0x93E99A2DBCBA9CFA()) == 4)
	{
		StringCopy(&(Local_84[44 /*6*/]), "TR_TXT_CV1", 24);
		StringCopy(&(Local_1075[44 /*6*/]), "TUNER_TEXT_IMG_VIRUS", 24);
		StringCopy(&(Local_84[45 /*6*/]), "TR_TXT_CV2", 24);
		StringCopy(&(Local_1075[45 /*6*/]), "TUNER_TEXT_IMG_VIRUS_02", 24);
		StringCopy(&(Local_84[46 /*6*/]), "TR_TXT_CV3", 24);
		StringCopy(&(Local_1075[46 /*6*/]), "TUNER_TEXT_IMG_VIRUS_03", 24);
	}
	else if (func_54(unk_0x93E99A2DBCBA9CFA()) == 11)
	{
		StringCopy(&(Local_84[44 /*6*/]), "ROBTEXT_IAA00M", 24);
		StringCopy(&(Local_1075[44 /*6*/]), "TUNER_TEXT_IMG_IAA", 24);
	}
	else if (func_53(unk_0x93E99A2DBCBA9CFA()) == 4)
	{
		StringCopy(&(Local_84[44 /*6*/]), "FXR_TXT_WI1", 24);
		StringCopy(&(Local_1075[44 /*6*/]), "FXR_WAYIN", 24);
	}
	else if (func_48(unk_0x93E99A2DBCBA9CFA()) == 4)
	{
		StringCopy(&(Local_84[44 /*6*/]), "DL_TXT_PHOTO1", 24);
		StringCopy(&(Local_1075[44 /*6*/]), "UPDT2_2022_TEXT_IMG_1", 24);
		StringCopy(&(Local_84[45 /*6*/]), "DL_TXT_PHOTO2", 24);
		StringCopy(&(Local_1075[45 /*6*/]), "UPDT2_2022_TEXT_IMG_2", 24);
		StringCopy(&(Local_84[46 /*6*/]), "DL_TXT_PHOTO3", 24);
		StringCopy(&(Local_1075[46 /*6*/]), "UPDT2_2022_TEXT_IMG_3", 24);
	}
}

int func_48(int iParam0)
{
	if (func_52(iParam0) == 307)
	{
		return func_49(iParam0, 307);
	}
	return -1;
}

int func_49(int iParam0, int iParam1)
{
	if (func_52(iParam0) == iParam1)
	{
		return func_50(iParam0);
	}
	return -1;
}

int func_50(int iParam0)
{
	if (func_51(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_182;
	}
	return -1;
}

int func_51(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0)
{
	if (func_51(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

int func_53(int iParam0)
{
	if (func_52(iParam0) == 264)
	{
		return func_50(iParam0);
	}
	return -1;
}

int func_54(int iParam0)
{
	if (func_52(iParam0) == 271)
	{
		return func_50(iParam0);
	}
	return -1;
}

int func_55(int iParam0)
{
	if (func_52(iParam0) == 256)
	{
		return func_50(iParam0);
	}
	return -1;
}

int func_56(int iParam0)
{
	if (func_52(iParam0) == 158)
	{
		return func_50(iParam0);
	}
	return -1;
}

int func_57(int iParam0)
{
	if (func_52(iParam0) == 243)
	{
		return func_50(iParam0);
	}
	return -1;
}

int func_58(int iParam0)
{
	if (func_52(iParam0) == 237 || func_52(iParam0) == 250)
	{
		return func_50(iParam0);
	}
	return -1;
}

void func_59()
{
	if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) == 0)
	{
		func_60(0);
	}
	if (iLocal_2219)
	{
		unk_0xFBA79BC11313B81D(&uLocal_68);
	}
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

