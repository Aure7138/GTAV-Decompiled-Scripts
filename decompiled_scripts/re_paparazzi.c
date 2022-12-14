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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	float fLocal_46 = 0f;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	float fLocal_59 = 0f;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	struct<6> Local_75 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
	float fLocal_90 = 0f;
	int iLocal_91 = 0;
	struct<3> Local_92 = { 0, 0, 0 } ;
	float fLocal_95 = 0f;
	int iLocal_96 = 0;
	var uLocal_97 = 15;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 1;
	struct<18> Local_131[4];
	struct<18> Local_204[8];
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	bool bLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	char* sLocal_371 = NULL;
	char[] cLocal_372[8] = 0;
	char* sLocal_373 = NULL;
	char* sLocal_374 = NULL;
	int iLocal_375[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_385 = 0;
	int iLocal_386[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<10> Local_395[16];
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	int iLocal_560[3] = { 0, 0, 0 };
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	float fLocal_569 = 0f;
	float fLocal_570 = 0f;
	int iLocal_571[2] = { 0, 0 };
	float fLocal_574 = 0f;
	struct<3> Local_575 = { 0, 0, 0 } ;
	struct<3> Local_578 = { 0, 0, 0 } ;
	struct<3> Local_581 = { 0, 0, 0 } ;
	struct<3> Local_584 = { 0, 0, 0 } ;
	struct<3> Local_587 = { 0, 0, 0 } ;
	struct<3> Local_590 = { 0, 0, 0 } ;
	struct<3> Local_593 = { 0, 0, 0 } ;
	struct<3> Local_596[4];
	float fLocal_609[4] = { 0f, 0f, 0f, 0f };
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	var uLocal_625 = 0;
	char* sLocal_626[3] = { NULL, NULL, NULL };
	int iLocal_630 = 0;
	char* sLocal_631 = NULL;
	struct<3> Local_632 = { 0, 0, 0 } ;
	struct<3> Local_635 = { 0, 0, 0 } ;
	float fLocal_638 = 0f;
	struct<3> Local_639 = { 0, 0, 0 } ;
	struct<3> Local_642 = { 0, 0, 0 } ;
	float fLocal_645 = 0f;
	struct<3> Local_646 = { 0, 0, 0 } ;
	struct<3> Local_649 = { 0, 0, 0 } ;
	float fLocal_652 = 0f;
	struct<3> Local_653 = { 0, 0, 0 } ;
	struct<3> Local_656 = { 0, 0, 0 } ;
	int iLocal_659 = 0;
	int iLocal_660 = 0;
	float fLocal_661 = 0f;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	int iLocal_664 = 0;
	float fLocal_665 = 0f;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	bool bLocal_668 = 0;
	bool bLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
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
	int iVar0;
	int iVar1;
	char cVar2[24];
	
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = -1f;
	Local_53 = { 226.6825f, 681.0297f, 188.4987f };
	Local_56 = { 231.8002f, 672.5261f, 188.9459f };
	fLocal_59 = 32.0905f;
	StringCopy(&Local_75, "", 24);
	Local_87 = { 259.4603f, 125.8718f, 100.9754f };
	fLocal_90 = 283.0367f;
	Local_92 = { 245.1998f, 76.8231f, 90.7069f };
	fLocal_95 = -18.4743f;
	cLocal_372 = "REPAPAU";
	sLocal_373 = "random@escape_paparazzi@standing@";
	sLocal_374 = "random@escape_paparazzi@incar@";
	iLocal_565 = 4000;
	fLocal_569 = 0f;
	fLocal_570 = 0f;
	fLocal_574 = 0f;
	Local_575 = { 272.6356f, 155.5618f, 103.3306f };
	Local_578 = { 247.5795f, 88.7094f, 92.9859f };
	Local_581 = { 259.0348f, 114.0369f, 98.9984f };
	Local_584 = { 255.4971f, 116.8744f, 99.8162f };
	Local_587 = { 266.8217f, 139.7698f, 103.2269f };
	Local_590 = { 270.0174f, 139.1181f, 103.2195f };
	Local_593 = { 265.4954f, 144.6143f, 103.3326f };
	sLocal_631 = "left_";
	Local_632 = { 261.9341f, 126.2429f, 95.15405f };
	Local_635 = { 270.6759f, 152.4763f, 109.2356f };
	fLocal_638 = 16f;
	Local_639 = { 261.9341f, 126.2429f, 107.6541f };
	Local_642 = { 248.354f, 87.01792f, 92.389f };
	fLocal_645 = 16f;
	Local_646 = { 256.6779f, 126.573f, 99.54784f };
	Local_649 = { 266.4471f, 123.412f, 105.6728f };
	fLocal_652 = 5.75f;
	Local_653 = { 260.242f, 127.423f, 101.65f };
	Local_656 = { 0f, 0f, -20f };
	Local_50 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x55EEDBBFDC6E810F(11))
	{
		func_280();
	}
	func_279(&uLocal_97, 3);
	if (!Global_3)
	{
		if (func_237(Local_50, -1, 0, 0, 0))
		{
			func_234(-1);
		}
		else
		{
			unk_0x675D9C12C73D3DE7();
		}
	}
	uLocal_365 = unk_0x54ECDA2DAB9CFB10(Vector(93.3633f, 82.5239f, 276.3459f) + Vector(10f, 10f, 10f), Vector(93.3633f, 82.5239f, 276.3459f) - Vector(10f, 10f, 10f), 0, 1, 1, 1);
	uLocal_366 = unk_0x54ECDA2DAB9CFB10(Vector(188.5935f, 675.8706f, 227.8598f) + Vector(4f, 4f, 4f), Vector(188.5935f, 675.8706f, 227.8598f) - Vector(4f, 4f, 4f), 0, 1, 1, 1);
	uLocal_367 = unk_0x54ECDA2DAB9CFB10(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1, 1, 1);
	if (Global_3)
	{
		unk_0xF82BC5193AF62796(246.1673f, 92.1704f, 93.8361f, 6f, 1, 0, 0, 0);
	}
	unk_0x8E09E8C52602EBB2(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1);
	unk_0x2112CE9FD54D593A("WORLD_VEHICLE_DRIVE_SOLO", 0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_231(&uLocal_97);
		if (!func_230())
		{
			if (func_229())
			{
				func_280();
			}
		}
		unk_0x385C3C9C52E9D548("RE_EP", 0);
		iVar0 = 0;
		while (iVar0 < Local_131.f_0)
		{
			if (unk_0x7DE17ACDD8BA2642(Local_131[iVar0 /*18*/]) && !unk_0x055111B11E6624FD(Local_131[iVar0 /*18*/], 0))
			{
				Local_131[iVar0 /*18*/].f_8 = { unk_0x30BE8A934C020461(Local_131[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_204.f_0)
		{
			if (unk_0x7DE17ACDD8BA2642(Local_204[iVar0 /*18*/]) && !unk_0x055111B11E6624FD(Local_204[iVar0 /*18*/], 0))
			{
				Local_204[iVar0 /*18*/].f_6 = { unk_0x30BE8A934C020461(Local_204[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			Local_60 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
		}
		if (!unk_0x66599E73DBA5A850(iLocal_86))
		{
			Local_63 = { unk_0x30BE8A934C020461(iLocal_86, 1) };
		}
		if (unk_0x7DE17ACDD8BA2642(iLocal_91) && !unk_0x055111B11E6624FD(iLocal_91, 0))
		{
			Local_66 = { unk_0x30BE8A934C020461(iLocal_91, 1) };
		}
		if (!func_230())
		{
			if (unk_0xCBE2EC2868A6C438())
			{
				switch (iLocal_369)
				{
					case 0:
						if (func_220())
						{
							func_213();
							iLocal_369++;
						}
						else if (func_201())
						{
							func_280();
						}
						break;
					
					case 1:
						if ((func_200() || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0) || !unk_0xFBD273FDBCF0C5BD(iLocal_91, 0))
						{
							if (!Global_3 && !bLocal_70)
							{
								func_199();
								func_280();
							}
						}
						else if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 281.0074f, 192.4805f, 58.08817f, 228.8291f, 50.88667f, 111.6104f, 82.75f, 0, 1, 0))
						{
							func_190(1);
							uLocal_360 = func_189(iLocal_86, 0, 145);
							func_188("MAG_2_ESCAPE_PAP_GET_CAR");
							func_187(0);
						}
						break;
				}
			}
			else
			{
				func_280();
			}
		}
		else
		{
			unk_0x6352F03F31CA0713(unk_0x93E99A2DBCBA9CFA());
			switch (iLocal_47)
			{
				case 0:
					func_184();
					break;
				
				case 1:
					func_181();
					break;
				
				case 2:
					func_159();
					break;
				
				case 3:
					func_147();
					break;
				
				case 4:
					func_112();
					break;
				
				case 10:
					func_280();
					break;
				
				case 5:
					func_111();
					break;
				
				case 6:
					func_108(sLocal_371);
					break;
				
				case 7:
					func_107();
					break;
				
				case 9:
					break;
				
				case 8:
					if (func_106())
					{
						if (unk_0x7DE17ACDD8BA2642(iLocal_86))
						{
							unk_0xE9C250FA35A936C8(&iLocal_86);
						}
						func_82();
					}
					break;
				
				case 11:
					func_78();
					break;
			}
			if (!unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_63, 210f, 210f, 210f, 0, 1, 0))
			{
				func_199();
				func_280();
			}
			if (((iLocal_47 != 5 && iLocal_47 != 6) && iLocal_47 != 10) && iLocal_47 != 7)
			{
				if (!Global_3 && !bLocal_70)
				{
					if (func_75(iLocal_86, 1, 1) || func_74())
					{
						if (iLocal_47 > 0)
						{
							func_187(5);
						}
						else
						{
							func_199();
							func_187(10);
						}
					}
					if (((iLocal_47 != 5 && iLocal_47 != 10) && iLocal_47 != 0) && iLocal_47 != 7)
					{
						if (func_70())
						{
							func_187(6);
						}
					}
				}
			}
		}
		func_31();
		if (iLocal_47 <= 0)
		{
			iVar1 = func_30();
			if (iVar1 != -1 && (iLocal_74 || func_24() != 0))
			{
				if ((!unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 243.6443f, 123.7193f, 97.59898f, 262.4353f, 116.8746f, 107.4762f, 32.25f, 0, 1, 0) && (unk_0xA5E11AF0A2B928C1() - iLocal_564) > 5000) && !unk_0x66599E73DBA5A850(Local_204[iVar1 /*18*/]))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(Local_204[iVar1 /*18*/], 1), Local_60) < (30.5f * 30.5f) && unk_0xB7A628320EFF8E47(Local_63, Local_60) > (22.5f * 22.5f))
					{
						if (func_230())
						{
							if (Local_395[4 /*10*/] != Local_204[iVar1 /*18*/])
							{
								func_23(&Local_395, 4);
								func_22(&Local_395, 4, Local_204[iVar1 /*18*/], "PAPARAZZO", 0, 1);
							}
							else if (!iLocal_663)
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_CALL1", 1, 0, 0, 0))
								{
									iLocal_564 = unk_0xA5E11AF0A2B928C1();
									iLocal_663 = 1;
								}
							}
							else if (func_5(&Local_395, cLocal_372, "REPAP_CHAT", 1, 0, 0, 0))
							{
								iLocal_564 = unk_0xA5E11AF0A2B928C1();
							}
						}
						else
						{
							StringCopy(&cVar2, "REPAP_AZAA_0", 24);
							StringIntConCat(&cVar2, unk_0x15A88CFAAFFC6C4B(1, 13), 24);
							func_3(Local_204[iVar1 /*18*/], &cVar2, "PAPARAZZO", 24);
							iLocal_564 = unk_0xA5E11AF0A2B928C1();
						}
					}
				}
			}
		}
		if (iLocal_47 <= 1)
		{
			func_2();
		}
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
	{
		iVar0 = unk_0xCE93CAA8D9CF6D36(unk_0xC1A5EC5C986B98AD());
		if (unk_0xFBD273FDBCF0C5BD(iVar0, 0))
		{
			iVar1 = unk_0xA66E176E5772E965(iVar0, 0, 0);
			if (!unk_0x66599E73DBA5A850(iVar1))
			{
				if (iVar1 != unk_0xC1A5EC5C986B98AD())
				{
					if (unk_0x1AFE963DA61006ED(iVar1))
					{
						if (!unk_0xAE07A54F518EB175(iVar1, unk_0xC1A5EC5C986B98AD()))
						{
							unk_0xEDB03CCB50D11479(iVar1, unk_0xC1A5EC5C986B98AD(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_2()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0x7DE17ACDD8BA2642(Local_204[iVar0 /*18*/]))
		{
			if (unk_0x2935B4D6CE81318D(Local_204[iVar0 /*18*/]) < Local_204[iVar0 /*18*/].f_17)
			{
				if (unk_0x7559C38E6535AB89(Local_204[iVar0 /*18*/], unk_0xC1A5EC5C986B98AD(), 1))
				{
					iLocal_386[iVar0] = (iLocal_386[iVar0] + (Local_204[iVar0 /*18*/].f_17 - unk_0x2935B4D6CE81318D(Local_204[iVar0 /*18*/])));
					iLocal_82 = (iLocal_82 + (Local_204[iVar0 /*18*/].f_17 - unk_0x2935B4D6CE81318D(Local_204[iVar0 /*18*/])));
					unk_0x5CE354E3C73D2002(Local_204[iVar0 /*18*/]);
					if (iLocal_386[iVar0] > iLocal_385)
					{
						iLocal_385 = iLocal_386[iVar0];
					}
				}
			}
			Local_204[iVar0 /*18*/].f_17 = unk_0x2935B4D6CE81318D(Local_204[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(var uParam0, char[4] cParam1, char* sParam2, int iParam3)
{
	unk_0xB7C28610A558761B(uParam0, cParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)
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

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)
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
					func_20();
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
		if (func_19(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_18();
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
			unk_0x061B1200C95204CB(&Global_8255, false);
			if (bParam2)
			{
				func_16();
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
				if (func_15())
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
			if (func_14())
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
			func_13();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_12();
		func_7();
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
		func_20();
	}
	return 0;
}

void func_7()
{
	if (!func_8())
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

int func_8()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_11())
	{
		return 0;
	}
	if (func_9(unk_0x93E99A2DBCBA9CFA()))
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

bool func_9(int iParam0)
{
	return func_10(iParam0, 20);
}

var func_10(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_11()
{
	return -1;
}

void func_12()
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

void func_13()
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

int func_14()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()
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

void func_16()
{
	if (func_17(14))
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
		Global_20383 = func_24();
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

bool func_17(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_18()
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

bool func_19(int iParam0, int iParam1)
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

void func_20()
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

void func_21(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	StringCopy(&Global_21795, sParam2, 24);
	Global_22714 = iParam5;
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

void func_22(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78558)
	{
		if (!unk_0x66599E73DBA5A850(uParam2))
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

void func_23(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_24()
{
	func_25();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_25()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_28(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_27(unk_0xC1A5EC5C986B98AD());
			if (func_26(iVar0) && (!func_17(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_26(Global_113648.f_2365.f_539.f_4321))
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

bool func_26(int iParam0)
{
	return iParam0 < 3;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_28(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_28(int iParam0)
{
	if (func_26(iParam0))
	{
		return func_29(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_29(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

int func_30()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if ((unk_0x7DE17ACDD8BA2642(Local_204[iVar0 /*18*/]) && !unk_0x66599E73DBA5A850(Local_204[iVar0 /*18*/])) && !unk_0x66599E73DBA5A850(iLocal_86))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_204[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = unk_0xB7A628320EFF8E47(Local_63, Local_204[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_31()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	switch (iLocal_49)
	{
		case 0:
			iLocal_616 = 0;
			unk_0x852EC2A7DE66202D(joaat("a_m_y_genstreet_02"));
			unk_0x852EC2A7DE66202D(joaat("prop_pap_camera_01"));
			unk_0x852EC2A7DE66202D(joaat("cavalcade2"));
			unk_0x852EC2A7DE66202D(joaat("vader"));
			unk_0x28818732C8F0F80E(sLocal_373);
			unk_0x28818732C8F0F80E("random@paparazzi@pap_anims");
			if (((((unk_0x0CBB7C273DED26E7(joaat("a_m_y_genstreet_02")) && unk_0x0CBB7C273DED26E7(joaat("prop_pap_camera_01"))) && unk_0x0CBB7C273DED26E7(joaat("cavalcade2"))) && unk_0x0CBB7C273DED26E7(joaat("vader"))) && unk_0x2BBF749E555360DC(sLocal_373)) && unk_0x2BBF749E555360DC("random@paparazzi@pap_anims"))
			{
				Local_596[0 /*3*/] = { 266.6049f, 157.7677f, 104.2417f };
				Local_596[1 /*3*/] = { 280.2455f, 152.1227f, 103.7096f };
				Local_596[2 /*3*/] = { 223.2588f, 50.6347f, 83.6598f };
				Local_596[3 /*3*/] = { 244.1302f, 37.4709f, 83.4804f };
				fLocal_609[0] = -111.1625f;
				fLocal_609[1] = 68.857f;
				fLocal_609[2] = -108.2056f;
				fLocal_609[3] = 50.8189f;
				iVar0 = 0;
				while (iVar0 < Local_131.f_0)
				{
					func_69(iVar0);
					func_67(func_68(iVar0));
					func_67(func_66(iVar0));
					iVar0++;
				}
				iLocal_614 = 0;
				func_65(func_68(1), 274.9306f, 147.164f, 103.3794f, 2.2109f);
				func_65(func_66(1), 275.6894f, 148.1107f, 103.3723f, 117.9416f);
				func_65(func_66(2), Local_596[1 /*3*/], fLocal_609[1]);
				func_65(func_66(3), Local_596[1 /*3*/], fLocal_609[1]);
				func_64(0, Local_596[0 /*3*/], fLocal_609[0], 1);
				func_64(1, Local_596[1 /*3*/], fLocal_609[1], 0);
				unk_0xC2E3C377D893C17A(func_63(0, 1), 265.408f, 151.2875f, 103.5673f, 1, 0, 0, 1);
				unk_0x692C3FDAD7DB53CC(func_63(0, 1), 217.1033f);
				unk_0xC2E3C377D893C17A(func_63(2, 1), 245.9477f, 72.661f, 89.1067f, 1, 0, 0, 1);
				unk_0x692C3FDAD7DB53CC(func_63(2, 1), 38.6283f);
				unk_0xC2E3C377D893C17A(func_63(3, 1), 244.1872f, 73.3336f, 89.0917f, 1, 0, 0, 1);
				unk_0x692C3FDAD7DB53CC(func_63(3, 1), 272.9875f);
				unk_0x3EE48ADC8C7F5CC4(func_63(0, 1), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x3EE48ADC8C7F5CC4(func_63(1, 0), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x3EE48ADC8C7F5CC4(func_63(1, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x3EE48ADC8C7F5CC4(func_63(2, 1), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x3EE48ADC8C7F5CC4(func_63(3, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				iLocal_49 = 1;
			}
			break;
		
		case 1:
			func_61(func_66(0), 265.408f, 151.2875f, 103.5673f, 217.1033f, "random@paparazzi@pap_anims", "base_pap", 0);
			func_61(func_68(1), 274.9306f, 147.164f, 103.3794f, 2.2109f, "random@paparazzi@pap_anims", "pap_idle_a", "base_pap");
			func_61(func_66(1), 277.1364f, 148.4023f, 103.3493f, 104.6318f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_61(func_66(2), 245.9477f, 72.661f, 89.1067f, 38.6283f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_61(func_66(3), 244.1872f, 73.3336f, 89.0917f, 272.9875f, "random@paparazzi@pap_anims", "pap_idle_a", 0);
			break;
		
		case 2:
			if (unk_0x7DE17ACDD8BA2642(Local_204[2 /*18*/].f_2))
			{
				if (!unk_0x51DF6895C236B231(Local_204[2 /*18*/].f_2))
				{
					unk_0x724FFAED1C56CE2B(Local_204[2 /*18*/].f_2, 1, 0);
				}
			}
			switch (iLocal_616)
			{
				case 0:
					if (!unk_0x66599E73DBA5A850(func_63(1, 0)))
					{
						unk_0x909F139DC199D8E0(func_63(1, 0));
					}
					if (!unk_0x66599E73DBA5A850(func_63(1, 1)))
					{
						unk_0x909F139DC199D8E0(func_63(1, 1));
					}
					if (!unk_0x7DE17ACDD8BA2642(Local_131[2 /*18*/]))
					{
						func_64(2, Local_596[2 /*3*/], fLocal_609[2], 0);
						if (unk_0xFBD273FDBCF0C5BD(Local_131[2 /*18*/], 0))
						{
							func_65(func_68(2), unk_0x30BE8A934C020461(Local_131[2 /*18*/], 1), 0f);
							unk_0x4C18E9202CF6CACA(func_63(2, 0), Local_131[2 /*18*/], -1);
						}
					}
					if (!unk_0x7DE17ACDD8BA2642(Local_131[3 /*18*/]))
					{
						func_64(3, Local_596[3 /*3*/], fLocal_609[3], 0);
					}
					if (!unk_0x66599E73DBA5A850(func_63(2, 1)))
					{
						unk_0x7D9A648CC1936BDA(func_63(2, 1), Local_581, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!unk_0x66599E73DBA5A850(func_63(3, 1)))
					{
						unk_0x7D9A648CC1936BDA(func_63(3, 1), Local_584, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!unk_0x7DE17ACDD8BA2642(func_63(3, 0)))
					{
						func_65(func_68(3), 253.8376f, 85.4544f, 92.8933f, 85.1702f);
					}
					if (Global_3 || bLocal_70)
					{
						if (!unk_0x66599E73DBA5A850(func_63(1, 0)))
						{
							unk_0x7D9A648CC1936BDA(func_63(1, 0), Local_587, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!unk_0x66599E73DBA5A850(func_63(1, 1)))
						{
							unk_0x7D9A648CC1936BDA(func_63(1, 1), Local_590, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!unk_0x66599E73DBA5A850(func_63(0, 1)))
						{
							unk_0x7D9A648CC1936BDA(func_63(0, 1), Local_593, 2f, 20000, 0.25f, 0, 1193033728);
						}
					}
					unk_0x5AE11BC36633DE4E(0);
					iVar1 = 0;
					while (iVar1 < Local_204.f_0)
					{
						if (unk_0x7DE17ACDD8BA2642(Local_204[iVar1 /*18*/]))
						{
							unk_0x322F7FE9728D7C84(Local_204[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < Local_131.f_0)
					{
						if (unk_0x7DE17ACDD8BA2642(Local_131[iVar1 /*18*/]))
						{
							unk_0x322F7FE9728D7C84(Local_131[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iLocal_616++;
					break;
				
				case 1:
					func_55();
					if ((unk_0xFBD273FDBCF0C5BD(Local_131[0 /*18*/], 0) && !unk_0x66599E73DBA5A850(func_63(0, 0))) && !unk_0x66599E73DBA5A850(func_63(0, 1)))
					{
						if (!iLocal_571[1])
						{
							iLocal_571[1] = 1;
							unk_0xC562419B5DA3BB96(func_63(0, 0), Local_131[0 /*18*/], Local_575, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
						}
					}
					if ((unk_0xFBD273FDBCF0C5BD(Local_131[2 /*18*/], 0) && !unk_0x66599E73DBA5A850(func_63(2, 0))) && !unk_0x66599E73DBA5A850(func_63(2, 1)))
					{
						if (!iLocal_571[0])
						{
							unk_0xC562419B5DA3BB96(func_63(2, 0), Local_131[2 /*18*/], Local_578, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
							iLocal_571[0] = 1;
						}
					}
					if (unk_0x7DE17ACDD8BA2642(iLocal_86) && !unk_0x66599E73DBA5A850(iLocal_86))
					{
						func_52(iLocal_86, 6);
						if (Global_3 || bLocal_70)
						{
							if (!unk_0x66599E73DBA5A850(func_63(1, 0)))
							{
								if (unk_0x1C4E4DC1EFE24DF1(func_63(1, 0), Local_587, Global_22, 0, 1, 0))
								{
									func_51(iLocal_86, func_68(1));
								}
							}
							if (!unk_0x66599E73DBA5A850(func_63(1, 1)))
							{
								if (unk_0x1C4E4DC1EFE24DF1(func_63(1, 1), Local_590, Global_22, 0, 1, 0))
								{
									func_51(iLocal_86, func_66(1));
								}
							}
							if (!unk_0x66599E73DBA5A850(func_63(0, 1)))
							{
								if (unk_0x1C4E4DC1EFE24DF1(func_63(0, 1), Local_590, Global_22, 0, 1, 0))
								{
									func_51(iLocal_86, func_66(0));
								}
							}
						}
						else
						{
							func_52(iLocal_86, func_68(1));
							func_52(iLocal_86, func_66(1));
							if (unk_0xC9D9444186B5A374() > 1000)
							{
								func_52(iLocal_86, func_68(1));
							}
						}
					}
					if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(iLocal_91, 1), Local_87) < 9f)
					{
						if (unk_0x1C4E4DC1EFE24DF1(func_63(2, 1), Local_581, Global_22, 0, 1, 0))
						{
							func_51(iLocal_86, func_66(2));
						}
						if (unk_0x1C4E4DC1EFE24DF1(func_63(3, 1), Local_584, Global_22, 0, 1, 0))
						{
							func_51(iLocal_86, func_66(3));
						}
						if (unk_0x1C4E4DC1EFE24DF1(func_63(0, 1), Local_584, Global_22, 0, 1, 0))
						{
							func_51(iLocal_86, func_66(0));
						}
					}
					else
					{
						if (!BitTest(uLocal_619, 3))
						{
							unk_0x909F139DC199D8E0(Local_204[func_66(3) /*18*/]);
							unk_0xECDAB41968FF21A8(&uLocal_619, 3);
						}
						if (!BitTest(uLocal_619, 2))
						{
							unk_0x909F139DC199D8E0(Local_204[func_66(2) /*18*/]);
							unk_0xECDAB41968FF21A8(&uLocal_619, 2);
						}
						if (!BitTest(uLocal_619, 0))
						{
							unk_0x909F139DC199D8E0(Local_204[func_66(0) /*18*/]);
							unk_0xECDAB41968FF21A8(&uLocal_619, false);
						}
						if (Global_3 || bLocal_70)
						{
							func_51(iLocal_86, func_66(3));
						}
						else
						{
							func_52(iLocal_86, func_66(3));
						}
						func_52(iLocal_86, func_66(2));
						func_52(iLocal_86, func_66(0));
					}
					break;
			}
			func_50();
			break;
		
		case 3:
			func_55();
			if (unk_0xFBD273FDBCF0C5BD(iLocal_91, 0))
			{
				if (unk_0xDC58AE028CB223BA(iLocal_91) < 1f)
				{
					fLocal_574 = (fLocal_574 + unk_0x290D4E218346D595());
				}
				else if (fLocal_574 > 0f)
				{
					fLocal_574 = 0f;
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_131.f_0)
			{
				if (unk_0x7DE17ACDD8BA2642(Local_131[iVar0 /*18*/]) && iLocal_47 != 6)
				{
					if ((iVar0 < 2 && ((iVar0 != iLocal_614 || !unk_0x7DE17ACDD8BA2642(Local_131[0 /*18*/])) || !unk_0x7DE17ACDD8BA2642(Local_131[1 /*18*/]))) && (unk_0xA5E11AF0A2B928C1() - iLocal_615) > 500)
					{
						if (unk_0xB7A628320EFF8E47(Local_60, Local_87) > 400f)
						{
							if (unk_0xB7A628320EFF8E47(Local_60, Local_87) < 62500f || (unk_0xA5E11AF0A2B928C1() - iLocal_370) < 30000)
							{
								func_46(Local_131[iVar0 /*18*/], iLocal_91, &(Local_131[iVar0 /*18*/].f_5), &(Local_131[iVar0 /*18*/].f_15), &(Local_131[iVar0 /*18*/].f_11), &(Local_131[iVar0 /*18*/].f_14), &(Local_131[iVar0 /*18*/].f_16), Local_131[iVar0 /*18*/].f_2, 800, 50f);
								iLocal_614 = iVar0;
								iLocal_615 = unk_0xA5E11AF0A2B928C1();
							}
						}
					}
					iVar2 = func_68(iVar0);
					if (!unk_0x66599E73DBA5A850(Local_204[iVar2 /*18*/]))
					{
						iVar3 = func_66(iVar0);
					}
					else
					{
						iVar3 = func_68(iVar0);
					}
					switch (Local_131[iVar0 /*18*/].f_17)
					{
						case 0:
							if (unk_0xFBD273FDBCF0C5BD(Local_131[iVar0 /*18*/], 0))
							{
								if (!unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), Local_131[iVar0 /*18*/], 0))
								{
									if (!unk_0x66599E73DBA5A850(Local_204[iVar2 /*18*/]))
									{
										if (!unk_0xE0D346789C5160EB(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0))
										{
											if (unk_0xF5F493B789EA063E(Local_204[iVar2 /*18*/], joaat("script_task_enter_vehicle")) != 1 && unk_0x9CFCDD9C62B56708(Local_131[iVar0 /*18*/], -1, 0))
											{
												unk_0xD30E9CAE1FEA1C7E(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], -1, -1, 2f, 1, 0);
											}
										}
									}
									if (iVar3 != -1)
									{
										if (!unk_0x66599E73DBA5A850(Local_204[iVar3 /*18*/]))
										{
											if (!unk_0xE0D346789C5160EB(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))
											{
												if (unk_0xF5F493B789EA063E(Local_204[iVar3 /*18*/], joaat("script_task_enter_vehicle")) != 1 && unk_0x9CFCDD9C62B56708(Local_131[iVar0 /*18*/], 0, 0))
												{
													unk_0xD30E9CAE1FEA1C7E(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], -1, 0, 2f, 1, 0);
												}
											}
										}
										if (!unk_0x66599E73DBA5A850(Local_204[iVar2 /*18*/]) && (iVar3 != -1 && !unk_0x66599E73DBA5A850(Local_204[iVar3 /*18*/])))
										{
											if ((unk_0xE0D346789C5160EB(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0) && (iVar3 != -1 && unk_0xE0D346789C5160EB(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))) && unk_0xFBD273FDBCF0C5BD(iLocal_91, 0))
											{
												if (unk_0xF5F493B789EA063E(Local_204[iVar2 /*18*/], joaat("script_task_vehicle_mission")) != 1 && unk_0xF5F493B789EA063E(Local_204[iVar2 /*18*/], joaat("script_task_vehicle_drive_to_coord")) != 1)
												{
													unk_0x7FE5E05BE63F6CB8(Local_204[iVar2 /*18*/], 3, 0);
													unk_0x7FE5E05BE63F6CB8(Local_204[iVar2 /*18*/], 1, 1);
													unk_0x7FE5E05BE63F6CB8(Local_204[iVar2 /*18*/], 2, 0);
													if (iVar0 == 0)
													{
														unk_0x3DFE9C7902334B74(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 1)
													{
														unk_0x3DFE9C7902334B74(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, 50f, 786470, 4f, 10f, 1);
													}
													else if (iVar0 == 2)
													{
														unk_0x3DFE9C7902334B74(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 3)
													{
														unk_0x3DFE9C7902334B74(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, 50f, 786470, 4f, 10f, 1);
													}
												}
												unk_0x7CB147EAB97F70CC(Local_204[iVar2 /*18*/], func_45((3f * unk_0x2E496FE654DA4166(Local_66, Local_131[iVar0 /*18*/].f_8, 1)), 50f, 120f));
											}
										}
									}
									if (fLocal_574 > 3f && unk_0x2A488C176D52CCA5(Local_131[iVar0 /*18*/].f_8, Local_66) < 10f)
									{
										Local_131[iVar0 /*18*/].f_17 = 1;
									}
								}
							}
							else
							{
								if (!unk_0x66599E73DBA5A850(Local_204[iVar2 /*18*/]))
								{
									if (!unk_0xC78375EA6037A7DB(Local_204[iVar2 /*18*/]))
									{
										unk_0x474AA9EF29305EA8(Local_204[iVar2 /*18*/], 2, 0);
										unk_0xC6C9BF71106ABCAC(Local_204[iVar2 /*18*/], unk_0xC1A5EC5C986B98AD(), 300f, 100000, 0, 0);
									}
								}
								if (iVar3 != -1)
								{
									if (!unk_0x66599E73DBA5A850(Local_204[iVar3 /*18*/]))
									{
										if (!unk_0xC78375EA6037A7DB(Local_204[iVar3 /*18*/]))
										{
											unk_0x474AA9EF29305EA8(Local_204[iVar3 /*18*/], 2, 0);
											unk_0xC6C9BF71106ABCAC(Local_204[iVar3 /*18*/], unk_0xC1A5EC5C986B98AD(), 300f, 100000, 0, 0);
										}
									}
								}
							}
							break;
						
						case 1:
							if (unk_0x3C3D6D026CF7F51B(Local_204[iVar2 /*18*/], 0))
							{
								unk_0x6FE9A0C01D25F413(Local_204[iVar2 /*18*/], 1, 256);
							}
							else
							{
								func_52(iLocal_86, iVar2);
							}
							if (iVar3 != -1)
							{
								if (!unk_0x66599E73DBA5A850(Local_204[iVar3 /*18*/]))
								{
									if (unk_0x3C3D6D026CF7F51B(Local_204[iVar3 /*18*/], 0))
									{
										unk_0x6FE9A0C01D25F413(Local_204[iVar3 /*18*/], 0, 256);
									}
									else
									{
										func_52(iLocal_86, iVar3);
									}
								}
							}
							if (unk_0xFBD273FDBCF0C5BD(Local_131[iVar0 /*18*/], 0))
							{
								if (unk_0x2A488C176D52CCA5(Local_131[iVar0 /*18*/].f_8, Local_66) > 15f)
								{
									Local_131[iVar0 /*18*/].f_17 = 0;
								}
							}
							break;
					}
					if ((!unk_0x66599E73DBA5A850(Local_204[iVar2 /*18*/]) && (iVar3 == -1 || !unk_0x66599E73DBA5A850(Local_204[iVar3 /*18*/]))) && unk_0xFBD273FDBCF0C5BD(Local_131[iVar0 /*18*/], 0))
					{
						iVar4 = 1;
						if (!unk_0xDB08595445CDE2FF(Local_204[iVar2 /*18*/]))
						{
							iVar4 = 0;
						}
						if (iVar3 != -1)
						{
							if (!unk_0xDB08595445CDE2FF(Local_204[iVar3 /*18*/]))
							{
								iVar4 = 0;
							}
						}
						if (!unk_0xDB08595445CDE2FF(Local_131[iVar0 /*18*/]))
						{
							iVar4 = 0;
						}
						if ((iVar4 && unk_0x2A488C176D52CCA5(Local_60, Local_131[iVar0 /*18*/].f_8) > 25f) && unk_0x2A488C176D52CCA5(Local_60, Local_204[iVar0 /*18*/].f_6) > 25f)
						{
							if (!unk_0xE0D346789C5160EB(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0))
							{
								unk_0x4C18E9202CF6CACA(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], -1);
							}
							if (iVar3 != -1)
							{
								if (!unk_0xE0D346789C5160EB(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))
								{
									unk_0x4C18E9202CF6CACA(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0);
								}
							}
						}
					}
					if (func_44(iVar0, 1125515264))
					{
						func_43(iVar0);
					}
				}
				func_50();
				func_35();
				iVar0++;
			}
			break;
		
		case 4:
			func_55();
			if (!iLocal_618)
			{
				iVar0 = 0;
				while (iVar0 < Local_131.f_0)
				{
					iVar5 = func_68(iVar0);
					if (!unk_0x66599E73DBA5A850(Local_204[iVar5 /*18*/]))
					{
						iVar6 = func_66(iVar0);
					}
					else
					{
						iVar6 = func_68(iVar0);
					}
					if (unk_0xFBD273FDBCF0C5BD(Local_131[iVar0 /*18*/], 0))
					{
						if (!unk_0x66599E73DBA5A850(Local_204[iVar5 /*18*/]))
						{
							if (!unk_0xE0D346789C5160EB(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], 0))
							{
								if (unk_0xF5F493B789EA063E(Local_204[iVar5 /*18*/], joaat("script_task_enter_vehicle")) != 1)
								{
									unk_0xD30E9CAE1FEA1C7E(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], -1, -1, 2f, 1, 0);
								}
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x66599E73DBA5A850(Local_204[iVar6 /*18*/]))
							{
								if (!unk_0xE0D346789C5160EB(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], 0))
								{
									if (unk_0xF5F493B789EA063E(Local_204[iVar6 /*18*/], joaat("script_task_enter_vehicle")) != 1)
									{
										unk_0xD30E9CAE1FEA1C7E(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], -1, 0, 2f, 1, 0);
									}
								}
							}
							if (!unk_0x66599E73DBA5A850(Local_204[iVar5 /*18*/]) && (iVar6 != -1 && !unk_0x66599E73DBA5A850(Local_204[iVar6 /*18*/])))
							{
								if ((unk_0xE0D346789C5160EB(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], 0) && (iVar6 != -1 && unk_0xE0D346789C5160EB(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], 0))) && unk_0xFBD273FDBCF0C5BD(iLocal_91, 0))
								{
									fVar7 = func_45((70f - (unk_0xBBDA792448DB5A89((unk_0xA5E11AF0A2B928C1() - iLocal_85)) / 50f)), 0f, 70f);
									if (fVar7 <= 1f || (unk_0xA5E11AF0A2B928C1() - iLocal_85) > 4000)
									{
										unk_0x8AE165B4E187130F(Local_204[iVar5 /*18*/], fVar7);
										iVar8 = 0;
										while (iVar8 < Local_131.f_0)
										{
											if ((unk_0xFBD273FDBCF0C5BD(Local_131[iVar8 /*18*/], 0) && !unk_0x66599E73DBA5A850(func_63(iVar8, 0))) && unk_0xE0D346789C5160EB(func_63(iVar8, 0), Local_131[iVar8 /*18*/], 0))
											{
												unk_0x909F139DC199D8E0(func_63(iVar8, 0));
												unk_0x3DFE9C7902334B74(func_63(iVar8, 0), Local_131[iVar8 /*18*/], 0, 5, 10f, 786468, 10f, 10f, 1);
											}
											iVar8++;
										}
										iLocal_618 = 1;
									}
									else if (unk_0xF5F493B789EA063E(Local_204[iVar5 /*18*/], joaat("script_task_vehicle_mission")) != 1 && unk_0xF5F493B789EA063E(Local_204[iVar5 /*18*/], joaat("script_task_vehicle_drive_to_coord")) != 1)
									{
										unk_0x7FE5E05BE63F6CB8(Local_204[iVar5 /*18*/], 3, 0);
										unk_0x7FE5E05BE63F6CB8(Local_204[iVar5 /*18*/], 1, 1);
										unk_0x7FE5E05BE63F6CB8(Local_204[iVar5 /*18*/], 2, 0);
										if (iVar0 == 0)
										{
											unk_0x3DFE9C7902334B74(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 1)
										{
											unk_0x3DFE9C7902334B74(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, fVar7, 786470, 4f, 10f, 1);
										}
										else if (iVar0 == 2)
										{
											unk_0x3DFE9C7902334B74(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 3)
										{
											unk_0x3DFE9C7902334B74(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, fVar7, 786470, 4f, 10f, 1);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!unk_0x66599E73DBA5A850(Local_204[iVar5 /*18*/]))
						{
							if (!unk_0xC78375EA6037A7DB(Local_204[iVar5 /*18*/]))
							{
								unk_0x474AA9EF29305EA8(Local_204[iVar5 /*18*/], 2, 0);
								unk_0xC6C9BF71106ABCAC(Local_204[iVar5 /*18*/], unk_0xC1A5EC5C986B98AD(), 300f, 100000, 0, 0);
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x66599E73DBA5A850(Local_204[iVar6 /*18*/]))
							{
								if (!unk_0xC78375EA6037A7DB(Local_204[iVar6 /*18*/]))
								{
									unk_0x474AA9EF29305EA8(Local_204[iVar6 /*18*/], 2, 0);
									unk_0xC6C9BF71106ABCAC(Local_204[iVar6 /*18*/], unk_0xC1A5EC5C986B98AD(), 300f, 100000, 0, 0);
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				if (func_44(iLocal_617, 10f))
				{
					func_43(iLocal_617);
				}
				iLocal_617++;
				if (iLocal_617 > 3)
				{
					iLocal_617 = 0;
				}
			}
			func_50();
			func_35();
			break;
		
		case 6:
			if (func_44(iLocal_617, 1125515264))
			{
				func_43(iLocal_617);
			}
			iLocal_617++;
			if (iLocal_617 > 3)
			{
				iLocal_617 = 0;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0x7DE17ACDD8BA2642(Local_204[iVar0 /*18*/]) && !unk_0x66599E73DBA5A850(Local_204[iVar0 /*18*/]))
		{
			if (iLocal_49 > 1)
			{
				if (!unk_0x2AC37494BBF1DB16(sLocal_373))
				{
					func_34(iVar0);
					if (unk_0x7DE17ACDD8BA2642(Local_204[iVar0 /*18*/].f_2) && unk_0xDC116D955A63BDBE(Local_204[iVar0 /*18*/].f_2))
					{
						if (!unk_0x3C3D6D026CF7F51B(Local_204[iVar0 /*18*/], 0))
						{
							if (unk_0x51DF6895C236B231(Local_204[iVar0 /*18*/].f_2))
							{
								if (unk_0xBACC143C07E3925E(Local_204[iVar0 /*18*/]))
								{
									unk_0x724FFAED1C56CE2B(Local_204[iVar0 /*18*/].f_2, 0, 0);
								}
							}
							else if (!unk_0xBACC143C07E3925E(Local_204[iVar0 /*18*/]))
							{
								unk_0x724FFAED1C56CE2B(Local_204[iVar0 /*18*/].f_2, 1, 0);
							}
							if (!unk_0xDB08595445CDE2FF(Local_204[iVar0 /*18*/]))
							{
								if (!unk_0x7BB3D8F4F6310EB8(Local_204[iVar0 /*18*/], sLocal_373, func_33(iVar0), 3))
								{
									if (!Local_204[iVar0 /*18*/].f_11)
									{
										if (!unk_0x7BB3D8F4F6310EB8(Local_204[iVar0 /*18*/], sLocal_373, "grip", 3))
										{
											unk_0x3EE48ADC8C7F5CC4(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
											Local_204[iVar0 /*18*/].f_11 = 1;
										}
									}
								}
								else if (Local_204[iVar0 /*18*/].f_11)
								{
									unk_0x3EE48ADC8C7F5CC4(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
									Local_204[iVar0 /*18*/].f_11 = 0;
								}
							}
							if (!Local_204[iVar0 /*18*/].f_10)
							{
								unk_0x558E7F4B2FC3C790(sLocal_373);
								if (unk_0x285A13D6A2DCFD40(sLocal_373))
								{
									unk_0x5BD6BBF8000B3F52(Local_204[iVar0 /*18*/], sLocal_373);
									Local_204[iVar0 /*18*/].f_10 = 1;
								}
							}
						}
						else
						{
							if (Local_204[iVar0 /*18*/].f_11)
							{
								unk_0x3EE48ADC8C7F5CC4(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
								Local_204[iVar0 /*18*/].f_11 = 0;
							}
							if (Local_204[iVar0 /*18*/].f_10)
							{
								unk_0x5FA868BAA9EEFED7(Local_204[iVar0 /*18*/]);
								Local_204[iVar0 /*18*/].f_10 = 0;
							}
						}
						if (unk_0xACD39355028D39EF(Local_204[iVar0 /*18*/]) && func_32(Local_204[iVar0 /*18*/], unk_0x95DC39736F6748E3(Local_204[iVar0 /*18*/], 0)) == -1)
						{
							if (unk_0x51DF6895C236B231(Local_204[iVar0 /*18*/].f_2))
							{
								unk_0x724FFAED1C56CE2B(Local_204[iVar0 /*18*/].f_2, 0, 0);
							}
						}
						else if (!unk_0x51DF6895C236B231(Local_204[iVar0 /*18*/].f_2))
						{
							unk_0x724FFAED1C56CE2B(Local_204[iVar0 /*18*/].f_2, 1, 0);
						}
					}
					else
					{
						if (Local_204[iVar0 /*18*/].f_11)
						{
							unk_0x3EE48ADC8C7F5CC4(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
							Local_204[iVar0 /*18*/].f_11 = 0;
						}
						if (Local_204[iVar0 /*18*/].f_10)
						{
							unk_0x5FA868BAA9EEFED7(Local_204[iVar0 /*18*/]);
							Local_204[iVar0 /*18*/].f_10 = 0;
						}
					}
				}
			}
			if (iLocal_47 != 7)
			{
				if (unk_0xF276A75C8A36B189(Local_204[iVar0 /*18*/]) && unk_0xA6AA485513271FDF(unk_0xC1A5EC5C986B98AD()))
				{
					func_187(7);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_47 != 7)
	{
		iVar0 = 0;
		while (iVar0 < Local_131.f_0)
		{
			if (unk_0x7DE17ACDD8BA2642(Local_131[iVar0 /*18*/]))
			{
				if (unk_0xFBD273FDBCF0C5BD(Local_131[iVar0 /*18*/], 0))
				{
					if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), Local_131[iVar0 /*18*/], 0))
					{
						func_187(7);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_32(int iParam0, int iParam1)
{
	if (!unk_0x055111B11E6624FD(iParam0, 0) && !unk_0x055111B11E6624FD(iParam1, 0))
	{
		if (unk_0x44A6C9475C859B45(iParam0, iParam1))
		{
			if (unk_0xA66E176E5772E965(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0xA66E176E5772E965(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xA66E176E5772E965(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0xA66E176E5772E965(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

char* func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 5:
			return "idle_a";
			break;
		
		case 1:
		case 6:
			return "idle_b";
			break;
		
		case 2:
		case 7:
			return "idle_c";
			break;
		
		case 3:
			return "idle_d";
			break;
		
		case 4:
			return "idle_e";
			break;
		
		default:
			break;
	}
	return "";
}

void func_34(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar0 = false;
	while (bVar0 < 15)
	{
		if (BitTest(Local_204[iParam0 /*18*/].f_15, bVar0))
		{
			iVar1 = 5;
			iVar2 = (iVar1 + iLocal_375);
			bVar3 = bVar0;
			if (bVar3 < iVar1)
			{
				if (unk_0x7BB3D8F4F6310EB8(Local_204[iParam0 /*18*/], sLocal_373, func_33(iParam0), 3))
				{
					if (unk_0x92377426879E21FF(Local_204[iParam0 /*18*/], sLocal_373, func_33(iParam0)) > 0.9f)
					{
						unk_0x061B1200C95204CB(&(Local_204[iParam0 /*18*/].f_15), bVar0);
					}
				}
			}
			else if (bVar3 < iVar2)
			{
				if (unk_0x7BB3D8F4F6310EB8(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[(bVar3 - iVar1)], 3))
				{
					if (unk_0x92377426879E21FF(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[(bVar3 - iVar1)]) > 0.9f)
					{
						unk_0x061B1200C95204CB(&(Local_204[iParam0 /*18*/].f_15), bVar0);
					}
				}
			}
			else if (!unk_0x7BB3D8F4F6310EB8(Local_204[iParam0 /*18*/], sLocal_373, "grip", 3))
			{
				unk_0x061B1200C95204CB(&(Local_204[iParam0 /*18*/].f_15), bVar0);
			}
		}
		bVar0++;
	}
}

void func_35()
{
	int iVar0;
	
	if (!unk_0x66599E73DBA5A850(iLocal_86))
	{
		iVar0 = func_66(iLocal_568);
		if (((unk_0x7DE17ACDD8BA2642(Local_131[iLocal_568 /*18*/]) && unk_0xFBD273FDBCF0C5BD(Local_131[iLocal_568 /*18*/], 0)) && unk_0x7DE17ACDD8BA2642(Local_204[iVar0 /*18*/])) && !unk_0x66599E73DBA5A850(Local_204[iVar0 /*18*/]))
		{
			if (unk_0x091E6E360116B927(Local_131[iLocal_568 /*18*/], joaat("cavalcade2")))
			{
				if (unk_0xB7A628320EFF8E47(Local_204[iVar0 /*18*/].f_6, Local_63) < unk_0xE3621CC40F31FE2E(30f, 2f) && unk_0xA66E176E5772E965(Local_131[iLocal_568 /*18*/], 0, 0) == Local_204[iVar0 /*18*/])
				{
					if (!Local_204[iVar0 /*18*/].f_9)
					{
						if (!func_42(iVar0))
						{
							func_36(iVar0);
						}
					}
					else if (!func_42(iVar0) && (unk_0xA5E11AF0A2B928C1() - Local_204[iVar0 /*18*/].f_13) > 1000)
					{
						if (!unk_0x7BB3D8F4F6310EB8(Local_204[iVar0 /*18*/], sLocal_374, "base", 3))
						{
							unk_0x3EE48ADC8C7F5CC4(Local_204[iVar0 /*18*/], sLocal_374, "base", 8f, 1000f, -1, 16, 0, 0, 0, 0);
						}
					}
				}
			}
			else if (!Local_204[iVar0 /*18*/].f_9)
			{
				if (unk_0xB7A628320EFF8E47(Local_204[iVar0 /*18*/].f_6, Local_63) < unk_0xE3621CC40F31FE2E(30f, 2f) && unk_0xA66E176E5772E965(Local_131[iLocal_568 /*18*/], 0, 0) == Local_204[iVar0 /*18*/])
				{
					unk_0x6DCA3862E33D4E13(Local_204[iVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", -1, iLocal_86, 1070134723, 1048576000);
					Local_204[iVar0 /*18*/].f_9 = 1;
					Local_204[iVar0 /*18*/].f_13 = unk_0xA5E11AF0A2B928C1();
				}
			}
			else if (Local_204[iVar0 /*18*/].f_9)
			{
				if ((unk_0xA5E11AF0A2B928C1() - Local_204[iVar0 /*18*/].f_13) > 2000)
				{
					Local_204[iVar0 /*18*/].f_9 = 0;
				}
			}
		}
		iLocal_568++;
		if (iLocal_568 >= Local_131.f_0)
		{
			iLocal_568 = 0;
		}
	}
}

void func_36(int iParam0)
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	
	if (!unk_0x66599E73DBA5A850(Local_204[iParam0 /*18*/]) && !unk_0x66599E73DBA5A850(iLocal_86))
	{
		bVar0 = 15;
		Var1 = { Local_63 - Local_204[iParam0 /*18*/].f_6 };
		Var4 = { unk_0x26A9C8234C71B669(Local_204[iParam0 /*18*/]) };
		fVar7 = func_40(Var4, Var1);
		if (unk_0x2655A8EC638E4FD1(fVar7) < 10f)
		{
			bVar0 = 5;
		}
		else if (fVar7 >= 10f && fVar7 < 60f)
		{
			bVar0 = 7;
		}
		else if (fVar7 >= 60f && fVar7 < 100f)
		{
			bVar0 = 6;
		}
		else if (fVar7 <= -10f && fVar7 > -60f)
		{
			bVar0 = 10;
		}
		else if (fVar7 < -60f && fVar7 > -100f)
		{
			bVar0 = 9;
		}
		if (bVar0 != 15)
		{
			func_37(iParam0, bVar0);
		}
	}
}

void func_37(int iParam0, bool bParam1)
{
	if (bParam1 < 15)
	{
		if (!BitTest(Local_204[iParam0 /*18*/].f_15, bParam1))
		{
			if (func_39(bParam1))
			{
				unk_0x3EE48ADC8C7F5CC4(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[func_38(bParam1)], 4f, -4f, -1, 16, 0, 0, 0, 0);
			}
			else if (bParam1 < 5)
			{
				unk_0x3EE48ADC8C7F5CC4(Local_204[iParam0 /*18*/], sLocal_373, func_33(iParam0), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0x3EE48ADC8C7F5CC4(Local_204[iParam0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
			}
			Local_204[iParam0 /*18*/].f_15 = 0;
			unk_0xECDAB41968FF21A8(&(Local_204[iParam0 /*18*/].f_15), bParam1);
		}
	}
}

int func_38(bool bParam0)
{
	return (bParam0 - 5);
}

bool func_39(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	return (iVar0 >= 5 && iVar0 < (5 + iLocal_375));
}

float func_40(struct<3> Param0, struct<3> Param3)
{
	float fVar0;
	
	Param0 = { func_41(Param0) };
	Param3 = { func_41(Param3) };
	fVar0 = (unk_0x360118B65D6530C6(Param3.f_1, Param3.f_0) - unk_0x360118B65D6530C6(Param0.f_1, Param0.f_0));
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	return fVar0;
}

Vector3 func_41(struct<3> Param0)
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

bool func_42(int iParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if (!unk_0x2AC37494BBF1DB16(sLocal_374))
	{
		bVar1 = 5;
		while (bVar1 <= 13)
		{
			if (!bVar0)
			{
				if (BitTest(Local_204[iParam0 /*18*/].f_15, bVar1))
				{
					bVar0 = true;
				}
			}
			bVar1++;
		}
	}
	return bVar0;
}

void func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(Local_131[iParam0 /*18*/]) && unk_0xDB08595445CDE2FF(Local_131[iParam0 /*18*/]))
	{
		unk_0x2728CF7242F08BD5(&(Local_131[iParam0 /*18*/]));
	}
	if (unk_0xCE4AAA035282336C(Local_131[iParam0 /*18*/].f_1))
	{
		unk_0x45533C09A6C9B409(&(Local_131[iParam0 /*18*/].f_1));
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			iVar1 = func_66(iParam0);
		}
		else
		{
			iVar1 = func_68(iParam0);
		}
		if (unk_0x7DE17ACDD8BA2642(Local_204[iVar1 /*18*/]) && unk_0xDB08595445CDE2FF(Local_204[iVar1 /*18*/]))
		{
			if (unk_0x7DE17ACDD8BA2642(Local_204[iVar1 /*18*/]))
			{
				unk_0xEF078F1FEE785D3E(&(Local_204[iVar1 /*18*/].f_2));
			}
			if (unk_0xCE4AAA035282336C(Local_204[iVar1 /*18*/].f_1))
			{
				unk_0x45533C09A6C9B409(&(Local_204[iVar1 /*18*/].f_1));
			}
			unk_0xE9C250FA35A936C8(&(Local_204[iVar1 /*18*/]));
		}
		iVar0++;
	}
}

int func_44(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0x7DE17ACDD8BA2642(Local_131[iParam0 /*18*/]))
	{
		if (unk_0xFBD273FDBCF0C5BD(Local_131[iParam0 /*18*/], 0))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_131[iParam0 /*18*/].f_8) < (fParam1 * fParam1) || !unk_0xDB08595445CDE2FF(Local_131[iParam0 /*18*/]))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x7DE17ACDD8BA2642(func_63(iParam0, 0)))
	{
		if (!unk_0x66599E73DBA5A850(func_63(iParam0, 0)))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_204[func_68(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0xDB08595445CDE2FF(func_63(iParam0, 0)))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x7DE17ACDD8BA2642(func_63(iParam0, 1)))
	{
		if (!unk_0x66599E73DBA5A850(func_63(iParam0, 1)))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_204[func_66(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0xDB08595445CDE2FF(func_63(iParam0, 1)))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

float func_45(float fParam0, float fParam1, float fParam2)
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

void func_46(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)
{
	if (unk_0x7DE17ACDD8BA2642(iParam0) && unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		if (((((unk_0x7DE17ACDD8BA2642(iParam1) && iParam0 != iParam1) && !unk_0x6123E78FD4B274FB(unk_0x504B9BB48D41C264(iParam1))) && !unk_0xAF4434A9F7368F35(unk_0x504B9BB48D41C264(iParam1))) && !unk_0x2D92D1084D213DC4(unk_0x504B9BB48D41C264(iParam1))) && !unk_0xF71BABB2940158F7(unk_0x504B9BB48D41C264(iParam1)))
		{
			if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(iParam1, 1), *uParam4, 1) > 20f)
			{
				if (func_49(iParam0, iParam1, iLocal_358, unk_0x30BE8A934C020461(iParam1, 1), unk_0x000D018EA42688BA(iParam1, 2)))
				{
					*uParam2 = { *uParam4 };
					*uParam3 = *uParam5;
					*uParam2 = { unk_0xF2A6E8EA57F9D501(*uParam2, *uParam3, Param7) };
					*uParam4 = { unk_0x30BE8A934C020461(iParam1, 1) };
					*uParam5 = unk_0xD850DD08D5434072(iParam1);
				}
			}
			if (!unk_0xDB08595445CDE2FF(iParam0))
			{
				*uParam6 = unk_0xA5E11AF0A2B928C1();
			}
			else if ((unk_0xA5E11AF0A2B928C1() - *uParam6) > iParam10)
			{
				if ((func_48(iParam0, iParam1, 1) > fParam11 && unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(iParam1, 1), *uParam2, 1) > 20f) && unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), *uParam2) > 100f)
				{
					if (!func_47(*uParam2))
					{
						if (!unk_0x67670574D396B9A8(*uParam2, 6f))
						{
							unk_0x6FCA8E220FB1053D(*uParam2, 6f, 0);
							unk_0x10DFA2EC4C030EB3(*uParam2, 6f, 0, 0, 0, 0, 0, 0, 0);
							unk_0xC2E3C377D893C17A(iParam0, *uParam2, 1, 0, 0, 1);
							unk_0x692C3FDAD7DB53CC(iParam0, *uParam3);
							unk_0xCB8DD5B44DBC2DEB(iParam0, 1084227584);
							unk_0xC75D5CC27D850469(iParam0, func_45((unk_0xDC58AE028CB223BA(iParam1) + 10f), 10f, 60f));
							unk_0xC8EE2E23B410B65A(iParam0, 1, 1, 0);
							*uParam6 = unk_0xA5E11AF0A2B928C1();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0xA5E11AF0A2B928C1();
		}
	}
}

int func_47(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_48(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 0) };
	}
	if (!unk_0x055111B11E6624FD(iParam1, 0))
	{
		Var3 = { unk_0x30BE8A934C020461(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x30BE8A934C020461(iParam1, 0) };
	}
	return unk_0x2E496FE654DA4166(Var0, Var3, iParam2);
}

int func_49(int iParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param6)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	var uVar16;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	struct<3> Var24;
	int iVar27;
	var uVar28;
	var uVar31;
	var uVar34;
	var uVar35;
	
	if (unk_0x7DE17ACDD8BA2642(iParam2))
	{
		unk_0x1C97A6E4D8DA4B2F(unk_0x504B9BB48D41C264(iParam0), &Var7, &Var10);
		unk_0x1C97A6E4D8DA4B2F(unk_0x504B9BB48D41C264(iParam1), &Var13, &uVar16);
		fVar19 = unk_0x2655A8EC638E4FD1((Var10.f_2 - Var7.f_2));
		fVar20 = unk_0x2655A8EC638E4FD1((Var10.f_0 - Var7.f_0));
		fVar21 = unk_0x2655A8EC638E4FD1((Var10.f_1 - Var7.f_1));
		if (fVar20 > fVar19)
		{
			fVar22 = (fVar20 / 2f);
			fVar23 = (fVar22 - unk_0x2655A8EC638E4FD1(Var7.f_2));
		}
		else
		{
			fVar22 = (fVar21 / 2f);
			fVar23 = (fVar22 - unk_0x2655A8EC638E4FD1(Var7.f_0));
		}
		Var24.f_2 = (Var24.f_2 + (Var13.f_2 - Var7.f_2));
		unk_0xC2E3C377D893C17A(iParam2, Param3, 1, 0, 0, 1);
		unk_0x464B5B0F22497FC5(iParam2, Param6, 2, 1);
		Var1 = { unk_0x7394CB479CCA24AF(iParam2, Vector((fVar23 * 1.25f), ((fVar21 / 2f) - (fVar22 * 0.75f)), 0f) + Var24) };
		Var4 = { unk_0x7394CB479CCA24AF(iParam2, Vector((fVar23 * 1.25f), ((-fVar21 / 2f) + (fVar22 * 0.75f)), 0f) + Var24) };
		uVar35 = unk_0xD8D74C74516FDA20(Var4, Var1, fVar22, 19, unk_0xC1A5EC5C986B98AD(), 4);
		if (unk_0x5A2817B89A8ECCD2(uVar35, &iVar27, &uVar28, &uVar31, &uVar34) != 2)
		{
		}
		if (iVar27 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_50()
{
	bool bVar0;
	
	if ((unk_0xA5E11AF0A2B928C1() - iLocal_567) > 100)
	{
		if ((unk_0xA5E11AF0A2B928C1() - Local_204[iLocal_566 /*18*/].f_12) > 500)
		{
			if (unk_0x7DE17ACDD8BA2642(Local_204[iLocal_566 /*18*/]) && !unk_0x66599E73DBA5A850(Local_204[iLocal_566 /*18*/]))
			{
				bVar0 = true;
				if (!Local_204[iLocal_566 /*18*/].f_9 && unk_0x3C3D6D026CF7F51B(Local_204[iLocal_566 /*18*/], 0))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					if (((unk_0x7BB3D8F4F6310EB8(Local_204[iLocal_566 /*18*/], sLocal_373, func_33(iLocal_566), 3) && unk_0x92377426879E21FF(Local_204[iLocal_566 /*18*/], sLocal_373, func_33(iLocal_566)) > 0.5f) && unk_0x92377426879E21FF(Local_204[iLocal_566 /*18*/], sLocal_373, func_33(iLocal_566)) < 0.75f) || Local_204[iLocal_566 /*18*/].f_9)
					{
						unk_0x5A2F194CFE52F250("scr_rcpap1_camera", Local_204[iLocal_566 /*18*/].f_2, 0.019f, -0.01f, 0.046f, 0f, 0f, -180f, 1065353216, 0, 0, 0);
						if ((iLocal_566 % 3) == 0)
						{
							unk_0x4473578485E594D7(-1, "SHUTTER_FLASH", unk_0x30BE8A934C020461(Local_204[iLocal_566 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else if ((iLocal_566 % 3) == 1)
						{
							unk_0x4473578485E594D7(-1, "SHUTTER", unk_0x30BE8A934C020461(Local_204[iLocal_566 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else
						{
							unk_0x4473578485E594D7(-1, "FLASH", unk_0x30BE8A934C020461(Local_204[iLocal_566 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						Local_204[iLocal_566 /*18*/].f_12 = unk_0xA5E11AF0A2B928C1();
					}
					iLocal_567 = unk_0xA5E11AF0A2B928C1();
				}
			}
			iLocal_566++;
			if (iLocal_566 >= Local_204.f_0)
			{
				iLocal_566 = 0;
			}
		}
	}
}

void func_51(int iParam0, int iParam1)
{
	if (!unk_0x66599E73DBA5A850(Local_204[iParam1 /*18*/]) && !unk_0x66599E73DBA5A850(iParam0))
	{
		if (!unk_0xD495130AEF425591(Local_204[iParam1 /*18*/], iParam0, 20f))
		{
			if (unk_0xF5F493B789EA063E(Local_204[iParam1 /*18*/], joaat("script_task_turn_ped_to_face_entity")) != 1)
			{
				unk_0x06A2A5F6A6959BE7(Local_204[iParam1 /*18*/], iParam0, 0);
			}
		}
		else if ((unk_0xA5E11AF0A2B928C1() - Local_204[iParam1 /*18*/].f_13) > 2000)
		{
			if (!unk_0x7BB3D8F4F6310EB8(Local_204[iParam1 /*18*/], sLocal_373, func_33(iParam1), 3))
			{
				unk_0x3EE48ADC8C7F5CC4(Local_204[iParam1 /*18*/], sLocal_373, func_33(iParam1), 4f, -4f, -1, 0, 0, 0, 0, 0);
				Local_204[iParam1 /*18*/].f_13 = unk_0xA5E11AF0A2B928C1();
			}
		}
	}
}

void func_52(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	if (!unk_0x66599E73DBA5A850(Local_204[iParam1 /*18*/]) && !unk_0x66599E73DBA5A850(iParam0))
	{
		Var0 = { unk_0x7394CB479CCA24AF(iParam0, func_54(iParam1)) };
		switch (Local_204[iParam1 /*18*/].f_16)
		{
			case 0:
				func_53(Var0, iParam1, iParam0);
				Local_204[iParam1 /*18*/].f_16++;
				break;
			
			case 1:
				if (unk_0xF5F493B789EA063E(Local_204[iParam1 /*18*/], joaat("script_task_follow_nav_mesh_to_coord")) != 1 || unk_0x2A488C176D52CCA5(Var0, Local_204[iParam1 /*18*/].f_6) > 5f)
				{
					Local_204[iParam1 /*18*/].f_16++;
				}
				break;
			
			case 2:
				if (unk_0x2A488C176D52CCA5(Var0, Local_204[iParam1 /*18*/].f_6) > 10f)
				{
					func_53(Var0, iParam1, iParam0);
					Local_204[iParam1 /*18*/].f_16++;
				}
				else
				{
					func_51(iParam0, iParam1);
				}
				break;
			
			case 3:
				if (unk_0xB7A628320EFF8E47(Var0, Local_204[iParam1 /*18*/].f_3) > 25f)
				{
					func_53(Var0, iParam1, iParam0);
				}
				if (unk_0xF5F493B789EA063E(Local_204[iParam1 /*18*/], joaat("script_task_follow_nav_mesh_to_coord")) != 1)
				{
					Local_204[iParam1 /*18*/].f_16 = (Local_204[iParam1 /*18*/].f_16 - 1);
				}
				break;
			}
	}
}

void func_53(struct<3> Param0, int iParam3, int iParam4)
{
	struct<3> Var0;
	int iVar3;
	
	Var0 = { func_41(unk_0x30BE8A934C020461(iParam4, 1) - Param0) };
	iVar3 = unk_0x06A2A02CDC68090B(Var0.f_0, Var0.f_1);
	Local_204[iParam3 /*18*/].f_3 = { Param0 };
	unk_0x909F139DC199D8E0(Local_204[iParam3 /*18*/]);
	if (unk_0x2A488C176D52CCA5(Param0, Local_204[iParam3 /*18*/].f_6) < 2f)
	{
		unk_0x7D9A648CC1936BDA(Local_204[iParam3 /*18*/], Local_204[iParam3 /*18*/].f_3, 1f, -1, 0.5f, 512, iVar3);
	}
	else
	{
		unk_0x7D9A648CC1936BDA(Local_204[iParam3 /*18*/], Local_204[iParam3 /*18*/].f_3, 2f, -1, 0.5f, 512, iVar3);
	}
}

Vector3 func_54(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.6578f, 3.328f, 0.2129f;
			break;
		
		case 1:
			return 0.5781f, 3.1584f, 0.2203f;
			break;
		
		case 2:
			return 1.6953f, 2.4036f, 0.1413f;
			break;
		
		case 3:
			return 2.2778f, 1.3153f, 0.1534f;
			break;
		
		case 4:
			return 2.0457f, 0.0073f, 0.2707f;
			break;
		
		case 5:
			return 2.097f, -1.2978f, 0.23f;
			break;
		
		case 6:
			return 2.0693f, -3.2216f, 0.3726f;
			break;
		
		case 7:
			return 1.0275f, -3.6726f, 0.155f;
			break;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_55()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0xCE4AAA035282336C(Local_204[iVar0 /*18*/].f_1))
		{
			if (unk_0x66599E73DBA5A850(Local_204[iVar0 /*18*/]))
			{
				unk_0x45533C09A6C9B409(&(Local_204[iVar0 /*18*/].f_1));
			}
			else if (unk_0x3C3D6D026CF7F51B(Local_204[iVar0 /*18*/], 0))
			{
				unk_0x45533C09A6C9B409(&(Local_204[iVar0 /*18*/].f_1));
			}
		}
		else if (!unk_0x66599E73DBA5A850(Local_204[iVar0 /*18*/]) && !unk_0x3C3D6D026CF7F51B(Local_204[iVar0 /*18*/], 0))
		{
			Local_204[iVar0 /*18*/].f_1 = func_189(Local_204[iVar0 /*18*/], 1, 145);
			unk_0x4049FDC177C92D4B(Local_204[iVar0 /*18*/].f_1, "EP_PAPBLIP");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_131.f_0)
	{
		if (unk_0xFBD273FDBCF0C5BD(Local_131[iVar0 /*18*/], 0))
		{
			if (unk_0xCE4AAA035282336C(Local_131[iVar0 /*18*/].f_1))
			{
				Var1 = { unk_0x8D16B409D1BC42CD(Local_131[iVar0 /*18*/].f_1) };
				Var4 = { Local_131[iVar0 /*18*/].f_8 };
				Var1.f_0 = (Var1.f_0 + ((Var4.f_0 - Var1.f_0) / 10f));
				Var1.f_1 = (Var1.f_1 + ((Var4.f_1 - Var1.f_1) / 10f));
				Var1.f_2 = (Var1.f_2 + ((Var4.f_2 - Var1.f_2) / 10f));
				unk_0x385CFFE850A96C08(Local_131[iVar0 /*18*/].f_1, Var1);
				if (func_58(Local_131[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0, 1))
				{
					unk_0x45533C09A6C9B409(&(Local_131[iVar0 /*18*/].f_1));
				}
			}
			else if (!func_58(Local_131[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0, 1))
			{
				Local_131[iVar0 /*18*/].f_1 = func_56(Local_131[iVar0 /*18*/].f_8, 0);
				unk_0x1886753DA39F38F8(Local_131[iVar0 /*18*/].f_1, 1);
				unk_0x4049FDC177C92D4B(Local_131[iVar0 /*18*/].f_1, "EP_PAPBLIP");
				unk_0xC2E0B90856D55E49(Local_131[iVar0 /*18*/].f_1, 9);
			}
		}
		else if (unk_0xCE4AAA035282336C(Local_131[iVar0 /*18*/].f_1))
		{
			unk_0x45533C09A6C9B409(&(Local_131[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}

var func_56(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x7F0C74F83813841D(Param0);
	unk_0x225EB85DBC38E707(uVar0, func_57(unk_0xA26A9A07F761D8F8(), 1f, 1f));
	unk_0xBD91E7D4B770F97E(uVar0, iParam3);
	return uVar0;
}

float func_57(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_58(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x2E240694D642679A(uParam0) + 1;
	if (iParam4 || !unk_0x055111B11E6624FD(uParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_60(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x7DE17ACDD8BA2642(iVar2))
			{
				if (iParam3 && iVar2 == unk_0xC1A5EC5C986B98AD())
				{
				}
				else if (bParam2)
				{
					if (unk_0x60A06DE259634304(iVar2))
					{
						iVar3 = unk_0xB850F932D03EF34D(iVar2);
						if (((!unk_0x66599E73DBA5A850(iVar2) && iVar3 != func_11()) && func_59(iVar3, 1, 1)) || iParam8)
						{
							if (unk_0x83C5A442AAD15BAF(unk_0xB850F932D03EF34D(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0x66599E73DBA5A850(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_59(int iParam0, bool bParam1, bool bParam2)
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

int func_60(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x9CFCDD9C62B56708(uParam0, iParam1, iParam3))
	{
		iVar0 = unk_0xA66E176E5772E965(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x7DE17ACDD8BA2642(iVar0) && !unk_0x055111B11E6624FD(iParam0, 0))
		{
			iVar0 = unk_0x5E774735770A30F3(iParam0, iParam1);
			if (!unk_0x055111B11E6624FD(iVar0, 0))
			{
				if (unk_0xF5F493B789EA063E(iVar0, joaat("script_task_leave_vehicle")) == 1 || unk_0xF5F493B789EA063E(iVar0, joaat("script_task_leave_any_vehicle")) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(iParam0, 0), unk_0x30BE8A934C020461(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_61(int iParam0, struct<3> Param1, float fParam4, char* sParam5, char* sParam6, char* sParam7)
{
	if (!unk_0x66599E73DBA5A850(Local_204[iParam0 /*18*/]))
	{
		if (unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(Local_204[iParam0 /*18*/], 1), Param1) > 1.5f)
		{
			if (unk_0xF5F493B789EA063E(Local_204[iParam0 /*18*/], joaat("script_task_follow_nav_mesh_to_coord")) != 1)
			{
				unk_0x7D9A648CC1936BDA(Local_204[iParam0 /*18*/], Param1, 2f, -1, 0.25f, 0, fParam4);
			}
		}
		else if (unk_0x2655A8EC638E4FD1((func_62(unk_0xD850DD08D5434072(Local_204[iParam0 /*18*/])) - func_62(fParam4))) > 10f)
		{
			if (unk_0xF5F493B789EA063E(Local_204[iParam0 /*18*/], joaat("script_task_achieve_heading")) != 1)
			{
				unk_0x2CD3E39D98CC3FA9(Local_204[iParam0 /*18*/], fParam4, 0);
			}
		}
		else
		{
			switch (Local_204[iParam0 /*18*/].f_16)
			{
				case 0:
					if (unk_0x2AC37494BBF1DB16(sParam7))
					{
						if (!unk_0x7BB3D8F4F6310EB8(Local_204[iParam0 /*18*/], sParam5, sParam6, 3))
						{
							unk_0x3EE48ADC8C7F5CC4(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 1, 0, 0, 0, 0);
						}
					}
					else if (!unk_0x7BB3D8F4F6310EB8(Local_204[iParam0 /*18*/], sParam5, sParam6, 3))
					{
						unk_0x3EE48ADC8C7F5CC4(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x92377426879E21FF(Local_204[iParam0 /*18*/], sParam5, sParam6) > 0.99f)
					{
						unk_0x3EE48ADC8C7F5CC4(Local_204[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_204[iParam0 /*18*/].f_16++;
					}
					break;
				
				case 1:
					if (!unk_0x7BB3D8F4F6310EB8(Local_204[iParam0 /*18*/], sParam5, sParam7, 3))
					{
						unk_0x3EE48ADC8C7F5CC4(Local_204[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x92377426879E21FF(Local_204[iParam0 /*18*/], sParam5, sParam7) > 0.99f)
					{
						unk_0x3EE48ADC8C7F5CC4(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_204[iParam0 /*18*/].f_16 = 0;
					}
					break;
				}
			}
	}
}

float func_62(float fParam0)
{
	if (fParam0 >= 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	if (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

var func_63(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Local_204[func_68(iParam0) /*18*/];
	}
	return Local_204[func_66(iParam0) /*18*/];
}

void func_64(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	if ((iParam0 % 2) == 1)
	{
		Local_131[iParam0 /*18*/] = unk_0xABEEDBEF2BBDF5B3(joaat("vader"), Param1, fParam4, 1, 1, 0);
	}
	else
	{
		Local_131[iParam0 /*18*/] = unk_0xABEEDBEF2BBDF5B3(joaat("cavalcade2"), Param1, fParam4, 1, 1, 0);
		unk_0x7A1950259E8A78CC(Local_131[iParam0 /*18*/], 0);
	}
	unk_0xCB8DD5B44DBC2DEB(Local_131[iParam0 /*18*/], 1084227584);
	unk_0xCCF0ADCE322CD93F(Local_131[iParam0 /*18*/], 1);
	if (bParam5)
	{
		if (!unk_0x7DE17ACDD8BA2642(func_63(iParam0, 0)))
		{
			func_65(func_68(iParam0), Param1, fParam4);
		}
		if (!unk_0x7DE17ACDD8BA2642(func_63(iParam0, 1)))
		{
			func_65(func_66(iParam0), Param1, fParam4);
		}
		if (!unk_0x66599E73DBA5A850(func_63(iParam0, 0)) && unk_0xFBD273FDBCF0C5BD(Local_131[iParam0 /*18*/], 0))
		{
			unk_0x4C18E9202CF6CACA(func_63(iParam0, 0), Local_131[iParam0 /*18*/], -1);
		}
		if (!unk_0x66599E73DBA5A850(func_63(iParam0, 1)) && unk_0xFBD273FDBCF0C5BD(Local_131[iParam0 /*18*/], 0))
		{
			unk_0x4C18E9202CF6CACA(func_63(iParam0, 1), Local_131[iParam0 /*18*/], 0);
		}
		unk_0xC8EE2E23B410B65A(Local_131[iParam0 /*18*/], 1, 1, 0);
	}
}

void func_65(int iParam0, struct<3> Param1, float fParam4)
{
	Local_204[iParam0 /*18*/] = unk_0x69FDD9508259E5B5(26, joaat("a_m_y_genstreet_02"), Param1, fParam4, 1, 1);
	unk_0x7FE5E05BE63F6CB8(Local_204[iParam0 /*18*/], 1, 0);
	unk_0xC5B2830898581862(Local_204[iParam0 /*18*/], 1);
	unk_0x7FE5E05BE63F6CB8(Local_204[iParam0 /*18*/], 0, 1);
	unk_0x0ED11C03A622AA2B(Local_204[iParam0 /*18*/], 3);
	unk_0x52B0DD24AA97ABDB(Local_204[iParam0 /*18*/], 1);
	unk_0x7FE5E05BE63F6CB8(Local_204[iParam0 /*18*/], 17, 1);
	unk_0x474AA9EF29305EA8(Local_204[iParam0 /*18*/], 2, 0);
	unk_0xAD02BD8A749B79F9(Local_204[iParam0 /*18*/], 0);
	unk_0x71A535529C1CA5DF(Local_204[iParam0 /*18*/], 1);
	unk_0x5DDC305DCF8431AC(Local_204[iParam0 /*18*/], 100);
	unk_0x8980E75D09DCDE5F(Local_204[iParam0 /*18*/], joaat("FIRING_PATTERN_FULL_AUTO"));
	unk_0x598D91BBD045C1F3(Local_204[iParam0 /*18*/], 101, 1);
	unk_0x598D91BBD045C1F3(Local_204[iParam0 /*18*/], 185, 0);
	unk_0xED2BD879E739E86B(Local_204[iParam0 /*18*/], 300, 0);
	unk_0xFECAE061D8C80757(Local_204[iParam0 /*18*/], 3, (iParam0 % 2), unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 2f)), 0);
	if (Global_3 || bLocal_70)
	{
		unk_0x226C3A30511D5DC4(Local_204[iParam0 /*18*/], 1);
		unk_0xED2BD879E739E86B(Local_204[iParam0 /*18*/], 500, 0);
	}
	unk_0xCBFBAAA14CB00CB2(Local_204[iParam0 /*18*/], 1);
	unk_0x7FE5E05BE63F6CB8(Local_204[iParam0 /*18*/], 2, 1);
	unk_0xC99325818121C4B9(Local_204[iParam0 /*18*/], 2f);
	unk_0xAD02BD8A749B79F9(Local_204[iParam0 /*18*/], 0);
	unk_0x45583CDA541E788E(Local_204[iParam0 /*18*/], 0);
	Local_204[iParam0 /*18*/].f_2 = unk_0xF19D6C0E8B56BE23(joaat("prop_pap_camera_01"), unk_0x985D9D5ED4D5145A(Local_204[iParam0 /*18*/], 28422, 0f, 0f, 0f), 1, 1, 0);
	unk_0xBD02C9D4D7076ECC(Local_204[iParam0 /*18*/].f_2, Local_204[iParam0 /*18*/], unk_0xCF99BEF1317B66DA(Local_204[iParam0 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
	if (unk_0x7DE17ACDD8BA2642(Local_204[0 /*18*/].f_2))
	{
		unk_0x724FFAED1C56CE2B(Local_204[0 /*18*/].f_2, 0, 0);
	}
	Local_204[iParam0 /*18*/].f_17 = unk_0x2935B4D6CE81318D(Local_204[iParam0 /*18*/]);
}

int func_66(int iParam0)
{
	return iParam0 * 2 + 1;
}

void func_67(int iParam0)
{
	if ((iParam0 % 2) == 1)
	{
		Local_204[iParam0 /*18*/].f_14 = ((iParam0 - 1) / 2);
	}
	else
	{
		Local_204[iParam0 /*18*/].f_14 = (iParam0 / 2);
	}
}

int func_68(int iParam0)
{
	return iParam0 * 2;
}

void func_69(int iParam0)
{
	Local_131[iParam0 /*18*/].f_17 = 0;
}

int func_70()
{
	bool bVar0;
	bool bVar1;
	
	if (!unk_0x66599E73DBA5A850(iLocal_86))
	{
		bVar0 = false;
		if (func_73())
		{
			if (unk_0x7DE17ACDD8BA2642(func_72()))
			{
				if (unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(func_72(), 1), Local_63) < 5f && unk_0xDC58AE028CB223BA(iLocal_91) < 1f)
				{
					bVar0 = true;
				}
			}
		}
		else if (unk_0xFBD273FDBCF0C5BD(iLocal_91, 0))
		{
			if (!unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_91, 0) && unk_0xE0D346789C5160EB(iLocal_86, iLocal_91, 0))
			{
				fLocal_570 = (fLocal_570 + unk_0x290D4E218346D595());
			}
			else if (fLocal_570 > 0f)
			{
				fLocal_570 = 0f;
			}
		}
		if (bVar0)
		{
			fLocal_569 = (fLocal_569 + unk_0x290D4E218346D595());
		}
		else if (fLocal_569 > 0f)
		{
			fLocal_569 = 0f;
		}
		if (fLocal_569 > 30f)
		{
			bVar1 = true;
		}
		if (iLocal_71)
		{
			if (!unk_0x44A6C9475C859B45(iLocal_86, iLocal_91))
			{
				if (unk_0x48A4D45B3B4CEFFD(iLocal_86))
				{
					bVar1 = true;
				}
				iLocal_71 = 0;
			}
		}
		if (!iLocal_71)
		{
			if (unk_0x44A6C9475C859B45(iLocal_86, iLocal_91))
			{
				iLocal_71 = 1;
			}
		}
		if (fLocal_570 > 30f)
		{
			bVar1 = true;
		}
		if (!unk_0xFBD273FDBCF0C5BD(iLocal_91, 0) && (!bLocal_368 || iLocal_47 == 1))
		{
			bVar1 = true;
		}
		if (unk_0x2A488C176D52CCA5(Local_63, Local_60) > 30f)
		{
			bVar1 = true;
		}
		if (((unk_0xFBD273FDBCF0C5BD(iLocal_91, 0) && func_71(iLocal_91)) && (!bLocal_368 || iLocal_47 == 1)) && unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(iLocal_86, 1), Local_56) > 15f)
		{
			bVar1 = true;
		}
		if (unk_0xFBD273FDBCF0C5BD(iLocal_91, 0) && unk_0x1589BC95A4C50F21(iLocal_91))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (unk_0x15A88CFAAFFC6C4B(0, 2) == 1)
			{
				sLocal_371 = "REPAP_GUP";
			}
			else
			{
				sLocal_371 = "REPAP_GUP2";
			}
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0)
{
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
		{
			if (((unk_0x248929CB6622481D(iParam0, 0, 7000) || unk_0x248929CB6622481D(iParam0, 3, 30000)) || unk_0x248929CB6622481D(iParam0, 2, 30000)) || unk_0x248929CB6622481D(iParam0, 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_72()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if ((unk_0x7DE17ACDD8BA2642(Local_204[iVar0 /*18*/]) && !unk_0x66599E73DBA5A850(Local_204[iVar0 /*18*/])) && !unk_0x66599E73DBA5A850(iLocal_86))
		{
			if (unk_0xB7A628320EFF8E47(Local_63, Local_204[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = unk_0xB7A628320EFF8E47(Local_63, Local_204[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		return Local_204[iVar1 /*18*/];
	}
	return 0;
}

int func_73()
{
	if (unk_0xFBD273FDBCF0C5BD(iLocal_91, 0))
	{
		if (!unk_0x66599E73DBA5A850(iLocal_86))
		{
			if (unk_0xE0D346789C5160EB(iLocal_86, iLocal_91, 0) && unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_91, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_74()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (func_75(Local_204[iVar0 /*18*/], 0, 0))
		{
			return 1;
		}
		if (unk_0x7DE17ACDD8BA2642(Local_204[iVar0 /*18*/]))
		{
			if (unk_0x66599E73DBA5A850(Local_204[iVar0 /*18*/]) || unk_0x055111B11E6624FD(Local_204[iVar0 /*18*/], 0))
			{
				if (iLocal_386[iVar0] > 50)
				{
					iLocal_349++;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_75(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	int iVar3;
	
	if (!unk_0x66599E73DBA5A850(iParam0))
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 1) };
		if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 7))
		{
			unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &iVar3, 1);
		}
		if (!bParam2)
		{
			if (unk_0x612907CF3208D1E3(Var0, 5f, 1))
			{
				return 1;
			}
		}
		if (unk_0xB7A628320EFF8E47(Var0, Local_60) < 400f)
		{
			if (!bParam2)
			{
				if ((unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6) && !unk_0x7B783B62D5123CC7(unk_0xC1A5EC5C986B98AD())) && unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
				{
					return 1;
				}
			}
			if ((iVar3 == joaat("weapon_petrolcan") && unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD())) && unk_0xB7A628320EFF8E47(Local_60, Var0) < 9f)
			{
				return 1;
			}
			if (((unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), iParam0) || unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iParam0)) && (func_76(Local_60, iParam0) && unk_0xB7A628320EFF8E47(Local_60, unk_0x30BE8A934C020461(iParam0, 1)) < 100f)) && unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
			{
				return 1;
			}
			if (iLocal_385 > 150)
			{
				return 1;
			}
		}
		if (unk_0x5D9976AAFD4BC43E(unk_0x985D9D5ED4D5145A(iParam0, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
	}
	else if (unk_0x7DE17ACDD8BA2642(iParam0) && iParam1)
	{
		return 1;
	}
	return 0;
}

int func_76(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	Var0 = { unk_0x30BE8A934C020461(iParam3, 1) };
	Var3 = { unk_0x7394CB479CCA24AF(iParam3, 0f, 1f, 0f) - Var0 };
	Var6 = { Param0 - Var0 };
	fVar9 = func_77(Var3, Var6);
	if (fVar9 > 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_77(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

void func_78()
{
	if (iLocal_47 != 11)
	{
		if (unk_0xCE4AAA035282336C(uLocal_362))
		{
			unk_0x45533C09A6C9B409(&uLocal_362);
		}
		if (unk_0xCE4AAA035282336C(uLocal_363))
		{
			unk_0x45533C09A6C9B409(&uLocal_363);
		}
		if (unk_0xCE4AAA035282336C(uLocal_360))
		{
			unk_0x45533C09A6C9B409(&uLocal_360);
		}
		iLocal_48 = iLocal_47;
		iLocal_47 = 11;
	}
	else if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0)
	{
		if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) < 3)
		{
			if (!func_81())
			{
				func_79("REPAP_COP1");
			}
		}
		else
		{
			func_187(5);
		}
	}
	else if (func_5(&Local_395, cLocal_372, "REPAP_COP2", 4, 0, 0, 0))
	{
		iLocal_47 = iLocal_48;
	}
}

void func_79(char* sParam0)
{
	if ((unk_0xA5E11AF0A2B928C1() - iLocal_667) > 5000)
	{
		if (!func_80())
		{
			if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
			{
				iLocal_667 = unk_0xA5E11AF0A2B928C1();
			}
		}
	}
}

int func_80()
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
	{
		return 1;
	}
	return 0;
}

bool func_81()
{
	if (!unk_0x66599E73DBA5A850(iLocal_86) && unk_0xB7A628320EFF8E47(Local_60, Local_63) < 400f)
	{
		if (!iLocal_350 && (unk_0xA5E11AF0A2B928C1() - iLocal_352) > 5000)
		{
			if (iLocal_82 > 10)
			{
				iLocal_350 = 1;
				iLocal_82 = 0;
			}
		}
		if ((!iLocal_355 && !iLocal_350) && (unk_0xA5E11AF0A2B928C1() - iLocal_356) > 4000)
		{
			if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6) && unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
			{
				if (iLocal_357 > 2)
				{
					if (!Global_3 && !bLocal_70)
					{
						func_187(5);
					}
				}
				else
				{
					iLocal_355 = 1;
					iLocal_357++;
				}
			}
		}
		if (((!iLocal_353 && !iLocal_350) && !iLocal_355) && (unk_0xA5E11AF0A2B928C1() - iLocal_354) > 15000)
		{
			if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6) && !unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				iLocal_353 = 1;
			}
		}
		if (iLocal_350)
		{
			if (iLocal_351)
			{
				if (func_5(&Local_395, cLocal_372, "REPAP_HIT", 4, 0, 0, 0))
				{
					iLocal_352 = unk_0xA5E11AF0A2B928C1();
					iLocal_350 = 0;
				}
			}
			else if (func_5(&Local_395, cLocal_372, "REPAP_HUR", 4, 0, 0, 0))
			{
				iLocal_352 = unk_0xA5E11AF0A2B928C1();
				iLocal_350 = 0;
				iLocal_351 = 1;
			}
		}
		if (iLocal_355)
		{
			if (func_5(&Local_395, cLocal_372, "REPAP_SHOOT", 4, 0, 0, 0))
			{
				iLocal_356 = unk_0xA5E11AF0A2B928C1();
				iLocal_355 = 0;
			}
		}
		if (iLocal_353)
		{
			if (func_5(&Local_395, cLocal_372, "REPAP_GUN", 4, 0, 0, 0))
			{
				iLocal_354 = unk_0xA5E11AF0A2B928C1();
				iLocal_353 = 0;
			}
		}
	}
	return ((iLocal_353 || iLocal_355) || iLocal_350);
}

void func_82()
{
	if (!unk_0x66599E73DBA5A850(iLocal_86))
	{
		unk_0x71A535529C1CA5DF(iLocal_86, 1);
		unk_0x0133FF6E23A1DCA4(255, uLocal_69, joaat("player"));
		if (!Global_3 && !bLocal_70)
		{
			unk_0x598D91BBD045C1F3(iLocal_86, 317, 1);
			unk_0xC5B2830898581862(iLocal_86, 0);
		}
	}
	func_86(-1, 0);
	func_83();
	unk_0x82C56613DF341B0D(62);
	func_280();
}

void func_83()
{
	func_84();
}

int func_84()
{
	if (func_85(0))
	{
		return 0;
	}
	if (Global_100720.f_8)
	{
		if (Global_100720.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100720.f_10 > 1)
	{
		return 0;
	}
	Global_100720.f_10++;
	return 1;
}

int func_85(bool bParam0)
{
	if (!bParam0 && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_86(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_104();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_103(iParam0))
	{
		func_102(iParam0, bParam1);
		if (!func_101(51))
		{
			func_97("RE_REWARD", 1, 0, 4000, 10000, func_100(), 0, 138, 0);
			func_96(51);
		}
		if (func_95(iParam0))
		{
			Global_113648.f_24997.f_2 = 3;
		}
		if (func_94(iParam0, bParam1) != 322)
		{
			func_88(func_94(iParam0, bParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113636 = bParam1;
		if (Global_113634 == 0)
		{
			if (((Global_113637 == 1 || Global_113637 == 5) || Global_113637 == 11) || Global_113637 == 25)
			{
				func_87(2);
			}
			else if ((Global_113637 == 26 || Global_113637 == 8) || Global_113637 == 17)
			{
				func_87(7);
			}
			else
			{
				func_87(1);
			}
		}
	}
}

void func_87(int iParam0)
{
	Global_113634 = iParam0;
}

void func_88(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_92((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113648.f_10196[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113648.f_10196[iParam0 /*12*/].f_6 == 11 || Global_113648.f_10196[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113648.f_10196[iParam0 /*12*/].f_5 = 1;
		Global_113648.f_10196[iParam0 /*12*/].f_10 = uParam1;
		Global_113648.f_10196[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xE571C8D0AF67E3B4(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE571C8D0AF67E3B4(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE571C8D0AF67E3B4(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_89();
	}
}

void func_89()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_113384 = 0;
	Global_113385 = 0;
	Global_113386 = 0;
	Global_113387 = 0;
	Global_113388 = 0;
	Global_113389 = 0;
	Global_113390 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113648.f_10196.f_3853;
	Global_113648.f_10196.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113648.f_10196[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113648.f_10196[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113384++;
					fVar1 = (fVar1 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113385++;
					fVar2 = (fVar2 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113386++;
					fVar3 = (fVar3 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113387++;
					fVar4 = (fVar4 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113388++;
					fVar5 = (fVar5 + (Global_113648.f_10196[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113389++;
					fVar6 = (fVar6 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113390++;
					fVar7 = (fVar7 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113367 > 0)
	{
		if (Global_113384 == Global_113367)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113368 > 0)
	{
		if (Global_113385 == Global_113368)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113369 > 0)
	{
		if (Global_113386 == Global_113369)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113370 > 0)
	{
		if (Global_113387 == Global_113370)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113371 > 0)
	{
		if (((Global_113388 == Global_113371 || (Global_113371 * 10 / Global_113388) < 41) || Global_113388 > Global_113374) || Global_113388 == Global_113374)
		{
			if (!BitTest(Global_113648.f_10196.f_3856, 14))
			{
				if (Global_113388 == Global_113371)
				{
					unk_0xE571C8D0AF67E3B4(joaat("num_rndevents_completed"), Global_113371, 0);
					unk_0xECDAB41968FF21A8(&(Global_113648.f_10196.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113372 > 0)
	{
		if (Global_113389 == Global_113372)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113373 > 0)
	{
		if (Global_113390 == Global_113373)
		{
			fVar7 = 5f;
		}
	}
	Global_113648.f_10196.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113388 > Global_113374 || Global_113388 == Global_113374)
	{
		iVar9 = Global_113374;
	}
	else
	{
		iVar9 = Global_113388;
	}
	unk_0x3CC35ACFFC9C730E(joaat("num_missions_completed"), Global_113384, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_missions_available"), Global_113367, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_minigames_completed"), Global_113385, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_minigames_available"), Global_113368, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_oddjobs_completed"), Global_113386, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_oddjobs_available"), Global_113369, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndpeople_completed"), Global_113387, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndpeople_available"), Global_113370, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_rndevents_available"), Global_113374, 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_misc_completed"), (Global_113390 + Global_113389), 1);
	unk_0x3CC35ACFFC9C730E(joaat("num_misc_available"), (Global_113373 + Global_113372), 1);
	Global_113391 = (Global_113384 * 100 / Global_113367);
	Global_113393 = ((Global_113386 + Global_113385) * 100 / (Global_113369 + Global_113368));
	Global_113392 = ((Global_113387 + iVar9) * 100 / (Global_113370 + Global_113374));
	Global_113394 = ((Global_113389 + Global_113390) * 100 / (Global_113372 + Global_113373));
	unk_0x683F4BAF21D6EE25(joaat("total_progress_made"), Global_113648.f_10196.f_3853, 1);
	unk_0x3CC35ACFFC9C730E(joaat("percent_story_missions"), Global_113391, 1);
	unk_0x3CC35ACFFC9C730E(joaat("percent_ambient_missions"), Global_113392, 1);
	unk_0x3CC35ACFFC9C730E(joaat("percent_oddjobs"), Global_113393, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_113648.f_10196.f_3853))
	{
		func_91(13, unk_0xF34EE736CF047844(Global_113648.f_10196.f_3853));
	}
	if (!unk_0xBAB6476CDD8C4AA6())
	{
		if (!Global_78558)
		{
			if (func_90() == 2 == 0 && !unk_0xA26A9A07F761D8F8())
			{
				if (unk_0x3FFDF8D1413D95DE())
				{
					Global_113382 = 0;
				}
				if (!Global_63362)
				{
					func_84();
				}
			}
		}
	}
}

int func_90()
{
	return Global_32163;
}

int func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xED220A261CE0D89C(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x0B3E167D2C1443C7(iParam0, iParam1);
	}
	return 0;
}

void func_92(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_93();
	}
	unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
}

int func_93()
{
	return Global_1574918;
}

int func_94(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (bParam1 == 1)
			{
				return 281;
			}
			if (bParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (bParam1 == 1)
			{
				return 271;
			}
			if (bParam1 == 2)
			{
				return 272;
			}
			if (bParam1 == 3)
			{
				return 273;
			}
			if (bParam1 == 4)
			{
				return 274;
			}
			if (bParam1 == 5)
			{
				return 275;
			}
			if (bParam1 == 6)
			{
				return 276;
			}
			if (bParam1 == 7)
			{
				return 277;
			}
			if (bParam1 == 8)
			{
				return 278;
			}
			if (bParam1 == 9)
			{
				return 279;
			}
			if (bParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (bParam1 == 1)
			{
				return 246;
			}
			if (bParam1 == 2)
			{
				return 247;
			}
			if (bParam1 == 3)
			{
				return 248;
			}
			if (bParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (bParam1 == 1)
			{
				return 260;
			}
			if (bParam1 == 2)
			{
				return 261;
			}
			if (bParam1 == 3)
			{
				return 262;
			}
			if (bParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (bParam1 == 1)
			{
				return 224;
			}
			if (bParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (bParam1 == 1)
			{
				return 244;
			}
			if (bParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				return 221;
			}
			if (bParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return 213;
			}
			if (bParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 267;
			}
			if (bParam1 == 2)
			{
				return 268;
			}
			if (bParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (bParam1 == 1)
			{
				return 227;
			}
			if (bParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 257;
			}
			if (bParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return 229;
			}
			if (bParam1 == 2)
			{
				return 230;
			}
			if (bParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_96(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	iVar1 = 0;
	while (bVar0 > 31)
	{
		bVar0 = (bVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xECDAB41968FF21A8(&(Global_113648.f_20412.f_150[iVar1]), bVar0);
	}
}

void func_97(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_98(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_98(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x4310A0DB886F9FED(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_20412.f_145)
	{
		if (unk_0x4310A0DB886F9FED(&(Global_113648.f_20412[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113648.f_20412.f_145 < 9)
	{
		StringCopy(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8 = (unk_0xA5E11AF0A2B928C1() + iParam3);
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9 = iParam5;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11 = iParam6;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12 = uParam2;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13 = iParam7;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14 = iParam8;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = ((unk_0xA5E11AF0A2B928C1() + iParam3) + iParam4);
		}
		else
		{
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = -1;
		}
		Global_113648.f_20412.f_145++;
		func_99();
	}
}

void func_99()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113648.f_20412.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_20412.f_145)
	{
		if (BitTest(Global_113648.f_20412[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[0])
			{
				Global_113648.f_20412.f_146[0] = Global_113648.f_20412[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113648.f_20412[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[1])
			{
				Global_113648.f_20412.f_146[1] = Global_113648.f_20412[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113648.f_20412[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[2])
			{
				Global_113648.f_20412.f_146[2] = Global_113648.f_20412[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_100()
{
	func_25();
	switch (Global_113648.f_2365.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_101(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_113648.f_20412.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_102(int iParam0, bool bParam1)
{
	unk_0xECDAB41968FF21A8(&(Global_113648.f_24997.f_8[iParam0]), bParam1);
}

int func_103(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_104()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x688846D56810779A(), 64);
	uVar16 = func_105(Var0);
	return uVar16;
}

int func_105(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x14580F20CBCE4FA9(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_106()
{
	if (Global_32403)
	{
		func_87(4);
		return 1;
	}
	return 0;
}

void func_107()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_49 != 5)
	{
		iLocal_49 = 5;
	}
	if (unk_0xCE4AAA035282336C(uLocal_360))
	{
		unk_0x45533C09A6C9B409(&uLocal_360);
	}
	switch (iLocal_369)
	{
		case 0:
			if (!unk_0x66599E73DBA5A850(iLocal_86))
			{
				unk_0xC6C9BF71106ABCAC(iLocal_86, unk_0xC1A5EC5C986B98AD(), 300f, -1, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_204.f_0)
			{
				if (unk_0x7DE17ACDD8BA2642(Local_204[iVar0 /*18*/]))
				{
					if (unk_0xDB08595445CDE2FF(Local_204[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(Local_204[iVar0 /*18*/], 1), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1)) > 900f)
					{
						if (unk_0x7DE17ACDD8BA2642(Local_204[iVar0 /*18*/].f_2))
						{
							unk_0xEF078F1FEE785D3E(&(Local_204[iVar0 /*18*/].f_2));
						}
						unk_0xE9C250FA35A936C8(&(Local_204[iVar0 /*18*/]));
					}
				}
				if (unk_0xCE4AAA035282336C(Local_204[iVar0 /*18*/].f_1))
				{
					unk_0x45533C09A6C9B409(&(Local_204[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_131.f_0)
			{
				if (unk_0x7DE17ACDD8BA2642(Local_131[iVar0 /*18*/]))
				{
					if (unk_0xDB08595445CDE2FF(Local_131[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(Local_131[iVar0 /*18*/], 1), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1)) > 900f)
					{
						unk_0x2728CF7242F08BD5(&(Local_131[iVar0 /*18*/]));
					}
				}
				if (unk_0xCE4AAA035282336C(Local_131[iVar0 /*18*/].f_1))
				{
					unk_0x45533C09A6C9B409(&(Local_131[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			unk_0xC1B1E9A034A63A62(0);
			iLocal_673 = 0;
			iLocal_369++;
			break;
		
		case 1:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_204.f_0)
			{
				if ((unk_0x7DE17ACDD8BA2642(Local_204[iVar0 /*18*/]) && !unk_0x66599E73DBA5A850(Local_204[iVar0 /*18*/])) && !unk_0x055111B11E6624FD(Local_204[iVar0 /*18*/], 0))
				{
					iVar1++;
					func_52(unk_0xC1A5EC5C986B98AD(), iVar0);
					if (unk_0xDB08595445CDE2FF(Local_204[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(Local_204[iVar0 /*18*/], 1), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1)) > 2500f)
					{
						if (unk_0x7DE17ACDD8BA2642(Local_204[iVar0 /*18*/].f_2))
						{
							unk_0xEF078F1FEE785D3E(&(Local_204[iVar0 /*18*/].f_2));
						}
						unk_0xE9C250FA35A936C8(&(Local_204[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!iLocal_673)
			{
				if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(func_72(), 1)) < 100f)
				{
					iVar2 = unk_0x15A88CFAAFFC6C4B(0, 3);
					if (func_24() == 1)
					{
						func_23(&Local_395, 6);
						func_23(&Local_395, 7);
						func_23(&Local_395, 8);
						switch (iVar2)
						{
							case 0:
								func_22(&Local_395, 6, func_72(), "PAP1ESCAPE", 0, 1);
								if (unk_0x7DE17ACDD8BA2642(Local_395[6 /*10*/]) && !unk_0x66599E73DBA5A850(Local_395[6 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP1", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_22(&Local_395, 7, func_72(), "PAP2ESCAPE", 0, 1);
								if (unk_0x7DE17ACDD8BA2642(Local_395[7 /*10*/]) && !unk_0x66599E73DBA5A850(Local_395[7 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP2", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_22(&Local_395, 8, func_72(), "PAP3ESCAPE", 0, 1);
								if (unk_0x7DE17ACDD8BA2642(Local_395[8 /*10*/]) && !unk_0x66599E73DBA5A850(Local_395[8 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP3", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
						}
					}
					else if (func_24() == 2)
					{
						func_23(&Local_395, 6);
						func_23(&Local_395, 5);
						iVar2 = unk_0x15A88CFAAFFC6C4B(0, 3);
						switch (iVar2)
						{
							case 0:
								func_22(&Local_395, 6, func_72(), "PAP1ESCAPE", 0, 1);
								if (unk_0x7DE17ACDD8BA2642(Local_395[iVar2 /*10*/]) && !unk_0x66599E73DBA5A850(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE1T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_22(&Local_395, 5, func_72(), "PAP2ESCAPE", 0, 1);
								if (unk_0x7DE17ACDD8BA2642(Local_395[iVar2 /*10*/]) && !unk_0x66599E73DBA5A850(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_22(&Local_395, 5, func_72(), "PAP2ESCAPE", 0, 1);
								if (unk_0x7DE17ACDD8BA2642(Local_395[iVar2 /*10*/]) && !unk_0x66599E73DBA5A850(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_23(&Local_395, 6);
						func_23(&Local_395, 5);
						iVar2 = unk_0x15A88CFAAFFC6C4B(0, 3);
						switch (iVar2)
						{
							case 0:
								func_22(&Local_395, 6, func_72(), "PAP1ESCAPE", 0, 1);
								if (unk_0x7DE17ACDD8BA2642(Local_395[iVar2 /*10*/]) && !unk_0x66599E73DBA5A850(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE1M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_22(&Local_395, 5, func_72(), "PAP2ESCAPE", 0, 1);
								if (unk_0x7DE17ACDD8BA2642(Local_395[iVar2 /*10*/]) && !unk_0x66599E73DBA5A850(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_22(&Local_395, 5, func_72(), "PAP2ESCAPE", 0, 1);
								if (unk_0x7DE17ACDD8BA2642(Local_395[iVar2 /*10*/]) && !unk_0x66599E73DBA5A850(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							}
						}
					}
			}
			if (func_74())
			{
				func_199();
				func_280();
			}
			if (iVar1 == 0)
			{
				func_280();
			}
			break;
	}
}

void func_108(char* sParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (iLocal_49 != 5)
	{
		iLocal_49 = 5;
	}
	if (!iLocal_672)
	{
		iVar0 = 0;
		while (iVar0 < Local_204.f_0)
		{
			if (unk_0x7DE17ACDD8BA2642(Local_204[iVar0 /*18*/]) && !unk_0x66599E73DBA5A850(Local_204[iVar0 /*18*/]))
			{
				unk_0x909F139DC199D8E0(Local_204[iVar0 /*18*/]);
				Local_204[iVar0 /*18*/].f_16 = 2;
			}
			iVar0++;
		}
		iLocal_672 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0xCE4AAA035282336C(Local_204[iVar0 /*18*/].f_1))
		{
			unk_0x45533C09A6C9B409(&(Local_204[iVar0 /*18*/].f_1));
		}
		if (unk_0x7DE17ACDD8BA2642(Local_204[iVar0 /*18*/]))
		{
			if (!unk_0x66599E73DBA5A850(Local_204[iVar0 /*18*/]))
			{
				iVar1++;
				if (!unk_0x66599E73DBA5A850(iLocal_86))
				{
					if (unk_0x3C3D6D026CF7F51B(Local_204[iVar0 /*18*/], 0))
					{
						unk_0x6FE9A0C01D25F413(Local_204[iVar0 /*18*/], 0, 0);
					}
					else
					{
						func_52(iLocal_86, iVar0);
					}
				}
				else if (unk_0xF5F493B789EA063E(Local_204[iVar0 /*18*/], joaat("script_task_wander_standard")) != 1)
				{
					unk_0x984708151807AC6D(Local_204[iVar0 /*18*/], 1193033728, 0);
				}
			}
			if ((unk_0xDB08595445CDE2FF(Local_204[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(Local_204[iVar0 /*18*/], 1), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1)) > 400f) && unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(Local_204[iVar0 /*18*/], 1), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1)) > 400f)
			{
				unk_0xE9C250FA35A936C8(&(Local_204[iVar0 /*18*/]));
				if (unk_0x7DE17ACDD8BA2642(Local_204[iVar0 /*18*/].f_2))
				{
					unk_0xEF078F1FEE785D3E(&(Local_204[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_131.f_0)
	{
		if (unk_0x7DE17ACDD8BA2642(Local_131[iVar0 /*18*/]))
		{
			if ((unk_0xDB08595445CDE2FF(Local_131[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(Local_131[iVar0 /*18*/], 1), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1)) > 2500f) && func_58(Local_131[iVar0 /*18*/], 0, 0, 0, 0, 0, 1, 0, 1))
			{
				unk_0x0E4B6CF706BE8AA4(&(Local_131[iVar0 /*18*/]));
			}
		}
		if (unk_0xCE4AAA035282336C(Local_131[iVar0 /*18*/].f_1))
		{
			unk_0x45533C09A6C9B409(&(Local_131[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_86))
	{
		if (unk_0xDB08595445CDE2FF(iLocal_86) && unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Local_63) > 2500f)
		{
			unk_0x1EEF71E3CDD868D3(&iLocal_86);
			func_280();
		}
	}
	if (func_74() || func_75(iLocal_86, 1, 1))
	{
		func_187(5);
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0x7DE17ACDD8BA2642(Local_204[iVar0 /*18*/]))
		{
			if (!unk_0x66599E73DBA5A850(Local_204[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_369)
	{
		case 0:
			if (unk_0xCE4AAA035282336C(uLocal_360))
			{
				unk_0x45533C09A6C9B409(&uLocal_360);
			}
			if (unk_0xCE4AAA035282336C(uLocal_361))
			{
				unk_0x45533C09A6C9B409(&uLocal_361);
			}
			if (!unk_0x66599E73DBA5A850(iLocal_86))
			{
				unk_0x909F139DC199D8E0(iLocal_86);
				unk_0xC99325818121C4B9(iLocal_86, 3f);
			}
			func_109();
			if (unk_0x2A488C176D52CCA5(Local_60, Local_63) < 30f)
			{
				if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 < Local_204.f_0)
					{
						if (unk_0x7DE17ACDD8BA2642(Local_204[iVar0 /*18*/]))
						{
							if (!unk_0x66599E73DBA5A850(Local_204[iVar0 /*18*/]))
							{
								unk_0x909F139DC199D8E0(Local_204[iVar0 /*18*/]);
							}
						}
						iVar0++;
					}
					iLocal_369++;
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_204.f_0)
				{
					if (unk_0x7DE17ACDD8BA2642(Local_204[iVar0 /*18*/]))
					{
						if (!unk_0x66599E73DBA5A850(Local_204[iVar0 /*18*/]))
						{
							unk_0x909F139DC199D8E0(Local_204[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_369++;
			}
			break;
		
		case 1:
			if (((unk_0xFBD273FDBCF0C5BD(iLocal_91, 0) && unk_0xE0D346789C5160EB(iLocal_86, iLocal_91, 0)) && !bLocal_368) && unk_0x9CFCDD9C62B56708(iLocal_91, -1, 0))
			{
				if (unk_0x2A488C176D52CCA5(Local_63, Local_53) < 100f)
				{
					unk_0xDBC7406226B5540E(&uVar2);
					unk_0xC6E2FE1DC7DDC0AD(0, iLocal_91, 0);
					unk_0xC562419B5DA3BB96(0, iLocal_91, Local_53, 20f, 0, joaat("serrano"), 786599, 10f, 10f);
					unk_0x267F4694BB0C680B(0, iLocal_91, Local_53, 288.7089f, 1, 50f, 0);
					unk_0x8005EE2134A9EB38(0, iLocal_91, unk_0x30BE8A934C020461(iLocal_91, 1), 5, 10f, 262144, 2f, 2f, 1);
					unk_0xD99DE4ACE73B0000(0, iLocal_91, 0);
					unk_0x7D9A648CC1936BDA(0, Local_56, 1f, -1, 0.25f, 512, fLocal_59);
					unk_0x2B8574FAEA21141B(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0xF2CFC6EC8C85FA78(uVar2);
					unk_0x3D7110D966B0CEA2(iLocal_86, uVar2);
					unk_0x63EF69C6969A3D26(&uVar2);
				}
				else
				{
					unk_0xDBC7406226B5540E(&uVar3);
					unk_0xC6E2FE1DC7DDC0AD(0, iLocal_91, 0);
					unk_0xA6B22576A5268171(0, iLocal_91, 15f, 786468);
					unk_0xF2CFC6EC8C85FA78(uVar3);
					unk_0x3D7110D966B0CEA2(iLocal_86, uVar3);
					unk_0x63EF69C6969A3D26(&uVar3);
				}
				iLocal_369 = 1000;
			}
			else
			{
				if (unk_0x3C3D6D026CF7F51B(iLocal_86, 0))
				{
					unk_0x6FE9A0C01D25F413(iLocal_86, 0, 0);
				}
				iLocal_369++;
			}
			break;
		
		case 2:
			if (iVar1 > 0)
			{
				unk_0xC6C9BF71106ABCAC(iLocal_86, unk_0xC1A5EC5C986B98AD(), 3000f, -1, 1, 0);
				iLocal_369 = 1000;
			}
			else
			{
				if (unk_0x2A488C176D52CCA5(Local_63, Local_53) < 100f)
				{
					unk_0xDBC7406226B5540E(&uVar4);
					unk_0x7D9A648CC1936BDA(0, Local_56, 1f, -1, 0.25f, 512, fLocal_59);
					unk_0x2B8574FAEA21141B(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0xF2CFC6EC8C85FA78(uVar4);
					unk_0x3D7110D966B0CEA2(iLocal_86, uVar4);
					unk_0x63EF69C6969A3D26(&uVar4);
				}
				else
				{
					unk_0x984708151807AC6D(iLocal_86, 1193033728, 0);
				}
				iLocal_369 = 1000;
			}
			break;
		
		case 1000:
			if (iVar1 == 0)
			{
				func_280();
			}
			break;
	}
}

void func_109()
{
	Global_20591 = 0;
	func_110();
}

void func_110()
{
	unk_0x782234C275AFBA24();
	Global_22736 = 0;
	if (unk_0x0DCB385165FDE763())
	{
		unk_0xD6625E11483B2324(0);
		Global_21725 = 6;
	}
}

void func_111()
{
	func_109();
	if (!unk_0x66599E73DBA5A850(iLocal_86) && unk_0xB7A628320EFF8E47(Local_60, Local_63) < 900f)
	{
		unk_0x909F139DC199D8E0(iLocal_86);
		if (func_5(&Local_395, cLocal_372, "REPAP_CRZY", 4, 0, 0, 0))
		{
			func_199();
			func_187(10);
		}
		unk_0x8386356641D0DED1(iLocal_86, -2065892691);
	}
	else
	{
		func_199();
		func_187(10);
	}
}

void func_112()
{
	var uVar0;
	
	switch (iLocal_369)
	{
		case 0:
			func_146();
			if (!unk_0x66599E73DBA5A850(iLocal_86))
			{
				if (!unk_0xCE4AAA035282336C(uLocal_360))
				{
					uLocal_360 = func_189(iLocal_86, 0, 145);
				}
				if (unk_0xCE4AAA035282336C(uLocal_363))
				{
					unk_0x45533C09A6C9B409(&uLocal_363);
				}
				if (unk_0xCE4AAA035282336C(uLocal_362))
				{
					unk_0x45533C09A6C9B409(&uLocal_362);
				}
				unk_0x909F139DC199D8E0(iLocal_86);
				unk_0xDBC7406226B5540E(&uVar0);
				unk_0xD99DE4ACE73B0000(0, iLocal_91, 0);
				unk_0x7D9A648CC1936BDA(0, Local_56, 1f, 30000, 0.25f, 512, fLocal_59);
				unk_0x2B8574FAEA21141B(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0xF2CFC6EC8C85FA78(uVar0);
				unk_0x3D7110D966B0CEA2(iLocal_86, uVar0);
				unk_0x63EF69C6969A3D26(&uVar0);
				if (unk_0xE65E1573677B6119(iLocal_86))
				{
					unk_0xDC21E058EE11964C(iLocal_86);
				}
				func_109();
				iLocal_369++;
			}
			break;
		
		case 1:
			if (!func_80() && !unk_0x66599E73DBA5A850(iLocal_86))
			{
				if (unk_0x1C4E4DC1EFE24DF1(iLocal_86, Local_56, 3f, 3f, 3f, 0, 1, 0) && unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_56, 5f, 5f, 5f, 0, 1, 0))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x66599E73DBA5A850(iLocal_86))
			{
				func_145(0);
				if (func_5(&Local_395, cLocal_372, "REPAP_THK", 4, 0, 0, 0))
				{
					func_114(func_24(), 1, 150, 0, 1);
					iLocal_369++;
				}
			}
			break;
		
		case 3:
			if (!func_80() && !unk_0x66599E73DBA5A850(iLocal_86))
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_369++;
			}
			break;
		
		case 4:
			if (unk_0x83666F9FB8FEBD4B() > 2000)
			{
				if (func_113())
				{
					func_82();
				}
			}
			break;
	}
}

int func_113()
{
	return 1;
}

void func_114(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_144(iParam0) == 3)
	{
		return;
	}
	if (func_144(iParam0) == 4)
	{
		return;
	}
	func_115(func_144(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0xDD7756E2742E0F6D(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x3CC35ACFFC9C730E(iVar1, iVar0, 1);
	}
}

int func_115(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_143();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_142(99, 1);
					func_141(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_141(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_141(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_127(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_124(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_141(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_141(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_141(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_124(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_141(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_141(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_141(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_141(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_141(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_141(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_141(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_141(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_141(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x63C7B2D430A46FC3())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_141(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_141(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_141(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_141(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_141(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_141(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_124(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_141(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_141(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_141(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_141(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_141(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_141(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_123(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_142(95, iParam3);
					break;
				
				case 1:
					func_142(97, iParam3);
					break;
				
				case 2:
					func_142(96, iParam3);
					break;
			}
			func_142(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_118(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_118(bVar1);
	}
	iVar5 = (Global_60536[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60536[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60536[iVar2] = 2147483647;
				}
				else
				{
					Global_60536[iVar2] = (Global_60536[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_141(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_141(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_141(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60536[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60536[iVar2];
			Global_60536[iVar2] = (Global_60536[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_2[Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113648.f_20566.f_233[iVar2 /*69*/]++;
		Global_113648.f_20566.f_233[iVar2 /*69*/].f_1++;
		if (Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113648.f_20566.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_117(iParam0);
	if (Global_43257 == 15)
	{
		func_116(0);
	}
	return 1;
}

void func_116(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113648.f_20566.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60544[iVar0 /*3*/][0] = Global_113648.f_20566[iVar0];
		Global_60544.f_31[iVar0 /*3*/][0] = Global_113648.f_20566.f_11[iVar0];
		Global_60544.f_62[iVar0 /*3*/][0] = Global_113648.f_20566.f_22[iVar0];
		Global_60544.f_93[iVar0 /*3*/][0] = Global_113648.f_20566.f_33[iVar0];
		Global_60544.f_124[iVar0 /*3*/][0] = Global_113648.f_20566.f_44[iVar0];
		Global_60544.f_155[iVar0 /*3*/][0] = Global_113648.f_20566.f_55[iVar0];
		Global_60544.f_186[iVar0 /*3*/][0] = Global_113648.f_20566.f_66[iVar0];
		Global_60544.f_217[iVar0 /*3*/][0] = Global_113648.f_20566.f_77[iVar0];
		Global_60544.f_248[iVar0 /*3*/][0] = Global_113648.f_20566.f_88[iVar0];
		if (!bParam0)
		{
			Global_60544[iVar0 /*3*/][1] = Global_113648.f_20566[iVar0];
			Global_60544.f_31[iVar0 /*3*/][1] = Global_113648.f_20566.f_11[iVar0];
			Global_60544.f_62[iVar0 /*3*/][1] = Global_113648.f_20566.f_22[iVar0];
			Global_60544.f_93[iVar0 /*3*/][1] = Global_113648.f_20566.f_33[iVar0];
			Global_60544.f_124[iVar0 /*3*/][1] = Global_113648.f_20566.f_44[iVar0];
			Global_60544.f_155[iVar0 /*3*/][1] = Global_113648.f_20566.f_55[iVar0];
			Global_60544.f_186[iVar0 /*3*/][1] = Global_113648.f_20566.f_66[iVar0];
			Global_60544.f_217[iVar0 /*3*/][1] = Global_113648.f_20566.f_77[iVar0];
			Global_60544.f_248[iVar0 /*3*/][1] = Global_113648.f_20566.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_117(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_60536[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x3CC35ACFFC9C730E(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x3CC35ACFFC9C730E(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x3CC35ACFFC9C730E(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_118(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_92(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_92(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_92(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_92(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_121(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_121(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_121(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_121(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_121(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_121(8277, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0xA26A9A07F761D8F8())
	{
		if (BitTest(Global_113648.f_20566.f_471, bParam0))
		{
			bVar0 = true;
			unk_0x061B1200C95204CB(&(Global_113648.f_20566.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113648.f_20566.f_471, bParam0) || BitTest(Global_2359296[func_120() /*5568*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0x061B1200C95204CB(&(Global_113648.f_20566.f_471), bParam0);
		unk_0x061B1200C95204CB(&(Global_2359296[func_120() /*5568*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xD30970E11AD0FF0D("COUP_RED");
		unk_0x48849374B34BB7B9(func_119(bParam0));
		unk_0x4BE755B3858339A1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_119(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_120()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_121(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_122(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
}

int func_122(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_93();
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

void func_123(int iParam0)
{
	func_142(93, iParam0);
	func_142(29, iParam0);
	func_142(30, iParam0);
}

int func_124(int iParam0)
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
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_126(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_126(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_126(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_126(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xD48CE560FB238316();
		iVar1 = func_125(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xD48CE560FB238316();
		iVar3 = func_125(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xD48CE560FB238316();
		iVar5 = func_125(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xD48CE560FB238316();
		iVar7 = func_125(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xD48CE560FB238316();
		iVar9 = func_125(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xD48CE560FB238316();
		iVar11 = func_125(8277, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0xA26A9A07F761D8F8())
	{
		return BitTest(Global_113648.f_20566.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_120() /*5568*/].f_681.f_10, iParam0);
}

int func_125(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805027[iParam0 /*3*/][func_122(iParam1)];
		if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_126(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_93();
	}
	return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}

int func_127(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x73651E4B1D91FE32(27))
	{
		return 0;
	}
	if (unk_0xDD7756E2742E0F6D(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xDD7756E2742E0F6D(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xDD7756E2742E0F6D(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xDD7756E2742E0F6D(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x3CC35ACFFC9C730E(joaat("num_cash_spent"), iVar1, 1);
		func_91(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_128(27, 1);
	return 1;
}

int func_128(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_129(iParam0, iParam1);
}

int func_129(int iParam0, int iParam1)
{
	if (func_17(14) && !func_140(iParam0))
	{
		return 0;
	}
	if (unk_0x73651E4B1D91FE32(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32414 != 0 && !Global_78558)
	{
		return 0;
	}
	if (func_139(&Global_4542597))
	{
		if (func_137(&Global_4542597, iParam0))
		{
			return 0;
		}
		if (func_130(&Global_4542597, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xD530287A65F961E4(iParam0))
		{
			return 0;
		}
		if (unk_0x73651E4B1D91FE32(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_130(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x73651E4B1D91FE32(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_140(iParam1))
	{
		return 0;
	}
	if (func_137(uParam0, iParam1))
	{
		return 0;
	}
	if (func_136(uParam0) < 0f)
	{
		func_135(uParam0, 0);
	}
	func_133(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_131(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_131(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x73651E4B1D91FE32(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_140(iParam1))
	{
		return 0;
	}
	if (func_137(uParam0, iParam1))
	{
		return 0;
	}
	if (func_136(uParam0) < 0f)
	{
		func_135(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_132(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_132(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_133(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_134(uParam0, iVar0);
		iVar0++;
	}
	func_135(uParam0, (Global_4542596 - 0.5f));
}

void func_134(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_135(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_136(var uParam0)
{
	return uParam0->f_80;
}

bool func_137(var uParam0, int iParam1)
{
	return func_138(uParam0, iParam1) != -1;
}

int func_138(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_139(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

void func_141(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xDD7756E2742E0F6D(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3CC35ACFFC9C730E(iParam0, iVar0, 1);
}

void func_142(int iParam0, int iParam1)
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

void func_143()
{
	int iVar0;
	
	if (unk_0x7FFBE14C34D75E19())
	{
		unk_0xDD7756E2742E0F6D(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_60536[0] == iVar0)
		{
			Global_60536[0] = iVar0;
		}
		unk_0xDD7756E2742E0F6D(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_60536[1] == iVar0)
		{
			Global_60536[1] = iVar0;
		}
		unk_0xDD7756E2742E0F6D(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_60536[2] == iVar0)
		{
			Global_60536[2] = iVar0;
		}
	}
}

int func_144(int iParam0)
{
	return Global_2028[iParam0 /*29*/].f_17;
}

void func_145(bool bParam0)
{
	if (!unk_0x66599E73DBA5A850(iLocal_86))
	{
		if (iLocal_621 > 1)
		{
			if (!unk_0xD495130AEF425591(iLocal_86, unk_0xC1A5EC5C986B98AD(), 60f))
			{
				iLocal_621 = 0;
				iLocal_622 = 0;
			}
		}
		switch (iLocal_621)
		{
			case 0:
				unk_0x909F139DC199D8E0(iLocal_86);
				unk_0xEDB03CCB50D11479(iLocal_86, unk_0xC1A5EC5C986B98AD(), -1, 16, 2);
				unk_0xDBC7406226B5540E(&uLocal_620);
				unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
				unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), -1, 16, 2);
				unk_0xF2CFC6EC8C85FA78(uLocal_620);
				unk_0x3D7110D966B0CEA2(iLocal_86, uLocal_620);
				unk_0x63EF69C6969A3D26(&uLocal_620);
				iLocal_621++;
				break;
			
			case 1:
				if (unk_0xF5F493B789EA063E(iLocal_86, joaat("script_task_perform_sequence")) != 1)
				{
					iLocal_621++;
				}
				break;
			
			case 2:
				if (bParam0)
				{
					switch (iLocal_622)
					{
						case 0:
							if (!unk_0x7BB3D8F4F6310EB8(iLocal_86, "random@paparazzi@wait", "wait_a", 3))
							{
								unk_0x3EE48ADC8C7F5CC4(iLocal_86, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x92377426879E21FF(iLocal_86, "random@paparazzi@wait", "wait_a") > 0.95f)
							{
								unk_0x3EE48ADC8C7F5CC4(iLocal_86, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622++;
							}
							break;
						
						case 1:
							if (!unk_0x7BB3D8F4F6310EB8(iLocal_86, "random@paparazzi@wait", "wait_b", 3))
							{
								unk_0x3EE48ADC8C7F5CC4(iLocal_86, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x92377426879E21FF(iLocal_86, "random@paparazzi@wait", "wait_b") > 0.95f)
							{
								unk_0x3EE48ADC8C7F5CC4(iLocal_86, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622++;
							}
							break;
						
						case 2:
							if (!unk_0x7BB3D8F4F6310EB8(iLocal_86, "random@paparazzi@wait", "wait_c", 3))
							{
								unk_0x3EE48ADC8C7F5CC4(iLocal_86, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x92377426879E21FF(iLocal_86, "random@paparazzi@wait", "wait_c") > 0.95f)
							{
								unk_0x3EE48ADC8C7F5CC4(iLocal_86, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622 = 0;
							}
							break;
						}
				}
				break;
			}
	}
}

void func_146()
{
	if (unk_0xCE4AAA035282336C(uLocal_364))
	{
		unk_0x45533C09A6C9B409(&uLocal_364);
	}
}

void func_147()
{
	var uVar0;
	
	if (unk_0xFBD273FDBCF0C5BD(iLocal_91, 0))
	{
		switch (iLocal_369)
		{
			case 0:
				if (!unk_0x66599E73DBA5A850(iLocal_86) && unk_0xFBD273FDBCF0C5BD(iLocal_91, 0))
				{
					func_146();
					func_151(1, 1, 0, 0, 0, 0, 0);
					if (unk_0xCE4AAA035282336C(uLocal_362))
					{
						unk_0x45533C09A6C9B409(&uLocal_362);
					}
					if (unk_0xCE4AAA035282336C(uLocal_360))
					{
						unk_0x45533C09A6C9B409(&uLocal_360);
					}
					if (unk_0xCE4AAA035282336C(uLocal_361))
					{
						unk_0x45533C09A6C9B409(&uLocal_361);
					}
					if (unk_0xE65E1573677B6119(iLocal_86))
					{
						unk_0xDC21E058EE11964C(iLocal_86);
					}
					func_149();
					if (!unk_0x66599E73DBA5A850(iLocal_86))
					{
						unk_0x952D2B8A054C4FF8(iLocal_86, unk_0x7394CB479CCA24AF(iLocal_91, -10f, 5f, 0f), -1, 16, 4);
					}
					unk_0x952D2B8A054C4FF8(unk_0xC1A5EC5C986B98AD(), unk_0x7394CB479CCA24AF(iLocal_91, 10f, 5f, 0f), 15000, 16, 4);
					unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 1280);
					if ((bLocal_368 || Global_3) || bLocal_70)
					{
						while (!func_148(&Local_395, cLocal_372, "REPAP_THK", "REPAP_THK_1", 4, 0, 0))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
					}
					else
					{
						while (!func_5(&Local_395, cLocal_372, "REPAP_THK", 4, 0, 0, 0))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
					}
					func_114(func_24(), 1, 750, 0, 1);
					if (!unk_0x66599E73DBA5A850(iLocal_86))
					{
						unk_0x952D2B8A054C4FF8(iLocal_86, unk_0x7394CB479CCA24AF(iLocal_91, -10f, 5f, 0f), -1, 16, 4);
						unk_0xBB6027D1D193CBA6(iLocal_86, 0, 0);
					}
					unk_0x952D2B8A054C4FF8(unk_0xC1A5EC5C986B98AD(), unk_0x7394CB479CCA24AF(iLocal_91, 10f, 5f, 0f), 15000, 16, 4);
					iLocal_369++;
				}
				break;
			
			case 1:
				if (!func_80() && !unk_0x66599E73DBA5A850(iLocal_86))
				{
					unk_0xDBC7406226B5540E(&uVar0);
					unk_0xD99DE4ACE73B0000(0, iLocal_91, 0);
					unk_0x7D9A648CC1936BDA(0, Local_56, 1f, 30000, 0.25f, 512, fLocal_59);
					unk_0x2B8574FAEA21141B(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0xF2CFC6EC8C85FA78(uVar0);
					unk_0x3D7110D966B0CEA2(iLocal_86, uVar0);
					unk_0x63EF69C6969A3D26(&uVar0);
					iLocal_369++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 2:
				if (!unk_0x66599E73DBA5A850(iLocal_86) && unk_0xFBD273FDBCF0C5BD(iLocal_91, 0))
				{
					if (!unk_0xE0D346789C5160EB(iLocal_86, iLocal_91, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						if (bLocal_368)
						{
							unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
							func_151(0, 1, 0, 0, 0, 0, 0);
							iLocal_369 = 5;
						}
						else
						{
							iLocal_369++;
						}
					}
				}
				break;
			
			case 3:
				if ((!unk_0x66599E73DBA5A850(iLocal_86) && unk_0xFBD273FDBCF0C5BD(iLocal_91, 0)) && unk_0x83666F9FB8FEBD4B() > 1000)
				{
					unk_0xD99DE4ACE73B0000(unk_0xC1A5EC5C986B98AD(), iLocal_91, 0);
					unk_0xEDB03CCB50D11479(unk_0xC1A5EC5C986B98AD(), iLocal_91, 10000, 0, 3);
					iLocal_369++;
				}
				break;
			
			case 4:
				if (unk_0xFBD273FDBCF0C5BD(iLocal_91, 0) && !unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_91, 0))
				{
					unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
					func_151(0, 1, 0, 0, 0, 0, 0);
					unk_0x439314AD4FC79186(iLocal_91, 2);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_369++;
				}
				break;
			
			case 5:
				if (unk_0x83666F9FB8FEBD4B() > 1000)
				{
					if (func_113())
					{
						if (!bLocal_368)
						{
							if (!func_101(19))
							{
								func_97("AM_H_CALLTX", 1, 0, -1, 10000, 7, 0, 0, 0);
								func_96(19);
							}
						}
						func_82();
					}
				}
				break;
			}
	}
}

bool func_148(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21732 = 0;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 1;
	Global_22718 = 0;
	Global_22722 = 0;
	StringCopy(&Global_22729, sParam3, 24);
	Global_2883585 = 0;
	return func_6(sParam2, iParam4, 0);
}

void func_149()
{
	Global_20591 = 0;
	func_150();
}

void func_150()
{
	if (unk_0x0DCB385165FDE763())
	{
		unk_0x782234C275AFBA24();
		Global_22736 = 0;
		unk_0xD6625E11483B2324(1);
		Global_21725 = 6;
		return;
	}
}

void func_151(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x8ECAA315E07E3A17(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 1);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 1);
		func_158(1);
		unk_0x2A7FF4CA1CC371B5();
		unk_0x3096CB6635EB839E();
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE444FD7526C8BB46())
			{
				unk_0xD6625E11483B2324(0);
			}
			if (!func_14())
			{
				Global_20383.f_1 = 3;
			}
			Global_21725 = 5;
		}
		func_157(1, iParam3, iParam2, 0);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_158(0);
		unk_0x5862CC4FD19EB752();
		Global_63368 = 0;
		if (bParam1)
		{
			unk_0xDB4D82037BD5A339();
		}
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 0);
		func_157(0, iParam3, iParam2, 0);
		if (unk_0xA26A9A07F761D8F8())
		{
			if ((((((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_155(unk_0x93E99A2DBCBA9CFA())) && !func_153(unk_0x93E99A2DBCBA9CFA(), 0)) && !func_152()) && !bParam4) && !bParam5) && !unk_0x8253CEEA17ED481B())
			{
				unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
			}
		}
		else if (((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_155(unk_0x93E99A2DBCBA9CFA())) && !bParam4) && !bParam5)
		{
			unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
		}
		Global_78556 = 0;
	}
}

bool func_152()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 14);
}

bool func_153(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_154(-1, 0) == 8;
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

int func_154(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_93();
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

int func_155(int iParam0)
{
	if (func_153(iParam0, 0))
	{
		return 1;
	}
	if (func_156())
	{
		if (iParam0 == unk_0x93E99A2DBCBA9CFA())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657589[iParam0 /*466*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_156()
{
	return BitTest(Global_2621446, 3);
}

int func_157(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xCC17806DB0C41C19())
	{
		if (unk_0x39D9A0A5E812BD25() != iParam0 && uParam2)
		{
			unk_0xA740EFFFBB4FED55(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_158(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xECDAB41968FF21A8(&Global_8253, 13);
	}
	else
	{
		unk_0x061B1200C95204CB(&Global_8253, 13);
	}
}

void func_159()
{
	if (Global_3 || bLocal_70)
	{
		unk_0xC54CEC3E1000BF6E(0.7f);
	}
	if (bLocal_368 && !unk_0x66599E73DBA5A850(iLocal_86))
	{
		if (!func_180(iLocal_86))
		{
			if (!unk_0xCE4AAA035282336C(uLocal_360))
			{
				uLocal_360 = func_189(iLocal_86, 0, 145);
			}
		}
		else
		{
			if (func_73())
			{
				if (!unk_0xCE4AAA035282336C(uLocal_362))
				{
					uLocal_362 = func_56(Local_53, 1);
				}
				if (unk_0xCE4AAA035282336C(uLocal_363))
				{
					unk_0x45533C09A6C9B409(&uLocal_363);
				}
			}
			else
			{
				if (!unk_0xCE4AAA035282336C(uLocal_363))
				{
					uLocal_363 = func_56(Local_56, 1);
				}
				if (unk_0xCE4AAA035282336C(uLocal_362))
				{
					unk_0x45533C09A6C9B409(&uLocal_362);
				}
			}
			if (unk_0xCE4AAA035282336C(uLocal_360))
			{
				unk_0x45533C09A6C9B409(&uLocal_360);
			}
		}
		if (!unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_91, 0))
		{
			if ((unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) && unk_0xFBD273FDBCF0C5BD(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 0)) && func_179(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
			{
				iLocal_91 = 0;
				iLocal_91 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
				unk_0x85BAE84748AD1A23(iLocal_91, 1, 1);
				unk_0x439314AD4FC79186(iLocal_91, 1);
				unk_0x495ED6976429C1E8(iLocal_91, 0, 0);
			}
		}
		if (unk_0xCE4AAA035282336C(uLocal_363) && !unk_0x3C3D6D026CF7F51B(iLocal_86, 0))
		{
			if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_56, 15f, 15f, 15f, 0, 1, 0) || unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), 231.7982f, 672.7683f, 189.2f, 1f, 1f, 2.5f, 1, 1, 0))
			{
				func_187(4);
			}
		}
		else if (iLocal_369 != 100)
		{
			if (func_73() && func_178(1, 1, 1))
			{
				if (unk_0x9DC9E896F189AAA5(iLocal_91, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_369 = 100;
				}
			}
			else if (!unk_0xE0D346789C5160EB(iLocal_86, iLocal_91, 0))
			{
				if (unk_0xF5F493B789EA063E(iLocal_86, joaat("script_task_enter_vehicle")) != 1)
				{
					unk_0xD30E9CAE1FEA1C7E(iLocal_86, iLocal_91, -1, func_177(iLocal_91), 2f, 8388608, 0);
				}
			}
		}
	}
	else
	{
		if (iLocal_369 != 100)
		{
			if (func_73() && func_178(1, 1, 1))
			{
				if (unk_0x9DC9E896F189AAA5(iLocal_91, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_369 = 100;
				}
			}
		}
		func_174(1);
	}
	switch (iLocal_369)
	{
		case 0:
			if (func_73())
			{
				if (unk_0x7BB3D8F4F6310EB8(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0x7BB3D8F4F6310EB8(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3))
				{
					unk_0x909F139DC199D8E0(iLocal_86);
				}
				if (func_5(&Local_395, cLocal_372, "REPAP_HM", 4, 0, 0, 0))
				{
					unk_0xFF2AF80F9EC7704C(0.5f);
					iLocal_369++;
				}
				if (!func_173())
				{
					func_168();
				}
			}
			break;
		
		case 1:
			if (!func_81())
			{
				if (func_73())
				{
					if (!func_80())
					{
						if (func_24() == 0)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_LIFTM", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_24() == 1)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_LIFTF", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_5(&Local_395, cLocal_372, "REPAP_LIFTT", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_81())
			{
				if (func_73())
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_PLEAD", 4, 0, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						if (Global_3 || bLocal_70)
						{
							iLocal_369 = 99;
						}
						else
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_164("REPAP_HOME1", (func_167() && !func_81())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 4:
			if (func_24() == 0)
			{
				if (func_164("REPAP_HOME1M", (func_167() && !func_81())))
				{
					iLocal_369++;
				}
			}
			else if (func_24() == 1)
			{
				if (func_164("REPAP_HOME1F", (func_167() && !func_81())))
				{
					iLocal_369++;
				}
			}
			else if (func_164("REPAP_HOME1T", (func_167() && !func_81())))
			{
				iLocal_369++;
			}
			break;
		
		case 5:
			if (func_164("REPAP_HOME1L", (func_167() && !func_81())))
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_369++;
			}
			break;
		
		case 6:
			if (!func_81())
			{
				if (unk_0x83666F9FB8FEBD4B() > 7000)
				{
					if (func_167())
					{
						if (func_5(&Local_395, cLocal_372, "REPAP_HOME2", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		
		case 7:
			if (!func_81())
			{
				if (func_167() && !func_80())
				{
					if (func_163("REPAP_HOME2"))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 8:
			if (func_164("REPAP_HOME2L", (func_167() && !func_81())))
			{
				iLocal_369++;
			}
			break;
		
		case 9:
			if (!func_81())
			{
				if (func_167() && !func_80())
				{
					if (func_163("REPAP_RESP2"))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_369++;
					}
				}
			}
			break;
		
		case 10:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_164("REPAP_HOME3", (func_167() && !func_81())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 11:
			if (!func_81())
			{
				if (func_167() && !func_80())
				{
					if (func_163("REPAP_HOME3"))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_369++;
					}
				}
			}
			break;
		
		case 12:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_164("REPAP_HOME4", (func_167() && !func_81())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 13:
			if (!func_81())
			{
				if (func_167() && !func_80())
				{
					if (func_163("REPAP_HOME4"))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_369++;
					}
				}
			}
			break;
		
		case 14:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_164("REPAP_NOBAN", (func_167() && !func_81())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 15:
			if (!func_81())
			{
				if (func_167() && !func_80())
				{
					if (func_163("REPAP_NOBAN"))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 16:
			if (!func_81())
			{
				if (func_167() && !func_80())
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_NOBANL", 4, 0, 0, 0))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 17:
			func_81();
			break;
		
		case 100:
			if (func_161(iLocal_91, 5f, 5, 1056964608, 0, 1, 0))
			{
				func_188("");
				func_187(3);
			}
			break;
	}
	if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0)
	{
		func_78();
	}
	if (func_24() == 2)
	{
		if ((func_160() && !func_173()) && iLocal_47 != 8)
		{
			if (!unk_0x66599E73DBA5A850(iLocal_86))
			{
				if (unk_0x1C4E4DC1EFE24DF1(iLocal_86, -1034.6f, 4918.6f, 205.9f, 5f, 5f, 5f, 0, 1, 0))
				{
					if (!unk_0x29FD30D3B1A307D6(iLocal_86, unk_0x2165FE3E3189DC71(unk_0x93E99A2DBCBA9CFA())))
					{
						unk_0xF8463C9FBA8DCD46(iLocal_86, unk_0x2165FE3E3189DC71(unk_0x93E99A2DBCBA9CFA()));
					}
					func_109();
					iLocal_47 = 8;
				}
			}
		}
	}
}

var func_160()
{
	return Global_32402;
}

int func_161(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x8B438725D591ED78(0, 71, 1);
	unk_0x8B438725D591ED78(0, 72, 1);
	unk_0x8B438725D591ED78(0, 76, 1);
	unk_0x8B438725D591ED78(0, 73, 1);
	unk_0x8B438725D591ED78(0, 59, 1);
	unk_0x8B438725D591ED78(0, 60, 1);
	if (bParam5)
	{
		unk_0x8B438725D591ED78(0, 75, 1);
	}
	unk_0x8B438725D591ED78(0, 80, 1);
	if (!bParam6)
	{
		unk_0x8B438725D591ED78(0, 69, 1);
		unk_0x8B438725D591ED78(0, 70, 1);
		unk_0x8B438725D591ED78(0, 68, 1);
	}
	unk_0x8B438725D591ED78(0, 74, 1);
	unk_0x8B438725D591ED78(0, 86, 1);
	unk_0x8B438725D591ED78(0, 81, 1);
	unk_0x8B438725D591ED78(0, 82, 1);
	unk_0x8B438725D591ED78(0, 138, 1);
	unk_0x8B438725D591ED78(0, 136, 1);
	unk_0x8B438725D591ED78(0, 114, 1);
	unk_0x8B438725D591ED78(0, 107, 1);
	unk_0x8B438725D591ED78(0, 110, 1);
	unk_0x8B438725D591ED78(0, 89, 1);
	unk_0x8B438725D591ED78(0, 89, 1);
	unk_0x8B438725D591ED78(0, 87, 1);
	unk_0x8B438725D591ED78(0, 88, 1);
	unk_0x8B438725D591ED78(0, 113, 1);
	unk_0x8B438725D591ED78(0, 115, 1);
	unk_0x8B438725D591ED78(0, 116, 1);
	unk_0x8B438725D591ED78(0, 117, 1);
	unk_0x8B438725D591ED78(0, 118, 1);
	unk_0x8B438725D591ED78(0, 119, 1);
	unk_0x8B438725D591ED78(0, 352, 1);
	unk_0x8B438725D591ED78(0, 131, 1);
	unk_0x8B438725D591ED78(0, 132, 1);
	unk_0x8B438725D591ED78(0, 123, 1);
	unk_0x8B438725D591ED78(0, 126, 1);
	unk_0x8B438725D591ED78(0, 129, 1);
	unk_0x8B438725D591ED78(0, 130, 1);
	unk_0x8B438725D591ED78(0, 133, 1);
	unk_0x8B438725D591ED78(0, 134, 1);
	unk_0x6DDC89A03EBEF23F();
	func_162(iParam0);
	if ((unk_0xA5E11AF0A2B928C1() - Global_29) > 500)
	{
		unk_0xC8927C3AD7C5D2E1(iParam0, iParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xA5E11AF0A2B928C1();
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		if (unk_0x2655A8EC638E4FD1(unk_0xDC58AE028CB223BA(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_162(int iParam0)
{
	if (!unk_0x055111B11E6624FD(uParam0, 0))
	{
		if (unk_0xB9F391F7A44CA06F(iParam0))
		{
			if (unk_0xB91CBB2DE81AA576(iParam0))
			{
				unk_0x17F94CF179685573(iParam0, 0);
			}
		}
	}
}

int func_163(char* sParam0)
{
	struct<3> Var0;
	
	StringConCat(&Var0, sParam0, 24);
	if (func_24() == 0)
	{
		StringConCat(&Var0, "M", 24);
	}
	else if (func_24() == 1)
	{
		StringConCat(&Var0, "F", 24);
	}
	else
	{
		StringConCat(&Var0, "T", 24);
	}
	if (func_5(&Local_395, cLocal_372, &Var0, 4, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_164(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!iLocal_72)
		{
			if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
			{
				iLocal_72 = 1;
				iLocal_73 = 0;
			}
		}
		else if (iLocal_73)
		{
			if (func_166(&Local_395, cLocal_372, sParam0, &Local_75, 4, 0, 0))
			{
				iLocal_73 = 0;
			}
		}
		if ((iLocal_72 && !iLocal_73) && bParam1)
		{
			if (iLocal_81 == -1)
			{
				if (!func_80())
				{
					iLocal_81 = unk_0xA5E11AF0A2B928C1();
				}
			}
			else if ((unk_0xA5E11AF0A2B928C1() - iLocal_81) > 500)
			{
				iLocal_81 = -1;
				iLocal_72 = 0;
				iLocal_73 = 0;
				return 1;
			}
		}
	}
	else if (iLocal_72 && !iLocal_73)
	{
		Local_75 = { func_165() };
		func_149();
		iLocal_73 = 1;
	}
	return 0;
}

struct<6> func_165()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21725 == 4)
	{
		iVar6 = unk_0x2EAC620A648B0397();
		iVar6 = (iVar6 + Global_22735);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x42FA33BDEDF21186(&(Global_20593[iVar7 /*6*/])))
			{
				return Global_20593[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x42FA33BDEDF21186(&(Global_20593[iVar8 /*6*/])))
					{
						return Global_20593[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_20593[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_166(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21732 = 0;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 1;
	StringCopy(&Global_22729, sParam3, 24);
	Global_2883585 = 0;
	return func_6(sParam2, iParam4, 0);
}

int func_167()
{
	if (bLocal_368)
	{
		if (unk_0xFBD273FDBCF0C5BD(iLocal_91, 0))
		{
			if (func_73())
			{
				return 1;
			}
		}
		if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) && !unk_0x3C3D6D026CF7F51B(iLocal_86, 0))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_63) < 400f)
			{
				return 1;
			}
		}
	}
	else
	{
		return func_73();
	}
	return 0;
}

void func_168()
{
	if (func_24() == 2)
	{
		if (!unk_0xCE4AAA035282336C(uLocal_364))
		{
			func_171();
			uLocal_364 = func_170(-1034.6f, 4918.6f, 205.9f, 0);
			unk_0xEA4639F4444B7003(uLocal_364, 269);
			func_169();
		}
	}
}

void func_169()
{
	if (!func_173())
	{
		if (func_24() == 2)
		{
			Global_32402 = 1;
		}
	}
}

var func_170(struct<3> Param0, int iParam3)
{
	return func_56(Param0, iParam3);
}

void func_171()
{
	if (func_24() == 2)
	{
		if (!Global_32404)
		{
			func_172("CULT_BLIP_HELP", -1);
			Global_32404 = 1;
		}
	}
}

void func_172(char* sParam0, int iParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
}

int func_173()
{
	if (Global_113648.f_24997.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_174(bool bParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(iLocal_91, 0) && !unk_0x66599E73DBA5A850(iLocal_86))
	{
		if (func_73())
		{
			if (bParam0)
			{
				if (!unk_0xCE4AAA035282336C(uLocal_362))
				{
					uLocal_362 = func_56(Local_53, 1);
				}
			}
			if (unk_0xCE4AAA035282336C(uLocal_360))
			{
				unk_0x45533C09A6C9B409(&uLocal_360);
			}
			if (unk_0xCE4AAA035282336C(uLocal_361))
			{
				unk_0x45533C09A6C9B409(&uLocal_361);
			}
		}
		else
		{
			if (unk_0xCE4AAA035282336C(uLocal_362))
			{
				unk_0x45533C09A6C9B409(&uLocal_362);
			}
			if (!unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_91, 0))
			{
				if (!unk_0xCE4AAA035282336C(uLocal_361))
				{
					uLocal_361 = func_175(iLocal_91, 0, 0);
				}
			}
			if (!unk_0xE0D346789C5160EB(iLocal_86, iLocal_91, 0))
			{
				if (!unk_0xCE4AAA035282336C(uLocal_360))
				{
					uLocal_360 = func_189(iLocal_86, 0, 145);
				}
			}
			else if (unk_0xCE4AAA035282336C(uLocal_360))
			{
				unk_0x45533C09A6C9B409(&uLocal_360);
			}
		}
	}
}

int func_175(int iParam0, bool bParam1, bool bParam2)
{
	return func_176(iParam0, !bParam1, bParam2);
}

int func_176(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7DE17ACDD8BA2642(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x53B496178AE44636(iParam0);
	if (unk_0xA6B591D40DE982B5(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_57(unk_0xA26A9A07F761D8F8(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x3BCF1F6A3573A1DF(uVar0, bParam1);
		}
		else
		{
			unk_0x1886753DA39F38F8(uVar0, 2);
		}
	}
	else if (unk_0x71904BD37B848CAF(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_57(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
		unk_0x3BCF1F6A3573A1DF(uVar0, bParam1);
	}
	else if (unk_0x4E7A9806173C3AD1(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_57(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_177(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 <= (unk_0x2E240694D642679A(iParam0) - 1))
		{
			if (iVar0 == -1)
			{
				iVar2 = iVar1;
				if (unk_0x9CFCDD9C62B56708(iParam0, iVar2, 0))
				{
					iVar0 = iVar2;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_178(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x45C0F56FBD8A5C1A())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (!unk_0xACD39355028D39EF(unk_0xC1A5EC5C986B98AD()))
		{
			return 0;
		}
		iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		if (bParam0)
		{
			if (unk_0x055111B11E6624FD(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x055111B11E6624FD(iVar0, 0))
			{
				if (unk_0xA66E176E5772E965(iVar0, -1, 0) != unk_0xC1A5EC5C986B98AD())
				{
					return 0;
				}
			}
		}
		if (!unk_0x055111B11E6624FD(iVar0, 0))
		{
			if (unk_0x38B6CF1EE3FC9BC1(iVar0) < 0.95f || unk_0x38B6CF1EE3FC9BC1(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	if (!unk_0xF66F9ECA31DB2AB0(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	return 1;
}

int func_179(int iParam0)
{
	if (!unk_0x055111B11E6624FD(uParam0, 0))
	{
		if (unk_0x9CFCDD9C62B56708(iParam0, -1, 0))
		{
			return 1;
		}
		if (unk_0x9CFCDD9C62B56708(iParam0, 0, 0))
		{
			return 1;
		}
		if (unk_0x9CFCDD9C62B56708(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x9CFCDD9C62B56708(iParam0, 2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_180(int iParam0)
{
	if (unk_0x29FD30D3B1A307D6(iParam0, unk_0x2165FE3E3189DC71(unk_0x93E99A2DBCBA9CFA())))
	{
		if (!unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iParam0, 25f, 25f, 25f, 0, 1, 0))
		{
			unk_0xDC21E058EE11964C(iParam0);
		}
		return 1;
	}
	else if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iParam0, Global_19, 0, 1, 0))
	{
		unk_0xF8463C9FBA8DCD46(iParam0, unk_0x2165FE3E3189DC71(unk_0x93E99A2DBCBA9CFA()));
	}
	return 0;
}

void func_181()
{
	if (!unk_0x66599E73DBA5A850(iLocal_86) && unk_0xFBD273FDBCF0C5BD(iLocal_91, 0))
	{
		if (!unk_0xE0D346789C5160EB(iLocal_86, iLocal_91, 1))
		{
			if (unk_0xF5F493B789EA063E(iLocal_86, joaat("script_task_enter_vehicle")) != 1)
			{
				unk_0xD30E9CAE1FEA1C7E(iLocal_86, iLocal_91, -1, func_177(iLocal_91), 2f, 8388608, 0);
			}
		}
		if ((unk_0x7DE17ACDD8BA2642(func_72()) && unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(iLocal_86, 1), unk_0x30BE8A934C020461(func_72(), 1)) < 100f) && (unk_0xDC58AE028CB223BA(iLocal_91) < 5f || !unk_0x6CEF99E452573979(unk_0x504B9BB48D41C264(iLocal_91))))
		{
			if (bLocal_368)
			{
				if (!unk_0x7BB3D8F4F6310EB8(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) && unk_0x44A6C9475C859B45(iLocal_86, iLocal_91))
				{
					unk_0x3EE48ADC8C7F5CC4(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
				}
			}
			else if (!unk_0x7BB3D8F4F6310EB8(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3) && unk_0x44A6C9475C859B45(iLocal_86, iLocal_91))
			{
				unk_0x3EE48ADC8C7F5CC4(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
			}
		}
		else if ((unk_0x7BB3D8F4F6310EB8(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0x7BB3D8F4F6310EB8(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3)) && unk_0x44A6C9475C859B45(iLocal_86, iLocal_91))
		{
			unk_0x909F139DC199D8E0(iLocal_86);
		}
		switch (iLocal_369)
		{
			case 0:
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					if (unk_0x7DE17ACDD8BA2642(func_72()) && !unk_0x66599E73DBA5A850(func_72()))
					{
						func_23(&Local_395, 4);
						func_22(&Local_395, 4, func_72(), "PAPARAZZO", 0, 1);
					}
					iLocal_49 = 2;
					func_109();
					if (func_5(&Local_395, cLocal_372, "REPAP_GO", 4, 0, 0, 0))
					{
						unk_0xFF2AF80F9EC7704C(0.2f);
						unk_0xC5B2830898581862(iLocal_86, 1);
						unk_0x0133FF6E23A1DCA4(1, uLocal_69, joaat("player"));
						iLocal_358 = unk_0xF19D6C0E8B56BE23(joaat("prop_ld_test_01"), Local_87, 1, 1, 0);
						unk_0xDDE449983CE7572E(iLocal_358, 0, 0);
						unk_0x724FFAED1C56CE2B(iLocal_358, 0, 0);
						unk_0x2718E9CC165A99F6(iLocal_358, 1);
						iLocal_369++;
					}
				}
				break;
			
			case 1:
				func_183();
				if (!unk_0x9DC9E896F189AAA5(iLocal_86, 243.5571f, 77.51265f, 90.08002f, 268.2083f, 144.2189f, 109.853f, 23.25f, 0, 1, 0))
				{
					iLocal_369++;
					iLocal_370 = unk_0xA5E11AF0A2B928C1();
					iLocal_49 = 3;
				}
				break;
			
			case 2:
				if (!bLocal_668)
				{
					if (((((iLocal_670 != 1 && iLocal_670 != 3) && iLocal_670 != 6) && iLocal_670 != 9) && iLocal_670 != 11) && iLocal_670 != 13)
					{
						bLocal_669 = false;
						if (unk_0x7DE17ACDD8BA2642(func_72()) && unk_0xEAEF747543427AC5(func_72(), iLocal_91, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_668 = true;
						}
					}
				}
				else
				{
					if (!func_80())
					{
						bLocal_669 = true;
					}
					if (unk_0x7DE17ACDD8BA2642(func_72()))
					{
						if (!unk_0xEAEF747543427AC5(func_72(), iLocal_91, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_668 = false;
						}
					}
				}
				if (bLocal_669)
				{
					if (!func_81())
					{
						if (!func_182())
						{
							func_183();
						}
					}
				}
				else
				{
					switch (iLocal_670)
					{
						case 0:
							if (((!bLocal_668 && func_167()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_CHT", 4, 0, 0, 0))
								{
									iLocal_670++;
								}
							}
							break;
						
						case 1:
							if (((!bLocal_668 && func_167()) && !func_81()) && !func_80())
							{
								if (func_163("REPAP_RES1"))
								{
									iLocal_671 = unk_0xA5E11AF0A2B928C1();
									iLocal_670++;
								}
							}
							break;
						
						case 2:
							if ((unk_0xA5E11AF0A2B928C1() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_167()) && !func_81()) && !func_80())
								{
									if (func_163("REPAP_CHT2"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 3:
							if (((!bLocal_668 && func_167()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP2L", 4, 0, 0, 0))
								{
									iLocal_671 = unk_0xA5E11AF0A2B928C1();
									iLocal_670++;
								}
							}
							break;
						
						case 4:
							if ((unk_0xA5E11AF0A2B928C1() - iLocal_671) > 6000)
							{
								if (func_24() == 0)
								{
									if (func_164("REPAP_CHT3M", ((func_167() && !func_81()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_24() == 1)
								{
									if (func_164("REPAP_CHT3F", ((func_167() && !func_81()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_164("REPAP_CHT3T", ((func_167() && !func_81()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 4)
								{
									iLocal_671 = unk_0xA5E11AF0A2B928C1();
								}
							}
							break;
						
						case 5:
							if ((unk_0xA5E11AF0A2B928C1() - iLocal_671) > 8000)
							{
								if (func_24() == 0)
								{
									if (func_164("REPAP_CHT4M", ((func_167() && !func_81()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_24() == 1)
								{
									if (func_164("REPAP_CHT4F", ((func_167() && !func_81()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_164("REPAP_CHT4T", ((func_167() && !func_81()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 5)
								{
									iLocal_671 = unk_0xA5E11AF0A2B928C1();
								}
							}
							break;
						
						case 6:
							if ((unk_0xA5E11AF0A2B928C1() - iLocal_671) > 8000)
							{
								if (func_24() == 0)
								{
									if (func_164("REPAP_CHT5M", ((func_167() && !func_81()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_24() == 1)
								{
									if (func_164("REPAP_CHT5F", ((func_167() && !func_81()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_164("REPAP_CHT5T", ((func_167() && !func_81()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 6)
								{
									iLocal_671 = unk_0xA5E11AF0A2B928C1();
								}
							}
							break;
						
						case 7:
							if ((unk_0xA5E11AF0A2B928C1() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_167()) && !func_81()) && !func_80())
								{
									if (func_163("REPAP_CHT6"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 8:
							if (((!bLocal_668 && func_167()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP6L", 4, 0, 0, 0))
								{
									iLocal_671 = unk_0xA5E11AF0A2B928C1();
									iLocal_670++;
								}
							}
							break;
						
						case 9:
							if ((unk_0xA5E11AF0A2B928C1() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_167()) && !func_81()) && !func_80())
								{
									if (func_163("REPAP_CHT7"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 10:
							if (((!bLocal_668 && func_167()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP7L", 4, 0, 0, 0))
								{
									iLocal_671 = unk_0xA5E11AF0A2B928C1();
									iLocal_670++;
								}
							}
							break;
						
						case 11:
							if ((unk_0xA5E11AF0A2B928C1() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_167()) && !func_81()) && !func_80())
								{
									if (func_163("REPAP_CHT8"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 12:
							if (((!bLocal_668 && func_167()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP8L", 4, 0, 0, 0))
								{
									iLocal_670++;
								}
							}
							break;
						}
				}
				if (!unk_0x7DE17ACDD8BA2642(func_72()))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_369++;
					func_149();
					if (!Global_3 && !bLocal_70)
					{
						iLocal_49 = 6;
					}
				}
				if (Global_3 || bLocal_70)
				{
					if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), 244.2175f, 441.0128f, 126.2767f, 33.5f, 40f, 14.75f, 0, 1, 0) && func_73())
					{
						iLocal_49 = 4;
						iLocal_85 = unk_0xA5E11AF0A2B928C1();
					}
				}
				break;
			
			case 3:
				if (unk_0x83666F9FB8FEBD4B() > 3000 && func_73())
				{
					func_188("MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME");
					if (func_5(&Local_395, cLocal_372, "REPAP_LOS", 4, 0, 0, 0))
					{
						func_187(2);
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
		}
		func_174(0);
	}
}

int func_182()
{
	int iVar0;
	
	iVar0 = func_30();
	if ((unk_0xA5E11AF0A2B928C1() - iLocal_666) > 5000)
	{
		if (unk_0x7DE17ACDD8BA2642(iLocal_91) && unk_0xE0D346789C5160EB(iLocal_86, iLocal_91, 0))
		{
			if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_91, 1))
			{
				if (iVar0 != -1 && (unk_0xA5E11AF0A2B928C1() - Local_204[iVar0 /*18*/].f_12) < 3000)
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_WHINE", 4, 0, 0, 0))
					{
						iLocal_666 = unk_0xA5E11AF0A2B928C1();
						return 1;
					}
				}
			}
			else if (func_5(&Local_395, cLocal_372, "REPAP_EXIT", 4, 0, 0, 0))
			{
				iLocal_666 = unk_0xA5E11AF0A2B928C1();
				return 1;
			}
		}
	}
	return 0;
}

void func_183()
{
	int iVar0;
	
	if ((unk_0xA5E11AF0A2B928C1() - iLocal_564) > iLocal_565)
	{
		if ((!unk_0x66599E73DBA5A850(iLocal_86) && unk_0x7DE17ACDD8BA2642(func_72())) && !unk_0x66599E73DBA5A850(func_72()))
		{
			if (unk_0x2E496FE654DA4166(Local_63, unk_0x30BE8A934C020461(func_72(), 1), 1) < 8f)
			{
				iVar0 = unk_0x15A88CFAAFFC6C4B(0, 5);
				func_23(&Local_395, 4);
				func_23(&Local_395, 5);
				func_23(&Local_395, 6);
				func_23(&Local_395, 7);
				switch (iVar0)
				{
					case 0:
						func_22(&Local_395, 4, func_72(), "PAPARAZZO", 0, 1);
						if (unk_0x7DE17ACDD8BA2642(Local_395[4 /*10*/]) && !unk_0x66599E73DBA5A850(Local_395[4 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_PP", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0xA5E11AF0A2B928C1();
								iLocal_565 = unk_0x15A88CFAAFFC6C4B(2000, 3000);
							}
						}
						break;
					
					case 1:
						func_22(&Local_395, 4, func_72(), "PAPARAZZO", 0, 1);
						if (unk_0x7DE17ACDD8BA2642(Local_395[4 /*10*/]) && !unk_0x66599E73DBA5A850(Local_395[4 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL1", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0xA5E11AF0A2B928C1();
								iLocal_565 = unk_0x15A88CFAAFFC6C4B(2000, 3000);
							}
						}
						break;
					
					case 2:
						func_22(&Local_395, 5, func_72(), "PAP2", 0, 1);
						if (unk_0x7DE17ACDD8BA2642(Local_395[5 /*10*/]) && !unk_0x66599E73DBA5A850(Local_395[5 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL2", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0xA5E11AF0A2B928C1();
								iLocal_565 = unk_0x15A88CFAAFFC6C4B(2000, 3000);
							}
						}
						break;
					
					case 3:
						func_22(&Local_395, 6, func_72(), "PAP3", 0, 1);
						if (unk_0x7DE17ACDD8BA2642(Local_395[6 /*10*/]) && !unk_0x66599E73DBA5A850(Local_395[6 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL3", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0xA5E11AF0A2B928C1();
								iLocal_565 = unk_0x15A88CFAAFFC6C4B(2000, 3000);
							}
						}
						break;
					
					case 4:
						func_22(&Local_395, 7, func_72(), "PAP4", 0, 1);
						if (unk_0x7DE17ACDD8BA2642(Local_395[7 /*10*/]) && !unk_0x66599E73DBA5A850(Local_395[7 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL4", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0xA5E11AF0A2B928C1();
								iLocal_565 = unk_0x15A88CFAAFFC6C4B(2000, 3000);
							}
						}
						break;
					}
				}
			}
	}
}

void func_184()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char cVar3[24];
	char* sVar9;
	char cVar10[24];
	var uVar16;
	
	if (!unk_0x66599E73DBA5A850(iLocal_86))
	{
		if (unk_0xCE4AAA035282336C(uLocal_360))
		{
			unk_0xA4B6A532E7DDE178(uLocal_360, iLocal_664);
		}
		switch (iLocal_369)
		{
			case 0:
				unk_0x28818732C8F0F80E("random@paparazzi@peek");
				unk_0x28818732C8F0F80E("random@paparazzi@trans");
				unk_0x28818732C8F0F80E("random@paparazzi@wait");
				if ((unk_0x2BBF749E555360DC("random@paparazzi@peek") && unk_0x2BBF749E555360DC("random@paparazzi@trans")) && unk_0x2BBF749E555360DC("random@paparazzi@wait"))
				{
					uLocal_625 = unk_0x191673E3F99212B2(Local_653, Local_656, 2);
					unk_0x468D976993BF7FE1(iLocal_86, uLocal_625, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 1, 0, 1148846080, 0);
					unk_0xEDB03CCB50D11479(iLocal_86, unk_0xC1A5EC5C986B98AD(), -1, 4, 4);
					sLocal_626[0] = "peek_a";
					sLocal_626[1] = "peek_b";
					sLocal_626[2] = "peek_c";
					unk_0xFF2AF80F9EC7704C(0.2f);
					iLocal_623 = 0;
					iLocal_659 = 0;
					iLocal_664 = 0;
					iLocal_74 = 1;
					iLocal_660 = 0;
					iLocal_71 = 0;
					fLocal_661 = 0f;
					iLocal_369++;
				}
				break;
			
			case 1:
				if (BitTest(iLocal_660, 0))
				{
					if (!BitTest(iLocal_660, 1))
					{
						unk_0xECDAB41968FF21A8(&iLocal_660, true);
					}
					else
					{
						iLocal_660 = 0;
					}
				}
				iVar2 = 0;
				bVar0 = unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), Local_639, Local_642, fLocal_645, 0, 1, 0);
				bVar1 = unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), Local_632, Local_635, fLocal_638, 0, 1, 0);
				if (unk_0x4310A0DB886F9FED(sLocal_631, "right_"))
				{
					if (bVar1)
					{
						sLocal_631 = "left_";
						iVar2 = 1;
					}
				}
				else if (bVar0)
				{
					sLocal_631 = "right_";
					iVar2 = 1;
				}
				if ((unk_0x411B750250543BD0(uLocal_625) && unk_0xABF98B1999FE64CA(uLocal_625) > 0.9f) || iVar2)
				{
					if (iLocal_660 == 0)
					{
						unk_0x909F139DC199D8E0(iLocal_86);
						iLocal_630++;
						if (iLocal_630 >= 3)
						{
							iLocal_630 = 0;
						}
						StringCopy(&cVar3, sLocal_631, 24);
						StringConCat(&cVar3, sLocal_626[iLocal_630], 24);
						uLocal_625 = unk_0x191673E3F99212B2(Local_653, Local_656, 2);
						unk_0x468D976993BF7FE1(iLocal_86, uLocal_625, "random@paparazzi@peek", &cVar3, 4f, -4f, 1, 0, 1148846080, 0);
						unk_0xECDAB41968FF21A8(&iLocal_660, false);
					}
				}
				if (bVar0 || bVar1)
				{
					if (fLocal_661 <= 20f)
					{
						fLocal_661 = (fLocal_661 + unk_0x290D4E218346D595());
					}
					if ((unk_0xA5E11AF0A2B928C1() - iLocal_624) > 5000 && iLocal_660 == 0)
					{
						if (unk_0xB7A628320EFF8E47(Local_60, Local_63) < (22.2f * 22.2f))
						{
							if (fLocal_661 < 10f)
							{
								if (iLocal_662)
								{
									sVar9 = "REPAP_SHT1";
								}
								else
								{
									sVar9 = "REPAP_SHT2";
								}
							}
							else
							{
								sVar9 = "REPAP_PRT";
							}
							if (func_24() == 1)
							{
								func_22(&Local_395, 1, unk_0xC1A5EC5C986B98AD(), "FRANKLIN", 0, 1);
							}
							else if (func_24() == 0)
							{
								func_22(&Local_395, 1, unk_0xC1A5EC5C986B98AD(), "MICHAEL", 0, 1);
							}
							else
							{
								func_22(&Local_395, 1, unk_0xC1A5EC5C986B98AD(), "TREVOR", 0, 1);
							}
							if (func_5(&Local_395, cLocal_372, sVar9, 4, 0, 0, 0))
							{
								iLocal_662 = 1;
								if (!unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iLocal_86, 7f, 7f, 7f, 0, 1, 0))
								{
									unk_0x909F139DC199D8E0(iLocal_86);
									StringCopy(&cVar10, sLocal_631, 24);
									StringConCat(&cVar10, "come_here", 24);
									uLocal_625 = unk_0x191673E3F99212B2(Local_653, Local_656, 2);
									unk_0x468D976993BF7FE1(iLocal_86, uLocal_625, "random@paparazzi@peek", &cVar10, 4f, -4f, 1, 0, 1148846080, 0);
									unk_0xECDAB41968FF21A8(&iLocal_660, false);
								}
								iLocal_624 = unk_0xA5E11AF0A2B928C1();
							}
						}
					}
				}
				if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), Local_646, Local_649, fLocal_652, 0, 1, 0) && iLocal_660 == 0)
				{
					if (unk_0xCE4AAA035282336C(uLocal_359))
					{
						unk_0x45533C09A6C9B409(&uLocal_359);
						if (!unk_0xCE4AAA035282336C(uLocal_360))
						{
							uLocal_360 = func_189(iLocal_86, 0, 145);
						}
					}
					unk_0x909F139DC199D8E0(iLocal_86);
					uLocal_625 = unk_0x191673E3F99212B2(Local_653, Local_656, 2);
					if (bVar1)
					{
						unk_0x468D976993BF7FE1(iLocal_86, uLocal_625, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					else
					{
						unk_0x468D976993BF7FE1(iLocal_86, uLocal_625, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					unk_0xECDAB41968FF21A8(&iLocal_660, false);
					iLocal_369++;
				}
				break;
			
			case 2:
				if (unk_0x411B750250543BD0(uLocal_625) && unk_0xABF98B1999FE64CA(uLocal_625) > 0.9f)
				{
					if (unk_0xF5F493B789EA063E(iLocal_86, joaat("script_task_perform_sequence")) != 1)
					{
						unk_0x909F139DC199D8E0(iLocal_86);
						unk_0x3EE48ADC8C7F5CC4(iLocal_86, "random@paparazzi@wait", "wait_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
						iLocal_621 = 2;
						unk_0xC1B1E9A034A63A62(0);
					}
					iLocal_369++;
				}
				break;
			
			case 3:
				if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
				{
					if (func_186())
					{
						unk_0x0E4B6CF706BE8AA4(&iLocal_91);
						iLocal_91 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
						unk_0x85BAE84748AD1A23(iLocal_91, 1, 1);
						unk_0x495ED6976429C1E8(iLocal_91, 0, 0);
						unk_0x439314AD4FC79186(iLocal_91, 1);
						bLocal_368 = true;
					}
				}
				if (!bLocal_368)
				{
					unk_0x439314AD4FC79186(iLocal_91, 1);
					if (func_148(&Local_395, cLocal_372, "REPAP_EXP", "REPAP_EXP_2", 4, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_664 = 1;
						iLocal_369 = 100;
					}
				}
				else if (func_148(&Local_395, cLocal_372, "REPAP_EXPB", "REPAP_EXPB_2", 4, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_664 = 1;
					iLocal_369++;
				}
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					func_185(Local_87, 1);
				}
				break;
			
			case 4:
				func_55();
				if (unk_0xFBD273FDBCF0C5BD(iLocal_91, 0))
				{
					if (unk_0xEAEF747543427AC5(iLocal_91, iLocal_86, Global_19 + Vector(2f, 12f, 12f), 0, 1, 0) && !bLocal_368)
					{
						if (unk_0xF5F493B789EA063E(iLocal_86, joaat("script_task_perform_sequence")) != 1 && !iLocal_659)
						{
							unk_0xDBC7406226B5540E(&uVar16);
							unk_0x7D9A648CC1936BDA(0, 259.2552f, 122.2986f, 100.441f, 1f, 20000, 0.25f, 0, 1193033728);
							unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
							unk_0xF2CFC6EC8C85FA78(uVar16);
							unk_0x3D7110D966B0CEA2(iLocal_86, uVar16);
							unk_0xBB6027D1D193CBA6(iLocal_86, 0, 0);
							unk_0x63EF69C6969A3D26(&uVar16);
							iLocal_659 = 1;
						}
						else
						{
							unk_0xC99325818121C4B9(iLocal_86, 1f);
							func_185(259.2552f, 122.2986f, 100.441f, 0);
						}
					}
					else
					{
						func_185(Local_87, 1);
					}
					if (!bLocal_368)
					{
						if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_91, 0))
						{
							if (unk_0xCE4AAA035282336C(uLocal_361))
							{
								unk_0x45533C09A6C9B409(&uLocal_361);
							}
							if (!unk_0xCE4AAA035282336C(uLocal_360))
							{
								uLocal_360 = func_189(iLocal_86, 0, 145);
							}
						}
					}
					if ((unk_0xEAEF747543427AC5(iLocal_91, iLocal_86, Global_19, 0, 1, 0) && func_179(iLocal_91)) && (unk_0x83666F9FB8FEBD4B() > 6000 || !bLocal_368))
					{
						if (!iLocal_623)
						{
							func_109();
							if (unk_0xA8F00D68C81685D6(unk_0xC1A5EC5C986B98AD()))
							{
								if (func_24() == 1)
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_ONF", 4, 0, 0, 0))
									{
										iLocal_623 = 1;
									}
								}
								else if (func_24() == 0)
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_ONM", 4, 0, 0, 0))
									{
										iLocal_623 = 1;
									}
								}
								else if (func_5(&Local_395, cLocal_372, "REPAP_ONT", 4, 0, 0, 0))
								{
									iLocal_623 = 1;
								}
							}
							else if (func_24() == 1)
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_INF", 4, 0, 0, 0))
								{
									iLocal_623 = 1;
								}
							}
							else if (func_24() == 0)
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_INM", 4, 0, 0, 0))
								{
									iLocal_623 = 1;
								}
							}
							else if (func_5(&Local_395, cLocal_372, "REPAP_INT", 4, 0, 0, 0))
							{
								iLocal_623 = 1;
							}
						}
						else
						{
							if (!bLocal_368)
							{
								iLocal_369 = -5;
							}
							else
							{
								iLocal_369++;
							}
							unk_0x909F139DC199D8E0(iLocal_86);
							unk_0xD30E9CAE1FEA1C7E(iLocal_86, iLocal_91, -1, func_177(iLocal_91), 1f, 8388608, 0);
						}
					}
				}
				break;
			
			case -5:
				if (bLocal_368)
				{
					func_185(Local_87, 1);
				}
				else
				{
					func_185(259.2552f, 122.2986f, 100.441f, 0);
				}
				if (unk_0xFBD273FDBCF0C5BD(iLocal_91, 0))
				{
					if (func_161(iLocal_91, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						iLocal_369 = 5;
					}
				}
				break;
			
			case 5:
				if (unk_0xFBD273FDBCF0C5BD(iLocal_91, 0))
				{
					if (!unk_0x66599E73DBA5A850(iLocal_86) && unk_0xE0D346789C5160EB(iLocal_86, iLocal_91, 0))
					{
						if (unk_0xCE4AAA035282336C(uLocal_360))
						{
							unk_0x45533C09A6C9B409(&uLocal_360);
						}
						unk_0x1F9F6C767BE640D5(unk_0xC1A5EC5C986B98AD());
						func_187(1);
					}
					else
					{
						if (!Global_3 && !bLocal_70)
						{
							if ((unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_91, 0) && !unk_0xE0D346789C5160EB(iLocal_86, iLocal_91, 1)) && !unk_0x9DC9E896F189AAA5(iLocal_91, 225.1779f, 125.6632f, 113.6647f, 262.3032f, 111.8771f, 97.16339f, 37f, 0, 1, 0))
							{
								if (bLocal_368)
								{
									unk_0x474AA9EF29305EA8(iLocal_86, 2, 1);
									sLocal_371 = "REPAP_GUP";
									func_187(6);
								}
								else
								{
									unk_0x8FE445B0989D8C71(unk_0x93E99A2DBCBA9CFA(), 1, 0);
									unk_0x474AA9EF29305EA8(iLocal_86, 2, 1);
									sLocal_371 = "REPAP_CP";
									func_187(6);
								}
							}
						}
						if (!unk_0xE0D346789C5160EB(iLocal_86, iLocal_91, 0))
						{
							if (unk_0xF5F493B789EA063E(iLocal_86, joaat("script_task_enter_vehicle")) != 1)
							{
								unk_0x909F139DC199D8E0(iLocal_86);
								unk_0xD30E9CAE1FEA1C7E(iLocal_86, iLocal_91, -1, func_177(iLocal_91), 1f, 8388608, 0);
							}
							else if (unk_0x2A488C176D52CCA5(Local_63, unk_0x7394CB479CCA24AF(iLocal_91, 1f, 0f, 0f)) < 1f)
							{
								unk_0xC99325818121C4B9(iLocal_86, 1f);
							}
						}
					}
				}
				break;
			
			case 100:
				if (unk_0xFBD273FDBCF0C5BD(iLocal_91, 0))
				{
					if (!func_80())
					{
						func_109();
						if (func_24() == 1)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_YSF", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_24() == 0)
						{
							func_109();
							if (func_5(&Local_395, cLocal_372, "REPAP_YSM", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
							iLocal_74 = 0;
						}
						else if (func_5(&Local_395, cLocal_372, "REPAP_YST", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
				if (iLocal_369 == 101)
				{
					fLocal_665 = 0f;
				}
				func_185(Local_87, 1);
				break;
			
			case 101:
				if (unk_0xB7A628320EFF8E47(Local_60, Local_63) < 49f && !unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
				{
					if (unk_0xDC58AE028CB223BA(unk_0xC1A5EC5C986B98AD()) < 3f)
					{
						fLocal_665 = (fLocal_665 + unk_0x290D4E218346D595());
					}
					else
					{
						fLocal_665 = (fLocal_665 - (unk_0x290D4E218346D595() * 2f));
					}
					if (fLocal_665 > 10f)
					{
						if (func_5(&Local_395, cLocal_372, "REPAP_PRT", 4, 0, 0, 0))
						{
							fLocal_665 = 0f;
						}
					}
				}
				if (unk_0xFBD273FDBCF0C5BD(iLocal_91, 0))
				{
					if (!unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_91, 0) && func_186())
					{
						bLocal_368 = true;
						iLocal_74 = 1;
						iLocal_91 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
						unk_0x85BAE84748AD1A23(iLocal_91, 1, 1);
					}
					if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_91, 0))
					{
						if (unk_0xCE4AAA035282336C(uLocal_361))
						{
							unk_0x45533C09A6C9B409(&uLocal_361);
						}
						if (!unk_0xCE4AAA035282336C(uLocal_360))
						{
							uLocal_360 = func_189(iLocal_86, 0, 145);
						}
					}
					else
					{
						if (unk_0xCE4AAA035282336C(uLocal_360))
						{
							unk_0x45533C09A6C9B409(&uLocal_360);
						}
						if (!unk_0xCE4AAA035282336C(uLocal_361))
						{
							uLocal_361 = func_175(iLocal_91, 0, 0);
						}
					}
					if (unk_0x44A6C9475C859B45(unk_0xC1A5EC5C986B98AD(), iLocal_91))
					{
						if (unk_0xCE4AAA035282336C(uLocal_361))
						{
							unk_0x45533C09A6C9B409(&uLocal_361);
						}
						if (!unk_0xCE4AAA035282336C(uLocal_360))
						{
							uLocal_360 = func_189(iLocal_86, 0, 145);
						}
						func_188("MAG_2_ESCAPE_PAP_CHASE");
						iLocal_369 = 4;
					}
					if (!iLocal_74)
					{
						if (unk_0xB7A628320EFF8E47(Local_60, Local_66) < 9f && func_24() == 0)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_MIKE", 4, 0, 0, 0))
							{
								iLocal_74 = 1;
							}
						}
					}
				}
				func_185(Local_87, 1);
				break;
		}
		if (!Global_3 && !bLocal_70)
		{
			if (unk_0xFBD273FDBCF0C5BD(iLocal_91, 0))
			{
				if (unk_0x2A488C176D52CCA5(Local_60, Local_87) > 75f)
				{
					func_187(6);
				}
				if (func_200())
				{
					func_187(5);
				}
			}
		}
		if (!bLocal_368)
		{
			if (!unk_0xFBD273FDBCF0C5BD(iLocal_91, 0))
			{
				if (!Global_3 && !bLocal_70)
				{
					func_187(5);
				}
			}
			else
			{
				if (!bLocal_368)
				{
					if (!Global_3 && !bLocal_70)
					{
						if (unk_0x2935B4D6CE81318D(iLocal_91) < iLocal_83)
						{
							if (unk_0x7559C38E6535AB89(iLocal_91, unk_0xC1A5EC5C986B98AD(), 1))
							{
								iLocal_84 = (iLocal_84 + (iLocal_83 - unk_0x2935B4D6CE81318D(iLocal_91)));
							}
							unk_0x5CE354E3C73D2002(iLocal_91);
						}
						if (iLocal_84 > 250)
						{
							if (unk_0xA1DF058198143448(iLocal_86, iLocal_91) && unk_0x2A488C176D52CCA5(Local_63, Local_66) < 25f)
							{
								func_187(5);
							}
						}
					}
				}
				iLocal_83 = unk_0x2935B4D6CE81318D(iLocal_91);
			}
		}
		if (!unk_0x66599E73DBA5A850(iLocal_86))
		{
			if (unk_0xC78375EA6037A7DB(iLocal_86))
			{
				if (!Global_3 && !bLocal_70)
				{
					func_187(5);
				}
			}
		}
	}
}

void func_185(struct<3> Param0, bool bParam3)
{
	if (unk_0x2A488C176D52CCA5(Local_63, Param0) > 2.5f)
	{
		if (unk_0xF5F493B789EA063E(iLocal_86, joaat("script_task_follow_nav_mesh_to_coord")) != 1)
		{
			unk_0x7D9A648CC1936BDA(iLocal_86, Param0, 1f, -1, 0.25f, 0, 1193033728);
		}
	}
	else if (unk_0xF5F493B789EA063E(iLocal_86, joaat("script_task_follow_nav_mesh_to_coord")) != 1)
	{
		func_145(bParam3);
		unk_0xEDB03CCB50D11479(iLocal_86, unk_0xC1A5EC5C986B98AD(), -1, 16, 2);
	}
}

bool func_186()
{
	return (((((unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) && unk_0xFBD273FDBCF0C5BD(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 0)) && (unk_0xF66D3BDEBE2E64B9(unk_0x504B9BB48D41C264(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0))) || unk_0x6CEF99E452573979(unk_0x504B9BB48D41C264(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0))))) && unk_0x2E240694D642679A(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)) > 0) && func_179(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0))) && !Global_112695);
}

void func_187(int iParam0)
{
	iLocal_47 = iParam0;
	iLocal_369 = 0;
}

void func_188(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_560)
	{
		if (!unk_0x4310A0DB886F9FED(iLocal_560[iVar0], sParam0))
		{
			if (unk_0xD19C2C73F4D74992(iLocal_560[iVar0]))
			{
				unk_0x3FA8C73B5856A3E4(iLocal_560[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_560)
	{
		if (unk_0x4310A0DB886F9FED(iLocal_560[iVar0], sParam0))
		{
			if (!unk_0xD19C2C73F4D74992(iLocal_560[iVar0]))
			{
				unk_0xAEA29937C5240DA0(iLocal_560[iVar0]);
			}
		}
		iVar0++;
	}
}

var func_189(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_176(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCE4AAA035282336C(uVar0)) && unk_0x42FA33BDEDF21186(&(Global_2028[iParam2 /*29*/].f_3)))
	{
		unk_0x4049FDC177C92D4B(uVar0, &(Global_2028[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_190(int iParam0)
{
	if (func_193())
	{
		Global_113638 = 1;
		Global_113635 = unk_0xA5E11AF0A2B928C1();
		if (func_95(Global_113637))
		{
			func_191(0);
		}
		unk_0x97DBA2AA6C70AFC7(1, "RE_TITLE");
		if (iParam0 && func_95(Global_113637))
		{
			unk_0x01680CFD15C1C85D();
		}
		return 1;
	}
	return 0;
}

void func_191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113648.f_24997.f_2 < 3)
			{
				if (!unk_0x5835DDABA96BB199())
				{
					func_172(func_192(iParam0), -1);
					Global_113648.f_24997.f_2++;
					unk_0xECDAB41968FF21A8(&Global_113644, false);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113644, 1))
			{
				if (!unk_0x5835DDABA96BB199())
				{
					func_172(func_192(iParam0), -1);
					Global_113648.f_24997.f_3++;
					unk_0xECDAB41968FF21A8(&Global_113644, true);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113644, 2))
			{
				if (!unk_0x5835DDABA96BB199())
				{
					func_172(func_192(iParam0), -1);
					Global_113648.f_24997.f_4++;
					unk_0xECDAB41968FF21A8(&Global_113644, 2);
				}
			}
			break;
	}
}

char* func_192(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_193()
{
	switch (func_194(&Global_32223, 0, 5, 0, unk_0xAF908D5E2416DA93()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_194(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98159.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_198(0))
		{
			return 0;
		}
		Global_43221++;
		*uParam0 = Global_43221;
		unk_0xA7225B88CE344621(unk_0x5DC3DCA82C806319(), 0);
		Global_23131.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xDAD6345C5D317E79(8);
		}
		Global_43257 = iParam2;
		Global_43219 = *uParam0;
		Global_43220 = iParam4;
		Global_43218 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43218 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43218)
			{
				if (Global_43224[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43219 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_196(iParam2))
		{
			return 0;
		}
		if (Global_43218 == 8)
		{
			return 0;
		}
		Global_43221++;
		*uParam0 = Global_43221;
		Global_43224[Global_43218 /*4*/] = Global_43221;
		Global_43224[Global_43218 /*4*/].f_1 = iParam1;
		Global_43224[Global_43218 /*4*/].f_2 = iParam2;
		Global_43224[Global_43218 /*4*/].f_3 = 0;
		Global_43218++;
		if (iParam4 != 0)
		{
			func_195(uParam0, iParam4);
		}
	}
	return 2;
}

void func_195(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_43218 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43218)
	{
		if (Global_43224[iVar0 /*4*/] == *uParam0)
		{
			Global_43224[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_196(int iParam0)
{
	return func_197(iParam0, Global_43257);
}

int func_197(int iParam0, int iParam1)
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

int func_198(int iParam0)
{
	if (Global_43257 == 15)
	{
		return 0;
	}
	if (func_196(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_199()
{
	int iVar0;
	
	if (!unk_0x66599E73DBA5A850(iLocal_86))
	{
		unk_0x474AA9EF29305EA8(iLocal_86, 2, 0);
		unk_0xC6C9BF71106ABCAC(iLocal_86, unk_0xC1A5EC5C986B98AD(), 300f, -1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (!unk_0x66599E73DBA5A850(Local_204[iVar0 /*18*/]))
		{
			unk_0xC6C9BF71106ABCAC(Local_204[iVar0 /*18*/], unk_0xC1A5EC5C986B98AD(), 300f, -1, 0, 0);
			unk_0x8386356641D0DED1(Local_204[iVar0 /*18*/], -2065892691);
			unk_0xC5B2830898581862(Local_204[iVar0 /*18*/], 0);
		}
		iVar0++;
	}
}

int func_200()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_204.f_0)
	{
		if (unk_0x7DE17ACDD8BA2642(Local_204[iVar1 /*18*/]) && !unk_0x66599E73DBA5A850(Local_204[iVar1 /*18*/]))
		{
			if (unk_0x51DF6895C236B231(Local_204[iVar1 /*18*/]))
			{
				if (((unk_0x612907CF3208D1E3(Local_204[iVar1 /*18*/].f_6, 5f, 1) || unk_0xD612176B6DC58EF7(-1, Local_204[iVar1 /*18*/].f_6, 10f)) || unk_0xC78375EA6037A7DB(Local_204[iVar1 /*18*/])) || (iLocal_386[iVar1] > 10 && iLocal_47 == 0))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	if (iLocal_349 > 1)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 < Local_131.f_0)
	{
		if (unk_0x7DE17ACDD8BA2642(Local_131[iVar1 /*18*/]))
		{
			if (unk_0xFBD273FDBCF0C5BD(Local_131[iVar1 /*18*/], 0) && unk_0x51DF6895C236B231(Local_131[iVar1 /*18*/]))
			{
				if (unk_0x584CD220C093B0B4(Local_131[iVar1 /*18*/]))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_201()
{
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x7A2C98D06C9C1956(unk_0xC1A5EC5C986B98AD())) > 1369f && !func_212())
		{
			return 0;
		}
	}
	if (func_208())
	{
		return 1;
	}
	if (func_202(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_202(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (func_26(func_24()))
		{
			iVar36 = func_100();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_113648.f_18576[iVar32 /*6*/], 2) && !BitTest(Global_113648.f_18576[iVar32 /*6*/], 3))
				{
					func_203(iVar32, &Var0);
					fVar35 = unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_203(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_204(uParam1, "Abigail1", func_206(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 1:
			func_204(uParam1, "Abigail2", func_206(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 2:
			func_204(uParam1, "Barry1", func_206(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 3:
			func_204(uParam1, "Barry2", func_206(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 4:
			func_204(uParam1, "Barry3", func_206(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 5:
			func_204(uParam1, "Barry3A", func_206(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 6:
			func_204(uParam1, "Barry3C", func_206(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 7:
			func_204(uParam1, "Barry4", func_206(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_205(iParam0), 0, 0);
			break;
		
		case 8:
			func_204(uParam1, "Dreyfuss1", func_206(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 9:
			func_204(uParam1, "Epsilon1", func_206(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 10:
			func_204(uParam1, "Epsilon2", func_206(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 11:
			func_204(uParam1, "Epsilon3", func_206(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 12:
			func_204(uParam1, "Epsilon4", func_206(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 13:
			func_204(uParam1, "Epsilon5", func_206(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 14:
			func_204(uParam1, "Epsilon6", func_206(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 15:
			func_204(uParam1, "Epsilon7", func_206(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 16:
			func_204(uParam1, "Epsilon8", func_206(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 17:
			func_204(uParam1, "Extreme1", func_206(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 18:
			func_204(uParam1, "Extreme2", func_206(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 19:
			func_204(uParam1, "Extreme3", func_206(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 20:
			func_204(uParam1, "Extreme4", func_206(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 21:
			func_204(uParam1, "Fanatic1", func_206(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_205(iParam0), 1, 0);
			break;
		
		case 22:
			func_204(uParam1, "Fanatic2", func_206(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_205(iParam0), 1, 0);
			break;
		
		case 23:
			func_204(uParam1, "Fanatic3", func_206(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_205(iParam0), 0, 1);
			break;
		
		case 24:
			func_204(uParam1, "Hao1", func_206(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_205(iParam0), 0, 1);
			break;
		
		case 25:
			func_204(uParam1, "Hunting1", func_206(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 26:
			func_204(uParam1, "Hunting2", func_206(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 27:
			func_204(uParam1, "Josh1", func_206(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 28:
			func_204(uParam1, "Josh2", func_206(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 29:
			func_204(uParam1, "Josh3", func_206(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 30:
			func_204(uParam1, "Josh4", func_206(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 31:
			func_204(uParam1, "Maude1", func_206(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 32:
			func_204(uParam1, "Minute1", func_206(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 33:
			func_204(uParam1, "Minute2", func_206(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 34:
			func_204(uParam1, "Minute3", func_206(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 35:
			func_204(uParam1, "MrsPhilips1", func_206(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 36:
			func_204(uParam1, "MrsPhilips2", func_206(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 37:
			func_204(uParam1, "Nigel1", func_206(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 38:
			func_204(uParam1, "Nigel1A", func_206(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 39:
			func_204(uParam1, "Nigel1B", func_206(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_205(iParam0), 1, 1);
			break;
		
		case 40:
			func_204(uParam1, "Nigel1C", func_206(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_205(iParam0), 1, 1);
			break;
		
		case 41:
			func_204(uParam1, "Nigel1D", func_206(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_205(iParam0), 1, 1);
			break;
		
		case 42:
			func_204(uParam1, "Nigel2", func_206(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 43:
			func_204(uParam1, "Nigel3", func_206(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 44:
			func_204(uParam1, "Omega1", func_206(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 45:
			func_204(uParam1, "Omega2", func_206(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 46:
			func_204(uParam1, "Paparazzo1", func_206(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 47:
			func_204(uParam1, "Paparazzo2", func_206(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 48:
			func_204(uParam1, "Paparazzo3", func_206(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 49:
			func_204(uParam1, "Paparazzo3A", func_206(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 50:
			func_204(uParam1, "Paparazzo3B", func_206(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 51:
			func_204(uParam1, "Paparazzo4", func_206(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 52:
			func_204(uParam1, "Rampage1", func_206(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 54:
			func_204(uParam1, "Rampage3", func_206(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 55:
			func_204(uParam1, "Rampage4", func_206(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 56:
			func_204(uParam1, "Rampage5", func_206(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 53:
			func_204(uParam1, "Rampage2", func_206(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 57:
			func_204(uParam1, "TheLastOne", func_206(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 58:
			func_204(uParam1, "Tonya1", func_206(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 59:
			func_204(uParam1, "Tonya2", func_206(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 60:
			func_204(uParam1, "Tonya3", func_206(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 61:
			func_204(uParam1, "Tonya4", func_206(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 62:
			func_204(uParam1, "Tonya5", func_206(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_204(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_206(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_207(iParam0) };
	if (unk_0x2AC37494BBF1DB16(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_207(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_208()
{
	if (func_211() && !func_212())
	{
		return 1;
	}
	if (func_210() && func_209())
	{
		return 1;
	}
	return 0;
}

bool func_209()
{
	return Global_113366 > 0;
}

int func_210()
{
	if (Global_97603 != -1)
	{
		return 1;
	}
	return 0;
}

int func_211()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 20);
	}
	return 0;
}

int func_212()
{
	if (unk_0xCC17806DB0C41C19())
	{
		if (unk_0x27654E358E874F45() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_213()
{
	func_215(39, 1);
	func_215(40, 1);
	func_215(41, 1);
	func_215(42, 1);
	func_215(43, 1);
	func_215(44, 1);
	uLocal_359 = func_214(Local_87);
	iLocal_86 = unk_0x69FDD9508259E5B5(26, joaat("a_f_y_bevhills_03"), Local_87, fLocal_90, 1, 1);
	unk_0x7FE5E05BE63F6CB8(iLocal_86, 1, 1);
	unk_0x7FE5E05BE63F6CB8(iLocal_86, 17, 1);
	unk_0x474AA9EF29305EA8(iLocal_86, 128, 1);
	unk_0x71A535529C1CA5DF(iLocal_86, 1);
	unk_0x841E34BB01496B96(iLocal_86, 0);
	unk_0xFECAE061D8C80757(iLocal_86, 0, 0, 1, 0);
	unk_0xFECAE061D8C80757(iLocal_86, 2, 0, 0, 0);
	unk_0xFECAE061D8C80757(iLocal_86, 3, 0, 0, 0);
	unk_0xFECAE061D8C80757(iLocal_86, 4, 0, 0, 0);
	unk_0xFECAE061D8C80757(iLocal_86, 7, 1, 0, 0);
	unk_0xFECAE061D8C80757(iLocal_86, 8, 0, 0, 0);
	unk_0x77C55DE62ED86A9B(iLocal_86, 1);
	unk_0xC5B2830898581862(iLocal_86, 1);
	unk_0xD14067404D35AAE7(iLocal_86, 0);
	unk_0xEE72EF85581D1171(iLocal_86, "LACEY");
	if (Global_3 || bLocal_70)
	{
		unk_0x226C3A30511D5DC4(iLocal_86, 1);
	}
	if (unk_0xDA95D0C19E737224("CELEBRITY", &uLocal_69))
	{
		unk_0x8386356641D0DED1(iLocal_86, uLocal_69);
	}
	iLocal_91 = unk_0xABEEDBEF2BBDF5B3(joaat("surano"), Local_92, fLocal_95, 1, 1, 0);
	unk_0x2EDDA32F6EF3C8B7(iLocal_91, Local_92, 0, 0, 1);
	unk_0xA16BAE0DDDB68BAD(iLocal_91, 0.1293f, -0.0323f, -0.1606f, 0.978f);
	unk_0x495ED6976429C1E8(iLocal_91, 0, 0);
	unk_0x7A1950259E8A78CC(iLocal_91, 10);
	unk_0xCB8DD5B44DBC2DEB(iLocal_91, 1084227584);
	unk_0x439314AD4FC79186(iLocal_91, 3);
	unk_0x9D92700BDDC6B69B(iLocal_91, 1);
	unk_0x391C76A057D754D6(iLocal_91, 1);
	unk_0xF6DC858A24814B39(iLocal_91, unk_0x1B20DFD3CCE4EBE5(1));
	if (func_24() == 1)
	{
		func_22(&Local_395, 1, unk_0xC1A5EC5C986B98AD(), "FRANKLIN", 0, 1);
	}
	else if (func_24() == 0)
	{
		func_22(&Local_395, 1, unk_0xC1A5EC5C986B98AD(), "MICHAEL", 0, 1);
	}
	else
	{
		func_22(&Local_395, 1, unk_0xC1A5EC5C986B98AD(), "TREVOR", 0, 1);
	}
	func_22(&Local_395, 3, iLocal_86, "LACEY", 0, 1);
	iLocal_375[0] = "idle_a";
	iLocal_375[1] = "idle_b";
	iLocal_375[2] = "idle_c";
	iLocal_375[3] = "idle_d";
	iLocal_375[4] = "idle_e";
	iLocal_375[5] = "idle_f";
	iLocal_375[6] = "idle_g";
	iLocal_375[7] = "idle_h";
	iLocal_375[8] = "idle_i";
	iLocal_560[0] = "MAG_2_ESCAPE_PAP_GET_CAR";
	iLocal_560[1] = "MAG_2_ESCAPE_PAP_CHASE";
	iLocal_560[2] = "MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME";
	unk_0x9C56520AE72AFDBF(joaat("vader"), 1);
	unk_0x9C56520AE72AFDBF(joaat("surano"), 1);
	unk_0x9C56520AE72AFDBF(joaat("cavalcade2"), 1);
}

var func_214(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0x7F0C74F83813841D(Param0);
	unk_0x5E3A54CF3E9DF9FC(uVar0, 0);
	unk_0x3C1C0549FDA2CF24(uVar0, 0);
	return uVar0;
}

void func_215(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_219(iParam0, 2, 1))
		{
			func_218(iParam0, 2, 1);
		}
	}
	else if (func_219(iParam0, 2, 1))
	{
		func_216(iParam0, 2, 1);
	}
}

void func_216(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x061B1200C95204CB(&(Global_100733.f_1407[iParam0]), iParam1);
	}
	else if (unk_0xA26A9A07F761D8F8())
	{
		if (func_90() == 0)
		{
			uVar0 = func_125(func_217(iParam0), -1, 0);
			unk_0x061B1200C95204CB(&uVar0, bParam1);
			func_121(func_217(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_113648.f_668[iParam0]), bParam1);
	}
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12385;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9916;
			break;
		
		case 57:
			return 9918;
			break;
		
		case 58:
			return 11433;
			break;
		
		case 59:
			return 11844;
			break;
		
		default:
			break;
	}
	return 14192;
}

void func_218(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xECDAB41968FF21A8(&(Global_100733.f_1407[iParam0]), iParam1);
	}
	else if (unk_0xA26A9A07F761D8F8())
	{
		if (func_90() == 0)
		{
			uVar0 = func_125(func_217(iParam0), -1, 0);
			unk_0xECDAB41968FF21A8(&uVar0, bParam1);
			func_121(func_217(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xECDAB41968FF21A8(&(Global_113648.f_668[iParam0]), bParam1);
	}
}

int func_219(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100733.f_1407[iParam0], iParam1);
	}
	else if (unk_0xA26A9A07F761D8F8())
	{
		if (func_90() == 0)
		{
			return BitTest(func_125(func_217(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113648.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_220()
{
	if (!iLocal_96)
	{
		func_228(&uLocal_97, joaat("surano"));
		func_228(&uLocal_97, joaat("prop_ld_test_01"));
		func_228(&uLocal_97, joaat("a_f_y_bevhills_03"));
		func_228(&uLocal_97, joaat("a_m_y_genstreet_02"));
		func_228(&uLocal_97, joaat("vader"));
		func_228(&uLocal_97, joaat("cavalcade2"));
		func_228(&uLocal_97, joaat("prop_pap_camera_01"));
		func_225(&uLocal_97);
		iLocal_96 = 1;
	}
	if (!func_221(&uLocal_97))
	{
		return 0;
	}
	unk_0x28818732C8F0F80E("random@escape_paparazzi@standing@");
	unk_0x28818732C8F0F80E("random@paparazzi@pap_anims");
	unk_0x28818732C8F0F80E("random@paparazzi@peek");
	unk_0x28818732C8F0F80E("random@paparazzi@trans");
	unk_0x28818732C8F0F80E("random@paparazzi@wait");
	unk_0x28818732C8F0F80E("veh@std@ps@idle_panic");
	unk_0x28818732C8F0F80E("veh@low@front_ps@idle_panic");
	unk_0x28818732C8F0F80E(sLocal_374);
	unk_0xA3C681843B51A4CC("ESCPAP", 0);
	if (((((((((unk_0x2BBF749E555360DC("random@escape_paparazzi@standing@") && unk_0x2BBF749E555360DC("random@paparazzi@pap_anims")) && unk_0x2BBF749E555360DC("random@paparazzi@peek")) && unk_0x2BBF749E555360DC("random@paparazzi@trans")) && unk_0x2BBF749E555360DC("random@paparazzi@wait")) && unk_0x2BBF749E555360DC("veh@std@ps@idle_panic")) && unk_0x2BBF749E555360DC("veh@low@front_ps@idle_panic")) && unk_0x2BBF749E555360DC(sLocal_374)) && unk_0x578F9DB3098790E9(0)) && unk_0xF6AFEDAAE44A2159("Distant_Camera_Flash", 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_221(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_222(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_222(var uParam0)
{
	return func_223(*uParam0, "NULL", uParam0->f_1);
}

int func_223(var uParam0, char* sParam1, int iParam2)
{
	if (BitTest(uParam0, 30))
	{
		if (BitTest(uParam0, 29))
		{
			switch (func_224(uParam0))
			{
				case 0:
					return unk_0x0CBB7C273DED26E7(uParam2);
					break;
				
				case 1:
					return unk_0x2BBF749E555360DC(sParam1);
					break;
				
				case 2:
					return unk_0xA6FA26A80B445074(sParam1);
					break;
				
				case 3:
					return unk_0x9812897315C21146(sParam1);
					break;
				
				case 4:
					return unk_0x56659E29BE303D7F(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xC546C50EE3EA181E(sParam1);
					break;
				
				case 6:
					return unk_0xF6AFEDAAE44A2159(sParam1, BitTest(uParam0, 27), -1);
					break;
				
				case 7:
					return unk_0xAF83A305E6D700D3(iParam2);
					break;
				
				case 8:
					return unk_0x578F9DB3098790E9(iParam2);
					break;
				
				case 9:
					return unk_0x399D29F9238EE6B0();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_224(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (BitTest(uParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_225(var uParam0)
{
	func_226(uParam0, 9, -1, 0);
}

void func_226(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_227(bParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*2*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0xECDAB41968FF21A8(uParam0[iVar0 /*2*/], bParam1);
			unk_0xECDAB41968FF21A8(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_228(var uParam0, int iParam1)
{
	func_226(uParam0, 0, iParam1, 0);
}

int func_229()
{
	if (!func_196(5))
	{
		return 1;
	}
	if (func_208())
	{
		return 1;
	}
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x7A2C98D06C9C1956(unk_0xC1A5EC5C986B98AD())) > 1369f && !func_212())
		{
			return 0;
		}
	}
	if (func_202(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_230()
{
	if ((Global_113637 == func_104() && unk_0xA847A0F368810680()) && Global_113638)
	{
		return 1;
	}
	return 0;
}

void func_231(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0xE16824A2A0B2A6D8() >= (uParam0->f_32 + uParam0->f_33) || BitTest(Global_100681.f_20, 2)) || BitTest(Global_100681.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (BitTest((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*2*/], 29))
					{
						func_232(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0xE16824A2A0B2A6D8();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_232(var uParam0)
{
	func_233(uParam0, "NULL", uParam0->f_1);
}

void func_233(var uParam0, char* sParam1, int iParam2)
{
	if (BitTest(*uParam0, 30))
	{
		switch (func_224(*uParam0))
		{
			case 0:
				unk_0x852EC2A7DE66202D(uParam2);
				break;
			
			case 1:
				unk_0x28818732C8F0F80E(sParam1);
				break;
			
			case 2:
				unk_0x14004648CB41E983(sParam1);
				break;
			
			case 3:
				unk_0xEBA1698B77FD0A86(sParam1, BitTest(*uParam0, 28));
				break;
			
			case 4:
				unk_0xC0B5FC4796023855(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x7F2BD159A7FF94C0(sParam1);
				break;
			
			case 6:
				unk_0xF6AFEDAAE44A2159(sParam1, BitTest(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0xD9C38C2E8E7C8C13(iParam2);
				break;
			
			case 8:
				unk_0xA3C681843B51A4CC(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x10FC49B73AEEBE87();
				break;
			
			default:
				break;
		}
		unk_0xECDAB41968FF21A8(uParam0, 29);
	}
}

void func_234(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_104();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_236(iParam0);
	unk_0x1A59C174B4130991(0);
	unk_0xB1BC77E1EAD07BAE(1);
	Global_113634 = 0;
	func_235();
}

void func_235()
{
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			unk_0x9C56520AE72AFDBF(unk_0x504B9BB48D41C264(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)), 1);
		}
		unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 32, 0);
	}
}

void func_236(int iParam0)
{
	Global_113637 = iParam0;
}

int func_237(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_152234)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_104();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_278())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			Var1 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x7A2C98D06C9C1956(unk_0xC1A5EC5C986B98AD())) > 1369f && !func_212())
			{
				return 0;
			}
		}
		if (!Global_113648.f_9087)
		{
			return 0;
		}
		if (func_85(0))
		{
			return 0;
		}
		if (func_208())
		{
			return 0;
		}
		if (func_277())
		{
			return 0;
		}
		if (Global_113637 != -1)
		{
			return 0;
		}
		if (func_26(func_24()))
		{
			if (func_202(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_276(iParam3))
		{
			return 0;
		}
		if (func_26(func_24()))
		{
			if (func_275(func_24()) == 4 || func_275(func_24()) == 5)
			{
				return 0;
			}
		}
		if (func_26(func_24()))
		{
			if (!func_274(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_273(Global_113648.f_24997.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0xA5E11AF0A2B928C1() - Global_113639) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_272())
		{
			return 0;
		}
		if (unk_0x5ABCFD3441B37CA6())
		{
			return 0;
		}
		if (unk_0xA847A0F368810680())
		{
			return 0;
		}
		if (!func_263(4))
		{
			return 0;
		}
		if (!func_196(5))
		{
			return 0;
		}
		if (func_262(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x4D3D95146FD3490D(unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD())))
		{
			if ((unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) == unk_0x9CE0235348AE4A4D(377.153f, -717.567f, 10.0536f) || unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) == unk_0x9CE0235348AE4A4D(320.9934f, 265.2515f, 82.1221f)) || unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) == unk_0x9CE0235348AE4A4D(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_262(0, 0))
		{
			return 0;
		}
		if (Global_32310)
		{
			return 0;
		}
		if (func_276(30) && !func_262(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_26(func_24()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_113648.f_2365.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_113648.f_2365.f_539.f_2296[iVar4];
				if (func_261(iVar8))
				{
					if (func_239(iVar4))
					{
						if (!func_238(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), Var5) < (210f * 210f))
							{
								if (func_24() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_238(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113648.f_2365.f_539.f_2296[iParam0];
	return func_240(iVar0);
}

int func_240(int iParam0)
{
	return func_241(iParam0, 1);
}

int func_241(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_261(iParam0))
	{
		return 0;
	}
	func_242(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_242(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_243(func_254(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_243(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_253(iParam0, iParam1))
	{
		iVar0 = func_252(iParam1);
		iVar1 = func_250(iParam0);
		iVar2 = (func_250(iParam0) - func_250(iParam1));
		iVar3 = (func_252(iParam0) - func_252(iParam1));
		iVar4 = (func_249(iParam0) - func_249(iParam1));
		iVar5 = (func_248(iParam0) - func_248(iParam1));
		iVar6 = (func_247(iParam0) - func_247(iParam1));
		iVar7 = (func_246(iParam0) - func_246(iParam1));
	}
	else
	{
		iVar0 = func_252(iParam0);
		iVar1 = func_250(iParam1);
		iVar2 = (func_250(iParam1) - func_250(iParam0));
		iVar3 = (func_252(iParam1) - func_252(iParam0));
		iVar4 = (func_249(iParam1) - func_249(iParam0));
		iVar5 = (func_248(iParam1) - func_248(iParam0));
		iVar6 = (func_247(iParam1) - func_247(iParam0));
		iVar7 = (func_246(iParam1) - func_246(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_245(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_244(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_244(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_245(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_246(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_247(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_248(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_249(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_250(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_251(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_251(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_252(int iParam0)
{
	return iParam0 & 15;
}

int func_253(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_261(iParam1) || !func_261(iParam0))
	{
		return 1;
	}
	iVar0 = func_250(iParam0);
	iVar1 = func_250(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_252(iParam0);
	iVar1 = func_252(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_249(iParam0);
	iVar1 = func_249(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_248(iParam0);
	iVar1 = func_248(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_247(iParam0);
	iVar1 = func_247(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_246(iParam0);
	iVar1 = func_246(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_254()
{
	var uVar0;
	
	func_260(&uVar0, unk_0x731F95B6458DCF80());
	func_259(&uVar0, unk_0x77BBAAED3E25322C());
	func_258(&uVar0, unk_0x30DFE1FFD2CC7420());
	func_257(&uVar0, unk_0x8C0F17CAC308A14B());
	func_256(&uVar0, unk_0x61117764C67882B7());
	func_255(&uVar0, unk_0x367F557725B53815());
	return uVar0;
}

void func_255(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_256(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_257(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_252(*uParam0);
	iVar1 = func_250(*uParam0);
	if (iParam1 < 1 || iParam1 > func_245(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_258(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_259(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_260(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_261(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_246(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_247(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_248(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_250(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_252(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_249(iParam0);
	if (iVar5 < 1 || iVar5 > func_245(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_262(int iParam0, bool bParam1)
{
	if (BitTest(Global_113648.f_24997.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_263(int iParam0)
{
	int iVar0;
	
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				iVar0 = func_24();
				if (!func_26(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_271()) || Global_112695) || Global_32166) || func_270()) || func_19(8, -1)) || func_269()) || func_268()) || func_267()) || func_266()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || func_271()) || Global_32166) || func_270()) || func_19(8, -1)) || func_267()) || func_269()) || func_268()) || func_266()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_271()) || Global_112695) || Global_32166) || func_270()) || func_19(8, -1)) || func_267()) || func_269()) || func_268()) || func_266()) || Global_113648.f_7690.f_919[iVar0] == 5) || Global_43804 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_271()) || Global_112695) || Global_32166) || func_270()) || func_19(8, -1)) || func_269()) || func_268()) || func_266()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_271() || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0) || func_19(8, -1)) || func_266()) || func_265()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_19(8, -1) || func_269()) || func_268()) || func_265()) || func_264())
						{
							return 0;
						}
						if ((unk_0xB53553DC4AAC7D8A() && unk_0x728FB8B438DDCAB6() != 3) && unk_0x19B3485E7C9D734D() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
						{
							if ((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || func_271()) || Global_32166) || func_270()) || func_19(8, -1)) || func_268()) || func_267()) || func_266()) || Global_113648.f_7690.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA())) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA())) || !unk_0x35DF833D93BCC488()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || func_271()) || func_268()) || Global_112695) || Global_32166) || func_270()) || Global_44446) || func_19(8, -1)) || func_267()) || func_265()) || func_266()) || Global_113648.f_7690.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA())) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA())) || !unk_0x35DF833D93BCC488()) || unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0)) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1)) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0x279D0BCF8F708D74(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || func_271()) || Global_112695) || Global_32166) || func_270()) || func_19(8, -1)) || func_267()) || func_265()) || func_269()) || func_268()) || func_266())
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

var func_264()
{
	return Global_100720.f_1;
}

int func_265()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 13);
	}
	return 0;
}

int func_266()
{
	if (unk_0x24B651D85CCE5EB4(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_267()
{
	if (Global_78819)
	{
		return 1;
	}
	else if (Global_63356 && !Global_63362)
	{
		return 1;
	}
	return 0;
}

bool func_268()
{
	return Global_100733.f_388 > 0;
}

bool func_269()
{
	return Global_100733.f_387 > 0;
}

var func_270()
{
	return Global_1575060;
}

int func_271()
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		return Global_98159.f_44 == 1;
	}
	return 0;
}

int func_272()
{
	func_16();
	if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_273(int iParam0)
{
	return func_253(func_254(), iParam0);
}

int func_274(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_24();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_275(int iParam0)
{
	if (!func_26(iParam0))
	{
		return 7;
	}
	return Global_113648.f_7690.f_919[iParam0];
}

int func_276(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_278())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113648.f_24997, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113648.f_24997.f_1, iVar0);
	}
	return iVar1;
}

int func_277()
{
	var uVar0;
	
	if (Global_32315)
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			uVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			if (unk_0xFBD273FDBCF0C5BD(uVar0, 0))
			{
				if (!unk_0x66599E73DBA5A850(unk_0xA66E176E5772E965(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_278()
{
	var uVar0;
	
	if (Global_152523 == 2)
	{
		return 1;
	}
	else if (Global_152523 == 3)
	{
		return 0;
	}
	if (unk_0x7FFBE14C34D75E19())
	{
		if (unk_0x8BD41D5945F5762B())
		{
			if (unk_0x001B3EAD68D731CE())
			{
				unk_0xDD7756E2742E0F6D(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xECDAB41968FF21A8(&uVar0, 2);
				unk_0xECDAB41968FF21A8(&uVar0, 4);
				unk_0xECDAB41968FF21A8(&uVar0, 6);
				unk_0xECDAB41968FF21A8(&Global_25, 2);
				unk_0xECDAB41968FF21A8(&Global_25, 4);
				unk_0xECDAB41968FF21A8(&Global_25, 6);
				unk_0x3CC35ACFFC9C730E(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x7D33DF1E1089E1D1())
				{
					iVar0 = unk_0x516080EA609481E1(866);
					unk_0xECDAB41968FF21A8(&iVar0, false);
					unk_0x705949B096008718(iVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0x7D33DF1E1089E1D1())
	{
		if (BitTest(unk_0x516080EA609481E1(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_279(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

void func_280()
{
	func_298(0);
	unk_0x5F130139CEA77D3E(-90f, -1488f, -50f, 55f, -1470f, 50f, 1);
	unk_0x2112CE9FD54D593A("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_293(&uLocal_97, 0);
	unk_0x0B34FA69ECCE3927("random@escape_paparazzi@standing@");
	unk_0x0B34FA69ECCE3927("random@paparazzi@pap_anims");
	unk_0x0B34FA69ECCE3927("random@paparazzi@peek");
	unk_0x0B34FA69ECCE3927("random@paparazzi@trans");
	unk_0x0B34FA69ECCE3927("random@paparazzi@wait");
	unk_0x0B34FA69ECCE3927("veh@std@ps@idle_panic");
	unk_0x0B34FA69ECCE3927("veh@low@front_ps@idle_panic");
	unk_0x0B34FA69ECCE3927(sLocal_374);
	unk_0x214F8822B61C46FE();
	if (func_230())
	{
		unk_0xFF2AF80F9EC7704C(1f);
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_86) && !unk_0x66599E73DBA5A850(iLocal_86))
	{
		if (unk_0xE65E1573677B6119(iLocal_86))
		{
			unk_0xDC21E058EE11964C(iLocal_86);
		}
		if (unk_0x3C3D6D026CF7F51B(iLocal_86, 1))
		{
			if (!unk_0xC78375EA6037A7DB(iLocal_86))
			{
				unk_0x6FE9A0C01D25F413(iLocal_86, 0, 0);
			}
		}
	}
	func_282(-1);
	unk_0x947D74BA17D58843();
	unk_0x8FCB44103687B99F(0);
	unk_0x9C56520AE72AFDBF(joaat("vader"), 0);
	unk_0x9C56520AE72AFDBF(joaat("surano"), 0);
	unk_0x9C56520AE72AFDBF(joaat("cavalcade2"), 0);
	unk_0x17D46728E18012D3(uLocal_365, 0);
	unk_0x17D46728E18012D3(uLocal_366, 0);
	unk_0x17D46728E18012D3(uLocal_367, 0);
	unk_0x8E09E8C52602EBB2(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 1, 1);
	if (Global_32406)
	{
		unk_0x5C37F509B0398DFA("AC_STOP");
	}
	func_281();
	unk_0x675D9C12C73D3DE7();
}

void func_281()
{
	Global_32402 = 0;
	Global_32403 = 0;
	Global_32405 = 0;
	Global_32406 = 0;
	Global_32407 = 0;
}

void func_282(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_104();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_230())
	{
		func_286(iParam0);
		unk_0x97DBA2AA6C70AFC7(0, 0);
		Global_113639 = unk_0xA5E11AF0A2B928C1();
		func_285(30000);
		StringCopy(&cVar0, func_284(Global_113637, 1), 64);
		if (func_103(Global_113637) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113636, 64);
		}
		unk_0x36DDD3AC77856423(&cVar0, Global_113634, (unk_0xA5E11AF0A2B928C1() - Global_113635), 0);
	}
	else if (BitTest(Global_113644, 0) && Global_113648.f_24997.f_2 < 3)
	{
		unk_0x061B1200C95204CB(&Global_113644, false);
	}
	func_283(&Global_32223);
	Global_113638 = 0;
	func_236(-1);
}

void func_283(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43219)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43218 = 0;
	Global_43220 = 0;
	Global_43257 = 15;
	Global_63359 = 0;
	Global_63360 = 0;
}

char* func_284(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_285(int iParam0)
{
	Global_43808 = (unk_0xA5E11AF0A2B928C1() + iParam0);
}

void func_286(int iParam0)
{
	func_287(iParam0, 0, func_292(iParam0));
}

void func_287(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_254();
	func_290(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_289(iParam0, &uVar0);
	Var1 = { func_288(&uVar0) };
}

struct<16> func_288(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_248(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_247(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_246(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_249(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_252(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_250(*uParam0), 64);
	return Var0;
}

void func_289(int iParam0, var uParam1)
{
	Global_113648.f_24997.f_43[iParam0] = *uParam1;
}

void func_290(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_250(*uParam0);
	iVar1 = func_252(*uParam0);
	iVar2 = func_249(*uParam0);
	iVar3 = func_248(*uParam0);
	iVar4 = func_247(*uParam0);
	iVar5 = func_246(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_245(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_245(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_291(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_291(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_260(uParam0, iParam1);
	func_259(uParam0, iParam2);
	func_258(uParam0, iParam3);
	func_256(uParam0, iParam5);
	func_257(uParam0, iParam4);
	func_255(uParam0, iParam6);
}

int func_292(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_293(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_295(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_294(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_294(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_295(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			func_296(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_296(var uParam0)
{
	func_297(*uParam0, "NULL", uParam0->f_1);
}

void func_297(var uParam0, char* sParam1, var uParam2)
{
	if (BitTest(uParam0, 30))
	{
		switch (func_224(uParam0))
		{
			case 0:
				unk_0xE0A291F406691F03(uParam2);
				break;
			
			case 1:
				unk_0x0B34FA69ECCE3927(sParam1);
				break;
			
			case 2:
				unk_0x1401DAE4BB7FBFCD(sParam1);
				break;
			
			case 3:
				unk_0xFBA79BC11313B81D(sParam1);
				break;
			
			case 4:
				unk_0xC062EB7C484973F7(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x0DE8FEF68764819C(sParam1);
				break;
			
			case 6:
				unk_0x214F8822B61C46FE();
				break;
			
			case 7:
				unk_0xA46627DF9B8B1FBE(uParam2);
				break;
			
			case 8:
				unk_0x32FF0B09752F532B(uParam2, BitTest(uParam0, 26));
				break;
			
			case 9:
				unk_0x42665493F0D75951();
				break;
			
			default:
				break;
		}
	}
}

void func_298(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_215(iVar0, bParam0);
		iVar0++;
	}
}

