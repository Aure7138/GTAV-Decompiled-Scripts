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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	struct<3> Local_46 = { 0, 0, 0 } ;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 16;
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
	var uLocal_219 = 0;
	var uLocal_220[3] = { 0, 0, 0 };
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	struct<3> Local_226 = { 0, 0, 0 } ;
	struct<3> Local_229[3];
	float fLocal_239[3] = { 0f, 0f, 0f };
	struct<3> Local_243 = { 0, 0, 0 } ;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	var uLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	bool bLocal_256 = 0;
	struct<3> Local_257 = { 0, 0, 0 } ;
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
	int iVar0;
	struct<6> Var1;
	int iVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	bool bVar12;
	int iVar13;
	struct<3> Var14;
	float fVar17;
	int iVar18[3];
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
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
	iVar0 = 0;
	Var1 = 3;
	iVar7 = 0;
	iLocal_51 = 3;
	Local_226 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_229[0 /*3*/] = { 1283.85f, -1622.501f, 53.2255f };
	fLocal_239[0] = 198.9926f;
	Local_229[1 /*3*/] = { 1286.655f, -1627f, 53.225f };
	fLocal_239[1] = 22.3073f;
	Local_229[2 /*3*/] = { 1286.452f, -1624.782f, 53.225f };
	fLocal_239[2] = 49.6773f;
	Var14 = { 1298.391f, -1580.895f, 50.7937f };
	fVar17 = 332.006f;
	Local_243 = { 1277.725f, -1617.897f, 53.2254f };
	if (func_164())
	{
		Var1[0] = joaat("g_m_y_mexgoon_02");
		Var1[1] = joaat("g_m_y_mexgoon_02");
		Var1[2] = joaat("g_m_y_mexgoon_02");
		Var1.f_4 = joaat("a_f_y_eastsa_03");
	}
	else
	{
		Var1[0] = joaat("g_m_y_mexgoon_02");
		Var1[1] = joaat("g_m_y_mexgoon_02");
		Var1[2] = joaat("g_m_y_mexgoon_02");
		Var1.f_4 = joaat("a_f_y_eastsa_03");
	}
	Var1.f_5 = "amb_sit_wall_m";
	if (unk_0x4B34601C5C56F3EE(11))
	{
		func_152(Var1, iVar13, &iVar18, iVar22);
	}
	if (func_119(Local_226, -1, 0, 0, 0))
	{
		func_116(-1);
	}
	else
	{
		unk_0xAFBDF6A5E54114C1();
	}
	func_115(1, Var1);
	while (iVar0 != 7)
	{
		unk_0x4EDE34FBADD967A6(0);
		iVar23 = 600;
		if (!unk_0xC92F9F18E020B461())
		{
			iVar23 = 0;
			iVar0 = 7;
			func_152(Var1, iVar13, &iVar18, iVar22);
		}
		if (!func_114())
		{
			if (func_113())
			{
				iVar23 = 0;
				iVar0 = 7;
				func_152(Var1, iVar13, &iVar18, iVar22);
			}
		}
		unk_0x6D3F703013ED87D3("RE_GI", 0);
		switch (iVar0)
		{
			case 0:
				if (func_101())
				{
					iVar23 = 0;
					iVar0 = 7;
					func_152(Var1, iVar13, &iVar18, iVar22);
				}
				if (func_115(1, Var1))
				{
					iVar23 = 0;
					iVar0 = 2;
				}
				break;
			
			case 2:
				if (func_90(3))
				{
					func_89(1);
					iVar0 = 4;
				}
				else
				{
					iVar0 = 6;
				}
				iVar23 = 0;
				break;
			
			case 4:
				iVar23 = 0;
				unk_0x2915D98110F23A29(Local_243 - Vector(10f, 30f, 30f), Local_243 + Vector(10f, 30f, 30f), 0, 1, 1, 1);
				unk_0xA8AEDE296853BB64(Local_243 - Vector(50f, 50f, 50f), Local_243 + Vector(100f, 100f, 100f));
				unk_0x84A65E2E9CFB6A77(Local_243 - Vector(15f, 15f, 15f), Local_243 + Vector(15f, 15f, 15f), 0, 1);
				unk_0xCED9E32812D6C7C7(&uVar8, 4);
				unk_0xCED9E32812D6C7C7(&uVar8, 1);
				unk_0xCED9E32812D6C7C7(&uVar8, 5);
				unk_0xD642E010A287ADFD("GangOne", &uLocal_49);
				unk_0x9972EFADA7A2A47D(5, uLocal_49, joaat("player"));
				iVar22 = unk_0xA8D58C3AADA2C41C(12, Var1.f_4, Var14, fVar17, 1, 1);
				unk_0x50274A7EACA3133A(iVar22, 1);
				unk_0xF1A23B343DFEDFD0(Var1.f_4);
				unk_0xFF4BEB6CFF55A013(iVar22, uLocal_49);
				unk_0xA7266A50941DBAEA(iVar22, 0);
				unk_0xE3752B10DC995E95(iVar22, 2, 0, 0, 0);
				unk_0xE3752B10DC995E95(iVar22, 0, 0, 0, 0);
				unk_0xE3752B10DC995E95(iVar22, 3, 2, 0, 0);
				unk_0xE3752B10DC995E95(iVar22, 4, 0, 0, 0);
				unk_0xE3752B10DC995E95(iVar22, 8, 1, 1, 0);
				unk_0xEEBC95A38CBDED42(iVar22, "G_F_Y_Vagos_01_LATINO_MINI_02");
				if (func_88() == 0)
				{
					func_87(&uLocal_55, 0, unk_0xE2D3D51028F0428A(), "MICHAEL", 0, 1);
				}
				else if (func_88() == 1)
				{
					func_87(&uLocal_55, 0, unk_0xE2D3D51028F0428A(), "FRANKLIN", 0, 1);
				}
				else if (func_88() == 2)
				{
					func_87(&uLocal_55, 0, unk_0xE2D3D51028F0428A(), "TREVOR", 0, 1);
				}
				func_87(&uLocal_55, 3, iVar22, "REGIFemale", 0, 1);
				func_87(&uLocal_55, 4, iVar18[2], "REGIMale", 0, 1);
				unk_0x49D97B076E3590AC(iVar22, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 49, 0, 0, 0, 0);
				if (!unk_0x12DD4A0B247D9B4D(uLocal_224))
				{
				}
				iVar24 = 0;
				while (iVar24 <= (iLocal_51 - 1))
				{
					if (!unk_0xE5965CDF24F93A9F(iVar18[iVar24]))
					{
						iVar18[iVar24] = unk_0xA8D58C3AADA2C41C(12, Var1[iVar24], Local_229[iVar24 /*3*/], fLocal_239[iVar24], 1, 1);
						unk_0x50274A7EACA3133A(iVar18[iVar24], 1);
						unk_0xF1A23B343DFEDFD0(Var1[iVar24]);
						unk_0xFF4BEB6CFF55A013(iVar18[iVar24], uLocal_49);
						unk_0xD6A76BAB45A4B460(iVar18[iVar24], 42, 1);
						unk_0x9521FB98DB6DDF50(iVar18[iVar24], func_86(), -1, 1, 1);
						unk_0x71B502FC2E129665(iVar18[iVar24], 2);
						unk_0x3DAB02AAC9E9EC02(iVar18[iVar24], 0);
						unk_0x348A212511C78DBF(iVar18[iVar24], 13);
						unk_0x62BDDA84CCCF90A9(iVar18[iVar24], unk_0x5853B15F78E1A265(200, 500));
					}
					iVar24++;
				}
				unk_0x9521FB98DB6DDF50(iVar18[0], joaat("weapon_sawnoffshotgun"), 40, 1, 1);
				uLocal_52 = unk_0x8F5F4164BF5FB513(1283.205f, -1622.71f, 54.299f, 0f, 0f, 103.68f, 2);
				if (!unk_0xF68107C40359970C(iVar18[0]))
				{
					unk_0x950B26F4C891073F(iVar18[0], uLocal_52, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_b", 4f, -4f, 17, 0, 1148846080, 0);
				}
				if (!unk_0xF68107C40359970C(iVar18[1]))
				{
					unk_0x950B26F4C891073F(iVar18[1], uLocal_52, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_c", 4f, -4f, 17, 0, 1148846080, 0);
				}
				if (!unk_0xF68107C40359970C(iVar18[2]))
				{
					unk_0x950B26F4C891073F(iVar18[2], uLocal_52, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_d", 4f, -4f, 17, 0, 1148846080, 0);
				}
				unk_0xFE1CD80C2F7CBCFB(uLocal_52, 1);
				iLocal_249 = 1;
				iVar0 = 5;
				break;
			
			case 5:
				unk_0xFECBE8ED0E1259A5(unk_0x9E2D6C50374FCFA9());
				unk_0x710E43300E497E2A(unk_0x9E2D6C50374FCFA9());
				if (iVar7 < 3)
				{
					if ((((((((func_79(&iVar18, &uVar11, &uVar10, &uVar9, uVar8, bVar12, 1075838976, 0) || func_78(iVar18[0], 0)) || func_78(iVar18[1], 0)) || func_78(iVar18[2], 0)) || unk_0x9AC74C7EF847A074(Local_229[0 /*3*/], 40f, 1)) || unk_0xA1C6623FC1047DAD(Local_229[0 /*3*/] - Vector(25f, 25f, 25f), Local_229[0 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_smokegrenade"), 1)) || unk_0xA1C6623FC1047DAD(Local_229[0 /*3*/] - Vector(25f, 25f, 25f), Local_229[0 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_grenade"), 1)) || unk_0xA1C6623FC1047DAD(Local_229[0 /*3*/] - Vector(25f, 25f, 25f), Local_229[0 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_grenadelauncher"), 1)) || unk_0xA1C6623FC1047DAD(Local_229[0 /*3*/] - Vector(25f, 25f, 25f), Local_229[0 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_stickybomb"), 1))
					{
						iVar25 = 0;
						while (iVar25 < iVar18)
						{
							if (!unk_0xF68107C40359970C(iVar18[iVar25]))
							{
								func_76();
								if (!unk_0xF68107C40359970C(iVar18[iVar25]))
								{
									unk_0x03A927199A2DFE46(iVar18[iVar25]);
									unk_0xA888F8CC04F25CC8(&iLocal_50);
									unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), 1000, 2048, 2);
									unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 200f, -1, 0, 0);
									unk_0xC963A45B50851768(iLocal_50);
									unk_0x8ACADA903FCAA42F(iVar18[iVar25], iLocal_50);
									unk_0x7461D7C5BA953BC7(&iLocal_50);
									unk_0xABC2CA6F28903308(iVar18[iVar25], 1);
								}
							}
							iVar25++;
						}
						if (!unk_0xF68107C40359970C(iVar22))
						{
							if (!unk_0xF68107C40359970C(iVar22))
							{
								unk_0x03A927199A2DFE46(iVar22);
								unk_0xA888F8CC04F25CC8(&iLocal_50);
								unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), 1000, 2048, 2);
								unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 200f, -1, 0, 0);
								unk_0xC963A45B50851768(iLocal_50);
								unk_0x8ACADA903FCAA42F(iVar22, iLocal_50);
								unk_0x7461D7C5BA953BC7(&iLocal_50);
								unk_0xABC2CA6F28903308(iVar22, 1);
							}
						}
						iLocal_248 = 1;
					}
				}
				else
				{
					iVar26 = 0;
					while (iVar26 < iVar18)
					{
						if (!unk_0xF68107C40359970C(iVar18[iVar26]))
						{
							if (unk_0x0747E45CFF1F74AA(iVar18[iVar26], unk_0xE2D3D51028F0428A(), 1))
							{
								func_76();
								iVar7 = 6;
							}
						}
						else
						{
							func_76();
							iVar7 = 6;
						}
						iVar26++;
					}
				}
				if (iLocal_247)
				{
					iVar0 = 6;
				}
				if (iLocal_54)
				{
					if (!func_75())
					{
						iVar7 = 6;
					}
				}
				if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
				{
					iVar23 = 0;
					iVar0 = 6;
					break;
				}
				if (func_74(Local_226, 150))
				{
					iVar0 = 6;
					break;
				}
				if (iVar0 != 6)
				{
					if (func_1(&iVar7, Var1, iVar22, &iVar18, &iVar23, &iVar13) || iLocal_248)
					{
						iVar0 = 6;
						break;
					}
				}
				break;
			
			case 6:
				iVar23 = 0;
				func_152(Var1, iVar13, &iVar18, iVar22);
				iVar0 = 7;
				break;
				break;
			
			case 7:
				iVar23 = 0;
				break;
		}
		if (iVar0 != 7)
		{
		}
	}
	func_152(Var1, iVar13, &iVar18, iVar22);
}

int func_1(int iParam0, struct<6> Param1, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	if (*iParam0 >= 3)
	{
		if (!unk_0xCE2C78E9FC0B01E3(uLocal_53))
		{
			if ((!unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_257, 9f, 9f, 9f, 0, 1, 0) && !unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), 1276.21f, -1613.05f, 53f, 9f, 9f, 9f, 0, 1, 0)) || unk_0x81BBCAF9FE3B469D(unk_0xE2D3D51028F0428A()))
			{
				*iParam0 = 6;
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (func_60(iParam7, iParam8))
			{
				if (bLocal_256)
				{
					*iParam0 = 2;
				}
				if (!unk_0xF68107C40359970C(iParam7))
				{
					unk_0x3E3D339BAD67F6F2(iParam7, 247, 1);
					if (!func_78(iParam7, 0))
					{
						if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iParam7, 15f, 15f, 15f, 0, 1, 0))
						{
							if ((unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 6) && unk_0x7E006F2E24F03BB4(iParam7, unk_0xE2D3D51028F0428A())) && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
							{
								if ((unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 6) || unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iParam7)) || unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iParam7))
								{
									unk_0xCA2872F050840231(iParam7);
									unk_0xF30F15F203736DE4(iParam7, unk_0xE2D3D51028F0428A(), 5000, 1024, 2);
									func_76();
									unk_0x4EDE34FBADD967A6(1000);
									func_45(&uLocal_55, "REGIAU", "REGIN_ARM", 4, 0, 0, 0);
									iVar0 = 0;
									while (iVar0 < *iParam8)
									{
										if (!unk_0xF68107C40359970C((*iParam8)[iVar0]))
										{
											unk_0xCA2872F050840231((*iParam8)[iVar0]);
											unk_0x7734082B0EDB0BE0((*iParam8)[iVar0], unk_0xE2D3D51028F0428A(), 200f, -1, 0, 0);
											unk_0xABC2CA6F28903308((*iParam8)[iVar0], 1);
										}
										iVar0++;
									}
									if (!unk_0xF68107C40359970C(iParam7))
									{
										unk_0x7734082B0EDB0BE0(iParam7, unk_0xE2D3D51028F0428A(), 200f, -1, 0, 0);
										unk_0xABC2CA6F28903308(iParam7, 1);
									}
									iLocal_248 = 1;
								}
							}
						}
					}
					else
					{
						func_43();
						if (!unk_0xF68107C40359970C(iParam7))
						{
							unk_0x03A927199A2DFE46(iParam7);
							unk_0x7734082B0EDB0BE0(iParam7, unk_0xE2D3D51028F0428A(), 200f, -1, 0, 0);
							unk_0xABC2CA6F28903308(iParam7, 1);
						}
						iLocal_248 = 1;
					}
				}
				if ((unk_0xF68107C40359970C((*iParam8)[0]) || unk_0xF68107C40359970C((*iParam8)[1])) || unk_0xF68107C40359970C((*iParam8)[2]))
				{
					func_42(iParam8, iParam7);
				}
				if (unk_0xF68107C40359970C(iParam7))
				{
					if (iLocal_255 > 2)
					{
						func_42(iParam8, iParam7);
					}
					else
					{
						*iParam0 = 9;
					}
				}
				else if (unk_0x32DCDA1B2F8A0694(iParam7))
				{
					if (unk_0xFCF559C8631ABED7(iParam7, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", 3))
					{
						unk_0x227B2DD85A708E68(iParam7, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", -1056964608);
					}
				}
			}
			else
			{
				*iParam0 = 9;
			}
			break;
		
		case 2:
			unk_0x116FAA21FEE61C2C(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_243, 0, 0, 255, 255);
			unk_0x19C58BA8A663B64B(unk_0xE2D3D51028F0428A(), 1000);
			Local_257 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			if (!unk_0xF68107C40359970C((*iParam8)[1]))
			{
				if (!unk_0x12DD4A0B247D9B4D(uLocal_220[1]))
				{
				}
				unk_0x1CF3F44FC2EB9F99("RE28_OS");
				uLocal_53 = unk_0x8F5F4164BF5FB513(1283.205f, -1622.71f, 54.299f, 0f, 0f, 103.68f, 2);
				if (!unk_0xF68107C40359970C((*iParam8)[0]))
				{
					unk_0x950B26F4C891073F((*iParam8)[0], uLocal_53, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_b", 4f, -4f, 17, 0, 1148846080, 0);
				}
				if (!unk_0xF68107C40359970C((*iParam8)[1]))
				{
					unk_0x950B26F4C891073F((*iParam8)[1], uLocal_53, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_c", 4f, -4f, 16, 0, 1148846080, 0);
				}
				if (!unk_0xF68107C40359970C((*iParam8)[2]))
				{
					unk_0x950B26F4C891073F((*iParam8)[2], uLocal_53, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_d", 4f, -4f, 17, 0, 1148846080, 0);
				}
				*iParam0 = 3;
			}
			break;
		
		case 3:
			*iParam9 = 0;
			if (unk_0xCE2C78E9FC0B01E3(uLocal_53))
			{
				if (unk_0x54DE1614490C2A83(uLocal_53) > 0.3f)
				{
					if (!unk_0xF68107C40359970C((*iParam8)[0]))
					{
						unk_0x3E3D339BAD67F6F2((*iParam8)[0], 156, 1);
						unk_0xA888F8CC04F25CC8(&iLocal_50);
						unk_0x98DB2ABD53B8D70B(0, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) - Vector(0f, 0f, 1f), unk_0xE2D3D51028F0428A(), 2f, 0, 3.5f, 5f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), 25000, 0);
						unk_0xC963A45B50851768(iLocal_50);
						unk_0x8ACADA903FCAA42F((*iParam8)[0], iLocal_50);
						unk_0x7461D7C5BA953BC7(&iLocal_50);
						iLocal_50 = 0;
					}
				}
				if (unk_0x54DE1614490C2A83(uLocal_53) > 0.35f)
				{
					if (!unk_0xF68107C40359970C((*iParam8)[1]))
					{
						unk_0x3E3D339BAD67F6F2((*iParam8)[1], 156, 1);
						unk_0xA888F8CC04F25CC8(&iLocal_50);
						unk_0x0B47872E9D74882C(0, unk_0xE2D3D51028F0428A(), unk_0xE2D3D51028F0428A(), 2f, 0, 5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), 25000, 0);
						unk_0xC963A45B50851768(iLocal_50);
						unk_0x8ACADA903FCAA42F((*iParam8)[1], iLocal_50);
						unk_0x7461D7C5BA953BC7(&iLocal_50);
						iLocal_50 = 0;
					}
				}
				if (unk_0x54DE1614490C2A83(uLocal_53) > 0.275f)
				{
					if (!unk_0xF68107C40359970C((*iParam8)[2]))
					{
						unk_0x3E3D339BAD67F6F2((*iParam8)[2], 156, 1);
						unk_0xA888F8CC04F25CC8(&iLocal_50);
						unk_0x0B47872E9D74882C(0, unk_0xE2D3D51028F0428A(), unk_0xE2D3D51028F0428A(), 2f, 0, 3.5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), 25000, 0);
						unk_0xC963A45B50851768(iLocal_50);
						unk_0x8ACADA903FCAA42F((*iParam8)[2], iLocal_50);
						unk_0x7461D7C5BA953BC7(&iLocal_50);
						iLocal_50 = 0;
					}
				}
			}
			if (!unk_0xF68107C40359970C((*iParam8)[2]))
			{
				if (unk_0x77A43AFA9AAEC041((*iParam8)[2], unk_0xE2D3D51028F0428A(), 4f, 4f, 2f, 0, 1, 0))
				{
					func_41(uLocal_224);
					func_41(uLocal_225);
					func_37(iParam8);
					if (!unk_0xF68107C40359970C((*iParam8)[0]))
					{
						unk_0xA888F8CC04F25CC8(&iLocal_50);
						unk_0x98DB2ABD53B8D70B(0, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) - Vector(0f, 0f, 1f), unk_0xE2D3D51028F0428A(), 2f, 0, 3.5f, 5f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), 25000, 0);
						unk_0xC963A45B50851768(iLocal_50);
						unk_0x8ACADA903FCAA42F((*iParam8)[0], iLocal_50);
						unk_0x7461D7C5BA953BC7(&iLocal_50);
						iLocal_50 = 0;
					}
					if (!unk_0xF68107C40359970C((*iParam8)[1]))
					{
						unk_0xA888F8CC04F25CC8(&iLocal_50);
						unk_0x0B47872E9D74882C(0, unk_0xE2D3D51028F0428A(), unk_0xE2D3D51028F0428A(), 2f, 0, 5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), 25000, 0);
						unk_0xC963A45B50851768(iLocal_50);
						unk_0x8ACADA903FCAA42F((*iParam8)[1], iLocal_50);
						unk_0x7461D7C5BA953BC7(&iLocal_50);
						iLocal_50 = 0;
					}
					if (!unk_0xF68107C40359970C((*iParam8)[2]))
					{
						unk_0xA888F8CC04F25CC8(&iLocal_50);
						unk_0x0B47872E9D74882C(0, unk_0xE2D3D51028F0428A(), unk_0xE2D3D51028F0428A(), 2f, 0, 3.5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), 25000, 0);
						unk_0xC963A45B50851768(iLocal_50);
						unk_0x8ACADA903FCAA42F((*iParam8)[2], iLocal_50);
						unk_0x7461D7C5BA953BC7(&iLocal_50);
						iLocal_50 = 0;
					}
					iLocal_251 = unk_0x320D1840B6DAA1CC();
					*iParam0 = 4;
				}
			}
			break;
		
		case 4:
			if (func_35(Param1, (*iParam8)[2], iParam8))
			{
				func_41(uLocal_220[2]);
			}
			else if (unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 6))
			{
				*iParam0 = 6;
			}
			break;
		
		case 6:
			if (!iLocal_250)
			{
				func_76();
				unk_0x4EDE34FBADD967A6(0);
				func_45(&uLocal_55, "REGIAU", "REGIN_WARN2", 4, 0, 0, 0);
				unk_0x8576657A629C4B0A(0.5f);
				func_37(iParam8);
				func_42(iParam8, iParam7);
				func_41(uLocal_225);
				func_41(uLocal_224);
				iLocal_250 = 1;
			}
			func_34(iParam8);
			func_33(iParam8);
			if (func_32(iParam8))
			{
				*iParam10 = 1;
				if (!unk_0xF68107C40359970C(iParam7))
				{
					if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iParam7, 8f, 8f, 8f, 0, 1, 0))
					{
						func_45(&uLocal_55, "REGIAU", "REGIN_SORRY", 4, 0, 0, 0);
					}
				}
				if (!unk_0x12DD4A0B247D9B4D(uLocal_225))
				{
				}
				while (func_75())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				while (!func_31())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				func_5(-1, 0);
				func_2();
				return 1;
				*iParam0 = 9;
			}
			break;
		
		case 8:
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_2()
{
	func_3();
}

int func_3()
{
	if (func_4(0))
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

int func_4(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_5(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_28(iParam0))
	{
		func_27(iParam0, iParam1);
		if (!func_26(51))
		{
			func_16("RE_REWARD", 1, 0, 4000, 10000, func_19(), 0, 138, 0);
			func_15(51);
		}
		if (func_14(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_13(iParam0, iParam1) != 322)
		{
			func_7(func_13(iParam0, iParam1), Local_46.f_0, Local_46.f_1);
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

void func_6(int iParam0)
{
	Global_113372 = iParam0;
}

void func_7(int iParam0, var uParam1, var uParam2)
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
		func_11((891 + iParam0), 1, -1);
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
		func_8();
	}
}

void func_8()
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
		func_10(13, unk_0xF34EE736CF047844(Global_113386.f_10194.f_3853));
	}
	if (!unk_0x665245305CD9E866())
	{
		if (!Global_78319)
		{
			if (func_9() == 2 == 0 && !unk_0x9315DBF7D972F07A())
			{
				if (unk_0x47C86377AA337CBE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_3();
				}
			}
		}
	}
}

int func_9()
{
	return Global_31959;
}

int func_10(int iParam0, int iParam1)
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

void func_11(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_12();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, iParam2);
}

int func_12()
{
	return Global_1574918;
}

int func_13(int iParam0, int iParam1)
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

int func_14(int iParam0)
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

void func_15(int iParam0)
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

void func_16(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_17(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_17(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_18();
	}
}

void func_18()
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

int func_19()
{
	func_20();
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

void func_20()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_24(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_23(unk_0xE2D3D51028F0428A());
			if (func_22(iVar0) && (!func_21(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_22(Global_113386.f_2363.f_539.f_4321))
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

bool func_21(int iParam0)
{
	return Global_43052 == iParam0;
}

bool func_22(int iParam0)
{
	return iParam0 < 3;
}

int func_23(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_24(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_24(int iParam0)
{
	if (func_22(iParam0))
	{
		return func_25(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_25(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_26(int iParam0)
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

void func_27(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_113386.f_24995.f_8[iParam0]), iParam1);
}

int func_28(int iParam0)
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

int func_29()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x05CBA41180F5D521(), 64);
	uVar16 = func_30(Var0);
	return uVar16;
}

int func_30(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_31()
{
	return 1;
}

int func_32(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0xE5965CDF24F93A9F((*uParam0)[iVar0]))
		{
			if (!unk_0xF68107C40359970C((*uParam0)[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_33(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0xF68107C40359970C((*uParam0)[iVar0]))
		{
			func_41(uLocal_220[iVar0]);
		}
		iVar0++;
	}
}

void func_34(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iLocal_254 == 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_51 - 1))
		{
			if (!unk_0xF68107C40359970C((*uParam0)[iVar2]))
			{
				iVar0++;
				iVar1 = iVar2;
			}
			iVar2++;
		}
		if (iVar0 == 1)
		{
			if (!unk_0xF68107C40359970C((*uParam0)[iVar1]))
			{
				unk_0xBC12D08EE7559CCD((*uParam0)[iVar1], 0, 1);
				unk_0x3DAB02AAC9E9EC02((*uParam0)[iVar1], 0);
				iLocal_254 = 1;
			}
		}
	}
}

int func_35(struct<6> Param0, int iParam6, var uParam7)
{
	switch (iLocal_252)
	{
		case 0:
			if (func_36(iLocal_251, 0))
			{
				if (!func_75())
				{
					if (func_88() == 0)
					{
						func_45(&uLocal_55, "REGIAU", "REGIN_MONEYM", 4, 0, 0, 0);
						iLocal_252 = 1;
					}
					else if (func_88() == 1)
					{
						func_45(&uLocal_55, "REGIAU", "REGIN_MONEYF", 4, 0, 0, 0);
						iLocal_252 = 1;
					}
					else if (func_88() == 2)
					{
						func_45(&uLocal_55, "REGIAU", "REGIN_MONEYT", 4, 0, 0, 0);
						iLocal_252 = 1;
					}
				}
				iLocal_50 = 0;
			}
			break;
		
		case 1:
			if (!unk_0xF68107C40359970C(iParam6))
			{
				if (unk_0x174CED88B97C78D9(iParam6, joaat("script_task_perform_sequence")) == 7 || unk_0x77A43AFA9AAEC041(iParam6, unk_0xE2D3D51028F0428A(), 8f, 8f, 8f, 0, 1, 0))
				{
					if (!func_75())
					{
						func_45(&uLocal_55, "REGIAU", "REGIN_KILL", 4, 0, 0, 0);
						unk_0xC1B1E9A034A63A62(0);
						iLocal_54 = 1;
						iLocal_252 = 4;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xF68107C40359970C((*uParam7)[2]))
			{
				if (!unk_0xF68107C40359970C((*uParam7)[0]))
				{
					unk_0xA888F8CC04F25CC8(&iLocal_50);
					unk_0x83F5BCFFFBA26699(0, 700);
					unk_0x7D1424753688EE7A(0, Local_229[0 /*3*/], 1f, -1, 0.25f, 0, 40000f);
					unk_0x30E00B59448AB97E(0, fLocal_239[0], 0);
					unk_0x246C656F8E525DC7(0, Param0.f_5, "sit_down_idle_01", Local_229[0 /*3*/], 0f, 0f, fLocal_239[0], 1000f, -4f, -1, 1, 0, 2, 0);
					unk_0xC963A45B50851768(iLocal_50);
					unk_0x8ACADA903FCAA42F((*uParam7)[0], iLocal_50);
					unk_0x7461D7C5BA953BC7(&iLocal_50);
					iLocal_50 = 0;
				}
				if (!unk_0xF68107C40359970C((*uParam7)[1]))
				{
					unk_0xA888F8CC04F25CC8(&iLocal_50);
					unk_0x83F5BCFFFBA26699(0, 200);
					unk_0x7D1424753688EE7A(0, Local_229[1 /*3*/], 1f, -1, 0.25f, 0, 40000f);
					unk_0xD86A0BC9CC0A625A(0, 1193033728, 0);
					unk_0xC963A45B50851768(iLocal_50);
					unk_0x8ACADA903FCAA42F((*uParam7)[1], iLocal_50);
					unk_0x7461D7C5BA953BC7(&iLocal_50);
					iLocal_50 = 0;
				}
				if (!unk_0xF68107C40359970C((*uParam7)[2]))
				{
					unk_0xA888F8CC04F25CC8(&iLocal_50);
					unk_0x83F5BCFFFBA26699(0, 1000);
					unk_0x6FCE069E4940878C(0, (*uParam7)[0], 0f, -0.5f, 0f, 1f, 10000, 1036831949, 1);
					unk_0xD86A0BC9CC0A625A(0, 1193033728, 0);
					unk_0xC963A45B50851768(iLocal_50);
					unk_0x8ACADA903FCAA42F((*uParam7)[2], iLocal_50);
					unk_0x7461D7C5BA953BC7(&iLocal_50);
					iLocal_50 = 0;
				}
			}
			iLocal_252 = 3;
			break;
		
		case 3:
			if (!func_75())
			{
				if (func_88() == 0)
				{
					func_45(&uLocal_55, "REGIAU", "REGIN_REALM", 4, 0, 0, 0);
				}
				else if (func_88() == 1)
				{
					func_45(&uLocal_55, "REGIAU", "REGIN_REALF", 4, 0, 0, 0);
				}
				else if (func_88() == 2)
				{
					func_45(&uLocal_55, "REGIAU", "REGIN_REALT", 4, 0, 0, 0);
				}
				iLocal_252 = 4;
			}
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

int func_36(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x320D1840B6DAA1CC();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_37(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!unk_0x12DD4A0B247D9B4D(uLocal_220[iVar0]))
		{
			if (!unk_0xF68107C40359970C((*uParam0)[iVar0]))
			{
				uLocal_220[iVar0] = func_38((*uParam0)[iVar0], 1, 145);
				unk_0x06AF73D7E3DF7782((*uParam0)[iVar0], 1, 0);
			}
		}
		iVar0++;
	}
}

var func_38(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_39(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x12DD4A0B247D9B4D(uVar0)) && unk_0xE73671E3D37CF79E(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		unk_0xAF62582F3EA39095(uVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_39(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xE5965CDF24F93A9F(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xEFD6451BF0F3352F(uParam0);
	if (unk_0x04D9F44466CBF3CA(uParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_40(unk_0x9315DBF7D972F07A(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD809204F14EF9B68(uVar0, bParam1);
		}
		else
		{
			unk_0xA582EE8380437B1B(uVar0, 2);
		}
	}
	else if (unk_0x9044EDB8A7BF67B4(uParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_40(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
		unk_0xD809204F14EF9B68(uVar0, bParam1);
	}
	else if (unk_0x0086095F1731DE17(uParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_40(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_40(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_41(var uParam0)
{
	if (unk_0x12DD4A0B247D9B4D(uParam0))
	{
		unk_0xFFD8EB5462B07B59(&uParam0);
	}
}

void func_42(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!unk_0xF68107C40359970C((*uParam0)[iVar0]))
		{
			unk_0xC1A74225341AA9FB((*uParam0)[iVar0], unk_0xE2D3D51028F0428A(), 0, 16);
			unk_0xBC12D08EE7559CCD((*uParam0)[iVar0], 0, 1);
			unk_0xABC2CA6F28903308((*uParam0)[iVar0], 1);
		}
		iVar0++;
	}
	if (!unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
		unk_0xCA2872F050840231(iParam1);
		unk_0x402A537158A551BD(iParam1, -1);
		unk_0xABC2CA6F28903308(iParam1, 1);
	}
}

void func_43()
{
	Global_20471 = 0;
	func_44();
}

void func_44()
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

bool func_45(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_59(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_46(sParam2, iParam3, 0);
}

int func_46(char* sParam0, int iParam1, bool bParam2)
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
					func_44();
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
		if (func_58(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_57();
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
				func_56();
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
				if (func_55())
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
			if (func_54())
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
			func_53();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_52();
		func_47();
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
		func_44();
	}
	return 0;
}

void func_47()
{
	if (!func_48())
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

int func_48()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_51())
	{
		return 0;
	}
	if (func_49(unk_0x9E2D6C50374FCFA9()))
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

bool func_49(int iParam0)
{
	return func_50(iParam0, 20);
}

var func_50(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_51()
{
	return -1;
}

void func_52()
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

void func_53()
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

int func_54()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_55()
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

void func_56()
{
	if (func_21(14))
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
		Global_20266 = func_88();
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

void func_57()
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

bool func_58(int iParam0, int iParam1)
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

void func_59(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_60(int iParam0, var uParam1)
{
	switch (iLocal_255)
	{
		case 0:
			if (!unk_0xF68107C40359970C(iParam0))
			{
				if ((unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1272.878f, -1532.84f, 36.4104f, 1339.482f, -1623.636f, 71.4792f, 105.1875f, 0, 1, 0) && !unk_0x4D21C9FB671ED18F(iParam0)) || unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iParam0, 15f, 15f, 15f, 0, 1, 0))
				{
					if (!func_114())
					{
						func_64(1);
					}
					if (unk_0x12DD4A0B247D9B4D(uLocal_224))
					{
						func_41(uLocal_224);
					}
					if (!unk_0x12DD4A0B247D9B4D(uLocal_225))
					{
						uLocal_225 = func_38(iParam0, 0, 145);
						unk_0x3430966AC4550BB9(uLocal_225, 0);
					}
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						if (!unk_0x79135882170E3D22(unk_0xE2D3D51028F0428A()))
						{
							if (unk_0x207D53F9E0190691(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)) < 5f)
							{
								if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iParam0, 10f, 10f, 10f, 0, 1, 0))
								{
									unk_0xCA2872F050840231(iParam0);
									unk_0xA888F8CC04F25CC8(&iLocal_50);
									unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), -1);
									unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), 20000, 1024, 2);
									unk_0xC963A45B50851768(iLocal_50);
									unk_0x8ACADA903FCAA42F(iParam0, iLocal_50);
									unk_0x7461D7C5BA953BC7(&iLocal_50);
									if (unk_0x12DD4A0B247D9B4D(uLocal_225))
									{
										unk_0x3430966AC4550BB9(uLocal_225, 1);
									}
									unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
									if (unk_0x2E7F5417D4F4DD69(iParam0, unk_0xE2D3D51028F0428A(), 45f))
									{
										func_43();
										unk_0x4EDE34FBADD967A6(0);
										func_45(&uLocal_55, "REGIAU", "REGIN_LR1F", 4, 0, 0, 0);
										iLocal_255 = 1;
									}
								}
							}
							else if (iLocal_246 == 0)
							{
								func_45(&uLocal_55, "REGIAU", "REGIN_CAR", 4, 0, 0, 0);
								if (!unk_0xF68107C40359970C(iParam0))
								{
									unk_0xA888F8CC04F25CC8(&iLocal_50);
									unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), 20000, 1024, 2);
									unk_0x49D97B076E3590AC(0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
									unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), -1);
									unk_0xC963A45B50851768(iLocal_50);
									unk_0x8ACADA903FCAA42F(iParam0, iLocal_50);
									unk_0x7461D7C5BA953BC7(&iLocal_50);
								}
								iLocal_246 = 1;
							}
						}
						else
						{
							func_43();
							unk_0x4EDE34FBADD967A6(0);
							func_45(&uLocal_55, "REGIAU", "REGIN_POLICE", 4, 0, 0, 0);
							if (!unk_0xF68107C40359970C(iParam0))
							{
								unk_0x03A927199A2DFE46(iParam0);
								unk_0x7734082B0EDB0BE0(iParam0, unk_0xE2D3D51028F0428A(), 200f, -1, 0, 0);
								unk_0xABC2CA6F28903308(iParam0, 1);
								iLocal_247 = 1;
							}
						}
					}
					else if (!unk_0xF68107C40359970C(iParam0))
					{
						if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iParam0, 8f, 8f, 8f, 0, 1, 0))
						{
							unk_0xA888F8CC04F25CC8(&iLocal_50);
							unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), -1);
							unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), 20000, 1024, 2);
							unk_0xC963A45B50851768(iLocal_50);
							unk_0x8ACADA903FCAA42F(iParam0, iLocal_50);
							unk_0x7461D7C5BA953BC7(&iLocal_50);
							if (unk_0x2E7F5417D4F4DD69(iParam0, unk_0xE2D3D51028F0428A(), 45f))
							{
								func_43();
								unk_0x4EDE34FBADD967A6(0);
								func_45(&uLocal_55, "REGIAU", "REGIN_LR1F", 4, 0, 0, 0);
								iLocal_255 = 1;
							}
						}
					}
				}
			}
			if (!unk_0xF68107C40359970C((*uParam1)[2]))
			{
				if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1273.098f, -1604.172f, 53.1535f, 1276.568f, -1615.127f, 56.7879f, 10f, 0, 1, 0) && !func_63())
				{
					iLocal_255 = 3;
				}
				else if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1298.546f, -1617.742f, 53.2254f, 1262.868f, -1629.36f, 64.2894f, 30.4375f, 0, 1, 0))
				{
					func_62(iParam0, uParam1);
				}
			}
			break;
		
		case 1:
			if (!unk_0xF68107C40359970C((*uParam1)[2]))
			{
				if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1273.098f, -1604.172f, 53.1535f, 1276.568f, -1615.127f, 56.7879f, 10f, 0, 1, 0) && !func_63())
				{
					iLocal_255 = 3;
				}
				else if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1298.546f, -1617.742f, 53.2254f, 1262.868f, -1629.36f, 64.2894f, 30.4375f, 0, 1, 0))
				{
					func_62(iParam0, uParam1);
				}
			}
			if (!unk_0xF68107C40359970C(iParam0) && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				unk_0x02B222EADC9DC566(Local_243, 13f, 0, 0, 0, 0, 0, 0, 0);
				unk_0xCA2872F050840231(iParam0);
				if (!unk_0xF68107C40359970C(iParam0))
				{
					unk_0xA888F8CC04F25CC8(&iLocal_50);
					unk_0x7D1424753688EE7A(0, Local_243, 2f, 20000, 0.25f, 0, 32.2195f);
					unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), -1, 1024, 2);
					unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), -1);
					unk_0xC963A45B50851768(iLocal_50);
					unk_0x8ACADA903FCAA42F(iParam0, iLocal_50);
					unk_0x7461D7C5BA953BC7(&iLocal_50);
					iLocal_50 = 0;
					if ((unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 6) && unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iParam0, 6f, 6f, 6f, 0, 1, 0)) && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
					}
				}
				iLocal_255 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xF68107C40359970C(iParam0) && !func_75())
			{
				if (func_45(&uLocal_55, "REGIAU", "REGIN_LR1G", 4, 0, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_255 = 3;
				}
			}
			break;
		
		case 3:
			if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1273.098f, -1604.172f, 53.1535f, 1276.568f, -1615.127f, 56.7879f, 10f, 0, 1, 0) && !func_63())
			{
				func_61(iParam0);
				iLocal_255 = 4;
			}
			else if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1298.546f, -1617.742f, 53.2254f, 1262.868f, -1629.36f, 64.2894f, 30.4375f, 0, 1, 0))
			{
				func_62(iParam0, uParam1);
			}
			else if (!unk_0xF68107C40359970C(iParam0))
			{
				if (unk_0x83666F9FB8FEBD4B() > 8000 && unk_0x8F41785F110B0DA0(iParam0, Local_243, 3f, 3f, 3f, 0, 1, 0))
				{
					if (unk_0x2E7F5417D4F4DD69(iParam0, unk_0xE2D3D51028F0428A(), 60f))
					{
						if (func_164())
						{
							unk_0x49D97B076E3590AC(iParam0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_a", 2f, -2f, -1, 48, 0, 0, 0, 0);
						}
						else
						{
							unk_0x49D97B076E3590AC(iParam0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 0, 0, 0, 0, 0);
						}
						func_45(&uLocal_55, "REGIAU", "REGIN_HERE", 4, 0, 0, 0);
						unk_0xC1B1E9A034A63A62(0);
					}
				}
				if ((unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 6) && unk_0x7E006F2E24F03BB4(iParam0, unk_0xE2D3D51028F0428A())) && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					if (unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iParam0) || unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iParam0))
					{
						func_62(iParam0, uParam1);
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0xF68107C40359970C(iParam0))
			{
				unk_0xA888F8CC04F25CC8(&iLocal_50);
				unk_0x83F5BCFFFBA26699(0, 500);
				unk_0x7D1424753688EE7A(0, Local_243, 2f, 20000, 0.25f, 0, 40000f);
				unk_0xC963A45B50851768(iLocal_50);
				unk_0x7461D7C5BA953BC7(&iLocal_50);
				iLocal_50 = 0;
			}
			func_76();
			unk_0x4EDE34FBADD967A6(0);
			if (!func_75())
			{
				func_45(&uLocal_55, "REGIAU", "REGIN_THRT", 4, 0, 0, 0);
				iLocal_255 = 5;
			}
			break;
		
		case 5:
			func_37(uParam1);
			func_41(uLocal_225);
			bLocal_256 = true;
			return 1;
			break;
	}
	return 1;
}

void func_61(int iParam0)
{
	if (!unk_0xF68107C40359970C(iParam0))
	{
		unk_0x03A927199A2DFE46(iParam0);
		unk_0xA888F8CC04F25CC8(&iLocal_50);
		unk_0x7D1424753688EE7A(0, 1286.037f, -1623.207f, 53.2297f, 2f, -1, 0.25f, 0, 40000f);
		unk_0x402A537158A551BD(0, -1);
		unk_0xC963A45B50851768(iLocal_50);
		unk_0x8ACADA903FCAA42F(iParam0, iLocal_50);
		unk_0x7461D7C5BA953BC7(&iLocal_50);
		iLocal_50 = 0;
		unk_0xA7266A50941DBAEA(iParam0, 1);
		func_41(uLocal_225);
	}
}

void func_62(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!unk_0xF68107C40359970C((*uParam1)[iVar0]) && !unk_0xF68107C40359970C(iParam0))
		{
			if ((unk_0x7E006F2E24F03BB4((*uParam1)[iVar0], unk_0xE2D3D51028F0428A()) || unk_0x42A51C8E69566474(unk_0x9E2D6C50374FCFA9(), (*uParam1)[iVar0])) || unk_0x7E006F2E24F03BB4(iParam0, unk_0xE2D3D51028F0428A()))
			{
				func_76();
				if (!unk_0xF68107C40359970C((*uParam1)[iVar0]))
				{
					unk_0x03A927199A2DFE46((*uParam1)[iVar0]);
					unk_0xA888F8CC04F25CC8(&iLocal_50);
					unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), 1000, 2048, 2);
					unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 200f, -1, 0, 0);
					unk_0xC963A45B50851768(iLocal_50);
					unk_0x8ACADA903FCAA42F((*uParam1)[iVar0], iLocal_50);
					unk_0x7461D7C5BA953BC7(&iLocal_50);
					unk_0xABC2CA6F28903308((*uParam1)[iVar0], 1);
				}
				if (!unk_0xF68107C40359970C(iParam0))
				{
					unk_0x03A927199A2DFE46(iParam0);
					unk_0xA888F8CC04F25CC8(&iLocal_50);
					unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), 1000, 2048, 2);
					unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 200f, -1, 0, 0);
					unk_0xC963A45B50851768(iLocal_50);
					unk_0x8ACADA903FCAA42F(iParam0, iLocal_50);
					unk_0x7461D7C5BA953BC7(&iLocal_50);
					unk_0xABC2CA6F28903308(iParam0, 1);
				}
				iLocal_248 = 1;
			}
		}
		else
		{
			func_76();
			if (!unk_0xF68107C40359970C((*uParam1)[iVar0]))
			{
				unk_0x03A927199A2DFE46((*uParam1)[iVar0]);
				unk_0xA888F8CC04F25CC8(&iLocal_50);
				unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), 1000, 2048, 2);
				unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 200f, -1, 0, 0);
				unk_0xC963A45B50851768(iLocal_50);
				unk_0x8ACADA903FCAA42F((*uParam1)[iVar0], iLocal_50);
				unk_0x7461D7C5BA953BC7(&iLocal_50);
				unk_0xABC2CA6F28903308((*uParam1)[iVar0], 1);
			}
			if (!unk_0xF68107C40359970C(iParam0))
			{
				unk_0x03A927199A2DFE46(iParam0);
				unk_0xA888F8CC04F25CC8(&iLocal_50);
				unk_0xF30F15F203736DE4(0, unk_0xE2D3D51028F0428A(), 1000, 2048, 2);
				unk_0x7734082B0EDB0BE0(0, unk_0xE2D3D51028F0428A(), 200f, -1, 0, 0);
				unk_0xC963A45B50851768(iLocal_50);
				unk_0x8ACADA903FCAA42F(iParam0, iLocal_50);
				unk_0x7461D7C5BA953BC7(&iLocal_50);
				unk_0xABC2CA6F28903308(iParam0, 1);
			}
			iLocal_248 = 1;
		}
		iVar0++;
	}
}

int func_63()
{
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (unk_0x55A0C756C4A8220C(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 0))
		{
			if (unk_0xF30A227F7990AE00(unk_0xE2D3D51028F0428A(), joaat("rhino")))
			{
				return 1;
			}
		}
	}
	if (unk_0x17FE501894ED2713(unk_0xE2D3D51028F0428A()) || unk_0x79135882170E3D22(unk_0xE2D3D51028F0428A()))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0)
{
	if (func_68())
	{
		Global_113376 = 1;
		Global_113373 = unk_0x320D1840B6DAA1CC();
		if (func_14(Global_113375))
		{
			func_65(0);
		}
		unk_0xEFE837B21D5CF02C(1, "RE_TITLE");
		if (iParam0 && func_14(Global_113375))
		{
			unk_0xC70E97154CC5B243();
		}
		return 1;
	}
	return 0;
}

void func_65(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!unk_0x2D3AAABB780ED9B6())
				{
					func_66(func_67(iParam0), -1);
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
					func_66(func_67(iParam0), -1);
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
					func_66(func_67(iParam0), -1);
					Global_113386.f_24995.f_4++;
					unk_0xCED9E32812D6C7C7(&Global_113382, 2);
				}
			}
			break;
	}
}

void func_66(var uParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(uParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

char* func_67(int iParam0)
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

int func_68()
{
	switch (func_69(&Global_32019, 0, 5, 0, unk_0x69CE66B03B2184EB()))
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

int func_69(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_73(0))
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
		if (!func_71(iParam2))
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
			func_70(uParam0, iParam4);
		}
	}
	return 2;
}

void func_70(var uParam0, int iParam1)
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

bool func_71(int iParam0)
{
	return func_72(iParam0, Global_43052);
}

int func_72(int iParam0, int iParam1)
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

int func_73(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_71(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_74(struct<3> Param0, int iParam3)
{
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Param0) > IntToFloat(iParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_75()
{
	if (Global_21605 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

void func_76()
{
	Global_20471 = 0;
	func_77();
}

void func_77()
{
	unk_0x82B0661A78CC39CF();
	Global_22616 = 0;
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21605 = 6;
	}
}

int func_78(int iParam0, int iParam1)
{
	if (unk_0x3C7ED37A9FE7C585(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0x0747E45CFF1F74AA(iParam0, unk_0xE2D3D51028F0428A(), 1))
		{
			return 1;
		}
	}
	else if (unk_0x0747E45CFF1F74AA(iParam0, unk_0xE2D3D51028F0428A(), 1))
	{
		if ((unk_0x3C739E920862F79E(iParam0) - unk_0x0CF63873D754B965(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_79(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	
	fParam6 = fParam6;
	if (!bParam5)
	{
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if (func_80((*uParam0)[iVar0], uParam2, uParam3, uParam4, bParam5, fParam6, iParam7))
			{
				*uParam1 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_80(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	bVar2 = false;
	if (!unk_0x55B23FE400FCEA6B(uParam0, 0) && !bParam4)
	{
		if (unk_0x3C7ED37A9FE7C585(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0) && !bParam4)
		{
			Var3 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			Var6 = { unk_0x6B62510F212526DC(iParam0, 1) };
			fVar9 = unk_0x2A488C176D52CCA5(Var3, Var6);
			if (!BitTest(uParam3, 3))
			{
				if (func_78(iParam0, iParam6))
				{
					func_85("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_85("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_84(iParam0);
					return 1;
				}
			}
			if (!BitTest(uParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0x9AC74C7EF847A074(Var6, fParam5, 1))
				{
					func_85("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_85("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_84(iParam0);
					return 1;
				}
				if (unk_0x863026E0C5C2E52B(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_85("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_85("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_84(iParam0);
					return 1;
				}
			}
			if (!BitTest(uParam3, 2))
			{
				fVar0 = unk_0xAEC78423999EFE49(unk_0xE2D3D51028F0428A());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 6))
				{
					if (unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iParam0) || unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (unk_0xD936DBC1D824A1BE(iParam0, unk_0xE2D3D51028F0428A(), 17))
							{
								func_85("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_85("	aggro Ped knows player is pointing gun\n");
								func_81("		lockOnTimer = ", *uParam2);
								func_85("\n");
								func_81("		time since not LockedOn = ", (unk_0x320D1840B6DAA1CC() - iLocal_45));
								func_85("\n");
								bVar2 = true;
								if (unk_0x320D1840B6DAA1CC() > (iLocal_45 + *uParam2))
								{
									func_85("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_84(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!BitTest(uParam3, 0))
			{
				if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
				{
					func_85("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_85("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_84(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_45 = unk_0x320D1840B6DAA1CC();
	}
	return 0;
}

void func_81(char* sParam0, int iParam1)
{
	func_83(sParam0);
	func_82(iParam1);
}

void func_82(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_83(char* sParam0)
{
	if (unk_0x3C57C2F07FEE34D2(uParam0, uParam0))
	{
	}
}

void func_84(var uParam0)
{
	unk_0x642EEAB0CFC6A636(uParam0);
}

void func_85(char* sParam0)
{
	func_83(sParam0);
}

int func_86()
{
	int iVar0;
	
	iVar0 = unk_0x5853B15F78E1A265(0, 5);
	if (iVar0 == 0)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iVar0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iVar0 == 2)
	{
		return joaat("weapon_pistol");
	}
	else if (iVar0 == 3)
	{
		return joaat("weapon_pistol");
	}
	else
	{
		return joaat("weapon_pistol");
	}
	return joaat("weapon_pistol");
}

void func_87(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_88()
{
	func_20();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_89(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_90(int iParam0)
{
	if (unk_0xC92F9F18E020B461())
	{
		if (func_91(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_21(6) || func_21(7))
			{
				return 1;
			}
			else
			{
				return func_91(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_71(5))
			{
				if (func_92(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_92(int iParam0)
{
	int iVar0;
	
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				iVar0 = func_88();
				if (!func_22(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_100()) || Global_112433) || Global_31962) || func_99()) || func_58(8, -1)) || func_98()) || func_97()) || func_96()) || func_95()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1) || func_100()) || Global_31962) || func_99()) || func_58(8, -1)) || func_96()) || func_98()) || func_97()) || func_95()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_100()) || Global_112433) || Global_31962) || func_99()) || func_58(8, -1)) || func_96()) || func_98()) || func_97()) || func_95()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0)) || func_100()) || Global_112433) || Global_31962) || func_99()) || func_58(8, -1)) || func_98()) || func_97()) || func_95()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_100() || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || func_58(8, -1)) || func_95()) || func_94()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_58(8, -1) || func_98()) || func_97()) || func_94()) || func_93())
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
							if ((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_100()) || Global_31962) || func_99()) || func_58(8, -1)) || func_97()) || func_96()) || func_95()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || func_100()) || func_97()) || Global_112433) || Global_31962) || func_99()) || Global_44238) || func_58(8, -1)) || func_96()) || func_94()) || func_95()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xCED7266BAB0BDC20(unk_0xE2D3D51028F0428A(), 0) || !unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9())) || !unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9())) || !unk_0xE9E8955A780DDA01()) || unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0)) || unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1)) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) || unk_0x0208598D19E7A49F(unk_0xE2D3D51028F0428A())) || unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A())) || unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1)) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || func_100()) || Global_112433) || Global_31962) || func_99()) || func_58(8, -1)) || func_96()) || func_94()) || func_98()) || func_97()) || func_95())
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

var func_93()
{
	return Global_100480.f_1;
}

int func_94()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_95()
{
	if (unk_0xB4C854DD86E40FDA(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_96()
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

bool func_97()
{
	return Global_100493.f_376 > 0;
}

bool func_98()
{
	return Global_100493.f_375 > 0;
}

var func_99()
{
	return Global_1575058;
}

int func_100()
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_101()
{
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_46) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_112())
		{
			return 0;
		}
	}
	if (func_108())
	{
		return 1;
	}
	if (func_102(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_102(float fParam0, bool bParam1)
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
		if (func_22(func_88()))
		{
			iVar36 = func_19();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_113386.f_18574[iVar32 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar32 /*6*/], 3))
				{
					func_103(iVar32, &Var0);
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

void func_103(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_104(uParam1, "Abigail1", func_106(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 1:
			func_104(uParam1, "Abigail2", func_106(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 2:
			func_104(uParam1, "Barry1", func_106(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 3:
			func_104(uParam1, "Barry2", func_106(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 4:
			func_104(uParam1, "Barry3", func_106(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 5:
			func_104(uParam1, "Barry3A", func_106(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 6:
			func_104(uParam1, "Barry3C", func_106(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 7:
			func_104(uParam1, "Barry4", func_106(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_105(iParam0), 0, 0);
			break;
		
		case 8:
			func_104(uParam1, "Dreyfuss1", func_106(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 9:
			func_104(uParam1, "Epsilon1", func_106(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 10:
			func_104(uParam1, "Epsilon2", func_106(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 11:
			func_104(uParam1, "Epsilon3", func_106(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 12:
			func_104(uParam1, "Epsilon4", func_106(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 13:
			func_104(uParam1, "Epsilon5", func_106(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 14:
			func_104(uParam1, "Epsilon6", func_106(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 15:
			func_104(uParam1, "Epsilon7", func_106(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 16:
			func_104(uParam1, "Epsilon8", func_106(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 17:
			func_104(uParam1, "Extreme1", func_106(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 18:
			func_104(uParam1, "Extreme2", func_106(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 19:
			func_104(uParam1, "Extreme3", func_106(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 20:
			func_104(uParam1, "Extreme4", func_106(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 21:
			func_104(uParam1, "Fanatic1", func_106(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_105(iParam0), 1, 0);
			break;
		
		case 22:
			func_104(uParam1, "Fanatic2", func_106(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_105(iParam0), 1, 0);
			break;
		
		case 23:
			func_104(uParam1, "Fanatic3", func_106(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_105(iParam0), 0, 1);
			break;
		
		case 24:
			func_104(uParam1, "Hao1", func_106(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_105(iParam0), 0, 1);
			break;
		
		case 25:
			func_104(uParam1, "Hunting1", func_106(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 26:
			func_104(uParam1, "Hunting2", func_106(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 27:
			func_104(uParam1, "Josh1", func_106(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 28:
			func_104(uParam1, "Josh2", func_106(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 29:
			func_104(uParam1, "Josh3", func_106(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 30:
			func_104(uParam1, "Josh4", func_106(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 31:
			func_104(uParam1, "Maude1", func_106(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 32:
			func_104(uParam1, "Minute1", func_106(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 33:
			func_104(uParam1, "Minute2", func_106(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 34:
			func_104(uParam1, "Minute3", func_106(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 35:
			func_104(uParam1, "MrsPhilips1", func_106(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 36:
			func_104(uParam1, "MrsPhilips2", func_106(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 37:
			func_104(uParam1, "Nigel1", func_106(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 38:
			func_104(uParam1, "Nigel1A", func_106(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 39:
			func_104(uParam1, "Nigel1B", func_106(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_105(iParam0), 1, 1);
			break;
		
		case 40:
			func_104(uParam1, "Nigel1C", func_106(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_105(iParam0), 1, 1);
			break;
		
		case 41:
			func_104(uParam1, "Nigel1D", func_106(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_105(iParam0), 1, 1);
			break;
		
		case 42:
			func_104(uParam1, "Nigel2", func_106(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 43:
			func_104(uParam1, "Nigel3", func_106(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 44:
			func_104(uParam1, "Omega1", func_106(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 45:
			func_104(uParam1, "Omega2", func_106(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 46:
			func_104(uParam1, "Paparazzo1", func_106(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 47:
			func_104(uParam1, "Paparazzo2", func_106(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 48:
			func_104(uParam1, "Paparazzo3", func_106(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 49:
			func_104(uParam1, "Paparazzo3A", func_106(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 50:
			func_104(uParam1, "Paparazzo3B", func_106(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 51:
			func_104(uParam1, "Paparazzo4", func_106(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 52:
			func_104(uParam1, "Rampage1", func_106(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 54:
			func_104(uParam1, "Rampage3", func_106(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 55:
			func_104(uParam1, "Rampage4", func_106(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 56:
			func_104(uParam1, "Rampage5", func_106(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 53:
			func_104(uParam1, "Rampage2", func_106(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 57:
			func_104(uParam1, "TheLastOne", func_106(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 58:
			func_104(uParam1, "Tonya1", func_106(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 59:
			func_104(uParam1, "Tonya2", func_106(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 60:
			func_104(uParam1, "Tonya3", func_106(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 61:
			func_104(uParam1, "Tonya4", func_106(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 62:
			func_104(uParam1, "Tonya5", func_106(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_104(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_105(int iParam0)
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

struct<2> func_106(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_107(iParam0) };
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

struct<2> func_107(int iParam0)
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

int func_108()
{
	if (func_111() && !func_112())
	{
		return 1;
	}
	if (func_110() && func_109())
	{
		return 1;
	}
	return 0;
}

bool func_109()
{
	return Global_113104 > 0;
}

int func_110()
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_111()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_112()
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

int func_113()
{
	if (!func_71(5))
	{
		return 1;
	}
	if (func_108())
	{
		return 1;
	}
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_112())
		{
			return 0;
		}
	}
	if (func_102(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_114()
{
	if ((Global_113375 == func_29() && unk_0xE3BBDB1C36703410()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

int func_115(int iParam0, struct<5> Param1, var uParam6)
{
	int iVar0;
	
	if (iParam0 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_51 - 1))
		{
			unk_0xD69A0C3662175E68(Param1[iVar0]);
			iVar0++;
		}
		unk_0xD69A0C3662175E68(Param1.f_4);
		unk_0x8FB472886552D737("random@gang_intimidation@");
		unk_0x63B063064DC08617("RE28_OS");
		if (!unk_0x0152AA00FA3130F1(Param1.f_4))
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_51 - 1))
		{
			if (!unk_0x0152AA00FA3130F1(Param1[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		if (unk_0x6F940C2636C076AD("random@gang_intimidation@"))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_51 - 1))
		{
			unk_0xF1A23B343DFEDFD0(Param1[iVar0]);
			iVar0++;
		}
		unk_0xF1A23B343DFEDFD0(Param1.f_4);
	}
	return 0;
}

void func_116(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_118(iParam0);
	unk_0xEEEFCC23227A8148(0);
	unk_0xA560174A439E78F1(1);
	Global_113372 = 0;
	func_117();
}

void func_117()
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

void func_118(int iParam0)
{
	Global_113375 = iParam0;
}

int func_119(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_29();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_151())
		{
			return 0;
		}
	}
	Local_46 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC35FBD95659582C4(unk_0xE2D3D51028F0428A())) > 1369f && !func_112())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_4(0))
		{
			return 0;
		}
		if (func_108())
		{
			return 0;
		}
		if (func_150())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_22(func_88()))
		{
			if (func_102(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()) && !bParam6)
		{
			if ((Var1.f_2 - Local_46.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_149(iParam3))
		{
			return 0;
		}
		if (func_22(func_88()))
		{
			if (func_148(func_88()) == 4 || func_148(func_88()) == 5)
			{
				return 0;
			}
		}
		if (func_22(func_88()))
		{
			if (!func_147(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_146(Global_113386.f_24995.f_43[iParam3]))
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
		if (func_145())
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
		if (!func_92(4))
		{
			return 0;
		}
		if (!func_71(5))
		{
			return 0;
		}
		if (func_144(iParam3, bParam4) && !bParam5)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_144(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_149(30) && !func_144(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_22(func_88()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_113386.f_2363.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_113386.f_2363.f_539.f_2296[iVar4];
				if (func_143(iVar8))
				{
					if (func_121(iVar4))
					{
						if (!func_120(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), Var5) < (210f * 210f))
							{
								if (func_88() != iVar4)
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

bool func_120(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_121(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_122(iVar0);
}

int func_122(int iParam0)
{
	return func_123(iParam0, 1);
}

int func_123(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_143(iParam0))
	{
		return 0;
	}
	func_124(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_124(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_125(func_136(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_125(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_135(iParam0, iParam1))
	{
		iVar0 = func_134(iParam1);
		iVar1 = func_132(iParam0);
		iVar2 = (func_132(iParam0) - func_132(iParam1));
		iVar3 = (func_134(iParam0) - func_134(iParam1));
		iVar4 = (func_131(iParam0) - func_131(iParam1));
		iVar5 = (func_130(iParam0) - func_130(iParam1));
		iVar6 = (func_129(iParam0) - func_129(iParam1));
		iVar7 = (func_128(iParam0) - func_128(iParam1));
	}
	else
	{
		iVar0 = func_134(iParam0);
		iVar1 = func_132(iParam1);
		iVar2 = (func_132(iParam1) - func_132(iParam0));
		iVar3 = (func_134(iParam1) - func_134(iParam0));
		iVar4 = (func_131(iParam1) - func_131(iParam0));
		iVar5 = (func_130(iParam1) - func_130(iParam0));
		iVar6 = (func_129(iParam1) - func_129(iParam0));
		iVar7 = (func_128(iParam1) - func_128(iParam0));
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
		iVar4 = (iVar4 + func_127(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_126(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_126(float fParam0, float fParam1, float fParam2)
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

int func_127(int iParam0, int iParam1)
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

int func_128(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_129(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_130(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_131(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_132(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_133(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_133(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_134(int iParam0)
{
	return iParam0 & 15;
}

int func_135(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_143(iParam1) || !func_143(iParam0))
	{
		return 1;
	}
	iVar0 = func_132(iParam0);
	iVar1 = func_132(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_134(iParam0);
	iVar1 = func_134(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_131(iParam0);
	iVar1 = func_131(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_130(iParam0);
	iVar1 = func_130(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_129(iParam0);
	iVar1 = func_129(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_128(iParam0);
	iVar1 = func_128(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_136()
{
	var uVar0;
	
	func_142(&uVar0, unk_0xAA2844CAD88768B5());
	func_141(&uVar0, unk_0x80F97D7D29800A1A());
	func_140(&uVar0, unk_0x09FC827691DACE59());
	func_139(&uVar0, unk_0xD52BD97E61483713());
	func_138(&uVar0, unk_0x771485043FDC55DE());
	func_137(&uVar0, unk_0x1137FD08B8D3F874());
	return uVar0;
}

void func_137(var uParam0, int iParam1)
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

void func_138(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_139(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_134(*uParam0);
	iVar1 = func_132(*uParam0);
	if (iParam1 < 1 || iParam1 > func_127(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_140(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_141(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_142(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_143(int iParam0)
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
	iVar0 = func_128(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_129(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_130(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_132(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_134(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_131(iParam0);
	if (iVar5 < 1 || iVar5 > func_127(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_144(int iParam0, bool bParam1)
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_145()
{
	func_56();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_146(int iParam0)
{
	return func_135(func_136(), iParam0);
}

int func_147(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_88();
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

int func_148(int iParam0)
{
	if (!func_22(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_149(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_151())
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

int func_150()
{
	var uVar0;
	
	if (Global_32110)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (unk_0x55A0C756C4A8220C(uVar0, 0))
			{
				if (!unk_0xF68107C40359970C(unk_0xAB793EA186AB8DAA(uVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_151()
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

void func_152(struct<6> Param0, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	
	if (iParam6 == 0)
	{
	}
	if (iLocal_249)
	{
		unk_0xEC6D4F9C59CDA6F5();
		unk_0x84A65E2E9CFB6A77(Local_243 - Vector(10f, 10f, 10f), Local_243 + Vector(10f, 10f, 10f), 1, 1);
		unk_0x8576657A629C4B0A(1f);
		func_41(uLocal_220[0]);
		func_41(uLocal_220[1]);
		func_41(uLocal_220[2]);
		iVar0 = 0;
		while (iVar0 <= (iLocal_51 - 1))
		{
			if (!unk_0xF68107C40359970C((*iParam7)[iVar0]))
			{
			}
			iVar0++;
		}
		if (!unk_0xF68107C40359970C(iParam8))
		{
			unk_0x50274A7EACA3133A(iParam8, 0);
		}
		func_89(0);
		func_115(0, Param0);
	}
	func_153(-1);
	unk_0xAFBDF6A5E54114C1();
}

void func_153(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_114())
	{
		func_157(iParam0);
		unk_0xEFE837B21D5CF02C(0, 0);
		Global_113377 = unk_0x320D1840B6DAA1CC();
		func_156(30000);
		StringCopy(&cVar0, func_155(Global_113375, 1), 64);
		if (func_28(Global_113375) > 0)
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
	func_154(&Global_32019);
	Global_113376 = 0;
	func_118(-1);
}

void func_154(var uParam0)
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

char* func_155(int iParam0, bool bParam1)
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

void func_156(int iParam0)
{
	Global_43603 = (unk_0x320D1840B6DAA1CC() + iParam0);
}

void func_157(int iParam0)
{
	func_158(iParam0, 0, func_163(iParam0));
}

void func_158(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_136();
	func_161(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_160(iParam0, &uVar0);
	Var1 = { func_159(&uVar0) };
}

struct<16> func_159(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_130(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_129(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_128(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_131(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_134(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_132(*uParam0), 64);
	return Var0;
}

void func_160(int iParam0, var uParam1)
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_161(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_132(*uParam0);
	iVar1 = func_134(*uParam0);
	iVar2 = func_131(*uParam0);
	iVar3 = func_130(*uParam0);
	iVar4 = func_129(*uParam0);
	iVar5 = func_128(*uParam0);
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
	iVar6 = func_127(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_127(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_162(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_162(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_142(uParam0, iParam1);
	func_141(uParam0, iParam2);
	func_140(uParam0, iParam3);
	func_138(uParam0, iParam5);
	func_139(uParam0, iParam4);
	func_137(uParam0, iParam6);
}

int func_163(int iParam0)
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

int func_164()
{
	if (BitTest(unk_0x5853B15F78E1A265(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

