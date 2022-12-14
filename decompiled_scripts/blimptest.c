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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_41 = joaat("blimp");
	iLocal_44 = joaat("s_m_m_pilot_02");
	iLocal_46 = joaat("buzzard");
	if (unk_0xA829C9A2767AC8EF())
	{
		unk_0x5A7ACD1CDF509B0D(500);
	}
	if (unk_0x4B34601C5C56F3EE(18))
	{
		func_18();
	}
	unk_0xC0F70A3CDEC87ECE(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0x71F4002CB1A0B451(255, 255, 255, 255);
		unk_0x3F03C2D4EFA888BC(0.75f, 0.9f);
		unk_0xE835F806BE49C67B(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0x71F4002CB1A0B451(255, 255, 255, 255);
		unk_0x3F03C2D4EFA888BC(0.4f, 0.45f);
		unk_0xE835F806BE49C67B(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (unk_0xE5965CDF24F93A9F(uLocal_40))
	{
		if ((unk_0x55B23FE400FCEA6B(uLocal_40, 0) || unk_0x0CF63873D754B965(uLocal_40) <= 0) || unk_0x20E1198E4672F72D(uLocal_40) <= 0f)
		{
			func_9(&uLocal_42);
			if (unk_0xE896049AD1887FF0(uLocal_40))
			{
				unk_0x90F8F7D270431FAE(uLocal_40);
			}
			if (iLocal_47 == 1)
			{
				Var0 = { unk_0x6B62510F212526DC(uLocal_40, 0) };
				func_8(Var0);
			}
			if (iLocal_47 == 1)
			{
				func_7(&uLocal_43);
				func_4(&uLocal_40);
			}
			else
			{
				func_3(&uLocal_43, 1, 0, 1);
				func_2(&uLocal_40);
			}
		}
		else if (unk_0xE896049AD1887FF0(uLocal_40))
		{
			unk_0xFFE9FF137BAFDFD8(uLocal_40, 0.25f);
		}
	}
}

void func_2(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		unk_0x55B23FE400FCEA6B(*uParam0, 0);
		if (unk_0xA6A089369417736E(*uParam0) && unk_0x930E64CB0285CAEC(*uParam0, 1))
		{
			unk_0x3D81769BEC61BFF8(uParam0);
		}
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (!unk_0xF68107C40359970C(*uParam0))
		{
			unk_0x006574E87E6F1942(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xCA2872F050840231(*uParam0);
			}
			unk_0xABC2CA6F28903308(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x50274A7EACA3133A(*uParam0, 0);
			}
		}
		unk_0xB3822DB3D538C8F3(uParam0);
	}
}

void func_4(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (!unk_0xA6A089369417736E(*uParam0))
		{
			unk_0x2D58A6131679D82C(*uParam0, 1, 0);
		}
		if (func_6(*uParam0))
		{
			if (unk_0xA6A089369417736E(*uParam0) && unk_0x930E64CB0285CAEC(*uParam0, 1))
			{
				if (func_5(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), *uParam0, 0))
					{
						unk_0x3D81769BEC61BFF8(uParam0);
						return;
					}
				}
				unk_0xD59CC8123FD1A789(uParam0);
			}
		}
		else
		{
			if (func_5(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), *uParam0, 0))
				{
					unk_0x3D81769BEC61BFF8(uParam0);
					return;
				}
			}
			unk_0xD59CC8123FD1A789(uParam0);
		}
	}
}

int func_5(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_6(var uParam0)
{
	if (func_5(uParam0))
	{
		if (unk_0x55A0C756C4A8220C(uParam0, 0))
		{
			if (!unk_0xEF9410C312F2B117(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(*uParam0, 0))
		{
			unk_0x006574E87E6F1942(*uParam0, 0, 1);
		}
		if (!unk_0xA6A089369417736E(*uParam0))
		{
			unk_0x2D58A6131679D82C(*uParam0, 1, 0);
		}
		unk_0x05CB75C0837196F9(uParam0);
	}
}

void func_8(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2[12];
	
	iVar1 = 12;
	Var2[0 /*3*/] = { 5f, 0f, 0f };
	Var2[1 /*3*/] = { 0f, 5f, 0f };
	Var2[2 /*3*/] = { 0f, 0f, 5f };
	Var2[3 /*3*/] = { 5f, 5f, 0f };
	Var2[4 /*3*/] = { 5f, 0f, 5f };
	Var2[5 /*3*/] = { 0f, 5f, 5f };
	Var2[6 /*3*/] = { 20f, 0f, 0f };
	Var2[7 /*3*/] = { 0f, 20f, 0f };
	Var2[8 /*3*/] = { 0f, 0f, 20f };
	Var2[9 /*3*/] = { 20f, 20f, 0f };
	Var2[10 /*3*/] = { 20f, 0f, 20f };
	Var2[11 /*3*/] = { 0f, 20f, 20f };
	unk_0x45B4BDAA12353E7D(Param0, 8, 1f, 1, 0, 1065353216, 0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0x45B4BDAA12353E7D(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216, 0);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (unk_0x12DD4A0B247D9B4D(*uParam0))
	{
		unk_0xAAD76B24A5282FDD(*uParam0, 0);
		unk_0xFFD8EB5462B07B59(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xCDDA0C58B818F6B2(sParam2);
	unk_0x1A53079994915FA6(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&uLocal_45);
	unk_0xD69A0C3662175E68(iLocal_46);
	while (!unk_0x0152AA00FA3130F1(iLocal_46))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_45 = unk_0xBA715A7BEBA5A1F9(iLocal_46, unk_0xCACAD935C0BEE14F(uLocal_40, 50f, 0f, 15f), 0f, 1, 1, 0);
		unk_0xBAAB64584D161C4D(uLocal_45);
		func_12(uLocal_45, uLocal_40);
		if (func_5(unk_0xE2D3D51028F0428A()))
		{
			unk_0xA9F390242F9EB2E1(unk_0xE2D3D51028F0428A(), uLocal_45, -1);
			unk_0x080C97B891E2F3AA(0f, 1065353216);
			unk_0x94953C3FF0664F66(0f);
			unk_0x7A997A0A971D305F(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 500f, 1, 0, 0, 0);
		}
	}
	unk_0xF1A23B343DFEDFD0(iLocal_46);
}

void func_12(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_13(unk_0x6B62510F212526DC(uParam0, 1), unk_0x6B62510F212526DC(uParam1, 1), 1);
	unk_0xBBF86885619695CE(uParam0, uVar0);
}

float func_13(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xC529D13129C03CF4(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_14()
{
	func_9(&uLocal_42);
	if (func_6(uLocal_40))
	{
		uLocal_42 = func_15(uLocal_40, 1, 5);
	}
}

int func_15(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_5(uParam0))
	{
		iVar0 = unk_0xEFD6451BF0F3352F(uParam0);
		unk_0xD809204F14EF9B68(iVar0, iParam1);
		unk_0x7A610B2EC5DA34E7(iVar0, iParam2);
		unk_0x293A9399E902A33B(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0xD69A0C3662175E68(iLocal_44);
	while (!unk_0x0152AA00FA3130F1(iLocal_44))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_43 = unk_0x487C17B41938052C(uLocal_40, 26, iLocal_44, -1, 1, 1);
		if (func_5(uLocal_43))
		{
			unk_0x50274A7EACA3133A(uLocal_43, 1);
			unk_0xD6A76BAB45A4B460(uLocal_43, 118, 0);
			unk_0xD6A76BAB45A4B460(uLocal_43, 29, 0);
			unk_0xD6A76BAB45A4B460(uLocal_43, 116, 0);
		}
	}
	if (func_6(uLocal_40))
	{
		unk_0x2F4DB11A0DB3685A(uLocal_40, 1, "Blimp_City", 1);
	}
	unk_0xF1A23B343DFEDFD0(iLocal_44);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(uLocal_40) && unk_0xE896049AD1887FF0(uLocal_40))
	{
		unk_0x90F8F7D270431FAE(uLocal_40);
	}
	func_9(&uLocal_42);
	func_7(&uLocal_43);
	func_4(&uLocal_40);
	unk_0xD69A0C3662175E68(iLocal_41);
	unk_0xB018BAA4ED9AA217(1, "Blimp_City");
	while (!unk_0x0152AA00FA3130F1(iLocal_41) || !unk_0xF777CAA43F4B281A(1, "Blimp_City"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Var0 = { unk_0xA978194A1E680F26(unk_0x395075B91017D334(1, "Blimp_City"), 0f) };
	uLocal_40 = unk_0xBA715A7BEBA5A1F9(iLocal_41, unk_0xAD6EF15CCC57AA73(unk_0x395075B91017D334(1, "Blimp_City"), 0f), Var0.f_2, 1, 1, 0);
	unk_0xF1A23B343DFEDFD0(iLocal_41);
}

void func_18()
{
	if (func_6(uLocal_40) && unk_0xE896049AD1887FF0(uLocal_40))
	{
		unk_0x90F8F7D270431FAE(uLocal_40);
	}
	unk_0xA72858C94E70296C(1, "Blimp_city");
	func_9(&uLocal_42);
	func_3(&uLocal_43, 1, 0, 1);
	func_2(&uLocal_40);
	func_2(&uLocal_45);
	unk_0xF1A23B343DFEDFD0(iLocal_44);
	unk_0xF1A23B343DFEDFD0(iLocal_41);
	unk_0xF1A23B343DFEDFD0(iLocal_46);
	unk_0xC0F70A3CDEC87ECE(6);
	unk_0xAFBDF6A5E54114C1();
}

