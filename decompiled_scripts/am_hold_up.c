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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
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
	struct<75> Local_85 = { 0, 0, 3, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1101004800, 0 } ;
	struct<10> Local_160[32];
	struct<54> Local_481 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	int iLocal_537 = 0;
	char* sLocal_538 = NULL;
	int iLocal_539 = 0;
	struct<3> Local_540 = { 0, 0, 0 } ;
	struct<3> Local_543 = { 0, 0, 0 } ;
	float fLocal_546 = 0f;
	int iLocal_547 = 0;
	struct<3> Local_548 = { 0, 0, 0 } ;
	struct<3> Local_551 = { 0, 0, 0 } ;
	int iLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	struct<3> Local_564 = { 0, 0, 0 } ;
	var uLocal_567 = 0;
	struct<3> Local_568 = { 0, 0, 0 } ;
	var uLocal_571 = 0;
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	struct<3> Local_584 = { 0, 0, 0 } ;
	struct<3> Local_587 = { 0, 0, 0 } ;
	struct<3> Local_590 = { 0, 0, 0 } ;
	struct<3> Local_593 = { 0, 0, 0 } ;
	float fLocal_596 = 0f;
	struct<3> Local_597 = { 0, 0, 0 } ;
	struct<3> Local_600 = { 0, 0, 0 } ;
	float fLocal_603 = 0f;
	var uLocal_604 = 16;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	int iLocal_769[5] = { 0, 0, 0, 0, 0 };
	int iLocal_775[5] = { 0, 0, 0, 0, 0 };
	float fLocal_781 = 0f;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	int iLocal_797 = 0;
	int iLocal_798 = 0;
	int iLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	int iLocal_802 = 0;
	int iLocal_803 = 0;
	int iLocal_804 = 0;
	struct<3> Local_805 = { 0, 0, 0 } ;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_539 = joaat("mp_m_shopkeep_01");
	iLocal_547 = -1;
	iLocal_554 = -1;
	iLocal_572 = joaat("prop_till_01");
	iLocal_573 = unk_0xF2DB717A73826179(Global_262145.f_2432);
	iLocal_574 = unk_0xF2DB717A73826179(Global_262145.f_2428) + 1;
	iLocal_575 = 1;
	if (unk_0xA26A9A07F761D8F8())
	{
		if (!func_481(ScriptParam_0))
		{
			func_476();
		}
		if (func_475(1))
		{
			func_463(unk_0x93E99A2DBCBA9CFA(), 0, 98816, 0);
		}
	}
	while (true)
	{
		func_462();
		if (func_454())
		{
			func_476();
		}
		func_443();
		if (BitTest(Local_85.f_25, 6))
		{
			if (func_475(1))
			{
				func_463(unk_0x93E99A2DBCBA9CFA(), 1, 0, 0);
				func_440();
				unk_0x061B1200C95204CB(&(Local_481.f_53), 7);
				func_439();
			}
		}
		switch (func_438(unk_0xD378D2332270959A()))
		{
			case 0:
				unk_0x28818732C8F0F80E("mp_am_hold_up");
				if (unk_0x2BBF749E555360DC("mp_am_hold_up"))
				{
					if (func_428())
					{
						unk_0xEBA1698B77FD0A86(func_427(Local_481.f_0), 0);
						if (unk_0x7E2E2E8A648611F4(Local_85.f_0))
						{
							if (func_426() > 0)
							{
								if (!func_425(Local_85.f_0))
								{
									func_424(&uLocal_604, 3, unk_0x0DB8386015E986B7(Local_85.f_0), &(Local_85.f_48), 1, 0);
									func_423();
								}
								unk_0xECDAB41968FF21A8(&(Local_481.f_52), 22);
								Global_1983438 = Local_481.f_0;
								Local_160[unk_0xD378D2332270959A() /*10*/].f_4 = 2;
							}
						}
					}
				}
				if (func_426() == 6)
				{
					Local_160[unk_0xD378D2332270959A() /*10*/].f_4 = 5;
				}
				break;
			
			case 2:
				func_271(&Local_481, Local_548, Local_551, &Local_85, &(Local_160[unk_0xD378D2332270959A() /*10*/]), unk_0x9DC9E896F189AAA5(unk_0x0DB8386015E986B7(Local_85.f_0), Local_597, Local_600, uLocal_603, 0, 1, 0), 0);
				func_264();
				if (func_426() == 2)
				{
					func_134();
				}
				else if (func_426() == 6)
				{
					Local_160[unk_0xD378D2332270959A() /*10*/].f_4 = 5;
				}
				if (!unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_587, 30f, 30f, 30f, 0, 1, 0))
				{
					Local_160[unk_0xD378D2332270959A() /*10*/].f_4 = 6;
				}
				break;
			
			case 5:
				func_133(&(Local_85.f_71));
				if (func_132(&(Local_85.f_71)))
				{
					Local_160[unk_0xD378D2332270959A() /*10*/].f_4 = 6;
				}
				break;
			
			case 4:
				Local_160[unk_0xD378D2332270959A() /*10*/].f_4 = 6;
			
			case 6:
				func_53();
				func_476();
				break;
		}
		if (unk_0xE85391CF212DE622())
		{
			switch (func_426())
			{
				case 0:
					if (!BitTest(Local_481.f_52, 16))
					{
						func_51(func_52(0));
						func_51(func_52(1));
						func_51(func_52(2));
						unk_0x28818732C8F0F80E("mp_am_hold_up");
						if (unk_0x2BBF749E555360DC("mp_am_hold_up"))
						{
							if (func_428())
							{
								unk_0xF82BC5193AF62796(Local_548, 1.5f, 0, 1, 0, 1);
								unk_0xF82BC5193AF62796(Local_543, 1.5f, 0, 1, 0, 1);
								unk_0xECDAB41968FF21A8(&(Local_481.f_52), 16);
							}
						}
					}
					else if (func_49())
					{
						Local_85.f_13 = 2;
					}
					break;
				
				case 2:
					func_48();
					func_45();
					func_29();
					func_28();
					func_21();
					func_20();
					func_12();
					func_11();
					if (func_4())
					{
						func_1();
						Local_85.f_13 = 6;
					}
					break;
				
				case 6:
					func_1();
					break;
				}
		}
	}
}

void func_1()
{
	if (unk_0x7E2E2E8A648611F4(Local_85.f_14))
	{
		if (func_3(Local_85.f_14))
		{
			if (unk_0xDC116D955A63BDBE(unk_0xDCE61FCD9D7F205E(Local_85.f_14)))
			{
				unk_0xA81AA70A4D25E140(unk_0xDCE61FCD9D7F205E(Local_85.f_14), 1, 1);
				func_2(&(Local_85.f_14));
			}
		}
	}
}

void func_2(var uParam0)
{
	var uVar0;
	
	if (unk_0x5E6D8811A0BD0954(*uParam0))
	{
		uVar0 = unk_0x177F7E959D2D410B(*uParam0);
		unk_0xE1D0FB923395DF66(&uVar0);
	}
}

int func_3(var uParam0)
{
	if (unk_0x7E2E2E8A648611F4(uParam0))
	{
		unk_0xF05A5F7FFA0C5E2D(uParam0);
		return unk_0xFE2AB315FD8C7A6F(uParam0);
	}
	return 0;
}

int func_4()
{
	if (func_5())
	{
		return 1;
	}
	return 0;
}

int func_5()
{
	if (BitTest(Local_85.f_25, 2))
	{
		return 1;
	}
	if (BitTest(Local_85.f_25, 3))
	{
		return 1;
	}
	if (!func_10())
	{
		if ((BitTest(Local_85.f_25, 11) || BitTest(Local_85.f_25, 19)) || (BitTest(Local_85.f_25, 9) && !BitTest(Local_85.f_25, 20)))
		{
			func_6(Local_481.f_50, 1, func_7());
			return 1;
		}
		if (BitTest(Local_85.f_25, 18))
		{
			func_6(Local_481.f_50, 1, func_7());
			return 1;
		}
	}
	if (BitTest(Local_85.f_25, 18))
	{
		if (!BitTest(Local_85.f_26, 7))
		{
			func_6(Local_481.f_50, 1, func_7());
			unk_0xECDAB41968FF21A8(&(Local_85.f_26), 7);
		}
	}
	return 0;
}

void func_6(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 1110452930;
	Var0.f_1 = unk_0x93E99A2DBCBA9CFA();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		unk_0x46F55A5B9F053761(1, &Var0, 4, iParam2);
	}
}

int func_7()
{
	return func_8(unk_0x41877C61D8E004AE(func_9(), -1, 0));
}

int func_8(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xECDAB41968FF21A8(&uVar0, iParam0);
	}
	return uVar0;
}

char* func_9()
{
	switch (Global_2697019)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_10()
{
	if ((BitTest(Local_85.f_25, 13) || BitTest(Local_85.f_25, 27)) || BitTest(Local_85.f_25, 28))
	{
		return 1;
	}
	return 0;
}

void func_11()
{
	var uVar0;
	
	if (!BitTest(Local_85.f_25, 21))
	{
		if (func_425(Local_85.f_0))
		{
			Local_85.f_74 = unk_0x88B3E6B9F291E29C(Local_85.f_0, &uVar0);
			unk_0xECDAB41968FF21A8(&(Local_85.f_25), 21);
		}
	}
	if (!BitTest(Local_85.f_25, 19))
	{
		if (BitTest(Local_85.f_25, 10) && Local_85.f_39 <= 0f)
		{
			unk_0xECDAB41968FF21A8(&(Local_85.f_25), 19);
		}
	}
	if (!BitTest(Local_85.f_26, 17))
	{
		if (BitTest(Local_85.f_25, 20))
		{
			if (func_3(Local_85.f_14))
			{
				unk_0x7B20BBC4C133A1DF(unk_0xDCE61FCD9D7F205E(Local_85.f_14), 0, 0);
				unk_0xECDAB41968FF21A8(&(Local_85.f_26), 17);
			}
		}
	}
	if (!BitTest(Local_85.f_25, 6))
	{
		if (Global_2793044.f_8 == 1)
		{
			unk_0xECDAB41968FF21A8(&(Local_85.f_25), 6);
			unk_0xECDAB41968FF21A8(&(Local_85.f_25), 16);
		}
	}
}

int func_12()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE85391CF212DE622() || !BitTest(Local_85.f_27, 0))
	{
		return 0;
	}
	if (Local_85.f_68 != 6)
	{
		if (Local_85.f_68 > 0 && func_425(Local_85.f_16))
		{
			Local_85.f_68 = 6;
			return 0;
		}
		switch (Local_85.f_68)
		{
			case 0:
				if (!func_18(&uLocal_794, 10000, 0))
				{
					iVar0 = unk_0x2F443B9EC01A0028(Local_597, 20f, 20f, 20f, -1);
					if (!unk_0x66599E73DBA5A850(iVar0))
					{
						if (!unk_0x1AFE963DA61006ED(iVar0))
						{
							iVar1 = unk_0x504B9BB48D41C264(iVar0);
							if (((((((iVar1 != joaat("mp_m_freemode_01") && iVar1 != joaat("mp_f_freemode_01")) && !unk_0x06EADAF3FF0C6092(Local_597, 25f, 25f, 25f)) && !unk_0x1C4E4DC1EFE24DF1(iVar0, Local_584, 1f, 1f, 2f, 0, 1, 0)) && !unk_0x2D1125ABF6C8F8C4(iVar0, 7)) && !unk_0x3C3D6D026CF7F51B(iVar0, 1)) && unk_0xF57206F53DF095CE(iVar0)) && func_17(iVar1))
							{
								unk_0xBDB0FB8EEE50C9CD(iVar0);
								if (unk_0xB6B927AA8C3DAD36(iVar0))
								{
									if (func_16(&(Local_85.f_16), iVar0, 1, 0))
									{
										unk_0x44EBC7775DAE912E(unk_0x0DB8386015E986B7(Local_85.f_16), joaat("weapon_pistol"), 25000, 0);
										unk_0x71A535529C1CA5DF(unk_0x0DB8386015E986B7(Local_85.f_16), 1);
										Local_85.f_68 = 1;
										unk_0xECDAB41968FF21A8(&(Local_85.f_27), 1);
										unk_0x8386356641D0DED1(unk_0x0DB8386015E986B7(Local_85.f_16), Global_1837213);
										unk_0x8F758E95FCF28E36(unk_0x0DB8386015E986B7(Local_85.f_16), 2);
										unk_0xED2BD879E739E86B(unk_0x0DB8386015E986B7(Local_85.f_16), unk_0xF2DB717A73826179((200f * Global_262145.f_165)), 0);
										func_424(&uLocal_604, 4, unk_0x0DB8386015E986B7(Local_85.f_16), "StoreHero", 1, 0);
										unk_0x2B8574FAEA21141B(unk_0x0DB8386015E986B7(Local_85.f_16), func_15(), 0, 1);
									}
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if ((BitTest(Local_85.f_25, 9) || BitTest(Local_85.f_25, 5)) || BitTest(Local_85.f_25, 4))
				{
					Local_85.f_68 = 2;
				}
				break;
			
			case 2:
				if (func_18(&(Local_85.f_69), 3000, 0) || (unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_16), joaat("script_task_go_to_entity")) != 0 && unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_16), joaat("script_task_go_to_entity")) != 1))
				{
					func_14(&(Local_85.f_69));
					Local_85.f_68 = 3;
				}
				break;
			
			case 3:
				if (((BitTest(Local_85.f_25, 5) || BitTest(Local_85.f_27, 8)) || BitTest(Local_85.f_27, 9)) || func_18(&(Local_85.f_69), 5000, 0))
				{
					if (func_13() || func_18(&(Local_85.f_69), 5000, 0))
					{
						Local_85.f_68 = 4;
					}
					else
					{
						Local_85.f_68 = 5;
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
			}
	}
	return 1;
}

int func_13()
{
	if (BitTest(unk_0x15A88CFAAFFC6C4B(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_14(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_15()
{
	int iVar0;
	
	iVar0 = unk_0x15A88CFAAFFC6C4B(0, 100);
	if (iVar0 < 30)
	{
		return "WORLD_HUMAN_SMOKING";
	}
	if (iVar0 >= 30 && iVar0 < 70)
	{
		return "WORLD_HUMAN_HANG_OUT_STREET";
	}
	return "WORLD_HUMAN_STAND_MOBILE";
}

int func_16(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	unk_0x85BAE84748AD1A23(iParam1, bParam2, iParam3);
	*uParam0 = unk_0x1CFC8878ACB6B610(iParam1);
	if (unk_0x7E2E2E8A648611F4(*uParam0))
	{
		if (bParam2)
		{
			unk_0x6CD289A8A1000001(*uParam0, 1);
		}
		return 1;
	}
	return 0;
}

int func_17(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01")) || iParam0 == joaat("s_m_y_casino_01"))
	{
		return 0;
	}
	return 1;
}

int func_18(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_19(uParam0, bParam2, 0);
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

void func_19(var uParam0, bool bParam1, bool bParam2)
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

void func_20()
{
	if (Local_85.f_32 == 0)
	{
		if (Local_85.f_3 >= 2 && Local_85.f_3 != 9)
		{
			Local_85.f_32 = unk_0x8A253385690D4727(101, unk_0xC1A5EC5C986B98AD(), 60000f);
		}
	}
}

void func_21()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!BitTest(Local_85.f_1, 5))
	{
		if (Local_85.f_43 > 0)
		{
			func_25();
			if (!BitTest(Local_85.f_1, 5))
			{
				return;
			}
		}
	}
	if (BitTest(Local_85.f_1, 1))
	{
		if (Local_85.f_2 == 3 && !BitTest(Local_85.f_25, 9))
		{
			Local_85.f_2 = 0;
		}
		unk_0x061B1200C95204CB(&(Local_85.f_1), 1);
	}
	switch (Local_85.f_2)
	{
		case 0:
			if ((((func_3(Local_85.f_0) && !func_425(Local_85.f_0)) && func_3(Local_85.f_17[Local_85.f_28])) && Local_85.f_3 != 8) && Local_85.f_3 != 7)
			{
				if (!unk_0x48A4D45B3B4CEFFD(unk_0x0DB8386015E986B7(Local_85.f_0)))
				{
					if (BitTest(Local_85.f_25, 9) || BitTest(Local_85.f_1, 4))
					{
						Local_85.f_2 = 2;
						return;
					}
					if (!iLocal_537)
					{
						unk_0x2CD3E39D98CC3FA9(unk_0x0DB8386015E986B7(Local_85.f_0), Local_85.f_44, 1600);
						iLocal_537 = 1;
					}
					if (func_18(&uLocal_784, 100, 0))
					{
						fVar0 = unk_0xD850DD08D5434072(unk_0x0DB8386015E986B7(Local_85.f_0));
						fVar1 = (Local_85.f_44 - 10f);
						fVar2 = (Local_85.f_44 + 10f);
						if (fVar1 < 0f)
						{
							fVar2 = ((Local_85.f_44 - 10f) + 360f);
							fVar1 = ((Local_85.f_44 + 10f) + 360f);
						}
						else if (fVar2 >= 360f)
						{
							fVar2 = ((Local_85.f_44 - 10f) - 360f);
							fVar1 = ((Local_85.f_44 + 10f) - 360f);
						}
						if (((fVar0 < fVar2 && fVar0 > fVar1) && func_18(&uLocal_790, 1000, 0)) || func_18(&uLocal_790, 3125, 0))
						{
							unk_0xA0E06A3361300416(unk_0x0DB8386015E986B7(Local_85.f_0));
							Local_85.f_29 = unk_0x62E15BEBEB67DC6D(unk_0x7394CB479CCA24AF(unk_0x0DB8386015E986B7(Local_85.f_0), -0.65f, 0.87f, -0.02f), Local_551, 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0xA499ADFC7EB2E4DB(unk_0x0DB8386015E986B7(Local_85.f_0), Local_85.f_29, "mp_am_hold_up", func_24(Local_85.f_28), 1.5f, -1.5f, 157, 16, 1148846080, 0);
							if (unk_0x7E2E2E8A648611F4(Local_85.f_17[Local_85.f_28]))
							{
								unk_0x724FFAED1C56CE2B(unk_0xDCE61FCD9D7F205E(Local_85.f_17[Local_85.f_28]), true, 0);
								unk_0x1312AFEAECF42BFD(unk_0xDCE61FCD9D7F205E(Local_85.f_17[Local_85.f_28]), Local_85.f_29, "mp_am_hold_up", func_23(Local_85.f_28), 4f, -4f, 8);
							}
							unk_0x16410571CFB5ED71(Local_85.f_29);
							Local_85.f_2 = 1;
							iLocal_554 = unk_0x7E80728A2E77D8E8(Local_85.f_29);
						}
					}
				}
			}
			break;
		
		case 1:
			if (BitTest(Local_85.f_25, 9) || BitTest(Local_85.f_1, 4))
			{
				iLocal_554 = unk_0x7E80728A2E77D8E8(Local_85.f_29);
				if (unk_0x411B750250543BD0(iLocal_554))
				{
					unk_0x5A691093FF311F77(Local_85.f_29);
				}
				Local_85.f_2 = 2;
				return;
			}
			if (iLocal_554 != -1)
			{
				if (unk_0x411B750250543BD0(iLocal_554) || func_18(&uLocal_786, 2000, 0))
				{
					if ((unk_0x411B750250543BD0(iLocal_554) && unk_0xABF98B1999FE64CA(iLocal_554) == 1f) || func_18(&uLocal_786, 2000, 0))
					{
						if ((func_3(Local_85.f_0) && !func_425(Local_85.f_0)) && !BitTest(Local_85.f_25, 9))
						{
							unk_0x909F139DC199D8E0(unk_0x0DB8386015E986B7(Local_85.f_0));
						}
						unk_0x5A691093FF311F77(Local_85.f_29);
						Local_85.f_2 = 2;
					}
				}
			}
			else
			{
				iLocal_554 = unk_0x7E80728A2E77D8E8(Local_85.f_29);
			}
			break;
		
		case 2:
			func_3(Local_85.f_17[Local_85.f_28]);
			if (func_18(&uLocal_792, 1000, 0) && func_3(Local_85.f_17[Local_85.f_28]))
			{
				if (unk_0x7DE17ACDD8BA2642(unk_0xDCE61FCD9D7F205E(Local_85.f_17[Local_85.f_28])))
				{
					unk_0x724FFAED1C56CE2B(unk_0xDCE61FCD9D7F205E(Local_85.f_17[Local_85.f_28]), false, 0);
					unk_0x2718E9CC165A99F6(unk_0xDCE61FCD9D7F205E(Local_85.f_17[Local_85.f_28]), true);
					unk_0xC2E3C377D893C17A(unk_0xDCE61FCD9D7F205E(Local_85.f_17[Local_85.f_28]), func_22(Local_85.f_28), 1, 0, 0, 1);
				}
				iLocal_554 = -1;
				iLocal_537 = 0;
				if (BitTest(Local_85.f_1, 4))
				{
					unk_0x061B1200C95204CB(&(Local_85.f_1), 4);
				}
				func_14(&uLocal_792);
				func_14(&uLocal_786);
				func_14(&uLocal_784);
				func_14(&uLocal_790);
				Local_85.f_2 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

Vector3 func_22(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return Local_568 - Vector(1f, 0.2f, 0.1f);
		
		case 1:
			return Local_568 - Vector(1f, 0.2f, 0f);
		
		case 2:
			return Local_568 - Vector(1f, 0.2f, -0.1f);
		
		case 4:
			return Local_568 - Vector(1f, -0.2f, 0.1f);
		
		case 0:
			return Local_568 - Vector(1f, -0.2f, 0f);
		
		case 5:
			return Local_568 - Vector(1f, -0.2f, -0.1f);
		
		case 6:
			return Local_568 - Vector(1f, -0.2f, 0.2f);
		
		default:
	}
	return Local_568 - Vector(1f, 0f, -0.1f);
}

char* func_23(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar";
		
		case 1:
			return "purchase_chocbar";
		
		case 2:
			return "purchase_chocbar";
		
		case 4:
			return "purchase_cigarette";
		
		case 0:
			return "purchase_beer";
		
		case 5:
			return "purchase_energydrink";
		
		case 6:
			return "purchase_beer";
		
		default:
	}
	return "purchase_energydrink";
}

char* func_24(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar_shopkeeper";
		
		case 1:
			return "purchase_chocbar_shopkeeper";
		
		case 2:
			return "purchase_chocbar_shopkeeper";
		
		case 4:
			return "purchase_cigarette_shopkeeper";
		
		case 0:
			return "purchase_beer_shopkeeper";
		
		case 5:
			return "purchase_energydrink_shopkeeper";
		
		case 6:
			return "purchase_beer_shopkeeper";
		
		default:
	}
	return "purchase_energydrink_shopkeeper";
}

int func_25()
{
	if ((((((!unk_0x7E2E2E8A648611F4(Local_85.f_17[3]) || !unk_0x7E2E2E8A648611F4(Local_85.f_17[1])) || !unk_0x7E2E2E8A648611F4(Local_85.f_17[2])) || !unk_0x7E2E2E8A648611F4(Local_85.f_17[4])) || !unk_0x7E2E2E8A648611F4(Local_85.f_17[0])) || !unk_0x7E2E2E8A648611F4(Local_85.f_17[5])) || !unk_0x7E2E2E8A648611F4(Local_85.f_17[6]))
	{
		if ((((((func_51(func_27(3)) && func_51(func_27(1))) && func_51(func_27(2))) && func_51(func_27(4))) && func_51(func_27(0))) && func_51(func_27(5))) && func_51(func_27(6)))
		{
			if (unk_0x01738548F6362653(0, 0, 7, 0))
			{
				if (!unk_0x7E2E2E8A648611F4(Local_85.f_17[3]))
				{
					if (func_26(&(Local_85.f_17[3]), func_27(3), func_22(3), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0x826624DF58AE6057(unk_0xDCE61FCD9D7F205E(Local_85.f_17[3]), unk_0x9CE0235348AE4A4D(Local_540));
						unk_0x2718E9CC165A99F6(unk_0xDCE61FCD9D7F205E(Local_85.f_17[3]), true);
						unk_0x724FFAED1C56CE2B(unk_0xDCE61FCD9D7F205E(Local_85.f_17[3]), false, 0);
					}
				}
				if (!unk_0x7E2E2E8A648611F4(Local_85.f_17[1]))
				{
					if (func_26(&(Local_85.f_17[1]), func_27(1), func_22(1), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0x826624DF58AE6057(unk_0xDCE61FCD9D7F205E(Local_85.f_17[1]), unk_0x9CE0235348AE4A4D(Local_540));
						unk_0x2718E9CC165A99F6(unk_0xDCE61FCD9D7F205E(Local_85.f_17[1]), true);
						unk_0x724FFAED1C56CE2B(unk_0xDCE61FCD9D7F205E(Local_85.f_17[1]), false, 0);
					}
				}
				if (!unk_0x7E2E2E8A648611F4(Local_85.f_17[2]))
				{
					if (func_26(&(Local_85.f_17[2]), func_27(2), func_22(2), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0x826624DF58AE6057(unk_0xDCE61FCD9D7F205E(Local_85.f_17[2]), unk_0x9CE0235348AE4A4D(Local_540));
						unk_0x2718E9CC165A99F6(unk_0xDCE61FCD9D7F205E(Local_85.f_17[2]), true);
						unk_0x724FFAED1C56CE2B(unk_0xDCE61FCD9D7F205E(Local_85.f_17[2]), false, 0);
					}
				}
				if (!unk_0x7E2E2E8A648611F4(Local_85.f_17[4]))
				{
					if (func_26(&(Local_85.f_17[4]), func_27(4), func_22(4), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0x826624DF58AE6057(unk_0xDCE61FCD9D7F205E(Local_85.f_17[4]), unk_0x9CE0235348AE4A4D(Local_540));
						unk_0x2718E9CC165A99F6(unk_0xDCE61FCD9D7F205E(Local_85.f_17[4]), true);
						unk_0x724FFAED1C56CE2B(unk_0xDCE61FCD9D7F205E(Local_85.f_17[4]), false, 0);
					}
				}
				if (!unk_0x7E2E2E8A648611F4(Local_85.f_17[0]))
				{
					if (func_26(&(Local_85.f_17[0]), func_27(0), func_22(0), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0x826624DF58AE6057(unk_0xDCE61FCD9D7F205E(Local_85.f_17[0]), unk_0x9CE0235348AE4A4D(Local_540));
						unk_0x2718E9CC165A99F6(unk_0xDCE61FCD9D7F205E(Local_85.f_17[0]), true);
						unk_0x724FFAED1C56CE2B(unk_0xDCE61FCD9D7F205E(Local_85.f_17[0]), false, 0);
					}
				}
				if (!unk_0x7E2E2E8A648611F4(Local_85.f_17[5]))
				{
					if (func_26(&(Local_85.f_17[5]), func_27(5), func_22(5), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0x826624DF58AE6057(unk_0xDCE61FCD9D7F205E(Local_85.f_17[5]), unk_0x9CE0235348AE4A4D(Local_540));
						unk_0x2718E9CC165A99F6(unk_0xDCE61FCD9D7F205E(Local_85.f_17[5]), true);
						unk_0x724FFAED1C56CE2B(unk_0xDCE61FCD9D7F205E(Local_85.f_17[5]), false, 0);
					}
				}
				if (!unk_0x7E2E2E8A648611F4(Local_85.f_17[6]))
				{
					if (func_26(&(Local_85.f_17[6]), func_27(6), func_22(6), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0x826624DF58AE6057(unk_0xDCE61FCD9D7F205E(Local_85.f_17[6]), unk_0x9CE0235348AE4A4D(Local_540));
						unk_0x2718E9CC165A99F6(unk_0xDCE61FCD9D7F205E(Local_85.f_17[6]), true);
						unk_0x724FFAED1C56CE2B(unk_0xDCE61FCD9D7F205E(Local_85.f_17[6]), false, 0);
					}
				}
			}
		}
	}
	else
	{
		unk_0xECDAB41968FF21A8(&(Local_85.f_1), 5);
		return 1;
	}
	return 0;
}

int func_26(var uParam0, int iParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!unk_0x959417B72A20644E(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = unk_0xC620B18026FDD05D(unk_0xC3541ED6B6D42728(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	else
	{
		*uParam0 = unk_0xC620B18026FDD05D(unk_0xF19D6C0E8B56BE23(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	if (unk_0x7E2E2E8A648611F4(*uParam0))
	{
		unk_0xAD02BD8A749B79F9(unk_0xDCE61FCD9D7F205E(*uParam0), iParam8);
		if (bParam10)
		{
			unk_0x9379BECAD1C8BD50(unk_0xDCE61FCD9D7F205E(*uParam0), 1);
		}
		if (bParam11)
		{
			unk_0x724FFAED1C56CE2B(unk_0xDCE61FCD9D7F205E(*uParam0), false, 0);
		}
		if (unk_0xC59A2EB21A3834E2(unk_0xDCE61FCD9D7F205E(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x6CD289A8A1000001(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		case 4:
			return joaat("prop_ld_fags_01");
		
		case 0:
			return joaat("prop_ecola_can");
		
		case 5:
			return joaat("prop_amb_beer_bottle");
		
		case 6:
			return joaat("prop_ld_can_01b");
		
		default:
	}
	return joaat("prop_choc_pq");
}

void func_28()
{
	float fVar0;
	
	if (!BitTest(Local_85.f_25, 9))
	{
		if (Global_2793044.f_8 == 1 || BitTest(Local_85.f_25, 6))
		{
			if ((((func_3(Local_85.f_14) && func_3(Local_85.f_0)) && !func_425(Local_85.f_0)) && Local_85.f_3 != 8) && Local_85.f_3 != 7)
			{
				if (!unk_0x48A4D45B3B4CEFFD(unk_0x0DB8386015E986B7(Local_85.f_0)))
				{
					if (!BitTest(Local_481.f_52, 30))
					{
						unk_0x2CD3E39D98CC3FA9(unk_0x0DB8386015E986B7(Local_85.f_0), Local_85.f_44, 1600);
						unk_0xECDAB41968FF21A8(&(Local_481.f_52), 30);
					}
					if (func_18(&uLocal_782, 100, 0))
					{
						fVar0 = unk_0xD850DD08D5434072(unk_0x0DB8386015E986B7(Local_85.f_0));
						if ((fVar0 > (Local_85.f_44 - 20f) && fVar0 < (Local_85.f_44 + 20f)) || func_18(&uLocal_788, 1500, 0))
						{
							unk_0xA0E06A3361300416(unk_0x0DB8386015E986B7(Local_85.f_0));
							Local_85.f_31 = unk_0x62E15BEBEB67DC6D(Local_548, Local_551, 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0xA499ADFC7EB2E4DB(unk_0x0DB8386015E986B7(Local_85.f_0), Local_85.f_31, "mp_am_hold_up", "holdup_victim_20s", 4f, -1.5f, 157, 16, 1148846080, 0);
							if (unk_0x7E2E2E8A648611F4(Local_85.f_14))
							{
								unk_0x2718E9CC165A99F6(unk_0xDCE61FCD9D7F205E(Local_85.f_14), false);
								unk_0x8D62C770FD5498FA(unk_0xDCE61FCD9D7F205E(Local_85.f_14), 1);
								unk_0x1312AFEAECF42BFD(unk_0xDCE61FCD9D7F205E(Local_85.f_14), Local_85.f_31, "mp_am_hold_up", "holdup_victim_20s_bag", 4f, -4f, 137);
							}
							if (unk_0x7E2E2E8A648611F4(Local_85.f_15))
							{
								unk_0x1312AFEAECF42BFD(unk_0xDCE61FCD9D7F205E(Local_85.f_15), Local_85.f_31, "mp_am_hold_up", "holdup_victim_20s_till", 4f, -4f, 137);
							}
							unk_0x16410571CFB5ED71(Local_85.f_31);
							unk_0xECDAB41968FF21A8(&(Local_85.f_25), 9);
						}
					}
				}
				else
				{
					Local_85.f_3 = 8;
				}
			}
		}
	}
	else if (!BitTest(Local_85.f_25, 17))
	{
		iLocal_547 = unk_0x7E80728A2E77D8E8(Local_85.f_31);
		if (iLocal_547 != -1)
		{
			func_3(Local_85.f_0);
			if (unk_0x411B750250543BD0(iLocal_547))
			{
				unk_0x59591B4AFCAA6F1D(unk_0xC1A5EC5C986B98AD(), 0, -1, 0);
				unk_0xECDAB41968FF21A8(&(Local_85.f_25), 17);
			}
		}
	}
	else if (!BitTest(Local_85.f_26, 15))
	{
		iLocal_547 = unk_0x7E80728A2E77D8E8(Local_85.f_31);
		if (iLocal_547 != -1)
		{
			if (unk_0x411B750250543BD0(iLocal_547))
			{
				func_3(Local_85.f_0);
				if ((unk_0x7E2E2E8A648611F4(Local_85.f_14) && func_3(Local_85.f_14)) && func_3(Local_85.f_0))
				{
					if (unk_0xABF98B1999FE64CA(iLocal_547) > 0.44f)
					{
						unk_0x724FFAED1C56CE2B(unk_0xDCE61FCD9D7F205E(Local_85.f_14), true, 0);
						unk_0xDDE449983CE7572E(unk_0xDCE61FCD9D7F205E(Local_85.f_14), true, 0);
						unk_0xECDAB41968FF21A8(&(Local_85.f_26), 15);
					}
				}
			}
		}
	}
}

int func_29()
{
	int iVar0;
	float fVar1;
	
	if (!unk_0xE85391CF212DE622())
	{
		return 0;
	}
	func_43();
	if (Local_85.f_3 != 9)
	{
		if (func_425(Local_85.f_0))
		{
			Local_85.f_3 = 9;
			return 0;
		}
		if ((BitTest(Local_85.f_25, 6) && !BitTest(Local_85.f_25, 9)) && Local_85.f_3 < 8)
		{
			if (!unk_0x7E2E2E8A648611F4(Local_85.f_14) || !unk_0x7E2E2E8A648611F4(Local_85.f_15))
			{
				Local_85.f_3 = 8;
			}
		}
		switch (Local_85.f_3)
		{
			case 0:
				if (!func_425(Local_85.f_0))
				{
					Local_85.f_3 = 1;
				}
				break;
			
			case 1:
				if (BitTest(Local_85.f_25, 4))
				{
					Local_85.f_3 = 2;
				}
				else if (BitTest(Local_85.f_25, 6) || BitTest(Local_85.f_25, 9))
				{
					Local_85.f_3 = 4;
				}
				else if (func_41() || func_34(0))
				{
					Local_85.f_3 = 8;
				}
				else if (func_32())
				{
					Local_85.f_3 = 7;
				}
				break;
			
			case 2:
				if (BitTest(Local_85.f_25, 6) || BitTest(Local_85.f_25, 9))
				{
					Local_85.f_3 = 4;
				}
				else if (func_41() || func_34(1))
				{
					Local_85.f_3 = 8;
				}
				else if (func_32())
				{
					Local_85.f_3 = 7;
				}
				break;
			
			case 3:
				if (unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("script_task_achieve_heading")) != 0 && unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("script_task_achieve_heading")) != 1)
				{
					Local_85.f_3 = 4;
				}
				else if (func_34(1))
				{
					Local_85.f_3 = 8;
				}
				else if (func_32())
				{
					Local_85.f_3 = 7;
				}
				break;
			
			case 4:
				if (BitTest(Local_85.f_25, 17))
				{
					iVar0 = 0;
					iLocal_547 = unk_0x7E80728A2E77D8E8(Local_85.f_31);
					if (iLocal_547 != -1)
					{
						if (unk_0x411B750250543BD0(iLocal_547))
						{
							if (unk_0x612907CF3208D1E3(Local_540, 3f, 0))
							{
								if (!BitTest(Local_85.f_25, 25))
								{
									unk_0xECDAB41968FF21A8(&(Local_85.f_25), 25);
								}
								Local_85.f_35 = (Local_85.f_35 + 0.35f);
							}
							fVar1 = unk_0xABF98B1999FE64CA(iLocal_547);
							if (fVar1 >= 0.8f)
							{
								Local_85.f_39 = 1f;
							}
							else if (fVar1 <= 0.5f)
							{
								Local_85.f_39 = 0f;
							}
							else if (fVar1 > Local_85.f_39)
							{
								Local_85.f_39 = ((fVar1 - 0.5f) * 3.33f);
							}
							if (fVar1 >= 0.92f)
							{
								Local_85.f_39 = 1f;
								iVar0 = 1;
							}
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
					if (iVar0 == 1)
					{
						Local_85.f_3 = 6;
					}
					else if (func_34(1))
					{
						Local_85.f_3 = 8;
					}
					else if (func_32())
					{
						Local_85.f_3 = 7;
					}
				}
				break;
			
			case 5:
				if (func_41() || func_34(1))
				{
					Local_85.f_3 = 8;
				}
				break;
			
			case 6:
				func_30();
				if (func_41() || func_34(1))
				{
					Local_85.f_3 = 8;
				}
				else if (func_32())
				{
					Local_85.f_3 = 7;
				}
				else if (BitTest(Local_85.f_26, 3))
				{
					if (!BitTest(Local_85.f_26, 4))
					{
						Local_85.f_3 = 7;
					}
				}
				break;
			
			case 8:
				func_30();
				break;
			
			case 7:
				break;
		}
	}
	else if (!BitTest(Local_85.f_26, 10))
	{
		if (!unk_0x7E2E2E8A648611F4(Local_85.f_0))
		{
			Local_85.f_45 = (Local_85.f_45 - 1);
			unk_0xECDAB41968FF21A8(&(Local_85.f_26), 10);
		}
	}
	return 1;
}

void func_30()
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Local_85.f_26, 2))
	{
		iVar0 = unk_0x15A88CFAAFFC6C4B(0, 10);
		iVar1 = (iLocal_575 + func_31());
		if (iVar0 < iVar1)
		{
			unk_0xECDAB41968FF21A8(&(Local_85.f_26), 3);
		}
		unk_0xECDAB41968FF21A8(&(Local_85.f_26), 2);
	}
}

int func_31()
{
	int iVar0;
	
	iVar0 = (Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_36 - 1);
	if (iVar0 >= 4)
	{
		return 4;
	}
	return iVar0;
}

int func_32()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x87644B1F984197FE(0, 24) || unk_0x87644B1F984197FE(0, 257))
	{
		iVar0 = func_33(unk_0xC1A5EC5C986B98AD());
		if ((((((iVar0 != joaat("weapon_unarmed") && iVar0 != 0) && iVar0 != joaat("vehicle_weapon_player_bullet")) && iVar0 != joaat("vehicle_weapon_player_buzzard")) && iVar0 != joaat("vehicle_weapon_player_laser")) && iVar0 != joaat("vehicle_weapon_tank")) && iVar0 != joaat("weapon_flare"))
		{
			iVar1 = unk_0x4C65E4658A34DD54(iVar0);
			if (((((((unk_0x18974B8F28F70FE4(unk_0xC1A5EC5C986B98AD(), iVar0) == 0 && iVar1 != joaat("GROUP_MELEE")) && iVar1 != 507375312) && iVar1 != 0) && iVar1 != joaat("GROUP_FIREEXTINGUISHER")) && iVar1 != -801780072) && iVar1 != 431593103) && iVar1 != -755518101)
			{
				if (unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) == iLocal_580)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_33(int iParam0)
{
	var uVar0;
	
	unk_0xEBC16D60E30C9AE1(iParam0, &uVar0, 1);
	return uVar0;
}

int func_34(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	int iVar14;
	int iVar15;
	
	if (func_39(unk_0x93E99A2DBCBA9CFA(), 146))
	{
		return 1;
	}
	if (func_38(unk_0x93E99A2DBCBA9CFA()))
	{
		return 1;
	}
	if (BitTest(Local_85.f_25, 5))
	{
		return 1;
	}
	if (unk_0x48A4D45B3B4CEFFD(unk_0x0DB8386015E986B7(Local_85.f_0)))
	{
		return 1;
	}
	if (func_37() || func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x89DE709C9F3052C5(1))
	{
		if (unk_0xB09B723333956A0B(1, iVar0) == 186)
		{
			if (unk_0x11DE375695504B75(1, iVar0, &Var1, 13))
			{
				if (unk_0x7DE17ACDD8BA2642(Var1.f_0) && unk_0x71904BD37B848CAF(Var1.f_0))
				{
					iVar14 = unk_0x9C8D7679C15E75FF(Var1.f_0);
					if (unk_0x66599E73DBA5A850(iVar14) && unk_0x41AD4BF315E01D41(iVar14) == iLocal_580)
					{
						if (unk_0x7DE17ACDD8BA2642(Var1.f_1) && unk_0x71904BD37B848CAF(Var1.f_1))
						{
							iVar15 = unk_0x9C8D7679C15E75FF(Var1.f_1);
							if (iVar15 != unk_0x0DB8386015E986B7(Local_85.f_0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iParam0 == 1)
	{
		if (!BitTest(Local_85.f_26, 5))
		{
			if (unk_0x06EADAF3FF0C6092(Local_590 - Vector(25f, 25f, 25f), Local_590 + Vector(25f, 25f, 25f)))
			{
				unk_0xECDAB41968FF21A8(&(Local_85.f_26), 5);
			}
		}
	}
	return 0;
}

int func_35()
{
	if (Local_481.f_50 >= 15 && Local_481.f_50 <= 19)
	{
		if (unk_0xD612176B6DC58EF7(9, Local_590, 40f))
		{
			return 1;
		}
	}
	if (unk_0xAFC34601EB143C10(-1, Local_590, Local_593, uLocal_596))
	{
		return 1;
	}
	if (unk_0xAFC34601EB143C10(-1, Local_597, Local_600, fLocal_603))
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	if ((unk_0x900514CEC11CBE3A(Local_597, Local_600, fLocal_603, joaat("weapon_grenade"), 0) || unk_0x900514CEC11CBE3A(Local_597, Local_600, fLocal_603, joaat("weapon_molotov"), 0)) || unk_0x900514CEC11CBE3A(Local_597, Local_600, fLocal_603, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_37()
{
	if ((unk_0x900514CEC11CBE3A(Local_590, Local_593, uLocal_596, joaat("weapon_grenade"), 0) || unk_0x900514CEC11CBE3A(Local_590, Local_593, fLocal_596, joaat("weapon_molotov"), 0)) || unk_0x900514CEC11CBE3A(Local_590, Local_593, fLocal_596, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_38(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0xA26A9A07F761D8F8())
	{
		return 0;
	}
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		return Global_2764905;
	}
	else
	{
		uVar0 = unk_0xF2CFBB1105511E1A(iParam0);
		if (unk_0x7DE17ACDD8BA2642(uVar0))
		{
			iVar1 = unk_0x504B9BB48D41C264(uVar0);
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

int func_39(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/] == iParam1)
	{
		return func_40(iParam0);
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1894573[iVar0 /*608*/].f_1, 0);
	}
	return 0;
}

int func_41()
{
	if (func_42() || func_35())
	{
		return 1;
	}
	return 0;
}

int func_42()
{
	if (unk_0x3AB7E936BFFD6DF3(Local_590, Local_593, fLocal_596, 0))
	{
		return 1;
	}
	if (unk_0x3AB7E936BFFD6DF3(Local_597, Local_600, fLocal_603, 0))
	{
		return 1;
	}
	return 0;
}

void func_43()
{
	if (Local_85.f_35 > 0f)
	{
		if (func_44(&(Local_85.f_36), 50, 0))
		{
			Local_85.f_35 = (Local_85.f_35 - 0.02f);
			if (Local_85.f_35 < 0f)
			{
				Local_85.f_35 = 0f;
			}
			func_14(&(Local_85.f_36));
		}
	}
}

int func_44(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_19(uParam0, bParam2, 0);
	if (unk_0xA26A9A07F761D8F8() && !bParam2)
	{
		if (unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam0)) >= iParam1)
		{
			func_14(uParam0);
			return 1;
		}
	}
	else if (unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0xA5E11AF0A2B928C1(), *uParam0)) >= iParam1)
	{
		func_14(uParam0);
		return 1;
	}
	return 0;
}

void func_45()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iLocal_561)))
	{
		iVar0 = unk_0xFE2D0B37A9596A4C(unk_0x74A08123C183740A(iLocal_561));
		uVar1 = unk_0xF2CFBB1105511E1A(iVar0);
		if (!BitTest(Local_85.f_25, 11))
		{
			if (BitTest(Local_160[iLocal_561 /*10*/], 5))
			{
				if (unk_0x5E6D8811A0BD0954(Local_85.f_14))
				{
					if (func_3(Local_85.f_14))
					{
						unk_0xA81AA70A4D25E140(unk_0xDCE61FCD9D7F205E(Local_85.f_14), 1, 1);
						func_47(&(Local_85.f_14));
					}
				}
				else
				{
					Local_85.f_40 = { Local_160[iLocal_561 /*10*/].f_7 };
					Local_85.f_46 = 7;
					unk_0xECDAB41968FF21A8(&(Local_85.f_25), 11);
				}
			}
		}
		if (!BitTest(Local_85.f_25, 14))
		{
			if (BitTest(Local_160[iLocal_561 /*10*/], 6))
			{
				unk_0xECDAB41968FF21A8(&(Local_85.f_25), 14);
			}
		}
		if (!BitTest(Local_85.f_25, 15))
		{
			if (BitTest(Local_160[iLocal_561 /*10*/], 7))
			{
				unk_0xECDAB41968FF21A8(&(Local_85.f_25), 15);
			}
		}
		if (!BitTest(Local_85.f_25, 26))
		{
			if (BitTest(Local_160[iLocal_561 /*10*/], 24))
			{
				unk_0xECDAB41968FF21A8(&(Local_85.f_25), 26);
			}
		}
		if (!BitTest(Local_85.f_25, 22))
		{
			if (BitTest(Local_160[iLocal_561 /*10*/], 22))
			{
				unk_0xECDAB41968FF21A8(&(Local_85.f_25), 22);
			}
		}
		if (!BitTest(Local_85.f_25, 23))
		{
			if (BitTest(Local_160[iLocal_561 /*10*/], 23))
			{
				unk_0xECDAB41968FF21A8(&(Local_85.f_25), 23);
			}
		}
		if (!BitTest(Local_85.f_25, 30))
		{
			if (BitTest(Local_160[iLocal_561 /*10*/], 25))
			{
				unk_0xECDAB41968FF21A8(&(Local_85.f_25), 30);
			}
		}
		if (!BitTest(Local_85.f_25, 31))
		{
			if (BitTest(Local_160[iLocal_561 /*10*/], 26))
			{
				unk_0xECDAB41968FF21A8(&(Local_85.f_25), 31);
			}
		}
		if (!BitTest(Local_85.f_26, 6))
		{
			if (BitTest(Local_160[iLocal_561 /*10*/], 29))
			{
				unk_0xECDAB41968FF21A8(&(Local_85.f_26), 6);
			}
		}
		if (!BitTest(Local_85.f_26, 9))
		{
			if (BitTest(Local_160[iLocal_561 /*10*/], 31))
			{
				unk_0xECDAB41968FF21A8(&(Local_85.f_26), 9);
			}
		}
		if (!BitTest(Local_85.f_1, 3))
		{
			if (BitTest(Local_160[iLocal_561 /*10*/].f_1, 3))
			{
				unk_0xECDAB41968FF21A8(&(Local_85.f_1), 3);
			}
		}
		if (BitTest(Local_85.f_27, 1))
		{
			if (!BitTest(Local_85.f_27, 6))
			{
				if (BitTest(Local_160[iLocal_561 /*10*/].f_5, 1))
				{
					unk_0xECDAB41968FF21A8(&(Local_85.f_27), 6);
				}
			}
			if (!BitTest(Local_85.f_27, 7))
			{
				if (BitTest(Local_160[iLocal_561 /*10*/].f_5, 2))
				{
					unk_0xECDAB41968FF21A8(&(Local_85.f_27), 7);
				}
			}
			if (!BitTest(Local_85.f_27, 5))
			{
				if (BitTest(Local_160[iLocal_561 /*10*/].f_5, 0))
				{
					unk_0xECDAB41968FF21A8(&(Local_85.f_27), 5);
				}
			}
		}
		if (!BitTest(Local_85.f_25, 20))
		{
			if (BitTest(Local_160[iLocal_561 /*10*/], 11))
			{
				unk_0xECDAB41968FF21A8(&(Local_85.f_25), 20);
			}
		}
		if (!BitTest(Local_85.f_26, 17))
		{
			if (BitTest(Local_160[iLocal_561 /*10*/], 13))
			{
				unk_0xECDAB41968FF21A8(&(Local_85.f_26), 17);
			}
		}
		if (func_46(iVar0, 1, 1))
		{
			if (!BitTest(Local_85.f_25, 5))
			{
				if (!func_425(Local_85.f_0))
				{
					if (unk_0x7559C38E6535AB89(unk_0x0DB8386015E986B7(Local_85.f_0), uVar1, 1))
					{
						unk_0xECDAB41968FF21A8(&(Local_85.f_25), 5);
					}
				}
			}
			if (BitTest(Local_85.f_27, 1))
			{
				if (!BitTest(Local_85.f_27, 8))
				{
					if (!func_425(Local_85.f_16))
					{
						if (unk_0x7559C38E6535AB89(unk_0x0DB8386015E986B7(Local_85.f_16), uVar1, 1))
						{
							unk_0xECDAB41968FF21A8(&(Local_85.f_27), 8);
						}
					}
				}
				if (!BitTest(Local_85.f_27, 9))
				{
					if (BitTest(Local_160[iLocal_561 /*10*/].f_5, 3))
					{
						unk_0xECDAB41968FF21A8(&(Local_85.f_27), 9);
					}
				}
			}
			if (!BitTest(Local_85.f_25, 6))
			{
				if (BitTest(Local_160[iLocal_561 /*10*/], 1))
				{
					unk_0xECDAB41968FF21A8(&(Local_85.f_25), 6);
				}
			}
			if (!BitTest(Local_85.f_25, 16))
			{
				if (BitTest(Local_160[iLocal_561 /*10*/], 8))
				{
					unk_0xECDAB41968FF21A8(&(Local_85.f_25), 16);
				}
			}
			if (!BitTest(Local_85.f_26, 1))
			{
				if (BitTest(Local_160[iLocal_561 /*10*/], 27))
				{
					unk_0xECDAB41968FF21A8(&(Local_85.f_26), 1);
				}
			}
			if (!BitTest(Local_85.f_25, 7))
			{
				if (BitTest(Local_160[iLocal_561 /*10*/], 0))
				{
					unk_0xECDAB41968FF21A8(&(Local_85.f_25), 7);
				}
			}
			if (!BitTest(Local_85.f_25, 10))
			{
				if (BitTest(Local_160[iLocal_561 /*10*/], 4))
				{
					if (Local_85.f_3 != 5 && Local_85.f_3 != 6)
					{
						Local_85.f_3 = 5;
					}
					unk_0xECDAB41968FF21A8(&(Local_85.f_25), 10);
				}
			}
			if (!BitTest(Local_85.f_1, 2))
			{
				if (BitTest(Local_160[iLocal_561 /*10*/].f_1, 2))
				{
					unk_0xECDAB41968FF21A8(&(Local_85.f_1), 2);
					unk_0xECDAB41968FF21A8(&(Local_85.f_1), 4);
					iLocal_563 = iLocal_561;
				}
			}
			else if (!BitTest(Local_160[iLocal_563 /*10*/].f_1, 2))
			{
				unk_0x061B1200C95204CB(&(Local_85.f_1), 2);
				if (BitTest(Local_85.f_1, 3))
				{
					unk_0x061B1200C95204CB(&(Local_85.f_1), 3);
				}
			}
			if (!BitTest(Local_85.f_26, 8))
			{
				if (BitTest(Local_160[iLocal_561 /*10*/], 30))
				{
					unk_0xECDAB41968FF21A8(&(Local_85.f_26), 8);
				}
			}
			if (!BitTest(Local_85.f_1, 0))
			{
				if (BitTest(Local_160[iLocal_561 /*10*/].f_1, 0))
				{
					unk_0xECDAB41968FF21A8(&(Local_85.f_1), 0);
					unk_0xECDAB41968FF21A8(&(Local_85.f_1), 1);
					Local_85.f_28 = Local_160[iLocal_561 /*10*/].f_2;
					iLocal_562 = iLocal_561;
				}
			}
			else if (!BitTest(Local_160[iLocal_562 /*10*/].f_1, 0))
			{
				unk_0x061B1200C95204CB(&(Local_85.f_1), 0);
			}
			if (!BitTest(Local_85.f_26, 13))
			{
				if (BitTest(Local_160[iLocal_561 /*10*/], 21))
				{
					unk_0xECDAB41968FF21A8(&(Local_85.f_26), 13);
				}
			}
		}
	}
	iLocal_561++;
	if (iLocal_561 == unk_0x1C57E792CD67EF97())
	{
		iLocal_561 = 0;
	}
}

int func_46(int iParam0, bool bParam1, bool bParam2)
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

void func_47(var uParam0)
{
	var uVar0;
	
	if (unk_0x7E2E2E8A648611F4(*uParam0))
	{
		if (!unk_0xFE2AB315FD8C7A6F(*uParam0))
		{
		}
	}
	if (unk_0x5E6D8811A0BD0954(*uParam0))
	{
		uVar0 = unk_0x177F7E959D2D410B(*uParam0);
		unk_0x782D744058B1DFA3(&uVar0);
	}
}

void func_48()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	unk_0xECDAB41968FF21A8(&(Local_85.f_25), 2);
	unk_0xECDAB41968FF21A8(&(Local_85.f_25), 3);
	unk_0x061B1200C95204CB(&(Local_85.f_25), 13);
	unk_0x061B1200C95204CB(&(Local_85.f_25), 27);
	unk_0x061B1200C95204CB(&(Local_85.f_25), 28);
	unk_0x061B1200C95204CB(&(Local_85.f_26), 4);
	if (!BitTest(Local_85.f_25, 18))
	{
		if (func_425(Local_85.f_0))
		{
			if (Local_85.f_39 <= 0f)
			{
				unk_0xECDAB41968FF21A8(&(Local_85.f_25), 18);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < unk_0x1C57E792CD67EF97())
	{
		if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iVar0)))
		{
			iVar5 = unk_0xFE2D0B37A9596A4C(unk_0x74A08123C183740A(iVar0));
			iVar6 = unk_0xF2CFBB1105511E1A(iVar5);
			if (Local_160[iVar0 /*10*/].f_3 > 0)
			{
				Local_85.f_4 = (Local_85.f_4 + Local_160[iVar0 /*10*/].f_3);
				Local_160[iVar0 /*10*/].f_3 = 0;
			}
			if (BitTest(Local_85.f_25, 3))
			{
				if (unk_0x1C4E4DC1EFE24DF1(iVar6, Local_587, 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0x061B1200C95204CB(&(Local_85.f_25), 3);
				}
			}
			if (!BitTest(Local_85.f_26, 16))
			{
				if (BitTest(Local_160[iVar0 /*10*/], 12))
				{
					unk_0xECDAB41968FF21A8(&(Local_85.f_26), 16);
				}
			}
			if (func_46(iVar5, 1, 1))
			{
				if (BitTest(Local_85.f_25, 2))
				{
					unk_0x061B1200C95204CB(&(Local_85.f_25), 2);
				}
				if (unk_0x41AD4BF315E01D41(iVar6) == iLocal_580)
				{
					if (unk_0x846426CCFA47452B(iVar6) == iLocal_581 || unk_0x846426CCFA47452B(iVar6) == iLocal_582)
					{
						iVar2 = 1;
					}
					else if (unk_0x846426CCFA47452B(iVar6) == iLocal_583)
					{
						unk_0xECDAB41968FF21A8(&(Local_85.f_25), 27);
						iVar3 = 1;
					}
				}
				if (iVar2 == 1 || iVar3 == 1)
				{
					unk_0xECDAB41968FF21A8(&(Local_85.f_25), 13);
					iVar4++;
					if (!BitTest(Local_85.f_25, 9) && !BitTest(Local_85.f_25, 21))
					{
						if (!BitTest(Local_85.f_25, 4))
						{
							if (unk_0xEBC16D60E30C9AE1(iVar6, &iVar1, 1))
							{
								if ((((iVar1 != joaat("weapon_unarmed") && iVar1 != 0) && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare")) && iVar1 != joaat("weapon_snowball"))
								{
									if (Local_85.f_34 == -1)
									{
										Local_85.f_34 = iVar0;
									}
									else if (!unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(Local_85.f_34)))
									{
										Local_85.f_34 = -1;
									}
									unk_0xECDAB41968FF21A8(&(Local_85.f_25), 4);
									if (!BitTest(Local_85.f_25, 12))
									{
										if (unk_0x1C4E4DC1EFE24DF1(iVar6, Local_540, 2.5f, 2.5f, 3f, 0, 1, 0))
										{
											unk_0xECDAB41968FF21A8(&(Local_85.f_25), 12);
										}
									}
								}
							}
						}
						if (!BitTest(Local_85.f_26, 0))
						{
							if (unk_0x83C5A442AAD15BAF(iVar5) > 0)
							{
								unk_0xECDAB41968FF21A8(&(Local_85.f_26), 0);
							}
						}
					}
				}
				else if (unk_0x1C4E4DC1EFE24DF1(iVar6, Local_587, 5f, 5f, 2.5f, 0, 1, 0))
				{
					unk_0xECDAB41968FF21A8(&(Local_85.f_25), 28);
					iVar4++;
				}
				if (!BitTest(Local_85.f_26, 4))
				{
					if (BitTest(Local_160[iVar0 /*10*/], 28))
					{
						unk_0xECDAB41968FF21A8(&(Local_85.f_26), 4);
					}
				}
				if ((BitTest(Local_85.f_25, 9) && !BitTest(Local_85.f_25, 20)) && !BitTest(Local_85.f_25, 19))
				{
					if (Local_160[iLocal_561 /*10*/].f_6 > Local_85.f_35)
					{
						Local_85.f_35 = Local_160[iVar0 /*10*/].f_6;
						func_14(&(Local_85.f_36));
						if (!BitTest(Local_85.f_25, 24))
						{
							if (Local_85.f_35 > (0.55f + 0.2f))
							{
								unk_0xECDAB41968FF21A8(&(Local_85.f_25), 24);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_85.f_43 != iVar4)
	{
		Local_85.f_43 = iVar4;
	}
}

int func_49()
{
	var uVar0;
	
	if ((!unk_0x7E2E2E8A648611F4(Local_85.f_0) || !unk_0x7E2E2E8A648611F4(Local_85.f_14)) || !unk_0x7E2E2E8A648611F4(Local_85.f_15))
	{
		if ((func_51(iLocal_539) && func_51(func_52(1))) && func_51(func_52(2)))
		{
			if (unk_0x01738548F6362653(1, 0, 2, 0))
			{
				if (!unk_0x7E2E2E8A648611F4(Local_85.f_0))
				{
					if (func_50(&Local_85, 4, iLocal_539, Local_540 - Vector(1f, 0f, 0f), Local_85.f_44, 1, 1, 1))
					{
						unk_0xFECAE061D8C80757(unk_0x0DB8386015E986B7(Local_85.f_0), 0, iLocal_769[0], iLocal_775[0], 0);
						unk_0xFECAE061D8C80757(unk_0x0DB8386015E986B7(Local_85.f_0), 2, iLocal_769[1], iLocal_775[1], 0);
						unk_0xFECAE061D8C80757(unk_0x0DB8386015E986B7(Local_85.f_0), 3, iLocal_769[2], iLocal_775[2], 0);
						unk_0xFECAE061D8C80757(unk_0x0DB8386015E986B7(Local_85.f_0), 4, iLocal_769[3], iLocal_775[3], 0);
						unk_0xFECAE061D8C80757(unk_0x0DB8386015E986B7(Local_85.f_0), 8, iLocal_769[4], iLocal_775[4], 0);
						unk_0x826624DF58AE6057(unk_0x0DB8386015E986B7(Local_85.f_0), unk_0x9CE0235348AE4A4D(Local_540));
						unk_0x71A535529C1CA5DF(unk_0x0DB8386015E986B7(Local_85.f_0), 1);
						unk_0xC5B2830898581862(unk_0x0DB8386015E986B7(Local_85.f_0), 1);
						unk_0xB0F23B683F51C9F0(unk_0x0DB8386015E986B7(Local_85.f_0), 1, 0);
						unk_0xBB5C1E4A07AE1774(unk_0x0DB8386015E986B7(Local_85.f_0), 16);
						unk_0x7C90446DDC45D9C6(unk_0x0DB8386015E986B7(Local_85.f_0), 0);
						unk_0x474AA9EF29305EA8(unk_0x0DB8386015E986B7(Local_85.f_0), 1024, 1);
						unk_0x9E7B0A53DA7F1D95(unk_0x0DB8386015E986B7(Local_85.f_0), 1);
						unk_0xED2BD879E739E86B(unk_0x0DB8386015E986B7(Local_85.f_0), unk_0xF2DB717A73826179((200f * Global_262145.f_165)), 0);
						if (!unk_0x2B6E67EB7FF3FD10(unk_0x0DB8386015E986B7(Local_85.f_0), "XP_Blocker"))
						{
							unk_0xEC687B9B4DF9224E(unk_0x0DB8386015E986B7(Local_85.f_0), "XP_Blocker", 1);
						}
						func_424(&uLocal_604, 3, unk_0x0DB8386015E986B7(Local_85.f_0), &(Local_85.f_48), 1, 0);
					}
				}
				if (!unk_0x7E2E2E8A648611F4(Local_85.f_14))
				{
					uVar0 = unk_0x927352BD9ED16D05(joaat("pickup_portable_crate_unfixed_low_glow"), Local_564, 0, func_52(1));
					if (unk_0x7DE17ACDD8BA2642(uVar0))
					{
						Local_85.f_14 = unk_0xC620B18026FDD05D(uVar0);
						unk_0x2718E9CC165A99F6(unk_0xDCE61FCD9D7F205E(Local_85.f_14), true);
						unk_0xDDE449983CE7572E(unk_0xDCE61FCD9D7F205E(Local_85.f_14), false, 0);
						unk_0x692C3FDAD7DB53CC(unk_0xDCE61FCD9D7F205E(Local_85.f_14), uLocal_567);
						unk_0x826624DF58AE6057(unk_0xDCE61FCD9D7F205E(Local_85.f_14), unk_0x9CE0235348AE4A4D(Local_540));
						unk_0x226C3A30511D5DC4(unk_0xDCE61FCD9D7F205E(Local_85.f_14), 1);
						unk_0x7AB9248A72CECD17(unk_0xDCE61FCD9D7F205E(Local_85.f_14), -0.2f, 1);
						unk_0x7B20BBC4C133A1DF(unk_0xDCE61FCD9D7F205E(Local_85.f_14), 1, 0);
						unk_0x724FFAED1C56CE2B(unk_0xDCE61FCD9D7F205E(Local_85.f_14), false, 0);
					}
				}
				if (!unk_0x7E2E2E8A648611F4(Local_85.f_15))
				{
					if (func_26(&(Local_85.f_15), func_52(2), Local_568 - Vector(0.12f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0x692C3FDAD7DB53CC(unk_0xDCE61FCD9D7F205E(Local_85.f_15), uLocal_571);
						unk_0x826624DF58AE6057(unk_0xDCE61FCD9D7F205E(Local_85.f_15), unk_0x9CE0235348AE4A4D(Local_540));
						unk_0x2718E9CC165A99F6(unk_0xDCE61FCD9D7F205E(Local_85.f_15), true);
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_50(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	
	if (!unk_0x334CA22E0AD77C7C(1))
	{
		return 0;
	}
	uVar0 = unk_0x69FDD9508259E5B5(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0xFDCB460E036BA39B(uVar0);
	if (unk_0x7E2E2E8A648611F4(*uParam0))
	{
		unk_0xAD02BD8A749B79F9(uVar0, iParam9);
		if (unk_0xC59A2EB21A3834E2(uVar0))
		{
			if (bParam7)
			{
				unk_0x6CD289A8A1000001(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_51(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x852EC2A7DE66202D(iParam0);
	return unk_0x0CBB7C273DED26E7(iParam0);
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("mp_m_shopkeep_01");
		
		case 1:
			return joaat("p_poly_bag_01_s");
		
		case 2:
			return joaat("p_till_01_s");
		
		default:
	}
	return joaat("mp_m_shopkeep_01");
}

void func_53()
{
	if (!BitTest(Local_481.f_52, 20))
	{
		if (BitTest(Local_85.f_25, 11) || BitTest(Local_85.f_26, 16))
		{
			if (unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) == iLocal_580 || unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_587, 5f, 5f, 2.5f, 0, 1, 0))
			{
				func_56();
				func_54();
				func_6(Local_481.f_50, 1, func_7());
				unk_0xECDAB41968FF21A8(&(Local_481.f_52), 20);
			}
			else
			{
				if ((BitTest(Local_481.f_52, 31) && (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0 || BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 1))) && unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_587, 20f, 20f, 20f, 0, 1, 0))
				{
					func_56();
				}
				unk_0xECDAB41968FF21A8(&(Local_481.f_52), 20);
			}
		}
	}
}

void func_54()
{
	int iVar0;
	
	iVar0 = func_55(47);
	Global_2645068[iVar0 /*83*/] = 47;
	StringCopy(&(Global_2645068[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_55(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2645068[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2645068[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_56()
{
	int iVar0;
	
	if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0 || BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 1))
	{
		iVar0 = func_131(1182, -1, 0);
		if (!BitTest(iVar0, Local_481.f_50))
		{
			func_129(14, 1, -1);
			unk_0xECDAB41968FF21A8(&iVar0, Local_481.f_50);
			func_128(1182, iVar0, -1, 1, 0);
			if (func_127(14, -1) >= 20)
			{
				func_113(44, 1);
			}
			else
			{
				func_112(44, func_127(14, -1));
			}
		}
		func_110(1168, 1, -1);
		func_109(12, 1, -1);
		func_107(19);
		iLocal_797 = 100;
		iLocal_797 = unk_0xF2DB717A73826179((IntToFloat(iLocal_797) * Global_262145.f_4236));
		func_57(2, "XPT_HOLDUP", -1636175450, -235721452, iLocal_797, 1, -1, 0);
	}
}

var func_57(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_58(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_58(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_59(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_59(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_97();
	if (func_96(sParam2))
	{
	}
	if (func_95())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_93(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_92(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_89(0, &iVar1);
					break;
				
				case 3:
					func_89(1, &iVar1);
					break;
				
				case 1:
					func_81(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1961999)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_110(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_70((func_80(unk_0x93E99A2DBCBA9CFA()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x140AEC0C03C45A46(iVar1, iParam8, iParam9);
				if (Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_2 != -1)
				{
					func_110(1166, iVar1, -1);
				}
				func_64(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_60((func_62(unk_0x93E99A2DBCBA9CFA()) + iVar1));
			}
			else
			{
				func_60((func_62(unk_0x93E99A2DBCBA9CFA()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_60(int iParam0)
{
	if (func_95())
	{
		Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_205.f_5 = iParam0;
		func_61(joaat("mpply_globalxp"), iParam0);
	}
}

void func_61(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, uParam1, 1);
	}
}

int func_62(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_46(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x93E99A2DBCBA9CFA())
			{
				return func_63(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853910[iParam0 /*862*/].f_205.f_5;
			}
		}
		else
		{
			return func_63(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_63(int iParam0)
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

void func_64(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_69(unk_0x93E99A2DBCBA9CFA()) };
	if (unk_0xE52BCF7D5014E06E())
	{
		if (unk_0x7DD2CE58D33238D9(&Var0))
		{
			iVar13 = func_67(func_68(&Var0));
			if (iVar13 == 0)
			{
				func_66(&Global_1665493, iParam0);
				func_65(joaat("mpply_crew_local_xp_0"), Global_1665493);
			}
			else if (iVar13 == 1)
			{
				func_66(&Global_1665494, iParam0);
				func_65(joaat("mpply_crew_local_xp_1"), Global_1665494);
			}
			else if (iVar13 == 2)
			{
				func_66(&Global_1665495, iParam0);
				func_65(joaat("mpply_crew_local_xp_2"), Global_1665495);
			}
			else if (iVar13 == 3)
			{
				func_66(&Global_1665496, iParam0);
				func_65(joaat("mpply_crew_local_xp_3"), Global_1665496);
			}
			else if (iVar13 == 4)
			{
				func_66(&Global_1665497, iParam0);
				func_65(joaat("mpply_crew_local_xp_4"), Global_1665497);
			}
		}
	}
}

void func_65(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1665488 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1665490 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1665490 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1665491 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1665492 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1665493 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1665494 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1665495 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1665496 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1665497 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1665498 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1665499 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1665500 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1665501 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1665502 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1665503 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1665504 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_67(int iParam0)
{
	if (iParam0 == Global_1665488)
	{
		return 0;
	}
	else if (iParam0 == Global_1665489)
	{
		return 1;
	}
	else if (iParam0 == Global_1665490)
	{
		return 2;
	}
	else if (iParam0 == Global_1665491)
	{
		return 3;
	}
	else if (iParam0 == Global_1665492)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_68(var uParam0)
{
	if (unk_0xE52BCF7D5014E06E())
	{
		if (unk_0x7DD2CE58D33238D9(uParam0))
		{
			return Global_2694466;
		}
	}
	return Global_2694466;
}

struct<13> func_69(int iParam0)
{
	struct<13> Var0;
	
	unk_0x23BD70608BA4F8D9(iParam0, &Var0, 13);
	return Var0;
}

void func_70(int iParam0, int iParam1, int iParam2)
{
	if (func_95())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10070 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1665638[func_78(-1)])
				{
					unk_0x140AEC0C03C45A46(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1665638[func_78(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_10069 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x140AEC0C03C45A46(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10069 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x140AEC0C03C45A46(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_77(unk_0x93E99A2DBCBA9CFA()))
		{
			Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_205.f_1 = iParam0;
			Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_205.f_6 = func_75(iParam0, 1);
		}
		func_74(640, iParam0, -1, 1);
		func_128(641, func_75(iParam0, 1), -1, 1, 0);
		Global_1665638[func_78(-1)] = iParam0;
		func_71(-1109644434, 7, 0);
	}
}

void func_71(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_73(iParam1, iParam2))
	{
		iVar0 = func_72();
		Global_2694418[iVar0] = iParam1;
		Global_2694429[iVar0] = iParam0;
	}
}

int func_72()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2694418[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_73(int iParam0, var uParam1)
{
	if (Global_1575048)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575060) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_74(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2805027[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1665566[func_78(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1665572[func_78(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1665578[func_78(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1665584[func_78(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1665590[func_78(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1665536[func_78(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1665542[func_78(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1665548[func_78(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1665554[func_78(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1665560[func_78(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1665506[func_78(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1665512[func_78(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1665518[func_78(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1665524[func_78(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1665530[func_78(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1665596[func_78(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1665602[func_78(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1665608[func_78(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1665614[func_78(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1665620[func_78(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1665626[func_78(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1665632[func_78(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1665638[func_78(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1665644[func_78(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2851323[0 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2851323[1 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2851323[2 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2851323[3 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 12424:
			Global_2851502[func_78(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1665650[func_78(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1665656[func_78(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1665662[func_78(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1665668[func_78(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1665674[func_78(iParam2)] = iParam1;
			break;
		
		case 11803:
			Global_1665680[func_78(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1665686[func_78(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2851411[0 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2851411[1 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2851411[2 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2851411[3 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2851411[4 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2851505[0 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2851505[1 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2851505[2 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2851505[3 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2851505[4 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2851521[0 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2851521[1 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2851521[2 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2851521[3 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2851521[4 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2851411[5 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2851323[4 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2851537[func_78(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2851546[func_78(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2851540[func_78(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2851549[func_78(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2851543[func_78(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2851552[func_78(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2851555[func_78(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2851411[6 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2851323[5 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2851411[7 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2851323[6 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2851411[8 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2851323[7 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2851411[9 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2851323[8 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2851411[10 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2851323[9 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2851411[11 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2851323[10 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2851411[12 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2851323[11 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2851411[13 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2851323[12 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2851411[14 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2851323[13 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2851411[15 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2851323[14 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2851411[16 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2851323[15 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2851411[17 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2851323[16 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2851323[17 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2851323[18 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2851323[19 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2851323[20 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2851558[func_78(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2851561[func_78(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2851564[func_78(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2851567[func_78(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2851570[func_78(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2851573[func_78(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2851576[func_78(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2851579[func_78(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2851582[func_78(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2851585[func_78(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2851588[func_78(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2851591[func_78(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2851594[func_78(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2851597[func_78(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2851323[21 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2851411[23 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2851323[22 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2851411[24 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2851323[23 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2851323[24 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2851323[25 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2851411[27 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2851323[26 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2851411[28 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2851323[27 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_75(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_76(iParam0, 0);
}

int func_76(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_297010[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_297010[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_77(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2672505.f_1, iParam0);
	}
	return 1;
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_79();
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

int func_79()
{
	return Global_1574918;
}

int func_80(int iParam0)
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x93E99A2DBCBA9CFA())
			{
				return Global_1665638[func_78(-1)];
			}
			else if (func_77(iParam0))
			{
				return Global_1853910[iParam0 /*862*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1665638[func_78(-1)];
	}
	return 0;
}

void func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA());
	iVar0 = 0;
	while (iVar0 < unk_0x1C57E792CD67EF97())
	{
		iVar4 = unk_0x74A08123C183740A(iVar0);
		if (unk_0x9A45DBB669E889B7(iVar4))
		{
			iVar5 = unk_0xFE2D0B37A9596A4C(iVar4);
			if (unk_0x4292F1DE8BA2D22E(iVar5) != -1)
			{
				if (unk_0x4292F1DE8BA2D22E(iVar5) == iVar1 || func_84(unk_0x4292F1DE8BA2D22E(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != unk_0x93E99A2DBCBA9CFA())
					{
						if (func_83(unk_0x93E99A2DBCBA9CFA(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_82(*iParam0, 100) * (10f * Global_262145.f_4228)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_82(*iParam0, 100) * (20f * Global_262145.f_4221)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_82(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_83(int iParam0, int iParam1)
{
	if (unk_0xE52BCF7D5014E06E())
	{
		Global_2764201 = { func_69(iParam0) };
		Global_2764214 = { func_69(iParam1) };
		if (unk_0x7DD2CE58D33238D9(&Global_2764201))
		{
			if (unk_0x7DD2CE58D33238D9(&Global_2764214))
			{
				unk_0xEB463FCE742A28B2(&Global_2764131, 35, &Global_2764201);
				unk_0xEB463FCE742A28B2(&Global_2764166, 35, &Global_2764214);
				if (Global_2764131 == Global_2764166)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058070.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23341, bVar0))
			{
				bVar1 = Global_1058070.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_85(iParam0, bVar0, iParam1, bVar1) || !func_85(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_85(iParam0, bVar0, iParam1, bVar1) || !func_85(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_85(iParam0, bVar0, iParam1, bVar1) || !func_85(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_85(iParam0, bVar0, iParam1, bVar1) || !func_85(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 0);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 1);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 2);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 4);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 5);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 6);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 8);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 9);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 10);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 12);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 13);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 14);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_85(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23342, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_1265[iParam2 /*23466*/].f_23342, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		iVar4 = unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar1 = iVar5;
		if (((!func_46(iVar1, 1, 1) || func_87(iVar1, 0)) || BitTest(Global_2657589[iVar1 /*466*/].f_199, 2)) || func_86(iVar1))
		{
		}
		else if (unk_0x4292F1DE8BA2D22E(iVar1) != iParam2)
		{
		}
		else
		{
			iVar2 = unk_0xF2CFBB1105511E1A(iVar1);
			if (unk_0x66599E73DBA5A850(iVar2))
			{
			}
			else
			{
				iVar3 = unk_0x504B9BB48D41C264(iVar2);
				if (iVar4 == joaat("mp_f_freemode_01") || iVar4 == joaat("mp_m_freemode_01"))
				{
					if (iVar3 == joaat("mp_f_freemode_01") || iVar3 == joaat("mp_m_freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_86(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}

bool func_87(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_88(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853910[iParam0 /*862*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xE6DEE82DB0922DF0(iParam0))
		{
			bVar0 = unk_0x4292F1DE8BA2D22E(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_88(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
	}
	if (Global_1575040[iVar1] == 1)
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

void func_89(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x1C57E792CD67EF97())
		{
			iVar3 = iVar0;
			if (unk_0x9A45DBB669E889B7(iVar3))
			{
				iVar4 = unk_0xFE2D0B37A9596A4C(iVar3);
				if (func_46(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x93E99A2DBCBA9CFA())
					{
						iVar1++;
						if (func_83(unk_0x93E99A2DBCBA9CFA(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_46(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x93E99A2DBCBA9CFA())
				{
					if (func_90(unk_0x93E99A2DBCBA9CFA(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_83(unk_0x93E99A2DBCBA9CFA(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_82(*iParam1, 100) * (10f * Global_262145.f_4228)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_82(*iParam1, 100) * (20f * Global_262145.f_4221)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_90(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_91(iParam0), func_91(iParam1));
	return 0f;
}

Vector3 func_91(int iParam0)
{
	return unk_0x30BE8A934C020461(unk_0xF2CFBB1105511E1A(iParam0), 0);
}

int func_92(int iParam0)
{
	int iVar0;
	
	if (unk_0xD5361E259B8F211D() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_82(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_93(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x3CDF9E9E483AADE1(iParam0) > func_80(unk_0x93E99A2DBCBA9CFA()))
		{
			iParam0 = -func_80(unk_0x93E99A2DBCBA9CFA());
		}
	}
	if (func_94(8000, 0, 0) > 0)
	{
		if (func_94(8000, 0, 0) < (iParam0 + func_80(unk_0x93E99A2DBCBA9CFA())))
		{
			iParam0 = (func_94(8000, 0, 0) - func_80(unk_0x93E99A2DBCBA9CFA()));
		}
	}
	return iParam0;
}

int func_94(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_297010[iParam0];
}

int func_95()
{
	return 1;
}

int func_96(char* sParam0)
{
	if (unk_0xB71C73D0269747D5(sParam0))
	{
		return 1;
	}
	else if (unk_0x4310A0DB886F9FED(sParam0, "") || unk_0x4310A0DB886F9FED(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_97()
{
	int iVar0;
	
	if (func_106(unk_0x93E99A2DBCBA9CFA()) || func_105(unk_0x93E99A2DBCBA9CFA()))
	{
		if (Global_262145.f_10102 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10102;
		}
	}
	else if (func_102() || func_98(unk_0x93E99A2DBCBA9CFA()))
	{
		if (Global_262145.f_23282 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23282;
		}
	}
	else if (Global_262145.f_7095 > 30000)
	{
		iVar0 = 30000;
	}
	else
	{
		iVar0 = Global_262145.f_7095;
	}
	return iVar0;
}

int func_98(int iParam0)
{
	return func_99(func_100(iParam0));
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_100(int iParam0)
{
	if (func_101(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

int func_101(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_102()
{
	if (unk_0x1758F8A8511510AB())
	{
		return func_104();
	}
	return func_103(Global_4718592.f_113724);
}

int func_103(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5042[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_104()
{
	return Global_2683862.f_19;
}

bool func_105(int iParam0)
{
	return Global_2657589[iParam0 /*466*/].f_121 == 2;
}

bool func_106(int iParam0)
{
	return Global_2657589[iParam0 /*466*/].f_121 == 7;
}

void func_107(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_9036)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_108() /*5568*/].f_681.f_4242[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574742.f_1[iVar0] == -1)
			{
				Global_1574742.f_1[iVar0] = iParam0;
				Global_1574742 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_108()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_109(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_79();
	}
	unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
}

void func_110(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_131(iParam0, func_78(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_111(iParam0))
	{
		func_128(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_74(iParam0, iVar0, iParam2, 1);
	}
}

int func_111(int iParam0)
{
	if (Global_1665487)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8729:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8731:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8733:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8735:
			case 1304:
			case 7236:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8734:
			case 9538:
			case 11803:
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 12424:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3060:
			case 3235:
			case 3237:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3230:
			case 3224:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3671:
			case 3692:
			case 3233:
			case 3232:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 4032:
			case 4031:
			case 6113:
			case 6112:
			case 6171:
			case 6170:
			case 6536:
			case 6535:
			case 6549:
			case 6548:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 6568:
			case 6567:
			case 7286:
			case 7288:
			case 7290:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8297:
			case 8905:
			case 8013:
			case 8537:
			case 8980:
			case 8982:
			case 8983:
			case 8985:
			case 9624:
			case 9913:
			case 10441:
			case 10443:
			case 10444:
			case 10446:
				return 1;
				break;
			}
	}
	return 0;
}

int func_112(int iParam0, int iParam1)
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
	iVar0 = unk_0xED220A261CE0D89C(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x0B3E167D2C1443C7(iParam0, iParam1);
	}
	return 0;
}

int func_113(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_114(iParam0, iParam1);
}

int func_114(int iParam0, int iParam1)
{
	if (func_126(14) && !func_125(iParam0))
	{
		return 0;
	}
	if (unk_0x73651E4B1D91FE32(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32414 != 0 && !Global_78558)
	{
		return 0;
	}
	if (func_124(&Global_4542597))
	{
		if (func_122(&Global_4542597, iParam0))
		{
			return 0;
		}
		if (func_115(&Global_4542597, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xD530287A65F961E4(iParam0))
		{
			return 0;
		}
		if (unk_0x73651E4B1D91FE32(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_115(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x73651E4B1D91FE32(iParam1))
	{
		return 0;
	}
	if (func_126(14) && !func_125(iParam1))
	{
		return 0;
	}
	if (func_122(uParam0, iParam1))
	{
		return 0;
	}
	if (func_121(uParam0) < 0f)
	{
		func_120(uParam0, 0);
	}
	func_118(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_116(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_116(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x73651E4B1D91FE32(iParam1))
	{
		return 0;
	}
	if (func_126(14) && !func_125(iParam1))
	{
		return 0;
	}
	if (func_122(uParam0, iParam1))
	{
		return 0;
	}
	if (func_121(uParam0) < 0f)
	{
		func_120(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_117(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_117(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_118(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_119(uParam0, iVar0);
		iVar0++;
	}
	func_120(uParam0, (Global_4542596 - 0.5f));
}

void func_119(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_120(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_121(var uParam0)
{
	return uParam0->f_80;
}

bool func_122(var uParam0, int iParam1)
{
	return func_123(uParam0, iParam1) != -1;
}

int func_123(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_124(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

bool func_126(int iParam0)
{
	return Global_43257 == iParam0;
}

int func_127(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2850192[iParam0 /*3*/][func_78(iParam1)];
	if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_128(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, iParam1, iParam3);
	}
}

void func_129(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_127(iParam0, func_78(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_130(iParam0, iVar0, iParam2);
}

void func_130(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2850192[iParam0 /*3*/][func_78(uParam2)];
	unk_0x3CC35ACFFC9C730E(iVar0, iParam1, 1);
}

int func_131(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805027[iParam0 /*3*/][func_78(iParam1)];
		if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_132(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_133(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xE85391CF212DE622())
		{
			func_19(uParam0, 0, 0);
		}
	}
}

void func_134()
{
	bool bVar0;
	int iVar1;
	
	func_256();
	func_226();
	func_177();
	func_53();
	func_175();
	func_174();
	if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) == iLocal_580)
		{
			if (Global_2793044.f_5992.f_1 == 0)
			{
				Global_2793044.f_5992.f_1 = 1;
			}
			if (unk_0x846426CCFA47452B(unk_0xC1A5EC5C986B98AD()) == iLocal_581 || unk_0x846426CCFA47452B(unk_0xC1A5EC5C986B98AD()) == iLocal_582)
			{
				bVar0 = true;
			}
			else if (unk_0x846426CCFA47452B(unk_0xC1A5EC5C986B98AD()) == iLocal_583)
			{
				iVar1 = 1;
			}
		}
		else if (Global_2793044.f_5992.f_1 == 1)
		{
			Global_2793044.f_5992.f_1 = 0;
		}
	}
	if (!BitTest(Local_481.f_52, 31))
	{
		if (func_100(unk_0x93E99A2DBCBA9CFA()) != 154)
		{
			if ((bVar0 || iVar1) || unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_587, (5f / 2f), (5f / 2f), (5f / 2f), 0, 1, 0))
			{
				if (!func_38(unk_0x93E99A2DBCBA9CFA()))
				{
					unk_0x8CC688927B10006C(unk_0xC1A5EC5C986B98AD(), joaat("weapon_unarmed"), 1);
					unk_0xECDAB41968FF21A8(&(Local_481.f_52), 31);
				}
			}
		}
	}
	if ((!BitTest(Local_481.f_52, 26) && bVar0) && !(func_173(0) || func_172()))
	{
		if (func_170("SNK_MNU", Local_481.f_0, 0))
		{
			unk_0xECDAB41968FF21A8(&(Local_481.f_52), 26);
		}
	}
	if (!bVar0 && BitTest(Local_481.f_52, 26))
	{
		if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()) || (unk_0xF57C1326FD40C8A7(Local_481.f_1) && unk_0x2DDFF72E939527F8(Local_481.f_1)))
		{
			unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
			unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), true, 0);
			unk_0xAABD7B0753C5C286(0);
			unk_0xEAB390443C680F72(0, 1065353216);
			if (Local_481.f_51 > 0)
			{
				Local_160[unk_0xD378D2332270959A() /*10*/].f_3 = Local_481.f_51;
				Local_481.f_51 = 0;
			}
			func_440();
			unk_0x061B1200C95204CB(&(Local_481.f_53), 7);
			if (unk_0xF57C1326FD40C8A7(Local_481.f_1))
			{
				unk_0x42B9FA814615C4F9(Local_481.f_1, 0);
			}
			unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
		}
		func_167(1, Local_481.f_0);
		unk_0x061B1200C95204CB(&(Local_481.f_52), 26);
	}
	if (!BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 21))
	{
		if (iVar1 || func_165(unk_0xC1A5EC5C986B98AD(), Local_481.f_50))
		{
			unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 21);
		}
	}
	if (bVar0 || iVar1)
	{
		func_162();
		func_156();
		func_150();
		func_146(1);
		func_139();
		unk_0x1A743F113DFE1529(unk_0x93E99A2DBCBA9CFA());
		unk_0x8CB2000285DDE093(unk_0x93E99A2DBCBA9CFA());
		if (BitTest(Global_2793044.f_7, 0))
		{
			unk_0xF3C2C8AE5D33E995(Local_85.f_73);
			func_137(Local_587, func_138(30), 0);
			unk_0x061B1200C95204CB(&(Global_2793044.f_7), 0);
		}
	}
	else
	{
		if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_587, 5f, 5f, 2.5f, 0, 1, 0))
		{
			func_146(0);
		}
		if (!BitTest(Global_2793044.f_7, 0))
		{
			unk_0xD92F2F3253755455();
			func_135(Local_587, func_138(30), "");
			unk_0xECDAB41968FF21A8(&(Global_2793044.f_7), 0);
		}
	}
	if ((BitTest(Local_85.f_25, 22) || BitTest(Local_85.f_25, 23)) || BitTest(Local_85.f_25, 7))
	{
		unk_0x6352F03F31CA0713(unk_0x93E99A2DBCBA9CFA());
	}
}

int func_135(struct<3> Param0, char* sParam3, char* sParam4)
{
	int iVar0;
	
	if (!unk_0x2AC37494BBF1DB16(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!unk_0x4310A0DB886F9FED(&(Global_2793044.f_4063[iVar0 /*26*/].f_4), sParam3))
			{
				if (unk_0x2AC37494BBF1DB16(&(Global_2793044.f_4063[iVar0 /*26*/].f_4)))
				{
					Global_2793044.f_4063[iVar0 /*26*/] = 1;
					Global_2793044.f_4063[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2793044.f_4063[iVar0 /*26*/].f_4), sParam3, 24);
					StringCopy(&(Global_2793044.f_4063[iVar0 /*26*/].f_10), sParam4, 64);
					return 1;
				}
			}
			else if (!func_136(Global_2793044.f_4063[iVar0 /*26*/].f_1, Param0, 0))
			{
				Global_2793044.f_4063[iVar0 /*26*/] = 1;
				Global_2793044.f_4063[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2793044.f_4063[iVar0 /*26*/].f_4), sParam3, 24);
				StringCopy(&(Global_2793044.f_4063[iVar0 /*26*/].f_10), sParam4, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_136(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_137(struct<3> Param0, char* sParam3, int iParam4)
{
	int iVar0;
	
	if (!unk_0x2AC37494BBF1DB16(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (unk_0x4310A0DB886F9FED(&(Global_2793044.f_4063[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || func_136(Global_2793044.f_4063[iVar0 /*26*/].f_1, Param0, 0))
				{
					Global_2793044.f_4063[iVar0 /*26*/] = 0;
					Global_2793044.f_4063[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2793044.f_4063[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2793044.f_4063[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

char* func_138(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_139()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x061B1200C95204CB(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 28);
	if (!func_425(Local_85.f_0) && func_46(unk_0x93E99A2DBCBA9CFA(), 1, 1))
	{
		if (unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &iVar0, 1))
		{
			if ((((iVar0 != joaat("weapon_unarmed") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_flare")) && iVar0 != joaat("weapon_snowball")) && iVar0 != joaat("weapon_flashlight"))
			{
				if ((((unk_0x5C3926F501DBBD3A(unk_0x93E99A2DBCBA9CFA()) && unk_0xD495130AEF425591(unk_0xC1A5EC5C986B98AD(), unk_0x0DB8386015E986B7(Local_85.f_0), 45f)) && unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), unk_0x0DB8386015E986B7(Local_85.f_0), 5f, 5f, 2f, 0, 1, 0)) || unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), unk_0x0DB8386015E986B7(Local_85.f_0))) || unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), unk_0x0DB8386015E986B7(Local_85.f_0)))
				{
					if (!(func_173(0) || func_172()) && ((!func_143(unk_0x93E99A2DBCBA9CFA()) || func_100(unk_0x93E99A2DBCBA9CFA()) == 154) || func_100(unk_0x93E99A2DBCBA9CFA()) == 171))
					{
						if (func_141(unk_0x93E99A2DBCBA9CFA(), unk_0x0DB8386015E986B7(Local_85.f_0)) || unk_0xFD75FD38D5622C50(unk_0x93E99A2DBCBA9CFA()))
						{
							if (!BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 1))
							{
								func_140(func_8(unk_0xFE2D0B37A9596A4C(unk_0x68FA7D8F1351FBBD())));
								unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 1);
							}
							if (!BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 8))
							{
								unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 8);
							}
						}
						unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 28);
					}
				}
			}
		}
	}
	if (!BitTest(Local_481.f_52, 28))
	{
		if (BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 28))
		{
			if (unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &iVar1, 1))
			{
				if (iVar1 != 0 && iVar1 != joaat("weapon_snowball"))
				{
					iVar2 = unk_0x4C65E4658A34DD54(iVar1);
					if (iVar2 == joaat("GROUP_PISTOL"))
					{
						sLocal_538 = "hold_up_head_additive_pistol";
						unk_0x3EE48ADC8C7F5CC4(unk_0xC1A5EC5C986B98AD(), "mp_am_hold_up", sLocal_538, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else if ((((iVar2 == joaat("GROUP_MG") || iVar2 == joaat("GROUP_RIFLE")) || iVar2 == joaat("GROUP_SHOTGUN")) || iVar2 == joaat("GROUP_SNIPER")) || iVar2 == joaat("GROUP_SMG"))
					{
						sLocal_538 = "hold_up_head_additive_rifle";
						unk_0x3EE48ADC8C7F5CC4(unk_0xC1A5EC5C986B98AD(), "mp_am_hold_up", sLocal_538, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else
					{
						sLocal_538 = "";
					}
					unk_0xECDAB41968FF21A8(&(Local_481.f_52), 28);
				}
			}
		}
	}
	else if (!BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 28) || unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
	{
		if (!unk_0x2AC37494BBF1DB16(sLocal_538))
		{
			if (unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "mp_am_hold_up", sLocal_538, 3))
			{
				unk_0x82F27DF65F4D68B5(unk_0xC1A5EC5C986B98AD(), "mp_am_hold_up", sLocal_538, -1056964608);
			}
		}
		unk_0x061B1200C95204CB(&(Local_481.f_52), 28);
	}
	if (BitTest(Local_85.f_27, 1))
	{
		if (!BitTest(Local_160[unk_0xD378D2332270959A() /*10*/].f_5, 3))
		{
			if (!func_425(Local_85.f_16) && func_46(unk_0x93E99A2DBCBA9CFA(), 1, 1))
			{
				if (unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &iVar3, 1))
				{
					if ((((iVar3 != joaat("weapon_unarmed") && iVar3 != joaat("object")) && iVar3 != joaat("weapon_flare")) && iVar3 != joaat("weapon_snowball")) && !(func_173(0) || func_172()))
					{
						if (unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), unk_0x0DB8386015E986B7(Local_85.f_16)) || unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), unk_0x0DB8386015E986B7(Local_85.f_16)))
						{
							if (func_141(unk_0x93E99A2DBCBA9CFA(), unk_0x0DB8386015E986B7(Local_85.f_16)) || unk_0xFD75FD38D5622C50(unk_0x93E99A2DBCBA9CFA()))
							{
								unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/].f_5), 3);
							}
						}
					}
				}
			}
		}
	}
}

void func_140(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = 1398154308;
	Var0.f_1 = unk_0x93E99A2DBCBA9CFA();
	if (!iParam0 == 0)
	{
		unk_0x46F55A5B9F053761(1, &Var0, 2, iParam0);
	}
}

int func_141(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	
	if (func_46(iParam0, 1, 1))
	{
		Var0 = { func_91(iParam0) };
	}
	if (!unk_0x66599E73DBA5A850(iParam1))
	{
		Var3 = { unk_0x30BE8A934C020461(iParam1, 1) };
	}
	Var9 = { Var3 - Var0 };
	if (!unk_0x66599E73DBA5A850(iParam1))
	{
		Var6 = { unk_0x7394CB479CCA24AF(iParam1, 0f, 7f, 0f) };
		Var12 = { Var6 - Var3 };
	}
	Var9.f_2 = 0f;
	Var12.f_2 = 0f;
	fVar15 = func_142(Var9, Var12);
	if (fVar15 < -0.1f)
	{
		return 1;
	}
	return 0;
}

float func_142(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_143(int iParam0)
{
	if (func_40(iParam0))
	{
		return 1;
	}
	if (func_144(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_144(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_145(iParam0, 9);
	}
	return 0;
}

var func_145(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

void func_146(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x93E99A2DBCBA9CFA() != Global_2793044.f_5150 && !func_38(unk_0x93E99A2DBCBA9CFA()))
	{
		if (!BitTest(Local_481.f_52, 6))
		{
			if (iParam0 == 1)
			{
				if (unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &iVar2, 1))
				{
					if ((((iVar2 != joaat("weapon_unarmed") && iVar2 != 0) && iVar2 != joaat("object")) && iVar2 != joaat("weapon_flare")) && iVar2 != joaat("weapon_snowball"))
					{
						if (!unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_540, 2.5f, 2.5f, 3f, 0, 1, 0))
						{
							iVar1 = 1;
						}
						iVar0 = 1;
					}
				}
				if ((((iVar1 == 1 || BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 5)) || (iVar0 == 1 && Local_85.f_3 >= 3)) || (iVar0 == 1 && BitTest(Local_85.f_26, 16))) || BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 12))
				{
					if (((!BitTest(Local_85.f_25, 12) || Local_85.f_3 >= 3) || BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 12)) || (iVar0 == 1 && BitTest(Local_85.f_26, 16)))
					{
						Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_36++;
						func_14(&(Global_2672505.f_3542));
						func_19(&(Global_2672505.f_3542), 0, 0);
						if (Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_36 <= 2)
						{
							if (func_149())
							{
								if (func_148() < 2)
								{
									unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 37, unk_0x7F5C2D0AC2228834(func_148()));
								}
								else
								{
									unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 37, unk_0x7F5C2D0AC2228834(2));
								}
							}
							else
							{
								unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 37, unk_0x7F5C2D0AC2228834(2));
							}
						}
						else if (Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_36 >= 5)
						{
							if (func_149())
							{
								if (func_148() < 3)
								{
									unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 37, unk_0x7F5C2D0AC2228834(func_148()));
								}
								else
								{
									unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 37, unk_0x7F5C2D0AC2228834(3));
								}
							}
							else
							{
								unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 37, unk_0x7F5C2D0AC2228834(4));
							}
						}
						else if (func_149())
						{
							if (func_148() < 3)
							{
								unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 37, unk_0x7F5C2D0AC2228834(func_148()));
							}
							else
							{
								unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 37, unk_0x7F5C2D0AC2228834(3));
							}
						}
						else
						{
							unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 37, unk_0x7F5C2D0AC2228834(3));
						}
						if (!BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 1))
						{
							unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 2);
						}
						unk_0xECDAB41968FF21A8(&(Local_481.f_52), 6);
						unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 25);
					}
				}
			}
			if (!BitTest(Local_481.f_52, 27) && !BitTest(Local_481.f_52, 6))
			{
				if (unk_0xE3A9F9074FB79A61(unk_0xC1A5EC5C986B98AD()))
				{
					if (func_18(&uLocal_578, 2000, 0) || unk_0x330C3CDE292DD260(unk_0xC1A5EC5C986B98AD()))
					{
						unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 37, unk_0x7F5C2D0AC2228834(1));
						unk_0xECDAB41968FF21A8(&(Local_481.f_52), 27);
						unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 27);
						unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 25);
						if (!BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 1))
						{
							unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 2);
						}
					}
				}
				else if (func_147(&uLocal_578))
				{
					func_14(&uLocal_578);
				}
			}
		}
		if (!BitTest(Local_481.f_52, 24))
		{
			if (BitTest(Local_481.f_52, 31))
			{
				if (func_425(Local_85.f_0))
				{
					if (func_149())
					{
						if (func_148() < 3)
						{
							unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 37, unk_0x7F5C2D0AC2228834(func_148()));
						}
						else
						{
							unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 37, unk_0x7F5C2D0AC2228834(3));
						}
					}
					else
					{
						unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 13, unk_0x7F5C2D0AC2228834(3));
					}
					unk_0xECDAB41968FF21A8(&(Local_481.f_52), 24);
					if (!BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 1))
					{
						unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 2);
					}
				}
			}
		}
	}
}

bool func_147(var uParam0)
{
	return uParam0->f_1;
}

int func_148()
{
	return Global_262145.f_13072;
}

int func_149()
{
	if (func_144(unk_0x93E99A2DBCBA9CFA()) && func_100(unk_0x93E99A2DBCBA9CFA()) == 154)
	{
		return 1;
	}
	return 0;
}

void func_150()
{
	int iVar0;
	int iVar1;
	
	if (func_46(unk_0x93E99A2DBCBA9CFA(), 1, 1))
	{
		if (!BitTest(Local_481.f_52, 23) && BitTest(Local_85.f_25, 17))
		{
			if (!func_425(Local_85.f_0))
			{
				iLocal_547 = unk_0x7E80728A2E77D8E8(Local_85.f_31);
				if (iLocal_547 != -1)
				{
					if (unk_0x411B750250543BD0(iLocal_547))
					{
						if ((!BitTest(Global_1926512, 15) && func_155()) && func_154())
						{
							unk_0xECDAB41968FF21A8(&Global_1926512, 15);
						}
						if (!unk_0xF0E4B64AC0B5660E())
						{
							iVar0 = func_131(1191, -1, 0);
							if (!BitTest(iVar0, 3))
							{
								if (unk_0xABF98B1999FE64CA(iLocal_547) < 0.4f && unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) == iLocal_580)
								{
									func_153("FHU_HELP3", -1);
									unk_0xECDAB41968FF21A8(&iVar0, 3);
									func_128(1191, iVar0, -1, 1, 0);
								}
							}
							else if (!BitTest(iVar0, 5) || !BitTest(iVar0, 6))
							{
								if (unk_0xABF98B1999FE64CA(iLocal_547) < 0.7f && unk_0x41AD4BF315E01D41(unk_0xC1A5EC5C986B98AD()) == iLocal_580)
								{
									func_153("FHU_HELP4", -1);
									unk_0xECDAB41968FF21A8(&iVar0, 5);
									func_128(1191, iVar0, -1, 1, 0);
									unk_0xECDAB41968FF21A8(&(Local_481.f_52), 23);
								}
							}
							else
							{
								unk_0xECDAB41968FF21A8(&(Local_481.f_52), 23);
							}
						}
					}
				}
			}
		}
		if (((((((((!func_39(unk_0x93E99A2DBCBA9CFA(), 146) && !func_152()) && func_100(unk_0x93E99A2DBCBA9CFA()) != 167) && func_100(unk_0x93E99A2DBCBA9CFA()) != 190) && func_100(unk_0x93E99A2DBCBA9CFA()) != 191) && func_100(unk_0x93E99A2DBCBA9CFA()) != 250) && func_100(unk_0x93E99A2DBCBA9CFA()) != 237) && func_100(unk_0x93E99A2DBCBA9CFA()) != 238) && !func_38(unk_0x93E99A2DBCBA9CFA())) && (!func_143(unk_0x93E99A2DBCBA9CFA()) || func_100(unk_0x93E99A2DBCBA9CFA()) == 154))
		{
			if (!BitTest(Local_481.f_53, 1))
			{
				if (!unk_0xF0E4B64AC0B5660E())
				{
					if (((((func_425(Local_85.f_0) || Local_85.f_3 > 7) && !BitTest(Local_85.f_25, 20)) && !BitTest(Local_85.f_25, 11)) && !BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 5)) && unk_0xE2D062C14C126762(Local_548, 1.5f) == 0)
					{
						iVar1 = func_131(1191, -1, 0);
						if (!BitTest(iVar1, 20) || !BitTest(iVar1, 21))
						{
							func_153("FHU_HELPM", -1);
							if (!BitTest(iVar1, 20))
							{
								unk_0xECDAB41968FF21A8(&iVar1, 20);
							}
							else
							{
								unk_0xECDAB41968FF21A8(&iVar1, 21);
							}
							func_128(1191, iVar1, -1, 1, 0);
							unk_0xECDAB41968FF21A8(&(Local_481.f_53), 1);
						}
						else
						{
							unk_0xECDAB41968FF21A8(&(Local_481.f_53), 1);
						}
					}
				}
			}
			else if (func_151("FHU_HELPM"))
			{
				if ((BitTest(Local_85.f_25, 20) || BitTest(Local_85.f_25, 11)) || BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 5))
				{
					unk_0xCD3C8E1022864F65(1);
				}
			}
		}
	}
}

bool func_151(char* sParam0)
{
	unk_0x56C9BC27C0FF68D7(sParam0);
	return unk_0x6A92D111B5409879(0);
}

bool func_152()
{
	return Global_1835493;
}

void func_153(char* sParam0, int iParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
}

var func_154()
{
	return BitTest(Global_2793044.f_1825, 21);
}

var func_155()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_143, 3);
}

void func_156()
{
	float fVar0;
	float fVar1;
	
	if (Local_85.f_3 == 4)
	{
		if (func_46(unk_0x93E99A2DBCBA9CFA(), 1, 1))
		{
			if (!func_425(Local_85.f_0))
			{
				iLocal_547 = unk_0x7E80728A2E77D8E8(Local_85.f_31);
				if (iLocal_547 != -1)
				{
					if (unk_0x411B750250543BD0(iLocal_547))
					{
						fVar0 = unk_0xABF98B1999FE64CA(iLocal_547);
						fVar0 = (fVar0 * 1000f);
						if (fVar0 <= 890f)
						{
							func_157(unk_0xF2DB717A73826179(fVar0), 890, "HUP_PROG", func_161(unk_0x4292F1DE8BA2D22E(unk_0x93E99A2DBCBA9CFA())), 0, 1, 13);
						}
						fVar1 = unk_0x2851854AA95554D7(unk_0x93E99A2DBCBA9CFA());
						fVar1 = (fVar1 - 0.3f);
						if (fVar1 < 0f)
						{
							fVar1 = 0f;
						}
						fVar1 = (fVar1 * 4f);
						Local_160[unk_0xD378D2332270959A() /*10*/].f_6 = fVar1;
					}
				}
			}
		}
	}
}

void func_157(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	func_158(iParam0, iParam1, sParam2, uParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
}

void func_158(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_160(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655472.f_1 = 1;
		func_159(0, iVar0);
		Global_1655472.f_1177[iVar0] = uParam0;
		Global_1655472.f_1177.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1655472.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1655472.f_1177.f_194[iVar0] = uParam3;
		Global_1655472.f_1177.f_183[iVar0] = uParam4;
		Global_1655472.f_1177.f_216[iVar0] = uParam5;
		Global_1655472.f_1177.f_227[iVar0 /*3*/] = fParam6;
		Global_1655472.f_1177.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1655472.f_1177.f_258[iVar0] = iParam8;
		Global_1655472.f_1177.f_269[iVar0] = uParam9;
		Global_1655472.f_1177.f_312[iVar0] = iParam10;
		Global_1655472.f_1177.f_323[iVar0] = iParam11;
		Global_1655472.f_1177.f_334[iVar0] = iParam12;
		Global_1655472.f_1177.f_345[iVar0] = iParam13;
		Global_1655472.f_1172 = 1;
		Global_1655472.f_1177.f_356[iVar0] = iParam14;
		Global_1655472.f_1177.f_367[iVar0] = iParam15;
		Global_1655472.f_1177.f_378[iVar0] = iParam16;
		Global_1655472.f_1177.f_389[iVar0] = iParam17;
		Global_1655472.f_1177.f_400[iVar0] = iParam18;
		Global_1655472.f_1177.f_411[iVar0] = iParam19;
		Global_1655472.f_1177.f_422[iVar0] = iParam20;
		Global_1655472.f_1177.f_433[iVar0] = iParam21;
		Global_1655472.f_1177.f_444[iVar0] = iParam22;
		Global_1655472.f_1177.f_455[iVar0] = iParam23;
		Global_1655472.f_1177.f_466[iVar0] = iParam24;
		Global_1655472.f_1177.f_205[iVar0] = iParam25;
		Global_1655472.f_1177.f_477[iVar0] = iParam26;
		Global_1655472.f_1177.f_488[iVar0] = iParam27;
		Global_1655472.f_1177.f_499[iVar0] = iParam28;
		Global_1655472.f_1177.f_510[iVar0] = iParam29;
		Global_1655472.f_1177.f_521[iVar0] = iParam30;
		Global_1655472.f_1177.f_532[iVar0] = iParam31;
		Global_1655472.f_1177.f_543[iVar0] = iParam32;
		Global_1655472.f_1177.f_554[iVar0] = iParam33;
		Global_1655472.f_1177.f_565[iVar0] = iParam34;
		Global_1655472.f_1177.f_576[iVar0] = iParam35;
		Global_1655472.f_1177.f_587[iVar0] = iParam36;
	}
}

void func_159(int iParam0, int iParam1)
{
	unk_0xECDAB41968FF21A8(&(Global_1655472.f_7009[iParam0]), iParam1);
}

int func_160(int iParam0, int iParam1)
{
	return BitTest(Global_1655472.f_7009[iParam0], iParam1);
}

int func_161(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	return 116;
}

void func_162()
{
	if (!BitTest(Local_481.f_53, 2))
	{
		unk_0x28818732C8F0F80E("oddjobs@shop_robbery@rob_till");
		unk_0x28818732C8F0F80E(func_163());
		if (unk_0x2BBF749E555360DC("oddjobs@shop_robbery@rob_till") && unk_0x2BBF749E555360DC(func_163()))
		{
			unk_0xECDAB41968FF21A8(&(Local_481.f_53), 2);
		}
	}
}

char* func_163()
{
	if (func_164(unk_0x93E99A2DBCBA9CFA()))
	{
		return "anim@am_hold_up@male";
	}
	return "anim@am_hold_up@female";
}

int func_164(int iParam0)
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		return 1;
	}
	return Global_2657589[iParam0 /*466*/].f_240;
}

int func_165(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { 0f, 0f, 0f };
	Var3 = { 0f, 0f, 0f };
	fVar6 = 0f;
	func_166(iParam1, &Var0, &Var3, &fVar6);
	if (unk_0x9DC9E896F189AAA5(iParam0, Var0, Var3, fVar6, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_166(int iParam0, var uParam1, var uParam2, float fParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1390.033f, 3605.529f, 33.98091f };
		*uParam2 = { 1394.412f, 3607.156f, 36.38288f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3041.675f, 583.5931f, 6.908931f };
		*uParam2 = { -3037.284f, 585.0375f, 9.521532f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3245.184f, 1000.124f, 11.83071f };
		*uParam2 = { -3240.504f, 999.7783f, 14.46645f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 549.5332f, 2668.464f, 41.15651f };
		*uParam2 = { 548.9114f, 2673.108f, 43.7766f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2554.316f, 380.8569f, 107.623f };
		*uParam2 = { 2558.98f, 380.6908f, 110.2684f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2675.476f, 3280.807f, 54.24115f };
		*uParam2 = { 2679.577f, 3278.526f, 56.8955f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1729.145f, 6417.834f, 34.03724f };
		*uParam2 = { 1727.07f, 6413.635f, 36.66442f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1958.61f, 3742.512f, 31.34376f };
		*uParam2 = { 1960.958f, 3738.465f, 33.98634f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 24.51093f, -1344.449f, 28.49703f };
		*uParam2 = { 24.52224f, -1349.084f, 31.14272f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 373.296f, 329.2379f, 102.5664f };
		*uParam2 = { 372.1347f, 324.6985f, 105.214f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1168.183f, 2711.203f, 37.06316f };
		*uParam2 = { 1163.144f, 2711.246f, 40.16688f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2966.142f, 388.6418f, 14.04331f };
		*uParam2 = { -2965.812f, 393.6473f, 17.17248f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1223.599f, -909.8984f, 11.32635f };
		*uParam2 = { -1219.443f, -907.0756f, 14.45929f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.524f, -980.3087f, 45.41582f };
		*uParam2 = { 1134.22f, -985.284f, 48.53235f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.413f, -379.3236f, 39.16341f };
		*uParam2 = { -1487.954f, -375.7666f, 42.28885f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1699.447f, 4921.57f, 41.06366f };
		*uParam2 = { 1695.64f, 4924.245f, 44.22165f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -705.7869f, -911.6997f, 18.2156f };
		*uParam2 = { -705.7026f, -916.374f, 21.33545f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.26995f, -1756.669f, 28.42101f };
		*uParam2 = { -48.26036f, -1760.285f, 31.56342f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1164.697f, -320.7587f, 68.2051f };
		*uParam2 = { 1165.463f, -325.0899f, 71.37893f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1821.205f, 795.8699f, 137.0893f };
		*uParam2 = { -1818.041f, 792.3982f, 140.1836f };
		*fParam3 = 2.25f;
	}
}

void func_167(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_169(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23270.f_8892)
	{
		unk_0x833DC7C29EA6EEF3(15);
		Global_23270.f_8892 = 0;
	}
	unk_0x314A52B02A05EEDE(0f);
	if (Global_23270.f_6071[iVar0])
	{
		unk_0x32FF0B09752F532B(9, 0);
		Global_23270.f_6071[iVar0] = 0;
	}
	if (Global_23270.f_6057[iVar0])
	{
		unk_0xFBA79BC11313B81D("CommonMenu");
		Global_23270.f_6057[iVar0] = 0;
	}
	if (Global_23270.f_6064[iVar0])
	{
		unk_0xFBA79BC11313B81D("MPShopSale");
		Global_23270.f_6064[iVar0] = 0;
	}
	if (bParam0)
	{
		func_168(&(Global_23270.f_6103[iVar0 /*10*/]));
		Global_23270.f_6164[iVar0] = 0;
	}
	else
	{
		Global_23270.f_6164[iVar0] = 0;
	}
}

void func_168(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x5FAF55B1F052A2E6(*uParam0))
		{
			unk_0xD0AE101DBAA43C98(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_169(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0xA26A9A07F761D8F8() && unk_0x839E00E966CE3F2D())
		{
			iParam2 = unk_0x3B01E4A065DEF5C7();
		}
	}
	StringCopy(&cVar0, unk_0x688846D56810779A(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x14580F20CBCE4FA9(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_23270.f_6164[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23270.f_6164[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23270.f_6164[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

bool func_170(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_169(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23270.f_6078[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x2AC37494BBF1DB16(&(Global_23270.f_6078[iVar0 /*4*/])))
	{
		unk_0xA3C681843B51A4CC(&(Global_23270.f_6078[iVar0 /*4*/]), 9);
		Global_23270.f_6071[iVar0] = 1;
		if (!unk_0x7F29CD9C0A5C1E44(&(Global_23270.f_6078[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xEBA1698B77FD0A86("CommonMenu", 0);
	Global_23270.f_6057[iVar0] = 1;
	if (!unk_0x9812897315C21146("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xEBA1698B77FD0A86("MPShopSale", 0);
		Global_23270.f_6064[iVar0] = 1;
		if (!unk_0x9812897315C21146("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23270.f_6103[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_171(&(Global_23270.f_6103[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_171(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x5FAF55B1F052A2E6(*uParam0))
			{
				*uParam0 = unk_0x2B4645565204EA06(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x5FAF55B1F052A2E6(*uParam0))
					{
						uParam0->f_8 = unk_0xA5E11AF0A2B928C1();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0xA5E11AF0A2B928C1();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x5FAF55B1F052A2E6(*uParam0))
			{
				uParam0->f_8 = unk_0xA5E11AF0A2B928C1();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x5FAF55B1F052A2E6(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

int func_172()
{
	if (unk_0x24B651D85CCE5EB4(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_173(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20383.f_1 > 3)
		{
			if (BitTest(Global_8253, 14))
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
	if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20383.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_174()
{
	if (unk_0x93E99A2DBCBA9CFA() != Global_2793044.f_5150 && !func_38(unk_0x93E99A2DBCBA9CFA()))
	{
		if (!BitTest(Local_481.f_52, 24))
		{
			if (Local_85.f_74 == unk_0x93E99A2DBCBA9CFA() || (BitTest(Local_481.f_52, 31) && unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_590, 20f, 20f, 20f, 0, 1, 0)))
			{
				if (func_425(Local_85.f_0))
				{
					if (func_149())
					{
						if (func_148() < 3)
						{
							unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 37, unk_0x7F5C2D0AC2228834(func_148()));
						}
						else
						{
							unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 37, unk_0x7F5C2D0AC2228834(3));
						}
					}
					else
					{
						unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 13, unk_0x7F5C2D0AC2228834(3));
					}
					unk_0xECDAB41968FF21A8(&(Local_481.f_52), 24);
					if (!BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 1))
					{
						unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 2);
					}
				}
			}
		}
	}
}

int func_175()
{
	if (!BitTest(Local_85.f_27, 0))
	{
		return 0;
	}
	if (func_425(Local_85.f_16))
	{
		if (unk_0xCE4AAA035282336C(uLocal_796))
		{
			unk_0x45533C09A6C9B409(&uLocal_796);
		}
		return 0;
	}
	if (Local_85.f_68 == 4)
	{
		if (!unk_0xCE4AAA035282336C(uLocal_796))
		{
			uLocal_796 = unk_0x53B496178AE44636(unk_0x0DB8386015E986B7(Local_85.f_16));
			unk_0x1886753DA39F38F8(uLocal_796, 1);
			unk_0x225EB85DBC38E707(uLocal_796, 0.7f);
		}
	}
	if (!unk_0xFE2AB315FD8C7A6F(Local_85.f_16))
	{
		return 0;
	}
	switch (Local_85.f_68)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_16), joaat("script_task_follow_nav_mesh_to_coord")) != 0)
			{
				if (unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_16), joaat("script_task_follow_nav_mesh_to_coord")) != 1)
				{
					if (func_46(unk_0x93E99A2DBCBA9CFA(), 1, 1))
					{
						unk_0xF41AB1E9C5AC9D70(unk_0x0DB8386015E986B7(Local_85.f_16), unk_0xC1A5EC5C986B98AD(), -1, 4f, 2f, 1073741824, 0);
					}
				}
			}
			break;
		
		case 3:
			if (!BitTest(Local_85.f_27, 5) && !BitTest(Local_160[unk_0xD378D2332270959A() /*10*/].f_5, 0))
			{
				if (unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_16), joaat("script_task_go_to_entity")) != 0 && unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_16), joaat("script_task_go_to_entity")) != 1)
				{
					unk_0x06A2A5F6A6959BE7(unk_0x0DB8386015E986B7(Local_85.f_16), unk_0xC1A5EC5C986B98AD(), 10000);
					unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/].f_5), 0);
				}
			}
			if ((!BitTest(Local_85.f_27, 6) && !BitTest(Local_160[unk_0xD378D2332270959A() /*10*/].f_5, 1)) && !func_176())
			{
				func_424(&uLocal_604, 4, unk_0x0DB8386015E986B7(Local_85.f_16), "StoreHero", 1, 0);
				unk_0x824D23CC0FE1835A(unk_0x0DB8386015E986B7(Local_85.f_16), "GENERIC_INSULT_HIGH", "SPEECH_PARAMS_FORCE", 1);
				unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/].f_5), 1);
			}
			break;
		
		case 4:
			if ((!BitTest(Local_85.f_27, 7) && !BitTest(Local_160[unk_0xD378D2332270959A() /*10*/].f_5, 2)) && !func_176())
			{
				func_424(&uLocal_604, 4, unk_0x0DB8386015E986B7(Local_85.f_16), "StoreHero", 1, 0);
				unk_0x824D23CC0FE1835A(unk_0x0DB8386015E986B7(Local_85.f_16), "GENERIC_FUCK_YOU", "SPEECH_PARAMS_FORCE", 1);
				unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/].f_5), 2);
			}
			if (BitTest(Local_85.f_27, 7) || BitTest(Local_160[unk_0xD378D2332270959A() /*10*/].f_5, 2))
			{
				if (unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_16), joaat("script_task_combat_hated_targets_around_ped")) != 0 && unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_16), joaat("script_task_combat_hated_targets_around_ped")) != 1)
				{
					unk_0x909F139DC199D8E0(unk_0x0DB8386015E986B7(Local_85.f_16));
					unk_0x8386356641D0DED1(unk_0x0DB8386015E986B7(Local_85.f_16), Global_1837214);
					unk_0xB7EB8CCA28444BAB(unk_0x0DB8386015E986B7(Local_85.f_16), 20f, 0);
					unk_0x71A535529C1CA5DF(unk_0x0DB8386015E986B7(Local_85.f_16), 1);
				}
			}
			break;
		
		case 5:
			if (unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_16), joaat("script_task_perform_sequence")) != 0 && unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_16), joaat("script_task_perform_sequence")) != 1)
			{
				unk_0x909F139DC199D8E0(unk_0x0DB8386015E986B7(Local_85.f_16));
				unk_0x3D7110D966B0CEA2(unk_0x0DB8386015E986B7(Local_85.f_16), uLocal_556);
				unk_0x71A535529C1CA5DF(unk_0x0DB8386015E986B7(Local_85.f_16), 1);
			}
			else if (unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_16), joaat("script_task_turn_ped_to_face_entity")) != 1 && unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_16), joaat("script_task_turn_ped_to_face_entity")) != 0)
			{
				if (func_18(&uLocal_576, 5000, 0))
				{
					func_14(&uLocal_576);
					unk_0x06A2A5F6A6959BE7(unk_0x0DB8386015E986B7(Local_85.f_16), unk_0xC1A5EC5C986B98AD(), 10000);
				}
			}
			break;
	}
	return 1;
}

int func_176()
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
	{
		return 1;
	}
	return 0;
}

void func_177()
{
	if (Local_85.f_3 == 4)
	{
		if ((!BitTest(Local_85.f_25, 10) && !BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 4)) && BitTest(Local_85.f_25, 17))
		{
			if (unk_0x7E2E2E8A648611F4(Local_85.f_14))
			{
				if (unk_0xFE2AB315FD8C7A6F(Local_85.f_14) || (!unk_0xDD2D9A241E18E942(Local_85.f_14) && unk_0xE85391CF212DE622()))
				{
					if (!func_425(Local_85.f_0))
					{
						if (unk_0x48A4D45B3B4CEFFD(unk_0x0DB8386015E986B7(Local_85.f_0)))
						{
							unk_0xDDE449983CE7572E(unk_0xDCE61FCD9D7F205E(Local_85.f_14), true, 0);
							unk_0x8D62C770FD5498FA(unk_0xDCE61FCD9D7F205E(Local_85.f_14), 1);
							unk_0x38B05AC704C5FCB8(unk_0xDCE61FCD9D7F205E(Local_85.f_14), 0f, 0f, -1f);
							unk_0xBB5C1E4A07AE1774(unk_0x0DB8386015E986B7(Local_85.f_0), 16);
							unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 4);
						}
					}
					else
					{
						unk_0xDDE449983CE7572E(unk_0xDCE61FCD9D7F205E(Local_85.f_14), true, 0);
						unk_0x8D62C770FD5498FA(unk_0xDCE61FCD9D7F205E(Local_85.f_14), 1);
						unk_0x38B05AC704C5FCB8(unk_0xDCE61FCD9D7F205E(Local_85.f_14), 0f, 0f, -1f);
						unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 4);
					}
				}
			}
		}
	}
	func_178();
}

void func_178()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x7E2E2E8A648611F4(Local_85.f_14))
	{
		if (!unk_0x055111B11E6624FD(unk_0xDCE61FCD9D7F205E(Local_85.f_14), 0))
		{
			if ((!BitTest(Local_85.f_25, 11) && !BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 5)) && Local_85.f_39 > 0f)
			{
				if (((func_225() || func_224(0.87f)) || Local_85.f_3 >= 5) || BitTest(Local_85.f_25, 10))
				{
					if (!BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 11))
					{
						if (unk_0xFE2AB315FD8C7A6F(Local_85.f_14))
						{
							unk_0x7B20BBC4C133A1DF(unk_0xDCE61FCD9D7F205E(Local_85.f_14), 0, 0);
							unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 13);
						}
						if (func_100(unk_0x93E99A2DBCBA9CFA()) != 155)
						{
							unk_0x20CBA0C6FE1D1526(func_52(1), 1);
						}
						unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 11);
					}
					if (unk_0x836874EEF89A8AC0(unk_0xDCE61FCD9D7F205E(Local_85.f_14), unk_0xC1A5EC5C986B98AD()))
					{
						Local_160[unk_0xD378D2332270959A() /*10*/].f_7 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
						unk_0xDE209AFE421606C6(Local_160[unk_0xD378D2332270959A() /*10*/].f_7, &(Local_160[unk_0xD378D2332270959A() /*10*/].f_7.f_2), 0, 0);
						if (unk_0xFE2AB315FD8C7A6F(Local_85.f_14))
						{
							unk_0xA81AA70A4D25E140(unk_0xDCE61FCD9D7F205E(Local_85.f_14), 1, 1);
							func_47(&(Local_85.f_14));
						}
						iVar0 = unk_0x15A88CFAAFFC6C4B(iLocal_573, iLocal_574);
						if (BitTest(Local_85.f_25, 10))
						{
							iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Local_85.f_39));
						}
						if (Local_85.f_4 > 1000)
						{
							Local_85.f_4 = 1000;
						}
						iVar0 = (iVar0 + Local_85.f_4);
						iVar0 = func_223(iVar0, 1);
						if (iVar0 > Global_262145.f_177)
						{
							iVar0 = Global_262145.f_177;
						}
						if (func_222(unk_0x93E99A2DBCBA9CFA()) && func_220(func_221(unk_0x93E99A2DBCBA9CFA())) < 1f)
						{
							if (Global_262145.f_4237 > 1f)
							{
								Global_262145.f_4237 = 1f;
							}
							iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4237));
						}
						if (iVar0 > 0)
						{
							if (func_219())
							{
								func_208(1734805203, iVar0, &uVar1, 0, 0, 0);
							}
							else
							{
								func_204(iVar0, 1, 1, 1092616192);
								unk_0x69BF04590412824E(iVar0);
							}
						}
						Global_2793044.f_5992 = (Global_2793044.f_5992 + iVar0);
						Global_2793044.f_5992.f_2 = 1;
						Global_2793044.f_5992.f_5 = 1;
						iLocal_798 = (iLocal_798 + iVar0);
						func_203(3);
						if (!BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 5))
						{
							func_202(Local_85.f_40, iVar0);
						}
						else
						{
							func_193(unk_0xC1A5EC5C986B98AD(), iVar0);
						}
						func_192(1, iVar0);
						if (func_188(1))
						{
							func_179(4);
						}
						unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 5);
						unk_0xECDAB41968FF21A8(&(Local_481.f_53), 6);
					}
				}
			}
		}
	}
}

void func_179(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_18161;
			break;
		
		case 1:
			iVar0 = Global_262145.f_18151;
			break;
		
		case 2:
			iVar0 = Global_262145.f_18162;
			break;
		
		case 3:
			iVar0 = Global_262145.f_18154;
			break;
		
		case 4:
			iVar0 = Global_262145.f_18150;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_18165;
			break;
		
		case 8:
			iVar0 = Global_262145.f_18166;
			break;
		
		case 9:
			iVar0 = Global_262145.f_18169;
			break;
		
		case 22:
			iVar0 = Global_262145.f_18170;
			break;
		
		case 23:
			iVar0 = Global_262145.f_18163;
			break;
		
		case 25:
			iVar0 = Global_262145.f_19055;
			break;
		
		case 26:
			iVar0 = Global_262145.f_19054;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0x6F68FC40163BBC7C(func_186(func_187()), func_184(func_187()), func_183(), func_182(), iParam0, iVar0);
	}
	func_181(iVar0);
	func_180(iVar0);
}

void func_180(int iParam0)
{
	int iVar0;
	
	iVar0 = func_131(3971, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_10.f_468 = iVar0;
	func_128(3971, iVar0, -1, 1, 0);
}

void func_181(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x93E99A2DBCBA9CFA();
	Global_1894573[iVar0 /*608*/].f_10.f_467 = (Global_1894573[iVar0 /*608*/].f_10.f_467 + iParam0);
	if (Global_1894573[iVar0 /*608*/].f_10.f_467 < -9999)
	{
		Global_1894573[iVar0 /*608*/].f_10.f_467 = 9999;
	}
	else if (Global_1894573[iVar0 /*608*/].f_10.f_467 > 9999)
	{
		Global_1894573[iVar0 /*608*/].f_10.f_467 = 9999;
	}
}

int func_182()
{
	if (Global_1947733.f_3 != 0)
	{
		return Global_1947733.f_3;
	}
	return -1;
}

int func_183()
{
	if (Global_1947733.f_2 != 0)
	{
		return Global_1947733.f_2;
	}
	return -1;
}

int func_184(int iParam0)
{
	if (iParam0 == func_185())
	{
		return -1;
	}
	return Global_1894573[iParam0 /*608*/].f_10.f_8[1];
}

int func_185()
{
	return -1;
}

int func_186(int iParam0)
{
	if (iParam0 == func_185())
	{
		return -1;
	}
	return Global_1894573[iParam0 /*608*/].f_10.f_8[0];
}

int func_187()
{
	return Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_10;
}

bool func_188(bool bParam0)
{
	return func_189(unk_0x93E99A2DBCBA9CFA(), bParam0);
}

int func_189(int iParam0, bool bParam1)
{
	return func_190(iParam0, bParam1, 1);
}

int func_190(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_185())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_191(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1894573[iParam0 /*608*/].f_10;
	if (iVar0 != func_185() && Global_1894573[iVar0 /*608*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_191(int iParam0, int iParam1)
{
	if (iParam0 != func_185())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_185())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 == iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_192(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23997 == 0 || Global_262145.f_23997 == 1)
		{
			if (!unk_0xCC17806DB0C41C19() || Global_262145.f_23997 == 1)
			{
				Global_2793044.f_283 = iParam0;
				if (iParam1 > Global_262145.f_7044)
				{
					iParam1 = Global_262145.f_7044;
				}
				Global_2793044.f_284 = iParam1;
				Global_2793044.f_285 = 0;
			}
		}
	}
}

void func_193(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { func_200(unk_0xC1A5EC5C986B98AD(), 1) };
	if (iParam0 == func_199(unk_0xC1A5EC5C986B98AD()))
	{
		func_198(1);
	}
	func_194(Var0, iParam1, 7, 0, 0);
}

void func_194(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2672505.f_1080[iVar0 /*30*/].f_6 == 0 || Global_2672505.f_1080[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2672505.f_1080[iVar1 /*30*/] = { Param0 };
			Global_2672505.f_1080[iVar1 /*30*/].f_6 = 1;
			Global_2672505.f_1080[iVar1 /*30*/].f_4 = func_197(Global_2672505.f_1080[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2672505.f_1080[iVar1 /*30*/].f_7 = unk_0x0DB7F8294D73598B();
			Global_2672505.f_1080[iVar1 /*30*/].f_3 = iParam3;
			Global_2672505.f_1080[iVar1 /*30*/].f_8 = iParam4;
			Global_2672505.f_1080[iVar1 /*30*/].f_9 = func_196();
			Global_2672505.f_1080[iVar1 /*30*/].f_10 = func_195();
			StringCopy(&(Global_2672505.f_1080[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2672505.f_1080[iVar1 /*30*/].f_26 = unk_0xEBF66E179FB47D4E(unk_0x0DB7F8294D73598B(), iParam6);
		}
	}
}

int func_195()
{
	if (Global_2672505.f_1681)
	{
		Global_2672505.f_1681 = 0;
		return 1;
	}
	Global_2672505.f_1681 = 0;
	return 0;
}

var func_196()
{
	var uVar0;
	
	uVar0 = Global_2672505.f_1683;
	Global_2672505.f_1683 = 1;
	return uVar0;
}

float func_197(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x2E496FE654DA4166(unk_0xAB9327AF433C2E46(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

void func_198(int iParam0)
{
	Global_2672505.f_1681 = iParam0;
}

int func_199(int iParam0)
{
	return iParam0;
}

Vector3 func_200(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xE7D67251D717D594())
	{
		Var3 = { unk_0x2E14691C671C10F1(2) };
	}
	if (iParam0 == func_201(unk_0xC1A5EC5C986B98AD()) && unk_0x80A3F4E694565F6A(unk_0x990C52ABB0EFEBA9()) == 4)
	{
		Var0 = { unk_0x7394CB479CCA24AF(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		fVar6 = unk_0xD850DD08D5434072(iParam0);
		if (unk_0x80A3F4E694565F6A(unk_0x990C52ABB0EFEBA9()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0x1C97A6E4D8DA4B2F(unk_0x504B9BB48D41C264(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0xF2A6E8EA57F9D501(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_201(var uParam0)
{
	return uParam0;
}

void func_202(struct<3> Param0, int iParam3)
{
	func_194(Param0, iParam3, 6, 0, 0);
}

void func_203(int iParam0)
{
	Global_2672505.f_1683 = iParam0;
}

void func_204(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_205(iParam0, iParam1, iParam2, fParam3);
}

void func_205(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_206(iParam0, iParam1, iParam2, fParam3);
}

void func_206(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = unk_0xF34EE736CF047844((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_205.f_4 = iVar1;
	Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_205.f_3 = (Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_207(iVar1, 0);
	}
}

void func_207(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_208(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_219())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 2115896461:
		case 797947947:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28375)
			{
				func_209(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_209(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
		case -2013760296:
		case -1033889004:
		case -2081984382:
		case 1089562091:
			if (iParam1 > 0 || Global_262145.f_28375)
			{
				func_209(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
		case 208223429:
		case -1433071892:
		case 761999406:
		case -1101941763:
		case 1748245957:
		case 1036772696:
		case -1384648535:
		case -800037808:
		case -695852120:
		case 77355315:
		case 2097889166:
		case 1707592130:
		case 1628412596:
		case 883337077:
		case -1274418755:
		case -1853979468:
		case -239888995:
		case 1163066566:
		case -955087020:
		case 1874391251:
		case 1633116913:
		case 668586600:
		case 15168061:
		case 590289134:
		case 99792878:
		case 1866258778:
		case -178394060:
		case 409592287:
		case 593836803:
		case 1973036520:
		case 2063456538:
		case -728008329:
		case 119239868:
			func_209(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_209(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_219())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x366262A55539062C(func_79()) || unk_0xF0773A1CAE4717D9())
		{
			Global_4536674 = 1;
			return 0;
		}
		if (Global_2695819)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4536675 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535172[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x8C722BABE4726C11(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xE0AAA58EEB49D003(iVar4))
		{
			*uParam0 = func_216(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535172[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535172[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4536659 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4536673 = 1;
			Global_4536676 = iParam4;
			Global_4536678 = iParam3;
			Global_4536679 = 1;
			Global_4536677 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4536676 = iParam4;
			Global_4536678 = iParam3;
			Global_4536679 = 1;
			Global_4536677 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_215(1, iParam4);
			Global_4536673 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_210(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_210(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xECDAB41968FF21A8(&(Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_211(iParam0);
	}
}

void func_211(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_219())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_214(iParam0))
		{
			if (!bVar0)
			{
				unk_0xD327B45EF800DBCD();
			}
		}
		else if (!bVar0)
		{
			unk_0xCF052ECECC8D7067(Global_4535172[iParam0 /*85*/].f_66);
		}
		func_212(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_212(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_213(&(uParam0->f_14));
	func_213(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_213(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_214(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_215(int iParam0, var uParam1)
{
	Global_2697013 = uParam1;
	Global_2697012 = iParam0;
}

int func_216(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_219())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535172[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535172[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535172[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535172[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535172[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4535172[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535172[iVar0 /*85*/].f_66 = iParam0;
			Global_4535172[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535172[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535172[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4535172[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535172[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535172[iVar0 /*85*/].f_66.f_14 = unk_0xE16824A2A0B2A6D8();
			Global_4535172[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4536659 = 0;
			if (bParam6)
			{
				Global_4535172[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_217(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_217(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -444617715;
	Var0.f_1 = unk_0x93E99A2DBCBA9CFA();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_8(Var0.f_1);
	if ((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_218();
		unk_0x46F55A5B9F053761(1, &Var0, 36, iVar36);
	}
}

void func_218()
{
	unk_0x3EC562D93709C894("AM_ARENA_SHP");
}

int func_219()
{
	if (unk_0xCC17806DB0C41C19())
	{
		return unk_0xF6919DB2626A28C5();
	}
	return 0;
}

float func_220(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_221(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1894573[iVar0 /*608*/];
	}
	return -1;
}

int func_222(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1894573[iVar0 /*608*/] != -1;
	}
	return 0;
}

int func_223(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(iParam0) * Global_262145);
				iParam0 = unk_0xF2DB717A73826179(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_224(float fParam0)
{
	iLocal_547 = unk_0x7E80728A2E77D8E8(Local_85.f_31);
	if (iLocal_547 != -1)
	{
		if (unk_0x411B750250543BD0(iLocal_547))
		{
			if (unk_0xABF98B1999FE64CA(iLocal_547) >= fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_225()
{
	iLocal_547 = unk_0x7E80728A2E77D8E8(Local_85.f_31);
	if (iLocal_547 != -1)
	{
		if (unk_0x411B750250543BD0(iLocal_547))
		{
			if (unk_0xABF98B1999FE64CA(iLocal_547) >= 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_226()
{
	func_227();
}

int func_227()
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0xFE2AB315FD8C7A6F(Local_85.f_0))
	{
		return 0;
	}
	if (func_425(Local_85.f_0))
	{
		if (!BitTest(Local_481.f_53, 3))
		{
			unk_0x0F2FEB47E011668F(unk_0x0DB8386015E986B7(Local_85.f_0));
			unk_0xECDAB41968FF21A8(&(Local_481.f_53), 3);
		}
		return 0;
	}
	switch (Local_85.f_3)
	{
		case 0:
			unk_0x992BB708B4B7A005(unk_0x0DB8386015E986B7(Local_85.f_0), 71, 1);
			break;
		
		case 1:
			if (!BitTest(Local_85.f_25, 4) && !BitTest(Local_85.f_25, 12))
			{
				if (BitTest(Local_85.f_25, 13))
				{
					if (!BitTest(Local_481.f_52, 17))
					{
						unk_0xBB5C1E4A07AE1774(unk_0x0DB8386015E986B7(Local_85.f_0), 16);
						unk_0xEDB03CCB50D11479(unk_0x0DB8386015E986B7(Local_85.f_0), unk_0xC1A5EC5C986B98AD(), -1, 0, 2);
						if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
						{
							func_233(10);
						}
						else if (BitTest(Local_85.f_26, 0))
						{
							if (!BitTest(Local_85.f_26, 11))
							{
								if (!BitTest(Local_85.f_26, 12))
								{
									func_233(13);
								}
								else
								{
									func_233(20);
								}
							}
							else
							{
								func_233(17);
							}
							unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 25);
						}
						else if (!BitTest(Local_85.f_26, 11))
						{
							if (!BitTest(Local_85.f_26, 12))
							{
								func_233(0);
							}
							else
							{
								func_233(18);
							}
						}
						else
						{
							func_233(15);
						}
						unk_0xECDAB41968FF21A8(&(Local_481.f_52), 17);
					}
					else if (unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("script_task_turn_ped_to_face_entity")) != 1 && unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("script_task_turn_ped_to_face_entity")) != 0)
					{
						if (func_18(&uLocal_576, 5000, 0))
						{
							func_14(&uLocal_576);
							if (!iLocal_537)
							{
								unk_0x06A2A5F6A6959BE7(unk_0x0DB8386015E986B7(Local_85.f_0), unk_0xC1A5EC5C986B98AD(), 10000);
							}
							unk_0xEDB03CCB50D11479(unk_0x0DB8386015E986B7(Local_85.f_0), unk_0xC1A5EC5C986B98AD(), -1, 0, 2);
						}
					}
				}
			}
			unk_0x992BB708B4B7A005(unk_0x0DB8386015E986B7(Local_85.f_0), 71, 1);
			break;
		
		case 2:
			if (!BitTest(Local_85.f_25, 7) && !BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 0))
			{
				uVar1 = unk_0xC1A5EC5C986B98AD();
				if (Local_85.f_34 > -1)
				{
					if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(Local_85.f_34)))
					{
						iVar0 = unk_0xFE2D0B37A9596A4C(unk_0x74A08123C183740A(Local_85.f_34));
						uVar1 = unk_0xF2CFBB1105511E1A(iVar0);
					}
				}
				if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
				{
					unk_0xEDB03CCB50D11479(unk_0x0DB8386015E986B7(Local_85.f_0), uVar1, -1, 0, 2);
					unk_0xBB5C1E4A07AE1774(unk_0x0DB8386015E986B7(Local_85.f_0), 16);
					unk_0x3EE48ADC8C7F5CC4(unk_0x0DB8386015E986B7(Local_85.f_0), "mp_am_hold_up", "WARY_LOOP", 4f, -4f, -1, 49, 0, 0, 0, 0);
					unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 0);
				}
			}
			else if (unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("script_task_turn_ped_to_face_entity")) != 1 && unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("script_task_turn_ped_to_face_entity")) != 0)
			{
				if (func_18(&uLocal_576, 5000, 0))
				{
					iVar1 = unk_0xC1A5EC5C986B98AD();
					if (Local_85.f_34 > -1)
					{
						if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(Local_85.f_34)))
						{
							iVar0 = unk_0xFE2D0B37A9596A4C(unk_0x74A08123C183740A(Local_85.f_34));
							iVar1 = unk_0xF2CFBB1105511E1A(iVar0);
						}
					}
					func_14(&uLocal_576);
					unk_0x06A2A5F6A6959BE7(unk_0x0DB8386015E986B7(Local_85.f_0), iVar1, 10000);
					unk_0xEDB03CCB50D11479(unk_0x0DB8386015E986B7(Local_85.f_0), iVar1, -1, 0, 2);
				}
			}
			if (BitTest(Local_85.f_25, 16))
			{
				unk_0xBB5C1E4A07AE1774(unk_0x0DB8386015E986B7(Local_85.f_0), 16);
			}
			unk_0x992BB708B4B7A005(unk_0x0DB8386015E986B7(Local_85.f_0), 71, 1);
			break;
		
		case 3:
			if (!BitTest(Local_481.f_52, 25))
			{
				if (unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("script_task_achieve_heading")) != 0 && unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("script_task_achieve_heading")) != 1)
				{
					unk_0x71A535529C1CA5DF(unk_0x0DB8386015E986B7(Local_85.f_0), 1);
					unk_0x474AA9EF29305EA8(unk_0x0DB8386015E986B7(Local_85.f_0), 2, 0);
					unk_0x474AA9EF29305EA8(unk_0x0DB8386015E986B7(Local_85.f_0), 8, 1);
					unk_0x474AA9EF29305EA8(unk_0x0DB8386015E986B7(Local_85.f_0), 16, 1);
					unk_0xBB5C1E4A07AE1774(unk_0x0DB8386015E986B7(Local_85.f_0), 16);
					unk_0x2CD3E39D98CC3FA9(unk_0x0DB8386015E986B7(Local_85.f_0), Local_85.f_44, -1);
					unk_0xECDAB41968FF21A8(&(Local_481.f_52), 25);
				}
			}
			break;
		
		case 4:
			if (!BitTest(Local_85.f_25, 17) && !BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 3))
			{
				if (unk_0xE85391CF212DE622())
				{
					Global_2793044.f_8 = 1;
				}
				uVar2 = unk_0xC1A5EC5C986B98AD();
				if (Global_2793044.f_9 != func_185())
				{
					if (func_46(Global_2793044.f_9, 1, 1))
					{
						uVar2 = unk_0xF2CFBB1105511E1A(Global_2793044.f_9);
					}
				}
				unk_0xEDB03CCB50D11479(unk_0x0DB8386015E986B7(Local_85.f_0), uVar2, 30000, 0, 3);
				unk_0x69B06069E38FB537(unk_0x0DB8386015E986B7(Local_85.f_0), "mood_stressed_1", 0);
				unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 3);
			}
			else
			{
				iLocal_547 = unk_0x7E80728A2E77D8E8(Local_85.f_31);
				if (iLocal_547 != -1)
				{
					if (unk_0x411B750250543BD0(iLocal_547))
					{
						fLocal_781 = (Local_85.f_35 + 0.6f);
						if (fLocal_781 < 0.75f)
						{
							fLocal_781 = 0.75f;
						}
						if (BitTest(Local_85.f_26, 4))
						{
							fLocal_781 = (fLocal_781 + 0.25f);
						}
						if (fLocal_781 > 1.75f)
						{
							fLocal_781 = 1.75f;
						}
						unk_0x2D33E7175ED5D45D(iLocal_547, fLocal_781);
					}
				}
			}
			break;
		
		case 5:
			if (!BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 10))
			{
				if (unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("script_task_perform_sequence")) != 0 && unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("script_task_perform_sequence")) != 1)
				{
					if (!unk_0x48A4D45B3B4CEFFD(unk_0x0DB8386015E986B7(Local_85.f_0)))
					{
						iLocal_547 = unk_0x7E80728A2E77D8E8(Local_85.f_31);
						if ((iLocal_547 != -1 && !unk_0x411B750250543BD0(iLocal_547)) || iLocal_547 == -1)
						{
							unk_0x3D7110D966B0CEA2(unk_0x0DB8386015E986B7(Local_85.f_0), uLocal_556);
							unk_0xBB5C1E4A07AE1774(unk_0x0DB8386015E986B7(Local_85.f_0), 16);
							unk_0x71A535529C1CA5DF(unk_0x0DB8386015E986B7(Local_85.f_0), 1);
							unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 10);
						}
					}
				}
			}
			else if (unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("script_task_turn_ped_to_face_entity")) != 1 && unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("script_task_turn_ped_to_face_entity")) != 0)
			{
				if (func_18(&uLocal_576, 5000, 0))
				{
					func_14(&uLocal_576);
					iVar1 = unk_0xC1A5EC5C986B98AD();
					if (Local_85.f_34 > -1)
					{
						if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(Local_85.f_34)))
						{
							iVar0 = unk_0xFE2D0B37A9596A4C(unk_0x74A08123C183740A(Local_85.f_34));
							iVar1 = unk_0xF2CFBB1105511E1A(iVar0);
						}
					}
					unk_0x06A2A5F6A6959BE7(unk_0x0DB8386015E986B7(Local_85.f_0), iVar1, 10000);
					unk_0xEDB03CCB50D11479(unk_0x0DB8386015E986B7(Local_85.f_0), unk_0xC1A5EC5C986B98AD(), -1, 0, 2);
				}
			}
			break;
		
		case 6:
			if (!BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 10))
			{
				if ((iLocal_547 == -1 || !unk_0x411B750250543BD0(iLocal_547)) || unk_0xABF98B1999FE64CA(iLocal_547) >= 0.95f)
				{
					func_232();
					iVar1 = unk_0xC1A5EC5C986B98AD();
					if (Local_85.f_34 > -1)
					{
						if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(Local_85.f_34)))
						{
							iVar0 = unk_0xFE2D0B37A9596A4C(unk_0x74A08123C183740A(Local_85.f_34));
							iVar1 = unk_0xF2CFBB1105511E1A(iVar0);
						}
					}
					unk_0x276790CEA18D2881(unk_0x0DB8386015E986B7(Local_85.f_0), -1, iVar1, -1, 1);
					unk_0xBB6027D1D193CBA6(unk_0x0DB8386015E986B7(Local_85.f_0), 0, 0);
					unk_0xBB5C1E4A07AE1774(unk_0x0DB8386015E986B7(Local_85.f_0), 16);
					unk_0x71A535529C1CA5DF(unk_0x0DB8386015E986B7(Local_85.f_0), 1);
					unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 10);
				}
			}
			break;
		
		case 7:
			if (unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("script_task_combat_hated_targets_around_ped")) != 0 && unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("script_task_combat_hated_targets_around_ped")) != 1)
			{
				if (!func_176())
				{
					func_231();
					unk_0x909F139DC199D8E0(unk_0x0DB8386015E986B7(Local_85.f_0));
					unk_0xB7EB8CCA28444BAB(unk_0x0DB8386015E986B7(Local_85.f_0), 20f, 0);
					func_233(4);
				}
			}
			break;
		
		case 8:
			if (!BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 9))
			{
				func_232();
				iLocal_547 = unk_0x7E80728A2E77D8E8(Local_85.f_31);
				if ((iLocal_547 != -1 && !unk_0x411B750250543BD0(iLocal_547)) || iLocal_547 == -1)
				{
					if ((!BitTest(Local_85.f_25, 27) && !func_37()) && !func_36())
					{
						if (BitTest(Local_85.f_26, 2))
						{
							if (!BitTest(Local_85.f_26, 3))
							{
								unk_0x3D7110D966B0CEA2(unk_0x0DB8386015E986B7(Local_85.f_0), uLocal_558);
								iVar3 = 1;
							}
							else
							{
								func_231();
								unk_0x3D7110D966B0CEA2(unk_0x0DB8386015E986B7(Local_85.f_0), uLocal_559);
								iVar3 = 1;
							}
						}
					}
					else
					{
						unk_0xCF302B47D4B347F1(unk_0x0DB8386015E986B7(Local_85.f_0), Local_543, 250f, -1, 1, 0);
						iVar3 = 1;
					}
					if (iVar3 == 1)
					{
						func_233(25);
						unk_0x71A535529C1CA5DF(unk_0x0DB8386015E986B7(Local_85.f_0), 1);
						func_6(Local_481.f_50, 1, func_7());
						unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 9);
					}
				}
			}
			else if (!BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 19))
			{
				iVar4 = unk_0x95914E6BD5323353(unk_0x0DB8386015E986B7(Local_85.f_0));
				if (iVar4 == 3)
				{
					unk_0xA0E06A3361300416(unk_0x0DB8386015E986B7(Local_85.f_0));
					unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 19);
				}
				else if (iVar4 == 2)
				{
					unk_0x909F139DC199D8E0(unk_0x0DB8386015E986B7(Local_85.f_0));
					if (!BitTest(Local_85.f_26, 3))
					{
						unk_0x3D7110D966B0CEA2(unk_0x0DB8386015E986B7(Local_85.f_0), uLocal_560);
					}
					else
					{
						unk_0xB7EB8CCA28444BAB(unk_0x0DB8386015E986B7(Local_85.f_0), 20f, 0);
					}
					unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 19);
				}
			}
			break;
	}
	func_228();
	return 1;
}

void func_228()
{
	if ((Local_85.f_3 != 8 && Local_85.f_3 != 7) && Local_85.f_2 == 3)
	{
		if ((((!BitTest(Local_85.f_25, 14) || !BitTest(Local_85.f_25, 15)) || !BitTest(Local_85.f_25, 22)) || !BitTest(Local_85.f_25, 23)) || !BitTest(Local_85.f_25, 30))
		{
			iLocal_547 = unk_0x7E80728A2E77D8E8(Local_85.f_31);
			if (iLocal_547 != -1)
			{
				if (unk_0x411B750250543BD0(iLocal_547))
				{
					if (!func_176())
					{
						if (!BitTest(Local_85.f_25, 14) && !BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 6))
						{
							func_233(2);
							unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 6);
						}
						if (!BitTest(Local_85.f_25, 15) && !BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 7))
						{
							if (unk_0xABF98B1999FE64CA(iLocal_547) > 0.87f)
							{
								func_233(3);
								unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 7);
							}
						}
						if (!BitTest(Local_85.f_25, 22) && !BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 22))
						{
							if (BitTest(Local_85.f_25, 24) && !func_176())
							{
								func_233(11);
								unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 22);
							}
						}
						if (!BitTest(Local_85.f_25, 23) && !BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 23))
						{
							if (BitTest(Local_85.f_25, 25) && !func_176())
							{
								func_233(12);
								unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 23);
							}
						}
					}
				}
			}
		}
		if (!BitTest(Local_85.f_25, 9))
		{
			if (!BitTest(Local_85.f_25, 26) && !BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 24))
			{
				if (BitTest(Local_85.f_25, 7))
				{
					if (!func_176())
					{
						if (!BitTest(Local_85.f_26, 11))
						{
							if (!BitTest(Local_85.f_26, 12))
							{
								func_233(1);
							}
							else
							{
								func_233(19);
							}
						}
						else
						{
							func_233(16);
						}
						unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 24);
						return;
					}
					else
					{
						func_229();
						return;
					}
				}
			}
			if (((!BitTest(Local_85.f_25, 30) && !BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 25)) && !BitTest(Local_85.f_25, 7)) && !BitTest(Local_85.f_25, 4))
			{
				if (BitTest(Local_85.f_26, 0) && !func_176())
				{
					if ((BitTest(Local_85.f_25, 7) && BitTest(Local_85.f_25, 4)) || (!BitTest(Local_85.f_25, 7) && !BitTest(Local_85.f_25, 4)))
					{
						if (!BitTest(Local_85.f_26, 11))
						{
							if (!BitTest(Local_85.f_26, 12))
							{
								func_233(13);
							}
							else
							{
								func_233(20);
							}
						}
						else
						{
							func_233(17);
						}
						unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 25);
						return;
					}
				}
			}
			if (!BitTest(Local_85.f_25, 31) && !BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 26))
			{
				if (BitTest(Local_85.f_26, 1) && !func_176())
				{
					func_233(14);
					unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 26);
					return;
				}
			}
			if (!BitTest(Local_85.f_26, 9) && !BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 31))
			{
				if (BitTest(Local_85.f_26, 8) && !func_176())
				{
					func_233(22);
					unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 31);
					return;
				}
			}
			if (!BitTest(Local_85.f_1, 3) && !BitTest(Local_160[unk_0xD378D2332270959A() /*10*/].f_1, 3))
			{
				if (BitTest(Local_85.f_1, 2) && !func_176())
				{
					func_233(24);
					unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/].f_1), 3);
					return;
				}
			}
			if (!BitTest(Local_85.f_26, 14) && !BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 20))
			{
				if (BitTest(Local_85.f_26, 13) && !func_176())
				{
					func_233(23);
					unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 20);
					return;
				}
			}
		}
	}
	if (!BitTest(Local_85.f_26, 6) && !BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 29))
	{
		if (BitTest(Local_85.f_26, 5))
		{
			if (!func_176())
			{
				func_233(21);
				unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 29);
				return;
			}
		}
	}
}

void func_229()
{
	Global_20591 = 0;
	func_230();
}

void func_230()
{
	unk_0x782234C275AFBA24();
	Global_22736 = 0;
	if (unk_0x0DCB385165FDE763())
	{
		unk_0xD6625E11483B2324(0);
		Global_21725 = 6;
	}
}

void func_231()
{
	int iVar0;
	
	iVar0 = unk_0x15A88CFAAFFC6C4B(0, 12);
	if (iVar0 < 3)
	{
		unk_0x44EBC7775DAE912E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("weapon_pistol"), 25000, 0);
		unk_0x55B25C3B4CEEEF4B(unk_0x0DB8386015E986B7(Local_85.f_0), unk_0x15A88CFAAFFC6C4B(10, 35));
	}
	else if (iVar0 < 6)
	{
		unk_0x44EBC7775DAE912E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("weapon_combatpistol"), 25000, 0);
		unk_0x55B25C3B4CEEEF4B(unk_0x0DB8386015E986B7(Local_85.f_0), unk_0x15A88CFAAFFC6C4B(15, 40));
	}
	else if (iVar0 == 6)
	{
		unk_0x44EBC7775DAE912E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("weapon_microsmg"), 25000, 0);
		unk_0x55B25C3B4CEEEF4B(unk_0x0DB8386015E986B7(Local_85.f_0), unk_0x15A88CFAAFFC6C4B(10, 25));
	}
	else if (iVar0 == 7)
	{
		unk_0x44EBC7775DAE912E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("weapon_combatmg"), 25000, 0);
		unk_0x55B25C3B4CEEEF4B(unk_0x0DB8386015E986B7(Local_85.f_0), unk_0x15A88CFAAFFC6C4B(5, 15));
	}
	else if (iVar0 == 8)
	{
		unk_0x44EBC7775DAE912E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("weapon_bat"), 25000, 0);
		unk_0x55B25C3B4CEEEF4B(unk_0x0DB8386015E986B7(Local_85.f_0), unk_0x15A88CFAAFFC6C4B(20, 40));
	}
	else if (iVar0 == 9)
	{
		unk_0x44EBC7775DAE912E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("weapon_assaultrifle"), 25000, 0);
		unk_0x55B25C3B4CEEEF4B(unk_0x0DB8386015E986B7(Local_85.f_0), unk_0x15A88CFAAFFC6C4B(5, 30));
	}
	else if (iVar0 == 10)
	{
		unk_0x44EBC7775DAE912E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("weapon_sawnoffshotgun"), 25000, 0);
		unk_0x55B25C3B4CEEEF4B(unk_0x0DB8386015E986B7(Local_85.f_0), unk_0x15A88CFAAFFC6C4B(5, 20));
	}
	else
	{
		unk_0x44EBC7775DAE912E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("weapon_pumpshotgun"), 25000, 0);
		unk_0x55B25C3B4CEEEF4B(unk_0x0DB8386015E986B7(Local_85.f_0), unk_0x15A88CFAAFFC6C4B(10, 25));
	}
	func_6(Local_481.f_50, 1, func_7());
	unk_0x8386356641D0DED1(unk_0x0DB8386015E986B7(Local_85.f_0), Global_1837214);
	unk_0xBDB9814951DD4D75(unk_0x0DB8386015E986B7(Local_85.f_0), 1);
	unk_0x8F758E95FCF28E36(unk_0x0DB8386015E986B7(Local_85.f_0), 1);
	unk_0x002C268EFF2A6ADE(unk_0x0DB8386015E986B7(Local_85.f_0), Local_540, 20f, 0, 0);
	unk_0x71A535529C1CA5DF(unk_0x0DB8386015E986B7(Local_85.f_0), 1);
}

void func_232()
{
	iLocal_547 = unk_0x7E80728A2E77D8E8(Local_85.f_31);
	if (iLocal_547 != -1)
	{
		if (unk_0x411B750250543BD0(iLocal_547))
		{
			unk_0x5A691093FF311F77(Local_85.f_31);
		}
	}
}

void func_233(int iParam0)
{
	struct<2> Var0;
	int iVar4;
	
	if (BitTest(Local_85.f_25, 13))
	{
		if (!func_425(Local_85.f_0))
		{
			if (unk_0xFE2AB315FD8C7A6F(Local_85.f_0) || (!unk_0xDD2D9A241E18E942(Local_85.f_0) && unk_0xE85391CF212DE622()))
			{
				if (!unk_0x48A4D45B3B4CEFFD(unk_0x0DB8386015E986B7(Local_85.f_0)))
				{
					if (Local_85.f_47 == 0)
					{
						StringCopy(&Var0, "RB_SH2", 16);
					}
					else if (Local_85.f_47 == 1)
					{
						StringCopy(&Var0, "RB_12_F", 16);
					}
					else
					{
						StringCopy(&Var0, "RB_SH3", 16);
					}
					StringIntConCat(&Var0, Local_85.f_33, 16);
					StringIntConCat(&Var0, iParam0, 16);
					if (unk_0x4310A0DB886F9FED(&Var0, "RB_SH241"))
					{
						if (unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &iVar4, 1))
						{
							if ((((((iVar4 == joaat("weapon_unarmed") || iVar4 == 0) || iVar4 == joaat("object")) || iVar4 == joaat("weapon_flare")) || iVar4 == joaat("weapon_snowball")) || func_255(iVar4)) || func_254(iVar4))
							{
								StringCopy(&Var0, "RB_SH211", 16);
							}
						}
					}
					func_424(&uLocal_604, 3, unk_0x0DB8386015E986B7(Local_85.f_0), &(Local_85.f_48), 1, 0);
					switch (iParam0)
					{
						case 0:
							unk_0xB7C28610A558761B(unk_0x0DB8386015E986B7(Local_85.f_0), "SHOP_GREET", &(Local_85.f_52), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 1:
							func_234(&uLocal_604, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 2:
							func_234(&uLocal_604, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 3:
							func_234(&uLocal_604, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 4:
							unk_0xB7C28610A558761B(unk_0x0DB8386015E986B7(Local_85.f_0), "SHOP_BRAVE", &(Local_85.f_52), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 10:
							unk_0xB7C28610A558761B(unk_0x0DB8386015E986B7(Local_85.f_0), "SHOP_REMOVE_VEHICLE", &(Local_85.f_52), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 11:
							unk_0xB7C28610A558761B(unk_0x0DB8386015E986B7(Local_85.f_0), "SHOP_REACT_TO_SHOUT", &(Local_85.f_52), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 12:
							unk_0xB7C28610A558761B(unk_0x0DB8386015E986B7(Local_85.f_0), "SHOP_HURRYING", &(Local_85.f_52), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 13:
							unk_0xB7C28610A558761B(unk_0x0DB8386015E986B7(Local_85.f_0), "SHOP_NO_COPS", &(Local_85.f_52), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 14:
							unk_0xB7C28610A558761B(unk_0x0DB8386015E986B7(Local_85.f_0), "SHOP_THREATENED", &(Local_85.f_52), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 15:
							unk_0xB7C28610A558761B(unk_0x0DB8386015E986B7(Local_85.f_0), "SHOP_GREET_START", &(Local_85.f_52), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 16:
							unk_0xB7C28610A558761B(unk_0x0DB8386015E986B7(Local_85.f_0), "SHOP_SCARED_START", &(Local_85.f_52), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 17:
							unk_0xB7C28610A558761B(unk_0x0DB8386015E986B7(Local_85.f_0), "SHOP_NO_COPS_START", &(Local_85.f_52), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 18:
							unk_0xB7C28610A558761B(unk_0x0DB8386015E986B7(Local_85.f_0), "SHOP_GREET_END", &(Local_85.f_52), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 19:
							unk_0xB7C28610A558761B(unk_0x0DB8386015E986B7(Local_85.f_0), "SHOP_SCARED_END", &(Local_85.f_52), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 20:
							unk_0xB7C28610A558761B(unk_0x0DB8386015E986B7(Local_85.f_0), "SHOP_NO_COPS_END", &(Local_85.f_52), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 21:
							unk_0xB7C28610A558761B(unk_0x0DB8386015E986B7(Local_85.f_0), "SHOP_COPS_ARRIVED", &(Local_85.f_52), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 22:
							unk_0xB7C28610A558761B(unk_0x0DB8386015E986B7(Local_85.f_0), "SHOP_SELL", &(Local_85.f_52), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 23:
							unk_0xB7C28610A558761B(unk_0x0DB8386015E986B7(Local_85.f_0), "SHOP_NO_ENTRY", &(Local_85.f_52), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 24:
							unk_0xB7C28610A558761B(unk_0x0DB8386015E986B7(Local_85.f_0), "SHOP_STEAL", &(Local_85.f_52), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 25:
							unk_0xB7C28610A558761B(unk_0x0DB8386015E986B7(Local_85.f_0), "SCREAM_PANIC", &(Local_85.f_52), "SPEECH_PARAMS_FORCE", 1);
							break;
						}
					}
				}
			}
	}
}

int func_234(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_253(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21732 = 0;
	Global_21734 = 0;
	Global_21739 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_2883585 = 1;
	return func_235(sParam2, iParam3, 0);
}

int func_235(char* sParam0, int iParam1, bool bParam2)
{
	Global_21726 = 0;
	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam1 > Global_21727)
			{
				if (Global_21732 == 0)
				{
					unk_0xD6625E11483B2324(0);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
					Global_21736 = 0;
					Global_21735 = 0;
					Global_20382 = 0;
				}
				else
				{
					func_252();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x0DCB385165FDE763())
		{
			return 0;
		}
		if (func_251(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_250();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_22721 = Global_22722;
		Global_21344.f_370 = Global_22714;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21721 = Global_21722;
		if (Global_21731)
		{
			unk_0x061B1200C95204CB(&Global_8253, 20);
			unk_0x061B1200C95204CB(&Global_8254, 17);
			unk_0x061B1200C95204CB(&Global_8255, 0);
			if (bParam2)
			{
				func_243();
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20383.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20349 == 1)
			{
				return 0;
			}
			if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
			{
				if (unk_0xE3A9F9074FB79A61(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (func_242())
				{
					return 0;
				}
				if (unk_0xFC42DF91E1950588(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (unk_0x48A4D45B3B4CEFFD(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (unk_0xA92CED053FDC0D06(unk_0xC1A5EC5C986B98AD()))
				{
					return 0;
				}
				if (unk_0x87B83AFF6D0F83FD(unk_0xC1A5EC5C986B98AD(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78558)
				{
					if (unk_0x1589BC95A4C50F21(unk_0xC1A5EC5C986B98AD()))
					{
						return 0;
					}
					if (unk_0x5150E13C3DAAE892(unk_0x93E99A2DBCBA9CFA()))
					{
						return 0;
					}
					if (unk_0x197DD015F81B0D16(unk_0xC1A5EC5C986B98AD()))
					{
						return 0;
					}
					if (unk_0xF56A91A191EDA1FC(unk_0x93E99A2DBCBA9CFA(), 0))
					{
						return 0;
					}
				}
			}
			if (func_241())
			{
				return 0;
			}
			else
			{
				switch (Global_20383.f_1)
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
				if (BitTest(Global_8253, 9))
				{
					return 0;
				}
			}
			func_240();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_239();
		func_236();
		return 1;
	}
	if (Global_21725 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21727 || iParam1 == Global_21727)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_252();
	}
	return 0;
}

void func_236()
{
	if (!func_237())
	{
		return;
	}
	if (Global_21731)
	{
		MemCopy(&(Global_1977511.f_1), {Global_21344}, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}
}

int func_237()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_185())
	{
		return 0;
	}
	if (func_238(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	if (BitTest(Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x1758F8A8511510AB())
	{
		return 0;
	}
	return 1;
}

bool func_238(int iParam0)
{
	return func_145(iParam0, 20);
}

void func_239()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD6625E11483B2324(0);
	Global_21725 = 1;
}

void func_240()
{
	Global_21778 = Global_21777;
	Global_21772 = Global_21773;
	Global_21819 = { Global_21807 };
	Global_21825 = { Global_21813 };
	Global_21780 = Global_21779;
	Global_21849 = { Global_21831 };
	Global_21855 = { Global_21837 };
	Global_21861 = { Global_21843 };
	Global_21867 = { Global_21873 };
	Global_7568 = Global_7569;
	Global_7570 = Global_7571;
	Global_21736 = Global_21737;
	Global_21738 = Global_21739;
	Global_21740 = { Global_21756 };
	Global_21729 = Global_21730;
	Global_22741 = 0;
	Global_21774 = 0;
	Global_21775 = 0;
	unk_0x061B1200C95204CB(&Global_8254, 16);
}

int func_241()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_242()
{
	int iVar0;
	int iVar1;
	
	if (Global_78558)
	{
		iVar0 = 0;
		unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &iVar1, 1);
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC67B4044F323AEB2() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x97247A0CAE4CEFB6(unk_0xC1A5EC5C986B98AD(), 78, 1))
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

void func_243()
{
	if (func_126(14))
	{
		if (!unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[0 /*29*/])
			{
				Global_20383 = 0;
			}
			else if (unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[1 /*29*/])
			{
				Global_20383 = 1;
			}
			else if (unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()) == Global_113648.f_28052[2 /*29*/])
			{
				Global_20383 = 2;
			}
			else
			{
				Global_20383 = 0;
			}
		}
	}
	else
	{
		Global_20383 = func_244();
		if (Global_20383 == 145)
		{
			Global_20383 = 3;
		}
		if (Global_78558)
		{
			Global_20383 = 3;
		}
		if (Global_20383 > 3)
		{
			Global_20383 = 3;
		}
	}
}

var func_244()
{
	func_245();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_245()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_248(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_247(unk_0xC1A5EC5C986B98AD());
			if (func_246(iVar0) && (!func_126(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_246(Global_113648.f_2365.f_539.f_4321))
				{
					Global_113648.f_2365.f_539.f_4322 = Global_113648.f_2365.f_539.f_4321;
				}
				Global_113648.f_2365.f_539.f_4323 = iVar0;
				Global_113648.f_2365.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_4321 != 145)
			{
				Global_113648.f_2365.f_539.f_4323 = Global_113648.f_2365.f_539.f_4321;
			}
			return;
		}
	}
	Global_113648.f_2365.f_539.f_4321 = 145;
}

bool func_246(int iParam0)
{
	return iParam0 < 3;
}

int func_247(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(uParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_248(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_248(int iParam0)
{
	if (func_246(iParam0))
	{
		return func_249(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_249(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_250()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21014[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21014[iVar0 /*10*/].f_1), "", 24);
		Global_21014[iVar0 /*10*/].f_7 = 0;
		Global_21014[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21014.f_161 = -99;
	Global_21014.f_162 = { 0f, 0f, 0f };
}

bool func_251(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1653913.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1653913.f_1048, iParam0);
}

void func_252()
{
	unk_0x782234C275AFBA24();
	Global_22736 = 0;
	if ((unk_0xE444FD7526C8BB46() || Global_20383.f_1 == 9) || Global_20382 == 1)
	{
		unk_0xD6625E11483B2324(0);
		Global_21725 = 6;
		Global_20383.f_1 = 3;
		return;
	}
	if (unk_0x0DCB385165FDE763())
	{
		unk_0xD6625E11483B2324(1);
		Global_21725 = 6;
		return;
	}
}

void func_253(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	StringCopy(&Global_21795, sParam2, 24);
	Global_22714 = uParam5;
	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_grenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_proxmine"):
			return 1;
			break;
		
		case joaat("weapon_pipebomb"):
			return 1;
			break;
	}
	return 0;
}

int func_255(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_bat"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_hatchet"):
		case joaat("weapon_machete"):
		case joaat("weapon_switchblade"):
		case joaat("weapon_battleaxe"):
		case joaat("weapon_poolcue"):
		case joaat("weapon_wrench"):
		case joaat("weapon_stone_hatchet"):
			return 1;
		
		default:
	}
	return 0;
}

void func_256()
{
	int iVar0;
	
	iVar0 = unk_0x3F6A5B7803413D6A(false, 0);
	if (Local_85.f_45 != iVar0)
	{
		if (Local_85.f_45 < iVar0 || func_263(Local_85.f_45, 0, 1))
		{
			unk_0xE5CBFFB5DE87586F(Local_85.f_45);
		}
	}
	iVar0 = unk_0x42AE3F61BF594E6C(false, 0);
	if (Local_85.f_46 != iVar0)
	{
		if (Local_85.f_46 < iVar0 || func_257(Local_85.f_46, 0, 1))
		{
			unk_0xF759B94A928DAFDC(Local_85.f_46);
		}
	}
}

int func_257(int iParam0, bool bParam1, bool bParam2)
{
	return func_258(2, iParam0, 1, bParam1, bParam2);
}

int func_258(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1666891, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_262(iParam0) - func_261(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_261(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_262(iParam0) - func_260(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_261(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_262(iParam0) - func_261(iParam0, 1));
		}
		if (!bParam4 && Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/] != 3)
		{
			iVar1 = (iVar1 - func_259(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1666891.f_1;
			break;
		
		case 1:
			return Global_1666891.f_2;
			break;
		
		case 2:
			return Global_1666891.f_3;
			break;
	}
	return 0;
}

int func_261(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x93E99A2DBCBA9CFA();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x839E00E966CE3F2D())
			{
				return Global_2657589[iVar0 /*466*/].f_219;
			}
			else
			{
				return unk_0x3F6A5B7803413D6A(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x839E00E966CE3F2D())
			{
				return Global_2657589[iVar0 /*466*/].f_220;
			}
			else
			{
				return unk_0x6D465F7CB16AFBB2(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x839E00E966CE3F2D())
			{
				return Global_2657589[iVar0 /*466*/].f_221;
			}
			else
			{
				return unk_0x42AE3F61BF594E6C(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_262(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1666899;
			break;
		
		case 1:
			return Global_1666900;
			break;
		
		case 2:
			return Global_1666901;
			break;
	}
	return 0;
}

int func_263(int iParam0, bool bParam1, bool bParam2)
{
	return func_258(0, iParam0, 1, bParam1, bParam2);
}

void func_264()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	
	switch (iLocal_799)
	{
		case 0:
			if (!BitTest(Local_481.f_53, 0))
			{
				if (unk_0x7E2E2E8A648611F4(Local_85.f_15))
				{
					if (func_270(Local_805))
					{
						Local_805 = { unk_0x7394CB479CCA24AF(unk_0xDCE61FCD9D7F205E(Local_85.f_15), 0f, -0.5f, 0f) };
						unk_0xECDAB41968FF21A8(&(Local_481.f_53), 0);
					}
				}
			}
			if ((((unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_805, 0.5f, 0.5f, 1f, 0, 1, 0) && (func_425(Local_85.f_0) || Local_85.f_3 > 7)) && !BitTest(Local_85.f_25, 20)) && !BitTest(Local_85.f_25, 11)) && unk_0xE2D062C14C126762(Local_548, 1.5f) == 0)
			{
				if (((((((!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0) && !func_173(0)) && !func_269()) && !unk_0xFEE065E56A9BEF3F()) && !func_39(unk_0x93E99A2DBCBA9CFA(), 146)) && !func_38(unk_0x93E99A2DBCBA9CFA())) && unk_0x7E2E2E8A648611F4(Local_85.f_15)) && (!func_143(unk_0x93E99A2DBCBA9CFA()) || func_100(unk_0x93E99A2DBCBA9CFA()) == 154))
				{
					func_153("FHU_MANR", -1);
					Global_2793044.f_5992.f_4 = 1;
					iLocal_799 = 1;
				}
			}
			break;
		
		case 1:
			if (((((!BitTest(Local_85.f_26, 16) && !BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 12)) && !BitTest(Local_85.f_25, 20)) && !BitTest(Local_85.f_25, 11)) && unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Local_805, 0.5f, 0.5f, 1f, 0, 1, 0)) && (!func_143(unk_0x93E99A2DBCBA9CFA()) || func_100(unk_0x93E99A2DBCBA9CFA()) == 154))
			{
				if (((unk_0x87644B1F984197FE(0, 51) && !func_268(0)) && !func_269()) && !unk_0xFEE065E56A9BEF3F())
				{
					if (func_151("FHU_MANR"))
					{
						unk_0xCD3C8E1022864F65(1);
					}
					unk_0xE333240A90F2FF3C(unk_0x5DC3DCA82C806319(), false, 640);
					unk_0xECDAB41968FF21A8(&(Local_160[unk_0xD378D2332270959A() /*10*/]), 12);
					iLocal_799 = 2;
				}
				else if ((unk_0xA5E11AF0A2B928C1() % 1000) < 50)
				{
					if (iLocal_804 == 0)
					{
						func_265(&iLocal_804, 4, "FHU_MANR", 0, 0, 0, 0);
					}
				}
			}
			else if (func_151("FHU_MANR"))
			{
				unk_0xCD3C8E1022864F65(1);
			}
			break;
		
		case 2:
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				Var3 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
				Local_805.f_2 = (Var3.f_2 - 1f);
				unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), Local_805, 1, 0, 0, 1);
				unk_0x692C3FDAD7DB53CC(unk_0xC1A5EC5C986B98AD(), unk_0x06A2A02CDC68090B((Local_568.f_0 - Local_805.f_0), (Local_568.f_1 - Local_805.f_1)));
				unk_0x63EF69C6969A3D26(&uVar6);
				unk_0xDBC7406226B5540E(&uVar6);
				unk_0x3EE48ADC8C7F5CC4(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				unk_0x3EE48ADC8C7F5CC4(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 262145, 0, 0, 0, 0);
				unk_0x3EE48ADC8C7F5CC4(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				unk_0xF2CFC6EC8C85FA78(uVar6);
				unk_0x3D7110D966B0CEA2(unk_0xC1A5EC5C986B98AD(), uVar6);
				unk_0x59591B4AFCAA6F1D(unk_0xC1A5EC5C986B98AD(), 0, -1, 0);
				unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 200, 1);
				unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 71, 1);
				bVar2 = unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &iLocal_803, 1);
				if (bVar2)
				{
					unk_0x8CC688927B10006C(unk_0xC1A5EC5C986B98AD(), joaat("weapon_unarmed"), 1);
				}
				unk_0xBB6027D1D193CBA6(unk_0xC1A5EC5C986B98AD(), 0, 0);
				if (!unk_0xF57C1326FD40C8A7(uLocal_800))
				{
					uLocal_800 = unk_0xD5B705094825AC04(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0xB109E9D7B544BA66(uLocal_800, unk_0xC1A5EC5C986B98AD(), -0.1878f, 3.0635f, 0.68f, 1);
				unk_0x60F73A757779E5B6(uLocal_800, unk_0xC1A5EC5C986B98AD(), -0.0129f, 0.0927f, 0.3008f, 1);
				unk_0xE3BD36CCB5EB72F2(uLocal_800, 35f);
				unk_0xA490483DCDA2F37E(uLocal_800, "HAND_SHAKE", 0.1f);
				unk_0xEEF11E0DB5769366(uLocal_800, 1);
				unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
			}
			iLocal_799 = 3;
			break;
		
		case 3:
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				if (!unk_0xF57C1326FD40C8A7(uLocal_801))
				{
					uLocal_801 = unk_0xD5B705094825AC04(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0xB109E9D7B544BA66(uLocal_801, unk_0xC1A5EC5C986B98AD(), -1.0346f, 2.9183f, 0.68f, 1);
				unk_0x60F73A757779E5B6(uLocal_801, unk_0xC1A5EC5C986B98AD(), -0.0574f, 0.1074f, 0.3008f, 1);
				unk_0xE3BD36CCB5EB72F2(uLocal_801, 35f);
				unk_0xA490483DCDA2F37E(uLocal_801, "HAND_SHAKE", 0.1f);
				unk_0x6FF2543994335DB3(uLocal_801, uLocal_800, 6000, 1, 1);
				unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 71, 1);
				unk_0x59591B4AFCAA6F1D(unk_0xC1A5EC5C986B98AD(), 0, -1, 0);
				unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 200, 1);
			}
			iLocal_799 = 4;
			break;
		
		case 4:
			if (!unk_0x4C6F0F7948D49F66(uLocal_801))
			{
				iLocal_799 = 5;
			}
			else if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x7BB3D8F4F6310EB8(unk_0xC1A5EC5C986B98AD(), "oddjobs@shop_robbery@rob_till", "loop", 3))
				{
					fVar0 = unk_0x92377426879E21FF(unk_0xC1A5EC5C986B98AD(), "oddjobs@shop_robbery@rob_till", "loop");
					if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
					{
						if (!iLocal_802)
						{
							iVar7 = unk_0xF2DB717A73826179(((IntToFloat(iLocal_573) * 0.75f) / 4f));
							iVar8 = unk_0xF2DB717A73826179(((IntToFloat(iLocal_574) * 0.75f) / 4f));
							iVar1 = unk_0x15A88CFAAFFC6C4B(iVar7, iVar8 + 1);
							iVar1 = func_223(iVar1, 1);
							if (iVar1 > (Global_262145.f_177 / 4))
							{
								iVar1 = (Global_262145.f_177 / 4);
							}
							if (func_222(unk_0x93E99A2DBCBA9CFA()) && func_220(func_221(unk_0x93E99A2DBCBA9CFA())) < 1f)
							{
								if (Global_262145.f_4237 > 1f)
								{
									Global_262145.f_4237 = 1f;
								}
								iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_4237));
							}
							if (iVar1 > 0)
							{
								if (func_219())
								{
									func_208(1734805203, iVar1, &uVar9, 0, 0, 0);
								}
								else
								{
									func_204(iVar1, 1, 1, 1092616192);
									unk_0x69BF04590412824E(iVar1);
								}
							}
							Global_2793044.f_5992 = (Global_2793044.f_5992 + iVar1);
							iLocal_798 = (iLocal_798 + iVar1);
							func_192(1, iLocal_798);
							unk_0x531D638530A8DB97(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
							iLocal_802 = 1;
						}
					}
					else if (iLocal_802)
					{
						iLocal_802 = 0;
					}
				}
				unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 71, 1);
				unk_0x59591B4AFCAA6F1D(unk_0xC1A5EC5C986B98AD(), 0, -1, 0);
				unk_0x992BB708B4B7A005(unk_0xC1A5EC5C986B98AD(), 200, 1);
			}
			break;
		
		case 5:
			if (iLocal_803 != joaat("weapon_unarmed") && !unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				unk_0x8CC688927B10006C(unk_0xC1A5EC5C986B98AD(), iLocal_803, 1);
			}
			unk_0x59591B4AFCAA6F1D(unk_0xC1A5EC5C986B98AD(), 1, -1, 0);
			unk_0xAABD7B0753C5C286(0);
			unk_0xEAB390443C680F72(0, 1065353216);
			if (unk_0xF57C1326FD40C8A7(uLocal_800))
			{
				unk_0x42B9FA814615C4F9(uLocal_800, 0);
			}
			if (unk_0xF57C1326FD40C8A7(uLocal_801))
			{
				unk_0x42B9FA814615C4F9(uLocal_801, 0);
			}
			unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
			unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), true, 0);
			Global_2793044.f_5992.f_2 = 1;
			Global_2793044.f_5992.f_5 = 1;
			if (func_188(1))
			{
				func_179(4);
			}
			iLocal_799 = 7;
			break;
		
		case 6:
			unk_0xEEF11E0DB5769366(uLocal_801, 0);
			unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				unk_0x35DD50D05C962B6A(unk_0xC1A5EC5C986B98AD());
			}
			iLocal_799 = 5;
			break;
	}
}

void func_265(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x24B651D85CCE5EB4(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xB53553DC4AAC7D8A())
	{
		if (!*iParam0 == -1)
		{
			func_266(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_44000[iVar0 /*32*/])
		{
			Global_44000[iVar0 /*32*/] = 1;
			Global_44000[iVar0 /*32*/].f_1 = Global_44201;
			Global_44201++;
			Global_44000[iVar0 /*32*/].f_4 = 0;
			Global_44000[iVar0 /*32*/].f_29 = 0;
			Global_44000[iVar0 /*32*/].f_5 = 0;
			Global_44000[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44000[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44000[iVar0 /*32*/].f_6 = iParam3;
			Global_44000[iVar0 /*32*/].f_31 = unk_0xAF908D5E2416DA93();
			Global_44000[iVar0 /*32*/].f_7 = 0;
			Global_44000[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x2AC37494BBF1DB16(sParam4))
			{
				Global_44000[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44000[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44000[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44000[iVar0 /*32*/].f_12 = 0;
				Global_44000[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_44000[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_266(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_267(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44000[iVar0 /*32*/])
		{
			Global_44000[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_267(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44000[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_268(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20383.f_1 > 3)
		{
			if (BitTest(Global_8253, 14))
			{
				if (Global_20382 == 1)
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
		else
		{
			return 0;
		}
	}
	if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_20382 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_20383.f_1 > 3)
	{
		if (Global_20382 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_269()
{
	return unk_0xA5E11AF0A2B928C1() <= Global_23270.f_6321 + 100;
}

int func_270(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_271(var uParam0, var uParam1, var uParam2, var uParam3, struct<3> Param4, var uParam7, var uParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	bool bVar8;
	int iVar9;
	char* sVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	if (((uParam7->f_4 >= 1000 || (uParam7->f_4 + uParam0->f_51) >= 1000) || func_422(&(uParam7->f_5))) || (func_147(&(Global_2793044.f_10)) && !func_421(Global_2793044.f_10, 300000, 0)))
	{
		if (func_147(&(Global_2793044.f_10)))
		{
			if ((unk_0xA5E11AF0A2B928C1() % 2500) < 50)
			{
			}
		}
		if (!uParam0->f_34)
		{
			uParam0->f_34 = 1;
			if (!func_147(&(Global_2793044.f_10)))
			{
				func_19(&(Global_2793044.f_10), 0, 0);
			}
		}
	}
	else
	{
		if (func_147(&(Global_2793044.f_10)))
		{
			func_14(&(Global_2793044.f_10));
		}
		if (uParam0->f_34)
		{
			uParam0->f_34 = 0;
		}
	}
	if ((unk_0xA5E11AF0A2B928C1() % 5000) < 50)
	{
	}
	if ((((((uParam7->f_3 < 2 && func_46(unk_0x93E99A2DBCBA9CFA(), 1, 1)) && BitTest(uParam0->f_52, 26)) && !func_420(-1082130432)) && unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) < 1) && !bParam9) && !func_425(*uParam7))
	{
		bVar8 = false;
		iVar9 = 0;
		if ((unk_0xFEE065E56A9BEF3F() && uParam0->f_54 != 0) && !unk_0x4136116828BCAAB6())
		{
			if (!bParam10)
			{
				uParam0->f_54 = 0;
				func_419(uParam0, &(uParam8->f_3));
			}
		}
		switch (uParam0->f_54)
		{
			case 0:
				if ((((!unk_0xFEE065E56A9BEF3F() && !unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1)) && !unk_0x5C50456CDB486BD0(unk_0xC1A5EC5C986B98AD())) && (!func_143(unk_0x93E99A2DBCBA9CFA()) || func_100(unk_0x93E99A2DBCBA9CFA()) == 154)) && !func_418(unk_0x93E99A2DBCBA9CFA(), 21))
				{
					if (func_417(*uParam0, &uParam1, Param4.f_2, &(uParam0->f_16[0 /*3*/]), &(uParam0->f_16[1 /*3*/]), &(uParam0->f_23), &(uParam0->f_26)))
					{
						Var2 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
						Var5 = { unk_0x30BE8A934C020461(unk_0x0DB8386015E986B7(*uParam7), 1) };
						if ((unk_0x2E496FE654DA4166(Var2, uParam0->f_23, 1) < 5f && unk_0x2655A8EC638E4FD1((Var2.f_2 - Var5.f_2)) < 0.25f) || func_475(1))
						{
							if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_26, 0, 1, 0) || func_475(1))
							{
								if (unk_0x55EDDA33F4D8BBE2(unk_0xC1A5EC5C986B98AD(), uParam0->f_23, 135f) || func_475(1))
								{
									if (uParam0->f_34)
									{
										if (func_475(1))
										{
											func_439();
										}
										if (((!func_151("SHR_HOLDUP_1") && !func_151("SHR_MENU")) && !func_416()) && func_415())
										{
											func_153("SHR_SOLD_OUT", -1);
											uParam0->f_54 = 10;
										}
									}
									else
									{
										if (func_475(1))
										{
										}
										uParam0->f_14 = -1;
										func_265(&(uParam0->f_14), 4, "SHR_MENU", 0, 0, 0, 0);
										uParam0->f_54 = 2;
									}
								}
								else if ((unk_0xA5E11AF0A2B928C1() % 8000) < 50)
								{
								}
							}
							else
							{
								if ((unk_0xA5E11AF0A2B928C1() % 8000) < 50)
								{
								}
								unk_0x22DDCFA0A46050A2(Var2, uParam0->f_16[0 /*3*/], 0, 0, 255, 255);
								unk_0x22DDCFA0A46050A2(Var2, uParam0->f_16[1 /*3*/], 0, 0, 255, 255);
							}
						}
						else
						{
							if ((unk_0xA5E11AF0A2B928C1() % 8000) < 50)
							{
							}
							unk_0x22DDCFA0A46050A2(Var2, uParam0->f_23, 0, 0, 255, 255);
						}
					}
				}
				else
				{
					if (func_151("SHR_MENU"))
					{
						unk_0xCD3C8E1022864F65(1);
					}
					if (func_40(unk_0x93E99A2DBCBA9CFA()))
					{
						if (!BitTest(uParam0->f_53, 4))
						{
							func_153("SHR_FM_CRIT", -1);
							unk_0x9D7DD9F2D270206C(3, 21, 200, 0, 0);
							unk_0xECDAB41968FF21A8(&(uParam0->f_53), 4);
						}
					}
					if ((unk_0xA5E11AF0A2B928C1() % 8000) < 50)
					{
					}
				}
				break;
			
			case 2:
				Var2 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
				Var5 = { unk_0x30BE8A934C020461(unk_0x0DB8386015E986B7(*uParam7), 1) };
				if ((!unk_0x55EDDA33F4D8BBE2(unk_0xC1A5EC5C986B98AD(), uParam0->f_23, 135f) || unk_0x2655A8EC638E4FD1((Var2.f_2 - Var5.f_2)) >= 0.25f) && !func_475(1))
				{
					if (func_151("SHR_MENU"))
					{
						unk_0xCD3C8E1022864F65(1);
					}
					func_266(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (unk_0xFEE065E56A9BEF3F())
				{
					if (func_151("SHR_MENU"))
					{
						unk_0xCD3C8E1022864F65(1);
					}
					func_266(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (func_173(0) || func_172())
				{
					if (func_151("SHR_MENU"))
					{
						unk_0xCD3C8E1022864F65(1);
					}
					func_266(&(uParam0->f_14));
					func_167(1, *uParam0);
					unk_0x061B1200C95204CB(&(uParam0->f_52), 26);
					uParam0->f_54 = 0;
				}
				if (!unk_0x5C50456CDB486BD0(unk_0xC1A5EC5C986B98AD()))
				{
					if (func_414(uParam0->f_14, 1) || func_475(1))
					{
						if (func_475(1))
						{
							func_439();
						}
						if (func_151("SHR_MENU"))
						{
							unk_0xCD3C8E1022864F65(1);
						}
						func_412(&(uParam0->f_44));
						func_266(&(uParam0->f_14));
						func_406(0, 0);
						unk_0xECDAB41968FF21A8(&(uParam0->f_53), 7);
						func_463(unk_0x93E99A2DBCBA9CFA(), 0, 66048, 0);
						unk_0x2A7FF4CA1CC371B5();
						if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_425(*uParam7))
						{
							unk_0x06A2A5F6A6959BE7(unk_0xC1A5EC5C986B98AD(), unk_0x0DB8386015E986B7(*uParam7), 0);
							unk_0x061B1200C95204CB(&(uParam8->f_1), 1);
						}
						func_405();
						uParam0->f_54 = 3;
					}
				}
				break;
			
			case 3:
				if (!bParam10)
				{
					if (!unk_0xF57C1326FD40C8A7(uParam0->f_1))
					{
						uParam0->f_1 = unk_0xD5B705094825AC04(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
						func_404(*uParam0, &(uParam0->f_2), &(uParam0->f_5), &uVar11);
						unk_0x5BF3CF5BAF6ABBBB(uParam0->f_1, uParam0->f_2);
						unk_0xB346B70AE8C42AD8(uParam0->f_1, uParam0->f_5, 2);
						unk_0xE3BD36CCB5EB72F2(uParam0->f_1, uVar11);
						unk_0xA490483DCDA2F37E(uParam0->f_1, "HAND_SHAKE", 0.1f);
						unk_0xEEF11E0DB5769366(uParam0->f_1, 1);
						unk_0x9E2404A25985615A(1, 0, 3000, 1, 0, 0);
					}
					uParam0->f_37 = func_427(*uParam0);
				}
				if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
				{
					unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), false, 0);
				}
				uParam0->f_13 = func_403();
				func_402(0, 0);
				func_401(1, 1, 0, 0, 0);
				func_400(1, 2, 1, 1, 1);
				func_399("SNK_ITEM");
				if (!bParam10)
				{
					func_397(1, uParam0->f_37, uParam0->f_37);
				}
				iVar12 = 0;
				while (iVar12 < uParam0->f_13)
				{
					bVar8 = func_396(iVar12);
					func_391(iVar12, func_395(iVar12), 0, !bVar8, 0, 0, 0);
					if (uParam7->f_5[iVar12] >= 10 || ((func_147(&(Global_2793044.f_12[iVar12 /*2*/])) && !func_421(Global_2793044.f_12[iVar12 /*2*/], 150000, 0)) && *uParam0 == Global_2793044.f_27))
					{
						func_391(iVar12, "", 1, 1, 0, 0, 0);
						func_390(15, 0);
						if (func_147(&(Global_2793044.f_12[iVar12 /*2*/])) && !func_421(Global_2793044.f_12[iVar12 /*2*/], 150000, 0))
						{
							uParam7->f_5[iVar12] = 10;
						}
						if (!func_147(&(Global_2793044.f_12[iVar12 /*2*/])))
						{
							Global_2793044.f_27 = *uParam0;
							func_19(&(Global_2793044.f_12[iVar12 /*2*/]), 0, 0);
						}
					}
					else if (bVar8)
					{
						func_391(iVar12, "SNK_FULL", 0, !bVar8, 0, 0, 0);
					}
					else if (!bParam10)
					{
						func_391(iVar12, "ITEM_COST", 1, 1, 0, 0, 0);
						func_386(func_389(uParam0, iVar12), 0);
					}
					else
					{
						func_391(iVar12, "SNK_FREE", 0, 1, 0, 0, 0);
					}
					iVar12++;
				}
				func_385(0);
				func_384(uParam0->f_12, 1, 1);
				if (uParam0->f_35)
				{
					if (!bParam10)
					{
						func_383("SNK_BOUGHT", 0, 0);
					}
					else
					{
						func_383("SNK_STORED", 0, 0);
					}
				}
				else if (uParam7->f_5[uParam0->f_12] >= 10)
				{
					func_383("SNK_SOUT", 0, 0);
				}
				else
				{
					func_383(func_382(uParam0->f_12), 0, 0);
				}
				func_381(201, "ITEM_SELECT", -1, 0);
				if (bParam10)
				{
					func_381(203, "STORE_TAKE_ALL", -1, 0);
				}
				func_381(202, "ITEM_BACK", -1, 0);
				if (!bParam10)
				{
					func_381(203, "SNK_LIFT", -1, 0);
					func_348(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				uParam0->f_54 = 4;
				break;
			
			case 4:
				if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
				{
					unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), false, 0);
				}
				if (unk_0xF5F493B789EA063E(unk_0xC1A5EC5C986B98AD(), joaat("script_task_turn_ped_to_face_entity")) == 7)
				{
					if (!BitTest(uParam8->f_1, 1))
					{
						if (!bParam10)
						{
							func_463(unk_0x93E99A2DBCBA9CFA(), 0, 98816, 0);
						}
						else
						{
							func_463(unk_0x93E99A2DBCBA9CFA(), 0, 256, 0);
						}
						unk_0xECDAB41968FF21A8(&(uParam8->f_1), 1);
					}
				}
				iVar9 = 0;
				if (unk_0xCC17806DB0C41C19())
				{
					if (unk_0x4566EBBAF3C1E749(2))
					{
						unk_0x8B438725D591ED78(0, 1, 1);
						unk_0x8B438725D591ED78(0, 2, 1);
						unk_0x3210A569BAF257BB(0, 237, 1);
						unk_0x3210A569BAF257BB(0, 238, 1);
						unk_0x3210A569BAF257BB(0, 241, 1);
						unk_0x3210A569BAF257BB(0, 242, 1);
						func_344(0, 0, 0, 1);
						func_343(0, -1, 1);
						if (func_342())
						{
							if (Global_4541029 != uParam0->f_12)
							{
								unk_0x531D638530A8DB97(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								uParam0->f_12 = Global_4541029;
								func_384(uParam0->f_12, 1, 1);
								uParam0->f_27 = 0;
								uParam0->f_29 = 0;
								uParam0->f_30 = 0;
								uParam0->f_32 = 0;
								sVar10 = func_382(uParam0->f_12);
								if (unk_0x42FA33BDEDF21186(sVar10))
								{
									func_383(sVar10, 0, 0);
								}
							}
							else
							{
								iVar9 = 1;
							}
						}
					}
				}
				if (!bParam10)
				{
					func_348(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				func_332(uParam0, &(uParam7->f_5), bParam10);
				if ((uParam7->f_2 > 2 && BitTest(uParam7->f_1, 0)) && BitTest(uParam8->f_1, 0))
				{
					unk_0x061B1200C95204CB(&(uParam8->f_1), 0);
				}
				if (bParam10 && unk_0x87644B1F984197FE(2, 203))
				{
					func_327(uParam0, bParam10);
					uParam0->f_35 = 1;
					uParam0->f_54 = 3;
				}
				if ((unk_0x87644B1F984197FE(2, 201) || iVar9 == 1) || uParam0->f_47)
				{
					if (!uParam0->f_47)
					{
						uParam0->f_27 = 1;
						uParam0->f_29 = 0;
						uParam0->f_30 = 0;
						uParam0->f_32 = 0;
						func_412(&(uParam0->f_44));
					}
					if ((uParam0->f_28 && uParam0->f_31) && uParam0->f_33)
					{
						if (func_219())
						{
							uParam0->f_47 = 1;
							uParam0->f_48 = 0;
							uParam0->f_49 = -1;
							iVar0 = 0;
							if (!bParam10)
							{
								iVar0 = func_389(uParam0, uParam0->f_12);
							}
							func_315(uParam0, -1303831698, 537254313, iVar0);
							uParam0->f_54 = 5;
						}
						else
						{
							uParam0->f_35 = 1;
							unk_0x531D638530A8DB97(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							uParam7->f_5[uParam0->f_12]++;
							uParam0->f_54 = 6;
						}
					}
					else
					{
						uParam0->f_35 = 0;
						if (!uParam0->f_28 && !uParam0->f_36)
						{
							iVar0 = 0;
							if (!bParam10)
							{
								iVar0 = func_389(uParam0, uParam0->f_12);
							}
							func_314(unk_0x14580F20CBCE4FA9(func_382(uParam0->f_12)), iVar0, 0);
							func_307(0, 31, 3);
							uParam0->f_54 = 11;
						}
						unk_0x531D638530A8DB97(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
					if (!uParam0->f_33)
					{
						uParam0->f_54 = 3;
					}
				}
				if (!bParam10)
				{
					if (unk_0x87644B1F984197FE(2, 203) && !uParam0->f_47)
					{
						uParam0->f_27 = 1;
						if (uParam7->f_5[uParam0->f_12] < 10)
						{
							uParam0->f_33 = 1;
						}
						else
						{
							uParam0->f_33 = 0;
						}
						func_412(&(uParam0->f_44));
						if (!uParam0->f_33)
						{
							unk_0x531D638530A8DB97(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						}
						else if (!uParam0->f_31)
						{
							unk_0x531D638530A8DB97(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						}
						else
						{
							unk_0x3EE48ADC8C7F5CC4(unk_0xC1A5EC5C986B98AD(), func_163(), func_306(), 8f, -8f, -1, 1048576, 0, 0, 0, 0);
							uParam0->f_54 = 8;
							uParam0->f_15 = unk_0xA5E11AF0A2B928C1();
							unk_0x531D638530A8DB97(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							if (!bParam10)
							{
								func_419(uParam0, &(uParam8->f_3));
							}
						}
					}
				}
				if (unk_0x87644B1F984197FE(2, 202) || unk_0x6BD2D66249562506(2, 238))
				{
					if (func_475(1))
					{
						func_439();
					}
					uParam0->f_54 = 9;
					uParam0->f_15 = unk_0xA5E11AF0A2B928C1();
					if (!bParam10)
					{
						unk_0x531D638530A8DB97(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						func_419(uParam0, &(uParam8->f_3));
					}
					else
					{
						unk_0x531D638530A8DB97(-1, "BACK", "HUD_FREEMODE_SOUNDSET", 1);
						Global_2694554 = 1;
					}
				}
				if (uParam0->f_34)
				{
					uParam0->f_54 = 10;
					uParam0->f_15 = unk_0xA5E11AF0A2B928C1();
					if (!bParam10)
					{
						func_419(uParam0, &(uParam8->f_3));
					}
					func_153("SHR_SOLD_OUT", -1);
				}
				iVar13 = 0;
				while (iVar13 < uParam0->f_13)
				{
					if (func_147(&(Global_2793044.f_12[iVar13 /*2*/])) && func_421(Global_2793044.f_12[iVar13 /*2*/], 150000, 0))
					{
						func_14(&(Global_2793044.f_12[iVar13 /*2*/]));
						uParam7->f_5[iVar13] = 0;
						uParam0->f_54 = 3;
					}
					iVar13++;
				}
				break;
			
			case 5:
				iVar0 = 0;
				if (!bParam10)
				{
					func_348(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
					iVar0 = func_389(uParam0, uParam0->f_12);
				}
				if (func_315(uParam0, -1303831698, 537254313, iVar0))
				{
				}
				else
				{
					switch (uParam0->f_49)
					{
						case 0:
							uParam0->f_35 = 0;
							if (!uParam0->f_28 && !uParam0->f_36)
							{
								if (!bParam10)
								{
									iVar0 = func_389(uParam0, uParam0->f_12);
								}
								func_314(unk_0x14580F20CBCE4FA9(func_382(uParam0->f_12)), iVar0, 0);
								func_307(0, 31, 3);
								func_305();
								func_304();
								uParam0->f_54 = 11;
							}
							else
							{
								if (func_475(1))
								{
									func_439();
								}
								uParam0->f_54 = 9;
								uParam0->f_15 = unk_0xA5E11AF0A2B928C1();
								unk_0x531D638530A8DB97(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
								if (!bParam10)
								{
									func_419(uParam0, &(uParam8->f_3));
								}
							}
							break;
						
						case 2:
							uParam0->f_35 = 1;
							unk_0x531D638530A8DB97(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							uParam7->f_5[uParam0->f_12]++;
							uParam0->f_54 = 6;
							break;
						
						default:
							break;
						}
				}
				break;
			
			case 6:
				if (!bParam10)
				{
					func_348(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (func_219())
				{
					unk_0x63A4A2A61A346797(func_302(func_303()));
				}
				if (bParam10)
				{
					if (!BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_133, 6))
					{
						unk_0xECDAB41968FF21A8(&(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_133), 6);
					}
					unk_0xCD5D2800A2E68096(0, uParam0->f_12, 0, 1);
					iVar1 = 0;
					switch (uParam0->f_12)
					{
						case 3:
							func_110(1276, 1, -1);
							func_109(16, 1, -1);
							func_278(1, -251807494, 1359863693, 1, func_285(), -1317518156, 0, joaat("pa"));
							break;
						
						case 1:
							func_110(1277, 1, -1);
							func_109(15, 1, -1);
							func_278(1, 1199442189, 1359863693, 1, func_285(), -1317518156, 0, joaat("pa"));
							break;
						
						case 2:
							func_109(14, 1, -1);
							func_110(1278, 1, -1);
							func_278(1, 1486811039, 1359863693, 1, func_285(), -1317518156, 0, joaat("pa"));
							break;
						
						case 4:
							uParam0->f_55 = 20;
							if (func_131(1098, -1, 0) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_131(1098, -1, 0));
							}
							func_278(1, -181862273, 1359863693, uParam0->f_55, func_285(), -1317518156, 0, joaat("pa"));
							func_110(1098, uParam0->f_55, -1);
							break;
						
						case 0:
							func_110(62, 1, -1);
							func_278(1, -39155154, 1359863693, 1, func_285(), -1317518156, 0, joaat("pa"));
							break;
						
						case 5:
							func_110(63, 1, -1);
							func_278(1, -1600998734, 1359863693, 1, func_285(), -1317518156, 0, joaat("pa"));
							break;
						
						case 6:
							func_110(10404, 1, -1);
							func_278(1, 495696637, 1359863693, 1, func_285(), -1317518156, 0, joaat("pa"));
							break;
					}
				}
				else
				{
					switch (uParam0->f_12)
					{
						case 3:
							if (func_277(unk_0x93E99A2DBCBA9CFA(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_389(uParam0, uParam0->f_12);
							}
							func_110(1276, 1, -1);
							func_278(1, -251807494, 1359863693, 1, func_285(), -1317518156, 0, 1037810546);
							func_109(16, 1, -1);
							unk_0x2AF653A620D7D7B4(iVar1, unk_0x14580F20CBCE4FA9("SNK_ITEM1"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						
						case 1:
							if (func_277(unk_0x93E99A2DBCBA9CFA(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_389(uParam0, uParam0->f_12);
							}
							func_110(1277, 1, -1);
							func_278(1, 1199442189, 1359863693, 1, func_285(), -1317518156, 0, 1037810546);
							func_109(15, 1, -1);
							unk_0x2AF653A620D7D7B4(iVar1, unk_0x14580F20CBCE4FA9("SNK_ITEM2"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						
						case 2:
							if (func_277(unk_0x93E99A2DBCBA9CFA(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_389(uParam0, uParam0->f_12);
							}
							func_109(14, 1, -1);
							func_110(1278, 1, -1);
							func_278(1, 1486811039, 1359863693, 1, func_285(), -1317518156, 0, 1037810546);
							unk_0x2AF653A620D7D7B4(iVar1, unk_0x14580F20CBCE4FA9("SNK_ITEM3"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						
						case 4:
							if (func_277(unk_0x93E99A2DBCBA9CFA(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_389(uParam0, uParam0->f_12);
							}
							uParam0->f_55 = 20;
							if (func_131(1098, -1, 0) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_131(1098, -1, 0));
							}
							func_110(1098, uParam0->f_55, -1);
							func_278(1, -181862273, 1359863693, uParam0->f_55, func_285(), -1317518156, 0, 1037810546);
							unk_0x2AF653A620D7D7B4(iVar1, unk_0x14580F20CBCE4FA9("SNK_ITEM4"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						
						case 0:
							if (func_277(unk_0x93E99A2DBCBA9CFA(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_389(uParam0, uParam0->f_12);
							}
							func_110(62, 1, -1);
							func_278(1, -39155154, 1359863693, 1, func_285(), -1317518156, 0, 1037810546);
							unk_0x2AF653A620D7D7B4(iVar1, unk_0x14580F20CBCE4FA9("SNK_ITEM5"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						
						case 6:
							if (func_277(unk_0x93E99A2DBCBA9CFA(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_389(uParam0, uParam0->f_12);
							}
							func_110(10404, 1, -1);
							func_278(1, 495696637, 1359863693, 1, func_285(), -1317518156, 0, 1037810546);
							unk_0x2AF653A620D7D7B4(iVar1, unk_0x14580F20CBCE4FA9("SNK_ITEM7"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						
						case 5:
							if (func_277(unk_0x93E99A2DBCBA9CFA(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_389(uParam0, uParam0->f_12);
							}
							func_110(63, 1, -1);
							func_278(1, -1600998734, 1359863693, 1, func_285(), -1317518156, 0, 1037810546);
							unk_0x2AF653A620D7D7B4(iVar1, unk_0x14580F20CBCE4FA9("SNK_ITEM6"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						}
				}
				if (func_219())
				{
					func_211(func_303());
				}
				func_276(-iVar1, 0);
				uParam0->f_51 = (uParam0->f_51 + iVar1);
				if (!BitTest(*uParam8, 30))
				{
					unk_0xECDAB41968FF21A8(uParam8, 30);
				}
				if (!BitTest(uParam8->f_1, 0))
				{
					unk_0xECDAB41968FF21A8(&(uParam8->f_1), 0);
					uParam8->f_2 = uParam0->f_12;
				}
				if (uParam0->f_34 || uParam0->f_51 >= 1000)
				{
					uParam0->f_54 = 10;
					if (!bParam10)
					{
						func_419(uParam0, &(uParam8->f_3));
					}
					func_153("SHR_SOLD_OUT", -1);
				}
				else if (uParam7->f_5[uParam0->f_12] >= 10 || func_396(uParam0->f_12))
				{
					uParam0->f_54 = 3;
				}
				else
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 8:
				func_198(1);
				switch (uParam0->f_12)
				{
					case 3:
						func_274(0, 1f, 3);
						func_278(1, -251807494, 1359863693, 1, func_285(), -85260536, 0, 1037810546);
						func_110(1276, 1, -1);
						func_109(13, 1, -1);
						break;
					
					case 1:
						func_274(1, 1f, 3);
						func_110(1277, 1, -1);
						func_278(1, 1199442189, 1359863693, 1, func_285(), -85260536, 0, 1037810546);
						func_109(13, 1, -1);
						break;
					
					case 2:
						func_274(2, 1f, 3);
						func_110(1278, 1, -1);
						func_278(1, 1486811039, 1359863693, 1, func_285(), -85260536, 0, 1037810546);
						func_109(13, 1, -1);
						break;
					
					case 4:
						uParam0->f_55 = 20;
						if (func_131(1098, -1, 0) + 20 > 20)
						{
							uParam0->f_55 = (20 - func_131(1098, -1, 0));
						}
						func_274(6, unk_0xBBDA792448DB5A89(uParam0->f_55), 3);
						func_110(1098, uParam0->f_55, -1);
						func_278(1, -181862273, 1359863693, 1, func_285(), -85260536, 0, 1037810546);
						break;
					
					case 0:
						func_274(3, 1f, 3);
						func_110(62, 1, -1);
						func_278(1, -39155154, 1359863693, 1, func_285(), -85260536, 0, 1037810546);
						break;
					
					case 6:
						func_274(5, 1f, 3);
						func_110(10404, 1, -1);
						func_278(1, 495696637, 1359863693, 1, func_285(), -85260536, 0, 1037810546);
						break;
					
					case 5:
						func_274(4, 1f, 3);
						func_110(63, 1, -1);
						func_278(1, -1600998734, 1359863693, 1, func_285(), -85260536, 0, 1037810546);
						break;
				}
				if (!bParam10)
				{
					func_463(unk_0x93E99A2DBCBA9CFA(), 1, 0, 0);
				}
				if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) < 1 && !func_272(unk_0x93E99A2DBCBA9CFA()))
				{
					unk_0xD010006F3FE4A908(unk_0x93E99A2DBCBA9CFA(), 37, unk_0x7F5C2D0AC2228834(1));
					unk_0xECDAB41968FF21A8(uParam8, 25);
					if (!BitTest(*uParam8, 1))
					{
						unk_0xECDAB41968FF21A8(uParam8, 2);
					}
				}
				if (!BitTest(uParam8->f_1, 2))
				{
					unk_0xECDAB41968FF21A8(&(uParam8->f_1), 2);
				}
				uParam0->f_54 = 12;
				break;
			
			case 11:
				if (!Global_100733.f_1474 && !unk_0x4136116828BCAAB6())
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 10:
				if (!bParam10)
				{
					func_463(unk_0x93E99A2DBCBA9CFA(), 1, 0, 0);
				}
				if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_15) > 1000)
				{
					uParam0->f_54 = 12;
				}
				else
				{
					unk_0x4150CF46B891FFF5(2, 203);
					unk_0x4150CF46B891FFF5(2, 202);
					unk_0x4150CF46B891FFF5(2, 188);
					unk_0x4150CF46B891FFF5(2, 187);
					unk_0x4150CF46B891FFF5(2, 189);
					unk_0x4150CF46B891FFF5(2, 190);
				}
				break;
			
			case 9:
				if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_15) > 1000)
				{
					uParam0->f_54 = 0;
				}
				else
				{
					unk_0x4150CF46B891FFF5(2, 203);
					unk_0x4150CF46B891FFF5(2, 202);
					unk_0x4150CF46B891FFF5(2, 188);
					unk_0x4150CF46B891FFF5(2, 187);
					unk_0x4150CF46B891FFF5(2, 189);
					unk_0x4150CF46B891FFF5(2, 190);
				}
				break;
			
			case 12:
				if (BitTest(uParam7->f_1, 3))
				{
					if (BitTest(uParam8->f_1, 2))
					{
						unk_0x061B1200C95204CB(&(uParam8->f_1), 2);
					}
					if (BitTest(uParam8->f_1, 3))
					{
						unk_0x061B1200C95204CB(&(uParam8->f_1), 3);
					}
				}
				break;
		}
	}
	else
	{
		if ((unk_0xA5E11AF0A2B928C1() % 8000) < 50)
		{
		}
		if (BitTest(uParam7->f_1, 3))
		{
			if (BitTest(uParam8->f_1, 2))
			{
				unk_0x061B1200C95204CB(&(uParam8->f_1), 2);
			}
			if (BitTest(uParam8->f_1, 3))
			{
				unk_0x061B1200C95204CB(&(uParam8->f_1), 3);
			}
		}
		if ((uParam0->f_54 != 12 && BitTest(uParam0->f_52, 26)) && !unk_0x4136116828BCAAB6())
		{
			if ((((uParam0->f_54 == 4 || uParam0->f_54 == 3) || uParam0->f_54 == 6) || uParam0->f_54 == 11) || uParam0->f_54 == 5)
			{
				func_419(uParam0, &(uParam8->f_3));
			}
			uParam0->f_54 = 12;
		}
		if (uParam0->f_14 != -1)
		{
			func_266(&(uParam0->f_14));
		}
	}
}

int func_272(int iParam0)
{
	if ((func_40(iParam0) || func_273(iParam0)) && func_220(func_221(iParam0)) == 0f)
	{
		return 1;
	}
	return 0;
}

int func_273(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1894573[iVar0 /*608*/].f_1, 7);
	}
	return 0;
}

void func_274(int iParam0, float fParam1, int iParam2)
{
	struct<8> Var0;
	struct<3> Var8;
	int iVar11;
	int iVar12;
	
	if (fParam1 > 0f)
	{
		if (func_275(iParam0, &Var0))
		{
			Var8 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 0) };
			func_198(1);
			iVar12 = -1;
			iVar11 = 0;
			while (iVar11 < 20)
			{
				if (Global_2672505.f_1080[iVar11 /*30*/].f_6 == 0 || Global_2672505.f_1080[iVar11 /*30*/].f_6 == 7)
				{
					iVar12 = iVar11;
					iVar11 = 20;
				}
				iVar11++;
			}
			if (iVar12 != -1)
			{
				Global_2672505.f_1080[iVar12 /*30*/] = { Var8 };
				Global_2672505.f_1080[iVar12 /*30*/].f_6 = 1;
				Global_2672505.f_1080[iVar12 /*30*/].f_4 = func_197(Global_2672505.f_1080[iVar12 /*30*/], &Global_1574479, &Global_1574480);
				Global_2672505.f_1080[iVar12 /*30*/].f_5 = fParam1;
				Global_2672505.f_1080[iVar12 /*30*/].f_7 = unk_0x0DB7F8294D73598B();
				Global_2672505.f_1080[iVar12 /*30*/].f_8 = iParam2;
				Global_2672505.f_1080[iVar12 /*30*/].f_14 = { Var0 };
				Global_2672505.f_1080[iVar12 /*30*/].f_9 = func_196();
				Global_2672505.f_1080[iVar12 /*30*/].f_10 = func_195();
			}
		}
	}
}

int func_275(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "PU_REWARD_S1", 32);
			return 1;
		
		case 1:
			StringCopy(sParam1, "PU_REWARD_S2", 32);
			return 1;
		
		case 2:
			StringCopy(sParam1, "PU_REWARD_S3", 32);
			return 1;
		
		case 3:
			StringCopy(sParam1, "PU_REWARD_D1", 32);
			return 1;
		
		case 4:
			StringCopy(sParam1, "PU_REWARD_D2", 32);
			return 1;
		
		case 6:
			StringCopy(sParam1, "PU_REWARD_11", 32);
			return 1;
		
		case 7:
			StringCopy(sParam1, "PU_REWARD_PC", 32);
			return 1;
		
		case 5:
			StringCopy(sParam1, "PU_REWARD_D3", 32);
			return 1;
		
		default:
	}
	return 0;
}

void func_276(int iParam0, int iParam1)
{
	func_206(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_207(iParam0, 0);
	}
}

int func_277(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_185())
	{
		return 0;
	}
	if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_278(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xA26A9A07F761D8F8())
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	if (Global_1890403)
	{
		if (Global_1890403.f_3.f_6 != iParam1)
		{
			bVar0 = true;
		}
		else if (Global_1890403.f_3 != iParam0)
		{
			bVar0 = true;
			iVar1 = 1;
		}
		else if (Global_1890403.f_3.f_3 != iParam4)
		{
			bVar0 = true;
			iVar1 = 1;
		}
		else if (Global_1890403.f_3.f_5 != iParam2)
		{
			bVar0 = true;
		}
		else if (Global_1890403.f_3.f_1 != iParam5)
		{
			bVar0 = true;
			iVar1 = 1;
		}
		else if (Global_1890403.f_3.f_4 != iParam7)
		{
			bVar0 = true;
			iVar1 = 1;
		}
		else if (Global_1890403.f_3.f_9 != iParam6)
		{
			bVar0 = true;
		}
		else if (Global_1890403.f_3.f_2 != func_283())
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		func_282(&(Global_1890403.f_3));
		unk_0x5EF22E729F0ECCB7(&(Global_1890403.f_3));
		func_281();
	}
	Global_1890403 = 1;
	Global_1890403.f_3 = iParam0;
	if (func_279())
	{
		Global_1890403.f_3.f_2 = func_283();
	}
	Global_1890403.f_3.f_6 = iParam1;
	Global_1890403.f_3.f_5 = iParam2;
	Global_1890403.f_3.f_7 = (Global_1890403.f_3.f_7 + iParam3);
	Global_1890403.f_3.f_3 = iParam4;
	Global_1890403.f_3.f_1 = iParam5;
	Global_1890403.f_3.f_4 = iParam7;
	Global_1890403.f_3.f_9 = iParam6;
	if (((((iVar1 || Global_1890403.f_13 != Global_1890403.f_3) || Global_1890403.f_13.f_3 != Global_1890403.f_3.f_3) || Global_1890403.f_13.f_1 != Global_1890403.f_3.f_1) || Global_1890403.f_13.f_4 != Global_1890403.f_3.f_4) || (unk_0xD48CE560FB238316() - Global_1890403.f_3.f_8) >= 120)
	{
		if (Global_1890403.f_3 != 0)
		{
			Global_1890403.f_3.f_8 = unk_0xD48CE560FB238316();
		}
		else
		{
			Global_1890403.f_3.f_8 = 0;
		}
	}
	func_14(&(Global_1890403.f_1));
	func_19(&(Global_1890403.f_1), 0, 0);
}

int func_279()
{
	struct<13> Var0;
	
	if (unk_0x15342BF2828C4587())
	{
		if ((unk_0x67EBFCF2F78761B9() && unk_0x7FFBE14C34D75E19()) && unk_0x56046AEC15223442())
		{
			Var0 = { func_280() };
			if (unk_0xE52BCF7D5014E06E() && unk_0x7DD2CE58D33238D9(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_280()
{
	struct<13> Var0;
	
	unk_0xBC63AA40EF47053A(&Var0, 13);
	return Var0;
}

void func_281()
{
	Global_1890403.f_13 = { Global_1890403.f_3 };
	Global_1890403 = 0;
	Global_1890403.f_3 = 0;
	Global_1890403.f_3.f_2 = 0;
	Global_1890403.f_3.f_6 = 0;
	Global_1890403.f_3.f_5 = 0;
	Global_1890403.f_3.f_7 = 0;
	Global_1890403.f_3.f_3 = 0;
	Global_1890403.f_3.f_1 = 0;
	Global_1890403.f_3.f_4 = 0;
	Global_1890403.f_3.f_9 = 0;
	func_14(&(Global_1890403.f_1));
}

void func_282(var uParam0)
{
}

int func_283()
{
	struct<13> Var0;
	
	Var0 = { func_280() };
	return func_284(&Var0);
}

int func_284(var uParam0)
{
	var uVar0;
	
	if (unk_0x15342BF2828C4587())
	{
		if (unk_0xE52BCF7D5014E06E())
		{
			if (unk_0x7DD2CE58D33238D9(uParam0))
			{
				unk_0xEB463FCE742A28B2(&uVar0, 35, uParam0);
				return uVar0;
			}
		}
	}
	return -1;
}

int func_285()
{
	return unk_0x14580F20CBCE4FA9(func_286());
}

char* func_286()
{
	int iVar0;
	int iVar1;
	
	if (func_301())
	{
		return func_299(func_300(unk_0x93E99A2DBCBA9CFA()));
	}
	else if (Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_33 != -1)
	{
		return func_298(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_267.f_33);
	}
	else if (func_297(unk_0x93E99A2DBCBA9CFA()))
	{
		return "SIMEON_SHOWROOM";
	}
	else if (func_295(unk_0x93E99A2DBCBA9CFA()))
	{
		return "BEACH_PARTY";
	}
	else if (func_294())
	{
		return "ARENA_BOX";
	}
	else if (Global_2793044.f_5992.f_1 && Global_1983438 != -1)
	{
		return func_293(Global_1983438);
	}
	else if (Global_100733.f_387 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 18)
		{
			iVar1 = func_292(iVar0);
			if (BitTest(Global_100733.f_1407[iVar1], 5))
			{
				return func_291(iVar0);
			}
			iVar0++;
		}
	}
	return func_287();
}

char* func_287()
{
	char cVar0[24];
	
	if (func_46(unk_0x93E99A2DBCBA9CFA(), 1, 1))
	{
		StringCopy(&cVar0, "FREEMODE_", 24);
		StringConCat(&cVar0, func_289(unk_0x68B5877F7FFFD8DF(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1))), 24);
		return func_288(&cVar0);
	}
	return "FREEMODE_DEAD";
}

var func_288(char[4] cParam0)
{
	return cParam0;
}

char* func_289(char* sParam0)
{
	struct<8> Var0;
	char cVar16[64];
	char cVar32[64];
	int iVar48;
	
	if (unk_0x1CD355F775EE640C() == 0)
	{
		if (!unk_0x2AC37494BBF1DB16(sParam0))
		{
			iVar48 = 0;
			iVar48 = 0;
			while (iVar48 <= (unk_0xA7D1818D200CD09B(sParam0) - 1))
			{
				StringCopy(&Var0, unk_0x8B26749839E18CBE(sParam0, iVar48, iVar48 + 1), 64);
				StringCopy(&cVar16, func_290(&Var0), 64);
				StringConCat(&cVar32, &cVar16, 64);
				iVar48++;
			}
			return unk_0x8B26749839E18CBE(&cVar32, 0, unk_0xA7D1818D200CD09B(&cVar32));
		}
	}
	return sParam0;
}

char* func_290(char* sParam0)
{
	if (!unk_0x2AC37494BBF1DB16(sParam0))
	{
		if (unk_0xA7D1818D200CD09B(sParam0) == 1)
		{
			if (unk_0x4310A0DB886F9FED(sParam0, "a") || unk_0x4310A0DB886F9FED(sParam0, "A"))
			{
				return "A";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "b") || unk_0x4310A0DB886F9FED(sParam0, "B"))
			{
				return "B";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "c") || unk_0x4310A0DB886F9FED(sParam0, "C"))
			{
				return "C";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "d") || unk_0x4310A0DB886F9FED(sParam0, "D"))
			{
				return "D";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "e") || unk_0x4310A0DB886F9FED(sParam0, "E"))
			{
				return "E";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "f") || unk_0x4310A0DB886F9FED(sParam0, "F"))
			{
				return "F";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "g") || unk_0x4310A0DB886F9FED(sParam0, "G"))
			{
				return "G";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "h") || unk_0x4310A0DB886F9FED(sParam0, "H"))
			{
				return "H";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "i") || unk_0x4310A0DB886F9FED(sParam0, "I"))
			{
				return "I";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "j") || unk_0x4310A0DB886F9FED(sParam0, "J"))
			{
				return "J";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "k") || unk_0x4310A0DB886F9FED(sParam0, "K"))
			{
				return "K";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "l") || unk_0x4310A0DB886F9FED(sParam0, "L"))
			{
				return "L";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "m") || unk_0x4310A0DB886F9FED(sParam0, "M"))
			{
				return "M";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "n") || unk_0x4310A0DB886F9FED(sParam0, "N"))
			{
				return "N";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "o") || unk_0x4310A0DB886F9FED(sParam0, "O"))
			{
				return "O";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "p") || unk_0x4310A0DB886F9FED(sParam0, "P"))
			{
				return "P";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "q") || unk_0x4310A0DB886F9FED(sParam0, "Q"))
			{
				return "Q";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "r") || unk_0x4310A0DB886F9FED(sParam0, "R"))
			{
				return "R";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "s") || unk_0x4310A0DB886F9FED(sParam0, "S"))
			{
				return "S";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "t") || unk_0x4310A0DB886F9FED(sParam0, "T"))
			{
				return "T";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "u") || unk_0x4310A0DB886F9FED(sParam0, "U"))
			{
				return "U";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "v") || unk_0x4310A0DB886F9FED(sParam0, "V"))
			{
				return "V";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "w") || unk_0x4310A0DB886F9FED(sParam0, "W"))
			{
				return "W";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "x") || unk_0x4310A0DB886F9FED(sParam0, "X"))
			{
				return "X";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "y") || unk_0x4310A0DB886F9FED(sParam0, "Y"))
			{
				return "Y";
			}
			else if (unk_0x4310A0DB886F9FED(sParam0, "z") || unk_0x4310A0DB886F9FED(sParam0, "Z"))
			{
				return "Z";
			}
		}
	}
	return sParam0;
}

char* func_291(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GUN_SHOP_01_DT";
		
		case 1:
			return "GUN_SHOP_02_SS";
		
		case 2:
			return "GUN_SHOP_03_HW";
		
		case 3:
			return "GUN_SHOP_04_ELS";
		
		case 4:
			return "GUN_SHOP_05_PB";
		
		case 5:
			return "GUN_SHOP_06_LS";
		
		case 6:
			return "GUN_SHOP_07_MW";
		
		case 7:
			return "GUN_SHOP_08_CS";
		
		case 8:
			return "GUN_SHOP_09_GOH";
		
		case 9:
			return "GUN_SHOP_10_VWH";
		
		case 10:
			return "GUN_SHOP_11_ID1";
		
		case 11:
			return "GUN_SHOP_ARMORY";
		
		case 12:
			return "GUN_SHOP_ARMORY_AVENGER";
		
		case 13:
			return "GUN_SHOP_ARMORY_HACKER_TRUCK";
		
		case 14:
			return "GUN_SHOP_ARMORY_ARENA";
		
		case 15:
			return "GUN_SHOP_ARMORY_ARCADE";
		
		case 16:
			return "GUN_SHOP_ARMORY_SUB";
		
		case 17:
			return "GUN_SHOP_ARMORY_FIXER";
		
		case 18:
			return "GUN_SHOP_ARMORY_JUGGALO";
		
		default:
	}
	return "";
}

int func_292(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 28;
		
		case 1:
			return 29;
		
		case 2:
			return 30;
		
		case 3:
			return 31;
		
		case 4:
			return 32;
		
		case 5:
			return 33;
		
		case 6:
			return 34;
		
		case 7:
			return 35;
		
		case 8:
			return 36;
		
		case 9:
			return 37;
		
		case 10:
			return 38;
		
		case 11:
			return 46;
		
		case 12:
			return 47;
		
		case 13:
			return 48;
		
		case 14:
			return 49;
		
		case 15:
			return 52;
		
		case 16:
			return 53;
		
		case 17:
			return 56;
		
		case 18:
			return 59;
		
		default:
	}
	return -1;
}

char* func_293(int iParam0)
{
	switch (iParam0)
	{
		case -2:
			return "SHOP_ROBBERIES_SHOP_CONV_10";
		
		case 0:
			return "SHOP_ROBBERIES_SHOP_GAS_1";
		
		case 1:
			return "SHOP_ROBBERIES_SHOP_GAS_2";
		
		case 2:
			return "SHOP_ROBBERIES_SHOP_GAS_3";
		
		case 3:
			return "SHOP_ROBBERIES_SHOP_GAS_4";
		
		case 4:
			return "SHOP_ROBBERIES_SHOP_GAS_5";
		
		case 5:
			return "SHOP_ROBBERIES_SHOP_LIQ_1";
		
		case 6:
			return "SHOP_ROBBERIES_SHOP_LIQ_2";
		
		case 7:
			return "SHOP_ROBBERIES_SHOP_LIQ_3";
		
		case 8:
			return "SHOP_ROBBERIES_SHOP_LIQ_4";
		
		case 9:
			return "SHOP_ROBBERIES_SHOP_LIQ_5";
		
		case 10:
			return "SHOP_ROBBERIES_SHOP_CONV_1";
		
		case 11:
			return "SHOP_ROBBERIES_SHOP_CONV_2";
		
		case 12:
			return "SHOP_ROBBERIES_SHOP_CONV_3";
		
		case 13:
			return "SHOP_ROBBERIES_SHOP_CONV_4";
		
		case 14:
			return "SHOP_ROBBERIES_SHOP_CONV_5";
		
		case 15:
			return "SHOP_ROBBERIES_SHOP_CONV_6";
		
		case 16:
			return "SHOP_ROBBERIES_SHOP_CONV_7";
		
		case 17:
			return "SHOP_ROBBERIES_SHOP_CONV_8";
		
		case 18:
			return "SHOP_ROBBERIES_SHOP_CONV_9";
		
		default:
	}
	return "SHOP_ROBBERIES_SHOP_NONE";
}

bool func_294()
{
	return Global_2764615;
}

bool func_295(int iParam0)
{
	return func_296(&(Global_2657589[iParam0 /*466*/].f_445), 0);
}

var func_296(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

int func_297(int iParam0)
{
	if (iParam0 != func_185())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_5, 25);
	}
	return 0;
}

char* func_298(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "PROPERTY_HIGH_APT_1";
		
		case 2:
			return "PROPERTY_HIGH_APT_2";
		
		case 3:
			return "PROPERTY_HIGH_APT_3";
		
		case 4:
			return "PROPERTY_HIGH_APT_4";
		
		case 5:
			return "PROPERTY_HIGH_APT_5";
		
		case 6:
			return "PROPERTY_HIGH_APT_6";
		
		case 7:
			return "PROPERTY_HIGH_APT_7";
		
		case 8:
			return "PROPERTY_MEDIUM_APT_1";
		
		case 9:
			return "PROPERTY_MEDIUM_APT_2";
		
		case 10:
			return "PROPERTY_MEDIUM_APT_3";
		
		case 11:
			return "PROPERTY_MEDIUM_APT_4";
		
		case 12:
			return "PROPERTY_MEDIUM_APT_5";
		
		case 13:
			return "PROPERTY_MEDIUM_APT_6";
		
		case 14:
			return "PROPERTY_MEDIUM_APT_7";
		
		case 15:
			return "PROPERTY_MEDIUM_APT_8";
		
		case 16:
			return "PROPERTY_MEDIUM_APT_9";
		
		case 17:
			return "PROPERTY_LOW_APT_1";
		
		case 18:
			return "PROPERTY_LOW_APT_2";
		
		case 19:
			return "PROPERTY_LOW_APT_3";
		
		case 20:
			return "PROPERTY_LOW_APT_4";
		
		case 21:
			return "PROPERTY_LOW_APT_5";
		
		case 22:
			return "PROPERTY_LOW_APT_6";
		
		case 23:
			return "PROPERTY_LOW_APT_7";
		
		case 24:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_1";
		
		case 25:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_2";
		
		case 26:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_3";
		
		case 27:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_4";
		
		case 28:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_5";
		
		case 29:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_6";
		
		case 30:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_7";
		
		case 31:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_8";
		
		case 32:
			return "PROPERTY_GARAGE_SOUTH_LOS_SANTOS_1";
		
		case 33:
			return "PROPERTY_GARAGE_SOUTH_LOS_SANTOS_2";
		
		case 34:
			return "PROPERTY_HIGH_APT_8";
		
		case 35:
			return "PROPERTY_HIGH_APT_9";
		
		case 36:
			return "PROPERTY_HIGH_APT_10";
		
		case 37:
			return "PROPERTY_HIGH_APT_11";
		
		case 38:
			return "PROPERTY_HIGH_APT_12";
		
		case 39:
			return "PROPERTY_HIGH_APT_13";
		
		case 40:
			return "PROPERTY_HIGH_APT_14";
		
		case 41:
			return "PROPERTY_HIGH_APT_15";
		
		case 42:
			return "PROPERTY_HIGH_APT_16";
		
		case 43:
			return "PROPERTY_HIGH_APT_17";
		
		case 44:
			return "PROPERTY_GARAGE_NEW_1";
		
		case 45:
			return "PROPERTY_GARAGE_NEW_2";
		
		case 46:
			return "PROPERTY_GARAGE_NEW_3";
		
		case 47:
			return "PROPERTY_GARAGE_NEW_5";
		
		case 48:
			return "PROPERTY_GARAGE_NEW_6";
		
		case 49:
			return "PROPERTY_GARAGE_NEW_7";
		
		case 50:
			return "PROPERTY_GARAGE_NEW_8";
		
		case 51:
			return "PROPERTY_GARAGE_NEW_9";
		
		case 52:
			return "PROPERTY_GARAGE_NEW_14";
		
		case 53:
			return "PROPERTY_GARAGE_NEW_16";
		
		case 54:
			return "PROPERTY_GARAGE_NEW_17";
		
		case 55:
			return "PROPERTY_GARAGE_NEW_18";
		
		case 56:
			return "PROPERTY_GARAGE_NEW_19";
		
		case 57:
			return "PROPERTY_GARAGE_NEW_20";
		
		case 58:
			return "PROPERTY_GARAGE_NEW_21";
		
		case 59:
			return "PROPERTY_GARAGE_NEW_22";
		
		case 60:
			return "PROPERTY_GARAGE_NEW_23";
		
		case 61:
			return "PROPERTY_BUS_HIGH_APT_1";
		
		case 62:
			return "PROPERTY_BUS_HIGH_APT_2";
		
		case 63:
			return "PROPERTY_BUS_HIGH_APT_3";
		
		case 64:
			return "PROPERTY_BUS_HIGH_APT_4";
		
		case 65:
			return "PROPERTY_BUS_HIGH_APT_5";
		
		case 66:
			return "PROPERTY_IND_DAY_MEDIUM_1";
		
		case 67:
			return "PROPERTY_IND_DAY_MEDIUM_2";
		
		case 68:
			return "PROPERTY_IND_DAY_MEDIUM_3";
		
		case 69:
			return "PROPERTY_IND_DAY_MEDIUM_4";
		
		case 70:
			return "PROPERTY_IND_DAY_LOW_1";
		
		case 71:
			return "PROPERTY_IND_DAY_LOW_2";
		
		case 72:
			return "PROPERTY_IND_DAY_LOW_3";
		
		case 73:
			return "PROPERTY_STILT_APT_1_BASE_B";
		
		case 74:
			return "PROPERTY_STILT_APT_2_B";
		
		case 75:
			return "PROPERTY_STILT_APT_3_B";
		
		case 76:
			return "PROPERTY_STILT_APT_4_B";
		
		case 77:
			return "PROPERTY_STILT_APT_5_BASE_A";
		
		case 78:
			return "PROPERTY_STILT_APT_7_A";
		
		case 79:
			return "PROPERTY_STILT_APT_8_A";
		
		case 80:
			return "PROPERTY_STILT_APT_10_A";
		
		case 81:
			return "PROPERTY_STILT_APT_12_A";
		
		case 82:
			return "PROPERTY_STILT_APT_13_A";
		
		case 83:
			return "PROPERTY_CUSTOM_APT_1_BASE";
		
		case 84:
			return "PROPERTY_CUSTOM_APT_2";
		
		case 85:
			return "PROPERTY_CUSTOM_APT_3";
		
		case 86:
			return "PROPERTY_YACHT_APT_1_BASE";
		
		case 87:
			return "PROPERTY_OFFICE_1";
		
		case 88:
			return "PROPERTY_OFFICE_2_BASE";
		
		case 89:
			return "PROPERTY_OFFICE_3";
		
		case 90:
			return "PROPERTY_OFFICE_4";
		
		case 91:
			return "PROPERTY_CLUBHOUSE_1_BASE_A";
		
		case 92:
			return "PROPERTY_CLUBHOUSE_2_BASE_A";
		
		case 93:
			return "PROPERTY_CLUBHOUSE_3_BASE_A";
		
		case 94:
			return "PROPERTY_CLUBHOUSE_4_BASE_A";
		
		case 95:
			return "PROPERTY_CLUBHOUSE_5_BASE_A";
		
		case 96:
			return "PROPERTY_CLUBHOUSE_6_BASE_A";
		
		case 97:
			return "PROPERTY_CLUBHOUSE_7_BASE_B";
		
		case 98:
			return "PROPERTY_CLUBHOUSE_8_BASE_B";
		
		case 99:
			return "PROPERTY_CLUBHOUSE_9_BASE_B";
		
		case 100:
			return "PROPERTY_CLUBHOUSE_10_BASE_B";
		
		case 101:
			return "PROPERTY_CLUBHOUSE_11_BASE_B";
		
		case 102:
			return "PROPERTY_CLUBHOUSE_12_BASE_B";
		
		case 103:
			return "PROPERTY_OFFICE_1_GARAGE_LVL1";
		
		case 104:
			return "PROPERTY_OFFICE_1_GARAGE_LVL2";
		
		case 105:
			return "PROPERTY_OFFICE_1_GARAGE_LVL3";
		
		case 106:
			return "PROPERTY_OFFICE_2_GARAGE_LVL1";
		
		case 107:
			return "PROPERTY_OFFICE_2_GARAGE_LVL2";
		
		case 108:
			return "PROPERTY_OFFICE_2_GARAGE_LVL3";
		
		case 109:
			return "PROPERTY_OFFICE_3_GARAGE_LVL1";
		
		case 110:
			return "PROPERTY_OFFICE_3_GARAGE_LVL2";
		
		case 111:
			return "PROPERTY_OFFICE_3_GARAGE_LVL3";
		
		case 112:
			return "PROPERTY_OFFICE_4_GARAGE_LVL1";
		
		case 113:
			return "PROPERTY_OFFICE_4_GARAGE_LVL2";
		
		case 114:
			return "PROPERTY_OFFICE_4_GARAGE_LVL3";
		
		case 115:
			return "PROPERTY_IMPEXP_VEH_WAREHOUSE";
		
		case 116:
			return "PROPERTY_HANGAR";
		
		case 117:
			return "PROPERTY_DEFUNC_BASE";
		
		case 118:
			return "PROPERTY_NIGHTCLUB";
		
		case 119:
			return "PROPERTY_MEGAWARE_GARAGE_LVL1";
		
		case 120:
			return "PROPERTY_MEGAWARE_GARAGE_LVL2";
		
		case 121:
			return "PROPERTY_MEGAWARE_GARAGE_LVL3";
		
		case 122:
			return "PROPERTY_ARENAWARS_GARAGE_LVL1";
		
		case 123:
			return "PROPERTY_ARENAWARS_GARAGE_LVL2";
		
		case 124:
			return "PROPERTY_ARENAWARS_GARAGE_LVL3";
		
		case 125:
			return "PROPERTY_CASINO_GARAGE";
		
		case 126:
			return "PROPERTY_ARCADE_GARAGE";
		
		case 127:
			return "PROPERTY_AUTO_SHOP";
		
		case 128:
			return "PROPERTY_SECURITY_OFFICE_GARAGE";
		
		default:
	}
	return "PROPERTY_INVALID";
}

char* func_299(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SIMPLE_INTERIOR_WAREHOUSE_1";
		
		case 1:
			return "SIMPLE_INTERIOR_WAREHOUSE_2";
		
		case 2:
			return "SIMPLE_INTERIOR_WAREHOUSE_3";
		
		case 3:
			return "SIMPLE_INTERIOR_WAREHOUSE_4";
		
		case 4:
			return "SIMPLE_INTERIOR_WAREHOUSE_5";
		
		case 5:
			return "SIMPLE_INTERIOR_WAREHOUSE_6";
		
		case 6:
			return "SIMPLE_INTERIOR_WAREHOUSE_7";
		
		case 7:
			return "SIMPLE_INTERIOR_WAREHOUSE_8";
		
		case 8:
			return "SIMPLE_INTERIOR_WAREHOUSE_9";
		
		case 9:
			return "SIMPLE_INTERIOR_WAREHOUSE_10";
		
		case 10:
			return "SIMPLE_INTERIOR_WAREHOUSE_11";
		
		case 11:
			return "SIMPLE_INTERIOR_WAREHOUSE_12";
		
		case 12:
			return "SIMPLE_INTERIOR_WAREHOUSE_13";
		
		case 13:
			return "SIMPLE_INTERIOR_WAREHOUSE_14";
		
		case 14:
			return "SIMPLE_INTERIOR_WAREHOUSE_15";
		
		case 15:
			return "SIMPLE_INTERIOR_WAREHOUSE_16";
		
		case 16:
			return "SIMPLE_INTERIOR_WAREHOUSE_17";
		
		case 17:
			return "SIMPLE_INTERIOR_WAREHOUSE_18";
		
		case 18:
			return "SIMPLE_INTERIOR_WAREHOUSE_19";
		
		case 19:
			return "SIMPLE_INTERIOR_WAREHOUSE_20";
		
		case 20:
			return "SIMPLE_INTERIOR_WAREHOUSE_21";
		
		case 21:
			return "SIMPLE_INTERIOR_WAREHOUSE_22";
		
		case 22:
			return "SIMPLE_INTERIOR_FACTORY_METH_1";
		
		case 23:
			return "SIMPLE_INTERIOR_FACTORY_WEED_1";
		
		case 24:
			return "SIMPLE_INTERIOR_FACTORY_CRACK_1";
		
		case 25:
			return "SIMPLE_INTERIOR_FACTORY_MONEY_1";
		
		case 26:
			return "SIMPLE_INTERIOR_FACTORY_DOCUMENTS_1";
		
		case 27:
			return "SIMPLE_INTERIOR_FACTORY_METH_2";
		
		case 28:
			return "SIMPLE_INTERIOR_FACTORY_WEED_2";
		
		case 29:
			return "SIMPLE_INTERIOR_FACTORY_CRACK_2";
		
		case 30:
			return "SIMPLE_INTERIOR_FACTORY_MONEY_2";
		
		case 31:
			return "SIMPLE_INTERIOR_FACTORY_DOCUMENTS_2";
		
		case 32:
			return "SIMPLE_INTERIOR_FACTORY_METH_3";
		
		case 33:
			return "SIMPLE_INTERIOR_FACTORY_WEED_3";
		
		case 34:
			return "SIMPLE_INTERIOR_FACTORY_CRACK_3";
		
		case 35:
			return "SIMPLE_INTERIOR_FACTORY_MONEY_3";
		
		case 36:
			return "SIMPLE_INTERIOR_FACTORY_DOCUMENTS_3";
		
		case 37:
			return "SIMPLE_INTERIOR_FACTORY_METH_4";
		
		case 38:
			return "SIMPLE_INTERIOR_FACTORY_WEED_4";
		
		case 39:
			return "SIMPLE_INTERIOR_FACTORY_CRACK_4";
		
		case 40:
			return "SIMPLE_INTERIOR_FACTORY_MONEY_4";
		
		case 41:
			return "SIMPLE_INTERIOR_FACTORY_DOCUMENTS_4";
		
		case 42:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_POLICE_STATION";
		
		case 43:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MC_CLUBHOUSE";
		
		case 44:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_ROCKFORD";
		
		case 45:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_PILLBOX";
		
		case 46:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_ALTA";
		
		case 47:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_BURTON";
		
		case 48:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_PALETO";
		
		case 49:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_GRAND_SENORA";
		
		case 50:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_CHUMASH";
		
		case 51:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_ROCKCLUB";
		
		case 52:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_CHICKEN_FACTORY";
		
		case 53:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_CHICKEN_FACTORY_PART_2";
		
		case 54:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_CHICKEN_FACTORY_PART_3";
		
		case 55:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_CHICKEN_FACTORY_PART_4";
		
		case 56:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_FARMHOUSE";
		
		case 57:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_HEIST_YACHT";
		
		case 58:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_RECYCLING_PLANT";
		
		case 59:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BIOLAB";
		
		case 60:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_1";
		
		case 61:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_2";
		
		case 62:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_3";
		
		case 63:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_4";
		
		case 64:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_5";
		
		case 65:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_6";
		
		case 66:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_7";
		
		case 67:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_8";
		
		case 68:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_9";
		
		case 69:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_10";
		
		case 70:
			return "SIMPLE_INTERIOR_BUNKER_1";
		
		case 71:
			return "SIMPLE_INTERIOR_BUNKER_2";
		
		case 72:
			return "SIMPLE_INTERIOR_BUNKER_3";
		
		case 73:
			return "SIMPLE_INTERIOR_BUNKER_4";
		
		case 74:
			return "SIMPLE_INTERIOR_BUNKER_5";
		
		case 75:
			return "SIMPLE_INTERIOR_BUNKER_6";
		
		case 76:
			return "SIMPLE_INTERIOR_BUNKER_7";
		
		case 77:
			return "SIMPLE_INTERIOR_BUNKER_9";
		
		case 78:
			return "SIMPLE_INTERIOR_BUNKER_10";
		
		case 79:
			return "SIMPLE_INTERIOR_BUNKER_11";
		
		case 80:
			return "SIMPLE_INTERIOR_BUNKER_12";
		
		case 81:
			return "SIMPLE_INTERIOR_ARMORY_TRUCK_1";
		
		case 82:
			return "SIMPLE_INTERIOR_CREATOR_TRAILER_1";
		
		case 83:
			return "SIMPLE_INTERIOR_HANGAR_1";
		
		case 84:
			return "SIMPLE_INTERIOR_HANGAR_2";
		
		case 85:
			return "SIMPLE_INTERIOR_HANGAR_3";
		
		case 86:
			return "SIMPLE_INTERIOR_HANGAR_4";
		
		case 87:
			return "SIMPLE_INTERIOR_HANGAR_5";
		
		case 88:
			return "SIMPLE_INTERIOR_ARMORY_AIRCRAFT_1";
		
		case 89:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_1";
		
		case 90:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_2";
		
		case 91:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_3";
		
		case 92:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_4";
		
		case 93:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_6";
		
		case 94:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_7";
		
		case 95:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_8";
		
		case 96:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_9";
		
		case 97:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_10";
		
		case 98:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MEDIUM_GARAGE";
		
		case 99:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_LOWEND_STUDIO";
		
		case 100:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MIDEND_APARTMENT";
		
		case 101:
			return "SIMPLE_INTERIOR_CREATOR_AIRCRAFT_1";
		
		case 102:
			return "SIMPLE_INTERIOR_HUB_LA_MESA";
		
		case 103:
			return "SIMPLE_INTERIOR_HUB_MISSION_ROW";
		
		case 104:
			return "SIMPLE_INTERIOR_HUB_STRAWBERRY_WAREHOUSE";
		
		case 105:
			return "SIMPLE_INTERIOR_HUB_WEST_VINEWOOD";
		
		case 106:
			return "SIMPLE_INTERIOR_HUB_CYPRESS_FLATS";
		
		case 107:
			return "SIMPLE_INTERIOR_HUB_LSIA_WAREHOUSE";
		
		case 108:
			return "SIMPLE_INTERIOR_HUB_ELYSIAN_ISLAND";
		
		case 109:
			return "SIMPLE_INTERIOR_HUB_DOWNTOWN_VINEWOOD";
		
		case 110:
			return "SIMPLE_INTERIOR_HUB_DEL_PERRO_BUILDING";
		
		case 111:
			return "SIMPLE_INTERIOR_HUB_VESPUCCI_CANALS";
		
		case 112:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_SHERIFF";
		
		case 113:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_SHERIFF2";
		
		case 114:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_UNION_DEPOSITORY_CARPARK";
		
		case 115:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_SIMEON_SHOWROOM";
		
		case 116:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_ABATTOIR";
		
		case 117:
			return "SIMPLE_INTERIOR_HACKER_TRUCK";
		
		case 118:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_JEWEL_STORE";
		
		case 119:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_LIFE_INVADER";
		
		case 120:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_DJ_YACHT";
		
		case 121:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MELANOMA_GARAGE";
		
		case 122:
			return "SIMPLE_INTERIOR_ARENA_GARAGE_1";
		
		case 123:
			return "SIMPLE_INTERIOR_CASINO";
		
		case 124:
			return "SIMPLE_INTERIOR_CASINO_APT";
		
		case 125:
			return "SIMPLE_INTERIOR_CASINO_VAL_GARAGE";
		
		case 126:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_HAYES_AUTOS";
		
		case 127:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_METH_LAB";
		
		case 128:
			return "SIMPLE_INTERIOR_ARCADE_PALETO_BAY";
		
		case 129:
			return "SIMPLE_INTERIOR_ARCADE_GRAPESEED";
		
		case 130:
			return "SIMPLE_INTERIOR_ARCADE_DAVIS";
		
		case 131:
			return "SIMPLE_INTERIOR_ARCADE_WEST_VINEWOOD";
		
		case 132:
			return "SIMPLE_INTERIOR_ARCADE_ROCKFORD_HILLS";
		
		case 133:
			return "SIMPLE_INTERIOR_ARCADE_LA_MESA";
		
		case 134:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_FIB_BUILDING";
		
		case 135:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BIOLAB_AND_TUNNEL";
		
		case 136:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_FOUNDRY";
		
		case 137:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MAX_RENDA";
		
		case 138:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER";
		
		case 139:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_2";
		
		case 140:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_3";
		
		case 141:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_4";
		
		case 142:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_5";
		
		case 143:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_6";
		
		case 144:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_OMEGA";
		
		case 145:
			return "SIMPLE_INTERIOR_SOLOMONS_OFFICE";
		
		case 146:
			return "SIMPLE_INTERIOR_CASINO_NIGHTCLUB";
		
		case 147:
			return "SIMPLE_INTERIOR_SUBMARINE";
		
		case 148:
			return "SIMPLE_INTERIOR_MUSIC_STUDIO";
		
		case 149:
			return "SIMPLE_INTERIOR_AUTO_SHOP_LA_MESA";
		
		case 150:
			return "SIMPLE_INTERIOR_AUTO_SHOP_STRAWBERRY";
		
		case 151:
			return "SIMPLE_INTERIOR_AUTO_SHOP_BURTON";
		
		case 152:
			return "SIMPLE_INTERIOR_AUTO_SHOP_RANCHO";
		
		case 153:
			return "SIMPLE_INTERIOR_AUTO_SHOP_MISSION_ROW";
		
		case 154:
			return "SIMPLE_INTERIOR_CAR_MEET";
		
		case 155:
			return "SIMPLE_INTERIOR_FIXER_HQ_HAWICK";
		
		case 156:
			return "SIMPLE_INTERIOR_FIXER_HQ_ROCKFORD";
		
		case 157:
			return "SIMPLE_INTERIOR_FIXER_HQ_SEOUL";
		
		case 158:
			return "SIMPLE_INTERIOR_FIXER_HQ_VESPUCCI";
		
		case 159:
			return "SIMPLE_INTERIOR_ACID_LAB";
		
		case 160:
			return "SIMPLE_INTERIOR_JUGGALO_HIDEOUT";
		
		case 161:
			return "SIMPLE_INTERIOR_MULTISTOREY_GARAGE";
		
		default:
	}
	return "SIMPLE_INTERIOR_INVALID";
}

int func_300(int iParam0)
{
	if (iParam0 != func_185())
	{
		if (func_46(iParam0, 1, 1))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7;
		}
		else if (((Global_1575060 || Global_2635559.f_2680) && iParam0 == unk_0x93E99A2DBCBA9CFA()) && func_46(iParam0, 1, 0))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7;
		}
	}
	return -1;
}

bool func_301()
{
	return Global_1950108.f_513 != -1;
}

int func_302(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_303()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_302(iVar0) != 2147483647)
		{
			if (func_214(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_304()
{
	Global_2683862.f_785.f_32 = 1;
}

void func_305()
{
	Global_2683862.f_785.f_28 = 1;
	Global_2683862.f_785.f_32 = 0;
	Global_2683862.f_785.f_31 = unk_0x14580F20CBCE4FA9(unk_0x688846D56810779A());
	func_14(&(Global_2683862.f_785.f_29));
}

char* func_306()
{
	if (func_13())
	{
		return "Shoplift_Mid";
	}
	return "Shoplift_Low";
}

void func_307(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x913F68714030C692())
	{
		return;
	}
	if (unk_0xA26A9A07F761D8F8() && func_311(unk_0x93E99A2DBCBA9CFA(), 1, 0))
	{
		return;
	}
	if (unk_0x51EB177CA0562B62(2, 199) || unk_0x992AACDC3C066F55(2, 199))
	{
		return;
	}
	if (unk_0xD7863C03D2155822() != 0)
	{
		return;
	}
	if (unk_0xFEE065E56A9BEF3F())
	{
		return;
	}
	if (unk_0xB0C54EB77AA16156())
	{
		return;
	}
	if (unk_0x47F8B78DC1737D5C())
	{
		return;
	}
	if (func_310())
	{
		return;
	}
	if (!func_308())
	{
		return;
	}
	if (unk_0xA26A9A07F761D8F8() || iParam0)
	{
		if (!Global_100733.f_1474 && !unk_0x4136116828BCAAB6())
		{
			iVar0 = 18;
			unk_0xDC38CC1E35B6A5D7("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", false, -1, 0, 0, true, 0);
			Global_2695712 = iParam1;
			Global_100733.f_1474 = 1;
			Global_100733.f_1475 = iParam2;
		}
	}
}

int func_308()
{
	if (func_309())
	{
		return 0;
	}
	if (unk_0x3FFDF8D1413D95DE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_309()
{
	return Global_2695031;
}

bool func_310()
{
	return Global_2695819;
}

int func_311(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_312(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853910[iParam0 /*862*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_312(int iParam0)
{
	return func_313(iParam0);
}

var func_313(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

void func_314(int iParam0, int iParam1, int iParam2)
{
	Global_100733.f_1476 = iParam0;
	Global_100733.f_1477 = iParam1;
	Global_100733.f_1478 = iParam2;
}

int func_315(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	char* sVar4;
	
	if (uParam0->f_47)
	{
		switch (uParam0->f_48)
		{
			case 0:
				iVar0 = 0;
				iVar1 = 0;
				iVar2 = iParam3;
				if (unk_0xBDB6D1CAC10232B4() > 0)
				{
					if (unk_0xBDB6D1CAC10232B4() >= iVar2)
					{
						iVar1 = iVar2;
					}
					else
					{
						iVar1 = (iVar2 - (iVar2 - unk_0xBDB6D1CAC10232B4()));
					}
					iVar2 = (iVar2 - iVar1);
				}
				if (iVar2 > 0)
				{
					if (unk_0x6CD066255FC6B2AA(-1) > 0)
					{
						if (unk_0x6CD066255FC6B2AA(-1) >= iVar2)
						{
							iVar0 = iVar2;
						}
						else
						{
							iVar0 = (iVar2 - (iVar2 - unk_0x6CD066255FC6B2AA(-1)));
						}
						iVar2 = (iVar2 - iVar0);
					}
				}
				cVar3 = func_395(uParam0->f_12);
				func_323(&sVar4, cVar3, func_324(uParam0));
				if (func_320(78225582, iParam1, unk_0x14580F20CBCE4FA9(&sVar4), iParam2, 1, iParam3, 1, 8, 0, 3))
				{
					if (func_318())
					{
						unk_0x210324101D2B6F4E(1);
						unk_0xE5764FBCB7AE6D25(-iVar0, -iVar1);
						uParam0->f_48 = 1;
					}
					else
					{
						uParam0->f_48 = 3;
					}
				}
				else
				{
					uParam0->f_48 = 3;
				}
				break;
			
			case 1:
				if (func_317(func_303()))
				{
					if (func_316(func_303()) == 2)
					{
						uParam0->f_48 = 2;
					}
					else
					{
						uParam0->f_48 = 3;
					}
				}
				break;
			
			case 2:
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
				unk_0x210324101D2B6F4E(0);
				unk_0xEDECDDE17C1E41F5(13);
				uParam0->f_49 = 2;
				return 0;
				break;
			
			case 3:
				func_211(func_303());
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
				unk_0x210324101D2B6F4E(0);
				unk_0xEDECDDE17C1E41F5(13);
				uParam0->f_49 = 0;
				return 0;
				break;
		}
		return 1;
	}
	uParam0->f_48 = 0;
	uParam0->f_49 = -1;
	return 0;
}

int func_316(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_317(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_318()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_219())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_303();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x366262A55539062C(func_79()) || unk_0xF0773A1CAE4717D9())
		{
			if (func_319(Global_4535172[iVar2 /*85*/].f_66.f_6, Global_4535172[iVar2 /*85*/].f_66.f_4, Global_4535172[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4536674 = 1;
			}
			return 0;
		}
		if (Global_2695819)
		{
			if (Global_4535172[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4535172[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4536675 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_302(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0xE0AAA58EEB49D003(iVar3))
		{
			Global_4535172[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4535172[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4535172[iVar2 /*85*/].f_66.f_14 = unk_0xE16824A2A0B2A6D8();
			if (bVar0)
			{
				Global_4535172[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4535172[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4535172[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_217(Global_4535172[iVar2 /*85*/], iVar2);
			}
			Global_4536659 = 1;
			return 1;
		}
	}
	return 0;
}

int func_319(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
			case 14658715:
			case -604793592:
			case -823426392:
			case -1401862980:
			case -173354274:
			case 409533976:
			case -1472522337:
			case 542574408:
			case -1261799063:
			case 784631574:
			case -2027479156:
			case -837690641:
			case -1029672338:
			case -1503749970:
			case -1843409092:
			case 1669058563:
			case 2102747615:
			case 2030771998:
			case 1708747007:
			case 645293860:
			case -818859193:
			case 300796227:
			case -1999832346:
			case 1058055395:
			case -321151125:
			case 2078731875:
			case 1280785534:
			case -1878824774:
			case 247992227:
			case -229237358:
			case -1123183389:
			case 1814197076:
			case 713955548:
			case -2026544524:
			case -719580138:
			case -163417439:
			case -550417574:
			case 208223429:
			case -1433071892:
			case 761999406:
			case -1101941763:
			case 1748245957:
			case 1036772696:
			case -1384648535:
			case -800037808:
			case -695852120:
			case 77355315:
			case 2097889166:
			case 1707592130:
			case 1628412596:
			case 883337077:
			case -1274418755:
			case -1853979468:
			case -239888995:
			case 1163066566:
			case -955087020:
			case 1874391251:
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_320(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_219())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x366262A55539062C(func_79()) || unk_0xF0773A1CAE4717D9())
		{
			Global_4536674 = 1;
			return 0;
		}
		if (Global_2695819)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4536675 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_303();
	if (iVar1 == -1)
	{
		if (!func_322(&iVar1, iParam0, iParam1, uParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_321(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		Global_4535172[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4535172[iVar1 /*85*/].f_66.f_15 = Var2.f_0;
		Global_4535172[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || unk_0x9ABB470319EAF6B6(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_321(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_322(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_219())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x366262A55539062C(func_79()) || unk_0xF0773A1CAE4717D9())
		{
			Global_4536674 = 1;
			return 0;
		}
		if (Global_2695819)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4536675 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4535172[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4535172[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0x630310C0D75EA8A1())
		{
			unk_0xD327B45EF800DBCD();
		}
	}
	if (bVar0 || unk_0xF765C469CA181FB1(&iVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_216(iVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

void func_323(char* sParam0, char* sParam1, int iParam2)
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

int func_324(var uParam0)
{
	if (func_277(unk_0x93E99A2DBCBA9CFA(), 1, 0) || func_325(unk_0x93E99A2DBCBA9CFA()))
	{
		return 3;
	}
	else if (uParam0->f_50 >= 10 && uParam0->f_50 <= 14)
	{
		return 0;
	}
	else if (uParam0->f_50 >= 15 && uParam0->f_50 <= 19)
	{
		return 1;
	}
	else
	{
		return 2;
	}
	return -1;
}

int func_325(int iParam0)
{
	if (iParam0 != func_185())
	{
		if (func_46(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_326(Global_2657589[iParam0 /*466*/].f_321.f_7) == 9;
			}
		}
	}
	return 0;
}

int func_326(int iParam0)
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

void func_327(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!func_396(uParam0->f_12))
	{
		iVar1 = (func_331(uParam0->f_12) - func_131(func_330(uParam0->f_12), -1, 0));
		func_278(1, func_329(uParam0->f_12), 1359863693, iVar1, func_285(), -1317518156, 1, func_328(bParam1, joaat("pa"), 1037810546));
		func_128(func_330(uParam0->f_12), func_331(uParam0->f_12), -1, 1, 0);
		bVar0 = true;
	}
	if (bVar0)
	{
		unk_0x2AF653A620D7D7B4(0, unk_0x14580F20CBCE4FA9(func_395(uParam0->f_12)), 12, 1, 0, 0, 0, 0, 0, 1);
	}
	if (!bVar0)
	{
		unk_0x531D638530A8DB97(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
	}
	else
	{
		unk_0x531D638530A8DB97(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
	}
}

int func_328(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_329(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return -251807494;
		
		case 1:
			return 1199442189;
		
		case 2:
			return 1486811039;
		
		case 4:
			return -181862273;
		
		case 0:
			return -39155154;
		
		case 5:
			return -1600998734;
		
		case 6:
			return 495696637;
		
		default:
	}
	return 0;
}

int func_330(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 1276;
		
		case 1:
			return 1277;
		
		case 2:
			return 1278;
		
		case 4:
			return 1098;
		
		case 0:
			return 62;
		
		case 5:
			return 63;
		
		case 6:
			return 10404;
		
		default:
	}
	return 14192;
}

int func_331(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 30;
		
		case 1:
			return 15;
		
		case 2:
			return 5;
		
		case 4:
			return 20;
		
		case 0:
			return 10;
		
		case 5:
			return 10;
		
		case 6:
			return 10;
		
		default:
	}
	return 0;
}

void func_332(var uParam0, var uParam1, bool bParam2)
{
	char* sVar0;
	
	if (!uParam0->f_29)
	{
	}
	if (func_341(uParam0))
	{
		uParam0->f_27 = 0;
		func_340(&(uParam0->f_44));
		uParam0->f_12 = (uParam0->f_12 - 1);
		if (uParam0->f_12 < 0)
		{
			uParam0->f_12 = (uParam0->f_13 - 1);
		}
		unk_0x531D638530A8DB97(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_384(uParam0->f_12, 1, 1);
		sVar0 = func_382(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (unk_0x42FA33BDEDF21186(sVar0))
		{
			func_383(sVar0, 0, 0);
		}
	}
	if (func_337(uParam0))
	{
		uParam0->f_27 = 0;
		func_340(&(uParam0->f_44));
		uParam0->f_12++;
		if (uParam0->f_12 > (uParam0->f_13 - 1))
		{
			uParam0->f_12 = 0;
		}
		unk_0x531D638530A8DB97(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_384(uParam0->f_12, 1, 1);
		sVar0 = func_382(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (unk_0x42FA33BDEDF21186(sVar0))
		{
			func_383(sVar0, 0, 0);
		}
	}
	if (!uParam0->f_29)
	{
		if (unk_0x879E9B10E2161FC6(func_389(uParam0, uParam0->f_12), 0, 1, 0, -1, 0))
		{
			uParam0->f_28 = 1;
		}
		else
		{
			uParam0->f_28 = 0;
			uParam0->f_36 = 1;
		}
		uParam0->f_29 = 1;
	}
	if (!uParam0->f_30)
	{
		uParam0->f_31 = 1;
		if (uParam0->f_12 == 3)
		{
			uParam0->f_31 = func_131(1276, -1, 0) < 30;
		}
		else if (uParam0->f_12 == 1)
		{
			uParam0->f_31 = func_131(1277, -1, 0) < 15;
		}
		else if (uParam0->f_12 == 2)
		{
			uParam0->f_31 = func_131(1278, -1, 0) < 5;
		}
		else if (uParam0->f_12 == 4)
		{
			uParam0->f_31 = func_131(1098, -1, 0) < 20;
		}
		else if (uParam0->f_12 == 0)
		{
			uParam0->f_31 = func_131(62, -1, 0) < 10;
		}
		else if (uParam0->f_12 == 5)
		{
			uParam0->f_31 = func_131(63, -1, 0) < 10;
		}
		else if (uParam0->f_12 == 6)
		{
			if (Global_262145.f_120)
			{
				uParam0->f_31 = func_131(10404, -1, 0) < 10;
			}
			else
			{
				uParam0->f_31 = 0;
			}
		}
		uParam0->f_30 = 1;
	}
	if (!uParam0->f_32)
	{
		if ((*uParam1)[uParam0->f_12] < 10)
		{
			uParam0->f_33 = 1;
		}
		else
		{
			uParam0->f_33 = 0;
			func_383("SNK_SOUT", 0, 0);
		}
		uParam0->f_32 = 1;
	}
	if (uParam0->f_27)
	{
		if (func_333(&(uParam0->f_44)) < 3f)
		{
			if (uParam0->f_35)
			{
				if (!bParam2)
				{
					func_383("SNK_BOUGHT", 0, 0);
				}
				else
				{
					func_383("SNK_STORED", 0, 0);
				}
			}
			else if (!uParam0->f_28)
			{
				func_383("SNK_AFFORD", 0, 0);
			}
			else if (!uParam0->f_33)
			{
				func_383("SNK_SOUT", 0, 0);
			}
			else if (!uParam0->f_31)
			{
				if (uParam0->f_12 == 3)
				{
					func_383("SNK_SNK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 1)
				{
					func_383("SNK_SNK2FU", 0, 0);
				}
				else if (uParam0->f_12 == 2)
				{
					func_383("SNK_SNK3FU", 0, 0);
				}
				else if (uParam0->f_12 == 4)
				{
					func_383("SNK_SMOKFU", 0, 0);
				}
				else if (uParam0->f_12 == 0)
				{
					func_383("SNK_DRK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 5)
				{
					func_383("SNK_DRK2FU", 0, 0);
				}
				else if (uParam0->f_12 == 6)
				{
					func_383("SNK_DRK7FU", 0, 0);
				}
				else
				{
					func_383("SNK_NEEDED", 0, 0);
				}
				unk_0xECDAB41968FF21A8(&(uParam0->f_53), 26);
			}
		}
		else
		{
			uParam0->f_27 = 0;
			uParam0->f_35 = 0;
			func_340(&(uParam0->f_44));
			sVar0 = func_382(uParam0->f_12);
			if (unk_0x42FA33BDEDF21186(sVar0))
			{
				func_383(sVar0, 0, 0);
			}
		}
	}
}

float func_333(var uParam0)
{
	if (func_336(uParam0))
	{
		if (func_335(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_334(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_334(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0xA5E11AF0A2B928C1());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		iVar2 = unk_0x0DB7F8294D73598B();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0xA5E11AF0A2B928C1()) / 1000f);
}

bool func_335(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_336(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_337(var uParam0)
{
	float fVar0;
	
	fVar0 = unk_0x081A0AFF82F20357(2, 219);
	if ((fVar0 > 0.8f || unk_0x51EB177CA0562B62(2, 187)) || unk_0x87644B1F984197FE(2, 242))
	{
		if (!func_336(&(uParam0->f_41)))
		{
			func_339(&(uParam0->f_41));
			return 1;
		}
		else if (func_338(&(uParam0->f_41)) > 0.25f)
		{
			func_412(&(uParam0->f_41));
			return 1;
		}
	}
	else if (func_336(&(uParam0->f_41)))
	{
		func_340(&(uParam0->f_41));
	}
	return 0;
}

float func_338(var uParam0)
{
	if (func_336(uParam0))
	{
		if (func_335(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_334(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_339(var uParam0)
{
	if (!func_336(uParam0))
	{
		func_412(uParam0);
	}
}

void func_340(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_341(var uParam0)
{
	float fVar0;
	
	fVar0 = unk_0x081A0AFF82F20357(2, 219);
	if ((fVar0 < -0.8f || unk_0x51EB177CA0562B62(2, 188)) || unk_0x87644B1F984197FE(2, 241))
	{
		if (!func_336(&(uParam0->f_38)))
		{
			func_339(&(uParam0->f_38));
			return 1;
		}
		else if (func_338(&(uParam0->f_38)) > 0.25f)
		{
			func_412(&(uParam0->f_38));
			return 1;
		}
	}
	else if (func_336(&(uParam0->f_38)))
	{
		func_340(&(uParam0->f_38));
	}
	return 0;
}

int func_342()
{
	if (unk_0x42AAFCB5B7854AA9(2))
	{
		if (Global_4541029 > -1)
		{
			if (unk_0x87644B1F984197FE(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_343(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x42AAFCB5B7854AA9(2))
	{
		return 0;
	}
	if (unk_0xFEE065E56A9BEF3F() || unk_0x47F8B78DC1737D5C())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x90B3C4F0C0772F5A();
	}
	if (Global_4541029 == -6)
	{
		unk_0x497006BE45C6EFA5(4);
		if (iParam0 && unk_0x51EB177CA0562B62(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4541029 = -1;
			return 0;
		}
	}
	if (((Global_4541029 > -1 || Global_4541029 == -3) || Global_4541029 == -2) || unk_0x18226C2FEDF3E3A5())
	{
		unk_0x497006BE45C6EFA5(1);
		return 0;
	}
	if (Global_4541029 == -1 && iParam0)
	{
		if (unk_0x51EB177CA0562B62(2, 237))
		{
			unk_0x497006BE45C6EFA5(4);
			Global_4541029 = -6;
			return 1;
		}
		else
		{
			unk_0x497006BE45C6EFA5(3);
			return 0;
		}
	}
	unk_0x497006BE45C6EFA5(1);
	return 0;
}

void func_344(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0x42AAFCB5B7854AA9(2))
	{
		Global_4541029 = -1;
		return;
	}
	unk_0x43C58E3DBF30505A(1);
	fVar0 = Global_23267;
	fVar2 = (fVar0 + Global_23269);
	fVar3 = Global_23270.f_6173;
	fVar1 = (Global_23270.f_6173 - (IntToFloat(Global_23270.f_6175) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_23270.f_6175 < 1)
	{
		fVar1 = (Global_23270.f_6173 - 0.034722f);
	}
	unk_0x8241C4807850E84A(76, 84);
	unk_0x345E4FB614ACF508(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x052C2DE4A27A4869(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x052C2DE4A27A4869(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x4B358573708E8571();
	func_347();
	if (Global_4541029 == -6)
	{
		return;
	}
	Global_4541029 = -1;
	fVar7 = Global_4541023;
	fVar8 = Global_4541024;
	if (Global_23270.f_6176 > Global_23270.f_6175)
	{
		if (((Global_4541023 >= fVar0 && Global_4541023 <= fVar2) && Global_4541024 >= fVar3) && Global_4541024 < (fVar3 + fVar6))
		{
			Global_4541029 = -2;
			if (bParam3)
			{
				func_346(0);
			}
			return;
		}
		if (((Global_4541023 >= fVar0 && Global_4541023 <= fVar2) && Global_4541024 >= (fVar3 + fVar6)) && Global_4541024 < (fVar3 + 0.034722f))
		{
			Global_4541029 = -3;
			if (bParam3)
			{
				func_346(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_23270.f_6176 == -1)
		{
			Global_4541029 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_23270.f_6175);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x8241C4807850E84A(76, 84);
				unk_0x345E4FB614ACF508(-0.05f, -0.05f, 0f, 0f);
				func_345(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_23269, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x4B358573708E8571();
			}
		}
		Global_4541029 = Global_23270.f_8513[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4541029 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4541029 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4541029 = -4;
		return;
	}
	Global_4541029 = -1;
}

void func_345(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xD88E9AF5626B0121((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_346(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_23267;
	fVar1 = Global_23270.f_6173;
	unk_0x8241C4807850E84A(76, 84);
	unk_0x345E4FB614ACF508(-0.05f, -0.05f, 0f, 0f);
	if (Global_4541029 == -2)
	{
		func_345(fVar0, fVar1, Global_23269, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4541029 == -3)
	{
		func_345(fVar0, (fVar1 + fVar2), Global_23269, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x4B358573708E8571();
}

void func_347()
{
	Global_4541025 = Global_4541023;
	Global_4541026 = Global_4541024;
	Global_4541023 = unk_0xA436D585B7588C3A(2, 239);
	Global_4541024 = unk_0xA436D585B7588C3A(2, 240);
	Global_4541027 = (Global_4541023 - Global_4541025);
	Global_4541028 = (Global_4541024 - Global_4541026);
}

void func_348(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	var uVar60;
	var uVar61;
	float fVar62;
	char cVar63[64];
	char cVar79[64];
	float fVar95;
	int iVar96;
	float fVar97;
	float fVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	char cVar105[16];
	float fVar109;
	float fVar110;
	float fVar111;
	float fVar112;
	float fVar113;
	
	if (!func_169(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_379(0, bParam6))
	{
		return;
	}
	unk_0x8241C4807850E84A(76, 84);
	unk_0x345E4FB614ACF508(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	if (Global_23270)
	{
		if (func_377(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = (fVar37 / fVar36);
		}
		else
		{
			Global_23270 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23269;
	}
	fVar57 = (fParam5 * fVar58);
	if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_1)) == unk_0x14580F20CBCE4FA9("HIDE"))
	{
		fVar59 = Global_23268;
	}
	else
	{
		fVar59 = (((Global_23268 + fVar57) + 0.034722f) + 0f);
	}
	fVar62 = 1f;
	func_375(bParam7, &uVar60, &uVar61, &fVar62);
	if (bParam3)
	{
		if (Global_23270.f_5661 <= 1)
		{
			func_391(Global_23270.f_5661 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_23270.f_6457 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23270.f_6171)
		{
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_1)) == unk_0x14580F20CBCE4FA9("HIDE"))
			{
				fVar51 = Global_23268;
			}
			else
			{
				if (Global_23270)
				{
					StringCopy(&cVar63, func_374(29), 64);
					StringCopy(&cVar79, func_372(29, 1), 64);
					if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_7488[29 /*16*/])) == joaat("crew_logo"))
					{
						func_345(Global_23267, Global_23268, fParam5, fVar57, 0, 0, 0, 255);
						unk_0xB978B5D428DA5DE9(&cVar63, &cVar79, (Global_23267 + (fParam5 * 0.5f)), (Global_23268 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, 0, 0);
					}
					else
					{
						unk_0xB978B5D428DA5DE9(&cVar63, &cVar79, (Global_23267 + (fParam5 * 0.5f)), (Global_23268 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, 0, 0);
					}
				}
				if (Global_23270.f_8862)
				{
					iVar1 = Global_23270.f_8858;
					iVar2 = Global_23270.f_8859;
					iVar3 = Global_23270.f_8860;
					iVar4 = Global_23270.f_8861;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_345(Global_23267, (Global_23268 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_23268 + fVar57) + 0.034722f) + 0f);
				if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_1)) != 0)
				{
					func_371();
					unk_0x1AFC19685A6AF4A9(&(Global_23270.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23270.f_74)
					{
						if (Global_23270.f_5[iVar14] == 2)
						{
							unk_0x64C50E40AA09A6B5(Global_23270.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23270.f_5[iVar14] == 3)
						{
							unk_0xC072D668E49D9A7A(Global_23270.f_14[iVar16], Global_23270.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23270.f_5[iVar14] == 1)
						{
							unk_0x48849374B34BB7B9(&(Global_23270.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23270.f_5[iVar14] == 8)
						{
							unk_0x48849374B34BB7B9(&(Global_23270.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23270.f_5[iVar14] == 5)
						{
							unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23270.f_5[iVar14] == 6)
						{
							unk_0x48849374B34BB7B9(&(Global_23270.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23270.f_5[iVar14] == 7)
						{
							unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23270.f_5[iVar14] == 9)
						{
							unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x8E03B3A2F624EF8B((Global_23267 + 0.00390625f), ((Global_23268 + fVar57) + 0.00416664f), 0);
				}
				if (Global_23270.f_6178)
				{
					func_371();
					func_369((((Global_23267 + fParam5) - 0.00390625f) - func_370("CM_ITEM_COUNT", Global_23270.f_6179, Global_23270.f_6180)), ((Global_23268 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_23270.f_6179, Global_23270.f_6180);
				}
				else if (Global_23270.f_6174 > Global_23270.f_5668)
				{
					if (Global_23270.f_6177 != 0)
					{
						func_371();
						func_369((((Global_23267 + fParam5) - 0.00390625f) - func_370("CM_ITEM_COUNT", Global_23270.f_6177, Global_23270.f_6176)), ((Global_23268 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_23270.f_6177, Global_23270.f_6176);
					}
				}
			}
			iVar6 = Global_23270.f_6181;
			iVar9 = 0;
			fVar95 = fVar51;
			if (Global_23270.f_8872)
			{
				iVar1 = Global_23270.f_8868;
				iVar2 = Global_23270.f_8869;
				iVar3 = Global_23270.f_8870;
				iVar4 = Global_23270.f_8871;
			}
			else
			{
				unk_0x2D32CB870722E022(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23270.f_5668 && iVar6 <= Global_23270.f_5661)
			{
				if (iVar6 >= 0)
				{
					if (Global_23270.f_5928[iVar6])
					{
						if (Global_23270.f_5799[iVar6] && iVar6 != Global_23270.f_6181)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_23270.f_6188[iVar6] != 0f)
						{
							fVar56 = Global_23270.f_6188[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0xB978B5D428DA5DE9("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar95 + ((fVar51 - fVar95) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar95), 0f, 255, 255, 255, 255, 0, 0);
			if (Global_23270.f_6174 > Global_23270.f_5668)
			{
				if (Global_23270.f_8877)
				{
					iVar1 = Global_23270.f_8873;
					iVar2 = Global_23270.f_8874;
					iVar3 = Global_23270.f_8875;
					iVar4 = Global_23270.f_8876;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_345(Global_23267, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0x2D09CBD1F5910DEC("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_23270.f_8890)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x2D32CB870722E022(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xB978B5D428DA5DE9("CommonMenu", "shop_arrows_upANDdown", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_5081)) != 0 && Global_23270.f_5163 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23267 + 0.0046875f);
				if (Global_23270.f_5165 != 0)
				{
					func_377(Global_23270.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23267 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_368(fVar42);
				unk_0x4DCD7891F910F5EC(&(Global_23270.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23270.f_5159)
				{
					if (Global_23270.f_5093[iVar14] == 2)
					{
						unk_0x64C50E40AA09A6B5(Global_23270.f_5098[iVar15]);
						iVar15++;
					}
					else if (Global_23270.f_5093[iVar14] == 3)
					{
						unk_0xC072D668E49D9A7A(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
						iVar16++;
					}
					else if (Global_23270.f_5093[iVar14] == 1)
					{
						unk_0x48849374B34BB7B9(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 5)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 6)
					{
						unk_0x48849374B34BB7B9(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 7)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 9)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xDFA8EC685FA880FE(fVar42, (fVar51 + 0.00277776f));
				unk_0x2D32CB870722E022(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_345(Global_23267, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23270.f_8882)
				{
					iVar1 = Global_23270.f_8878;
					iVar2 = Global_23270.f_8879;
					iVar3 = Global_23270.f_8880;
					iVar4 = Global_23270.f_8881;
				}
				else
				{
					unk_0x2D32CB870722E022(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xB978B5D428DA5DE9("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_368(fVar42);
				unk_0x1AFC19685A6AF4A9(&(Global_23270.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23270.f_5159)
				{
					if (Global_23270.f_5093[iVar14] == 2)
					{
						unk_0x64C50E40AA09A6B5(Global_23270.f_5098[iVar15]);
						iVar15++;
					}
					else if (Global_23270.f_5093[iVar14] == 3)
					{
						unk_0xC072D668E49D9A7A(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
						iVar16++;
					}
					else if (Global_23270.f_5093[iVar14] == 1)
					{
						unk_0x48849374B34BB7B9(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 5)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 6)
					{
						unk_0x48849374B34BB7B9(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 7)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 9)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 8)
					{
						unk_0x48849374B34BB7B9(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x8E03B3A2F624EF8B(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_23270.f_5165 != 0)
				{
					func_377(Global_23270.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
					func_367(Global_23270.f_5165, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0xB978B5D428DA5DE9(func_374(Global_23270.f_5165), func_372(Global_23270.f_5165, 1), ((Global_23267 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
				}
				fVar51 = (fVar51 + (((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (!unk_0x2AC37494BBF1DB16(&(Global_23270.f_5087)))
				{
					fVar51 = (fVar51 + (0.00138888f * 6f));
					func_368(fVar42);
					unk_0x4DCD7891F910F5EC(&(Global_23270.f_5087));
					iVar6 = unk_0xDFA8EC685FA880FE(fVar42, (fVar51 + 0.00277776f));
					unk_0x2D32CB870722E022(2, &iVar1, &iVar2, &iVar3, &iVar4);
					func_345(Global_23267, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
					if (Global_23270.f_8882)
					{
						iVar1 = Global_23270.f_8878;
						iVar2 = Global_23270.f_8879;
						iVar3 = Global_23270.f_8880;
						iVar4 = Global_23270.f_8881;
					}
					else
					{
						unk_0x2D32CB870722E022(140, &iVar1, &iVar2, &iVar3, &iVar4);
					}
					unk_0xB978B5D428DA5DE9("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
					func_368(fVar42);
					unk_0x1AFC19685A6AF4A9(&(Global_23270.f_5087));
					unk_0x8E03B3A2F624EF8B(fVar42, (fVar51 + 0.00277776f), 0);
					fVar51 = (fVar51 + (((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				}
				if (Global_23270.f_5163 > 0)
				{
					if ((unk_0xA5E11AF0A2B928C1() - Global_23270.f_5164) > Global_23270.f_5163)
					{
						StringCopy(&(Global_23270.f_5081), "", 24);
						Global_23270.f_5163 = -1;
					}
				}
			}
			else if (!unk_0x2AC37494BBF1DB16(&(Global_23270.f_5087)))
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23267 + 0.0046875f);
				func_368(fVar42);
				unk_0x4DCD7891F910F5EC(&(Global_23270.f_5087));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23270.f_5159)
				{
					if (Global_23270.f_5093[iVar14] == 2)
					{
						unk_0x64C50E40AA09A6B5(Global_23270.f_5098[iVar15]);
						iVar15++;
					}
					else if (Global_23270.f_5093[iVar14] == 3)
					{
						unk_0xC072D668E49D9A7A(Global_23270.f_5102[iVar16], Global_23270.f_5106[iVar16]);
						iVar16++;
					}
					else if (Global_23270.f_5093[iVar14] == 1)
					{
						unk_0x48849374B34BB7B9(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 5)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 6)
					{
						unk_0x48849374B34BB7B9(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 7)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23270.f_5093[iVar14] == 9)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_23270.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xDFA8EC685FA880FE(fVar42, (fVar51 + 0.00277776f));
				unk_0x2D32CB870722E022(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_345(Global_23267, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23270.f_8882)
				{
					iVar1 = Global_23270.f_8878;
					iVar2 = Global_23270.f_8879;
					iVar3 = Global_23270.f_8880;
					iVar4 = Global_23270.f_8881;
				}
				else
				{
					unk_0x2D32CB870722E022(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xB978B5D428DA5DE9("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_368(fVar42);
				unk_0x1AFC19685A6AF4A9(&(Global_23270.f_5087));
				unk_0x8E03B3A2F624EF8B(fVar42, (fVar51 + 0.00277776f), 0);
			}
			if (unk_0x14580F20CBCE4FA9(&(Global_4540953.f_21)) != 0 && Global_4540953.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23267 + 0.0046875f);
				if (Global_4540953.f_67 != 0)
				{
					func_377(Global_4540953.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23267 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_368(fVar42);
				unk_0x4DCD7891F910F5EC(&(Global_4540953.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4540953.f_61)
				{
					if (Global_4540953.f_25[iVar14] == 2)
					{
						unk_0x64C50E40AA09A6B5(Global_4540953.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4540953.f_25[iVar14] == 3)
					{
						unk_0xC072D668E49D9A7A(Global_4540953.f_34[iVar16], Global_4540953.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4540953.f_25[iVar14] == 1)
					{
						unk_0x48849374B34BB7B9(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 5)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 6)
					{
						unk_0x48849374B34BB7B9(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 7)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 9)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 8)
					{
						unk_0x48849374B34BB7B9(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xDFA8EC685FA880FE(fVar42, (fVar51 + 0.00277776f));
				unk_0x2D32CB870722E022(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_345(Global_23267, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23270.f_8882)
				{
					iVar1 = Global_23270.f_8878;
					iVar2 = Global_23270.f_8879;
					iVar3 = Global_23270.f_8880;
					iVar4 = Global_23270.f_8881;
				}
				else
				{
					unk_0x2D32CB870722E022(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xB978B5D428DA5DE9("CommonMenu", "Gradient_Bgd", (Global_23267 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_368(fVar42);
				unk_0x1AFC19685A6AF4A9(&(Global_4540953.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4540953.f_61)
				{
					if (Global_4540953.f_25[iVar14] == 2)
					{
						unk_0x64C50E40AA09A6B5(Global_4540953.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4540953.f_25[iVar14] == 3)
					{
						unk_0xC072D668E49D9A7A(Global_4540953.f_34[iVar16], Global_4540953.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4540953.f_25[iVar14] == 1)
					{
						unk_0x48849374B34BB7B9(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 8)
					{
						unk_0x48849374B34BB7B9(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 5)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 6)
					{
						unk_0x48849374B34BB7B9(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 7)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540953.f_25[iVar14] == 9)
					{
						unk_0x76B34CBB6F5FA1BB(&(Global_4540953.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x8E03B3A2F624EF8B(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4540953.f_67 != 0)
				{
					func_377(Global_4540953.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_367(Global_4540953.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0xB978B5D428DA5DE9(func_374(Global_4540953.f_67), func_372(Global_4540953.f_67, 1), ((Global_23267 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
				}
				fVar51 = (fVar51 + (((unk_0xF9BE0DFC714A1056(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4540953.f_65 > 0)
				{
					if ((unk_0xA5E11AF0A2B928C1() - Global_4540953.f_66) > Global_4540953.f_65)
					{
						StringCopy(&(Global_4540953.f_21), "", 16);
						Global_4540953.f_65 = -1;
					}
				}
			}
			func_362(uVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0x8241C4807850E84A(76, 84);
			unk_0x345E4FB614ACF508(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23270.f_6171)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar96 = Global_23270.f_5661;
			if (Global_23270.f_6172)
			{
				iVar96 = (Global_23270.f_6175 - 1);
			}
			fVar97 = 0f;
			fVar98 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar96)
			{
				fVar56 = 0.034722f;
				if (Global_23270.f_6188[iVar6] != 0f)
				{
					fVar56 = Global_23270.f_6188[iVar6];
				}
				if (Global_23270.f_6172)
				{
					iVar6 = Global_23270.f_8513[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23270.f_6181 && iVar9 < Global_23270.f_5668)
				{
					bVar33 = true;
					if (Global_23270.f_6182 == iVar6)
					{
						fVar98 = fVar97;
					}
					if (Global_23270.f_5799[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23270.f_6322[iVar6] = fVar35;
				fVar34 = (Global_23267 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_23270.f_6182 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_23270.f_8884)
					{
						unk_0x2D32CB870722E022(Global_23270.f_8883, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else
					{
						unk_0x2D32CB870722E022(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					unk_0xB978B5D428DA5DE9("CommonMenu", "Gradient_Nav", (Global_23267 + (fParam5 * 0.5f)), (((fVar59 + fVar98) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar100, iVar101, iVar102, iVar103, 0, 0);
					Global_23270.f_6320 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23270.f_5669)
				{
					if (BitTest(Global_23270.f_5532[iVar6], iVar8) || Global_23270.f_5499[iVar8] == 5)
					{
						if (Global_23270.f_6172)
						{
							iVar19 = Global_23270.f_8529[((iVar9 * Global_23270.f_5669) + iVar8)];
							iVar20 = Global_23270.f_8570[((iVar9 * Global_23270.f_5669) + iVar8)];
							iVar21 = Global_23270.f_8611[((iVar9 * Global_23270.f_5669) + iVar8)];
							iVar22 = Global_23270.f_8652[((iVar9 * Global_23270.f_5669) + iVar8)];
							iVar23 = Global_23270.f_8693[((iVar9 * Global_23270.f_5669) + iVar8)];
						}
						else
						{
							Global_23270.f_8529[((iVar9 * Global_23270.f_5669) + iVar8)] = iVar19;
							Global_23270.f_8570[((iVar9 * Global_23270.f_5669) + iVar8)] = iVar20;
							Global_23270.f_8611[((iVar9 * Global_23270.f_5669) + iVar8)] = iVar21;
							Global_23270.f_8652[((iVar9 * Global_23270.f_5669) + iVar8)] = iVar22;
							Global_23270.f_8693[((iVar9 * Global_23270.f_5669) + iVar8)] = iVar23;
						}
						iVar104 = 0;
						bVar55 = false;
						if (Global_23270.f_6454[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23270.f_6451[0])
							{
								bVar55 = true;
								iVar104 = 0;
							}
						}
						if (Global_23270.f_6454[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23270.f_6451[1])
							{
								bVar55 = true;
								iVar104 = 1;
							}
						}
						if (Global_23270.f_5505[iVar8] != -1f)
						{
							fVar34 = ((Global_23267 + 0.0046875f) + Global_23270.f_5505[iVar8]);
						}
						if ((iVar8 < 4 && Global_23270.f_5505[iVar8 + 1] != -1f) && fVar34 < Global_23270.f_5505[iVar8 + 1])
						{
							fVar46 = (Global_23270.f_5505[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_23267 + Global_23269) - 0.0046875f) - fVar34);
						}
						if ((Global_23270.f_5518[iVar8] && Global_23270.f_6317) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_23270.f_5499[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23270.f_6172)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23270.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											if (Global_23270.f_2130[iVar24])
											{
												bVar53 = true;
											}
											func_360(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, iVar104, bVar53, bVar52);
											unk_0x061288CA1E28CA54(&(Global_23270.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x48849374B34BB7B9(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x48849374B34BB7B9(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x76B34CBB6F5FA1BB(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x48849374B34BB7B9(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x76B34CBB6F5FA1BB(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x76B34CBB6F5FA1BB(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x64C50E40AA09A6B5(Global_23270.f_4309[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xC072D668E49D9A7A(Global_23270.f_4566[(iVar21 + iVar27)], Global_23270.f_4695[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0)
										{
											fVar43 = unk_0x1337CDB3E4371A85(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_377(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_23270.f_4824[(iVar22 + iVar14)] == 2 || Global_23270.f_4824[(iVar22 + iVar14)] == 52) || Global_23270.f_4824[(iVar22 + iVar14)] == 62)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_23270.f_5526[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_23270.f_5526[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar42;
										Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar43;
										Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar44;
										if (Global_23270.f_5526[iVar8] == 2)
										{
											iVar99 = (iVar8 - 1);
											while (iVar99 >= 0)
											{
												if (Global_23270.f_5526[iVar99] == 2)
												{
													Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar99)] = (Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar99)] - Global_23270.f_5511[iVar8]);
												}
												iVar99 = (iVar99 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
										fVar43 = Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
										fVar44 = Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)];
									}
									if (bVar54)
									{
										if (func_377(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23270.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_377(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_367(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xB978B5D428DA5DE9(func_374(26), func_372(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_377(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_377(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_367(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xB978B5D428DA5DE9(func_374(27), func_372(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23270.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										if (Global_23270.f_2130[iVar24])
										{
											bVar53 = true;
										}
										func_360(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_23270.f_8888 && Global_23270.f_8889 == iVar6)
										{
											func_359(bVar32);
										}
										unk_0x1AFC19685A6AF4A9(&(Global_23270.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x48849374B34BB7B9(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x48849374B34BB7B9(&(Global_23270.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76B34CBB6F5FA1BB(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x48849374B34BB7B9(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76B34CBB6F5FA1BB(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76B34CBB6F5FA1BB(&(Global_2695070[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x64C50E40AA09A6B5(Global_23270.f_4309[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xC072D668E49D9A7A(Global_23270.f_4566[(iVar21 + iVar27)], Global_23270.f_4695[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23270.f_4824[(iVar22 + iVar28)] == 2 || Global_23270.f_4824[(iVar22 + iVar28)] == 52) || Global_23270.f_4824[(iVar22 + iVar28)] == 62)
											{
												if (func_377(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_377(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_367(Global_23270.f_4824[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_23270.f_5526[iVar8] == 2)
															{
																unk_0xB978B5D428DA5DE9(func_374(Global_23270.f_4824[(iVar22 + iVar28)]), func_372(Global_23270.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else
															{
																unk_0xB978B5D428DA5DE9(func_374(Global_23270.f_4824[(iVar22 + iVar28)]), func_372(Global_23270.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23270.f_5526[iVar8] == 2)
										{
											unk_0x8E03B3A2F624EF8B(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0x8E03B3A2F624EF8B((fVar34 + fVar42), fVar35, 0);
											if (func_358() && unk_0x24B651D85CCE5EB4(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23270.f_2130[iVar24])
													{
														bVar53 = true;
													}
													func_360(0, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar105, "TEST_LABEL", 16);
													fVar109 = 0f;
													fVar110 = 55f;
													fVar111 = 0.0185f;
													fVar112 = 0.004f;
													fVar113 = 0.02f;
													unk_0xF4621DEB617A5113(0f, (0.35f * 0.7f));
													unk_0x4EC989440A6E11DD(255, 255, 255, 150);
													unk_0xD88E9AF5626B0121((fVar34 - (fVar113 * 0.6f)), (fVar35 + (fVar111 * 0.75f)), 0.0175f, 0.035f, unk_0xF34EE736CF047844(fVar109), unk_0xF34EE736CF047844(fVar109), unk_0xF34EE736CF047844(fVar109), unk_0xF34EE736CF047844(fVar110), 0);
													unk_0x1AFC19685A6AF4A9(&cVar105);
													unk_0x64C50E40AA09A6B5((Global_23270.f_6181 + iVar30));
													unk_0x8E03B3A2F624EF8B((fVar34 - fVar113), (fVar35 + fVar112), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23270.f_4824[(iVar22 + iVar14)] != 2 && Global_23270.f_4824[(iVar22 + iVar14)] != 52) && Global_23270.f_4824[(iVar22 + iVar14)] != 62)
											{
												if (func_377(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_377(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_367(Global_23270.f_4824[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_23270.f_4824[(iVar22 + iVar14)] == 30)
															{
																unk_0xB978B5D428DA5DE9(func_374(Global_23270.f_4824[(iVar22 + iVar14)]), func_372(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), (Global_23267 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else if (Global_23270.f_5526[iVar8] == 2)
															{
																unk_0xB978B5D428DA5DE9(func_374(Global_23270.f_4824[(iVar22 + iVar14)]), func_372(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else
															{
																unk_0xB978B5D428DA5DE9(func_374(Global_23270.f_4824[(iVar22 + iVar14)]), func_372(Global_23270.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23270.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23270.f_6172)
									{
										func_360(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23270.f_8888 && Global_23270.f_8889 == iVar6)
										{
											func_359(bVar32);
										}
										unk_0x061288CA1E28CA54("NUMBER");
										unk_0x64C50E40AA09A6B5(Global_23270.f_4309[iVar20]);
										fVar43 = unk_0x1337CDB3E4371A85(1);
										fVar42 = 0f;
										if (Global_23270.f_5526[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23270.f_5526[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar42;
										Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
										fVar43 = Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
									}
									if (bVar54)
									{
										if (func_377(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23270.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_377(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_367(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xB978B5D428DA5DE9(func_374(26), func_372(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_377(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_377(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_367(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xB978B5D428DA5DE9(func_374(27), func_372(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_360(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, 0, 0);
										func_357((fVar34 + fVar42), fVar35, "NUMBER", Global_23270.f_4309[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23270.f_6172)
									{
										func_360(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23270.f_8888 && Global_23270.f_8889 == iVar6)
										{
											func_359(bVar32);
										}
										unk_0x061288CA1E28CA54("NUMBER");
										unk_0xC072D668E49D9A7A(Global_23270.f_4566[iVar21], Global_23270.f_4695[iVar21]);
										fVar43 = unk_0x1337CDB3E4371A85(1);
										fVar42 = 0f;
										if (Global_23270.f_5526[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23270.f_5526[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar42;
										Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
										fVar43 = Global_23270.f_8775[((iVar9 * Global_23270.f_5669) + iVar8)];
									}
									if (bVar54)
									{
										if (func_377(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23270.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_377(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_367(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xB978B5D428DA5DE9(func_374(26), func_372(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_377(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_377(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_367(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xB978B5D428DA5DE9(func_374(27), func_372(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									func_360(bVar32, Global_23270.f_1616[iVar24], Global_23270.f_1873[iVar24], bVar55, 0, 0, 0);
									func_356((fVar34 + fVar42), fVar35, "NUMBER", Global_23270.f_4566[iVar21], Global_23270.f_4695[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_377(Global_23270.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23270.f_6172)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_23270.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_23270.f_5526[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar42;
											Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_23270.f_8734[((iVar9 * Global_23270.f_5669) + iVar8)];
											fVar44 = Global_23270.f_8816[((iVar9 * Global_23270.f_5669) + iVar8)];
										}
										if (bVar54)
										{
											if (func_377(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23270.f_5526[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_377(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_367(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0xB978B5D428DA5DE9(func_374(26), func_372(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
													}
												}
											}
											if (func_377(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_377(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_367(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0xB978B5D428DA5DE9(func_374(27), func_372(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_377(Global_23270.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_367(Global_23270.f_4824[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												unk_0xB978B5D428DA5DE9(func_374(Global_23270.f_4824[iVar22]), func_372(Global_23270.f_4824[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_355(Global_23270.f_4824[iVar22])), (fVar37 * func_355(Global_23270.f_4824[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_23270.f_5499[iVar8] == 5)
						{
							if (Global_23270.f_5511[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23270.f_5511[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23270.f_5511[iVar8]);
							if (Global_23270.f_5518[iVar8])
							{
								if (func_377(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23270.f_5511[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_23270.f_8513[iVar9] = iVar6;
						Global_23270.f_6183 = iVar6;
						iVar9++;
						if (Global_23270.f_5799[iVar6])
						{
							iVar13++;
						}
						if (Global_23270.f_6188[iVar6] != 0f)
						{
							fVar97 = (fVar97 + Global_23270.f_6188[iVar6]);
						}
						else
						{
							fVar97 = (fVar97 + 0.034722f);
						}
					}
					if (!Global_23270.f_6171)
					{
						Global_23270.f_5928[iVar6] = 1;
						if (Global_23270.f_5670[iVar6])
						{
							if (bVar32)
							{
								Global_23270.f_6177 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23270.f_6177 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23270.f_6171)
			{
				Global_23270.f_6173 = ((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12)));
				Global_23270.f_6176 = iVar11;
				Global_23270.f_6174 = iVar10;
				Global_23270.f_6171 = 1;
			}
		}
		if (!Global_23270.f_6172)
		{
			Global_23270.f_6175 = iVar9;
			Global_23270.f_6172 = 1;
		}
		iVar5++;
	}
	Global_23270.f_6319 = fVar51;
	Global_23270.f_6321 = unk_0xA5E11AF0A2B928C1();
	unk_0x314A52B02A05EEDE(Global_23270.f_6319);
	if (!Global_23270.f_8857)
	{
		func_350(0);
	}
	Global_23270.f_8857 = 0;
	if (bParam2)
	{
		unk_0xEDECDDE17C1E41F5(10);
	}
	unk_0xEDECDDE17C1E41F5(6);
	unk_0xEDECDDE17C1E41F5(7);
	unk_0xEDECDDE17C1E41F5(9);
	unk_0xEDECDDE17C1E41F5(8);
	if (bParam0)
	{
		func_349(1);
	}
	unk_0x4B358573708E8571();
}

void func_349(int iParam0)
{
	Global_1655472.f_1163 = iParam0;
}

void func_350(int iParam0)
{
	if (func_354())
	{
		return;
	}
	if (!Global_20383.f_1 == 1)
	{
		if (func_173(0))
		{
			func_351(iParam0);
		}
		unk_0xECDAB41968FF21A8(&Global_8254, 2);
	}
}

void func_351(int iParam0)
{
	if (func_354())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_353())
		{
			func_352(1, 1);
		}
		else
		{
			func_352(0, 0);
		}
	}
	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
	{
		unk_0xECDAB41968FF21A8(&Global_8254, 16);
	}
	if (unk_0xE444FD7526C8BB46())
	{
		unk_0xD6625E11483B2324(0);
	}
	Global_21725 = 5;
	if (iParam0 == 1)
	{
		unk_0xECDAB41968FF21A8(&Global_8253, 30);
	}
	else
	{
		unk_0x061B1200C95204CB(&Global_8253, 30);
	}
	if (!func_241())
	{
		Global_20383.f_1 = 3;
	}
}

void func_352(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_173(0))
		{
			Global_20584 = 1;
			if (bParam1)
			{
				unk_0xF756EDB27C588BED(&Global_20320);
			}
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			unk_0x6B2D55EA37C443D5(Global_20311);
		}
	}
	else if (Global_20584 == 1)
	{
		Global_20584 = 0;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
		if (bParam1)
		{
			unk_0x6B2D55EA37C443D5(Global_20320);
		}
		else
		{
			unk_0x6B2D55EA37C443D5(Global_20311);
		}
	}
}

bool func_353()
{
	return BitTest(Global_1962996, 5);
}

bool func_354()
{
	return BitTest(Global_1962996, 19);
}

float func_355(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 49:
		case 48:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 54:
		case 45:
		case 46:
		case 47:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_356(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x1AFC19685A6AF4A9(sParam2);
	unk_0xC072D668E49D9A7A(uParam3, uParam4);
	unk_0x8E03B3A2F624EF8B(fParam0, fParam1, 0);
}

void func_357(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x1AFC19685A6AF4A9(sParam2);
	unk_0x64C50E40AA09A6B5(iParam3);
	unk_0x8E03B3A2F624EF8B(fParam0, fParam1, iParam4);
}

var func_358()
{
	return unk_0x7681F180D7938DA8(-1762644250);
}

void func_359(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x2D32CB870722E022(Global_23270.f_8885[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x2D32CB870722E022(Global_23270.f_8885[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x4EC989440A6E11DD(iVar0, iVar1, iVar2, 255);
}

void func_360(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_361(Global_23270.f_6454[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x2D32CB870722E022(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x4EC989440A6E11DD(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x2D32CB870722E022(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x4EC989440A6E11DD(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x2D32CB870722E022(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x4EC989440A6E11DD(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x4EC989440A6E11DD(155, 155, 155, 255);
		}
		else
		{
			unk_0x4EC989440A6E11DD(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x4EC989440A6E11DD(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x2D32CB870722E022(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x4EC989440A6E11DD(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x4EC989440A6E11DD(155, 155, 155, 255);
	}
	else
	{
		unk_0x4EC989440A6E11DD(155, 155, 155, 255);
	}
	unk_0xF4621DEB617A5113(0f, 0.35f);
	unk_0x44B717E97A50473A(1);
	if (bParam5)
	{
		unk_0xF4621DEB617A5113(0f, 0.425f);
		unk_0x3EACBAAEB55B5131(4);
	}
	else if (bParam6)
	{
		unk_0xF4621DEB617A5113(0f, 0.425f);
		unk_0x3EACBAAEB55B5131(6);
	}
	else
	{
		unk_0x3EACBAAEB55B5131(0);
	}
	unk_0xD2087B0A3696F221(0f, 1f);
	unk_0x60E303D153236F74(0);
	unk_0xD03168FF6874527E(0, 0, 0, 0, 0);
	unk_0x7CC33148FD727621(0, 0, 0, 0, 0);
}

void func_361(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_362(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_169(&iVar0, 0, iParam1))
	{
		return;
	}
	uParam0 = uParam0;
	if (iParam3 && !func_379(bParam4, bParam8))
	{
		return;
	}
	if (func_365())
	{
		return;
	}
	if (unk_0xEBDA168F3804CE1F())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_87(unk_0x93E99A2DBCBA9CFA(), 0))
		{
			return;
		}
	}
	if (unk_0xCC17806DB0C41C19())
	{
		if (unk_0x6C75193377D3CE17() == 0 || unk_0xEBDA168F3804CE1F())
		{
			return;
		}
	}
	if (Global_23270.f_5166 != 0)
	{
		if (unk_0x6163ED6C61AD64FC(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23270.f_5166)
			{
				if (Global_23270.f_5465[iVar1] != 363)
				{
					StringCopy(&(Global_23270.f_5168[iVar1 /*16*/]), unk_0x28AEB293270C3DDA(2, Global_23270.f_5465[iVar1], 1), 64);
				}
				else if (Global_23270.f_5480[iVar1] != 32)
				{
					StringCopy(&(Global_23270.f_5168[iVar1 /*16*/]), unk_0xB49FF1EF1051E9DA(2, Global_23270.f_5480[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_23270.f_5167 = 0;
		}
		if (!Global_23270.f_5167)
		{
			unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xC49D258FBF3BF214((1f - (Global_23270.f_5524 / 100f)));
			unk_0xAE3413B0654A0035();
			if (unk_0xCC17806DB0C41C19())
			{
				unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xD546F85F5AF0F231(1);
				unk_0xAE3413B0654A0035();
			}
			iVar1 = 0;
			while (iVar1 < Global_23270.f_5166)
			{
				if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_5393[iVar1 /*4*/])) != unk_0x14580F20CBCE4FA9("PREV"))
				{
					unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xC6A3EF6C4A3412C1(iVar1);
					func_364(&(Global_23270.f_5168[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && unk_0x14580F20CBCE4FA9(&(Global_23270.f_5393[iVar2 /*4*/])) == unk_0x14580F20CBCE4FA9("PREV"))
					{
						func_364(&(Global_23270.f_5168[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23270.f_5450[iVar1] == -1)
					{
						func_363(&(Global_23270.f_5393[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23270.f_5450[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x2AF11E92DE43CDE3(&(Global_23270.f_5393[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x610EBC15DA88FA9D(iVar3, 70);
						}
						else
						{
							unk_0x64C50E40AA09A6B5(iVar3);
						}
						unk_0xF8FCA9E7130CE1C8();
					}
					if (unk_0xCC17806DB0C41C19())
					{
						if (Global_23270.f_5465[iVar1] != 363 && BitTest(Global_23270.f_5495, iVar1))
						{
							unk_0xD546F85F5AF0F231(1);
							unk_0xC6A3EF6C4A3412C1(Global_23270.f_5465[iVar1]);
						}
						else
						{
							unk_0xD546F85F5AF0F231(0);
							unk_0xC6A3EF6C4A3412C1(363);
						}
					}
					unk_0xAE3413B0654A0035();
				}
				iVar1++;
			}
			if (unk_0x14580F20CBCE4FA9(&(Global_4540953.f_16)) != unk_0x14580F20CBCE4FA9(""))
			{
				unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xC6A3EF6C4A3412C1(Global_23270.f_5166);
				func_364(&Global_4540953);
				if (Global_4540953.f_20 == -1)
				{
					func_363(&(Global_4540953.f_16));
				}
				else
				{
					iVar4 = Global_23270.f_5450[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x2AF11E92DE43CDE3(&(Global_4540953.f_16));
					if (bParam5)
					{
						unk_0x610EBC15DA88FA9D(iVar4, 70);
					}
					else
					{
						unk_0x64C50E40AA09A6B5(iVar4);
					}
					unk_0xF8FCA9E7130CE1C8();
				}
				unk_0xAE3413B0654A0035();
			}
			unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(0);
			unk_0xC6A3EF6C4A3412C1(80);
			unk_0xAE3413B0654A0035();
			unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23270.f_5525)
			{
				unk_0xC6A3EF6C4A3412C1(1);
			}
			else
			{
				unk_0xC6A3EF6C4A3412C1(0);
			}
			unk_0xAE3413B0654A0035();
			Global_23270.f_5167 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23270.f_5166)
		{
			if (Global_23270.f_5450[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xC6A3EF6C4A3412C1(iVar1);
					unk_0x2AF11E92DE43CDE3(&(Global_23270.f_5393[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x610EBC15DA88FA9D(iParam2, 70);
					}
					else
					{
						unk_0x64C50E40AA09A6B5(iParam2);
					}
					unk_0xF8FCA9E7130CE1C8();
					unk_0xAE3413B0654A0035();
				}
			}
			iVar1++;
		}
		if (Global_4540953.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x9FD96C5DE6EDFC15(Global_23270.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xC6A3EF6C4A3412C1(iVar1);
				unk_0x2AF11E92DE43CDE3(&(Global_4540953.f_16));
				if (bParam5)
				{
					unk_0x610EBC15DA88FA9D(iParam2, 70);
				}
				else
				{
					unk_0x64C50E40AA09A6B5(iParam2);
				}
				unk_0xF8FCA9E7130CE1C8();
				unk_0xAE3413B0654A0035();
			}
		}
		unk_0x8241C4807850E84A(76, 66);
		unk_0x345E4FB614ACF508(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23270.f_8892)
			{
				unk_0x71CD983E90DB042A(15, 0f, -0.0375f);
				Global_23270.f_8892 = 1;
			}
		}
		else if (Global_23270.f_8892)
		{
			unk_0x833DC7C29EA6EEF3(15);
			Global_23270.f_8892 = 0;
		}
		unk_0x4B358573708E8571();
		if (Global_23270.f_5498)
		{
			unk_0x8241C4807850E84A(82, 66);
			unk_0x345E4FB614ACF508(0f, 0f, 0f, 0f);
			unk_0x20C68F87D0FDD976(Global_23270.f_6103[iVar0 /*10*/], Global_23270.f_5496, Global_23270.f_5497, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x4B358573708E8571();
		}
		else
		{
			unk_0x55CCA1B8F633F628(Global_23270.f_6103[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_363(var uParam0)
{
	unk_0x2AF11E92DE43CDE3(uParam0);
	unk_0xF8FCA9E7130CE1C8();
}

void func_364(var uParam0)
{
	unk_0x7DDE71A42D80E8FA(uParam0);
}

int func_365()
{
	struct<3> Var0;
	
	if (Global_20383.f_1 > 3)
	{
		return 1;
	}
	if (func_366())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0xF756EDB27C588BED(&Var0);
		if (Global_20328 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_366()
{
	if (unk_0x24B651D85CCE5EB4(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_367(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x2D32CB870722E022(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 49:
		case 48:
		case 42:
		case 36:
		case 37:
		case 54:
		case 39:
		case 40:
		case 38:
		case 44:
		case 43:
		case 45:
		case 46:
		case 47:
		case 53:
		case 57:
		case 58:
		case 59:
		case 60:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 55:
			*iParam5 = 100;
			break;
		
		case 63:
			*iParam5 = 100;
			break;
		
		case 56:
			unk_0x2D32CB870722E022(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_368(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x2D32CB870722E022(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x3EACBAAEB55B5131(0);
	unk_0xF4621DEB617A5113(0f, 0.35f);
	unk_0xE4FA115EFC04A654(2);
	unk_0x4EC989440A6E11DD(iVar0, iVar1, iVar2, iVar3);
	unk_0xD2087B0A3696F221(fParam0, ((Global_23267 + Global_23269) - 0.0046875f));
	unk_0x60E303D153236F74(0);
	unk_0xD03168FF6874527E(0, 0, 0, 0, 0);
	unk_0x7CC33148FD727621(0, 0, 0, 0, 0);
}

void func_369(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x1AFC19685A6AF4A9(sParam2);
	unk_0x64C50E40AA09A6B5(uParam3);
	unk_0x64C50E40AA09A6B5(uParam4);
	unk_0x8E03B3A2F624EF8B(fParam0, fParam1, 0);
}

float func_370(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xB71C73D0269747D5(sParam0))
	{
		if (unk_0x14580F20CBCE4FA9(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_371();
	unk_0x061288CA1E28CA54(sParam0);
	unk_0x64C50E40AA09A6B5(uParam1);
	unk_0x64C50E40AA09A6B5(uParam2);
	return unk_0x1337CDB3E4371A85(1);
}

void func_371()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x2D32CB870722E022(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23270.f_8867)
	{
		iVar0 = Global_23270.f_8863;
		iVar1 = Global_23270.f_8864;
		iVar2 = Global_23270.f_8865;
		iVar3 = Global_23270.f_8866;
	}
	unk_0x3EACBAAEB55B5131(0);
	unk_0xF4621DEB617A5113(0f, 0.35f);
	unk_0x4EC989440A6E11DD(iVar0, iVar1, iVar2, iVar3);
	unk_0xD2087B0A3696F221((Global_23267 + 0.0046875f), ((Global_23267 + Global_23269) - 0.0046875f));
	unk_0x60E303D153236F74(0);
	unk_0xD03168FF6874527E(0, 0, 0, 0, 0);
	unk_0x7CC33148FD727621(0, 0, 0, 0, 0);
}

var func_372(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0x2AC37494BBF1DB16(&(Global_23270.f_7488[iParam0 /*16*/])))
	{
		if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_7488[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var19 = { func_69(unk_0x93E99A2DBCBA9CFA()) };
			if (unk_0x5513B5F4E17C7720(&Var19, &uVar3))
			{
				return func_373(&uVar3);
			}
		}
		else
		{
			return func_373(&(Global_23270.f_7488[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 52:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 53:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 55:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 56:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 60:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 61:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 63:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_373(var uParam0)
{
	return uParam0;
}

char* func_374(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0x2AC37494BBF1DB16(&(Global_23270.f_6463[iParam0 /*16*/])))
	{
		if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_6463[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var16 = { func_69(unk_0x93E99A2DBCBA9CFA()) };
			unk_0x5513B5F4E17C7720(&Var16, &uVar0);
			return func_373(&uVar0);
		}
		else
		{
			return func_373(&(Global_23270.f_6463[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 52)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_375(bool bParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		unk_0xC36FC65019094E47(uParam1, uParam2);
		return;
	}
	unk_0x6FC658A1BD624E7C(uParam1, uParam2);
	fVar0 = unk_0xBBDA792448DB5A89(*uParam1);
	fVar1 = unk_0xBBDA792448DB5A89(*uParam2);
	fVar2 = unk_0xE5A34D583EE533B7(0);
	if (func_376(*uParam1, *uParam2))
	{
		*fParam3 = 1f;
		*uParam1 = unk_0xF2DB717A73826179((fVar1 * fVar2));
		*uParam2 = unk_0xF2DB717A73826179(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*uParam1 = unk_0xF2DB717A73826179((fVar0 / *fParam3));
	*uParam2 = unk_0xF2DB717A73826179((fVar1 / *fParam3));
}

bool func_376(int iParam0, int iParam1)
{
	return (unk_0xBBDA792448DB5A89(iParam0) / unk_0xBBDA792448DB5A89(iParam1)) > 3.5f;
}

int func_377(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	
	StringCopy(&cVar0, func_374(iParam0), 64);
	StringCopy(&cVar16, func_372(iParam0, bParam1), 64);
	if (unk_0x14580F20CBCE4FA9(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_375(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { unk_0x2D09CBD1F5910DEC(&cVar0, &cVar16) };
		fVar38 = (func_378(iParam0) / fVar34);
		Var35 = { Var35 * Vector(fVar38, fVar38, fVar38) };
		if (!bParam2)
		{
			Var35.f_0 = (Var35.f_0 - 2f);
			Var35.f_1 = (Var35.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var35.f_0 = 288f;
			Var35.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x14580F20CBCE4FA9(&(Global_23270.f_7488[29 /*16*/])) == joaat("crew_logo"))
		{
			Var35.f_0 = 106f;
			Var35.f_1 = 106f;
		}
		*fParam3 = ((Var35.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var35.f_1 / IntToFloat(iVar33)) / (Var35.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0xF764DD4275E8FDF4() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23269)
			{
				*fParam4 = (*fParam4 * (Global_23269 / *fParam3));
				*fParam3 = Global_23269;
			}
		}
		return 1;
	}
	return 0;
}

float func_378(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 53:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 63:
			return 0.5f;
			break;
		
		case 62:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_379(bool bParam0, bool bParam1)
{
	if (Global_2672505.f_1684.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x35DF833D93BCC488() || (func_251(8, -1) && func_380() != 65)) || (unk_0xD7863C03D2155822() != 0 && !bParam1)) || (unk_0xB53553DC4AAC7D8A() && !bParam0)) || unk_0x4136116828BCAAB6()) || Global_78819) || Global_23270.f_8891) || unk_0x47F8B78DC1737D5C()) || Global_100733.f_1474)
	{
		return 0;
	}
	return 1;
}

int func_380()
{
	return Global_1574993;
}

void func_381(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x28AEB293270C3DDA(2, iParam0, 1);
	if (Global_23270.f_5166 >= 14)
	{
		StringCopy(&Global_4540953, sVar0, 64);
		StringCopy(&(Global_4540953.f_16), sParam1, 16);
		Global_4540953.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xECDAB41968FF21A8(&(Global_23270.f_5495), Global_23270.f_5166);
	}
	StringCopy(&(Global_23270.f_5168[Global_23270.f_5166 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23270.f_5393[Global_23270.f_5166 /*4*/]), sParam1, 16);
	Global_23270.f_5450[Global_23270.f_5166] = iParam2;
	Global_23270.f_5465[Global_23270.f_5166] = iParam0;
	Global_23270.f_5480[Global_23270.f_5166] = 32;
	Global_23270.f_5166++;
}

char* func_382(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = iParam0;
	}
	else
	{
		iVar0 = 7;
	}
	switch (iVar0)
	{
		case 7:
			return "SNK_AFFORD";
		
		case 3:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		case 4:
			return "SNK_ITEM4_D";
		
		case 0:
			return "SNK_ITEM5_D";
		
		case 5:
			return "SNK_ITEM6_D";
		
		case 6:
			return "SNK_ITEM7_D";
		
		default:
	}
	return "";
}

void func_383(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_23270.f_5081), sParam0, 24);
	Global_23270.f_5159 = 0;
	Global_23270.f_5160 = 0;
	Global_23270.f_5161 = 0;
	Global_23270.f_5162 = 0;
	Global_23270.f_5163 = iParam1;
	Global_23270.f_5164 = unk_0xA5E11AF0A2B928C1();
	Global_23270.f_5165 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23270.f_5093[iVar0] = 0;
		iVar0++;
	}
}

void func_384(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_23270.f_6182 = uParam0;
	Global_23270.f_6317 = iParam2;
	if (Global_23270.f_6182 < Global_23270.f_6181)
	{
		Global_23270.f_6181 = Global_23270.f_6182;
	}
	else if ((Global_23270.f_6172 && Global_23270.f_6182 > Global_23270.f_6183) || (!Global_23270.f_6172 && Global_23270.f_6182 >= (Global_23270.f_6181 + Global_23270.f_5668)))
	{
		iVar0 = Global_23270.f_6181;
		while (iVar0 <= Global_23270.f_6182)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23270.f_5532[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23270.f_5668 && Global_23270.f_6181 < 128)
		{
			Global_23270.f_6181++;
			iVar1 = 0;
			iVar0 = Global_23270.f_6181;
			while (iVar0 <= Global_23270.f_6182)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23270.f_5532[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23270.f_6171 = 0;
	Global_23270.f_6172 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23270.f_5081), "", 24);
		StringCopy(&(Global_4540953.f_21), "", 16);
	}
}

void func_385(int iParam0)
{
	Global_23270.f_6181 = iParam0;
}

void func_386(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23270.f_5665 >= 256)
	{
		return;
	}
	if (Global_23270.f_6186 >= 4)
	{
		return;
	}
	if (Global_23270.f_6187 != 1)
	{
		return;
	}
	if (Global_23270.f_6186 >= Global_23270.f_6184)
	{
		return;
	}
	Global_23270.f_4309[Global_23270.f_5665] = uParam0;
	Global_23270.f_5665++;
	Global_23270.f_2387[Global_23270.f_6185 /*5*/][Global_23270.f_6186] = 2;
	Global_23270.f_6186++;
	if (Global_23270.f_6186 >= Global_23270.f_6184)
	{
		fVar0 = func_388();
		if (Global_23270.f_5518[Global_23270.f_5662] && Global_23270.f_6186 == Global_23270.f_6184)
		{
			func_377(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23270.f_5511[(Global_23270.f_5662 - 1)])
		{
			Global_23270.f_5511[(Global_23270.f_5662 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23270.f_6186 >= Global_23270.f_6184)
		{
			fVar3 = func_387();
			if (fVar3 > Global_23270.f_6188[Global_23270.f_5661])
			{
				Global_23270.f_6188[Global_23270.f_5661] = fVar3;
			}
		}
	}
}

float func_387()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_23270.f_6186)
	{
		if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_23270.f_4824[((Global_23270.f_5667 - iVar1) + iVar0)] != 0)
		{
			if (func_377(Global_23270.f_4824[((Global_23270.f_5667 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0xF9BE0DFC714A1056(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0xF9BE0DFC714A1056(0.35f, 0);
}

float func_388()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_23270.f_6186)
	{
		if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_360(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
	{
		unk_0x061288CA1E28CA54(&(Global_23270.f_79[Global_23270.f_6185 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_23270.f_6186)
	{
		if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x48849374B34BB7B9(&(Global_23270.f_79[(Global_23270.f_6185 + iVar8) /*6*/]));
			}
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x48849374B34BB7B9(&(Global_23270.f_79[(Global_23270.f_6185 + iVar8) /*6*/]));
			}
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 2)
		{
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x64C50E40AA09A6B5(Global_23270.f_4309[((Global_23270.f_5665 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 3)
		{
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0xC072D668E49D9A7A(Global_23270.f_4566[((Global_23270.f_5666 - iVar4) + iVar10)], Global_23270.f_4695[((Global_23270.f_5666 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 5)
		{
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x76B34CBB6F5FA1BB(&(Global_2695070[((Global_23270.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 6)
		{
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x48849374B34BB7B9(&(Global_2695070[((Global_23270.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 7)
		{
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x76B34CBB6F5FA1BB(&(Global_2695070[((Global_23270.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][iVar7] == 9)
		{
			if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
			{
				unk_0x76B34CBB6F5FA1BB(&(Global_2695070[((Global_23270.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x14580F20CBCE4FA9(&(Global_23270.f_79[Global_23270.f_6185 /*6*/])) != 0)
	{
		fVar0 = unk_0x1337CDB3E4371A85(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_23270.f_4824[((Global_23270.f_5667 - iVar5) + iVar7)] != 0)
		{
			func_377(Global_23270.f_4824[((Global_23270.f_5667 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_389(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	switch (func_324(uParam0))
	{
		case 0:
			switch (iVar0)
			{
				case 3:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 5;
				
				case 4:
					return 7;
				
				case 0:
					return Global_262145.f_127;
				
				case 6:
					return Global_262145.f_125;
				
				case 5:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 4:
					return 8;
				
				case 0:
					return Global_262145.f_127;
				
				case 6:
					return Global_262145.f_125;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 4;
				
				case 4:
					return 6;
				
				case 0:
					return Global_262145.f_128;
				
				case 6:
					return Global_262145.f_126;
				
				case 5:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

void func_390(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23270.f_5667 >= 256)
	{
		return;
	}
	if (Global_23270.f_6186 >= 4)
	{
		return;
	}
	if (Global_23270.f_6187 != 1)
	{
		return;
	}
	if (Global_23270.f_6186 >= Global_23270.f_6184)
	{
		return;
	}
	Global_23270.f_4824[Global_23270.f_5667] = iParam0;
	Global_23270.f_5667++;
	Global_23270.f_2387[Global_23270.f_6185 /*5*/][Global_23270.f_6186] = 4;
	Global_23270.f_6186++;
	if (Global_23270.f_6186 >= Global_23270.f_6184)
	{
		fVar0 = func_388();
		if (Global_23270.f_5518[Global_23270.f_5662] && Global_23270.f_6186 == Global_23270.f_6184)
		{
			func_377(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23270.f_5511[(Global_23270.f_5662 - 1)])
		{
			Global_23270.f_5511[(Global_23270.f_5662 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23270.f_6186 >= Global_23270.f_6184)
		{
			fVar3 = func_387();
			if (fVar3 > Global_23270.f_6188[Global_23270.f_5661])
			{
				Global_23270.f_6188[Global_23270.f_5661] = fVar3;
			}
		}
	}
}

void func_391(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23270.f_5661 > iParam0)
	{
		return;
	}
	if (Global_23270.f_5661 >= 128)
	{
		return;
	}
	if (Global_23270.f_5663 >= 256)
	{
		return;
	}
	if (Global_23270.f_6186 < Global_23270.f_6184)
	{
		return;
	}
	if (Global_23270.f_5661 != iParam0)
	{
		Global_23270.f_5661 = iParam0;
		Global_23270.f_5662 = 0;
	}
	iVar0 = Global_23270.f_5499[Global_23270.f_5662];
	if (iVar0 != 1)
	{
		while (Global_23270.f_5662 < 4 && iVar0 != 1)
		{
			Global_23270.f_5662++;
			iVar0 = Global_23270.f_5499[Global_23270.f_5662];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]), sParam1, 24);
	if (!unk_0x2AC37494BBF1DB16(sParam1) && !unk_0x42FA33BDEDF21186(sParam1))
	{
	}
	Global_23270.f_1616[Global_23270.f_5663] = bParam3;
	Global_23270.f_1873[Global_23270.f_5663] = iParam4;
	Global_23270.f_2130[Global_23270.f_5663] = iParam6;
	Global_23270.f_5663++;
	if (!bParam3)
	{
		func_394(Global_23270.f_5661, 1);
	}
	else
	{
		func_394(Global_23270.f_5661, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_393(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]));
		if (Global_23270.f_5518[Global_23270.f_5662])
		{
			func_377(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23270.f_5511[Global_23270.f_5662])
		{
			Global_23270.f_5511[Global_23270.f_5662] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_392(&(Global_23270.f_79[Global_23270.f_5663 /*6*/]));
			if (fVar4 > Global_23270.f_6188[iParam0])
			{
				Global_23270.f_6188[iParam0] = fVar4;
			}
		}
	}
	unk_0xECDAB41968FF21A8(&(Global_23270.f_5532[iParam0]), Global_23270.f_5662);
	Global_23270.f_5662++;
	Global_23270.f_6187 = 1;
	Global_23270.f_6185 = (Global_23270.f_5663 - 1);
	Global_23270.f_6186 = 0;
	Global_23270.f_6184 = iParam2;
}

float func_392(char* sParam0)
{
	if (!unk_0x42FA33BDEDF21186(sParam0))
	{
	}
	return unk_0xF9BE0DFC714A1056(0.35f, 0);
}

float func_393(char* sParam0)
{
	if (!unk_0xB71C73D0269747D5(sParam0))
	{
		if (unk_0x14580F20CBCE4FA9(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_360(0, 1, 0, 0, 0, 0, 0);
	unk_0x061288CA1E28CA54(sParam0);
	return unk_0x1337CDB3E4371A85(1);
}

void func_394(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xECDAB41968FF21A8(&(Global_23270.f_6458[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_23270.f_6458[iVar0]), (iParam0 - iVar0 * 32));
	}
}

char* func_395(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "SNK_ITEM1";
		
		case 1:
			return "SNK_ITEM2";
		
		case 2:
			return "SNK_ITEM3";
		
		case 4:
			return "SNK_ITEM4";
		
		case 0:
			return "SNK_ITEM5";
		
		case 5:
			return "SNK_ITEM6";
		
		case 6:
			return "SNK_ITEM7";
		
		default:
	}
	return "";
}

int func_396(int iParam0)
{
	if (func_131(func_330(iParam0), -1, 0) >= func_331(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_397(int iParam0, char* sParam1, char* sParam2)
{
	Global_23270 = iParam0;
	func_398(29, sParam1, sParam2);
}

void func_398(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_23270.f_6463[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_23270.f_7488[iParam0 /*16*/]), sParam2, 64);
}

void func_399(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_23270.f_1), sParam0, 16);
	Global_23270.f_74 = 0;
	Global_23270.f_75 = 0;
	Global_23270.f_76 = 0;
	Global_23270.f_77 = 0;
	Global_23270.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23270.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_400(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23270.f_5526[0] = iParam0;
	Global_23270.f_5526[1] = iParam1;
	Global_23270.f_5526[2] = iParam2;
	Global_23270.f_5526[3] = iParam3;
	Global_23270.f_5526[4] = iParam4;
}

void func_401(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23270.f_5499[0] = iParam0;
	Global_23270.f_5499[1] = iParam1;
	Global_23270.f_5499[2] = iParam2;
	Global_23270.f_5499[3] = iParam3;
	Global_23270.f_5499[4] = iParam4;
	Global_23270.f_5669 = 0;
	if (iParam0 != 0)
	{
		Global_23270.f_5669++;
	}
	if (iParam1 != 0)
	{
		Global_23270.f_5669++;
	}
	if (iParam2 != 0)
	{
		Global_23270.f_5669++;
	}
	if (iParam3 != 0)
	{
		Global_23270.f_5669++;
	}
	if (iParam4 != 0)
	{
		Global_23270.f_5669++;
	}
}

void func_402(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23270.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23270.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		StringCopy(&(Global_2695070[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23270.f_4309[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23270.f_4566[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23270.f_4824[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23270.f_5532[iVar0] = 0;
		Global_23270.f_5670[iVar0] = 0;
		Global_23270.f_5799[iVar0] = 0;
		Global_23270.f_6322[iVar0] = 0f;
		Global_23270.f_5928[iVar0] = 0;
		Global_23270.f_6188[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23270.f_5499[iVar0] = 0;
		Global_23270.f_5511[iVar0] = 0f;
		Global_23270.f_5505[iVar0] = -1f;
		Global_23270.f_5518[iVar0] = 0;
		Global_23270.f_5526[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23270.f_5393[iVar0 /*4*/]), "", 16);
		Global_23270.f_5450[iVar0] = -1;
		Global_23270.f_5465[iVar0] = 363;
		Global_23270.f_5480[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 64)
	{
		StringCopy(&(Global_23270.f_6463[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23270.f_7488[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23270.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4540953.f_16), "", 16);
	Global_4540953.f_20 = -1;
	Global_23270 = 0;
	Global_23270.f_5661 = 0;
	Global_23270.f_5662 = 0;
	Global_23270.f_5663 = 0;
	Global_23270.f_5665 = 0;
	Global_23270.f_5666 = 0;
	Global_23270.f_5667 = 0;
	Global_23270.f_5664 = 0;
	Global_23270.f_6317 = 0;
	Global_23270.f_6457 = 0;
	Global_23270.f_6182 = 0;
	Global_23270.f_6181 = 0;
	Global_23270.f_6183 = 0;
	StringCopy(&(Global_23270.f_5081), "", 24);
	Global_23270.f_5159 = 0;
	Global_23270.f_5160 = 0;
	Global_23270.f_5161 = 0;
	Global_23270.f_5162 = 0;
	Global_23270.f_5163 = 0;
	Global_23270.f_5164 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23270.f_5093[iVar0] = 0;
		iVar0++;
	}
	Global_23270.f_5165 = 0;
	StringCopy(&(Global_4540953.f_21), "", 16);
	Global_4540953.f_61 = 0;
	Global_4540953.f_62 = 0;
	Global_4540953.f_63 = 0;
	Global_4540953.f_64 = 0;
	Global_4540953.f_65 = 0;
	Global_4540953.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4540953.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4540953.f_67 = 0;
	StringCopy(&(Global_23270.f_1), "", 16);
	Global_23270.f_5517 = 0f;
	Global_23270.f_74 = 0;
	Global_23270.f_75 = 0;
	Global_23270.f_76 = 0;
	Global_23270.f_77 = 0;
	Global_23270.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23270.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23270.f_6187 = 0;
	Global_23270.f_6186 = 0;
	Global_23270.f_6184 = 0;
	Global_23270.f_6185 = 0;
	Global_23270.f_5166 = 0;
	Global_23270.f_5167 = 0;
	Global_23270.f_5668 = 10;
	Global_23270.f_5669 = 0;
	Global_23270.f_6319 = 0f;
	Global_23270.f_6320 = 0f;
	Global_23270.f_6171 = 0;
	Global_23270.f_6172 = 0;
	Global_23270.f_6173 = 0f;
	Global_23270.f_6174 = 0;
	Global_23270.f_6176 = 0;
	Global_23270.f_6175 = 0;
	Global_23270.f_6177 = 0;
	Global_23270.f_6178 = 0;
	Global_23270.f_6179 = 0;
	Global_23270.f_6180 = 0;
	Global_23270.f_8888 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23270.f_6451[iVar0] = -1;
		Global_23270.f_6454[iVar0] = -1;
		iVar0++;
	}
	Global_23270.f_5524 = 0f;
	Global_23270.f_5495 = 0;
	Global_23270.f_5525 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23270.f_6458)
	{
		Global_23270.f_6458[iVar0] = 0;
		iVar0++;
	}
	Global_23270.f_8867 = 0;
	Global_23270.f_8862 = 0;
	Global_23270.f_8872 = 0;
	Global_23270.f_8877 = 0;
	Global_23270.f_8882 = 0;
	Global_23270.f_8884 = 0;
	Global_23270.f_8890 = 0;
	Global_23267 = 0.05f;
	Global_23268 = 0.05f;
	Global_23269 = 0.225f;
	fVar2 = unk_0xE5A34D583EE533B7(0);
	if (bParam0)
	{
		Global_23269 = (0.225f * (1.777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23269 = (0.225f * (1.777778f / fVar2));
	}
	else
	{
		Global_23269 = 0.225f;
	}
}

int func_403()
{
	if (!Global_262145.f_120)
	{
		return (7 - 1);
	}
	return 7;
}

int func_404(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	float fVar3;
	
	switch (iParam0)
	{
		case 0:
			*uParam1 = { unk_0xF2A6E8EA57F9D501(-706.6382f, -913.6887f, 19.21f, -89.999f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-89.999f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 1:
			*uParam1 = { unk_0xF2A6E8EA57F9D501(-47.19871f, -1757.67f, 29.42f, -130f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-130f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 2:
			*uParam1 = { unk_0xF2A6E8EA57F9D501(1164.21f, -322.89f, 69.2f, -80f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-80f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 3:
			*uParam1 = { unk_0xF2A6E8EA57F9D501(1698.307f, 4923.371f, 42.06f, 145f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (145f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 4:
			*uParam1 = { unk_0xF2A6E8EA57F9D501(-1820.465f, 793.8166f, 138.09f, -47.53f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-47.53f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 5:
			Var0 = { 1165.958f, 2710.201f, 38.14286f };
			fVar3 = -1.15f;
			*uParam1 = { unk_0xF2A6E8EA57F9D501(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 6:
			Var0 = { -2967.027f, 390.9038f, 15.02f };
			fVar3 = -94.76f;
			*uParam1 = { unk_0xF2A6E8EA57F9D501(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 7:
			Var0 = { -1222.331f, -907.8234f, 12.31f };
			fVar3 = -147.297f;
			*uParam1 = { unk_0xF2A6E8EA57F9D501(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 8:
			Var0 = { 1134.811f, -982.3615f, 46.4f };
			fVar3 = 96.68562f;
			*uParam1 = { unk_0xF2A6E8EA57F9D501(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 9:
			Var0 = { -1486.673f, -378.4638f, 40.15f };
			fVar3 = -46.229f;
			*uParam1 = { unk_0xF2A6E8EA57F9D501(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 10:
			Var0 = { -3244.573f, 1000.658f, 12.83f };
			fVar3 = 175.074f;
			*uParam1 = { unk_0xF2A6E8EA57F9D501(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 11:
			Var0 = { -3041.357f, 584.2665f, 7.9f };
			fVar3 = -162.241f;
			*uParam1 = { unk_0xF2A6E8EA57F9D501(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 12:
			Var0 = { 548.9015f, 2668.941f, 42.15f };
			fVar3 = -82.5f;
			*uParam1 = { unk_0xF2A6E8EA57F9D501(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 13:
			Var0 = { 2554.875f, 381.3857f, 108.62f };
			fVar3 = 177.716f;
			*uParam1 = { unk_0xF2A6E8EA57F9D501(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 14:
			Var0 = { 2676.212f, 3280.969f, 55.24f };
			fVar3 = 150.87f;
			*uParam1 = { unk_0xF2A6E8EA57F9D501(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 15:
			Var0 = { 1729.329f, 6417.123f, 35.03f };
			fVar3 = 63.641f;
			*uParam1 = { unk_0xF2A6E8EA57F9D501(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 16:
			Var0 = { 1959.323f, 3742.29f, 32.34f };
			fVar3 = 120f;
			*uParam1 = { unk_0xF2A6E8EA57F9D501(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 17:
			Var0 = { 24.94562f, -1344.954f, 29.49f };
			fVar3 = 90f;
			*uParam1 = { unk_0xF2A6E8EA57F9D501(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 18:
			Var0 = { 373.5954f, 328.5892f, 103.56f };
			fVar3 = 75.885f;
			*uParam1 = { unk_0xF2A6E8EA57F9D501(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case -2:
			*uParam1 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam2 = { -3.6091f, 0.022f, -8.6461f };
			*uParam3 = 35f;
			break;
	}
	return 1;
}

void func_405()
{
	if (unk_0xCC17806DB0C41C19())
	{
		unk_0xCE976F518CBAEC2A(0.325f, 0.3f);
	}
}

void func_406(int iParam0, int iParam1)
{
	if (!func_311(unk_0x93E99A2DBCBA9CFA(), 1, 0) || iParam1)
	{
		if (!func_411())
		{
			Global_1574582.f_1 = 1;
			Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_9 = 1;
			if (iParam0 == 1)
			{
				Global_1574582.f_2 = 1;
			}
			func_407(7, 0, -1);
		}
	}
}

void func_407(int iParam0, int iParam1, int iParam2)
{
	if (!func_411() || iParam1)
	{
		Global_1574582 = 1;
		func_410(1);
		if (((!unk_0x1758F8A8511510AB() && !func_409()) && !func_408(unk_0x93E99A2DBCBA9CFA())) && !func_143(unk_0x93E99A2DBCBA9CFA()))
		{
			Global_1057408 = 1;
		}
		Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_8 = 1;
		unk_0xF491DE134E08172A(1, iParam0, iParam2, -1);
	}
}

int func_408(int iParam0)
{
	if (func_311(iParam0, 1, 0))
	{
		if (Global_1853910[iParam0 /*862*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_409()
{
	return Global_2683862.f_841;
}

void func_410(bool bParam0)
{
	if (unk_0xA26A9A07F761D8F8())
	{
		if (!func_411())
		{
			if (func_46(unk_0x93E99A2DBCBA9CFA(), 1, 0))
			{
				unk_0x841E34BB01496B96(unk_0xC1A5EC5C986B98AD(), 1);
				unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 342, 0);
				unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 122, 0);
			}
			unk_0x77846DF4702EC754(unk_0x93E99A2DBCBA9CFA(), 1f);
			unk_0x86F87160DEF1E357(0);
			unk_0x4235C9F9C67D9842(1);
			if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
				if (bParam0)
				{
					unk_0xA765DBC99EB000B8(0, 0);
				}
			}
		}
		else
		{
			if (func_46(unk_0x93E99A2DBCBA9CFA(), 1, 1))
			{
				unk_0x841E34BB01496B96(unk_0xC1A5EC5C986B98AD(), 0);
				unk_0x8CC688927B10006C(unk_0xC1A5EC5C986B98AD(), joaat("weapon_unarmed"), 1);
				unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 342, 1);
				unk_0x598D91BBD045C1F3(unk_0xC1A5EC5C986B98AD(), 122, 1);
				unk_0x77846DF4702EC754(unk_0x93E99A2DBCBA9CFA(), 0.5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					unk_0xA765DBC99EB000B8(1, 0);
				}
			}
			unk_0x86F87160DEF1E357(1);
			unk_0x4235C9F9C67D9842(0);
		}
	}
}

bool func_411()
{
	return Global_1574582;
}

void func_412(var uParam0)
{
	func_413(uParam0, 0f);
}

void func_413(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_334(BitTest(*uParam0, 4)) - fParam1);
	unk_0xECDAB41968FF21A8(uParam0, 1);
	unk_0x061B1200C95204CB(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_414(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_267(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x48DC6A21D1CAD89C(unk_0x5DC3DCA82C806319()))
	{
		return 0;
	}
	if (func_173(0))
	{
		return 0;
	}
	if (unk_0x2FECE8D166B3056B())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44000[iVar0 /*32*/] == 1 && Global_44000[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_44000[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_44000[iVar0 /*32*/].f_5 = 1;
			Global_44000[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_44000[iVar0 /*32*/] == 0)
			{
			}
			if (Global_44000[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_415()
{
	if (Global_113648.f_20412.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

bool func_416()
{
	return Global_23129;
}

int func_417(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { unk_0xF2A6E8EA57F9D501(*uParam1, uParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { unk_0xF2A6E8EA57F9D501(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { unk_0xF2A6E8EA57F9D501(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { unk_0xF2A6E8EA57F9D501(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { unk_0xF2A6E8EA57F9D501(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { unk_0xF2A6E8EA57F9D501(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { unk_0xF2A6E8EA57F9D501(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { unk_0xF2A6E8EA57F9D501(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { unk_0xF2A6E8EA57F9D501(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case -2:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

bool func_418(int iParam0, int iParam1)
{
	return BitTest(Global_2657589[iParam0 /*466*/].f_218, iParam1);
}

void func_419(var uParam0, var uParam1)
{
	unk_0x909F139DC199D8E0(unk_0xC1A5EC5C986B98AD());
	func_463(unk_0x93E99A2DBCBA9CFA(), 1, 0, 0);
	unk_0xAABD7B0753C5C286(0);
	unk_0xEAB390443C680F72(0, 1065353216);
	if (uParam0->f_51 > 0)
	{
		*uParam1 = uParam0->f_51;
		uParam0->f_51 = 0;
	}
	func_440();
	unk_0x061B1200C95204CB(&(uParam0->f_53), 7);
	if (func_151("SHR_MENU"))
	{
		unk_0xCD3C8E1022864F65(1);
	}
	if (uParam0->f_14 != -1)
	{
		func_266(&(uParam0->f_14));
	}
	if (unk_0xF57C1326FD40C8A7(uParam0->f_1))
	{
		unk_0x42B9FA814615C4F9(uParam0->f_1, 0);
	}
	unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
}

int func_420(float fParam0)
{
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()) && !unk_0x055111B11E6624FD(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (fParam0 <= 0f)
		{
			return unk_0x98B3AA67B555D71E(unk_0xC1A5EC5C986B98AD()) > 0;
		}
		else
		{
			return unk_0x42B9D77090959095(unk_0xC1A5EC5C986B98AD(), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), fParam0) > 0;
		}
	}
	return 0;
}

int func_421(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0xA26A9A07F761D8F8() && !bParam3)
	{
		if (unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0x0DB7F8294D73598B(), uParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0x3CDF9E9E483AADE1(unk_0x55DB5FC567C065D9(unk_0xA5E11AF0A2B928C1(), uParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_422(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if ((*uParam0)[iVar0] < 10)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_423()
{
	unk_0xDBC7406226B5540E(&uLocal_556);
	unk_0xEDB03CCB50D11479(0, unk_0xC1A5EC5C986B98AD(), -1, 0, 2);
	unk_0x3EE48ADC8C7F5CC4(0, "mp_am_hold_up", "handsup_enter", 8f, -8f, -1, 262192, 0, 0, 0, 0);
	unk_0x3EE48ADC8C7F5CC4(0, "mp_am_hold_up", "handsup_base", 8f, -4f, -1, 262193, 0, 0, 0, 0);
	unk_0xF2CFC6EC8C85FA78(uLocal_556);
	unk_0xDBC7406226B5540E(&uLocal_557);
	unk_0x3EE48ADC8C7F5CC4(0, "mp_am_hold_up", "handsup_base", 4f, -4f, -1, 262193, 0, 0, 0, 0);
	unk_0xF2CFC6EC8C85FA78(uLocal_557);
	unk_0xDBC7406226B5540E(&uLocal_558);
	unk_0x7D9A648CC1936BDA(0, Local_543, 2f, -1, 0.25f, 0, fLocal_546);
	unk_0x3EE48ADC8C7F5CC4(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	unk_0x3EE48ADC8C7F5CC4(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	unk_0xCF302B47D4B347F1(0, Local_543, 250f, -1, 1, 0);
	unk_0x82C6DD5E8460E2C0(0, 0);
	unk_0xF2CFC6EC8C85FA78(uLocal_558);
	unk_0xDBC7406226B5540E(&uLocal_560);
	unk_0x3EE48ADC8C7F5CC4(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	unk_0x3EE48ADC8C7F5CC4(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	unk_0x82C6DD5E8460E2C0(0, 0);
	unk_0xF2CFC6EC8C85FA78(uLocal_560);
	unk_0xDBC7406226B5540E(&uLocal_559);
	unk_0x7D9A648CC1936BDA(0, Local_543, 2f, -1, 0.25f, 0, (fLocal_546 - 180f));
	unk_0xA3015CA70031F4B0(0, 1);
	unk_0xB7EB8CCA28444BAB(0, 20f, 0);
	unk_0xF2CFC6EC8C85FA78(uLocal_559);
}

void func_424(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78558)
	{
		if (!unk_0x66599E73DBA5A850(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xAD4CEC14FE6404F6(iParam2, 0);
			}
			else
			{
				unk_0xAD4CEC14FE6404F6(iParam2, 1);
			}
		}
		if (!unk_0x66599E73DBA5A850(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59B8D6E436F5B21C(iParam2, 0);
			}
			else
			{
				unk_0x59B8D6E436F5B21C(iParam2, 1);
			}
		}
	}
}

int func_425(var uParam0)
{
	if (unk_0x7E2E2E8A648611F4(uParam0))
	{
		return unk_0x66599E73DBA5A850(unk_0x0DB8386015E986B7(uParam0));
	}
	return 1;
}

int func_426()
{
	return Local_85.f_13;
}

char* func_427(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

int func_428()
{
	struct<3> Var0;
	
	if (func_436(&(Local_481.f_50), 0))
	{
		func_434(Local_481.f_50, &iLocal_580, &iLocal_581, &iLocal_582, &iLocal_583, &Local_584, &Local_587);
		func_433(Local_481.f_50, &Local_590, &Local_593, &fLocal_596);
		func_432(Local_481.f_50, &Local_597, &Local_600, &fLocal_603);
		switch (Local_481.f_50)
		{
			case 0:
				Local_548 = { 1393.1f, 3605.89f, (35.2f - 0.2f) };
				Local_551 = { 0f, 0f, 21.89f };
				iLocal_539 = func_52(0);
				Local_543 = { 1394.852f, 3609.509f, 33.9809f };
				fLocal_546 = 116.5329f;
				iLocal_575 = 1;
				if (func_430(6, 18))
				{
					iLocal_769[0] = 0;
					iLocal_775[0] = 0;
					iLocal_769[1] = 0;
					iLocal_775[1] = 0;
					iLocal_769[2] = 0;
					iLocal_775[2] = 0;
					iLocal_769[3] = 0;
					iLocal_775[3] = 0;
					iLocal_769[4] = 0;
					iLocal_775[4] = 0;
				}
				else
				{
					iLocal_769[0] = 1;
					iLocal_775[0] = 0;
					iLocal_769[1] = 1;
					iLocal_775[1] = 1;
					iLocal_769[2] = 1;
					iLocal_775[2] = 2;
					iLocal_769[3] = 0;
					iLocal_775[3] = 1;
					iLocal_769[4] = 0;
					iLocal_775[4] = 0;
				}
				break;
			
			case 1:
				Local_551 = { 0f, 0f, -160f };
				Local_548 = { -3041.38f, 584.35f, (8.11f - 0.2f) };
				iLocal_539 = func_52(0);
				Local_543 = { -3047.512f, 588.9807f, 6.9089f };
				fLocal_546 = 178.8753f;
				iLocal_575 = 1;
				if (func_430(6, 18))
				{
					iLocal_769[0] = 0;
					iLocal_775[0] = 1;
					iLocal_769[1] = 1;
					iLocal_775[1] = 0;
					iLocal_769[2] = 0;
					iLocal_775[2] = 1;
					iLocal_769[3] = 0;
					iLocal_775[3] = 1;
					iLocal_769[4] = 0;
					iLocal_775[4] = 1;
				}
				else
				{
					iLocal_769[0] = 2;
					iLocal_775[0] = 0;
					iLocal_769[1] = 0;
					iLocal_775[1] = 0;
					iLocal_769[2] = 1;
					iLocal_775[2] = 2;
					iLocal_769[3] = 0;
					iLocal_775[3] = 0;
					iLocal_769[4] = 0;
					iLocal_775[4] = 1;
				}
				break;
			
			case 2:
				Local_548 = { -3244.56f, 1000.74f, (13.03f - 0.2f) };
				Local_551 = { 0f, 0f, 175.52f };
				iLocal_539 = func_52(0);
				Local_543 = { -3249.114f, 1006.558f, 11.8307f };
				fLocal_546 = 191.594f;
				iLocal_575 = 1;
				if (func_430(6, 18))
				{
					iLocal_769[0] = 0;
					iLocal_775[0] = 2;
					iLocal_769[1] = 1;
					iLocal_775[1] = 1;
					iLocal_769[2] = 0;
					iLocal_775[2] = 2;
					iLocal_769[3] = 0;
					iLocal_775[3] = 0;
					iLocal_769[4] = 0;
					iLocal_775[4] = 2;
				}
				else
				{
					iLocal_769[0] = 2;
					iLocal_775[0] = 1;
					iLocal_769[1] = 0;
					iLocal_775[1] = 0;
					iLocal_769[2] = 1;
					iLocal_775[2] = 0;
					iLocal_769[3] = 0;
					iLocal_775[3] = 1;
					iLocal_769[4] = 0;
					iLocal_775[4] = 2;
				}
				break;
			
			case 3:
				Local_551 = { 0f, 0f, -82.38f };
				Local_548 = { 548.82f, 2668.93f, (42.36f - 0.2f) };
				iLocal_539 = func_52(0);
				Local_543 = { 543.0796f, 2663.967f, 41.1565f };
				fLocal_546 = 228.4295f;
				iLocal_575 = 1;
				if (func_430(6, 18))
				{
					iLocal_769[0] = 1;
					iLocal_775[0] = 0;
					iLocal_769[1] = 2;
					iLocal_775[1] = 0;
					iLocal_769[2] = 1;
					iLocal_775[2] = 0;
					iLocal_769[3] = 0;
					iLocal_775[3] = 1;
					iLocal_769[4] = 0;
					iLocal_775[4] = 0;
				}
				else
				{
					iLocal_769[0] = 0;
					iLocal_775[0] = 0;
					iLocal_769[1] = 2;
					iLocal_775[1] = 1;
					iLocal_769[2] = 1;
					iLocal_775[2] = 1;
					iLocal_769[3] = 0;
					iLocal_775[3] = 0;
					iLocal_769[4] = 0;
					iLocal_775[4] = 0;
				}
				break;
			
			case 4:
				Local_551 = { 0f, 0f, 180f };
				Local_548 = { 2554.88f, 381.47f, (108.82f - 0.2f) };
				iLocal_539 = func_52(0);
				Local_543 = { 2549.85f, 387.1622f, 107.623f };
				fLocal_546 = 197.2994f;
				iLocal_575 = 1;
				if (func_430(6, 18))
				{
					iLocal_769[0] = 2;
					iLocal_775[0] = 0;
					iLocal_769[1] = 2;
					iLocal_775[1] = 1;
					iLocal_769[2] = 1;
					iLocal_775[2] = 1;
					iLocal_769[3] = 0;
					iLocal_775[3] = 0;
					iLocal_769[4] = 0;
					iLocal_775[4] = 1;
				}
				else
				{
					iLocal_769[0] = 0;
					iLocal_775[0] = 1;
					iLocal_769[1] = 1;
					iLocal_775[1] = 0;
					iLocal_769[2] = 0;
					iLocal_775[2] = 2;
					iLocal_769[3] = 0;
					iLocal_775[3] = 1;
					iLocal_769[4] = 0;
					iLocal_775[4] = 1;
				}
				break;
			
			case 5:
				Local_551 = { 0f, 0f, 155f };
				Local_548 = { 2676.26f, 3281.04f, (55.44f - 0.2f) };
				iLocal_539 = func_52(0);
				Local_543 = { 2671.351f, 3283.136f, 54.2411f };
				fLocal_546 = 296.5427f;
				iLocal_575 = 1;
				if (func_430(6, 18))
				{
					iLocal_769[0] = 2;
					iLocal_775[0] = 1;
					iLocal_769[1] = 0;
					iLocal_775[1] = 0;
					iLocal_769[2] = 1;
					iLocal_775[2] = 2;
					iLocal_769[3] = 0;
					iLocal_775[3] = 1;
					iLocal_769[4] = 0;
					iLocal_775[4] = 2;
				}
				else
				{
					iLocal_769[0] = 0;
					iLocal_775[0] = 2;
					iLocal_769[1] = 2;
					iLocal_775[1] = 1;
					iLocal_769[2] = 0;
					iLocal_775[2] = 2;
					iLocal_769[3] = 0;
					iLocal_775[3] = 0;
					iLocal_769[4] = 0;
					iLocal_775[4] = 2;
				}
				break;
			
			case 6:
				Local_551 = { 0f, 0f, 63.3f };
				Local_548 = { 1729.4f, 6417.08f, (35.24f - 0.2f) };
				iLocal_539 = func_52(0);
				Local_543 = { 1733.967f, 6421.495f, 34.0372f };
				fLocal_546 = 130.9518f;
				iLocal_575 = 1;
				if (func_430(6, 18))
				{
					iLocal_769[0] = 2;
					iLocal_775[0] = 2;
					iLocal_769[1] = 1;
					iLocal_775[1] = 0;
					iLocal_769[2] = 0;
					iLocal_775[2] = 0;
					iLocal_769[3] = 0;
					iLocal_775[3] = 0;
					iLocal_769[4] = 0;
					iLocal_775[4] = 0;
				}
				else
				{
					iLocal_769[0] = 1;
					iLocal_775[0] = 0;
					iLocal_769[1] = 0;
					iLocal_775[1] = 0;
					iLocal_769[2] = 1;
					iLocal_775[2] = 0;
					iLocal_769[3] = 0;
					iLocal_775[3] = 1;
					iLocal_769[4] = 0;
					iLocal_775[4] = 0;
				}
				break;
			
			case 7:
				Local_551 = { 0f, 0f, 117f };
				Local_548 = { 1959.4f, 3742.33f, (32.54f - 0.2f) };
				iLocal_539 = func_52(0);
				Local_543 = { 1958.92f, 3746.267f, 31.3438f };
				fLocal_546 = 73.6245f;
				iLocal_575 = 1;
				if (func_430(6, 18))
				{
					iLocal_769[0] = 0;
					iLocal_775[0] = 0;
					iLocal_769[1] = 1;
					iLocal_775[1] = 1;
					iLocal_769[2] = 0;
					iLocal_775[2] = 1;
					iLocal_769[3] = 0;
					iLocal_775[3] = 1;
					iLocal_769[4] = 0;
					iLocal_775[4] = 1;
				}
				else
				{
					iLocal_769[0] = 2;
					iLocal_775[0] = 0;
					iLocal_769[1] = 0;
					iLocal_775[1] = 0;
					iLocal_769[2] = 1;
					iLocal_775[2] = 1;
					iLocal_769[3] = 0;
					iLocal_775[3] = 0;
					iLocal_769[4] = 0;
					iLocal_775[4] = 1;
				}
				break;
			
			case 8:
				Local_551 = { 0f, 0f, 92f };
				Local_548 = { 25.03f, -1344.96f, (29.69f - 0.2f) };
				iLocal_539 = func_52(0);
				Local_543 = { 30.5721f, -1339.782f, 28.4939f };
				fLocal_546 = 110.7699f;
				iLocal_575 = 1;
				if (func_430(6, 18))
				{
					iLocal_769[0] = 0;
					iLocal_775[0] = 1;
					iLocal_769[1] = 2;
					iLocal_775[1] = 0;
					iLocal_769[2] = 0;
					iLocal_775[2] = 2;
					iLocal_769[3] = 0;
					iLocal_775[3] = 0;
					iLocal_769[4] = 0;
					iLocal_775[4] = 2;
				}
				else
				{
					iLocal_769[0] = 2;
					iLocal_775[0] = 1;
					iLocal_769[1] = 1;
					iLocal_775[1] = 0;
					iLocal_769[2] = 1;
					iLocal_775[2] = 2;
					iLocal_769[3] = 0;
					iLocal_775[3] = 1;
					iLocal_769[4] = 0;
					iLocal_775[4] = 2;
				}
				break;
			
			case 9:
				Local_551 = { 0f, 0f, 75f };
				Local_548 = { 373.68f, 328.56f, (103.77f - 0.2f) };
				iLocal_539 = func_52(0);
				Local_543 = { 376.2976f, 331.8158f, 102.5664f };
				fLocal_546 = 52.0064f;
				iLocal_575 = 1;
				if (func_430(6, 18))
				{
					iLocal_769[0] = 0;
					iLocal_775[0] = 2;
					iLocal_769[1] = 2;
					iLocal_775[1] = 1;
					iLocal_769[2] = 1;
					iLocal_775[2] = 0;
					iLocal_769[3] = 0;
					iLocal_775[3] = 1;
					iLocal_769[4] = 0;
					iLocal_775[4] = 0;
				}
				else
				{
					iLocal_769[0] = 2;
					iLocal_775[0] = 2;
					iLocal_769[1] = 1;
					iLocal_775[1] = 1;
					iLocal_769[2] = 0;
					iLocal_775[2] = 0;
					iLocal_769[3] = 0;
					iLocal_775[3] = 0;
					iLocal_769[4] = 0;
					iLocal_775[4] = 0;
				}
				break;
			
			case 10:
				Local_551 = { 0f, 0f, 0f };
				Local_548 = { 1165.96f, 2710.2f, (38.25f - 0.105f) };
				iLocal_539 = func_52(0);
				Local_543 = { 1168.971f, 2719.118f, 36.0632f };
				fLocal_546 = 136.5945f;
				iLocal_575 = 3;
				if (func_430(10, 22))
				{
					iLocal_769[0] = 1;
					iLocal_775[0] = 0;
					iLocal_769[1] = 0;
					iLocal_775[1] = 0;
					iLocal_769[2] = 1;
					iLocal_775[2] = 1;
					iLocal_769[3] = 0;
					iLocal_775[3] = 0;
					iLocal_769[4] = 1;
					iLocal_775[4] = 0;
				}
				else
				{
					iLocal_769[0] = 0;
					iLocal_775[0] = 0;
					iLocal_769[1] = 2;
					iLocal_775[1] = 0;
					iLocal_769[2] = 0;
					iLocal_775[2] = 1;
					iLocal_769[3] = 0;
					iLocal_775[3] = 1;
					iLocal_769[4] = 1;
					iLocal_775[4] = 0;
				}
				break;
			
			case 11:
				Local_551 = { 0f, 0f, -92f };
				Local_548 = { -2967.03f, 390.9f, (15.23f - 0.2f) };
				iLocal_539 = func_52(0);
				Local_543 = { -2962.983f, 391.9788f, 14.0433f };
				fLocal_546 = 176.1174f;
				iLocal_575 = 3;
				if (func_430(10, 22))
				{
					iLocal_769[0] = 2;
					iLocal_775[0] = 0;
					iLocal_769[1] = 1;
					iLocal_775[1] = 0;
					iLocal_769[2] = 1;
					iLocal_775[2] = 2;
					iLocal_769[3] = 0;
					iLocal_775[3] = 1;
					iLocal_769[4] = 1;
					iLocal_775[4] = 0;
				}
				else
				{
					iLocal_769[0] = 0;
					iLocal_775[0] = 1;
					iLocal_769[1] = 2;
					iLocal_775[1] = 1;
					iLocal_769[2] = 0;
					iLocal_775[2] = 2;
					iLocal_769[3] = 0;
					iLocal_775[3] = 0;
					iLocal_769[4] = 1;
					iLocal_775[4] = 0;
				}
				break;
			
			case 12:
				Local_551 = { 0f, 0f, -145f };
				Local_548 = { -1222.33f, -907.82f, (12.52f - 0.2f) };
				iLocal_539 = func_52(0);
				Local_543 = { -1218.283f, -915.7103f, 10.3264f };
				fLocal_546 = 43.8031f;
				iLocal_575 = 3;
				if (func_430(10, 22))
				{
					iLocal_769[0] = 2;
					iLocal_775[0] = 1;
					iLocal_769[1] = 1;
					iLocal_775[1] = 1;
					iLocal_769[2] = 0;
					iLocal_775[2] = 0;
					iLocal_769[3] = 0;
					iLocal_775[3] = 0;
					iLocal_769[4] = 1;
					iLocal_775[4] = 0;
				}
				else
				{
					iLocal_769[0] = 0;
					iLocal_775[0] = 2;
					iLocal_769[1] = 1;
					iLocal_775[1] = 0;
					iLocal_769[2] = 1;
					iLocal_775[2] = 0;
					iLocal_769[3] = 0;
					iLocal_775[3] = 1;
					iLocal_769[4] = 1;
					iLocal_775[4] = 0;
				}
				break;
			
			case 13:
				Local_551 = { 0f, 0f, 103f };
				Local_548 = { 1134.81f, -982.36f, (46.6f - 0.2f) };
				iLocal_539 = func_52(0);
				Local_543 = { 1130.155f, -979.2816f, 45.4158f };
				fLocal_546 = 269.2587f;
				iLocal_575 = 3;
				if (func_430(10, 22))
				{
					iLocal_769[0] = 2;
					iLocal_775[0] = 2;
					iLocal_769[1] = 2;
					iLocal_775[1] = 0;
					iLocal_769[2] = 0;
					iLocal_775[2] = 1;
					iLocal_769[3] = 0;
					iLocal_775[3] = 1;
					iLocal_769[4] = 1;
					iLocal_775[4] = 0;
				}
				else
				{
					iLocal_769[0] = 1;
					iLocal_775[0] = 0;
					iLocal_769[1] = 0;
					iLocal_775[1] = 0;
					iLocal_769[2] = 1;
					iLocal_775[2] = 1;
					iLocal_769[3] = 0;
					iLocal_775[3] = 0;
					iLocal_769[4] = 1;
					iLocal_775[4] = 0;
				}
				break;
			
			case 14:
				Local_551 = { 0f, 0f, -41f };
				Local_548 = { -1486.67f, -378.46f, (40.35f - 0.2f) };
				iLocal_539 = func_52(0);
				Local_543 = { -1479.163f, -375.0302f, 38.1633f };
				fLocal_546 = 36.5415f;
				iLocal_575 = 3;
				if (func_430(10, 22))
				{
					iLocal_769[0] = 0;
					iLocal_775[0] = 0;
					iLocal_769[1] = 2;
					iLocal_775[1] = 1;
					iLocal_769[2] = 0;
					iLocal_775[2] = 2;
					iLocal_769[3] = 0;
					iLocal_775[3] = 1;
					iLocal_769[4] = 1;
					iLocal_775[4] = 0;
				}
				else
				{
					iLocal_769[0] = 2;
					iLocal_775[0] = 0;
					iLocal_769[1] = 1;
					iLocal_775[1] = 0;
					iLocal_769[2] = 1;
					iLocal_775[2] = 2;
					iLocal_769[3] = 0;
					iLocal_775[3] = 0;
					iLocal_769[4] = 1;
					iLocal_775[4] = 0;
				}
				break;
			
			case 15:
				Local_551 = { 0f, 0f, 145f };
				Local_548 = { (1698.33f - 0.04f), 4923.33f, (42.12f - 0.06f) };
				iLocal_539 = func_52(0);
				Local_543 = { 1707.303f, 4918.31f, 41.0636f };
				fLocal_546 = 24.9178f;
				iLocal_575 = 2;
				if (func_430(8, 20))
				{
					iLocal_769[0] = 0;
					iLocal_775[0] = 1;
					iLocal_769[1] = 0;
					iLocal_775[1] = 0;
					iLocal_769[2] = 1;
					iLocal_775[2] = 0;
					iLocal_769[3] = 0;
					iLocal_775[3] = 0;
					iLocal_769[4] = 1;
					iLocal_775[4] = 0;
				}
				else
				{
					iLocal_769[0] = 2;
					iLocal_775[0] = 1;
					iLocal_769[1] = 1;
					iLocal_775[1] = 1;
					iLocal_769[2] = 0;
					iLocal_775[2] = 0;
					iLocal_769[3] = 0;
					iLocal_775[3] = 1;
					iLocal_769[4] = 1;
					iLocal_775[4] = 0;
				}
				break;
			
			case 16:
				Local_551 = { 0f, 0f, -87f };
				Local_548 = { -706.69f, -913.69f, (19.27f - 0.06f) };
				iLocal_539 = func_52(0);
				Local_543 = { -709.7998f, -907.1352f, 18.2156f };
				fLocal_546 = 291.6504f;
				iLocal_575 = 2;
				if (func_430(8, 20))
				{
					iLocal_769[0] = 0;
					iLocal_775[0] = 2;
					iLocal_769[1] = 1;
					iLocal_775[1] = 0;
					iLocal_769[2] = 1;
					iLocal_775[2] = 1;
					iLocal_769[3] = 0;
					iLocal_775[3] = 1;
					iLocal_769[4] = 1;
					iLocal_775[4] = 0;
				}
				else
				{
					iLocal_769[0] = 2;
					iLocal_775[0] = 2;
					iLocal_769[1] = 2;
					iLocal_775[1] = 0;
					iLocal_769[2] = 0;
					iLocal_775[2] = 1;
					iLocal_769[3] = 0;
					iLocal_775[3] = 0;
					iLocal_769[4] = 1;
					iLocal_775[4] = 0;
				}
				break;
			
			case 17:
				Local_551 = { 0f, 0f, -125f };
				Local_548 = { -47.23f, -1757.64f, (29.48f - 0.06f) };
				iLocal_539 = func_52(0);
				Local_543 = { -40.42f, -1751.423f, 28.421f };
				fLocal_546 = 145.6553f;
				iLocal_575 = 2;
				if (func_430(8, 20))
				{
					iLocal_769[0] = 1;
					iLocal_775[0] = 0;
					iLocal_769[1] = 1;
					iLocal_775[1] = 1;
					iLocal_769[2] = 1;
					iLocal_775[2] = 2;
					iLocal_769[3] = 0;
					iLocal_775[3] = 0;
					iLocal_769[4] = 1;
					iLocal_775[4] = 0;
				}
				else
				{
					iLocal_769[0] = 0;
					iLocal_775[0] = 0;
					iLocal_769[1] = 2;
					iLocal_775[1] = 0;
					iLocal_769[2] = 0;
					iLocal_775[2] = 2;
					iLocal_769[3] = 0;
					iLocal_775[3] = 1;
					iLocal_769[4] = 1;
					iLocal_775[4] = 0;
				}
				break;
			
			case 18:
				Local_551 = { 0f, 0f, -74f };
				Local_548 = { 1164.16f, -322.9f, (69.26f - 0.06f) };
				iLocal_539 = func_52(0);
				Local_543 = { 1159.682f, -314.254f, 68.2051f };
				fLocal_546 = 232.6337f;
				iLocal_575 = 2;
				if (func_430(8, 20))
				{
					iLocal_769[0] = 2;
					iLocal_775[0] = 0;
					iLocal_769[1] = 2;
					iLocal_775[1] = 1;
					iLocal_769[2] = 0;
					iLocal_775[2] = 0;
					iLocal_769[3] = 0;
					iLocal_775[3] = 1;
					iLocal_769[4] = 1;
					iLocal_775[4] = 0;
				}
				else
				{
					iLocal_769[0] = 0;
					iLocal_775[0] = 1;
					iLocal_769[1] = 2;
					iLocal_775[1] = 0;
					iLocal_769[2] = 0;
					iLocal_775[2] = 0;
					iLocal_769[3] = 0;
					iLocal_775[3] = 0;
					iLocal_769[4] = 1;
					iLocal_775[4] = 0;
				}
				break;
			
			case 19:
				Local_548 = { -1820.5f, 793.78f, (138.32f - 0.22f) };
				Local_551 = { 0f, 0f, -47.3f };
				iLocal_539 = func_52(0);
				Local_543 = { -1828.907f, 799.6096f, 137.1776f };
				fLocal_546 = 247.1234f;
				iLocal_575 = 2;
				if (func_430(8, 20))
				{
					iLocal_769[0] = 2;
					iLocal_775[0] = 1;
					iLocal_769[1] = 0;
					iLocal_775[1] = 0;
					iLocal_769[2] = 0;
					iLocal_775[2] = 1;
					iLocal_769[3] = 0;
					iLocal_775[3] = 0;
					iLocal_769[4] = 1;
					iLocal_775[4] = 0;
				}
				else
				{
					iLocal_769[0] = 0;
					iLocal_775[0] = 2;
					iLocal_769[1] = 2;
					iLocal_775[1] = 1;
					iLocal_769[2] = 0;
					iLocal_775[2] = 1;
					iLocal_769[3] = 0;
					iLocal_775[3] = 1;
					iLocal_769[4] = 1;
					iLocal_775[4] = 0;
				}
				break;
		}
		Local_548 = { unk_0xF2A6E8EA57F9D501(Local_548, Local_551.f_2, 0f, 0.075f, 0f) };
		Local_540 = { unk_0xFC2542C169B039F2("mp_am_hold_up", "holdup_victim_20s", Local_548, Local_551, 0, 2) };
		Var0 = { unk_0xEF996771DB3B2061("mp_am_hold_up", "holdup_victim_20s", Local_548, Local_551, 0, 2) };
		Local_85.f_44 = Var0.f_2;
		Local_564 = { unk_0xFC2542C169B039F2("mp_am_hold_up", "holdup_victim_20s_bag", Local_548, Local_551, 0, 2) };
		Var0 = { unk_0xEF996771DB3B2061("mp_am_hold_up", "holdup_victim_20s_bag", Local_548, Local_551, 0, 2) };
		uLocal_567 = Var0.f_2;
		Local_568 = { unk_0xFC2542C169B039F2("mp_am_hold_up", "holdup_victim_20s_till", Local_548, Local_551, 0, 2) };
		Var0 = { unk_0xEF996771DB3B2061("mp_am_hold_up", "holdup_victim_20s_till", Local_548, Local_551, 0, 2) };
		uLocal_571 = Var0.f_2;
		Local_481.f_0 = func_429(Local_481.f_50);
		if (unk_0xE85391CF212DE622())
		{
			Local_85.f_47 = iLocal_769[0];
			if (Local_85.f_47 == 0)
			{
				StringCopy(&(Local_85.f_52), "MP_M_SHOPKEEP_01_PAKISTANI_MINI_01", 64);
				StringCopy(&(Local_85.f_48), "StoreOwner2", 16);
			}
			else if (Local_85.f_47 == 1)
			{
				StringCopy(&(Local_85.f_52), "MP_M_SHOPKEEP_01_LATINO_MINI_01", 64);
				StringCopy(&(Local_85.f_48), "StoreOwner", 16);
			}
			else
			{
				StringCopy(&(Local_85.f_52), "MP_M_SHOPKEEP_01_CHINESE_MINI_01", 64);
				StringCopy(&(Local_85.f_48), "StoreOwner3", 16);
			}
		}
		if (!BitTest(Local_481.f_52, 29))
		{
			unk_0xC0409460F325D2EB(Local_548, 0.5f, iLocal_572, 1);
			unk_0xECDAB41968FF21A8(&(Local_481.f_52), 29);
		}
		return 1;
	}
	return 0;
}

int func_429(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 18:
			return 2;
		
		case 15:
			return 3;
		
		case 19:
			return 4;
		
		case 10:
			return 5;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		case 13:
			return 8;
		
		case 14:
			return 9;
		
		case 2:
			return 10;
		
		case 1:
			return 11;
		
		case 3:
			return 12;
		
		case 4:
			return 13;
		
		case 5:
			return 14;
		
		case 6:
			return 15;
		
		case 7:
			return 16;
		
		case 8:
			return 17;
		
		case 9:
			return 18;
		
		case 0:
			return -2;
		
		default:
	}
	return -1;
}

bool func_430(int iParam0, int iParam1)
{
	return func_431(unk_0x30DFE1FFD2CC7420(), iParam0, iParam1);
}

int func_431(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_432(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1393.091f, 3607.383f, 33.9809f };
		*uParam2 = { 1391.178f, 3612.516f, (38.3614f - 0.2f) };
		*uParam3 = 12.5f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3045.013f, 585.9666f, (10.35421f - 0.2f) };
		*uParam2 = { -3048.714f, 584.7961f, 6.948262f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3247.313f, 1003.657f, (15.27433f - 0.2f) };
		*uParam2 = { -3251.157f, 1003.984f, 11.83501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 546.5474f, 2665.642f, (44.60108f - 0.2f) };
		*uParam2 = { 547.054f, 2661.794f, 41.15667f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2552f, 384.2527f, (111.0656f - 0.2f) };
		*uParam2 = { 2548.145f, 384.4133f, 107.6241f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2674.946f, 3284.833f, (57.68088f - 0.2f) };
		*uParam2 = { 2671.569f, 3286.699f, 54.24464f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1733.119f, 6418.579f, (37.48002f - 0.2f) };
		*uParam2 = { 1734.839f, 6422.032f, 34.03751f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1960.224f, 3746.258f, (34.7878f - 0.2f) };
		*uParam2 = { 1958.295f, 3749.599f, 31.34522f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 27.71382f, -1341.968f, (31.93314f - 0.2f) };
		*uParam2 = { 27.71049f, -1338.109f, 28.49479f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 377.0183f, 330.808f, (106.0112f - 0.2f) };
		*uParam2 = { 377.9499f, 334.5523f, 102.567f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1167.015f, 2711.601f, (40.66147f - 0.2f) };
		*uParam2 = { 1167.082f, 2720.243f, 36.06501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2965.705f, 389.6696f, (17.64162f - 0.2f) };
		*uParam2 = { -2957.095f, 389.139f, 13.04323f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1222.402f, -909.5575f, (14.92466f - 0.2f) };
		*uParam2 = { -1217.682f, -916.7974f, 10.33735f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.284f, -981.473f, (49.01414f - 0.2f) };
		*uParam2 = { 1124.708f, -982.6027f, 44.42008f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.883f, -378.2694f, (42.76172f - 0.2f) };
		*uParam2 = { -1478.771f, -372.1664f, 38.16948f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1704.556f, 4921.806f, (44.02687f - 0.2f) };
		*uParam2 = { 1708.285f, 4919.196f, 41.06359f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -709.019f, -907.7159f, (21.17918f - 0.2f) };
		*uParam2 = { -709.0177f, -903.1516f, 18.21618f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.16617f, -1751.578f, (31.37973f - 0.2f) };
		*uParam2 = { -42.22961f, -1748.09f, 28.42099f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1160.825f, -317.4214f, (71.16085f - 0.2f) };
		*uParam2 = { 1160.033f, -312.932f, 68.20509f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1826.218f, 796.6393f, (140.1334f - 0.2f) };
		*uParam2 = { -1829.301f, 799.9996f, 137.18f };
		*uParam3 = 4f;
	}
}

void func_433(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1395.548f, 3600.575f, 33.98914f };
		*uParam2 = { 1392.08f, 3609.983f, (37.33543f - 0.2f) };
		*uParam3 = 12.25f;
	}
	if (iParam0 == 1)
	{
		*uParam1 = { -3038.657f, 589.5176f, 6.904751f };
		*uParam2 = { -3045.476f, 587.4066f, (11.31222f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 2)
	{
		*uParam1 = { -3240.032f, 1004.482f, 11.8307f };
		*uParam2 = { -3247.188f, 1005.107f, (16.25224f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 3)
	{
		*uParam1 = { 544.2278f, 2672.5f, 41.1565f };
		*uParam2 = { 545.201f, 2665.442f, (45.69155f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 4)
	{
		*uParam1 = { 2559.176f, 385.3936f, 107.623f };
		*uParam2 = { 2552.054f, 385.6057f, (112.1638f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 5)
	{
		*uParam1 = { 2681.864f, 3282.603f, 54.24114f };
		*uParam2 = { 2675.586f, 3285.981f, (58.79021f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 6)
	{
		*uParam1 = { 1731.237f, 6411.557f, 34.03723f };
		*uParam2 = { 1734.383f, 6417.952f, (38.58461f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 7)
	{
		*uParam1 = { 1964.999f, 3740.795f, 31.34375f };
		*uParam2 = { 1961.384f, 3746.928f, (35.89571f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 8)
	{
		*uParam1 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
		*uParam2 = { Vector(33.03834f, -1341.382f, 27.05614f) - Vector(0.2f, 0.2f, 0.2f) + Vector(0f, -0.4f, 2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 9)
	{
		*uParam1 = { 376.6309f, 323.5533f, 102.5664f };
		*uParam2 = { 378.3253f, 330.4793f, (107.1095f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 10)
	{
		*uParam1 = { 1166.497f, 2703.756f, 37.06307f };
		*uParam2 = { 1166.525f, 2711.974f, (41.66307f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 11)
	{
		*uParam1 = { -2973.512f, 390.7873f, 14.04322f };
		*uParam2 = { -2965.288f, 390.2452f, (18.54322f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 12)
	{
		*uParam1 = { -1226.417f, -902.6738f, 11.33496f };
		*uParam2 = { -1221.765f, -909.5887f, (15.82626f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 13)
	{
		*uParam1 = { 1141.35f, -980.9322f, 45.41594f };
		*uParam2 = { 1132.976f, -982.0952f, (49.91574f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 14)
	{
		*uParam1 = { -1490.949f, -383.4771f, 39.16332f };
		*uParam2 = { -1485.006f, -377.6167f, (43.66332f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 15)
	{
		*uParam1 = { 1698.98f, 4929.093f, 41.06357f };
		*uParam2 = { 1705.233f, 4924.578f, (45.60386f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 16)
	{
		*uParam1 = { -711.77f, -916.4685f, 18.21557f };
		*uParam2 = { -711.7368f, -908.7517f, (22.76488f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 17)
	{
		*uParam1 = { -52.90452f, -1756.474f, 28.42097f };
		*uParam2 = { -47.92523f, -1750.614f, (32.94246f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 18)
	{
		*uParam1 = { 1159.633f, -326.5087f, 68.20507f };
		*uParam2 = { 1158.335f, -318.9123f, (72.74828f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 19)
	{
		*uParam1 = { -1822.373f, 788.2851f, 137.1876f };
		*uParam2 = { -1827.484f, 794.0739f, (141.6933f - 0.2f) };
		*uParam3 = 14f;
	}
}

void func_434(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_435(iParam0, uParam5, uParam6);
	switch (iParam0)
	{
		case 0:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0xAF0CB15312D8B8E3(*uParam5, "v_methlab");
			}
			*uParam2 = joaat("V_39_ShopRm");
			*uParam4 = joaat("V_39_StairsRm");
			*uParam3 = -1;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0xAF0CB15312D8B8E3(*uParam5, "v_shop_247");
			}
			*uParam2 = joaat("V_66_ShopRm");
			*uParam4 = joaat("V_66_BackRm");
			*uParam3 = -1;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0xAF0CB15312D8B8E3(*uParam5, "v_gen_liquor");
			}
			*uParam2 = joaat("liquor_front");
			*uParam4 = joaat("liquor_back");
			*uParam3 = -1;
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0xAF0CB15312D8B8E3(*uParam5, "v_gasstation");
			}
			*uParam2 = joaat("V_68_GasRm");
			*uParam4 = joaat("V_68_BackRm");
			*uParam3 = joaat("V_68_Toilets");
			break;
	}
}

void func_435(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1394.169f, 3599.86f, 34.0121f };
			*uParam2 = { 1395.548f, 3600.575f, 33.98914f };
			break;
		
		case 1:
			*uParam1 = { -3038.908f, 589.5187f, 6.9048f };
			*uParam2 = { -3038.657f, 589.5176f, 6.904751f };
			break;
		
		case 2:
			*uParam1 = { -3240.317f, 1004.433f, 11.8307f };
			*uParam2 = { -3240.032f, 1004.482f, 11.8307f };
			break;
		
		case 3:
			*uParam1 = { 544.2802f, 2672.811f, 41.1566f };
			*uParam2 = { 544.2278f, 2672.5f, 41.1565f };
			break;
		
		case 4:
			*uParam1 = { 2559.247f, 385.5266f, 107.623f };
			*uParam2 = { 2559.176f, 385.3936f, 107.623f };
			break;
		
		case 5:
			*uParam1 = { 2682.003f, 3282.543f, 54.2411f };
			*uParam2 = { 2681.864f, 3282.603f, 54.24114f };
			break;
		
		case 6:
			*uParam1 = { 1731.21f, 6411.403f, 34.0372f };
			*uParam2 = { 1731.237f, 6411.557f, 34.03723f };
			break;
		
		case 7:
			*uParam1 = { 1965.054f, 3740.555f, 31.3448f };
			*uParam2 = { 1964.999f, 3740.795f, 31.34375f };
			break;
		
		case 8:
			*uParam1 = { Vector(28.5036f, -1348.813f, 27.0641f) + Vector(0f, -0.4f, 2f) };
			*uParam2 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
			break;
		
		case 9:
			*uParam1 = { 376.6533f, 323.6471f, 102.5664f };
			*uParam2 = { 376.6309f, 323.5533f, 102.5664f };
			break;
		
		case 10:
			*uParam1 = { Vector(37.1573f, 2703.114f, 1195.432f) + Vector(0f, 0.39f, -29.04f) };
			*uParam2 = { 1166.497f, 2703.756f, 37.06307f };
			break;
		
		case 11:
			*uParam1 = { -2973.262f, 390.8184f, 14.0433f };
			*uParam2 = { -2973.512f, 390.7873f, 14.04322f };
			break;
		
		case 12:
			*uParam1 = { -1226.464f, -902.5864f, 11.2783f };
			*uParam2 = { -1226.417f, -902.6738f, 11.33496f };
			break;
		
		case 13:
			*uParam1 = { 1141.36f, -980.8802f, 45.4155f };
			*uParam2 = { 1141.35f, -980.9322f, 45.41594f };
			break;
		
		case 14:
			*uParam1 = { -1491.057f, -383.5728f, 39.1706f };
			*uParam2 = { -1490.949f, -383.4771f, 39.16332f };
			break;
		
		case 15:
			*uParam1 = { 1698.808f, 4929.198f, 41.0783f };
			*uParam2 = { 1698.98f, 4929.093f, 41.06357f };
			break;
		
		case 16:
			*uParam1 = { -711.721f, -916.6965f, 18.2145f };
			*uParam2 = { -711.77f, -916.4685f, 18.21557f };
			break;
		
		case 17:
			*uParam1 = { -53.124f, -1756.405f, 28.421f };
			*uParam2 = { -52.90452f, -1756.474f, 28.42097f };
			break;
		
		case 18:
			*uParam1 = { 1159.542f, -326.6986f, 67.923f };
			*uParam2 = { 1159.633f, -326.5087f, 68.20507f };
			break;
		
		case 19:
			*uParam1 = { -1822.287f, 788.006f, 137.1859f };
			*uParam2 = { -1822.373f, 788.2851f, 137.1876f };
			break;
	}
}

int func_436(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	
	fVar1 = 9999.9f;
	bVar2 = false;
	while (bVar2 < 20)
	{
		fVar0 = unk_0x2E496FE654DA4166(func_91(unk_0x93E99A2DBCBA9CFA()), func_437(bVar2), 1);
		if (fVar0 < fVar1)
		{
			if (bParam1)
			{
				if (!BitTest(Global_2657418.f_62, bVar2) && BitTest(Global_2657418.f_64, bVar2))
				{
					fVar1 = fVar0;
					*uParam0 = bVar2;
				}
			}
			else
			{
				fVar1 = fVar0;
				*uParam0 = bVar2;
			}
		}
		bVar2++;
	}
	return 1;
}

Vector3 func_437(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	
	func_435(iParam0, &Var0, &uVar3);
	return Var0;
}

int func_438(int iParam0)
{
	return Local_160[iParam0 /*10*/].f_4;
}

void func_439()
{
	Global_2683862.f_785.f_28 = 0;
}

void func_440()
{
	if (Global_1574582.f_1 == 1)
	{
		func_441(7, 0, 1);
		Global_1574582.f_1 = 0;
		Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_9 = 0;
	}
}

void func_441(int iParam0, int iParam1, bool bParam2)
{
	if (func_411())
	{
		if (iParam1 == 1)
		{
			if (Global_2793044.f_4492 == -1)
			{
				Global_2793044.f_4492 = Global_262145.f_27184;
			}
			func_442(&(Global_2793044.f_4490), 0, 0);
			if (bParam2)
			{
				if (Global_2793044.f_4495 == -1)
				{
					Global_2793044.f_4495 = Global_262145.f_27185;
				}
				func_442(&(Global_2793044.f_4493), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_8 = 0;
				func_410(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1894573[unk_0x93E99A2DBCBA9CFA() /*608*/].f_8 = 0;
			func_410(1);
		}
		if ((!unk_0x1758F8A8511510AB() && !func_409()) && !func_408(unk_0x93E99A2DBCBA9CFA()))
		{
			Global_1057408 = 0;
		}
		unk_0xF491DE134E08172A(0, -1, -1, iParam0);
	}
}

void func_442(var uParam0, bool bParam1, bool bParam2)
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

void func_443()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!func_46(unk_0x93E99A2DBCBA9CFA(), 1, 1))
	{
		iVar0 = 1;
		if (BitTest(Local_481.f_53, 6) && !BitTest(Local_481.f_53, 5))
		{
			iVar1 = unk_0x6CD066255FC6B2AA(-1);
			iVar2 = 0;
			unk_0xECDAB41968FF21A8(&iVar2, 8);
			unk_0xECDAB41968FF21A8(&iVar2, 4);
			unk_0xECDAB41968FF21A8(&iVar2, 1);
			if (iLocal_798 > Global_262145.f_177)
			{
				iLocal_798 = Global_262145.f_177;
			}
			if (iVar1 < iLocal_798)
			{
				if (iVar1 > 0)
				{
					if (func_51(func_52(1)))
					{
						if (unk_0x6C14306DA3F08F67(iVar1, 0, 0, 0, &uVar3, -1, 0))
						{
							if (func_219())
							{
								if (!BitTest(Global_2793044.f_7, 1))
								{
									Global_2793044.f_5049 = iVar1;
									Global_2793044.f_5050 = iVar2;
									Global_2793044.f_5051 = { unk_0x2B615FCF11D3E1D3(unk_0xC1A5EC5C986B98AD(), 1067030938, 1069547520) };
									func_209(&(Global_2793044.f_5048), -1135378931, 537254313, 1474183246, 1022400740, Global_2793044.f_5049, 1, 3);
									unk_0xECDAB41968FF21A8(&(Global_2793044.f_7), 1);
									iLocal_798 = 0;
									unk_0xECDAB41968FF21A8(&(Local_481.f_53), 5);
								}
							}
							else
							{
								func_445(joaat("pickup_money_variable"), unk_0x2B615FCF11D3E1D3(unk_0xC1A5EC5C986B98AD(), 1067030938, 1069547520), iVar2, iVar1, func_52(1), 0, 0);
								func_204(-iVar1, 1, 1, 1092616192);
								unk_0x52623CC468B35566(iVar1, 0, 0);
								func_208(1022400740, iVar1, &uVar4, 0, 0, 0);
								iLocal_798 = 0;
								func_444();
								unk_0xECDAB41968FF21A8(&(Local_481.f_53), 5);
							}
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
			else if (iLocal_798 > 0)
			{
				if (func_51(func_52(1)))
				{
					if (unk_0x6C14306DA3F08F67(iLocal_798, 0, 0, 0, &uVar3, -1, 0))
					{
						if (func_219())
						{
							if (!BitTest(Global_2793044.f_7, 1))
							{
								Global_2793044.f_5049 = iLocal_798;
								Global_2793044.f_5050 = iVar2;
								Global_2793044.f_5051 = { unk_0x2B615FCF11D3E1D3(unk_0xC1A5EC5C986B98AD(), 1067030938, 1069547520) };
								func_209(&(Global_2793044.f_5048), -1135378931, 537254313, 1474183246, 1022400740, Global_2793044.f_5049, 1, 3);
								unk_0xECDAB41968FF21A8(&(Global_2793044.f_7), 1);
								iLocal_798 = 0;
								unk_0xECDAB41968FF21A8(&(Local_481.f_53), 5);
							}
						}
						else
						{
							func_445(joaat("pickup_money_variable"), unk_0x2B615FCF11D3E1D3(unk_0xC1A5EC5C986B98AD(), 1067030938, 1069547520), iVar2, iLocal_798, func_52(1), 0, 0);
							func_204(-iLocal_798, 1, 1, 1092616192);
							unk_0x52623CC468B35566(iLocal_798, 0, 0);
							func_208(1022400740, iLocal_798, &uVar5, 0, 0, 0);
							iLocal_798 = 0;
							func_444();
							unk_0xECDAB41968FF21A8(&(Local_481.f_53), 5);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
		}
		if (iVar0 == 1)
		{
			func_476();
		}
		else
		{
			return;
		}
	}
}

void func_444()
{
	Global_2793044.f_283 = 0;
	Global_2793044.f_284 = 0;
	Global_2793044.f_285 = 0;
}

struct<5> func_445(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	struct<5> Var0;
	
	Var0 = 123;
	if (func_453() && func_452(iParam0))
	{
		Var0 = { func_446(iParam0, Param1, iParam4, iParam5, iParam6, bParam7) };
	}
	else
	{
		Var0.f_4 = unk_0x16526865BBC2DF87(iParam0, Param1, iParam4, iParam5, iParam6, bParam7, iParam8);
	}
	return Var0;
}

struct<5> func_446(int iParam0, struct<3> Param1, var uParam4, var uParam5, var uParam6, bool bParam7)
{
	struct<5> Var0;
	int iVar5;
	struct<5> Var6;
	int iVar11;
	
	Var0 = 123;
	if (func_451() == -1)
	{
		return Var0;
	}
	iVar5 = func_450(-1);
	if (iVar5 == -1)
	{
		return Var0;
	}
	Var6 = 123;
	Var6.f_0 = iParam0;
	Var6.f_1 = { Param1 };
	if (func_447(&Var6) != -1)
	{
		return Var0;
	}
	unk_0xECDAB41968FF21A8(&uParam4, 5);
	Var6.f_4 = unk_0x03EFEB142988DB87(iParam0, Param1, uParam4, uParam5, uParam6, bParam7, 0);
	iVar11 = unk_0xD056B8CB0E6A5169();
	if (bParam7)
	{
		Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_12 = unk_0x63C7B2D430A46FC3();
		Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_13 = unk_0xCF6C13BA964C2E66();
		if (Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_13 == 0)
		{
			Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_13 = unk_0x3B01E4A065DEF5C7();
			Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_11 = 1;
		}
		else
		{
			Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_11 = 2;
		}
	}
	Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/] = { Var6 };
	Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_5 = { Param1 };
	Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_8 = uParam4;
	Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_9 = uParam5;
	Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_10 = uParam6;
	return Var6;
}

int func_447(var uParam0)
{
	int iVar0;
	
	if (!func_449(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_448(uParam0, &(Global_2652258.f_2452[iVar0 /*16*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_448(var uParam0, var uParam1)
{
	if ((*uParam0 == *uParam1 && func_136(uParam0->f_1, uParam1->f_1, 0)) && uParam0->f_4 == uParam1->f_4)
	{
		return 1;
	}
	return 0;
}

int func_449(var uParam0)
{
	if ((*uParam0 == 123 || func_270(uParam0->f_1)) || uParam0->f_4 == 0)
	{
		return 0;
	}
	return 1;
}

int func_450(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = unk_0xD056B8CB0E6A5169();
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_449(&(Global_1914091[iParam0 /*297*/].f_98.f_21[iVar1 /*14*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_451()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_449(&(Global_2652258.f_2452[iVar1 /*16*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_452(int iParam0)
{
	switch (iParam0)
	{
		case joaat("pickup_money_variable"):
		case joaat("pickup_money_case"):
		case joaat("pickup_money_wallet"):
		case joaat("pickup_money_purse"):
		case joaat("pickup_money_dep_bag"):
		case joaat("pickup_money_med_bag"):
		case joaat("pickup_money_paper_bag"):
		case joaat("pickup_money_security_case"):
		case joaat("pickup_gang_attack_money"):
			return 1;
		
		default:
	}
	return 0;
}

var func_453()
{
	return Global_262145.f_30937;
}

int func_454()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			return 1;
		}
	}
	if (func_461())
	{
		return 1;
	}
	if (Global_2696915)
	{
		return 1;
	}
	if (func_460())
	{
		return 1;
	}
	if (func_459(159))
	{
		if (!func_458())
		{
			return 1;
		}
	}
	if (func_459(157))
	{
		return 1;
	}
	if (!unk_0x67EBFCF2F78761B9())
	{
		return 1;
	}
	if (func_455() != 0)
	{
		if (unk_0x24B651D85CCE5EB4(func_455()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_455()
{
	switch (func_457())
	{
		case 0:
			return func_456();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_456()
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_457()
{
	return Global_32163;
}

bool func_458()
{
	return Global_2683862.f_698;
}

int func_459(int iParam0)
{
	if (unk_0x36D3321E138A43F0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_460()
{
	return Global_2694524;
}

bool func_461()
{
	return Global_2683862.f_693;
}

void func_462()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_463(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	var uVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x9AA69AA7F99F66A2())
		{
			unk_0xD111D6644D1D5BD5(0);
		}
	}
	if (func_474())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0xA26A9A07F761D8F8())
	{
		uVar0 = iParam2;
		unk_0xE333240A90F2FF3C(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0x1758F8A8511510AB())
		{
			bVar1 = false;
		}
		if (!func_472())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0xE6DEE82DB0922DF0(iParam0) && (unk_0x48DC6A21D1CAD89C(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x055111B11E6624FD(unk_0xF2CFBB1105511E1A(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0xF2CFBB1105511E1A(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0xA26A9A07F761D8F8())
				{
					unk_0x0D78C94B1B789F7C(1);
				}
				else if (bVar14 || (!func_87(unk_0x93E99A2DBCBA9CFA(), 0) && !func_471()))
				{
					unk_0x724FFAED1C56CE2B(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0xA26A9A07F761D8F8() && !bVar19)
					{
						unk_0x0D78C94B1B789F7C(0);
					}
					Global_2657589[iParam0 /*466*/].f_254 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_468(0, 0, 0);
					if (bVar25)
					{
						unk_0x3EF548873C55CA64();
					}
				}
				if (!func_467(uVar27) && !unk_0x24405041A9F1A910(uVar27))
				{
					if (!bVar22)
					{
						unk_0xDDE449983CE7572E(uVar27, true, 0);
					}
				}
				if (!unk_0xDC116D955A63BDBE(uVar27))
				{
					if (!bVar21)
					{
						unk_0x2718E9CC165A99F6(uVar27, false);
					}
					unk_0xAD02BD8A749B79F9(uVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x2718E9CC165A99F6(uVar27, false);
				}
				unk_0xD14067404D35AAE7(uVar27, true);
				unk_0xA7225B88CE344621(iParam0, 0);
				unk_0xD99DA01241D40C5D(iParam0, 0);
				if (unk_0x1951CE8AED052DA4(uVar27) && unk_0x655790C883F82CEB(uVar27))
				{
					unk_0xC7A494C74ED33C50(uVar27);
				}
				unk_0xAC2C285C82A9244C(uVar27, 1);
				if (unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()) == 0)
				{
					func_466();
					func_465();
				}
				if (unk_0xCB964814D9915DE0())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x58A962BEF2DDE1DF())
				{
				}
				Global_2657589[iParam0 /*466*/].f_255 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2635559.f_2681)
				{
					Global_2635559.f_2681 = 0;
				}
			}
			else
			{
				if (!func_467(uVar27) && !unk_0x24405041A9F1A910(uVar27))
				{
					if (!bVar22)
					{
						unk_0xDDE449983CE7572E(uVar27, !bVar15, 0);
					}
					if (!unk_0xDC116D955A63BDBE(uVar27))
					{
						if (!bVar21)
						{
							unk_0x2718E9CC165A99F6(uVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0xAD02BD8A749B79F9(uVar27, 1);
						}
					}
					if (func_464(Global_4718592.f_166301))
					{
						unk_0x2718E9CC165A99F6(uVar27, true);
					}
				}
				if (Global_1575035)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0xA7225B88CE344621(iParam0, 0);
				}
				else
				{
					unk_0xA7225B88CE344621(iParam0, 1);
				}
				unk_0xD14067404D35AAE7(uVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x53E0F2012E168A73(uVar27) && !unk_0x3C3D6D026CF7F51B(uVar27, 0))
					{
						unk_0x35DD50D05C962B6A(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0xE333240A90F2FF3C(iParam0, bParam1, iVar28);
		}
	}
}

bool func_464(int iParam0)
{
	return iParam0 == 17;
}

void func_465()
{
	struct<3> Var0;
	
	Global_2672505.f_1023 = 0;
	Global_2672505.f_1024 = 0;
	Global_2672505.f_1025 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672505.f_1030 = -1;
	Global_2672505.f_1031 = 0;
	Global_2635559.f_2692 = { Var0 };
}

void func_466()
{
	Global_2635559.f_702 = 0;
	Global_2635559.f_2735 = 0;
	Global_2635559.f_515 = 0;
	Global_2635559.f_606 = 0;
	Global_2657589[unk_0x93E99A2DBCBA9CFA() /*466*/].f_217 = 0;
	Global_2635559.f_2690 = 0;
}

int func_467(int iParam0)
{
	int iVar0;
	
	if (unk_0x3C3D6D026CF7F51B(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xF5F493B789EA063E(iParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_468(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x055111B11E6624FD(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0x7DE17ACDD8BA2642(iParam1))
		{
			if (unk_0x60A06DE259634304(iParam1))
			{
				if (!unk_0x44C1C56CBB49373F(unk_0x93E99A2DBCBA9CFA(), unk_0xB850F932D03EF34D(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_470();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x84365510DF670D46(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xECDAB41968FF21A8(&(Global_2621446.f_67), 1);
			}
		}
		if (func_87(unk_0x93E99A2DBCBA9CFA(), 0))
		{
			unk_0xBD35A36DC2D7FB43(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x7C5666BA9400B9BF(iParam0, iParam1);
		}
		unk_0xC05C32F03C89FD59(iParam0, iParam1);
		func_469(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_469(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD19BD90E0B76FB05(iVar0, iParam1, 1);
	}
}

void func_470()
{
	int iVar0;
	
	if (!unk_0x8253CEEA17ED481B())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0x80A3F4E694565F6A(iVar0);
				iVar0++;
			}
			unk_0xECDAB41968FF21A8(&(Global_2621446.f_67), 2);
			unk_0xECDAB41968FF21A8(&(Global_2621446.f_67), 0);
		}
	}
}

bool func_471()
{
	return BitTest(Global_2621446, 3);
}

int func_472()
{
	if (func_473() == 0)
	{
		return 1;
	}
	return 0;
}

int func_473()
{
	return Global_1574632.f_18;
}

int func_474()
{
	if (BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_861, 2) && !Global_2684799.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

bool func_475(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2683862.f_785.f_28 && unk_0x14580F20CBCE4FA9(unk_0x688846D56810779A()) == Global_2683862.f_785.f_31);
	}
	return Global_2683862.f_785.f_28;
}

void func_476()
{
	int iVar0;
	
	Global_2793044.f_8 = 0;
	Global_1983438 = -1;
	if (unk_0xA26A9A07F761D8F8())
	{
		if (!func_425(Local_85.f_0))
		{
			if (unk_0xFE2AB315FD8C7A6F(Local_85.f_0) || (!unk_0xDD2D9A241E18E942(Local_85.f_0) && unk_0xE85391CF212DE622()))
			{
				unk_0xBB5C1E4A07AE1774(unk_0x0DB8386015E986B7(Local_85.f_0), 0);
				unk_0x0F2FEB47E011668F(unk_0x0DB8386015E986B7(Local_85.f_0));
				if (BitTest(Local_481.f_52, 22))
				{
					if (BitTest(Local_481.f_52, 20))
					{
						if (Local_85.f_3 != 7)
						{
							if (!BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 9))
							{
								unk_0x909F139DC199D8E0(unk_0x0DB8386015E986B7(Local_85.f_0));
								unk_0x3D7110D966B0CEA2(unk_0x0DB8386015E986B7(Local_85.f_0), uLocal_558);
								unk_0xC5B2830898581862(unk_0x0DB8386015E986B7(Local_85.f_0), 0);
							}
						}
						else if (unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("script_task_combat_hated_targets_around_ped")) != 0 && unk_0xF5F493B789EA063E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("script_task_combat_hated_targets_around_ped")) != 1)
						{
							unk_0x909F139DC199D8E0(unk_0x0DB8386015E986B7(Local_85.f_0));
							if (!unk_0xED31EFCAA05B93ED(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("weapon_pistol"), 0))
							{
								unk_0x44EBC7775DAE912E(unk_0x0DB8386015E986B7(Local_85.f_0), joaat("weapon_pistol"), 25000, 1);
								unk_0x55B25C3B4CEEEF4B(unk_0x0DB8386015E986B7(Local_85.f_0), 30);
							}
							func_233(4);
							unk_0xB7EB8CCA28444BAB(unk_0x0DB8386015E986B7(Local_85.f_0), 20f, 0);
						}
					}
					else if ((BitTest(Local_85.f_25, 3) || !func_10()) || !func_480())
					{
						if (!BitTest(Local_160[unk_0xD378D2332270959A() /*10*/], 9))
						{
							unk_0x909F139DC199D8E0(unk_0x0DB8386015E986B7(Local_85.f_0));
							unk_0x3D7110D966B0CEA2(unk_0x0DB8386015E986B7(Local_85.f_0), uLocal_558);
							unk_0xC5B2830898581862(unk_0x0DB8386015E986B7(Local_85.f_0), 0);
						}
					}
					else
					{
						unk_0x909F139DC199D8E0(unk_0x0DB8386015E986B7(Local_85.f_0));
						unk_0x71A535529C1CA5DF(unk_0x0DB8386015E986B7(Local_85.f_0), 1);
						unk_0x56FD1401249AC499(unk_0x0DB8386015E986B7(Local_85.f_0), -1);
						unk_0xC5B2830898581862(unk_0x0DB8386015E986B7(Local_85.f_0), 0);
					}
				}
			}
		}
		if ((BitTest(Local_85.f_25, 3) || !func_10()) || unk_0xA9B8A7219CCBCD56() <= 1)
		{
			if (unk_0x7E2E2E8A648611F4(Local_85.f_14))
			{
				if (unk_0xFE2AB315FD8C7A6F(Local_85.f_14))
				{
					unk_0xA81AA70A4D25E140(unk_0xDCE61FCD9D7F205E(Local_85.f_14), 1, 1);
					func_47(&(Local_85.f_14));
				}
			}
		}
		if (((BitTest(Local_85.f_25, 3) || !func_10()) || BitTest(Local_481.f_52, 20)) || unk_0xA9B8A7219CCBCD56() <= 1)
		{
			if (unk_0x7E2E2E8A648611F4(Local_85.f_15))
			{
				if (unk_0xFE2AB315FD8C7A6F(Local_85.f_15))
				{
					func_47(&(Local_85.f_15));
				}
			}
		}
		if (func_219() && BitTest(Global_2793044.f_7, 1))
		{
			if (func_316(Global_2793044.f_5048) == 1)
			{
				func_479(Global_2793044.f_5048, 4);
			}
			else
			{
				func_211(Global_2793044.f_5048);
			}
			unk_0x061B1200C95204CB(&(Global_2793044.f_7), 1);
		}
		if (Local_85.f_13 == 6)
		{
			if (unk_0x7E2E2E8A648611F4(Local_85.f_0))
			{
				if (unk_0x2B6E67EB7FF3FD10(unk_0x0DB8386015E986B7(Local_85.f_0), "XP_Blocker"))
				{
					unk_0xCAE85662DE9919ED(unk_0x0DB8386015E986B7(Local_85.f_0), "XP_Blocker");
				}
			}
		}
		if (unk_0xE85391CF212DE622())
		{
			unk_0xE7282371418F8E0E(Local_85.f_32);
		}
	}
	func_478();
	unk_0x0B34FA69ECCE3927("mp_am_hold_up");
	unk_0xD92F2F3253755455();
	if (func_151("SHR_MENU"))
	{
		unk_0xCD3C8E1022864F65(1);
	}
	Global_2793044.f_9 = func_185();
	unk_0xFBA79BC11313B81D(func_427(Local_481.f_0));
	func_167(1, Local_481.f_0);
	if (Local_481.f_14 != -1)
	{
		func_266(&(Local_481.f_14));
	}
	Global_2793044.f_27 = Local_481.f_0;
	if (Global_2793044.f_5992.f_4 == 1)
	{
		Global_2793044.f_5992.f_4 = 0;
	}
	if (Global_2793044.f_5992.f_5 == 1)
	{
		Global_2793044.f_5992.f_5 = 0;
	}
	if (BitTest(Local_481.f_52, 29))
	{
		unk_0x82EC7C3BD3DA9941(Local_548, 0.5f, iLocal_572, 1);
	}
	if (BitTest(Local_481.f_53, 7))
	{
		func_440();
		unk_0x061B1200C95204CB(&(Local_481.f_53), 7);
	}
	if (unk_0xA26A9A07F761D8F8())
	{
		if (BitTest(Local_85.f_25, 6) || BitTest(Local_85.f_25, 21))
		{
			if (BitTest(Local_85.f_25, 21))
			{
				iVar0 = 1;
			}
			unk_0xBB3FE2C4AEEF5756(30, iLocal_797, iLocal_798, iVar0);
		}
	}
	if (unk_0xF57C1326FD40C8A7(Local_481.f_1))
	{
		if (unk_0x2DDFF72E939527F8(Local_481.f_1))
		{
			unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
		}
		unk_0x42B9FA814615C4F9(Local_481.f_1, 0);
	}
	func_477();
}

void func_477()
{
	unk_0x675D9C12C73D3DE7();
}

void func_478()
{
	unk_0x63EF69C6969A3D26(&uLocal_555);
	unk_0x63EF69C6969A3D26(&uLocal_556);
}

void func_479(int iParam0, int iParam1)
{
	if (func_302(iParam0) != -1)
	{
		if (Global_4535172[iParam0 /*85*/].f_66.f_2 == 1)
		{
			Global_4535172[iParam0 /*85*/].f_66.f_11 = iParam1;
		}
	}
}

int func_480()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x1C57E792CD67EF97())
	{
		if (unk_0x9A45DBB669E889B7(unk_0x74A08123C183740A(iVar0)))
		{
			iVar1 = unk_0xFE2D0B37A9596A4C(unk_0x74A08123C183740A(iVar0));
			uVar2 = unk_0xF2CFBB1105511E1A(iVar1);
			if (func_46(iVar1, 1, 1))
			{
				if (unk_0x41AD4BF315E01D41(uVar2) == iLocal_580)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_481(struct<21> Param0)
{
	var uVar0;
	
	func_487(func_488(Param0.f_0), Param0);
	unk_0xE5CBFFB5DE87586F(2);
	unk_0xF759B94A928DAFDC(8);
	func_485(0, -1, 0);
	unk_0xAC5E62CB7808A363(&Local_85, 75, 0);
	unk_0x10BF12101F9D80A4(&Local_160, 321, 0);
	unk_0xF1440897111F3111(0);
	if (!func_484())
	{
		return 0;
	}
	if (unk_0xE85391CF212DE622())
	{
		func_51(func_52(0));
		func_51(func_52(1));
		func_51(func_52(2));
		unk_0x28818732C8F0F80E("mp_am_hold_up");
		unk_0x28818732C8F0F80E("mp_missheist_countrybank@cower");
		Local_85.f_46 = 8;
		if (func_483())
		{
			unk_0xECDAB41968FF21A8(&(Local_85.f_26), 11);
		}
		else if (func_482())
		{
			unk_0xECDAB41968FF21A8(&(Local_85.f_26), 12);
		}
		Local_85.f_30 = unk_0x15A88CFAAFFC6C4B(1, 11);
		Local_85.f_33 = unk_0x15A88CFAAFFC6C4B(1, 5);
		if ((func_13() && !func_418(unk_0x93E99A2DBCBA9CFA(), 1)) && !func_418(unk_0x93E99A2DBCBA9CFA(), 2))
		{
			Local_85.f_45 = 2;
			unk_0xECDAB41968FF21A8(&(Local_85.f_27), 0);
		}
		else
		{
			Local_85.f_45 = 1;
		}
		Local_85.f_73 = unk_0xD88C7A93096DA0F7(18f, 28f);
	}
	if (func_100(unk_0x93E99A2DBCBA9CFA()) != 155)
	{
		unk_0x20CBA0C6FE1D1526(func_52(1), 0);
	}
	uVar0 = func_131(1191, -1, 0);
	if (BitTest(uVar0, 20) && BitTest(uVar0, 21))
	{
		unk_0xECDAB41968FF21A8(&(Local_481.f_53), 1);
	}
	Local_160[unk_0xD378D2332270959A() /*10*/].f_4 = 0;
	return 1;
}

int func_482()
{
	if (Local_481.f_50 >= 0 && Local_481.f_50 <= 9)
	{
		if (func_430(5, 6) || func_430(17, 18))
		{
			return 1;
		}
		return 0;
	}
	if (Local_481.f_50 >= 10 && Local_481.f_50 <= 14)
	{
		if (func_430(9, 10) || func_430(21, 22))
		{
			return 1;
		}
		return 0;
	}
	if (Local_481.f_50 >= 15 && Local_481.f_50 <= 19)
	{
		if (func_430(7, 8) || func_430(19, 20))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_483()
{
	if (Local_481.f_50 >= 0 && Local_481.f_50 <= 9)
	{
		if (func_430(6, 7) || func_430(18, 19))
		{
			return 1;
		}
		return 0;
	}
	if (Local_481.f_50 >= 10 && Local_481.f_50 <= 14)
	{
		if (func_430(10, 11) || func_430(22, 23))
		{
			return 1;
		}
		return 0;
	}
	if (Local_481.f_50 >= 15 && Local_481.f_50 <= 19)
	{
		if (func_430(8, 9) || func_430(20, 21))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_484()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xA26A9A07F761D8F8())
		{
			return 0;
		}
		if (unk_0x0C8B35057DDAA980())
		{
			return 1;
		}
		if (func_461())
		{
			return 0;
		}
		if (func_459(157))
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

int func_485(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xA1089192E8AE61F4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_477();
			}
			else
			{
				return 0;
			}
		}
		if (!func_486(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA26A9A07F761D8F8())
				{
					if (!bParam2)
					{
						func_477();
					}
					else
					{
						return 0;
					}
				}
				if (func_461())
				{
					if (!bParam2)
					{
						func_477();
					}
					else
					{
						return 0;
					}
				}
				if (func_459(157))
				{
					if (!bParam2)
					{
						func_477();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xE3C3FF8D5649A77D())
			{
				if (!bParam2)
				{
					func_477();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xA1089192E8AE61F4();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			if (!bParam2)
			{
				func_477();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xE3C3FF8D5649A77D())
	{
		if (!bParam2)
		{
			func_477();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_486(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

void func_487(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		func_477();
	}
	unk_0xCF50389093DECE87(uParam0, 0, Param1.f_16);
}

int func_488(int iParam0)
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
		
		case 173:
			return 32;
		
		case 174:
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
		
		case 185:
			return 32;
		
		case 186:
			return 32;
		
		case 175:
			return 32;
		
		case 176:
			return 32;
		
		case 180:
			return 32;
		
		case 178:
			return 32;
		
		case 179:
			return 32;
		
		case 183:
			return 32;
		
		case 184:
			return 32;
		
		case 181:
			return 32;
		
		case 182:
			return 32;
		
		case 187:
			return 32;
		
		case 188:
			return 32;
		
		case 189:
			return 32;
		
		case 190:
			return 32;
		
		case 191:
			return 2;
		
		case 196:
			return 1;
		
		case 192:
			return 2;
		
		case 193:
			return 4;
		
		case 194:
			return 2;
		
		case 195:
			return 2;
		
		case 177:
			return 1;
		
		case 197:
			return 2;
		
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
			return 0;
		
		case 219:
			return 1;
		
		case 204:
			return 4;
		
		case 207:
			return 4;
		
		case 208:
			return 1;
		
		case 209:
			return 1;
		
		case 215:
			return 1;
		
		case 211:
			return 2;
		
		case 216:
			return 1;
		
		case 212:
			return 1;
		
		case 210:
			return 2;
		
		case 213:
			return 8;
		
		case 214:
			return 8;
		
		case 217:
			return 1;
		
		case 218:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 205:
			return 16;
		
		case 206:
			return 32;
		
		default:
	}
	switch (func_489(func_490(iParam0, 1)))
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

int func_489(int iParam0)
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
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		default:
	}
	return -1;
}

int func_490(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 191:
			return 15;
		
		case 198:
			return 8;
		
		case 192:
			return 14;
		
		case 196:
			return 122;
		
		case 199:
			return 1;
		
		case 197:
			return 5;
		
		case 200:
			return 6;
		
		case 193:
			return 11;
		
		case 201:
			return 0;
		
		case 202:
			return 2;
		
		case 194:
			return 13;
		
		case 203:
			return 3;
		
		case 195:
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
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		default:
	}
	if (bParam1)
	{
	}
	return 312;
}

