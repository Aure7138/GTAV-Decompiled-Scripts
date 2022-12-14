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
	unk_0xBD1F51FB3FA2C6E4(1);
	if (unk_0x4B34601C5C56F3EE(3))
	{
		func_1();
	}
	unk_0x50CF518FB6F3BBDE(0);
	unk_0x4E012C90DB4D2B14();
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), -177f);
		unk_0x94953C3FF0664F66(0);
	}
	unk_0xD69A0C3662175E68(joaat("freight"));
	unk_0xD69A0C3662175E68(joaat("freightcar"));
	unk_0xD69A0C3662175E68(joaat("freightgrain"));
	unk_0xD69A0C3662175E68(joaat("freightcont1"));
	unk_0xD69A0C3662175E68(joaat("freightcont2"));
	unk_0xD69A0C3662175E68(joaat("tankercar"));
	unk_0xD69A0C3662175E68(joaat("metrotrain"));
	while ((((((!unk_0x0152AA00FA3130F1(joaat("freight")) || !unk_0x0152AA00FA3130F1(joaat("freightcar"))) || !unk_0x0152AA00FA3130F1(joaat("freightgrain"))) || !unk_0x0152AA00FA3130F1(joaat("freightcont1"))) || !unk_0x0152AA00FA3130F1(joaat("freightcont2"))) || !unk_0x0152AA00FA3130F1(joaat("tankercar"))) || !unk_0x0152AA00FA3130F1(joaat("metrotrain")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (iLocal_7)
			{
				if (unk_0xE5965CDF24F93A9F(uLocal_0))
				{
					unk_0xF49D9D19B56DC6D4(&uLocal_0);
				}
				uLocal_0 = unk_0x27A58935528FC12F(uLocal_4, Local_1, iLocal_6, 0, 0);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				Local_1 = { unk_0x524171C8263E7C3E() };
				iLocal_9 = 0;
			}
			if (unk_0x55A0C756C4A8220C(uLocal_0, 0) && !unk_0x55B23FE400FCEA6B(uLocal_0, 0))
			{
				unk_0x95F65274C3AB868E(uLocal_0, fLocal_5);
				unk_0x2FB817738FFFDC38(uLocal_0, fLocal_5);
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
	unk_0x50CF518FB6F3BBDE(1);
	unk_0xAFBDF6A5E54114C1();
}

