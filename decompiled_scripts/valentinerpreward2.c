#region Local Var
    char* sLocal_0 = NULL;
    int iLocal_1 = 0;
    int iLocal_2 = 0;
    int iLocal_3 = 0;
    int iLocal_4 = 0;
    int iLocal_5 = 0;
    int iLocal_6 = 0;
    int iLocal_7 = 0;
    var uLocal_8 = 0;
    var uLocal_9 = 0;
    var uLocal_10 = 0;
    var uLocal_11 = 0;
    var uLocal_12 = 0;
    var uLocal_13 = 0;
    var uLocal_14 = 0;
    var uLocal_15 = 0;
    struct<3> Local_16 = { 0, 0, 0 } ;
    int iLocal_17 = 0;
    int iLocal_18 = 0;
    int iLocal_19 = 0;
    int iLocal_20 = 0;
    int iLocal_21 = 0;
    int iLocal_22 = 0;
    var uLocal_23 = 0;
    var uLocal_24 = 0;
    int iLocal_25 = 0;
    var uLocal_26 = 0;
    var uLocal_27 = 0;
    int iLocal_28 = 0;
    int iLocal_29 = 0;
    int iLocal_30 = 0;
    int iLocal_31 = 0;
    int iLocal_32 = 0;
    var uLocal_33 = 0;
#endregion

void __EntryFunction__()
{
    int iVar0;
    
    sLocal_0 = "1.64.01";
    iLocal_18 = -1;
    iLocal_19 = -1;
    iLocal_25 = 10000;
    unk_0xF1440897111F3111(0);
    unk_0x389D5B1C24A046B5();
    if (iScriptParam_32 == iScriptParam_32)
    {
    }
    Global_1577991 = unk_0x14580F20CBCE4FA9(sLocal_0);
    iVar0 = unk_0xA5E11AF0A2B928C1() + 10000;
    while (unk_0xA5E11AF0A2B928C1() < iVar0)
    {
        unk_0x4EDE34FBADD967A6(0);
    }
    while (true)
    {
        if (func_90())
        {
            func_88();
        }
        if (unk_0xA26A9A07F761D8F8() && Global_2692733.f_3)
        {
            func_87();
            func_86();
            func_83();
            func_81();
            func_80();
            func_74();
            func_66();
            func_62();
            func_58();
            func_53();
            func_44();
            func_43();
            func_30();
            func_29();
            func_24();
            func_3();
        }
        if (unk_0x1758F8A8511510AB())
        {
            func_2();
            func_1();
        }
        unk_0x4EDE34FBADD967A6(0);
    }
    unk_0x675D9C12C73D3DE7();
}

void func_1()
{
    if (Global_4718592.f_113724 == 380938673 || Global_4718592.f_113724 == 1597839856)
    {
        if (!BitTest(Global_4718592.f_35, 2))
        {
            unk_0xECDAB41968FF21A8(&(Global_4718592.f_35), 2);
        }
    }
}

void func_2()
{
    if (!Global_2683862.f_24)
    {
        return;
    }
    if (!unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA()))
    {
        return;
    }
    unk_0x8B438725D591ED78(0, 220, 1);
    unk_0x8B438725D591ED78(0, 221, 1);
    unk_0x8B438725D591ED78(0, 295, 1);
    unk_0x8B438725D591ED78(0, 294, 1);
    unk_0x8B438725D591ED78(0, 270, 1);
    unk_0x8B438725D591ED78(0, 271, 1);
    unk_0x8B438725D591ED78(0, 290, 1);
    unk_0x8B438725D591ED78(0, 1, 1);
    unk_0x8B438725D591ED78(0, 5, 1);
    unk_0x8B438725D591ED78(0, 6, 1);
    unk_0x8B438725D591ED78(0, 239, 1);
    unk_0x8B438725D591ED78(0, 240, 1);
}

void func_3()
{
    int iVar0;
    int iVar1;
    struct<2> Var2;
    float fVar3;
    float fVar4;
    struct<3> Var5;
    
    if (func_23(&uLocal_14))
    {
        unk_0xECDAB41968FF21A8(&Global_8254, 2);
        if (func_22(&uLocal_14, 60000, 0))
        {
            func_21(&uLocal_14, 0, 0);
            func_20(&uLocal_14);
        }
    }
    if (func_23(&uLocal_12) && func_22(&uLocal_12, 1000, 0))
    {
        if (iLocal_19 == -1)
        {
            if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
            {
                iLocal_19 = unk_0x9F2C1BA4F2BF5CF8();
                unk_0x03AC3DF6C3FAD811(iLocal_19, "05", unk_0xC1A5EC5C986B98AD(), "DLC_GR_CS2_Sounds", 0, 0);
            }
        }
        else if (func_22(&uLocal_12, 4000, 0))
        {
            if (!unk_0x209C5E3492025E4B(iLocal_19))
            {
                unk_0xA13B5B0EF7402391(iLocal_19);
            }
            unk_0x8A1B9F78F1F46A12(iLocal_19);
            iLocal_19 = -1;
            unk_0x3FA8C73B5856A3E4("DLC_GR_CS2_General_Scene");
            func_21(&uLocal_12, 0, 0);
            func_20(&uLocal_12);
        }
    }
    if (!iLocal_6 && !func_15())
    {
        return;
    }
    iLocal_6 = 1;
    unk_0xECDAB41968FF21A8(&Global_8254, 2);
    if (!unk_0x7DE17ACDD8BA2642(iLocal_5))
    {
        iVar0 = joaat("imp_prop_ship_01a");
        unk_0x852EC2A7DE66202D(iVar0);
        if (unk_0x0CBB7C273DED26E7(iVar0))
        {
            iLocal_5 = unk_0xC3541ED6B6D42728(iVar0, 360.8759f, 5623.427f, 780.1747f, 0, 0, 1);
            unk_0xE0A291F406691F03(iVar0);
            unk_0x2718E9CC165A99F6(iLocal_5, 1);
            unk_0x73562E6072D7A39D(iLocal_5, 8000);
            iVar1 = func_14(7869, -1, 0);
            func_11(7869, iVar1 + 1, -1, 1, 0);
            Var2.f_1 = 1;
            Var2.f_0 = 24;
            unk_0x221F910C0808D9A5(&Var2);
            Local_16 = { unk_0x30BE8A934C020461(iLocal_5, 0) };
            iLocal_17 = 0;
        }
    }
    else
    {
        func_10();
        if (unk_0x35DF833D93BCC488() || unk_0x6C9BA681FB2251B6())
        {
            if (iLocal_18 == -1)
            {
                unk_0xAEA29937C5240DA0("DLC_GR_CS2_General_Scene");
                iLocal_18 = unk_0x9F2C1BA4F2BF5CF8();
                unk_0x03AC3DF6C3FAD811(iLocal_18, "07", iLocal_5, "DLC_GR_CS2_Sounds", 0, 0);
            }
            if (!iLocal_7)
            {
                if (func_22(&uLocal_8, 4500, 0))
                {
                    unk_0x2718E9CC165A99F6(iLocal_5, 0);
                    func_21(&uLocal_8, 0, 0);
                    func_20(&uLocal_8);
                    func_9(&uLocal_10, 0, 0);
                    iLocal_7 = 1;
                }
            }
            else
            {
                fVar3 = (unk_0xBBDA792448DB5A89(func_8(&uLocal_10, 0, 0)) / unk_0xBBDA792448DB5A89(func_7()));
                fVar4 = (unk_0xBBDA792448DB5A89(func_8(&uLocal_8, 0, 0)) / unk_0xBBDA792448DB5A89(func_6()));
                fVar4 = (fVar4 * fVar3);
                Var5 = { func_4(Local_16, func_5(), fVar4) };
                unk_0xC2E3C377D893C17A(iLocal_5, Var5, 1, 0, 0, 1);
                if (fVar4 >= 1f)
                {
                    iLocal_17++;
                    Local_16 = { unk_0x30BE8A934C020461(iLocal_5, 0) };
                    func_21(&uLocal_8, 0, 0);
                    func_20(&uLocal_8);
                    if (func_6() == -1)
                    {
                        unk_0xEF078F1FEE785D3E(&iLocal_5);
                        unk_0x9C6C477C0E317DD7();
                        if (!unk_0x209C5E3492025E4B(iLocal_18))
                        {
                            unk_0xA13B5B0EF7402391(iLocal_18);
                        }
                        unk_0x8A1B9F78F1F46A12(iLocal_18);
                        iLocal_18 = -1;
                        func_9(&uLocal_12, 0, 0);
                        func_9(&uLocal_14, 0, 0);
                        func_21(&uLocal_10, 0, 0);
                        func_20(&uLocal_10);
                        Local_16 = { 0f, 0f, 0f };
                        iLocal_17 = 0;
                        iLocal_6 = 0;
                        iLocal_7 = 0;
                    }
                }
            }
        }
    }
}

Vector3 func_4(struct<3> Param0, struct<3> Param1, float fParam2)
{
    return FtoV((1f - fParam2)) * Param0 + Vector(fParam2, fParam2, fParam2) * Param1;
}

Vector3 func_5()
{
    switch (iLocal_17)
    {
        case 0:
            return 306.567f, 5652.283f, 785.594f;
        
        case 1:
            return -1082.865f, 6390.52f, 924.2493f;
        
        case 2:
            return -2542.874f, 7217.514f, 1051.333f;
        
        case 3:
            return -4139.106f, 8143.302f, 1412.694f;
        
        default:
    }
    return 0f, 0f, 0f;
}

int func_6()
{
    switch (iLocal_17)
    {
        case 0:
            return 2000;
        
        case 1:
            return 1000;
        
        case 2:
            return 100;
        
        case 3:
            return 50;
        
        default:
    }
    return -1;
}

int func_7()
{
    return 3150;
}

var func_8(var uParam0, bool bParam1, bool bParam2)
{
    if (unk_0xA26A9A07F761D8F8() && !bParam1)
    {
        if (!bParam2)
        {
            return unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam0);
        }
        else
        {
            return unk_0x55DB5FC567C065D9(unk_0xB78F034955403399(), *uParam0);
        }
    }
    return unk_0x55DB5FC567C065D9(unk_0xA5E11AF0A2B928C1(), *uParam0);
}

void func_9(var uParam0, bool bParam1, bool bParam2)
{
    if (uParam0->f_1 == 0)
    {
        if (unk_0xA26A9A07F761D8F8() && !bParam1)
        {
            if (!bParam2)
            {
                *uParam0 = unk_0x0DB7F8294D73598B();
            }
            else
            {
                *uParam0 = unk_0xB78F034955403399();
            }
        }
        else
        {
            *uParam0 = unk_0xA5E11AF0A2B928C1();
        }
        uParam0->f_1 = 1;
    }
}

void func_10()
{
    struct<3> Var0;
    
    Var0 = { unk_0x000D018EA42688BA(iLocal_5, 2) };
    Var0.f_0 = 0f;
    Var0.f_1 = 0f;
    Var0.f_2 = (Var0.f_2 + 1f);
    unk_0x464B5B0F22497FC5(iLocal_5, Var0, 2, 1);
}

void func_11(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
    int iVar0;
    
    if (bParam4)
    {
    }
    iVar0 = Global_2805027[iParam0 /*3*/][func_12(iParam2)];
    if (iVar0 != 0)
    {
        unk_0x3CC35ACFFC9C730E(iVar0, uParam1, iParam3);
    }
}

int func_12(var uParam0)
{
    int iVar0;
    int iVar1;
    
    iVar0 = uParam0;
    if (iVar0 == -1)
    {
        iVar1 = func_13();
        if (iVar1 > -1)
        {
            Global_2804739 = 0;
            iVar0 = iVar1;
        }
        else
        {
            iVar0 = 0;
            Global_2804739 = 1;
        }
    }
    return iVar0;
}

int func_13()
{
    return Global_1574918;
}

int func_14(int iParam0, int iParam1, int iParam2)
{
    var uVar0;
    var uVar1;
    
    if (iParam0 != 14192)
    {
        if (iParam2 == 0)
        {
        }
        uVar0 = Global_2805027[iParam0 /*3*/][func_12(iParam1)];
        if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
        {
            return uVar1;
        }
    }
    return 0;
}

int func_15()
{
    if (((((((func_19(22107, -1) && Global_2639783 == 7) && !unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0)) && func_18(unk_0xC1A5EC5C986B98AD(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2684799.f_3076.f_178 >= 1) && Global_2684799.f_3076.f_178 < 4) && func_17()) && func_16())
    {
        return 1;
    }
    return 0;
}

int func_16()
{
    if (func_19(15476, -1) && func_14(5453, func_13(), 0) > 577)
    {
        return 1;
    }
    return 0;
}

int func_17()
{
    int iVar0;
    int iVar1;
    float fVar2;
    
    unk_0x4AE338C69F2C7E27(&iVar0, &iVar1, &fVar2);
    if (fVar2 < 0.5f)
    {
        if ((iVar0 == joaat("rain") || iVar0 == joaat("THUNDER")) || iVar1 == -1429616491)
        {
            return 1;
        }
    }
    else if ((iVar1 == joaat("rain") || iVar1 == joaat("THUNDER")) || iVar1 == -1429616491)
    {
        return 1;
    }
    return 0;
}

bool func_18(int iParam0, struct<3> Param1, float fParam2)
{
    return unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(iParam0, 1), Param1) <= (fParam2 * fParam2);
}

var func_19(int iParam0, int iParam1)
{
    if (iParam1 == -1)
    {
        iParam1 = func_13();
    }
    return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}

void func_20(var uParam0)
{
    uParam0->f_1 = 0;
}

void func_21(var uParam0, bool bParam1, bool bParam2)
{
    if (unk_0xA26A9A07F761D8F8() && !bParam1)
    {
        if (!bParam2)
        {
            *uParam0 = unk_0x0DB7F8294D73598B();
        }
        else
        {
            *uParam0 = unk_0xB78F034955403399();
        }
    }
    else
    {
        *uParam0 = unk_0xA5E11AF0A2B928C1();
    }
    uParam0->f_1 = 1;
}

int func_22(var uParam0, int iParam1, bool bParam2)
{
    if (iParam1 == -1)
    {
        return 1;
    }
    func_9(uParam0, bParam2, 0);
    if (unk_0xA26A9A07F761D8F8() && !bParam2)
    {
        if (unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam0)) >= iParam1)
        {
            return 1;
        }
    }
    else if (unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0xA5E11AF0A2B928C1(), *uParam0)) >= iParam1)
    {
        return 1;
    }
    return 0;
}

bool func_23(var uParam0)
{
    return uParam0->f_1;
}

void func_24()
{
    if (unk_0x24B651D85CCE5EB4(joaat("fm_mission_controller_2020")) > 0)
    {
        func_27();
    }
    else
    {
        func_25();
    }
}

void func_25()
{
    bool bVar0;
    
    if (iLocal_30 == 0)
    {
        return;
    }
    bVar0 = false;
    while (bVar0 <= 25)
    {
        if (BitTest(iLocal_30, bVar0))
        {
            unk_0x3D1BF1DA77058FEF(func_26(bVar0), 0);
            unk_0x061B1200C95204CB(&iLocal_30, bVar0);
        }
        bVar0++;
    }
    iLocal_31 = 0;
    Global_2766575 = 0;
}

char* func_26(bool bParam0)
{
    switch (bParam0)
    {
        case 0:
            return "RADIO_36_AUDIOPLAYER";
        
        case 1:
            return "RADIO_37_MOTOMAMI";
        
        case 2:
            return "RADIO_12_REGGAE";
        
        case 3:
            return "RADIO_15_MOTOWN";
        
        case 4:
            return "RADIO_16_SILVERLAKE";
        
        case 5:
            return "RADIO_17_FUNK";
        
        case 6:
            return "RADIO_18_90S_ROCK";
        
        case 7:
            return "RADIO_04_PUNK";
        
        case 8:
            return "RADIO_05_TALK_01";
        
        case 9:
            return "RADIO_06_COUNTRY";
        
        case 10:
            return "RADIO_07_DANCE_01";
        
        case 11:
            return "RADIO_08_MEXICAN";
        
        case 12:
            return "RADIO_35_DLC_HEI4_MLR";
        
        case 13:
            return "RADIO_13_JAZZ";
        
        case 14:
            return "RADIO_14_DANCE_02";
        
        case 15:
            return "RADIO_20_THELAB";
        
        case 16:
            return "RADIO_34_DLC_HEI4_KULT";
        
        case 17:
            return "RADIO_21_DLC_XM17";
        
        case 18:
            return "RADIO_22_DLC_BATTLE_MIX1_RADIO";
        
        case 19:
            return "RADIO_23_DLC_XM19_RADIO";
        
        case 20:
            return "RADIO_27_DLC_PRHEI4";
        
        case 21:
            return "RADIO_01_CLASS_ROCK";
        
        case 22:
            return "RADIO_02_POP";
        
        case 23:
            return "RADIO_03_HIPHOP_NEW";
        
        case 24:
            return "RADIO_09_HIPHOP_OLD";
        
        case 25:
            return "RADIO_11_TALK_02";
        
        default:
    }
    return "OFF";
}

void func_27()
{
    int iVar0;
    bool bVar1;
    
    if (!func_28(Global_4718592.f_113724))
    {
        return;
    }
    iVar0 = func_14(9877, -1, 0);
    if (iVar0 == 0)
    {
        return;
    }
    bVar1 = false;
    while (bVar1 <= 25)
    {
        if (!BitTest(iLocal_31, bVar1))
        {
            if (BitTest(iVar0, bVar1))
            {
            }
            unk_0xECDAB41968FF21A8(&iLocal_31, bVar1);
            unk_0x3D1BF1DA77058FEF(func_26(bVar1), 1);
        }
        if (BitTest(iVar0, bVar1) && !BitTest(iLocal_30, bVar1))
        {
            unk_0xECDAB41968FF21A8(&iLocal_30, bVar1);
            Global_2766575 = 1;
        }
        bVar1++;
    }
}

int func_28(int iParam0)
{
    if ((iParam0 == Global_262145.f_31722[0] || iParam0 == Global_262145.f_31722[1]) || iParam0 == Global_262145.f_31722[2])
    {
        return 1;
    }
    return 0;
}

void func_29()
{
    if (BitTest(Global_1950108.f_8, 25))
    {
        if (Global_4282954 != -1)
        {
            Global_4282954 = -1;
        }
    }
}

void func_30()
{
    if (unk_0x93E99A2DBCBA9CFA() == func_42())
    {
        iLocal_29 = 0;
        return;
    }
    if (!unk_0x7DE17ACDD8BA2642(Global_2793044.f_299))
    {
        iLocal_29 = 0;
        return;
    }
    if (unk_0x055111B11E6624FD(Global_2793044.f_299, 0))
    {
        iLocal_29 = 0;
        return;
    }
    if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), Global_2793044.f_299, 0))
    {
        iLocal_29 = 0;
        return;
    }
    if (func_41(unk_0x93E99A2DBCBA9CFA()))
    {
        iLocal_29 = 0;
        return;
    }
    if (func_38(unk_0x93E99A2DBCBA9CFA()) && Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_321.f_10 == unk_0x93E99A2DBCBA9CFA())
    {
        iLocal_29 = 0;
        return;
    }
    if (!unk_0x560AC1A525D14469(Global_2793044.f_299, -1372.786f, 135.814f, -100.586f, -1319.589f, 169.764f, -87.918f, 0, 1, 0))
    {
        iLocal_29 = 0;
        return;
    }
    if (iLocal_29)
    {
        return;
    }
    func_31(1, 0, 0, 0, 0, 0, 0);
    iLocal_29 = 1;
}

void func_31(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
    if (func_36() < 0 && Global_1962819)
    {
        return;
    }
    if (func_35(35))
    {
        bParam0 = true;
    }
    if (BitTest(Global_2672505.f_61.f_60, 3))
    {
        bParam0 = true;
    }
    if (BitTest(Global_2672505.f_61.f_64, 3))
    {
        bParam0 = true;
        bParam1 = false;
    }
    if (BitTest(Global_2672505.f_61.f_68, 3))
    {
        bParam0 = true;
        bParam1 = false;
    }
    if (bParam0)
    {
        func_34(2);
    }
    else
    {
        func_34(1);
    }
    if (bParam1)
    {
        func_34(11);
    }
    if (bParam2)
    {
        func_34(32);
        if (bParam3)
        {
            if (func_36() >= 0 && BitTest(Global_1586468[func_36() /*142*/].f_103, 0))
            {
                func_34(33);
            }
        }
        else
        {
            func_33(33);
        }
        if (func_36() >= 0)
        {
            if (func_32(Global_1586468[func_36() /*142*/].f_66))
            {
                func_34(40);
            }
        }
    }
    else if (bParam5)
    {
        func_34(37);
    }
    if (bParam4)
    {
        func_34(36);
    }
    if (func_35(36))
    {
        if (func_35(2))
        {
            func_33(36);
        }
    }
    if (bParam6)
    {
        func_34(38);
    }
    if (unk_0xA26A9A07F761D8F8())
    {
        Global_2793044.f_436 = unk_0x0DB7F8294D73598B();
    }
}

int func_32(int iParam0)
{
    if (iParam0 == joaat("trailersmall2"))
    {
        return 1;
    }
    return 0;
}

void func_33(bool bParam0)
{
    if (bParam0 < 32)
    {
        if (BitTest(Global_2672505.f_61.f_1, bParam0))
        {
            unk_0x061B1200C95204CB(&(Global_2672505.f_61.f_1), bParam0);
        }
    }
    else if (BitTest(Global_2672505.f_61.f_2, (bParam0 - 32)))
    {
        unk_0x061B1200C95204CB(&(Global_2672505.f_61.f_2), (bParam0 - 32));
    }
}

void func_34(bool bParam0)
{
    if (bParam0 < 32)
    {
        if (!BitTest(Global_2672505.f_61.f_1, bParam0))
        {
            unk_0xECDAB41968FF21A8(&(Global_2672505.f_61.f_1), bParam0);
        }
    }
    else if (!BitTest(Global_2672505.f_61.f_2, (bParam0 - 32)))
    {
        unk_0xECDAB41968FF21A8(&(Global_2672505.f_61.f_2), (bParam0 - 32));
    }
}

bool func_35(int iParam0)
{
    if (iParam0 < 32)
    {
        return BitTest(Global_2672505.f_61.f_1, iParam0);
    }
    return BitTest(Global_2672505.f_61.f_2, (iParam0 - 32));
}

int func_36()
{
    if (Global_2359296[func_37() /*5568*/].f_681.f_2 >= 415)
    {
        Global_2359296[func_37() /*5568*/].f_681.f_2 = -1;
        return -1;
    }
    return Global_2359296[func_37() /*5568*/].f_681.f_2;
}

int func_37()
{
    int iVar0;
    
    iVar0 = 0;
    return iVar0;
}

int func_38(int iParam0)
{
    if (iParam0 != func_42())
    {
        if (func_40(iParam0, 1, 1))
        {
            if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
            {
                return func_39(Global_2657589[iParam0 /*466*/].f_321.f_7) == 22;
            }
        }
    }
    return 0;
}

int func_39(int iParam0)
{
    switch (iParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
            return 0;
            break;
        
        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
            return 1;
            break;
        
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
        case 41:
            return 2;
            break;
        
        case 43:
        case 42:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 59:
        case 98:
        case 99:
        case 100:
        case 112:
        case 113:
        case 114:
        case 115:
        case 119:
        case 116:
        case 118:
        case 120:
        case 121:
        case 126:
        case 127:
        case 134:
        case 135:
        case 136:
        case 137:
        case 138:
        case 139:
        case 140:
        case 141:
        case 142:
        case 143:
        case 144:
            return 3;
            break;
        
        case 70:
        case 71:
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
        case 78:
        case 79:
        case 80:
            return 4;
            break;
        
        case 81:
            return 5;
            break;
        
        case 82:
            return 6;
            break;
        
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
            return 7;
            break;
        
        case 88:
            return 8;
            break;
        
        case 89:
        case 90:
        case 91:
        case 92:
        case 93:
        case 94:
        case 95:
        case 96:
        case 97:
            return 9;
            break;
        
        case 101:
            return 10;
            break;
        
        case 102:
        case 103:
        case 104:
        case 105:
        case 106:
        case 107:
        case 108:
        case 109:
        case 110:
        case 111:
            return 11;
            break;
        
        case 117:
            return 12;
            break;
        
        case 122:
            return 13;
            break;
        
        case 123:
            return 14;
            break;
        
        case 124:
            return 15;
            break;
        
        case 125:
            return 16;
            break;
        
        case 128:
        case 129:
        case 130:
        case 131:
        case 132:
        case 133:
            return 17;
            break;
        
        case 145:
            return 18;
            break;
        
        case 146:
            return 19;
            break;
        
        case 147:
            return 20;
            break;
        
        case 148:
            return 21;
            break;
        
        case 149:
        case 151:
        case 153:
        case 152:
        case 150:
            return 22;
            break;
        
        case 154:
            return 23;
            break;
        
        case 155:
        case 156:
        case 157:
        case 158:
            return 24;
            break;
        
        case 159:
            return 25;
            break;
        
        case 160:
            return 26;
            break;
        
        case 161:
            return 27;
            break;
    }
    return -1;
}

int func_40(int iParam0, bool bParam1, bool bParam2)
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

int func_41(int iParam0)
{
    if (iParam0 != func_42() && func_40(iParam0, 1, 1))
    {
        return BitTest(Global_2657589[iParam0 /*466*/].f_321, 3);
    }
    return 0;
}

int func_42()
{
    return -1;
}

void func_43()
{
    if (Global_2672505.f_61.f_57)
    {
        if (unk_0x7DE17ACDD8BA2642(Global_2793044.f_299) && !unk_0x055111B11E6624FD(Global_2793044.f_299, 0))
        {
            if (!Global_2672505.f_61.f_21)
            {
                if (iLocal_28 == -1)
                {
                    if (unk_0x19D6457970A9D67E("PV_Slot", 3))
                    {
                        if (unk_0x2B6E67EB7FF3FD10(Global_2793044.f_299, "PV_Slot"))
                        {
                            iLocal_28 = unk_0xC2DE378329C46B2E(Global_2793044.f_299, "PV_Slot");
                        }
                    }
                }
                else if (Global_2359296[func_37() /*5568*/].f_681.f_2 != iLocal_28)
                {
                    if (!func_23(&uLocal_26))
                    {
                        func_9(&uLocal_26, 1, 0);
                    }
                    else if (func_22(&uLocal_26, 10000, 1))
                    {
                        func_31(1, 0, 1, 0, 0, 0, 0);
                    }
                }
            }
            else
            {
                func_20(&uLocal_26);
                iLocal_28 = -1;
            }
        }
        else
        {
            func_20(&uLocal_26);
            iLocal_28 = -1;
        }
    }
    else
    {
        func_20(&uLocal_26);
        iLocal_28 = -1;
    }
}

void func_44()
{
    if (func_52(unk_0x93E99A2DBCBA9CFA()) && func_46() == unk_0x93E99A2DBCBA9CFA())
    {
        if ((unk_0xB0C54EB77AA16156() || unk_0x47F8B78DC1737D5C()) || func_45())
        {
            func_21(&uLocal_23, 1, 0);
            Global_1949962 = 1;
            if (unk_0xB0C54EB77AA16156())
            {
                iLocal_25 = 30000;
            }
        }
    }
    if (func_23(&uLocal_23))
    {
        if (func_22(&uLocal_23, iLocal_25, 1))
        {
            func_20(&uLocal_23);
            Global_1949962 = 0;
            iLocal_25 = 10000;
        }
    }
}

bool func_45()
{
    return unk_0xD7863C03D2155822() != 0;
}

int func_46()
{
    return func_47(unk_0x93E99A2DBCBA9CFA());
}

int func_47(int iParam0)
{
    int iVar0;
    
    if (iParam0 == func_42())
    {
        return iParam0;
    }
    if (func_51(iParam0) != -1)
    {
        iVar0 = func_39(func_51(iParam0));
        if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
        {
            if (func_49(iParam0, 0))
            {
                return func_48(iParam0);
            }
            return iParam0;
        }
        else if (iVar0 == 3)
        {
            return func_42();
        }
        return Global_2657589[iParam0 /*466*/].f_321.f_10;
    }
    return func_42();
}

int func_48(int iParam0)
{
    if (iParam0 != func_42())
    {
        return Global_1894573[iParam0 /*608*/].f_10;
    }
    return func_42();
}

bool func_49(int iParam0, bool bParam1)
{
    if (!bParam1)
    {
        if (func_50(iParam0))
        {
            return 0;
        }
    }
    return Global_1894573[iParam0 /*608*/].f_10 != func_42();
}

int func_50(int iParam0)
{
    if (iParam0 != func_42())
    {
        if (Global_1894573[iParam0 /*608*/].f_10 != func_42())
        {
            return Global_1894573[iParam0 /*608*/].f_10 == iParam0;
        }
    }
    return 0;
}

int func_51(int iParam0)
{
    if (iParam0 != func_42())
    {
        if (func_40(iParam0, 1, 1))
        {
            return Global_2657589[iParam0 /*466*/].f_321.f_7;
        }
        else if (((Global_1575060 || Global_2635559.f_2680) && iParam0 == unk_0x93E99A2DBCBA9CFA()) && func_40(iParam0, 1, 0))
        {
            return Global_2657589[iParam0 /*466*/].f_321.f_7;
        }
    }
    return -1;
}

int func_52(int iParam0)
{
    if (iParam0 != func_42())
    {
        if (func_40(iParam0, 1, 1))
        {
            if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
            {
                return func_39(Global_2657589[iParam0 /*466*/].f_321.f_7) == 9;
            }
        }
    }
    return 0;
}

void func_53()
{
    if (!func_57() && !func_56())
    {
        if (!unk_0xCDE38D760466C9BA())
        {
            if (((func_54() && func_40(unk_0x93E99A2DBCBA9CFA(), 0, 1)) && unk_0x35DF833D93BCC488()) && unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
            {
                unk_0x3C282CBEB4925CBB();
            }
        }
    }
}

int func_54()
{
    if (func_55() == 0)
    {
        return 1;
    }
    return 0;
}

int func_55()
{
    return Global_1574632.f_18;
}

bool func_56()
{
    return unk_0x24B651D85CCE5EB4(joaat("animal_controller")) > 0;
}

bool func_57()
{
    return unk_0x24B651D85CCE5EB4(joaat("director_mode")) > 0;
}

void func_58()
{
    int iVar0;
    
    iLocal_22++;
    if (iLocal_22 == 30)
    {
        iLocal_22 = 0;
    }
    else
    {
        return;
    }
    if (((((((((!func_61(unk_0xC1A5EC5C986B98AD()) || !func_40(unk_0x93E99A2DBCBA9CFA(), 1, 1)) || unk_0x1758F8A8511510AB()) || unk_0x6B834C9B3C898679()) || !func_54()) || func_41(unk_0x93E99A2DBCBA9CFA())) || func_60(unk_0x93E99A2DBCBA9CFA())) || func_59(unk_0x93E99A2DBCBA9CFA())) || Global_2672505.f_3541) || !unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
    {
        return;
    }
    if (unk_0x6DFDDBD2D0067A98(unk_0xC1A5EC5C986B98AD()))
    {
        iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
        if (func_61(iVar0))
        {
            if (!unk_0xC59A2EB21A3834E2(iVar0))
            {
                if (unk_0x732EE9FDBC05BFF9(iVar0))
                {
                }
                else
                {
                    unk_0xA598BD64B909AA08(iVar0, 0f);
                    unk_0x226C3A30511D5DC4(iVar0, 0);
                    unk_0x03879CC8EF9E3635(iVar0, 0, 0, 0, 0, 0, 0, 1, 0);
                }
            }
        }
    }
}

int func_59(int iParam0)
{
    if (iParam0 != func_42())
    {
        if (func_40(iParam0, 1, 1))
        {
            return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
        }
        else if ((Global_1575060 && iParam0 == unk_0x93E99A2DBCBA9CFA()) && func_40(iParam0, 1, 0))
        {
            return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
        }
    }
    return 0;
}

int func_60(int iParam0)
{
    if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 14))
    {
        return 1;
    }
    if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 11))
    {
        return 1;
    }
    return 0;
}

int func_61(int iParam0)
{
    if (unk_0x7DE17ACDD8BA2642(iParam0))
    {
        if (!unk_0x055111B11E6624FD(iParam0, 0))
        {
            return 1;
        }
    }
    return 0;
}

void func_62()
{
    if (!func_40(unk_0x93E99A2DBCBA9CFA(), 1, 1))
    {
        return;
    }
    if (!iLocal_21)
    {
        if ((Global_1950108.f_513 != -1 && unk_0x4310A0DB886F9FED(&(Global_23270.f_1), "MP_MAN_VEH1")) && func_65() == 9)
        {
            iLocal_21 = 1;
        }
    }
    else if (!func_64())
    {
        if (func_63())
        {
            unk_0x8B438725D591ED78(2, 51, 1);
            unk_0x8B438725D591ED78(2, 52, 1);
        }
        else if (func_61(Global_2793044.f_299))
        {
            if (!func_63())
            {
                func_31(1, 0, 1, 0, 0, 0, 0);
            }
        }
        else
        {
            iLocal_21 = 0;
            StringCopy(&(Global_23270.f_1), "", 16);
        }
    }
}

int func_63()
{
    if (func_35(2) || func_35(1))
    {
        return 1;
    }
    return 0;
}

bool func_64()
{
    return unk_0xA5E11AF0A2B928C1() <= Global_23270.f_6321 + 100;
}

int func_65()
{
    return func_39(Global_1950108.f_513);
}

void func_66()
{
    var uVar0;
    
    if (!func_40(unk_0x93E99A2DBCBA9CFA(), 1, 1))
    {
        return;
    }
    if (func_59(unk_0x93E99A2DBCBA9CFA()) || func_72(unk_0x93E99A2DBCBA9CFA()))
    {
        return;
    }
    if (func_69() || func_68("CMOD_TRIG", &Global_44195))
    {
        if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
        {
            uVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
            if (func_67(unk_0xC1A5EC5C986B98AD(), 0) == -1)
            {
                if (!unk_0x9CFCDD9C62B56708(uVar0, -2, 0))
                {
                    unk_0x8B438725D591ED78(0, 75, 1);
                }
            }
        }
    }
}

int func_67(int iParam0, int iParam1)
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

var func_68(char* sParam0, var uParam1)
{
    unk_0x56C9BC27C0FF68D7(sParam0);
    unk_0x48849374B34BB7B9(uParam1);
    return unk_0x6A92D111B5409879(0);
}

int func_69()
{
    if (((((func_70(39, 5, 0) || func_70(40, 5, 0)) || func_70(41, 5, 0)) || func_70(42, 5, 0)) || func_70(43, 5, 0)) || func_70(44, 5, 0))
    {
        return 1;
    }
    return 0;
}

int func_70(int iParam0, int iParam1, bool bParam2)
{
    if (iParam0 == -1)
    {
        return 0;
    }
    if (bParam2)
    {
        return BitTest(Global_100733.f_1407[iParam0], iParam1);
    }
    else if (unk_0xA26A9A07F761D8F8())
    {
        if (Global_32163 == 0)
        {
            return BitTest(func_14(func_71(iParam0), -1, 0), iParam1);
        }
    }
    else
    {
        return BitTest(Global_113648.f_668[iParam0], iParam1);
    }
    return 0;
}

int func_71(int iParam0)
{
    switch (iParam0)
    {
        case 0:
            return 828;
            break;
        
        case 1:
            return 829;
            break;
        
        case 2:
            return 830;
            break;
        
        case 3:
            return 831;
            break;
        
        case 4:
            return 832;
            break;
        
        case 5:
            return 833;
            break;
        
        case 6:
            return 834;
            break;
        
        case 7:
            return 835;
            break;
        
        case 8:
            return 836;
            break;
        
        case 9:
            return 837;
            break;
        
        case 10:
            return 838;
            break;
        
        case 11:
            return 839;
            break;
        
        case 12:
            return 840;
            break;
        
        case 13:
            return 841;
            break;
        
        case 14:
            return 842;
            break;
        
        case 15:
            return 844;
            break;
        
        case 16:
            return 845;
            break;
        
        case 17:
            return 846;
            break;
        
        case 18:
            return 847;
            break;
        
        case 19:
            return 848;
            break;
        
        case 20:
            return 849;
            break;
        
        case 21:
            return 850;
            break;
        
        case 22:
            return 851;
            break;
        
        case 23:
            return 852;
            break;
        
        case 24:
            return 853;
            break;
        
        case 25:
            return 854;
            break;
        
        case 26:
            return 855;
            break;
        
        case 27:
            return 856;
            break;
        
        case 28:
            return 857;
            break;
        
        case 29:
            return 858;
            break;
        
        case 30:
            return 859;
            break;
        
        case 31:
            return 860;
            break;
        
        case 32:
            return 861;
            break;
        
        case 33:
            return 862;
            break;
        
        case 34:
            return 863;
            break;
        
        case 35:
            return 864;
            break;
        
        case 36:
            return 865;
            break;
        
        case 37:
            return 866;
            break;
        
        case 38:
            return 867;
            break;
        
        case 39:
            return 868;
            break;
        
        case 40:
            return 872;
            break;
        
        case 41:
            return 873;
            break;
        
        case 42:
            return 874;
            break;
        
        case 43:
            return 875;
            break;
        
        case 44:
            return 12385;
            break;
        
        case 45:
            return 3811;
            break;
        
        case 46:
            return 5386;
            break;
        
        case 47:
            return 6158;
            break;
        
        case 48:
            return 7235;
            break;
        
        case 49:
            return 7881;
            break;
        
        case 52:
            return 8917;
            break;
        
        case 50:
            return 8268;
            break;
        
        case 51:
            return 8270;
            break;
        
        case 53:
            return 9557;
            break;
        
        case 54:
            return 9633;
            break;
        
        case 55:
            return 9848;
            break;
        
        case 56:
            return 9916;
            break;
        
        case 57:
            return 9918;
            break;
        
        default:
            break;
    }
    return 14192;
}

int func_72(int iParam0)
{
    if (iParam0 > -1)
    {
        if (Global_2657589[iParam0 /*466*/].f_246 > -1)
        {
            if (func_73(Global_2657589[iParam0 /*466*/].f_246) == 5)
            {
                return 1;
            }
        }
        if (BitTest(Global_2657589[iParam0 /*466*/].f_199, 4))
        {
            return 1;
        }
    }
    return 0;
}

int func_73(int iParam0)
{
    switch (iParam0)
    {
        case -1:
            return 6;
            break;
        
        case 0:
            return 0;
            break;
        
        case 1:
            return 0;
            break;
        
        case 2:
            return 0;
            break;
        
        case 3:
            return 0;
            break;
        
        case 4:
            return 0;
            break;
        
        case 5:
            return 0;
            break;
        
        case 6:
            return 0;
            break;
        
        case 50:
            return 0;
            break;
        
        case 7:
            return 1;
            break;
        
        case 8:
            return 1;
            break;
        
        case 9:
            return 1;
            break;
        
        case 10:
            return 1;
            break;
        
        case 11:
            return 1;
            break;
        
        case 12:
            return 1;
            break;
        
        case 13:
            return 1;
            break;
        
        case 14:
            return 1;
            break;
        
        case 15:
            return 1;
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
            return 2;
            break;
        
        case 23:
            return 2;
            break;
        
        case 24:
            return 2;
            break;
        
        case 25:
            return 2;
            break;
        
        case 26:
            return 2;
            break;
        
        case 27:
            return 2;
            break;
        
        case 28:
            return 3;
            break;
        
        case 29:
            return 3;
            break;
        
        case 30:
            return 3;
            break;
        
        case 31:
            return 3;
            break;
        
        case 32:
            return 3;
            break;
        
        case 33:
            return 3;
            break;
        
        case 34:
            return 3;
            break;
        
        case 35:
            return 3;
            break;
        
        case 36:
            return 3;
            break;
        
        case 37:
            return 3;
            break;
        
        case 38:
            return 3;
            break;
        
        case 39:
            return 4;
            break;
        
        case 40:
            return 4;
            break;
        
        case 41:
            return 4;
            break;
        
        case 42:
            return 4;
            break;
        
        case 43:
            return 4;
            break;
        
        case 44:
            return 4;
            break;
        
        case 45:
            return 5;
            break;
        
        case 46:
            return 3;
            break;
        
        case 47:
            return 3;
            break;
        
        case 48:
            return 3;
            break;
        
        case 49:
            return 3;
            break;
        
        case 52:
            return 3;
            break;
        
        case 51:
            return 1;
            break;
        
        case 53:
            return 3;
            break;
        
        case 54:
            return 2;
            break;
        
        case 55:
            return 1;
            break;
        
        case 56:
            return 3;
            break;
        
        case 57:
            return 1;
            break;
    }
    return 6;
}

void func_74()
{
    var uVar0;
    int iVar1;
    
    if ((func_40(unk_0x93E99A2DBCBA9CFA(), 1, 1) && func_79(unk_0x93E99A2DBCBA9CFA())) && unk_0xACD39355028D39EF(unk_0xC1A5EC5C986B98AD()))
    {
        uVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
        if (func_61(uVar0) && func_67(unk_0xC1A5EC5C986B98AD(), 0) == -1)
        {
            iVar1 = unk_0x504B9BB48D41C264(uVar0);
            if ((((iVar1 == joaat("openwheel1") || iVar1 == joaat("openwheel2")) || iVar1 == joaat("formula")) || iVar1 == joaat("formula2")) || iVar1 == joaat("oppressor2"))
            {
                if (!iLocal_20)
                {
                    iLocal_20 = 1;
                    func_78(45, 1, 1);
                }
                unk_0x8B438725D591ED78(2, 51, 1);
                unk_0x8B438725D591ED78(2, 52, 1);
                Global_44199 = 1;
                if (unk_0xE7D67251D717D594() && !func_77("CMOD_FTRIG"))
                {
                    func_76("CMOD_FTRIG");
                }
            }
        }
    }
    else if (iLocal_20)
    {
        iLocal_20 = 0;
        func_75(45, 1, 1);
        if (func_77("CMOD_FTRIG"))
        {
            unk_0xCD3C8E1022864F65(1);
        }
    }
}

void func_75(int iParam0, bool bParam1, bool bParam2)
{
    var uVar0;
    
    if (iParam0 == -1)
    {
        return;
    }
    if (bParam2)
    {
        unk_0x061B1200C95204CB(&(Global_100733.f_1407[iParam0]), iParam1);
    }
    else if (unk_0xA26A9A07F761D8F8())
    {
        if (Global_32163 == 0)
        {
            uVar0 = func_14(func_71(iParam0), -1, 0);
            unk_0x061B1200C95204CB(&uVar0, bParam1);
            func_11(func_71(iParam0), uVar0, -1, 1, 0);
        }
    }
    else
    {
        unk_0x061B1200C95204CB(&(Global_113648.f_668[iParam0]), bParam1);
    }
}

void func_76(char* sParam0)
{
    unk_0x476CC3711883B966(sParam0);
    unk_0xBC8969B539DCA239(0, 1, 1, -1);
}

bool func_77(char* sParam0)
{
    unk_0x56C9BC27C0FF68D7(sParam0);
    return unk_0x6A92D111B5409879(0);
}

void func_78(int iParam0, bool bParam1, bool bParam2)
{
    var uVar0;
    
    if (iParam0 == -1)
    {
        return;
    }
    if (bParam2)
    {
        unk_0xECDAB41968FF21A8(&(Global_100733.f_1407[iParam0]), iParam1);
    }
    else if (unk_0xA26A9A07F761D8F8())
    {
        if (Global_32163 == 0)
        {
            uVar0 = func_14(func_71(iParam0), -1, 0);
            unk_0xECDAB41968FF21A8(&uVar0, bParam1);
            func_11(func_71(iParam0), uVar0, -1, 1, 0);
        }
    }
    else
    {
        unk_0xECDAB41968FF21A8(&(Global_113648.f_668[iParam0]), bParam1);
    }
}

int func_79(int iParam0)
{
    if (iParam0 == func_42())
    {
        return 0;
    }
    if (func_52(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10 == iParam0)
    {
        return 1;
    }
    return 0;
}

void func_80()
{
    if ((Global_112594 && unk_0x24B651D85CCE5EB4(joaat("director_mode")) <= 0) && func_54())
    {
        unk_0xCD15D738E37D6F71();
    }
}

void func_81()
{
    int iVar0;
    
    if (!iLocal_4)
    {
        if (Global_1836395)
        {
            iVar0 = func_82(joaat("mpply_char_exploit_level"));
            if (iVar0 >= 4)
            {
                Global_262145.f_10593 = 1;
            }
            iLocal_4 = 1;
        }
    }
    else if (!Global_1836395)
    {
        iLocal_4 = 0;
    }
}

int func_82(int iParam0)
{
    var uVar0;
    var uVar1;
    
    uVar0 = iParam0;
    if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
    {
        return uVar1;
    }
    return 0;
}

void func_83()
{
    if (!iLocal_3)
    {
        if (Global_1836395)
        {
            if (func_85() || func_84())
            {
                Global_262145.f_20169 = 1;
            }
            else
            {
                Global_262145.f_20169 = 0;
            }
            iLocal_3 = 1;
        }
    }
    else if (!Global_1836395)
    {
        iLocal_3 = 0;
    }
}

int func_84()
{
    int iVar0;
    var uVar1[4];
    int iVar2;
    
    iVar0 = func_82(joaat("mpply_char_peak_exploit_level"));
    if (iVar0 < Global_262145.f_10702)
    {
        return 0;
    }
    uVar1[0] = func_82(joaat("mpply_prevseasonexploitlevel"));
    uVar1[1] = func_82(joaat("mpply_prevseason2exploitlevel"));
    uVar1[2] = func_82(joaat("mpply_prevseason3exploitlevel"));
    uVar1[3] = func_82(joaat("mpply_prevseason4exploitlevel"));
    iVar2 = 0;
    while (iVar2 < (Global_262145.f_10698 - 1))
    {
        if (uVar1[iVar2] < Global_262145.f_10702)
        {
            return 0;
        }
        iVar2++;
    }
    return 1;
}

int func_85()
{
    int iVar0;
    var uVar1[4];
    int iVar2;
    
    iVar0 = func_82(joaat("mpply_char_peak_exploit_level"));
    if (iVar0 < Global_262145.f_10701)
    {
        return 0;
    }
    uVar1[0] = func_82(joaat("mpply_prevseasonexploitlevel"));
    uVar1[1] = func_82(joaat("mpply_prevseason2exploitlevel"));
    uVar1[2] = func_82(joaat("mpply_prevseason3exploitlevel"));
    uVar1[3] = func_82(joaat("mpply_prevseason4exploitlevel"));
    iVar2 = 0;
    while (iVar2 < (Global_262145.f_10697 - 1))
    {
        if (uVar1[iVar2] < Global_262145.f_10701)
        {
            return 0;
        }
        iVar2++;
    }
    return 1;
}

void func_86()
{
    int iVar0;
    
    if (unk_0xCC17806DB0C41C19())
    {
        iVar0 = 0;
        while (iVar0 < Global_1853910)
        {
            unk_0xECDAB41968FF21A8(&(Global_1853910[iVar0 /*862*/].f_799), true);
            iVar0++;
        }
    }
}

void func_87()
{
    if (Global_262145.f_10677 != 120)
    {
        Global_262145.f_10677 = 120;
    }
}

void func_88()
{
    if (iLocal_1)
    {
        unk_0xF4621DEB617A5113(0f, 0.23f);
        unk_0x4EC989440A6E11DD(255, 255, 255, 255);
        func_89(0.69f, 0.06f, "STRING", sLocal_0);
    }
    if (!iLocal_1)
    {
        if (unk_0xFEE065E56A9BEF3F())
        {
            switch (iLocal_2)
            {
                case 0:
                    if (unk_0x87644B1F984197FE(2, 189))
                    {
                        iLocal_2++;
                        unk_0xC1B1E9A034A63A62(0);
                    }
                    break;
                
                case 1:
                    if (unk_0x87644B1F984197FE(2, 190))
                    {
                        iLocal_2++;
                        unk_0xC1B1E9A034A63A62(0);
                    }
                    else if (unk_0x83666F9FB8FEBD4B() > 2000)
                    {
                        iLocal_2 = 0;
                    }
                    break;
                
                case 2:
                    if (unk_0x87644B1F984197FE(2, 189))
                    {
                        iLocal_2++;
                        unk_0xC1B1E9A034A63A62(0);
                    }
                    else if (unk_0x83666F9FB8FEBD4B() > 2000)
                    {
                        iLocal_2 = 0;
                    }
                    break;
                
                case 3:
                    if (unk_0x87644B1F984197FE(2, 190))
                    {
                        iLocal_2++;
                        unk_0xC1B1E9A034A63A62(0);
                    }
                    else if (unk_0x83666F9FB8FEBD4B() > 2000)
                    {
                        iLocal_2 = 0;
                    }
                    break;
                
                case 4:
                    if (unk_0x87644B1F984197FE(2, 188))
                    {
                        iLocal_1 = 1;
                        unk_0xC1B1E9A034A63A62(0);
                    }
                    else if (unk_0x83666F9FB8FEBD4B() > 2000)
                    {
                        iLocal_2 = 0;
                    }
                    break;
                }
        }
    }
    else if (unk_0xFEE065E56A9BEF3F())
    {
        switch (iLocal_2)
        {
            case 0:
                if (unk_0x87644B1F984197FE(2, 188))
                {
                    iLocal_2++;
                    unk_0xC1B1E9A034A63A62(0);
                }
                break;
            
            case 1:
                if (unk_0x87644B1F984197FE(2, 190))
                {
                    iLocal_2++;
                    unk_0xC1B1E9A034A63A62(0);
                }
                else if (unk_0x83666F9FB8FEBD4B() > 2000)
                {
                    iLocal_2 = 0;
                }
                break;
            
            case 2:
                if (unk_0x87644B1F984197FE(2, 189))
                {
                    iLocal_2++;
                    unk_0xC1B1E9A034A63A62(0);
                }
                else if (unk_0x83666F9FB8FEBD4B() > 2000)
                {
                    iLocal_2 = 0;
                }
                break;
            
            case 3:
                if (unk_0x87644B1F984197FE(2, 190))
                {
                    iLocal_2++;
                    unk_0xC1B1E9A034A63A62(0);
                }
                else if (unk_0x83666F9FB8FEBD4B() > 2000)
                {
                    iLocal_2 = 0;
                }
                break;
            
            case 4:
                if (unk_0x87644B1F984197FE(2, 189))
                {
                    iLocal_1 = 0;
                    unk_0xC1B1E9A034A63A62(0);
                }
                else if (unk_0x83666F9FB8FEBD4B() > 2000)
                {
                    iLocal_2 = 0;
                }
                break;
            }
    }
}

void func_89(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
    unk_0x1AFC19685A6AF4A9(sParam2);
    unk_0x700F38A62DF4BE36(sParam3);
    unk_0x8E03B3A2F624EF8B(fParam0, fParam1, 0);
}

bool func_90()
{
    return unk_0x7681F180D7938DA8(-1762644250);
}

