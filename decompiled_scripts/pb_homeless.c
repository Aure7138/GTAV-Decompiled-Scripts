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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<3> Local_47 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_47 = { ScriptParam_0.f_1[0 /*3*/] };
	iLocal_44 = unk_0x5853B15F78E1A265(0, 2);
	func_28();
	if (unk_0x4B34601C5C56F3EE(11))
	{
		func_28();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xC92F9F18E020B461())
		{
			if (func_8(3))
			{
				switch (iLocal_43)
				{
					case 0:
						if (iLocal_45 == 1)
						{
							iLocal_43 = 1;
						}
						else
						{
							func_7();
						}
						break;
					
					case 1:
						if (!unk_0x55B23FE400FCEA6B(iLocal_54, 0))
						{
							if (iLocal_46 == 0)
							{
								if (func_2(iLocal_54, 0, 1056964608, 0, 0, 0))
								{
									iLocal_46 = 1;
								}
							}
						}
						if (iLocal_56 == 0)
						{
							func_1();
						}
						break;
				}
			}
			else
			{
				func_28();
			}
		}
		else
		{
			func_28();
		}
	}
}

void func_1()
{
	if (unk_0xC9D9444186B5A374() > 10000)
	{
		if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_47, 10f, 10f, 10f, 0, 1, 0) && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			unk_0x5AE11BC36633DE4E(0);
			if (!unk_0x55B23FE400FCEA6B(iLocal_54, 0))
			{
				if (iLocal_44 == 0)
				{
					if (iLocal_46 == 0)
					{
					}
					unk_0xA888F8CC04F25CC8(&uLocal_57);
					unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
					unk_0x49D97B076E3590AC(0, "amb@drug_dealer", "beckon_03", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xC963A45B50851768(uLocal_57);
					unk_0x8ACADA903FCAA42F(iLocal_54, uLocal_57);
					unk_0x7461D7C5BA953BC7(&uLocal_57);
				}
				else if (!unk_0x55B23FE400FCEA6B(uLocal_55, 0))
				{
					unk_0x529D306014D3C29A(iLocal_54, iLocal_55, 0);
					if (iLocal_46 == 0)
					{
					}
					unk_0xD86A0BC9CC0A625A(iLocal_55, 1193033728, 0);
					iLocal_44 = 0;
				}
			}
		}
	}
}

int func_2(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	float fVar0;
	
	if (iParam4 == 2)
	{
		fVar0 = 150f;
	}
	else if (iParam4 == 1)
	{
		fVar0 = 100f;
	}
	else if (iParam4 == 0)
	{
		fVar0 = 40f;
	}
	switch (iParam3)
	{
		case 2:
			if (func_3(uParam0, func_6(iParam1, 2, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(uParam0, func_6(iParam1, 3, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(uParam0, func_6(iParam1, 5, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(uParam0, func_6(iParam1, 6, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(uParam0, func_6(iParam1, 7, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(uParam0, func_6(iParam1, 8, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
		
		case 1:
			if (func_3(uParam0, func_6(iParam1, 1, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
		
		case 0:
			if (func_3(uParam0, func_6(iParam1, 0, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_3(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6)
{
	float fVar0;
	struct<3> Var1;
	
	if (fParam5 < 1f)
	{
		fVar0 = (1f + 0.5f);
	}
	else
	{
		fVar0 = (fParam5 + 0.5f);
	}
	Var1 = { (fParam5 + 0.2f), (fParam5 + 0.2f), fVar0 };
	if (!unk_0xF68107C40359970C(uParam0))
	{
		if ((((unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), unk_0xCACAD935C0BEE14F(uParam0, Param1), Var1, 0, 1, 0) && unk_0xC9CD8C710046A3DD(unk_0xE2D3D51028F0428A(), unk_0x6B62510F212526DC(uParam0, 1), fParam4)) && func_5(bParam6)) && !unk_0x32DCDA1B2F8A0694(uParam0)) && !unk_0x03454821A9ECF4AA(uParam0))
		{
			func_4(uParam0, 1);
			return 1;
		}
		else
		{
			func_4(uParam0, 0);
		}
	}
	return 0;
}

void func_4(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	if (!unk_0x55B23FE400FCEA6B(uParam0, 0))
	{
	}
}

int func_5(bool bParam0)
{
	if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
	{
		if (bParam0)
		{
			if (unk_0x5E9B3BBF63A5E2F6(unk_0xE2D3D51028F0428A()) == 1f || unk_0x5E9B3BBF63A5E2F6(unk_0xE2D3D51028F0428A()) == 0f)
			{
				return 1;
			}
		}
		else if (unk_0x5E9B3BBF63A5E2F6(unk_0xE2D3D51028F0428A()) == 1f)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_6(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				Var0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				Var0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 3)
			{
				Var0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				Var0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 1:
			if (iParam0 == 3)
			{
				Var0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				Var0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 0)
			{
				Var0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				Var0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 2:
			if (iParam0 == 2)
			{
				Var0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				Var0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 1)
			{
				Var0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				Var0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 3:
			if (iParam0 == 1)
			{
				Var0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				Var0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 2)
			{
				Var0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				Var0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 5:
			if (iParam0 == 1)
			{
				Var0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				Var0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				Var0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				Var0 = { -fParam2, -fParam2, 0f };
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				Var0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				Var0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				Var0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				Var0 = { -fParam2, -fParam2, 0f };
			}
			break;
		
		case 7:
			if (iParam0 == 3)
			{
				Var0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				Var0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				Var0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				Var0 = { -fParam2, -fParam2, 0f };
			}
			break;
		
		case 8:
			if (iParam0 == 2)
			{
				Var0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				Var0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				Var0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				Var0 = { -fParam2, -fParam2, 0f };
			}
			break;
	}
	if (fParam2 < 0f)
	{
		fParam2 = (fParam2 * -1f);
	}
	return Var0;
}

void func_7()
{
	if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_47, 50f, 50f, 50f, 0, 1, 0))
	{
		unk_0xD69A0C3662175E68(joaat("a_m_o_tramp_01"));
		unk_0xD69A0C3662175E68(joaat("g_m_y_strpunk_01"));
		unk_0x8FB472886552D737("amb@drug_dealer");
		while ((!unk_0x0152AA00FA3130F1(joaat("a_m_o_tramp_01")) || !unk_0x0152AA00FA3130F1(joaat("g_m_y_strpunk_01"))) || !unk_0x6F940C2636C076AD("amb@drug_dealer"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xD642E010A287ADFD("homeless", &uLocal_53);
		Local_50.f_2 = (Local_47.f_2 - 1f);
		iLocal_54 = unk_0xA8D58C3AADA2C41C(19, joaat("a_m_o_tramp_01"), Local_47.f_0, Local_47.f_1, Local_50.f_2, 0f, 1, 1);
		unk_0xFF4BEB6CFF55A013(iLocal_54, uLocal_53);
		if (iLocal_44 == 1)
		{
			Local_50 = { unk_0xCACAD935C0BEE14F(iLocal_54, 0.8f, 0.8f, -1f) };
			iLocal_55 = unk_0xA8D58C3AADA2C41C(5, joaat("g_m_y_strpunk_01"), Local_50, 0f, 1, 1);
			unk_0xD642E010A287ADFD("homeless", &uLocal_53);
			unk_0xFF4BEB6CFF55A013(iLocal_55, uLocal_53);
			if (!unk_0x55B23FE400FCEA6B(iLocal_54, 0))
			{
				unk_0xA888F8CC04F25CC8(&uLocal_57);
				unk_0x1A96B8B416BC07D0(0, Local_50, 0);
				unk_0x49D97B076E3590AC(0, "amb@drug_dealer", "beckon_01", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xC963A45B50851768(uLocal_57);
				unk_0x8ACADA903FCAA42F(iLocal_54, uLocal_57);
				unk_0x7461D7C5BA953BC7(&uLocal_57);
			}
			if (!unk_0x55B23FE400FCEA6B(iLocal_55, 0))
			{
				unk_0xA888F8CC04F25CC8(&uLocal_57);
				unk_0x1A96B8B416BC07D0(0, Local_47, 0);
				unk_0x49D97B076E3590AC(0, "amb@drug_dealer", "beckon_02", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xC963A45B50851768(uLocal_57);
				unk_0x8ACADA903FCAA42F(iLocal_55, uLocal_57);
				unk_0x7461D7C5BA953BC7(&uLocal_57);
			}
		}
		iLocal_45 = 1;
	}
}

int func_8(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_27(6) || func_27(7))
			{
				return 1;
			}
			else
			{
				return func_8(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_25(5))
			{
				if (func_9(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				iVar0 = func_20();
				if (!func_19(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_18()) || Global_112433) || Global_31962) || func_17()) || func_16(8, -1)) || func_15()) || func_14()) || func_13()) || func_12()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1) || func_18()) || Global_31962) || func_17()) || func_16(8, -1)) || func_13()) || func_15()) || func_14()) || func_12()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_18()) || Global_112433) || Global_31962) || func_17()) || func_16(8, -1)) || func_13()) || func_15()) || func_14()) || func_12()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_18()) || Global_112433) || Global_31962) || func_17()) || func_16(8, -1)) || func_15()) || func_14()) || func_12()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_18() || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || func_16(8, -1)) || func_12()) || func_11()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_16(8, -1) || func_15()) || func_14()) || func_11()) || func_10())
						{
							return 0;
						}
						if ((unk_0x04458B4E5D9E466A() && unk_0xB6BDAC890771ED04() != 3) && unk_0xEEFB36B938654045() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
						{
							if ((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_18()) || Global_31962) || func_17()) || func_16(8, -1)) || func_14()) || func_13()) || func_12()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || func_18()) || func_14()) || Global_112433) || Global_31962) || func_17()) || Global_44238) || func_16(8, -1)) || func_13()) || func_11()) || func_12()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0)) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1)) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_18()) || Global_112433) || Global_31962) || func_17()) || func_16(8, -1)) || func_13()) || func_11()) || func_15()) || func_14()) || func_12())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_10()
{
	return Global_100480.f_1;
}

int func_11()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_12()
{
	if (unk_0xB4C854DD86E40FDA(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_13()
{
	if (Global_78579)
	{
		return 1;
	}
	else if (Global_63148 && !Global_63154)
	{
		return 1;
	}
	return 0;
}

bool func_14()
{
	return Global_100493.f_376 > 0;
}

bool func_15()
{
	return Global_100493.f_375 > 0;
}

var func_16(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1648034.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1648034.f_1048, iParam0);
}

var func_17()
{
	return Global_1575058;
}

int func_18()
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

var func_20()
{
	func_21();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_21()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_23(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_22(unk_0xE2D3D51028F0428A());
			if (func_19(iVar0) && (!func_27(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_19(Global_113386.f_2363.f_539.f_4321))
				{
					Global_113386.f_2363.f_539.f_4322 = Global_113386.f_2363.f_539.f_4321;
				}
				Global_113386.f_2363.f_539.f_4323 = iVar0;
				Global_113386.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113386.f_2363.f_539.f_4321 != 145)
			{
				Global_113386.f_2363.f_539.f_4323 = Global_113386.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_113386.f_2363.f_539.f_4321 = 145;
}

int func_22(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)
{
	if (func_19(iParam0))
	{
		return func_24(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_24(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_25(int iParam0)
{
	return func_26(iParam0, Global_43052);
}

int func_26(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_27(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_28()
{
	unk_0xAFBDF6A5E54114C1();
}

