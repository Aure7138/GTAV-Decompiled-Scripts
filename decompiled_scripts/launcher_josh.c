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
	int iLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97 = 16;
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
	int iLocal_262 = 0;
	bool bLocal_263 = 0;
	var uLocal_264 = 0;
	int iLocal_265 = 0;
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
	int iVar64[4];
	
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
	uLocal_89 = unk_0x7B826893B2E27385();
	uLocal_90 = unk_0x19F6152D9806BBF8();
	uLocal_92 = func_312(58);
	iLocal_93 = joaat("felon2");
	iLocal_95 = -1;
	unk_0x3E397AA8C35A7536(1);
	func_311();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { 0f, 0f, 0f };
	func_310(&Var0);
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	iVar64[0] = 27;
	iVar64[1] = 28;
	iVar64[2] = 29;
	iVar64[3] = 30;
	if (unk_0x4B34601C5C56F3EE(83))
	{
		func_309("Force cleanup [TERMINATING]");
		if (Var0.f_0 != -1)
		{
			if (Global_112473[Var0.f_0 /*10*/].f_9 != -1)
			{
				func_309("Relinquishing candidate id...");
				func_308(&(Global_112473[Var0.f_0 /*10*/].f_9));
			}
		}
		func_291(&Var0, 1);
	}
	if (!func_288(&iVar64, &Var0, Var61, 1f))
	{
		func_287();
		func_309("SCRIPT TERMINATED");
		unk_0xAFBDF6A5E54114C1();
	}
	if (!func_279(Var0.f_0))
	{
		func_287();
		func_309("SCRIPT TERMINATED");
		unk_0xAFBDF6A5E54114C1();
	}
	if (func_278(Var0.f_0))
	{
		func_287();
		func_309("SCRIPT TERMINATED");
		unk_0xAFBDF6A5E54114C1();
	}
	while (!func_258(&Var0))
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0xC92F9F18E020B461())
		{
			func_309("Player out of range [TERMINATING]");
			func_291(&Var0, 1);
		}
	}
	unk_0x7A997A0A971D305F(Var61, Var0.f_15, 1, 0, 0, 0);
	if (Var0.f_0 == 27)
	{
		func_257(&uLocal_97, 5, Var0.f_28[0], "JOSH", 0, 1);
	}
	else if (Var0.f_0 == 30)
	{
		func_257(&uLocal_97, 4, Var0.f_28[0], "JOSH", 0, 1);
		func_257(&uLocal_97, 3, Var0.f_28[1], "JOSHCOP", 0, 1);
		iLocal_262 = unk_0x320D1840B6DAA1CC();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!func_220(&Var0, 1))
		{
			if (Var0.f_0 == 30)
			{
				if (func_219(unk_0xE2D3D51028F0428A(), -1102.724f, 290.1463f, 63.23002f, 1) < 200f)
				{
					unk_0x007D28B99DF625B1(unk_0x9E2D6C50374FCFA9(), 1, 0);
					func_218(&Var0);
					func_309("Making Josh cops attack");
				}
			}
			func_291(&Var0, 1);
		}
		func_217(Var0.f_0);
		func_210(&iLocal_95, &(Var0.f_9), Var61);
		if (Var0.f_0 == 27)
		{
			func_208(&Var0, Var61, "JOSH1AU", "JOSH1_AMB1", 5, "JOSH", 5000, 14f);
		}
		else if (Var0.f_0 == 28)
		{
			func_208(&Var0, Var61, "JOSH2AU", "JOSH2_AMB", 5, "JOSH", 5000, 1101004800);
		}
		else if (Var0.f_0 == 29)
		{
			func_208(&Var0, Var61, "JOSH3AU", "JOSH3_AMB", 3, "JOSH", 5000, 1101004800);
		}
		else if (Var0.f_0 == 30)
		{
			if (iLocal_265 == 0)
			{
				if (unk_0x2566F947AAB7B2A7())
				{
					if (func_207(Var0.f_28[1]))
					{
						func_309("Josh 4: Trying to set Cop 1 component variation");
						unk_0x3817498C7B1515DD("Cop_standing_idle", Var0.f_28[1], 0);
					}
					if (func_207(Var0.f_28[2]))
					{
						func_309("Josh 4: Trying to set Cop 2 component variation");
						unk_0x3817498C7B1515DD("Cop_with_notepad", Var0.f_28[2], 0);
					}
					iLocal_265 = 1;
				}
			}
			func_194();
		}
		if (((func_179(&Var0, 0) || func_178(&Var0)) || func_176(&Var0)) || func_174(&Var0))
		{
			if (func_173(Var0.f_0))
			{
				func_170(Var0.f_0, &uLocal_264);
			}
			if (!func_2(&Var0))
			{
				func_291(&Var0, 1);
			}
			if (func_1(&Var0))
			{
				func_291(&Var0, 0);
			}
		}
	}
}

int func_1(int iParam0)
{
	while (!Global_112473[*iParam0 /*10*/])
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	return 1;
}

int func_2(int iParam0)
{
	struct<4> Var0;
	char* sVar32;
	
	if (!func_169())
	{
		while (!func_160(*iParam0))
		{
			if (func_159(*iParam0))
			{
				func_148();
			}
			if (!func_220(iParam0, *iParam0 != 2))
			{
				func_309("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (func_147())
	{
		func_145();
	}
	if (!func_115(iParam0))
	{
		func_309("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	func_112(*iParam0, &Var0);
	MemCopy(&sVar32, {func_111(*iParam0)}, 4);
	func_109(&sVar32, Var0.f_3, 0);
	func_106(*iParam0);
	if (!func_169())
	{
		if (iParam0->f_16 == 2)
		{
			func_22(&(iParam0->f_1), 0);
		}
		else
		{
			func_22(&(iParam0->f_1), 1);
		}
	}
	func_3(*iParam0, Var0.f_0);
	return 1;
}

void func_3(int iParam0, char* sParam1)
{
	func_21(sParam1);
	unk_0xB0550BC91B0159D6(&(Global_113386.f_18574[iParam0 /*6*/]), 5);
	if (unk_0xB4C854DD86E40FDA(joaat("mission_stat_watcher")) > 0)
	{
		while (unk_0xB4C854DD86E40FDA(joaat("mission_stat_watcher")) > 0)
		{
			func_19();
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0xB4C854DD86E40FDA(joaat("mission_stat_watcher")) < 1)
	{
		Global_63155 = 0;
		unk_0xAF76A37C80EFD1D8("mission_stat_watcher");
		while (!unk_0xF79F112CE5999680("mission_stat_watcher"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("mission_stat_watcher", 1828);
		unk_0xD195D79715508EFA("mission_stat_watcher");
	}
	while (!BitTest(Global_113386.f_18574[iParam0 /*6*/], 5))
	{
		if (unk_0xB4C854DD86E40FDA(joaat("mission_stat_watcher")) > 0)
		{
			unk_0xCED9E32812D6C7C7(&(Global_113386.f_18574[iParam0 /*6*/]), 5);
		}
	}
	func_4(iParam0);
}

void func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_63152 == 1)
	{
		func_18();
		Global_63152 = 0;
		if (Global_63147)
		{
			return;
		}
	}
	if (Global_3)
	{
		Global_63155 = 1;
		func_10();
		return;
	}
	MemCopy(&Global_63169, {func_9(iParam0)}, 4);
	Global_63157 = 0;
	Global_63156 = 0;
	switch (iParam0)
	{
		case 1:
		case 9:
			Global_63144 = 1;
			Global_63147 = 1;
			Global_63150 = 1;
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
			Global_63155 = 1;
			Global_63156 = 1;
			func_10();
			func_19();
			return;
			break;
	}
	iVar0 = Global_75399;
	Global_75399 = 1;
	iVar1 = Global_75400;
	Global_75400 = iParam0;
	if (!Global_63144)
	{
		if ((Global_75400 != iVar1 || Global_75249 == 0) || iVar0 != Global_75399)
		{
			Global_32212 = 0;
			func_10();
			func_6(iParam0);
		}
		else
		{
			Global_63147 = 1;
		}
	}
	Global_63182 = unk_0x320D1840B6DAA1CC();
	func_5();
	Global_63154 = 0;
}

void func_5()
{
	int iVar0;
	
	if (!Global_63151)
	{
		return;
	}
	if (Global_75249 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		switch (Global_63379[Global_75250[iVar0 /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_75250[iVar0 /*9*/].f_3 = 1;
				break;
			
			case 4:
				if (Global_63162)
				{
					Global_75250[iVar0 /*9*/].f_3 = 1;
				}
				break;
			
			case 6:
				if (Global_63379[Global_75250[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_75250[iVar0 /*9*/].f_1 != 0)
					{
						Global_75250[iVar0 /*9*/].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_63151 = 0;
}

void func_6(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			func_7(741);
			func_7(742);
			return;
		
		case 3:
			func_7(743);
			func_7(744);
			return;
		
		case 5:
			func_7(745);
			func_7(746);
			return;
		
		case 6:
			func_7(747);
			func_7(748);
			return;
		
		case 8:
			func_7(749);
			return;
		
		case 12:
			func_7(750);
			return;
		
		case 14:
			func_7(751);
			func_7(752);
			return;
		
		case 16:
			func_7(753);
			func_7(754);
			return;
		
		case 17:
			func_7(755);
			func_7(756);
			func_7(757);
			return;
		
		case 18:
			func_7(758);
			func_7(759);
			return;
		
		case 19:
			func_7(760);
			func_7(761);
			return;
		
		case 20:
			func_7(762);
			return;
		
		case 21:
			func_7(763);
			return;
		
		case 22:
			func_7(764);
			func_7(765);
			return;
		
		case 23:
			func_7(766);
			return;
		
		case 25:
			func_7(767);
			func_7(768);
			func_7(769);
			return;
		
		case 26:
			func_7(770);
			func_7(771);
			return;
		
		case 28:
			func_7(772);
			func_7(773);
			return;
		
		case 29:
			func_7(774);
			func_7(775);
			return;
		
		case 30:
			func_7(776);
			func_7(777);
			return;
		
		case 32:
			func_7(778);
			func_7(779);
			return;
		
		case 33:
			func_7(780);
			func_7(781);
			func_7(782);
			return;
		
		case 34:
			func_7(783);
			func_7(784);
			return;
		
		case 38:
			func_7(785);
			func_7(786);
			return;
		
		case 39:
			func_7(787);
			func_7(788);
			return;
		
		case 40:
			func_7(789);
			return;
		
		case 41:
			func_7(790);
			func_7(791);
			func_7(792);
			return;
		
		case 42:
			func_7(793);
			func_7(794);
			func_7(795);
			return;
		
		case 43:
			func_7(796);
			func_7(797);
			return;
		
		case 46:
			func_7(798);
			func_7(799);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 47:
			func_7(800);
			func_7(801);
			return;
		
		case 49:
			func_7(802);
			func_7(803);
			return;
		
		case 50:
			func_7(804);
			func_7(805);
			return;
		
		case 51:
			func_7(806);
			return;
		
		case 57:
			func_7(807);
			func_7(808);
			func_7(809);
			return;
		
		case 58:
			func_7(828);
			func_7(829);
			func_7(830);
			return;
		
		case 59:
			func_7(831);
			func_7(832);
			func_7(833);
			return;
		
		case 60:
			func_7(834);
			func_7(835);
			func_7(836);
			return;
		
		case 61:
			func_7(837);
			func_7(838);
			func_7(839);
			return;
		
		case 62:
			func_7(840);
			func_7(841);
			func_7(842);
			return;
		
		case 24:
			func_7(843);
			func_7(844);
			func_7(845);
			return;
		
		default:
	}
}

void func_7(int iParam0)
{
	Global_63147 = 1;
	Global_63150 = 1;
	if (Global_75249 > 15)
	{
		return;
	}
	func_8(Global_75249);
	Global_75250[Global_75249 /*9*/] = iParam0;
	Global_75249++;
	if (Global_63379[iParam0 /*13*/] == 16)
	{
		Global_75401 = 1;
	}
}

void func_8(int iParam0)
{
	Global_75250[iParam0 /*9*/].f_1 = 0;
	Global_75250[iParam0 /*9*/].f_2 = 0f;
	Global_75250[iParam0 /*9*/].f_3 = 0;
	Global_75250[iParam0 /*9*/].f_4 = 0;
}

struct<2> func_9(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_111(iParam0) };
	if (unk_0xACC32B78196FBC2A(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

void func_10()
{
	if (Global_63154)
	{
		return;
	}
	Global_63163 = 0;
	Global_75249 = 0;
	Global_63165 = 0;
	if (Global_63162)
	{
	}
	Global_63162 = 0;
	func_17(0);
	func_16();
	Global_75401 = 0;
	Global_63153 = 1;
	func_14();
	func_13();
	func_12();
	func_11();
	Global_63144 = 0;
	Global_63174 = 0;
	Global_63182 = -1;
}

void func_11()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_75436[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_75445 = 0;
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_75402[iVar0 /*2*/] = 0;
		Global_75402[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_75435 = 0;
}

void func_13()
{
	Global_63313 = 0;
}

void func_14()
{
	Global_63173 = 0;
	Global_63177 = func_15(joaat("sp0_shots"));
	Global_63176 = func_15(joaat("sp0_hits"));
	Global_63179 = func_15(joaat("sp1_shots"));
	Global_63178 = func_15(joaat("sp1_hits"));
	Global_63181 = func_15(joaat("sp2_shots"));
	Global_63180 = func_15(joaat("sp2_hits"));
}

var func_15(int iParam0)
{
	var uVar0;
	
	unk_0x61481F9FBB1C7EDD(iParam0, &uVar0, -1);
	return uVar0;
}

void func_16()
{
	int iVar0;
	
	Global_63183 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_63184[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_17(int iParam0)
{
	Global_78579 = iParam0;
	Global_78580 = iParam0;
}

void func_18()
{
	int iVar0;
	
	Global_63152 = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		Global_75250[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_63162)
	{
	}
	Global_63162 = 0;
}

void func_19()
{
	if (unk_0xB4C854DD86E40FDA(joaat("mission_stat_watcher")) > 0)
	{
		if (func_20())
		{
			if (Global_63149 && !Global_63148)
			{
				Global_63149 = 0;
				unk_0xCB67CDEE283E73DC("mission_stat_watcher");
			}
		}
		else
		{
			unk_0xCB67CDEE283E73DC("mission_stat_watcher");
		}
	}
}

int func_20()
{
	if (unk_0xB4C854DD86E40FDA(joaat("mission_stat_watcher")) < 1)
	{
		return 0;
	}
	if (!Global_63147)
	{
		return 0;
	}
	return Global_63159;
}

void func_21(char* sParam0)
{
	if (unk_0x3C57C2F07FEE34D2(sParam0, sParam0))
	{
	}
}

void func_22(char[4] cParam0, int iParam1)
{
	unk_0xB0550BC91B0159D6(&(Global_100441.f_20), 17);
	func_23(cParam0, iParam1, 0);
}

void func_23(char[4] cParam0, int iParam1, int iParam2)
{
	if (Global_100441 != 10 && Global_100441 != 9)
	{
		StringCopy(&Global_103942, cParam0, 32);
		func_25(&Global_103950, cParam0, 0, "Start", iParam1, iParam2);
		func_24();
		Global_94619 = 0;
	}
}

void func_24()
{
	int iVar0;
	int iVar1;
	
	Global_106934 = Global_103950;
	Global_106934.f_1 = Global_103950.f_1;
	Global_106934.f_6 = Global_103950.f_6;
	Global_106934.f_7 = Global_103950.f_7;
	Global_106934.f_8 = Global_103950.f_8;
	Global_106934.f_2 = Global_103950.f_2;
	Global_106934.f_3 = Global_103950.f_3;
	Global_106934.f_4 = Global_103950.f_4;
	Global_106934.f_5 = Global_103950.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_106934.f_9[iVar1] = Global_103950.f_9[iVar1];
		Global_106934.f_13[iVar1] = Global_103950.f_13[iVar1];
		Global_106934.f_17[iVar1] = Global_103950.f_17[iVar1];
		Global_106934.f_21[iVar1] = Global_103950.f_21[iVar1];
		Global_106934.f_25[0 /*295*/][iVar1 /*98*/] = { Global_103950.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_106934.f_25[1 /*295*/][iVar1 /*98*/] = { Global_103950.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_106934.f_616[iVar1 /*65*/][iVar0] = Global_103950.f_616[iVar1 /*65*/][iVar0];
			Global_106934.f_616[iVar1 /*65*/].f_13[iVar0] = Global_103950.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_106934.f_616[iVar1 /*65*/].f_26[iVar0] = Global_103950.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_106934.f_616[iVar1 /*65*/].f_59 = Global_103950.f_616[iVar1 /*65*/].f_59;
		Global_106934.f_616[iVar1 /*65*/].f_60 = Global_103950.f_616[iVar1 /*65*/].f_60;
		Global_106934.f_616[iVar1 /*65*/].f_61 = Global_103950.f_616[iVar1 /*65*/].f_61;
		Global_106934.f_616[iVar1 /*65*/].f_62 = Global_103950.f_616[iVar1 /*65*/].f_62;
		Global_106934.f_616[iVar1 /*65*/].f_63 = Global_103950.f_616[iVar1 /*65*/].f_63;
		Global_106934.f_616[iVar1 /*65*/].f_64 = Global_103950.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_106934.f_616[iVar1 /*65*/].f_39[iVar0] = Global_103950.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_106934.f_616[iVar1 /*65*/].f_49[iVar0] = Global_103950.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_106934.f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_103950.f_812[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			Global_106934.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_103950.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_106934.f_2244[iVar1 /*32*/][iVar0] = Global_103950.f_2244[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_106934.f_2244[iVar1 /*32*/].f_5[iVar0] = Global_103950.f_2244[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_106934.f_2244[iVar1 /*32*/].f_16[iVar0] = Global_103950.f_2244[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_106934.f_2341[iVar1] = Global_103950.f_2341[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_106934.f_2838[iVar1 /*15*/][iVar0] = Global_103950.f_2838[iVar1 /*15*/][iVar0];
			Global_106934.f_2838[iVar1 /*15*/].f_5[iVar0] = Global_103950.f_2838[iVar1 /*15*/].f_5[iVar0];
			Global_106934.f_2838[iVar1 /*15*/].f_10[iVar0] = Global_103950.f_2838[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_106934.f_2345[iVar1 /*164*/][iVar0] = Global_103950.f_2345[iVar1 /*164*/][iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_4[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_4[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_8[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_8[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_12[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_12[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_16[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_16[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_20[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_20[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_24[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_24[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_28[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_28[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_32[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_32[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_36[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_36[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_40[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_40[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_44[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_44[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_48[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_48[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_52[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_52[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_56[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_56[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_60[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_60[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_64[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_64[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_68[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_68[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_72[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_72[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_76[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_76[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_80[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_80[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_84[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_84[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_88[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_88[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_92[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_92[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_96[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_96[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_100[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_100[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_104[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_104[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_108[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_108[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_112[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_112[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_116[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_116[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_120[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_120[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_124[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_124[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_128[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_128[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_132[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_132[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_136[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_136[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_140[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_140[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_144[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_144[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_148[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_148[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_152[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_152[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_156[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_156[iVar0];
			Global_106934.f_2345[iVar1 /*164*/].f_160[iVar0] = Global_103950.f_2345[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_106934.f_2884 = { Global_103950.f_2884 };
	Global_106934.f_2884.f_3 = Global_103950.f_2884.f_3;
	Global_106934.f_2890 = { Global_103950.f_2890 };
	Global_106934.f_2890.f_3 = { Global_103950.f_2890.f_3 };
	Global_106934.f_2890.f_6 = Global_103950.f_2890.f_6;
	Global_106934.f_2890.f_8 = Global_106934.f_2890.f_8;
	Global_106934.f_2890.f_7 = Global_103950.f_2890.f_7;
	Global_106934.f_2890.f_9 = Global_103950.f_2890.f_9;
	Global_106934.f_2890.f_11 = Global_103950.f_2890.f_11;
	Global_106934.f_2890.f_10 = Global_103950.f_2890.f_10;
	Global_106934.f_2890.f_12 = Global_103950.f_2890.f_12;
	Global_106934.f_2890.f_12.f_1 = { Global_103950.f_2890.f_12.f_1 };
	Global_106934.f_2890.f_12.f_5 = Global_103950.f_2890.f_12.f_5;
	Global_106934.f_2890.f_12.f_6 = Global_103950.f_2890.f_12.f_6;
	Global_106934.f_2890.f_12.f_7 = Global_103950.f_2890.f_12.f_7;
	Global_106934.f_2890.f_12.f_8 = Global_103950.f_2890.f_12.f_8;
	Global_106934.f_2890.f_12.f_9 = { Global_103950.f_2890.f_12.f_9 };
	Global_106934.f_2890.f_12.f_59 = { Global_103950.f_2890.f_12.f_59 };
	Global_106934.f_2890.f_12.f_62 = Global_103950.f_2890.f_12.f_62;
	Global_106934.f_2890.f_12.f_63 = Global_103950.f_2890.f_12.f_63;
	Global_106934.f_2890.f_12.f_64 = Global_103950.f_2890.f_12.f_64;
	Global_106934.f_2890.f_12.f_65 = Global_103950.f_2890.f_12.f_65;
	Global_106934.f_2890.f_12.f_77 = Global_103950.f_2890.f_12.f_77;
	Global_106934.f_2890.f_12.f_66 = Global_103950.f_2890.f_12.f_66;
	Global_106934.f_2890.f_12.f_67 = Global_103950.f_2890.f_12.f_67;
	Global_106934.f_2890.f_12.f_68 = Global_103950.f_2890.f_12.f_68;
	Global_106934.f_2890.f_12.f_69 = Global_103950.f_2890.f_12.f_69;
	Global_106934.f_2890.f_12.f_71 = Global_103950.f_2890.f_12.f_71;
	Global_106934.f_2890.f_12.f_72 = Global_103950.f_2890.f_12.f_72;
	Global_106934.f_2890.f_12.f_73 = Global_103950.f_2890.f_12.f_73;
	Global_106934.f_2890.f_12.f_74 = Global_103950.f_2890.f_12.f_74;
	Global_106934.f_2890.f_12.f_75 = Global_103950.f_2890.f_12.f_75;
	Global_106934.f_2890.f_12.f_76 = Global_103950.f_2890.f_12.f_76;
	Global_106934.f_2980 = Global_103950.f_2980;
	Global_106934.f_2980.f_1 = Global_103950.f_2980.f_1;
	Global_106934.f_2980.f_2 = Global_103950.f_2980.f_2;
	Global_106934.f_2980.f_3 = Global_103950.f_2980.f_3;
}

void func_25(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_105();
	uParam0->f_1 = func_94();
	unk_0x234904AD6416665B(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		func_66(&(uParam0->f_2884), 0);
		func_65(unk_0xE2D3D51028F0428A());
		func_58(unk_0xE2D3D51028F0428A(), 0);
		unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113386.f_2363.f_539.f_294[iVar1];
		if (iVar1 == func_55())
		{
			func_48(unk_0xE2D3D51028F0428A(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_100166[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_100166[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_100166[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_100166[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_100166[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_100166[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_100166[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_100166[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_100166[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_100166[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113386.f_20564.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_60328[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113386.f_2363[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x61481F9FBB1C7EDD(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
	unk_0x61481F9FBB1C7EDD(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
	unk_0x61481F9FBB1C7EDD(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_27(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_26(&(uParam0->f_2980));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_26(var uParam0)
{
	*uParam0 = Global_96290;
	uParam0->f_1 = Global_96291;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_27(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xE2D3D51028F0428A();
	}
	if (unk_0xE5965CDF24F93A9F(iParam2))
	{
		uParam1->f_5 = func_45(iParam2);
	}
	if (func_42(iParam2, &iVar0, iParam3, iParam5))
	{
		func_28(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xE5965CDF24F93A9F(iVar0))
	{
		if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
		{
			if (unk_0x7010991FDA59D3F2(iVar0, joaat("skylift")) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iVar0, 0))
			{
				func_28(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_28(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0x55A0C756C4A8220C(iParam2, 0))
	{
		func_30(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_29(iParam2))
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

int func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_100441.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_30(var uParam0, int iParam1, int iParam2)
{
	func_37(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_33(iParam1, 145, 0);
	uParam0->f_11 = func_32(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_31(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x6B62510F212526DC(iParam1, 1) };
		uParam0->f_6 = unk_0x82FE2343F8BDFF0B(iParam1);
		uParam0->f_3 = { unk_0xC35FBD95659582C4(iParam1) };
		if (unk_0xD132EDDA78FF4A51(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_78042 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xE5965CDF24F93A9F(Global_77137.f_484[iVar0]))
		{
			if (iParam0 == Global_77137.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0)
{
	int iVar0;
	
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 145;
	}
	if (!unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xE5965CDF24F93A9F(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == iParam0)
			{
				return Global_97782[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_33(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	if (!unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xE5965CDF24F93A9F(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == iParam0)
			{
				if (bParam1 == 145 || bParam1 == Global_97782[iVar0])
				{
					if (iParam2 == 0 || unk_0x15CAA6D7B11F1A7C(iParam0) == func_34(bParam1, iParam2))
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

int func_34(bool bParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_36(bParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_35(bParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

void func_35(bool bParam0, var uParam1, int iParam2)
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
			if (Global_113386.f_9085.f_99.f_58[128] && !Global_113386.f_9085.f_99.f_58[131])
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
					if (Global_113386.f_9085.f_99.f_58[119])
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
			else if (Global_113386.f_9085.f_99.f_58[118])
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

bool func_36(bool bParam0)
{
	return bParam0 < 3;
}

void func_37(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		func_41(uParam1);
		uParam1->f_66 = unk_0x15CAA6D7B11F1A7C(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x80D16DB58890B7BC(iParam0), 16);
		*uParam1 = unk_0xC264F708491D88D7(iParam0);
		unk_0xDCA20DBA52B32EEC(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x356C37F1AA6EA3AA(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x2EE88EB83AF61B18(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xF9D204D7598C0239(iParam0);
		uParam1->f_67 = unk_0x3A5087062A6DBAEF(iParam0);
		uParam1->f_69 = unk_0xD9B8AFE0DD1AD635(iParam0);
		uParam1->f_70 = unk_0xA09765D2ADE13CAE(iParam0);
		unk_0xFB61E9A85A29DDA7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xEDB21C30F1BAF83A(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x6CA60A8EE52231D2(iParam0, 2))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 28);
		}
		if (unk_0x6CA60A8EE52231D2(iParam0, 3))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 29);
		}
		if (unk_0x6CA60A8EE52231D2(iParam0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 30);
		}
		if (unk_0x6CA60A8EE52231D2(iParam0, 1))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_40(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x351E83123EFC0A15(iParam0, 0))
		{
			uParam1->f_68 = unk_0x0C2181485E5FB7C2(iParam0);
		}
		if (unk_0xD6F7D32A98E07F93(uParam1->f_66))
		{
			if (unk_0x333A68465EAB12B7(iParam0))
			{
				switch (unk_0xC56DEF5C90606858(iParam0))
				{
					case 3:
					case 0:
						unk_0xB0550BC91B0159D6(&(uParam1->f_77), 23);
						unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xB0550BC91B0159D6(&(uParam1->f_77), 23);
						unk_0xB0550BC91B0159D6(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xC8E55AEB1E2B047F(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 9);
		}
		if (unk_0x8B56DBBE237EDF1F(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 10);
		}
		if (unk_0xA4429F0196864BB8(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 13);
			unk_0x3D8BB85A33E13D09(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x21DB5182C34B6C0E(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 12);
		}
		func_39(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xC49329A4E58D025B(iParam0, iVar0 + 1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_38(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xA763B3F87DA3C316(iParam0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(uParam1->f_77), 11);
		}
		if (unk_0xF2549FF74D64B720(iParam0, "IgnoredByQuickSave") && unk_0x9A1E55620A6C250D(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(uParam1->f_77), 27);
		}
	}
}

int func_38(int iParam0)
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

int func_39(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x55A0C756C4A8220C(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x03AC3319D1B50189(*iParam0) == 0)
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
			if (unk_0x75B2C853CB0B3047(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x75B2C853CB0B3047(*iParam0, iVar1))
			{
				switch (unk_0xDB29312237512D99(*iParam0))
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
			(*uParam1)[iVar0] = unk_0x0DD0BC46C4CFD6AD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xCCEE7D38FC5D9FD6(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xCCEE7D38FC5D9FD6(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_40(int iParam0)
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

void func_41(var uParam0)
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

int func_42(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (!unk_0xF68107C40359970C(iParam0))
		{
			if (iParam0 == unk_0xE2D3D51028F0428A())
			{
				*uParam1 = unk_0x9993EF7FDBCDB632();
			}
			else
			{
				*uParam1 = unk_0xB3FF0049C1FD38EC(iParam0, 1);
			}
			if (unk_0xE5965CDF24F93A9F(*uParam1))
			{
				if (unk_0x55A0C756C4A8220C(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(*uParam1, 1), unk_0x6B62510F212526DC(iParam0, 1), 1) < 100f)
					{
						if (unk_0x7010991FDA59D3F2(*uParam1, joaat("taxi")))
						{
							if (unk_0xAB793EA186AB8DAA(*uParam1, -1, 0) != iParam0 && unk_0xAB793EA186AB8DAA(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_43(*uParam1, func_105(), 1))
						{
							sVar0 = unk_0x05CBA41180F5D521();
							if (!unk_0x3C57C2F07FEE34D2(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0xD5C6B5E3B93A5EDC(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xF2549FF74D64B720(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x9A1E55620A6C250D(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x7010991FDA59D3F2(*uParam1, joaat("blimp")))
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

int func_43(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xE5965CDF24F93A9F(iParam0) || !unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_44(bParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_113386.f_7229[iVar9], 0))
		{
			if (unk_0xBEF939CD3AF0B8F0(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_46(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_46(int iParam0)
{
	if (func_36(iParam0))
	{
		return func_47(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_47(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_48(int iParam0, var uParam1, int iParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		bVar0 = func_45(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_54(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_53(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_36(bVar0))
		{
			uParam1->f_59 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_64;
		}
		else if (unk_0x9315DBF7D972F07A() && unk_0x15CAA6D7B11F1A7C(iParam0) == unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			if (func_52(161, iParam3))
			{
				uParam1->f_59 = func_49(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_49(753, iParam3, 0);
			}
			uParam1->f_60 = func_49(754, iParam3, 0);
			uParam1->f_61 = func_49(755, iParam3, 0);
		}
		if (unk_0x9315DBF7D972F07A() && iParam0 == unk_0xE2D3D51028F0428A())
		{
			if (func_52(161, iParam3))
			{
				uParam1->f_59 = func_49(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_49(753, iParam3, 0);
			}
		}
	}
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2826809[iParam0 /*3*/][func_50(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_50(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_51();
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

int func_51()
{
	return Global_1574918;
}

int func_52(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2866852[iParam0 /*3*/][func_50(iParam1)];
	if (unk_0x1BB27397611554CE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_53(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_45(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xF2BC143F97765619(iParam0, iParam1);
		*uParam3 = unk_0x7252A84ECED5E1D4(iParam0, iParam1);
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
				if (unk_0x5540488889EC816A(iParam0) && unk_0x88FED828C9DFBE76(iParam0) != -1)
				{
					*uParam2 = unk_0x88FED828C9DFBE76(iParam0);
					*uParam3 = unk_0x2FB3EE2B80255AFD(iParam0);
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

void func_54(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_45(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x5355BAA621C153CF(iParam0, iParam1);
		*uParam3 = unk_0xF1050E548C37F4A5(iParam0, iParam1);
		*uParam4 = unk_0x272AB65A4E7277B4(iParam0, iParam1);
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

int func_55()
{
	func_56();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_56()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_46(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_45(unk_0xE2D3D51028F0428A());
			if (func_36(iVar0) && (!func_57(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_36(Global_113386.f_2363.f_539.f_4321))
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

bool func_57(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_58(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	bVar0 = func_45(iParam0);
	if (func_36(bVar0) && !unk_0xF68107C40359970C(iParam0))
	{
		if (iParam0 == unk_0xE2D3D51028F0428A())
		{
			func_59(iParam0, &(Global_113386.f_2363.f_539.f_298[bVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_113386.f_2363.f_539.f_1730[iVar2 /*4*/][bVar0] = unk_0x48EE6C0E28668C6B(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xC965A5495F599392();
					if (Global_113386.f_2363.f_539.f_1730[iVar2 /*4*/][bVar0] == iVar1)
					{
						Global_113386.f_2363.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x5A52EDE69663AB67(unk_0x9E2D6C50374FCFA9(), &uVar3);
			if (bVar0 == 0)
			{
				unk_0x076A5661EF5ABEE4(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (bVar0 == 1)
			{
				unk_0x076A5661EF5ABEE4(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (bVar0 == 2)
			{
				unk_0x076A5661EF5ABEE4(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_59(int iParam0, var uParam1)
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
	
	if (!unk_0xF68107C40359970C(iParam0))
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
			iVar3 = func_64(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0xCB497F652ACB2DD3(iParam0, func_64(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x1F741ABE25B3CDD3(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0xC158EB99F56CB1FB(iParam0, Var4.f_0);
					Var4.f_4 = unk_0xEF3626A1BE542F5E(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!unk_0x6019BE7548B68C4B(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_62(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x54B42DEC4CAB3D41(iParam0, Var4.f_0, iVar2))
						{
							unk_0xCED9E32812D6C7C7(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_62(Var4.f_0, iVar1);
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
		iVar10 = unk_0xEFF3ECB899FC93AC();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((unk_0x75BACF95335672B8(iVar9, &Var11) && !func_61(Var11.f_1)) && iVar72 < 51)
			{
				if (!unk_0x1B5C8EE302FC0D1E(Var11.f_0))
				{
					Var4.f_0 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x1F741ABE25B3CDD3(iParam0, Var4.f_0);
					if (unk_0x8FEA2E94638F9767(iParam0, Var4.f_0, 0))
					{
						Var4.f_3 = unk_0xC158EB99F56CB1FB(iParam0, Var4.f_0);
						Var4.f_4 = unk_0xEF3626A1BE542F5E(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x6019BE7548B68C4B(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0xA67AEA8BBDC78F33(iVar9))
					{
						if (unk_0xD6677A8863DC6340(iVar9, iVar1, &Var50))
						{
							if (!func_60(Var50.f_3))
							{
								if (unk_0x54B42DEC4CAB3D41(iParam0, Var4.f_0, Var50.f_3))
								{
									unk_0xCED9E32812D6C7C7(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x8FEA2E94638F9767(iParam0, Var4.f_0, 0))
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

int func_60(int iParam0)
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
			return 1;
			break;
	}
	return 0;
}

int func_61(int iParam0)
{
	if (unk_0x9315DBF7D972F07A())
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
				return 1;
				break;
			}
	}
	return 0;
}

int func_62(int iParam0, int iParam1)
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
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_63(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x8C780BEF2D6DB238(iVar1))
					{
						if (unk_0x45F755B731A742D2(iVar1, iVar2, &Var43))
						{
							if (!func_60(Var43.f_3))
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

int func_63(int iParam0, var uParam1)
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

int func_64(int iParam0)
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

void func_65(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_45(iParam0);
	if (func_36(bVar0) && !unk_0xF68107C40359970C(iParam0))
	{
		Global_113386.f_2363.f_539.f_294[bVar0] = unk_0x28E4040BE8C027EF(iParam0);
	}
}

void func_66(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	bool bVar5;
	
	*uParam0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
	uParam0->f_3 = unk_0x82FE2343F8BDFF0B(unk_0xE2D3D51028F0428A());
	uParam0->f_5 = unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A());
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		uParam0->f_4 = unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9());
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
	else if (unk_0xB4C854DD86E40FDA(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (BitTest(Global_78567, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (BitTest(Global_78567, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (BitTest(Global_78567, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (BitTest(Global_78567, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0x63AC7EFB770FCB6F(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
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
		if (func_70(&iVar0))
		{
			if (func_68(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			bVar5 = func_105();
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
		else if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_67(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_67(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x15616E8442D3D1E8(Param0))
	{
		iVar0 = unk_0x63AC7EFB770FCB6F(Param4, sParam3);
		if (!unk_0xBCC73B466E2B2350(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x6F7D2FF0780E66BE(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_68(int iParam0, var uParam1, var uParam2)
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
	return !func_69(*uParam1, 0f, 0f, 0f, 0);
}

bool func_69(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_70(var uParam0)
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (func_93())
		{
			*uParam0 = func_76(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), 6, -1, 0, 1, -1);
			if (func_75(*uParam0) && !func_71(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_71(int iParam0)
{
	return func_72(iParam0, 0, 1);
}

int func_72(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100493.f_1393[iParam0], iParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_74() == 0)
		{
			return BitTest(func_49(func_73(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_73(int iParam0)
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
			return 11352;
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
		
		default:
			break;
	}
	return 13122;
}

int func_74()
{
	return Global_31959;
}

int func_75(int iParam0)
{
	return func_72(iParam0, 5, 1);
}

int func_76(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 57)
	{
		if (iParam3 == 6 || iParam3 == func_92(iVar0))
		{
			if (!bParam5 || func_91(iVar0))
			{
				fVar1 = unk_0x987A5F1E1A67E3C0(Param0, func_77(iVar0, 0), 1);
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

Vector3 func_77(int iParam0, bool bParam1)
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
			return func_88(Global_102568);
			break;
		
		case 46:
			if (Global_1853185 != func_87())
			{
				if (func_86(Global_1853185))
				{
					return func_79(2, 2);
				}
				else if (func_78(Global_1853185))
				{
					return func_79(45, 3);
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
			return Global_1966112;
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
			switch (Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_6)
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
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_78(int iParam0)
{
	if (iParam0 != func_87())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 0) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 1)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_79(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1853185 != func_87())
	{
		if (iParam1 == 3)
		{
			if (func_80(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 4))
			{
				if (func_80(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 5))
			{
				if (func_80(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_80(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_85(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_85(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_83(iParam0) };
	}
	else
	{
		Var12 = { func_82(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_81(Var18, -Var0.f_3.f_2) };
	Var18 = { func_81(Var18, Var6.f_3.f_2) };
	*uParam2 = { unk_0x6DB7FBD602C51670(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_81(struct<3> Param0, float fParam3)
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

struct<6> func_82(int iParam0)
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

struct<6> func_83(int iParam0)
{
	return func_84(iParam0);
}

struct<6> func_84(int iParam0)
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

int func_85(int iParam0, var uParam1)
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

int func_86(int iParam0)
{
	if (iParam0 != func_87())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 3) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 4)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_87()
{
	return -1;
}

Vector3 func_88(int iParam0)
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
			if (func_89() == 0)
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
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_89()
{
	return func_90(unk_0x9E2D6C50374FCFA9());
}

var func_90(int iParam0)
{
	return unk_0xF6CF013E72C680B4(Global_2689235[iParam0 /*453*/].f_318.f_3, 28, 31);
}

int func_91(int iParam0)
{
	return func_72(iParam0, 0, 0);
}

int func_92(int iParam0)
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
	}
	return 6;
}

bool func_93()
{
	return Global_100493.f_375 > 0;
}

var func_94()
{
	var uVar0;
	
	func_104(&uVar0, unk_0xAA2844CAD88768B5());
	func_103(&uVar0, unk_0x80F97D7D29800A1A());
	func_102(&uVar0, unk_0x09FC827691DACE59());
	func_97(&uVar0, unk_0xD52BD97E61483713());
	func_96(&uVar0, unk_0x771485043FDC55DE());
	func_95(&uVar0, unk_0x1137FD08B8D3F874());
	return uVar0;
}

void func_95(var uParam0, int iParam1)
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

void func_96(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_97(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_101(*uParam0);
	iVar1 = func_99(*uParam0);
	if (iParam1 < 1 || iParam1 > func_98(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_98(int iParam0, int iParam1)
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

var func_99(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_100(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_100(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_101(var uParam0)
{
	return uParam0 & 15;
}

void func_102(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_103(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_104(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

bool func_105()
{
	func_56();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_106(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xDFC67688F9088B45() || func_108())
	{
		uVar0 = iParam0;
		unk_0x5F540C4C109AB569(9, &uVar0, 1, 1);
	}
	else if (unk_0x527312C0DF85960A() || func_107())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x6E34665F75B2EE0A(9, &cVar1);
	}
}

bool func_107()
{
	return (unk_0xA7384DAD7CF469DA() || unk_0x807ABE1AB65C24D2());
}

bool func_108()
{
	return (unk_0x3EBD3AF4E5D7A08C() || unk_0xC545AB1CF97ABB34());
}

void func_109(char* sParam0, var uParam1, int iParam2)
{
	if (!unk_0xACC32B78196FBC2A(&Global_97511))
	{
		unk_0xA77F683FA0E7B1F5(&Global_97511, 0, 0, 0, 1, 0);
		StringCopy(&Global_97511, "", 64);
	}
	StringCopy(&Global_97511, sParam0, 64);
	unk_0xB85C479D5C3EA069(sParam0, uParam1, iParam2, func_110(0));
}

int func_110(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

struct<2> func_111(int iParam0)
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

void func_112(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_113(uParam1, "Abigail1", func_9(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 1:
			func_113(uParam1, "Abigail2", func_9(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 2:
			func_113(uParam1, "Barry1", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 3:
			func_113(uParam1, "Barry2", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_114(iParam0), 1, 1);
			break;
		
		case 4:
			func_113(uParam1, "Barry3", func_9(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 5:
			func_113(uParam1, "Barry3A", func_9(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 6:
			func_113(uParam1, "Barry3C", func_9(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 7:
			func_113(uParam1, "Barry4", func_9(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_114(iParam0), 0, 0);
			break;
		
		case 8:
			func_113(uParam1, "Dreyfuss1", func_9(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 9:
			func_113(uParam1, "Epsilon1", func_9(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 10:
			func_113(uParam1, "Epsilon2", func_9(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 11:
			func_113(uParam1, "Epsilon3", func_9(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 12:
			func_113(uParam1, "Epsilon4", func_9(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 13:
			func_113(uParam1, "Epsilon5", func_9(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 14:
			func_113(uParam1, "Epsilon6", func_9(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 15:
			func_113(uParam1, "Epsilon7", func_9(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 16:
			func_113(uParam1, "Epsilon8", func_9(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 17:
			func_113(uParam1, "Extreme1", func_9(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 18:
			func_113(uParam1, "Extreme2", func_9(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 19:
			func_113(uParam1, "Extreme3", func_9(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 20:
			func_113(uParam1, "Extreme4", func_9(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 21:
			func_113(uParam1, "Fanatic1", func_9(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_114(iParam0), 1, 0);
			break;
		
		case 22:
			func_113(uParam1, "Fanatic2", func_9(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_114(iParam0), 1, 0);
			break;
		
		case 23:
			func_113(uParam1, "Fanatic3", func_9(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_114(iParam0), 0, 1);
			break;
		
		case 24:
			func_113(uParam1, "Hao1", func_9(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_114(iParam0), 0, 1);
			break;
		
		case 25:
			func_113(uParam1, "Hunting1", func_9(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 26:
			func_113(uParam1, "Hunting2", func_9(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 27:
			func_113(uParam1, "Josh1", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 28:
			func_113(uParam1, "Josh2", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_114(iParam0), 1, 1);
			break;
		
		case 29:
			func_113(uParam1, "Josh3", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_114(iParam0), 1, 1);
			break;
		
		case 30:
			func_113(uParam1, "Josh4", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 31:
			func_113(uParam1, "Maude1", func_9(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 32:
			func_113(uParam1, "Minute1", func_9(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 33:
			func_113(uParam1, "Minute2", func_9(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 34:
			func_113(uParam1, "Minute3", func_9(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 35:
			func_113(uParam1, "MrsPhilips1", func_9(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 36:
			func_113(uParam1, "MrsPhilips2", func_9(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 37:
			func_113(uParam1, "Nigel1", func_9(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 38:
			func_113(uParam1, "Nigel1A", func_9(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_114(iParam0), 1, 1);
			break;
		
		case 39:
			func_113(uParam1, "Nigel1B", func_9(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_114(iParam0), 1, 1);
			break;
		
		case 40:
			func_113(uParam1, "Nigel1C", func_9(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_114(iParam0), 1, 1);
			break;
		
		case 41:
			func_113(uParam1, "Nigel1D", func_9(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_114(iParam0), 1, 1);
			break;
		
		case 42:
			func_113(uParam1, "Nigel2", func_9(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_114(iParam0), 1, 1);
			break;
		
		case 43:
			func_113(uParam1, "Nigel3", func_9(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_114(iParam0), 1, 1);
			break;
		
		case 44:
			func_113(uParam1, "Omega1", func_9(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 45:
			func_113(uParam1, "Omega2", func_9(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 46:
			func_113(uParam1, "Paparazzo1", func_9(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 47:
			func_113(uParam1, "Paparazzo2", func_9(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 48:
			func_113(uParam1, "Paparazzo3", func_9(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 49:
			func_113(uParam1, "Paparazzo3A", func_9(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 50:
			func_113(uParam1, "Paparazzo3B", func_9(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 51:
			func_113(uParam1, "Paparazzo4", func_9(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 52:
			func_113(uParam1, "Rampage1", func_9(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 54:
			func_113(uParam1, "Rampage3", func_9(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 55:
			func_113(uParam1, "Rampage4", func_9(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 56:
			func_113(uParam1, "Rampage5", func_9(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_114(iParam0), 0, 0);
			break;
		
		case 53:
			func_113(uParam1, "Rampage2", func_9(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_114(iParam0), 1, 0);
			break;
		
		case 57:
			func_113(uParam1, "TheLastOne", func_9(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 58:
			func_113(uParam1, "Tonya1", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 59:
			func_113(uParam1, "Tonya2", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 60:
			func_113(uParam1, "Tonya3", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 61:
			func_113(uParam1, "Tonya4", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		case 62:
			func_113(uParam1, "Tonya5", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_114(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_113(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_114(int iParam0)
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

int func_115(var* uParam0)
{
	int iVar0;
	
	if (func_144(&(uParam0->f_1)))
	{
		if (!unk_0xACC32B78196FBC2A(&(uParam0->f_9)))
		{
			func_134(1);
			func_132(uParam0, 1, func_133(*uParam0));
		}
		if (uParam0->f_27)
		{
			if (func_131(*uParam0))
			{
				while (!unk_0x3C7ED37A9FE7C585(unk_0xE2D3D51028F0428A()))
				{
					func_148();
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		func_116(*uParam0);
		iVar0 = unk_0xB8BA7F44DF1575E1(&(uParam0->f_1), uParam0, 61, 51000);
		unk_0xD195D79715508EFA(&(uParam0->f_1));
		if (unk_0xC6398AABC3E92273())
		{
			func_309("Initial cutscene loaded and passing to RC mission.");
			unk_0x24AAA4AC4A70A5FE(iVar0);
		}
		else
		{
			func_309("Initial cutscene wasn't loaded in time to pass to RC mission.");
			unk_0x6D23F8C14190D353();
		}
		return 1;
	}
	return 0;
}

void func_116(int iParam0)
{
	struct<2> Var0;
	
	func_130();
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 32, 0);
		unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 250, 0);
	}
	if (func_129(iParam0))
	{
		unk_0x706235CBF64DE7FA(unk_0xE2D3D51028F0428A(), 0);
	}
	unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
	unk_0xC511E7C272201CF7(0, 1);
	unk_0xC511E7C272201CF7(3, 1);
	unk_0xC511E7C272201CF7(2, 1);
	if (Global_44238 == 1)
	{
		if (func_128(unk_0xE2D3D51028F0428A()))
		{
			func_119(unk_0xE2D3D51028F0428A());
		}
	}
	if (!func_169())
	{
		if (iParam0 < 63)
		{
			func_117(iParam0);
			Var0 = { func_9(iParam0) };
			unk_0xEFE837B21D5CF02C(1, &Var0);
		}
	}
}

void func_117(int iParam0)
{
	if (iParam0 < 63)
	{
		func_118();
		Global_78574 = iParam0;
		Global_78573 = 0;
		Global_78576 = 7;
	}
}

void func_118()
{
	if (Global_78573 != 6)
	{
	}
	if (Global_78578)
	{
		unk_0x4FEF096D3AB4AA8C(15);
		Global_78578 = 0;
		Global_23150.f_8808 = 0;
	}
	Global_78573 = 6;
	Global_78575 = -1;
	Global_78574 = -1;
}

void func_119(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return;
	}
	iVar0 = func_127(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_44024[iVar0 /*5*/];
		func_122(1, iVar1, 1);
		return;
	}
	iVar2 = func_121(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_120(iVar2);
}

void func_120(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_43998[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_43998[iParam0 /*5*/].f_1 == unk_0xE2D3D51028F0428A())
		{
			Global_44236 = 0;
		}
	}
	Global_43998[iParam0 /*5*/] = 13;
	Global_43998[iParam0 /*5*/].f_1 = 0;
	Global_43998[iParam0 /*5*/].f_2 = 0;
	Global_43998[iParam0 /*5*/].f_3 = 0;
	Global_43998[iParam0 /*5*/].f_4 = 0;
	Global_43996 = (Global_43996 - 1);
	if (Global_43996 < 0)
	{
		Global_43996 = 0;
	}
}

int func_121(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_43998[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_122(int iParam0, int iParam1, int iParam2)
{
	func_123(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_125(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_124();
	if (iVar0 == -1)
	{
		return;
	}
	Global_44105[iVar0 /*6*/] = iParam0;
	Global_44105[iVar0 /*6*/].f_1 = iParam1;
	Global_44105[iVar0 /*6*/].f_2 = iParam2;
	Global_44105[iVar0 /*6*/].f_3 = iParam3;
	Global_44105[iVar0 /*6*/].f_4 = iParam4;
	Global_44105[iVar0 /*6*/].f_5 = iParam5;
}

int func_124()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44105[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_125(int iParam0, int iParam1, int iParam2)
{
	if (func_126(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_44105[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44105[iVar0 /*6*/])
			{
				if (iParam1 == Global_44105[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_127(int iParam0)
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
		if (!Global_44024[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44024[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_128(int iParam0)
{
	if (func_207(iParam0))
	{
		if (!unk_0xF68107C40359970C(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_129(int iParam0)
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

void func_130()
{
	if (Global_8941[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8941[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8941[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xB0550BC91B0159D6(&Global_8136, 25);
	unk_0xCED9E32812D6C7C7(&Global_8137, 11);
}

int func_131(int iParam0)
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

void func_132(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_207(uParam0->f_28[iVar0]))
		{
			unk_0xBED097BB6359F09C(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_207(uParam0->f_35[iVar0]))
		{
			unk_0xBED097BB6359F09C(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_207(uParam0->f_41[iVar0]))
		{
			unk_0xBED097BB6359F09C(uParam0->f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0xBED097BB6359F09C(unk_0xE2D3D51028F0428A(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), iParam1);
		if (bParam2)
		{
			unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
		}
	}
}

int func_133(int iParam0)
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

void func_134(bool bParam0)
{
	var uVar0;
	
	uVar0 = unk_0xB6BA8B8E3D0B41C6();
	if (!unk_0xE08D4560995E7946(uVar0))
	{
		if (bParam0)
		{
		}
		unk_0x64E21045781AFBC9(uVar0, bParam0, 16);
		unk_0x64E21045781AFBC9(uVar0, bParam0, 32);
	}
	func_135(1, 1, 0, 0, 0, 0, 0);
}

void func_135(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x85B547885D8F8B40(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 1);
		func_143(1);
		unk_0x1B7AAA85D46FE6FB();
		unk_0xA240F4C910B19938();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (unk_0xA3329B7A7520670E())
			{
				unk_0xD681CC2BC1084DB6(0);
			}
			if (!func_142())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_141(1, iParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_143(0);
		unk_0x45227777D3EBECE5();
		Global_63160 = 0;
		if (bParam1)
		{
			unk_0xA91EC7D49DF9F229();
		}
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 0);
		func_141(0, iParam3, iParam2, 0);
		if (unk_0x9315DBF7D972F07A())
		{
			if (((((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_139(unk_0x9E2D6C50374FCFA9())) && !func_137(unk_0x9E2D6C50374FCFA9(), 0)) && !func_136()) && !bParam4) && !bParam5)
			{
				unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
			}
		}
		else if (((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_139(unk_0x9E2D6C50374FCFA9())) && !bParam4) && !bParam5)
		{
			unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
		}
		Global_78317 = 0;
	}
}

bool func_136()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_36.f_18, 14);
}

bool func_137(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_138(-1, 0) == 8;
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

int func_138(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_51();
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

int func_139(int iParam0)
{
	if (func_137(iParam0, 0))
	{
		return 1;
	}
	if (func_140())
	{
		if (iParam0 == unk_0x9E2D6C50374FCFA9())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

bool func_140()
{
	return BitTest(Global_2621446, 3);
}

int func_141(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x131A54781ECD3789() != iParam0 && uParam2)
		{
			unk_0x10B0B2BEC7FAA911(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_142()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_143(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_8136, 13);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_8136, 13);
	}
}

int func_144(char* sParam0)
{
	if (!unk_0xACC32B78196FBC2A(uParam0))
	{
		unk_0xAF76A37C80EFD1D8(uParam0);
		while (!unk_0xF79F112CE5999680(sParam0))
		{
			unk_0xAF76A37C80EFD1D8(sParam0);
			unk_0x4EDE34FBADD967A6(0);
		}
		return 1;
	}
	func_309("Attempting to launch invalid script file [TERMINATING]");
	return 0;
}

void func_145()
{
	Global_20471 = 0;
	func_146();
}

void func_146()
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

int func_147()
{
	if (Global_21605 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

void func_148()
{
	func_153(0);
	func_152();
	func_149();
}

void func_149()
{
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			if (func_150(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 10.5f, 1, 1056964608, 0, 1, 0))
			{
				if (unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), joaat("script_task_leave_any_vehicle")) != 1)
				{
					unk_0xAB7639D658BBCCEE(unk_0xE2D3D51028F0428A(), 0, 0);
				}
			}
		}
	}
}

int func_150(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x7653D561C9574763(0, 71, 1);
	unk_0x7653D561C9574763(0, 72, 1);
	unk_0x7653D561C9574763(0, 76, 1);
	unk_0x7653D561C9574763(0, 73, 1);
	unk_0x7653D561C9574763(0, 59, 1);
	unk_0x7653D561C9574763(0, 60, 1);
	if (bParam5)
	{
		unk_0x7653D561C9574763(0, 75, 1);
	}
	unk_0x7653D561C9574763(0, 80, 1);
	if (!bParam6)
	{
		unk_0x7653D561C9574763(0, 69, 1);
		unk_0x7653D561C9574763(0, 70, 1);
		unk_0x7653D561C9574763(0, 68, 1);
	}
	unk_0x7653D561C9574763(0, 74, 1);
	unk_0x7653D561C9574763(0, 86, 1);
	unk_0x7653D561C9574763(0, 81, 1);
	unk_0x7653D561C9574763(0, 82, 1);
	unk_0x7653D561C9574763(0, 138, 1);
	unk_0x7653D561C9574763(0, 136, 1);
	unk_0x7653D561C9574763(0, 114, 1);
	unk_0x7653D561C9574763(0, 107, 1);
	unk_0x7653D561C9574763(0, 110, 1);
	unk_0x7653D561C9574763(0, 89, 1);
	unk_0x7653D561C9574763(0, 89, 1);
	unk_0x7653D561C9574763(0, 87, 1);
	unk_0x7653D561C9574763(0, 88, 1);
	unk_0x7653D561C9574763(0, 113, 1);
	unk_0x7653D561C9574763(0, 115, 1);
	unk_0x7653D561C9574763(0, 116, 1);
	unk_0x7653D561C9574763(0, 117, 1);
	unk_0x7653D561C9574763(0, 118, 1);
	unk_0x7653D561C9574763(0, 119, 1);
	unk_0x7653D561C9574763(0, 352, 1);
	unk_0x7653D561C9574763(0, 131, 1);
	unk_0x7653D561C9574763(0, 132, 1);
	unk_0x7653D561C9574763(0, 123, 1);
	unk_0x7653D561C9574763(0, 126, 1);
	unk_0x7653D561C9574763(0, 129, 1);
	unk_0x7653D561C9574763(0, 130, 1);
	unk_0x7653D561C9574763(0, 133, 1);
	unk_0x7653D561C9574763(0, 134, 1);
	unk_0x5951E2E1DB653567();
	func_151(iParam0);
	if ((unk_0x320D1840B6DAA1CC() - Global_29) > 500)
	{
		unk_0xD28E3800883DED83(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x320D1840B6DAA1CC();
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x48053974ED6F63CE(unk_0x207D53F9E0190691(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_151(int iParam0)
{
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x4545AF649BD80692(iParam0))
		{
			if (unk_0xD377CBCD474FDCFA(iParam0))
			{
				unk_0x416220C999F84215(iParam0, 0);
			}
		}
	}
}

void func_152()
{
	unk_0x7653D561C9574763(0, 21, 1);
	unk_0x7653D561C9574763(0, 37, 1);
	unk_0x7653D561C9574763(0, 25, 1);
	unk_0x7653D561C9574763(0, 141, 1);
	unk_0x7653D561C9574763(0, 140, 1);
	unk_0x7653D561C9574763(0, 24, 1);
	unk_0x7653D561C9574763(0, 257, 1);
	unk_0x7653D561C9574763(0, 22, 1);
	unk_0x7653D561C9574763(0, 23, 1);
}

void func_153(int iParam0)
{
	if (func_158())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_157(0))
		{
			func_154(iParam0);
		}
		unk_0xCED9E32812D6C7C7(&Global_8137, 2);
	}
}

void func_154(int iParam0)
{
	if (func_158())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_156())
		{
			func_155(1, 1);
		}
		else
		{
			func_155(0, 0);
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
	if (!func_142())
	{
		Global_20266.f_1 = 3;
	}
}

void func_155(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_157(0))
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

bool func_156()
{
	return BitTest(Global_1958711, 5);
}

int func_157(int iParam0)
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

bool func_158()
{
	return BitTest(Global_1958711, 19);
}

int func_159(int iParam0)
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return 1;
	}
	return 0;
}

int func_160(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_167();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_162(&(Global_112473[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	func_161(iParam0);
	return 1;
}

void func_161(int iParam0)
{
	Global_112473[iParam0 /*10*/].f_4 = 1;
	Global_112473[iParam0 /*10*/].f_5 = 0;
	Global_112473[iParam0 /*10*/].f_6 = 0;
	Global_112473[iParam0 /*10*/] = 0;
}

int func_162(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_97919.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_166(0))
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		unk_0xC099DA307DD6BC62(unk_0xB6BA8B8E3D0B41C6(), 0);
		Global_23011.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x2481B055C8B5CA09(8);
		}
		Global_43052 = iParam2;
		Global_43014 = *uParam0;
		Global_43015 = iParam4;
		Global_43013 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43013 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43013)
			{
				if (Global_43019[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43014 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_164(iParam2))
		{
			return 0;
		}
		if (Global_43013 == 8)
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		Global_43019[Global_43013 /*4*/] = Global_43016;
		Global_43019[Global_43013 /*4*/].f_1 = iParam1;
		Global_43019[Global_43013 /*4*/].f_2 = iParam2;
		Global_43019[Global_43013 /*4*/].f_3 = 0;
		Global_43013++;
		if (iParam4 != 0)
		{
			func_163(uParam0, iParam4);
		}
	}
	return 2;
}

void func_163(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_43013 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43013)
	{
		if (Global_43019[iVar0 /*4*/] == *uParam0)
		{
			Global_43019[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_164(int iParam0)
{
	return func_165(iParam0, Global_43052);
}

int func_165(int iParam0, int iParam1)
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

int func_166(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_164(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_167()
{
	return func_168(unk_0x05CBA41180F5D521(), 0);
}

int func_168(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x2E87280918B16506(uParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_112(iVar0, &uVar1);
		if (unk_0x2E87280918B16506(uVar1) == iVar33)
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

int func_169()
{
	if (Global_100441 == 10 || Global_100441 == 9)
	{
		return 1;
	}
	return 0;
}

void func_170(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = func_171(-1604.668f, 5239.1f, 3.01f, 0);
			unk_0x1A5B5BA56167D412(*uParam1, 66);
			unk_0xA582EE8380437B1B(*uParam1, 42);
			break;
		
		case 1:
			*uParam1 = func_171(-1592.84f, 5214.04f, 3.01f, 0);
			unk_0x1A5B5BA56167D412(*uParam1, 400);
			unk_0xA582EE8380437B1B(*uParam1, 42);
			break;
		
		case 2:
		case 3:
			*uParam1 = func_171(190.26f, -956.35f, 29.63f, 0);
			if ((BitTest(Global_113386.f_18574[2 /*6*/], 3) || BitTest(Global_113386.f_18574[4 /*6*/], 3)) || BitTest(Global_113386.f_18574[4 /*6*/], 3))
			{
				unk_0x1A5B5BA56167D412(*uParam1, 381);
			}
			else
			{
				unk_0x1A5B5BA56167D412(*uParam1, 66);
			}
			if (iParam0 == 2)
			{
				unk_0xA582EE8380437B1B(*uParam1, 42);
			}
			else
			{
				unk_0xA582EE8380437B1B(*uParam1, 44);
			}
			break;
		
		case 4:
			*uParam1 = func_171(414f, -761f, 29f, 0);
			if (BitTest(Global_113386.f_18574[2 /*6*/], 3) || BitTest(Global_113386.f_18574[3 /*6*/], 3))
			{
				unk_0x1A5B5BA56167D412(*uParam1, 381);
			}
			else
			{
				unk_0x1A5B5BA56167D412(*uParam1, 66);
			}
			unk_0xA582EE8380437B1B(*uParam1, 43);
			break;
		
		case 9:
			*uParam1 = func_171(-1622.89f, 4204.87f, 83.3f, 0);
			unk_0x1A5B5BA56167D412(*uParam1, 66);
			unk_0xA582EE8380437B1B(*uParam1, 42);
			break;
		
		case 11:
		case 12:
		case 13:
			if (iParam0 == 11)
			{
				*uParam1 = func_171(1835.53f, 4705.86f, 38.1f, 0);
			}
			else if (iParam0 == 12)
			{
				*uParam1 = func_171(1826.13f, 4698.88f, 38.92f, 0);
			}
			else
			{
				*uParam1 = func_171(637.02f, 119.7093f, 89.5f, 0);
			}
			unk_0x1A5B5BA56167D412(*uParam1, 206);
			unk_0xA582EE8380437B1B(*uParam1, 42);
			break;
		
		case 18:
		case 19:
			if (iParam0 == 18)
			{
				*uParam1 = func_171(-954.19f, -2760.05f, 14.64f, 0);
			}
			else
			{
				*uParam1 = func_171(-63.8f, -809.5f, 321.8f, 0);
			}
			unk_0x1A5B5BA56167D412(*uParam1, 382);
			unk_0xA582EE8380437B1B(*uParam1, 43);
			break;
		
		case 21:
		case 23:
			if (iParam0 == 21)
			{
				*uParam1 = func_171(-1877.82f, -440.649f, 45.05f, 0);
			}
			else
			{
				*uParam1 = func_171(-915.6f, 6139.2f, 5.5f, 0);
			}
			if ((BitTest(Global_113386.f_18574[21 /*6*/], 3) || BitTest(Global_113386.f_18574[22 /*6*/], 3)) || BitTest(Global_113386.f_18574[23 /*6*/], 3))
			{
				unk_0x1A5B5BA56167D412(*uParam1, 405);
			}
			else
			{
				unk_0x1A5B5BA56167D412(*uParam1, 66);
			}
			if (iParam0 == 21)
			{
				unk_0xA582EE8380437B1B(*uParam1, 42);
			}
			else
			{
				unk_0xA582EE8380437B1B(*uParam1, 43);
			}
			break;
		
		case 27:
			*uParam1 = func_171(-1104.93f, 291.25f, 64.3f, 0);
			unk_0x1A5B5BA56167D412(*uParam1, 66);
			unk_0xA582EE8380437B1B(*uParam1, 44);
			break;
		
		case 30:
			*uParam1 = func_171(-1104.93f, 291.25f, 64.3f, 0);
			unk_0x1A5B5BA56167D412(*uParam1, 385);
			unk_0xA582EE8380437B1B(*uParam1, 44);
			break;
		
		case 34:
			*uParam1 = func_171(-303.82f, 6211.29f, 31.05f, 0);
			unk_0x1A5B5BA56167D412(*uParam1, 386);
			unk_0xA582EE8380437B1B(*uParam1, 44);
			break;
		
		case 43:
			*uParam1 = func_171(-44.75f, -1288.67f, 28.21f, 0);
			unk_0x1A5B5BA56167D412(*uParam1, 149);
			unk_0xA582EE8380437B1B(*uParam1, 44);
			break;
		
		case 46:
			*uParam1 = func_171(-149.75f, 285.81f, 93.67f, 0);
			unk_0x1A5B5BA56167D412(*uParam1, 66);
			unk_0xA582EE8380437B1B(*uParam1, 43);
			break;
		
		case 47:
		case 48:
			if (iParam0 == 47)
			{
				*uParam1 = func_171(-70.71f, 301.43f, 106.79f, 0);
			}
			else
			{
				*uParam1 = func_171(-257.22f, 292.85f, 90.63f, 0);
			}
			unk_0x1A5B5BA56167D412(*uParam1, 389);
			unk_0xA582EE8380437B1B(*uParam1, 43);
			break;
	}
}

var func_171(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xC5B823372B67998A(Param0);
	unk_0x293A9399E902A33B(uVar0, func_172(unk_0x9315DBF7D972F07A(), 1f, 1f));
	unk_0xAAD76B24A5282FDD(uVar0, iParam3);
	return uVar0;
}

float func_172(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_173(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 9:
		case 11:
		case 12:
		case 13:
		case 18:
		case 19:
		case 21:
		case 23:
		case 27:
		case 30:
		case 34:
		case 43:
		case 46:
		case 47:
		case 48:
			return 1;
			break;
	}
	return 0;
}

int func_174(var uParam0)
{
	if (*uParam0 == 30)
	{
		if (func_207(uParam0->f_28[0]))
		{
			if (bLocal_263)
			{
				if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					if (func_175(unk_0xE2D3D51028F0428A(), uParam0->f_28[0], 1) <= 15f)
					{
						func_309("Special launching Josh 4 (not in vehicle)");
						return 1;
					}
				}
				else if (func_175(unk_0xE2D3D51028F0428A(), uParam0->f_28[0], 1) <= 10f)
				{
					func_309("Special launching Josh 4 (in vehicle)");
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_175(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	if (!unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
		Var3 = { unk_0x6B62510F212526DC(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x6B62510F212526DC(iParam1, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Var3, iParam2);
}

int func_176(var uParam0)
{
	if (*uParam0 == 29)
	{
		if (func_219(unk_0xE2D3D51028F0428A(), 566.7472f, -1771.875f, 28.35786f, 1) < 6f)
		{
			if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				func_309("Special launching Josh 3");
				return 1;
			}
			else if ((!func_177(unk_0xE2D3D51028F0428A(), joaat("script_task_leave_any_vehicle")) && func_207(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0))) && func_150(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 1f, 1, 1056964608, 0, 1, 0))
			{
				unk_0xAB7639D658BBCCEE(unk_0xE2D3D51028F0428A(), 0, 0);
			}
		}
	}
	return 0;
}

int func_177(int iParam0, int iParam1)
{
	if (func_128(iParam0))
	{
		if (unk_0x174CED88B97C78D9(iParam0, iParam1) == 1 || unk_0x174CED88B97C78D9(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_178(var uParam0)
{
	if (*uParam0 == 28)
	{
		if (func_219(unk_0xE2D3D51028F0428A(), 566.7472f, -1771.875f, 28.35786f, 1) < 9f)
		{
			if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				func_309("Special launching Josh 2");
				return 1;
			}
			else if ((!func_177(unk_0xE2D3D51028F0428A(), joaat("script_task_leave_any_vehicle")) && func_207(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0))) && func_150(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 4f, 1, 1056964608, 0, 1, 0))
			{
				unk_0xAB7639D658BBCCEE(unk_0xE2D3D51028F0428A(), 0, 0);
			}
		}
	}
	return 0;
}

int func_179(var uParam0, int iParam1)
{
	switch (uParam0->f_16)
	{
		case 0:
			if (*uParam0 == 12)
			{
				if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1826.631f, 4699.115f, 35.38089f, 1812.878f, 4710.457f, 42.05354f, 23.75f, 0, 1, 0))
				{
					if (func_207(uParam0->f_28[0]))
					{
						if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(uParam0->f_28[0], 1), 1) < 3f)
						{
							if (func_185(2))
							{
								if (func_183(uParam0->f_27))
								{
									func_182(uParam0->f_27, *uParam0);
									func_309("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
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
				else if (func_207(uParam0->f_28[0]))
				{
					if (func_181(uParam0))
					{
						if (func_185(2))
						{
							if (func_183(uParam0->f_27))
							{
								func_182(uParam0->f_27, *uParam0);
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
				if ((((!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1895.788f, -434.0192f, 40.30126f, -1883.038f, -444.0811f, 50.24509f, 8.5f, 0, 1, 0) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1883.576f, -443.6434f, 36.40581f, -1874.826f, -448.0797f, 49.15162f, 8.5f, 0, 1, 0)) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1876.343f, -446.2214f, 35.64637f, -1866.952f, -456.5601f, 49.0442f, 8.5f, 0, 1, 0)) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1882.997f, -438.9922f, 44.17246f, -1874.079f, -443.342f, 48.69179f, 0.75f, 0, 1, 0)) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1878.822f, -441.7655f, 44.9175f, -1877.941f, -439.9522f, 47.28982f, 1.25f, 0, 1, 0))
				{
					if (func_207(uParam0->f_28[0]))
					{
						if (func_181(uParam0))
						{
							if (func_185(2))
							{
								if (func_183(uParam0->f_27))
								{
									func_182(uParam0->f_27, *uParam0);
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
				if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 837.0731f, 1261.086f, 366.1592f, 780.8383f, 1260.829f, 351.405f, 17.75f, 0, 1, 0))
				{
					if (func_207(uParam0->f_28[0]))
					{
						if (func_181(uParam0))
						{
							if (func_185(2))
							{
								if (func_183(uParam0->f_27))
								{
									func_182(uParam0->f_27, *uParam0);
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
			else if (func_207(uParam0->f_28[0]))
			{
				if (func_181(uParam0))
				{
					if (func_185(2))
					{
						if (func_183(uParam0->f_27))
						{
							func_182(uParam0->f_27, *uParam0);
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
			if (func_207(uParam0->f_35[0]))
			{
				if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), uParam0->f_35[0], 0))
				{
					if (func_185(3))
					{
						func_182(uParam0->f_27, *uParam0);
						return 1;
					}
				}
				else if (iParam1 == 1)
				{
					func_180();
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0xE5965CDF24F93A9F(uParam0->f_35[0]))
			{
				if (!unk_0x55B23FE400FCEA6B(uParam0->f_35[0], 0))
				{
					if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(uParam0->f_35[0], 1), 1) < uParam0->f_15)
					{
						if (func_185(2))
						{
							if (func_183(uParam0->f_27))
							{
								func_182(uParam0->f_27, *uParam0);
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
			if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), uParam0->f_17[0 /*3*/], 1) < uParam0->f_15)
			{
				if (func_185(2))
				{
					if (func_183(uParam0->f_27))
					{
						func_182(uParam0->f_27, *uParam0);
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
			if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], 0, 1, 0))
			{
				if (func_185(2))
				{
					if (func_183(uParam0->f_27))
					{
						func_182(uParam0->f_27, *uParam0);
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
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					if (func_207(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)))
					{
						if (unk_0x7010991FDA59D3F2(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), joaat("towtruck")) || unk_0x7010991FDA59D3F2(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), joaat("towtruck2")))
						{
							if (unk_0x671CB92F637FDB33(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), uParam0->f_35[0]))
							{
								if (func_185(3))
								{
									return 1;
								}
							}
						}
						else if ((unk_0x7010991FDA59D3F2(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), joaat("cargobob")) || unk_0x7010991FDA59D3F2(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), joaat("cargobob2"))) || unk_0x7010991FDA59D3F2(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), joaat("cargobob3")))
						{
							if (unk_0xE420A4190E3E41AA(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)) && unk_0xC25FBAB58DC1031D(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), uParam0->f_35[0]))
							{
								if (func_185(3))
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
				if (unk_0x5E9B3BBF63A5E2F6(unk_0xE2D3D51028F0428A()) >= 2f)
				{
					if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 245.8885f, 371.9034f, 103.9884f, 241.5898f, 359.6458f, 107.3461f, 1.25f, 0, 1, 0))
					{
						if (func_185(2))
						{
							if (func_183(uParam0->f_27))
							{
								func_182(uParam0->f_27, *uParam0);
								func_309("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return 1;
							}
						}
					}
				}
			}
			else if (*uParam0 == 46)
			{
				if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -164.2046f, 277.4866f, 91.55322f, -153.6f, 277.4061f, 97.33813f, 10f, 0, 1, 0))
				{
					return 0;
				}
			}
			else if (*uParam0 == 31)
			{
				if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 2728.948f, 4143.44f, 42.29295f, 2722.213f, 4144.521f, 45.43182f, 10f, 0, 1, 0))
				{
					if (func_185(2))
					{
						if (func_183(1))
						{
							func_182(1, *uParam0);
							func_309("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return 1;
						}
					}
				}
			}
			else if (*uParam0 == 39)
			{
				if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -992.4995f, 358.7455f, 96.3735f, -1021.94f, 361.8888f, 65.36148f, 30f, 0, 1, 0))
				{
					if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -983.5426f, 369.1104f, 68.46017f, -1028.566f, 395.4613f, 94.57245f, 15f, 0, 1, 0))
					{
						if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -983.875f, 346.7556f, 68.02096f, -1021.451f, 336.3458f, 93.18714f, 14.5f, 0, 1, 0))
						{
							if (func_185(2))
							{
								if (func_183(uParam0->f_27))
								{
									func_182(uParam0->f_27, *uParam0);
									func_309("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return 1;
								}
							}
						}
					}
				}
			}
			if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], uParam0->f_24, 0, 1, 0))
			{
				if (*uParam0 == 45)
				{
					if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 2338.697f, 2597.037f, 45.39052f, 2324.003f, 2597.185f, 47.74961f, 8.5f, 0, 1, 0))
					{
						return 0;
					}
				}
				if (func_185(2))
				{
					if (func_183(uParam0->f_27))
					{
						func_182(uParam0->f_27, *uParam0);
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

void func_180()
{
	func_27(&(Global_103950.f_2890), &Global_103950, 0, 1, 1, 0);
}

int func_181(var uParam0)
{
	float fVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && uParam0->f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(uParam0->f_28[0], 1), 1) < (uParam0->f_15 + fVar0))
		{
			return 1;
		}
	}
	else if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(uParam0->f_28[0], 1), 1) < uParam0->f_15)
	{
		return 1;
	}
	return 0;
}

void func_182(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		if (!func_131(iParam1))
		{
			return;
		}
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			func_309("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A()) || unk_0xB73D201873640749(unk_0xE2D3D51028F0428A()))
			{
				func_309("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				unk_0x371D594409A68A18(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0, 1, 0);
			}
			func_148();
		}
	}
}

int func_183(bool bParam0)
{
	int iVar0;
	
	if (unk_0x3583A42587543334(unk_0xB6BA8B8E3D0B41C6()))
	{
		if (unk_0x3C7ED37A9FE7C585(unk_0xE2D3D51028F0428A()))
		{
			return 1;
		}
		else if (bParam0)
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				iVar0 = unk_0x9993EF7FDBCDB632();
				if (func_184(iVar0))
				{
					if (unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A()) || unk_0xB73D201873640749(unk_0xE2D3D51028F0428A()))
					{
						if ((!unk_0x5C5B446AD691DEA2(iVar0) && !unk_0xCE282187B0A6217E(iVar0)) && unk_0x207D53F9E0190691(iVar0) < 1f)
						{
							return 1;
						}
					}
					else if (!unk_0xCE282187B0A6217E(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_184(int iParam0)
{
	if (func_207(uParam0))
	{
		if (unk_0x55A0C756C4A8220C(uParam0, 0))
		{
			if (!unk_0xEF9410C312F2B117(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_185(int iParam0)
{
	bool bVar0;
	
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				bVar0 = func_105();
				if (!func_36(bVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_193()) || Global_112433) || Global_31962) || func_192()) || func_191(8, -1)) || func_93()) || func_190()) || func_189()) || func_188()) || Global_113386.f_7688.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1) || func_193()) || Global_31962) || func_192()) || func_191(8, -1)) || func_189()) || func_93()) || func_190()) || func_188()) || Global_113386.f_7688.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_193()) || Global_112433) || Global_31962) || func_192()) || func_191(8, -1)) || func_189()) || func_93()) || func_190()) || func_188()) || Global_113386.f_7688.f_919[bVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_193()) || Global_112433) || Global_31962) || func_192()) || func_191(8, -1)) || func_93()) || func_190()) || func_188()) || Global_113386.f_7688.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_193() || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || func_191(8, -1)) || func_188()) || func_187()) || Global_113386.f_7688.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_191(8, -1) || func_93()) || func_190()) || func_187()) || func_186())
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
							if ((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_193()) || Global_31962) || func_192()) || func_191(8, -1)) || func_190()) || func_189()) || func_188()) || Global_113386.f_7688.f_919[bVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || func_193()) || func_190()) || Global_112433) || Global_31962) || func_192()) || Global_44238) || func_191(8, -1)) || func_189()) || func_187()) || func_188()) || Global_113386.f_7688.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0)) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1)) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_193()) || Global_112433) || Global_31962) || func_192()) || func_191(8, -1)) || func_189()) || func_187()) || func_93()) || func_190()) || func_188())
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

var func_186()
{
	return Global_100480.f_1;
}

int func_187()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_188()
{
	if (unk_0xB4C854DD86E40FDA(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_189()
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

bool func_190()
{
	return Global_100493.f_376 > 0;
}

bool func_191(int iParam0, int iParam1)
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

var func_192()
{
	return Global_1575058;
}

int func_193()
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

void func_194()
{
	switch (iLocal_96)
	{
		case 0:
			if ((unk_0x320D1840B6DAA1CC() - iLocal_262) > 100 && bLocal_263 == 0)
			{
				iLocal_96 = 1;
			}
			break;
		
		case 1:
			if (func_219(unk_0xE2D3D51028F0428A(), -1103.44f, 290.18f, 63.28f, 1) <= 20f)
			{
				if (func_195(&uLocal_97, "JOSH4AU", "JOSH4_AMB", 8, 0, 0, 0))
				{
					iLocal_96 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_147())
			{
				iLocal_262 = unk_0x320D1840B6DAA1CC();
				iLocal_96 = 0;
				bLocal_263 = true;
				func_309("Josh 4 conversation finished and will not loop");
			}
			else if (func_219(unk_0xE2D3D51028F0428A(), -1103.44f, 290.18f, 63.28f, 1) >= 25f)
			{
				func_145();
				bLocal_263 = true;
				iLocal_96 = 0;
			}
			break;
	}
}

bool func_195(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_206(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return func_196(sParam2, iParam3, 0);
}

int func_196(char* sParam0, int iParam1, bool bParam2)
{
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam1 > Global_21607)
			{
				if (Global_21612 == 0)
				{
					unk_0xD681CC2BC1084DB6(0);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
					Global_21616 = 0;
					Global_21615 = 0;
					Global_20265 = 0;
				}
				else
				{
					func_146();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x2E5F8A288A954523())
		{
			return 0;
		}
		if (func_191(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_205();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_22601 = Global_22602;
		Global_21224.f_370 = Global_22594;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21601 = Global_21602;
		if (Global_21611)
		{
			unk_0xB0550BC91B0159D6(&Global_8136, 20);
			unk_0xB0550BC91B0159D6(&Global_8137, 17);
			unk_0xB0550BC91B0159D6(&Global_8138, 0);
			if (bParam2)
			{
				func_204();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				if (unk_0x7A6B8C262362C722(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (func_203())
				{
					return 0;
				}
				if (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x90DCD1F6C0982DC1(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x8DE48073046D4CF0(unk_0xE2D3D51028F0428A(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A()))
					{
						return 0;
					}
					if (unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9()))
					{
						return 0;
					}
					if (unk_0x3DA4842FA4407BE2(unk_0xE2D3D51028F0428A()))
					{
						return 0;
					}
					if (unk_0xA89C6F3818CC3ACB(unk_0x9E2D6C50374FCFA9(), 0))
					{
						return 0;
					}
				}
			}
			if (func_142())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
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
				if (BitTest(Global_8136, 9))
				{
					return 0;
				}
			}
			func_202();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_201();
		func_197();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21607 || iParam1 == Global_21607)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_146();
	}
	return 0;
}

void func_197()
{
	if (!func_198())
	{
		return;
	}
	if (Global_21611)
	{
		MemCopy(&(Global_1973149.f_1), {Global_21224}, 4);
		Global_1973149 = Global_7451;
		Global_1973149.f_6 = Global_21615;
	}
}

int func_198()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_87())
	{
		return 0;
	}
	if (func_199(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (BitTest(Global_1892703[unk_0x9E2D6C50374FCFA9() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x44859561F653DD4E())
	{
		return 0;
	}
	return 1;
}

bool func_199(int iParam0)
{
	return func_200(iParam0, 20);
}

var func_200(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

void func_201()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20473[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD681CC2BC1084DB6(0);
	Global_21605 = 1;
}

void func_202()
{
	Global_21658 = Global_21657;
	Global_21652 = Global_21653;
	Global_21699 = { Global_21687 };
	Global_21705 = { Global_21693 };
	Global_21660 = Global_21659;
	Global_21729 = { Global_21711 };
	Global_21735 = { Global_21717 };
	Global_21741 = { Global_21723 };
	Global_21747 = { Global_21753 };
	Global_7451 = Global_7452;
	Global_7453 = Global_7454;
	Global_21616 = Global_21617;
	Global_21618 = Global_21619;
	Global_21620 = { Global_21636 };
	Global_21609 = Global_21610;
	Global_22621 = 0;
	Global_21654 = 0;
	Global_21655 = 0;
	unk_0xB0550BC91B0159D6(&Global_8137, 16);
}

int func_203()
{
	int iVar0;
	int iVar1;
	
	if (Global_78319)
	{
		iVar0 = 0;
		unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar1, 1);
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x2358AE4C940CF1DF() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0x98C2AE9A4C384CBF(unk_0xE2D3D51028F0428A(), 78, 1))
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

void func_204()
{
	if (func_57(14))
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_113386.f_28050[0 /*29*/])
			{
				Global_20266 = 0;
			}
			else if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_113386.f_28050[1 /*29*/])
			{
				Global_20266 = 1;
			}
			else if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_113386.f_28050[2 /*29*/])
			{
				Global_20266 = 2;
			}
			else
			{
				Global_20266 = 0;
			}
		}
	}
	else
	{
		Global_20266 = func_105();
		if (Global_20266 == 145)
		{
			Global_20266 = 3;
		}
		if (Global_78319)
		{
			Global_20266 = 3;
		}
		if (Global_20266 > 3)
		{
			Global_20266 = 3;
		}
	}
}

void func_205()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20894[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20894[iVar0 /*10*/].f_1), "", 24);
		Global_20894[iVar0 /*10*/].f_7 = 0;
		Global_20894[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20894.f_161 = -99;
	Global_20894.f_162 = { 0f, 0f, 0f };
}

void func_206(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = iParam5;
	if (iParam3 == 0)
	{
		Global_22592 = 1;
		Global_22590 = 0;
	}
	else
	{
		Global_22592 = 0;
		Global_22590 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22593 = 1;
		Global_22591 = 0;
	}
	else
	{
		Global_22593 = 0;
		Global_22591 = 1;
	}
}

int func_207(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_208(int iParam0, struct<3> Param1, char[4] cParam4, char* sParam5, int iParam6, char* sParam7, int iParam8, float fParam9)
{
	var uVar0;
	
	if ((((func_207(unk_0xE2D3D51028F0428A()) && func_207(iParam0->f_28[0])) && !func_147()) && (unk_0x320D1840B6DAA1CC() - iParam0->f_60) > iParam8) && func_219(unk_0xE2D3D51028F0428A(), Param1, 1) < fParam9)
	{
		uVar0 = 16;
		func_257(&uVar0, iParam6, iParam0->f_28[0], sParam7, 0, 1);
		func_209(&uVar0, cParam4, sParam5, 7, 0, 0);
		iParam0->f_60 = unk_0x320D1840B6DAA1CC();
		return 1;
	}
	return 0;
}

void func_209(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_206(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0xCED9E32812D6C7C7(&Global_20471, 0);
	Global_21608 = iParam3;
	StringCopy(&Global_21595, sParam2, 24);
}

void func_210(int iParam0, char* sParam1, struct<3> Param2)
{
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (!unk_0xACC32B78196FBC2A(sParam1))
		{
			if (Global_43052 == 17)
			{
				if (*iParam0 != -1)
				{
					func_215(iParam0);
				}
			}
			else if (func_214())
			{
				if (*iParam0 != -1)
				{
					func_215(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (func_219(unk_0xE2D3D51028F0428A(), Param2, 1) <= 100f)
				{
					func_213(iParam0, 1);
				}
			}
			else
			{
				switch (func_212(*iParam0))
				{
					case 1:
						if (unk_0x3C57C2F07FEE34D2(sParam1, "JOSH_1_INT_CONCAT"))
						{
							unk_0xCB3859A62F123AEF(sParam1, 14, 8);
						}
						else
						{
							unk_0xD536FD78D8A135F1(sParam1, 8);
						}
						unk_0xA8B7321F953CFF17(2);
						func_211(*iParam0, 1);
						break;
					
					case 2:
						unk_0xEDFEDFF9573687B1(0);
						unk_0x6D23F8C14190D353();
						unk_0xA8B7321F953CFF17(0);
						func_211(*iParam0, 0);
						break;
				}
				if (func_219(unk_0xE2D3D51028F0428A(), Param2, 1) > 120f)
				{
					func_215(iParam0);
				}
			}
		}
	}
}

void func_211(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_78315 == iParam0)
		{
			Global_78316 = iParam0;
		}
	}
	else if (Global_78316 == iParam0)
	{
		Global_78316 = -1;
	}
}

int func_212(int iParam0)
{
	if (Global_78315 == iParam0)
	{
		if (Global_78316 == -1)
		{
			if (Global_78314 < unk_0x8142A6539DDC180F())
			{
				return 1;
			}
		}
	}
	else if (Global_78316 == iParam0)
	{
		return 2;
	}
	return 0;
}

void func_213(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (Global_78312 < 5)
	{
		Global_78301[Global_78312 /*2*/] = 0;
		Global_78301[Global_78312 /*2*/].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_78312)
			{
				if (Global_78301[iVar1 /*2*/] == Global_78301[Global_78312 /*2*/])
				{
					Global_78301[Global_78312 /*2*/]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_78301[Global_78312 /*2*/];
		Global_78312++;
		Global_78313 = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

bool func_214()
{
	return Global_97750;
}

void func_215(int iParam0)
{
	unk_0xEDFEDFF9573687B1(0);
	unk_0x6D23F8C14190D353();
	func_216(iParam0);
}

void func_216(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_78316 == *iParam0)
	{
		func_211(*iParam0, 0);
	}
	if (Global_78315 == *iParam0)
	{
		Global_78315 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_78312)
	{
		if (Global_78301[iVar1 /*2*/] == *iParam0)
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
	while (iVar2 <= (Global_78312 - 2))
	{
		Global_78301[iVar2 /*2*/] = Global_78301[iVar2 + 1 /*2*/];
		Global_78301[iVar2 /*2*/].f_1 = Global_78301[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_78301[(Global_78312 - 1) /*2*/] = -1;
	Global_78301[(Global_78312 - 1) /*2*/].f_1 = 3;
	Global_78312 = (Global_78312 - 1);
	Global_78313 = 1;
	Global_78314 = unk_0x8142A6539DDC180F();
	*iParam0 = -1;
}

void func_217(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_167();
	}
	if (iParam0 == -1)
	{
		return;
	}
	Global_112473[iParam0 /*10*/].f_1 = 1;
}

void func_218(int iParam0)
{
	int iVar0;
	
	if (func_207(unk_0xE2D3D51028F0428A()))
	{
		iVar0 = 0;
		while (iVar0 <= (iParam0->f_28 - 1))
		{
			if (func_128(iParam0->f_28[iVar0]))
			{
				unk_0xBC12D08EE7559CCD(iParam0->f_28[iVar0], 1, 0);
				unk_0x50274A7EACA3133A(iParam0->f_28[iVar0], 0);
				unk_0xABC2CA6F28903308(iParam0->f_28[iVar0], 1);
				unk_0xC1A74225341AA9FB(iParam0->f_28[iVar0], unk_0xE2D3D51028F0428A(), 0, 16);
				unk_0xB3822DB3D538C8F3(&(iParam0->f_28[iVar0]));
			}
			iVar0++;
		}
	}
}

float func_219(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Param1, iParam4);
}

int func_220(var uParam0, bool bParam1)
{
	struct<27> Var0;
	
	if (Global_78319)
	{
		func_309("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	func_112(*uParam0, &Var0);
	if ((func_256(*uParam0) || func_254(*uParam0)) || Global_78564 == 1)
	{
		return 1;
	}
	if (!unk_0xC92F9F18E020B461())
	{
		func_309("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (func_250(*uParam0))
	{
		if (*uParam0 == 19)
		{
			func_249(uParam0->f_28[0]);
		}
		func_309("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (uParam0->f_25 == 1)
	{
		if (!func_229(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_229(uParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*uParam0 == 16 || *uParam0 == 9) || *uParam0 == 18) || *uParam0 == 22) || *uParam0 == 32) || *uParam0 == 51)
	{
		if (!func_227(uParam0, 1, 1))
		{
			if (*uParam0 == 16)
			{
				func_218(uParam0);
			}
			else
			{
				func_225(uParam0);
			}
			return 0;
		}
	}
	else if (*uParam0 == 24)
	{
		if (!func_227(uParam0, 0, 1))
		{
			func_225(uParam0);
			return 0;
		}
	}
	else if (*uParam0 == 6)
	{
		if (!func_227(uParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (uParam0->f_26 == 1)
	{
		if (!func_227(uParam0, 1, 0))
		{
			func_225(uParam0);
			return 0;
		}
	}
	else if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (!func_227(uParam0, 0, 0))
		{
			func_225(uParam0);
			return 0;
		}
	}
	if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (func_207(uParam0->f_35[0]))
		{
			if (!unk_0x8F41785F110B0DA0(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, 0, 1, 0))
			{
				return 0;
			}
		}
	}
	if (*uParam0 == 10)
	{
		if (unk_0x89D0E0233F6E59A7(-1, uParam0->f_17[0 /*3*/], 8f))
		{
			func_309("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!BitTest(Var0.f_26, func_105()))
		{
			func_309("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0;
		}
	}
	if (func_224(&(uParam0->f_48)) && bParam1)
	{
		func_221(uParam0->f_28[0], &(uParam0->f_48), *uParam0);
	}
	return 1;
}

void func_221(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (func_207(iParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_224(uParam1))
				{
					if (unk_0x6F940C2636C076AD(*uParam1))
					{
						unk_0x51BB443B279E4104(iParam0);
						if (iParam2 != 21)
						{
							if (func_69(uParam1->f_5, 0f, 0f, 0f, 0))
							{
								unk_0x49D97B076E3590AC(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
							}
							else
							{
								unk_0xA888F8CC04F25CC8(&uVar0);
								if (func_223(uParam1))
								{
									unk_0x246C656F8E525DC7(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								else
								{
									unk_0x246C656F8E525DC7(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								unk_0x246C656F8E525DC7(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
								unk_0xC963A45B50851768(uVar0);
								unk_0x8ACADA903FCAA42F(iParam0, uVar0);
								unk_0x7461D7C5BA953BC7(&uVar0);
							}
						}
						else
						{
							unk_0x246C656F8E525DC7(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 3);
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
				if (!func_223(uParam1) || !unk_0xFCF559C8631ABED7(iParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_222(iParam2) && !unk_0x2E7F5417D4F4DD69(iParam0, unk_0xE2D3D51028F0428A(), 25f))
					{
						unk_0x529D306014D3C29A(iParam0, unk_0xE2D3D51028F0428A(), 0);
						uParam1->f_3 = 5;
					}
					else if ((func_223(uParam1) && uParam1->f_4 == 0) && unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(iParam0, 1), 1) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			
			case 3:
				unk_0xA888F8CC04F25CC8(&uVar1);
				if (func_69(uParam1->f_5, 0f, 0f, 0f, 0))
				{
					unk_0x49D97B076E3590AC(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
				}
				else
				{
					unk_0x246C656F8E525DC7(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0, 2, 0);
					unk_0x246C656F8E525DC7(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				}
				unk_0xC963A45B50851768(uVar1);
				unk_0x8ACADA903FCAA42F(iParam0, uVar1);
				unk_0x7461D7C5BA953BC7(&uVar1);
				uParam1->f_4 = 1;
				if (func_222(iParam2))
				{
					uParam1->f_3 = 2;
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 5:
				if (!func_222(iParam2) || unk_0x2E7F5417D4F4DD69(iParam0, unk_0xE2D3D51028F0428A(), 10f))
				{
					if (func_69(uParam1->f_5, 0f, 0f, 0f, 0))
					{
						unk_0x49D97B076E3590AC(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
					}
					else
					{
						unk_0x246C656F8E525DC7(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
					}
					uParam1->f_3 = 2;
				}
				break;
			}
	}
}

int func_222(int iParam0)
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return 1;
	}
	return 0;
}

int func_223(var uParam0)
{
	if (unk_0xACC32B78196FBC2A(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

int func_224(var uParam0)
{
	if (unk_0xACC32B78196FBC2A(*uParam0) || unk_0xACC32B78196FBC2A(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

void func_225(var uParam0)
{
	int iVar0;
	var uVar1;
	
	if (*uParam0 == 52)
	{
		func_226(&(uParam0->f_41[1]));
		func_226(&(uParam0->f_41[2]));
	}
	if (func_207(unk_0xE2D3D51028F0428A()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_128(uParam0->f_28[iVar0]))
			{
				if (!unk_0xD5C6B5E3B93A5EDC(uParam0->f_28[iVar0], 0))
				{
					unk_0x959E1626CBC7D38A(uParam0->f_28[iVar0], 1, 0);
					unk_0x5C65DDDC219B3AA5(uParam0->f_28[0], 0);
				}
				unk_0xABC2CA6F28903308(uParam0->f_28[iVar0], 1);
				if (*uParam0 == 34)
				{
					if (func_207(uParam0->f_41[0]))
					{
						unk_0x959E1626CBC7D38A(uParam0->f_41[0], 1, 0);
						unk_0x5C65DDDC219B3AA5(uParam0->f_41[0], 0);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_249(uParam0->f_28[iVar0]);
						break;
					
					case 8:
						unk_0x8FB472886552D737("rcmcollect_paperleadinout@");
						while (!unk_0x6F940C2636C076AD("rcmcollect_paperleadinout@"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xA888F8CC04F25CC8(&uVar1);
						unk_0x49D97B076E3590AC(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 10000f, -1, 0, 0);
						unk_0xC963A45B50851768(uVar1);
						unk_0x8ACADA903FCAA42F(uParam0->f_28[iVar0], uVar1);
						unk_0x7461D7C5BA953BC7(&uVar1);
						break;
					
					case 0:
					case 1:
						unk_0x8FB472886552D737("rcmabigail");
						while (!unk_0x6F940C2636C076AD("rcmabigail"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xA888F8CC04F25CC8(&uVar1);
						unk_0x49D97B076E3590AC(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 10000f, -1, 0, 0);
						unk_0xC963A45B50851768(uVar1);
						unk_0x8ACADA903FCAA42F(uParam0->f_28[iVar0], uVar1);
						unk_0x7461D7C5BA953BC7(&uVar1);
						break;
					
					case 32:
						unk_0x8FB472886552D737("rcmminute1");
						while (!unk_0x6F940C2636C076AD("rcmminute1"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xA888F8CC04F25CC8(&uVar1);
						if (iVar0 == 0)
						{
							unk_0x49D97B076E3590AC(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						else
						{
							unk_0x49D97B076E3590AC(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 10000f, -1, 0, 0);
						unk_0xC963A45B50851768(uVar1);
						unk_0x8ACADA903FCAA42F(uParam0->f_28[iVar0], uVar1);
						unk_0x7461D7C5BA953BC7(&uVar1);
						break;
					
					case 24:
						unk_0x8FB472886552D737("special_ped@hao@base");
						while (!unk_0x6F940C2636C076AD("special_ped@hao@base"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xA888F8CC04F25CC8(&uVar1);
						unk_0x49D97B076E3590AC(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, 0, 0, 0);
						unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 10000f, -1, 0, 0);
						unk_0xC963A45B50851768(uVar1);
						unk_0x8ACADA903FCAA42F(uParam0->f_28[iVar0], uVar1);
						unk_0x7461D7C5BA953BC7(&uVar1);
						break;
					
					default:
						unk_0xCA2872F050840231(uParam0->f_28[iVar0]);
						unk_0x7734082B0EDB0BE0(uParam0->f_28[iVar0], unk_0xE2D3D51028F0428A(), 10000f, -1, 0, 0);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_226(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (unk_0x508CDC652F5361B5(*uParam0))
		{
			unk_0xE6451C2F193342C7(*uParam0, 1, 1);
		}
		unk_0x4BDA5AFD88C085EB(uParam0);
	}
}

int func_227(var uParam0, bool bParam1, bool bParam2)
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
	if (func_128(unk_0xE2D3D51028F0428A()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0xE5965CDF24F93A9F(uParam0->f_35[iVar0]))
			{
				if (unk_0x55B23FE400FCEA6B(uParam0->f_35[iVar0], 0))
				{
					func_309("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return 0;
				}
				if (!unk_0x55A0C756C4A8220C(uParam0->f_35[iVar0], 0))
				{
					func_309("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return 0;
				}
				if (unk_0x0747E45CFF1F74AA(uParam0->f_35[iVar0], unk_0xE2D3D51028F0428A(), 0))
				{
					func_309("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return 0;
				}
				if (unk_0x0CF63873D754B965(uParam0->f_35[iVar0]) < 850)
				{
					func_309("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return 0;
				}
				if (bParam2)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						if (unk_0x72F6AE51B7E34865(uParam0->f_35[iVar0], unk_0xE2D3D51028F0428A()) && unk_0x207D53F9E0190691(unk_0xE2D3D51028F0428A()) > 5f)
						{
							func_309("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return 0;
						}
						uVar2 = unk_0x9993EF7FDBCDB632();
						if (func_184(uVar2))
						{
							if (unk_0x15CAA6D7B11F1A7C(uVar2) == joaat("towtruck") || unk_0x15CAA6D7B11F1A7C(iVar2) == joaat("towtruck2"))
							{
								if (func_184(uParam0->f_35[iVar0]))
								{
									if (unk_0x671CB92F637FDB33(iVar2, uParam0->f_35[iVar0]))
									{
										func_309("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return 0;
									}
								}
							}
						}
					}
					else
					{
						iVar3 = unk_0x9993EF7FDBCDB632();
						if (func_184(iVar3))
						{
							if (unk_0x72F6AE51B7E34865(uParam0->f_35[iVar0], iVar3) && unk_0x207D53F9E0190691(iVar3) > 6f)
							{
								func_309("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return 0;
							}
						}
						if (*uParam0 == 16)
						{
							if (func_228(unk_0xE2D3D51028F0428A(), uParam0->f_35[iVar0]))
							{
								func_309("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
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

int func_228(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (unk_0x55A0C756C4A8220C(iParam1, 0))
		{
			iVar0 = unk_0xD9BD5965B9552645(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_229(var uParam0, bool bParam1, int iParam2)
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
	if (func_128(unk_0xE2D3D51028F0428A()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0xE5965CDF24F93A9F(uParam0->f_28[iVar0]))
			{
				if (!unk_0xF68107C40359970C(uParam0->f_28[iVar0]))
				{
					if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
					{
						if (unk_0x72F6AE51B7E34865(unk_0xE2D3D51028F0428A(), uParam0->f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								func_225(uParam0);
							}
							else
							{
								func_218(uParam0);
							}
							if (func_147())
							{
								func_145();
							}
							func_309("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((unk_0xE10B76698E5CF067(uParam0->f_28[iVar0]) || unk_0x344BB7BDBAB3823C(uParam0->f_28[iVar0])) || unk_0x5D5890DBA617ACC7(uParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_225(uParam0);
						}
						else
						{
							func_218(uParam0);
						}
						func_309("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (unk_0x32DCDA1B2F8A0694(uParam0->f_28[iVar0]))
					{
						if (unk_0x77A43AFA9AAEC041(uParam0->f_28[iVar0], unk_0xE2D3D51028F0428A(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								func_225(uParam0);
							}
							else
							{
								func_218(uParam0);
							}
							func_309("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (func_248(*uParam0))
					{
						if (!func_159(*uParam0))
						{
							if (func_243(uParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_225(uParam0);
								}
								else
								{
									func_218(uParam0);
								}
								func_309("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (unk_0x89D0E0233F6E59A7(-1, unk_0x6B62510F212526DC(uParam0->f_28[iVar0], 1), 15f))
						{
							if (iParam2 == 0)
							{
								func_225(uParam0);
							}
							else
							{
								func_218(uParam0);
							}
							func_309("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_231(uParam0->f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								func_225(uParam0);
							}
							else
							{
								func_218(uParam0);
							}
							func_309("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!func_230(*uParam0))
					{
						if (unk_0x89D0E0233F6E59A7(-1, unk_0x6B62510F212526DC(uParam0->f_28[iVar0], 1), 5f))
						{
							if (iParam2 == 0)
							{
								func_225(uParam0);
							}
							else
							{
								func_218(uParam0);
							}
							func_309("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0)
						{
							if (iParam2 == 0)
							{
								func_225(uParam0);
							}
							else
							{
								func_218(uParam0);
							}
							func_309("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					func_309("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (func_207(uParam0->f_41[0]))
						{
							unk_0x959E1626CBC7D38A(uParam0->f_41[0], 1, 0);
							unk_0x5C65DDDC219B3AA5(uParam0->f_41[0], 0);
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

int func_230(int iParam0)
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return 1;
	}
	return 0;
}

int func_231(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_207(unk_0xE2D3D51028F0428A()) && func_207(iParam0))
	{
		if (func_242(iParam0) || unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iParam0))
		{
			if (unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_232(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_232(int iParam0, float fParam1)
{
	return func_233(iParam0, unk_0xE2D3D51028F0428A(), fParam1, 1, 250, 7);
}

bool func_233(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_241(iParam0, iParam1);
	if (!func_207(iParam0) || !func_207(iParam1))
	{
		if (iVar4 != -1)
		{
			func_240(&(Local_37[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_237(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_236();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_37[iVar4 /*4*/].f_1 = iParam0;
		Local_37[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x6EA486FF6D815B4B(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_234(&(Local_37[iVar4 /*4*/]), Var1, iParam1, &(Local_37[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x320D1840B6DAA1CC() - Local_37[iVar4 /*4*/].f_3) < iParam4);
}

int func_234(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_207(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_235(iParam4, iParam7) };
		*uParam0 = unk_0x1E4C19DC2AD86A18(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0xB2D581BD7446BBE9(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x9044EDB8A7BF67B4(iVar7))
	{
		func_207(iVar7);
		if (unk_0x28AA31872A651BC7(iVar7) == iParam4)
		{
			if (bLocal_78)
			{
				unk_0x8A66CDE1D3E54C3B(Param1, unk_0x6B62510F212526DC(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x320D1840B6DAA1CC();
			return 1;
		}
		return 0;
	}
	if (unk_0x04D9F44466CBF3CA(iVar7))
	{
		func_207(iVar7);
		if (unk_0xD5C6B5E3B93A5EDC(iParam4, 0))
		{
			if (unk_0x31EB55FAEEE9C0F5(iVar7) == unk_0xB3FF0049C1FD38EC(iParam4, 0))
			{
				if (bLocal_78)
				{
					unk_0x8A66CDE1D3E54C3B(Param1, unk_0x6B62510F212526DC(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x320D1840B6DAA1CC();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_235(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x5853B15F78E1A265(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x6B62510F212526DC(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x6EA486FF6D815B4B(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x6EA486FF6D815B4B(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x6EA486FF6D815B4B(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x6EA486FF6D815B4B(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x6EA486FF6D815B4B(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x6EA486FF6D815B4B(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x6B62510F212526DC(iParam0, 1);
}

int func_236()
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

int func_237(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_239(unk_0x6B62510F212526DC(iParam1, 1) - unk_0x6B62510F212526DC(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x63BEA94AB58D4E6D(iParam0) };
	}
	else
	{
		Var3 = { func_239(unk_0x6EA486FF6D815B4B(iParam0, 31086, 0f, 5f, 0f) - unk_0x6EA486FF6D815B4B(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_238(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_238(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_239(struct<3> Param0)
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

void func_240(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_241(int iParam0, int iParam1)
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

int func_242(var uParam0)
{
	if (unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), uParam0) && unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 6))
	{
		return 1;
	}
	return 0;
}

int func_243(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_207(unk_0xE2D3D51028F0428A()) && func_207(uParam0))
	{
		unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_247(uParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_244(uParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x807D601FA146717A(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x9AC74C7EF847A074(unk_0x6B62510F212526DC(uParam0, 1), fVar0, 1))
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
				if (func_247(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_244(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_244(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x6B62510F212526DC(uParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0xEDF30C9168B336D8(unk_0x6B62510F212526DC(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0xEDF30C9168B336D8(unk_0x6B62510F212526DC(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0xEDF30C9168B336D8(unk_0x6B62510F212526DC(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0xEDF30C9168B336D8(unk_0x6B62510F212526DC(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_245(iParam0, fParam1))
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
			if (func_245(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x863026E0C5C2E52B(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_245(var uParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x367885498C2037BD(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x367885498C2037BD(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x367885498C2037BD(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x367885498C2037BD(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x367885498C2037BD(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_246(uParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_246(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_239(Param1 - unk_0x6B62510F212526DC(uParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0x63BEA94AB58D4E6D(iParam0) };
	}
	else
	{
		Var3 = { func_239(unk_0x6EA486FF6D815B4B(iParam0, 31086, 0f, 5f, 0f) - unk_0x6EA486FF6D815B4B(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_238(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_247(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()))
		{
			if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), uParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x9AC74C7EF847A074(unk_0x6B62510F212526DC(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_248(int iParam0)
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return 0;
	}
	return 1;
}

void func_249(int iParam0)
{
	var uVar0;
	
	if (func_207(unk_0xE2D3D51028F0428A()) && func_207(uParam0))
	{
		unk_0x8FB472886552D737("rcmextreme3");
		while (!unk_0x6F940C2636C076AD("rcmextreme3"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xA888F8CC04F25CC8(&uVar0);
		unk_0x49D97B076E3590AC(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, 0, 0, 0);
		unk_0xF7B73727A8F72F54(0, 1);
		unk_0xF323D744A727A4A2(0, 64.6f, -737.8f, 44.2f);
		unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 10000f, -1, 0, 0);
		unk_0xC963A45B50851768(uVar0);
		unk_0x8ACADA903FCAA42F(uParam0, uVar0);
		unk_0x7461D7C5BA953BC7(&uVar0);
	}
}

int func_250(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_167();
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (func_256(iParam0))
	{
		return 0;
	}
	if (!func_164(4))
	{
		if (func_254(iParam0))
		{
		}
		else
		{
			return 1;
		}
	}
	if (func_253() && !func_252())
	{
		return 1;
	}
	if (!func_251(iParam0))
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) != 0)
			{
				return 1;
			}
		}
	}
	if (!BitTest(Global_113386.f_18574[iParam0 /*6*/], 2))
	{
		return 1;
	}
	return 0;
}

int func_251(int iParam0)
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_252()
{
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x5CC952A51A751C4C() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_253()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_254(int iParam0)
{
	if ((func_255() && Global_100441.f_11 == 6) && iParam0 == func_168(&(Global_100441.f_3), 0))
	{
		return 1;
	}
	return 0;
}

int func_255()
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

int func_256(int iParam0)
{
	if (func_110(0))
	{
		if (Global_78565.f_1 == 7)
		{
			if (Global_78565 == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_257(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_258(int iParam0)
{
	switch (*iParam0)
	{
		case 27:
			if (!func_276(iParam0))
			{
				return 0;
			}
			break;
		
		case 28:
			if (!func_275(iParam0))
			{
				return 0;
			}
			break;
		
		case 29:
			if (!func_273(iParam0))
			{
				return 0;
			}
			break;
		
		case 30:
			if (!func_259(iParam0))
			{
				return 0;
			}
			break;
	}
	func_309("Created initial scene");
	return 1;
}

int func_259(var uParam0)
{
	int iVar0[4];
	int iVar5;
	float fVar6;
	bool bVar7;
	
	iVar0[0] = uLocal_92;
	iVar0[1] = iLocal_93;
	iVar0[2] = joaat("s_m_y_cop_01");
	iVar0[3] = joaat("police3");
	switch (iLocal_91)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 8f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "JOSH_4_INT_CONCAT", 24);
			iVar5 = 0;
			while (iVar5 <= (iVar0 - 1))
			{
				unk_0xD69A0C3662175E68(iVar0[iVar5]);
				iVar5++;
			}
			func_272(&(uParam0->f_48), "rcmjosh4", "beckon_a_josh", 0);
			iLocal_91 = 1;
			break;
		
		case 1:
			if (!func_271(&iVar0) || !func_270(&(uParam0->f_48)))
			{
				return 0;
			}
			if (!func_269(0, 1))
			{
			}
			if (!func_268(1, 1))
			{
			}
			iLocal_91 = 2;
			break;
		
		case 2:
			bVar7 = true;
			if (!unk_0xE5965CDF24F93A9F(uParam0->f_28[0]))
			{
				if (func_265(&(uParam0->f_28[0]), 58, -1103.6f, 290.81f, 64.31f, -99.24f, "JOSH LAUNCHER RC", 1))
				{
					unk_0xBC12D08EE7559CCD(uParam0->f_28[0], 17, 1);
				}
				else
				{
					bVar7 = false;
				}
			}
			if (!unk_0xE5965CDF24F93A9F(uParam0->f_28[1]))
			{
				func_263(&(uParam0->f_28[1]), iVar0[2], -1102.92f, 290.12f, 64.28f, 40.46f, 6);
				if (func_207(uParam0->f_28[1]))
				{
					unk_0xDCB52C614B3660EC(uParam0->f_28[1]);
					unk_0x50274A7EACA3133A(uParam0->f_28[1], 1);
					unk_0x9521FB98DB6DDF50(uParam0->f_28[1], joaat("weapon_pistol"), -1, 0, 1);
					if (unk_0x6F940C2636C076AD("rcmjosh4"))
					{
						unk_0x03A927199A2DFE46(uParam0->f_28[1]);
						unk_0x49D97B076E3590AC(uParam0->f_28[1], "rcmjosh4", "BECKON_A_COP_B", 8f, -8f, -1, 1, 0, 0, 0, 0);
					}
				}
				else
				{
					bVar7 = false;
				}
			}
			if (!unk_0xE5965CDF24F93A9F(uParam0->f_28[2]))
			{
				func_263(&(uParam0->f_28[2]), iVar0[2], -1102.73f, 290.91f, 64.28f, 92.06f, 6);
				if (func_207(uParam0->f_28[2]))
				{
					unk_0xE3752B10DC995E95(uParam0->f_28[2], 0, 1, 1, 0);
					unk_0xE3752B10DC995E95(uParam0->f_28[2], 3, 0, 1, 0);
					unk_0xE3752B10DC995E95(uParam0->f_28[2], 10, 0, 1, 0);
					unk_0x50274A7EACA3133A(uParam0->f_28[2], 1);
					unk_0x9521FB98DB6DDF50(uParam0->f_28[2], joaat("weapon_pistol"), -1, 0, 1);
					if (unk_0x6F940C2636C076AD("rcmjosh4"))
					{
						unk_0x03A927199A2DFE46(uParam0->f_28[2]);
						unk_0x49D97B076E3590AC(uParam0->f_28[2], "rcmjosh4", "BECKON_A_COP_A", 8f, -8f, -1, 1, 0, 0, 0, 0);
					}
				}
				else
				{
					bVar7 = false;
				}
			}
			if (!unk_0xE5965CDF24F93A9F(uParam0->f_35[0]))
			{
				func_261(&(uParam0->f_35[0]), iVar0[3], -1107.5f, 280.33f, 64.01f, 97.97f);
			}
			if (!unk_0xE5965CDF24F93A9F(uParam0->f_35[1]))
			{
				func_260(&(uParam0->f_35[1]), 0);
				if (func_184(uParam0->f_35[1]))
				{
					unk_0x448AD51B3157C957(uParam0->f_35[1], 900f);
					fVar6 = unk_0x20E1198E4672F72D(uParam0->f_35[1]);
					fVar6 = (fVar6 / 2f);
					unk_0x2EE80CD0EAEB9B5B(uParam0->f_35[1], fVar6);
					unk_0x9F65B3BAFA302A65(uParam0->f_35[1], 1084227584);
				}
				else
				{
					bVar7 = false;
				}
			}
			if (bVar7)
			{
				iLocal_91 = 3;
			}
			break;
		
		case 3:
			if (unk_0x574E2A23F0F76E35(-1138.32f, 299.69f, 65.94f, 5f, joaat("prop_lrggate_01c_l"), 0))
			{
				unk_0x798E4BBA7A3C56AE(joaat("prop_lrggate_01c_l"), -1138.32f, 299.69f, 65.94f, 1, 0f, 0);
			}
			if (unk_0x574E2A23F0F76E35(-1137.52f, 297.02f, 65.81f, 5f, joaat("prop_lrggate_01c_r"), 0))
			{
				unk_0x798E4BBA7A3C56AE(joaat("prop_lrggate_01c_r"), -1137.054f, 295.5856f, 67.18046f, 1, 0f, 0);
			}
			iVar5 = 0;
			while (iVar5 <= (iVar0 - 1))
			{
				unk_0xF1A23B343DFEDFD0(iVar0[iVar5]);
				iVar5++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_260(var uParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	
	if (bParam1)
	{
		Var0 = { -1129.18f, 300.55f, 65.92f };
		fVar3 = 86.97f;
	}
	else
	{
		Var0 = { -1139.759f, 291.483f, 66.327f };
		fVar3 = 6.077003f;
	}
	func_261(uParam0, iLocal_93, Var0, fVar3);
	unk_0xD584204572DF0440(*uParam0, 4);
	unk_0x3B2646B62E7BBE11(*uParam0, 3);
	unk_0x2EABFF5EFCB7E6CF(*uParam0, 0, 0);
	unk_0x1B3814E11B085F5E(*uParam0, 1);
}

void func_261(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_262(uParam0);
	*uParam0 = unk_0xBA715A7BEBA5A1F9(iParam1, Param2, fParam5, 1, 1, 0);
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		unk_0x9F65B3BAFA302A65(*uParam0, 1084227584);
		unk_0xF160248D9083ED0C(*uParam0, 1000, 0);
	}
}

void func_262(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (!unk_0xA6A089369417736E(*uParam0))
		{
			unk_0x2D58A6131679D82C(*uParam0, 1, 0);
		}
		if (func_184(*uParam0))
		{
			if (unk_0xA6A089369417736E(*uParam0) && unk_0x930E64CB0285CAEC(*uParam0, 1))
			{
				if (func_207(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), *uParam0, 0))
					{
						unk_0x3D81769BEC61BFF8(uParam0);
						return;
					}
				}
				unk_0xD59CC8123FD1A789(uParam0);
			}
		}
		else
		{
			if (func_207(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), *uParam0, 0))
				{
					unk_0x3D81769BEC61BFF8(uParam0);
					return;
				}
			}
			unk_0xD59CC8123FD1A789(uParam0);
		}
	}
}

void func_263(var uParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	func_264(uParam0);
	*uParam0 = unk_0xA8D58C3AADA2C41C(iParam6, uParam1, Param2, fParam5, 0, 0);
}

void func_264(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(*uParam0, 0))
		{
			unk_0x006574E87E6F1942(*uParam0, 0, 1);
		}
		if (!unk_0xA6A089369417736E(*uParam0))
		{
			unk_0x2D58A6131679D82C(*uParam0, 1, 0);
		}
		unk_0x05CB75C0837196F9(uParam0);
	}
}

int func_265(var uParam0, int iParam1, struct<3> Param2, float fParam5, char* sParam6, int iParam7)
{
	if (func_266(uParam0, iParam1, Param2, fParam5, 1))
	{
		if (unk_0xE5965CDF24F93A9F(*uParam0))
		{
			if (!unk_0x55B23FE400FCEA6B(*uParam0, 0))
			{
				unk_0x50274A7EACA3133A(*uParam0, 1);
				unk_0x62BDDA84CCCF90A9(*uParam0, 0);
				if (iParam7 == 1)
				{
					unk_0xA7266A50941DBAEA(*uParam0, 0);
				}
			}
			unk_0xD8B630F464FE1D6D(*uParam0, sParam6);
		}
		return 1;
	}
	return 0;
}

int func_266(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_36(iParam1))
	{
		iVar0 = func_312(iParam1);
		unk_0xD69A0C3662175E68(iVar0);
		if (unk_0x0152AA00FA3130F1(iVar0))
		{
			if (unk_0xE5965CDF24F93A9F(*uParam0))
			{
				unk_0x05CB75C0837196F9(uParam0);
			}
			*uParam0 = unk_0xA8D58C3AADA2C41C(26, iVar0, Param2, uParam5, 0, 0);
			unk_0xDCB52C614B3660EC(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x5355BAA621C153CF(*uParam0, 3) == 0)
				{
					unk_0xE3752B10DC995E95(*uParam0, 5, 2, 0, 0);
				}
			}
			func_267(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0xF1A23B343DFEDFD0(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_267(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_96275[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_268(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam0)
	{
		unk_0x1B3E1454BD86FCE6(-1502457334, 0f, 0, 0);
		unk_0x7E15597AA5F53F9A(-1502457334, 3, 0, 1);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (bParam1)
	{
		unk_0x1B3E1454BD86FCE6(-1994188940, 0f, 0, 0);
		unk_0x7E15597AA5F53F9A(-1994188940, 3, 0, 1);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iVar0 >= 2)
	{
		return 1;
	}
	return 0;
}

int func_269(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam0)
	{
		unk_0xEA77ADC78E693681(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), 0);
		unk_0x1B3E1454BD86FCE6(904342475, 1f, 0, 0);
		unk_0x7E15597AA5F53F9A(904342475, 4, 0, 1);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (bParam1)
	{
		unk_0xEA77ADC78E693681(-1101.62f, 290.36f, 64.76f, 5f, joaat("prop_lrggate_01c_r"), 0);
		unk_0x1B3E1454BD86FCE6(-795418380, -0.9f, 0, 0);
		unk_0x7E15597AA5F53F9A(-795418380, 4, 0, 1);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iVar0 >= 2)
	{
		return 1;
	}
	return 0;
}

int func_270(var uParam0)
{
	if (func_224(uParam0))
	{
		unk_0x8FB472886552D737(*uParam0);
		if (unk_0x6F940C2636C076AD(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_271(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!unk_0x0152AA00FA3130F1((*iParam0)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_272(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	*uParam0 = sParam1;
	uParam0->f_1 = sParam2;
	uParam0->f_2 = iParam3;
	unk_0x8FB472886552D737(*uParam0);
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_3 = 1;
	uParam0->f_4 = 0;
}

int func_273(var uParam0)
{
	int iVar0[2];
	int iVar3;
	bool bVar4;
	
	iVar0[0] = uLocal_92;
	iVar0[1] = iLocal_93;
	switch (iLocal_91)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 567.5142f, -1760.011f, 27.16929f };
			uParam0->f_17[1 /*3*/] = { 565.3445f, -1775.931f, 31.3515f };
			uParam0->f_24 = 7f;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "josh_3_intp1", 24);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				unk_0xD69A0C3662175E68(iVar0[iVar3]);
				iVar3++;
			}
			unk_0x8FB472886552D737("rcmjosh3");
			iLocal_91 = 1;
			break;
		
		case 1:
			if (!func_271(&iVar0) || !unk_0x6F940C2636C076AD("rcmjosh3"))
			{
				return 0;
			}
			iLocal_91 = 2;
			break;
		
		case 2:
			bVar4 = true;
			if (!unk_0xE5965CDF24F93A9F(uParam0->f_28[0]))
			{
				if (!func_265(&(uParam0->f_28[0]), 58, 566.1639f, -1773.817f, 29f, 14.4f, "JOSH LAUNCHER RC", 1))
				{
					bVar4 = false;
				}
			}
			if (!unk_0xE5965CDF24F93A9F(uParam0->f_35[0]))
			{
				func_274(&(uParam0->f_35[0]));
			}
			if (bVar4)
			{
				iLocal_91 = 3;
			}
			break;
		
		case 3:
			if (func_207(uParam0->f_28[0]))
			{
				unk_0xD6A76BAB45A4B460(uParam0->f_28[0], 118, 0);
				unk_0xD6A76BAB45A4B460(uParam0->f_28[0], 208, 1);
				uParam0->f_59 = unk_0x8F5F4164BF5FB513(563.76f, -1773.86f, 28.36f, 0f, 0.05f, -110.7f, 2);
				unk_0x950B26F4C891073F(uParam0->f_28[0], uParam0->f_59, "rcmjosh3", "sit_stairs_idle", 8f, -8f, 17, 0, 1148846080, 0);
				unk_0xFE1CD80C2F7CBCFB(uParam0->f_59, 1);
			}
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				unk_0xF1A23B343DFEDFD0(iVar0[iVar3]);
				iVar3++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_274(var uParam0)
{
	func_261(uParam0, iLocal_93, 558.09f, -1765.39f, 28.86f, 335.3252f);
	unk_0xD584204572DF0440(*uParam0, 4);
	unk_0x3B2646B62E7BBE11(*uParam0, 2);
	unk_0x2EABFF5EFCB7E6CF(*uParam0, 0, 0);
	unk_0x1B3814E11B085F5E(*uParam0, 1);
}

int func_275(var uParam0)
{
	int iVar0[2];
	int iVar3;
	bool bVar4;
	
	iVar0[0] = uLocal_92;
	iVar0[1] = iLocal_93;
	switch (iLocal_91)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 574.0521f, -1770.594f, 27.66929f };
			uParam0->f_17[1 /*3*/] = { 559.1631f, -1768.663f, 31.41929f };
			uParam0->f_24 = 17.25f;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "josh_2_intp1_t4", 24);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				unk_0xD69A0C3662175E68(iVar0[iVar3]);
				iVar3++;
			}
			unk_0x8FB472886552D737("rcmjosh2");
			iLocal_91 = 1;
			break;
		
		case 1:
			if (!func_271(&iVar0) || !unk_0x6F940C2636C076AD("rcmjosh2"))
			{
				return 0;
			}
			iLocal_91 = 2;
			break;
		
		case 2:
			bVar4 = true;
			if (!unk_0xE5965CDF24F93A9F(uParam0->f_28[0]))
			{
				if (!func_265(&(uParam0->f_28[0]), 58, 565.3901f, -1772.838f, 29.80087f, 62.50156f, "JOSH LAUNCHER RC", 1))
				{
					bVar4 = false;
				}
			}
			if (!unk_0xE5965CDF24F93A9F(uParam0->f_35[0]))
			{
				func_274(&(uParam0->f_35[0]));
				unk_0x3B2646B62E7BBE11(uParam0->f_35[0], 1);
			}
			if (bVar4)
			{
				iLocal_91 = 3;
			}
			break;
		
		case 3:
			if (func_207(uParam0->f_28[0]))
			{
				unk_0x006574E87E6F1942(uParam0->f_28[0], 1, 1);
				unk_0xD6A76BAB45A4B460(uParam0->f_28[0], 118, 0);
				unk_0xD6A76BAB45A4B460(uParam0->f_28[0], 208, 1);
				if (func_207(unk_0xE2D3D51028F0428A()))
				{
					unk_0xF30F15F203736DE4(uParam0->f_28[0], unk_0xE2D3D51028F0428A(), -1, 0, 2);
				}
				uLocal_94 = unk_0x8F5F4164BF5FB513(563.76f, -1773.86f, 28.36f, 0.02f, 0.02f, -110.7f, 2);
				unk_0xFE1CD80C2F7CBCFB(uLocal_94, 1);
				unk_0x950B26F4C891073F(uParam0->f_28[0], uLocal_94, "rcmjosh2", "josh_wait_loop", 2f, -4f, 0, 0, 1148846080, 0);
			}
			unk_0xAFC1FBF3F6AE7B9A("rcmjosh2");
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				unk_0xF1A23B343DFEDFD0(iVar0[iVar3]);
				iVar3++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_276(var uParam0)
{
	int iVar0[2];
	int iVar3;
	bool bVar4;
	
	iVar0[0] = uLocal_92;
	iVar0[1] = iLocal_93;
	switch (iLocal_91)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 1;
			uParam0->f_15 = 9f;
			StringCopy(&(uParam0->f_9), "JOSH_1_INT_CONCAT", 24);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				unk_0xD69A0C3662175E68(iVar0[iVar3]);
				iVar3++;
			}
			func_272(&(uParam0->f_48), "rcmjosh1", "idle", 0);
			iLocal_91 = 1;
			break;
		
		case 1:
			if (!func_271(&iVar0) || !func_270(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_91 = 2;
			break;
		
		case 2:
			bVar4 = true;
			if (!unk_0xE5965CDF24F93A9F(uParam0->f_28[0]))
			{
				if (!func_265(&(uParam0->f_28[0]), 58, -1104.72f, 291.02f, 64.39f, 138.35f, "JOSH LAUNCHER RC", 1))
				{
					bVar4 = false;
				}
			}
			if (!unk_0xE5965CDF24F93A9F(uParam0->f_35[0]))
			{
				func_260(&(uParam0->f_35[0]), 1);
			}
			if (!func_277(1, 1))
			{
				bVar4 = false;
			}
			if (bVar4)
			{
				iLocal_91 = 3;
			}
			break;
		
		case 3:
			unk_0x780D33653803D9B0(-1112.67f, 287.38f, 62.85f, -1096.41f, 297.5f, 65.59f, 0, 0);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				unk_0xF1A23B343DFEDFD0(iVar0[iVar3]);
				iVar3++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_277(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam0)
	{
		unk_0x1B3E1454BD86FCE6(904342475, 0f, 0, 0);
		unk_0x7E15597AA5F53F9A(904342475, 4, 0, 1);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (bParam1)
	{
		unk_0x1B3E1454BD86FCE6(-795418380, 0f, 0, 0);
		unk_0x7E15597AA5F53F9A(904342475, 4, 0, 1);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iVar0 >= 2)
	{
		return 1;
	}
	return 0;
}

int func_278(int iParam0)
{
	struct<27> Var0;
	bool bVar32;
	
	func_112(iParam0, &Var0);
	bVar32 = func_105();
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

int func_279(int iParam0)
{
	char* sVar0;
	
	if (Global_78319)
	{
		func_309("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_113386.f_9085 && !func_110(1))
	{
		func_309("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_280(iParam0))
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		func_309("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_100441.f_11 == 6)
	{
		if (Global_100441 < 9)
		{
			func_112(iParam0, &sVar0);
			if (unk_0x3C57C2F07FEE34D2(&(Global_100441.f_3), sVar0))
			{
				func_309("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (unk_0xB4C854DD86E40FDA(joaat("candidate_controller")) == 0)
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		func_309("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_280(int iParam0)
{
	var uVar0;
	
	func_112(iParam0, &uVar0);
	if (!func_164(4))
	{
		if (func_254(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_253() && !func_252())
	{
		return 0;
	}
	if (func_286(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = func_167();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_256(iParam0))
	{
		if (!func_285(iParam0))
		{
			return 0;
		}
		if (!func_284(iParam0))
		{
			return 0;
		}
		if (func_283(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_281(5))
		{
			Global_112473[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_112473[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_281(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (Global_100493.f_373 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_281(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		func_282(iParam0, &sVar1);
		iVar9 = unk_0x63AC7EFB770FCB6F(Global_95479[iParam0 /*10*/].f_3, &sVar1);
		if (iVar9 != 0 && Global_100493.f_373 == iVar9)
		{
			return 1;
		}
	}
	return 0;
}

bool func_282(int iParam0, char* sParam1)
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
			if (unk_0x8DD54478CFA35F08("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (unk_0x8DD54478CFA35F08("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (unk_0x8DD54478CFA35F08("TrevorsTrailerTrash"))
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
	return !unk_0x3C57C2F07FEE34D2(sParam1, "");
}

int func_283(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_18574[iParam0 /*6*/], 3);
}

int func_284(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_18574[iParam0 /*6*/], 2);
}

int func_285(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_18574[iParam0 /*6*/], 0);
}

int func_286(int iParam0)
{
	if (func_251(iParam0))
	{
		return 0;
	}
	else if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_287()
{
	func_309("Running end routines.");
	Global_113104 = (Global_113104 - 1);
}

int func_288(int iParam0, int iParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	
	if (*iParam0 == 1)
	{
		if (func_289((*iParam0)[0], Param2, fParam5, iParam1))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_289((*iParam0)[iVar0], Param2, fParam5, iParam1))
			{
				iVar0 = *iParam0;
				return 1;
			}
			iVar0++;
		}
	}
	func_309("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return 0;
}

int func_289(int iParam0, struct<3> Param1, float fParam4, var uParam5)
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 0;
	func_112(iParam0, &Var1);
	if (func_290(Var1.f_6, Param1, fParam4, 0))
	{
		if (BitTest(Global_113386.f_18574[iParam0 /*6*/], 0))
		{
			if (!BitTest(Global_113386.f_18574[iParam0 /*6*/], 3))
			{
				iVar0 = 1;
			}
		}
		if (func_256(iParam0))
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

int func_290(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x48053974ED6F63CE((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x48053974ED6F63CE((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x48053974ED6F63CE((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_291(int iParam0, bool bParam1)
{
	char* sVar0;
	
	if (bParam1)
	{
		func_309("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_298(iParam0, 0, 0, 0);
	}
	if (unk_0x12DD4A0B247D9B4D(uLocal_264))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_264);
	}
	func_297(&(iParam0->f_48));
	if (iLocal_95 != -1)
	{
		func_309("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_216(&iLocal_95);
	}
	switch (*iParam0)
	{
		case 30:
			sVar0 = "JOSH4_AMB";
			break;
	}
	func_292(sVar0);
	switch (*iParam0)
	{
		case 30:
			unk_0x73BDA6FE727AD754(-1101.62f, 290.36f, 64.76f, 5f, joaat("prop_lrggate_01c_r"));
			break;
	}
	if (bParam1)
	{
		func_217(*iParam0);
	}
	func_287();
	func_309("SCRIPT TERMINATED");
	unk_0xAFBDF6A5E54114C1();
}

void func_292(char* sParam0)
{
	if (!unk_0xACC32B78196FBC2A(sParam0))
	{
		if (func_295(sParam0))
		{
			func_293();
		}
	}
}

void func_293()
{
	Global_20471 = 0;
	func_294();
}

void func_294()
{
	unk_0x82B0661A78CC39CF();
	Global_22616 = 0;
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21605 = 6;
	}
}

int func_295(char* sParam0)
{
	struct<6> Var0;
	
	Var0 = { func_296() };
	if (unk_0x3C57C2F07FEE34D2(&Var0, uParam0))
	{
		return 1;
	}
	return 0;
}

struct<6> func_296()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		return Global_21224;
	}
	return Var0;
}

int func_297(var uParam0)
{
	if (func_224(uParam0))
	{
		if (unk_0x6F940C2636C076AD(*uParam0))
		{
			unk_0xAFC1FBF3F6AE7B9A(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}
	return 0;
}

void func_298(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_305(uParam0, iParam1);
	func_302(uParam0, bParam2);
	func_299(uParam0, bParam3);
}

void func_299(var uParam0, bool bParam1)
{
	func_300(&(uParam0->f_41), bParam1);
}

void func_300(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_226(uParam0[iVar0]);
		}
		else
		{
			func_301(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_301(var uParam0, bool bParam1)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (unk_0x508CDC652F5361B5(*uParam0))
		{
			unk_0xE6451C2F193342C7(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x59E393B344098656(uParam0);
		}
		else
		{
			unk_0x13A78FCE42E3B132(*uParam0);
		}
	}
}

void func_302(var uParam0, bool bParam1)
{
	func_303(&(uParam0->f_35), bParam1);
}

void func_303(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_262(uParam0[iVar0]);
		}
		else
		{
			func_304(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_304(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		unk_0x55B23FE400FCEA6B(*uParam0, 0);
		if (unk_0xA6A089369417736E(*uParam0) && unk_0x930E64CB0285CAEC(*uParam0, 1))
		{
			unk_0x3D81769BEC61BFF8(uParam0);
		}
	}
}

void func_305(var uParam0, int iParam1)
{
	func_306(&(uParam0->f_28), iParam1);
}

void func_306(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_264(uParam0[iVar0]);
		}
		else
		{
			func_307(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_307(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (!unk_0xF68107C40359970C(*uParam0))
		{
			unk_0x006574E87E6F1942(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xCA2872F050840231(*uParam0);
			}
			unk_0xABC2CA6F28903308(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x50274A7EACA3133A(*uParam0, 0);
			}
		}
		unk_0xB3822DB3D538C8F3(uParam0);
	}
}

void func_308(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43014)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43013 = 0;
	Global_43015 = 0;
	Global_43052 = 15;
	Global_63151 = 0;
	Global_63152 = 0;
}

void func_309(char* sParam0)
{
	if (!unk_0xACC32B78196FBC2A(sParam0))
	{
	}
}

void func_310(var uParam0)
{
	*uParam0 = -1;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_311()
{
	func_309("Running start routines.");
	Global_113104++;
}

int func_312(int iParam0)
{
	if (!func_36(iParam0))
	{
		return func_47(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

