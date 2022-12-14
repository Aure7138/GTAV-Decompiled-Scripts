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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	struct<28> Local_37 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786468, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 16;
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
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	char[] cLocal_240[8] = 0;
	var uLocal_241 = 0;
	int iLocal_242 = 0;
	var uLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = -1;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 1000;
	var uLocal_264 = 1000;
	var uLocal_265 = 0;
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_67 = -1;
	iLocal_238 = -1;
	iLocal_239 = -1;
	StringCopy(&cLocal_240, "PMRAUD", 8);
	iLocal_252 = -1;
	iLocal_253 = -1;
	unk_0xB65977CD1EC089B5(1);
	if (unk_0x55EEDBBFDC6E810F(3))
	{
		func_94(2);
		func_93();
	}
	func_87();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (func_86())
		{
			iLocal_239 = -1;
		}
		else if (iLocal_239 == -1)
		{
			iLocal_239 = unk_0xA5E11AF0A2B928C1();
		}
		func_1();
	}
}

void func_1()
{
	char cVar0[32];
	struct<3> Var8;
	int iVar11;
	
	switch (iLocal_36)
	{
		case 0:
			unk_0x852EC2A7DE66202D(Local_37.f_10);
			if (Local_37.f_11 != 0)
			{
				unk_0x852EC2A7DE66202D(Local_37.f_11);
			}
			unk_0xA3C681843B51A4CC("PRECOV", 0);
			if (unk_0x578F9DB3098790E9(0))
			{
				if (unk_0x7DE17ACDD8BA2642(Global_112358.f_222[0]) && unk_0xFBD273FDBCF0C5BD(Global_112358.f_222[0], 0))
				{
					iLocal_244 = Global_112358.f_222[0];
					Global_112358.f_222[0] = 0;
					unk_0x85BAE84748AD1A23(iLocal_244, 1, 1);
					Local_37.f_7 = unk_0x504B9BB48D41C264(iLocal_244);
					unk_0xE0A291F406691F03(Local_37.f_7);
					unk_0x9C56520AE72AFDBF(Local_37.f_7, 1);
				}
				if (unk_0x7DE17ACDD8BA2642(Global_112358.f_225[0]))
				{
					iLocal_245 = Global_112358.f_225[0];
					Global_112358.f_225[0] = 0;
					unk_0x85BAE84748AD1A23(iLocal_245, 1, 1);
					Local_37.f_8 = unk_0x504B9BB48D41C264(iLocal_245);
					unk_0x8386356641D0DED1(iLocal_245, iLocal_251);
					unk_0xCFFDA1550DF82B52(iLocal_245, 0);
					unk_0x55B25C3B4CEEEF4B(iLocal_245, 5);
					unk_0x71A535529C1CA5DF(iLocal_245, 1);
					unk_0x7FE5E05BE63F6CB8(iLocal_245, 23, 1);
					if (unk_0x6CEF99E452573979(Local_37.f_7))
					{
						if (Local_37.f_26)
						{
							unk_0x45583CDA541E788E(iLocal_245, 1);
							unk_0xA8836C5BA9E0DA7D(iLocal_245, 1, 4096, -1);
						}
						else
						{
							unk_0x45583CDA541E788E(iLocal_245, 0);
						}
					}
					if (Local_37.f_20)
					{
						unk_0xCBDC2B59922F92C3(iLocal_245, joaat("weapon_pistol"), 120, 0, 0);
						unk_0xCBDC2B59922F92C3(iLocal_245, joaat("weapon_microsmg"), 120, 1, 1);
					}
					unk_0xE0A291F406691F03(Local_37.f_8);
					unk_0x03879CC8EF9E3635(iLocal_245, 0, 0, 0, Local_37.f_27, 0, 0, 0, 0);
					func_85(&uLocal_73, 3, iLocal_245, "ABIGAIL", 0, 1);
				}
				if (unk_0x7DE17ACDD8BA2642(Global_112358.f_225[1]))
				{
					iLocal_246 = Global_112358.f_225[1];
					Global_112358.f_225[1] = 0;
					unk_0x85BAE84748AD1A23(iLocal_246, 1, 1);
					Local_37.f_9 = unk_0x504B9BB48D41C264(iLocal_246);
					unk_0x8386356641D0DED1(iLocal_246, iLocal_251);
					unk_0xCFFDA1550DF82B52(iLocal_246, 0);
					unk_0x55B25C3B4CEEEF4B(iLocal_246, 5);
					unk_0x71A535529C1CA5DF(iLocal_246, 1);
					unk_0x7FE5E05BE63F6CB8(iLocal_246, 23, 1);
					if (unk_0x6CEF99E452573979(Local_37.f_7))
					{
						if (Local_37.f_26)
						{
							unk_0x45583CDA541E788E(iLocal_246, 1);
							unk_0xA8836C5BA9E0DA7D(iLocal_246, 1, 4096, -1);
						}
						else
						{
							unk_0x45583CDA541E788E(iLocal_246, 0);
						}
					}
					unk_0xE0A291F406691F03(Local_37.f_9);
					unk_0x03879CC8EF9E3635(iLocal_246, 0, 0, 0, Local_37.f_27, 0, 0, 0, 0);
				}
				if ((!unk_0x7DE17ACDD8BA2642(iLocal_245) || !unk_0x66599E73DBA5A850(iLocal_245)) && (!unk_0x7DE17ACDD8BA2642(iLocal_246) || !unk_0x66599E73DBA5A850(iLocal_246)))
				{
					uLocal_249 = func_84(iLocal_244, 1, 0);
					StringCopy(&cVar0, "STOP_THIEF_", 32);
					StringConCat(&cVar0, &(Local_37.f_12), 32);
					func_83(&cVar0, 7500, 1);
					func_82(&(Local_37.f_22), 10000);
					iLocal_238 = 0;
					iLocal_68 = 0;
					iLocal_69 = 0;
					if (Local_37.f_19 != -1)
					{
						iLocal_67 = (unk_0xA5E11AF0A2B928C1() + Local_37.f_19);
					}
				}
				iLocal_36++;
			}
			break;
		
		case 1:
			if (((((unk_0x7DE17ACDD8BA2642(iLocal_245) && unk_0x66599E73DBA5A850(iLocal_245)) || (unk_0x7DE17ACDD8BA2642(iLocal_246) && unk_0x66599E73DBA5A850(iLocal_246))) || ((Local_37.f_17 && unk_0x6CEF99E452573979(Local_37.f_7)) && !unk_0xE0D346789C5160EB(iLocal_245, iLocal_244, 0))) || ((Local_37.f_17 && unk_0x6CEF99E452573979(Local_37.f_7)) && !unk_0xE0D346789C5160EB(iLocal_246, iLocal_244, 0))) || ((Local_37.f_18 && !unk_0xE0D346789C5160EB(iLocal_245, iLocal_244, 0)) && func_81(iLocal_245)))
			{
				if (Local_37.f_17 && unk_0x6CEF99E452573979(Local_37.f_7))
				{
					if (!unk_0x66599E73DBA5A850(iLocal_245) && unk_0xE0D346789C5160EB(iLocal_245, iLocal_244, 0))
					{
						unk_0xA21793A7000EBD92(iLocal_245);
					}
					if (!unk_0x66599E73DBA5A850(iLocal_246) && unk_0xE0D346789C5160EB(iLocal_246, iLocal_244, 0))
					{
						unk_0xA21793A7000EBD92(iLocal_246);
					}
				}
				if (unk_0x70CDFE65A7D509C2())
				{
					unk_0x8581263F2F024518();
				}
				if (unk_0xF0E4B64AC0B5660E())
				{
					unk_0xCD3C8E1022864F65(1);
				}
				if (func_86())
				{
					func_79();
				}
				iLocal_238 = -1;
				if (unk_0x0CBB7C273DED26E7(Local_37.f_10) && (Local_37.f_11 == 0 || unk_0x0CBB7C273DED26E7(Local_37.f_11)))
				{
					if (unk_0x7DE17ACDD8BA2642(iLocal_245))
					{
						Var8 = { unk_0x2B615FCF11D3E1D3(iLocal_245, 1067030938, 1069547520) };
						uLocal_247 = unk_0x8D2015F36A52256C(joaat("pickup_money_med_bag"), Var8, Local_37.f_28, -1, 1, Local_37.f_10);
						unk_0xE0A291F406691F03(Local_37.f_10);
						if (unk_0xCE4AAA035282336C(uLocal_249))
						{
							unk_0x45533C09A6C9B409(&uLocal_249);
						}
						uLocal_249 = func_78(uLocal_247);
					}
					if (unk_0x7DE17ACDD8BA2642(iLocal_246) && Local_37.f_11 != 0)
					{
						Var8 = { unk_0x2B615FCF11D3E1D3(iLocal_246, 1067030938, 1069547520) };
						uLocal_248 = unk_0x8D2015F36A52256C(joaat("pickup_money_med_bag"), Var8, Local_37.f_29, -1, 1, Local_37.f_11);
						unk_0xE0A291F406691F03(Local_37.f_11);
						if (unk_0xCE4AAA035282336C(uLocal_250))
						{
							unk_0x45533C09A6C9B409(&uLocal_250);
						}
						uLocal_250 = func_78(uLocal_248);
					}
					func_77(&uLocal_254, 0, 0);
					iLocal_242 = 1;
					iLocal_36++;
				}
			}
			else
			{
				if (unk_0x3C3D6D026CF7F51B(iLocal_245, 0))
				{
					if (unk_0xCE4AAA035282336C(uLocal_250))
					{
						unk_0x45533C09A6C9B409(&uLocal_250);
					}
					if (!unk_0xCE4AAA035282336C(uLocal_249))
					{
						uLocal_249 = func_84(unk_0x95DC39736F6748E3(iLocal_245, 0), 1, 0);
					}
				}
				else
				{
					if (unk_0xCE4AAA035282336C(uLocal_249))
					{
						unk_0x45533C09A6C9B409(&uLocal_249);
					}
					if (!unk_0xCE4AAA035282336C(uLocal_250))
					{
						uLocal_250 = func_74(iLocal_245, 1, 145);
					}
				}
				func_46(&uLocal_254, iLocal_245, 0, 0, 1, 1, 1);
				if (iLocal_67 != -1)
				{
					if (unk_0xA5E11AF0A2B928C1() > iLocal_67)
					{
						func_45();
					}
					else
					{
						iVar11 = func_44(unk_0x3CDF9E9E483AADE1((iLocal_67 - unk_0xA5E11AF0A2B928C1())), 0, Local_37.f_19);
						if (iVar11 <= 10000)
						{
							func_40((Local_37.f_19 - iVar11), Local_37.f_19, "UPLOAD", 9, 10000, 1, 2);
						}
						else
						{
							func_40((Local_37.f_19 - iVar11), Local_37.f_19, "UPLOAD", 9, 0, 1, 2);
						}
					}
				}
				if (unk_0x7DE17ACDD8BA2642(iLocal_245))
				{
					if (func_39(unk_0xC1A5EC5C986B98AD(), iLocal_245, 1) > 500f)
					{
						func_45();
					}
					else if (unk_0xCE4AAA035282336C(uLocal_249))
					{
						func_38(uLocal_249, iLocal_245, 500f, 0.8f, 0);
					}
				}
				if (unk_0x7DE17ACDD8BA2642(iLocal_246))
				{
					if (func_39(unk_0xC1A5EC5C986B98AD(), iLocal_246, 1) > 500f)
					{
						func_45();
					}
					else if (unk_0xCE4AAA035282336C(uLocal_250))
					{
						func_38(uLocal_250, iLocal_246, 500f, 0.8f, 0);
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x0E0433D7F75E162D(uLocal_247) || unk_0x923599D48C8BCBED(uLocal_247))
			{
				if (unk_0x0E0433D7F75E162D(uLocal_247))
				{
					unk_0x7E131AB8520C5824(uLocal_247);
				}
				if (unk_0xCE4AAA035282336C(uLocal_249))
				{
					unk_0x45533C09A6C9B409(&uLocal_249);
				}
			}
			if (!unk_0x0E0433D7F75E162D(uLocal_248) || unk_0x923599D48C8BCBED(uLocal_248))
			{
				if (unk_0x0E0433D7F75E162D(uLocal_248))
				{
					unk_0x7E131AB8520C5824(uLocal_248);
				}
				if (unk_0xCE4AAA035282336C(uLocal_250))
				{
					unk_0x45533C09A6C9B409(&uLocal_250);
				}
			}
			if (!unk_0xCE4AAA035282336C(uLocal_249) && !unk_0xCE4AAA035282336C(uLocal_250))
			{
				if (unk_0xF356C80F3E8D2812(unk_0x93E99A2DBCBA9CFA(), 0))
				{
					if (!iLocal_71)
					{
						func_83("LOSE_WANTED", 7500, 1);
						iLocal_71 = 1;
					}
				}
				else
				{
					unk_0x8581263F2F024518();
					func_37();
				}
			}
			else if ((unk_0x0E0433D7F75E162D(uLocal_247) && func_36(unk_0xC1A5EC5C986B98AD(), unk_0x55AE93A6E3B0AE8F(uLocal_247), 1) > 500f) || (unk_0x0E0433D7F75E162D(uLocal_248) && func_36(unk_0xC1A5EC5C986B98AD(), unk_0x55AE93A6E3B0AE8F(uLocal_248), 1) > 500f))
			{
				func_45();
			}
			else if (iLocal_242 && func_34())
			{
				unk_0x8581263F2F024518();
				StringCopy(&cVar0, "PKUP_", 32);
				StringConCat(&cVar0, &(Local_37.f_12), 32);
				func_83(&cVar0, 7500, 1);
				iLocal_242 = 0;
			}
			break;
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_245) && !unk_0x66599E73DBA5A850(iLocal_245))
	{
		if ((unk_0x7DE17ACDD8BA2642(iLocal_244) && unk_0xFBD273FDBCF0C5BD(iLocal_244, 0)) && !iLocal_68)
		{
			if (!func_33(iLocal_245, joaat("script_task_perform_sequence"), 1))
			{
				unk_0xDBC7406226B5540E(&uLocal_243);
				unk_0xCFAA9546D1402590(0, iLocal_244, 31, 10000);
				unk_0xB8194851FFF54D3B(0, iLocal_244, unk_0xC1A5EC5C986B98AD(), 8, 30f, Local_37.f_16, 1000f, 0f, 1);
				unk_0xF2CFC6EC8C85FA78(uLocal_243);
				unk_0x3D7110D966B0CEA2(iLocal_245, uLocal_243);
				unk_0x63EF69C6969A3D26(&uLocal_243);
				iLocal_68 = 1;
			}
		}
		else if (((func_33(iLocal_245, joaat("script_task_perform_sequence"), 1) && unk_0xD64D855C3A010BF0(iLocal_245) < 1) && !iLocal_69) && (((((unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), Local_37, Local_37.f_3, Local_37.f_6, 0, 1, 0) || unk_0x66681C67B07D3657(iLocal_245, 124)) || unk_0x66681C67B07D3657(iLocal_245, 125)) || unk_0x66681C67B07D3657(iLocal_245, 126)) || unk_0x66681C67B07D3657(iLocal_245, 23)) || func_32(Global_112358.f_35, 134217728)))
		{
			unk_0xB8194851FFF54D3B(iLocal_245, iLocal_244, unk_0xC1A5EC5C986B98AD(), 8, 30f, Local_37.f_16, 1000f, 0f, 1);
			iLocal_69 = 1;
		}
		else if ((!func_33(iLocal_245, joaat("script_task_perform_sequence"), 1) && !func_33(iLocal_245, joaat("script_task_vehicle_mission"), 1)) || !unk_0x3C3D6D026CF7F51B(iLocal_245, 0))
		{
			if (!func_33(iLocal_245, joaat("script_task_smart_flee_ped"), 1))
			{
				unk_0xC6C9BF71106ABCAC(iLocal_245, unk_0xC1A5EC5C986B98AD(), 1000f, -1, 0, 1);
			}
		}
		else if (unk_0xE0D346789C5160EB(iLocal_245, iLocal_244, 1) && (((unk_0x248929CB6622481D(iLocal_244, 0, 3000) || unk_0x248929CB6622481D(iLocal_244, 1, 3000)) || unk_0x248929CB6622481D(iLocal_244, 2, 8000)) || unk_0x248929CB6622481D(iLocal_244, 3, 8000)))
		{
			if (!func_33(iLocal_245, joaat("script_task_leave_vehicle"), 1))
			{
				unk_0xD99DE4ACE73B0000(iLocal_245, iLocal_244, 0);
			}
		}
		if (Local_37.f_20)
		{
			if (!bLocal_70)
			{
				if ((((unk_0x7559C38E6535AB89(iLocal_245, unk_0xC1A5EC5C986B98AD(), 1) || unk_0x7559C38E6535AB89(iLocal_244, unk_0xC1A5EC5C986B98AD(), 1)) || unk_0x66681C67B07D3657(iLocal_245, 124)) || unk_0x66681C67B07D3657(iLocal_245, 125)) || unk_0x66681C67B07D3657(iLocal_245, 126))
				{
					bLocal_70 = true;
				}
			}
			if (bLocal_70)
			{
				if ((unk_0xF5F493B789EA063E(iLocal_245, joaat("script_task_perform_sequence")) == 1 && unk_0xD64D855C3A010BF0(iLocal_245) == 1) || unk_0xF5F493B789EA063E(iLocal_245, joaat("script_task_vehicle_mission")) == 1)
				{
					if (!unk_0x654D26EF23C82D70(iLocal_245))
					{
						unk_0x248CD16D76130942(iLocal_245, joaat("weapon_microsmg"));
						unk_0x6855D2807847D85A(iLocal_245, unk_0xC1A5EC5C986B98AD(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
					}
				}
			}
		}
		if (unk_0x7DE17ACDD8BA2642(iLocal_244) && unk_0xFBD273FDBCF0C5BD(iLocal_244, 0))
		{
			if (!iLocal_72)
			{
				if ((func_33(iLocal_245, joaat("script_task_perform_sequence"), 1) && unk_0xD64D855C3A010BF0(iLocal_245) == 1) || func_33(iLocal_245, joaat("script_task_vehicle_mission"), 1))
				{
					if (unk_0xF6AFEDAAE44A2159("TAKINGS", 0, -1))
					{
						unk_0x03AC3DF6C3FAD811(-1, "TAKINGS_TIRES_PEELAWAY_master", iLocal_244, 0, 0, 0);
						iLocal_72 = 1;
					}
				}
			}
		}
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_246) && !unk_0x66599E73DBA5A850(iLocal_246))
	{
		if (!unk_0x3C3D6D026CF7F51B(iLocal_246, 0) && !func_33(iLocal_246, joaat("script_task_smart_flee_ped"), 1))
		{
			unk_0xC6C9BF71106ABCAC(iLocal_246, unk_0xC1A5EC5C986B98AD(), 1000f, -1, 0, 1);
		}
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_245) && !unk_0x66599E73DBA5A850(iLocal_245))
	{
		if (unk_0xDA70CA6A0D1738D3(iLocal_245) && !unk_0x3C3D6D026CF7F51B(iLocal_245, 0))
		{
			if (func_86())
			{
				func_79();
			}
		}
		else if (func_39(unk_0xC1A5EC5C986B98AD(), iLocal_245, 1) < 15f)
		{
			switch (iLocal_238)
			{
				case 0:
					if (func_31())
					{
						MemCopy(&cVar0, {Local_37.f_12}, 8);
						StringConCat(&cVar0, "_1", 32);
						MemCopy(&cVar0, {func_30(&cVar0)}, 8);
						if (func_7(&uLocal_73, &cLocal_240, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 1:
					if (func_31())
					{
						if (!unk_0x967D885AAF973497(iLocal_245))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							func_3(iLocal_245, &cVar0, 10);
							iLocal_239 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 2:
					if (func_31() && (unk_0xA5E11AF0A2B928C1() - iLocal_239) > 3500)
					{
						MemCopy(&cVar0, {Local_37.f_12}, 8);
						StringConCat(&cVar0, "_3", 32);
						MemCopy(&cVar0, {func_30(&cVar0)}, 8);
						if (func_7(&uLocal_73, &cLocal_240, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 3:
					if (func_31() && (unk_0xA5E11AF0A2B928C1() - iLocal_239) > 1500)
					{
						if (!unk_0x967D885AAF973497(iLocal_245))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							func_3(iLocal_245, &cVar0, 10);
							iLocal_239 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_238 = (iLocal_238 - 1);
						}
					}
					break;
				}
			}
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_245))
	{
		if (unk_0x66599E73DBA5A850(iLocal_245))
		{
			if (Local_37.f_21)
			{
				func_2(1);
				func_45();
			}
		}
		else if (Local_37.f_27)
		{
			if (iLocal_252 == -1)
			{
				if (!unk_0xDA70CA6A0D1738D3(iLocal_245))
				{
					iLocal_252 = unk_0xA5E11AF0A2B928C1();
				}
			}
			else if ((unk_0xA5E11AF0A2B928C1() - iLocal_252) > 2000)
			{
				unk_0x03879CC8EF9E3635(iLocal_245, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_246))
	{
		if (unk_0x66599E73DBA5A850(iLocal_246))
		{
			if (Local_37.f_21)
			{
				func_2(1);
				func_45();
			}
		}
		else if (Local_37.f_27)
		{
			if (iLocal_253 == -1)
			{
				if (!unk_0xDA70CA6A0D1738D3(iLocal_246))
				{
					iLocal_253 = unk_0xA5E11AF0A2B928C1();
				}
			}
			else if ((unk_0xA5E11AF0A2B928C1() - iLocal_253) > 2000)
			{
				unk_0x03879CC8EF9E3635(iLocal_246, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_2(int iParam0)
{
	Global_112358.f_220 = iParam0;
}

void func_3(int iParam0, char[4] cParam1, int iParam2)
{
	unk_0x824D23CC0FE1835A(iParam0, cParam1, func_4(iParam2), 1);
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

int func_5()
{
	return func_6(Global_112358.f_20, Global_112358.f_29);
}

int func_6(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
		case 5:
		case 7:
			return 0;
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
	}
	return iParam1;
}

bool func_7(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_29(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_8(sParam2, iParam3, 0);
}

int func_8(char* sParam0, int iParam1, bool bParam2)
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
					func_28();
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
		if (func_27(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_26();
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
				func_18();
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
				if (func_17())
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
			if (func_16())
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
			func_15();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_14();
		func_9();
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
		func_28();
	}
	return 0;
}

void func_9()
{
	if (!func_10())
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

int func_10()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_13())
	{
		return 0;
	}
	if (func_11(unk_0x93E99A2DBCBA9CFA()))
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

bool func_11(int iParam0)
{
	return func_12(iParam0, 20);
}

var func_12(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_13()
{
	return -1;
}

void func_14()
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

void func_15()
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

int func_16()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_17()
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

void func_18()
{
	if (func_25(14))
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
		Global_20383 = func_19();
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

int func_19()
{
	func_20();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_20()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_23(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_22(unk_0xC1A5EC5C986B98AD());
			if (func_21(iVar0) && (!func_25(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_21(Global_113648.f_2365.f_539.f_4321))
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

bool func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)
{
	if (func_21(iParam0))
	{
		return func_24(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_24(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

bool func_25(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_26()
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

bool func_27(int iParam0, int iParam1)
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

void func_28()
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

void func_29(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

struct<4> func_30(char* sParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam0, 16);
	switch (func_19())
	{
		case 0:
			StringConCat(&Var0, "_M", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "_F", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "_T", 16);
			break;
	}
	return Var0;
}

int func_31()
{
	if (func_86())
	{
		return 0;
	}
	if (unk_0x9BC2ED38FC730B62())
	{
		if (unk_0x70CDFE65A7D509C2())
		{
			return 0;
		}
	}
	return 1;
}

bool func_32(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_33(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF5F493B789EA063E(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_34()
{
	if (unk_0x70CDFE65A7D509C2())
	{
		return 0;
	}
	if (unk_0x9BC2ED38FC730B62())
	{
		if (func_86() && !func_35())
		{
			return 0;
		}
	}
	return 1;
}

int func_35()
{
	if (Global_22736 == 1)
	{
		return 1;
	}
	return 0;
}

float func_36(int iParam0, struct<3> Param1, int iParam4)
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

void func_37()
{
	func_94(1);
	func_93();
}

void func_38(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xCE4AAA035282336C(uParam0))
	{
		if ((unk_0x7DE17ACDD8BA2642(iParam1) && unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD())) && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			if (unk_0xA6B591D40DE982B5(iParam1))
			{
				if (unk_0xFBD273FDBCF0C5BD(unk_0x4DFB7A1A6909D574(iParam1), 0))
				{
					fVar1 = unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x37B37B8045788E6A(uParam0, 1);
						unk_0x5E3A54CF3E9DF9FC(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x37B37B8045788E6A(uParam0, 0);
						unk_0x5E3A54CF3E9DF9FC(uParam0, 255);
					}
				}
			}
			else if (unk_0x71904BD37B848CAF(iParam1))
			{
				if (!unk_0x66599E73DBA5A850(unk_0x9C8D7679C15E75FF(iParam1)))
				{
					fVar1 = unk_0x2E496FE654DA4166(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x37B37B8045788E6A(uParam0, 1);
						unk_0x5E3A54CF3E9DF9FC(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x37B37B8045788E6A(uParam0, 0);
						unk_0x5E3A54CF3E9DF9FC(uParam0, 255);
					}
				}
			}
		}
	}
}

float func_39(int iParam0, int iParam1, int iParam2)
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

void func_40(int iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_41(iParam0, uParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
}

void func_41(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_43(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655472.f_1 = 1;
		func_42(0, iVar0);
		Global_1655472.f_1177[iVar0] = uParam0;
		Global_1655472.f_1177.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1655472.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1655472.f_1177.f_194[iVar0] = uParam3;
		Global_1655472.f_1177.f_183[iVar0] = uParam4;
		Global_1655472.f_1177.f_216[iVar0] = uParam5;
		Global_1655472.f_1177.f_227[iVar0 /*3*/] = fParam6;
		Global_1655472.f_1177.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1655472.f_1177.f_258[iVar0] = iParam8;
		Global_1655472.f_1177.f_269[iVar0] = uParam9;
		Global_1655472.f_1177.f_312[iVar0] = iParam10;
		Global_1655472.f_1177.f_323[iVar0] = iParam11;
		Global_1655472.f_1177.f_334[iVar0] = iParam12;
		Global_1655472.f_1177.f_345[iVar0] = iParam13;
		Global_1655472.f_1172 = 1;
		Global_1655472.f_1177.f_356[iVar0] = iParam14;
		Global_1655472.f_1177.f_367[iVar0] = iParam15;
		Global_1655472.f_1177.f_378[iVar0] = iParam16;
		Global_1655472.f_1177.f_389[iVar0] = iParam17;
		Global_1655472.f_1177.f_400[iVar0] = iParam18;
		Global_1655472.f_1177.f_411[iVar0] = iParam19;
		Global_1655472.f_1177.f_422[iVar0] = iParam20;
		Global_1655472.f_1177.f_433[iVar0] = iParam21;
		Global_1655472.f_1177.f_444[iVar0] = iParam22;
		Global_1655472.f_1177.f_455[iVar0] = iParam23;
		Global_1655472.f_1177.f_466[iVar0] = iParam24;
		Global_1655472.f_1177.f_205[iVar0] = iParam25;
		Global_1655472.f_1177.f_477[iVar0] = iParam26;
		Global_1655472.f_1177.f_488[iVar0] = iParam27;
		Global_1655472.f_1177.f_499[iVar0] = iParam28;
		Global_1655472.f_1177.f_510[iVar0] = iParam29;
		Global_1655472.f_1177.f_521[iVar0] = iParam30;
		Global_1655472.f_1177.f_532[iVar0] = iParam31;
		Global_1655472.f_1177.f_543[iVar0] = iParam32;
		Global_1655472.f_1177.f_554[iVar0] = iParam33;
		Global_1655472.f_1177.f_565[iVar0] = iParam34;
		Global_1655472.f_1177.f_576[iVar0] = iParam35;
		Global_1655472.f_1177.f_587[iVar0] = iParam36;
	}
}

void func_42(int iParam0, int iParam1)
{
	unk_0xECDAB41968FF21A8(&(Global_1655472.f_7009[iParam0]), iParam1);
}

int func_43(int iParam0, int iParam1)
{
	return BitTest(Global_1655472.f_7009[iParam0], iParam1);
}

int func_44(int iParam0, int iParam1, int iParam2)
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

void func_45()
{
	func_94(2);
	func_93();
}

void func_46(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_47(uParam0, uParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_47(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
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
	if (func_73(iVar0))
	{
		func_72();
	}
	if (func_71(uParam1) && unk_0x51DF6895C236B231(uParam1))
	{
		iVar1 = 0;
		if (unk_0x71904BD37B848CAF(uParam1))
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
			if (func_66(uParam0, bParam7, bParam9, 0))
			{
				func_62(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_51(iVar0))
				{
					if ((unk_0xB71C73D0269747D5(uParam0->f_3) && !unk_0xB71C73D0269747D5(iVar0)) && unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
					{
						if ((iVar1 && !unk_0xF0E4B64AC0B5660E()) && uParam8)
						{
							if (!func_73(iVar0))
							{
								func_82(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x4310A0DB886F9FED("CMN_HINT", iVar0))
								{
									func_50(1);
								}
							}
						}
					}
				}
			}
			else if (func_51(iVar0))
			{
				if (unk_0xB71C73D0269747D5(uParam0->f_3) && !unk_0xB71C73D0269747D5(iVar0))
				{
					if (((unk_0x865259F0333CAA4B(iParam1) && iVar1) && !unk_0xF0E4B64AC0B5660E()) && uParam8)
					{
						if (!func_73(iVar0))
						{
							func_82(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x4310A0DB886F9FED("CMN_HINT", iVar0))
							{
								func_50(1);
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
				if (func_73(sParam5))
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
						func_77(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x6DFDDBD2D0067A98(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x80A3F4E694565F6A(6) == 3 || unk_0x80A3F4E694565F6A(6) == 4)
					{
						func_77(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x2AE2D64A5E125BF2(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x80A3F4E694565F6A(4) == 3 || unk_0x80A3F4E694565F6A(4) == 4)
					{
						func_77(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x81F36522FE1E02B8(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x80A3F4E694565F6A(5) == 3 || unk_0x80A3F4E694565F6A(5) == 4)
					{
						func_77(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA8F00D68C81685D6(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x80A3F4E694565F6A(2) == 3 || unk_0x80A3F4E694565F6A(2) == 4)
					{
						func_77(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8C9D6596CF19A4E2() == 3 || unk_0x8C9D6596CF19A4E2() == 4)
				{
					func_77(uParam0, iVar0, 1);
				}
			}
			if (!func_66(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_49(uParam0))
				{
					func_48(uParam0);
				}
			}
		}
	}
	else
	{
		func_77(uParam0, iVar0, 0);
	}
}

void func_48(var uParam0)
{
	if (func_71(unk_0xC1A5EC5C986B98AD()))
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

int func_49(var uParam0)
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

int func_50(bool bParam0)
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

int func_51(char* sParam0)
{
	if (!func_52(1, 1, 0))
	{
		if ((!unk_0x2AC37494BBF1DB16(sParam0) && func_73(sParam0)) || func_73("CMN_HINT"))
		{
			unk_0xCD3C8E1022864F65(1);
		}
		return 0;
	}
	switch (Global_43257)
	{
		case 0:
		case 3:
			if (func_50(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_50(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_50(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_52(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0;
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
	if (func_61(0))
	{
		return 0;
	}
	if (func_60())
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
	if ((func_59() || func_58(Global_4718592.f_166301)) || func_57())
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			uVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			iVar1 = func_56(unk_0xC1A5EC5C986B98AD(), 0);
			if (((unk_0xC78C3E6F7A5988D9(uVar0, iVar1) || (unk_0x504B9BB48D41C264(uVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x504B9BB48D41C264(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x504B9BB48D41C264(iVar0) == joaat("riot2") && iVar1 == 0) && func_55(iVar0, 10)) && unk_0xCA36A30E79A35222(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1962010)
	{
		return 0;
	}
	if (func_53(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	return 1;
}

int func_53(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (func_54(iParam0, 1, 1))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
		else if ((Global_1575060 && iParam0 == unk_0x93E99A2DBCBA9CFA()) && func_54(iParam0, 1, 0))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

int func_54(int iParam0, bool bParam1, bool bParam2)
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

int func_55(int iParam0, int iParam1)
{
	if (unk_0xFBD273FDBCF0C5BD(uParam0, 0))
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

int func_56(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x66599E73DBA5A850(iParam0))
	{
		if (unk_0x3C3D6D026CF7F51B(iParam0, iParam1))
		{
			uVar0 = unk_0x95DC39736F6748E3(iParam0, iParam1);
			if (unk_0x7DE17ACDD8BA2642(uVar0))
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

var func_57()
{
	return Global_2683862.f_19;
}

bool func_58(int iParam0)
{
	return iParam0 == 51;
}

var func_59()
{
	return Global_2683862.f_18;
}

bool func_60()
{
	return unk_0xA5E11AF0A2B928C1() <= Global_23270.f_6321 + 100;
}

int func_61(int iParam0)
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

void func_62(var uParam0, int iParam1, struct<3> Param2, int iParam5)
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
	if (unk_0x055111B11E6624FD(uParam1, 0))
	{
		func_77(uParam0, 0, 0);
	}
	if (func_65(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x71904BD37B848CAF(iParam1))
		{
			iVar0 = unk_0x9C8D7679C15E75FF(iParam1);
			if (!unk_0x3C3D6D026CF7F51B(iVar0, 0))
			{
				if (unk_0x60A06DE259634304(iVar0))
				{
					if (!func_63())
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

bool func_63()
{
	return func_64(unk_0x93E99A2DBCBA9CFA());
}

int func_64(int iParam0)
{
	if (unk_0x504B9BB48D41C264(unk_0xF2CFBB1105511E1A(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_65(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_66(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_70(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_69(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_69(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_70(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_49(uParam0))
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
						if (!func_70(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_69(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_69(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_70(bParam1, bParam2, bParam3))
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
					if (!func_70(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_69(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_69(bParam1, bParam2, bParam3) || unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
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
				else if (!func_70(bParam1, bParam2, bParam3))
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
						if (func_68(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_67(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1) || func_67(bParam1, bParam2, bParam3))
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
					else if (func_68(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_49(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_52(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_72();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_67(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_52(bParam0, bParam1, bParam2))
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

int func_68(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_52(bParam0, bParam1, bParam2))
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

int func_69(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_52(bParam0, bParam1, bParam2))
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

int func_70(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_52(bParam0, bParam1, bParam2))
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

int func_71(int iParam0)
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

void func_72()
{
	unk_0xECDAB41968FF21A8(&Global_8254, 4);
}

bool func_73(char* sParam0)
{
	unk_0x56C9BC27C0FF68D7(sParam0);
	return unk_0x6A92D111B5409879(0);
}

var func_74(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_75(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCE4AAA035282336C(uVar0)) && unk_0x42FA33BDEDF21186(&(Global_2028[iParam2 /*29*/].f_3)))
	{
		unk_0x4049FDC177C92D4B(uVar0, &(Global_2028[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_75(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7DE17ACDD8BA2642(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x53B496178AE44636(iParam0);
	if (unk_0xA6B591D40DE982B5(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_76(unk_0xA26A9A07F761D8F8(), 1f, 1f));
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
		unk_0x225EB85DBC38E707(uVar0, func_76(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
		unk_0x3BCF1F6A3573A1DF(uVar0, bParam1);
	}
	else if (unk_0x4E7A9806173C3AD1(iParam0))
	{
		unk_0x225EB85DBC38E707(uVar0, func_76(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_76(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_77(var uParam0, int iParam1, int iParam2)
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
		if (func_73(uParam0->f_3))
		{
			unk_0xCD3C8E1022864F65(1);
		}
	}
	if (!unk_0xB71C73D0269747D5(sVar0))
	{
		if (func_73(sVar0))
		{
			unk_0xCD3C8E1022864F65(1);
		}
	}
}

int func_78(var uParam0)
{
	var uVar0;
	
	if (!unk_0x0E0433D7F75E162D(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x76C6595450F90E77(uParam0);
	unk_0x225EB85DBC38E707(uVar0, func_76(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
	return uVar0;
}

void func_79()
{
	Global_20591 = 0;
	func_80();
}

void func_80()
{
	unk_0x782234C275AFBA24();
	Global_22736 = 0;
	if (unk_0x0DCB385165FDE763())
	{
		unk_0xD6625E11483B2324(0);
		Global_21725 = 6;
	}
}

int func_81(int iParam0)
{
	if (((((unk_0x66681C67B07D3657(uParam0, 124) || unk_0x66681C67B07D3657(iParam0, 125)) || unk_0x66681C67B07D3657(iParam0, 126)) || unk_0x66681C67B07D3657(iParam0, 42)) || (unk_0x85D2845BAE56DBF8(iParam0, unk_0xC1A5EC5C986B98AD()) && unk_0x66681C67B07D3657(iParam0, 29))) || unk_0x7559C38E6535AB89(iParam0, unk_0xC1A5EC5C986B98AD(), 1))
	{
		return 1;
	}
	else
	{
		unk_0x5CE354E3C73D2002(iParam0);
	}
	return 0;
}

void func_82(char* sParam0, int iParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
}

void func_83(char[4] cParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x7FC9F66A5DE18E09(cParam0);
	unk_0xAC8CD22C06543F95(iParam1, 1);
}

int func_84(var uParam0, bool bParam1, bool bParam2)
{
	return func_75(uParam0, !bParam1, bParam2);
}

void func_85(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_86()
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
	{
		return 1;
	}
	return 0;
}

void func_87()
{
	func_88(&Local_37);
	unk_0xDA95D0C19E737224("relThief", &iLocal_251);
	unk_0x0133FF6E23A1DCA4(5, joaat("player"), iLocal_251);
	unk_0x0133FF6E23A1DCA4(5, iLocal_251, joaat("player"));
	switch (func_19())
	{
		case 0:
			func_85(&uLocal_73, 0, unk_0xC1A5EC5C986B98AD(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_85(&uLocal_73, 1, unk_0xC1A5EC5C986B98AD(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_85(&uLocal_73, 2, unk_0xC1A5EC5C986B98AD(), "TREVOR", 0, 1);
			break;
	}
	unk_0xFF2AF80F9EC7704C(0.1f);
}

void func_88(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	Var0 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0) };
	Var0.f_2 = 0f;
	iVar3 = 0;
	iVar4 = 0;
	unk_0xECDAB41968FF21A8(&iVar3, 3);
	unk_0xECDAB41968FF21A8(&iVar3, 4);
	unk_0xECDAB41968FF21A8(&iVar4, 3);
	unk_0xECDAB41968FF21A8(&iVar4, 4);
	unk_0xECDAB41968FF21A8(&iVar4, 8);
	switch (func_5())
	{
		case 0:
			uParam0->f_8 = joaat("a_m_m_eastsa_02");
			uParam0->f_10 = joaat("prop_cs_duffel_01b");
			uParam0->f_16 = 572;
			StringCopy(&(uParam0->f_12), "MON", 16);
			uParam0->f_20 = 1;
			uParam0->f_28 = iVar3;
			break;
		
		case 1:
			uParam0->f_8 = joaat("a_m_m_paparazzi_01");
			uParam0->f_9 = joaat("a_m_m_paparazzi_01");
			uParam0->f_10 = joaat("prop_pap_camera_01");
			uParam0->f_11 = joaat("prop_npc_phone");
			uParam0->f_16 = 60;
			uParam0->f_17 = 1;
			uParam0->f_18 = 1;
			StringCopy(&(uParam0->f_12), "PAP", 16);
			uParam0->f_19 = 60000;
			uParam0->f_21 = 1;
			StringCopy(&(uParam0->f_22), "PAP_HLP", 16);
			uParam0->f_26 = 0;
			uParam0->f_27 = 1;
			uParam0->f_28 = iVar4;
			uParam0->f_29 = iVar3;
			break;
	}
	switch (func_92())
	{
		case 5:
			*uParam0 = { 178.0117f, 202.3507f, 102.9037f };
			uParam0->f_3 = { 514.5839f, 78.78811f, 111.1864f };
			uParam0->f_6 = 131.0625f;
			break;
		
		case 6:
			*uParam0 = { 418.5796f, -636.2899f, 25.43758f };
			uParam0->f_3 = { 400.2468f, -826.1611f, 44.10468f };
			uParam0->f_6 = 95.375f;
			break;
		
		case 7:
			*uParam0 = { -1368.458f, -238.4543f, 40.36241f };
			uParam0->f_3 = { -1475.669f, -127.621f, 65.65466f };
			uParam0->f_6 = 158.25f;
			break;
		
		case 11:
			if (func_89(func_92(), Var0))
			{
				*uParam0 = { -602.3785f, 258.2744f, 79.0293f };
				uParam0->f_3 = { -469.064f, 244.8735f, 97.88577f };
				uParam0->f_6 = 70.125f;
			}
			else
			{
				*uParam0 = { -621.5889f, 262.0915f, 78.67405f };
				uParam0->f_3 = { -494.7666f, 248.2196f, 97.88564f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 12:
			if (func_89(func_92(), Var0))
			{
				*uParam0 = { 137.2073f, 392.7482f, 110.9443f };
				uParam0->f_3 = { 297.2104f, 336.0269f, 120.3525f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { 191.3225f, 364.9949f, 104.5153f };
				uParam0->f_3 = { 320.3688f, 325.2877f, 120.2689f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 13:
			if (func_89(func_92(), Var0))
			{
				*uParam0 = { -221.6586f, 6310.131f, 28.40555f };
				uParam0->f_3 = { -319.8287f, 6211.665f, 46.19521f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { -260.2809f, 6273.981f, 28.42822f };
				uParam0->f_3 = { -371.5657f, 6164.586f, 46.1894f };
				uParam0->f_6 = 95.375f;
			}
			break;
		
		case 14:
			*uParam0 = { -2313.765f, 4159.022f, 29.59011f };
			uParam0->f_3 = { -2140.887f, 4437.057f, 72.619f };
			uParam0->f_6 = 113.5f;
			break;
	}
}

int func_89(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 5:
			if (func_90(func_91(Param1 - Vector(0f, 174.58f, 335.5574f)), func_91(Vector(0f, 174.8707f, 334.8261f) - Vector(0f, 174.58f, 335.5574f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			if (func_90(func_91(Param1 - Vector(0f, -711.023f, 393.0992f)), func_91(Vector(0f, -715.4372f, 393.1879f) - Vector(0f, -711.023f, 393.0992f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 7:
			if (func_90(func_91(Param1 - Vector(0f, -215.2002f, -1423.254f)), func_91(Vector(0f, -215.1443f, -1420.71f) - Vector(0f, -215.2002f, -1423.254f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 11:
			if (func_90(func_91(Param1 - Vector(0f, 274.9096f, -564.5655f)), func_91(Vector(0f, 275.0867f, -567.1105f) - Vector(0f, 274.9096f, -564.5655f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 12:
			if (func_90(func_91(Param1 - Vector(0f, 338.8084f, 225.5057f)), func_91(Vector(0f, 338.4193f, 226.8374f) - Vector(0f, 338.8084f, 225.5057f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 13:
			if (func_90(func_91(Param1 - Vector(0f, 6256.5f, -299.9329f)), func_91(Vector(0f, 6255.179f, -301.1977f) - Vector(0f, 6256.5f, -299.9329f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 14:
			if (func_90(func_91(Param1 - Vector(0f, 4287.951f, -2200.204f)), func_91(Vector(0f, 4289.739f, -2199.26f) - Vector(0f, 4287.951f, -2200.204f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

float func_90(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_91(struct<3> Param0)
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

int func_92()
{
	return Global_112358.f_20;
}

void func_93()
{
	if (unk_0x7DE17ACDD8BA2642(iLocal_245))
	{
		if (!unk_0x66599E73DBA5A850(iLocal_245))
		{
			unk_0xC6C9BF71106ABCAC(iLocal_245, unk_0xC1A5EC5C986B98AD(), 1000f, -1, 0, 1);
		}
		unk_0x1EEF71E3CDD868D3(&iLocal_245);
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_246))
	{
		if (!unk_0x66599E73DBA5A850(iLocal_246))
		{
			unk_0xC6C9BF71106ABCAC(iLocal_246, unk_0xC1A5EC5C986B98AD(), 1000f, -1, 0, 1);
		}
		unk_0x1EEF71E3CDD868D3(&iLocal_246);
	}
	if (unk_0x7DE17ACDD8BA2642(iLocal_244))
	{
		unk_0x0E4B6CF706BE8AA4(&iLocal_244);
	}
	if (unk_0x0E0433D7F75E162D(uLocal_247))
	{
		unk_0x7E131AB8520C5824(uLocal_247);
	}
	if (unk_0x0E0433D7F75E162D(uLocal_248))
	{
		unk_0x7E131AB8520C5824(uLocal_248);
	}
	if (unk_0xCE4AAA035282336C(uLocal_249))
	{
		unk_0x45533C09A6C9B409(&uLocal_249);
	}
	if (unk_0xCE4AAA035282336C(uLocal_250))
	{
		unk_0x45533C09A6C9B409(&uLocal_250);
	}
	unk_0x9C56520AE72AFDBF(Local_37.f_7, 0);
	unk_0xFF2AF80F9EC7704C(1f);
	unk_0x28F88BFAD6397895(iLocal_251);
	unk_0x675D9C12C73D3DE7();
}

void func_94(int iParam0)
{
	Global_112358.f_22 = iParam0;
}

