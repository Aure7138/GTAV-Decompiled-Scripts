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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	bool bLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	struct<4> Local_38[10];
	bool bLocal_79 = 0;
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	struct<27> Local_82 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_109 = 0;
	var uLocal_110 = 0;
	struct<11> Local_111[2];
	struct<25> Local_134[21];
	float fLocal_660 = 0f;
	int iLocal_661 = 0;
	bool bLocal_662 = 0;
	bool bLocal_663 = 0;
	bool bLocal_664 = 0;
	bool bLocal_665 = 0;
	int iLocal_666 = 0;
	struct<3> Local_667 = { 0, 0, 0 } ;
	int iLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = -1;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 1000;
	var uLocal_681 = 1000;
	var uLocal_682 = 0;
	int iLocal_683 = 0;
	int iLocal_684 = 0;
	int iLocal_685 = 0;
	int iLocal_686 = 0;
	var uLocal_687 = 0;
	struct<8> Local_688[3];
	var uLocal_713 = 15;
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
	var uLocal_765 = 15;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
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
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	int iLocal_817 = 0;
	char* sLocal_818 = NULL;
	char* sLocal_819 = NULL;
	int iLocal_820 = 0;
	int iLocal_821 = 0;
	int iLocal_822 = 0;
	var uLocal_823 = 0;
	struct<3> Local_824 = { 0, 0, 0 } ;
	struct<3> Local_827 = { 0, 0, 0 } ;
	int iLocal_830 = 0;
	int iLocal_831 = 0;
	int iLocal_832 = 0;
	bool bLocal_833 = 0;
	int iLocal_834 = 0;
	int iLocal_835 = 0;
	int iLocal_836 = 0;
	int iLocal_837 = 0;
	int iLocal_838 = 0;
	int iLocal_839 = 0;
	struct<14> Local_840 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_854 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_868 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	int iLocal_877 = 0;
	char[] cLocal_878[8] = 0;
	var uLocal_879 = 16;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	char[] cLocal_1044[8] = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	int iLocal_1048[3] = { 0, 0, 0 };
	int iLocal_1052 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	iLocal_81 = 21;
	fLocal_660 = -1f;
	Local_667 = { 0f, 0f, 0f };
	iLocal_670 = -1;
	sLocal_819 = "FBIPRA";
	Local_824 = { 0f, 0f, 0f };
	Local_827 = { 1381.472f, -2072.245f, 50.9981f };
	cLocal_878 = "FIBP1AU";
	iLocal_1052 = -1;
	unk_0xB65977CD1EC089B5(1);
	if (unk_0x55EEDBBFDC6E810F(19))
	{
		sLocal_818 = 0;
		func_389();
		func_377();
	}
	func_360();
	if (func_359())
	{
		func_358(918.8851f, -269.789f, 67.2145f, 68.2149f, 1, 0);
	}
	func_344();
	while (true)
	{
		unk_0x385C3C9C52E9D548("M_TrT", 0);
		if (func_343(unk_0xC1A5EC5C986B98AD()))
		{
			func_339();
			func_335();
			unk_0x6352F03F31CA0713(unk_0x93E99A2DBCBA9CFA());
			unk_0xC54CEC3E1000BF6E(0.8f);
			switch (iLocal_683)
			{
				case 0:
					func_270();
					break;
				
				case 1:
					func_239();
					break;
				
				case 2:
					func_221();
					break;
				
				case 3:
					func_108();
					break;
				
				case 4:
					func_39();
					break;
				
				case 5:
					func_1();
					break;
			}
			if (iLocal_683 != 5)
			{
				if (iLocal_683 >= 0 && !bLocal_28)
				{
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	int iVar0;
	
	switch (iLocal_684)
	{
		case 0:
			unk_0x8581263F2F024518();
			unk_0xCD3C8E1022864F65(1);
			func_38();
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
				if (func_37(iVar0) && unk_0x504B9BB48D41C264(iVar0) == joaat("towtruck"))
				{
					func_36(iVar0, 2);
				}
			}
			if (!unk_0x2AC37494BBF1DB16(sLocal_818))
			{
				func_34(sLocal_818);
			}
			else
			{
				func_18(0);
			}
			iLocal_684 = 1;
			break;
		
		case 1:
			if (func_17())
			{
				if (func_16())
				{
					func_11();
				}
				func_2();
				unk_0xF82BC5193AF62796(unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 30f, 1, 0, 0, 0);
				func_377();
			}
			break;
	}
}

void func_2()
{
	func_9(&Local_868);
	func_9(&uLocal_875);
	func_9(&iLocal_874);
	func_8(&Local_840);
	func_8(&Local_854);
	func_9(&uLocal_876);
	func_3();
}

void func_3()
{
	func_7(&(Local_111[0 /*11*/].f_4));
	func_7(&(Local_111[1 /*11*/].f_4));
	func_6(&iLocal_109);
	func_5(&(Local_111[0 /*11*/]), 1, 0, 1);
	func_5(&(Local_111[1 /*11*/]), 1, 0, 1);
	func_4(&(Local_134[iLocal_661 /*25*/].f_17), 0);
	unk_0x28F88BFAD6397895(uLocal_80);
	unk_0x0B34FA69ECCE3927("missfbi4prepp1");
	unk_0x085E352258A64D3A("missfbi4prepp1_garbageman");
}

void func_4(var uParam0, bool bParam1)
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (unk_0xEFF022A75A217E08(*uParam0))
		{
			unk_0xA81AA70A4D25E140(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xC621CC7313639986(uParam0);
		}
		else
		{
			unk_0x6CB555E9F2BCE87A(*uParam0);
		}
	}
}

void func_5(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (!unk_0x66599E73DBA5A850(*uParam0))
		{
			unk_0x351E6B9FD37CFF33(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xA0E06A3361300416(*uParam0);
			}
			unk_0x71A535529C1CA5DF(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xC5B2830898581862(*uParam0, false);
			}
		}
		unk_0x1EEF71E3CDD868D3(uParam0);
	}
}

void func_6(var uParam0)
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		unk_0x055111B11E6624FD(*uParam0, 0);
		if (unk_0x1AFE963DA61006ED(*uParam0) && unk_0xAE770DDB34967EC3(*uParam0, 1))
		{
			unk_0x0E4B6CF706BE8AA4(uParam0);
		}
	}
}

void func_7(int iParam0)
{
	if (unk_0xCE4AAA035282336C(*iParam0))
	{
		unk_0xBD91E7D4B770F97E(*iParam0, 0);
		unk_0x45533C09A6C9B409(iParam0);
	}
}

void func_8(int iParam0)
{
	if (unk_0x7DE17ACDD8BA2642(*iParam0))
	{
		if (!unk_0x055111B11E6624FD(*iParam0, 0))
		{
			unk_0x351E6B9FD37CFF33(*iParam0, 0, 1);
		}
		if (!unk_0x1AFE963DA61006ED(*iParam0))
		{
			unk_0x85BAE84748AD1A23(*iParam0, 1, 0);
		}
		unk_0xE9C250FA35A936C8(iParam0);
	}
}

void func_9(var uParam0)
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (!unk_0x1AFE963DA61006ED(*uParam0))
		{
			unk_0x85BAE84748AD1A23(*uParam0, 1, 0);
		}
		if (func_37(*uParam0))
		{
			if (unk_0x1AFE963DA61006ED(*uParam0) && unk_0xAE770DDB34967EC3(*uParam0, 1))
			{
				if (func_10(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), *uParam0, 0))
					{
						unk_0x0E4B6CF706BE8AA4(uParam0);
						return;
					}
				}
				unk_0x2728CF7242F08BD5(uParam0);
			}
		}
		else
		{
			if (func_10(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), *uParam0, 0))
				{
					unk_0x0E4B6CF706BE8AA4(uParam0);
					return;
				}
			}
			unk_0x2728CF7242F08BD5(uParam0);
		}
	}
}

int func_10(int iParam0)
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

void func_11()
{
	func_14(918.8851f, -269.789f, 67.2145f, 325.9081f);
	func_12(917.5291f, -263.8595f, 67.3489f, 188.0605f);
}

void func_12(struct<3> Param0, float fParam3)
{
	func_13(&(Global_107196.f_2890), Param0, fParam3);
}

void func_13(var uParam0, struct<3> Param1, var uParam4)
{
	*uParam0 = { Param1 };
	uParam0->f_6 = uParam4;
}

void func_14(struct<3> Param0, float fParam3)
{
	if (func_15(Global_78799, 0f, 0f, 0f, 0))
	{
		Global_78799 = { Param0 };
		Global_78802 = fParam3;
	}
}

bool func_15(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_16()
{
	if (Global_100681 == 7)
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_100681 == 7 || Global_100681 == 8)
	{
		return 1;
	}
	return 0;
}

void func_18(int iParam0)
{
	int iVar0;
	
	if (Global_113648.f_9087 || func_33(0))
	{
		iVar0 = func_32();
		if (!func_19(iVar0))
		{
			return;
		}
		unk_0xECDAB41968FF21A8(&(Global_91433[iVar0 /*5*/].f_1), 5);
		Global_100717 = iParam0;
	}
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_24();
	if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		unk_0x41779F479C550561(5000);
	}
	iVar0 = Global_91433[iParam0 /*5*/];
	iVar1 = Global_78828.f_109[iVar0 /*4*/];
	func_23(iVar1, 1);
	unk_0x5BA6D9FE1EEE197C(unk_0x93E99A2DBCBA9CFA(), 0);
	unk_0x693E3DB45F359B4D(unk_0x93E99A2DBCBA9CFA(), 0);
	func_20(&(Global_113648.f_2365.f_539), iVar1);
	if (Global_94856 == Global_100718)
	{
		Global_113648.f_9087.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91469[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			unk_0x0135E51BAD56ED58(0);
		}
	}
	Global_113648.f_9087.f_330[iVar1 /*6*/].f_2++;
	Global_94856 = Global_100718;
	if (iParam0 == -1)
	{
		if (Global_113648.f_9087)
		{
		}
		return 0;
	}
	if (BitTest(Global_91433[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91433[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_20(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113648.f_18535[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113648.f_9087.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_22(Global_113648.f_18535[iVar0], &Var2, &fVar5))
			{
				Global_113648.f_18535[iVar0] = 318;
				func_21(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_98071[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_9 = 0f;
				Global_98071[iVar0 /*29*/].f_12 = 0f;
				Global_98071[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_10 = 0f;
				Global_98071[iVar0 /*29*/].f_13 = 0f;
				Global_98071[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_11 = 0f;
				Global_98071[iVar0 /*29*/].f_14 = 0f;
				Global_98071[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_26 = 0f;
				Global_98071[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_27 = 0f;
				Global_98071[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_21(var uParam0)
{
	*uParam0 = -15;
}

int func_22(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_22(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_22(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_23(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94666[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94666[iParam0 /*2*/] = 0;
	}
}

void func_24()
{
	Global_100716 = 1;
	if (unk_0xF41A4983A3778F18(unk_0x93E99A2DBCBA9CFA(), 1))
	{
		if (unk_0x2AC37494BBF1DB16(&Global_78791))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_78791, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_78791, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_78791, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_78795, "", 16);
		}
		Global_100716 = 0;
	}
	else if (!unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
	{
		if (unk_0x2AC37494BBF1DB16(&Global_78791))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_78791, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_78791, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_78791, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_78795, "", 16);
		}
		Global_100716 = 0;
		unk_0xECDAB41968FF21A8(&(Global_100681.f_20), 25);
	}
}

bool func_25()
{
	func_26();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_26()
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
	{
		if (func_30(Global_113648.f_2365.f_539.f_4321) != unk_0x504B9BB48D41C264(unk_0xC1A5EC5C986B98AD()))
		{
			iVar0 = func_29(unk_0xC1A5EC5C986B98AD());
			if (func_28(iVar0) && (!func_27(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_28(Global_113648.f_2365.f_539.f_4321))
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

bool func_27(int iParam0)
{
	return Global_43257 == iParam0;
}

bool func_28(int iParam0)
{
	return iParam0 < 3;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		iVar1 = unk_0x504B9BB48D41C264(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(int iParam0)
{
	if (func_28(iParam0))
	{
		return func_31(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

int func_32()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_91433[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_33(bool bParam0)
{
	if (!bParam0 && unk_0x24B651D85CCE5EB4(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_34(char* sParam0)
{
	func_35(sParam0);
	func_18(0);
}

void func_35(char* sParam0)
{
	if (!unk_0x2AC37494BBF1DB16(sParam0))
	{
		if (unk_0xA7D1818D200CD09B(sParam0) <= 16)
		{
			StringCopy(&Global_78791, sParam0, 16);
			StringCopy(&Global_78795, "", 16);
			if (unk_0xC8FA7761999E73B4())
			{
				unk_0x3713EB3DD4F07804();
			}
		}
	}
}

void func_36(int iParam0, int iParam1)
{
	Global_100681.f_22[iParam1] = iParam0;
}

int func_37(int iParam0)
{
	if (func_10(iParam0))
	{
		if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
		{
			if (!unk_0x584CD220C093B0B4(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_38()
{
	func_7(&iLocal_821);
}

void func_39()
{
	bool bVar0;
	
	switch (iLocal_684)
	{
		case 0:
			iLocal_684 = 1;
			break;
		
		case 1:
			if (!func_107(unk_0xC1A5EC5C986B98AD(), Local_827, 270f, 1))
			{
				iLocal_684 = 2;
			}
			else if (!func_106("PRA_LEVAREA", 0, 0))
			{
				func_105("PRA_LEVAREA", 60000, 0);
			}
			break;
		
		case 2:
			bVar0 = func_25();
			if (func_106("PRA_LEVAREA", 0, 0))
			{
				unk_0x8581263F2F024518();
			}
			if (bVar0 == 0)
			{
				if (func_67(&uLocal_687, &cLocal_1044, &uLocal_879))
				{
					func_63();
					func_58();
				}
			}
			else
			{
				func_53(func_57(bVar0), -621899663, -621899663, 5, 0, bVar0, func_56(bVar0), 0, 6000, 6000, -1, 0, 0);
				func_63();
				func_58();
			}
			break;
		
		case 3:
			func_40(1, 1, 1);
			iLocal_684 = 2;
			break;
	}
}

void func_40(int iParam0, int iParam1, int iParam2)
{
	func_42(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		unk_0xEAB390443C680F72(0f, 1065353216);
		unk_0xAABD7B0753C5C286(0f);
	}
	if (iParam1 == 1)
	{
		func_41(500, 0);
	}
}

void func_41(int iParam0, bool bParam1)
{
	if (unk_0x72474BA05A104E1E() || unk_0x984CA71F26DF483C())
	{
		if (!unk_0x6C9BA681FB2251B6())
		{
			unk_0x78DD793477D04C42(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x35DF833D93BCC488())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

void func_42(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x5DC3DCA82C806319();
	unk_0x8251F6E5FB4F1E3D(uVar0, 0);
	unk_0xE333240A90F2FF3C(uVar0, iParam3, 0);
	func_43(0, 1, 0, 0, 0, 0, 0);
	if (iParam2 == 1)
	{
		unk_0x61F7D56FFAFBF706(1);
		unk_0xB1A691274215E4CE(1);
	}
	unk_0xCD3C8E1022864F65(1);
	if (iParam0 == 1)
	{
		unk_0xE927736B0094B990(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_37 != 0 && iLocal_37 != joaat("object")) && iLocal_37 != joaat("gadget_parachute"))
		{
			if (func_10(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0xED31EFCAA05B93ED(unk_0xC1A5EC5C986B98AD(), iLocal_37, 0))
				{
					unk_0x8CC688927B10006C(unk_0xC1A5EC5C986B98AD(), iLocal_37, 0);
				}
			}
		}
	}
	if (func_343(unk_0xC1A5EC5C986B98AD()))
	{
		unk_0x0002182D625AEFEA(unk_0xC1A5EC5C986B98AD(), 0, 0);
	}
}

void func_43(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x8ECAA315E07E3A17(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 1);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 1);
		func_52(1);
		unk_0x2A7FF4CA1CC371B5();
		unk_0x3096CB6635EB839E();
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE444FD7526C8BB46())
			{
				unk_0xD6625E11483B2324(0);
			}
			if (!func_51())
			{
				Global_20383.f_1 = 3;
			}
			Global_21725 = 5;
		}
		func_50(1, iParam3, iParam2, 0);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_52(0);
		unk_0x5862CC4FD19EB752();
		Global_63368 = 0;
		if (bParam1)
		{
			unk_0xDB4D82037BD5A339();
		}
		unk_0x24E4702792B3DA06(unk_0x93E99A2DBCBA9CFA(), 0);
		unk_0xD9CC3BD0E86A83F2(unk_0x93E99A2DBCBA9CFA(), 0);
		func_50(0, iParam3, iParam2, 0);
		if (unk_0xA26A9A07F761D8F8())
		{
			if ((((((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_48(unk_0x93E99A2DBCBA9CFA())) && !func_45(unk_0x93E99A2DBCBA9CFA(), 0)) && !func_44()) && !bParam4) && !bParam5) && !unk_0x8253CEEA17ED481B())
			{
				unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
			}
		}
		else if (((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && !func_48(unk_0x93E99A2DBCBA9CFA())) && !bParam4) && !bParam5)
		{
			unk_0x226C3A30511D5DC4(unk_0xC1A5EC5C986B98AD(), 0);
		}
		Global_78556 = 0;
	}
}

bool func_44()
{
	return BitTest(Global_1853910[unk_0x93E99A2DBCBA9CFA() /*862*/].f_36.f_18, 14);
}

bool func_45(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x93E99A2DBCBA9CFA())
	{
		bVar0 = func_46(-1, 0) == 8;
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

int func_46(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
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

int func_47()
{
	return Global_1574918;
}

int func_48(int iParam0)
{
	if (func_45(iParam0, 0))
	{
		return 1;
	}
	if (func_49())
	{
		if (iParam0 == unk_0x93E99A2DBCBA9CFA())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657589[iParam0 /*466*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_49()
{
	return BitTest(Global_2621446, 3);
}

int func_50(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xCC17806DB0C41C19())
	{
		if (unk_0x39D9A0A5E812BD25() != iParam0 && uParam2)
		{
			unk_0xA740EFFFBB4FED55(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_51()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_52(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xECDAB41968FF21A8(&Global_8253, 13);
	}
	else
	{
		unk_0x061B1200C95204CB(&Global_8253, 13);
	}
}

int func_53(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_33(0))
	{
		return 0;
	}
	if (iParam8 < 0)
	{
		return 0;
	}
	if (iParam9 < 0)
	{
		return 0;
	}
	if (iParam10 == 76)
	{
		return 0;
	}
	if (iParam11 == 235)
	{
		return 0;
	}
	if (iParam6 == bParam5)
	{
		return 0;
	}
	if (((bParam5 != 144 && bParam5 != 0) && bParam5 != 1) && bParam5 != 2)
	{
		return 0;
	}
	if (Global_113648.f_7690.f_136 < 9)
	{
		Var0.f_0 = uParam0;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_9 = iParam3;
		if (Global_113648.f_7690.f_911 == Var0.f_0)
		{
			Global_113648.f_7690.f_911 = -1;
		}
		Var0.f_3 = func_55(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = (unk_0xA5E11AF0A2B928C1() + iParam8);
		Var0.f_1 = iParam12;
		iVar15 = 0;
		unk_0xECDAB41968FF21A8(&iVar15, bParam5);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam6;
		Var0.f_14 = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		unk_0xECDAB41968FF21A8(&(Var0.f_1), false);
		unk_0xECDAB41968FF21A8(&(Var0.f_1), 13);
		unk_0x061B1200C95204CB(&(Var0.f_1), true);
		if (iParam4 == 0)
		{
			unk_0xECDAB41968FF21A8(&(Var0.f_1), 10);
		}
		Global_113648.f_7690[Global_113648.f_7690.f_136 /*15*/] = { Var0 };
		Global_113648.f_7690.f_136++;
		func_54(bParam5);
		return 1;
	}
	return 0;
}

void func_54(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_28(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113648.f_7690.f_136)
	{
		if (BitTest(Global_113648.f_7690[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_113648.f_7690[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_113648.f_7690[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_113648.f_7690.f_764)
	{
		if (BitTest(Global_113648.f_7690.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_113648.f_7690.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_113648.f_7690.f_919[bParam0] = iVar1;
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_56(bool bParam0)
{
	if (bParam0 == 1)
	{
		return 9;
	}
	return 8;
}

int func_57(bool bParam0)
{
	if (bParam0 == 1)
	{
		return -714760066;
	}
	return -1198055521;
}

void func_58()
{
	unk_0x8581263F2F024518();
	func_61();
	func_59(0, 0);
	func_377();
}

void func_59(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_63364)
	{
		Global_63364 = iParam1;
	}
	if (bParam0)
	{
		if ((func_33(0) && Global_78805.f_1 == 1) && func_60(Global_78805))
		{
		}
		else
		{
			Global_63362 = 1;
		}
	}
	if (Global_113648.f_9087 || func_33(0))
	{
		iVar0 = func_32();
		iVar1 = Global_91433[iVar0 /*5*/];
		uVar2 = Global_78828.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113648.f_9087)
			{
			}
			return;
		}
		if (BitTest(Global_91433[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_91433[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xECDAB41968FF21A8(&(Global_91433[iVar0 /*5*/].f_1), 4);
		unk_0xECDAB41968FF21A8(&Global_78807, true);
		Global_78823 = uVar2;
		Global_78824 = unk_0xA5E11AF0A2B928C1();
	}
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_61()
{
	Global_20591 = 0;
	func_62();
}

void func_62()
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

void func_63()
{
	func_66(0, -1);
	func_65(0, 318);
	func_64(1, 320);
}

void func_64(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_63370)
	{
	}
	Global_63370 = 0;
	if (bParam0)
	{
		Global_63371 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_75457)
		{
			if (Global_63587[Global_75458[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_75458[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_75457)
		{
			if (Global_75458[iVar0 /*9*/] > 0)
			{
				if (Global_75458[iVar0 /*9*/] == iParam1)
				{
					Global_75458[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_65(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_63375 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_75457)
	{
		if (iParam1 == -1 || Global_75458[iVar0 /*9*/] == iParam1)
		{
			if (Global_75458[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_75458[iVar0 /*9*/].f_6 = iParam0;
				Global_75458[iVar0 /*9*/].f_7 = 1;
				Global_75458[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_66(int iParam0, int iParam1)
{
	Global_63373 = iParam0;
	Global_63374 = iParam1;
}

int func_67(var uParam0, char* sParam1, var uParam2)
{
	switch (*uParam0)
	{
		case 0:
			if (func_103())
			{
				if ((func_102(74) || func_102(75)) && func_101())
				{
					if (func_25() == 0)
					{
						func_100(1);
						func_99(46, 1);
						*uParam0 = 4;
					}
					else
					{
						func_98(uParam2, 0, 0, "MICHAEL", 0, 1);
						if (func_82(uParam2, func_97(), func_25(), "FBIPRAU", func_96(), 9, 1, 0, 0, 0))
						{
							*sParam1 = { func_81(1) };
							func_99(46, 1);
							*uParam0 = 1;
						}
					}
				}
				else if (func_25() == 0)
				{
					func_100(0);
					*uParam0 = 4;
				}
				else
				{
					func_98(uParam2, 0, 0, "MICHAEL", 0, 1);
					if (func_82(uParam2, func_97(), func_25(), "FBIPRAU", func_96(), 9, 1, 0, 0, 0))
					{
						*sParam1 = { func_81(0) };
						*uParam0 = 1;
					}
				}
			}
			else
			{
				func_74();
				*uParam0 = 4;
			}
			break;
		
		case 1:
			if (func_73())
			{
				if (unk_0x2EAC620A648B0397() >= 0)
				{
					func_72("FBIPRAU", sParam1);
					func_71(1);
					*uParam0 = 3;
				}
			}
			if (func_70())
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_73())
			{
				if (!func_69(0))
				{
					if (!func_102(3) && func_103())
					{
						func_68(50, 0);
					}
					return 1;
				}
			}
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_68(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_113648.f_8615[iParam0] = 1;
	Global_113648.f_8615.f_236[iParam0] = (unk_0xA5E11AF0A2B928C1() + iParam1);
}

int func_69(int iParam0)
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

int func_70()
{
	if (Global_21774 == 1 || Global_22741 == 1)
	{
		return 1;
	}
	return 0;
}

void func_71(bool bParam0)
{
	unk_0xD6625E11483B2324(bParam0);
	if (bParam0)
	{
	}
}

void func_72(char* sParam0, char* sParam1)
{
	if (unk_0xE444FD7526C8BB46())
	{
		Global_21782 = 1;
		StringCopy(&Global_21789, sParam0, 24);
		StringCopy(&Global_21783, sParam1, 24);
	}
}

int func_73()
{
	if (Global_21725 == 4)
	{
		if (unk_0xE444FD7526C8BB46())
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

void func_74()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_79(iVar0);
		if (!unk_0x66599E73DBA5A850(iVar1))
		{
			if (func_78(iVar1, 0))
			{
				return;
			}
		}
		iVar0++;
	}
	func_75(func_76(), 0, func_25(), func_97(), 9, 6000, 6000, -1, 0, -1, 0);
}

int func_75(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_33(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == bParam2)
	{
		return 0;
	}
	if (((bParam2 != 144 && bParam2 != 0) && bParam2 != 1) && bParam2 != 2)
	{
		return 0;
	}
	if (Global_113648.f_7690.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_113648.f_7690.f_911 == Var0.f_0)
		{
			Global_113648.f_7690.f_911 = -1;
		}
		Var0.f_3 = func_55(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (unk_0xA5E11AF0A2B928C1() + iParam5);
		Var0.f_1 = iParam10;
		iVar15 = 0;
		unk_0xECDAB41968FF21A8(&iVar15, bParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		unk_0xECDAB41968FF21A8(&(Var0.f_1), false);
		unk_0x061B1200C95204CB(&(Var0.f_1), true);
		if (iParam1 == 0)
		{
			unk_0xECDAB41968FF21A8(&(Var0.f_1), 10);
		}
		Global_113648.f_7690[Global_113648.f_7690.f_136 /*15*/] = { Var0 };
		Global_113648.f_7690.f_136++;
		func_54(bParam2);
		return 1;
	}
	return 0;
}

int func_76()
{
	switch (func_77())
	{
		case 33:
			switch (func_25())
			{
				case 0:
					return -1847734803;
					break;
				
				case 1:
					return -714760066;
					break;
				
				case 2:
					return -1198055521;
					break;
			}
			break;
		
		case 34:
			switch (func_25())
			{
				case 0:
					return 1374342572;
					break;
				
				case 1:
					return 530956160;
					break;
				
				case 2:
					return 240475766;
					break;
			}
			break;
		
		case 36:
			switch (func_25())
			{
				case 0:
					return 580731697;
					break;
				
				case 1:
					return 728176806;
					break;
				
				case 2:
					return 910240872;
					break;
			}
			break;
		
		case 37:
			switch (func_25())
			{
				case 0:
					return 74540475;
					break;
				
				case 1:
					return -1200353264;
					break;
				
				case 2:
					return 801340541;
					break;
			}
			break;
	}
	return -1;
}

int func_77()
{
	return Global_78821;
}

int func_78(int iParam0, int iParam1)
{
	bool bVar0;
	
	return 0;
	if (!unk_0x66599E73DBA5A850(iParam0))
	{
		bVar0 = func_29(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_79(bVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xC1A5EC5C986B98AD())
			{
				return 0;
			}
		}
		if (BitTest(Global_96534, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_79(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_25())
	{
		return unk_0xC1A5EC5C986B98AD();
	}
	return Global_98159[func_80(iParam0)];
}

int func_80(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

struct<4> func_81(bool bParam0)
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_25())
		{
			case 1:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
		}
	}
	else
	{
		switch (func_25())
		{
			case 1:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			}
	}
	return Var0;
}

bool func_82(var uParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	func_95(uParam0, iParam1, sParam3, iParam7, iParam8, 0);
	Global_7571 = bParam2;
	Global_21773 = 0;
	Global_21732 = 1;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_21739 = 0;
	Global_21730 = 1;
	Global_21777 = 0;
	Global_21779 = 0;
	if (iParam6 == 1)
	{
		Global_21737 = 1;
	}
	else
	{
		Global_21737 = 0;
	}
	Global_2883585 = 0;
	return func_83(sParam4, iParam5, bParam9);
}

int func_83(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xD6625E11483B2324(false);
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
					func_62();
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
		if (func_94(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_93();
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
			unk_0x061B1200C95204CB(&Global_8255, false);
			if (bParam2)
			{
				func_92();
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
				if (func_91())
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
			if (func_51())
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
			func_90();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_89();
		func_84();
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
		func_62();
	}
	return 0;
}

void func_84()
{
	if (!func_85())
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

int func_85()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x93E99A2DBCBA9CFA() == func_88())
	{
		return 0;
	}
	if (func_86(unk_0x93E99A2DBCBA9CFA()))
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

bool func_86(int iParam0)
{
	return func_87(iParam0, 20);
}

var func_87(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_88()
{
	return -1;
}

void func_89()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD6625E11483B2324(false);
	Global_21725 = 1;
}

void func_90()
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

int func_91()
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

void func_92()
{
	if (func_27(14))
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
		Global_20383 = func_25();
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

void func_93()
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

bool func_94(int iParam0, int iParam1)
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

void func_95(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	StringCopy(&Global_21795, sParam2, 24);
	Global_22714 = iParam5;
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

char* func_96()
{
	char* sVar0;
	
	switch (func_77())
	{
		case 33:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP1_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP1_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP1_TENDC";
					break;
			}
			break;
		
		case 34:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP2_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP2_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP2_TENDC";
					break;
			}
			break;
		
		case 36:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP4_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP4_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP4_TENDC";
					break;
			}
			break;
		
		case 37:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP5_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP5_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP5_TENDC";
					break;
			}
			break;
	}
	return sVar0;
}

int func_97()
{
	int iVar0;
	
	switch (func_25())
	{
		case 0:
			iVar0 = 5;
			break;
		
		case 1:
			iVar0 = 9;
			break;
		
		case 2:
			iVar0 = 8;
			break;
	}
	return iVar0;
}

void func_98(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_99(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_113648.f_9087.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_113648.f_9087.f_99.f_58[iParam0] = iParam1;
}

void func_100(bool bParam0)
{
	if (bParam0)
	{
		func_75(1527885205, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
	else if (!func_102(3))
	{
		func_75(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 50, -1, 0);
	}
	else
	{
		func_75(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
}

int func_101()
{
	if ((func_102(41) && func_102(3)) && func_102(21))
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

int func_103()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 33;
	while (iVar1 <= 37)
	{
		if (func_102(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_104(45))
	{
		iVar0++;
	}
	if (iVar0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113648.f_9087.f_99.f_58[iParam0];
}

void func_105(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x7FC9F66A5DE18E09(sParam0);
	unk_0xAC8CD22C06543F95(iParam1, 1);
}

bool func_106(char* sParam0, int iParam1, int iParam2)
{
	unk_0xEB16059D3EDC926B(sParam0);
	if (iParam1 == 1)
	{
		unk_0x48849374B34BB7B9(iParam2);
	}
	return unk_0xC44AC9C43C91326C();
}

bool func_107(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	return unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(iParam0, iParam5), Param1) <= (fParam4 * fParam4);
}

void func_108()
{
	func_215(&iLocal_874, &uLocal_875, &iLocal_686, &iLocal_822, &iLocal_821, Local_827, Local_868.f_0, 0, 1090519040);
	func_214();
	func_155();
	switch (iLocal_684)
	{
		case 0:
			if (func_122(iLocal_683, bLocal_28))
			{
				if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0)
				{
					if (func_37(iLocal_874))
					{
						if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_874, 0))
						{
							func_121("PRA_LEVVEH", &iLocal_820);
						}
					}
				}
				iLocal_684 = 1;
			}
			break;
		
		case 1:
			func_120(&iLocal_821, Local_827, &iLocal_685, iLocal_686, &iLocal_820, &iLocal_838);
			if (func_113(iLocal_874, Local_827, &iLocal_821, iLocal_686, iLocal_685, &iLocal_836, &iLocal_839, &iLocal_835, &iLocal_834, &iLocal_820, 1090519040))
			{
				if (!func_112())
				{
					if (func_67(&uLocal_687, &cLocal_1044, &uLocal_879))
					{
						func_63();
						func_58();
					}
				}
				else
				{
					func_99(46, 1);
					func_63();
					func_110(0);
				}
			}
			break;
		
		case 3:
			if (func_37(Local_868.f_0))
			{
				if (!unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), Local_868.f_0, 0))
				{
					unk_0x4C18E9202CF6CACA(unk_0xC1A5EC5C986B98AD(), Local_868.f_0, -1);
				}
				else
				{
					func_109(Local_868.f_0, Local_827, 126.0705f, 0, 1);
					func_40(1, 1, 1);
					iLocal_684 = 1;
				}
			}
			break;
	}
}

int func_109(int iParam0, struct<3> Param1, float fParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_10(iParam0))
	{
		if (bParam5 == 1)
		{
			fVar1 = 0f;
			bVar0 = unk_0xDE209AFE421606C6(Param1, &fVar1, 0, 0);
			if (bVar0)
			{
				Param1.f_2 = fVar1;
			}
		}
		unk_0xC2E3C377D893C17A(iParam0, Param1, 1, 0, 0, iParam6);
		unk_0x692C3FDAD7DB53CC(iParam0, fParam4);
		if (bParam5)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

void func_110(bool bParam0)
{
	func_111(iLocal_683);
	iLocal_817 = iLocal_683;
	if (!bParam0)
	{
		iLocal_683 = iLocal_817 + 1;
	}
	else if (iLocal_817 > 0)
	{
		iLocal_683 = (iLocal_817 - 1);
	}
	iLocal_820 = 0;
	iLocal_684 = 0;
}

void func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
	}
}

int func_112()
{
	if (func_103())
	{
		if ((func_102(74) || func_102(75)) && func_101())
		{
			return 1;
		}
	}
	return 0;
}

int func_113(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	float fVar0;
	
	if ((iParam5 == 1 || iParam5 == 2) || iParam5 == 3)
	{
		if (iParam6 == 0)
		{
			if (func_37(iParam0))
			{
				if (!unk_0x71E7779DA475F63F(iParam0))
				{
					func_121(func_119(func_77()), iParam11);
				}
			}
			if (!unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Param1, fParam12, fParam12, 2f, 0, 1, 2))
			{
				unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Param1, fParam12, fParam12, 2f, 1, 1, 2);
				if (func_106(func_119(func_77()), 0, 0))
				{
					unk_0x4A77CD96EFFC63F4(func_119(func_77()));
				}
				*iParam7 = 1;
				func_117(iParam4, Param1, 1);
			}
			else
			{
				if (*iParam7)
				{
					fVar0 = (fParam12 / 2f);
					if (func_107(unk_0xC1A5EC5C986B98AD(), Param1, fVar0, 1))
					{
						*iParam7 = 0;
						func_116(1077936128, 1);
					}
				}
				func_7(iParam4);
			}
		}
	}
	else if (unk_0x1C4E4DC1EFE24DF1(iParam0, Param1, fParam12, fParam12, 2f, 0, 1, 2))
	{
		if (*iParam9 == -1)
		{
			unk_0x439314AD4FC79186(iParam0, 2);
			return 1;
		}
		if (!*iParam10)
		{
			if (func_106(func_119(func_77()), 0, 0))
			{
				unk_0x8581263F2F024518();
			}
			*iParam9 = unk_0xA5E11AF0A2B928C1();
			*iParam10 = 1;
			unk_0x439314AD4FC79186(iParam0, 2);
		}
		else if ((unk_0xA5E11AF0A2B928C1() - *iParam9) > 3000)
		{
			return 1;
		}
	}
	else
	{
		if (unk_0x1FA433B724B7085B(iParam0) == 2)
		{
			unk_0x439314AD4FC79186(iParam0, 1);
		}
		if (!*iParam8)
		{
			if (func_106(func_115(func_77(), 0), 0, 0))
			{
				unk_0x4A77CD96EFFC63F4(func_115(func_77(), 0));
			}
			if (!func_106(func_114(func_77()), 0, 0))
			{
				func_105(func_114(func_77()), 7500, 0);
				*iParam8 = 1;
			}
		}
		*iParam7 = 1;
	}
	return 0;
}

char* func_114(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_RETVEH";
			break;
		
		case 34:
			sVar0 = "PRB_RETVEH";
			break;
		
		case 78:
			sVar0 = "PR_RETVEH";
			break;
		
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_RETVEH";
			break;
	}
	return sVar0;
}

char* func_115(int iParam0, bool bParam1)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_TAKBACK";
			break;
		
		case 34:
			sVar0 = "PRB_TAKBACK";
			break;
		
		case 78:
			sVar0 = "PR_TAKBACK";
			break;
		
		case 80:
		case 81:
		case 82:
			if (!bParam1)
			{
				sVar0 = "PRF_TAKBACK";
			}
			else
			{
				sVar0 = "PRF_GARAGE";
			}
			break;
	}
	return sVar0;
}

int func_116(float fParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		return 1;
	}
	iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
	if (unk_0xFBD273FDBCF0C5BD(iVar0, 0))
	{
		if (unk_0xA66E176E5772E965(iVar0, -1, 0) == unk_0xC1A5EC5C986B98AD())
		{
			if (!unk_0xF193A4B306E6BF93(iVar0))
			{
				unk_0xC8927C3AD7C5D2E1(iVar0, fParam0, iParam1, 0);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0x63E1343737CA1E47(unk_0xC1A5EC5C986B98AD()))
	{
		return 1;
	}
	if (unk_0xFBD273FDBCF0C5BD(iVar0, 0))
	{
		if (unk_0xF193A4B306E6BF93(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_117(int iParam0, struct<3> Param1, int iParam4)
{
	if (!unk_0xCE4AAA035282336C(*iParam0))
	{
		*iParam0 = func_118(Param1, 5, iParam4);
	}
}

int func_118(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = unk_0x7F0C74F83813841D(Param0);
	unk_0xC2E0B90856D55E49(iVar0, iParam3);
	unk_0x225EB85DBC38E707(iVar0, 1f);
	unk_0xBD91E7D4B770F97E(iVar0, iParam4);
	return iVar0;
}

char* func_119(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_LEVVEH";
			break;
		
		case 34:
			sVar0 = "PRB_LEVVEH";
			break;
		
		case 78:
			sVar0 = "PR_LEVVEH";
			break;
		
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_LEAVE";
			break;
	}
	return sVar0;
}

void func_120(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	switch (*iParam4)
	{
		case 0:
			if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0)
			{
				*iParam4 = 1;
			}
			break;
		
		case 1:
			func_7(iParam0);
			if ((iParam5 == 1 || iParam5 == 2) || iParam5 == 3)
			{
				unk_0x8581263F2F024518();
				func_105("LOSE_WANTED", 7500, 0);
				*iParam4 = 2;
			}
			break;
		
		case 2:
			if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0)
			{
				unk_0x8581263F2F024518();
				if ((iParam5 == 1 || iParam5 == 2) || iParam5 == 3)
				{
					func_121(func_115(func_77(), 0), iParam6);
					func_117(iParam0, Param1, 1);
				}
				else if (iParam5 == 0 && !*iParam7)
				{
					func_105(func_114(func_77()), 7500, 0);
					*iParam7 = 1;
				}
				*iParam4 = 0;
			}
			break;
	}
}

void func_121(char* sParam0, int iParam1)
{
	if (!*iParam1)
	{
		func_105(sParam0, 7500, 0);
		*iParam1 = 1;
	}
}

int func_122(int iParam0, bool bParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_28 = false;
				func_40(1, 1, 1);
			}
			else if (func_149(1, Local_824, 0))
			{
				if (func_148())
				{
					func_147(33);
					unk_0x9C56520AE72AFDBF(joaat("trash"), 1);
					unk_0x9C56520AE72AFDBF(joaat("towtruck"), 1);
					unk_0x9C56520AE72AFDBF(joaat("s_m_y_garbage"), 1);
					iLocal_683 = 2;
					func_7(&iLocal_821);
					func_145(&uLocal_671, 0, 0);
					func_144(190, 1244.338f, -339.3197f, 68.0823f);
					func_142();
					unk_0x2112CE9FD54D593A("DRIVE", 0);
					unk_0x2112CE9FD54D593A("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0x2112CE9FD54D593A("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0x2112CE9FD54D593A("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
				else if (((func_149(2, Local_868.f_1, Local_868.f_4) && func_149(3, Local_840.f_1, Local_840.f_4)) && func_149(4, Local_854.f_1, Local_854.f_4)) && func_141(0))
				{
					func_142();
					func_147(33);
					if (func_343(Local_840.f_0))
					{
						func_140(Local_840.f_0);
					}
					if (func_343(Local_854.f_0))
					{
						func_139(Local_854.f_0);
					}
					func_138(Local_868.f_0);
					if (func_343(Local_854.f_0) && func_343(Local_840.f_0))
					{
						func_127(iLocal_830, 1, 0, 1);
					}
					unk_0x9C56520AE72AFDBF(joaat("trash"), 1);
					unk_0x9C56520AE72AFDBF(joaat("towtruck"), 1);
					unk_0x9C56520AE72AFDBF(joaat("s_m_y_garbage"), 1);
					if (unk_0x083A079256401BA8(Local_868.f_0) != 0)
					{
						iVar0 = unk_0x083A079256401BA8(Local_868.f_0);
						unk_0xC9BB10E64C4DE9F9(1);
						func_7(&iVar0);
						unk_0xC9BB10E64C4DE9F9(0);
					}
					func_125(&iLocal_821, Local_868.f_0, 1);
					func_144(190, 1244.338f, -339.3197f, 68.0823f);
					unk_0x2112CE9FD54D593A("DRIVE", 0);
					unk_0x2112CE9FD54D593A("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0x2112CE9FD54D593A("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0x2112CE9FD54D593A("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				if ((func_149(2, Local_868.f_1, Local_868.f_4) && func_149(3, Local_840.f_1, Local_840.f_4)) && func_149(4, Local_854.f_1, Local_854.f_4))
				{
					func_124(unk_0xC1A5EC5C986B98AD(), 1197.861f, -353.011f, 68.0929f, 278.9647f);
					func_123();
					bLocal_28 = false;
					unk_0x2112CE9FD54D593A("DRIVE", 0);
					unk_0x2112CE9FD54D593A("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0x2112CE9FD54D593A("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0x2112CE9FD54D593A("WORLD_VEHICLE_DRIVE_SOLO", 0);
					func_40(1, 1, 1);
				}
			}
			else
			{
				func_142();
				return 1;
			}
			break;
		
		case 2:
			if (bParam1)
			{
				if (func_149(2, Local_868.f_1, Local_868.f_4))
				{
					func_123();
					func_142();
					unk_0x4C18E9202CF6CACA(unk_0xC1A5EC5C986B98AD(), Local_868.f_0, -1);
					bLocal_28 = false;
					func_40(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (bParam1)
			{
				if (func_149(2, Local_827, Local_868.f_4))
				{
					func_123();
					unk_0x4C18E9202CF6CACA(unk_0xC1A5EC5C986B98AD(), Local_868.f_0, -1);
					func_142();
					bLocal_28 = false;
					func_40(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_123()
{
	if (iLocal_683 == 1)
	{
		func_140(Local_840.f_0);
		func_139(Local_854.f_0);
		func_138(Local_868.f_0);
		func_127(iLocal_830, 1, 0, 1);
	}
	iLocal_877 = 0;
	iLocal_838 = 0;
	iLocal_839 = 0;
	iLocal_834 = 0;
	iLocal_835 = 0;
	iLocal_836 = 0;
}

void func_124(int iParam0, struct<3> Param1, float fParam4)
{
	if (func_343(uParam0))
	{
		unk_0x909F139DC199D8E0(uParam0);
	}
	func_109(iParam0, Param1, fParam4, 0, 1);
}

void func_125(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xCE4AAA035282336C(*iParam0))
	{
		*iParam0 = func_126(iParam1, iParam2, 5);
	}
}

int func_126(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_10(uParam0))
	{
		iVar0 = unk_0x53B496178AE44636(uParam0);
		unk_0x3BCF1F6A3573A1DF(iVar0, uParam1);
		unk_0xC2E0B90856D55E49(iVar0, iParam2);
		unk_0x225EB85DBC38E707(iVar0, 1f);
	}
	return iVar0;
}

void func_127(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iLocal_81 = iParam0;
	bLocal_663 = iParam1;
	bLocal_662 = iParam2;
	bLocal_664 = iParam3;
	Local_111[0 /*11*/].f_1 = 0;
	Local_111[1 /*11*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_81 - 1))
	{
		Local_134[iVar0 /*25*/].f_18 = 0;
		iVar0++;
	}
	fLocal_660 = 0f;
	func_129();
	Local_111[1 /*11*/].f_7 = 3;
	Local_111[1 /*11*/].f_5 = 0;
	Local_111[1 /*11*/].f_10 = 1;
	Local_111[1 /*11*/].f_2 = 1500;
	Local_111[1 /*11*/].f_3 = 500;
	Local_111[0 /*11*/].f_5 = 0;
	Local_111[0 /*11*/].f_10 = 0;
	Local_111[0 /*11*/].f_2 = 1000;
	Local_111[0 /*11*/].f_3 = 100;
	unk_0xDA95D0C19E737224("Enemies", &uLocal_80);
	unk_0x8386356641D0DED1(Local_111[0 /*11*/], uLocal_80);
	unk_0x8386356641D0DED1(Local_111[1 /*11*/], uLocal_80);
	unk_0xB0F23B683F51C9F0(Local_111[0 /*11*/], 1, 0);
	unk_0xB0F23B683F51C9F0(Local_111[1 /*11*/], 1, 0);
	func_128(1.9f, 1.9f, 8f, 0f, 0f, 0f);
}

void func_128(struct<3> Param0, struct<3> Param3)
{
	Local_82.f_8 = { Param0 };
	Local_82.f_11 = { Param3 };
	Local_82.f_1 = 4;
}

void func_129()
{
	if (!unk_0xE0D346789C5160EB(Local_111[0 /*11*/], iLocal_109, 0))
	{
		unk_0x7D9A648CC1936BDA(Local_111[0 /*11*/], unk_0x7394CB479CCA24AF(iLocal_109, func_137(1)), 1f, -1, 1048576000, 0, 1193033728);
		Local_111[0 /*11*/].f_7 = 1;
	}
	else
	{
		func_130(1);
	}
}

void func_130(bool bParam0)
{
	if (!unk_0x9CFCDD9C62B56708(iLocal_109, 0, 0))
	{
		func_131(bParam0);
		if (iLocal_661 != (iLocal_81 - 1))
		{
			if (iLocal_661 == 4)
			{
				unk_0x7F2FC190789087ED(Local_111[0 /*11*/], iLocal_109, Local_134[iLocal_661 /*25*/], 15f, 2883755, Local_134[iLocal_661 /*25*/].f_6);
			}
			else
			{
				unk_0xC562419B5DA3BB96(Local_111[0 /*11*/], iLocal_109, Local_134[iLocal_661 /*25*/], 15f, 0, 0, 2883755, Local_134[iLocal_661 /*25*/].f_6, Local_134[iLocal_661 /*25*/].f_7);
			}
			Local_111[0 /*11*/].f_8 = Local_111[0 /*11*/].f_7;
			Local_111[0 /*11*/].f_7 = 4;
		}
		else
		{
			unk_0xA6B22576A5268171(Local_111[0 /*11*/], iLocal_109, 15f, 786599);
			Local_111[0 /*11*/].f_8 = Local_111[0 /*11*/].f_7;
			Local_111[0 /*11*/].f_7 = 10;
		}
	}
	else
	{
		Local_111[0 /*11*/].f_8 = Local_111[0 /*11*/].f_7;
		Local_111[0 /*11*/].f_7 = 7;
	}
}

void func_131(bool bParam0)
{
	if (iLocal_661 != -1)
	{
		if (!func_136(Local_134[iLocal_661 /*25*/].f_11) && !func_136(Local_134[iLocal_661 /*25*/].f_14))
		{
			unk_0x8E09E8C52602EBB2(Local_134[iLocal_661 /*25*/].f_11 - Local_134[iLocal_661 /*25*/].f_14, Local_134[iLocal_661 /*25*/].f_11 + Local_134[iLocal_661 /*25*/].f_14, 1, 1);
		}
	}
	if (!bParam0)
	{
		func_134();
	}
	else
	{
		iLocal_661 = func_132();
	}
	if (iLocal_661 != -1)
	{
		if (!func_136(Local_134[iLocal_661 /*25*/].f_11) && !func_136(Local_134[iLocal_661 /*25*/].f_14))
		{
			unk_0x8E09E8C52602EBB2(Local_134[iLocal_661 /*25*/].f_11 - Local_134[iLocal_661 /*25*/].f_14, Local_134[iLocal_661 /*25*/].f_11 + Local_134[iLocal_661 /*25*/].f_14, 0, 1);
		}
	}
}

int func_132()
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6[21];
	float fVar28;
	float fVar29;
	float fVar30;
	int iVar31;
	
	if (func_37(iLocal_109))
	{
		Var1 = { unk_0x30BE8A934C020461(iLocal_109, 1) };
		iVar4 = 0;
		while (iVar4 <= (iLocal_81 - 1))
		{
			fVar28 = unk_0x2E496FE654DA4166(Var1, Local_134[iVar4 /*25*/], 1);
			if (!func_136(Local_134[iVar4 /*25*/]) && fVar28 > 25f)
			{
				fVar6[iVar4] = fVar28;
			}
			else
			{
				fVar6[iVar4] = -1f;
			}
			iVar4++;
		}
		fVar29 = fVar6[0];
		iVar4 = 0;
		while (iVar4 <= (iLocal_81 - 1))
		{
			if (fVar6[iVar4] != -1f)
			{
				if (fVar6[iVar4] < fVar29)
				{
					fVar29 = fVar6[iVar4];
					iVar0 = iVar4;
				}
			}
			iVar4++;
		}
		fVar30 = func_133(Local_134[iVar0 /*25*/] - Var1, unk_0x26A9C8234C71B669(iLocal_109));
		iVar5 = iVar0;
		iVar31 = 0;
		while (fVar30 < 0f && iVar31 < 40)
		{
			iVar5++;
			if (iVar5 >= 21)
			{
				iVar5 = 0;
			}
			Var1 = { unk_0x30BE8A934C020461(iLocal_109, 1) };
			fVar30 = func_133(Local_134[iVar5 /*25*/] - Var1, unk_0x26A9C8234C71B669(iLocal_109));
			iVar31++;
		}
		if (iVar31 >= 40)
		{
			iVar5 = (iLocal_81 - 1);
		}
	}
	iVar0 = iVar5;
	return iVar0;
}

float func_133(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

void func_134()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (bLocal_663)
	{
		while (Local_134[iLocal_661 /*25*/].f_18 && iVar0 != -1)
		{
			iLocal_661++;
			if (iLocal_661 >= (iLocal_81 - 1))
			{
				iVar0 = -1;
				iLocal_661 = (iLocal_81 - 1);
			}
		}
		if (iLocal_661 == (iLocal_81 - 1))
		{
			if (bLocal_662)
			{
				iLocal_661 = 0;
				iVar0 = 0;
				while (iVar0 <= (iLocal_81 - 1))
				{
					Local_134[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
			}
			else
			{
				iLocal_661 = (iLocal_81 - 1);
				return;
			}
		}
	}
	else
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 <= (iLocal_81 - 1))
		{
			if (Local_134[iVar0 /*25*/].f_18)
			{
				iVar1++;
			}
			iVar0++;
		}
		if (iVar1 == (iLocal_81 - 1))
		{
			iLocal_661 = (iLocal_81 - 1);
		}
		else if (iVar1 == iLocal_81)
		{
			if (bLocal_662)
			{
				iVar0 = 0;
				while (iVar0 <= (iLocal_81 - 1))
				{
					Local_134[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
				iLocal_661 = func_135();
			}
			else
			{
				iLocal_661 = -1;
				return;
			}
		}
		else
		{
			iLocal_661 = func_135();
		}
	}
}

int func_135()
{
	int iVar0;
	
	iVar0 = unk_0x15A88CFAAFFC6C4B(0, (iLocal_81 - 1));
	while (Local_134[iVar0 /*25*/].f_18)
	{
		iVar0 = unk_0x15A88CFAAFFC6C4B(0, (iLocal_81 - 1));
	}
	return iVar0;
}

int func_136(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_137(bool bParam0)
{
	struct<3> Var0;
	var uVar3;
	
	if (!bParam0)
	{
		uVar3 = unk_0xD854D152961C41A9(iLocal_109, "wheel_rf");
	}
	else
	{
		uVar3 = unk_0xD854D152961C41A9(iLocal_109, "wheel_lf");
	}
	Var0 = { unk_0x3C289AF334341CC6(iLocal_109, uVar3) };
	Var0 = { unk_0x5DC36ABEC3A264E9(iLocal_109, Var0) };
	if (!bParam0)
	{
		Var0 = { Var0 + Vector(0.5f, 0f, 1f) };
	}
	else
	{
		Var0 = { Var0 + Vector(0.5f, 0f, -1f) };
	}
	return Var0;
}

void func_138(int iParam0)
{
	if (func_37(iParam0))
	{
		iLocal_109 = iParam0;
	}
}

void func_139(var uParam0)
{
	if (func_343(uParam0))
	{
		Local_111[1 /*11*/] = uParam0;
	}
}

void func_140(var uParam0)
{
	if (func_343(uParam0))
	{
		Local_111[0 /*11*/] = uParam0;
	}
}

int func_141(bool bParam0)
{
	unk_0x28818732C8F0F80E("missfbi4prepp1");
	unk_0x558E7F4B2FC3C790("missfbi4prepp1_garbageman");
	if (bParam0)
	{
		while (!unk_0x2BBF749E555360DC("missfbi4prepp1") && !unk_0x285A13D6A2DCFD40("missfbi4prepp1_garbageman"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		return 1;
	}
	else if (unk_0x2BBF749E555360DC("missfbi4prepp1") && unk_0x285A13D6A2DCFD40("missfbi4prepp1_garbageman"))
	{
		return 1;
	}
	return 0;
}

void func_142()
{
	func_143(&uLocal_879);
}

void func_143(var uParam0)
{
	int iVar0;
	char* sVar1;
	
	switch (func_25())
	{
		case 0:
			iVar0 = 0;
			sVar1 = "MICHAEL";
			break;
		
		case 1:
			iVar0 = 1;
			sVar1 = "FRANKLIN";
			break;
		
		case 2:
			iVar0 = 2;
			sVar1 = "TREVOR";
			break;
	}
	func_98(uParam0, iVar0, unk_0xC1A5EC5C986B98AD(), sVar1, 0, 1);
}

void func_144(int iParam0, struct<3> Param1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if ((Param1.f_0 == Global_32543[iVar0 /*23*/][0 /*3*/] && Param1.f_1 == Global_32543[iVar0 /*23*/][0 /*3*/].f_1) && Param1.f_2 == Global_32543[iVar0 /*23*/][0 /*3*/].f_2)
	{
		return;
	}
	Global_32540 = 1;
	unk_0xECDAB41968FF21A8(&(Global_32543[iVar0 /*23*/].f_11), 18);
	Global_32543[iVar0 /*23*/][0 /*3*/] = { Param1 };
	Global_38593 = 1;
}

void func_145(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0xA26A9A07F761D8F8())
	{
		if (BitTest(Global_2793044.f_4690, 26))
		{
			return;
		}
	}
	if (unk_0x3FACE5B6ACB3A4AA())
	{
		unk_0x0D6E6120F1782BCF(iParam2);
		unk_0x29978E5D6F8BB77E("FocusIn");
		unk_0x3FA8C73B5856A3E4("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x451128B7D435FBF2("FocusOut", 0, 0);
			unk_0x531D638530A8DB97(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xEF54B7007CB2210B(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xB71C73D0269747D5(sVar0))
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xB71C73D0269747D5(uParam0->f_3))
	{
		if (func_146(uParam0->f_3))
		{
			unk_0xCD3C8E1022864F65(1);
		}
	}
	if (!unk_0xB71C73D0269747D5(sVar0))
	{
		if (func_146(sVar0))
		{
			unk_0xCD3C8E1022864F65(1);
		}
	}
}

bool func_146(char* sParam0)
{
	unk_0x56C9BC27C0FF68D7(sParam0);
	return unk_0x6A92D111B5409879(0);
}

void func_147(int iParam0)
{
	if (Global_97603 != -1)
	{
		if (iParam0 == Global_97603)
		{
			Global_97607 = 1;
			return;
		}
	}
}

int func_148()
{
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (unk_0x091E6E360116B927(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), joaat("trash")))
		{
			unk_0x85BAE84748AD1A23(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0), 1, 0);
			iLocal_874 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			if (func_37(iLocal_874))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_149(int iParam0, struct<3> Param1, float fParam4)
{
	switch (iParam0)
	{
		case 0:
			if (func_154(Param1, Local_824, 1056964608, 0) && fParam4 == 0f)
			{
				return 1;
			}
			break;
		
		case 1:
			unk_0xA3C681843B51A4CC(sLocal_819, 0);
			if (unk_0x578F9DB3098790E9(0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_37(Global_97178[0]))
			{
				unk_0x85BAE84748AD1A23(Global_97178[0], 1, 1);
				Local_868.f_0 = Global_97178[0];
				if (func_37(Local_868.f_0))
				{
					func_36(Local_868.f_0, 0);
					unk_0x5BC68FEFF4902C2B(Local_868.f_0, 1);
					unk_0xAD02BD8A749B79F9(Local_868.f_0, 1);
					return 1;
				}
			}
			else if (func_153(&Local_868, Local_868.f_5, Local_868.f_1, Local_868.f_4, 1))
			{
				func_36(Local_868.f_0, 0);
				unk_0x5BC68FEFF4902C2B(Local_868.f_0, 1);
				unk_0xAD02BD8A749B79F9(Local_868.f_0, 1);
				return 1;
			}
			break;
		
		case 3:
			if (unk_0x7DE17ACDD8BA2642(Global_97178.f_9[0]))
			{
				if (!unk_0xE678B2045145CE41(Global_97178.f_9[0], 1))
				{
					unk_0x85BAE84748AD1A23(Global_97178.f_9[0], 1, 1);
					Local_840.f_0 = Global_97178.f_9[0];
					if (func_343(Local_840.f_0))
					{
						unk_0xC5B2830898581862(Local_840.f_0, true);
						unk_0x598D91BBD045C1F3(Local_840.f_0, 170, 0);
						unk_0x474AA9EF29305EA8(Local_840.f_0, 65536, 1);
						unk_0x7FE5E05BE63F6CB8(Local_840.f_0, 50, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_150(&Local_840, Local_840.f_5, Local_840.f_1, Local_840.f_4, 1, 0, 1, 1))
			{
				if (func_37(Local_868.f_0))
				{
					unk_0x4C18E9202CF6CACA(Local_840.f_0, Local_868.f_0, -1);
					unk_0xC5B2830898581862(Local_840.f_0, true);
					unk_0x598D91BBD045C1F3(Local_840.f_0, 170, 0);
					unk_0x474AA9EF29305EA8(Local_840.f_0, 65536, 1);
					unk_0x7FE5E05BE63F6CB8(Local_840.f_0, 50, 1);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x7DE17ACDD8BA2642(Global_97178.f_9[1]))
			{
				if (!unk_0xE678B2045145CE41(Global_97178.f_9[1], 1))
				{
					unk_0x85BAE84748AD1A23(Global_97178.f_9[1], 1, 1);
					Local_854.f_0 = Global_97178.f_9[1];
					if (func_343(Local_854.f_0))
					{
						unk_0x598D91BBD045C1F3(Local_854.f_0, 170, 0);
						unk_0x474AA9EF29305EA8(Local_854.f_0, 65536, 1);
						unk_0x7FE5E05BE63F6CB8(Local_854.f_0, 50, 1);
						unk_0xC5B2830898581862(Local_854.f_0, true);
						unk_0x351E6B9FD37CFF33(Local_854.f_0, 1, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_150(&Local_854, Local_854.f_5, Local_854.f_1, Local_854.f_4, 1, 0, 1, 1))
			{
				if (func_37(Local_868.f_0))
				{
					unk_0x4C18E9202CF6CACA(Local_854.f_0, Local_868.f_0, 0);
					unk_0x598D91BBD045C1F3(Local_854.f_0, 170, 0);
					unk_0x474AA9EF29305EA8(Local_854.f_0, 65536, 1);
					unk_0x7FE5E05BE63F6CB8(Local_854.f_0, 50, 1);
					unk_0xC5B2830898581862(Local_854.f_0, true);
					unk_0x351E6B9FD37CFF33(Local_854.f_0, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_150(var uParam0, var uParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (func_152(uParam1, "Loading", 0))
		{
			*uParam0 = unk_0x69FDD9508259E5B5(26, uParam1, Param2, uParam5, 1, 1);
			if (func_343(*uParam0))
			{
				if (bParam7)
				{
					unk_0x2718E9CC165A99F6(*uParam0, 1);
				}
				if (bParam8)
				{
					unk_0xC5B2830898581862(*uParam0, bParam8);
				}
				if (!bParam9)
				{
					unk_0xD14067404D35AAE7(*uParam0, bParam9);
				}
				if (bParam6)
				{
					func_151(uParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_343(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_151(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (unk_0x0CBB7C273DED26E7(uParam0))
		{
			unk_0xE0A291F406691F03(uParam0);
		}
	}
	else
	{
		unk_0xE0A291F406691F03(uParam0);
	}
}

int func_152(var uParam0, char* sParam1, int iParam2)
{
	unk_0x852EC2A7DE66202D(uParam0);
	if (!unk_0x2AC37494BBF1DB16(sParam1) && iParam2 != -1)
	{
	}
	if (unk_0x0CBB7C273DED26E7(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_153(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (!unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (func_152(iParam1, "Loading", 0))
		{
			*uParam0 = unk_0xABEEDBEF2BBDF5B3(iParam1, Param2, fParam5, 1, 1, 0);
			if (unk_0x7DE17ACDD8BA2642(*uParam0))
			{
				if (!unk_0x1AFE963DA61006ED(*uParam0))
				{
					unk_0x85BAE84748AD1A23(*uParam0, 1, 0);
				}
				unk_0xCB8DD5B44DBC2DEB(*uParam0, 1084227584);
				if (bParam6)
				{
					func_151(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (func_37(*uParam0))
		{
			unk_0xC2E3C377D893C17A(*uParam0, Param2, 1, 0, 0, 1);
			unk_0x692C3FDAD7DB53CC(*uParam0, fParam5);
		}
		if (!unk_0x1AFE963DA61006ED(*uParam0))
		{
			unk_0x85BAE84748AD1A23(*uParam0, 1, 0);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_154(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x2655A8EC638E4FD1((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x2655A8EC638E4FD1((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x2655A8EC638E4FD1((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x2655A8EC638E4FD1((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x2655A8EC638E4FD1((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_155()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		func_156(&(Local_111[iVar0 /*11*/]), iVar0);
		iVar0++;
	}
}

void func_156(var uParam0, int iParam1)
{
	if (func_343(*uParam0))
	{
		func_202(uParam0, iParam1, 0);
		if (unk_0x7BB3D8F4F6310EB8(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 3))
		{
			if (unk_0x92377426879E21FF(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man") >= 0.172f)
			{
				if (func_10(Local_134[iLocal_661 /*25*/].f_17) && unk_0xDC116D955A63BDBE(Local_134[iLocal_661 /*25*/].f_17))
				{
					unk_0xEF514FB2706C4C1B(*uParam0, 1048576000);
					unk_0x5FA868BAA9EEFED7(*uParam0);
					if (iLocal_661 <= 20 && iLocal_661 != -1)
					{
						Local_134[iLocal_661 /*25*/].f_18 = 1;
						uParam0->f_9 = 0;
					}
					unk_0xA81AA70A4D25E140(Local_134[iLocal_661 /*25*/].f_17, 1, 0);
					unk_0xCA9BC8284D91B406(Local_134[iLocal_661 /*25*/].f_17, 1, unk_0x26A9C8234C71B669(*uParam0), 0, 1, 1, 0);
				}
			}
		}
		switch (uParam0->f_5)
		{
			case 0:
				if (iParam1 == 0)
				{
					func_199();
					func_198(uParam0);
				}
				func_185(uParam0);
				break;
			
			case 1:
				func_158(uParam0);
				break;
		}
	}
	else
	{
		if (func_10(Local_134[iLocal_661 /*25*/].f_17))
		{
			if (unk_0xDC116D955A63BDBE(Local_134[iLocal_661 /*25*/].f_17))
			{
				unk_0xA81AA70A4D25E140(Local_134[iLocal_661 /*25*/].f_17, 1, 0);
				unk_0xCA9BC8284D91B406(Local_134[iLocal_661 /*25*/].f_17, 1, unk_0x26A9C8234C71B669(*uParam0), 0, 1, 1, 0);
			}
		}
		func_7(&(uParam0->f_4));
		if (unk_0x7DE17ACDD8BA2642(*uParam0))
		{
			if (!func_157(unk_0xC1A5EC5C986B98AD(), *uParam0, 150f, 1) && !bLocal_665)
			{
				func_5(uParam0, 1, 0, 1);
			}
		}
	}
}

bool func_157(int iParam0, int iParam1, float fParam2, int iParam3)
{
	return unk_0xB7A628320EFF8E47(unk_0x30BE8A934C020461(iParam0, iParam3), unk_0x30BE8A934C020461(iParam1, iParam3)) <= (fParam2 * fParam2);
}

void func_158(var uParam0)
{
	var uVar0;
	var uVar1;
	
	switch (uParam0->f_6)
	{
		case 5:
			if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_1) > uParam0->f_3)
			{
				if (func_184(*uParam0, joaat("script_task_combat")))
				{
					unk_0x909F139DC199D8E0(*uParam0);
				}
				unk_0xC6C9BF71106ABCAC(*uParam0, unk_0xC1A5EC5C986B98AD(), 30f, -1, 0, 0);
				uParam0->f_6 = 6;
				uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
			}
			break;
		
		case 21:
			if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
			{
				if (func_177(*uParam0, unk_0xC1A5EC5C986B98AD(), 1126825984, 1, 250, 7))
				{
					func_176(uParam0, 1);
					return;
				}
			}
			if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_1) > uParam0->f_3)
			{
				if (!unk_0x3C3D6D026CF7F51B(*uParam0, 0))
				{
					unk_0xBF75ABE8685C7767(*uParam0, unk_0xC1A5EC5C986B98AD(), 8f, -1f, 10f, 0);
				}
				else
				{
					unk_0xDBC7406226B5540E(&uVar0);
					unk_0x6FE9A0C01D25F413(0, 0, 0);
					unk_0xCAC2B0C65B18E755(0, unk_0xC1A5EC5C986B98AD(), 0, 16);
					unk_0xF2CFC6EC8C85FA78(uVar0);
					unk_0x3D7110D966B0CEA2(*uParam0, uVar0);
					unk_0x63EF69C6969A3D26(&uVar0);
				}
				if (!unk_0xCE4AAA035282336C(uParam0->f_4))
				{
					uParam0->f_4 = func_173(*uParam0, 1, 145);
				}
				uParam0->f_6 = 22;
				uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
			}
			break;
		
		case 10:
			if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_1) > uParam0->f_3)
			{
				if (unk_0x3C3D6D026CF7F51B(*uParam0, 0))
				{
					unk_0x992BB708B4B7A005(*uParam0, 120, 1);
					uParam0->f_6 = 12;
					uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
				}
				else if (!func_184(*uParam0, joaat("script_task_cower")))
				{
					if (func_184(*uParam0, joaat("script_task_combat")))
					{
						unk_0x909F139DC199D8E0(*uParam0);
					}
					unk_0xA2C73FAE5789EC05(*uParam0, -1);
					uParam0->f_6 = 12;
					uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
				}
			}
			break;
		
		case 3:
			if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_1) > uParam0->f_3)
			{
				unk_0x1830A4193EBC57B2(*uParam0, 1, 1);
				unk_0xC6C9BF71106ABCAC(*uParam0, unk_0xC1A5EC5C986B98AD(), 500f, -1, 0, 1);
				uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
				uParam0->f_6 = 4;
				uParam0->f_5 = 1;
			}
			break;
		
		case 11:
			func_172(uParam0);
			if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_1) > 5000)
			{
				if (!func_184(*uParam0, joaat("script_task_follow_nav_mesh_to_coord")))
				{
					if (unk_0x7DE17ACDD8BA2642(Local_111[func_171(uParam0->f_10) /*11*/]))
					{
						unk_0x7D9A648CC1936BDA(*uParam0, Local_667, 1f, -1, 2f, 0, 1193033728);
					}
				}
				uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
				uParam0->f_6 = 23;
				uParam0->f_5 = 1;
			}
			break;
		
		case 18:
			if (!func_184(*uParam0, joaat("script_task_play_anim")))
			{
				unk_0xDBC7406226B5540E(&uVar1);
				if (func_170(unk_0x30BE8A934C020461(*uParam0, 1), unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1)) > 1.5f)
				{
					unk_0x195020A03AE6C628(0, unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1), 0);
				}
				unk_0x2B8574FAEA21141B(0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				unk_0xF2CFC6EC8C85FA78(uVar1);
				unk_0x3D7110D966B0CEA2(*uParam0, uVar1);
				unk_0x63EF69C6969A3D26(&uVar1);
				uParam0->f_5 = 1;
				uParam0->f_6 = 20;
				uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
			}
			break;
		
		case 19:
			func_172(uParam0);
			if (!func_184(*uParam0, joaat("script_task_play_anim")))
			{
				unk_0x2B8574FAEA21141B(*uParam0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				uParam0->f_5 = 1;
				uParam0->f_6 = 20;
				uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
			}
			break;
		
		case 1:
			if (!unk_0xE0D346789C5160EB(*uParam0, iLocal_109, 0))
			{
				func_168(uParam0);
			}
			break;
		
		case 2:
			if (!unk_0xACD39355028D39EF(*uParam0) && (unk_0xA5E11AF0A2B928C1() - uParam0->f_1) > 3000)
			{
				func_168(uParam0);
			}
			break;
		
		case 4:
			if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_1) > 8000)
			{
				unk_0xC6C9BF71106ABCAC(*uParam0, unk_0xC1A5EC5C986B98AD(), 500f, -1, 0, 0);
				if (!iLocal_666)
				{
					if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0)
					{
						unk_0x8FE445B0989D8C71(unk_0x93E99A2DBCBA9CFA(), 2, 0);
						unk_0x6CDFCA6843DA90FF(unk_0x93E99A2DBCBA9CFA(), 0);
						iLocal_666 = 1;
					}
				}
				unk_0x1830A4193EBC57B2(*uParam0, 0, 1);
				uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
				uParam0->f_6 = 8;
			}
			else if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 1)
			{
				unk_0x1830A4193EBC57B2(*uParam0, 0, 1);
				uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
				uParam0->f_6 = 8;
			}
			break;
		
		case 6:
			if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_1) > uParam0->f_2)
			{
				if (!func_157(*uParam0, unk_0xC1A5EC5C986B98AD(), 15f, 1))
				{
					func_7(&(uParam0->f_4));
					uParam0->f_6 = 7;
					uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
				}
			}
			break;
		
		case 7:
			if (unk_0xE0D346789C5160EB(*uParam0, iLocal_109, 1))
			{
				if (uParam0->f_6 != 4 && uParam0->f_6 != 1)
				{
					if (func_166())
					{
						if (func_343(*uParam0))
						{
							unk_0x909F139DC199D8E0(*uParam0);
							unk_0xC6C9BF71106ABCAC(*uParam0, unk_0xC1A5EC5C986B98AD(), 500f, -1, 0, 1);
							uParam0->f_6 = 1;
						}
					}
				}
				if (!func_157(*uParam0, unk_0xC1A5EC5C986B98AD(), 120f, 1))
				{
					func_5(uParam0, 1, 0, 1);
				}
			}
			else
			{
				func_168(uParam0);
			}
			break;
		
		case 8:
			if (!func_157(*uParam0, unk_0xC1A5EC5C986B98AD(), 120f, 1))
			{
				func_5(uParam0, 1, 0, 1);
			}
			break;
		
		case 9:
			if (unk_0xF276A75C8A36B189(*uParam0))
			{
				func_176(uParam0, 1);
				return;
			}
			if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_1) > uParam0->f_2 || !func_184(*uParam0, joaat("script_task_drive_by")))
			{
				func_163(uParam0);
			}
			break;
		
		case 12:
			if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_1) >= uParam0->f_2)
			{
				unk_0xC6C9BF71106ABCAC(*uParam0, unk_0xC1A5EC5C986B98AD(), 500f, -1, 0, 1);
				uParam0->f_6 = 5;
			}
			else
			{
				unk_0x992BB708B4B7A005(*uParam0, 120, 1);
			}
			break;
		
		case 13:
			if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_157(*uParam0, unk_0xC1A5EC5C986B98AD(), 15f, 1))
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
				}
				else if (func_177(Local_111[func_171(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_176(uParam0, 0);
				}
				else
				{
					func_162(uParam0);
					uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
				}
			}
			break;
		
		case 15:
			if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_157(*uParam0, unk_0xC1A5EC5C986B98AD(), 15f, 1))
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
				}
				else if (func_177(Local_111[func_171(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_176(uParam0, 0);
				}
				else
				{
					func_162(uParam0);
					uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
				}
			}
			break;
		
		case 16:
			if (unk_0xF276A75C8A36B189(*uParam0))
			{
				func_176(uParam0, 1);
				return;
			}
			if ((unk_0xA5E11AF0A2B928C1() - iLocal_670) >= 9000)
			{
				if (!func_161(uParam0))
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
				}
				else
				{
					uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
					uParam0->f_5 = 1;
					uParam0->f_6 = 16;
				}
			}
			else if ((unk_0xA5E11AF0A2B928C1() - iLocal_670) >= 5000 && (unk_0xA5E11AF0A2B928C1() - iLocal_670) <= 5500)
			{
				if (unk_0x3C3D6D026CF7F51B(*uParam0, 0))
				{
					if (unk_0x654D26EF23C82D70(*uParam0))
					{
						unk_0x77197132D34018BD(*uParam0);
					}
				}
			}
			break;
		
		case 14:
			if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_157(*uParam0, unk_0xC1A5EC5C986B98AD(), 15f, 1))
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
				}
				else if (func_177(Local_111[func_171(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_176(uParam0, 0);
				}
				else
				{
					func_162(uParam0);
					uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
				}
			}
			break;
		
		case 17:
			if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_157(*uParam0, unk_0xC1A5EC5C986B98AD(), 15f, 1))
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
				}
				else if (func_177(Local_111[func_171(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_176(uParam0, 0);
				}
				else
				{
					func_162(uParam0);
					uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
				}
			}
			break;
		
		case 20:
			if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6) && !unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
			{
				if (func_177(*uParam0, unk_0xC1A5EC5C986B98AD(), 1126825984, 1, 250, 7))
				{
					func_176(uParam0, 1);
					return;
				}
			}
			if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_1) >= 6000)
			{
				if (!unk_0x9DC9E896F189AAA5(*uParam0, unk_0x7394CB479CCA24AF(iLocal_109, 5f, 0f, -2f), unk_0x30BE8A934C020461(iLocal_109, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
				{
					func_163(uParam0);
				}
				else
				{
					func_168(uParam0);
					func_168(&(Local_111[func_171(uParam0->f_10) /*11*/]));
				}
				uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
			}
			func_172(uParam0);
			break;
		
		case 22:
			if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
			{
				if (func_177(*uParam0, unk_0xC1A5EC5C986B98AD(), 1126825984, 1, 250, 7))
				{
					func_176(uParam0, 1);
					return;
				}
			}
			if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_157(*uParam0, unk_0xC1A5EC5C986B98AD(), 15f, 1))
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
					return;
				}
				else
				{
					func_162(uParam0);
					uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
				}
			}
			break;
		
		case 23:
			func_202(uParam0, uParam0->f_10, 1);
			func_172(uParam0);
			if (func_107(*uParam0, Local_667, 2f, 1))
			{
				if (func_159(*uParam0, Local_667, 1126825984, 0))
				{
					unk_0x909F139DC199D8E0(*uParam0);
					uParam0->f_6 = 19;
					uParam0->f_5 = 1;
					uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
				}
			}
			break;
	}
}

int func_159(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_160(Param1 - unk_0x30BE8A934C020461(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0x26A9C8234C71B669(iParam0) };
	}
	else
	{
		Var3 = { func_160(unk_0x985D9D5ED4D5145A(iParam0, 31086, 0f, 5f, 0f) - unk_0x985D9D5ED4D5145A(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_133(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

Vector3 func_160(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_161(var uParam0)
{
	if (unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), unk_0x7394CB479CCA24AF(iLocal_109, 0f, 10f, -2f), unk_0x7394CB479CCA24AF(iLocal_109, 0f, 3f, 2f), 5f, 0, 1, 0) && unk_0x63E1343737CA1E47(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_162(var uParam0)
{
	int iVar0;
	
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		if (func_37(iVar0))
		{
			if (!unk_0x73D13C05CA29773A(*uParam0, iVar0, -1, 0, 0))
			{
				uParam0->f_6 = 18;
				uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
			}
		}
	}
}

void func_163(var uParam0)
{
	unk_0x0133FF6E23A1DCA4(2, uLocal_80, joaat("player"));
	switch (uParam0->f_8)
	{
		case 4:
			break;
		
		case 10:
			break;
		
		case 8:
			func_129();
			break;
		
		case 3:
			if (!func_184(*uParam0, joaat("script_task_perform_sequence")))
			{
				if (iLocal_661 <= 20 && iLocal_661 != -1)
				{
					Local_134[iLocal_661 /*25*/].f_18 = 1;
				}
				if (!unk_0xE0D346789C5160EB(*uParam0, iLocal_109, 0))
				{
					if (uParam0->f_10 == 0)
					{
						unk_0x7D9A648CC1936BDA(*uParam0, unk_0x7394CB479CCA24AF(iLocal_109, func_137(1)), 1f, -1, 1048576000, 0, 1193033728);
						uParam0->f_7 = 1;
					}
					else
					{
						unk_0x7D9A648CC1936BDA(*uParam0, unk_0x7394CB479CCA24AF(iLocal_109, func_137(0)), 1f, -1, 1048576000, 0, 1193033728);
						uParam0->f_7 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xE0D346789C5160EB(*uParam0, iLocal_109, 0))
			{
				if (uParam0->f_10 == 0)
				{
					unk_0x7D9A648CC1936BDA(*uParam0, unk_0x7394CB479CCA24AF(iLocal_109, func_137(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0x7D9A648CC1936BDA(*uParam0, unk_0x7394CB479CCA24AF(iLocal_109, func_137(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			break;
		
		case 9:
			if (!Local_134[iLocal_661 /*25*/].f_18)
			{
				if (uParam0->f_9 == 1)
				{
					func_164(uParam0);
				}
				else if (uParam0->f_10 == 0)
				{
					unk_0x7D9A648CC1936BDA(*uParam0, unk_0x7394CB479CCA24AF(iLocal_109, func_137(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0x7D9A648CC1936BDA(*uParam0, unk_0x7394CB479CCA24AF(iLocal_109, func_137(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			else if (!unk_0xE0D346789C5160EB(*uParam0, iLocal_109, 0))
			{
				if (uParam0->f_10 == 0)
				{
					unk_0x7D9A648CC1936BDA(*uParam0, unk_0x7394CB479CCA24AF(iLocal_109, func_137(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0x7D9A648CC1936BDA(*uParam0, unk_0x7394CB479CCA24AF(iLocal_109, func_137(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			break;
		
		default:
			break;
	}
	uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
	uParam0->f_5 = 0;
}

void func_164(var uParam0)
{
	if (!func_184(*uParam0, joaat("script_task_put_ped_directly_into_melee")))
	{
		if (Local_134[iLocal_661 /*25*/].f_23 != 0)
		{
			if (func_10(Local_134[iLocal_661 /*25*/].f_17))
			{
				unk_0x22219303C0648071(*uParam0, Local_134[iLocal_661 /*25*/].f_17, -1, 0f, 180f, 1f, 0);
			}
		}
		else
		{
			unk_0x7D9A648CC1936BDA(*uParam0, Local_134[iLocal_661 /*25*/].f_19, 1f, 20000, -1f, 0, func_165(Local_134[iLocal_661 /*25*/].f_19, unk_0x30BE8A934C020461(*uParam0, 1), 1));
		}
		if (func_37(iLocal_109))
		{
			unk_0xADDC2DFB04C3C0E9(iLocal_109, 5, 0, 0);
		}
		uParam0->f_8 = uParam0->f_7;
		uParam0->f_7 = 9;
		uParam0->f_9 = 1;
	}
}

float func_165(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x360118B65D6530C6(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_166()
{
	if (func_37(iLocal_109) && func_343(unk_0xC1A5EC5C986B98AD()))
	{
		if (unk_0x7559C38E6535AB89(iLocal_109, unk_0xC1A5EC5C986B98AD(), 1))
		{
			unk_0x5CE354E3C73D2002(iLocal_109);
			if (func_167() || unk_0x2935B4D6CE81318D(iLocal_109) < 851)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_167()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0xE95D0CF0802593FC(iLocal_109, iVar0, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_168(var uParam0)
{
	if (uParam0->f_6 != 3 && uParam0->f_6 != 4)
	{
		func_169(uParam0);
		uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
		uParam0->f_6 = 3;
		uParam0->f_5 = 1;
	}
}

void func_169(var uParam0)
{
	if (uParam0->f_7 == 9)
	{
		if (uParam0->f_9 >= 2)
		{
			if (!unk_0x66599E73DBA5A850(*uParam0))
			{
				unk_0xEF514FB2706C4C1B(*uParam0, 1048576000);
				unk_0x5FA868BAA9EEFED7(*uParam0);
				unk_0x3EE48ADC8C7F5CC4(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 8f, -8f, -1, 56, 0, 0, 0, 0);
			}
		}
	}
}

float func_170(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0x06A2A02CDC68090B((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_171(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_172(var uParam0)
{
	if (func_37(iLocal_109) && (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_109, 0) && !unk_0xE0D346789C5160EB(*uParam0, iLocal_109, 0)))
	{
		if (unk_0xDC58AE028CB223BA(iLocal_109) > 0f)
		{
			uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
			uParam0->f_8 = uParam0->f_7;
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
		}
	}
}

var func_173(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_174(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCE4AAA035282336C(uVar0)) && unk_0x42FA33BDEDF21186(&(Global_2028[iParam2 /*29*/].f_3)))
	{
		unk_0x4049FDC177C92D4B(uVar0, &(Global_2028[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_174(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7DE17ACDD8BA2642(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x53B496178AE44636(iParam0);
	if (unk_0xA6B591D40DE982B5(iParam0))
	{
		unk_0x225EB85DBC38E707(iVar0, func_175(unk_0xA26A9A07F761D8F8(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x3BCF1F6A3573A1DF(iVar0, bParam1);
		}
		else
		{
			unk_0x1886753DA39F38F8(iVar0, 2);
		}
	}
	else if (unk_0x71904BD37B848CAF(iParam0))
	{
		unk_0x225EB85DBC38E707(iVar0, func_175(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
		unk_0x3BCF1F6A3573A1DF(iVar0, bParam1);
	}
	else if (unk_0x4E7A9806173C3AD1(iParam0))
	{
		unk_0x225EB85DBC38E707(iVar0, func_175(unk_0xA26A9A07F761D8F8(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_175(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_176(var uParam0, int iParam1)
{
	func_169(uParam0);
	if ((unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6) || iParam1) || uParam0->f_6 == 23)
	{
		if (!func_157(unk_0xC1A5EC5C986B98AD(), *uParam0, 10f, 1))
		{
			if (!func_184(*uParam0, joaat("script_task_smart_flee_ped")))
			{
				uParam0->f_6 = 5;
				uParam0->f_5 = 1;
				uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
			}
		}
		else
		{
			uParam0->f_6 = 10;
			uParam0->f_5 = 1;
			uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
		}
	}
	else if (uParam0->f_5 != 1)
	{
		if (!func_184(*uParam0, joaat("script_task_combat")) && !func_184(*uParam0, joaat("script_task_put_ped_directly_into_melee")))
		{
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
			uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
		}
	}
}

bool func_177(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_183(iParam0, iParam1);
	if (!func_10(iParam0) || !func_10(iParam1))
	{
		if (iVar4 != -1)
		{
			func_182(&(Local_38[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_181(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_180();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_38[iVar4 /*4*/].f_1 = iParam0;
		Local_38[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x985D9D5ED4D5145A(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_178(&(Local_38[iVar4 /*4*/]), Var1, iParam1, &(Local_38[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0xA5E11AF0A2B928C1() - Local_38[iVar4 /*4*/].f_3) < iParam4);
}

int func_178(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_10(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_179(iParam4, iParam7) };
		*uParam0 = unk_0xB4C9A1D39D0533BF(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x5A2817B89A8ECCD2(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x71904BD37B848CAF(iVar7))
	{
		func_10(iVar7);
		if (unk_0x9C8D7679C15E75FF(iVar7) == iParam4)
		{
			if (bLocal_79)
			{
				unk_0x69151260CB07DF0E(Param1, unk_0x30BE8A934C020461(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0xA5E11AF0A2B928C1();
			return 1;
		}
		return 0;
	}
	if (unk_0xA6B591D40DE982B5(iVar7))
	{
		func_10(iVar7);
		if (unk_0x3C3D6D026CF7F51B(iParam4, 0))
		{
			if (unk_0x4DFB7A1A6909D574(iVar7) == unk_0x95DC39736F6748E3(iParam4, 0))
			{
				if (bLocal_79)
				{
					unk_0x69151260CB07DF0E(Param1, unk_0x30BE8A934C020461(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0xA5E11AF0A2B928C1();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_179(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x15A88CFAAFFC6C4B(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x30BE8A934C020461(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x985D9D5ED4D5145A(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x985D9D5ED4D5145A(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x985D9D5ED4D5145A(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x985D9D5ED4D5145A(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x985D9D5ED4D5145A(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x985D9D5ED4D5145A(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x30BE8A934C020461(iParam0, 1);
}

int func_180()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_38.f_0)
	{
		if ((Local_38[iVar0 /*4*/] == 0 && Local_38[iVar0 /*4*/].f_1 == 0) && Local_38[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_181(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_160(unk_0x30BE8A934C020461(iParam1, 1) - unk_0x30BE8A934C020461(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x26A9C8234C71B669(iParam0) };
	}
	else
	{
		Var3 = { func_160(unk_0x985D9D5ED4D5145A(iParam0, 31086, 0f, 5f, 0f) - unk_0x985D9D5ED4D5145A(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_133(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

void func_182(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_183(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_38.f_0)
	{
		if (Local_38[iVar0 /*4*/].f_1 == iParam0 && Local_38[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_184(int iParam0, int iParam1)
{
	if (func_343(uParam0))
	{
		if (unk_0xF5F493B789EA063E(uParam0, iParam1) == 1 || unk_0xF5F493B789EA063E(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_185(var uParam0)
{
	float fVar0;
	
	if (uParam0->f_9 == 0 && uParam0->f_10 == 1)
	{
	}
	switch (uParam0->f_7)
	{
		case 1:
			if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_109, 1))
			{
				func_176(uParam0, 0);
				return;
			}
			if (uParam0->f_10 == 0)
			{
				func_196(uParam0, 1);
			}
			else
			{
				func_196(uParam0, 0);
			}
			break;
		
		case 2:
			if (unk_0x44A6C9475C859B45(*uParam0, iLocal_109))
			{
				if (!func_184(*uParam0, joaat("script_task_enter_vehicle")))
				{
					if (uParam0->f_10 == 0)
					{
						func_130(0);
					}
					else
					{
						uParam0->f_7 = 3;
					}
				}
			}
			else if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_109, 1))
			{
				func_176(uParam0, 0);
				return;
			}
			break;
		
		case 3:
			if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_109, 1))
			{
				func_176(uParam0, 0);
				return;
			}
			if (bLocal_664)
			{
				if (iLocal_661 <= 20 && iLocal_661 != -1)
				{
					if (!Local_134[iLocal_661 /*25*/].f_18)
					{
						if (func_107(*uParam0, Local_134[iLocal_661 /*25*/], 20f, 1))
						{
							if (Local_134[iLocal_661 /*25*/].f_9 && unk_0xF193A4B306E6BF93(iLocal_109))
							{
								func_195();
							}
						}
					}
				}
				else
				{
					uParam0->f_7 = 10;
				}
			}
			break;
		
		case 4:
			if (func_107(*uParam0, Local_134[iLocal_661 /*25*/], 25f, 1))
			{
				if (Local_134[iLocal_661 /*25*/].f_9)
				{
					func_194(uParam0);
				}
				else
				{
					Local_134[iLocal_661 /*25*/].f_18 = 1;
					func_130(0);
				}
			}
			break;
		
		case 5:
			if (func_37(iLocal_109))
			{
				unk_0xC8927C3AD7C5D2E1(iLocal_109, 25f, 10, 0);
				fVar0 = unk_0xDC58AE028CB223BA(iLocal_109);
				if (fVar0 < 8f)
				{
					func_194(uParam0);
				}
			}
			break;
		
		case 6:
			if (!func_184(*uParam0, joaat("script_task_perform_sequence")) && unk_0xF193A4B306E6BF93(iLocal_109))
			{
				if (bLocal_664)
				{
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 7;
				}
				else
				{
					unk_0x6FE9A0C01D25F413(*uParam0, 0, 0);
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 8;
				}
			}
			break;
		
		case 7:
			if (func_343(Local_111[1 /*11*/]))
			{
				if (unk_0xE0D346789C5160EB(Local_111[1 /*11*/], iLocal_109, 0) && Local_111[1 /*11*/].f_7 == 3)
				{
					func_130(0);
				}
			}
			break;
		
		case 8:
			if (!unk_0xE0D346789C5160EB(*uParam0, iLocal_109, 0))
			{
				func_164(uParam0);
			}
			break;
		
		case 9:
			func_186(uParam0);
			break;
	}
}

void func_186(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (uParam0->f_9 >= 1 && uParam0->f_9 != 0)
	{
	}
	switch (uParam0->f_9)
	{
		case 1:
			if (!func_184(*uParam0, joaat("script_task_goto_entity_offset")))
			{
				unk_0xDBC7406226B5540E(&uVar0);
				if (func_170(unk_0x30BE8A934C020461(*uParam0, 1), Local_134[iLocal_661 /*25*/].f_19) > 1.5f)
				{
					unk_0x195020A03AE6C628(0, Local_134[iLocal_661 /*25*/].f_19, 0);
				}
				unk_0x3EE48ADC8C7F5CC4(0, "missfbi4prepp1", "_bag_pickup_garbage_man", 8f, -16f, -1, 528384, 0, 0, 0, 0);
				unk_0xF2CFC6EC8C85FA78(uVar0);
				unk_0x3D7110D966B0CEA2(*uParam0, uVar0);
				unk_0x63EF69C6969A3D26(&uVar0);
				uParam0->f_9 = 2;
			}
			else if (func_191(Local_134[iLocal_661 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
			{
				func_190(uParam0);
				return;
			}
			unk_0x188EE482FAFEF565(*uParam0, 0.2f);
			break;
		
		case 2:
			if (func_184(*uParam0, joaat("script_task_perform_sequence")))
			{
				if (unk_0x7BB3D8F4F6310EB8(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man", 3))
				{
					if (unk_0x92377426879E21FF(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man") >= 0.333f)
					{
						unk_0xFE06D34CC973CDD2(*uParam0, "missfbi4prepp1_garbageman", 0f);
						unk_0x5BD6BBF8000B3F52(*uParam0, "missfbi4prepp1_garbageman");
						if (func_10(Local_134[iLocal_661 /*25*/].f_17) && !unk_0xDC116D955A63BDBE(Local_134[iLocal_661 /*25*/].f_17))
						{
							unk_0xBD02C9D4D7076ECC(Local_134[iLocal_661 /*25*/].f_17, *uParam0, unk_0xCF99BEF1317B66DA(*uParam0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0);
						}
					}
				}
				if (func_191(Local_134[iLocal_661 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
				{
					func_190(uParam0);
					return;
				}
			}
			else if (!func_184(*uParam0, joaat("script_task_follow_nav_mesh_to_coord")))
			{
				if (func_37(iLocal_109))
				{
					unk_0x7D9A648CC1936BDA(*uParam0, unk_0x7394CB479CCA24AF(iLocal_109, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, unk_0xD850DD08D5434072(iLocal_109));
				}
				uParam0->f_9 = 3;
			}
			unk_0x188EE482FAFEF565(*uParam0, 0.2f);
			break;
		
		case 3:
			if (func_37(iLocal_109))
			{
				if (!func_191(unk_0x7394CB479CCA24AF(iLocal_109, 0f, -5.5f, 0f), iLocal_109, 1.9f, 1.9f, 8f))
				{
					if (unk_0x1C4E4DC1EFE24DF1(*uParam0, unk_0x7394CB479CCA24AF(iLocal_109, 0f, -5.5f, 0f), 0.9f, 0.9f, 2f, 0, 1, 0))
					{
						if (!func_184(*uParam0, joaat("script_task_follow_nav_mesh_to_coord")))
						{
							unk_0xDBC7406226B5540E(&uVar1);
							if (func_170(unk_0x30BE8A934C020461(*uParam0, 1), unk_0x30BE8A934C020461(iLocal_109, 1)) > 3f)
							{
								unk_0x2CD3E39D98CC3FA9(0, unk_0xD850DD08D5434072(iLocal_109), 0);
							}
							unk_0x3EE48ADC8C7F5CC4(0, "missfbi4prepp1", "_bag_throw_garbage_man", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xF2CFC6EC8C85FA78(uVar1);
							unk_0x3D7110D966B0CEA2(*uParam0, uVar1);
							unk_0x63EF69C6969A3D26(&uVar1);
							uParam0->f_9 = 4;
						}
					}
					else if (!func_184(*uParam0, joaat("script_task_follow_nav_mesh_to_coord")))
					{
						unk_0x7D9A648CC1936BDA(*uParam0, unk_0x7394CB479CCA24AF(iLocal_109, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, unk_0xD850DD08D5434072(iLocal_109));
					}
				}
				else
				{
					func_188(uParam0);
				}
			}
			break;
		
		case 4:
			if (!func_191(unk_0x7394CB479CCA24AF(iLocal_109, 0f, -5.5f, 0f), *uParam0, 1.9f, 1.9f, 8f))
			{
				if (func_184(*uParam0, joaat("script_task_perform_sequence")))
				{
					if (unk_0x7BB3D8F4F6310EB8(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man", 3))
					{
						if (unk_0x92377426879E21FF(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man") >= 0.391f)
						{
							if (func_10(Local_134[iLocal_661 /*25*/].f_17))
							{
								if (unk_0xDC116D955A63BDBE(Local_134[iLocal_661 /*25*/].f_17))
								{
									unk_0xEF514FB2706C4C1B(*uParam0, 1048576000);
									unk_0x5FA868BAA9EEFED7(*uParam0);
									unk_0xA81AA70A4D25E140(Local_134[iLocal_661 /*25*/].f_17, 1, 0);
									unk_0xC86E66BD231706E6(Local_134[iLocal_661 /*25*/].f_17, 2f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1082130432, -1082130432, -1082130432);
									unk_0xCA9BC8284D91B406(Local_134[iLocal_661 /*25*/].f_17, 1, unk_0x26A9C8234C71B669(*uParam0), 0, 1, 1, 0);
								}
								if (unk_0x110B96B5C67CC73B(Local_134[iLocal_661 /*25*/].f_17, iLocal_109))
								{
									func_187(&(Local_134[iLocal_661 /*25*/].f_17));
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_9 = 0;
					if (func_37(iLocal_109))
					{
						unk_0xC66046DE94E06CAC(iLocal_109, 5, 0);
						func_187(&(Local_134[iLocal_661 /*25*/].f_17));
					}
					func_163(uParam0);
				}
			}
			else
			{
				func_188(uParam0);
			}
			break;
		
		case 5:
			break;
	}
}

void func_187(var uParam0)
{
	if (unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (unk_0xEFF022A75A217E08(*uParam0))
		{
			unk_0xA81AA70A4D25E140(*uParam0, 1, 1);
		}
		unk_0xEF078F1FEE785D3E(uParam0);
	}
}

void func_188(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0x0133FF6E23A1DCA4(5, uLocal_80, joaat("player"));
	func_169(uParam0);
	if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (!unk_0x3C3D6D026CF7F51B(*uParam0, 0))
		{
			unk_0xBF75ABE8685C7767(*uParam0, unk_0xC1A5EC5C986B98AD(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0xDBC7406226B5540E(&uVar0);
			unk_0x6FE9A0C01D25F413(0, 0, 0);
			unk_0xCAC2B0C65B18E755(0, unk_0xC1A5EC5C986B98AD(), 0, 16);
			unk_0xF2CFC6EC8C85FA78(uVar0);
			unk_0x3D7110D966B0CEA2(*uParam0, uVar0);
			unk_0x63EF69C6969A3D26(&uVar0);
		}
	}
	else
	{
		unk_0xDBC7406226B5540E(&uVar1);
		unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
		unk_0xCAC2B0C65B18E755(0, unk_0xC1A5EC5C986B98AD(), 0, 16);
		unk_0xF2CFC6EC8C85FA78(uVar1);
		unk_0x3D7110D966B0CEA2(*uParam0, uVar1);
		unk_0x63EF69C6969A3D26(&uVar1);
	}
	unk_0xEF514FB2706C4C1B(*uParam0, 1048576000);
	unk_0x5FA868BAA9EEFED7(*uParam0);
	func_189();
	if (!unk_0xCE4AAA035282336C(uParam0->f_4))
	{
		uParam0->f_4 = func_173(*uParam0, 1, 145);
	}
	uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 15;
}

void func_189()
{
	Local_82.f_0 = 0;
	Local_82.f_26 = 0;
	Local_82.f_18 = 0;
}

void func_190(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0x0133FF6E23A1DCA4(5, uLocal_80, joaat("player"));
	func_169(uParam0);
	if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (!unk_0x3C3D6D026CF7F51B(*uParam0, 0))
		{
			unk_0xBF75ABE8685C7767(*uParam0, unk_0xC1A5EC5C986B98AD(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0xDBC7406226B5540E(&uVar0);
			unk_0x6FE9A0C01D25F413(0, 0, 0);
			unk_0xCAC2B0C65B18E755(0, unk_0xC1A5EC5C986B98AD(), 0, 16);
			unk_0xF2CFC6EC8C85FA78(uVar0);
			unk_0x3D7110D966B0CEA2(*uParam0, uVar0);
			unk_0x63EF69C6969A3D26(&uVar0);
		}
	}
	else
	{
		unk_0xDBC7406226B5540E(&uVar1);
		unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
		unk_0xCAC2B0C65B18E755(0, unk_0xC1A5EC5C986B98AD(), 0, 16);
		unk_0xF2CFC6EC8C85FA78(uVar1);
		unk_0x3D7110D966B0CEA2(*uParam0, uVar1);
		unk_0x63EF69C6969A3D26(&uVar1);
	}
	unk_0xEF514FB2706C4C1B(*uParam0, 1048576000);
	unk_0x5FA868BAA9EEFED7(*uParam0);
	func_189();
	if (!unk_0xCE4AAA035282336C(uParam0->f_4))
	{
		uParam0->f_4 = func_173(*uParam0, 1, 145);
	}
	uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 14;
}

int func_191(struct<3> Param0, int iParam3, struct<3> Param4)
{
	Local_82.f_2 = { Param0 };
	Local_82.f_8 = { Param4 };
	func_192(&Local_82, iParam3);
	if (Local_82.f_26)
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (unk_0xA6B591D40DE982B5(Local_82.f_18))
			{
				if (func_10(Local_82.f_18))
				{
					if (unk_0x4DFB7A1A6909D574(Local_82.f_18) == unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 1))
					{
						return 1;
					}
				}
			}
		}
		else if (unk_0x71904BD37B848CAF(Local_82.f_18))
		{
			if (func_10(Local_82.f_18))
			{
				if (unk_0x9C8D7679C15E75FF(Local_82.f_18) == unk_0xC1A5EC5C986B98AD())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_192(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x5A2817B89A8ECCD2(*uParam0, &iVar0, &(uParam0->f_20), &(uParam0->f_23), &(uParam0->f_18));
	uParam0->f_19 = 2 == iVar1;
	if (uParam0->f_19)
	{
		if (0 == iVar0)
		{
			uParam0->f_26 = 0;
		}
		else
		{
			uParam0->f_26 = 1;
		}
	}
	if (iVar1 != 1)
	{
		func_193(uParam0, uParam1);
	}
}

void func_193(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			break;
		
		case 1:
			*uParam0 = unk_0xB4C9A1D39D0533BF(uParam0->f_2, uParam0->f_5, 511, uParam1, 7);
			break;
		
		case 2:
			*uParam0 = unk_0xB01BF065624D5C26(uParam0->f_17, 511, 4);
			break;
		
		case 3:
			*uParam0 = unk_0xE5C2B928954F200C(uParam0->f_17, 511, 4);
			break;
		
		case 4:
			*uParam0 = unk_0x947A5F10899CB90E(uParam0->f_2, uParam0->f_8, uParam0->f_11, uParam0->f_14, 6, iParam1, 4);
			break;
		
		case 5:
			*uParam0 = unk_0xD8D74C74516FDA20(uParam0->f_2, uParam0->f_5, uParam0->f_15, 511, iParam1, 4);
			break;
	}
	uParam0->f_16 = *uParam0 != 0;
}

void func_194(var uParam0)
{
	var uVar0;
	
	if (func_37(iLocal_109))
	{
		unk_0xDBC7406226B5540E(&uVar0);
		unk_0xC562419B5DA3BB96(0, iLocal_109, Local_134[iLocal_661 /*25*/].f_3, 8f, 0, joaat("trash"), 786469, 10f, 15f);
		unk_0x267F4694BB0C680B(0, iLocal_109, Local_134[iLocal_661 /*25*/].f_3, Local_134[iLocal_661 /*25*/].f_8, Local_134[iLocal_661 /*25*/].f_10, 5f, 1);
		unk_0xF2CFC6EC8C85FA78(uVar0);
		unk_0x3D7110D966B0CEA2(*uParam0, uVar0);
		unk_0x63EF69C6969A3D26(&uVar0);
		uParam0->f_7 = 6;
	}
}

void func_195()
{
	func_164(&(Local_111[1 /*11*/]));
}

void func_196(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (func_191(unk_0x7394CB479CCA24AF(iLocal_109, func_137(bParam1)), iLocal_109, 1.9f, 1.9f, 8f))
	{
		if (unk_0x9DC9E896F189AAA5(*uParam0, unk_0x7394CB479CCA24AF(iLocal_109, 5f, 0f, -2f), unk_0x30BE8A934C020461(iLocal_109, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0) && unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), unk_0x7394CB479CCA24AF(iLocal_109, 5f, 0f, -2f), unk_0x30BE8A934C020461(iLocal_109, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			func_197(uParam0);
		}
		else if (!func_184(*uParam0, joaat("script_task_go_to_entity")) && unk_0x9DC9E896F189AAA5(unk_0xC1A5EC5C986B98AD(), unk_0x7394CB479CCA24AF(iLocal_109, 5f, 0f, -2f), unk_0x30BE8A934C020461(iLocal_109, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			unk_0x909F139DC199D8E0(*uParam0);
			unk_0xF41AB1E9C5AC9D70(*uParam0, unk_0xC1A5EC5C986B98AD(), -1, 4f, 1f, 1073741824, 0);
		}
	}
	else if (func_107(*uParam0, unk_0x7394CB479CCA24AF(iLocal_109, func_137(bParam1)), 5f, 1))
	{
		iVar0 = -1;
		if (!bParam1)
		{
			iVar0 = 0;
		}
		unk_0xD30E9CAE1FEA1C7E(*uParam0, iLocal_109, -1, iVar0, 1f, 8388609, 0);
		uParam0->f_7 = 2;
	}
}

void func_197(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0x0133FF6E23A1DCA4(5, uLocal_80, joaat("player"));
	func_169(uParam0);
	if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (!unk_0x3C3D6D026CF7F51B(*uParam0, 0))
		{
			unk_0xBF75ABE8685C7767(*uParam0, unk_0xC1A5EC5C986B98AD(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0xDBC7406226B5540E(&uVar0);
			unk_0x6FE9A0C01D25F413(0, 0, 0);
			unk_0xCAC2B0C65B18E755(0, unk_0xC1A5EC5C986B98AD(), 0, 16);
			unk_0xF2CFC6EC8C85FA78(uVar0);
			unk_0x3D7110D966B0CEA2(*uParam0, uVar0);
			unk_0x63EF69C6969A3D26(&uVar0);
		}
	}
	else
	{
		unk_0xDBC7406226B5540E(&uVar1);
		unk_0x06A2A5F6A6959BE7(0, unk_0xC1A5EC5C986B98AD(), 0);
		unk_0xCAC2B0C65B18E755(0, unk_0xC1A5EC5C986B98AD(), 0, 16);
		unk_0xF2CFC6EC8C85FA78(uVar1);
		unk_0x3D7110D966B0CEA2(*uParam0, uVar1);
		unk_0x63EF69C6969A3D26(&uVar1);
	}
	unk_0xEF514FB2706C4C1B(*uParam0, 1048576000);
	unk_0x5FA868BAA9EEFED7(*uParam0);
	func_189();
	uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 13;
}

void func_198(var uParam0)
{
	if (uParam0->f_5 != 1)
	{
		if (func_37(iLocal_109) && unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			if (!func_184(*uParam0, joaat("script_task_drive_by")) && unk_0xE0D346789C5160EB(*uParam0, iLocal_109, 0))
			{
				if (func_157(unk_0xC1A5EC5C986B98AD(), iLocal_109, 10f, 1))
				{
					if (unk_0x110B96B5C67CC73B(iLocal_109, unk_0xC1A5EC5C986B98AD()))
					{
						unk_0x6855D2807847D85A(*uParam0, unk_0xC1A5EC5C986B98AD(), 0, 0f, 0f, 0f, 10f, 100, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
						uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
						uParam0->f_6 = 9;
					}
				}
			}
		}
	}
}

void func_199()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_81 - 1))
	{
		if (Local_134[iVar0 /*25*/].f_23 != 0)
		{
			if (Local_134[iVar0 /*25*/].f_24)
			{
				if ((iVar0 != iLocal_661 && func_10(Local_134[iVar0 /*25*/].f_17)) && func_201(Local_134[iVar0 /*25*/].f_17, unk_0xC1A5EC5C986B98AD(), 1) > 200f)
				{
					unk_0xEF078F1FEE785D3E(&(Local_134[iVar0 /*25*/].f_17));
					Local_134[iVar0 /*25*/].f_24 = 0;
				}
			}
			else if (Local_134[iVar0 /*25*/].f_23 != 0)
			{
				if (func_107(unk_0xC1A5EC5C986B98AD(), Local_134[iVar0 /*25*/], 100f, 1) || func_107(Local_111[0 /*11*/], Local_134[iVar0 /*25*/], 120f, 1))
				{
					Local_134[iVar0 /*25*/].f_24 = func_200(&(Local_134[iVar0 /*25*/].f_17), Local_134[iVar0 /*25*/].f_23, Local_134[iVar0 /*25*/].f_19, Local_134[iVar0 /*25*/].f_22, 1);
				}
			}
		}
		iVar0++;
	}
}

int func_200(var uParam0, var uParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (!unk_0x7DE17ACDD8BA2642(*uParam0))
	{
		if (func_152(uParam1, "Loading", 0))
		{
			*uParam0 = unk_0xF19D6C0E8B56BE23(uParam1, Param2, 1, 1, 0);
			if (unk_0x7DE17ACDD8BA2642(*uParam0))
			{
				unk_0x692C3FDAD7DB53CC(*uParam0, uParam5);
				unk_0x787BE15D36C401A5(*uParam0);
				if (bParam6)
				{
					func_151(uParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_10(*uParam0))
	{
		return 1;
	}
	return 0;
}

float func_201(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 0) };
	}
	if (!unk_0x055111B11E6624FD(iParam1, 0))
	{
		Var3 = { unk_0x30BE8A934C020461(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x30BE8A934C020461(iParam1, 0) };
	}
	return unk_0x2E496FE654DA4166(Var0, Var3, iParam2);
}

void func_202(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_5 != 1 || iParam2)
	{
		if (!func_343(Local_111[func_171(iParam1) /*11*/]))
		{
			if (!bLocal_665)
			{
				if (unk_0x7DE17ACDD8BA2642(Local_111[func_171(iParam1) /*11*/]))
				{
					if (func_181(*uParam0, Local_111[func_171(iParam1) /*11*/], 140f, 0) || func_157(Local_111[func_171(iParam1) /*11*/], *uParam0, 3f, 1))
					{
						func_176(uParam0, 0);
						bLocal_665 = true;
						return;
					}
					else
					{
						Local_667 = { unk_0x30BE8A934C020461(Local_111[func_171(iParam1) /*11*/], 1) };
						uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
						uParam0->f_8 = uParam0->f_7;
						uParam0->f_5 = 1;
						uParam0->f_6 = 11;
					}
				}
				else
				{
					func_176(uParam0, 0);
				}
			}
		}
		else if (Local_111[func_171(iParam1) /*11*/].f_6 == 22)
		{
			if (func_181(*uParam0, Local_111[func_171(iParam1) /*11*/], 140f, 0) && func_157(Local_111[func_171(iParam1) /*11*/], unk_0xC1A5EC5C986B98AD(), 15f, 1))
			{
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
			}
		}
		else if (Local_111[func_171(iParam1) /*11*/].f_6 == 5 || Local_111[func_171(iParam1) /*11*/].f_6 == 7)
		{
			if (func_157(Local_111[func_171(iParam1) /*11*/], *uParam0, 10f, 1))
			{
				func_176(uParam0, 0);
			}
		}
		if (func_213(*uParam0))
		{
			func_169(uParam0);
			uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
			uParam0->f_8 = uParam0->f_7;
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
		}
		if (uParam0->f_10 == 0 && uParam0->f_7 == 4)
		{
			if (func_161(uParam0))
			{
				if (unk_0xE0D346789C5160EB(*uParam0, iLocal_109, 0))
				{
					unk_0x6855D2807847D85A(*uParam0, unk_0xC1A5EC5C986B98AD(), 0, 0f, 0f, 0f, 10f, 100, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0x61D5783E7F429B70(iLocal_109, 2000f);
					iLocal_670 = unk_0xA5E11AF0A2B928C1();
					uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
					uParam0->f_6 = 16;
					uParam0->f_5 = 1;
				}
			}
		}
		if (func_204(*uParam0, 1, 70f, 170f, 0, 1, 0, 0) && !func_203(uParam0))
		{
			if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
			{
				if (func_37(iLocal_109))
				{
					if (unk_0xE0D346789C5160EB(*uParam0, iLocal_109, 0))
					{
						if (unk_0xDC58AE028CB223BA(iLocal_109) > 5f)
						{
							if (iParam1 == 0)
							{
								unk_0xB8194851FFF54D3B(*uParam0, iLocal_109, unk_0xC1A5EC5C986B98AD(), 8, 30f, 786469, 300f, 2f, 1);
								uParam0->f_6 = 7;
								unk_0xA2C73FAE5789EC05(Local_111[func_171(iParam1) /*11*/], -1);
								Local_111[func_171(iParam1) /*11*/].f_6 = 10;
								Local_111[func_171(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
								Local_111[func_171(iParam1) /*11*/].f_1 = unk_0xA5E11AF0A2B928C1();
							}
							else
							{
								unk_0xA2C73FAE5789EC05(*uParam0, -1);
								uParam0->f_6 = 12;
								unk_0xB8194851FFF54D3B(Local_111[func_171(iParam1) /*11*/], iLocal_109, unk_0xC1A5EC5C986B98AD(), 8, 30f, 786469, 300f, 2f, 1);
								Local_111[func_171(iParam1) /*11*/].f_6 = 5;
								Local_111[func_171(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
								Local_111[func_171(iParam1) /*11*/].f_1 = unk_0xA5E11AF0A2B928C1();
							}
						}
						else
						{
							func_176(uParam0, 0);
							if (unk_0x7DE17ACDD8BA2642(Local_111[func_171(iParam1) /*11*/]))
							{
								if (func_181(Local_111[func_171(iParam1) /*11*/], unk_0xC1A5EC5C986B98AD(), 1126825984, 0))
								{
									func_176(&(Local_111[func_171(iParam1) /*11*/]), 0);
								}
							}
						}
						unk_0x5CE354E3C73D2002(*uParam0);
					}
					else
					{
						func_176(uParam0, 0);
						if (unk_0x7DE17ACDD8BA2642(Local_111[func_171(iParam1) /*11*/]))
						{
							if (func_177(Local_111[func_171(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7))
							{
								func_176(&(Local_111[func_171(iParam1) /*11*/]), 0);
							}
						}
					}
				}
			}
			else
			{
				uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
				uParam0->f_8 = uParam0->f_7;
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
				unk_0x5CE354E3C73D2002(*uParam0);
				if (func_177(Local_111[func_171(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					Local_111[func_171(iParam1) /*11*/].f_1 = unk_0xA5E11AF0A2B928C1();
					Local_111[func_171(iParam1) /*11*/].f_8 = uParam0->f_7;
					Local_111[func_171(iParam1) /*11*/].f_5 = 1;
					Local_111[func_171(iParam1) /*11*/].f_6 = 21;
					unk_0x5CE354E3C73D2002(Local_111[func_171(iParam1) /*11*/]);
				}
			}
			uParam0->f_5 = 1;
		}
		else if (unk_0xF276A75C8A36B189(*uParam0))
		{
			func_169(uParam0);
			unk_0xC6C9BF71106ABCAC(*uParam0, unk_0xC1A5EC5C986B98AD(), 500f, -1, 0, 1);
			uParam0->f_6 = 2;
			uParam0->f_5 = 1;
			uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
		}
		if (unk_0x48A4D45B3B4CEFFD(*uParam0))
		{
			if (func_10(Local_134[iLocal_661 /*25*/].f_17))
			{
				if (unk_0xDC116D955A63BDBE(Local_134[iLocal_661 /*25*/].f_17))
				{
					unk_0xA81AA70A4D25E140(Local_134[iLocal_661 /*25*/].f_17, 1, 0);
					unk_0xCA9BC8284D91B406(Local_134[iLocal_661 /*25*/].f_17, 1, unk_0x26A9C8234C71B669(*uParam0), 0, 1, 1, 0);
				}
			}
		}
	}
	if (uParam0->f_5 != 1)
	{
		if (func_343(Local_111[func_171(iParam1) /*11*/]))
		{
			if (unk_0xF276A75C8A36B189(Local_111[func_171(iParam1) /*11*/]))
			{
				func_169(uParam0);
				unk_0xC6C9BF71106ABCAC(*uParam0, unk_0xC1A5EC5C986B98AD(), 120f, -1, 0, 0);
				uParam0->f_1 = unk_0xA5E11AF0A2B928C1();
				uParam0->f_6 = 7;
				uParam0->f_5 = 1;
			}
		}
	}
}

int func_203(var uParam0)
{
	if ((unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), unk_0x7394CB479CCA24AF(*uParam0, 0f, -2f, 0f), 2f, 3f, 2f, 0, 1, 0) && !unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6)) && unk_0xC29B1DE5CA9282CB(unk_0xC1A5EC5C986B98AD()))
	{
		return 1;
	}
	return 0;
}

int func_204(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_10(unk_0xC1A5EC5C986B98AD()) && func_10(iParam0))
	{
		if (unk_0x7559C38E6535AB89(iParam0, unk_0xC1A5EC5C986B98AD(), 1))
		{
			return 1;
		}
		if (func_209(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
		{
			if (unk_0xE3A9F9074FB79A61(unk_0xC1A5EC5C986B98AD()))
			{
				Var0 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) - unk_0x30BE8A934C020461(iParam0, 1) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_208(unk_0xC1A5EC5C986B98AD(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_205(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_205(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_10(unk_0xC1A5EC5C986B98AD()) && func_10(iParam0))
	{
		if (func_207(iParam0) || unk_0xEE404E66D9BD6D2A(unk_0x93E99A2DBCBA9CFA(), iParam0))
		{
			if (unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_206(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_206(int iParam0, float fParam1)
{
	return func_177(iParam0, unk_0xC1A5EC5C986B98AD(), fParam1, 1, 250, 7);
}

int func_207(int iParam0)
{
	if (unk_0xBAE1E5327FD0C1E3(unk_0x93E99A2DBCBA9CFA(), iParam0) && unk_0x2D1125ABF6C8F8C4(unk_0xC1A5EC5C986B98AD(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_208(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x26A9C8234C71B669(iParam0) };
	Var3 = { unk_0x30BE8A934C020461(iParam1, 1) - unk_0x30BE8A934C020461(iParam0, 1) };
	return (((Var0.f_0 * Var3.f_0) + (Var0.f_1 * Var3.f_1)) / unk_0x2A488C176D52CCA5(Var3, 0f, 0f, 0f)) > unk_0xD0FFB162F40A139C(fParam2);
}

int func_209(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_10(unk_0xC1A5EC5C986B98AD()) && func_10(iParam0))
	{
		unk_0xEBC16D60E30C9AE1(unk_0xC1A5EC5C986B98AD(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_212(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_210(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x7B783B62D5123CC7(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x612907CF3208D1E3(unk_0x30BE8A934C020461(iParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_212(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_210(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_210(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x30BE8A934C020461(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x7A7E3100F1649F5B(unk_0x30BE8A934C020461(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x7A7E3100F1649F5B(unk_0x30BE8A934C020461(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x7A7E3100F1649F5B(unk_0x30BE8A934C020461(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x7A7E3100F1649F5B(unk_0x30BE8A934C020461(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_211(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_211(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x332F7E85F9805351(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_211(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x96E845EE39BF3453(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x96E845EE39BF3453(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x96E845EE39BF3453(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x96E845EE39BF3453(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x96E845EE39BF3453(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_159(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_212(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x110D030CCD4E83A6(unk_0xC1A5EC5C986B98AD()))
		{
			if (unk_0xEAEF747543427AC5(unk_0xC1A5EC5C986B98AD(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x612907CF3208D1E3(unk_0x30BE8A934C020461(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0)
{
	if (func_157(uParam0, unk_0xC1A5EC5C986B98AD(), 6f, 1))
	{
		if (!unk_0x3C3D6D026CF7F51B(uParam0, 0))
		{
			if (unk_0x110B96B5C67CC73B(iParam0, unk_0xC1A5EC5C986B98AD()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_214()
{
	if (func_37(Local_868.f_0))
	{
		if (func_157(unk_0xC1A5EC5C986B98AD(), Local_868.f_0, 100f, 1) && !iLocal_837)
		{
			unk_0x93FFD6B088A8E34D(joaat("trash"), 3);
			if (!unk_0xCF74D35FEBDBE99F(joaat("trash")))
			{
				iLocal_837 = 1;
			}
		}
		else if (!func_157(unk_0xC1A5EC5C986B98AD(), Local_868.f_0, 120f, 1) && iLocal_837)
		{
			unk_0x8485F4B24A112331(joaat("trash"));
			iLocal_837 = 0;
		}
	}
}

void func_215(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, struct<3> Param5, int iParam8, bool bParam9, int iParam10)
{
	if (func_37(*iParam0))
	{
		switch (*iParam2)
		{
			case 0:
				if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), *iParam0, 0))
				{
					func_7(iParam3);
					if (func_106(func_114(func_77()), 0, 0))
					{
						unk_0x4A77CD96EFFC63F4(func_114(func_77()));
					}
					if (*iParam0 == iParam8)
					{
						*iParam2 = 1;
					}
					else
					{
						*iParam2 = 2;
					}
				}
				else if (func_220(*iParam0) || func_219(*iParam0))
				{
					func_7(iParam3);
					if (func_106(func_114(func_77()), 0, 0))
					{
						unk_0x4A77CD96EFFC63F4(func_114(func_77()));
					}
					*iParam2 = 3;
				}
				else
				{
					if (func_106(func_115(func_77(), bParam9), 0, 0))
					{
						unk_0x4A77CD96EFFC63F4(func_115(func_77(), bParam9));
					}
					if (func_77() != 33)
					{
						func_217(iParam0);
					}
					else
					{
						func_216(iParam0, uParam1);
					}
				}
				break;
			
			case 2:
			case 1:
				if ((!unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), *iParam0, 0) && !func_220(*iParam0)) && !func_219(*iParam0))
				{
					func_7(iParam4);
					if (!unk_0x1C4E4DC1EFE24DF1(*iParam0, Param5, iParam10, iParam10, 2f, 0, 1, 2))
					{
						func_125(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
			
			case 3:
				if (!func_220(*iParam0) && !func_219(*iParam0))
				{
					func_7(iParam4);
					if (!unk_0x1C4E4DC1EFE24DF1(*iParam0, Param5, iParam10, iParam10, 2f, 0, 1, 2))
					{
						func_125(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
		}
	}
	else if (func_77() != 33)
	{
		func_217(iParam0);
	}
	else
	{
		func_216(iParam0, uParam1);
	}
}

void func_216(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!bLocal_28)
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			if (iVar0 != *uParam0)
			{
				if (func_37(iVar0))
				{
					iVar1 = unk_0x504B9BB48D41C264(iVar0);
					if (iVar1 == joaat("trash"))
					{
						*uParam1 = *uParam0;
						func_6(uParam0);
						*uParam0 = iVar0;
						func_36(*uParam0, 1);
						func_36(*uParam1, 3);
						if (!unk_0x1AFE963DA61006ED(*uParam0))
						{
							unk_0x85BAE84748AD1A23(*uParam0, 1, 1);
						}
					}
					else if (iVar1 == joaat("towtruck"))
					{
						uVar2 = unk_0xE3A09564BAAE0091(unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0));
						if (func_10(uVar2))
						{
							iVar0 = unk_0x4DFB7A1A6909D574(uVar2);
							if (unk_0x504B9BB48D41C264(iVar0) == joaat("trash"))
							{
								*uParam1 = *uParam0;
								func_6(uParam0);
								*uParam0 = iVar0;
								func_36(*uParam0, 1);
								func_36(*uParam1, 3);
								if (!unk_0x1AFE963DA61006ED(*uParam0))
								{
									unk_0x85BAE84748AD1A23(*uParam0, 1, 1);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_217(var uParam0)
{
	int iVar0;
	
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
		if (iVar0 != *uParam0)
		{
			if (func_37(iVar0))
			{
				if (unk_0x504B9BB48D41C264(iVar0) == func_218(func_77()))
				{
					func_6(uParam0);
					*uParam0 = iVar0;
					func_36(*uParam0, 1);
					unk_0x85BAE84748AD1A23(*uParam0, 1, 1);
				}
			}
		}
	}
}

int func_218(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 33:
			iVar0 = joaat("trash");
			break;
		
		case 34:
			iVar0 = joaat("towtruck");
			break;
		
		case 78:
			iVar0 = 0;
			break;
		
		case 80:
		case 81:
		case 82:
			iVar0 = joaat("gauntlet");
			break;
	}
	return iVar0;
}

int func_219(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_343(unk_0xC1A5EC5C986B98AD()) && unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0)) && func_37(iParam0))
	{
		iVar0 = unk_0xE475C458F52F1781();
		if (func_37(iVar0))
		{
			iVar1 = unk_0x504B9BB48D41C264(iVar0);
			if ((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
			{
				if (unk_0x7D65213BA22BDE46(iVar0))
				{
					if (unk_0xA00D276AE6AD636B(iVar0, iParam0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_220(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_343(unk_0xC1A5EC5C986B98AD()) && unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0)) && func_37(iParam0))
	{
		iVar0 = unk_0xE475C458F52F1781();
		if (func_37(iVar0))
		{
			iVar1 = unk_0x504B9BB48D41C264(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (unk_0xF1A395BE96006DEF(iVar0, iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_221()
{
	func_215(&iLocal_874, &uLocal_875, &iLocal_686, &iLocal_822, &iLocal_821, Local_827, Local_868.f_0, 0, 1090519040);
	func_155();
	func_238();
	func_214();
	switch (iLocal_684)
	{
		case 0:
			if (func_122(iLocal_683, bLocal_28))
			{
				if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0 && !func_237())
				{
					func_117(&iLocal_821, Local_827, 1);
					func_121("PRA_TAKBACK", &iLocal_820);
				}
				iLocal_684 = 1;
			}
			break;
		
		case 1:
			func_120(&iLocal_821, Local_827, &iLocal_685, iLocal_686, &iLocal_820, &iLocal_838);
			func_227();
			if (func_225(iLocal_874, Local_827, &iLocal_821, iLocal_685, iLocal_686, &iLocal_820, &iLocal_839, 0, 0, 1086324736))
			{
				unk_0x150124F83A339532(8f, 5f, 4);
				iLocal_684 = 2;
			}
			break;
		
		case 2:
			func_222();
			func_7(&iLocal_821);
			func_7(&iLocal_822);
			if (func_116(1077936128, 1))
			{
				func_110(0);
			}
			break;
		
		case 3:
			if (func_37(iLocal_874))
			{
				if (!unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_874, 0))
				{
					unk_0x4C18E9202CF6CACA(unk_0xC1A5EC5C986B98AD(), iLocal_874, -1);
				}
				else
				{
					func_109(iLocal_874, Local_827, 146.5443f, 0, 1);
					func_40(1, 1, 1);
					iLocal_684 = 1;
				}
			}
			break;
	}
}

void func_222()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_79(iVar0);
		if (!unk_0x66599E73DBA5A850(iVar1))
		{
			if (func_224(iVar1))
			{
				func_223(iVar1);
			}
		}
		iVar0++;
	}
}

int func_223(int iParam0)
{
	bool bVar0;
	
	return 0;
	if (!unk_0x66599E73DBA5A850(iParam0))
	{
		bVar0 = func_29(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_79(bVar0) != iParam0)
		{
			return 0;
		}
		if (!BitTest(Global_96535, bVar0))
		{
			return 0;
		}
		unk_0x061B1200C95204CB(&Global_96535, bVar0);
		return 1;
	}
	return 0;
}

int func_224(int iParam0)
{
	bool bVar0;
	
	return 0;
	if (!unk_0x66599E73DBA5A850(iParam0))
	{
		bVar0 = func_29(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_79(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_96535, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_225(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, float fParam11)
{
	if ((iParam6 == 1 || iParam6 == 2) || iParam6 == 3)
	{
		if (iParam5 == 0)
		{
			func_117(iParam4, Param1, 1);
			if (!bParam10)
			{
				if (func_37(iParam0))
				{
					if (unk_0x1C4E4DC1EFE24DF1(iParam0, Param1, fParam11, fParam11, 2f, 1, 1, 0))
					{
						return 1;
					}
				}
			}
			else if (unk_0x1C4E4DC1EFE24DF1(unk_0xC1A5EC5C986B98AD(), Param1, fParam11, fParam11, 2f, 1, 1, 2))
			{
				return 1;
			}
			if (func_106(func_114(func_77()), 0, 0))
			{
				unk_0x4A77CD96EFFC63F4(func_114(func_77()));
			}
			if (!func_226())
			{
				func_121(func_115(func_77(), bParam9), iParam7);
			}
		}
	}
	else if (iParam5 == 0)
	{
		if (!*iParam8)
		{
			if (func_106(func_115(func_77(), 0), 0, 0))
			{
				unk_0x4A77CD96EFFC63F4(func_115(func_77(), 0));
			}
			func_105(func_114(func_77()), 7500, 0);
			*iParam8 = 1;
		}
	}
	return 0;
}

bool func_226()
{
	return Global_100733.f_387 > 0;
}

void func_227()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = func_79(iVar0);
		if (!unk_0x66599E73DBA5A850(iVar2))
		{
			if (func_78(iVar2, 0))
			{
				if (!bVar1)
				{
					if (func_157(unk_0xC1A5EC5C986B98AD(), iVar2, 5f, 1))
					{
						if (!func_237())
						{
							func_232(iVar0);
							bVar1 = true;
						}
					}
				}
				if (!iLocal_1048[iVar0])
				{
					if (iVar0 == 0)
					{
						func_98(&uLocal_879, iVar0, iVar2, "MICHAEL", 0, 1);
					}
					else if (iVar0 == 1)
					{
						func_98(&uLocal_879, iVar0, iVar2, "FRANKLIN", 0, 1);
					}
					else if (iVar0 == 2)
					{
						func_98(&uLocal_879, iVar0, iVar2, "TREVOR", 0, 1);
					}
					iLocal_1048[iVar0] = 1;
				}
			}
			if (!func_224(iVar2))
			{
				if (func_78(iVar2, 0))
				{
					if (func_231(iVar2) || func_229(iVar2))
					{
						if (func_228(iVar2, 0))
						{
							unk_0x85BAE84748AD1A23(iVar2, 1, 1);
							unk_0xC5B2830898581862(iVar2, true);
							unk_0x909F139DC199D8E0(iVar2);
						}
					}
				}
			}
			else if (unk_0xAE770DDB34967EC3(iVar2, 1))
			{
				if (func_231(iVar2))
				{
					if (unk_0xF5F493B789EA063E(iVar2, joaat("script_task_vehicle_mission")) != 1 && unk_0xF5F493B789EA063E(iVar2, joaat("script_task_vehicle_mission")) != 0)
					{
						if (unk_0x9ADDEEB34545AD94(623.3781f, -172.26f, 1700.732f, -2115.843f))
						{
							unk_0xC562419B5DA3BB96(iVar2, unk_0x95DC39736F6748E3(iVar2, 0), Local_827, 20f, 0, 0, 34340901, 2f, 10f);
						}
						else
						{
							unk_0x350F65B0612C7A16(623.3781f, -172.26f, 1700.732f, -2115.843f);
						}
					}
				}
				else if (func_229(iVar2))
				{
					if (func_37(Local_868.f_0))
					{
						if (!func_157(iVar2, Local_868.f_0, 17f, 1))
						{
							if (unk_0xF5F493B789EA063E(iVar2, joaat("script_task_vehicle_mission")) != 1 && unk_0xF5F493B789EA063E(iVar2, joaat("script_task_vehicle_mission")) != 0)
							{
								unk_0x3DFE9C7902334B74(iVar2, unk_0x95DC39736F6748E3(iVar2, 0), Local_868.f_0, 3, 20f, 786468, 2f, 0.5f, 1);
							}
						}
					}
				}
				else
				{
					func_223(iVar2);
				}
			}
		}
		iVar0++;
	}
}

int func_228(int iParam0, int iParam1)
{
	bool bVar0;
	
	return 0;
	if (!unk_0x66599E73DBA5A850(iParam0))
	{
		bVar0 = func_29(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_79(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_96535, bVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xC1A5EC5C986B98AD())
			{
				return 0;
			}
		}
		if (BitTest(Global_96534, bVar0))
		{
			unk_0x49ED56E425110B21(iParam0, 0, 0);
			unk_0x351E6B9FD37CFF33(iParam0, 0, 1);
			unk_0xECDAB41968FF21A8(&Global_96535, bVar0);
			return 1;
		}
	}
	return 0;
}

int func_229(int iParam0)
{
	int iVar0;
	
	if (!func_230())
	{
		if ((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0)) && unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0)
		{
			iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			if (func_37(iVar0))
			{
				if (unk_0x091E6E360116B927(iVar0, joaat("trash")))
				{
					return 0;
				}
				if (unk_0xE0D346789C5160EB(iParam0, iVar0, 0) && unk_0xA66E176E5772E965(iVar0, -1, 0) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_230()
{
	if (!unk_0xA26A9A07F761D8F8())
	{
		return Global_98159.f_44 == 1;
	}
	return 0;
}

int func_231(int iParam0)
{
	if (!func_230())
	{
		if ((unk_0x7DE17ACDD8BA2642(Local_868.f_0) && unk_0xFBD273FDBCF0C5BD(Local_868.f_0, 0)) && !unk_0x1C4E4DC1EFE24DF1(Local_868.f_0, Local_827, 2f, 2f, 2f, 0, 1, 0))
		{
			if ((!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()) && unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), Local_868.f_0, 0)) && unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0)
			{
				if (unk_0xE0D346789C5160EB(iParam0, Local_868.f_0, 0) && unk_0xA66E176E5772E965(Local_868.f_0, -1, 0) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_232(int iParam0)
{
	if (iLocal_683 > 1)
	{
		if (iLocal_685 > 0)
		{
			if (!BitTest(Local_688[iParam0 /*8*/].f_7, 0) && iLocal_686 == 1)
			{
				if (!unk_0x70CDFE65A7D509C2())
				{
					if (func_236(&uLocal_879, cLocal_878, Local_688[iParam0 /*8*/][0], 8, 0, 0, 0))
					{
						unk_0xECDAB41968FF21A8(&(Local_688[iParam0 /*8*/].f_7), false);
					}
				}
			}
		}
		else
		{
			if ((BitTest(Local_688[iParam0 /*8*/].f_7, 0) && !BitTest(Local_688[iParam0 /*8*/].f_7, 1)) && iLocal_686 == 1)
			{
				if (!unk_0x70CDFE65A7D509C2())
				{
					if (func_236(&uLocal_879, cLocal_878, Local_688[iParam0 /*8*/][1], 7, 0, 0, 0))
					{
						unk_0xECDAB41968FF21A8(&(Local_688[iParam0 /*8*/].f_7), true);
					}
				}
			}
			if (!BitTest(Local_688[iParam0 /*8*/].f_7, 5))
			{
				if (func_235(iLocal_874, Local_827, 1) < 15f && iLocal_686 == 1)
				{
					if (!unk_0x70CDFE65A7D509C2())
					{
						if (func_236(&uLocal_879, cLocal_878, Local_688[iParam0 /*8*/][5], 7, 0, 0, 0))
						{
							unk_0xECDAB41968FF21A8(&(Local_688[iParam0 /*8*/].f_7), 5);
						}
					}
				}
			}
			switch (func_29(unk_0xC1A5EC5C986B98AD()))
			{
				case 0:
					if (iParam0 == 1)
					{
						if (!func_234(2))
						{
							func_233(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_234(4))
						{
							func_233(iParam0, 4);
						}
					}
					break;
				
				case 1:
					if (iParam0 == 0)
					{
						if (!func_234(2))
						{
							func_233(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_234(3))
						{
							func_233(iParam0, 3);
						}
					}
					break;
				
				case 2:
					if (iParam0 == 1)
					{
						if (!func_234(3))
						{
							func_233(iParam0, 3);
						}
					}
					else if (iParam0 == 0)
					{
						if (!func_234(4))
						{
							func_233(iParam0, 4);
						}
					}
					break;
				}
			}
	}
}

void func_233(int iParam0, bool bParam1)
{
	if (!BitTest(Local_688[iParam0 /*8*/].f_7, bParam1))
	{
		if (iLocal_1052 != -1)
		{
			if (!unk_0x70CDFE65A7D509C2())
			{
				if (func_236(&uLocal_879, cLocal_878, Local_688[iParam0 /*8*/][bParam1], 7, 0, 0, 0))
				{
					unk_0xECDAB41968FF21A8(&(Local_688[iParam0 /*8*/].f_7), bParam1);
				}
			}
		}
		else if (!func_237() && !unk_0x70CDFE65A7D509C2())
		{
			iLocal_1052 = unk_0xA5E11AF0A2B928C1();
		}
		else
		{
			iLocal_1052 = -1;
		}
	}
}

int func_234(int iParam0)
{
	if ((BitTest(Local_688[0 /*8*/].f_7, iParam0) || BitTest(Local_688[1 /*8*/].f_7, iParam0)) || BitTest(Local_688[2 /*8*/].f_7, iParam0))
	{
		return 1;
	}
	return 0;
}

float func_235(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x055111B11E6624FD(iParam0, 0))
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x30BE8A934C020461(iParam0, 0) };
	}
	return unk_0x2E496FE654DA4166(Var0, Param1, iParam4);
}

bool func_236(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_95(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2883585 = 0;
	return func_83(sParam2, iParam3, 0);
}

int func_237()
{
	if (Global_21725 != 0 || unk_0x0DCB385165FDE763())
	{
		return 1;
	}
	return 0;
}

void func_238()
{
	if (func_107(unk_0xC1A5EC5C986B98AD(), Local_827, 220f, 1))
	{
		if (!iLocal_877 && !func_107(unk_0xC1A5EC5C986B98AD(), Local_827, 100f, 1))
		{
			iLocal_877 = func_153(&uLocal_876, joaat("cavalcade2"), 1370.912f, -2060.055f, 50.9983f, 312.8686f, 1);
		}
	}
	else if (func_107(unk_0xC1A5EC5C986B98AD(), Local_827, 240f, 1))
	{
		if (iLocal_877)
		{
			func_6(&uLocal_876);
			iLocal_877 = 0;
		}
	}
}

void func_239()
{
	func_215(&iLocal_874, &uLocal_875, &iLocal_686, &iLocal_822, &iLocal_821, Local_827, Local_868.f_0, 0, 1090519040);
	func_214();
	func_155();
	switch (iLocal_684)
	{
		case 0:
			if (func_122(iLocal_683, bLocal_28))
			{
				func_125(&iLocal_821, Local_868.f_0, 1);
				func_121("PRA_GOVAN", &iLocal_820);
				iLocal_684 = 1;
			}
			break;
		
		case 1:
			func_227();
			if (func_37(Local_868.f_0))
			{
				func_242(&uLocal_671, Local_868.f_0, 0, 0, 1, 1, 1);
			}
			if (!bLocal_833)
			{
				if (func_343(Local_840.f_0) && unk_0xF276A75C8A36B189(Local_840.f_0))
				{
					func_241();
				}
				if (func_343(Local_854.f_0) && unk_0xF276A75C8A36B189(Local_854.f_0))
				{
					func_241();
				}
			}
			if (func_37(iLocal_874))
			{
				if ((iLocal_686 == 1 || iLocal_686 == 2) || iLocal_686 == 3)
				{
					unk_0x150124F83A339532(5f, 5f, 4);
					iLocal_684 = 2;
				}
			}
			break;
		
		case 2:
			func_7(&iLocal_821);
			func_145(&uLocal_671, 0, 0);
			func_110(0);
			break;
		
		case 3:
			func_8(&Local_840);
			func_8(&Local_854);
			if (func_37(Local_868.f_0))
			{
				unk_0x4C18E9202CF6CACA(unk_0xC1A5EC5C986B98AD(), Local_868.f_0, -1);
			}
			func_240(1);
			func_40(1, 1, 1);
			iLocal_684 = 1;
			break;
	}
}

void func_240(bool bParam0)
{
	unk_0x436EC806292A3DB8(1, bParam0);
	unk_0x436EC806292A3DB8(2, bParam0);
	unk_0x436EC806292A3DB8(3, bParam0);
	unk_0x436EC806292A3DB8(4, bParam0);
	unk_0x436EC806292A3DB8(5, bParam0);
	if (bParam0)
	{
		unk_0xFF2AF80F9EC7704C(1f);
		unk_0x508B7A54DEE39001(5);
	}
	else
	{
		unk_0x508B7A54DEE39001(0);
		unk_0xFF2AF80F9EC7704C(0f);
	}
}

void func_241()
{
	char* sVar0;
	
	switch (func_25())
	{
		case 0:
			sVar0 = "FBI4_JACKSM";
			break;
		
		case 1:
			sVar0 = "FBI4_JACKSF";
			break;
		
		case 2:
			sVar0 = "FBI4_JACKST";
			break;
	}
	bLocal_833 = func_236(&uLocal_879, "FBIPRAU", sVar0, 7, 0, 0, 0);
	if (bLocal_833)
	{
		unk_0x150124F83A339532(8f, 8f, 4);
	}
}

void func_242(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_243(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_243(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	func_244(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_244(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
	{
		func_145(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_245(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_245(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x3FACE5B6ACB3A4AA())
	{
		if (unk_0xA5E11AF0A2B928C1() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xB71C73D0269747D5(iVar0))
	{
		if (!unk_0xA26A9A07F761D8F8())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_146(iVar0))
	{
		func_269();
	}
	if (func_268(iParam1) && unk_0x51DF6895C236B231(iParam1))
	{
		iVar1 = 0;
		if (unk_0x71904BD37B848CAF(iParam1))
		{
			unk_0x1EC62F08E5FEE4F4(unk_0x9C8D7679C15E75FF(iParam1));
			unk_0x0B9E116BF89A0A6B(unk_0x9C8D7679C15E75FF(iParam1), 1);
			if (unk_0x9F13F6DF99716F66(unk_0x9C8D7679C15E75FF(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xA6B591D40DE982B5(iParam1))
		{
			unk_0x9137AB1FD8C79729(unk_0x4DFB7A1A6909D574(iParam1));
			if (unk_0x0F68F5841D33217C(unk_0x4DFB7A1A6909D574(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x4E7A9806173C3AD1(iParam1))
		{
			unk_0x38A3D119469E88B4(unk_0x29F9842A71C1C2FF(iParam1));
			if (unk_0x1B1CC398E002E686(unk_0x29F9842A71C1C2FF(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x3FACE5B6ACB3A4AA())
		{
			if (func_263(uParam0, bParam7, bParam9, 0))
			{
				func_260(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_250(iVar0))
				{
					if ((unk_0xB71C73D0269747D5(uParam0->f_3) && !unk_0xB71C73D0269747D5(iVar0)) && unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
					{
						if ((iVar1 && !unk_0xF0E4B64AC0B5660E()) && uParam8)
						{
							if (!func_146(iVar0))
							{
								func_249(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x4310A0DB886F9FED("CMN_HINT", iVar0))
								{
									func_248(1);
								}
							}
						}
					}
				}
			}
			else if (func_250(iVar0))
			{
				if (unk_0xB71C73D0269747D5(uParam0->f_3) && !unk_0xB71C73D0269747D5(iVar0))
				{
					if (((unk_0x865259F0333CAA4B(iParam1) && iVar1) && !unk_0xF0E4B64AC0B5660E()) && uParam8)
					{
						if (!func_146(iVar0))
						{
							func_249(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x4310A0DB886F9FED("CMN_HINT", iVar0))
							{
								func_248(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xB71C73D0269747D5(sParam5))
			{
				if (func_146(sParam5))
				{
					unk_0xCD3C8E1022864F65(1);
				}
			}
			if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
			{
				if (unk_0xB076EA895B1A6BEC(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x80A3F4E694565F6A(3) == 3 || unk_0x80A3F4E694565F6A(3) == 4)
					{
						func_145(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x6DFDDBD2D0067A98(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x80A3F4E694565F6A(6) == 3 || unk_0x80A3F4E694565F6A(6) == 4)
					{
						func_145(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x2AE2D64A5E125BF2(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x80A3F4E694565F6A(4) == 3 || unk_0x80A3F4E694565F6A(4) == 4)
					{
						func_145(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x81F36522FE1E02B8(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x80A3F4E694565F6A(5) == 3 || unk_0x80A3F4E694565F6A(5) == 4)
					{
						func_145(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA8F00D68C81685D6(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0x80A3F4E694565F6A(2) == 3 || unk_0x80A3F4E694565F6A(2) == 4)
					{
						func_145(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8C9D6596CF19A4E2() == 3 || unk_0x8C9D6596CF19A4E2() == 4)
				{
					func_145(uParam0, iVar0, 1);
				}
			}
			if (!func_263(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_247(uParam0))
				{
					func_246(uParam0);
				}
			}
		}
	}
	else
	{
		func_145(uParam0, iVar0, 0);
	}
}

void func_246(var uParam0)
{
	if (func_268(unk_0xC1A5EC5C986B98AD()))
	{
		unk_0x1F9F6C767BE640D5(unk_0xC1A5EC5C986B98AD());
	}
	if (unk_0x3FACE5B6ACB3A4AA())
	{
		unk_0xEF54B7007CB2210B(1);
		unk_0x0D6E6120F1782BCF(0);
		unk_0x3FA8C73B5856A3E4("HINT_CAM_SCENE");
		unk_0x29978E5D6F8BB77E("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x451128B7D435FBF2("FocusOut", 0, 0);
			unk_0x531D638530A8DB97(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_247(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0xA5E11AF0A2B928C1()
		{
			return 1;
		}
	}
	return 0;
}

int func_248(bool bParam0)
{
	switch (Global_43257)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_113648.f_10051.f_100++;
			}
			return Global_113648.f_10051.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_113648.f_10051.f_101++;
			}
			return Global_113648.f_10051.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_113648.f_10051.f_102++;
			}
			return Global_113648.f_10051.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_249(char* sParam0, int iParam1)
{
	unk_0x476CC3711883B966(sParam0);
	unk_0xBC8969B539DCA239(0, 0, 1, iParam1);
}

int func_250(char* sParam0)
{
	if (!func_251(1, 1, 0))
	{
		if ((!unk_0x2AC37494BBF1DB16(sParam0) && func_146(sParam0)) || func_146("CMN_HINT"))
		{
			unk_0xCD3C8E1022864F65(1);
		}
		return 0;
	}
	switch (Global_43257)
	{
		case 0:
		case 3:
			if (func_248(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_248(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_248(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_251(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x1B82EF141CC65934(unk_0x93E99A2DBCBA9CFA()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xB53553DC4AAC7D8A())
	{
		return 0;
	}
	if (func_69(0))
	{
		return 0;
	}
	if (func_259())
	{
		return 0;
	}
	if (unk_0xEBDA168F3804CE1F())
	{
		return 0;
	}
	if (Global_75693)
	{
		return 0;
	}
	if (unk_0x24B651D85CCE5EB4(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_60543)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
		{
			if (unk_0xB076EA895B1A6BEC(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x80A3F4E694565F6A(3) == 3 || unk_0x80A3F4E694565F6A(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x6DFDDBD2D0067A98(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x80A3F4E694565F6A(6) == 3 || unk_0x80A3F4E694565F6A(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x2AE2D64A5E125BF2(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x80A3F4E694565F6A(4) == 3 || unk_0x80A3F4E694565F6A(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x81F36522FE1E02B8(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x80A3F4E694565F6A(5) == 3 || unk_0x80A3F4E694565F6A(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA8F00D68C81685D6(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x80A3F4E694565F6A(2) == 3 || unk_0x80A3F4E694565F6A(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8C9D6596CF19A4E2() == 3 || unk_0x8C9D6596CF19A4E2() == 4)
			{
				return 0;
			}
			if (unk_0x020429064B9B9A70())
			{
				return 0;
			}
		}
	}
	if ((func_258() || func_257(Global_4718592.f_166301)) || func_256())
	{
		if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
		{
			iVar0 = unk_0x95DC39736F6748E3(unk_0xC1A5EC5C986B98AD(), 0);
			iVar1 = func_255(unk_0xC1A5EC5C986B98AD(), 0);
			if (((unk_0xC78C3E6F7A5988D9(iVar0, iVar1) || (unk_0x504B9BB48D41C264(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x504B9BB48D41C264(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x504B9BB48D41C264(iVar0) == joaat("riot2") && iVar1 == 0) && func_254(iVar0, 10)) && unk_0xCA36A30E79A35222(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1962010)
	{
		return 0;
	}
	if (func_252(unk_0x93E99A2DBCBA9CFA()))
	{
		return 0;
	}
	return 1;
}

int func_252(int iParam0)
{
	if (iParam0 != func_88())
	{
		if (func_253(iParam0, 1, 1))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
		else if ((Global_1575060 && iParam0 == unk_0x93E99A2DBCBA9CFA()) && func_253(iParam0, 1, 0))
		{
			return Global_2657589[iParam0 /*466*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

int func_253(int iParam0, bool bParam1, bool bParam2)
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

int func_254(int iParam0, int iParam1)
{
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		if (unk_0x6BDF27AD591C4E31(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0xF66CFEE3C6DDCF4D(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_255(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x66599E73DBA5A850(iParam0))
	{
		if (unk_0x3C3D6D026CF7F51B(iParam0, iParam1))
		{
			iVar0 = unk_0x95DC39736F6748E3(iParam0, iParam1);
			if (unk_0x7DE17ACDD8BA2642(iVar0))
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

var func_256()
{
	return Global_2683862.f_19;
}

bool func_257(int iParam0)
{
	return iParam0 == 51;
}

var func_258()
{
	return Global_2683862.f_18;
}

bool func_259()
{
	return unk_0xA5E11AF0A2B928C1() <= Global_23270.f_6321 + 100;
}

void func_260(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1581968 == 1)
	{
		return;
	}
	if (unk_0x055111B11E6624FD(iParam1, 0))
	{
		func_145(uParam0, 0, 0);
	}
	if (func_15(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x71904BD37B848CAF(iParam1))
		{
			iVar0 = unk_0x9C8D7679C15E75FF(iParam1);
			if (!unk_0x3C3D6D026CF7F51B(iVar0, 0))
			{
				if (unk_0x60A06DE259634304(iVar0))
				{
					if (!func_261())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xE07B92C7EA4970AA(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xEF54B7007CB2210B(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x882C9EFD4718B1BE(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xEDB03CCB50D11479(unk_0xC1A5EC5C986B98AD(), iParam1, -1, iVar3, iVar4);
	unk_0x451128B7D435FBF2("FocusIn", 0, 0);
	unk_0xAEA29937C5240DA0("HINT_CAM_SCENE");
	unk_0x531D638530A8DB97(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xA5E11AF0A2B928C1();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_261()
{
	return func_262(unk_0x93E99A2DBCBA9CFA());
}

int func_262(int iParam0)
{
	if (unk_0x504B9BB48D41C264(unk_0xF2CFBB1105511E1A(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_263(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0xA5E11AF0A2B928C1() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
				{
					if (func_267(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_266(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_266(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_267(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_247(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
					{
						if (!func_267(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_266(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_266(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_267(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xA5E11AF0A2B928C1();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
				{
					if (!func_267(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_266(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_266(bParam1, bParam2, bParam3) || unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1) || unk_0xA2C02BFE3012901E(unk_0xC1A5EC5C986B98AD(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_267(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0xA5E11AF0A2B928C1() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1))
					{
						if (func_265(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_264(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1) || func_264(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 1) || unk_0xA2C02BFE3012901E(unk_0xC1A5EC5C986B98AD(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_265(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_247(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_251(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_269();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_264(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (!unk_0xB5297226BE0AD444(unk_0x93E99A2DBCBA9CFA()))
		{
			unk_0x8B438725D591ED78(0, 140, 1);
			unk_0x8B438725D591ED78(0, 80, 1);
			if (unk_0xA2C9DE6085F5645B(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_265(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x8B438725D591ED78(0, 80, 1);
		if (unk_0xD487F57C937BE625())
		{
			if (unk_0xA2C9DE6085F5645B(0, 80))
			{
				unk_0xEF54B7007CB2210B(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_266(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		if (!unk_0xB5297226BE0AD444(unk_0x93E99A2DBCBA9CFA()))
		{
			unk_0x8B438725D591ED78(0, 140, 1);
			unk_0x8B438725D591ED78(0, 80, 1);
			if (unk_0x992AACDC3C066F55(0, 80) && unk_0xA5E11AF0A2B928C1() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_267(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x3C3D6D026CF7F51B(unk_0xC1A5EC5C986B98AD(), 0))
	{
		unk_0x8B438725D591ED78(0, 80, 1);
		if (unk_0xD487F57C937BE625())
		{
			if (unk_0x992AACDC3C066F55(0, 80) && unk_0xA5E11AF0A2B928C1() > Global_116)
			{
				unk_0xEF54B7007CB2210B(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_268(int iParam0)
{
	if (unk_0x7DE17ACDD8BA2642(iParam0))
	{
		if (unk_0xA6B591D40DE982B5(iParam0))
		{
			if (unk_0xFBD273FDBCF0C5BD(unk_0x4DFB7A1A6909D574(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x71904BD37B848CAF(iParam0))
		{
			if (!unk_0x66599E73DBA5A850(unk_0x9C8D7679C15E75FF(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x4E7A9806173C3AD1(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_269()
{
	unk_0xECDAB41968FF21A8(&Global_8254, 4);
}

void func_270()
{
	switch (iLocal_684)
	{
		case 0:
			if (func_122(iLocal_683, 0))
			{
				func_284();
				func_282(33);
				unk_0x508B7A54DEE39001(2);
				unk_0xFF2AF80F9EC7704C(0.1f);
				if (func_359())
				{
					func_279(0, -1, 1);
					func_41(500, 1);
					iLocal_684 = 2;
				}
				else
				{
					if (func_33(0))
					{
						func_124(unk_0xC1A5EC5C986B98AD(), 1228.635f, -348.4277f, 68.0929f, 86.7244f);
						func_272(1228.635f, -348.4277f, 68.0929f, 1112014848, 12, 5000, 0, 0);
						func_41(500, 1);
					}
					func_271();
					if (iLocal_683 == 2)
					{
						iLocal_684 = 0;
					}
					else
					{
						iLocal_684 = 2;
					}
				}
			}
			break;
		
		case 2:
			func_110(0);
			break;
	}
}

void func_271()
{
}

void func_272(struct<3> Param0, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x6A6153308EE892FE(Param0, iParam3, iParam4, 127);
	if (unk_0xF5CDF1BAC8E957FC(uVar0))
	{
		iVar1 = (unk_0xA5E11AF0A2B928C1() + iParam5);
		while (!unk_0x4F4347E9AB935F0C(uVar0) && unk_0xA5E11AF0A2B928C1() < iVar1)
		{
			if (bParam7)
			{
				func_274(0);
			}
			if (bParam6)
			{
				func_273();
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		if (unk_0xA5E11AF0A2B928C1() < iVar1)
		{
		}
		unk_0x867DE2DA53684C00(uVar0);
	}
}

void func_273()
{
	Global_23131.f_6 = 1;
}

void func_274(int iParam0)
{
	if (func_278())
	{
		return;
	}
	if (!Global_20383.f_1 == 1)
	{
		if (func_69(0))
		{
			func_275(iParam0);
		}
		unk_0xECDAB41968FF21A8(&Global_8254, 2);
	}
}

void func_275(int iParam0)
{
	if (func_278())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_277())
		{
			func_276(1, 1);
		}
		else
		{
			func_276(0, 0);
		}
	}
	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
	{
		unk_0xECDAB41968FF21A8(&Global_8254, 16);
	}
	if (unk_0xE444FD7526C8BB46())
	{
		unk_0xD6625E11483B2324(false);
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
	if (!func_51())
	{
		Global_20383.f_1 = 3;
	}
}

void func_276(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_69(0))
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

bool func_277()
{
	return BitTest(Global_1962996, 5);
}

bool func_278()
{
	return BitTest(Global_1962996, 19);
}

void func_279(int iParam0, int iParam1, int iParam2)
{
	if (func_359() && func_281())
	{
		while (Global_100676 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x577AE0048ADA90C8(0);
		if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				unk_0x2B2624627D450B2D(unk_0xC1A5EC5C986B98AD());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
			{
				if (unk_0x7DE17ACDD8BA2642(iParam0))
				{
					if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
					{
						if (!unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iParam0, 0))
						{
							unk_0x4C18E9202CF6CACA(unk_0xC1A5EC5C986B98AD(), iParam0, iParam1);
							unk_0xEAB390443C680F72(0f, 1065353216);
							unk_0xAABD7B0753C5C286(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
			{
				unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
			}
		}
		unk_0x4F06D02C5C1F10A2();
		func_280(0);
	}
}

void func_280(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xECDAB41968FF21A8(&(Global_100681.f_20), 13);
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_100681.f_20), 13);
	}
}

var func_281()
{
	return BitTest(Global_100681.f_20, 13);
}

void func_282(int iParam0)
{
	Global_96536 = 0;
	switch (iParam0)
	{
		case 72:
			func_283(2);
			func_283(4);
			break;
		
		case 73:
			func_283(0);
			func_283(1);
			func_283(7);
			break;
		
		case 92:
			func_283(10);
			func_283(9);
			func_283(13);
			func_283(6);
			break;
		
		case 68:
			func_283(11);
			break;
		
		case 78:
			func_283(14);
			break;
		
		case 79:
			func_283(3);
			break;
		
		default:
			break;
	}
}

void func_283(bool bParam0)
{
	unk_0xECDAB41968FF21A8(&Global_96536, iParam0);
}

void func_284()
{
	int iVar0;
	
	iVar0 = unk_0xE475C458F52F1781();
	if (unk_0x7DE17ACDD8BA2642(iVar0))
	{
		if (unk_0xFBD273FDBCF0C5BD(iVar0, 0))
		{
			func_285(iVar0, unk_0x30BE8A934C020461(iVar0, 1), unk_0xD850DD08D5434072(iVar0), 24, 0);
		}
	}
}

void func_285(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x7DE17ACDD8BA2642(iParam0) && unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x7DE17ACDD8BA2642(Global_77348.f_484[25]) && unk_0xFBD273FDBCF0C5BD(Global_77348.f_484[25], 0))
			{
				if (Global_77348.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0xCC4A4E244DA78599(iParam0) || unk_0x504B9BB48D41C264(iParam0) == joaat("bus")) || unk_0x504B9BB48D41C264(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_334(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_329(iParam0, &Var0);
		if (func_15(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x30BE8A934C020461(iParam0, 1) };
			uParam4 = unk_0xD850DD08D5434072(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x14580F20CBCE4FA9(unk_0x688846D56810779A()) != joaat("vehicle_gen_controller"))
			{
				Global_78336 = unk_0x14580F20CBCE4FA9(unk_0x688846D56810779A());
			}
		}
		func_322(iParam5, &Var0, Param1, uParam4, func_328(iParam0));
		func_286(iParam5, iParam0, 0);
	}
}

void func_286(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_319(&(Global_77348.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_77348.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_77348.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_77348.f_555[0 /*21*/].f_4 != unk_0x504B9BB48D41C264(iParam1))
		{
			return;
		}
	}
	if (Global_78255 != -1 && Global_78255 != iParam0)
	{
		return;
	}
	if (unk_0x7DE17ACDD8BA2642(iParam1))
	{
		if (unk_0xFBD273FDBCF0C5BD(iParam1, 0))
		{
			if (!unk_0x1AFE963DA61006ED(iParam1))
			{
				unk_0x85BAE84748AD1A23(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_113648.f_32751.f_4801 = func_308();
			}
			if (iParam1 != Global_77348.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_307(iParam0);
					if ((unk_0x7DE17ACDD8BA2642(iVar0) && unk_0xFBD273FDBCF0C5BD(iVar0, 0)) && iParam1 != iVar0)
					{
						func_287(iVar0, 145);
					}
				}
				Global_78254 = iParam1;
				Global_78255 = iParam0;
				Global_78256 = iParam2;
			}
		}
	}
}

void func_287(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_288(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xA66E176E5772E965(iParam0, -1, 0);
		if (!unk_0x7DE17ACDD8BA2642(iVar0))
		{
			iVar0 = unk_0x5E774735770A30F3(iParam0, -1);
		}
		if (unk_0x7DE17ACDD8BA2642(iVar0) && !unk_0x66599E73DBA5A850(iVar0))
		{
			if (unk_0x504B9BB48D41C264(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x504B9BB48D41C264(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x504B9BB48D41C264(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113648.f_2365.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x504B9BB48D41C264(iParam0) == Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x2AC37494BBF1DB16(&(Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x4310A0DB886F9FED(unk_0xC51D12209D0B7FCF(iParam0), &(Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113648.f_32751.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x504B9BB48D41C264(iParam0) == Global_113648.f_32751.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x2AC37494BBF1DB16(&(Global_113648.f_32751.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x4310A0DB886F9FED(unk_0xC51D12209D0B7FCF(iParam0), &(Global_113648.f_32751.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113648.f_32751.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113648.f_32751.f_5590 = iParam1;
	Global_78253 = iParam0;
	Global_113648.f_32751.f_5588 = 1;
	func_329(iParam0, &(Global_113648.f_32751.f_5510));
}

int func_288(int iParam0)
{
	if ((((((((((!unk_0x7DE17ACDD8BA2642(iParam0) || !unk_0xFBD273FDBCF0C5BD(iParam0, 0)) || func_305(iParam0, 0, 0)) || func_305(iParam0, 1, 0)) || func_305(iParam0, 2, 0)) || func_328(iParam0) != 145) || func_304(iParam0)) || func_303(iParam0)) || func_302(iParam0)) || func_301(iParam0)) || !func_289(unk_0x504B9BB48D41C264(iParam0)))
	{
		if (func_303(iParam0))
		{
		}
		if (func_303(iParam0))
		{
		}
		if (func_305(iParam0, 0, 0))
		{
		}
		if (func_305(iParam0, 1, 0))
		{
		}
		if (func_305(iParam0, 2, 0))
		{
		}
		if (func_328(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_289(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_290(iParam0, 0, -1))
	{
		return 0;
	}
	if (((unk_0x6123E78FD4B274FB(iParam0) || unk_0xAF4434A9F7368F35(iParam0)) || unk_0x2D92D1084D213DC4(iParam0)) || unk_0xF71BABB2940158F7(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_290(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x7E7D26DE9951D7A2(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0xA26A9A07F761D8F8()) || (iParam0 == joaat("buffalo3") && !unk_0xA26A9A07F761D8F8())) || (iParam0 == joaat("gauntlet2") && !unk_0xA26A9A07F761D8F8())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0xA26A9A07F761D8F8()))
	{
		if (!func_300())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x646D134FE56B32E6())
		{
			if (unk_0xEFB5BC3053DCCCD1(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xEF068EDE5319404F(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_299() && !func_298()) && !func_297()) && !func_296()) && !func_300())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_295() || unk_0xCC17806DB0C41C19()) || func_294())
		{
		}
		else if (!func_297())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_293(iParam0, iParam2))
		{
			return 0;
		}
	}
	if (!func_291(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_291(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_292())
	{
		return 1;
	}
	unk_0x7F2A1F8820F0DBE8(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x0E4605546F88E7A3(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_292()
{
	if (unk_0xCC17806DB0C41C19())
	{
		return unk_0xF6919DB2626A28C5();
	}
	return 0;
}

int func_293(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if ((!Global_2764242 && iParam1 >= 0) && iParam1 <= 415)
	{
		if (BitTest(Global_1586468[iParam1 /*142*/].f_103, 2))
		{
			return 1;
		}
	}
	if (Global_2764241)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xD48CE560FB238316();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7059 && !Global_262145.f_13397) && iVar1 < Global_262145.f_13398)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14737 && iVar1 < Global_262145.f_14749)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14733 && iVar1 < Global_262145.f_14745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14734 && iVar1 < Global_262145.f_14746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14735 && iVar1 < Global_262145.f_14747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14736 && iVar1 < Global_262145.f_14748)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14738 && iVar1 < Global_262145.f_14750)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14739 && iVar1 < Global_262145.f_14742)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14740 && iVar1 < Global_262145.f_14743)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14741 && iVar1 < Global_262145.f_14744)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17313 && iVar1 < Global_262145.f_17278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17308 && iVar1 < Global_262145.f_17273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17312 && iVar1 < Global_262145.f_17277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17311 && iVar1 < Global_262145.f_17276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17305 && iVar1 < Global_262145.f_17270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17306 && iVar1 < Global_262145.f_17271)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17309 && iVar1 < Global_262145.f_17274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17310 && iVar1 < Global_262145.f_17275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17307 && iVar1 < Global_262145.f_17272)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17315 && iVar1 < Global_262145.f_17280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17316 && iVar1 < Global_262145.f_17281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17304 && iVar1 < Global_262145.f_17269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17303 && iVar1 < Global_262145.f_17268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17302 && iVar1 < Global_262145.f_17267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17314 && iVar1 < Global_262145.f_17279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17317 && iVar1 < Global_262145.f_17282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17318 && iVar1 < Global_262145.f_17283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17319 && iVar1 < Global_262145.f_17284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17320 && iVar1 < Global_262145.f_17285)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17474 && iVar1 < Global_262145.f_17496)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17475 && iVar1 < Global_262145.f_17497)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17476 && iVar1 < Global_262145.f_17498)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17477 && iVar1 < Global_262145.f_17499)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17478 && iVar1 < Global_262145.f_17500)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17479 && iVar1 < Global_262145.f_17501)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17481 && iVar1 < Global_262145.f_17502)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17482 && iVar1 < Global_262145.f_17503)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17483 && iVar1 < Global_262145.f_17504)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17484 && iVar1 < Global_262145.f_17505)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17485 && iVar1 < Global_262145.f_17506)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17486 && iVar1 < Global_262145.f_17507)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17487 && iVar1 < Global_262145.f_17508)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17493 && iVar1 < Global_262145.f_17515)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17490 && iVar1 < Global_262145.f_17511)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17491 && iVar1 < Global_262145.f_17512)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17492 && iVar1 < Global_262145.f_17513)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17480 && iVar1 < Global_262145.f_17514)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17494 && iVar1 < Global_262145.f_17516)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17488 && iVar1 < Global_262145.f_17509)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17489 && iVar1 < Global_262145.f_17510)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17495 && iVar1 < Global_262145.f_17517)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19131 && iVar1 < Global_262145.f_19228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19132 && iVar1 < Global_262145.f_19229)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19133 && iVar1 < Global_262145.f_19230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19134 && iVar1 < Global_262145.f_19231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19135 && iVar1 < Global_262145.f_19232)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19136 && iVar1 < Global_262145.f_19233)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19137 && iVar1 < Global_262145.f_19234)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19138 && iVar1 < Global_262145.f_19235)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19139 && iVar1 < Global_262145.f_19236)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19140 && iVar1 < Global_262145.f_19237)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19141 && iVar1 < Global_262145.f_19238)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19142 && iVar1 < Global_262145.f_19239)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19143 && iVar1 < Global_262145.f_19240)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19144 && iVar1 < Global_262145.f_19241)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19145 && iVar1 < Global_262145.f_19242)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19146 && iVar1 < Global_262145.f_19243)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19147 && iVar1 < Global_262145.f_19244)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19148 && iVar1 < Global_262145.f_19245)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19149 && iVar1 < Global_262145.f_19246)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19150 && iVar1 < Global_262145.f_19247)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19151 && iVar1 < Global_262145.f_19248)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19152 && iVar1 < Global_262145.f_19249)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19153 && iVar1 < Global_262145.f_19250)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19154 && iVar1 < Global_262145.f_19251)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19155 && iVar1 < Global_262145.f_19252)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20212 && iVar1 < Global_262145.f_20208)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20213 && iVar1 < Global_262145.f_20209)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20214 && iVar1 < Global_262145.f_20210)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20215 && iVar1 < Global_262145.f_20211)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21094 && iVar1 < Global_262145.f_21102)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21095 && iVar1 < Global_262145.f_21103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21096 && iVar1 < Global_262145.f_21104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21097 && iVar1 < Global_262145.f_21105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21098 && iVar1 < Global_262145.f_21106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21099 && iVar1 < Global_262145.f_21107)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21893 && iVar1 < Global_262145.f_21913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21905 && iVar1 < Global_262145.f_21925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21896 && iVar1 < Global_262145.f_21916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21906 && iVar1 < Global_262145.f_21926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21894 && iVar1 < Global_262145.f_21914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21910 && iVar1 < Global_262145.f_21930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21908 && iVar1 < Global_262145.f_21928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21909 && iVar1 < Global_262145.f_21929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21904 && iVar1 < Global_262145.f_21924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21911 && iVar1 < Global_262145.f_21931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21907 && iVar1 < Global_262145.f_21927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21903 && iVar1 < Global_262145.f_21923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21895 && iVar1 < Global_262145.f_21915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21897 && iVar1 < Global_262145.f_21917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21898 && iVar1 < Global_262145.f_21918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21899 && iVar1 < Global_262145.f_21919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21900 && iVar1 < Global_262145.f_21920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21901 && iVar1 < Global_262145.f_21921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21902 && iVar1 < Global_262145.f_21922)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22861 && iVar1 < Global_262145.f_22889)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22862 && iVar1 < Global_262145.f_22890)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22863 && iVar1 < Global_262145.f_22891)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22864 && iVar1 < Global_262145.f_22892)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22865 && iVar1 < Global_262145.f_22893)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22866 && iVar1 < Global_262145.f_22894)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22867 && iVar1 < Global_262145.f_22895)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22868 && iVar1 < Global_262145.f_22896)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22869 && iVar1 < Global_262145.f_22897)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22870 && iVar1 < Global_262145.f_22898)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22871 && iVar1 < Global_262145.f_22899)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22872 && iVar1 < Global_262145.f_22900)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22873 && iVar1 < Global_262145.f_22901)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22874 && iVar1 < Global_262145.f_22902)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22875 && iVar1 < Global_262145.f_22903)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22876 && iVar1 < Global_262145.f_22904)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22877 && iVar1 < Global_262145.f_22905)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22878 && iVar1 < Global_262145.f_22906)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22879 && iVar1 < Global_262145.f_22907)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22880 && iVar1 < Global_262145.f_22908)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22881 && iVar1 < Global_262145.f_22909)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22882 && iVar1 < Global_262145.f_22910)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22883 && iVar1 < Global_262145.f_22911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22884 && iVar1 < Global_262145.f_22912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22885 && iVar1 < Global_262145.f_22913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22886 && iVar1 < Global_262145.f_22914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22887 && iVar1 < Global_262145.f_22915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22888 && iVar1 < Global_262145.f_22916)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24081 && iVar1 < Global_262145.f_24097)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24082 && iVar1 < Global_262145.f_24098)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24086 && iVar1 < Global_262145.f_24102)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24089 && iVar1 < Global_262145.f_24105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24094 && iVar1 < Global_262145.f_24110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24088 && iVar1 < Global_262145.f_24104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24080 && iVar1 < Global_262145.f_24096)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24087 && iVar1 < Global_262145.f_24103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24093 && iVar1 < Global_262145.f_24109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24092 && iVar1 < Global_262145.f_24108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24083 && iVar1 < Global_262145.f_24099)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24085 && iVar1 < Global_262145.f_24101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24095 && iVar1 < Global_262145.f_24111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24091 && iVar1 < Global_262145.f_24107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24084 && iVar1 < Global_262145.f_24100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24090 && iVar1 < Global_262145.f_24106)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24171 && iVar1 < Global_262145.f_24158)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24172 && iVar1 < Global_262145.f_24159)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24177 && iVar1 < Global_262145.f_24164)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24176 && iVar1 < Global_262145.f_24163)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24174 && iVar1 < Global_262145.f_24161)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24180 && iVar1 < Global_262145.f_24167)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24182 && iVar1 < Global_262145.f_24169)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24183 && iVar1 < Global_262145.f_24170)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24181 && iVar1 < Global_262145.f_24168)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24173 && iVar1 < Global_262145.f_24160)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24175 && iVar1 < Global_262145.f_24162)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24179 && iVar1 < Global_262145.f_24166)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24178 && iVar1 < Global_262145.f_24165)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26768 && iVar1 < Global_262145.f_26770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25781 && iVar1 < Global_262145.f_25774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25782 && iVar1 < Global_262145.f_25775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25783 && iVar1 < Global_262145.f_25776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25784 && iVar1 < Global_262145.f_25777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26769 && iVar1 < Global_262145.f_26771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25785 && iVar1 < Global_262145.f_25778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25786 && iVar1 < Global_262145.f_25779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25787 && iVar1 < Global_262145.f_25780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25792 && iVar1 < Global_262145.f_25813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25793 && iVar1 < Global_262145.f_25814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25794 && iVar1 < Global_262145.f_25815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25795 && iVar1 < Global_262145.f_25816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25796 && iVar1 < Global_262145.f_25817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25797 && iVar1 < Global_262145.f_25818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25798 && iVar1 < Global_262145.f_25819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25799 && iVar1 < Global_262145.f_25820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25800 && iVar1 < Global_262145.f_25821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25801 && iVar1 < Global_262145.f_25822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25802 && iVar1 < Global_262145.f_25823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25803 && iVar1 < Global_262145.f_25824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25804 && iVar1 < Global_262145.f_25825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25805 && iVar1 < Global_262145.f_25826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25806 && iVar1 < Global_262145.f_25827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25807 && iVar1 < Global_262145.f_25828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25808 && iVar1 < Global_262145.f_25829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25809 && iVar1 < Global_262145.f_25830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25810 && iVar1 < Global_262145.f_25831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25811 && iVar1 < Global_262145.f_25832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25812 && iVar1 < Global_262145.f_25833)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28613 && iVar1 < Global_262145.f_28634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28614 && iVar1 < Global_262145.f_28635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28615 && iVar1 < Global_262145.f_28636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28616 && iVar1 < Global_262145.f_28637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28617 && iVar1 < Global_262145.f_28638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28618 && iVar1 < Global_262145.f_28639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28619 && iVar1 < Global_262145.f_28640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28620 && iVar1 < Global_262145.f_28641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28621 && iVar1 < Global_262145.f_28642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28622 && iVar1 < Global_262145.f_28643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28623 && iVar1 < Global_262145.f_28644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28624 && iVar1 < Global_262145.f_28645)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28625 && iVar1 < Global_262145.f_28646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28626 && iVar1 < Global_262145.f_28647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28627 && iVar1 < Global_262145.f_28648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28628 && iVar1 < Global_262145.f_28649)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28629 && iVar1 < Global_262145.f_28650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28630 && iVar1 < Global_262145.f_28651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28631 && iVar1 < Global_262145.f_28652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28632 && iVar1 < Global_262145.f_28653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28633 && iVar1 < Global_262145.f_28654)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28656 && iVar1 < Global_262145.f_28657) && !Global_262145.f_28611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28659 && iVar1 < Global_262145.f_28660) && !Global_262145.f_28612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28664 && iVar1 < Global_262145.f_28667)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28665 && iVar1 < Global_262145.f_28668)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28666 && iVar1 < Global_262145.f_28669)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29682 && iVar1 < Global_262145.f_29347)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29333 && iVar1 < Global_262145.f_29354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29334 && iVar1 < Global_262145.f_29340)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29680 && iVar1 < Global_262145.f_29348)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29681 && iVar1 < Global_262145.f_29349)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29327 && iVar1 < Global_262145.f_29346)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29328 && iVar1 < Global_262145.f_29355)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29329 && iVar1 < Global_262145.f_29345)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29330 && iVar1 < Global_262145.f_29343)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29676 && iVar1 < Global_262145.f_29350)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29677 && iVar1 < Global_262145.f_29351)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29678 && iVar1 < Global_262145.f_29352)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29679 && iVar1 < Global_262145.f_29353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29331 && iVar1 < Global_262145.f_29342)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29332 && iVar1 < Global_262145.f_29344)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30141 && iVar1 < Global_262145.f_30124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30142 && iVar1 < Global_262145.f_30125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30143 && iVar1 < Global_262145.f_30126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30144 && iVar1 < Global_262145.f_30127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30145 && iVar1 < Global_262145.f_30128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30146 && iVar1 < Global_262145.f_30129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30147 && iVar1 < Global_262145.f_30130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30148 && iVar1 < Global_262145.f_30131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30149 && iVar1 < Global_262145.f_30132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30158)
		{
		}
		else if (!Global_262145.f_30150 && iVar1 < Global_262145.f_30133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30151 && iVar1 < Global_262145.f_30134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30152 && iVar1 < Global_262145.f_30135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30153 && iVar1 < Global_262145.f_30136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30154 && iVar1 < Global_262145.f_30137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30159)
		{
		}
		else if (!Global_262145.f_30155 && iVar1 < Global_262145.f_30138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30156 && iVar1 < Global_262145.f_30139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30157 && iVar1 < Global_262145.f_30140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_31009 && iVar1 < Global_262145.f_30992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_31010 && iVar1 < Global_262145.f_30993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_31011 && iVar1 < Global_262145.f_30994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31012 && iVar1 < Global_262145.f_30995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31013 && iVar1 < Global_262145.f_30996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31014 && iVar1 < Global_262145.f_30997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31015 && iVar1 < Global_262145.f_30998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31016 && iVar1 < Global_262145.f_30999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31017 && iVar1 < Global_262145.f_31000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31018 && iVar1 < Global_262145.f_31001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31019 && iVar1 < Global_262145.f_31002)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31020 && iVar1 < Global_262145.f_31003)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31021 && iVar1 < Global_262145.f_31004)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31022 && iVar1 < Global_262145.f_31005)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31023 && iVar1 < Global_262145.f_31006)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31024 && iVar1 < Global_262145.f_31007)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31025 && iVar1 < Global_262145.f_31008)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31889 && iVar1 < Global_262145.f_31874)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31890 && iVar1 < Global_262145.f_31875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31891 && iVar1 < Global_262145.f_31876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31892 && iVar1 < Global_262145.f_31877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31893 && iVar1 < Global_262145.f_31878)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31894 && iVar1 < Global_262145.f_31879)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31895 && iVar1 < Global_262145.f_31880)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31896 && iVar1 < Global_262145.f_31881)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31897 && iVar1 < Global_262145.f_31882)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31898 && iVar1 < Global_262145.f_31883)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31899 && iVar1 < Global_262145.f_31884)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31900 && iVar1 < Global_262145.f_31885)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31901 && iVar1 < Global_262145.f_31886)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31902 && iVar1 < Global_262145.f_31887)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31967)
		{
		}
		else if (!Global_262145.f_31903 && iVar1 < Global_262145.f_31888)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso3"))
	{
		if (!Global_262145.f_33131 && iVar1 < Global_262145.f_33112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("corsita"))
	{
		if (!Global_262145.f_33125 && iVar1 < Global_262145.f_33106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("draugur"))
	{
		if (!Global_262145.f_33129 && iVar1 < Global_262145.f_33110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("greenwood"))
	{
		if (!Global_262145.f_33123 && iVar1 < Global_262145.f_33104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjosj"))
	{
		if (!Global_262145.f_33134 && iVar1 < Global_262145.f_33115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lm87"))
	{
		if (!Global_262145.f_33126 && iVar1 < Global_262145.f_33107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("postlude"))
	{
		if (!Global_262145.f_33135 && iVar1 < Global_262145.f_33116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rhinehart"))
	{
		if (!Global_262145.f_33137 && iVar1 < Global_262145.f_33118)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sm722"))
	{
		if (!Global_262145.f_33128 && iVar1 < Global_262145.f_33109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf"))
	{
		if (!Global_262145.f_33136 && iVar1 < Global_262145.f_33117)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf2"))
	{
		if (!Global_262145.f_33139 && iVar1 < Global_262145.f_33120)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero2"))
	{
		if (!Global_262145.f_33124 && iVar1 < Global_262145.f_33105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero2"))
	{
		if (!Global_262145.f_33132 && iVar1 < Global_262145.f_33113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil2"))
	{
		if (!Global_262145.f_33138 && iVar1 < Global_262145.f_33119)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner4"))
	{
		if (!Global_262145.f_33130 && iVar1 < Global_262145.f_33111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel4"))
	{
		if (!Global_262145.f_33140 && iVar1 < Global_262145.f_33121)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("conada"))
	{
		if (!Global_262145.f_33127 && iVar1 < Global_262145.f_33108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnisegt"))
	{
		if (!Global_262145.f_33122 && iVar1 < Global_262145.f_33103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1384502824)
	{
		if (!Global_262145.f_33962 && iVar1 < Global_262145.f_33946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1576586413)
	{
		if (!Global_262145.f_33962 && iVar1 < Global_262145.f_33946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1249788006)
	{
		if (!Global_262145.f_33971 && iVar1 < Global_262145.f_33954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386336041)
	{
		if (!Global_262145.f_33965 && iVar1 < Global_262145.f_33949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1627077503)
	{
		if (!Global_262145.f_33959 && iVar1 < Global_262145.f_33943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1035489563)
	{
		if (!Global_262145.f_33960 && iVar1 < Global_262145.f_33944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1748565021)
	{
		if (!Global_262145.f_33957 && iVar1 < Global_262145.f_33941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2100457220)
	{
		if (!Global_262145.f_33968 && iVar1 < Global_262145.f_33952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 996383885)
	{
		if (!Global_262145.f_33972 && iVar1 < Global_262145.f_33956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -131348178)
	{
		if (!Global_262145.f_33969 && iVar1 < Global_262145.f_33953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 268758436)
	{
		if (!Global_262145.f_33958 && iVar1 < Global_262145.f_33942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1076201208)
	{
		if (!Global_262145.f_33961 && iVar1 < Global_262145.f_33945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 669204833)
	{
		if (!Global_262145.f_33970 && iVar1 < Global_262145.f_33955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1550581940)
	{
		if (!Global_262145.f_33966 && iVar1 < Global_262145.f_33950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1933242328)
	{
		if (!Global_262145.f_33967 && iVar1 < Global_262145.f_33951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -461850249)
	{
		if (!Global_262145.f_33964 && iVar1 < Global_262145.f_33948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taxi"))
	{
		if (!Global_262145.f_33963 && iVar1 < Global_262145.f_33947)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

var func_294()
{
	return (unk_0x01689609224A6C92() || unk_0xEE17703CF2C2875A());
}

var func_295()
{
	return (unk_0x8CCF8DC8E92BDA94() || unk_0x14F62099DEBAEA33());
}

int func_296()
{
	return 0;
}

int func_297()
{
	return 1;
}

int func_298()
{
	return 1;
}

int func_299()
{
	if (unk_0x7681F180D7938DA8(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_300()
{
	var uVar0;
	
	if (Global_152523 == 2)
	{
		return 1;
	}
	else if (Global_152523 == 3)
	{
		return 0;
	}
	if (unk_0x7FFBE14C34D75E19())
	{
		if (unk_0x8BD41D5945F5762B())
		{
			if (unk_0x001B3EAD68D731CE())
			{
				unk_0xDD7756E2742E0F6D(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xECDAB41968FF21A8(&uVar0, 2);
				unk_0xECDAB41968FF21A8(&uVar0, 4);
				unk_0xECDAB41968FF21A8(&uVar0, 6);
				unk_0xECDAB41968FF21A8(&Global_25, 2);
				unk_0xECDAB41968FF21A8(&Global_25, 4);
				unk_0xECDAB41968FF21A8(&Global_25, 6);
				unk_0x3CC35ACFFC9C730E(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x7D33DF1E1089E1D1())
				{
					uVar0 = unk_0x516080EA609481E1(866);
					unk_0xECDAB41968FF21A8(&uVar0, false);
					unk_0x705949B096008718(uVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0x7D33DF1E1089E1D1())
	{
		if (BitTest(unk_0x516080EA609481E1(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_301(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x504B9BB48D41C264(iParam0);
	sVar1 = unk_0xC51D12209D0B7FCF(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x4310A0DB886F9FED(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_290(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_302(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x7DE17ACDD8BA2642(Global_98042[iVar0]))
		{
			if (Global_98042[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_303(int iParam0)
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(iParam0) && unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x7DE17ACDD8BA2642(Global_98012[iVar0]) && unk_0xFBD273FDBCF0C5BD(Global_98012[iVar0], 0))
			{
				if (Global_98012[iVar0] == iParam0 && unk_0x504B9BB48D41C264(Global_98012[iVar0]) == unk_0x504B9BB48D41C264(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_304(int iParam0)
{
	int iVar0;
	
	if (unk_0x7DE17ACDD8BA2642(Global_77348.f_484[24]))
	{
		if (iParam0 == Global_77348.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x7DE17ACDD8BA2642(Global_77348.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_77348.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_305(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x7DE17ACDD8BA2642(iParam0) || !unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_306(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_113648.f_7231[iVar9], 0))
		{
			if (unk_0x7B0F3D01B676C014(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_306(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_307(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_77348.f_139[iParam0];
}

var func_308()
{
	var uVar0;
	
	func_318(&uVar0, unk_0x731F95B6458DCF80());
	func_317(&uVar0, unk_0x77BBAAED3E25322C());
	func_316(&uVar0, unk_0x30DFE1FFD2CC7420());
	func_311(&uVar0, unk_0x8C0F17CAC308A14B());
	func_310(&uVar0, unk_0x61117764C67882B7());
	func_309(&uVar0, unk_0x367F557725B53815());
	return uVar0;
}

void func_309(var uParam0, int iParam1)
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

void func_310(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_311(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_315(*uParam0);
	iVar1 = func_313(*uParam0);
	if (iParam1 < 1 || iParam1 > func_312(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_312(int iParam0, int iParam1)
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

var func_313(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_314(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_314(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_315(var uParam0)
{
	return uParam0 & 15;
}

void func_316(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_317(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_318(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_319(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_320(0, 1);
			uParam0->f_12 = 0;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 20);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_320(0, 1);
			uParam0->f_12 = 0;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 20);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_320(1, 1);
			uParam0->f_12 = 1;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 20);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_320(1, 2);
			uParam0->f_12 = 1;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 19);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_320(1, 1);
			uParam0->f_12 = 1;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 20);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_320(1, 2);
			uParam0->f_12 = 1;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 19);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_320(2, 1);
			uParam0->f_12 = 2;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 20);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_320(2, 1);
			uParam0->f_12 = 2;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 20);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_320(2, 1);
			uParam0->f_12 = 2;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 20);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), false);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), false);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), false);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), false);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 22);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), false);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 22);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), false);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 22);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), false);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), false);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), false);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 23);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), false);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 24);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), false);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 24);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), false);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 14);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 24);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 28);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 27);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 24);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 27);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 24);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 7);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 27);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 24);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 11);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 13);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 10);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 11);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 13);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 9);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 9);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 23);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 23);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 23);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 2);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 30);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 2);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 22);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_300())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 13);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 2);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), true);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 23);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_300())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 13);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 2);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), true);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 23);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), false);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 21);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 23);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 6);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 30);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 23);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 30);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 23);
			unk_0xECDAB41968FF21A8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113648.f_32751.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_15(Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113648.f_32751.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113648.f_32751.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_15(Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_15(Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_320(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_28(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_321(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_321(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113648.f_9087.f_99.f_58[128] && !Global_113648.f_9087.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113648.f_9087.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113648.f_9087.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_322(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_319(&(Global_77348.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_77348.f_555[0 /*21*/].f_9, 10))
		{
			func_327(iParam0);
			func_326(uParam1, &(Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_77348.f_555[0 /*21*/].f_9, 11))
			{
				Global_113648.f_32751.f_1864[Global_77348.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_113648.f_32751.f_1934[Global_77348.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_113648.f_32751.f_1864[Global_77348.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113648.f_32751.f_1934[Global_77348.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_323(iParam0, 1);
		}
	}
}

void func_323(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_325(iParam0, 0))
		{
			func_324(iParam0, 1, 0);
			func_324(iParam0, 2, 0);
			func_324(iParam0, 3, 0);
			func_324(iParam0, 4, 0);
			func_324(iParam0, 0, 1);
			Global_77348[iParam0] = 1;
		}
	}
	else
	{
		func_324(iParam0, 0, 0);
	}
}

void func_324(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xECDAB41968FF21A8(&(Global_113648.f_32751[iParam0]), bParam1);
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_113648.f_32751[iParam0]), bParam1);
	}
}

int func_325(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113648.f_32751[iParam0], iParam1);
}

void func_326(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_327(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_319(&(Global_77348.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x7DE17ACDD8BA2642(Global_77348.f_139[iParam0]))
		{
			unk_0x85BAE84748AD1A23(Global_77348.f_139[iParam0], 1, 1);
			unk_0x0E4B6CF706BE8AA4(&(Global_77348.f_139[iParam0]));
			Global_77348.f_139[iParam0] = 0;
		}
		if (BitTest(Global_77348.f_555[0 /*21*/].f_9, 13))
		{
			func_323(iParam0, 0);
		}
	}
}

int func_328(int iParam0)
{
	int iVar0;
	
	if (!unk_0x7DE17ACDD8BA2642(iParam0))
	{
		return 145;
	}
	if (!unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7DE17ACDD8BA2642(Global_98012[iVar0]))
		{
			if (Global_98012[iVar0] == iParam0)
			{
				return Global_98022[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_329(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xFBD273FDBCF0C5BD(iParam0, 0))
	{
		func_333(uParam1);
		uParam1->f_66 = unk_0x504B9BB48D41C264(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC51D12209D0B7FCF(iParam0), 16);
		*uParam1 = unk_0x46177D0BA2953EC5(iParam0);
		unk_0xD761D19F6F097C53(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x5A07E8D54892E711(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x89E530D113AF6EFC(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xD1EEB010323A3956(iParam0);
		uParam1->f_67 = unk_0xCCAF06B65CCC0B97(iParam0);
		uParam1->f_69 = unk_0xA79BA8CFAAB28820(iParam0);
		uParam1->f_70 = unk_0x1FA433B724B7085B(iParam0);
		unk_0x7C834DB7F2B3DFB2(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x5CF17DD27B31C6B3(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x0308AFE769A720D3(iParam0, 2))
		{
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 28);
		}
		if (unk_0x0308AFE769A720D3(iParam0, 3))
		{
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 29);
		}
		if (unk_0x0308AFE769A720D3(iParam0, 0))
		{
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 30);
		}
		if (unk_0x0308AFE769A720D3(iParam0, 1))
		{
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_332(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x05575C8395F0AAF3(iParam0, 0))
		{
			uParam1->f_68 = unk_0x3869EA643010CD0B(iParam0);
		}
		if (unk_0xAF4434A9F7368F35(uParam1->f_66))
		{
			if (unk_0xDF81E1E21E4E09BF(iParam0))
			{
				switch (unk_0x21880480C580A55F(iParam0))
				{
					case 3:
					case 0:
						unk_0x061B1200C95204CB(&(uParam1->f_77), 23);
						unk_0xECDAB41968FF21A8(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x061B1200C95204CB(&(uParam1->f_77), 23);
						unk_0x061B1200C95204CB(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xECDAB41968FF21A8(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xECDAB41968FF21A8(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x8785B34FCA0F7282(iParam0))
		{
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 9);
		}
		if (unk_0x41D114B661987866(iParam0))
		{
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 10);
		}
		if (unk_0x7A1F64336CB51721(iParam0))
		{
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 13);
			unk_0xA24DFB72308D1D0F(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xF0AADDC5F10AF90C(iParam0))
		{
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 12);
		}
		func_331(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x175FDAC9EB940479(iParam0, iVar0 + 1))
			{
				unk_0xECDAB41968FF21A8(&(uParam1->f_77), func_330(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x521A50EC08B4CCFF(iParam0, 0))
		{
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x061B1200C95204CB(&(uParam1->f_77), 11);
		}
		if (unk_0x2B6E67EB7FF3FD10(iParam0, "IgnoredByQuickSave") && unk_0x8FA309E9ECEE409A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xECDAB41968FF21A8(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x061B1200C95204CB(&(uParam1->f_77), 27);
		}
	}
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_331(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xFBD273FDBCF0C5BD(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x6BDF27AD591C4E31(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x4B7C35CD6132E59C(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x4B7C35CD6132E59C(*iParam0, iVar1))
			{
				switch (unk_0xD09F72755B50666C(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xCA36A30E79A35222(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x222AA75EE0288312(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x222AA75EE0288312(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_332(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_333(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_334(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_327(iParam0);
	func_323(iParam0, 0);
}

void func_335()
{
	func_338();
	func_336();
}

void func_336()
{
	if (!iLocal_831)
	{
		if (func_37(iLocal_874))
		{
			if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_874, 0))
			{
				func_66(iLocal_874, -1);
				func_65(iLocal_874, 318);
				iLocal_831 = 1;
			}
		}
	}
	if (!iLocal_832)
	{
		if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) > 0)
		{
			func_337(320, 0);
			iLocal_832 = 1;
		}
	}
	else if (unk_0x83C5A442AAD15BAF(unk_0x93E99A2DBCBA9CFA()) == 0)
	{
		func_64(0, 320);
		iLocal_832 = 0;
	}
}

void func_337(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_63372 = iParam0;
	if (!Global_63370)
	{
		Global_63370 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_75457)
		{
			if (Global_75458[iVar0 /*9*/] == iParam0)
			{
				Global_75458[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_338()
{
}

void func_339()
{
	if (!bLocal_28 && iLocal_683 != 5)
	{
		if (iLocal_683 > 0)
		{
			func_340();
		}
	}
}

void func_340()
{
	float fVar0;
	int iVar1;
	
	fVar0 = 600f;
	if (!func_37(iLocal_874))
	{
		if (!func_37(uLocal_875) && !func_37(Local_868.f_0))
		{
			func_342(1);
			return;
		}
		if (func_37(Local_868.f_0) && !func_157(unk_0xC1A5EC5C986B98AD(), Local_868.f_0, fVar0, 1))
		{
			func_342(2);
		}
	}
	else
	{
		iVar1 = 0;
		if (!func_157(unk_0xC1A5EC5C986B98AD(), iLocal_874, fVar0, 1))
		{
			iVar1++;
		}
		if (func_37(uLocal_875))
		{
			if (!func_157(unk_0xC1A5EC5C986B98AD(), uLocal_875, fVar0, 1))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_37(Local_868.f_0))
		{
			if (!func_157(unk_0xC1A5EC5C986B98AD(), Local_868.f_0, fVar0, 1))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_342(2);
			return;
		}
		iVar1 = 0;
		if (func_341(iLocal_874))
		{
			iVar1++;
		}
		if (func_37(uLocal_875))
		{
			if (func_341(uLocal_875))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_37(Local_868.f_0))
		{
			if (func_341(Local_868.f_0))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_342(3);
			return;
		}
	}
}

int func_341(var uParam0)
{
	if (func_37(uParam0))
	{
		if (((unk_0x248929CB6622481D(uParam0, 0, 7000) || unk_0x248929CB6622481D(uParam0, 3, 30000)) || unk_0x248929CB6622481D(uParam0, 2, 30000)) || unk_0x248929CB6622481D(uParam0, 1, 40000))
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

void func_342(int iParam0)
{
	unk_0x8581263F2F024518();
	func_61();
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			sLocal_818 = "PRA_FWRECK";
			break;
		
		case 2:
			sLocal_818 = "PRA_FFAR";
			break;
		
		case 3:
			sLocal_818 = "PRA_FSTUCK";
			break;
	}
	iLocal_683 = 5;
	iLocal_684 = 0;
}

int func_343(int iParam0)
{
	if (func_10(iParam0))
	{
		if (!unk_0x66599E73DBA5A850(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_344()
{
	if (!func_102(36))
	{
		func_345(21, 0, 0);
	}
}

void func_345(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_357(iParam0, 0, 0))
		{
			if (iParam2 && Global_100733.f_18[iParam0])
			{
				if (func_356(iParam0) == 3 && !func_355(iParam0))
				{
					func_354(iParam0);
					func_353(iParam0, 0, 0);
					func_347(iParam0, 1, 0);
					func_346(iParam0);
				}
				else
				{
					func_353(iParam0, 1, 0);
					func_346(iParam0);
				}
			}
			else
			{
				func_353(iParam0, 0, 0);
				func_347(iParam0, 1, 0);
				func_346(iParam0);
			}
		}
		else
		{
			func_347(iParam0, 1, 0);
			func_346(iParam0);
		}
	}
	else if (func_357(iParam0, 0, 0))
	{
		func_347(iParam0, 0, 0);
		func_347(iParam0, 1, 0);
		func_346(iParam0);
	}
}

void func_346(int iParam0)
{
	Global_100733.f_202[iParam0] = 1;
	Global_100733.f_201 = 1;
}

void func_347(int iParam0, bool bParam1, bool bParam2)
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
		if (func_352() == 0)
		{
			uVar0 = func_350(func_351(iParam0), -1, 0);
			unk_0x061B1200C95204CB(&uVar0, bParam1);
			func_348(func_351(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x061B1200C95204CB(&(Global_113648.f_668[iParam0]), bParam1);
	}
}

void func_348(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_349(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3CC35ACFFC9C730E(iVar0, uParam1, iParam3);
	}
}

int func_349(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
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

int func_350(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805027[iParam0 /*3*/][func_349(iParam1)];
		if (unk_0xDD7756E2742E0F6D(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_351(int iParam0)
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
		
		case 58:
			return 11433;
			break;
		
		case 59:
			return 11844;
			break;
		
		default:
			break;
	}
	return 14192;
}

int func_352()
{
	return Global_32163;
}

void func_353(int iParam0, bool bParam1, bool bParam2)
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
		if (func_352() == 0)
		{
			uVar0 = func_350(func_351(iParam0), -1, 0);
			unk_0xECDAB41968FF21A8(&uVar0, bParam1);
			func_348(func_351(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xECDAB41968FF21A8(&(Global_113648.f_668[iParam0]), bParam1);
	}
}

void func_354(int iParam0)
{
	if (Global_100733.f_18[iParam0])
	{
		func_353(iParam0, 10, 1);
		func_353(iParam0, 19, 1);
	}
}

bool func_355(int iParam0)
{
	return func_357(iParam0, 5, 1);
}

int func_356(int iParam0)
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
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
	}
	return 6;
}

int func_357(int iParam0, int iParam1, bool bParam2)
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
		if (func_352() == 0)
		{
			return BitTest(func_350(func_351(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113648.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_358(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_359())
	{
		unk_0xF1440897111F3111(0);
		unk_0x061B1200C95204CB(&(Global_100681.f_20), 2);
		unk_0x577AE0048ADA90C8(1);
		if (unk_0x48DC6A21D1CAD89C(unk_0x93E99A2DBCBA9CFA()))
		{
			unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 0, 0);
		}
		Global_100677 = { Param0 };
		Global_100680 = fParam3;
		Global_100676 = 1;
		if (iParam4 == 1)
		{
			unk_0xECDAB41968FF21A8(&(Global_100681.f_20), 14);
		}
		else
		{
			unk_0x061B1200C95204CB(&(Global_100681.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xECDAB41968FF21A8(&(Global_100681.f_20), 24);
		}
		else
		{
			unk_0x061B1200C95204CB(&(Global_100681.f_20), 24);
		}
		func_280(1);
	}
}

int func_359()
{
	if (Global_100681 == 10 || Global_100681 == 9)
	{
		return 1;
	}
	return 0;
}

void func_360()
{
	func_375();
	func_373();
	func_366();
	func_363();
	func_361();
}

void func_361()
{
	iLocal_1048[0] = 0;
	iLocal_1048[1] = 0;
	iLocal_1048[2] = 0;
	Local_688[0 /*8*/] = { func_362("FP1_WANTM", "FP1_LOSTM", "FP1_THEREM", "FP1_CHATFM", "", "FP1_CHATTM") };
	Local_688[1 /*8*/] = { func_362("FP1_WANTT", "FP1_LOSTT", "FP1_THERET", "FP1_CHATFM", "FP1_CHATFT", "") };
	Local_688[2 /*8*/] = { func_362("FP1_WANTF", "FP1_LOSTF", "FP1_THEREF", "", "FP1_CHATFT", "FP1_CHATTM") };
}

struct<8> func_362(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	struct<8> Var0;
	
	Var0 = 6;
	Var0[0] = sParam0;
	Var0[1] = sParam1;
	Var0[5] = sParam2;
	Var0[2] = sParam3;
	Var0[3] = sParam4;
	Var0[4] = sParam5;
	return Var0;
}

void func_363()
{
	Local_134[0 /*25*/] = { func_365(1203.146f, -337.3543f, 67.9314f, 1245.118f, -348.5059f, 68.2099f, 253.1908f, 0) };
	func_364(&(Local_134[0 /*25*/]), Local_824, 0, 15f, 5f, 270f, 3, 1192.006f, -631.4703f, 61.6972f, 10f, 10f, 5f);
	Local_134[1 /*25*/] = { func_365(1215.084f, -339.3139f, 68.1323f, 964.9214f, -555.212f, 58.0211f, 39.645f, 0) };
	func_364(&(Local_134[1 /*25*/]), Local_824, 0, 15f, 10f, 270f, 3, 1103.29f, -764.532f, 56.633f, 10f, 10f, 5f);
	Local_134[2 /*25*/] = { func_365(1179.533f, -361.3286f, 67.4559f, 929.8701f, -619.4534f, 56.4632f, 164.3631f, 0) };
	func_364(&(Local_134[2 /*25*/]), Local_824, 0, 15f, 10f, 270f, 3, 933.3745f, -615.9453f, 56.3041f, 10f, 10f, 5f);
	Local_134[3 /*25*/] = { func_365(1107.674f, -364.0569f, 65.9581f, 1099.266f, -775.0809f, 57.3525f, 178.2038f, 0) };
	func_364(&(Local_134[3 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[4 /*25*/] = { func_365(1069.279f, -393.5795f, 66.0262f, 1065.364f, -389.9561f, 66.1504f, 220.1611f, 0) };
	func_364(&(Local_134[4 /*25*/]), Local_824, 0, 5f, 30f, 128.1732f, 3, 1069.718f, -393.9912f, 66.0261f, 10f, 10f, 5f);
	Local_134[5 /*25*/] = { func_365(1031.673f, -424.599f, 64.5439f, 1027.179f, -420.6656f, 64.6268f, 178.2038f, joaat("p_binbag_01_s")) };
	func_364(&(Local_134[5 /*25*/]), 1028.201f, -428.3677f, 64.3571f, 1, 15f, 2f, 128.3915f, 1, 1027.179f, -420.6656f, 64.6268f, 10f, 10f, 5f);
	Local_134[6 /*25*/] = { func_365(942.1528f, -488.8956f, 59.3129f, 932.0198f, -489.3886f, 58.9212f, 202.5785f, joaat("p_binbag_01_s")) };
	func_364(&(Local_134[6 /*25*/]), 930.7186f, -494.9253f, 58.616f, 1, 15f, 2f, 119.6518f, 1, 952.9781f, -482.5082f, 60.0003f, 10f, 10f, 5f);
	Local_134[7 /*25*/] = { func_365(868.2734f, -529.5473f, 56.2071f, 865.0042f, -522.4746f, 56.3363f, 241.9711f, joaat("p_binbag_01_s")) };
	func_364(&(Local_134[7 /*25*/]), 865.2349f, -535.8759f, 56.1574f, 1, 15f, 2f, 162.7219f, 1, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[8 /*25*/] = { func_365(874.8076f, -571.2073f, 56.2987f, 983.125f, -541.9902f, 58.5929f, 49.7653f, 0) };
	func_364(&(Local_134[8 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[9 /*25*/] = { func_365(931.5218f, -614.2144f, 56.3119f, 928.6471f, -620.711f, 56.4611f, -108.06f, joaat("p_binbag_01_s")) };
	func_364(&(Local_134[9 /*25*/]), 940.4086f, -622.1787f, 56.3003f, 1, 15f, 2f, 228.1176f, 1, 918.6716f, -602.9258f, 56.3395f, 10f, 10f, 5f);
	Local_134[10 /*25*/] = { func_365(964.9758f, -645.9614f, 56.4465f, 927.1033f, -575.4162f, 56.5329f, 55.9317f, 0) };
	func_364(&(Local_134[10 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[11 /*25*/] = { func_365(983.4438f, -683.1442f, 56.4087f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_364(&(Local_134[11 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[12 /*25*/] = { func_365(1016.261f, -731.546f, 56.555f, 1011.801f, -733.0652f, 56.7435f, 314.5626f, joaat("p_binbag_01_s")) };
	func_364(&(Local_134[12 /*25*/]), 1020.251f, -736.815f, 56.6235f, 1, 15f, 2f, 220.7804f, 1, 1011.238f, -724.7085f, 56.5183f, 10f, 10f, 5f);
	Local_134[13 /*25*/] = { func_365(1164.126f, -762.2866f, 56.6656f, 1099.342f, -775.4273f, 57.3525f, 177.5729f, 0) };
	func_364(&(Local_134[13 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[14 /*25*/] = { func_365(1199.339f, -678.0995f, 59.9051f, 1205.415f, -672.1282f, 60.1445f, 105.2374f, 0) };
	func_364(&(Local_134[14 /*25*/]), Local_824, 0, 15f, 2f, 12.1103f, 3, 1199.339f, -678.0995f, 59.9051f, 10f, 10f, 5f);
	Local_134[15 /*25*/] = { func_365(1183.445f, -582.9476f, 63.0962f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_364(&(Local_134[15 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[16 /*25*/] = { func_365(1192.479f, -485.1086f, 64.7195f, 1264.359f, -719.084f, 63.328f, 65.0519f, 0) };
	func_364(&(Local_134[16 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[17 /*25*/] = { func_365(1212.693f, -400.0532f, 67.0971f, 1284.109f, -676.728f, 65.0225f, 69.9898f, 0) };
	func_364(&(Local_134[17 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[18 /*25*/] = { func_365(1114.573f, -232.3706f, 68.0949f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_364(&(Local_134[18 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	iLocal_830 = 19;
}

void func_364(var uParam0, struct<3> Param1, int iParam4, float fParam5, float fParam6, float fParam7, int iParam8, struct<3> Param9, struct<3> Param12)
{
	uParam0->f_3 = { Param1 };
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_9 = iParam4;
	uParam0->f_10 = iParam8;
	uParam0->f_11 = { Param9 };
	uParam0->f_14 = { Param12 };
}

struct<25> func_365(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	struct<25> Var0;
	
	Var0.f_9 = 1;
	Var0.f_10 = 3;
	Var0 = { Param0 };
	Var0.f_19 = { Param3 };
	Var0.f_22 = fParam6;
	Var0.f_23 = iParam7;
	return Var0;
}

void func_366()
{
	struct<3> Var0[6];
	
	Var0[0 /*3*/] = { 1251.308f, -400.6231f, 68.0926f };
	Var0[1 /*3*/] = { 1183.993f, -403.3443f, 66.8734f };
	Var0[2 /*3*/] = { 1161.54f, -372.6073f, 66.6034f };
	Var0[3 /*3*/] = { 1167.644f, -273.7987f, 67.9705f };
	Var0[4 /*3*/] = { 1252.362f, -247.353f, 77.5631f };
	Var0[5 /*3*/] = { 1330.062f, -341.0342f, 100.3476f };
	func_367(&Var0, 6);
}

void func_367(var uParam0, int iParam1)
{
	int iVar0;
	
	func_372(&uLocal_713);
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		func_371(&uLocal_713, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	func_370(&uLocal_713);
	func_368(&uLocal_765, &uLocal_713, 50f);
}

void func_368(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	
	if (uParam1->f_46 < 3)
	{
	}
	iVar0 = (uParam1->f_46 - 1);
	iVar1 = 0;
	iVar2 = 1;
	uParam0->f_46 = uParam1->f_46;
	while (iVar1 < uParam1->f_46)
	{
		Var3 = { *(uParam1[iVar1 /*3*/]) - *(uParam1[iVar0 /*3*/]) };
		Var6 = { *(uParam1[iVar2 /*3*/]) - *(uParam1[iVar1 /*3*/]) };
		Var3 = { Var3 / FtoV(unk_0x71D93B57D07F9804(((Var3.f_0 * Var3.f_0) + (Var3.f_1 * Var3.f_1)))) };
		Var6 = { Var6 / FtoV(unk_0x71D93B57D07F9804(((Var6.f_0 * Var6.f_0) + (Var6.f_1 * Var6.f_1)))) };
		Var9 = { Var3 - Var6 };
		Var9 = { Var9 / FtoV(unk_0x71D93B57D07F9804(((Var9.f_0 * Var9.f_0) + (Var9.f_1 * Var9.f_1)))) };
		if (func_369(uParam1, *(uParam1[iVar1 /*3*/]) + Var9))
		{
			Var9 = { -Var9 };
		}
		*(uParam0[iVar1 /*3*/]) = { *(uParam1[iVar1 /*3*/]) + Var9 * Vector(fParam2, fParam2, fParam2) };
		iVar0 = iVar1;
		iVar1++;
		iVar2 = (iVar2 + 1 % uParam1->f_46);
	}
}

bool func_369(var uParam0, struct<2> Param1, Vector3 vParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_46 < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_46 - 1);
	while (iVar1 < uParam0->f_46)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1.f_0)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

void func_370(var uParam0)
{
	int iVar0;
	float fVar1;
	
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		uParam0->f_47 = { uParam0->f_47 + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_47 = { uParam0->f_47 / FtoV(unk_0xBBDA792448DB5A89(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		fVar1 = unk_0xB7A628320EFF8E47(uParam0->f_47, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_50)
		{
			uParam0->f_50 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_50 = unk_0x71D93B57D07F9804(uParam0->f_50);
	uParam0->f_51 = 0;
}

void func_371(var uParam0, struct<3> Param1)
{
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 >= 15)
	{
	}
	*(uParam0[uParam0->f_46 /*3*/]) = { Param1 };
	uParam0->f_46++;
}

void func_372(var uParam0)
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

void func_373()
{
	Local_840 = { func_374(1200.61f, -344.2721f, 68.0424f, 269.2015f, joaat("s_m_y_garbage")) };
	Local_854 = { func_374(1202.42f, -341.6034f, 67.9378f, 273.1125f, joaat("s_m_y_garbage")) };
}

struct<14> func_374(struct<3> Param0, float fParam3, int iParam4)
{
	struct<14> Var0;
	
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

void func_375()
{
	Local_868 = { func_376(1203.146f, -337.3543f, 67.9314f, 189.7047f, joaat("trash")) };
}

struct<6> func_376(struct<3> Param0, float fParam3, int iParam4)
{
	struct<6> Var0;
	
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

void func_377()
{
	func_240(1);
	func_388(1);
	unk_0x9C56520AE72AFDBF(joaat("trash"), 0);
	unk_0x9C56520AE72AFDBF(joaat("towtruck"), 0);
	unk_0x9C56520AE72AFDBF(joaat("s_m_y_garbage"), 0);
	func_63();
	func_387();
	func_386();
	func_378(0);
	unk_0x675D9C12C73D3DE7();
}

void func_378(bool bParam0)
{
	struct<3> Var0;
	
	if (bParam0)
	{
	}
	unk_0xE333240A90F2FF3C(unk_0x93E99A2DBCBA9CFA(), 1, 0);
	unk_0x2112CE9FD54D593A("DRIVE", 1);
	unk_0x2112CE9FD54D593A("WORLD_VEHICLE_ATTRACTOR", 1);
	unk_0x2112CE9FD54D593A("WORLD_VEHICLE_DRIVE_PASSENGERS", 1);
	unk_0x2112CE9FD54D593A("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_38();
	func_385();
	func_384();
	func_383();
	func_382();
	func_222();
	if (bParam0)
	{
		if (unk_0x7DE17ACDD8BA2642(iLocal_874))
		{
			if (unk_0x7DE17ACDD8BA2642(unk_0xC1A5EC5C986B98AD()))
			{
				if (!unk_0x66599E73DBA5A850(unk_0xC1A5EC5C986B98AD()))
				{
					if (unk_0xE0D346789C5160EB(unk_0xC1A5EC5C986B98AD(), iLocal_874, 0))
					{
						Var0 = { unk_0x30BE8A934C020461(unk_0xC1A5EC5C986B98AD(), 1) };
						unk_0xC2E3C377D893C17A(unk_0xC1A5EC5C986B98AD(), Var0, 1, 0, 0, 1);
					}
				}
			}
		}
		func_380();
		unk_0x8581263F2F024518();
		func_2();
	}
	else
	{
		func_379();
	}
	unk_0x8FCB44103687B99F(0);
	func_145(&uLocal_671, 0, 0);
	if (unk_0xF57C1326FD40C8A7(uLocal_823))
	{
		unk_0x9E2404A25985615A(0, 0, 3000, 1, 0, 0);
		unk_0x42B9FA814615C4F9(uLocal_823, 0);
	}
}

void func_379()
{
	func_3();
	func_6(&Local_868);
	func_6(&uLocal_875);
	func_6(&iLocal_874);
	func_5(&Local_840, 1, 0, 1);
	func_5(&Local_854, 1, 0, 1);
	func_6(&uLocal_876);
}

void func_380()
{
	Global_20591 = 0;
	func_381();
}

void func_381()
{
	unk_0x782234C275AFBA24();
	Global_22736 = 0;
	if (unk_0x0DCB385165FDE763())
	{
		unk_0xD6625E11483B2324(false);
		Global_21725 = 6;
	}
}

void func_382()
{
}

void func_383()
{
	if (iLocal_837)
	{
		unk_0x8485F4B24A112331(joaat("trash"));
	}
}

void func_384()
{
}

void func_385()
{
	unk_0xE0A291F406691F03(Local_868.f_5);
}

void func_386()
{
	func_345(21, 1, 0);
}

void func_387()
{
	Global_96536 = 0;
}

void func_388(int iParam0)
{
	Global_97987 = iParam0;
}

void func_389()
{
	int iVar0;
	
	if (unk_0x6CAF14BE58B4BFF8("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_113648.f_9087 || func_33(0))
	{
		if (!func_390())
		{
			iVar0 = func_32();
			if (iVar0 != -1)
			{
				if (!func_19(iVar0))
				{
					return;
				}
				unk_0xECDAB41968FF21A8(&(Global_91433[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_24();
		}
	}
}

int func_390()
{
	if (((Global_100681 == 13 || Global_100681 == 10) || Global_100681 == 11) || Global_100681 == 12)
	{
		return 0;
	}
	return 1;
}

