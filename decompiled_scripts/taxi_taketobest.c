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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
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
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	struct<3> Local_83 = { 0, 0, 0 } ;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	bool bLocal_94 = 0;
	float fLocal_95 = 0f;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 1132396544;
	var uLocal_101 = 1132396544;
	var uLocal_102 = 1132396544;
	var uLocal_103 = 0;
	var uLocal_104 = -1082130432;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 8;
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
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = -1;
	var uLocal_165 = 1092616192;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	struct<21> Local_169 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_190[15];
	int iLocal_341 = 0;
	float fLocal_342 = 0f;
	struct<2> Local_343 = { 0, 16 } ;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
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
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	struct<428> Local_409 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	int iLocal_841 = 0;
	struct<3> Local_842[1];
	var uLocal_846[3] = { 0, 0, 0 };
	var uLocal_850 = 0;
	struct<3> Local_851 = { 0, 0, 0 } ;
	struct<3> Local_854 = { 0, 0, 0 } ;
	struct<3> Local_857[60];
	struct<3> Local_1038[60];
	struct<3> Local_1219[60];
	struct<3> Local_1400[60];
	struct<3> Local_1581 = { 0, 0, 0 } ;
	var uLocal_1584 = 0;
	int iLocal_1585 = 0;
	int iLocal_1586 = 0;
	int iLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	int iLocal_1591 = 0;
	float fLocal_1592[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	bool bLocal_1653 = 0;
	struct<28> Local_1654 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 5;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 1097859072;
	var uLocal_1728 = 1500;
	var uLocal_1729 = 45;
	var uLocal_1730 = 1103626240;
	var uLocal_1731 = 5;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
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
	uLocal_77 = unk_0x1F53E4D96E694CDD();
	uLocal_78 = unk_0xEE612CA913419344();
	Local_83 = { 500f, 500f, 500f };
	iLocal_841 = joaat("a_f_y_bevhills_03");
	Local_851 = { -412.0875f, 1171.359f, 324.8176f };
	Local_854 = { -411.0378f, 1175.733f, 324.6417f };
	iLocal_1587 = 1;
	if (unk_0x55EEDBBFDC6E810F(67))
	{
		func_433(2);
		func_431();
	}
	unk_0xB65977CD1EC089B5(1);
	func_418();
	while (true)
	{
		if (!unk_0x055111B11E6624FD(Local_409.f_2, 0))
		{
			func_9();
		}
		else
		{
			func_1(&Local_409);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_2 = unk_0xC1A5EC5C986B98AD();
	func_7(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0xC1A5EC5C986B98AD());
	if (iVar1 == 0)
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("sp2_dist_driving_car");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("sp1_dist_driving_car");
	}
	else
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	return iVar0;
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_4(int iParam0)
{
	if (func_6(iParam0))
	{
		return func_5(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_5(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

bool func_6(int iParam0)
{
	return iParam0 < 3;
}

void func_7(var uParam0)
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_3(unk_0xC1A5EC5C986B98AD());
	if (iVar0 == 0)
	{
		func_8(uParam0, 0, unk_0xC1A5EC5C986B98AD(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_8(uParam0, 0, unk_0xC1A5EC5C986B98AD(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_8(uParam0, 0, unk_0xC1A5EC5C986B98AD(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_8(uParam0, 0, unk_0xC1A5EC5C986B98AD(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_8(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_8(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_9()
{
	if (func_417(&Local_409))
	{
		func_416(&Local_409);
		if (Local_409.f_410 > 0)
		{
			if (func_415(&Local_409, 0))
			{
				func_413();
			}
		}
		else if (func_412(&Local_409, 31) > 5f)
		{
			func_433(2);
			func_431();
		}
	}
	else
	{
		func_411(&Local_409);
		func_377(&Local_409, &uLocal_1725);
		func_376(&Local_409, &uLocal_1588, 0);
		func_375(&Local_409);
		if (Local_409.f_410 > 2)
		{
			func_374(&Local_409);
			if (!func_373(&Local_409))
			{
				func_340();
			}
			else
			{
				func_319(&Local_409, "Taxi Not Driveable", func_339(&Local_409));
			}
		}
		if (Local_409.f_410 == 9)
		{
			func_295(&Local_409, 0, 1);
		}
		switch (Local_409.f_410)
		{
			case 0:
				func_292();
				func_291(&Local_409, 16, 4f, 0);
				func_289(&Local_409, Local_851, Local_854, "TaxiMiranda", iLocal_841, 0f, 10f);
				func_287(&Local_409);
				func_286(&Local_409, 1);
				break;
			
			case 1:
				if (func_284())
				{
					func_283();
					func_263();
					func_262(&(Local_842[0 /*3*/]), "TAXI_SC_BN_08", 500);
					func_261(&Local_409, &Local_842);
					Local_409.f_14 = { Local_851 };
					func_260(&Local_409);
					func_286(&Local_409, 3);
				}
				break;
			
			case 3:
				if (func_251(&Local_409, 1))
				{
					if (!unk_0x055111B11E6624FD(Local_409.f_3, 0))
					{
						unk_0xFECAE061D8C80757(Local_409.f_3, 3, 0, 2, 0);
						unk_0xFECAE061D8C80757(Local_409.f_3, 2, 1, 0, 0);
						unk_0xFECAE061D8C80757(Local_409.f_3, 4, 1, 0, 0);
						unk_0xFECAE061D8C80757(Local_409.f_3, 0, 0, 1, 0);
						unk_0x598D91BBD045C1F3(Local_409.f_3, 29, 0);
					}
					Local_409.f_427 = 1;
					func_250(&Local_409, 1, 0);
					func_286(&Local_409, 5);
				}
				break;
			
			case 5:
				if (func_222(&Local_409, 0, 1109393408))
				{
					func_286(&Local_409, 15);
				}
				break;
			
			case 15:
				if (func_221(&Local_409))
				{
					func_217(&Local_409, 7, 1, 0, 0);
					func_216(&Local_409);
					func_215();
					func_286(&Local_409, 9);
				}
				if (unk_0xFBD273FDBCF0C5BD(Local_409.f_4, 0))
				{
					if (!unk_0xE0D346789C5160EB(Local_409.f_2, Local_409.f_4, 0))
					{
						func_211(&Local_409);
						func_286(&Local_409, 5);
					}
				}
				break;
			
			case 9:
				if (!iLocal_1591)
				{
					if (Local_409.f_139)
					{
						func_204();
						func_201(0);
						iLocal_1591 = 1;
					}
				}
				func_177();
				if (func_136(&Local_409, 5f, 1097859072, 1117782016))
				{
					func_134(&uLocal_1684);
					func_133(&Local_1654, 15, 0);
					if (iLocal_840 == iLocal_839)
					{
						unk_0x952D2B8A054C4FF8(Local_409.f_3, -713.4489f, -153.4094f, 37.1441f, 10000, 2049, 3);
						func_132(&Local_409, 0);
						Local_409.f_56 = 50;
						Local_409.f_108 = 0;
					}
					else if (iLocal_840 == 14)
					{
						unk_0x952D2B8A054C4FF8(Local_409.f_3, -1196.372f, -772.4608f, 17.30166f, 10000, 2049, 3);
						Local_409.f_56 = 25;
						Local_409.f_108 = 0;
					}
					else
					{
						unk_0x952D2B8A054C4FF8(Local_409.f_3, 72.87311f, -1392.597f, 29.76223f, 10000, 2049, 3);
						Local_409.f_56 = 0;
						Local_409.f_108 = 1;
					}
					func_130(&Local_409);
					func_126(&Local_409);
					func_125(&Local_409);
					func_286(&Local_409, 27);
				}
				break;
			
			case 27:
				if (func_114(&Local_409, 1))
				{
					unk_0x909F139DC199D8E0(Local_409.f_3);
					unk_0x63EF69C6969A3D26(&uLocal_850);
					unk_0xDBC7406226B5540E(&uLocal_850);
					unk_0x6FE9A0C01D25F413(0, 0, 0);
					unk_0x7D9A648CC1936BDA(0, Local_409.f_29, 1f, -1, 1048576000, 0, 1193033728);
					unk_0x978687517F88D889(0, Local_409.f_29, 15f, 5000);
					unk_0x82C6DD5E8460E2C0(0, 0);
					unk_0x7D9A648CC1936BDA(0, Local_1581, 1f, -1, 1048576000, 0, 1193033728);
					unk_0x978687517F88D889(0, Local_1581, 15f, 0);
					unk_0xF2CFC6EC8C85FA78(uLocal_850);
					unk_0x3D7110D966B0CEA2(Local_409.f_3, uLocal_850);
					unk_0x71A535529C1CA5DF(Local_409.f_3, 1);
					func_286(&Local_409, 29);
				}
				break;
			
			case 29:
				if (func_81(&Local_409, &uLocal_1732))
				{
					func_11(1, &Local_409, 0);
					func_291(&Local_409, 31, 0, 0);
					func_286(&Local_409, 30);
				}
				break;
			
			case 30:
				func_10(&Local_409);
				func_431();
				break;
			}
	}
}

void func_10(var uParam0)
{
	if (unk_0x7DE17ACDD8BA2642(uParam0->f_3))
	{
		if (!unk_0x055111B11E6624FD(uParam0->f_3, 0))
		{
			if (!unk_0x3C3D6D026CF7F51B(uParam0->f_3, 0))
			{
				unk_0x2578E1A719BF1CA4(uParam0->f_3);
			}
			unk_0xC5B2830898581862(uParam0->f_3, 0);
			unk_0x0133FF6E23A1DCA4(255, uParam0->f_413, joaat("player"));
			if (unk_0x7BB3D8F4F6310EB8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0x82F27DF65F4D68B5(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0x7BB3D8F4F6310EB8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0x82F27DF65F4D68B5(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0x7BB3D8F4F6310EB8(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0x82F27DF65F4D68B5(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0x7BB3D8F4F6310EB8(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x82F27DF65F4D68B5(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0x1EEF71E3CDD868D3(&(uParam0->f_3));
		}
	}
}

void func_11(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_55(uParam1);
		if (!unk_0x66599E73DBA5A850(uParam1->f_3))
		{
			unk_0x598D91BBD045C1F3(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_53(1, 0);
	}
	func_12(uParam1, bParam2);
}

void func_12(var uParam0, bool bParam1)
{
	func_416(uParam0);
	if (func_52())
	{
		func_50();
	}
	func_48();
	unk_0x8581263F2F024518();
	unk_0xCD3C8E1022864F65(1);
	func_43(0);
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		unk_0x5BC68FEFF4902C2B(uParam0->f_4, 0);
		unk_0xDF0FE2BA2F7D9612(uParam0->f_4);
		unk_0x154A8720BFE7CE05(uParam0->f_4);
	}
	func_40(uParam0->f_14, 1);
	func_38(uParam0->f_14, 1, 1114636288);
	func_37(&(uParam0->f_244), 3);
	unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 32, 1);
	if (func_34())
	{
		unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
	}
	unk_0xC3578D74003B8E01(1);
	func_24(0, 1, 1, 0, 0, 0, 0);
	unk_0x61F7D56FFAFBF706(1);
	unk_0xB1A691274215E4CE(1);
	if (unk_0xF57C1326FD40C8A7(*uParam0))
	{
		unk_0x42B9FA814615C4F9(*uParam0, 0);
		unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
		unk_0xEF54B7007CB2210B(1);
	}
	if (func_23(Global_113648.f_19099, 4))
	{
		func_21(&(Global_113648.f_19099), 4);
		unk_0x9C56520AE72AFDBF(func_20(), 0);
	}
	if (bParam1)
	{
		func_10(uParam0);
	}
	func_19(uParam0);
	unk_0x0B34FA69ECCE3927("gestures@m@standing@casual");
	unk_0x0B34FA69ECCE3927("oddjobs@taxi@");
	unk_0x0B34FA69ECCE3927("oddjobs@towingcome_here");
	if (unk_0x67EBFCF2F78761B9())
	{
		func_17(uParam0->f_411);
	}
	if (!unk_0x1B82EF141CC65934(unk_0x5DC3DCA82C806319()))
	{
		unk_0xE333240A90F2FF3C(unk_0x5DC3DCA82C806319(), 1, 0);
	}
	unk_0xD094BE9EF72C6999(unk_0xF2DB717A73826179((func_13(&uLocal_90) * 1000f)), 12, 0);
}

float func_13(var uParam0)
{
	if (func_16(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_14(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_14(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0xA5E11AF0A2B928C1());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		iVar2 = unk_0x0DB7F8294D73598B();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0xA5E11AF0A2B928C1()) / 1000f);
}

bool func_15(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_16(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_17(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_18(iParam0)}, 6);
		if (!unk_0xB71C73D0269747D5(&uVar0))
		{
		}
	}
}

struct<8> func_18(int iParam0)
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_19(var uParam0)
{
	unk_0x027770D13FA412CB(uParam0->f_51[0]);
}

int func_20()
{
	return joaat("taxi");
}

void func_21(var uParam0, int iParam1)
{
	func_22(uParam0, iParam1);
}

void func_22(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_23(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_24(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x8ECAA315E07E3A17(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 1);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 1);
		func_33(1);
		unk_0x2A7FF4CA1CC371B5();
		unk_0x3096CB6635EB839E();
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE444FD7526C8BB46())
			{
				unk_0xD6625E11483B2324(0);
			}
			if (!func_32())
			{
				Global_20383.f_1 = 3;
			}
			Global_21725 = 5;
		}
		func_31(1, iParam3, iParam2, 0);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_33(0);
		unk_0x5862CC4FD19EB752();
		Global_63368 = 0;
		if (bParam1)
		{
			unk_0xDB4D82037BD5A339();
		}
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 0);
		func_31(0, iParam3, iParam2, 0);
		if (unk_0xA26A9A07F761D8F8())
		{
			if ((((((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_29(unk_0x93E99A2DBCBA9CFA())) && !func_26(unk_0x93E99A2DBCBA9CFA(), 0)) && !func_25()) && !bParam4) && !bParam5) && !unk_0x8253CEEA17ED481B())
			{
				unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
			}
		}
		else if (((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_29(unk_0x93E99A2DBCBA9CFA())) && !bParam4) && !bParam5)
		{
			unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
		}
		Global_78556 = 0;
	}
}

bool func_25()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 14);
}

bool func_26(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_27(-1, 0) == 8;
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

int func_27(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_28();
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

int func_28()
{
	return Global_1574918;
}

int func_29(int iParam0)
{
	if (func_26(iParam0, 0))
	{
		return 1;
	}
	if (func_30())
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

bool func_30()
{
	return BitTest(Global_2621446, 3);
}

int func_31(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_32()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_33(int iParam0)
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

int func_34()
{
	if (!func_36() && !func_35())
	{
		if (!unk_0x2E27C24397D7F166(unk_0x5DC3DCA82C806319()))
		{
			return 1;
		}
	}
	return 0;
}

int func_35()
{
	if (unk_0x24B651D85CCE5EB4(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	if (unk_0x24B651D85CCE5EB4(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_37(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_38(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_39(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_39(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		unk_0xB7C5BDA2BA69CE7F(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0x5F130139CEA77D3E(Var0, Var3, 1);
		unk_0x09C86D2A7505D5FB();
	}
}

Vector3 func_39(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	fVar3 = fParam3;
	fVar4 = unk_0xD0FFB162F40A139C(fVar3);
	fVar5 = unk_0x0BADBFA3B172435F(fVar3);
	Var0.f_0 = ((Param4.f_0 * fVar4) + (Param4.f_1 * fVar5));
	Var0.f_1 = ((Param4.f_1 * fVar4) - (Param4.f_0 * fVar5));
	Var6 = { Param0 + Var0 };
	return Var6;
}

void func_40(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_41(Param0, func_42(), 0))
	{
		Var0 = { func_39(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_39(Param0, 1f, 30f, 30f, 10f) };
		unk_0x8E09E8C52602EBB2(Var0, Var3, iParam3, 1);
	}
}

bool func_41(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_42()
{
	struct<3> Var0;
	
	return Var0;
}

void func_43(int iParam0)
{
	if (func_47())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_46())
		{
			func_44(1, 1);
		}
		else
		{
			func_44(0, 0);
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
	if (!func_32())
	{
		Global_20383.f_1 = 3;
	}
}

void func_44(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_45(0))
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

int func_45(int iParam0)
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

bool func_46()
{
	return BitTest(Global_1962996, 5);
}

bool func_47()
{
	return BitTest(Global_1962996, 19);
}

void func_48()
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
					func_49(Global_97614[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_49(int iParam0, bool bParam1)
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

void func_50()
{
	Global_20591 = 0;
	func_51();
}

void func_51()
{
	unk_0x782234C275AFBA24();
	Global_22736 = 0;
	if (unk_0x0DCB385165FDE763())
	{
		unk_0xD6625E11483B2324(0);
		Global_21725 = 6;
	}
}

int func_52()
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
	{
		return 1;
	}
	return 0;
}

void func_53(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_113648.f_19099.f_22[0]++;
			func_54("Fares Completed ++ = ", Global_113648.f_19099.f_22[0]);
			break;
		
		case 1:
			Global_113648.f_19099.f_22[1]++;
			func_54("Fares Failed ++ = ", Global_113648.f_19099.f_22[1]);
			break;
		
		case 2:
			Global_113648.f_19099.f_22[2]++;
			func_54("Fares Accepted ++ ", Global_113648.f_19099.f_22[2]);
			break;
		
		case 3:
			Global_113648.f_19099.f_22[3]++;
			func_54("Fares Expired ++ ", Global_113648.f_19099.f_22[3]);
			break;
		
		case 13:
			Global_113648.f_19099.f_22[13]++;
			func_54("Passengers run ++ = ", Global_113648.f_19099.f_22[13]);
			break;
		
		case 14:
			Global_113648.f_19099.f_22[14]++;
			func_54("Passenger Forced to Pay ++ = ", Global_113648.f_19099.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_113648.f_19099.f_22[4])
				{
					Global_113648.f_19099.f_22[4] = iParam1;
					func_54("This distance ", iParam1);
					func_54(" is longer than current best", Global_113648.f_19099.f_22[4]);
				}
				else
				{
					func_54("Longest Distance Not Beat ", Global_113648.f_19099.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_113648.f_19099.f_22[5] = (Global_113648.f_19099.f_22[5] + iParam1);
			func_54("Total Distance w/ Passenger = ", Global_113648.f_19099.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_113648.f_19099.f_22[6]++;
			}
			else
			{
				Global_113648.f_19099.f_22[6] = (Global_113648.f_19099.f_22[6] + iParam1);
			}
			func_54("Wanted Levels ++ = ", Global_113648.f_19099.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_113648.f_19099.f_22[7] = (Global_113648.f_19099.f_22[7] + iParam1);
			}
			else
			{
				Global_113648.f_19099.f_22[7]++;
			}
			func_54("Wanted Levels Lost = ", Global_113648.f_19099.f_22[7]);
			break;
		
		case 8:
			Global_113648.f_19099.f_22[8]++;
			func_54("Taxis wrecked ++ = ", Global_113648.f_19099.f_22[8]);
			break;
		
		case 9:
			Global_113648.f_19099.f_22[9]++;
			func_54("Horn Honked ++ = ", Global_113648.f_19099.f_22[9]);
			break;
		
		case 10:
			Global_113648.f_19099.f_22[10] = (Global_113648.f_19099.f_22[10] + iParam1);
			func_54("Total Money Earned = ", Global_113648.f_19099.f_22[10]);
			break;
		
		case 11:
			Global_113648.f_19099.f_22[11] = (Global_113648.f_19099.f_22[11] + iParam1);
			func_54("Total Tips Earned = ", Global_113648.f_19099.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_113648.f_19099.f_22[12])
			{
				Global_113648.f_19099.f_22[12] = iParam1;
				func_54("New Highest Tip = ", Global_113648.f_19099.f_22[12]);
			}
			else
			{
				func_54("Highest Tip Not Reached = ", Global_113648.f_19099.f_22[12]);
			}
			break;
	}
}

void func_54(char* sParam0, int iParam1)
{
}

void func_55(var uParam0)
{
	func_53(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_433(1);
		func_67(15, 1);
	}
	func_65(&(Global_113648.f_19099), 1024);
	if (!func_23(Global_113648.f_19099, 64))
	{
		func_56(func_63(func_64(uParam0)), 0, 0);
	}
}

void func_56(int iParam0, int iParam1, int iParam2)
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
		func_62((891 + iParam0), 1, -1);
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
		Global_113648.f_10196[iParam0 /*12*/].f_10 = iParam1;
		Global_113648.f_10196[iParam0 /*12*/].f_11 = iParam2;
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
		func_57();
	}
}

void func_57()
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
		func_61(13, unk_0xF34EE736CF047844(Global_113648.f_10196.f_3853));
	}
	if (!unk_0xBAB6476CDD8C4AA6())
	{
		if (!Global_78558)
		{
			if (func_60() == 2 == 0 && !unk_0xA26A9A07F761D8F8())
			{
				if (unk_0x3FFDF8D1413D95DE())
				{
					Global_113382 = 0;
				}
				if (!Global_63362)
				{
					func_58();
				}
			}
		}
	}
}

int func_58()
{
	if (func_59(0))
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

int func_59(bool bParam0)
{
	if (!bParam0 && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

int func_60()
{
	return Global_32163;
}

int func_61(int iParam0, int iParam1)
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

void func_62(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_28();
	}
	unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
}

int func_63(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_64(var uParam0)
{
	return uParam0->f_411;
}

void func_65(var uParam0, int iParam1)
{
	func_66(uParam0, iParam1);
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_67(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_68(iParam0, iParam1);
}

int func_68(int iParam0, int iParam1)
{
	if (func_80(14) && !func_79(iParam0))
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
	if (func_78(&Global_4542597))
	{
		if (func_76(&Global_4542597, iParam0))
		{
			return 0;
		}
		if (func_69(&Global_4542597, iParam0))
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

int func_69(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x73651E4B1D91FE32(iParam1))
	{
		return 0;
	}
	if (func_80(14) && !func_79(iParam1))
	{
		return 0;
	}
	if (func_76(uParam0, iParam1))
	{
		return 0;
	}
	if (func_75(uParam0) < 0f)
	{
		func_74(uParam0, 0);
	}
	func_72(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_70(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_70(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x73651E4B1D91FE32(iParam1))
	{
		return 0;
	}
	if (func_80(14) && !func_79(iParam1))
	{
		return 0;
	}
	if (func_76(uParam0, iParam1))
	{
		return 0;
	}
	if (func_75(uParam0) < 0f)
	{
		func_74(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_71(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_71(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_72(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_73(uParam0, iVar0);
		iVar0++;
	}
	func_74(uParam0, (Global_4542596 - 0.5f));
}

void func_73(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_74(var uParam0, float fParam1)
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

float func_75(var uParam0)
{
	return uParam0->f_80;
}

bool func_76(var uParam0, int iParam1)
{
	return func_77(uParam0, iParam1) != -1;
}

int func_77(var uParam0, int iParam1)
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

bool func_78(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_79(int iParam0)
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

bool func_80(int iParam0)
{
	return Global_43257 == iParam0;
}

int func_81(var uParam0, var uParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_52() && func_412(uParam0, 0) > 1f)
			{
				if (func_34())
				{
					unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
				}
				func_113(uParam0);
				func_21(&(Global_113648.f_19099), 4096);
				func_110(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_112(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0x531D638530A8DB97(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_109(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_103(uParam1, 0))
			{
				func_82(uParam0);
				func_291(uParam0, 0, 0, 0);
				func_109(0);
				iLocal_168 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_82(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_83(func_101(), 21, iVar0, 0, 0);
		func_53(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_83(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_100(iParam0) == 3)
	{
		return;
	}
	if (func_100(iParam0) == 4)
	{
		return;
	}
	func_84(func_100(iParam0), 1, iParam1, iParam2, 0);
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

int func_84(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_99();
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
					func_98(99, 1);
					func_97(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_97(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_97(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_96(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_93(5))
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
							func_97(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_97(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_97(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_93(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_97(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_97(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_97(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_97(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_97(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_97(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_97(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_97(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_97(joaat("sp2_money_spent_property"), iParam3);
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
									func_97(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_97(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_97(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_97(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_97(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_97(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_93(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_97(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_97(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_97(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_97(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_97(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_97(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_92(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_98(95, iParam3);
					break;
				
				case 1:
					func_98(97, iParam3);
					break;
				
				case 2:
					func_98(96, iParam3);
					break;
			}
			func_98(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_87(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_87(bVar1);
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
					func_97(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_97(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_97(joaat("sp2_total_cash_earned"), iParam3);
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
	func_86(iParam0);
	if (Global_43257 == 15)
	{
		func_85(0);
	}
	return 1;
}

void func_85(bool bParam0)
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

void func_86(int iParam0)
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

void func_87(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_62(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_62(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_62(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_62(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_90(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_90(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_90(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_90(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_90(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_90(8277, 0, -1, 1, 0);
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
	else if (BitTest(Global_113648.f_20566.f_471, bParam0) || BitTest(Global_2359296[func_89() /*5568*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0x061B1200C95204CB(&(Global_113648.f_20566.f_471), bParam0);
		unk_0x061B1200C95204CB(&(Global_2359296[func_89() /*5568*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xD30970E11AD0FF0D("COUP_RED");
		unk_0x48849374B34BB7B9(func_88(bParam0));
		unk_0x4BE755B3858339A1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_88(bool bParam0)
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

int func_89()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_90(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_91(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
}

int func_91(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_28();
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

void func_92(int iParam0)
{
	func_98(93, iParam0);
	func_98(29, iParam0);
	func_98(30, iParam0);
}

int func_93(int iParam0)
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
		return func_95(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_95(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_95(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_95(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xD48CE560FB238316();
		iVar1 = func_94(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xD48CE560FB238316();
		iVar3 = func_94(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xD48CE560FB238316();
		iVar5 = func_94(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xD48CE560FB238316();
		iVar7 = func_94(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xD48CE560FB238316();
		iVar9 = func_94(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xD48CE560FB238316();
		iVar11 = func_94(8277, -1, 0);
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
	return BitTest(Global_2359296[func_89() /*5568*/].f_681.f_10, iParam0);
}

int func_94(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805027[iParam0 /*3*/][func_91(iParam1)];
		if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_95(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_28();
	}
	return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}

int func_96(bool bParam0)
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
		func_61(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_67(27, 1);
	return 1;
}

void func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xDD7756E2742E0F6D(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3CC35ACFFC9C730E(iParam0, iVar0, 1);
}

void func_98(int iParam0, int iParam1)
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

void func_99()
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

int func_100(int iParam0)
{
	return Global_2028[iParam0 /*29*/].f_17;
}

int func_101()
{
	func_102();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_102()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_4(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_3(unk_0xC1A5EC5C986B98AD());
			if (func_6(iVar0) && (!func_80(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_6(Global_113648.f_2365.f_539.f_4321))
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

int func_103(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_2)))
	{
		func_107(&(uParam0->f_2));
	}
	unk_0xEDECDDE17C1E41F5(14);
	unk_0x55CCA1B8F633F628(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x87644B1F984197FE(2, 201) || uParam0->f_8)
		{
			if (!func_16(&(uParam0->f_5)))
			{
				func_107(&(uParam0->f_5));
				func_106(uParam0, 1051260355);
			}
		}
		if (func_16(&(uParam0->f_5)))
		{
			if (func_105(&(uParam0->f_5)) > 0.33f)
			{
				func_104(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_105(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_16(&(uParam0->f_5)))
		{
			func_107(&(uParam0->f_5));
			func_106(uParam0, 1051260355);
		}
		else if (func_105(&(uParam0->f_5)) > 0.33f)
		{
			func_104(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_104(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_105(var uParam0)
{
	if (func_16(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_14(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_106(var uParam0, int iParam1)
{
	unk_0x9FD96C5DE6EDFC15(*uParam0, "SHARD_ANIM_OUT");
	unk_0xC6A3EF6C4A3412C1(uParam0->f_9);
	unk_0xC49D258FBF3BF214(iParam1);
	unk_0xAE3413B0654A0035();
}

void func_107(var uParam0)
{
	func_108(uParam0, 0f);
}

void func_108(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_14(BitTest(*uParam0, 4)) - fParam1);
	unk_0xECDAB41968FF21A8(uParam0, 1);
	unk_0x061B1200C95204CB(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_109(int iParam0)
{
	Global_78819 = iParam0;
	Global_78820 = iParam0;
}

void func_110(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x9FD96C5DE6EDFC15(*uParam0, func_111());
	unk_0x2AF11E92DE43CDE3("STRING");
	unk_0x35451336B8B420D6(iParam9);
	unk_0x48849374B34BB7B9(sParam1);
	unk_0xF8FCA9E7130CE1C8();
	unk_0x2AF11E92DE43CDE3(sParam7);
	unk_0x64C50E40AA09A6B5(uParam2);
	unk_0x64C50E40AA09A6B5(uParam3);
	unk_0x48849374B34BB7B9(uParam6);
	unk_0x64C50E40AA09A6B5(uParam5);
	unk_0x64C50E40AA09A6B5(iParam4);
	unk_0xF8FCA9E7130CE1C8();
	unk_0xAE3413B0654A0035();
	func_107(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_111()
{
	if (unk_0xA26A9A07F761D8F8())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_112(var uParam0)
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_113(var uParam0)
{
	int iVar0;
	
	Local_169.f_1 = unk_0xBBDA792448DB5A89(uParam0->f_50);
	Local_169.f_2 = unk_0xBBDA792448DB5A89(uParam0->f_56);
	func_53(11, uParam0->f_56);
	func_53(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_169.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (BitTest(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169.f_0 = uParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

int func_114(var uParam0, bool bParam1)
{
	if (!unk_0x055111B11E6624FD(uParam0->f_3, 0))
	{
		if (func_124(uParam0) && func_120(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_119(uParam0, 2097152))
				{
					func_115(uParam0);
				}
			}
			else
			{
				func_115(uParam0);
			}
		}
		else if (!func_124(uParam0))
		{
			if (bParam1)
			{
				if (func_119(uParam0, 2097152))
				{
					if (unk_0xF5F493B789EA063E(uParam0->f_3, joaat("script_task_leave_vehicle")) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0xF5F493B789EA063E(uParam0->f_3, joaat("script_task_leave_vehicle")) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_115(var uParam0)
{
	struct<3> Var0;
	
	if (func_118(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_116(uParam0, Var0);
}

void func_116(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (!unk_0x055111B11E6624FD(uParam0->f_3, 0) && unk_0x44A6C9475C859B45(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0x7394CB479CCA24AF(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0x7394CB479CCA24AF(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_117(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0xD99DE4ACE73B0000(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0x2E496FE654DA4166(Var0, Param1, 0) < unk_0x2E496FE654DA4166(Var3, Param1, 0) && unk_0x73D13C05CA29773A(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0xD99DE4ACE73B0000(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0x2E496FE654DA4166(Var0, Param1, 0) >= unk_0x2E496FE654DA4166(Var3, Param1, 0) && unk_0x73D13C05CA29773A(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0xD99DE4ACE73B0000(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0xD99DE4ACE73B0000(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_117(int iParam0, int iParam1)
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

int func_118(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_119(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_23(uParam0->f_81, iParam1) && !func_52());
	}
	return func_52();
}

int func_120(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (unk_0xE0D346789C5160EB(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_45(1))
			{
				func_43(0);
			}
			if (func_34())
			{
				func_123();
				return 1;
			}
			else if (func_121(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0xE333240A90F2FF3C(unk_0x5DC3DCA82C806319(), 0, 256);
				}
				else
				{
					unk_0xE333240A90F2FF3C(unk_0x5DC3DCA82C806319(), 0, 0);
				}
			}
			unk_0x8BF6543953125AB4(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_121(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_122(iParam0);
	if ((unk_0xA5E11AF0A2B928C1() - Global_29) > 500)
	{
		unk_0xC8927C3AD7C5D2E1(iParam0, uParam1, iParam2, iParam4);
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

void func_122(int iParam0)
{
	if (!unk_0x055111B11E6624FD(iParam0, 0))
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

void func_123()
{
	if (unk_0xF56A91A191EDA1FC(unk_0x93E99A2DBCBA9CFA(), 0))
	{
		unk_0x693E3DB45F359B4D(unk_0x93E99A2DBCBA9CFA(), 0);
	}
}

int func_124(var uParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (!unk_0x66599E73DBA5A850(uParam0->f_3))
		{
			if (unk_0xE0D346789C5160EB(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_125(var uParam0)
{
	if (uParam0->f_56 >= uParam0->f_59)
	{
		uParam0->f_56 = unk_0x11E019C8F43ACC8A((IntToFloat(uParam0->f_50) * 0.4f));
	}
	else if (uParam0->f_56 < uParam0->f_59 && uParam0->f_56 >= uParam0->f_58)
	{
		uParam0->f_56 = unk_0x11E019C8F43ACC8A((IntToFloat(uParam0->f_50) * 0.15f));
	}
	else
	{
		uParam0->f_56 = 0;
	}
	if (!func_23(uParam0->f_55, 1))
	{
		func_65(&(uParam0->f_55), 1);
	}
}

void func_126(var uParam0)
{
	func_128();
	unk_0x8581263F2F024518();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_217(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_217(uParam0, 103, 1, 0, 0);
		}
		func_127(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_217(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_217(uParam0, 102, 1, 0, 0);
	}
	func_291(uParam0, 16, 4f, 0);
}

void func_127(int iParam0)
{
	Global_112358.f_221 = iParam0;
}

void func_128()
{
	Global_20591 = 0;
	func_129();
}

void func_129()
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

void func_130(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_131(fVar0);
	iLocal_57[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_57[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_53(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_53(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_131(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_132(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0xECDAB41968FF21A8(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

void func_133(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = -1;
	}
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

void func_134(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_135(), 24);
		iVar0++;
	}
	unk_0x8581263F2F024518();
	func_50();
}

var func_135()
{
	var uVar0;
	
	return uVar0;
}

int func_136(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if ((((unk_0x35DF833D93BCC488() && !unk_0x6C9BA681FB2251B6()) && !unk_0x984CA71F26DF483C()) && !unk_0x72474BA05A104E1E()) && !uParam0->f_142)
	{
		if (func_159(uParam0))
		{
			func_158(uParam0, &(uParam0->f_43));
			func_153(uParam0);
			func_152(uParam0);
			func_149(uParam0);
			func_143(uParam0, fParam2, fParam3);
			func_140(uParam0);
			return func_137(uParam0, iParam1);
		}
	}
	return 0;
}

int func_137(var uParam0, int iParam1)
{
	if (func_64(uParam0) == 2)
	{
		if (unk_0x1C4E4DC1EFE24DF1(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_139(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()) < 1) && func_138(1, 1, 1)) && unk_0xD565A4F8A4D47FCB(uParam0->f_4))
		{
			return func_120(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0x1C4E4DC1EFE24DF1(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()) < 1) && func_138(1, 1, 1)) && unk_0xD565A4F8A4D47FCB(uParam0->f_4))
	{
		return func_120(uParam0, 1, iParam1);
	}
	return 0;
}

int func_138(bool bParam0, bool bParam1, bool bParam2)
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

float func_139(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 0) };
	}
	return unk_0x2E496FE654DA4166(Var0, Param1, iParam4);
}

void func_140(var uParam0)
{
	float fVar0;
	
	if ((func_124(uParam0) && func_23(uParam0->f_81, 67108864)) && unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0)
	{
		if ((unk_0xA5E11AF0A2B928C1() - iLocal_97) >= 10000)
		{
			fVar0 = func_141(uParam0->f_17, 1);
			if (fVar0 > fLocal_95)
			{
				iLocal_96++;
			}
			else
			{
				iLocal_96 = 0;
			}
			fLocal_95 = fVar0;
			iLocal_97 = unk_0xA5E11AF0A2B928C1();
		}
		if (iLocal_96 >= 2 && !func_52())
		{
			func_217(uParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((unk_0xA5E11AF0A2B928C1() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0xA5E11AF0A2B928C1() % 4000) < 50)
		{
			if (!func_124(uParam0))
			{
			}
			if (!func_23(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

float func_141(struct<3> Param0, int iParam3)
{
	return func_142(unk_0xF2CFBB1105511E1A(unk_0x5DC3DCA82C806319()), Param0, iParam3);
}

float func_142(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x055111B11E6624FD(iParam0, 0))
	{
		return -1f;
	}
	return unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(iParam0, 1), Param1, iParam4);
}

void func_143(var uParam0, float fParam1, float fParam2)
{
	if (func_124(uParam0) && func_23(uParam0->f_44, 4))
	{
		if ((unk_0xF193A4B306E6BF93(uParam0->f_4) || unk_0xDC58AE028CB223BA(uParam0->f_4) < 3f) && func_148(uParam0))
		{
			if (!func_147(uParam0, 2))
			{
				func_145(uParam0, 2);
			}
			else if (func_124(uParam0))
			{
				if (func_412(uParam0, 2) > fParam1 && !func_147(uParam0, 14))
				{
					if (func_36())
					{
						func_217(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_217(uParam0, 48, 1, 0, 0);
					}
					func_291(uParam0, 2, 0, 0);
					if (func_147(uParam0, 10))
					{
						func_291(uParam0, 10, 0, 0);
					}
				}
				if (!func_147(uParam0, 3))
				{
					func_291(uParam0, 3, 0, 0);
				}
				else if (func_412(uParam0, 3) >= fParam2)
				{
					func_144(uParam0, 3, 0);
					func_319(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_147(uParam0, 2))
			{
				func_144(uParam0, 2, 0);
			}
			if (func_147(uParam0, 3))
			{
				func_144(uParam0, 3, 0);
			}
		}
	}
}

void func_144(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_104(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_104(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_145(var uParam0, int iParam1)
{
	func_146(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_146(var uParam0)
{
	if (!func_16(uParam0))
	{
		func_107(uParam0);
	}
}

bool func_147(var uParam0, int iParam1)
{
	return func_16(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_148(var uParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (unk_0xA66E176E5772E965(uParam0->f_4, -1, 0) == unk_0xC1A5EC5C986B98AD())
		{
			return 1;
		}
	}
	return 0;
}

void func_149(var uParam0)
{
	if (func_151(uParam0))
	{
		func_150(uParam0);
	}
}

void func_150(var uParam0)
{
	if (unk_0x063237C0B49D75C9() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0xA0674C2A551A1A0B();
			func_144(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_412(uParam0, 20) > 3f)
				{
					func_217(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_23(uParam0->f_81, 262144) || !func_23(uParam0->f_81, 1048576))
				{
					if (func_412(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_217(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_23(uParam0->f_82, 67108864))
				{
					if (func_412(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_217(uParam0, 85, 1, 0, 0);
						func_144(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_412(uParam0, 20) > 8f)
				{
					func_217(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_23(uParam0->f_81, 262144) || func_23(uParam0->f_82, 67108864))
			{
				if (!func_147(uParam0, 22))
				{
					func_145(uParam0, 22);
				}
			}
			if (func_147(uParam0, 22) && func_412(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_23(uParam0->f_81, 1048576))
					{
						func_217(uParam0, 84, 1, 0, 0);
						func_144(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_23(uParam0->f_82, 134217728))
					{
						func_217(uParam0, 85, 1, 0, 0);
						func_144(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_151(var uParam0)
{
	return uParam0->f_120;
}

void func_152(var uParam0)
{
	if (unk_0x56092233CEE9770B(unk_0x5DC3DCA82C806319()) && !func_23(uParam0->f_44, 2))
	{
		func_65(&(uParam0->f_44), 2);
	}
	else if (!unk_0x56092233CEE9770B(unk_0x5DC3DCA82C806319()) && func_23(uParam0->f_44, 2))
	{
		func_21(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_53(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_217(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + unk_0x11E019C8F43ACC8A(5f));
	}
}

void func_153(var uParam0)
{
	if (!func_23(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()) >= 1)
				{
					if (func_412(uParam0, 9) > 1f)
					{
						func_157(uParam0, unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()));
						if (uParam0->f_410 != 22)
						{
							func_217(uParam0, 50, 1, 1, 0);
						}
						func_291(uParam0, 9, 0, 0);
						if (unk_0xCE4AAA035282336C(uParam0->f_9))
						{
							unk_0x5E3A54CF3E9DF9FC(uParam0->f_9, 0);
							unk_0xBD91E7D4B770F97E(uParam0->f_9, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_52() && func_412(uParam0, 9) > 4f)
				{
					func_217(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_156("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_217(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0xF356C80F3E8D2812(unk_0x5DC3DCA82C806319(), func_155(uParam0)))
				{
					func_157(uParam0, unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()));
					func_53(6, 0);
				}
				if (!func_154(uParam0))
				{
					if (!unk_0x0DCB385165FDE763())
					{
						if (func_412(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_217(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()) < 1)
				{
					if (func_156("TAXI_OBJ_POL", 0, 0))
					{
						unk_0x8581263F2F024518();
					}
					if (unk_0xCE4AAA035282336C(uParam0->f_9))
					{
						unk_0x5E3A54CF3E9DF9FC(uParam0->f_9, 255);
						unk_0xBD91E7D4B770F97E(uParam0->f_9, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_52())
				{
					if (uParam0->f_410 != 22)
					{
						func_217(uParam0, 53, 1, 0, 1);
					}
					func_53(7, func_155(uParam0));
					func_157(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_52())
				{
					func_144(uParam0, 9, 0);
					func_291(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_154(var uParam0)
{
	return uParam0->f_110;
}

int func_155(var uParam0)
{
	return uParam0->f_106;
}

bool func_156(char* sParam0, int iParam1, int iParam2)
{
	unk_0xEB16059D3EDC926B(sParam0);
	if (iParam1 == 1)
	{
		unk_0x48849374B34BB7B9(iParam2);
	}
	return unk_0xC44AC9C43C91326C();
}

void func_157(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_158(var uParam0, var uParam1)
{
	unk_0x18CBFAE0D9968DCD(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_159(var uParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (!unk_0x66599E73DBA5A850(uParam0->f_3))
		{
			if (!unk_0xE0D346789C5160EB(uParam0->f_3, uParam0->f_4, 1) && !unk_0x5CD470B5BDDAC029(uParam0->f_3))
			{
				func_319(uParam0, "Passenger left car.", 9);
			}
			else if (func_173(uParam0))
			{
				if (func_156("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0x4A77CD96EFFC63F4("TAXI_OBJ_PICKUP");
				}
				if (unk_0x35DF833D93BCC488())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0xA5E11AF0A2B928C1() % 1000) < 50)
				{
				}
				func_160(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_160(var uParam0, bool bParam1)
{
	func_172(uParam0, uParam0->f_3);
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (!unk_0xE0D346789C5160EB(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_147(uParam0, 14))
			{
				if (func_52())
				{
					func_171(1);
				}
				func_170(uParam0, 11, 1);
				func_163(uParam0, 1);
				func_291(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_124(uParam0))
				{
					if ((unk_0xA5E11AF0A2B928C1() % 1000) < 50)
					{
					}
					if (unk_0x3C3D6D026CF7F51B(uParam0->f_2, 0))
					{
						if (func_412(uParam0, 15) > 5f)
						{
							func_291(uParam0, 15, 0f, 1);
						}
					}
					if (func_412(uParam0, 14) > 20f)
					{
						func_319(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_412(uParam0, 14) > 20f)
				{
					if (func_161(uParam0->f_4, 1) > 40f)
					{
						func_319(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_319(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_161(int iParam0, int iParam1)
{
	return func_162(unk_0xF2CFBB1105511E1A(unk_0x5DC3DCA82C806319()), iParam0, iParam1);
}

float func_162(int iParam0, int iParam1, int iParam2)
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

void func_163(var uParam0, bool bParam1)
{
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xCE4AAA035282336C(uParam0->f_8))
			{
				unk_0x5E3A54CF3E9DF9FC(uParam0->f_8, 0);
				unk_0xBD91E7D4B770F97E(uParam0->f_8, 0);
				func_169(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xCE4AAA035282336C(uParam0->f_9))
			{
				unk_0x5E3A54CF3E9DF9FC(uParam0->f_9, 0);
				unk_0xBD91E7D4B770F97E(uParam0->f_9, 0);
				unk_0x8581263F2F024518();
				if (func_124(uParam0))
				{
					func_217(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_169(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_164(uParam0, 0, 0);
		}
		else if (unk_0xCE4AAA035282336C(uParam0->f_10))
		{
			unk_0x45533C09A6C9B409(&(uParam0->f_10));
			if (unk_0xCE4AAA035282336C(uParam0->f_8))
			{
				unk_0x5E3A54CF3E9DF9FC(uParam0->f_8, 255);
				unk_0xBD91E7D4B770F97E(uParam0->f_8, 1);
			}
			else if (unk_0xCE4AAA035282336C(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x5E3A54CF3E9DF9FC(uParam0->f_9, 0);
					unk_0xBD91E7D4B770F97E(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x5E3A54CF3E9DF9FC(uParam0->f_9, 255);
					unk_0xBD91E7D4B770F97E(uParam0->f_9, 1);
				}
			}
			unk_0x8581263F2F024518();
		}
	}
}

void func_164(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_416(uParam0);
	}
	if (!unk_0xCE4AAA035282336C(uParam0->f_10))
	{
		uParam0->f_10 = func_167(uParam0->f_4, 1, 0);
		unk_0x4049FDC177C92D4B(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0xBD91E7D4B770F97E(uParam0->f_10, 1);
		func_165(uParam0);
		if (bParam2)
		{
			unk_0x8581263F2F024518();
			func_217(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_165(var uParam0)
{
	func_291(uParam0, 14, 0, 0);
	func_166();
}

void func_166()
{
	int iVar0;
	
	iVar0 = unk_0xE475C458F52F1781();
	if (unk_0xFBD273FDBCF0C5BD(iVar0, 0))
	{
		unk_0x03AC3DF6C3FAD811(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

int func_167(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7DE17ACDD8BA2642(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x53B496178AE44636(iParam0);
	if (unk_0xA6B591D40DE982B5(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_168(unk_0xA26A9A07F761D8F8(), 1f, 1f));
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
		unk_0x225EB85DBC38E707(uVar0, func_168(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
		unk_0x3BCF1F6A3573A1DF(uVar0, bParam1);
	}
	else if (unk_0x4E7A9806173C3AD1(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_168(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_168(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_169(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_23(*uParam1, iParam2))
	{
		unk_0x8581263F2F024518();
		func_217(uParam0, iParam3, 1, 0, 0);
		func_65(uParam1, iParam2);
	}
}

void func_170(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_171(int iParam0)
{
	Global_22736 = iParam0;
}

void func_172(var uParam0, int iParam1)
{
	if (unk_0x7DE17ACDD8BA2642(iParam1))
	{
		if (!unk_0x66599E73DBA5A850(iParam1))
		{
			if (unk_0xBA9A13B3E8BC6817(unk_0x93E99A2DBCBA9CFA()))
			{
				if ((unk_0x98A7DAEA81E18C06(iParam1, joaat("weapon_stungun"), 0) || unk_0x98A7DAEA81E18C06(iParam1, 0, 2)) || unk_0x98A7DAEA81E18C06(iParam1, 0, 1))
				{
					func_319(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0x617AEFB7754C6AA9(unk_0x93E99A2DBCBA9CFA());
			}
		}
	}
}

int func_173(var uParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (unk_0xA66E176E5772E965(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_147(uParam0, 14))
			{
				func_174(uParam0);
			}
			func_163(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_174(var uParam0)
{
	func_144(uParam0, 14, 0);
	func_144(uParam0, 15, 0);
	func_176();
	if (func_175())
	{
		func_171(0);
	}
}

int func_175()
{
	if (Global_22736 == 1)
	{
		return 1;
	}
	return 0;
}

void func_176()
{
	var uVar0;
	
	uVar0 = unk_0xE475C458F52F1781();
	if (unk_0xFBD273FDBCF0C5BD(uVar0, 0))
	{
		unk_0x03AC3DF6C3FAD811(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_177()
{
	int iVar0;
	
	if (!iLocal_1585)
	{
		if (func_147(&Local_409, 14))
		{
			func_200();
			func_217(&Local_409, 2, 1, 0, 0);
			iLocal_1585 = 1;
		}
	}
	else if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (!func_147(&Local_409, 14))
		{
			func_165(&Local_409);
			func_199();
			iLocal_1585 = 0;
		}
	}
	if (Local_409.f_140)
	{
		func_200();
		iLocal_1586 = 1;
	}
	else if (iLocal_1586)
	{
		func_199();
		iLocal_1586 = 0;
	}
	iLocal_840 = func_178(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Local_409.f_427, -1, 0, 1, -1);
	if (iLocal_840 != -1)
	{
		iVar0 = func_178(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Local_409.f_427, -1, 0, 1, -1);
		if (!func_41(Local_409.f_17, Local_857[iVar0 /*3*/], 0))
		{
			Local_409.f_17 = { Local_857[iVar0 /*3*/] };
			Local_409.f_29 = { Local_1038[iVar0 /*3*/] };
			Local_409.f_26 = { Local_1219[iVar0 /*3*/] };
			Local_409.f_34 = fLocal_1592[iVar0];
			Local_1581 = { Local_1400[iVar0 /*3*/] };
		}
	}
}

int func_178(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		if (iParam3 == 6 || iParam3 == func_198(iVar0))
		{
			if (!bParam5 || func_195(iVar0))
			{
				fVar1 = unk_0x2E496FE654DA4166(Param0, func_179(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_179(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_192(Global_102825);
			break;
		
		case 46:
			if (Global_1853747 != func_191())
			{
				if (func_190(Global_1853747))
				{
					return func_183(2, 2);
				}
				else if (func_182(Global_1853747))
				{
					return func_183(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1970473;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159.901f, 1075.213f, -25.36174f;
			break;
		
		case 55:
			return -2194.123f, 1103.805f, -24.2451f;
			break;
		
		case 56:
			switch (Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_321.f_7)
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
					break;
				
				case 156:
					return -1029.166f, -426.3766f, 72.2069f;
					break;
				
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
					break;
				
				case 158:
					return -1013.718f, -768.3539f, 69.4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
		
		case 58:
			return func_180();
			break;
		
		case 59:
			return 560f, -405f, -69.6591f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_180()
{
	if (!func_118(Global_1956117))
	{
		return Global_1956117;
	}
	switch (func_181())
	{
		case 0:
			return -29.532f, 6435.136f, 31.162f;
		
		case 1:
			return 1705.214f, 4819.167f, 41.75f;
		
		case 2:
			return 1795.522f, 3899.753f, 33.869f;
		
		case 3:
			return 1335.536f, 2758.746f, 51.099f;
		
		case 4:
			return 795.583f, 1210.78f, 338.962f;
		
		case 5:
			return -3192.67f, 1077.205f, 20.594f;
		
		case 6:
			return -789.719f, 5400.921f, 33.915f;
		
		case 7:
			return -24.384f, 3048.167f, 40.703f;
		
		case 8:
			return 2666.786f, 1469.324f, 24.237f;
		
		case 9:
			return -1454.966f, 2667.503f, 3.2f;
		
		case 10:
			return 2340.418f, 3054.188f, 47.888f;
		
		case 11:
			return 1509.183f, -2146.795f, 76.853f;
		
		case 12:
			return 1137.404f, -1358.654f, 34.322f;
		
		case 13:
			return -57.208f, -2658.793f, 5.737f;
		
		case 14:
			return 1905.017f, 565.222f, 175.558f;
		
		case 15:
			return 974.484f, -1718.798f, 30.296f;
		
		case 16:
			return 779.077f, -3266.297f, 5.719f;
		
		case 17:
			return -587.728f, -1637.208f, 19.611f;
		
		case 18:
			return 733.99f, -736.803f, 26.165f;
		
		case 19:
			return -1694.632f, -454.082f, 40.712f;
		
		case 20:
			return -1330.726f, -1163.948f, 4.313f;
		
		case 21:
			return -496.618f, 40.231f, 52.316f;
		
		case 22:
			return 275.527f, 66.509f, 94.108f;
		
		case 23:
			return 260.928f, -763.35f, 30.559f;
		
		case 24:
			return -478.025f, -741.45f, 30.299f;
		
		case 25:
			return 894.94f, 3603.911f, 32.56f;
		
		case 26:
			return -2166.511f, 4289.503f, 48.733f;
		
		case 27:
			return 1465.633f, 6553.67f, 13.771f;
		
		case 28:
			return 1101.032f, -335.172f, 66.944f;
		
		case 29:
			return 149.683f, -1655.674f, 29.028f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_181()
{
	return Global_2652258.f_2650;
}

int func_182(int iParam0)
{
	if (iParam0 != func_191())
	{
		if ((BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 0) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 1)) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_183(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1853747 != func_191())
	{
		if (iParam1 == 3)
		{
			if (func_184(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 4))
			{
				if (func_184(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (BitTest(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 5))
			{
				if (func_184(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_184(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_189(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_189(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_187(iParam0) };
	}
	else
	{
		Var12 = { func_186(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_185(Var18, -Var0.f_3.f_2) };
	Var18 = { func_185(Var18, Var6.f_3.f_2) };
	*uParam2 = { unk_0xF2A6E8EA57F9D501(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_185(struct<3> Param0, float fParam3)
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

struct<6> func_186(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_187(int iParam0)
{
	return func_188(iParam0);
}

struct<6> func_188(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_189(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_190(int iParam0)
{
	if (iParam0 != func_191())
	{
		if ((BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 3) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 4)) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_191()
{
	return -1;
}

Vector3 func_192(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_193() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		case 20:
			return -1070f, -70f, -100f;
			break;
		
		case 21:
			return 570f, -415f, -70f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_193()
{
	return func_194(unk_0x93E99A2DBCBA9CFA());
}

var func_194(int iParam0)
{
	return unk_0x4186606EC622CA48(Global_2657589[iParam0 /*466*/].f_321.f_3, 28, 31);
}

int func_195(int iParam0)
{
	return func_196(iParam0, 0, 0);
}

int func_196(int iParam0, int iParam1, bool bParam2)
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
		if (func_60() == 0)
		{
			return BitTest(func_94(func_197(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113648.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_197(int iParam0)
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

int func_198(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
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
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
	}
	return 6;
}

void func_199()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xCE4AAA035282336C(uLocal_846[iVar0]))
		{
			unk_0x5E3A54CF3E9DF9FC(uLocal_846[iVar0], 255);
		}
		iVar0++;
	}
}

void func_200()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xCE4AAA035282336C(uLocal_846[iVar0]))
		{
			unk_0x5E3A54CF3E9DF9FC(uLocal_846[iVar0], 0);
		}
		iVar0++;
	}
}

void func_201(bool bParam0)
{
	if (bParam0)
	{
		func_202(7, 1);
	}
	else
	{
		func_202(7, 0);
	}
}

void func_202(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 263)
	{
		if (Global_32543[iVar0 /*23*/].f_16 == iParam0)
		{
			func_203(iVar0, bParam1);
		}
		iVar0++;
	}
}

void func_203(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	iVar1 = iParam0;
	if (bParam1 != BitTest(Global_32543[iVar1 /*23*/].f_11, 3))
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iVar1 /*23*/].f_11), 18);
		if (Global_32540 == 1)
		{
			Global_32541 = 1;
		}
		Global_32540 = 1;
	}
	if (bParam1)
	{
		unk_0xECDAB41968FF21A8(&(Global_32543[iVar1 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_32543[iVar1 /*23*/].f_11), 3);
	}
	if (!BitTest(Global_32543[iVar1 /*23*/].f_11, 3))
	{
		if (unk_0xCE4AAA035282336C(Global_32543[iVar1 /*23*/].f_19))
		{
			unk_0xC9BB10E64C4DE9F9(1);
			unk_0x45533C09A6C9B409(&(Global_32543[iVar1 /*23*/].f_19));
			unk_0xC9BB10E64C4DE9F9(0);
		}
	}
}

void func_204()
{
	float fVar0;
	
	iLocal_839 = func_210(Local_409.f_427, 0);
	func_205(Local_409.f_427);
	if (iLocal_839 != -1)
	{
		fVar0 = func_142(unk_0xC1A5EC5C986B98AD(), func_179(iLocal_839, 0), 1);
		Local_409.f_35 = (fVar0 * 0.3f);
	}
	else
	{
		Local_409.f_35 = 120f;
	}
	if (unk_0xFBD273FDBCF0C5BD(Local_409.f_4, 0))
	{
		Local_409.f_46 = unk_0x2935B4D6CE81318D(Local_409.f_4);
	}
}

void func_205(int iParam0)
{
	func_209();
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			func_202(7, 0);
			func_208(&uLocal_846);
			func_206(&(uLocal_846[0]), 7, 73, 5);
			func_206(&(uLocal_846[1]), 14, 73, 5);
			func_206(&(uLocal_846[2]), 18, 73, 5);
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_206(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xCE4AAA035282336C(*uParam0))
	{
		unk_0x45533C09A6C9B409(uParam0);
	}
	*uParam0 = unk_0x7F0C74F83813841D(func_179(iParam1, 0));
	unk_0xEA4639F4444B7003(*uParam0, iParam2);
	unk_0x1886753DA39F38F8(*uParam0, iParam3);
	unk_0x4049FDC177C92D4B(*uParam0, func_207(iParam1, 0, 0));
	unk_0x225EB85DBC38E707(*uParam0, 1f);
	unk_0x09C78F553DA1AC9D(*uParam0, 1);
}

char* func_207(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
		
		case 44:
			return "S_MO_09";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_ONE";
					}
					else
					{
						return "S_MO_10";
					}
					break;
				
				case 5:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_TWO";
					}
					else
					{
						return "S_MO_10";
					}
					break;
				
				case 11:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BUNKER";
					}
					else
					{
						return "S_MO_B";
					}
					break;
				
				case 10:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_TRUCK";
					}
					else
					{
						return "S_MO_T";
					}
					break;
				
				case 12:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_HANGAR";
					}
					else
					{
						return "S_MO_HA";
					}
					break;
				
				case 13:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_AOC";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 14:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BASE";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 15:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_BUSINESS_HUB";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 16:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_HACKER_TRUCK";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 17:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_ARENA_WARS";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 18:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_CAR_MEET";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 19:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_TUNER_AUTO_SHOP";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 20:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_FIXER_HQ";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
				
				case 21:
					if (bParam2)
					{
						return "PERSONAL_CAR_MOD_VARIATION_JUGGALO_HIDEOUT";
					}
					else
					{
						return "S_MO_AOC";
					}
					break;
			}
			return "S_MO_11";
			break;
		
		case 46:
			return "S_G_12";
			break;
		
		case 47:
			return "S_G_13";
			break;
		
		case 48:
			return "S_G_14";
			break;
		
		case 49:
			return "S_G_15";
			break;
		
		case 52:
			return "S_G_16";
			break;
		
		case 53:
			return "S_G_17";
			break;
		
		case 50:
			return "S_H_08";
			break;
		
		case 51:
			return "S_CL_09";
			break;
		
		case 54:
			return "S_T_07";
			break;
		
		case 55:
			return "S_CL_10";
			break;
		
		case 56:
			return "S_G_18";
			break;
		
		case 57:
			return "S_CL_11";
			break;
		
		case 58:
			return "S_G_19";
			break;
		
		case 59:
			return "S_G_20";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

void func_208(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xCE4AAA035282336C((*uParam0)[iVar0]))
		{
			unk_0x45533C09A6C9B409(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_209()
{
	Local_857[0 /*3*/] = { -829.8521f, -192.3817f, 36.3936f };
	Local_857[1 /*3*/] = { 129.8964f, -1716.632f, 28.0725f };
	Local_857[7 /*3*/] = { 88.1425f, -1391.791f, 28.1999f };
	Local_857[14 /*3*/] = { -1210.999f, -785.9365f, 16.0056f };
	Local_857[18 /*3*/] = { -723.8204f, -160.7985f, 35.92944f };
	Local_857[22 /*3*/] = { 339.2214f, 158.9484f, 102.1509f };
	Local_857[28 /*3*/] = { 15.1447f, -1127.161f, 27.7764f };
	Local_1038[0 /*3*/] = { -815.6819f, -183.7194f, 36.5695f };
	Local_1038[1 /*3*/] = { 136.1871f, -1712.069f, 28.2916f };
	Local_1038[7 /*3*/] = { 84.2585f, -1379.562f, 28.2919f };
	Local_1038[14 /*3*/] = { -1206.156f, -777.4578f, 16.3283f };
	Local_1038[18 /*3*/] = { -716.0551f, -160.1741f, 35.98816f };
	Local_1038[22 /*3*/] = { 342.1741f, 172.9035f, 102.1543f };
	Local_1038[28 /*3*/] = { 22.1268f, -1109.868f, 28.797f };
	Local_1400[7 /*3*/] = { 76.3885f, -1397.665f, 28.3719f };
	Local_1400[14 /*3*/] = { -1193.429f, -769.2299f, 16.3289f };
	Local_1400[18 /*3*/] = { -710.8855f, -152.4612f, 36.4106f };
	Local_1219[0 /*3*/] = { -821.3112f, -207.0323f, 36.3333f };
	Local_1219[1 /*3*/] = { 138.4111f, -1726.907f, 28.0569f };
	Local_1219[7 /*3*/] = { 96.1429f, -1407.346f, 28.1563f };
	Local_1219[14 /*3*/] = { -1202.809f, -795.3967f, 15.2069f };
	Local_1219[18 /*3*/] = { -710.7402f, -178.9253f, 35.8931f };
	Local_1219[22 /*3*/] = { 348.4406f, 156.2108f, 101.9483f };
	Local_1219[28 /*3*/] = { 40.1115f, -1113.923f, 28.1427f };
	fLocal_1592[0] = 33.19f;
	fLocal_1592[1] = 50.6f;
	fLocal_1592[7] = 48.99f;
	fLocal_1592[14] = 37.21f;
	fLocal_1592[18] = 28.39f;
	fLocal_1592[22] = 71.56f;
	fLocal_1592[28] = 148.91f;
}

int func_210(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = -1;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_198(iVar0) == iParam0)
		{
			iVar3++;
			if (iVar1 == -1)
			{
				iVar1 = iVar0;
			}
			else
			{
				iVar2 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		if (iVar2 != -1)
		{
			if (bParam1)
			{
				iVar4 = (unk_0x15A88CFAAFFC6C4B(0, 65535) % iVar3);
				iVar5 = (iVar4 + iVar1);
			}
			else
			{
				iVar5 = 18;
			}
		}
		else
		{
			iVar5 = iVar1;
		}
	}
	return iVar5;
}

void func_211(var uParam0)
{
	func_214(uParam0, 1000);
	if (!unk_0x055111B11E6624FD(uParam0->f_3, 0) && !unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x35DD50D05C962B6A(uParam0->f_3);
		unk_0x06A2A5F6A6959BE7(uParam0->f_3, unk_0xC1A5EC5C986B98AD(), 0);
	}
	func_212();
	func_174(uParam0);
}

void func_212()
{
	Global_20591 = 0;
	func_213();
}

void func_213()
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

void func_214(var uParam0, int iParam1)
{
	if (unk_0xF57C1326FD40C8A7(*uParam0))
	{
		unk_0x42B9FA814615C4F9(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0x9E2404A25985615A(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
	}
}

void func_215()
{
	func_65(&(Local_409.f_55), 2);
	func_65(&(Local_409.f_55), 4);
	func_65(&(Local_409.f_55), 16);
	func_65(&(Local_409.f_55), 64);
	func_65(&(Local_409.f_55), 256);
	func_65(&(Local_409.f_55), 512);
	func_65(&(Local_409.f_55), 1024);
	func_65(&(Local_409.f_55), 2048);
	func_65(&(Local_409.f_55), 4096);
	func_65(&(Local_409.f_55), 1073741824);
	func_65(&(Local_409.f_100), 8);
	func_65(&(Local_409.f_100), 256);
	func_65(&(Local_409.f_100), 2048);
	func_65(&uLocal_1725, 2);
	func_145(&Local_409, 7);
}

void func_216(var uParam0)
{
	unk_0x617AEFB7754C6AA9(unk_0x93E99A2DBCBA9CFA());
	unk_0xE333240A90F2FF3C(unk_0x5DC3DCA82C806319(), 1, 0);
	func_214(uParam0, 1000);
}

void func_217(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_291(uParam0, 16, 4f, 0);
		if (func_218(uParam0))
		{
			func_50();
		}
	}
	func_250(uParam0, iParam2, bParam3);
}

int func_218(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_52())
	{
		Var6 = { func_220() };
		if (!unk_0x2AC37494BBF1DB16(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0x4310A0DB886F9FED(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_219(&Var0);
			if (unk_0x4310A0DB886F9FED(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_219(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_220()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21725 == 4)
	{
		return Global_21344;
	}
	return Var0;
}

int func_221(var uParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (!unk_0x66599E73DBA5A850(uParam0->f_3))
		{
			if ((unk_0x5CD470B5BDDAC029(uParam0->f_3) && (unk_0xA5E11AF0A2B928C1() - iLocal_89) > 500) || unk_0xE0D346789C5160EB(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_222(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (!unk_0xE0D346789C5160EB(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0xA5E11AF0A2B928C1() % 1000) < 50)
			{
			}
			func_160(uParam0, 1);
			if (func_34())
			{
				unk_0xE333240A90F2FF3C(unk_0x5DC3DCA82C806319(), 1, 0);
			}
			if (unk_0xF5F493B789EA063E(uParam0->f_3, joaat("script_task_go_straight_to_coord")) == 1 || unk_0xF5F493B789EA063E(uParam0->f_3, joaat("script_task_go_straight_to_coord")) == 0)
			{
				unk_0x35DD50D05C962B6A(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				unk_0x06A2A5F6A6959BE7(uParam0->f_3, unk_0xC1A5EC5C986B98AD(), 0);
			}
		}
		else if (unk_0xF356C80F3E8D2812(unk_0x5DC3DCA82C806319(), 0))
		{
			func_248(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0x63EF69C6969A3D26(&uVar3);
				unk_0xDBC7406226B5540E(&uVar3);
				unk_0x7D9A648CC1936BDA(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0x06A2A5F6A6959BE7(0, uParam0->f_4, 0);
				unk_0xF2CFC6EC8C85FA78(uVar3);
				unk_0x3D7110D966B0CEA2(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_147(uParam0, 14))
			{
				func_174(uParam0);
				func_163(uParam0, 0);
			}
			if (func_147(uParam0, 9))
			{
				func_144(uParam0, 9, 0);
				unk_0x8581263F2F024518();
				if (unk_0xCE4AAA035282336C(uParam0->f_8))
				{
					unk_0x5E3A54CF3E9DF9FC(uParam0->f_8, 255);
					unk_0xBD91E7D4B770F97E(uParam0->f_8, 1);
				}
			}
			if (!unk_0x055111B11E6624FD(uParam0->f_3, 0))
			{
				fVar4 = ((unk_0xDC58AE028CB223BA(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_247(uParam0, uParam0->f_3) > 300f)
				{
					func_319(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0xF5F493B789EA063E(uParam0->f_3, joaat("script_task_perform_sequence")) != 1 || ((func_162(unk_0xC1A5EC5C986B98AD(), uParam0->f_3, 1) < 20f && func_139(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_139(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_244(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_243(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_242(uParam0->f_4, uParam0->f_3);
								iVar0 = func_241(uParam0, &iVar1);
								if (!unk_0x055111B11E6624FD(iVar0, 0))
								{
									if (iVar1 == uParam0->f_7)
									{
										if (uParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (uParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										unk_0x6FE9A0C01D25F413(iVar0, 0, iVar2);
									}
									else
									{
										unk_0x6FE9A0C01D25F413(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0x73D13C05CA29773A(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0x055111B11E6624FD(iVar0, 0))
											{
												unk_0x6FE9A0C01D25F413(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0x909F139DC199D8E0(uParam0->f_3);
							unk_0xD30E9CAE1FEA1C7E(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x898051DD6FAAF151(unk_0x30BE8A934C020461(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_148(uParam0))
							{
								unk_0x909F139DC199D8E0(uParam0->f_3);
							}
							else if (((unk_0xF5F493B789EA063E(uParam0->f_3, joaat("script_task_perform_sequence")) != 1 && unk_0xF5F493B789EA063E(uParam0->f_3, joaat("script_task_perform_sequence")) != 0) && unk_0xF5F493B789EA063E(uParam0->f_3, joaat("script_task_perform_sequence")) != 7) && func_247(uParam0, uParam0->f_3) > 8f)
							{
								unk_0x63EF69C6969A3D26(&(uParam0->f_243));
								unk_0xDBC7406226B5540E(&(uParam0->f_243));
								unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0x3EE48ADC8C7F5CC4(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0x3EE48ADC8C7F5CC4(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0xF2CFC6EC8C85FA78(uParam0->f_243);
								unk_0x3D7110D966B0CEA2(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0x7BB3D8F4F6310EB8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x9C13FF73F24F78C9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_94)
						{
							if (func_162(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_240(uParam0, 1))
								{
									unk_0x35DD50D05C962B6A(uParam0->f_3);
									func_319(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_239(uParam0->f_4))
								{
									unk_0x35DD50D05C962B6A(uParam0->f_3);
									func_319(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_237(uParam0);
						if (func_247(uParam0, uParam0->f_3) < fVar4 || func_34())
						{
							if (unk_0xE0D346789C5160EB(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_224(uParam0))
								{
									func_223(uParam0);
									iLocal_89 = unk_0xA5E11AF0A2B928C1();
									unk_0x598D91BBD045C1F3(uParam0->f_3, 26, 1);
									func_144(uParam0, 5, 0);
									unk_0xD2D7245575BF62BB();
									unk_0x18CBFAE0D9968DCD(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0xB3FF3200DBD1FC87(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x898051DD6FAAF151(unk_0x30BE8A934C020461(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_223(var uParam0)
{
	if (unk_0xCE4AAA035282336C(uParam0->f_8))
	{
		unk_0xBD91E7D4B770F97E(uParam0->f_8, 0);
		unk_0x45533C09A6C9B409(&(uParam0->f_8));
	}
}

int func_224(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_236("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0x055111B11E6624FD(uParam0->f_3, 0) && !unk_0x055111B11E6624FD(uParam0->f_4, 0))
	{
		func_235();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_233(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_120(uParam0, 0, 1084227584) && func_138(1, 1, 1))
			{
				if (func_240(uParam0, 1))
				{
					iLocal_88 = unk_0xA5E11AF0A2B928C1();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_86 = 1;
				}
				else
				{
					func_319(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_242(uParam0->f_4, uParam0->f_3);
				iVar9 = func_241(uParam0, &iVar10);
				if (!unk_0x055111B11E6624FD(iVar9, 0))
				{
					if (iVar10 == uParam0->f_7)
					{
						if (uParam0->f_7 == 1)
						{
							iVar11 = 262144;
						}
						else
						{
							iVar11 = 131072;
						}
						unk_0x6FE9A0C01D25F413(iVar9, 0, iVar11);
					}
					else
					{
						unk_0x6FE9A0C01D25F413(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0x73D13C05CA29773A(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0x055111B11E6624FD(iVar9, 0))
						{
							unk_0x6FE9A0C01D25F413(iVar9, 0, 4096);
						}
					}
				}
				iLocal_86 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_7 == 0)
			{
				Var6 = { 1.5f, 0f, -0.6422f };
				Var0 = { -1.4309f, 3.958f, 3.5037f };
				Var3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (uParam0->f_7 == 2)
			{
				Var6 = { 1.5f, -1f, -0.6422f };
				Var0 = { 1.4309f, 3.958f, 0.5037f };
				Var3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				Var6 = { -1.5f, -1f, -0.6422f };
				Var0 = { -1.4823f, 4.2333f, 0.5939f };
				Var3 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar12 = func_232(&(uParam0->f_409), unk_0x7394CB479CCA24AF(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0x7394CB479CCA24AF(uParam0->f_4, Var0), 1);
			if (iVar12 == 1)
			{
				Var0.f_2 = (Var0.f_2 + 1.5f);
				if (uParam0->f_7 == 2)
				{
					Var3 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar12 != -1)
			{
				func_231(0, 0, 1);
				unk_0x6FCA8E220FB1053D(unk_0x30BE8A934C020461(uParam0->f_4, 1), 3f, 0);
				unk_0x2117C3CCFF2D957A(unk_0x30BE8A934C020461(uParam0->f_4, 1), 25f, 0);
				unk_0xCD3C8E1022864F65(1);
				unk_0x8581263F2F024518();
				func_128();
				func_250(uParam0, 0, 0);
				Var13 = { unk_0x7394CB479CCA24AF(uParam0->f_4, Var6) };
				unk_0xC2E3C377D893C17A(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0x692C3FDAD7DB53CC(uParam0->f_3, func_229(uParam0));
				func_228(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0x5BF3CF5BAF6ABBBB(*uParam0, unk_0x7394CB479CCA24AF(uParam0->f_4, Var0));
				unk_0x60F73A757779E5B6(*uParam0, uParam0->f_4, Var3, 1);
				unk_0xEEF11E0DB5769366(*uParam0, 1);
				unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
				unk_0xBB6027D1D193CBA6(uParam0->f_3, 0, 0);
				unk_0xD30E9CAE1FEA1C7E(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		
		case 5:
			func_236("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0x055111B11E6624FD(uParam0->f_3, 0) && !unk_0x055111B11E6624FD(uParam0->f_4, 0))
			{
				if (!unk_0x3C3D6D026CF7F51B(uParam0->f_3, 0))
				{
					unk_0x4C18E9202CF6CACA(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0xC66046DE94E06CAC(uParam0->f_4, func_227(uParam0->f_7), 1);
				}
				unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
				unk_0x42B9FA814615C4F9(*uParam0, 0);
				unk_0x42B9FA814615C4F9(uParam0->f_1, 0);
				unk_0xAABD7B0753C5C286(0);
				unk_0xEAB390443C680F72(0, 1065353216);
				unk_0x78DD793477D04C42(800);
				unk_0xCD3C8E1022864F65(1);
				unk_0x8581263F2F024518();
				func_128();
				func_250(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0x35DF833D93BCC488() && !unk_0x6C9BA681FB2251B6())
			{
				func_225(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
			unk_0x42B9FA814615C4F9(*uParam0, 0);
			unk_0x42B9FA814615C4F9(uParam0->f_1, 0);
			unk_0xAABD7B0753C5C286(0);
			unk_0xEAB390443C680F72(0, 1065353216);
			func_225(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0x055111B11E6624FD(uParam0->f_3, 0) && !unk_0x055111B11E6624FD(uParam0->f_4, 0))
			{
				if (unk_0x5CD470B5BDDAC029(uParam0->f_3) || unk_0x3C3D6D026CF7F51B(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0xF5F493B789EA063E(unk_0xC1A5EC5C986B98AD(), joaat("script_task_enter_vehicle")) != 1 && unk_0xF5F493B789EA063E(unk_0xC1A5EC5C986B98AD(), joaat("script_task_enter_vehicle")) != 0)
				{
					unk_0xD30E9CAE1FEA1C7E(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_225(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xE333240A90F2FF3C(unk_0x5DC3DCA82C806319(), 1, 0);
	}
	unk_0xC3578D74003B8E01(1);
	func_24(0, 1, iParam2, 0, 0, 0, 0);
	if (bParam1)
	{
		unk_0x61F7D56FFAFBF706(1);
		unk_0xB1A691274215E4CE(1);
	}
	func_226(23, 0);
}

void func_226(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xECDAB41968FF21A8(&Global_32412, iParam0);
	}
	else
	{
		unk_0x061B1200C95204CB(&Global_32412, iParam0);
	}
}

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 0:
			return 1;
		
		case -1:
			return 0;
		
		default:
	}
	return 2;
}

void func_228(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0xF57C1326FD40C8A7(*uParam0))
	{
		*uParam0 = unk_0xD5B705094825AC04(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

float func_229(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_42() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0x7394CB479CCA24AF(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0x7394CB479CCA24AF(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_230(unk_0x30BE8A934C020461(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_230(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x06A2A02CDC68090B((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_231(int iParam0, int iParam1, int iParam2)
{
	unk_0xE333240A90F2FF3C(unk_0x5DC3DCA82C806319(), 0, iParam0);
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		unk_0x636EFA4C5BC401A8(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 15f);
	}
	unk_0xC3578D74003B8E01(iParam1);
	func_43(0);
	func_24(1, 1, iParam2, 0, 0, 0, 0);
	unk_0x61F7D56FFAFBF706(0);
	unk_0xB1A691274215E4CE(0);
	func_226(23, 1);
}

int func_232(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xB4C9A1D39D0533BF(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0x5A2817B89A8ECCD2(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
		if (iVar8 == 2)
		{
			if (bParam7)
			{
			}
			if (iVar6 == 0)
			{
				*uParam0 = 0;
				return iVar6;
			}
			else
			{
				if (bParam7)
				{
				}
				*uParam0 = 0;
				return iVar6;
			}
		}
		else if (iVar8 == 0)
		{
			if (bParam7)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

int func_233(int iParam0)
{
	if (func_234() && unk_0xA5E11AF0A2B928C1() >= iParam0 + 1000)
	{
		unk_0x6D5ACBBD4CE34249(500);
		while (!unk_0x72474BA05A104E1E())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_43(0);
		func_212();
		return 1;
	}
	return 0;
}

int func_234()
{
	if (unk_0xFEE065E56A9BEF3F())
	{
		return 0;
	}
	if (unk_0x87644B1F984197FE(0, 18) || unk_0x87644B1F984197FE(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_235()
{
	if (func_36())
	{
		unk_0x031879EF9A711F74("appInternet");
	}
	if (func_35())
	{
		unk_0x031879EF9A711F74("appCamera");
	}
	if (func_45(1))
	{
		func_43(0);
	}
}

void func_236(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0xA5E11AF0A2B928C1() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0xA5E11AF0A2B928C1();
}

void func_237(var uParam0)
{
	var uVar0;
	
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (!unk_0x66599E73DBA5A850(uParam0->f_3))
		{
			if (func_161(uParam0->f_3, 1) > 30f || func_238(uParam0))
			{
				if (unk_0xF5F493B789EA063E(uParam0->f_3, joaat("script_task_enter_vehicle")) == 1 || unk_0xF5F493B789EA063E(uParam0->f_3, joaat("script_task_perform_sequence")) == 1)
				{
					unk_0x63EF69C6969A3D26(&uVar0);
					unk_0xDBC7406226B5540E(&uVar0);
					unk_0x06A2A5F6A6959BE7(0, uParam0->f_4, 0);
					unk_0x3EE48ADC8C7F5CC4(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x7D9A648CC1936BDA(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0xF2CFC6EC8C85FA78(uVar0);
					unk_0x3D7110D966B0CEA2(uParam0->f_3, uVar0);
					func_319(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_238(var uParam0)
{
	if ((unk_0xDC58AE028CB223BA(uParam0->f_4) > 3f && func_412(uParam0, 5) > 15f) || unk_0x71E7779DA475F63F(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_239(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0xE95D0CF0802593FC(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0xE95D0CF0802593FC(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0xE95D0CF0802593FC(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0xE95D0CF0802593FC(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0xF66D3BDEBE2E64B9(unk_0x504B9BB48D41C264(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x42BECCBCE4CA667A(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x42BECCBCE4CA667A(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x42BECCBCE4CA667A(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x42BECCBCE4CA667A(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

int func_240(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0xA66E176E5772E965(uParam0->f_4, 1, 0);
		iVar0[1] = unk_0xA66E176E5772E965(uParam0->f_4, 2, 0);
		iVar0[2] = unk_0xA66E176E5772E965(uParam0->f_4, 0, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0x7DE17ACDD8BA2642(iVar0[iVar4]))
			{
				if (unk_0x055111B11E6624FD(iVar0[iVar4], 0))
				{
					if (iVar4 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar4 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar4++;
		}
		if ((unk_0xA5E11AF0A2B928C1() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_241(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		iVar0 = unk_0xA66E176E5772E965(uParam0->f_4, 1, 0);
		if (unk_0x7DE17ACDD8BA2642(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0xA66E176E5772E965(uParam0->f_4, 2, 0);
			if (unk_0x7DE17ACDD8BA2642(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0xA66E176E5772E965(uParam0->f_4, 0, 0);
				if (unk_0x7DE17ACDD8BA2642(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_242(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0x2E240694D642679A(iParam0);
	Var0 = { unk_0x5DC36ABEC3A264E9(iParam0, unk_0x30BE8A934C020461(iParam1, 1)) };
	if (unk_0x504B9BB48D41C264(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x504B9BB48D41C264(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0x73D13C05CA29773A(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0x73D13C05CA29773A(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0x73D13C05CA29773A(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0x73D13C05CA29773A(iParam1, iParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_243(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x055111B11E6624FD(uParam0->f_3, 0))
	{
		if (!unk_0xDB08595445CDE2FF(uParam0->f_3) && func_161(uParam0->f_3, 1) < fParam2)
		{
			if (!func_147(uParam0, 5))
			{
				func_291(uParam0, 5, 0, 0);
			}
		}
		else if (func_147(uParam0, 5))
		{
			func_144(uParam0, 5, 0);
		}
		if (((func_412(uParam0, 5) > IntToFloat(iParam1) && unk_0xDC58AE028CB223BA(uParam0->f_4) < fParam4) && !unk_0xDB08595445CDE2FF(uParam0->f_3)) || func_161(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_244(var uParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	var uVar12;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;
	
	iVar18 = unk_0xD854D152961C41A9(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0xD854D152961C41A9(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0x3C289AF334341CC6(uParam0->f_4, iVar18) };
		Var6 = { unk_0x5DC36ABEC3A264E9(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0x7394CB479CCA24AF(uParam0->f_4, Var6) };
	Var3 = { unk_0x7394CB479CCA24AF(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x22DDCFA0A46050A2(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0xC5B2830898581862(uParam0->f_3, 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_162(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x2655A8EC638E4FD1((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0xB4C9A1D39D0533BF(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0x5A2817B89A8ECCD2(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
					if (iVar17 == 2)
					{
						if (iVar15 == 0)
						{
							iLocal_87 = 2;
						}
						uParam0->f_409 = 0;
					}
					else if (iVar17 == 0)
					{
						uParam0->f_409 = 0;
					}
				}
			}
			else if (unk_0xF5F493B789EA063E(uParam0->f_3, joaat("script_task_perform_sequence")) != 1 && unk_0xF5F493B789EA063E(uParam0->f_3, joaat("script_task_perform_sequence")) != 0)
			{
				unk_0x63EF69C6969A3D26(&(uParam0->f_243));
				unk_0xDBC7406226B5540E(&(uParam0->f_243));
				unk_0x3EE48ADC8C7F5CC4(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
				unk_0x00E06E21BBC8227A(uParam0->f_243, 1);
				unk_0xF2CFC6EC8C85FA78(uParam0->f_243);
				unk_0x3D7110D966B0CEA2(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0x8581263F2F024518();
			if (uParam0->f_411 != 9)
			{
				if (!func_23(uParam0->f_44, 128))
				{
					func_217(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_245(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0x909F139DC199D8E0(uParam0->f_3);
			unk_0xEDB03CCB50D11479(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x63EF69C6969A3D26(&(uParam0->f_243));
			unk_0xDBC7406226B5540E(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0x3EE48ADC8C7F5CC4(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0x3EE48ADC8C7F5CC4(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
			unk_0xF2CFC6EC8C85FA78(uParam0->f_243);
			unk_0x3D7110D966B0CEA2(uParam0->f_3, uParam0->f_243);
			unk_0x63EF69C6969A3D26(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		
		case 3:
			iLocal_87 = 0;
			if (unk_0x7BB3D8F4F6310EB8(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x9C13FF73F24F78C9(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_245(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0xB7C28610A558761B(uParam0, sParam1, uParam2, func_246(iParam3), 0);
}

int func_246(int iParam0)
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

float func_247(var uParam0, int iParam1)
{
	if (!unk_0x055111B11E6624FD(iParam1, 0))
	{
		if (func_148(uParam0))
		{
			return func_162(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_248(var uParam0)
{
	func_172(uParam0, uParam0->f_3);
	if (func_148(uParam0))
	{
		if (func_147(uParam0, 14))
		{
			func_174(uParam0);
			if (unk_0xCE4AAA035282336C(uParam0->f_10))
			{
				unk_0x45533C09A6C9B409(&(uParam0->f_10));
			}
		}
	}
	if (!func_147(uParam0, 9))
	{
		if (unk_0xCE4AAA035282336C(uParam0->f_8))
		{
			unk_0x5E3A54CF3E9DF9FC(uParam0->f_8, 0);
			unk_0xBD91E7D4B770F97E(uParam0->f_8, 0);
		}
		func_291(uParam0, 9, 0, 0);
		func_249("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_249(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x7FC9F66A5DE18E09(sParam0);
	unk_0xAC8CD22C06543F95(iParam1, 1);
}

void func_250(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_50();
		func_291(uParam0, 16, 4f, 0);
		unk_0x8581263F2F024518();
	}
}

int func_251(var uParam0, int iParam1)
{
	if (!unk_0x578F9DB3098790E9(2))
	{
		return 0;
	}
	func_257(12);
	if (func_23(uParam0->f_44, 8))
	{
		if (!func_23(uParam0->f_44, 128))
		{
			if (unk_0xA6AA485513271FDF(unk_0xC1A5EC5C986B98AD()) && !func_23(uParam0->f_44, 256))
			{
				func_65(&(uParam0->f_44), 256);
			}
			if (func_23(uParam0->f_44, 256) && unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				func_217(uParam0, 135, 1, 0, 1);
				func_65(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_255(uParam0, iParam1))
	{
		if (func_161(uParam0->f_3, 1) < 35f)
		{
			if (!func_23(uParam0->f_44, 8))
			{
				unk_0x06A2A5F6A6959BE7(uParam0->f_3, unk_0xC1A5EC5C986B98AD(), 0);
				func_217(uParam0, 133, 1, 0, 1);
				func_65(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x66599E73DBA5A850(uParam0->f_3) || unk_0xC78375EA6037A7DB(uParam0->f_3)) || func_161(uParam0->f_3, 1) > 400f)
		{
			func_319(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x95DC39736F6748E3(uParam0->f_2, 0);
		unk_0x5BC68FEFF4902C2B(uParam0->f_4, 1);
		if (unk_0xA66E176E5772E965(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0x609892518777E215(uParam0->f_4);
			func_253(uParam0);
			func_53(2, 0);
			bLocal_94 = true;
			func_146(&uLocal_90);
			return 1;
		}
		else
		{
			func_319(uParam0, "No Taxi", 21);
			func_252("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_252(char* sParam0, int iParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
}

void func_253(var uParam0)
{
	if (!unk_0x055111B11E6624FD(uParam0->f_4, 0))
	{
		if (func_254())
		{
		}
	}
}

int func_254()
{
	if (BitTest(unk_0x15A88CFAAFFC6C4B(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_255(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			if (unk_0xFBD273FDBCF0C5BD(iVar0, 0))
			{
				iVar1 = unk_0x504B9BB48D41C264(iVar0);
				bVar2 = func_239(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("rhino") || iVar1 == joaat("ratloader")) || iVar1 == joaat("surfer")) || iVar1 == joaat("surfer2")) || iVar1 == joaat("armytanker")) || iVar1 == joaat("barracks")) || iVar1 == joaat("barracks2")) || iVar1 == joaat("crusader")) || iVar1 == joaat("utillitruck")) || iVar1 == joaat("utillitruck2")) || iVar1 == joaat("utillitruck3")) || iVar1 == joaat("airtug")) || iVar1 == joaat("caddy")) || iVar1 == joaat("caddy2")) || iVar1 == joaat("dloader")) || iVar1 == joaat("docktug")) || iVar1 == joaat("flatbed")) || iVar1 == joaat("ripley")) || iVar1 == joaat("romero")) || iVar1 == joaat("towtruck")) || iVar1 == joaat("towtruck2")) || iVar1 == joaat("airbus")) || iVar1 == joaat("bus")) || iVar1 == joaat("coach")) || iVar1 == joaat("rentalbus")) || iVar1 == joaat("tourbus")) || iVar1 == joaat("riot")) || iVar1 == joaat("trash")) || iVar1 == joaat("benson")) || iVar1 == joaat("biff")) || iVar1 == joaat("hauler")) || iVar1 == joaat("packer")) || iVar1 == joaat("phantom")) || iVar1 == joaat("pounder")) || iVar1 == joaat("bulldozer")) || iVar1 == joaat("handler")) || iVar1 == joaat("tiptruck2")) || iVar1 == joaat("cutter")) || iVar1 == joaat("dump")) || iVar1 == joaat("mixer")) || iVar1 == joaat("mixer2")) || iVar1 == joaat("rubble")) || iVar1 == joaat("scrap")) || iVar1 == joaat("tiptruck")) || iVar1 == joaat("camper")) || iVar1 == joaat("taco")) || iVar1 == joaat("boxville")) || iVar1 == joaat("boxville2")) || iVar1 == joaat("boxville3")) || iVar1 == joaat("burrito")) || iVar1 == joaat("burrito2")) || iVar1 == joaat("burrito3")) || iVar1 == joaat("burrito4")) || iVar1 == joaat("gburrito")) || iVar1 == joaat("journey")) || iVar1 == joaat("mule")) || iVar1 == joaat("mule2")) || iVar1 == joaat("pony")) || iVar1 == joaat("rumpo")) || iVar1 == joaat("rumpo2")) || iVar1 == joaat("speedo")) || iVar1 == joaat("speedo2")) || iVar1 == joaat("youga")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("tractor2")) || iVar1 == joaat("fbi")) || iVar1 == joaat("fbi2")) || iVar1 == joaat("pranger")) || iVar1 == joaat("ambulance")) || iVar1 == joaat("dilettante2")) || iVar1 == joaat("firetruk")) || iVar1 == joaat("lguard")) || iVar1 == joaat("dune")) || iVar1 == joaat("pbus")) || iVar1 == joaat("police")) || iVar1 == joaat("police2")) || iVar1 == joaat("police3")) || iVar1 == joaat("police4")) || iVar1 == joaat("policeb")) || iVar1 == joaat("policet")) || iVar1 == joaat("sheriff")) || iVar1 == joaat("sheriff2")) || iVar1 == joaat("stockade"))
				{
					bVar3 = false;
				}
				if (uParam0->f_411 == 7)
				{
					if (iVar1 == joaat("bodhi2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (unk_0xF66D3BDEBE2E64B9(iVar1))
				{
					if (unk_0xA66E176E5772E965(iVar0, -1, 0) == unk_0xC1A5EC5C986B98AD())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0x2E240694D642679A(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_23(uParam0->f_44, 64))
					{
						if (unk_0x578F9DB3098790E9(2))
						{
							func_252("TX_VIP_DMGD", -1);
							if (func_256("TX_VIP_DMGD"))
							{
								func_65(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_23(uParam0->f_44, 32))
					{
						if (unk_0x578F9DB3098790E9(2))
						{
							func_252("TX_VIP_CAR", -1);
							if (func_256("TX_VIP_CAR"))
							{
								func_65(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_23(uParam0->f_44, 16))
					{
						if (unk_0x578F9DB3098790E9(2))
						{
							func_252("TX_VIP_SMALL", -1);
							if (func_256("TX_VIP_SMALL"))
							{
								func_65(&(uParam0->f_44), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_21(&(uParam0->f_44), 16);
			func_21(&(uParam0->f_44), 64);
			func_21(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

bool func_256(char* sParam0)
{
	unk_0x56C9BC27C0FF68D7(sParam0);
	return unk_0x6A92D111B5409879(0);
}

void func_257(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xCCE9BCDAB8B7FAED() || func_259())
	{
		uVar0 = iParam0;
		unk_0x989939160154E37F(8, &uVar0, 1, 1);
	}
	else if (unk_0x674D69D3896862C7() || func_258())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x98F31DBBB3410994(8, &cVar1);
	}
}

var func_258()
{
	return (unk_0x01689609224A6C92() || unk_0xEE17703CF2C2875A());
}

var func_259()
{
	return (unk_0x8CCF8DC8E92BDA94() || unk_0x14F62099DEBAEA33());
}

void func_260(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_22(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_261(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0x061B1200C95204CB(&(uParam0->f_60[iVar0 /*3*/]), true);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0xECDAB41968FF21A8(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0x061B1200C95204CB(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_262(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_263()
{
	Local_343.f_0 = 0;
	func_280(42991, 42966, 1);
	func_280(42727, 42704, 1);
	func_280(42642, 42617, 1);
	func_280(42545, 42521, 1);
	func_280(42411, 42390, 1);
	func_280(42337, 42312, 1);
	func_280(42170, 42147, 1);
}

int func_264(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_319(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_265(var uParam0)
{
	if (unk_0x7DE17ACDD8BA2642(uParam0->f_4))
	{
		if (func_267(uParam0->f_4))
		{
			func_266(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_266(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_267(int iParam0)
{
	if (!unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x34DAE7F7DF2CC995(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0x248929CB6622481D(iParam0, 0, 40000) || unk_0x248929CB6622481D(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_268(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_319(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_269(var uParam0)
{
	if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0)
	{
		if (func_270(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_270(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_271(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_266(uParam0, 11);
	return 1;
}

int func_272(var uParam0)
{
	if (unk_0x7DE17ACDD8BA2642(uParam0->f_4))
	{
		if (unk_0x1589BC95A4C50F21(uParam0->f_4) && !unk_0xD565A4F8A4D47FCB(uParam0->f_4))
		{
			if (!func_147(uParam0, 25))
			{
				func_291(uParam0, 25, 0, 0);
			}
			else if (func_412(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_147(uParam0, 25))
		{
			func_144(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_273(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_319(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_274(var uParam0)
{
	if (!unk_0x055111B11E6624FD(uParam0->f_4, 0))
	{
		if (unk_0x266E12A11D225611(uParam0->f_4))
		{
			if (unk_0x248929CB6622481D(uParam0->f_4, 0, 40000) || unk_0x248929CB6622481D(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_275(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_319(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_276(var uParam0)
{
	if (!unk_0x055111B11E6624FD(uParam0->f_4, 0))
	{
		if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
		{
			if (unk_0xF193A4B306E6BF93(uParam0->f_4))
			{
				if (func_270(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_277(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_319(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_278(var uParam0)
{
	if (unk_0x7DE17ACDD8BA2642(uParam0->f_4))
	{
		if (func_279(uParam0->f_4))
		{
			func_266(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_279(int iParam0)
{
	if (!unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x34DAE7F7DF2CC995(iParam0) == 0f)
	{
		if (!unk_0xFBD273FDBCF0C5BD(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0x248929CB6622481D(iParam0, 0, 40000) || unk_0x248929CB6622481D(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_280(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343.f_0 >= 16)
	{
		Local_343.f_0 = 16;
		return;
	}
	Local_343.f_1[Local_343.f_0 /*4*/] = 0;
	func_66(&(Local_343.f_1[Local_343.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_66(&(Local_343.f_1[Local_343.f_0 /*4*/]), 2);
	}
	Local_343.f_1[Local_343.f_0 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343.f_0 /*4*/].f_3 = iParam1;
	Local_343.f_0++;
}

int func_281(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_319(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_282(var uParam0)
{
	if (unk_0x7DE17ACDD8BA2642(uParam0->f_3))
	{
		if ((unk_0x66599E73DBA5A850(uParam0->f_3) || unk_0x055111B11E6624FD(uParam0->f_3, 0)) || unk_0x584CD220C093B0B4(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_283()
{
	Local_190[5 /*10*/] = 5;
	Local_190[5 /*10*/].f_1 = 0;
	Local_190[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_190[5 /*10*/].f_9 = 78;
	Local_190[0 /*10*/] = 5;
	Local_190[0 /*10*/].f_1 = 0;
	Local_190[0 /*10*/].f_2 = "TX_AIR_N";
	Local_190[0 /*10*/].f_9 = 76;
	Local_190[2 /*10*/] = 5;
	Local_190[2 /*10*/].f_1 = 0;
	Local_190[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_190[2 /*10*/].f_9 = 21;
	Local_190[1 /*10*/] = 10;
	Local_190[1 /*10*/].f_1 = 0;
	Local_190[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_190[1 /*10*/].f_9 = 71;
	Local_190[4 /*10*/] = 10;
	Local_190[4 /*10*/].f_1 = 0;
	Local_190[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_190[4 /*10*/].f_9 = 79;
	Local_190[6 /*10*/] = 10;
	Local_190[6 /*10*/].f_1 = 0;
	Local_190[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_190[6 /*10*/].f_9 = 80;
	Local_190[9 /*10*/] = 15;
	Local_190[9 /*10*/].f_1 = 0;
	Local_190[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_190[9 /*10*/].f_9 = 82;
	Local_190[8 /*10*/] = 15;
	Local_190[8 /*10*/].f_1 = 0;
	Local_190[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_190[8 /*10*/].f_9 = 72;
	Local_190[7 /*10*/] = 15;
	Local_190[7 /*10*/].f_1 = 0;
	Local_190[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_190[7 /*10*/].f_9 = 74;
	Local_190[11 /*10*/] = 5;
	Local_190[11 /*10*/].f_1 = 0;
	Local_190[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_190[11 /*10*/].f_9 = 70;
	Local_190[12 /*10*/] = 5;
	Local_190[12 /*10*/].f_1 = 0;
	Local_190[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_190[12 /*10*/].f_9 = 69;
	Local_190[13 /*10*/] = 10;
	Local_190[13 /*10*/].f_1 = 0;
	Local_190[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_190[13 /*10*/].f_9 = 67;
	Local_190[14 /*10*/] = 10;
	Local_190[14 /*10*/].f_1 = 0;
	Local_190[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_190[14 /*10*/].f_9 = 75;
}

int func_284()
{
	if (!unk_0x0CBB7C273DED26E7(iLocal_841))
	{
		func_236("TAXI_ASSETS_STREAMED - Loading A_F_Y_BevHills_03", &iLocal_1587, 1000);
		return 0;
	}
	if (!unk_0x5FAF55B1F052A2E6(uLocal_1732))
	{
		return 0;
	}
	if (!func_285(&iLocal_1587, 0))
	{
		func_236("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_1587, 1000);
		return 0;
	}
	return 1;
}

int func_285(int iParam0, bool bParam1)
{
	if (!unk_0x0CBB7C273DED26E7(func_20()))
	{
		func_236("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x2BBF749E555360DC("gestures@m@standing@casual"))
		{
			func_236("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x2BBF749E555360DC("oddjobs@taxi@"))
	{
		func_236("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x2BBF749E555360DC("oddjobs@towingcome_here"))
	{
		func_236("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x2BBF749E555360DC("misscommon@response"))
	{
		func_236("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x578F9DB3098790E9(2))
	{
		func_236("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_286(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			uParam0->f_123 = "TRS_STREAMING";
			break;
		
		case 2:
			uParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			uParam0->f_123 = " TRS_SPAWNING ";
			break;
		
		case 4:
			uParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			uParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			uParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			uParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			uParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			uParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			uParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			uParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			uParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			uParam0->f_123 = " TRS_CUTSCENE ";
			break;
		
		case 20:
			uParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			uParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			uParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			uParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			uParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			uParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			uParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			uParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			uParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			uParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			uParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			uParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			uParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			uParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			uParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			uParam0->f_123 = " TRS_CLEANUP ";
			break;
		
		case 21:
			uParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			uParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_410 = iParam1;
}

int func_287(var uParam0)
{
	if (!unk_0x66599E73DBA5A850(uParam0->f_3))
	{
		uParam0->f_8 = func_288(uParam0->f_3, 0, 0);
		unk_0x160DACD458B12EAF(1, 0);
		unk_0xBD91E7D4B770F97E(uParam0->f_8, 1);
		unk_0x4049FDC177C92D4B(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0xEDB03CCB50D11479(uParam0->f_3, unk_0xC1A5EC5C986B98AD(), -1, 2048, 4);
	}
	return 1;
}

int func_288(int iParam0, bool bParam1, bool bParam2)
{
	return func_167(iParam0, !bParam1, bParam2);
}

int func_289(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0x7DE17ACDD8BA2642(uParam0->f_3))
	{
		func_290(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_40(uParam0->f_14, 0);
		unk_0x6FCA8E220FB1053D(uParam0->f_14, 2f, 0);
		func_38(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = unk_0x7473BF7400723656(uParam0->f_11);
		}
		else if (unk_0x7DE17ACDD8BA2642(Global_112358.f_225[0]))
		{
			uParam0->f_3 = Global_112358.f_225[0];
			unk_0x85BAE84748AD1A23(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = unk_0x69FDD9508259E5B5(26, iParam8, uParam0->f_11, fParam9, 1, 1);
		}
		func_8(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		unk_0xEE72EF85581D1171(uParam0->f_3, sParam7);
		unk_0x992BB708B4B7A005(uParam0->f_3, 112, 1);
		if (!unk_0x66599E73DBA5A850(uParam0->f_3))
		{
			unk_0x73562E6072D7A39D(uParam0->f_3, 250);
			unk_0x598D91BBD045C1F3(uParam0->f_3, 32, 0);
			unk_0x598D91BBD045C1F3(uParam0->f_3, 104, 1);
			unk_0x598D91BBD045C1F3(uParam0->f_3, 177, 1);
			unk_0x598D91BBD045C1F3(uParam0->f_3, 116, 0);
			unk_0xDA95D0C19E737224("TAXI_Passenger", &(uParam0->f_413));
			unk_0x0133FF6E23A1DCA4(1, uParam0->f_413, joaat("player"));
			unk_0x0133FF6E23A1DCA4(2, uParam0->f_413, joaat("COP"));
			unk_0x8386356641D0DED1(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_290(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0x8BC4F397AF456976(Param1, 20f, 5f, 0);
}

void func_291(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_108(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_107(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_108(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_107(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_292()
{
	unk_0x852EC2A7DE66202D(iLocal_841);
	uLocal_1732 = func_294();
	func_293(0);
}

void func_293(bool bParam0)
{
	unk_0x852EC2A7DE66202D(func_20());
	if (bParam0)
	{
		unk_0x28818732C8F0F80E("gestures@m@standing@casual");
	}
	unk_0x28818732C8F0F80E("oddjobs@taxi@");
	unk_0x28818732C8F0F80E("oddjobs@towingcome_here");
	unk_0x28818732C8F0F80E("misscommon@response");
	unk_0xA3C681843B51A4CC("TAXI", 2);
	if (!func_23(Global_113648.f_19099, 128))
	{
		func_65(&(Global_113648.f_19099), 128);
	}
}

var func_294()
{
	return unk_0x2B4645565204EA06("MIDSIZED_MESSAGE");
}

void func_295(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0)
		{
			if (bParam2)
			{
				if (func_412(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_217(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_217(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_291(uParam0, 10, 0f, 1);
				}
			}
			else if (func_412(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_217(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_217(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_291(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_412(uParam0, 10) > 30f)
		{
			if (!func_52())
			{
				if (uParam0->f_112)
				{
					func_217(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_217(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_291(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_23(uParam0->f_100, 64))
	{
		if (!func_16(&(Local_190[5 /*10*/].f_6)))
		{
			func_146(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_105(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_318(uParam0))
			{
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_317(uParam0, 1);
				func_315(5, uParam0);
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 1))
	{
		if (!func_16(&(Local_190[0 /*10*/].f_6)))
		{
			func_146(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_105(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_313(uParam0))
			{
				func_317(uParam0, 1);
				func_315(0, uParam0);
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 2))
	{
		if (!func_16(&(Local_190[1 /*10*/].f_6)))
		{
			func_146(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_105(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_312(uParam0))
			{
				func_317(uParam0, 1);
				func_315(1, uParam0);
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 2048))
	{
		if (!func_16(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0x7DE17ACDD8BA2642(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x2935B4D6CE81318D(uParam0->f_4);
				func_146(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_105(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_311(uParam0))
			{
				func_317(uParam0, 1);
				func_315(8, uParam0);
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 128))
	{
		if (!func_16(&(Local_190[6 /*10*/].f_6)))
		{
			func_146(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_105(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_310(uParam0))
			{
				func_317(uParam0, 1);
				func_315(6, uParam0);
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 32))
	{
		if (!func_16(&(Local_190[4 /*10*/].f_6)))
		{
			func_146(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_105(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_309(uParam0))
			{
				func_317(uParam0, 1);
				func_315(4, uParam0);
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 256))
	{
		if (!func_16(&(Local_190[7 /*10*/].f_6)))
		{
			func_146(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_105(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_308(uParam0))
			{
				func_315(7, uParam0);
				func_317(uParam0, 1);
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 8))
	{
		if (!func_16(&(Local_190[9 /*10*/].f_6)))
		{
			func_146(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_105(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0x617AEFB7754C6AA9(unk_0x93E99A2DBCBA9CFA());
		}
		else if (func_105(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_307(uParam0))
			{
				func_317(uParam0, 1);
				func_315(9, uParam0);
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 16384))
	{
		if (!func_16(&(Local_190[13 /*10*/].f_6)))
		{
			func_146(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_105(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_301(uParam0))
			{
				func_317(uParam0, 1);
				func_315(13, uParam0);
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 32768))
	{
		if (!func_16(&(Local_190[14 /*10*/].f_6)))
		{
			func_146(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_105(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_300(uParam0))
			{
				func_317(uParam0, 1);
				func_315(14, uParam0);
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 4096))
	{
		if (!func_16(&(Local_190[11 /*10*/].f_6)))
		{
			func_146(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_105(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_299(uParam0))
			{
				func_317(uParam0, 1);
				func_315(11, uParam0);
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 8192))
	{
		if (!func_16(&(Local_190[12 /*10*/].f_6)))
		{
			func_146(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_105(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_298(uParam0))
			{
				func_317(uParam0, 1);
				func_315(12, uParam0);
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_314(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_100, 4))
	{
		if (!func_16(&(Local_190[2 /*10*/].f_6)))
		{
			func_297(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_105(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_296(uParam0))
			{
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_317(uParam0, 1);
				func_315(2, uParam0);
				func_314(uParam0);
			}
		}
	}
}

int func_296(var uParam0)
{
	float fVar0;
	
	if (!unk_0x66599E73DBA5A850(uParam0->f_2))
	{
		if ((!unk_0x63E1343737CA1E47(uParam0->f_2) && !func_16(&(Local_190[0 /*10*/].f_3))) && !func_16(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0xDC58AE028CB223BA(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_146(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_105(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0xDC58AE028CB223BA(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_104(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_104(&(Local_190[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_297(var uParam0, float fParam1)
{
	if (!func_16(uParam0))
	{
		func_108(uParam0, fParam1);
	}
}

int func_298(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		Var0 = { unk_0x87A3566B73711330(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_16(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[12 /*10*/].f_3)))
			{
				func_146(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_105(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_104(&(Local_190[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_104(&(Local_190[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_299(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0) && !func_16(&(Local_190[0 /*10*/].f_3))) && !func_16(&(Local_190[1 /*10*/].f_3))) && !func_16(&(Local_190[5 /*10*/].f_3))) && !func_16(&(Local_190[9 /*10*/].f_3))) && !func_16(&(Local_190[7 /*10*/].f_3))) && !func_16(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x87A3566B73711330(uParam0->f_4, 1) };
		if (unk_0x2655A8EC638E4FD1(Var0.f_0) > 2.5f && !func_16(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[11 /*10*/].f_3)))
			{
				func_146(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_105(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0x2655A8EC638E4FD1(uLocal_342) - unk_0x2655A8EC638E4FD1(Var0.f_0)) < 0f)
			{
				func_104(&(Local_190[11 /*10*/].f_3));
				return 1;
			}
			else if (func_105(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_104(&(Local_190[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_300(var uParam0)
{
	if (((((unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0) && !func_16(&(Local_190[0 /*10*/].f_3))) && !func_16(&(Local_190[8 /*10*/].f_3))) && !func_16(&(Local_190[5 /*10*/].f_3))) && !func_16(&(Local_190[9 /*10*/].f_3))) && !func_16(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_16(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0xC51EF944AABAC0E5(unk_0x30BE8A934C020461(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0x7DE17ACDD8BA2642(uParam0->f_5))
			{
				if ((unk_0xDC58AE028CB223BA(uParam0->f_4) > 15f && func_162(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x055111B11E6624FD(uParam0->f_5, 0) && !unk_0x9CFCDD9C62B56708(uParam0->f_5, -1, 0)))
				{
					func_146(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_105(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_162(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x07960491F4346AF3(uParam0->f_5))
		{
			func_104(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_105(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_104(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x07960491F4346AF3(uParam0->f_5))
		{
			func_104(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_301(var uParam0)
{
	if (((unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0) && !func_16(&(Local_190[9 /*10*/].f_3))) && !func_16(&(Local_190[7 /*10*/].f_3))) && !func_16(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_302(uParam0->f_4) && unk_0xDC58AE028CB223BA(uParam0->f_4) > 15f)
		{
			if (!func_16(&(Local_190[13 /*10*/].f_3)))
			{
				func_146(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_105(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_104(&(Local_190[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_104(&(Local_190[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_302(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	struct<3> Var24;
	float fVar27;
	
	unk_0x16BB0517A69884B4(unk_0x30BE8A934C020461(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0x16BB0517A69884B4(unk_0x30BE8A934C020461(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0x4065C06872F225A8(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_306((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_305(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_303(unk_0x30BE8A934C020461(iParam0, 1), Var15, Var18, Var21);
}

int func_303(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	Param0.f_2 = 0f;
	Param3.f_2 = 0f;
	Param6.f_2 = 0f;
	Param9.f_2 = 0f;
	Var0 = { func_306(Param6 - Param3) };
	Var3 = { func_306(Param9 - Param3) };
	fVar6 = func_304(Param0, Var0);
	fVar7 = func_304(Param3, Var0);
	fVar8 = func_304(Param6, Var0);
	fVar9 = func_304(Param0, Var3);
	fVar10 = func_304(Param3, Var3);
	fVar11 = func_304(Param9, Var3);
	if (fVar7 > fVar8)
	{
		fVar12 = fVar7;
		fVar7 = fVar8;
		fVar8 = fVar12;
	}
	if (fVar6 < fVar7 || fVar6 > fVar8)
	{
		return 0;
	}
	if (fVar10 > fVar11)
	{
		fVar13 = fVar10;
		fVar10 = fVar11;
		fVar11 = fVar13;
	}
	if (fVar9 < fVar10 || fVar9 > fVar11)
	{
		return 0;
	}
	return 1;
}

float func_304(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_305(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	
	switch (iParam3)
	{
		case 0:
			Var0.f_0 = -Param0.f_1;
			Var0.f_1 = Param0.f_0;
			break;
		
		case 1:
			Var0.f_0 = -Param0.f_0;
			Var0.f_1 = -Param0.f_1;
			break;
		
		case 2:
			Var0.f_0 = Param0.f_1;
			Var0.f_1 = -Param0.f_0;
			break;
	}
	Var0.f_2 = Param0.f_2;
	return Var0;
}

Vector3 func_306(struct<3> Param0)
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

int func_307(var uParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (unk_0xA66E176E5772E965(uParam0->f_4, -1, 0) == unk_0xC1A5EC5C986B98AD())
		{
			if (unk_0xBA9A13B3E8BC6817(unk_0x93E99A2DBCBA9CFA()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_308(var uParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (unk_0xA66E176E5772E965(uParam0->f_4, -1, 0) == unk_0xC1A5EC5C986B98AD())
		{
			if (unk_0x71E7779DA475F63F(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (unk_0xBE130DD171F83A37(uParam0->f_4) <= -145f || unk_0xBE130DD171F83A37(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (unk_0xBE130DD171F83A37(uParam0->f_4) <= 35f && unk_0xBE130DD171F83A37(uParam0->f_4) >= -35f)
				{
					iLocal_341 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_309(var uParam0)
{
	int iVar0;
	
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		iVar0 = unk_0x7F4FC0C4AE291DE4(unk_0x93E99A2DBCBA9CFA());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_190[4 /*10*/].f_3)))
			{
				func_146(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_105(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_104(&(Local_190[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_104(&(Local_190[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_310(var uParam0)
{
	int iVar0;
	
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		iVar0 = unk_0x1C9C75E83B7338BC(unk_0x93E99A2DBCBA9CFA());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_190[6 /*10*/].f_3)))
			{
				func_146(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_105(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_104(&(Local_190[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_104(&(Local_190[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_311(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (unk_0x85A0C6DDA57C5652(uParam0->f_4))
		{
			iVar0 = unk_0x2935B4D6CE81318D(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0x5CE354E3C73D2002(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_217(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_217(uParam0, 72, 1, 0, 1);
				}
				func_104(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_312(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		Var0 = { unk_0x87A3566B73711330(uParam0->f_4, 1) };
		if (unk_0x2655A8EC638E4FD1(Var0.f_0) > 3f && !func_16(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_190[1 /*10*/].f_3)))
			{
				func_146(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_105(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_104(&(Local_190[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_104(&(Local_190[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_313(var uParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (!unk_0xD565A4F8A4D47FCB(uParam0->f_4) && unk_0xDA70CA6A0D1738D3(uParam0->f_4))
		{
			if (!func_16(&(Local_190[0 /*10*/].f_3)))
			{
				func_146(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_105(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_104(&(Local_190[0 /*10*/].f_3));
				func_107(&(Local_190[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_104(&(Local_190[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_314(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_16(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_107(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_291(uParam0, 10, 0f, 1);
	unk_0x617AEFB7754C6AA9(unk_0x93E99A2DBCBA9CFA());
}

void func_315(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_316(uParam1, iParam0);
	func_104(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_316(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_317(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_318(var uParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (unk_0xDC58AE028CB223BA(uParam0->f_4) > 25f)
		{
			if (!func_16(&(Local_190[5 /*10*/].f_3)))
			{
				func_146(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_105(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_104(&(Local_190[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_104(&(Local_190[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_319(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_212();
	func_433(2);
	Var0 = { func_338() };
	if ((!unk_0x2AC37494BBF1DB16(&Var0) && func_52()) && !unk_0x4310A0DB886F9FED(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x8581263F2F024518();
		unk_0xCD3C8E1022864F65(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0x055111B11E6624FD(uParam0->f_3, 0))
		{
			if (!func_124(uParam0))
			{
				if (unk_0x7BB3D8F4F6310EB8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x82F27DF65F4D68B5(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0x7BB3D8F4F6310EB8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x82F27DF65F4D68B5(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0x7BB3D8F4F6310EB8(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x82F27DF65F4D68B5(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_291(uParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aband2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				func_336(uParam0, &Var0);
			}
			else if (!unk_0x66599E73DBA5A850(uParam0->f_3))
			{
				func_245(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (uParam0->f_115)
			{
				StringConCat(&Var0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&Var0, "_aggro", 24);
			}
			func_336(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_336(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_336(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_336(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_336(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_124(uParam0))
			{
				if (unk_0xF193A4B306E6BF93(uParam0->f_4))
				{
					func_334(uParam0, 4096, 0);
				}
				else
				{
					func_334(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_336(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_336(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_shot2", 24);
				}
				else
				{
					StringConCat(&Var0, "_shot1", 24);
				}
				func_336(uParam0, &Var0);
			}
			else if (!unk_0x66599E73DBA5A850(uParam0->f_3))
			{
				func_245(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x8FE445B0989D8C71(unk_0x93E99A2DBCBA9CFA(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_336(uParam0, &Var0);
			unk_0x8FE445B0989D8C71(unk_0x93E99A2DBCBA9CFA(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_336(uParam0, &Var0);
			unk_0x8FE445B0989D8C71(unk_0x93E99A2DBCBA9CFA(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_53(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_336(uParam0, &Var0);
			}
			else if (!unk_0x66599E73DBA5A850(uParam0->f_3))
			{
				func_245(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_334(uParam0, 0, 0);
			func_336(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_53(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_336(uParam0, &Var0);
			}
			else if (!unk_0x66599E73DBA5A850(uParam0->f_3))
			{
				func_245(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_336(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_53(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_336(uParam0, &Var0);
			}
			else if (!unk_0x66599E73DBA5A850(uParam0->f_3))
			{
				func_245(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_333(&Var0);
			func_320(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (uParam0->f_115)
			{
				StringConCat(&Var0, "_aband2", 24);
			}
			else
			{
				StringConCat(&Var0, "_fail1", 24);
			}
			func_336(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (uParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&Var0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				if (uParam0->f_410 > 5)
				{
					func_336(uParam0, &Var0);
				}
			}
			else if (!unk_0x66599E73DBA5A850(uParam0->f_3))
			{
				func_245(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_53(3, 0);
		}
		func_291(uParam0, 3, 0f, 1);
	}
}

int func_320(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_332(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_321(sParam2, iParam3, 0);
}

int func_321(char* sParam0, int iParam1, bool bParam2)
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
					func_213();
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
		if (func_331(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_330();
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
				func_329();
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
				if (func_328())
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
			if (func_32())
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
			func_327();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_326();
		func_322();
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
		func_213();
	}
	return 0;
}

void func_322()
{
	if (!func_323())
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

int func_323()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_191())
	{
		return 0;
	}
	if (func_324(unk_0x93E99A2DBCBA9CFA()))
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

bool func_324(int iParam0)
{
	return func_325(iParam0, 20);
}

var func_325(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

void func_326()
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

void func_327()
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

int func_328()
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

void func_329()
{
	if (func_80(14))
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
		Global_20383 = func_101();
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

void func_330()
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

bool func_331(int iParam0, int iParam1)
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

void func_332(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_333(char* sParam0)
{
	switch (func_3(unk_0xC1A5EC5C986B98AD()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_334(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x055111B11E6624FD(uParam0->f_3, 0))
	{
		unk_0xC5B2830898581862(uParam0->f_3, 0);
		unk_0x5CE354E3C73D2002(uParam0->f_3);
		unk_0x474AA9EF29305EA8(uParam0->f_3, 3, 0);
		unk_0x7FE5E05BE63F6CB8(uParam0->f_3, 17, 1);
		unk_0x909F139DC199D8E0(uParam0->f_3);
		if ((func_142(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_118(uParam0->f_29)) && !bParam2)
		{
			func_335(uParam0);
		}
		else
		{
			unk_0x474AA9EF29305EA8(uParam0->f_3, 1024, 1);
			unk_0x474AA9EF29305EA8(uParam0->f_3, 131072, 1);
			unk_0xDBC7406226B5540E(&uVar0);
			unk_0x6FE9A0C01D25F413(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x984708151807AC6D(0, 1193033728, 0);
			}
			else
			{
				unk_0xC6C9BF71106ABCAC(0, unk_0xC1A5EC5C986B98AD(), 1000f, -1, 0, 0);
			}
			unk_0x82C6DD5E8460E2C0(0, 0);
			unk_0xF2CFC6EC8C85FA78(uVar0);
			unk_0x3D7110D966B0CEA2(uParam0->f_3, uVar0);
			unk_0x63EF69C6969A3D26(&uVar0);
		}
		unk_0x71A535529C1CA5DF(uParam0->f_3, 1);
	}
}

void func_335(var uParam0)
{
	var uVar0;
	
	if (!unk_0x055111B11E6624FD(uParam0->f_3, 0))
	{
		if (func_41(func_42(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0x692C3FDAD7DB53CC(uParam0->f_3, 84.9058f);
				unk_0x71A535529C1CA5DF(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x692C3FDAD7DB53CC(uParam0->f_3, 68.3138f);
				unk_0x71A535529C1CA5DF(uParam0->f_3, 1);
			}
			else
			{
				unk_0x984708151807AC6D(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0x909F139DC199D8E0(uParam0->f_3);
			unk_0x63EF69C6969A3D26(&uVar0);
			unk_0xDBC7406226B5540E(&uVar0);
			unk_0x6FE9A0C01D25F413(0, 0, 0);
			unk_0x82C6DD5E8460E2C0(0, 0);
			unk_0x7D9A648CC1936BDA(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x2B8574FAEA21141B(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0xD0F356328850A61C(0, 1);
				unk_0x7D9A648CC1936BDA(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x2CD3E39D98CC3FA9(0, 151.7794f, 0);
				unk_0x2B8574FAEA21141B(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x978687517F88D889(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0x978687517F88D889(0, uParam0->f_29, 15f, 20000);
				unk_0x984708151807AC6D(0, 1193033728, 0);
			}
			else
			{
				unk_0x3EE48ADC8C7F5CC4(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x3EE48ADC8C7F5CC4(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0x271BB87FB0E07F8A(uParam0->f_29, 15f, 1))
			{
				unk_0x978687517F88D889(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x984708151807AC6D(0, 1193033728, 0);
			}
			unk_0xF2CFC6EC8C85FA78(uVar0);
			unk_0x3D7110D966B0CEA2(uParam0->f_3, uVar0);
			unk_0x63EF69C6969A3D26(&uVar0);
		}
		unk_0x71A535529C1CA5DF(uParam0->f_3, 1);
	}
}

void func_336(var uParam0, char* sParam1)
{
	if (func_337(uParam0))
	{
		func_320(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_337(var uParam0)
{
	if (!unk_0x055111B11E6624FD(uParam0->f_3, 0))
	{
		if (func_162(unk_0xC1A5EC5C986B98AD(), uParam0->f_3, 1) < 40f && !unk_0xDB08595445CDE2FF(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_338()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21725 == 4)
	{
		iVar6 = unk_0x2EAC620A648B0397();
		iVar6 = (iVar6 + Global_22735);
		if (iVar6 > -1)
		{
			return Global_20593[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_339(var uParam0)
{
	return uParam0->f_118;
}

void func_340()
{
	func_372(&Local_409);
	if (func_371(&Local_409, &Local_1654))
	{
		switch (Local_1654.f_27)
		{
			case 0:
				if (Local_409.f_410 == 9)
				{
					if (!func_370(&Local_409))
					{
						if (func_369("TX_OBJ_TTB_DO") || unk_0xCE4AAA035282336C(Local_409.f_9))
						{
							Local_1654.f_27++;
						}
						else if (func_368(&Local_409) != 10)
						{
							func_217(&Local_409, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_368(&Local_409) > 10 && func_368(&Local_409) != 20) && !func_370(&Local_409))
				{
					func_217(&Local_409, 20, 1, 0, 0);
					if (bLocal_1653)
					{
					}
				}
				break;
			
			case 2:
				if (func_412(&Local_409, 18) > unk_0xD88C7A93096DA0F7(2f, 10f))
				{
					if (func_368(&Local_409) != 17)
					{
						func_217(&Local_409, 17, 1, 0, 0);
						if (bLocal_1653)
						{
						}
					}
				}
				break;
			
			case 3:
				if (func_412(&Local_409, 18) > unk_0xD88C7A93096DA0F7(2f, 10f))
				{
					if (func_368(&Local_409) != 18)
					{
						func_217(&Local_409, 18, 1, 0, 0);
						if (bLocal_1653)
						{
						}
					}
				}
				break;
			
			case 4:
				if (func_412(&Local_409, 18) > 30f)
				{
					if (func_368(&Local_409) != 16)
					{
						func_217(&Local_409, 16, 1, 0, 0);
						if (bLocal_1653)
						{
						}
					}
				}
				break;
			
			case 5:
				if (func_412(&Local_409, 18) > unk_0xD88C7A93096DA0F7(8f, 16f))
				{
				}
				break;
			}
	}
	func_341(&Local_409, &uLocal_1684, &Local_1654, bLocal_1653);
}

int func_341(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_349(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_147(uParam0, 2))
	{
		if (func_348(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0xA5E11AF0A2B928C1() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_347(uParam0))
				{
					uParam2->f_7 = { func_346(uParam1) };
					func_320(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_52())
				{
					uParam2->f_13 = { func_220() };
					if (unk_0x4310A0DB886F9FED(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_66(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_344(uParam1);
					func_291(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_154(uParam0))
				{
					if (func_52())
					{
						func_291(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_343() };
						if (unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_52())
				{
					uParam2->f_19 = { func_338() };
				}
				else
				{
					func_66(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_344(uParam1);
					func_291(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_147(uParam0, 14) && !func_52()) && !func_154(uParam0)) && func_412(uParam0, 18) > 1f)
				{
					func_291(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_52())
				{
					if (func_412(uParam0, 18) > 1f)
					{
						if (!unk_0x2AC37494BBF1DB16(&(uParam2->f_1)))
						{
							func_342(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_52())
				{
					func_66(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_344(uParam1);
					func_291(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_342(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_332(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_321(sParam2, iParam4, 0);
}

struct<6> func_343()
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

void func_344(var uParam0)
{
	int iVar0;
	
	iVar0 = func_345(uParam0);
	if (iVar0 > -1)
	{
		func_21(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_21(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_65(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_135(), 24);
	}
}

int func_345(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_23((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_346(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_23((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_65(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_347(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_156("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_156("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_156("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_156("TX_OBJ_GYB_DO", 0, 0) || func_156("TAXI_OBJ_GYB", 0, 0)) || func_156("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_156("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_156("TX_OBJ_CYI_DO", 0, 0) || func_156("TAXI_OBJ_CYI_01", 0, 0)) || func_156("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_156("TX_OBJ_GYN_DO", 0, 0) || func_156("TAXI_OBJ_GYN", 0, 0)) || func_156("TAXI_OBJ_GYN_TG", 0, 0)) || func_156("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_156("TAXI_OBJ_CC1", 0, 0) || func_156("TAXI_OBJ_CC2", 0, 0)) || func_156("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_156("TAXI_OBJ_FTC1", 0, 0) || func_156("TAXI_OBJ_FTC2", 0, 0)) || func_156("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_156("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_156("TAXI_OBJ_GETRUN", 0, 0) || func_156("TAXI_OBJ_DRIVE", 0, 0)) || func_156("TAXI_OBJ_RETURN", 0, 0)) || func_156("TAXI_OBJ_POL", 0, 0)) || func_156("TAXI_OBJ_RUNOUT", 0, 0)) || func_156("TAXI_OBJ_POL", 0, 0));
}

int func_348(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_23((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_349(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_347(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_147(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_368(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_367(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_366(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_291(uParam0, 16, 0, 0);
				func_365(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_52())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&Var0, "_retrn1", 24);
					}
					if (uParam0->f_411 != 9)
					{
						func_364(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_361(uParam0, Var0, func_363(uParam0, 2));
				}
				if (func_23(uParam0->f_98, 4))
				{
					func_291(uParam0, 16, 0, 0);
					func_250(uParam0, 0, 0);
				}
				func_169(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_412(uParam0, 16) > 1f)
				{
					func_171(1);
					if (uParam0->f_411 == 9)
					{
						func_249("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_249("TAXI_VIP_RETURN", 7500, 1);
					}
					func_291(uParam0, 16, 0, 0);
					func_250(uParam0, 0, 0);
				}
				break;
			
			case 65:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aggro", 24);
				}
				uParam0->f_107++;
				if (uParam0->f_411 != 9)
				{
					func_364(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x66599E73DBA5A850(uParam0->f_3))
				{
					func_245(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_412(uParam0, 16) > func_168(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_52()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_368(uParam0))
		{
			case 142:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_364(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_367(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_366(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_291(uParam0, 16, 0, 0);
				func_365(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_320(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_217(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_291(uParam0, 16, 0, 0);
				func_217(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_23(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_367(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_366(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_364(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_291(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_249("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_249("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xCE4AAA035282336C(uParam0->f_9))
					{
						uParam0->f_9 = func_360(uParam0->f_17, 1);
					}
					else if (unk_0xB77B29436394B1EB(uParam0->f_9) == 0)
					{
						unk_0x5E3A54CF3E9DF9FC(uParam0->f_9, 255);
						unk_0x385CFFE850A96C08(uParam0->f_9, uParam0->f_17);
						unk_0xBD91E7D4B770F97E(uParam0->f_9, 1);
					}
				}
				func_217(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 9:
				if ((uParam0->f_101 == 1 || uParam0->f_411 == 2) || uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_gret1", 24);
							break;
						
						case 0:
							StringConCat(&Var0, "_gret2", 24);
							break;
						
						case 2:
							StringConCat(&Var0, "_gret3", 24);
							break;
						
						default:
							StringConCat(&Var0, "_gret4", 24);
							break;
						}
				}
				func_219(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_364(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_245(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xCE4AAA035282336C(uParam0->f_9))
					{
						uParam0->f_9 = func_360(uParam0->f_17, 1);
					}
					else if (unk_0xB77B29436394B1EB(uParam0->f_9) == 0)
					{
						unk_0x5E3A54CF3E9DF9FC(uParam0->f_9, 255);
						unk_0x385CFFE850A96C08(uParam0->f_9, uParam0->f_17);
						unk_0xBD91E7D4B770F97E(uParam0->f_9, 1);
					}
				}
				func_217(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_359(uParam0, 33554432, Var0, "", 1, 8);
				func_291(uParam0, 16, 0, 0);
				func_217(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_52())
				{
					func_358(uParam0, 0);
					func_65(&(uParam0->f_44), 4);
					func_291(uParam0, 16, 0, 0);
					func_217(uParam0, 13, 0, 0, 0);
				}
				break;
			
			case 14:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_bant2", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_bant1", 24);
						break;
					
					case 2:
						StringConCat(&Var0, "_bant3", 24);
						break;
					
					default:
						StringConCat(&Var0, "_bant1", 24);
						break;
				}
				func_219(&Var0);
				func_356(Var0, uParam1);
				func_291(uParam0, 16, 0, 0);
				func_291(uParam0, 11, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_412(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_219(&Var0);
					}
					func_356(Var0, uParam1);
					func_65(&(uParam0->f_81), 67108864);
					func_291(uParam0, 16, 0, 0);
					func_291(uParam0, 11, 0, 0);
					func_250(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_412(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban2", 24);
					}
					else if (uParam0->f_411 == 1)
					{
						StringConCat(&Var0, "_banter", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant2", 24);
						if (uParam0->f_411 != 6)
						{
							func_219(&Var0);
						}
					}
					func_356(Var0, uParam1);
					func_291(uParam0, 11, 0, 0);
					func_291(uParam0, 16, 0, 0);
					func_250(uParam0, 0, 0);
				}
				break;
			
			case 17:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_ban3", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant3", 24);
					func_219(&Var0);
				}
				func_356(Var0, uParam1);
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 18:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant4", 24);
				}
				func_219(&Var0);
				func_356(Var0, uParam1);
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 19:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant5", 24);
				}
				func_219(&Var0);
				func_356(Var0, uParam1);
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_219(&Var0);
				func_356(Var0, uParam1);
				func_291(uParam0, 16, 0, 0);
				func_291(uParam0, 11, 0, 0);
				func_250(uParam0, 0, 0);
				func_65(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				func_217(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_219(&Var0);
				func_364(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 89:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_deal1", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_deal1", 24);
						break;
					
					default:
						StringConCat(&Var0, "_deal1", 24);
						break;
				}
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 27:
				StringConCat(&Var0, "_bTime", 24);
				if (uParam0->f_411 == 2)
				{
					iVar13 = 8;
				}
				else
				{
					iVar13 = 3;
				}
				iVar12 = 0;
				while (iVar12 < iVar13)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar15[iVar12] = 0;
									break;
								
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (uParam0->f_411 == 2)
				{
					func_355(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_355(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_356(Var0, uParam1);
				func_365(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_291(uParam0, 16, 0, 0);
				func_291(uParam0, 6, 0f, 1);
				func_250(uParam0, 0, 0);
				break;
			
			case 26:
				StringConCat(&Var0, "_gTime", 24);
				iVar12 = 0;
				while (iVar12 < 8)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar15[iVar12] = 0;
									break;
								
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (uParam0->f_411 == 2)
				{
					func_355(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_355(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_356(Var0, uParam1);
				func_365(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_291(uParam0, 16, 0, 0);
				func_291(uParam0, 6, 0f, 1);
				func_250(uParam0, 0, 0);
				break;
			
			case 12:
				func_249("TAXI_OBJ_GYB", 3500, 1);
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_249("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_249("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_249("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 28:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_dest1A", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_dest1B", 24);
						break;
					
					default:
						StringConCat(&Var0, "_dest1A", 24);
						break;
				}
				func_364(uParam0, &Var0, 0, 0, 8);
				func_217(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_23(uParam0->f_98, 268435456))
				{
					func_249("TAXI_OBJ_CYI_01", 7500, 1);
					func_65(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_219(&Var0);
				func_356(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_219(&Var0);
				func_356(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_219(&Var0);
				func_356(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 33:
				func_249("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_23(uParam0->f_82, 8192))
				{
					if (func_412(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_219(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_356(Var0, uParam1);
						}
						else
						{
							func_364(uParam0, &Var0, 0, 0, 8);
						}
						func_65(&(uParam0->f_82), 8192);
						func_291(uParam0, 16, 0, 0);
						func_291(uParam0, 11, 0, 0);
						func_250(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_23(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_219(&Var0);
					func_364(uParam0, &Var0, 0, 0, 8);
					func_65(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_23(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_219(&Var0);
					func_364(uParam0, &Var0, 0, 0, 8);
					func_65(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				func_217(uParam0, 46, 1, 0, 0);
				break;
			
			case 138:
				if (uParam0->f_101 == 1)
				{
					StringConCat(&Var0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_ftc1", 24);
							break;
						
						case 0:
							StringConCat(&Var0, "_ftc2", 24);
							break;
						
						case 2:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						
						default:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						}
				}
				func_219(&Var0);
				func_364(uParam0, &Var0, 0, 0, 8);
				func_217(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_250(uParam0, 0, 0);
				break;
			
			case 139:
				func_249("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_217(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x15A88CFAAFFC6C4B(0, 120);
				if (!func_23(uParam0->f_82, 268435456))
				{
					if (iVar14 > 80)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else if (iVar14 > 40)
					{
						StringConCat(&cVar6, "_2", 24);
					}
					else
					{
						StringConCat(&cVar6, "_3", 24);
					}
					func_65(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 > 80)
				{
					StringConCat(&cVar6, "_4", 24);
				}
				else if (iVar14 > 40)
				{
					StringConCat(&cVar6, "_5", 24);
				}
				else
				{
					StringConCat(&cVar6, "_6", 24);
				}
				func_366(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x15A88CFAAFFC6C4B(0, 100);
				if (!func_23(uParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_65(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_366(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				func_217(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_249("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_250(uParam0, 0, 0);
				func_217(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				func_217(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_52())
				{
					func_249("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_250(uParam0, 0, 0);
					func_217(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_249("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_250(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_23(uParam0->f_81, 1))
				{
					func_354(uParam0, 1, Var0, "_sick1", 8);
					func_21(&(uParam0->f_81), 2);
				}
				else if (!func_23(uParam0->f_81, 2))
				{
					func_354(uParam0, 2, Var0, "_sick2", 8);
					func_21(&(uParam0->f_81), 1);
				}
				func_365(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_23(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_23(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_65(&(uParam0->f_81), 2097152);
				func_364(uParam0, &Var0, 0, 0, 8);
				func_291(uParam0, 16, 0, 0);
				func_365(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_250(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				func_365(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				func_365(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				func_365(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_219(&Var0);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_23(uParam0->f_81, 4))
				{
					func_354(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_23(uParam0->f_81, 8))
				{
					func_354(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_354(uParam0, 8, Var0, "_turns3", 8);
					func_21(&(uParam0->f_81), 4);
					func_21(&(uParam0->f_81), 8);
				}
				func_365(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_353(uParam0))
				{
					func_361(uParam0, Var0, func_363(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x66599E73DBA5A850(uParam0->f_3))
					{
						func_245(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_367(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_320(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_367(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_367(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_366(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_365(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_23(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_320(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_65(&(uParam0->f_83), 128);
					func_21(&(uParam0->f_83), 256);
					func_291(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_320(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_65(&(uParam0->f_83), 256);
					func_21(&(uParam0->f_83), 512);
					func_291(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_320(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_65(&(uParam0->f_83), 512);
					func_21(&(uParam0->f_83), 128);
					func_291(uParam0, 16, 0, 0);
				}
				func_250(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_23(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar24)
					{
						func_219(&Var0);
					}
					func_320(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_65(&(uParam0->f_83), 1);
					func_21(&(uParam0->f_83), 2);
					func_291(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_219(&Var0);
					}
					func_320(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_65(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_21(&(uParam0->f_83), 4);
					}
					else
					{
						func_21(&(uParam0->f_83), 1);
					}
					func_291(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_219(&Var0);
					}
					func_320(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_65(&(uParam0->f_83), 4);
					func_21(&(uParam0->f_83), 1);
					func_291(uParam0, 16, 0, 0);
				}
				func_365(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_23(uParam0->f_81, 4096))
				{
					func_359(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_23(uParam0->f_81, 8192))
				{
					func_359(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_365(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_23(uParam0->f_81, 16384))
				{
					func_359(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_23(uParam0->f_81, 32768))
				{
					func_359(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_365(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_23(uParam0->f_82, 8))
					{
						func_352(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_23(uParam0->f_82, 16))
					{
						func_352(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_23(uParam0->f_82, 32))
					{
						func_352(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_365(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_250(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_367(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_366(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_365(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_291(uParam0, 16, 0, 0);
					func_250(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_367(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_366(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_365(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_367(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_366(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_365(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_23(uParam0->f_81, 65536))
				{
					func_359(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_23(uParam0->f_81, 131072))
				{
					func_359(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_250(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_353(uParam0))
				{
					func_361(uParam0, Var0, func_363(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x66599E73DBA5A850(uParam0->f_3))
					{
						func_245(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_23(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_219(&Var0);
					func_320(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_65(&(uParam0->f_83), 8);
					func_21(&(uParam0->f_83), 16);
					func_291(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_219(&Var0);
					func_320(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_65(&(uParam0->f_83), 16);
					func_21(&(uParam0->f_83), 32);
					func_291(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_219(&Var0);
					func_320(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_65(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_21(&(uParam0->f_83), 64);
					}
					else
					{
						func_21(&(uParam0->f_83), 8);
					}
					func_291(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_219(&Var0);
					func_320(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_65(&(uParam0->f_83), 64);
					func_21(&(uParam0->f_83), 8);
					func_291(uParam0, 16, 0, 0);
				}
				func_365(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_52())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_364(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_361(uParam0, Var0, func_363(uParam0, 65));
					func_250(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_52())
				{
					if (uParam0->f_411 == 4)
					{
						StringCopy(&Var0, "tm6_shoot", 24);
					}
					else if (uParam0->f_115)
					{
						StringConCat(&Var0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&Var0, "_shoot", 24);
					}
					func_364(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_361(uParam0, Var0, func_363(uParam0, 66));
					func_250(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_52())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_364(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_364(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_364(uParam0, &Var0, 0, 0, 8);
								func_365(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_364(uParam0, &Var0, 0, 0, 8);
								func_365(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_364(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_367(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_366(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_365(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_291(uParam0, 16, 0, 0);
								func_250(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_364(uParam0, &Var0, 0, 0, 8);
									func_291(uParam0, 16, 0, 0);
									func_291(uParam0, 11, 0, 0);
									func_250(uParam0, 0, 0);
									if (!iLocal_66)
									{
										iLocal_64 = 1;
									}
								}
								else
								{
									if (!iLocal_65)
									{
										StringConCat(&Var0, "_bant3", 24);
										iLocal_65 = 1;
									}
									else
									{
										StringConCat(&Var0, "_bant2", 24);
										iLocal_66 = 1;
									}
									func_219(&Var0);
									func_364(uParam0, &Var0, 0, 0, 8);
									func_291(uParam0, 16, 0, 0);
									func_291(uParam0, 11, 0, 0);
									func_250(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_364(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_217(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_367(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_366(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_365(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_23(uParam0->f_82, 1))
				{
					func_352(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_23(uParam0->f_82, 2))
				{
					func_352(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_23(uParam0->f_82, 4))
				{
					func_352(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_250(uParam0, 0, 0);
				break;
			
			case 48:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_stop2", 24);
				}
				else
				{
					StringConCat(&Var0, "_stop1", 24);
				}
				cVar6 = { Var0 };
				func_367(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_366(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0x66599E73DBA5A850(uParam0->f_3))
				{
					func_245(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_291(uParam0, 16, 0, 0);
				func_365(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_353(uParam0))
				{
					func_361(uParam0, Var0, func_363(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x66599E73DBA5A850(uParam0->f_3))
					{
						func_245(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_351(uParam0, Var0, 8);
				}
				func_365(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_23(uParam0->f_83, 1024))
				{
					func_65(&(uParam0->f_83), 1024);
					func_291(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_219(&Var0);
					func_320(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_23(uParam0->f_83, 2048))
				{
					func_65(&(uParam0->f_83), 2048);
					func_291(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_219(&Var0);
					func_320(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_23(uParam0->f_83, 4096))
				{
					func_65(&(uParam0->f_83), 4096);
					func_291(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_219(&Var0);
					func_320(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_250(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_23(uParam0->f_82, 1024))
				{
					func_352(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_21(&(uParam0->f_82), 2048);
				}
				else if (!func_23(uParam0->f_82, 2048))
				{
					func_352(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_250(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_367(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_366(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_365(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_320(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				func_217(uParam0, 52, 1, 0, 0);
				break;
			
			case 50:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&Var0, "_lsPo1", 24);
				}
				if (uParam0->f_411 != 9)
				{
					func_364(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0x66599E73DBA5A850(uParam0->f_3))
				{
					func_245(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_353(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_364(uParam0, &Var0, 0, 0, 8);
						func_217(uParam0, 52, 1, 0, 0);
						func_291(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_411 == 5 && uParam0->f_410 > 9)
						{
							StringConCat(&Var0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&Var0, "_copBa1", 24);
						}
						cVar6 = { Var0 };
						func_364(uParam0, &Var0, 0, 0, 8);
						func_291(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_367(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_366(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_291(uParam0, 16, 0, 0);
					func_250(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_365(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_364(uParam0, &Var0, 0, 0, 8);
				func_291(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()) >= 1)
				{
					func_249("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_250(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_219(&Var0);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_23(uParam0->f_81, 262144))
				{
					func_359(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_23(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_359(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_359(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_365(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_23(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_350(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_23(uParam0->f_82, 134217728))
				{
					func_350(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_365(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_366(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 100:
				func_249("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_250(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_364(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_219(&Var0);
				}
				func_65(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_364(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_219(&Var0);
				}
				func_65(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_364(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 103:
				if (uParam0->f_411 == 4)
				{
					StringConCat(&Var0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&Var0, "_thank3", 24);
				}
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_219(&Var0);
				}
				func_65(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_364(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_23(uParam0->f_82, 65536))
				{
					if (func_412(uParam0, 11) > uParam0->f_36)
					{
						switch (uParam0->f_102)
						{
							case 0:
								StringConCat(&Var0, "_ccba2", 24);
								break;
							
							case 1:
								StringConCat(&Var0, "_ccba1", 24);
								break;
							
							default:
								StringConCat(&Var0, "_ccba1", 24);
								break;
						}
						func_219(&Var0);
						func_356(Var0, uParam1);
						func_65(&(uParam0->f_82), 65536);
						func_291(uParam0, 16, 0, 0);
						func_291(uParam0, 11, 0, 0);
						func_250(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_23(uParam0->f_82, 131072))
				{
					if (func_412(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_219(&Var0);
						func_356(Var0, uParam1);
						func_65(&(uParam0->f_82), 131072);
						func_291(uParam0, 16, 0, 0);
						func_291(uParam0, 11, 0, 0);
						func_250(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_23(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_65(&(uParam0->f_82), 8388608);
				}
				else if (!func_23(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_65(&(uParam0->f_82), 16777216);
				}
				else if (!func_23(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_65(&(uParam0->f_82), 33554432);
				}
				func_356(Var0, uParam1);
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_367(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_219(&Var0);
					func_366(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_364(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_364(uParam0, &Var0, 0, 0, 8);
				}
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_356(Var0, uParam1);
				func_291(uParam0, 16, 0, 0);
				func_291(uParam0, 11, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_356(Var0, uParam1);
				func_291(uParam0, 16, 0, 0);
				func_291(uParam0, 11, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_356(Var0, uParam1);
				func_291(uParam0, 16, 0, 0);
				func_291(uParam0, 11, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_219(&Var0);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_219(&Var0);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_367(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_366(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_367(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_366(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_219(&Var0);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_219(&Var0);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				func_217(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_65(&(uParam0->f_81), 2097152);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_219(&Var0);
				func_356(Var0, uParam1);
				func_65(&(uParam0->f_81), 67108864);
				func_291(uParam0, 16, 0, 0);
				func_291(uParam0, 11, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_23(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_359(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x66599E73DBA5A850(uParam0->f_3))
					{
						func_245(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_217(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_320(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_23(uParam0->f_81, 268435456))
				{
					func_359(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_217(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_249("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_250(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_23(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_359(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x66599E73DBA5A850(uParam0->f_3))
						{
							func_245(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_359(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_217(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_249("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_250(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_320(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_291(uParam0, 16, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_23(uParam0->f_81, 16777216))
				{
					func_359(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_250(uParam0, 0, 0);
				break;
			
			case 88:
				func_249("TAXI_TIEFLEE", 7500, 1);
				func_250(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_23(uParam0->f_98, 536870912))
				{
					func_249("TAXI_OBJ_CYI_1B", 7500, 1);
					func_65(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_250(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_219(&Var0);
				func_364(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 136:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_wronglz", 24);
				}
				else if (uParam0->f_116)
				{
					StringConCat(&Var0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&Var0, "_wrong", 24);
				}
				func_364(uParam0, &Var0, 0, 0, 8);
				func_250(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_364(uParam0, &Var0, 0, 0, 8);
				func_250(uParam0, 0, 0);
				break;
			
			case 135:
				if (uParam0->f_411 == 4)
				{
					StringCopy(&Var0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&Var0, "_jack", 24);
				}
				func_364(uParam0, &Var0, 0, 0, 8);
				func_250(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_364(uParam0, &Var0, 1, 0, 8);
				func_217(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_249("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_217(uParam0, 0, 0, 0, 0);
				func_250(uParam0, 0, 0);
				break;
			}
	}
}

void func_350(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_65(&(uParam0->f_82), iParam1);
	func_291(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_219(&Param2);
	}
	func_320(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_351(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_23(uParam0->f_82, 64))
	{
		func_65(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_23(uParam0->f_82, 128))
	{
		func_65(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x15A88CFAAFFC6C4B(1, 3), 24);
	}
	func_366(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_291(uParam0, 16, 0, 0);
}

void func_352(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_65(&(uParam0->f_82), iParam1);
	func_291(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_219(&Param2);
		}
	}
	func_320(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_353(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_354(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_65(&(uParam0->f_81), iParam1);
	func_291(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_320(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_355(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_270(*uParam0, iVar1))
		{
			func_66(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_219(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_356(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_357(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_65(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_357(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x2AC37494BBF1DB16(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_358(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_249("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_249("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_249("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_249("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_249("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_249("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_249("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_249("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_249("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_249("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_249("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_249("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_249("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_249("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_249("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_249("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_249("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_249("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_249("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_249("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_359(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_65(&(uParam0->f_81), iParam1);
	func_291(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_219(&Param2);
	}
	func_320(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

var func_360(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x7F0C74F83813841D(Param0);
	unk_0x225EB85DBC38E707(uVar0, func_168(unk_0xA26A9A07F761D8F8(), 1f, 1f));
	unk_0xBD91E7D4B770F97E(uVar0, iParam3);
	return uVar0;
}

void func_361(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_291(uParam0, 16, 0, 0);
	func_291(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x66599E73DBA5A850(uParam0->f_3))
	{
		unk_0x0546D9B082508A41(uParam0->f_3, &cParam1, func_362(uParam0));
	}
}

char* func_362(var uParam0)
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		
		case 1:
			sVar0 = "TaxiOtis";
			break;
		
		case 2:
			sVar0 = "TaxiKwak";
			break;
		
		case 3:
			sVar0 = "TaxiWalter";
			break;
		
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		
		case 7:
			sVar0 = "TaxiDarren";
			break;
		
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_363(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ACRH";
				
				case 1:
					return "_ACRH";
				
				case 2:
					return "_ACAA";
				
				case 3:
					return "_ACRH";
				
				case 4:
					return "_AEAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					return "_ACAA";
				
				case 7:
					return "_ACAA";
				
				case 8:
					return "_ACRH";
				
				default:
			}
			return "_ACRH";
			break;
		
		case 82:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AHIT";
				
				case 1:
					return "_AHIT";
				
				case 2:
					return "_AEAA";
				
				case 3:
					return "_ADAA";
				
				case 4:
					return "_AFAA";
				
				case 5:
					return "_AFAA";
				
				case 6:
					return "_AEAA";
				
				case 7:
					return "_AHAA";
				
				case 8:
					return "_AEAA";
				
				default:
			}
			return "_AHIT";
			break;
		
		case 74:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AROL";
				
				case 1:
					return "_AROL";
				
				case 2:
					return "_AHAA";
				
				case 3:
					return "_AROL";
				
				case 4:
					return "_AGAA";
				
				case 5:
					return "_AROL";
				
				case 6:
					return "_AROL";
				
				case 7:
					return "_AROL";
				
				case 8:
					return "_AROL";
				
				default:
			}
			return "_AROL";
			break;
		
		case 65:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ABAA";
				
				case 1:
					return "_FUAA";
				
				case 2:
					return "_AFAA";
				
				case 3:
					return "_DBAA";
				
				case 4:
					return "_DLAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				
				case 7:
					return "_DBAA";
				
				case 8:
					return "_EFAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 66:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AEAA";
				
				case 1:
					return "_ACAA";
				
				case 2:
					return "_AJAA";
				
				case 3:
					return "_AHAA";
				
				case 4:
					return "_AHAA";
				
				case 5:
					return "_AIAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				
				case 7:
					return "_AUAA";
				
				case 8:
					return "_AHAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 2:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AAAA";
				
				case 1:
					return "_AAAA";
				
				case 2:
					return "_ADAA";
				
				case 3:
					return "_ABAA";
				
				case 4:
					return "_AAAA";
				
				case 5:
					return "_ABAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				
				case 7:
					return "_BUAA";
				
				case 8:
					return "_ADAA";
				
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_364(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_291(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_291(uParam0, 17, 0f, 1);
	}
	func_250(uParam0, iParam2, 0);
	return func_320(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_365(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_23(*uParam2, 2))
		{
			if (!bParam10)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_23(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_23(*uParam2, 4))
		{
			if (!func_23(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_21(uParam2, 4096);
			}
		}
		else if (func_23(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_23(*uParam2, 512))
		{
			if (!func_23(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_21(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_23(*uParam2, 16))
		{
			if (!func_23(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_21(uParam2, 4096);
			}
		}
		else if (func_23(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_23(*uParam2, 64))
		{
			if (!func_23(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_21(uParam2, 4096);
			}
		}
		else if (func_23(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_23(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_23(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_23(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_23(*uParam2, 8192))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_23(*uParam2, 16384))
		{
			if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_23(*uParam2, 32768))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_23(*uParam2, 65536))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_23(*uParam2, 131072))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_23(*uParam2, 262144))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_23(*uParam2, 524288))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_23(*uParam2, 1048576))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_23(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_23(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_23(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_23(*uParam2, 67108864))
		{
			if (func_23(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_23(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_23(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_23(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_23(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_366(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_332(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_321(sParam2, iParam4, 0);
}

void func_367(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_270(*uParam0, iVar1))
		{
			func_66(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_219(sParam2);
				}
				else
				{
					func_219(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

int func_368(var uParam0)
{
	return uParam0->f_416;
}

int func_369(char* sParam0)
{
	if (!unk_0xB71C73D0269747D5(sParam0))
	{
		if (func_156(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_370(var uParam0)
{
	if (func_52())
	{
		return 1;
	}
	if (func_147(uParam0, 17))
	{
		return 1;
	}
	if (func_147(uParam0, 14))
	{
		return 1;
	}
	if (func_154(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_371(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_147(uParam0, 9));
}

void func_372(var uParam0)
{
	if (func_147(uParam0, 17))
	{
		if (!func_147(uParam0, 14))
		{
			if (!func_154(uParam0))
			{
				if (!func_52())
				{
					func_144(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_373(var uParam0)
{
	return uParam0->f_117;
}

void func_374(var uParam0)
{
	if (!func_148(uParam0))
	{
		if ((unk_0xA5E11AF0A2B928C1() % 1000) < 50)
		{
		}
		func_160(uParam0, 1);
	}
	else if (func_147(uParam0, 14))
	{
		func_174(uParam0);
		func_163(uParam0, 0);
	}
}

void func_375(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x7DE17ACDD8BA2642(uParam0->f_4))
		{
			if (Local_343.f_0 > 0 && !func_270(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343.f_0 - 1))
				{
					if (func_270(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_270(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_66(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0xA5E11AF0A2B928C1();
							}
						}
						else
						{
							func_22(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_270(Local_343.f_1[iVar0 /*4*/], 4) && !func_270(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_66(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_319(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

void func_376(var uParam0, var uParam1, bool bParam2)
{
	if (!func_23(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0x2AC37494BBF1DB16(&(uParam0->f_124)) && func_52())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_52())
				{
					StringCopy(&(uParam0->f_124), func_135(), 24);
					uParam0->f_56 = (uParam0->f_56 + uParam0->f_57);
					if (uParam0->f_56 < 0)
					{
						uParam0->f_56 = 0;
					}
					uParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

int func_377(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_147(uParam0, 27))
	{
		func_145(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_412(uParam0, 27) > 5f)
	{
		if (func_404(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_291(uParam0, 27, 0, 0);
			func_291(uParam0, 10, 0, 0);
			func_402(uParam0, &uVar0, uParam1);
		}
		func_399(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_378(uParam0);
	}
	if ((((!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()) && (unk_0xF57C1326FD40C8A7(*uParam0) && !unk_0x2DDFF72E939527F8(*uParam0))) && (unk_0xF57C1326FD40C8A7(uParam0->f_1) && !unk_0x2DDFF72E939527F8(uParam0->f_1))) && !unk_0x70CDFE65A7D509C2()) && !func_52())
	{
		if (func_412(uParam0, 26) > 10f)
		{
			func_144(uParam0, 26, 0);
			unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
		}
	}
	else if (func_147(uParam0, 26))
	{
		func_144(uParam0, 26, 0);
	}
	return 0;
}

void func_378(var uParam0)
{
	if (!func_398(uParam0->f_429))
	{
		uParam0->f_429 = func_397();
		func_388(&(uParam0->f_429), 0, 0, unk_0x15A88CFAAFFC6C4B(4, 7), 0, 0, 0);
	}
	else if (func_379(uParam0->f_429))
	{
		func_319(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_379(int iParam0)
{
	return func_380(func_397(), iParam0);
}

int func_380(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_398(iParam1) || !func_398(iParam0))
	{
		return 1;
	}
	iVar0 = func_386(iParam0);
	iVar1 = func_386(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_385(iParam0);
	iVar1 = func_385(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_384(iParam0);
	iVar1 = func_384(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_383(iParam0);
	iVar1 = func_383(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_382(iParam0);
	iVar1 = func_382(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_381(iParam0);
	iVar1 = func_381(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_381(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_382(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_383(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_384(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_385(int iParam0)
{
	return iParam0 & 15;
}

var func_386(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_387(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_387(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_388(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_386(*uParam0);
	iVar1 = func_385(*uParam0);
	iVar2 = func_384(*uParam0);
	iVar3 = func_383(*uParam0);
	iVar4 = func_382(*uParam0);
	iVar5 = func_381(*uParam0);
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
	iVar6 = func_396(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_396(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_389(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_389(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_395(uParam0, iParam1);
	func_394(uParam0, iParam2);
	func_393(uParam0, iParam3);
	func_392(uParam0, iParam5);
	func_391(uParam0, iParam4);
	func_390(uParam0, iParam6);
}

void func_390(var uParam0, int iParam1)
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

void func_391(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_385(*uParam0);
	iVar1 = func_386(*uParam0);
	if (iParam1 < 1 || iParam1 > func_396(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_392(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_393(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_394(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_395(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_396(int iParam0, int iParam1)
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

int func_397()
{
	var uVar0;
	
	func_395(&uVar0, unk_0x731F95B6458DCF80());
	func_394(&uVar0, unk_0x77BBAAED3E25322C());
	func_393(&uVar0, unk_0x30DFE1FFD2CC7420());
	func_391(&uVar0, unk_0x8C0F17CAC308A14B());
	func_392(&uVar0, unk_0x61117764C67882B7());
	func_390(&uVar0, unk_0x367F557725B53815());
	return uVar0;
}

int func_398(int iParam0)
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
	iVar0 = func_381(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_382(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_383(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_386(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_385(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_384(iParam0);
	if (iVar5 < 1 || iVar5 > func_396(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_399(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_401()) && !func_148(uParam0)) || ((uParam0->f_411 != 9 && func_255(uParam0, 1)) && !func_148(uParam0)))
		{
			uVar0 = func_400(uParam0->f_4);
			unk_0xE1D0FB923395DF66(&uVar0);
			uParam0->f_4 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			unk_0x85BAE84748AD1A23(uParam0->f_4, 1, 0);
			func_174(uParam0);
			func_163(uParam0, 0);
		}
	}
}

var func_400(var uParam0)
{
	return uParam0;
}

int func_401()
{
	int iVar0;
	
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			if (unk_0xFBD273FDBCF0C5BD(iVar0, 0))
			{
				if (unk_0xA66E176E5772E965(iVar0, -1, 0) == unk_0xC1A5EC5C986B98AD())
				{
					if (unk_0x091E6E360116B927(iVar0, func_20()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_402(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_403(uParam0, 0, 1))
			{
				func_319(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_403(uParam0, 0, 4))
			{
				func_319(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_403(uParam0, 0, 8))
			{
				func_319(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_403(uParam0, 1, 1))
			{
				func_319(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_403(uParam0, 0, 1))
			{
				func_319(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_23(*uParam2, 2) && func_124(uParam0))
			{
				func_319(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_403(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x055111B11E6624FD(uParam0->f_3, 0))
	{
		if (!unk_0xDB08595445CDE2FF(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_217(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_217(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_404(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xC1A5EC5C986B98AD();
	if (!unk_0x055111B11E6624FD(iVar0, 0) && !unk_0x055111B11E6624FD(iParam0, 0))
	{
		if (!func_23(*uParam2, 1))
		{
			if (func_410(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_23(*uParam2, 2))
		{
			if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_23(*uParam2, 4))
		{
			if (func_408(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_23(*uParam2, 8))
		{
			if (func_407(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_23(*uParam2, 128);
		if (bParam4)
		{
			if (func_405(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_23(*uParam2, 16))
		{
			if (func_405(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if (iParam7 && unk_0x7559C38E6535AB89(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_405(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = unk_0x2935B4D6CE81318D(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = unk_0x2935B4D6CE81318D(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		uVar0 = unk_0xE475C458F52F1781();
		if (!unk_0x055111B11E6624FD(uVar0, 0))
		{
			if (unk_0x7559C38E6535AB89(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (unk_0x7559C38E6535AB89(iParam0, unk_0xC1A5EC5C986B98AD(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7559C38E6535AB89(iParam0, unk_0xC1A5EC5C986B98AD(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0xE475C458F52F1781();
		if (!unk_0x055111B11E6624FD(uVar1, 0))
		{
			if (unk_0x7559C38E6535AB89(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x055111B11E6624FD(iParam0, 0))
		{
			if (unk_0xF276A75C8A36B189(iParam0))
			{
				if (unk_0xD2A91DBF15D12CD1(iParam0) == unk_0xC1A5EC5C986B98AD())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xE3A9F9074FB79A61(unk_0xC1A5EC5C986B98AD()))
		{
			if (unk_0x1C4E4DC1EFE24DF1(iParam0, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0xBA9A13B3E8BC6817(unk_0x93E99A2DBCBA9CFA()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x23AE149202140E10(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0xEFE236615D4F5BE8(iParam0))
		{
			return 1;
		}
	}
	if (func_406(unk_0xC1A5EC5C986B98AD(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x48A4D45B3B4CEFFD(iParam0) && func_161(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x3C3D6D026CF7F51B(iParam0, 0))
		{
			if (unk_0x110B96B5C67CC73B(unk_0xC1A5EC5C986B98AD(), unk_0x95DC39736F6748E3(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x110B96B5C67CC73B(unk_0xC1A5EC5C986B98AD(), iParam0))
		{
			return 1;
		}
		if (!unk_0x055111B11E6624FD(uParam1, 0))
		{
			if (unk_0x7559C38E6535AB89(iParam1, unk_0xC1A5EC5C986B98AD(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_406(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xEBC16D60E30C9AE1(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x110D030CCD4E83A6(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(iParam0, 1), unk_0x30BE8A934C020461(iParam1, 1)) < 2.5f)
			{
				if (unk_0xD495130AEF425591(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_407(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x2D1125ABF6C8F8C4(uParam0, 4))
	{
		if (unk_0x110D030CCD4E83A6(uParam0) && !unk_0x7B783B62D5123CC7(iParam0))
		{
			if (unk_0x1C4E4DC1EFE24DF1(uParam1, unk_0x30BE8A934C020461(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_408(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x055111B11E6624FD(uParam1, 0))
	{
		Var0 = { unk_0x30BE8A934C020461(iParam1, 1) };
	}
	if (unk_0x612907CF3208D1E3(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x32C00474D0DDF069(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x2D1125ABF6C8F8C4(uParam0, 2))
	{
		if (unk_0x110D030CCD4E83A6(uParam0))
		{
			if (unk_0x1C4E4DC1EFE24DF1(iParam1, unk_0x30BE8A934C020461(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0xD495130AEF425591(unk_0x9C8D7679C15E75FF(iParam1), iParam0, 120f) && unk_0xC832FC847E3442DA(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x3C3D6D026CF7F51B(unk_0x9C8D7679C15E75FF(iParam1), 0))
			{
				iVar3 = unk_0x95DC39736F6748E3(unk_0x9C8D7679C15E75FF(iParam1), 0);
			}
			if (unk_0x197DD015F81B0D16(iParam0) || func_409(iVar3))
			{
				if (unk_0x1C4E4DC1EFE24DF1(iParam1, unk_0x30BE8A934C020461(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0xD495130AEF425591(unk_0x9C8D7679C15E75FF(iParam1), iParam0, 120f) && unk_0xC832FC847E3442DA(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x332F7E85F9805351((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_409(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
		{
			if (unk_0xA66E176E5772E965(iParam0, -1, 0) != 0)
			{
				if (unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_162(unk_0xC1A5EC5C986B98AD(), iParam0, 1) < 40f)
						{
							if (unk_0x005E10EF94E1E6A5(unk_0x93E99A2DBCBA9CFA(), &uVar1))
							{
								if ((unk_0xA6B591D40DE982B5(uVar1) && unk_0x4DFB7A1A6909D574(iVar1) == iParam0) || (unk_0x71904BD37B848CAF(iVar1) && unk_0x9C8D7679C15E75FF(iVar1) == unk_0xA66E176E5772E965(iParam0, -1, 0)))
								{
									if ((unk_0x4FBDBA15B9C41492(unk_0xC1A5EC5C986B98AD()) && unk_0x51EB177CA0562B62(0, 24)) || (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) && unk_0x51EB177CA0562B62(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_410(int iParam0, var uParam1)
{
	if (!unk_0x055111B11E6624FD(uParam0, 0))
	{
		if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
		{
			if (unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), iParam0) || unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iParam0))
			{
				if (unk_0xD495130AEF425591(iParam0, unk_0xC1A5EC5C986B98AD(), 90f))
				{
					if (func_161(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0xA5E11AF0A2B928C1();
						}
						else if ((unk_0xA5E11AF0A2B928C1() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_411(var uParam0)
{
	if (!func_23(uParam0->f_98, 2))
	{
		if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
		{
			if (func_142(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x10DFA2EC4C030EB3(uParam0->f_17, 25f, 0, 0, 0, 0, 0, 0, 0);
				func_65(&(uParam0->f_98), 2);
			}
		}
	}
}

float func_412(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_146(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_105(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_413()
{
	func_414(&Local_409);
	func_431();
}

void func_414(var uParam0)
{
	func_11(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_433(2);
	}
}

int func_415(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_52() && func_412(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x055111B11E6624FD(uParam0->f_3, 0))
		{
			if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
			{
				if (unk_0xE0D346789C5160EB(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_64(uParam0) == 0 || func_270(uParam0->f_85, 32))
					{
						if (!unk_0xF193A4B306E6BF93(uParam0->f_4))
						{
							func_334(uParam0, 4160, 0);
						}
						else
						{
							func_334(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_334(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_334(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_334(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0xA5E11AF0A2B928C1() % 1000) < 50)
	{
	}
	return 0;
}

void func_416(var uParam0)
{
	if (unk_0xCE4AAA035282336C(uParam0->f_8))
	{
		unk_0x45533C09A6C9B409(&(uParam0->f_8));
	}
	if (unk_0xCE4AAA035282336C(uParam0->f_9))
	{
		unk_0x45533C09A6C9B409(&(uParam0->f_9));
	}
	if (unk_0xCE4AAA035282336C(uParam0->f_10))
	{
		unk_0x45533C09A6C9B409(&(uParam0->f_10));
	}
}

int func_417(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_418()
{
	func_420(&Local_409, 4);
	Local_409.f_410 = 0;
	Local_409.f_36 = 20f;
	Local_409.f_23 = { -422.4797f, 1181.769f, 324.6417f };
	Local_409.f_33 = 225.6436f;
	Local_409.f_26 = { 171.1731f, -3288.171f, 4.7828f };
	Local_409.f_34 = 184.17f;
	func_419(&Local_409, 20, 40);
}

void func_419(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_420(var uParam0, int iParam1)
{
	func_430(1);
	func_176();
	func_7(&(uParam0->f_244));
	func_429(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_23(Global_113648.f_19099, 4))
	{
		func_65(&(Global_113648.f_19099), 4);
	}
	func_424(uParam0);
	func_422(uParam0);
	unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 32, 0);
	uParam0->f_102 = (func_421(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0xA3C681843B51A4CC("TAXI", 2);
}

int func_421(int iParam0)
{
	return Global_113648.f_19099.f_39[iParam0];
}

void func_422(var uParam0)
{
	switch (func_64(uParam0))
	{
		case 0:
			func_423(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_423(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_423(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_423(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_423(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_423(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_423(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_423(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_423(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_423(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_423(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_424(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_428(uParam0, 3);
			func_427(uParam0, 14);
			break;
		
		case 1:
			func_428(uParam0, 14);
			func_427(uParam0, 8);
			break;
		
		case 2:
			func_428(uParam0, 8);
			func_427(uParam0, 7);
			break;
		
		case 3:
			func_428(uParam0, 15);
			func_427(uParam0, 6);
			break;
		
		case 4:
			func_428(uParam0, 0);
			func_427(uParam0, 3);
			break;
		
		case 5:
			func_428(uParam0, 6);
			func_427(uParam0, 7);
			break;
		
		case 6:
			func_428(uParam0, 8);
			func_427(uParam0, 15);
			break;
		
		case 7:
			func_428(uParam0, 8);
			func_427(uParam0, 14);
			break;
		
		case 8:
			func_428(uParam0, 7);
			func_427(uParam0, 15);
			break;
		
		case 9:
			func_428(uParam0, unk_0x15A88CFAAFFC6C4B(0, 17));
			iVar0 = func_426((uParam0->f_418.f_2 + unk_0x15A88CFAAFFC6C4B(1, 17)), 0, 16);
			func_427(uParam0, iVar0);
			func_425(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_425(var uParam0)
{
	switch (uParam0->f_418.f_2)
	{
		case 2:
		case 8:
			uParam0->f_418.f_3 = 1;
			break;
		
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_418.f_3 = 2;
			break;
		
		case 4:
		case 10:
			uParam0->f_418.f_3 = 3;
			break;
		
		case 1:
		case 6:
		case 13:
			uParam0->f_418.f_3 = 4;
			break;
		
		case 11:
			uParam0->f_418.f_3 = 5;
			break;
		
		case 12:
		case 14:
			uParam0->f_418.f_3 = 6;
			break;
		
		case 7:
			uParam0->f_418.f_3 = 7;
			break;
	}
}

int func_426(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_427(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_428(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_429(var uParam0)
{
	uParam0->f_2 = unk_0xC1A5EC5C986B98AD();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_42() };
	uParam0->f_17 = { func_42() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_144(uParam0, 32, 0);
}

void func_430(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_112704, unk_0x688846D56810779A(), 24);
		Global_112698 = 1;
	}
	else
	{
		StringCopy(&Global_112704, "NULL", 24);
		Global_112698 = 0;
	}
}

void func_431()
{
	func_201(1);
	func_208(&uLocal_846);
	func_432();
	unk_0x675D9C12C73D3DE7();
}

void func_432()
{
	unk_0xE0A291F406691F03(iLocal_841);
}

void func_433(int iParam0)
{
	Global_112358.f_22 = iParam0;
}

