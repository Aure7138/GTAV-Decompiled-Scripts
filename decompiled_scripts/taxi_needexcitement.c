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
	int iLocal_93 = 0;
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
	struct<411> Local_409 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = -1;
	var uLocal_828 = -1;
	var uLocal_829 = -1;
	var uLocal_830 = -1;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	int iLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	struct<3> Local_847[1];
	int iLocal_851 = 0;
	struct<3> Local_852 = { 0, 0, 0 } ;
	struct<3> Local_855 = { 0, 0, 0 } ;
	struct<3> Local_858 = { 0, 0, 0 } ;
	int iLocal_861 = 0;
	var uLocal_862 = 0;
	bool bLocal_863 = 0;
	int iLocal_864 = 0;
	bool bLocal_865 = 0;
	struct<28> Local_866 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 5;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 1097859072;
	var uLocal_940 = 1500;
	var uLocal_941 = 45;
	var uLocal_942 = 1103626240;
	var uLocal_943 = 5;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
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
	iLocal_851 = joaat("a_m_y_skater_02");
	Local_852 = { -496.0739f, -336.6628f, 33.5017f };
	Local_855 = { -484.6879f, -330.1646f, 33.3534f };
	Local_858 = { 725.3476f, 1204.526f, 324.9057f };
	iLocal_861 = 1;
	if (unk_0x55EEDBBFDC6E810F(67))
	{
		func_428(2);
		func_427();
	}
	unk_0xB65977CD1EC089B5(1);
	func_414(0);
	while (true)
	{
		if (unk_0x7DE17ACDD8BA2642(Local_409.f_2))
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
	if (func_413(&Local_409))
	{
		func_412(&Local_409);
		if (Local_409.f_410 > 0)
		{
			if (func_411(&Local_409, 0))
			{
				func_409();
			}
		}
		else if (func_408(&Local_409, 31) > 5f)
		{
			func_428(2);
			func_427();
		}
	}
	else
	{
		func_407(&Local_409);
		if (Local_409.f_410 <= 9)
		{
			func_373(&Local_409, &uLocal_937);
			func_372(&Local_409);
		}
		func_371(&Local_409, &uLocal_862, 0);
		if (Local_409.f_410 > 2)
		{
			if (!func_370(&Local_409))
			{
				func_339();
			}
			else
			{
				func_333(&Local_409, "Taxi Not Driveable", func_338(&Local_409));
			}
		}
		if (Local_409.f_410 == 9)
		{
			if (Local_409.f_139)
			{
				if (!unk_0x055111B11E6624FD(Local_409.f_4, 0) && func_332(Local_409.f_4, Local_409.f_17, 1) > 450f)
				{
					func_308(&Local_409, 0, 0);
				}
				else
				{
					func_308(&Local_409, 0, 1);
				}
			}
		}
		switch (Local_409.f_410)
		{
			case 0:
				func_307(&(Local_847[0 /*3*/]), "TAXI_SC_BN_02", 200);
				func_306(&Local_409, &Local_847);
				func_303();
				func_302(&Local_409, 16, 4f, 0);
				func_300(&Local_409, Local_852, Local_855, "TaxiFelipe", iLocal_851, 256f, 30f);
				func_298(&Local_409);
				func_297(&Local_409, 1);
				break;
			
			case 1:
				if (func_295())
				{
					func_294();
					func_274();
					func_273(&Local_409);
					Local_409.f_14 = { Local_852 };
					func_297(&Local_409, 3);
				}
				break;
			
			case 3:
				if (func_266(&Local_409, 1))
				{
					if (!unk_0x055111B11E6624FD(Local_409.f_3, 0))
					{
						unk_0x598D91BBD045C1F3(Local_409.f_3, 29, 0);
						unk_0xFECAE061D8C80757(Local_409.f_3, 3, 1, 1, 0);
						unk_0xFECAE061D8C80757(Local_409.f_3, 4, 1, 2, 0);
						unk_0xFECAE061D8C80757(Local_409.f_3, 0, 0, 1, 0);
						unk_0xFECAE061D8C80757(Local_409.f_3, 11, 1, 0, 0);
					}
					func_265(&Local_409, 1, 0);
					func_297(&Local_409, 5);
				}
				break;
			
			case 5:
				if (!unk_0x9DC9E896F189AAA5(Local_409.f_4, -484.9218f, -370.1231f, 33.40805f, -517.9089f, -362.7899f, 37.31326f, 28.75f, 0, 1, 0) && !unk_0x9DC9E896F189AAA5(Local_409.f_4, -472.0588f, -321.036f, 33.35326f, -485.479f, -285.4217f, 37.49232f, 28.75f, 0, 1, 0))
				{
					if (func_237(&Local_409, 0, 30f))
					{
						func_297(&Local_409, 15);
					}
				}
				break;
			
			case 15:
				if (func_236(&Local_409))
				{
					Local_409.f_17 = { Local_858 };
					bLocal_863 = true;
					func_232(&Local_409, 9, 1, 0, 0);
					func_231(&Local_409);
					Local_409.f_46 = unk_0x2935B4D6CE81318D(Local_409.f_4);
					func_297(&Local_409, 7);
				}
				if (unk_0xFBD273FDBCF0C5BD(Local_409.f_4, 0))
				{
					if (!unk_0xE0D346789C5160EB(Local_409.f_2, Local_409.f_4, 0))
					{
						func_229(&Local_409);
						func_297(&Local_409, 5);
					}
				}
				break;
			
			case 7:
				if (bLocal_863)
				{
					func_228();
					func_297(&Local_409, 9);
				}
				break;
			
			case 9:
				if (((func_332(Local_409.f_4, Local_409.f_17, 1) < 875f && func_227(&Local_409) != 68) && !func_226()) && !iLocal_864)
				{
					func_224(&(Local_409.f_100), 16384);
					func_232(&Local_409, 68, 1, 0, 1);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_864 = 1;
				}
				if (func_223(Local_409.f_81, 67108864))
				{
					if (!func_222(&Local_409))
					{
					}
				}
				if (func_185(&Local_409, 9f, 7.5f))
				{
					unk_0x45533C09A6C9B409(&(Local_409.f_9));
					func_184();
					func_183(&Local_866, -1, 1);
					if (Local_409.f_76 >= 95)
					{
						func_182(&Local_409, 0);
					}
					func_180(&Local_409);
					func_176(&Local_409);
					if (Local_409.f_56 < Local_409.f_58)
					{
						func_297(&Local_409, 28);
					}
					else
					{
						unk_0xEDB03CCB50D11479(Local_409.f_3, unk_0xC1A5EC5C986B98AD(), -1, 2049, 3);
						unk_0xEDB03CCB50D11479(unk_0xC1A5EC5C986B98AD(), Local_409.f_3, -1, 2049, 3);
						func_297(&Local_409, 27);
					}
					func_175(&Local_409);
				}
				break;
			
			case 27:
				if (func_165(&Local_409, 1))
				{
					unk_0x1F9F6C767BE640D5(Local_409.f_3);
					unk_0x1F9F6C767BE640D5(unk_0xC1A5EC5C986B98AD());
					func_164(&Local_409);
					func_297(&Local_409, 29);
				}
				break;
			
			case 28:
				if (iLocal_839 == 2 && !func_163(Local_409.f_2, Local_409.f_3))
				{
					if (!func_162(&uLocal_944))
					{
						func_160(&uLocal_944);
					}
					else if (func_159(&uLocal_944) > 5f)
					{
						func_232(&Local_409, 106, 1, 0, 1);
						func_160(&uLocal_944);
					}
				}
				if (func_121(&iLocal_839, &Local_409, &(Local_409.f_3), &uLocal_840, 1))
				{
					if (!unk_0x66599E73DBA5A850(Local_409.f_3))
					{
						func_106(&(Local_409.f_244), Local_409.f_144, "txm2_runoff", 9, 0, 0, 0);
					}
					func_297(&Local_409, 29);
				}
				break;
			
			case 29:
				if (func_76(&Local_409, &uLocal_947))
				{
					if (!func_226())
					{
						func_10(1, &Local_409, 1);
						func_297(&Local_409, 30);
					}
				}
				break;
			
			case 30:
				func_427();
				break;
			}
	}
}

void func_10(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_52(uParam1);
		if (!unk_0x66599E73DBA5A850(uParam1->f_3))
		{
			unk_0x598D91BBD045C1F3(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_50(1, 0);
	}
	func_11(uParam1, bParam2);
}

void func_11(var uParam0, bool bParam1)
{
	func_412(uParam0);
	if (func_226())
	{
		func_48();
	}
	func_46();
	unk_0x8581263F2F024518();
	unk_0xCD3C8E1022864F65(1);
	func_41(0);
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		unk_0x5BC68FEFF4902C2B(uParam0->f_4, 0);
		unk_0xDF0FE2BA2F7D9612(uParam0->f_4);
		unk_0x154A8720BFE7CE05(uParam0->f_4);
	}
	func_38(uParam0->f_14, 1);
	func_36(uParam0->f_14, 1, 1114636288);
	func_35(&(uParam0->f_244), 3);
	unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 32, 1);
	if (func_32())
	{
		unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
	}
	unk_0xC3578D74003B8E01(1);
	func_22(0, 1, 1, 0, 0, 0, 0);
	unk_0x61F7D56FFAFBF706(1);
	unk_0xB1A691274215E4CE(1);
	if (unk_0xF57C1326FD40C8A7(*uParam0))
	{
		unk_0x42B9FA814615C4F9(*uParam0, 0);
		unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
		unk_0xEF54B7007CB2210B(1);
	}
	if (func_223(Global_113648.f_19099, 4))
	{
		func_20(&(Global_113648.f_19099), 4);
		unk_0x9C56520AE72AFDBF(func_19(), 0);
	}
	if (bParam1)
	{
		func_18(uParam0);
	}
	func_17(uParam0);
	unk_0x0B34FA69ECCE3927("gestures@m@standing@casual");
	unk_0x0B34FA69ECCE3927("oddjobs@taxi@");
	unk_0x0B34FA69ECCE3927("oddjobs@towingcome_here");
	if (unk_0x67EBFCF2F78761B9())
	{
		func_15(uParam0->f_411);
	}
	if (!unk_0x1B82EF141CC65934(unk_0x5DC3DCA82C806319()))
	{
		unk_0xE333240A90F2FF3C(unk_0x5DC3DCA82C806319(), 1, 0);
	}
	unk_0xD094BE9EF72C6999(unk_0xF2DB717A73826179((func_12(&uLocal_90) * 1000f)), 12, 0);
}

float func_12(var uParam0)
{
	if (func_162(uParam0))
	{
		if (func_14(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_13(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_13(bool bParam0)
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

bool func_14(var uParam0)
{
	return BitTest(*uParam0, 2);
}

void func_15(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_16(iParam0)}, 6);
		if (!unk_0xB71C73D0269747D5(&uVar0))
		{
		}
	}
}

struct<8> func_16(int iParam0)
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

void func_17(var uParam0)
{
	unk_0x027770D13FA412CB(uParam0->f_51[0]);
}

void func_18(var uParam0)
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

int func_19()
{
	return joaat("taxi");
}

void func_20(var uParam0, int iParam1)
{
	func_21(uParam0, iParam1);
}

void func_21(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_22(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x8ECAA315E07E3A17(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 1);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 1);
		func_31(1);
		unk_0x2A7FF4CA1CC371B5();
		unk_0x3096CB6635EB839E();
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE444FD7526C8BB46())
			{
				unk_0xD6625E11483B2324(0);
			}
			if (!func_30())
			{
				Global_20383.f_1 = 3;
			}
			Global_21725 = 5;
		}
		func_29(1, iParam3, iParam2, 0);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_31(0);
		unk_0x5862CC4FD19EB752();
		Global_63368 = 0;
		if (bParam1)
		{
			unk_0xDB4D82037BD5A339();
		}
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 0);
		func_29(0, iParam3, iParam2, 0);
		if (unk_0xA26A9A07F761D8F8())
		{
			if ((((((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_27(unk_0x93E99A2DBCBA9CFA())) && !func_24(unk_0x93E99A2DBCBA9CFA(), 0)) && !func_23()) && !bParam4) && !bParam5) && !unk_0x8253CEEA17ED481B())
			{
				unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
			}
		}
		else if (((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_27(unk_0x93E99A2DBCBA9CFA())) && !bParam4) && !bParam5)
		{
			unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
		}
		Global_78556 = 0;
	}
}

bool func_23()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 14);
}

bool func_24(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_25(-1, 0) == 8;
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

int func_25(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
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

int func_26()
{
	return Global_1574918;
}

int func_27(int iParam0)
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_28())
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

bool func_28()
{
	return BitTest(Global_2621446, 3);
}

int func_29(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_30()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_31(int iParam0)
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

int func_32()
{
	if (!func_34() && !func_33())
	{
		if (!unk_0x2E27C24397D7F166(unk_0x5DC3DCA82C806319()))
		{
			return 1;
		}
	}
	return 0;
}

int func_33()
{
	if (unk_0x24B651D85CCE5EB4(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_34()
{
	if (unk_0x24B651D85CCE5EB4(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_35(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_36(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_37(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_37(Param0, 1f, fParam4, fParam4, fParam4) };
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

Vector3 func_37(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
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

void func_38(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_39(Param0, func_40(), 0))
	{
		Var0 = { func_37(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_37(Param0, 1f, 30f, 30f, 10f) };
		unk_0x8E09E8C52602EBB2(Var0, Var3, iParam3, 1);
	}
}

bool func_39(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_40()
{
	struct<3> Var0;
	
	return Var0;
}

void func_41(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_44())
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
	if (!func_30())
	{
		Global_20383.f_1 = 3;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_43(0))
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

int func_43(int iParam0)
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

bool func_44()
{
	return BitTest(Global_1962996, 5);
}

bool func_45()
{
	return BitTest(Global_1962996, 19);
}

void func_46()
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
					func_47(Global_97614[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_47(int iParam0, bool bParam1)
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

void func_48()
{
	Global_20591 = 0;
	func_49();
}

void func_49()
{
	unk_0x782234C275AFBA24();
	Global_22736 = 0;
	if (unk_0x0DCB385165FDE763())
	{
		unk_0xD6625E11483B2324(0);
		Global_21725 = 6;
	}
}

void func_50(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_113648.f_19099.f_22[0]++;
			func_51("Fares Completed ++ = ", Global_113648.f_19099.f_22[0]);
			break;
		
		case 1:
			Global_113648.f_19099.f_22[1]++;
			func_51("Fares Failed ++ = ", Global_113648.f_19099.f_22[1]);
			break;
		
		case 2:
			Global_113648.f_19099.f_22[2]++;
			func_51("Fares Accepted ++ ", Global_113648.f_19099.f_22[2]);
			break;
		
		case 3:
			Global_113648.f_19099.f_22[3]++;
			func_51("Fares Expired ++ ", Global_113648.f_19099.f_22[3]);
			break;
		
		case 13:
			Global_113648.f_19099.f_22[13]++;
			func_51("Passengers run ++ = ", Global_113648.f_19099.f_22[13]);
			break;
		
		case 14:
			Global_113648.f_19099.f_22[14]++;
			func_51("Passenger Forced to Pay ++ = ", Global_113648.f_19099.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_113648.f_19099.f_22[4])
				{
					Global_113648.f_19099.f_22[4] = iParam1;
					func_51("This distance ", iParam1);
					func_51(" is longer than current best", Global_113648.f_19099.f_22[4]);
				}
				else
				{
					func_51("Longest Distance Not Beat ", Global_113648.f_19099.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_113648.f_19099.f_22[5] = (Global_113648.f_19099.f_22[5] + iParam1);
			func_51("Total Distance w/ Passenger = ", Global_113648.f_19099.f_22[5]);
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
			func_51("Wanted Levels ++ = ", Global_113648.f_19099.f_22[6]);
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
			func_51("Wanted Levels Lost = ", Global_113648.f_19099.f_22[7]);
			break;
		
		case 8:
			Global_113648.f_19099.f_22[8]++;
			func_51("Taxis wrecked ++ = ", Global_113648.f_19099.f_22[8]);
			break;
		
		case 9:
			Global_113648.f_19099.f_22[9]++;
			func_51("Horn Honked ++ = ", Global_113648.f_19099.f_22[9]);
			break;
		
		case 10:
			Global_113648.f_19099.f_22[10] = (Global_113648.f_19099.f_22[10] + iParam1);
			func_51("Total Money Earned = ", Global_113648.f_19099.f_22[10]);
			break;
		
		case 11:
			Global_113648.f_19099.f_22[11] = (Global_113648.f_19099.f_22[11] + iParam1);
			func_51("Total Tips Earned = ", Global_113648.f_19099.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_113648.f_19099.f_22[12])
			{
				Global_113648.f_19099.f_22[12] = iParam1;
				func_51("New Highest Tip = ", Global_113648.f_19099.f_22[12]);
			}
			else
			{
				func_51("Highest Tip Not Reached = ", Global_113648.f_19099.f_22[12]);
			}
			break;
	}
}

void func_51(char* sParam0, int iParam1)
{
}

void func_52(var uParam0)
{
	func_50(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_428(1);
		func_62(15, 1);
	}
	func_224(&(Global_113648.f_19099), 1024);
	if (!func_223(Global_113648.f_19099, 64))
	{
		func_53(func_60(func_61(uParam0)), 0, 0);
	}
}

void func_53(int iParam0, int iParam1, int iParam2)
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
		func_59((891 + iParam0), 1, -1);
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
		func_54();
	}
}

void func_54()
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
		func_58(13, unk_0xF34EE736CF047844(Global_113648.f_10196.f_3853));
	}
	if (!unk_0xBAB6476CDD8C4AA6())
	{
		if (!Global_78558)
		{
			if (func_57() == 2 == 0 && !unk_0xA26A9A07F761D8F8())
			{
				if (unk_0x3FFDF8D1413D95DE())
				{
					Global_113382 = 0;
				}
				if (!Global_63362)
				{
					func_55();
				}
			}
		}
	}
}

int func_55()
{
	if (func_56(0))
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

int func_56(bool bParam0)
{
	if (!bParam0 && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

int func_57()
{
	return Global_32163;
}

int func_58(int iParam0, int iParam1)
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

void func_59(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_26();
	}
	unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
}

int func_60(int iParam0)
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

int func_61(var uParam0)
{
	return uParam0->f_411;
}

int func_62(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_63(iParam0, iParam1);
}

int func_63(int iParam0, int iParam1)
{
	if (func_75(14) && !func_74(iParam0))
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
	if (func_73(&Global_4542597))
	{
		if (func_71(&Global_4542597, iParam0))
		{
			return 0;
		}
		if (func_64(&Global_4542597, iParam0))
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

int func_64(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x73651E4B1D91FE32(iParam1))
	{
		return 0;
	}
	if (func_75(14) && !func_74(iParam1))
	{
		return 0;
	}
	if (func_71(uParam0, iParam1))
	{
		return 0;
	}
	if (func_70(uParam0) < 0f)
	{
		func_69(uParam0, 0);
	}
	func_67(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_65(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_65(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x73651E4B1D91FE32(iParam1))
	{
		return 0;
	}
	if (func_75(14) && !func_74(iParam1))
	{
		return 0;
	}
	if (func_71(uParam0, iParam1))
	{
		return 0;
	}
	if (func_70(uParam0) < 0f)
	{
		func_69(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_66(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_66(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_67(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_68(uParam0, iVar0);
		iVar0++;
	}
	func_69(uParam0, (Global_4542596 - 0.5f));
}

void func_68(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_69(var uParam0, float fParam1)
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

float func_70(var uParam0)
{
	return uParam0->f_80;
}

bool func_71(var uParam0, int iParam1)
{
	return func_72(uParam0, iParam1) != -1;
}

int func_72(var uParam0, int iParam1)
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

bool func_73(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_74(int iParam0)
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

bool func_75(int iParam0)
{
	return Global_43257 == iParam0;
}

int func_76(var uParam0, var uParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_226() && func_408(uParam0, 0) > 1f)
			{
				if (func_32())
				{
					unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
				}
				func_105(uParam0);
				func_20(&(Global_113648.f_19099), 4096);
				func_102(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_104(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0x531D638530A8DB97(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_101(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_98(uParam1, 0))
			{
				func_77(uParam0);
				func_302(uParam0, 0, 0, 0);
				func_101(0);
				iLocal_168 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_77(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_78(func_96(), 21, iVar0, 0, 0);
		func_50(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_78(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_95(iParam0) == 3)
	{
		return;
	}
	if (func_95(iParam0) == 4)
	{
		return;
	}
	func_79(func_95(iParam0), 1, iParam1, iParam2, 0);
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

int func_79(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_94();
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
					func_93(99, 1);
					func_92(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_92(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_92(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_91(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_88(5))
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
							func_92(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_92(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_92(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_88(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_92(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_92(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_92(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_92(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_92(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_92(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_92(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_92(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_92(joaat("sp2_money_spent_property"), iParam3);
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
									func_92(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_92(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_92(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_92(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_92(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_92(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_88(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_92(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_92(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_92(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_92(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_92(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_92(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_87(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_93(95, iParam3);
					break;
				
				case 1:
					func_93(97, iParam3);
					break;
				
				case 2:
					func_93(96, iParam3);
					break;
			}
			func_93(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_82(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_82(bVar1);
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
					func_92(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_92(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_92(joaat("sp2_total_cash_earned"), iParam3);
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
	func_81(iParam0);
	if (Global_43257 == 15)
	{
		func_80(0);
	}
	return 1;
}

void func_80(bool bParam0)
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

void func_81(int iParam0)
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

void func_82(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_59(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_59(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_59(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_59(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_85(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_85(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_85(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_85(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_85(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_85(8277, 0, -1, 1, 0);
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
	else if (BitTest(Global_113648.f_20566.f_471, bParam0) || BitTest(Global_2359296[func_84() /*5568*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0x061B1200C95204CB(&(Global_113648.f_20566.f_471), bParam0);
		unk_0x061B1200C95204CB(&(Global_2359296[func_84() /*5568*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xD30970E11AD0FF0D("COUP_RED");
		unk_0x48849374B34BB7B9(func_83(bParam0));
		unk_0x4BE755B3858339A1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_83(bool bParam0)
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

int func_84()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_85(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_86(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
}

int func_86(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
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

void func_87(int iParam0)
{
	func_93(93, iParam0);
	func_93(29, iParam0);
	func_93(30, iParam0);
}

int func_88(int iParam0)
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
		return func_90(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_90(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_90(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_90(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xD48CE560FB238316();
		iVar1 = func_89(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xD48CE560FB238316();
		iVar3 = func_89(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xD48CE560FB238316();
		iVar5 = func_89(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xD48CE560FB238316();
		iVar7 = func_89(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xD48CE560FB238316();
		iVar9 = func_89(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xD48CE560FB238316();
		iVar11 = func_89(8277, -1, 0);
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
	return BitTest(Global_2359296[func_84() /*5568*/].f_681.f_10, iParam0);
}

int func_89(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2805027[iParam0 /*3*/][func_86(iParam1)];
		if (unk_0xDD7756E2742E0F6D(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_90(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}

int func_91(bool bParam0)
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
		func_58(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_62(27, 1);
	return 1;
}

void func_92(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xDD7756E2742E0F6D(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3CC35ACFFC9C730E(iParam0, iVar0, 1);
}

void func_93(int iParam0, int iParam1)
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

void func_94()
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

int func_95(int iParam0)
{
	return Global_2028[iParam0 /*29*/].f_17;
}

int func_96()
{
	func_97();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_97()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_4(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_3(unk_0xC1A5EC5C986B98AD());
			if (func_6(iVar0) && (!func_75(14) || Global_112599))
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

int func_98(var uParam0, int iParam1)
{
	if (!func_162(&(uParam0->f_2)))
	{
		func_160(&(uParam0->f_2));
	}
	unk_0xEDECDDE17C1E41F5(14);
	unk_0x55CCA1B8F633F628(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x87644B1F984197FE(2, 201) || uParam0->f_8)
		{
			if (!func_162(&(uParam0->f_5)))
			{
				func_160(&(uParam0->f_5));
				func_100(uParam0, 1051260355);
			}
		}
		if (func_162(&(uParam0->f_5)))
		{
			if (func_159(&(uParam0->f_5)) > 0.33f)
			{
				func_99(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_159(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_162(&(uParam0->f_5)))
		{
			func_160(&(uParam0->f_5));
			func_100(uParam0, 1051260355);
		}
		else if (func_159(&(uParam0->f_5)) > 0.33f)
		{
			func_99(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_99(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_100(var uParam0, int iParam1)
{
	unk_0x9FD96C5DE6EDFC15(*uParam0, "SHARD_ANIM_OUT");
	unk_0xC6A3EF6C4A3412C1(uParam0->f_9);
	unk_0xC49D258FBF3BF214(iParam1);
	unk_0xAE3413B0654A0035();
}

void func_101(int iParam0)
{
	Global_78819 = iParam0;
	Global_78820 = iParam0;
}

void func_102(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x9FD96C5DE6EDFC15(*uParam0, func_103());
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
	func_160(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_103()
{
	if (unk_0xA26A9A07F761D8F8())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_104(var uParam0)
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

void func_105(var uParam0)
{
	int iVar0;
	
	Local_169.f_1 = unk_0xBBDA792448DB5A89(uParam0->f_50);
	Local_169.f_2 = unk_0xBBDA792448DB5A89(uParam0->f_56);
	func_50(11, uParam0->f_56);
	func_50(12, uParam0->f_56);
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

int func_106(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_120(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_107(sParam2, iParam3, 0);
}

int func_107(char* sParam0, int iParam1, bool bParam2)
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
					func_119();
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
		if (func_118(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_117();
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
				func_116();
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
				if (func_115())
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
			if (func_30())
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
			func_114();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_113();
		func_108();
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
		func_119();
	}
	return 0;
}

void func_108()
{
	if (!func_109())
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

int func_109()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_112())
	{
		return 0;
	}
	if (func_110(unk_0x93E99A2DBCBA9CFA()))
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

bool func_110(int iParam0)
{
	return func_111(iParam0, 20);
}

var func_111(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_112()
{
	return -1;
}

void func_113()
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

void func_114()
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

int func_115()
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

void func_116()
{
	if (func_75(14))
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
		Global_20383 = func_96();
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

void func_117()
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

bool func_118(int iParam0, int iParam1)
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

void func_119()
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

void func_120(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_121(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	var uVar0;
	
	switch (*iParam0)
	{
		case 0:
			if (!unk_0x055111B11E6624FD(*uParam2, 0))
			{
				func_157(uParam1, 320, bParam4);
				unk_0xCFFDA1550DF82B52(*uParam2, unk_0x15A88CFAAFFC6C4B(100, 300));
				func_155(uParam1, uParam2, "TAXI_BLIP_PASS", 1);
				func_50(13, 0);
				*iParam0 = 1;
			}
			else
			{
				*iParam0 = 5;
			}
			break;
		
		case 1:
			if (!unk_0x055111B11E6624FD(*uParam2, 0))
			{
				if (!unk_0x3C3D6D026CF7F51B(*uParam2, 0))
				{
					unk_0xE333240A90F2FF3C(unk_0x5DC3DCA82C806319(), 1, 0);
					*iParam0 = 2;
				}
			}
			else
			{
				*iParam0 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x055111B11E6624FD(*uParam2, 0))
			{
				func_127(&uLocal_45, *uParam2, 0, 0, 1, 1, 1);
				if (!func_163(uParam1->f_2, *uParam2))
				{
					if (unk_0xFBD273FDBCF0C5BD(uParam1->f_4, 0))
					{
						if (unk_0x7559C38E6535AB89(*uParam2, uParam1->f_4, 1))
						{
							*iParam0 = 3;
						}
					}
					if (unk_0x7559C38E6535AB89(*uParam2, uParam1->f_2, 1))
					{
						*iParam0 = 3;
					}
					if (*iParam0 != 3)
					{
						if (!unk_0x3C3D6D026CF7F51B(uParam1->f_2, 0))
						{
							if (unk_0xEAEF747543427AC5(uParam1->f_2, *uParam2, 20f, 20f, 10f, 0, 1, 0))
							{
								if (unk_0x110D030CCD4E83A6(uParam1->f_2))
								{
									*iParam0 = 3;
								}
								else
								{
									if (unk_0xEAEF747543427AC5(uParam1->f_2, *uParam2, 2f, 2f, 10f, 0, 1, 0))
									{
										*iParam0 = 3;
									}
									if (unk_0x2D1125ABF6C8F8C4(uParam1->f_2, 6))
									{
										if (unk_0xC67B4044F323AEB2())
										{
											*iParam0 = 3;
										}
									}
								}
							}
							else if (unk_0xEAEF747543427AC5(uParam1->f_2, *uParam2, 50f, 50f, 10f, 0, 1, 0))
							{
								if (unk_0x110D030CCD4E83A6(uParam1->f_2))
								{
									*iParam0 = 3;
								}
							}
						}
						else if (unk_0xEAEF747543427AC5(uParam1->f_2, *uParam2, 50f, 50f, 25f, 0, 1, 0))
						{
							if (unk_0x110D030CCD4E83A6(uParam1->f_2))
							{
								*iParam0 = 3;
							}
						}
					}
				}
				else
				{
					func_125(&uLocal_45, 0, 0);
					uParam1->f_109 = 1;
					*iParam0 = 5;
				}
			}
			else
			{
				func_125(&uLocal_45, 0, 0);
				*iParam0 = 5;
			}
			break;
		
		case 3:
			func_125(&uLocal_45, 0, 0);
			if (!unk_0x055111B11E6624FD(*uParam2, 0))
			{
				if (unk_0xCE4AAA035282336C(uParam1->f_8))
				{
					unk_0x45533C09A6C9B409(&(uParam1->f_8));
				}
				unk_0xC5B2830898581862(*uParam2, 1);
				unk_0xDBC7406226B5540E(&uVar0);
				unk_0xA2C73FAE5789EC05(0, 5000);
				unk_0xC6C9BF71106ABCAC(0, uParam1->f_2, 1000f, -1, 0, 0);
				unk_0x82C6DD5E8460E2C0(0, 0);
				unk_0xF2CFC6EC8C85FA78(uVar0);
				unk_0x3D7110D966B0CEA2(*uParam2, uVar0);
				unk_0x63EF69C6969A3D26(&uVar0);
				unk_0x71A535529C1CA5DF(*uParam2, 1);
				func_232(uParam1, 109, 1, 0, 0);
				*iParam0 = 4;
				unk_0x8581263F2F024518();
			}
			else
			{
				*iParam0 = 4;
				unk_0x8581263F2F024518();
			}
			if (unk_0xCE4AAA035282336C(uParam1->f_8))
			{
				unk_0x45533C09A6C9B409(&(uParam1->f_8));
			}
			func_122(*uParam2, uParam3, 1, -1);
			break;
		
		case 4:
			if (unk_0x923599D48C8BCBED(uParam3->f_6))
			{
				if (unk_0xCE4AAA035282336C(uParam3->f_5))
				{
					unk_0x45533C09A6C9B409(&(uParam3->f_5));
				}
				func_180(uParam1);
				func_50(14, 0);
				uParam1->f_56 = 0;
				*iParam0 = 5;
			}
			break;
		
		case 5:
			if (!unk_0x055111B11E6624FD(*uParam2, 0))
			{
				unk_0x1EEF71E3CDD868D3(uParam2);
				if (unk_0xCE4AAA035282336C(uParam1->f_8))
				{
					unk_0x45533C09A6C9B409(&(uParam1->f_8));
				}
			}
			else
			{
				unk_0xE2C528FAB670225B(unk_0x5DC3DCA82C806319(), 2, 0);
				unk_0x6CDFCA6843DA90FF(unk_0x5DC3DCA82C806319(), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_122(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	struct<3> Var0;
	
	uParam1->f_1 = 0;
	if (!unk_0x66599E73DBA5A850(iParam0))
	{
		uParam1->f_2 = { unk_0x30BE8A934C020461(iParam0, 1) };
		unk_0xCFFDA1550DF82B52(iParam0, 0);
		*uParam1 = 0;
	}
	else
	{
		if (iParam3 <= 0)
		{
			*uParam1 = unk_0x15A88CFAAFFC6C4B(80, 200);
		}
		else
		{
			*uParam1 = iParam3;
		}
		uParam1->f_2 = { unk_0x2B615FCF11D3E1D3(iParam0, 1067030938, 1069547520) };
	}
	unk_0xECDAB41968FF21A8(&(uParam1->f_1), 3);
	unk_0xECDAB41968FF21A8(&(uParam1->f_1), 4);
	Var0 = { unk_0x223044F9F739377D(uParam1->f_2, 1067030938, 1069547520) };
	uParam1->f_6 = unk_0x8D2015F36A52256C(joaat("pickup_money_variable"), Var0, uParam1->f_1, *uParam1, 1, 0);
	if (bParam2)
	{
		if (!unk_0xCE4AAA035282336C(uParam1->f_5))
		{
			uParam1->f_5 = func_123(uParam1->f_6);
			unk_0x4049FDC177C92D4B(uParam1->f_5, "TAXI_BLIP_MONE");
		}
		else
		{
			unk_0x4049FDC177C92D4B(uParam1->f_5, "TAXI_BLIP_MONE");
		}
	}
}

int func_123(var uParam0)
{
	var uVar0;
	
	if (!unk_0x0E0433D7F75E162D(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x76C6595450F90E77(uParam0);
	unk_0x225EB85DBC38E707(uVar0, func_124(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
	return uVar0;
}

float func_124(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_125(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0xA26A9A07F761D8F8())
	{
		if (BitTest(Global_2793044.f_4690, 26))
		{
			return;
		}
	}
	if (unk_0x3FACE5B6ACB3A4AA())
	{
		unk_0x0D6E6120F1782BCF(iParam2);
		unk_0x29978E5D6F8BB77E("FocusIn");
		unk_0x3FA8C73B5856A3E4("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x451128B7D435FBF2("FocusOut", 0, 0);
			unk_0x531D638530A8DB97(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xEF54B7007CB2210B(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xB71C73D0269747D5(sVar0))
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xB71C73D0269747D5(uParam0->f_3))
	{
		if (func_126(uParam0->f_3))
		{
			unk_0xCD3C8E1022864F65(1);
		}
	}
	if (!unk_0xB71C73D0269747D5(sVar0))
	{
		if (func_126(sVar0))
		{
			unk_0xCD3C8E1022864F65(1);
		}
	}
}

bool func_126(char* sParam0)
{
	unk_0x56C9BC27C0FF68D7(sParam0);
	return unk_0x6A92D111B5409879(0);
}

void func_127(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_128(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_128(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_129(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_129(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
	{
		func_125(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_130(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_130(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x3FACE5B6ACB3A4AA())
	{
		if (unk_0xA5E11AF0A2B928C1() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xB71C73D0269747D5(iVar0))
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_126(iVar0))
	{
		func_154();
	}
	if (func_153(iParam1) && unk_0x51DF6895C236B231(iParam1))
	{
		iVar1 = 0;
		if (unk_0x71904BD37B848CAF(iParam1))
		{
			unk_0x1EC62F08E5FEE4F4(unk_0x9C8D7679C15E75FF(iParam1));
			unk_0x0B9E116BF89A0A6B(unk_0x9C8D7679C15E75FF(iParam1), 1);
			if (unk_0x9F13F6DF99716F66(unk_0x9C8D7679C15E75FF(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xA6B591D40DE982B5(iParam1))
		{
			unk_0x9137AB1FD8C79729(unk_0x4DFB7A1A6909D574(iParam1));
			if (unk_0x0F68F5841D33217C(unk_0x4DFB7A1A6909D574(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x4E7A9806173C3AD1(iParam1))
		{
			unk_0x38A3D119469E88B4(unk_0x29F9842A71C1C2FF(iParam1));
			if (unk_0x1B1CC398E002E686(unk_0x29F9842A71C1C2FF(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x3FACE5B6ACB3A4AA())
		{
			if (func_148(uParam0, bParam7, bParam9, 0))
			{
				func_145(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_135(iVar0))
				{
					if ((unk_0xB71C73D0269747D5(uParam0->f_3) && !unk_0xB71C73D0269747D5(iVar0)) && unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
					{
						if ((iVar1 && !unk_0xF0E4B64AC0B5660E()) && uParam8)
						{
							if (!func_126(iVar0))
							{
								func_134(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x4310A0DB886F9FED("CMN_HINT", iVar0))
								{
									func_133(1);
								}
							}
						}
					}
				}
			}
			else if (func_135(iVar0))
			{
				if (unk_0xB71C73D0269747D5(uParam0->f_3) && !unk_0xB71C73D0269747D5(iVar0))
				{
					if (((unk_0x865259F0333CAA4B(iParam1) && iVar1) && !unk_0xF0E4B64AC0B5660E()) && uParam8)
					{
						if (!func_126(iVar0))
						{
							func_134(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x4310A0DB886F9FED("CMN_HINT", iVar0))
							{
								func_133(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xB71C73D0269747D5(sParam5))
			{
				if (func_126(sParam5))
				{
					unk_0xCD3C8E1022864F65(1);
				}
			}
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
			{
				if (unk_0xB076EA895B1A6BEC(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x80A3F4E694565F6A(3) == 3 || unk_0x80A3F4E694565F6A(3) == 4)
					{
						func_125(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x6DFDDBD2D0067A98(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x80A3F4E694565F6A(6) == 3 || unk_0x80A3F4E694565F6A(6) == 4)
					{
						func_125(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x2AE2D64A5E125BF2(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x80A3F4E694565F6A(4) == 3 || unk_0x80A3F4E694565F6A(4) == 4)
					{
						func_125(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x81F36522FE1E02B8(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x80A3F4E694565F6A(5) == 3 || unk_0x80A3F4E694565F6A(5) == 4)
					{
						func_125(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA8F00D68C81685D6(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x80A3F4E694565F6A(2) == 3 || unk_0x80A3F4E694565F6A(2) == 4)
					{
						func_125(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8C9D6596CF19A4E2() == 3 || unk_0x8C9D6596CF19A4E2() == 4)
				{
					func_125(uParam0, iVar0, 1);
				}
			}
			if (!func_148(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_132(uParam0))
				{
					func_131(uParam0);
				}
			}
		}
	}
	else
	{
		func_125(uParam0, iVar0, 0);
	}
}

void func_131(var uParam0)
{
	if (func_153(unk_0xC1A5EC5C986B98AD()))
	{
		unk_0x1F9F6C767BE640D5(unk_0xC1A5EC5C986B98AD());
	}
	if (unk_0x3FACE5B6ACB3A4AA())
	{
		unk_0xEF54B7007CB2210B(1);
		unk_0x0D6E6120F1782BCF(0);
		unk_0x3FA8C73B5856A3E4("HINT_CAM_SCENE");
		unk_0x29978E5D6F8BB77E("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x451128B7D435FBF2("FocusOut", 0, 0);
			unk_0x531D638530A8DB97(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_132(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0xA5E11AF0A2B928C1()
		{
			return 1;
		}
	}
	return 0;
}

int func_133(bool bParam0)
{
	switch (Global_43257)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_113648.f_10051.f_100++;
			}
			return Global_113648.f_10051.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_113648.f_10051.f_101++;
			}
			return Global_113648.f_10051.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_113648.f_10051.f_102++;
			}
			return Global_113648.f_10051.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_134(char* sParam0, int iParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
}

int func_135(char* sParam0)
{
	if (!func_136(1, 1, 0))
	{
		if ((!unk_0x2AC37494BBF1DB16(sParam0) && func_126(sParam0)) || func_126("CMN_HINT"))
		{
			unk_0xCD3C8E1022864F65(1);
		}
		return 0;
	}
	switch (Global_43257)
	{
		case 0:
		case 3:
			if (func_133(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_133(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_133(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_136(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xB53553DC4AAC7D8A())
	{
		return 0;
	}
	if (func_43(0))
	{
		return 0;
	}
	if (func_144())
	{
		return 0;
	}
	if (unk_0xEBDA168F3804CE1F())
	{
		return 0;
	}
	if (Global_75693)
	{
		return 0;
	}
	if (unk_0x24B651D85CCE5EB4(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_60543)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
		{
			if (unk_0xB076EA895B1A6BEC(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x80A3F4E694565F6A(3) == 3 || unk_0x80A3F4E694565F6A(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x6DFDDBD2D0067A98(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x80A3F4E694565F6A(6) == 3 || unk_0x80A3F4E694565F6A(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x2AE2D64A5E125BF2(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x80A3F4E694565F6A(4) == 3 || unk_0x80A3F4E694565F6A(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x81F36522FE1E02B8(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x80A3F4E694565F6A(5) == 3 || unk_0x80A3F4E694565F6A(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA8F00D68C81685D6(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x80A3F4E694565F6A(2) == 3 || unk_0x80A3F4E694565F6A(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8C9D6596CF19A4E2() == 3 || unk_0x8C9D6596CF19A4E2() == 4)
			{
				return 0;
			}
			if (unk_0x020429064B9B9A70())
			{
				return 0;
			}
		}
	}
	if ((func_143() || func_142(Global_4718592.f_166301)) || func_141())
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			iVar1 = func_140(unk_0xC1A5EC5C986B98AD(), 0);
			if (((unk_0xC78C3E6F7A5988D9(iVar0, iVar1) || (unk_0x504B9BB48D41C264(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x504B9BB48D41C264(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x504B9BB48D41C264(iVar0) == joaat("riot2") && iVar1 == 0) && func_139(iVar0, 10)) && unk_0xCA36A30E79A35222(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1962010)
	{
		return 0;
	}
	if (func_137(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	return 1;
}

int func_137(int iParam0)
{
	if (iParam0 != func_112())
	{
		if (func_138(iParam0, 1, 1))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
		else if ((Global_1575060 && iParam0 == unk_0x93E99A2DBCBA9CFA()) && func_138(iParam0, 1, 0))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

int func_138(int iParam0, bool bParam1, bool bParam2)
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

int func_139(int iParam0, int iParam1)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		if (unk_0x6BDF27AD591C4E31(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0xF66CFEE3C6DDCF4D(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_140(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x66599E73DBA5A850(iParam0))
	{
		if (unk_0x3C3D6D026CF7F51B(iParam0, iParam1))
		{
			iVar0 = unk_0x95DC39736F6748E3(iParam0, iParam1);
			if (unk_0x7DE17ACDD8BA2642(iVar0))
			{
				iVar1 = unk_0xB47599824058F1C1(unk_0x504B9BB48D41C264(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x9CFCDD9C62B56708(iVar0, iVar3, 0))
					{
						if (unk_0xA66E176E5772E965(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_141()
{
	return Global_2683862.f_19;
}

bool func_142(int iParam0)
{
	return iParam0 == 51;
}

var func_143()
{
	return Global_2683862.f_18;
}

bool func_144()
{
	return unk_0xA5E11AF0A2B928C1() <= Global_23270.f_6321 + 100;
}

void func_145(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1581968 == 1)
	{
		return;
	}
	if (unk_0x055111B11E6624FD(iParam1, 0))
	{
		func_125(uParam0, 0, 0);
	}
	if (func_39(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x71904BD37B848CAF(iParam1))
		{
			iVar0 = unk_0x9C8D7679C15E75FF(iParam1);
			if (!unk_0x3C3D6D026CF7F51B(iVar0, 0))
			{
				if (unk_0x60A06DE259634304(iVar0))
				{
					if (!func_146())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xE07B92C7EA4970AA(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xEF54B7007CB2210B(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x882C9EFD4718B1BE(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xEDB03CCB50D11479(unk_0xC1A5EC5C986B98AD(), iParam1, -1, iVar3, iVar4);
	unk_0x451128B7D435FBF2("FocusIn", 0, 0);
	unk_0xAEA29937C5240DA0("HINT_CAM_SCENE");
	unk_0x531D638530A8DB97(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xA5E11AF0A2B928C1();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_146()
{
	return func_147(unk_0x93E99A2DBCBA9CFA());
}

int func_147(int iParam0)
{
	if (unk_0x504B9BB48D41C264(unk_0xF2CFBB1105511E1A(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_148(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0xA5E11AF0A2B928C1() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
				{
					if (func_152(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_151(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_151(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_152(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_132(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
					{
						if (!func_152(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_151(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_151(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_152(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
				{
					if (!func_152(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_151(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_151(bParam1, bParam2, bParam3) || unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1) || unk_0xA2C02BFE3012901E(unk_0xC1A5EC5C986B98AD(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_152(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
					{
						if (func_150(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_149(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1) || func_149(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1) || unk_0xA2C02BFE3012901E(unk_0xC1A5EC5C986B98AD(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_150(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_132(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_136(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_154();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_149(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_136(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (!unk_0xB5297226BE0AD444(unk_0x93E99A2DBCBA9CFA()))
		{
			unk_0x8B438725D591ED78(0, 140, 1);
			unk_0x8B438725D591ED78(0, 80, 1);
			if (unk_0xA2C9DE6085F5645B(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_150(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_136(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x8B438725D591ED78(0, 80, 1);
		if (unk_0xD487F57C937BE625())
		{
			if (unk_0xA2C9DE6085F5645B(0, 80))
			{
				unk_0xEF54B7007CB2210B(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_151(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_136(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (!unk_0xB5297226BE0AD444(unk_0x93E99A2DBCBA9CFA()))
		{
			unk_0x8B438725D591ED78(0, 140, 1);
			unk_0x8B438725D591ED78(0, 80, 1);
			if (unk_0x992AACDC3C066F55(0, 80) && unk_0xA5E11AF0A2B928C1() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_152(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_136(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x8B438725D591ED78(0, 80, 1);
		if (unk_0xD487F57C937BE625())
		{
			if (unk_0x992AACDC3C066F55(0, 80) && unk_0xA5E11AF0A2B928C1() > Global_116)
			{
				unk_0xEF54B7007CB2210B(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_153(int iParam0)
{
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if (unk_0xA6B591D40DE982B5(iParam0))
		{
			if (unk_0xFBD273FDBCF0C5BD(unk_0x4DFB7A1A6909D574(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x71904BD37B848CAF(iParam0))
		{
			if (!unk_0x66599E73DBA5A850(unk_0x9C8D7679C15E75FF(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x4E7A9806173C3AD1(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_154()
{
	unk_0xECDAB41968FF21A8(&Global_8254, 4);
}

void func_155(var uParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		func_412(uParam0);
	}
	if (!unk_0xCE4AAA035282336C(uParam0->f_8))
	{
		uParam0->f_8 = func_156(*uParam1, 0, 0);
	}
	if (!unk_0xB71C73D0269747D5(sParam2))
	{
		unk_0x4049FDC177C92D4B(uParam0->f_8, sParam2);
	}
}

int func_156(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7DE17ACDD8BA2642(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x53B496178AE44636(iParam0);
	if (unk_0xA6B591D40DE982B5(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_124(unk_0xA26A9A07F761D8F8(), 1f, 1f));
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
		unk_0x225EB85DBC38E707(uVar0, func_124(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
		unk_0x3BCF1F6A3573A1DF(uVar0, bParam1);
	}
	else if (unk_0x4E7A9806173C3AD1(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_124(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_157(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x055111B11E6624FD(uParam0->f_3, 0))
	{
		unk_0xC5B2830898581862(uParam0->f_3, 0);
		unk_0x5CE354E3C73D2002(uParam0->f_3);
		unk_0x474AA9EF29305EA8(uParam0->f_3, 3, 0);
		unk_0x7FE5E05BE63F6CB8(uParam0->f_3, 17, 1);
		unk_0x909F139DC199D8E0(uParam0->f_3);
		if ((func_332(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_158(uParam0->f_29)) && !bParam2)
		{
			func_164(uParam0);
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

int func_158(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_159(var uParam0)
{
	if (func_162(uParam0))
	{
		if (func_14(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_13(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_160(var uParam0)
{
	func_161(uParam0, 0f);
}

void func_161(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_13(BitTest(*uParam0, 4)) - fParam1);
	unk_0xECDAB41968FF21A8(uParam0, 1);
	unk_0x061B1200C95204CB(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_162(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_163(var uParam0, int iParam1)
{
	if (!unk_0x66599E73DBA5A850(iParam1))
	{
		if (!unk_0xEAEF747543427AC5(uParam0, iParam1, 100f, 100f, 50f, 0, 1, 0))
		{
			if (!unk_0x67670574D396B9A8(unk_0x30BE8A934C020461(iParam1, 1), 15f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_164(var uParam0)
{
	var uVar0;
	
	if (!unk_0x055111B11E6624FD(uParam0->f_3, 0))
	{
		if (func_39(func_40(), uParam0->f_29, 0))
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

int func_165(var uParam0, bool bParam1)
{
	if (!unk_0x055111B11E6624FD(uParam0->f_3, 0))
	{
		if (func_174(uParam0) && func_170(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_169(uParam0, 2097152))
				{
					func_166(uParam0);
				}
			}
			else
			{
				func_166(uParam0);
			}
		}
		else if (!func_174(uParam0))
		{
			if (bParam1)
			{
				if (func_169(uParam0, 2097152))
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

void func_166(var uParam0)
{
	struct<3> Var0;
	
	if (func_158(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_167(uParam0, Var0);
}

void func_167(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (!unk_0x055111B11E6624FD(uParam0->f_3, 0) && unk_0x44A6C9475C859B45(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { unk_0x7394CB479CCA24AF(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0x7394CB479CCA24AF(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_168(uParam0->f_3, uParam0->f_4) == 0)
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

int func_168(int iParam0, int iParam1)
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

bool func_169(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_223(uParam0->f_81, iParam1) && !func_226());
	}
	return func_226();
}

int func_170(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (unk_0xE0D346789C5160EB(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_43(1))
			{
				func_41(0);
			}
			if (func_32())
			{
				func_173();
				return 1;
			}
			else if (func_171(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
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

int func_171(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_172(iParam0);
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

void func_172(int iParam0)
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

void func_173()
{
	if (unk_0xF56A91A191EDA1FC(unk_0x93E99A2DBCBA9CFA(), 0))
	{
		unk_0x693E3DB45F359B4D(unk_0x93E99A2DBCBA9CFA(), 0);
	}
}

int func_174(var uParam0)
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

void func_175(var uParam0)
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
	if (!func_223(uParam0->f_55, 1))
	{
		func_224(&(uParam0->f_55), 1);
	}
}

void func_176(var uParam0)
{
	func_178();
	unk_0x8581263F2F024518();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_232(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_232(uParam0, 103, 1, 0, 0);
		}
		func_177(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_232(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_232(uParam0, 102, 1, 0, 0);
	}
	func_302(uParam0, 16, 4f, 0);
}

void func_177(int iParam0)
{
	Global_112358.f_221 = iParam0;
}

void func_178()
{
	Global_20591 = 0;
	func_179();
}

void func_179()
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

void func_180(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_181(fVar0);
	iLocal_57[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_57[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_50(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_50(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_181(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_182(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0xECDAB41968FF21A8(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

void func_183(var uParam0, int iParam1, bool bParam2)
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

void func_184()
{
	Global_20591 = 0;
	func_119();
}

int func_185(var uParam0, int iParam1, float fParam2)
{
	if ((((unk_0x35DF833D93BCC488() && !unk_0x6C9BA681FB2251B6()) && !unk_0x984CA71F26DF483C()) && !unk_0x72474BA05A104E1E()) && !uParam0->f_142)
	{
		if (func_206(uParam0))
		{
			func_205(uParam0, &(uParam0->f_43));
			func_203(uParam0);
			func_198(uParam0);
			func_192(uParam0, fParam2, 1117782016);
			func_191(uParam0);
			func_189(uParam0);
			if ((unk_0xF2DB717A73826179(func_408(uParam0, 7)) % 5) == 0 && !iLocal_93)
			{
				iLocal_93 = 1;
			}
			if ((unk_0xF2DB717A73826179(func_408(uParam0, 7)) % 5) == 2 && iLocal_93)
			{
				iLocal_93 = 0;
			}
			return func_186(uParam0, iParam1);
		}
	}
	return 0;
}

int func_186(var uParam0, int iParam1)
{
	if (func_61(uParam0) == 2)
	{
		if (unk_0x1C4E4DC1EFE24DF1(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_188(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()) < 1) && func_187(1, 1, 1)) && unk_0xD565A4F8A4D47FCB(uParam0->f_4))
		{
			return func_170(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0x1C4E4DC1EFE24DF1(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()) < 1) && func_187(1, 1, 1)) && unk_0xD565A4F8A4D47FCB(uParam0->f_4))
	{
		return func_170(uParam0, 1, iParam1);
	}
	return 0;
}

int func_187(bool bParam0, bool bParam1, bool bParam2)
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

float func_188(int iParam0, struct<3> Param1, int iParam4)
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

void func_189(var uParam0)
{
	float fVar0;
	
	if ((func_174(uParam0) && func_223(uParam0->f_81, 67108864)) && unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0)
	{
		if ((unk_0xA5E11AF0A2B928C1() - iLocal_97) >= 10000)
		{
			fVar0 = func_190(uParam0->f_17, 1);
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
		if (iLocal_96 >= 2 && !func_226())
		{
			func_232(uParam0, 136, 1, 0, 1);
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
			if (!func_174(uParam0))
			{
			}
			if (!func_223(uParam0->f_81, 67108864))
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

float func_190(struct<3> Param0, int iParam3)
{
	return func_332(unk_0xF2CFBB1105511E1A(unk_0x5DC3DCA82C806319()), Param0, iParam3);
}

void func_191(var uParam0)
{
	if (unk_0x56092233CEE9770B(unk_0x5DC3DCA82C806319()) && !func_223(uParam0->f_44, 2))
	{
		func_224(&(uParam0->f_44), 2);
	}
	else if (!unk_0x56092233CEE9770B(unk_0x5DC3DCA82C806319()) && func_223(uParam0->f_44, 2))
	{
		func_20(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_50(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_232(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + unk_0x11E019C8F43ACC8A(5f));
	}
}

void func_192(var uParam0, float fParam1, float fParam2)
{
	if (func_174(uParam0) && func_223(uParam0->f_44, 4))
	{
		if ((unk_0xF193A4B306E6BF93(uParam0->f_4) || unk_0xDC58AE028CB223BA(uParam0->f_4) < 3f) && func_197(uParam0))
		{
			if (!func_196(uParam0, 2))
			{
				func_194(uParam0, 2);
			}
			else if (func_174(uParam0))
			{
				if (func_408(uParam0, 2) > fParam1 && !func_196(uParam0, 14))
				{
					if (func_34())
					{
						func_232(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_232(uParam0, 48, 1, 0, 0);
					}
					func_302(uParam0, 2, 0, 0);
					if (func_196(uParam0, 10))
					{
						func_302(uParam0, 10, 0, 0);
					}
				}
				if (!func_196(uParam0, 3))
				{
					func_302(uParam0, 3, 0, 0);
				}
				else if (func_408(uParam0, 3) >= fParam2)
				{
					func_193(uParam0, 3, 0);
					func_333(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_196(uParam0, 2))
			{
				func_193(uParam0, 2, 0);
			}
			if (func_196(uParam0, 3))
			{
				func_193(uParam0, 3, 0);
			}
		}
	}
}

void func_193(var uParam0, int iParam1, bool bParam2)
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
			func_99(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_99(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_194(var uParam0, int iParam1)
{
	func_195(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_195(var uParam0)
{
	if (!func_162(uParam0))
	{
		func_160(uParam0);
	}
}

bool func_196(var uParam0, int iParam1)
{
	return func_162(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_197(var uParam0)
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

void func_198(var uParam0)
{
	if (!func_223(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()) >= 1)
				{
					if (func_408(uParam0, 9) > 1f)
					{
						func_202(uParam0, unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()));
						if (uParam0->f_410 != 22)
						{
							func_232(uParam0, 50, 1, 1, 0);
						}
						func_302(uParam0, 9, 0, 0);
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
				if (!func_226() && func_408(uParam0, 9) > 4f)
				{
					func_232(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_201("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_232(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0xF356C80F3E8D2812(unk_0x5DC3DCA82C806319(), func_200(uParam0)))
				{
					func_202(uParam0, unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()));
					func_50(6, 0);
				}
				if (!func_199(uParam0))
				{
					if (!unk_0x0DCB385165FDE763())
					{
						if (func_408(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_232(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()) < 1)
				{
					if (func_201("TAXI_OBJ_POL", 0, 0))
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
				if (!func_226())
				{
					if (uParam0->f_410 != 22)
					{
						func_232(uParam0, 53, 1, 0, 1);
					}
					func_50(7, func_200(uParam0));
					func_202(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_226())
				{
					func_193(uParam0, 9, 0);
					func_302(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_199(var uParam0)
{
	return uParam0->f_110;
}

int func_200(var uParam0)
{
	return uParam0->f_106;
}

bool func_201(char* sParam0, int iParam1, int iParam2)
{
	unk_0xEB16059D3EDC926B(sParam0);
	if (iParam1 == 1)
	{
		unk_0x48849374B34BB7B9(iParam2);
	}
	return unk_0xC44AC9C43C91326C();
}

void func_202(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_203(var uParam0)
{
	if (func_222(uParam0))
	{
		func_204(uParam0);
	}
}

void func_204(var uParam0)
{
	if (unk_0x063237C0B49D75C9() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0xA0674C2A551A1A0B();
			func_193(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_408(uParam0, 20) > 3f)
				{
					func_232(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_223(uParam0->f_81, 262144) || !func_223(uParam0->f_81, 1048576))
				{
					if (func_408(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_232(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_223(uParam0->f_82, 67108864))
				{
					if (func_408(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_232(uParam0, 85, 1, 0, 0);
						func_193(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_408(uParam0, 20) > 8f)
				{
					func_232(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_223(uParam0->f_81, 262144) || func_223(uParam0->f_82, 67108864))
			{
				if (!func_196(uParam0, 22))
				{
					func_194(uParam0, 22);
				}
			}
			if (func_196(uParam0, 22) && func_408(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_223(uParam0->f_81, 1048576))
					{
						func_232(uParam0, 84, 1, 0, 0);
						func_193(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_223(uParam0->f_82, 134217728))
					{
						func_232(uParam0, 85, 1, 0, 0);
						func_193(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

void func_205(var uParam0, var uParam1)
{
	unk_0x18CBFAE0D9968DCD(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_206(var uParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (!unk_0x66599E73DBA5A850(uParam0->f_3))
		{
			if (!unk_0xE0D346789C5160EB(uParam0->f_3, uParam0->f_4, 1) && !unk_0x5CD470B5BDDAC029(uParam0->f_3))
			{
				func_333(uParam0, "Passenger left car.", 9);
			}
			else if (func_218(uParam0))
			{
				if (func_201("TAXI_OBJ_PICKUP", 0, 0))
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
				func_207(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_207(var uParam0, bool bParam1)
{
	func_217(uParam0, uParam0->f_3);
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (!unk_0xE0D346789C5160EB(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_196(uParam0, 14))
			{
				if (func_226())
				{
					func_216(1);
				}
				func_215(uParam0, 11, 1);
				func_210(uParam0, 1);
				func_302(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_174(uParam0))
				{
					if ((unk_0xA5E11AF0A2B928C1() % 1000) < 50)
					{
					}
					if (unk_0x3C3D6D026CF7F51B(uParam0->f_2, 0))
					{
						if (func_408(uParam0, 15) > 5f)
						{
							func_302(uParam0, 15, 0f, 1);
						}
					}
					if (func_408(uParam0, 14) > 20f)
					{
						func_333(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_408(uParam0, 14) > 20f)
				{
					if (func_208(uParam0->f_4, 1) > 40f)
					{
						func_333(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_333(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_208(int iParam0, int iParam1)
{
	return func_209(unk_0xF2CFBB1105511E1A(unk_0x5DC3DCA82C806319()), iParam0, iParam1);
}

float func_209(int iParam0, int iParam1, int iParam2)
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

void func_210(var uParam0, bool bParam1)
{
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xCE4AAA035282336C(uParam0->f_8))
			{
				unk_0x5E3A54CF3E9DF9FC(uParam0->f_8, 0);
				unk_0xBD91E7D4B770F97E(uParam0->f_8, 0);
				func_214(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xCE4AAA035282336C(uParam0->f_9))
			{
				unk_0x5E3A54CF3E9DF9FC(uParam0->f_9, 0);
				unk_0xBD91E7D4B770F97E(uParam0->f_9, 0);
				unk_0x8581263F2F024518();
				if (func_174(uParam0))
				{
					func_232(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_214(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_211(uParam0, 0, 0);
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

void func_211(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_412(uParam0);
	}
	if (!unk_0xCE4AAA035282336C(uParam0->f_10))
	{
		uParam0->f_10 = func_156(uParam0->f_4, 1, 0);
		unk_0x4049FDC177C92D4B(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0xBD91E7D4B770F97E(uParam0->f_10, 1);
		func_212(uParam0);
		if (bParam2)
		{
			unk_0x8581263F2F024518();
			func_232(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_212(var uParam0)
{
	func_302(uParam0, 14, 0, 0);
	func_213();
}

void func_213()
{
	int iVar0;
	
	iVar0 = unk_0xE475C458F52F1781();
	if (unk_0xFBD273FDBCF0C5BD(iVar0, 0))
	{
		unk_0x03AC3DF6C3FAD811(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_214(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_223(*uParam1, iParam2))
	{
		unk_0x8581263F2F024518();
		func_232(uParam0, iParam3, 1, 0, 0);
		func_224(uParam1, iParam2);
	}
}

void func_215(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_216(int iParam0)
{
	Global_22736 = iParam0;
}

void func_217(var uParam0, int iParam1)
{
	if (unk_0x7DE17ACDD8BA2642(iParam1))
	{
		if (!unk_0x66599E73DBA5A850(iParam1))
		{
			if (unk_0xBA9A13B3E8BC6817(unk_0x93E99A2DBCBA9CFA()))
			{
				if ((unk_0x98A7DAEA81E18C06(iParam1, joaat("weapon_stungun"), 0) || unk_0x98A7DAEA81E18C06(iParam1, 0, 2)) || unk_0x98A7DAEA81E18C06(iParam1, 0, 1))
				{
					func_333(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0x617AEFB7754C6AA9(unk_0x93E99A2DBCBA9CFA());
			}
		}
	}
}

int func_218(var uParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (unk_0xA66E176E5772E965(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_196(uParam0, 14))
			{
				func_219(uParam0);
			}
			func_210(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_219(var uParam0)
{
	func_193(uParam0, 14, 0);
	func_193(uParam0, 15, 0);
	func_221();
	if (func_220())
	{
		func_216(0);
	}
}

int func_220()
{
	if (Global_22736 == 1)
	{
		return 1;
	}
	return 0;
}

void func_221()
{
	var uVar0;
	
	uVar0 = unk_0xE475C458F52F1781();
	if (unk_0xFBD273FDBCF0C5BD(uVar0, 0))
	{
		unk_0x03AC3DF6C3FAD811(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

bool func_222(var uParam0)
{
	return uParam0->f_120;
}

bool func_223(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_224(var uParam0, int iParam1)
{
	func_225(uParam0, iParam1);
}

void func_225(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_226()
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
	{
		return 1;
	}
	return 0;
}

int func_227(var uParam0)
{
	return uParam0->f_416;
}

void func_228()
{
	func_224(&(Local_409.f_55), 2);
	func_224(&(Local_409.f_55), 8);
	func_224(&(Local_409.f_55), 32);
	func_224(&(Local_409.f_55), 128);
	func_224(&(Local_409.f_55), 256);
	func_224(&(Local_409.f_55), 512);
	func_224(&(Local_409.f_55), 1024);
	func_224(&(Local_409.f_55), 2048);
	func_224(&(Local_409.f_55), 1073741824);
	func_224(&(Local_409.f_55), 8192);
	func_224(&(Local_409.f_55), 16384);
	func_224(&(Local_409.f_55), 32768);
	func_224(&(Local_409.f_55), 131072);
	func_224(&(Local_409.f_55), 262144);
	func_224(&(Local_409.f_55), 524288);
	func_224(&(Local_409.f_55), 1048576);
	func_224(&(Local_409.f_55), 4194304);
	func_224(&(Local_409.f_100), 64);
	func_224(&(Local_409.f_100), 2048);
	func_224(&(Local_409.f_100), 128);
	func_224(&(Local_409.f_100), 32);
	func_224(&(Local_409.f_100), 256);
	func_224(&(Local_409.f_100), 8);
	func_224(&(Local_409.f_100), 1);
	func_224(&(Local_409.f_100), 8192);
	func_224(&(Local_409.f_100), 2);
	func_224(&(Local_409.f_100), 32768);
	func_224(&uLocal_937, 2);
	func_194(&Local_409, 7);
}

void func_229(var uParam0)
{
	func_230(uParam0, 1000);
	if (!unk_0x055111B11E6624FD(uParam0->f_3, 0) && !unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x35DD50D05C962B6A(uParam0->f_3);
		unk_0x06A2A5F6A6959BE7(uParam0->f_3, unk_0xC1A5EC5C986B98AD(), 0);
	}
	func_184();
	func_219(uParam0);
}

void func_230(var uParam0, int iParam1)
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

void func_231(var uParam0)
{
	unk_0x617AEFB7754C6AA9(unk_0x93E99A2DBCBA9CFA());
	unk_0xE333240A90F2FF3C(unk_0x5DC3DCA82C806319(), 1, 0);
	func_230(uParam0, 1000);
}

void func_232(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_302(uParam0, 16, 4f, 0);
		if (func_233(uParam0))
		{
			func_48();
		}
	}
	func_265(uParam0, iParam2, bParam3);
}

int func_233(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_226())
	{
		Var6 = { func_235() };
		if (!unk_0x2AC37494BBF1DB16(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0x4310A0DB886F9FED(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_234(&Var0);
			if (unk_0x4310A0DB886F9FED(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_234(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_235()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21725 == 4)
	{
		return Global_21344;
	}
	return Var0;
}

int func_236(var uParam0)
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

int func_237(var uParam0, bool bParam1, float fParam2)
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
			func_207(uParam0, 1);
			if (func_32())
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
			func_263(uParam0);
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
			if (func_196(uParam0, 14))
			{
				func_219(uParam0);
				func_210(uParam0, 0);
			}
			if (func_196(uParam0, 9))
			{
				func_193(uParam0, 9, 0);
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
				if (uParam0->f_141 && func_262(uParam0, uParam0->f_3) > 300f)
				{
					func_333(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0xF5F493B789EA063E(uParam0->f_3, joaat("script_task_perform_sequence")) != 1 || ((func_209(unk_0xC1A5EC5C986B98AD(), uParam0->f_3, 1) < 20f && func_188(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_188(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_259(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_258(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_257(uParam0->f_4, uParam0->f_3);
								iVar0 = func_256(uParam0, &iVar1);
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
							if (!func_197(uParam0))
							{
								unk_0x909F139DC199D8E0(uParam0->f_3);
							}
							else if (((unk_0xF5F493B789EA063E(uParam0->f_3, joaat("script_task_perform_sequence")) != 1 && unk_0xF5F493B789EA063E(uParam0->f_3, joaat("script_task_perform_sequence")) != 0) && unk_0xF5F493B789EA063E(uParam0->f_3, joaat("script_task_perform_sequence")) != 7) && func_262(uParam0, uParam0->f_3) > 8f)
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
							if (func_209(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_255(uParam0, 1))
								{
									unk_0x35DD50D05C962B6A(uParam0->f_3);
									func_333(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_254(uParam0->f_4))
								{
									unk_0x35DD50D05C962B6A(uParam0->f_3);
									func_333(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_252(uParam0);
						if (func_262(uParam0, uParam0->f_3) < fVar4 || func_32())
						{
							if (unk_0xE0D346789C5160EB(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_239(uParam0))
								{
									func_238(uParam0);
									iLocal_89 = unk_0xA5E11AF0A2B928C1();
									unk_0x598D91BBD045C1F3(uParam0->f_3, 26, 1);
									func_193(uParam0, 5, 0);
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

void func_238(var uParam0)
{
	if (unk_0xCE4AAA035282336C(uParam0->f_8))
	{
		unk_0xBD91E7D4B770F97E(uParam0->f_8, 0);
		unk_0x45533C09A6C9B409(&(uParam0->f_8));
	}
}

int func_239(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_251("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0x055111B11E6624FD(uParam0->f_3, 0) && !unk_0x055111B11E6624FD(uParam0->f_4, 0))
	{
		func_250();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_248(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_170(uParam0, 0, 1084227584) && func_187(1, 1, 1))
			{
				if (func_255(uParam0, 1))
				{
					iLocal_88 = unk_0xA5E11AF0A2B928C1();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_86 = 1;
				}
				else
				{
					func_333(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_257(uParam0->f_4, uParam0->f_3);
				iVar9 = func_256(uParam0, &iVar10);
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
			iVar12 = func_247(&(uParam0->f_409), unk_0x7394CB479CCA24AF(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0x7394CB479CCA24AF(uParam0->f_4, Var0), 1);
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
				func_246(0, 0, 1);
				unk_0x6FCA8E220FB1053D(unk_0x30BE8A934C020461(uParam0->f_4, 1), 3f, 0);
				unk_0x2117C3CCFF2D957A(unk_0x30BE8A934C020461(uParam0->f_4, 1), 25f, 0);
				unk_0xCD3C8E1022864F65(1);
				unk_0x8581263F2F024518();
				func_178();
				func_265(uParam0, 0, 0);
				Var13 = { unk_0x7394CB479CCA24AF(uParam0->f_4, Var6) };
				unk_0xC2E3C377D893C17A(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0x692C3FDAD7DB53CC(uParam0->f_3, func_244(uParam0));
				func_243(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
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
			func_251("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
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
					unk_0xC66046DE94E06CAC(uParam0->f_4, func_242(uParam0->f_7), 1);
				}
				unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
				unk_0x42B9FA814615C4F9(*uParam0, 0);
				unk_0x42B9FA814615C4F9(uParam0->f_1, 0);
				unk_0xAABD7B0753C5C286(0);
				unk_0xEAB390443C680F72(0, 1065353216);
				unk_0x78DD793477D04C42(800);
				unk_0xCD3C8E1022864F65(1);
				unk_0x8581263F2F024518();
				func_178();
				func_265(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0x35DF833D93BCC488() && !unk_0x6C9BA681FB2251B6())
			{
				func_240(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
			unk_0x42B9FA814615C4F9(*uParam0, 0);
			unk_0x42B9FA814615C4F9(uParam0->f_1, 0);
			unk_0xAABD7B0753C5C286(0);
			unk_0xEAB390443C680F72(0, 1065353216);
			func_240(1, 1, 1);
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

void func_240(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xE333240A90F2FF3C(unk_0x5DC3DCA82C806319(), 1, 0);
	}
	unk_0xC3578D74003B8E01(1);
	func_22(0, 1, iParam2, 0, 0, 0, 0);
	if (bParam1)
	{
		unk_0x61F7D56FFAFBF706(1);
		unk_0xB1A691274215E4CE(1);
	}
	func_241(23, 0);
}

void func_241(bool bParam0, bool bParam1)
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

int func_242(int iParam0)
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

void func_243(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0xF57C1326FD40C8A7(*uParam0))
	{
		*uParam0 = unk_0xD5B705094825AC04(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

float func_244(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_40() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0x7394CB479CCA24AF(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0x7394CB479CCA24AF(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_245(unk_0x30BE8A934C020461(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_245(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x06A2A02CDC68090B((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_246(int iParam0, int iParam1, int iParam2)
{
	unk_0xE333240A90F2FF3C(unk_0x5DC3DCA82C806319(), 0, iParam0);
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		unk_0x636EFA4C5BC401A8(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 15f);
	}
	unk_0xC3578D74003B8E01(iParam1);
	func_41(0);
	func_22(1, 1, iParam2, 0, 0, 0, 0);
	unk_0x61F7D56FFAFBF706(0);
	unk_0xB1A691274215E4CE(0);
	func_241(23, 1);
}

int func_247(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
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

int func_248(int iParam0)
{
	if (func_249() && unk_0xA5E11AF0A2B928C1() >= iParam0 + 1000)
	{
		unk_0x6D5ACBBD4CE34249(500);
		while (!unk_0x72474BA05A104E1E())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_41(0);
		func_184();
		return 1;
	}
	return 0;
}

int func_249()
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

void func_250()
{
	if (func_34())
	{
		unk_0x031879EF9A711F74("appInternet");
	}
	if (func_33())
	{
		unk_0x031879EF9A711F74("appCamera");
	}
	if (func_43(1))
	{
		func_41(0);
	}
}

void func_251(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0xA5E11AF0A2B928C1() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0xA5E11AF0A2B928C1();
}

void func_252(var uParam0)
{
	var uVar0;
	
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (!unk_0x66599E73DBA5A850(uParam0->f_3))
		{
			if (func_208(uParam0->f_3, 1) > 30f || func_253(uParam0))
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
					func_333(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_253(var uParam0)
{
	if ((unk_0xDC58AE028CB223BA(uParam0->f_4) > 3f && func_408(uParam0, 5) > 15f) || unk_0x71E7779DA475F63F(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_254(int iParam0)
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

int func_255(var uParam0, bool bParam1)
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

int func_256(var uParam0, var uParam1)
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

int func_257(int iParam0, int iParam1)
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

int func_258(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x055111B11E6624FD(uParam0->f_3, 0))
	{
		if (!unk_0xDB08595445CDE2FF(uParam0->f_3) && func_208(uParam0->f_3, 1) < fParam2)
		{
			if (!func_196(uParam0, 5))
			{
				func_302(uParam0, 5, 0, 0);
			}
		}
		else if (func_196(uParam0, 5))
		{
			func_193(uParam0, 5, 0);
		}
		if (((func_408(uParam0, 5) > IntToFloat(iParam1) && unk_0xDC58AE028CB223BA(uParam0->f_4) < fParam4) && !unk_0xDB08595445CDE2FF(uParam0->f_3)) || func_208(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_259(var uParam0, float fParam1)
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
			if ((func_209(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x2655A8EC638E4FD1((Var0.f_2 - Var3.f_2)) < 5f)
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
				if (!func_223(uParam0->f_44, 128))
				{
					func_232(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_260(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
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

void func_260(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0xB7C28610A558761B(uParam0, sParam1, uParam2, func_261(iParam3), 0);
}

int func_261(int iParam0)
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

float func_262(var uParam0, int iParam1)
{
	if (!unk_0x055111B11E6624FD(iParam1, 0))
	{
		if (func_197(uParam0))
		{
			return func_209(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_263(var uParam0)
{
	func_217(uParam0, uParam0->f_3);
	if (func_197(uParam0))
	{
		if (func_196(uParam0, 14))
		{
			func_219(uParam0);
			if (unk_0xCE4AAA035282336C(uParam0->f_10))
			{
				unk_0x45533C09A6C9B409(&(uParam0->f_10));
			}
		}
	}
	if (!func_196(uParam0, 9))
	{
		if (unk_0xCE4AAA035282336C(uParam0->f_8))
		{
			unk_0x5E3A54CF3E9DF9FC(uParam0->f_8, 0);
			unk_0xBD91E7D4B770F97E(uParam0->f_8, 0);
		}
		func_302(uParam0, 9, 0, 0);
		func_264("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_264(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x7FC9F66A5DE18E09(sParam0);
	unk_0xAC8CD22C06543F95(iParam1, 1);
}

void func_265(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_48();
		func_302(uParam0, 16, 4f, 0);
		unk_0x8581263F2F024518();
	}
}

int func_266(var uParam0, int iParam1)
{
	if (!unk_0x578F9DB3098790E9(2))
	{
		return 0;
	}
	func_270(12);
	if (func_223(uParam0->f_44, 8))
	{
		if (!func_223(uParam0->f_44, 128))
		{
			if (unk_0xA6AA485513271FDF(unk_0xC1A5EC5C986B98AD()) && !func_223(uParam0->f_44, 256))
			{
				func_224(&(uParam0->f_44), 256);
			}
			if (func_223(uParam0->f_44, 256) && unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				func_232(uParam0, 135, 1, 0, 1);
				func_224(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_269(uParam0, iParam1))
	{
		if (func_208(uParam0->f_3, 1) < 35f)
		{
			if (!func_223(uParam0->f_44, 8))
			{
				unk_0x06A2A5F6A6959BE7(uParam0->f_3, unk_0xC1A5EC5C986B98AD(), 0);
				func_232(uParam0, 133, 1, 0, 1);
				func_224(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x66599E73DBA5A850(uParam0->f_3) || unk_0xC78375EA6037A7DB(uParam0->f_3)) || func_208(uParam0->f_3, 1) > 400f)
		{
			func_333(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x95DC39736F6748E3(uParam0->f_2, 0);
		unk_0x5BC68FEFF4902C2B(uParam0->f_4, 1);
		if (unk_0xA66E176E5772E965(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0x609892518777E215(uParam0->f_4);
			func_267(uParam0);
			func_50(2, 0);
			bLocal_94 = true;
			func_195(&uLocal_90);
			return 1;
		}
		else
		{
			func_333(uParam0, "No Taxi", 21);
			func_134("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_267(var uParam0)
{
	if (!unk_0x055111B11E6624FD(uParam0->f_4, 0))
	{
		if (func_268())
		{
		}
	}
}

int func_268()
{
	if (BitTest(unk_0x15A88CFAAFFC6C4B(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_269(var uParam0, int iParam1)
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
				bVar2 = func_254(iVar0);
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
					if (!func_223(uParam0->f_44, 64))
					{
						if (unk_0x578F9DB3098790E9(2))
						{
							func_134("TX_VIP_DMGD", -1);
							if (func_126("TX_VIP_DMGD"))
							{
								func_224(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_223(uParam0->f_44, 32))
					{
						if (unk_0x578F9DB3098790E9(2))
						{
							func_134("TX_VIP_CAR", -1);
							if (func_126("TX_VIP_CAR"))
							{
								func_224(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_223(uParam0->f_44, 16))
					{
						if (unk_0x578F9DB3098790E9(2))
						{
							func_134("TX_VIP_SMALL", -1);
							if (func_126("TX_VIP_SMALL"))
							{
								func_224(&(uParam0->f_44), 16);
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
			func_20(&(uParam0->f_44), 16);
			func_20(&(uParam0->f_44), 64);
			func_20(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

void func_270(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xCCE9BCDAB8B7FAED() || func_272())
	{
		uVar0 = iParam0;
		unk_0x989939160154E37F(8, &uVar0, 1, 1);
	}
	else if (unk_0x674D69D3896862C7() || func_271())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x98F31DBBB3410994(8, &cVar1);
	}
}

var func_271()
{
	return (unk_0x01689609224A6C92() || unk_0xEE17703CF2C2875A());
}

var func_272()
{
	return (unk_0x8CCF8DC8E92BDA94() || unk_0x14F62099DEBAEA33());
}

void func_273(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_21(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_274()
{
	Local_343.f_0 = 0;
	func_291(38951, 38926, 1);
	func_291(38687, 38664, 1);
	func_291(38602, 38577, 1);
	func_291(38505, 38481, 1);
	func_291(38371, 38350, 1);
	func_291(38297, 38272, 1);
	func_291(38130, 38107, 1);
}

int func_275(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_333(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_276(var uParam0)
{
	if (unk_0x7DE17ACDD8BA2642(uParam0->f_4))
	{
		if (func_278(uParam0->f_4))
		{
			func_277(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_277(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_278(int iParam0)
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

int func_279(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_333(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_280(var uParam0)
{
	if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0)
	{
		if (func_281(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_281(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_282(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_277(uParam0, 11);
	return 1;
}

int func_283(var uParam0)
{
	if (unk_0x7DE17ACDD8BA2642(uParam0->f_4))
	{
		if (unk_0x1589BC95A4C50F21(uParam0->f_4) && !unk_0xD565A4F8A4D47FCB(uParam0->f_4))
		{
			if (!func_196(uParam0, 25))
			{
				func_302(uParam0, 25, 0, 0);
			}
			else if (func_408(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_196(uParam0, 25))
		{
			func_193(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_284(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_333(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_285(var uParam0)
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

int func_286(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_333(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_287(var uParam0)
{
	if (!unk_0x055111B11E6624FD(uParam0->f_4, 0))
	{
		if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
		{
			if (unk_0xF193A4B306E6BF93(uParam0->f_4))
			{
				if (func_281(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_288(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_333(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_289(var uParam0)
{
	if (unk_0x7DE17ACDD8BA2642(uParam0->f_4))
	{
		if (func_290(uParam0->f_4))
		{
			func_277(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_290(int iParam0)
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

void func_291(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343.f_0 >= 16)
	{
		Local_343.f_0 = 16;
		return;
	}
	Local_343.f_1[Local_343.f_0 /*4*/] = 0;
	func_225(&(Local_343.f_1[Local_343.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_225(&(Local_343.f_1[Local_343.f_0 /*4*/]), 2);
	}
	Local_343.f_1[Local_343.f_0 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343.f_0 /*4*/].f_3 = iParam1;
	Local_343.f_0++;
}

int func_292(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_333(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_293(var uParam0)
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

void func_294()
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

int func_295()
{
	if (!unk_0x0CBB7C273DED26E7(iLocal_851))
	{
		func_251("TAXI_ASSETS_STREAMED - Loading A_M_M_Skater_01", &iLocal_861, 1000);
		return 0;
	}
	if (!unk_0x2BBF749E555360DC("gestures@m@standing@casual"))
	{
		func_251("TAXI_ASSETS_STREAMED - Loading gestures@m@standing@casual", &iLocal_861, 1000);
		return 0;
	}
	if (!unk_0x5FAF55B1F052A2E6(uLocal_947))
	{
		return 0;
	}
	if (!func_296(&iLocal_861, 1))
	{
		func_251("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_861, 1000);
		return 0;
	}
	return 1;
}

int func_296(int iParam0, bool bParam1)
{
	if (!unk_0x0CBB7C273DED26E7(func_19()))
	{
		func_251("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x2BBF749E555360DC("gestures@m@standing@casual"))
		{
			func_251("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x2BBF749E555360DC("oddjobs@taxi@"))
	{
		func_251("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x2BBF749E555360DC("oddjobs@towingcome_here"))
	{
		func_251("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x2BBF749E555360DC("misscommon@response"))
	{
		func_251("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x578F9DB3098790E9(2))
	{
		func_251("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_297(var uParam0, int iParam1)
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

int func_298(var uParam0)
{
	if (!unk_0x66599E73DBA5A850(uParam0->f_3))
	{
		uParam0->f_8 = func_299(uParam0->f_3, 0, 0);
		unk_0x160DACD458B12EAF(1, 0);
		unk_0xBD91E7D4B770F97E(uParam0->f_8, 1);
		unk_0x4049FDC177C92D4B(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0xEDB03CCB50D11479(uParam0->f_3, unk_0xC1A5EC5C986B98AD(), -1, 2048, 4);
	}
	return 1;
}

int func_299(int iParam0, bool bParam1, bool bParam2)
{
	return func_156(iParam0, !bParam1, bParam2);
}

int func_300(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0x7DE17ACDD8BA2642(uParam0->f_3))
	{
		func_301(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_38(uParam0->f_14, 0);
		unk_0x6FCA8E220FB1053D(uParam0->f_14, 2f, 0);
		func_36(uParam0->f_14, 0, fParam10);
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

void func_301(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0x8BC4F397AF456976(Param1, 20f, 5f, 0);
}

void func_302(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_161(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_160(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_161(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_160(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_303()
{
	unk_0x852EC2A7DE66202D(iLocal_851);
	unk_0x28818732C8F0F80E("gestures@m@standing@casual");
	func_305(1);
	uLocal_947 = func_304();
}

var func_304()
{
	return unk_0x2B4645565204EA06("MIDSIZED_MESSAGE");
}

void func_305(bool bParam0)
{
	unk_0x852EC2A7DE66202D(func_19());
	if (bParam0)
	{
		unk_0x28818732C8F0F80E("gestures@m@standing@casual");
	}
	unk_0x28818732C8F0F80E("oddjobs@taxi@");
	unk_0x28818732C8F0F80E("oddjobs@towingcome_here");
	unk_0x28818732C8F0F80E("misscommon@response");
	unk_0xA3C681843B51A4CC("TAXI", 2);
	if (!func_223(Global_113648.f_19099, 128))
	{
		func_224(&(Global_113648.f_19099), 128);
	}
}

void func_306(var uParam0, var uParam1)
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

void func_307(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_308(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0)
		{
			if (bParam2)
			{
				if (func_408(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_232(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_232(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_302(uParam0, 10, 0f, 1);
				}
			}
			else if (func_408(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_232(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_232(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_302(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_408(uParam0, 10) > 30f)
		{
			if (!func_226())
			{
				if (uParam0->f_112)
				{
					func_232(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_232(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_302(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_223(uParam0->f_100, 64))
	{
		if (!func_162(&(Local_190[5 /*10*/].f_6)))
		{
			func_195(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_159(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_331(uParam0))
			{
				if (uParam0->f_113)
				{
					func_232(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_232(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_330(uParam0, 1);
				func_328(5, uParam0);
				func_327(uParam0);
			}
		}
	}
	if (func_223(uParam0->f_100, 1))
	{
		if (!func_162(&(Local_190[0 /*10*/].f_6)))
		{
			func_195(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_159(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_326(uParam0))
			{
				func_330(uParam0, 1);
				func_328(0, uParam0);
				if (uParam0->f_113)
				{
					func_232(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_232(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_223(uParam0->f_100, 2))
	{
		if (!func_162(&(Local_190[1 /*10*/].f_6)))
		{
			func_195(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_159(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_325(uParam0))
			{
				func_330(uParam0, 1);
				func_328(1, uParam0);
				if (uParam0->f_113)
				{
					func_232(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_232(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_223(uParam0->f_100, 2048))
	{
		if (!func_162(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0x7DE17ACDD8BA2642(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x2935B4D6CE81318D(uParam0->f_4);
				func_195(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_159(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_324(uParam0))
			{
				func_330(uParam0, 1);
				func_328(8, uParam0);
				func_327(uParam0);
			}
		}
	}
	if (func_223(uParam0->f_100, 128))
	{
		if (!func_162(&(Local_190[6 /*10*/].f_6)))
		{
			func_195(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_159(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_323(uParam0))
			{
				func_330(uParam0, 1);
				func_328(6, uParam0);
				if (uParam0->f_113)
				{
					func_232(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_232(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_223(uParam0->f_100, 32))
	{
		if (!func_162(&(Local_190[4 /*10*/].f_6)))
		{
			func_195(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_159(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_322(uParam0))
			{
				func_330(uParam0, 1);
				func_328(4, uParam0);
				if (uParam0->f_113)
				{
					func_232(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_232(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_223(uParam0->f_100, 256))
	{
		if (!func_162(&(Local_190[7 /*10*/].f_6)))
		{
			func_195(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_159(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_321(uParam0))
			{
				func_328(7, uParam0);
				func_330(uParam0, 1);
				if (uParam0->f_113)
				{
					func_232(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_232(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_223(uParam0->f_100, 8))
	{
		if (!func_162(&(Local_190[9 /*10*/].f_6)))
		{
			func_195(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_159(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0x617AEFB7754C6AA9(unk_0x93E99A2DBCBA9CFA());
		}
		else if (func_159(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_320(uParam0))
			{
				func_330(uParam0, 1);
				func_328(9, uParam0);
				if (uParam0->f_113)
				{
					func_232(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_232(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_223(uParam0->f_100, 16384))
	{
		if (!func_162(&(Local_190[13 /*10*/].f_6)))
		{
			func_195(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_159(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_314(uParam0))
			{
				func_330(uParam0, 1);
				func_328(13, uParam0);
				if (uParam0->f_113)
				{
					func_232(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_232(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_223(uParam0->f_100, 32768))
	{
		if (!func_162(&(Local_190[14 /*10*/].f_6)))
		{
			func_195(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_159(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_313(uParam0))
			{
				func_330(uParam0, 1);
				func_328(14, uParam0);
				if (uParam0->f_113)
				{
					func_232(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_232(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_223(uParam0->f_100, 4096))
	{
		if (!func_162(&(Local_190[11 /*10*/].f_6)))
		{
			func_195(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_159(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_312(uParam0))
			{
				func_330(uParam0, 1);
				func_328(11, uParam0);
				if (uParam0->f_113)
				{
					func_232(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_232(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_223(uParam0->f_100, 8192))
	{
		if (!func_162(&(Local_190[12 /*10*/].f_6)))
		{
			func_195(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_159(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_311(uParam0))
			{
				func_330(uParam0, 1);
				func_328(12, uParam0);
				if (uParam0->f_113)
				{
					func_232(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_232(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_223(uParam0->f_100, 4))
	{
		if (!func_162(&(Local_190[2 /*10*/].f_6)))
		{
			func_310(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_159(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_309(uParam0))
			{
				if (uParam0->f_113)
				{
					func_232(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_232(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_330(uParam0, 1);
				func_328(2, uParam0);
				func_327(uParam0);
			}
		}
	}
}

int func_309(var uParam0)
{
	float fVar0;
	
	if (!unk_0x66599E73DBA5A850(uParam0->f_2))
	{
		if ((!unk_0x63E1343737CA1E47(uParam0->f_2) && !func_162(&(Local_190[0 /*10*/].f_3))) && !func_162(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_162(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0xDC58AE028CB223BA(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_195(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_159(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0xDC58AE028CB223BA(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_99(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_99(&(Local_190[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_310(var uParam0, float fParam1)
{
	if (!func_162(uParam0))
	{
		func_161(uParam0, fParam1);
	}
}

int func_311(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		Var0 = { unk_0x87A3566B73711330(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_162(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_162(&(Local_190[12 /*10*/].f_3)))
			{
				func_195(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_159(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_99(&(Local_190[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_190[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_312(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0) && !func_162(&(Local_190[0 /*10*/].f_3))) && !func_162(&(Local_190[1 /*10*/].f_3))) && !func_162(&(Local_190[5 /*10*/].f_3))) && !func_162(&(Local_190[9 /*10*/].f_3))) && !func_162(&(Local_190[7 /*10*/].f_3))) && !func_162(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x87A3566B73711330(uParam0->f_4, 1) };
		if (unk_0x2655A8EC638E4FD1(Var0.f_0) > 2.5f && !func_162(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_162(&(Local_190[11 /*10*/].f_3)))
			{
				func_195(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_159(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0x2655A8EC638E4FD1(uLocal_342) - unk_0x2655A8EC638E4FD1(Var0.f_0)) < 0f)
			{
				func_99(&(Local_190[11 /*10*/].f_3));
				return 1;
			}
			else if (func_159(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_99(&(Local_190[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_313(var uParam0)
{
	if (((((unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0) && !func_162(&(Local_190[0 /*10*/].f_3))) && !func_162(&(Local_190[8 /*10*/].f_3))) && !func_162(&(Local_190[5 /*10*/].f_3))) && !func_162(&(Local_190[9 /*10*/].f_3))) && !func_162(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_162(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0xC51EF944AABAC0E5(unk_0x30BE8A934C020461(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0x7DE17ACDD8BA2642(uParam0->f_5))
			{
				if ((unk_0xDC58AE028CB223BA(uParam0->f_4) > 15f && func_209(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x055111B11E6624FD(uParam0->f_5, 0) && !unk_0x9CFCDD9C62B56708(uParam0->f_5, -1, 0)))
				{
					func_195(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_159(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_209(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x07960491F4346AF3(uParam0->f_5))
		{
			func_99(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_159(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_99(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x07960491F4346AF3(uParam0->f_5))
		{
			func_99(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_314(var uParam0)
{
	if (((unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0) && !func_162(&(Local_190[9 /*10*/].f_3))) && !func_162(&(Local_190[7 /*10*/].f_3))) && !func_162(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_315(uParam0->f_4) && unk_0xDC58AE028CB223BA(uParam0->f_4) > 15f)
		{
			if (!func_162(&(Local_190[13 /*10*/].f_3)))
			{
				func_195(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_159(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_99(&(Local_190[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_190[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_315(int iParam0)
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
	Var9 = { func_319((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_318(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_316(unk_0x30BE8A934C020461(iParam0, 1), Var15, Var18, Var21);
}

int func_316(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
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
	Var0 = { func_319(Param6 - Param3) };
	Var3 = { func_319(Param9 - Param3) };
	fVar6 = func_317(Param0, Var0);
	fVar7 = func_317(Param3, Var0);
	fVar8 = func_317(Param6, Var0);
	fVar9 = func_317(Param0, Var3);
	fVar10 = func_317(Param3, Var3);
	fVar11 = func_317(Param9, Var3);
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

float func_317(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_318(struct<3> Param0, int iParam3)
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

Vector3 func_319(struct<3> Param0)
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

int func_320(var uParam0)
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

int func_321(var uParam0)
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

int func_322(var uParam0)
{
	int iVar0;
	
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		iVar0 = unk_0x7F4FC0C4AE291DE4(unk_0x93E99A2DBCBA9CFA());
		if (iVar0 == 0)
		{
			if (!func_162(&(Local_190[4 /*10*/].f_3)))
			{
				func_195(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_159(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_99(&(Local_190[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_190[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_323(var uParam0)
{
	int iVar0;
	
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		iVar0 = unk_0x1C9C75E83B7338BC(unk_0x93E99A2DBCBA9CFA());
		if (iVar0 == 0)
		{
			if (!func_162(&(Local_190[6 /*10*/].f_3)))
			{
				func_195(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_159(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_99(&(Local_190[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_190[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_324(var uParam0)
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
					func_232(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_232(uParam0, 72, 1, 0, 1);
				}
				func_99(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_325(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		Var0 = { unk_0x87A3566B73711330(uParam0->f_4, 1) };
		if (unk_0x2655A8EC638E4FD1(Var0.f_0) > 3f && !func_162(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_162(&(Local_190[1 /*10*/].f_3)))
			{
				func_195(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_159(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_99(&(Local_190[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_190[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_326(var uParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (!unk_0xD565A4F8A4D47FCB(uParam0->f_4) && unk_0xDA70CA6A0D1738D3(uParam0->f_4))
		{
			if (!func_162(&(Local_190[0 /*10*/].f_3)))
			{
				func_195(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_159(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_99(&(Local_190[0 /*10*/].f_3));
				func_160(&(Local_190[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_190[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_327(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_162(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_160(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_302(uParam0, 10, 0f, 1);
	unk_0x617AEFB7754C6AA9(unk_0x93E99A2DBCBA9CFA());
}

void func_328(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_329(uParam1, iParam0);
	func_99(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_329(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_330(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_331(var uParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
	{
		if (unk_0xDC58AE028CB223BA(uParam0->f_4) > 25f)
		{
			if (!func_162(&(Local_190[5 /*10*/].f_3)))
			{
				func_195(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_159(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_99(&(Local_190[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_190[5 /*10*/].f_3));
		}
	}
	return 0;
}

float func_332(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x055111B11E6624FD(uParam0, 0))
	{
		return -1f;
	}
	return unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(iParam0, 1), Param1, iParam4);
}

void func_333(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_184();
	func_428(2);
	Var0 = { func_337() };
	if ((!unk_0x2AC37494BBF1DB16(&Var0) && func_226()) && !unk_0x4310A0DB886F9FED(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x8581263F2F024518();
		unk_0xCD3C8E1022864F65(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0x055111B11E6624FD(uParam0->f_3, 0))
		{
			if (!func_174(uParam0))
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
		func_302(uParam0, 3, 0, 0);
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
				func_335(uParam0, &Var0);
			}
			else if (!unk_0x66599E73DBA5A850(uParam0->f_3))
			{
				func_260(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_335(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_335(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_335(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_335(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_335(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_174(uParam0))
			{
				if (unk_0xF193A4B306E6BF93(uParam0->f_4))
				{
					func_157(uParam0, 4096, 0);
				}
				else
				{
					func_157(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_335(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_335(uParam0, &Var0);
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
				func_335(uParam0, &Var0);
			}
			else if (!unk_0x66599E73DBA5A850(uParam0->f_3))
			{
				func_260(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x8FE445B0989D8C71(unk_0x93E99A2DBCBA9CFA(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_335(uParam0, &Var0);
			unk_0x8FE445B0989D8C71(unk_0x93E99A2DBCBA9CFA(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_335(uParam0, &Var0);
			unk_0x8FE445B0989D8C71(unk_0x93E99A2DBCBA9CFA(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_50(8, 0);
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
				func_335(uParam0, &Var0);
			}
			else if (!unk_0x66599E73DBA5A850(uParam0->f_3))
			{
				func_260(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_157(uParam0, 0, 0);
			func_335(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_50(8, 0);
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
				func_335(uParam0, &Var0);
			}
			else if (!unk_0x66599E73DBA5A850(uParam0->f_3))
			{
				func_260(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_335(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_50(8, 0);
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
				func_335(uParam0, &Var0);
			}
			else if (!unk_0x66599E73DBA5A850(uParam0->f_3))
			{
				func_260(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_334(&Var0);
			func_106(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_335(uParam0, &Var0);
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
					func_335(uParam0, &Var0);
				}
			}
			else if (!unk_0x66599E73DBA5A850(uParam0->f_3))
			{
				func_260(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_50(3, 0);
		}
		func_302(uParam0, 3, 0f, 1);
	}
}

void func_334(char* sParam0)
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

void func_335(var uParam0, char* sParam1)
{
	if (func_336(uParam0))
	{
		func_106(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_336(var uParam0)
{
	if (!unk_0x055111B11E6624FD(uParam0->f_3, 0))
	{
		if (func_209(unk_0xC1A5EC5C986B98AD(), uParam0->f_3, 1) < 40f && !unk_0xDB08595445CDE2FF(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_337()
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

int func_338(var uParam0)
{
	return uParam0->f_118;
}

void func_339()
{
	if (func_369(&Local_409, &Local_866))
	{
		switch (Local_866.f_27)
		{
			case 0:
				if (Local_409.f_410 == 9)
				{
					if (func_227(&Local_409) > 10 && func_227(&Local_409) != 15)
					{
						func_232(&Local_409, 15, 1, 0, 0);
						func_302(&Local_409, 10, 0, 0);
						if (bLocal_865)
						{
						}
					}
				}
				break;
			
			case 1:
				if (func_408(&Local_409, 18) > 15f)
				{
					if (func_227(&Local_409) > 10 && func_227(&Local_409) != 17)
					{
						func_224(&(Local_409.f_81), 67108864);
						func_232(&Local_409, 17, 1, 0, 0);
						if (bLocal_865)
						{
						}
					}
				}
				else if ((unk_0xA5E11AF0A2B928C1() % 1000) < 50)
				{
				}
				break;
			
			case 2:
				if (func_408(&Local_409, 18) > 30f)
				{
					if (func_227(&Local_409) > 10 && func_227(&Local_409) != 16)
					{
						func_232(&Local_409, 16, 1, 0, 0);
						if (bLocal_865)
						{
						}
					}
				}
				else if ((unk_0xA5E11AF0A2B928C1() % 1000) < 50)
				{
				}
				break;
			
			case 3:
				if (func_408(&Local_409, 18) > 30f)
				{
					if (func_227(&Local_409) > 10 && func_227(&Local_409) != 18)
					{
						func_232(&Local_409, 18, 1, 0, 0);
						if (bLocal_865)
						{
						}
					}
				}
				else if ((unk_0xA5E11AF0A2B928C1() % 1000) < 50)
				{
				}
				break;
			
			case 4:
				if (func_408(&Local_409, 18) > 30f)
				{
					if (func_227(&Local_409) > 10 && func_227(&Local_409) != 19)
					{
						func_232(&Local_409, 19, 1, 0, 0);
						if (bLocal_865)
						{
						}
					}
				}
				else if ((unk_0xA5E11AF0A2B928C1() % 1000) < 50)
				{
				}
				break;
			}
	}
	func_340(&Local_409, &uLocal_896, &Local_866, 1, bLocal_865);
}

int func_340(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	char cVar0[48];
	struct<6> Var6;
	
	func_352(uParam0, uParam1);
	if ((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109)
	{
		if (func_351(uParam1))
		{
			*uParam2 = 1;
			if (bParam4)
			{
			}
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_350(uParam0))
				{
					uParam2->f_7 = { func_349(uParam1) };
					func_106(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam4)
					{
					}
				}
				break;
			
			case 2:
				if (func_226())
				{
					uParam2->f_13 = { func_235() };
					if (unk_0x4310A0DB886F9FED(&(uParam2->f_13), &(uParam2->f_7)))
					{
						*uParam2 = 3;
						if (bParam4)
						{
						}
					}
					else
					{
						*uParam2 = 1;
					}
				}
				break;
			
			case 3:
				if (func_199(uParam0))
				{
					if (func_226())
					{
						if (unk_0x70ACD9400516DB25(unk_0xC1A5EC5C986B98AD()))
						{
							uParam2->f_29 = 1;
						}
						else
						{
							uParam2->f_29 = 0;
						}
						func_302(uParam0, 17, 0f, 1);
						if (uParam0->f_411 == 1)
						{
							uParam2->f_1 = { func_337() };
							func_48();
						}
						else
						{
							uParam2->f_1 = { func_348() };
							func_184();
						}
						if (unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()) >= 1)
						{
							*uParam2 = 0;
						}
						else if (uParam0->f_411 == 1)
						{
							*uParam2 = 4;
						}
						else
						{
							*uParam2 = 6;
						}
					}
				}
				else if (func_226())
				{
					uParam2->f_19 = { func_348() };
				}
				else
				{
					func_225(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_345(uParam1);
					func_302(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam4)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_196(uParam0, 14) && !func_226()) && !func_199(uParam0)) && func_408(uParam0, 18) > 1f)
				{
					func_302(uParam0, 18, 0, 0);
					*uParam2 = 5;
					if (bParam4)
					{
					}
				}
				break;
			
			case 5:
				if ((func_408(uParam0, 18) > 1.5f && !func_226()) && !func_199(uParam0))
				{
					StringCopy(&cVar0, uParam0->f_143, 24);
					if (func_344(uParam2, &cVar0))
					{
						func_106(&(uParam0->f_244), uParam0->f_144, &cVar0, 8, 0, 0, 0);
						func_302(uParam0, 18, 0, 0);
						*uParam2 = 7;
					}
					else
					{
						if (uParam2->f_29)
						{
							StringConCat(&cVar0, "_resB", 24);
						}
						else
						{
							StringConCat(&cVar0, "_resA", 24);
						}
						Var6 = { cVar0 };
						func_343(&(uParam2->f_25), iParam3, &cVar0, 1, 1, 0);
						func_342(&(uParam0->f_244), uParam0->f_144, &Var6, &cVar0, 8, 0, 0);
						func_302(uParam0, 18, 0, 0);
						*uParam2 = 6;
					}
				}
				break;
			
			case 6:
				if (!func_226() && func_408(uParam0, 17) > 1f)
				{
					if (func_408(uParam0, 18) > 0.5f || uParam0->f_411 == 0)
					{
						if (unk_0x4310A0DB886F9FED(&(uParam2->f_19), &(uParam2->f_1)) && uParam0->f_411 != 0)
						{
							StringCopy(&(uParam2->f_1), uParam0->f_143, 24);
							StringConCat(&(uParam2->f_1), "_end1", 24);
							func_234(&(uParam2->f_1));
							func_106(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_1), 8, 0, 0, 0);
							func_193(uParam0, 17, 1);
							*uParam2 = 7;
						}
						else if (!unk_0x2AC37494BBF1DB16(&(uParam2->f_1)))
						{
							func_341(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam4)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_226())
				{
					func_225(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_345(uParam1);
					func_302(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_341(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_120(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_107(sParam2, iParam4, 0);
}

int func_342(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_120(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_107(sParam2, iParam4, 0);
}

void func_343(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_281(*uParam0, iVar1))
		{
			func_225(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_234(sParam2);
				}
				else
				{
					func_234(sParam2);
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

int func_344(var uParam0, char* sParam1)
{
	if (unk_0x4310A0DB886F9FED(&(uParam0->f_13), "txm3_bant1") || unk_0x4310A0DB886F9FED(&(uParam0->f_13), "txm9_bant2"))
	{
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	if ((unk_0x4310A0DB886F9FED(&(uParam0->f_13), "txm6_bant3M") || unk_0x4310A0DB886F9FED(&(uParam0->f_13), "txm6_bant3T")) || unk_0x4310A0DB886F9FED(&(uParam0->f_13), "txm6_bant3F"))
	{
		func_224(&(uParam0->f_28), 1);
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	return 0;
}

void func_345(var uParam0)
{
	int iVar0;
	
	iVar0 = func_347(uParam0);
	if (iVar0 > -1)
	{
		func_20(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_20(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_224(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_346(), 24);
	}
}

var func_346()
{
	var uVar0;
	
	return uVar0;
}

int func_347(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_223((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_348()
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

struct<6> func_349(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_223((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_224(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_350(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_201("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_201("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_201("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_201("TX_OBJ_GYB_DO", 0, 0) || func_201("TAXI_OBJ_GYB", 0, 0)) || func_201("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_201("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_201("TX_OBJ_CYI_DO", 0, 0) || func_201("TAXI_OBJ_CYI_01", 0, 0)) || func_201("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_201("TX_OBJ_GYN_DO", 0, 0) || func_201("TAXI_OBJ_GYN", 0, 0)) || func_201("TAXI_OBJ_GYN_TG", 0, 0)) || func_201("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_201("TAXI_OBJ_CC1", 0, 0) || func_201("TAXI_OBJ_CC2", 0, 0)) || func_201("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_201("TAXI_OBJ_FTC1", 0, 0) || func_201("TAXI_OBJ_FTC2", 0, 0)) || func_201("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_201("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_201("TAXI_OBJ_GETRUN", 0, 0) || func_201("TAXI_OBJ_DRIVE", 0, 0)) || func_201("TAXI_OBJ_RETURN", 0, 0)) || func_201("TAXI_OBJ_POL", 0, 0)) || func_201("TAXI_OBJ_RUNOUT", 0, 0)) || func_201("TAXI_OBJ_POL", 0, 0));
}

int func_351(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_223((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_352(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_350(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_196(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_227(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_343(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_342(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_302(uParam0, 16, 0, 0);
				func_368(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_226())
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
						func_367(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_364(uParam0, Var0, func_366(uParam0, 2));
				}
				if (func_223(uParam0->f_98, 4))
				{
					func_302(uParam0, 16, 0, 0);
					func_265(uParam0, 0, 0);
				}
				func_214(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_408(uParam0, 16) > 1f)
				{
					func_216(1);
					if (uParam0->f_411 == 9)
					{
						func_264("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_264("TAXI_VIP_RETURN", 7500, 1);
					}
					func_302(uParam0, 16, 0, 0);
					func_265(uParam0, 0, 0);
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
					func_367(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0x66599E73DBA5A850(uParam0->f_3))
				{
					func_260(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_408(uParam0, 16) > func_124(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_226()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_227(uParam0))
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
				func_367(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_343(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_342(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_302(uParam0, 16, 0, 0);
				func_368(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_106(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_232(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_302(uParam0, 16, 0, 0);
				func_232(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_223(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_343(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_342(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_367(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_302(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_264("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_264("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xCE4AAA035282336C(uParam0->f_9))
					{
						uParam0->f_9 = func_363(uParam0->f_17, 1);
					}
					else if (unk_0xB77B29436394B1EB(uParam0->f_9) == 0)
					{
						unk_0x5E3A54CF3E9DF9FC(uParam0->f_9, 255);
						unk_0x385CFFE850A96C08(uParam0->f_9, uParam0->f_17);
						unk_0xBD91E7D4B770F97E(uParam0->f_9, 1);
					}
				}
				func_232(uParam0, 10, 1, 0, 0);
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
				func_234(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_367(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_260(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xCE4AAA035282336C(uParam0->f_9))
					{
						uParam0->f_9 = func_363(uParam0->f_17, 1);
					}
					else if (unk_0xB77B29436394B1EB(uParam0->f_9) == 0)
					{
						unk_0x5E3A54CF3E9DF9FC(uParam0->f_9, 255);
						unk_0x385CFFE850A96C08(uParam0->f_9, uParam0->f_17);
						unk_0xBD91E7D4B770F97E(uParam0->f_9, 1);
					}
				}
				func_232(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_362(uParam0, 33554432, Var0, "", 1, 8);
				func_302(uParam0, 16, 0, 0);
				func_232(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_226())
				{
					func_361(uParam0, 0);
					func_224(&(uParam0->f_44), 4);
					func_302(uParam0, 16, 0, 0);
					func_232(uParam0, 13, 0, 0, 0);
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
				func_234(&Var0);
				func_359(Var0, uParam1);
				func_302(uParam0, 16, 0, 0);
				func_302(uParam0, 11, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_408(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_234(&Var0);
					}
					func_359(Var0, uParam1);
					func_224(&(uParam0->f_81), 67108864);
					func_302(uParam0, 16, 0, 0);
					func_302(uParam0, 11, 0, 0);
					func_265(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_408(uParam0, 11) > uParam0->f_36)
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
							func_234(&Var0);
						}
					}
					func_359(Var0, uParam1);
					func_302(uParam0, 11, 0, 0);
					func_302(uParam0, 16, 0, 0);
					func_265(uParam0, 0, 0);
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
					func_234(&Var0);
				}
				func_359(Var0, uParam1);
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
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
				func_234(&Var0);
				func_359(Var0, uParam1);
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
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
				func_234(&Var0);
				func_359(Var0, uParam1);
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_234(&Var0);
				func_359(Var0, uParam1);
				func_302(uParam0, 16, 0, 0);
				func_302(uParam0, 11, 0, 0);
				func_265(uParam0, 0, 0);
				func_224(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				func_232(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_234(&Var0);
				func_367(uParam0, &Var0, 1, 0, 8);
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
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
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
					func_358(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_358(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_359(Var0, uParam1);
				func_368(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_302(uParam0, 16, 0, 0);
				func_302(uParam0, 6, 0f, 1);
				func_265(uParam0, 0, 0);
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
					func_358(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_358(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_359(Var0, uParam1);
				func_368(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_302(uParam0, 16, 0, 0);
				func_302(uParam0, 6, 0f, 1);
				func_265(uParam0, 0, 0);
				break;
			
			case 12:
				func_264("TAXI_OBJ_GYB", 3500, 1);
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_264("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_264("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_264("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
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
				func_367(uParam0, &Var0, 0, 0, 8);
				func_232(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_223(uParam0->f_98, 268435456))
				{
					func_264("TAXI_OBJ_CYI_01", 7500, 1);
					func_224(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_234(&Var0);
				func_359(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_234(&Var0);
				func_359(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_234(&Var0);
				func_359(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 33:
				func_264("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_223(uParam0->f_82, 8192))
				{
					if (func_408(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_234(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_359(Var0, uParam1);
						}
						else
						{
							func_367(uParam0, &Var0, 0, 0, 8);
						}
						func_224(&(uParam0->f_82), 8192);
						func_302(uParam0, 16, 0, 0);
						func_302(uParam0, 11, 0, 0);
						func_265(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_223(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_234(&Var0);
					func_367(uParam0, &Var0, 0, 0, 8);
					func_224(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_223(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_234(&Var0);
					func_367(uParam0, &Var0, 0, 0, 8);
					func_224(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				func_232(uParam0, 46, 1, 0, 0);
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
				func_234(&Var0);
				func_367(uParam0, &Var0, 0, 0, 8);
				func_232(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_265(uParam0, 0, 0);
				break;
			
			case 139:
				func_264("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_232(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x15A88CFAAFFC6C4B(0, 120);
				if (!func_223(uParam0->f_82, 268435456))
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
					func_224(&(uParam0->f_82), 268435456);
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
				func_342(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x15A88CFAAFFC6C4B(0, 100);
				if (!func_223(uParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_224(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_342(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				func_232(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_264("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_265(uParam0, 0, 0);
				func_232(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				func_232(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_226())
				{
					func_264("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_265(uParam0, 0, 0);
					func_232(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_264("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_265(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_223(uParam0->f_81, 1))
				{
					func_357(uParam0, 1, Var0, "_sick1", 8);
					func_20(&(uParam0->f_81), 2);
				}
				else if (!func_223(uParam0->f_81, 2))
				{
					func_357(uParam0, 2, Var0, "_sick2", 8);
					func_20(&(uParam0->f_81), 1);
				}
				func_368(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_223(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_223(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_224(&(uParam0->f_81), 2097152);
				func_367(uParam0, &Var0, 0, 0, 8);
				func_302(uParam0, 16, 0, 0);
				func_368(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_265(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				func_368(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				func_368(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				func_368(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_234(&Var0);
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_223(uParam0->f_81, 4))
				{
					func_357(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_223(uParam0->f_81, 8))
				{
					func_357(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_357(uParam0, 8, Var0, "_turns3", 8);
					func_20(&(uParam0->f_81), 4);
					func_20(&(uParam0->f_81), 8);
				}
				func_368(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_356(uParam0))
				{
					func_364(uParam0, Var0, func_366(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x66599E73DBA5A850(uParam0->f_3))
					{
						func_260(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_343(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_106(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_343(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_343(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_342(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_368(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_223(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_106(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_224(&(uParam0->f_83), 128);
					func_20(&(uParam0->f_83), 256);
					func_302(uParam0, 16, 0, 0);
				}
				else if (!func_223(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_106(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_224(&(uParam0->f_83), 256);
					func_20(&(uParam0->f_83), 512);
					func_302(uParam0, 16, 0, 0);
				}
				else if (!func_223(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_106(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_224(&(uParam0->f_83), 512);
					func_20(&(uParam0->f_83), 128);
					func_302(uParam0, 16, 0, 0);
				}
				func_265(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_223(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar24)
					{
						func_234(&Var0);
					}
					func_106(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_224(&(uParam0->f_83), 1);
					func_20(&(uParam0->f_83), 2);
					func_302(uParam0, 16, 0, 0);
				}
				else if (!func_223(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_234(&Var0);
					}
					func_106(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_224(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_20(&(uParam0->f_83), 4);
					}
					else
					{
						func_20(&(uParam0->f_83), 1);
					}
					func_302(uParam0, 16, 0, 0);
				}
				else if (!func_223(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_234(&Var0);
					}
					func_106(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_224(&(uParam0->f_83), 4);
					func_20(&(uParam0->f_83), 1);
					func_302(uParam0, 16, 0, 0);
				}
				func_368(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_223(uParam0->f_81, 4096))
				{
					func_362(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_223(uParam0->f_81, 8192))
				{
					func_362(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_368(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_223(uParam0->f_81, 16384))
				{
					func_362(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_223(uParam0->f_81, 32768))
				{
					func_362(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_368(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_223(uParam0->f_82, 8))
					{
						func_355(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_223(uParam0->f_82, 16))
					{
						func_355(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_223(uParam0->f_82, 32))
					{
						func_355(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_368(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_265(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_343(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_342(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_368(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_302(uParam0, 16, 0, 0);
					func_265(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_343(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_342(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_368(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_343(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_342(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_368(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_223(uParam0->f_81, 65536))
				{
					func_362(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_223(uParam0->f_81, 131072))
				{
					func_362(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_265(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_356(uParam0))
				{
					func_364(uParam0, Var0, func_366(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x66599E73DBA5A850(uParam0->f_3))
					{
						func_260(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_223(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_234(&Var0);
					func_106(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_224(&(uParam0->f_83), 8);
					func_20(&(uParam0->f_83), 16);
					func_302(uParam0, 16, 0, 0);
				}
				else if (!func_223(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_234(&Var0);
					func_106(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_224(&(uParam0->f_83), 16);
					func_20(&(uParam0->f_83), 32);
					func_302(uParam0, 16, 0, 0);
				}
				else if (!func_223(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_234(&Var0);
					func_106(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_224(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_20(&(uParam0->f_83), 64);
					}
					else
					{
						func_20(&(uParam0->f_83), 8);
					}
					func_302(uParam0, 16, 0, 0);
				}
				else if (!func_223(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_234(&Var0);
					func_106(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_224(&(uParam0->f_83), 64);
					func_20(&(uParam0->f_83), 8);
					func_302(uParam0, 16, 0, 0);
				}
				func_368(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_226())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_367(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_364(uParam0, Var0, func_366(uParam0, 65));
					func_265(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_226())
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
					func_367(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_364(uParam0, Var0, func_366(uParam0, 66));
					func_265(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_226())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_367(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_367(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_367(uParam0, &Var0, 0, 0, 8);
								func_368(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_367(uParam0, &Var0, 0, 0, 8);
								func_368(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_367(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_343(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_342(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_368(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_302(uParam0, 16, 0, 0);
								func_265(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_367(uParam0, &Var0, 0, 0, 8);
									func_302(uParam0, 16, 0, 0);
									func_302(uParam0, 11, 0, 0);
									func_265(uParam0, 0, 0);
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
									func_234(&Var0);
									func_367(uParam0, &Var0, 0, 0, 8);
									func_302(uParam0, 16, 0, 0);
									func_302(uParam0, 11, 0, 0);
									func_265(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_367(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_232(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_343(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_342(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_368(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_223(uParam0->f_82, 1))
				{
					func_355(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_223(uParam0->f_82, 2))
				{
					func_355(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_223(uParam0->f_82, 4))
				{
					func_355(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_265(uParam0, 0, 0);
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
				func_343(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_342(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0x66599E73DBA5A850(uParam0->f_3))
				{
					func_260(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_302(uParam0, 16, 0, 0);
				func_368(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_356(uParam0))
				{
					func_364(uParam0, Var0, func_366(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x66599E73DBA5A850(uParam0->f_3))
					{
						func_260(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_354(uParam0, Var0, 8);
				}
				func_368(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_223(uParam0->f_83, 1024))
				{
					func_224(&(uParam0->f_83), 1024);
					func_302(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_234(&Var0);
					func_106(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_223(uParam0->f_83, 2048))
				{
					func_224(&(uParam0->f_83), 2048);
					func_302(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_234(&Var0);
					func_106(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_223(uParam0->f_83, 4096))
				{
					func_224(&(uParam0->f_83), 4096);
					func_302(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_234(&Var0);
					func_106(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_265(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_223(uParam0->f_82, 1024))
				{
					func_355(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_20(&(uParam0->f_82), 2048);
				}
				else if (!func_223(uParam0->f_82, 2048))
				{
					func_355(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_265(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_343(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_342(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_368(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_106(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				func_232(uParam0, 52, 1, 0, 0);
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
					func_367(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0x66599E73DBA5A850(uParam0->f_3))
				{
					func_260(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_356(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_367(uParam0, &Var0, 0, 0, 8);
						func_232(uParam0, 52, 1, 0, 0);
						func_302(uParam0, 16, 0, 0);
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
						func_367(uParam0, &Var0, 0, 0, 8);
						func_302(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_343(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_342(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_302(uParam0, 16, 0, 0);
					func_265(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_368(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_367(uParam0, &Var0, 0, 0, 8);
				func_302(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0x83C5A442AAD15BAF(unk_0x5DC3DCA82C806319()) >= 1)
				{
					func_264("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_265(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_234(&Var0);
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_223(uParam0->f_81, 262144))
				{
					func_362(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_223(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_362(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_362(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_368(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_223(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_353(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_223(uParam0->f_82, 134217728))
				{
					func_353(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_368(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_342(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 100:
				func_264("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_265(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_367(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_234(&Var0);
				}
				func_224(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_367(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_234(&Var0);
				}
				func_224(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_367(uParam0, &Var0, 0, 0, 8);
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
					func_234(&Var0);
				}
				func_224(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_367(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_223(uParam0->f_82, 65536))
				{
					if (func_408(uParam0, 11) > uParam0->f_36)
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
						func_234(&Var0);
						func_359(Var0, uParam1);
						func_224(&(uParam0->f_82), 65536);
						func_302(uParam0, 16, 0, 0);
						func_302(uParam0, 11, 0, 0);
						func_265(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_223(uParam0->f_82, 131072))
				{
					if (func_408(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_234(&Var0);
						func_359(Var0, uParam1);
						func_224(&(uParam0->f_82), 131072);
						func_302(uParam0, 16, 0, 0);
						func_302(uParam0, 11, 0, 0);
						func_265(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_223(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_224(&(uParam0->f_82), 8388608);
				}
				else if (!func_223(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_224(&(uParam0->f_82), 16777216);
				}
				else if (!func_223(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_224(&(uParam0->f_82), 33554432);
				}
				func_359(Var0, uParam1);
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_343(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_234(&Var0);
					func_342(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_367(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_367(uParam0, &Var0, 0, 0, 8);
				}
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_359(Var0, uParam1);
				func_302(uParam0, 16, 0, 0);
				func_302(uParam0, 11, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_359(Var0, uParam1);
				func_302(uParam0, 16, 0, 0);
				func_302(uParam0, 11, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_359(Var0, uParam1);
				func_302(uParam0, 16, 0, 0);
				func_302(uParam0, 11, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_234(&Var0);
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_234(&Var0);
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_343(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_342(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_343(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_342(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_234(&Var0);
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_234(&Var0);
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				func_232(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_224(&(uParam0->f_81), 2097152);
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_234(&Var0);
				func_359(Var0, uParam1);
				func_224(&(uParam0->f_81), 67108864);
				func_302(uParam0, 16, 0, 0);
				func_302(uParam0, 11, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_223(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_362(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x66599E73DBA5A850(uParam0->f_3))
					{
						func_260(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_232(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_106(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_223(uParam0->f_81, 268435456))
				{
					func_362(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_232(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_264("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_265(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_223(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_362(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x66599E73DBA5A850(uParam0->f_3))
						{
							func_260(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_362(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_232(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_264("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_265(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_106(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_302(uParam0, 16, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_223(uParam0->f_81, 16777216))
				{
					func_362(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_265(uParam0, 0, 0);
				break;
			
			case 88:
				func_264("TAXI_TIEFLEE", 7500, 1);
				func_265(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_223(uParam0->f_98, 536870912))
				{
					func_264("TAXI_OBJ_CYI_1B", 7500, 1);
					func_224(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_265(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_234(&Var0);
				func_367(uParam0, &Var0, 0, 0, 8);
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
				func_367(uParam0, &Var0, 0, 0, 8);
				func_265(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_367(uParam0, &Var0, 0, 0, 8);
				func_265(uParam0, 0, 0);
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
				func_367(uParam0, &Var0, 0, 0, 8);
				func_265(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_367(uParam0, &Var0, 1, 0, 8);
				func_232(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_264("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_232(uParam0, 0, 0, 0, 0);
				func_265(uParam0, 0, 0);
				break;
			}
	}
}

void func_353(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_224(&(uParam0->f_82), iParam1);
	func_302(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_234(&Param2);
	}
	func_106(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_354(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_223(uParam0->f_82, 64))
	{
		func_224(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_223(uParam0->f_82, 128))
	{
		func_224(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x15A88CFAAFFC6C4B(1, 3), 24);
	}
	func_342(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_302(uParam0, 16, 0, 0);
}

void func_355(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_224(&(uParam0->f_82), iParam1);
	func_302(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_234(&Param2);
		}
	}
	func_106(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_356(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_357(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_224(&(uParam0->f_81), iParam1);
	func_302(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_106(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_358(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_281(*uParam0, iVar1))
		{
			func_225(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_234(sParam2);
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

void func_359(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_360(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_224(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_360(var uParam0)
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

void func_361(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_264("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_264("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_264("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_264("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_264("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_264("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_264("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_264("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_264("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_264("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_264("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_264("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_264("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_264("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_264("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_264("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_264("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_264("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_264("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_264("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_362(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_224(&(uParam0->f_81), iParam1);
	func_302(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_234(&Param2);
	}
	func_106(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

var func_363(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x7F0C74F83813841D(Param0);
	unk_0x225EB85DBC38E707(uVar0, func_124(unk_0xA26A9A07F761D8F8(), 1f, 1f));
	unk_0xBD91E7D4B770F97E(uVar0, iParam3);
	return uVar0;
}

void func_364(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_302(uParam0, 16, 0, 0);
	func_302(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0x66599E73DBA5A850(uParam0->f_3))
	{
		unk_0x0546D9B082508A41(uParam0->f_3, &cParam1, func_365(uParam0));
	}
}

char* func_365(var uParam0)
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

char* func_366(var uParam0, int iParam1)
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

int func_367(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_302(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_302(uParam0, 17, 0f, 1);
	}
	func_265(uParam0, iParam2, 0);
	return func_106(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_368(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_223(*uParam2, 2))
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
		if (func_223(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_223(*uParam2, 4))
		{
			if (!func_223(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_20(uParam2, 4096);
			}
		}
		else if (func_223(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_223(*uParam2, 512))
		{
			if (!func_223(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_20(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_223(*uParam2, 16))
		{
			if (!func_223(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_20(uParam2, 4096);
			}
		}
		else if (func_223(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_223(*uParam2, 64))
		{
			if (!func_223(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_20(uParam2, 4096);
			}
		}
		else if (func_223(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_223(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_223(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_223(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_223(*uParam2, 8192))
		{
			if (func_223(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_223(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_223(*uParam2, 16384))
		{
			if (func_223(*uParam2, 4194304))
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
		if (func_223(*uParam2, 32768))
		{
			if (func_223(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_223(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_223(*uParam2, 65536))
		{
			if (func_223(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_223(*uParam2, 131072))
		{
			if (func_223(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_223(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_223(*uParam2, 262144))
		{
			if (func_223(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_223(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_223(*uParam2, 524288))
		{
			if (func_223(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_223(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_223(*uParam2, 1048576))
		{
			if (func_223(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_223(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_223(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_223(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_223(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_223(*uParam2, 67108864))
		{
			if (func_223(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_223(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_223(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_223(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_223(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

bool func_369(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_196(uParam0, 9));
}

bool func_370(var uParam0)
{
	return uParam0->f_117;
}

void func_371(var uParam0, var uParam1, bool bParam2)
{
	if (!func_223(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0x2AC37494BBF1DB16(&(uParam0->f_124)) && func_226())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_226())
				{
					StringCopy(&(uParam0->f_124), func_346(), 24);
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

void func_372(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x7DE17ACDD8BA2642(uParam0->f_4))
		{
			if (Local_343.f_0 > 0 && !func_281(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343.f_0 - 1))
				{
					if (func_281(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_281(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_225(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0xA5E11AF0A2B928C1();
							}
						}
						else
						{
							func_21(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_281(Local_343.f_1[iVar0 /*4*/], 4) && !func_281(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_225(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_333(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_373(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_196(uParam0, 27))
	{
		func_194(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_408(uParam0, 27) > 5f)
	{
		if (func_400(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_302(uParam0, 27, 0, 0);
			func_302(uParam0, 10, 0, 0);
			func_398(uParam0, &uVar0, uParam1);
		}
		func_395(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_374(uParam0);
	}
	if ((((!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()) && (unk_0xF57C1326FD40C8A7(*uParam0) && !unk_0x2DDFF72E939527F8(*uParam0))) && (unk_0xF57C1326FD40C8A7(uParam0->f_1) && !unk_0x2DDFF72E939527F8(uParam0->f_1))) && !unk_0x70CDFE65A7D509C2()) && !func_226())
	{
		if (func_408(uParam0, 26) > 10f)
		{
			func_193(uParam0, 26, 0);
			unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
		}
	}
	else if (func_196(uParam0, 26))
	{
		func_193(uParam0, 26, 0);
	}
	return 0;
}

void func_374(var uParam0)
{
	if (!func_394(uParam0->f_429))
	{
		uParam0->f_429 = func_393();
		func_384(&(uParam0->f_429), 0, 0, unk_0x15A88CFAAFFC6C4B(4, 7), 0, 0, 0);
	}
	else if (func_375(uParam0->f_429))
	{
		func_333(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_375(int iParam0)
{
	return func_376(func_393(), iParam0);
}

int func_376(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_394(iParam1) || !func_394(iParam0))
	{
		return 1;
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_380(iParam0);
	iVar1 = func_380(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_379(iParam0);
	iVar1 = func_379(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_378(iParam0);
	iVar1 = func_378(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_377(iParam0);
	iVar1 = func_377(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_377(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_378(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_379(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_380(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_381(int iParam0)
{
	return iParam0 & 15;
}

var func_382(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_383(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_383(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_384(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_382(*uParam0);
	iVar1 = func_381(*uParam0);
	iVar2 = func_380(*uParam0);
	iVar3 = func_379(*uParam0);
	iVar4 = func_378(*uParam0);
	iVar5 = func_377(*uParam0);
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
	iVar6 = func_392(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_392(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_385(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_385(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_391(uParam0, iParam1);
	func_390(uParam0, iParam2);
	func_389(uParam0, iParam3);
	func_388(uParam0, iParam5);
	func_387(uParam0, iParam4);
	func_386(uParam0, iParam6);
}

void func_386(var uParam0, int iParam1)
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

void func_387(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_381(*uParam0);
	iVar1 = func_382(*uParam0);
	if (iParam1 < 1 || iParam1 > func_392(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_388(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_389(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_390(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_391(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_392(int iParam0, int iParam1)
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

int func_393()
{
	var uVar0;
	
	func_391(&uVar0, unk_0x731F95B6458DCF80());
	func_390(&uVar0, unk_0x77BBAAED3E25322C());
	func_389(&uVar0, unk_0x30DFE1FFD2CC7420());
	func_387(&uVar0, unk_0x8C0F17CAC308A14B());
	func_388(&uVar0, unk_0x61117764C67882B7());
	func_386(&uVar0, unk_0x367F557725B53815());
	return uVar0;
}

int func_394(int iParam0)
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
	iVar0 = func_377(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_378(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_379(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_382(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_381(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_380(iParam0);
	if (iVar5 < 1 || iVar5 > func_392(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_395(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_397()) && !func_197(uParam0)) || ((uParam0->f_411 != 9 && func_269(uParam0, 1)) && !func_197(uParam0)))
		{
			uVar0 = func_396(uParam0->f_4);
			unk_0xE1D0FB923395DF66(&uVar0);
			uParam0->f_4 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			unk_0x85BAE84748AD1A23(uParam0->f_4, 1, 0);
			func_219(uParam0);
			func_210(uParam0, 0);
		}
	}
}

var func_396(var uParam0)
{
	return uParam0;
}

int func_397()
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
					if (unk_0x091E6E360116B927(iVar0, func_19()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_398(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_399(uParam0, 0, 1))
			{
				func_333(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_399(uParam0, 0, 4))
			{
				func_333(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_399(uParam0, 0, 8))
			{
				func_333(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_399(uParam0, 1, 1))
			{
				func_333(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_399(uParam0, 0, 1))
			{
				func_333(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_223(*uParam2, 2) && func_174(uParam0))
			{
				func_333(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_399(var uParam0, int iParam1, int iParam2)
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
				func_232(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_232(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_400(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xC1A5EC5C986B98AD();
	if (!unk_0x055111B11E6624FD(iVar0, 0) && !unk_0x055111B11E6624FD(iParam0, 0))
	{
		if (!func_223(*uParam2, 1))
		{
			if (func_406(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_223(*uParam2, 2))
		{
			if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_223(*uParam2, 4))
		{
			if (func_404(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_223(*uParam2, 8))
		{
			if (func_403(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_223(*uParam2, 128);
		if (bParam4)
		{
			if (func_401(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_223(*uParam2, 16))
		{
			if (func_401(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
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

int func_401(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
	if (func_402(unk_0xC1A5EC5C986B98AD(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x48A4D45B3B4CEFFD(iParam0) && func_208(iParam0, 1) < 1.5f)
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

int func_402(int iParam0, int iParam1)
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

int func_403(int iParam0, int iParam1, var uParam2)
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

int func_404(int iParam0, int iParam1, var uParam2, bool bParam3)
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
			if (unk_0x197DD015F81B0D16(iParam0) || func_405(iVar3))
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

int func_405(int iParam0)
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
						if (func_209(unk_0xC1A5EC5C986B98AD(), iParam0, 1) < 40f)
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

int func_406(int iParam0, var uParam1)
{
	if (!unk_0x055111B11E6624FD(uParam0, 0))
	{
		if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
		{
			if (unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), iParam0) || unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iParam0))
			{
				if (unk_0xD495130AEF425591(iParam0, unk_0xC1A5EC5C986B98AD(), 90f))
				{
					if (func_208(iParam0, 1) < uParam1->f_2)
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

void func_407(var uParam0)
{
	if (!func_223(uParam0->f_98, 2))
	{
		if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
		{
			if (func_332(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x10DFA2EC4C030EB3(uParam0->f_17, 25f, 0, 0, 0, 0, 0, 0, 0);
				func_224(&(uParam0->f_98), 2);
			}
		}
	}
}

float func_408(var uParam0, int iParam1)
{
	if (!func_162(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_195(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_159(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_409()
{
	func_410(&Local_409);
	func_427();
}

void func_410(var uParam0)
{
	func_10(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_428(2);
	}
}

int func_411(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_226() && func_408(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x055111B11E6624FD(uParam0->f_3, 0))
		{
			if (unk_0xFBD273FDBCF0C5BD(uParam0->f_4, 0))
			{
				if (unk_0xE0D346789C5160EB(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_61(uParam0) == 0 || func_281(uParam0->f_85, 32))
					{
						if (!unk_0xF193A4B306E6BF93(uParam0->f_4))
						{
							func_157(uParam0, 4160, 0);
						}
						else
						{
							func_157(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_157(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_157(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_157(uParam0, 0, 0);
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

void func_412(var uParam0)
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

int func_413(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_414(int iParam0)
{
	func_416(&Local_409, iParam0);
	Local_409.f_410 = 0;
	func_415(&Local_409, 7, 14);
	Local_409.f_23 = { -492.4436f, -290.3657f, 34.486f };
	Local_409.f_33 = 202.0759f;
	Local_409.f_26 = { 856.3766f, 1288.918f, 357.7924f };
	Local_409.f_34 = 162.3f;
	Local_409.f_6 = 1f;
	Local_409.f_29 = { 810.3334f, 1172.413f, 321.8036f };
}

void func_415(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_416(var uParam0, var uParam1)
{
	func_426(1);
	func_221();
	func_7(&(uParam0->f_244));
	func_425(uParam0);
	uParam0->f_411 = uParam1;
	if (!func_223(Global_113648.f_19099, 4))
	{
		func_224(&(Global_113648.f_19099), 4);
	}
	func_420(uParam0);
	func_418(uParam0);
	unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 32, 0);
	uParam0->f_102 = (func_417(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0xA3C681843B51A4CC("TAXI", 2);
}

int func_417(int iParam0)
{
	return Global_113648.f_19099.f_39[iParam0];
}

void func_418(var uParam0)
{
	switch (func_61(uParam0))
	{
		case 0:
			func_419(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_419(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_419(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_419(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_419(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_419(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_419(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_419(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_419(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_419(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_419(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_420(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_424(uParam0, 3);
			func_423(uParam0, 14);
			break;
		
		case 1:
			func_424(uParam0, 14);
			func_423(uParam0, 8);
			break;
		
		case 2:
			func_424(uParam0, 8);
			func_423(uParam0, 7);
			break;
		
		case 3:
			func_424(uParam0, 15);
			func_423(uParam0, 6);
			break;
		
		case 4:
			func_424(uParam0, 0);
			func_423(uParam0, 3);
			break;
		
		case 5:
			func_424(uParam0, 6);
			func_423(uParam0, 7);
			break;
		
		case 6:
			func_424(uParam0, 8);
			func_423(uParam0, 15);
			break;
		
		case 7:
			func_424(uParam0, 8);
			func_423(uParam0, 14);
			break;
		
		case 8:
			func_424(uParam0, 7);
			func_423(uParam0, 15);
			break;
		
		case 9:
			func_424(uParam0, unk_0x15A88CFAAFFC6C4B(0, 17));
			iVar0 = func_422((uParam0->f_418.f_2 + unk_0x15A88CFAAFFC6C4B(1, 17)), 0, 16);
			func_423(uParam0, iVar0);
			func_421(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_421(var uParam0)
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

int func_422(int iParam0, int iParam1, int iParam2)
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

void func_423(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_424(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_425(var uParam0)
{
	uParam0->f_2 = unk_0xC1A5EC5C986B98AD();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_40() };
	uParam0->f_17 = { func_40() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_193(uParam0, 32, 0);
}

void func_426(bool bParam0)
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

void func_427()
{
	unk_0xE0A291F406691F03(iLocal_851);
	unk_0x0B34FA69ECCE3927("gestures@m@standing@casual");
	func_125(&uLocal_45, 0, 0);
	unk_0x675D9C12C73D3DE7();
}

void func_428(int iParam0)
{
	Global_112358.f_22 = iParam0;
}

