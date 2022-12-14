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
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<6> Local_52[25];
	int iLocal_203 = 0;
	struct<3> Local_204 = { 0, 0, 0 } ;
	struct<3> Local_207 = { 0, 0, 0 } ;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
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
	func_28();
	func_26();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_24 == 0)
		{
			if (Global_20383.f_1 != 9)
			{
				switch (Global_20383.f_1)
				{
					case 7:
						if ((iLocal_210 == 0 && iLocal_211 == 0) && Global_22760 == 0)
						{
							func_22();
							func_16();
						}
						break;
					
					case 8:
						if ((func_15(2, Global_20351, 0) && iLocal_210 == 0) && iLocal_211 == 0)
						{
							func_14();
							Global_20361 = 1;
							if (Global_20383.f_1 > 3)
							{
								if (BitTest(Global_8254, 15))
								{
								}
								func_13();
							}
						}
						break;
					
					default:
						break;
				}
				if (func_12())
				{
					func_11();
				}
				if (iLocal_210)
				{
					func_9();
				}
				if (iLocal_211)
				{
					func_8();
				}
			}
			else
			{
				Global_20385 = 6;
				func_11();
			}
		}
		else
		{
			func_2();
		}
		if (func_1())
		{
			func_11();
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
	iLocal_25 = unk_0x5EFC2F9A6A62E410(0);
	switch (iLocal_25)
	{
		case 0:
			iLocal_24 = 0;
			func_3();
			break;
		
		case 1:
			break;
		
		case 2:
			Global_20383.f_1 = 3;
			func_11();
			break;
	}
}

void func_3()
{
	int iVar0;
	
	func_7(Global_20364, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_21 = unk_0x47094652C167D3D0();
	iLocal_22 = 0;
	iVar0 = 0;
	while (iLocal_22 < iLocal_21)
	{
		if (unk_0x32646B2F68F1A2A1(iLocal_22))
		{
			func_6(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(0), -1f, -1f, &(Local_52[iLocal_22 /*6*/]), 0, 0, 0, 0);
			iLocal_26[iVar0] = iLocal_22;
			iVar0++;
		}
		iLocal_22++;
	}
	func_7(Global_20364, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_4(Global_20364, "SET_HEADER", "CELL_MSMENU_1", 0, 0, 0, 0);
	if (Global_20371)
	{
		func_6(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_6(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x061B1200C95204CB(&Global_8253, 17);
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0x9FD96C5DE6EDFC15(uParam0, sParam1);
	func_5(sParam2);
	if (!unk_0x2AC37494BBF1DB16(iParam3))
	{
		func_5(iParam3);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam4))
	{
		func_5(iParam4);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam5))
	{
		func_5(iParam5);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam6))
	{
		func_5(iParam6);
	}
	unk_0xAE3413B0654A0035();
}

void func_5(var uParam0)
{
	unk_0x2AF11E92DE43CDE3(uParam0);
	unk_0xF8FCA9E7130CE1C8();
}

void func_6(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_5(sParam7);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam8))
	{
		func_5(iParam8);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam9))
	{
		func_5(iParam9);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam10))
	{
		func_5(iParam10);
	}
	if (!unk_0x2AC37494BBF1DB16(iParam11))
	{
		func_5(iParam11);
	}
	unk_0xAE3413B0654A0035();
}

void func_7(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_8()
{
	if (iLocal_210 == 0 && iLocal_211 == 1)
	{
		if (iLocal_215)
		{
			Local_207.f_0 = (Local_207.f_0 + 1f);
		}
		if (Local_207.f_0 > Local_204.f_0 || Local_207.f_0 == Local_204.f_0)
		{
			Local_207.f_0 = Local_204.f_0;
			iLocal_215 = 0;
		}
		if (iLocal_216)
		{
			Local_207.f_1 = (Local_207.f_1 - 2f);
		}
		if (Local_207.f_1 < Local_204.f_1 || Local_207.f_1 == Local_204.f_1)
		{
			Local_207.f_1 = Local_204.f_1;
			iLocal_216 = 0;
		}
		if (iLocal_217)
		{
			Local_207.f_2 = (Local_207.f_2 - 7f);
		}
		if (Local_207.f_2 < Local_204.f_2 || Local_207.f_2 == Local_204.f_2)
		{
			Local_207.f_2 = Local_204.f_2;
			iLocal_217 = 0;
		}
		if ((iLocal_215 == 0 && iLocal_216 == 0) && iLocal_217 == 0)
		{
			iLocal_211 = 0;
			if (Global_20383.f_1 > 3)
			{
				Global_20383.f_1 = 7;
				unk_0xCD3C8E1022864F65(1);
				Global_22762 = 1;
				func_26();
			}
		}
		unk_0xB9A6388BF8103D8F(Local_207, 0);
	}
}

void func_9()
{
	if ((iLocal_210 == 1 && iLocal_211 == 0) && Global_22760 == 6)
	{
		if (iLocal_212)
		{
			Local_207.f_0 = (Local_207.f_0 - 1f);
		}
		if (Local_207.f_0 < Local_204.f_0 || Local_207.f_0 == Local_204.f_0)
		{
			Local_207.f_0 = Local_204.f_0;
			iLocal_212 = 0;
		}
		if (iLocal_213)
		{
			Local_207.f_1 = (Local_207.f_1 - 0.5f);
		}
		if (Local_207.f_1 < Local_204.f_1 || Local_207.f_1 == Local_204.f_1)
		{
			Local_207.f_1 = Local_204.f_1;
			iLocal_213 = 0;
		}
		if (iLocal_214)
		{
			Local_207.f_2 = (Local_207.f_2 + 7f);
		}
		if (Local_207.f_2 > Local_204.f_2 || Local_207.f_2 == Local_204.f_2)
		{
			Local_207.f_2 = Local_204.f_2;
			iLocal_214 = 0;
		}
		if ((iLocal_212 == 0 && iLocal_213 == 0) && iLocal_214 == 0)
		{
			iLocal_210 = 0;
			func_10("CELL_MSHELP_2");
		}
		unk_0xB9A6388BF8103D8F(Local_207, 0);
	}
	if (BitTest(Global_8254, 15))
	{
		iLocal_210 = 0;
		iLocal_211 = 0;
		func_7(Global_20364, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_6(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_MSMENU_3", 0, 0, 0, 0);
		if (Global_20371)
		{
			func_6(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
			func_6(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_6(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_6(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_6(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x061B1200C95204CB(&Global_8253, 17);
		func_7(Global_20364, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_4(Global_20364, "SET_HEADER", &(Local_52[iLocal_23 /*6*/]), 0, 0, 0, 0);
	}
}

void func_10(char* sParam0)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 1, 1, -1);
}

void func_11()
{
	Global_22762 = 1;
	unk_0xCD3C8E1022864F65(1);
	unk_0x675D9C12C73D3DE7();
}

int func_12()
{
	if (Global_8859 == 1 || Global_20383.f_1 < 7)
	{
		Global_20370 = 1;
		return 1;
	}
	return 0;
}

void func_13()
{
	if (iLocal_210 == 0)
	{
		unk_0xB6AD87092EBF0ADD(&Local_207, 0);
		Local_204 = { Global_20343 };
		iLocal_211 = 1;
		iLocal_215 = 1;
		iLocal_216 = 1;
		iLocal_217 = 1;
	}
}

void func_14()
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x531D638530A8DB97(-1, "Menu_Back", &Global_20372, 1);
	}
}

int func_15(int iParam0, int iParam1, int iParam2)
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

void func_16()
{
	if (iLocal_203)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_203 = 0;
		}
	}
	if (unk_0x42AAFCB5B7854AA9(2))
	{
		if (func_15(2, 181, 0))
		{
			func_20();
		}
		if (func_15(2, 180, 0))
		{
			func_17();
		}
	}
	if (iLocal_203 == 0)
	{
		if (func_15(2, Global_20359, 0))
		{
			func_20();
			iLocal_203 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_15(2, Global_20360, 0))
		{
			func_17();
			iLocal_203 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_17()
{
	func_7(Global_20364, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x531D638530A8DB97(-1, "Menu_Navigate", &Global_20372, 1);
	func_18();
}

void func_18()
{
	if (func_19())
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

int func_19()
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

void func_20()
{
	func_7(Global_20364, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x531D638530A8DB97(-1, "Menu_Navigate", &Global_20372, 1);
	func_21();
}

void func_21()
{
	if (func_19())
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

void func_22()
{
	int iVar0;
	
	if (Global_20361 == 0)
	{
		if (func_15(2, Global_20352, 0))
		{
			unk_0x061B1200C95204CB(&Global_8254, 15);
			func_24();
			Global_20361 = 1;
			unk_0x9FD96C5DE6EDFC15(Global_20364, "GET_CURRENT_SELECTION");
			uLocal_20 = unk_0x08320883763BEFA3();
			while (!unk_0x4F815B9C87A967FD(uLocal_20))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iVar0 = unk_0x67FFE44BB8589F1E(uLocal_20);
			if (iVar0 > -1)
			{
				iLocal_23 = iLocal_26[iVar0];
				if (Global_20383.f_1 > 3)
				{
					if (Global_22760 == 0)
					{
						func_7(Global_20364, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_6(Global_20364, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_MSMENU_2", 0, 0, 0, 0);
						func_7(Global_20364, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_4(Global_20364, "SET_HEADER", &(Local_52[iLocal_23 /*6*/]), 0, 0, 0, 0);
						if (Global_20371)
						{
							func_6(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
							func_6(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
						}
						else
						{
							func_6(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
							func_6(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_6(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x061B1200C95204CB(&Global_8253, 17);
						Global_22764 = iLocal_23;
						Global_22760 = 12;
						Global_20383.f_1 = 8;
						func_23();
					}
				}
			}
		}
	}
}

void func_23()
{
	if (iLocal_211 == 0)
	{
		unk_0xB6AD87092EBF0ADD(&Local_207, 0);
		Local_204 = { -90.3f, -0.8f, 90f };
		iLocal_210 = 1;
		iLocal_212 = 1;
		iLocal_213 = 1;
		iLocal_214 = 1;
	}
}

void func_24()
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x531D638530A8DB97(-1, "Menu_Accept", &Global_20372, 1);
		func_25();
	}
}

void func_25()
{
	if (func_19())
	{
		unk_0x8C27BB4299B24A0D(5);
	}
}

void func_26()
{
	if ((unk_0xCCE9BCDAB8B7FAED() || func_27()) || unk_0xCC17806DB0C41C19())
	{
		unk_0xBF8900ECCC35F55C();
		if (unk_0xED7229D7E32106FF(0))
		{
			iLocal_24 = 1;
		}
		else
		{
			Global_22762 = 1;
			Global_20383.f_1 = 3;
			func_11();
		}
	}
	else
	{
		func_3();
	}
}

var func_27()
{
	return (unk_0x8CCF8DC8E92BDA94() || unk_0x14F62099DEBAEA33());
}

void func_28()
{
	StringCopy(&(Local_52[0 /*6*/]), "CELL_MSSLOT_1", 24);
	StringCopy(&(Local_52[1 /*6*/]), "CELL_MSSLOT_2", 24);
	StringCopy(&(Local_52[2 /*6*/]), "CELL_MSSLOT_3", 24);
	StringCopy(&(Local_52[3 /*6*/]), "CELL_MSSLOT_4", 24);
	StringCopy(&(Local_52[4 /*6*/]), "CELL_MSSLOT_5", 24);
	StringCopy(&(Local_52[5 /*6*/]), "CELL_MSSLOT_6", 24);
	StringCopy(&(Local_52[6 /*6*/]), "CELL_MSSLOT_7", 24);
	StringCopy(&(Local_52[7 /*6*/]), "CELL_MSSLOT_8", 24);
	StringCopy(&(Local_52[8 /*6*/]), "CELL_MSSLOT_9", 24);
	StringCopy(&(Local_52[9 /*6*/]), "CELL_MSSLOT_10", 24);
	StringCopy(&(Local_52[10 /*6*/]), "CELL_MSSLOT_11", 24);
	StringCopy(&(Local_52[11 /*6*/]), "CELL_MSSLOT_12", 24);
	StringCopy(&(Local_52[12 /*6*/]), "CELL_MSSLOT_13", 24);
	StringCopy(&(Local_52[13 /*6*/]), "CELL_MSSLOT_14", 24);
	StringCopy(&(Local_52[14 /*6*/]), "CELL_MSSLOT_15", 24);
	StringCopy(&(Local_52[15 /*6*/]), "CELL_MSSLOT_16", 24);
	StringCopy(&(Local_52[16 /*6*/]), "CELL_MSSLOT_17", 24);
	StringCopy(&(Local_52[17 /*6*/]), "CELL_MSSLOT_18", 24);
	StringCopy(&(Local_52[18 /*6*/]), "CELL_MSSLOT_19", 24);
	StringCopy(&(Local_52[19 /*6*/]), "CELL_MSSLOT_20", 24);
}

