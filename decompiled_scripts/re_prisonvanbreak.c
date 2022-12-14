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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 16;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
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
	struct<3> Local_219 = { 0, 0, 0 } ;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226[3] = { 0, 0, 0 };
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232[3] = { 0, 0, 0 };
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	var uLocal_243[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_260 = 0;
	bool bLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	var uLocal_269 = 0;
	int iLocal_270 = 0;
	struct<3> Local_271 = { 0, 0, 0 } ;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	bool bLocal_284 = 0;
	int iLocal_285 = 0;
	bool bLocal_286 = 0;
	bool bLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	var uLocal_292[2] = { 0, 0 };
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297[3] = { 0, 0, 0 };
	var uLocal_301[2] = { 0, 0 };
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
	Local_219 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x4B34601C5C56F3EE(11))
	{
		func_148();
	}
	if (func_95(Local_219, -1, 0, 0, 0))
	{
		func_92(-1);
	}
	else
	{
		unk_0xAFBDF6A5E54114C1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xC92F9F18E020B461() || iLocal_274)
		{
			unk_0x6D3F703013ED87D3("RE_CR", 0);
			switch (iLocal_46)
			{
				case 0:
					if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_219, 100f, 100f, 100f, 0, 1, 0))
					{
						func_148();
					}
					if (iLocal_47)
					{
						iLocal_46 = 1;
					}
					else
					{
						func_91();
						iLocal_48 = 1;
					}
					break;
				
				case 1:
					unk_0xFECBE8ED0E1259A5(unk_0x9E2D6C50374FCFA9());
					func_90();
					func_88();
					if (!func_87())
					{
						func_84();
					}
					if (!bLocal_49)
					{
						func_73();
					}
					if (!bLocal_50 && !bLocal_284)
					{
						func_69();
					}
					if (iLocal_266 && !bLocal_49)
					{
						func_68(iLocal_226[0]);
						func_68(iLocal_226[1]);
						func_68(iLocal_226[2]);
					}
					if ((!iLocal_266 && !bLocal_284) && func_87())
					{
						func_67(iLocal_232[0], &(uLocal_243[0]), 1, 0.7f);
						func_67(iLocal_232[0], &(uLocal_243[1]), 5, 0.7f);
						func_67(iLocal_232[0], &(uLocal_243[2]), 0, 0.7f);
						func_67(iLocal_232[0], &(uLocal_243[3]), 4, 0.7f);
						func_67(iLocal_232[1], &(uLocal_243[4]), 1, 0.7f);
						func_67(iLocal_232[1], &(uLocal_243[5]), 5, 0.7f);
						func_67(iLocal_232[1], &(uLocal_243[6]), 0, 0.7f);
						func_67(iLocal_232[1], &(uLocal_243[7]), 4, 0.7f);
						func_67(iLocal_232[2], &(uLocal_243[8]), 1, 0.7f);
						func_67(iLocal_232[2], &(uLocal_243[9]), 5, 0.7f);
						func_67(iLocal_232[2], &(uLocal_243[10]), 0, 0.7f);
						func_67(iLocal_232[2], &(uLocal_243[11]), 4, 0.7f);
						func_67(iLocal_236, &(uLocal_243[12]), 1, 0.7f);
						func_67(iLocal_236, &(uLocal_243[13]), 5, 0.7f);
						func_67(iLocal_236, &(uLocal_243[14]), 0, 0.7f);
						func_67(iLocal_236, &(uLocal_243[15]), 4, 0.7f);
					}
					if (!iLocal_264)
					{
						func_65();
					}
					else
					{
						if (!bLocal_284)
						{
							func_64();
						}
						else if (!iLocal_281 && bLocal_49)
						{
							func_62();
						}
						if (!iLocal_285)
						{
							func_61();
						}
						func_60();
					}
					func_2();
					func_1();
					break;
			}
		}
		else
		{
			func_148();
		}
	}
}

void func_1()
{
}

void func_2()
{
	int iVar0;
	
	if (!iLocal_279)
	{
		if (unk_0x55B23FE400FCEA6B(iLocal_226[0], 0) || unk_0xF68107C40359970C(iLocal_226[0]))
		{
			func_59(&uLocal_54, 4);
			iLocal_279 = 1;
		}
	}
	if (!bLocal_260)
	{
		if ((unk_0x55B23FE400FCEA6B(iLocal_222, 0) || unk_0xF68107C40359970C(iLocal_222)) || unk_0xC96A660F9CAB40FC(iLocal_222))
		{
			unk_0xD69A0C3662175E68(joaat("prop_security_case_01"));
			if (unk_0x0152AA00FA3130F1(joaat("prop_security_case_01")))
			{
				Local_271 = { unk_0x9B2F53F9CB82F448(iLocal_222, 1067030938, 1069547520) };
				Local_271.f_2 = (Local_271.f_2 + 0.3f);
				uLocal_292[0] = unk_0x1EE09F99FEF19DAF(joaat("pickup_money_case"), Local_271 + Vector(-0.49f, 0f, 0f), -90f, 0f, 0f, 0, 5000, 2, 1, joaat("prop_security_case_01"));
				if (!unk_0x12DD4A0B247D9B4D(uLocal_301[0]))
				{
					uLocal_301[0] = func_57(uLocal_292[0]);
				}
				bLocal_260 = true;
				func_59(&uLocal_54, 5);
			}
		}
	}
	if (!bLocal_261)
	{
		if ((unk_0x55B23FE400FCEA6B(iLocal_223, 0) || unk_0xF68107C40359970C(iLocal_223)) || unk_0xC96A660F9CAB40FC(iLocal_223))
		{
			unk_0xD69A0C3662175E68(joaat("prop_security_case_01"));
			if (unk_0x0152AA00FA3130F1(joaat("prop_security_case_01")))
			{
				Local_271 = { unk_0x9B2F53F9CB82F448(iLocal_223, 1067030938, 1069547520) };
				Local_271.f_2 = (Local_271.f_2 + 0.3f);
				uLocal_292[1] = unk_0x1EE09F99FEF19DAF(joaat("pickup_money_case"), Local_271 + Vector(-0.49f, 0f, 0f), -90f, 0f, 0f, 0, 5000, 2, 1, joaat("prop_security_case_01"));
				if (!unk_0x12DD4A0B247D9B4D(uLocal_301[1]))
				{
					uLocal_301[1] = func_57(uLocal_292[1]);
				}
				bLocal_261 = true;
				func_59(&uLocal_54, 6);
			}
		}
	}
	if (!bLocal_284)
	{
		if (!iLocal_276)
		{
			if (unk_0xE5965CDF24F93A9F(iLocal_222))
			{
				if (unk_0x55B23FE400FCEA6B(iLocal_222, 0) || unk_0xF68107C40359970C(iLocal_222))
				{
					if (unk_0x0747E45CFF1F74AA(iLocal_222, unk_0xE2D3D51028F0428A(), 1))
					{
						unk_0xFFD8EB5462B07B59(&uLocal_295);
						iLocal_276 = 1;
						bLocal_50 = true;
						unk_0x9972EFADA7A2A47D(5, iLocal_267, joaat("player"));
						if (!unk_0xF68107C40359970C(iLocal_223))
						{
							unk_0xC1A74225341AA9FB(iLocal_223, unk_0xE2D3D51028F0428A(), 0, 16);
							unk_0xABC2CA6F28903308(iLocal_223, 1);
							unk_0xECA3A29060F3B861(iLocal_223, unk_0xE2D3D51028F0428A());
							unk_0x25D0F99524B26091(iLocal_223, 1);
							func_59(&uLocal_54, 5);
							func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!iLocal_275)
		{
			if (unk_0xE5965CDF24F93A9F(iLocal_223))
			{
				if (unk_0x55B23FE400FCEA6B(iLocal_223, 0) || unk_0xF68107C40359970C(iLocal_223))
				{
					if (unk_0x0747E45CFF1F74AA(iLocal_223, unk_0xE2D3D51028F0428A(), 1))
					{
						unk_0xFFD8EB5462B07B59(&uLocal_296);
						iLocal_275 = 1;
						bLocal_50 = true;
						unk_0x9972EFADA7A2A47D(5, iLocal_267, joaat("player"));
						if (!unk_0xF68107C40359970C(iLocal_222))
						{
							unk_0xC1A74225341AA9FB(iLocal_222, unk_0xE2D3D51028F0428A(), 0, 16);
							unk_0xABC2CA6F28903308(iLocal_222, 1);
							unk_0xECA3A29060F3B861(iLocal_222, unk_0xE2D3D51028F0428A());
							unk_0x25D0F99524B26091(iLocal_222, 1);
							func_39(&uLocal_54, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (func_38() || !unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), 310.6203f, 2642.854f, 43.5173f, 150f, 150f, 180f, 0, 1, 0))
		{
			if (unk_0xF68107C40359970C(iLocal_222) && unk_0xF68107C40359970C(iLocal_223))
			{
				if (func_38() && !unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_219, 50f, 50f, 50f, 0, 1, 0))
				{
					func_7();
				}
				if (bLocal_50 && !bLocal_49)
				{
					if (!unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), 310.6203f, 2642.854f, 43.5173f, 150f, 150f, 180f, 0, 1, 0))
					{
						func_6(5);
						func_7();
					}
				}
			}
			else if (!unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), 310.6203f, 2642.854f, 43.5173f, 200f, 200f, 180f, 0, 1, 0))
			{
				func_5();
			}
		}
	}
	if (bLocal_284)
	{
		if (func_38())
		{
			if (unk_0x55B23FE400FCEA6B(iLocal_222, 0) && unk_0x55B23FE400FCEA6B(iLocal_223, 0))
			{
				func_7();
			}
			if (bLocal_284)
			{
				if (unk_0xE5965CDF24F93A9F(iLocal_222))
				{
					if (!unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_222, 150f, 150f, 150f, 0, 0, 0))
					{
						if (!bLocal_50)
						{
							func_6(6);
						}
						func_7();
					}
				}
				if (!unk_0xE5965CDF24F93A9F(iLocal_223))
				{
					if (!unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_223, 150f, 150f, 150f, 0, 0, 0))
					{
						if (!bLocal_50)
						{
							func_6(6);
						}
						func_7();
					}
				}
			}
		}
	}
	else if (!iLocal_266 && !bLocal_49)
	{
		unk_0x13A2865660B9B033(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		unk_0xD69A0C3662175E68(joaat("ambulance"));
		unk_0x8FB472886552D737("random@countrysiderobbery");
		if (((unk_0x55B23FE400FCEA6B(iLocal_222, 0) && unk_0x55B23FE400FCEA6B(iLocal_223, 0)) && unk_0x0152AA00FA3130F1(joaat("ambulance"))) && unk_0x6F940C2636C076AD("random@countrysiderobbery"))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_295);
			unk_0xFFD8EB5462B07B59(&uLocal_296);
			func_59(&uLocal_54, 5);
			func_59(&uLocal_54, 6);
			iVar0 = 0;
			while (iVar0 < iLocal_226)
			{
				if (unk_0x12DD4A0B247D9B4D(uLocal_297[iVar0]))
				{
					unk_0xFFD8EB5462B07B59(&(uLocal_297[iVar0]));
				}
				iVar0++;
			}
			unk_0x9972EFADA7A2A47D(1, iLocal_268, joaat("player"));
			unk_0x07CECF421D895F3D(5, 1);
			unk_0x07CECF421D895F3D(3, 1);
			if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), 267.94f, 2700.48f, 43.6f, 15f, 15f, 15f, 0, 1, 0))
			{
				uLocal_237 = unk_0xBA715A7BEBA5A1F9(joaat("ambulance"), 267.94f, 2700.48f, 43.1f, 180f, 1, 1, 0);
			}
			else
			{
				uLocal_237 = unk_0xBA715A7BEBA5A1F9(joaat("ambulance"), 185.94f, 2603.48f, 46.9f, 0f, 1, 1, 0);
			}
			unk_0xBF0DDDDACD98C554(uLocal_237, 1);
			iLocal_224 = unk_0x487C17B41938052C(uLocal_237, 20, joaat("s_m_m_paramedic_01"), -1, 1, 1);
			iLocal_225 = unk_0x487C17B41938052C(uLocal_237, 20, joaat("s_m_m_paramedic_01"), 0, 1, 1);
			unk_0xBC12D08EE7559CCD(iLocal_224, 17, 1);
			unk_0xBC12D08EE7559CCD(iLocal_225, 17, 1);
			unk_0xD6A76BAB45A4B460(iLocal_224, 185, 1);
			unk_0xD6A76BAB45A4B460(iLocal_225, 185, 1);
			if (unk_0xE5965CDF24F93A9F(iLocal_222))
			{
				unk_0xA888F8CC04F25CC8(&uLocal_269);
				unk_0x3B8F94419979A0B1(0, uLocal_237, 307.1379f, 2640.042f, 43.4639f, 18f, 0, joaat("ambulance"), 786475, 5f, 5f);
				unk_0xC149E50FBB27DD70(0, iLocal_222, -1, 2f, 1f, 10f, 0);
				unk_0xF30F15F203736DE4(0, iLocal_222, -1, 2052, 2);
				unk_0x529D306014D3C29A(0, iLocal_222, 0);
				unk_0x49D97B076E3590AC(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x49D97B076E3590AC(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0xC963A45B50851768(uLocal_269);
				unk_0x8ACADA903FCAA42F(iLocal_224, uLocal_269);
				unk_0x7461D7C5BA953BC7(&uLocal_269);
				unk_0xABC2CA6F28903308(iLocal_224, 1);
			}
			if (unk_0xE5965CDF24F93A9F(iLocal_223))
			{
				unk_0xA888F8CC04F25CC8(&uLocal_269);
				unk_0x19C58BA8A663B64B(0, 15000);
				unk_0xC149E50FBB27DD70(0, iLocal_223, -1, 2f, 1f, 10f, 0);
				unk_0xF30F15F203736DE4(0, iLocal_223, -1, 2052, 2);
				unk_0x529D306014D3C29A(0, iLocal_223, 0);
				unk_0x49D97B076E3590AC(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x49D97B076E3590AC(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0xC963A45B50851768(uLocal_269);
				unk_0x8ACADA903FCAA42F(iLocal_225, uLocal_269);
				unk_0x7461D7C5BA953BC7(&uLocal_269);
				unk_0xABC2CA6F28903308(iLocal_225, 1);
			}
			if (!unk_0xF68107C40359970C(iLocal_226[0]) && unk_0xE5965CDF24F93A9F(iLocal_236))
			{
				unk_0xD6A76BAB45A4B460(iLocal_226[0], 185, 1);
				unk_0xA888F8CC04F25CC8(&uLocal_269);
				unk_0x7D1424753688EE7A(0, unk_0x6B62510F212526DC(iLocal_236, 0) + Vector(0f, 5f, 0f), 1f, -1, 1048576000, 0, 1193033728);
				unk_0xD4834169F570E6D2(0, 0);
				unk_0x49D97B076E3590AC(0, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x49D97B076E3590AC(0, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0xC963A45B50851768(uLocal_269);
				unk_0x8ACADA903FCAA42F(iLocal_226[0], uLocal_269);
				unk_0x7461D7C5BA953BC7(&uLocal_269);
				unk_0xABC2CA6F28903308(iLocal_226[0], 1);
			}
			if (!unk_0x55B23FE400FCEA6B(iLocal_226[1], 0) && unk_0xE5965CDF24F93A9F(iLocal_230))
			{
				unk_0xD6A76BAB45A4B460(iLocal_226[1], 185, 1);
				unk_0x202B28FEABEC4034(iLocal_226[1], joaat("weapon_unarmed"), 1);
				unk_0xA888F8CC04F25CC8(&uLocal_269);
				unk_0x7D1424753688EE7A(0, unk_0x6B62510F212526DC(iLocal_230, 0) + Vector(0f, 1f, 0f), 2f, -1, 1048576000, 0, 1193033728);
				unk_0xE1E1AF00CA06A2B7(0, unk_0x6B62510F212526DC(iLocal_230, 0), -1, 2052, 2);
				unk_0x1A96B8B416BC07D0(0, unk_0x6B62510F212526DC(iLocal_230, 0), 0);
				unk_0x49D97B076E3590AC(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x49D97B076E3590AC(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0xC963A45B50851768(uLocal_269);
				unk_0x8ACADA903FCAA42F(iLocal_226[1], uLocal_269);
				unk_0x7461D7C5BA953BC7(&uLocal_269);
				unk_0xABC2CA6F28903308(iLocal_226[1], 1);
			}
			if (!unk_0xF68107C40359970C(iLocal_226[2]) && unk_0xE5965CDF24F93A9F(iLocal_223))
			{
				unk_0xD6A76BAB45A4B460(iLocal_226[2], 185, 1);
				if (unk_0xE5965CDF24F93A9F(iLocal_223))
				{
					unk_0xA888F8CC04F25CC8(&uLocal_269);
					unk_0x7D1424753688EE7A(0, unk_0x6B62510F212526DC(iLocal_223, 0) + Vector(0f, 1f, 0f), 1f, -1, 1048576000, 0, 1193033728);
					unk_0xD4834169F570E6D2(0, 0);
					unk_0x49D97B076E3590AC(0, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0x49D97B076E3590AC(0, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0xC963A45B50851768(uLocal_269);
					unk_0x8ACADA903FCAA42F(iLocal_226[2], uLocal_269);
					unk_0x7461D7C5BA953BC7(&uLocal_269);
				}
				unk_0xABC2CA6F28903308(iLocal_226[2], 1);
			}
			func_3();
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0xF68107C40359970C(iLocal_226[0]))
			{
				func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0xF68107C40359970C(iLocal_226[1]))
			{
				unk_0xEEBC95A38CBDED42(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_54, 4);
				func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0xF68107C40359970C(iLocal_226[2]))
			{
				unk_0xEEBC95A38CBDED42(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_54, 4);
				func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			func_3();
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0xF68107C40359970C(iLocal_226[0]))
			{
				func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0xF68107C40359970C(iLocal_226[1]))
			{
				unk_0xEEBC95A38CBDED42(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_54, 4);
				func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0xF68107C40359970C(iLocal_226[2]))
			{
				unk_0xEEBC95A38CBDED42(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_54, 4);
				func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			unk_0x5AE11BC36633DE4E(0);
			iLocal_266 = 1;
		}
	}
	if (iLocal_264 && !func_87())
	{
		func_5();
	}
	if (((((unk_0x55B23FE400FCEA6B(iLocal_222, 0) && unk_0x55B23FE400FCEA6B(iLocal_223, 0)) && unk_0x55B23FE400FCEA6B(iLocal_226[0], 0)) && unk_0x55B23FE400FCEA6B(iLocal_226[1], 0)) && unk_0x55B23FE400FCEA6B(iLocal_226[2], 0)) && (func_38() || !unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), 310.6203f, 2642.854f, 43.5173f, 200f, 200f, 180f, 0, 1, 0)))
	{
		unk_0x007D28B99DF625B1(unk_0x9E2D6C50374FCFA9(), 2, 0);
		unk_0x48A2EC087250E1BC(unk_0x9E2D6C50374FCFA9(), 0f);
		func_7();
	}
}

void func_3()
{
	Global_20471 = 0;
	func_4();
}

void func_4()
{
	unk_0x82B0661A78CC39CF();
	Global_22616 = 0;
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21605 = 6;
	}
}

void func_5()
{
	func_148();
}

void func_6(int iParam0)
{
	Global_113372 = iParam0;
}

void func_7()
{
	if (!bLocal_49)
	{
	}
	while (func_37())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_36())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_11(-1, 0);
	func_8();
	func_148();
}

void func_8()
{
	func_9();
}

int func_9()
{
	if (func_10(0))
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

int func_10(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_11(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_34();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_33(iParam0))
	{
		func_32(iParam0, iParam1);
		if (!func_31(51))
		{
			func_21("RE_REWARD", 1, 0, 4000, 10000, func_24(), 0, 138, 0);
			func_20(51);
		}
		if (func_19(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_18(iParam0, iParam1) != 322)
		{
			func_12(func_18(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113374 = iParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_6(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_6(7);
			}
			else
			{
				func_6(1);
			}
		}
	}
}

void func_12(int iParam0, var uParam1, var uParam2)
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
		func_16((891 + iParam0), 1, -1);
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
		Global_113386.f_10194[iParam0 /*12*/].f_10 = uParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = uParam2;
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
		func_13();
	}
}

void func_13()
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
		func_15(13, unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853));
	}
	if (!unk_0x665245305CD9E866())
	{
		if (!Global_78319)
		{
			if (func_14() == 2 == 0 && !unk_0x9315DBF7D972F07A())
			{
				if (unk_0x47C86377AA337CBE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_9();
				}
			}
		}
	}
}

int func_14()
{
	return Global_31959;
}

int func_15(int iParam0, int iParam1)
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

void func_16(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_17();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, iParam2);
}

int func_17()
{
	return Global_1574918;
}

int func_18(int iParam0, int iParam1)
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
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
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
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
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
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
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

int func_19(int iParam0)
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

void func_20(int iParam0)
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
		unk_0xCED9E32812D6C7C7(&(Global_113386.f_20410.f_150[iVar1]), iVar0);
	}
}

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x3C57C2F07FEE34D2(sParam0, ""))
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
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (unk_0x3C57C2F07FEE34D2(&(Global_113386.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113386.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_8 = (unk_0x320D1840B6DAA1CC() + iParam3);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = ((unk_0x320D1840B6DAA1CC() + iParam3) + iParam4);
		}
		else
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_113386.f_20410.f_145++;
		func_23();
	}
}

void func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113386.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[0])
			{
				Global_113386.f_20410.f_146[0] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[1])
			{
				Global_113386.f_20410.f_146[1] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[2])
			{
				Global_113386.f_20410.f_146[2] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_24()
{
	func_25();
	switch (Global_113386.f_2363.f_539.f_4321)
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

void func_25()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_29(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_28(unk_0xE2D3D51028F0428A());
			if (func_27(iVar0) && (!func_26(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_27(Global_113386.f_2363.f_539.f_4321))
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

bool func_26(int iParam0)
{
	return Global_43052 == iParam0;
}

bool func_27(int iParam0)
{
	return iParam0 < 3;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_29(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_29(int iParam0)
{
	if (func_27(iParam0))
	{
		return func_30(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_30(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_31(int iParam0)
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
		return BitTest(Global_113386.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_32(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_113386.f_24995.f_8[iParam0]), iParam1);
}

int func_33(int iParam0)
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

int func_34()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x05CBA41180F5D521(), 64);
	uVar16 = func_35(Var0);
	return uVar16;
}

int func_35(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x2E87280918B16506(&cParam0))
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

int func_36()
{
	return 1;
}

int func_37()
{
	if (Global_21605 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

int func_38()
{
	if (bLocal_260 || bLocal_261)
	{
		if (bLocal_260 && bLocal_261)
		{
			if (!unk_0x12DD4A0B247D9B4D(uLocal_301[0]) && !unk_0x12DD4A0B247D9B4D(uLocal_301[1]))
			{
				return 1;
			}
		}
		if (bLocal_260 && !bLocal_261)
		{
			if (!unk_0x12DD4A0B247D9B4D(uLocal_301[0]))
			{
				return 1;
			}
		}
		if (bLocal_261 && !bLocal_260)
		{
			if (!unk_0x12DD4A0B247D9B4D(uLocal_301[1]))
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

int func_39(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_40(sParam2, iParam3, 0);
}

int func_40(char* sParam0, int iParam1, bool bParam2)
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
					func_54();
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
		if (func_53(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_52();
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
				func_50();
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
				if (func_49())
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
			if (func_48())
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
			func_47();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_46();
		func_41();
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
		func_54();
	}
	return 0;
}

void func_41()
{
	if (!func_42())
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

int func_42()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_45())
	{
		return 0;
	}
	if (func_43(unk_0x9E2D6C50374FCFA9()))
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

bool func_43(int iParam0)
{
	return func_44(iParam0, 20);
}

var func_44(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_45()
{
	return -1;
}

void func_46()
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

void func_47()
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

int func_48()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_49()
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

void func_50()
{
	if (func_26(14))
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
		Global_20266 = func_51();
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

int func_51()
{
	func_25();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_52()
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

bool func_53(int iParam0, int iParam1)
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

void func_54()
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

void func_55(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_56(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78319)
	{
		if (!unk_0xF68107C40359970C(iParam2))
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

int func_57(var uParam0)
{
	var uVar0;
	
	if (!unk_0x2791155FB0769FE5(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x455B7FFC90053189(uParam0);
	unk_0x293A9399E902A33B(uVar0, func_58(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	return uVar0;
}

float func_58(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_59(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_60()
{
	if (!iLocal_282)
	{
		if (!unk_0xF68107C40359970C(iLocal_222))
		{
			if (unk_0xD5C6B5E3B93A5EDC(iLocal_222, 0))
			{
				iLocal_291 = unk_0xB3FF0049C1FD38EC(iLocal_222, 0);
				if (((((unk_0x0747E45CFF1F74AA(iLocal_291, unk_0xE2D3D51028F0428A(), 1) && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && unk_0x77A43AFA9AAEC041(iLocal_291, unk_0xE2D3D51028F0428A(), 10f, 10f, 10f, 0, 1, 0)) || unk_0x177106D5E97D1958(iLocal_222)) || unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_291, 0)) || unk_0xBC0CFDF47C99D84B(unk_0xE2D3D51028F0428A(), iLocal_291, joaat("weapon_stickybomb"), -1))
				{
					unk_0x50274A7EACA3133A(iLocal_222, 0);
					unk_0x9972EFADA7A2A47D(5, iLocal_267, joaat("player"));
					if (unk_0xD5C6B5E3B93A5EDC(iLocal_222, 0))
					{
						unk_0x9521FB98DB6DDF50(iLocal_222, joaat("weapon_microsmg"), 200, 1, 1);
						unk_0x202B28FEABEC4034(iLocal_222, joaat("weapon_microsmg"), 1);
						unk_0x0E6C3A4EFA9D9D35(iLocal_222, unk_0xE2D3D51028F0428A(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
					}
					if (!unk_0xF68107C40359970C(iLocal_223))
					{
						if (unk_0xD5C6B5E3B93A5EDC(iLocal_223, 0))
						{
							unk_0x50274A7EACA3133A(iLocal_223, 0);
							unk_0x9521FB98DB6DDF50(iLocal_223, joaat("weapon_microsmg"), 200, 1, 1);
							unk_0x202B28FEABEC4034(iLocal_223, joaat("weapon_microsmg"), 1);
							unk_0x0E6C3A4EFA9D9D35(iLocal_223, unk_0xE2D3D51028F0428A(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						}
					}
					bLocal_50 = true;
					iLocal_282 = 1;
				}
			}
			if (unk_0x0747E45CFF1F74AA(iLocal_222, unk_0xE2D3D51028F0428A(), 1))
			{
				unk_0x9972EFADA7A2A47D(5, iLocal_267, joaat("player"));
				if ((unk_0xD5C6B5E3B93A5EDC(iLocal_222, 0) && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && !unk_0x55B23FE400FCEA6B(iLocal_291, 0))
				{
					if (unk_0x77A43AFA9AAEC041(iLocal_291, unk_0xE2D3D51028F0428A(), 10f, 10f, 10f, 0, 1, 0))
					{
						unk_0x50274A7EACA3133A(iLocal_222, 0);
						unk_0x9521FB98DB6DDF50(iLocal_222, joaat("weapon_microsmg"), 200, 1, 1);
						unk_0x202B28FEABEC4034(iLocal_222, joaat("weapon_microsmg"), 1);
						unk_0x0E6C3A4EFA9D9D35(iLocal_222, unk_0xE2D3D51028F0428A(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						bLocal_50 = true;
						iLocal_282 = 1;
					}
				}
				if (!unk_0xF68107C40359970C(iLocal_223))
				{
					if ((unk_0xD5C6B5E3B93A5EDC(iLocal_223, 0) && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && !unk_0x55B23FE400FCEA6B(iLocal_291, 0))
					{
						if (unk_0x77A43AFA9AAEC041(iLocal_291, unk_0xE2D3D51028F0428A(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0x50274A7EACA3133A(iLocal_223, 0);
							unk_0x9521FB98DB6DDF50(iLocal_223, joaat("weapon_microsmg"), 200, 1, 1);
							unk_0x202B28FEABEC4034(iLocal_223, joaat("weapon_microsmg"), 1);
							unk_0x0E6C3A4EFA9D9D35(iLocal_223, unk_0xE2D3D51028F0428A(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_50 = true;
							iLocal_282 = 1;
						}
					}
				}
			}
		}
		if (!unk_0xF68107C40359970C(iLocal_223))
		{
			if (unk_0xD5C6B5E3B93A5EDC(iLocal_223, 0))
			{
				iLocal_291 = unk_0xB3FF0049C1FD38EC(iLocal_223, 0);
				if (((unk_0x0747E45CFF1F74AA(iLocal_291, unk_0xE2D3D51028F0428A(), 1) || unk_0x177106D5E97D1958(iLocal_223)) || unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_291, 0)) || unk_0xBC0CFDF47C99D84B(unk_0xE2D3D51028F0428A(), iLocal_291, joaat("weapon_stickybomb"), -1))
				{
					unk_0x9972EFADA7A2A47D(5, iLocal_267, joaat("player"));
					if (!unk_0xF68107C40359970C(iLocal_222))
					{
						if ((unk_0xD5C6B5E3B93A5EDC(iLocal_222, 0) && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && !unk_0x55B23FE400FCEA6B(iLocal_291, 0))
						{
							if (unk_0x77A43AFA9AAEC041(iLocal_291, unk_0xE2D3D51028F0428A(), 10f, 10f, 10f, 0, 1, 0))
							{
								unk_0x50274A7EACA3133A(iLocal_222, 0);
								unk_0x9521FB98DB6DDF50(iLocal_222, joaat("weapon_microsmg"), 200, 1, 1);
								unk_0x202B28FEABEC4034(iLocal_222, joaat("weapon_microsmg"), 1);
								unk_0x0E6C3A4EFA9D9D35(iLocal_222, unk_0xE2D3D51028F0428A(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
								bLocal_50 = true;
								iLocal_282 = 1;
							}
						}
					}
					if ((unk_0xD5C6B5E3B93A5EDC(iLocal_223, 0) && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && !unk_0x55B23FE400FCEA6B(iLocal_291, 0))
					{
						if (unk_0x77A43AFA9AAEC041(iLocal_291, unk_0xE2D3D51028F0428A(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0x50274A7EACA3133A(iLocal_223, 0);
							unk_0x9521FB98DB6DDF50(iLocal_223, joaat("weapon_microsmg"), 200, 1, 1);
							unk_0x202B28FEABEC4034(iLocal_223, joaat("weapon_microsmg"), 1);
							unk_0x0E6C3A4EFA9D9D35(iLocal_223, unk_0xE2D3D51028F0428A(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_50 = true;
							iLocal_282 = 1;
						}
					}
				}
			}
			if (unk_0x0747E45CFF1F74AA(iLocal_223, unk_0xE2D3D51028F0428A(), 1))
			{
				unk_0x9972EFADA7A2A47D(5, iLocal_267, joaat("player"));
				if (!unk_0xF68107C40359970C(iLocal_222))
				{
					if ((unk_0xD5C6B5E3B93A5EDC(iLocal_222, 0) && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && !unk_0x55B23FE400FCEA6B(iLocal_291, 0))
					{
						if (unk_0x77A43AFA9AAEC041(iLocal_291, unk_0xE2D3D51028F0428A(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0x9521FB98DB6DDF50(iLocal_222, joaat("weapon_microsmg"), 200, 1, 1);
							unk_0x202B28FEABEC4034(iLocal_222, joaat("weapon_microsmg"), 1);
							unk_0x0E6C3A4EFA9D9D35(iLocal_222, unk_0xE2D3D51028F0428A(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_50 = true;
							iLocal_282 = 1;
						}
					}
				}
				if ((unk_0xD5C6B5E3B93A5EDC(iLocal_223, 0) && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && !unk_0x55B23FE400FCEA6B(iLocal_291, 0))
				{
					if (unk_0x77A43AFA9AAEC041(iLocal_291, unk_0xE2D3D51028F0428A(), 10f, 10f, 10f, 0, 1, 0))
					{
						unk_0x9521FB98DB6DDF50(iLocal_223, joaat("weapon_microsmg"), 200, 1, 1);
						unk_0x202B28FEABEC4034(iLocal_223, joaat("weapon_microsmg"), 1);
						unk_0x0E6C3A4EFA9D9D35(iLocal_223, unk_0xE2D3D51028F0428A(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						bLocal_50 = true;
						iLocal_282 = 1;
					}
				}
			}
		}
	}
}

void func_61()
{
	if (!unk_0xF68107C40359970C(iLocal_222) && !unk_0x55B23FE400FCEA6B(iLocal_236, 0))
	{
		if (!unk_0x33168C7A83D47CC0(iLocal_222, iLocal_236, -1, 0, 0) && !unk_0x33168C7A83D47CC0(iLocal_222, iLocal_236, 0, 0, 0))
		{
			unk_0x84918839A90C954C(iLocal_222, Local_219, 1000f, -1, 0, 0);
			unk_0xABC2CA6F28903308(iLocal_222, 1);
			iLocal_285 = 1;
		}
	}
	if (!unk_0xF68107C40359970C(iLocal_223) && !unk_0x55B23FE400FCEA6B(iLocal_236, 0))
	{
		if (!unk_0x33168C7A83D47CC0(iLocal_223, iLocal_236, -1, 0, 0) && !unk_0x33168C7A83D47CC0(iLocal_223, iLocal_236, 0, 0, 0))
		{
			unk_0x84918839A90C954C(iLocal_223, Local_219, 1000f, -1, 0, 0);
			unk_0xABC2CA6F28903308(iLocal_223, 1);
			iLocal_285 = 1;
		}
	}
}

void func_62()
{
	if (!unk_0x55B23FE400FCEA6B(iLocal_222, 0))
	{
		Local_271 = { unk_0x6B62510F212526DC(iLocal_222, 1) };
	}
	else if (!unk_0x55B23FE400FCEA6B(iLocal_223, 0))
	{
		Local_271 = { unk_0x6B62510F212526DC(iLocal_223, 1) };
	}
	Local_271.f_2 = (Local_271.f_2 - 0.11f);
	if (!unk_0x55B23FE400FCEA6B(iLocal_222, 0))
	{
		unk_0xC1B1E9A034A63A62(0);
		if (!bLocal_50)
		{
			func_3();
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0x55B23FE400FCEA6B(iLocal_222, 0))
			{
				func_63(&uLocal_54, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			else if (!unk_0x55B23FE400FCEA6B(iLocal_223, 0))
			{
				func_59(&uLocal_54, 5);
				func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
				func_63(&uLocal_54, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			unk_0xAE315B17AC08C2A9(unk_0x7F65C587E17DEF5D(Local_271, 1067030938, 1069547520), 1000, 5, 0);
			iLocal_281 = 1;
		}
	}
	if (!unk_0x55B23FE400FCEA6B(iLocal_223, 0) && !unk_0x55B23FE400FCEA6B(iLocal_236, 0))
	{
		if (unk_0xF6F5D18EF8EAB859(iLocal_223, iLocal_236, 0))
		{
			unk_0xC1B1E9A034A63A62(0);
			if (!unk_0x55B23FE400FCEA6B(iLocal_222, 0))
			{
			}
			else if (!unk_0x55B23FE400FCEA6B(iLocal_223, 0))
			{
			}
			iLocal_281 = 1;
		}
	}
}

int func_63(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 1;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_40(sParam2, iParam4, 0);
}

void func_64()
{
	if (!bLocal_284)
	{
		unk_0x13A2865660B9B033(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		if (iLocal_288)
		{
			if (!unk_0xF68107C40359970C(iLocal_222))
			{
				if (unk_0x706E4529F37489DB(iLocal_222))
				{
					func_3();
					unk_0x4EDE34FBADD967A6(0);
					func_39(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_288 = 1;
				}
			}
			if (!unk_0xF68107C40359970C(iLocal_223))
			{
				if (unk_0x706E4529F37489DB(iLocal_223))
				{
					func_3();
					unk_0x4EDE34FBADD967A6(0);
					func_59(&uLocal_54, 5);
					func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_288 = 1;
				}
			}
		}
		if (iLocal_265 == 1)
		{
			if (!unk_0xF68107C40359970C(iLocal_222) && !unk_0x55B23FE400FCEA6B(iLocal_236, 0))
			{
				if (unk_0xF6F5D18EF8EAB859(iLocal_222, iLocal_236, 0))
				{
					unk_0xDC6110E0F8FF9DA0(iLocal_222, 2, 1);
					unk_0xA888F8CC04F25CC8(&uLocal_269);
					unk_0xB69D13E19147910F(0, iLocal_236, unk_0xE2D3D51028F0428A(), 8, 100f, 786469, 1000f, 10f, 1);
					unk_0xC963A45B50851768(uLocal_269);
					unk_0x8ACADA903FCAA42F(iLocal_222, uLocal_269);
					unk_0x7461D7C5BA953BC7(&uLocal_269);
					unk_0xABC2CA6F28903308(iLocal_222, 1);
					bLocal_284 = true;
				}
			}
		}
		if (iLocal_265 == 2)
		{
			if (!unk_0xF68107C40359970C(iLocal_223) && !unk_0x55B23FE400FCEA6B(iLocal_236, 0))
			{
				if (unk_0xF6F5D18EF8EAB859(iLocal_223, iLocal_236, 0))
				{
					unk_0xDC6110E0F8FF9DA0(iLocal_223, 2, 1);
					unk_0xA888F8CC04F25CC8(&uLocal_269);
					unk_0xB69D13E19147910F(0, iLocal_236, unk_0xE2D3D51028F0428A(), 8, 100f, 786469, 1000f, 10f, 1);
					unk_0xC963A45B50851768(uLocal_269);
					unk_0x8ACADA903FCAA42F(iLocal_223, uLocal_269);
					unk_0x7461D7C5BA953BC7(&uLocal_269);
					unk_0xABC2CA6F28903308(iLocal_223, 1);
					bLocal_284 = true;
				}
			}
		}
		if (iLocal_265 == 3)
		{
			if ((!unk_0xF68107C40359970C(iLocal_223) && !unk_0xF68107C40359970C(iLocal_222)) && !unk_0x55B23FE400FCEA6B(iLocal_236, 0))
			{
				if (unk_0xF6F5D18EF8EAB859(iLocal_222, iLocal_236, 0) && unk_0xF6F5D18EF8EAB859(iLocal_223, iLocal_236, 0))
				{
					unk_0xDC6110E0F8FF9DA0(iLocal_222, 2, 1);
					unk_0xDC6110E0F8FF9DA0(iLocal_223, 2, 1);
					unk_0xA888F8CC04F25CC8(&uLocal_269);
					unk_0xB69D13E19147910F(0, iLocal_236, unk_0xE2D3D51028F0428A(), 8, 100f, 786469, 1000f, 10f, 1);
					unk_0xC963A45B50851768(uLocal_269);
					unk_0x8ACADA903FCAA42F(iLocal_222, uLocal_269);
					unk_0x7461D7C5BA953BC7(&uLocal_269);
					unk_0x50274A7EACA3133A(iLocal_223, 0);
					unk_0xABC2CA6F28903308(iLocal_222, 1);
					bLocal_284 = true;
				}
			}
			if (unk_0xF68107C40359970C(iLocal_222) && !unk_0xF68107C40359970C(iLocal_223))
			{
				func_59(&uLocal_54, 5);
				unk_0xB486640392EC50BB(iLocal_223, iLocal_236, -1, -1, 2f, 8, 0);
				iLocal_265 = 2;
			}
			if (unk_0xF68107C40359970C(iLocal_223) && !unk_0xF68107C40359970C(iLocal_222))
			{
				func_59(&uLocal_54, 6);
				unk_0xB486640392EC50BB(iLocal_222, iLocal_236, -1, -1, 2f, 8, 0);
				iLocal_265 = 1;
			}
		}
		if (iLocal_265 == 4)
		{
			if (!unk_0xF68107C40359970C(iLocal_222))
			{
				unk_0x03A927199A2DFE46(iLocal_222);
				unk_0x84918839A90C954C(iLocal_222, Local_219, 1000f, -1, 0, 0);
				unk_0xABC2CA6F28903308(iLocal_222, 1);
			}
			if (!unk_0xF68107C40359970C(iLocal_223))
			{
				unk_0x03A927199A2DFE46(iLocal_223);
				unk_0x84918839A90C954C(iLocal_223, Local_219, 1000f, -1, 0, 0);
				unk_0xABC2CA6F28903308(iLocal_223, 1);
			}
			bLocal_284 = true;
		}
	}
}

void func_65()
{
	if ((unk_0x55B23FE400FCEA6B(iLocal_226[0], 0) && unk_0x55B23FE400FCEA6B(iLocal_226[1], 0)) && unk_0x55B23FE400FCEA6B(iLocal_226[2], 0))
	{
		func_59(&uLocal_54, 4);
		iLocal_274 = 1;
		iLocal_264 = 1;
		unk_0x9972EFADA7A2A47D(1, iLocal_267, joaat("player"));
		if (!bLocal_50 && bLocal_49)
		{
			unk_0xFFD8EB5462B07B59(&uLocal_295);
			unk_0xFFD8EB5462B07B59(&uLocal_296);
		}
		if (!bLocal_50)
		{
			if (!unk_0x55B23FE400FCEA6B(iLocal_222, 0))
			{
				func_66(&uLocal_54, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
			else if (!unk_0x55B23FE400FCEA6B(iLocal_223, 0))
			{
				func_59(&uLocal_54, 5);
				func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
				func_66(&uLocal_54, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
		}
		if (unk_0x55A0C756C4A8220C(iLocal_236, 0))
		{
			unk_0xE68645525D451A8B(iLocal_236);
			if (!unk_0xF68107C40359970C(iLocal_222) && !unk_0xC96A660F9CAB40FC(iLocal_222))
			{
				unk_0x882A3682867542AA(iLocal_222, 1, 1, 1, 0);
				iLocal_265 = 1;
				unk_0x03A927199A2DFE46(iLocal_222);
				unk_0xF7B73727A8F72F54(iLocal_222, 1);
				unk_0x50274A7EACA3133A(iLocal_222, 1);
				unk_0xE68645525D451A8B(iLocal_222);
				unk_0xE68645525D451A8B(iLocal_236);
				unk_0xA888F8CC04F25CC8(&uLocal_269);
				unk_0xB486640392EC50BB(0, iLocal_236, -1, -1, 2f, 9, 0);
				unk_0xC963A45B50851768(uLocal_269);
				unk_0x8ACADA903FCAA42F(iLocal_222, uLocal_269);
				unk_0x7461D7C5BA953BC7(&uLocal_269);
				if (!unk_0xF68107C40359970C(iLocal_223) && !unk_0xC96A660F9CAB40FC(iLocal_223))
				{
					unk_0x03A927199A2DFE46(iLocal_223);
					unk_0x50274A7EACA3133A(iLocal_223, 1);
					unk_0xE68645525D451A8B(iLocal_223);
					unk_0xE68645525D451A8B(iLocal_236);
					unk_0xF7B73727A8F72F54(iLocal_223, 1);
					unk_0xB486640392EC50BB(iLocal_223, iLocal_236, -1, 0, 2f, 1, 0);
					iLocal_265 = 3;
				}
			}
			else if (!unk_0xF68107C40359970C(iLocal_223))
			{
				unk_0xF7B73727A8F72F54(iLocal_223, 1);
				unk_0x882A3682867542AA(iLocal_223, 1, 1, 1, 0);
				unk_0x03A927199A2DFE46(iLocal_223);
				unk_0x50274A7EACA3133A(iLocal_223, 1);
				unk_0xE68645525D451A8B(iLocal_223);
				unk_0xE68645525D451A8B(iLocal_236);
				unk_0xA888F8CC04F25CC8(&uLocal_269);
				unk_0xB486640392EC50BB(0, iLocal_236, -1, -1, 2f, 1, 0);
				unk_0xC963A45B50851768(uLocal_269);
				unk_0x8ACADA903FCAA42F(iLocal_223, uLocal_269);
				unk_0x7461D7C5BA953BC7(&uLocal_269);
				iLocal_265 = 2;
			}
		}
		else
		{
			iLocal_265 = 4;
		}
	}
}

int func_66(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 1;
	Global_22598 = 0;
	Global_22602 = 0;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_40(sParam2, iParam4, 0);
}

void func_67(int iParam0, var uParam1, int iParam2, float fParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (*uParam1 < 5)
		{
			switch (iParam2)
			{
				case 0:
					Var0 = { -1f, 1f, 0.5f };
					Var3 = { -0.5f, 0.75f, 0.05f };
					iVar6 = 0;
					break;
				
				case 1:
					Var0 = { 1f, 1f, 0.5f };
					Var3 = { 0.5f, 0.75f, 0.05f };
					iVar6 = 1;
					break;
				
				case 4:
					Var0 = { -1f, -1f, 0.5f };
					Var3 = { -0.5f, -0.75f, 0.05f };
					iVar6 = 2;
					break;
				
				case 5:
					Var0 = { 1f, -1f, 0.5f };
					Var3 = { 0.5f, -0.75f, 0.05f };
					iVar6 = 3;
					break;
			}
			if (unk_0x81C70E8A536AAC9E(unk_0xCACAD935C0BEE14F(iParam0, Var0), fParam3, 1, 1) || unk_0x81C70E8A536AAC9E(unk_0xCACAD935C0BEE14F(iParam0, Var0), fParam3, 0, 1))
			{
				switch (*uParam1)
				{
					case 0:
						unk_0x7517A117EA38D570(iParam0, iParam2, 0, 1148846080);
						*uParam1++;
						break;
					
					case 1:
						unk_0xBDBA586F627A444A(iParam0, iVar6);
						*uParam1++;
						break;
					
					case 2:
						*uParam1++;
						break;
					
					case 3:
						*uParam1++;
						break;
					
					case 4:
						unk_0xBDB27A4F81702F96(iParam0, Var3, 150f, 50f, 1);
						*uParam1++;
						break;
					}
				}
			}
	}
}

void func_68(int iParam0)
{
	if ((!unk_0xF68107C40359970C(iParam0) && !func_37()) && unk_0x83666F9FB8FEBD4B() > 12000)
	{
		func_56(&uLocal_54, 4, iParam0, "RECSBCop1", 0, 1);
		if (unk_0x77A43AFA9AAEC041(iParam0, unk_0xE2D3D51028F0428A(), 20f, 20f, 20f, 0, 1, 0))
		{
			func_39(&uLocal_54, "recsbau", "recsb_sscene", 4, 0, 0, 0);
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_69()
{
	if (!unk_0x55B23FE400FCEA6B(iLocal_222, 0))
	{
		if (unk_0x0747E45CFF1F74AA(iLocal_222, unk_0xE2D3D51028F0428A(), 1))
		{
			bLocal_50 = true;
			unk_0xC1B1E9A034A63A62(0);
			unk_0x9972EFADA7A2A47D(5, iLocal_267, joaat("player"));
			if (!unk_0xF68107C40359970C(iLocal_222))
			{
				unk_0xC1A74225341AA9FB(iLocal_222, unk_0xE2D3D51028F0428A(), 0, 16);
				unk_0xABC2CA6F28903308(iLocal_222, 1);
				unk_0xECA3A29060F3B861(iLocal_222, unk_0xE2D3D51028F0428A());
				unk_0x25D0F99524B26091(iLocal_222, 1);
			}
			if (!unk_0xF68107C40359970C(iLocal_223))
			{
				unk_0xC1A74225341AA9FB(iLocal_223, unk_0xE2D3D51028F0428A(), 0, 16);
				unk_0xABC2CA6F28903308(iLocal_223, 1);
				unk_0xECA3A29060F3B861(iLocal_223, unk_0xE2D3D51028F0428A());
				unk_0x25D0F99524B26091(iLocal_223, 1);
			}
			if (!bLocal_49)
			{
				func_3();
				unk_0x4EDE34FBADD967A6(0);
				if (!unk_0xF68107C40359970C(iLocal_226[0]))
				{
					func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0xF68107C40359970C(iLocal_226[1]))
				{
					unk_0xEEBC95A38CBDED42(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_54, 4);
					func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0xF68107C40359970C(iLocal_226[2]))
				{
					unk_0xEEBC95A38CBDED42(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_54, 4);
					func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!unk_0xF68107C40359970C(iLocal_222))
		{
			if (!func_72() && unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 4))
			{
				if (unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iLocal_222) || unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iLocal_222))
				{
					if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_222, 20f, 20f, 20f, 0, 1, 0) && unk_0xD32EE22119FFF87D(iLocal_222, unk_0xE2D3D51028F0428A()))
					{
						iLocal_240++;
						if (!iLocal_241 && !func_70("recsb_theaim"))
						{
							func_3();
							unk_0x4EDE34FBADD967A6(0);
							if (!unk_0xF68107C40359970C(iLocal_222))
							{
								func_39(&uLocal_54, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!unk_0xF68107C40359970C(iLocal_223))
							{
								func_59(&uLocal_54, 5);
								func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
								func_39(&uLocal_54, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_241 = 1;
						}
						if (iLocal_240 > 45)
						{
							bLocal_50 = true;
							unk_0xC1B1E9A034A63A62(0);
							if (!bLocal_49)
							{
								func_3();
								unk_0x4EDE34FBADD967A6(0);
								if (!unk_0xF68107C40359970C(iLocal_226[0]))
								{
									func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
									func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0xF68107C40359970C(iLocal_226[1]))
								{
									unk_0xEEBC95A38CBDED42(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_54, 4);
									func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
									func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0xF68107C40359970C(iLocal_226[2]))
								{
									unk_0xEEBC95A38CBDED42(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_54, 4);
									func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
									func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_241 || iLocal_242)
				{
					iLocal_240 = 45;
				}
				else
				{
					iLocal_240 = 0;
				}
			}
		}
	}
	if (!unk_0x55B23FE400FCEA6B(iLocal_223, 0))
	{
		if (unk_0x0747E45CFF1F74AA(iLocal_223, unk_0xE2D3D51028F0428A(), 1))
		{
			bLocal_50 = true;
			unk_0xC1B1E9A034A63A62(0);
			unk_0x9972EFADA7A2A47D(5, iLocal_267, joaat("player"));
			if (!unk_0xF68107C40359970C(iLocal_223))
			{
				unk_0xC1A74225341AA9FB(iLocal_223, unk_0xE2D3D51028F0428A(), 0, 16);
				unk_0xABC2CA6F28903308(iLocal_223, 1);
				unk_0xECA3A29060F3B861(iLocal_223, unk_0xE2D3D51028F0428A());
				unk_0x25D0F99524B26091(iLocal_223, 1);
			}
			if (!unk_0xF68107C40359970C(iLocal_222))
			{
				unk_0xC1A74225341AA9FB(iLocal_222, unk_0xE2D3D51028F0428A(), 0, 16);
				unk_0xABC2CA6F28903308(iLocal_222, 1);
				unk_0xECA3A29060F3B861(iLocal_222, unk_0xE2D3D51028F0428A());
				unk_0x25D0F99524B26091(iLocal_222, 1);
			}
			if (!bLocal_49)
			{
				func_3();
				unk_0x4EDE34FBADD967A6(0);
				if (!unk_0xF68107C40359970C(iLocal_226[0]))
				{
					func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0xF68107C40359970C(iLocal_226[1]))
				{
					unk_0xEEBC95A38CBDED42(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_54, 4);
					func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0xF68107C40359970C(iLocal_226[2]))
				{
					unk_0xEEBC95A38CBDED42(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_54, 4);
					func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!unk_0xF68107C40359970C(iLocal_223))
		{
			if (!func_72() && unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 4))
			{
				if (unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iLocal_223) || unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iLocal_223))
				{
					if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_223, 20f, 20f, 20f, 0, 1, 0) && unk_0xD32EE22119FFF87D(iLocal_223, unk_0xE2D3D51028F0428A()))
					{
						if ((!iLocal_242 && !unk_0xF68107C40359970C(iLocal_222)) && !func_70("recsb_theaim"))
						{
							func_3();
							unk_0x4EDE34FBADD967A6(0);
							if (!unk_0xF68107C40359970C(iLocal_222))
							{
								func_39(&uLocal_54, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!unk_0xF68107C40359970C(iLocal_223))
							{
								func_59(&uLocal_54, 5);
								func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
								func_39(&uLocal_54, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_242 = 1;
						}
						iLocal_239++;
						if (iLocal_239 > 45)
						{
							bLocal_50 = true;
							unk_0xC1B1E9A034A63A62(0);
							if (!bLocal_49)
							{
								func_3();
								unk_0x4EDE34FBADD967A6(0);
								if (!unk_0xF68107C40359970C(iLocal_226[0]))
								{
									func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
									func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0xF68107C40359970C(iLocal_226[1]))
								{
									unk_0xEEBC95A38CBDED42(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_54, 4);
									func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
									func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0xF68107C40359970C(iLocal_226[2]))
								{
									unk_0xEEBC95A38CBDED42(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_54, 4);
									func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
									func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_241 || iLocal_242)
				{
					iLocal_240 = 45;
				}
				else
				{
					iLocal_240 = 0;
				}
			}
		}
	}
	if (!iLocal_289 && bLocal_260)
	{
		if (unk_0x803592456AE579B3(uLocal_292[0]))
		{
			if (!unk_0xF68107C40359970C(iLocal_222))
			{
				if (unk_0xD32EE22119FFF87D(iLocal_222, unk_0xE2D3D51028F0428A()) && unk_0x77A43AFA9AAEC041(iLocal_222, unk_0xE2D3D51028F0428A(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_50 = true;
					func_3();
					unk_0x4EDE34FBADD967A6(0);
					func_39(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_289 = 1;
				}
			}
			else if (!unk_0xF68107C40359970C(iLocal_223))
			{
				if (unk_0xD32EE22119FFF87D(iLocal_223, unk_0xE2D3D51028F0428A()) && unk_0x77A43AFA9AAEC041(iLocal_223, unk_0xE2D3D51028F0428A(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_50 = true;
					func_59(&uLocal_54, 5);
					func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
					func_3();
					unk_0x4EDE34FBADD967A6(0);
					func_39(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_289 = 1;
				}
			}
		}
	}
	if (!iLocal_290 && bLocal_261)
	{
		if (unk_0x803592456AE579B3(uLocal_292[1]))
		{
			if (!unk_0xF68107C40359970C(iLocal_222))
			{
				if (unk_0xD32EE22119FFF87D(iLocal_222, unk_0xE2D3D51028F0428A()) && unk_0x77A43AFA9AAEC041(iLocal_222, unk_0xE2D3D51028F0428A(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_50 = true;
					func_3();
					unk_0x4EDE34FBADD967A6(0);
					func_39(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_290 = 1;
				}
			}
			else if (!unk_0xF68107C40359970C(iLocal_223))
			{
				if (unk_0xD32EE22119FFF87D(iLocal_223, unk_0xE2D3D51028F0428A()) && unk_0x77A43AFA9AAEC041(iLocal_223, unk_0xE2D3D51028F0428A(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_50 = true;
					func_59(&uLocal_54, 5);
					func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
					func_3();
					unk_0x4EDE34FBADD967A6(0);
					func_39(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_290 = 1;
				}
			}
		}
	}
	if (!unk_0x55B23FE400FCEA6B(iLocal_236, 0))
	{
		if ((unk_0x0747E45CFF1F74AA(iLocal_236, unk_0xE2D3D51028F0428A(), 1) || unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_236, 0)) || unk_0xBC0CFDF47C99D84B(unk_0xE2D3D51028F0428A(), iLocal_236, joaat("weapon_stickybomb"), -1))
		{
			bLocal_50 = true;
			unk_0xC1B1E9A034A63A62(0);
			unk_0x9972EFADA7A2A47D(5, iLocal_267, joaat("player"));
			if (!unk_0xF68107C40359970C(iLocal_222))
			{
				unk_0xC1A74225341AA9FB(iLocal_222, unk_0xE2D3D51028F0428A(), 0, 16);
				unk_0xABC2CA6F28903308(iLocal_222, 1);
				unk_0xECA3A29060F3B861(iLocal_222, unk_0xE2D3D51028F0428A());
				unk_0x25D0F99524B26091(iLocal_222, 1);
			}
			if (!unk_0xF68107C40359970C(iLocal_223))
			{
				unk_0xC1A74225341AA9FB(iLocal_223, unk_0xE2D3D51028F0428A(), 0, 16);
				unk_0xABC2CA6F28903308(iLocal_223, 1);
				unk_0xECA3A29060F3B861(iLocal_223, unk_0xE2D3D51028F0428A());
				unk_0x25D0F99524B26091(iLocal_223, 1);
			}
			func_3();
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0x55B23FE400FCEA6B(iLocal_236, 0))
			{
				if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_236, 0))
				{
					if (!unk_0xF68107C40359970C(iLocal_222))
					{
						func_66(&uLocal_54, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						unk_0xB486640392EC50BB(iLocal_222, iLocal_236, -1, -1, 2f, 524296, 0);
					}
					else if (!unk_0xF68107C40359970C(iLocal_223))
					{
						func_59(&uLocal_54, 5);
						func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
						func_66(&uLocal_54, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						unk_0xB486640392EC50BB(iLocal_223, iLocal_236, -1, -1, 2f, 524296, 0);
					}
				}
				else if (!bLocal_49)
				{
					if (!unk_0xF68107C40359970C(iLocal_226[0]))
					{
						func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
						func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!unk_0xF68107C40359970C(iLocal_226[1]))
					{
						unk_0xEEBC95A38CBDED42(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_54, 4);
						func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
						func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!unk_0xF68107C40359970C(iLocal_226[2]))
					{
						unk_0xEEBC95A38CBDED42(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_54, 4);
						func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
						func_39(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_70(char* sParam0)
{
	var uVar0;
	
	if (func_37())
	{
		MemCopy(&uVar0, {func_71()}, 4);
		if (unk_0x3C57C2F07FEE34D2(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_71()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		return Global_21224;
	}
	return Var0;
}

int func_72()
{
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (unk_0x55A0C756C4A8220C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0))
		{
			if (unk_0xF30A227F7990AE00(unk_0xE2D3D51028F0428A(), joaat("lazer")) || unk_0xF30A227F7990AE00(unk_0xE2D3D51028F0428A(), joaat("buzzard")))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_73()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!bLocal_286)
	{
		unk_0xFD48978E4E1BAA06(unk_0x9E2D6C50374FCFA9(), &uLocal_270);
		if (unk_0x9044EDB8A7BF67B4(uLocal_270))
		{
			iLocal_231 = unk_0x28AA31872A651BC7(uLocal_270);
		}
		if ((iLocal_231 == iLocal_226[0] || iLocal_231 == iLocal_226[1]) || iLocal_231 == iLocal_226[2])
		{
			if (!unk_0xF68107C40359970C(iLocal_231))
			{
				if (!func_72() && unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 4))
				{
					if (unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iLocal_231) || unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iLocal_231))
					{
						if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_231, 20f, 20f, 20f, 0, 1, 0))
						{
							if (unk_0xD32EE22119FFF87D(iLocal_231, unk_0xE2D3D51028F0428A()) || unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iLocal_231, 8f, 8f, 8f, 0, 1, 0))
							{
								if (!bLocal_287)
								{
									if (!func_70("recsb_coppon"))
									{
										if (!unk_0xF68107C40359970C(iLocal_226[0]))
										{
											func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
											func_3();
											unk_0x4EDE34FBADD967A6(0);
											func_39(&uLocal_54, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_287 = true;
										}
										else if (!unk_0xF68107C40359970C(iLocal_226[1]))
										{
											unk_0xEEBC95A38CBDED42(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
											func_59(&uLocal_54, 4);
											func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
											func_3();
											unk_0x4EDE34FBADD967A6(0);
											func_39(&uLocal_54, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_287 = true;
										}
										else if (!unk_0xF68107C40359970C(iLocal_226[2]))
										{
											unk_0xEEBC95A38CBDED42(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
											func_59(&uLocal_54, 4);
											func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
											func_3();
											unk_0x4EDE34FBADD967A6(0);
											func_39(&uLocal_54, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_287 = true;
										}
									}
								}
								iLocal_238++;
								if (iLocal_238 > 40)
								{
									bLocal_286 = true;
									bLocal_49 = true;
									if (!unk_0x55B23FE400FCEA6B(uLocal_270, 0))
									{
										unk_0x9972EFADA7A2A47D(5, iLocal_268, joaat("player"));
										iVar0 = 0;
										while (iVar0 < iLocal_226)
										{
											if (!unk_0xF68107C40359970C(iLocal_226[iVar0]))
											{
												unk_0xC1A74225341AA9FB(iLocal_226[iVar0], unk_0xE2D3D51028F0428A(), 0, 16);
												unk_0xABC2CA6F28903308(iLocal_226[iVar0], 1);
												unk_0xECA3A29060F3B861(iLocal_226[iVar0], unk_0xE2D3D51028F0428A());
												unk_0x25D0F99524B26091(iLocal_226[iVar0], 1);
											}
											iVar0++;
										}
									}
								}
							}
						}
					}
					else if (bLocal_287)
					{
						iLocal_238 = 40;
					}
					else
					{
						iLocal_238 = 0;
					}
				}
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_226)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_226[iVar1]))
		{
			if (unk_0x0747E45CFF1F74AA(iLocal_226[iVar1], unk_0xE2D3D51028F0428A(), 1))
			{
				bLocal_49 = true;
			}
			if (unk_0x55A0C756C4A8220C(unk_0x9993EF7FDBCDB632(), 0))
			{
				if (unk_0x0747E45CFF1F74AA(iLocal_226[iVar1], unk_0x9993EF7FDBCDB632(), 1))
				{
					bLocal_49 = true;
				}
			}
		}
		iVar1++;
	}
	if (bLocal_286)
	{
	}
	if (iLocal_266)
	{
		if (unk_0xC9D9444186B5A374() > 6000)
		{
			if (unk_0xC9D9444186B5A374() > 6000 && unk_0xC9D9444186B5A374() < 7000)
			{
				unk_0x85050CAC8798CDD0(330.1744f, 2629.238f, 43.5056f, 30f);
			}
			if (!iLocal_262)
			{
				if (bLocal_50)
				{
					if (!func_37())
					{
						if (!unk_0xF68107C40359970C(iLocal_226[0]))
						{
							func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!unk_0xF68107C40359970C(iLocal_226[1]))
						{
							unk_0xEEBC95A38CBDED42(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_54, 4);
							func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!unk_0xF68107C40359970C(iLocal_226[2]))
						{
							unk_0xEEBC95A38CBDED42(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_54, 4);
							func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						iLocal_262 = 1;
					}
				}
				else if (!iLocal_264)
				{
					if (!func_37())
					{
						if (!unk_0xF68107C40359970C(iLocal_226[0]))
						{
							func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!unk_0xF68107C40359970C(iLocal_226[1]))
						{
							unk_0xEEBC95A38CBDED42(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_54, 4);
							func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!unk_0xF68107C40359970C(iLocal_226[2]))
						{
							unk_0xEEBC95A38CBDED42(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_54, 4);
							func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						iLocal_262 = 1;
					}
				}
			}
			if (unk_0x955815B1A675A225(unk_0xE2D3D51028F0428A(), Vector(43.5005f, 2626.29f, 326.6079f) - Vector(50f, 50f, 50f), Vector(43.5005f, 2626.29f, 326.6079f) + Vector(50f, 50f, 50f), 0, 1))
			{
				bLocal_49 = true;
			}
			if (!unk_0x55B23FE400FCEA6B(iLocal_236, 0))
			{
				if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_236, 0))
				{
					bLocal_49 = true;
					func_3();
					unk_0x4EDE34FBADD967A6(0);
					if (!unk_0xF68107C40359970C(iLocal_226[0]))
					{
						func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
						func_39(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!unk_0xF68107C40359970C(iLocal_226[1]))
					{
						unk_0xEEBC95A38CBDED42(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_54, 4);
						func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
						func_39(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!unk_0xF68107C40359970C(iLocal_226[2]))
					{
						unk_0xEEBC95A38CBDED42(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_54, 4);
						func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
						func_39(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 < iLocal_226)
		{
			if (!unk_0xF68107C40359970C(iLocal_226[iVar1]))
			{
				if (unk_0x803592456AE579B3(uLocal_292[0]) || unk_0x803592456AE579B3(uLocal_292[1]))
				{
					if (unk_0xD32EE22119FFF87D(iLocal_226[iVar1], unk_0xE2D3D51028F0428A()) && unk_0x77A43AFA9AAEC041(iLocal_226[iVar1], unk_0xE2D3D51028F0428A(), 20f, 20f, 20f, 0, 1, 0))
					{
						bLocal_49 = true;
						func_3();
						unk_0x4EDE34FBADD967A6(0);
						if (!unk_0xF68107C40359970C(iLocal_226[0]))
						{
							func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!unk_0xF68107C40359970C(iLocal_226[1]))
						{
							unk_0xEEBC95A38CBDED42(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_54, 4);
							func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!unk_0xF68107C40359970C(iLocal_226[2]))
						{
							unk_0xEEBC95A38CBDED42(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_54, 4);
							func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
					}
				}
				if (unk_0x72F6AE51B7E34865(unk_0xE2D3D51028F0428A(), iLocal_226[iVar1]))
				{
					unk_0x9972EFADA7A2A47D(3, iLocal_268, joaat("player"));
					bLocal_49 = true;
				}
			}
			iVar1++;
		}
		if (!unk_0xF68107C40359970C(iLocal_226[1]) && !unk_0x55B23FE400FCEA6B(iLocal_232[2], 0))
		{
			if (!unk_0x77A43AFA9AAEC041(iLocal_226[1], unk_0xE2D3D51028F0428A(), 100f, 100f, 100f, 0, 1, 0))
			{
				unk_0xB3822DB3D538C8F3(&(iLocal_226[1]));
				unk_0x3D81769BEC61BFF8(&(iLocal_232[2]));
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_232)
	{
		if (!unk_0x55B23FE400FCEA6B(iLocal_232[iVar1], 0))
		{
			if ((unk_0x0747E45CFF1F74AA(iLocal_232[iVar1], unk_0xE2D3D51028F0428A(), 1) || unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_232[iVar1], 0)) || unk_0xBC0CFDF47C99D84B(unk_0xE2D3D51028F0428A(), iLocal_232[iVar1], joaat("weapon_stickybomb"), -1))
			{
				bLocal_49 = true;
			}
			if (unk_0x55A0C756C4A8220C(unk_0x9993EF7FDBCDB632(), 0))
			{
				if (unk_0x0747E45CFF1F74AA(iLocal_232[iVar1], unk_0x9993EF7FDBCDB632(), 1))
				{
					bLocal_49 = true;
				}
			}
		}
		iVar1++;
	}
	if (!unk_0x55B23FE400FCEA6B(uLocal_237, 0))
	{
		if (unk_0x0747E45CFF1F74AA(iLocal_237, unk_0xE2D3D51028F0428A(), 1) || unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_237, 0))
		{
			bLocal_49 = true;
		}
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (unk_0xF30A227F7990AE00(unk_0xE2D3D51028F0428A(), joaat("towtruck")) || unk_0xF30A227F7990AE00(unk_0xE2D3D51028F0428A(), joaat("towtruck2")))
		{
			uVar2 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (iLocal_266)
			{
				if (!unk_0x55B23FE400FCEA6B(iLocal_236, 0))
				{
					if (unk_0x671CB92F637FDB33(uVar2, iLocal_236))
					{
						bLocal_49 = true;
						func_3();
						unk_0x4EDE34FBADD967A6(0);
						if (!unk_0xF68107C40359970C(iLocal_226[0]))
						{
							func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!unk_0xF68107C40359970C(iLocal_226[1]))
						{
							unk_0xEEBC95A38CBDED42(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_54, 4);
							func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!unk_0xF68107C40359970C(iLocal_226[2]))
						{
							unk_0xEEBC95A38CBDED42(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_54, 4);
							func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
					}
				}
			}
			iVar1 = 0;
			while (iVar1 < iLocal_232)
			{
				if (!unk_0x55B23FE400FCEA6B(iLocal_232[iVar1], 0))
				{
					if (unk_0x671CB92F637FDB33(uVar2, iLocal_232[iVar1]))
					{
						bLocal_49 = true;
					}
				}
				iVar1++;
			}
			if (!unk_0x55B23FE400FCEA6B(iLocal_237, 0))
			{
				if (unk_0x671CB92F637FDB33(uVar2, iLocal_237))
				{
					bLocal_49 = true;
				}
			}
		}
	}
	if (bLocal_49 || bLocal_286)
	{
		unk_0xC1B1E9A034A63A62(0);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0x007D28B99DF625B1(unk_0x9E2D6C50374FCFA9(), 1, 0);
		unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0x48A2EC087250E1BC(unk_0x9E2D6C50374FCFA9(), 0f);
		unk_0x8576657A629C4B0A(0.1f);
		unk_0xB0520B53AA49F54F(350f);
		bLocal_49 = true;
		if (!unk_0x55B23FE400FCEA6B(iLocal_236, 0) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_236, 0))
		{
		}
		else
		{
			func_3();
			unk_0x4EDE34FBADD967A6(0);
			if (!iLocal_266)
			{
				if (unk_0xF68107C40359970C(iLocal_222) && !unk_0xF68107C40359970C(iLocal_223))
				{
					func_59(&uLocal_54, 5);
					func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
				}
				if (!unk_0xF68107C40359970C(iLocal_226[0]))
				{
					func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!unk_0xF68107C40359970C(iLocal_226[1]))
				{
					unk_0xEEBC95A38CBDED42(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_54, 4);
					func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!unk_0xF68107C40359970C(iLocal_226[2]))
				{
					unk_0xEEBC95A38CBDED42(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_54, 4);
					func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
			}
			else if (!unk_0xF68107C40359970C(iLocal_226[0]))
			{
				func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!unk_0xF68107C40359970C(iLocal_226[1]))
			{
				unk_0xEEBC95A38CBDED42(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_54, 4);
				func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!unk_0xF68107C40359970C(iLocal_226[2]))
			{
				unk_0xEEBC95A38CBDED42(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_54, 4);
				func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
		}
		unk_0x9972EFADA7A2A47D(5, iLocal_268, joaat("player"));
		if (!func_87())
		{
			unk_0xC1B1E9A034A63A62(0);
			if (!func_87())
			{
				func_74(1);
			}
		}
		if (iLocal_266)
		{
			iVar1 = 0;
			while (iVar1 < iLocal_226)
			{
				if (!unk_0xF68107C40359970C(iLocal_226[iVar1]))
				{
					unk_0xC1A74225341AA9FB(iLocal_226[iVar1], unk_0xE2D3D51028F0428A(), 0, 16);
					unk_0xABC2CA6F28903308(iLocal_226[iVar1], 1);
					unk_0xECA3A29060F3B861(iLocal_226[iVar1], unk_0xE2D3D51028F0428A());
					unk_0x882A3682867542AA(iLocal_226[iVar1], 1, 1, 1, 0);
					unk_0x25D0F99524B26091(iLocal_226[iVar1], 1);
					unk_0x71B502FC2E129665(iLocal_226[iVar1], 2);
					unk_0xBC12D08EE7559CCD(iLocal_226[iVar1], 50, 1);
				}
				iVar1++;
			}
		}
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_224))
	{
		if (unk_0x0747E45CFF1F74AA(iLocal_224, unk_0xE2D3D51028F0428A(), 1))
		{
			unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 0);
			unk_0x9972EFADA7A2A47D(5, iLocal_268, joaat("player"));
			bLocal_49 = true;
		}
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_225))
	{
		if (unk_0x0747E45CFF1F74AA(iLocal_225, unk_0xE2D3D51028F0428A(), 1))
		{
			unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 0);
			unk_0x9972EFADA7A2A47D(5, iLocal_268, joaat("player"));
			bLocal_49 = true;
		}
	}
	if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
	{
		bLocal_49 = true;
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0x9972EFADA7A2A47D(5, iLocal_268, joaat("player"));
	}
}

int func_74(int iParam0)
{
	if (func_78())
	{
		Global_113376 = 1;
		Global_113373 = unk_0x320D1840B6DAA1CC();
		if (func_19(Global_113375))
		{
			func_75(0);
		}
		unk_0xEFE837B21D5CF02C(1, "RE_TITLE");
		if (iParam0 && func_19(Global_113375))
		{
			unk_0xC70E97154CC5B243();
		}
		return 1;
	}
	return 0;
}

void func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_76(func_77(iParam0), -1);
					Global_113386.f_24995.f_2++;
					unk_0xCED9E32812D6C7C7(&Global_113382, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113382, 1))
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_76(func_77(iParam0), -1);
					Global_113386.f_24995.f_3++;
					unk_0xCED9E32812D6C7C7(&Global_113382, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113382, 2))
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_76(func_77(iParam0), -1);
					Global_113386.f_24995.f_4++;
					unk_0xCED9E32812D6C7C7(&Global_113382, 2);
				}
			}
			break;
	}
}

void func_76(var uParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(uParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

char* func_77(int iParam0)
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

int func_78()
{
	switch (func_79(&Global_32019, 0, 5, 0, unk_0x69CE66B03B2184EB()))
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

int func_79(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_83(0))
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
		if (!func_81(iParam2))
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
			func_80(uParam0, iParam4);
		}
	}
	return 2;
}

void func_80(var uParam0, int iParam1)
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

bool func_81(int iParam0)
{
	return func_82(iParam0, Global_43052);
}

int func_82(int iParam0, int iParam1)
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

int func_83(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_81(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_84()
{
	int iVar0;
	
	if ((!unk_0xF68107C40359970C(iLocal_226[0]) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A())) && !unk_0xF68107C40359970C(iLocal_222))
	{
	}
	if ((unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 220.6075f, 2615.145f, 35.8465f, 440.8339f, 2684.23f, 72.6324f, 183.125f, 0, 1, 0) && unk_0x0318E2EE6FB4563F(Local_219, 1f)) || unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), 325.6556f, 2647.021f, 43.6289f, 30f, 30f, 30f, 0, 1, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_226)
		{
			if (!unk_0xF68107C40359970C(iLocal_226[iVar0]))
			{
				unk_0xE701941B064F05A2(iLocal_226[iVar0], 1, iLocal_267);
				if (!unk_0x12DD4A0B247D9B4D(uLocal_297[iVar0]))
				{
					uLocal_297[iVar0] = func_85(iLocal_226[iVar0], 0, 145);
					unk_0x3430966AC4550BB9(uLocal_297[iVar0], 0);
				}
			}
			iVar0++;
		}
		if (!unk_0x55B23FE400FCEA6B(iLocal_222, 0) || (!unk_0xF68107C40359970C(iLocal_222) && !iLocal_277))
		{
			unk_0xE701941B064F05A2(iLocal_222, 1, iLocal_268);
			uLocal_295 = func_85(iLocal_222, 0, 145);
			unk_0x3430966AC4550BB9(uLocal_295, 0);
			iLocal_276 = 0;
			iLocal_277 = 1;
		}
		if (!unk_0x55B23FE400FCEA6B(iLocal_223, 0) || (!unk_0xF68107C40359970C(iLocal_223) && !iLocal_278))
		{
			unk_0xE701941B064F05A2(iLocal_223, 1, iLocal_268);
			uLocal_296 = func_85(iLocal_223, 0, 145);
			unk_0x3430966AC4550BB9(uLocal_296, 0);
			iLocal_275 = 0;
			iLocal_278 = 1;
		}
		unk_0xC1B1E9A034A63A62(0);
		if (!func_87())
		{
			func_74(1);
		}
	}
}

var func_85(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_86(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x12DD4A0B247D9B4D(uVar0)) && unk_0xE73671E3D37CF79E(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		unk_0xAF62582F3EA39095(uVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_86(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xE5965CDF24F93A9F(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xEFD6451BF0F3352F(iParam0);
	if (unk_0x04D9F44466CBF3CA(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_58(unk_0x9315DBF7D972F07A(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD809204F14EF9B68(uVar0, bParam1);
		}
		else
		{
			unk_0xA582EE8380437B1B(uVar0, 2);
		}
	}
	else if (unk_0x9044EDB8A7BF67B4(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_58(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
		unk_0xD809204F14EF9B68(uVar0, bParam1);
	}
	else if (unk_0x0086095F1731DE17(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_58(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_87()
{
	if ((Global_113375 == func_34() && unk_0xE3BBDB1C36703410()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

void func_88()
{
	int iVar0;
	
	if (!iLocal_280)
	{
		if (!bLocal_49 && !iLocal_266)
		{
			if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), 325.6556f, 2647.021f, 43.6289f, 30f, 30f, 30f, 0, 1, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_226)
				{
					if (unk_0x12DD4A0B247D9B4D(uLocal_297[iVar0]))
					{
						unk_0x3430966AC4550BB9(uLocal_297[iVar0], 1);
					}
					iVar0++;
				}
				if (unk_0x12DD4A0B247D9B4D(uLocal_295))
				{
					unk_0x3430966AC4550BB9(uLocal_295, 1);
				}
				if (unk_0x12DD4A0B247D9B4D(uLocal_296))
				{
					unk_0x3430966AC4550BB9(uLocal_296, 1);
				}
				if (!unk_0xF68107C40359970C(iLocal_226[0]))
				{
					func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!unk_0xF68107C40359970C(iLocal_226[1]))
				{
					unk_0xEEBC95A38CBDED42(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_54, 4);
					func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!unk_0xF68107C40359970C(iLocal_226[2]))
				{
					unk_0xEEBC95A38CBDED42(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_54, 4);
					func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_54, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				iLocal_280 = 1;
			}
		}
	}
	if ((func_87() && !iLocal_264) && !iLocal_266)
	{
		if (iLocal_283 == 0 && !func_37())
		{
			unk_0xC1B1E9A034A63A62(0);
			if (func_51() == 0)
			{
				func_39(&uLocal_54, "recsbau", "recsb_comm", 4, 0, 0, 0);
			}
			else if (func_51() == 1)
			{
				func_39(&uLocal_54, "recsbau", "recsb_comf", 4, 0, 0, 0);
			}
			else if (func_51() == 2)
			{
				func_39(&uLocal_54, "recsbau", "recsb_comt", 4, 0, 0, 0);
			}
			iLocal_283++;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (iLocal_283 == 1 && !func_37())
		{
			unk_0xC1B1E9A034A63A62(0);
			if (!unk_0xF68107C40359970C(iLocal_226[0]))
			{
				func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!unk_0xF68107C40359970C(iLocal_226[1]))
			{
				unk_0xEEBC95A38CBDED42(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_54, 4);
				func_56(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!unk_0xF68107C40359970C(iLocal_226[2]))
			{
				unk_0xEEBC95A38CBDED42(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_54, 4);
				func_56(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			iLocal_283++;
			unk_0xC1B1E9A034A63A62(0);
		}
		if ((iLocal_283 == 2 && unk_0x83666F9FB8FEBD4B() > 2000) && !func_37())
		{
			if (!unk_0xF68107C40359970C(iLocal_222))
			{
				func_39(&uLocal_54, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			else if (!unk_0xF68107C40359970C(iLocal_223))
			{
				func_59(&uLocal_54, 5);
				func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
				func_39(&uLocal_54, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			unk_0xC1B1E9A034A63A62(0);
			iLocal_283++;
		}
		if ((iLocal_283 == 3 && unk_0x83666F9FB8FEBD4B() > 2000) && !func_37())
		{
			if (!bLocal_50)
			{
				if (!iLocal_263)
				{
					if (!unk_0xF68107C40359970C(iLocal_222))
					{
						func_39(&uLocal_54, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					else if (!unk_0xF68107C40359970C(iLocal_223))
					{
						func_59(&uLocal_54, 5);
						func_56(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
						func_39(&uLocal_54, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					iLocal_263 = 1;
				}
			}
			if (!bLocal_49)
			{
				func_89(&(iLocal_226[0]), "recsb_copclo");
				func_89(&(iLocal_226[1]), "recsb_copclo");
				func_89(&(iLocal_226[2]), "recsb_copclo");
			}
		}
		if (iLocal_283 == 4 && unk_0x83666F9FB8FEBD4B() > 5000)
		{
			unk_0xC1B1E9A034A63A62(0);
			iLocal_283++;
		}
	}
}

void func_89(var uParam0, char* sParam1)
{
	if (!unk_0xF68107C40359970C(*uParam0))
	{
		if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), *uParam0, 4f, 4f, 4f, 0, 1, 0))
		{
			if (!bLocal_49)
			{
				func_56(&uLocal_54, 4, *uParam0, "RECSBCop1", 0, 1);
				func_39(&uLocal_54, "recsbau", sParam1, 4, 0, 0, 0);
				unk_0xF30F15F203736DE4(*uParam0, unk_0xE2D3D51028F0428A(), 10000, 48, 4);
			}
			unk_0xC1B1E9A034A63A62(0);
			iLocal_283++;
		}
	}
}

void func_90()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_226)
	{
		if (unk_0xF68107C40359970C(iLocal_226[iVar0]))
		{
			if (unk_0x12DD4A0B247D9B4D(uLocal_297[iVar0]))
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_297[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0xF68107C40359970C(iLocal_222))
	{
		if (unk_0x12DD4A0B247D9B4D(uLocal_295))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_295);
		}
	}
	if (unk_0xF68107C40359970C(iLocal_223))
	{
		if (unk_0x12DD4A0B247D9B4D(uLocal_296))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_296);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_232)
	{
		if (!unk_0x55B23FE400FCEA6B(iLocal_232[iVar0], 0))
		{
			if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_232[iVar0], 0))
			{
				unk_0xAF026BFB427D2C6F(iLocal_232[iVar0], 0);
			}
		}
		iVar0++;
	}
	if (bLocal_50)
	{
		if (!iLocal_52)
		{
			unk_0x9972EFADA7A2A47D(5, iLocal_267, joaat("player"));
			if (!unk_0xF68107C40359970C(iLocal_222))
			{
				if (unk_0x12DD4A0B247D9B4D(uLocal_295))
				{
					unk_0xFFD8EB5462B07B59(&uLocal_295);
				}
				if (!unk_0x12DD4A0B247D9B4D(uLocal_295))
				{
					uLocal_295 = func_85(iLocal_222, 1, 145);
					unk_0xA7266A50941DBAEA(iLocal_222, 1);
				}
				unk_0xC1A74225341AA9FB(iLocal_222, unk_0xE2D3D51028F0428A(), 0, 16);
				unk_0xABC2CA6F28903308(iLocal_222, 1);
				unk_0xECA3A29060F3B861(iLocal_222, unk_0xE2D3D51028F0428A());
				unk_0x25D0F99524B26091(iLocal_222, 1);
			}
			if (!unk_0xF68107C40359970C(iLocal_223))
			{
				if (unk_0x12DD4A0B247D9B4D(uLocal_296))
				{
					unk_0xFFD8EB5462B07B59(&uLocal_296);
				}
				if (!unk_0x12DD4A0B247D9B4D(uLocal_296))
				{
					uLocal_296 = func_85(iLocal_223, 1, 145);
					unk_0xA7266A50941DBAEA(iLocal_223, 1);
				}
				unk_0xC1A74225341AA9FB(iLocal_223, unk_0xE2D3D51028F0428A(), 0, 16);
				unk_0xABC2CA6F28903308(iLocal_223, 1);
				unk_0xECA3A29060F3B861(iLocal_223, unk_0xE2D3D51028F0428A());
				unk_0x25D0F99524B26091(iLocal_223, 1);
			}
			iLocal_52 = 1;
		}
		if (bLocal_49)
		{
			if (!iLocal_53)
			{
				unk_0x9972EFADA7A2A47D(5, iLocal_268, joaat("player"));
				iVar0 = 0;
				while (iVar0 < iLocal_226)
				{
					if (!unk_0xF68107C40359970C(iLocal_226[iVar0]))
					{
						unk_0xA7266A50941DBAEA(iLocal_226[iVar0], 1);
						if (unk_0x12DD4A0B247D9B4D(uLocal_297[iVar0]))
						{
							unk_0xFFD8EB5462B07B59(&(uLocal_297[iVar0]));
						}
						unk_0xC1A74225341AA9FB(iLocal_226[iVar0], unk_0xE2D3D51028F0428A(), 0, 16);
						unk_0xABC2CA6F28903308(iLocal_226[iVar0], 1);
						unk_0xECA3A29060F3B861(iLocal_226[iVar0], unk_0xE2D3D51028F0428A());
						unk_0x25D0F99524B26091(iLocal_226[iVar0], 1);
					}
					iVar0++;
				}
				iLocal_53 = 1;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < iLocal_226)
			{
				if (!unk_0xF68107C40359970C(iLocal_226[iVar0]))
				{
					unk_0xA7266A50941DBAEA(iLocal_226[iVar0], 0);
				}
				iVar0++;
			}
		}
	}
	else if (bLocal_49)
	{
		if (!iLocal_51)
		{
			if (!unk_0xF68107C40359970C(iLocal_222))
			{
				unk_0xA7266A50941DBAEA(iLocal_222, 0);
			}
			if (!unk_0xF68107C40359970C(iLocal_223))
			{
				unk_0xA7266A50941DBAEA(iLocal_223, 0);
			}
			iLocal_51 = 1;
		}
		if (!iLocal_53)
		{
			unk_0x9972EFADA7A2A47D(5, iLocal_268, joaat("player"));
			iVar0 = 0;
			while (iVar0 < iLocal_226)
			{
				if (!unk_0xF68107C40359970C(iLocal_226[iVar0]))
				{
					unk_0xA7266A50941DBAEA(iLocal_226[iVar0], 1);
					unk_0xE38EE0041B752011(iLocal_226[iVar0]);
					if (unk_0x12DD4A0B247D9B4D(uLocal_297[iVar0]))
					{
						unk_0xFFD8EB5462B07B59(&(uLocal_297[iVar0]));
					}
					if (!unk_0x12DD4A0B247D9B4D(uLocal_297[iVar0]))
					{
						uLocal_297[iVar0] = func_85(iLocal_226[iVar0], 1, 145);
					}
					unk_0xC1A74225341AA9FB(iLocal_226[iVar0], unk_0xE2D3D51028F0428A(), 0, 16);
					unk_0xABC2CA6F28903308(iLocal_226[iVar0], 1);
					unk_0xECA3A29060F3B861(iLocal_226[iVar0], unk_0xE2D3D51028F0428A());
					unk_0x25D0F99524B26091(iLocal_226[iVar0], 1);
				}
				iVar0++;
			}
			iLocal_53 = 1;
		}
	}
}

void func_91()
{
	unk_0xD69A0C3662175E68(joaat("s_m_y_ranger_01"));
	unk_0xD69A0C3662175E68(joaat("a_m_y_genstreet_01"));
	unk_0xD69A0C3662175E68(joaat("s_m_m_paramedic_01"));
	unk_0xD69A0C3662175E68(joaat("sheriff"));
	unk_0xD69A0C3662175E68(joaat("phoenix"));
	if ((((unk_0x0152AA00FA3130F1(joaat("s_m_y_ranger_01")) && unk_0x0152AA00FA3130F1(joaat("a_m_y_genstreet_01"))) && unk_0x0152AA00FA3130F1(joaat("s_m_m_paramedic_01"))) && unk_0x0152AA00FA3130F1(joaat("sheriff"))) && unk_0x0152AA00FA3130F1(joaat("phoenix")))
	{
		unk_0x7CD708DEB04F8474(joaat("phoenix"), 1);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 1);
		unk_0x8576657A629C4B0A(0f);
		unk_0x2915D98110F23A29(Vector(44.49f, 2630.83f, 335.22f) - Vector(20f, 50f, 50f), Vector(44.49f, 2630.83f, 335.22f) + Vector(20f, 50f, 50f), 0, 1, 1, 1);
		unk_0x208B14CA225DC5A0(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 0, 0, 1);
		unk_0x84A65E2E9CFB6A77(Vector(43.4932f, 2612.694f, 328.0555f) - Vector(10f, 10f, 10f), Vector(43.4932f, 2612.694f, 328.0555f) + Vector(10f, 10f, 10f), 0, 1);
		unk_0x02B222EADC9DC566(328.0555f, 2612.694f, 43.4932f, 5f, 0, 0, 0, 0, 0, 0, 0);
		iLocal_236 = unk_0xBA715A7BEBA5A1F9(joaat("phoenix"), 326.78f, 2626.56f, 43.5081f, 45.21f, 1, 1, 0);
		iLocal_232[0] = unk_0xBA715A7BEBA5A1F9(joaat("sheriff"), 314.1008f, 2641.67f, 43.5055f, 258.9436f, 1, 1, 0);
		iLocal_232[1] = unk_0xBA715A7BEBA5A1F9(joaat("sheriff"), 330.7097f, 2646.913f, 43.685f, 120.9436f, 1, 1, 0);
		iLocal_232[2] = unk_0xBA715A7BEBA5A1F9(joaat("sheriff"), 321.4496f, 2649.388f, 43.5706f, 105.9436f, 1, 1, 0);
		unk_0xFADD5F130031FAF6(iLocal_232[2], 1);
		unk_0xFADD5F130031FAF6(iLocal_232[1], 1);
		unk_0xFADD5F130031FAF6(iLocal_232[0], 1);
		unk_0xBF0DDDDACD98C554(iLocal_232[2], 1);
		unk_0xBF0DDDDACD98C554(iLocal_232[1], 1);
		unk_0xBF0DDDDACD98C554(iLocal_232[0], 1);
		unk_0xAF026BFB427D2C6F(iLocal_232[0], 1);
		unk_0xAF026BFB427D2C6F(iLocal_232[2], 1);
		unk_0xAF026BFB427D2C6F(iLocal_232[1], 1);
		unk_0xAA207A327A73D480(iLocal_236, 1);
		unk_0xAA207A327A73D480(iLocal_232[0], 1);
		unk_0xAA207A327A73D480(iLocal_232[1], 1);
		unk_0xAA207A327A73D480(iLocal_232[2], 1);
		iLocal_222 = unk_0xA8D58C3AADA2C41C(19, joaat("a_m_y_genstreet_01"), 321.31f, 2615.66f, 43.4963f, 346f, 1, 1);
		iLocal_223 = unk_0xA8D58C3AADA2C41C(19, joaat("a_m_y_genstreet_01"), 326.25f, 2624.51f, 43.4846f, 341f, 1, 1);
		iLocal_230 = unk_0xA8D58C3AADA2C41C(6, joaat("s_m_y_ranger_01"), 325.3731f, 2631.16f, 43.5248f, 87f, 1, 1);
		iLocal_226[0] = unk_0xA8D58C3AADA2C41C(6, joaat("s_m_y_ranger_01"), 310.6203f, 2642.854f, 43.5173f, 226f, 1, 1);
		iLocal_226[1] = unk_0xA8D58C3AADA2C41C(6, joaat("s_m_y_ranger_01"), 319.5652f, 2650.067f, 43.5411f, 189f, 1, 1);
		iLocal_226[2] = unk_0xA8D58C3AADA2C41C(6, joaat("s_m_y_ranger_01"), 324.0396f, 2650.964f, 43.5983f, 214f, 1, 1);
		unk_0xD8B630F464FE1D6D(iLocal_226[0], "ped_cops[0]");
		unk_0xD8B630F464FE1D6D(iLocal_226[1], "ped_cops[1]");
		unk_0xD8B630F464FE1D6D(iLocal_226[2], "ped_cops[2]");
		unk_0xA091C233F9D0AB04(iLocal_226[0], 1, -1, 0);
		unk_0xA091C233F9D0AB04(iLocal_226[1], 1, -1, 0);
		unk_0xA091C233F9D0AB04(iLocal_226[2], 1, -1, 0);
		unk_0x1EE49ABA6B11E9CF(iLocal_223, 326.25f, 2624.51f, 43.4846f, 3.5f, 0, 0);
		unk_0x1EE49ABA6B11E9CF(iLocal_222, 321.31f, 2615.66f, 43.4963f, 3.5f, 0, 0);
		unk_0x1EE49ABA6B11E9CF(iLocal_226[0], 310.6203f, 2642.854f, 43.5173f, 3.5f, 0, 0);
		unk_0x1EE49ABA6B11E9CF(iLocal_226[1], 319.5652f, 2650.067f, 43.5411f, 3.5f, 0, 0);
		unk_0x1EE49ABA6B11E9CF(iLocal_226[2], 324.0396f, 2650.964f, 43.5983f, 3.5f, 0, 0);
		unk_0xF21F1B3825B46822(iLocal_226[0]);
		unk_0xF21F1B3825B46822(iLocal_226[1]);
		unk_0xF21F1B3825B46822(iLocal_226[2]);
		unk_0xBC12D08EE7559CCD(iLocal_226[0], 0, 1);
		unk_0xBC12D08EE7559CCD(iLocal_226[1], 0, 1);
		unk_0xBC12D08EE7559CCD(iLocal_226[2], 0, 1);
		unk_0xBC12D08EE7559CCD(iLocal_226[0], 1, 1);
		unk_0xBC12D08EE7559CCD(iLocal_226[1], 1, 1);
		unk_0xBC12D08EE7559CCD(iLocal_226[2], 1, 1);
		unk_0x348A212511C78DBF(iLocal_226[0], 13);
		unk_0x348A212511C78DBF(iLocal_226[1], 13);
		unk_0x348A212511C78DBF(iLocal_226[2], 13);
		unk_0xBC12D08EE7559CCD(iLocal_223, 0, 1);
		unk_0xBC12D08EE7559CCD(iLocal_222, 0, 1);
		unk_0xBC12D08EE7559CCD(iLocal_223, 1, 1);
		unk_0xBC12D08EE7559CCD(iLocal_222, 1, 1);
		unk_0x2476BE9932670CAD(iLocal_232[0], 0, 0, 0);
		unk_0x2476BE9932670CAD(iLocal_232[0], 1, 0, 0);
		unk_0x2476BE9932670CAD(iLocal_232[1], 1, 0, 0);
		unk_0x2476BE9932670CAD(iLocal_232[1], 0, 0, 0);
		unk_0x2476BE9932670CAD(iLocal_232[2], 1, 0, 0);
		unk_0x2476BE9932670CAD(iLocal_232[2], 0, 0, 0);
		unk_0x2476BE9932670CAD(iLocal_236, 1, 0, 0);
		unk_0x2476BE9932670CAD(iLocal_236, 0, 0, 0);
		unk_0x006574E87E6F1942(iLocal_236, 1, 1);
		unk_0xD642E010A287ADFD("robbers", &iLocal_267);
		unk_0xD642E010A287ADFD("cops", &iLocal_268);
		unk_0xF160248D9083ED0C(iLocal_230, 0, 0);
		unk_0xFF4BEB6CFF55A013(iLocal_223, iLocal_267);
		unk_0xE701941B064F05A2(iLocal_223, 0, iLocal_268);
		unk_0xF160248D9083ED0C(iLocal_223, 300, 0);
		unk_0x9521FB98DB6DDF50(iLocal_223, joaat("weapon_pistol"), 200, 1, 1);
		unk_0xE014FF3C785EEFB5(iLocal_223, 100f);
		unk_0x5C9D9A4EA475F37E(iLocal_223, 100f);
		unk_0x274A180D57A0D9A6(iLocal_223, 35f, 35f, 1);
		unk_0x348A212511C78DBF(iLocal_223, 13);
		unk_0xFF4BEB6CFF55A013(iLocal_222, iLocal_267);
		unk_0xE701941B064F05A2(iLocal_222, 0, iLocal_268);
		unk_0xF160248D9083ED0C(iLocal_222, 300, 0);
		unk_0x9521FB98DB6DDF50(iLocal_222, joaat("weapon_pistol"), 200, 1, 1);
		unk_0xE014FF3C785EEFB5(iLocal_222, 100f);
		unk_0x5C9D9A4EA475F37E(iLocal_222, 100f);
		unk_0x274A180D57A0D9A6(iLocal_222, 35f, 35f, 1);
		unk_0x348A212511C78DBF(iLocal_222, 13);
		unk_0xE701941B064F05A2(iLocal_226[0], 0, iLocal_267);
		unk_0xE701941B064F05A2(iLocal_226[1], 0, iLocal_267);
		unk_0xE701941B064F05A2(iLocal_226[2], 0, iLocal_267);
		unk_0x9521FB98DB6DDF50(iLocal_226[0], joaat("weapon_pumpshotgun"), 200, 1, 1);
		unk_0x9521FB98DB6DDF50(iLocal_226[1], joaat("weapon_pistol"), 200, 1, 1);
		unk_0x9521FB98DB6DDF50(iLocal_226[2], joaat("weapon_pumpshotgun"), 200, 1, 1);
		unk_0xE014FF3C785EEFB5(iLocal_226[0], 100f);
		unk_0x5C9D9A4EA475F37E(iLocal_226[0], 100f);
		unk_0xE014FF3C785EEFB5(iLocal_226[1], 100f);
		unk_0x5C9D9A4EA475F37E(iLocal_226[1], 100f);
		unk_0xE014FF3C785EEFB5(iLocal_226[2], 100f);
		unk_0x5C9D9A4EA475F37E(iLocal_226[2], 100f);
		unk_0xFF4BEB6CFF55A013(iLocal_226[0], iLocal_268);
		unk_0xFF4BEB6CFF55A013(iLocal_226[1], iLocal_268);
		unk_0xFF4BEB6CFF55A013(iLocal_226[2], iLocal_268);
		unk_0x07CECF421D895F3D(5, 0);
		unk_0x07CECF421D895F3D(3, 0);
		unk_0x9972EFADA7A2A47D(1, iLocal_268, joaat("COP"));
		unk_0x9972EFADA7A2A47D(1, joaat("COP"), iLocal_268);
		unk_0x9972EFADA7A2A47D(1, iLocal_268, joaat("player"));
		unk_0x9972EFADA7A2A47D(1, iLocal_267, joaat("player"));
		unk_0x9972EFADA7A2A47D(5, iLocal_268, iLocal_267);
		unk_0x9972EFADA7A2A47D(5, joaat("COP"), iLocal_267);
		unk_0x9972EFADA7A2A47D(5, iLocal_267, iLocal_268);
		unk_0xB67D1D267C666DC4(iLocal_226[0], iLocal_222, 3000, 0);
		unk_0xB67D1D267C666DC4(iLocal_226[1], iLocal_222, 3000, 0);
		unk_0xB67D1D267C666DC4(iLocal_226[2], iLocal_222, 3000, 0);
		if (func_51() == 0)
		{
			func_56(&uLocal_54, 0, unk_0xE2D3D51028F0428A(), "MICHAEL", 0, 1);
		}
		else if (func_51() == 1)
		{
			func_56(&uLocal_54, 0, unk_0xE2D3D51028F0428A(), "FRANKLIN", 0, 1);
		}
		else if (func_51() == 2)
		{
			func_56(&uLocal_54, 0, unk_0xE2D3D51028F0428A(), "TREVOR", 0, 1);
		}
		func_56(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
		func_56(&uLocal_54, 5, iLocal_222, "RECSBRobber1", 0, 1);
		unk_0xEEBC95A38CBDED42(iLocal_226[0], "S_M_Y_RANGER_01_WHITE_FULL_01");
		unk_0xEEBC95A38CBDED42(iLocal_222, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		unk_0xEEBC95A38CBDED42(iLocal_222, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		iLocal_47 = 1;
	}
}

void func_92(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_34();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_94(iParam0);
	unk_0xEEEFCC23227A8148(0);
	unk_0xA560174A439E78F1(1);
	Global_113372 = 0;
	func_93();
}

void func_93()
{
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			unk_0x7CD708DEB04F8474(unk_0x15CAA6D7B11F1A7C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)), 1);
		}
		unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 32, 0);
	}
}

void func_94(int iParam0)
{
	Global_113375 = iParam0;
}

int func_95(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_34();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_147())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_146())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_10(0))
		{
			return 0;
		}
		if (func_142())
		{
			return 0;
		}
		if (func_141())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_27(func_51()))
		{
			if (func_135(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_134(iParam3))
		{
			return 0;
		}
		if (func_27(func_51()))
		{
			if (func_133(func_51()) == 4 || func_133(func_51()) == 5)
			{
				return 0;
			}
		}
		if (func_27(func_51()))
		{
			if (!func_132(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_131(Global_113386.f_24995.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x320D1840B6DAA1CC() - Global_113377) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_130())
		{
			return 0;
		}
		if (unk_0x969475FA6AB2673A())
		{
			return 0;
		}
		if (unk_0xE3BBDB1C36703410())
		{
			return 0;
		}
		if (!func_121(4))
		{
			return 0;
		}
		if (!func_81(5))
		{
			return 0;
		}
		if (func_120(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xBCC73B466E2B2350(unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A())))
		{
			if ((unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0xA0F62C1038208492(377.153f, -717.567f, 10.0536f) || unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0xA0F62C1038208492(320.9934f, 265.2515f, 82.1221f)) || unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0xA0F62C1038208492(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_120(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_134(30) && !func_120(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_27(func_51()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_113386.f_2363.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_113386.f_2363.f_539.f_2296[iVar4];
				if (func_119(iVar8))
				{
					if (func_97(iVar4))
					{
						if (!func_96(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Var5) < (210f * 210f))
							{
								if (func_51() != iVar4)
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

bool func_96(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_97(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_98(iVar0);
}

int func_98(int iParam0)
{
	return func_99(iParam0, 1);
}

int func_99(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_119(iParam0))
	{
		return 0;
	}
	func_100(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_100(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_101(func_112(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_101(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_111(iParam0, iParam1))
	{
		iVar0 = func_110(iParam1);
		iVar1 = func_108(iParam0);
		iVar2 = (func_108(iParam0) - func_108(iParam1));
		iVar3 = (func_110(iParam0) - func_110(iParam1));
		iVar4 = (func_107(iParam0) - func_107(iParam1));
		iVar5 = (func_106(iParam0) - func_106(iParam1));
		iVar6 = (func_105(iParam0) - func_105(iParam1));
		iVar7 = (func_104(iParam0) - func_104(iParam1));
	}
	else
	{
		iVar0 = func_110(iParam0);
		iVar1 = func_108(iParam1);
		iVar2 = (func_108(iParam1) - func_108(iParam0));
		iVar3 = (func_110(iParam1) - func_110(iParam0));
		iVar4 = (func_107(iParam1) - func_107(iParam0));
		iVar5 = (func_106(iParam1) - func_106(iParam0));
		iVar6 = (func_105(iParam1) - func_105(iParam0));
		iVar7 = (func_104(iParam1) - func_104(iParam0));
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
		iVar4 = (iVar4 + func_103(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_102(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_102(float fParam0, float fParam1, float fParam2)
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

int func_103(int iParam0, int iParam1)
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

int func_104(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_105(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_106(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_107(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_108(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_109(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_109(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_110(int iParam0)
{
	return iParam0 & 15;
}

int func_111(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_119(iParam1) || !func_119(iParam0))
	{
		return 1;
	}
	iVar0 = func_108(iParam0);
	iVar1 = func_108(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_110(iParam0);
	iVar1 = func_110(iParam1);
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
	iVar0 = func_106(iParam0);
	iVar1 = func_106(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	iVar0 = func_104(iParam0);
	iVar1 = func_104(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_112()
{
	var uVar0;
	
	func_118(&uVar0, unk_0xAA2844CAD88768B5());
	func_117(&uVar0, unk_0x80F97D7D29800A1A());
	func_116(&uVar0, unk_0x09FC827691DACE59());
	func_115(&uVar0, unk_0xD52BD97E61483713());
	func_114(&uVar0, unk_0x771485043FDC55DE());
	func_113(&uVar0, unk_0x1137FD08B8D3F874());
	return uVar0;
}

void func_113(var uParam0, int iParam1)
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

void func_114(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_115(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_110(*uParam0);
	iVar1 = func_108(*uParam0);
	if (iParam1 < 1 || iParam1 > func_103(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_116(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_117(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_118(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_119(int iParam0)
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
	iVar0 = func_104(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_105(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_106(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_108(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_110(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_107(iParam0);
	if (iVar5 < 1 || iVar5 > func_103(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_120(int iParam0, bool bParam1)
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_121(int iParam0)
{
	int iVar0;
	
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				iVar0 = func_51();
				if (!func_27(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_129()) || Global_112433) || Global_31962) || func_128()) || func_53(8, -1)) || func_127()) || func_126()) || func_125()) || func_124()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1) || func_129()) || Global_31962) || func_128()) || func_53(8, -1)) || func_125()) || func_127()) || func_126()) || func_124()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_129()) || Global_112433) || Global_31962) || func_128()) || func_53(8, -1)) || func_125()) || func_127()) || func_126()) || func_124()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_129()) || Global_112433) || Global_31962) || func_128()) || func_53(8, -1)) || func_127()) || func_126()) || func_124()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_129() || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || func_53(8, -1)) || func_124()) || func_123()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_53(8, -1) || func_127()) || func_126()) || func_123()) || func_122())
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
							if ((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_129()) || Global_31962) || func_128()) || func_53(8, -1)) || func_126()) || func_125()) || func_124()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || func_129()) || func_126()) || Global_112433) || Global_31962) || func_128()) || Global_44238) || func_53(8, -1)) || func_125()) || func_123()) || func_124()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0)) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1)) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_129()) || Global_112433) || Global_31962) || func_128()) || func_53(8, -1)) || func_125()) || func_123()) || func_127()) || func_126()) || func_124())
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

var func_122()
{
	return Global_100480.f_1;
}

int func_123()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_124()
{
	if (unk_0xB4C854DD86E40FDA(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_125()
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

bool func_126()
{
	return Global_100493.f_376 > 0;
}

bool func_127()
{
	return Global_100493.f_375 > 0;
}

var func_128()
{
	return Global_1575058;
}

int func_129()
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_130()
{
	func_50();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_131(int iParam0)
{
	return func_111(func_112(), iParam0);
}

int func_132(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_51();
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

int func_133(int iParam0)
{
	if (!func_27(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_134(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_147())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113386.f_24995, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113386.f_24995.f_1, iVar0);
	}
	return iVar1;
}

int func_135(float fParam0, bool bParam1)
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
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_27(func_51()))
		{
			iVar36 = func_24();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_113386.f_18574[iVar32 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar32 /*6*/], 3))
				{
					func_136(iVar32, &Var0);
					fVar35 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Var0.f_6, 1);
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

void func_136(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_137(uParam1, "Abigail1", func_139(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 1:
			func_137(uParam1, "Abigail2", func_139(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 2:
			func_137(uParam1, "Barry1", func_139(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 3:
			func_137(uParam1, "Barry2", func_139(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 4:
			func_137(uParam1, "Barry3", func_139(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 5:
			func_137(uParam1, "Barry3A", func_139(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 6:
			func_137(uParam1, "Barry3C", func_139(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 7:
			func_137(uParam1, "Barry4", func_139(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_138(iParam0), 0, 0);
			break;
		
		case 8:
			func_137(uParam1, "Dreyfuss1", func_139(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 9:
			func_137(uParam1, "Epsilon1", func_139(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 10:
			func_137(uParam1, "Epsilon2", func_139(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 11:
			func_137(uParam1, "Epsilon3", func_139(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 12:
			func_137(uParam1, "Epsilon4", func_139(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 13:
			func_137(uParam1, "Epsilon5", func_139(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 14:
			func_137(uParam1, "Epsilon6", func_139(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 15:
			func_137(uParam1, "Epsilon7", func_139(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 16:
			func_137(uParam1, "Epsilon8", func_139(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 17:
			func_137(uParam1, "Extreme1", func_139(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 18:
			func_137(uParam1, "Extreme2", func_139(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 19:
			func_137(uParam1, "Extreme3", func_139(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 20:
			func_137(uParam1, "Extreme4", func_139(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 21:
			func_137(uParam1, "Fanatic1", func_139(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_138(iParam0), 1, 0);
			break;
		
		case 22:
			func_137(uParam1, "Fanatic2", func_139(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_138(iParam0), 1, 0);
			break;
		
		case 23:
			func_137(uParam1, "Fanatic3", func_139(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_138(iParam0), 0, 1);
			break;
		
		case 24:
			func_137(uParam1, "Hao1", func_139(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_138(iParam0), 0, 1);
			break;
		
		case 25:
			func_137(uParam1, "Hunting1", func_139(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 26:
			func_137(uParam1, "Hunting2", func_139(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 27:
			func_137(uParam1, "Josh1", func_139(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 28:
			func_137(uParam1, "Josh2", func_139(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 29:
			func_137(uParam1, "Josh3", func_139(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 30:
			func_137(uParam1, "Josh4", func_139(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 31:
			func_137(uParam1, "Maude1", func_139(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 32:
			func_137(uParam1, "Minute1", func_139(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 33:
			func_137(uParam1, "Minute2", func_139(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 34:
			func_137(uParam1, "Minute3", func_139(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 35:
			func_137(uParam1, "MrsPhilips1", func_139(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 36:
			func_137(uParam1, "MrsPhilips2", func_139(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 37:
			func_137(uParam1, "Nigel1", func_139(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 38:
			func_137(uParam1, "Nigel1A", func_139(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 39:
			func_137(uParam1, "Nigel1B", func_139(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_138(iParam0), 1, 1);
			break;
		
		case 40:
			func_137(uParam1, "Nigel1C", func_139(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_138(iParam0), 1, 1);
			break;
		
		case 41:
			func_137(uParam1, "Nigel1D", func_139(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_138(iParam0), 1, 1);
			break;
		
		case 42:
			func_137(uParam1, "Nigel2", func_139(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 43:
			func_137(uParam1, "Nigel3", func_139(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 44:
			func_137(uParam1, "Omega1", func_139(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 45:
			func_137(uParam1, "Omega2", func_139(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 46:
			func_137(uParam1, "Paparazzo1", func_139(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 47:
			func_137(uParam1, "Paparazzo2", func_139(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 48:
			func_137(uParam1, "Paparazzo3", func_139(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 49:
			func_137(uParam1, "Paparazzo3A", func_139(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 50:
			func_137(uParam1, "Paparazzo3B", func_139(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 51:
			func_137(uParam1, "Paparazzo4", func_139(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 52:
			func_137(uParam1, "Rampage1", func_139(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 54:
			func_137(uParam1, "Rampage3", func_139(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 55:
			func_137(uParam1, "Rampage4", func_139(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 56:
			func_137(uParam1, "Rampage5", func_139(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 53:
			func_137(uParam1, "Rampage2", func_139(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 57:
			func_137(uParam1, "TheLastOne", func_139(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 58:
			func_137(uParam1, "Tonya1", func_139(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 59:
			func_137(uParam1, "Tonya2", func_139(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 60:
			func_137(uParam1, "Tonya3", func_139(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 61:
			func_137(uParam1, "Tonya4", func_139(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 62:
			func_137(uParam1, "Tonya5", func_139(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_137(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_138(int iParam0)
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

struct<2> func_139(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_140(iParam0) };
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

struct<2> func_140(int iParam0)
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

int func_141()
{
	var uVar0;
	
	if (Global_32110)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (unk_0x55A0C756C4A8220C(uVar0, 0))
			{
				if (!unk_0xF68107C40359970C(unk_0xAB793EA186AB8DAA(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_142()
{
	if (func_145() && !func_146())
	{
		return 1;
	}
	if (func_144() && func_143())
	{
		return 1;
	}
	return 0;
}

bool func_143()
{
	return Global_113104 > 0;
}

int func_144()
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_145()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_146()
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

int func_147()
{
	var uVar0;
	
	if (Global_152259 == 2)
	{
		return 1;
	}
	else if (Global_152259 == 3)
	{
		return 0;
	}
	if (unk_0xAF5DBE95205A49D1())
	{
		if (unk_0x5B66E9FB7530BB95())
		{
			if (unk_0x2F04A4784A70593C())
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xCED9E32812D6C7C7(&uVar0, 2);
				unk_0xCED9E32812D6C7C7(&uVar0, 4);
				unk_0xCED9E32812D6C7C7(&uVar0, 6);
				unk_0xCED9E32812D6C7C7(&Global_25, 2);
				unk_0xCED9E32812D6C7C7(&Global_25, 4);
				unk_0xCED9E32812D6C7C7(&Global_25, 6);
				unk_0x076A5661EF5ABEE4(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xB8F4926B803BFD19())
				{
					iVar0 = unk_0x5D851A9195129CE9(866);
					unk_0xCED9E32812D6C7C7(&iVar0, 0);
					unk_0x212EDDD868F364B5(iVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0xB8F4926B803BFD19())
	{
		if (BitTest(unk_0x5D851A9195129CE9(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_148()
{
	int iVar0;
	
	if (iLocal_48)
	{
		unk_0xFFD8EB5462B07B59(&uLocal_295);
		unk_0xFFD8EB5462B07B59(&uLocal_296);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0x8576657A629C4B0A(1f);
		unk_0x34A2DA203A9ABC58();
		unk_0x6E31398AA6A7C5CE(unk_0x9E2D6C50374FCFA9());
		unk_0x13A2865660B9B033(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		unk_0xEC6D4F9C59CDA6F5();
		unk_0x84A65E2E9CFB6A77(Vector(43.4932f, 2612.694f, 328.0555f) - Vector(10f, 10f, 10f), Vector(43.4932f, 2612.694f, 328.0555f) + Vector(10f, 10f, 10f), 1, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_226)
		{
			if (!unk_0xF68107C40359970C(iLocal_226[iVar0]))
			{
				unk_0x50274A7EACA3133A(iLocal_226[iVar0], 0);
				if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
				{
					unk_0xF21F1B3825B46822(iLocal_226[iVar0]);
					unk_0xABC2CA6F28903308(iLocal_226[iVar0], 1);
				}
			}
			if (!unk_0xF68107C40359970C(iLocal_222))
			{
				unk_0xD6A76BAB45A4B460(iLocal_222, 317, 1);
				unk_0x50274A7EACA3133A(iLocal_222, 0);
				if (!unk_0x55A0C756C4A8220C(iLocal_236, 0))
				{
					if (unk_0xF6F5D18EF8EAB859(iLocal_222, iLocal_236, 0))
					{
						unk_0x11647D34B93A72EB(iLocal_236, 1);
					}
				}
			}
			if (!unk_0xF68107C40359970C(iLocal_223))
			{
				unk_0xD6A76BAB45A4B460(iLocal_223, 317, 1);
				unk_0x50274A7EACA3133A(iLocal_223, 0);
				if (!unk_0x55A0C756C4A8220C(iLocal_236, 0))
				{
					if (unk_0xF6F5D18EF8EAB859(iLocal_223, iLocal_236, 0))
					{
						unk_0x11647D34B93A72EB(iLocal_236, 1);
					}
				}
			}
			iVar0++;
		}
	}
	func_149(-1);
	unk_0xAFBDF6A5E54114C1();
}

void func_149(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_34();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_87())
	{
		func_153(iParam0);
		unk_0xEFE837B21D5CF02C(0, 0);
		Global_113377 = unk_0x320D1840B6DAA1CC();
		func_152(30000);
		StringCopy(&cVar0, func_151(Global_113375, 1), 64);
		if (func_33(Global_113375) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113374, 64);
		}
		unk_0x151E30E68B218815(&cVar0, Global_113372, (unk_0x320D1840B6DAA1CC() - Global_113373), 0);
	}
	else if (BitTest(Global_113382, 0) && Global_113386.f_24995.f_2 < 3)
	{
		unk_0xB0550BC91B0159D6(&Global_113382, 0);
	}
	func_150(&Global_32019);
	Global_113376 = 0;
	func_94(-1);
}

void func_150(var uParam0)
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

char* func_151(int iParam0, bool bParam1)
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

void func_152(int iParam0)
{
	Global_43603 = (unk_0x320D1840B6DAA1CC() + iParam0);
}

void func_153(int iParam0)
{
	func_154(iParam0, 0, func_159(iParam0));
}

void func_154(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_112();
	func_157(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_156(iParam0, &uVar0);
	Var1 = { func_155(&uVar0) };
}

struct<16> func_155(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_106(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_105(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_104(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_107(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_110(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_108(*uParam0), 64);
	return Var0;
}

void func_156(int iParam0, var uParam1)
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_157(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_108(*uParam0);
	iVar1 = func_110(*uParam0);
	iVar2 = func_107(*uParam0);
	iVar3 = func_106(*uParam0);
	iVar4 = func_105(*uParam0);
	iVar5 = func_104(*uParam0);
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
	iVar6 = func_103(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_103(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_158(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_158(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_118(uParam0, iParam1);
	func_117(uParam0, iParam2);
	func_116(uParam0, iParam3);
	func_114(uParam0, iParam5);
	func_115(uParam0, iParam4);
	func_113(uParam0, iParam6);
}

int func_159(int iParam0)
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

