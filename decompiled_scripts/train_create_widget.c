#region Local Var
	var uLocal_0 = 0;
	struct<3> Local_1 = { 0, 0, 0 } ;
	var uLocal_4 = 0;
	float fLocal_5 = 0f;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	bool bLocal_8 = 0;
	int iLocal_9 = 0;
#endregion

void __EntryFunction__()
{
	Local_1 = { 613f, 6438f, 31f };
	fLocal_5 = 5f;
	iLocal_6 = 1;
	unk_0xB65977CD1EC089B5(1);
	if (unk_0x55EEDBBFDC6E810F(3))
	{
		func_1();
	}
	unk_0xE57259AE78535D61(0);
	unk_0xCA38B42A9A54C242();
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0x692C3FDAD7DB53CC(unk_0xC1A5EC5C986B98AD(), -177f);
		unk_0xAABD7B0753C5C286(0);
	}
	unk_0x852EC2A7DE66202D(joaat("freight"));
	unk_0x852EC2A7DE66202D(joaat("freightcar"));
	unk_0x852EC2A7DE66202D(joaat("freightgrain"));
	unk_0x852EC2A7DE66202D(joaat("freightcont1"));
	unk_0x852EC2A7DE66202D(joaat("freightcont2"));
	unk_0x852EC2A7DE66202D(joaat("tankercar"));
	unk_0x852EC2A7DE66202D(joaat("metrotrain"));
	while ((((((!unk_0x0CBB7C273DED26E7(joaat("freight")) || !unk_0x0CBB7C273DED26E7(joaat("freightcar"))) || !unk_0x0CBB7C273DED26E7(joaat("freightgrain"))) || !unk_0x0CBB7C273DED26E7(joaat("freightcont1"))) || !unk_0x0CBB7C273DED26E7(joaat("freightcont2"))) || !unk_0x0CBB7C273DED26E7(joaat("tankercar"))) || !unk_0x0CBB7C273DED26E7(joaat("metrotrain")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
		{
			if (iLocal_7)
			{
				if (unk_0x7DE17ACDD8BA2642(uLocal_0))
				{
					unk_0x5A307EE0ECF6BBEA(&uLocal_0);
				}
				uLocal_0 = unk_0xE1C5B46DD1EE696A(uLocal_4, Local_1, iLocal_6, 0, 0);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				Local_1 = { unk_0x7D4F36E9E86B0A11() };
				iLocal_9 = 0;
			}
			if (unk_0xFBD273FDBCF0C5BD(uLocal_0, 0) && !unk_0x055111B11E6624FD(uLocal_0, 0))
			{
				unk_0x802D7BB5F094CE80(uLocal_0, fLocal_5);
				unk_0x1FD3EB5527EFC000(uLocal_0, fLocal_5);
			}
			if (bLocal_8)
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	unk_0xE57259AE78535D61(1);
	unk_0x675D9C12C73D3DE7();
}

