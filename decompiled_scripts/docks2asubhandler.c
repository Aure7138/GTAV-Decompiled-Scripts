#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0x4B34601C5C56F3EE(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!BitTest(uLocal_2, 1))
	{
		if (!BitTest(uLocal_2, 0))
		{
			if (unk_0xE5965CDF24F93A9F(uLocal_0))
			{
				if (unk_0x55A0C756C4A8220C(uLocal_0, 0))
				{
					unk_0x2D58A6131679D82C(uLocal_0, 0, 1);
					unk_0x5C65DDDC219B3AA5(uLocal_0, 1);
					unk_0xBED097BB6359F09C(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0xE5965CDF24F93A9F(uLocal_1))
					{
						unk_0x2D58A6131679D82C(uLocal_1, 0, 1);
						unk_0x5C65DDDC219B3AA5(uLocal_1, 1);
						unk_0xBED097BB6359F09C(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0xCED9E32812D6C7C7(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0x55A0C756C4A8220C(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0xCED9E32812D6C7C7(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0xBC7D3EDF3455BC35(uLocal_0))
				{
					unk_0xCED9E32812D6C7C7(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0x3D81769BEC61BFF8(&uLocal_0);
	unk_0xEC548B5E95E61DF6(&uLocal_1);
	unk_0xAFBDF6A5E54114C1();
}

