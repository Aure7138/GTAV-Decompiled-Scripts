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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
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
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	struct<3> Local_106 = { 0, 0, 0 } ;
	struct<3> Local_109 = { 0, 0, 0 } ;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115[3] = { 0, 0, 0 };
	var uLocal_119 = 16;
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
	int iLocal_284 = 0;
	var uLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	var uLocal_292 = 3;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	struct<3> Local_296 = { 0, 0, 0 } ;
	int iLocal_299 = 0;
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
	struct<42> Var0;
	struct<3> Var61;
	
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_82 = 1;
	iLocal_83 = 65;
	iLocal_84 = 49;
	iLocal_85 = 64;
	uLocal_89 = unk_0x1F53E4D96E694CDD();
	uLocal_90 = unk_0xEE612CA913419344();
	Local_106 = { 1180.969f, -402.381f, 67.2f };
	Local_109 = { 5f, 0f, 57.33f };
	iLocal_113 = -1;
	iLocal_286 = 77;
	iLocal_287 = -1;
	iLocal_288 = -1;
	iLocal_289 = 1;
	iLocal_290 = 1;
	iLocal_291 = 1;
	unk_0x78E45C2D5AB9D24C(1);
	func_391();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	Global_97953 = 1;
	func_390(&Var0);
	if (unk_0x55EEDBBFDC6E810F(83))
	{
		func_389(" Force cleanup [TERMINATING]");
		func_374(&Var0, 1);
	}
	if (!func_373(108))
	{
		func_233(&Var0, Var61);
	}
	else
	{
		func_1(&Var0, Var61);
	}
}

void func_1(var* uParam0, struct<3> Param1)
{
	while (true)
	{
		if (!unk_0xCBE2EC2868A6C438())
		{
			func_389("  Ambient - Player isn't within World Point Range");
			func_374(uParam0, 1);
		}
		if (func_232() != 2)
		{
			func_389("  Ambient - Player is not Trevor");
			func_374(uParam0, 1);
		}
		iLocal_288 = func_231(5f);
		if (iLocal_288 != -1)
		{
			if (!func_225())
			{
				*uParam0 = func_224(iLocal_288);
				StringCopy(&(uParam0->f_1), func_223(iLocal_288), 32);
				uParam0->f_16 = 3;
				uParam0->f_15 = 5f;
				if (*uParam0 == -1)
				{
					func_389("  -  Ambient Rampage Mission ID is invalid");
					func_374(uParam0, 1);
				}
				if (unk_0x2AC37494BBF1DB16(&(uParam0->f_1)))
				{
					func_389("  -  Ambient Rampage Mission ID is invalid");
					func_374(uParam0, 1);
				}
				unk_0xECDAB41968FF21A8(&(Global_113648.f_18576[*uParam0 /*6*/]), 0);
				unk_0xECDAB41968FF21A8(&(Global_113648.f_18576[*uParam0 /*6*/]), 2);
				unk_0x061B1200C95204CB(&(Global_113648.f_18576[*uParam0 /*6*/]), 3);
				Global_112735[*uParam0 /*10*/].f_1 = 0;
				if (!func_222(0))
				{
					Global_112735[*uParam0 /*10*/].f_3 = 0;
				}
				if (!func_214(*uParam0))
				{
					func_389(" RC Ambient Can't Launch - Can_RC_Launch Faled");
					func_374(uParam0, 1);
				}
				else if (!func_5(uParam0))
				{
					func_389(" RC Ambient Can't Launch - Launch_RC_Mission Failed");
					func_374(uParam0, 1);
				}
				else
				{
					func_4(500, 1);
					unk_0xF82BC5193AF62796(Param1, uParam0->f_15, 1, 0, 0, 0);
					func_389(" RC Ambient Launcher Waiting To Terminate");
					Global_112735[*uParam0 /*10*/].f_1 = 0;
					if (func_3(uParam0))
					{
						func_389(" Ambient - Ready To Terminate");
						func_374(uParam0, 0);
					}
				}
			}
		}
		else
		{
			if (func_2("RAMP_HELP_TRIG"))
			{
				unk_0xCD3C8E1022864F65(1);
			}
			iLocal_291 = 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_2(char* sParam0)
{
	unk_0x56C9BC27C0FF68D7(sParam0);
	return unk_0x6A92D111B5409879(0);
}

int func_3(var* uParam0)
{
	while (!Global_112735[*uParam0 /*10*/])
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	return 1;
}

void func_4(int iParam0, bool bParam1)
{
	if (unk_0x35DF833D93BCC488())
	{
		if (!unk_0x984CA71F26DF483C())
		{
			unk_0x6D5ACBBD4CE34249(iParam0);
			if (bParam1)
			{
				while (!unk_0x72474BA05A104E1E())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
	}
}

int func_5(var* uParam0)
{
	struct<4> Var0;
	char* sVar32;
	
	if (!func_213())
	{
		while (!func_208(*uParam0))
		{
			if (func_207(*uParam0))
			{
				func_196();
			}
			if (!func_153(uParam0, *uParam0 != 2))
			{
				func_389("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (func_152())
	{
		func_150();
	}
	if (!func_119(uParam0))
	{
		func_389("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	func_116(*uParam0, &Var0);
	MemCopy(&sVar32, {func_115(*uParam0)}, 4);
	func_114(&sVar32, Var0.f_3, 0);
	func_111(*uParam0);
	if (!func_213())
	{
		if (uParam0->f_16 == 2)
		{
			func_25(&(uParam0->f_1), 0);
		}
		else
		{
			func_25(&(uParam0->f_1), 1);
		}
	}
	func_6(*uParam0, Var0.f_0);
	return 1;
}

void func_6(int iParam0, char* sParam1)
{
	func_24(sParam1);
	unk_0x061B1200C95204CB(&(Global_113648.f_18576[iParam0 /*6*/]), 5);
	if (unk_0x24B651D85CCE5EB4(joaat("mission_stat_watcher")) > 0)
	{
		while (unk_0x24B651D85CCE5EB4(joaat("mission_stat_watcher")) > 0)
		{
			func_22();
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0x24B651D85CCE5EB4(joaat("mission_stat_watcher")) < 1)
	{
		Global_63363 = 0;
		unk_0x3EC562D93709C894("mission_stat_watcher");
		while (!unk_0x6CAF14BE58B4BFF8("mission_stat_watcher"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("mission_stat_watcher", 1828);
		unk_0x037A80676B8FF0F5("mission_stat_watcher");
	}
	while (!BitTest(Global_113648.f_18576[iParam0 /*6*/], 5))
	{
		if (unk_0x24B651D85CCE5EB4(joaat("mission_stat_watcher")) > 0)
		{
			unk_0xECDAB41968FF21A8(&(Global_113648.f_18576[iParam0 /*6*/]), 5);
		}
	}
	func_7(iParam0);
}

void func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_63360 == 1)
	{
		func_21();
		Global_63360 = 0;
		if (Global_63355)
		{
			return;
		}
	}
	if (Global_3)
	{
		Global_63363 = 1;
		func_13();
		return;
	}
	MemCopy(&Global_63377, {func_12(iParam0)}, 4);
	Global_63365 = 0;
	Global_63364 = 0;
	switch (iParam0)
	{
		case 1:
		case 9:
			Global_63352 = 1;
			Global_63355 = 1;
			Global_63358 = 1;
			break;
		
		case 0:
		case 4:
		case 7:
		case 10:
		case 11:
		case 13:
		case 15:
		case 27:
		case 31:
		case 35:
		case 36:
		case 37:
		case 48:
		case 44:
		case 45:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			Global_63363 = 1;
			Global_63364 = 1;
			func_13();
			func_22();
			return;
			break;
	}
	iVar0 = Global_75607;
	Global_75607 = 1;
	iVar1 = Global_75608;
	Global_75608 = iParam0;
	if (!Global_63352)
	{
		if ((Global_75608 != iVar1 || Global_75457 == 0) || iVar0 != Global_75607)
		{
			Global_32417 = 0;
			func_13();
			func_9(iParam0);
		}
		else
		{
			Global_63355 = 1;
		}
	}
	Global_63390 = unk_0xA5E11AF0A2B928C1();
	func_8();
	Global_63362 = 0;
}

void func_8()
{
	int iVar0;
	
	if (!Global_63359)
	{
		return;
	}
	if (Global_75457 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75457)
	{
		switch (Global_63587[Global_75458[iVar0 /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_75458[iVar0 /*9*/].f_3 = 1;
				break;
			
			case 4:
				if (Global_63370)
				{
					Global_75458[iVar0 /*9*/].f_3 = 1;
				}
				break;
			
			case 6:
				if (Global_63587[Global_75458[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_75458[iVar0 /*9*/].f_1 != 0)
					{
						Global_75458[iVar0 /*9*/].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_63359 = 0;
}

void func_9(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			func_10(741);
			func_10(742);
			return;
		
		case 3:
			func_10(743);
			func_10(744);
			return;
		
		case 5:
			func_10(745);
			func_10(746);
			return;
		
		case 6:
			func_10(747);
			func_10(748);
			return;
		
		case 8:
			func_10(749);
			return;
		
		case 12:
			func_10(750);
			return;
		
		case 14:
			func_10(751);
			func_10(752);
			return;
		
		case 16:
			func_10(753);
			func_10(754);
			return;
		
		case 17:
			func_10(755);
			func_10(756);
			func_10(757);
			return;
		
		case 18:
			func_10(758);
			func_10(759);
			return;
		
		case 19:
			func_10(760);
			func_10(761);
			return;
		
		case 20:
			func_10(762);
			return;
		
		case 21:
			func_10(763);
			return;
		
		case 22:
			func_10(764);
			func_10(765);
			return;
		
		case 23:
			func_10(766);
			return;
		
		case 25:
			func_10(767);
			func_10(768);
			func_10(769);
			return;
		
		case 26:
			func_10(770);
			func_10(771);
			return;
		
		case 28:
			func_10(772);
			func_10(773);
			return;
		
		case 29:
			func_10(774);
			func_10(775);
			return;
		
		case 30:
			func_10(776);
			func_10(777);
			return;
		
		case 32:
			func_10(778);
			func_10(779);
			return;
		
		case 33:
			func_10(780);
			func_10(781);
			func_10(782);
			return;
		
		case 34:
			func_10(783);
			func_10(784);
			return;
		
		case 38:
			func_10(785);
			func_10(786);
			return;
		
		case 39:
			func_10(787);
			func_10(788);
			return;
		
		case 40:
			func_10(789);
			return;
		
		case 41:
			func_10(790);
			func_10(791);
			func_10(792);
			return;
		
		case 42:
			func_10(793);
			func_10(794);
			func_10(795);
			return;
		
		case 43:
			func_10(796);
			func_10(797);
			return;
		
		case 46:
			func_10(798);
			func_10(799);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 47:
			func_10(800);
			func_10(801);
			return;
		
		case 49:
			func_10(802);
			func_10(803);
			return;
		
		case 50:
			func_10(804);
			func_10(805);
			return;
		
		case 51:
			func_10(806);
			return;
		
		case 57:
			func_10(807);
			func_10(808);
			func_10(809);
			return;
		
		case 58:
			func_10(828);
			func_10(829);
			func_10(830);
			return;
		
		case 59:
			func_10(831);
			func_10(832);
			func_10(833);
			return;
		
		case 60:
			func_10(834);
			func_10(835);
			func_10(836);
			return;
		
		case 61:
			func_10(837);
			func_10(838);
			func_10(839);
			return;
		
		case 62:
			func_10(840);
			func_10(841);
			func_10(842);
			return;
		
		case 24:
			func_10(843);
			func_10(844);
			func_10(845);
			return;
		
		default:
	}
}

void func_10(int iParam0)
{
	Global_63355 = 1;
	Global_63358 = 1;
	if (Global_75457 > 15)
	{
		return;
	}
	func_11(Global_75457);
	Global_75458[Global_75457 /*9*/] = iParam0;
	Global_75457++;
	if (Global_63587[iParam0 /*13*/] == 16)
	{
		Global_75609 = 1;
	}
}

void func_11(int iParam0)
{
	Global_75458[iParam0 /*9*/].f_1 = 0;
	Global_75458[iParam0 /*9*/].f_2 = 0f;
	Global_75458[iParam0 /*9*/].f_3 = 0;
	Global_75458[iParam0 /*9*/].f_4 = 0;
}

struct<2> func_12(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_115(iParam0) };
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

void func_13()
{
	if (Global_63362)
	{
		return;
	}
	Global_63371 = 0;
	Global_75457 = 0;
	Global_63373 = 0;
	if (Global_63370)
	{
	}
	Global_63370 = 0;
	func_20(0);
	func_19();
	Global_75609 = 0;
	Global_63361 = 1;
	func_17();
	func_16();
	func_15();
	func_14();
	Global_63352 = 0;
	Global_63382 = 0;
	Global_63390 = -1;
}

void func_14()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_75644[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_75653 = 0;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_75610[iVar0 /*2*/] = 0;
		Global_75610[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_75643 = 0;
}

void func_16()
{
	Global_63521 = 0;
}

void func_17()
{
	Global_63381 = 0;
	Global_63385 = func_18(joaat("sp0_shots"));
	Global_63384 = func_18(joaat("sp0_hits"));
	Global_63387 = func_18(joaat("sp1_shots"));
	Global_63386 = func_18(joaat("sp1_hits"));
	Global_63389 = func_18(joaat("sp2_shots"));
	Global_63388 = func_18(joaat("sp2_hits"));
}

var func_18(int iParam0)
{
	var uVar0;
	
	unk_0xDD7756E2742E0F6D(iParam0, &uVar0, -1);
	return uVar0;
}

void func_19()
{
	int iVar0;
	
	Global_63391 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_63392[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_20(int iParam0)
{
	Global_78819 = iParam0;
	Global_78820 = iParam0;
}

void func_21()
{
	int iVar0;
	
	Global_63360 = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75457)
	{
		Global_75458[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_63370)
	{
	}
	Global_63370 = 0;
}

void func_22()
{
	if (unk_0x24B651D85CCE5EB4(joaat("mission_stat_watcher")) > 0)
	{
		if (func_23())
		{
			if (Global_63357 && !Global_63356)
			{
				Global_63357 = 0;
				unk_0x031879EF9A711F74("mission_stat_watcher");
			}
		}
		else
		{
			unk_0x031879EF9A711F74("mission_stat_watcher");
		}
	}
}

int func_23()
{
	if (unk_0x24B651D85CCE5EB4(joaat("mission_stat_watcher")) < 1)
	{
		return 0;
	}
	if (!Global_63355)
	{
		return 0;
	}
	return Global_63367;
}

void func_24(char* sParam0)
{
	if (unk_0x4310A0DB886F9FED(sParam0, sParam0))
	{
	}
}

void func_25(char[4] cParam0, int iParam1)
{
	unk_0x061B1200C95204CB(&(Global_100681.f_20), 17);
	func_26(cParam0, iParam1, 0);
}

void func_26(char[4] cParam0, int iParam1, int iParam2)
{
	if (Global_100681 != 10 && Global_100681 != 9)
	{
		StringCopy(&Global_104204, cParam0, 32);
		func_28(&Global_104212, cParam0, 0, "Start", iParam1, iParam2);
		func_27();
		Global_94859 = 0;
	}
}

void func_27()
{
	int iVar0;
	int iVar1;
	
	Global_107196 = Global_104212;
	Global_107196.f_1 = Global_104212.f_1;
	Global_107196.f_6 = Global_104212.f_6;
	Global_107196.f_7 = Global_104212.f_7;
	Global_107196.f_8 = Global_104212.f_8;
	Global_107196.f_2 = Global_104212.f_2;
	Global_107196.f_3 = Global_104212.f_3;
	Global_107196.f_4 = Global_104212.f_4;
	Global_107196.f_5 = Global_104212.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_107196.f_9[iVar1] = Global_104212.f_9[iVar1];
		Global_107196.f_13[iVar1] = Global_104212.f_13[iVar1];
		Global_107196.f_17[iVar1] = Global_104212.f_17[iVar1];
		Global_107196.f_21[iVar1] = Global_104212.f_21[iVar1];
		Global_107196.f_25[0 /*295*/][iVar1 /*98*/] = { Global_104212.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_107196.f_25[1 /*295*/][iVar1 /*98*/] = { Global_104212.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_107196.f_616[iVar1 /*65*/][iVar0] = Global_104212.f_616[iVar1 /*65*/][iVar0];
			Global_107196.f_616[iVar1 /*65*/].f_13[iVar0] = Global_104212.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_107196.f_616[iVar1 /*65*/].f_26[iVar0] = Global_104212.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_107196.f_616[iVar1 /*65*/].f_59 = Global_104212.f_616[iVar1 /*65*/].f_59;
		Global_107196.f_616[iVar1 /*65*/].f_60 = Global_104212.f_616[iVar1 /*65*/].f_60;
		Global_107196.f_616[iVar1 /*65*/].f_61 = Global_104212.f_616[iVar1 /*65*/].f_61;
		Global_107196.f_616[iVar1 /*65*/].f_62 = Global_104212.f_616[iVar1 /*65*/].f_62;
		Global_107196.f_616[iVar1 /*65*/].f_63 = Global_104212.f_616[iVar1 /*65*/].f_63;
		Global_107196.f_616[iVar1 /*65*/].f_64 = Global_104212.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_107196.f_616[iVar1 /*65*/].f_39[iVar0] = Global_104212.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_107196.f_616[iVar1 /*65*/].f_49[iVar0] = Global_104212.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_107196.f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_104212.f_812[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			Global_107196.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_104212.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_107196.f_2244[iVar1 /*32*/][iVar0] = Global_104212.f_2244[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_107196.f_2244[iVar1 /*32*/].f_5[iVar0] = Global_104212.f_2244[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_107196.f_2244[iVar1 /*32*/].f_16[iVar0] = Global_104212.f_2244[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_107196.f_2341[iVar1] = Global_104212.f_2341[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_107196.f_2838[iVar1 /*15*/][iVar0] = Global_104212.f_2838[iVar1 /*15*/][iVar0];
			Global_107196.f_2838[iVar1 /*15*/].f_5[iVar0] = Global_104212.f_2838[iVar1 /*15*/].f_5[iVar0];
			Global_107196.f_2838[iVar1 /*15*/].f_10[iVar0] = Global_104212.f_2838[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_107196.f_2345[iVar1 /*164*/][iVar0] = Global_104212.f_2345[iVar1 /*164*/][iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_4[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_4[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_8[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_8[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_12[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_12[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_16[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_16[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_20[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_20[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_24[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_24[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_28[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_28[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_32[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_32[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_36[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_36[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_40[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_40[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_44[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_44[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_48[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_48[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_52[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_52[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_56[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_56[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_60[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_60[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_64[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_64[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_68[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_68[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_72[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_72[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_76[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_76[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_80[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_80[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_84[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_84[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_88[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_88[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_92[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_92[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_96[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_96[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_100[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_100[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_104[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_104[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_108[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_108[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_112[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_112[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_116[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_116[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_120[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_120[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_124[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_124[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_128[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_128[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_132[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_132[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_136[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_136[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_140[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_140[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_144[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_144[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_148[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_148[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_152[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_152[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_156[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_156[iVar0];
			Global_107196.f_2345[iVar1 /*164*/].f_160[iVar0] = Global_104212.f_2345[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_107196.f_2884 = { Global_104212.f_2884 };
	Global_107196.f_2884.f_3 = Global_104212.f_2884.f_3;
	Global_107196.f_2890 = { Global_104212.f_2890 };
	Global_107196.f_2890.f_3 = { Global_104212.f_2890.f_3 };
	Global_107196.f_2890.f_6 = Global_104212.f_2890.f_6;
	Global_107196.f_2890.f_8 = Global_107196.f_2890.f_8;
	Global_107196.f_2890.f_7 = Global_104212.f_2890.f_7;
	Global_107196.f_2890.f_9 = Global_104212.f_2890.f_9;
	Global_107196.f_2890.f_11 = Global_104212.f_2890.f_11;
	Global_107196.f_2890.f_10 = Global_104212.f_2890.f_10;
	Global_107196.f_2890.f_12 = Global_104212.f_2890.f_12;
	Global_107196.f_2890.f_12.f_1 = { Global_104212.f_2890.f_12.f_1 };
	Global_107196.f_2890.f_12.f_5 = Global_104212.f_2890.f_12.f_5;
	Global_107196.f_2890.f_12.f_6 = Global_104212.f_2890.f_12.f_6;
	Global_107196.f_2890.f_12.f_7 = Global_104212.f_2890.f_12.f_7;
	Global_107196.f_2890.f_12.f_8 = Global_104212.f_2890.f_12.f_8;
	Global_107196.f_2890.f_12.f_9 = { Global_104212.f_2890.f_12.f_9 };
	Global_107196.f_2890.f_12.f_59 = { Global_104212.f_2890.f_12.f_59 };
	Global_107196.f_2890.f_12.f_62 = Global_104212.f_2890.f_12.f_62;
	Global_107196.f_2890.f_12.f_63 = Global_104212.f_2890.f_12.f_63;
	Global_107196.f_2890.f_12.f_64 = Global_104212.f_2890.f_12.f_64;
	Global_107196.f_2890.f_12.f_65 = Global_104212.f_2890.f_12.f_65;
	Global_107196.f_2890.f_12.f_77 = Global_104212.f_2890.f_12.f_77;
	Global_107196.f_2890.f_12.f_66 = Global_104212.f_2890.f_12.f_66;
	Global_107196.f_2890.f_12.f_67 = Global_104212.f_2890.f_12.f_67;
	Global_107196.f_2890.f_12.f_68 = Global_104212.f_2890.f_12.f_68;
	Global_107196.f_2890.f_12.f_69 = Global_104212.f_2890.f_12.f_69;
	Global_107196.f_2890.f_12.f_71 = Global_104212.f_2890.f_12.f_71;
	Global_107196.f_2890.f_12.f_72 = Global_104212.f_2890.f_12.f_72;
	Global_107196.f_2890.f_12.f_73 = Global_104212.f_2890.f_12.f_73;
	Global_107196.f_2890.f_12.f_74 = Global_104212.f_2890.f_12.f_74;
	Global_107196.f_2890.f_12.f_75 = Global_104212.f_2890.f_12.f_75;
	Global_107196.f_2890.f_12.f_76 = Global_104212.f_2890.f_12.f_76;
	Global_107196.f_2980 = Global_104212.f_2980;
	Global_107196.f_2980.f_1 = Global_104212.f_2980.f_1;
	Global_107196.f_2980.f_2 = Global_104212.f_2980.f_2;
	Global_107196.f_2980.f_3 = Global_104212.f_2980.f_3;
}

void func_28(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_232();
	uParam0->f_1 = func_100();
	unk_0x4AE338C69F2C7E27(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		func_69(&(uParam0->f_2884), 0);
		func_68(unk_0xC1A5EC5C986B98AD());
		func_61(unk_0xC1A5EC5C986B98AD(), 0);
		unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113648.f_2365.f_539.f_294[iVar1];
		if (iVar1 == func_58())
		{
			func_51(unk_0xC1A5EC5C986B98AD(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_100406[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_100406[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_100406[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_100406[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_100406[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_100406[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_100406[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_100406[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_100406[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_100406[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113648.f_2365.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113648.f_2365.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0xDD7756E2742E0F6D(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0xDD7756E2742E0F6D(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0xDD7756E2742E0F6D(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xDD7756E2742E0F6D(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113648.f_20566.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_60536[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113648.f_2365.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113648.f_2365.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113648.f_2365.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113648.f_2365.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113648.f_2365.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113648.f_2365[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113648.f_2365[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0xDD7756E2742E0F6D(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
	unk_0xDD7756E2742E0F6D(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
	unk_0xDD7756E2742E0F6D(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_30(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_29(&(uParam0->f_2980));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_29(var uParam0)
{
	*uParam0 = Global_96530;
	uParam0->f_1 = Global_96531;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_30(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xC1A5EC5C986B98AD();
	}
	if (unk_0x7DE17ACDD8BA2642(iParam2))
	{
		uParam1->f_5 = func_48(iParam2);
	}
	if (func_45(iParam2, &iVar0, iParam3, iParam5))
	{
		func_31(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x7DE17ACDD8BA2642(iVar0))
	{
		if (!unk_0x055111B11E6624FD(iVar0, 0))
		{
			if (unk_0x091E6E360116B927(iVar0, joaat("skylift")) && unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iVar0, 0))
			{
				func_31(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_31(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam2, 0))
	{
		func_33(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_32(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_32(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_100681.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_33(var uParam0, int iParam1, int iParam2)
{
	func_40(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_36(iParam1, 145, 0);
	uParam0->f_11 = func_35(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_34(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x30BE8A934C020461(iParam1, 1) };
		uParam0->f_6 = unk_0xD850DD08D5434072(iParam1);
		uParam0->f_3 = { unk_0x7A2C98D06C9C1956(iParam1) };
		if (unk_0x9DC9E896F189AAA5(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_78253 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x7DE17ACDD8BA2642(Global_77348.f_484[iVar0]))
		{
			if (iParam0 == Global_77348.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_35(int iParam0)
{
	int iVar0;
	
	if (!unk_0x7DE17ACDD8BA2642(iParam0))
	{
		return 145;
	}
	if (!unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7DE17ACDD8BA2642(Global_98012[iVar0]))
		{
			if (Global_98012[iVar0] == iParam0)
			{
				return Global_98022[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_36(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x7DE17ACDD8BA2642(iParam0))
	{
		return 0;
	}
	if (!unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7DE17ACDD8BA2642(Global_98012[iVar0]))
		{
			if (Global_98012[iVar0] == iParam0)
			{
				if (bParam1 == 145 || bParam1 == Global_98022[iVar0])
				{
					if (iParam2 == 0 || unk_0x504B9BB48D41C264(iParam0) == func_37(bParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_37(bool bParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_39(bParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_38(bParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

void func_38(bool bParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (bParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113648.f_9087.f_99.f_58[128] && !Global_113648.f_9087.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113648.f_9087.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113648.f_9087.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_39(bool bParam0)
{
	return bParam0 < 3;
}

void func_40(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		func_44(uParam1);
		uParam1->f_66 = unk_0x504B9BB48D41C264(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC51D12209D0B7FCF(iParam0), 16);
		*uParam1 = unk_0x46177D0BA2953EC5(iParam0);
		unk_0xD761D19F6F097C53(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x5A07E8D54892E711(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x89E530D113AF6EFC(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xD1EEB010323A3956(iParam0);
		uParam1->f_67 = unk_0xCCAF06B65CCC0B97(iParam0);
		uParam1->f_69 = unk_0xA79BA8CFAAB28820(iParam0);
		uParam1->f_70 = unk_0x1FA433B724B7085B(iParam0);
		unk_0x7C834DB7F2B3DFB2(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x5CF17DD27B31C6B3(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x0308AFE769A720D3(iParam0, 2))
		{
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 28);
		}
		if (unk_0x0308AFE769A720D3(iParam0, 3))
		{
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 29);
		}
		if (unk_0x0308AFE769A720D3(iParam0, 0))
		{
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 30);
		}
		if (unk_0x0308AFE769A720D3(iParam0, 1))
		{
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_43(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x05575C8395F0AAF3(iParam0, 0))
		{
			uParam1->f_68 = unk_0x3869EA643010CD0B(iParam0);
		}
		if (unk_0xAF4434A9F7368F35(uParam1->f_66))
		{
			if (unk_0xDF81E1E21E4E09BF(iParam0))
			{
				switch (unk_0x21880480C580A55F(iParam0))
				{
					case 3:
					case 0:
						unk_0x061B1200C95204CB(&(uParam1->f_77), 23);
						unk_0xECDAB41968FF21A8(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x061B1200C95204CB(&(uParam1->f_77), 23);
						unk_0x061B1200C95204CB(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xECDAB41968FF21A8(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xECDAB41968FF21A8(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x8785B34FCA0F7282(iParam0))
		{
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 9);
		}
		if (unk_0x41D114B661987866(iParam0))
		{
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 10);
		}
		if (unk_0x7A1F64336CB51721(iParam0))
		{
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 13);
			unk_0xA24DFB72308D1D0F(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xF0AADDC5F10AF90C(iParam0))
		{
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 12);
		}
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x175FDAC9EB940479(iParam0, iVar0 + 1))
			{
				unk_0xECDAB41968FF21A8(&(uParam1->f_77), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x521A50EC08B4CCFF(iParam0, 0))
		{
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x061B1200C95204CB(&(uParam1->f_77), 11);
		}
		if (unk_0x2B6E67EB7FF3FD10(iParam0, "IgnoredByQuickSave") && unk_0x8FA309E9ECEE409A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x061B1200C95204CB(&(uParam1->f_77), 27);
		}
	}
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_42(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xFBD273FDBCF0C5BD(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x6BDF27AD591C4E31(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x4B7C35CD6132E59C(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x4B7C35CD6132E59C(*iParam0, iVar1))
			{
				switch (unk_0xD09F72755B50666C(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xCA36A30E79A35222(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x222AA75EE0288312(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x222AA75EE0288312(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_44(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_45(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if (!unk_0x66599E73DBA5A850(iParam0))
		{
			if (iParam0 == unk_0xC1A5EC5C986B98AD())
			{
				*uParam1 = unk_0xE475C458F52F1781();
			}
			else
			{
				*uParam1 = unk_0x95DC39736F6748E3(iParam0, 1);
			}
			if (unk_0x7DE17ACDD8BA2642(*uParam1))
			{
				if (unk_0xFBD273FDBCF0C5BD(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(*uParam1, 1), unk_0x30BE8A934C020461(iParam0, 1), 1) < 100f)
					{
						if (unk_0x091E6E360116B927(*uParam1, joaat("taxi")))
						{
							if (unk_0xA66E176E5772E965(*uParam1, -1, 0) != iParam0 && unk_0xA66E176E5772E965(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_46(*uParam1, func_232(), 1))
						{
							sVar0 = unk_0x688846D56810779A();
							if (!unk_0x4310A0DB886F9FED(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x3C3D6D026CF7F51B(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x2B6E67EB7FF3FD10(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x8FA309E9ECEE409A(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x091E6E360116B927(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_46(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x7DE17ACDD8BA2642(iParam0) || !unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_47(bParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_113648.f_7231[iVar9], 0))
		{
			if (unk_0x7B0F3D01B676C014(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_47(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_49(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_49(int iParam0)
{
	if (func_39(iParam0))
	{
		return func_50(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_50(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_51(int iParam0, var uParam1, int iParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x66599E73DBA5A850(iParam0))
	{
		bVar0 = func_48(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_57(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_56(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_39(bVar0))
		{
			uParam1->f_59 = Global_113648.f_2365.f_539[bVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113648.f_2365.f_539[bVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113648.f_2365.f_539[bVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113648.f_2365.f_539[bVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113648.f_2365.f_539[bVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113648.f_2365.f_539[bVar0 /*65*/].f_64;
		}
		else if (unk_0xA26A9A07F761D8F8() && unk_0x504B9BB48D41C264(iParam0) == unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			if (func_55(161, iParam3))
			{
				uParam1->f_59 = func_52(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_52(753, iParam3, 0);
			}
			uParam1->f_60 = func_52(754, iParam3, 0);
			uParam1->f_61 = func_52(755, iParam3, 0);
		}
		if (unk_0xA26A9A07F761D8F8() && iParam0 == unk_0xC1A5EC5C986B98AD())
		{
			if (func_55(161, iParam3))
			{
				uParam1->f_59 = func_52(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_52(753, iParam3, 0);
			}
		}
	}
}

int func_52(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805027[iParam0 /*3*/][func_53(iParam1)];
		if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_53(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_54();
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

int func_54()
{
	return Global_1574918;
}

int func_55(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2848280[iParam0 /*3*/][func_53(iParam1)];
	if (unk_0x494B367FE0CBD765(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_56(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_48(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x6BC6C26115124DFE(iParam0, iParam1, 1);
		*uParam3 = unk_0xC5753F88DDA773E0(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x2394F256C5B1D879(iParam0) && unk_0xAF4BC693CE971839(iParam0) != -1)
				{
					*uParam2 = unk_0xAF4BC693CE971839(iParam0);
					*uParam3 = unk_0x32B63A52BB0B3075(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_57(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_48(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xAC464F61BE9FD50D(iParam0, iParam1);
		*uParam3 = unk_0xEDEBC30DEBDF84C8(iParam0, iParam1);
		*uParam4 = unk_0x41CBA4CCBAA79DEF(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_58()
{
	func_59();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_59()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_49(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_48(unk_0xC1A5EC5C986B98AD());
			if (func_39(iVar0) && (!func_60(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_39(Global_113648.f_2365.f_539.f_4321))
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

bool func_60(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_61(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	bVar0 = func_48(iParam0);
	if (func_39(bVar0) && !unk_0x66599E73DBA5A850(iParam0))
	{
		if (iParam0 == unk_0xC1A5EC5C986B98AD())
		{
			func_62(iParam0, &(Global_113648.f_2365.f_539.f_298[bVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_113648.f_2365.f_539.f_1730[iVar2 /*4*/][bVar0] = unk_0x1949000DD3673BC9(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xE926D28F18AE6F76();
					if (Global_113648.f_2365.f_539.f_1730[iVar2 /*4*/][bVar0] == iVar1)
					{
						Global_113648.f_2365.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0xDA6E0C7F9D5A4EC1(unk_0x93E99A2DBCBA9CFA(), &uVar3);
			if (bVar0 == 0)
			{
				unk_0x3CC35ACFFC9C730E(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (bVar0 == 1)
			{
				unk_0x3CC35ACFFC9C730E(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (bVar0 == 2)
			{
				unk_0x3CC35ACFFC9C730E(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_62(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	int iVar73;
	
	if (!unk_0x66599E73DBA5A850(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_67(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x91BEC56C475EB62C(iParam0, func_67(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x18974B8F28F70FE4(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x60B2BAFA7F1A9CDF(iParam0, Var4.f_0);
					Var4.f_4 = unk_0xBE5DF33289584192(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!unk_0xB2BC9E9923E2546A(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_65(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x1A7C88BD7ADA98BE(iParam0, Var4.f_0, iVar2))
						{
							unk_0xECDAB41968FF21A8(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_65(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = unk_0x022B5D696E908BAE();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((unk_0xA44505E95028BA80(iVar9, &Var11) && !func_64(Var11.f_1)) && iVar72 < 51)
			{
				if (!unk_0xEF068EDE5319404F(Var11.f_0))
				{
					Var4.f_0 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x18974B8F28F70FE4(iParam0, Var4.f_0);
					if (unk_0xED31EFCAA05B93ED(iParam0, Var4.f_0, 0))
					{
						Var4.f_3 = unk_0x60B2BAFA7F1A9CDF(iParam0, Var4.f_0);
						Var4.f_4 = unk_0xBE5DF33289584192(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xB2BC9E9923E2546A(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x66C9E88F514EFC8C(iVar9))
					{
						if (unk_0x4DEA25423FB9A358(iVar9, iVar1, &Var50))
						{
							if (!func_63(Var50.f_3))
							{
								if (unk_0x1A7C88BD7ADA98BE(iParam0, Var4.f_0, Var50.f_3))
								{
									unk_0xECDAB41968FF21A8(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0xED31EFCAA05B93ED(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
		case 1011473080:
			return 1;
			break;
	}
	return 0;
}

int func_64(int iParam0)
{
	if (unk_0xA26A9A07F761D8F8())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
			case joaat("weapon_raycarbine"):
			case joaat("weapon_rayminigun"):
			case joaat("weapon_raypistol"):
			case joaat("weapon_navyrevolver"):
			case joaat("weapon_ceramicpistol"):
			case joaat("weapon_gadgetpistol"):
			case joaat("weapon_militaryrifle"):
			case joaat("weapon_combatshotgun"):
			case joaat("weapon_emplauncher"):
			case joaat("weapon_fertilizercan"):
			case joaat("weapon_stungun_mp"):
			case joaat("weapon_metaldetector"):
			case joaat("weapon_precisionrifle"):
			case joaat("weapon_tacticalrifle"):
			case 465894841:
			case 1703483498:
			case -22923932:
				return 1;
				break;
			}
	}
	return 0;
}

int func_65(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
				
				case 5:
					iVar0 = joaat("component_appistol_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
				
				case 6:
					iVar0 = joaat("component_microsmg_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
				
				case 3:
					iVar0 = joaat("component_pumpshotgun_varmod_security");
					break;
				
				case 4:
					iVar0 = 330905451;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		case joaat("weapon_bat"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 716207715;
					break;
				
				case 1:
					iVar0 = 446271089;
					break;
				
				case 2:
					iVar0 = 1045616099;
					break;
				
				case 3:
					iVar0 = 1336277129;
					break;
				
				case 4:
					iVar0 = -513369076;
					break;
				
				case 5:
					iVar0 = -447700000;
					break;
				
				case 6:
					iVar0 = -149207179;
					break;
				
				case 7:
					iVar0 = 166784288;
					break;
				
				case 8:
					iVar0 = 2068729789;
					break;
				
				case 9:
					iVar0 = 1761389338;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_66(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x99844FCFECAC01A5(iVar1))
					{
						if (unk_0xDDBECC1D7EC5DB2B(iVar1, iVar2, &Var43))
						{
							if (!func_63(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_66(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xDF411E9128FAD473();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xF65F6F7A093E58A1(iVar0, uParam1))
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

int func_67(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_68(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_48(iParam0);
	if (func_39(bVar0) && !unk_0x66599E73DBA5A850(iParam0))
	{
		Global_113648.f_2365.f_539.f_294[bVar0] = unk_0x9E499A04DE5FC62A(iParam0);
	}
}

void func_69(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	bool bVar5;
	
	*uParam0 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
	uParam0->f_3 = unk_0xD850DD08D5434072(unk_0xC1A5EC5C986B98AD());
	uParam0->f_5 = unk_0x76781CF4D4ED46C9(unk_0xC1A5EC5C986B98AD());
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		uParam0->f_4 = unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA());
	}
	if (unk_0x2A488C176D52CCA5(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x24B651D85CCE5EB4(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (BitTest(Global_78807, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (BitTest(Global_78807, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (BitTest(Global_78807, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (BitTest(Global_78807, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) == unk_0xAF0CB15312D8B8E3(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_73(&iVar0))
		{
			if (func_71(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			bVar5 = func_232();
			if (bVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (bVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (bVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_70(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_70(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5B1AFB012FBCA44D(Param0))
	{
		iVar0 = unk_0xAF0CB15312D8B8E3(Param4, sParam3);
		if (!unk_0x4D3D95146FD3490D(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x534ACC29D082254F(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_71(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_72(*uParam1, 0f, 0f, 0f, 0);
}

bool func_72(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_73(var uParam0)
{
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0) && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_99())
		{
			*uParam0 = func_79(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0), 6, -1, 0, 1, -1);
			if (func_78(*uParam0) && !func_74(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_74(int iParam0)
{
	return func_75(iParam0, 0, 1);
}

int func_75(int iParam0, int iParam1, bool bParam2)
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
		if (func_77() == 0)
		{
			return BitTest(func_52(func_76(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113648.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_76(int iParam0)
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

int func_77()
{
	return Global_32163;
}

int func_78(int iParam0)
{
	return func_75(iParam0, 5, 1);
}

int func_79(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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
		if (iParam3 == 6 || iParam3 == func_98(iVar0))
		{
			if (!bParam5 || func_97(iVar0))
			{
				fVar1 = unk_0x2E496FE654DA4166(Param0, func_80(iVar0, 0), 1);
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

Vector3 func_80(int iParam0, bool bParam1)
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
			return func_94(Global_102825);
			break;
		
		case 46:
			if (Global_1853747 != func_93())
			{
				if (func_92(Global_1853747))
				{
					return func_85(2, 2);
				}
				else if (func_84(Global_1853747))
				{
					return func_85(45, 3);
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
			return func_81();
			break;
		
		case 59:
			return 560f, -405f, -69.6591f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_81()
{
	if (!func_83(Global_1956117))
	{
		return Global_1956117;
	}
	switch (func_82())
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

int func_82()
{
	return Global_2652258.f_2650;
}

int func_83(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_84(int iParam0)
{
	if (iParam0 != func_93())
	{
		if ((BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 0) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 1)) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_85(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1853747 != func_93())
	{
		if (iParam1 == 3)
		{
			if (func_86(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 4))
			{
				if (func_86(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (BitTest(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 5))
			{
				if (func_86(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_86(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_91(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_91(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_89(iParam0) };
	}
	else
	{
		Var12 = { func_88(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_87(Var18, -Var0.f_3.f_2) };
	Var18 = { func_87(Var18, Var6.f_3.f_2) };
	*uParam2 = { unk_0xF2A6E8EA57F9D501(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_87(struct<3> Param0, float fParam3)
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

struct<6> func_88(int iParam0)
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

struct<6> func_89(int iParam0)
{
	return func_90(iParam0);
}

struct<6> func_90(int iParam0)
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

int func_91(int iParam0, var uParam1)
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

int func_92(int iParam0)
{
	if (iParam0 != func_93())
	{
		if ((BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 3) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 4)) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_93()
{
	return -1;
}

Vector3 func_94(int iParam0)
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
			if (func_95() == 0)
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

int func_95()
{
	return func_96(unk_0x93E99A2DBCBA9CFA());
}

var func_96(int iParam0)
{
	return unk_0x4186606EC622CA48(Global_2657589[iParam0 /*466*/].f_321.f_3, 28, 31);
}

int func_97(int iParam0)
{
	return func_75(iParam0, 0, 0);
}

int func_98(int iParam0)
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

bool func_99()
{
	return Global_100733.f_387 > 0;
}

var func_100()
{
	var uVar0;
	
	func_110(&uVar0, unk_0x731F95B6458DCF80());
	func_109(&uVar0, unk_0x77BBAAED3E25322C());
	func_108(&uVar0, unk_0x30DFE1FFD2CC7420());
	func_103(&uVar0, unk_0x8C0F17CAC308A14B());
	func_102(&uVar0, unk_0x61117764C67882B7());
	func_101(&uVar0, unk_0x367F557725B53815());
	return uVar0;
}

void func_101(var uParam0, int iParam1)
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

void func_102(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_103(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_107(*uParam0);
	iVar1 = func_105(*uParam0);
	if (iParam1 < 1 || iParam1 > func_104(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_104(int iParam0, int iParam1)
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

var func_105(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_106(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_106(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_107(int iParam0)
{
	return iParam0 & 15;
}

void func_108(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_109(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_110(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_111(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xCCE9BCDAB8B7FAED() || func_113())
	{
		uVar0 = iParam0;
		unk_0x989939160154E37F(9, &uVar0, 1, 1);
	}
	else if (unk_0x674D69D3896862C7() || func_112())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x98F31DBBB3410994(9, &cVar1);
	}
}

var func_112()
{
	return (unk_0x01689609224A6C92() || unk_0xEE17703CF2C2875A());
}

var func_113()
{
	return (unk_0x8CCF8DC8E92BDA94() || unk_0x14F62099DEBAEA33());
}

void func_114(char* sParam0, var uParam1, int iParam2)
{
	if (!unk_0x2AC37494BBF1DB16(&Global_97751))
	{
		unk_0x83332E38D6284FF5(&Global_97751, 0, 0, 0, 1, 0);
		StringCopy(&Global_97751, "", 64);
	}
	StringCopy(&Global_97751, sParam0, 64);
	unk_0x363D7D2154F0040D(sParam0, uParam1, iParam2, func_222(0));
}

struct<2> func_115(int iParam0)
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

void func_116(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_117(uParam1, "Abigail1", func_12(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 1:
			func_117(uParam1, "Abigail2", func_12(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 2:
			func_117(uParam1, "Barry1", func_12(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 3:
			func_117(uParam1, "Barry2", func_12(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 4:
			func_117(uParam1, "Barry3", func_12(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 5:
			func_117(uParam1, "Barry3A", func_12(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 6:
			func_117(uParam1, "Barry3C", func_12(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 7:
			func_117(uParam1, "Barry4", func_12(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_118(iParam0), 0, 0);
			break;
		
		case 8:
			func_117(uParam1, "Dreyfuss1", func_12(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 9:
			func_117(uParam1, "Epsilon1", func_12(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 10:
			func_117(uParam1, "Epsilon2", func_12(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 11:
			func_117(uParam1, "Epsilon3", func_12(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 12:
			func_117(uParam1, "Epsilon4", func_12(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 13:
			func_117(uParam1, "Epsilon5", func_12(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 14:
			func_117(uParam1, "Epsilon6", func_12(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 15:
			func_117(uParam1, "Epsilon7", func_12(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 16:
			func_117(uParam1, "Epsilon8", func_12(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 17:
			func_117(uParam1, "Extreme1", func_12(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 18:
			func_117(uParam1, "Extreme2", func_12(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 19:
			func_117(uParam1, "Extreme3", func_12(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 20:
			func_117(uParam1, "Extreme4", func_12(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 21:
			func_117(uParam1, "Fanatic1", func_12(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_118(iParam0), 1, 0);
			break;
		
		case 22:
			func_117(uParam1, "Fanatic2", func_12(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_118(iParam0), 1, 0);
			break;
		
		case 23:
			func_117(uParam1, "Fanatic3", func_12(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_118(iParam0), 0, 1);
			break;
		
		case 24:
			func_117(uParam1, "Hao1", func_12(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_118(iParam0), 0, 1);
			break;
		
		case 25:
			func_117(uParam1, "Hunting1", func_12(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 26:
			func_117(uParam1, "Hunting2", func_12(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 27:
			func_117(uParam1, "Josh1", func_12(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 28:
			func_117(uParam1, "Josh2", func_12(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 29:
			func_117(uParam1, "Josh3", func_12(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 30:
			func_117(uParam1, "Josh4", func_12(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 31:
			func_117(uParam1, "Maude1", func_12(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 32:
			func_117(uParam1, "Minute1", func_12(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 33:
			func_117(uParam1, "Minute2", func_12(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 34:
			func_117(uParam1, "Minute3", func_12(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 35:
			func_117(uParam1, "MrsPhilips1", func_12(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 36:
			func_117(uParam1, "MrsPhilips2", func_12(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 37:
			func_117(uParam1, "Nigel1", func_12(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 38:
			func_117(uParam1, "Nigel1A", func_12(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 39:
			func_117(uParam1, "Nigel1B", func_12(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_118(iParam0), 1, 1);
			break;
		
		case 40:
			func_117(uParam1, "Nigel1C", func_12(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_118(iParam0), 1, 1);
			break;
		
		case 41:
			func_117(uParam1, "Nigel1D", func_12(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_118(iParam0), 1, 1);
			break;
		
		case 42:
			func_117(uParam1, "Nigel2", func_12(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 43:
			func_117(uParam1, "Nigel3", func_12(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_118(iParam0), 1, 1);
			break;
		
		case 44:
			func_117(uParam1, "Omega1", func_12(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 45:
			func_117(uParam1, "Omega2", func_12(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 46:
			func_117(uParam1, "Paparazzo1", func_12(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 47:
			func_117(uParam1, "Paparazzo2", func_12(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 48:
			func_117(uParam1, "Paparazzo3", func_12(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 49:
			func_117(uParam1, "Paparazzo3A", func_12(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 50:
			func_117(uParam1, "Paparazzo3B", func_12(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 51:
			func_117(uParam1, "Paparazzo4", func_12(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 52:
			func_117(uParam1, "Rampage1", func_12(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 54:
			func_117(uParam1, "Rampage3", func_12(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 55:
			func_117(uParam1, "Rampage4", func_12(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 56:
			func_117(uParam1, "Rampage5", func_12(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_118(iParam0), 0, 0);
			break;
		
		case 53:
			func_117(uParam1, "Rampage2", func_12(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_118(iParam0), 1, 0);
			break;
		
		case 57:
			func_117(uParam1, "TheLastOne", func_12(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 58:
			func_117(uParam1, "Tonya1", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 59:
			func_117(uParam1, "Tonya2", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 60:
			func_117(uParam1, "Tonya3", func_12(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 61:
			func_117(uParam1, "Tonya4", func_12(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		case 62:
			func_117(uParam1, "Tonya5", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_118(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_117(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_118(int iParam0)
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

int func_119(var* uParam0)
{
	int iVar0;
	
	if (func_149(&(uParam0->f_1)))
	{
		if (!unk_0x2AC37494BBF1DB16(&(uParam0->f_9)))
		{
			func_139(1);
			func_137(uParam0, 1, func_138(*uParam0));
		}
		if (uParam0->f_27)
		{
			if (func_136(*uParam0))
			{
				while (!unk_0x4FBDBA15B9C41492(unk_0xC1A5EC5C986B98AD()))
				{
					func_196();
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		func_120(*uParam0);
		iVar0 = unk_0xB8BA7F44DF1575E1(&(uParam0->f_1), uParam0, 61, 54000);
		unk_0x037A80676B8FF0F5(&(uParam0->f_1));
		if (unk_0xFD017BA8C1B2996F())
		{
			func_389("Initial cutscene loaded and passing to RC mission.");
			unk_0x43B07F0C6524441F(iVar0);
		}
		else
		{
			func_389("Initial cutscene wasn't loaded in time to pass to RC mission.");
			unk_0x423A98584B1756BF();
		}
		return 1;
	}
	return 0;
}

void func_120(int iParam0)
{
	struct<2> Var0;
	
	func_135();
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 32, 0);
		unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 250, 0);
	}
	if (func_134(iParam0))
	{
		unk_0x4AD381723E4E35A2(unk_0xC1A5EC5C986B98AD(), 0);
	}
	unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 1);
	unk_0x32FF0B09752F532B(0, 1);
	unk_0x32FF0B09752F532B(3, 1);
	unk_0x32FF0B09752F532B(2, 1);
	if (Global_44446 == 1)
	{
		if (func_132(unk_0xC1A5EC5C986B98AD()))
		{
			func_123(unk_0xC1A5EC5C986B98AD());
		}
	}
	if (!func_213())
	{
		if (iParam0 < 63)
		{
			func_121(iParam0);
			Var0 = { func_12(iParam0) };
			unk_0x97DBA2AA6C70AFC7(1, &Var0);
		}
	}
}

void func_121(int iParam0)
{
	if (iParam0 < 63)
	{
		func_122();
		Global_78814 = iParam0;
		Global_78813 = 0;
		Global_78816 = 7;
	}
}

void func_122()
{
	if (Global_78813 != 6)
	{
	}
	if (Global_78818)
	{
		unk_0x833DC7C29EA6EEF3(15);
		Global_78818 = 0;
		Global_23270.f_8892 = 0;
	}
	Global_78813 = 6;
	Global_78815 = -1;
	Global_78814 = -1;
}

void func_123(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x7DE17ACDD8BA2642(iParam0))
	{
		return;
	}
	iVar0 = func_131(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_44232[iVar0 /*5*/];
		func_126(1, iVar1, 1);
		return;
	}
	iVar2 = func_125(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_124(iVar2);
}

void func_124(int iParam0)
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

int func_125(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_44206[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_126(int iParam0, int iParam1, int iParam2)
{
	func_127(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_127(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_129(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_128();
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

int func_128()
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

int func_129(int iParam0, int iParam1, int iParam2)
{
	if (func_130(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_130(int iParam0, int iParam1, int iParam2)
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

int func_131(int iParam0)
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
		if (!Global_44232[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44232[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_132(int iParam0)
{
	if (func_133(iParam0))
	{
		if (!unk_0x66599E73DBA5A850(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_133(int iParam0)
{
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if (!unk_0x055111B11E6624FD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 60:
		case 61:
			return 0;
			break;
	}
	return 1;
}

void func_135()
{
	if (Global_9058[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9058[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9058[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9058[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9058[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9058[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x061B1200C95204CB(&Global_8253, 25);
	unk_0xECDAB41968FF21A8(&Global_8254, 11);
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 16:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
			return 0;
			break;
	}
	return 1;
}

void func_137(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_133(uParam0->f_28[iVar0]))
		{
			unk_0x03879CC8EF9E3635(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_133(uParam0->f_35[iVar0]))
		{
			unk_0x03879CC8EF9E3635(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_133(uParam0->f_41[iVar0]))
		{
			unk_0x03879CC8EF9E3635(uParam0->f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x03879CC8EF9E3635(unk_0xC1A5EC5C986B98AD(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), iParam1);
		if (bParam2)
		{
			unk_0x8CC688927B10006C(unk_0xC1A5EC5C986B98AD(), joaat("weapon_unarmed"), 1);
		}
	}
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return 0;
			break;
	}
	return 1;
}

void func_139(bool bParam0)
{
	var uVar0;
	
	uVar0 = unk_0x5DC3DCA82C806319();
	if (!unk_0x8C1810CF0182E949(uVar0))
	{
		if (bParam0)
		{
		}
		unk_0xE333240A90F2FF3C(uVar0, bParam0, 16);
		unk_0xE333240A90F2FF3C(uVar0, bParam0, 32);
	}
	func_140(1, 1, 0, 0, 0, 0, 0);
}

void func_140(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x8ECAA315E07E3A17(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 1);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 1);
		func_148(1);
		unk_0x2A7FF4CA1CC371B5();
		unk_0x3096CB6635EB839E();
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE444FD7526C8BB46())
			{
				unk_0xD6625E11483B2324(0);
			}
			if (!func_147())
			{
				Global_20383.f_1 = 3;
			}
			Global_21725 = 5;
		}
		func_146(1, iParam3, iParam2, 0);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_148(0);
		unk_0x5862CC4FD19EB752();
		Global_63368 = 0;
		if (bParam1)
		{
			unk_0xDB4D82037BD5A339();
		}
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 0);
		func_146(0, iParam3, iParam2, 0);
		if (unk_0xA26A9A07F761D8F8())
		{
			if ((((((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_144(unk_0x93E99A2DBCBA9CFA())) && !func_142(unk_0x93E99A2DBCBA9CFA(), 0)) && !func_141()) && !bParam4) && !bParam5) && !unk_0x8253CEEA17ED481B())
			{
				unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
			}
		}
		else if (((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_144(unk_0x93E99A2DBCBA9CFA())) && !bParam4) && !bParam5)
		{
			unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
		}
		Global_78556 = 0;
	}
}

bool func_141()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 14);
}

bool func_142(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_143(-1, 0) == 8;
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

int func_143(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_54();
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

int func_144(int iParam0)
{
	if (func_142(iParam0, 0))
	{
		return 1;
	}
	if (func_145())
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

bool func_145()
{
	return BitTest(Global_2621446, 3);
}

int func_146(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_147()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_148(int iParam0)
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

int func_149(char* sParam0)
{
	if (!unk_0x2AC37494BBF1DB16(uParam0))
	{
		unk_0x3EC562D93709C894(uParam0);
		while (!unk_0x6CAF14BE58B4BFF8(sParam0))
		{
			unk_0x3EC562D93709C894(sParam0);
			unk_0x4EDE34FBADD967A6(0);
		}
		return 1;
	}
	func_389("Attempting to launch invalid script file [TERMINATING]");
	return 0;
}

void func_150()
{
	Global_20591 = 0;
	func_151();
}

void func_151()
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

int func_152()
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
	{
		return 1;
	}
	return 0;
}

int func_153(var uParam0, bool bParam1)
{
	struct<27> Var0;
	
	if (Global_78558)
	{
		func_389("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	func_116(*uParam0, &Var0);
	if ((func_195(*uParam0) || func_193(*uParam0)) || Global_78804 == 1)
	{
		return 1;
	}
	if (!unk_0xCBE2EC2868A6C438())
	{
		func_389("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (func_185(*uParam0))
	{
		if (*uParam0 == 19)
		{
			func_184(uParam0->f_28[0]);
		}
		func_389("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (uParam0->f_25 == 1)
	{
		if (!func_164(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_164(uParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*uParam0 == 16 || *uParam0 == 9) || *uParam0 == 18) || *uParam0 == 22) || *uParam0 == 32) || *uParam0 == 51)
	{
		if (!func_161(uParam0, 1, 1))
		{
			if (*uParam0 == 16)
			{
				func_160(uParam0);
			}
			else
			{
				func_158(uParam0);
			}
			return 0;
		}
	}
	else if (*uParam0 == 24)
	{
		if (!func_161(uParam0, 0, 1))
		{
			func_158(uParam0);
			return 0;
		}
	}
	else if (*uParam0 == 6)
	{
		if (!func_161(uParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (uParam0->f_26 == 1)
	{
		if (!func_161(uParam0, 1, 0))
		{
			func_158(uParam0);
			return 0;
		}
	}
	else if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (!func_161(uParam0, 0, 0))
		{
			func_158(uParam0);
			return 0;
		}
	}
	if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (func_133(uParam0->f_35[0]))
		{
			if (!unk_0x1C4E4DC1EFE24DF1(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, 0, 1, 0))
			{
				return 0;
			}
		}
	}
	if (*uParam0 == 10)
	{
		if (unk_0xD612176B6DC58EF7(-1, uParam0->f_17[0 /*3*/], 8f))
		{
			func_389("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!BitTest(Var0.f_26, func_232()))
		{
			func_389("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0;
		}
	}
	if (func_157(&(uParam0->f_48)) && bParam1)
	{
		func_154(uParam0->f_28[0], &(uParam0->f_48), *uParam0);
	}
	return 1;
}

void func_154(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (func_133(iParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_157(uParam1))
				{
					if (unk_0x2BBF749E555360DC(*uParam1))
					{
						unk_0x35DD50D05C962B6A(iParam0);
						if (iParam2 != 21)
						{
							if (func_72(uParam1->f_5, 0f, 0f, 0f, 0))
							{
								unk_0x3EE48ADC8C7F5CC4(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
							}
							else
							{
								unk_0xDBC7406226B5540E(&uVar0);
								if (func_156(uParam1))
								{
									unk_0xC4F7B29AE0A7D629(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								else
								{
									unk_0xC4F7B29AE0A7D629(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								unk_0xC4F7B29AE0A7D629(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
								unk_0xF2CFC6EC8C85FA78(uVar0);
								unk_0x3D7110D966B0CEA2(iParam0, uVar0);
								unk_0x63EF69C6969A3D26(&uVar0);
							}
						}
						else
						{
							unk_0xC4F7B29AE0A7D629(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 3);
						}
						uParam1->f_3 = 2;
					}
					else
					{
						uParam1->f_3 = 0;
					}
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 2:
				if (!func_156(uParam1) || !unk_0x7BB3D8F4F6310EB8(iParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_155(iParam2) && !unk_0xD495130AEF425591(iParam0, unk_0xC1A5EC5C986B98AD(), 25f))
					{
						unk_0x06A2A5F6A6959BE7(iParam0, unk_0xC1A5EC5C986B98AD(), 0);
						uParam1->f_3 = 5;
					}
					else if ((func_156(uParam1) && uParam1->f_4 == 0) && unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(iParam0, 1), 1) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			
			case 3:
				unk_0xDBC7406226B5540E(&uVar1);
				if (func_72(uParam1->f_5, 0f, 0f, 0f, 0))
				{
					unk_0x3EE48ADC8C7F5CC4(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, 0, 0, 0);
					unk_0x3EE48ADC8C7F5CC4(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
				}
				else
				{
					unk_0xC4F7B29AE0A7D629(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0, 2, 0);
					unk_0xC4F7B29AE0A7D629(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				}
				unk_0xF2CFC6EC8C85FA78(uVar1);
				unk_0x3D7110D966B0CEA2(iParam0, uVar1);
				unk_0x63EF69C6969A3D26(&uVar1);
				uParam1->f_4 = 1;
				if (func_155(iParam2))
				{
					uParam1->f_3 = 2;
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 5:
				if (!func_155(iParam2) || unk_0xD495130AEF425591(iParam0, unk_0xC1A5EC5C986B98AD(), 10f))
				{
					if (func_72(uParam1->f_5, 0f, 0f, 0f, 0))
					{
						unk_0x3EE48ADC8C7F5CC4(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
					}
					else
					{
						unk_0xC4F7B29AE0A7D629(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
					}
					uParam1->f_3 = 2;
				}
				break;
			}
	}
}

int func_155(int iParam0)
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return 1;
	}
	return 0;
}

int func_156(var uParam0)
{
	if (unk_0x2AC37494BBF1DB16(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

int func_157(var uParam0)
{
	if (unk_0x2AC37494BBF1DB16(*uParam0) || unk_0x2AC37494BBF1DB16(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

void func_158(var uParam0)
{
	int iVar0;
	var uVar1;
	
	if (*uParam0 == 52)
	{
		func_159(&(uParam0->f_41[1]));
		func_159(&(uParam0->f_41[2]));
	}
	if (func_133(unk_0xC1A5EC5C986B98AD()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_132(uParam0->f_28[iVar0]))
			{
				if (!unk_0x3C3D6D026CF7F51B(uParam0->f_28[iVar0], 0))
				{
					unk_0xDDE449983CE7572E(uParam0->f_28[iVar0], 1, 0);
					unk_0x2718E9CC165A99F6(uParam0->f_28[0], 0);
				}
				unk_0x71A535529C1CA5DF(uParam0->f_28[iVar0], 1);
				if (*uParam0 == 34)
				{
					if (func_133(uParam0->f_41[0]))
					{
						unk_0xDDE449983CE7572E(uParam0->f_41[0], 1, 0);
						unk_0x2718E9CC165A99F6(uParam0->f_41[0], 0);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_184(uParam0->f_28[iVar0]);
						break;
					
					case 8:
						unk_0x28818732C8F0F80E("rcmcollect_paperleadinout@");
						while (!unk_0x2BBF749E555360DC("rcmcollect_paperleadinout@"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xDBC7406226B5540E(&uVar1);
						unk_0x3EE48ADC8C7F5CC4(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0xC6C9BF71106ABCAC(0, unk_0xC1A5EC5C986B98AD(), 10000f, -1, 0, 0);
						unk_0xF2CFC6EC8C85FA78(uVar1);
						unk_0x3D7110D966B0CEA2(uParam0->f_28[iVar0], uVar1);
						unk_0x63EF69C6969A3D26(&uVar1);
						break;
					
					case 0:
					case 1:
						unk_0x28818732C8F0F80E("rcmabigail");
						while (!unk_0x2BBF749E555360DC("rcmabigail"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xDBC7406226B5540E(&uVar1);
						unk_0x3EE48ADC8C7F5CC4(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0xC6C9BF71106ABCAC(0, unk_0xC1A5EC5C986B98AD(), 10000f, -1, 0, 0);
						unk_0xF2CFC6EC8C85FA78(uVar1);
						unk_0x3D7110D966B0CEA2(uParam0->f_28[iVar0], uVar1);
						unk_0x63EF69C6969A3D26(&uVar1);
						break;
					
					case 32:
						unk_0x28818732C8F0F80E("rcmminute1");
						while (!unk_0x2BBF749E555360DC("rcmminute1"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xDBC7406226B5540E(&uVar1);
						if (iVar0 == 0)
						{
							unk_0x3EE48ADC8C7F5CC4(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						else
						{
							unk_0x3EE48ADC8C7F5CC4(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						unk_0xC6C9BF71106ABCAC(0, unk_0xC1A5EC5C986B98AD(), 10000f, -1, 0, 0);
						unk_0xF2CFC6EC8C85FA78(uVar1);
						unk_0x3D7110D966B0CEA2(uParam0->f_28[iVar0], uVar1);
						unk_0x63EF69C6969A3D26(&uVar1);
						break;
					
					case 24:
						unk_0x28818732C8F0F80E("special_ped@hao@base");
						while (!unk_0x2BBF749E555360DC("special_ped@hao@base"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xDBC7406226B5540E(&uVar1);
						unk_0x3EE48ADC8C7F5CC4(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, 0, 0, 0);
						unk_0xC6C9BF71106ABCAC(0, unk_0xC1A5EC5C986B98AD(), 10000f, -1, 0, 0);
						unk_0xF2CFC6EC8C85FA78(uVar1);
						unk_0x3D7110D966B0CEA2(uParam0->f_28[iVar0], uVar1);
						unk_0x63EF69C6969A3D26(&uVar1);
						break;
					
					default:
						unk_0xA0E06A3361300416(uParam0->f_28[iVar0]);
						unk_0xC6C9BF71106ABCAC(uParam0->f_28[iVar0], unk_0xC1A5EC5C986B98AD(), 10000f, -1, 0, 0);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_159(var uParam0)
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (unk_0xEFF022A75A217E08(*uParam0))
		{
			unk_0xA81AA70A4D25E140(*uParam0, 1, 1);
		}
		unk_0xEF078F1FEE785D3E(uParam0);
	}
}

void func_160(var uParam0)
{
	int iVar0;
	
	if (func_133(unk_0xC1A5EC5C986B98AD()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_132(uParam0->f_28[iVar0]))
			{
				unk_0x7FE5E05BE63F6CB8(uParam0->f_28[iVar0], 1, 0);
				unk_0xC5B2830898581862(uParam0->f_28[iVar0], 0);
				unk_0x71A535529C1CA5DF(uParam0->f_28[iVar0], 1);
				unk_0xCAC2B0C65B18E755(uParam0->f_28[iVar0], unk_0xC1A5EC5C986B98AD(), 0, 16);
				unk_0x1EEF71E3CDD868D3(&(uParam0->f_28[iVar0]));
			}
			iVar0++;
		}
	}
}

int func_161(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_35 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (func_132(unk_0xC1A5EC5C986B98AD()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0x7DE17ACDD8BA2642(uParam0->f_35[iVar0]))
			{
				if (unk_0x055111B11E6624FD(uParam0->f_35[iVar0], 0))
				{
					func_389("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return 0;
				}
				if (!unk_0xFBD273FDBCF0C5BD(uParam0->f_35[iVar0], 0))
				{
					func_389("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return 0;
				}
				if (unk_0x7559C38E6535AB89(uParam0->f_35[iVar0], unk_0xC1A5EC5C986B98AD(), 0))
				{
					func_389("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return 0;
				}
				if (unk_0x2935B4D6CE81318D(uParam0->f_35[iVar0]) < 850)
				{
					func_389("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return 0;
				}
				if (bParam2)
				{
					if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
					{
						if (unk_0x110B96B5C67CC73B(uParam0->f_35[iVar0], unk_0xC1A5EC5C986B98AD()) && unk_0xDC58AE028CB223BA(unk_0xC1A5EC5C986B98AD()) > 5f)
						{
							func_389("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return 0;
						}
						uVar2 = unk_0xE475C458F52F1781();
						if (func_163(uVar2))
						{
							if (unk_0x504B9BB48D41C264(uVar2) == joaat("towtruck") || unk_0x504B9BB48D41C264(iVar2) == joaat("towtruck2"))
							{
								if (func_163(uParam0->f_35[iVar0]))
								{
									if (unk_0xF1A395BE96006DEF(iVar2, uParam0->f_35[iVar0]))
									{
										func_389("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return 0;
									}
								}
							}
						}
					}
					else
					{
						iVar3 = unk_0xE475C458F52F1781();
						if (func_163(iVar3))
						{
							if (unk_0x110B96B5C67CC73B(uParam0->f_35[iVar0], iVar3) && unk_0xDC58AE028CB223BA(iVar3) > 6f)
							{
								func_389("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return 0;
							}
						}
						if (*uParam0 == 16)
						{
							if (func_162(unk_0xC1A5EC5C986B98AD(), uParam0->f_35[iVar0]))
							{
								func_389("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
								return 0;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_162(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x66599E73DBA5A850(iParam0))
	{
		if (unk_0xFBD273FDBCF0C5BD(iParam1, 0))
		{
			iVar0 = unk_0xB3011BC7288F3091(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_163(int iParam0)
{
	if (func_133(uParam0))
	{
		if (unk_0xFBD273FDBCF0C5BD(uParam0, 0))
		{
			if (!unk_0x584CD220C093B0B4(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_164(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_28 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (*uParam0 == 16)
	{
		iParam2 = 1;
	}
	if (*uParam0 == 30)
	{
		iParam2 = 1;
	}
	if (func_132(unk_0xC1A5EC5C986B98AD()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0x7DE17ACDD8BA2642(uParam0->f_28[iVar0]))
			{
				if (!unk_0x66599E73DBA5A850(uParam0->f_28[iVar0]))
				{
					if (unk_0xACD39355028D39EF(unk_0xC1A5EC5C986B98AD()))
					{
						if (unk_0x110B96B5C67CC73B(unk_0xC1A5EC5C986B98AD(), uParam0->f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								func_158(uParam0);
							}
							else
							{
								func_160(uParam0);
							}
							if (func_152())
							{
								func_150();
							}
							func_389("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((unk_0x603C398B47455767(uParam0->f_28[iVar0]) || unk_0x07960491F4346AF3(uParam0->f_28[iVar0])) || unk_0x02EC000DE597469F(uParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_158(uParam0);
						}
						else
						{
							func_160(uParam0);
						}
						func_389("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (unk_0x48A4D45B3B4CEFFD(uParam0->f_28[iVar0]))
					{
						if (unk_0xEAEF747543427AC5(uParam0->f_28[iVar0], unk_0xC1A5EC5C986B98AD(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								func_158(uParam0);
							}
							else
							{
								func_160(uParam0);
							}
							func_389("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (func_183(*uParam0))
					{
						if (!func_207(*uParam0))
						{
							if (func_178(uParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_158(uParam0);
								}
								else
								{
									func_160(uParam0);
								}
								func_389("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (unk_0xD612176B6DC58EF7(-1, unk_0x30BE8A934C020461(uParam0->f_28[iVar0], 1), 15f))
						{
							if (iParam2 == 0)
							{
								func_158(uParam0);
							}
							else
							{
								func_160(uParam0);
							}
							func_389("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_166(uParam0->f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								func_158(uParam0);
							}
							else
							{
								func_160(uParam0);
							}
							func_389("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!func_165(*uParam0))
					{
						if (unk_0xD612176B6DC58EF7(-1, unk_0x30BE8A934C020461(uParam0->f_28[iVar0], 1), 5f))
						{
							if (iParam2 == 0)
							{
								func_158(uParam0);
							}
							else
							{
								func_160(uParam0);
							}
							func_389("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0)
						{
							if (iParam2 == 0)
							{
								func_158(uParam0);
							}
							else
							{
								func_160(uParam0);
							}
							func_389("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					func_389("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (func_133(uParam0->f_41[0]))
						{
							unk_0xDDE449983CE7572E(uParam0->f_41[0], 1, 0);
							unk_0x2718E9CC165A99F6(uParam0->f_41[0], 0);
						}
					}
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_165(int iParam0)
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_133(unk_0xC1A5EC5C986B98AD()) && func_133(iParam0))
	{
		if (func_177(iParam0) || unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iParam0))
		{
			if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_167(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_167(int iParam0, float fParam1)
{
	return func_168(iParam0, unk_0xC1A5EC5C986B98AD(), fParam1, 1, 250, 7);
}

bool func_168(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_176(iParam0, iParam1);
	if (!func_133(iParam0) || !func_133(iParam1))
	{
		if (iVar4 != -1)
		{
			func_175(&(Local_37[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_172(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_171();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_37[iVar4 /*4*/].f_1 = iParam0;
		Local_37[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x985D9D5ED4D5145A(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_169(&(Local_37[iVar4 /*4*/]), Var1, iParam1, &(Local_37[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0xA5E11AF0A2B928C1() - Local_37[iVar4 /*4*/].f_3) < iParam4);
}

int func_169(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_133(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_170(iParam4, iParam7) };
		*uParam0 = unk_0xB4C9A1D39D0533BF(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x5A2817B89A8ECCD2(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x71904BD37B848CAF(iVar7))
	{
		func_133(iVar7);
		if (unk_0x9C8D7679C15E75FF(iVar7) == iParam4)
		{
			if (bLocal_78)
			{
				unk_0x69151260CB07DF0E(Param1, unk_0x30BE8A934C020461(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0xA5E11AF0A2B928C1();
			return 1;
		}
		return 0;
	}
	if (unk_0xA6B591D40DE982B5(iVar7))
	{
		func_133(iVar7);
		if (unk_0x3C3D6D026CF7F51B(iParam4, 0))
		{
			if (unk_0x4DFB7A1A6909D574(iVar7) == unk_0x95DC39736F6748E3(iParam4, 0))
			{
				if (bLocal_78)
				{
					unk_0x69151260CB07DF0E(Param1, unk_0x30BE8A934C020461(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0xA5E11AF0A2B928C1();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_170(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x15A88CFAAFFC6C4B(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x30BE8A934C020461(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x985D9D5ED4D5145A(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x985D9D5ED4D5145A(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x985D9D5ED4D5145A(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x985D9D5ED4D5145A(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x985D9D5ED4D5145A(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x985D9D5ED4D5145A(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x30BE8A934C020461(iParam0, 1);
}

int func_171()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37.f_0)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_172(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_174(unk_0x30BE8A934C020461(iParam1, 1) - unk_0x30BE8A934C020461(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x26A9C8234C71B669(iParam0) };
	}
	else
	{
		Var3 = { func_174(unk_0x985D9D5ED4D5145A(iParam0, 31086, 0f, 5f, 0f) - unk_0x985D9D5ED4D5145A(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_173(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_173(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_174(struct<3> Param0)
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

void func_175(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_176(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37.f_0)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_177(var uParam0)
{
	if (unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), uParam0) && unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_133(unk_0xC1A5EC5C986B98AD()) && func_133(uParam0))
	{
		unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_182(uParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_179(uParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x7B783B62D5123CC7(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x612907CF3208D1E3(unk_0x30BE8A934C020461(uParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_182(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_179(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_179(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x30BE8A934C020461(uParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x7A7E3100F1649F5B(unk_0x30BE8A934C020461(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x7A7E3100F1649F5B(unk_0x30BE8A934C020461(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x7A7E3100F1649F5B(unk_0x30BE8A934C020461(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x7A7E3100F1649F5B(unk_0x30BE8A934C020461(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_180(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_180(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x332F7E85F9805351(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_180(var uParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x96E845EE39BF3453(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x96E845EE39BF3453(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x96E845EE39BF3453(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x96E845EE39BF3453(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x96E845EE39BF3453(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_181(uParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_181(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_174(Param1 - unk_0x30BE8A934C020461(uParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0x26A9C8234C71B669(iParam0) };
	}
	else
	{
		Var3 = { func_174(unk_0x985D9D5ED4D5145A(iParam0, 31086, 0f, 5f, 0f) - unk_0x985D9D5ED4D5145A(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_173(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_182(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
		{
			if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), uParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x612907CF3208D1E3(unk_0x30BE8A934C020461(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_183(int iParam0)
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return 0;
	}
	return 1;
}

void func_184(int iParam0)
{
	var uVar0;
	
	if (func_133(unk_0xC1A5EC5C986B98AD()) && func_133(uParam0))
	{
		unk_0x28818732C8F0F80E("rcmextreme3");
		while (!unk_0x2BBF749E555360DC("rcmextreme3"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xDBC7406226B5540E(&uVar0);
		unk_0x3EE48ADC8C7F5CC4(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, 0, 0, 0);
		unk_0x82C6DD5E8460E2C0(0, 1);
		unk_0xF24926C6435B3653(0, 64.6f, -737.8f, 44.2f);
		unk_0xC6C9BF71106ABCAC(0, unk_0xC1A5EC5C986B98AD(), 10000f, -1, 0, 0);
		unk_0xF2CFC6EC8C85FA78(uVar0);
		unk_0x3D7110D966B0CEA2(uParam0, uVar0);
		unk_0x63EF69C6969A3D26(&uVar0);
	}
}

int func_185(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_191();
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (func_195(iParam0))
	{
		return 0;
	}
	if (!func_189(4))
	{
		if (func_193(iParam0))
		{
		}
		else
		{
			return 1;
		}
	}
	if (func_188() && !func_187())
	{
		return 1;
	}
	if (!func_186(iParam0))
	{
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) != 0)
			{
				return 1;
			}
		}
	}
	if (!BitTest(Global_113648.f_18576[iParam0 /*6*/], 2))
	{
		return 1;
	}
	return 0;
}

int func_186(int iParam0)
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_187()
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

int func_188()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_189(int iParam0)
{
	return func_190(iParam0, Global_43257);
}

int func_190(int iParam0, int iParam1)
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

int func_191()
{
	return func_192(unk_0x688846D56810779A(), 0);
}

int func_192(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x14580F20CBCE4FA9(uParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_116(iVar0, &uVar1);
		if (unk_0x14580F20CBCE4FA9(uVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

int func_193(int iParam0)
{
	if ((func_194() && Global_100681.f_11 == 6) && iParam0 == func_192(&(Global_100681.f_3), 0))
	{
		return 1;
	}
	return 0;
}

int func_194()
{
	if (((Global_100681 == 13 || Global_100681 == 10) || Global_100681 == 11) || Global_100681 == 12)
	{
		return 0;
	}
	return 1;
}

int func_195(int iParam0)
{
	if (func_222(0))
	{
		if (Global_78805.f_1 == 7)
		{
			if (Global_78805 == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_196()
{
	func_201(0);
	func_200();
	func_197();
}

void func_197()
{
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (func_198(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 10.5f, 1, 1056964608, 0, 1, 0))
			{
				if (unk_0xF5F493B789EA063E(unk_0xC1A5EC5C986B98AD(), joaat("script_task_leave_any_vehicle")) != 1)
				{
					unk_0x6FE9A0C01D25F413(unk_0xC1A5EC5C986B98AD(), 0, 0);
				}
			}
		}
	}
}

int func_198(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_199(iParam0);
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

void func_199(int iParam0)
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

void func_200()
{
	unk_0x8B438725D591ED78(0, 21, 1);
	unk_0x8B438725D591ED78(0, 37, 1);
	unk_0x8B438725D591ED78(0, 25, 1);
	unk_0x8B438725D591ED78(0, 141, 1);
	unk_0x8B438725D591ED78(0, 140, 1);
	unk_0x8B438725D591ED78(0, 24, 1);
	unk_0x8B438725D591ED78(0, 257, 1);
	unk_0x8B438725D591ED78(0, 22, 1);
	unk_0x8B438725D591ED78(0, 23, 1);
}

void func_201(int iParam0)
{
	if (func_206())
	{
		return;
	}
	if (!Global_20383.f_1 == 1)
	{
		if (func_205(0))
		{
			func_202(iParam0);
		}
		unk_0xECDAB41968FF21A8(&Global_8254, 2);
	}
}

void func_202(int iParam0)
{
	if (func_206())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_204())
		{
			func_203(1, 1);
		}
		else
		{
			func_203(0, 0);
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
	if (!func_147())
	{
		Global_20383.f_1 = 3;
	}
}

void func_203(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_205(0))
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

bool func_204()
{
	return BitTest(Global_1962996, 5);
}

int func_205(int iParam0)
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

bool func_206()
{
	return BitTest(Global_1962996, 19);
}

int func_207(int iParam0)
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return 1;
	}
	return 0;
}

int func_208(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_191();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_210(&(Global_112735[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	func_209(iParam0);
	return 1;
}

void func_209(int iParam0)
{
	Global_112735[iParam0 /*10*/].f_4 = 1;
	Global_112735[iParam0 /*10*/].f_5 = 0;
	Global_112735[iParam0 /*10*/].f_6 = 0;
	Global_112735[iParam0 /*10*/] = 0;
}

int func_210(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_212(0))
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
		if (!func_189(iParam2))
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
			func_211(uParam0, iParam4);
		}
	}
	return 2;
}

void func_211(var uParam0, int iParam1)
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

int func_212(int iParam0)
{
	if (Global_43257 == 15)
	{
		return 0;
	}
	if (func_189(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_213()
{
	if (Global_100681 == 10 || Global_100681 == 9)
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0)
{
	char* sVar0;
	
	if (Global_78558)
	{
		func_389("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_113648.f_9087 && !func_222(1))
	{
		func_389("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_215(iParam0))
	{
		Global_112735[iParam0 /*10*/].f_1 = 1;
		func_389("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_100681.f_11 == 6)
	{
		if (Global_100681 < 9)
		{
			func_116(iParam0, &sVar0);
			if (unk_0x4310A0DB886F9FED(&(Global_100681.f_3), sVar0))
			{
				func_389("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (unk_0x24B651D85CCE5EB4(joaat("candidate_controller")) == 0)
	{
		Global_112735[iParam0 /*10*/].f_1 = 1;
		func_389("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_215(int iParam0)
{
	var uVar0;
	
	func_116(iParam0, &uVar0);
	if (!func_189(4))
	{
		if (func_193(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_188() && !func_187())
	{
		return 0;
	}
	if (func_221(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = func_191();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_195(iParam0))
	{
		if (!func_220(iParam0))
		{
			return 0;
		}
		if (!func_219(iParam0))
		{
			return 0;
		}
		if (func_218(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_216(5))
		{
			Global_112735[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_112735[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_216(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (Global_100733.f_385 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_216(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		func_217(iParam0, &sVar1);
		iVar9 = unk_0xAF0CB15312D8B8E3(Global_95719[iParam0 /*10*/].f_3, &sVar1);
		if (iVar9 != 0 && Global_100733.f_385 == iVar9)
		{
			return 1;
		}
	}
	return 0;
}

bool func_217(int iParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (unk_0x3BF907958F785E30("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (unk_0x3BF907958F785E30("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (unk_0x3BF907958F785E30("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !unk_0x4310A0DB886F9FED(sParam1, "");
}

int func_218(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113648.f_18576[iParam0 /*6*/], 3);
}

int func_219(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113648.f_18576[iParam0 /*6*/], 2);
}

int func_220(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113648.f_18576[iParam0 /*6*/], 0);
}

int func_221(int iParam0)
{
	if (func_186(iParam0))
	{
		return 0;
	}
	else if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_222(bool bParam0)
{
	if (!bParam0 && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

char* func_223(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Rampage1";
		
		case 1:
			return "Rampage3";
		
		case 2:
			return "Rampage4";
		
		case 3:
			return "Rampage5";
		
		case 4:
			return "Rampage2";
		
		default:
	}
	return "";
}

int func_224(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 52;
		
		case 1:
			return 54;
		
		case 2:
			return 55;
		
		case 3:
			return 56;
		
		case 4:
			return 53;
		
		default:
	}
	return -1;
}

bool func_225()
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_230(unk_0xC1A5EC5C986B98AD()))
	{
		return bVar0;
	}
	if (Global_112735[56 /*10*/].f_3)
	{
		return bVar0;
	}
	if (unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
	{
		if (iLocal_290)
		{
			unk_0xCD3C8E1022864F65(1);
			func_229("RAMP_HELP_CRIM", -1);
			iLocal_290 = 0;
		}
		bVar0 = true;
	}
	else if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (iLocal_289)
		{
			unk_0xCD3C8E1022864F65(1);
			func_229("RAMP_HELP_FOOT", -1);
			iLocal_289 = 0;
		}
		bVar0 = true;
	}
	else if ((func_228(0) || unk_0xB53553DC4AAC7D8A()) || func_227())
	{
		if (func_2("RAMP_HELP_TRIG"))
		{
			if (func_228(0))
			{
			}
			else if (unk_0xB53553DC4AAC7D8A())
			{
			}
			else if (func_227())
			{
			}
			unk_0xCD3C8E1022864F65(1);
			iLocal_291 = 0;
		}
		bVar0 = true;
	}
	else if (func_373(108))
	{
		if (!iLocal_291)
		{
			if (!func_2("RAMP_HELP_TRIG"))
			{
				unk_0xCD3C8E1022864F65(1);
				func_226("RAMP_HELP_TRIG");
			}
			iLocal_291 = 1;
		}
		bVar0 = !unk_0x51EB177CA0562B62(2, 51);
	}
	return bVar0;
}

void func_226(char* sParam0)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 1, 1, -1);
}

int func_227()
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		return Global_98159.f_44 == 1;
	}
	return 0;
}

bool func_228(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23131.f_4 && Global_23131.f_104 == 4);
	}
	return Global_23131.f_4;
}

void func_229(char* sParam0, int iParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
}

bool func_230(int iParam0)
{
	if (!unk_0x7DE17ACDD8BA2642(iParam0))
	{
		return 0;
	}
	return !unk_0x055111B11E6624FD(iParam0, 0);
}

int func_231(float fParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (!func_230(unk_0xC1A5EC5C986B98AD()))
	{
		return -1;
	}
	Var4 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Var1 = { Global_32543[(iLocal_286 + iVar0) /*23*/][0 /*3*/] };
		if (unk_0x2E496FE654DA4166(Var4, Var1, 1) <= fParam0 && unk_0x2655A8EC638E4FD1((Var4.f_2 - Var1.f_2)) < 1.5f)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_232()
{
	func_59();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_233(var* uParam0, struct<3> Param1)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	
	iVar0 = 0;
	iVar1[0] = 52;
	iVar1[1] = 53;
	iVar1[2] = 54;
	iVar1[3] = 55;
	iVar1[4] = 56;
	if (!func_370(&iVar1, uParam0, Param1, 5f))
	{
		func_389(" Didn't know which RC To Launch");
		func_374(uParam0, 1);
	}
	if (!func_214(*uParam0))
	{
		func_389(" RC Can't Launch");
		func_374(uParam0, 1);
	}
	if (func_369(*uParam0))
	{
		while (true)
		{
			unk_0x4EDE34FBADD967A6(0);
			if (func_368(*uParam0))
			{
				func_374(uParam0, 1);
			}
		}
	}
	func_279(uParam0);
	unk_0xF82BC5193AF62796(Param1, uParam0->f_15, 1, 0, 0, 0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (*uParam0 == 52 || *uParam0 == 53)
		{
			if (func_133(uParam0->f_28[0]))
			{
				if (unk_0xD612176B6DC58EF7(-1, unk_0x30BE8A934C020461(uParam0->f_28[0], 1), 5.1f))
				{
					if (*uParam0 == 52)
					{
						iVar7 = 0;
						while (iVar7 < uParam0->f_41)
						{
							if (unk_0x7DE17ACDD8BA2642(uParam0->f_41[iVar7]))
							{
								if ((func_133(uParam0->f_28[0]) && unk_0x836874EEF89A8AC0(uParam0->f_41[iVar7], uParam0->f_28[0])) || (func_133(uParam0->f_28[1]) && unk_0x836874EEF89A8AC0(uParam0->f_41[iVar7], uParam0->f_28[1])))
								{
									unk_0xEF078F1FEE785D3E(&(uParam0->f_41[iVar7]));
								}
							}
							iVar7++;
						}
					}
					unk_0x7E70B702E8033847(uParam0->f_28[0], 100, 500, 0, 1, 1, 0);
					unk_0xBDB4E7074E200B95(uParam0->f_28[0], 1000, 1, 0);
					if (func_133(uParam0->f_28[1]))
					{
						unk_0x7E70B702E8033847(uParam0->f_28[1], 100, 500, 0, 1, 1, 0);
						unk_0xBDB4E7074E200B95(uParam0->f_28[1], 1000, 1, 0);
					}
					func_389("Sitting Rampage attacked with explosives, cleaning up");
					func_374(uParam0, 1);
				}
			}
			if (func_133(uParam0->f_28[1]))
			{
				if (unk_0xD612176B6DC58EF7(-1, unk_0x30BE8A934C020461(uParam0->f_28[1], 1), 5.1f))
				{
					if (*uParam0 == 52)
					{
						iVar7 = 0;
						while (iVar7 < uParam0->f_41)
						{
							if (unk_0x7DE17ACDD8BA2642(uParam0->f_41[iVar7]))
							{
								if ((func_133(uParam0->f_28[0]) && unk_0x836874EEF89A8AC0(uParam0->f_41[iVar7], uParam0->f_28[0])) || (func_133(uParam0->f_28[1]) && unk_0x836874EEF89A8AC0(uParam0->f_41[iVar7], uParam0->f_28[1])))
								{
									unk_0xEF078F1FEE785D3E(&(uParam0->f_41[iVar7]));
								}
							}
							iVar7++;
						}
					}
					unk_0x7E70B702E8033847(uParam0->f_28[1], 100, 500, 0, 1, 1, 0);
					unk_0xBDB4E7074E200B95(uParam0->f_28[1], 1000, 1, 0);
					if (func_133(uParam0->f_28[0]))
					{
						unk_0x7E70B702E8033847(uParam0->f_28[0], 100, 500, 0, 1, 1, 0);
						unk_0xBDB4E7074E200B95(uParam0->f_28[0], 1000, 1, 0);
					}
					func_389("Sitting Rampage attacked with explosives, cleaning up");
					func_374(uParam0, 1);
				}
			}
		}
		if (func_278(uParam0))
		{
			func_277(uParam0);
			func_389(" RC combat happening in area, tell peds to flee");
			func_158(uParam0);
			func_374(uParam0, 1);
		}
		if (!func_153(uParam0, 1))
		{
			func_389(" RC Is Not Fine And In Range");
			func_374(uParam0, 1);
		}
		if (func_276(52))
		{
			if (unk_0xACC2F57D4FC0353D("Rampage1"))
			{
				func_389(" Turning Off Scenario Group For Rampage 1");
				unk_0xC5090431EE763EA5("Rampage1", 0);
			}
		}
		func_275(*uParam0);
		func_267(&iLocal_287, &(uParam0->f_9), Param1);
		if (iVar0 == 0 && iLocal_287 != -1)
		{
			func_266(uParam0, &uLocal_292);
			if (unk_0xFD017BA8C1B2996F())
			{
				func_389(" Cutscene Loaded");
				iVar0 = 1;
			}
		}
		Local_296 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
		if ((!(*uParam0 == 52 && Local_296.f_2 > 34f) && !(*uParam0 == 53 && Local_296.f_2 > 71f)) && !(*uParam0 == 54 && Local_296.f_2 > 30f))
		{
			if (func_254(uParam0, 0))
			{
				if (*uParam0 == 53)
				{
					if (func_251(uParam0))
					{
						func_389(" Trigger Conditions Met");
						func_196();
						if (!func_5(uParam0))
						{
							func_389(" RC Can't Launch");
							func_374(uParam0, 1);
						}
						func_389(" RC Launcher Waiting To Terminate");
						if (func_3(uParam0))
						{
							func_389(" Ready To Terminate");
							func_374(uParam0, 0);
						}
					}
				}
				else if (func_250(uParam0))
				{
					func_389(" Trigger Conditions Met");
					func_196();
					if (!func_5(uParam0))
					{
						func_389(" RC Can't Launch");
						func_374(uParam0, 1);
					}
					func_389(" RC Launcher Waiting To Terminate");
					if (func_3(uParam0))
					{
						func_389(" Ready To Terminate");
						func_374(uParam0, 0);
					}
				}
			}
			else
			{
				if (*uParam0 == 53)
				{
					func_234(uParam0);
				}
				if (unk_0x3FACE5B6ACB3A4AA())
				{
					iLocal_113 = -1;
					unk_0x0D6E6120F1782BCF(0);
					unk_0x1F9F6C767BE640D5(unk_0xC1A5EC5C986B98AD());
				}
			}
		}
	}
}

void func_234(var* uParam0)
{
	char* sVar0;
	
	sVar0 = "misstrvram_2";
	switch (iLocal_114)
	{
		case 0:
			unk_0x28818732C8F0F80E(sVar0);
			if (unk_0x2BBF749E555360DC(sVar0))
			{
				iLocal_114++;
			}
			break;
		
		case 1:
			if (func_133(uParam0->f_28[0]))
			{
				if (func_249(uParam0->f_28[0], unk_0xC1A5EC5C986B98AD(), 1) < 30f && unk_0x865259F0333CAA4B(uParam0->f_28[0]))
				{
					func_248(&uLocal_119, 0, uParam0->f_28[0], "RAMPAGEHIPSTER", 0, 1);
					iLocal_114++;
				}
			}
			break;
		
		case 2:
			uLocal_115[0] = unk_0x191673E3F99212B2(Local_106, Local_109, 2);
			if (func_133(uParam0->f_28[0]))
			{
				func_235(&uLocal_119, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_1", 7, 0, 0);
				unk_0x468D976993BF7FE1(uParam0->f_28[0], uLocal_115[0], sVar0, "hipster_post_post_irony", 8f, -8f, 513, 0, 1148846080, 0);
			}
			unk_0x5F243F8265BB664F(uLocal_115[0], 0);
			unk_0xE4E4F775E5660E56(uLocal_115[0], 1);
			iLocal_114++;
			break;
		
		case 3:
			if (unk_0x411B750250543BD0(uLocal_115[0]))
			{
				if (unk_0xABF98B1999FE64CA(uLocal_115[0]) >= 0.95f)
				{
					iLocal_114++;
				}
			}
			break;
		
		case 4:
			uLocal_115[1] = unk_0x191673E3F99212B2(Local_106, Local_109, 2);
			if (func_133(uParam0->f_28[0]))
			{
				func_235(&uLocal_119, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_2", 7, 0, 0);
				unk_0x468D976993BF7FE1(uParam0->f_28[0], uLocal_115[1], sVar0, "hipster_self_hating_hipster", 8f, -8f, 513, 0, 1148846080, 0);
			}
			unk_0x5F243F8265BB664F(uLocal_115[1], 0);
			unk_0xE4E4F775E5660E56(uLocal_115[1], 1);
			iLocal_114++;
			break;
		
		case 5:
			if (unk_0x411B750250543BD0(uLocal_115[1]))
			{
				if (unk_0xABF98B1999FE64CA(uLocal_115[1]) >= 0.95f)
				{
					iLocal_114++;
				}
			}
			break;
		
		case 6:
			uLocal_115[2] = unk_0x191673E3F99212B2(Local_106, Local_109, 2);
			if (func_133(uParam0->f_28[0]))
			{
				unk_0x468D976993BF7FE1(uParam0->f_28[0], uLocal_115[2], sVar0, "hipster_idle", 8f, -8f, 513, 0, 1148846080, 0);
			}
			unk_0x5F243F8265BB664F(uLocal_115[2], 1);
			unk_0xE4E4F775E5660E56(uLocal_115[2], 0);
			iLocal_114++;
			break;
		
		case 7:
			break;
	}
}

bool func_235(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_247(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_236(sParam2, iParam4, 0);
}

int func_236(char* sParam0, int iParam1, bool bParam2)
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
					func_151();
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
		if (func_246(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_245();
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
				func_244();
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
				if (func_243())
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
			if (func_147())
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
			func_242();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_241();
		func_237();
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
		func_151();
	}
	return 0;
}

void func_237()
{
	if (!func_238())
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

int func_238()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_93())
	{
		return 0;
	}
	if (func_239(unk_0x93E99A2DBCBA9CFA()))
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

bool func_239(int iParam0)
{
	return func_240(iParam0, 20);
}

var func_240(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

void func_241()
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

void func_242()
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

int func_243()
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

void func_244()
{
	if (func_60(14))
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
		Global_20383 = func_232();
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

void func_245()
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

bool func_246(int iParam0, int iParam1)
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

void func_247(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_248(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

float func_249(int iParam0, int iParam1, int iParam2)
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

int func_250(var* uParam0)
{
	func_196();
	if (iLocal_113 < 0)
	{
		if (unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(uParam0->f_28[1], 1)) < 25f)
		{
			return 1;
		}
		switch (*uParam0)
		{
			case 52:
				unk_0x882C9EFD4718B1BE(uParam0->f_28[0], 0.1f, 0f, 0.9f, 1, -1, 2500, 2000, 0);
				unk_0xEDB03CCB50D11479(unk_0xC1A5EC5C986B98AD(), uParam0->f_28[0], -1, 0, 2);
				unk_0x370E0AF689B03584(1);
				unk_0xAA160386D8E4E042(-5f);
				unk_0x9EE1696A6DC35C68(0.1f);
				unk_0xC9BDB196718B1103(0f);
				unk_0x7277D09A0F87C1AD(0.3f);
				unk_0x6AD781FF4E2F7E3D(40f);
				break;
			
			case 54:
				unk_0x882C9EFD4718B1BE(uParam0->f_28[0], 0f, -0.1f, 0.9f, 1, -1, 2500, 2000, 0);
				unk_0xEDB03CCB50D11479(unk_0xC1A5EC5C986B98AD(), uParam0->f_28[0], -1, 0, 2);
				unk_0x370E0AF689B03584(1);
				unk_0xAA160386D8E4E042(-10f);
				unk_0x9EE1696A6DC35C68(-0.9f);
				unk_0xC9BDB196718B1103(0f);
				unk_0x7277D09A0F87C1AD(0.35f);
				unk_0x6AD781FF4E2F7E3D(40f);
				break;
			
			case 55:
				unk_0x882C9EFD4718B1BE(uParam0->f_28[1], 0f, 0f, 0.9f, 1, -1, 2500, 2000, 0);
				unk_0xEDB03CCB50D11479(unk_0xC1A5EC5C986B98AD(), uParam0->f_28[1], -1, 0, 2);
				unk_0x370E0AF689B03584(1);
				unk_0xAA160386D8E4E042(-8f);
				unk_0x9EE1696A6DC35C68(-0.9f);
				unk_0xC9BDB196718B1103(0.1f);
				unk_0x7277D09A0F87C1AD(0.35f);
				unk_0x6AD781FF4E2F7E3D(40f);
				break;
			
			case 56:
				unk_0x882C9EFD4718B1BE(uParam0->f_28[1], 0f, 0f, 0f, 1, -1, 2500, 2000, 0);
				unk_0xEDB03CCB50D11479(unk_0xC1A5EC5C986B98AD(), uParam0->f_28[1], -1, 0, 2);
				unk_0x370E0AF689B03584(1);
				unk_0xAA160386D8E4E042(-5f);
				unk_0x9EE1696A6DC35C68(0.15f);
				unk_0xC9BDB196718B1103(0f);
				unk_0x7277D09A0F87C1AD(0.3f);
				unk_0x6AD781FF4E2F7E3D(40f);
				break;
		}
		iLocal_113 = unk_0xA5E11AF0A2B928C1() + 2500;
	}
	else if (unk_0xA5E11AF0A2B928C1() > iLocal_113)
	{
		iLocal_113 = -1;
		return 1;
	}
	return 0;
}

int func_251(var uParam0)
{
	func_196();
	switch (iLocal_284)
	{
		case 0:
			if (func_133(uParam0->f_28[0]))
			{
				func_252();
				iLocal_284++;
			}
			break;
		
		case 1:
			if (func_133(uParam0->f_28[0]))
			{
				if (!func_152())
				{
					if (func_235(&uLocal_119, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_3", 8, 0, 0))
					{
						uLocal_285 = unk_0x191673E3F99212B2(Local_106, Local_109, 2);
						unk_0x468D976993BF7FE1(uParam0->f_28[0], uLocal_285, "misstrvram_2", "hipster_cunts_in_america", 8f, -8f, 513, 0, 1148846080, 0);
						unk_0x882C9EFD4718B1BE(uParam0->f_28[0], 0f, 0f, 0.5f, 1, -1, 2500, 2000, 0);
						unk_0xEDB03CCB50D11479(unk_0xC1A5EC5C986B98AD(), uParam0->f_28[0], -1, 0, 2);
						unk_0x370E0AF689B03584(1);
						unk_0xAA160386D8E4E042(0f);
						unk_0x9EE1696A6DC35C68(0.1f);
						unk_0xC9BDB196718B1103(0f);
						unk_0x7277D09A0F87C1AD(0.35f);
						unk_0x6AD781FF4E2F7E3D(40f);
						iLocal_284++;
					}
				}
			}
			break;
		
		case 2:
			if (func_133(uParam0->f_28[0]))
			{
				if (!func_152())
				{
					iLocal_284++;
				}
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_252()
{
	Global_20591 = 0;
	func_253();
}

void func_253()
{
	unk_0x782234C275AFBA24();
	Global_22736 = 0;
	if (unk_0x0DCB385165FDE763())
	{
		unk_0xD6625E11483B2324(0);
		Global_21725 = 6;
	}
}

int func_254(var uParam0, int iParam1)
{
	switch (uParam0->f_16)
	{
		case 0:
			if (*uParam0 == 12)
			{
				if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 1826.631f, 4699.115f, 35.38089f, 1812.878f, 4710.457f, 42.05354f, 23.75f, 0, 1, 0))
				{
					if (func_133(uParam0->f_28[0]))
					{
						if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(uParam0->f_28[0], 1), 1) < 3f)
						{
							if (func_259(2))
							{
								if (func_258(uParam0->f_27))
								{
									func_257(uParam0->f_27, *uParam0);
									func_389("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
									return 1;
								}
							}
						}
					}
					else
					{
						return 0;
					}
				}
				else if (func_133(uParam0->f_28[0]))
				{
					if (func_256(uParam0))
					{
						if (func_259(2))
						{
							if (func_258(uParam0->f_27))
							{
								func_257(uParam0->f_27, *uParam0);
								return 1;
							}
						}
					}
				}
				else
				{
					return 0;
				}
			}
			else if (*uParam0 == 21)
			{
				if ((((!unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -1895.788f, -434.0192f, 40.30126f, -1883.038f, -444.0811f, 50.24509f, 8.5f, 0, 1, 0) && !unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -1883.576f, -443.6434f, 36.40581f, -1874.826f, -448.0797f, 49.15162f, 8.5f, 0, 1, 0)) && !unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -1876.343f, -446.2214f, 35.64637f, -1866.952f, -456.5601f, 49.0442f, 8.5f, 0, 1, 0)) && !unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -1882.997f, -438.9922f, 44.17246f, -1874.079f, -443.342f, 48.69179f, 0.75f, 0, 1, 0)) || unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -1878.822f, -441.7655f, 44.9175f, -1877.941f, -439.9522f, 47.28982f, 1.25f, 0, 1, 0))
				{
					if (func_133(uParam0->f_28[0]))
					{
						if (func_256(uParam0))
						{
							if (func_259(2))
							{
								if (func_258(uParam0->f_27))
								{
									func_257(uParam0->f_27, *uParam0);
									return 1;
								}
							}
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
			else if (*uParam0 == 22)
			{
				if (!unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 837.0731f, 1261.086f, 366.1592f, 780.8383f, 1260.829f, 351.405f, 17.75f, 0, 1, 0))
				{
					if (func_133(uParam0->f_28[0]))
					{
						if (func_256(uParam0))
						{
							if (func_259(2))
							{
								if (func_258(uParam0->f_27))
								{
									func_257(uParam0->f_27, *uParam0);
									return 1;
								}
							}
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
			else if (func_133(uParam0->f_28[0]))
			{
				if (func_256(uParam0))
				{
					if (func_259(2))
					{
						if (func_258(uParam0->f_27))
						{
							func_257(uParam0->f_27, *uParam0);
							return 1;
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_133(uParam0->f_35[0]))
			{
				if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), uParam0->f_35[0], 0))
				{
					if (func_259(3))
					{
						func_257(uParam0->f_27, *uParam0);
						return 1;
					}
				}
				else if (iParam1 == 1)
				{
					func_255();
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0x7DE17ACDD8BA2642(uParam0->f_35[0]))
			{
				if (!unk_0x055111B11E6624FD(uParam0->f_35[0], 0))
				{
					if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(uParam0->f_35[0], 1), 1) < uParam0->f_15)
					{
						if (func_259(2))
						{
							if (func_258(uParam0->f_27))
							{
								func_257(uParam0->f_27, *uParam0);
								return 1;
							}
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 3:
			if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), uParam0->f_17[0 /*3*/], 1) < uParam0->f_15)
			{
				if (func_259(2))
				{
					if (func_258(uParam0->f_27))
					{
						func_257(uParam0->f_27, *uParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], 0, 1, 0))
			{
				if (func_259(2))
				{
					if (func_258(uParam0->f_27))
					{
						func_257(uParam0->f_27, *uParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 5:
			if (*uParam0 == 6)
			{
				if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
				{
					if (func_133(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)))
					{
						if (unk_0x091E6E360116B927(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), joaat("towtruck")) || unk_0x091E6E360116B927(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), joaat("towtruck2")))
						{
							if (unk_0xF1A395BE96006DEF(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), uParam0->f_35[0]))
							{
								if (func_259(3))
								{
									return 1;
								}
							}
						}
						else if ((unk_0x091E6E360116B927(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), joaat("cargobob")) || unk_0x091E6E360116B927(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), joaat("cargobob2"))) || unk_0x091E6E360116B927(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), joaat("cargobob3")))
						{
							if (unk_0x7D65213BA22BDE46(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0)) && unk_0xA00D276AE6AD636B(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), uParam0->f_35[0]))
							{
								if (func_259(3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
			else if (*uParam0 == 10)
			{
				if (unk_0xB3C2812E280A588D(unk_0xC1A5EC5C986B98AD()) >= 2f)
				{
					if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 245.8885f, 371.9034f, 103.9884f, 241.5898f, 359.6458f, 107.3461f, 1.25f, 0, 1, 0))
					{
						if (func_259(2))
						{
							if (func_258(uParam0->f_27))
							{
								func_257(uParam0->f_27, *uParam0);
								func_389("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return 1;
							}
						}
					}
				}
			}
			else if (*uParam0 == 46)
			{
				if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -164.2046f, 277.4866f, 91.55322f, -153.6f, 277.4061f, 97.33813f, 10f, 0, 1, 0))
				{
					return 0;
				}
			}
			else if (*uParam0 == 31)
			{
				if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 2728.948f, 4143.44f, 42.29295f, 2722.213f, 4144.521f, 45.43182f, 10f, 0, 1, 0))
				{
					if (func_259(2))
					{
						if (func_258(1))
						{
							func_257(1, *uParam0);
							func_389("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return 1;
						}
					}
				}
			}
			else if (*uParam0 == 39)
			{
				if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -992.4995f, 358.7455f, 96.3735f, -1021.94f, 361.8888f, 65.36148f, 30f, 0, 1, 0))
				{
					if (!unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -983.5426f, 369.1104f, 68.46017f, -1028.566f, 395.4613f, 94.57245f, 15f, 0, 1, 0))
					{
						if (!unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), -983.875f, 346.7556f, 68.02096f, -1021.451f, 336.3458f, 93.18714f, 14.5f, 0, 1, 0))
						{
							if (func_259(2))
							{
								if (func_258(uParam0->f_27))
								{
									func_257(uParam0->f_27, *uParam0);
									func_389("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return 1;
								}
							}
						}
					}
				}
			}
			if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], uParam0->f_24, 0, 1, 0))
			{
				if (*uParam0 == 45)
				{
					if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), 2338.697f, 2597.037f, 45.39052f, 2324.003f, 2597.185f, 47.74961f, 8.5f, 0, 1, 0))
					{
						return 0;
					}
				}
				if (func_259(2))
				{
					if (func_258(uParam0->f_27))
					{
						func_257(uParam0->f_27, *uParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

void func_255()
{
	func_30(&(Global_104212.f_2890), &Global_104212, 0, 1, 1, 0);
}

int func_256(var uParam0)
{
	float fVar0;
	
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) && uParam0->f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(uParam0->f_28[0], 1), 1) < (uParam0->f_15 + fVar0))
		{
			return 1;
		}
	}
	else if (unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(uParam0->f_28[0], 1), 1) < uParam0->f_15)
	{
		return 1;
	}
	return 0;
}

void func_257(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		if (!func_136(iParam1))
		{
			return;
		}
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			func_389("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (unk_0x6DFDDBD2D0067A98(unk_0xC1A5EC5C986B98AD()) || unk_0x2AE2D64A5E125BF2(unk_0xC1A5EC5C986B98AD()))
			{
				func_389("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				unk_0xC8EE2E23B410B65A(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 0, 1, 0);
			}
			func_196();
		}
	}
}

int func_258(bool bParam0)
{
	int iVar0;
	
	if (unk_0x48DC6A21D1CAD89C(unk_0x5DC3DCA82C806319()))
	{
		if (unk_0x4FBDBA15B9C41492(unk_0xC1A5EC5C986B98AD()))
		{
			return 1;
		}
		else if (bParam0)
		{
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				iVar0 = unk_0xE475C458F52F1781();
				if (func_163(iVar0))
				{
					if (unk_0x6DFDDBD2D0067A98(unk_0xC1A5EC5C986B98AD()) || unk_0x2AE2D64A5E125BF2(unk_0xC1A5EC5C986B98AD()))
					{
						if ((!unk_0x85A0C6DDA57C5652(iVar0) && !unk_0xDA70CA6A0D1738D3(iVar0)) && unk_0xDC58AE028CB223BA(iVar0) < 1f)
						{
							return 1;
						}
					}
					else if (!unk_0xDA70CA6A0D1738D3(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_259(int iParam0)
{
	bool bVar0;
	
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				bVar0 = func_232();
				if (!func_39(bVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_227()) || Global_112695) || Global_32166) || func_265()) || func_246(8, -1)) || func_99()) || func_264()) || func_263()) || func_262()) || Global_113648.f_7690.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1) || func_227()) || Global_32166) || func_265()) || func_246(8, -1)) || func_263()) || func_99()) || func_264()) || func_262()) || Global_113648.f_7690.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x5CD470B5BDDAC029(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_227()) || Global_112695) || Global_32166) || func_265()) || func_246(8, -1)) || func_263()) || func_99()) || func_264()) || func_262()) || Global_113648.f_7690.f_919[bVar0] == 5) || Global_43804 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0)) || func_227()) || Global_112695) || Global_32166) || func_265()) || func_246(8, -1)) || func_99()) || func_264()) || func_262()) || Global_113648.f_7690.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_227() || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0) || func_246(8, -1)) || func_262()) || func_261()) || Global_113648.f_7690.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_246(8, -1) || func_99()) || func_264()) || func_261()) || func_260())
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
							if ((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || func_227()) || Global_32166) || func_265()) || func_246(8, -1)) || func_264()) || func_263()) || func_262()) || Global_113648.f_7690.f_919[bVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA())) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA())) || !unk_0x35DF833D93BCC488()) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || func_227()) || func_264()) || Global_112695) || Global_32166) || func_265()) || Global_44446) || func_246(8, -1)) || func_263()) || func_261()) || func_262()) || Global_113648.f_7690.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xB8C39D031C377E33(unk_0xC1A5EC5C986B98AD(), 0) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA())) || !unk_0xE2A83DCD3E79D8D3(unk_0x93E99A2DBCBA9CFA())) || !unk_0x35DF833D93BCC488()) || unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0)) || unk_0xDA70CA6A0D1738D3(unk_0xC1A5EC5C986B98AD())) || unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1)) || unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD())) || unk_0x854821B2A72B2E98(unk_0xC1A5EC5C986B98AD())) || unk_0x279D0BCF8F708D74(unk_0xC1A5EC5C986B98AD())) || unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1)) || unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA())) || func_227()) || Global_112695) || Global_32166) || func_265()) || func_246(8, -1)) || func_263()) || func_261()) || func_99()) || func_264()) || func_262())
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

var func_260()
{
	return Global_100720.f_1;
}

int func_261()
{
	if (Global_97603 != -1)
	{
		return BitTest(Global_91469[Global_97603 /*34*/].f_15, 13);
	}
	return 0;
}

int func_262()
{
	if (unk_0x24B651D85CCE5EB4(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_263()
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

bool func_264()
{
	return Global_100733.f_388 > 0;
}

var func_265()
{
	return Global_1575060;
}

void func_266(var uParam0, var uParam1)
{
	if (unk_0x3B7E6BE32C24780B())
	{
		if (func_133(unk_0xC1A5EC5C986B98AD()))
		{
			unk_0x414C472A4880EAA3("Trevor", unk_0xC1A5EC5C986B98AD(), unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()));
		}
		switch (*uParam0)
		{
			case 52:
				if (func_133(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "TriggerHappy_WhiteTrash";
					unk_0x414C472A4880EAA3((*uParam1)[0], uParam0->f_28[0], 0);
				}
				if (func_133(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Nervous_WhiteTrash";
					unk_0x414C472A4880EAA3((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			
			case 53:
				if (func_133(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Rampage_Hipster";
					unk_0x414C472A4880EAA3((*uParam1)[0], uParam0->f_28[0], 0);
				}
				break;
			
			case 54:
				if (func_133(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Armed_Mexican_Goon";
					unk_0x414C472A4880EAA3((*uParam1)[0], uParam0->f_28[0], 0);
					unk_0x7DD6BD848F607C5C((*uParam1)[0], 8, 1, 0, 0);
				}
				if (func_133(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Mexican_Goon";
					unk_0x414C472A4880EAA3((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			
			case 55:
				if (func_133(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Thug";
					unk_0x414C472A4880EAA3((*uParam1)[0], uParam0->f_28[0], 0);
					unk_0x7DD6BD848F607C5C((*uParam1)[0], 10, 0, 1, 0);
				}
				if (func_133(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Armed_Thug";
					unk_0x414C472A4880EAA3((*uParam1)[1], uParam0->f_28[1], 0);
					unk_0x7DD6BD848F607C5C((*uParam1)[1], 10, 1, 0, 0);
				}
				break;
			
			case 56:
				if (func_133(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Army_Guy_Right";
					unk_0x414C472A4880EAA3((*uParam1)[0], uParam0->f_28[0], 0);
				}
				if (func_133(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Army_Guy_Left";
					unk_0x414C472A4880EAA3((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			}
	}
}

void func_267(int iParam0, char* sParam1, struct<3> Param2)
{
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (!unk_0x2AC37494BBF1DB16(sParam1))
		{
			if (Global_43257 == 17)
			{
				if (*iParam0 != -1)
				{
					func_273(iParam0);
				}
			}
			else if (func_272())
			{
				if (*iParam0 != -1)
				{
					func_273(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (func_271(unk_0xC1A5EC5C986B98AD(), Param2, 1) <= 100f)
				{
					func_270(iParam0, 1);
				}
			}
			else
			{
				switch (func_269(*iParam0))
				{
					case 1:
						if (unk_0x4310A0DB886F9FED(sParam1, "JOSH_1_INT_CONCAT"))
						{
							unk_0x028B1EDDD6EC4C79(sParam1, 14, 8);
						}
						else
						{
							unk_0x2A3302E8B9D69CC9(sParam1, 8);
						}
						unk_0x6625030E273DF9FF(2);
						func_268(*iParam0, 1);
						break;
					
					case 2:
						unk_0xD9BE1A7D50AF0CB4(0);
						unk_0x423A98584B1756BF();
						unk_0x6625030E273DF9FF(0);
						func_268(*iParam0, 0);
						break;
				}
				if (func_271(unk_0xC1A5EC5C986B98AD(), Param2, 1) > 120f)
				{
					func_273(iParam0);
				}
			}
		}
	}
}

void func_268(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_78554 == iParam0)
		{
			Global_78555 = iParam0;
		}
	}
	else if (Global_78555 == iParam0)
	{
		Global_78555 = -1;
	}
}

int func_269(int iParam0)
{
	if (Global_78554 == iParam0)
	{
		if (Global_78555 == -1)
		{
			if (Global_78553 < unk_0xE16824A2A0B2A6D8())
			{
				return 1;
			}
		}
	}
	else if (Global_78555 == iParam0)
	{
		return 2;
	}
	return 0;
}

void func_270(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (Global_78551 < 5)
	{
		Global_78540[Global_78551 /*2*/] = 0;
		Global_78540[Global_78551 /*2*/].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_78551)
			{
				if (Global_78540[iVar1 /*2*/] == Global_78540[Global_78551 /*2*/])
				{
					Global_78540[Global_78551 /*2*/]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_78540[Global_78551 /*2*/];
		Global_78551++;
		Global_78552 = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

float func_271(int iParam0, struct<3> Param1, int iParam4)
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

bool func_272()
{
	return Global_97990;
}

void func_273(int iParam0)
{
	unk_0xD9BE1A7D50AF0CB4(0);
	unk_0x423A98584B1756BF();
	func_274(iParam0);
}

void func_274(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_78555 == *iParam0)
	{
		func_268(*iParam0, 0);
	}
	if (Global_78554 == *iParam0)
	{
		Global_78554 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_78551)
	{
		if (Global_78540[iVar1 /*2*/] == *iParam0)
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_78551 - 2))
	{
		Global_78540[iVar2 /*2*/] = Global_78540[iVar2 + 1 /*2*/];
		Global_78540[iVar2 /*2*/].f_1 = Global_78540[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_78540[(Global_78551 - 1) /*2*/] = -1;
	Global_78540[(Global_78551 - 1) /*2*/].f_1 = 3;
	Global_78551 = (Global_78551 - 1);
	Global_78552 = 1;
	Global_78553 = unk_0xE16824A2A0B2A6D8();
	*iParam0 = -1;
}

void func_275(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_191();
	}
	if (iParam0 == -1)
	{
		return;
	}
	Global_112735[iParam0 /*10*/].f_1 = 1;
}

bool func_276(int iParam0)
{
	return Global_112735[iParam0 /*10*/].f_1;
}

void func_277(var uParam0)
{
	if (*uParam0 == 52)
	{
		func_389(" RAMPAGE 1 - FORCE FREEZE CHAIRS AND PRE-RELEASE FOR B*2124538");
		if (unk_0x7DE17ACDD8BA2642(uParam0->f_41[3]))
		{
			unk_0x2718E9CC165A99F6(uParam0->f_41[3], 1);
			unk_0xC621CC7313639986(&(uParam0->f_41[3]));
			uParam0->f_41[3] = 0;
		}
		if (unk_0x7DE17ACDD8BA2642(uParam0->f_41[4]))
		{
			unk_0x2718E9CC165A99F6(uParam0->f_41[4], 1);
			unk_0xC621CC7313639986(&(uParam0->f_41[4]));
			uParam0->f_41[4] = 0;
		}
	}
}

int func_278(var uParam0)
{
	if ((*uParam0 == 54 || *uParam0 == 55) || *uParam0 == 56)
	{
		if (unk_0x98B3AA67B555D71E(unk_0xC1A5EC5C986B98AD()) > 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_279(var uParam0)
{
	switch (*uParam0)
	{
		case 52:
			func_367(uParam0);
			iLocal_299 = func_366();
			break;
		
		case 53:
			func_360(uParam0);
			iLocal_299 = func_358();
			break;
		
		case 54:
			func_357(uParam0);
			break;
		
		case 55:
			func_356(uParam0);
			iLocal_299 = func_355();
			break;
		
		case 56:
			func_280(uParam0);
			break;
		
		default:
			break;
	}
	if (iLocal_299 != 0)
	{
	}
	uParam0->f_16 = 0;
	if (*uParam0 == 53)
	{
		uParam0->f_15 = 15f;
	}
	else
	{
		uParam0->f_15 = 12f;
	}
	uParam0->f_25 = 1;
}

void func_280(var uParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	sVar0 = "misstvrram_5";
	iVar1 = joaat("s_m_y_marine_03");
	iVar2 = joaat("crusader");
	unk_0x852EC2A7DE66202D(iVar1);
	unk_0x852EC2A7DE66202D(iVar2);
	unk_0x28818732C8F0F80E(sVar0);
	unk_0xEF8BC9C45E60F0D1(joaat("weapon_grenadelauncher"), 31, 0);
	while ((!unk_0x0CBB7C273DED26E7(iVar1) || !unk_0x0CBB7C273DED26E7(iVar2)) || !unk_0x2BBF749E555360DC(sVar0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_353(&(uParam0->f_28[0]), iVar1, -1299.4f, 2506.24f, 21.07f, -122.79f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_352(&(uParam0->f_28[0]));
	unk_0x260A70C42FAA4EDC(uParam0->f_28[0], "RAMP:PED 0");
	unk_0x3EE48ADC8C7F5CC4(uParam0->f_28[0], sVar0, "marines_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 0, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 1, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 2, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 3, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 4, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 5, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 6, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 7, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 8, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 9, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 10, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 11, 0, 0, 0);
	unk_0x7E4E6DFA37692889(uParam0->f_28[0], 0, 1);
	unk_0x7E4E6DFA37692889(uParam0->f_28[0], 1, 1);
	unk_0x7E4E6DFA37692889(uParam0->f_28[0], 2, 1);
	unk_0x7E4E6DFA37692889(uParam0->f_28[0], 3, 1);
	unk_0x7E4E6DFA37692889(uParam0->f_28[0], 4, 1);
	unk_0x7E4E6DFA37692889(uParam0->f_28[0], 5, 1);
	unk_0x7E4E6DFA37692889(uParam0->f_28[0], 6, 1);
	unk_0x7E4E6DFA37692889(uParam0->f_28[0], 7, 1);
	unk_0x7E4E6DFA37692889(uParam0->f_28[0], 8, 1);
	while (!func_353(&(uParam0->f_28[1]), iVar1, -1299.49f, 2505.53f, 21.05f, -101.94f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_352(&(uParam0->f_28[1]));
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 0, 1, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 1, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 2, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 3, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 4, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 5, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 6, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 7, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 8, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 9, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 10, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 11, 0, 0, 0);
	unk_0x7E4E6DFA37692889(uParam0->f_28[1], 0, 1);
	unk_0x7E4E6DFA37692889(uParam0->f_28[1], 1, 1);
	unk_0x7E4E6DFA37692889(uParam0->f_28[1], 2, 1);
	unk_0x7E4E6DFA37692889(uParam0->f_28[1], 3, 1);
	unk_0x7E4E6DFA37692889(uParam0->f_28[1], 4, 1);
	unk_0x7E4E6DFA37692889(uParam0->f_28[1], 5, 1);
	unk_0x7E4E6DFA37692889(uParam0->f_28[1], 6, 1);
	unk_0x7E4E6DFA37692889(uParam0->f_28[1], 7, 1);
	unk_0x7E4E6DFA37692889(uParam0->f_28[1], 8, 1);
	unk_0x260A70C42FAA4EDC(uParam0->f_28[1], "RAMP:PED 1");
	unk_0x3EE48ADC8C7F5CC4(uParam0->f_28[1], sVar0, "marines_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_351(&(uParam0->f_35[0]), iVar2, -1298.16f, 2504.153f, 21.062f, 165.48f))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xCB8DD5B44DBC2DEB(uParam0->f_35[0], 1084227584);
	func_350(&(uParam0->f_35[0]));
	unk_0x0D14FEE68F4897C9(uParam0->f_35[0], 1, 0);
	unk_0x0D14FEE68F4897C9(uParam0->f_35[0], 1, 1);
	unk_0x2718E9CC165A99F6(uParam0->f_35[0], 1);
	if (!func_281(&(uParam0->f_41[0]), joaat("weapon_grenadelauncher"), -1297.84f, 2505.91f, 19.34f, func_349(-0.5f)))
	{
	}
	else
	{
		unk_0xDDE449983CE7572E(uParam0->f_41[0], 0, 0);
		unk_0xC2E3C377D893C17A(uParam0->f_41[0], -1297.84f, 2505.91f, 19.34f, 1, 0, 0, 1);
		unk_0x692C3FDAD7DB53CC(uParam0->f_41[0], func_349(-0.5f));
		unk_0x2718E9CC165A99F6(uParam0->f_41[0], 1);
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_5_CON", 24);
	uParam0->f_27 = 0;
	unk_0xE0A291F406691F03(iVar1);
	unk_0xE0A291F406691F03(iVar2);
}

int func_281(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		unk_0xEF078F1FEE785D3E(uParam0);
		*uParam0 = 0;
	}
	iVar0 = unk_0x823FFE0ED27D2780(iParam1);
	unk_0x852EC2A7DE66202D(iVar0);
	iVar1 = unk_0xA5E11AF0A2B928C1() + 10000;
	while (unk_0xA5E11AF0A2B928C1() < iVar1)
	{
		if (unk_0x0CBB7C273DED26E7(iVar0))
		{
			*uParam0 = unk_0x9A27CA9A0DA58E5D(iParam1, -1, Param2, 1, 1065353216, 0, 0, 1);
			unk_0xE0A291F406691F03(iVar0);
			if (func_348(iParam1, joaat("gun_root")) && !func_346(iParam1))
			{
				iVar3 = func_282(iParam1, joaat("gun_root"), iVar2);
				while (iVar3 != 0)
				{
					if (unk_0x21E969D02FB87642(*uParam0, iVar3))
					{
						unk_0x4C723003E87DB68B(*uParam0, iVar3);
					}
					iVar2++;
					iVar3 = func_282(iParam1, joaat("gun_root"), iVar2);
				}
			}
			if (unk_0x7DE17ACDD8BA2642(*uParam0))
			{
				unk_0xC2E3C377D893C17A(*uParam0, Param2, 1, 0, 0, 1);
				unk_0x692C3FDAD7DB53CC(*uParam0, fParam5);
				return 1;
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xE0A291F406691F03(iVar0);
	return 0;
}

int func_282(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar7;
	int iVar8;
	
	iVar8 = 0;
	while (func_283(&Var0, iParam0, iVar7, 0))
	{
		if (Var0.f_4 == iParam1)
		{
			if (iParam2 == iVar8)
			{
				return Var0.f_0;
			}
			iVar8++;
		}
		iVar7++;
	}
	return 0;
}

bool func_283(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0[37];
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	var uVar54;
	struct<4> Var93;
	
	func_345(uParam0, 0, 989182658, 0, 0);
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			if (func_344(iLocal_105))
			{
				if (!func_341(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_pistol"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 4:
							func_345(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_345(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 4:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_345(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_345(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_345(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_345(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_345(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_combatpistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_combatpistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_345(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_345(uParam0, joaat("component_combatpistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			if (unk_0xA26A9A07F761D8F8())
			{
				switch (iParam2)
				{
					case 0:
						func_345(uParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_345(uParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_345(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_345(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_345(uParam0, joaat("component_appistol_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					
					case 5:
						func_345(uParam0, joaat("component_appistol_varmod_security"), joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_345(uParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_345(uParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_345(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_345(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_345(uParam0, joaat("component_appistol_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (unk_0xA26A9A07F761D8F8())
			{
				switch (iParam2)
				{
					case 0:
						func_345(uParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_345(uParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_345(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_345(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_345(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_345(uParam0, joaat("component_microsmg_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					
					case 6:
						func_345(uParam0, joaat("component_microsmg_varmod_security"), joaat("gun_root"), 2, 0);
						break;
					
					case 7:
						func_345(uParam0, -1566778158, joaat("gun_root"), 3, 0);
						break;
				}
				if (*uParam0 == -1566778158 && !(func_340(36788, -1) || func_331(-1566778158, joaat("weapon_microsmg"), -1)))
				{
					return 0;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_345(uParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_345(uParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_345(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_345(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_345(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_345(uParam0, joaat("component_microsmg_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_smg"):
			if (func_344(iLocal_105))
			{
				if (!func_341(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_smg"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_345(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_345(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_345(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 4:
							func_345(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_345(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_345(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_345(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_345(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 4:
						func_345(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_345(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_345(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (func_344(iLocal_105))
			{
				if (!func_341(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_assaultrifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 5:
							func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 6:
							func_345(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
							break;
						
						case 7:
							func_345(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 8:
							func_345(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_345(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_345(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_345(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_345(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_345(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_345(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_345(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_345(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (func_344(iLocal_105))
			{
				if (!func_341(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_carbinerifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 5:
							func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 6:
							func_345(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 7:
							func_345(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 8:
							func_345(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_345(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_345(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_345(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_345(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_345(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_345(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_345(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_345(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_advancedrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_advancedrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_345(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_345(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_345(uParam0, joaat("component_advancedrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_mg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_mg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_at_scope_small_02"), joaat("WAPScop"), 1, 0);
					break;
				
				case 3:
					func_345(uParam0, joaat("component_mg_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (func_344(iLocal_105))
			{
				if (!func_341(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_combatmg"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_345(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_345(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 4:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_345(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_345(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 3:
						func_345(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_345(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_assaultshotgun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_assaultshotgun_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 4:
					func_345(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_sniperrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
					break;
				
				case 3:
					func_345(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
					break;
				
				case 4:
					func_345(uParam0, joaat("component_sniperrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (func_344(iLocal_105))
			{
				if (!func_341(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_heavysniper"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_345(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_345(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
						break;
					
					case 2:
						func_345(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_minigun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_assaultsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_assaultsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_345(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_345(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_345(uParam0, joaat("component_assaultsmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_pistol50_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_pistol50_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_345(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_345(uParam0, joaat("component_pistol50_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_sawnoffshotgun_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_assaultrifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_assaultrifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_assaultrifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_345(uParam0, joaat("component_assaultrifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_345(uParam0, joaat("component_assaultrifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_345(uParam0, joaat("component_assaultrifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_345(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 7:
					func_345(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 8:
					func_345(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 9:
					func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 10:
					func_345(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 11:
					func_345(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 12:
					func_345(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 13:
					func_345(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 14:
					func_345(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 15:
					func_345(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 16:
					func_345(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 17:
					func_345(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 18:
					func_345(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 19:
					func_345(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 20:
					func_345(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 21:
					func_345(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 22:
					func_345(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 23:
					func_345(uParam0, joaat("component_at_ar_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 24:
					func_345(uParam0, joaat("component_at_ar_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 25:
					func_345(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_345(uParam0, joaat("component_assaultrifle_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_345(uParam0, joaat("component_assaultrifle_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_345(uParam0, joaat("component_assaultrifle_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_345(uParam0, joaat("component_assaultrifle_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_345(uParam0, joaat("component_assaultrifle_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_345(uParam0, joaat("component_assaultrifle_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_345(uParam0, joaat("component_assaultrifle_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_345(uParam0, joaat("component_assaultrifle_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_345(uParam0, joaat("component_assaultrifle_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_345(uParam0, joaat("component_assaultrifle_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_345(uParam0, joaat("component_assaultrifle_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_carbinerifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_carbinerifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_carbinerifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_345(uParam0, joaat("component_carbinerifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_345(uParam0, joaat("component_carbinerifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_345(uParam0, joaat("component_carbinerifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_345(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 7:
					func_345(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 8:
					func_345(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_345(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 11:
					func_345(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
					break;
				
				case 12:
					func_345(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 13:
					func_345(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 14:
					func_345(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 15:
					func_345(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 16:
					func_345(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 17:
					func_345(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 18:
					func_345(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 19:
					func_345(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 20:
					func_345(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 21:
					func_345(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 22:
					func_345(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 23:
					func_345(uParam0, joaat("component_at_cr_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 24:
					func_345(uParam0, joaat("component_at_cr_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 25:
					func_345(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_345(uParam0, joaat("component_carbinerifle_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_345(uParam0, joaat("component_carbinerifle_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_345(uParam0, joaat("component_carbinerifle_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_345(uParam0, joaat("component_carbinerifle_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_345(uParam0, joaat("component_carbinerifle_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_345(uParam0, joaat("component_carbinerifle_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_345(uParam0, joaat("component_carbinerifle_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_345(uParam0, joaat("component_carbinerifle_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_345(uParam0, joaat("component_carbinerifle_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_345(uParam0, joaat("component_carbinerifle_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_345(uParam0, joaat("component_carbinerifle_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_combatmg_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_combatmg_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_combatmg_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_345(uParam0, joaat("component_combatmg_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_345(uParam0, joaat("component_combatmg_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_345(uParam0, joaat("component_combatmg_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_345(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 7:
					func_345(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 8:
					func_345(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_345(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_345(uParam0, joaat("component_at_scope_small_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 11:
					func_345(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 12:
					func_345(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 13:
					func_345(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 14:
					func_345(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 15:
					func_345(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 16:
					func_345(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 17:
					func_345(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 18:
					func_345(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 19:
					func_345(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 20:
					func_345(uParam0, joaat("component_at_mg_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 21:
					func_345(uParam0, joaat("component_at_mg_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 22:
					func_345(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 23:
					func_345(uParam0, joaat("component_combatmg_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 24:
					func_345(uParam0, joaat("component_combatmg_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 25:
					func_345(uParam0, joaat("component_combatmg_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 26:
					func_345(uParam0, joaat("component_combatmg_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 27:
					func_345(uParam0, joaat("component_combatmg_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 28:
					func_345(uParam0, joaat("component_combatmg_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 29:
					func_345(uParam0, joaat("component_combatmg_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 30:
					func_345(uParam0, joaat("component_combatmg_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 31:
					func_345(uParam0, joaat("component_combatmg_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 32:
					func_345(uParam0, joaat("component_combatmg_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 33:
					func_345(uParam0, joaat("component_combatmg_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_heavysniper_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_heavysniper_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_heavysniper_mk2_clip_incendiary"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_345(uParam0, joaat("component_heavysniper_mk2_clip_armorpiercing"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_345(uParam0, joaat("component_heavysniper_mk2_clip_fmj"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_345(uParam0, joaat("component_heavysniper_mk2_clip_explosive"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_345(uParam0, joaat("component_at_scope_large_mk2"), joaat("WAPScop"), 1, 0);
					break;
				
				case 7:
					func_345(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 1);
					break;
				
				case 8:
					func_345(uParam0, joaat("component_at_scope_nv"), joaat("WAPScop"), 3, 0);
					break;
				
				case 9:
					func_345(uParam0, joaat("component_at_scope_thermal"), joaat("WAPScop"), 4, 0);
					break;
				
				case 10:
					func_345(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_345(uParam0, joaat("component_at_sr_supp_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_345(uParam0, joaat("component_at_muzzle_08"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 13:
					func_345(uParam0, joaat("component_at_muzzle_09"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 14:
					func_345(uParam0, joaat("component_at_sr_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 15:
					func_345(uParam0, joaat("component_at_sr_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 16:
					func_345(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 17:
					func_345(uParam0, joaat("component_heavysniper_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 18:
					func_345(uParam0, joaat("component_heavysniper_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 19:
					func_345(uParam0, joaat("component_heavysniper_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 20:
					func_345(uParam0, joaat("component_heavysniper_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 21:
					func_345(uParam0, joaat("component_heavysniper_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 22:
					func_345(uParam0, joaat("component_heavysniper_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 23:
					func_345(uParam0, joaat("component_heavysniper_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 24:
					func_345(uParam0, joaat("component_heavysniper_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 25:
					func_345(uParam0, joaat("component_heavysniper_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 26:
					func_345(uParam0, joaat("component_heavysniper_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 27:
					func_345(uParam0, joaat("component_heavysniper_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_pistol_mk2"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_pistol_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_pistol_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_pistol_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_345(uParam0, joaat("component_pistol_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_345(uParam0, joaat("component_pistol_mk2_clip_hollowpoint"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_345(uParam0, joaat("component_pistol_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_345(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 7:
					func_345(uParam0, joaat("component_at_pi_rail"), joaat("WAPScop"), 2, 0);
					break;
				
				case 8:
					func_345(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_345(uParam0, joaat("component_at_pi_flsh_02"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_345(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_345(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_345(uParam0, joaat("component_at_pi_comp"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 13:
					func_345(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 14:
					func_345(uParam0, joaat("component_pistol_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 15:
					func_345(uParam0, joaat("component_pistol_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 16:
					func_345(uParam0, joaat("component_pistol_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 17:
					func_345(uParam0, joaat("component_pistol_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 18:
					func_345(uParam0, joaat("component_pistol_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 19:
					func_345(uParam0, joaat("component_pistol_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 20:
					func_345(uParam0, joaat("component_pistol_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 21:
					func_345(uParam0, joaat("component_pistol_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 22:
					func_345(uParam0, joaat("component_pistol_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 23:
					func_345(uParam0, joaat("component_pistol_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 24:
					func_345(uParam0, joaat("component_pistol_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
				
				case 25:
					func_345(uParam0, 1141184690, joaat("gun_root"), 13, 0);
					break;
			}
			if (*uParam0 == 1141184690 && !func_340(36786, -1))
			{
				return 0;
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_smg_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_smg_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_smg_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_345(uParam0, joaat("component_smg_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_345(uParam0, joaat("component_smg_mk2_clip_hollowpoint"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_345(uParam0, joaat("component_smg_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_345(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 7:
					func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 8:
					func_345(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_345(uParam0, joaat("component_at_sights_smg"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_345(uParam0, joaat("component_at_scope_macro_02_smg_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 11:
					func_345(uParam0, joaat("component_at_scope_small_smg_mk2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 12:
					func_345(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 13:
					func_345(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp_2"), 1, 0);
					break;
				
				case 14:
					func_345(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 15:
					func_345(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 16:
					func_345(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 17:
					func_345(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 18:
					func_345(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 19:
					func_345(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 20:
					func_345(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 21:
					func_345(uParam0, joaat("component_at_sb_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 22:
					func_345(uParam0, joaat("component_at_sb_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 23:
					func_345(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 24:
					func_345(uParam0, joaat("component_smg_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 25:
					func_345(uParam0, joaat("component_smg_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 26:
					func_345(uParam0, joaat("component_smg_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 27:
					func_345(uParam0, joaat("component_smg_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 28:
					func_345(uParam0, joaat("component_smg_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 29:
					func_345(uParam0, joaat("component_smg_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 30:
					func_345(uParam0, joaat("component_smg_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 31:
					func_345(uParam0, joaat("component_smg_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 32:
					func_345(uParam0, joaat("component_smg_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 33:
					func_345(uParam0, joaat("component_smg_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 34:
					func_345(uParam0, joaat("component_smg_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (func_344(iLocal_105))
			{
				if (!func_341(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_pumpshotgun"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 4:
							func_345(uParam0, joaat("component_pumpshotgun_varmod_security"), joaat("gun_root"), 2, 0);
							break;
						
						case 5:
							func_345(uParam0, 330905451, joaat("gun_root"), 3, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else if (unk_0xA26A9A07F761D8F8())
			{
				switch (iParam2)
				{
					case 0:
						func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 1:
						func_345(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 2:
						func_345(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					
					case 3:
						func_345(uParam0, joaat("component_pumpshotgun_varmod_security"), joaat("gun_root"), 2, 0);
						break;
					
					case 4:
						func_345(uParam0, 330905451, joaat("gun_root"), 3, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 1:
						func_345(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 2:
						func_345(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			if (*uParam0 == 330905451 && !(func_340(36787, -1) || func_331(330905451, joaat("weapon_pumpshotgun"), -1)))
			{
				return 0;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (func_344(iLocal_105))
			{
				if (!func_341(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_specialcarbine"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_345(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 5:
							func_345(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_345(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 8:
							func_345(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_345(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_345(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_345(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 8:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_345(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_345(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_345(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_345(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 4:
						func_345(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_345(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 7:
						func_345(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (func_344(iLocal_105))
			{
				if (!func_341(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_snspistol"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_345(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_345(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_345(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (func_344(iLocal_105))
			{
				if (!func_341(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_marksmanrifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
							break;
						
						case 4:
							func_345(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 5:
							func_345(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_345(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_345(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 6:
							func_345(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
						
						case 7:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_345(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_345(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_345(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
						break;
					
					case 3:
						func_345(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 4:
						func_345(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 6:
						func_345(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_revolver"):
			if (func_344(iLocal_105))
			{
				if (!func_341(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_revolver"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_345(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_345(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
						break;
					
					case 2:
						func_345(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (func_344(iLocal_105))
			{
				if (!func_341(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_bullpuprifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_345(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_345(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_345(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_345(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_345(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_345(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 3:
							func_345(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
							break;
						
						case 4:
							func_345(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 6:
							func_345(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
							break;
						
						case 7:
							func_345(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_345(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_345(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_345(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 3:
						func_345(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_345(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 6:
						func_345(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_pumpshotgun_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_pumpshotgun_mk2_clip_incendiary"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_pumpshotgun_mk2_clip_hollowpoint"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_345(uParam0, joaat("component_pumpshotgun_mk2_clip_armorpiercing"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_345(uParam0, joaat("component_pumpshotgun_mk2_clip_explosive"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_345(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 6:
					func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 7:
					func_345(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 8:
					func_345(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
					break;
				
				case 9:
					func_345(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 10:
					func_345(uParam0, joaat("component_at_scope_small_mk2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 11:
					func_345(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 12:
					func_345(uParam0, joaat("component_at_sr_supp_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 13:
					func_345(uParam0, joaat("component_at_muzzle_08"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 14:
					func_345(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 15:
					func_345(uParam0, joaat("component_pumpshotgun_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 16:
					func_345(uParam0, joaat("component_pumpshotgun_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 17:
					func_345(uParam0, joaat("component_pumpshotgun_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 18:
					func_345(uParam0, joaat("component_pumpshotgun_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 19:
					func_345(uParam0, joaat("component_pumpshotgun_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 20:
					func_345(uParam0, joaat("component_pumpshotgun_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 21:
					func_345(uParam0, joaat("component_pumpshotgun_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 22:
					func_345(uParam0, joaat("component_pumpshotgun_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 23:
					func_345(uParam0, joaat("component_pumpshotgun_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 24:
					func_345(uParam0, joaat("component_pumpshotgun_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 25:
					func_345(uParam0, joaat("component_pumpshotgun_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_specialcarbine_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_specialcarbine_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_specialcarbine_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_345(uParam0, joaat("component_specialcarbine_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_345(uParam0, joaat("component_specialcarbine_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_345(uParam0, joaat("component_specialcarbine_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_345(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_345(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 9:
					func_345(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 10:
					func_345(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 11:
					func_345(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 12:
					func_345(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 13:
					func_345(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 14:
					func_345(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 15:
					func_345(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 16:
					func_345(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 17:
					func_345(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 18:
					func_345(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 19:
					func_345(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 20:
					func_345(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp"), 9, 0);
					break;
				
				case 21:
					func_345(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 22:
					func_345(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 23:
					func_345(uParam0, joaat("component_at_sc_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 24:
					func_345(uParam0, joaat("component_at_sc_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 25:
					func_345(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_345(uParam0, joaat("component_specialcarbine_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_345(uParam0, joaat("component_specialcarbine_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_345(uParam0, joaat("component_specialcarbine_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_345(uParam0, joaat("component_specialcarbine_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_345(uParam0, joaat("component_specialcarbine_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_345(uParam0, joaat("component_specialcarbine_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_345(uParam0, joaat("component_specialcarbine_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_345(uParam0, joaat("component_specialcarbine_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_345(uParam0, joaat("component_specialcarbine_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_345(uParam0, joaat("component_specialcarbine_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_345(uParam0, joaat("component_specialcarbine_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_snspistol_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_snspistol_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_snspistol_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_345(uParam0, joaat("component_snspistol_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_345(uParam0, joaat("component_snspistol_mk2_clip_hollowpoint"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_345(uParam0, joaat("component_snspistol_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_345(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 7:
					func_345(uParam0, joaat("component_at_pi_flsh_03"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 8:
					func_345(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_345(uParam0, joaat("component_at_pi_rail_02"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_345(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 11:
					func_345(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 12:
					func_345(uParam0, joaat("component_at_pi_comp_02"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 13:
					func_345(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 14:
					func_345(uParam0, joaat("component_snspistol_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 15:
					func_345(uParam0, joaat("component_snspistol_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 16:
					func_345(uParam0, joaat("component_snspistol_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 17:
					func_345(uParam0, joaat("component_snspistol_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 18:
					func_345(uParam0, joaat("component_snspistol_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 19:
					func_345(uParam0, joaat("component_snspistol_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 20:
					func_345(uParam0, joaat("component_snspistol_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 21:
					func_345(uParam0, joaat("component_snspistol_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 22:
					func_345(uParam0, joaat("component_snspistol_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 23:
					func_345(uParam0, joaat("component_snspistol_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 24:
					func_345(uParam0, joaat("component_snspistol_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_marksmanrifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_marksmanrifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_marksmanrifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_345(uParam0, joaat("component_marksmanrifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_345(uParam0, joaat("component_marksmanrifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_345(uParam0, joaat("component_marksmanrifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_345(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_345(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 9:
					func_345(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 10:
					func_345(uParam0, joaat("component_at_scope_large_fixed_zoom_mk2"), joaat("WAPScop_2"), 4, 1);
					break;
				
				case 11:
					func_345(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 12:
					func_345(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 13:
					func_345(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 14:
					func_345(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 15:
					func_345(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 16:
					func_345(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 17:
					func_345(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 18:
					func_345(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 19:
					func_345(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 20:
					func_345(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 21:
					func_345(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 22:
					func_345(uParam0, joaat("component_at_mrfl_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 23:
					func_345(uParam0, joaat("component_at_mrfl_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 24:
					func_345(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 25:
					func_345(uParam0, joaat("component_marksmanrifle_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 26:
					func_345(uParam0, joaat("component_marksmanrifle_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 27:
					func_345(uParam0, joaat("component_marksmanrifle_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 28:
					func_345(uParam0, joaat("component_marksmanrifle_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 29:
					func_345(uParam0, joaat("component_marksmanrifle_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 30:
					func_345(uParam0, joaat("component_marksmanrifle_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 31:
					func_345(uParam0, joaat("component_marksmanrifle_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 32:
					func_345(uParam0, joaat("component_marksmanrifle_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 33:
					func_345(uParam0, joaat("component_marksmanrifle_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 34:
					func_345(uParam0, joaat("component_marksmanrifle_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 35:
					func_345(uParam0, joaat("component_marksmanrifle_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_revolver_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_revolver_mk2_clip_tracer"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_revolver_mk2_clip_incendiary"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_345(uParam0, joaat("component_revolver_mk2_clip_hollowpoint"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_345(uParam0, joaat("component_revolver_mk2_clip_fmj"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_345(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 6:
					func_345(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
					break;
				
				case 7:
					func_345(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 8:
					func_345(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_345(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_345(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_345(uParam0, joaat("component_at_pi_comp_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_345(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 13:
					func_345(uParam0, joaat("component_revolver_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 14:
					func_345(uParam0, joaat("component_revolver_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 15:
					func_345(uParam0, joaat("component_revolver_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 16:
					func_345(uParam0, joaat("component_revolver_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 17:
					func_345(uParam0, joaat("component_revolver_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 18:
					func_345(uParam0, joaat("component_revolver_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 19:
					func_345(uParam0, joaat("component_revolver_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 20:
					func_345(uParam0, joaat("component_revolver_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 21:
					func_345(uParam0, joaat("component_revolver_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 22:
					func_345(uParam0, joaat("component_revolver_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 23:
					func_345(uParam0, joaat("component_revolver_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_bullpuprifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_bullpuprifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_bullpuprifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_345(uParam0, joaat("component_bullpuprifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_345(uParam0, joaat("component_bullpuprifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_345(uParam0, joaat("component_bullpuprifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_345(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_345(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 9:
					func_345(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 10:
					func_345(uParam0, joaat("component_at_scope_macro_02_mk2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 11:
					func_345(uParam0, joaat("component_at_scope_small_mk2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 12:
					func_345(uParam0, joaat("component_at_bp_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 13:
					func_345(uParam0, joaat("component_at_bp_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 14:
					func_345(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 15:
					func_345(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 16:
					func_345(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 17:
					func_345(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 18:
					func_345(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 19:
					func_345(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 20:
					func_345(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 21:
					func_345(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 22:
					func_345(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp"), 9, 0);
					break;
				
				case 23:
					func_345(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 24:
					func_345(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 25:
					func_345(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_345(uParam0, joaat("component_bullpuprifle_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_345(uParam0, joaat("component_bullpuprifle_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_345(uParam0, joaat("component_bullpuprifle_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_345(uParam0, joaat("component_bullpuprifle_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_345(uParam0, joaat("component_bullpuprifle_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_345(uParam0, joaat("component_bullpuprifle_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_345(uParam0, joaat("component_bullpuprifle_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_345(uParam0, joaat("component_bullpuprifle_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_345(uParam0, joaat("component_bullpuprifle_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_345(uParam0, joaat("component_bullpuprifle_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_345(uParam0, joaat("component_bullpuprifle_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_raypistol"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_raypistol_varmod_xmas18"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_ceramicpistol"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, joaat("component_ceramicpistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_ceramicpistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_ceramicpistol_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavyrifle"):
			if (unk_0xA26A9A07F761D8F8())
			{
				switch (iParam2)
				{
					case 0:
						func_345(uParam0, joaat("component_heavyrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_345(uParam0, joaat("component_heavyrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_345(uParam0, joaat("component_heavyrifle_sight_01"), joaat("WAPScop"), 1, 0);
						break;
					
					case 3:
						func_345(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 2, 0);
						break;
					
					case 4:
						func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_345(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 7:
						func_345(uParam0, joaat("component_heavyrifle_camo1"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_345(uParam0, joaat("component_heavyrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_345(uParam0, joaat("component_heavyrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_345(uParam0, joaat("component_heavyrifle_sight_01"), joaat("WAPScop"), 1, 0);
						break;
					
					case 3:
						func_345(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 2, 0);
						break;
					
					case 4:
						func_345(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_345(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_tacticalrifle"):
			switch (iParam2)
			{
				case 0:
					func_345(uParam0, 927578299, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_345(uParam0, joaat("component_tacticalrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_345(uParam0, joaat("component_at_ar_flsh_reh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_345(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_345(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_knife"):
			if (unk_0xA26A9A07F761D8F8() && func_330(iLocal_105))
			{
				iVar38 = func_328(iParam1, &iVar0);
				if ((iVar38 > 0 && iParam2 >= 0) && iParam2 < iVar0)
				{
					switch (iVar0[iParam2])
					{
						case 370527443:
							func_345(uParam0, iVar0[iParam2], joaat("gun_root"), 1, 0);
							break;
						
						case 1109907117:
							func_345(uParam0, iVar0[iParam2], joaat("gun_root"), 2, 0);
							break;
						
						case 2055456612:
							func_345(uParam0, iVar0[iParam2], joaat("gun_root"), 3, 0);
							break;
						
						case 1690606566:
							func_345(uParam0, iVar0[iParam2], joaat("gun_root"), 4, 0);
							break;
						
						case -1633316949:
							func_345(uParam0, iVar0[iParam2], joaat("gun_root"), 5, 0);
							break;
						
						case -1461476313:
							func_345(uParam0, iVar0[iParam2], joaat("gun_root"), 6, 0);
							break;
						
						case -1770422457:
							func_345(uParam0, iVar0[iParam2], joaat("gun_root"), 7, 0);
							break;
						
						case -2059739958:
							func_345(uParam0, iVar0[iParam2], joaat("gun_root"), 8, 0);
							break;
						
						case -1280001599:
							func_345(uParam0, iVar0[iParam2], joaat("gun_root"), 9, 0);
							break;
						
						case -922885037:
							func_345(uParam0, iVar0[iParam2], joaat("gun_root"), 10, 0);
							break;
						}
					}
			}
			break;
		
		case joaat("weapon_bat"):
			if (unk_0xA26A9A07F761D8F8() && func_330(iLocal_105))
			{
				iVar38 = func_328(iParam1, &iVar0);
				if ((iVar38 > 0 && iParam2 >= 0) && iParam2 < iVar0)
				{
					switch (iVar0[iParam2])
					{
						case 716207715:
							func_345(uParam0, iVar0[iParam2], joaat("gun_root"), 1, 0);
							break;
						
						case 446271089:
							func_345(uParam0, iVar0[iParam2], joaat("gun_root"), 2, 0);
							break;
						
						case 1045616099:
							func_345(uParam0, iVar0[iParam2], joaat("gun_root"), 3, 0);
							break;
						
						case 1336277129:
							func_345(uParam0, iVar0[iParam2], joaat("gun_root"), 4, 0);
							break;
						
						case -513369076:
							func_345(uParam0, iVar0[iParam2], joaat("gun_root"), 5, 0);
							break;
						
						case -447700000:
							func_345(uParam0, iVar0[iParam2], joaat("gun_root"), 6, 0);
							break;
						
						case -149207179:
							func_345(uParam0, iVar0[iParam2], joaat("gun_root"), 7, 0);
							break;
						
						case 166784288:
							func_345(uParam0, iVar0[iParam2], joaat("gun_root"), 8, 0);
							break;
						
						case 2068729789:
							func_345(uParam0, iVar0[iParam2], joaat("gun_root"), 9, 0);
							break;
						
						case 1761389338:
							func_345(uParam0, iVar0[iParam2], joaat("gun_root"), 10, 0);
							break;
						}
					}
			}
			break;
		
		default:
			iVar51 = func_66(iParam1, &uVar54);
			if (iVar51 != -1)
			{
				iVar52 = 0;
				while (iVar52 < unk_0x99844FCFECAC01A5(iVar51))
				{
					if (unk_0xDDBECC1D7EC5DB2B(iVar51, iVar52, &Var93))
					{
						if (!func_63(Var93.f_3))
						{
							if (Var93.f_0 == joaat("WAPClip") || Var93.f_0 == joaat("WAPClip_2"))
							{
								iVar40++;
							}
							else if (Var93.f_0 == joaat("WAPFlshLasr") || Var93.f_0 == joaat("WAPFlshLasr_2"))
							{
								iVar41++;
							}
							else if (Var93.f_0 == joaat("WAPScop") || Var93.f_0 == joaat("WAPScop_2"))
							{
								iVar42++;
							}
							else if (Var93.f_0 == joaat("WAPRail") || Var93.f_0 == joaat("WAPRail_2"))
							{
								iVar43++;
							}
							else if (Var93.f_0 == joaat("WAPGrip") || Var93.f_0 == joaat("WAPGrip_2"))
							{
								iVar44++;
							}
							else if (Var93.f_0 == joaat("WAPSupp") || Var93.f_0 == joaat("WAPSupp_2"))
							{
								iVar45++;
							}
							else if (Var93.f_0 == 1731751835)
							{
								iVar46++;
							}
							else if (Var93.f_0 == joaat("gun_root"))
							{
								iVar47++;
							}
							else if (Var93.f_0 == -31573710)
							{
								iVar48++;
							}
							else if (Var93.f_0 == -1312077031)
							{
								iVar49++;
							}
							else
							{
								iVar50++;
							}
							if (iVar53 == iParam2)
							{
								if (Var93.f_0 == joaat("WAPClip") || Var93.f_0 == joaat("WAPClip_2"))
								{
									iVar39 = iVar40;
								}
								else if (Var93.f_0 == joaat("WAPFlshLasr") || Var93.f_0 == joaat("WAPFlshLasr_2"))
								{
									iVar39 = iVar41;
								}
								else if (Var93.f_0 == joaat("WAPScop") || Var93.f_0 == joaat("WAPScop_2"))
								{
									iVar39 = iVar42;
								}
								else if (Var93.f_0 == joaat("WAPRail") || Var93.f_0 == joaat("WAPRail_2"))
								{
									iVar39 = iVar43;
								}
								else if (Var93.f_0 == joaat("WAPGrip") || Var93.f_0 == joaat("WAPGrip_2"))
								{
									iVar39 = iVar44;
								}
								else if (Var93.f_0 == joaat("WAPSupp") || Var93.f_0 == joaat("WAPSupp_2"))
								{
									iVar39 = iVar45;
								}
								else if (Var93.f_0 == 1731751835)
								{
									iVar39 = iVar46;
								}
								else if (Var93.f_0 == joaat("gun_root"))
								{
									iVar39 = iVar47;
								}
								else if (Var93.f_0 == -31573710)
								{
									iVar39 = iVar48;
								}
								else if (Var93.f_0 == -1312077031)
								{
									iVar39 = iVar49;
								}
								else
								{
									iVar39 = iVar50;
								}
								func_345(uParam0, Var93.f_3, Var93.f_0, iVar39, Var93.f_1);
							}
							iVar53++;
						}
					}
					iVar52++;
				}
			}
			break;
	}
	if (bParam3)
	{
		uParam0->f_2 = func_284(iParam1, *uParam0);
	}
	return uParam0->f_4 != 989182658;
}

int func_284(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<6> Var43;
	int iVar65;
	int iVar66;
	var uVar67;
	struct<6> Var106;
	char* sVar128;
	struct<4> Var144;
	float fVar148;
	
	iVar0 = 0;
	fVar1 = 2.5f;
	if (!unk_0xA26A9A07F761D8F8())
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 155;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 729;
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = 18600;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 735;
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = 14500;
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 165;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 730;
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = 15800;
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 137;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 190;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 775;
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = 15100;
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 134;
						break;
					
					case joaat("component_smg_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 210;
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = 19300;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 565;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 810;
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = 14400;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 105;
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 132;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = 17900;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 124;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 812;
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = 16500;
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 145;
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 450;
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = 15600;
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 126;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 129;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 559;
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = 14000;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 975;
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = 16900;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 139;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 225;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 899;
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 559;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 975;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 920;
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = 13000;
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 575;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 999;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 128;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 525;
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = 17600;
						break;
				}
				if (func_327() && (func_326() || func_325()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						break;
				}
				if (func_327() && (func_326() || func_325()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = 20000;
						break;
				}
				if (func_327() && (func_326() || func_325()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = 13700;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = 3612;
						break;
					
					case joaat("component_at_scope_large_fixed_zoom"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 1020;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 5000;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 1760;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = 17200;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = 3680;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 710;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4800;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = 12000;
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = 4900;
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = 5600;
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = 5500;
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = 5200;
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = 4600;
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = 4700;
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = 4800;
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = 4300;
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = 4000;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 108;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = 9950;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2575;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 11350;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12500;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = 16600;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 29;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = 9150;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = 13900;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 108;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = 9975;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2525;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 11550;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12500;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = 18000;
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						iVar0 = 3680;
						break;
					
					case joaat("component_machinepistol_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4840;
						break;
				}
				break;
			
			default:
				iVar2 = func_66(iParam0, &uVar4);
				if (iVar2 != -1)
				{
					iVar3 = 0;
					while (iVar3 < unk_0x99844FCFECAC01A5(iVar2))
					{
						if (unk_0xDDBECC1D7EC5DB2B(iVar2, iVar3, &Var43))
						{
							if (!func_63(Var43.f_3))
							{
								if (Var43.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (!func_323(iParam1))
									{
										Var43.f_5 = -1;
									}
									if (Var43.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var43.f_5;
									}
									if (iParam0 == joaat("weapon_hammer"))
									{
										if (func_327() && (func_326() || func_325()))
										{
											iVar0 = 0;
										}
									}
								}
							}
						}
						iVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 9175;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2895));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1675;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4347));
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 12050;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4348));
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = Global_262145.f_11040;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4425));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_21193;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = Global_262145.f_21079;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2896));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1825;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4349));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_21080;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4350));
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = Global_262145.f_12431;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4420));
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 9400;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2898));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1975;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4351));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12200;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4352));
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = Global_262145.f_11039;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4414));
						break;
					
					case joaat("component_appistol_varmod_security"):
						iVar0 = Global_262145.f_32010;
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 9325;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2899));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1900;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4355));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10800;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4357));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12150;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4356));
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = Global_262145.f_11043;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4424));
						break;
					
					case joaat("component_microsmg_varmod_security"):
						iVar0 = Global_262145.f_32009;
						break;
					
					case -1566778158:
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 9475;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2900));
						break;
					
					case joaat("component_smg_clip_03"):
						iVar0 = Global_262145.f_16587;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2050;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4358));
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 10825;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4360));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12250;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4359));
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = Global_262145.f_11042;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4429));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_21194;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 9550;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2902));
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						iVar0 = Global_262145.f_16582;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4200;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4368));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2125;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4365));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10850;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4367));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12300;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4366));
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = Global_262145.f_11036;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4415));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_21196;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 9775;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2903));
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						iVar0 = Global_262145.f_16581;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4350;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4376));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2350;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4373));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10900;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4375));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12450;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4374));
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = Global_262145.f_11038;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4418));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_21197;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 9925;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2905));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2425;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4378));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 10950;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4380));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4379));
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = Global_262145.f_11037;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4413));
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 9850;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2906));
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 10925;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4381));
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = Global_262145.f_12432;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4423));
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 10000;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2907));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4425;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4403));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10975;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4404));
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = Global_262145.f_12433;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4419));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_21195;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 1750;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4385));
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 12350;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4386));
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = Global_262145.f_12428;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4427));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_22933;
						break;
					
					case joaat("component_pumpshotgun_varmod_security"):
						iVar0 = Global_262145.f_32007;
						break;
					
					case 330905451:
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 9625;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2909));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4389));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2200;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4390));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12350;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4391));
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 12400;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4392));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4393));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12050;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4394));
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = Global_262145.f_11045;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4430));
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 99;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4395));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4396));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_21198;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4405));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4401));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 11000;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4402));
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2901));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4361));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4364));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4362));
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = Global_262145.f_12429;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4363));
						break;
				}
				break;
			
			case joaat("weapon_gusenberg"):
				switch (iParam1)
				{
					case joaat("component_gusenberg_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_gusenberg_clip_02"):
						iVar0 = Global_262145.f_7061;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = Global_262145.f_7640;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = Global_262145.f_12430;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_22938;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = Global_262145.f_7645;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						iVar0 = Global_262145.f_16584;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_7648;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = Global_262145.f_7644;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_7642;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_7647;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = Global_262145.f_12434;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_22934;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = Global_262145.f_7646;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_262145.f_7650;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_7643;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = Global_262145.f_7670;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = Global_262145.f_7653;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_7656;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_7651;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_262145.f_7652;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_7654;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = Global_262145.f_12435;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_22937;
						break;
				}
				break;
			
			case joaat("weapon_vintagepistol"):
				switch (iParam1)
				{
					case joaat("component_vintagepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_vintagepistol_clip_02"):
						iVar0 = Global_262145.f_8128;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_8129;
						break;
				}
				break;
			
			case joaat("weapon_heavyshotgun"):
				switch (iParam1)
				{
					case joaat("component_heavyshotgun_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavyshotgun_clip_02"):
						iVar0 = Global_262145.f_8857;
						break;
					
					case joaat("component_heavyshotgun_clip_03"):
						iVar0 = Global_262145.f_16588;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_8858;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_8859;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_8860;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = Global_262145.f_8863;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_8864;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_8866;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_8867;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = Global_262145.f_8868;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_22935;
						break;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_15137));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4387));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4388));
						break;
				}
				if (func_327() && (func_326() || func_325()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2897));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4353));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4354));
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = Global_262145.f_11041;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4426));
						break;
				}
				if (func_327() && (func_326() || func_325()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = Global_262145.f_11044;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4428));
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = Global_262145.f_11368;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4433));
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = Global_262145.f_11369;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4434));
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = Global_262145.f_11370;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4435));
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = Global_262145.f_11371;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4436));
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = Global_262145.f_11372;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4437));
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = Global_262145.f_11373;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4438));
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = Global_262145.f_11374;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4439));
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = Global_262145.f_11375;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4440));
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = Global_262145.f_11376;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4441));
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						iVar0 = Global_262145.f_11393;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4443));
						break;
					
					case joaat("component_machinepistol_clip_03"):
						iVar0 = Global_262145.f_16586;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_11394;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4444));
						break;
				}
				break;
			
			case joaat("weapon_switchblade"):
				switch (iParam1)
				{
					case joaat("component_switchblade_varmod_base"):
						iVar0 = 0;
						break;
					
					case joaat("component_switchblade_varmod_var1"):
						iVar0 = Global_262145.f_13276;
						break;
					
					case joaat("component_switchblade_varmod_var2"):
						iVar0 = Global_262145.f_13277;
						break;
				}
				break;
			
			case joaat("weapon_revolver"):
				switch (iParam1)
				{
					case joaat("component_revolver_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_revolver_varmod_boss"):
						iVar0 = Global_262145.f_13334;
						break;
					
					case joaat("component_revolver_varmod_goon"):
						iVar0 = Global_262145.f_13275;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_22936;
						break;
				}
				break;
			
			case joaat("weapon_compactrifle"):
				switch (iParam1)
				{
					case joaat("component_compactrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_compactrifle_clip_02"):
						iVar0 = Global_262145.f_15067;
						break;
					
					case joaat("component_compactrifle_clip_03"):
						iVar0 = Global_262145.f_16583;
						break;
				}
				break;
			
			case joaat("weapon_dbshotgun"):
				switch (iParam1)
				{
					case joaat("component_dbshotgun_clip_01"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("weapon_minismg"):
				switch (iParam1)
				{
					case joaat("component_minismg_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_minismg_clip_02"):
						iVar0 = Global_262145.f_19042;
						break;
				}
				break;
			
			case joaat("weapon_combatpdw"):
				switch (iParam1)
				{
					case joaat("component_combatpdw_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_combatpdw_clip_02"):
						iVar0 = Global_262145.f_21075;
						break;
					
					case joaat("component_combatpdw_clip_03"):
						iVar0 = Global_262145.f_16585;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_21076;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_262145.f_21078;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_21077;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle_mk2"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_02"):
						iVar0 = Global_262145.f_21199;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_21200;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_fmj"):
						iVar0 = Global_262145.f_21201;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_21202;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_tracer"):
						iVar0 = Global_262145.f_21203;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_21204;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_21205;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_21206;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						iVar0 = Global_262145.f_21207;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						iVar0 = Global_262145.f_21208;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_21209;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_21210;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_21211;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_21212;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_21213;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_21214;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_21215;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_21216;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_21217;
						break;
					
					case joaat("component_at_ar_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_barrel_02"):
						iVar0 = Global_262145.f_21218;
						break;
					
					case joaat("component_assaultrifle_mk2_camo"):
						iVar0 = Global_262145.f_21327;
						break;
					
					case joaat("component_assaultrifle_mk2_camo_02"):
						iVar0 = Global_262145.f_21328;
						break;
					
					case joaat("component_assaultrifle_mk2_camo_03"):
						iVar0 = Global_262145.f_21329;
						break;
					
					case joaat("component_assaultrifle_mk2_camo_04"):
						iVar0 = Global_262145.f_21330;
						break;
					
					case joaat("component_assaultrifle_mk2_camo_05"):
						iVar0 = Global_262145.f_21331;
						break;
					
					case joaat("component_assaultrifle_mk2_camo_06"):
						iVar0 = Global_262145.f_21332;
						break;
					
					case joaat("component_assaultrifle_mk2_camo_07"):
						iVar0 = Global_262145.f_21333;
						break;
					
					case joaat("component_assaultrifle_mk2_camo_08"):
						iVar0 = Global_262145.f_21334;
						break;
					
					case joaat("component_assaultrifle_mk2_camo_09"):
						iVar0 = Global_262145.f_21335;
						break;
					
					case joaat("component_assaultrifle_mk2_camo_10"):
						iVar0 = Global_262145.f_21336;
						break;
					
					case joaat("component_assaultrifle_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21337;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle_mk2"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_02"):
						iVar0 = Global_262145.f_21219;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_21220;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_fmj"):
						iVar0 = Global_262145.f_21221;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_21222;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_tracer"):
						iVar0 = Global_262145.f_21223;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_21224;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_21225;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_21226;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						iVar0 = Global_262145.f_21227;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						iVar0 = Global_262145.f_21228;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_21229;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_21230;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_21231;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_21232;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_21233;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_21234;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_21235;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_21236;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_21237;
						break;
					
					case joaat("component_at_cr_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_cr_barrel_02"):
						iVar0 = Global_262145.f_21238;
						break;
					
					case joaat("component_carbinerifle_mk2_camo"):
						iVar0 = Global_262145.f_21327;
						break;
					
					case joaat("component_carbinerifle_mk2_camo_02"):
						iVar0 = Global_262145.f_21328;
						break;
					
					case joaat("component_carbinerifle_mk2_camo_03"):
						iVar0 = Global_262145.f_21329;
						break;
					
					case joaat("component_carbinerifle_mk2_camo_04"):
						iVar0 = Global_262145.f_21330;
						break;
					
					case joaat("component_carbinerifle_mk2_camo_05"):
						iVar0 = Global_262145.f_21331;
						break;
					
					case joaat("component_carbinerifle_mk2_camo_06"):
						iVar0 = Global_262145.f_21332;
						break;
					
					case joaat("component_carbinerifle_mk2_camo_07"):
						iVar0 = Global_262145.f_21333;
						break;
					
					case joaat("component_carbinerifle_mk2_camo_08"):
						iVar0 = Global_262145.f_21334;
						break;
					
					case joaat("component_carbinerifle_mk2_camo_09"):
						iVar0 = Global_262145.f_21335;
						break;
					
					case joaat("component_carbinerifle_mk2_camo_10"):
						iVar0 = Global_262145.f_21336;
						break;
					
					case joaat("component_carbinerifle_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21337;
						break;
				}
				break;
			
			case joaat("weapon_combatmg_mk2"):
				switch (iParam1)
				{
					case joaat("component_combatmg_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_combatmg_mk2_clip_02"):
						iVar0 = Global_262145.f_21239;
						break;
					
					case joaat("component_combatmg_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_21240;
						break;
					
					case joaat("component_combatmg_mk2_clip_fmj"):
						iVar0 = Global_262145.f_21241;
						break;
					
					case joaat("component_combatmg_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_21242;
						break;
					
					case joaat("component_combatmg_mk2_clip_tracer"):
						iVar0 = Global_262145.f_21243;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_21244;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_21245;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						iVar0 = Global_262145.f_21246;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						iVar0 = Global_262145.f_21247;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_21248;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_21249;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_21250;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_21251;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_21252;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_21253;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_21254;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_21255;
						break;
					
					case joaat("component_at_mg_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_mg_barrel_02"):
						iVar0 = Global_262145.f_21256;
						break;
					
					case joaat("component_combatmg_mk2_camo"):
						iVar0 = Global_262145.f_21327;
						break;
					
					case joaat("component_combatmg_mk2_camo_02"):
						iVar0 = Global_262145.f_21328;
						break;
					
					case joaat("component_combatmg_mk2_camo_03"):
						iVar0 = Global_262145.f_21329;
						break;
					
					case joaat("component_combatmg_mk2_camo_04"):
						iVar0 = Global_262145.f_21330;
						break;
					
					case joaat("component_combatmg_mk2_camo_05"):
						iVar0 = Global_262145.f_21331;
						break;
					
					case joaat("component_combatmg_mk2_camo_06"):
						iVar0 = Global_262145.f_21332;
						break;
					
					case joaat("component_combatmg_mk2_camo_07"):
						iVar0 = Global_262145.f_21333;
						break;
					
					case joaat("component_combatmg_mk2_camo_08"):
						iVar0 = Global_262145.f_21334;
						break;
					
					case joaat("component_combatmg_mk2_camo_09"):
						iVar0 = Global_262145.f_21335;
						break;
					
					case joaat("component_combatmg_mk2_camo_10"):
						iVar0 = Global_262145.f_21336;
						break;
					
					case joaat("component_combatmg_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21337;
						break;
				}
				break;
			
			case joaat("weapon_heavysniper_mk2"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavysniper_mk2_clip_02"):
						iVar0 = Global_262145.f_21257;
						break;
					
					case joaat("component_heavysniper_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_21258;
						break;
					
					case joaat("component_heavysniper_mk2_clip_fmj"):
						iVar0 = Global_262145.f_21260;
						break;
					
					case joaat("component_heavysniper_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_21261;
						break;
					
					case joaat("component_heavysniper_mk2_clip_explosive"):
						iVar0 = Global_262145.f_21259;
						break;
					
					case joaat("component_at_scope_large_mk2"):
						iVar0 = Global_262145.f_21262;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_scope_nv"):
						iVar0 = Global_262145.f_21263;
						break;
					
					case joaat("component_at_scope_thermal"):
						iVar0 = Global_262145.f_21264;
						break;
					
					case joaat("component_at_sr_supp_03"):
						iVar0 = Global_262145.f_21265;
						break;
					
					case joaat("component_at_muzzle_08"):
						iVar0 = Global_262145.f_21266;
						break;
					
					case joaat("component_at_muzzle_09"):
						iVar0 = Global_262145.f_21267;
						break;
					
					case joaat("component_at_sr_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_sr_barrel_02"):
						iVar0 = Global_262145.f_21268;
						break;
					
					case joaat("component_heavysniper_mk2_camo"):
						iVar0 = Global_262145.f_21327;
						break;
					
					case joaat("component_heavysniper_mk2_camo_02"):
						iVar0 = Global_262145.f_21328;
						break;
					
					case joaat("component_heavysniper_mk2_camo_03"):
						iVar0 = Global_262145.f_21329;
						break;
					
					case joaat("component_heavysniper_mk2_camo_04"):
						iVar0 = Global_262145.f_21330;
						break;
					
					case joaat("component_heavysniper_mk2_camo_05"):
						iVar0 = Global_262145.f_21331;
						break;
					
					case joaat("component_heavysniper_mk2_camo_06"):
						iVar0 = Global_262145.f_21332;
						break;
					
					case joaat("component_heavysniper_mk2_camo_07"):
						iVar0 = Global_262145.f_21333;
						break;
					
					case joaat("component_heavysniper_mk2_camo_08"):
						iVar0 = Global_262145.f_21334;
						break;
					
					case joaat("component_heavysniper_mk2_camo_09"):
						iVar0 = Global_262145.f_21335;
						break;
					
					case joaat("component_heavysniper_mk2_camo_10"):
						iVar0 = Global_262145.f_21336;
						break;
					
					case joaat("component_heavysniper_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21337;
						break;
				}
				break;
			
			case joaat("weapon_pistol_mk2"):
				switch (iParam1)
				{
					case joaat("component_pistol_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol_mk2_clip_02"):
						iVar0 = Global_262145.f_21269;
						break;
					
					case joaat("component_pistol_mk2_clip_hollowpoint"):
						iVar0 = Global_262145.f_21271;
						break;
					
					case joaat("component_pistol_mk2_clip_fmj"):
						iVar0 = Global_262145.f_21270;
						break;
					
					case joaat("component_pistol_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_21272;
						break;
					
					case joaat("component_pistol_mk2_clip_tracer"):
						iVar0 = Global_262145.f_21273;
						break;
					
					case joaat("component_at_pi_flsh_02"):
						iVar0 = Global_262145.f_21274;
						break;
					
					case joaat("component_at_pi_rail"):
						iVar0 = Global_262145.f_21275;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = Global_262145.f_21276;
						break;
					
					case joaat("component_at_pi_comp"):
						iVar0 = Global_262145.f_21277;
						break;
					
					case joaat("component_pistol_mk2_camo"):
						iVar0 = Global_262145.f_21327;
						break;
					
					case joaat("component_pistol_mk2_camo_02"):
						iVar0 = Global_262145.f_21328;
						break;
					
					case joaat("component_pistol_mk2_camo_03"):
						iVar0 = Global_262145.f_21329;
						break;
					
					case joaat("component_pistol_mk2_camo_04"):
						iVar0 = Global_262145.f_21330;
						break;
					
					case joaat("component_pistol_mk2_camo_05"):
						iVar0 = Global_262145.f_21331;
						break;
					
					case joaat("component_pistol_mk2_camo_06"):
						iVar0 = Global_262145.f_21332;
						break;
					
					case joaat("component_pistol_mk2_camo_07"):
						iVar0 = Global_262145.f_21333;
						break;
					
					case joaat("component_pistol_mk2_camo_08"):
						iVar0 = Global_262145.f_21334;
						break;
					
					case joaat("component_pistol_mk2_camo_09"):
						iVar0 = Global_262145.f_21335;
						break;
					
					case joaat("component_pistol_mk2_camo_10"):
						iVar0 = Global_262145.f_21336;
						break;
					
					case joaat("component_pistol_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21337;
						break;
					
					case 1141184690:
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("weapon_smg_mk2"):
				switch (iParam1)
				{
					case joaat("component_smg_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_smg_mk2_clip_02"):
						iVar0 = Global_262145.f_21278;
						break;
					
					case joaat("component_smg_mk2_clip_hollowpoint"):
						iVar0 = Global_262145.f_21280;
						break;
					
					case joaat("component_smg_mk2_clip_fmj"):
						iVar0 = Global_262145.f_21279;
						break;
					
					case joaat("component_smg_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_21281;
						break;
					
					case joaat("component_smg_mk2_clip_tracer"):
						iVar0 = Global_262145.f_21282;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_21283;
						break;
					
					case joaat("component_at_sights_smg"):
						iVar0 = Global_262145.f_21284;
						break;
					
					case joaat("component_at_scope_macro_02_smg_mk2"):
						iVar0 = Global_262145.f_21285;
						break;
					
					case joaat("component_at_scope_small_smg_mk2"):
						iVar0 = Global_262145.f_21286;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_21287;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_21288;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_21289;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_21290;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_21291;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_21292;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_21293;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_21294;
						break;
					
					case joaat("component_at_sb_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_sb_barrel_02"):
						iVar0 = Global_262145.f_21295;
						break;
					
					case joaat("component_smg_mk2_camo"):
						iVar0 = Global_262145.f_21327;
						break;
					
					case joaat("component_smg_mk2_camo_02"):
						iVar0 = Global_262145.f_21328;
						break;
					
					case joaat("component_smg_mk2_camo_03"):
						iVar0 = Global_262145.f_21329;
						break;
					
					case joaat("component_smg_mk2_camo_04"):
						iVar0 = Global_262145.f_21330;
						break;
					
					case joaat("component_smg_mk2_camo_05"):
						iVar0 = Global_262145.f_21331;
						break;
					
					case joaat("component_smg_mk2_camo_06"):
						iVar0 = Global_262145.f_21332;
						break;
					
					case joaat("component_smg_mk2_camo_07"):
						iVar0 = Global_262145.f_21333;
						break;
					
					case joaat("component_smg_mk2_camo_08"):
						iVar0 = Global_262145.f_21334;
						break;
					
					case joaat("component_smg_mk2_camo_09"):
						iVar0 = Global_262145.f_21335;
						break;
					
					case joaat("component_smg_mk2_camo_10"):
						iVar0 = Global_262145.f_21336;
						break;
					
					case joaat("component_smg_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21337;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun_mk2"):
				switch (iParam1)
				{
					case joaat("component_pumpshotgun_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pumpshotgun_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_22965;
						break;
					
					case joaat("component_pumpshotgun_mk2_clip_explosive"):
						iVar0 = Global_262145.f_22966;
						break;
					
					case joaat("component_pumpshotgun_mk2_clip_hollowpoint"):
						iVar0 = Global_262145.f_22964;
						break;
					
					case joaat("component_pumpshotgun_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_22963;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_22992;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_22993;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_22994;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						iVar0 = Global_262145.f_22995;
						break;
					
					case joaat("component_at_sr_supp_03"):
						iVar0 = Global_262145.f_22996;
						break;
					
					case joaat("component_at_muzzle_08"):
						iVar0 = Global_262145.f_22997;
						break;
					
					case joaat("component_pumpshotgun_mk2_camo"):
						iVar0 = Global_262145.f_21327;
						break;
					
					case joaat("component_pumpshotgun_mk2_camo_02"):
						iVar0 = Global_262145.f_21328;
						break;
					
					case joaat("component_pumpshotgun_mk2_camo_03"):
						iVar0 = Global_262145.f_21329;
						break;
					
					case joaat("component_pumpshotgun_mk2_camo_04"):
						iVar0 = Global_262145.f_21330;
						break;
					
					case joaat("component_pumpshotgun_mk2_camo_05"):
						iVar0 = Global_262145.f_21331;
						break;
					
					case joaat("component_pumpshotgun_mk2_camo_06"):
						iVar0 = Global_262145.f_21332;
						break;
					
					case joaat("component_pumpshotgun_mk2_camo_07"):
						iVar0 = Global_262145.f_21333;
						break;
					
					case joaat("component_pumpshotgun_mk2_camo_08"):
						iVar0 = Global_262145.f_21334;
						break;
					
					case joaat("component_pumpshotgun_mk2_camo_09"):
						iVar0 = Global_262145.f_21335;
						break;
					
					case joaat("component_pumpshotgun_mk2_camo_10"):
						iVar0 = Global_262145.f_21336;
						break;
					
					case joaat("component_pumpshotgun_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21337;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine_mk2"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_02"):
						iVar0 = Global_262145.f_22967;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_22971;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_fmj"):
						iVar0 = Global_262145.f_22969;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_22970;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_tracer"):
						iVar0 = Global_262145.f_22968;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_22998;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_22999;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_23000;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						iVar0 = Global_262145.f_23001;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_23002;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_23003;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_23004;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_23005;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_23006;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_23007;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_23008;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_23009;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_23010;
						break;
					
					case joaat("component_at_sc_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_sc_barrel_02"):
						iVar0 = Global_262145.f_23011;
						break;
					
					case joaat("component_specialcarbine_mk2_camo"):
						iVar0 = Global_262145.f_21327;
						break;
					
					case joaat("component_specialcarbine_mk2_camo_02"):
						iVar0 = Global_262145.f_21328;
						break;
					
					case joaat("component_specialcarbine_mk2_camo_03"):
						iVar0 = Global_262145.f_21329;
						break;
					
					case joaat("component_specialcarbine_mk2_camo_04"):
						iVar0 = Global_262145.f_21330;
						break;
					
					case joaat("component_specialcarbine_mk2_camo_05"):
						iVar0 = Global_262145.f_21331;
						break;
					
					case joaat("component_specialcarbine_mk2_camo_06"):
						iVar0 = Global_262145.f_21332;
						break;
					
					case joaat("component_specialcarbine_mk2_camo_07"):
						iVar0 = Global_262145.f_21333;
						break;
					
					case joaat("component_specialcarbine_mk2_camo_08"):
						iVar0 = Global_262145.f_21334;
						break;
					
					case joaat("component_specialcarbine_mk2_camo_09"):
						iVar0 = Global_262145.f_21335;
						break;
					
					case joaat("component_specialcarbine_mk2_camo_10"):
						iVar0 = Global_262145.f_21336;
						break;
					
					case joaat("component_specialcarbine_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21337;
						break;
				}
				break;
			
			case joaat("weapon_snspistol_mk2"):
				switch (iParam1)
				{
					case joaat("component_snspistol_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_snspistol_mk2_clip_02"):
						iVar0 = Global_262145.f_23882;
						break;
					
					case joaat("component_snspistol_mk2_clip_fmj"):
						iVar0 = Global_262145.f_22987;
						break;
					
					case joaat("component_snspistol_mk2_clip_hollowpoint"):
						iVar0 = Global_262145.f_22989;
						break;
					
					case joaat("component_snspistol_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_22988;
						break;
					
					case joaat("component_snspistol_mk2_clip_tracer"):
						iVar0 = Global_262145.f_22986;
						break;
					
					case joaat("component_at_pi_flsh_03"):
						iVar0 = Global_262145.f_23043;
						break;
					
					case joaat("component_at_pi_rail_02"):
						iVar0 = Global_262145.f_23044;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = Global_262145.f_23045;
						break;
					
					case joaat("component_at_pi_comp_02"):
						iVar0 = Global_262145.f_23046;
						break;
					
					case joaat("component_snspistol_mk2_camo"):
						iVar0 = Global_262145.f_21327;
						break;
					
					case joaat("component_snspistol_mk2_camo_02"):
						iVar0 = Global_262145.f_21328;
						break;
					
					case joaat("component_snspistol_mk2_camo_03"):
						iVar0 = Global_262145.f_21329;
						break;
					
					case joaat("component_snspistol_mk2_camo_04"):
						iVar0 = Global_262145.f_21330;
						break;
					
					case joaat("component_snspistol_mk2_camo_05"):
						iVar0 = Global_262145.f_21331;
						break;
					
					case joaat("component_snspistol_mk2_camo_06"):
						iVar0 = Global_262145.f_21332;
						break;
					
					case joaat("component_snspistol_mk2_camo_07"):
						iVar0 = Global_262145.f_21333;
						break;
					
					case joaat("component_snspistol_mk2_camo_08"):
						iVar0 = Global_262145.f_21334;
						break;
					
					case joaat("component_snspistol_mk2_camo_09"):
						iVar0 = Global_262145.f_21335;
						break;
					
					case joaat("component_snspistol_mk2_camo_10"):
						iVar0 = Global_262145.f_21336;
						break;
					
					case joaat("component_snspistol_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21337;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle_mk2"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_02"):
						iVar0 = Global_262145.f_22972;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_22976;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_fmj"):
						iVar0 = Global_262145.f_22974;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_22975;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_tracer"):
						iVar0 = Global_262145.f_22973;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_23012;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_23013;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						iVar0 = Global_262145.f_23014;
						break;
					
					case joaat("component_at_scope_large_fixed_zoom_mk2"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_23015;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_23016;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_23017;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_23018;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_23019;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_23020;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_23021;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_23022;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_23023;
						break;
					
					case joaat("component_at_mrfl_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_mrfl_barrel_02"):
						iVar0 = Global_262145.f_23024;
						break;
					
					case joaat("component_marksmanrifle_mk2_camo"):
						iVar0 = Global_262145.f_21327;
						break;
					
					case joaat("component_marksmanrifle_mk2_camo_02"):
						iVar0 = Global_262145.f_21328;
						break;
					
					case joaat("component_marksmanrifle_mk2_camo_03"):
						iVar0 = Global_262145.f_21329;
						break;
					
					case joaat("component_marksmanrifle_mk2_camo_04"):
						iVar0 = Global_262145.f_21330;
						break;
					
					case joaat("component_marksmanrifle_mk2_camo_05"):
						iVar0 = Global_262145.f_21331;
						break;
					
					case joaat("component_marksmanrifle_mk2_camo_06"):
						iVar0 = Global_262145.f_21332;
						break;
					
					case joaat("component_marksmanrifle_mk2_camo_07"):
						iVar0 = Global_262145.f_21333;
						break;
					
					case joaat("component_marksmanrifle_mk2_camo_08"):
						iVar0 = Global_262145.f_21334;
						break;
					
					case joaat("component_marksmanrifle_mk2_camo_09"):
						iVar0 = Global_262145.f_21335;
						break;
					
					case joaat("component_marksmanrifle_mk2_camo_10"):
						iVar0 = Global_262145.f_21336;
						break;
					
					case joaat("component_marksmanrifle_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21337;
						break;
				}
				break;
			
			case joaat("weapon_revolver_mk2"):
				switch (iParam1)
				{
					case joaat("component_revolver_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_revolver_mk2_clip_tracer"):
						iVar0 = Global_262145.f_22977;
						break;
					
					case joaat("component_revolver_mk2_clip_fmj"):
						iVar0 = Global_262145.f_22978;
						break;
					
					case joaat("component_revolver_mk2_clip_hollowpoint"):
						iVar0 = Global_262145.f_22980;
						break;
					
					case joaat("component_revolver_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_22979;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_23025;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_23026;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_262145.f_23027;
						break;
					
					case joaat("component_at_pi_comp_03"):
						iVar0 = Global_262145.f_23028;
						break;
					
					case joaat("component_revolver_mk2_camo"):
						iVar0 = Global_262145.f_21327;
						break;
					
					case joaat("component_revolver_mk2_camo_02"):
						iVar0 = Global_262145.f_21328;
						break;
					
					case joaat("component_revolver_mk2_camo_03"):
						iVar0 = Global_262145.f_21329;
						break;
					
					case joaat("component_revolver_mk2_camo_04"):
						iVar0 = Global_262145.f_21330;
						break;
					
					case joaat("component_revolver_mk2_camo_05"):
						iVar0 = Global_262145.f_21331;
						break;
					
					case joaat("component_revolver_mk2_camo_06"):
						iVar0 = Global_262145.f_21332;
						break;
					
					case joaat("component_revolver_mk2_camo_07"):
						iVar0 = Global_262145.f_21333;
						break;
					
					case joaat("component_revolver_mk2_camo_08"):
						iVar0 = Global_262145.f_21334;
						break;
					
					case joaat("component_revolver_mk2_camo_09"):
						iVar0 = Global_262145.f_21335;
						break;
					
					case joaat("component_revolver_mk2_camo_10"):
						iVar0 = Global_262145.f_21336;
						break;
					
					case joaat("component_revolver_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21337;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle_mk2"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_02"):
						iVar0 = Global_262145.f_22981;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_22985;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_fmj"):
						iVar0 = Global_262145.f_22983;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_22984;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_tracer"):
						iVar0 = Global_262145.f_22982;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_23029;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_23030;
						break;
					
					case joaat("component_at_scope_macro_02_mk2"):
						iVar0 = Global_262145.f_23031;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						iVar0 = Global_262145.f_23032;
						break;
					
					case joaat("component_at_bp_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_bp_barrel_02"):
						iVar0 = Global_262145.f_23042;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_23033;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_23034;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_23035;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_23036;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_23037;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_23038;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_23039;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_23040;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_23041;
						break;
					
					case joaat("component_bullpuprifle_mk2_camo"):
						iVar0 = Global_262145.f_21327;
						break;
					
					case joaat("component_bullpuprifle_mk2_camo_02"):
						iVar0 = Global_262145.f_21328;
						break;
					
					case joaat("component_bullpuprifle_mk2_camo_03"):
						iVar0 = Global_262145.f_21329;
						break;
					
					case joaat("component_bullpuprifle_mk2_camo_04"):
						iVar0 = Global_262145.f_21330;
						break;
					
					case joaat("component_bullpuprifle_mk2_camo_05"):
						iVar0 = Global_262145.f_21331;
						break;
					
					case joaat("component_bullpuprifle_mk2_camo_06"):
						iVar0 = Global_262145.f_21332;
						break;
					
					case joaat("component_bullpuprifle_mk2_camo_07"):
						iVar0 = Global_262145.f_21333;
						break;
					
					case joaat("component_bullpuprifle_mk2_camo_08"):
						iVar0 = Global_262145.f_21334;
						break;
					
					case joaat("component_bullpuprifle_mk2_camo_09"):
						iVar0 = Global_262145.f_21335;
						break;
					
					case joaat("component_bullpuprifle_mk2_camo_10"):
						iVar0 = Global_262145.f_21336;
						break;
					
					case joaat("component_bullpuprifle_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21337;
						break;
				}
				break;
			
			case joaat("weapon_raypistol"):
				switch (iParam1)
				{
					case joaat("component_raypistol_varmod_xmas18"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("weapon_ceramicpistol"):
				switch (iParam1)
				{
					case joaat("component_ceramicpistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_ceramicpistol_clip_02"):
						iVar0 = Global_262145.f_28697;
						break;
					
					case joaat("component_ceramicpistol_supp"):
						iVar0 = Global_262145.f_28698;
						break;
				}
				break;
			
			case joaat("weapon_combatshotgun"):
				switch (iParam1)
				{
					case joaat("component_combatshotgun_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_30836;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_30837;
						break;
				}
				break;
			
			case joaat("weapon_gadgetpistol"):
				switch (iParam1)
				{
					case joaat("component_gadgetpistol_clip_01"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("weapon_militaryrifle"):
				switch (iParam1)
				{
					case joaat("component_militaryrifle_clip_01"):
						iVar0 = Global_262145.f_30822;
						break;
					
					case joaat("component_militaryrifle_clip_02"):
						iVar0 = Global_262145.f_30823;
						break;
					
					case joaat("component_militaryrifle_sight_01"):
						iVar0 = Global_262145.f_30824;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_262145.f_30825;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_30826;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_30827;
						break;
				}
				break;
			
			case joaat("weapon_heavyrifle"):
				switch (iParam1)
				{
					case joaat("component_heavyrifle_clip_01"):
						iVar0 = Global_262145.f_31975;
						break;
					
					case joaat("component_heavyrifle_clip_02"):
						iVar0 = Global_262145.f_31976;
						break;
					
					case joaat("component_heavyrifle_camo1"):
						iVar0 = Global_262145.f_32008;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_31981;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_31979;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = Global_262145.f_31978;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_31980;
						break;
					
					case joaat("component_heavyrifle_sight_01"):
						iVar0 = Global_262145.f_31977;
						break;
				}
				break;
			
			case joaat("weapon_tacticalrifle"):
				switch (iParam1)
				{
					case 927578299:
						iVar0 = 0;
						break;
					
					case joaat("component_tacticalrifle_clip_02"):
						iVar0 = Global_262145.f_33218;
						break;
					
					case joaat("component_at_ar_flsh_reh"):
						iVar0 = Global_262145.f_33220;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_33221;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_33219;
						break;
				}
				break;
			
			case joaat("weapon_knife"):
				switch (iParam1)
				{
					case 370527443:
						iVar0 = Global_262145.f_34096;
						break;
					
					case 1109907117:
						iVar0 = Global_262145.f_34100;
						break;
					
					case 2055456612:
						iVar0 = Global_262145.f_34097;
						break;
					
					case 1690606566:
						iVar0 = Global_262145.f_34098;
						break;
					
					case -1633316949:
						iVar0 = Global_262145.f_34101;
						break;
					
					case -1461476313:
						iVar0 = Global_262145.f_34099;
						break;
					
					case -1770422457:
						iVar0 = Global_262145.f_34103;
						break;
					
					case -2059739958:
						iVar0 = Global_262145.f_34102;
						break;
					
					case -1280001599:
						iVar0 = Global_262145.f_34104;
						break;
					
					case -922885037:
						iVar0 = Global_262145.f_34105;
						break;
				}
				break;
			
			case joaat("weapon_bat"):
				switch (iParam1)
				{
					case 716207715:
						iVar0 = Global_262145.f_34086;
						break;
					
					case 446271089:
						iVar0 = Global_262145.f_34087;
						break;
					
					case 1045616099:
						iVar0 = Global_262145.f_34089;
						break;
					
					case 1336277129:
						iVar0 = Global_262145.f_34090;
						break;
					
					case -513369076:
						iVar0 = Global_262145.f_34091;
						break;
					
					case -447700000:
						iVar0 = Global_262145.f_34092;
						break;
					
					case -149207179:
						iVar0 = Global_262145.f_34093;
						break;
					
					case 166784288:
						iVar0 = Global_262145.f_34094;
						break;
					
					case 2068729789:
						iVar0 = Global_262145.f_34095;
						break;
					
					case 1761389338:
						iVar0 = Global_262145.f_34088;
						break;
				}
				break;
			
			case 465894841:
				switch (iParam1)
				{
					case 375646046:
						iVar0 = 0;
						break;
					
					case 503494624:
						iVar0 = Global_262145.f_34069;
						break;
				}
				break;
			
			default:
				iVar65 = func_66(iParam0, &uVar67);
				if (iVar65 != -1)
				{
					iVar66 = 0;
					while (iVar66 < unk_0x99844FCFECAC01A5(iVar65))
					{
						if (unk_0xDDBECC1D7EC5DB2B(iVar65, iVar66, &Var106))
						{
							if (!func_63(Var106.f_3))
							{
								if (Var106.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (Var106.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var106.f_5;
									}
								}
							}
						}
						iVar66++;
					}
				}
				break;
			}
	}
	if (unk_0xA26A9A07F761D8F8() && func_321())
	{
		StringCopy(&Var144, func_319(iParam1, iParam0), 16);
		func_312(&sVar128, Var144, unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()), 3, 1, func_317(iParam0), func_316(iParam0), -1, 0, 0);
		if (unk_0x0E4605546F88E7A3(&sVar128))
		{
			iVar0 = unk_0x054F135D011EC4C3(unk_0x14580F20CBCE4FA9(&sVar128), 1671640801, 1);
		}
	}
	if (iVar0 > 0)
	{
		fVar148 = func_285(iParam0, &iVar0, fVar1);
		if (fVar148 != 1f)
		{
		}
	}
	return iVar0;
}

float func_285(int iParam0, int iParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (unk_0xA26A9A07F761D8F8() && func_321())
	{
		fVar1 = (fVar1 + func_311());
		fVar0 = (1f - fVar1);
		*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * fVar0));
		return fVar0;
	}
	if (!unk_0xA26A9A07F761D8F8())
	{
		*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * fParam2));
	}
	if (!Global_78558)
	{
		if (*iParam1 != 0)
		{
			iVar2 = func_308(iParam0);
			if (iVar2 == 3)
			{
				fVar1 = 0.1f;
			}
			else if (iVar2 == 2)
			{
				fVar1 = 0.15f;
			}
			else if (iVar2 == 1)
			{
				fVar1 = 0.25f;
			}
		}
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		if (iLocal_104 == 1)
		{
			*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_262145.f_77));
			fVar1 = (fVar1 + (unk_0xBBDA792448DB5A89(Global_262145.f_133) / 100f));
		}
		if (iLocal_104 == 0)
		{
			*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_262145.f_77));
			if (func_286())
			{
				fVar1 = (fVar1 + (unk_0xBBDA792448DB5A89(Global_262145.f_133) / 100f));
				iLocal_104 = 1;
			}
			else
			{
				iLocal_104 = -1;
			}
		}
		fVar1 = (fVar1 + func_311());
	}
	fVar0 = (1f - fVar1);
	*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * fVar0));
	return fVar0;
}

int func_286()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (unk_0xCC17806DB0C41C19())
	{
		return 0;
	}
	if (func_305())
	{
		if (func_290())
		{
			iVar0 = func_288();
			iVar1 = func_287();
			fVar2 = ((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_262145.f_132) && iVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_287()
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1665499);
	iVar0 = (iVar0 + Global_1665502);
	return iVar0;
}

int func_288()
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1665500);
	iVar0 = (iVar0 + Global_1665501);
	iVar0 = (iVar0 + Global_1665499);
	iVar0 = (iVar0 + Global_1665502);
	iVar0 = (iVar0 + Global_1665504);
	iVar0 = (iVar0 + Global_1665503);
	iVar0 = (iVar0 + func_289(joaat("mpply_exploits")));
	iVar0 = (iVar0 + func_289(joaat("mpply_vc_annoyingme")));
	iVar0 = (iVar0 + func_289(joaat("mpply_vc_hate")));
	iVar0 = (iVar0 + func_289(joaat("mpply_bad_crew_name")));
	iVar0 = (iVar0 + func_289(joaat("mpply_bad_crew_motto")));
	iVar0 = (iVar0 + func_289(joaat("mpply_bad_crew_status")));
	iVar0 = (iVar0 + func_289(joaat("mpply_bad_crew_emblem")));
	iVar0 = (iVar0 + func_289(joaat("mpply_playermade_title")));
	iVar0 = (iVar0 + func_289(joaat("mpply_playermade_desc")));
	return iVar0;
}

int func_289(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xDD7756E2742E0F6D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_290()
{
	struct<7> Var0;
	struct<7> Var7;
	
	unk_0x29C15CE62DB7A939(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var7 = { func_304(joaat("mpply_started_mp")) };
	if (func_291(Var7, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_291(struct<7> Param0, struct<7> Param7, int iParam14)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_302(Param7);
	iVar1 = func_298(Param0, iParam14);
	if (iVar1 == -15)
	{
		return 0;
	}
	if (func_292(iVar0, iVar1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_292(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_297(iParam1) || !func_297(iParam0))
	{
		return 1;
	}
	iVar0 = func_105(iParam0);
	iVar1 = func_105(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_107(iParam0);
	iVar1 = func_107(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_296(iParam0);
	iVar1 = func_296(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_295(iParam0);
	iVar1 = func_295(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_294(iParam0);
	iVar1 = func_294(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_293(iParam0);
	iVar1 = func_293(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_293(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_294(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_295(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_296(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_297(int iParam0)
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
	iVar0 = func_293(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_294(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_295(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_105(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_107(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_296(iParam0);
	if (iVar5 < 1 || iVar5 > func_104(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

var func_298(struct<7> Param0, int iParam7)
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_301(Param0) == 0)
	{
		uVar0 = func_302(Param0);
		uVar1 = uVar0;
		func_299(&uVar1, 0, 0, 0, iParam7, 0, 0);
		if (iParam7 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_299(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_105(*uParam0);
	iVar1 = func_107(*uParam0);
	iVar2 = func_296(*uParam0);
	iVar3 = func_295(*uParam0);
	iVar4 = func_294(*uParam0);
	iVar5 = func_293(*uParam0);
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
	iVar6 = func_104(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_104(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_300(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_300(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_110(uParam0, iParam1);
	func_109(uParam0, iParam2);
	func_108(uParam0, iParam3);
	func_102(uParam0, iParam5);
	func_103(uParam0, iParam4);
	func_101(uParam0, iParam6);
}

int func_301(struct<7> Param0)
{
	if ((((((Param0.f_0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

var func_302(struct<6> Param0, var uParam6)
{
	var uVar0;
	
	if (Param0.f_0 > 0)
	{
		func_101(&uVar0, Param0.f_0);
	}
	if (Param0.f_1 > 0)
	{
		func_102(&uVar0, func_303(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_103(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_108(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_109(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_110(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_303(int iParam0)
{
	if (iParam0 < 1)
	{
		return 0;
	}
	if (iParam0 > 12)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
	}
	return 0;
}

struct<7> func_304(int iParam0)
{
	var uVar0;
	struct<7> Var1;
	struct<7> Var8;
	
	uVar0 = iParam0;
	if (unk_0xF8578E75E35C4FE3(uVar0, &Var8, 7, -1))
	{
		return Var8;
	}
	return Var1;
}

int func_305()
{
	if (func_307() && func_306(0))
	{
		return 1;
	}
	return 0;
}

var func_306(int iParam0)
{
	return Global_1574538[iParam0];
}

var func_307()
{
	return func_306(func_54() + 1);
}

int func_308(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	bool bVar10;
	
	iVar0 = func_232();
	if (iParam0 == 0 || !func_39(iVar0))
	{
		return -1;
	}
	iVar1 = 7;
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			break;
		
		case joaat("gadget_parachute"):
			break;
		
		case joaat("weapon_microsmg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_smg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_sniperrifle"):
			break;
		
		case joaat("weapon_heavysniper"):
			break;
		
		case joaat("weapon_mg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_combatmg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_rpg"):
			break;
		
		case joaat("weapon_grenadelauncher"):
			break;
		
		case joaat("weapon_minigun"):
			iVar1 = 5;
			break;
		
		case joaat("weapon_knife"):
			break;
		
		case joaat("weapon_nightstick"):
			break;
		
		case joaat("weapon_petrolcan"):
			break;
		
		case joaat("weapon_stungun"):
			break;
		
		case joaat("weapon_appistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_pistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_smokegrenade"):
			break;
		
		case joaat("weapon_grenade"):
			break;
		
		case joaat("weapon_stickybomb"):
			break;
	}
	if (iVar1 != 7)
	{
		switch (func_309(iVar1, iVar0))
		{
			case 1:
				return 3;
				break;
			
			case 2:
				return 2;
				break;
			
			case 3:
				return 1;
				break;
		}
	}
	else
	{
		iVar3[0] = func_309(1, iVar0);
		iVar3[1] = func_309(3, iVar0);
		iVar3[2] = func_309(2, iVar0);
		iVar3[3] = func_309(4, iVar0);
		iVar3[4] = func_309(5, iVar0);
		iVar3[5] = func_309(0, iVar0);
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 3)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 1;
		}
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 2)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 2;
		}
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 1)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 3;
		}
	}
	return -1;
}

int func_309(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam0 == 0)
	{
		iVar0 = 0;
		iVar1 = 1;
		iVar2 = 2;
		iVar3 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 3;
		iVar1 = 4;
		iVar2 = 5;
		iVar3 = -1;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 9;
		iVar1 = 10;
		iVar2 = 11;
		iVar3 = -1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 6;
		iVar1 = 7;
		iVar2 = 8;
		iVar3 = -1;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 12;
		iVar1 = 13;
		iVar2 = 14;
		iVar3 = -1;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 15;
		iVar1 = 16;
		iVar2 = 17;
		iVar3 = -1;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 18;
		iVar1 = 19;
		iVar2 = 20;
		iVar3 = 21;
	}
	else
	{
		return 0;
	}
	iVar4 = func_310(iVar0, iParam1);
	if (func_310(iVar1, iParam1) < iVar4)
	{
		iVar4 = func_310(iVar1, iParam1);
	}
	if (func_310(iVar2, iParam1) < iVar4)
	{
		iVar4 = func_310(iVar2, iParam1);
	}
	if (iVar3 != -1)
	{
		if (func_310(iVar3, iParam1) < iVar4)
		{
			iVar4 = func_310(iVar3, iParam1);
		}
	}
	return iVar4;
}

int func_310(int iParam0, int iParam1)
{
	return Global_113648.f_19149[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

float func_311()
{
	return Global_100733.f_2088;
}

void func_312(char* sParam0, char[8] cParam1, char[4] cParam3, char[4] cParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	switch (unk_0x14580F20CBCE4FA9(&cParam1))
	{
		case 64715401:
		case joaat("GSA_TYPE_R"):
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case -414529079:
		case joaat("GSA_TYPE_C"):
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case joaat("GSA_TYPE_RO"):
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case joaat("GSA_TYPE_CH"):
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case joaat("GSA_TYPE_G"):
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case -218834291:
		case joaat("GSA_TYPE_B"):
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		
		case 1779531303:
		case joaat("GSA_TYPE_FW"):
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam6)
	{
		case 0:
			if (iParam5 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 1:
			if (iParam5 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam7 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			if (iParam10 != -1)
			{
				StringConCat(sParam0, "_p", 64);
				StringIntConCat(sParam0, iParam10, 64);
			}
			break;
		
		case 2:
			if (iParam5 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			break;
		
		case 4:
			if (iParam5 == Global_75654)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam5 == Global_75655)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam5 == Global_75656)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam5 == Global_75657)
			{
				StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (iParam5 == Global_75658)
			{
				StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (iParam5 == func_315())
			{
				StringCopy(sParam0, "VE_KOSATKA_t0_v0", 64);
			}
			else if (iParam5 == func_314())
			{
				if (iParam7 == 40)
				{
					StringCopy(sParam0, "VEU_BRICKADE2_t0_v0", 64);
				}
				else if (iParam7 == 2)
				{
					StringCopy(sParam0, "VE_BRICKADE2_t2_v38", 64);
				}
				else if (iParam7 == 1)
				{
					StringCopy(sParam0, "VE_BRICKADE2_t1_v38", 64);
				}
				else
				{
					StringCopy(sParam0, "VE_BRICKADE2_t0_v38", 64);
				}
			}
			else if (iParam5 == func_313())
			{
				if (iParam7 == 1)
				{
					StringCopy(sParam0, "VE_MANCHEZ3_t1_v4", 64);
				}
				else
				{
					StringCopy(sParam0, "VE_MANCHEZ3_t0_v4", 64);
				}
			}
			else if (iParam5 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam7 == 24 || iParam7 == 25)
				{
					if (iParam9 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam10 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam10 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam10 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam10 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam10 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam10 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam10 == 7)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam9 = -1;
				}
				else if (iParam7 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam7 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else if (iParam7 == 22)
			{
				StringCopy(&cParam1, unk_0x749766113BB6FF2D(iParam5), 16);
				if (unk_0x2AC37494BBF1DB16(&cParam1) || unk_0x14580F20CBCE4FA9(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam11)
				{
					switch (iParam5)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
			}
			else if (iParam7 == 40)
			{
				switch (iParam5)
				{
					case joaat("fcr2"):
						StringCopy(&cParam1, "FCR2", 16);
						break;
					
					case joaat("diablous2"):
						StringCopy(&cParam1, "DIABLOUS2", 16);
						break;
					
					case joaat("comet3"):
						StringCopy(&cParam1, "COMET3", 16);
						break;
					
					default:
						StringCopy(&cParam1, unk_0x749766113BB6FF2D(iParam5), 16);
						if (unk_0x2AC37494BBF1DB16(&cParam1))
						{
							return;
						}
						break;
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam11)
				{
					switch (iParam5)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
				if (iParam10 != -1)
				{
					StringConCat(sParam0, "_p", 64);
					StringIntConCat(sParam0, iParam10, 64);
				}
			}
			break;
	}
	if (bParam12)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

int func_313()
{
	return 1384502824;
}

int func_314()
{
	return -1576586413;
}

int func_315()
{
	return joaat("kosatka");
}

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol_mk2"):
		case joaat("weapon_smg_mk2"):
		case joaat("weapon_assaultrifle_mk2"):
		case joaat("weapon_carbinerifle_mk2"):
		case joaat("weapon_combatmg_mk2"):
		case joaat("weapon_heavysniper_mk2"):
		case joaat("weapon_pumpshotgun_mk2"):
		case joaat("weapon_specialcarbine_mk2"):
		case joaat("weapon_snspistol_mk2"):
		case joaat("weapon_marksmanrifle_mk2"):
		case joaat("weapon_revolver_mk2"):
		case joaat("weapon_bullpuprifle_mk2"):
			return 2;
			break;
	}
	return -1;
}

int func_317(int iParam0)
{
	return func_318(iParam0);
}

int func_318(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0;
			break;
		
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		case joaat("weapon_appistol"):
			return 3;
			break;
		
		case joaat("weapon_pistol50"):
			return 4;
			break;
		
		case joaat("weapon_smg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 6;
			break;
		
		case joaat("weapon_microsmg"):
			return 7;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 9;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 11;
			break;
		
		case joaat("weapon_mg"):
			return 12;
			break;
		
		case joaat("weapon_combatmg"):
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case joaat("weapon_stickybomb"):
			return 15;
			break;
		
		case joaat("weapon_grenade"):
			return 16;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 17;
			break;
		
		case joaat("weapon_remotesniper"):
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 20;
			break;
		
		case joaat("weapon_heavysniper"):
			return 21;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 22;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 23;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 24;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 25;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 26;
			break;
		
		case joaat("weapon_rpg"):
			return 27;
			break;
		
		case joaat("weapon_minigun"):
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case joaat("weapon_stungun"):
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case joaat("gadget_parachute"):
			return 33;
			break;
		
		case joaat("weapon_knife"):
			return 34;
			break;
		
		case joaat("weapon_nightstick"):
			return 35;
			break;
		
		case joaat("weapon_hammer"):
			return 36;
			break;
		
		case joaat("weapon_bat"):
			return 37;
			break;
		
		case joaat("weapon_crowbar"):
			return 38;
			break;
		
		case joaat("weapon_golfclub"):
			return 39;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 40;
			break;
		
		case joaat("weapon_molotov"):
			return 41;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 42;
			break;
		
		case joaat("weapon_petrolcan"):
			return 43;
			break;
		
		case joaat("weapon_digiscanner"):
			return 44;
			break;
		
		case joaat("weapon_bottle"):
			return 45;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 46;
			break;
		
		case joaat("weapon_snspistol"):
			return 47;
			break;
		
		case joaat("weapon_heavypistol"):
			return 49;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 48;
			break;
		
		case joaat("weapon_gusenberg"):
			return 50;
			break;
		
		case joaat("weapon_dagger"):
			return 51;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 52;
			break;
		
		case joaat("weapon_flaregun"):
			return 57;
			break;
		
		case joaat("weapon_musket"):
			return 53;
			break;
		
		case joaat("weapon_firework"):
			return 54;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 56;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 55;
			break;
		
		case joaat("weapon_proxmine"):
			return 60;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 61;
			break;
		
		case joaat("weapon_hatchet"):
			return 58;
			break;
		
		case joaat("weapon_railgun"):
			return 59;
			break;
		
		case joaat("weapon_combatpdw"):
			return 64;
			break;
		
		case joaat("weapon_knuckle"):
			return 62;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 63;
			break;
		
		case joaat("weapon_machete"):
			return 65;
			break;
		
		case joaat("weapon_machinepistol"):
			return 68;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 66;
			break;
		
		case joaat("weapon_compactrifle"):
			return 67;
			break;
		
		case joaat("weapon_flashlight"):
			return 69;
			break;
		
		case joaat("weapon_revolver"):
			return 70;
			break;
		
		case joaat("weapon_switchblade"):
			return 71;
			break;
		
		case joaat("weapon_autoshotgun"):
			return 72;
			break;
		
		case joaat("weapon_minismg"):
			return 73;
			break;
		
		case joaat("weapon_compactlauncher"):
			return 74;
			break;
		
		case joaat("weapon_battleaxe"):
			return 75;
			break;
		
		case joaat("weapon_pipebomb"):
			return 76;
			break;
		
		case joaat("weapon_poolcue"):
			return 77;
			break;
		
		case joaat("weapon_wrench"):
			return 78;
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			return 9;
			break;
		
		case joaat("weapon_combatmg_mk2"):
			return 13;
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			return 21;
			break;
		
		case joaat("weapon_pistol_mk2"):
			return 1;
			break;
		
		case joaat("weapon_smg_mk2"):
			return 5;
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			return 22;
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			return 46;
			break;
		
		case joaat("weapon_snspistol_mk2"):
			return 47;
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			return 56;
			break;
		
		case joaat("weapon_revolver_mk2"):
			return 70;
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			return 48;
			break;
		
		case joaat("weapon_doubleaction"):
			return 79;
			break;
		
		case joaat("weapon_stone_hatchet"):
			return 80;
			break;
		
		case joaat("weapon_raypistol"):
			return 81;
			break;
		
		case joaat("weapon_raycarbine"):
			return 82;
			break;
		
		case joaat("weapon_rayminigun"):
			return 83;
			break;
		
		case joaat("weapon_navyrevolver"):
			return 84;
			break;
		
		case joaat("weapon_ceramicpistol"):
			return 85;
			break;
		
		case joaat("weapon_combatshotgun"):
			return 86;
			break;
		
		case joaat("weapon_militaryrifle"):
			return 88;
			break;
		
		case joaat("weapon_gadgetpistol"):
			return 87;
			break;
		
		case joaat("weapon_heavyrifle"):
			return 10;
			break;
		
		case joaat("weapon_emplauncher"):
			return 89;
			break;
		
		case joaat("weapon_fertilizercan"):
			return 90;
			break;
		
		case joaat("weapon_stungun_mp"):
			return 91;
			break;
		
		case joaat("weapon_metaldetector"):
			return 92;
			break;
		
		case joaat("weapon_tacticalrifle"):
			return 93;
			break;
		
		case joaat("weapon_precisionrifle"):
			return 94;
			break;
		
		case 465894841:
			return 95;
			break;
		
		case 1703483498:
			return 96;
			break;
		
		case -22923932:
			return 97;
			break;
	}
	return 0;
}

char* func_319(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<7> Var41;
	
	if (iParam1 == joaat("weapon_knuckle"))
	{
		switch (iParam0)
		{
			case joaat("component_knuckle_varmod_base"):
				return "WT_KNUCKLE";
				break;
			
			case joaat("component_knuckle_varmod_pimp"):
				return "WCT_KNUCK_02";
				break;
			
			case joaat("component_knuckle_varmod_ballas"):
				return "WCT_KNUCK_BG";
				break;
			
			case joaat("component_knuckle_varmod_dollar"):
				return "WCT_KNUCK_DLR";
				break;
			
			case joaat("component_knuckle_varmod_diamond"):
				return "WCT_KNUCK_DMD";
				break;
			
			case joaat("component_knuckle_varmod_hate"):
				return "WCT_KNUCK_HT";
				break;
			
			case joaat("component_knuckle_varmod_love"):
				return "WCT_KNUCK_LV";
				break;
			
			case joaat("component_knuckle_varmod_player"):
				return "WCT_KNUCK_PC";
				break;
			
			case joaat("component_knuckle_varmod_king"):
				return "WCT_KNUCK_SLG";
				break;
			
			case joaat("component_knuckle_varmod_vagos"):
				return "WCT_KNUCK_VG";
				break;
		}
	}
	else if (iParam1 == joaat("weapon_bat"))
	{
		switch (iParam0)
		{
			case 716207715:
				return "WCT_BAT_XM3";
				break;
			
			case 446271089:
				return "WCT_BAT_XM301";
				break;
			
			case 1045616099:
				return "WCT_BAT_XM302";
				break;
			
			case 1336277129:
				return "WCT_BAT_XM303";
				break;
			
			case -513369076:
				return "WCT_BAT_XM304";
				break;
			
			case -447700000:
				return "WCT_BAT_XM305";
				break;
			
			case -149207179:
				return "WCT_BAT_XM306";
				break;
			
			case 166784288:
				return "WCT_BAT_XM307";
				break;
			
			case 2068729789:
				return "WCT_BAT_XM308";
				break;
			
			case 1761389338:
				return "WCT_BAT_XM309";
				break;
		}
	}
	else if (iParam1 == joaat("weapon_knife"))
	{
		switch (iParam0)
		{
			case 370527443:
				return "WCT_KNIFE_XM3";
				break;
			
			case 1109907117:
				return "WCT_KNIFE_XM301";
				break;
			
			case 2055456612:
				return "WCT_KNIFE_XM302";
				break;
			
			case 1690606566:
				return "WCT_KNIFE_XM303";
				break;
			
			case -1633316949:
				return "WCT_KNIFE_XM304";
				break;
			
			case -1461476313:
				return "WCT_KNIFE_XM305";
				break;
			
			case -1770422457:
				return "WCT_KNIFE_XM306";
				break;
			
			case -2059739958:
				return "WCT_KNIFE_XM307";
				break;
			
			case -1280001599:
				return "WCT_KNIFE_XM308";
				break;
			
			case -922885037:
				return "WCT_KNIFE_XM309";
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_NONE";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCT_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCT_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCT_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case 195735895:
			return "WCT_CLIP1";
			break;
		
		case -890514874:
			return "WCT_CLIP1";
			break;
		
		case -507117574:
			return "WCT_CLIP2";
			break;
		
		case -124428919:
			return "WCT_CLIP1";
			break;
		
		case 1048471894:
			return "WCT_CLIP2";
			break;
		
		case joaat("component_snspistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_snspistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_vintagepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_heavyshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_marksmanrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case 927578299:
			return "WCT_CLIP1";
			break;
		
		case joaat("component_tacticalrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_large_fixed_zoom"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_combatpdw_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpdw_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCT_VAR_SIL";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_marksmanrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_assaultsmg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_bullpuprifle_varmod_low"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_combatmg_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_combatpistol_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_mg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pumpshotgun_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_snspistol_varmod_lowrider"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_specialcarbine_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_switchblade_varmod_base"):
			return "WCT_SB_BASE";
			break;
		
		case joaat("component_switchblade_varmod_var1"):
			return "WCT_SB_VAR1";
			break;
		
		case joaat("component_switchblade_varmod_var2"):
			return "WCT_SB_VAR2";
			break;
		
		case joaat("component_revolver_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_revolver_varmod_boss"):
			return "WCT_REV_VARB";
			break;
		
		case joaat("component_revolver_varmod_goon"):
			return "WCT_REV_VARG";
			break;
		
		case joaat("component_smg_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return "WCT_CLIP_BOX";
			break;
		
		case joaat("component_assaultrifle_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_heavyshotgun_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_gunrun_mk2_upgrade"):
			return "WCT_VAR_GUN";
			break;
		
		case joaat("component_marksmanrifle_mk2_camo_ind_01"):
			return "WCT_CAMO_IND";
			break;
		
		case joaat("component_snspistol_mk2_camo_ind_01"):
			return "WCT_CAMO_IND";
			break;
		
		case joaat("component_snspistol_mk2_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_macro_02_mk2"):
			return "WCT_SCOPE_MAC2";
			break;
		
		case joaat("component_at_scope_small_mk2"):
			return "WCT_SCOPE_SML2";
			break;
		
		case joaat("component_raypistol_varmod_xmas18"):
			return "WCT_VAR_RAY18";
			break;
		
		case joaat("component_ceramicpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_ceramicpistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_ceramicpistol_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_heavyrifle_camo1"):
			return "WCT_VAR_FAM";
			break;
		
		case joaat("component_microsmg_varmod_security"):
			return "WCT_VAR_WEED";
			break;
		
		case joaat("component_appistol_varmod_security"):
			return "WCT_VAR_STUD";
			break;
		
		case joaat("component_pumpshotgun_varmod_security"):
			return "WCT_VAR_BONE";
			break;
		
		case 1141184690:
			return "WCT_PISTMK2_XM3";
			break;
		
		case -1566778158:
			return "WCT_MSMG_XM3";
			break;
		
		case 330905451:
			return "WCT_PUMPSHT_XM3";
			break;
		
		case 375646046:
			return "WCT_CLIP1";
			break;
		
		case 503494624:
			return "WCT_SUPP";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_66(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < unk_0x99844FCFECAC01A5(iVar0))
					{
						if (unk_0xDDBECC1D7EC5DB2B(iVar0, iVar1, &Var41))
						{
							if (Var41.f_3 == iParam0)
							{
								return func_320(&(Var41.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

var func_320(var uParam0)
{
	return uParam0;
}

int func_321()
{
	if (unk_0xA26A9A07F761D8F8() && func_322())
	{
		return 1;
	}
	return 0;
}

int func_322()
{
	if (unk_0xCC17806DB0C41C19())
	{
		return unk_0xF6919DB2626A28C5();
	}
	return 0;
}

int func_323(int iParam0)
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		switch (iParam0)
		{
			case joaat("component_assaultrifle_clip_03"):
			case joaat("component_carbinerifle_clip_03"):
			case joaat("component_combatpdw_clip_03"):
			case joaat("component_compactrifle_clip_03"):
			case joaat("component_heavyshotgun_clip_03"):
			case joaat("component_machinepistol_clip_03"):
			case joaat("component_smg_clip_03"):
			case joaat("component_specialcarbine_clip_03"):
				return 0;
			
			default:
		}
	}
	else if (func_324(iParam0))
	{
		return Global_262145.f_21188;
	}
	return 1;
}

int func_324(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_pistol_mk2_camo_ind_01"):
		case joaat("component_smg_mk2_camo_ind_01"):
		case joaat("component_heavysniper_mk2_camo_ind_01"):
		case joaat("component_combatmg_mk2_camo_ind_01"):
		case joaat("component_assaultrifle_mk2_camo_ind_01"):
		case joaat("component_carbinerifle_mk2_camo_ind_01"):
		case joaat("component_pumpshotgun_mk2_camo_ind_01"):
		case joaat("component_specialcarbine_mk2_camo_ind_01"):
		case joaat("component_snspistol_mk2_camo_ind_01"):
		case joaat("component_marksmanrifle_mk2_camo_ind_01"):
		case joaat("component_revolver_mk2_camo_ind_01"):
		case joaat("component_bullpuprifle_mk2_camo_ind_01"):
			return 1;
			break;
	}
	return 0;
}

int func_325()
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	if (BitTest(Global_25, 6))
	{
		if (BitTest(Global_25, 2) || BitTest(Global_25, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xDD7756E2742E0F6D(joaat("sp_unlock_exclus_content"), &uVar0, -1))
	{
		if (BitTest(uVar0, 6))
		{
			if (BitTest(uVar0, 2) || BitTest(uVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x2E0A64C3A8C33FD3(0))
	{
		if (Global_152525.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0xDD7756E2742E0F6D(iVar2, &uVar1, -1))
			{
				if (BitTest(uVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x7D33DF1E1089E1D1())
	{
		uVar3 = unk_0x516080EA609481E1(866);
		if (BitTest(uVar3, 2) || BitTest(uVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_326()
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (BitTest(Global_25, 5))
	{
		if (BitTest(Global_25, 1) || BitTest(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xDD7756E2742E0F6D(joaat("sp_unlock_exclus_content"), &uVar0, -1))
	{
		if (BitTest(uVar0, 5))
		{
			if (BitTest(uVar0, 1) || BitTest(uVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x2E0A64C3A8C33FD3(0))
	{
		if (Global_152525.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0xDD7756E2742E0F6D(iVar2, &uVar1, -1))
			{
				if (BitTest(uVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x7D33DF1E1089E1D1())
	{
		uVar3 = unk_0x516080EA609481E1(866);
		if (BitTest(uVar3, 1) || BitTest(uVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0x7FFBE14C34D75E19())
	{
		if (unk_0x8BD41D5945F5762B())
		{
			if (unk_0xD916E44D1A0A301C())
			{
				unk_0xDD7756E2742E0F6D(joaat("sp_unlock_exclus_content"), &uVar4, -1);
				unk_0xECDAB41968FF21A8(&uVar4, 1);
				unk_0xECDAB41968FF21A8(&uVar4, 3);
				unk_0xECDAB41968FF21A8(&uVar4, 5);
				unk_0xECDAB41968FF21A8(&Global_25, 1);
				unk_0xECDAB41968FF21A8(&Global_25, 3);
				unk_0xECDAB41968FF21A8(&Global_25, 5);
				unk_0x3CC35ACFFC9C730E(joaat("sp_unlock_exclus_content"), uVar4, 1);
				if (unk_0x7D33DF1E1089E1D1())
				{
					uVar4 = unk_0x516080EA609481E1(866);
					unk_0xECDAB41968FF21A8(&uVar4, 1);
					unk_0xECDAB41968FF21A8(&uVar4, 3);
					unk_0x705949B096008718(uVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_327()
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
					uVar0 = unk_0x516080EA609481E1(866);
					unk_0xECDAB41968FF21A8(&uVar0, 0);
					unk_0x705949B096008718(uVar0);
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

int func_328(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_knife"):
			if (unk_0xA26A9A07F761D8F8())
			{
				if (func_329(370527443, iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = 370527443;
					iVar0++;
				}
				if (func_329(1109907117, iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = 1109907117;
					iVar0++;
				}
				if (func_329(2055456612, iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = 2055456612;
					iVar0++;
				}
				if (func_329(1690606566, iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = 1690606566;
					iVar0++;
				}
				if (func_329(-1633316949, iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = -1633316949;
					iVar0++;
				}
				if (func_329(-1461476313, iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = -1461476313;
					iVar0++;
				}
				if (func_329(-1770422457, iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = -1770422457;
					iVar0++;
				}
				if (func_329(-2059739958, iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = -2059739958;
					iVar0++;
				}
				if (func_329(-1280001599, iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = -1280001599;
					iVar0++;
				}
				if (func_329(-922885037, iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = -922885037;
					iVar0++;
				}
			}
			break;
		
		case joaat("weapon_bat"):
			if (unk_0xA26A9A07F761D8F8())
			{
				if (func_329(716207715, iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = 716207715;
					iVar0++;
				}
				if (func_329(446271089, iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = 446271089;
					iVar0++;
				}
				if (func_329(1045616099, iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = 1045616099;
					iVar0++;
				}
				if (func_329(1336277129, iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = 1336277129;
					iVar0++;
				}
				if (func_329(-513369076, iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = -513369076;
					iVar0++;
				}
				if (func_329(-447700000, iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = -447700000;
					iVar0++;
				}
				if (func_329(-149207179, iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = -149207179;
					iVar0++;
				}
				if (func_329(166784288, iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = 166784288;
					iVar0++;
				}
				if (func_329(2068729789, iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = 2068729789;
					iVar0++;
				}
				if (func_329(1761389338, iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = 1761389338;
					iVar0++;
				}
			}
			break;
	}
	return iVar0;
}

int func_329(int iParam0, int iParam1, var uParam2, var uParam3)
{
	*uParam2 = 1;
	*uParam3 = 0;
	switch (iParam1)
	{
		case joaat("weapon_bat"):
			if (!Global_262145.f_33877 || func_331(iParam0, iParam1, -1))
			{
				*uParam2 = 1;
				*uParam3 = 0;
				return 1;
			}
			if (Global_262145.f_33877)
			{
				*uParam2 = 0;
				*uParam3 = 1;
				return 1;
			}
			return 1;
			break;
		
		case joaat("weapon_knife"):
			if (!Global_262145.f_33877 || func_331(iParam0, iParam1, -1))
			{
				*uParam2 = 1;
				*uParam3 = 0;
				return 1;
			}
			if (Global_262145.f_33877)
			{
				*uParam2 = 0;
				*uParam3 = 1;
				return 1;
			}
			return 1;
			break;
	}
	return 0;
}

bool func_330(int iParam0)
{
	return iParam0 == 58;
}

int func_331(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	if (func_339())
	{
		return 0;
	}
	uVar0 = func_335(iParam0, iParam1, iParam2);
	iVar1 = func_333(iParam0, iParam1);
	return BitTest(uVar0, func_332(iVar1));
}

int func_332(int iParam0)
{
	return (iParam0 % 32);
}

int func_333(int iParam0, int iParam1)
{
	return func_334(iParam0, iParam1);
}

int func_334(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 1;
					break;
				
				case joaat("component_pistol_clip_02"):
					return 2;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 3;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 4;
					break;
				
				case joaat("component_pistol_varmod_luxe"):
					return 175;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 211;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 5;
					break;
				
				case joaat("component_combatpistol_clip_02"):
					return 6;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 7;
					break;
				
				case joaat("component_at_pi_supp"):
					return 8;
					break;
				
				case joaat("component_combatpistol_varmod_lowrider"):
					return 186;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 11;
					break;
				
				case joaat("component_appistol_clip_02"):
					return 12;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 13;
					break;
				
				case joaat("component_at_pi_supp"):
					return 14;
					break;
				
				case joaat("component_appistol_varmod_luxe"):
					return 164;
					break;
				
				case joaat("component_appistol_varmod_security"):
					return 569;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 15;
					break;
				
				case joaat("component_microsmg_clip_02"):
					return 16;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 17;
					break;
				
				case joaat("component_at_scope_macro"):
					return 18;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 19;
					break;
				
				case joaat("component_microsmg_varmod_luxe"):
					return 174;
					break;
				
				case joaat("component_microsmg_varmod_security"):
					return 570;
					break;
				
				case -1566778158:
					return 602;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 22;
					break;
				
				case joaat("component_smg_clip_02"):
					return 23;
					break;
				
				case joaat("component_smg_clip_03"):
					return 207;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 24;
					break;
				
				case joaat("component_at_scope_macro_02"):
					return 25;
					break;
				
				case joaat("component_at_pi_supp"):
					return 26;
					break;
				
				case joaat("component_smg_varmod_luxe"):
					return 179;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 212;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 27;
					break;
				
				case joaat("component_assaultrifle_clip_02"):
					return 28;
					break;
				
				case joaat("component_assaultrifle_clip_03"):
					return 201;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 29;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 30;
					break;
				
				case joaat("component_at_scope_macro"):
					return 31;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 32;
					break;
				
				case joaat("component_assaultrifle_varmod_luxe"):
					return 165;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 213;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 33;
					break;
				
				case joaat("component_carbinerifle_clip_02"):
					return 34;
					break;
				
				case joaat("component_carbinerifle_clip_03"):
					return 202;
					break;
				
				case joaat("component_at_railcover_01"):
					return 35;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 36;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 37;
					break;
				
				case joaat("component_at_scope_medium"):
					return 38;
					break;
				
				case joaat("component_at_ar_supp"):
					return 39;
					break;
				
				case joaat("component_carbinerifle_varmod_luxe"):
					return 168;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 214;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 44;
					break;
				
				case joaat("component_advancedrifle_clip_02"):
					return 45;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 47;
					break;
				
				case joaat("component_at_scope_small"):
					return 48;
					break;
				
				case joaat("component_at_ar_supp"):
					return 49;
					break;
				
				case joaat("component_advancedrifle_varmod_luxe"):
					return 163;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 50;
					break;
				
				case joaat("component_mg_clip_02"):
					return 51;
					break;
				
				case joaat("component_at_scope_small_02"):
					return 52;
					break;
				
				case joaat("component_mg_varmod_lowrider"):
					return 187;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 53;
					break;
				
				case joaat("component_combatmg_clip_02"):
					return 54;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 55;
					break;
				
				case joaat("component_at_scope_medium"):
					return 56;
					break;
				
				case joaat("component_combatmg_varmod_lowrider"):
					return 188;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 215;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 59;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 60;
					break;
				
				case joaat("component_pumpshotgun_varmod_lowrider"):
					return 193;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 389;
					break;
				
				case joaat("component_pumpshotgun_varmod_security"):
					return 571;
					break;
				
				case 330905451:
					return 603;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 64;
					break;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 65;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 66;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 67;
					break;
				
				case joaat("component_at_ar_supp"):
					return 68;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_sniperrifle_clip_01"):
					return 69;
					break;
				
				case joaat("component_at_scope_large"):
					return 70;
					break;
				
				case joaat("component_at_scope_max"):
					return 71;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 72;
					break;
				
				case joaat("component_sniperrifle_varmod_luxe"):
					return 180;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_clip_01"):
					return 76;
					break;
				
				case joaat("component_at_scope_max"):
					return 77;
					break;
				
				case joaat("component_at_scope_large"):
					return 82;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 216;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 78;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 79;
					break;
				
				case joaat("component_at_scope_small"):
					return 80;
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam0)
			{
				case joaat("component_minigun_clip_01"):
					return 81;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 83;
					break;
				
				case joaat("component_assaultsmg_clip_02"):
					return 84;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 85;
					break;
				
				case joaat("component_at_scope_macro"):
					return 86;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 87;
					break;
				
				case joaat("component_assaultsmg_varmod_lowrider"):
					return 189;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 88;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 89;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 90;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 91;
					break;
				
				case joaat("component_pistol50_clip_02"):
					return 92;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 93;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 94;
					break;
				
				case joaat("component_pistol50_varmod_luxe"):
					return 176;
					break;
			}
			break;
		
		case 392730790:
			switch (iParam0)
			{
				case 195735895:
					return 95;
					break;
				
				case joaat("component_at_scope_large"):
					return 96;
					break;
				
				case joaat("component_at_scope_max"):
					return 97;
					break;
				
				case joaat("component_at_ar_supp"):
					return 98;
					break;
			}
			break;
		
		case -572349828:
			switch (iParam0)
			{
				case -890514874:
					return 105;
					break;
				
				case -507117574:
					return 106;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 107;
					break;
				
				case joaat("component_at_scope_medium"):
					return 108;
					break;
			}
			break;
		
		case -1887867191:
			switch (iParam0)
			{
				case -124428919:
					return 109;
					break;
				
				case 1048471894:
					return 110;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 111;
					break;
				
				case joaat("component_specialcarbine_clip_02"):
					return 112;
					break;
				
				case joaat("component_specialcarbine_clip_03"):
					return 208;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 113;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 114;
					break;
				
				case joaat("component_at_scope_medium"):
					return 115;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 116;
					break;
				
				case joaat("component_specialcarbine_varmod_lowrider"):
					return 190;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 390;
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 117;
					break;
				
				case joaat("component_snspistol_clip_02"):
					return 118;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 119;
					break;
				
				case joaat("component_at_pi_supp"):
					return 120;
					break;
				
				case joaat("component_snspistol_varmod_lowrider"):
					return 191;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 391;
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 121;
					break;
				
				case joaat("component_heavypistol_clip_02"):
					return 122;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 123;
					break;
				
				case joaat("component_at_pi_supp"):
					return 124;
					break;
				
				case joaat("component_heavypistol_varmod_luxe"):
					return 171;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 131;
					break;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 132;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 127;
					break;
				
				case joaat("component_at_ar_supp"):
					return 128;
					break;
				
				case joaat("component_at_scope_small"):
					return 129;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 130;
					break;
				
				case joaat("component_bullpuprifle_varmod_low"):
					return 192;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 394;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 125;
					break;
				
				case joaat("component_gusenberg_clip_02"):
					return 126;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 133;
					break;
				
				case joaat("component_vintagepistol_clip_02"):
					return 134;
					break;
				
				case joaat("component_at_pi_supp"):
					return 136;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 137;
					break;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 140;
					break;
				
				case joaat("component_heavyshotgun_clip_03"):
					return 205;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 145;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 146;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 147;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 138;
					break;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 139;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 141;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 142;
					break;
				
				case joaat("component_at_ar_supp"):
					return 143;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 144;
					break;
				
				case joaat("component_marksmanrifle_varmod_luxe"):
					return 172;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 392;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 149;
					break;
				
				case joaat("component_combatpdw_clip_02"):
					return 150;
					break;
				
				case joaat("component_combatpdw_clip_03"):
					return 203;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 151;
					break;
				
				case joaat("component_at_scope_small"):
					return 152;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 153;
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam0)
			{
				case joaat("component_sawnoffshotgun_varmod_luxe"):
					return 178;
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam0)
			{
				case joaat("component_marksmanpistol_clip_01"):
					return 148;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam0)
			{
				case joaat("component_knuckle_varmod_pimp"):
					return 154;
					break;
				
				case joaat("component_knuckle_varmod_ballas"):
					return 155;
					break;
				
				case joaat("component_knuckle_varmod_dollar"):
					return 156;
					break;
				
				case joaat("component_knuckle_varmod_diamond"):
					return 157;
					break;
				
				case joaat("component_knuckle_varmod_hate"):
					return 158;
					break;
				
				case joaat("component_knuckle_varmod_love"):
					return 159;
					break;
				
				case joaat("component_knuckle_varmod_player"):
					return 160;
					break;
				
				case joaat("component_knuckle_varmod_king"):
					return 161;
					break;
				
				case joaat("component_knuckle_varmod_vagos"):
					return 162;
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam0)
			{
				case joaat("component_machinepistol_clip_01"):
					return 184;
					break;
				
				case joaat("component_machinepistol_clip_02"):
					return 185;
					break;
				
				case joaat("component_machinepistol_clip_03"):
					return 206;
					break;
				
				case joaat("component_at_pi_supp"):
					return 183;
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam0)
			{
				case joaat("component_switchblade_varmod_var1"):
					return 194;
					break;
				
				case joaat("component_switchblade_varmod_var2"):
					return 195;
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam0)
			{
				case joaat("component_revolver_clip_01"):
					return 196;
					break;
				
				case joaat("component_revolver_varmod_boss"):
					return 197;
					break;
				
				case joaat("component_revolver_varmod_goon"):
					return 198;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 393;
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam0)
			{
				case joaat("component_compactrifle_clip_01"):
					return 199;
					break;
				
				case joaat("component_compactrifle_clip_02"):
					return 200;
					break;
				
				case joaat("component_compactrifle_clip_03"):
					return 204;
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam0)
			{
				case joaat("component_minismg_clip_01"):
					return 209;
					break;
				
				case joaat("component_minismg_clip_02"):
					return 210;
					break;
			}
			break;
		
		case joaat("weapon_pistol_mk2"):
			switch (iParam0)
			{
				case joaat("component_pistol_mk2_clip_01"):
					return 217;
					break;
				
				case joaat("component_pistol_mk2_clip_02"):
					return 218;
					break;
				
				case joaat("component_pistol_mk2_clip_fmj"):
					return 219;
					break;
				
				case joaat("component_pistol_mk2_clip_hollowpoint"):
					return 220;
					break;
				
				case joaat("component_pistol_mk2_clip_incendiary"):
					return 221;
					break;
				
				case joaat("component_pistol_mk2_clip_tracer"):
					return 222;
					break;
				
				case joaat("component_at_pi_flsh_02"):
					return 223;
					break;
				
				case joaat("component_at_pi_rail"):
					return 224;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 225;
					break;
				
				case joaat("component_at_pi_comp"):
					return 226;
					break;
				
				case joaat("component_pistol_mk2_camo"):
					return 367;
					break;
				
				case joaat("component_pistol_mk2_camo_02"):
					return 368;
					break;
				
				case joaat("component_pistol_mk2_camo_03"):
					return 369;
					break;
				
				case joaat("component_pistol_mk2_camo_04"):
					return 370;
					break;
				
				case joaat("component_pistol_mk2_camo_05"):
					return 371;
					break;
				
				case joaat("component_pistol_mk2_camo_06"):
					return 372;
					break;
				
				case joaat("component_pistol_mk2_camo_07"):
					return 373;
					break;
				
				case joaat("component_pistol_mk2_camo_08"):
					return 374;
					break;
				
				case joaat("component_pistol_mk2_camo_09"):
					return 375;
					break;
				
				case joaat("component_pistol_mk2_camo_10"):
					return 376;
					break;
				
				case joaat("component_pistol_mk2_camo_ind_01"):
					return 377;
					break;
				
				case 1141184690:
					return 601;
					break;
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			switch (iParam0)
			{
				case joaat("component_smg_mk2_clip_01"):
					return 227;
					break;
				
				case joaat("component_smg_mk2_clip_02"):
					return 228;
					break;
				
				case joaat("component_smg_mk2_clip_fmj"):
					return 229;
					break;
				
				case joaat("component_smg_mk2_clip_hollowpoint"):
					return 230;
					break;
				
				case joaat("component_smg_mk2_clip_incendiary"):
					return 231;
					break;
				
				case joaat("component_smg_mk2_clip_tracer"):
					return 232;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 233;
					break;
				
				case joaat("component_at_sights_smg"):
					return 234;
					break;
				
				case joaat("component_at_scope_macro_02_smg_mk2"):
					return 235;
					break;
				
				case joaat("component_at_scope_small_smg_mk2"):
					return 236;
					break;
				
				case joaat("component_at_pi_supp"):
					return 237;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 238;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 239;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 240;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 241;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 242;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 243;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 244;
					break;
				
				case joaat("component_at_sb_barrel_01"):
					return 245;
					break;
				
				case joaat("component_at_sb_barrel_02"):
					return 246;
					break;
				
				case joaat("component_smg_mk2_camo"):
					return 378;
					break;
				
				case joaat("component_smg_mk2_camo_02"):
					return 379;
					break;
				
				case joaat("component_smg_mk2_camo_03"):
					return 380;
					break;
				
				case joaat("component_smg_mk2_camo_04"):
					return 381;
					break;
				
				case joaat("component_smg_mk2_camo_05"):
					return 382;
					break;
				
				case joaat("component_smg_mk2_camo_06"):
					return 383;
					break;
				
				case joaat("component_smg_mk2_camo_07"):
					return 384;
					break;
				
				case joaat("component_smg_mk2_camo_08"):
					return 385;
					break;
				
				case joaat("component_smg_mk2_camo_09"):
					return 386;
					break;
				
				case joaat("component_smg_mk2_camo_10"):
					return 387;
					break;
				
				case joaat("component_smg_mk2_camo_ind_01"):
					return 388;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_mk2_clip_01"):
					return 247;
					break;
				
				case joaat("component_heavysniper_mk2_clip_02"):
					return 248;
					break;
				
				case joaat("component_heavysniper_mk2_clip_armorpiercing"):
					return 249;
					break;
				
				case joaat("component_heavysniper_mk2_clip_explosive"):
					return 250;
					break;
				
				case joaat("component_heavysniper_mk2_clip_fmj"):
					return 251;
					break;
				
				case joaat("component_heavysniper_mk2_clip_incendiary"):
					return 252;
					break;
				
				case joaat("component_at_scope_large_mk2"):
					return 253;
					break;
				
				case joaat("component_at_scope_max"):
					return 254;
					break;
				
				case joaat("component_at_scope_nv"):
					return 255;
					break;
				
				case joaat("component_at_scope_thermal"):
					return 256;
					break;
				
				case joaat("component_at_sr_supp_03"):
					return 257;
					break;
				
				case joaat("component_at_muzzle_08"):
					return 258;
					break;
				
				case joaat("component_at_muzzle_09"):
					return 259;
					break;
				
				case joaat("component_at_sr_barrel_01"):
					return 260;
					break;
				
				case joaat("component_at_sr_barrel_02"):
					return 261;
					break;
				
				case joaat("component_heavysniper_mk2_camo"):
					return 356;
					break;
				
				case joaat("component_heavysniper_mk2_camo_02"):
					return 357;
					break;
				
				case joaat("component_heavysniper_mk2_camo_03"):
					return 358;
					break;
				
				case joaat("component_heavysniper_mk2_camo_04"):
					return 359;
					break;
				
				case joaat("component_heavysniper_mk2_camo_05"):
					return 360;
					break;
				
				case joaat("component_heavysniper_mk2_camo_06"):
					return 361;
					break;
				
				case joaat("component_heavysniper_mk2_camo_07"):
					return 362;
					break;
				
				case joaat("component_heavysniper_mk2_camo_08"):
					return 363;
					break;
				
				case joaat("component_heavysniper_mk2_camo_09"):
					return 364;
					break;
				
				case joaat("component_heavysniper_mk2_camo_10"):
					return 365;
					break;
				
				case joaat("component_heavysniper_mk2_camo_ind_01"):
					return 366;
					break;
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			switch (iParam0)
			{
				case joaat("component_combatmg_mk2_clip_01"):
					return 262;
					break;
				
				case joaat("component_combatmg_mk2_clip_02"):
					return 263;
					break;
				
				case joaat("component_combatmg_mk2_clip_armorpiercing"):
					return 264;
					break;
				
				case joaat("component_combatmg_mk2_clip_fmj"):
					return 265;
					break;
				
				case joaat("component_combatmg_mk2_clip_incendiary"):
					return 266;
					break;
				
				case joaat("component_combatmg_mk2_clip_tracer"):
					return 267;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 268;
					break;
				
				case joaat("component_at_sights"):
					return 269;
					break;
				
				case joaat("component_at_scope_small_mk2"):
					return 270;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 271;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 272;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 273;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 274;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 275;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 276;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 277;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 278;
					break;
				
				case joaat("component_at_mg_barrel_01"):
					return 279;
					break;
				
				case joaat("component_at_mg_barrel_02"):
					return 280;
					break;
				
				case joaat("component_combatmg_mk2_camo"):
					return 345;
					break;
				
				case joaat("component_combatmg_mk2_camo_02"):
					return 346;
					break;
				
				case joaat("component_combatmg_mk2_camo_03"):
					return 347;
					break;
				
				case joaat("component_combatmg_mk2_camo_04"):
					return 348;
					break;
				
				case joaat("component_combatmg_mk2_camo_05"):
					return 349;
					break;
				
				case joaat("component_combatmg_mk2_camo_06"):
					return 350;
					break;
				
				case joaat("component_combatmg_mk2_camo_07"):
					return 351;
					break;
				
				case joaat("component_combatmg_mk2_camo_08"):
					return 352;
					break;
				
				case joaat("component_combatmg_mk2_camo_09"):
					return 353;
					break;
				
				case joaat("component_combatmg_mk2_camo_10"):
					return 354;
					break;
				
				case joaat("component_combatmg_mk2_camo_ind_01"):
					return 355;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_mk2_clip_01"):
					return 281;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_02"):
					return 282;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_armorpiercing"):
					return 283;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_fmj"):
					return 284;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_incendiary"):
					return 285;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_tracer"):
					return 286;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 287;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 288;
					break;
				
				case joaat("component_at_sights"):
					return 289;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 290;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 291;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 292;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 293;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 294;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 295;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 296;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 297;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 298;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 299;
					break;
				
				case joaat("component_at_ar_barrel_01"):
					return 300;
					break;
				
				case joaat("component_at_ar_barrel_02"):
					return 301;
					break;
				
				case joaat("component_assaultrifle_mk2_camo"):
					return 323;
					break;
				
				case joaat("component_assaultrifle_mk2_camo_02"):
					return 324;
					break;
				
				case joaat("component_assaultrifle_mk2_camo_03"):
					return 325;
					break;
				
				case joaat("component_assaultrifle_mk2_camo_04"):
					return 326;
					break;
				
				case joaat("component_assaultrifle_mk2_camo_05"):
					return 327;
					break;
				
				case joaat("component_assaultrifle_mk2_camo_06"):
					return 328;
					break;
				
				case joaat("component_assaultrifle_mk2_camo_07"):
					return 329;
					break;
				
				case joaat("component_assaultrifle_mk2_camo_08"):
					return 330;
					break;
				
				case joaat("component_assaultrifle_mk2_camo_09"):
					return 331;
					break;
				
				case joaat("component_assaultrifle_mk2_camo_10"):
					return 332;
					break;
				
				case joaat("component_assaultrifle_mk2_camo_ind_01"):
					return 333;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_mk2_clip_01"):
					return 302;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_02"):
					return 303;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_armorpiercing"):
					return 304;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_fmj"):
					return 305;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_incendiary"):
					return 306;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_tracer"):
					return 307;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 308;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 309;
					break;
				
				case joaat("component_at_sights"):
					return 310;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 311;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 312;
					break;
				
				case joaat("component_at_ar_supp"):
					return 313;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 314;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 315;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 316;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 317;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 318;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 319;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 320;
					break;
				
				case joaat("component_at_cr_barrel_01"):
					return 321;
					break;
				
				case joaat("component_at_cr_barrel_02"):
					return 322;
					break;
				
				case joaat("component_carbinerifle_mk2_camo"):
					return 334;
					break;
				
				case joaat("component_carbinerifle_mk2_camo_02"):
					return 335;
					break;
				
				case joaat("component_carbinerifle_mk2_camo_03"):
					return 336;
					break;
				
				case joaat("component_carbinerifle_mk2_camo_04"):
					return 337;
					break;
				
				case joaat("component_carbinerifle_mk2_camo_05"):
					return 338;
					break;
				
				case joaat("component_carbinerifle_mk2_camo_06"):
					return 339;
					break;
				
				case joaat("component_carbinerifle_mk2_camo_07"):
					return 340;
					break;
				
				case joaat("component_carbinerifle_mk2_camo_08"):
					return 341;
					break;
				
				case joaat("component_carbinerifle_mk2_camo_09"):
					return 342;
					break;
				
				case joaat("component_carbinerifle_mk2_camo_10"):
					return 343;
					break;
				
				case joaat("component_carbinerifle_mk2_camo_ind_01"):
					return 344;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			switch (iParam0)
			{
				case joaat("component_pumpshotgun_mk2_clip_01"):
					return 395;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_armorpiercing"):
					return 396;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_explosive"):
					return 397;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_hollowpoint"):
					return 398;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_incendiary"):
					return 399;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 400;
					break;
				
				case joaat("component_at_sights"):
					return 401;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 402;
					break;
				
				case joaat("component_at_scope_small_mk2"):
					return 403;
					break;
				
				case joaat("component_at_sr_supp_03"):
					return 404;
					break;
				
				case joaat("component_at_muzzle_08"):
					return 405;
					break;
				
				case joaat("component_pumpshotgun_mk2_camo"):
					return 488;
					break;
				
				case joaat("component_pumpshotgun_mk2_camo_02"):
					return 489;
					break;
				
				case joaat("component_pumpshotgun_mk2_camo_03"):
					return 490;
					break;
				
				case joaat("component_pumpshotgun_mk2_camo_04"):
					return 491;
					break;
				
				case joaat("component_pumpshotgun_mk2_camo_05"):
					return 492;
					break;
				
				case joaat("component_pumpshotgun_mk2_camo_06"):
					return 493;
					break;
				
				case joaat("component_pumpshotgun_mk2_camo_07"):
					return 494;
					break;
				
				case joaat("component_pumpshotgun_mk2_camo_08"):
					return 495;
					break;
				
				case joaat("component_pumpshotgun_mk2_camo_09"):
					return 496;
					break;
				
				case joaat("component_pumpshotgun_mk2_camo_10"):
					return 497;
					break;
				
				case joaat("component_pumpshotgun_mk2_camo_ind_01"):
					return 498;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_mk2_clip_01"):
					return 406;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_02"):
					return 407;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_armorpiercing"):
					return 408;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_fmj"):
					return 409;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_incendiary"):
					return 410;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_tracer"):
					return 411;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 412;
					break;
				
				case joaat("component_at_sights"):
					return 413;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 414;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 415;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 416;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 417;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 418;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 419;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 420;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 421;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 422;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 423;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 424;
					break;
				
				case joaat("component_at_sc_barrel_01"):
					return 425;
					break;
				
				case joaat("component_at_sc_barrel_02"):
					return 426;
					break;
				
				case joaat("component_specialcarbine_mk2_camo"):
					return 532;
					break;
				
				case joaat("component_specialcarbine_mk2_camo_02"):
					return 533;
					break;
				
				case joaat("component_specialcarbine_mk2_camo_03"):
					return 534;
					break;
				
				case joaat("component_specialcarbine_mk2_camo_04"):
					return 535;
					break;
				
				case joaat("component_specialcarbine_mk2_camo_05"):
					return 536;
					break;
				
				case joaat("component_specialcarbine_mk2_camo_06"):
					return 537;
					break;
				
				case joaat("component_specialcarbine_mk2_camo_07"):
					return 538;
					break;
				
				case joaat("component_specialcarbine_mk2_camo_08"):
					return 539;
					break;
				
				case joaat("component_specialcarbine_mk2_camo_09"):
					return 540;
					break;
				
				case joaat("component_specialcarbine_mk2_camo_10"):
					return 541;
					break;
				
				case joaat("component_specialcarbine_mk2_camo_ind_01"):
					return 542;
					break;
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			switch (iParam0)
			{
				case joaat("component_snspistol_mk2_clip_01"):
					return 427;
					break;
				
				case joaat("component_snspistol_mk2_clip_02"):
					return 428;
					break;
				
				case joaat("component_snspistol_mk2_clip_fmj"):
					return 429;
					break;
				
				case joaat("component_snspistol_mk2_clip_hollowpoint"):
					return 430;
					break;
				
				case joaat("component_snspistol_mk2_clip_incendiary"):
					return 431;
					break;
				
				case joaat("component_snspistol_mk2_clip_tracer"):
					return 432;
					break;
				
				case joaat("component_at_pi_flsh_03"):
					return 433;
					break;
				
				case joaat("component_at_pi_rail_02"):
					return 434;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 435;
					break;
				
				case joaat("component_at_pi_comp_02"):
					return 436;
					break;
				
				case joaat("component_snspistol_mk2_camo"):
					return 510;
					break;
				
				case joaat("component_snspistol_mk2_camo_02"):
					return 511;
					break;
				
				case joaat("component_snspistol_mk2_camo_03"):
					return 512;
					break;
				
				case joaat("component_snspistol_mk2_camo_04"):
					return 513;
					break;
				
				case joaat("component_snspistol_mk2_camo_05"):
					return 514;
					break;
				
				case joaat("component_snspistol_mk2_camo_06"):
					return 515;
					break;
				
				case joaat("component_snspistol_mk2_camo_07"):
					return 516;
					break;
				
				case joaat("component_snspistol_mk2_camo_08"):
					return 517;
					break;
				
				case joaat("component_snspistol_mk2_camo_09"):
					return 518;
					break;
				
				case joaat("component_snspistol_mk2_camo_10"):
					return 519;
					break;
				
				case joaat("component_snspistol_mk2_camo_ind_01"):
					return 520;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_mk2_clip_01"):
					return 437;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_02"):
					return 438;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_armorpiercing"):
					return 439;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_fmj"):
					return 440;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_incendiary"):
					return 441;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_tracer"):
					return 442;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 443;
					break;
				
				case joaat("component_at_sights"):
					return 444;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 445;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom_mk2"):
					return 446;
					break;
				
				case joaat("component_at_ar_supp"):
					return 447;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 448;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 449;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 450;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 451;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 452;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 453;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 454;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 455;
					break;
				
				case joaat("component_at_mrfl_barrel_01"):
					return 456;
					break;
				
				case joaat("component_at_mrfl_barrel_02"):
					return 457;
					break;
				
				case joaat("component_marksmanrifle_mk2_camo"):
					return 521;
					break;
				
				case joaat("component_marksmanrifle_mk2_camo_02"):
					return 522;
					break;
				
				case joaat("component_marksmanrifle_mk2_camo_03"):
					return 523;
					break;
				
				case joaat("component_marksmanrifle_mk2_camo_04"):
					return 524;
					break;
				
				case joaat("component_marksmanrifle_mk2_camo_05"):
					return 525;
					break;
				
				case joaat("component_marksmanrifle_mk2_camo_06"):
					return 526;
					break;
				
				case joaat("component_marksmanrifle_mk2_camo_07"):
					return 527;
					break;
				
				case joaat("component_marksmanrifle_mk2_camo_08"):
					return 528;
					break;
				
				case joaat("component_marksmanrifle_mk2_camo_09"):
					return 529;
					break;
				
				case joaat("component_marksmanrifle_mk2_camo_10"):
					return 530;
					break;
				
				case joaat("component_marksmanrifle_mk2_camo_ind_01"):
					return 531;
					break;
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			switch (iParam0)
			{
				case joaat("component_revolver_mk2_clip_01"):
					return 458;
					break;
				
				case joaat("component_revolver_mk2_clip_fmj"):
					return 459;
					break;
				
				case joaat("component_revolver_mk2_clip_hollowpoint"):
					return 460;
					break;
				
				case joaat("component_revolver_mk2_clip_incendiary"):
					return 461;
					break;
				
				case joaat("component_revolver_mk2_clip_tracer"):
					return 462;
					break;
				
				case joaat("component_at_sights"):
					return 463;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 464;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 465;
					break;
				
				case joaat("component_at_pi_comp_03"):
					return 466;
					break;
				
				case joaat("component_revolver_mk2_camo"):
					return 499;
					break;
				
				case joaat("component_revolver_mk2_camo_02"):
					return 500;
					break;
				
				case joaat("component_revolver_mk2_camo_03"):
					return 501;
					break;
				
				case joaat("component_revolver_mk2_camo_04"):
					return 502;
					break;
				
				case joaat("component_revolver_mk2_camo_05"):
					return 503;
					break;
				
				case joaat("component_revolver_mk2_camo_06"):
					return 504;
					break;
				
				case joaat("component_revolver_mk2_camo_07"):
					return 505;
					break;
				
				case joaat("component_revolver_mk2_camo_08"):
					return 506;
					break;
				
				case joaat("component_revolver_mk2_camo_09"):
					return 507;
					break;
				
				case joaat("component_revolver_mk2_camo_10"):
					return 508;
					break;
				
				case joaat("component_revolver_mk2_camo_ind_01"):
					return 509;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_mk2_clip_01"):
					return 467;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_02"):
					return 468;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_armorpiercing"):
					return 469;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_fmj"):
					return 470;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_incendiary"):
					return 471;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_tracer"):
					return 472;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 473;
					break;
				
				case joaat("component_at_sights"):
					return 474;
					break;
				
				case joaat("component_at_scope_macro_02_mk2"):
					return 475;
					break;
				
				case joaat("component_at_scope_small_mk2"):
					return 476;
					break;
				
				case joaat("component_at_bp_barrel_01"):
					return 477;
					break;
				
				case joaat("component_at_bp_barrel_02"):
					return 478;
					break;
				
				case joaat("component_at_ar_supp"):
					return 479;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 480;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 481;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 482;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 483;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 484;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 485;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 486;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 487;
					break;
				
				case joaat("component_bullpuprifle_mk2_camo"):
					return 543;
					break;
				
				case joaat("component_bullpuprifle_mk2_camo_02"):
					return 544;
					break;
				
				case joaat("component_bullpuprifle_mk2_camo_03"):
					return 545;
					break;
				
				case joaat("component_bullpuprifle_mk2_camo_04"):
					return 546;
					break;
				
				case joaat("component_bullpuprifle_mk2_camo_05"):
					return 547;
					break;
				
				case joaat("component_bullpuprifle_mk2_camo_06"):
					return 548;
					break;
				
				case joaat("component_bullpuprifle_mk2_camo_07"):
					return 549;
					break;
				
				case joaat("component_bullpuprifle_mk2_camo_08"):
					return 550;
					break;
				
				case joaat("component_bullpuprifle_mk2_camo_09"):
					return 551;
					break;
				
				case joaat("component_bullpuprifle_mk2_camo_10"):
					return 552;
					break;
				
				case joaat("component_bullpuprifle_mk2_camo_ind_01"):
					return 553;
					break;
			}
			break;
		
		case joaat("weapon_raypistol"):
			switch (iParam0)
			{
				case joaat("component_raypistol_varmod_xmas18"):
					return 554;
					break;
			}
			break;
		
		case joaat("weapon_ceramicpistol"):
			switch (iParam0)
			{
				case joaat("component_ceramicpistol_clip_01"):
					return 555;
					break;
				
				case joaat("component_ceramicpistol_clip_02"):
					return 556;
					break;
				
				case joaat("component_ceramicpistol_supp"):
					return 557;
					break;
			}
			break;
		
		case joaat("weapon_combatshotgun"):
			switch (iParam0)
			{
				case joaat("component_combatshotgun_clip_01"):
					return 559;
				
				case joaat("component_at_ar_flsh"):
					return 560;
					break;
				
				case joaat("component_at_ar_supp"):
					return 561;
					break;
			}
			break;
		
		case joaat("weapon_militaryrifle"):
			switch (iParam0)
			{
				case joaat("component_militaryrifle_clip_01"):
					return 562;
					break;
				
				case joaat("component_militaryrifle_clip_02"):
					return 563;
					break;
				
				case joaat("component_militaryrifle_sight_01"):
					return 564;
					break;
				
				case joaat("component_at_scope_small"):
					return 565;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 566;
					break;
				
				case joaat("component_at_ar_supp"):
					return 567;
					break;
			}
			break;
		
		case joaat("weapon_gadgetpistol"):
			switch (iParam0)
			{
				case joaat("component_gadgetpistol_clip_01"):
					return 558;
					break;
			}
			break;
		
		case joaat("weapon_heavyrifle"):
			switch (iParam0)
			{
				case joaat("component_heavyrifle_clip_01"):
					return 99;
					break;
				
				case joaat("component_heavyrifle_clip_02"):
					return 100;
					break;
				
				case joaat("component_heavyrifle_camo1"):
					return 568;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 101;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 102;
					break;
				
				case joaat("component_at_scope_medium"):
					return 103;
					break;
				
				case joaat("component_at_ar_supp"):
					return 104;
					break;
				
				case joaat("component_heavyrifle_sight_01"):
					return 572;
					break;
			}
			break;
		
		case joaat("weapon_tacticalrifle"):
			switch (iParam0)
			{
				case 927578299:
					return 573;
					break;
				
				case joaat("component_tacticalrifle_clip_02"):
					return 574;
					break;
				
				case joaat("component_at_ar_flsh_reh"):
					return 575;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 576;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 577;
					break;
			}
			break;
		
		case 465894841:
			switch (iParam0)
			{
				case 375646046:
					return 578;
					break;
				
				case 503494624:
					return 579;
					break;
			}
			break;
		
		case -22923932:
			switch (iParam0)
			{
				case 1130760338:
					return 580;
					break;
			}
			break;
		
		case joaat("weapon_bat"):
			switch (iParam0)
			{
				case 716207715:
					return 581;
					break;
				
				case 446271089:
					return 583;
					break;
				
				case 1045616099:
					return 584;
					break;
				
				case 1336277129:
					return 585;
					break;
				
				case -513369076:
					return 586;
					break;
				
				case -447700000:
					return 587;
					break;
				
				case -149207179:
					return 588;
					break;
				
				case 166784288:
					return 589;
					break;
				
				case 2068729789:
					return 590;
					break;
				
				case 1761389338:
					return 591;
					break;
			}
			break;
		
		case joaat("weapon_knife"):
			switch (iParam0)
			{
				case 370527443:
					return 582;
					break;
				
				case 1109907117:
					return 592;
					break;
				
				case 2055456612:
					return 593;
					break;
				
				case 1690606566:
					return 594;
					break;
				
				case -1633316949:
					return 595;
					break;
				
				case -1461476313:
					return 596;
					break;
				
				case -1770422457:
					return 597;
					break;
				
				case -2059739958:
					return 598;
					break;
				
				case -1280001599:
					return 599;
					break;
				
				case -922885037:
					return 600;
					break;
			}
			break;
	}
	return 0;
}

var func_335(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	
	uVar0 = func_52(func_336(iParam0, iParam1), uParam2, 0);
	return uVar0;
}

int func_336(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_333(iParam0, iParam1);
	iVar1 = func_338(iVar0);
	if ((func_77() == 0 || func_337() == 0) || (func_77() == 999 && func_337() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 811;
				break;
			
			case 1:
				return 812;
				break;
			
			case 2:
				return 813;
				break;
			
			case 3:
				return 814;
				break;
			
			case 4:
				return 1753;
				break;
			
			case 5:
				return 2435;
				break;
			
			case 6:
				return 2828;
				break;
			
			case 7:
				return 5502;
				break;
			
			case 8:
				return 5506;
				break;
			
			case 9:
				return 5510;
				break;
			
			case 10:
				return 5623;
				break;
			
			case 11:
				return 5627;
				break;
			
			case 12:
				return 5631;
				break;
			
			case 13:
				return 5635;
				break;
			
			case 14:
				return 6374;
				break;
			
			case 15:
				return 6497;
				break;
			
			case 16:
				return 6517;
				break;
			
			case 17:
				return 6523;
				break;
			
			case 18:
				return 10272;
				break;
			}
	}
	return 14192;
}

int func_337()
{
	return Global_32164;
}

int func_338(int iParam0)
{
	return (iParam0 / 32);
}

bool func_339()
{
	return Global_1575039;
}

bool func_340(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_54();
	}
	return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}

int func_341(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	if (func_339())
	{
		return 0;
	}
	uVar0 = func_342(iParam0, iParam1, iParam2);
	iVar1 = func_333(iParam0, iParam1);
	return BitTest(uVar0, func_332(iVar1));
}

var func_342(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	
	uVar0 = func_52(func_343(iParam0, iParam1), uParam2, 0);
	return uVar0;
}

int func_343(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_333(iParam0, iParam1);
	iVar1 = func_338(iVar0);
	if ((func_77() == 0 || func_337() == 0) || (func_77() == 999 && func_337() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 688;
				break;
			
			case 1:
				return 689;
				break;
			
			case 2:
				return 690;
				break;
			
			case 3:
				return 691;
				break;
			
			case 4:
				return 1755;
				break;
			
			case 5:
				return 2437;
				break;
			
			case 6:
				return 2830;
				break;
			
			case 7:
				return 5504;
				break;
			
			case 8:
				return 5508;
				break;
			
			case 9:
				return 5512;
				break;
			
			case 10:
				return 5625;
				break;
			
			case 11:
				return 5629;
				break;
			
			case 12:
				return 5633;
				break;
			
			case 13:
				return 5637;
				break;
			
			case 14:
				return 6376;
				break;
			
			case 15:
				return 6499;
				break;
			
			case 16:
				return 6519;
				break;
			
			case 17:
				return 6525;
				break;
			
			case 18:
				return 10274;
				break;
		}
	}
	return 1755;
}

int func_344(int iParam0)
{
	switch (iParam0)
	{
		case 46:
		case 47:
		case 48:
		case 49:
		case 52:
		case 53:
		case 56:
		case 59:
			return 1;
		
		default:
	}
	return 0;
}

void func_345(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
}

int func_346(int iParam0)
{
	if (func_347(iParam0) || iParam0 == joaat("weapon_heavyrifle"))
	{
		return 1;
	}
	return 0;
}

int func_347(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol_mk2"):
		case joaat("weapon_smg_mk2"):
		case joaat("weapon_assaultrifle_mk2"):
		case joaat("weapon_carbinerifle_mk2"):
		case joaat("weapon_combatmg_mk2"):
		case joaat("weapon_heavysniper_mk2"):
		case joaat("weapon_pumpshotgun_mk2"):
		case joaat("weapon_specialcarbine_mk2"):
		case joaat("weapon_snspistol_mk2"):
		case joaat("weapon_marksmanrifle_mk2"):
		case joaat("weapon_revolver_mk2"):
		case joaat("weapon_bullpuprifle_mk2"):
			return 1;
			break;
	}
	return 0;
}

int func_348(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar7;
	
	while (func_283(&Var0, iParam0, iVar7, 0))
	{
		if (Var0.f_4 == iParam1)
		{
			return 1;
		}
		iVar7++;
	}
	return 0;
}

float func_349(float fParam0)
{
	return (fParam0 * 57.29578f);
}

int func_350(var uParam0)
{
	if (!unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		return 0;
	}
	unk_0x52B0DD24AA97ABDB(*uParam0, 1);
	return 1;
}

int func_351(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		unk_0x2728CF7242F08BD5(uParam0);
		*uParam0 = 0;
	}
	*uParam0 = unk_0xABEEDBEF2BBDF5B3(iParam1, Param2, fParam5, 1, 1, 0);
	if (!unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		return 0;
	}
	return 1;
}

int func_352(var uParam0)
{
	if (!unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		return 0;
	}
	unk_0xCFFDA1550DF82B52(*uParam0, 0);
	unk_0x260A70C42FAA4EDC(*uParam0, "RAMP:SCENE PED");
	unk_0xD14067404D35AAE7(*uParam0, 0);
	unk_0xC5B2830898581862(*uParam0, 1);
	return 1;
}

int func_353(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		unk_0xE9C250FA35A936C8(uParam0);
		*uParam0 = 0;
	}
	*uParam0 = unk_0x69FDD9508259E5B5(26, iParam1, Param2, fParam5, 1, 1);
	if (!unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		func_354(*uParam0, Param2);
		unk_0x692C3FDAD7DB53CC(*uParam0, fParam5);
	}
	unk_0xCFFDA1550DF82B52(*uParam0, 0);
	unk_0x260A70C42FAA4EDC(*uParam0, "RAMP:SCENE PED");
	unk_0xD14067404D35AAE7(*uParam0, 0);
	unk_0xC5B2830898581862(*uParam0, 1);
	return 1;
}

Vector3 func_354(var uParam0, struct<3> Param1)
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (unk_0xDE209AFE421606C6(Param1, &uVar0, 0, 0))
	{
		Param1.f_2 = uVar0;
	}
	if (func_230(uParam0))
	{
		unk_0xC2E3C377D893C17A(uParam0, Param1, 1, 0, 0, 1);
	}
	return Param1;
}

int func_355()
{
	return unk_0x54ECDA2DAB9CFB10(-177.0628f, -1679.715f, 33.16263f, -157.0628f, -1659.715f, 37.16263f, 0, 1, 1, 1);
}

void func_356(var uParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = joaat("ig_ramp_gang");
	sVar1 = "misstrvram_4";
	unk_0x852EC2A7DE66202D(iVar0);
	unk_0x28818732C8F0F80E(sVar1);
	unk_0xEF8BC9C45E60F0D1(joaat("weapon_assaultrifle"), 31, 0);
	while (!unk_0x0CBB7C273DED26E7(iVar0) || !unk_0x2BBF749E555360DC(sVar1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_353(&(uParam0->f_28[0]), iVar0, -161.37f, -1669.63f, 33.1f, func_349(1.03f), 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_352(&(uParam0->f_28[0]));
	unk_0x260A70C42FAA4EDC(uParam0->f_28[0], "RP0_NOGUN");
	unk_0x87EDBB907BE25521(uParam0->f_28[0]);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 0, 1, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 1, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 2, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 3, 0, 1, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 4, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 5, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 6, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 7, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 8, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 9, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 10, 0, 1, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 11, 0, 0, 0);
	unk_0x3EE48ADC8C7F5CC4(uParam0->f_28[0], sVar1, "thugs_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_353(&(uParam0->f_28[1]), iVar0, -161.93f, -1670.39f, 33.14f, func_349(0.2f), 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_352(&(uParam0->f_28[1]));
	unk_0x260A70C42FAA4EDC(uParam0->f_28[1], "RP1_GUN");
	unk_0x87EDBB907BE25521(uParam0->f_28[1]);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 0, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 1, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 2, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 3, 1, 1, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 4, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 5, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 6, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 7, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 8, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 9, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 10, 1, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 11, 0, 0, 0);
	unk_0xCBDC2B59922F92C3(uParam0->f_28[1], joaat("weapon_assaultrifle"), 100, 1, 1);
	unk_0x3EE48ADC8C7F5CC4(uParam0->f_28[1], sVar1, "thugs_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	StringCopy(&(uParam0->f_9), "TRVRAM_4", 24);
	uParam0->f_27 = 0;
	unk_0xE0A291F406691F03(iVar0);
}

void func_357(var uParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = joaat("ig_ramp_mex");
	sVar1 = "misstrvram_3";
	unk_0x852EC2A7DE66202D(iVar0);
	unk_0x28818732C8F0F80E(sVar1);
	unk_0xEF8BC9C45E60F0D1(joaat("weapon_microsmg"), 31, 10);
	while ((!unk_0x0CBB7C273DED26E7(iVar0) || !unk_0x4ACA2D82C1D0DB4F(joaat("weapon_microsmg"))) || !unk_0x2BBF749E555360DC(sVar1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_353(&(uParam0->f_28[0]), iVar0, 464.6125f, -1848.767f, 27.816f, 177.39f, 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_352(&(uParam0->f_28[0]));
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 0, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 1, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 2, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 3, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 4, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 5, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 6, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 7, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 8, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 9, 1, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 10, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 11, 0, 0, 0);
	unk_0x260A70C42FAA4EDC(uParam0->f_28[0], "RAMP:PED 0");
	unk_0x3EE48ADC8C7F5CC4(uParam0->f_28[0], sVar1, "mexicans_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_353(&(uParam0->f_28[1]), iVar0, 465.782f, -1849.073f, 27.817f, 129.92f, 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_352(&(uParam0->f_28[1]));
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 0, 1, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 1, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 2, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 3, 1, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 4, 0, 1, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 5, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 6, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 7, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 8, 1, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 9, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 10, 0, 0, 0);
	unk_0xFECAE061D8C80757(uParam0->f_28[1], 11, 0, 0, 0);
	unk_0x260A70C42FAA4EDC(uParam0->f_28[1], "RAMP:PED 1");
	unk_0x3EE48ADC8C7F5CC4(uParam0->f_28[1], sVar1, "mexicans_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	if (func_281(&(uParam0->f_41[0]), joaat("weapon_microsmg"), 467f, -1855.4f, 32f, func_349(-0.85f)))
	{
		unk_0xDAE94EB7AAFB39B9(uParam0->f_41[0], joaat("component_at_scope_macro"));
		unk_0xDAE94EB7AAFB39B9(uParam0->f_41[0], joaat("component_microsmg_clip_02"));
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_3", 24);
	uParam0->f_27 = 0;
	unk_0xE0A291F406691F03(iVar0);
}

int func_358()
{
	return func_359(1182.137f, -400.4787f, 66.92414f, 8f);
}

var func_359(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return unk_0x54ECDA2DAB9CFB10(Param0 - Var0, Param0 + Var0, 0, 1, 1, 1);
}

void func_360(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var8;
	
	iVar0 = joaat("ig_ramp_hipster");
	iVar1 = joaat("prop_chair_01a");
	iVar2 = joaat("prop_npc_phone");
	sVar3 = "misstrvram_2";
	iVar4 = 60309;
	Var5 = { 0f, 0f, 0f };
	Var8 = { 0f, 0f, 0f };
	unk_0xEF8BC9C45E60F0D1(joaat("weapon_sawnoffshotgun"), 31, 0);
	unk_0x852EC2A7DE66202D(iVar0);
	unk_0x852EC2A7DE66202D(iVar1);
	unk_0x852EC2A7DE66202D(iVar2);
	unk_0x28818732C8F0F80E(sVar3);
	func_364(&uLocal_112);
	while ((((!unk_0x0CBB7C273DED26E7(iVar0) || !unk_0x0CBB7C273DED26E7(iVar1)) || !unk_0x0CBB7C273DED26E7(iVar2)) || !unk_0x2BBF749E555360DC(sVar3)) || !func_363(&uLocal_112))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x2117C3CCFF2D957A(1180.021f, -401.7374f, 66.8767f, 0.75f, 0);
	uParam0->f_41[2] = unk_0x0744FA5607ECEB91(1179.778f, -401.7374f, 66.8697f, 1f, joaat("prop_chair_01a"), 1, 0, 1);
	if (unk_0x7DE17ACDD8BA2642(uParam0->f_41[2]))
	{
		unk_0xC2E3C377D893C17A(uParam0->f_41[2], 1180.05f, -401.83f, 66.88f, 1, 0, 0, 1);
		unk_0x464B5B0F22497FC5(uParam0->f_41[2], 0f, 0f, 50f, 2, 1);
		unk_0x2718E9CC165A99F6(uParam0->f_41[2], 1);
	}
	uParam0->f_41[3] = unk_0x0744FA5607ECEB91(1181.243f, -402.5309f, 67.2564f, 1f, joaat("prop_table_01"), 1, 0, 1);
	if (unk_0x7DE17ACDD8BA2642(uParam0->f_41[3]))
	{
		unk_0x2718E9CC165A99F6(uParam0->f_41[3], 1);
	}
	while (!func_353(&(uParam0->f_28[0]), iVar0, 1181.547f, -400.0954f, 67.5757f, -124.2928f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_352(&(uParam0->f_28[0]));
	unk_0x2718E9CC165A99F6(uParam0->f_28[0], 1);
	unk_0x87EDBB907BE25521(uParam0->f_28[0]);
	unk_0xFECAE061D8C80757(uParam0->f_28[0], 2, 0, 0, 0);
	func_362(&(uParam0->f_41[1]), iVar2, 1181.547f, -400.0954f, 65.5757f, 0f);
	unk_0xBD02C9D4D7076ECC(uParam0->f_41[1], uParam0->f_28[0], unk_0xCF99BEF1317B66DA(uParam0->f_28[0], iVar4), Var8, Var5, 1, 0, 0, 0, 2, 1, 0);
	func_361(&uLocal_112, 0, 3);
	if (!unk_0x411B750250543BD0(uParam0->f_59))
	{
		uParam0->f_59 = unk_0x191673E3F99212B2(Local_106, Local_109, 2);
		if (func_133(uParam0->f_28[0]))
		{
			unk_0x468D976993BF7FE1(uParam0->f_28[0], uParam0->f_59, sVar3, "hipster_idle", 8f, -8f, 513, 0, 1148846080, 0);
		}
		unk_0x5F243F8265BB664F(uParam0->f_59, 1);
	}
	if (!func_281(&(uParam0->f_41[0]), joaat("weapon_sawnoffshotgun"), 1162.2f, -395.4f, 72.9f, func_349(-0.71f)))
	{
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_2_CONCAT", 24);
	uParam0->f_27 = 0;
	unk_0xE0A291F406691F03(iVar0);
	unk_0xE0A291F406691F03(iVar1);
	unk_0xE0A291F406691F03(iVar2);
}

void func_361(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	if (unk_0x5FAF55B1F052A2E6(*uParam0))
	{
		if (bParam1)
		{
			unk_0xA1F7599E6027769E(&uVar0);
		}
		else
		{
			if (!unk_0xD0D0D5AD7BA7BF17("npcphone"))
			{
				unk_0xDCE8F0B2F7A57CC3("npcphone", 0);
				unk_0x9D6C4434640FAB90(joaat("prop_npc_phone"));
			}
			uVar0 = unk_0xFEAECD5283AE299E("npcphone");
		}
		unk_0x70546D13E82214E2(uVar0);
		unk_0x9FD96C5DE6EDFC15(*uParam0, "DISPLAY_VIEW");
		unk_0xC6A3EF6C4A3412C1(iParam2);
		unk_0xAE3413B0654A0035();
		unk_0x20C68F87D0FDD976(*uParam0, Global_20303, Global_20304, Global_20305, Global_20306, 255, 255, 255, 255, 0);
	}
}

void func_362(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_159(uParam0);
	*uParam0 = unk_0xF19D6C0E8B56BE23(iParam1, Param2, 1, 1, 0);
	unk_0x692C3FDAD7DB53CC(*uParam0, fParam5);
}

int func_363(var uParam0)
{
	if (unk_0x5FAF55B1F052A2E6(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_364(var uParam0)
{
	*uParam0 = unk_0x2B4645565204EA06(func_365());
}

char* func_365()
{
	return "CELLPHONE_CUTSCENE";
}

int func_366()
{
	return func_359(911.5349f, 3642.111f, 31.64738f, 8f);
}

void func_367(var uParam0)
{
	struct<3> Var0;
	char* sVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11;
	int iVar12;
	int iVar13;
	
	sVar3 = "misstrvram_1";
	iVar4 = 28422;
	Var5 = { 0f, 0f, 0f };
	Var8 = { 0f, 0f, -0.1f };
	iVar11 = joaat("ig_ramp_hic");
	iVar12 = joaat("prop_table_03b_chr");
	iVar13 = joaat("prop_beer_bottle");
	unk_0x852EC2A7DE66202D(iVar11);
	unk_0x852EC2A7DE66202D(iVar12);
	unk_0x852EC2A7DE66202D(iVar13);
	unk_0x28818732C8F0F80E(sVar3);
	unk_0xEF8BC9C45E60F0D1(joaat("weapon_assaultrifle"), 31, 0);
	while ((((!unk_0x0CBB7C273DED26E7(iVar11) || !unk_0x0CBB7C273DED26E7(iVar12)) || !unk_0x0CBB7C273DED26E7(iVar13)) || !unk_0x2BBF749E555360DC(sVar3)) || !unk_0x4ACA2D82C1D0DB4F(joaat("weapon_assaultrifle")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_353(&(uParam0->f_28[0]), iVar11, 907.998f, 3643.826f, 32.29243f, -173.0453f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_133(uParam0->f_28[0]))
	{
		unk_0xFECAE061D8C80757(uParam0->f_28[0], 0, 0, 0, 0);
		unk_0xFECAE061D8C80757(uParam0->f_28[0], 1, 0, 0, 0);
		unk_0xFECAE061D8C80757(uParam0->f_28[0], 2, 0, 0, 0);
		unk_0xFECAE061D8C80757(uParam0->f_28[0], 3, 0, 0, 0);
		unk_0xFECAE061D8C80757(uParam0->f_28[0], 4, 0, 0, 0);
		unk_0xFECAE061D8C80757(uParam0->f_28[0], 5, 0, 0, 0);
		unk_0xFECAE061D8C80757(uParam0->f_28[0], 6, 0, 0, 0);
		unk_0xFECAE061D8C80757(uParam0->f_28[0], 7, 0, 0, 0);
		unk_0xFECAE061D8C80757(uParam0->f_28[0], 8, 0, 0, 0);
		unk_0xFECAE061D8C80757(uParam0->f_28[0], 9, 0, 0, 0);
		unk_0xFECAE061D8C80757(uParam0->f_28[0], 10, 0, 0, 0);
		unk_0xFECAE061D8C80757(uParam0->f_28[0], 11, 0, 0, 0);
		Var0 = { unk_0x985D9D5ED4D5145A(uParam0->f_28[0], iVar4, 0f, 0f, 0f) };
		unk_0x260A70C42FAA4EDC(uParam0->f_28[0], "RAMP:PED 0");
		func_362(&(uParam0->f_41[1]), iVar13, Var0, 0f);
		unk_0xBD02C9D4D7076ECC(uParam0->f_41[1], uParam0->f_28[0], unk_0xCF99BEF1317B66DA(uParam0->f_28[0], iVar4), Var8, Var5, 1, 1, 0, 0, 2, 1, 0);
		unk_0x911DD9EF93C15FEC(uParam0->f_41[1], 1);
		unk_0x2718E9CC165A99F6(uParam0->f_28[0], 1);
		unk_0x598D91BBD045C1F3(uParam0->f_28[0], 208, 1);
		unk_0x8386356641D0DED1(uParam0->f_28[0], joaat("player"));
	}
	while (!func_353(&(uParam0->f_28[1]), iVar11, 909.3126f, 3643.507f, 32.2952f, 153.0127f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_133(uParam0->f_28[1]))
	{
		unk_0xFECAE061D8C80757(uParam0->f_28[1], 0, 1, 0, 0);
		unk_0xFECAE061D8C80757(uParam0->f_28[1], 1, 0, 0, 0);
		unk_0xFECAE061D8C80757(uParam0->f_28[1], 2, 1, 0, 0);
		unk_0xFECAE061D8C80757(uParam0->f_28[1], 3, 1, 0, 0);
		unk_0xFECAE061D8C80757(uParam0->f_28[1], 4, 1, 0, 0);
		unk_0xFECAE061D8C80757(uParam0->f_28[1], 5, 0, 0, 0);
		unk_0xFECAE061D8C80757(uParam0->f_28[1], 6, 0, 0, 0);
		unk_0xFECAE061D8C80757(uParam0->f_28[1], 7, 0, 0, 0);
		unk_0xFECAE061D8C80757(uParam0->f_28[1], 8, 0, 0, 0);
		unk_0xFECAE061D8C80757(uParam0->f_28[1], 9, 0, 0, 0);
		unk_0xFECAE061D8C80757(uParam0->f_28[1], 10, 0, 0, 0);
		unk_0xFECAE061D8C80757(uParam0->f_28[1], 11, 0, 0, 0);
		Var0 = { unk_0x985D9D5ED4D5145A(uParam0->f_28[1], iVar4, 0f, 0f, 0f) };
		unk_0x260A70C42FAA4EDC(uParam0->f_28[1], "RAMP:PED 1");
		func_362(&(uParam0->f_41[2]), iVar13, Var0, 0f);
		unk_0xBD02C9D4D7076ECC(uParam0->f_41[2], uParam0->f_28[1], unk_0xCF99BEF1317B66DA(uParam0->f_28[1], iVar4), Var8, Var5, 1, 1, 0, 0, 2, 1, 0);
		unk_0x911DD9EF93C15FEC(uParam0->f_41[2], 1);
		unk_0x2718E9CC165A99F6(uParam0->f_28[1], 1);
		unk_0x598D91BBD045C1F3(uParam0->f_28[1], 208, 1);
		unk_0x8386356641D0DED1(uParam0->f_28[1], joaat("player"));
	}
	uParam0->f_41[3] = unk_0x0744FA5607ECEB91(909.3884f, 3643.652f, 31.699f, 1f, joaat("prop_table_03b_chr"), 1, 0, 1);
	if (unk_0x7DE17ACDD8BA2642(uParam0->f_41[3]))
	{
		unk_0x2718E9CC165A99F6(uParam0->f_41[3], 1);
	}
	uParam0->f_41[4] = unk_0x0744FA5607ECEB91(908.0437f, 3643.682f, 31.7073f, 1f, joaat("prop_table_03b_chr"), 1, 0, 1);
	if (unk_0x7DE17ACDD8BA2642(uParam0->f_41[4]))
	{
		unk_0x2718E9CC165A99F6(uParam0->f_41[4], 1);
	}
	if (!unk_0x411B750250543BD0(uParam0->f_59))
	{
		uParam0->f_59 = unk_0x191673E3F99212B2(910.13f, 3643.74f, 31.69f, 0f, 0f, func_349(-0.26f), 2);
		if (func_133(uParam0->f_28[0]))
		{
			unk_0x468D976993BF7FE1(uParam0->f_28[0], uParam0->f_59, sVar3, "redneck_idle_a", 8f, -8f, 513, 0, 1148846080, 0);
		}
		if (func_133(uParam0->f_28[1]))
		{
			unk_0x468D976993BF7FE1(uParam0->f_28[1], uParam0->f_59, sVar3, "redneck_idle_b", 8f, -8f, 513, 0, 1148846080, 0);
		}
		unk_0x5F243F8265BB664F(uParam0->f_59, 1);
	}
	if (!func_281(&(uParam0->f_41[0]), joaat("weapon_assaultrifle"), 907.52f, 3644.32f, 31.86f, -164.89f))
	{
	}
	unk_0xE0A291F406691F03(iVar11);
	unk_0xE0A291F406691F03(iVar12);
	StringCopy(&(uParam0->f_9), "TRVRAM_1", 24);
	uParam0->f_27 = 0;
}

int func_368(int iParam0)
{
	if (!unk_0xCBE2EC2868A6C438())
	{
		return 1;
	}
	if (unk_0xB53553DC4AAC7D8A())
	{
		return 1;
	}
	if (func_185(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_369(int iParam0)
{
	struct<27> Var0;
	bool bVar32;
	
	func_116(iParam0, &Var0);
	bVar32 = func_232();
	if (bVar32 == 145)
	{
		return 1;
	}
	else if ((bVar32 != 1 && bVar32 != 0) && bVar32 != 2)
	{
		return 1;
	}
	if (!BitTest(Var0.f_26, bVar32))
	{
		return 1;
	}
	return 0;
}

int func_370(int iParam0, var uParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	
	if (*iParam0 == 1)
	{
		if (func_371((*iParam0)[0], Param2, fParam5, uParam1))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_371((*iParam0)[iVar0], Param2, fParam5, uParam1))
			{
				iVar0 = *iParam0;
				return 1;
			}
			iVar0++;
		}
	}
	func_389("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return 0;
}

int func_371(int iParam0, struct<3> Param1, float fParam4, var uParam5)
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 0;
	func_116(iParam0, &Var1);
	if (func_372(Var1.f_6, Param1, fParam4, 0))
	{
		if (BitTest(Global_113648.f_18576[iParam0 /*6*/], 0))
		{
			if (!BitTest(Global_113648.f_18576[iParam0 /*6*/], 3))
			{
				iVar0 = 1;
			}
		}
		if (func_195(iParam0))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 1)
	{
		*uParam5 = iParam0;
		StringCopy(&(uParam5->f_1), Var1.f_0, 32);
		return 1;
	}
	return 0;
}

int func_372(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x2655A8EC638E4FD1((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x2655A8EC638E4FD1((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x2655A8EC638E4FD1((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x2655A8EC638E4FD1((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x2655A8EC638E4FD1((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_373(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113648.f_9087.f_99.f_58[iParam0];
}

void func_374(var* uParam0, bool bParam1)
{
	func_277(uParam0);
	if (bParam1)
	{
		func_389(" SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_377(uParam0, 0, 0, 0);
	}
	func_376(&(uParam0->f_48));
	if (iLocal_287 != -1)
	{
		func_389("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_274(&iLocal_287);
	}
	if (iLocal_299 != 0)
	{
		if (*uParam0 == 55 || *uParam0 == 53)
		{
			unk_0x17D46728E18012D3(iLocal_299, 0);
		}
	}
	if (unk_0x3FACE5B6ACB3A4AA())
	{
		unk_0x0D6E6120F1782BCF(0);
	}
	if (iLocal_291)
	{
		if (func_2("RAMP_HELP_TRIG"))
		{
			unk_0xCD3C8E1022864F65(1);
			iLocal_291 = 0;
		}
	}
	func_375();
	func_389("SCRIPT TERMINATED");
	Global_97953 = 0;
	unk_0x675D9C12C73D3DE7();
}

void func_375()
{
	func_389("Running end routines.");
	Global_113366 = (Global_113366 - 1);
}

int func_376(var uParam0)
{
	if (func_157(uParam0))
	{
		if (unk_0x2BBF749E555360DC(*uParam0))
		{
			unk_0x0B34FA69ECCE3927(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}
	return 0;
}

void func_377(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_385(uParam0, iParam1);
	func_381(uParam0, bParam2);
	func_378(uParam0, bParam3);
}

void func_378(var uParam0, bool bParam1)
{
	func_379(&(uParam0->f_41), bParam1);
}

void func_379(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_159(uParam0[iVar0]);
		}
		else
		{
			func_380(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_380(var uParam0, bool bParam1)
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (unk_0xEFF022A75A217E08(*uParam0))
		{
			unk_0xA81AA70A4D25E140(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xC621CC7313639986(uParam0);
		}
		else
		{
			unk_0x6CB555E9F2BCE87A(*uParam0);
		}
	}
}

void func_381(var uParam0, bool bParam1)
{
	func_382(&(uParam0->f_35), bParam1);
}

void func_382(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_384(uParam0[iVar0]);
		}
		else
		{
			func_383(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_383(var uParam0)
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		unk_0x055111B11E6624FD(*uParam0, 0);
		if (unk_0x1AFE963DA61006ED(*uParam0) && unk_0xAE770DDB34967EC3(*uParam0, 1))
		{
			unk_0x0E4B6CF706BE8AA4(uParam0);
		}
	}
}

void func_384(var uParam0)
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (!unk_0x1AFE963DA61006ED(*uParam0))
		{
			unk_0x85BAE84748AD1A23(*uParam0, 1, 0);
		}
		if (func_163(*uParam0))
		{
			if (unk_0x1AFE963DA61006ED(*uParam0) && unk_0xAE770DDB34967EC3(*uParam0, 1))
			{
				if (func_133(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), *uParam0, 0))
					{
						unk_0x0E4B6CF706BE8AA4(uParam0);
						return;
					}
				}
				unk_0x2728CF7242F08BD5(uParam0);
			}
		}
		else
		{
			if (func_133(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), *uParam0, 0))
				{
					unk_0x0E4B6CF706BE8AA4(uParam0);
					return;
				}
			}
			unk_0x2728CF7242F08BD5(uParam0);
		}
	}
}

void func_385(var uParam0, int iParam1)
{
	func_386(&(uParam0->f_28), iParam1);
}

void func_386(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_388(uParam0[iVar0]);
		}
		else
		{
			func_387(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_387(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (!unk_0x66599E73DBA5A850(*uParam0))
		{
			unk_0x351E6B9FD37CFF33(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xA0E06A3361300416(*uParam0);
			}
			unk_0x71A535529C1CA5DF(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xC5B2830898581862(*uParam0, 0);
			}
		}
		unk_0x1EEF71E3CDD868D3(uParam0);
	}
}

void func_388(var uParam0)
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (!unk_0x055111B11E6624FD(*uParam0, 0))
		{
			unk_0x351E6B9FD37CFF33(*uParam0, 0, 1);
		}
		if (!unk_0x1AFE963DA61006ED(*uParam0))
		{
			unk_0x85BAE84748AD1A23(*uParam0, 1, 0);
		}
		unk_0xE9C250FA35A936C8(uParam0);
	}
}

void func_389(char* sParam0)
{
	if (!unk_0x2AC37494BBF1DB16(sParam0))
	{
	}
}

void func_390(var uParam0)
{
	*uParam0 = -1;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_391()
{
	func_389("Running start routines.");
	Global_113366++;
}

