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
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_65[12];
	int iLocal_102 = 0;
	bool bLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	bool bLocal_106 = 0;
	int iLocal_107[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_118 = 0;
	bool bLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	struct<7> Local_128 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
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
	var uLocal_145 = 16;
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
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	struct<3> Local_312 = { 0, 0, 0 } ;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	struct<76> Local_318 = { 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	var uLocal_404[3] = { 0, 0, 0 };
	var uLocal_408[3] = { 0, 0, 0 };
	int iLocal_412[3] = { 0, 0, 0 };
	float fLocal_416 = 0f;
	bool bLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	struct<13> Local_420[10];
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	var uLocal_571 = 0;
	bool bLocal_572 = 0;
	int iLocal_573 = 0;
	bool bLocal_574 = 0;
	int iLocal_575 = 0;
	var uLocal_576[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_597[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_618 = 0;
	int iLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	struct<3> Local_625 = { 0, 0, 0 } ;
	int iLocal_628 = 0;
	struct<41> Local_629 = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4 } ;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
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
	fLocal_416 = 0f;
	bLocal_417 = true;
	Local_625 = { 1683.682f, 2518.867f, 44.5651f };
	if (unk_0x55EEDBBFDC6E810F(3))
	{
		func_89(0);
	}
	uLocal_311 = unk_0xC1A5EC5C986B98AD();
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		unk_0x1C3E2093568327D8(unk_0x93E99A2DBCBA9CFA());
	}
	while (true)
	{
		if (unk_0x055111B11E6624FD(uLocal_311, 0))
		{
			func_89(0);
		}
		func_88();
		Local_312 = { unk_0x30BE8A934C020461(iLocal_311, 1) };
		switch (iLocal_310)
		{
			case 0:
				func_86();
				iLocal_310 = 1;
				break;
			
			case 1:
				if (!Global_32172)
				{
					func_85();
					func_84();
					func_83();
					func_81();
					iLocal_310 = 2;
				}
				break;
			
			case 2:
				if ((((func_80() && func_79()) && func_78()) && func_77()) && func_76())
				{
					iLocal_310 = 3;
				}
				break;
			
			case 3:
				func_70();
				unk_0x4EDE34FBADD967A6(0);
				func_69();
				unk_0x4EDE34FBADD967A6(0);
				func_66();
				func_65();
				iLocal_310 = 4;
				break;
			
			case 4:
				if (!Global_32172)
				{
					if (Global_97609)
					{
						func_89(0);
					}
					func_34();
					func_33();
					func_30();
					func_29();
					func_27();
					func_5();
					func_4();
				}
				else if (func_1(0))
				{
					func_89(1);
				}
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1(bool bParam0)
{
	if (bParam0)
	{
		if (func_3())
		{
			return 1;
		}
	}
	if (func_2(14))
	{
		return 1;
	}
	return 0;
}

bool func_2(int iParam0)
{
	return Global_43257 == iParam0;
}

int func_3()
{
	if (Global_112593)
	{
		return 1;
	}
	if (!func_2(14) && unk_0x24B651D85CCE5EB4(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	if (iLocal_51 == 1)
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 1766.972f, 2409.596f, 43.55469f, 1826.647f, 2471.633f, 56.30863f, 12f, 0, 1, 0))
			{
				if (!bLocal_103)
				{
					unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[0] = 1;
				}
			}
			else
			{
				iLocal_107[0] = 0;
			}
		}
	}
	else if (iLocal_51 == 2)
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 1662.31f, 2391.06f, 43.51377f, 1761.362f, 2405.143f, 56.65472f, 12f, 0, 1, 0))
			{
				if (!bLocal_103)
				{
					unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[1] = 1;
				}
			}
			else
			{
				iLocal_107[1] = 0;
			}
		}
	}
	else if (iLocal_51 == 3)
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 1537.369f, 2465.132f, 43.5756f, 1655.663f, 2391.822f, 56.54404f, 12f, 0, 1, 0))
			{
				if (!bLocal_103)
				{
					unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[2] = 1;
				}
			}
			else
			{
				iLocal_107[2] = 0;
			}
		}
	}
	else if (iLocal_51 == 4)
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 1529.153f, 2584.264f, 43.6168f, 1535.014f, 2469.253f, 56.5985f, 12f, 0, 1, 0))
			{
				if (!bLocal_103)
				{
					unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[3] = 1;
				}
			}
			else
			{
				iLocal_107[3] = 0;
			}
		}
	}
	else if (iLocal_51 == 5)
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 1565.045f, 2681.205f, 43.50552f, 1529.915f, 2586.427f, 56.52686f, 12f, 0, 1, 0))
			{
				if (!bLocal_103)
				{
					unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[4] = 1;
				}
			}
			else
			{
				iLocal_107[4] = 0;
			}
		}
	}
	else if (iLocal_51 == 6)
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 1645.169f, 2760.33f, 43.6705f, 1567.113f, 2682.905f, 56.39177f, 12f, 0, 1, 0))
			{
				if (!bLocal_103)
				{
					unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[5] = 1;
				}
			}
			else
			{
				iLocal_107[5] = 0;
			}
		}
	}
	else if (iLocal_51 == 7)
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 1772.306f, 2766.364f, 43.59126f, 1650.228f, 2761.691f, 56.53028f, 12f, 0, 1, 0))
			{
				if (!bLocal_103)
				{
					unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[6] = 1;
				}
			}
			else
			{
				iLocal_107[6] = 0;
			}
		}
	}
	else if (iLocal_51 == 8)
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0, 1, 0))
			{
				if (!bLocal_103)
				{
					unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[7] = 1;
				}
			}
			else
			{
				iLocal_107[7] = 0;
			}
		}
	}
	else if (iLocal_51 == 9)
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0, 1, 0))
			{
				if (!bLocal_103)
				{
					unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[8] = 1;
				}
			}
			else
			{
				iLocal_107[8] = 0;
			}
		}
	}
	else if (iLocal_51 == 10)
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 1829.468f, 2480.96f, 43.52237f, 1836.998f, 2566.856f, 60.35412f, 20.5f, 0, 1, 0))
			{
				if (!bLocal_103)
				{
					unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_107[9] = 1;
				}
			}
			else
			{
				iLocal_107[9] = 0;
			}
		}
	}
	iLocal_51++;
	if (iLocal_51 > 10)
	{
		iLocal_51 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (iLocal_107[iVar0])
			{
				bVar1 = true;
			}
			iVar0++;
		}
		if (!bVar1)
		{
			if (!bLocal_103)
			{
				unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0, 1);
				unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 1, 1);
			}
		}
	}
}

void func_5()
{
	struct<3> Var0;
	
	switch (iLocal_50)
	{
		case 0:
			unk_0x852EC2A7DE66202D(joaat("police3"));
			unk_0x852EC2A7DE66202D(joaat("s_m_y_cop_01"));
			if (unk_0x0CBB7C273DED26E7(joaat("police3")) && unk_0x0CBB7C273DED26E7(joaat("s_m_y_cop_01")))
			{
				iLocal_50++;
			}
			break;
		
		case 1:
			iLocal_124 = unk_0xABEEDBEF2BBDF5B3(joaat("police3"), 1797.785f, 2599.697f, 44.5769f, 269.6189f, 1, 1, 0);
			iLocal_126 = unk_0x4FA078B1B32445FD(iLocal_124, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			func_26(&iLocal_126);
			iLocal_50++;
			break;
		
		case 2:
			if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
			{
				Var0 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
			}
			if ((func_16(iLocal_126, iLocal_124, &Local_128, &uLocal_135, 0, 1, 0, 1, 1) || func_16(iLocal_127, iLocal_125, &Local_128, &uLocal_135, 0, 1, 0, 1, 1)) || (func_15(Var0, 4, 20, 0) && !unk_0xA87ECD5E2653C4A9(unk_0xC1A5EC5C986B98AD())))
			{
				unk_0xA5B75537953810FA(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 0, 0f, 50f, 0);
				unk_0xA5B75537953810FA(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 0, 0f, 50f, 0);
				if (!unk_0x055111B11E6624FD(iLocal_126, 0))
				{
					unk_0xCAC2B0C65B18E755(iLocal_126, unk_0xC1A5EC5C986B98AD(), 0, 16);
				}
				if (!func_14(&uLocal_136))
				{
					func_11(&uLocal_136);
				}
				iLocal_50++;
			}
			break;
		
		case 3:
			if (func_14(&uLocal_136))
			{
				if (func_8(&uLocal_136) > 15f)
				{
					iLocal_125 = unk_0xABEEDBEF2BBDF5B3(joaat("police3"), 1755.159f, 2614.456f, 44.5652f, 179.3394f, 1, 1, 0);
					iLocal_127 = unk_0x4FA078B1B32445FD(iLocal_125, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
					func_26(&iLocal_127);
					unk_0xCAC2B0C65B18E755(iLocal_127, unk_0xC1A5EC5C986B98AD(), 0, 16);
					iLocal_50++;
				}
				else if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0)
				{
					if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
					{
						Var0 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
					}
					if (func_7(1818.237f, 2604.927f, 44.57381f, Var0, 1125515264))
					{
						func_6();
						iLocal_50 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0)
			{
				if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
				{
					Var0 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
				}
				if (func_7(1818.237f, 2604.927f, 44.57381f, Var0, 1125515264))
				{
					func_6();
					iLocal_50 = 0;
				}
			}
			break;
	}
}

void func_6()
{
	if (unk_0x7DE17ACDD8BA2642(iLocal_124))
	{
		unk_0x2728CF7242F08BD5(&iLocal_124);
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_126))
	{
		unk_0xE9C250FA35A936C8(&iLocal_126);
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_125))
	{
		unk_0x2728CF7242F08BD5(&iLocal_125);
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_127))
	{
		unk_0xE9C250FA35A936C8(&iLocal_127);
	}
}

int func_7(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (unk_0xB7A628320EFF8E47(Param0, Param3) < (fParam6 * fParam6))
	{
		if (((unk_0x7DE17ACDD8BA2642(iLocal_124) && unk_0x7DE17ACDD8BA2642(iLocal_126)) && unk_0x7DE17ACDD8BA2642(iLocal_125)) && unk_0x7DE17ACDD8BA2642(iLocal_127))
		{
			if (unk_0xDB08595445CDE2FF(iLocal_124) || !unk_0x865259F0333CAA4B(iLocal_124))
			{
				if (unk_0xDB08595445CDE2FF(iLocal_126) || !unk_0x865259F0333CAA4B(iLocal_126))
				{
					if (unk_0xDB08595445CDE2FF(iLocal_125) || !unk_0x865259F0333CAA4B(iLocal_125))
					{
						if (unk_0xDB08595445CDE2FF(iLocal_127) || !unk_0x865259F0333CAA4B(iLocal_127))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	else if (unk_0xB7A628320EFF8E47(Param0, Param3) > 62500f)
	{
		return 1;
	}
	return 0;
}

float func_8(var uParam0)
{
	if (func_14(uParam0))
	{
		if (func_10(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_9(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_9(bool bParam0)
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

bool func_10(var uParam0)
{
	return BitTest(*uParam0, 2);
}

void func_11(var uParam0)
{
	if (!func_14(uParam0))
	{
		func_12(uParam0);
	}
}

void func_12(var uParam0)
{
	func_13(uParam0, 0f);
}

void func_13(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_9(BitTest(*uParam0, 4)) - fParam1);
	unk_0xECDAB41968FF21A8(uParam0, 1);
	unk_0x061B1200C95204CB(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_14(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_15(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 140f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0x9E76D45F14E2C578(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_16(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xC1A5EC5C986B98AD();
	if (!unk_0x055111B11E6624FD(iVar0, 0) && !unk_0x055111B11E6624FD(iParam0, 0))
	{
		if (!func_25(*uParam2, 1))
		{
			if (func_24(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_25(*uParam2, 2))
		{
			if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_25(*uParam2, 4))
		{
			if (func_22(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_25(*uParam2, 8))
		{
			if (func_21(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_25(*uParam2, 128);
		if (bParam4)
		{
			if (func_17(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_25(*uParam2, 16))
		{
			if (func_17(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
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

int func_17(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_45)
		{
			iLocal_46 = unk_0x2935B4D6CE81318D(iParam0);
			bLocal_45 = true;
		}
		iLocal_47 = unk_0x2935B4D6CE81318D(iParam0);
		iLocal_48 = (iLocal_46 - iLocal_47);
		uVar0 = unk_0xE475C458F52F1781();
		if (!unk_0x055111B11E6624FD(uVar0, 0))
		{
			if (unk_0x7559C38E6535AB89(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_45)
		{
			if (unk_0x7559C38E6535AB89(iParam0, unk_0xC1A5EC5C986B98AD(), 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
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
	if (func_20(unk_0xC1A5EC5C986B98AD(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x48A4D45B3B4CEFFD(iParam0) && func_18(iParam0, 1) < 1.5f)
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

float func_18(int iParam0, int iParam1)
{
	return func_19(unk_0xF2CFBB1105511E1A(unk_0x5DC3DCA82C806319()), iParam0, iParam1);
}

float func_19(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x055111B11E6624FD(uParam0, 0))
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 0) };
	}
	if (!unk_0x055111B11E6624FD(uParam1, 0))
	{
		Var3 = { unk_0x30BE8A934C020461(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x30BE8A934C020461(iParam1, 0) };
	}
	return unk_0x2E496FE654DA4166(Var0, Var3, iParam2);
}

int func_20(int iParam0, int iParam1)
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

int func_21(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x2D1125ABF6C8F8C4(uParam0, 4))
	{
		if (unk_0x110D030CCD4E83A6(uParam0) && !unk_0x7B783B62D5123CC7(iParam0))
		{
			if (unk_0x1C4E4DC1EFE24DF1(uParam1, unk_0x30BE8A934C020461(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_22(int iParam0, int iParam1, var uParam2, bool bParam3)
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
			if (unk_0x197DD015F81B0D16(iParam0) || func_23(iVar3))
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

int func_23(int iParam0)
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
						if (func_19(unk_0xC1A5EC5C986B98AD(), iParam0, 1) < 40f)
						{
							if (unk_0x005E10EF94E1E6A5(unk_0x93E99A2DBCBA9CFA(), &uVar1))
							{
								if ((unk_0xA6B591D40DE982B5(uVar1) && unk_0x4DFB7A1A6909D574(uVar1) == iParam0) || (unk_0x71904BD37B848CAF(uVar1) && unk_0x9C8D7679C15E75FF(uVar1) == unk_0xA66E176E5772E965(iParam0, -1, 0)))
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

int func_24(int iParam0, var uParam1)
{
	if (!unk_0x055111B11E6624FD(uParam0, 0))
	{
		if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
		{
			if (unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), iParam0) || unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iParam0))
			{
				if (unk_0xD495130AEF425591(iParam0, unk_0xC1A5EC5C986B98AD(), 90f))
				{
					if (func_18(iParam0, 1) < uParam1->f_2)
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

bool func_25(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_26(int iParam0)
{
	unk_0xCBDC2B59922F92C3(*iParam0, joaat("weapon_assaultshotgun"), -1, 0, 1);
	unk_0xC5B2830898581862(*iParam0, 1);
	unk_0x7FE5E05BE63F6CB8(*iParam0, 13, 1);
	unk_0x7FE5E05BE63F6CB8(*iParam0, 0, 1);
	unk_0xCBFBAAA14CB00CB2(*iParam0, 1);
	unk_0x8F758E95FCF28E36(*iParam0, 1);
	unk_0x9E15499819214624(*iParam0, 0f);
	unk_0x71A535529C1CA5DF(*iParam0, 1);
	unk_0x55B25C3B4CEEEF4B(*iParam0, 100);
	unk_0x857E9EFB607AD64E(*iParam0, 2);
	unk_0x7FE5E05BE63F6CB8(*iParam0, 23, 0);
	unk_0xEA1F0CBFFACFA528(*iParam0, 1000f);
	unk_0x7FE5E05BE63F6CB8(*iParam0, 1, 1);
}

void func_27()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (bLocal_574)
	{
		if (!unk_0x055111B11E6624FD(iLocal_569, 0))
		{
			if (!unk_0xA005AFE85A66532E(iLocal_569))
			{
				unk_0x900E2CFB61F6D92B(iLocal_569, 101, "PrisonHeli", 1);
			}
			if (!unk_0x055111B11E6624FD(iLocal_570, 0))
			{
				Var0 = { unk_0x7394CB479CCA24AF(iLocal_570, 0f, 4f, -2f) };
				unk_0xCFA476EB0CFFBDCB(iLocal_570, Var0);
			}
			if (bLocal_572)
			{
				if (!func_28())
				{
					bLocal_572 = false;
					unk_0x81FD2D064338B6D6(iLocal_569, 0, 0);
				}
			}
			else if (func_28())
			{
				bLocal_572 = true;
				unk_0x81FD2D064338B6D6(iLocal_569, 1, 0);
			}
			if (bLocal_572)
			{
				Var3 = { unk_0x30BE8A934C020461(iLocal_569, 1) };
				if (unk_0xB7A628320EFF8E47(Local_312, Var3) < 90000f)
				{
					if (!iLocal_573)
					{
						iLocal_573 = 1;
					}
				}
			}
		}
		else if (unk_0xCE4AAA035282336C(uLocal_571))
		{
			unk_0x45533C09A6C9B409(&uLocal_571);
		}
	}
}

int func_28()
{
	if (unk_0x30DFE1FFD2CC7420() >= 20 || unk_0x30DFE1FFD2CC7420() < 6)
	{
		return 1;
	}
	return 0;
}

void func_29()
{
	int iVar0;
	struct<3> Var1;
	
	if (!Local_629.f_18[0])
	{
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			Var1 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
		}
		if (!bLocal_106)
		{
			if (unk_0xB7A628320EFF8E47(Var1, Local_625) < 5625f)
			{
				iLocal_628 = 1;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x66599E73DBA5A850(Local_629.f_27[iVar0]))
		{
			if (!Local_629.f_18[iVar0])
			{
				if (func_16(Local_629.f_27[iVar0], 0, &Local_128, &uLocal_135, 1, 1, 0, 1, 1) || iLocal_628)
				{
					unk_0xCAC2B0C65B18E755(Local_629.f_27[iVar0], unk_0xC1A5EC5C986B98AD(), 0, 16);
					Local_629.f_18[iVar0] = 1;
				}
			}
			if (!Local_629.f_18[iVar0])
			{
				if (!unk_0xD54C3B2BA253FFF1(Local_629.f_27[iVar0]))
				{
					unk_0x5B1D23BB00E75286(Local_629.f_27[iVar0], Local_629.f_14[iVar0], 0, 0, -1);
				}
			}
		}
		else if (unk_0xCE4AAA035282336C(Local_629.f_36[iVar0]))
		{
			unk_0x45533C09A6C9B409(&(Local_629.f_36[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x7DE17ACDD8BA2642(Local_629.f_31[iVar0]))
		{
			if (unk_0x66599E73DBA5A850(Local_629.f_31[iVar0]))
			{
				if (unk_0xCE4AAA035282336C(Local_629.f_40[iVar0]))
				{
					unk_0x45533C09A6C9B409(&(Local_629.f_40[iVar0]));
				}
			}
		}
		iVar0++;
	}
	if (!Local_629.f_22[0])
	{
		if (!unk_0x66599E73DBA5A850(Local_629.f_31[0]))
		{
			if ((func_16(Local_629.f_31[0], 0, &Local_128, &uLocal_135, 1, 1, 0, 1, 1) || Local_629.f_18[1] == 1) || iLocal_628)
			{
				unk_0x909F139DC199D8E0(Local_629.f_31[0]);
				unk_0xCAC2B0C65B18E755(Local_629.f_31[0], unk_0xC1A5EC5C986B98AD(), 0, 16);
				Local_629.f_22[0] = 1;
			}
		}
	}
	if (!Local_629.f_22[1])
	{
		if (!unk_0x66599E73DBA5A850(Local_629.f_31[1]))
		{
			if ((func_16(Local_629.f_31[1], 0, &Local_128, &uLocal_135, 0, 1, 0, 1, 1) || Local_629.f_18[1] == 1) || iLocal_628)
			{
				unk_0x909F139DC199D8E0(Local_629.f_31[1]);
				unk_0xCAC2B0C65B18E755(Local_629.f_31[1], unk_0xC1A5EC5C986B98AD(), 0, 16);
				Local_629.f_22[1] = 1;
			}
		}
	}
	if (!Local_629.f_22[2])
	{
		if (!unk_0x66599E73DBA5A850(Local_629.f_31[2]))
		{
			if ((func_16(Local_629.f_31[2], 0, &Local_128, &uLocal_135, 0, 1, 0, 1, 1) || Local_629.f_18[2] == 1) || iLocal_628)
			{
				unk_0x909F139DC199D8E0(Local_629.f_31[2]);
				unk_0xCAC2B0C65B18E755(Local_629.f_31[2], unk_0xC1A5EC5C986B98AD(), 0, 16);
				Local_629.f_22[2] = 1;
			}
		}
	}
	if (!Local_629.f_22[3])
	{
		if (!unk_0x66599E73DBA5A850(Local_629.f_31[3]))
		{
			if ((func_16(Local_629.f_31[3], 0, &Local_128, &uLocal_135, 0, 1, 0, 1, 1) || Local_629.f_18[2] == 1) || iLocal_628)
			{
				unk_0x909F139DC199D8E0(Local_629.f_31[3]);
				unk_0xCAC2B0C65B18E755(Local_629.f_31[3], unk_0xC1A5EC5C986B98AD(), 0, 16);
				Local_629.f_22[3] = 1;
			}
		}
	}
	if (!unk_0x66599E73DBA5A850(Local_629.f_27[1]))
	{
		if (unk_0xD54C3B2BA253FFF1(Local_629.f_27[1]))
		{
			if (!Local_629.f_22[0])
			{
				if (!unk_0x66599E73DBA5A850(Local_629.f_31[0]))
				{
					unk_0xCF2A28DE0B1118AA(Local_629.f_31[0], Local_629.f_27[1], -2f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
			if (!Local_629.f_22[1])
			{
				if (!unk_0x66599E73DBA5A850(Local_629.f_31[1]))
				{
					unk_0xCF2A28DE0B1118AA(Local_629.f_31[1], Local_629.f_27[1], -1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
		}
	}
	if (!unk_0x66599E73DBA5A850(Local_629.f_27[2]))
	{
		if (unk_0xD54C3B2BA253FFF1(Local_629.f_27[2]))
		{
			if (!Local_629.f_22[2])
			{
				if (!unk_0x66599E73DBA5A850(Local_629.f_31[2]))
				{
					unk_0xCF2A28DE0B1118AA(Local_629.f_31[2], Local_629.f_27[2], 1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
			if (!Local_629.f_22[3])
			{
				if (!unk_0x66599E73DBA5A850(Local_629.f_31[3]))
				{
					unk_0xCF2A28DE0B1118AA(Local_629.f_31[3], Local_629.f_27[2], -1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
		}
	}
}

void func_30()
{
	int iVar0;
	struct<3> Var1;
	
	iLocal_419++;
	if (iLocal_419 >= 30)
	{
		if (!bLocal_106)
		{
			if (func_15(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 4, 100, 0))
			{
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (unk_0x7DE17ACDD8BA2642(Local_318.f_64[iVar0]) && !unk_0x66599E73DBA5A850(Local_318.f_64[iVar0]))
					{
						if (unk_0x76781CF4D4ED46C9(unk_0xC1A5EC5C986B98AD()) != -1)
						{
							if (unk_0x76781CF4D4ED46C9(unk_0xC1A5EC5C986B98AD()) == 1 || unk_0x76781CF4D4ED46C9(unk_0xC1A5EC5C986B98AD()) == 2)
							{
								unk_0x55B25C3B4CEEEF4B(Local_318.f_64[iVar0], 10);
								iLocal_418 = 1;
							}
						}
						else if (unk_0xA87ECD5E2653C4A9(unk_0xC1A5EC5C986B98AD()))
						{
							unk_0x55B25C3B4CEEEF4B(Local_318.f_64[iVar0], 10);
							iLocal_418 = 1;
						}
						else
						{
							unk_0x55B25C3B4CEEEF4B(Local_318.f_64[iVar0], 100);
							iLocal_418 = 1;
						}
					}
					iVar0++;
				}
			}
			else
			{
				iLocal_418 = 0;
			}
		}
		iLocal_419 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x7DE17ACDD8BA2642(Local_318.f_64[iVar0]) && !unk_0x66599E73DBA5A850(Local_318.f_64[iVar0]))
		{
			if (unk_0xF356C80F3E8D2812(unk_0x5DC3DCA82C806319(), 0))
			{
				unk_0x8CB2000285DDE093(unk_0x93E99A2DBCBA9CFA());
			}
			if ((((func_16(Local_318.f_64[iVar0], 0, &Local_128, &uLocal_135, 0, 1, 0, 1, 1) || unk_0x612907CF3208D1E3(Local_318[iVar0 /*3*/], 20f, 1)) || unk_0x7A21BB0B3F87546F(Local_318[iVar0 /*3*/] - Vector(20f, 20f, 20f), Local_318[iVar0 /*3*/] + Vector(20f, 20f, 20f))) || iLocal_418) || func_32(&(Local_318.f_64[iVar0])))
			{
				if (!func_2(5))
				{
					if (unk_0xA87ECD5E2653C4A9(unk_0xC1A5EC5C986B98AD()))
					{
						if (bLocal_119)
						{
							func_31(iVar0);
						}
					}
					else
					{
						func_31(iVar0);
					}
				}
			}
			else if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0)
			{
				if (!unk_0xD54C3B2BA253FFF1(Local_318.f_64[iVar0]))
				{
					unk_0x5B1D23BB00E75286(Local_318.f_64[iVar0], Local_318.f_42[iVar0], 0, 0, -1);
					Local_318.f_53[iVar0] = 0;
				}
			}
		}
		else if (unk_0xCE4AAA035282336C(Local_318.f_75[iVar0]))
		{
			unk_0x45533C09A6C9B409(&(Local_318.f_75[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (((unk_0x7DE17ACDD8BA2642(uLocal_408[iVar0]) && !unk_0x055111B11E6624FD(uLocal_408[iVar0], 0)) && unk_0x7DE17ACDD8BA2642(uLocal_404[iVar0])) && !unk_0x055111B11E6624FD(uLocal_404[iVar0], 0))
		{
			Var1 = { unk_0x7394CB479CCA24AF(uLocal_408[iVar0], 0f, 3.5f, -2f) };
			unk_0xCFA476EB0CFFBDCB(uLocal_408[iVar0], Var1);
			unk_0xC8EE2E23B410B65A(uLocal_404[iVar0], 0, 0, 0);
			if (iLocal_412[iVar0])
			{
				if (!func_28())
				{
					if (!unk_0x055111B11E6624FD(uLocal_404[iVar0], 0))
					{
						iLocal_412[iVar0] = 0;
						unk_0x81FD2D064338B6D6(uLocal_404[iVar0], 0, 0);
					}
				}
			}
			else if (func_28())
			{
				if (!unk_0x055111B11E6624FD(uLocal_404[iVar0], 0))
				{
					iLocal_412[iVar0] = 1;
					unk_0x81FD2D064338B6D6(uLocal_404[iVar0], 1, 0);
				}
			}
		}
		iVar0++;
	}
	if (fLocal_416 > 20f)
	{
		bLocal_417 = false;
	}
	else if (fLocal_416 < -20f)
	{
		bLocal_417 = true;
	}
	if (bLocal_417)
	{
		fLocal_416 = (fLocal_416 + 0.25f);
	}
	else
	{
		fLocal_416 = (fLocal_416 - 0.25f);
	}
	if (unk_0x7DE17ACDD8BA2642(uLocal_404[0]))
	{
		unk_0x692C3FDAD7DB53CC(uLocal_404[0], (53f + fLocal_416));
	}
	if (unk_0x7DE17ACDD8BA2642(uLocal_404[1]))
	{
		unk_0x692C3FDAD7DB53CC(uLocal_404[1], (13f + fLocal_416));
	}
	if (unk_0x7DE17ACDD8BA2642(uLocal_404[2]))
	{
		unk_0x692C3FDAD7DB53CC(uLocal_404[2], (250f + fLocal_416));
	}
}

void func_31(int iParam0)
{
	if (!Local_318.f_53[iParam0])
	{
		unk_0x3EFB5DE67FDF106B(Local_318.f_64[iParam0], unk_0xC1A5EC5C986B98AD(), -1, 0);
		unk_0xEA1F0CBFFACFA528(Local_318.f_64[iParam0], 1000f);
		unk_0xF0654A614CC902C9(Local_318.f_64[iParam0]);
		Local_318.f_53[iParam0] = 1;
		if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0)
		{
			unk_0x8FE445B0989D8C71(unk_0x93E99A2DBCBA9CFA(), 3, 0);
			unk_0x6CDFCA6843DA90FF(unk_0x93E99A2DBCBA9CFA(), 0);
		}
	}
}

int func_32(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		Var0 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
	}
	if (!unk_0x055111B11E6624FD(*uParam0, 0))
	{
		Var3 = { unk_0x30BE8A934C020461(*uParam0, 1) };
	}
	if (unk_0xB7A628320EFF8E47(Var0, Var3) < 100f)
	{
		return 1;
	}
	return 0;
}

void func_33()
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) >= 2 || func_15(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 4, 150, 0))
		{
			if (unk_0xBC06EF0E9FFE57DC("PRISON_ALARMS"))
			{
				unk_0x576514F534C15D4F("PRISON_ALARMS", 0);
			}
		}
		else
		{
			unk_0xC7F65BCF0795860F("PRISON_ALARMS", 0);
		}
	}
}

void func_34()
{
	struct<3> Var0;
	
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 1840.23f, 2471.49f, 41.94113f, 1840.553f, 2751.983f, 54.68177f, 84.25f, 0, 1, 0))
		{
			func_63(&Local_128, 2);
		}
		else
		{
			func_61(&Local_128, 2);
		}
	}
	if (iLocal_49 > 20)
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			Var0 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
			if (unk_0xA87ECD5E2653C4A9(unk_0xC1A5EC5C986B98AD()))
			{
				if (func_15(Var0, 4, 150, 0))
				{
					func_60(4, 1);
					if (!func_14(&uLocal_142))
					{
						func_11(&uLocal_142);
					}
					if (!bLocal_118)
					{
						if (unk_0x7DE17ACDD8BA2642(iLocal_126) && !unk_0x055111B11E6624FD(iLocal_126, 0))
						{
							func_59(&uLocal_145, 8, iLocal_126, "TANNOY", 0, 1);
							if (func_37(&uLocal_145, "FH1AUD", "FH1_TANNOY", 8, 0, 0, 0))
							{
								bLocal_106 = true;
								bLocal_118 = true;
							}
						}
					}
				}
				else
				{
					func_60(4, 0);
					if (func_14(&uLocal_142))
					{
						func_12(&uLocal_142);
					}
					bLocal_106 = false;
				}
			}
			else
			{
				func_60(4, 0);
				if (func_14(&uLocal_142))
				{
					func_12(&uLocal_142);
				}
				bLocal_106 = false;
			}
			if (bLocal_106)
			{
				if (func_14(&uLocal_142))
				{
					if (func_8(&uLocal_142) > 10f)
					{
						if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) < 4)
						{
							unk_0x8FE445B0989D8C71(unk_0x93E99A2DBCBA9CFA(), 4, 0);
							unk_0x6CDFCA6843DA90FF(unk_0x93E99A2DBCBA9CFA(), 0);
							bLocal_119 = true;
							bLocal_106 = false;
							func_60(4, 0);
						}
					}
				}
			}
			if (!bLocal_103)
			{
				if (bLocal_118)
				{
					if (!func_36())
					{
						if (unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
						{
							unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							bLocal_103 = true;
						}
					}
				}
				else if (unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
				{
					unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
					bLocal_103 = true;
				}
			}
			if (!bLocal_106)
			{
				if (func_15(Var0, 4, 100, 0))
				{
					if (!bLocal_103)
					{
						if (bLocal_118)
						{
							if (!func_36())
							{
								unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
								unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
								bLocal_103 = true;
							}
						}
						else
						{
							unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							unk_0x2CAAD284A597AC03("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							bLocal_103 = true;
						}
					}
					func_35();
				}
			}
			iLocal_49 = 0;
		}
	}
	iLocal_49++;
}

void func_35()
{
	int iVar0;
	
	if (!iLocal_102)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uLocal_52[iVar0] = unk_0xCE17E20C49A29678(Local_65[iVar0 /*3*/], 10f, 10f, 10f, 0f, 0, 7);
			iVar0++;
		}
		iLocal_102 = 1;
	}
}

int func_36()
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
	{
		return 1;
	}
	return 0;
}

bool func_37(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_58(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_38(sParam2, iParam3, 0);
}

int func_38(char* sParam0, int iParam1, bool bParam2)
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
					func_57();
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
		if (func_56(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_55();
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
				func_48();
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
				if (func_47())
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
			if (func_46())
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
			func_45();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_44();
		func_39();
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
		func_57();
	}
	return 0;
}

void func_39()
{
	if (!func_40())
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

int func_40()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_43())
	{
		return 0;
	}
	if (func_41(unk_0x93E99A2DBCBA9CFA()))
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

bool func_41(int iParam0)
{
	return func_42(iParam0, 20);
}

var func_42(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_43()
{
	return -1;
}

void func_44()
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

void func_45()
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

int func_46()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_47()
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

void func_48()
{
	if (func_2(14))
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
		Global_20383 = func_49();
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

var func_49()
{
	func_50();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_50()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_53(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_52(unk_0xC1A5EC5C986B98AD());
			if (func_51(iVar0) && (!func_2(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_51(Global_113648.f_2365.f_539.f_4321))
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

bool func_51(int iParam0)
{
	return iParam0 < 3;
}

int func_52(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_53(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_53(int iParam0)
{
	if (func_51(iParam0))
	{
		return func_54(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_54(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_55()
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

bool func_56(int iParam0, int iParam1)
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

void func_57()
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

void func_58(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_59(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_60(int iParam0, int iParam1)
{
	unk_0xECDAB41968FF21A8(&Global_32323, iParam0);
	StringCopy(&(Global_32324[iParam0 /*6*/]), unk_0x688846D56810779A(), 24);
	Global_32379[iParam0] = iParam1;
}

void func_61(var uParam0, int iParam1)
{
	func_62(uParam0, iParam1);
}

void func_62(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_63(var uParam0, int iParam1)
{
	func_64(uParam0, iParam1);
}

void func_64(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_65()
{
	unk_0xE0A291F406691F03(joaat("s_m_m_security_01"));
	unk_0xE0A291F406691F03(joaat("s_m_m_prisguard_01"));
}

void func_66()
{
	func_68();
	func_67();
}

void func_67()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x7DE17ACDD8BA2642(Local_629.f_27[iVar0]) && !unk_0x055111B11E6624FD(Local_629.f_27[iVar0], 0))
		{
			unk_0xCBDC2B59922F92C3(Local_629.f_27[iVar0], joaat("weapon_assaultrifle"), -1, 1, 1);
			unk_0x73562E6072D7A39D(Local_629.f_27[iVar0], 1000);
			unk_0x8386356641D0DED1(Local_629.f_27[iVar0], -183807561);
			unk_0x627B62B04769B4B4(Local_629.f_27[iVar0], 0);
			unk_0xC5B2830898581862(Local_629.f_27[iVar0], 1);
			if (!unk_0x66599E73DBA5A850(Local_629.f_27[iVar0]))
			{
				unk_0x5B1D23BB00E75286(Local_629.f_27[iVar0], Local_629.f_14[iVar0], 0, 0, -1);
			}
		}
		iVar0++;
	}
}

void func_68()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x7DE17ACDD8BA2642(Local_629.f_27[iVar0]))
		{
			Local_629.f_27[iVar0] = unk_0x69FDD9508259E5B5(6, joaat("s_m_m_prisguard_01"), Local_629[iVar0 /*3*/], Local_629.f_10[iVar0], 1, 1);
			unk_0x4EDE34FBADD967A6(0);
		}
		iVar0++;
	}
	Var1 = { unk_0xF2A6E8EA57F9D501(Local_629[1 /*3*/], Local_629.f_10[1], -2f, 0f, 0f) };
	Var4 = { unk_0xF2A6E8EA57F9D501(Local_629[1 /*3*/], Local_629.f_10[1], -1f, 0f, 0f) };
	Var7 = { unk_0xF2A6E8EA57F9D501(Local_629[2 /*3*/], Local_629.f_10[2], 1f, 0f, 0f) };
	Var10 = { unk_0xF2A6E8EA57F9D501(Local_629[2 /*3*/], Local_629.f_10[2], -1f, 0f, 0f) };
	Local_629.f_31[0] = unk_0x69FDD9508259E5B5(6, joaat("s_m_m_prisguard_01"), Var1, Local_629.f_10[1], 1, 1);
	Local_629.f_31[1] = unk_0x69FDD9508259E5B5(6, joaat("s_m_m_prisguard_01"), Var4, Local_629.f_10[1], 1, 1);
	Local_629.f_31[2] = unk_0x69FDD9508259E5B5(6, joaat("s_m_m_prisguard_01"), Var7, Local_629.f_10[2], 1, 1);
	Local_629.f_31[3] = unk_0x69FDD9508259E5B5(6, joaat("s_m_m_prisguard_01"), Var10, Local_629.f_10[2], 1, 1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x7DE17ACDD8BA2642(Local_629.f_31[iVar0]))
		{
			unk_0xCBDC2B59922F92C3(Local_629.f_31[iVar0], joaat("weapon_assaultrifle"), -1, 1, 1);
			unk_0x73562E6072D7A39D(Local_629.f_31[iVar0], 500);
			unk_0x8386356641D0DED1(Local_629.f_31[iVar0], -183807561);
			unk_0x1FA97580E420B7BB(Local_629.f_31[iVar0], 0);
			unk_0xC5B2830898581862(Local_629.f_31[iVar0], 1);
		}
		iVar0++;
	}
	unk_0xE0A291F406691F03(joaat("s_m_m_prisguard_01"));
}

void func_69()
{
	if (bLocal_574)
	{
		iLocal_569 = unk_0xABEEDBEF2BBDF5B3(joaat("polmav"), 10f, 10f, -30f, 0f, 1, 1, 0);
		unk_0xC8EE2E23B410B65A(iLocal_569, 1, 1, 0);
		unk_0xD1AD77A7D621DF91(iLocal_569);
		unk_0x38B05AC704C5FCB8(iLocal_569, 0f, 0f, 10f);
		unk_0x73562E6072D7A39D(iLocal_569, 500);
		if (func_28())
		{
			bLocal_572 = true;
			unk_0x81FD2D064338B6D6(iLocal_569, 1, 0);
		}
		iLocal_570 = unk_0x69FDD9508259E5B5(6, joaat("s_m_m_prisguard_01"), 10f, 10f, -20f, 0f, 1, 1);
		unk_0x4C18E9202CF6CACA(iLocal_570, iLocal_569, -1);
		if (!unk_0x055111B11E6624FD(iLocal_569, 0))
		{
			unk_0x900E2CFB61F6D92B(iLocal_569, 101, "PrisonHeli", 1);
		}
		unk_0xE0A291F406691F03(joaat("polmav"));
	}
}

void func_70()
{
	func_75();
	func_74();
	func_73();
	func_72();
	func_71();
}

void func_71()
{
	Local_420[0 /*13*/][0 /*3*/] = { 1827.69f, 2474.181f, 61.7202f };
	Local_420[0 /*13*/][1 /*3*/] = { 1826.054f, 2478.934f, 61.7157f };
	Local_420[0 /*13*/][2 /*3*/] = { 1820.909f, 2477.528f, 61.7153f };
	Local_420[0 /*13*/][3 /*3*/] = { 1822.585f, 2472.122f, 61.7167f };
	unk_0xD3D4BE06B26F4354("miss_Tower_01");
	unk_0x510CCF862C2C7584(0, "WORLD_HUMAN_GUARD_STAND", Local_420[0 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(1, "WORLD_HUMAN_GUARD_STAND", Local_420[0 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(2, "WORLD_HUMAN_GUARD_STAND", Local_420[0 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(3, "WORLD_HUMAN_GUARD_STAND", Local_420[0 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x4F3769FAEA551796(0, 1);
	unk_0x4F3769FAEA551796(1, 2);
	unk_0x4F3769FAEA551796(2, 3);
	unk_0x4F3769FAEA551796(3, 0);
	unk_0x16E471C72D71DD8D();
	unk_0x9C08423CC22056BC();
	Local_420[1 /*13*/][0 /*3*/] = { 1764.729f, 2409.139f, 61.7533f };
	Local_420[1 /*13*/][1 /*3*/] = { 1763.129f, 2413.976f, 61.7328f };
	Local_420[1 /*13*/][2 /*3*/] = { 1758.079f, 2411.984f, 61.7403f };
	Local_420[1 /*13*/][3 /*3*/] = { 1760.213f, 2406.827f, 61.7419f };
	unk_0xD3D4BE06B26F4354("miss_Tower_02");
	unk_0x510CCF862C2C7584(0, "WORLD_HUMAN_GUARD_STAND", Local_420[1 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(1, "WORLD_HUMAN_GUARD_STAND", Local_420[1 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(2, "WORLD_HUMAN_GUARD_STAND", Local_420[1 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(3, "WORLD_HUMAN_GUARD_STAND", Local_420[1 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x4F3769FAEA551796(0, 1);
	unk_0x4F3769FAEA551796(1, 2);
	unk_0x4F3769FAEA551796(2, 3);
	unk_0x4F3769FAEA551796(3, 0);
	unk_0x16E471C72D71DD8D();
	unk_0x9C08423CC22056BC();
	Local_420[2 /*13*/][0 /*3*/] = { 1658.829f, 2390.888f, 61.7462f };
	Local_420[2 /*13*/][1 /*3*/] = { 1662.521f, 2394.692f, 61.7532f };
	Local_420[2 /*13*/][2 /*3*/] = { 1658.854f, 2398.062f, 61.7573f };
	Local_420[2 /*13*/][3 /*3*/] = { 1655.15f, 2394.705f, 61.7429f };
	unk_0xD3D4BE06B26F4354("miss_Tower_03");
	unk_0x510CCF862C2C7584(0, "WORLD_HUMAN_GUARD_STAND", Local_420[2 /*13*/][0 /*3*/], 1655.908f, 2349.021f, 55.1775f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(1, "WORLD_HUMAN_GUARD_STAND", Local_420[2 /*13*/][1 /*3*/], 1733.875f, 2385.521f, 44.9049f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(2, "WORLD_HUMAN_GUARD_STAND", Local_420[2 /*13*/][2 /*3*/], 1662.234f, 2446.357f, 44.5652f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(3, "WORLD_HUMAN_GUARD_STAND", Local_420[2 /*13*/][3 /*3*/], 1524.631f, 2426.997f, 44.6212f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x4F3769FAEA551796(0, 1);
	unk_0x4F3769FAEA551796(1, 2);
	unk_0x4F3769FAEA551796(2, 3);
	unk_0x4F3769FAEA551796(3, 0);
	unk_0x16E471C72D71DD8D();
	unk_0x9C08423CC22056BC();
	Local_420[3 /*13*/][0 /*3*/] = { 1537.28f, 2468.338f, 61.7497f };
	Local_420[3 /*13*/][1 /*3*/] = { 1542.189f, 2465.756f, 61.7247f };
	Local_420[3 /*13*/][2 /*3*/] = { 1543.899f, 2470.971f, 61.7482f };
	Local_420[3 /*13*/][3 /*3*/] = { 1539.14f, 2473.264f, 61.7359f };
	unk_0xD3D4BE06B26F4354("miss_Tower_04");
	unk_0x510CCF862C2C7584(0, "WORLD_HUMAN_GUARD_STAND", Local_420[3 /*13*/][0 /*3*/], 1455.081f, 2432.642f, 51.3366f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(1, "WORLD_HUMAN_GUARD_STAND", Local_420[3 /*13*/][1 /*3*/], 1576.174f, 2407.076f, 44.8143f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(2, "WORLD_HUMAN_GUARD_STAND", Local_420[3 /*13*/][2 /*3*/], 1578.1f, 2486.227f, 44.5655f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(3, "WORLD_HUMAN_GUARD_STAND", Local_420[3 /*13*/][3 /*3*/], 1512.837f, 2560.419f, 44.8417f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x4F3769FAEA551796(0, 1);
	unk_0x4F3769FAEA551796(1, 2);
	unk_0x4F3769FAEA551796(2, 3);
	unk_0x4F3769FAEA551796(3, 0);
	unk_0x16E471C72D71DD8D();
	unk_0x9C08423CC22056BC();
	Local_420[4 /*13*/][0 /*3*/] = { 1535.098f, 2581.919f, 61.7312f };
	Local_420[4 /*13*/][1 /*3*/] = { 1535.124f, 2581.101f, 61.7002f };
	Local_420[4 /*13*/][2 /*3*/] = { 1538.325f, 2585.722f, 61.7251f };
	Local_420[4 /*13*/][3 /*3*/] = { 1534.679f, 2589.268f, 61.7123f };
	unk_0xD3D4BE06B26F4354("miss_Tower_05");
	unk_0x510CCF862C2C7584(0, "WORLD_HUMAN_GUARD_STAND", Local_420[4 /*13*/][0 /*3*/], 1484.2f, 2584.409f, 51.9283f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(1, "WORLD_HUMAN_GUARD_STAND", Local_420[4 /*13*/][1 /*3*/], 1535.154f, 2538.926f, 44.496f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(2, "WORLD_HUMAN_GUARD_STAND", Local_420[4 /*13*/][2 /*3*/], 1570.661f, 2587.814f, 44.5655f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(3, "WORLD_HUMAN_GUARD_STAND", Local_420[4 /*13*/][3 /*3*/], 1538.227f, 2655.531f, 44.9156f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x4F3769FAEA551796(0, 1);
	unk_0x4F3769FAEA551796(1, 2);
	unk_0x4F3769FAEA551796(2, 3);
	unk_0x4F3769FAEA551796(3, 0);
	unk_0x16E471C72D71DD8D();
	unk_0x9C08423CC22056BC();
	Local_420[5 /*13*/][0 /*3*/] = { 1566.921f, 2682.525f, 61.7716f };
	Local_420[5 /*13*/][1 /*3*/] = { 1567.927f, 2677.463f, 61.7741f };
	Local_420[5 /*13*/][2 /*3*/] = { 1572.574f, 2678.193f, 61.7702f };
	Local_420[5 /*13*/][3 /*3*/] = { 1572.359f, 2683.086f, 61.7664f };
	unk_0xD3D4BE06B26F4354("miss_Tower_06");
	unk_0x510CCF862C2C7584(0, "WORLD_HUMAN_GUARD_STAND", Local_420[5 /*13*/][0 /*3*/], 1505.538f, 2727.242f, 37.6965f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(1, "WORLD_HUMAN_GUARD_STAND", Local_420[5 /*13*/][1 /*3*/], 1545.95f, 2632.524f, 44.7178f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(2, "WORLD_HUMAN_GUARD_STAND", Local_420[5 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(3, "WORLD_HUMAN_GUARD_STAND", Local_420[5 /*13*/][3 /*3*/], 1599.041f, 2713.393f, 44.4309f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x4F3769FAEA551796(0, 1);
	unk_0x4F3769FAEA551796(1, 2);
	unk_0x4F3769FAEA551796(2, 3);
	unk_0x4F3769FAEA551796(3, 0);
	unk_0x16E471C72D71DD8D();
	unk_0x9C08423CC22056BC();
	Local_420[6 /*13*/][0 /*3*/] = { 1648.104f, 2761.528f, 61.9103f };
	Local_420[6 /*13*/][1 /*3*/] = { 1646.051f, 2756.671f, 61.9091f };
	Local_420[6 /*13*/][2 /*3*/] = { 1651.533f, 2754.668f, 61.9021f };
	Local_420[6 /*13*/][3 /*3*/] = { 1653.125f, 2759.327f, 61.9056f };
	unk_0xD3D4BE06B26F4354("miss_Tower_07");
	unk_0x510CCF862C2C7584(0, "WORLD_HUMAN_GUARD_STAND", Local_420[6 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(1, "WORLD_HUMAN_GUARD_STAND", Local_420[6 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(2, "WORLD_HUMAN_GUARD_STAND", Local_420[6 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(3, "WORLD_HUMAN_GUARD_STAND", Local_420[6 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x4F3769FAEA551796(0, 1);
	unk_0x4F3769FAEA551796(1, 2);
	unk_0x4F3769FAEA551796(2, 3);
	unk_0x4F3769FAEA551796(3, 0);
	unk_0x16E471C72D71DD8D();
	unk_0x9C08423CC22056BC();
	Local_420[7 /*13*/][0 /*3*/] = { 1774.523f, 2766.559f, 61.9143f };
	Local_420[7 /*13*/][1 /*3*/] = { 1769.768f, 2763.816f, 61.9248f };
	Local_420[7 /*13*/][2 /*3*/] = { 1772.442f, 2759.139f, 61.9193f };
	Local_420[7 /*13*/][3 /*3*/] = { 1776.893f, 2762.356f, 61.9258f };
	unk_0xD3D4BE06B26F4354("miss_Tower_08");
	unk_0x510CCF862C2C7584(0, "WORLD_HUMAN_GUARD_STAND", Local_420[7 /*13*/][0 /*3*/], 1783.204f, 2811.375f, 44.4414f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(1, "WORLD_HUMAN_GUARD_STAND", Local_420[7 /*13*/][1 /*3*/], 1709.275f, 2764.432f, 44.5747f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(2, "WORLD_HUMAN_GUARD_STAND", Local_420[7 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(3, "WORLD_HUMAN_GUARD_STAND", Local_420[7 /*13*/][3 /*3*/], 1822.456f, 2749.189f, 44.9326f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x4F3769FAEA551796(0, 1);
	unk_0x4F3769FAEA551796(1, 2);
	unk_0x4F3769FAEA551796(2, 3);
	unk_0x4F3769FAEA551796(3, 0);
	unk_0x16E471C72D71DD8D();
	unk_0x9C08423CC22056BC();
	Local_420[9 /*13*/][0 /*3*/] = { 1824.288f, 2625.042f, 61.9749f };
	Local_420[9 /*13*/][1 /*3*/] = { 1820.524f, 2621.49f, 61.9951f };
	Local_420[9 /*13*/][2 /*3*/] = { 1820.414f, 2621.544f, 61.9908f };
	Local_420[9 /*13*/][3 /*3*/] = { 1823.45f, 2617.477f, 61.9829f };
	unk_0xD3D4BE06B26F4354("miss_Tower_10");
	unk_0x510CCF862C2C7584(0, "WORLD_HUMAN_GUARD_STAND", Local_420[9 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(1, "WORLD_HUMAN_GUARD_STAND", Local_420[9 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(2, "WORLD_HUMAN_GUARD_STAND", Local_420[9 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x510CCF862C2C7584(3, "WORLD_HUMAN_GUARD_STAND", Local_420[9 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, unk_0x15A88CFAAFFC6C4B(5000, 10000));
	unk_0x4F3769FAEA551796(0, 1);
	unk_0x4F3769FAEA551796(1, 2);
	unk_0x4F3769FAEA551796(2, 3);
	unk_0x4F3769FAEA551796(3, 0);
	unk_0x16E471C72D71DD8D();
	unk_0x9C08423CC22056BC();
}

void func_72()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x7DE17ACDD8BA2642(Local_318.f_64[iVar0]) && !unk_0x055111B11E6624FD(Local_318.f_64[iVar0], 0))
		{
			unk_0x8386356641D0DED1(Local_318.f_64[iVar0], -183807561);
			unk_0x598D91BBD045C1F3(Local_318.f_64[iVar0], 132, 1);
			unk_0x5D9BB2F6626AA730(Local_318.f_64[iVar0], 300f, 10);
			unk_0xEA1F0CBFFACFA528(Local_318.f_64[iVar0], 1000f);
			unk_0x9581E8ED77D9BC46(Local_318.f_64[iVar0], 1000f);
			unk_0xF70E5B487D125DA0(Local_318.f_64[iVar0], 1000f);
			unk_0xE5069E489A2DE9E5(Local_318.f_64[iVar0], 2);
			unk_0x7FE5E05BE63F6CB8(Local_318.f_64[iVar0], 13, 1);
			unk_0x7FE5E05BE63F6CB8(Local_318.f_64[iVar0], 0, 0);
			unk_0xCBFBAAA14CB00CB2(Local_318.f_64[iVar0], 1);
			unk_0x8F758E95FCF28E36(Local_318.f_64[iVar0], 1);
			unk_0x9E15499819214624(Local_318.f_64[iVar0], 0f);
			unk_0x71A535529C1CA5DF(Local_318.f_64[iVar0], 1);
			unk_0x55B25C3B4CEEEF4B(Local_318.f_64[iVar0], 20);
			unk_0x857E9EFB607AD64E(Local_318.f_64[iVar0], 2);
			unk_0x7FE5E05BE63F6CB8(Local_318.f_64[iVar0], 23, 0);
			unk_0xCBDC2B59922F92C3(Local_318.f_64[iVar0], joaat("weapon_sniperrifle"), -1, 1, 1);
			unk_0x73562E6072D7A39D(Local_318.f_64[iVar0], 1000);
			unk_0xC5B2830898581862(Local_318.f_64[iVar0], 1);
			unk_0xEA1F0CBFFACFA528(Local_318.f_64[iVar0], 1000f);
			if (!unk_0x66599E73DBA5A850(Local_318.f_64[iVar0]))
			{
				if (iVar0 == 0)
				{
					unk_0xA94DB800C9A8E9D6(Local_318.f_64[iVar0], "miss_Tower_01", 1, 0, 1);
				}
				else if (iVar0 == 1)
				{
					unk_0xA94DB800C9A8E9D6(Local_318.f_64[iVar0], "miss_Tower_02", 1, 0, 1);
				}
				else if (iVar0 == 2)
				{
					unk_0xA94DB800C9A8E9D6(Local_318.f_64[iVar0], "miss_Tower_03", 1, 0, 1);
				}
				else if (iVar0 == 3)
				{
					unk_0xA94DB800C9A8E9D6(Local_318.f_64[iVar0], "miss_Tower_04", 1, 0, 1);
				}
				else if (iVar0 == 4)
				{
					unk_0xA94DB800C9A8E9D6(Local_318.f_64[iVar0], "miss_Tower_05", 1, 0, 1);
				}
				else if (iVar0 == 5)
				{
					unk_0xA94DB800C9A8E9D6(Local_318.f_64[iVar0], "miss_Tower_06", 1, 0, 1);
				}
				else if (iVar0 == 6)
				{
					unk_0xA94DB800C9A8E9D6(Local_318.f_64[iVar0], "miss_Tower_07", 1, 0, 1);
				}
				else if (iVar0 == 7)
				{
					unk_0xA94DB800C9A8E9D6(Local_318.f_64[iVar0], "miss_Tower_08", 1, 0, 1);
				}
				else if (iVar0 == 9)
				{
					unk_0xA94DB800C9A8E9D6(Local_318.f_64[iVar0], "miss_Tower_10", 1, 0, 1);
				}
				else
				{
					unk_0x5B1D23BB00E75286(Local_318.f_64[iVar0], Local_318.f_42[iVar0], 0, 0, -1);
				}
			}
		}
		iVar0++;
	}
}

void func_73()
{
	int iVar0;
	
	if (!unk_0x67670574D396B9A8(1823.845f, 2621.267f, 57f, 0.5f))
	{
		uLocal_404[0] = unk_0xABEEDBEF2BBDF5B3(joaat("polmav"), 1823.845f, 2621.267f, 57f, 53f, 1, 1, 0);
		if (unk_0x7DE17ACDD8BA2642(uLocal_404[0]) && !unk_0x055111B11E6624FD(uLocal_404[0], 0))
		{
			uLocal_408[0] = unk_0x4FA078B1B32445FD(uLocal_404[0], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			unk_0x49389483B4ABCAC3(uLocal_408[0], 0);
			unk_0x8386356641D0DED1(uLocal_408[0], iLocal_316);
			unk_0xDDE449983CE7572E(uLocal_404[0], 0, 0);
			unk_0x724FFAED1C56CE2B(uLocal_404[0], 0, 0);
			unk_0x49389483B4ABCAC3(uLocal_404[0], 0);
			unk_0x2718E9CC165A99F6(uLocal_404[0], 1);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x67670574D396B9A8(1761.418f, 2410.378f, 61f, 0.5f))
	{
		uLocal_404[1] = unk_0xABEEDBEF2BBDF5B3(joaat("polmav"), 1761.418f, 2410.378f, 61f, 13f, 1, 1, 0);
		if (unk_0x7DE17ACDD8BA2642(uLocal_404[1]) && !unk_0x055111B11E6624FD(uLocal_404[1], 0))
		{
			uLocal_408[1] = unk_0x4FA078B1B32445FD(uLocal_404[1], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			unk_0x49389483B4ABCAC3(uLocal_408[1], 0);
			unk_0x8386356641D0DED1(uLocal_408[1], iLocal_316);
			unk_0xDDE449983CE7572E(uLocal_404[1], 0, 0);
			unk_0x724FFAED1C56CE2B(uLocal_404[1], 0, 0);
			unk_0x49389483B4ABCAC3(uLocal_404[1], 0);
			unk_0x2718E9CC165A99F6(uLocal_404[1], 1);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x67670574D396B9A8(1534.635f, 2585.162f, 61f, 0.5f))
	{
		uLocal_404[2] = unk_0xABEEDBEF2BBDF5B3(joaat("polmav"), 1534.635f, 2585.162f, 61f, 250f, 1, 1, 0);
		if (unk_0x7DE17ACDD8BA2642(uLocal_404[2]) && !unk_0x055111B11E6624FD(uLocal_404[2], 0))
		{
			uLocal_408[2] = unk_0x4FA078B1B32445FD(uLocal_404[2], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			unk_0x49389483B4ABCAC3(uLocal_408[2], 0);
			unk_0x8386356641D0DED1(uLocal_408[2], iLocal_316);
			unk_0xDDE449983CE7572E(uLocal_404[2], 0, 0);
			unk_0x724FFAED1C56CE2B(uLocal_404[2], 0, 0);
			unk_0x49389483B4ABCAC3(uLocal_404[2], 0);
			unk_0x2718E9CC165A99F6(uLocal_404[2], 1);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((unk_0x7DE17ACDD8BA2642(uLocal_408[iVar0]) && !unk_0x055111B11E6624FD(uLocal_408[iVar0], 0)) && !unk_0x055111B11E6624FD(uLocal_404[iVar0], 0))
		{
			if (func_28())
			{
				iLocal_412[iVar0] = 1;
				unk_0x81FD2D064338B6D6(uLocal_404[iVar0], 1, 0);
			}
		}
		iVar0++;
	}
}

void func_74()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!unk_0x7DE17ACDD8BA2642(Local_318.f_64[iVar0]))
		{
			Local_318.f_64[iVar0] = unk_0x69FDD9508259E5B5(6, joaat("s_m_m_prisguard_01"), Local_318[iVar0 /*3*/], Local_318.f_31[iVar0], 1, 1);
			unk_0xE0A291F406691F03(joaat("s_m_m_prisguard_01"));
			unk_0x4EDE34FBADD967A6(0);
		}
		iVar0++;
	}
}

void func_75()
{
	Local_318[0 /*3*/] = { 1827.69f, 2474.181f, 61.7202f };
	Local_318[1 /*3*/] = { 1764.729f, 2409.139f, 61.7533f };
	Local_318[2 /*3*/] = { 1658.829f, 2390.888f, 61.7462f };
	Local_318[3 /*3*/] = { 1537.28f, 2468.338f, 61.7497f };
	Local_318[4 /*3*/] = { 1530.493f, 2585.172f, 61.7001f };
	Local_318[5 /*3*/] = { 1566.921f, 2682.525f, 61.7716f };
	Local_318[6 /*3*/] = { 1648.104f, 2761.528f, 61.9103f };
	Local_318[7 /*3*/] = { 1774.523f, 2766.559f, 61.9143f };
	Local_318[8 /*3*/] = { 1852.475f, 2697.632f, 61.9547f };
	Local_318[9 /*3*/] = { 1824.288f, 2625.042f, 61.9749f };
	Local_318.f_31[0] = 248.9733f;
	Local_318.f_31[1] = 45.8793f;
	Local_318.f_31[2] = 186.3656f;
	Local_318.f_31[3] = 313.5206f;
	Local_318.f_31[4] = 95.9574f;
	Local_318.f_31[5] = 289.3531f;
	Local_318.f_31[6] = 13.7511f;
	Local_318.f_31[7] = 0f;
	Local_318.f_31[8] = 208.5786f;
	Local_318.f_31[9] = 280.9389f;
}

int func_76()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		while (!unk_0xC546C50EE3EA181E(Local_629.f_14[iVar0]))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		iVar0++;
	}
	return 1;
}

int func_77()
{
	if (bLocal_618)
	{
		if (!unk_0x0CBB7C273DED26E7(joaat("s_m_y_prisoner_01")))
		{
			return 0;
		}
	}
	return 1;
}

int func_78()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!unk_0xC546C50EE3EA181E(Local_318.f_42[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (!unk_0x0CBB7C273DED26E7(joaat("polmav")))
	{
		return 0;
	}
	if (!unk_0x0CBB7C273DED26E7(joaat("s_m_m_prisguard_01")))
	{
		return 0;
	}
	return 1;
}

int func_79()
{
	if (bLocal_574)
	{
		if (!unk_0x0CBB7C273DED26E7(joaat("polmav")))
		{
			return 0;
		}
		if (!unk_0x56659E29BE303D7F(101, "PrisonHeli"))
		{
			return 0;
		}
	}
	return 1;
}

int func_80()
{
	if (!unk_0x0CBB7C273DED26E7(joaat("s_m_m_security_01")))
	{
		return 0;
	}
	if (!unk_0x0CBB7C273DED26E7(joaat("s_m_m_prisguard_01")))
	{
		return 0;
	}
	if (!unk_0x0CBB7C273DED26E7(joaat("polmav")))
	{
		return 0;
	}
	return 1;
}

void func_81()
{
	int iVar0;
	
	func_82();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		unk_0x7F2BD159A7FF94C0(Local_629.f_14[iVar0]);
		iVar0++;
	}
}

void func_82()
{
	Local_629[0 /*3*/] = { 1768.628f, 2538.97f, 44.4054f };
	Local_629[1 /*3*/] = { 1633.613f, 2498.849f, 44.4117f };
	Local_629[2 /*3*/] = { 1622.61f, 2555.683f, 44.4051f };
	Local_629.f_10[0] = 0f;
	Local_629.f_10[1] = 0f;
	Local_629.f_10[2] = 198.4323f;
	Local_629.f_14[0] = "PatrolGuard02";
	Local_629.f_14[1] = "PatrolGuard03";
	Local_629.f_14[2] = "PatrolGuard04";
}

void func_83()
{
	int iVar0;
	
	Local_318.f_42[0] = "TowerGuard01";
	Local_318.f_42[1] = "TowerGuard02";
	Local_318.f_42[2] = "TowerGuard03";
	Local_318.f_42[3] = "TowerGuard04";
	Local_318.f_42[4] = "TowerGuard05";
	Local_318.f_42[5] = "TowerGuard06";
	Local_318.f_42[6] = "TowerGuard07";
	Local_318.f_42[7] = "TowerGuard08";
	Local_318.f_42[8] = "TowerGuard09";
	Local_318.f_42[9] = "TowerGuard10";
	iVar0 = 0;
	while (iVar0 < 10)
	{
		unk_0x7F2BD159A7FF94C0(Local_318.f_42[iVar0]);
		iVar0++;
	}
	unk_0x852EC2A7DE66202D(joaat("polmav"));
	unk_0x852EC2A7DE66202D(joaat("s_m_m_prisguard_01"));
}

void func_84()
{
	bLocal_574 = false;
	if (func_28())
	{
		iLocal_575 = (unk_0x15A88CFAAFFC6C4B(0, 65535) % 2);
		if (iLocal_575 == 0)
		{
			bLocal_574 = true;
			unk_0x852EC2A7DE66202D(joaat("polmav"));
			unk_0xC0B5FC4796023855(101, "PrisonHeli");
		}
		else
		{
			bLocal_574 = false;
		}
	}
}

void func_85()
{
	unk_0x852EC2A7DE66202D(joaat("s_m_m_security_01"));
	unk_0x852EC2A7DE66202D(joaat("s_m_m_prisguard_01"));
	unk_0x852EC2A7DE66202D(joaat("polmav"));
}

void func_86()
{
	iLocal_315 = iLocal_315;
	iLocal_315 = 0;
	func_87();
	func_34();
	Local_128.f_4 = 75;
	Local_128.f_6 = 15;
	unk_0xA5B75537953810FA(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0, 0, 0);
	unk_0xA5B75537953810FA(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0);
	unk_0xDA95D0C19E737224("Prison_Guards", &iLocal_316);
	unk_0xDA95D0C19E737224("Prison_Prisoners", &iLocal_317);
	unk_0x0133FF6E23A1DCA4(2, iLocal_316, iLocal_317);
	unk_0x0133FF6E23A1DCA4(2, iLocal_317, iLocal_316);
	unk_0x0133FF6E23A1DCA4(1, iLocal_316, joaat("COP"));
	unk_0x0133FF6E23A1DCA4(1, joaat("COP"), iLocal_316);
	unk_0x0133FF6E23A1DCA4(3, joaat("player"), iLocal_317);
	unk_0x0133FF6E23A1DCA4(3, iLocal_317, joaat("player"));
}

void func_87()
{
	Local_65[0 /*3*/] = { 1809.816f, 2482.877f, 44.4744f };
	Local_65[1 /*3*/] = { 1755.823f, 2424.904f, 44.4319f };
	Local_65[2 /*3*/] = { 1661.2f, 2410.096f, 44.4265f };
	Local_65[3 /*3*/] = { 1555.966f, 2476.43f, 44.4042f };
	Local_65[4 /*3*/] = { 1549.141f, 2583.103f, 44.4225f };
	Local_65[5 /*3*/] = { 1581.156f, 2671.974f, 44.481f };
	Local_65[6 /*3*/] = { 1655.49f, 2743.69f, 44.4665f };
	Local_65[7 /*3*/] = { 1768.776f, 2748.527f, 44.4402f };
	Local_65[8 /*3*/] = { 1831.2f, 2696f, 44.4578f };
	Local_65[9 /*3*/] = { 1803.121f, 2617.781f, 44.5082f };
	Local_65[10 /*3*/] = { 1817.221f, 2608.387f, 44.6204f };
	Local_65[11 /*3*/] = { 1843.838f, 2608.361f, 44.6178f };
}

void func_88()
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if ((unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 1879.956f, 2705.097f, 52.07341f, 1869.859f, 2726.776f, 59.82338f, 24.75f, 0, 1, 0) || unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 1833.113f, 2520.888f, 52.26086f, 1833.115f, 2554.431f, 61.25998f, 15f, 0, 1, 0)) || unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 1832.742f, 2568.421f, 48.87375f, 1833.015f, 2596.529f, 57.12439f, 27.75f, 0, 1, 0))
		{
			if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0)
			{
				unk_0x8FE445B0989D8C71(unk_0x93E99A2DBCBA9CFA(), 2, 0);
				unk_0x6CDFCA6843DA90FF(unk_0x93E99A2DBCBA9CFA(), 0);
			}
		}
	}
	if (!iLocal_104)
	{
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 1917.889f, 2618.476f, -45.677f, 1822.889f, 2618.476f, 45.677f, 195f, 0, 0, 0))
			{
				if (unk_0xDB78CA962BC9F23B(unk_0x93E99A2DBCBA9CFA()))
				{
					unk_0x8FE445B0989D8C71(unk_0x93E99A2DBCBA9CFA(), 4, 0);
					unk_0x6CDFCA6843DA90FF(unk_0x93E99A2DBCBA9CFA(), 0);
					unk_0x0133FF6E23A1DCA4(5, joaat("player"), -183807561);
					unk_0x0133FF6E23A1DCA4(5, -183807561, joaat("player"));
					iLocal_104 = 1;
				}
				if ((unk_0x612907CF3208D1E3(1874.072f, 2605.423f, 44.6723f, 100f, 1) && !unk_0xBA9A13B3E8BC6817(unk_0x93E99A2DBCBA9CFA())) || (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()) && !unk_0xDB78CA962BC9F23B(unk_0x93E99A2DBCBA9CFA())))
				{
					unk_0x6CDFCA6843DA90FF(unk_0x93E99A2DBCBA9CFA(), 0);
					unk_0x8FE445B0989D8C71(unk_0x93E99A2DBCBA9CFA(), 1, 0);
					unk_0x0133FF6E23A1DCA4(5, joaat("player"), -183807561);
					unk_0x0133FF6E23A1DCA4(5, -183807561, joaat("player"));
					iLocal_104 = 1;
				}
			}
		}
	}
}

void func_89(bool bParam0)
{
	int iVar0;
	
	func_95();
	func_94();
	func_93();
	func_92();
	func_91();
	func_90();
	unk_0xC7F65BCF0795860F("PRISON_ALARMS", 1);
	if (iLocal_104)
	{
		unk_0x0133FF6E23A1DCA4(2, joaat("player"), -183807561);
		unk_0x0133FF6E23A1DCA4(2, -183807561, joaat("player"));
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (unk_0xB504838E273ABA87(uLocal_52[iVar0]))
		{
			unk_0x72D15191FDAEBD63(uLocal_52[iVar0]);
		}
		iVar0++;
	}
	unk_0xA5B75537953810FA(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0, 0, 0);
	unk_0xA5B75537953810FA(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0);
	if (bParam0)
	{
		unk_0xF82BC5193AF62796(1695.1f, 2595.8f, 50f, 1000f, 1, 0, 0, 0);
	}
	unk_0x675D9C12C73D3DE7();
}

void func_90()
{
	if (unk_0x7DE17ACDD8BA2642(iLocal_124))
	{
		unk_0x0E4B6CF706BE8AA4(&iLocal_124);
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_126))
	{
		unk_0x1EEF71E3CDD868D3(&iLocal_126);
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_125))
	{
		unk_0x0E4B6CF706BE8AA4(&iLocal_125);
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_127))
	{
		unk_0x1EEF71E3CDD868D3(&iLocal_127);
	}
}

void func_91()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x7DE17ACDD8BA2642(Local_629.f_27[iVar0]))
		{
			if (unk_0xCE4AAA035282336C(Local_629.f_36[iVar0]))
			{
				unk_0x45533C09A6C9B409(&(Local_629.f_36[iVar0]));
			}
			if (unk_0xDB08595445CDE2FF(Local_629.f_27[iVar0]))
			{
				unk_0xE9C250FA35A936C8(&(Local_629.f_27[iVar0]));
			}
			else
			{
				unk_0x1EEF71E3CDD868D3(&(Local_629.f_27[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x7DE17ACDD8BA2642(Local_629.f_31[iVar0]))
		{
			if (unk_0xCE4AAA035282336C(Local_629.f_40[iVar0]))
			{
				unk_0x45533C09A6C9B409(&(Local_629.f_40[iVar0]));
			}
			if (unk_0xDB08595445CDE2FF(Local_629.f_31[iVar0]))
			{
				unk_0xE9C250FA35A936C8(&(Local_629.f_31[iVar0]));
			}
			else
			{
				unk_0x1EEF71E3CDD868D3(&(Local_629.f_31[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_92()
{
	if (unk_0xCE4AAA035282336C(uLocal_621))
	{
		unk_0x45533C09A6C9B409(&uLocal_621);
	}
	if (unk_0x7DE17ACDD8BA2642(uLocal_619))
	{
		unk_0x2728CF7242F08BD5(&iLocal_619);
	}
}

void func_93()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (unk_0x7DE17ACDD8BA2642(uLocal_576[iVar0]))
		{
			if (unk_0xCE4AAA035282336C(uLocal_597[iVar0]))
			{
				unk_0x45533C09A6C9B409(&(uLocal_597[iVar0]));
			}
			unk_0xE9C250FA35A936C8(&(uLocal_576[iVar0]));
		}
		iVar0++;
	}
}

void func_94()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x7DE17ACDD8BA2642(uLocal_404[iVar0]))
		{
			unk_0x2728CF7242F08BD5(&(uLocal_404[iVar0]));
		}
		if (unk_0x7DE17ACDD8BA2642(uLocal_408[iVar0]))
		{
			unk_0xE9C250FA35A936C8(&(uLocal_408[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x7DE17ACDD8BA2642(Local_318.f_64[iVar0]))
		{
			if (unk_0xCE4AAA035282336C(Local_318.f_75[iVar0]))
			{
				unk_0x45533C09A6C9B409(&(Local_318.f_75[iVar0]));
			}
			if (unk_0xDB08595445CDE2FF(Local_318.f_64[iVar0]))
			{
				unk_0xE9C250FA35A936C8(&(Local_318.f_64[iVar0]));
			}
			else
			{
				unk_0x1EEF71E3CDD868D3(&(Local_318.f_64[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_95()
{
	if (unk_0xCE4AAA035282336C(uLocal_571))
	{
		unk_0x45533C09A6C9B409(&uLocal_571);
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_569))
	{
		if (unk_0xDB08595445CDE2FF(iLocal_569))
		{
			unk_0x2728CF7242F08BD5(&iLocal_569);
			unk_0xE9C250FA35A936C8(&iLocal_570);
		}
		else
		{
			func_96(&iLocal_569, &iLocal_570);
			unk_0x0E4B6CF706BE8AA4(&iLocal_569);
		}
	}
}

void func_96(var uParam0, var uParam1)
{
	if (((unk_0x7DE17ACDD8BA2642(*uParam0) && unk_0x7DE17ACDD8BA2642(*uParam1)) && !unk_0x055111B11E6624FD(*uParam0, 0)) && !unk_0x055111B11E6624FD(*uParam1, 0))
	{
		if (unk_0xDA70CA6A0D1738D3(*uParam0))
		{
			if (unk_0xA005AFE85A66532E(*uParam0))
			{
				if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
				{
					unk_0x90C54F90572AEB53(*uParam1, *uParam0, 0, 0, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 8, 50f, -1f, 30f, 100, 50, 1);
				}
			}
		}
	}
}

