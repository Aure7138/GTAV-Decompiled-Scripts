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
	int iLocal_45 = 0;
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
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76[1] = { 0 };
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 16;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
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
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
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
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 1097859072;
	var uLocal_270 = 1500;
	var uLocal_271 = 45;
	var uLocal_272 = 1103626240;
	var uLocal_273 = 5;
	var uLocal_274[1] = { 0 };
	char* sLocal_276 = NULL;
	char* sLocal_277 = NULL;
	var uLocal_278 = 1;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282[1] = { 0 };
	var uLocal_284[4] = { 0, 0, 0, 0 };
	struct<9> Local_289 = { 0, 0, 0, 0, 0, 0, 0, 21, 6 } ;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	struct<3> Local_302 = { 0, 0, 0 } ;
	struct<3> Local_305 = { 0, 0, 0 } ;
	struct<3> Local_308 = { 0, 0, 0 } ;
	struct<3> Local_311 = { 0, 0, 0 } ;
	struct<3> Local_314 = { 0, 0, 0 } ;
	struct<3> Local_317 = { 0, 0, 0 } ;
	struct<3> Local_320 = { 0, 0, 0 } ;
	struct<3> Local_323 = { 0, 0, 0 } ;
	float fLocal_326 = 0f;
	float fLocal_327 = 0f;
	float fLocal_328 = 0f;
	float fLocal_329 = 0f;
	int iLocal_330 = 0;
	var uLocal_331 = 0;
	int iLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	int iLocal_335 = 0;
	bool bLocal_336 = 0;
	bool bLocal_337 = 0;
	int iLocal_338 = 0;
	var uLocal_339 = 0;
	int iLocal_340 = 0;
	struct<5> ScriptParam_0 = { 1, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
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
	Local_63 = { 500f, 500f, 500f };
	fLocal_329 = -1f;
	iLocal_332 = -1;
	bLocal_336 = true;
	unk_0x037A80676B8FF0F5("stripperhome");
	unk_0xB65977CD1EC089B5(1);
	unk_0x74909EF861003AA2(unk_0x93E99A2DBCBA9CFA(), 1);
	if (unk_0x55EEDBBFDC6E810F(75))
	{
		func_303();
	}
	bLocal_337 = ScriptParam_0.f_5;
	if (bLocal_337)
	{
		unk_0xCF50389093DECE87(32, 0, -1);
		func_298(0, -1, 0);
		unk_0xE5CBFFB5DE87586F(1);
		unk_0xF1440897111F3111(0);
	}
	uLocal_76[0] = ScriptParam_0[0];
	Global_112673.f_1 = uLocal_76[0];
	bVar0 = false;
	bVar1 = true;
	iVar2 = unk_0x30DFE1FFD2CC7420();
	if (func_297() && ScriptParam_0.f_4)
	{
		bVar1 = false;
		if (iVar2 > 14 && iVar2 < 22)
		{
			bVar0 = true;
		}
	}
	while (((!func_268(&ScriptParam_0, bVar0) && iLocal_74 != 6) && iLocal_74 != 5) && (iLocal_74 != -1 || !func_267(uLocal_333, 1024)))
	{
		func_259(0);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xE0A291F406691F03(func_258(0, 0));
	unk_0xE0A291F406691F03(func_258(1, 0));
	if (!bVar1)
	{
		iLocal_74 = 2;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_335 > 0)
		{
			func_256();
			iLocal_335 = (iLocal_335 - unk_0xF2DB717A73826179((unk_0x290D4E218346D595() * 1000f)));
		}
		switch (iLocal_74)
		{
			case -1:
				func_255();
				break;
			
			case 0:
				func_215(1);
				break;
			
			case 1:
				func_108();
				break;
			
			case 2:
				func_215(0);
				break;
			
			case 3:
				func_90();
				break;
			
			case 4:
				func_38(bLocal_336);
				break;
			
			case 5:
				func_11();
				break;
			
			case 6:
				if (!func_10(&uLocal_261))
				{
					func_7(&uLocal_261);
				}
				else if (func_1(&uLocal_261, 7.5f))
				{
					func_303();
				}
				break;
		}
	}
}

int func_1(var uParam0, float fParam1)
{
	if (func_3(uParam0, fParam1))
	{
		func_2(uParam0);
		return 1;
	}
	return 0;
}

void func_2(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_3(var uParam0, float fParam1)
{
	if (func_10(uParam0))
	{
		if (func_4(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(var uParam0)
{
	if (func_10(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_5(bool bParam0)
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

bool func_6(var uParam0)
{
	return BitTest(*uParam0, 2);
}

void func_7(var uParam0)
{
	if (!func_10(uParam0))
	{
		func_8(uParam0);
	}
}

void func_8(var uParam0)
{
	func_9(uParam0, 0f);
}

void func_9(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_5(BitTest(*uParam0, 4)) - fParam1);
	unk_0xECDAB41968FF21A8(uParam0, 1);
	unk_0x061B1200C95204CB(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_10(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_11()
{
	if (!func_267(uLocal_333, 8192))
	{
		if (func_37())
		{
			func_26();
		}
		else
		{
			iLocal_74 = 6;
		}
	}
	if (func_267(uLocal_333, 16384))
	{
		if (func_12())
		{
			iLocal_74 = 6;
		}
	}
}

int func_12()
{
	if (unk_0x055111B11E6624FD(uLocal_274[0], 0))
	{
		return 1;
	}
	if (func_267(uLocal_333, 8192))
	{
		unk_0x992BB708B4B7A005(uLocal_274[0], 60, 1);
		if (unk_0x1C4E4DC1EFE24DF1(uLocal_274[0], 96.8033f, -1287.597f, 28.2688f, 5f, 5f, 2f, 0, 1, 1) || func_25(unk_0xC1A5EC5C986B98AD(), 96.8033f, -1287.597f, 28.2688f, 1) > 100f)
		{
			if (unk_0x17AE936FF608BF89(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
			{
				unk_0xB3B8D217E4E83342(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 1, 0f, 0);
			}
			if (unk_0xF57C1326FD40C8A7(uLocal_284[0]))
			{
				if (unk_0x0097C56F4031898F(uLocal_284[0]))
				{
					func_13(1, 1, 0);
					unk_0x9E2404A25985615A(false, 0, 3000, 1, 0, 0);
					unk_0x42B9FA814615C4F9(uLocal_284[0], 1);
				}
			}
			unk_0xE9C250FA35A936C8(&(uLocal_274[0]));
			return 1;
		}
	}
	return 0;
}

void func_13(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xE333240A90F2FF3C(unk_0x5DC3DCA82C806319(), true, 0);
	}
	unk_0xC3578D74003B8E01(1);
	func_15(0, 1, iParam2, 0, 0, 0, 0);
	if (bParam1)
	{
		unk_0x61F7D56FFAFBF706(1);
		unk_0xB1A691274215E4CE(1);
	}
	func_14(23, 0);
}

void func_14(int iParam0, bool bParam1)
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

void func_15(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x8ECAA315E07E3A17(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 1);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 1);
		func_24(1);
		unk_0x2A7FF4CA1CC371B5();
		unk_0x3096CB6635EB839E();
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE444FD7526C8BB46())
			{
				unk_0xD6625E11483B2324(0);
			}
			if (!func_23())
			{
				Global_20383.f_1 = 3;
			}
			Global_21725 = 5;
		}
		func_22(1, iParam3, iParam2, 0);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_24(0);
		unk_0x5862CC4FD19EB752();
		Global_63368 = 0;
		if (bParam1)
		{
			unk_0xDB4D82037BD5A339();
		}
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 0);
		func_22(0, iParam3, iParam2, 0);
		if (unk_0xA26A9A07F761D8F8())
		{
			if ((((((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_20(unk_0x93E99A2DBCBA9CFA())) && !func_17(unk_0x93E99A2DBCBA9CFA(), 0)) && !func_16()) && !bParam4) && !bParam5) && !unk_0x8253CEEA17ED481B())
			{
				unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
			}
		}
		else if (((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_20(unk_0x93E99A2DBCBA9CFA())) && !bParam4) && !bParam5)
		{
			unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
		}
		Global_78556 = 0;
	}
}

bool func_16()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 14);
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1574918;
}

int func_20(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_21())
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

bool func_21()
{
	return BitTest(Global_2621446, 3);
}

int func_22(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_23()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_24(int iParam0)
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

float func_25(int iParam0, struct<3> Param1, int iParam4)
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

void func_26()
{
	var uVar0;
	
	func_29();
	if (unk_0x17AE936FF608BF89(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
	{
		unk_0xB3B8D217E4E83342(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 0, 0f, 0);
	}
	func_27(&uLocal_333, 16384);
	unk_0x2718E9CC165A99F6(uLocal_274[0], 0);
	unk_0x598D91BBD045C1F3(uLocal_274[0], 104, 1);
	unk_0xDBC7406226B5540E(&uVar0);
	unk_0x7D9A648CC1936BDA(0, 98.2041f, -1291.252f, 28.2688f, 1f, -1, 0.25f, 1, 1193033728);
	unk_0x7D9A648CC1936BDA(0, 107.6303f, -1304.742f, 27.7688f, 1f, -1, 0.25f, 0, 1193033728);
	unk_0x3EE48ADC8C7F5CC4(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 15000, 1, 0, 0, 0, 0);
	unk_0xF2CFC6EC8C85FA78(uVar0);
	unk_0x3D7110D966B0CEA2(uLocal_274[0], uVar0);
	unk_0x63EF69C6969A3D26(&uVar0);
	func_27(&uLocal_333, 8192);
}

void func_27(var uParam0, int iParam1)
{
	func_28(uParam0, iParam1);
}

void func_28(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_29()
{
	if (!unk_0xDB08595445CDE2FF(uLocal_274[0]) && func_36(1, 0, 1))
	{
		func_30(0, 0, 0);
		uLocal_284[0] = unk_0x61A083AB40BC7D3F("DEFAULT_SCRIPTED_CAMERA", 90.1007f, -1281.573f, 28.6661f, 2.4422f, 0f, -113.4013f, 45f, 1, 2);
		unk_0x9E2404A25985615A(true, 0, 3000, 1, 0, 0);
	}
}

void func_30(int iParam0, int iParam1, int iParam2)
{
	unk_0xE333240A90F2FF3C(unk_0x5DC3DCA82C806319(), false, iParam0);
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		unk_0x636EFA4C5BC401A8(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 15f);
	}
	unk_0xC3578D74003B8E01(iParam1);
	func_31(0);
	func_15(1, 1, iParam2, 0, 0, 0, 0);
	unk_0x61F7D56FFAFBF706(0);
	unk_0xB1A691274215E4CE(0);
	func_14(23, 1);
}

void func_31(int iParam0)
{
	if (func_35())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_34())
		{
			func_32(1, 1);
		}
		else
		{
			func_32(0, 0);
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
	if (!func_23())
	{
		Global_20383.f_1 = 3;
	}
}

void func_32(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_33(0))
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

int func_33(int iParam0)
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

bool func_34()
{
	return BitTest(Global_1962996, 5);
}

bool func_35()
{
	return BitTest(Global_1962996, 19);
}

int func_36(bool bParam0, bool bParam1, bool bParam2)
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

int func_37()
{
	if ((uLocal_76[0] == 8 || uLocal_76[0] == 9) || func_25(uLocal_274[0], 96.12f, -1284.91f, 29.43f, 1) > 10f)
	{
		return 0;
	}
	return 1;
}

void func_38(bool bParam0)
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	
	func_65();
	if (bParam0)
	{
		Var0 = { Local_308 };
	}
	else
	{
		func_64(&Var0, &uVar3, 0);
	}
	func_61(Var0);
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (unk_0x3C3D6D026CF7F51B(uLocal_274[0], 0))
		{
			iVar4 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			if (unk_0x7DE17ACDD8BA2642(iVar4) && !unk_0x055111B11E6624FD(iVar4, 0))
			{
				if (iLocal_338)
				{
					if (func_59(iVar4, 4f, 1, 1056964608, 0, 1, 0))
					{
						func_58();
						unk_0x6FE9A0C01D25F413(uLocal_274[0], 0, 16777216);
						func_39();
					}
				}
				else if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Var0, 4f, 4f, 2f, 1, 1, 2))
				{
					iLocal_338 = 1;
				}
			}
		}
	}
}

void func_39()
{
	func_57();
	func_50(295, 0, 0);
	func_40(0);
	func_303();
}

void func_40(bool bParam0)
{
	struct<8> Var0[3];
	struct<6> Var25[3];
	
	if (!func_47())
	{
		return;
	}
	if (!iLocal_69)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Location", 32);
	StringCopy(&(Var0[2 /*8*/]), "Type", 32);
	if (bParam0)
	{
		StringCopy(&(Var25[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var25[0 /*6*/]), "SP", 24);
	}
	StringCopy(&(Var25[1 /*6*/]), "City", 24);
	StringCopy(&(Var25[2 /*6*/]), "????", 24);
	if (func_45(200, &Var25, &Var0, 3, -1, 0, 0))
	{
		unk_0x64AB5E3FDD8C16CB(131, func_44(), 0f);
		unk_0x64AB5E3FDD8C16CB(108, func_43(), 0f);
		unk_0x64AB5E3FDD8C16CB(102, func_42(), 0f);
		unk_0x64AB5E3FDD8C16CB(8, func_41(), 0f);
	}
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
}

int func_41()
{
	return iLocal_67;
}

int func_42()
{
	return iLocal_68;
}

int func_43()
{
	return iLocal_66;
}

int func_44()
{
	return 0;
}

int func_45(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0x67EBFCF2F78761B9())
	{
	}
	if ((!unk_0x2BD01C3CAF96EB66() && (unk_0x1D05BD8EFF80B3E3() || !unk_0x2367D34D8582249E())) && unk_0x9CCA2C4CB2E405AE())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0xE52BCF7D5014E06E())
			{
				Var69 = { func_46(unk_0x93E99A2DBCBA9CFA()) };
				if (unk_0x7DD2CE58D33238D9(&Var69))
				{
					if (unk_0xEB463FCE742A28B2(&uVar82, 35, &Var69))
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
			if (unk_0xA26A9A07F761D8F8() && Global_2692733.f_3)
			{
				unk_0x598DA40EF1AD2575(&Var0, &(Global_1935368.f_10));
			}
			else
			{
				unk_0x5BD9D15E4CD3C15B(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x2BD01C3CAF96EB66())
	{
	}
	if (!unk_0x1D05BD8EFF80B3E3())
	{
	}
	if (unk_0x2367D34D8582249E())
	{
	}
	if (!unk_0x9CCA2C4CB2E405AE())
	{
	}
	return 0;
}

struct<13> func_46(int iParam0)
{
	struct<13> Var0;
	
	unk_0x23BD70608BA4F8D9(iParam0, &Var0, 13);
	return Var0;
}

int func_47()
{
	if ((unk_0x67EBFCF2F78761B9() && unk_0x7FFBE14C34D75E19()) && func_48())
	{
		return 1;
	}
	return 0;
}

int func_48()
{
	if (func_49())
	{
		return 0;
	}
	if (unk_0x3FFDF8D1413D95DE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_49()
{
	return Global_2695031;
}

void func_50(int iParam0, int iParam1, int iParam2)
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
		func_56((891 + iParam0), 1, -1);
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
		func_51();
	}
}

void func_51()
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
		func_55(13, unk_0xF34EE736CF047844(Global_113648.f_10196.f_3853));
	}
	if (!unk_0xBAB6476CDD8C4AA6())
	{
		if (!Global_78558)
		{
			if (func_54() == 2 == 0 && !unk_0xA26A9A07F761D8F8())
			{
				if (unk_0x3FFDF8D1413D95DE())
				{
					Global_113382 = 0;
				}
				if (!Global_63362)
				{
					func_52();
				}
			}
		}
	}
}

int func_52()
{
	if (func_53(0))
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

int func_53(bool bParam0)
{
	if (!bParam0 && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

int func_54()
{
	return Global_32163;
}

int func_55(int iParam0, int iParam1)
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

void func_56(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
}

void func_57()
{
	iLocal_68++;
	iLocal_69 = 1;
}

void func_58()
{
	if (unk_0x7DE17ACDD8BA2642(uLocal_274[0]) && !unk_0x055111B11E6624FD(uLocal_274[0], 0))
	{
		unk_0x57B1A0850EB7F1F4(uLocal_274[0], 1);
		if (unk_0xE65E1573677B6119(uLocal_274[0]))
		{
			unk_0xDC21E058EE11964C(uLocal_274[0]);
		}
	}
}

int func_59(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_60(iParam0);
	if ((unk_0xA5E11AF0A2B928C1() - Global_29) > 500)
	{
		unk_0xC8927C3AD7C5D2E1(iParam0, fParam1, iParam2, iParam4);
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

void func_60(int iParam0)
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

void func_61(struct<3> Param0)
{
	int iVar0;
	
	if (unk_0xCE4AAA035282336C(uLocal_281))
	{
		unk_0x45533C09A6C9B409(&uLocal_281);
	}
	if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		return;
	}
	iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
	if (unk_0x7DE17ACDD8BA2642(iVar0) && !unk_0x055111B11E6624FD(iVar0, 0))
	{
		if (unk_0x3C3D6D026CF7F51B(uLocal_274[0], 0))
		{
			if (unk_0xE0D346789C5160EB(uLocal_274[0], unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 0))
			{
				if (!unk_0xCE4AAA035282336C(uLocal_280))
				{
					uLocal_280 = func_62(Param0, 1);
				}
			}
		}
	}
}

var func_62(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x7F0C74F83813841D(Param0);
	unk_0x225EB85DBC38E707(uVar0, func_63(unk_0xA26A9A07F761D8F8(), 1f, 1f));
	unk_0xBD91E7D4B770F97E(uVar0, iParam3);
	return uVar0;
}

float func_63(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_64(var uParam0, var uParam1, bool bParam2)
{
	Local_317 = { Local_317 };
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (!bParam2)
			{
				*uParam0 = { 92.8829f, -1281.123f, 28.1845f };
				*uParam1 = 15f;
			}
			else
			{
				*uParam0 = { Local_314 };
				*uParam1 = fLocal_326;
			}
			Local_317 = { *uParam0 };
			break;
		
		case 8:
			if (!bParam2)
			{
				*uParam0 = { -1615.991f, 187.4827f, 59.1337f };
				*uParam1 = 217.5474f;
			}
			else
			{
				*uParam0 = { Local_314 };
				*uParam1 = fLocal_326;
			}
			Local_317 = { *uParam0 };
			break;
		
		case 9:
			if (!bParam2)
			{
				*uParam0 = { 1538.432f, 3776.85f, 33.5178f };
				*uParam1 = 225.8821f;
			}
			else
			{
				*uParam0 = { Local_314 };
				*uParam1 = fLocal_326;
			}
			Local_317 = { *uParam0 };
			break;
	}
}

void func_65()
{
	if (unk_0x66599E73DBA5A850(uLocal_274[0]))
	{
		if (!unk_0x7DE17ACDD8BA2642(uLocal_274[0]))
		{
		}
		else if (unk_0x055111B11E6624FD(uLocal_274[0], 0))
		{
		}
		func_66(0);
	}
}

void func_66(int iParam0)
{
	if ((uLocal_76[0] > -1 && uLocal_76[0] < 10) && iParam0 != 2)
	{
		func_88(uLocal_76[0], (func_89(uLocal_76[0]) / 2));
	}
	func_86();
	switch (iParam0)
	{
		case 0:
			func_84("SCLUB_HOME_D", uLocal_76[0]);
			func_88(uLocal_76[0], 0);
			func_72(uLocal_76[0], 1);
			iLocal_74 = 6;
			break;
		
		case 1:
			unk_0x8581263F2F024518();
			func_67("SCLUB_HOME_A", uLocal_76[0], 0);
			iLocal_74 = 5;
			break;
		
		case 2:
			iLocal_74 = 5;
			break;
		
		case 4:
			func_84("SCLUB_HOME_D3", uLocal_76[0]);
			iLocal_74 = 6;
			break;
		
		case 3:
			if (func_25(uLocal_274[0], 92.5861f, -1282.86f, 28.2548f, 1) < 10f)
			{
				iLocal_74 = 5;
			}
			else
			{
				iLocal_74 = 6;
			}
			break;
	}
}

void func_67(char* sParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	MemCopy(&uVar0, {func_71(iParam1)}, 6);
	if (!func_70(sParam0, &uVar0))
	{
		if (!bParam2)
		{
			func_69(sParam0, &uVar0, -1);
		}
		else
		{
			func_68(sParam0, &uVar0);
		}
	}
}

void func_68(var uParam0, var uParam1)
{
	unk_0x476CC3711883B966(uParam0);
	unk_0x48849374B34BB7B9(uParam1);
	unk_0xBC8969B539DCA239(0, 1, 1, -1);
}

void func_69(var uParam0, var uParam1, int iParam2)
{
	unk_0x476CC3711883B966(uParam0);
	unk_0x48849374B34BB7B9(uParam1);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam2);
}

bool func_70(char* sParam0, var uParam1)
{
	unk_0x56C9BC27C0FF68D7(sParam0);
	unk_0x48849374B34BB7B9(uParam1);
	return unk_0x6A92D111B5409879(0);
}

struct<4> func_71(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "SCLUB_NM_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

void func_72(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_27(&(Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
	else
	{
		func_73(&(Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
}

void func_73(var uParam0, int iParam1)
{
	func_74(uParam0, iParam1);
}

void func_74(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_75()
{
	int iVar0;
	
	iVar0 = func_77();
	switch (iVar0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		default:
			switch (func_76(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_77()
{
	func_78();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_78()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_82(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_81(unk_0xC1A5EC5C986B98AD());
			if (func_80(iVar0) && (!func_79(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_80(Global_113648.f_2365.f_539.f_4321))
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

bool func_79(int iParam0)
{
	return Global_43257 == iParam0;
}

bool func_80(int iParam0)
{
	return iParam0 < 3;
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_82(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_82(int iParam0)
{
	if (func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_83(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_84(char* sParam0, int iParam1)
{
	var uVar0;
	
	MemCopy(&uVar0, {func_71(iParam1)}, 6);
	func_85(sParam0, &uVar0, 7500, 1);
}

void func_85(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x7FC9F66A5DE18E09(sParam0);
	unk_0x48849374B34BB7B9(uParam1);
	unk_0xAC8CD22C06543F95(iParam2, 1);
}

void func_86()
{
	if (unk_0xCE4AAA035282336C(uLocal_281))
	{
		unk_0x45533C09A6C9B409(&uLocal_281);
	}
	if (unk_0xCE4AAA035282336C(uLocal_280))
	{
		unk_0x45533C09A6C9B409(&uLocal_280);
	}
	func_87();
}

void func_87()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0xCE4AAA035282336C(uLocal_282[iVar0]))
		{
			unk_0x45533C09A6C9B409(&(uLocal_282[iVar0]));
		}
		iVar0++;
	}
}

void func_88(int iParam0, int iParam1)
{
	Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/] = iParam1;
}

int func_89(int iParam0)
{
	return Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/];
}

void func_90()
{
	func_65();
	func_86();
	switch (iLocal_80)
	{
		case 0:
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				if (unk_0x3C3D6D026CF7F51B(uLocal_274[0], 0))
				{
					if (!func_107("SCLUB_SECLUDED"))
					{
						func_106("SCLUB_SECLUDED");
					}
					if (func_105() && unk_0xDC58AE028CB223BA(unk_0xC1A5EC5C986B98AD()) == 0f)
					{
						unk_0xCD3C8E1022864F65(1);
						unk_0x28818732C8F0F80E(func_100(uLocal_274[0], 0, 0));
						iLocal_80 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (func_93())
			{
				iLocal_80 = 2;
			}
			break;
		
		case 2:
			if (unk_0xF5F493B789EA063E(unk_0xC1A5EC5C986B98AD(), joaat("script_task_perform_sequence")) != 1)
			{
				func_256();
				if (unk_0x30DFE1FFD2CC7420() > 20 || unk_0x30DFE1FFD2CC7420() < 4)
				{
					bLocal_336 = false;
				}
				unk_0xE831F5155505E3E0(iLocal_45);
				func_91(bLocal_336);
				iLocal_74 = 4;
			}
			break;
	}
}

void func_91(bool bParam0)
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_84("SCLUB_HOME_GO", uLocal_76[0]);
			}
			else
			{
				func_92("SCLUB_CLUB_GO", 7500, 1);
			}
			break;
		
		case 8:
		case 9:
			func_92("SCLUB_HOME_GO3", 7500, 1);
			break;
	}
}

void func_92(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x7FC9F66A5DE18E09(sParam0);
	unk_0xAC8CD22C06543F95(iParam1, 1);
}

int func_93()
{
	if (unk_0x2BBF749E555360DC(func_100(uLocal_274[0], 0, 0)))
	{
		func_94(uLocal_274[0], 0, 1, -1, 1);
		func_94(unk_0xC1A5EC5C986B98AD(), 0, 0, -1, 1);
		return 1;
	}
	return 0;
}

void func_94(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	var uVar3;
	
	if (unk_0x055111B11E6624FD(iParam0, 0))
	{
		return;
	}
	iVar0 = unk_0x95DC39736F6748E3(iParam0, 1);
	if (!unk_0xFBD273FDBCF0C5BD(iVar0, 0))
	{
		return;
	}
	iLocal_45 = unk_0x673F52632EDC33B7();
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1) && func_99(0, 1))
	{
		if (iLocal_45 != 4)
		{
			unk_0xE831F5155505E3E0(4);
		}
	}
	bVar1 = func_98(iVar0);
	sVar2 = func_100(iParam0, 0, 0);
	if (!unk_0x2BBF749E555360DC(sVar2))
	{
		unk_0x28818732C8F0F80E(sVar2);
	}
	else
	{
		unk_0xDBC7406226B5540E(&uVar3);
		unk_0x3EE48ADC8C7F5CC4(0, sVar2, func_95(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0x3EE48ADC8C7F5CC4(0, sVar2, func_95(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x3EE48ADC8C7F5CC4(0, sVar2, func_95(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0x3EE48ADC8C7F5CC4(0, sVar2, func_95(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x3EE48ADC8C7F5CC4(0, sVar2, func_95(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0xF2CFC6EC8C85FA78(uVar3);
		unk_0x3D7110D966B0CEA2(iParam0, uVar3);
		if (bParam4)
		{
			unk_0x63EF69C6969A3D26(&uVar3);
		}
	}
}

char* func_95(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(18);
					}
					else
					{
						sVar0 = func_97(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(8);
				}
				else
				{
					sVar0 = func_97(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(18);
				}
				else
				{
					sVar0 = func_96(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(8);
			}
			else
			{
				sVar0 = func_96(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(19);
					}
					else
					{
						sVar0 = func_97(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(9);
				}
				else
				{
					sVar0 = func_97(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(19);
				}
				else
				{
					sVar0 = func_96(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(9);
			}
			else
			{
				sVar0 = func_96(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(20);
					}
					else
					{
						sVar0 = func_97(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(10);
				}
				else
				{
					sVar0 = func_97(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(20);
				}
				else
				{
					sVar0 = func_96(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(10);
			}
			else
			{
				sVar0 = func_96(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(21);
					}
					else
					{
						sVar0 = func_97(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(11);
				}
				else
				{
					sVar0 = func_97(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(21);
				}
				else
				{
					sVar0 = func_96(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(11);
			}
			else
			{
				sVar0 = func_96(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_97(22);
					}
					else
					{
						sVar0 = func_97(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_97(12);
				}
				else
				{
					sVar0 = func_97(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_96(22);
				}
				else
				{
					sVar0 = func_96(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(12);
			}
			else
			{
				sVar0 = func_96(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_97(3);
				}
				else
				{
					sVar0 = func_97(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_96(3);
			}
			else
			{
				sVar0 = func_96(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_96(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_97(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_98(int iParam0)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		switch (unk_0x55271CC5190810F6(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
			case 2130662788:
			case -1546132012:
			case 1192783831:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 1240573865:
			case -627376728:
			case 986556497:
			case 1751095603:
			case -508485403:
			case -1975786336:
			case 1735755507:
			case 784822781:
			case -1297908787:
			case -1901288301:
			case -1949393167:
			case 1509896619:
			case -2093548880:
			case 801538932:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_99(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = unk_0x80A3F4E694565F6A(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0x80A3F4E694565F6A(1) == 4;
		}
	}
	return bVar0;
}

char* func_100(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		iVar0 = unk_0x95DC39736F6748E3(iParam0, 1);
		if (unk_0xFBD273FDBCF0C5BD(iVar0, 0))
		{
			if (func_98(iVar0))
			{
				if ((!func_99(0, 1) || iParam2) && !bParam1)
				{
					return func_104();
				}
				else
				{
					return func_103();
				}
			}
			else if (unk_0x504B9BB48D41C264(iVar0) == joaat("vstr"))
			{
				return "anim@mini@prostitutes@sex@veh_vstr@";
			}
		}
	}
	if ((!func_99(0, 1) || iParam2) && !bParam1)
	{
		return func_102();
	}
	return func_101();
}

char* func_101()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_102()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_103()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_104()
{
	return "mini@prostitutes@sexlow_veh";
}

int func_105()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	var uVar10;
	struct<3> Var11;
	float fVar14;
	int iVar15;
	
	fVar6 = 25f;
	func_64(&Var7, &uVar10, 0);
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			iVar2 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		}
		Var3 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
		if (unk_0x4EEF3473B7E707F8(Var3, &Var11, 1077936128, 0))
		{
			fVar14 = unk_0x2A488C176D52CCA5(Var3, Var11);
			if (fVar14 <= 10f)
			{
				return 0;
			}
		}
		if (unk_0x2A488C176D52CCA5(Var3, Local_308) < 20f || unk_0x2A488C176D52CCA5(Var3, Var7) < 20f)
		{
			return 0;
		}
		if (unk_0x7419F07EFCC23990(Var3 - Vector(20f, 20f, 20f), Var3 + Vector(20f, 20f, 20f)))
		{
			return 0;
		}
		unk_0x4CC2E3CEA74EF758(Var3, fVar6, 1, 1, &iVar0, 0, 0, -1);
		if (!iVar0 == 0)
		{
			if (!unk_0x055111B11E6624FD(iVar0, 0))
			{
				if (unk_0xC832FC847E3442DA(iVar0, unk_0xC1A5EC5C986B98AD(), 17))
				{
					return 0;
				}
			}
		}
		else
		{
			iVar1 = unk_0xC9B41DD2C91B7017(Var3, fVar6, 0, -1);
			if (!iVar1 == 0)
			{
				if (!iVar1 == iVar2)
				{
					if (unk_0xFBD273FDBCF0C5BD(iVar1, 0))
					{
						iVar0 = unk_0xA66E176E5772E965(iVar1, -1, 0);
						if (!iVar0 == 0)
						{
							return 0;
						}
					}
				}
			}
		}
		iVar15 = unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD());
		if (!iVar15 == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_106(char* sParam0)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 1, 1, -1);
}

bool func_107(char* sParam0)
{
	unk_0x56C9BC27C0FF68D7(sParam0);
	return unk_0x6A92D111B5409879(0);
}

void func_108()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_75 < 12 && iLocal_75 >= 2)
	{
		if (func_213(3000))
		{
			unk_0x6D5ACBBD4CE34249(1000);
			iLocal_75 = 12;
		}
	}
	if (!bLocal_71 && iLocal_75 >= 5)
	{
		iVar0 = unk_0xF2DCD142B0FBD306();
		if (unk_0xFBD273FDBCF0C5BD(iVar0, 0) && !unk_0x055111B11E6624FD(iVar0, 0))
		{
			if (unk_0x504B9BB48D41C264(iVar0) == joaat("blimp2"))
			{
				bLocal_71 = false;
			}
			else if (unk_0xCC4A4E244DA78599(unk_0xF2DCD142B0FBD306()) && uLocal_76[0] == 5)
			{
				bLocal_71 = func_210(&uLocal_70, -865f, 516.3f, 90f, 1, 15f);
			}
			else if (func_209(unk_0xF2DCD142B0FBD306()))
			{
				bLocal_71 = func_210(&uLocal_70, Local_323, 1, fLocal_327);
			}
			else
			{
				bLocal_71 = func_210(&uLocal_70, Local_308, 1, fLocal_327);
			}
		}
	}
	if (iLocal_75 > 0 && iLocal_75 < 13)
	{
		unk_0xE288789FFB1A0C2F();
	}
	switch (iLocal_75)
	{
		case 0:
			unk_0xCD3C8E1022864F65(1);
			unk_0x8581263F2F024518();
			func_86();
			unk_0xF6AFEDAAE44A2159("TIME_LAPSE", 0, -1);
			func_30(56, 1, 0);
			if (!func_267(uLocal_333, 131072))
			{
				func_27(&uLocal_333, 131072);
			}
			if (!func_267(uLocal_333, 256))
			{
				func_208();
				func_27(&uLocal_333, 256);
			}
			if (!func_267(uLocal_333, 32768))
			{
				unk_0x28818732C8F0F80E(func_207());
				func_27(&uLocal_333, 32768);
			}
			if (!func_267(uLocal_333, 256))
			{
				unk_0x28818732C8F0F80E(func_206());
				func_27(&uLocal_333, 256);
			}
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				iLocal_340 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
				func_205(unk_0xC1A5EC5C986B98AD(), iLocal_340);
				iLocal_75 = 1;
			}
			else
			{
				func_58();
				func_203(unk_0xC1A5EC5C986B98AD(), Local_302);
				func_203(uLocal_274[0], Local_305);
				iLocal_75 = 2;
			}
			func_201();
			break;
		
		case 1:
			if (!unk_0x055111B11E6624FD(iLocal_340, 0))
			{
				if (unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(iLocal_340, 1), Local_308) < 2f)
				{
					func_58();
					func_203(unk_0xC1A5EC5C986B98AD(), Local_302);
					func_203(uLocal_274[0], Local_305);
					unk_0xB942AB5E12BF630A();
					iLocal_75 = 2;
				}
				else if (unk_0xA5E11AF0A2B928C1() >= 10000)
				{
					iLocal_75 = 13;
				}
			}
			break;
		
		case 2:
			if (!unk_0x0097C56F4031898F(uLocal_284[0]))
			{
				unk_0xEEF11E0DB5769366(uLocal_284[0], 1);
				unk_0x9E2404A25985615A(true, 0, 3000, 1, 0, 0);
				if (!unk_0x055111B11E6624FD(iLocal_340, 0))
				{
					if (unk_0x504B9BB48D41C264(iLocal_340) == joaat("blimp2"))
					{
						unk_0x724FFAED1C56CE2B(iLocal_340, 0, 0);
					}
				}
				func_8(&uLocal_255);
				iLocal_75 = 3;
			}
			break;
		
		case 3:
			if (func_200(&uLocal_255) > 1f)
			{
				unk_0x6FF2543994335DB3(uLocal_284[1], uLocal_284[0], 6000, 1, 1);
				func_199(&Local_289, 1, 0, 2000, 1, 1, 0, 1);
				iVar1 = unk_0x30DFE1FFD2CC7420();
				iLocal_330 = iVar1 + 8;
				if (iLocal_330 > 23)
				{
					iLocal_330 = (iLocal_330 - 24);
				}
				Local_289.f_7 = iVar1;
				Local_289.f_8 = iLocal_330;
				func_2(&uLocal_255);
				iLocal_75 = 4;
			}
			break;
		
		case 4:
			if (!unk_0x4C6F0F7948D49F66(uLocal_284[1]) && unk_0x0097C56F4031898F(uLocal_284[1]))
			{
				if (!func_267(uLocal_331, 512))
				{
					if (unk_0x7DE17ACDD8BA2642(iLocal_340) && !unk_0x055111B11E6624FD(iLocal_340, 0))
					{
						unk_0xC8104307D08190D0(iLocal_340, 1);
					}
					func_196(unk_0xC1A5EC5C986B98AD(), func_198());
					unk_0x692C3FDAD7DB53CC(unk_0xC1A5EC5C986B98AD(), func_195());
					func_172();
					func_27(&uLocal_331, 512);
				}
				else if (!func_267(uLocal_331, 2048))
				{
					if (unk_0x055111B11E6624FD(uLocal_274[0], 0))
					{
					}
					if (!func_171() && !unk_0x967D885AAF973497(uLocal_274[0]))
					{
						func_172();
						if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
						{
							unk_0x90B639B1CCB1446C(unk_0xC1A5EC5C986B98AD());
							unk_0x824D23CC0FE1835A(unk_0xC1A5EC5C986B98AD(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
						}
						func_27(&uLocal_331, 2048);
						func_8(&uLocal_255);
						sLocal_277 = func_170();
						iLocal_75 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (func_200(&uLocal_255) > 1f)
			{
				if (func_145(iLocal_330, 0, sLocal_277, "", &Local_289, (func_200(&uLocal_255) * 0.2f), 0))
				{
					if (!func_171())
					{
						if (unk_0x7DE17ACDD8BA2642(iLocal_340))
						{
							if (unk_0x504B9BB48D41C264(iLocal_340) != joaat("blimp2"))
							{
								unk_0xF82BC5193AF62796(Local_305, 20f, 1, 0, 0, 0);
							}
						}
						else
						{
							unk_0xF82BC5193AF62796(Local_305, 20f, 1, 0, 0, 0);
						}
						if (unk_0x7DE17ACDD8BA2642(uLocal_274[0]))
						{
							unk_0x724FFAED1C56CE2B(uLocal_274[0], 0, 0);
						}
						unk_0x69340D273AA38F5D(unk_0xC1A5EC5C986B98AD(), 0);
						func_8(&uLocal_255);
						iLocal_75 = 6;
					}
				}
			}
			break;
		
		case 6:
			unk_0x8CC688927B10006C(unk_0xC1A5EC5C986B98AD(), joaat("weapon_unarmed"), 1);
			if (func_200(&uLocal_255) > 1.5f)
			{
				if (bLocal_71)
				{
					func_143(&uLocal_70);
				}
				func_8(&uLocal_255);
				iLocal_75 = 7;
			}
			break;
		
		case 7:
			if (!unk_0x0097C56F4031898F(uLocal_284[2]))
			{
				unk_0xDB4D82037BD5A339();
				unk_0x5603500F75263372(1);
				unk_0x4248D77C31AD46D2(1);
				unk_0x6FF2543994335DB3(uLocal_284[2], uLocal_284[1], 6000, 1, 1);
				func_8(&uLocal_255);
				iLocal_75 = 8;
			}
			break;
		
		case 8:
			if (!func_267(uLocal_333, 262144))
			{
				if (func_200(&uLocal_255) >= 1.25f)
				{
					func_142();
				}
			}
			if (func_200(&uLocal_255) > 6f)
			{
				unk_0xEEF11E0DB5769366(uLocal_284[3], 1);
				if (!unk_0x055111B11E6624FD(iLocal_340, 0))
				{
					if (unk_0x504B9BB48D41C264(iLocal_340) == joaat("blimp2"))
					{
						unk_0x724FFAED1C56CE2B(iLocal_340, 1, 0);
					}
					unk_0x85BAE84748AD1A23(iLocal_340, 1, 1);
					unk_0xA598BD64B909AA08(iLocal_340, 1000f);
					unk_0xDC8D24D42F045000(iLocal_340, 1000f);
					unk_0x8E2A5E6443418B19(iLocal_340);
				}
				func_8(&uLocal_255);
				iLocal_75 = 10;
			}
			break;
		
		case 10:
			if (func_200(&uLocal_255) > 2f)
			{
				unk_0x4A954DC99388FAC2(0, 0, 3, 0);
				iLocal_75 = 13;
			}
			break;
		
		case 12:
			if (unk_0x72474BA05A104E1E() && !unk_0x984CA71F26DF483C())
			{
				if (!func_267(uLocal_333, 262144))
				{
					unk_0xD6743D3F96D1D16A(unk_0x93E99A2DBCBA9CFA(), Local_314, fLocal_326, 0, 1, 1);
					func_142();
				}
				if (!unk_0x055111B11E6624FD(iLocal_340, 0))
				{
					if (unk_0x504B9BB48D41C264(iLocal_340) == joaat("blimp2"))
					{
						unk_0x724FFAED1C56CE2B(iLocal_340, 1, 0);
					}
				}
				unk_0x8CC688927B10006C(unk_0xC1A5EC5C986B98AD(), joaat("weapon_unarmed"), 1);
				if (!unk_0x055111B11E6624FD(iLocal_340, 0))
				{
					unk_0x85BAE84748AD1A23(iLocal_340, 1, 1);
					unk_0xA598BD64B909AA08(iLocal_340, 1000f);
					unk_0xDC8D24D42F045000(iLocal_340, 1000f);
					unk_0x8E2A5E6443418B19(iLocal_340);
				}
				func_8(&uLocal_255);
				iLocal_75 = 13;
			}
			break;
		
		case 13:
			if (!unk_0x984CA71F26DF483C() && func_200(&uLocal_255) >= 1f)
			{
				func_13(1, 1, 0);
				unk_0xED2BD879E739E86B(unk_0xC1A5EC5C986B98AD(), unk_0xAC6860C864E313E3(unk_0xC1A5EC5C986B98AD()), 0);
				unk_0x897AEFEA34B3B29A(unk_0x93E99A2DBCBA9CFA(), 30, 1, 0);
				if (unk_0x7EDC47E12B94AA72(unk_0xC1A5EC5C986B98AD(), func_82(0)))
				{
					func_141();
				}
				unk_0x90DA349CD13C7839(Local_308 - Vector(3f, 3f, 3f), Local_308 + Vector(3f, 3f, 3f), 15f, 1);
				if (!unk_0x055111B11E6624FD(iLocal_340, 0))
				{
					unk_0x85BAE84748AD1A23(iLocal_340, 1, 1);
					if (unk_0x504B9BB48D41C264(iLocal_340) != joaat("blimp2"))
					{
						unk_0xC2E3C377D893C17A(iLocal_340, Local_308, 1, 0, 0, 1);
						unk_0x692C3FDAD7DB53CC(iLocal_340, fLocal_327);
						if (unk_0xCC4A4E244DA78599(iLocal_340) && uLocal_76[0] == 5)
						{
							unk_0xC2E3C377D893C17A(iLocal_340, -865f, 516.3f, 90f, 1, 0, 0, 1);
							unk_0x692C3FDAD7DB53CC(iLocal_340, 15f);
						}
						else if (func_209(iLocal_340))
						{
							unk_0xC2E3C377D893C17A(iLocal_340, Local_323, 1, 0, 0, 1);
							unk_0x692C3FDAD7DB53CC(iLocal_340, fLocal_328);
						}
						unk_0xCB8DD5B44DBC2DEB(iLocal_340, 1084227584);
					}
				}
				if (!unk_0x72474BA05A104E1E())
				{
					func_199(&Local_289, 0, 0, 2000, 1, 0, 0, 1);
				}
				else
				{
					unk_0xC49CF015495672E6(8, 0, 0);
					func_139(unk_0xBBDA792448DB5A89(8));
					unk_0x78DD793477D04C42(2000);
					unk_0xAABD7B0753C5C286(0);
					unk_0xEAB390443C680F72(0, 1065353216);
					func_199(&Local_289, 0, 0, 2000, 1, 1, 0, 1);
				}
				if (unk_0x7DE17ACDD8BA2642(uLocal_274[0]))
				{
					unk_0xE9C250FA35A936C8(&(uLocal_274[0]));
				}
				if (!func_138(uLocal_76[0], -1))
				{
					if (uLocal_76[0] == 5)
					{
						func_67("SCLUB_PHON_HELP_ALT", uLocal_76[0], 0);
					}
					else
					{
						func_67("SCLUB_PHON_HELP", uLocal_76[0], 0);
					}
					func_119(uLocal_76[0], 1, -1);
					unk_0x4EDE34FBADD967A6(4000);
				}
				func_117(uLocal_76[0]);
				iVar2 = func_116(uLocal_76[0]);
				if (iVar2 <= 2)
				{
					iVar3 = func_115(uLocal_76[0]);
					iVar4 = func_114(iVar2);
					func_109(-384575792, iVar3, iVar4, 3, func_113(), func_112(uLocal_76[0]), 60000, 10000, -1, 0, -1, 0, 1);
				}
				func_39();
			}
			break;
	}
}

int func_109(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<14> Var0;
	
	if (func_53(0))
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (bParam5 < 3)
	{
		if (BitTest(iParam4, bParam5))
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return 0;
	}
	if (Global_113648.f_7690.f_764 < 8)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_111(iParam3);
		Var0.f_4 = (unk_0xA5E11AF0A2B928C1() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = bParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_13 = iParam12;
		unk_0x061B1200C95204CB(&(Var0.f_1), 0);
		Global_113648.f_7690.f_651[Global_113648.f_7690.f_764 /*14*/] = { Var0 };
		Global_113648.f_7690.f_764++;
		func_110(0);
		func_110(1);
		func_110(2);
		return 1;
	}
	return 0;
}

void func_110(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_80(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_7690.f_136)
	{
		if (BitTest(Global_113648.f_7690[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_113648.f_7690[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_113648.f_7690[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_113648.f_7690.f_764)
	{
		if (BitTest(Global_113648.f_7690.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_113648.f_7690.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_113648.f_7690.f_919[bParam0] = iVar1;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

int func_113()
{
	func_78();
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

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
	}
	return -1;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 4:
			return 2;
			break;
		
		case 5:
			return 3;
			break;
		
		case 8:
			return 4;
			break;
		
		case 9:
			return 5;
			break;
	}
	return -1;
}

int func_116(int iParam0)
{
	return Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_2;
}

void func_117(int iParam0)
{
	if (func_116(iParam0) < 0)
	{
		func_118(iParam0, 0);
	}
	Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_2++;
}

void func_118(int iParam0, int iParam1)
{
	Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_2 = iParam1;
}

void func_119(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_75();
	}
	if (func_137(iParam2) == 4)
	{
	}
	bVar0 = Global_113648.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (unk_0xA26A9A07F761D8F8())
		{
			if (!func_136(func_112(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_136(func_112(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_113648.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_135(iParam0, 0);
			func_129(func_112(iParam0), func_137(iParam2), 1);
			iVar1 = unk_0x15A88CFAAFFC6C4B(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					unk_0xECDAB41968FF21A8(&(Global_2359296[func_128() /*5568*/].f_681.f_1273), iParam0);
					func_125(-60084924, 15, 0);
					break;
			}
			func_124(iVar1);
			func_123(iParam0, iVar1);
			Global_112642.f_15[iParam0] = unk_0xA5E11AF0A2B928C1();
		}
	}
	else if (bVar0)
	{
		func_120(func_112(iParam0), func_137(iParam2));
	}
}

void func_120(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_117[bParam0 /*10*/].f_8 != 169)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_122(bParam0, iVar0, 0);
			func_121(bParam0, iVar0, 0);
		}
	}
}

void func_121(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2028[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113648.f_28052[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_122(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2028[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113648.f_28052[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_123(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_112642.f_4[iParam0] = (unk_0xA5E11AF0A2B928C1() + iParam1);
	}
	else
	{
		Global_112642.f_4[iParam0] = (unk_0xA5E11AF0A2B928C1() + unk_0x15A88CFAAFFC6C4B(1200000, 2100000));
	}
}

void func_124(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_112642.f_3 = (unk_0xA5E11AF0A2B928C1() + iParam0);
	}
	else
	{
		Global_112642.f_3 = (unk_0xA5E11AF0A2B928C1() + unk_0x15A88CFAAFFC6C4B(21600000, 25200000));
	}
}

void func_125(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_127(iParam1, iParam2))
	{
		iVar0 = func_126();
		Global_2694418[iVar0] = iParam1;
		Global_2694429[iVar0] = iParam0;
	}
}

int func_126()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2694418[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_127(int iParam0, var uParam1)
{
	if (Global_1575048)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575060) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_128()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_129(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8939 = bParam0;
	if (Global_117[bParam0 /*10*/].f_8 != 169)
	{
		func_134();
		if (iParam1 == 4)
		{
			func_122(bParam0, 0, 1);
			func_122(bParam0, 1, 1);
			func_122(bParam0, 2, 1);
			func_121(bParam0, 0, 1);
			func_121(bParam0, 1, 1);
			func_121(bParam0, 2, 1);
		}
		else
		{
			if (func_133(bParam0, iParam1) == 1 && func_132(bParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_122(bParam0, iVar0, 1);
			func_121(bParam0, iVar0, 1);
			if (bParam0 == 172 && !Global_2793044.f_6891)
			{
				bParam2 = false;
			}
			if (bParam0 == 171 && !Global_2793044.f_6890)
			{
				bParam2 = false;
			}
			if (bParam0 == 173 && !Global_2793044.f_6890)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_78558)
			{
				if (iParam1 != 4)
				{
					if (Global_20383 != iParam1)
					{
						Global_8912[iParam1 /*4*/] = { func_131(bParam0) };
						Global_8929[iParam1] = 1;
						Global_8934[iParam1] = bParam0;
					}
					else if (bParam0 == Global_20383)
					{
					}
					else
					{
						Global_8863[1 /*6*/] = { func_131(bParam0) };
						Global_8863[1 /*6*/].f_5 = iParam1;
						func_130();
					}
				}
				else
				{
					Global_8863[1 /*6*/] = { func_131(bParam0) };
					Global_8863[1 /*6*/].f_5 = iParam1;
					func_130();
				}
			}
			else
			{
				Global_8863[1 /*6*/] = { func_131(bParam0) };
				Global_8863[1 /*6*/].f_5 = iParam1;
				func_130();
			}
		}
	}
}

void func_130()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0x45816CECE89B5B19(&(Global_2028[Global_8939 /*29*/].f_7)), 64);
	if (Global_8958 == 0)
	{
		unk_0xD30970E11AD0FF0D("");
		StringCopy(&cVar16, unk_0x45816CECE89B5B19(&(Global_8863[1 /*6*/])), 64);
		sVar32 = unk_0x45816CECE89B5B19("CELL_253");
		unk_0x4BE755B3858339A1(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0xD30970E11AD0FF0D("CELL_255");
		unk_0x48849374B34BB7B9(&(Global_8863[1 /*6*/]));
		unk_0x4BE755B3858339A1(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x061B1200C95204CB(&Global_8253, 0);
}

struct<4> func_131(int iParam0)
{
	return Global_2028[iParam0 /*29*/].f_3;
}

int func_132(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

int func_133(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2028[iParam0 /*29*/].f_12[iParam1];
}

void func_134()
{
	if (func_79(14))
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
		Global_20383 = func_77();
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

void func_135(int iParam0, int iParam1)
{
	Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_136(bool bParam0, int iParam1)
{
	if (func_133(bParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

bool func_138(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_75();
	}
	return Global_113648.f_243[iParam1 /*53*/].f_2[iParam0 /*5*/].f_4;
}

void func_139(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_10(&(Global_113648.f_18105.f_175[iVar0 /*19*/].f_5)))
		{
			func_140(&(Global_113648.f_18105.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_10(&(Global_113648.f_18105.f_362[iVar1 /*3*/])))
		{
			func_140(&(Global_113648.f_18105.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x0F0426B45E748306();
}

void func_140(var uParam0, float fParam1)
{
	if (func_10(uParam0))
	{
		func_9(uParam0, (func_4(uParam0) + fParam1));
	}
}

void func_141()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_97143[iVar0] = Global_97143[iVar0 + 1];
		}
		else
		{
			Global_97143[iVar0] = unk_0xA5E11AF0A2B928C1();
		}
		iVar0++;
	}
}

void func_142()
{
	int iVar0;
	var uVar1;
	
	if (!unk_0x2BBF749E555360DC(sLocal_276))
	{
	}
	else
	{
		iVar0 = unk_0x15A88CFAAFFC6C4B(0, 50000);
		unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
		unk_0xDBC7406226B5540E(&uVar1);
		unk_0x7D9A648CC1936BDA(0, Local_314, 1f, -1, 0.25f, 0, fLocal_326);
		if (iVar0 < 15000)
		{
			unk_0x3EE48ADC8C7F5CC4(0, sLocal_276, "fidget_rub_hands", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else if (iVar0 >= 15000 && iVar0 < 35000)
		{
			unk_0x3EE48ADC8C7F5CC4(0, sLocal_276, "fidget_rub_chin", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else
		{
			unk_0x3EE48ADC8C7F5CC4(0, sLocal_276, "fidget_arm_swing", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		unk_0xF2CFC6EC8C85FA78(uVar1);
		unk_0x3D7110D966B0CEA2(unk_0xC1A5EC5C986B98AD(), uVar1);
		unk_0x63EF69C6969A3D26(&uVar1);
		func_27(&uLocal_333, 262144);
	}
}

void func_143(var uParam0)
{
	var uVar0;
	
	uVar0 = *uParam0;
	if (unk_0x7DE17ACDD8BA2642(uVar0))
	{
		if (!func_144(iVar0))
		{
			unk_0xDDE449983CE7572E(iVar0, 1, 0);
			unk_0x724FFAED1C56CE2B(iVar0, 1, 0);
			unk_0x2718E9CC165A99F6(iVar0, 0);
		}
	}
}

int func_144(int iParam0)
{
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if (unk_0x055111B11E6624FD(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xFBD273FDBCF0C5BD(iParam0, 0))
		{
			if (!unk_0x584CD220C093B0B4(iParam0))
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

int func_145(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_169();
			iVar4 = func_169();
			func_168(&iVar4, iParam0);
			func_167(&iVar4, iParam1);
			func_166(&iVar4, 0);
			if (func_164(*uParam4, iVar4))
			{
				func_159(&iVar4, 0, 0, 0, 1, 0, 0);
			}
			func_156(*uParam4, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam4->f_11 = ((iVar0 + iVar1 * 60) + (iVar2 + iParam6) * 3600);
			func_139((unk_0xBBDA792448DB5A89(uParam4->f_11) / 3600f));
			unk_0x70F443878F05D68E(0.6f);
			unk_0x4248D77C31AD46D2(0);
			unk_0x5603500F75263372(0);
			func_155();
			uParam4->f_10 = unk_0x9F2C1BA4F2BF5CF8();
			unk_0x531D638530A8DB97(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
			unk_0xAEA29937C5240DA0("TOD_SHIFT_SCENE");
			func_154();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if (fParam5 >= 0.5f)
			{
				if (uParam4->f_3 == 1)
				{
					if (unk_0x14580F20CBCE4FA9(sParam2) != 0)
					{
						unk_0xAEBC7005B2AE2564(sParam2, 1f);
					}
					if (unk_0x14580F20CBCE4FA9(sParam3) != 0)
					{
						unk_0x53CF64DE857B5CD7();
						unk_0x68188E7DEB12DD8D(sParam3, 0);
					}
					uParam4->f_3 = 2;
				}
			}
			if (fParam5 >= 0.99f || fParam5 == -1f)
			{
				iVar4 = *uParam4;
				func_159(&iVar4, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0xA69C142AB8EE1C77(func_153(iVar4), func_152(iVar4), func_151(iVar4));
				unk_0xA13B5B0EF7402391(uParam4->f_10);
				unk_0xF297EAB219BB1DC6("TIME_LAPSE");
				return 1;
			}
			fVar10 = fParam5;
			fVar8 = 0.1f;
			fVar9 = 0.9f;
			fVar11 = func_150(((fVar10 - fVar8) / (fVar9 - fVar8)), 0f, 1f);
			iVar3 = unk_0xF2DB717A73826179((IntToFloat(uParam4->f_11) * fVar11));
			iVar4 = *uParam4;
			func_159(&iVar4, iVar3, 0, 0, 0, 0, 0);
			unk_0xA69C142AB8EE1C77(func_153(iVar4), func_152(iVar4), func_151(iVar4));
			if (func_149(iVar4) != unk_0x8C0F17CAC308A14B())
			{
				unk_0x2297E6DA844DCE3C(func_149(iVar4), func_148(iVar4), func_146(iVar4));
			}
			func_256();
			unk_0xA6F77C1B2DE81F06(6);
			break;
	}
	return 0;
}

int func_146(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_147(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_147(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_148(int iParam0)
{
	return iParam0 & 15;
}

int func_149(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

float func_150(float fParam0, float fParam1, float fParam2)
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

int func_151(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_152(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_153(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

void func_154()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0x341B37C2C5AA5999(Global_113648.f_14143[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

int func_155()
{
	int iVar0;
	
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		return 0;
	}
	if (!unk_0xACD39355028D39EF(unk_0xC1A5EC5C986B98AD()))
	{
		return 0;
	}
	iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
	if (!unk_0x055111B11E6624FD(iVar0, 0))
	{
		return 0;
	}
	unk_0xF6DC858A24814B39(iVar0, "OFF");
	return 1;
}

void func_156(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_164(iParam0, iParam1))
	{
		iVar0 = func_148(iParam1);
		iVar1 = func_146(iParam0);
		iVar2 = (func_146(iParam0) - func_146(iParam1));
		iVar3 = (func_148(iParam0) - func_148(iParam1));
		iVar4 = (func_149(iParam0) - func_149(iParam1));
		iVar5 = (func_153(iParam0) - func_153(iParam1));
		iVar6 = (func_152(iParam0) - func_152(iParam1));
		iVar7 = (func_151(iParam0) - func_151(iParam1));
	}
	else
	{
		iVar0 = func_148(iParam0);
		iVar1 = func_146(iParam1);
		iVar2 = (func_146(iParam1) - func_146(iParam0));
		iVar3 = (func_148(iParam1) - func_148(iParam0));
		iVar4 = (func_149(iParam1) - func_149(iParam0));
		iVar5 = (func_153(iParam1) - func_153(iParam0));
		iVar6 = (func_152(iParam1) - func_152(iParam0));
		iVar7 = (func_151(iParam1) - func_151(iParam0));
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
		iVar4 = (iVar4 + func_158(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_157(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_157(float fParam0, float fParam1, float fParam2)
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

int func_158(int iParam0, int iParam1)
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

void func_159(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_146(*iParam0);
	iVar1 = func_148(*iParam0);
	iVar2 = func_149(*iParam0);
	iVar3 = func_153(*iParam0);
	iVar4 = func_152(*iParam0);
	iVar5 = func_151(*iParam0);
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
	iVar6 = func_158(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_158(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_160(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_160(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_166(uParam0, iParam1);
	func_167(uParam0, iParam2);
	func_168(uParam0, iParam3);
	func_163(uParam0, iParam5);
	func_162(uParam0, iParam4);
	func_161(uParam0, iParam6);
}

void func_161(var uParam0, int iParam1)
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

void func_162(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_148(*uParam0);
	iVar1 = func_146(*uParam0);
	if (iParam1 < 1 || iParam1 > func_158(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_163(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

int func_164(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_165(iParam1) || !func_165(iParam0))
	{
		return 1;
	}
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_148(iParam0);
	iVar1 = func_148(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_149(iParam0);
	iVar1 = func_149(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_153(iParam0);
	iVar1 = func_153(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_152(iParam0);
	iVar1 = func_152(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_151(iParam0);
	iVar1 = func_151(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_165(int iParam0)
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
	iVar0 = func_151(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_152(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_153(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_146(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_148(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_149(iParam0);
	if (iVar5 < 1 || iVar5 > func_158(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_166(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 66060288);
	*iParam0 = (*iParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_167(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_168(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

int func_169()
{
	var uVar0;
	
	func_166(&uVar0, unk_0x731F95B6458DCF80());
	func_167(&uVar0, unk_0x77BBAAED3E25322C());
	func_168(&uVar0, unk_0x30DFE1FFD2CC7420());
	func_162(&uVar0, unk_0x8C0F17CAC308A14B());
	func_163(&uVar0, unk_0x61117764C67882B7());
	func_161(&uVar0, unk_0x367F557725B53815());
	return uVar0;
}

char* func_170()
{
	char* sVar0;
	
	switch (uLocal_76[0])
	{
		case 0:
			sVar0 = "CLEARING";
			break;
		
		case 1:
			sVar0 = "OVERCAST";
			break;
		
		case 4:
			sVar0 = "CLOUDS";
			break;
		
		case 5:
			sVar0 = "CLEAR";
			break;
		
		case 8:
			sVar0 = "EXTRASUNNY";
			break;
		
		case 9:
			sVar0 = "RAIN";
			break;
		
		default:
			sVar0 = "EXTRASUNNY";
			break;
	}
	return sVar0;
}

int func_171()
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
	{
		return 1;
	}
	return 0;
}

void func_172()
{
	if (!unk_0x055111B11E6624FD(uLocal_274[0], 0))
	{
		if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
		{
			func_193(&uLocal_81, 1, 0, func_194(uLocal_76[0]), 0, 1);
			func_175("SC_SEX", 0, 0, 0);
		}
		else
		{
			func_173(uLocal_274[0], "SEX_ORAL", 10);
		}
	}
}

void func_173(int iParam0, char* sParam1, int iParam2)
{
	unk_0x824D23CC0FE1835A(iParam0, sParam1, func_174(iParam2), 1);
}

int func_174(int iParam0)
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

int func_175(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<6> Var0;
	char[] cVar6[8];
	
	if (func_192())
	{
		StringCopy(&Var0, sParam0, 24);
		if (bParam1)
		{
			func_191(&Var0, bParam2);
		}
		else
		{
			Var0 = { func_190(Var0) };
		}
		if (bParam3)
		{
			cVar6 = "SCAUD";
		}
		else
		{
			cVar6 = "SHAUD";
		}
		if (func_176(&uLocal_81, cVar6, &Var0, 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_176(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_189(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_177(sParam2, iParam3, 0);
}

int func_177(char* sParam0, int iParam1, bool bParam2)
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
					func_188();
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
		if (func_187(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_186();
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
				func_134();
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
				if (func_185())
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
			if (func_23())
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
			func_184();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_183();
		func_178();
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
		func_188();
	}
	return 0;
}

void func_178()
{
	if (!func_179())
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

int func_179()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_182())
	{
		return 0;
	}
	if (func_180(unk_0x93E99A2DBCBA9CFA()))
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

bool func_180(int iParam0)
{
	return func_181(iParam0, 20);
}

var func_181(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_182()
{
	return -1;
}

void func_183()
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

void func_184()
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

int func_185()
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

void func_186()
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

bool func_187(int iParam0, int iParam1)
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

void func_188()
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

void func_189(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

struct<6> func_190(char[24] cParam0)
{
	int iVar0;
	
	StringConCat(&cParam0, "_", 24);
	iVar0 = uLocal_76[0];
	StringIntConCat(&cParam0, iVar0, 24);
	return cParam0;
}

void func_191(char* sParam0, bool bParam1)
{
	StringConCat(sParam0, "_", 24);
	if (func_77() == 2)
	{
		StringConCat(sParam0, "T", 24);
	}
	else if (func_77() == 0)
	{
		StringConCat(sParam0, "M", 24);
	}
	else if (func_77() == 1)
	{
		StringConCat(sParam0, "F", 24);
	}
	if (bParam1)
	{
		*sParam0 = { func_190(*sParam0) };
	}
}

int func_192()
{
	if ((unk_0x70CDFE65A7D509C2() || unk_0x0DCB385165FDE763()) || Global_21725 != 0)
	{
		return 0;
	}
	return 1;
}

void func_193(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

char* func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
			break;
		
		case 1:
			return "Nikki";
			break;
		
		case 2:
			return "Chastity";
			break;
		
		case 3:
			return "Cheetah";
			break;
		
		case 4:
			return "Sapphire";
			break;
		
		case 5:
			return "Infernus";
			break;
		
		case 6:
			return "Fufu";
			break;
		
		case 7:
			return "Peach";
			break;
		
		case 8:
			return "TaxiLiz";
			break;
		
		case 9:
			return "REHH2Hiker";
			break;
	}
	return "Invalid name";
}

float func_195()
{
	switch (uLocal_76[0])
	{
		case 1:
			return 325.6f;
			break;
		
		case 0:
			return 52.89f;
			break;
		
		case 4:
			return 14.5f;
			break;
		
		case 5:
			return 43.85f;
			break;
		
		case 8:
			return 193.5f;
			break;
		
		case 9:
			return 233.2f;
			break;
	}
	return 0f;
}

Vector3 func_196(int iParam0, struct<3> Param1)
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (unk_0xDE209AFE421606C6(Param1, &uVar0, 0, 0))
	{
		Param1.f_2 = uVar0;
	}
	if (func_197(iParam0))
	{
		unk_0xC2E3C377D893C17A(iParam0, Param1, 1, 0, 0, 1);
	}
	return Param1;
}

bool func_197(int iParam0)
{
	if (!unk_0x7DE17ACDD8BA2642(uParam0))
	{
		return 0;
	}
	return !unk_0x055111B11E6624FD(iParam0, 0);
}

Vector3 func_198()
{
	switch (uLocal_76[0])
	{
		case 1:
			return 130.7462f, -1896.513f, 22.3246f;
			break;
		
		case 0:
			return -162.4315f, -1635.107f, 32.6529f;
			break;
		
		case 4:
			return -197.6542f, 92.3329f, 68.5846f;
			break;
		
		case 5:
			return -848.9675f, 510.048f, 89.8218f;
			break;
		
		case 8:
			return -28.5266f, -1565.793f, 28.918f;
			break;
		
		case 9:
			return 3315.045f, 5174.08f, 17.6765f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_199(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()), 64);
	}
	if (!unk_0x2FECE8D166B3056B())
	{
		unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			unk_0x4AD381723E4E35A2(unk_0xC1A5EC5C986B98AD(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0x4A954DC99388FAC2(0, 0, 3, 0);
	}
	else
	{
		unk_0x9E2404A25985615A(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0xCD3C8E1022864F65(1);
	}
	else
	{
		if (unk_0xF57C1326FD40C8A7(uParam0->f_4))
		{
			if (unk_0x2DDFF72E939527F8(uParam0->f_4))
			{
				unk_0xEEF11E0DB5769366(uParam0->f_4, 0);
			}
			unk_0x42B9FA814615C4F9(uParam0->f_4, 1);
		}
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			unk_0x724FFAED1C56CE2B(unk_0xC1A5EC5C986B98AD(), 1, 0);
		}
		iVar0 = unk_0xE475C458F52F1781();
		if (unk_0x7DE17ACDD8BA2642(iVar0))
		{
			unk_0x724FFAED1C56CE2B(iVar0, 1, 0);
		}
		unk_0xF297EAB219BB1DC6("TIME_LAPSE");
		if (unk_0xD19C2C73F4D74992("TOD_SHIFT_SCENE"))
		{
			unk_0xA13B5B0EF7402391(uParam0->f_10);
			unk_0xF297EAB219BB1DC6("TIME_LAPSE");
			unk_0x3FA8C73B5856A3E4("TOD_SHIFT_SCENE");
		}
	}
	func_15(bParam1, 1, 0, 0, 0, 0, 0);
	func_154();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0xA69C142AB8EE1C77(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0xA69C142AB8EE1C77(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0x72474BA05A104E1E())
		{
			unk_0x78DD793477D04C42(250);
		}
	}
	if (!bParam1)
	{
		if (Global_113648.f_32751.f_4801 != -15)
		{
			Global_113648.f_32751.f_4801 = func_169();
		}
	}
}

float func_200(var uParam0)
{
	if (func_10(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_201()
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14[4];
	var uVar27[4];
	
	func_202(&Var1, &Var14, &uVar27);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xF57C1326FD40C8A7(uLocal_284[iVar0]))
		{
			uLocal_284[iVar0] = unk_0xD5B705094825AC04(26379945, Var1[iVar0 /*3*/], Var14[iVar0 /*3*/], uVar27[iVar0], 0, 2);
			unk_0xA490483DCDA2F37E(uLocal_284[iVar0], "HAND_SHAKE", 0.3f);
		}
		iVar0++;
	}
	Local_289.f_4 = unk_0xDEE46CEB08617ECA("DEFAULT_SPLINE_CAMERA", 0);
	unk_0x0A64A22340901EF3(Local_289.f_4, Var1[0 /*3*/], Var14[0 /*3*/], 6000, 3, 2);
	unk_0x0A64A22340901EF3(Local_289.f_4, Var1[1 /*3*/], Var14[1 /*3*/], 6000, 3, 2);
	unk_0xE3BD36CCB5EB72F2(Local_289.f_4, uVar27[0]);
}

void func_202(var uParam0, var uParam1, var uParam2)
{
	switch (uLocal_76[0])
	{
		case 1:
			*(uParam0[0 /*3*/]) = { 140.9085f, -1885.527f, 25.6959f };
			*(uParam1[0 /*3*/]) = { -9.0308f, 0f, 126.3829f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 141.712f, -1884.935f, 30.7241f };
			*(uParam1[1 /*3*/]) = { 4.7025f, 0f, 129.5531f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 139.1899f, -1885.865f, 24.96737f };
			*(uParam1[2 /*3*/]) = { -3.535496f, 0.081819f, 135.1308f };
			(*uParam2)[2] = 50f;
			*(uParam0[3 /*3*/]) = { 133.9669f, -1893.292f, 23.9573f };
			*(uParam1[3 /*3*/]) = { -1.8669f, -0.0329f, -5.5828f };
			(*uParam2)[3] = 50f;
			break;
		
		case 0:
			*(uParam0[0 /*3*/]) = { -186.5408f, -1629.328f, 35.8275f };
			*(uParam1[0 /*3*/]) = { -1.5588f, 0f, -118.8025f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -186.1923f, -1629.505f, 48.7132f };
			*(uParam1[1 /*3*/]) = { -1.2745f, 0f, -116.9616f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -184.9595f, -1632.193f, 36.32303f };
			*(uParam1[2 /*3*/]) = { -3.262451f, 0.073971f, -100.6756f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -164.7078f, -1632.25f, 34.0944f };
			*(uParam1[3 /*3*/]) = { -3.7303f, 0.0222f, 108.1824f };
			(*uParam2)[3] = 40f;
			break;
		
		case 4:
			*(uParam0[0 /*3*/]) = { -208.6886f, 112.8581f, 73.0855f };
			*(uParam1[0 /*3*/]) = { -0.1055f, 0f, -156.0082f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -208.9068f, 113.3747f, 85.2889f };
			*(uParam1[1 /*3*/]) = { 3.8438f, 0f, -157.0767f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -206.2357f, 106.941f, 72.07555f };
			*(uParam1[2 /*3*/]) = { -11.58381f, 0.084975f, -158.9702f };
			(*uParam2)[2] = 45f;
			*(uParam0[3 /*3*/]) = { -197.6886f, 94.7063f, 69.814f };
			*(uParam1[3 /*3*/]) = { 0.5155f, -0.0266f, 48.8652f };
			(*uParam2)[3] = 45f;
			break;
		
		case 5:
			*(uParam0[0 /*3*/]) = { -871.6285f, 520.8466f, 93.1945f };
			*(uParam1[0 /*3*/]) = { -0.1377f, -1.3933f, -105.9309f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -871.5255f, 521.1066f, 104.6356f };
			*(uParam1[1 /*3*/]) = { 3.1118f, -1.3933f, -105.9309f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -866.6436f, 514.6121f, 92.90275f };
			*(uParam1[2 /*3*/]) = { -5.957637f, -1.324997f, -101.9062f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -849.5522f, 514.2322f, 91.0095f };
			*(uParam1[3 /*3*/]) = { -1.626f, -1.3198f, 92.3739f };
			(*uParam2)[3] = 40f;
			break;
		
		case 8:
			*(uParam0[0 /*3*/]) = { -27.698f, -1584.646f, 31.1034f };
			*(uParam1[0 /*3*/]) = { 0.0044f, 0f, -1.9117f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -27.698f, -1584.646f, 40.4849f };
			*(uParam1[1 /*3*/]) = { 7.981f, 0f, -1.9117f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -28.63904f, -1579.74f, 30.82423f };
			*(uParam1[2 /*3*/]) = { -7.527712f, 0.030218f, -14.33051f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -28.6719f, -1568.09f, 29.7492f };
			*(uParam1[3 /*3*/]) = { -1.5414f, 0f, -168.6005f };
			(*uParam2)[3] = 40f;
			break;
		
		case 9:
			*(uParam0[0 /*3*/]) = { 3323.631f, 5148.861f, 20.9592f };
			*(uParam1[0 /*3*/]) = { 1.1547f, 1.0064f, 21.8733f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 3323.844f, 5148.672f, 28.2303f };
			*(uParam1[1 /*3*/]) = { 11.4168f, 1.0064f, 22.8025f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 3328.904f, 5157.818f, 20.5799f };
			*(uParam1[2 /*3*/]) = { -3.634001f, 1.039937f, 30.44809f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { 3315.368f, 5171.771f, 18.9066f };
			*(uParam1[3 /*3*/]) = { -2.8773f, 1.0064f, -103.0585f };
			(*uParam2)[3] = 40f;
			break;
	}
}

void func_203(int iParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	
	if (!unk_0x66599E73DBA5A850(iParam0))
	{
		unk_0x69340D273AA38F5D(iParam0, 1);
		if (unk_0xF5F493B789EA063E(iParam0, joaat("script_task_perform_sequence")) != 1)
		{
			unk_0x63EF69C6969A3D26(&uLocal_339);
			unk_0xDBC7406226B5540E(&uLocal_339);
			if (unk_0x3C3D6D026CF7F51B(iParam0, 0))
			{
				unk_0x6FE9A0C01D25F413(0, 0, 16777216);
			}
			if (iParam0 == unk_0xC1A5EC5C986B98AD())
			{
				fVar0 = unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(iParam0, 1), Local_302);
				fVar1 = unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(iParam0, 1), Local_305);
				if (fVar1 < fVar0)
				{
					unk_0x06A2A5F6A6959BE7(0, uLocal_274[0], 0);
				}
				else if (!unk_0x2AC37494BBF1DB16(func_204()))
				{
					unk_0x5B1D23BB00E75286(0, func_204(), 0, 552, -1);
				}
				else
				{
					unk_0x7D9A648CC1936BDA(0, Local_302, 1f, -1, 0.25f, 64, 1193033728);
				}
			}
			if (iParam0 != unk_0xC1A5EC5C986B98AD())
			{
				if (!unk_0x2AC37494BBF1DB16(func_204()))
				{
					unk_0x5B1D23BB00E75286(0, func_204(), 0, 546, -1);
				}
				else
				{
					unk_0x7D9A648CC1936BDA(0, Param1, 1f, -1, 0.25f, 1, 1193033728);
				}
				if (func_25(iParam0, Param1, 1) > 5f)
				{
					unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
					unk_0x3EE48ADC8C7F5CC4(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x56FD1401249AC499(0, unk_0x15A88CFAAFFC6C4B(3000, 6000));
					unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
					unk_0x3EE48ADC8C7F5CC4(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x56FD1401249AC499(0, unk_0x15A88CFAAFFC6C4B(3000, 6000));
					unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
					unk_0x3EE48ADC8C7F5CC4(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x3EE48ADC8C7F5CC4(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, -1, 0, 0, 0, 0, 0);
				}
			}
			unk_0xF2CFC6EC8C85FA78(uLocal_339);
			unk_0x3D7110D966B0CEA2(iParam0, uLocal_339);
		}
	}
}

char* func_204()
{
	char* sVar0;
	
	if (uLocal_76[0] == 1)
	{
		sVar0 = "BC_NIKKI_H_F";
	}
	return sVar0;
}

void func_205(int iParam0, int iParam1)
{
	if (!unk_0x66599E73DBA5A850(iParam0) && !unk_0x055111B11E6624FD(iParam1, 0))
	{
		unk_0x267F4694BB0C680B(iParam0, iParam1, Local_308, fLocal_327, 3, 1092616192, 0);
	}
}

char* func_206()
{
	return "mini@strip_club@idles@bouncer@base";
}

char* func_207()
{
	if (func_77() == 0)
	{
		return "facials@p_m_zero@variations@happy";
	}
	else if (func_77() == 1)
	{
		return "facials@p_m_one@variations@happy";
	}
	else if (func_77() == 2)
	{
		return "facials@p_m_two@variations@happy";
	}
	return "facials@p_m_zero@variations@happy";
}

void func_208()
{
	sLocal_276 = "move_p_m_one_idles@generic";
	unk_0x28818732C8F0F80E(sLocal_276);
}

int func_209(int iParam0)
{
	if (unk_0x091E6E360116B927(iParam0, joaat("blimp")))
	{
		return 1;
	}
	else if (unk_0x091E6E360116B927(iParam0, joaat("cargobob")))
	{
		return 1;
	}
	else if (unk_0x091E6E360116B927(iParam0, joaat("cargobob2")))
	{
		return 1;
	}
	else if (unk_0x091E6E360116B927(iParam0, joaat("cargobob3")))
	{
		return 1;
	}
	else if (unk_0x091E6E360116B927(iParam0, joaat("buzzard")))
	{
		return 1;
	}
	else if (unk_0x091E6E360116B927(iParam0, joaat("buzzard2")))
	{
		return 1;
	}
	else if (unk_0x091E6E360116B927(iParam0, joaat("maverick")))
	{
		return 1;
	}
	else if (unk_0x091E6E360116B927(iParam0, joaat("polmav")))
	{
		return 1;
	}
	else if (unk_0x091E6E360116B927(iParam0, joaat("annihilator")))
	{
		return 1;
	}
	else if (unk_0x091E6E360116B927(iParam0, joaat("frogger")))
	{
		return 1;
	}
	else if (unk_0x091E6E360116B927(iParam0, joaat("frogger2")))
	{
		return 1;
	}
	return 0;
}

int func_210(var uParam0, struct<3> Param1, bool bParam4, float fParam5)
{
	if (func_212(uParam0))
	{
		unk_0xA28E2F9A5D584D35(*uParam0);
		if (!func_211(Param1))
		{
			unk_0xC2E3C377D893C17A(*uParam0, Param1, 1, 0, 0, 1);
			if (bParam4)
			{
				unk_0x692C3FDAD7DB53CC(*uParam0, fParam5);
			}
			unk_0xCB8DD5B44DBC2DEB(*uParam0, 1084227584);
		}
		return 1;
	}
	return 0;
}

int func_211(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_212(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xE475C458F52F1781();
	if (unk_0x7DE17ACDD8BA2642(iVar0))
	{
		if (!func_144(iVar0))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && unk_0xEAEF747543427AC5(iVar0, unk_0xC1A5EC5C986B98AD(), Local_63, 0, 1, 0))
			{
				unk_0xA28E2F9A5D584D35(iVar0);
				unk_0xDDE449983CE7572E(iVar0, 0, 0);
				unk_0x724FFAED1C56CE2B(iVar0, 0, 0);
				unk_0x2718E9CC165A99F6(iVar0, 1);
				unk_0x85BAE84748AD1A23(iVar0, 1, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_213(int iParam0)
{
	if (unk_0x35DF833D93BCC488())
	{
		if ((unk_0xA5E11AF0A2B928C1() - Global_28) > iParam0)
		{
			Global_27 = unk_0xA5E11AF0A2B928C1();
		}
		Global_28 = unk_0xA5E11AF0A2B928C1();
		if ((unk_0xA5E11AF0A2B928C1() - Global_27) > iParam0)
		{
			if (func_214())
			{
				Global_27 = unk_0xA5E11AF0A2B928C1();
				return 1;
			}
		}
	}
	return 0;
}

int func_214()
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

void func_215(bool bParam0)
{
	struct<4> Var0;
	float fVar4;
	
	func_65();
	if (unk_0x055111B11E6624FD(uLocal_274[0], 0))
	{
		return;
	}
	unk_0x8E09E8C52602EBB2(Local_308 + Vector(0f, 1f, 1f) * Vector(10f, 10f, 10f), Local_308 + Vector(0f, -1f, -1f) * Vector(10f, 10f, 10f), 0, 1);
	fVar4 = unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(uLocal_274[0], 1));
	if (iLocal_78 != 9)
	{
		if (((fVar4 >= (200f / 2f) && func_192()) && !func_267(uLocal_333, 2)) || func_254(uLocal_274[0], 0))
		{
			if (unk_0xCE4AAA035282336C(uLocal_281))
			{
				unk_0x45533C09A6C9B409(&uLocal_281);
			}
			if (unk_0xCE4AAA035282336C(uLocal_280))
			{
				unk_0x45533C09A6C9B409(&uLocal_280);
			}
			func_251(0);
			func_84("SCLUB_HOME_R", uLocal_76[0]);
			iLocal_78 = 9;
		}
	}
	if (unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
	{
		if (iLocal_78 != 8)
		{
			if (unk_0xCE4AAA035282336C(uLocal_281))
			{
				unk_0x45533C09A6C9B409(&uLocal_281);
			}
			if (unk_0xCE4AAA035282336C(uLocal_280))
			{
				unk_0x45533C09A6C9B409(&uLocal_280);
			}
			iLocal_78 = 8;
		}
	}
	if (func_240(uLocal_274[0], &uLocal_267, &uLocal_264))
	{
		func_66(4);
	}
	if (iLocal_78 <= 1)
	{
		func_259(1);
	}
	switch (iLocal_78)
	{
		case 0:
			iLocal_79 = 0;
			if (func_192())
			{
				if (!func_267(uLocal_333, 1))
				{
					unk_0x2718E9CC165A99F6(uLocal_274[0], 1);
					func_84("SCLUB_HOME_MEET", uLocal_76[0]);
					func_251(0);
					func_27(&uLocal_333, 1);
				}
				iLocal_78 = 1;
			}
			break;
		
		case 1:
			iLocal_79 = 1;
			Var0 = { func_71(uLocal_76[0]) };
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				iLocal_340 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
				uLocal_334 = unk_0x2935B4D6CE81318D(iLocal_340);
			}
			if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), unk_0x30BE8A934C020461(uLocal_274[0], 1), 3f, 3f, 3f, 0, 1, 0) || (unk_0xFBD273FDBCF0C5BD(iLocal_340, 0) && func_239(iLocal_340, uLocal_274[0], 1) <= 10f))
			{
				unk_0x2718E9CC165A99F6(uLocal_274[0], 0);
				if (unk_0x7DE17ACDD8BA2642(iLocal_340) && (unk_0x2E240694D642679A(iLocal_340) < 1 || (!bParam0 && !unk_0xF66D3BDEBE2E64B9(unk_0x504B9BB48D41C264(iLocal_340)))))
				{
					if (!func_70("SCLUB_SMALL_CAR", &Var0))
					{
						func_67("SCLUB_SMALL_CAR", uLocal_76[0], 0);
						func_173(uLocal_274[0], "NEED_A_VEHICLE", 10);
					}
				}
				else
				{
					unk_0xCD3C8E1022864F65(1);
					unk_0x909F139DC199D8E0(uLocal_274[0]);
					func_237();
					if (!func_267(uLocal_333, 2))
					{
						func_27(&uLocal_333, 2);
					}
					func_236();
					func_86();
					func_229(39, 1);
					func_229(40, 1);
					func_229(41, 1);
					func_229(42, 1);
					func_229(43, 1);
					func_229(44, 1);
					iLocal_78 = 2;
				}
			}
			else if (func_70("SCLUB_SMALL_CAR", &Var0))
			{
				unk_0xCD3C8E1022864F65(1);
			}
			break;
		
		case 2:
			iLocal_79 = 2;
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				if (unk_0x3C3D6D026CF7F51B(uLocal_274[0], 0))
				{
					iLocal_78 = 3;
				}
			}
			else
			{
				func_173(uLocal_274[0], "NEED_A_VEHICLE", 10);
				iLocal_78 = 3;
			}
			break;
		
		case 3:
			iLocal_79 = 3;
			func_226();
			if (!func_171())
			{
				if (func_192())
				{
					unk_0xB7C5BDA2BA69CE7F(Local_308 - Vector(3f, 3f, 3f), Local_308 + Vector(3f, 3f, 3f), 0, 1);
					unk_0x8E09E8C52602EBB2(Local_308 - Vector(3f, 3f, 3f), Local_308 + Vector(3f, 3f, 3f), 0, 1);
					unk_0x10DFA2EC4C030EB3(Local_308, 10f, 0, 0, 0, 0, 0, 0, 0);
					unk_0x6FCA8E220FB1053D(Local_308, 10f, 0);
					uLocal_301 = unk_0x54ECDA2DAB9CFB10(Local_308 - Vector(35f, 35f, 35f), Local_308 + Vector(35f, 35f, 35f), 0, 1, 1, 1);
					func_8(&uLocal_246);
					if (bParam0)
					{
						func_91(1);
						func_225();
					}
					else
					{
						iLocal_74 = 3;
					}
				}
			}
			break;
		
		case 4:
			iLocal_79 = 4;
			func_222(fVar4, Local_311);
			func_216();
			if ((func_4(&uLocal_258) > 45f || unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Local_320) > (100f * 100f)) && func_25(unk_0xC1A5EC5C986B98AD(), Local_311, 1) > 100f)
			{
				if (uLocal_76[0] == 8)
				{
					func_175("SC_WALK", 0, 0, 0);
				}
				else
				{
					func_173(uLocal_274[0], "GENERIC_FUCK_YOU", 10);
				}
				func_66(3);
			}
			else if (func_254(uLocal_274[0], 1))
			{
				if (unk_0xCE4AAA035282336C(uLocal_281))
				{
					unk_0x45533C09A6C9B409(&uLocal_281);
				}
				if (unk_0xCE4AAA035282336C(uLocal_280))
				{
					unk_0x45533C09A6C9B409(&uLocal_280);
				}
				func_251(0);
				func_84("SCLUB_HOME_R", uLocal_76[0]);
				iLocal_78 = 9;
			}
			else if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_308, 3f, 3f, 2f, 1, 1, 2) || unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_305, 5f, 5f, 2f, 1, 1, 1))
			{
				if (func_36(1, 0, 1))
				{
					iLocal_74 = 1;
				}
			}
			else if (!unk_0x4FBDBA15B9C41492(unk_0xC1A5EC5C986B98AD()))
			{
				func_225();
			}
			break;
		
		case 5:
			iLocal_79 = 5;
			func_222(fVar4, Local_308);
			func_216();
			func_237();
			if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_308, 1f, 1f, 2f, 1, 1, 2))
			{
				iLocal_78 = 6;
			}
			else
			{
				if (unk_0x4FBDBA15B9C41492(unk_0xC1A5EC5C986B98AD()))
				{
					func_225();
				}
				else
				{
					func_61(Local_308);
				}
				if (func_107("SCLUB_HOME_WALK"))
				{
					unk_0xCD3C8E1022864F65(1);
				}
			}
			break;
		
		case 6:
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				if (unk_0x7DE17ACDD8BA2642(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
				{
					if (func_59(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 3f, 2, 0.5f, 0, 1, 0))
					{
						func_58();
						func_203(uLocal_274[0], Local_305);
						if (uLocal_76[0] == 9 || uLocal_76[0] == 8)
						{
							func_175("SC_GO_DOOR", 0, 0, 0);
						}
						else
						{
							func_175("SC_FOLLOWD", 0, 0, 1);
						}
						iLocal_78 = 7;
					}
				}
			}
			else if (unk_0x4FBDBA15B9C41492(unk_0xC1A5EC5C986B98AD()))
			{
				unk_0x35DD50D05C962B6A(uLocal_274[0]);
				func_225();
				unk_0xCD3C8E1022864F65(1);
			}
			break;
		
		case 7:
			iLocal_79 = 7;
			if ((!func_171() && !unk_0x70CDFE65A7D509C2()) && !func_267(uLocal_333, 2048))
			{
				Var0 = { func_71(uLocal_76[0]) };
				func_85("SCLUB_FOLLOW_H", &Var0, 7500, 1);
				func_86();
				func_251(0);
				func_27(&uLocal_333, 2048);
			}
			if ((unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_311, 5f, 5f, 2f, 0, 1, 1) || unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_305, 5f, 5f, 2f, 0, 1, 1)) && unk_0x4FBDBA15B9C41492(unk_0xC1A5EC5C986B98AD()))
			{
				if (func_36(1, 0, 1))
				{
					iLocal_74 = 1;
				}
			}
			break;
		
		case 8:
			if ((!func_267(uLocal_331, 4096) && !func_171()) && !unk_0x967D885AAF973497(uLocal_274[0]))
			{
				if (iLocal_79 > 1 || unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(uLocal_274[0], 1)) < (3f * 3f))
				{
					func_173(uLocal_274[0], "GENERIC_FRIGHTENED_MED", 10);
					func_27(&uLocal_331, 4096);
				}
			}
			if (!unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
			{
				iLocal_78 = iLocal_79;
			}
			break;
		
		case 9:
			if (fVar4 > 200f)
			{
				func_66(1);
			}
			else if (fVar4 <= (200f / 2f) && !func_254(uLocal_274[0], 1))
			{
				unk_0x8581263F2F024518();
				iLocal_78 = iLocal_79;
				if (unk_0x4FBDBA15B9C41492(unk_0xC1A5EC5C986B98AD()))
				{
					func_225();
				}
			}
			break;
	}
}

void func_216()
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!func_267(uLocal_333, 16))
	{
		if (func_217())
		{
			func_27(&uLocal_333, 16);
		}
		else
		{
			return;
		}
	}
	sVar0 = func_100(uLocal_274[0], 0, 0);
	if (!func_267(uLocal_333, 8))
	{
		if (!func_267(uLocal_333, 4))
		{
			if (!func_267(uLocal_331, 256))
			{
				if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
				{
					func_175("SC_BJ", 0, 0, 0);
				}
				func_27(&uLocal_331, 256);
			}
			else
			{
				unk_0x28818732C8F0F80E(sVar0);
				func_27(&uLocal_333, 4);
			}
		}
		else if (unk_0x2BBF749E555360DC(sVar0))
		{
			func_94(uLocal_274[0], 1, 1, -1, 1);
			unk_0x71A535529C1CA5DF(uLocal_274[0], 1);
			func_7(&uLocal_255);
			func_27(&uLocal_333, 8);
		}
	}
	else if (func_267(uLocal_333, 4))
	{
		iVar1 = 0;
		bVar2 = unk_0x7BB3D8F4F6310EB8(uLocal_274[0], sVar0, func_95(4, 1, 1, func_98(iLocal_340)), 3);
		bVar3 = unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD());
		bVar4 = unk_0xF5F493B789EA063E(uLocal_274[0], joaat("script_task_perform_sequence")) == 7;
		bVar5 = unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0);
		bVar6 = false;
		if (bVar5)
		{
			if (unk_0x7DE17ACDD8BA2642(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)) && !unk_0x055111B11E6624FD(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 0))
			{
				bVar6 = (unk_0x85A0C6DDA57C5652(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)) && unk_0xDC58AE028CB223BA(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)) > 5f);
			}
		}
		if ((((!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) || func_4(&uLocal_255) > 35f) || unk_0x2A488C176D52CCA5(Local_308, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1)) < 75f) || bVar3) || bVar6)
		{
			if (!bVar4 && !bVar2)
			{
				unk_0x3EE48ADC8C7F5CC4(uLocal_274[0], sVar0, func_95(4, 1, 1, func_98(iLocal_340)), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			if (bVar3)
			{
				iLocal_335 = 2000;
			}
			iVar1 = 1;
		}
		else if (bVar4)
		{
			iVar1 = 1;
		}
		if (bVar2)
		{
			func_256();
		}
		if ((iVar1 && bVar4) && !bVar2)
		{
			if (!bVar3 && bVar5)
			{
				if (bVar6)
				{
					unk_0xED2BD879E739E86B(unk_0xC1A5EC5C986B98AD(), (unk_0x2935B4D6CE81318D(unk_0xC1A5EC5C986B98AD()) - unk_0x11E019C8F43ACC8A((IntToFloat(unk_0xAC6860C864E313E3(unk_0xC1A5EC5C986B98AD())) * 0.1f))), 0);
					func_173(unk_0xC1A5EC5C986B98AD(), "GENERIC_CURSE_HIGH", 10);
				}
				else
				{
					func_173(unk_0xC1A5EC5C986B98AD(), "SEX_CLIMAX", 10);
				}
				func_27(&uLocal_331, 128);
			}
			unk_0x0B34FA69ECCE3927(sVar0);
			func_73(&uLocal_333, 4);
		}
		if (!func_267(uLocal_331, 64))
		{
			if (func_4(&uLocal_255) > 10f)
			{
				func_173(unk_0xC1A5EC5C986B98AD(), "SEX_GENERIC", 10);
				func_173(uLocal_274[0], "SEX_ORAL", 10);
				func_27(&uLocal_331, 64);
			}
		}
		unk_0x4B6E5EEB2496720E();
		func_256();
	}
}

int func_217()
{
	struct<3> Var0;
	var uVar3;
	
	if (!func_192())
	{
		return 0;
	}
	func_64(&Var0, &uVar3, 0);
	if (((unk_0x2A488C176D52CCA5(Local_308, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1)) > (75f * 2f) && unk_0x2A488C176D52CCA5(Var0, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1)) > (75f / 2f)) && func_116(uLocal_76[0]) > 1) && func_218())
	{
		return 1;
	}
	return 0;
}

int func_218()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		return 0;
	}
	iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
	if (unk_0xFBD273FDBCF0C5BD(iVar0, 0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iVar0);
		if (func_220(iVar1, 0) && func_219(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_219(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		if (unk_0x6BDF27AD591C4E31(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0xCA36A30E79A35222(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, unk_0x37FCEA2DC5D0CAE5(iParam0, iVar1, unk_0xCA36A30E79A35222(iParam0, iVar1)), 16);
						iVar2 = unk_0x14580F20CBCE4FA9(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == unk_0x14580F20CBCE4FA9("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0x504B9BB48D41C264(iParam0))
		{
			case joaat("peyote2"):
				if ((!unk_0x175FDAC9EB940479(iParam0, 2) && !unk_0x175FDAC9EB940479(iParam0, 3)) && !unk_0x175FDAC9EB940479(iParam0, 4))
				{
					return 0;
				}
				break;
			
			case joaat("peyote3"):
				if (((!unk_0x175FDAC9EB940479(iParam0, 2) && !unk_0x175FDAC9EB940479(iParam0, 3)) && !unk_0x175FDAC9EB940479(iParam0, 4)) && !unk_0x175FDAC9EB940479(iParam0, 1))
				{
					return 0;
				}
				break;
			
			case joaat("coquette4"):
				if (!unk_0x175FDAC9EB940479(iParam0, 1))
				{
					return 0;
				}
				break;
			
			case joaat("zorrusso"):
				if (unk_0xCA36A30E79A35222(iParam0, 10) == -1)
				{
					return 0;
				}
				break;
			
			case joaat("manana2"):
				if (unk_0x175FDAC9EB940479(iParam0, 1))
				{
					return 0;
				}
				break;
			
			case joaat("rt3000"):
				if (unk_0xCA36A30E79A35222(iParam0, 10) == -1 || unk_0xCA36A30E79A35222(iParam0, 10) == 3)
				{
					return 0;
				}
				break;
			
			case 1748565021:
				if (unk_0xCA36A30E79A35222(iParam0, 10) == 0)
				{
					return 0;
				}
				break;
		}
		switch (unk_0x55271CC5190810F6(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case joaat("LAYOUT_STANDARD"):
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 1663892749:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
			case 2071837743:
			case 1482989244:
			case 2130662788:
			case -1546132012:
			case 1410462333:
			case 1192783831:
			case -1304848574:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 954521785:
			case 584837381:
			case -2123959937:
			case 1074598648:
			case 1818992907:
			case -370341013:
			case 1240573865:
			case -627376728:
			case 986556497:
			case -1852541008:
			case -605059493:
			case 1751095603:
			case -991881300:
			case -508485403:
			case 237329608:
			case -1975786336:
			case 1735755507:
			case 784822781:
			case -541039502:
			case 2126816039:
			case -1297908787:
			case -1901288301:
			case 1830236137:
			case -1707715210:
			case -1236346590:
			case -428411780:
			case -1149121978:
			case -1282491670:
			case -1949393167:
			case -201773865:
			case 1509896619:
			case -2093548880:
			case 801538932:
			case 1478163132:
			case -1920284504:
			case -1174301217:
			case -1736391383:
			case -607167196:
			case -1809273022:
			case 342836334:
			case -581105676:
				return 1;
				break;
		}
		if (unk_0x55271CC5190810F6(iParam0) == 931866387 && unk_0x504B9BB48D41C264(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
		if ((unk_0x55271CC5190810F6(iParam0) == joaat("LAYOUT_STD_ISSI3") && unk_0x504B9BB48D41C264(iParam0) == joaat("weevil")) || unk_0x504B9BB48D41C264(iParam0) == joaat("brioso2"))
		{
			return 1;
		}
		if (unk_0x55271CC5190810F6(iParam0) == joaat("LAYOUT_STD_ISSI3") && unk_0x504B9BB48D41C264(iParam0) == joaat("brioso3"))
		{
			return 1;
		}
	}
	return 0;
}

int func_220(int iParam0, bool bParam1)
{
	if ((((unk_0x6123E78FD4B274FB(iParam0) || unk_0xAF4434A9F7368F35(iParam0)) || unk_0x2D92D1084D213DC4(iParam0)) || unk_0xF71BABB2940158F7(iParam0)) || unk_0x6CEF99E452573979(iParam0))
	{
		return 0;
	}
	if (func_221(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if ((((((((((((((((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2")) || iParam0 == joaat("stromberg")) || iParam0 == joaat("barrage")) || iParam0 == joaat("kamacho")) || iParam0 == joaat("gb200")) || iParam0 == joaat("fagaloa")) || iParam0 == joaat("tezeract")) || iParam0 == joaat("swinger")) || iParam0 == joaat("imperator")) || iParam0 == joaat("locust")) || iParam0 == joaat("schlagen")) || iParam0 == joaat("outlaw")) || iParam0 == joaat("comet7")) || iParam0 == joaat("youga4")) || iParam0 == joaat("sm722"))
	{
		return 0;
	}
	return 1;
}

int func_221(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

void func_222(float fParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (!func_267(uLocal_331, 262144))
	{
		if (func_224(uLocal_274[0]))
		{
			if (uLocal_76[0] == 8)
			{
				func_175("SC_STEALC", 0, 0, 0);
			}
			else
			{
				func_173(uLocal_274[0], "GENERIC_SHOCKED_MED", 10);
			}
			func_8(&uLocal_249);
			func_27(&uLocal_331, 262144);
		}
	}
	else if (func_4(&uLocal_249) > 10f)
	{
		func_73(&uLocal_331, 262144);
		func_8(&uLocal_249);
	}
	if ((fParam0 > 5f || !func_192()) || func_267(uLocal_333, 4))
	{
		return;
	}
	if (!func_267(uLocal_331, 1) && !func_267(uLocal_331, 128))
	{
		if (unk_0x2A488C176D52CCA5(Param1, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1)) < 75f)
		{
			if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
			{
				if (func_175("SC_NEAR", 0, 0, 0))
				{
					func_27(&uLocal_331, 1);
				}
			}
			else
			{
				func_27(&uLocal_331, 1);
			}
			unk_0x10DFA2EC4C030EB3(Local_308, 5f, 0, 0, 0, 0, 0, 0, 0);
		}
	}
	if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		return;
	}
	iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
	if (!unk_0xFBD273FDBCF0C5BD(iVar0, 0))
	{
		if (!func_267(uLocal_331, 16))
		{
			func_173(uLocal_274[0], "NEED_A_VEHICLE", 10);
			func_27(&uLocal_331, 16);
			func_8(&uLocal_246);
		}
		if (!func_267(uLocal_331, 4))
		{
			func_73(&uLocal_331, 4);
		}
		if (!func_267(uLocal_331, 8))
		{
			func_73(&uLocal_331, 8);
		}
	}
	else
	{
		fVar1 = unk_0xDC58AE028CB223BA(iVar0);
		fVar2 = unk_0x9CEF19C982CCE911(iVar0);
		if (fVar1 < (fVar2 * 0.9f) || fVar1 > (fVar2 * 0.1f))
		{
			func_8(&uLocal_252);
		}
		if (!func_267(uLocal_331, 4))
		{
			if (func_4(&uLocal_246) > 15f && func_4(&uLocal_252) > 5f)
			{
				func_173(uLocal_274[0], "DRIVEN_FAST", 10);
				func_27(&uLocal_331, 4);
				func_8(&uLocal_246);
			}
		}
		else if (func_4(&uLocal_246) < 5f)
		{
			func_73(&uLocal_331, 4);
			func_8(&uLocal_246);
		}
		if (!func_267(uLocal_331, 8))
		{
			if (func_4(&uLocal_246) > 15f && func_4(&uLocal_252) > 5f)
			{
				func_173(uLocal_274[0], "DRIVEN_SLOW", 10);
				func_27(&uLocal_331, 4);
				func_8(&uLocal_246);
			}
		}
		else if (func_4(&uLocal_246) < 5f)
		{
			func_73(&uLocal_331, 8);
			func_8(&uLocal_246);
		}
		if (!func_267(uLocal_331, 131072))
		{
			if (func_223(uLocal_274[0], &uLocal_334))
			{
				if (func_4(&uLocal_249) > 5f)
				{
					func_173(uLocal_274[0], "CRASH_GENERIC_DRIVEN", 10);
					func_27(&uLocal_331, 131072);
					func_8(&uLocal_246);
				}
			}
		}
		else if (func_4(&uLocal_249) > 5f)
		{
			func_73(&uLocal_331, 131072);
			func_8(&uLocal_249);
		}
		if (!func_267(uLocal_331, 65536))
		{
			if (func_4(&uLocal_246) > 30f || (func_4(&uLocal_246) > 10f && !func_267(uLocal_331, 32)))
			{
				func_173(uLocal_274[0], "BOOTY_FLIRT", 10);
				func_27(&uLocal_331, 32);
				func_27(&uLocal_331, 524288);
				func_8(&uLocal_246);
			}
			else if (func_267(uLocal_331, 524288))
			{
				if (!unk_0x967D885AAF973497(uLocal_274[0]) && func_4(&uLocal_246) > 4f)
				{
					func_173(unk_0xC1A5EC5C986B98AD(), "BOOTY_FLIRT_RESP", 10);
					func_73(&uLocal_331, 524288);
				}
			}
		}
	}
}

int func_223(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
	if (unk_0xFBD273FDBCF0C5BD(iVar0, 0))
	{
		if (unk_0x44A6C9475C859B45(uParam0, iVar0))
		{
			if (unk_0x85A0C6DDA57C5652(iVar0))
			{
				iVar1 = unk_0x2935B4D6CE81318D(iVar0);
				iVar2 = (*uParam1 - iVar1);
				*uParam1 = iVar1;
				unk_0x5CE354E3C73D2002(iVar0);
				if (iVar2 > 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_224(int iParam0)
{
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		if (unk_0x5163C80E5057D309(110, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 10f) && unk_0xA1DF058198143448(iParam0, unk_0xC1A5EC5C986B98AD()))
		{
			return 1;
		}
	}
	return 0;
}

void func_225()
{
	func_87();
	func_8(&uLocal_246);
	if (unk_0x4FBDBA15B9C41492(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0xCE4AAA035282336C(uLocal_280))
		{
			unk_0x45533C09A6C9B409(&uLocal_280);
		}
		if (!unk_0xCE4AAA035282336C(uLocal_281))
		{
			uLocal_281 = func_62(Local_311, 0);
		}
		func_8(&uLocal_258);
		Local_320 = { unk_0x30BE8A934C020461(uLocal_274[0], 1) };
		iLocal_78 = 4;
	}
	else
	{
		func_8(&uLocal_249);
		func_61(Local_308);
		iLocal_78 = 5;
	}
}

void func_226()
{
	if (!func_267(uLocal_331, 1024))
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0) && unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (func_227(uLocal_76[0]))
			{
				if (!func_171())
				{
					func_173(uLocal_274[0], "NICE_CAR", 10);
					func_27(&uLocal_331, 1024);
				}
			}
		}
	}
}

int func_227(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
	if (unk_0xFBD273FDBCF0C5BD(iVar0, 0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iVar0);
		if (func_228(iParam0, iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_228(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("manana"):
		case joaat("tornado"):
		case joaat("tornado3"):
		case joaat("tornado4"):
		case joaat("ztype"):
		case joaat("regina"):
			if (iParam0 == 0)
			{
				return 1;
			}
			break;
		
		case joaat("blista"):
		case joaat("surge"):
		case joaat("dilettante"):
		case joaat("penumbra"):
		case joaat("asterope"):
			if (iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("dominator"):
		case joaat("gauntlet"):
		case joaat("phoenix"):
		case joaat("sabregt"):
		case joaat("bullet"):
		case joaat("banshee"):
		case joaat("peyote"):
		case joaat("buffalo"):
		case joaat("buffalo2"):
			if (iParam0 == 2)
			{
				return 1;
			}
			break;
		
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("jb700"):
		case joaat("stingergt"):
		case joaat("monroe"):
		case joaat("comet2"):
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("intruder"):
		case joaat("jackal"):
		case joaat("exemplar"):
		case joaat("felon"):
		case joaat("superd"):
		case joaat("infernus"):
		case joaat("entityxf"):
		case joaat("adder"):
		case joaat("vacca"):
			if (iParam0 == 3 || iParam0 == 5)
			{
				return 1;
			}
			break;
		
		case joaat("baller"):
		case joaat("bison"):
		case joaat("dubsta"):
		case joaat("granger"):
		case joaat("patriot"):
		case joaat("baller2"):
		case joaat("bjxl"):
		case joaat("cavalcade"):
		case joaat("cavalcade2"):
		case joaat("gresley"):
		case joaat("landstalker"):
		case joaat("mesa"):
		case joaat("rancherxl"):
		case joaat("sandking"):
		case joaat("rebel"):
		case joaat("stretch"):
		case joaat("romero"):
		case joaat("coach"):
		case joaat("bus"):
			if (iParam0 == 4 || iParam0 == 7)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
		case joaat("rapidgt2"):
		case joaat("ninef2"):
		case joaat("zion2"):
		case joaat("tornado2"):
		case joaat("sentinel2"):
		case joaat("issi2"):
		case joaat("felon2"):
			if (iParam0 == 6 || iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("ruffian"):
			if (iParam0 == 8)
			{
				return 1;
			}
			break;
		
		case joaat("fbi"):
		case joaat("taxi"):
		case joaat("pranger"):
		case joaat("ambulance"):
		case joaat("police3"):
			if (iParam0 == 9)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_229(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_235(iParam0, 2, 1))
		{
			func_234(iParam0, 2, 1);
		}
	}
	else if (func_235(iParam0, 2, 1))
	{
		func_230(iParam0, 2, 1);
	}
}

void func_230(int iParam0, int iParam1, bool bParam2)
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
		if (func_54() == 0)
		{
			uVar0 = func_232(func_233(iParam0), -1, 0);
			unk_0x061B1200C95204CB(&uVar0, iParam1);
			func_231(func_233(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_113648.f_668[iParam0]), iParam1);
	}
}

void func_231(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, uParam1, iParam3);
	}
}

int func_232(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805027[iParam0 /*3*/][func_76(iParam1)];
		if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_233(int iParam0)
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

void func_234(int iParam0, int iParam1, bool bParam2)
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
		if (func_54() == 0)
		{
			uVar0 = func_232(func_233(iParam0), -1, 0);
			unk_0xECDAB41968FF21A8(&uVar0, iParam1);
			func_231(func_233(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xECDAB41968FF21A8(&(Global_113648.f_668[iParam0]), iParam1);
	}
}

int func_235(int iParam0, int iParam1, bool bParam2)
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
		if (func_54() == 0)
		{
			return BitTest(func_232(func_233(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113648.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_236()
{
	if (uLocal_76[0] == 8)
	{
		func_175("SC_GREET", 0, 0, 0);
	}
	else
	{
		func_173(uLocal_274[0], "GENERIC_HI_FLIRTY", 10);
	}
}

void func_237()
{
	if (!unk_0xE65E1573677B6119(uLocal_274[0]) && unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(uLocal_274[0], 1)) < 10f)
	{
		unk_0xF8463C9FBA8DCD46(uLocal_274[0], func_238());
		unk_0x04099862985008A1(uLocal_274[0], 0);
	}
}

int func_238()
{
	return unk_0x2165FE3E3189DC71(unk_0x5DC3DCA82C806319());
}

float func_239(int iParam0, int iParam1, int iParam2)
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

int func_240(int iParam0, var uParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	
	if (!func_10(uParam2))
	{
		func_7(uParam2);
	}
	if (func_4(uParam2) > 3f)
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			iVar1 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		}
		if (func_243(iParam0, iVar1, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_241(&uVar0);
			if (unk_0x7DE17ACDD8BA2642(iParam0))
			{
				if (!unk_0x055111B11E6624FD(iParam0, 0))
				{
					if (!unk_0xCBAD2BB7D5709DFA(iLocal_72))
					{
						unk_0xDA95D0C19E737224("BootyCall", &iLocal_72);
					}
					unk_0x0133FF6E23A1DCA4(2, iLocal_72, joaat("player"));
					unk_0x0133FF6E23A1DCA4(2, joaat("player"), iLocal_72);
					unk_0x8386356641D0DED1(iParam0, iLocal_72);
					unk_0xC6C9BF71106ABCAC(iParam0, unk_0xC1A5EC5C986B98AD(), 500f, -1, 0, 0);
				}
			}
			func_8(uParam2);
			return 1;
		}
	}
	return 0;
}

void func_241(var uParam0)
{
	switch (*uParam0)
	{
		case 1:
		case 4:
		case 16:
			func_242(1);
			break;
		
		case 2:
			break;
	}
}

void func_242(bool bParam0)
{
	Global_112642 = 0;
	Global_112642.f_1 = -1;
	Global_112642.f_2 = -1;
	if (bParam0)
	{
		func_124(-1);
	}
}

int func_243(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xC1A5EC5C986B98AD();
	if (!unk_0x055111B11E6624FD(iVar0, 0) && !unk_0x055111B11E6624FD(iParam0, 0))
	{
		if (!func_267(*uParam2, 1))
		{
			if (func_250(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_267(*uParam2, 2))
		{
			if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_267(*uParam2, 4))
		{
			if (func_248(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_267(*uParam2, 8))
		{
			if (func_247(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_267(*uParam2, 128);
		if (bParam4)
		{
			if (func_244(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_267(*uParam2, 16))
		{
			if (func_244(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
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

int func_244(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_59)
		{
			iLocal_60 = unk_0x2935B4D6CE81318D(iParam0);
			bLocal_59 = true;
		}
		iLocal_61 = unk_0x2935B4D6CE81318D(iParam0);
		iLocal_62 = (iLocal_60 - iLocal_61);
		iVar0 = unk_0xE475C458F52F1781();
		if (!unk_0x055111B11E6624FD(iVar0, 0))
		{
			if (unk_0x7559C38E6535AB89(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_59)
		{
			if (unk_0x7559C38E6535AB89(iParam0, unk_0xC1A5EC5C986B98AD(), 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
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
		iVar1 = unk_0xE475C458F52F1781();
		if (!unk_0x055111B11E6624FD(iVar1, 0))
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
			if (unk_0x1C4E4DC1EFE24DF1(iParam0, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 10f, 10f, 10f, 0, 1, 0))
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
	if (func_246(unk_0xC1A5EC5C986B98AD(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x48A4D45B3B4CEFFD(iParam0) && func_245(iParam0, 1) < 1.5f)
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
		if (!unk_0x055111B11E6624FD(iParam1, 0))
		{
			if (unk_0x7559C38E6535AB89(iParam1, unk_0xC1A5EC5C986B98AD(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_245(int iParam0, int iParam1)
{
	return func_239(unk_0xF2CFBB1105511E1A(unk_0x5DC3DCA82C806319()), iParam0, iParam1);
}

int func_246(int iParam0, int iParam1)
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

int func_247(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x2D1125ABF6C8F8C4(iParam0, 4))
	{
		if (unk_0x110D030CCD4E83A6(iParam0) && !unk_0x7B783B62D5123CC7(iParam0))
		{
			if (unk_0x1C4E4DC1EFE24DF1(iParam1, unk_0x30BE8A934C020461(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_248(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x055111B11E6624FD(iParam1, 0))
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
	if (unk_0x2D1125ABF6C8F8C4(iParam0, 2))
	{
		if (unk_0x110D030CCD4E83A6(iParam0))
		{
			if (unk_0x1C4E4DC1EFE24DF1(iParam1, unk_0x30BE8A934C020461(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
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
			if (unk_0x197DD015F81B0D16(iParam0) || func_249(iVar3))
			{
				if (unk_0x1C4E4DC1EFE24DF1(iParam1, unk_0x30BE8A934C020461(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
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

int func_249(int iParam0)
{
	int iVar0;
	int iVar1;
	
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
						if (func_239(unk_0xC1A5EC5C986B98AD(), iParam0, 1) < 40f)
						{
							if (unk_0x005E10EF94E1E6A5(unk_0x93E99A2DBCBA9CFA(), &iVar1))
							{
								if ((unk_0xA6B591D40DE982B5(iVar1) && unk_0x4DFB7A1A6909D574(iVar1) == iParam0) || (unk_0x71904BD37B848CAF(iVar1) && unk_0x9C8D7679C15E75FF(iVar1) == unk_0xA66E176E5772E965(iParam0, -1, 0)))
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

int func_250(int iParam0, var uParam1)
{
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
		{
			if (unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), iParam0) || unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iParam0))
			{
				if (unk_0xD495130AEF425591(iParam0, unk_0xC1A5EC5C986B98AD(), 90f))
				{
					if (func_245(iParam0, 1) < uParam1->f_2)
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

void func_251(int iParam0)
{
	struct<4> Var0;
	
	if (unk_0xCE4AAA035282336C(uLocal_282[iParam0]))
	{
		unk_0x45533C09A6C9B409(&(uLocal_282[iParam0]));
	}
	uLocal_282[iParam0] = func_252(uLocal_274[iParam0], 0, 145);
	Var0 = { func_71(uLocal_76[iParam0]) };
	unk_0x4049FDC177C92D4B(uLocal_282[iParam0], &Var0);
}

var func_252(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_253(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCE4AAA035282336C(uVar0)) && unk_0x42FA33BDEDF21186(&(Global_2028[iParam2 /*29*/].f_3)))
	{
		unk_0x4049FDC177C92D4B(uVar0, &(Global_2028[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_253(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7DE17ACDD8BA2642(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x53B496178AE44636(iParam0);
	if (unk_0xA6B591D40DE982B5(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_63(unk_0xA26A9A07F761D8F8(), 1f, 1f));
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
		unk_0x225EB85DBC38E707(uVar0, func_63(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
		unk_0x3BCF1F6A3573A1DF(uVar0, bParam1);
	}
	else if (unk_0x4E7A9806173C3AD1(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_63(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_254(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	float fVar7;
	
	Var0 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
	Var3 = { unk_0x30BE8A934C020461(iParam0, 1) };
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		uVar6 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		if (unk_0x526C15161BE07E9F(iParam0) == func_238())
		{
			if (unk_0xFBD273FDBCF0C5BD(uVar6, 0))
			{
				if (!unk_0xE0D346789C5160EB(iParam0, iVar6, 0) && unk_0x2A488C176D52CCA5(Var0, Var3) > 10f)
				{
					return 1;
				}
			}
		}
	}
	if (iParam1 && func_267(uLocal_333, 2))
	{
		fVar7 = unk_0x2655A8EC638E4FD1((Var0.f_2 - Var3.f_2));
		if (fVar7 > 8f)
		{
			return 1;
		}
	}
	return 0;
}

void func_255()
{
	if (!unk_0x055111B11E6624FD(uLocal_274[0], 0))
	{
		if (!unk_0x58A962BEF2DDE1DF())
		{
			func_196(uLocal_274[0], unk_0xF2A6E8EA57F9D501(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0xD850DD08D5434072(unk_0xC1A5EC5C986B98AD()), 0f, 2f, 0f));
			iLocal_74 = 1;
			iLocal_75 = 0;
		}
	}
}

void func_256()
{
	unk_0x063E0F2515867ED4();
	func_257();
}

void func_257()
{
	Global_23131.f_134 = 1;
}

int func_258(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_01");
		}
		else
		{
			return joaat("s_f_y_stripper_01");
		}
	}
	else if (iParam0 == 1)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_02");
		}
		else
		{
			return joaat("s_f_y_stripper_02");
		}
	}
	return 0;
}

void func_259(bool bParam0)
{
	struct<8> Var0;
	
	if (!func_165(iLocal_73))
	{
		iLocal_73 = func_169();
		func_159(&iLocal_73, 0, 0, unk_0x15A88CFAAFFC6C4B(5, 7), 0, 0, 0);
	}
	else if (bParam0)
	{
		if (!func_267(uLocal_333, 512))
		{
			if (func_266(iLocal_73) && unk_0xDB08595445CDE2FF(uLocal_274[0]))
			{
				if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
				{
					StringCopy(&Var0, "SC_CANCEL_", 64);
					StringIntConCat(&Var0, uLocal_76[0], 64);
					func_193(&uLocal_81, 1, 0, func_194(uLocal_76[0]), 0, 1);
					func_265(&uLocal_81, func_112(uLocal_76[0]), "SHAUD", &Var0, 7, 0, 0, 1);
				}
				else
				{
					func_263();
				}
				func_262(uLocal_274[0]);
				func_27(&uLocal_333, 512);
			}
		}
		else if (func_261())
		{
			func_73(&uLocal_333, 512);
		}
		else if ((!func_171() && func_260()) && !func_261())
		{
			func_242(1);
			func_66(2);
		}
	}
}

int func_260()
{
	if (Global_21725 == 0)
	{
		return 1;
	}
	return 0;
}

int func_261()
{
	if (Global_21774 == 1 || Global_22741 == 1)
	{
		return 1;
	}
	return 0;
}

void func_262(int iParam0)
{
	if (!unk_0x66599E73DBA5A850(uParam0))
	{
		unk_0x69340D273AA38F5D(iParam0, 1);
		if (unk_0xF5F493B789EA063E(iParam0, joaat("script_task_perform_sequence")) != 1)
		{
			unk_0x63EF69C6969A3D26(&uLocal_339);
			unk_0xDBC7406226B5540E(&uLocal_339);
			unk_0xFF1783C2C0013BD6(0, 8000);
			unk_0x7D9A648CC1936BDA(0, Local_305, 1.5f, -1, 0.25f, 0, 1193033728);
			unk_0xF2CFC6EC8C85FA78(uLocal_339);
			unk_0x3D7110D966B0CEA2(iParam0, uLocal_339);
		}
	}
}

void func_263()
{
	int iVar0;
	
	if (func_264())
	{
		return;
	}
	iVar0 = func_115(uLocal_76[0]);
	func_109(-384575792, iVar0, 6, 3, func_113(), func_112(uLocal_76[0]), 0, 10000, -1, 0, -1, 0, 1);
}

int func_264()
{
	if (func_54() == 0)
	{
		return 1;
	}
	return 0;
}

int func_265(var uParam0, bool bParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_189(uParam0, bParam1, sParam2, iParam5, iParam6, 0);
	Global_21773 = 1;
	Global_21732 = 1;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_21730 = 0;
	Global_21777 = 0;
	Global_21779 = 0;
	Global_2883585 = 0;
	return func_177(sParam3, iParam4, bParam7);
}

bool func_266(int iParam0)
{
	return func_164(func_169(), iParam0);
}

bool func_267(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_268(var uParam0, bool bParam1)
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	char cVar5[64];
	struct<16> Var21;
	struct<8> Var37;
	
	func_296();
	func_64(&Var0, &uVar3, bParam1);
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (fLocal_329 == -1f)
		{
			fLocal_329 = unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Var0);
		}
		if (iLocal_332 == -1)
		{
			iLocal_332 = uParam0->f_3;
		}
		if (!func_267(uLocal_333, 32))
		{
			func_292(&uLocal_278, func_294((*uParam0)[0], 0));
			func_291(&uLocal_278);
			func_27(&uLocal_333, 32);
			unk_0x28818732C8F0F80E("mini@strip_club@idles@stripper");
			unk_0x28818732C8F0F80E("gestures@f@standing@casual");
			func_290();
			return 0;
		}
		else if ((!func_289(&uLocal_278) || !unk_0x2BBF749E555360DC("mini@strip_club@idles@stripper")) || !func_288())
		{
			return 0;
		}
		if (bLocal_337)
		{
			if (!unk_0x334CA22E0AD77C7C(1))
			{
				return 0;
			}
		}
		if (!func_267(uLocal_333, 1024))
		{
			uLocal_76[0] = (*uParam0)[0];
			uLocal_274[0] = unk_0x69FDD9508259E5B5(26, func_294((*uParam0)[0], 0), Var0, uVar3, 1, 1);
			func_282(uLocal_274[0], uLocal_76[0], 0);
			unk_0xC5B2830898581862(uLocal_274[iVar4], 1);
			unk_0x71A535529C1CA5DF(uLocal_274[0], 1);
			unk_0xB7561E3CA1BE2262(uLocal_274[0], 1);
			func_278(uLocal_274[0]);
			unk_0x3EE48ADC8C7F5CC4(uLocal_274[0], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1.5f, -1, 1, 0, 0, 0, 0);
			unk_0xEDB03CCB50D11479(uLocal_274[iVar4], unk_0xC1A5EC5C986B98AD(), -1, 2048, 4);
			unk_0x04099862985008A1(uLocal_274[0], 0);
			unk_0xEE72EF85581D1171(uLocal_274[0], func_194((*uParam0)[0]));
			func_193(&uLocal_81, 1, uLocal_274[0], func_194((*uParam0)[0]), 0, 1);
			func_27(&uLocal_333, 1024);
		}
		if (unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Var0) > 100f)
		{
			if (func_192())
			{
				if (!func_267(uLocal_333, 1))
				{
					func_277(bParam1);
					func_251(0);
					func_27(&uLocal_333, 1);
				}
			}
			if (!func_267(uLocal_333, 64) && !func_267(uLocal_333, 512))
			{
				if (func_276(func_112((*uParam0)[0])))
				{
					StringCopy(&cVar5, "BC_PLYRC_", 64);
					if (func_77() == 2)
					{
						func_193(&uLocal_81, 0, unk_0xC1A5EC5C986B98AD(), "TREVOR", 0, 1);
						StringConCat(&cVar5, "T", 64);
					}
					else if (func_77() == 0)
					{
						func_193(&uLocal_81, 0, unk_0xC1A5EC5C986B98AD(), "MICHAEL", 0, 1);
						StringConCat(&cVar5, "M", 64);
					}
					else if (func_77() == 1)
					{
						func_193(&uLocal_81, 0, unk_0xC1A5EC5C986B98AD(), "FRANKLIN", 0, 1);
						StringConCat(&cVar5, "F", 64);
					}
					func_193(&uLocal_81, 3, 0, func_194((*uParam0)[0]), 0, 1);
					Var21 = { func_275() };
					func_270(&uLocal_81, func_112((*uParam0)[0]), "BCAUD", &cVar5, &cVar5, &Var21, &Var21, 12, 1, 0, 0, 0);
					func_27(&uLocal_333, 64);
				}
				if (func_165(iLocal_73))
				{
					if (func_266(iLocal_73))
					{
						if ((*uParam0)[0] == 8 || (*uParam0)[0] == 9)
						{
							StringCopy(&Var37, "SC_CANCEL_", 64);
							StringIntConCat(&Var37, (*uParam0)[0], 64);
							func_193(&uLocal_81, 1, 0, func_194((*uParam0)[0]), 0, 1);
							func_265(&uLocal_81, func_112((*uParam0)[0]), "SHAUD", &Var37, 12, 0, 0, 1);
						}
						else
						{
							func_263();
						}
						func_27(&uLocal_333, 512);
					}
				}
			}
			else if (func_261())
			{
				func_73(&uLocal_333, 64);
				func_73(&uLocal_333, 512);
			}
			else if ((!func_171() && func_260()) && !func_261())
			{
				func_269((*uParam0)[0]);
				func_242(1);
				func_66(2);
			}
			if (!func_267(uLocal_333, 128))
			{
				if (!func_33(0))
				{
					func_67("SCLUB_HOME_C_H", uLocal_76[0], 0);
					func_27(&uLocal_333, 128);
				}
			}
			if (unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Var0) > (fLocal_329 + (200f * 3f)))
			{
				func_66(1);
			}
			else if (unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Var0) < fLocal_329)
			{
				fLocal_329 = unk_0x2A488C176D52CCA5(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), Var0);
			}
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (func_77() == 2)
	{
		func_193(&uLocal_81, 0, unk_0xC1A5EC5C986B98AD(), "TREVOR", 0, 1);
	}
	else if (func_77() == 0)
	{
		func_193(&uLocal_81, 0, unk_0xC1A5EC5C986B98AD(), "MICHAEL", 0, 1);
	}
	else if (func_77() == 1)
	{
		func_193(&uLocal_81, 0, unk_0xC1A5EC5C986B98AD(), "FRANKLIN", 0, 1);
	}
	return 1;
}

void func_269(int iParam0)
{
	if (Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 < 0)
	{
		Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 = 0;
	}
	Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1++;
}

int func_270(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar11;
	
	func_189(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_274();
	if (iParam8 == 1)
	{
		Global_21737 = 1;
	}
	else
	{
		Global_21737 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_272(2, &uVar0, &uVar11, cParam3, cParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_271(&uVar0, &uVar11, iParam7, bParam11);
}

int func_271(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_21726 = 0;
	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam2 > Global_21727)
			{
				if (bParam3 == 0)
				{
					unk_0xD6625E11483B2324(0);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
				}
				else
				{
					func_188();
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
		if (func_187(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_186();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22721 = Global_22722;
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21344.f_370 = Global_22714;
		Global_21721 = Global_21722;
		Global_21723 = Global_21724;
		if (Global_21983 == 0)
		{
			Global_21879[0 /*6*/] = { Global_21905[0 /*6*/] };
			Global_21879[1 /*6*/] = { Global_21905[1 /*6*/] };
			Global_21931[0 /*6*/] = { Global_21957[0 /*6*/] };
			Global_21931[1 /*6*/] = { Global_21957[1 /*6*/] };
			Global_21892[0 /*6*/] = { Global_21918[0 /*6*/] };
			Global_21892[1 /*6*/] = { Global_21918[1 /*6*/] };
			Global_21944[0 /*6*/] = { Global_21970[0 /*6*/] };
			Global_21944[1 /*6*/] = { Global_21970[1 /*6*/] };
		}
		if (Global_21731)
		{
			unk_0x061B1200C95204CB(&Global_8253, 20);
			unk_0x061B1200C95204CB(&Global_8254, 17);
			unk_0x061B1200C95204CB(&Global_8255, 0);
			if (bParam3)
			{
				func_134();
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_185())
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
					if (Global_21983 == 0)
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
			}
			if (func_23())
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
			}
			func_184();
			Global_21735 = bParam3;
		}
		Global_21727 = iParam2;
		if (Global_21721 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_21721)
			{
				StringCopy(&(Global_21344.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_21344.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_20591 = 0;
		func_183();
		return 1;
	}
	if (Global_21725 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_21727 || iParam2 == Global_21727)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_188();
	}
	return 0;
}

void func_272(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_273(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_273(var uParam0)
{
	Global_21722 = uParam0;
	Global_21732 = 1;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
}

void func_274()
{
	Global_21773 = 0;
	Global_21732 = 1;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_21739 = 0;
	Global_22722 = 0;
	Global_21730 = 0;
	Global_21777 = 0;
	Global_21779 = 0;
	Global_2883585 = 0;
}

struct<16> func_275()
{
	struct<16> Var0;
	
	StringCopy(&Var0, "BC_DECR_", 64);
	StringIntConCat(&Var0, uLocal_76[0], 64);
	return Var0;
}

int func_276(int iParam0)
{
	if ((Global_22839 || Global_22838) || Global_22840)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 169)
	{
		if (Global_20383.f_1 == 10)
		{
			if (Global_7568 == iParam0)
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
	return 0;
}

void func_277(bool bParam0)
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_84("SCLUB_HOME_MEE4", uLocal_76[0]);
			}
			else
			{
				func_84("SCLUB_HOME_MEET", uLocal_76[0]);
			}
			break;
		
		case 8:
			func_84("SCLUB_HOME_LIZ", uLocal_76[0]);
			break;
		
		case 9:
			func_84("SCLUB_HOME_HITCH", uLocal_76[0]);
			break;
	}
}

void func_278(int iParam0)
{
	if (unk_0x504B9BB48D41C264(uParam0) == joaat("s_f_y_stripper_02"))
	{
		func_281(iParam0, 2, unk_0x15A88CFAAFFC6C4B(0, 3));
		func_280(iParam0, 2, unk_0x15A88CFAAFFC6C4B(0, 3));
		func_279(iParam0, 0, 0);
	}
}

void func_279(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x3469BAA45B08DF0E(uParam0, 6, iParam1, iParam2))
	{
		unk_0xFECAE061D8C80757(uParam0, 6, iParam1, iParam2, 0);
	}
}

void func_280(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x3469BAA45B08DF0E(uParam0, 3, iParam1, iParam2))
	{
		unk_0xFECAE061D8C80757(uParam0, 3, iParam1, iParam2, 0);
	}
}

void func_281(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x3469BAA45B08DF0E(uParam0, 8, iParam1, iParam2))
	{
		unk_0xFECAE061D8C80757(uParam0, 8, iParam1, iParam2, 0);
	}
}

void func_282(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x66599E73DBA5A850(uParam0))
	{
		unk_0x87EDBB907BE25521(iParam0);
		bVar0 = false;
		if (unk_0x504B9BB48D41C264(iParam0) == joaat("mp_f_stripperlite"))
		{
			bVar0 = true;
		}
		switch (iParam1)
		{
			case 0:
				if (bVar0)
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 1, 0);
					func_280(iParam0, 1, 0);
					func_285(iParam0, 1, 0);
					func_284(iParam0, 1, -1, -1);
				}
				else
				{
					func_287(iParam0, 1, 1);
					func_286(iParam0, 2, 0);
					func_280(iParam0, 0, 0);
					func_285(iParam0, 0, 0);
					func_281(iParam0, 1, 0);
					func_283(iParam0, 0, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 1:
				if (bVar0)
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 0, 0);
					func_280(iParam0, 0, 0);
					func_285(iParam0, 0, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 0, 0);
					func_280(iParam0, 0, 0);
					func_285(iParam0, 0, 0);
					func_279(iParam0, 4, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, 0, 4);
				}
				break;
			
			case 2:
				if (bVar0)
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 1, 1);
					func_280(iParam0, 1, 0);
					func_285(iParam0, 1, 0);
					func_284(iParam0, 1, -1, -1);
				}
				else
				{
					func_287(iParam0, 0, 1);
					func_286(iParam0, 1, 1);
					func_280(iParam0, 1, 0);
					func_285(iParam0, 1, 1);
					func_281(iParam0, 1, 0);
					func_283(iParam0, 1, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 3:
				if (bVar0)
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 0, 1);
					func_280(iParam0, 0, 1);
					func_285(iParam0, 0, 1);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 2, 0);
					func_280(iParam0, 0, 2);
					func_285(iParam0, 1, 1);
					func_279(iParam0, 0, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, 2, 0);
				}
				break;
			
			case 4:
				if (bVar0)
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 1, 0);
					func_280(iParam0, 1, 0);
					func_285(iParam0, 1, 0);
					func_284(iParam0, 1, -1, -1);
				}
				else
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 2, 1);
					func_280(iParam0, 1, 2);
					func_285(iParam0, 0, 2);
					func_281(iParam0, 1, 0);
					func_283(iParam0, 1, 2);
					func_284(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 5:
				if (bVar0)
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 0, 0);
					func_280(iParam0, 0, 0);
					func_285(iParam0, 0, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(iParam0, 1, 1);
					func_286(iParam0, 1, 0);
					func_280(iParam0, 0, 1);
					func_285(iParam0, 0, 2);
					func_279(iParam0, 2, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, 1, 2);
				}
				break;
			
			case 6:
				if (bVar0)
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 1, 0);
					func_280(iParam0, 1, 0);
					func_285(iParam0, 1, 0);
					func_284(iParam0, 1, -1, -1);
				}
				else
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 1, 0);
					func_280(iParam0, 0, 1);
					func_285(iParam0, 0, 1);
					func_281(iParam0, 1, 0);
					func_283(iParam0, 0, 1);
					func_284(iParam0, bParam2, 0, 1);
				}
				break;
			
			case 7:
				if (bVar0)
				{
					func_287(iParam0, 0, 0);
					func_286(iParam0, 0, 1);
					func_280(iParam0, 0, 0);
					func_285(iParam0, 0, 0);
					func_281(iParam0, 0, 0);
					func_284(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(iParam0, 1, 0);
					func_286(iParam0, 0, 2);
					func_280(iParam0, 1, 1);
					func_285(iParam0, 0, 1);
					func_279(iParam0, 0, 0);
					func_281(iParam0, 1, 0);
					func_284(iParam0, bParam2, 0, 0);
				}
				break;
			
			case 8:
				unk_0xFECAE061D8C80757(iParam0, 3, 2, 0, 0);
				unk_0xFECAE061D8C80757(iParam0, 4, 0, 1, 0);
				break;
			
			case 9:
				unk_0xFECAE061D8C80757(iParam0, 0, 0, 1, 0);
				unk_0xFECAE061D8C80757(iParam0, 2, 0, 1, 0);
				unk_0xFECAE061D8C80757(iParam0, 3, 0, 0, 0);
				unk_0xFECAE061D8C80757(iParam0, 4, 0, 1, 0);
				unk_0xFECAE061D8C80757(iParam0, 8, 1, 0, 0);
				unk_0xFECAE061D8C80757(iParam0, 10, 0, 0, 0);
				break;
			}
	}
}

void func_283(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x3469BAA45B08DF0E(uParam0, 11, iParam1, iParam2))
	{
		unk_0xFECAE061D8C80757(uParam0, 11, iParam1, iParam2, 0);
	}
}

void func_284(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (unk_0x055111B11E6624FD(uParam0, 0))
	{
		return;
	}
	iVar0 = unk_0x504B9BB48D41C264(iParam0);
	if (iVar0 == func_258(0, 0) || iVar0 == func_258(0, 1))
	{
		if (bParam1)
		{
			func_280(iParam0, 2, 0);
			func_281(iParam0, 1, 0);
		}
	}
	else if (iVar0 == func_258(1, 0) || iVar0 == func_258(1, 1))
	{
		if (bParam1)
		{
			func_280(iParam0, 0, iParam2);
			func_279(iParam0, iParam3, 0);
			func_281(iParam0, 1, 0);
		}
	}
	else if (iVar0 == joaat("mp_f_stripperlite"))
	{
		if (bParam1)
		{
			func_281(iParam0, 1, 0);
		}
	}
}

void func_285(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x3469BAA45B08DF0E(uParam0, 4, iParam1, iParam2))
	{
		unk_0xFECAE061D8C80757(uParam0, 4, iParam1, iParam2, 0);
	}
}

void func_286(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x3469BAA45B08DF0E(uParam0, 2, iParam1, iParam2))
	{
		unk_0xFECAE061D8C80757(uParam0, 2, iParam1, iParam2, 0);
	}
}

void func_287(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x3469BAA45B08DF0E(uParam0, 0, iParam1, iParam2))
	{
		unk_0xFECAE061D8C80757(uParam0, 0, iParam1, iParam2, 0);
	}
}

int func_288()
{
	if (unk_0x2AC37494BBF1DB16(func_204()))
	{
		return 1;
	}
	else if (unk_0xC546C50EE3EA181E(func_204()))
	{
		return 1;
	}
	return 0;
}

int func_289(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x0CBB7C273DED26E7((*uParam0)[iVar0]))
			{
				if (!unk_0x0CBB7C273DED26E7((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_290()
{
	if (!unk_0x2AC37494BBF1DB16(func_204()))
	{
		unk_0x7F2BD159A7FF94C0(func_204());
	}
}

void func_291(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x852EC2A7DE66202D((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_292(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_293(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_293(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_294(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		return joaat("mp_f_stripperlite");
	}
	iVar0 = func_112(iParam0);
	if (iVar0 != 145)
	{
		return func_295(iVar0);
	}
	return func_258(0, 0);
}

int func_295(int iParam0)
{
	if (!func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_296()
{
	switch (uLocal_76[0])
	{
		case 1:
			Local_302 = { 128.1002f, -1895.001f, 22.4811f };
			Local_305 = { 128.1059f, -1896.819f, 22.6792f };
			Local_308 = { 133.9411f, -1881.89f, 22.5257f };
			Local_311 = { 130.1663f, -1893.057f, 22.3748f };
			Local_314 = { 133.4958f, -1891.641f, 22.4252f };
			fLocal_326 = 330.5705f;
			fLocal_327 = 244f;
			Local_323 = { 146.293f, -1888.049f, 22.2193f };
			fLocal_328 = fLocal_327;
			break;
		
		case 0:
			Local_302 = { -161.9628f, -1636.501f, 33.0339f };
			Local_305 = { -159.9415f, -1637.307f, 33.0339f };
			Local_308 = { -178.6316f, -1629.522f, 32.1789f };
			Local_311 = { -166.1453f, -1633.102f, 32.6574f };
			Local_314 = { -166.6636f, -1633.229f, 32.6567f };
			fLocal_326 = 108.072f;
			fLocal_327 = 180.9811f;
			Local_323 = { Local_308 };
			fLocal_328 = fLocal_327;
			break;
		
		case 4:
			Local_302 = { -198.3824f, 87.8785f, 68.7436f };
			Local_305 = { -197.2292f, 86.3497f, 68.7561f };
			Local_308 = { -200.9078f, 113.537f, 68.5518f };
			Local_311 = { -200.1384f, 96.9809f, 68.5203f };
			Local_314 = { -199.5068f, 95.7042f, 68.5193f };
			fLocal_326 = 48.99f;
			fLocal_327 = 64.3f;
			Local_323 = { Local_308 };
			fLocal_328 = fLocal_327;
			break;
		
		case 5:
			Local_302 = { -849.0348f, 510.6906f, 89.8218f };
			Local_305 = { -849.0408f, 508.5767f, 89.8218f };
			Local_308 = { -846.1005f, 520.2202f, 89.6217f };
			Local_311 = { -851.8972f, 512.73f, 89.6217f };
			Local_314 = { -851.8746f, 513.6746f, 89.6217f };
			fLocal_326 = 92.365f;
			fLocal_327 = 293f;
			Local_323 = { -860.4819f, 514.2496f, 88.1473f };
			fLocal_328 = fLocal_327;
			break;
		
		case 8:
			Local_302 = { -28.2427f, -1555.892f, 29.6918f };
			Local_305 = { -24.8589f, -1556.846f, 29.6819f };
			Local_308 = { -41.8174f, -1575.609f, 28.2831f };
			Local_311 = { -25.3404f, -1556.341f, 29.6919f };
			Local_314 = { -27.7382f, -1570.572f, 29.3f };
			fLocal_326 = 181.352f;
			fLocal_327 = 47.9206f;
			Local_323 = { Local_308 };
			fLocal_328 = fLocal_327;
			break;
		
		case 9:
			Local_302 = { 3313.487f, 5175.831f, 18.619f };
			Local_305 = { 3310.816f, 5176.331f, 18.619f };
			Local_308 = { 3334.321f, 5161.122f, 17.2996f };
			Local_311 = { 3317.788f, 5171.707f, 17.4471f };
			Local_314 = { 3318.076f, 5171.805f, 17.4385f };
			fLocal_326 = 236.4579f;
			Local_323 = { 3322.927f, 5148.607f, 17.3141f };
			fLocal_328 = 310.8648f;
			break;
	}
}

int func_297()
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bLocal_337)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_298(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xA1089192E8AE61F4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_302();
			}
			else
			{
				return 0;
			}
		}
		if (!func_301(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA26A9A07F761D8F8())
				{
					if (!bParam2)
					{
						func_302();
					}
					else
					{
						return 0;
					}
				}
				if (func_300())
				{
					if (!bParam2)
					{
						func_302();
					}
					else
					{
						return 0;
					}
				}
				if (func_299(157))
				{
					if (!bParam2)
					{
						func_302();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xE3C3FF8D5649A77D())
			{
				if (!bParam2)
				{
					func_302();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xA1089192E8AE61F4();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			if (!bParam2)
			{
				func_302();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xE3C3FF8D5649A77D())
	{
		if (!bParam2)
		{
			func_302();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_299(int iParam0)
{
	if (unk_0x36D3321E138A43F0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_300()
{
	return Global_2683862.f_693;
}

bool func_301(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

void func_302()
{
	unk_0x675D9C12C73D3DE7();
}

void func_303()
{
	unk_0x0BC03D1AAEAA9585(0);
	unk_0x9FBE0CB0449BB41F();
	func_86();
	unk_0x8581263F2F024518();
	unk_0x17D46728E18012D3(uLocal_301, 0);
	unk_0x8E09E8C52602EBB2(Local_308 - Vector(3f, 3f, 3f), Local_308 + Vector(3f, 3f, 3f), 1, 1);
	unk_0x90DA349CD13C7839(Local_308 - Vector(3f, 3f, 3f), Local_308 + Vector(3f, 3f, 3f), 15f, 1);
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), true, 0);
	}
	unk_0x9E2404A25985615A(false, 0, 3000, 1, 0, 0);
	if (unk_0x7DE17ACDD8BA2642(uLocal_274[0]))
	{
		if (!unk_0x055111B11E6624FD(uLocal_274[0], 0))
		{
			if (!func_267(uLocal_333, 8192))
			{
				unk_0x984708151807AC6D(uLocal_274[0], 1193033728, 0);
			}
			unk_0x71A535529C1CA5DF(uLocal_274[0], 1);
			if (!unk_0xCBAD2BB7D5709DFA(iLocal_72))
			{
				unk_0xDA95D0C19E737224("BootyCall", &iLocal_72);
			}
			unk_0x0133FF6E23A1DCA4(2, iLocal_72, joaat("player"));
			unk_0x0133FF6E23A1DCA4(2, joaat("player"), iLocal_72);
			unk_0x8386356641D0DED1(uLocal_274[0], iLocal_72);
		}
		unk_0x1EEF71E3CDD868D3(&(uLocal_274[0]));
	}
	if (iLocal_332 != -1)
	{
		func_305(&iLocal_332);
	}
	if (bLocal_71)
	{
		func_143(&uLocal_70);
	}
	unk_0x74909EF861003AA2(unk_0x93E99A2DBCBA9CFA(), 0);
	func_123(uLocal_76[0], -1);
	Global_112642 = 0;
	func_304(0);
	unk_0x675D9C12C73D3DE7();
}

void func_304(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_229(iVar0, bParam0);
		iVar0++;
	}
}

void func_305(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_43219)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_43218 = 0;
	Global_43220 = 0;
	Global_43257 = 15;
	Global_63359 = 0;
	Global_63360 = 0;
}

