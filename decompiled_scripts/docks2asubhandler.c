#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0x55EEDBBFDC6E810F(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!BitTest(uLocal_2, 1))
	{
		if (!BitTest(uLocal_2, 0))
		{
			if (unk_0x7DE17ACDD8BA2642(uLocal_0))
			{
				if (unk_0xFBD273FDBCF0C5BD(uLocal_0, 0))
				{
					unk_0x85BAE84748AD1A23(uLocal_0, 0, 1);
					unk_0x2718E9CC165A99F6(uLocal_0, 1);
					unk_0x03879CC8EF9E3635(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0x7DE17ACDD8BA2642(uLocal_1))
					{
						unk_0x85BAE84748AD1A23(uLocal_1, 0, 1);
						unk_0x2718E9CC165A99F6(uLocal_1, 1);
						unk_0x03879CC8EF9E3635(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0xECDAB41968FF21A8(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0xFBD273FDBCF0C5BD(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), unk_0x30BE8A934C020461(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0xECDAB41968FF21A8(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0x865259F0333CAA4B(uLocal_0))
				{
					unk_0xECDAB41968FF21A8(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0xECDAB41968FF21A8(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0x0E4B6CF706BE8AA4(&uLocal_0);
	unk_0xE1D0FB923395DF66(&uLocal_1);
	unk_0x675D9C12C73D3DE7();
}

