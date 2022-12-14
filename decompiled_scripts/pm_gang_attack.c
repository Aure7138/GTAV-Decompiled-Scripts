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
	struct<62> Local_37 = { 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 16;
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
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	char[] cLocal_274[8] = 0;
	var uLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	var uLocal_281[2] = { 0, 0 };
	var uLocal_284[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_291[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_298[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
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
	iLocal_272 = -1;
	iLocal_273 = -1;
	StringCopy(&cLocal_274, "PMGAUD", 8);
	iLocal_276 = -1;
	iLocal_277 = -1;
	unk_0xBD1F51FB3FA2C6E4(1);
	if (unk_0x4B34601C5C56F3EE(3))
	{
		func_62(2);
		func_61();
	}
	func_54();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (func_53())
		{
			iLocal_273 = -1;
		}
		else if (iLocal_273 == -1)
		{
			iLocal_273 = unk_0x320D1840B6DAA1CC();
		}
		func_1();
	}
}

void func_1()
{
	char cVar0[16];
	int iVar4;
	bool bVar5;
	bool bVar6;
	
	switch (iLocal_36)
	{
		case 0:
			unk_0x249A0D3C5714BCF4("PGANG", 0);
			if (unk_0x01896B71C5AC966E(0))
			{
				iVar4 = 0;
				while (iVar4 <= 5)
				{
					if (unk_0xE5965CDF24F93A9F(Global_112096.f_225[iVar4]))
					{
						uLocal_284[iVar4] = Global_112096.f_225[iVar4];
						Global_112096.f_225[iVar4] = 0;
						unk_0x2D58A6131679D82C(uLocal_284[iVar4], 1, 1);
						if (iLocal_307 == 0)
						{
							iLocal_307 = unk_0x15CAA6D7B11F1A7C(uLocal_284[iVar4]);
						}
						if (!unk_0xF68107C40359970C(uLocal_284[iVar4]))
						{
							unk_0xFF4BEB6CFF55A013(uLocal_284[iVar4], iLocal_305);
							unk_0x71B502FC2E129665(uLocal_284[iVar4], 1);
							unk_0x3DAB02AAC9E9EC02(uLocal_284[iVar4], 0);
							unk_0x348A212511C78DBF(uLocal_284[iVar4], 5);
							unk_0x7DCB4594ACF18DA7(uLocal_284[iVar4], 1);
							func_52(uLocal_284[iVar4], 20f, 5f, 90f, -80f, 80f);
							if (iLocal_106 == 0)
							{
								unk_0x71B502FC2E129665(uLocal_284[iVar4], 2);
							}
							uLocal_298[iVar4] = func_49(uLocal_284[iVar4], 1, 145);
						}
					}
					iVar4++;
				}
				iVar4 = 0;
				while (iVar4 <= 1)
				{
					if (unk_0xE5965CDF24F93A9F(Global_112096.f_222[iVar4]))
					{
						uLocal_281[iVar4] = Global_112096.f_222[iVar4];
						Global_112096.f_222[iVar4] = 0;
						unk_0x2D58A6131679D82C(uLocal_281[iVar4], 1, 1);
						if (iLocal_306 == 0)
						{
							iLocal_306 = unk_0x15CAA6D7B11F1A7C(uLocal_281[iVar4]);
						}
					}
					iVar4++;
				}
				StringCopy(&cVar0, "START_", 16);
				StringConCat(&cVar0, &(Local_37.f_61), 16);
				func_48(&cVar0, 7500, 1);
				iLocal_36++;
			}
			break;
		
		case 1:
			bVar6 = true;
			iVar4 = 0;
			while (iVar4 <= 5)
			{
				if (!bVar5)
				{
					if (uLocal_291[iVar4] > 0)
					{
						bVar5 = true;
					}
				}
				if (unk_0xE5965CDF24F93A9F(uLocal_284[iVar4]) && !unk_0xF68107C40359970C(uLocal_284[iVar4]))
				{
					bVar6 = false;
				}
				iVar4++;
			}
			if (bVar5)
			{
				unk_0xFECBE8ED0E1259A5(unk_0x9E2D6C50374FCFA9());
			}
			if (bVar6)
			{
				if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
				{
					if (!iLocal_278)
					{
						func_48("LOSE_WANTED", 7500, 1);
						iLocal_278 = 1;
					}
				}
				else
				{
					func_47();
				}
			}
			break;
	}
	switch (iLocal_106)
	{
		case 1:
			func_45();
			break;
		
		case 0:
			func_9();
			break;
	}
	iVar4 = 0;
	while (iVar4 <= 5)
	{
		if (unk_0xE5965CDF24F93A9F(uLocal_284[iVar4]))
		{
			if (unk_0xF68107C40359970C(uLocal_284[iVar4]))
			{
				unk_0xB3822DB3D538C8F3(&(uLocal_284[iVar4]));
			}
			else if (func_6(uLocal_284[iVar4], func_7(func_8()), 1) > 100f && func_5(unk_0xE2D3D51028F0428A(), uLocal_284[iVar4], 1) > 300f)
			{
				func_4();
			}
			else if (iLocal_280 && func_6(uLocal_284[iVar4], func_7(func_8()), 1) > 50f)
			{
				if (func_2())
				{
					if (!iLocal_279)
					{
						StringCopy(&cVar0, "ESC_", 16);
						StringConCat(&cVar0, &(Local_37.f_61), 16);
						func_48(&cVar0, 7500, 1);
						iLocal_279 = 1;
					}
				}
			}
		}
		if (unk_0x12DD4A0B247D9B4D(uLocal_298[iVar4]))
		{
			if (!unk_0xE5965CDF24F93A9F(uLocal_284[iVar4]) || unk_0xF68107C40359970C(uLocal_284[iVar4]))
			{
				unk_0xFFD8EB5462B07B59(&(uLocal_298[iVar4]));
			}
		}
		iVar4++;
	}
}

int func_2()
{
	if (unk_0x559C03F53E6937FC())
	{
		return 0;
	}
	if (unk_0x0038CA9239065BCA())
	{
		if (func_53() && !func_3())
		{
			return 0;
		}
	}
	return 1;
}

int func_3()
{
	if (Global_22616 == 1)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	func_62(2);
	func_61();
}

float func_5(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x55B23FE400FCEA6B(uParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(uParam0, 0) };
	}
	if (!unk_0x55B23FE400FCEA6B(uParam1, 0))
	{
		Var3 = { unk_0x6B62510F212526DC(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x6B62510F212526DC(uParam1, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Var3, iParam2);
}

float func_6(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x55B23FE400FCEA6B(uParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(uParam0, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Param1, iParam4);
}

Vector3 func_7(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2147.317f, 4795.208f, 40.08961f;
			break;
		
		case 9:
			return 1524.329f, -2108.269f, 75.7248f;
			break;
		
		case 10:
			return -1172.195f, -1577.427f, 3.38152f;
			break;
		
		case 1:
			return 898.3718f, -177.0764f, 72.68348f;
			break;
		
		case 4:
			return 1191.302f, 2672.064f, 36.73154f;
			break;
		
		case 3:
			return -1584.333f, 5193.487f, 2.95912f;
			break;
		
		case 0:
			return 408.3429f, -1623.836f, 28.29278f;
			break;
		
		case 8:
			return -1339.489f, -21.19435f, 50.34566f;
			break;
		
		case 5:
			return 336.207f, 172.4251f, 102.2055f;
			break;
		
		case 6:
			return 394.5495f, -703.3795f, 28.27281f;
			break;
		
		case 7:
			return -1413.184f, -206.0555f, 46.29474f;
			break;
		
		case 11:
			return -560.3809f, 274.5476f, 82.02014f;
			break;
		
		case 12:
			return 221.0845f, 340.7849f, 104.5883f;
			break;
		
		case 13:
			return -296.7154f, 6259.732f, 30.49339f;
			break;
		
		case 14:
			return -2201.402f, 4291f, 47.32429f;
			break;
	}
	return 10f, 10f, 10f;
}

int func_8()
{
	return Global_112096.f_20;
}

void func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[16];
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0xE5965CDF24F93A9F(uLocal_284[iVar0]) && !unk_0xF68107C40359970C(uLocal_284[iVar0]))
		{
			switch (uLocal_291[iVar0])
			{
				case 0:
					if (func_43(iVar0))
					{
						iLocal_272 = 0;
						uLocal_291[iVar0]++;
					}
					break;
				
				case 1:
					iVar2 = 0;
					iVar1 = 0;
					while (iVar1 <= 5)
					{
						if (unk_0xE5965CDF24F93A9F(uLocal_284[iVar1]) && !unk_0xF68107C40359970C(uLocal_284[iVar1]))
						{
							iVar2++;
						}
						iVar1++;
					}
					if (iVar2 <= 2)
					{
						uLocal_291[iVar0]++;
					}
					break;
				
				case 2:
					break;
			}
			if (uLocal_291[iVar0] > 0)
			{
				iVar3 = 0;
				unk_0xA7E29842FA438ED6(uLocal_284[iVar0], &iVar3, 1);
				if (iVar3 == joaat("weapon_molotov"))
				{
					if (unk_0x8FEA2E94638F9767(uLocal_284[iVar0], joaat("weapon_microsmg"), 0))
					{
						unk_0x202B28FEABEC4034(uLocal_284[iVar0], joaat("weapon_microsmg"), 1);
					}
					else
					{
						unk_0x9521FB98DB6DDF50(uLocal_284[iVar0], joaat("weapon_microsmg"), -1, 1, 1);
					}
				}
			}
			switch (uLocal_291[iVar0])
			{
				case 0:
					func_39(uLocal_284[iVar0], Local_37[iVar0 /*10*/].f_4);
					break;
				
				case 1:
					if (!func_38(uLocal_284[iVar0], joaat("script_task_combat"), 1))
					{
						unk_0xC1A74225341AA9FB(uLocal_284[iVar0], unk_0xE2D3D51028F0428A(), 0, 16);
					}
					break;
				
				case 2:
					if (!func_38(uLocal_284[iVar0], joaat("script_task_smart_flee_ped"), 1))
					{
						unk_0x7734082B0EDB0BE0(uLocal_284[iVar0], unk_0xE2D3D51028F0428A(), 1000f, -1, 1, 0);
					}
					break;
				}
		}
		iVar0++;
	}
	switch (iLocal_272)
	{
		case 0:
			if (func_37())
			{
				iVar4 = func_36();
				if (iVar4 != -1 && !unk_0xB6F46ABD140050F1(uLocal_284[iVar4]))
				{
					func_34(uLocal_284[iVar4], "SUSPECT_SPOTTED", 10);
					StringCopy(&cVar5, "", 16);
					iLocal_272++;
				}
			}
			break;
		
		case 1:
			if (func_37())
			{
				cVar5 = { func_33("START") };
				if (func_10(&uLocal_107, &cLocal_274, &cVar5, 8, 0, 0, 0))
				{
					StringCopy(&cVar5, "", 16);
					iLocal_272++;
				}
			}
			break;
		
		case 2:
			if (func_37())
			{
				iVar4 = func_36();
				if (iVar4 != -1 && !unk_0xB6F46ABD140050F1(uLocal_284[iVar4]))
				{
					func_34(uLocal_284[iVar4], "SHOUT_THREATEN", 10);
					StringCopy(&cVar5, "", 16);
					iLocal_272++;
				}
			}
			break;
		
		case 3:
			if ((func_37() && (unk_0x320D1840B6DAA1CC() - iLocal_273) > 3000) && !unk_0xB6F46ABD140050F1(unk_0xE2D3D51028F0428A()))
			{
				func_34(unk_0xE2D3D51028F0428A(), "BLIND_RAGE", 10);
				iLocal_272++;
			}
			break;
		
		case 4:
			if (func_37() && (unk_0x320D1840B6DAA1CC() - iLocal_273) > 1000)
			{
				iVar4 = func_36();
				if (iVar4 != -1 && !unk_0xB6F46ABD140050F1(uLocal_284[iVar4]))
				{
					if (uLocal_291[iVar4] == 2)
					{
						func_34(uLocal_284[iVar4], "GENERIC_INSULT", 10);
						StringCopy(&cVar5, "", 16);
						iLocal_272 = (iLocal_272 - 1);
					}
					else
					{
						func_34(uLocal_284[iVar4], "SHOUT_THREATEN", 10);
						StringCopy(&cVar5, "", 16);
						iLocal_272 = (iLocal_272 - 1);
					}
				}
			}
			break;
	}
}

bool func_10(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_11(sParam2, iParam3, 0);
}

int func_11(char* sParam0, int iParam1, bool bParam2)
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
					func_31();
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
		if (func_30(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_29();
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
				func_21();
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
				if (func_20())
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
			if (func_19())
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
			func_18();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_17();
		func_12();
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
		func_31();
	}
	return 0;
}

void func_12()
{
	if (!func_13())
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

int func_13()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_16())
	{
		return 0;
	}
	if (func_14(unk_0x9E2D6C50374FCFA9()))
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

bool func_14(int iParam0)
{
	return func_15(iParam0, 20);
}

var func_15(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_16()
{
	return -1;
}

void func_17()
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

void func_18()
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

int func_19()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_20()
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

void func_21()
{
	if (func_28(14))
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
		Global_20266 = func_22();
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

int func_22()
{
	func_23();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_23()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_26(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_25(unk_0xE2D3D51028F0428A());
			if (func_24(iVar0) && (!func_28(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_24(Global_113386.f_2363.f_539.f_4321))
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

bool func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_27(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_28(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_29()
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

bool func_30(int iParam0, int iParam1)
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

void func_31()
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

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = uParam5;
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

struct<4> func_33(char* sParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam0, 16);
	switch (func_22())
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

void func_34(var uParam0, char* sParam1, int iParam2)
{
	unk_0xB0C559BD7D5D270D(uParam0, sParam1, func_35(iParam2), 1);
}

int func_35(int iParam0)
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

int func_36()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = -1;
	fVar2 = 999999f;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (unk_0xE5965CDF24F93A9F(uLocal_284[iVar1]) && !unk_0xF68107C40359970C(uLocal_284[iVar1]))
		{
			fVar3 = func_5(uLocal_284[iVar1], unk_0xE2D3D51028F0428A(), 1);
			if (fVar3 < 30f && fVar3 < fVar2)
			{
				iVar0 = iVar1;
				fVar2 = fVar3;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_37()
{
	if (func_53())
	{
		return 0;
	}
	if (unk_0x0038CA9239065BCA())
	{
		if (unk_0x559C03F53E6937FC())
		{
			return 0;
		}
	}
	return 1;
}

int func_38(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x174CED88B97C78D9(uParam0, iParam1);
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

void func_39(int iParam0, struct<3> Param1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	unk_0xA7E29842FA438ED6(iParam0, &iVar0, 1);
	if (!func_42(Param1))
	{
		unk_0xA7E29842FA438ED6(iParam0, &iVar1, 1);
		if (iVar0 == joaat("weapon_molotov"))
		{
			if (iVar1 != joaat("weapon_molotov"))
			{
				unk_0x202B28FEABEC4034(iParam0, joaat("weapon_molotov"), 1);
			}
			if (unk_0x174CED88B97C78D9(iParam0, joaat("script_task_perform_sequence")) != 1 && unk_0x174CED88B97C78D9(iParam0, joaat("script_task_perform_sequence")) != 0)
			{
				unk_0xA888F8CC04F25CC8(&uVar2);
				unk_0x83F5BCFFFBA26699(0, unk_0x5853B15F78E1A265(1000, 6000));
				unk_0xA43AB969C8956EB8(0, func_40(Param1, 1f), 0, 0);
				unk_0x83F5BCFFFBA26699(0, unk_0x5853B15F78E1A265(1000, 6000));
				unk_0xA43AB969C8956EB8(0, func_40(Param1, 1f), 0, 0);
				unk_0x83F5BCFFFBA26699(0, unk_0x5853B15F78E1A265(1000, 6000));
				unk_0xA43AB969C8956EB8(0, func_40(Param1, 1f), 0, 0);
				unk_0x83F5BCFFFBA26699(0, unk_0x5853B15F78E1A265(1000, 6000));
				unk_0xA43AB969C8956EB8(0, func_40(Param1, 1f), 0, 0);
				unk_0x83F5BCFFFBA26699(0, unk_0x5853B15F78E1A265(1000, 6000));
				unk_0xA43AB969C8956EB8(0, func_40(Param1, 1f), 0, 0);
				unk_0x83F5BCFFFBA26699(0, unk_0x5853B15F78E1A265(1000, 6000));
				unk_0xA43AB969C8956EB8(0, func_40(Param1, 1f), 0, 0);
				unk_0x83F5BCFFFBA26699(0, unk_0x5853B15F78E1A265(1000, 6000));
				unk_0xA43AB969C8956EB8(0, func_40(Param1, 1f), 0, 0);
				unk_0x83F5BCFFFBA26699(0, unk_0x5853B15F78E1A265(1000, 6000));
				unk_0xA43AB969C8956EB8(0, func_40(Param1, 1f), 0, 0);
				unk_0x3F2B528DF27C8A9F(uVar2, 1);
				unk_0xC963A45B50851768(uVar2);
				unk_0x8ACADA903FCAA42F(iParam0, uVar2);
				unk_0x7461D7C5BA953BC7(&uVar2);
			}
		}
		else if (unk_0x174CED88B97C78D9(iParam0, joaat("script_task_shoot_at_coord")) != 1 && unk_0x174CED88B97C78D9(iParam0, joaat("script_task_shoot_at_coord")) != 0)
		{
			unk_0xA99AD9DEE4794C48(iParam0, Param1, -1, joaat("FIRING_PATTERN_BURST_FIRE"));
		}
	}
	else if (unk_0x174CED88B97C78D9(iParam0, joaat("script_task_stand_still")) != 1 && unk_0x174CED88B97C78D9(iParam0, joaat("script_task_stand_still")) != 0)
	{
		unk_0x83F5BCFFFBA26699(iParam0, -1);
	}
}

Vector3 func_40(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { unk_0xC4EAB25A108C2429(-1f, 1f), unk_0xC4EAB25A108C2429(-1f, 1f), unk_0xC4EAB25A108C2429(-1f, 1f) };
	return Param0 + func_41(Var0, unk_0xC4EAB25A108C2429(0f, fParam3));
}

Vector3 func_41(struct<3> Param0, float fParam3)
{
	float fVar0;
	
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_42(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((unk_0xE5965CDF24F93A9F(uLocal_284[iVar0]) && !unk_0xF68107C40359970C(uLocal_284[iVar0])) && uLocal_291[iVar0] > 0)
		{
			iLocal_280 = 1;
		}
		iVar0++;
	}
	if (((((((((((func_44(Global_112096.f_35, 134217728) || unk_0x7E006F2E24F03BB4(uLocal_284[iParam0], unk_0xE2D3D51028F0428A())) || unk_0x42A51C8E69566474(unk_0x9E2D6C50374FCFA9(), uLocal_284[iParam0])) || unk_0xE10B76698E5CF067(uLocal_284[iParam0])) || unk_0x9AC74C7EF847A074(unk_0x6B62510F212526DC(uLocal_284[iParam0], 1), 15f, 1)) || unk_0x81C70E8A536AAC9E(unk_0x6B62510F212526DC(uLocal_284[iParam0], 1), 15f, 1, 1)) || unk_0x89D0E0233F6E59A7(21, unk_0x6B62510F212526DC(uLocal_284[iParam0], 1), 15f)) || unk_0x89D0E0233F6E59A7(10, unk_0x6B62510F212526DC(uLocal_284[iParam0], 1), 15f)) || unk_0x89D0E0233F6E59A7(7, unk_0x6B62510F212526DC(uLocal_284[iParam0], 1), 15f)) || unk_0x89D0E0233F6E59A7(0, unk_0x6B62510F212526DC(uLocal_284[iParam0], 1), 15f)) || unk_0x89D0E0233F6E59A7(1, unk_0x6B62510F212526DC(uLocal_284[iParam0], 1), 15f)) || iLocal_280)
	{
		return 1;
	}
	return 0;
}

bool func_44(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_45()
{
	int iVar0;
	var uVar1[2];
	int iVar4;
	char cVar5[24];
	int iVar11;
	bool bVar12;
	int iVar13;
	var uVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	char cVar20[16];
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (unk_0xE5965CDF24F93A9F(uLocal_281[iVar0]) && unk_0x55A0C756C4A8220C(uLocal_281[iVar0], 0))
		{
			iVar4 = 0;
			while (iVar4 <= 5)
			{
				if (unk_0xE5965CDF24F93A9F(uLocal_284[iVar4]) && !unk_0xF68107C40359970C(uLocal_284[iVar4]))
				{
					if (Local_37[iVar4 /*10*/].f_8 != -1 && Local_37[iVar4 /*10*/].f_8 == iVar0)
					{
						if (!unk_0xF6F5D18EF8EAB859(uLocal_284[iVar4], uLocal_281[iVar0], 0))
						{
							uVar1[iVar0]++;
						}
					}
				}
				iVar4++;
			}
		}
		StringCopy(&cVar5, "iPedsGettingToVeh[", 24);
		StringIntConCat(&cVar5, iVar0, 24);
		StringConCat(&cVar5, "]: ", 24);
		StringIntConCat(&cVar5, uVar1[iVar0], 24);
		unk_0x963A57DF8530029D(&cVar5, 0.05f, (0.25f + (IntToFloat(iVar0) * 0.025f)), 0f, 255, 255, 255, 255);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0xE5965CDF24F93A9F(uLocal_284[iVar0]) && !unk_0xF68107C40359970C(uLocal_284[iVar0]))
		{
			switch (uLocal_291[iVar0])
			{
				case 0:
					if (func_43(iVar0))
					{
						iLocal_272 = 0;
						uLocal_291[iVar0]++;
					}
					break;
				
				case 1:
					if (Local_37[iVar0 /*10*/].f_8 == -1)
					{
						if (!unk_0x98C2AE9A4C384CBF(uLocal_284[iVar0], 286, 1))
						{
							unk_0xD6A76BAB45A4B460(uLocal_284[iVar0], 286, 1);
						}
					}
					else
					{
						bVar12 = false;
						if (unk_0xD5C6B5E3B93A5EDC(uLocal_284[iVar0], 0))
						{
							iVar13 = unk_0xB3FF0049C1FD38EC(uLocal_284[iVar0], 0);
							iVar11 = 0;
							while (iVar11 <= 1)
							{
								if (!bVar12)
								{
									if (uLocal_281[iVar11] == iVar13)
									{
										if (uVar1[iVar11] == 0)
										{
											bVar12 = true;
										}
									}
								}
								iVar11++;
							}
							if (bVar12)
							{
								if (iLocal_276 == -1 && func_46(uLocal_284[iVar0], 0) == -1)
								{
									iLocal_276 = iVar0;
								}
								uLocal_291[iVar0]++;
							}
						}
					}
					break;
				
				case 2:
					if (iLocal_276 != -1)
					{
						iLocal_277 = iLocal_276;
						if (unk_0xE5965CDF24F93A9F(uLocal_284[iLocal_276]))
						{
							if (unk_0xD5C6B5E3B93A5EDC(uLocal_284[iLocal_276], 0))
							{
								uVar14 = unk_0xB3FF0049C1FD38EC(uLocal_284[iLocal_276], 0);
							}
						}
					}
					if ((((((((iLocal_276 == -1 || !unk_0xE5965CDF24F93A9F(uLocal_284[iLocal_276])) || unk_0xF68107C40359970C(uLocal_284[iLocal_276])) || !unk_0xE5965CDF24F93A9F(uVar14)) || !unk_0x55A0C756C4A8220C(iVar14, 0)) || unk_0xB4C63F21D1DC6C23(iVar14, 0, 1)) || unk_0xB4C63F21D1DC6C23(iVar14, 1, 1)) || unk_0xB4C63F21D1DC6C23(iVar14, 4, 1)) || unk_0xB4C63F21D1DC6C23(iVar14, 5, 1))
					{
						iVar15 = -1;
						bVar16 = false;
						iVar11 = 0;
						while (iVar11 <= 5)
						{
							if (unk_0xE5965CDF24F93A9F(uLocal_284[iVar11]) && !unk_0xF68107C40359970C(uLocal_284[iVar11]))
							{
								if (func_46(uLocal_284[iVar11], 0) == -1)
								{
									if (iVar15 == -1 || !bVar16)
									{
										bVar16 = true;
										iVar15 = iVar11;
									}
								}
								else if (!bVar16)
								{
									iVar15 = iVar11;
								}
							}
							iVar11++;
						}
						if (iVar15 != -1)
						{
							iLocal_276 = iVar15;
						}
					}
					break;
			}
			if (uLocal_291[iVar0] > 0)
			{
				iVar17 = 0;
				unk_0xA7E29842FA438ED6(uLocal_284[iVar0], &iVar17, 1);
				if (iVar17 == joaat("weapon_molotov"))
				{
					if (unk_0x8FEA2E94638F9767(uLocal_284[iVar0], joaat("weapon_microsmg"), 0))
					{
						unk_0x202B28FEABEC4034(uLocal_284[iVar0], joaat("weapon_microsmg"), 1);
					}
					else
					{
						unk_0x9521FB98DB6DDF50(uLocal_284[iVar0], joaat("weapon_microsmg"), -1, 1, 1);
					}
				}
			}
			switch (uLocal_291[iVar0])
			{
				case 0:
					func_39(uLocal_284[iVar0], Local_37[iVar0 /*10*/].f_4);
					break;
				
				case 1:
					if (Local_37[iVar0 /*10*/].f_8 == -1)
					{
						if (!func_38(uLocal_284[iVar0], joaat("script_task_combat"), 1))
						{
							unk_0xC1A74225341AA9FB(uLocal_284[iVar0], unk_0xE2D3D51028F0428A(), 0, 16);
						}
					}
					else if (uLocal_281[Local_37[iVar0 /*10*/].f_8] == 0 || Local_37[iVar0 /*10*/].f_9 == -2)
					{
					}
					else if (!unk_0xF6F5D18EF8EAB859(uLocal_284[iVar0], uLocal_281[Local_37[iVar0 /*10*/].f_8], 0))
					{
						if (func_5(uLocal_284[iVar0], uLocal_281[Local_37[iVar0 /*10*/].f_8], 1) > 4f)
						{
							if (!func_38(uLocal_284[iVar0], joaat("script_task_combat"), 1))
							{
								unk_0x776D1ABB5A5CC181(uLocal_284[iVar0], uLocal_281[Local_37[iVar0 /*10*/].f_8], 0f, 0f, 0f, 4f, 0);
								unk_0xC1A74225341AA9FB(uLocal_284[iVar0], unk_0xE2D3D51028F0428A(), 0, 16);
							}
						}
						else if (!func_38(uLocal_284[iVar0], joaat("script_task_enter_vehicle"), 1))
						{
							unk_0xB486640392EC50BB(uLocal_284[iVar0], uLocal_281[Local_37[iVar0 /*10*/].f_8], -1, Local_37[iVar0 /*10*/].f_9, 2f, 1, 0);
						}
						if (!unk_0x55A0C756C4A8220C(uLocal_281[Local_37[iVar0 /*10*/].f_8], 0))
						{
							if (!func_38(uLocal_284[iVar0], joaat("script_task_combat"), 1))
							{
								unk_0xC1A74225341AA9FB(uLocal_284[iVar0], unk_0xE2D3D51028F0428A(), 0, 16);
							}
						}
					}
					else if (!func_38(uLocal_284[iVar0], joaat("script_task_vehicle_shoot_at_entity"), 1))
					{
						unk_0xBBA695AD5315CDD8(uLocal_284[iVar0], unk_0xE2D3D51028F0428A(), 1101004800);
					}
					break;
				
				case 2:
					if (unk_0xD5C6B5E3B93A5EDC(uLocal_284[iVar0], 0))
					{
						if (iLocal_276 == iVar0)
						{
							if (func_46(uLocal_284[iVar0], 0) != -1)
							{
								if (!func_38(uLocal_284[iVar0], joaat("script_task_shuffle_to_next_vehicle_seat"), 1))
								{
									unk_0x8625186D3A8DDD7A(uLocal_284[iVar0], unk_0xB3FF0049C1FD38EC(uLocal_284[iVar0], 0), 0);
								}
							}
							else if (!func_38(uLocal_284[iVar0], joaat("script_task_vehicle_mission"), 1) || iLocal_276 != iLocal_277)
							{
								unk_0xB69D13E19147910F(uLocal_284[iVar0], unk_0xB3FF0049C1FD38EC(uLocal_284[iVar0], 0), unk_0xE2D3D51028F0428A(), 8, 40f, 786468, 1000f, 0f, 1);
							}
							else if (unk_0x174CED88B97C78D9(uLocal_284[iVar0], joaat("script_task_vehicle_mission")) == 1)
							{
								if (!unk_0x99D3BE8C39BA34FF(uLocal_284[iVar0]))
								{
									unk_0x0E6C3A4EFA9D9D35(uLocal_284[iVar0], unk_0xE2D3D51028F0428A(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
								}
							}
						}
						else if (func_46(uLocal_284[iVar0], 0) == -1)
						{
							if (!func_38(uLocal_284[iVar0], joaat("script_task_vehicle_mission"), 1) || iLocal_276 != iLocal_277)
							{
								unk_0xDBEE353C7CA6E88E(uLocal_284[iVar0], unk_0xB3FF0049C1FD38EC(uLocal_284[iVar0], 0), unk_0xB3FF0049C1FD38EC(uLocal_284[iLocal_276], 0), -1, 40f, 786468, -1082130432, 20, 1101004800);
							}
							else if (unk_0x174CED88B97C78D9(uLocal_284[iVar0], joaat("script_task_vehicle_mission")) == 1)
							{
								if (!unk_0x99D3BE8C39BA34FF(uLocal_284[iVar0]))
								{
									unk_0x0E6C3A4EFA9D9D35(uLocal_284[iVar0], unk_0xE2D3D51028F0428A(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
								}
							}
						}
						else
						{
							iVar18 = unk_0xAB793EA186AB8DAA(unk_0xB3FF0049C1FD38EC(uLocal_284[iVar0], 0), -1, 0);
							if (!unk_0xE5965CDF24F93A9F(iVar18) || unk_0xF68107C40359970C(iVar18))
							{
								if (!func_38(uLocal_284[iVar0], joaat("script_task_shuffle_to_next_vehicle_seat"), 1))
								{
									unk_0x8625186D3A8DDD7A(uLocal_284[iVar0], unk_0xB3FF0049C1FD38EC(uLocal_284[iVar0], 0), 0);
								}
							}
							else if (!func_38(uLocal_284[iVar0], joaat("script_task_drive_by"), 1) || iLocal_276 != iLocal_277)
							{
								unk_0x0E6C3A4EFA9D9D35(uLocal_284[iVar0], unk_0xE2D3D51028F0428A(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
							}
						}
					}
					break;
				}
		}
		iVar0++;
	}
	switch (iLocal_272)
	{
		case 0:
			if (func_37())
			{
				iVar19 = func_36();
				if (iVar19 != -1 && !unk_0xB6F46ABD140050F1(uLocal_284[iVar19]))
				{
					func_34(uLocal_284[iVar19], "SUSPECT_SPOTTED", 10);
					StringCopy(&cVar20, "", 16);
					iLocal_272++;
				}
			}
			break;
		
		case 1:
			if (func_37())
			{
				cVar20 = { func_33("START") };
				if (func_10(&uLocal_107, &cLocal_274, &cVar20, 8, 0, 0, 0))
				{
					StringCopy(&cVar20, "", 16);
					iLocal_272++;
				}
			}
			break;
		
		case 2:
			if (func_37())
			{
				iVar19 = func_36();
				if (iVar19 != -1 && !unk_0xB6F46ABD140050F1(uLocal_284[iVar19]))
				{
					func_34(uLocal_284[iVar19], "SHOUT_THREATEN", 10);
					StringCopy(&cVar20, "", 16);
					iLocal_272++;
				}
			}
			break;
		
		case 3:
			if ((func_37() && (unk_0x320D1840B6DAA1CC() - iLocal_273) > 3000) && !unk_0xB6F46ABD140050F1(unk_0xE2D3D51028F0428A()))
			{
				func_34(unk_0xE2D3D51028F0428A(), "BLIND_RAGE", 10);
				iLocal_272++;
			}
			break;
		
		case 4:
			if (func_37() && (unk_0x320D1840B6DAA1CC() - iLocal_273) > 1000)
			{
				iVar19 = func_36();
				if (iVar19 != -1 && !unk_0xB6F46ABD140050F1(uLocal_284[iVar19]))
				{
					if (unk_0xD5C6B5E3B93A5EDC(uLocal_284[iVar19], 0))
					{
						func_34(uLocal_284[iVar19], "GENERIC_INSULT", 10);
						StringCopy(&cVar20, "", 16);
						iLocal_272 = (iLocal_272 - 1);
					}
					else
					{
						func_34(uLocal_284[iVar19], "SHOUT_THREATEN", 10);
						StringCopy(&cVar20, "", 16);
						iLocal_272 = (iLocal_272 - 1);
					}
				}
			}
			break;
	}
}

int func_46(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (unk_0xD5C6B5E3B93A5EDC(iParam0, iParam1))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(iParam0, iParam1);
			if (unk_0xE5965CDF24F93A9F(uVar0))
			{
				iVar1 = unk_0xD664875C4BDB14B0(unk_0x15CAA6D7B11F1A7C(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x7158135695FAE89D(iVar0, iVar3, 0))
					{
						if (unk_0xAB793EA186AB8DAA(iVar0, iVar3, 0) == iParam0)
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

void func_47()
{
	func_62(1);
	func_61();
}

void func_48(char[4] cParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x38BD019DECCC5482(cParam0);
	unk_0x23D3EE043DE19C4B(iParam1, 1);
}

var func_49(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_50(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x12DD4A0B247D9B4D(uVar0)) && unk_0xE73671E3D37CF79E(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		unk_0xAF62582F3EA39095(uVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_50(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xE5965CDF24F93A9F(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xEFD6451BF0F3352F(iParam0);
	if (unk_0x04D9F44466CBF3CA(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_51(unk_0x9315DBF7D972F07A(), 1f, 1f));
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
		unk_0x293A9399E902A33B(uVar0, func_51(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
		unk_0xD809204F14EF9B68(uVar0, bParam1);
	}
	else if (unk_0x0086095F1731DE17(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_51(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_51(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_52(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0xF68107C40359970C(uParam0))
	{
		unk_0xE014FF3C785EEFB5(iParam0, fParam1);
		unk_0x52EA1154D214BFB6(iParam0, fParam2);
		unk_0xED676E22A51C1922(iParam0, (fParam3 / 2f));
		unk_0xA4E1B9926DF4A312(iParam0, fParam4);
		unk_0xFCC8AE1090BA5929(iParam0, fParam5);
	}
}

int func_53()
{
	if (Global_21605 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

void func_54()
{
	int iVar0;
	
	switch (func_22())
	{
		case 0:
			func_60(&uLocal_107, 0, unk_0xE2D3D51028F0428A(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_60(&uLocal_107, 1, unk_0xE2D3D51028F0428A(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_60(&uLocal_107, 2, unk_0xE2D3D51028F0428A(), "TREVOR", 0, 1);
			break;
	}
	unk_0x8576657A629C4B0A(0.1f);
	unk_0x07CECF421D895F3D(3, 0);
	unk_0x3B8C20EF19A49C3E(0);
	iLocal_106 = func_58();
	switch (func_8())
	{
		case 11:
			iVar0 = 0;
			break;
		
		case 12:
			iVar0 = 1;
			break;
		
		case 13:
			iVar0 = 2;
			break;
		
		case 14:
			iVar0 = 0;
			break;
	}
	func_57(&(Local_37[0 /*10*/]), func_8(), 0);
	func_57(&(Local_37[1 /*10*/]), func_8(), 1);
	func_57(&(Local_37[2 /*10*/]), func_8(), 2);
	func_57(&(Local_37[3 /*10*/]), func_8(), 3);
	func_57(&(Local_37[4 /*10*/]), func_8(), 4);
	func_57(&(Local_37[5 /*10*/]), func_8(), 5);
	StringCopy(&(Local_37.f_61), func_56(iVar0), 16);
	StringCopy(&(Local_37.f_65), func_55(iVar0), 16);
	unk_0xD642E010A287ADFD("relGang", &iLocal_305);
	unk_0x9972EFADA7A2A47D(5, joaat("player"), iLocal_305);
	unk_0x9972EFADA7A2A47D(5, iLocal_305, joaat("player"));
	unk_0x9972EFADA7A2A47D(5, iLocal_305, joaat("COP"));
	switch (iVar0)
	{
		case 0:
			unk_0x9972EFADA7A2A47D(5, joaat("player"), 296331235);
			unk_0x9972EFADA7A2A47D(1, iLocal_305, 296331235);
			unk_0x9972EFADA7A2A47D(1, 296331235, iLocal_305);
			break;
		
		case 1:
			unk_0x9972EFADA7A2A47D(5, joaat("player"), -1033021910);
			unk_0x9972EFADA7A2A47D(1, iLocal_305, -1033021910);
			unk_0x9972EFADA7A2A47D(1, -1033021910, iLocal_305);
			break;
		
		case 2:
			unk_0x9972EFADA7A2A47D(5, joaat("player"), 1782292358);
			unk_0x9972EFADA7A2A47D(1, iLocal_305, 1782292358);
			unk_0x9972EFADA7A2A47D(1, 1782292358, iLocal_305);
			break;
	}
}

char* func_55(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BALLA1";
			break;
		
		case 2:
			return "KOREANGUY";
			break;
		
		case 0:
			return "VAGOS";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

char* func_56(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BAL";
			break;
		
		case 2:
			return "KOR";
			break;
		
		case 0:
			return "VAG";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

void func_57(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 11:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -543.6415f, 303.5388f, 82.0202f };
					uParam0->f_3 = 231.5559f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -563.5045f, 303.3635f, 82.192f };
					uParam0->f_3 = 191.6703f;
					uParam0->f_4 = { -561.9358f, 293.7914f, 84.1827f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 2:
					*uParam0 = { -547.9926f, 299.531f, 82.0218f };
					uParam0->f_3 = 170.2791f;
					uParam0->f_4 = { -550.0999f, 292.7203f, 87.8903f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 3:
					*uParam0 = { -551.7525f, 301.2135f, 82.1226f };
					uParam0->f_3 = 132.7229f;
					uParam0->f_4 = { -561.2323f, 294.0457f, 87.6588f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 4:
					*uParam0 = { -549.7384f, 303.0894f, 82.0981f };
					uParam0->f_3 = 167.5811f;
					uParam0->f_4 = { -552.8337f, 292.7388f, 88.2295f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 5:
					*uParam0 = { -558.4697f, 303.0401f, 82.2333f };
					uParam0->f_3 = 161.0839f;
					uParam0->f_4 = { -561.9985f, 293.9765f, 87.8096f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
			}
			break;
		
		case 12:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { 231.2834f, 345.2137f, 104.3893f };
					uParam0->f_3 = 324.6404f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_sawnoffshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { 236.5094f, 339.3164f, 104.5298f };
					uParam0->f_3 = 112.7911f;
					uParam0->f_4 = { 230.1282f, 337.069f, 106.8048f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 2:
					*uParam0 = { 224.3295f, 348.2992f, 104.4469f };
					uParam0->f_3 = 165.7146f;
					uParam0->f_4 = { 221.6486f, 340.3152f, 106.6212f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 3:
					*uParam0 = { 234.1038f, 341.6698f, 104.5309f };
					uParam0->f_3 = 110.0142f;
					uParam0->f_4 = { 223.9347f, 338.3914f, 106.8137f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 4:
					*uParam0 = { 228.9968f, 344.3681f, 104.5384f };
					uParam0->f_3 = 153.6073f;
					uParam0->f_4 = { 224.4416f, 336.0886f, 106.1191f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 5:
					*uParam0 = { 221.382f, 346.3744f, 104.5675f };
					uParam0->f_3 = 165.8422f;
					uParam0->f_4 = { 219.6116f, 340.9911f, 106.4532f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
			}
			break;
		
		case 13:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -325.1079f, 6263.833f, 30.4151f };
					uParam0->f_3 = 195.9702f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_sawnoffshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -312.9843f, 6250.115f, 30.4899f };
					uParam0->f_3 = 319.1074f;
					uParam0->f_4 = { -308.3476f, 6254.857f, 32.6941f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 2:
					*uParam0 = { -326.1756f, 6268.338f, 30.4714f };
					uParam0->f_3 = 261.9836f;
					uParam0->f_4 = { -312.8552f, 6265.857f, 43.5835f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 3:
					*uParam0 = { -323.9344f, 6259.659f, 30.3539f };
					uParam0->f_3 = 292.4941f;
					uParam0->f_4 = { -313.3472f, 6263.395f, 42.7414f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
				
				case 4:
					*uParam0 = { -318.7812f, 6259.576f, 30.5161f };
					uParam0->f_3 = 295.0701f;
					uParam0->f_4 = { -313.766f, 6261.479f, 32.6516f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 5:
					*uParam0 = { -314.925f, 6255.542f, 30.5164f };
					uParam0->f_3 = 309.7791f;
					uParam0->f_4 = { -310.572f, 6258.45f, 32.6648f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
			}
			break;
		
		case 14:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -2215.32f, 4275.046f, 46.475f };
					uParam0->f_3 = 16.955f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -2195.425f, 4262.31f, 47.2741f };
					uParam0->f_3 = 241.4366f;
					uParam0->f_4 = { -2185.362f, 4256.376f, 48.4082f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
				
				case 2:
					*uParam0 = { -2200.848f, 4268.19f, 47.3093f };
					uParam0->f_3 = 331.1949f;
					uParam0->f_4 = { -2196.575f, 4275.129f, 49.0669f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 3:
					*uParam0 = { -2202.818f, 4294.149f, 47.4518f };
					uParam0->f_3 = 263.7257f;
					uParam0->f_4 = { -2192.783f, 4289.572f, 50.3251f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 4:
					*uParam0 = { -2196.271f, 4265.064f, 47.3446f };
					uParam0->f_3 = 325.4524f;
					uParam0->f_4 = { -2191.183f, 4271.747f, 49.867f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 5:
					*uParam0 = { -2204.492f, 4290.059f, 47.3773f };
					uParam0->f_3 = 269.5739f;
					uParam0->f_4 = { -2193.017f, 4292.669f, 54.873f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
			}
			break;
	}
}

int func_58()
{
	return func_59(Global_112096.f_20, Global_112096.f_29);
}

int func_59(var uParam0, int iParam1)
{
	uParam0 = uParam0;
	switch (iParam1)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
	}
	return 0;
}

void func_60(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_61()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0xE5965CDF24F93A9F(uLocal_284[iVar0]))
		{
			if (!unk_0xF68107C40359970C(uLocal_284[iVar0]) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				unk_0x7734082B0EDB0BE0(uLocal_284[iVar0], unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 1);
			}
			unk_0xB3822DB3D538C8F3(&(uLocal_284[iVar0]));
		}
		if (unk_0x12DD4A0B247D9B4D(uLocal_298[iVar0]))
		{
			unk_0xFFD8EB5462B07B59(&(uLocal_298[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (unk_0xE5965CDF24F93A9F(uLocal_281[iVar0]))
		{
			unk_0x3D81769BEC61BFF8(&(uLocal_281[iVar0]));
		}
		iVar0++;
	}
	unk_0x269268AD5D4CA266(iLocal_306, 0);
	unk_0x7CD708DEB04F8474(iLocal_307, 0);
	unk_0x8576657A629C4B0A(1f);
	unk_0x07CECF421D895F3D(3, 1);
	unk_0x3B8C20EF19A49C3E(1);
	unk_0xAFBDF6A5E54114C1();
}

void func_62(int iParam0)
{
	Global_112096.f_22 = iParam0;
}

