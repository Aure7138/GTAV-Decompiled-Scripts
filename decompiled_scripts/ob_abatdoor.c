#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	struct<3> Local_4 = { 0, 0, 0 } ;
	struct<3> Local_7 = { 0, 0, 0 } ;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (unk_0x4B34601C5C56F3EE(2))
	{
		func_4();
	}
	if (unk_0xE5965CDF24F93A9F(uScriptParam_0))
	{
		unk_0x5C65DDDC219B3AA5(uScriptParam_0, 1);
		Local_4 = { unk_0x6B62510F212526DC(uScriptParam_0, 1) };
		Local_7 = { unk_0x63A8BF5E6C2BF85C(uScriptParam_0, 2) };
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xE5965CDF24F93A9F(uScriptParam_0))
		{
			if (unk_0xA7FB445015A2AF1C(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x8DEF8D80C66C34D4(uScriptParam_0))
						{
							unk_0xD69A0C3662175E68(joaat("p_abat_roller_1_col"));
							if (unk_0x0152AA00FA3130F1(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									uLocal_3 = unk_0x0E536D72AB30F4C8(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0x8CE3D365F064F69E(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x8DEF8D80C66C34D4(uScriptParam_0))
						{
							if (unk_0xB4C854DD86E40FDA(joaat("michael2")) > 0)
							{
								unk_0x8FB472886552D737("map_objects");
								if (unk_0x6F940C2636C076AD("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x8DEF8D80C66C34D4(uScriptParam_0))
						{
							if (unk_0xB4C854DD86E40FDA(joaat("michael2")) > 0)
							{
								if (Global_96872)
								{
									if (unk_0x6F940C2636C076AD("map_objects"))
									{
										unk_0xF07805FFBF204ED8(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0xE5965CDF24F93A9F(uLocal_3))
						{
							Var3 = { unk_0x6B62510F212526DC(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f, 0))
							{
								Var6 = { Var0 - Var3 };
								unk_0xC64B6E13A6A7F517(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0x51109C28352EC9A3()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_96873 = 1;
								iLocal_2 = 4;
							}
						}
						break;
					
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}
}

Vector3 func_1(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_2(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x48053974ED6F63CE((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x48053974ED6F63CE((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x48053974ED6F63CE((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_3(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_4()
{
	if (unk_0xE5965CDF24F93A9F(uLocal_3))
	{
		unk_0x4BDA5AFD88C085EB(&uLocal_3);
	}
	unk_0xF1A23B343DFEDFD0(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0xAFBDF6A5E54114C1();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0x3C57C2F07FEE34D2(uParam0, uParam0))
	{
	}
}

