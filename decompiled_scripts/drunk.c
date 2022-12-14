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
	struct<5> Local_43 = { 0, 0, 0, 0, 0 } ;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	char* sLocal_54 = NULL;
	struct<5> Local_55 = { 0, 0, 0, 0, 0 } ;
	struct<3> Local_60 = { 0, 0, 0 } ;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	bool bLocal_65 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_48 = -1;
	iLocal_49 = -1;
	fLocal_52 = 1.7f;
	fLocal_53 = 0f;
	sLocal_54 = "";
	iLocal_63 = -1;
	if (unk_0x55EEDBBFDC6E810F(2))
	{
		func_178();
	}
	Local_43 = { ScriptParam_0 };
	func_177();
	func_176();
	func_171(iLocal_48, 0, 0);
	unk_0xC1B1E9A034A63A62(0);
	func_170();
	func_166();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_165(iLocal_48);
		func_164();
		func_162();
		func_155();
		func_171(iLocal_48, 0, 0);
		func_177();
		func_9();
		if ((unk_0xA26A9A07F761D8F8() && !unk_0x1758F8A8511510AB()) && !func_8())
		{
			func_1();
		}
	}
}

void func_1()
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}
}

void func_2()
{
	if ((!func_4() && !func_3()) && Global_2684798)
	{
		Global_4718592.f_113724 = 0;
	}
}

bool func_3()
{
	return Global_2683862.f_691;
}

bool func_4()
{
	return Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_192 != 0;
}

void func_5()
{
	Global_2683862.f_756 = 1;
}

var func_6()
{
	return Global_2683862.f_735;
}

var func_7()
{
	return BitTest(Global_2683862.f_2, 11);
}

bool func_8()
{
	return BitTest(Global_2684799.f_1.f_2810, 3);
}

void func_9()
{
	bool bVar0;
	
	if (unk_0x055111B11E6624FD(Local_43.f_1, 0))
	{
		func_178();
	}
	if (bLocal_50)
	{
		if (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			func_178();
		}
	}
	func_154();
	bVar0 = true;
	switch (Local_60.f_0)
	{
		case 4:
			func_153();
			return;
		
		case 5:
			func_150();
			return;
		
		case 6:
			func_148();
			return;
		
		case 7:
			func_147();
			return;
		
		case 8:
			func_146();
			return;
		
		case 9:
			func_144();
			return;
		
		case 10:
			func_143();
			func_140();
			func_139();
			return;
		
		case 11:
			func_138();
			return;
		
		case 12:
			break;
		
		default:
			bVar0 = false;
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (!Local_60.f_0 == 12)
	{
		return;
	}
	switch (Local_60.f_1)
	{
		case 1:
			if (!func_137())
			{
				func_121();
				func_140();
			}
			break;
		
		case 2:
			func_119();
			break;
		
		case 12:
			func_106();
			break;
		
		case 3:
			func_10();
			break;
		
		default:
			break;
	}
}

void func_10()
{
	var uVar0;
	char* sVar2;
	struct<53> Var3;
	int iVar61;
	
	if (!BitTest(Global_1950108.f_3, 27))
	{
		unk_0x7E70B702E8033847(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	}
	Global_1944403 = 1;
	if (!unk_0x72474BA05A104E1E())
	{
		unk_0x6D5ACBBD4CE34249(2500);
		while (unk_0x984CA71F26DF483C())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		func_105(&uVar0, 0, 0);
		if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()) && !unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			unk_0x3298713EEACD1622(unk_0xC1A5EC5C986B98AD(), 0, 1);
		}
		while (((unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()) && !unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0)) && unk_0xC59A2EB21A3834E2(unk_0xC1A5EC5C986B98AD())) && unk_0xDD0946416C869FA2(unk_0xC1A5EC5C986B98AD()))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (!unk_0xC59A2EB21A3834E2(unk_0xC1A5EC5C986B98AD()))
		{
			func_178();
		}
		unk_0x061B1200C95204CB(&(Global_1950108.f_3), 27);
		func_91(unk_0x93E99A2DBCBA9CFA(), 0, 57344, 0);
		Global_2635559.f_2681 = 1;
		if (BitTest(Global_1950108, 15))
		{
			unk_0x061B1200C95204CB(&Global_1950108, 15);
		}
		if (BitTest(Global_1950108.f_2, 6))
		{
			unk_0x061B1200C95204CB(&(Global_1950108.f_2), 6);
		}
		if (unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
		{
			Global_2635559.f_2682 = 1;
		}
		else
		{
			Global_2635559.f_2682 = 0;
		}
		if (unk_0xC0A15A60BC0C570E())
		{
			unk_0x282AA8C5BDD0836B(0);
		}
		if (func_87(1))
		{
			func_75(0);
		}
		func_73(1);
		func_178();
	}
	if (bLocal_65)
	{
		func_178();
	}
	sVar2 = "";
	Var3.f_3 = 1064514355;
	Var3.f_30 = 1148829696;
	Var3.f_31 = 1148829696;
	Var3.f_52 = 1148829696;
	iVar61 = 7;
	switch (func_67())
	{
		case 0:
			if (func_65() != 2)
			{
				iVar61 = 0;
			}
			else
			{
				iVar61 = 1;
			}
			break;
		
		case 1:
			if (!func_64(126))
			{
				iVar61 = 2;
			}
			else
			{
				iVar61 = 3;
			}
			break;
		
		case 2:
			if (!func_63(4))
			{
				if (func_64(58))
				{
					iVar61 = 4;
				}
				if (func_64(59))
				{
					iVar61 = 5;
				}
				if (iVar61 == 7)
				{
					if (!func_62())
					{
						iVar61 = 4;
					}
					else
					{
						iVar61 = 5;
					}
				}
			}
			else
			{
				iVar61 = 6;
			}
			break;
	}
	switch (iVar61)
	{
		case 0:
			sVar2 = "DWC_MICHAEL_mansion";
			Var3.f_0 = "SAVEM_Default@";
			Var3.f_1 = "M_GetOut_R";
			Var3.f_2 = "M_GetOut_R_CAM";
			Var3.f_5 = { -814.181f, 181.1f, 75.74f };
			Var3.f_8 = { 0f, 0f, 21.1994f };
			Var3.f_4 = joaat("MotionState_Idle");
			break;
		
		case 1:
			sVar2 = "DWC_MICHAEL_trailer";
			Var3.f_0 = "SAVECountryside@";
			Var3.f_1 = "M_GetOut_countryside";
			Var3.f_2 = "M_GetOut_countryside_CAM";
			Var3.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var3.f_8 = { 0f, 0f, 29.7938f };
			Var3.f_4 = joaat("MotionState_Idle");
			break;
		
		case 2:
			sVar2 = "DWC_FRANKLIN_city";
			Var3.f_0 = "SWITCH@FRANKLIN@BED";
			Var3.f_1 = "Sleep_GetUp_RubEyes";
			Var3.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var3.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var3.f_8 = { 0f, 0f, -179.653f };
			Var3.f_4 = joaat("MotionState_Idle");
			break;
		
		case 3:
			sVar2 = "DWC_FRANKLIN_hills";
			Var3.f_0 = "SAVEBighouse@";
			Var3.f_1 = "F_GetOut_r_bighouse";
			Var3.f_2 = "F_GetOut_r_bighouse_CAM";
			Var3.f_5 = { -1.049f, 524.283f, 170.064f };
			Var3.f_8 = { 0f, 0f, 24f };
			Var3.f_4 = joaat("MotionState_Idle");
			break;
		
		case 4:
			sVar2 = "DWC_TREVOR_trailer";
			Var3.f_0 = "SAVECountryside@";
			Var3.f_1 = "T_GetOut_countryside";
			Var3.f_2 = "T_GetOut_countryside_CAM";
			Var3.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var3.f_8 = { 0f, 0f, 29.7938f };
			Var3.f_4 = joaat("MotionState_Idle");
			break;
		
		case 5:
			sVar2 = "DWC_TREVOR_beach";
			Var3.f_0 = "SAVEVeniceB@";
			Var3.f_1 = "T_GetOut_r_veniceB";
			Var3.f_2 = "T_GetOut_r_veniceB_CAM";
			Var3.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var3.f_8 = { 0f, 0f, 36.25f };
			Var3.f_4 = joaat("MotionState_Idle");
			break;
		
		case 6:
			sVar2 = "DWC_TREVOR_stripclub";
			Var3.f_0 = "SAVECouch@";
			Var3.f_1 = "T_GetOut_couch";
			Var3.f_2 = "T_GetOut_couch_CAM";
			Var3.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var3.f_8 = { 0f, 0f, 29.7938f };
			Var3.f_4 = joaat("MotionState_Idle");
			break;
	}
	if (!unk_0x055111B11E6624FD(Local_43.f_1, 0))
	{
		unk_0xC2E3C377D893C17A(Local_43.f_1, Var3.f_5, 1, 0, 0, 1);
	}
	unk_0x4EDE34FBADD967A6(500);
	StringCopy(&(Var3.f_11), "", 16);
	Var3.f_15 = -1f;
	func_12(sVar2, &Var3, "");
	func_11(126, 1);
	func_178();
}

void func_11(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59104[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		return;
	}
	if (Global_59104[iParam0 /*7*/])
	{
		unk_0xDD7756E2742E0F6D(Global_59104[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x3CC35ACFFC9C730E(Global_59104[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_12(char* sParam0, var uParam1, char* sParam2)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar174;
	int iVar175;
	char* sVar176;
	char* sVar177;
	char* sVar178;
	int iVar179;
	float fVar180;
	float fVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	float fVar185;
	struct<3> Var186;
	struct<3> Var189;
	float fVar192;
	float fVar193;
	float fVar194;
	struct<3> Var195;
	var uVar198;
	float fVar199;
	float fVar200;
	struct<3> Var201;
	struct<3> Var204;
	float fVar207;
	int iVar208;
	float fVar209;
	float fVar210;
	struct<3> Var211;
	var uVar214;
	float fVar215;
	float fVar216;
	struct<3> Var217;
	struct<3> Var220;
	float fVar223;
	int iVar224;
	bool bVar225;
	bool bVar226;
	int iVar227;
	
	fVar0 = 0f;
	unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), false, 0);
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 1);
	}
	unk_0xA172C350F431483A(uParam1->f_5, 4500f);
	unk_0x3056199EEBDE8CBB(uParam1->f_5, 4500f);
	unk_0xF82BC5193AF62796(uParam1->f_5, 5f, 1, 0, 0, 0);
	unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), uParam1->f_5, 1, 0, 0, 1);
	unk_0x2718E9CC165A99F6(unk_0xC1A5EC5C986B98AD(), true);
	unk_0x4EDE34FBADD967A6(0);
	unk_0x577AE0048ADA90C8(1);
	unk_0x28818732C8F0F80E(*uParam1);
	if (unk_0x2AC37494BBF1DB16(uParam1->f_16))
	{
	}
	else
	{
		unk_0x28818732C8F0F80E(uParam1->f_16);
	}
	if (!unk_0x72474BA05A104E1E())
	{
		unk_0x6D5ACBBD4CE34249(0);
	}
	func_57(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!unk_0x72474BA05A104E1E())
	{
		unk_0x6D5ACBBD4CE34249(0);
	}
	iVar1 = unk_0xA5E11AF0A2B928C1() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > unk_0xA5E11AF0A2B928C1())
	{
		bVar2 = true;
		unk_0x28818732C8F0F80E(*uParam1);
		if (!unk_0x2BBF749E555360DC(*uParam1))
		{
			bVar2 = false;
		}
		if (!unk_0x2AC37494BBF1DB16(uParam1->f_16))
		{
			unk_0x28818732C8F0F80E(uParam1->f_16);
			if (!unk_0x2BBF749E555360DC(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!unk_0x72474BA05A104E1E())
		{
			unk_0x6D5ACBBD4CE34249(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_54();
	if (!func_53(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0xB7C5BDA2BA69CE7F(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		unk_0x10DFA2EC4C030EB3(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 0, 0, 0, 0, 0, 0, 0);
		unk_0xF82BC5193AF62796(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 1, 0, 0, 0);
	}
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0xE90EAC9EC6471EB9(unk_0x93E99A2DBCBA9CFA());
		unk_0x8CC688927B10006C(unk_0xC1A5EC5C986B98AD(), joaat("weapon_unarmed"), 1);
		unk_0x35DD50D05C962B6A(unk_0xC1A5EC5C986B98AD());
	}
	unk_0x2718E9CC165A99F6(unk_0xC1A5EC5C986B98AD(), false);
	unk_0x577AE0048ADA90C8(0);
	unk_0xF82BC5193AF62796(uParam1->f_5, 15f, 1, 0, 0, 0);
	unk_0x1CC025DD90CB1D9C();
	unk_0xF55B077AE7451D3C();
	func_51();
	while (func_50())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x35DF833D93BCC488() && !unk_0x6C9BA681FB2251B6())
	{
		unk_0x78DD793477D04C42(250);
	}
	unk_0x0135E51BAD56ED58(1);
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		iVar4 = unk_0x191673E3F99212B2(uParam1->f_5, uParam1->f_8, 2);
		unk_0x5F243F8265BB664F(iVar4, 0);
		unk_0xE4E4F775E5660E56(iVar4, 0);
		uVar5 = unk_0xDEE46CEB08617ECA("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MotionState_Idle"))
		{
			iVar6 |= 2;
		}
		func_48(unk_0xC1A5EC5C986B98AD(), uParam1->f_18);
		unk_0x468D976993BF7FE1(unk_0xC1A5EC5C986B98AD(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		unk_0x0E667B18EBA21EC1(unk_0xC1A5EC5C986B98AD(), 1);
		unk_0x9AB15E4C594CE98B(unk_0x93E99A2DBCBA9CFA(), 1);
		iVar3 = unk_0xCF41CEFD254F0F1C(unk_0xC1A5EC5C986B98AD(), 77);
		unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 77, 1);
		unk_0x5950D902D5442CB4(uVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
		if (!unk_0x2AC37494BBF1DB16(uParam1->f_16) && !unk_0x2AC37494BBF1DB16(uParam1->f_17))
		{
			unk_0x3EE48ADC8C7F5CC4(unk_0xC1A5EC5C986B98AD(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!unk_0x2AC37494BBF1DB16(sParam2))
		{
			func_47(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!unk_0x2AC37494BBF1DB16(&(uParam1->f_11)))
	{
		iVar174 = func_67();
		iVar175 = -1;
		sVar176 = "";
		switch (iVar174)
		{
			case 0:
				iVar175 = 0;
				sVar176 = "MICHAEL";
				break;
			
			case 1:
				iVar175 = 1;
				sVar176 = "FRANKLIN";
				break;
			
			case 2:
				iVar175 = 2;
				sVar176 = "TREVOR";
				break;
			
			default:
				break;
		}
		func_46(&uVar9, iVar175, unk_0xC1A5EC5C986B98AD(), sVar176, 0, 1);
	}
	if (unk_0x411B750250543BD0(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (unk_0x411B750250543BD0(iVar4) && !unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (!bVar8)
			{
				if (!unk_0x72474BA05A104E1E())
				{
					if (!unk_0x2AC37494BBF1DB16(uParam1->f_26))
					{
						unk_0x451128B7D435FBF2(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!unk_0x2AC37494BBF1DB16(uParam1->f_27))
					{
						if (!unk_0x2AC37494BBF1DB16(uParam1->f_28))
						{
							unk_0x531D638530A8DB97(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!unk_0x2AC37494BBF1DB16(uParam1->f_29))
						{
							unk_0x531D638530A8DB97(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			unk_0xE288789FFB1A0C2F();
			unk_0xEDECDDE17C1E41F5(18);
			unk_0x1E408541295E76E9();
			func_40(0);
			iVar179 = unk_0xA5E11AF0A2B928C1();
			if (iVar179 >= (Global_43808 - 500))
			{
				func_39(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = unk_0xABF98B1999FE64CA(iVar4);
			if (!unk_0x2AC37494BBF1DB16(&(uParam1->f_11)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_15)
					{
						if (func_22(&uVar9, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			iVar182 = 0;
			if (unk_0x18D781E5FEB0E5E3(unk_0xC1A5EC5C986B98AD(), unk_0x14580F20CBCE4FA9(sVar177)))
			{
				iVar183 = (unk_0xAABBB04856172783(2, 195) - 128);
				iVar184 = (unk_0xAABBB04856172783(2, 196) - 128);
				if (((iVar183 < 64 && iVar183 > -64) && iVar184 < 64) && iVar184 > -64)
				{
				}
				else
				{
					iVar182 = 1;
				}
			}
			else
			{
				fVar180 = -1f;
				fVar181 = -1f;
				iVar182 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar180 = fVar180;
				fVar181 = fVar181;
			}
			if (unk_0x673F52632EDC33B7() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						Var186 = { unk_0x7D4F36E9E86B0A11() };
						Var189 = { unk_0x985D9D5ED4D5145A(unk_0xC1A5EC5C986B98AD(), 31086, 0f, 0f, 0f) };
						fVar192 = unk_0x2E496FE654DA4166(Var186, Var189, 1);
						fVar185 = func_21(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						func_20(&(uParam1->f_34), unk_0xC1A5EC5C986B98AD(), func_67(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0xA5E11AF0A2B928C1();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var195 = { unk_0x929C32C999805F0A(2) };
							uVar198 = unk_0xD850DD08D5434072(unk_0xC1A5EC5C986B98AD());
							fVar199 = Var195.f_2;
							fVar200 = uVar198;
							uParam1->f_57 = (fVar199 - fVar200);
							if (uParam1->f_57 < 360f)
							{
								uParam1->f_57 = (uParam1->f_57 + 360f);
							}
							if (uParam1->f_57 > 360f)
							{
								uParam1->f_57 = (uParam1->f_57 - 360f);
							}
						}
						fVar193 = uParam1->f_56;
						fVar194 = uParam1->f_57;
						unk_0xEAB390443C680F72(fVar193, 1065353216);
						unk_0xAABD7B0753C5C286(fVar194);
						unk_0x0C558E3FC6655AE1(fVar193);
						unk_0xED3101A36C29077E(fVar194);
						Var201 = { unk_0x7D4F36E9E86B0A11() };
						Var204 = { unk_0xAB9327AF433C2E46() };
						fVar207 = unk_0x2E496FE654DA4166(Var201, Var204, 1);
						iVar208 = unk_0xF2DB717A73826179((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						unk_0x17062EAFB894161D();
						if (func_16(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (unk_0x18D781E5FEB0E5E3(unk_0xC1A5EC5C986B98AD(), unk_0x14580F20CBCE4FA9(sVar178)) || iVar182)
			{
				if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
				{
					unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							unk_0xC5F9EF8F410596F9(unk_0xC1A5EC5C986B98AD(), joaat("MotionState_Idle"), 1, 0, 0);
							unk_0x4A954DC99388FAC2(0, 0, 3, 0);
							break;
						
						case joaat("MotionState_Walk"):
							unk_0xC5F9EF8F410596F9(unk_0xC1A5EC5C986B98AD(), joaat("MotionState_Walk"), 1, 0, 0);
							unk_0x6C7E85F31A43117F(unk_0x93E99A2DBCBA9CFA(), 1f, 500, 0, 1, 0);
							if (unk_0x673F52632EDC33B7() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var211 = { unk_0x929C32C999805F0A(2) };
									uVar214 = unk_0xD850DD08D5434072(unk_0xC1A5EC5C986B98AD());
									fVar215 = Var211.f_2;
									fVar216 = uVar214;
									uParam1->f_31 = (fVar215 - fVar216);
									if (uParam1->f_31 < 360f)
									{
										uParam1->f_31 = (uParam1->f_31 + 360f);
									}
									if (uParam1->f_31 > 360f)
									{
										uParam1->f_31 = (uParam1->f_31 - 360f);
									}
								}
								fVar209 = uParam1->f_30;
								fVar210 = uParam1->f_31;
								unk_0xEAB390443C680F72(fVar209, 1065353216);
								unk_0xAABD7B0753C5C286(fVar210);
								Var217 = { unk_0x7D4F36E9E86B0A11() };
								Var220 = { unk_0xAB9327AF433C2E46() };
								fVar223 = unk_0x2E496FE654DA4166(Var217, Var220, 1);
								iVar224 = unk_0xF2DB717A73826179((fVar223 * 1000f));
								unk_0x9E2404A25985615A(0, 1, iVar224, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (unk_0x411B750250543BD0(iVar4))
					{
						unk_0x3866645EE42F5E80(iVar4);
						iVar4 = -1;
					}
				}
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (!func_53(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0x5F130139CEA77D3E(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), true, 0);
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
	}
	bVar225 = unk_0x00F8BF2CF065CEF2();
	bVar226 = false;
	if (uParam1->f_32)
	{
		unk_0x17062EAFB894161D();
		if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar226 = true;
		}
	}
	if (bVar225 || bVar226)
	{
		while ((bVar225 || bVar226) && !unk_0xB53553DC4AAC7D8A())
		{
			if (bVar225)
			{
			}
			if (bVar226)
			{
			}
			iVar227 = 2;
			func_15(1, 26, &iVar227);
			func_15(1, 79, &iVar227);
			func_15(1, 1, &iVar227);
			func_15(1, 2, &iVar227);
			func_15(0, 22, &iVar227);
			func_15(0, 36, &iVar227);
			func_15(0, 142, &iVar227);
			func_15(0, 141, &iVar227);
			func_15(0, 140, &iVar227);
			func_15(0, 263, &iVar227);
			func_15(0, 264, &iVar227);
			unk_0x4EDE34FBADD967A6(0);
			bVar225 = unk_0x00F8BF2CF065CEF2();
			bVar226 = false;
			if (uParam1->f_32)
			{
				unk_0x17062EAFB894161D();
				if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!unk_0x2AC37494BBF1DB16(uParam1->f_16))
	{
		unk_0x0B34FA69ECCE3927(uParam1->f_16);
	}
	unk_0x0B34FA69ECCE3927(*uParam1);
	unk_0x42B9FA814615C4F9(uVar5, 0);
	func_13(&(uParam1->f_34));
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 77, iVar3);
		unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
	}
	sParam0 = sParam0;
}

void func_13(var uParam0)
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_14(var uParam0)
{
	if (unk_0xF57C1326FD40C8A7(uParam0->f_1))
	{
		unk_0x42B9FA814615C4F9(uParam0->f_1, 0);
	}
	if (unk_0xF57C1326FD40C8A7(uParam0->f_2))
	{
		unk_0x42B9FA814615C4F9(uParam0->f_2, 0);
	}
	if (unk_0xF57C1326FD40C8A7(uParam0->f_3))
	{
		unk_0x42B9FA814615C4F9(uParam0->f_3, 0);
	}
	if (unk_0xF57C1326FD40C8A7(uParam0->f_4))
	{
		unk_0x42B9FA814615C4F9(uParam0->f_4, 0);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	unk_0x8B438725D591ED78(iParam0, iParam1, 1);
	*iParam2++;
}

int func_16(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	var uVar21;
	
	switch (*uParam0)
	{
		case 0:
			func_17();
			if (!unk_0x055111B11E6624FD(uParam0->f_5, 0))
			{
				func_14(uParam0);
				Var0 = { unk_0x7D4F36E9E86B0A11() };
				if (bParam1)
				{
					Var0 = { Var0 + unk_0x7A2C98D06C9C1956(uParam0->f_5) * FtoV(unk_0x290D4E218346D595()) };
				}
				Var3 = { unk_0x5DC36ABEC3A264E9(uParam0->f_5, Var0) };
				Var6 = { unk_0x929C32C999805F0A(2) };
				Var9 = { Var6 + uParam0->f_9 };
				Var12 = { Var9 - unk_0x000D018EA42688BA(uParam0->f_5, 2) };
				Var15 = { (-unk_0x0BADBFA3B172435F(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), (unk_0xD0FFB162F40A139C(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), unk_0x0BADBFA3B172435F(Var9.f_0) };
				Var18 = { (-unk_0x0BADBFA3B172435F(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), (unk_0xD0FFB162F40A139C(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), unk_0x0BADBFA3B172435F(Var12.f_0) };
				uVar21 = unk_0x6F6AA2FCE9B0E8C2();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0x002AF75213D62F6C(1775630800, 0);
				}
				uParam0->f_1 = unk_0x002AF75213D62F6C(26379945, 1);
				if (bParam1)
				{
					unk_0xB109E9D7B544BA66(uParam0->f_1, uParam0->f_5, Var3, 1);
				}
				else
				{
					unk_0x5BF3CF5BAF6ABBBB(uParam0->f_1, Var0);
				}
				unk_0xB346B70AE8C42AD8(uParam0->f_1, Var6, 2);
				unk_0xE3BD36CCB5EB72F2(uParam0->f_1, uVar21);
				uParam0->f_2 = unk_0x002AF75213D62F6C(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0xB109E9D7B544BA66(uParam0->f_2, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0x5BF3CF5BAF6ABBBB(uParam0->f_2, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0xB346B70AE8C42AD8(uParam0->f_2, Var6, 2);
				unk_0xE3BD36CCB5EB72F2(uParam0->f_2, uVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0x002AF75213D62F6C(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0xB109E9D7B544BA66(uParam0->f_4, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0x5BF3CF5BAF6ABBBB(uParam0->f_4, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0xB346B70AE8C42AD8(uParam0->f_4, Var6, 2);
					unk_0xE3BD36CCB5EB72F2(uParam0->f_4, uVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0xB4746583AF2DB3C1(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0xB4746583AF2DB3C1(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0xB4746583AF2DB3C1(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0x27B9640830290FE3(uParam0->f_3, iParam6);
					unk_0xEEF11E0DB5769366(uParam0->f_3, 1);
				}
				else
				{
					unk_0x6FF2543994335DB3(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0xA5E11AF0A2B928C1();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_17();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (unk_0xA5E11AF0A2B928C1() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0x451128B7D435FBF2("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0x451128B7D435FBF2("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0x451128B7D435FBF2("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0x451128B7D435FBF2("CamPushInNeutral", 0, 0);
						}
						unk_0x531D638530A8DB97(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0xA5E11AF0A2B928C1() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_14(uParam0);
					unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_17()
{
	unk_0x063E0F2515867ED4();
	func_18();
}

void func_18()
{
	Global_23131.f_134 = 1;
}

void func_19(var uParam0, struct<3> Param1)
{
	uParam0->f_9 = { Param1 };
}

void func_20(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
}

float func_21(float fParam0, float fParam1, float fParam2)
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

bool func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21732 = 0;
	Global_21734 = 0;
	Global_21739 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
{
	Global_21726 = 0;
	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam1 > Global_21727)
			{
				if (Global_21732 == 0)
				{
					unk_0xD6625E11483B2324(0);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
					Global_21736 = 0;
					Global_21735 = 0;
					Global_20382 = 0;
				}
				else
				{
					func_37();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x0DCB385165FDE763())
		{
			return 0;
		}
		if (func_36(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_35();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_22721 = Global_22722;
		Global_21344.f_370 = Global_22714;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21721 = Global_21722;
		if (Global_21731)
		{
			unk_0x061B1200C95204CB(&Global_8253, 20);
			unk_0x061B1200C95204CB(&Global_8254, 17);
			unk_0x061B1200C95204CB(&Global_8255, 0);
			if (bParam2)
			{
				func_33();
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20383.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20349 == 1)
			{
				return 0;
			}
			if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
			{
				if (unk_0xE3A9F9074FB79A61(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (func_32())
				{
					return 0;
				}
				if (unk_0xFC42DF91E1950588(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (unk_0xA92CED053FDC0D06(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (unk_0x87B83AFF6D0F83FD(unk_0xC1A5EC5C986B98AD(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78558)
				{
					if (unk_0x1589BC95A4C50F21(unk_0xC1A5EC5C986B98AD()))
					{
						return 0;
					}
					if (unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA()))
					{
						return 0;
					}
					if (unk_0x197DD015F81B0D16(unk_0xC1A5EC5C986B98AD()))
					{
						return 0;
					}
					if (unk_0xF56A91A191EDA1FC(unk_0x93E99A2DBCBA9CFA(), 0))
					{
						return 0;
					}
				}
			}
			if (func_31())
			{
				return 0;
			}
			else
			{
				switch (Global_20383.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8253, 9))
				{
					return 0;
				}
			}
			func_30();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_29();
		func_24();
		return 1;
	}
	if (Global_21725 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21727 || iParam1 == Global_21727)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_37();
	}
	return 0;
}

void func_24()
{
	if (!func_25())
	{
		return;
	}
	if (Global_21731)
	{
		MemCopy(&(Global_1977511.f_1), {Global_21344}, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}
}

int func_25()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_28())
	{
		return 0;
	}
	if (func_26(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	if (BitTest(Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x1758F8A8511510AB())
	{
		return 0;
	}
	return 1;
}

bool func_26(int iParam0)
{
	return func_27(iParam0, 20);
}

var func_27(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_28()
{
	return -1;
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD6625E11483B2324(0);
	Global_21725 = 1;
}

void func_30()
{
	Global_21778 = Global_21777;
	Global_21772 = Global_21773;
	Global_21819 = { Global_21807 };
	Global_21825 = { Global_21813 };
	Global_21780 = Global_21779;
	Global_21849 = { Global_21831 };
	Global_21855 = { Global_21837 };
	Global_21861 = { Global_21843 };
	Global_21867 = { Global_21873 };
	Global_7568 = Global_7569;
	Global_7570 = Global_7571;
	Global_21736 = Global_21737;
	Global_21738 = Global_21739;
	Global_21740 = { Global_21756 };
	Global_21729 = Global_21730;
	Global_22741 = 0;
	Global_21774 = 0;
	Global_21775 = 0;
	unk_0x061B1200C95204CB(&Global_8254, 16);
}

int func_31()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_32()
{
	int iVar0;
	int iVar1;
	
	if (Global_78558)
	{
		iVar0 = 0;
		unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &iVar1, 1);
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC67B4044F323AEB2() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x97247A0CAE4CEFB6(unk_0xC1A5EC5C986B98AD(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_33()
{
	if (func_34(14))
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
		Global_20383 = func_67();
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

bool func_34(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21014[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21014[iVar0 /*10*/].f_1), "", 24);
		Global_21014[iVar0 /*10*/].f_7 = 0;
		Global_21014[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21014.f_161 = -99;
	Global_21014.f_162 = { 0f, 0f, 0f };
}

bool func_36(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1653913.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1653913.f_1048, iParam0);
}

void func_37()
{
	unk_0x782234C275AFBA24();
	Global_22736 = 0;
	if ((unk_0xE444FD7526C8BB46() || Global_20383.f_1 == 9) || Global_20382 == 1)
	{
		unk_0xD6625E11483B2324(0);
		Global_21725 = 6;
		Global_20383.f_1 = 3;
		return;
	}
	if (unk_0x0DCB385165FDE763())
	{
		unk_0xD6625E11483B2324(1);
		Global_21725 = 6;
		return;
	}
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	StringCopy(&Global_21795, sParam2, 24);
	Global_22714 = uParam5;
	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}
}

void func_39(int iParam0)
{
	Global_43808 = (unk_0xA5E11AF0A2B928C1() + iParam0);
}

void func_40(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (!Global_20383.f_1 == 1)
	{
		if (func_44(0))
		{
			func_41(iParam0);
		}
		unk_0xECDAB41968FF21A8(&Global_8254, 2);
	}
}

void func_41(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_43())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
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
	if (!func_31())
	{
		Global_20383.f_1 = 3;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
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

bool func_43()
{
	return BitTest(Global_1962996, 5);
}

int func_44(int iParam0)
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

bool func_45()
{
	return BitTest(Global_1962996, 19);
}

void func_46(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78558)
	{
		if (!unk_0x66599E73DBA5A850(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xAD4CEC14FE6404F6(iParam2, 0);
			}
			else
			{
				unk_0xAD4CEC14FE6404F6(iParam2, 1);
			}
		}
		if (!unk_0x66599E73DBA5A850(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59B8D6E436F5B21C(iParam2, 0);
			}
			else
			{
				unk_0x59B8D6E436F5B21C(iParam2, 1);
			}
		}
	}
}

void func_47(char* sParam0, int iParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
}

void func_48(int iParam0, var uParam1)
{
	if (func_49(uParam1, 1))
	{
		unk_0xF7E0E1B75B1BE2B6(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_49(uParam1, 2))
	{
		unk_0xF7E0E1B75B1BE2B6(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_49(uParam1, 4))
	{
		unk_0xF7E0E1B75B1BE2B6(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_49(uParam1, 8))
	{
		unk_0xF7E0E1B75B1BE2B6(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_49(uParam1, 16))
	{
		unk_0xF7E0E1B75B1BE2B6(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_49(uParam1, 32))
	{
		unk_0xF7E0E1B75B1BE2B6(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_49(uParam1, 64))
	{
		unk_0xF7E0E1B75B1BE2B6(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_49(uParam1, 128))
	{
		unk_0xF7E0E1B75B1BE2B6(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_49(uParam1, 256))
	{
		unk_0xF7E0E1B75B1BE2B6(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_49(uParam1, 512))
	{
		unk_0xF7E0E1B75B1BE2B6(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_49(uParam1, 0))
	{
	}
}

bool func_49(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_50()
{
	if (((Global_100681 == 13 || Global_100681 == 10) || Global_100681 == 11) || Global_100681 == 12)
	{
		return 0;
	}
	return 1;
}

void func_51()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_97614[iVar0 /*17*/] && !Global_97614[iVar0 /*17*/].f_1)
		{
			if (Global_97614[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_97614[iVar0 /*17*/].f_5 != 88 && Global_97614[iVar0 /*17*/].f_5 != 89) && Global_97614[iVar0 /*17*/].f_5 != 92)
				{
					func_52(Global_97614[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_52(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94666[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94666[iParam0 /*2*/] = 0;
	}
}

bool func_53(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_54()
{
	func_55();
	func_73(1);
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_44232[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_171(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_44206[iVar2 /*5*/] == 0)
		{
			func_56(iVar2);
		}
		iVar2++;
	}
}

void func_56(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_44206[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_44206[iParam0 /*5*/].f_1 == unk_0xC1A5EC5C986B98AD())
		{
			Global_44444 = 0;
		}
	}
	Global_44206[iParam0 /*5*/] = 13;
	Global_44206[iParam0 /*5*/].f_1 = 0;
	Global_44206[iParam0 /*5*/].f_2 = 0;
	Global_44206[iParam0 /*5*/].f_3 = 0;
	Global_44206[iParam0 /*5*/].f_4 = 0;
	Global_44204 = (Global_44204 - 1);
	if (Global_44204 < 0)
	{
		Global_44204 = 0;
	}
}

int func_57(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		func_61(0);
		unk_0xF82BC5193AF62796(Param0, 5f, 1, 0, 0, 0);
		if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), Param0, 1, 0, 0, 1);
				unk_0x692C3FDAD7DB53CC(unk_0xC1A5EC5C986B98AD(), uParam3);
				unk_0xEAB390443C680F72(0f, 1065353216);
				unk_0xAABD7B0753C5C286(0f);
			}
		}
		unk_0x46D9CC780489C728(Param0, 4500f, 0);
		unk_0x4EDE34FBADD967A6(0);
		unk_0xF82BC5193AF62796(Param0, 5000f, 1, 0, 0, 0);
		unk_0x2117C3CCFF2D957A(Param0, 5000f, 0);
		unk_0xA172C350F431483A(Param0, 5000f);
		unk_0x3056199EEBDE8CBB(Param0, 5000f);
		func_60();
		func_59();
		unk_0xC1B1E9A034A63A62(0);
		func_61(1);
		if (!unk_0x58A962BEF2DDE1DF())
		{
			while (!unk_0x46D9CC780489C728(Param0, 4500f, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					unk_0x577AE0048ADA90C8(0);
					return 0;
				}
			}
		}
		unk_0xC1B1E9A034A63A62(0);
		while (!unk_0x16760C7780F48003())
		{
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x83666F9FB8FEBD4B() > 20000)
			{
				unk_0x577AE0048ADA90C8(0);
				if (unk_0x58A962BEF2DDE1DF())
				{
					unk_0xB942AB5E12BF630A();
				}
				return 0;
			}
		}
		if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x58A962BEF2DDE1DF())
				{
					unk_0xB942AB5E12BF630A();
				}
				unk_0x577AE0048ADA90C8(0);
				unk_0xC1B1E9A034A63A62(0);
				unk_0x1CC025DD90CB1D9C();
				if (iParam5 == 1)
				{
					unk_0xF55B077AE7451D3C();
				}
				else
				{
					unk_0xC1B1E9A034A63A62(5000);
				}
				unk_0xC1AE78F8D627C659();
			}
		}
		while ((!unk_0x4CD3268F93CFCDC3() && !func_58()) && unk_0x83666F9FB8FEBD4B() < 1500)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (unk_0x83666F9FB8FEBD4B() > 1500)
		{
			if (iParam5 == 1)
			{
			}
		}
		if (iParam4 == 1)
		{
			unk_0xDE209AFE421606C6(Param0, &(Param0.f_2), 0, 0);
			unk_0xF82BC5193AF62796(Param0, 5f, 1, 0, 0, 0);
			if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
			{
				if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
				{
					unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), Param0, 1, 0, 0, 1);
					unk_0x692C3FDAD7DB53CC(unk_0xC1A5EC5C986B98AD(), uParam3);
				}
			}
		}
		unk_0xEAB390443C680F72(0f, 1065353216);
		unk_0xAABD7B0753C5C286(0f);
		func_61(0);
		return 1;
	}
	func_61(0);
	return 0;
}

bool func_58()
{
	return !Global_77348.f_553;
}

void func_59()
{
	Global_77348.f_553 = 1;
	Global_77348.f_554 = 0;
}

void func_60()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_77348[iVar0] = 0;
		iVar0++;
	}
}

void func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!BitTest(Global_100681.f_20, 2))
			{
				unk_0x577AE0048ADA90C8(1);
				unk_0xECDAB41968FF21A8(&(Global_100681.f_20), 2);
			}
		}
		else if (BitTest(Global_100681.f_20, 2))
		{
			unk_0x577AE0048ADA90C8(0);
			unk_0x061B1200C95204CB(&(Global_100681.f_20), 2);
		}
	}
}

int func_62()
{
	if (BitTest(unk_0x15A88CFAAFFC6C4B(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_63(int iParam0)
{
	return BitTest(Global_113648.f_7231[iParam0], 0);
}

int func_64(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113648.f_9087.f_99.f_58[iParam0];
}

int func_65()
{
	if (Global_40195[11] == 1)
	{
		return 4;
	}
	if (!func_66(21))
	{
		return 0;
	}
	if (!func_64(130))
	{
		return 1;
	}
	if (!func_64(131))
	{
		return 2;
	}
	if (!func_66(22))
	{
		return 1;
	}
	if (!func_66(49))
	{
		return 3;
	}
	if (!func_66(28))
	{
		return 1;
	}
	return 3;
}

int func_66(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

int func_67()
{
	func_68();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_68()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_71(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_70(unk_0xC1A5EC5C986B98AD());
			if (func_69(iVar0) && (!func_34(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_69(Global_113648.f_2365.f_539.f_4321))
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

bool func_69(int iParam0)
{
	return iParam0 < 3;
}

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_71(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_71(int iParam0)
{
	if (func_69(iParam0))
	{
		return func_72(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_72(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_73(bool bParam0)
{
	unk_0x8660199B2F4898FA(0f);
	unk_0x7BCAFEC02B563C0E(0f);
	unk_0x349662FEA4ECE81F(0f);
	unk_0x7EC07327DEB05AC6(1);
	unk_0xE4752D69CC8F9119(0f);
	unk_0x1936275185C4A0E5(1);
	unk_0xBF6A4C0559E4BF39(0);
	if (unk_0xD19C2C73F4D74992("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x3FA8C73B5856A3E4("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x2AC37494BBF1DB16(&Global_44424))
	{
		if (unk_0xD19C2C73F4D74992(&Global_44424))
		{
			unk_0x3FA8C73B5856A3E4(&Global_44424);
		}
	}
	if (unk_0xF57C1326FD40C8A7(Global_44412))
	{
		if (unk_0x75F9043412E1F207(Global_44412))
		{
			unk_0xC7B060434432D1C9(Global_44412, 0f);
			unk_0x0969F28D2C570575(Global_44412, 1);
		}
	}
	if (unk_0xC0A15A60BC0C570E())
	{
		unk_0x282AA8C5BDD0836B(0);
	}
	if (bParam0)
	{
		if (unk_0x4F873840FC0FA8FE() != -1 || unk_0xB31050BAEF14E6F4() != -1)
		{
			unk_0xA2EC5ACB2B5D92A4();
		}
		else if (unk_0xB53553DC4AAC7D8A())
		{
			unk_0xA2EC5ACB2B5D92A4();
		}
	}
	Global_44419 = 0f;
	StringCopy(&Global_44420, "", 16);
	StringCopy(&Global_44424, "", 64);
	StringCopy(&Global_44440, "", 16);
	func_74();
}

void func_74()
{
	Global_44411 = 0;
	Global_44412 = 0;
	Global_44413 = 0;
	Global_44414 = 30000;
	Global_44415 = 0f;
	Global_44417 = 0f;
	Global_44416 = 0f;
	Global_44418 = 1f;
	Global_44419 = 0f;
	StringCopy(&Global_44420, "", 16);
}

void func_75(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_18161;
			break;
		
		case 1:
			iVar0 = Global_262145.f_18151;
			break;
		
		case 2:
			iVar0 = Global_262145.f_18162;
			break;
		
		case 3:
			iVar0 = Global_262145.f_18154;
			break;
		
		case 4:
			iVar0 = Global_262145.f_18150;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_18165;
			break;
		
		case 8:
			iVar0 = Global_262145.f_18166;
			break;
		
		case 9:
			iVar0 = Global_262145.f_18169;
			break;
		
		case 22:
			iVar0 = Global_262145.f_18170;
			break;
		
		case 23:
			iVar0 = Global_262145.f_18163;
			break;
		
		case 25:
			iVar0 = Global_262145.f_19055;
			break;
		
		case 26:
			iVar0 = Global_262145.f_19054;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0x6F68FC40163BBC7C(func_85(func_86()), func_84(func_86()), func_83(), func_82(), iParam0, iVar0);
	}
	func_81(iVar0);
	func_76(iVar0);
}

void func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = func_80(3971, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_10.f_468 = iVar0;
	func_77(3971, iVar0, -1, 1, 0);
}

void func_77(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
}

int func_78(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_79();
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

int func_79()
{
	return Global_1574918;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805027[iParam0 /*3*/][func_78(iParam1)];
		if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_81(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x93E99A2DBCBA9CFA();
	Global_1894573[iVar0 /*608*/].f_10.f_467 = (Global_1894573[iVar0 /*608*/].f_10.f_467 + iParam0);
	if (Global_1894573[iVar0 /*608*/].f_10.f_467 < -9999)
	{
		Global_1894573[iVar0 /*608*/].f_10.f_467 = 9999;
	}
	else if (Global_1894573[iVar0 /*608*/].f_10.f_467 > 9999)
	{
		Global_1894573[iVar0 /*608*/].f_10.f_467 = 9999;
	}
}

int func_82()
{
	if (Global_1947733.f_3 != 0)
	{
		return Global_1947733.f_3;
	}
	return -1;
}

int func_83()
{
	if (Global_1947733.f_2 != 0)
	{
		return Global_1947733.f_2;
	}
	return -1;
}

int func_84(int iParam0)
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1894573[iParam0 /*608*/].f_10.f_8[1];
}

int func_85(int iParam0)
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1894573[iParam0 /*608*/].f_10.f_8[0];
}

int func_86()
{
	return Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_10;
}

bool func_87(bool bParam0)
{
	return func_88(unk_0x93E99A2DBCBA9CFA(), bParam0);
}

int func_88(int iParam0, bool bParam1)
{
	return func_89(iParam0, bParam1, 1);
}

int func_89(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_28())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_90(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1894573[iParam0 /*608*/].f_10;
	if (iVar0 != func_28() && Global_1894573[iVar0 /*608*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0, int iParam1)
{
	if (iParam0 != func_28())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_28())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 == iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_91(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x9AA69AA7F99F66A2())
		{
			unk_0xD111D6644D1D5BD5(0);
		}
	}
	if (func_104())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0xA26A9A07F761D8F8())
	{
		uVar0 = iParam2;
		unk_0xE333240A90F2FF3C(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0x1758F8A8511510AB())
		{
			bVar1 = false;
		}
		if (!func_102())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0xE6DEE82DB0922DF0(iParam0) && (unk_0x48DC6A21D1CAD89C(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x055111B11E6624FD(unk_0xF2CFBB1105511E1A(iParam0), 0))
			{
				return;
			}
			iVar27 = unk_0xF2CFBB1105511E1A(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0xA26A9A07F761D8F8())
				{
					unk_0x0D78C94B1B789F7C(1);
				}
				else if (bVar14 || (!func_100(unk_0x93E99A2DBCBA9CFA(), 0) && !func_99()))
				{
					unk_0x724FFAED1C56CE2B(iVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0xA26A9A07F761D8F8() && !bVar19)
					{
						unk_0x0D78C94B1B789F7C(0);
					}
					Global_2657589[iParam0 /*466*/].f_254 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_96(0, 0, 0);
					if (bVar25)
					{
						unk_0x3EF548873C55CA64();
					}
				}
				if (!func_95(iVar27) && !unk_0x24405041A9F1A910(iVar27))
				{
					if (!bVar22)
					{
						unk_0xDDE449983CE7572E(iVar27, true, 0);
					}
				}
				if (!unk_0xDC116D955A63BDBE(iVar27))
				{
					if (!bVar21)
					{
						unk_0x2718E9CC165A99F6(iVar27, false);
					}
					unk_0xAD02BD8A749B79F9(iVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x2718E9CC165A99F6(iVar27, false);
				}
				unk_0xD14067404D35AAE7(iVar27, true);
				unk_0xA7225B88CE344621(iParam0, 0);
				unk_0xD99DA01241D40C5D(iParam0, 0);
				if (unk_0x1951CE8AED052DA4(iVar27) && unk_0x655790C883F82CEB(iVar27))
				{
					unk_0xC7A494C74ED33C50(iVar27);
				}
				unk_0xAC2C285C82A9244C(iVar27, 1);
				if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()) == 0)
				{
					func_94();
					func_93();
				}
				if (unk_0xCB964814D9915DE0())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x58A962BEF2DDE1DF())
				{
				}
				Global_2657589[iParam0 /*466*/].f_255 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2635559.f_2681)
				{
					Global_2635559.f_2681 = 0;
				}
			}
			else
			{
				if (!func_95(iVar27) && !unk_0x24405041A9F1A910(iVar27))
				{
					if (!bVar22)
					{
						unk_0xDDE449983CE7572E(iVar27, !bVar15, 0);
					}
					if (!unk_0xDC116D955A63BDBE(iVar27))
					{
						if (!bVar21)
						{
							unk_0x2718E9CC165A99F6(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0xAD02BD8A749B79F9(iVar27, 1);
						}
					}
					if (func_92(Global_4718592.f_166301))
					{
						unk_0x2718E9CC165A99F6(iVar27, true);
					}
				}
				if (Global_1575035)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0xA7225B88CE344621(iParam0, 0);
				}
				else
				{
					unk_0xA7225B88CE344621(iParam0, 1);
				}
				unk_0xD14067404D35AAE7(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x53E0F2012E168A73(iVar27) && !unk_0x3C3D6D026CF7F51B(iVar27, 0))
					{
						unk_0x35DD50D05C962B6A(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0xE333240A90F2FF3C(iParam0, bParam1, iVar28);
		}
	}
}

bool func_92(int iParam0)
{
	return iParam0 == 17;
}

void func_93()
{
	struct<3> Var0;
	
	Global_2672505.f_1023 = 0;
	Global_2672505.f_1024 = 0;
	Global_2672505.f_1025 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672505.f_1030 = -1;
	Global_2672505.f_1031 = 0;
	Global_2635559.f_2692 = { Var0 };
}

void func_94()
{
	Global_2635559.f_702 = 0;
	Global_2635559.f_2735 = 0;
	Global_2635559.f_515 = 0;
	Global_2635559.f_606 = 0;
	Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_217 = 0;
	Global_2635559.f_2690 = 0;
}

int func_95(int iParam0)
{
	int iVar0;
	
	if (unk_0x3C3D6D026CF7F51B(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xF5F493B789EA063E(iParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_96(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x055111B11E6624FD(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0x7DE17ACDD8BA2642(iParam1))
		{
			if (unk_0x60A06DE259634304(iParam1))
			{
				if (!unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), unk_0xB850F932D03EF34D(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_98();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x84365510DF670D46(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xECDAB41968FF21A8(&(Global_2621446.f_67), 1);
			}
		}
		if (func_100(unk_0x93E99A2DBCBA9CFA(), 0))
		{
			unk_0xBD35A36DC2D7FB43(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x7C5666BA9400B9BF(iParam0, iParam1);
		}
		unk_0xC05C32F03C89FD59(iParam0, iParam1);
		func_97(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD19BD90E0B76FB05(iVar0, iParam1, 1);
	}
}

void func_98()
{
	int iVar0;
	
	if (!unk_0x8253CEEA17ED481B())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0x80A3F4E694565F6A(iVar0);
				iVar0++;
			}
			unk_0xECDAB41968FF21A8(&(Global_2621446.f_67), 2);
			unk_0xECDAB41968FF21A8(&(Global_2621446.f_67), 0);
		}
	}
}

bool func_99()
{
	return BitTest(Global_2621446, 3);
}

bool func_100(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_101(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853910[iParam0 /*862*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xE6DEE82DB0922DF0(iParam0))
		{
			bVar0 = unk_0x4292F1DE8BA2D22E(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_101(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
	}
	if (Global_1575040[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_102()
{
	if (func_103() == 0)
	{
		return 1;
	}
	return 0;
}

int func_103()
{
	return Global_1574632.f_18;
}

int func_104()
{
	if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_861, 2) && !Global_2684799.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_105(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xA26A9A07F761D8F8() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x0DB7F8294D73598B();
			}
			else
			{
				*uParam0 = unk_0xB78F034955403399();
			}
		}
		else
		{
			*uParam0 = unk_0xA5E11AF0A2B928C1();
		}
		uParam0->f_1 = 1;
	}
}

void func_106()
{
	int iVar0;
	
	if (bLocal_50)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_107(Global_44232[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0x15A88CFAAFFC6C4B(500, 3000);
	Local_60.f_0 = 5;
	Local_55.f_2 = (unk_0x83666F9FB8FEBD4B() + iVar0);
}

int func_107(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_118();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (unk_0x66599E73DBA5A850(Local_43.f_1))
	{
		if (unk_0x3C3D6D026CF7F51B(Local_43.f_1, 0) || unk_0x5CD470B5BDDAC029(Local_43.f_1))
		{
			return 0;
		}
		if (unk_0xBB5584150EDF3AE1(Local_43.f_1))
		{
			return 0;
		}
		if (func_114(Local_43.f_1))
		{
			return 0;
		}
	}
	if ((Global_44232[iLocal_64 /*5*/].f_3 < 3 && Global_44232[iLocal_64 /*5*/].f_3 != 0) && Global_44232[iLocal_64 /*5*/].f_3 > Global_44232[iLocal_64 /*5*/].f_4)
	{
		return 0;
	}
	if ((Global_44232[iLocal_64 /*5*/].f_4 < 9 && Global_44232[iLocal_64 /*5*/].f_4 != 0) && Global_44232[iLocal_64 /*5*/].f_4 > Global_44232[iLocal_64 /*5*/].f_3)
	{
		return 0;
	}
	uVar1 = func_113(iParam0);
	if (unk_0x2AC37494BBF1DB16(uVar1))
	{
		return 0;
	}
	if (func_114(Local_43.f_1))
	{
		return 0;
	}
	unk_0x14004648CB41E983(sVar1);
	if (func_110(Local_43.f_1))
	{
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
		switch (iParam0)
		{
			case 0:
				sVar3 = "";
				break;
			
			case 2:
				sVar3 = "VERY_TO_MODERATE";
				break;
			
			case 1:
				sVar3 = "MODERATE_TO_SLIGHTLY";
				break;
			
			default:
				break;
		}
		if (!unk_0x2AC37494BBF1DB16(sVar2) && !unk_0x2AC37494BBF1DB16(sVar3))
		{
			unk_0x28818732C8F0F80E(sVar2);
			while (!unk_0x2BBF749E555360DC(sVar2))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x66599E73DBA5A850(Local_43.f_1))
			{
				unk_0x3EE48ADC8C7F5CC4(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_54 = sVar3;
			}
		}
	}
	if (!unk_0xA6FA26A80B445074(sVar1))
	{
		return 0;
	}
	if (unk_0x66599E73DBA5A850(Local_43.f_1))
	{
		return 0;
	}
	unk_0xFE06D34CC973CDD2(Local_43.f_1, sVar1, 0.75f);
	if (unk_0x673F52632EDC33B7() == 4)
	{
		unk_0xAC814BCCEC68B1CE(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0x8E7BD4C76DD02BEF(Local_43.f_1, 0, sVar1, "idle", 2f, 1);
	Local_60.f_2 = sVar1;
	bLocal_51 = true;
	iVar4 = 0;
	switch (func_70(Local_43.f_1))
	{
		case 0:
			iVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
		
		case 1:
			iVar4 = "FACIALS@P_M_ONE@BASE";
			break;
		
		case 2:
			iVar4 = "FACIALS@P_M_TWO@BASE";
			break;
		
		default:
			if (unk_0x60A06DE259634304(Local_43.f_1))
			{
				if (!func_108())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (unk_0xE07B92C7EA4970AA(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0x69B06069E38FB537(Local_43.f_1, "mood_drunk_1", iVar4);
	unk_0x992BB708B4B7A005(Local_43.f_1, 200, 1);
	unk_0x992BB708B4B7A005(Local_43.f_1, 46, 1);
	unk_0xAD4CEC14FE6404F6(Local_43.f_1, 0);
	unk_0x474AA9EF29305EA8(Local_43.f_1, 262144, 1);
	unk_0x1D429CF057E0E30E(Local_43.f_1, 1);
	return 1;
}

bool func_108()
{
	return func_109(unk_0x93E99A2DBCBA9CFA());
}

int func_109(int iParam0)
{
	if (unk_0x504B9BB48D41C264(unk_0xF2CFBB1105511E1A(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x3C3D6D026CF7F51B(iParam0, 1) || unk_0x5CD470B5BDDAC029(iParam0))
	{
		return 0;
	}
	if (unk_0xF5F493B789EA063E(iParam0, joaat("script_task_play_anim")) != 7)
	{
		return 0;
	}
	if (unk_0xF5F493B789EA063E(iParam0, joaat("script_task_synchronized_scene")) != 7)
	{
		return 0;
	}
	if (unk_0x110D030CCD4E83A6(iParam0))
	{
		return 0;
	}
	if (unk_0xDA70CA6A0D1738D3(iParam0))
	{
		return 0;
	}
	if (unk_0x48A4D45B3B4CEFFD(iParam0))
	{
		return 0;
	}
	if (unk_0xFCDF03F2B12F4DDA(iParam0))
	{
		return 0;
	}
	if (Global_75693)
	{
		return 0;
	}
	if (func_112())
	{
		return 0;
	}
	if (iParam0 == unk_0xC1A5EC5C986B98AD())
	{
		if (!unk_0x4654C2D37A6129D7(unk_0x93E99A2DBCBA9CFA()))
		{
			return 0;
		}
		if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
		{
			return 0;
		}
		if (unk_0x5C3926F501DBBD3A(unk_0x93E99A2DBCBA9CFA()) || unk_0xB5297226BE0AD444(unk_0x93E99A2DBCBA9CFA()))
		{
			return 0;
		}
		if (func_111())
		{
			return 0;
		}
	}
	Var0 = { unk_0x7A2C98D06C9C1956(iParam0) };
	if (unk_0xA8CEACB4F35AE058(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_111()
{
	return Global_100733.f_388 > 0;
}

bool func_112()
{
	return unk_0xA5E11AF0A2B928C1() <= Global_23270.f_6321 + 100;
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
			break;
		
		case 1:
			return "move_m@drunk@slightlydrunk";
			break;
		
		case 2:
			return "move_m@drunk@moderatedrunk";
			break;
	}
	return "";
}

int func_114(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_115(iParam0);
	uVar1 = func_113(iVar0);
	if (unk_0x2AC37494BBF1DB16(Local_60.f_2))
	{
		if (unk_0x2AC37494BBF1DB16(uVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return unk_0x4310A0DB886F9FED(Local_60.f_2, sVar1);
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!unk_0x7DE17ACDD8BA2642(iParam0))
	{
		return -1;
	}
	iVar0 = func_117(iParam0);
	iVar1 = func_116(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_44232[iVar1 /*5*/].f_2;
}

int func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44232[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_117(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44232[iVar0 /*5*/].f_1)
		{
			return Global_44232[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_118()
{
	int iVar0;
	
	if (Local_55.f_0 == -2)
	{
		return -2;
	}
	if (Local_55.f_0 == -1)
	{
		return -1;
	}
	iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
	if (iVar0 < 0)
	{
		return -2;
	}
	if (iVar0 > 65534)
	{
		iVar0 = 65534;
	}
	return iVar0;
}

void func_119()
{
	if (bLocal_50)
	{
		return;
	}
	if (!func_120())
	{
		Local_60.f_0 = 5;
		Local_55.f_2 = unk_0x83666F9FB8FEBD4B() + 5000;
		return;
	}
	Local_60.f_0 = 6;
}

bool func_120()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (Local_43.f_4 == 0)
	{
		return 0;
	}
	if (unk_0x055111B11E6624FD(Local_43.f_4, 0))
	{
		return 0;
	}
	Var0 = { unk_0x30BE8A934C020461(Local_43.f_1, 1) };
	Var3 = { unk_0x30BE8A934C020461(Local_43.f_4, 1) };
	fVar6 = unk_0x2E496FE654DA4166(Var0, Var3, 1);
	return fVar6 < 7f;
}

void func_121()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == unk_0xC1A5EC5C986B98AD())
	{
		unk_0x8B438725D591ED78(0, 36, 1);
		if (unk_0xC29B1DE5CA9282CB(Local_43.f_1))
		{
			if (Global_44232[iLocal_64 /*5*/].f_2 == 0 || Global_44232[iLocal_64 /*5*/].f_2 == 2)
			{
				unk_0x0002182D625AEFEA(Local_43.f_1, 0, 0);
			}
		}
		if (unk_0xCC82082FAFB01DDF(Local_43.f_1))
		{
			unk_0x5F2E69E984F09163(Local_43.f_1, 0);
		}
	}
	if (Local_55.f_0 != -2)
	{
		if (Local_55.f_0 == -1)
		{
			if (Global_44232[iLocal_64 /*5*/].f_2 != 0)
			{
				Global_44232[iLocal_64 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_44232[iLocal_64 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_44232[iLocal_64 /*5*/].f_2 = 2;
					if (!func_107(2))
					{
						Global_44232[iLocal_64 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_44232[iLocal_64 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_44232[iLocal_64 /*5*/].f_2 = 1;
					if (!func_107(2))
					{
						Global_44232[iLocal_64 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_44232[iLocal_64 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0x2AC37494BBF1DB16(sLocal_54))
	{
		if (!func_110(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0x7BB3D8F4F6310EB8(Local_43.f_1, sVar1, sLocal_54, 3))
			{
				unk_0x82F27DF65F4D68B5(Local_43.f_1, sVar1, sLocal_54, -4f);
			}
			sLocal_54 = "";
			return;
		}
	}
	if ((Global_44232[iLocal_64 /*5*/].f_3 >= 10 || Global_44232[iLocal_64 /*5*/].f_4 >= 15) || BitTest(Global_44449, 9))
	{
		if (unk_0xF5F493B789EA063E(Local_43.f_1, joaat("script_task_synchronized_scene")) == 1 && !BitTest(Global_1950108.f_3, 27))
		{
			return;
		}
		if (unk_0x70ACD9400516DB25(Local_43.f_1))
		{
			return;
		}
		if (unk_0x3C3D6D026CF7F51B(Local_43.f_1, 1))
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0xA26A9A07F761D8F8() && Local_43.f_1 == unk_0xC1A5EC5C986B98AD()) && func_136(unk_0x93E99A2DBCBA9CFA())) && Global_262145.f_24351)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0xA26A9A07F761D8F8() && Local_43.f_1 == unk_0xC1A5EC5C986B98AD()) && func_135())
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0xA26A9A07F761D8F8() && unk_0x1758F8A8511510AB()) && func_134())
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0xA26A9A07F761D8F8() && unk_0x1758F8A8511510AB()) && func_133())
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (func_130(unk_0x93E99A2DBCBA9CFA()))
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0xA26A9A07F761D8F8() && Local_43.f_1 == unk_0xC1A5EC5C986B98AD()) && func_129(unk_0x93E99A2DBCBA9CFA())) && Global_262145.f_27034)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0xA26A9A07F761D8F8() && Local_43.f_1 == unk_0xC1A5EC5C986B98AD()) && func_126(unk_0x93E99A2DBCBA9CFA())) && Global_262145.f_27067)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0xA26A9A07F761D8F8() && Local_43.f_1 == unk_0xC1A5EC5C986B98AD()) && func_122(unk_0x93E99A2DBCBA9CFA()) == 15)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0xA26A9A07F761D8F8() && Local_43.f_1 == unk_0xC1A5EC5C986B98AD()) && Global_75693) && !Global_44205)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		Local_60.f_1 = 3;
		return;
	}
	if (!bLocal_51)
	{
		return;
	}
	if (!func_114(Local_43.f_1))
	{
		return;
	}
}

int func_122(int iParam0)
{
	if (func_125(iParam0) == 243)
	{
		return func_123(iParam0);
	}
	return -1;
}

int func_123(int iParam0)
{
	if (func_124(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_182;
	}
	return -1;
}

int func_124(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0)
{
	if (func_124(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

int func_126(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_127(Global_2657589[iParam0 /*466*/].f_321.f_7) == 15;
			}
		}
	}
	return 0;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
	}
	return -1;
}

int func_128(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xE6DEE82DB0922DF0(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x48DC6A21D1CAD89C(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672505.f_3)
				{
					return Global_2672505.f_2;
				}
				else if (Global_2657589[iVar0 /*466*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_129(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_127(Global_2657589[iParam0 /*466*/].f_321.f_7) == 14;
			}
		}
	}
	return 0;
}

bool func_130(int iParam0)
{
	return func_131(func_132(iParam0));
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_132(int iParam0)
{
	if (func_125(iParam0) == 256)
	{
		return func_123(iParam0);
	}
	return -1;
}

var func_133()
{
	return Global_2683862.f_24;
}

var func_134()
{
	return Global_2683862.f_21;
}

var func_135()
{
	return Global_2764615;
}

int func_136(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_127(Global_2657589[iParam0 /*466*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

int func_137()
{
	int iVar0;
	
	if (!unk_0xACD39355028D39EF(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = unk_0x95DC39736F6748E3(Local_43.f_1, 0);
	if (!unk_0xFBD273FDBCF0C5BD(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xA66E176E5772E965(iVar0, -1, 0) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	Local_60.f_0 = 7;
	return 1;
}

void func_138()
{
	if (!unk_0x3C3D6D026CF7F51B(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		return;
	}
}

void func_139()
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	
	if (!bLocal_50)
	{
		return;
	}
	if (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		return;
	}
	if (!unk_0xACD39355028D39EF(unk_0xC1A5EC5C986B98AD()))
	{
		return;
	}
	if (unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
	{
		return;
	}
	iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
	fVar1 = unk_0xDC58AE028CB223BA(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
	Var5 = { Var2 - Vector(3f, 30f, 30f) };
	Var8 = { Var2 + Vector(3f, 30f, 30f) };
	if (!unk_0x7419F07EFCC23990(Var5, Var8) && !unk_0x06EADAF3FF0C6092(Var5, Var8))
	{
		return;
	}
	unk_0xE2C528FAB670225B(unk_0x93E99A2DBCBA9CFA(), 1, 0);
	unk_0x6CDFCA6843DA90FF(unk_0x93E99A2DBCBA9CFA(), 0);
	func_11(73, 1);
}

void func_140()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_43.f_1;
	if (unk_0x3C3D6D026CF7F51B(Local_43.f_1, 0))
	{
		iVar1 = unk_0x95DC39736F6748E3(Local_43.f_1, 0);
		iVar2 = unk_0xA66E176E5772E965(iVar1, -1, 0);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (unk_0xA26A9A07F761D8F8() && !unk_0xB6B927AA8C3DAD36(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0xC1A5EC5C986B98AD() == Local_43.f_1)
	{
		return;
	}
	else if (!unk_0x673F52632EDC33B7() == 4)
	{
		fLocal_53 = 0f;
		func_142(iVar0, 0f);
		return;
	}
	if (unk_0x83666F9FB8FEBD4B() < Local_55.f_4)
	{
		func_142(iVar0, fLocal_53);
		return;
	}
	if (unk_0x71904BD37B848CAF(iVar0))
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 2000;
	}
	else
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 1000;
	}
	fVar3 = unk_0xDC58AE028CB223BA(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_53 = 0f;
		func_142(iVar0, 0f);
		return;
	}
	if (Local_55.f_1 == -1)
	{
		fLocal_53 = func_141(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_55.f_1 - unk_0x83666F9FB8FEBD4B());
		if (iVar4 < 5000)
		{
			fLocal_53 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_53 = func_141(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_53 = func_141(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_53 = func_141(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_53 = func_141(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_53 = func_141(iVar0, 0.13f, 0.06f);
		}
	}
	func_142(iVar0, fLocal_53);
}

float func_141(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = unk_0xD88C7A93096DA0F7(-fParam1, fParam1);
	fVar1 = unk_0xD88C7A93096DA0F7(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0x71904BD37B848CAF(iParam0))
	{
		if (unk_0xFC42DF91E1950588(unk_0x9C8D7679C15E75FF(iParam0)))
		{
			fVar0 = (fVar0 * 4.5f);
		}
		else
		{
			fVar0 = (fVar0 * 3f);
		}
	}
	else
	{
		iVar2 = unk_0x504B9BB48D41C264(iParam0);
		if (unk_0x6CEF99E452573979(iVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = func_21(fVar0, -1f, 1f);
	return fVar0;
}

void func_142(int iParam0, float fParam1)
{
	if (unk_0xA26A9A07F761D8F8() && !unk_0xB6B927AA8C3DAD36(iParam0))
	{
		return;
	}
	if (unk_0x71904BD37B848CAF(iParam0))
	{
		unk_0x3C564B00E806A230(unk_0x9C8D7679C15E75FF(iParam0), fParam1);
	}
	else if (unk_0xA6B591D40DE982B5(iParam0))
	{
		unk_0x372FFB8B2ADD7C61(unk_0x4DFB7A1A6909D574(iParam0), fParam1);
	}
}

void func_143()
{
	int iVar0;
	
	if (!unk_0x3C3D6D026CF7F51B(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		return;
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		if (Global_44232[iLocal_64 /*5*/].f_3 >= 10 || Global_44232[iLocal_64 /*5*/].f_4 >= 15)
		{
			if (Global_44232[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_64 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_50)
	{
		return;
	}
	iVar0 = unk_0x95DC39736F6748E3(Local_43.f_1, 0);
	if (!unk_0xFBD273FDBCF0C5BD(iVar0, 0))
	{
		unk_0x6FE9A0C01D25F413(Local_43.f_1, 0, 0);
		Local_60.f_0 = 11;
		return;
	}
}

void func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x83666F9FB8FEBD4B() <= Local_55.f_3)
	{
		return;
	}
	iVar0 = unk_0xF5F493B789EA063E(unk_0xC1A5EC5C986B98AD(), joaat("script_task_shuffle_to_next_vehicle_seat"));
	if (!iVar0 == 7)
	{
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!unk_0x3C3D6D026CF7F51B(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		Local_55.f_3 = -2;
		return;
	}
	iVar1 = unk_0x95DC39736F6748E3(Local_43.f_1, 0);
	iVar2 = unk_0xA66E176E5772E965(iVar1, -1, 0);
	if (iVar2 == Local_43.f_1)
	{
		func_145();
		Local_55.f_3 = -2;
		return;
	}
	unk_0xC6E2FE1DC7DDC0AD(Local_43.f_1, iVar1, 0);
	Local_60.f_0 = 9;
	Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
}

void func_145()
{
	if (Local_60.f_0 == 10)
	{
		return;
	}
	Local_60.f_0 = 10;
	if (iLocal_48 == -1)
	{
		return;
	}
	func_171(iLocal_48, 2, 5);
	Local_55.f_4 = unk_0x83666F9FB8FEBD4B();
	fLocal_53 = 0f;
}

void func_146()
{
	if (unk_0xACD39355028D39EF(Local_43.f_1))
	{
		Local_60.f_0 = 10;
		return;
	}
	if (unk_0x83666F9FB8FEBD4B() < Local_55.f_3)
	{
		return;
	}
	Local_60.f_0 = 4;
	Local_55.f_3 = -2;
}

void func_147()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!bLocal_50)
	{
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || unk_0xACD39355028D39EF(Local_43.f_1))
	{
		if (!bLocal_50)
		{
		}
		iVar0 = unk_0x95DC39736F6748E3(Local_43.f_1, 0);
		if (!iVar0 == Local_43.f_4)
		{
			if (!bLocal_50)
			{
			}
			if (!bLocal_50)
			{
				if (!bLocal_50)
				{
				}
				unk_0x6FE9A0C01D25F413(Local_43.f_1, 0, 0);
				Local_60.f_0 = 11;
				return;
			}
			Local_43.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_50)
			{
			}
			func_145();
			return;
		}
		if (!bLocal_50)
		{
			if (!bLocal_50)
			{
			}
			func_145();
			return;
		}
		if (!bLocal_50)
		{
		}
		iVar2 = unk_0xA66E176E5772E965(Local_43.f_4, -1, 0);
		if (iVar2 == Local_43.f_1)
		{
			func_145();
			return;
		}
		unk_0xC6E2FE1DC7DDC0AD(Local_43.f_1, iVar0, 0);
		Local_60.f_0 = 9;
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!func_120())
	{
		unk_0x909F139DC199D8E0(Local_43.f_1);
		Local_60.f_0 = 4;
		return;
	}
	if (!bLocal_50)
	{
		iVar3 = unk_0xF5F493B789EA063E(Local_43.f_1, joaat("script_task_enter_vehicle"));
		if (iVar3 == 7)
		{
			if (!unk_0x3C3D6D026CF7F51B(Local_43.f_1, 0))
			{
				unk_0x909F139DC199D8E0(Local_43.f_1);
				Local_60.f_0 = 4;
				return;
			}
		}
	}
}

void func_148()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	
	if (bLocal_50)
	{
		return;
	}
	if (Local_43.f_4 == 0)
	{
		Local_60.f_0 = 4;
		return;
	}
	if (!unk_0xFBD273FDBCF0C5BD(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		Local_60.f_0 = 4;
		return;
	}
	Var0 = { unk_0x30BE8A934C020461(Local_43.f_1, 1) };
	Var3 = { unk_0x30BE8A934C020461(Local_43.f_4, 1) };
	fVar6 = unk_0x2E496FE654DA4166(Var0, Var3, 1);
	if (fVar6 > 3f)
	{
		if (!func_107(Global_44232[iLocal_64 /*5*/].f_2))
		{
			Local_60.f_0 = 12;
			return;
		}
		Local_60.f_0 = 5;
		Local_55.f_2 = unk_0x83666F9FB8FEBD4B() + 2000;
		return;
	}
	iVar7 = unk_0x2E240694D642679A(Local_43.f_4);
	iVar8 = 0;
	bVar9 = true;
	iVar8 = 1;
	while (bVar9)
	{
		if (iVar8 < iVar7)
		{
			if (unk_0x9CFCDD9C62B56708(Local_43.f_4, iVar8, 0))
			{
				bVar9 = false;
			}
			else
			{
				iVar8++;
			}
		}
		else
		{
			bVar9 = false;
			iVar8 = -1;
		}
	}
	if (iVar8 == -1)
	{
		if (iVar8 == -1)
		{
			Local_60.f_0 = 4;
			return;
		}
	}
	func_149();
	unk_0xD30E9CAE1FEA1C7E(Local_43.f_1, Local_43.f_4, -1, iVar8, 1073741824, 1, 0);
	Local_60.f_0 = 7;
}

void func_149()
{
	if (!unk_0x7DE17ACDD8BA2642(Local_43.f_1))
	{
		return;
	}
	if (!unk_0x66599E73DBA5A850(Local_43.f_1))
	{
		unk_0xEF514FB2706C4C1B(Local_43.f_1, 1048576000);
		unk_0x99E9766D143206BD(Local_43.f_1);
		unk_0x18E7B69412356E49(Local_43.f_1, 0, -1056964608);
		Local_60.f_2 = "";
		unk_0x0F2FEB47E011668F(Local_43.f_1);
		unk_0x992BB708B4B7A005(Local_43.f_1, 200, 0);
		unk_0x992BB708B4B7A005(Local_43.f_1, 46, 0);
		unk_0xAD4CEC14FE6404F6(Local_43.f_1, 1);
		unk_0x474AA9EF29305EA8(Local_43.f_1, 262144, 0);
		unk_0x1D429CF057E0E30E(Local_43.f_1, 0);
	}
	if (!bLocal_51)
	{
		return;
	}
	bLocal_51 = false;
}

void func_150()
{
	if (unk_0x83666F9FB8FEBD4B() < Local_55.f_2)
	{
		func_121();
		return;
	}
	func_151();
	Local_55.f_2 = -2;
	Local_60.f_0 = 12;
}

int func_151()
{
	if (!func_114(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_51)
	{
		return 0;
	}
	func_152(Local_43.f_1);
	Local_60.f_2 = "";
	Global_2793044.f_4637 = 1;
	return 1;
}

void func_152(int iParam0)
{
	unk_0xEF514FB2706C4C1B(uParam0, 1048576000);
	unk_0x18E7B69412356E49(uParam0, 0, -1056964608);
	unk_0x992BB708B4B7A005(uParam0, 200, 0);
	unk_0xAD4CEC14FE6404F6(iParam0, 1);
	unk_0x474AA9EF29305EA8(iParam0, 262144, 0);
	unk_0x1D429CF057E0E30E(iParam0, 0);
}

void func_153()
{
	int iVar0;
	
	if (Local_55.f_0 == -1)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_64 /*5*/].f_3 < 3 && Global_44232[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_44232[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_44232[iLocal_64 /*5*/].f_2 = 1;
		}
	}
	if (unk_0x3C3D6D026CF7F51B(Local_43.f_1, 0))
	{
		Local_60.f_0 = 10;
		return;
	}
	if (func_114(Local_43.f_1))
	{
		Local_60.f_0 = 12;
		return;
	}
	if (Local_55.f_0 == -2)
	{
		return;
	}
	if (!func_107(Global_44232[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	Local_60.f_0 = 12;
}

void func_154()
{
}

void func_155()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_44313[iVar1 /*6*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_44313[iVar1 /*6*/].f_1 == iLocal_48)
			{
				func_157(iVar1);
				func_156(iVar1);
			}
			else if (Global_44313[iVar1 /*6*/].f_1 == 2)
			{
				if (!iLocal_49 == -1)
				{
					if (iLocal_49 == Global_44313[iVar1 /*6*/])
					{
						func_157(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_156(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_44313[iParam0 /*6*/] = -1;
	Global_44313[iParam0 /*6*/].f_1 = -1;
	Global_44313[iParam0 /*6*/].f_2 = 6;
	Global_44313[iParam0 /*6*/].f_3 = 0;
	Global_44313[iParam0 /*6*/].f_4 = 0;
}

void func_157(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_44313[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_178();
			break;
		
		case 2:
			func_161(Global_44313[iParam0 /*6*/].f_4);
			break;
		
		case 3:
			func_160(Global_44313[iParam0 /*6*/].f_5);
			break;
		
		case 4:
			func_159();
			break;
		
		case 5:
			func_158();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_158()
{
	Local_60.f_1 = 2;
}

void func_159()
{
	int iVar0;
	
	Global_44232[iLocal_64 /*5*/].f_4++;
	if (Local_55.f_0 == -1)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_64 /*5*/].f_4 < 9 && Global_44232[iLocal_64 /*5*/].f_4 != 0)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_44232[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_44232[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_44232[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_160(int iParam0)
{
	int iVar0;
	
	Global_44232[iLocal_64 /*5*/].f_3 = (Global_44232[iLocal_64 /*5*/].f_3 + iParam0);
	if (Local_55.f_0 == -1)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_64 /*5*/].f_3 < 3 && Global_44232[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_44232[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_44232[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_44232[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_161(int iParam0)
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_55.f_1 = (Local_55.f_1 + iParam0);
	Local_55.f_0 = (Local_55.f_0 + iParam0);
}

void func_162()
{
	int iVar0;
	
	if (!bLocal_50)
	{
		iLocal_63 = -1;
		return;
	}
	if (iLocal_63 < 0)
	{
		iLocal_63 = unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA());
		return;
	}
	iVar0 = unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA());
	if (iVar0 != iLocal_63)
	{
		if (iVar0 > iLocal_63)
		{
			func_163();
		}
		iLocal_63 = iVar0;
		return;
	}
}

void func_163()
{
}

void func_164()
{
	if (!Local_55.f_0 == -1)
	{
		if (!Local_55.f_0 == -2)
		{
			if (unk_0x83666F9FB8FEBD4B() >= Local_55.f_0)
			{
				func_149();
				Local_55.f_0 = -2;
				Local_60.f_0 = 12;
			}
		}
		if (unk_0x83666F9FB8FEBD4B() > Local_55.f_1)
		{
			func_178();
		}
	}
}

void func_165(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44313[iVar0 /*6*/])
		{
			func_156(iVar0);
		}
		iVar0++;
	}
}

void func_166()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Local_60.f_0 = 4;
	if (!unk_0x055111B11E6624FD(Local_43.f_1, 0))
	{
		if (unk_0xACD39355028D39EF(Local_43.f_1))
		{
			Local_60.f_0 = 10;
		}
	}
	if (bLocal_50)
	{
		func_169();
		func_11(71, 1);
		if (unk_0xA26A9A07F761D8F8())
		{
			iVar0 = func_80(2059, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_167(iVar1);
			}
			func_77(2059, iVar0 + 1, -1, 1, 0);
			bLocal_65 = true;
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			unk_0xDD7756E2742E0F6D(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			unk_0xDD7756E2742E0F6D(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			unk_0xDD7756E2742E0F6D(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_167(iVar6);
			}
			switch (func_67())
			{
				case 0:
					unk_0x3CC35ACFFC9C730E(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					unk_0x3CC35ACFFC9C730E(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					unk_0x3CC35ACFFC9C730E(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		Local_60.f_1 = 1;
		return;
	}
	Local_60.f_1 = 12;
	if (Local_55.f_0 == -1)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_64 /*5*/].f_3 < 3 && Global_44232[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_44232[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_44232[iLocal_64 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_44232[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_44232[iLocal_64 /*5*/].f_2 = 1;
		}
	}
}

void func_167(int iParam0)
{
	int iVar0;
	
	iVar0 = func_168(81);
	Global_2645068[iVar0 /*83*/] = 81;
	Global_2645068[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2645068[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2645068[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2645068[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_169()
{
}

void func_170()
{
	Local_55.f_0 = Local_43.f_2;
	Local_55.f_1 = Local_43.f_3;
	Local_55.f_2 = -2;
	Local_55.f_3 = -2;
}

void func_171(int iParam0, int iParam1, int iParam2)
{
	func_172(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_172(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_174(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_173();
	if (iVar0 == -1)
	{
		return;
	}
	Global_44313[iVar0 /*6*/] = iParam0;
	Global_44313[iVar0 /*6*/].f_1 = iParam1;
	Global_44313[iVar0 /*6*/].f_2 = iParam2;
	Global_44313[iVar0 /*6*/].f_3 = iParam3;
	Global_44313[iVar0 /*6*/].f_4 = iParam4;
	Global_44313[iVar0 /*6*/].f_5 = iParam5;
}

int func_173()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44313[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_174(int iParam0, int iParam1, int iParam2)
{
	if (func_175(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_175(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_44313[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44313[iVar0 /*6*/])
			{
				if (iParam1 == Global_44313[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_176()
{
	int iVar0;
	
	bLocal_50 = false;
	if (Local_43.f_1 == unk_0xC1A5EC5C986B98AD())
	{
		bLocal_50 = true;
		Global_44445 = 1;
		Global_44447++;
	}
	if (!unk_0x055111B11E6624FD(Local_43.f_1, 0))
	{
		iVar0 = func_70(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				unk_0xEE72EF85581D1171(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				unk_0xEE72EF85581D1171(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_177()
{
	if (!iLocal_48 == -1)
	{
		return;
	}
	iLocal_48 = func_117(Local_43.f_1);
	if (iLocal_48 == -1)
	{
		return;
	}
	iLocal_64 = func_116(iLocal_48);
}

void func_178()
{
	int iVar0;
	
	if (!func_34(0) && !func_34(3))
	{
		if (!unk_0x055111B11E6624FD(Local_43.f_1, 0))
		{
			iVar0 = func_70(Local_43.f_1);
			if (Global_44232[iLocal_64 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_180(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_180(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_180(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					unk_0xEE72EF85581D1171(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					unk_0xEE72EF85581D1171(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_149();
	if (bLocal_50)
	{
		Global_44445 = 0;
	}
	func_179();
	unk_0x0B34FA69ECCE3927(func_113(0));
	unk_0x0B34FA69ECCE3927(func_113(2));
	unk_0x0B34FA69ECCE3927(func_113(1));
	Global_1944403 = 0;
	if (unk_0x24B651D85CCE5EB4(joaat("appemail")) > 0)
	{
		func_41(0);
	}
	unk_0x675D9C12C73D3DE7();
}

void func_179()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0x055111B11E6624FD(Local_43.f_1, 0))
	{
		return;
	}
	uVar0 = Local_43.f_1;
	if (unk_0x3C3D6D026CF7F51B(Local_43.f_1, 0))
	{
		uVar1 = unk_0x95DC39736F6748E3(Local_43.f_1, 0);
		iVar2 = unk_0xA66E176E5772E965(uVar1, -1, 0);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		uVar0 = iVar1;
	}
	else if (!unk_0x673F52632EDC33B7() == 4 || !unk_0xC1A5EC5C986B98AD() == Local_43.f_1)
	{
		return;
	}
	fLocal_53 = 0f;
	func_142(uVar0, 0f);
}

void func_180(var uParam0, char* sParam1, int iParam2)
{
	unk_0x824D23CC0FE1835A(uParam0, sParam1, func_181(iParam2), 1);
}

int func_181(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

