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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_55 = 0f;
	struct<3> Local_56 = { 0, 0, 0 } ;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	struct<9> Local_61 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_70 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	struct<3> Local_85 = { 0, 0, 0 } ;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	char* sLocal_102 = NULL;
	int iLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	float fLocal_106 = 0f;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
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
	bool bLocal_133 = 0;
	float fLocal_134 = 0f;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	float fLocal_143 = 0f;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	float fLocal_150 = 0f;
	int iLocal_151[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_163 = 0;
	struct<68> Local_164 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	float fLocal_253 = 0f;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	struct<3> Local_260 = { 0, 0, 0 } ;
	var uLocal_263[2] = { 0, 0 };
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	bool bLocal_273 = 0;
	bool bLocal_274 = 0;
	bool bLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	bool bLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	bool bLocal_281 = 0;
	bool bLocal_282 = 0;
	bool bLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	bool bLocal_288 = 0;
	var uLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	var uLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	int iLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	struct<3> Local_334 = { 0, 0, 0 } ;
	struct<3> Local_337 = { 0, 0, 0 } ;
	struct<3> Local_340 = { 0, 0, 0 } ;
	struct<3> Local_343 = { 0, 0, 0 } ;
	struct<3> Local_346 = { 0, 0, 0 } ;
	struct<3> Local_349 = { 0, 0, 0 } ;
	float fLocal_352 = 0f;
	float fLocal_353 = 0f;
	float fLocal_354 = 0f;
	float fLocal_355 = 0f;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	char* sLocal_358 = NULL;
	char* sLocal_359 = NULL;
	int iLocal_360 = 0;
	char* sLocal_361 = NULL;
	char* sLocal_362 = NULL;
	char* sLocal_363[3] = { NULL, NULL, NULL };
	char* sLocal_367[3] = { NULL, NULL, NULL };
	char* sLocal_371[3] = { NULL, NULL, NULL };
	char* sLocal_375[3] = { NULL, NULL, NULL };
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

void __EntryFunction__()
{
	struct<460> Var0;
	int iVar464;
	struct<4> Var465;
	struct<3> Var471;
	struct<25> Var477;
	struct<682> Var508;
	struct<532> Var1191;
	bool bVar1772;
	bool bVar1773;
	bool bVar1774;
	bool bVar1775;
	var uVar1776;
	int iVar1777;
	int iVar1778;
	int iVar1779;
	float fVar1780;
	float fVar1781;
	struct<3> Var1782;
	struct<3> Var1785;
	struct<3> Var1788;
	struct<3> Var1791;
	struct<3> Var1794;
	char* sVar1797;
	var uVar1798;
	var uVar1801;
	var uVar1804;
	var uVar1807[20];
	var uVar1828;
	int iVar1829;
	int iVar1830;
	int iVar1831;
	int iVar1832;
	int iVar1833;
	int iVar1834;
	float fVar1835;
	int iVar1836;
	
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
	iLocal_28 = joaat("prop_dart_1");
	iLocal_29 = joaat("prop_dart_2");
	iLocal_32 = joaat("prop_dart_bd_cab_01");
	fLocal_55 = 0.063f;
	Local_56 = { -0.0035f, 0f, -0.001f };
	iLocal_60 = joaat("prop_target_bull");
	Local_85 = { 987.8541f, -98.4173f, 73.8599f };
	fLocal_92 = 0.1f;
	iLocal_103 = 3;
	fLocal_106 = 80f;
	fLocal_107 = 140f;
	fLocal_108 = 180f;
	iLocal_114 = 1;
	iLocal_115 = 65;
	iLocal_116 = 49;
	iLocal_117 = 64;
	iLocal_140 = 65;
	iLocal_142 = 660;
	fLocal_147 = 0.27f;
	fLocal_148 = 0.1f;
	fLocal_149 = -120f;
	fLocal_150 = 127f;
	fLocal_253 = ((0.05f + 0.275f) - 0.01f);
	Local_260 = { 500f, 500f, 500f };
	bLocal_275 = true;
	Local_340 = { -573.1373f, 294.0269f, 78.1765f };
	Local_343 = { -574.1169f, 292.7964f, 78.1766f };
	Local_346 = { 1995.295f, 3050.084f, 46.91535f };
	Local_349 = { 1995.488f, 3047.383f, 46.91535f };
	fLocal_352 = 172.6813f;
	fLocal_353 = 274.5094f;
	fLocal_354 = 142.6717f;
	fLocal_355 = 44.8785f;
	Var0.f_1 = 2;
	Var0.f_5 = 2;
	Var0.f_5.f_1 = 3;
	Var0.f_5.f_1.f_79 = 3;
	Var0.f_164 = 3;
	Var0.f_257 = 16;
	Var0.f_422 = 2;
	Var0.f_425 = 2;
	Var0.f_429 = 2;
	Var0.f_432 = 2;
	Var0.f_437 = 2;
	Var0.f_440 = 2;
	Var0.f_443 = 2;
	Var0.f_446 = 2;
	Var0.f_449 = 2;
	Var477.f_1 = 2;
	Var477.f_1.f_1 = 7;
	Var477.f_1.f_1.f_8 = 7;
	Var508.f_3 = 8;
	Var508.f_12 = 8;
	Var508.f_21 = 4;
	Var508.f_26.f_3 = 8;
	Var508.f_26.f_12 = 8;
	Var508.f_26.f_21 = 4;
	Var508.f_72 = 3;
	Var508.f_72.f_44.f_3.f_1 = 4;
	Var508.f_72.f_113 = 2;
	Var508.f_72.f_113.f_1.f_1 = 4;
	Var508.f_72.f_113.f_1.f_66.f_1 = 4;
	Var508.f_72.f_246.f_6 = 12;
	Var508.f_72.f_246.f_187 = 3;
	Var508.f_509.f_2 = 8;
	Var508.f_509.f_2.f_1.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_681 = 2;
	Var1191.f_32 = 3;
	Var1191.f_36 = 1;
	Var1191.f_53 = 2;
	Var1191.f_57 = 13;
	Var1191.f_71 = 13;
	Var1191.f_280 = 13;
	Var1191.f_489 = 13;
	Var1191.f_503 = 13;
	Var1191.f_517 = 13;
	Var1191.f_531 = 13;
	iVar1778 = 0;
	sLocal_361 = "facials@gen_female@variations@happy";
	switch (func_506(unk_0xE2D3D51028F0428A()))
	{
		case 0:
			sLocal_362 = "facials@p_m_zero@variations@happy";
			break;
		
		case 1:
			sLocal_362 = "facials@p_m_one@variations@happy";
			break;
		
		case 2:
			sLocal_362 = "facials@p_m_two@variations@happy";
			break;
	}
	sLocal_363[0] = "mood_happy_1";
	sLocal_363[1] = "mood_happy_2";
	sLocal_363[2] = "mood_happy_3";
	sLocal_367[0] = "darts_outro_01_guy1";
	sLocal_367[1] = "darts_outro_02_guy2";
	sLocal_367[2] = "darts_outro_03_guy2";
	sLocal_371[0] = "darts_outro_01_guy2";
	sLocal_371[1] = "darts_outro_02_guy1";
	sLocal_371[2] = "darts_outro_03_guy1";
	sLocal_375[0] = "darts_outro_01_cam";
	sLocal_375[1] = "darts_outro_02_cam";
	sLocal_375[2] = "darts_outro_03_cam";
	uLocal_263[0] = unk_0xE2D3D51028F0428A();
	bLocal_278 = true;
	Var1782 = { 1992.293f, 3050.583f, 47.98973f };
	Var1785 = { -572.0406f, 294.1958f, 79.9374f };
	func_505();
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		iLocal_302 = 1;
		switch (unk_0x5853B15F78E1A265(0, 2))
		{
			case 0:
				iLocal_299 = joaat("a_f_m_salton_01");
				break;
			
			case 1:
				iLocal_299 = joaat("a_f_o_salton_01");
				break;
		}
		iLocal_297 = 10;
		unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
	}
	if (!unk_0xE5965CDF24F93A9F(ScriptParam_0.f_4))
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (iLocal_302 == 2)
			{
				ScriptParam_0 = { Var1785 };
				ScriptParam_0.f_3 = -0.09f;
			}
			else
			{
				ScriptParam_0 = { Var1782 };
				ScriptParam_0.f_3 = 57.78315f;
			}
			if (unk_0x574E2A23F0F76E35(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), 0))
			{
				ScriptParam_0.f_4 = unk_0x87A467676BDF8C35(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), 1, 0, 1);
				unk_0x5FE5DAD7C292EBE5(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), &ScriptParam_0, &Var1788, 0);
				ScriptParam_0.f_3 = Var1788.f_2;
			}
		}
	}
	else
	{
		Var1788 = { unk_0x6B62510F212526DC(ScriptParam_0.f_4, 1) };
	}
	if (!unk_0x55B23FE400FCEA6B(func_504(), 0))
	{
		func_502(iLocal_297, 1);
		if (unk_0xD5C6B5E3B93A5EDC(func_504(), 0))
		{
			unk_0xAB7639D658BBCCEE(func_504(), 0, 0);
		}
		uLocal_263[1] = func_504();
	}
	else
	{
		unk_0xBD1F51FB3FA2C6E4(1);
	}
	if (unk_0x4B34601C5C56F3EE(67))
	{
		func_493();
		func_475(&Var0, &Var508, &Var1191);
	}
	unk_0xECE811C504EF8D48(0);
	unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 0);
	func_473(1);
	iLocal_293 = func_470(func_506(uLocal_263[0]), 1);
	fVar1780 = (unk_0xBBDA792448DB5A89(iLocal_293) / 100f);
	fVar1781 = (fVar1780 * 1200f);
	iLocal_142 = unk_0xF2DB717A73826179(fVar1781);
	if (iLocal_142 < 660)
	{
		iLocal_142 = 660;
	}
	func_469(23, 1);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0xAC765EF46E85A446(2);
		unk_0xC43E67C9BA871ECB();
		unk_0xE73F8CB95153F5B1(15, 0f, -0.0375f);
		if (iLocal_285 && Var0.f_0 < 13)
		{
			unk_0xA8505DB724F74B62(Var477.f_0, Var477.f_18, Var477.f_21, Var477.f_24, Var477.f_24, 2);
		}
		if ((unk_0xF68107C40359970C(ScriptParam_0.f_5) && !unk_0xE5965CDF24F93A9F(func_504())) || (unk_0xE5965CDF24F93A9F(func_504()) && unk_0xF68107C40359970C(func_504())))
		{
			func_475(&Var0, &Var508, &Var1191);
		}
		if (!unk_0xF68107C40359970C(uLocal_263[0]))
		{
			unk_0x3E3D339BAD67F6F2(uLocal_263[0], 239, 1);
			unk_0x3E3D339BAD67F6F2(uLocal_263[0], 124, 1);
			func_468();
			unk_0x7BC5E5A5FF7F278F(0);
			unk_0x7BC5E5A5FF7F278F(2);
			iVar1779 = 0;
			while (iVar1779 < unk_0x46951D3186547C7A(unk_0xE2D3D51028F0428A(), &uVar1807, -1))
			{
				if (uVar1807[iVar1779] != uLocal_263[1])
				{
					if (!unk_0xF68107C40359970C(uVar1807[iVar1779]))
					{
						unk_0x3E3D339BAD67F6F2(uVar1807[iVar1779], 240, 1);
					}
				}
				iVar1779++;
			}
			switch (Var0.f_0)
			{
				case 0:
					unk_0x3410421C60BF7143(1);
					func_467(&(Var0.f_243), &ScriptParam_0);
					func_466(Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0xE5965CDF24F93A9F(Var0.f_243))
					{
						Local_334 = { unk_0xCACAD935C0BEE14F(Var0.f_243, 0.7792f, -1.138f, 0.1814f) };
						Local_337 = { -7.9947f, 0f, (Var0.f_243.f_4 + 36.19176f) };
						uLocal_129 = unk_0x1BCEC0B1056BD6AC(26379945, Local_334, Local_337, 65f, 0, 2);
						unk_0x0A18C027350D3C19(uLocal_129, 30f);
					}
					func_465();
					unk_0xC1B1E9A034A63A62(0);
					Var0.f_0 = 1;
					break;
				
				case 1:
					if (unk_0x83666F9FB8FEBD4B() > 500 && !unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))
					{
						unk_0x7A997A0A971D305F(ScriptParam_0, 0.5f, 1, 0, 0, 0);
						if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
						{
							unk_0x7461D7C5BA953BC7(&uLocal_300);
							unk_0xA888F8CC04F25CC8(&uLocal_300);
							unk_0xAB7639D658BBCCEE(0, 0, 0);
							unk_0xC963A45B50851768(uLocal_300);
							unk_0x8ACADA903FCAA42F(unk_0xE2D3D51028F0428A(), uLocal_300);
						}
						Local_85 = { Local_85 };
						Var0.f_0 = 2;
					}
					break;
				
				case 2:
					iVar1829 = 0;
					while (iVar1829 < 2)
					{
						iVar1830 = 0;
						while (iVar1830 < 3)
						{
							func_464(&(Var0.f_5[iVar1829 /*79*/][iVar1830 /*26*/]), iVar1829);
							iVar1830++;
						}
						iVar1829++;
					}
					iVar1831 = 0;
					while (iVar1831 < 3)
					{
						func_464(&(Var0.f_164[iVar1831 /*26*/]), 0);
						iVar1831++;
					}
					iVar464 = 2;
					func_463(0);
					func_461(&Var477, iLocal_302, Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0xE5965CDF24F93A9F(Var0.f_243))
					{
						Var1788 = { unk_0x37B78BEF7C4625D4(Var0.f_243, Var477.f_18) };
					}
					func_458(&Var477, &Var508);
					unk_0xF30CF8286FBA13D7(0);
					Var0.f_0 = 3;
					break;
				
				case 3:
					if (func_455(&Var477, &Var508))
					{
						func_452(&(Var0.f_243), &Var465, &Var471, 0);
						iLocal_356 = func_506(uLocal_263[0]);
						switch (iLocal_356)
						{
							case 0:
								sLocal_358 = func_451("MICHAEL");
								if (!BitTest(Global_113347, 0))
								{
									sVar1797 = "darts_ig_intro_player_0_face";
								}
								else
								{
									sVar1797 = "darts_ig_intro_alt1_player_0_face";
								}
								break;
							
							case 1:
								sLocal_358 = func_451("FRANKLIN");
								bLocal_282 = true;
								if (!BitTest(Global_113347, 0))
								{
									sVar1797 = "darts_ig_intro_player_1_face";
								}
								else
								{
									sVar1797 = "darts_ig_intro_alt1_player_1_face";
								}
								break;
							
							case 2:
								sLocal_358 = func_451("TREVOR");
								if (!BitTest(Global_113347, 0))
								{
									sVar1797 = "darts_ig_intro_player_2_face";
								}
								else
								{
									sVar1797 = "darts_ig_intro_alt1_player_2_face";
								}
								break;
						}
						if (!unk_0x55B23FE400FCEA6B(func_504(), 0))
						{
							iLocal_357 = func_506(func_504());
							if (iLocal_357 == 145)
							{
								iLocal_357 = func_448(func_504());
							}
							switch (iLocal_357)
							{
								case 0:
									sLocal_359 = func_451("MICHAEL");
									break;
								
								case 1:
									sLocal_359 = func_451("FRANKLIN");
									break;
								
								case 2:
									sLocal_359 = func_451("TREVOR");
									break;
								
								case 19:
									sLocal_359 = func_451("LAMAR");
									unk_0xE3752B10DC995E95(func_504(), 5, 2, 0, 0);
									break;
								
								case 14:
									sLocal_359 = func_451("JIMMY");
									break;
								
								default:
									sLocal_359 = "NEW_GUY";
									break;
							}
						}
						else
						{
							iVar1777 = unk_0x5853B15F78E1A265(0, 200);
							if (iLocal_302 == 2)
							{
								if (iVar1777 < 51)
								{
									sLocal_359 = func_451("RAYMOND");
									iLocal_360 = 954610991;
								}
								else if (iVar1777 < 101)
								{
									sLocal_359 = func_451("JOHAN");
									iLocal_360 = 94453331;
								}
								else if (iVar1777 < 151)
								{
									sLocal_359 = func_451("STAN");
									iLocal_360 = 1891555423;
								}
								else
								{
									sLocal_359 = func_451("VINCE");
									iLocal_360 = -1067630349;
								}
							}
							else if (iVar1777 < 51)
							{
								sLocal_359 = func_451("KRISTY");
								iLocal_360 = 885327384;
							}
							else if (iVar1777 < 101)
							{
								sLocal_359 = func_451("MARLENE");
								iLocal_360 = -1791000994;
							}
							else if (iVar1777 < 151)
							{
								sLocal_359 = func_451("LORIE");
								iLocal_360 = 1954368234;
							}
							else
							{
								sLocal_359 = func_451("SHELLEY");
								iLocal_360 = -863218904;
							}
						}
						uLocal_59 = unk_0x0E536D72AB30F4C8(iLocal_60, Var471, 1, 1, 0);
						Var0.f_446[0] = 0;
						Var0.f_446[1] = 0;
						Var0.f_0 = 4;
					}
					break;
				
				case 4:
					if (!unk_0xE19E89B5FB4D4646())
					{
						uVar1828 = unk_0x0E536D72AB30F4C8(joaat("prop_dart_1"), Var471, 1, 1, 0);
						func_445(Var0.f_243.f_4, Var465, &uVar1807, &ScriptParam_0);
						func_444(&Var477, sLocal_358, sLocal_359);
						unk_0x03A927199A2DFE46(uLocal_263[1]);
						uLocal_301 = unk_0x1BCEC0B1056BD6AC(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
						if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
						{
							unk_0xA8685678DDA27FC3(unk_0xE2D3D51028F0428A(), joaat("MotionState_Idle"), 0, 0, 0);
						}
						func_443(&(Var0.f_257), 0, unk_0xE2D3D51028F0428A(), sLocal_358, 0, 1);
						if (unk_0x55B23FE400FCEA6B(func_504(), 0))
						{
							if (iLocal_302 == 2)
							{
								func_443(&(Var0.f_257), 3, uLocal_263[1], "DartsBillLost1", 0, 1);
							}
							else
							{
								func_443(&(Var0.f_257), 3, uLocal_263[1], "DartsMelHick1", 0, 1);
							}
							iVar1778 = -1;
						}
						else
						{
							func_443(&(Var0.f_257), 3, func_504(), sLocal_359, 0, 1);
							func_441(&uVar1804);
							iVar1778 = 6;
						}
						if (!BitTest(Global_113347, 0))
						{
							iVar1778 = -1;
						}
						else
						{
							iVar1778 = 3;
						}
						func_440(&Var477, 0);
						Var0.f_0 = 5;
					}
					break;
				
				case 5:
					if ((((!unk_0xF68107C40359970C(uLocal_263[1]) && unk_0x3C7ED37A9FE7C585(uLocal_263[0])) && !unk_0xD5C6B5E3B93A5EDC(uLocal_263[0], 1)) && unk_0x3C7ED37A9FE7C585(uLocal_263[1])) && !unk_0xD5C6B5E3B93A5EDC(uLocal_263[1], 1))
					{
						bLocal_273 = func_438(&uLocal_289);
						if ((func_437() && unk_0x320D1840B6DAA1CC() >= iLocal_291 + 1000) && iVar1778 != 9)
						{
							if (!unk_0xA829C9A2767AC8EF() && !unk_0xCB1EF1E7B77ADF4C())
							{
								unk_0x859006DB870314C5(500);
							}
						}
						if (unk_0xA829C9A2767AC8EF() && iVar1778 != 9)
						{
							func_433(0);
							func_431();
							iVar1778 = 9;
						}
						switch (iVar1778)
						{
							case -1:
								if (!unk_0xF68107C40359970C(uLocal_263[1]))
								{
									uLocal_295 = unk_0x8F5F4164BF5FB513(unk_0xCACAD935C0BEE14F(ScriptParam_0.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (unk_0x82FE2343F8BDFF0B(ScriptParam_0.f_4) - 3.783146f), 2);
									uLocal_301 = unk_0xB93A4265CB0F5B1F("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0x7B8CE3A05613F41C(uLocal_301, uLocal_295, "darts_ig_intro_cam", "mini@dartsintro");
									unk_0xDD786B89B15AA63F(uLocal_301, 1);
									unk_0x850D4EF3D40FB068(1, false, 3000, 1, 0, 0);
									unk_0xC89EA639A6F338A6(uLocal_263[0]);
									unk_0xC89EA639A6F338A6(uLocal_263[1]);
									unk_0x51BB443B279E4104(uLocal_263[0]);
									unk_0x51BB443B279E4104(uLocal_263[1]);
									unk_0x950B26F4C891073F(uLocal_263[1], uLocal_295, "mini@dartsintro", "darts_ig_intro_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x950B26F4C891073F(uLocal_263[0], uLocal_295, "mini@dartsintro", "darts_ig_intro_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x49D97B076E3590AC(uLocal_263[1], "mini@dartsintro", "darts_ig_intro_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x49D97B076E3590AC(uLocal_263[0], "mini@dartsintro", sVar1797, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0xAA8557AFE4A4A184(uVar1828, uLocal_295, "darts_ig_intro_dart", "mini@dartsintro", 1000f, 1090519040, 0, 1148846080);
									func_430(&uVar1804);
									iVar1778++;
								}
								break;
							
							case 0:
								if (unk_0xCE2C78E9FC0B01E3(uLocal_295))
								{
									if (!bVar1774)
									{
										if (func_429(&uVar1804) > 1.5f)
										{
											func_428(uLocal_263[0], "DARTS_REQUEST_GAME", 6);
											bVar1774 = true;
											func_427(&uVar1804);
										}
									}
									else if (!unk_0xB6F46ABD140050F1(uLocal_263[0]))
									{
										if (!bVar1775)
										{
											if (!func_426(&uVar1804))
											{
												func_441(&uVar1804);
											}
											else if (func_429(&uVar1804) > 0.5f)
											{
												func_425(uLocal_263[1]);
												func_427(&uVar1804);
												bVar1775 = true;
											}
										}
									}
									switch (iLocal_31)
									{
										case 0:
											func_430(&uVar1804);
											func_424("DARTS_HOW_TO_2", -1);
											iLocal_31++;
											break;
										
										case 1:
											if (unk_0x54DE1614490C2A83(uLocal_295) > 0.25f)
											{
												func_430(&uVar1804);
												func_424("DARTS_HOW_TO_3", -1);
												iLocal_31++;
											}
											break;
										
										case 2:
											if (unk_0x54DE1614490C2A83(uLocal_295) > 0.55f)
											{
												func_424("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
										
										case 3:
											if (unk_0x54DE1614490C2A83(uLocal_295) > 0.85f)
											{
												func_424("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
									}
									if (unk_0x54DE1614490C2A83(uLocal_295) > 0.95f)
									{
										iLocal_285 = 1;
										iVar1778++;
									}
									else if ((unk_0x320D1840B6DAA1CC() % 1000) < 50)
									{
									}
								}
								break;
							
							case 1:
								if (unk_0x54DE1614490C2A83(uLocal_295) > 0.99f)
								{
									if (!unk_0xF68107C40359970C(uLocal_263[1]))
									{
										func_421(Var0.f_243.f_1, Var0.f_243.f_4, func_423(2), func_422(0), 0, 1);
										iLocal_31 = 0;
										unk_0x3410421C60BF7143(1);
										unk_0x588DDCB644C6486A(uLocal_301, 0);
										unk_0x03A927199A2DFE46(uLocal_263[0]);
										unk_0x03A927199A2DFE46(uLocal_263[1]);
										unk_0xA5D8BA53953077C8(uVar1828, -1000f, 0);
										unk_0x4BDA5AFD88C085EB(&uVar1828);
										unk_0x0AF8D3A06BB92903(func_420(0));
										func_427(&uVar1804);
										Var0.f_0 = 6;
										iVar1778 = 0;
									}
								}
								break;
							
							case 3:
								if (!unk_0xF68107C40359970C(uLocal_263[1]))
								{
									uLocal_295 = unk_0x8F5F4164BF5FB513(unk_0xCACAD935C0BEE14F(ScriptParam_0.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (unk_0x82FE2343F8BDFF0B(ScriptParam_0.f_4) - 3.783146f), 2);
									uLocal_301 = unk_0xB93A4265CB0F5B1F("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0x7B8CE3A05613F41C(uLocal_301, uLocal_295, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
									unk_0xDD786B89B15AA63F(uLocal_301, 1);
									unk_0x850D4EF3D40FB068(1, false, 3000, 1, 0, 0);
									unk_0xC89EA639A6F338A6(uLocal_263[0]);
									unk_0xC89EA639A6F338A6(uLocal_263[1]);
									unk_0x51BB443B279E4104(uLocal_263[0]);
									unk_0x51BB443B279E4104(uLocal_263[1]);
									unk_0x950B26F4C891073F(uLocal_263[1], uLocal_295, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x950B26F4C891073F(uLocal_263[0], uLocal_295, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x49D97B076E3590AC(uLocal_263[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x49D97B076E3590AC(uLocal_263[0], "mini@dartsintro_alt1", sVar1797, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0xAA8557AFE4A4A184(uVar1828, uLocal_295, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 1090519040, 0, 1148846080);
									func_430(&uVar1804);
									iVar1778++;
								}
								break;
							
							case 4:
								if (unk_0xCE2C78E9FC0B01E3(uLocal_295))
								{
									if (!bVar1774)
									{
										if (func_429(&uVar1804) > 0.5f)
										{
											func_428(uLocal_263[0], "DARTS_REQUEST_GAME", 6);
											bVar1774 = true;
											func_427(&uVar1804);
										}
									}
									else if (!unk_0xB6F46ABD140050F1(uLocal_263[0]))
									{
										if (!bVar1775)
										{
											if (!func_426(&uVar1804))
											{
												func_441(&uVar1804);
											}
											else if (func_429(&uVar1804) > 0.25f)
											{
												func_425(uLocal_263[1]);
												func_427(&uVar1804);
												bVar1775 = true;
											}
										}
									}
									if (unk_0x54DE1614490C2A83(uLocal_295) > 0.95f)
									{
										iLocal_285 = 1;
										iVar1778++;
									}
									else if ((unk_0x320D1840B6DAA1CC() % 1000) < 50)
									{
									}
								}
								break;
							
							case 5:
								if (unk_0x54DE1614490C2A83(uLocal_295) > 0.99f)
								{
									if (!unk_0xF68107C40359970C(uLocal_263[1]))
									{
										func_419();
										unk_0x588DDCB644C6486A(uLocal_301, 0);
										unk_0x03A927199A2DFE46(uLocal_263[0]);
										unk_0x03A927199A2DFE46(uLocal_263[1]);
										unk_0xA5D8BA53953077C8(uVar1828, -1000f, 0);
										unk_0x4BDA5AFD88C085EB(&uVar1828);
										unk_0x0AF8D3A06BB92903(func_420(0));
										func_427(&uVar1804);
										Var0.f_0 = 6;
										iVar1778 = 0;
									}
								}
								break;
							
							case 9:
								if (unk_0xA829C9A2767AC8EF())
								{
									iLocal_285 = 1;
									iLocal_31 = 0;
									unk_0x3410421C60BF7143(1);
									if (!unk_0xF68107C40359970C(uLocal_263[1]))
									{
										unk_0xC64B6E13A6A7F517(uLocal_263[0], Var465, 1, 0, 0, 1);
										unk_0xBBF86885619695CE(uLocal_263[0], Var0.f_243.f_4);
										unk_0xC64B6E13A6A7F517(uLocal_263[1], Var465.f_3, 1, 0, 0, 1);
										unk_0xBBF86885619695CE(uLocal_263[1], Var0.f_243.f_4);
										unk_0x03A927199A2DFE46(uLocal_263[0]);
										unk_0x03A927199A2DFE46(uLocal_263[1]);
									}
									unk_0x588DDCB644C6486A(uLocal_301, 0);
									unk_0xA5D8BA53953077C8(uVar1828, -1000f, 0);
									unk_0x4BDA5AFD88C085EB(&uVar1828);
									if (!BitTest(Global_113347, 0))
									{
										func_421(Var0.f_243.f_1, Var0.f_243.f_4, func_423(2), func_422(0), 0, 1);
									}
									else
									{
										func_419();
									}
									unk_0x0AF8D3A06BB92903(func_420(0));
									func_427(&uVar1804);
									unk_0x5A7ACD1CDF509B0D(500);
									Var0.f_0 = 6;
									iVar1778 = 0;
								}
								break;
							}
					}
					break;
				
				case 6:
					switch (iVar1778)
					{
						case 0:
							iLocal_291 = unk_0x320D1840B6DAA1CC();
							if (!unk_0xF68107C40359970C(uLocal_263[1]))
							{
								unk_0xC64B6E13A6A7F517(uLocal_263[0], Var465, 1, 0, 0, 1);
								unk_0xBBF86885619695CE(uLocal_263[0], Var0.f_243.f_4);
								unk_0xC64B6E13A6A7F517(uLocal_263[1], Var465.f_3, 1, 0, 0, 1);
								unk_0xBBF86885619695CE(uLocal_263[1], Var0.f_243.f_4);
							}
							unk_0x66B27A59829491D3(func_420(1));
							iVar1778 = 0;
							Var0.f_0 = 7;
							break;
						
						case 1:
							if ((unk_0x320D1840B6DAA1CC() - iLocal_291) > 1500)
							{
								func_417(&(Var508.f_57), "DARTS_TITLE", 0, 4000, 12, 2, 0, 0);
								iVar1778++;
							}
							break;
						
						case 2:
							if (!func_416(&(Var508.f_57), 1, 0))
							{
								unk_0x66B27A59829491D3(func_420(1));
								iVar1778 = 0;
								Var0.f_0 = 7;
							}
							break;
					}
					break;
				
				case 7:
					if (!BitTest(Global_113347, 0))
					{
						if (func_413(&iVar464, &(Var0.f_243), &(Var0.f_249), &(Var0.f_1), &(Var0.f_164), &uVar1801))
						{
							unk_0xCED9E32812D6C7C7(&Global_113347, 0);
							Var0.f_0 = 8;
						}
					}
					else
					{
						unk_0xDD786B89B15AA63F(uLocal_120, 1);
						Var0.f_0 = 8;
					}
					break;
				
				case 8:
					if (unk_0xA829C9A2767AC8EF())
					{
						unk_0x5A7ACD1CDF509B0D(500);
					}
					switch (iVar1778)
					{
						case 0:
							if (!unk_0xE5965CDF24F93A9F(func_504()))
							{
								if (!BitTest(Global_113347, 10))
								{
									unk_0xCED9E32812D6C7C7(&Global_113347, 10);
								}
								else
								{
									unk_0xB0550BC91B0159D6(&Global_113347, 10);
								}
								func_411(&Var508);
								iVar1778++;
							}
							else
							{
								func_411(&Var508);
								iVar1778++;
							}
							break;
						
						case 1:
							if (unk_0x8FE9914D4872D601())
							{
								if (fLocal_134 != unk_0xF4CC509EEB975296(0))
								{
									fLocal_134 = unk_0xF4CC509EEB975296(0);
									unk_0x0A18C027350D3C19(uLocal_120, func_410(fLocal_134));
									unk_0x0A18C027350D3C19(uLocal_121, func_410(fLocal_134));
								}
							}
							if (func_350(&Var508, &(Var0.f_452), &(Var0.f_453)))
							{
								unk_0x0AF8D3A06BB92903(func_420(1));
								if (Var0.f_452 > 0)
								{
									iVar1778 = 0;
									if (Var0.f_452 > 1 || Var0.f_453 > 1)
									{
										func_349(&Var477, 0, 0, 0, 0);
										bVar1773 = true;
									}
									func_346(1, -1);
									Var0.f_0 = 9;
								}
								else if (Var0.f_452 < 0)
								{
									Var0.f_0 = 15;
								}
							}
							break;
					}
					break;
				
				case 9:
					if (func_339(&Var0, &Var477, &Var508))
					{
						Var0.f_249.f_4 = 1;
						if (Global_113386.f_18970.f_5 >= 5 && Global_113386.f_18970.f_7 >= 0.8f)
						{
							Var0.f_249.f_4 = 2;
						}
						else if (Global_113386.f_18970.f_5 >= 3 && Global_113386.f_18970.f_7 >= 0.66f)
						{
							Var0.f_249.f_4 = 1;
						}
						else
						{
							Var0.f_249.f_4 = 0;
						}
						if (func_338(Global_113386.f_18970.f_5, &iLocal_294))
						{
							func_337(&(Var508.f_666), 24, 1);
						}
						fLocal_90 = func_336(Global_113386.f_18970.f_5);
						fLocal_91 = func_335(Global_113386.f_18970.f_5);
						fLocal_88 = fLocal_90;
						fLocal_89 = fLocal_91;
						iLocal_151[4]++;
						if (!unk_0xF68107C40359970C(uLocal_263[1]))
						{
							unk_0x51BB443B279E4104(uLocal_263[1]);
							unk_0xC64B6E13A6A7F517(uLocal_263[1], Var465.f_3, 1, 0, 0, 1);
							unk_0xBBF86885619695CE(uLocal_263[1], Var0.f_243.f_4);
						}
						if (func_426(&uVar1798))
						{
							func_427(&uVar1798);
						}
						unk_0x66B27A59829491D3(func_420(2));
						func_334(uLocal_263[1]);
						Var0.f_0 = 10;
						Var0.f_1 = 2;
					}
					break;
				
				case 10:
					if (unk_0x8FE9914D4872D601())
					{
						if (fLocal_134 != unk_0xF4CC509EEB975296(0))
						{
							fLocal_134 = unk_0xF4CC509EEB975296(0);
							unk_0x0A18C027350D3C19(uLocal_120, func_410(fLocal_134));
							unk_0x0A18C027350D3C19(uLocal_121, func_410(fLocal_134));
						}
					}
					if (!bLocal_283)
					{
						unk_0x8FB472886552D737("mini@dartsoutro");
						bLocal_283 = true;
					}
					if (!iLocal_284)
					{
						if (bLocal_283)
						{
							if (!unk_0x6F940C2636C076AD("mini@dartsoutro"))
							{
							}
							else
							{
								iLocal_284 = 1;
							}
						}
					}
					func_252(&Var0, &Var471, &Var477, &Var508, &uVar1798);
					break;
				
				case 11:
					switch (iVar1778)
					{
						case 0:
							if (func_429(&(Var0.f_254)) > 0.5f)
							{
								unk_0x3410421C60BF7143(1);
								unk_0xBA6C3C5E9E5A9442();
								func_251(unk_0xE2D3D51028F0428A());
								func_349(&Var477, Var0.f_449[0], Var0.f_449[1], Var0.f_446[0], Var0.f_446[1]);
								iVar1832 = 0;
								while (iVar1832 < 2)
								{
									iVar1833 = 0;
									while (iVar1833 < 3)
									{
										func_250(&(Var0.f_5[iVar1832 /*79*/][iVar1833 /*26*/]));
										iVar1833++;
									}
									func_249(&Var477, iVar1832);
									iVar1832++;
								}
								if (Var0.f_459)
								{
									if (Var0.f_454)
									{
										func_247(&(Var508.f_62), "DARTS_WINNER", "DARTS_SETW", 4000, 5, 12);
									}
									else
									{
										func_247(&(Var508.f_62), "DARTS_LOSER", "DARTS_SETL", 4000, 5, 6);
									}
									Var0.f_459 = 0;
								}
								else if (Var0.f_454)
								{
									func_247(&(Var508.f_62), "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 12);
								}
								else
								{
									func_247(&(Var508.f_62), "DARTS_LOSER", "DARTS_LEGL", 4000, 5, 6);
								}
								fVar1835 = unk_0xF4CC509EEB975296(1);
								if (fVar1835 > 2f)
								{
									Var1791 = { 1992.294f, 3047.577f, 46.21517f };
									Var1794 = { 0f, 0f, 138.74f };
								}
								else
								{
									Var1791 = { 1992.336f, 3047.924f, 46.21517f };
									Var1794 = { 0f, 0f, 136.74f };
								}
								iVar1834 = func_246();
								uLocal_295 = unk_0x8F5F4164BF5FB513(Var1791, Var1794, 2);
								uLocal_301 = unk_0xB93A4265CB0F5B1F("DEFAULT_ANIMATED_CAMERA", 0);
								unk_0x7B8CE3A05613F41C(uLocal_301, uLocal_295, sLocal_375[iVar1834], "mini@dartsoutro");
								unk_0xDD786B89B15AA63F(uLocal_301, 1);
								unk_0x850D4EF3D40FB068(1, false, 3000, 1, 0, 0);
								if (!unk_0xF68107C40359970C(uLocal_263[0]) && !unk_0xF68107C40359970C(uLocal_263[1]))
								{
									if (Var0.f_454)
									{
										if ((Var0.f_437[0] + Var0.f_437[1]) == 1)
										{
											iVar1836 = 1;
										}
										else
										{
											iVar1836 = 0;
										}
										unk_0x91DFC8F68F6D9B05(-1, "TENNIS_POINT_WON", "HUD_AWARDS", 1);
										func_245(&uLocal_263, iVar1836);
										unk_0x950B26F4C891073F(uLocal_263[0], uLocal_295, "mini@dartsoutro", sLocal_367[iVar1834], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0x950B26F4C891073F(uLocal_263[1], uLocal_295, "mini@dartsoutro", sLocal_371[iVar1834], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0x49D97B076E3590AC(unk_0xE2D3D51028F0428A(), sLocal_362, sLocal_363[unk_0x5853B15F78E1A265(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
									else
									{
										unk_0x91DFC8F68F6D9B05(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
										func_244(&uLocal_263);
										unk_0x950B26F4C891073F(uLocal_263[1], uLocal_295, "mini@dartsoutro", sLocal_367[iVar1834], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0x950B26F4C891073F(uLocal_263[0], uLocal_295, "mini@dartsoutro", sLocal_371[iVar1834], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0x49D97B076E3590AC(uLocal_263[1], sLocal_361, sLocal_363[unk_0x5853B15F78E1A265(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
								}
								iVar1778++;
							}
							break;
						
						case 1:
							if (!func_242(&(Var508.f_62), 1))
							{
								iVar1778++;
							}
							break;
						
						case 2:
							func_427(&(Var0.f_254));
							iLocal_279 = 0;
							unk_0x0AF8D3A06BB92903(func_420(3));
							func_419();
							if (unk_0x876B1078E90C91CB(uLocal_301))
							{
								unk_0x588DDCB644C6486A(uLocal_301, 0);
							}
							iVar1778 = 0;
							Var0.f_0 = 9;
							break;
					}
					break;
				
				case 12:
					if (func_429(&(Var0.f_254)) > 0.92f)
					{
						func_44(&Var0, &Var508, &Var477, &Var1191, bVar1773);
					}
					break;
				
				case 13:
					uVar1776 = func_10(&Var1191, 0, 1065353216, 0, 0, 0);
					if (!unk_0x55B23FE400FCEA6B(func_504(), 0))
					{
						unk_0x03A927199A2DFE46(uLocal_263[1]);
						Var0.f_0 = 15;
					}
					switch (iVar1778)
					{
						case 0:
							unk_0x03A927199A2DFE46(uLocal_263[0]);
							if (!bLocal_281)
							{
								unk_0x850D4EF3D40FB068(0, bLocal_281, 3000, 1, 0, 0);
							}
							else
							{
								unk_0xBAEA2321313356D0(0, 0, 3, 0);
							}
							unk_0x94953C3FF0664F66(0);
							unk_0x080C97B891E2F3AA(0, 1065353216);
							unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
							unk_0xBA6C3C5E9E5A9442();
							unk_0xF30F15F203736DE4(uLocal_263[0], uLocal_263[1], 5000, 2049, 3);
							func_441(&uVar1804);
							iVar1778++;
							break;
						
						case 1:
							if (func_7(&uVar1804) > 0.1f)
							{
								if (!bVar1772)
								{
								}
								func_441(&uVar1804);
								iVar1778++;
							}
							break;
						
						case 2:
							if (func_7(&uVar1804) > 0.3f)
							{
								if (!unk_0xF68107C40359970C(uLocal_263[1]))
								{
									if (!bVar1772)
									{
										func_4(uLocal_263[0], "GENERIC_THANKS", 1, 4);
									}
								}
								func_441(&uVar1804);
								iVar1778++;
							}
							break;
						
						case 3:
							if (uVar1776 || bVar1772)
							{
								Var0.f_0 = 15;
								iVar1778++;
							}
							break;
					}
					break;
				
				case 14:
					func_2(&Var508);
					if (unk_0x26009F50A14AD073(2, 201))
					{
						func_1(uLocal_263[1]);
						iLocal_298 = 2;
						bVar1772 = true;
						if (unk_0xA37204C64473B324(func_420(2)))
						{
							unk_0x0AF8D3A06BB92903(func_420(2));
						}
						Var0.f_0 = 13;
					}
					if (unk_0x26009F50A14AD073(2, 202))
					{
						if (Var0.f_1 == 2)
						{
							iLocal_100 = 0;
						}
						func_337(&(Var508.f_666), 8, 0);
						Var0.f_0 = 10;
					}
					break;
				
				case 15:
					func_475(&Var0, &Var508, &Var1191);
					break;
				}
		}
	}
}

void func_1(int iParam0)
{
	if (!unk_0xF68107C40359970C(iParam0))
	{
		func_4(iParam0, "GAME_QUIT_EARLY", 0, 6);
	}
}

void func_2(var uParam0)
{
	if (!unk_0xF1EC2C71FD1371B8())
	{
		if (!func_3(&(uParam0->f_666), 8))
		{
			func_337(&(uParam0->f_666), 8, 1);
			func_337(&(uParam0->f_666), 15, 0);
			func_337(&(uParam0->f_666), 16, 0);
			func_337(&(uParam0->f_666), 17, 0);
		}
		unk_0xD016D3608079EEE3();
		unk_0xDC38CC1E35B6A5D7("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, false, -1, 0, 0, true, 0);
	}
	else if (func_3(&(uParam0->f_666), 8))
	{
		func_337(&(uParam0->f_666), 8, 0);
	}
}

bool func_3(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_4(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!unk_0x55B23FE400FCEA6B(func_504(), 0) || iParam2)
	{
		func_428(iParam0, sParam1, iParam3);
	}
	else if (!unk_0xF68107C40359970C(iParam0))
	{
		func_5(iParam0, sParam1, sLocal_102, iParam3);
	}
}

void func_5(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x49C085D876A9986D(uParam0, sParam1, sParam2, func_6(iParam3), 0);
}

int func_6(int iParam0)
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

float func_7(var uParam0)
{
	if (func_426(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_8(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x320D1840B6DAA1CC());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		iVar2 = unk_0x0A89FDFA763DCAED();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x320D1840B6DAA1CC()) / 1000f);
}

bool func_9(var uParam0)
{
	return BitTest(*uParam0, 2);
}

int func_10(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0x8142A6539DDC180F() == uParam0->f_578)
	{
		return uParam0->f_579;
	}
	uParam0->f_578 = unk_0x8142A6539DDC180F();
	if (!unk_0x9315DBF7D972F07A())
	{
		if (unk_0xE63474311C6E3825(unk_0x407E03586628E458(unk_0xB6BA8B8E3D0B41C6()), 1))
		{
			uParam0->f_579 = 1;
			return 1;
		}
		if (unk_0x1C7F03843C4541AD(unk_0x407E03586628E458(unk_0xB6BA8B8E3D0B41C6())))
		{
			uParam0->f_579 = 1;
			return 1;
		}
	}
	if (!uParam0->f_568)
	{
		if (unk_0xA829C9A2767AC8EF() || unk_0xCB1EF1E7B77ADF4C())
		{
			unk_0x94B5910A9C945688(1);
			uParam0->f_568 = 1;
		}
	}
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			if (unk_0xA89C6F3818CC3ACB(unk_0x9E2D6C50374FCFA9(), 0))
			{
				unk_0xC204033758E4127F(unk_0x9E2D6C50374FCFA9(), 0);
			}
		}
	}
	unk_0xAC765EF46E85A446(7);
	unk_0xAC765EF46E85A446(8);
	unk_0xAC765EF46E85A446(9);
	unk_0xAC765EF46E85A446(6);
	unk_0xAC765EF46E85A446(19);
	unk_0x7653D561C9574763(2, 19, 1);
	unk_0x7653D561C9574763(0, 37, 1);
	unk_0x7653D561C9574763(0, 21, 1);
	unk_0x7653D561C9574763(0, 28, 1);
	unk_0x7653D561C9574763(0, 29, 1);
	unk_0x7653D561C9574763(0, 171, 1);
	func_41(0);
	if (unk_0x3A76A0944BE2C291(2))
	{
		if (unk_0x87694B2FAA0FC0C7() || (unk_0xA829C9A2767AC8EF() && !unk_0xECD40FEF3CF43BDB()))
		{
			unk_0x60236500251FDE8E();
		}
	}
	Global_43602 = 1;
	if (!uParam0->f_567)
	{
		switch (func_506(unk_0x407E03586628E458(unk_0xB6BA8B8E3D0B41C6())))
		{
			case 1:
				unk_0x9DCF157443EA30D6("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0x9DCF157443EA30D6("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0x9DCF157443EA30D6("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_567 = 1;
	}
	if (uParam0->f_562 == 0)
	{
		uParam0->f_562 = (uParam0->f_576 + unk_0xF34EE736CF047844((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_576 >= (uParam0->f_562 - 1500))
	{
		uParam0->f_562 = uParam0->f_576 + 3000;
	}
	if (uParam0->f_564 == 0f)
	{
		uParam0->f_564 = (uParam0->f_564 + func_40(30f));
		uParam0->f_564 = (uParam0->f_564 + (IntToFloat(uParam0->f_56) * func_40(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_564 = (uParam0->f_564 + func_40((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_564 = (uParam0->f_564 + (func_40(30f) - func_40(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_39(1);
		uParam0->f_576 = (uParam0->f_576 + unk_0xF2DB717A73826179((0f + (1000f * unk_0x0000000050597EE2()))));
		func_15(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_30 = func_14(uParam0->f_30, 0f, 1f);
		if (uParam0->f_576 > (uParam0->f_562 - 333))
		{
			if (!uParam0->f_565)
			{
				if (uParam0->f_569)
				{
					uParam0->f_569 = 0;
					uParam0->f_570 = 0;
					uParam0->f_577 = 0.75f;
					unk_0xEA5DEA46C3EE64D3(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x6F06CF0E9AB02847();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_547 = func_14(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0xEA5DEA46C3EE64D3(uParam0->f_1, "TRANSITION_OUT");
			unk_0x6F06CF0E9AB02847();
			uParam0->f_546 = uParam0->f_576;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_576 > (uParam0->f_562 - 333))
		{
			if (!uParam0->f_565)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * unk_0x0000000050597EE2())));
				}
			}
		}
		uParam0->f_548 = func_14(uParam0->f_548, 0f, 1f);
		if (uParam0->f_566)
		{
			if (unk_0xB1C1E679BD17A4F0(2))
			{
				if (unk_0x0347CCBD719C8ADC(uParam0->f_4))
				{
					if (!uParam0->f_571)
					{
						func_11(uParam0, (!uParam0->f_569 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0xF09A4F413B0D30EB(2, 216) && uParam0->f_562 > uParam0->f_576 + 333)
		{
			if (((!uParam0->f_570 && uParam0->f_56 != 0) && unk_0x0347CCBD719C8ADC(uParam0->f_4)) && IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_569)
				{
					unk_0xEA5DEA46C3EE64D3(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x6F06CF0E9AB02847();
					uParam0->f_569 = 1;
					uParam0->f_577 = 0.75f;
					if (uParam0->f_576 > (uParam0->f_562 - 5000))
					{
						uParam0->f_562 = uParam0->f_576 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0xEA5DEA46C3EE64D3(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x6F06CF0E9AB02847();
					uParam0->f_569 = 0;
					uParam0->f_577 = 0.75f;
				}
				func_11(uParam0, (!uParam0->f_569 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_569 || uParam0->f_570) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_570 && !uParam0->f_569)
				{
					uParam0->f_569 = 1;
					uParam0->f_577 = 0.75f;
					unk_0xEA5DEA46C3EE64D3(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x6F06CF0E9AB02847();
				}
				uParam0->f_563 = func_14((uParam0->f_563 + (((1f / 0.3f) * uParam0->f_577) * unk_0x0000000050597EE2())), 0f, 1f);
				uParam0->f_577 = func_14((uParam0->f_577 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_563 = func_14((uParam0->f_563 - ((((1f / 0.3f) * uParam0->f_577) * 0.01f) * unk_0x0000000050597EE2())), 0f, 1f);
			uParam0->f_577 = func_14((uParam0->f_577 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_576 > uParam0->f_562)
		{
			if (uParam0->f_565)
			{
				if (!uParam0->f_571)
				{
					if (unk_0xF09A4F413B0D30EB(2, 215))
					{
						uParam0->f_565 = 0;
					}
				}
			}
			else if ((uParam0->f_576 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_579 = !bVar0;
		if (bParam1)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		else
		{
			if (!bVar0)
			{
				func_39(0);
			}
			return !bVar0;
		}
	}
	func_39(0);
	return 1;
}

void func_11(var uParam0, bool bParam1)
{
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "CLEAR_ALL");
	unk_0x6F06CF0E9AB02847();
	if (unk_0x8FE9914D4872D601())
	{
		unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0xD7D6BA6E36AEC182(true);
		unk_0x6F06CF0E9AB02847();
	}
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x4F47E317C74C543B(0);
	func_13(unk_0x2018949B2C9FD96A(2, 215, 1));
	func_12("ES_HELP");
	if (unk_0x8FE9914D4872D601())
	{
		unk_0xD7D6BA6E36AEC182(true);
		unk_0x4F47E317C74C543B(215);
	}
	unk_0x6F06CF0E9AB02847();
	if (bParam1)
	{
		unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x4F47E317C74C543B(1);
		func_13(unk_0x2018949B2C9FD96A(2, 216, 1));
		func_12("ES_XPAND");
		if (unk_0x8FE9914D4872D601())
		{
			unk_0xD7D6BA6E36AEC182(true);
			unk_0x4F47E317C74C543B(216);
		}
		unk_0x6F06CF0E9AB02847();
	}
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x6F06CF0E9AB02847();
}

void func_12(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_13(char* sParam0)
{
	unk_0x341872E4D54CD053(sParam0);
}

float func_14(float fParam0, float fParam1, float fParam2)
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

void func_15(var uParam0, float fParam1, bool bParam2)
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar27[32];
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	
	iVar0 = unk_0xF2DB717A73826179((uParam0->f_547 * 255f));
	fVar1 = (func_38() * 0.25f);
	if (unk_0x0347CCBD719C8ADC(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0xEA5DEA46C3EE64D3(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_12(&(uParam0->f_5));
				if (uParam0->f_560 == 4)
				{
					func_37(&(uParam0->f_13));
				}
				else
				{
					func_12(&(uParam0->f_13));
				}
				if (unk_0x9315DBF7D972F07A())
				{
					unk_0x4F47E317C74C543B(150);
				}
				else
				{
					unk_0x4F47E317C74C543B(100);
				}
				unk_0xD7D6BA6E36AEC182(true);
				if (uParam0->f_560 == 4)
				{
					unk_0x4F47E317C74C543B((uParam0->f_56 - 1));
				}
				else
				{
					unk_0x4F47E317C74C543B(uParam0->f_56);
				}
				unk_0xD7D6BA6E36AEC182(bParam2);
				if (uParam0->f_560 == 4 || uParam0->f_560 == 3)
				{
					unk_0x4F47E317C74C543B(2);
				}
				else
				{
					unk_0x4F47E317C74C543B(69);
				}
				unk_0x6F06CF0E9AB02847();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_576 > 600)
			{
				unk_0xEA5DEA46C3EE64D3(uParam0->f_1, "TRANSITION_UP");
				unk_0xCA5D23E5F0F0306F(0.15f);
				unk_0xD7D6BA6E36AEC182(true);
				unk_0x6F06CF0E9AB02847();
				uParam0->f_3 = 1;
			}
		}
		func_36();
		unk_0xC4353D240DCE9533(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_564 * uParam0->f_563) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_571)
	{
		fVar3 = (((0.1388889f + func_40((2f * 2f))) * uParam0->f_572) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_38());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_560 != 4)
	{
		fVar7 = func_35(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (unk_0xF4CC509EEB975296(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		if (!unk_0xACC32B78196FBC2A(&(uParam0->f_554)))
		{
			fVar7 = func_34(&(uParam0->f_550), &(uParam0->f_554));
		}
		else
		{
			fVar7 = func_35(&(uParam0->f_550));
		}
		fVar8 = (((0.119f + 0.05f) / func_38()) / 2.5f);
		if ((uParam0->f_560 == 1 || uParam0->f_560 == 0) && uParam0->f_561 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_560 == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	unk_0x07899AAA5D680386(2, 215);
	unk_0x07899AAA5D680386(2, 216);
	unk_0x07899AAA5D680386(2, 200);
	unk_0x7653D561C9574763(2, 200, 1);
	if (uParam0->f_566 || uParam0->f_571)
	{
		if ((IntToFloat(uParam0->f_562) - (14000f * fParam1)) < IntToFloat(uParam0->f_576) || ((uParam0->f_571 && uParam0->f_563 > 0.95f) && (uParam0->f_562 - 10000) < uParam0->f_576))
		{
			if (uParam0->f_571)
			{
				if (uParam0->f_574 < 0)
				{
					uParam0->f_574 = (uParam0->f_574 * -1);
					uParam0->f_574 = (uParam0->f_576 + uParam0->f_574);
				}
				if (uParam0->f_574 > 0)
				{
					if ((uParam0->f_574 - uParam0->f_576) > 0)
					{
						func_31((uParam0->f_574 - uParam0->f_576), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_574 = 0;
						uParam0->f_573 = 1;
						uParam0->f_571 = 0;
						uParam0->f_565 = 0;
						uParam0->f_566 = 0;
						uParam0->f_562 = uParam0->f_576 + 500;
						uParam0->f_574 = 0;
					}
				}
				if (uParam0->f_572 < 1f)
				{
					uParam0->f_572 = (uParam0->f_572 + (0f + ((1f / 0.166f) * unk_0x0000000050597EE2())));
					if (uParam0->f_572 > 1f)
					{
						uParam0->f_572 = 1f;
					}
				}
			}
			if (unk_0xA829C9A2767AC8EF())
			{
				unk_0x33F5772842F16E82();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_576 <= uParam0->f_562)
			{
				unk_0xAC765EF46E85A446(7);
				unk_0xAC765EF46E85A446(8);
				unk_0xAC765EF46E85A446(9);
				unk_0xAC765EF46E85A446(6);
				unk_0xC4353D240DCE9533(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_571)
			{
				unk_0x7653D561C9574763(0, 140, 1);
				unk_0x7653D561C9574763(0, 141, 1);
				unk_0x7653D561C9574763(0, 142, 1);
				unk_0x7653D561C9574763(2, 188, 1);
				if (unk_0xF01464D7AF0B7347(2, 188))
				{
					unk_0x91DFC8F68F6D9B05(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 3;
					uParam0->f_574 = 0;
					unk_0x91DFC8F68F6D9B05(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x7653D561C9574763(2, 187, 1);
				if (unk_0xF01464D7AF0B7347(2, 187))
				{
					unk_0x91DFC8F68F6D9B05(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 4;
					uParam0->f_574 = 0;
					unk_0x91DFC8F68F6D9B05(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x7653D561C9574763(2, 202, 1);
				if (unk_0xF01464D7AF0B7347(2, 202))
				{
					unk_0x91DFC8F68F6D9B05(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 2;
					uParam0->f_574 = 0;
					unk_0x91DFC8F68F6D9B05(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_566)
			{
				unk_0xAC765EF46E85A446(7);
				unk_0xAC765EF46E85A446(8);
				unk_0xAC765EF46E85A446(9);
				unk_0xAC765EF46E85A446(6);
				unk_0x7653D561C9574763(0, 140, 1);
				unk_0x7653D561C9574763(0, 141, 1);
				unk_0x7653D561C9574763(0, 142, 1);
				if (unk_0xF09A4F413B0D30EB(2, 215) || unk_0xF01464D7AF0B7347(2, 200))
				{
					unk_0x91DFC8F68F6D9B05(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_566 = 0;
					uParam0->f_565 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					unk_0x91DFC8F68F6D9B05(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0x2F046C9381D8E91B(1, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0x71F4002CB1A0B451(iVar13, iVar14, iVar15, iVar0);
	unk_0xE835F806BE49C67B(fVar9, fVar10);
	unk_0xB8306DA8A5D18C52(0);
	unk_0x3F03C2D4EFA888BC(1f, 0.4f);
	fVar1 = (fVar1 - func_40(6f));
	fVar1 = (fVar1 + (func_40(30f) - func_40((2f * 2f))));
	fVar11 = (fVar2 - func_40((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_14((fVar11 / (0.6f * func_40(25f))), 0f, 1f);
		func_36();
		unk_0xCA4C0AD3CAFF651E(0.5f, (fVar1 - (func_40((2f - 0.5f)) - 0.001388889f)), fVar6, func_30(1f), iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_40((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_40((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_38())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_40(25f))), 0f, 1f);
			func_27(uParam0, iVar17, (fVar1 + func_40(2f)), fVar9, fVar10, unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_40(25f));
		if (uParam0->f_560 == 4)
		{
			if (iVar17 == (uParam0->f_580 - 1))
			{
				fVar1 = (fVar1 + func_40((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_38())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_40(2f));
					fVar12 = func_14((fVar11 / (0.6f * func_40(25f))), 0f, 1f);
					func_36();
					unk_0xCA4C0AD3CAFF651E(0.5f, (fVar1 + func_40((2f * 0.5f))), fVar6, func_30(1f), iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_40((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_40((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_560 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_40((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_38())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_40(2f));
			fVar12 = func_14((fVar11 / (0.6f * func_40(25f))), 0f, 1f);
			func_36();
			unk_0xCA4C0AD3CAFF651E(0.5f, (fVar1 + func_40((2f * 0.5f))), fVar6, func_30(1f), iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_40((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_38())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_40(25f))), 0f, 1f);
			unk_0x71F4002CB1A0B451(iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			func_19(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0xE2F2D76A4AA269FF() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_38()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_38()) / 2.5f));
				if (uParam0->f_560 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_38()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_38()) / 2.5f));
				}
			}
			if (uParam0->f_561 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_560 != 3)
			{
				unk_0xE835F806BE49C67B(fVar20, fVar21);
				unk_0xB8306DA8A5D18C52(1);
			}
			else
			{
				fVar20 = 0.5f;
				unk_0xB8306DA8A5D18C52(0);
			}
			unk_0x3F03C2D4EFA888BC(1f, 0.4f);
			if (unk_0xACC32B78196FBC2A(&(uParam0->f_554)))
			{
				func_18(&(uParam0->f_550), fVar20, (fVar1 + func_40((2f * 2f))), 0, 0, 0);
			}
			else
			{
				func_17(&(uParam0->f_550), &(uParam0->f_554), fVar20, (fVar1 + func_40((2f * 2f))), 0, 0);
			}
			unk_0xE835F806BE49C67B(fVar20, fVar21);
			unk_0xB8306DA8A5D18C52(2);
			unk_0x3F03C2D4EFA888BC(1f, 0.4f);
			unk_0x21FC15AE6B6188C4(0);
			func_36();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0xE835F806BE49C67B(fVar20, fVar22);
			unk_0x71F4002CB1A0B451(iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_560)
			{
				case 0:
					unk_0xCDDA0C58B818F6B2("PERCENTAGE");
					unk_0x2AE954BA77A66307(uParam0->f_558);
					unk_0x1A53079994915FA6(fVar20, (fVar1 + func_40((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0xCDDA0C58B818F6B2("FO_TWO_NUM");
					unk_0x2AE954BA77A66307(uParam0->f_558);
					unk_0x2AE954BA77A66307(uParam0->f_559);
					unk_0x1A53079994915FA6(fVar20, (fVar1 + func_40((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0xCDDA0C58B818F6B2("MTPHPER_XPNO");
					unk_0x2AE954BA77A66307(uParam0->f_558);
					unk_0x1A53079994915FA6(fVar20, (fVar1 + func_40((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0xCDDA0C58B818F6B2("ESDOLLA");
					unk_0x3788872A07BA04B3(uParam0->f_558, 1);
					unk_0x1A53079994915FA6(fVar20, (fVar1 + func_40((2f * 2f))), 0);
					break;
			}
			unk_0xA9911C122B3210B5(&cVar23, 0);
			if (uParam0->f_561 != 0 && unk_0x9D4AFED2949F7082(&cVar23))
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (uParam0->f_561)
				{
					case 1:
						unk_0x2F046C9381D8E91B(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						unk_0x2F046C9381D8E91B(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						unk_0x2F046C9381D8E91B(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_16(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_40(10f)) + fVar39);
				if (uParam0->f_560 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				unk_0xEBF08DA37D86CD05(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))), 0, 0);
			}
			fVar1 = (fVar1 + (func_40(30f) - 2f));
		}
	}
}

float func_16(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_17(char* sParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5)
{
	unk_0x21FC15AE6B6188C4(iParam4);
	unk_0xF68E5437AF17EFBC(iParam5);
	func_36();
	unk_0xCDDA0C58B818F6B2(sParam0);
	unk_0x76DB21247AE4E4E2(sParam1);
	unk_0x1A53079994915FA6(fParam2, fParam3, 0);
}

void func_18(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0x21FC15AE6B6188C4(iParam3);
	unk_0xF68E5437AF17EFBC(iParam5);
	func_36();
	if (bParam4)
	{
		unk_0xCDDA0C58B818F6B2("STRING");
		unk_0x76DB21247AE4E4E2(sParam0);
	}
	else
	{
		unk_0xCDDA0C58B818F6B2(sParam0);
	}
	unk_0x1A53079994915FA6(fParam1, fParam2, 0);
}

int func_19(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	
	StringCopy(&cVar0, func_26(iParam0), 64);
	StringCopy(&cVar16, func_23(iParam0, bParam1), 64);
	if (unk_0x2E87280918B16506(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_21(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { unk_0x7DF13542ADA68880(&cVar0, &cVar16) };
		fVar38 = (func_20(iParam0) / fVar34);
		Var35 = { Var35 * Vector(fVar38, fVar38, fVar38) };
		if (!bParam2)
		{
			Var35.f_0 = (Var35.f_0 - 2f);
			Var35.f_1 = (Var35.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var35.f_0 = 288f;
			Var35.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x2E87280918B16506(&(Global_23150.f_7420[29 /*16*/])) == joaat("crew_logo"))
		{
			Var35.f_0 = 106f;
			Var35.f_1 = 106f;
		}
		*fParam3 = ((Var35.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var35.f_1 / IntToFloat(iVar33)) / (Var35.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0xD87C62FA7E75D2C5() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23149)
			{
				*fParam4 = (*fParam4 * (Global_23149 / *fParam3));
				*fParam3 = Global_23149;
			}
		}
		return 1;
	}
	return 0;
}

float func_20(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

void func_21(bool bParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		unk_0xBE74EC1CD33D16EA(uParam1, uParam2);
		return;
	}
	unk_0x604161EB05F29E6D(uParam1, uParam2);
	fVar0 = unk_0xBBDA792448DB5A89(*uParam1);
	fVar1 = unk_0xBBDA792448DB5A89(*uParam2);
	fVar2 = unk_0xF4CC509EEB975296(0);
	if (func_22(*uParam1, *uParam2))
	{
		*fParam3 = 1f;
		*uParam1 = unk_0xF2DB717A73826179((fVar1 * fVar2));
		*uParam2 = unk_0xF2DB717A73826179(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*uParam1 = unk_0xF2DB717A73826179((fVar0 / *fParam3));
	*uParam2 = unk_0xF2DB717A73826179((fVar1 / *fParam3));
}

bool func_22(int iParam0, int iParam1)
{
	return (unk_0xBBDA792448DB5A89(iParam0) / unk_0xBBDA792448DB5A89(iParam1)) > 3.5f;
}

var func_23(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0xACC32B78196FBC2A(&(Global_23150.f_7420[iParam0 /*16*/])))
	{
		if (unk_0x2E87280918B16506(&(Global_23150.f_7420[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var19 = { func_25(unk_0x9E2D6C50374FCFA9()) };
			if (unk_0xF9518F925A4A1894(&Var19, &uVar3))
			{
				return func_24(&uVar3);
			}
		}
		else
		{
			return func_24(&(Global_23150.f_7420[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_24(var uParam0)
{
	return uParam0;
}

struct<13> func_25(int iParam0)
{
	struct<13> Var0;
	
	unk_0x460FFCEC183339C6(iParam0, &Var0, 13);
	return Var0;
}

char* func_26(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0xACC32B78196FBC2A(&(Global_23150.f_6411[iParam0 /*16*/])))
	{
		if (unk_0x2E87280918B16506(&(Global_23150.f_6411[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var16 = { func_25(unk_0x9E2D6C50374FCFA9()) };
			unk_0xF9518F925A4A1894(&Var16, &uVar0);
			return func_24(&uVar0);
		}
		else
		{
			return func_24(&(Global_23150.f_6411[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_27(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0x2F046C9381D8E91B(1, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, iParam5);
	unk_0xE835F806BE49C67B(fParam3, fParam4);
	unk_0xB8306DA8A5D18C52(1);
	unk_0x3F03C2D4EFA888BC(1f, func_29(14f));
	unk_0x21FC15AE6B6188C4(0);
	unk_0xF68E5437AF17EFBC(0);
	func_36();
	if (uParam0->f_531[iParam1])
	{
		unk_0xCDDA0C58B818F6B2("STRING");
		unk_0x76DB21247AE4E4E2(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0xCDDA0C58B818F6B2(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0x2AE954BA77A66307(uParam0->f_489[iParam1]);
		}
	}
	unk_0x1A53079994915FA6(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_19(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0xEBF08DA37D86CD05("CommonMenu", func_23(7, 0), (fParam4 - 0.006f), ((fParam2 + func_40(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_19(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0xEBF08DA37D86CD05("CommonMenu", func_23(5, 0), (fParam4 - 0.006f), ((fParam2 + func_40(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_19(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0xEBF08DA37D86CD05("CommonMenu", func_23(6, 0), (fParam4 - 0.006f), ((fParam2 + func_40(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0xB8306DA8A5D18C52(1);
	}
	else
	{
		unk_0xB8306DA8A5D18C52(2);
	}
	unk_0x3F03C2D4EFA888BC(1f, func_29(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0xE835F806BE49C67B(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0xE835F806BE49C67B(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, iParam5);
	func_28(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_28(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0x21FC15AE6B6188C4(0);
	unk_0xF68E5437AF17EFBC(0);
	func_36();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0x3F03C2D4EFA888BC(1f, func_29(18f));
			unk_0xF68E5437AF17EFBC(4);
			if (iParam0 < 0)
			{
				unk_0x27ED46EA48C0A455("ESMINDOLLA");
				unk_0x3788872A07BA04B3((-1 * iParam0), 1);
				fVar1 = unk_0x63F498818B4DEE3E(0);
			}
			else
			{
				unk_0x27ED46EA48C0A455("ESDOLLA");
				unk_0x3788872A07BA04B3(iParam0, 1);
				fVar1 = unk_0x63F498818B4DEE3E(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0xEBF08DA37D86CD05("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0, 0);
			unk_0xEBF08DA37D86CD05("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0, 0);
			unk_0xEBF08DA37D86CD05("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0, 0);
			unk_0x3F03C2D4EFA888BC(1f, func_29(14f));
			break;
	}
	unk_0x138506D6C7564EF1(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0xCDDA0C58B818F6B2("PERCENTAGE");
			unk_0x2AE954BA77A66307(iParam0);
			break;
		
		case 1:
			unk_0xF68E5437AF17EFBC(5);
			unk_0xCDDA0C58B818F6B2("FO_NUM");
			unk_0x2AE954BA77A66307(iParam0);
			break;
		
		case 2:
			unk_0xF68E5437AF17EFBC(5);
			unk_0xCDDA0C58B818F6B2("FO_TWO_NUM");
			unk_0x2AE954BA77A66307(iParam0);
			unk_0x2AE954BA77A66307(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0x3F03C2D4EFA888BC(1f, func_29(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0xCDDA0C58B818F6B2("ESMINDOLLA");
				unk_0x3788872A07BA04B3((-1 * iParam0), 1);
			}
			else
			{
				unk_0xCDDA0C58B818F6B2("ESDOLLA");
				unk_0x3788872A07BA04B3(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0xCDDA0C58B818F6B2(sParam4);
			break;
		
		case 7:
			unk_0xCDDA0C58B818F6B2("STRING");
			unk_0x76DB21247AE4E4E2(sParam4);
			break;
		
		case 8:
			unk_0xF68E5437AF17EFBC(5);
			unk_0xCDDA0C58B818F6B2("STRING");
			unk_0x28594D0D61DB1278(iParam0, 14);
			break;
		
		case 9:
			unk_0xF68E5437AF17EFBC(5);
			unk_0xCDDA0C58B818F6B2("STRING");
			unk_0x28594D0D61DB1278(iParam0, 6);
			break;
		
		case 10:
			unk_0xF68E5437AF17EFBC(5);
			unk_0xCDDA0C58B818F6B2("STRING");
			unk_0x28594D0D61DB1278(iParam0, 2055);
			break;
		
		case 18:
			unk_0xF68E5437AF17EFBC(5);
			unk_0xCDDA0C58B818F6B2("STRING");
			unk_0x28594D0D61DB1278(iParam0, 2055);
			break;
		
		case 12:
			unk_0xCDDA0C58B818F6B2("AHD_DIST");
			unk_0x2AE954BA77A66307(iParam0);
			break;
		
		case 13:
			unk_0xCDDA0C58B818F6B2(sParam4);
			unk_0x2AE954BA77A66307(iParam0);
			unk_0x2AE954BA77A66307(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0xCDDA0C58B818F6B2(sParam4);
			unk_0x2AE954BA77A66307(iParam0);
			unk_0x2AE954BA77A66307(iParam1);
			break;
		
		case 16:
			unk_0xCDDA0C58B818F6B2(sParam4);
			unk_0x2AE954BA77A66307(iParam1);
			break;
		
		case 20:
			unk_0xCDDA0C58B818F6B2(sParam4);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0x1A53079994915FA6((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0x3F03C2D4EFA888BC(1f, func_29(14f));
		}
		else
		{
			unk_0x1A53079994915FA6(fParam2, fParam3, 0);
		}
	}
}

float func_29(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_30(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_31(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_33(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_32(7, iVar0);
		Global_1649593.f_4659[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4659.f_172[iVar0] = iParam2;
		Global_1649593.f_4659.f_216[iVar0] = iParam3;
		Global_1649593.f_4659.f_183[iVar0] = iParam4;
		Global_1649593.f_4659.f_194[iVar0] = iParam5;
		Global_1649593.f_4659.f_249[iVar0] = iParam6;
		Global_1649593.f_4659.f_260[iVar0] = iParam7;
		Global_1649593.f_4659.f_205[iVar0] = iParam8;
		Global_1649593.f_4659.f_314[iVar0] = iParam9;
		Global_1649593.f_4659.f_325[iVar0] = iParam10;
		Global_1649593.f_4659.f_357[iVar0] = iParam11;
		Global_1649593.f_4659.f_238[iVar0] = iParam12;
		Global_1649593.f_4659.f_271[iVar0] = iParam13;
		Global_1649593.f_4659.f_368[iVar0] = iParam14;
		Global_1649593.f_4659.f_379[iVar0] = iParam15;
		Global_1649593.f_4659.f_390[iVar0] = iParam16;
		Global_1649593.f_4659.f_227[iVar0] = iParam17;
	}
}

void func_32(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_1649593.f_7009[iParam0]), iParam1);
}

int func_33(int iParam0, int iParam1)
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

float func_34(char* sParam0, char* sParam1)
{
	unk_0x27ED46EA48C0A455(sParam0);
	unk_0x76DB21247AE4E4E2(uParam1);
	return (unk_0x63F498818B4DEE3E(1) / 2f);
}

float func_35(char* sParam0)
{
	unk_0x27ED46EA48C0A455(sParam0);
	return (unk_0x63F498818B4DEE3E(1) / 2f);
}

void func_36()
{
	unk_0x2E04B7B46A3670E5(1);
	if (unk_0xCB1EF1E7B77ADF4C() || unk_0xA829C9A2767AC8EF())
	{
		unk_0x2E04B7B46A3670E5(7);
	}
	unk_0xE53134ABB42F336F(0);
}

void func_37(char* sParam0)
{
	unk_0x341872E4D54CD053(uParam0);
}

float func_38()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x8FE9914D4872D601())
	{
	}
	return fVar0;
}

void func_39(int iParam0)
{
	Global_78579 = iParam0;
	Global_78580 = iParam0;
}

float func_40(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_41(int iParam0)
{
	if (func_43())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_42(0))
		{
			func_433(iParam0);
		}
		unk_0xCED9E32812D6C7C7(&Global_8137, 2);
	}
}

int func_42(int iParam0)
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

bool func_43()
{
	return BitTest(Global_1958711, 19);
}

void func_44(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (unk_0x3A76A0944BE2C291(2))
	{
		unk_0x7653D561C9574763(2, 199, 1);
	}
	if (unk_0xC65B603E7942D0DB())
	{
		if (!iLocal_286)
		{
			if (func_219(uParam1, 0, &iLocal_287))
			{
				func_337(&(uParam1->f_666), 9, 0);
				iLocal_286 = 1;
			}
		}
	}
	if (iLocal_268)
	{
		if (unk_0x3A76A0944BE2C291(2))
		{
			unk_0x60236500251FDE8E();
		}
		bVar1 = true;
		if (uParam1->f_680)
		{
			if (!uParam1->f_646 && !unk_0xC65B603E7942D0DB())
			{
				uParam1->f_646 = func_210(&(uParam1->f_647), 0);
				bVar1 = false;
				if (uParam1->f_646)
				{
					uParam1->f_680 = 0;
					func_337(&(uParam1->f_666), 9, 0);
					uParam1->f_646 = 0;
				}
			}
			else
			{
				func_127(&(uParam1->f_72), &(uParam1->f_645));
			}
			if (bVar1)
			{
				func_123(&(uParam1->f_509), 1128792064, 1, 0, 1, 1065353216);
				if (unk_0xF09A4F413B0D30EB(2, 202))
				{
					uParam1->f_680 = 0;
					func_337(&(uParam1->f_666), 9, 0);
				}
				else if (unk_0xF09A4F413B0D30EB(2, 215))
				{
					iVar0 = 2;
				}
				else if (unk_0xF09A4F413B0D30EB(2, 216))
				{
					iVar0 = 1;
				}
			}
			if (func_122(&(uParam1->f_72)))
			{
				if (!bLocal_288)
				{
					bLocal_288 = true;
					func_121(&(uParam1->f_509), 0, 0, 1, 1);
					func_120(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
					func_120(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
					func_120(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
					func_120(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
					func_117(&(uParam1->f_509), 1);
				}
			}
		}
		else
		{
			iVar0 = func_110(uParam1, 0, 0, iLocal_286);
			func_10(uParam3, 0, 1065353216, 0, 0, 0);
		}
		if ((unk_0xCE2C78E9FC0B01E3(uLocal_295) && unk_0x54DE1614490C2A83(uLocal_295) >= 0.995f) || !unk_0xCE2C78E9FC0B01E3(uLocal_295))
		{
			bLocal_281 = true;
			if (unk_0x876B1078E90C91CB(uLocal_301))
			{
				unk_0x588DDCB644C6486A(uLocal_301, 0);
				if (!unk_0xF68107C40359970C(uLocal_263[0]) && !unk_0xF68107C40359970C(uLocal_263[1]))
				{
					unk_0x51BB443B279E4104(uLocal_263[0]);
					unk_0x51BB443B279E4104(uLocal_263[1]);
					unk_0xEB087B19F63AB053(uLocal_263[0], 0, 0);
					unk_0xEB087B19F63AB053(uLocal_263[1], 0, 0);
				}
			}
			func_109();
		}
		if (func_429(&(uParam0->f_254)) > 2f)
		{
			if (!iLocal_279)
			{
				if (uParam0->f_454)
				{
					if ((uParam0->f_437[0] + uParam0->f_437[1]) == 1)
					{
						iVar2 = 1;
					}
					else
					{
						iVar2 = 0;
					}
					func_245(&uLocal_263, iVar2);
				}
				else
				{
					func_244(&uLocal_263);
				}
				iLocal_279 = 1;
			}
		}
		if (iVar0 == 1)
		{
			unk_0x3410421C60BF7143(1);
			unk_0x0AF8D3A06BB92903(func_420(3));
			if (!unk_0xF68107C40359970C(uLocal_263[0]) && !unk_0xF68107C40359970C(uLocal_263[1]))
			{
				unk_0xC89EA639A6F338A6(uLocal_263[0]);
				unk_0xC89EA639A6F338A6(uLocal_263[1]);
			}
			func_108(uParam3);
			if (bParam4)
			{
				func_349(uParam2, 0, 0, 0, 0);
			}
			uParam0->f_429[0] = 0;
			uParam0->f_429[1] = 0;
			uParam0->f_432[0] = 0;
			uParam0->f_432[1] = 0;
			iLocal_30 = 1;
			func_427(&(uParam0->f_254));
			*uParam0 = 9;
			iLocal_279 = 0;
			iLocal_277 = 0;
			bLocal_281 = false;
			func_105();
			iLocal_286 = 0;
			iLocal_257 = 0;
			uParam1->f_680 = 0;
			iLocal_287 = 0;
			bLocal_288 = false;
			func_97(&(uParam1->f_72), 0);
			func_465();
		}
		else if (iVar0 == 2)
		{
			func_96(uParam3);
			unk_0x0AF8D3A06BB92903(func_420(3));
			if (uParam0->f_446[0] * 10 > 0)
			{
				func_56(func_91(), 21, uParam0->f_446[0] * 10, 0, 0);
			}
			unk_0xBA6C3C5E9E5A9442();
			*uParam0 = 13;
		}
		else if (((unk_0xF09A4F413B0D30EB(0, 234) || unk_0xF09A4F413B0D30EB(0, 235)) && uParam0->f_248 == 1) && bVar1)
		{
			uParam0->f_457 = 0;
			if (iLocal_267)
			{
				Var3 = { unk_0x6B62510F212526DC(uParam0->f_5[iLocal_30 /*79*/][iLocal_290 /*26*/], 1) };
				func_55(Var3, 0, iLocal_267);
				iLocal_267 = 0;
			}
			else if (unk_0xF09A4F413B0D30EB(2, 190))
			{
				iLocal_290++;
				if (iLocal_290 >= uParam0->f_436)
				{
					iLocal_290 = 0;
				}
				Var3 = { unk_0x6B62510F212526DC(uParam0->f_5[iLocal_30 /*79*/][iLocal_290 /*26*/], 1) };
				func_53(Var3);
			}
			else if (unk_0xF09A4F413B0D30EB(2, 189))
			{
				iLocal_290 = (iLocal_290 - 1);
				if (iLocal_290 < 0)
				{
					iLocal_290 = (uParam0->f_436 - 1);
				}
				Var3 = { unk_0x6B62510F212526DC(uParam0->f_5[iLocal_30 /*79*/][iLocal_290 /*26*/], 1) };
				func_53(Var3);
			}
		}
		else if (((unk_0xF09A4F413B0D30EB(0, 211) || unk_0xF01464D7AF0B7347(0, 211)) && bVar1) && (iLocal_286 || !unk_0xC65B603E7942D0DB()))
		{
			uParam1->f_680 = 1;
			func_121(&(uParam1->f_509), 0, 0, 1, 1);
			func_120(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			func_120(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			func_120(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
			if (bLocal_288)
			{
				func_120(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
			}
			func_117(&(uParam1->f_509), 1);
		}
	}
	else if (!uParam0->f_457)
	{
		unk_0x3410421C60BF7143(1);
		unk_0xBA6C3C5E9E5A9442();
		func_49(uParam3, uParam0->f_454, uParam0->f_429[iLocal_30], uParam0->f_432[iLocal_30], iLocal_151[2], uParam0->f_437[0], uParam0->f_437[1], uParam0->f_440[0], uParam0->f_440[1], uParam0->f_443[0], uParam0->f_443[1], bParam4);
		fVar6 = unk_0xF4CC509EEB975296(1);
		if (fVar6 > 2f)
		{
			Var7 = { 1992.294f, 3047.577f, 46.21517f };
			Var10 = { 0f, 0f, 138.74f };
		}
		else
		{
			Var7 = { 1992.336f, 3047.924f, 46.21517f };
			Var10 = { 0f, 0f, 136.74f };
		}
		iVar13 = func_246();
		uLocal_295 = unk_0x8F5F4164BF5FB513(Var7, Var10, 2);
		uLocal_301 = unk_0xB93A4265CB0F5B1F("DEFAULT_ANIMATED_CAMERA", 0);
		unk_0x7B8CE3A05613F41C(uLocal_301, uLocal_295, sLocal_375[iVar13], "mini@dartsoutro");
		unk_0xDD786B89B15AA63F(uLocal_301, 1);
		unk_0x850D4EF3D40FB068(1, false, 3000, 1, 0, 0);
		if (!unk_0xF68107C40359970C(uLocal_263[0]) && !unk_0xF68107C40359970C(uLocal_263[1]))
		{
			if (uParam0->f_454)
			{
				unk_0x950B26F4C891073F(uLocal_263[0], uLocal_295, "mini@dartsoutro", sLocal_367[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x950B26F4C891073F(uLocal_263[1], uLocal_295, "mini@dartsoutro", sLocal_371[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x49D97B076E3590AC(unk_0xE2D3D51028F0428A(), sLocal_362, sLocal_363[unk_0x5853B15F78E1A265(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
			else
			{
				unk_0x950B26F4C891073F(uLocal_263[1], uLocal_295, "mini@dartsoutro", sLocal_367[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x950B26F4C891073F(uLocal_263[0], uLocal_295, "mini@dartsoutro", sLocal_371[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x49D97B076E3590AC(uLocal_263[1], sLocal_361, sLocal_363[unk_0x5853B15F78E1A265(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
		}
		bLocal_281 = false;
		uParam0->f_457 = 1;
		uParam1->f_671 = unk_0x320D1840B6DAA1CC();
		iVar14 = 0;
		while (iVar14 < 2)
		{
			iVar15 = 0;
			while (iVar15 < 3)
			{
				func_250(&(uParam0->f_5[iVar14 /*79*/][iVar15 /*26*/]));
				iVar15++;
			}
			func_249(uParam2, iVar14);
			iVar14++;
		}
	}
	else if ((unk_0x320D1840B6DAA1CC() - uParam1->f_671) > 400 && func_45(uParam3, 0, 0))
	{
		if (!uParam0->f_454)
		{
			unk_0x91DFC8F68F6D9B05(-1, "LOOSE_MATCH", "HUD_MINI_GAME_SOUNDSET", 1);
		}
		iLocal_268 = 1;
	}
}

int func_45(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_48(uParam0);
	func_47(uParam0);
	if (unk_0x3C57C2F07FEE34D2(&(uParam0->f_550), "SPR_RESULT") || (unk_0x3C57C2F07FEE34D2(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_570 = 1;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		unk_0xA9911C122B3210B5("MPHud", 0);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0xA9911C122B3210B5("CommonMenu", 0);
		unk_0xA9911C122B3210B5("MPLeaderboard", 0);
		unk_0xA9911C122B3210B5("MPHud", 0);
		uParam0->f_1 = unk_0x528279F3F1EEF869("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0xD9EA500ADEAC231A("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0x0347CCBD719C8ADC(uParam0->f_1) || !unk_0x9D4AFED2949F7082("CommonMenu")) || !unk_0x9D4AFED2949F7082("MPLeaderboard")) || !unk_0x9D4AFED2949F7082("MPHud"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (uParam0->f_566 || uParam0->f_571)
		{
			while (!unk_0x0347CCBD719C8ADC(uParam0->f_4))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else
	{
		if (((!unk_0x0347CCBD719C8ADC(uParam0->f_1) || !unk_0x9D4AFED2949F7082("CommonMenu")) || !unk_0x9D4AFED2949F7082("MPLeaderboard")) || !unk_0x9D4AFED2949F7082("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_566)
		{
			if (!unk_0x0347CCBD719C8ADC(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_566)
	{
		if (uParam0->f_571)
		{
			func_46(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_11(uParam0, 1);
		}
		else
		{
			func_11(uParam0, 0);
		}
	}
	Global_78580 = 1;
	return 1;
}

void func_46(var uParam0)
{
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "CLEAR_ALL");
	unk_0x6F06CF0E9AB02847();
	if (unk_0x8FE9914D4872D601())
	{
		unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0xD7D6BA6E36AEC182(true);
		unk_0x6F06CF0E9AB02847();
	}
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x4F47E317C74C543B(2);
	func_13(unk_0x2018949B2C9FD96A(2, 188, 1));
	func_12("ES_HELP_TU");
	unk_0x6F06CF0E9AB02847();
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x4F47E317C74C543B(1);
	func_13(unk_0x2018949B2C9FD96A(2, 187, 1));
	func_12("ES_HELP_TD");
	unk_0x6F06CF0E9AB02847();
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x4F47E317C74C543B(0);
	func_13(unk_0x2018949B2C9FD96A(2, 202, 1));
	func_12("ES_HELP_AB");
	unk_0x6F06CF0E9AB02847();
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x6F06CF0E9AB02847();
}

void func_47(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0xB8306DA8A5D18C52(0);
	unk_0x3F03C2D4EFA888BC(1f, func_29(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0x27ED46EA48C0A455("STRING");
			unk_0x76DB21247AE4E4E2(&(uParam0->f_13));
			fVar0 = unk_0x63F498818B4DEE3E(1);
		}
		else
		{
			unk_0x27ED46EA48C0A455(&(uParam0->f_13));
			fVar0 = unk_0x63F498818B4DEE3E(1);
		}
	}
	else
	{
		unk_0x27ED46EA48C0A455("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0x2AE954BA77A66307(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0x26C23BE14F66F202(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0x76DB21247AE4E4E2(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x63F498818B4DEE3E(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_48(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

void func_49(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	uParam0->f_565 = 1;
	if (bParam1)
	{
		func_52(uParam0, "DARTS_WINNER", "DARTS_YJ", 0);
	}
	else
	{
		func_52(uParam0, "DARTS_LOSE_R", "DARTS_YJ", 0);
	}
	func_51(uParam0, 1, "DARTS_NUM_T", "", uParam2, 0, 0, 0);
	func_51(uParam0, 1, "DARTS_NUM_B", "", uParam3, 0, 0, 0);
	func_51(uParam0, 1, "DARTS_NUM_180", "", uParam4, 0, 0, 0);
	if (bParam11)
	{
		func_51(uParam0, 2, "DARTS_WIN", "", iParam5, (iParam5 + iParam6), 0, 0);
		func_51(uParam0, 2, "DARTS_SWIN", "", iParam7, (iParam7 + iParam8), 0, 0);
	}
	func_51(uParam0, 2, "DARTS_GWIN", "", iParam9, (iParam9 + iParam10), 0, 0);
	func_50(uParam0, 0, "", 0, 0, 0, 0, 0);
	func_39(1);
}

void func_50(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	StringCopy(&(uParam0->f_554), "", 16);
	uParam0->f_558 = iParam3;
	uParam0->f_559 = iParam4;
	uParam0->f_560 = iParam5;
	uParam0->f_561 = iParam6;
	uParam0->f_580 = iParam7;
}

void func_51(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = uParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_52(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_53(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0 = { func_54(Param0) };
	if (bLocal_133)
	{
		unk_0xDEE4F5F0B93BE664(uLocal_131, Var0);
		unk_0x889B4F9D52E23DEE(uLocal_131, uLocal_130, 500, 1, 1);
		bLocal_133 = false;
	}
	else
	{
		unk_0xDEE4F5F0B93BE664(uLocal_130, Var0);
		unk_0x889B4F9D52E23DEE(uLocal_130, uLocal_131, 500, 1, 1);
		bLocal_133 = true;
	}
}

Vector3 func_54(struct<3> Param0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var3 = { 0.3495f, -0.0276f, -0.0114f };
	Var0 = { Param0 - Var3 };
	return Var0;
}

void func_55(struct<3> Param0, bool bParam3, bool bParam4)
{
	struct<3> Var0;
	
	Var0 = { func_54(Param0) };
	if (bParam3)
	{
		unk_0xDEE4F5F0B93BE664(uLocal_130, Var0);
		unk_0x889B4F9D52E23DEE(uLocal_130, uLocal_129, 1500, 1, 1);
		unk_0xDD786B89B15AA63F(uLocal_129, 0);
		unk_0xDEE4F5F0B93BE664(uLocal_131, Var0);
		bLocal_133 = true;
	}
	else if (bParam4)
	{
		unk_0xDEE4F5F0B93BE664(uLocal_130, Var0);
		unk_0x889B4F9D52E23DEE(uLocal_130, uLocal_122, 2000, 1, 1);
		bLocal_133 = true;
	}
	else
	{
		if (bLocal_133)
		{
			unk_0x889B4F9D52E23DEE(uLocal_129, uLocal_130, 1500, 1, 1);
		}
		else
		{
			unk_0x889B4F9D52E23DEE(uLocal_129, uLocal_131, 1500, 1, 1);
		}
		unk_0xDD786B89B15AA63F(uLocal_130, 0);
	}
}

void func_56(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_90(iParam0) == 3)
	{
		return;
	}
	if (func_90(iParam0) == 4)
	{
		return;
	}
	func_57(func_90(iParam0), 1, iParam1, iParam2, 0);
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
		unk_0x61481F9FBB1C7EDD(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x076A5661EF5ABEE4(iVar1, iVar0, 1);
	}
}

int func_57(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_89();
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
					func_88(99, 1);
					func_87(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_87(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_87(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_71(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_68(5))
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
							func_87(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_87(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_87(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_68(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_87(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_87(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_87(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_87(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_87(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_87(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_87(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_87(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_87(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x1307D54181723A6E())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_87(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_87(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_87(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_87(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_87(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_87(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_68(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_87(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_87(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_87(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_87(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_87(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_87(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_67(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_88(95, iParam3);
					break;
				
				case 1:
					func_88(97, iParam3);
					break;
				
				case 2:
					func_88(96, iParam3);
					break;
			}
			func_88(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_60(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_60(bVar1);
	}
	iVar5 = (Global_60328[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60328[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60328[iVar2] = 2147483647;
				}
				else
				{
					Global_60328[iVar2] = (Global_60328[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_87(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_87(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_87(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60328[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60328[iVar2];
			Global_60328[iVar2] = (Global_60328[iVar2] - iParam3);
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
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113386.f_20564.f_233[iVar2 /*69*/]++;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_1++;
		if (Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_59(iParam0);
	if (Global_43052 == 15)
	{
		func_58(0);
	}
	return 1;
}

void func_58(bool bParam0)
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
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60336[iVar0 /*3*/][0] = Global_113386.f_20564[iVar0];
		Global_60336.f_31[iVar0 /*3*/][0] = Global_113386.f_20564.f_11[iVar0];
		Global_60336.f_62[iVar0 /*3*/][0] = Global_113386.f_20564.f_22[iVar0];
		Global_60336.f_93[iVar0 /*3*/][0] = Global_113386.f_20564.f_33[iVar0];
		Global_60336.f_124[iVar0 /*3*/][0] = Global_113386.f_20564.f_44[iVar0];
		Global_60336.f_155[iVar0 /*3*/][0] = Global_113386.f_20564.f_55[iVar0];
		Global_60336.f_186[iVar0 /*3*/][0] = Global_113386.f_20564.f_66[iVar0];
		Global_60336.f_217[iVar0 /*3*/][0] = Global_113386.f_20564.f_77[iVar0];
		Global_60336.f_248[iVar0 /*3*/][0] = Global_113386.f_20564.f_88[iVar0];
		if (!bParam0)
		{
			Global_60336[iVar0 /*3*/][1] = Global_113386.f_20564[iVar0];
			Global_60336.f_31[iVar0 /*3*/][1] = Global_113386.f_20564.f_11[iVar0];
			Global_60336.f_62[iVar0 /*3*/][1] = Global_113386.f_20564.f_22[iVar0];
			Global_60336.f_93[iVar0 /*3*/][1] = Global_113386.f_20564.f_33[iVar0];
			Global_60336.f_124[iVar0 /*3*/][1] = Global_113386.f_20564.f_44[iVar0];
			Global_60336.f_155[iVar0 /*3*/][1] = Global_113386.f_20564.f_55[iVar0];
			Global_60336.f_186[iVar0 /*3*/][1] = Global_113386.f_20564.f_66[iVar0];
			Global_60336.f_217[iVar0 /*3*/][1] = Global_113386.f_20564.f_77[iVar0];
			Global_60336.f_248[iVar0 /*3*/][1] = Global_113386.f_20564.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_59(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_60328[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x076A5661EF5ABEE4(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x076A5661EF5ABEE4(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x076A5661EF5ABEE4(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_60(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_66(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_66(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_66(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_66(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_63(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_63(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_63(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_63(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_63(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_63(8277, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x9315DBF7D972F07A())
	{
		if (BitTest(Global_113386.f_20564.f_471, bParam0))
		{
			bVar0 = true;
			unk_0xB0550BC91B0159D6(&(Global_113386.f_20564.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_62() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0xB0550BC91B0159D6(&(Global_113386.f_20564.f_471), bParam0);
		unk_0xB0550BC91B0159D6(&(Global_2359296[func_62() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x150D8F58B26E9F70("COUP_RED");
		unk_0x26C23BE14F66F202(func_61(bParam0));
		unk_0x3B81B9627E7885CF(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_61(bool bParam0)
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

int func_62()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_63(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_64(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

int func_64(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_65();
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

int func_65()
{
	return Global_1574918;
}

void func_66(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_65();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, iParam2);
}

void func_67(int iParam0)
{
	func_88(93, iParam0);
	func_88(29, iParam0);
	func_88(30, iParam0);
}

int func_68(int iParam0)
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
		return func_70(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_70(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_70(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_70(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x48352343BC5A41AE();
		iVar1 = func_69(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x48352343BC5A41AE();
		iVar3 = func_69(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x48352343BC5A41AE();
		iVar5 = func_69(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x48352343BC5A41AE();
		iVar7 = func_69(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x48352343BC5A41AE();
		iVar9 = func_69(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x48352343BC5A41AE();
		iVar11 = func_69(8277, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x9315DBF7D972F07A())
	{
		return BitTest(Global_113386.f_20564.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_62() /*5567*/].f_681.f_10, iParam0);
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_64(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_70(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_65();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, iParam1);
}

int func_71(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xDA4421F81DF4B90D(27))
	{
		return 0;
	}
	if (unk_0x61481F9FBB1C7EDD(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x61481F9FBB1C7EDD(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x61481F9FBB1C7EDD(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x61481F9FBB1C7EDD(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x076A5661EF5ABEE4(joaat("num_cash_spent"), iVar1, 1);
		func_86(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_72(27, 1);
	return 1;
}

int func_72(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_73(iParam0, iParam1);
}

int func_73(int iParam0, int iParam1)
{
	if (func_85(14) && !func_84(iParam0))
	{
		return 0;
	}
	if (unk_0xDA4421F81DF4B90D(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32209 != 0 && !Global_78319)
	{
		return 0;
	}
	if (func_83(&Global_4541529))
	{
		if (func_81(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_74(&Global_4541529, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xB8D77780DF8E1242(iParam0))
		{
			return 0;
		}
		if (unk_0xDA4421F81DF4B90D(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_74(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xDA4421F81DF4B90D(iParam1))
	{
		return 0;
	}
	if (func_85(14) && !func_84(iParam1))
	{
		return 0;
	}
	if (func_81(uParam0, iParam1))
	{
		return 0;
	}
	if (func_80(uParam0) < 0f)
	{
		func_79(uParam0, 0);
	}
	func_77(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_75(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_75(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xDA4421F81DF4B90D(iParam1))
	{
		return 0;
	}
	if (func_85(14) && !func_84(iParam1))
	{
		return 0;
	}
	if (func_81(uParam0, iParam1))
	{
		return 0;
	}
	if (func_80(uParam0) < 0f)
	{
		func_79(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_76(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_76(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_77(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_78(uParam0, iVar0);
		iVar0++;
	}
	func_79(uParam0, (Global_4541528 - 0.5f));
}

void func_78(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_79(var uParam0, float fParam1)
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

float func_80(var uParam0)
{
	return uParam0->f_80;
}

bool func_81(var uParam0, int iParam1)
{
	return func_82(uParam0, iParam1) != -1;
}

int func_82(var uParam0, int iParam1)
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

bool func_83(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_84(int iParam0)
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

bool func_85(int iParam0)
{
	return Global_43052 == iParam0;
}

int func_86(int iParam0, int iParam1)
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
	iVar0 = unk_0xE70CD2CDEE98DF14(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xEE587CFF91CF5EDA(iParam0, iParam1);
	}
	return 0;
}

void func_87(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x61481F9FBB1C7EDD(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x076A5661EF5ABEE4(iParam0, iVar0, 1);
}

void func_88(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/])
	{
		unk_0x61481F9FBB1C7EDD(Global_58896[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x076A5661EF5ABEE4(Global_58896[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_89()
{
	int iVar0;
	
	if (unk_0xAF5DBE95205A49D1())
	{
		unk_0x61481F9FBB1C7EDD(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_60328[0] == iVar0)
		{
			Global_60328[0] = iVar0;
		}
		unk_0x61481F9FBB1C7EDD(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_60328[1] == iVar0)
		{
			Global_60328[1] = iVar0;
		}
		unk_0x61481F9FBB1C7EDD(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_60328[2] == iVar0)
		{
			Global_60328[2] = iVar0;
		}
	}
}

int func_90(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_17;
}

int func_91()
{
	func_92();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_92()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_94(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_506(unk_0xE2D3D51028F0428A());
			if (func_93(iVar0) && (!func_85(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_93(Global_113386.f_2363.f_539.f_4321))
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

bool func_93(int iParam0)
{
	return iParam0 < 3;
}

int func_94(int iParam0)
{
	if (func_93(iParam0))
	{
		return func_95(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_95(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_96(var uParam0)
{
	if (uParam0->f_565 || uParam0->f_576 <= uParam0->f_562)
	{
		uParam0->f_565 = 0;
		uParam0->f_562 = (uParam0->f_576 - 1);
	}
}

void func_97(var uParam0, int iParam1)
{
	if (uParam0->f_4 != 0)
	{
		func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if ((((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0) || iParam1 == 1)
	{
		func_103(uParam0);
		func_102(uParam0);
		func_101(&Global_2101867);
	}
	if (Global_2097536.f_2708 != 0 || Global_2097536.f_3184)
	{
		func_99();
	}
	if (unk_0xA37204C64473B324("LEADERBOARD_SCENE"))
	{
		unk_0x0AF8D3A06BB92903("LEADERBOARD_SCENE");
	}
	if (unk_0x20E4972CBF3DBE1B())
	{
		func_98(&(Global_2103068.f_49));
	}
	Global_2815059.f_4032 = 0;
}

void func_98(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_99()
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_2097536[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_2097536.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_2097536.f_2708 = 0;
	Global_2097536.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_2097536.f_2710[iVar0] = 0;
		StringCopy(&(Global_2097536.f_2717[iVar0 /*6*/]), "", 24);
		Global_2097536.f_2754[iVar0] = 0;
		Global_2097536.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_2097536.f_2768 = 0;
	Global_2097536.f_2769 = 0;
	Global_2097536.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_2097536.f_2771[iVar0] = 0;
		Global_2097536.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_2097536.f_2779 = 0;
	func_100(&(Global_2097536.f_2780));
	func_98(&(Global_2097536.f_2823));
	Global_2097536.f_2825 = -1;
	Global_2097536.f_2826 = 0;
	func_98(&(Global_2097536.f_2827));
	Global_2097536.f_2829 = 0;
	func_98(&(Global_2097536.f_2830));
	Global_2097536.f_2832 = 0;
	Global_2097536.f_2780.f_28 = 0;
	Global_2097536.f_2780.f_27 = 0;
	Global_2097536.f_3184 = 0;
}

void func_100(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_101(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	iVar13 = 0;
	while (iVar13 < 12)
	{
		StringCopy(uParam0[iVar13 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar13 /*100*/])->f_16), "", 64);
		(uParam0[iVar13 /*100*/])->f_32 = { Var0 };
		(uParam0[iVar13 /*100*/])->f_45 = { Var0 };
		(uParam0[iVar13 /*100*/])->f_58 = 0;
		(uParam0[iVar13 /*100*/])->f_59 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			(uParam0[iVar13 /*100*/])->f_60[iVar14] = 0f;
			(uParam0[iVar13 /*100*/])->f_67[iVar14] = 0;
			iVar14++;
		}
		(uParam0[iVar13 /*100*/])->f_75 = 0;
		(uParam0[iVar13 /*100*/])->f_74 = 0;
		(uParam0[iVar13 /*100*/])->f_76 = 0;
		(uParam0[iVar13 /*100*/])->f_77 = 0;
		(uParam0[iVar13 /*100*/])->f_78 = 0;
		(uParam0[iVar13 /*100*/])->f_79 = 0;
		StringCopy(&((uParam0[iVar13 /*100*/])->f_80), "", 16);
		iVar13++;
	}
	func_98(&(Global_2097536.f_2830));
}

void func_102(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_98(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0 /*15*/] = -1;
		uParam0->f_246.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_246.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_103(var uParam0)
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

void func_104(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_2097152 = 0;
	func_98(&(Global_2097152.f_1));
	unk_0x25CFA7D8D16B29D0(*uParam2, uParam2->f_1, -1);
}

void func_105()
{
	struct<68> Var0;
	
	Global_2097157 = 0;
	Global_2097157.f_1 = 0;
	Global_2097157.f_2 = 0;
	Global_2097157.f_3 = 0;
	Global_2097157.f_4 = 0;
	func_107(&(Global_2097157.f_73));
	func_107(&(Global_2097157.f_142));
	func_107(&(Global_2097157.f_211));
	func_107(&(Global_2097157.f_280));
	StringCopy(&(Global_2097157.f_349), "", 24);
	StringCopy(&(Global_2097157.f_355), "", 24);
	func_106(&(Global_2097157.f_361));
	Global_2097157.f_374 = -1;
	Global_2097532 = 0;
	Global_2097533 = 0;
	Var0.f_2.f_1 = 4;
	Global_2097157.f_5 = { Var0 };
}

void func_106(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_107(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_108(var uParam0)
{
	func_48(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_109()
{
	unk_0xDD786B89B15AA63F(uLocal_126, 1);
}

int func_110(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_3(&(uParam0->f_666), 7))
	{
		if (!func_3(&(uParam0->f_666), 9))
		{
			func_39(1);
			func_121(&(uParam0->f_509), 0, 0, 1, 1);
			func_120(&(uParam0->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			if (!bParam2)
			{
				func_120(&(uParam0->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			}
			else
			{
				func_120(&(uParam0->f_509), "DARTS_REPLAY", 2, 216, 1, 1, 0);
			}
			if (iParam3 || !unk_0xC65B603E7942D0DB())
			{
				func_120(&(uParam0->f_509), "HUD_LBD_LBD", 2, 211, 1, 1, 0);
			}
			func_117(&(uParam0->f_509), 1);
			func_337(&(uParam0->f_666), 8, 0);
			func_337(&(uParam0->f_666), 9, 1);
		}
		if (!func_3(&(uParam0->f_666), 14))
		{
			if (bParam1)
			{
				if (!bParam2)
				{
					func_113(func_116(uParam0->f_668 < uParam0->f_669, uParam0->f_668, uParam0->f_669), func_115(uParam0->f_668 < uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
					func_113(func_116(uParam0->f_668 >= uParam0->f_669, uParam0->f_668, uParam0->f_669), func_115(uParam0->f_668 >= uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					func_113(uParam0->f_668, &(uParam0->f_648), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
				func_416(&(uParam0->f_57), 0, 0);
			}
			func_123(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
		}
		if (!unk_0xF1EC2C71FD1371B8())
		{
			if ((unk_0x320D1840B6DAA1CC() - uParam0->f_671) > 900)
			{
				if (unk_0x4C1B8C5717647539(2, 216))
				{
					unk_0x91DFC8F68F6D9B05(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_337(&(uParam0->f_666), 9, 0);
					return 1;
				}
				else if (unk_0xF09A4F413B0D30EB(2, 215))
				{
					unk_0x91DFC8F68F6D9B05(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_112();
					func_111();
					return 2;
				}
			}
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0x26009F50A14AD073(2, 201))
		{
			return 2;
		}
		else if (unk_0x26009F50A14AD073(2, 202))
		{
			func_337(&(uParam0->f_666), 9, 0);
			func_337(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_111()
{
	if (Global_2703735.f_2400[0 /*80*/].f_2 != 0)
	{
		Global_2703735.f_2400[0 /*80*/].f_2 = 5;
	}
}

void func_112()
{
	Global_32104 = 1;
}

void func_113(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	if (func_114(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_33(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_32(3, iVar0);
		Global_1649593.f_2839[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_2839.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_2839.f_183[iVar0] = iParam3;
		Global_1649593.f_2839.f_172[iVar0] = iParam2;
		Global_1649593.f_2839.f_205[iVar0] = iParam4;
		Global_1649593.f_2839.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1649593.f_2839.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1649593.f_2839.f_420[iVar0] = iParam7;
		Global_1649593.f_2839.f_453[iVar0] = iParam8;
		Global_1649593.f_2839.f_431[iVar0] = iParam9;
		Global_1649593.f_2839.f_442[iVar0] = iParam10;
		Global_1649593.f_2839.f_464[iVar0] = iParam11;
		Global_1649593.f_2839.f_475[iVar0] = iParam12;
		Global_1649593.f_2839.f_486[iVar0] = iParam13;
		Global_1649593.f_2839.f_497[iVar0] = iParam14;
	}
}

int func_114(var uParam0)
{
	if (unk_0xE8F6C1F695B25B91(uParam0))
	{
		return 1;
	}
	else if (unk_0x3C57C2F07FEE34D2(uParam0, "") || unk_0x3C57C2F07FEE34D2(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

char* func_115(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_116(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_117(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_119(&(uParam0->f_1), 1024);
	}
	else
	{
		func_118(&(uParam0->f_1), 1024);
	}
}

void func_118(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_119(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_120(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_121(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xD9EA500ADEAC231A("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_119(&(uParam0->f_1), 32);
	}
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		func_119(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0xD6D689B76F32F4AA(*uParam0, 1);
		}
	}
	if (unk_0x8FE9914D4872D601())
	{
		if (bParam3)
		{
			func_119(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_119(&(uParam0->f_1), 8192);
	}
}

int func_122(var uParam0)
{
	if ((BitTest(uParam0->f_42, 1) && Global_2097536.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_123(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	float fVar8;
	
	if (((unk_0xCB1EF1E7B77ADF4C() || unk_0xECD40FEF3CF43BDB()) || unk_0xA829C9A2767AC8EF()) || unk_0x6304243969F5A11A())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_126(uParam0))
	{
		return;
	}
	unk_0x33F5772842F16E82();
	unk_0x2E04B7B46A3670E5(iParam2);
	if (!func_125(uParam0->f_1, 256) || (func_125(uParam0->f_1, 8192) && unk_0xB1C1E679BD17A4F0(2)))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_CLEAR_SPACE");
		unk_0xCA5D23E5F0F0306F(fParam1);
		unk_0x6F06CF0E9AB02847();
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_MAX_WIDTH");
		unk_0xCA5D23E5F0F0306F(fParam5);
		unk_0x6F06CF0E9AB02847();
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x6F06CF0E9AB02847();
		if (unk_0x8FE9914D4872D601())
		{
			unk_0xEA5DEA46C3EE64D3(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD7D6BA6E36AEC182(func_125(uParam0->f_1, 4096));
			unk_0x6F06CF0E9AB02847();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0x3A76A0944BE2C291(2);
					break;
				
				case 2:
					bVar4 = !unk_0x3A76A0944BE2C291(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x4F47E317C74C543B(iVar5);
					iVar5++;
					bVar7 = false;
					while (bVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/].f_1;
						iVar2 = BitTest(uParam0->f_2[iVar6 /*15*/].f_13, bVar7);
						if (!BitTest(uParam0->f_2[iVar6 /*15*/].f_12, bVar7))
						{
							sVar3 = unk_0x2018949B2C9FD96A(iVar0, uVar1, iVar2);
						}
						else
						{
							sVar3 = unk_0x19214818F925D149(iVar0, iVar1, iVar2);
						}
						if (!unk_0xACC32B78196FBC2A(sVar3))
						{
							func_13(sVar3);
						}
						bVar7++;
					}
					if (!unk_0xACC32B78196FBC2A(uParam0->f_2[iVar6 /*15*/]))
					{
						func_12(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x8FE9914D4872D601())
					{
						if (func_125(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0xD7D6BA6E36AEC182(true);
								unk_0x4F47E317C74C543B(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0xD7D6BA6E36AEC182(false);
								unk_0x4F47E317C74C543B(-1);
							}
						}
					}
					unk_0x6F06CF0E9AB02847();
				}
			}
			iVar6++;
		}
		fVar8 = func_124(bParam4, func_124(func_125(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0xEA5DEA46C3EE64D3(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xCA5D23E5F0F0306F(fVar8);
		unk_0x6F06CF0E9AB02847();
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0xCA5D23E5F0F0306F(0f);
		unk_0xCA5D23E5F0F0306F(0f);
		unk_0xCA5D23E5F0F0306F(0f);
		unk_0xCA5D23E5F0F0306F(80f);
		unk_0x6F06CF0E9AB02847();
		func_119(&(uParam0->f_1), 256);
		func_118(&(uParam0->f_1), 128);
	}
	unk_0xC4353D240DCE9533(*uParam0, 255, 255, 255, 0, 0);
}

float func_124(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_125(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_126(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x0347CCBD719C8ADC(*uParam0))
		{
			func_119(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_127(var uParam0, var uParam1)
{
	func_128(uParam1, uParam0);
}

void func_128(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	var uVar2[3];
	int iVar6;
	bool bVar7;
	bool bVar8;
	char cVar9[64];
	char[] cVar25[8];
	int iVar27[3];
	int iVar31;
	struct<13> Var32;
	var uVar45;
	struct<3> Var51;
	struct<3> Var57;
	bool bVar63;
	
	func_209(&(Global_2103068.f_49), 1, 0);
	unk_0x19DD1C202B338DF3();
	func_208();
	func_41(0);
	unk_0xC43E67C9BA871ECB();
	func_206(1);
	unk_0xAC765EF46E85A446(10);
	func_205(1);
	func_204(1);
	if (!func_201())
	{
		if (!unk_0xA37204C64473B324("LEADERBOARD_SCENE"))
		{
			unk_0x66B27A59829491D3("LEADERBOARD_SCENE");
		}
	}
	if (!BitTest(uParam1->f_42, 3))
	{
		*uParam0 = func_200();
		unk_0xCED9E32812D6C7C7(&(uParam1->f_42), 3);
	}
	Var32 = { func_25(unk_0x9E2D6C50374FCFA9()) };
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		if (((!unk_0x5B66E9FB7530BB95() || !unk_0xC65B603E7942D0DB()) || (!unk_0x17C7C36F1FCE1AC2() && unk_0x74A0CF38086BFA4D())) || Global_2097536.f_2832 != 0)
		{
			if (!unk_0xC65B603E7942D0DB())
			{
				if (Global_2097536.f_2829 != 2)
				{
					unk_0xB0550BC91B0159D6(&(uParam1->f_42), true);
					Global_2097536.f_2829 = 2;
				}
			}
			else if (!unk_0x17C7C36F1FCE1AC2() && unk_0x74A0CF38086BFA4D())
			{
				if (Global_2097536.f_2829 != 3)
				{
					unk_0xB0550BC91B0159D6(&(uParam1->f_42), true);
					Global_2097536.f_2829 = 3;
				}
			}
			else if (!unk_0x5B66E9FB7530BB95())
			{
				if (Global_2097536.f_2829 != 4)
				{
					unk_0xB0550BC91B0159D6(&(uParam1->f_42), true);
					Global_2097536.f_2829 = 4;
				}
			}
			else if (Global_2097536.f_2832 != 0)
			{
				if (Global_2097536.f_2829 != 5)
				{
					unk_0xB0550BC91B0159D6(&(uParam1->f_42), true);
					Global_2097536.f_2829 = 5;
				}
			}
			if (!BitTest(uParam1->f_42, 1))
			{
				unk_0xEA5DEA46C3EE64D3(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0x6F06CF0E9AB02847();
				func_199(*uParam0, Global_2097536.f_2780);
				if (unk_0xE73671E3D37CF79E(&(Global_2097536.f_2780.f_1)))
				{
					if (!func_198(uParam1->f_44))
					{
						if (Global_2097536.f_2780.f_26 > 0)
						{
							cVar9 = { Global_2097536.f_2780.f_9 };
							func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar25, &cVar9, Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar25, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					else if (!Global_2097536.f_2780.f_27)
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
						if (Global_2097536.f_2780.f_26 > 0)
						{
							func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
						if (Global_2097536.f_2780.f_26 > 0)
						{
							func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					func_196(*uParam0, "SCLB_C_RANK", &(Global_2097536.f_2717), Global_2097536.f_2708);
				}
				iVar31 = 0;
				unk_0xCED9E32812D6C7C7(&iVar31, 4);
				func_195(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0xCED9E32812D6C7C7(&iVar31, 5);
				func_195(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0xCED9E32812D6C7C7(&iVar31, 6);
				func_195(*uParam0, &iVar6, iVar31, 1, 1);
				unk_0xCED9E32812D6C7C7(&(uParam1->f_42), 1);
				func_194(*uParam0);
				unk_0xB0550BC91B0159D6(&(uParam1->f_42), 2);
				unk_0x3410421C60BF7143(1);
			}
			else
			{
				func_194(*uParam0);
			}
		}
		else
		{
			if (Global_2097536.f_2829 != 1)
			{
				unk_0xB0550BC91B0159D6(&(uParam1->f_42), true);
				Global_2097536.f_2829 = 1;
			}
			if (!func_157(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				unk_0xB0550BC91B0159D6(&(uParam1->f_42), true);
				if (!BitTest(uParam1->f_42, 0))
				{
					unk_0xEA5DEA46C3EE64D3(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x6F06CF0E9AB02847();
					func_199(*uParam0, Global_2097536.f_2780);
					if (unk_0xE73671E3D37CF79E(&(Global_2097536.f_2780.f_1)))
					{
						if (!func_198(uParam1->f_44))
						{
							if (Global_2097536.f_2780.f_26 > 0)
							{
								cVar9 = { Global_2097536.f_2780.f_9 };
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar25, &cVar9, 1, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar25, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else if (!Global_2097536.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						func_196(*uParam0, "SCLB_C_RANK", &(Global_2097536.f_2717), Global_2097536.f_2708);
					}
					unk_0xCED9E32812D6C7C7(&(uParam1->f_42), 0);
					unk_0xB0550BC91B0159D6(&(uParam1->f_42), 2);
				}
				iVar6 = 0;
				iVar0 = 0;
				if (Global_2097536.f_2825 == -1)
				{
					StringCopy(&Var51, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							unk_0xCED9E32812D6C7C7(&iVar31, 4);
							func_195(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0xCED9E32812D6C7C7(&iVar31, 5);
							func_195(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0xCED9E32812D6C7C7(&iVar31, 6);
							func_195(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0xCED9E32812D6C7C7(&iVar31, 7);
						func_156(*uParam0, iVar6, iVar31, &Var51);
						iVar6++;
						iVar0++;
					}
					Global_2097536.f_2825 = 1;
					func_98(&(Global_2097536.f_2823));
				}
				else if (func_154(&(Global_2097536.f_2823), 300, 0))
				{
					StringCopy(&Var57, "SC_LB_DL", 24);
					StringIntConCat(&Var57, Global_2097536.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							unk_0xCED9E32812D6C7C7(&iVar31, 4);
							func_195(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0xCED9E32812D6C7C7(&iVar31, 5);
							func_195(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0xCED9E32812D6C7C7(&iVar31, 6);
							func_195(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0xCED9E32812D6C7C7(&iVar31, 7);
						func_156(*uParam0, iVar6, iVar31, &Var57);
						iVar6++;
						iVar0++;
					}
					Global_2097536.f_2825++;
					if (Global_2097536.f_2825 > 3)
					{
						Global_2097536.f_2825 = 0;
					}
					func_98(&(Global_2097536.f_2823));
				}
				func_194(*uParam0);
			}
			else
			{
				unk_0xB0550BC91B0159D6(&(uParam1->f_42), false);
				if (!BitTest(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					unk_0xEA5DEA46C3EE64D3(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x6F06CF0E9AB02847();
					func_199(*uParam0, Global_2097536.f_2780);
					if (unk_0xE73671E3D37CF79E(&(Global_2097536.f_2780.f_1)))
					{
						if (!func_198(uParam1->f_44))
						{
							if (Global_2097536.f_2780.f_26 > 0)
							{
								cVar9 = { Global_2097536.f_2780.f_9 };
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar25, &cVar9, 1, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar25, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else if (!Global_2097536.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_197(*uParam0, &(Global_2097536.f_2780.f_1), &cVar9, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						func_196(*uParam0, "SCLB_C_RANK", &(Global_2097536.f_2717), Global_2097536.f_2708);
					}
					if (!BitTest(uParam1->f_42, 6))
					{
						func_101(&Global_2101867);
						func_150(uParam1, &Global_2101867);
						func_149(uParam1, &Global_2101867);
					}
					iVar6 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_2097536.f_2704[0] > 1 || (Global_2097536.f_2704[0] > 0 && Global_2097536.f_2775[0] != -1)) || (((Global_2097536.f_2704[0] > 0 && Global_2097536.f_2780.f_27) && func_198(uParam1->f_44)) && Global_2097536.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar63 = false;
							if (Global_2101867[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar27[0])
								{
									iVar31 = 0;
									unk_0xCED9E32812D6C7C7(&iVar31, 4);
									func_195(*uParam0, &iVar6, iVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_2101867[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar27[1])
								{
									iVar31 = 0;
									unk_0xCED9E32812D6C7C7(&iVar31, 5);
									if ((Global_2097536.f_2704[1] < 1 && Global_2097536.f_2775[1] == -1) && !(((Global_2097536.f_2704[1] > 0 && Global_2097536.f_2780.f_27) && func_198(uParam1->f_44)) && Global_2097536.f_2775[1] != -1))
									{
										func_195(*uParam0, &iVar6, iVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										func_195(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[1] = 1;
								}
							}
							else if (Global_2101867[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar27[2])
								{
									iVar31 = 0;
									unk_0xCED9E32812D6C7C7(&iVar31, 6);
									if (!unk_0xCA8CDFE6F0F62C7F())
									{
										bVar63 = true;
									}
									else if (!unk_0x0F427066BF044759())
									{
										bVar63 = true;
									}
									if ((Global_2097536.f_2704[2] < 2 && Global_2097536.f_2775[2] == -1) && !(((Global_2097536.f_2704[2] > 0 && Global_2097536.f_2780.f_27) && func_198(uParam1->f_44)) && Global_2097536.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										func_195(*uParam0, &iVar6, iVar31, 1, 0);
									}
									else
									{
										func_195(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (func_148(Global_2101867[iVar0 /*100*/].f_32))
							{
								if (func_198(uParam1->f_44))
								{
									unk_0x9BF88C3ED22C5680(unk_0x9E2D6C50374FCFA9(), &uVar45);
									if (!Global_2101867[iVar0 /*100*/].f_74 && unk_0x3C57C2F07FEE34D2(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar45))
									{
										bVar63 = true;
									}
								}
								if (!bVar63)
								{
									iVar31 = 0;
									if (!Global_2097536.f_2780.f_27)
									{
										if (func_147(&(Global_2101867[iVar0 /*100*/].f_32), &Var32))
										{
											unk_0xCED9E32812D6C7C7(&iVar31, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar7 = true;
												uParam1->f_246.f_1 = iVar0;
												unk_0xCED9E32812D6C7C7(&iVar31, 3);
											}
										}
									}
									if (func_198(uParam1->f_44))
									{
										cVar9 = { Global_2101867[iVar0 /*100*/] };
										if (!unk_0xACC32B78196FBC2A(&(Global_2101867[iVar0 /*100*/].f_84)) && !unk_0x3C57C2F07FEE34D2(&(Global_2101867[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&cVar9, "/", 64);
											StringConCat(&cVar9, &(Global_2101867[iVar0 /*100*/].f_84), 64);
										}
										func_146(*uParam0, iVar6, iVar31, Global_2101867[iVar0 /*100*/].f_59, &cVar9, &(Global_2101867[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_2101867[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_146(*uParam0, iVar6, iVar31, Global_2101867[iVar0 /*100*/].f_59, &(Global_2101867[iVar0 /*100*/]), &(Global_2101867[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_2101867[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									bVar1 = false;
									while (bVar1 < Global_2097536.f_2708)
									{
										bVar8 = false;
										if (BitTest(Global_2097536.f_2770, bVar1))
										{
											if (BitTest(Global_2097536.f_2768, bVar1))
											{
												if (Global_2097536.f_2754[bVar1] == Global_2101867[iVar0 /*100*/].f_67[bVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_137(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_67[bVar1], 0, Global_2101867[iVar0 /*100*/].f_58);
											}
											else
											{
												func_137(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_67[bVar1], Global_2101867[iVar0 /*100*/].f_74, Global_2101867[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (BitTest(Global_2097536.f_2768, bVar1))
											{
												if (Global_2097536.f_2761[bVar1] == Global_2101867[iVar0 /*100*/].f_67[bVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_134(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_60[bVar1], 0);
											}
											else
											{
												func_134(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_60[bVar1], Global_2101867[iVar0 /*100*/].f_74);
											}
										}
										bVar1++;
									}
									func_133();
									uVar2[(Global_2101867[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_2101867[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_2101867[iVar0 /*100*/].f_59 > 2)
										{
											unk_0xCED9E32812D6C7C7(&iVar31, 2);
											unk_0xCED9E32812D6C7C7(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_132(*uParam0, (iVar6 - 1), iVar31);
										}
									}
									iVar6++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar31 = 0;
						unk_0xCED9E32812D6C7C7(&iVar31, 4);
						func_195(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0xCED9E32812D6C7C7(&iVar31, 5);
						func_195(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0xCED9E32812D6C7C7(&iVar31, 6);
						func_195(*uParam0, &iVar6, iVar31, 1, 0);
					}
					unk_0xCED9E32812D6C7C7(&(uParam1->f_42), 1);
					unk_0xB0550BC91B0159D6(&(uParam1->f_42), 2);
					func_194(*uParam0);
					unk_0x3410421C60BF7143(1);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_2097536.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							unk_0xCED9E32812D6C7C7(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_132(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_194(*uParam0);
					func_129(uParam0, uParam1);
				}
			}
		}
	}
}

void func_129(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iVar1 = uParam1->f_246.f_1;
	if (unk_0x3A76A0944BE2C291(2))
	{
		unk_0x60236500251FDE8E();
		unk_0x07899AAA5D680386(2, 239);
		unk_0x07899AAA5D680386(2, 240);
		unk_0x07899AAA5D680386(2, 237);
		unk_0x07899AAA5D680386(2, 238);
		unk_0x7653D561C9574763(2, 200, 1);
		if (unk_0x0DBA73788F6E3C5F(2, 241))
		{
			unk_0x9B3AE3991F75EF59(2, 188, 1f);
		}
		if (unk_0x0DBA73788F6E3C5F(2, 242))
		{
			unk_0x9B3AE3991F75EF59(2, 187, 1f);
		}
		if (unk_0x64A9DA79C6FA2378(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_246.f_187[0])
				{
					if (iVar3 <= (uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_246.f_1 != iVar3)
				{
					uParam1->f_246.f_1 = iVar3;
					unk_0x91DFC8F68F6D9B05(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					unk_0x9B3AE3991F75EF59(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0x3A76A0944BE2C291(2))
	{
		func_131(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!BitTest(uParam1->f_246, 0))
		{
			if ((unk_0x4C1B8C5717647539(2, 188) || unk_0x0DBA73788F6E3C5F(2, 188)) || iVar6 < -100)
			{
				unk_0x91DFC8F68F6D9B05(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				unk_0xCED9E32812D6C7C7(&(uParam1->f_246), 0);
				func_98(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_130(uParam1, 188))
		{
			unk_0xB0550BC91B0159D6(&(uParam1->f_246), false);
		}
		if (!BitTest(uParam1->f_246, 1))
		{
			if ((unk_0x4C1B8C5717647539(2, 187) || unk_0x0DBA73788F6E3C5F(2, 187)) || iVar6 > 100)
			{
				unk_0x91DFC8F68F6D9B05(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				unk_0xCED9E32812D6C7C7(&(uParam1->f_246), 1);
				func_98(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_130(uParam1, 187))
		{
			unk_0xB0550BC91B0159D6(&(uParam1->f_246), true);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_246.f_1 < 0)
		{
			uParam1->f_246.f_1 = (uParam1->f_246.f_2 - 1);
		}
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
		{
			uParam1->f_246.f_1 = 0;
		}
	}
	if (!BitTest(uParam1->f_246, 3))
	{
		if ((unk_0x4C1B8C5717647539(2, 204) || unk_0xF01464D7AF0B7347(2, 204)) || unk_0xF09A4F413B0D30EB(2, 237))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_246), 3);
			func_98(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_130(uParam1, 204))
	{
		unk_0xB0550BC91B0159D6(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0xB0550BC91B0159D6(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_132(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			unk_0xCED9E32812D6C7C7(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_132(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			unk_0xB0550BC91B0159D6(&(uParam1->f_42), 2);
		}
		if (func_148(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!BitTest(uParam1->f_246, 2))
			{
				if (unk_0x4C1B8C5717647539(2, 217) || unk_0xF01464D7AF0B7347(2, 217))
				{
					if (!unk_0xDFA2E5162727D6D2())
					{
						unk_0x91DFC8F68F6D9B05(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						unk_0xCED9E32812D6C7C7(&(uParam1->f_246), 2);
						unk_0x396CBC3B89746A9D(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0x4C1B8C5717647539(2, 217))
			{
				unk_0xB0550BC91B0159D6(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_130(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_131(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0x4C1B8C5717647539(2, iParam1) && !unk_0x0DBA73788F6E3C5F(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_154(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0x4C1B8C5717647539(2, iParam1) && !unk_0x0DBA73788F6E3C5F(2, iParam1)) || func_154(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_131(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x664C0A1BF5E133FA(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x664C0A1BF5E133FA(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x664C0A1BF5E133FA(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x664C0A1BF5E133FA(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x159F9B5A2920DF4E(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x159F9B5A2920DF4E(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x159F9B5A2920DF4E(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x159F9B5A2920DF4E(2, 221) * 127f));
		}
	}
}

void func_132(var uParam0, int iParam1, int iParam2)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, "SET_SLOT_STATE");
	unk_0x4F47E317C74C543B(iParam1);
	unk_0x4F47E317C74C543B(iParam2);
	unk_0x6F06CF0E9AB02847();
}

void func_133()
{
	unk_0x6F06CF0E9AB02847();
}

void func_134(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, bool bParam43, float fParam44, bool bParam45)
{
	switch (Param0.f_29[bParam43])
	{
		case 4:
			if (bParam45)
			{
				unk_0x4ADC8B166E139423("NUMBER");
				unk_0x957E514A6E999374(fParam44, 2);
				unk_0xD1D4F8D5470AFA4C();
			}
			else
			{
				unk_0x4ADC8B166E139423("SC_LB_EMPTY");
				unk_0xD1D4F8D5470AFA4C();
			}
			break;
		
		case 12:
			if (bParam45)
			{
				unk_0x4ADC8B166E139423("NUMBER");
				unk_0x2AE954BA77A66307(unk_0xF34EE736CF047844(fParam44));
				unk_0xD1D4F8D5470AFA4C();
			}
			else
			{
				unk_0x4ADC8B166E139423("SC_LB_EMPTY");
				unk_0xD1D4F8D5470AFA4C();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam45)
			{
				if (Param0.f_29[bParam43] == 18 || Param0.f_29[bParam43] == 20)
				{
					fParam44 = (fParam44 * -1f);
				}
				if (!unk_0x70350E94345B6F7B())
				{
					if (Param0.f_29[bParam43] == 19 || Param0.f_29[bParam43] == 20)
					{
						fParam44 = func_136(fParam44);
					}
					else
					{
						fParam44 = func_135(fParam44);
					}
				}
				unk_0x4ADC8B166E139423("NUMBER");
				unk_0x957E514A6E999374(fParam44, 2);
				unk_0xD1D4F8D5470AFA4C();
			}
			else
			{
				unk_0x4ADC8B166E139423("SC_LB_EMPTY");
				unk_0xD1D4F8D5470AFA4C();
			}
			break;
		
		case 0:
			break;
	}
}

float func_135(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_136(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_137(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, bool bParam43, int iParam44, bool bParam45, bool bParam46)
{
	struct<4> Var0;
	
	if (iParam44 == 2147483647 || iParam44 == -2147483647)
	{
		bParam45 = false;
	}
	StringCopy(&Var0, "", 16);
	switch (Param0.f_29[bParam43])
	{
		case 5:
			if (bParam45)
			{
				unk_0x4ADC8B166E139423("NUMBER");
				unk_0x2AE954BA77A66307(iParam44);
				unk_0xD1D4F8D5470AFA4C();
			}
			else
			{
				unk_0x4ADC8B166E139423("SC_LB_EMPTY");
				unk_0xD1D4F8D5470AFA4C();
			}
			break;
		
		case 7:
			if (bParam45)
			{
				unk_0x4ADC8B166E139423("NUMBER");
				unk_0x2AE954BA77A66307(-iParam44);
				unk_0xD1D4F8D5470AFA4C();
			}
			else
			{
				unk_0x4ADC8B166E139423("SC_LB_EMPTY");
				unk_0xD1D4F8D5470AFA4C();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam45)
			{
				if (Param0.f_29[bParam43] == 11 && iParam44 < 0)
				{
					iParam44 = (iParam44 * -1);
				}
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x4ADC8B166E139423("STRING");
					unk_0x28594D0D61DB1278(iParam44, 14);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (Param0.f_29[bParam43] == 9)
				{
					unk_0x4ADC8B166E139423("STRING");
					unk_0x28594D0D61DB1278(iParam44, 6);
					unk_0xD1D4F8D5470AFA4C();
				}
				else
				{
					unk_0x4ADC8B166E139423("STRING");
					unk_0x28594D0D61DB1278(iParam44, 2055);
					unk_0xD1D4F8D5470AFA4C();
				}
			}
			else
			{
				unk_0x4ADC8B166E139423("SC_LB_EMPTY");
				unk_0xD1D4F8D5470AFA4C();
			}
			break;
		
		case 6:
			if (bParam45)
			{
				if (iParam44 == 2147483647)
				{
					unk_0x4ADC8B166E139423("SC_LB_EMPTY");
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x4ADC8B166E139423("STRING");
					unk_0x28594D0D61DB1278(iParam44, 14);
					unk_0xD1D4F8D5470AFA4C();
				}
				else
				{
					unk_0x4ADC8B166E139423("STRING");
					unk_0x28594D0D61DB1278(iParam44, 2055);
					unk_0xD1D4F8D5470AFA4C();
				}
			}
			else
			{
				unk_0x4ADC8B166E139423("SC_LB_EMPTY");
				unk_0xD1D4F8D5470AFA4C();
			}
			break;
		
		case 2:
		case 10:
			if (bParam45)
			{
				iParam44 = (iParam44 * -1);
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x4ADC8B166E139423("STRING");
					unk_0x28594D0D61DB1278(iParam44, 14);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (Param0.f_29[bParam43] == 10)
				{
					unk_0x4ADC8B166E139423("STRING");
					unk_0x28594D0D61DB1278(iParam44, 6);
					unk_0xD1D4F8D5470AFA4C();
				}
				else
				{
					unk_0x4ADC8B166E139423("STRING");
					unk_0x28594D0D61DB1278(iParam44, 2055);
					unk_0xD1D4F8D5470AFA4C();
				}
			}
			else
			{
				unk_0x4ADC8B166E139423("SC_LB_EMPTY");
				unk_0xD1D4F8D5470AFA4C();
			}
			break;
		
		case 3:
			if (bParam46)
			{
				if (unk_0x51046EEE00E2BBDA(iParam44))
				{
					unk_0x4ADC8B166E139423("SCLB_VEH_CUST");
					unk_0x26C23BE14F66F202(unk_0x01E2429B82E280E6(iParam44));
					unk_0xD1D4F8D5470AFA4C();
				}
				else
				{
					unk_0x4ADC8B166E139423("SC_LB_EMPTY");
					unk_0xD1D4F8D5470AFA4C();
				}
			}
			else if (unk_0x51046EEE00E2BBDA(iParam44))
			{
				unk_0x4ADC8B166E139423(unk_0x01E2429B82E280E6(iParam44));
				unk_0xD1D4F8D5470AFA4C();
			}
			else
			{
				unk_0x4ADC8B166E139423("SC_LB_EMPTY");
				unk_0xD1D4F8D5470AFA4C();
			}
			break;
		
		case 8:
			if (func_145(iParam44) != 0)
			{
				unk_0x4ADC8B166E139423(func_142(func_145(iParam44), 0));
				unk_0xD1D4F8D5470AFA4C();
			}
			else
			{
				unk_0x4ADC8B166E139423("SC_LB_EMPTY");
				unk_0xD1D4F8D5470AFA4C();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam45)
			{
				if (Param0.f_29[bParam43] == 14 || Param0.f_29[bParam43] == 16)
				{
					iParam44 = (iParam44 * -1);
				}
				if (!unk_0x70350E94345B6F7B())
				{
					if (Param0.f_29[bParam43] == 15 || Param0.f_29[bParam43] == 16)
					{
						iParam44 = unk_0xF34EE736CF047844(func_136(unk_0xBBDA792448DB5A89(iParam44)));
					}
					else
					{
						iParam44 = unk_0xF34EE736CF047844(func_135(unk_0xBBDA792448DB5A89(iParam44)));
					}
				}
				unk_0x4ADC8B166E139423("NUMBER");
				unk_0x2AE954BA77A66307(iParam44);
				unk_0xD1D4F8D5470AFA4C();
			}
			else
			{
				unk_0x4ADC8B166E139423("SC_LB_EMPTY");
				unk_0xD1D4F8D5470AFA4C();
			}
			break;
		
		case 21:
			if (iParam44 > 20)
			{
				unk_0x4ADC8B166E139423("SC_LB_EMPTY");
				unk_0xD1D4F8D5470AFA4C();
			}
			else
			{
				Var0 = { func_141(iParam44) };
				unk_0x4ADC8B166E139423(&Var0);
				unk_0xD1D4F8D5470AFA4C();
			}
			break;
		
		case 22:
			if (bParam45)
			{
				unk_0x4ADC8B166E139423("NUMBER");
				unk_0x2AE954BA77A66307(func_138(iParam44));
				unk_0xD1D4F8D5470AFA4C();
			}
			else
			{
				unk_0x4ADC8B166E139423("SC_LB_EMPTY");
				unk_0xD1D4F8D5470AFA4C();
			}
			break;
		
		case 0:
			break;
	}
}

int func_138(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	
	iVar0 = func_140(199);
	if (iParam0 < 100)
	{
		return 1;
	}
	else if (iParam0 > iVar0)
	{
		fVar1 = (unk_0xBBDA792448DB5A89(iParam0) - unk_0xBBDA792448DB5A89(iVar0));
		iVar2 = unk_0xF34EE736CF047844((fVar1 / unk_0xBBDA792448DB5A89(Global_262145.f_31077)));
		return (199 + iVar2);
	}
	fVar3 = (unk_0xBBDA792448DB5A89(Global_262145.f_31076) / 2f);
	fVar4 = (-(fVar3 * 3f) + fVar3);
	fVar5 = fVar3;
	fVar6 = ((-(fVar3 * 3f) + fVar4) + 100f);
	fVar7 = ((-3f * fVar4) - 100f);
	fVar7 = (IntToFloat(iParam0) - fVar7);
	return unk_0xF34EE736CF047844(func_139(-fVar5, -fVar6, fVar7, 1));
}

float func_139(float fParam0, float fParam1, float fParam2, bool bParam3)
{
	if (bParam3)
	{
		return ((-fParam1 - unk_0x71D93B57D07F9804(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
	}
	return ((-fParam1 + unk_0x71D93B57D07F9804(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
}

int func_140(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = (unk_0xBBDA792448DB5A89(Global_262145.f_31076) / 2f);
	return unk_0xF2DB717A73826179((((fVar0 * 100f) - 100f) + ((fVar0 - 3f) * ((fVar1 * (fVar0 - 3f)) + fVar1))));
}

struct<4> func_141(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "ARENA_C_SL", 16);
	if (iParam0 > 20)
	{
		StringCopy(&Var0, "**INVALID**", 16);
		return Var0;
	}
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

char* func_142(int iParam0, bool bParam1)
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case joaat("weapon_autoshotgun"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case joaat("weapon_battleaxe"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case joaat("weapon_compactlauncher"):
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case joaat("weapon_minismg"):
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case joaat("weapon_pipebomb"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case joaat("weapon_poolcue"):
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case joaat("weapon_wrench"):
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case joaat("weapon_pistol_mk2"):
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case joaat("weapon_doubleaction"):
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case joaat("weapon_stone_hatchet"):
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case joaat("weapon_raypistol"):
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case joaat("weapon_raycarbine"):
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case joaat("weapon_rayminigun"):
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		
		case joaat("weapon_navyrevolver"):
			if (bParam1)
			{
				return "WTU_REV_NV";
			}
			else
			{
				return "WT_REV_NV";
			}
			break;
		
		case joaat("weapon_ceramicpistol"):
			if (bParam1)
			{
				return "WTU_CERPST";
			}
			else
			{
				return "WT_CERPST";
			}
			break;
		
		case joaat("weapon_gadgetpistol"):
			if (bParam1)
			{
				return "WTU_GDGTPST";
			}
			else
			{
				return "WT_GDGTPST";
			}
			break;
		
		case joaat("weapon_militaryrifle"):
			if (bParam1)
			{
				return "WTU_MLTRYRFL";
			}
			else
			{
				return "WT_MLTRYRFL";
			}
			break;
		
		case joaat("weapon_combatshotgun"):
			if (bParam1)
			{
				return "WTU_CMBSHGN";
			}
			else
			{
				return "WT_CMBSHGN";
			}
			break;
		
		case joaat("vehicle_weapon_turret_dinghy5_50cal"):
			if (bParam1)
			{
				return "WTU_VEH_DINGHY_50C";
			}
			else
			{
				return "WTU_VEH_DINGHY_50C";
			}
			break;
		
		case joaat("weapon_fertilizercan"):
			if (bParam1)
			{
				return "WTU_FERTCAN";
			}
			else
			{
				return "WT_FERTCAN";
			}
			break;
		
		case joaat("weapon_heavyrifle"):
			if (bParam1)
			{
				return "WTU_HEAVYRIFLE";
			}
			else
			{
				return "WT_HEAVYRIFLE";
			}
			break;
		
		case joaat("weapon_emplauncher"):
			if (bParam1)
			{
				return "WTU_EMPL";
			}
			else
			{
				return "WT_EMPL";
			}
			break;
		
		case joaat("weapon_stungun_mp"):
			if (bParam1)
			{
				return "WTU_STNGUNMP";
			}
			else
			{
				return "WT_STNGUNMP";
			}
			break;
		
		case joaat("weapon_tacticalrifle"):
			if (bParam1)
			{
				return "WTU_TACRIFLE";
			}
			else
			{
				return "WT_TACRIFLE";
			}
			break;
		
		case joaat("weapon_precisionrifle"):
			if (bParam1)
			{
				return "WTU_PRCSRIFLE";
			}
			else
			{
				return "WT_PRCSRIFLE";
			}
			break;
		
		case joaat("weapon_bzgas"):
			if (bParam1)
			{
				return "WTU_BZGAS";
			}
			else
			{
				return "WTU_BZGAS";
			}
			break;
		
		case joaat("weapon_stinger"):
			if (bParam1)
			{
				return "WTU_STINGER";
			}
			else
			{
				return "WTU_STINGER";
			}
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			if (bParam1)
			{
				return "WTU_GR_LAUN_SM";
			}
			else
			{
				return "WTU_GR_LAUN_SM";
			}
			break;
		
		default:
			if (func_144(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_143(&(Var0.f_31));
				}
				else
				{
					return func_143(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_143(var uParam0)
{
	return uParam0;
}

int func_144(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x501053EBAB36DB66();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x4CD88D794E108BEC(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_145(int iParam0)
{
	if (iParam0 == 600)
	{
		return joaat("weapon_railgun");
	}
	else if (iParam0 == 500)
	{
		return joaat("weapon_minigun");
	}
	else if (iParam0 == 400)
	{
		return joaat("weapon_mg");
	}
	else if (iParam0 == 401)
	{
		return joaat("weapon_combatmg");
	}
	else if (iParam0 == 402)
	{
		return -572349828;
	}
	else if (iParam0 == 300)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (iParam0 == 301)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 302)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (iParam0 == 303)
	{
		return joaat("weapon_heavyrifle");
	}
	else if (iParam0 == 200)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (iParam0 == 201)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (iParam0 == 202)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (iParam0 == 203)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (iParam0 == 100)
	{
		return joaat("weapon_microsmg");
	}
	else if (iParam0 == 101)
	{
		return joaat("weapon_smg");
	}
	else if (iParam0 == 102)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (iParam0 == 0)
	{
		return joaat("weapon_pistol");
	}
	else if (iParam0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iParam0 == 2)
	{
		return joaat("weapon_appistol");
	}
	else if (iParam0 == 3)
	{
		return joaat("weapon_pistol50");
	}
	return 0;
}

void func_146(var uParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, char* sParam5)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, "SET_SLOT");
	unk_0x4F47E317C74C543B(iParam1);
	unk_0x4F47E317C74C543B(iParam2);
	if (iParam3 > 0)
	{
		unk_0x4ADC8B166E139423("NUMBER");
		unk_0x2AE954BA77A66307(iParam3);
		unk_0xD1D4F8D5470AFA4C();
	}
	else
	{
		unk_0x4ADC8B166E139423("SC_LB_EMPTY");
		unk_0xD1D4F8D5470AFA4C();
	}
	unk_0x341872E4D54CD053(cParam4);
	unk_0x341872E4D54CD053(uParam5);
}

int func_147(var uParam0, var uParam1)
{
	if (!func_148(*uParam0))
	{
		return 0;
	}
	if (!func_148(*uParam1))
	{
		return 0;
	}
	if (unk_0x3665714316BA3ABC(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_148(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x66237ABAFDF8615A(&uParam0, 13);
}

void func_149(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar77;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!BitTest(uParam0->f_42, 5) && !BitTest(uParam0->f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_75 != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_75 < (uParam1[iVar0 /*100*/])->f_75)
						{
							uVar77 = (uParam1[iVar1 /*100*/])->f_75;
							(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
							(uParam1[iVar0 /*100*/])->f_75 = uVar77;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_75 == (uParam1[iVar0 /*100*/])->f_75)
						{
							if ((uParam1[iVar1 /*100*/])->f_59 != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_59 < (uParam1[iVar0 /*100*/])->f_59 || (uParam1[iVar0 /*100*/])->f_59 == -1)
								{
									uVar77 = (uParam1[iVar1 /*100*/])->f_75;
									(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
									(uParam1[iVar0 /*100*/])->f_75 = uVar77;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_150(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!BitTest(uParam0->f_42, 5) && !BitTest(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_153(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_153(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_153(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_151(uParam1);
	}
}

void func_151(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_2097536.f_2704[iVar0] = 0;
		Global_2097536.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_25(unk_0x9E2D6C50374FCFA9()) };
	if (unk_0x8B36C5E1084B91EC(Global_2097536.f_2826))
	{
		iVar16 = unk_0xE02EE9AF4474E243(Global_2097536.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar16)
		{
			if (iVar0 < 12)
			{
				func_152(&Global_2101737);
				iVar2 = 0;
				unk_0x8DE5CBDB548619A2(Global_2097536.f_2826, iVar0, &Global_2101737);
				*(uParam0[iVar0 /*100*/]) = { Global_2101737.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_2101737.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_2101737.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_2101737.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_2101737.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_2101737.f_60;
				Global_2097536.f_2708 = Global_2101737.f_62;
				Global_2097536.f_2769 = Global_2101737.f_63;
				iVar2 = 0;
				if (BitTest(Global_2101737.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (BitTest(Global_2101737.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (BitTest(Global_2101737.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_2097536.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (BitTest(Global_2101737.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_147(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_2097536.f_2775[(iVar2 - 1)] = 0;
					}
				}
				bVar1 = false;
				while (bVar1 < Global_2101737.f_62)
				{
					if (BitTest(Global_2101737.f_63, bVar1))
					{
						(uParam0[iVar0 /*100*/])->f_67[bVar1] = Global_2101737.f_97[bVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_60[bVar1] = Global_2101737.f_64[bVar1];
					}
					bVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_152(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_17), "", 64);
	uParam0->f_33 = { Var0 };
	uParam0->f_46 = { Var0 };
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	iVar13 = 0;
	while (iVar13 < 32)
	{
		uParam0->f_64[iVar13] = 0f;
		uParam0->f_97[iVar13] = 0;
		iVar13++;
	}
}

int func_153(var uParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_2097536[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][0 /*75*/] };
			Global_2101680[iParam3 /*16*/] = { Global_2097536[iParam3 /*901*/][0 /*75*/] };
			Global_2101680.f_49[iParam3] = Global_2097536[iParam3 /*901*/][0 /*75*/].f_67[Global_2097536.f_2779];
			Global_2101680.f_53[iParam3] = Global_2097536[iParam3 /*901*/][0 /*75*/].f_60[Global_2097536.f_2779];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_2097536.f_2775[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][Global_2097536.f_2775[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_2097536.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], unk_0x61042CA2A97BBB69(unk_0x9E2D6C50374FCFA9()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_25(unk_0x9E2D6C50374FCFA9()) };
				(uParam0[iParam1 /*100*/])->f_59 = -1;
				(uParam0[iParam1 /*100*/])->f_67[0] = -1;
				(uParam0[iParam1 /*100*/])->f_67[1] = -1;
				(uParam0[iParam1 /*100*/])->f_67[2] = -1;
				(uParam0[iParam1 /*100*/])->f_67[3] = -1;
				(uParam0[iParam1 /*100*/])->f_60[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_2097536.f_2775[iParam3] - iVar0) >= 1)
		{
			if (Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] - iVar0) /*75*/].f_59 > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0xBBDA792448DB5A89((*uParam2 / 2)));
		if ((Global_2097536.f_2775[iParam3] + iVar0) < 12 && (Global_2097536.f_2775[iParam3] + iVar0) > 0)
		{
			if (Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] + iVar0) /*75*/].f_59 > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

int func_154(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_155(uParam0, bParam2, 0);
	if (unk_0x9315DBF7D972F07A() && !bParam2)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_155(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x9315DBF7D972F07A() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				*uParam0 = unk_0xE75390F3CA208D5E();
			}
		}
		else
		{
			*uParam0 = unk_0x320D1840B6DAA1CC();
		}
		uParam0->f_1 = 1;
	}
}

void func_156(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0xCED9E32812D6C7C7(&iParam2, 7);
	unk_0xEA5DEA46C3EE64D3(uParam0, "SET_SLOT");
	unk_0x4F47E317C74C543B(iParam1);
	unk_0x4F47E317C74C543B(iParam2);
	unk_0x4ADC8B166E139423(sParam3);
	unk_0x50BA5780E068A6BD();
	unk_0x6F06CF0E9AB02847();
}

int func_157(var uParam0)
{
	if (!Global_2097532)
	{
		if (!func_193(&(Global_2097536.f_2827)))
		{
			func_155(&(Global_2097536.f_2827), 1, 0);
			return 0;
		}
		else if (!func_154(&(Global_2097536.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0x5B66E9FB7530BB95() || !unk_0xC65B603E7942D0DB()) || (!unk_0x17C7C36F1FCE1AC2() && unk_0x74A0CF38086BFA4D())) || Global_2097536.f_2832 != 0)
	{
		unk_0xB0550BC91B0159D6(&(uParam0->f_42), 4);
		return 1;
	}
	if (!BitTest(uParam0->f_42, 4))
	{
		func_192(uParam0);
		unk_0xCED9E32812D6C7C7(&(uParam0->f_42), 4);
		return 0;
	}
	else if (BitTest(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_190(uParam0))
	{
		return 0;
	}
	if (!func_188(uParam0))
	{
		return 0;
	}
	if (!func_175(uParam0))
	{
		return 0;
	}
	if (!BitTest(uParam0->f_42, 6))
	{
		func_101(&Global_2101867);
		func_150(uParam0, &Global_2101867);
		func_149(uParam0, &Global_2101867);
		unk_0xCED9E32812D6C7C7(&(uParam0->f_42), 6);
	}
	if (!BitTest(uParam0->f_42, 7))
	{
		if (!func_193(&(Global_2097536.f_2830)))
		{
			func_155(&(Global_2097536.f_2830), 1, 0);
		}
		else if (func_154(&(Global_2097536.f_2830), 30000, 1))
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_42), 7);
		}
		if (func_172(&Global_2101867))
		{
		}
		else
		{
			return 0;
		}
		if (func_169(&Global_2101867))
		{
		}
		else
		{
			return 0;
		}
		if (func_162(&Global_2101867))
		{
			func_158(&Global_2101867);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_42), 7);
			func_158(&Global_2101867);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_158(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = func_161(Global_2097536.f_2826);
	if (Global_2100721.f_81[iVar2] != 0)
	{
		func_160(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_152(&Global_2101737);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_2101737 = Global_2097536.f_2826;
			Global_2101737.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0x3C57C2F07FEE34D2(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_2101737.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_2101737.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_2101737.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_148((uParam0[iVar0 /*100*/])->f_45))
			{
				Global_2101737.f_46 = { (uParam0[iVar0 /*100*/])->f_45 };
			}
			else
			{
				Global_2101737.f_46 = { (uParam0[iVar0 /*100*/])->f_32 };
			}
			Global_2101737.f_59 = (uParam0[iVar0 /*100*/])->f_58;
			Global_2101737.f_60 = (uParam0[iVar0 /*100*/])->f_59;
			Global_2101737.f_62 = Global_2097536.f_2708;
			Global_2101737.f_63 = Global_2097536.f_2770;
			if ((uParam0[iVar0 /*100*/])->f_74)
			{
				unk_0xCED9E32812D6C7C7(&(Global_2101737.f_61), 0);
			}
			else
			{
				unk_0xB0550BC91B0159D6(&(Global_2101737.f_61), false);
			}
			unk_0xCED9E32812D6C7C7(&(Global_2101737.f_61), (uParam0[iVar0 /*100*/])->f_75);
			bVar1 = false;
			while (bVar1 < Global_2101737.f_62)
			{
				if (BitTest(Global_2101737.f_63, bVar1))
				{
					Global_2101737.f_97[bVar1] = (uParam0[iVar0 /*100*/])->f_67[bVar1];
				}
				else
				{
					Global_2101737.f_64[bVar1] = (uParam0[iVar0 /*100*/])->f_60[bVar1];
				}
				bVar1++;
			}
			Global_2100721.f_81[iVar2] = Global_2097536.f_2826;
			unk_0x513637D173B51A91(&Global_2101737);
		}
		iVar0++;
	}
	Global_2100721.f_87[iVar2 /*3*/] = { func_159(unk_0x9E2D6C50374FCFA9()) };
}

Vector3 func_159(int iParam0)
{
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(iParam0), 0);
}

void func_160(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (unk_0x8B36C5E1084B91EC(Global_2100721.f_81[iParam1]))
		{
			unk_0x0C2CC1B63AA0B36C(Global_2100721.f_81[iParam1]);
		}
		Global_2100721.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (unk_0x8B36C5E1084B91EC(iParam0))
		{
			unk_0x0C2CC1B63AA0B36C(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_2100721.f_81[iVar0] == iParam0)
			{
				Global_2100721.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2100721.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2100721.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (unk_0x8B36C5E1084B91EC(Global_2100721.f_81[iVar0]))
		{
			iVar3 = unk_0xCD72499771F7A0DA(Global_2100721.f_81[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_162(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_168(uParam0);
			if ((func_167() || func_166()) && !unk_0x818F829545200020(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_148((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_165(&((uParam0[iVar0 /*100*/])->f_32), &Global_2103169))
					{
						Global_2103169[Global_2103169.f_206 /*13*/] = { (uParam0[iVar0 /*100*/])->f_32 };
						Global_2103169.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_2103169.f_206 > 0)
			{
				(uParam0[0 /*100*/])->f_76 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_76 = 3;
			}
			break;
		
		case 1:
			if (func_163(&((uParam0[1 /*100*/])->f_76), &(Global_2103169.f_206), &Global_2103169, &(Global_2103169.f_157)))
			{
				(uParam0[0 /*100*/])->f_76 = 2;
			}
			break;
		
		case 2:
			if (Global_2103169.f_206 > 12)
			{
				Global_2103169.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_2103169.f_206)
				{
					if (func_148((uParam0[iVar0 /*100*/])->f_32) && func_148(Global_2103169[iVar1 /*13*/]))
					{
						if (unk_0x3665714316BA3ABC(&((uParam0[iVar0 /*100*/])->f_32), &(Global_2103169[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_80 = { Global_2103169.f_157[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_76 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_163(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar35;
	
	switch (*uParam0)
	{
		case 0:
			if (unk_0xA0D4159BB7CA57E7())
			{
			}
			else
			{
				unk_0x0FA854F129D64245();
				unk_0xB3FD534ED90BC3EA(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0xA0D4159BB7CA57E7())
			{
				if (unk_0x7A6139E192A01FC6())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar35 = 0;
			while (iVar35 < *uParam1)
			{
				if (unk_0x711A9EE5BAF70932(uParam2[iVar35 /*13*/], &uVar0))
				{
					func_164(&uVar0, uParam3[iVar35 /*4*/]);
				}
				iVar35++;
			}
			if (unk_0xA0D4159BB7CA57E7())
			{
				unk_0x827A9C646775BB87();
			}
			else
			{
				unk_0x0FA854F129D64245();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_164(var uParam0, var uParam1)
{
	unk_0xAF42AF0C81B996D0(uParam0, 35, uParam1);
}

int func_165(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_148(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0x3665714316BA3ABC(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_166()
{
	return (unk_0x3EBD3AF4E5D7A08C() || unk_0xC545AB1CF97ABB34());
}

bool func_167()
{
	return (unk_0xA7384DAD7CF469DA() || unk_0x807ABE1AB65C24D2());
}

void func_168(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_106(&(Global_2103169[iVar0 /*13*/]));
		StringCopy(&(Global_2103169.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!unk_0xA0D4159BB7CA57E7())
		{
			unk_0x0FA854F129D64245();
		}
	}
	if (unk_0xA0D4159BB7CA57E7())
	{
		unk_0x827A9C646775BB87();
	}
	Global_2103169.f_206 = 0;
}

int func_169(var uParam0)
{
	int iVar0;
	
	if (unk_0x8FE9914D4872D601())
	{
		return 1;
	}
	else if (func_166() || func_167())
	{
		if (!func_171(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_170(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_170(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_148(*uParam1))
			{
				if (!unk_0x20CD75CDFAF71FD3(uParam1))
				{
					if (func_166() || func_167())
					{
						if (unk_0x5F0A7B7235C6ABED(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0xDFC67688F9088B45())
					{
						if (unk_0x5F0A7B7235C6ABED(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0x84A4C35DF8AB2EDF(uParam1), 64);
						if (unk_0x527312C0DF85960A())
						{
						}
						else if (func_167())
						{
						}
						else if (unk_0x8FE9914D4872D601())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0x61042CA2A97BBB69(unk_0xF6D95AC799EC5CE4(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x20CD75CDFAF71FD3(uParam1))
			{
				if (!unk_0x1C80838DC24F06D0())
				{
					if (unk_0x38D0EB5A1B7E5EF3())
					{
						StringCopy(sParam2, unk_0x84A4C35DF8AB2EDF(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0x61042CA2A97BBB69(unk_0xF6D95AC799EC5CE4(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_171(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_166() && !func_167())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_78 == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_78)
	{
		case 0:
			Global_2097536.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_2097536.f_2833[iVar1 /*16*/]), "", 64);
				func_106(&(Global_2097536.f_3026[iVar1 /*13*/]));
				if (func_148((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_2097536.f_3026[Global_2097536.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_2097536.f_3183++;
				}
				iVar1++;
			}
			if (Global_2097536.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = unk_0x750877EFC42C7771(&(Global_2097536.f_3026), Global_2097536.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xED9701B5BB864FE4((uParam0[0 /*100*/])->f_79, &(Global_2097536.f_2833), Global_2097536.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_148((uParam0[iVar1 /*100*/])->f_32))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_2097536.f_2833[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_79 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_172(var uParam0)
{
	int iVar0;
	
	if (func_166() || func_167())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_174(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_2097536.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_173(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_173(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xACC32B78196FBC2A(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xA996E10B1ECDA45E(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_148(Var0))
			{
				if (!unk_0x20CD75CDFAF71FD3(&Var0))
				{
					if ((unk_0xDFC67688F9088B45() || func_166()) || func_167())
					{
						if (unk_0x5F0A7B7235C6ABED(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0x84A4C35DF8AB2EDF(&Var0), 64);
						if (unk_0x527312C0DF85960A())
						{
						}
						else if (func_167())
						{
						}
						else if (unk_0x8FE9914D4872D601())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0x61042CA2A97BBB69(unk_0xF6D95AC799EC5CE4(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x20CD75CDFAF71FD3(&Var0))
			{
				if (!unk_0x1C80838DC24F06D0())
				{
					if (unk_0x38D0EB5A1B7E5EF3())
					{
						StringCopy(sParam17, unk_0x84A4C35DF8AB2EDF(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0x61042CA2A97BBB69(unk_0xF6D95AC799EC5CE4(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_174(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!func_166() && !func_167())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xACC32B78196FBC2A(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xA996E10B1ECDA45E(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_148(Var1[0 /*13*/]))
			{
				if (!unk_0x20CD75CDFAF71FD3(&(Var1[0 /*13*/])))
				{
					*uParam4 = unk_0x750877EFC42C7771(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0x61042CA2A97BBB69(unk_0xF6D95AC799EC5CE4(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xED9701B5BB864FE4(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_175(var uParam0)
{
	struct<97> Var0;
	struct<6> Var98;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	bool bVar112;
	int iVar113;
	bool bVar114;
	int iVar115;
	struct<13> Var116;
	
	Var0.f_19.f_1 = 4;
	iVar109 = -1;
	iVar113 = 2;
	Var116 = { func_25(unk_0x9E2D6C50374FCFA9()) };
	switch ((*uParam0)[iVar113])
	{
		case 0:
			Global_2097536.f_2775[iVar113] = -1;
			Global_2097536.f_2704[iVar113] = 0;
			Global_2097157.f_374 = -1;
			if (unk_0xF453DE81BDFDAE6F())
			{
				if (unk_0x8C992447292D600F(&Var116))
				{
					if (unk_0x4FFBF2C0D8249E45(&(uParam0->f_7), 35, &Var116))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
						(*uParam0)[iVar113] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar113] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar113] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_44.f_1 = 3;
			Var98.f_0 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_186(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var116, func_187(), 0, 0, 0))
			{
				func_185(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x581496CFF543462F(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar111 = 0;
						iVar106 = 0;
						if (func_187())
						{
							iVar111 = 0;
							while (iVar111 < Var98.f_3)
							{
								unk_0x1EA20D6FD50C44E7(iVar111, &Var0);
								if (Global_2097157.f_374 < 0)
								{
									if (func_147(&Var0, &Var116) || func_147(&Var0, &(Global_2097157.f_361)))
									{
										Global_2097157.f_374 = Var0.f_96;
									}
								}
								if (iVar109 < 0)
								{
									if (BitTest(Global_2097157.f_142.f_2, 0))
									{
										if (Global_2097157.f_211.f_36[0] >= unk_0x76C271030AC81113(iVar111, 0))
										{
											iVar109 = iVar111;
										}
									}
									else if (Global_2097157.f_211.f_3[0] >= unk_0x015A67958E8477F3(iVar111, 0))
									{
										iVar109 = iVar111;
									}
								}
								func_184(&Var0);
								iVar111++;
							}
							if (iVar109 < 0)
							{
								iVar109 = Var98.f_3;
							}
						}
						iVar111 = 0;
						unk_0x1EA20D6FD50C44E7(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_2097536.f_2704[iVar113] < 11)
							{
								if (func_187() && iVar109 == 0)
								{
									func_183(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), Var0.f_96);
									Global_2097536.f_2775[iVar113] = 0;
									Global_2097536.f_2704[iVar113]++;
								}
								if (func_187() && (func_147(&Var0, &Var116) || func_147(&Var0, &(Global_2097157.f_361))))
								{
								}
								else
								{
									if (func_147(&Var0, &Var116))
									{
										iVar109 = 0;
										Global_2097536.f_2775[iVar113] = 0;
									}
									MemCopy(&(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_32 = { Var0 };
									Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									if (func_182(uParam0->f_44))
									{
										iVar108 = unk_0x76C271030AC81113(0, Global_2097536.f_2709);
										if (iVar108 == 1)
										{
											Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_198(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar107]))
										{
											Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_67[iVar107] = unk_0x76C271030AC81113(0, Global_2097536.f_2710[iVar107]);
										}
										else
										{
											Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_60[iVar107] = unk_0x015A67958E8477F3(0, Global_2097536.f_2710[iVar107]);
										}
										iVar107++;
									}
									Global_2097536.f_2704[iVar113]++;
								}
								bVar112 = true;
							}
						}
						if (!bVar112)
						{
							Global_2097536.f_2704[iVar113]++;
						}
						if (!func_187())
						{
							iVar109 = Var98.f_5;
						}
						if (iVar109 > 6)
						{
							iVar110 = (iVar109 - 6);
						}
						else if (bVar112)
						{
							iVar110 = 1;
						}
						else
						{
							iVar110 = 0;
						}
						iVar111 = iVar110;
						func_184(&Var0);
						iVar111 = iVar110;
						while (iVar111 <= (Var98.f_3 - 1))
						{
							unk_0x1EA20D6FD50C44E7(iVar111, &Var0);
							if (Global_2097536.f_2704[iVar113] < 11 && Var0.f_96 > 1)
							{
								if (func_187() && iVar109 == iVar111)
								{
									if (!func_147(&(Global_2097536[iVar113 /*901*/][0 /*75*/].f_32), &Var116))
									{
										func_183(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_2097536.f_2775[iVar113] = Global_2097536.f_2704[iVar113];
										Global_2097536.f_2704[iVar113]++;
									}
								}
								if (func_187() && (func_147(&Var0, &Var116) || func_147(&Var0, &(Global_2097157.f_361))))
								{
								}
								else if (Global_2097536.f_2704[iVar113] < 11)
								{
									if (func_148(Var0) && !func_147(&Var0, &(Global_2097536[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_147(&Var0, &Var116))
										{
											if (Global_2097536.f_2775[iVar113] < 0)
											{
												Global_2097536.f_2775[iVar113] = Global_2097536.f_2704[iVar113];
											}
										}
										MemCopy(&(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
										Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_32 = { Var0 };
										Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
										Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_74 = 1;
										if (func_182(uParam0->f_44))
										{
											iVar108 = unk_0x76C271030AC81113(iVar111, Global_2097536.f_2709);
											if (iVar108 == 1)
											{
												Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_58 = 0;
											}
										}
										if (func_198(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										iVar106 = 0;
										while (iVar106 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar106]))
											{
												Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_67[iVar106] = unk_0x76C271030AC81113(iVar111, Global_2097536.f_2710[iVar106]);
											}
											else
											{
												Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_60[iVar106] = unk_0x015A67958E8477F3(iVar111, Global_2097536.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_2097536.f_2704[iVar113]++;
									}
								}
							}
							func_184(&Var0);
							iVar111++;
						}
						unk_0x6CCDE78D9C553A24();
						func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar112)
						{
							if (Global_2097536.f_2775[iVar113] == -1 && func_187())
							{
								if (Global_2097536.f_2704[iVar113] >= 1)
								{
									func_183(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), Global_2097536[iVar113 /*901*/][(Global_2097536.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_183(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), 1);
								}
								Global_2097536.f_2775[iVar113] = Global_2097536.f_2704[iVar113];
								Global_2097536.f_2704[iVar113]++;
							}
							(*uParam0)[iVar113] = 3;
						}
						else
						{
							(*uParam0)[iVar113] = 2;
						}
					}
					else
					{
						if (!bVar112)
						{
							Global_2097536.f_2704[iVar113]++;
						}
						unk_0x6CCDE78D9C553A24();
						func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2775[iVar113] = -1;
						(*uParam0)[iVar113] = 2;
					}
				}
				else
				{
					func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_2097536.f_2775[iVar113] = -1;
					(*uParam0)[iVar113] = 2;
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2832), iVar113);
				}
			}
			break;
		
		case 2:
			if (Global_2097536.f_2775[iVar113] == -1)
			{
				iVar115 = 11;
			}
			else
			{
				iVar115 = 1;
			}
			uParam0->f_44.f_1 = 3;
			Var98.f_0 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_177(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar115))
			{
				func_185(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x581496CFF543462F(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar106 = 0;
						while (iVar106 < Var98.f_3)
						{
							unk_0x1EA20D6FD50C44E7(iVar106, &Var0);
							bVar114 = false;
							if (Global_2097536[iVar113 /*901*/][0 /*75*/].f_59 > 1 || Global_2097536[iVar113 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar114 = true;
							}
							if (Global_2097536.f_2704[iVar113] < 11 || bVar114)
							{
								if (func_187() && (func_147(&Var0, &Var116) || func_147(&Var0, &(Global_2097157.f_361))))
								{
								}
								else if (iVar106 == 0 || bVar114)
								{
									MemCopy(&(Global_2097536[iVar113 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_2097536[iVar113 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_2097536[iVar113 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_182(uParam0->f_44))
									{
										iVar108 = unk_0x76C271030AC81113(0, Global_2097536.f_2709);
										if (iVar108 == 1)
										{
											Global_2097536[iVar113 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[iVar113 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_198(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[iVar113 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[iVar113 /*901*/][0 /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar107]))
										{
											Global_2097536[iVar113 /*901*/][0 /*75*/].f_67[iVar107] = unk_0x76C271030AC81113(0, Global_2097536.f_2710[iVar107]);
										}
										else
										{
											Global_2097536[iVar113 /*901*/][0 /*75*/].f_60[iVar107] = unk_0x015A67958E8477F3(0, Global_2097536.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (Global_2097536.f_2704[iVar113] == 0)
									{
										if (bVar114)
										{
										}
										else
										{
											Global_2097536.f_2704[iVar113]++;
										}
									}
								}
								else if (Global_2097536.f_2704[iVar113] < 11)
								{
									MemCopy(&(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_32 = { Var0 };
									if (func_182(uParam0->f_44))
									{
										iVar108 = unk_0x76C271030AC81113(iVar106, Global_2097536.f_2709);
										if (iVar108 == 1)
										{
											Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_198(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar107]))
										{
											Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_67[iVar107] = unk_0x76C271030AC81113(iVar106, Global_2097536.f_2710[iVar107]);
										}
										else
										{
											Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_60[iVar107] = unk_0x015A67958E8477F3(iVar106, Global_2097536.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (iVar106 != 0)
									{
										Global_2097536.f_2704[iVar113]++;
									}
								}
							}
							func_184(&Var0);
							iVar106++;
						}
					}
					unk_0x6CCDE78D9C553A24();
					func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar113] = 3;
				}
				else
				{
					unk_0x6CCDE78D9C553A24();
					func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2832), iVar113);
					Global_2097536.f_2704[iVar113] = 0;
					(*uParam0)[iVar113] = 3;
				}
				if (Global_2097536.f_2775[iVar113] == -1 && func_187())
				{
					if (Global_2097536.f_2704[iVar113] >= 1)
					{
						func_183(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), Global_2097536[iVar113 /*901*/][(Global_2097536.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_183(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), 1);
					}
					Global_2097536.f_2775[iVar113] = Global_2097536.f_2704[iVar113];
					Global_2097536.f_2704[iVar113]++;
				}
			}
			break;
		
		case 3:
			func_176(iVar113, Global_2097157.f_374);
			(*uParam0)[iVar113] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_176(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_187() && Global_2097536.f_2704[iParam0] > Global_2097536.f_2775[iParam0]) && Global_2097536.f_2775[iParam0] >= 0)
	{
		if (iParam1 != Global_2097536[iParam0 /*901*/][Global_2097536.f_2775[iParam0] /*75*/].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_2097536.f_2704[iParam0])
			{
				if (iVar0 != Global_2097536.f_2775[iParam0])
				{
					if (Global_2097536[iParam0 /*901*/][iVar0 /*75*/].f_59 >= Global_2097536[iParam0 /*901*/][Global_2097536.f_2775[iParam0] /*75*/].f_59)
					{
						if (Global_2097536[iParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1 == -1)
						{
							Global_2097536[iParam0 /*901*/][iVar0 /*75*/].f_59++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_187())
		{
		}
		if (Global_2097536.f_2704[iParam0] <= Global_2097536.f_2775[iParam0])
		{
		}
		if (Global_2097536.f_2775[iParam0] < 0)
		{
		}
	}
}

int func_177(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_180() && !func_179())
			{
				func_178(*uParam2);
				if (unk_0xDA3444DE6C78D480(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x589034697689CC35(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x4A37499E7C2832D2(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_178(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	Global_2097152 = 1;
	func_209(&(Global_2097152.f_1), 1, 0);
	Global_2097152.f_3 = Param0.f_0;
	Global_2097152.f_4 = Param0.f_1;
}

int func_179()
{
	if (unk_0xF1EC2C71FD1371B8() && !func_201())
	{
		return 1;
	}
	return 0;
}

int func_180()
{
	if (unk_0xC15645989AF376B8() || Global_2097152)
	{
		func_181();
		return 1;
	}
	return 0;
}

void func_181()
{
	if (func_154(&(Global_2097152.f_1), 120000, 1))
	{
		unk_0x25CFA7D8D16B29D0(Global_2097152.f_3, Global_2097152.f_4, -1);
		Global_2097152 = 0;
		func_98(&(Global_2097152.f_1));
	}
}

int func_182(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_183(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_198(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_2097157.f_355}, 16);
		sParam1->f_32 = { Global_2097157.f_361 };
		MemCopy(&(sParam1->f_16), {Global_2097157.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0x61042CA2A97BBB69(unk_0x9E2D6C50374FCFA9()), 64);
		sParam1->f_32 = { func_25(unk_0x9E2D6C50374FCFA9()) };
	}
	sParam1->f_59 = iParam2;
	if (func_182(uParam0->f_44))
	{
		iVar0 = Global_2097157.f_211.f_36[Global_2097536.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_2097536.f_2708)
	{
		if (BitTest(Global_2097157.f_142.f_2, Global_2097536.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_2097157.f_211.f_36[Global_2097536.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_2097157.f_211.f_3[Global_2097536.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_184(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	StringCopy(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_85 = 0;
	StringCopy(&(uParam0->f_86), "", 32);
	StringCopy(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
}

void func_185(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_186(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2097157.f_211.f_36[0];
	uVar1 = Global_2097157.f_211.f_3[0];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_180() && !func_179())
			{
				func_178(*uParam2);
				if (bParam5)
				{
					if (BitTest(Global_2097157.f_142.f_2, 0))
					{
						if (unk_0xACE795925470090F(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0x493E419F7EEB0A5A(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0x0AFCB24DEEBBD31A(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x589034697689CC35(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x4A37499E7C2832D2(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_187()
{
	if (Global_2097532 && Global_2097533)
	{
		return 1;
	}
	return 0;
}

int func_188(var uParam0)
{
	struct<20> Var0;
	struct<6> Var98;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	bool bVar112;
	int iVar113;
	struct<13> Var114;
	
	Var0.f_19.f_1 = 4;
	iVar108 = -1;
	iVar113 = 1;
	Var114 = { func_25(unk_0x9E2D6C50374FCFA9()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar107 = unk_0xB9B7C1BEADFB5967();
			Global_2097536.f_2775[1] = -1;
			Global_2097157.f_374 = -1;
			Global_2097536.f_2704[iVar113] = 0;
			if (iVar107 > 0)
			{
				if (func_187())
				{
					bVar112 = false;
				}
				else
				{
					bVar112 = true;
				}
				if (func_189(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar112, 0, 100))
				{
					func_185(&Var98, &(uParam0->f_44));
					if (uParam0->f_5 && unk_0x581496CFF543462F(&Var98))
					{
						if (func_187())
						{
							iVar110 = 0;
							iVar110 = 0;
							while (iVar110 < Var98.f_3)
							{
								if (iVar108 < 0)
								{
									unk_0x1EA20D6FD50C44E7(iVar110, &Var0);
									if (func_198(uParam0->f_44))
									{
										if (Global_2097157.f_374 < 0)
										{
											if (func_147(&Var0, &(Global_2097157.f_361)))
											{
												Global_2097157.f_374 = Var0.f_96;
											}
										}
									}
									if (BitTest(Global_2097157.f_142.f_2, 0))
									{
										if (Global_2097157.f_211.f_36[0] >= unk_0x76C271030AC81113(iVar110, 0))
										{
											iVar108 = iVar110;
										}
									}
									else if (Global_2097157.f_211.f_3[0] >= unk_0x015A67958E8477F3(iVar110, 0))
									{
										iVar108 = iVar110;
									}
									func_184(&Var0);
								}
								iVar110++;
							}
							if (iVar108 < 0)
							{
								iVar108 = Var98.f_3;
							}
						}
						iVar110 = 0;
						if (func_187() && iVar108 == 0)
						{
							if (Global_2097536.f_2704[iVar113] < 11)
							{
								func_183(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), 1);
								Global_2097536.f_2775[iVar113] = 0;
								Global_2097536.f_2704[iVar113]++;
							}
						}
						if (Var98.f_3 > 0)
						{
							unk_0x1EA20D6FD50C44E7(0, &Var0);
							if (func_187() && (func_147(&Var0, &Var114) || func_147(&Var0, &(Global_2097157.f_361))))
							{
							}
							else if (func_148(Var0) && Global_2097536.f_2704[iVar113] < 11)
							{
								if (func_147(&Var0, &Var114))
								{
									iVar108 = 0;
									Global_2097536.f_2775[1] = 0;
								}
								MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
								Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_32 = { Var0 };
								Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_59 = 1;
								if (func_182(uParam0->f_44))
								{
									iVar111 = unk_0x76C271030AC81113(0, Global_2097536.f_2709);
									if (iVar111 == 1)
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_58 = 1;
									}
									else
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_58 = 0;
									}
								}
								if (func_198(uParam0->f_44))
								{
									MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_74 = 1;
								iVar106 = 0;
								while (iVar106 < Global_2097536.f_2708)
								{
									if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar106]))
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_67[iVar106] = unk_0x76C271030AC81113(0, Global_2097536.f_2710[iVar106]);
									}
									else
									{
										Global_2097536[1 /*901*/][Global_2097536.f_2704[iVar113] /*75*/].f_60[iVar106] = unk_0x015A67958E8477F3(0, Global_2097536.f_2710[iVar106]);
									}
									iVar106++;
								}
								Global_2097536.f_2704[1]++;
							}
							else
							{
								func_184(&Var0);
								unk_0x6CCDE78D9C553A24();
								func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_2097536.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_2097536.f_2775[iVar113] == -1 && func_187())
								{
									if (Global_2097536.f_2704[iVar113] >= 1)
									{
										func_183(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), Global_2097536[iVar113 /*901*/][(Global_2097536.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_183(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), 1);
									}
									Global_2097536.f_2775[iVar113] = Global_2097536.f_2704[iVar113];
									Global_2097536.f_2704[iVar113]++;
								}
								return 0;
							}
							func_184(&Var0);
						}
						else
						{
							Global_2097536.f_2704[1] = 0;
							func_184(&Var0);
							unk_0x6CCDE78D9C553A24();
							func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_2097536.f_2775[iVar113] == -1 && func_187())
							{
								if (Global_2097536.f_2704[iVar113] >= 1)
								{
									func_183(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), Global_2097536[iVar113 /*901*/][(Global_2097536.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_183(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), 1);
								}
								Global_2097536.f_2775[iVar113] = Global_2097536.f_2704[iVar113];
								Global_2097536.f_2704[iVar113]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_187())
						{
							iVar108 = Var98.f_5;
						}
						if (iVar108 > 6)
						{
							iVar109 = (iVar108 - 6);
						}
						else
						{
							iVar109 = 1;
						}
						iVar110 = iVar109;
						iVar110 = iVar109;
						while (iVar110 <= (Var98.f_3 - 1))
						{
							unk_0x1EA20D6FD50C44E7(iVar110, &Var0);
							if (Global_2097536.f_2704[iVar113] < 11 && Var0.f_96 > 1)
							{
								if (func_187() && iVar108 == iVar110)
								{
									if (!func_147(&(Global_2097536[iVar113 /*901*/][0 /*75*/].f_32), &Var114))
									{
										func_183(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_2097536.f_2775[iVar113] = Global_2097536.f_2704[iVar113];
										Global_2097536.f_2704[iVar113]++;
									}
								}
								if (func_187() && (func_147(&Var0, &Var114) || func_147(&Var0, &(Global_2097157.f_361))))
								{
								}
								else if (Global_2097536.f_2704[1] < 12)
								{
									if (func_148(Var0) && !func_147(&Var0, &(Global_2097536[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_147(&Var0, &Var114))
										{
											if (Global_2097536.f_2775[1] < 0)
											{
												Global_2097536.f_2775[1] = Global_2097536.f_2704[1];
											}
										}
										MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/]), {Var0.f_13}, 16);
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_32 = { Var0 };
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_74 = 1;
										if (func_182(uParam0->f_44))
										{
											iVar111 = unk_0x76C271030AC81113(iVar110, Global_2097536.f_2709);
											if (iVar111 == 1)
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_198(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										while (iVar106 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar106]))
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_67[iVar106] = unk_0x76C271030AC81113(iVar110, Global_2097536.f_2710[iVar106]);
											}
											else
											{
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_60[iVar106] = unk_0x015A67958E8477F3(iVar110, Global_2097536.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_2097536.f_2704[1]++;
									}
								}
							}
							func_184(&Var0);
							iVar110++;
						}
						unk_0x6CCDE78D9C553A24();
						func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_2097536.f_2775[iVar113] == -1 && func_187())
						{
							if (Global_2097536.f_2704[iVar113] >= 1)
							{
								func_183(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), Global_2097536[iVar113 /*901*/][(Global_2097536.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_183(uParam0, &(Global_2097536[iVar113 /*901*/][Global_2097536.f_2704[iVar113] /*75*/]), 1);
							}
							Global_2097536.f_2775[iVar113] = Global_2097536.f_2704[iVar113];
							Global_2097536.f_2704[iVar113]++;
						}
						return 0;
					}
					else
					{
						func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_2097536.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_176(iVar113, Global_2097157.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_189(var uParam0, var uParam1, var* uParam2, var* uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_180() && !func_179())
			{
				func_178(*uParam2);
				if (unk_0x918B101666F9CB83(uParam2, uParam3, iParam4, bParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x589034697689CC35(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x4A37499E7C2832D2(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_190(var uParam0)
{
	struct<13> Var0;
	struct<97> Var13;
	struct<6> Var111;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	bool bVar125;
	int iVar126;
	bool bVar127;
	int iVar128;
	
	Var13.f_19.f_1 = 4;
	iVar122 = -1;
	iVar126 = 0;
	Var0 = { func_25(unk_0x9E2D6C50374FCFA9()) };
	switch ((*uParam0)[iVar126])
	{
		case 0:
			Global_2097536.f_2775[iVar126] = -1;
			Global_2097536.f_2704[iVar126] = 0;
			Global_2097157.f_374 = -1;
			Global_2097533 = 0;
			if (func_191(uParam0->f_44))
			{
				if (!Global_2097533)
				{
					Global_2097533 = 1;
				}
			}
			else if (Global_2097533)
			{
				Global_2097533 = 0;
			}
			if (!Global_2097533)
			{
			}
			if (func_186(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_187(), 0, 0, 0))
			{
				func_185(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x581496CFF543462F(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar124 = 0;
						iVar119 = 0;
						if (func_187())
						{
							iVar124 = 0;
							while (iVar124 < Var111.f_3)
							{
								unk_0x1EA20D6FD50C44E7(iVar124, &Var13);
								if (Global_2097157.f_374 < 0)
								{
									if (func_147(&Var13, &Var0) || func_147(&Var13, &(Global_2097157.f_361)))
									{
										Global_2097157.f_374 = Var13.f_96;
									}
								}
								if (iVar122 < 0)
								{
									if (BitTest(Global_2097157.f_142.f_2, 0))
									{
										if (Global_2097157.f_211.f_36[0] >= unk_0x76C271030AC81113(iVar124, 0))
										{
											iVar122 = iVar124;
										}
									}
									else if (Global_2097157.f_211.f_3[0] >= unk_0x015A67958E8477F3(iVar124, 0))
									{
										iVar122 = iVar124;
									}
								}
								func_184(&Var13);
								iVar124++;
							}
							if (iVar122 < 0)
							{
								iVar122 = Var111.f_3;
							}
						}
						iVar124 = 0;
						unk_0x1EA20D6FD50C44E7(0, &Var13);
						if (Var13.f_96 <= 1)
						{
							if (Global_2097536.f_2704[iVar126] < 11)
							{
								if (func_187() && iVar122 == 0)
								{
									func_183(uParam0, &(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/]), Var13.f_96);
									Global_2097536.f_2775[iVar126] = 0;
									Global_2097536.f_2704[iVar126]++;
								}
								if (func_187() && (func_147(&Var13, &Var0) || func_147(&Var13, &(Global_2097157.f_361))))
								{
								}
								else
								{
									if (func_147(&Var13, &Var0))
									{
										iVar122 = 0;
										Global_2097536.f_2775[iVar126] = 0;
									}
									MemCopy(&(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
									Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_32 = { Var13 };
									Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
									if (func_182(uParam0->f_44))
									{
										iVar121 = unk_0x76C271030AC81113(0, Global_2097536.f_2709);
										if (iVar121 == 1)
										{
											Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_58 = 1;
										}
										else
										{
											Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_58 = 0;
										}
									}
									if (func_198(uParam0->f_44))
									{
										MemCopy(&(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_74 = 1;
									iVar119 = 0;
									while (iVar119 < Global_2097536.f_2708)
									{
										if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar119]))
										{
											Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_67[iVar119] = unk_0x76C271030AC81113(0, Global_2097536.f_2710[iVar119]);
										}
										else
										{
											Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_60[iVar119] = unk_0x015A67958E8477F3(0, Global_2097536.f_2710[iVar119]);
										}
										iVar119++;
									}
									Global_2097536.f_2704[iVar126]++;
								}
								bVar125 = true;
							}
						}
						if (!bVar125)
						{
							Global_2097536.f_2704[iVar126]++;
						}
						if (!func_187())
						{
							iVar122 = Var111.f_5;
						}
						if (iVar122 > 6)
						{
							iVar123 = (iVar122 - 6);
						}
						else if (bVar125)
						{
							iVar123 = 1;
						}
						else
						{
							iVar123 = 0;
						}
						iVar124 = iVar123;
						func_184(&Var13);
						iVar124 = iVar123;
						while (iVar124 <= (Var111.f_3 - 1))
						{
							unk_0x1EA20D6FD50C44E7(iVar124, &Var13);
							if (Global_2097536.f_2704[iVar126] < 11 && Var13.f_96 > 1)
							{
								if (func_187() && iVar122 == iVar124)
								{
									if (!func_147(&(Global_2097536[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										func_183(uParam0, &(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/]), Var13.f_96);
										Global_2097536.f_2775[iVar126] = Global_2097536.f_2704[iVar126];
										Global_2097536.f_2704[iVar126]++;
									}
								}
								if (func_187() && (func_147(&Var13, &Var0) || func_147(&Var13, &(Global_2097157.f_361))))
								{
								}
								else if (Global_2097536.f_2704[iVar126] < 11)
								{
									if (func_148(Var13) && !func_147(&(Global_2097536[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										if (func_147(&Var13, &Var0))
										{
											if (Global_2097536.f_2775[iVar126] < 0)
											{
												Global_2097536.f_2775[iVar126] = Global_2097536.f_2704[iVar126];
											}
										}
										MemCopy(&(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
										Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_32 = { Var13 };
										Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_74 = 1;
										if (func_182(uParam0->f_44))
										{
											iVar121 = unk_0x76C271030AC81113(iVar124, Global_2097536.f_2709);
											if (iVar121 == 1)
											{
												Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_198(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar119 = 0;
										iVar119 = 0;
										while (iVar119 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar119]))
											{
												Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_67[iVar119] = unk_0x76C271030AC81113(iVar124, Global_2097536.f_2710[iVar119]);
											}
											else
											{
												Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_60[iVar119] = unk_0x015A67958E8477F3(iVar124, Global_2097536.f_2710[iVar119]);
											}
											iVar119++;
										}
										Global_2097536.f_2704[iVar126]++;
									}
								}
							}
							func_184(&Var13);
							iVar124++;
						}
						unk_0x6CCDE78D9C553A24();
						func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar125)
						{
							if (Global_2097536.f_2775[iVar126] == -1 && func_187())
							{
								if (Global_2097536.f_2704[iVar126] >= 1)
								{
									func_183(uParam0, &(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/]), Global_2097536[iVar126 /*901*/][(Global_2097536.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_183(uParam0, &(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/]), 1);
								}
								Global_2097536.f_2775[iVar126] = Global_2097536.f_2704[iVar126];
								Global_2097536.f_2704[iVar126]++;
							}
							(*uParam0)[iVar126] = 2;
						}
						else
						{
							(*uParam0)[iVar126] = 1;
						}
					}
					else
					{
						if (!bVar125)
						{
							Global_2097536.f_2704[iVar126]++;
						}
						unk_0x6CCDE78D9C553A24();
						func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2775[iVar126] = -1;
						(*uParam0)[iVar126] = 1;
					}
				}
				else
				{
					func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_2097536.f_2775[iVar126] = -1;
					(*uParam0)[iVar126] = 1;
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2832), iVar126);
				}
			}
			break;
		
		case 1:
			if (Global_2097536.f_2775[iVar126] == -1)
			{
				iVar128 = 11;
			}
			else
			{
				iVar128 = 1;
			}
			if (func_177(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar128))
			{
				func_185(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x581496CFF543462F(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar119 = 0;
						while (iVar119 < Var111.f_3)
						{
							unk_0x1EA20D6FD50C44E7(iVar119, &Var13);
							if (func_187() && (func_147(&Var13, &Var0) || func_147(&Var13, &(Global_2097157.f_361))))
							{
							}
							else
							{
								bVar127 = false;
								if (Global_2097536[iVar126 /*901*/][0 /*75*/].f_59 > 1 || Global_2097536[iVar126 /*901*/][0 /*75*/].f_59 <= 0)
								{
									bVar127 = true;
								}
								if (Global_2097536.f_2704[iVar126] < 11 || bVar127)
								{
									if (iVar119 == 0 || bVar127)
									{
										MemCopy(&(Global_2097536[iVar126 /*901*/][0 /*75*/]), {Var13.f_13}, 16);
										Global_2097536[iVar126 /*901*/][0 /*75*/].f_32 = { Var13 };
										Global_2097536[iVar126 /*901*/][0 /*75*/].f_59 = Var13.f_96;
										if (func_182(uParam0->f_44))
										{
											iVar121 = unk_0x76C271030AC81113(0, Global_2097536.f_2709);
											if (iVar121 == 1)
											{
												Global_2097536[iVar126 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[iVar126 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_198(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[iVar126 /*901*/][0 /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_2097536[iVar126 /*901*/][0 /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar120]))
											{
												Global_2097536[iVar126 /*901*/][iVar119 /*75*/].f_67[iVar120] = unk_0x76C271030AC81113(iVar119, Global_2097536.f_2710[iVar120]);
											}
											else
											{
												Global_2097536[iVar126 /*901*/][iVar119 /*75*/].f_60[iVar120] = unk_0x015A67958E8477F3(iVar119, Global_2097536.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (Global_2097536.f_2704[iVar126] == 0)
										{
											if (bVar127)
											{
											}
											else
											{
												Global_2097536.f_2704[iVar126]++;
											}
										}
										else if (Global_2097536.f_2704[iVar126] == 1 && Global_2097536.f_2775[iVar126] == -1)
										{
											Global_2097536.f_2704[iVar126]++;
										}
									}
									else if (Global_2097536.f_2704[iVar126] < 11)
									{
										MemCopy(&(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
										Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_32 = { Var13 };
										if (func_182(uParam0->f_44))
										{
											iVar121 = unk_0x76C271030AC81113(iVar119, Global_2097536.f_2709);
											if (iVar121 == 1)
											{
												Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_198(uParam0->f_44))
										{
											MemCopy(&(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_2097536.f_2708)
										{
											if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar120]))
											{
												Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_67[iVar120] = unk_0x76C271030AC81113(iVar119, Global_2097536.f_2710[iVar120]);
											}
											else
											{
												Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/].f_60[iVar120] = unk_0x015A67958E8477F3(iVar119, Global_2097536.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (iVar119 != 0)
										{
											Global_2097536.f_2704[iVar126]++;
										}
									}
								}
							}
							func_184(&Var13);
							iVar119++;
						}
					}
					unk_0x6CCDE78D9C553A24();
					func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar126] = 2;
				}
				else
				{
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2832), iVar126);
					func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_2097536.f_2704[iVar126] = 0;
					(*uParam0)[iVar126] = 2;
					Global_2097536.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_2097536.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_2097536.f_2775[iVar126] == -1 && func_187())
			{
				if (Global_2097536.f_2704[iVar126] >= 1)
				{
					func_183(uParam0, &(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/]), Global_2097536[iVar126 /*901*/][(Global_2097536.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_183(uParam0, &(Global_2097536[iVar126 /*901*/][Global_2097536.f_2704[iVar126] /*75*/]), 1);
				}
				Global_2097536.f_2775[iVar126] = Global_2097536.f_2704[iVar126];
				Global_2097536.f_2704[iVar126]++;
			}
			break;
		
		case 2:
			func_176(iVar126, Global_2097157.f_374);
			(*uParam0)[iVar126] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_191(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	int iVar0;
	
	if (Global_2097532)
	{
		if (Global_2097157.f_5 != 0)
		{
			if (Global_2097157.f_5 == Param0.f_0)
			{
				if (Global_2097157.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!unk_0x3C57C2F07FEE34D2(&(Global_2097157.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0x3C57C2F07FEE34D2(&(Global_2097157.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_192(var uParam0)
{
	int iVar0;
	
	if (unk_0x8B36C5E1084B91EC(Global_2097536.f_2826))
	{
		iVar0 = unk_0xCD72499771F7A0DA(Global_2097536.f_2826);
		if (iVar0 < 300000)
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_42), 5);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(uParam0->f_42), 5);
			func_160(Global_2097536.f_2826, -1);
		}
	}
}

bool func_193(var uParam0)
{
	return uParam0->f_1;
}

void func_194(var uParam0)
{
	if (unk_0x0347CCBD719C8ADC(uParam0))
	{
		unk_0xC4353D240DCE9533(uParam0, 255, 255, 255, 0, 0);
	}
}

void func_195(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var36;
	bool bVar52;
	struct<13> Var53;
	int iVar66;
	struct<13> Var67;
	int iVar80;
	
	sVar0 = "";
	if (BitTest(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (BitTest(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (BitTest(iParam2, 6))
	{
		*iParam1++;
		if (unk_0x20E4972CBF3DBE1B() && unk_0xF453DE81BDFDAE6F())
		{
			if ((func_167() || func_166()) && !unk_0x818F829545200020(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var53 = { func_25(unk_0x9E2D6C50374FCFA9()) };
				if (unk_0x8C992447292D600F(&Var53))
				{
					unk_0x4FFBF2C0D8249E45(&Var1, 35, &Var53);
					if (!unk_0xACC32B78196FBC2A(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var36 = { Var1.f_1 };
						bVar52 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	unk_0xEA5DEA46C3EE64D3(uParam0, "SET_SLOT");
	unk_0x4F47E317C74C543B(*iParam1);
	unk_0x4F47E317C74C543B(iParam2);
	if (bVar52)
	{
		unk_0x4ADC8B166E139423(sVar0);
		unk_0x702B349761F63A9E(&Var36);
		unk_0xD1D4F8D5470AFA4C();
	}
	else
	{
		unk_0x4ADC8B166E139423(sVar0);
		unk_0xD1D4F8D5470AFA4C();
	}
	unk_0x6F06CF0E9AB02847();
	*iParam1++;
	if (bParam4)
	{
		iVar66 = 0;
		unk_0xCED9E32812D6C7C7(&iVar66, 7);
		unk_0xEA5DEA46C3EE64D3(uParam0, "SET_SLOT");
		unk_0x4F47E317C74C543B(*iParam1);
		unk_0x4F47E317C74C543B(iVar66);
		if (!unk_0x20E4972CBF3DBE1B())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0x5B66E9FB7530BB95())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_2097536.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		unk_0x4ADC8B166E139423(sVar0);
		unk_0x50BA5780E068A6BD();
		unk_0x6F06CF0E9AB02847();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (BitTest(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (BitTest(iParam2, 5))
		{
			if (unk_0xB9B7C1BEADFB5967() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (BitTest(iParam2, 6))
		{
			if (unk_0xCA8CDFE6F0F62C7F())
			{
				if (unk_0x0F427066BF044759())
				{
					if (unk_0x20E4972CBF3DBE1B() && unk_0xF453DE81BDFDAE6F())
					{
						if ((func_167() || func_166()) && !unk_0x818F829545200020(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var67 = { func_25(unk_0x9E2D6C50374FCFA9()) };
							if (unk_0x8C992447292D600F(&Var67))
							{
								unk_0x4FFBF2C0D8249E45(&Var1, 35, &Var67);
								if (!unk_0xACC32B78196FBC2A(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var36 = { Var1.f_1 };
									bVar52 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar80 = 0;
		unk_0xCED9E32812D6C7C7(&iVar80, 7);
		unk_0xEA5DEA46C3EE64D3(uParam0, "SET_SLOT");
		unk_0x4F47E317C74C543B(*iParam1);
		unk_0x4F47E317C74C543B(iVar80);
		if (bVar52)
		{
			unk_0x4ADC8B166E139423(sVar0);
			unk_0x702B349761F63A9E(&Var36);
			unk_0x50BA5780E068A6BD();
		}
		else
		{
			unk_0x4ADC8B166E139423(sVar0);
			unk_0x50BA5780E068A6BD();
		}
		unk_0x6F06CF0E9AB02847();
		*iParam1++;
	}
}

void func_196(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	unk_0xEA5DEA46C3EE64D3(uParam0, "SET_TITLE");
	unk_0x4ADC8B166E139423(sParam1);
	unk_0xD1D4F8D5470AFA4C();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0x4ADC8B166E139423(uParam2[iVar0 /*6*/]);
		unk_0xD1D4F8D5470AFA4C();
		iVar0++;
	}
	unk_0x6F06CF0E9AB02847();
}

void func_197(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x4ADC8B166E139423(sParam1);
	if (!unk_0xACC32B78196FBC2A(sParam2))
	{
		unk_0x26C23BE14F66F202(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!unk_0xACC32B78196FBC2A(sParam3))
			{
				unk_0x702B349761F63A9E(sParam3);
			}
		}
		else if (!unk_0xACC32B78196FBC2A(sParam3))
		{
			unk_0x26C23BE14F66F202(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0xACC32B78196FBC2A(sParam3))
			{
				unk_0x702B349761F63A9E(sParam3);
			}
		}
		else if (!unk_0xACC32B78196FBC2A(sParam3))
		{
			unk_0x26C23BE14F66F202(sParam3);
		}
		unk_0x2AE954BA77A66307(iParam5);
	}
	unk_0xD1D4F8D5470AFA4C();
	unk_0x6F06CF0E9AB02847();
}

int func_198(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_199(var uParam0, int iParam1)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, "SET_DISPLAY_TYPE");
	unk_0x4F47E317C74C543B(iParam1);
	unk_0x6F06CF0E9AB02847();
}

var func_200()
{
	return unk_0x528279F3F1EEF869("SC_LEADERBOARD");
}

bool func_201()
{
	return func_202(unk_0x9E2D6C50374FCFA9());
}

int func_202(int iParam0)
{
	switch (func_203(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 42:
		case 37:
		case 40:
		case 43:
			return 0;
		
		default:
	}
	return 1;
}

int func_203(int iParam0)
{
	return Global_1853348[iParam0 /*834*/].f_192;
}

void func_204(int iParam0)
{
	Global_1577896 = iParam0;
}

void func_205(int iParam0)
{
	Global_1649593.f_1163 = iParam0;
}

void func_206(bool bParam0)
{
	if (bParam0)
	{
		func_208();
	}
	func_207(4, -1);
	func_207(6, -1);
	func_207(7, -1);
	func_207(3, -1);
	func_207(1, -1);
	func_207(2, -1);
	func_207(11, -1);
	func_207(13, -1);
	func_207(14, -1);
	func_207(16, -1);
}

void func_207(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_1648034.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1648034.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_208()
{
	Global_2815059.f_4599 = 0;
}

void func_209(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x9315DBF7D972F07A() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x0A89FDFA763DCAED();
		}
		else
		{
			*uParam0 = unk_0xE75390F3CA208D5E();
		}
	}
	else
	{
		*uParam0 = unk_0x320D1840B6DAA1CC();
	}
	uParam0->f_1 = 1;
}

int func_210(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_2103068.f_2 + 5 < unk_0x8142A6539DDC180F() && Global_2103068.f_2 > 0)
	{
		func_98(&Global_2103068);
		func_98(&(Global_2103068.f_49));
		*uParam0 = 0;
		Global_2103068.f_2 = 0;
		func_218(0);
	}
	Global_2103068.f_2 = unk_0x8142A6539DDC180F();
	iVar1 = -1;
	if (func_167())
	{
		if (unk_0x82FC2FD8E4F14D53() == 0)
		{
			iVar1 = unk_0x50628AA00A11E2D9();
		}
	}
	if ((func_167() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_216() && unk_0x20E4972CBF3DBE1B()))
	{
		if (unk_0xAFB993C55538F6D3())
		{
			func_213(&(Global_2103068.f_3), func_215(&(Global_2103068.f_3)));
			if (!BitTest(*uParam0, 4))
			{
				unk_0xCED9E32812D6C7C7(uParam0, 4);
				StringCopy(&(Global_2103068.f_3.f_1), "", 64);
				func_211(&(Global_2103068.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 2)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 1)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 5)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (!func_216())
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			if (!BitTest(*uParam0, 0))
			{
				if (!unk_0x4C1B8C5717647539(2, 201))
				{
					unk_0xCED9E32812D6C7C7(uParam0, 0);
				}
			}
			else if (unk_0x26009F50A14AD073(2, 201))
			{
				func_98(&(Global_2103068.f_49));
				func_98(&Global_2103068);
				*uParam0 = 0;
				Global_2103068.f_2 = 0;
				func_218(0);
				return 1;
			}
		}
	}
	else
	{
		func_213(&(Global_2103068.f_3), func_215(&(Global_2103068.f_3)));
		if ((func_193(&(Global_2103068.f_49)) && !func_154(&(Global_2103068.f_49), 2000, 1)) && !unk_0x20E4972CBF3DBE1B())
		{
			unk_0xCED9E32812D6C7C7(uParam0, 3);
			StringCopy(&(Global_2103068.f_3.f_1), "", 64);
			func_211(&(Global_2103068.f_3), 0);
		}
		else if (!BitTest(*uParam0, 3))
		{
			if (!BitTest(*uParam0, 1))
			{
				unk_0x7EE945726AFADACF(0);
				unk_0xCED9E32812D6C7C7(uParam0, 1);
				StringCopy(&(Global_2103068.f_3.f_1), "", 64);
				func_211(&(Global_2103068.f_3), 0);
			}
		}
		if (func_193(&Global_2103068))
		{
			if (!func_154(&Global_2103068, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0x20E4972CBF3DBE1B())
				{
					if (unk_0x1D2ABA18149A4E82())
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, false, -1, 0, 0, true, 0);
					}
					else
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
					}
					if (!unk_0xDFA2E5162727D6D2())
					{
						if (!BitTest(*uParam0, 0))
						{
							if (!unk_0x4C1B8C5717647539(2, 201))
							{
								unk_0xCED9E32812D6C7C7(uParam0, 0);
							}
						}
						else if (unk_0x26009F50A14AD073(2, 201))
						{
							func_98(&Global_2103068);
							*uParam0 = 0;
							Global_2103068.f_2 = 0;
							func_218(0);
							return 1;
						}
					}
				}
				else
				{
					func_98(&Global_2103068);
					*uParam0 = 0;
					Global_2103068.f_2 = 0;
					func_218(0);
					return 1;
				}
			}
			else if (BitTest(*uParam0, 3))
			{
				if (unk_0x1D2ABA18149A4E82())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				if (!BitTest(*uParam0, 0))
				{
					if (!unk_0x4C1B8C5717647539(2, 201))
					{
						unk_0xCED9E32812D6C7C7(uParam0, 0);
					}
				}
				else if (unk_0x26009F50A14AD073(2, 201))
				{
					func_98(&(Global_2103068.f_49));
					func_98(&Global_2103068);
					*uParam0 = 0;
					Global_2103068.f_2 = 0;
					func_218(0);
					return 1;
				}
			}
			else
			{
				if (unk_0x1D2ABA18149A4E82())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				if (!unk_0xDFA2E5162727D6D2())
				{
					if (!BitTest(*uParam0, 0))
					{
						if (!unk_0x4C1B8C5717647539(2, 201))
						{
							unk_0xCED9E32812D6C7C7(uParam0, 0);
						}
					}
					else if (unk_0x26009F50A14AD073(2, 201))
					{
						func_98(&(Global_2103068.f_49));
						func_98(&Global_2103068);
						*uParam0 = 0;
						Global_2103068.f_2 = 0;
						func_218(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_211(var uParam0, bool bParam1)
{
	func_212(uParam0);
	if (bParam1)
	{
		func_218(0);
	}
	uParam0->f_35 = 1;
}

void func_212(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_213(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_214(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0x65F03588435FE39B(&(uParam0->f_1));
			unk_0x2AE954BA77A66307(uParam0->f_33);
			unk_0x2AE954BA77A66307(uParam0->f_34);
			unk_0xA22CDE353F373A10(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0x65F03588435FE39B(&(uParam0->f_1));
			unk_0x2AE954BA77A66307(uParam0->f_33);
			unk_0xA22CDE353F373A10(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0x65F03588435FE39B(&(uParam0->f_1));
			unk_0x76DB21247AE4E4E2(&(uParam0->f_17));
			unk_0x2AE954BA77A66307(uParam0->f_33);
			unk_0x2AE954BA77A66307(uParam0->f_34);
			unk_0xA22CDE353F373A10(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0x65F03588435FE39B(&(uParam0->f_1));
			unk_0x76DB21247AE4E4E2(&(uParam0->f_17));
			unk_0xA22CDE353F373A10(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0x65F03588435FE39B(&(uParam0->f_1));
			unk_0x28594D0D61DB1278(uParam0->f_33, 70);
			unk_0xA22CDE353F373A10(uParam0->f_41);
		}
		else
		{
			unk_0x65F03588435FE39B(&(uParam0->f_1));
			unk_0xA22CDE353F373A10(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_214(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_215(var uParam0)
{
	return uParam0->f_35;
}

int func_216()
{
	if (func_217())
	{
		return 0;
	}
	if (unk_0x47C86377AA337CBE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_217()
{
	return Global_2725911;
}

void func_218(bool bParam0)
{
	unk_0xBE3AC6D6682E4A5E();
	if (bParam0)
	{
		unk_0xDB18C83ED1B45A43();
	}
}

int func_219(var uParam0, bool bParam1, bool bParam2)
{
	if (!iLocal_257)
	{
		func_231(&(uParam0->f_72), bParam1);
		iLocal_257 = 1;
		func_337(&(uParam0->f_666), 9, 0);
	}
	else
	{
		if (Global_2097157.f_1 && !Global_2097157.f_2)
		{
			func_228(190, bParam1);
			Global_2097157.f_2 = 1;
			*bParam2 = 1;
		}
		if (func_220(&(uParam0->f_72)))
		{
			Global_2097532 = 1;
			return 1;
		}
	}
	return 0;
}

int func_220(var uParam0)
{
	struct<98> Var0;
	struct<4> Var98;
	struct<37> Var106;
	struct<13> Var175;
	int iVar188;
	
	Var0.f_19.f_1 = 4;
	Var106.f_3 = 32;
	Var106.f_36 = 32;
	if (func_198(uParam0->f_44))
	{
		Var175 = { Global_2097157.f_361 };
	}
	else
	{
		Var175 = { func_25(unk_0x9E2D6C50374FCFA9()) };
	}
	switch (Global_2097157)
	{
		case 0:
			if (func_227(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var175))
			{
				func_185(&Var98, &(uParam0->f_44));
				Global_2097157.f_142 = uParam0->f_44;
				Global_2097157.f_142.f_1 = unk_0x00C49126C192C957(uParam0->f_44, 0);
				iVar188 = 0;
				while (iVar188 < Global_2097157.f_142.f_1)
				{
					if (!func_226(uParam0->f_44, iVar188))
					{
						if (func_225(uParam0->f_44, 4, iVar188))
						{
							unk_0xCED9E32812D6C7C7(&(Global_2097157.f_142.f_2), iVar188);
						}
						else
						{
							unk_0xB0550BC91B0159D6(&(Global_2097157.f_142.f_2), iVar188);
						}
					}
					bVar188++;
				}
				if (uParam0->f_5 && unk_0x581496CFF543462F(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0x1EA20D6FD50C44E7(0, &Var0);
						if (Var0.f_97 != Global_2097157.f_142.f_1)
						{
						}
						if (!func_148(Var0))
						{
							Global_2097157.f_4 = 1;
						}
						else
						{
							bVar188 = false;
							while (bVar188 < Global_2097157.f_142.f_1)
							{
								if (!func_226(uParam0->f_44, bVar188))
								{
									if (func_225(uParam0->f_44, 4, bVar188))
									{
										Global_2097157.f_73.f_36[bVar188] = unk_0x76C271030AC81113(0, bVar188);
										if (Global_2097157.f_73.f_36[bVar188] == -1)
										{
											if (bVar188 > Var0.f_97)
											{
												Global_2097157.f_73.f_36[bVar188] = 0;
											}
										}
									}
									else
									{
										Global_2097157.f_73.f_3[bVar188] = unk_0x015A67958E8477F3(0, bVar188);
										if (Global_2097157.f_73.f_3[bVar188] == -1f)
										{
											if (bVar188 > Var0.f_97)
											{
												Global_2097157.f_73.f_3[bVar188] = 0f;
											}
										}
									}
								}
								bVar188++;
							}
						}
					}
					else
					{
						Global_2097157.f_4 = 1;
					}
					unk_0x6CCDE78D9C553A24();
				}
				else
				{
					Global_2097157.f_4 = 1;
				}
				Global_2097157 = 1;
				func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_2097157.f_1 = 1;
			if (Global_2097157.f_2)
			{
				func_224();
				if (Global_2097157.f_4)
				{
					if (func_223(uParam0->f_44))
					{
						Global_2097157 = 3;
					}
					else
					{
						Global_2097157 = 2;
					}
				}
				else
				{
					Global_2097157 = 2;
				}
			}
			break;
		
		case 2:
			unk_0x45B097C5E2959673(&(Global_2097157.f_73), &(Global_2097157.f_142), &(Global_2097157.f_211));
			Global_2097157 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_2097157.f_211 = { Global_2097157.f_142 };
			Global_2097157 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (unk_0x9315DBF7D972F07A() && func_222())
			{
				if (func_221())
				{
					Global_2097157 = 99;
				}
				else
				{
					Global_2097157 = 999;
					return 1;
				}
			}
			else
			{
				Global_2097157 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_223(uParam0->f_44))
			{
				Global_2097157.f_280 = { Global_2097157.f_142 };
			}
			else
			{
				Var106.f_0 = Global_2097157.f_142;
				Var106.f_1 = Global_2097157.f_142.f_1;
				Var106.f_2 = Global_2097157.f_142.f_2;
				unk_0x45B097C5E2959673(&Var106, &(Global_2097157.f_142), &(Global_2097157.f_280));
			}
			Global_2097157 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_186(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var175, 1, 1, Global_2097157.f_280.f_36[0], Global_2097157.f_280.f_3[0]))
			{
				func_185(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x581496CFF543462F(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0x1EA20D6FD50C44E7(0, &Var0);
						if (unk_0x3C57C2F07FEE34D2(&(Var0.f_13), ""))
						{
							Global_1057163.f_1 = -1;
						}
						else
						{
							Global_1057163.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_1057163.f_1 = -1;
					}
					unk_0x6CCDE78D9C553A24();
				}
				else
				{
					Global_1057163.f_1 = -1;
				}
				Global_2097157 = 999;
				func_104(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_221()
{
	return BitTest(Global_1048576.f_10, 1);
}

var func_222()
{
	return Global_2723612.f_3;
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_224()
{
	Global_2097157.f_73 = Global_2097157.f_142;
	Global_2097157.f_73.f_1 = Global_2097157.f_142.f_1;
	Global_2097157.f_73.f_2 = Global_2097157.f_142.f_2;
	Global_2097157.f_211 = Global_2097157.f_142;
	Global_2097157.f_211.f_1 = Global_2097157.f_142.f_1;
	Global_2097157.f_211.f_2 = Global_2097157.f_142.f_2;
}

int func_225(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = unk_0x8CEE6633E5A509AD(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_226(int iParam0, int iParam1)
{
	if (unk_0x07A9B621946D6D59(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_227(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_180() && !func_179())
			{
				func_178(*uParam2);
				if (unk_0xB3FDE7B4CAB1C054(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x589034697689CC35(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x4A37499E7C2832D2(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_228(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var7[1];
	
	if (!unk_0xC65B603E7942D0DB())
	{
		return;
	}
	StringCopy(&(Var7[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_230(iParam0, &Var0, &Var7, 1, -1, 1, 0))
	{
		func_229(190, 131, 0, 0f, 1);
		func_229(190, 103, iLocal_151[1], 0f, 0);
		func_229(190, 99, iLocal_151[2], 0f, 0);
		func_229(190, 109, iLocal_151[3], 0f, 0);
		func_229(190, 106, iLocal_151[5], 0f, 0);
		func_229(190, 2, iLocal_151[10], 0f, 0);
		func_229(190, 107, iLocal_151[8], 0f, 0);
		func_229(190, 116, iLocal_151[6], 0f, 0);
		iLocal_151[1] = 0;
		iLocal_151[2] = 0;
		iLocal_151[3] = 0;
		iLocal_151[5] = 0;
		iLocal_151[10] = 0;
		iLocal_151[8] = 0;
		iLocal_151[6] = 0;
	}
}

void func_229(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		unk_0x6D1A116F1B08FA08(iParam1, iParam2, fParam3);
	}
	if (!Global_2097157.f_3)
	{
		Global_2097157.f_142 = iParam0;
		Global_2097157.f_142.f_1 = unk_0x00C49126C192C957(Global_2097157.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_2097157.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_225(iParam0, 4, iVar1))
				{
					unk_0xCED9E32812D6C7C7(&(Global_2097157.f_142.f_2), iVar1);
				}
				else
				{
					unk_0xB0550BC91B0159D6(&(Global_2097157.f_142.f_2), iVar1);
				}
			}
			else
			{
				unk_0xB0550BC91B0159D6(&(Global_2097157.f_142.f_2), bVar1);
			}
			bVar1++;
		}
		Global_2097157.f_3 = 1;
	}
	bVar1 = false;
	while (bVar1 < 32)
	{
		if (iParam1 == unk_0x07A9B621946D6D59(iParam0, 4, bVar1))
		{
			iVar0 = bVar1;
			bVar1 = 32;
		}
		bVar1++;
	}
	Global_2097157.f_142.f_36[iVar0] = iParam2;
	Global_2097157.f_142.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		unk_0xCED9E32812D6C7C7(&(Global_2097157.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0xB0550BC91B0159D6(&(Global_2097157.f_142.f_2), iVar0);
	}
}

int func_230(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0x20E4972CBF3DBE1B())
	{
	}
	if ((!unk_0xC8EB486898DDBCF0() && (unk_0x17C7C36F1FCE1AC2() || !unk_0x74A0CF38086BFA4D())) && unk_0x8D4166B8EC28F8D5())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = uParam0;
		if (iParam4 == -1)
		{
			if (unk_0xF453DE81BDFDAE6F())
			{
				Var69 = { func_25(unk_0x9E2D6C50374FCFA9()) };
				if (unk_0x8C992447292D600F(&Var69))
				{
					if (unk_0x4FFBF2C0D8249E45(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_2097157.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x9315DBF7D972F07A() && Global_2723612.f_3)
			{
				unk_0x40CEB23E136D8EA3(&Var0, &(Global_1931618.f_10));
			}
			else
			{
				unk_0x4A42A2E45A8D2C8B(&Var0);
			}
		}
		return 1;
	}
	if (unk_0xC8EB486898DDBCF0())
	{
	}
	if (!unk_0x17C7C36F1FCE1AC2())
	{
	}
	if (unk_0x74A0CF38086BFA4D())
	{
	}
	if (!unk_0x8D4166B8EC28F8D5())
	{
	}
	return 0;
}

void func_231(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	func_232(uParam0, 14, "DartsLB", "", iVar0, -1, 0, 0);
}

void func_232(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var8;
	int iVar16;
	struct<6> Var17;
	
	if (!unk_0xACC32B78196FBC2A(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_2097536.f_2769 = 0;
	Global_2097536.f_2770 = 0;
	Global_2097536.f_2768 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_241())
				{
					uParam0->f_44 = 826;
				}
				else
				{
					uParam0->f_44 = 815;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_241())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!unk_0xACC32B78196FBC2A(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xACC32B78196FBC2A(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_2097536.f_2780.f_26 = -1;
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_241())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 2;
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 3;
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_241())
				{
					uParam0->f_44 = 827;
				}
				else
				{
					uParam0->f_44 = 824;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_241())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!unk_0xACC32B78196FBC2A(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_2097536.f_2780.f_26 = -1;
					if (!unk_0xACC32B78196FBC2A(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_241())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 5;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 6;
					Global_2097536.f_2708 = 2;
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 5;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 3;
					Global_2097536.f_2709 = 6;
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_241())
				{
					uParam0->f_44 = 828;
				}
				else
				{
					uParam0->f_44 = 825;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					unk_0x9BF88C3ED22C5680(unk_0x9E2D6C50374FCFA9(), &Var17);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var17}, 8);
					Global_2097536.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_241())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var8 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!unk_0xACC32B78196FBC2A(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_2097536.f_2780.f_26 = -1;
					if (!unk_0xACC32B78196FBC2A(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_241())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 2;
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 3;
					Global_2097536.f_2709 = 4;
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_241())
				{
					uParam0->f_44 = 928;
				}
				else
				{
					uParam0->f_44 = 849;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_241())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_2097536.f_2780.f_26 = iParam5;
					if (!unk_0xACC32B78196FBC2A(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_2097536.f_2780.f_26 = -1;
					if (!unk_0xACC32B78196FBC2A(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_241())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 0;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 0;
					Global_2097536.f_2708 = 1;
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 2;
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_241())
				{
					uParam0->f_44 = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_44 = 975;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_241())
				{
					Global_2097536.f_2780.f_26 = iParam5;
					if (!unk_0xACC32B78196FBC2A(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xACC32B78196FBC2A(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_2097536.f_2780.f_26 = -1;
				}
				Global_2097536.f_2780 = 1;
				if (iParam5 <= 0 || func_241())
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 2;
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 3;
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
				Global_2097536.f_2779 = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0 || iParam4 == 3)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (iParam4 == 3)
				{
					if (!unk_0xACC32B78196FBC2A(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_KOTH", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_KOTH_NN", 32);
					}
				}
				else if (!unk_0xACC32B78196FBC2A(sParam3))
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 6;
				Global_2097536.f_2710[3] = 3;
				Global_2097536.f_2710[4] = 1;
				Global_2097536.f_2710[5] = 2;
				Global_2097536.f_2708 = 6;
				unk_0xB0550BC91B0159D6(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				unk_0xB0550BC91B0159D6(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 4;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 4;
				Global_2097536.f_2780.f_29[4] = 5;
				Global_2097536.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1 || iParam4 == 4)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (iParam4 == 4)
				{
					if (!unk_0xACC32B78196FBC2A(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TKOTH", 32);
						StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TKOTH_NN", 32);
					}
				}
				else if (!unk_0xACC32B78196FBC2A(sParam3))
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 6;
				Global_2097536.f_2710[3] = 3;
				Global_2097536.f_2710[4] = 1;
				Global_2097536.f_2710[5] = 2;
				Global_2097536.f_2708 = 6;
				unk_0xB0550BC91B0159D6(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				unk_0xB0550BC91B0159D6(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 4;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 4;
				Global_2097536.f_2780.f_29[4] = 5;
				Global_2097536.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!unk_0xACC32B78196FBC2A(sParam3))
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 6;
				Global_2097536.f_2710[3] = 3;
				Global_2097536.f_2710[4] = 1;
				Global_2097536.f_2710[5] = 2;
				Global_2097536.f_2708 = 6;
				unk_0xB0550BC91B0159D6(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				unk_0xB0550BC91B0159D6(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 4;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 4;
				Global_2097536.f_2780.f_29[4] = 5;
				Global_2097536.f_2780.f_29[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 7;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 7;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), "CMSW", 64);
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 0;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 5;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 4;
			Global_2097536.f_2710[4] = 6;
			Global_2097536.f_2708 = 5;
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			Global_2097536.f_2780.f_28 = 6;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 6;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			break;
		
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_ARM", 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 2;
			Global_2097536.f_2710[1] = 5;
			Global_2097536.f_2710[2] = 0;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0xB0550BC91B0159D6(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 4;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_DARTS", 32);
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 7;
			Global_2097536.f_2710[2] = 5;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			unk_0xB0550BC91B0159D6(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 4;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			if (unk_0xACC32B78196FBC2A(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_2097536.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 9;
			Global_2097536.f_2710[2] = 7;
			Global_2097536.f_2710[3] = 5;
			Global_2097536.f_2710[4] = 2;
			Global_2097536.f_2708 = 5;
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			break;
		
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 9;
			Global_2097536.f_2710[2] = 7;
			Global_2097536.f_2710[3] = 5;
			Global_2097536.f_2710[4] = 2;
			Global_2097536.f_2708 = 5;
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			break;
		
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_ACC", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 2;
			Global_2097536.f_2710[2] = 1;
			Global_2097536.f_2710[3] = 3;
			Global_2097536.f_2708 = 4;
			unk_0xB0550BC91B0159D6(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0xB0550BC91B0159D6(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 4;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
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
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_2097536.f_2780.f_9), {func_240(iParam1)}, 16);
			Global_2097536.f_2780.f_25 = 0;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 7;
			Global_2097536.f_2708 = 2;
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			Global_2097536.f_2780.f_25 = 0;
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 0;
			Global_2097536.f_2710[2] = 0;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 1;
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 2;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 0;
			Global_2097536.f_2780.f_29[3] = 0;
			break;
		
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			StringCopy(&(Global_2097536.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_2097536.f_2710[0] = 3;
			Global_2097536.f_2708 = 1;
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 1;
			break;
		
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			if (!unk_0xACC32B78196FBC2A(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 3;
			Global_2097536.f_2708 = 4;
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!unk_0xACC32B78196FBC2A(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 1;
				Global_2097536.f_2710[2] = 4;
				Global_2097536.f_2710[3] = 5;
				Global_2097536.f_2710[4] = 6;
				Global_2097536.f_2708 = 3;
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0xB0550BC91B0159D6(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				Global_2097536.f_2780.f_28 = 6;
				Global_2097536.f_2780.f_29[0] = 5;
				Global_2097536.f_2780.f_29[1] = 11;
				Global_2097536.f_2780.f_29[2] = 4;
				Global_2097536.f_2780.f_29[3] = 5;
				Global_2097536.f_2780.f_29[4] = 5;
			}
			else if (Global_4718592.f_614 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!unk_0xACC32B78196FBC2A(sParam3))
				{
					if (Global_4718592.f_2 == 5)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4718592.f_2 == 5)
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 1;
				Global_2097536.f_2710[2] = 2;
				Global_2097536.f_2710[3] = 0;
				Global_2097536.f_2708 = 3;
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 2;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_2097536.f_2780 = 1;
				if (!unk_0xACC32B78196FBC2A(sParam3))
				{
					if (Global_4718592.f_2 == 5)
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4718592.f_2 == 5)
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_239(Global_4718592.f_168757) || func_236(Global_4718592.f_168757))
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 2;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2708 = 2;
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 5;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else if (func_235(Global_4718592.f_168757))
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 2;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2708 = 2;
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 5;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 2;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 3;
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 5;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			if (!unk_0xACC32B78196FBC2A(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2768), 1);
			Global_2097536.f_2754[1] = -1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 11;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!unk_0xACC32B78196FBC2A(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 3;
			Global_2097536.f_2708 = 2;
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_44 = 965;
							break;
						
						case 9:
							uParam0->f_44 = 966;
							break;
						
						case 4:
							uParam0->f_44 = 967;
							break;
						
						case 8:
							uParam0->f_44 = 968;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!unk_0xACC32B78196FBC2A(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 4;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 2;
					Global_2097536.f_2708 = 4;
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
						
						case 2:
							uParam0->f_44 = 970;
							break;
						
						case 3:
							uParam0->f_44 = 973;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!unk_0xACC32B78196FBC2A(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 4;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 2;
					Global_2097536.f_2708 = 4;
					unk_0xB0550BC91B0159D6(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 4;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
				
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!unk_0xACC32B78196FBC2A(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 4;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 2;
					Global_2097536.f_2708 = 4;
					unk_0xB0550BC91B0159D6(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 4;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
						
						case 5:
							uParam0->f_44 = 974;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
					if (!unk_0xACC32B78196FBC2A(sParam3))
					{
						StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 2;
					Global_2097536.f_2710[3] = 1;
					Global_2097536.f_2708 = 4;
					unk_0xB0550BC91B0159D6(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 12;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			if (!unk_0xACC32B78196FBC2A(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_2097536.f_2710[0] = 2;
			Global_2097536.f_2710[1] = 5;
			Global_2097536.f_2710[2] = 4;
			Global_2097536.f_2710[3] = 3;
			Global_2097536.f_2708 = 4;
			unk_0xB0550BC91B0159D6(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_29[0] = 17;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!unk_0xACC32B78196FBC2A(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 4;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 2;
			Global_2097536.f_2708 = 4;
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_29[0] = 10;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!unk_0xACC32B78196FBC2A(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 5;
			Global_2097536.f_2710[4] = 4;
			Global_2097536.f_2710[5] = 3;
			Global_2097536.f_2708 = 6;
			unk_0xB0550BC91B0159D6(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0xB0550BC91B0159D6(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
			Global_2097536.f_2780.f_29[0] = 4;
			Global_2097536.f_2780.f_29[1] = 9;
			Global_2097536.f_2780.f_29[2] = 4;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			Global_2097536.f_2780.f_29[5] = 5;
			break;
		
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
			if (!unk_0xACC32B78196FBC2A(sParam3))
			{
				StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_2097536.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_2097536.f_2710[0] = 2;
			Global_2097536.f_2708 = 1;
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 1;
			break;
		
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_2097536.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
				Global_2097536.f_2710[0] = 3;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 1;
				Global_2097536.f_2710[3] = 0;
				Global_2097536.f_2709 = 6;
				Global_2097536.f_2708 = 2;
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				Global_2097536.f_2780.f_28 = 4;
				Global_2097536.f_2780.f_29[0] = 1;
				Global_2097536.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
				Global_2097536.f_2710[0] = 3;
				Global_2097536.f_2710[1] = 2;
				Global_2097536.f_2710[2] = 4;
				Global_2097536.f_2710[3] = 1;
				Global_2097536.f_2709 = 4;
				Global_2097536.f_2708 = 3;
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 1;
				Global_2097536.f_2780.f_29[1] = 1;
				Global_2097536.f_2780.f_29[2] = 3;
			}
			Global_2097536.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
		
		case 888:
			uParam0->f_44 = 1201;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "ArenaMode", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 3;
			MemCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), {func_234(iParam4)}, 8);
			Global_2097536.f_2708 = 4;
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			switch (iParam4)
			{
				case 1:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_BUZZ", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_2097536.f_2780.f_29[3] = 9;
					break;
				
				case 2:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_CARN", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 3:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_FLAGW", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_FLAGS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 4:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_WRECK", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 5:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_BOMBB", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_POINTS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_GOALS", 24);
					break;
				
				case 6:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_GAMEM", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_CPOINTS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 7:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_MNSTR", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 8:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_HOTB", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_PASSES", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_2097536.f_2780.f_29[3] = 9;
					break;
				
				case 9:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_TAGT", 32);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TAGS", 24);
					break;
			}
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2708 = 4;
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
		
		case 889:
			uParam0->f_44 = 1202;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_CAREER", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_CARPT", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MATCHES", 24);
			StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TITLE", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 4;
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2708 = 4;
			Global_2097536.f_2780.f_28 = 5;
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xB0550BC91B0159D6(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 4;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 21;
			break;
		
		case 890:
			uParam0->f_44 = 1203;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_CCM_CAREER", 32);
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_CCMLVL", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RACES", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 4;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2708 = 3;
			Global_2097536.f_2780.f_28 = 4;
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xB0550BC91B0159D6(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 22;
			Global_2097536.f_2780.f_29[1] = 4;
			Global_2097536.f_2780.f_29[2] = 5;
			break;
		
		case 276:
			uParam0->f_44 = 1204;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&Var0, "TUNER_SANDB_SVAR", 32);
			if (iParam4 == 2 || iParam4 == 3)
			{
				StringIntConCat(&Var0, 2, 32);
			}
			else
			{
				StringIntConCat(&Var0, iParam4, 32);
			}
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 2;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2709 = 4;
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2708 = 3;
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 2;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 3;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_TT", 32);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 3;
					StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
					StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
					Global_2097536.f_2708 = 2;
					Global_2097536.f_2780.f_28 = 3;
					Global_2097536.f_2780.f_29[0] = 2;
					Global_2097536.f_2780.f_29[1] = 3;
					break;
				
				case 1:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_CD", 32);
					break;
				
				case 2:
				case 3:
					StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_HH1", 32);
					break;
			}
			break;
		
		case 278:
		case 279:
			uParam0->f_44 = 1204;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			if (iParam1 == 278)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "TUNER_SRS", 32);
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_SRS", 32);
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "TUNER_PS", 32);
				StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_PURS", 32);
				StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
			}
			StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 2;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2709 = 4;
			Global_2097536.f_2708 = 3;
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 2;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 3;
			Global_2097536.f_2780 = 1;
			break;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 < Global_2097536.f_2708)
	{
		if (BitTest(Global_2097536.f_2769, Global_2097536.f_2710[iVar16]))
		{
			unk_0xCED9E32812D6C7C7(&(Global_2097536.f_2770), iVar16);
		}
		iVar16++;
	}
	Global_2097536.f_2826 = func_233(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_233(struct<8> Param0, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam8, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_198(iParam8))
	{
		if (bParam12)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam9, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam10, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam11, 64);
	return unk_0x2E87280918B16506(&cVar0);
}

struct<6> func_234(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "BuzzerBeater", 24);
			break;
		
		case 2:
			StringCopy(&Var0, "Carnage", 24);
			break;
		
		case 3:
			StringCopy(&Var0, "FlagWar", 24);
			break;
		
		case 4:
			StringCopy(&Var0, "WreckIt", 24);
			break;
		
		case 5:
			StringCopy(&Var0, "BombBall", 24);
			break;
		
		case 6:
			StringCopy(&Var0, "GamesMasters", 24);
			break;
		
		case 7:
			StringCopy(&Var0, "Monsters", 24);
			break;
		
		case 8:
			StringCopy(&Var0, "HotBomb", 24);
			break;
		
		case 9:
			StringCopy(&Var0, "TagTeam", 24);
			break;
		
		default:
			break;
	}
	return Var0;
}

bool func_235(int iParam0)
{
	return iParam0 == 74;
}

var func_236(int iParam0)
{
	return (func_238(iParam0) || func_237(iParam0));
}

bool func_237(int iParam0)
{
	return iParam0 == 44;
}

bool func_238(int iParam0)
{
	return iParam0 == 45;
}

bool func_239(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_240(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_241()
{
	if ((((((((((((Global_4718592.f_107227 == 1 || Global_4718592.f_107227 == 3) || Global_4718592.f_107227 == 5) || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 19) || Global_4718592.f_107227 == 8) || Global_4718592.f_107227 == 9) || Global_4718592.f_107227 == 11) || Global_4718592.f_107227 == 13) || Global_4718592.f_107227 == 21) || Global_4718592.f_107227 == 23) || Global_4718592.f_107227 == 25) || Global_4718592.f_107227 == 26)
	{
		return 1;
	}
	return 0;
}

int func_242(var uParam0, int iParam1)
{
	if (!func_426(&(uParam0->f_2)))
	{
		func_441(&(uParam0->f_2));
	}
	unk_0xAC765EF46E85A446(14);
	unk_0xC4353D240DCE9533(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xF09A4F413B0D30EB(2, 201) || uParam0->f_8)
		{
			if (!func_426(&(uParam0->f_5)))
			{
				func_441(&(uParam0->f_5));
				func_243(uParam0, 1051260355);
			}
		}
		if (func_426(&(uParam0->f_5)))
		{
			if (func_7(&(uParam0->f_5)) > 0.33f)
			{
				func_427(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_426(&(uParam0->f_5)))
		{
			func_441(&(uParam0->f_5));
			func_243(uParam0, 1051260355);
		}
		else if (func_7(&(uParam0->f_5)) > 0.33f)
		{
			func_427(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_243(var uParam0, float fParam1)
{
	unk_0xEA5DEA46C3EE64D3(*uParam0, "SHARD_ANIM_OUT");
	unk_0x4F47E317C74C543B(uParam0->f_9);
	unk_0xCA5D23E5F0F0306F(fParam1);
	unk_0x6F06CF0E9AB02847();
}

void func_244(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x5853B15F78E1A265(0, 100);
	if (iVar0 < 40)
	{
		if (!unk_0xF68107C40359970C((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_LOSE", 0, 4);
		}
	}
	else if (iVar0 < 70)
	{
		if (!unk_0xF68107C40359970C((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "GAME_LOSE_SELF", 1, 4);
		}
	}
	else if (!unk_0xF68107C40359970C((*uParam0)[1]))
	{
		func_4((*uParam0)[1], "GAME_WIN_SELF", 0, 4);
	}
}

void func_245(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x5853B15F78E1A265(0, 100);
	if (iVar0 < 30)
	{
		if (!unk_0xF68107C40359970C((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "DARTS_LOSE", 1, 4);
		}
	}
	else if (iVar0 < 50)
	{
		if (!unk_0xF68107C40359970C((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_WIN", 0, 4);
		}
	}
	else if (iVar0 < 75 && iParam1)
	{
		if (!unk_0xF68107C40359970C((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_LOSING_BADLY", 0, 4);
		}
	}
	else if (iVar0 < 88)
	{
		if (!unk_0xF68107C40359970C((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "GAME_WIN_SELF", 1, 4);
		}
	}
	else if (!unk_0xF68107C40359970C((*uParam0)[1]))
	{
		func_4((*uParam0)[1], "GAME_LOSE_SELF", 0, 4);
	}
}

int func_246()
{
	int iVar0;
	
	if (!bLocal_282)
	{
		iVar0 = (unk_0x5853B15F78E1A265(0, 65535) % 3);
	}
	else
	{
		iLocal_296++;
		iVar0 = (iLocal_296 % 2);
	}
	return iVar0;
}

void func_247(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char* sVar0;
	
	sVar0 = func_248(iParam4);
	if (iParam4 != 5)
	{
		unk_0xEA5DEA46C3EE64D3(*uParam0, "RESET_MOVIE");
		unk_0x6F06CF0E9AB02847();
	}
	unk_0xEA5DEA46C3EE64D3(*uParam0, sVar0);
	unk_0x4ADC8B166E139423("STRING");
	unk_0x26C23BE14F66F202(sParam1);
	unk_0xD1D4F8D5470AFA4C();
	func_12(sParam2);
	unk_0x6F06CF0E9AB02847();
	func_441(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
	uParam0->f_9 = iParam5;
}

char* func_248(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_SHARD_CENTERED_MP_MESSAGE";
		
		case 1:
			return "SHOW_SHARD_CENTERED_TOP_MP_MESSAGE";
		
		case 2:
			return "SHOW_SHARD_WASTED_MP_MESSAGE";
		
		case 3:
			return "SHOW_SHARD_RANKUP_MP_MESSAGE";
		
		case 4:
			return "SHOW_SHARD_CREW_RANKUP_MP_MESSAGE";
		
		case 5:
			if (unk_0x9315DBF7D972F07A())
			{
				return "SHOW_COND_SHARD_MESSAGE";
			}
			return "SHOW_SHARD_MIDSIZED_MESSAGE";
		
		default:
	}
	return "SHOW_SHARD_CENTERED_MP_MESSAGE";
}

void func_249(var uParam0, int iParam1)
{
	unk_0xEA5DEA46C3EE64D3(*uParam0, "CLEAR_SCORES");
	unk_0x4F47E317C74C543B(iParam1);
	unk_0x6F06CF0E9AB02847();
}

int func_250(var uParam0)
{
	uParam0->f_2 = { 0f, -2.3685f, -0.2f };
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_20 = 0;
	uParam0->f_23 = 0;
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		unk_0x4BDA5AFD88C085EB(uParam0);
	}
	return 1;
}

void func_251(int iParam0)
{
	unk_0x889B4F9D52E23DEE(uLocal_122, uLocal_120, 1500, 1, 1);
	unk_0xDD786B89B15AA63F(uLocal_123, 1);
	unk_0x889B4F9D52E23DEE(uLocal_122, uLocal_123, 8000, 1, 1);
	unk_0x3FB84450A94CB528(uLocal_125, iParam0, -0.0301f, 1.498f, 0.7435f, 1);
	unk_0x98A99A554B458431(uLocal_125, iParam0, 0.0557f, -1.4905f, 0.4958f, 1);
	unk_0x0A18C027350D3C19(uLocal_125, 35f);
}

void func_252(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	bool bVar0;
	
	if (!unk_0x52522E25010580A1(uLocal_120))
	{
		bVar0 = false;
		func_333(uParam0);
		if (!bLocal_274)
		{
			if (uParam0->f_1 == 5)
			{
				if (uParam3->f_672)
				{
					unk_0x3410421C60BF7143(1);
					uParam3->f_672 = 0;
				}
			}
			else if (!bLocal_163)
			{
				if (func_3(&(uParam3->f_666), 18))
				{
					if (!func_3(&(uParam3->f_666), 21))
					{
						if (!BitTest(Global_113347, 3))
						{
							func_424("DARTS_INSTR_W", -1);
							unk_0xCED9E32812D6C7C7(&Global_113347, 3);
						}
						func_337(&(uParam3->f_666), 21, 1);
					}
					else if (!func_3(&(uParam3->f_666), 20) && func_3(&(uParam3->f_666), 19))
					{
						if (!BitTest(Global_113347, 4))
						{
							func_424("DARTS_INSTR_B", -1);
							unk_0xCED9E32812D6C7C7(&Global_113347, 4);
						}
						func_337(&(uParam3->f_666), 20, 1);
					}
				}
				uParam3->f_672 = 1;
			}
			else if (uParam3->f_672)
			{
				unk_0x3410421C60BF7143(1);
				uParam3->f_672 = 0;
			}
		}
		if (uParam0->f_1 == 1)
		{
			if (!unk_0x52522E25010580A1(uLocal_129) && uParam0->f_3 == 2)
			{
				func_332(uParam3);
			}
		}
		else
		{
			func_330(uParam3, iLocal_30);
		}
		func_329(&(uParam0->f_1));
	}
	else
	{
		bVar0 = true;
	}
	func_326(uParam3);
	switch (uParam0->f_1)
	{
		case 1:
			if (!func_318(&(uParam0->f_3)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 0:
			if (func_311(uParam0->f_422[iLocal_30], &(uParam0->f_243), &(uParam0->f_4), &(uParam0->f_461)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			if (unk_0x4C1B8C5717647539(2, 228) && iLocal_30 == 0)
			{
				uParam0->f_1 = 1;
			}
			if (iLocal_30 == 0)
			{
				func_310(iLocal_31, 0);
				if (((((!func_309("DARTS_SHT_USE") && !func_309("DARTS_INSTR_W")) && !func_309("DARTS_INSTR_B")) && !func_309("DARTS_AIM_HLP")) && !func_309("DARTS_STD_HLP")) && !func_309("DARTS_FST_HLP"))
				{
					if (func_3(&(uParam3->f_666), 24))
					{
						func_424("DARTS_LEVEL", -1);
						unk_0xCED9E32812D6C7C7(&(Global_113386.f_18970.f_6), iLocal_294);
						func_337(&(uParam3->f_666), 24, 0);
					}
				}
				if ((((uParam0->f_422[iLocal_30] % 2) == 0 && uParam0->f_422[iLocal_30] < 41) && iLocal_31 == 0) && !iLocal_272)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_337(&(uParam3->f_666), 6, 1);
					}
					iLocal_272 = 1;
				}
				else if (uParam0->f_422[iLocal_30] == 50 && !iLocal_272)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_337(&(uParam3->f_666), 6, 1);
					}
					iLocal_272 = 1;
				}
				else if (func_299(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam1, bVar0, 0, 0, uParam0->f_248))
				{
					unk_0xBA6C3C5E9E5A9442();
					uParam3->f_670 = (uParam3->f_670 - 1);
					uParam0->f_1 = 3;
				}
				else if (!iLocal_269)
				{
					if (!func_426(uParam4))
					{
						func_297(uParam4);
					}
					else if (func_7(uParam4) > 20f)
					{
						func_296(uLocal_263[(1 - iLocal_30)]);
						func_427(uParam4);
						iLocal_269 = 1;
					}
				}
			}
			else if (iLocal_31 == 0)
			{
				iLocal_292 = 0;
				func_295(&(uParam0->f_422), &(uParam0->f_249));
				func_292(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			else if (unk_0x83666F9FB8FEBD4B() > unk_0x5853B15F78E1A265(1250, 2500))
			{
				func_295(&(uParam0->f_422), &(uParam0->f_249));
				func_292(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			break;
		
		case 3:
			if (func_279(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_248, 0))
			{
				uParam0->f_436++;
				uParam0->f_455 = func_278(uParam0);
				uParam0->f_1 = 4;
			}
			break;
		
		case 4:
			if (!func_3(&(uParam3->f_666), 5))
			{
				func_276(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_455);
			}
			func_261(uParam0, uParam3);
			break;
		
		case 5:
			func_254(uParam0, uParam2, uParam3);
			if (func_426(uParam4))
			{
				func_427(uParam4);
			}
			break;
		
		case 6:
			func_253(uParam0, uParam3);
			break;
	}
}

void func_253(var uParam0, var uParam1)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	float fVar5;
	
	iLocal_292++;
	iLocal_30 = 1;
	iLocal_31 = 0;
	iLocal_276 = 1;
	while (iLocal_31 < 3 && uParam0->f_1 == 6)
	{
		if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_25)
			{
				iLocal_31++;
			}
			else
			{
				func_276(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
				func_261(uParam0, uParam1);
			}
		}
		else if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24)
		{
			if (bLocal_275)
			{
				if (unk_0xE5965CDF24F93A9F(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					unk_0x4BDA5AFD88C085EB(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]));
				}
			}
			else
			{
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				Var0 = { unk_0x6DB7FBD602C51670(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_55), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
				if (unk_0xE5965CDF24F93A9F(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					unk_0xC64B6E13A6A7F517(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], Var0, 1, 0, 0, 1);
				}
			}
			func_276(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			func_261(uParam0, uParam1);
			if (bLocal_275)
			{
				if (iLocal_277)
				{
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/] = unk_0x0E536D72AB30F4C8(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_1, Local_79, 1, 1, 0);
					Var0 = { unk_0x6DB7FBD602C51670(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_55), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
					unk_0xC64B6E13A6A7F517(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], Var0, 1, 0, 0, 1);
					fVar3 = unk_0xC4EAB25A108C2429(0f, 90f);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17 = { 90f, fVar3, uParam0->f_243.f_4 };
					unk_0x8CE3D365F064F69E(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17, 0, 1);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				}
			}
		}
		else
		{
			func_295(&(uParam0->f_422), &(uParam0->f_249));
			func_292(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			uParam0->f_436++;
			func_276(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_30] == 0)
			{
				if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
				{
					uParam0->f_432[iLocal_30]++;
				}
				func_337(&(uParam1->f_666), 2, 0);
				func_337(&(uParam1->f_666), 3, 0);
				func_337(&(uParam1->f_666), 4, 0);
				func_337(&(uParam1->f_666), 5, 1);
				unk_0x5AE11BC36633DE4E(0);
			}
			func_261(uParam0, uParam1);
			if (bLocal_275)
			{
				if (iLocal_277)
				{
					iVar4 = 0;
					while (iVar4 < iLocal_31 + 1)
					{
						if (!uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_23)
						{
							uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/] = unk_0x0E536D72AB30F4C8(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_1, Local_79, 1, 1, 0);
							Var0 = { unk_0x6DB7FBD602C51670(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_11.f_1 + fLocal_55), uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_11.f_2) };
							if (unk_0xE5965CDF24F93A9F(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/]))
							{
								unk_0xC64B6E13A6A7F517(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/], Var0, 1, 0, 0, 1);
							}
							fVar5 = unk_0xC4EAB25A108C2429(0f, 90f);
							uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_17 = { 90f, fVar5, uParam0->f_243.f_4 };
							unk_0x8CE3D365F064F69E(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_17, 0, 1);
							uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_23 = 1;
							uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_24 = 0;
						}
						iVar4++;
					}
				}
			}
		}
	}
	uParam0->f_1 = 5;
	if (iLocal_292 > 2)
	{
		uParam0->f_1 = 5;
	}
}

void func_254(var uParam0, var uParam1, var uParam2)
{
	struct<3> Var0;
	int iVar3;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (uParam0->f_248 == 1)
			{
				func_260();
			}
			if (iLocal_30 == 0)
			{
				if (func_3(&(uParam2->f_666), 3))
				{
					func_259("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 4))
				{
					func_258("DARTS_ONE_PT", 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 2))
				{
					func_259("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else
				{
					func_259("DARTS_SWITCH_C", uParam0->f_422[iLocal_30], 5000, 0);
				}
			}
			else if (func_3(&(uParam2->f_666), 3))
			{
				func_259("DARTS_OPP_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 4))
			{
				func_258("DARTS_ONE_PT", 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 2))
			{
				func_259("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_259("DARTS_SWITCH_B", uParam0->f_422[iLocal_30], 5000, 0);
			}
			unk_0x5AE11BC36633DE4E(0);
			uParam0->f_2 = 2;
			break;
		
		case 1:
			if (unk_0xF09A4F413B0D30EB(2, 190))
			{
				iLocal_290++;
				if (iLocal_290 >= uParam0->f_436)
				{
					iLocal_290 = 0;
				}
				Var0 = { unk_0x6B62510F212526DC(uParam0->f_5[iLocal_30 /*79*/][iLocal_290 /*26*/], 1) };
				func_53(Var0);
			}
			if (unk_0xF09A4F413B0D30EB(2, 189))
			{
				iLocal_290 = (iLocal_290 - 1);
				if (iLocal_290 < 0)
				{
					iLocal_290 = (uParam0->f_436 - 1);
				}
				Var0 = { unk_0x6B62510F212526DC(uParam0->f_5[iLocal_30 /*79*/][iLocal_290 /*26*/], 1) };
				func_53(Var0);
			}
			if (unk_0xF09A4F413B0D30EB(2, 202))
			{
				Var0 = { unk_0x6B62510F212526DC(uParam0->f_5[iLocal_30 /*79*/][iLocal_290 /*26*/], 1) };
				func_55(Var0, 0, 0);
				uParam0->f_2 = 2;
			}
			if (unk_0xF09A4F413B0D30EB(2, 201))
			{
				iLocal_266 = 1;
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			if (unk_0xF09A4F413B0D30EB(2, 201) || (iLocal_276 && bLocal_275))
			{
				iLocal_266 = 1;
			}
			if ((unk_0xF09A4F413B0D30EB(2, 189) || unk_0xF09A4F413B0D30EB(2, 190)) && uParam0->f_248 == 1)
			{
				Var0 = { unk_0x6B62510F212526DC(uParam0->f_5[iLocal_30 /*79*/][iLocal_290 /*26*/], 1) };
				func_55(Var0, 1, 0);
				uParam0->f_2 = 1;
			}
			if (!func_3(&(uParam2->f_666), 6))
			{
				if (!iLocal_271)
				{
					if (func_257(iLocal_30 == 0, &(uLocal_263[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
					{
						iLocal_271 = 1;
					}
				}
				else if ((unk_0x320D1840B6DAA1CC() % 500) < 50)
				{
				}
			}
			else if (!iLocal_271)
			{
				if (func_256(iLocal_30 == 0, &(uLocal_263[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
				{
					iLocal_271 = 1;
				}
			}
			else if ((unk_0x320D1840B6DAA1CC() % 500) < 50)
			{
			}
			if (iLocal_266 || unk_0xC9D9444186B5A374() > 2000)
			{
				iLocal_276 = 0;
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_250(&(uParam0->f_5[iLocal_30 /*79*/][iVar3 /*26*/]));
					iVar3++;
				}
				if (uParam0->f_425[iLocal_30] != uParam0->f_422[iLocal_30])
				{
					func_255(uParam1, iLocal_30, uParam0->f_422[iLocal_30]);
					unk_0xD336F8D9637B963F(-1, "DARTS_SCOREBOARD_MASTER", uParam0->f_243.f_1, 0, 0, 0, 0);
				}
				uParam0->f_425[iLocal_30] = uParam0->f_422[iLocal_30];
				iLocal_31 = 0;
				uParam0->f_428 = 0;
				if (iLocal_30 == 0)
				{
					iLocal_30 = 1;
				}
				else
				{
					iLocal_30 = 0;
				}
				func_440(uParam1, iLocal_30);
				iLocal_99 = 0;
				func_419();
				if (!bLocal_275)
				{
					unk_0xD016D3608079EEE3();
				}
				iLocal_93 = 0;
				uParam2->f_670 = 3;
				iLocal_272 = 0;
				iLocal_269 = 0;
				iLocal_271 = 0;
				iLocal_266 = 0;
				iLocal_290 = 0;
				uParam0->f_436 = 0;
				uParam0->f_1 = 2;
				uParam0->f_2 = 0;
			}
			break;
	}
}

void func_255(var uParam0, int iParam1, int iParam2)
{
	unk_0xEA5DEA46C3EE64D3(*uParam0, "ADD_DARTS_SCORE");
	unk_0x4F47E317C74C543B(iParam1);
	unk_0x4F47E317C74C543B(iParam2);
	unk_0x6F06CF0E9AB02847();
}

int func_256(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 30 && bParam0) || iParam3 < 20)
		{
			unk_0xCED9E32812D6C7C7(&uVar0, 0);
		}
		if ((iParam2 <= 30 && bParam0) || iParam3 >= 20)
		{
			unk_0xCED9E32812D6C7C7(&uVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 20 && !bParam0) || iParam4 < 30)
		{
			unk_0xCED9E32812D6C7C7(&uVar0, 1);
		}
		if ((iParam2 <= 20 && !bParam0) || iParam4 >= 30)
		{
			unk_0xCED9E32812D6C7C7(&uVar0, 3);
		}
	}
	iVar1 = unk_0x5853B15F78E1A265(0, 100);
	iVar2 = unk_0x5853B15F78E1A265(0, 100);
	if (iVar2 < 85)
	{
		if (BitTest(uVar0, 0))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xE2D3D51028F0428A(), "GAME_GOOD_SELF", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xE2D3D51028F0428A(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68)
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 1))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xE2D3D51028F0428A(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 3))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xE2D3D51028F0428A(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_257(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 100 && bParam0) || (iParam4 - iParam3) > 75)
		{
			unk_0xCED9E32812D6C7C7(&uVar0, 0);
		}
		if ((iParam2 < 70 && bParam0) || (iParam3 - iParam4) < 50)
		{
			unk_0xCED9E32812D6C7C7(&uVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 75 && !bParam0) || (iParam3 - iParam4) > 50)
		{
			unk_0xCED9E32812D6C7C7(&uVar0, 1);
		}
		if ((iParam2 < 40 && !bParam0) || (iParam4 - iParam3) < 30)
		{
			unk_0xCED9E32812D6C7C7(&uVar0, 3);
		}
	}
	iVar1 = unk_0x5853B15F78E1A265(0, 100);
	iVar2 = unk_0x5853B15F78E1A265(0, 100);
	if (iVar2 < 75)
	{
		if (BitTest(uVar0, 0))
		{
			if (iVar1 < 35)
			{
				func_4(unk_0xE2D3D51028F0428A(), "DARTS_HAPPY", 1, 4);
			}
			else if (iVar1 < 70)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 85)
			{
				func_4(unk_0xE2D3D51028F0428A(), "GAME_GOOD_SELF", 1, 4);
			}
			else
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xE2D3D51028F0428A(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68 && !unk_0xE5965CDF24F93A9F(func_504()))
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 1))
		{
			if (iVar1 < 40)
			{
				func_4(unk_0xE2D3D51028F0428A(), "DARTS_PLAYING_WELL", 1, 4);
			}
			else if (iVar1 < 60)
			{
				func_4(unk_0xE2D3D51028F0428A(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 80)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (BitTest(uVar0, 3))
		{
			if (iVar1 < 33)
			{
				func_4(unk_0xE2D3D51028F0428A(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 66)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(unk_0xE2D3D51028F0428A(), "GAME_HECKLE", 1, 4);
			}
			return 1;
		}
	}
	return 0;
}

void func_258(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x38BD019DECCC5482(sParam0);
	unk_0x23D3EE043DE19C4B(iParam1, 1);
}

void func_259(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x38BD019DECCC5482(sParam0);
	unk_0x2AE954BA77A66307(iParam1);
	unk_0x23D3EE043DE19C4B(iParam2, 1);
}

void func_260()
{
	unk_0xDD786B89B15AA63F(uLocal_129, 1);
	unk_0xDD786B89B15AA63F(uLocal_120, 0);
}

void func_261(var uParam0, var uParam1)
{
	uParam0->f_455 = 0;
	if (!func_3(&(uParam1->f_666), 5))
	{
		uParam0->f_422[iLocal_30] = (uParam0->f_422[iLocal_30] - uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
		uParam0->f_428 = (uParam0->f_428 + uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
	}
	if (func_3(&(uParam1->f_666), 5))
	{
		func_273(uParam0);
		func_337(&(uParam1->f_666), 5, 0);
	}
	else
	{
		uParam0->f_429[iLocal_30]++;
		if (iLocal_30 == 0)
		{
			func_271(4);
			iLocal_151[10]++;
		}
		if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_30] == 0)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_271(0);
					iLocal_151[1]++;
				}
			}
			func_337(&(uParam1->f_666), 2, 0);
			func_337(&(uParam1->f_666), 3, 0);
			func_337(&(uParam1->f_666), 4, 0);
			func_337(&(uParam1->f_666), 5, 1);
			func_273(uParam0);
			func_337(&(uParam1->f_666), 5, 0);
			unk_0x5AE11BC36633DE4E(0);
		}
		else if ((uParam0->f_422[iLocal_30] == 1 || uParam0->f_422[iLocal_30] < 0) || (uParam0->f_422[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2))
		{
			if (uParam0->f_422[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2)
			{
				func_259("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				func_337(&(uParam1->f_666), 3, 1);
			}
			else if (uParam0->f_422[iLocal_30] == 1)
			{
				func_337(&(uParam1->f_666), 4, 1);
			}
			else if (iLocal_30 == 1)
			{
				func_259("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_259("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			if (!iLocal_271)
			{
				if (func_270(uLocal_263[(1 - iLocal_30)]))
				{
					iLocal_271 = 1;
				}
			}
			uParam0->f_422[iLocal_30] = uParam0->f_425[iLocal_30];
			if (uParam0->f_1 == 6)
			{
			}
			unk_0xC1B1E9A034A63A62(0);
			uParam0->f_1 = 5;
			if (iLocal_30 == 0)
			{
				uParam0->f_435++;
			}
			func_337(&(uParam1->f_666), 2, 1);
		}
		else
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_269(uParam1, 1);
					func_271(0);
					iLocal_151[1]++;
				}
				if (!iLocal_271 && !iLocal_276)
				{
					if (func_268(uLocal_263[iLocal_30]))
					{
						iLocal_271 = 1;
					}
				}
			}
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 0)
			{
				if (!iLocal_271 && !iLocal_276)
				{
					func_267(uLocal_263[(1 - iLocal_30)]);
					iLocal_271 = 1;
				}
			}
			if (uParam0->f_428 == 180)
			{
				if (!iLocal_271 && !iLocal_276)
				{
					if (func_266(uLocal_263[1], iLocal_30 == 0))
					{
						iLocal_271 = 1;
					}
				}
				if (iLocal_30 == 0)
				{
					func_269(uParam1, 0);
					func_271(1);
					iLocal_151[2]++;
				}
			}
			if (uParam0->f_428 == 140)
			{
				if (!iLocal_271 && !iLocal_276)
				{
					if (func_264(uLocal_263[iLocal_30], iLocal_30 == 0))
					{
						iLocal_271 = 1;
					}
				}
			}
			if (iLocal_30 == 0)
			{
				if (iLocal_31 < 2)
				{
					if (uParam0->f_422[iLocal_30] <= 170 && !func_3(&(uParam1->f_666), 18))
					{
						func_337(&(uParam1->f_666), 18, 1);
					}
					if (!func_3(&(uParam1->f_666), 19) && func_3(&(uParam1->f_666), 21))
					{
						func_337(&(uParam1->f_666), 19, 1);
					}
					if (((uParam0->f_422[iLocal_30] < 41 && uParam0->f_422[iLocal_30] > 0) && (uParam0->f_422[iLocal_30] % 2) == 0) || uParam0->f_422[iLocal_30] == 50)
					{
						if (uParam0->f_422[iLocal_30] == 50)
						{
						}
						if (!iLocal_270)
						{
							func_263(uLocal_263[1]);
							iLocal_270 = 1;
						}
						if (!uParam0->f_456)
						{
							uParam0->f_456 = 1;
						}
						if (!func_3(&(uParam1->f_666), 6))
						{
							func_337(&(uParam1->f_666), 6, 1);
						}
					}
					else if (uParam0->f_456)
					{
						uParam0->f_456 = 0;
					}
				}
			}
			if (iLocal_30 == 0 && iLocal_31 < 2)
			{
				func_262("DARTS_REMAIN", (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[iLocal_30], 7500, 0);
			}
			else if (iLocal_30 == 1 && iLocal_31 == 2)
			{
			}
			else if (uParam0->f_1 != 6)
			{
				func_329(&(uParam0->f_1));
			}
			uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_25 = 1;
			iLocal_31++;
			unk_0xC1B1E9A034A63A62(0);
			if (uParam0->f_1 != 6)
			{
				if (uParam0->f_456 && uParam0->f_248 == 1)
				{
					uParam0->f_1 = 0;
				}
				else
				{
					uParam0->f_1 = 2;
				}
			}
			if (iLocal_31 == 3)
			{
				iLocal_31 = 2;
				uParam0->f_1 = 5;
			}
			if (iLocal_30 == 0)
			{
				uParam0->f_435 = 0;
			}
			func_337(&(uParam1->f_666), 3, 0);
			func_337(&(uParam1->f_666), 2, 0);
			func_337(&(uParam1->f_666), 4, 0);
		}
	}
}

void func_262(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iParam4 = iParam4;
	unk_0x38BD019DECCC5482(sParam0);
	unk_0x2AE954BA77A66307(iParam1);
	unk_0x2AE954BA77A66307(iParam2);
	unk_0x23D3EE043DE19C4B(iParam3, 1);
}

void func_263(int iParam0)
{
	if (!unk_0xF68107C40359970C(iParam0))
	{
		func_4(iParam0, "DARTS_1_DART_AWAY", 0, 4);
	}
}

int func_264(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x5853B15F78E1A265(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0xE5965CDF24F93A9F(func_504()))
		{
			if (bParam1)
			{
				func_4(unk_0xE2D3D51028F0428A(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(func_504(), "DARTS_140", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_265())
			{
				func_4(unk_0xE2D3D51028F0428A(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_140", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_265()
{
	if (BitTest(unk_0x5853B15F78E1A265(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_266(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x5853B15F78E1A265(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0xE5965CDF24F93A9F(func_504()))
		{
			if (bParam1)
			{
				func_4(unk_0xE2D3D51028F0428A(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(func_504(), "DARTS_180", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_265())
			{
				func_4(unk_0xE2D3D51028F0428A(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_180", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_267(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x5853B15F78E1A265(0, 100);
	if (iVar0 < 75)
	{
		if (iParam0 == unk_0xE2D3D51028F0428A())
		{
			iVar1 = 1;
		}
		if (!unk_0xF68107C40359970C(iParam0))
		{
			func_4(iParam0, "DARTS_MISS_BOARD", iVar1, 4);
		}
		return 1;
	}
	return 0;
}

int func_268(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x5853B15F78E1A265(0, 100);
	if (iVar0 < 100)
	{
		func_4(iParam0, "DARTS_BULLSEYE", 0, 4);
		return 1;
	}
	return 0;
}

void func_269(var uParam0, int iParam1)
{
	uParam0->f_679 = 1;
	uParam0->f_682 = iParam1;
}

int func_270(int iParam0)
{
	int iVar0;
	
	if (iParam0 == unk_0xE2D3D51028F0428A())
	{
		iVar0 = 1;
	}
	if (!unk_0xF68107C40359970C(iParam0))
	{
		func_4(iParam0, "DARTS_BUST", iVar0, 4);
	}
	return 1;
}

void func_271(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Global_113386.f_18970++;
			func_272("DARTS_STAT_NUM_BULLSEYES", Global_113386.f_18970);
			break;
		
		case 1:
			Global_113386.f_18970.f_1++;
			func_272("DARTS_STAT_NUM_180S", Global_113386.f_18970.f_1);
			break;
		
		case 2:
			Global_113386.f_18970.f_2++;
			func_272("DARTS_STAT_NUM_WINS", Global_113386.f_18970.f_2);
			break;
		
		case 3:
			Global_113386.f_18970.f_3++;
			func_272("DARTS_STAT_NUM_LOSS", Global_113386.f_18970.f_3);
			break;
		
		case 4:
			Global_113386.f_18970.f_4++;
			func_272("DARTS_STAT_DARTS_THROWN", Global_113386.f_18970.f_4);
			break;
		
		case 5:
			Global_113386.f_18970.f_5++;
			func_272("DARTS_STAT_NUM_GAMES", Global_113386.f_18970.f_5);
			break;
		
		case 7:
			Global_113386.f_18970.f_7 = (unk_0xBBDA792448DB5A89(Global_113386.f_18970.f_2) / unk_0xBBDA792448DB5A89(Global_113386.f_18970.f_5));
			break;
		
		case 8:
			Global_113386.f_18970.f_8 = (unk_0xBBDA792448DB5A89(Global_113386.f_18970.f_4) / unk_0xBBDA792448DB5A89(Global_113386.f_18970.f_5));
			break;
	}
}

void func_272(char* sParam0, var uParam1)
{
}

void func_273(var uParam0)
{
	if (!uParam0->f_460)
	{
		uParam0->f_460 = 1;
	}
	func_271(5);
	unk_0xD016D3608079EEE3();
	unk_0x3410421C60BF7143(1);
	if (unk_0xA37204C64473B324(func_420(2)))
	{
		unk_0x0AF8D3A06BB92903(func_420(2));
	}
	if (uParam0->f_248 == 1)
	{
		func_260();
	}
	if (iLocal_30 == 0)
	{
		uParam0->f_454 = 1;
		iLocal_280 = 1;
		uParam0->f_446[iLocal_30]++;
		uParam0->f_437[iLocal_30]++;
		func_271(2);
		iLocal_151[8]++;
	}
	else
	{
		uParam0->f_454 = 0;
		uParam0->f_446[iLocal_30]++;
		uParam0->f_437[iLocal_30]++;
		func_271(3);
		iLocal_151[9]++;
	}
	func_271(7);
	func_441(&(uParam0->f_254));
	if (func_275(uParam0))
	{
		uParam0->f_449[0] = 0;
		uParam0->f_449[1] = 0;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_443[iLocal_30]++;
		if (!uParam0->f_458)
		{
			if (uParam0->f_454)
			{
				func_274(1);
			}
			uParam0->f_458 = 1;
		}
		if (uParam0->f_454)
		{
			iLocal_151[3]++;
			iLocal_298 = 0;
		}
		else
		{
			iLocal_151[5]++;
			iLocal_298 = 3;
		}
		*uParam0 = 12;
	}
	else
	{
		*uParam0 = 11;
	}
	uParam0->f_1 = 2;
	unk_0x66B27A59829491D3(func_420(3));
	iLocal_277 = 1;
	uParam0->f_428 = 0;
	iLocal_99 = 0;
	uParam0->f_425[0] = 301;
	uParam0->f_425[1] = 301;
}

void func_274(bool bParam0)
{
	char* sVar0;
	
	unk_0xF30CF8286FBA13D7(0);
	switch (func_91())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0xB6E6F1FBDDE27CF3(sVar0);
}

int func_275(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_116(uParam0->f_454, 0, 1);
	switch (uParam0->f_452)
	{
		case 1:
			iVar1 = 1;
			break;
		
		case 3:
			iVar1 = 2;
			break;
		
		case 5:
			iVar1 = 3;
			break;
	}
	if (uParam0->f_446[iVar0] == iVar1)
	{
		uParam0->f_449[iVar0]++;
		uParam0->f_440[iVar0]++;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_459 = 1;
		if (iVar0 == 0)
		{
			iLocal_151[6]++;
		}
		if (uParam0->f_449[iVar0] == uParam0->f_453)
		{
			uParam0->f_459 = 0;
			return 1;
		}
	}
	return 0;
}

void func_276(var uParam0, var uParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	
	Var3 = { uParam0->f_8 };
	Var3.f_0 = (Var3.f_0 + 0.0041f);
	Var3.f_2 = (Var3.f_2 + 0.0002f);
	fVar1 = unk_0x952F3FA2E7880565(0f, 1f, Var3.f_0, Var3.f_2);
	fVar0 = func_277(Var3);
	uParam0->f_22 = fVar0;
	if (bParam2)
	{
		unk_0xD336F8D9637B963F(-1, "DARTS_HIT_DART_MASTER", uParam1->f_1, 0, 0, 0, 0);
	}
	if (fVar0 < 0.009f)
	{
		unk_0xD336F8D9637B963F(-1, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 50;
	}
	else if (fVar0 < 0.021f)
	{
		unk_0xD336F8D9637B963F(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 25;
	}
	else if (fVar0 > 0.3f)
	{
		unk_0xD336F8D9637B963F(-1, "DARTS_HIT_WALL_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else if (fVar0 >= 0.226f)
	{
		unk_0xD336F8D9637B963F(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else
	{
		if (fVar0 > 0.1285f && fVar0 < 0.1405f)
		{
			uParam0->f_21 = 3;
			unk_0xD336F8D9637B963F(-1, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else if (fVar0 > 0.2132f && fVar0 < 0.226f)
		{
			uParam0->f_21 = 2;
			unk_0xD336F8D9637B963F(-1, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else
		{
			uParam0->f_21 = 1;
			unk_0xD336F8D9637B963F(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		if (uParam0->f_8 < 0f)
		{
			fVar1 = (360f - fVar1);
		}
		fVar2 = 0f;
		iVar6 = 0;
		iVar6 = 0;
		while (iVar6 < 21)
		{
			if (fVar1 >= (fVar2 - 9f) && fVar1 < (fVar2 + 9f))
			{
				if ((fVar1 <= (fVar2 - 8.1f) && fVar1 >= (fVar2 - 9.9f)) || (fVar1 >= (fVar2 + 8.1f) && fVar1 <= (fVar2 + 9.9f)))
				{
					unk_0xD336F8D9637B963F(-1, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, 0, 0, 0, 0);
				}
				iVar7 = (iLocal_33[iVar6] * uParam0->f_21);
				uParam0->f_20 = iVar7;
			}
			fVar2 = (fVar2 + 18f);
			iVar6++;
		}
	}
}

float func_277(struct<3> Param0)
{
	return unk_0x71D93B57D07F9804(((Param0.f_0 * Param0.f_0) + (Param0.f_2 * Param0.f_2)));
}

int func_278(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_31)
	{
		if (((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 - 0.008f) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 + 0.008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 - 0.008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 + 0.008f))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_279(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (iLocal_30 == 0 && iParam2 == 1)
	{
		func_280("Darts", "Dart_Reticules", &Local_70, 1, 0, 4, 0);
	}
	fVar6 = unk_0x51109C28352EC9A3();
	Var3 = { uParam0->f_5 * Vector(fVar6, fVar6, fVar6) * Vector(8.5f, 8.5f, 8.5f) };
	uParam0->f_2 = { uParam0->f_2 - Var3 };
	if (uParam0->f_2.f_1 > (uParam0->f_8.f_1 - 0.04f))
	{
		uParam0->f_23 = 1;
		uParam0->f_24 = 0;
		Var0 = { unk_0x6DB7FBD602C51670(uParam1->f_1, uParam1->f_4, uParam0->f_11, (uParam0->f_11.f_1 + fLocal_55), uParam0->f_11.f_2) };
		unk_0xC64B6E13A6A7F517(*uParam0, Var0, 1, 0, 0, 1);
		return 1;
	}
	Var0 = { unk_0x6DB7FBD602C51670(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_55), uParam0->f_2.f_2) };
	unk_0xC64B6E13A6A7F517(*uParam0, Var0, 1, 0, 0, 1);
	uParam0->f_17.f_1 = (uParam0->f_17.f_1 + (1000f * fVar6));
	unk_0x8CE3D365F064F69E(*uParam0, uParam0->f_17, 0, 1);
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (bParam3)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_280(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_291(&Var0);
			break;
		
		case 1:
			func_290(&Var0);
			break;
		
		case 5:
			func_289(&Var0);
			break;
		
		case 6:
			func_288(&Var0);
			break;
		
		case 7:
			func_287(&Var0);
			break;
		
		case 8:
			func_286(&Var0);
			break;
		
		case 9:
			func_285(&Var0);
			break;
	}
	if (func_283())
	{
		unk_0x2E04B7B46A3670E5(iParam5);
		if (iParam3 == 1)
		{
			unk_0xEBF08DA37D86CD05(sParam0, sParam1, func_282(Var0.f_0), func_281(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6, 0);
		}
		else
		{
			unk_0xEBF08DA37D86CD05(sParam0, sParam1, func_282(Var0.f_0), func_281(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6, 0);
		}
		unk_0x2E04B7B46A3670E5(4);
	}
}

float func_281(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_282(float fParam0)
{
	return (fParam0 + fLocal_12);
}

int func_283()
{
	if (func_284())
	{
		return 1;
	}
	if (unk_0xA829C9A2767AC8EF())
	{
		return 0;
	}
	if (unk_0xCB1EF1E7B77ADF4C() || unk_0xECD40FEF3CF43BDB())
	{
		return 0;
	}
	if (unk_0x6304243969F5A11A())
	{
		return 0;
	}
	return 1;
}

bool func_284()
{
	return Global_1574604;
}

void func_285(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_286(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_287(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_288(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_289(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_290(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_291(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

void func_292(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (*uParam3 == 50)
	{
		fVar3 = 0f;
		fVar4 = unk_0xC4EAB25A108C2429(0f, 360f);
	}
	else if (*uParam3 == 25)
	{
		fVar3 = 0.14f;
		fVar4 = unk_0xC4EAB25A108C2429(0f, 360f);
	}
	else
	{
		if (uParam3->f_1 == 3)
		{
			fVar3 = 0.1345f;
		}
		else if (uParam3->f_1 == 2)
		{
			fVar3 = 0.218f;
		}
		else
		{
			fVar3 = 0.18f;
		}
		fVar13 = 0f;
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < 21)
		{
			if (*uParam3 == iLocal_33[iVar5])
			{
				fVar4 = fVar13;
			}
			fVar13 = (fVar13 + 18f);
			iVar5++;
		}
	}
	if (!bParam4 && uParam3->f_3 < 30)
	{
		iVar5 = unk_0x5853B15F78E1A265(0, 100);
		iVar6 = unk_0x5853B15F78E1A265(func_294(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0xC4EAB25A108C2429(-35f, 35f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0xC4EAB25A108C2429(-80f, 80f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0xC4EAB25A108C2429(-60f, 60f);
		}
		else
		{
			fVar0 = unk_0xC4EAB25A108C2429(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0xC4EAB25A108C2429(-200f, -60f);
			}
			else
			{
				fVar0 = unk_0xC4EAB25A108C2429(60f, 200f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar4 = (fVar4 + fVar0);
		iVar5 = unk_0x5853B15F78E1A265(0, 100);
		iVar6 = unk_0x5853B15F78E1A265(func_294(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0xC4EAB25A108C2429(-0.25f, 0.25f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0xC4EAB25A108C2429(-0.07f, 0.07f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0xC4EAB25A108C2429(-0.15f, 0.15f);
		}
		else
		{
			fVar0 = unk_0xC4EAB25A108C2429(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0xC4EAB25A108C2429(-1f, -0.3f);
			}
			else
			{
				fVar0 = unk_0xC4EAB25A108C2429(0.3f, 1f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar3 = (fVar3 + fVar0);
	}
	uParam0->f_8 = (unk_0x0BADBFA3B172435F(fVar4) * fVar3);
	uParam0->f_8.f_1 = -0.23f;
	uParam0->f_8.f_2 = (unk_0xD0FFB162F40A139C(fVar4) * fVar3);
	uParam0->f_8 = (uParam0->f_8 - 0.0035f);
	uParam0->f_8.f_2 = (uParam0->f_8.f_2 - 0.0002f);
	if (*uParam2 == 6)
	{
		func_293(uParam0);
	}
	else
	{
		uParam0->f_23 = 0;
		uParam0->f_24 = 1;
		func_293(uParam0);
		*uParam0 = unk_0x0E536D72AB30F4C8(uParam0->f_1, Local_79, 0, 0, 0);
		fVar1 = unk_0xC4EAB25A108C2429(0f, 90f);
		Var7 = { unk_0x6DB7FBD602C51670(uParam1->f_1, uParam1->f_4, Local_82) };
		Var10 = { unk_0x6DB7FBD602C51670(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_55), uParam0->f_8.f_2) };
		fVar2 = unk_0xD12EFCAB87804BED((Var7.f_0 - Var10.f_0), (Var7.f_1 - Var10.f_1));
		fVar2 = (fVar2 - 180f);
		uParam0->f_17 = { 90f, fVar1, fVar2 };
		unk_0x8CE3D365F064F69E(*uParam0, uParam0->f_17, 0, 1);
		uParam0->f_2 = { Local_82 };
		*uParam2 = 3;
		unk_0x979FC7400A5D0CD2(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
	}
}

void func_293(var uParam0)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0.08f;
	uParam0->f_8.f_1 = -0.213f;
	Var0 = { Local_82 - uParam0->f_8 };
	fVar3 = unk_0x652D2EEEF1D3E62C(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar3, fVar3, fVar3) };
	fVar4 = unk_0xD12EFCAB87804BED(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_17.f_2 = (fVar4 - 180f);
	fVar5 = (unk_0x06A2016215B8E171(uParam0->f_17.f_2) * fVar6);
	uParam0->f_11 = { uParam0->f_8 };
	uParam0->f_11 = (uParam0->f_11 + fVar5);
	Var0 = { Local_82 - uParam0->f_11 };
	fVar3 = unk_0x652D2EEEF1D3E62C(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar3, fVar3, fVar3) };
}

int func_294(var uParam0)
{
	switch (uParam0->f_4)
	{
		case 0:
			return 25;
		
		case 1:
			return 75;
		
		case 2:
			return 90;
		
		default:
	}
	return 25;
}

void func_295(var uParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = ((*uParam0)[1] - (*uParam0)[0]);
	uParam1->f_3++;
	if ((*uParam0)[iLocal_30] > 121)
	{
		*uParam1 = 20;
		uParam1->f_1 = 3;
	}
	else if ((*uParam0)[iLocal_30] > 60)
	{
		if (((*uParam0)[iLocal_30] % 2) == 1)
		{
			if (func_265())
			{
				*uParam1 = 19;
			}
			else
			{
				*uParam1 = 17;
			}
			uParam1->f_1 = 3;
		}
		else
		{
			*uParam1 = 20;
			uParam1->f_1 = 3;
		}
	}
	else if ((*uParam0)[iLocal_30] < 61)
	{
		if ((*uParam0)[iLocal_30] == 50)
		{
			*uParam1 = 50;
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_30] > 52)
		{
			*uParam1 = ((*uParam0)[iLocal_30] - 40);
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_30] > 40)
		{
			*uParam1 = ((*uParam0)[iLocal_30] - 32);
			uParam1->f_1 = 1;
		}
		else if (((*uParam0)[iLocal_30] % 2) == 0)
		{
			iVar0 = 1;
			iVar0 = 0;
			while (iVar0 < 20)
			{
				*uParam1 = ((*uParam0)[iLocal_30] / 2);
				uParam1->f_1 = 2;
				iVar0++;
			}
		}
		else
		{
			iVar0 = 32;
			while (*uParam1 == 0 && iVar0 > 1)
			{
				if ((*uParam0)[iLocal_30] > iVar0)
				{
					*uParam1 = ((*uParam0)[iLocal_30] - iVar0);
					uParam1->f_1 = 1;
				}
				iVar0 = (iVar0 / 2);
			}
		}
	}
}

int func_296(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x5853B15F78E1A265(0, 100);
	if (iVar0 < 33)
	{
		func_4(uParam0, "DARTS_BORED", 0, 4);
		return 1;
	}
	return 0;
}

void func_297(var uParam0)
{
	func_298(uParam0, 0f);
}

void func_298(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8(BitTest(*uParam0, 4)) + fParam1);
	unk_0xCED9E32812D6C7C7(uParam0, 1);
	unk_0xB0550BC91B0159D6(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_299(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	float fVar0;
	int iVar1;
	
	switch (iParam6)
	{
		case 0:
			if (iLocal_97)
			{
				if (unk_0xC9D9444186B5A374() > 50)
				{
					iLocal_98 = 0;
					iLocal_99 = 0;
					iLocal_101 = 0;
					if (func_308(uParam0, uParam1, 0))
					{
						unk_0x979FC7400A5D0CD2(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_97 = 0;
						return 1;
					}
				}
			}
			else if (!bParam3)
			{
				if (!(unk_0xF09A4F413B0D30EB(2, 223) && iLocal_101) && !bParam4)
				{
					iLocal_98 = 1;
					iLocal_99 = 1;
					if (!iLocal_100)
					{
						func_307(uParam0, *uParam2);
						iLocal_100 = 1;
					}
					else
					{
						if (!bParam5)
						{
							func_306();
						}
						func_305(uParam0, iParam6);
						func_304(uParam0, uParam1, bParam3, 0);
					}
				}
				else
				{
					if (bParam4)
					{
						fVar0 = unk_0xC4EAB25A108C2429(0.02f, 0.1f);
						iVar1 = unk_0x5853B15F78E1A265(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8 + fVar0) < 0.33f)
							{
								uParam0->f_8 = (uParam0->f_8 + fVar0);
							}
							else
							{
								uParam0->f_8 = (uParam0->f_8 - fVar0);
							}
						}
						else if ((uParam0->f_8 - fVar0) > -0.33f)
						{
							uParam0->f_8 = (uParam0->f_8 - fVar0);
						}
						else
						{
							uParam0->f_8 = (uParam0->f_8 + fVar0);
						}
						fVar0 = unk_0xC4EAB25A108C2429(0.02f, 0.1f);
						iVar1 = unk_0x5853B15F78E1A265(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8.f_2 + fVar0) < 0.29f)
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
							}
							else
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
							}
						}
						else if ((uParam0->f_8.f_2 - fVar0) > -0.29f)
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
						}
						else
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
						}
						uParam0->f_2 = { Local_82 };
						iLocal_98 = 1;
						iLocal_99 = 1;
					}
					if (iLocal_98 && iLocal_99)
					{
						if (!iLocal_97)
						{
							unk_0xBA6C3C5E9E5A9442();
							iLocal_97 = 1;
							unk_0x5AE11BC36633DE4E(0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_97)
			{
				func_280("Darts", "Dart_Reticules", &Local_61, 1, 0, 4, 0);
				if (unk_0xC9D9444186B5A374() > 25)
				{
					if (func_308(uParam0, uParam1, 1))
					{
						unk_0x979FC7400A5D0CD2(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_97 = 0;
						return 1;
					}
				}
			}
			else if (!func_300(uParam0))
			{
				if (!iLocal_100)
				{
					func_307(uParam0, *uParam2);
				}
				else
				{
					func_306();
					func_305(uParam0, iParam6);
					func_304(uParam0, uParam1, bParam3, 0);
				}
			}
			else if (!iLocal_97)
			{
				iLocal_97 = 1;
				unk_0x5AE11BC36633DE4E(0);
			}
			break;
	}
	return 0;
}

int func_300(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = unk_0x664C0A1BF5E133FA(2, 220);
	fVar2 = unk_0x664C0A1BF5E133FA(2, 221);
	iLocal_136 = unk_0xF2DB717A73826179(fVar2);
	switch (iLocal_135)
	{
		case 0:
			if (iLocal_136 > 120)
			{
				iLocal_137 = unk_0x320D1840B6DAA1CC();
				iLocal_135 = 1;
			}
			if (iLocal_136 < -100)
			{
				iLocal_141 = unk_0xF2DB717A73826179(fVar1);
			}
			break;
		
		case 1:
			if (iLocal_136 > 120)
			{
				iLocal_137 = unk_0x320D1840B6DAA1CC();
			}
			else if ((iLocal_136 < 120 && iLocal_136 > -120) && (unk_0x320D1840B6DAA1CC() - iLocal_137) > 500)
			{
				iLocal_135 = 0;
			}
			else if (iLocal_136 < -100)
			{
				iLocal_138 = unk_0x320D1840B6DAA1CC();
				if ((iLocal_138 - iLocal_137) < 500)
				{
					iLocal_141 = unk_0xF2DB717A73826179(fVar1);
					iLocal_139 = (iLocal_138 - iLocal_137);
					iLocal_135 = 2;
				}
			}
			break;
		
		case 2:
			if (iLocal_139 > iLocal_140)
			{
				if (iLocal_139 > 100 && iLocal_139 < 150)
				{
					fLocal_144 = 0.066477f;
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_144);
				}
				else
				{
					fLocal_143 = (unk_0xBBDA792448DB5A89(iLocal_140) / unk_0xBBDA792448DB5A89(iLocal_139));
					fLocal_144 = ((1f - fLocal_143) * fLocal_147);
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_144);
				}
			}
			else
			{
				fLocal_144 = 0f;
			}
			if (iLocal_141 > 7)
			{
				fLocal_145 = (unk_0xBBDA792448DB5A89(iLocal_141) / fLocal_150);
				fLocal_146 = (fLocal_148 * fLocal_145);
				uParam0->f_8 = (uParam0->f_8 + fLocal_146);
			}
			else if (iLocal_141 < -7)
			{
				fLocal_145 = (unk_0xBBDA792448DB5A89(iLocal_141) / fLocal_149);
				fLocal_146 = (fLocal_148 * fLocal_145);
				uParam0->f_8 = (uParam0->f_8 - fLocal_146);
			}
			else
			{
				fLocal_146 = 0f;
			}
			if (fLocal_144 < 0.066477f && fLocal_146 == 0f)
			{
				func_303();
			}
			else if (fLocal_144 <= 0.066477f && fLocal_146 < 0.06f)
			{
				func_302();
			}
			else
			{
				func_301();
			}
			iVar0 = 1;
			iLocal_135 = 0;
			break;
	}
	return iVar0;
}

void func_301()
{
	Local_70.f_4 = 210;
	Local_70.f_5 = 23;
	Local_70.f_6 = 19;
}

void func_302()
{
	Local_70.f_4 = 183;
	Local_70.f_5 = 137;
	Local_70.f_6 = 0;
}

void func_303()
{
	Local_70.f_4 = 16;
	Local_70.f_5 = 184;
	Local_70.f_6 = 10;
}

void func_304(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { unk_0x6DB7FBD602C51670(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_55), uParam0->f_14.f_2) };
	if (iParam3 == 1)
	{
		Var0 = { unk_0x6DB7FBD602C51670(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_55), uParam0->f_14.f_2) };
	}
	unk_0xF00526C1598A6868(Var0, &Local_61, &(Local_61.f_1));
	if ((unk_0x320D1840B6DAA1CC() % 1000) < 50)
	{
	}
	if (!bParam2)
	{
		if (bLocal_94)
		{
			func_280("Darts", "Dart_Reticules_Zoomed", &Local_61, 1, 0, 4, 0);
		}
		else
		{
			func_280("Darts", "Dart_Reticules", &Local_61, 1, 0, 4, 0);
		}
		if (!iLocal_101)
		{
			iLocal_101 = 1;
		}
	}
}

void func_305(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	
	fVar0 = 0.033367f;
	bVar7 = false;
	fVar3 = unk_0x3BF65CF27F6CFBBE(2, 218);
	fVar4 = unk_0x3BF65CF27F6CFBBE(2, 219);
	fVar5 = unk_0x664C0A1BF5E133FA(2, 220);
	fVar6 = unk_0x664C0A1BF5E133FA(2, 221);
	if (unk_0x3A76A0944BE2C291(2))
	{
		if (unk_0x48053974ED6F63CE(fVar5) > unk_0x48053974ED6F63CE(fVar3) || unk_0x48053974ED6F63CE(fVar6) > unk_0x48053974ED6F63CE(fVar4))
		{
			fVar3 = fVar5;
			fVar4 = fVar6;
			bVar7 = false;
		}
		else
		{
			if (unk_0x2ED671F67654FD28())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0xC63A09AA9006F776())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0x4C1B8C5717647539(2, 227))
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.06f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.06f));
			}
			else
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.03f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.03f));
			}
			uParam0->f_8 = func_14(uParam0->f_8, -0.33f, 0.33f);
			uParam0->f_8.f_2 = func_14(uParam0->f_8.f_2, -0.29f, 0.29f);
			bVar7 = true;
		}
	}
	if (!bVar7)
	{
		if (unk_0x3A76A0944BE2C291(2))
		{
			if (fVar5 != 0f || fVar6 != 0f)
			{
				fVar3 = fVar5;
				fVar4 = fVar6;
			}
		}
		if (fVar3 > 0f)
		{
			if ((uParam0->f_8 + (fLocal_92 * fVar0)) < 0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 + (fLocal_92 * fVar0));
			}
		}
		else if (fVar3 < 0f)
		{
			if ((uParam0->f_8 - (fLocal_92 * fVar0)) > -0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 - (fLocal_92 * fVar0));
			}
		}
		if (fVar4 > 0f)
		{
			if ((uParam0->f_8.f_2 - (fLocal_92 * fVar0)) > -0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fLocal_92 * fVar0));
			}
		}
		else if (fVar4 < 0f)
		{
			if ((uParam0->f_8.f_2 + (fLocal_92 * fVar0)) < 0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fLocal_92 * fVar0));
			}
		}
	}
	uParam0->f_14 = { uParam0->f_8 };
	if (iParam1 == 0)
	{
		fVar2 = unk_0xC4EAB25A108C2429((0f - fLocal_89), (0f + fLocal_89));
		fVar1 = unk_0xC4EAB25A108C2429((0f - fLocal_88), (0f + fLocal_88));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0xC4EAB25A108C2429((0f - fLocal_89), (0f + fLocal_89));
		fVar1 = unk_0xC4EAB25A108C2429((0f - fLocal_88), (0f + fLocal_88));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.29f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.29f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
	if (iParam1 == 1)
	{
		fLocal_92 = 0.5f;
		if (iLocal_135 == 1)
		{
			fVar8 = 0.06f;
			fVar9 = 0.08f;
		}
		else
		{
			fVar8 = 0.02f;
			fVar9 = 0.03f;
		}
		fVar2 = unk_0xC4EAB25A108C2429((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0xC4EAB25A108C2429((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0xC4EAB25A108C2429((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0xC4EAB25A108C2429((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
}

void func_306()
{
	if (unk_0x4C1B8C5717647539(2, 227))
	{
		fLocal_92 = 0.3f;
	}
	else
	{
		fLocal_92 = 0.1f;
	}
	if (unk_0x4C1B8C5717647539(2, 229))
	{
		if (bLocal_94)
		{
			if (unk_0x83666F9FB8FEBD4B() > iLocal_142)
			{
				fLocal_88 = fLocal_90;
				fLocal_89 = fLocal_91;
				fLocal_92 = 0.1f;
				bLocal_94 = false;
			}
		}
		else if (iLocal_93 < 1)
		{
			fLocal_88 = 0.03f;
			fLocal_89 = 0.05f;
			fLocal_92 = 0.1f;
			unk_0xC1B1E9A034A63A62(0);
			bLocal_94 = true;
			iLocal_93++;
		}
		else if ((((((!func_309("DARTS_FST_HLP") && !func_309("DARTS_AIM_HLP")) && !func_309("DARTS_CLOCK")) && !func_309("DARTS_STD_HLP")) && !func_309("DARTS_INSTR_W")) && !func_309("DARTS_INSTR_B")) && !iLocal_95)
		{
			iLocal_95 = 1;
			if (!BitTest(Global_113347, 1))
			{
				func_424("DARTS_SHT_USE", -1);
				unk_0xCED9E32812D6C7C7(&Global_113347, 1);
			}
		}
	}
	else if (bLocal_94)
	{
		fLocal_88 = fLocal_90;
		fLocal_89 = fLocal_91;
		fLocal_92 = 0.1f;
		bLocal_94 = false;
	}
}

void func_307(var uParam0, struct<4> Param1, var uParam5, var uParam6)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	Var0.f_0 = (Var0.f_0 + unk_0xC4EAB25A108C2429(-0.1f, 0.1f));
	Var0.f_2 = (Var0.f_2 + unk_0xC4EAB25A108C2429(-0.1f, 0.1f));
	uParam0->f_8 = { Param1.f_3 + Var0 };
	uParam0->f_2 = { Local_82 };
}

int func_308(var uParam0, var uParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		unk_0xC64B6E13A6A7F517(*uParam0, Local_79, 1, 0, 0, 1);
	}
	else
	{
		*uParam0 = unk_0x0E536D72AB30F4C8(uParam0->f_1, Local_79, 0, 0, 0);
	}
	bLocal_94 = false;
	fLocal_92 = 0.1f;
	fLocal_88 = fLocal_90;
	fLocal_89 = fLocal_91;
	uParam0->f_23 = 0;
	uParam0->f_24 = 1;
	func_293(uParam0);
	fVar10 = unk_0xC4EAB25A108C2429(0f, 90f);
	Var3 = { unk_0x6DB7FBD602C51670(uParam1->f_1, uParam1->f_4, Local_82) };
	Var6 = { unk_0x6DB7FBD602C51670(uParam1->f_1, uParam1->f_4, (uParam0->f_14 + 0.0035f), (uParam0->f_14.f_1 + fLocal_55), uParam0->f_14.f_2) };
	fVar11 = unk_0xD12EFCAB87804BED((Var3.f_0 - Var6.f_0), (Var3.f_1 - Var6.f_1));
	fVar11 = (fVar11 - 180f);
	fVar9 = 90f;
	uParam0->f_17 = { fVar9, fVar10, fVar11 };
	unk_0x8CE3D365F064F69E(*uParam0, uParam0->f_17, 0, 1);
	iLocal_98 = 0;
	iLocal_100 = 0;
	if (bParam2)
	{
		func_280("Darts", "Dart_Reticules", &Local_61, 1, 0, 4, 0);
	}
	Var0 = { unk_0x6DB7FBD602C51670(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_55), uParam0->f_8.f_2) };
	unk_0xF00526C1598A6868(Var0, &Local_70, &(Local_70.f_1));
	return 1;
}

bool func_309(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

void func_310(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		if (!BitTest(Global_113347, 9))
		{
			if ((!func_309("DARTS_SHT_USE") && !func_309("DARTS_INSTR_W")) && !func_309("DARTS_INSTR_B"))
			{
				func_424("DARTS_AIM_HLP", -1);
				unk_0xCED9E32812D6C7C7(&Global_113347, 9);
			}
		}
		else if (iParam1 && !BitTest(Global_113347, 7))
		{
			if ((!func_309("DARTS_AIM_HLP") && !func_309("DARTS_INSTR_W")) && !func_309("DARTS_INSTR_B"))
			{
				func_424("DARTS_CLOCK", -1);
				unk_0xCED9E32812D6C7C7(&Global_113347, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!BitTest(Global_113347, 8))
		{
			if ((!func_309("DARTS_SHT_USE") && !func_309("DARTS_INSTR_W")) && !func_309("DARTS_INSTR_B"))
			{
				func_424("DARTS_STD_HLP", -1);
				unk_0xCED9E32812D6C7C7(&Global_113347, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!iLocal_96 && !func_309("DARTS_SHT_USE")) && !func_309("DARTS_INSTR_W")) && !func_309("DARTS_INSTR_B"))
		{
			if (!BitTest(Global_113347, 2))
			{
				func_424("DARTS_FST_HLP", -1);
				unk_0xCED9E32812D6C7C7(&Global_113347, 2);
			}
			iLocal_96 = 1;
		}
	}
}

int func_311(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	
	switch (*uParam2)
	{
		case 0:
			Var0 = { func_314(iParam0) };
			*uParam3 = { unk_0xCACAD935C0BEE14F(*uParam1, Var0) };
			func_313(*uParam3);
			unk_0x5AE11BC36633DE4E(0);
			*uParam2 = 1;
			break;
		
		case 1:
			if (unk_0xC9D9444186B5A374() > 3000 || unk_0xF09A4F413B0D30EB(2, 201))
			{
				func_312();
				*uParam2 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_312()
{
	unk_0x889B4F9D52E23DEE(uLocal_120, uLocal_132, 2000, 1, 1);
	unk_0x588DDCB644C6486A(uLocal_132, 0);
}

void func_313(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0 = { -5.5606f, -0.0106f, -131.6781f };
	uLocal_132 = unk_0x1BCEC0B1056BD6AC(26379945, Param0, Var0, 65f, 0, 2);
	unk_0x889B4F9D52E23DEE(uLocal_132, uLocal_120, 2000, 1, 1);
}

Vector3 func_314(int iParam0)
{
	float fVar0;
	struct<3> Var1;
	
	if (iParam0 == 50)
	{
		Var1 = { 0f, -0.5f, 0f };
	}
	else
	{
		fVar0 = func_317(iParam0);
		Var1.f_1 = -0.5f;
		Var1.f_0 = func_316(fVar0);
		Var1.f_2 = func_315(fVar0);
	}
	return Var1;
}

float func_315(float fParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (unk_0xD0FFB162F40A139C(fParam0) * fVar0);
	return fVar1;
}

float func_316(float fParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (unk_0x0BADBFA3B172435F(fParam0) * fVar0);
	return fVar1;
}

var func_317(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	
	iVar1 = (iParam0 / 2);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar1 == iLocal_33[iVar0])
		{
			uVar3 = fVar2;
		}
		fVar2 = (fVar2 + 18f);
		iVar0++;
	}
	return uVar3;
}

int func_318(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (unk_0x4C1B8C5717647539(2, 228))
			{
				func_325(1);
				*uParam0 = 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0x4C1B8C5717647539(2, 228))
			{
				if (!unk_0x52522E25010580A1(uLocal_129))
				{
					func_323();
					func_322(&uLocal_303, Local_334, Local_337, 30f, 10, 10, 3, 15f, 0, 0, -1f, 1);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			if (!unk_0x4C1B8C5717647539(2, 228))
			{
				*uParam0 = 3;
			}
			else
			{
				func_319(&uLocal_303, 1, 1, 0, 0, 1045220557, 0, 1065353216, 0);
			}
			break;
		
		case 3:
			func_325(0);
			func_505();
			if (unk_0x876B1078E90C91CB(uLocal_303))
			{
				if (unk_0xA24FDA4986456697(uLocal_303))
				{
					unk_0xDD786B89B15AA63F(uLocal_303, 0);
				}
				unk_0x588DDCB644C6486A(uLocal_303, 0);
			}
			*uParam0 = 0;
			return 0;
			break;
	}
	return 1;
}

void func_319(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
{
	int iVar0[4];
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	
	unk_0x7BC5E5A5FF7F278F(2);
	func_321(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0xC63A09AA9006F776())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0x3A76A0944BE2C291(2))
	{
		fVar5 = unk_0x3BF65CF27F6CFBBE(2, 239);
		fVar6 = unk_0x3BF65CF27F6CFBBE(2, 240);
		fVar7 = (fVar5 - uParam0->f_29);
		fVar8 = (fVar6 - uParam0->f_30);
		uParam0->f_29 = fVar5;
		uParam0->f_30 = fVar6;
		if (bParam4)
		{
			iVar0[2] = -unk_0xF2DB717A73826179(((fVar7 * fParam5) * 127f));
			iVar0[3] = -unk_0xF2DB717A73826179(((fVar8 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = unk_0xF2DB717A73826179(((unk_0x3BF65CF27F6CFBBE(2, 290) * fParam5) * 127f));
			iVar0[3] = unk_0xF2DB717A73826179(((unk_0x3BF65CF27F6CFBBE(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_320((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_320((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < unk_0x320D1840B6DAA1CC())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (unk_0x3A76A0944BE2C291(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = iVar0[2];
		uParam0->f_25 = iVar0[3];
		uParam0->f_27 = unk_0x320D1840B6DAA1CC() + 4000;
		uParam0->f_28 = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(unk_0xBBDA792448DB5A89(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
		uParam0->f_8 = (-(unk_0xBBDA792448DB5A89(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}
	fVar9 = (30f * unk_0x0000000050597EE2());
	Var10 = { uParam0->f_8 + uParam0->f_11 };
	if ((unk_0x3A76A0944BE2C291(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = Var10.f_0;
		uParam0->f_14.f_1 = Var10.f_1;
		uParam0->f_14.f_2 = Var10.f_2;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_14(((((Var10.f_0 - uParam0->f_14) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_14(((((Var10.f_1 - uParam0->f_14.f_1) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_14(((((Var10.f_2 - uParam0->f_14.f_2) * 0.05f) * fVar9) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_14(uParam0->f_14, unk_0xBBDA792448DB5A89(-uParam0->f_21), unk_0xBBDA792448DB5A89(uParam0->f_21));
		uParam0->f_14.f_1 = func_14(uParam0->f_14.f_1, unk_0xBBDA792448DB5A89(-uParam0->f_22), unk_0xBBDA792448DB5A89(uParam0->f_22));
		uParam0->f_14.f_2 = func_14(uParam0->f_14.f_2, unk_0xBBDA792448DB5A89(-uParam0->f_20), unk_0xBBDA792448DB5A89(uParam0->f_20));
	}
	if (unk_0x3A76A0944BE2C291(0) && bParam1)
	{
		if (uParam0->f_28)
		{
			uParam0->f_17 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_17 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (unk_0x3A76A0944BE2C291(0))
		{
			iVar13 = 40;
			iVar14 = 41;
			if (bParam6)
			{
				iVar13 = 241;
				iVar14 = 242;
			}
			if (unk_0xF01464D7AF0B7347(0, iVar13))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = unk_0x320D1840B6DAA1CC() + 4000;
				uParam0->f_28 = 0;
			}
			else if (unk_0xF01464D7AF0B7347(0, iVar14))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = unk_0x320D1840B6DAA1CC() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_14(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_14(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = unk_0xF439FF1991626CB9(2, 207);
			iVar0[3] = unk_0xF439FF1991626CB9(2, 208);
			if (bParam3)
			{
				if (unk_0xBBDA792448DB5A89(iVar0[3]) > 127f)
				{
					uParam0->f_17 = (uParam0->f_17 - IntToFloat(unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar0[3]) / 128f) * (uParam0->f_19 / 2f)))));
				}
			}
			else
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar0[1]) / 128f) * uParam0->f_19))));
				uParam0->f_17 = (uParam0->f_17 - IntToFloat(unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar0[3]) / 128f) * uParam0->f_19))));
			}
		}
		else if (bParam3)
		{
			if (unk_0xBBDA792448DB5A89(iVar0[1]) < 0f)
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar0[1]) / 128f) * uParam0->f_19))));
			}
		}
		else
		{
			uParam0->f_17 = (uParam0->f_17 + IntToFloat(unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar0[1]) / 128f) * uParam0->f_19))));
		}
	}
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0.06f) * fVar9));
	unk_0x15F5DB94F871E803(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (unk_0x876B1078E90C91CB(*uParam0))
	{
		if (unk_0xA24FDA4986456697(*uParam0))
		{
			if (unk_0x4B0B4E357722C507(*uParam0))
			{
				unk_0x584B286572B48431();
			}
		}
	}
}

int func_320(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_321(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x3BF65CF27F6CFBBE(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x3BF65CF27F6CFBBE(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x3BF65CF27F6CFBBE(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x3BF65CF27F6CFBBE(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xF98FF61CD2D3500D(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x1EC2077A4D963881(2, 218) * 127f));
		}
		if (!unk_0xF98FF61CD2D3500D(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0x1EC2077A4D963881(2, 219) * 127f));
		}
		if (!unk_0xF98FF61CD2D3500D(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x1EC2077A4D963881(2, 220) * 127f));
		}
		if (!unk_0xF98FF61CD2D3500D(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0x1EC2077A4D963881(2, 221) * 127f));
		}
	}
	if (unk_0x3A76A0944BE2C291(2))
	{
		if (bParam5)
		{
			if (unk_0xC63A09AA9006F776())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0x2ED671F67654FD28())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_322(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param4 };
	uParam0->f_7 = fParam7;
	uParam0->f_20 = iParam8;
	uParam0->f_21 = iParam9;
	uParam0->f_22 = iParam10;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam7;
	uParam0->f_18 = fParam7;
	uParam0->f_23 = iParam12;
	uParam0->f_19 = fParam11;
	*uParam0 = unk_0xB93A4265CB0F5B1F("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0xDD786B89B15AA63F(*uParam0, 1);
	unk_0x15F5DB94F871E803(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		unk_0x9BAE3263D9B1FCB9(*uParam0, "HAND_SHAKE", 0.19f);
	}
	unk_0x850D4EF3D40FB068(1, false, 3000, 1, 0, 0);
	if (fParam14 > 0f)
	{
		unk_0x74789DA66781DB64(*uParam0, fParam14);
	}
	if (uParam0->f_23)
	{
		unk_0xF3F07AAF13926729(iParam13);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_323()
{
	if (iLocal_259)
	{
		return;
	}
	func_324();
	unk_0x9E4A185A00C358E1("Darts Zoom");
	iLocal_259 = 1;
}

void func_324()
{
	if (iLocal_258 || iLocal_259)
	{
		unk_0x027F803A942FB98F();
		iLocal_258 = 0;
		iLocal_259 = 0;
	}
}

void func_325(bool bParam0)
{
	if (bParam0)
	{
		unk_0x889B4F9D52E23DEE(uLocal_129, uLocal_120, 1000, 1, 1);
	}
	else
	{
		unk_0x889B4F9D52E23DEE(uLocal_120, uLocal_129, 1000, 1, 1);
	}
}

void func_326(var uParam0)
{
	if (uParam0->f_679)
	{
		if (uParam0->f_681 == 2)
		{
			uParam0->f_681 = 0;
		}
		uParam0->f_679 = 0;
	}
	switch (uParam0->f_681)
	{
		case 0:
			func_247(&(uParam0->f_62), func_328(uParam0->f_682), "", 2000, 5, 1);
			uParam0->f_681 = 1;
			break;
		
		case 1:
			if (!func_242(&(uParam0->f_62), 0))
			{
				func_327(&(uParam0->f_62));
				uParam0->f_681 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_327(var uParam0)
{
	uParam0->f_8 = 0;
	func_427(&(uParam0->f_2));
	func_427(&(uParam0->f_5));
}

char* func_328(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DARTS_180_SPLSH";
		
		case 1:
			return "DARTS_BE_SPLSH";
		
		default:
	}
	return "DARTS_BE_SPLSH";
}

void func_329(var uParam0)
{
	if (!iLocal_99)
	{
		if (!unk_0x4C1B8C5717647539(2, 201))
		{
			iLocal_99 = 1;
		}
	}
	if ((iLocal_30 == 1 && iLocal_31 < 3) && *uParam0 != 5)
	{
		if ((unk_0x4C1B8C5717647539(2, 201) || unk_0xF09A4F413B0D30EB(2, 223)) && iLocal_99)
		{
			*uParam0 = 6;
		}
	}
}

void func_330(var uParam0, int iParam1)
{
	if (!unk_0xF1EC2C71FD1371B8())
	{
		if (iParam1 == 0)
		{
			if (!func_3(&(uParam0->f_666), 15) && !iLocal_93 > 0)
			{
				func_121(&(uParam0->f_509), 0, 0, 0, 1);
				func_120(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_120(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_331(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_120(&(uParam0->f_509), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				func_120(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_120(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_117(&(uParam0->f_509), 1);
				func_337(&(uParam0->f_666), 8, 0);
				func_337(&(uParam0->f_666), 16, 0);
				func_337(&(uParam0->f_666), 23, 0);
			}
			else if (iLocal_93 > 0 && !func_3(&(uParam0->f_666), 17))
			{
				func_121(&(uParam0->f_509), 0, 0, 0, 1);
				func_120(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_120(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_331(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_120(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_120(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_117(&(uParam0->f_509), 1);
				func_337(&(uParam0->f_666), 8, 0);
				func_337(&(uParam0->f_666), 16, 0);
				func_337(&(uParam0->f_666), 23, 0);
			}
		}
		else if (!func_3(&(uParam0->f_666), 16))
		{
			func_121(&(uParam0->f_509), 1, 0, 0, 1);
			func_120(&(uParam0->f_509), "DARTS_SKIP", 2, 223, 1, 1, 0);
			func_120(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
			func_117(&(uParam0->f_509), 1);
			func_337(&(uParam0->f_666), 16, 1);
			func_337(&(uParam0->f_666), 8, 0);
			func_337(&(uParam0->f_666), 15, 0);
			func_337(&(uParam0->f_666), 17, 0);
			func_337(&(uParam0->f_666), 23, 0);
		}
		unk_0xA5AAB00FA8C570A4(76, 66);
		unk_0x98F560BC13E5293F(0f, 0f, 0f, 0f);
		unk_0xB5A50A903B9AB61B();
		func_205(func_116(func_3(&(uParam0->f_666), 16), 1, 2));
		func_123(&(uParam0->f_509), 200f, 1, 0, 0, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_337(&(uParam0->f_666), 15, 0);
		func_337(&(uParam0->f_666), 16, 0);
		func_337(&(uParam0->f_666), 23, 0);
	}
}

int func_331(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = uParam0->f_123;
	if (iVar0 < 8)
	{
		uParam0->f_2[iVar0 /*15*/] = sParam1;
		uParam0->f_2[iVar0 /*15*/].f_1 = 0;
		uParam0->f_2[iVar0 /*15*/].f_2 = iParam5;
		uParam0->f_2[iVar0 /*15*/].f_12 = 0;
		uParam0->f_2[iVar0 /*15*/].f_13 = 0;
		uParam0->f_2[iVar0 /*15*/].f_14 = 0;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		unk_0xCED9E32812D6C7C7(&(uParam0->f_2[iVar0 /*15*/].f_12), 0);
		if (iParam4 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_2[iVar0 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar0 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_332(var uParam0)
{
	if (!unk_0xF1EC2C71FD1371B8())
	{
		if (!func_3(&(uParam0->f_666), 23))
		{
			func_121(&(uParam0->f_509), 0, 0, 0, 1);
			func_331(&(uParam0->f_509), "IB_MAPMOVE", 2, 21, 1, 0);
			func_120(&(uParam0->f_509), "IB_ZOOM", 2, 39, 1, 1, 0);
			func_117(&(uParam0->f_509), 1);
			func_337(&(uParam0->f_666), 23, 1);
			func_337(&(uParam0->f_666), 8, 0);
			func_337(&(uParam0->f_666), 16, 0);
			func_337(&(uParam0->f_666), 15, 0);
			func_337(&(uParam0->f_666), 17, 0);
		}
		func_123(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_337(&(uParam0->f_666), 15, 0);
		func_337(&(uParam0->f_666), 16, 0);
		func_337(&(uParam0->f_666), 23, 0);
		func_337(&(uParam0->f_666), 17, 0);
	}
}

void func_333(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!iLocal_99)
	{
		if (!unk_0x4C1B8C5717647539(2, 201) && !unk_0x4C1B8C5717647539(2, 202))
		{
			iLocal_99 = 1;
		}
		else
		{
			iLocal_99 = 0;
		}
	}
	if (*uParam0 != 13)
	{
		if (bVar0)
		{
			if (iLocal_99 && iLocal_98 == 0)
			{
				iLocal_99 = 0;
				bVar0 = false;
				bLocal_274 = false;
				unk_0x3410421C60BF7143(1);
			}
		}
		if (unk_0x26009F50A14AD073(2, 235) || unk_0x51844F589D928A86(2, 235))
		{
			if (!bLocal_274)
			{
				*uParam0 = 14;
				bLocal_274 = true;
				unk_0x3410421C60BF7143(1);
			}
		}
		else if (func_309("DARTS_QUIT"))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
			bLocal_274 = false;
		}
	}
}

void func_334(int iParam0)
{
	if (!unk_0xF68107C40359970C(uParam0))
	{
		func_4(iParam0, "DARTS_BOAST", 0, 4);
	}
}

float func_335(int iParam0)
{
	if (iParam0 < 10)
	{
		return 0.107f;
	}
	if (iParam0 < 25)
	{
		return 0.096f;
	}
	if (iParam0 < 50)
	{
		return 0.085f;
	}
	if (iParam0 < 70)
	{
		return 0.075f;
	}
	return 0.064f;
}

float func_336(int iParam0)
{
	if (iParam0 < 10)
	{
		return 0.08f;
	}
	if (iParam0 < 25)
	{
		return 0.072f;
	}
	if (iParam0 < 50)
	{
		return 0.064f;
	}
	if (iParam0 < 70)
	{
		return 0.056f;
	}
	return 0.048f;
}

void func_337(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0xCED9E32812D6C7C7(uParam0, iParam1);
	}
	else
	{
		unk_0xB0550BC91B0159D6(uParam0, iParam1);
	}
}

int func_338(int iParam0, var uParam1)
{
	if (iParam0 >= 10)
	{
		if (!BitTest(Global_113386.f_18970.f_6, 12))
		{
			*uParam1 = 12;
			return 1;
		}
	}
	return 0;
}

int func_339(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iParam0->f_422[iVar0] = 301;
		iParam0->f_425[iVar0] = 301;
		iVar0++;
	}
	iParam0->f_454 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_250(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		func_249(uParam1, iVar0);
		func_255(uParam1, iVar0, 301);
		iVar0++;
	}
	iLocal_30 = 0;
	iLocal_31 = 0;
	iParam0->f_428 = 0;
	iParam0->f_249.f_3 = 0;
	iLocal_290 = 0;
	iParam0->f_436 = 0;
	iLocal_93 = 0;
	iLocal_267 = 1;
	iLocal_268 = 0;
	iLocal_270 = 0;
	iLocal_95 = 0;
	iParam0->f_458 = 0;
	iParam0->f_456 = 0;
	iLocal_276 = 0;
	func_337(&(uParam2->f_666), 6, 0);
	func_345();
	func_343(uParam2);
	if (iParam0->f_457)
	{
		func_340(iParam0->f_457);
		iParam0->f_457 = 0;
	}
	return 1;
}

void func_340(bool bParam0)
{
	unk_0xB60709BD0E075903(0);
	if (unk_0xA24FDA4986456697(uLocal_122))
	{
		unk_0xDD786B89B15AA63F(uLocal_122, 0);
	}
	if (unk_0xA24FDA4986456697(uLocal_126))
	{
		unk_0xDD786B89B15AA63F(uLocal_126, 0);
	}
	if (unk_0xA829C9A2767AC8EF())
	{
		func_342();
		unk_0x850D4EF3D40FB068(1, false, 3000, 1, 0, 0);
		unk_0x5A7ACD1CDF509B0D(500);
	}
	func_341(bParam0);
}

void func_341(bool bParam0)
{
	if (bParam0)
	{
		unk_0xDD786B89B15AA63F(uLocal_120, 1);
	}
}

void func_342()
{
	unk_0xDD786B89B15AA63F(uLocal_122, 1);
}

void func_343(var uParam0)
{
	func_344();
	uParam0->f_670 = 3;
	func_337(&(uParam0->f_666), 15, 0);
	func_337(&(uParam0->f_666), 16, 0);
	func_337(&(uParam0->f_666), 17, 0);
}

void func_344()
{
	int iVar0;
	
	Local_164.f_66 = -1;
	Local_164.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_164.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_164.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_164.f_9[iVar0 /*7*/].f_5 = 0;
		Local_164.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_164.f_5 = 0;
	Local_164.f_5.f_1 = -1f;
	Local_164.f_5.f_2 = 0;
	Local_164.f_0 = 0;
	Local_164.f_1 = 0;
}

void func_345()
{
	unk_0xC1B1E9A034A63A62(0);
	iLocal_99 = 0;
	unk_0xD016D3608079EEE3();
}

void func_346(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_348(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23150.f_8808)
	{
		unk_0x4FEF096D3AB4AA8C(15);
		Global_23150.f_8808 = 0;
	}
	unk_0x7ED668FC4CB0F4C4(0f);
	if (Global_23150.f_6019[iVar0])
	{
		unk_0xC511E7C272201CF7(9, 0);
		Global_23150.f_6019[iVar0] = 0;
	}
	if (Global_23150.f_6005[iVar0])
	{
		unk_0x861D35D42CFD2991("CommonMenu");
		Global_23150.f_6005[iVar0] = 0;
	}
	if (Global_23150.f_6012[iVar0])
	{
		unk_0x861D35D42CFD2991("MPShopSale");
		Global_23150.f_6012[iVar0] = 0;
	}
	if (bParam0)
	{
		func_347(&(Global_23150.f_6051[iVar0 /*10*/]));
		Global_23150.f_6112[iVar0] = 0;
	}
	else
	{
		Global_23150.f_6112[iVar0] = 0;
	}
}

void func_347(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x0347CCBD719C8ADC(*uParam0))
		{
			unk_0x705B098546DEB18A(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_348(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x9315DBF7D972F07A() && unk_0xDD50B5A22807BAD4())
		{
			iParam2 = unk_0x5C5CE5291FB79534();
		}
	}
	StringCopy(&cVar0, unk_0x05CBA41180F5D521(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x2E87280918B16506(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_23150.f_6112[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23150.f_6112[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23150.f_6112[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_349(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
	unk_0x4F47E317C74C543B(iParam1);
	unk_0x4F47E317C74C543B(iParam2);
	unk_0x4F47E317C74C543B(iParam3);
	unk_0x4F47E317C74C543B(iParam4);
	unk_0x6F06CF0E9AB02847();
}

int func_350(var uParam0, var uParam1, var uParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	unk_0x7653D561C9574763(2, 200, 1);
	if (!func_3(&(uParam0->f_666), 7))
	{
		func_407(0, 0, 0, 1);
		func_406(0, -1, 1);
		if (func_405())
		{
			if (Global_4539961 == uParam0->f_660)
			{
				iVar1 = 1;
			}
			else
			{
				uParam0->f_660 = Global_4539961;
				func_404(uParam0->f_660, 1, 1);
				unk_0x91DFC8F68F6D9B05(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				switch (uParam0->f_660)
				{
					case 0:
						sVar0 = "DARTS_LEGD";
						break;
					
					case 1:
						sVar0 = "DARTS_SETD";
						break;
					
					case 2:
						sVar0 = "";
						break;
				}
				if (unk_0xE73671E3D37CF79E(sVar0))
				{
					func_403(sVar0, 0, 0);
				}
			}
			Global_4539962 = unk_0x320D1840B6DAA1CC() + 300;
		}
		else if (func_402() && unk_0x320D1840B6DAA1CC() > Global_4539962)
		{
			if (Global_4539961 == uParam0->f_660)
			{
				iVar2 = func_401(0);
				if (iVar2 == -1 || iVar2 == 1)
				{
					iVar1 = 1;
				}
			}
			Global_4539962 = unk_0x320D1840B6DAA1CC() + 300;
		}
		if (func_400(&(uParam0->f_639)))
		{
			uParam0->f_660 = (uParam0->f_660 - 1);
			if (uParam0->f_660 < 0)
			{
				uParam0->f_660 = (uParam0->f_661 - 1);
			}
			func_404(uParam0->f_660, 1, 1);
			unk_0x91DFC8F68F6D9B05(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (unk_0xE73671E3D37CF79E(sVar0))
			{
				func_403(sVar0, 0, 0);
			}
		}
		if (func_399(&(uParam0->f_642)))
		{
			uParam0->f_660++;
			if (uParam0->f_660 > (uParam0->f_661 - 1))
			{
				uParam0->f_660 = 0;
			}
			func_404(uParam0->f_660, 1, 1);
			unk_0x91DFC8F68F6D9B05(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (unk_0xE73671E3D37CF79E(sVar0))
			{
				func_403(sVar0, 0, 0);
			}
		}
		if (func_398(&(uParam0->f_633)) || func_397(&(uParam0->f_633), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662 = (uParam0->f_662 - 1);
				if (uParam0->f_662 < 0)
				{
					uParam0->f_662 = (uParam0->f_663 - 1);
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664 = (uParam0->f_664 - 1);
				if (uParam0->f_664 < 0)
				{
					uParam0->f_664 = (uParam0->f_665 - 1);
				}
			}
			unk_0x91DFC8F68F6D9B05(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_383(uParam0);
		}
		if (func_382(&(uParam0->f_636)) || func_380(&(uParam0->f_636), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662++;
				if (uParam0->f_662 > (uParam0->f_663 - 1))
				{
					uParam0->f_662 = 0;
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664++;
				if (uParam0->f_664 > (uParam0->f_665 - 1))
				{
					uParam0->f_664 = 0;
				}
			}
			unk_0x91DFC8F68F6D9B05(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_383(uParam0);
		}
		if ((unk_0xF09A4F413B0D30EB(2, 201) || iVar1 == 1) && uParam0->f_660 == 2)
		{
			*uParam1 = func_379(uParam0->f_662 + 1, 1);
			*uParam2 = func_379(uParam0->f_664 + 1, 0);
			unk_0x91DFC8F68F6D9B05(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			return 1;
		}
		func_353(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		if (unk_0x26009F50A14AD073(2, 202) || func_352())
		{
			func_351(0, 0);
			func_337(&(uParam0->f_666), 8, 0);
			func_337(&(uParam0->f_666), 7, 1);
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0x26009F50A14AD073(2, 201))
		{
			func_39(0);
			*uParam1 = -1;
			return 1;
		}
		else if (unk_0x26009F50A14AD073(2, 202))
		{
			func_383(uParam0);
			func_337(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_351(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23150.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23150.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		StringCopy(&(Global_2725950[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23150.f_4309[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23150.f_4566[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23150.f_4824[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23150.f_5480[iVar0] = 0;
		Global_23150.f_5618[iVar0] = 0;
		Global_23150.f_5747[iVar0] = 0;
		Global_23150.f_6270[iVar0] = 0f;
		Global_23150.f_5876[iVar0] = 0;
		Global_23150.f_6136[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23150.f_5447[iVar0] = 0;
		Global_23150.f_5459[iVar0] = 0f;
		Global_23150.f_5453[iVar0] = -1f;
		Global_23150.f_5466[iVar0] = 0;
		Global_23150.f_5474[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_23150.f_5355[iVar0 /*4*/]), "", 16);
		Global_23150.f_5404[iVar0] = -1;
		Global_23150.f_5417[iVar0] = 363;
		Global_23150.f_5430[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_23150.f_6411[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23150.f_7420[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23150.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4539885.f_16), "", 16);
	Global_4539885.f_20 = -1;
	Global_23150 = 0;
	Global_23150.f_5609 = 0;
	Global_23150.f_5610 = 0;
	Global_23150.f_5611 = 0;
	Global_23150.f_5613 = 0;
	Global_23150.f_5614 = 0;
	Global_23150.f_5615 = 0;
	Global_23150.f_5612 = 0;
	Global_23150.f_6265 = 0;
	Global_23150.f_6405 = 0;
	Global_23150.f_6130 = 0;
	Global_23150.f_6129 = 0;
	Global_23150.f_6131 = 0;
	StringCopy(&(Global_23150.f_5081), "", 24);
	Global_23150.f_5153 = 0;
	Global_23150.f_5154 = 0;
	Global_23150.f_5155 = 0;
	Global_23150.f_5156 = 0;
	Global_23150.f_5157 = 0;
	Global_23150.f_5158 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5087[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_5159 = 0;
	StringCopy(&(Global_4539885.f_21), "", 16);
	Global_4539885.f_61 = 0;
	Global_4539885.f_62 = 0;
	Global_4539885.f_63 = 0;
	Global_4539885.f_64 = 0;
	Global_4539885.f_65 = 0;
	Global_4539885.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4539885.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4539885.f_67 = 0;
	StringCopy(&(Global_23150.f_1), "", 16);
	Global_23150.f_5465 = 0f;
	Global_23150.f_74 = 0;
	Global_23150.f_75 = 0;
	Global_23150.f_76 = 0;
	Global_23150.f_77 = 0;
	Global_23150.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_6135 = 0;
	Global_23150.f_6134 = 0;
	Global_23150.f_6132 = 0;
	Global_23150.f_6133 = 0;
	Global_23150.f_5160 = 0;
	Global_23150.f_5161 = 0;
	Global_23150.f_5616 = 10;
	Global_23150.f_5617 = 0;
	Global_23150.f_6267 = 0f;
	Global_23150.f_6268 = 0f;
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	Global_23150.f_6121 = 0f;
	Global_23150.f_6122 = 0;
	Global_23150.f_6124 = 0;
	Global_23150.f_6123 = 0;
	Global_23150.f_6125 = 0;
	Global_23150.f_6126 = 0;
	Global_23150.f_6127 = 0;
	Global_23150.f_6128 = 0;
	Global_23150.f_8804 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23150.f_6399[iVar0] = -1;
		Global_23150.f_6402[iVar0] = -1;
		iVar0++;
	}
	Global_23150.f_5472 = 0f;
	Global_23150.f_5443 = 0;
	Global_23150.f_5473 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23150.f_6406)
	{
		Global_23150.f_6406[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_8783 = 0;
	Global_23150.f_8778 = 0;
	Global_23150.f_8788 = 0;
	Global_23150.f_8793 = 0;
	Global_23150.f_8798 = 0;
	Global_23150.f_8800 = 0;
	Global_23150.f_8806 = 0;
	Global_23147 = 0.05f;
	Global_23148 = 0.05f;
	Global_23149 = 0.225f;
	fVar2 = unk_0xF4CC509EEB975296(0);
	if (bParam0)
	{
		Global_23149 = (0.225f * (1.777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23149 = (0.225f * (1.777778f / fVar2));
	}
	else
	{
		Global_23149 = 0.225f;
	}
}

int func_352()
{
	if (unk_0x3A76A0944BE2C291(2))
	{
		if (unk_0xF09A4F413B0D30EB(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

void func_353(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	var uVar60;
	var uVar61;
	float fVar62;
	char cVar63[64];
	char cVar79[64];
	float fVar95;
	int iVar96;
	float fVar97;
	float fVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	char cVar105[16];
	float fVar109;
	float fVar110;
	float fVar111;
	float fVar112;
	float fVar113;
	
	if (!func_348(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_376(0, bParam6))
	{
		return;
	}
	unk_0xA5AAB00FA8C570A4(76, 84);
	unk_0x98F560BC13E5293F(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	if (Global_23150)
	{
		if (func_19(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = (fVar37 / fVar36);
		}
		else
		{
			Global_23150 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23149;
	}
	fVar57 = (fParam5 * fVar58);
	if (unk_0x2E87280918B16506(&(Global_23150.f_1)) == unk_0x2E87280918B16506("HIDE"))
	{
		fVar59 = Global_23148;
	}
	else
	{
		fVar59 = (((Global_23148 + fVar57) + 0.034722f) + 0f);
	}
	fVar62 = 1f;
	func_21(bParam7, &uVar60, &uVar61, &fVar62);
	if (bParam3)
	{
		if (Global_23150.f_5609 <= 1)
		{
			func_372(Global_23150.f_5609 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_23150.f_6405 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23150.f_6119)
		{
			if (unk_0x2E87280918B16506(&(Global_23150.f_1)) == unk_0x2E87280918B16506("HIDE"))
			{
				fVar51 = Global_23148;
			}
			else
			{
				if (Global_23150)
				{
					StringCopy(&cVar63, func_26(29), 64);
					StringCopy(&cVar79, func_23(29, 1), 64);
					if (unk_0x2E87280918B16506(&(Global_23150.f_7420[29 /*16*/])) == joaat("crew_logo"))
					{
						func_371(Global_23147, Global_23148, fParam5, fVar57, 0, 0, 0, 255);
						unk_0xEBF08DA37D86CD05(&cVar63, &cVar79, (Global_23147 + (fParam5 * 0.5f)), (Global_23148 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, 0, 0);
					}
					else
					{
						unk_0xEBF08DA37D86CD05(&cVar63, &cVar79, (Global_23147 + (fParam5 * 0.5f)), (Global_23148 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, 0, 0);
					}
				}
				if (Global_23150.f_8778)
				{
					iVar1 = Global_23150.f_8774;
					iVar2 = Global_23150.f_8775;
					iVar3 = Global_23150.f_8776;
					iVar4 = Global_23150.f_8777;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_371(Global_23147, (Global_23148 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_23148 + fVar57) + 0.034722f) + 0f);
				if (unk_0x2E87280918B16506(&(Global_23150.f_1)) != 0)
				{
					func_370();
					unk_0xCDDA0C58B818F6B2(&(Global_23150.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23150.f_74)
					{
						if (Global_23150.f_5[iVar14] == 2)
						{
							unk_0x2AE954BA77A66307(Global_23150.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23150.f_5[iVar14] == 3)
						{
							unk_0x957E514A6E999374(Global_23150.f_14[iVar16], Global_23150.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23150.f_5[iVar14] == 1)
						{
							unk_0x26C23BE14F66F202(&(Global_23150.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23150.f_5[iVar14] == 8)
						{
							unk_0x26C23BE14F66F202(&(Global_23150.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23150.f_5[iVar14] == 5)
						{
							unk_0x76DB21247AE4E4E2(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 6)
						{
							unk_0x26C23BE14F66F202(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 7)
						{
							unk_0x76DB21247AE4E4E2(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 9)
						{
							unk_0x76DB21247AE4E4E2(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x1A53079994915FA6((Global_23147 + 0.00390625f), ((Global_23148 + fVar57) + 0.00416664f), 0);
				}
				if (Global_23150.f_6126)
				{
					func_370();
					func_368((((Global_23147 + fParam5) - 0.00390625f) - func_369("CM_ITEM_COUNT", Global_23150.f_6127, Global_23150.f_6128)), ((Global_23148 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_23150.f_6127, Global_23150.f_6128);
				}
				else if (Global_23150.f_6122 > Global_23150.f_5616)
				{
					if (Global_23150.f_6125 != 0)
					{
						func_370();
						func_368((((Global_23147 + fParam5) - 0.00390625f) - func_369("CM_ITEM_COUNT", Global_23150.f_6125, Global_23150.f_6124)), ((Global_23148 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_23150.f_6125, Global_23150.f_6124);
					}
				}
			}
			iVar6 = Global_23150.f_6129;
			iVar9 = 0;
			fVar95 = fVar51;
			if (Global_23150.f_8788)
			{
				iVar1 = Global_23150.f_8784;
				iVar2 = Global_23150.f_8785;
				iVar3 = Global_23150.f_8786;
				iVar4 = Global_23150.f_8787;
			}
			else
			{
				unk_0x2F046C9381D8E91B(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23150.f_5616 && iVar6 <= Global_23150.f_5609)
			{
				if (iVar6 >= 0)
				{
					if (Global_23150.f_5876[iVar6])
					{
						if (Global_23150.f_5747[iVar6] && iVar6 != Global_23150.f_6129)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_23150.f_6136[iVar6] != 0f)
						{
							fVar56 = Global_23150.f_6136[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0xEBF08DA37D86CD05("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar95 + ((fVar51 - fVar95) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar95), 0f, 255, 255, 255, 255, 0, 0);
			if (Global_23150.f_6122 > Global_23150.f_5616)
			{
				if (Global_23150.f_8793)
				{
					iVar1 = Global_23150.f_8789;
					iVar2 = Global_23150.f_8790;
					iVar3 = Global_23150.f_8791;
					iVar4 = Global_23150.f_8792;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_371(Global_23147, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0x7DF13542ADA68880("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_23150.f_8806)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x2F046C9381D8E91B(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEBF08DA37D86CD05("CommonMenu", "shop_arrows_upANDdown", (Global_23147 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (unk_0x2E87280918B16506(&(Global_23150.f_5081)) != 0 && Global_23150.f_5157 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23147 + 0.0046875f);
				if (Global_23150.f_5159 != 0)
				{
					func_19(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_367(fVar42);
				unk_0xB733C0853476F0C1(&(Global_23150.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23150.f_5153)
				{
					if (Global_23150.f_5087[iVar14] == 2)
					{
						unk_0x2AE954BA77A66307(Global_23150.f_5092[iVar15]);
						iVar15++;
					}
					else if (Global_23150.f_5087[iVar14] == 3)
					{
						unk_0x957E514A6E999374(Global_23150.f_5096[iVar16], Global_23150.f_5100[iVar16]);
						iVar16++;
					}
					else if (Global_23150.f_5087[iVar14] == 1)
					{
						unk_0x26C23BE14F66F202(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 5)
					{
						unk_0x76DB21247AE4E4E2(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 6)
					{
						unk_0x26C23BE14F66F202(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 7)
					{
						unk_0x76DB21247AE4E4E2(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 9)
					{
						unk_0x76DB21247AE4E4E2(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xBD7DCBC4F2DF91F8(fVar42, (fVar51 + 0.00277776f));
				unk_0x2F046C9381D8E91B(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_371(Global_23147, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23150.f_8798)
				{
					iVar1 = Global_23150.f_8794;
					iVar2 = Global_23150.f_8795;
					iVar3 = Global_23150.f_8796;
					iVar4 = Global_23150.f_8797;
				}
				else
				{
					unk_0x2F046C9381D8E91B(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEBF08DA37D86CD05("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_367(fVar42);
				unk_0xCDDA0C58B818F6B2(&(Global_23150.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23150.f_5153)
				{
					if (Global_23150.f_5087[iVar14] == 2)
					{
						unk_0x2AE954BA77A66307(Global_23150.f_5092[iVar15]);
						iVar15++;
					}
					else if (Global_23150.f_5087[iVar14] == 3)
					{
						unk_0x957E514A6E999374(Global_23150.f_5096[iVar16], Global_23150.f_5100[iVar16]);
						iVar16++;
					}
					else if (Global_23150.f_5087[iVar14] == 1)
					{
						unk_0x26C23BE14F66F202(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 5)
					{
						unk_0x76DB21247AE4E4E2(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 6)
					{
						unk_0x26C23BE14F66F202(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 7)
					{
						unk_0x76DB21247AE4E4E2(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 9)
					{
						unk_0x76DB21247AE4E4E2(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 8)
					{
						unk_0x26C23BE14F66F202(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x1A53079994915FA6(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_23150.f_5159 != 0)
				{
					func_19(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					func_366(Global_23150.f_5159, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0xEBF08DA37D86CD05(func_26(Global_23150.f_5159), func_23(Global_23150.f_5159, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
				}
				fVar51 = (fVar51 + (((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_23150.f_5157 > 0)
				{
					if ((unk_0x320D1840B6DAA1CC() - Global_23150.f_5158) > Global_23150.f_5157)
					{
						StringCopy(&(Global_23150.f_5081), "", 24);
						Global_23150.f_5157 = -1;
					}
				}
			}
			if (unk_0x2E87280918B16506(&(Global_4539885.f_21)) != 0 && Global_4539885.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23147 + 0.0046875f);
				if (Global_4539885.f_67 != 0)
				{
					func_19(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_367(fVar42);
				unk_0xB733C0853476F0C1(&(Global_4539885.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4539885.f_61)
				{
					if (Global_4539885.f_25[iVar14] == 2)
					{
						unk_0x2AE954BA77A66307(Global_4539885.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4539885.f_25[iVar14] == 3)
					{
						unk_0x957E514A6E999374(Global_4539885.f_34[iVar16], Global_4539885.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4539885.f_25[iVar14] == 1)
					{
						unk_0x26C23BE14F66F202(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 5)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 6)
					{
						unk_0x26C23BE14F66F202(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 7)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 9)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 8)
					{
						unk_0x26C23BE14F66F202(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xBD7DCBC4F2DF91F8(fVar42, (fVar51 + 0.00277776f));
				unk_0x2F046C9381D8E91B(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_371(Global_23147, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23150.f_8798)
				{
					iVar1 = Global_23150.f_8794;
					iVar2 = Global_23150.f_8795;
					iVar3 = Global_23150.f_8796;
					iVar4 = Global_23150.f_8797;
				}
				else
				{
					unk_0x2F046C9381D8E91B(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEBF08DA37D86CD05("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_367(fVar42);
				unk_0xCDDA0C58B818F6B2(&(Global_4539885.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4539885.f_61)
				{
					if (Global_4539885.f_25[iVar14] == 2)
					{
						unk_0x2AE954BA77A66307(Global_4539885.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4539885.f_25[iVar14] == 3)
					{
						unk_0x957E514A6E999374(Global_4539885.f_34[iVar16], Global_4539885.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4539885.f_25[iVar14] == 1)
					{
						unk_0x26C23BE14F66F202(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 8)
					{
						unk_0x26C23BE14F66F202(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 5)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 6)
					{
						unk_0x26C23BE14F66F202(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 7)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 9)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x1A53079994915FA6(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4539885.f_67 != 0)
				{
					func_19(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_366(Global_4539885.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0xEBF08DA37D86CD05(func_26(Global_4539885.f_67), func_23(Global_4539885.f_67, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
				}
				fVar51 = (fVar51 + (((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4539885.f_65 > 0)
				{
					if ((unk_0x320D1840B6DAA1CC() - Global_4539885.f_66) > Global_4539885.f_65)
					{
						StringCopy(&(Global_4539885.f_21), "", 16);
						Global_4539885.f_65 = -1;
					}
				}
			}
			func_361(uVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0xA5AAB00FA8C570A4(76, 84);
			unk_0x98F560BC13E5293F(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23150.f_6119)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar96 = Global_23150.f_5609;
			if (Global_23150.f_6120)
			{
				iVar96 = (Global_23150.f_6123 - 1);
			}
			fVar97 = 0f;
			fVar98 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar96)
			{
				fVar56 = 0.034722f;
				if (Global_23150.f_6136[iVar6] != 0f)
				{
					fVar56 = Global_23150.f_6136[iVar6];
				}
				if (Global_23150.f_6120)
				{
					iVar6 = Global_23150.f_8429[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23150.f_6129 && iVar9 < Global_23150.f_5616)
				{
					bVar33 = true;
					if (Global_23150.f_6130 == iVar6)
					{
						fVar98 = fVar97;
					}
					if (Global_23150.f_5747[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23150.f_6270[iVar6] = fVar35;
				fVar34 = (Global_23147 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_23150.f_6130 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_23150.f_8800)
					{
						unk_0x2F046C9381D8E91B(Global_23150.f_8799, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else
					{
						unk_0x2F046C9381D8E91B(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					unk_0xEBF08DA37D86CD05("CommonMenu", "Gradient_Nav", (Global_23147 + (fParam5 * 0.5f)), (((fVar59 + fVar98) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar100, iVar101, iVar102, iVar103, 0, 0);
					Global_23150.f_6268 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23150.f_5617)
				{
					if (BitTest(Global_23150.f_5480[iVar6], iVar8) || Global_23150.f_5447[iVar8] == 5)
					{
						if (Global_23150.f_6120)
						{
							iVar19 = Global_23150.f_8445[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar20 = Global_23150.f_8486[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar21 = Global_23150.f_8527[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar22 = Global_23150.f_8568[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar23 = Global_23150.f_8609[((iVar9 * Global_23150.f_5617) + iVar8)];
						}
						else
						{
							Global_23150.f_8445[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar19;
							Global_23150.f_8486[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar20;
							Global_23150.f_8527[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar21;
							Global_23150.f_8568[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar22;
							Global_23150.f_8609[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar23;
						}
						iVar104 = 0;
						bVar55 = false;
						if (Global_23150.f_6402[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23150.f_6399[0])
							{
								bVar55 = true;
								iVar104 = 0;
							}
						}
						if (Global_23150.f_6402[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23150.f_6399[1])
							{
								bVar55 = true;
								iVar104 = 1;
							}
						}
						if (Global_23150.f_5453[iVar8] != -1f)
						{
							fVar34 = ((Global_23147 + 0.0046875f) + Global_23150.f_5453[iVar8]);
						}
						if ((iVar8 < 4 && Global_23150.f_5453[iVar8 + 1] != -1f) && fVar34 < Global_23150.f_5453[iVar8 + 1])
						{
							fVar46 = (Global_23150.f_5453[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_23147 + Global_23149) - 0.0046875f) - fVar34);
						}
						if ((Global_23150.f_5466[iVar8] && Global_23150.f_6265) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_23150.f_5447[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											if (Global_23150.f_2130[iVar24])
											{
												bVar53 = true;
											}
											func_359(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar55, iVar104, bVar53, bVar52);
											unk_0x27ED46EA48C0A455(&(Global_23150.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x26C23BE14F66F202(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x26C23BE14F66F202(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x76DB21247AE4E4E2(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x26C23BE14F66F202(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x76DB21247AE4E4E2(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x76DB21247AE4E4E2(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x2AE954BA77A66307(Global_23150.f_4309[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x957E514A6E999374(Global_23150.f_4566[(iVar21 + iVar27)], Global_23150.f_4695[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
										{
											fVar43 = unk_0x63F498818B4DEE3E(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_19(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_23150.f_4824[(iVar22 + iVar14)] == 2 || Global_23150.f_4824[(iVar22 + iVar14)] == 51) || Global_23150.f_4824[(iVar22 + iVar14)] == 61)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar43;
										Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar44;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											iVar99 = (iVar8 - 1);
											while (iVar99 >= 0)
											{
												if (Global_23150.f_5474[iVar99] == 2)
												{
													Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar99)] = (Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar99)] - Global_23150.f_5459[iVar8]);
												}
												iVar99 = (iVar99 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar43 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar44 = Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar54)
									{
										if (func_19(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_19(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_366(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_26(26), func_23(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_19(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_19(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_366(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_26(27), func_23(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										if (Global_23150.f_2130[iVar24])
										{
											bVar53 = true;
										}
										func_359(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_358(bVar32);
										}
										unk_0xCDDA0C58B818F6B2(&(Global_23150.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x26C23BE14F66F202(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x26C23BE14F66F202(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76DB21247AE4E4E2(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x26C23BE14F66F202(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76DB21247AE4E4E2(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76DB21247AE4E4E2(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x2AE954BA77A66307(Global_23150.f_4309[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x957E514A6E999374(Global_23150.f_4566[(iVar21 + iVar27)], Global_23150.f_4695[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23150.f_4824[(iVar22 + iVar28)] == 2 || Global_23150.f_4824[(iVar22 + iVar28)] == 51) || Global_23150.f_4824[(iVar22 + iVar28)] == 61)
											{
												if (func_19(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_19(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_366(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_23150.f_5474[iVar8] == 2)
															{
																unk_0xEBF08DA37D86CD05(func_26(Global_23150.f_4824[(iVar22 + iVar28)]), func_23(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else
															{
																unk_0xEBF08DA37D86CD05(func_26(Global_23150.f_4824[(iVar22 + iVar28)]), func_23(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x2E87280918B16506(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23150.f_5474[iVar8] == 2)
										{
											unk_0x1A53079994915FA6(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0x1A53079994915FA6((fVar34 + fVar42), fVar35, 0);
											if (func_357() && unk_0xB4C854DD86E40FDA(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23150.f_2130[iVar24])
													{
														bVar53 = true;
													}
													func_359(0, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar105, "TEST_LABEL", 16);
													fVar109 = 0f;
													fVar110 = 55f;
													fVar111 = 0.0185f;
													fVar112 = 0.004f;
													fVar113 = 0.02f;
													unk_0x3F03C2D4EFA888BC(0f, (0.35f * 0.7f));
													unk_0x71F4002CB1A0B451(255, 255, 255, 150);
													unk_0xCA4C0AD3CAFF651E((fVar34 - (fVar113 * 0.6f)), (fVar35 + (fVar111 * 0.75f)), 0.0175f, 0.035f, unk_0xF34EE736CF047844(fVar109), unk_0xF34EE736CF047844(fVar109), unk_0xF34EE736CF047844(fVar109), unk_0xF34EE736CF047844(fVar110), 0);
													unk_0xCDDA0C58B818F6B2(&cVar105);
													unk_0x2AE954BA77A66307((Global_23150.f_6129 + iVar30));
													unk_0x1A53079994915FA6((fVar34 - fVar113), (fVar35 + fVar112), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23150.f_4824[(iVar22 + iVar14)] != 2 && Global_23150.f_4824[(iVar22 + iVar14)] != 51) && Global_23150.f_4824[(iVar22 + iVar14)] != 61)
											{
												if (func_19(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_19(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_366(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_23150.f_4824[(iVar22 + iVar14)] == 30)
															{
																unk_0xEBF08DA37D86CD05(func_26(Global_23150.f_4824[(iVar22 + iVar14)]), func_23(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (Global_23147 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else if (Global_23150.f_5474[iVar8] == 2)
															{
																unk_0xEBF08DA37D86CD05(func_26(Global_23150.f_4824[(iVar22 + iVar14)]), func_23(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else
															{
																unk_0xEBF08DA37D86CD05(func_26(Global_23150.f_4824[(iVar22 + iVar14)]), func_23(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										func_359(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_358(bVar32);
										}
										unk_0x27ED46EA48C0A455("NUMBER");
										unk_0x2AE954BA77A66307(Global_23150.f_4309[iVar20]);
										fVar43 = unk_0x63F498818B4DEE3E(1);
										fVar42 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar43 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar54)
									{
										if (func_19(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_19(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_366(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_26(26), func_23(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_19(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_19(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_366(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_26(27), func_23(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_359(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar55, 0, 0, 0);
										func_356((fVar34 + fVar42), fVar35, "NUMBER", Global_23150.f_4309[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										func_359(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_358(bVar32);
										}
										unk_0x27ED46EA48C0A455("NUMBER");
										unk_0x957E514A6E999374(Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
										fVar43 = unk_0x63F498818B4DEE3E(1);
										fVar42 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar43 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar54)
									{
										if (func_19(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_19(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_366(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_26(26), func_23(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_19(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_19(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_366(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_26(27), func_23(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									func_359(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar55, 0, 0, 0);
									func_355((fVar34 + fVar42), fVar35, "NUMBER", Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_19(Global_23150.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23150.f_6120)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_23150.f_5474[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
											Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
											fVar44 = Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)];
										}
										if (bVar54)
										{
											if (func_19(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23150.f_5474[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_19(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_366(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0xEBF08DA37D86CD05(func_26(26), func_23(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
													}
												}
											}
											if (func_19(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_19(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_366(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0xEBF08DA37D86CD05(func_26(27), func_23(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_19(Global_23150.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_366(Global_23150.f_4824[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												unk_0xEBF08DA37D86CD05(func_26(Global_23150.f_4824[iVar22]), func_23(Global_23150.f_4824[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_354(Global_23150.f_4824[iVar22])), (fVar37 * func_354(Global_23150.f_4824[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_23150.f_5447[iVar8] == 5)
						{
							if (Global_23150.f_5459[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
							if (Global_23150.f_5466[iVar8])
							{
								if (func_19(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_23150.f_8429[iVar9] = iVar6;
						Global_23150.f_6131 = iVar6;
						iVar9++;
						if (Global_23150.f_5747[iVar6])
						{
							iVar13++;
						}
						if (Global_23150.f_6136[iVar6] != 0f)
						{
							fVar97 = (fVar97 + Global_23150.f_6136[iVar6]);
						}
						else
						{
							fVar97 = (fVar97 + 0.034722f);
						}
					}
					if (!Global_23150.f_6119)
					{
						Global_23150.f_5876[iVar6] = 1;
						if (Global_23150.f_5618[iVar6])
						{
							if (bVar32)
							{
								Global_23150.f_6125 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23150.f_6125 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23150.f_6119)
			{
				Global_23150.f_6121 = ((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12)));
				Global_23150.f_6124 = iVar11;
				Global_23150.f_6122 = iVar10;
				Global_23150.f_6119 = 1;
			}
		}
		if (!Global_23150.f_6120)
		{
			Global_23150.f_6123 = iVar9;
			Global_23150.f_6120 = 1;
		}
		iVar5++;
	}
	Global_23150.f_6267 = fVar51;
	Global_23150.f_6269 = unk_0x320D1840B6DAA1CC();
	unk_0x7ED668FC4CB0F4C4(Global_23150.f_6267);
	if (!Global_23150.f_8773)
	{
		func_41(0);
	}
	Global_23150.f_8773 = 0;
	if (bParam2)
	{
		unk_0xAC765EF46E85A446(10);
	}
	unk_0xAC765EF46E85A446(6);
	unk_0xAC765EF46E85A446(7);
	unk_0xAC765EF46E85A446(9);
	unk_0xAC765EF46E85A446(8);
	if (bParam0)
	{
		func_205(1);
	}
	unk_0xB5A50A903B9AB61B();
}

float func_354(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_355(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0xCDDA0C58B818F6B2(sParam2);
	unk_0x957E514A6E999374(uParam3, uParam4);
	unk_0x1A53079994915FA6(fParam0, fParam1, 0);
}

void func_356(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xCDDA0C58B818F6B2(sParam2);
	unk_0x2AE954BA77A66307(iParam3);
	unk_0x1A53079994915FA6(fParam0, fParam1, iParam4);
}

var func_357()
{
	return unk_0x014D8C5910A5B01B(-1762644250);
}

void func_358(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x2F046C9381D8E91B(Global_23150.f_8801[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x2F046C9381D8E91B(Global_23150.f_8801[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, 255);
}

void func_359(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_360(Global_23150.f_6402[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x2F046C9381D8E91B(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x2F046C9381D8E91B(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x2F046C9381D8E91B(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x71F4002CB1A0B451(155, 155, 155, 255);
		}
		else
		{
			unk_0x71F4002CB1A0B451(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x71F4002CB1A0B451(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x2F046C9381D8E91B(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x71F4002CB1A0B451(155, 155, 155, 255);
	}
	else
	{
		unk_0x71F4002CB1A0B451(155, 155, 155, 255);
	}
	unk_0x3F03C2D4EFA888BC(0f, 0.35f);
	unk_0xB8306DA8A5D18C52(1);
	if (bParam5)
	{
		unk_0x3F03C2D4EFA888BC(0f, 0.425f);
		unk_0xF68E5437AF17EFBC(4);
	}
	else if (bParam6)
	{
		unk_0x3F03C2D4EFA888BC(0f, 0.425f);
		unk_0xF68E5437AF17EFBC(6);
	}
	else
	{
		unk_0xF68E5437AF17EFBC(0);
	}
	unk_0xE835F806BE49C67B(0f, 1f);
	unk_0x21FC15AE6B6188C4(0);
	unk_0xE570B77D940667FF(0, 0, 0, 0, 0);
	unk_0xB133F9D28DFD4E1E(0, 0, 0, 0, 0);
}

void func_360(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_361(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_348(&iVar0, 0, iParam1))
	{
		return;
	}
	uParam0 = uParam0;
	if (iParam3 && !func_376(bParam4, bParam8))
	{
		return;
	}
	if (func_364())
	{
		return;
	}
	if (unk_0xD199EE48D2842EB1())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_362(unk_0x9E2D6C50374FCFA9(), 0))
		{
			return;
		}
	}
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x9417F1137725B4B3() == 0 || unk_0xD199EE48D2842EB1())
		{
			return;
		}
	}
	if (Global_23150.f_5160 != 0)
	{
		if (unk_0xB1C1E679BD17A4F0(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23150.f_5160)
			{
				if (Global_23150.f_5417[iVar1] != 363)
				{
					StringCopy(&(Global_23150.f_5162[iVar1 /*16*/]), unk_0x2018949B2C9FD96A(2, Global_23150.f_5417[iVar1], 1), 64);
				}
				else if (Global_23150.f_5430[iVar1] != 32)
				{
					StringCopy(&(Global_23150.f_5162[iVar1 /*16*/]), unk_0x19214818F925D149(2, Global_23150.f_5430[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_23150.f_5161 = 0;
		}
		if (!Global_23150.f_5161)
		{
			unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xCA5D23E5F0F0306F((1f - (Global_23150.f_5472 / 100f)));
			unk_0x6F06CF0E9AB02847();
			if (unk_0x8FE9914D4872D601())
			{
				unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xD7D6BA6E36AEC182(true);
				unk_0x6F06CF0E9AB02847();
			}
			iVar1 = 0;
			while (iVar1 < Global_23150.f_5160)
			{
				if (unk_0x2E87280918B16506(&(Global_23150.f_5355[iVar1 /*4*/])) != unk_0x2E87280918B16506("PREV"))
				{
					unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x4F47E317C74C543B(iVar1);
					func_13(&(Global_23150.f_5162[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x2E87280918B16506(&(Global_23150.f_5355[iVar2 /*4*/])) == unk_0x2E87280918B16506("PREV"))
					{
						func_13(&(Global_23150.f_5162[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23150.f_5404[iVar1] == -1)
					{
						func_12(&(Global_23150.f_5355[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23150.f_5404[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x4ADC8B166E139423(&(Global_23150.f_5355[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x28594D0D61DB1278(iVar3, 70);
						}
						else
						{
							unk_0x2AE954BA77A66307(iVar3);
						}
						unk_0xD1D4F8D5470AFA4C();
					}
					if (unk_0x8FE9914D4872D601())
					{
						if (Global_23150.f_5417[iVar1] != 363 && BitTest(Global_23150.f_5443, iVar1))
						{
							unk_0xD7D6BA6E36AEC182(true);
							unk_0x4F47E317C74C543B(Global_23150.f_5417[iVar1]);
						}
						else
						{
							unk_0xD7D6BA6E36AEC182(false);
							unk_0x4F47E317C74C543B(363);
						}
					}
					unk_0x6F06CF0E9AB02847();
				}
				iVar1++;
			}
			if (unk_0x2E87280918B16506(&(Global_4539885.f_16)) != unk_0x2E87280918B16506(""))
			{
				unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x4F47E317C74C543B(Global_23150.f_5160);
				func_13(&Global_4539885);
				if (Global_4539885.f_20 == -1)
				{
					func_12(&(Global_4539885.f_16));
				}
				else
				{
					iVar4 = Global_23150.f_5404[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x4ADC8B166E139423(&(Global_4539885.f_16));
					if (bParam5)
					{
						unk_0x28594D0D61DB1278(iVar4, 70);
					}
					else
					{
						unk_0x2AE954BA77A66307(iVar4);
					}
					unk_0xD1D4F8D5470AFA4C();
				}
				unk_0x6F06CF0E9AB02847();
			}
			unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(80);
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23150.f_5473)
			{
				unk_0x4F47E317C74C543B(1);
			}
			else
			{
				unk_0x4F47E317C74C543B(0);
			}
			unk_0x6F06CF0E9AB02847();
			Global_23150.f_5161 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23150.f_5160)
		{
			if (Global_23150.f_5404[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x4F47E317C74C543B(iVar1);
					unk_0x4ADC8B166E139423(&(Global_23150.f_5355[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x28594D0D61DB1278(iParam2, 70);
					}
					else
					{
						unk_0x2AE954BA77A66307(iParam2);
					}
					unk_0xD1D4F8D5470AFA4C();
					unk_0x6F06CF0E9AB02847();
				}
			}
			iVar1++;
		}
		if (Global_4539885.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xEA5DEA46C3EE64D3(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x4F47E317C74C543B(iVar1);
				unk_0x4ADC8B166E139423(&(Global_4539885.f_16));
				if (bParam5)
				{
					unk_0x28594D0D61DB1278(iParam2, 70);
				}
				else
				{
					unk_0x2AE954BA77A66307(iParam2);
				}
				unk_0xD1D4F8D5470AFA4C();
				unk_0x6F06CF0E9AB02847();
			}
		}
		unk_0xA5AAB00FA8C570A4(76, 66);
		unk_0x98F560BC13E5293F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23150.f_8808)
			{
				unk_0xE73F8CB95153F5B1(15, 0f, -0.0375f);
				Global_23150.f_8808 = 1;
			}
		}
		else if (Global_23150.f_8808)
		{
			unk_0x4FEF096D3AB4AA8C(15);
			Global_23150.f_8808 = 0;
		}
		unk_0xB5A50A903B9AB61B();
		if (Global_23150.f_5446)
		{
			unk_0xA5AAB00FA8C570A4(82, 66);
			unk_0x98F560BC13E5293F(0f, 0f, 0f, 0f);
			unk_0x694170BB080C08FF(Global_23150.f_6051[iVar0 /*10*/], Global_23150.f_5444, Global_23150.f_5445, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xB5A50A903B9AB61B();
		}
		else
		{
			unk_0xC4353D240DCE9533(Global_23150.f_6051[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

bool func_362(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_363(-1, 0) == 8;
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

int func_363(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_65();
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

int func_364()
{
	struct<3> Var0;
	
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	if (func_365())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0xC81489026785778A(&Var0);
		if (Global_20211 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_365()
{
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_366(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x2F046C9381D8E91B(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			unk_0x2F046C9381D8E91B(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_367(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x2F046C9381D8E91B(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xF68E5437AF17EFBC(0);
	unk_0x3F03C2D4EFA888BC(0f, 0.35f);
	unk_0x28EC5961FD3B75F0(2);
	unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, iVar3);
	unk_0xE835F806BE49C67B(fParam0, ((Global_23147 + Global_23149) - 0.0046875f));
	unk_0x21FC15AE6B6188C4(0);
	unk_0xE570B77D940667FF(0, 0, 0, 0, 0);
	unk_0xB133F9D28DFD4E1E(0, 0, 0, 0, 0);
}

void func_368(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xCDDA0C58B818F6B2(sParam2);
	unk_0x2AE954BA77A66307(uParam3);
	unk_0x2AE954BA77A66307(uParam4);
	unk_0x1A53079994915FA6(fParam0, fParam1, 0);
}

float func_369(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xE8F6C1F695B25B91(sParam0))
	{
		if (unk_0x2E87280918B16506(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_370();
	unk_0x27ED46EA48C0A455(sParam0);
	unk_0x2AE954BA77A66307(uParam1);
	unk_0x2AE954BA77A66307(uParam2);
	return unk_0x63F498818B4DEE3E(1);
}

void func_370()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x2F046C9381D8E91B(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23150.f_8783)
	{
		iVar0 = Global_23150.f_8779;
		iVar1 = Global_23150.f_8780;
		iVar2 = Global_23150.f_8781;
		iVar3 = Global_23150.f_8782;
	}
	unk_0xF68E5437AF17EFBC(0);
	unk_0x3F03C2D4EFA888BC(0f, 0.35f);
	unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, iVar3);
	unk_0xE835F806BE49C67B((Global_23147 + 0.0046875f), ((Global_23147 + Global_23149) - 0.0046875f));
	unk_0x21FC15AE6B6188C4(0);
	unk_0xE570B77D940667FF(0, 0, 0, 0, 0);
	unk_0xB133F9D28DFD4E1E(0, 0, 0, 0, 0);
}

void func_371(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xCA4C0AD3CAFF651E((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_372(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23150.f_5609 > iParam0)
	{
		return;
	}
	if (Global_23150.f_5609 >= 128)
	{
		return;
	}
	if (Global_23150.f_5611 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 < Global_23150.f_6132)
	{
		return;
	}
	if (Global_23150.f_5609 != iParam0)
	{
		Global_23150.f_5609 = iParam0;
		Global_23150.f_5610 = 0;
	}
	iVar0 = Global_23150.f_5447[Global_23150.f_5610];
	if (iVar0 != 1)
	{
		while (Global_23150.f_5610 < 4 && iVar0 != 1)
		{
			Global_23150.f_5610++;
			iVar0 = Global_23150.f_5447[Global_23150.f_5610];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]), sParam1, 24);
	if (!unk_0xACC32B78196FBC2A(sParam1) && !unk_0xE73671E3D37CF79E(sParam1))
	{
	}
	Global_23150.f_1616[Global_23150.f_5611] = bParam3;
	Global_23150.f_1873[Global_23150.f_5611] = iParam4;
	Global_23150.f_2130[Global_23150.f_5611] = iParam6;
	Global_23150.f_5611++;
	if (!bParam3)
	{
		func_375(Global_23150.f_5609, 1);
	}
	else
	{
		func_375(Global_23150.f_5609, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_374(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]));
		if (Global_23150.f_5466[Global_23150.f_5610])
		{
			func_19(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23150.f_5459[Global_23150.f_5610])
		{
			Global_23150.f_5459[Global_23150.f_5610] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_373(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]));
			if (fVar4 > Global_23150.f_6136[iParam0])
			{
				Global_23150.f_6136[iParam0] = fVar4;
			}
		}
	}
	unk_0xCED9E32812D6C7C7(&(Global_23150.f_5480[iParam0]), Global_23150.f_5610);
	Global_23150.f_5610++;
	Global_23150.f_6135 = 1;
	Global_23150.f_6133 = (Global_23150.f_5611 - 1);
	Global_23150.f_6134 = 0;
	Global_23150.f_6132 = iParam2;
}

float func_373(char* sParam0)
{
	if (!unk_0xE73671E3D37CF79E(sParam0))
	{
	}
	return unk_0xC23444E9B1B8D081(0.35f, 0);
}

float func_374(char* sParam0)
{
	if (!unk_0xE8F6C1F695B25B91(uParam0))
	{
		if (unk_0x2E87280918B16506(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_359(0, 1, 0, 0, 0, 0, 0);
	unk_0x27ED46EA48C0A455(sParam0);
	return unk_0x63F498818B4DEE3E(1);
}

void func_375(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&(Global_23150.f_6406[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_23150.f_6406[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_376(bool bParam0, bool bParam1)
{
	if (Global_2703735.f_1571.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xE9E8955A780DDA01() || (func_378(8, -1) && func_377() != 65)) || (unk_0x1A76A9A82BD6228C() != 0 && !bParam1)) || (unk_0x04458B4E5D9E466A() && !bParam0)) || unk_0x06C559386AD19942()) || Global_78579) || Global_23150.f_8807) || unk_0x3E6C9DAD84CEFED1()) || Global_100493.f_1458)
	{
		return 0;
	}
	return 1;
}

int func_377()
{
	return Global_1574991;
}

var func_378(int iParam0, int iParam1)
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

int func_379(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 6;
			
			case 4:
				return 9;
			
			case 5:
				return 11;
			
			case 6:
				return 13;
			
			case 7:
				return 15;
			}
		
		default:
	}
	return 0;
}

int func_380(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0x3A76A0944BE2C291(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_401(0) == 1 && Global_4539961 == iParam1)
	{
		if (!func_426(uParam0))
		{
			func_381(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_441(uParam0);
			return 1;
		}
	}
	else if (func_426(uParam0))
	{
		func_427(uParam0);
	}
	return 0;
}

void func_381(var uParam0)
{
	if (!func_426(uParam0))
	{
		func_441(uParam0);
	}
}

int func_382(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x3A76A0944BE2C291(2))
	{
		fVar0 = unk_0x664C0A1BF5E133FA(2, 218);
	}
	if ((fVar0 > 0.8f || unk_0x4C1B8C5717647539(2, 190)) || unk_0x0DBA73788F6E3C5F(2, 190))
	{
		if (!func_426(uParam0))
		{
			func_381(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_441(uParam0);
			return 1;
		}
	}
	else if (func_426(uParam0))
	{
		func_427(uParam0);
	}
	return 0;
}

void func_383(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	func_351(0, 0);
	unk_0x2F046C9381D8E91B(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_396(uVar0, uVar1, uVar2, uVar3, 1);
	func_395(1, 2, 0, 0, 0);
	func_394(1, 2, 1, 1, 1);
	func_393(0, 1, 0, 0, 0);
	func_392("DARTS_TITLE");
	func_390(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_372(0, "DARTS_LEGS", 0, 1, 0, 0, 0);
	func_387(0, func_379(uParam0->f_662 + 1, 1), 0);
	func_372(1, "DARTS_SETS", 0, 1, 0, 0, 0);
	func_387(1, func_379(uParam0->f_664 + 1, 0), 0);
	func_386(2, 141, 141, 1);
	func_372(2, "DARTS_START", 0, 1, 0, 0, 0);
	func_385(0);
	func_404(uParam0->f_660, 1, 1);
	if (uParam0->f_660 != 2)
	{
		func_403(func_115(uParam0->f_660 == 0, "DARTS_LEGD", "DARTS_SETD"), 0, 0);
	}
	func_384(201, "ITEM_SELECT", -1, 0);
	func_384(202, "IB_QUIT", -1, 0);
}

void func_384(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x2018949B2C9FD96A(2, iParam0, 1);
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sVar0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xCED9E32812D6C7C7(&(Global_23150.f_5443), Global_23150.f_5160);
	}
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = iParam0;
	Global_23150.f_5430[Global_23150.f_5160] = 32;
	Global_23150.f_5160++;
}

void func_385(int iParam0)
{
	Global_23150.f_6129 = iParam0;
}

void func_386(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Global_23150.f_8804 = iParam3;
	Global_23150.f_8801[0] = iParam1;
	Global_23150.f_8801[1] = iParam2;
	Global_23150.f_8805 = iParam0;
}

void func_387(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23150.f_5609 > iParam0)
	{
		return;
	}
	if (Global_23150.f_5609 >= 128)
	{
		return;
	}
	if (Global_23150.f_5613 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 < Global_23150.f_6132)
	{
		return;
	}
	if (Global_23150.f_5609 != iParam0)
	{
		Global_23150.f_5609 = iParam0;
		Global_23150.f_5610 = 0;
	}
	iVar0 = Global_23150.f_5447[Global_23150.f_5610];
	if (iVar0 != 2)
	{
		while (Global_23150.f_5610 < 4 && iVar0 != 2)
		{
			Global_23150.f_5610++;
			iVar0 = Global_23150.f_5447[Global_23150.f_5610];
		}
		if (iVar0 != 2)
		{
			return;
		}
	}
	Global_23150.f_4309[Global_23150.f_5613] = iParam1;
	Global_23150.f_5613++;
	fVar1 = func_389("NUMBER", iParam1);
	if (Global_23150.f_5466[Global_23150.f_5610])
	{
		func_19(26, 1, 0, &fVar2, &uVar3, 0);
		fVar1 = (fVar1 + (fVar2 * 2f));
	}
	if (fVar1 > Global_23150.f_5459[Global_23150.f_5610])
	{
		Global_23150.f_5459[Global_23150.f_5610] = fVar1;
	}
	if (bParam2)
	{
		fVar4 = func_388("NUMBER", iParam1);
		if (fVar4 > Global_23150.f_6136[iParam0])
		{
			Global_23150.f_6136[iParam0] = fVar4;
		}
	}
	unk_0xCED9E32812D6C7C7(&(Global_23150.f_5480[iParam0]), Global_23150.f_5610);
	Global_23150.f_5610++;
	Global_23150.f_6135 = 2;
}

float func_388(char* sParam0, int iParam1)
{
	if (!unk_0xE73671E3D37CF79E(sParam0))
	{
	}
	if (iParam1 == 0)
	{
	}
	return unk_0xC23444E9B1B8D081(0.35f, 0);
}

float func_389(char* sParam0, int iParam1)
{
	if (!unk_0xE73671E3D37CF79E(sParam0))
	{
		return 0f;
	}
	func_359(1, 1, 0, 0, 0, 0, 0);
	unk_0x27ED46EA48C0A455(sParam0);
	unk_0x2AE954BA77A66307(uParam1);
	return unk_0x63F498818B4DEE3E(1);
}

void func_390(int iParam0, char* sParam1, char* sParam2)
{
	Global_23150 = iParam0;
	func_391(29, sParam1, sParam2);
}

void func_391(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_23150.f_6411[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_23150.f_7420[iParam0 /*16*/]), sParam2, 64);
}

void func_392(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_23150.f_1), sParam0, 16);
	Global_23150.f_74 = 0;
	Global_23150.f_75 = 0;
	Global_23150.f_76 = 0;
	Global_23150.f_77 = 0;
	Global_23150.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_393(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23150.f_5466[0] = iParam0;
	Global_23150.f_5466[1] = iParam1;
	Global_23150.f_5466[2] = iParam2;
	Global_23150.f_5466[3] = iParam3;
	Global_23150.f_5466[4] = iParam4;
}

void func_394(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23150.f_5474[0] = iParam0;
	Global_23150.f_5474[1] = iParam1;
	Global_23150.f_5474[2] = iParam2;
	Global_23150.f_5474[3] = iParam3;
	Global_23150.f_5474[4] = iParam4;
}

void func_395(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23150.f_5447[0] = iParam0;
	Global_23150.f_5447[1] = iParam1;
	Global_23150.f_5447[2] = iParam2;
	Global_23150.f_5447[3] = iParam3;
	Global_23150.f_5447[4] = iParam4;
	Global_23150.f_5617 = 0;
	if (iParam0 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam1 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam2 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam3 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam4 != 0)
	{
		Global_23150.f_5617++;
	}
}

void func_396(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	Global_23150.f_8778 = iParam4;
	Global_23150.f_8774 = uParam0;
	Global_23150.f_8775 = uParam1;
	Global_23150.f_8776 = uParam2;
	Global_23150.f_8777 = uParam3;
}

int func_397(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0x3A76A0944BE2C291(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_401(0) == -1 && Global_4539961 == iParam1)
	{
		if (!func_426(uParam0))
		{
			func_381(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_441(uParam0);
			return 1;
		}
	}
	else if (func_426(uParam0))
	{
		func_427(uParam0);
	}
	return 0;
}

int func_398(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x3A76A0944BE2C291(2))
	{
		fVar0 = unk_0x664C0A1BF5E133FA(2, 218);
	}
	if (fVar0 < -0.8f || unk_0x4C1B8C5717647539(2, 189))
	{
		if (!func_426(uParam0))
		{
			func_381(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_441(uParam0);
			return 1;
		}
	}
	else if (func_426(uParam0))
	{
		func_427(uParam0);
	}
	return 0;
}

int func_399(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x3A76A0944BE2C291(2))
	{
		fVar0 = unk_0x664C0A1BF5E133FA(2, 219);
	}
	if (fVar0 > 0.8f || unk_0x4C1B8C5717647539(2, 187))
	{
		if (!func_426(uParam0))
		{
			func_381(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_441(uParam0);
			return 1;
		}
	}
	else if (func_426(uParam0))
	{
		func_427(uParam0);
	}
	return 0;
}

int func_400(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x3A76A0944BE2C291(2))
	{
		fVar0 = unk_0x664C0A1BF5E133FA(2, 219);
	}
	if (fVar0 < -0.8f || unk_0x4C1B8C5717647539(2, 188))
	{
		if (!func_426(uParam0))
		{
			func_381(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_441(uParam0);
			return 1;
		}
	}
	else if (func_426(uParam0))
	{
		func_427(uParam0);
	}
	return 0;
}

int func_401(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0.02f;
	fVar0 = 0.05f;
	fVar2 = (fVar0 + Global_23149);
	fVar1 = (Global_23150.f_6121 - (IntToFloat(Global_23150.f_6123) * 0.034722f));
	fVar5 = (fVar0 + fParam0);
	unk_0xA5AAB00FA8C570A4(76, 84);
	unk_0x98F560BC13E5293F(-0.05f, -0.05f, 0f, 0f);
	unk_0x9CCCA5F1EBB26C03(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x9CCCA5F1EBB26C03(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xB5A50A903B9AB61B();
	fVar4 = (fVar2 - fVar6);
	if (fParam0 > 0f)
	{
		if (Global_4539955 >= fVar0 && Global_4539955 < fVar5)
		{
			return -999;
		}
	}
	if (Global_4539955 >= fVar0 && Global_4539955 < fVar4)
	{
		return -1;
	}
	if (Global_4539955 >= fVar4 && Global_4539955 <= fVar2)
	{
		return 1;
	}
	return 0;
}

int func_402()
{
	if (unk_0x3A76A0944BE2C291(2))
	{
		return unk_0x0DBA73788F6E3C5F(2, 237);
	}
	return 0;
}

void func_403(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_23150.f_5081), sParam0, 24);
	Global_23150.f_5153 = 0;
	Global_23150.f_5154 = 0;
	Global_23150.f_5155 = 0;
	Global_23150.f_5156 = 0;
	Global_23150.f_5157 = iParam1;
	Global_23150.f_5158 = unk_0x320D1840B6DAA1CC();
	Global_23150.f_5159 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5087[iVar0] = 0;
		iVar0++;
	}
}

void func_404(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_23150.f_6130 = iParam0;
	Global_23150.f_6265 = iParam2;
	if (Global_23150.f_6130 < Global_23150.f_6129)
	{
		Global_23150.f_6129 = Global_23150.f_6130;
	}
	else if ((Global_23150.f_6120 && Global_23150.f_6130 > Global_23150.f_6131) || (!Global_23150.f_6120 && Global_23150.f_6130 >= (Global_23150.f_6129 + Global_23150.f_5616)))
	{
		iVar0 = Global_23150.f_6129;
		while (iVar0 <= Global_23150.f_6130)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23150.f_5480[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23150.f_5616 && Global_23150.f_6129 < 128)
		{
			Global_23150.f_6129++;
			iVar1 = 0;
			iVar0 = Global_23150.f_6129;
			while (iVar0 <= Global_23150.f_6130)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23150.f_5480[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23150.f_5081), "", 24);
		StringCopy(&(Global_4539885.f_21), "", 16);
	}
}

int func_405()
{
	if (unk_0x3A76A0944BE2C291(2))
	{
		if (Global_4539961 > -1)
		{
			if (unk_0xF09A4F413B0D30EB(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_406(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x3A76A0944BE2C291(2))
	{
		return 0;
	}
	if (unk_0xF1EC2C71FD1371B8() || unk_0x3E6C9DAD84CEFED1())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x60236500251FDE8E();
	}
	if (Global_4539961 == -6)
	{
		unk_0x147141484022751B(4);
		if (iParam0 && unk_0x4C1B8C5717647539(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4539961 = -1;
			return 0;
		}
	}
	if (((Global_4539961 > -1 || Global_4539961 == -3) || Global_4539961 == -2) || unk_0xFF792DDC17AFA777())
	{
		unk_0x147141484022751B(1);
		return 0;
	}
	if (Global_4539961 == -1 && iParam0)
	{
		if (unk_0x4C1B8C5717647539(2, 237))
		{
			unk_0x147141484022751B(4);
			Global_4539961 = -6;
			return 1;
		}
		else
		{
			unk_0x147141484022751B(3);
			return 0;
		}
	}
	unk_0x147141484022751B(1);
	return 0;
}

void func_407(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0x3A76A0944BE2C291(2))
	{
		Global_4539961 = -1;
		return;
	}
	unk_0x4522E5855673D159(1);
	fVar0 = Global_23147;
	fVar2 = (fVar0 + Global_23149);
	fVar3 = Global_23150.f_6121;
	fVar1 = (Global_23150.f_6121 - (IntToFloat(Global_23150.f_6123) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_23150.f_6123 < 1)
	{
		fVar1 = (Global_23150.f_6121 - 0.034722f);
	}
	unk_0xA5AAB00FA8C570A4(76, 84);
	unk_0x98F560BC13E5293F(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x9CCCA5F1EBB26C03(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x9CCCA5F1EBB26C03(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xB5A50A903B9AB61B();
	func_409();
	if (Global_4539961 == -6)
	{
		return;
	}
	Global_4539961 = -1;
	fVar7 = Global_4539955;
	fVar8 = Global_4539956;
	if (Global_23150.f_6124 > Global_23150.f_6123)
	{
		if (((Global_4539955 >= fVar0 && Global_4539955 <= fVar2) && Global_4539956 >= fVar3) && Global_4539956 < (fVar3 + fVar6))
		{
			Global_4539961 = -2;
			if (bParam3)
			{
				func_408(0);
			}
			return;
		}
		if (((Global_4539955 >= fVar0 && Global_4539955 <= fVar2) && Global_4539956 >= (fVar3 + fVar6)) && Global_4539956 < (fVar3 + 0.034722f))
		{
			Global_4539961 = -3;
			if (bParam3)
			{
				func_408(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_23150.f_6124 == -1)
		{
			Global_4539961 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_23150.f_6123);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xA5AAB00FA8C570A4(76, 84);
				unk_0x98F560BC13E5293F(-0.05f, -0.05f, 0f, 0f);
				func_371(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_23149, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0xB5A50A903B9AB61B();
			}
		}
		Global_4539961 = Global_23150.f_8429[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4539961 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4539961 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4539961 = -4;
		return;
	}
	Global_4539961 = -1;
}

void func_408(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_23147;
	fVar1 = Global_23150.f_6121;
	unk_0xA5AAB00FA8C570A4(76, 84);
	unk_0x98F560BC13E5293F(-0.05f, -0.05f, 0f, 0f);
	if (Global_4539961 == -2)
	{
		func_371(fVar0, fVar1, Global_23149, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4539961 == -3)
	{
		func_371(fVar0, (fVar1 + fVar2), Global_23149, fVar2, 255, 255, 255, iVar3);
	}
	unk_0xB5A50A903B9AB61B();
}

void func_409()
{
	Global_4539957 = Global_4539955;
	Global_4539958 = Global_4539956;
	Global_4539955 = unk_0x159F9B5A2920DF4E(2, 239);
	Global_4539956 = unk_0x159F9B5A2920DF4E(2, 240);
	Global_4539959 = (Global_4539955 - Global_4539957);
	Global_4539960 = (Global_4539956 - Global_4539958);
}

float func_410(float fParam0)
{
	if (fParam0 < 1.3f)
	{
		return 35f;
	}
	else if (fParam0 < 1.35f)
	{
		return 33f;
	}
	return 30f;
}

void func_411(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	uParam0->f_660 = 0;
	uParam0->f_661 = 3;
	uParam0->f_662 = 0;
	uParam0->f_663 = 3;
	uParam0->f_664 = 0;
	uParam0->f_665 = 7;
	func_351(0, 0);
	unk_0x2F046C9381D8E91B(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_396(uVar0, uVar1, uVar2, uVar3, 1);
	func_395(1, 2, 0, 0, 0);
	func_394(1, 2, 1, 1, 1);
	func_393(0, 1, 0, 0, 0);
	func_392("DARTS_TITLE");
	func_390(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_372(0, "DARTS_LEGS", 0, 1, 0, 0, 0);
	func_387(0, 1, 0);
	func_372(1, "DARTS_SETS", 0, 1, 0, 0, 0);
	func_387(1, 1, 0);
	func_372(2, "DARTS_START", 0, 1, 0, 0, 0);
	func_386(2, 141, 141, 1);
	func_385(0);
	func_404(0, 1, 1);
	func_403("DARTS_LEGD", 0, 0);
	func_412();
	func_384(201, "ITEM_SELECT", -1, 0);
	func_384(202, "IB_QUIT", -1, 0);
}

void func_412()
{
	if (unk_0x8FE9914D4872D601())
	{
		unk_0x2969B478FF4DB4DF(0.325f, 0.3f);
	}
}

int func_413(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	
	if ((func_437() && unk_0x320D1840B6DAA1CC() >= iLocal_291 + 1000) && *iParam0 != 8)
	{
		if (!unk_0xA829C9A2767AC8EF() && !unk_0xCB1EF1E7B77ADF4C())
		{
			unk_0x859006DB870314C5(500);
		}
	}
	if (unk_0xA829C9A2767AC8EF() && *iParam0 != 8)
	{
		*iParam0 = 8;
	}
	switch (*iParam0)
	{
		case 2:
			switch (iLocal_31)
			{
				case 0:
					if (*uParam3 == 2)
					{
						iLocal_291 = unk_0x320D1840B6DAA1CC();
						func_421(uParam1->f_1, uParam1->f_4, func_423(2), func_422(0), 0, 1);
						*uParam2 = 20;
						uParam2->f_1 = 2;
						func_292(uParam4[0 /*26*/], uParam1, uParam3, uParam2, 1);
					}
					if (*uParam3 == 3)
					{
						if (func_279(uParam4[0 /*26*/], uParam1, 0, 0))
						{
							unk_0xD336F8D9637B963F(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
							iLocal_31++;
							func_441(uParam5);
							*uParam3 = 2;
						}
					}
					break;
				
				case 1:
					if (func_429(uParam5) > 1f && !func_309("DARTS_DOUBLE_T"))
					{
						func_424("DARTS_DOUBLE_T", -1);
					}
					if (func_429(uParam5) > 5f)
					{
						func_441(uParam5);
						unk_0x3410421C60BF7143(1);
						func_415(uParam1->f_1, uParam1->f_4, func_423(3), func_422(0), 1000);
						iLocal_31 = 0;
						*iParam0 = 3;
					}
					break;
			}
			break;
		
		case 3:
			switch (iLocal_31)
			{
				case 0:
					if (!unk_0x52522E25010580A1(uLocal_128))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 3;
							func_292(uParam4[1 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_279(uParam4[1 /*26*/], uParam1, 0, 0))
							{
								unk_0xD336F8D9637B963F(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_441(uParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_429(uParam5) > 1f && !func_309("DARTS_TRIPLE_T"))
					{
						func_424("DARTS_TRIPLE_T", -1);
					}
					if (func_429(uParam5) > 5f)
					{
						func_441(uParam5);
						unk_0x3410421C60BF7143(1);
						func_421(uParam1->f_1, uParam1->f_4, func_423(4), func_422(0), 1000, 0);
						iLocal_31 = 0;
						*iParam0 = 4;
					}
					break;
			}
			break;
		
		case 4:
			switch (iLocal_31)
			{
				case 0:
					if (!unk_0x52522E25010580A1(uLocal_127))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 50;
							uParam2->f_1 = 1;
							func_292(uParam4[2 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_279(uParam4[2 /*26*/], uParam1, 0, 0))
							{
								unk_0xD336F8D9637B963F(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_441(uParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_429(uParam5) > 1f && !func_309("DARTS_BULL_T"))
					{
						func_424("DARTS_BULL_T", -1);
					}
					if (func_429(uParam5) > 5f)
					{
						func_441(uParam5);
						unk_0x3410421C60BF7143(1);
						unk_0x91DFC8F68F6D9B05(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
						func_415(uParam1->f_1, uParam1->f_4, func_423(5), func_422(1), 1500);
						iLocal_31 = 0;
						*iParam0 = 5;
					}
					break;
			}
			break;
		
		case 5:
			if (!unk_0x52522E25010580A1(uLocal_128) && !func_309("DARTS_DBL_WIN"))
			{
				func_424("DARTS_DBL_WIN", -1);
			}
			if (func_429(uParam5) > 6f)
			{
				func_441(uParam5);
				*iParam0 = 6;
			}
			break;
		
		case 6:
			unk_0x91DFC8F68F6D9B05(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
			unk_0x889B4F9D52E23DEE(uLocal_120, uLocal_128, 1500, 1, 1);
			*iParam0 = 7;
			break;
		
		case 7:
			if (!unk_0x52522E25010580A1(uLocal_120))
			{
				iLocal_31 = 0;
				unk_0x3410421C60BF7143(1);
				unk_0xBA6C3C5E9E5A9442();
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_414(uParam4[iVar0 /*26*/]);
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 8:
			if (unk_0xA829C9A2767AC8EF())
			{
				iLocal_31 = 0;
				unk_0x3410421C60BF7143(1);
				unk_0xBA6C3C5E9E5A9442();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_414(uParam4[iVar1 /*26*/]);
					iVar1++;
				}
				unk_0xDD786B89B15AA63F(uLocal_120, 1);
				unk_0x5A7ACD1CDF509B0D(500);
				return 1;
			}
			break;
	}
	return 0;
}

void func_414(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { -1668.044f, -1056.45f, 13.1063f };
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		unk_0xC64B6E13A6A7F517(*uParam0, Var0, 1, 0, 0, 1);
		unk_0x59E393B344098656(uParam0);
		unk_0x4BDA5AFD88C085EB(uParam0);
	}
}

void func_415(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, int iParam10)
{
	unk_0x45E6CC1354100C1B(uLocal_128);
	unk_0x0A18C027350D3C19(uLocal_128, 35f);
	unk_0xDEE4F5F0B93BE664(uLocal_128, unk_0x6DB7FBD602C51670(Param0, fParam3, Param4));
	unk_0x93150D31CE38FE75(uLocal_128, Vector(fParam3, 0f, 0f) - Param7, 2);
	unk_0x889B4F9D52E23DEE(uLocal_128, uLocal_127, iParam10, 1, 1);
}

int func_416(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_426(&(uParam0->f_2)))
	{
		func_441(&(uParam0->f_2));
	}
	unk_0xAC765EF46E85A446(14);
	if (!bParam2)
	{
		unk_0xC4353D240DCE9533(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0xC4353D240DCE9533(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x4C1B8C5717647539(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		func_427(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_417(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	
	sVar0 = func_418(iParam5);
	unk_0xEA5DEA46C3EE64D3(*uParam0, "RESET_MOVIE");
	unk_0x6F06CF0E9AB02847();
	unk_0xEA5DEA46C3EE64D3(*uParam0, sVar0);
	unk_0x4ADC8B166E139423("STRING");
	unk_0x138506D6C7564EF1(iParam4);
	unk_0x26C23BE14F66F202(sParam1);
	unk_0xD1D4F8D5470AFA4C();
	if (!unk_0xACC32B78196FBC2A(sParam2))
	{
		func_12(sParam2);
	}
	if (bParam6)
	{
		unk_0x4F47E317C74C543B(100);
		unk_0xD7D6BA6E36AEC182(true);
	}
	unk_0x6F06CF0E9AB02847();
	if (bParam6)
	{
		unk_0xEA5DEA46C3EE64D3(*uParam0, "TRANSITION_UP");
		unk_0xCA5D23E5F0F0306F(iParam7);
		unk_0x6F06CF0E9AB02847();
	}
	func_441(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
}

char* func_418(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_419()
{
	unk_0xDD786B89B15AA63F(uLocal_120, 1);
	unk_0x850D4EF3D40FB068(1, false, 3000, 1, 0, 0);
	if (unk_0xA24FDA4986456697(uLocal_127))
	{
		unk_0xDD786B89B15AA63F(uLocal_127, 0);
	}
	if (unk_0xA24FDA4986456697(uLocal_122))
	{
		unk_0xDD786B89B15AA63F(uLocal_122, 0);
	}
	if (unk_0xA24FDA4986456697(uLocal_123))
	{
		unk_0xDD786B89B15AA63F(uLocal_123, 0);
	}
	if (unk_0xA24FDA4986456697(uLocal_124))
	{
		unk_0xDD786B89B15AA63F(uLocal_124, 0);
	}
	if (unk_0xA24FDA4986456697(uLocal_125))
	{
		unk_0xDD786B89B15AA63F(uLocal_125, 0);
	}
	if (unk_0xA24FDA4986456697(uLocal_126))
	{
		unk_0xDD786B89B15AA63F(uLocal_126, 0);
	}
}

char* func_420(int iParam0)
{
	if (iLocal_302 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_BAR";
			
			case 1:
				return "DARTS_MENU_BAR";
			
			case 2:
				return "DARTS_START_MATCH_BAR";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_BAR";
			
			default:
		}
	}
	else if (iLocal_302 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_ROCK";
			
			case 1:
				return "DARTS_MENU_ROCK";
			
			case 2:
				return "DARTS_START_MATCH_ROCK";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_ROCK";
			}
		
		default:
	}
	return "";
}

void func_421(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, int iParam10, bool bParam11)
{
	unk_0x45E6CC1354100C1B(uLocal_127);
	unk_0x0A18C027350D3C19(uLocal_127, 35f);
	unk_0xDEE4F5F0B93BE664(uLocal_127, unk_0x6DB7FBD602C51670(Param0, fParam3, Param4));
	unk_0x93150D31CE38FE75(uLocal_127, Vector(fParam3, 0f, 0f) - Param7, 2);
	if (bParam11)
	{
		unk_0xDD786B89B15AA63F(uLocal_127, 1);
	}
	else
	{
		unk_0x889B4F9D52E23DEE(uLocal_127, uLocal_128, iParam10, 1, 1);
	}
}

Vector3 func_422(bool bParam0)
{
	if (bParam0)
	{
		return -4.7411f, 0f, -15.32f;
	}
	return 4.9918f, 0f, 4.3916f;
}

Vector3 func_423(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.0588f, -1.6075f, 0.1336f;
		
		case 2:
			return -0.0944f, -1.2308f, 0.3468f;
		
		case 3:
			return -0.0948f, -1.243f, 0.2067f;
		
		case 4:
			return -0.0955f, -1.2524f, 0.1006f;
		
		case 5:
			return -0.0951f, -1.2526f, 0.0895f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_424(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

int func_425(var uParam0)
{
	if (!unk_0x55B23FE400FCEA6B(func_504(), 0))
	{
		func_4(func_504(), "GENERIC_YES", 0, 6);
	}
	else
	{
		func_4(uParam0, "GENERIC_AGREE", 0, 6);
	}
	return 1;
}

bool func_426(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_427(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_428(var uParam0, char* sParam1, int iParam2)
{
	unk_0xB0C559BD7D5D270D(uParam0, sParam1, func_6(iParam2), 1);
}

float func_429(var uParam0)
{
	if (func_426(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_430(var uParam0)
{
	if (!func_426(uParam0))
	{
		func_381(uParam0);
	}
	else
	{
		func_441(uParam0);
	}
}

void func_431()
{
	Global_20471 = 0;
	func_432();
}

void func_432()
{
	unk_0x82B0661A78CC39CF();
	Global_22616 = 0;
	if ((unk_0xA3329B7A7520670E() || Global_20266.f_1 == 9) || Global_20265 == 1)
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21605 = 6;
		Global_20266.f_1 = 3;
		return;
	}
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(1);
		Global_21605 = 6;
		return;
	}
}

void func_433(int iParam0)
{
	if (func_43())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_436())
		{
			func_435(1, 1);
		}
		else
		{
			func_435(0, 0);
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
	if (!func_434())
	{
		Global_20266.f_1 = 3;
	}
}

int func_434()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_435(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_42(0))
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

bool func_436()
{
	return BitTest(Global_1958711, 5);
}

int func_437()
{
	if (unk_0xF1EC2C71FD1371B8())
	{
		return 0;
	}
	if (unk_0xF09A4F413B0D30EB(0, 18) || unk_0xF09A4F413B0D30EB(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_438(var uParam0)
{
	var uVar0;
	
	uVar0 = unk_0x9993EF7FDBCDB632();
	if (unk_0xE5965CDF24F93A9F(uVar0))
	{
		if (!func_439(iVar0))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && unk_0x77A43AFA9AAEC041(iVar0, unk_0xE2D3D51028F0428A(), Local_260, 0, 1, 0))
			{
				unk_0x7A75DC202144ACCF(iVar0);
				unk_0x959E1626CBC7D38A(iVar0, 0, 0);
				unk_0x1C2ED929474DC6FE(iVar0, 0, 0);
				unk_0x5C65DDDC219B3AA5(iVar0, 1);
				unk_0x2D58A6131679D82C(iVar0, 1, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_439(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (!unk_0xEF9410C312F2B117(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_440(var uParam0, int iParam1)
{
	iParam1++;
	unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_PLAYER_HIGHLIGHT");
	unk_0x4F47E317C74C543B(iParam1);
	unk_0x6F06CF0E9AB02847();
}

void func_441(var uParam0)
{
	func_442(uParam0, 0f);
}

void func_442(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8(BitTest(*uParam0, 4)) - fParam1);
	unk_0xCED9E32812D6C7C7(uParam0, 1);
	unk_0xB0550BC91B0159D6(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_443(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78319)
	{
		if (!unk_0xF68107C40359970C(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x2378080C93821600(iParam2, 0);
			}
			else
			{
				unk_0x2378080C93821600(iParam2, 1);
			}
		}
		if (!unk_0xF68107C40359970C(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x102D1A546FDB4B6D(iParam2, 0);
			}
			else
			{
				unk_0x102D1A546FDB4B6D(iParam2, 1);
			}
		}
	}
}

void func_444(var uParam0, var uParam1, char* sParam2)
{
	unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_DARTS_PLAYER_NAMES");
	func_37(uParam1);
	func_37(sParam2);
	unk_0x6F06CF0E9AB02847();
}

void func_445(var uParam0, struct<4> Param1, var uParam5, var uParam6, var uParam7, var uParam8)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(func_504()) && !unk_0xF68107C40359970C(func_504()))
	{
		unk_0x6221A52631154EF7(func_504());
	}
	else
	{
		if (unk_0xE5965CDF24F93A9F(uParam8->f_5) && !unk_0xF68107C40359970C(uParam8->f_5))
		{
			unk_0x2D58A6131679D82C(uParam8->f_5, 1, 1);
			uLocal_263[1] = uParam8->f_5;
			unk_0x03A927199A2DFE46(uLocal_263[1]);
		}
		else if (func_447(uParam7))
		{
			unk_0x03A927199A2DFE46(uLocal_263[1]);
		}
		else
		{
			uLocal_263[1] = unk_0xA8D58C3AADA2C41C(26, iLocal_299, Param1.f_3, uParam0, 1, 1);
		}
		if (unk_0xF2549FF74D64B720(uLocal_263[1], "Darts_name"))
		{
			iVar0 = unk_0xC3B76795ECBDEF41(uLocal_263[1], "Darts_name");
			if (954610991 == iVar0)
			{
				sLocal_359 = func_451("RAYMOND");
				iLocal_360 = 954610991;
			}
			else if (94453331 == iVar0)
			{
				sLocal_359 = func_451("JOHAN");
				iLocal_360 = 94453331;
			}
			else if (1891555423 == iVar0)
			{
				sLocal_359 = func_451("STAN");
				iLocal_360 = 1891555423;
			}
			else if (-1067630349 == iVar0)
			{
				sLocal_359 = func_451("VINCE");
				iLocal_360 = -1067630349;
			}
			else if (885327384 == iVar0)
			{
				sLocal_359 = func_451("KRISTY");
				iLocal_360 = 885327384;
			}
			else if (-1791000994 == iVar0)
			{
				sLocal_359 = func_451("MARLENE");
				iLocal_360 = -1791000994;
			}
			else if (1954368234 == iVar0)
			{
				sLocal_359 = func_451("LORIE");
				iLocal_360 = 1954368234;
			}
			else if (-863218904 == iVar0)
			{
				sLocal_359 = func_451("SHELLEY");
				iLocal_360 = -863218904;
			}
		}
		unk_0x05B874E9ABFF72B4(uLocal_263[1], "Darts_name", iLocal_360);
	}
	iVar1 = unk_0x15CAA6D7B11F1A7C(uLocal_263[1]);
	func_446(iVar1);
	unk_0x529D306014D3C29A(uLocal_263[1], uLocal_263[0], 0);
	unk_0x529D306014D3C29A(uLocal_263[0], uLocal_263[1], 0);
}

void func_446(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x5853B15F78E1A265(0, 2);
	switch (iParam0)
	{
		case joaat("a_f_m_salton_01"):
			switch (iVar0)
			{
				case 0:
					sLocal_102 = "A_F_M_SALTON_01_WHITE_FULL_03";
					break;
				
				case 1:
					sLocal_102 = "A_F_M_SALTON_01_WHITE_FULL_02";
					break;
			}
			break;
		
		case joaat("a_f_o_salton_01"):
			sLocal_102 = "A_F_M_SALTON_01_WHITE_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_01"):
			sLocal_102 = "G_M_Y_LOST_01_BLACK_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_03"):
			sLocal_102 = "G_M_Y_LOST_02_LATINO_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_04"):
			sLocal_102 = "G_M_Y_LOST_01_BLACK_FULL_02";
			break;
		
		case joaat("a_m_y_stlat_01"):
			sLocal_102 = "G_M_Y_LOST_02_LATINO_FULL_02";
			break;
		
		case joaat("a_m_y_stwhi_02"):
			sLocal_102 = "G_M_Y_LOST_01_WHITE_FULL_01";
			break;
	}
}

int func_447(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x46951D3186547C7A(unk_0xE2D3D51028F0428A(), uParam0, -1))
	{
		if (!unk_0xF68107C40359970C((*uParam0)[iVar0]))
		{
			if ((((((unk_0x15CAA6D7B11F1A7C((*uParam0)[iVar0]) == joaat("a_f_m_salton_01") || unk_0x15CAA6D7B11F1A7C((*uParam0)[iVar0]) == joaat("a_f_o_salton_01")) || unk_0x15CAA6D7B11F1A7C((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_01")) || unk_0x15CAA6D7B11F1A7C((*uParam0)[iVar0]) == joaat("a_m_y_stlat_01")) || unk_0x15CAA6D7B11F1A7C((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_04")) || unk_0x15CAA6D7B11F1A7C((*uParam0)[iVar0]) == joaat("a_m_y_stwhi_02")) || unk_0x15CAA6D7B11F1A7C((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_03"))
			{
				unk_0x2D58A6131679D82C((*uParam0)[iVar0], 1, 1);
				uLocal_263[1] = (*uParam0)[iVar0];
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_448(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar2 = (func_450() - 1);
		iVar0 = 3;
		while (iVar0 <= iVar2)
		{
			if (func_449(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_449(int iParam0)
{
	if (!func_93(iParam0))
	{
		return func_95(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_450()
{
	if (Global_31959 == 0 || Global_31959 == 2)
	{
		return 187;
	}
	return 161;
}

char* func_451(char* sParam0)
{
	if (unk_0xE2F2D76A4AA269FF() == 7)
	{
		if (unk_0x3C57C2F07FEE34D2(sParam0, "MICHAEL"))
		{
			return "??????????";
		}
		else if (unk_0x3C57C2F07FEE34D2(sParam0, "FRANKLIN"))
		{
			return "????????????????";
		}
		else if (unk_0x3C57C2F07FEE34D2(sParam0, "TREVOR"))
		{
			return "????????????";
		}
		else if (unk_0x3C57C2F07FEE34D2(sParam0, "LAMAR"))
		{
			return "??????????";
		}
		else if (unk_0x3C57C2F07FEE34D2(sParam0, "JIMMY"))
		{
			return "????????????";
		}
		else if (unk_0x3C57C2F07FEE34D2(sParam0, "KRISTY"))
		{
			return "????????????";
		}
		else if (unk_0x3C57C2F07FEE34D2(sParam0, "MARLENE"))
		{
			return "????????????";
		}
		else if (unk_0x3C57C2F07FEE34D2(sParam0, "LORIE"))
		{
			return "????????";
		}
		else if (unk_0x3C57C2F07FEE34D2(sParam0, "SHELLEY"))
		{
			return "??????????";
		}
		else if (unk_0x3C57C2F07FEE34D2(sParam0, "RAYMOND"))
		{
			return "??????????????";
		}
		else if (unk_0x3C57C2F07FEE34D2(sParam0, "JOHAN"))
		{
			return "??????????";
		}
		else if (unk_0x3C57C2F07FEE34D2(sParam0, "STAN"))
		{
			return "????????";
		}
		else if (unk_0x3C57C2F07FEE34D2(sParam0, "VINCE"))
		{
			return "????????";
		}
	}
	return sParam0;
}

void func_452(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		uParam0->f_4 = unk_0x82FE2343F8BDFF0B(*uParam0);
	}
	if (!bParam3)
	{
		func_454(uParam1, uParam0);
	}
	Local_82 = { 0f, (-2.3685f + fLocal_55), 0.1f };
	Local_82 = { Local_82 + Local_56 };
	Local_79 = { unk_0x6DB7FBD602C51670(uParam0->f_1, uParam0->f_4, Local_82) };
	func_453(uParam2, uParam0);
}

void func_453(var uParam0, var uParam1)
{
	uParam0->f_3 = { 0f, -0.15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + Local_56 };
	*uParam0 = { unk_0x6DB7FBD602C51670(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
}

void func_454(var uParam0, var uParam1)
{
	*uParam0 = { unk_0x6DB7FBD602C51670(uParam1->f_1, uParam1->f_4, -0.4f, (-2.4f + fLocal_55), -1.7272f) };
	uParam0->f_3 = { unk_0x6DB7FBD602C51670(uParam1->f_1, uParam1->f_4, 0.5f, (-2.4f + fLocal_55), -1.7272f) };
}

int func_455(var uParam0, var uParam1)
{
	if (!unk_0x70F555A7CCF10659("SCRIPT\DARTS", 0, -1))
	{
		return 0;
	}
	if (!unk_0x70F555A7CCF10659("SCRIPT\FAMILY1_2", 0, -1))
	{
		return 0;
	}
	if ((((((((((((!unk_0x0152AA00FA3130F1(iLocal_28) || !unk_0x0152AA00FA3130F1(iLocal_29)) || !unk_0x0152AA00FA3130F1(iLocal_60)) || !unk_0x0152AA00FA3130F1(iLocal_299)) || !unk_0x0347CCBD719C8ADC(*uParam0)) || !unk_0x0347CCBD719C8ADC(uParam1->f_645)) || !unk_0x0347CCBD719C8ADC(uParam1->f_57)) || !unk_0x0347CCBD719C8ADC(uParam1->f_62)) || !unk_0x01896B71C5AC966E(3)) || !unk_0x9D4AFED2949F7082("Darts")) || !unk_0x6F940C2636C076AD(sLocal_361)) || !unk_0x6F940C2636C076AD(sLocal_362)) || !func_456(0, -1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_456(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_348(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23150.f_6026[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xACC32B78196FBC2A(&(Global_23150.f_6026[iVar0 /*4*/])))
	{
		unk_0x249A0D3C5714BCF4(&(Global_23150.f_6026[iVar0 /*4*/]), 9);
		Global_23150.f_6019[iVar0] = 1;
		if (!unk_0x5FABFB823FD821D4(&(Global_23150.f_6026[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xA9911C122B3210B5("CommonMenu", 0);
	Global_23150.f_6005[iVar0] = 1;
	if (!unk_0x9D4AFED2949F7082("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xA9911C122B3210B5("MPShopSale", 0);
		Global_23150.f_6012[iVar0] = 1;
		if (!unk_0x9D4AFED2949F7082("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23150.f_6051[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_457(&(Global_23150.f_6051[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_457(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x0347CCBD719C8ADC(*uParam0))
			{
				*uParam0 = unk_0x528279F3F1EEF869(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x0347CCBD719C8ADC(*uParam0))
					{
						uParam0->f_8 = unk_0x320D1840B6DAA1CC();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x320D1840B6DAA1CC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x0347CCBD719C8ADC(*uParam0))
			{
				uParam0->f_8 = unk_0x320D1840B6DAA1CC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x0347CCBD719C8ADC(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_458(var uParam0, var uParam1)
{
	unk_0xD69A0C3662175E68(iLocal_28);
	unk_0xD69A0C3662175E68(iLocal_29);
	unk_0xD69A0C3662175E68(iLocal_60);
	unk_0xD69A0C3662175E68(iLocal_299);
	unk_0xA9911C122B3210B5("Darts", 0);
	unk_0xA9911C122B3210B5("ShopUI_Title_Darts", 0);
	unk_0x8FB472886552D737(sLocal_361);
	unk_0x8FB472886552D737(sLocal_362);
	*uParam0 = unk_0x528279F3F1EEF869("darts_scoreboard");
	uParam1->f_645 = func_200();
	uParam1->f_57 = func_460();
	uParam1->f_62 = func_459();
	unk_0x249A0D3C5714BCF4("DARTS", 3);
}

var func_459()
{
	return unk_0x528279F3F1EEF869("MIDSIZED_MESSAGE");
}

var func_460()
{
	return unk_0x528279F3F1EEF869("MP_BIG_MESSAGE_FREEMODE");
}

void func_461(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			uParam0->f_1[iVar0 /*8*/][iVar1] = 1;
			iVar1++;
		}
		iVar0++;
	}
	if (iParam1 == 0)
	{
		uParam0->f_18 = { 989.399f, -99.674f, 75.925f };
		uParam0->f_21 = { 180f, 0f, 252.555f };
		uParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	else
	{
		uParam0->f_18 = { 1992.223f, 3049.814f, 48.333f };
		uParam0->f_21 = { 180f, 0f, 87.77f };
		uParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	if (!func_462(Param2) && fParam5 != 0f)
	{
		uParam0->f_18 = { unk_0x6DB7FBD602C51670(Param2, fParam5, -0.687645f, -0.350352f, 0.343273f) };
		uParam0->f_21 = { 180f, 0f, (fParam5 - -29.98685f) };
	}
	uParam0->f_27 = 0.885f;
	uParam0->f_28 = 0.244f;
	uParam0->f_29 = 0.17f;
	uParam0->f_30 = 0.415f;
}

int func_462(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_463(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0 + 1;
	Local_61.f_0 = 0.5f;
	Local_61.f_1 = 0.5f;
	if (unk_0xD87C62FA7E75D2C5())
	{
		Local_61.f_2 = 0.05f;
		Local_61.f_3 = 0.095f;
	}
	else
	{
		Local_61.f_2 = 0.065f;
		Local_61.f_3 = 0.09f;
	}
	Local_61.f_4 = 255;
	Local_61.f_5 = 250;
	Local_61.f_6 = 255;
	Local_61.f_7 = 123;
	if (iVar0 == 1)
	{
		Local_61.f_4 = 255;
		Local_61.f_5 = 255;
		Local_61.f_6 = 255;
	}
	else if (iVar0 == 2)
	{
		Local_61.f_4 = 255;
		Local_61.f_5 = 255;
		Local_61.f_6 = 255;
	}
	Local_61.f_8 = 0f;
	Local_70.f_0 = 0f;
	Local_70.f_1 = 0f;
	Local_70.f_2 = 0.061f;
	Local_70.f_3 = 0.105f;
	Local_70.f_4 = 200;
	Local_70.f_5 = 45;
	Local_70.f_6 = 40;
	Local_70.f_7 = 255;
	Local_70.f_8 = 0f;
}

void func_464(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		uParam0->f_1 = iLocal_28;
	}
	else
	{
		uParam0->f_1 = iLocal_29;
	}
	uParam0->f_24 = 0;
	uParam0->f_23 = 0;
}

void func_465()
{
	int iVar0;
	
	unk_0x9231B11E90084508();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_2100721.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_466(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	float fVar21;
	struct<3> Var22;
	float fVar25;
	float fVar26;
	struct<3> Var27;
	float fVar30;
	float fVar31;
	struct<3> Var32;
	struct<3> Var35;
	struct<3> Var38;
	
	fLocal_134 = unk_0xF4CC509EEB975296(0);
	fVar21 = 30f;
	fVar21 = func_410(fLocal_134);
	Var22 = { -0.192784f, -1.73287f, 0.0262985f };
	fVar25 = 1.7939f;
	fVar26 = -1.3346f;
	if (unk_0xD87C62FA7E75D2C5())
	{
		Var27 = { -0.0974819f, -1.65968f, 0.335098f };
		fVar30 = -1.3023f;
		fVar31 = -12.4139f;
	}
	else
	{
		Var27 = { -0.112635f, -1.86963f, 0.45417f };
		fVar30 = -3.7542f;
		fVar31 = -14.4576f;
	}
	Var32 = { 0.261599f, -0.750354f, -0.392929f };
	Var38 = { 0.281314f, -0.573735f, -0.39603f };
	Var3 = { unk_0x6DB7FBD602C51670(Param0, fParam3, Var22) };
	Var9 = { fVar26, 0f, (fParam3 - fVar25) };
	Var0 = { unk_0x6DB7FBD602C51670(Param0, fParam3, Var27) };
	Var6 = { fVar31, 0f, (fParam3 - fVar30) };
	Var12 = { unk_0x6DB7FBD602C51670(Param0, fParam3, Var32) };
	Var15 = { 0.8351f, -0.0048f, (fParam3 - 186.5073f) };
	Var35 = { unk_0x6DB7FBD602C51670(Param0, fParam3, Var38) };
	Var18 = { 0.8351f, -0.0048f, (fParam3 - 186.5073f) };
	uLocal_120 = unk_0x1BCEC0B1056BD6AC(26379945, Var0, Var6, fVar21, 0, 2);
	uLocal_121 = unk_0x1BCEC0B1056BD6AC(26379945, Var3, Var9, fVar21, 0, 2);
	uLocal_122 = unk_0x1BCEC0B1056BD6AC(26379945, Var12, Var15, 65f, 0, 2);
	uLocal_123 = unk_0x1BCEC0B1056BD6AC(26379945, Var35, Var18, 65f, 0, 2);
	uLocal_124 = unk_0x1BCEC0B1056BD6AC(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_125 = unk_0x1BCEC0B1056BD6AC(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_127 = unk_0x1BCEC0B1056BD6AC(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_128 = unk_0x1BCEC0B1056BD6AC(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	uLocal_126 = unk_0x1BCEC0B1056BD6AC(26379945, 1996.235f, 3048.456f, 48.0237f, -3.4831f, 0.0223f, 60.6925f, 38.1f, 0, 2);
	unk_0x0A18C027350D3C19(uLocal_122, 43.35f);
	unk_0x0A18C027350D3C19(uLocal_123, 42.35f);
	unk_0x9BAE3263D9B1FCB9(uLocal_122, "HAND_SHAKE", 0.1f);
	unk_0x9BAE3263D9B1FCB9(uLocal_123, "HAND_SHAKE", 0.1f);
}

void func_467(var uParam0, var uParam1)
{
	uParam0->f_1 = { *uParam1 };
	uParam0->f_4 = uParam1->f_3;
	if (unk_0xE5965CDF24F93A9F(uParam1->f_4))
	{
		*uParam0 = uParam1->f_4;
	}
	iLocal_33[0] = 20;
	iLocal_33[10] = 3;
	iLocal_33[1] = 1;
	iLocal_33[11] = 19;
	iLocal_33[2] = 18;
	iLocal_33[12] = 7;
	iLocal_33[3] = 4;
	iLocal_33[13] = 16;
	iLocal_33[4] = 13;
	iLocal_33[14] = 8;
	iLocal_33[5] = 6;
	iLocal_33[15] = 11;
	iLocal_33[6] = 10;
	iLocal_33[16] = 14;
	iLocal_33[7] = 15;
	iLocal_33[17] = 9;
	iLocal_33[8] = 2;
	iLocal_33[18] = 12;
	iLocal_33[9] = 17;
	iLocal_33[19] = 5;
	iLocal_33[20] = 20;
}

void func_468()
{
	Global_23011.f_6 = 1;
}

void func_469(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&Global_32207, iParam0);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_32207, iParam0);
	}
}

var func_470(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar1 = func_471(iParam0, iParam1);
	unk_0x61481F9FBB1C7EDD(uVar1, &uVar0, -1);
	return uVar0;
}

var func_471(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_472(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_472(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_473(bool bParam0)
{
	if (bParam0)
	{
		func_474();
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			unk_0xCED9E32812D6C7C7(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_42(0))
		{
			func_433(0);
		}
	}
	else if (Global_20266.f_1 == 1)
	{
		if (!Global_20266.f_1 == 0)
		{
			Global_20266.f_1 = 3;
		}
	}
}

void func_474()
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

void func_475(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	unk_0xECE811C504EF8D48(1);
	func_271(8);
	func_324();
	if (bLocal_273)
	{
		func_492(&uLocal_289);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_414(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		iVar0++;
	}
	unk_0xF1A23B343DFEDFD0(iLocal_28);
	unk_0xF1A23B343DFEDFD0(iLocal_29);
	if (!unk_0xF68107C40359970C(uLocal_263[0]) && !unk_0xF68107C40359970C(uLocal_263[1]))
	{
		unk_0xC89EA639A6F338A6(uLocal_263[0]);
		unk_0xC89EA639A6F338A6(uLocal_263[1]);
	}
	func_491();
	unk_0xF1A23B343DFEDFD0(iLocal_60);
	func_490();
	func_489(uParam1->f_645);
	func_488(&(uParam1->f_57));
	if (!unk_0x55B23FE400FCEA6B(func_504(), 0))
	{
		unk_0xF23E6F5690771F71(func_504(), func_487());
		func_486(iLocal_297, iLocal_298);
	}
	else
	{
		func_484(&(uLocal_263[1]));
	}
	func_473(0);
	func_483(uParam2, 0);
	func_39(0);
	unk_0x4FEF096D3AB4AA8C(15);
	if (unk_0xC65B603E7942D0DB())
	{
		if (iParam0->f_460 && !iLocal_287)
		{
			func_482(190, 0);
		}
	}
	func_105();
	func_465();
	func_97(&(uParam1->f_72), 0);
	unk_0x4EDE34FBADD967A6(200);
	if (iLocal_280)
	{
		func_479(130, 0, 0);
		func_476();
	}
	func_469(23, 0);
	unk_0xAFBDF6A5E54114C1();
}

void func_476()
{
	func_477();
}

int func_477()
{
	if (func_478(0))
	{
		return 0;
	}
	if (Global_100480.f_8)
	{
		if (Global_100480.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100480.f_10 > 1)
	{
		return 0;
	}
	Global_100480.f_10++;
	return 1;
}

int func_478(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_479(int iParam0, int iParam1, int iParam2)
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
		func_66((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113386.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113386.f_10194[iParam0 /*12*/].f_6 == 11 || Global_113386.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113386.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_113386.f_10194[iParam0 /*12*/].f_10 = iParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_480();
	}
}

void func_480()
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
	Global_113122 = 0;
	Global_113123 = 0;
	Global_113124 = 0;
	Global_113125 = 0;
	Global_113126 = 0;
	Global_113127 = 0;
	Global_113128 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113386.f_10194.f_3853;
	Global_113386.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113386.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113386.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113122++;
					fVar1 = (fVar1 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113123++;
					fVar2 = (fVar2 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113124++;
					fVar3 = (fVar3 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113125++;
					fVar4 = (fVar4 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113126++;
					fVar5 = (fVar5 + (Global_113386.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113127++;
					fVar6 = (fVar6 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113128++;
					fVar7 = (fVar7 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113105 > 0)
	{
		if (Global_113122 == Global_113105)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113106 > 0)
	{
		if (Global_113123 == Global_113106)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113107 > 0)
	{
		if (Global_113124 == Global_113107)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113108 > 0)
	{
		if (Global_113125 == Global_113108)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113109 > 0)
	{
		if (((Global_113126 == Global_113109 || (Global_113109 * 10 / Global_113126) < 41) || Global_113126 > Global_113112) || Global_113126 == Global_113112)
		{
			if (!BitTest(Global_113386.f_10194.f_3856, 14))
			{
				if (Global_113126 == Global_113109)
				{
					unk_0x423A6008CEED5D6C(joaat("num_rndevents_completed"), Global_113109, 0);
					unk_0xCED9E32812D6C7C7(&(Global_113386.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113110 > 0)
	{
		if (Global_113127 == Global_113110)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113111 > 0)
	{
		if (Global_113128 == Global_113111)
		{
			fVar7 = 5f;
		}
	}
	Global_113386.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113126 > Global_113112 || Global_113126 == Global_113112)
	{
		iVar9 = Global_113112;
	}
	else
	{
		iVar9 = Global_113126;
	}
	unk_0x076A5661EF5ABEE4(joaat("num_missions_completed"), Global_113122, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_missions_available"), Global_113105, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_minigames_completed"), Global_113123, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_minigames_available"), Global_113106, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_oddjobs_completed"), Global_113124, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_oddjobs_available"), Global_113107, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndpeople_completed"), Global_113125, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndpeople_available"), Global_113108, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndevents_available"), Global_113112, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_misc_completed"), (Global_113128 + Global_113127), 1);
	unk_0x076A5661EF5ABEE4(joaat("num_misc_available"), (Global_113111 + Global_113110), 1);
	Global_113129 = (Global_113122 * 100 / Global_113105);
	Global_113131 = ((Global_113124 + Global_113123) * 100 / (Global_113107 + Global_113106));
	Global_113130 = ((Global_113125 + iVar9) * 100 / (Global_113108 + Global_113112));
	Global_113132 = ((Global_113127 + Global_113128) * 100 / (Global_113110 + Global_113111));
	unk_0xD9B28F1445FFCEE7(joaat("total_progress_made"), Global_113386.f_10194.f_3853, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_story_missions"), Global_113129, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_ambient_missions"), Global_113130, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_oddjobs"), Global_113131, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853))
	{
		func_86(13, unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853));
	}
	if (!unk_0x665245305CD9E866())
	{
		if (!Global_78319)
		{
			if (func_481() == 2 == 0 && !unk_0x9315DBF7D972F07A())
			{
				if (unk_0x47C86377AA337CBE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_477();
				}
			}
		}
	}
}

int func_481()
{
	return Global_31959;
}

void func_482(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var7[1];
	
	if (!unk_0xC65B603E7942D0DB())
	{
		return;
	}
	StringCopy(&(Var7[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_230(iParam0, &Var0, &Var7, 1, -1, 0, 0))
	{
		unk_0x6D1A116F1B08FA08(103, iLocal_151[1], 0f);
		unk_0x6D1A116F1B08FA08(99, iLocal_151[2], 0f);
		unk_0x6D1A116F1B08FA08(109, iLocal_151[3], 0f);
		unk_0x6D1A116F1B08FA08(106, iLocal_151[5], 0f);
		unk_0x6D1A116F1B08FA08(2, iLocal_151[10], 0f);
		unk_0x6D1A116F1B08FA08(107, iLocal_151[8], 0f);
		unk_0x6D1A116F1B08FA08(116, iLocal_151[6], 0f);
	}
}

void func_483(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x705B098546DEB18A(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0x8FE9914D4872D601())
		{
			unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD7D6BA6E36AEC182(false);
			unk_0x6F06CF0E9AB02847();
		}
		unk_0x705B098546DEB18A(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		unk_0x94B5910A9C945688(0);
		uParam0->f_568 = 0;
	}
	if (!Global_78587)
	{
		if (!unk_0xE08D4560995E7946(unk_0xB6BA8B8E3D0B41C6()))
		{
			if (!Global_78588)
			{
				if (unk_0xA829C9A2767AC8EF() && !func_478(0))
				{
					unk_0x5A7ACD1CDF509B0D(800);
				}
			}
		}
	}
	func_39(0);
}

void func_484(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0) && !unk_0xF68107C40359970C(*uParam0))
	{
		unk_0x7461D7C5BA953BC7(&uLocal_300);
		unk_0xA888F8CC04F25CC8(&uLocal_300);
		if (unk_0xE5965CDF24F93A9F(uLocal_263[0]))
		{
			unk_0xF30F15F203736DE4(0, uLocal_263[0], 8000, 2049, 3);
		}
		unk_0x83F5BCFFFBA26699(0, 1000);
		if (bLocal_278)
		{
			if (!BitTest(Global_113347, 10))
			{
				unk_0x7D1424753688EE7A(0, func_485(iLocal_302 == 2, Local_343, Local_349), 1f, 20000, 0.25f, 0, func_124(iLocal_302 == 2, fLocal_353, fLocal_355));
			}
			else
			{
				unk_0x7D1424753688EE7A(0, func_485(iLocal_302 == 2, Local_340, Local_346), 1f, 20000, 0.25f, 0, func_124(iLocal_302 == 2, fLocal_352, fLocal_354));
			}
			unk_0xC9FEFB406C44F60B(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
		}
		else
		{
			unk_0x7D1424753688EE7A(0, func_485(iLocal_302 == 2, Local_340, Local_346), 1f, 20000, 0.25f, 0, func_124(iLocal_302 == 2, 172.6813f, 142.6717f));
			unk_0xC9FEFB406C44F60B(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
		}
		unk_0xC963A45B50851768(uLocal_300);
		unk_0x8ACADA903FCAA42F(*uParam0, uLocal_300);
		unk_0xABC2CA6F28903308(*uParam0, 1);
	}
	unk_0xF1A23B343DFEDFD0(iLocal_299);
}

Vector3 func_485(bool bParam0, struct<3> Param1, struct<3> Param4)
{
	if (bParam0)
	{
		return Param1;
	}
	return Param4;
}

void func_486(int iParam0, var uParam1)
{
	if (Global_96267 == iParam0)
	{
		Global_96268 = Global_96267;
		Global_96269 = uParam1;
		Global_96267 = 23;
	}
}

var func_487()
{
	return unk_0xFD8E434495EC2F26(unk_0xB6BA8B8E3D0B41C6());
}

void func_488(var uParam0)
{
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		unk_0x705B098546DEB18A(uParam0);
		*uParam0 = 0;
	}
}

void func_489(var uParam0)
{
	unk_0x705B098546DEB18A(&uParam0);
}

void func_490()
{
	unk_0x3410421C60BF7143(1);
	unk_0x4B248030F70A5D8B(0);
	unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
	unk_0xB60709BD0E075903(1);
}

void func_491()
{
	if (unk_0xE5965CDF24F93A9F(uLocal_59))
	{
		unk_0x4BDA5AFD88C085EB(&iLocal_59);
	}
}

void func_492(var uParam0)
{
	var uVar0;
	
	uVar0 = *uParam0;
	if (unk_0xE5965CDF24F93A9F(uVar0))
	{
		if (!func_439(iVar0))
		{
			unk_0x959E1626CBC7D38A(iVar0, 1, 0);
			unk_0x1C2ED929474DC6FE(iVar0, 1, 0);
			unk_0x5C65DDDC219B3AA5(iVar0, 0);
		}
	}
}

void func_493()
{
	int iVar0;
	
	if (unk_0xF79F112CE5999680("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || func_478(0))
	{
		if (!func_501())
		{
			iVar0 = func_500();
			if (iVar0 != -1)
			{
				if (!func_495(iVar0))
				{
					return;
				}
				unk_0xCED9E32812D6C7C7(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_494();
		}
	}
}

void func_494()
{
	Global_100476 = 1;
	if (unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1))
	{
		if (unk_0xACC32B78196FBC2A(&Global_78551))
		{
			switch (func_91())
			{
				case 0:
					StringCopy(&Global_78551, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_78551, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_78551, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_78555, "", 16);
		}
		Global_100476 = 0;
	}
	else if (!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xACC32B78196FBC2A(&Global_78551))
		{
			switch (func_91())
			{
				case 0:
					StringCopy(&Global_78551, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_78551, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_78551, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_78555, "", 16);
		}
		Global_100476 = 0;
		unk_0xCED9E32812D6C7C7(&(Global_100441.f_20), 25);
	}
}

int func_495(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_494();
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		unk_0x3B97C4414E778C45(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	func_499(iVar1, 1);
	unk_0xA131CC850DA50CF0(unk_0x9E2D6C50374FCFA9(), 0);
	unk_0xC204033758E4127F(unk_0x9E2D6C50374FCFA9(), 0);
	func_496(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x3E49EF84C421E367(0);
		}
	}
	Global_113386.f_9085.f_330[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085)
		{
		}
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_496(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113386.f_18533[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_498(Global_113386.f_18533[iVar0], &Var2, &fVar5))
			{
				Global_113386.f_18533[iVar0] = 318;
				func_497(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_97831[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_9 = 0f;
				Global_97831[iVar0 /*29*/].f_12 = 0f;
				Global_97831[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_10 = 0f;
				Global_97831[iVar0 /*29*/].f_13 = 0f;
				Global_97831[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_11 = 0f;
				Global_97831[iVar0 /*29*/].f_14 = 0f;
				Global_97831[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_26 = 0f;
				Global_97831[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_27 = 0f;
				Global_97831[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_497(var uParam0)
{
	*uParam0 = -15;
}

int func_498(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_498(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_498(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_499(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94426[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94426[iParam0 /*2*/] = 0;
	}
}

int func_500()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_501()
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

void func_502(int iParam0, bool bParam1)
{
	if (unk_0xF68107C40359970C(func_504()))
	{
		return;
	}
	if (bParam1)
	{
		if (!unk_0x2F52E009BBC0AFCE(func_504(), func_487()))
		{
			return;
		}
		if (!unk_0xF68107C40359970C(func_503()))
		{
			if (!unk_0x2F52E009BBC0AFCE(func_503(), func_487()))
			{
				return;
			}
		}
	}
	if (Global_96267 == 23)
	{
		Global_96269 = 10;
		Global_96267 = iParam0;
	}
}

var func_503()
{
	return Global_96274;
}

int func_504()
{
	return Global_96273;
}

void func_505()
{
	if (iLocal_258 == 1)
	{
		return;
	}
	func_324();
	unk_0x9E4A185A00C358E1("Darts");
	iLocal_258 = 1;
}

int func_506(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_94(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

