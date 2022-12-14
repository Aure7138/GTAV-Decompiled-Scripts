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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
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
	var uLocal_84 = 0;
	var uLocal_85 = -1;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	struct<282> Local_93 = { 20, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_375 = -1;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = -1;
	var uLocal_381 = -1;
	var uLocal_382 = -1;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	struct<15> Local_393 = { 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	struct<2> Local_418[32];
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (func_160())
	{
		while (!func_150())
		{
			unk_0x4EDE34FBADD967A6(0);
			func_59(&Local_93, &Local_393);
			func_46();
			if (unk_0x9315DBF7D972F07A() && unk_0x54E30A65F4FA4962())
			{
				func_36(&Local_93, &Local_393);
				func_35();
			}
		}
	}
	func_1();
}

void func_1()
{
	func_3(&Local_93, &Local_393);
	Global_2787910 = 0;
	func_2();
}

void func_2()
{
	unk_0xAFBDF6A5E54114C1();
}

void func_3(var uParam0, var uParam1)
{
	var uVar0;
	
	if (func_34(&(uParam0->f_281), 15))
	{
		func_33();
		unk_0xB0550BC91B0159D6(&Global_2787913, 8);
		func_32(&(uParam0->f_281), 15);
	}
	func_30(&(uParam0->f_281.f_6));
	func_25(uParam0, 1);
	if (uParam0->f_281.f_5 > 2)
	{
		if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
		{
			if (((unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A())) && unk_0x90F6E2F6488B98BA(uParam1->f_14[uParam0->f_281.f_2])) && unk_0x07B2F8356DC13CF4(uParam1->f_14[uParam0->f_281.f_2]))
			{
				if (unk_0x099CAD293190F449(unk_0xE8BBC6CC2C60F24A(uParam1->f_14[uParam0->f_281.f_2]), unk_0xE2D3D51028F0428A()))
				{
					unk_0xE6451C2F193342C7(unk_0xE8BBC6CC2C60F24A(uParam1->f_14[uParam0->f_281.f_2]), 0, 1);
					func_24(&(uParam1->f_14[uParam0->f_281.f_2]));
				}
			}
		}
		if ((!BitTest(Global_1965531, 7) && !BitTest(Global_1965531, 3)) && !func_22(unk_0x9E2D6C50374FCFA9()))
		{
			func_21(-1);
			func_20(-1);
		}
		Global_2787911 = 0;
		unk_0xB0550BC91B0159D6(&Global_2787913, 6);
		uVar0 = unk_0x57736A7B8965A88A(uParam0->f_281.f_1);
		if (unk_0xCE2C78E9FC0B01E3(uVar0))
		{
			unk_0x0B92578FB47DA084(uParam0->f_281.f_1);
		}
		if ((uParam0->f_281.f_9 == 1 && !unk_0x2981C54770E1D19C()) && func_18())
		{
			func_5(unk_0x9E2D6C50374FCFA9(), 1, 0, 0);
		}
		func_4();
	}
}

void func_4()
{
	if (Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 0;
	}
}

void func_5(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	var uVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x1088B18071ADCCBD())
		{
			unk_0x94B5910A9C945688(0);
		}
	}
	if (func_17())
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
	if (!unk_0x9315DBF7D972F07A())
	{
		uVar0 = iParam2;
		unk_0x64E21045781AFBC9(iParam0, bParam1, uVar0);
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
		if (iParam2 & 33554432 != 0 || unk_0x44859561F653DD4E())
		{
			bVar1 = false;
		}
		if (!func_18())
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
		if (unk_0x0D01086B38EC256F(iParam0) && (unk_0x3583A42587543334(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x55B23FE400FCEA6B(unk_0x407E03586628E458(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0x407E03586628E458(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x9315DBF7D972F07A())
				{
					unk_0x5C53AF694DE011E8(1);
				}
				else if (bVar14 || (!func_14(unk_0x9E2D6C50374FCFA9(), 0) && !func_13()))
				{
					unk_0x1C2ED929474DC6FE(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x9315DBF7D972F07A() && !bVar19)
					{
						unk_0x5C53AF694DE011E8(0);
					}
					Global_2689235[iParam0 /*453*/].f_252 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_10(0, 0, 0);
					if (bVar25)
					{
						unk_0x5639E771F6085BF6();
					}
				}
				if (!func_9(uVar27) && !unk_0xE2ED785E8DB4D3FF(uVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(uVar27, true, 0);
					}
				}
				if (!unk_0xE85F749F6D5C809E(uVar27))
				{
					if (!bVar21)
					{
						unk_0x5C65DDDC219B3AA5(uVar27, false);
					}
					unk_0x398C962F550CF3B4(uVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x5C65DDDC219B3AA5(uVar27, false);
				}
				unk_0xA7266A50941DBAEA(uVar27, true);
				unk_0xC099DA307DD6BC62(iParam0, 0);
				unk_0x7E9CA7389EF595E6(iParam0, 0);
				if (unk_0xA13A75665F7E0689(uVar27) && unk_0x6090FC735660B8F7(uVar27))
				{
					unk_0xAD9047296F9EA375(uVar27);
				}
				unk_0xC252F409BDE7A700(uVar27, 1);
				if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()) == 0)
				{
					func_8();
					func_7();
				}
				if (unk_0xBC4351060BEFB0D2())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x2981C54770E1D19C())
				{
				}
				Global_2689235[iParam0 /*453*/].f_253 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667225.f_2681)
				{
					Global_2667225.f_2681 = 0;
				}
			}
			else
			{
				if (!func_9(uVar27) && !unk_0xE2ED785E8DB4D3FF(uVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(uVar27, !bVar15, 0);
					}
					if (!unk_0xE85F749F6D5C809E(uVar27))
					{
						if (!bVar21)
						{
							unk_0x5C65DDDC219B3AA5(uVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x398C962F550CF3B4(uVar27, 1);
						}
					}
					if (func_6(Global_4718592.f_168757))
					{
						unk_0x5C65DDDC219B3AA5(uVar27, true);
					}
				}
				if (Global_1575033)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0xC099DA307DD6BC62(iParam0, 0);
				}
				else
				{
					unk_0xC099DA307DD6BC62(iParam0, 1);
				}
				unk_0xA7266A50941DBAEA(uVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xFD478ECFA85A941A(uVar27) && !unk_0xD5C6B5E3B93A5EDC(uVar27, 0))
					{
						unk_0x51BB443B279E4104(uVar27);
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
			unk_0x64E21045781AFBC9(iParam0, bParam1, iVar28);
		}
	}
}

bool func_6(int iParam0)
{
	return iParam0 == 17;
}

void func_7()
{
	struct<3> Var0;
	
	Global_2703735.f_910 = 0;
	Global_2703735.f_911 = 0;
	Global_2703735.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703735.f_917 = -1;
	Global_2703735.f_918 = 0;
	Global_2667225.f_2692 = { Var0 };
}

void func_8()
{
	Global_2667225.f_702 = 0;
	Global_2667225.f_2735 = 0;
	Global_2667225.f_515 = 0;
	Global_2667225.f_606 = 0;
	Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_215 = 0;
	Global_2667225.f_2690 = 0;
}

int func_9(var uParam0)
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x174CED88B97C78D9(uParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_10(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xE5965CDF24F93A9F(iParam1))
		{
			if (unk_0x65FAB09725E2FE75(iParam1))
			{
				if (!unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), unk_0xFF65CDB0EB7ACE71(iParam1)))
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
				func_12();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x4B1C22133022D7D3(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), true);
			}
		}
		if (func_14(unk_0x9E2D6C50374FCFA9(), 0))
		{
			unk_0x1FD50AAF9DA2199E(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x86998D41F61B3824(iParam0, iParam1);
		}
		unk_0x6CAF65C4F61A4BBD(iParam0, iParam1);
		func_11(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_11(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x41483427EFBC0047(iVar0, iParam1, 1);
	}
}

void func_12()
{
	int iVar0;
	
	if (!unk_0xD852449BF2E2BA8D())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0x4DE6A646AFB7CF5C(iVar0);
				iVar0++;
			}
			unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 2);
			unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), false);
		}
	}
}

bool func_13()
{
	return BitTest(Global_2621446, 3);
}

bool func_14(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853348[iParam0 /*834*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			bVar0 = unk_0x0E40F846A70BA3EC(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_15(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_16();
	}
	if (Global_1575038[iVar1] == 1)
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

int func_16()
{
	return Global_1574918;
}

int func_17()
{
	if (BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_833, 2) && !Global_2715699.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_18()
{
	if (func_19() == 0)
	{
		return 1;
	}
	return 0;
}

int func_19()
{
	return Global_1574632.f_18;
}

void func_20(int iParam0)
{
	Global_2725430 = iParam0;
}

void func_21(int iParam0)
{
	Global_2725432 = iParam0;
	Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_827 = iParam0;
}

int func_22(bool bParam0)
{
	if (bParam0 != func_23())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_348, 29);
	}
	return 0;
}

int func_23()
{
	return -1;
}

void func_24(var uParam0)
{
	var uVar0;
	
	if (unk_0xCCDCD6672DAE6835(*uParam0))
	{
		if (!unk_0x07B2F8356DC13CF4(*uParam0))
		{
		}
	}
	if (unk_0x90F6E2F6488B98BA(*uParam0))
	{
		uVar0 = unk_0xF2D8DACFAEBD9629(*uParam0);
		unk_0x531055A66E7A812C(&uVar0);
	}
}

void func_25(var uParam0, int iParam1)
{
	if (func_26())
	{
		unk_0x3410421C60BF7143(1);
	}
	if (iParam1 && uParam0->f_281.f_6 != -1)
	{
		func_30(&(uParam0->f_281.f_6));
		uParam0->f_281.f_6 = -1;
	}
}

int func_26()
{
	if ((BitTest(Global_4718592.f_32, 23) && !BitTest(Global_1965532, 13)) && !BitTest(Global_1965532, 19))
	{
		return 0;
	}
	if ((BitTest(Global_4718592.f_30, 25) && !BitTest(Global_1965532, 15)) && !BitTest(Global_1965532, 19))
	{
		return 0;
	}
	if ((((((((((((func_29("MPOFSEAT_PCEXIT") || func_29("MPOFSEAT_EXIT")) || func_29("ARENA_SEAT")) || func_29("ARENA_SEAT_PC")) || func_28("ARENA_SEAT1", Global_262145.f_26633, Global_262145.f_26634)) || func_28("ARENA_SEAT_PC1", Global_262145.f_26633, Global_262145.f_26634)) || func_27("ARENA_SEAT2", Global_262145.f_26633)) || func_27("ARENA_SEAT_PC2", Global_262145.f_26633)) || func_27("ARENA_SEAT3", Global_262145.f_26634)) || func_27("ARENA_SEAT_PC3", Global_262145.f_26634)) || func_29("ARENA_SEAT4")) || func_29("ARENA_SEAT_PC4")) || func_29("ARENA_SEAT_EX"))
	{
		return 1;
	}
	return 0;
}

bool func_27(char* sParam0, var uParam1)
{
	unk_0xB65782D82090BB33(sParam0);
	unk_0x2AE954BA77A66307(uParam1);
	return unk_0x73CB3406A86A3A02(0);
}

var func_28(char* sParam0, var uParam1, var uParam2)
{
	unk_0xB65782D82090BB33(sParam0);
	unk_0x2AE954BA77A66307(uParam1);
	unk_0x2AE954BA77A66307(uParam2);
	return unk_0x73CB3406A86A3A02(0);
}

bool func_29(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

void func_30(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_31(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_31(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_32(var uParam0, bool bParam1)
{
	unk_0xB0550BC91B0159D6(uParam0, iParam1);
}

void func_33()
{
	unk_0x027F803A942FB98F();
}

bool func_34(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_35()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	bVar0 = false;
	while (bVar0 < 32)
	{
		iVar1 = 0;
		bVar2 = unk_0xA1087A6350CD9244(bVar0);
		if (bVar2 != func_23() && unk_0x976D40337FCB1481(bVar2))
		{
			if (BitTest(Local_418[bVar2 /*2*/], 0))
			{
				if (!BitTest(Local_393.f_13, bVar2))
				{
					if (Local_418[bVar2 /*2*/].f_1 != 0)
					{
						if (BitTest(Local_418[bVar2 /*2*/].f_1, 0))
						{
							iVar3 = 0;
							while (iVar3 < 10)
							{
								if (Local_393.f_2[iVar3] < 0)
								{
									Local_393.f_2[iVar3] = bVar2;
									unk_0xCED9E32812D6C7C7(&(Local_393.f_13), bVar2);
								}
								else
								{
									iVar3++;
								}
							}
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < 10)
							{
								if (BitTest(Local_418[bVar2 /*2*/].f_1, iVar4 + 1))
								{
									Local_393.f_2[iVar4] = bVar2;
									unk_0xCED9E32812D6C7C7(&(Local_393.f_13), bVar2);
								}
								else
								{
									iVar4++;
								}
							}
						}
					}
				}
			}
			else
			{
				iVar1 = 1;
			}
		}
		else
		{
			iVar1 = 1;
		}
		if (iVar1 && bVar2 != unk_0x9E2D6C50374FCFA9())
		{
			if (BitTest(Local_393.f_13, bVar0))
			{
				iVar5 = 0;
				while (iVar5 < 10)
				{
					if (Local_393.f_2[iVar5] == bVar0)
					{
						if (unk_0xCCDCD6672DAE6835(Local_393.f_14[iVar5]))
						{
							if (unk_0x07B2F8356DC13CF4(Local_393.f_14[iVar5]))
							{
								Local_393.f_2[iVar5] = -1;
								func_24(&(Local_393.f_14[iVar5]));
								unk_0xB0550BC91B0159D6(&(Local_393.f_13), bVar0);
							}
							else
							{
								unk_0xC31EECA11005273C(Local_393.f_14[iVar5]);
							}
							else
							{
								Jump @393; //curOff = 369
								Local_393.f_2[iVar5] = -1;
								unk_0xB0550BC91B0159D6(&(Local_393.f_13), bVar0);
								iVar5++;
							}
							bVar0++;
						}

void func_36(var uParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	unk_0x8FB472886552D737(func_43());
	if (!unk_0x6F940C2636C076AD(func_43()))
	{
		return;
	}
	if (*uParam1)
	{
		if (!unk_0x90F6E2F6488B98BA(uParam1->f_14[uParam0->f_281.f_4]))
		{
			iVar0 = joaat("xs_prop_arena_tablet_drone_01");
			unk_0xD69A0C3662175E68(iVar0);
			if (!unk_0x0152AA00FA3130F1(iVar0))
			{
				return;
			}
			if (func_37(unk_0xC162EEC794CBB80B(false, 1) + 1, 0, 1))
			{
				if (!BitTest(uParam1->f_1, uParam0->f_281.f_4))
				{
					unk_0x793E115A707D0BF5(unk_0xC162EEC794CBB80B(false, 1) + 1);
					unk_0xCED9E32812D6C7C7(&(uParam1->f_1), uParam0->f_281.f_4);
				}
				else if (unk_0x853FFA3D0A54864F(1))
				{
					Var2 = { unk_0x3DBAB8E11699EAEE(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_4 /*14*/])->f_8, (uParam0[uParam0->f_281.f_4 /*14*/])->f_8.f_3, 0, 2) };
					Var5 = { unk_0x34AEDCEA59226CCB(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_4 /*14*/])->f_8, (uParam0[uParam0->f_281.f_4 /*14*/])->f_8.f_3, 0, 2) };
					uVar1 = unk_0x0E536D72AB30F4C8(iVar0, Var2, 1, 1, 0);
					unk_0xF1A23B343DFEDFD0(iVar0);
					unk_0xFEF687AF74EEDCC2(uVar1, 0);
					unk_0xA539EDE8DA5BBC22(uVar1, Var2, 0, 0, 1);
					unk_0x8CE3D365F064F69E(uVar1, Var5, 2, 1);
					unk_0x5C65DDDC219B3AA5(uVar1, true);
					uParam1->f_14[uParam0->f_281.f_4] = unk_0x2D0F5291E9305922(uVar1);
				}
			}
		}
		uParam0->f_281.f_4++;
		if (uParam0->f_281.f_4 >= 10)
		{
			uParam0->f_281.f_4 = 0;
		}
	}
}

bool func_37(int iParam0, bool bParam1, bool bParam2)
{
	return func_38(2, iParam0, 1, bParam1, bParam2);
}

int func_38(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1661006, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_42(iParam0) - func_41(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_41(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_42(iParam0) - func_40(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_41(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_42(iParam0) - func_41(iParam0, 1));
		}
		if (!bParam4 && Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/] != 3)
		{
			iVar1 = (iVar1 - func_39(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_39(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1661006.f_1;
			break;
		
		case 1:
			return Global_1661006.f_2;
			break;
		
		case 2:
			return Global_1661006.f_3;
			break;
	}
	return 0;
}

int func_41(int iParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0x9E2D6C50374FCFA9();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xDD50B5A22807BAD4())
			{
				return Global_2689235[bVar0 /*453*/].f_217;
			}
			else
			{
				return unk_0x8736933282D0483C(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xDD50B5A22807BAD4())
			{
				return Global_2689235[bVar0 /*453*/].f_218;
			}
			else
			{
				return unk_0xBD7B8099C8298D2F(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xDD50B5A22807BAD4())
			{
				return Global_2689235[bVar0 /*453*/].f_219;
			}
			else
			{
				return unk_0xC162EEC794CBB80B(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1661014;
			break;
		
		case 1:
			return Global_1661015;
			break;
		
		case 2:
			return Global_1661016;
			break;
	}
	return 0;
}

char* func_43()
{
	if (func_44())
	{
		return "anim@arena@amb@seat_drone_tablet@female@";
	}
	return "anim@arena@amb@seat_drone_tablet@male@";
}

bool func_44()
{
	return func_45(unk_0x9E2D6C50374FCFA9());
}

int func_45(int iParam0)
{
	if (unk_0x15CAA6D7B11F1A7C(unk_0x407E03586628E458(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_46()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_393.f_0)
	{
		iVar0 = 1;
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_393.f_2[iVar1] == -1 || Local_393.f_2[iVar1] == unk_0x9E2D6C50374FCFA9())
			{
				iVar0 = 0;
				if (Local_393.f_2[iVar1] == -1)
				{
					if ((iVar1 <= 7 && func_56()) && func_52())
					{
						unk_0xE87A5B1B96B0EC6F(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), 1);
					}
					else
					{
						unk_0xA1F6E5EF42ACDB8C(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), 0);
					}
				}
				else
				{
					unk_0xE87A5B1B96B0EC6F(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), 1);
				}
			}
			else
			{
				unk_0xE87A5B1B96B0EC6F(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), 1);
			}
			iVar1++;
		}
		Global_2787910 = iVar0;
	}
	else
	{
		Global_2787910 = 0;
	}
	if (Local_93.f_281.f_5 == 4)
	{
		if (!BitTest(Local_418[unk_0x9E2D6C50374FCFA9() /*2*/], 0))
		{
			unk_0xCED9E32812D6C7C7(&(Local_418[unk_0x9E2D6C50374FCFA9() /*2*/]), false);
			if (func_50())
			{
				unk_0xCED9E32812D6C7C7(&(Local_418[unk_0x9E2D6C50374FCFA9() /*2*/].f_1), false);
			}
			else if (Local_93.f_281.f_9 == 1)
			{
				unk_0xCED9E32812D6C7C7(&(Local_418[unk_0x9E2D6C50374FCFA9() /*2*/].f_1), Local_93.f_281.f_2 + 1);
			}
		}
		else if (BitTest(Local_393.f_13, unk_0x9E2D6C50374FCFA9()))
		{
			if (func_49() < 0)
			{
				iVar2 = 0;
				while (iVar2 < 10)
				{
					if (Local_393.f_2[iVar2] == unk_0x9E2D6C50374FCFA9())
					{
						func_21(iVar2);
					}
					iVar2++;
				}
			}
		}
	}
	else if ((!BitTest(Global_1965531, 7) && !BitTest(Global_1965531, 3)) && !func_22(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_50())
		{
			if (func_48() && unk_0xE9E8955A780DDA01())
			{
				func_47(0);
			}
		}
		if (BitTest(Local_418[unk_0x9E2D6C50374FCFA9() /*2*/], 0))
		{
			if (!func_48() && func_49() < 0)
			{
				if (func_50())
				{
					func_47(0);
				}
				unk_0xB0550BC91B0159D6(&(Local_418[unk_0x9E2D6C50374FCFA9() /*2*/]), false);
				Local_418[unk_0x9E2D6C50374FCFA9() /*2*/].f_1 = 0;
			}
		}
	}
}

void func_47(int iParam0)
{
	Global_2787909 = iParam0;
}

int func_48()
{
	if (Global_2725430 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_49()
{
	return Global_2725432;
}

bool func_50()
{
	return Global_2787909;
}

Vector3 func_51(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2800.331f, -3922.829f, 181.4558f;
		
		case 1:
			return 2799.301f, -3922.829f, 181.4558f;
		
		case 2:
			return 2798.268f, -3922.829f, 181.4558f;
		
		case 3:
			return 2797.243f, -3922.829f, 181.4558f;
		
		case 4:
			return 2796.213f, -3922.829f, 181.4558f;
		
		case 5:
			return 2795.178f, -3922.829f, 181.4558f;
		
		case 6:
			return 2794.153f, -3922.829f, 181.4558f;
		
		case 7:
			return 2793.123f, -3922.829f, 181.4558f;
		
		case 8:
			return 2792.087f, -3922.829f, 181.4558f;
		
		case 9:
			return 2791.061f, -3922.829f, 181.4558f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_52()
{
	int iVar0;
	int iVar1;
	
	if (func_55() && !func_54())
	{
		return 1;
	}
	if (BitTest(Global_4718592.f_30, 25) || BitTest(Global_4718592.f_32, 23))
	{
		if (func_53())
		{
			return 1;
		}
	}
	iVar0 = unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9());
	if (iVar0 > 4 || iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = Global_1058069.f_14[iVar0];
	if (iVar1 < 17)
	{
		if ((((BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 23) && BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 24)) && BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 25)) && BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 26)) && BitTest(Global_4718592.f_32, 16))
		{
			return 1;
		}
	}
	return 0;
}

bool func_53()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_36.f_18, 14);
}

bool func_54()
{
	return Global_1574966;
}

var func_55()
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965531, 0));
}

int func_56()
{
	if (func_58() && !func_57())
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_32, 16))
	{
		return 1;
	}
	return 0;
}

int func_57()
{
	if (Global_4718592.f_117095 == 1 || Global_4718592.f_117095 == 2)
	{
		return 1;
	}
	return 0;
}

var func_58()
{
	return BitTest(Global_4718592.f_162497, 12);
}

void func_59(var uParam0, int iParam1)
{
	char* sVar0;
	char* sVar16;
	var uVar20;
	var uVar21;
	struct<3> Var22;
	struct<3> Var25;
	bool bVar28;
	int iVar29;
	struct<3> Var30;
	float fVar33;
	float fVar34;
	float fVar35;
	struct<3> Var36;
	var uVar39;
	var uVar40;
	struct<3> Var41;
	struct<3> Var44;
	var uVar47;
	int iVar48;
	struct<3> Var49;
	struct<3> Var52;
	
	func_147(uParam0);
	func_145(uParam0);
	func_133(uParam0);
	switch (uParam0->f_281.f_5)
	{
		case 0:
			func_32(&(uParam0->f_281), 11);
			func_132(uParam0, 1);
			break;
		
		case 1:
			if (func_131(uParam0))
			{
				uParam0->f_281.f_7 = unk_0x320D1840B6DAA1CC();
				func_132(uParam0, 2);
			}
			else if (func_50())
			{
				uParam0->f_281.f_7 = unk_0x320D1840B6DAA1CC();
				func_132(uParam0, 2);
			}
			break;
		
		case 2:
			if ((func_130(unk_0xE2D3D51028F0428A(), uParam0[uParam0->f_281.f_2 /*14*/]) && func_129(unk_0xE2D3D51028F0428A(), (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3)) && !func_50())
			{
				if ((((((func_128(uParam0) || Global_1931426) || func_126(uParam0)) || !func_125(uParam0)) || ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != unk_0x9E2D6C50374FCFA9())) || ((uParam0->f_281.f_2 <= 7 && func_56()) && func_52())) || (uParam0->f_281.f_2 < 10 && Global_262145.f_26630))
				{
					if (!Global_1931426 && ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != unk_0x9E2D6C50374FCFA9()))
					{
						uVar21 = unk_0x407E03586628E458(iParam1->f_2[uParam0->f_281.f_2]);
						if (unk_0xE5965CDF24F93A9F(uVar21) && !unk_0xD132EDDA78FF4A51(iVar21, 2797.988f, -3954.898f, 181.0005f, 2797.949f, -3930.85f, 187.4114f, 30f, 0, 1, 0))
						{
							if (uParam0->f_281.f_6 == -1)
							{
								func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_FULL", 0, unk_0x61042CA2A97BBB69(iParam1->f_2[uParam0->f_281.f_2]), 0, 1);
							}
						}
						else
						{
							func_25(uParam0, 1);
							func_132(uParam0, 1);
						}
					}
					else if ((uParam0->f_281.f_2 <= 7 && func_56()) && func_52())
					{
						if (uParam0->f_281.f_6 == -1)
						{
							func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_NO", 0, 0, 0, 0);
						}
					}
					else
					{
						func_25(uParam0, 1);
						func_132(uParam0, 1);
					}
				}
				else if (uParam0->f_281.f_6 == -1)
				{
					if ((unk_0x320D1840B6DAA1CC() - uParam0->f_281.f_7) > 150)
					{
						if (uParam0->f_281.f_2 <= 9)
						{
							func_124(&(uParam0->f_281.f_6), 4, "AR_SEAT_PRMPT", 0, 0, 0, 0);
						}
						else
						{
							func_124(&(uParam0->f_281.f_6), 4, "MPJAC_SIT", 0, 0, 0, 0);
						}
					}
				}
				else if (unk_0xF09A4F413B0D30EB(0, 51))
				{
					func_30(&(uParam0->f_281.f_6));
					func_121(uParam0);
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(unk_0x9E2D6C50374FCFA9(), 0, 256, 0);
						func_132(uParam0, 4);
					}
					else
					{
						func_132(uParam0, 3);
					}
				}
			}
			else if (func_50())
			{
				func_30(&(uParam0->f_281.f_6));
				func_132(uParam0, 4);
			}
			else
			{
				func_25(uParam0, 1);
				func_132(uParam0, 1);
			}
			break;
		
		case 4:
			if (func_49() >= 0)
			{
				if (func_50())
				{
					uParam0->f_281.f_2 = func_49();
					if (unk_0x2B5F4FBAF644BEC8(unk_0xE2D3D51028F0428A()))
					{
						unk_0xB970266897BDB48D(unk_0xE2D3D51028F0428A(), 0, 1);
					}
					func_120(&(uParam0->f_281), 14);
				}
				func_121(uParam0);
				func_132(uParam0, 3);
			}
			if (!func_50())
			{
				if ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != unk_0x9E2D6C50374FCFA9())
				{
					func_25(uParam0, 1);
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(unk_0x9E2D6C50374FCFA9(), 1, 0, 0);
					}
					func_4();
					func_132(uParam0, 1);
				}
			}
			break;
		
		case 3:
			func_119(uParam0, &sVar0);
			if (uParam0->f_281.f_9 == 1)
			{
				if (!unk_0x90F6E2F6488B98BA(iParam1->f_14[uParam0->f_281.f_2]))
				{
					return;
				}
				if (!unk_0x07B2F8356DC13CF4(iParam1->f_14[uParam0->f_281.f_2]))
				{
					unk_0xC31EECA11005273C(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			unk_0x8FB472886552D737(&sVar0);
			if (unk_0x6F940C2636C076AD(&sVar0))
			{
				func_118();
				func_132(uParam0, 5);
			}
			break;
		
		case 5:
			func_119(uParam0, &sVar0);
			func_117(uParam0, &sVar16, 0);
			Var22 = { unk_0x3DBAB8E11699EAEE(&sVar0, &sVar16, func_116(uParam0), func_115(uParam0), 0, 2) };
			Var25 = { unk_0x34AEDCEA59226CCB(&sVar0, &sVar16, func_116(uParam0), func_115(uParam0), 0, 2) };
			if (func_34(&(uParam0->f_281), 14))
			{
				bVar28 = true;
				if (func_114() >= 0)
				{
					bVar28 = false;
				}
				if (func_102(Var22, Var25.f_2, 0, 0, 0, 0, 1, bVar28, 1, 0, 0) && Global_2787912)
				{
					func_132(uParam0, 6);
				}
				else if (!Global_2787912)
				{
				}
			}
			else if (Global_2787912)
			{
				if (uParam0->f_281.f_9 == 1)
				{
					if (unk_0x90F6E2F6488B98BA(iParam1->f_14[uParam0->f_281.f_2]) && !unk_0x07B2F8356DC13CF4(iParam1->f_14[uParam0->f_281.f_2]))
					{
						unk_0xC31EECA11005273C(iParam1->f_14[uParam0->f_281.f_2]);
					}
				}
				unk_0x13C3030981EA7C3B(unk_0xE2D3D51028F0428A(), Var22, 1f, 500, Var25.f_2, 0.05f);
				func_21(uParam0->f_281.f_2);
				func_132(uParam0, 6);
			}
			else if (!Global_2787912)
			{
			}
			break;
		
		case 6:
			if (uParam0->f_281.f_9 == 1)
			{
				if (unk_0x90F6E2F6488B98BA(iParam1->f_14[uParam0->f_281.f_2]) && !unk_0x07B2F8356DC13CF4(iParam1->f_14[uParam0->f_281.f_2]))
				{
					unk_0xC31EECA11005273C(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			func_119(uParam0, &sVar0);
			func_117(uParam0, &sVar16, 0);
			iVar29 = unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), joaat("script_task_go_straight_to_coord"));
			Var30 = { unk_0x34AEDCEA59226CCB(&sVar0, &sVar16, func_116(uParam0), func_115(uParam0), 0, 2) };
			fVar33 = Var30.f_2;
			if (((iVar29 != 1 && iVar29 != 0) || func_101(unk_0x82FE2343F8BDFF0B(unk_0xE2D3D51028F0428A()), fVar33, 5f)) || func_34(&(uParam0->f_281), 14))
			{
				fVar34 = 1f;
				fVar35 = 0f;
				Var36 = { func_116(uParam0) };
				if (func_34(&(uParam0->f_281), 14))
				{
					fVar34 = 2f;
					fVar35 = 0.9f;
				}
				uParam0->f_281.f_1 = unk_0x497E09037A63D346(Var36, func_115(uParam0), 2, 1, 0, 1065353216, fVar35, fVar34);
				unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), uParam0->f_281.f_1, &sVar0, &sVar16, 2f, -1000f, 13, 16, 1148846080, 0);
				unk_0x60E9DD146055C13E(uParam0->f_281.f_1);
				uParam0->f_281.f_9.f_4 = unk_0x320D1840B6DAA1CC();
				func_120(&(uParam0->f_281), 8);
				func_132(uParam0, 7);
			}
			break;
		
		case 7:
			if (uParam0->f_281.f_9 == 1)
			{
				if (unk_0x90F6E2F6488B98BA(iParam1->f_14[uParam0->f_281.f_2]) && !unk_0x07B2F8356DC13CF4(iParam1->f_14[uParam0->f_281.f_2]))
				{
					unk_0xC31EECA11005273C(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			if (func_34(&(uParam0->f_281), 10))
			{
				func_32(&(uParam0->f_281), 10);
				if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
				{
					unk_0x979FC7400A5D0CD2(uVar39, "Exit_Menu", unk_0xE8BBC6CC2C60F24A(iParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
				}
				func_100(uParam0);
			}
			func_62(uParam0, iParam1);
			uVar20 = unk_0x57736A7B8965A88A(uParam0->f_281.f_1);
			if (unk_0xCE2C78E9FC0B01E3(uVar20))
			{
				if (unk_0x54DE1614490C2A83(uVar20) >= 1f)
				{
					if (!Global_2787911)
					{
						if (!unk_0x2B5F4FBAF644BEC8(unk_0xE2D3D51028F0428A()) && !unk_0x3F1009A1E4E10C6A(unk_0xE2D3D51028F0428A()))
						{
							if (Global_1574965)
							{
								unk_0x28271FBFA024090B(unk_0xE2D3D51028F0428A(), 1, 1);
							}
						}
					}
					if (!func_48())
					{
						if (uParam0->f_281.f_9 == 1)
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								unk_0x979FC7400A5D0CD2(uVar40, "Enter_Menu", unk_0xE8BBC6CC2C60F24A(iParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
							}
							func_20(uParam0->f_281.f_2);
						}
						else
						{
							func_20(uParam0->f_281.f_2 + 20);
						}
						Global_2787911 = 1;
					}
					else
					{
						Global_2787911 = 1;
					}
					func_60(uParam0, 0);
					func_119(uParam0, &sVar0);
					func_117(uParam0, &sVar16, 0);
					uParam0->f_281.f_1 = unk_0x497E09037A63D346(func_116(uParam0), func_115(uParam0), 2, 1, 0, 1065353216, 0f, 1f);
					unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), uParam0->f_281.f_1, &sVar0, &sVar16, 4f, -1.5f, 13, 16, 1148846080, 0);
					unk_0x60E9DD146055C13E(uParam0->f_281.f_1);
					func_120(&(uParam0->f_281), 8);
					func_120(&(uParam0->f_281), 11);
				}
				else
				{
					if (uParam0->f_281.f_9 == 1 && (unk_0xD9E56EC8ED04E45E(unk_0xE2D3D51028F0428A(), 1374875855) || unk_0x54DE1614490C2A83(uVar20) > 0.25f))
					{
						if ((unk_0x90F6E2F6488B98BA(iParam1->f_14[uParam0->f_281.f_2]) && unk_0x07B2F8356DC13CF4(iParam1->f_14[uParam0->f_281.f_2])) && !unk_0x55B23FE400FCEA6B(unk_0xE8BBC6CC2C60F24A(iParam1->f_14[uParam0->f_281.f_2]), 0))
						{
							if (!unk_0xE85F749F6D5C809E(unk_0xE8BBC6CC2C60F24A(iParam1->f_14[uParam0->f_281.f_2])))
							{
								unk_0x9A97DC6DBC7B223D(unk_0xE8BBC6CC2C60F24A(iParam1->f_14[uParam0->f_281.f_2]), unk_0xE2D3D51028F0428A(), unk_0xB897FCFCFA664B38(unk_0xE2D3D51028F0428A(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
							}
						}
					}
					func_32(&(uParam0->f_281), 8);
				}
			}
			else if (!func_34(&(uParam0->f_281), 8) && uParam0->f_281.f_5 == 7)
			{
				if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
				{
					if (unk_0x90F6E2F6488B98BA(iParam1->f_14[uParam0->f_281.f_2]) && unk_0x07B2F8356DC13CF4(iParam1->f_14[uParam0->f_281.f_2]))
					{
						if (unk_0xE85F749F6D5C809E(unk_0xE8BBC6CC2C60F24A(iParam1->f_14[uParam0->f_281.f_2])))
						{
							unk_0xE6451C2F193342C7(unk_0xE8BBC6CC2C60F24A(iParam1->f_14[uParam0->f_281.f_2]), 0, 1);
						}
						func_24(&(iParam1->f_14[uParam0->f_281.f_2]));
					}
				}
				func_132(uParam0, 9);
			}
			break;
		
		case 8:
			if (uParam0->f_281.f_9 == 1)
			{
				if (unk_0x90F6E2F6488B98BA(iParam1->f_14[uParam0->f_281.f_2]) && !unk_0x07B2F8356DC13CF4(iParam1->f_14[uParam0->f_281.f_2]))
				{
					unk_0xC31EECA11005273C(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			unk_0x0B92578FB47DA084(uParam0->f_281.f_1);
			if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
			{
				if (unk_0x90F6E2F6488B98BA(iParam1->f_14[uParam0->f_281.f_2]) && unk_0x07B2F8356DC13CF4(iParam1->f_14[uParam0->f_281.f_2]))
				{
					if (unk_0xE85F749F6D5C809E(unk_0xE8BBC6CC2C60F24A(iParam1->f_14[uParam0->f_281.f_2])))
					{
						unk_0xE6451C2F193342C7(unk_0xE8BBC6CC2C60F24A(iParam1->f_14[uParam0->f_281.f_2]), 0, 1);
					}
					Var41 = { unk_0x3DBAB8E11699EAEE(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0, 2) };
					Var44 = { unk_0x34AEDCEA59226CCB(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0, 2) };
					unk_0xA539EDE8DA5BBC22(unk_0xE8BBC6CC2C60F24A(iParam1->f_14[uParam0->f_281.f_2]), Var41, 0, 0, 1);
					unk_0x8CE3D365F064F69E(unk_0xE8BBC6CC2C60F24A(iParam1->f_14[uParam0->f_281.f_2]), Var44, 2, 1);
					unk_0x5C65DDDC219B3AA5(unk_0xE8BBC6CC2C60F24A(iParam1->f_14[uParam0->f_281.f_2]), true);
				}
			}
			func_132(uParam0, 9);
			break;
		
		case 9:
			if (func_34(&(uParam0->f_281), 15))
			{
				func_33();
				unk_0xB0550BC91B0159D6(&Global_2787913, 8);
				func_32(&(uParam0->f_281), 15);
			}
			if (uParam0->f_281.f_9 == 1)
			{
				if (unk_0x90F6E2F6488B98BA(iParam1->f_14[uParam0->f_281.f_2]) && !unk_0x07B2F8356DC13CF4(iParam1->f_14[uParam0->f_281.f_2]))
				{
					unk_0xC31EECA11005273C(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			uVar47 = unk_0x57736A7B8965A88A(uParam0->f_281.f_1);
			iVar48 = unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), joaat("script_task_synchronized_scene"));
			if (iVar48 == 0 || iVar48 == 1)
			{
				if (unk_0xCE2C78E9FC0B01E3(uVar47))
				{
					if ((unk_0x54DE1614490C2A83(uVar47) >= 0.7f || unk_0xD9E56EC8ED04E45E(unk_0xE2D3D51028F0428A(), 364629851)) || unk_0xD9E56EC8ED04E45E(unk_0xE2D3D51028F0428A(), 2116425869))
					{
						unk_0x0B92578FB47DA084(uParam0->f_281.f_1);
						if ((!BitTest(Global_1965531, 7) && !BitTest(Global_1965531, 3)) && !func_22(unk_0x9E2D6C50374FCFA9()))
						{
							func_21(-1);
							func_20(-1);
						}
						Global_2787911 = 0;
						unk_0xB0550BC91B0159D6(&Global_2787913, 6);
						func_25(uParam0, 1);
						func_32(&(uParam0->f_281), 14);
						if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
						{
							if (unk_0x90F6E2F6488B98BA(iParam1->f_14[uParam0->f_281.f_2]) && unk_0x07B2F8356DC13CF4(iParam1->f_14[uParam0->f_281.f_2]))
							{
								if (unk_0xE85F749F6D5C809E(unk_0xE8BBC6CC2C60F24A(iParam1->f_14[uParam0->f_281.f_2])))
								{
									unk_0xE6451C2F193342C7(unk_0xE8BBC6CC2C60F24A(iParam1->f_14[uParam0->f_281.f_2]), 0, 1);
								}
								Var49 = { unk_0x3DBAB8E11699EAEE(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0, 2) };
								Var52 = { unk_0x34AEDCEA59226CCB(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0, 2) };
								unk_0xA539EDE8DA5BBC22(unk_0xE8BBC6CC2C60F24A(iParam1->f_14[uParam0->f_281.f_2]), Var49, 0, 0, 1);
								unk_0x8CE3D365F064F69E(unk_0xE8BBC6CC2C60F24A(iParam1->f_14[uParam0->f_281.f_2]), Var52, 2, 1);
								unk_0x5C65DDDC219B3AA5(unk_0xE8BBC6CC2C60F24A(iParam1->f_14[uParam0->f_281.f_2]), true);
							}
						}
						if (!unk_0x2981C54770E1D19C())
						{
							if (uParam0->f_281.f_9 == 1)
							{
								func_5(unk_0x9E2D6C50374FCFA9(), 1, 0, 0);
							}
						}
						func_4();
						func_132(uParam0, 0);
					}
					else if (unk_0xD9E56EC8ED04E45E(unk_0xE2D3D51028F0428A(), -641050666))
					{
						if (uParam0->f_281.f_9 == 1)
						{
							if (unk_0x90F6E2F6488B98BA(iParam1->f_14[uParam0->f_281.f_2]) && unk_0x07B2F8356DC13CF4(iParam1->f_14[uParam0->f_281.f_2]))
							{
								if (unk_0xE85F749F6D5C809E(unk_0xE8BBC6CC2C60F24A(iParam1->f_14[uParam0->f_281.f_2])))
								{
									unk_0xE6451C2F193342C7(unk_0xE8BBC6CC2C60F24A(iParam1->f_14[uParam0->f_281.f_2]), 0, 1);
								}
							}
						}
					}
				}
			}
			else
			{
				if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
				{
					if (unk_0x90F6E2F6488B98BA(iParam1->f_14[uParam0->f_281.f_2]) && unk_0x07B2F8356DC13CF4(iParam1->f_14[uParam0->f_281.f_2]))
					{
						if (unk_0xE85F749F6D5C809E(unk_0xE8BBC6CC2C60F24A(iParam1->f_14[uParam0->f_281.f_2])))
						{
							unk_0xE6451C2F193342C7(unk_0xE8BBC6CC2C60F24A(iParam1->f_14[uParam0->f_281.f_2]), 0, 1);
						}
						func_24(&(iParam1->f_14[uParam0->f_281.f_2]));
					}
				}
				if ((!BitTest(Global_1965531, 7) && !BitTest(Global_1965531, 3)) && !func_22(unk_0x9E2D6C50374FCFA9()))
				{
					func_21(-1);
					func_20(-1);
				}
				Global_2787911 = 0;
				unk_0xB0550BC91B0159D6(&Global_2787913, 6);
				func_25(uParam0, 1);
				func_32(&(uParam0->f_281), 14);
				if (!unk_0x2981C54770E1D19C())
				{
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(unk_0x9E2D6C50374FCFA9(), 1, 0, 0);
					}
				}
				func_4();
				func_132(uParam0, 0);
			}
			break;
	}
}

void func_60(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam1)
	{
		iVar1 = func_61(uParam0);
		if (iVar1 != uParam0->f_281.f_9.f_1)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + uParam0->f_281.f_9.f_1);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = uParam0->f_281.f_9.f_2;
		}
		iVar1 = uParam0->f_281.f_9.f_1;
	}
	else if (uParam0->f_281.f_9.f_2 == 5)
	{
		iVar1 = uParam0->f_281.f_9.f_1;
		iVar2 = 3;
		iVar0 = unk_0x5853B15F78E1A265(0, iVar2);
		if (iVar0 == uParam0->f_281.f_9.f_3)
		{
			iVar0 = (iVar0 + 1 % iVar2);
		}
	}
	else
	{
		if (uParam0->f_281.f_9.f_2 > 6)
		{
			iVar1 = func_61(uParam0);
			uParam0->f_281.f_9.f_4 = unk_0x320D1840B6DAA1CC();
		}
		else
		{
			iVar1 = uParam0->f_281.f_9.f_1;
		}
		if ((unk_0x320D1840B6DAA1CC() - uParam0->f_281.f_9.f_4) >= 90000)
		{
			iVar1 = func_61(uParam0);
			if (iVar1 != uParam0->f_281.f_9.f_1)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + uParam0->f_281.f_9.f_1);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = uParam0->f_281.f_9.f_1;
		}
		else
		{
			iVar0 = 5;
		}
	}
	uParam0->f_281.f_9.f_3 = uParam0->f_281.f_9.f_2;
	uParam0->f_281.f_9.f_2 = iVar0;
	uParam0->f_281.f_9.f_1 = iVar1;
}

int func_61(var uParam0)
{
	return uParam0->f_281.f_9.f_1;
}

void func_62(var uParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	
	if ((BitTest(Global_1965531, 7) || BitTest(Global_1965531, 3)) || func_22(unk_0x9E2D6C50374FCFA9()))
	{
		if (uParam0->f_281.f_5 == 7 && unk_0xA829C9A2767AC8EF())
		{
			func_3(uParam0, uParam1);
			func_132(uParam0, 9);
		}
	}
	if (func_34(&(uParam0->f_281), 13))
	{
		iVar0 = func_92(&(uParam0->f_281.f_17));
		if (iVar0 == 1)
		{
			if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
			{
				unk_0x979FC7400A5D0CD2(uVar1, "Select_Turret", unk_0xE8BBC6CC2C60F24A(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
			}
			unk_0xCED9E32812D6C7C7(&Global_1965531, 9);
			func_32(&(uParam0->f_281), 13);
		}
		else if (iVar0 == 2)
		{
			if (!BitTest(Global_2787913, 7))
			{
				unk_0xCED9E32812D6C7C7(&Global_2787913, 7);
			}
			unk_0x91DFC8F68F6D9B05(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_32(&(uParam0->f_281), 13);
		}
	}
	if (uParam0->f_281.f_5 == 7)
	{
		if (unk_0xB1C1E679BD17A4F0(2))
		{
			func_25(uParam0, 1);
		}
		if (unk_0xD9E56EC8ED04E45E(unk_0xE2D3D51028F0428A(), -1322051853))
		{
			func_25(uParam0, 1);
			if (func_34(&(uParam0->f_281), 15))
			{
				func_33();
				unk_0xB0550BC91B0159D6(&Global_2787913, 8);
				func_32(&(uParam0->f_281), 15);
			}
		}
		else if ((((((((((((((((((((((func_34(&(uParam0->f_281), 13) || !Global_1574965) || (!BitTest(Global_1965531, 23) && !func_91())) || Global_2789734) || Global_2789737) || BitTest(Global_1958711, 13)) || BitTest(Global_1965531, 14)) || BitTest(Global_1958711, 9)) || BitTest(Global_2787913, 0)) || BitTest(Global_1965531, 6)) || BitTest(Global_1965531, 7)) || BitTest(Global_1965531, 8)) || BitTest(Global_1965531, 9)) || BitTest(Global_1965531, 2)) || BitTest(Global_1965531, 3)) || BitTest(Global_1965531, 4)) || BitTest(Global_1965531, 5)) || func_22(unk_0x9E2D6C50374FCFA9())) || func_50()) || unk_0x0DBA73788F6E3C5F(2, 19)) || !unk_0xE9E8955A780DDA01()) || func_88(unk_0x9E2D6C50374FCFA9())) || Global_2787934 != 0)
		{
			func_25(uParam0, 1);
			if (!BitTest(Global_1965531, 23))
			{
				if (!func_34(&(uParam0->f_281), 15) && Global_2787934 == 0)
				{
					func_87("ARENA SPECTATOR BOX TABLETS");
					unk_0xCED9E32812D6C7C7(&Global_2787913, 8);
					func_120(&(uParam0->f_281), 15);
				}
			}
			else if (func_34(&(uParam0->f_281), 15))
			{
				func_33();
				unk_0xB0550BC91B0159D6(&Global_2787913, 8);
				func_32(&(uParam0->f_281), 15);
			}
		}
		else if (func_86(uParam0))
		{
			func_25(uParam0, 1);
			if (func_34(&(uParam0->f_281), 15))
			{
				func_33();
				unk_0xB0550BC91B0159D6(&Global_2787913, 8);
				func_32(&(uParam0->f_281), 15);
			}
		}
		else
		{
			if (!func_34(&(uParam0->f_281), 15))
			{
				func_87("ARENA SPECTATOR BOX TABLETS");
				unk_0xCED9E32812D6C7C7(&Global_2787913, 8);
				func_120(&(uParam0->f_281), 15);
			}
			unk_0x7BC5E5A5FF7F278F(2);
			unk_0x7653D561C9574763(0, 24, 1);
			unk_0x7653D561C9574763(0, 257, 1);
			unk_0x7653D561C9574763(0, 142, 1);
			unk_0x7653D561C9574763(0, 141, 1);
			unk_0x7653D561C9574763(0, 140, 1);
			unk_0x7653D561C9574763(0, 263, 1);
			unk_0x7653D561C9574763(0, 264, 1);
			unk_0x7653D561C9574763(0, 143, 1);
			unk_0x7653D561C9574763(2, 200, 1);
			bVar2 = false;
			if (func_85())
			{
				bVar2 = true;
			}
			if (func_27("ARENA_VIP_CASH1", Global_262145.f_26633))
			{
				unk_0xB0550BC91B0159D6(&Global_2787913, 5);
			}
			if (func_27("ARENA_VIP_CASH2", Global_262145.f_26634))
			{
				unk_0xB0550BC91B0159D6(&Global_2787913, 4);
			}
			if (func_29("ARENA_VIP_ABIL"))
			{
				unk_0xB0550BC91B0159D6(&Global_2787913, 7);
			}
			if (BitTest(Global_2787913, 4) && uParam0->f_281.f_6 == -1)
			{
				func_84("ARENA_VIP_CASH2", Global_262145.f_26634, 2000);
			}
			if (BitTest(Global_2787913, 5) && uParam0->f_281.f_6 == -1)
			{
				func_84("ARENA_VIP_CASH1", Global_262145.f_26633, 2000);
			}
			if (BitTest(Global_2787913, 7) && uParam0->f_281.f_6 == -1)
			{
				func_83("ARENA_VIP_ABIL", 2000);
			}
			if ((BitTest(Global_2787913, 4) || BitTest(Global_2787913, 5)) || BitTest(Global_2787913, 7))
			{
				func_25(uParam0, 1);
			}
			if ((((((((!unk_0xF1EC2C71FD1371B8() && !Global_1931426) && !func_34(&(uParam0->f_281), 0)) && !func_34(&(uParam0->f_281), 4)) && !func_82()) && !func_80(1)) && uParam0->f_281.f_9.f_2 != 3) && !unk_0x3E6C9DAD84CEFED1()) && !func_79())
			{
				if (bVar2)
				{
					if (func_56() && !func_52())
					{
						if (((((func_28("ARENA_SEAT_PC1", Global_262145.f_26633, Global_262145.f_26634) || func_27("ARENA_SEAT_PC2", Global_262145.f_26633)) || func_27("ARENA_SEAT_PC3", Global_262145.f_26634)) || func_28("ARENA_SEAT1", Global_262145.f_26633, Global_262145.f_26634)) || func_27("ARENA_SEAT2", Global_262145.f_26633)) || func_27("ARENA_SEAT3", Global_262145.f_26634))
						{
							func_25(uParam0, 1);
						}
					}
					else if (func_29("ARENA_SEAT_PC") || func_29("ARENA_SEAT"))
					{
						func_25(uParam0, 1);
					}
				}
				if ((((((!func_26() && !BitTest(Global_2787913, 4)) && !BitTest(Global_2787913, 5)) && !BitTest(Global_2787913, 7)) && !func_27("ARENA_VIP_CASH1", Global_262145.f_26633)) && !func_27("ARENA_VIP_CASH2", Global_262145.f_26634)) && !func_29("ARENA_VIP_ABIL"))
				{
					if (unk_0x3A76A0944BE2C291(2))
					{
						if (bVar2)
						{
							if (func_56() && !func_52())
							{
								if ((func_28("ARENA_SEAT_PC1", Global_262145.f_26633, Global_262145.f_26634) || func_27("ARENA_SEAT_PC2", Global_262145.f_26633)) || func_27("ARENA_SEAT_PC3", Global_262145.f_26634))
								{
									func_25(uParam0, 1);
								}
								func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_PC", 0, 0, 0, 0);
							}
							else
							{
								if (func_29("ARENA_SEAT_PC"))
								{
									func_25(uParam0, 1);
								}
								if (!BitTest(Global_2787913, 2) && !BitTest(Global_2787913, 3))
								{
									func_78("ARENA_SEAT_PC1", Global_262145.f_26633, Global_262145.f_26634);
								}
								else if (BitTest(Global_2787913, 2) && !BitTest(Global_2787913, 3))
								{
									func_84("ARENA_SEAT_PC2", Global_262145.f_26633, -1);
								}
								else if (!BitTest(Global_2787913, 2) && BitTest(Global_2787913, 3))
								{
									func_84("ARENA_SEAT_PC3", Global_262145.f_26634, -1);
								}
								else
								{
									func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_PC4", 0, 0, 0, 0);
								}
							}
						}
						else
						{
							func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_EX", 0, 0, 0, 0);
						}
					}
					else if (bVar2)
					{
						if (func_56() && !func_52())
						{
							if ((func_28("ARENA_SEAT1", Global_262145.f_26633, Global_262145.f_26634) || func_27("ARENA_SEAT2", Global_262145.f_26633)) || func_27("ARENA_SEAT3", Global_262145.f_26634))
							{
								func_25(uParam0, 1);
							}
							func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT", 0, 0, 0, 0);
						}
						else
						{
							if (func_29("ARENA_SEAT"))
							{
								func_25(uParam0, 1);
							}
							if (!BitTest(Global_2787913, 2) && !BitTest(Global_2787913, 3))
							{
								func_78("ARENA_SEAT1", Global_262145.f_26633, Global_262145.f_26634);
							}
							else if (BitTest(Global_2787913, 2) && !BitTest(Global_2787913, 3))
							{
								func_84("ARENA_SEAT2", Global_262145.f_26633, -1);
							}
							else if (!BitTest(Global_2787913, 2) && BitTest(Global_2787913, 3))
							{
								func_84("ARENA_SEAT3", Global_262145.f_26634, -1);
							}
							else
							{
								func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT4", 0, 0, 0, 0);
							}
						}
					}
					else
					{
						func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_EX", 0, 0, 0, 0);
					}
				}
				if (uParam0->f_281.f_5 == 7)
				{
					if (func_56() && !func_52())
					{
						if (((((((((unk_0xF01464D7AF0B7347(2, 235) && !unk_0xF09A4F413B0D30EB(2, 223)) && !unk_0xF09A4F413B0D30EB(2, 225)) && !unk_0xF09A4F413B0D30EB(2, 224)) && !unk_0xF09A4F413B0D30EB(2, 222)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !func_22(unk_0x9E2D6C50374FCFA9()))
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								unk_0x979FC7400A5D0CD2(uVar3, "Exit_Menu", unk_0xE8BBC6CC2C60F24A(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
							}
							func_100(uParam0);
						}
						if ((((((((((unk_0xF01464D7AF0B7347(2, 223) && !unk_0xF01464D7AF0B7347(2, 235)) && !unk_0xF09A4F413B0D30EB(2, 225)) && !unk_0xF09A4F413B0D30EB(2, 224)) && !unk_0xF09A4F413B0D30EB(2, 222)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !func_22(unk_0x9E2D6C50374FCFA9())) && bVar2)
						{
							if (func_77())
							{
								func_25(uParam0, 1);
								unk_0xCED9E32812D6C7C7(&Global_1965531, 6);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									unk_0x979FC7400A5D0CD2(uVar4, "Select_Drone", unk_0xE8BBC6CC2C60F24A(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2787913, 7))
								{
									unk_0xCED9E32812D6C7C7(&Global_2787913, 7);
								}
								unk_0x91DFC8F68F6D9B05(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							}
						}
						if ((((((((((unk_0xF01464D7AF0B7347(2, 225) && !unk_0xF01464D7AF0B7347(2, 235)) && !unk_0xF09A4F413B0D30EB(2, 223)) && !unk_0xF09A4F413B0D30EB(2, 224)) && !unk_0xF09A4F413B0D30EB(2, 222)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !func_22(unk_0x9E2D6C50374FCFA9())) && bVar2)
						{
							if (func_76())
							{
								func_25(uParam0, 1);
								unk_0xCED9E32812D6C7C7(&Global_1965531, 7);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									unk_0x979FC7400A5D0CD2(uVar5, "Select_RC_Car", unk_0xE8BBC6CC2C60F24A(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2787913, 7))
								{
									unk_0xCED9E32812D6C7C7(&Global_2787913, 7);
								}
								unk_0x91DFC8F68F6D9B05(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							}
						}
						if ((((((((((unk_0xF01464D7AF0B7347(2, 224) && !unk_0xF01464D7AF0B7347(2, 235)) && !unk_0xF09A4F413B0D30EB(2, 223)) && !unk_0xF09A4F413B0D30EB(2, 225)) && !unk_0xF09A4F413B0D30EB(2, 222)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !func_22(unk_0x9E2D6C50374FCFA9())) && bVar2)
						{
							if (func_73())
							{
								func_25(uParam0, 1);
								unk_0xCED9E32812D6C7C7(&Global_1965531, 8);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									unk_0x979FC7400A5D0CD2(uVar6, "Select_Trap_Cam", unk_0xE8BBC6CC2C60F24A(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2787913, 7))
								{
									unk_0xCED9E32812D6C7C7(&Global_2787913, 7);
								}
								unk_0x91DFC8F68F6D9B05(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							}
						}
						if ((((((((((unk_0xF01464D7AF0B7347(2, 222) && !unk_0xF01464D7AF0B7347(2, 235)) && !unk_0xF09A4F413B0D30EB(2, 223)) && !unk_0xF09A4F413B0D30EB(2, 225)) && !unk_0xF09A4F413B0D30EB(2, 224)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !func_22(unk_0x9E2D6C50374FCFA9())) && bVar2)
						{
							if (func_72())
							{
								func_25(uParam0, 1);
								if (func_34(&(uParam0->f_281), 15))
								{
									func_33();
									unk_0xB0550BC91B0159D6(&Global_2787913, 8);
									func_32(&(uParam0->f_281), 15);
								}
								func_120(&(uParam0->f_281), 13);
							}
							else
							{
								if (!BitTest(Global_2787913, 7))
								{
									unk_0xCED9E32812D6C7C7(&Global_2787913, 7);
								}
								unk_0x91DFC8F68F6D9B05(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							}
						}
					}
					else
					{
						if (((unk_0xF01464D7AF0B7347(2, 235) && !unk_0xF09A4F413B0D30EB(2, 224)) && !Global_2789737) && !Global_2789734)
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								unk_0x979FC7400A5D0CD2(uVar7, "Exit_Menu", unk_0xE8BBC6CC2C60F24A(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
							}
							func_100(uParam0);
						}
						if ((((unk_0xF01464D7AF0B7347(2, 223) && !unk_0xF01464D7AF0B7347(2, 235)) && !unk_0xF09A4F413B0D30EB(2, 224)) && bVar2) && !Global_262145.f_26631)
						{
							if (unk_0x616226219F841621(Global_262145.f_26633, 0, 0, 1, -1, 0) || BitTest(Global_2787913, 3))
							{
								func_25(uParam0, 1);
								Global_2789737 = 1;
								Global_2789734 = 1;
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									unk_0x979FC7400A5D0CD2(uVar8, "Select_Live_Stream", unk_0xE8BBC6CC2C60F24A(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
								}
								func_70(73, -1);
								func_68();
								func_63();
							}
							else if (!BitTest(Global_2787913, 5))
							{
								unk_0xCED9E32812D6C7C7(&Global_2787913, 5);
							}
						}
					}
				}
			}
		}
	}
	func_32(&(uParam0->f_281), 9);
}

void func_63()
{
	func_64(1, 7986);
}

void func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_67(iParam1, -1, 0);
	func_65(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_65(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_66(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

int func_66(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
		if (iVar1 > -1)
		{
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
		}
	}
	return iVar0;
}

int func_67(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2826809[iParam0 /*3*/][func_66(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_68()
{
	int iVar0;
	
	iVar0 = func_69(73, -1);
	if (iVar0 >= 50)
	{
		unk_0xCED9E32812D6C7C7(&(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_353.f_3), 13);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_353.f_3), 13);
	}
}

int func_69(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2868734[iParam0 /*3*/][func_66(iParam1)];
	if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_70(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_69(iParam0, func_66(iParam1));
	iVar0++;
	func_71(iParam0, iVar0, iParam1);
}

void func_71(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	
	uVar0 = Global_2868734[iParam0 /*3*/][func_66(uParam2)];
	unk_0x076A5661EF5ABEE4(uVar0, iParam1, 1);
}

int func_72()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 26))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_32, 4) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_73()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!func_74())
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 25))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_32, 1) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_74()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_63310 - 1))
	{
		if (!func_75(Global_4980736.f_63312[iVar0 /*183*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_75(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_76()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 24))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_30, 14) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_77()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 23))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_30, 13) && !bVar0)
	{
		return 1;
	}
	return 0;
}

void func_78(char* sParam0, var uParam1, var uParam2)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x2AE954BA77A66307(uParam1);
	unk_0x2AE954BA77A66307(uParam2);
	unk_0x89B545A74F93B1DD(0, 0, 1, -1);
}

bool func_79()
{
	return unk_0x320D1840B6DAA1CC() <= Global_23150.f_6269 + 100;
}

int func_80(bool bParam0)
{
	if (unk_0x78711A80544B2439())
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (func_81(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4C1B8C5717647539(0, 25) || unk_0x4C1B8C5717647539(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23011.f_130)
	{
		return 0;
	}
	if (unk_0x4C1B8C5717647539(0, 19) || (!bParam0 && unk_0x0DBA73788F6E3C5F(0, 19)))
	{
		return 1;
	}
	if (unk_0x8FE9914D4872D601())
	{
		if (((unk_0x4C1B8C5717647539(0, 166) || unk_0x4C1B8C5717647539(0, 167)) || unk_0x4C1B8C5717647539(0, 168)) || unk_0x4C1B8C5717647539(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x0DBA73788F6E3C5F(0, 166) || unk_0x0DBA73788F6E3C5F(0, 167)) || unk_0x0DBA73788F6E3C5F(0, 168)) || unk_0x0DBA73788F6E3C5F(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_81(var uParam0)
{
	int iVar0;
	
	if (unk_0x28FF2C2261B6CBA1())
	{
		if (!unk_0xF68107C40359970C(uParam0))
		{
			unk_0xA7E29842FA438ED6(uParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_82()
{
	if (Global_2703735.f_833.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_83(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

void func_84(char* sParam0, var uParam1, int iParam2)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x2AE954BA77A66307(uParam1);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam2);
}

int func_85()
{
	if (Global_2725430 >= 0 && Global_2725430 < 10)
	{
		return 1;
	}
	return 0;
}

bool func_86(var uParam0)
{
	return func_34(&(uParam0->f_281), 9);
}

void func_87(char* sParam0)
{
	unk_0x9E4A185A00C358E1(sParam0);
}

bool func_88(int iParam0)
{
	return func_89(iParam0) != 0;
}

int func_89(int iParam0)
{
	if (iParam0 == unk_0x9E2D6C50374FCFA9() && !func_90())
	{
		return Global_2787940.f_1;
	}
	return Global_2680265.f_1399[iParam0 /*3*/].f_1;
}

int func_90()
{
	if (((Global_2787943 != 0 && Global_2787943 == Global_2787944) && Global_2787932 != 3) && Global_2787932 != 1)
	{
		return 0;
	}
	return 1;
}

int func_91()
{
	if (((((func_29("ARENA_SEAT_GM0") || func_29("ARENA_SEAT_GM1")) || func_29("TAGTM_HELP_2O")) || func_29("TAGTM_HELP_2P")) || func_29("TAGTM_HELP_2Pi")) || func_29("TAGTM_HELP_2G"))
	{
		return 1;
	}
	return 0;
}

int func_92(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		*uParam0 = func_98(1, 0, 0, 1, 1);
	}
	iVar0 = func_97(*uParam0);
	if (iVar0 == 1)
	{
		*uParam0 = 0;
	}
	else if (iVar0 != 0)
	{
		*uParam0 = 0;
		func_93(0, -1, -1);
	}
	return iVar0;
}

int func_93(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 0 && Global_2787937.f_1 != iParam0)
	{
		return 0;
	}
	if (iParam1 != -1 && Global_2787937.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != -1 && Global_2787937 != iParam2)
	{
		return 0;
	}
	if (func_96())
	{
		return 0;
	}
	func_95();
	func_94(3);
	Global_2787937.f_1 = 0;
	Global_2787937.f_2 = -1;
	Global_2787937 = -1;
	Global_2787933 = 0;
	Global_2787935 = 0;
	Global_2787943 = unk_0xE75390F3CA208D5E();
	Global_2787936 = 1;
	return 1;
}

void func_94(int iParam0)
{
	Global_2787932 = iParam0;
}

void func_95()
{
	if (unk_0xB4C854DD86E40FDA(joaat("turret_cam_script")) > 0)
	{
		Global_2787945 = 1;
	}
}

bool func_96()
{
	return (Global_2787932 == 3 || Global_2787932 == 0);
}

int func_97(int iParam0)
{
	if (Global_2787943 == iParam0)
	{
		if (Global_2787932 == 2)
		{
			if (Global_2787943 == Global_2787944)
			{
				return 1;
			}
			else
			{
				return 2;
			}
		}
		else if (Global_2787932 == 0)
		{
			return 2;
		}
	}
	else
	{
		return 2;
	}
	return 0;
}

var func_98(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<3> Var0;
	
	Var0.f_2 = -1;
	Var0.f_1 = iParam0;
	Var0.f_2 = iParam1;
	Var0.f_0 = iParam2;
	func_94(1);
	Global_2787937 = { Var0 };
	Global_2787933 = iParam3;
	Global_2787943 = unk_0xE75390F3CA208D5E();
	Global_2787935 = 0;
	func_99(&Global_2787935, 0, !bParam4);
	Global_2787936 = 1;
	return Global_2787943;
}

void func_99(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0xCED9E32812D6C7C7(uParam0, iParam1);
	}
	else
	{
		unk_0xB0550BC91B0159D6(uParam0, bParam1);
	}
}

void func_100(var uParam0)
{
	char* sVar0;
	
	uParam0->f_281.f_1 = unk_0x497E09037A63D346(func_116(uParam0), func_115(uParam0), 2, 1, 0, 1065353216, 0f, 1f);
	func_119(uParam0, &sVar0);
	unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), uParam0->f_281.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1148846080, 0);
	unk_0x60E9DD146055C13E(uParam0->f_281.f_1);
	func_30(&(uParam0->f_281.f_6));
	unk_0xCED9E32812D6C7C7(&Global_2787913, 6);
	func_32(&(uParam0->f_281), 14);
	func_132(uParam0, 9);
}

int func_101(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_102(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, float fParam12)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_23011.f_6 = 1;
	if (Global_2703735.f_910 && Global_2703735.f_918)
	{
		func_111(0, bParam9);
		return 1;
	}
	if (unk_0x04458B4E5D9E466A() && !bParam9)
	{
		if (Global_2703735.f_910)
		{
			func_111(0, bParam9);
		}
		return 0;
	}
	if ((unk_0x2981C54770E1D19C() && !bParam9) && !unk_0xBC4351060BEFB0D2())
	{
		return 0;
	}
	if (!func_110(0))
	{
		if (func_109(unk_0x9E2D6C50374FCFA9(), 1, 0) && !(func_55() || func_108()))
		{
			if (((bParam9 && func_107(unk_0x9E2D6C50374FCFA9(), 1, 0)) && unk_0x04458B4E5D9E466A()) && Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_230 == 1)
			{
			}
			else if (func_106() == 28)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = (fParam3 + 360f);
	}
	if (fParam3 >= 360f)
	{
		fParam3 = (fParam3 + -360f);
	}
	if (!Global_2703735.f_910 && !bParam11)
	{
		Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) };
		if ((unk_0x48053974ED6F63CE((Var1.f_0 - Param0.f_0)) < 0.2f && unk_0x48053974ED6F63CE((Var1.f_1 - Param0.f_1)) < 0.2f) && unk_0x48053974ED6F63CE((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar4 = (fParam3 - unk_0x82FE2343F8BDFF0B(unk_0xE2D3D51028F0428A()));
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 + -360f);
			}
			if (fVar4 < -180f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (unk_0x48053974ED6F63CE(fVar4) < 1f)
			{
				Global_2703735.f_910 = 0;
				Global_2703735.f_911 = 0;
				if (unk_0xBC4351060BEFB0D2())
				{
					unk_0x093F334B2F3729DB();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2703735.f_912 || !Param0.f_1 == Global_2703735.f_912.f_1) || !Param0.f_2 == Global_2703735.f_912.f_2) || !fParam3 == Global_2703735.f_915)
	{
		if (Global_2703735.f_910 == 1)
		{
			if (unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Global_2703735.f_916) < func_105(0))
			{
				return 0;
			}
			unk_0x093F334B2F3729DB();
			Global_2703735.f_911 = 1;
		}
		else
		{
			Global_2703735.f_911 = 0;
		}
		Global_2703735.f_912 = { Param0 };
		Global_2703735.f_915 = fParam3;
		Global_2703735.f_910 = 0;
	}
	if (bParam4)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
			if (unk_0xE5965CDF24F93A9F(uVar0) && unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("kosatka"))
			{
				bParam4 = false;
			}
		}
	}
	if (!Global_2703735.f_910 && !unk_0xBC4351060BEFB0D2())
	{
		if (bParam4)
		{
			bParam5 = false;
		}
		bParam7 = bParam7;
		if (bParam7)
		{
		}
		if (bParam5)
		{
		}
		if (bParam8)
		{
		}
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			if (!BitTest(Global_100493.f_1393[44], 16))
			{
				func_104(0);
			}
			if (!unk_0x0CC0416F24BE03FF(unk_0xE2D3D51028F0428A(), &(Global_2667225.f_502)))
			{
				Global_2667225.f_502 = 0;
			}
		}
		if (bParam4)
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				iVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
				if (unk_0x817B926B53C0589A(iVar0))
				{
					Global_2703735.f_917 = 0;
				}
			}
		}
		if (Global_2703735.f_917 > -1)
		{
			Global_2703735.f_916 = unk_0x0A89FDFA763DCAED();
			Global_2703735.f_910 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						iVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
						if (unk_0x3A8B0F5B0E3DE13A(iVar0))
						{
							unk_0xC64B6E13A6A7F517(iVar0, Param0, 0, 1, 1, 1);
							unk_0xBBF86885619695CE(iVar0, fParam3);
							if (fParam12 != 0f)
							{
								unk_0x8CE3D365F064F69E(iVar0, fParam12, 0f, fParam3, 2, 1);
							}
						}
						else
						{
							unk_0xE7DD33D0E2A313F4(iVar0);
						}
					}
					else
					{
						unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), Param0, 0, 0, 0, 1);
						unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), fParam3);
					}
				}
				else
				{
					unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), Param0, 0, 0, 0, 1);
					unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), fParam3);
				}
				func_111(bParam6, bParam9);
				return 1;
			}
			else
			{
				unk_0x5639E771F6085BF6();
				unk_0x8A87922C72F578EC(unk_0x9E2D6C50374FCFA9(), Param0, fParam3, bParam4, iParam10, 0);
			}
			Global_2703735.f_916 = unk_0x0A89FDFA763DCAED();
			Global_2703735.f_910 = 1;
		}
	}
	if (Global_2703735.f_910)
	{
		Global_23011.f_6 = 1;
		Global_2703735.f_916 = unk_0x0A89FDFA763DCAED();
		if (Global_2703735.f_917 > -1)
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				iVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
			}
			if (func_103(&(Global_2703735.f_917), Param0, fParam3, iVar0))
			{
				func_111(bParam6, bParam9);
				return 1;
			}
		}
		else
		{
			if (bParam9)
			{
				if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Global_2703735.f_912) < 2f)
				{
					if (unk_0xBC4351060BEFB0D2())
					{
						unk_0x093F334B2F3729DB();
					}
					func_111(bParam6, bParam9);
					return 1;
				}
			}
			if (!unk_0xBC4351060BEFB0D2())
			{
				if (fParam12 != 0f)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						iVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
						unk_0x8CE3D365F064F69E(iVar0, fParam12, 0f, fParam3, 2, 1);
						Global_2703735.f_918 = 1;
						return 0;
					}
				}
				func_111(bParam6, bParam9);
				return 1;
			}
		}
	}
	return 0;
}

int func_103(var uParam0, struct<3> Param1, float fParam4, var uParam5)
{
	if (unk_0xE5965CDF24F93A9F(Global_2703735.f_919) && !unk_0x55B23FE400FCEA6B(Global_2703735.f_919, 0))
	{
		unk_0xE7DD33D0E2A313F4(Global_2703735.f_919);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2703735.f_919 = uParam5;
			unk_0xE7DD33D0E2A313F4(Global_2703735.f_919);
			if (unk_0x3A8B0F5B0E3DE13A(Global_2703735.f_919))
			{
				if (!unk_0x55B23FE400FCEA6B(Global_2703735.f_919, 0))
				{
					unk_0xBBF86885619695CE(Global_2703735.f_919, fParam4);
					unk_0xC64B6E13A6A7F517(Global_2703735.f_919, Param1, 0, 1, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_104(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2667225.f_2691;
	if ((unk_0xF1557162766FCDEB() && Global_2667225.f_2689 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2667225.f_2688)
	{
		if (!unk_0xF5A00C1EB6E872B8())
		{
			Global_2667225.f_2688 = iVar0;
		}
	}
}

int func_105(bool bParam0)
{
	if (unk_0xA829C9A2767AC8EF())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_106()
{
	return Global_1574991;
}

int func_107(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x3583A42587543334(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_108()
{
	return ((BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965531, 12)) && Global_1965530 == 8);
}

int func_109(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2689235[iParam0 /*453*/].f_230 == 99)
	{
		if ((iParam2 && Global_2689235[iParam0 /*453*/].f_233 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2689235[iParam0 /*453*/].f_230 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_110(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_111(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0x080C97B891E2F3AA(0f, 1065353216);
		unk_0x94953C3FF0664F66(0f);
	}
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x3393D1B291D1BD1B(unk_0xE2D3D51028F0428A());
	}
	if (!bParam1)
	{
		unk_0x5639E771F6085BF6();
	}
	if (unk_0xBC4351060BEFB0D2())
	{
		unk_0x093F334B2F3729DB();
	}
	func_7();
	if (!BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_267.f_30, 14) && !func_113())
	{
		func_112();
	}
}

void func_112()
{
	Global_2824571.f_92 = 1;
}

int func_113()
{
	if (!unk_0x44859561F653DD4E() && !func_110(0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_174915[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

int func_114()
{
	return Global_2725430;
}

Vector3 func_115(var uParam0)
{
	return (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3;
}

Vector3 func_116(var uParam0)
{
	return (uParam0[uParam0->f_281.f_2 /*14*/])->f_8;
}

void func_117(var uParam0, char* sParam1, bool bParam2)
{
	switch (uParam0->f_281.f_9)
	{
		case 0:
			switch (uParam0->f_281.f_9.f_2)
			{
				case 0:
					StringCopy(sParam1, "IDLE_A", 16);
					break;
				
				case 1:
					StringCopy(sParam1, "IDLE_B", 16);
					break;
				
				case 2:
					StringCopy(sParam1, "IDLE_C", 16);
					break;
				
				case 3:
					StringCopy(sParam1, "ENTER", 16);
					break;
				
				case 5:
					StringCopy(sParam1, "BASE", 16);
					break;
				
				case 4:
					StringCopy(sParam1, "EXIT", 16);
					break;
				
				case 7:
					StringCopy(sParam1, "A_TO_B", 16);
					break;
				
				case 8:
					StringCopy(sParam1, "B_TO_C", 16);
					break;
				
				case 9:
					StringCopy(sParam1, "C_TO_D", 16);
					break;
				
				case 10:
					StringCopy(sParam1, "D_TO_E", 16);
					break;
				
				case 12:
					StringCopy(sParam1, "B_TO_E", 16);
					break;
				
				case 13:
					StringCopy(sParam1, "C_TO_A", 16);
					break;
				
				case 14:
					StringCopy(sParam1, "D_TO_A", 16);
					break;
				
				case 15:
					StringCopy(sParam1, "E_TO_A", 16);
					break;
				
				default:
					StringCopy(sParam1, "invalid_clip", 16);
					break;
			}
			break;
		
		case 1:
			switch (uParam0->f_281.f_9.f_2)
			{
				case 0:
					StringCopy(sParam1, "IDLE_A", 16);
					break;
				
				case 1:
					StringCopy(sParam1, "IDLE_B", 16);
					break;
				
				case 2:
					StringCopy(sParam1, "IDLE_C", 16);
					break;
				
				case 3:
					StringCopy(sParam1, "ENTER", 16);
					break;
				
				case 5:
					StringCopy(sParam1, "BASE", 16);
					break;
				
				case 4:
					StringCopy(sParam1, "EXIT", 16);
					break;
				
				case 7:
					StringCopy(sParam1, "A_TO_B", 16);
					break;
				
				case 8:
					StringCopy(sParam1, "B_TO_C", 16);
					break;
				
				case 9:
					StringCopy(sParam1, "C_TO_D", 16);
					break;
				
				case 10:
					StringCopy(sParam1, "D_TO_E", 16);
					break;
				
				case 12:
					StringCopy(sParam1, "B_TO_E", 16);
					break;
				
				case 13:
					StringCopy(sParam1, "C_TO_A", 16);
					break;
				
				case 14:
					StringCopy(sParam1, "D_TO_A", 16);
					break;
				
				case 15:
					StringCopy(sParam1, "E_TO_A", 16);
					break;
				
				default:
					StringCopy(sParam1, "invalid_clip", 16);
					break;
			}
			break;
	}
	if (bParam2)
	{
		StringConCat(sParam1, "_TABLET", 16);
	}
}

void func_118()
{
	if (!Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 1;
	}
}

void func_119(var uParam0, char* sParam1)
{
	switch (uParam0->f_281.f_9)
	{
		case 0:
			StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
			break;
		
		case 1:
			StringCopy(sParam1, "ANIM@ARENA@AMB@SEAT_DRONE_TABLET", 64);
			break;
	}
	if (func_44())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (uParam0->f_281.f_9)
	{
		case 0:
			switch (uParam0->f_281.f_9.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@", 64);
					break;
			}
			break;
		
		case 1:
			switch (uParam0->f_281.f_9.f_1)
			{
				case 0:
					StringConCat(sParam1, "@", 64);
					break;
			}
			break;
	}
}

void func_120(var uParam0, bool bParam1)
{
	unk_0xCED9E32812D6C7C7(uParam0, iParam1);
}

void func_121(var uParam0)
{
	uParam0->f_281.f_9 = func_123((*uParam0)[uParam0->f_281.f_2 /*14*/]);
	uParam0->f_281.f_9.f_1 = func_122(uParam0);
	uParam0->f_281.f_9.f_2 = 3;
	uParam0->f_281.f_9.f_3 = 3;
}

int func_122(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_281.f_9 == 0)
	{
		if (func_44())
		{
			iVar0 = unk_0x5853B15F78E1A265(0, 3);
			switch (iVar0)
			{
				case 0:
					return 0;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				default:
			}
		}
		else
		{
			iVar0 = unk_0x5853B15F78E1A265(0, 3);
			switch (iVar0)
			{
				case 0:
					return 0;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				}
			}
		
		default:
	}
	return 0;
}

int func_123(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

void func_124(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xB4C854DD86E40FDA(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x04458B4E5D9E466A())
	{
		if (!*uParam0 == -1)
		{
			func_30(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/] = 1;
			Global_43792[iVar0 /*32*/].f_1 = Global_43993;
			Global_43993++;
			Global_43792[iVar0 /*32*/].f_4 = 0;
			Global_43792[iVar0 /*32*/].f_29 = 0;
			Global_43792[iVar0 /*32*/].f_5 = 0;
			Global_43792[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_43792[iVar0 /*32*/].f_8), sParam2, 16);
			Global_43792[iVar0 /*32*/].f_6 = iParam3;
			Global_43792[iVar0 /*32*/].f_31 = unk_0x69CE66B03B2184EB();
			Global_43792[iVar0 /*32*/].f_7 = 0;
			Global_43792[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xACC32B78196FBC2A(sParam4))
			{
				Global_43792[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_43792[iVar0 /*32*/].f_13), sParam4, 64);
				Global_43792[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_43792[iVar0 /*32*/].f_12 = 0;
				Global_43792[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_43792[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_125(var uParam0)
{
	Stack.Push(!func_34(&(uParam0->f_281), 5));
	Stack.Push(uParam0[uParam0->f_281.f_2 /*14*/]);
	Stack.Push(uParam0->f_281.f_2);
	Call_Loc(uParam0->f_281.f_14);
	return (StackVal || StackVal);
}

int func_126(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5D79167FED95F0B0())
	{
		if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar0)))
		{
			iVar1 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iVar0));
			if (iVar1 != unk_0x9E2D6C50374FCFA9() && func_107(iVar1, 1, 1))
			{
				if (func_130(unk_0x407E03586628E458(iVar1), uParam0[uParam0->f_281.f_2 /*14*/]) || func_127(iVar1) == uParam0->f_281.f_2)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_127(int iParam0)
{
	if (iParam0 != func_23())
	{
		return Global_1853348[iParam0 /*834*/].f_827;
	}
	return -1;
}

bool func_128(var uParam0)
{
	if (((BitTest(Global_1965531, 6) || BitTest(Global_1965531, 7)) || BitTest(Global_1965531, 8)) || BitTest(Global_1965531, 9))
	{
		return 1;
	}
	return uParam0->f_281 & 31 > 0;
}

int func_129(int iParam0, struct<3> Param1)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (func_101(unk_0x82FE2343F8BDFF0B(iParam0), (Param1.f_2 - 180f), 90f))
		{
			return 1;
		}
	}
	return 0;
}

bool func_130(int iParam0, var uParam1)
{
	return unk_0xD132EDDA78FF4A51(uParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, 0, 1, 0);
}

int func_131(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_130(unk_0xE2D3D51028F0428A(), uParam0[uParam0->f_281.f_2 /*14*/]) && func_129(unk_0xE2D3D51028F0428A(), (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3))
		{
			return 1;
		}
		else
		{
			uParam0->f_281.f_2 = (uParam0->f_281.f_2 + 1 % 20);
		}
		iVar0++;
	}
	return 0;
}

void func_132(var uParam0, int iParam1)
{
	uParam0->f_281.f_5 = iParam1;
}

void func_133(var uParam0)
{
	int iVar0;
	
	if (BitTest(Global_1965531, 7))
	{
		func_139(1);
	}
	switch (uParam0->f_281.f_5)
	{
		case 5:
		case 9:
			func_139(1);
		
		case 7:
			unk_0x62EA3913642EDF8E();
			unk_0x1E672EB1F161AEEB(0);
			unk_0x3F5B55C881FE2E15(0);
			unk_0xAC765EF46E85A446(19);
			unk_0xAC765EF46E85A446(2);
			unk_0x6B3EC5908EA03C43();
			if (!func_138())
			{
				func_137();
			}
			if (unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar0, 1) && iVar0 != joaat("weapon_unarmed"))
			{
				unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
			}
			unk_0x7653D561C9574763(0, 37, 1);
			func_135(1);
			func_134();
			break;
	}
}

void func_134()
{
	Global_23011.f_6 = 1;
}

void func_135(bool bParam0)
{
	if (bParam0)
	{
		if (func_136())
		{
			Global_2714762.f_41 = 1;
		}
	}
	else
	{
		Global_2714762.f_41 = 0;
	}
}

bool func_136()
{
	return BitTest(Global_2714762.f_2, 11);
}

void func_137()
{
	unk_0xCED9E32812D6C7C7(&Global_8137, 4);
}

bool func_138()
{
	return BitTest(Global_1958711, 19);
}

void func_139(int iParam0)
{
	if (func_138())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_144(0))
		{
			func_140(iParam0);
		}
		unk_0xCED9E32812D6C7C7(&Global_8137, 2);
	}
}

void func_140(int iParam0)
{
	if (func_138())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_143())
		{
			func_142(1, 1);
		}
		else
		{
			func_142(0, 0);
		}
	}
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		unk_0xCED9E32812D6C7C7(&Global_8137, 16);
	}
	if (unk_0xA3329B7A7520670E())
	{
		unk_0xD681CC2BC1084DB6(0);
	}
	Global_21605 = 5;
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_8136, 30);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_8136, 30);
	}
	if (!func_141())
	{
		Global_20266.f_1 = 3;
	}
}

int func_141()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_142(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_144(0))
		{
			Global_20464 = 1;
			if (bParam1)
			{
				unk_0xC81489026785778A(&Global_20203);
			}
			Global_20194 = { Global_20212[Global_20211 /*3*/] };
			unk_0x31636F0193379566(Global_20194);
		}
	}
	else if (Global_20464 == 1)
	{
		Global_20464 = 0;
		Global_20194 = { Global_20219[Global_20211 /*3*/] };
		if (bParam1)
		{
			unk_0x31636F0193379566(Global_20203);
		}
		else
		{
			unk_0x31636F0193379566(Global_20194);
		}
	}
}

bool func_143()
{
	return BitTest(Global_1958711, 5);
}

int func_144(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20266.f_1 > 3)
		{
			if (BitTest(Global_8136, 14))
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
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_145(var uParam0)
{
	if (uParam0->f_281.f_5 == 7)
	{
	}
	else if (uParam0->f_281.f_5 > 5)
	{
		unk_0xA457F1126998C0BA(unk_0xE2D3D51028F0428A());
		unk_0x54E818A233B540D4(unk_0xE2D3D51028F0428A(), func_146());
		uParam0->f_281.f_8 = unk_0x8142A6539DDC180F();
	}
	else if ((unk_0x8142A6539DDC180F() - uParam0->f_281.f_8) < 5)
	{
		unk_0x54E818A233B540D4(unk_0xE2D3D51028F0428A(), func_146());
	}
}

float func_146()
{
	return 0.13f;
}

void func_147(var uParam0)
{
	func_148(&(uParam0->f_281), 4, func_149());
	func_148(&(uParam0->f_281), 1, unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0));
	func_148(&(uParam0->f_281), 3, unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1));
	func_148(&(uParam0->f_281), 0, func_144(0));
	func_148(&(uParam0->f_281), 2, unk_0x81BBCAF9FE3B469D(unk_0xE2D3D51028F0428A()));
}

void func_148(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	uVar0 = iParam1;
	if (bParam2)
	{
		unk_0xCED9E32812D6C7C7(uParam0, uVar0);
	}
	else
	{
		unk_0xB0550BC91B0159D6(uParam0, bVar0);
	}
}

bool func_149()
{
	return Global_75485;
}

int func_150()
{
	if ((((!func_159() && !func_50()) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 3)) && !func_22(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	if (BitTest(Global_1965531, 11) && unk_0xA829C9A2767AC8EF())
	{
		return 1;
	}
	if (func_151())
	{
		return 1;
	}
	if (unk_0xB4C854DD86E40FDA(unk_0x2E87280918B16506("AM_MP_ARENA_BOX")) <= 0)
	{
		return 1;
	}
	if (!Global_2787907)
	{
		return 1;
	}
	return 0;
}

int func_151()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_158())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_157())
	{
		return 1;
	}
	if (func_156(159))
	{
		if (!func_155())
		{
			return 1;
		}
	}
	if (func_156(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_152() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_152()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_152()
{
	switch (func_154())
	{
		case 0:
			return func_153();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_153()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_154()
{
	return Global_31959;
}

bool func_155()
{
	return Global_2714762.f_698;
}

int func_156(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_157()
{
	return Global_2725403;
}

bool func_158()
{
	return Global_2714762.f_693;
}

int func_159()
{
	if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 2797.988f, -3943.898f, 181.0005f, 2797.949f, -3919.85f, 187.4114f, 30f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_160()
{
	int iVar0;
	
	if (unk_0x7B0A672B0283F03E("arena_box_bench_seats", -1, 1, 0))
	{
		return 0;
	}
	unk_0xD9B114A8D3A8319F(32, 0, -1);
	func_168(0, -1, 0);
	unk_0x21F2B09183F31D02(&Local_393, 25, 0);
	unk_0x7157B1051528D729(&Local_418, 65, 0);
	unk_0x2C07CBAFAC54A645(0);
	func_167();
	func_161();
	if (unk_0x9315DBF7D972F07A() && unk_0x54E30A65F4FA4962())
	{
		if (!Local_393.f_0)
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				Local_393.f_2[iVar0] = -1;
				iVar0++;
			}
			Local_393.f_0 = 1;
		}
	}
	return 1;
}

void func_161()
{
	func_162(0, &Local_93, 0, 2);
	func_162(1, &Local_93, 1, 2);
	func_162(2, &Local_93, 2, 2);
	func_162(3, &Local_93, 3, 2);
	func_162(4, &Local_93, 4, 2);
	func_162(5, &Local_93, 5, 2);
	func_162(6, &Local_93, 6, 2);
	func_162(7, &Local_93, 7, 2);
	func_162(8, &Local_93, 8, 2);
	func_162(9, &Local_93, 9, 2);
	func_162(10, &Local_93, 10, 1);
	func_162(11, &Local_93, 11, 1);
	func_162(12, &Local_93, 12, 1);
	func_162(13, &Local_93, 13, 1);
	func_162(14, &Local_93, 14, 1);
	func_162(15, &Local_93, 15, 1);
	func_162(16, &Local_93, 16, 1);
	func_162(17, &Local_93, 17, 1);
	func_162(18, &Local_93, 18, 1);
	func_162(19, &Local_93, 19, 1);
}

void func_162(int iParam0, var uParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	float fVar3;
	
	func_166(iParam0, &Var0, &fVar3);
	(*uParam1)[iParam2 /*14*/] = iParam3;
	(uParam1[iParam2 /*14*/])->f_8 = { Var0 };
	(uParam1[iParam2 /*14*/])->f_8.f_3 = { 0f, 0f, fVar3 };
	(uParam1[iParam2 /*14*/])->f_1 = { func_164(func_165(), (fVar3 - 180f)) + Var0 };
	(uParam1[iParam2 /*14*/])->f_1.f_3 = { func_164(func_163(), (fVar3 - 180f)) + Var0 };
	(uParam1[iParam2 /*14*/])->f_1.f_6 = 1.25f;
}

Vector3 func_163()
{
	return 0.5f, -0.5f, 2f;
}

Vector3 func_164(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = unk_0x0BADBFA3B172435F(fParam3);
	fVar4 = unk_0xD0FFB162F40A139C(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

Vector3 func_165()
{
	return -0.5f, -0.5f, 0f;
}

void func_166(int iParam0, var uParam1, var uParam2)
{
	if (func_44())
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 2799.885f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 1:
				*uParam1 = { 2798.857f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 2:
				*uParam1 = { 2797.821f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 3:
				*uParam1 = { 2796.794f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 4:
				*uParam1 = { 2795.764f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 5:
				*uParam1 = { 2794.729f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 6:
				*uParam1 = { 2793.706f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 7:
				*uParam1 = { 2792.677f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 8:
				*uParam1 = { 2791.638f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 9:
				*uParam1 = { 2790.611f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 10:
				*uParam1 = { 2799.913f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 11:
				*uParam1 = { 2798.89f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 12:
				*uParam1 = { 2797.817f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 13:
				*uParam1 = { 2796.821f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 14:
				*uParam1 = { 2795.784f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 15:
				*uParam1 = { 2794.75f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 16:
				*uParam1 = { 2793.711f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 17:
				*uParam1 = { 2792.696f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 18:
				*uParam1 = { 2791.635f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 19:
				*uParam1 = { 2790.644f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 2799.864f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 1:
				*uParam1 = { 2798.837f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 2:
				*uParam1 = { 2797.8f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 3:
				*uParam1 = { 2796.774f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 4:
				*uParam1 = { 2795.744f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 5:
				*uParam1 = { 2794.708f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 6:
				*uParam1 = { 2793.685f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 7:
				*uParam1 = { 2792.657f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 8:
				*uParam1 = { 2791.618f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 9:
				*uParam1 = { 2790.59f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 10:
				*uParam1 = { 2799.913f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 11:
				*uParam1 = { 2798.89f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 12:
				*uParam1 = { 2797.817f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 13:
				*uParam1 = { 2796.821f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 14:
				*uParam1 = { 2795.784f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 15:
				*uParam1 = { 2794.75f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 16:
				*uParam1 = { 2793.711f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 17:
				*uParam1 = { 2792.696f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 18:
				*uParam1 = { 2791.635f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 19:
				*uParam1 = { 2790.644f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			}
	}
}

void func_167()
{
}

int func_168(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x0EEB2C2CA48FB650();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
		if (!func_110(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x9315DBF7D972F07A())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_158())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_156(157))
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xDB51AF48ABE62D4D())
			{
				if (!bParam2)
				{
					func_2();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x0EEB2C2CA48FB650();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xDB51AF48ABE62D4D())
	{
		if (!bParam2)
		{
			func_2();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

