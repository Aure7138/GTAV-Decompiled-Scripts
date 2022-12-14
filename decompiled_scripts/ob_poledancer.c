#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	struct<3> Local_2 = { 0, 0, 0 } ;
	var uLocal_5 = 0;
	char* sLocal_6 = NULL;
	int iLocal_7 = 0;
	char* sLocal_8 = NULL;
	int iLocal_9 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	sLocal_6 = "Poledance_01";
	iLocal_7 = joaat("a_f_y_beach_01");
	sLocal_8 = "MISSSTRIP_CLUB";
	if (unk_0xE5965CDF24F93A9F(uScriptParam_0))
	{
		unk_0x5C65DDDC219B3AA5(uScriptParam_0, 1);
		Local_2 = { unk_0xCACAD935C0BEE14F(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0x82FE2343F8BDFF0B(uScriptParam_0);
		unk_0x959E1626CBC7D38A(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xE5965CDF24F93A9F(uScriptParam_0))
		{
			if (unk_0xA7FB445015A2AF1C(uScriptParam_0))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
					
					case 2:
						func_3();
						if (func_2())
						{
							unk_0x959E1626CBC7D38A(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0xF68107C40359970C(uLocal_1))
						{
							unk_0x402A537158A551BD(uLocal_1, -1);
							unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
							unk_0xABC2CA6F28903308(uLocal_1, 1);
							unk_0xAFBDF6A5E54114C1();
						}
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (!unk_0x55B23FE400FCEA6B(uLocal_1, 0))
	{
		if (!unk_0xBC7D3EDF3455BC35(uLocal_1))
		{
			unk_0x05CB75C0837196F9(&uLocal_1);
		}
		else
		{
			unk_0xABC2CA6F28903308(uLocal_1, 1);
		}
	}
	unk_0xAFBDF6A5E54114C1();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (!unk_0xF68107C40359970C(uLocal_1))
		{
			if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0x0747E45CFF1F74AA(uLocal_1, unk_0xE2D3D51028F0428A(), 1))
			{
				return 1;
			}
			if (unk_0x72F6AE51B7E34865(unk_0xE2D3D51028F0428A(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0xF68107C40359970C(uLocal_1))
	{
		if (unk_0x174CED88B97C78D9(uLocal_1, joaat("script_task_play_anim")) == 7)
		{
			unk_0x49D97B076E3590AC(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0x91243FFD31A90906(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0x49D97B076E3590AC(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0xFCF559C8631ABED7(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0x12FFBBB6191DB79F(uLocal_1, sLocal_8, sLocal_6, unk_0xC4EAB25A108C2429(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0x55B23FE400FCEA6B(uLocal_1, 0))
	{
		uLocal_1 = unk_0xA8D58C3AADA2C41C(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0x6E9C0F9EAC1F29FD(uLocal_1, 0);
		unk_0xA7266A50941DBAEA(uLocal_1, 0);
		unk_0x50274A7EACA3133A(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0xD69A0C3662175E68(iLocal_7);
	unk_0x8FB472886552D737(sLocal_8);
	if (unk_0x0152AA00FA3130F1(iLocal_7) && unk_0x6F940C2636C076AD(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0xD69A0C3662175E68(iLocal_7);
		unk_0x8FB472886552D737(sLocal_8);
	}
	return 0;
}

