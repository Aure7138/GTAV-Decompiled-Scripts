#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_63 = { 0, 0, 0 } ;
	float fLocal_66 = 0f;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
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
	int iLocal_240 = 0;
	var uLocal_241 = 0;
	struct<57> Local_242 = { 0, 0, 0, -1281684762, 0, 0, -163714847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_299 = 0;
	struct<5> Local_300[2];
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (unk_0x9315DBF7D972F07A())
	{
		func_116(ScriptParam_0);
	}
	while (true)
	{
		func_115();
		if (func_107())
		{
			func_103();
		}
		if (unk_0x9315DBF7D972F07A())
		{
			func_102();
			switch (func_101(unk_0xF1354995C6159A78()))
			{
				case 0:
					if (func_100() > 0)
					{
						Local_300[unk_0xF1354995C6159A78() /*5*/] = 2;
					}
					break;
				
				case 2:
					func_99();
					if (func_100() == 3)
					{
						Local_300[unk_0xF1354995C6159A78() /*5*/] = 3;
					}
					break;
				
				case 3:
					func_103();
					break;
			}
			if (unk_0x54E30A65F4FA4962())
			{
				switch (func_100())
				{
					case 0:
						Local_242.f_0 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()
{
	switch (Local_242.f_1)
	{
		case 0:
			func_53();
			break;
		
		case 1:
			func_52();
			break;
	}
	if (Local_242.f_2.f_2 == 3 && iLocal_57 == 0)
	{
		Local_242.f_0 = 3;
	}
	func_45();
	if (Local_242.f_53 && Local_242.f_50 < 10)
	{
		func_13();
	}
	if (Local_242.f_50 >= 10)
	{
		if (!func_12(&uLocal_69))
		{
			func_11(&uLocal_69, 0, 0);
		}
		else if (func_10(&uLocal_69, 10000, 0))
		{
			Local_242.f_0 = 3;
		}
	}
	if (func_9())
	{
		Local_242.f_0 = 3;
	}
	if (!BitTest(Global_44241, 10))
	{
		if (Local_242.f_55 == 1)
		{
			if (!Local_242.f_56)
			{
				if (((!unk_0xF847447D4467709D() || func_8("AIRSTRIKE_1")) || func_8("AIRSTRIKE_2")) || func_8("AIRSTRIKE_4"))
				{
					func_7("AIRSTRIKE_3", -1);
					Local_242.f_56 = 1;
				}
			}
		}
	}
	if (bLocal_52)
	{
		if (!func_4(unk_0x9E2D6C50374FCFA9(), 1, 0))
		{
			Local_242.f_0 = 3;
		}
	}
	else if (func_4(unk_0x9E2D6C50374FCFA9(), 1, 0) || func_3())
	{
		Local_242.f_0 = 3;
	}
	if (unk_0xF34D8FCAE3FD4EE4())
	{
		Local_242.f_0 = 3;
	}
	if (Global_2788199.f_224 || func_2(unk_0x9E2D6C50374FCFA9()))
	{
		Local_242.f_0 = 3;
	}
}

int func_2(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x9315DBF7D972F07A())
	{
		return 0;
	}
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		return Global_2788198;
	}
	else
	{
		iVar0 = unk_0x407E03586628E458(iParam0);
		if (unk_0xE5965CDF24F93A9F(iVar0))
		{
			iVar1 = unk_0x15CAA6D7B11F1A7C(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

var func_3()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_36.f_18, 0);
}

int func_4(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_5(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853348[iParam0 /*834*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)
{
	return func_6(iParam0);
}

var func_6(int iParam0)
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
}

void func_7(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

bool func_8(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

bool func_9()
{
	return Global_1574582;
}

int func_10(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_11(uParam0, bParam2, 0);
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

void func_11(var uParam0, bool bParam1, bool bParam2)
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

bool func_12(var uParam0)
{
	return uParam0->f_1;
}

void func_13()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	
	iVar0 = unk_0xE2D3D51028F0428A();
	iVar7 = 200;
	if (BitTest(Global_44241, 10))
	{
		iVar0 = 0;
		iVar7 = 300;
	}
	if (func_44(Local_63))
	{
		if (func_42(Local_242.f_2))
		{
			Local_63 = { unk_0x6B62510F212526DC(unk_0xA5677134B9672173(Local_242.f_2), 1) };
			Local_63.f_2 = (Local_63.f_2 - 5f);
		}
	}
	switch (Local_242.f_50)
	{
		case 0:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!BitTest(uLocal_241, Local_242.f_50))
				{
					Var1 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 };
					Var1.f_2 = Local_63.f_2;
					Var4 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 };
					Var4 = { Var4 + Vector(0f, 0.1f, 0.1f) };
					unk_0x9CD4CBF2BBE10F00(Var4 + Vector(10f, 0f, 0f), &(Var4.f_2), 0, 0);
					Var4.f_2 = (Var4.f_2 - 25f);
					unk_0x633F41B5CEA31CC2(Var1, Var4, iVar7, 1, joaat("weapon_airstrike_rocket"), unk_0xE2D3D51028F0428A(), 1, 0, -1f, iVar0, 1, 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					iLocal_57 = 1;
					unk_0xCED9E32812D6C7C7(&uLocal_241, Local_242.f_50);
					if (func_41())
					{
						if (func_38())
						{
							func_15(&uLocal_73, "HS4FAUD", "HS4F_SAAIP1", 12, 0, 0, 0);
						}
					}
				}
			}
			else if (func_10(&(Local_242.f_51), 750, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 1:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!BitTest(uLocal_241, Local_242.f_50))
				{
					Var1 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var1.f_2 = Local_63.f_2;
					Var4 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var4 = { Var4 + Vector(0f, 0.1f, 0.1f) };
					unk_0x9CD4CBF2BBE10F00(Var4 + Vector(10f, 0f, 0f), &(Var4.f_2), 0, 0);
					Var4.f_2 = (Var4.f_2 - 25f);
					unk_0x633F41B5CEA31CC2(Var1, Var4, iVar7, 1, joaat("weapon_airstrike_rocket"), unk_0x8AF984152F749D80(Local_242.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					unk_0xCED9E32812D6C7C7(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 2:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!BitTest(uLocal_241, Local_242.f_50))
				{
					Var1 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var1.f_2 = Local_63.f_2;
					Var4 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var4 = { Var4 + Vector(0f, 0.1f, 0.1f) };
					unk_0x9CD4CBF2BBE10F00(Var4 + Vector(10f, 0f, 0f), &(Var4.f_2), 0, 0);
					Var4.f_2 = (Var4.f_2 - 25f);
					unk_0x633F41B5CEA31CC2(Var1, Var4, iVar7, 1, joaat("weapon_airstrike_rocket"), unk_0x8AF984152F749D80(Local_242.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					unk_0xCED9E32812D6C7C7(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 3:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!BitTest(uLocal_241, Local_242.f_50))
				{
					Var1 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var1.f_2 = Local_63.f_2;
					Var4 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var4 = { Var4 + Vector(0f, 0.1f, 0.1f) };
					unk_0x9CD4CBF2BBE10F00(Var4 + Vector(10f, 0f, 0f), &(Var4.f_2), 0, 0);
					Var4.f_2 = (Var4.f_2 - 25f);
					unk_0x633F41B5CEA31CC2(Var1, Var4, iVar7, 1, joaat("weapon_airstrike_rocket"), unk_0x8AF984152F749D80(Local_242.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					unk_0xCED9E32812D6C7C7(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 750, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 4:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!BitTest(uLocal_241, Local_242.f_50))
				{
					Var1 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var1.f_2 = Local_63.f_2;
					Var4 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var4 = { Var4 + Vector(0f, 0.1f, 0.1f) };
					unk_0x9CD4CBF2BBE10F00(Var4 + Vector(10f, 0f, 0f), &(Var4.f_2), 0, 0);
					Var4.f_2 = (Var4.f_2 - 25f);
					unk_0x633F41B5CEA31CC2(Var1, Var4, iVar7, 1, joaat("weapon_airstrike_rocket"), unk_0x8AF984152F749D80(Local_242.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					unk_0xCED9E32812D6C7C7(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 5:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!BitTest(uLocal_241, Local_242.f_50))
				{
					Var1 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var1.f_2 = Local_63.f_2;
					Var4 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var4 = { Var4 + Vector(0f, 0.1f, 0.1f) };
					unk_0x9CD4CBF2BBE10F00(Var4 + Vector(10f, 0f, 0f), &(Var4.f_2), 0, 0);
					Var4.f_2 = (Var4.f_2 - 25f);
					unk_0x633F41B5CEA31CC2(Var1, Var4, iVar7, 1, joaat("weapon_airstrike_rocket"), unk_0x8AF984152F749D80(Local_242.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					unk_0xCED9E32812D6C7C7(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 750, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 6:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!BitTest(uLocal_241, Local_242.f_50))
				{
					Var1 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var1.f_2 = Local_63.f_2;
					Var4 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var4 = { Var4 + Vector(0f, 0.1f, 0.1f) };
					unk_0x9CD4CBF2BBE10F00(Var4 + Vector(10f, 0f, 0f), &(Var4.f_2), 0, 0);
					Var4.f_2 = (Var4.f_2 - 25f);
					unk_0x633F41B5CEA31CC2(Var1, Var4, iVar7, 1, joaat("weapon_airstrike_rocket"), unk_0x8AF984152F749D80(Local_242.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					unk_0xCED9E32812D6C7C7(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 7:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!BitTest(uLocal_241, Local_242.f_50))
				{
					Var1 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var1.f_2 = Local_63.f_2;
					Var4 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var4 = { Var4 + Vector(0f, 0.1f, 0.1f) };
					unk_0x9CD4CBF2BBE10F00(Var4 + Vector(10f, 0f, 0f), &(Var4.f_2), 0, 0);
					Var4.f_2 = (Var4.f_2 - 25f);
					unk_0x633F41B5CEA31CC2(Var1, Var4, iVar7, 1, joaat("weapon_airstrike_rocket"), unk_0x8AF984152F749D80(Local_242.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					unk_0xCED9E32812D6C7C7(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 8:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!BitTest(uLocal_241, Local_242.f_50))
				{
					Var1 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var1.f_2 = Local_63.f_2;
					Var4 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var4 = { Var4 + Vector(0f, 0.1f, 0.1f) };
					unk_0x9CD4CBF2BBE10F00(Var4 + Vector(10f, 0f, 0f), &(Var4.f_2), 0, 0);
					Var4.f_2 = (Var4.f_2 - 25f);
					unk_0x633F41B5CEA31CC2(Var1, Var4, iVar7, 1, joaat("weapon_airstrike_rocket"), unk_0x8AF984152F749D80(Local_242.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					unk_0xCED9E32812D6C7C7(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 9:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!BitTest(uLocal_241, Local_242.f_50))
				{
					Var1 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var1.f_2 = Local_63.f_2;
					Var4 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var4 = { Var4 + Vector(0f, 0.1f, 0.1f) };
					unk_0x9CD4CBF2BBE10F00(Var4 + Vector(10f, 0f, 0f), &(Var4.f_2), 0, 0);
					Var4.f_2 = (Var4.f_2 - 25f);
					unk_0x633F41B5CEA31CC2(Var1, Var4, iVar7, 1, joaat("weapon_airstrike_rocket"), unk_0x8AF984152F749D80(Local_242.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0, 0);
					Local_242.f_50++;
					iLocal_57 = 0;
					unk_0xCED9E32812D6C7C7(&uLocal_241, Local_242.f_50);
				}
			}
			break;
	}
}

void func_14(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_15(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_37(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_16(sParam2, iParam3, 0);
}

int func_16(char* sParam0, int iParam1, bool bParam2)
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
					func_36();
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
		if (func_35(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_34();
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
				func_26();
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
				if (func_25())
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
			if (func_24())
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
			func_23();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_22();
		func_17();
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
		func_36();
	}
	return 0;
}

void func_17()
{
	if (!func_18())
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

int func_18()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_21())
	{
		return 0;
	}
	if (func_19(unk_0x9E2D6C50374FCFA9()))
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

bool func_19(int iParam0)
{
	return func_20(iParam0, 20);
}

var func_20(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_21()
{
	return -1;
}

void func_22()
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

void func_23()
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

int func_24()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_25()
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

void func_26()
{
	if (func_33(14))
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
		Global_20266 = func_27();
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

var func_27()
{
	func_28();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_28()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_31(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_30(unk_0xE2D3D51028F0428A());
			if (func_29(iVar0) && (!func_33(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_29(Global_113386.f_2363.f_539.f_4321))
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

bool func_29(int iParam0)
{
	return iParam0 < 3;
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_31(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_31(int iParam0)
{
	if (func_29(iParam0))
	{
		return func_32(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_32(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_33(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_34()
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

bool func_35(int iParam0, int iParam1)
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

void func_36()
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

void func_37(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

bool func_38()
{
	return func_39(unk_0x9E2D6C50374FCFA9());
}

var func_39(int iParam0)
{
	return func_40(&(Global_2689235[iParam0 /*453*/].f_434), 0);
}

var func_40(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

int func_41()
{
	int iVar0;
	
	iVar0 = unk_0x320D1840B6DAA1CC();
	if (Global_21605 == 0)
	{
		if ((iVar0 - Global_22627) > 3000)
		{
			if (unk_0x2E5F8A288A954523() == 0)
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

int func_42(var uParam0)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		return !func_43(unk_0xA5677134B9672173(uParam0));
	}
	return 0;
}

int func_43(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_44(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_45()
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	
	if (func_42(Local_242.f_2))
	{
		uVar0 = unk_0xA5677134B9672173(Local_242.f_2);
		Var4 = { unk_0x6B62510F212526DC(uVar0, 1) };
	}
	if (!iLocal_59)
	{
		if (!func_44(Local_300[unk_0xF1354995C6159A78() /*5*/].f_2))
		{
			Var1 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 };
		}
		else if (func_51(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
		}
	}
	if (iLocal_58 && !BitTest(Global_44241, 10))
	{
		if (!iLocal_59)
		{
			if (func_42(Local_242.f_2))
			{
				if (!unk_0x8F41785F110B0DA0(iVar0, Local_60, 75f, 75f, 1000f, 0, 1, 0))
				{
					fLocal_66 = unk_0x987A5F1E1A67E3C0(Var4, Var1, 0);
				}
				else
				{
					iLocal_59 = 1;
				}
			}
			else
			{
				iLocal_59 = 1;
			}
		}
		else
		{
			fLocal_66 = (fLocal_66 - 3.75f);
		}
		iVar7 = unk_0xF34EE736CF047844(fLocal_66);
		if (fLocal_66 <= 200f)
		{
			iVar8 = 6;
		}
		else
		{
			iVar8 = 1;
		}
		if (fLocal_66 >= 0f)
		{
			func_46(iVar7, "AIRSTRIKE_2", -1, iVar8, 2, 0, "AIRSTRIKE_6", 0, 0f, 0, 0, iVar8, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
		}
	}
}

void func_46(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_50(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_49(6, iVar0);
		Global_1649593.f_4041[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4041.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4041.f_183[iVar0] = iParam3;
		Global_1649593.f_4041.f_172[iVar0] = iParam2;
		Global_1649593.f_4041.f_260[iVar0] = iParam4;
		Global_1649593.f_4041.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1649593.f_4041.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1649593.f_4041.f_443[iVar0] = iParam7;
		Global_1649593.f_4041.f_454[iVar0] = fParam8;
		Global_1649593.f_4041.f_497[iVar0] = iParam9;
		Global_1649593.f_4041.f_508[iVar0] = iParam10;
		Global_1649593.f_4041.f_205[iVar0] = iParam11;
		Global_1649593.f_4041.f_216[iVar0] = iParam12;
		Global_1649593.f_4041.f_227[iVar0] = iParam13;
		Global_1649593.f_4041.f_238[iVar0] = iParam14;
		Global_1649593.f_4041.f_249[iVar0] = iParam15;
		Global_1649593.f_4041.f_519[iVar0] = iParam16;
		Global_1649593.f_4041.f_530[iVar0] = iParam17;
		Global_1649593.f_4041.f_541[iVar0] = iParam18;
		Global_1649593.f_4041.f_552[iVar0] = iParam19;
		Global_1649593.f_4041.f_563[iVar0] = iParam20;
		Global_1649593.f_4041.f_574[iVar0] = iParam21;
		Global_1649593.f_4041.f_585[iVar0] = iParam22;
		Global_1649593.f_4041.f_596[iVar0] = iParam23;
		Global_1649593.f_4041.f_607[iVar0] = iParam24;
		Global_1649593.f_4041.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_48())
		{
			Global_1649593.f_1172 = 1;
		}
		if (unk_0x8FE9914D4872D601())
		{
			iVar2 = 0;
			unk_0x604161EB05F29E6D(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1649593.f_1176 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1649593.f_1175 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1649593.f_1172 = 1;
			}
			if (func_47())
			{
				Global_1649593.f_1176 = 1;
			}
		}
	}
}

int func_47()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x8FE9914D4872D601())
	{
		unk_0x604161EB05F29E6D(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_48()
{
	if (((unk_0xE2F2D76A4AA269FF() == 8 || unk_0xE2F2D76A4AA269FF() == 9) || unk_0xE2F2D76A4AA269FF() == 10) || unk_0xE2F2D76A4AA269FF() == 12)
	{
		return 1;
	}
	return 0;
}

void func_49(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_1649593.f_7009[iParam0]), iParam1);
}

int func_50(int iParam0, int iParam1)
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

int func_51(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x3583A42587543334(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_52()
{
}

void func_53()
{
	struct<3> Var0;
	bool bVar3;
	
	func_97();
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (!iLocal_56 && !BitTest(Global_44241, 10))
			{
				if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) <= 0)
				{
					bVar3 = !func_96();
					unk_0x9521FB98DB6DDF50(unk_0xE2D3D51028F0428A(), joaat("weapon_flare"), 1, bVar3, bVar3);
					unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_flare"), bVar3);
					iLocal_56 = 1;
				}
			}
			else if (BitTest(Global_44241, 10) || unk_0xE3D651A33D0FAD23(unk_0xE2D3D51028F0428A(), joaat("weapon_flare"), 100f, &(Local_300[unk_0xF1354995C6159A78() /*5*/].f_2), 1))
			{
				if (BitTest(Global_44241, 10))
				{
					Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
				}
				else if (func_95(Local_300[unk_0xF1354995C6159A78() /*5*/].f_2, 0f, 0f, 0f, 0))
				{
					Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 = { Var0 };
				}
				if (func_8("AIRSTRIKE_1"))
				{
					unk_0x3410421C60BF7143(1);
				}
				if (!iLocal_55)
				{
					if (!func_94(Local_242.f_2.f_3))
					{
						if (func_42(Local_242.f_2))
						{
							func_93();
							unk_0x03A927199A2DFE46(unk_0x8AF984152F749D80(Local_242.f_2.f_3));
							unk_0x8ACADA903FCAA42F(unk_0x8AF984152F749D80(Local_242.f_2.f_3), uLocal_49);
							unk_0x1195689FECAE45C7(unk_0xA5677134B9672173(Local_242.f_2), unk_0xF2DB717A73826179(50f));
							iLocal_55 = 1;
						}
					}
				}
			}
			else if (!iLocal_54 && !BitTest(Global_44241, 10))
			{
				if (!unk_0xF847447D4467709D())
				{
					if (func_92(unk_0xE2D3D51028F0428A()))
					{
						func_7("AIRSTRIKE_4", -1);
					}
					else
					{
						func_7("AIRSTRIKE_1", -1);
					}
					iLocal_54 = 1;
				}
			}
		}
	}
	func_63();
	func_54();
}

void func_54()
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	
	switch (Local_242.f_2.f_2)
	{
		case 0:
			func_62();
			break;
		
		case 1:
			func_62();
			break;
		
		case 2:
			if (func_42(Local_242.f_2))
			{
				iLocal_58 = 1;
				uVar0 = unk_0xA5677134B9672173(Local_242.f_2);
				if (!unk_0x12DD4A0B247D9B4D(uLocal_47))
				{
					uLocal_47 = unk_0xEFD6451BF0F3352F(uVar0);
					unk_0x1A5B5BA56167D412(uLocal_47, 16);
					unk_0xAF62582F3EA39095(uLocal_47, func_60());
					unk_0x3430966AC4550BB9(uLocal_47, 0);
				}
				else
				{
					unk_0xB02954D4F69B7A25(uLocal_47, unk_0x11E019C8F43ACC8A(unk_0x82FE2343F8BDFF0B(uVar0)));
				}
				if (!iLocal_53)
				{
					if (!func_44(Local_300[unk_0xF1354995C6159A78() /*5*/].f_2))
					{
						Var7 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 };
					}
					else
					{
						Var7 = { Local_60 };
					}
					if (unk_0x987A5F1E1A67E3C0(Var7, unk_0x6B62510F212526DC(uVar0, 1), 1) <= (60f * 5f))
					{
						unk_0xC06EF1B97DD5BBE8(unk_0xA5677134B9672173(Local_242.f_2));
						iLocal_53 = 1;
					}
				}
				if (!iLocal_239 && !BitTest(Global_44241, 10))
				{
					if (!Local_242.f_54)
					{
						if (!func_94(Local_242.f_2.f_3))
						{
							if (!func_44(Local_300[unk_0xF1354995C6159A78() /*5*/].f_2))
							{
								if (unk_0x987A5F1E1A67E3C0(func_59(unk_0x9E2D6C50374FCFA9()), unk_0x6B62510F212526DC(unk_0xA5677134B9672173(Local_242.f_2.f_3), 1), 0) <= 250f)
								{
									if (unk_0x987A5F1E1A67E3C0(Var7, unk_0x6B62510F212526DC(iVar0, 1), 1) >= (60f * 2.5f))
									{
										if (func_41())
										{
											if (func_38())
											{
												func_15(&uLocal_73, "HS4FAUD", "HS4F_SAACI1", 12, 0, 0, 0);
											}
											else
											{
												func_58(&uLocal_73, "CT_AUD", "MPCT_ASarr", 12, 0, 0, 0);
											}
										}
										iLocal_239 = 1;
									}
								}
							}
						}
					}
				}
				if (Local_242.f_50 < 10)
				{
					if (!Local_242.f_53)
					{
						if (!func_44(Local_300[unk_0xF1354995C6159A78() /*5*/].f_2))
						{
							if (func_57() == 2)
							{
								if (!func_12(&uLocal_67))
								{
									func_11(&uLocal_67, 0, 0);
								}
								else if (func_10(&uLocal_67, 7500, 0))
								{
									Local_242.f_53 = 1;
								}
								Var1 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 - Vector(1000f, 25f, 25f) };
								Var4 = { Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 + Vector(1000f, 25f, 25f) };
								Var1.f_2 = -200f;
								Var4.f_2 = 1500f;
								if (unk_0x8F41785F110B0DA0(iVar0, Local_300[unk_0xF1354995C6159A78() /*5*/].f_2, 75f, 75f, 1000f, 0, 1, 0) && unk_0xA1C6623FC1047DAD(Var1, Var4, joaat("weapon_flare"), 0))
								{
									Local_242.f_53 = 1;
								}
							}
							else if (func_57() == 1)
							{
								Local_242.f_53 = 1;
								Local_242.f_50 = 100;
							}
						}
						else if (unk_0x8F41785F110B0DA0(iVar0, Local_60, 75f, 75f, 1000f, 0, 1, 0))
						{
							Local_242.f_53 = 1;
							Local_242.f_50 = 100;
							Local_242.f_54 = 1;
							if (!iLocal_240 && !BitTest(Global_44241, 10))
							{
								if (func_41())
								{
									if (!func_38())
									{
										func_58(&uLocal_73, "CT_AUD", "MPCT_ASflr", 12, 0, 0, 0);
									}
								}
								iLocal_240 = 1;
							}
						}
					}
				}
			}
			if (!func_42(Local_242.f_2) || func_94(Local_242.f_2.f_3))
			{
				func_55();
			}
			break;
		
		case 3:
			func_62();
			break;
	}
}

void func_55()
{
	var uVar0;
	
	if (!func_94(Local_242.f_2.f_3))
	{
		if (func_56(Local_242.f_2.f_3))
		{
			if (unk_0x07B2F8356DC13CF4(Local_242.f_2.f_3))
			{
				uVar0 = unk_0x8AF984152F749D80(Local_242.f_2.f_3);
				unk_0xF160248D9083ED0C(uVar0, 0, 0);
			}
		}
	}
}

int func_56(var uParam0)
{
	if (unk_0x3BA0A79B368FAA6D(uParam0))
	{
		return 1;
	}
	if (unk_0x54E30A65F4FA4962())
	{
		unk_0xC31EECA11005273C(uParam0);
	}
	return 0;
}

int func_57()
{
	if (Local_242.f_55 == 1)
	{
		return Local_242.f_55;
	}
	else if (Local_242.f_55 == 2)
	{
		return Local_242.f_55;
	}
	if (!unk_0x15616E8442D3D1E8(Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 + Vector(0.5f, 0f, 0f)))
	{
		Local_242.f_55 = 1;
		return Local_242.f_55;
	}
	Local_242.f_55 = 2;
	return Local_242.f_55;
}

int func_58(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_37(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2883585 = 1;
	return func_16(sParam2, iParam3, 0);
}

Vector3 func_59(int iParam0)
{
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(iParam0), 0);
}

char* func_60()
{
	if (func_61())
	{
		return "PA_AIRSTRIKE_BLIP";
	}
	return "AIRSTRIKE_5";
}

bool func_61()
{
	return Global_2714762.f_24;
}

void func_62()
{
	if (unk_0x12DD4A0B247D9B4D(uLocal_47))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_47);
	}
}

void func_63()
{
	switch (Local_242.f_2.f_2)
	{
		case 0:
			func_91(1);
			break;
		
		case 1:
			if (func_64())
			{
				func_91(2);
			}
			break;
		
		case 2:
			if (!func_42(Local_242.f_2))
			{
				if (func_94(Local_242.f_2.f_3))
				{
					func_91(3);
				}
			}
			else if (func_94(Local_242.f_2.f_3))
			{
				func_91(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_64()
{
	if (!func_12(&uLocal_71))
	{
		func_11(&uLocal_71, 0, 0);
	}
	else if (func_90(Local_242.f_2.f_1) && func_90(Local_242.f_2.f_3.f_1))
	{
		if (func_10(&uLocal_71, 3000, 0))
		{
			if (func_68() && func_65())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_65()
{
	if ((!unk_0xCCDCD6672DAE6835(Local_242.f_2.f_3) && func_90(Local_242.f_2.f_3.f_1)) && unk_0xCCDCD6672DAE6835(Local_242.f_2))
	{
		if (func_42(Local_242.f_2))
		{
			if (func_67(&(Local_242.f_2.f_3), Local_242.f_2, 22, Local_242.f_2.f_3.f_1, -1, 1, 1, 1))
			{
				unk_0x50274A7EACA3133A(unk_0x8AF984152F749D80(Local_242.f_2.f_3), 1);
				unk_0xFF4BEB6CFF55A013(unk_0x8AF984152F749D80(Local_242.f_2.f_3), Global_1837194);
				unk_0x6E9C0F9EAC1F29FD(unk_0x8AF984152F749D80(Local_242.f_2.f_3), 0);
				unk_0xABC2CA6F28903308(unk_0x8AF984152F749D80(Local_242.f_2.f_3), 1);
				func_66();
				unk_0x8ACADA903FCAA42F(unk_0x8AF984152F749D80(Local_242.f_2.f_3), uLocal_48);
				unk_0x1195689FECAE45C7(unk_0xA5677134B9672173(Local_242.f_2), unk_0xF2DB717A73826179(50f));
			}
		}
	}
	if (!unk_0xCCDCD6672DAE6835(Local_242.f_2.f_3))
	{
		return 0;
	}
	unk_0xF1A23B343DFEDFD0(Local_242.f_2.f_3.f_1);
	return 1;
}

void func_66()
{
	if (!iLocal_50)
	{
		if (func_42(Local_242.f_2))
		{
			unk_0xA888F8CC04F25CC8(&uLocal_48);
			unk_0xCDAACB23D43F080D(0, unk_0xA5677134B9672173(Local_242.f_2), 0, 0, Local_60 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20, 1);
			unk_0xCDAACB23D43F080D(0, unk_0xA5677134B9672173(Local_242.f_2), 0, 0, Local_242.f_2.f_14, 4, 60f, 25f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20, 1);
			unk_0xC963A45B50851768(uLocal_48);
			iLocal_50 = 1;
		}
	}
}

int func_67(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xA777DF215CCFCC77(1))
	{
		return 0;
	}
	if (!unk_0xCCDCD6672DAE6835(uParam1))
	{
		return 0;
	}
	if (!unk_0x55A0C756C4A8220C(unk_0xA5677134B9672173(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xED28EE4BE581A032(unk_0x487C17B41938052C(unk_0xA5677134B9672173(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0xCCDCD6672DAE6835(*uParam0))
	{
		unk_0x398C962F550CF3B4(unk_0x8AF984152F749D80(*uParam0), iParam7);
		if (unk_0xD64C90C3F536F963(unk_0x8AF984152F749D80(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x4C6E9D70687FCDCE(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_68()
{
	struct<3> Var0;
	var uVar3;
	
	if (!unk_0xCCDCD6672DAE6835(Local_242.f_2))
	{
		if (func_90(Local_242.f_2.f_1))
		{
			if (unk_0x01FE3D0E34407698("AIRSTRIKE_FLYOVER", 0))
			{
				func_86(&Var0, &uVar3);
				if (func_72(Var0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_69(&(Local_242.f_2), Local_242.f_2.f_1, Var0, uVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						Local_242.f_2.f_14 = { Var0 * Vector(0f, -1f, -1f) };
						unk_0x3B2646B62E7BBE11(unk_0xA5677134B9672173(Local_242.f_2), 2);
						unk_0x5C65DDDC219B3AA5(unk_0xA5677134B9672173(Local_242.f_2), 0);
						unk_0x4536AE3DABDE0C44(unk_0xA5677134B9672173(Local_242.f_2), 1);
						unk_0xAA8C46C452582702(unk_0xA5677134B9672173(Local_242.f_2));
						unk_0xB2D5451CC5606248(unk_0xA5677134B9672173(Local_242.f_2), 60f);
						unk_0x371D594409A68A18(unk_0xA5677134B9672173(Local_242.f_2), 1, 1, 0);
						unk_0x22553D3793725F7B(unk_0xA5677134B9672173(Local_242.f_2), 1000);
						unk_0x398C962F550CF3B4(unk_0xA5677134B9672173(Local_242.f_2), 0);
						unk_0x3739DEED4A756E69(unk_0xA5677134B9672173(Local_242.f_2), 3);
						unk_0x374A31568F76EFAF(unk_0xA5677134B9672173(Local_242.f_2));
						unk_0xF1A23B343DFEDFD0(Local_242.f_2.f_1);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_69(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x61ADF697DF551DA6(iParam1))
	{
		return 0;
	}
	if (!unk_0x993E56B8150C834F(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		unk_0x02B222EADC9DC566(Param2, fVar0, 0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0xBA715A7BEBA5A1F9(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	if (unk_0xE5965CDF24F93A9F(iVar1))
	{
		*uParam0 = unk_0xA08CC064DAC564A5(iVar1);
		Global_2815059.f_6679 = iVar1;
		if (unk_0xCCDCD6672DAE6835(*uParam0))
		{
			if (bParam15)
			{
				unk_0x229DD509EDB2FBD4(iVar1, 1);
			}
			unk_0x398C962F550CF3B4(iVar1, iParam10);
			if (unk_0xD64C90C3F536F963(iVar1))
			{
				if (bParam8)
				{
					unk_0x4C6E9D70687FCDCE(*uParam0, 1);
				}
				else
				{
					unk_0x4C6E9D70687FCDCE(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0xAEBA172874A3DEFC(*uParam0, unk_0x9E2D6C50374FCFA9(), 1);
				}
			}
			unk_0x4FA753674D81BF2E(iVar1, iParam9);
			unk_0x41EC6688527C1C31(iVar1, 1);
			if (bParam12)
			{
				unk_0xA4FCB26551D216B8(iVar1);
				unk_0x59492C1B3DB11BDE(iVar1, 5, 5, 1f);
			}
			func_70(Param2, uParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_70(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_71(unk_0x9E2D6C50374FCFA9(), Param0, iParam4) > -1)
	{
		if ((Global_2667225.f_2921[1 /*6*/].f_5 == iParam5 && Global_2667225.f_2921[1 /*6*/].f_4 == iParam4) && unk_0x2A488C176D52CCA5(Global_2667225.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2667225.f_2921[iVar0 /*6*/] = { Global_2667225.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2667225.f_2921[1 /*6*/] = { Param0 };
		Global_2667225.f_2921[1 /*6*/].f_3 = uParam3;
		Global_2667225.f_2921[1 /*6*/].f_4 = iParam4;
		Global_2667225.f_2921[1 /*6*/].f_5 = iParam5;
	}
}

int func_71(int iParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (unk_0x48053974ED6F63CE((Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (unk_0x2A488C176D52CCA5(Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_72(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2667225.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x34FAA537D539192C(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xAC48FF26FAAA8DD0(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xAC48FF26FAAA8DD0(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x2D3CDDF3FE35FCA6(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam13)
	{
		if (unk_0x3FDE5764A07BA515(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (fParam14 > 0f)
	{
		if (func_80(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_73(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2667225.f_2++;
	return 1;
}

int func_73(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_51(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			if (!unk_0xA829C9A2767AC8EF())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x987A5F1E1A67E3C0(func_78(unk_0x9E2D6C50374FCFA9()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x0318E2EE6FB4563F(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_51(iVar1, 1, 1))
		{
			if (!func_75(iVar1, 0) && unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x9E2D6C50374FCFA9()))
				{
					if ((func_74(iVar1) || !bParam10) && !Global_2689235[iVar1 /*453*/].f_267)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x0E40F846A70BA3EC(iVar1) == -1)
							{
								if (unk_0x0E40F846A70BA3EC(iVar1) == unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x0E40F846A70BA3EC(iVar1) != unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))) || unk_0x0E40F846A70BA3EC(iVar1) == -1)
							{
								if (unk_0x987A5F1E1A67E3C0(func_78(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x0809D748691DCA79(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x0E40F846A70BA3EC(iVar1) != iParam8 || unk_0x0E40F846A70BA3EC(iVar1) == -1)
						{
							if (unk_0x987A5F1E1A67E3C0(func_78(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x0809D748691DCA79(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_74(int iParam0)
{
	if (unk_0x4A1EA713628C49D4(unk_0x407E03586628E458(iParam0)) || Global_2689235[iParam0 /*453*/].f_253)
	{
		return 1;
	}
	return 0;
}

bool func_75(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_76(-1, 0) == 8;
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

int func_76(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_77();
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

int func_77()
{
	return Global_1574918;
}

Vector3 func_78(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_79() && Global_1853348[iVar0 /*834*/].f_804) && !func_44(Global_1853348[iVar0 /*834*/].f_805))
	{
		return Global_1853348[iVar0 /*834*/].f_805;
	}
	return func_59(iParam0);
}

var func_79()
{
	return Global_2714762.f_19;
}

int func_80(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x9E2D6C50374FCFA9() != iVar1) || iParam8 == 0)
		{
			if (func_51(iVar1, bParam4, bParam5))
			{
				if (iParam10 || unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
				{
					if (!bParam7 || (!unk_0xF68107C40359970C(unk_0x407E03586628E458(iVar1)) && func_74(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) != unk_0x0E40F846A70BA3EC(iVar1))) || unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1)
						{
							if (((unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1 && uParam9) && bParam6) && func_81(iVar1))
							{
							}
							else if (unk_0xE5965CDF24F93A9F(unk_0x407E03586628E458(iVar1)))
							{
								if (unk_0x987A5F1E1A67E3C0(func_59(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_81(int iParam0)
{
	if (func_85(unk_0x9E2D6C50374FCFA9(), iParam0))
	{
		return 1;
	}
	Global_2787505 = { func_84(iParam0) };
	if (unk_0x106C9EE9D83F20DF(&Global_2787505))
	{
		return 1;
	}
	if (func_82(unk_0x9E2D6C50374FCFA9(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_83(iParam0);
	if (!iVar0 == func_21())
	{
		if (iVar0 == func_83(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_83(int iParam0)
{
	if (iParam0 != func_21())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_21();
}

struct<13> func_84(var uParam0)
{
	struct<13> Var0;
	
	unk_0x460FFCEC183339C6(uParam0, &Var0, 13);
	return Var0;
}

int func_85(int iParam0, var uParam1)
{
	if (unk_0xF453DE81BDFDAE6F())
	{
		Global_2787505 = { func_84(iParam0) };
		Global_2787518 = { func_84(uParam1) };
		if (unk_0x8C992447292D600F(&Global_2787505))
		{
			if (unk_0x8C992447292D600F(&Global_2787518))
			{
				unk_0x4FFBF2C0D8249E45(&Global_2787435, 35, &Global_2787505);
				unk_0x4FFBF2C0D8249E45(&Global_2787470, 35, &Global_2787518);
				if (Global_2787435 == Global_2787470)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_86(var uParam0, var uParam1)
{
	float fVar0;
	
	*uParam0 = { func_88(Local_60 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
	fVar0 = unk_0x23555349EF1F5EBE((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = func_87(*uParam0, Local_60);
}

var func_87(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0xD12EFCAB87804BED((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_88(struct<3> Param0, float fParam3, float fParam4, float fParam5)
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { unk_0xC4EAB25A108C2429(-1f, 1f), unk_0xC4EAB25A108C2429(-1f, 1f), 0f };
	fVar3 = (fParam5 / 2f);
	Var0 = { func_89(Var0, unk_0xC4EAB25A108C2429(fParam3, fParam4)) };
	Var0.f_2 = unk_0xC4EAB25A108C2429(-fVar3, fVar3);
	return Param0 + Var0;
}

Vector3 func_89(struct<3> Param0, float fParam3)
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

int func_90(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xD69A0C3662175E68(iParam0);
	return unk_0x0152AA00FA3130F1(iParam0);
}

void func_91(int iParam0)
{
	if (iParam0 == 3)
	{
		Global_2815059.f_4457 = 0;
	}
	Local_242.f_2.f_2 = iParam0;
}

int func_92(int iParam0)
{
	var uVar0;
	
	if (unk_0x0F92AFFDE5783870(iParam0))
	{
		uVar0 = unk_0xB3FF0049C1FD38EC(iParam0, 0);
		if (unk_0x55A0C756C4A8220C(uVar0, 0))
		{
			if (unk_0xAB793EA186AB8DAA(iVar0, -1, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_93()
{
	if (!iLocal_51)
	{
		if (func_42(Local_242.f_2))
		{
			unk_0xA888F8CC04F25CC8(&uLocal_49);
			unk_0xCDAACB23D43F080D(0, unk_0xA5677134B9672173(Local_242.f_2), 0, 0, Local_300[unk_0xF1354995C6159A78() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20, 1);
			unk_0xCDAACB23D43F080D(0, unk_0xA5677134B9672173(Local_242.f_2), 0, 0, Local_242.f_2.f_14, 4, 60f, 25f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20, 1);
			unk_0xC963A45B50851768(uLocal_49);
			iLocal_51 = 1;
		}
	}
}

int func_94(var uParam0)
{
	if (unk_0xCCDCD6672DAE6835(uParam0))
	{
		return unk_0xF68107C40359970C(unk_0x8AF984152F749D80(uParam0));
	}
	return 1;
}

bool func_95(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_96()
{
	return Global_100493.f_375 > 0;
}

void func_97()
{
	char* sVar0;
	
	if (!iLocal_238 && func_41())
	{
		if (!func_94(Local_242.f_2.f_3))
		{
			sVar0 = "FM_Pilot_Air";
			if (func_38())
			{
				sVar0 = "HS4_AIRSTRIKE1";
			}
			func_98(&uLocal_73, 3, unk_0x8AF984152F749D80(Local_242.f_2.f_3), sVar0, 1, 1);
			iLocal_238 = 1;
		}
	}
}

void func_98(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
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
				unk_0x2378080C93821600(uParam2, 0);
			}
			else
			{
				unk_0x2378080C93821600(uParam2, 1);
			}
		}
		if (!unk_0xF68107C40359970C(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x102D1A546FDB4B6D(uParam2, 0);
			}
			else
			{
				unk_0x102D1A546FDB4B6D(uParam2, 1);
			}
		}
	}
}

void func_99()
{
	Global_2815059.f_4456 = Local_242.f_53;
}

int func_100()
{
	return Local_242.f_0;
}

int func_101(int iParam0)
{
	return Local_300[iParam0 /*5*/];
}

void func_102()
{
}

void func_103()
{
	if (unk_0xCCDCD6672DAE6835(Local_242.f_2.f_3) && unk_0xCCDCD6672DAE6835(Local_242.f_2))
	{
		if (func_42(Local_242.f_2) && !func_94(Local_242.f_2.f_3))
		{
			unk_0xCDAACB23D43F080D(unk_0x8AF984152F749D80(Local_242.f_2.f_3), unk_0xA5677134B9672173(Local_242.f_2), 0, unk_0xE2D3D51028F0428A(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 400, 400, 1);
		}
	}
	func_105(func_106(1, 1), 11, func_21());
	func_104();
}

void func_104()
{
	unk_0xAFBDF6A5E54114C1();
}

void func_105(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = -1600651275;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x2700C00F82C16BF0(1, &Var0, 6, iParam0);
	}
}

int func_106(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xA1087A6350CD9244(iVar1);
		if (func_51(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x9E2D6C50374FCFA9() || iParam0)
			{
				if (bParam1)
				{
					unk_0xCED9E32812D6C7C7(&uVar0, iVar1);
				}
				else if (!func_75(iVar2, 0))
				{
					unk_0xCED9E32812D6C7C7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_107()
{
	if (Global_1575033 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_114())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_113())
	{
		return 1;
	}
	if (func_112(159))
	{
		if (!func_111())
		{
			return 1;
		}
	}
	if (func_112(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_108() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_108()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_108()
{
	switch (func_110())
	{
		case 0:
			return func_109();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_109()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_110()
{
	return Global_31959;
}

bool func_111()
{
	return Global_2714762.f_698;
}

int func_112(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_113()
{
	return Global_2725403;
}

bool func_114()
{
	return Global_2714762.f_693;
}

void func_115()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_116(struct<21> Param0)
{
	func_122(func_123(Param0.f_0), Param0);
	unk_0xF8B8A6EDAA31F196(1);
	unk_0xC1F83F3B5F8E7D3B(1);
	func_120(0, -1, 0);
	unk_0x21F2B09183F31D02(&Local_242, 58, 0);
	unk_0x7157B1051528D729(&Local_300, 11, 0);
	unk_0x2C07CBAFAC54A645(0);
	if (!func_119())
	{
		func_103();
	}
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		Local_60 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0) };
	}
	if (func_4(unk_0x9E2D6C50374FCFA9(), 1, 0))
	{
		bLocal_52 = true;
	}
	func_117(64, 1);
	Local_300[unk_0xF1354995C6159A78() /*5*/] = 0;
}

void func_117(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2359296[func_118() /*5567*/].f_681.f_19 = iVar0;
			break;
		
		case 19:
			Global_2359296[func_118() /*5567*/].f_681.f_18 = iVar0;
			break;
		
		case 74:
			Global_2359296[func_118() /*5567*/].f_681.f_12 = iVar0;
			break;
		
		case 29:
			Global_2359296[func_118() /*5567*/].f_681.f_14 = iVar0;
			break;
		
		case 8:
			Global_2359296[func_118() /*5567*/].f_681.f_15 = iVar0;
			break;
		
		case 31:
			Global_2359296[func_118() /*5567*/].f_681.f_16 = iVar0;
			break;
		
		case 3:
			Global_2359296[func_118() /*5567*/].f_681.f_20 = iVar0;
			break;
		
		case 6:
			Global_2359296[func_118() /*5567*/].f_681.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2359296[func_118() /*5567*/].f_681.f_23 = iVar0;
			break;
		
		case 76:
			Global_2359296[func_118() /*5567*/].f_681.f_24 = iVar0;
			break;
		
		case 93:
			Global_2359296[func_118() /*5567*/].f_681.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2359296[func_118() /*5567*/].f_681.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2359296[func_118() /*5567*/].f_681.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2359296[func_118() /*5567*/].f_681.f_29 = iVar0;
			break;
		
		case 88:
			Global_2359296[func_118() /*5567*/].f_681.f_28 = iVar0;
			break;
		
		case 100:
			Global_2359296[func_118() /*5567*/].f_681.f_31 = iVar0;
			break;
		
		case 106:
			Global_2359296[func_118() /*5567*/].f_681.f_32 = iVar0;
			break;
		
		case 99:
			Global_2359296[func_118() /*5567*/].f_681.f_30 = iVar0;
			break;
	}
}

int func_118()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_119()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x9315DBF7D972F07A())
		{
			return 0;
		}
		if (unk_0x72FEF2581032D369())
		{
			return 1;
		}
		if (func_114())
		{
			return 0;
		}
		if (func_112(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_120(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x0EEB2C2CA48FB650();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_104();
			}
			else
			{
				return 0;
			}
		}
		if (!func_121(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x9315DBF7D972F07A())
				{
					if (!bParam2)
					{
						func_104();
					}
					else
					{
						return 0;
					}
				}
				if (func_114())
				{
					if (!bParam2)
					{
						func_104();
					}
					else
					{
						return 0;
					}
				}
				if (func_112(157))
				{
					if (!bParam2)
					{
						func_104();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xDB51AF48ABE62D4D())
			{
				if (!bParam2)
				{
					func_104();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x0EEB2C2CA48FB650();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			if (!bParam2)
			{
				func_104();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xDB51AF48ABE62D4D())
	{
		if (!bParam2)
		{
			func_104();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_121(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_122(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x9315DBF7D972F07A())
	{
		func_104();
	}
	unk_0xD9B114A8D3A8319F(uParam0, 0, Param1.f_16);
}

int func_123(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 163:
			return 32;
		
		case 164:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 175:
			return 32;
		
		case 176:
			return 32;
		
		case 165:
			return 32;
		
		case 166:
			return 32;
		
		case 170:
			return 32;
		
		case 168:
			return 32;
		
		case 169:
			return 32;
		
		case 173:
			return 32;
		
		case 174:
			return 32;
		
		case 171:
			return 32;
		
		case 172:
			return 32;
		
		case 177:
			return 32;
		
		case 178:
			return 32;
		
		case 179:
			return 32;
		
		case 180:
			return 32;
		
		case 181:
			return 2;
		
		case 186:
			return 1;
		
		case 182:
			return 2;
		
		case 183:
			return 4;
		
		case 184:
			return 2;
		
		case 185:
			return 2;
		
		case 167:
			return 1;
		
		case 187:
			return 2;
		
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
			return 0;
		
		case 209:
			return 1;
		
		case 194:
			return 4;
		
		case 197:
			return 4;
		
		case 198:
			return 1;
		
		case 199:
			return 1;
		
		case 205:
			return 1;
		
		case 201:
			return 2;
		
		case 206:
			return 1;
		
		case 202:
			return 1;
		
		case 200:
			return 2;
		
		case 203:
			return 8;
		
		case 204:
			return 8;
		
		case 207:
			return 1;
		
		case 208:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 195:
			return 16;
		
		case 196:
			return 32;
		
		default:
	}
	switch (func_124(func_125(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		default:
	}
	return -1;
}

int func_125(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 181:
			return 15;
		
		case 188:
			return 8;
		
		case 182:
			return 14;
		
		case 186:
			return 122;
		
		case 189:
			return 1;
		
		case 187:
			return 5;
		
		case 190:
			return 6;
		
		case 183:
			return 11;
		
		case 191:
			return 0;
		
		case 192:
			return 2;
		
		case 184:
			return 13;
		
		case 193:
			return 3;
		
		case 185:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		default:
	}
	if (bParam1)
	{
	}
	return 304;
}

