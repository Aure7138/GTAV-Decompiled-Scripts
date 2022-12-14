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
	struct<110> Local_28[4];
	struct<94> Local_469 = { 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1 } ;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = -1;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = -1;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	struct<8> Local_579[5];
	int iLocal_620[1] = { 0 };
	struct<4> Local_622 = { 0, 0, 0, 0 } ;
	char cLocal_626[64] = "";
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	struct<3> Local_642 = { 0, 0, 0 } ;
	char cLocal_645[24] = "";
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	int iLocal_651 = 0;
	int iLocal_652 = 0;
	bool bLocal_653 = 0;
	bool bLocal_654 = 0;
	int iLocal_655 = 0;
	bool bLocal_656 = 0;
	int iLocal_657 = 0;
	var uLocal_658 = 30;
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
	var uLocal_809 = 10;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 10;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
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
	var uLocal_931 = 20;
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
	var uLocal_1032 = 20;
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
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 30;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 5;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 7;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 5;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 3;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 21;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 10;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 5;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 5;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 3;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 1092616192;
	var uLocal_1676 = 1101004800;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 3;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	struct<8> Local_1693[5];
	struct<32> Local_1734[20];
	char cLocal_2375[32] = "";
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 16;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	bool bLocal_2548 = 0;
	int iLocal_2549 = 0;
	int iLocal_2550 = 0;
	var uLocal_2551 = 0;
	int iLocal_2552 = 0;
	int iLocal_2553 = 0;
	int iLocal_2554 = 0;
	struct<2> Local_2555 = { 0, 0 } ;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	char cLocal_2559[16] = "";
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	int iLocal_2563 = 0;
	float fLocal_2564 = 0f;
	int iLocal_2565 = 0;
	int iLocal_2566 = 0;
	int iLocal_2567 = 0;
	int iLocal_2568 = 0;
	int iLocal_2569 = 0;
	int iLocal_2570 = 0;
	char cLocal_2571[16] = "";
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	int iLocal_2575 = 0;
	int iLocal_2576 = 0;
	bool bLocal_2577 = 0;
	int iLocal_2578 = 0;
	int iLocal_2579 = 0;
	int iLocal_2580 = 0;
	int iLocal_2581 = 0;
	struct<2> Local_2582 = { 0, 0 } ;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	struct<2> Local_2586 = { 0, 0 } ;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	int iLocal_2590 = 0;
	bool bLocal_2591 = 0;
	int iLocal_2592 = 0;
	int iLocal_2593 = 0;
	int iLocal_2594 = 0;
	bool bLocal_2595 = 0;
	int iLocal_2596 = 0;
	int iLocal_2597 = 0;
	int iLocal_2598 = 0;
	int iLocal_2599 = 0;
	int iLocal_2600 = 0;
	int iLocal_2601 = 0;
	int iLocal_2602 = 0;
	int iLocal_2603 = 0;
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
	StringCopy(&Local_622, "JHP1ADS", 16);
	StringCopy(&cLocal_626, "JEWEL_STORE_HEIST_SETUP_BUGSTAR_ALARMS", 64);
	Local_642 = { 154.9478f, -3092.523f, 4.911984f };
	StringCopy(&cLocal_645, "jhp1a_sec_arrive", 24);
	iLocal_651 = 0;
	iLocal_657 = 6;
	iLocal_2549 = -1;
	iLocal_2553 = -1;
	iLocal_2554 = -1;
	StringCopy(&Local_2555, "", 16);
	StringCopy(&cLocal_2559, "", 16);
	fLocal_2564 = 1E+08f;
	iLocal_2567 = 1;
	iLocal_2570 = -1;
	StringCopy(&cLocal_2571, "", 16);
	iLocal_2575 = -1;
	iLocal_2576 = 1;
	iLocal_2580 = -1;
	iLocal_2581 = -1;
	StringCopy(&Local_2582, "", 16);
	StringCopy(&Local_2586, "", 16);
	iLocal_2590 = 1;
	iLocal_2592 = 1;
	iLocal_2596 = -1;
	iLocal_2598 = -1;
	iLocal_2599 = -1;
	if (unk_0x4B34601C5C56F3EE(3))
	{
		func_300(6);
	}
	unk_0xBD1F51FB3FA2C6E4(1);
	func_293();
	func_252();
	while (true)
	{
		unk_0x6D3F703013ED87D3("M_JewelStoreJobPrep1A", 0);
		if (bLocal_656)
		{
			func_250();
		}
		func_247(&uLocal_658);
		func_189();
		if (!bLocal_654)
		{
			func_187();
			func_176();
			func_175(&Local_1693);
		}
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	switch (iLocal_651)
	{
		case 0:
			if (func_25())
			{
				func_24(1);
			}
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()
{
	int iVar0;
	
	if ((iLocal_2599 != -1 && unk_0xE5965CDF24F93A9F(Local_579[iLocal_2599 /*8*/])) && unk_0x55A0C756C4A8220C(Local_579[iLocal_2599 /*8*/], 0))
	{
		iVar0 = unk_0x0CF63873D754B965(Local_579[iLocal_2599 /*8*/]);
		func_23(Local_579[iLocal_2599 /*8*/], -1);
	}
	if (iVar0 >= 750 || iVar0 <= 0)
	{
		Global_96866 = 1000;
	}
	else
	{
		Global_96866 = iVar0;
	}
	if (!func_22(&(Local_1693[3 /*8*/])))
	{
		func_21(699);
	}
	func_8(0);
	if (func_7(88))
	{
		func_3(0, 1);
	}
	else
	{
		func_3(0, 0);
	}
	unk_0xAFBDF6A5E54114C1();
}

void func_3(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_63156)
	{
		Global_63156 = iParam1;
	}
	if (bParam0)
	{
		if ((func_6(0) && Global_78565.f_1 == 1) && func_5(Global_78565))
		{
		}
		else
		{
			Global_63154 = 1;
		}
	}
	if (Global_113386.f_9085 || func_6(0))
	{
		iVar0 = func_4();
		iVar1 = Global_91193[iVar0 /*5*/];
		uVar2 = Global_78588.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113386.f_9085)
			{
			}
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xCED9E32812D6C7C7(&(Global_91193[iVar0 /*5*/].f_1), 4);
		unk_0xCED9E32812D6C7C7(&Global_78567, true);
		Global_78583 = uVar2;
		Global_78584 = unk_0x320D1840B6DAA1CC();
	}
}

int func_4()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_5(int iParam0)
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

int func_6(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_7(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_330[iParam0 /*6*/];
}

void func_8(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0xBA6C3C5E9E5A9442();
	unk_0x3410421C60BF7143(1);
	if (bParam0)
	{
		unk_0xBA5D7196EACB9282(unk_0x9E2D6C50374FCFA9());
		unk_0x1CF3F44FC2EB9F99("JHP1A_FAIL");
	}
	else
	{
		unk_0x8576657A629C4B0A(1f);
		unk_0xF3E520D4DDFE531B(unk_0x9E2D6C50374FCFA9(), 1f);
	}
	unk_0xC0F70A3CDEC87ECE(5);
	unk_0xF0CA50AC5D6CFD41(unk_0x9E2D6C50374FCFA9(), 1);
	unk_0x3B8C20EF19A49C3E(1);
	func_18(&Local_1693);
	func_13(&uLocal_1668, 1, 0);
	bLocal_2548 = false;
	iLocal_2549 = -1;
	iLocal_2593 = 0;
	iLocal_2594 = 0;
	bLocal_2595 = false;
	iLocal_2596 = -1;
	iLocal_2598 = -1;
	iLocal_2599 = -1;
	iLocal_2600 = 0;
	iLocal_2601 = 0;
	iLocal_2597 = 0;
	if (bParam0)
	{
		func_11();
		unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
		unk_0xBA5D7196EACB9282(unk_0x9E2D6C50374FCFA9());
		unk_0xF96094A43D443C41(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0xCB583354EA6E5E4A(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0xDC226C748C3C868D(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0x02B222EADC9DC566(158.78f, -3100.44f, 6.0019f, 100f, 0, 0, 0, 0, 0, 0, 0);
		unk_0x917F631782A9CB32(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0xEF071F2FF93BC37F(158.78f, -3100.44f, 6.0019f, 100f);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_620)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_620[iVar0]))
		{
			if (bParam0)
			{
				unk_0x4BDA5AFD88C085EB(&(iLocal_620[iVar0]));
			}
			else
			{
				unk_0x59E393B344098656(&(iLocal_620[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		func_10(&(Local_28[iVar0 /*110*/]), bParam0);
		iVar0++;
	}
	func_10(&Local_469, bParam0);
	iVar0 = 0;
	while (iVar0 < Local_579.f_0)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (unk_0xE5965CDF24F93A9F(Local_579[iVar0 /*8*/].f_2[iVar1]))
			{
				if (bParam0)
				{
					unk_0x05CB75C0837196F9(&(Local_579[iVar0 /*8*/].f_2[iVar1]));
				}
				else
				{
					unk_0xB3822DB3D538C8F3(&(Local_579[iVar0 /*8*/].f_2[iVar1]));
				}
			}
			iVar1++;
		}
		if (unk_0xE5965CDF24F93A9F(Local_579[iVar0 /*8*/]))
		{
			if (bParam0)
			{
				unk_0xD59CC8123FD1A789(&(Local_579[iVar0 /*8*/]));
			}
			else
			{
				unk_0x3D81769BEC61BFF8(&(Local_579[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
	if (unk_0x83565BF2F64AA92E(&cLocal_626))
	{
		unk_0x837739686F969991(&cLocal_626, bParam0);
	}
	if (iLocal_2603 != 0)
	{
		unk_0x7BACBB4C6A7B18B7(iLocal_2603, 0);
	}
	func_9();
}

void func_9()
{
	Global_96296 = 0;
}

void func_10(var uParam0, bool bParam1)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (bParam1)
		{
			unk_0x05CB75C0837196F9(uParam0);
		}
		else
		{
			unk_0xB3822DB3D538C8F3(uParam0);
		}
	}
	uParam0->f_5 = 0;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_39 = 0;
	uParam0->f_41 = 0;
	uParam0->f_93 = 1;
	uParam0->f_102 = 0;
	uParam0->f_47 = 0;
	uParam0->f_46 = 0;
	uParam0->f_48 = 0;
	uParam0->f_37 = -1;
	uParam0->f_103 = -1;
	uParam0->f_40 = 0;
	uParam0->f_92 = -1;
	uParam0->f_43 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	uParam0->f_91 = 0;
	if (unk_0xE5965CDF24F93A9F(uParam0->f_105))
	{
		if (unk_0xE85F749F6D5C809E(uParam0->f_105))
		{
			unk_0xE6451C2F193342C7(uParam0->f_105, 1, 1);
		}
		if (bParam1)
		{
			unk_0x4BDA5AFD88C085EB(&(uParam0->f_105));
		}
		else
		{
			unk_0x59E393B344098656(&(uParam0->f_105));
		}
	}
	uParam0->f_106 = -1;
	uParam0->f_107 = 0;
	uParam0->f_109 = 0;
	uParam0->f_104 = 0;
}

void func_11()
{
	Global_20471 = 0;
	func_12();
}

void func_12()
{
	unk_0x82B0661A78CC39CF();
	Global_22616 = 0;
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21605 = 6;
	}
}

void func_13(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (BitTest(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_17(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x12DD4A0B247D9B4D(uParam0->f_1[iVar0]))
		{
			unk_0xFFD8EB5462B07B59(&(uParam0->f_1[iVar0]));
		}
		func_16(iVar0, uParam0);
		func_15(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0xB0550BC91B0159D6(&(uParam0->f_13), iVar0);
			unk_0xB0550BC91B0159D6(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0x12DD4A0B247D9B4D(*uParam0))
	{
		unk_0xFFD8EB5462B07B59(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xF68107C40359970C(uParam0->f_17[iVar0]))
		{
			unk_0x2378080C93821600(uParam0->f_17[iVar0], 1);
			unk_0xA3400358EEE2B4A2(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0xD6A76BAB45A4B460(uParam0->f_17[iVar0], 32, 1);
				unk_0xD6A76BAB45A4B460(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0xD6A76BAB45A4B460(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0x2F52E009BBC0AFCE(uParam0->f_17[iVar0], func_14()) && uParam0->f_17[iVar0] != unk_0xE2D3D51028F0428A())
				{
					unk_0x6221A52631154EF7(uParam0->f_17[iVar0]);
				}
			}
			if (!BitTest(uParam0->f_13, 29))
			{
				unk_0xA091C233F9D0AB04(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		unk_0x2378080C93821600(unk_0xE2D3D51028F0428A(), 1);
		unk_0xA3400358EEE2B4A2(unk_0xE2D3D51028F0428A(), 1);
	}
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (bParam2)
		{
			unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

var func_14()
{
	return unk_0xFD8E434495EC2F26(unk_0xB6BA8B8E3D0B41C6());
}

void func_15(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xB0550BC91B0159D6(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xB0550BC91B0159D6(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xB0550BC91B0159D6(&(uParam1->f_13), 19);
			break;
	}
}

void func_16(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xB0550BC91B0159D6(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xB0550BC91B0159D6(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xB0550BC91B0159D6(&(uParam1->f_13), 16);
			break;
	}
}

void func_17(var uParam0)
{
	if (unk_0x12DD4A0B247D9B4D(uParam0->f_5))
	{
		unk_0xFFD8EB5462B07B59(&(uParam0->f_5));
	}
}

void func_18(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_19(uParam0[iVar0 /*8*/]);
		iVar0++;
	}
}

void func_19(var uParam0)
{
	if (!func_20(uParam0))
	{
		*uParam0 = 0;
	}
}

int func_20(var uParam0)
{
	if (*uParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_63155 = 0;
	if (!Global_63379[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_75249)
	{
		if (Global_75250[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_75250[iVar1 /*9*/].f_1 = 1;
			Global_75250[iVar1 /*9*/].f_2 = 0f;
			if (Global_75250[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_22(var uParam0)
{
	if (*uParam0 != 0 && (*uParam0 != 2 || uParam0->f_1 > 0))
	{
		return 1;
	}
	return 0;
}

void func_23(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_63167 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		if (iParam1 == -1 || Global_75250[iVar0 /*9*/] == iParam1)
		{
			if (Global_75250[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_75250[iVar0 /*9*/].f_6 = iParam0;
				Global_75250[iVar0 /*9*/].f_7 = 1;
				Global_75250[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_652 = 0;
		bLocal_653 = false;
		iLocal_651 = iParam0;
	}
}

int func_25()
{
	bool bVar0;
	
	if (!bLocal_653)
	{
		func_174(&uLocal_658, "SCRIPT\JWL_HA_RAID_STORE");
		func_173(&uLocal_658, joaat("s_m_m_security_01"));
		func_172(&(Local_1693[1 /*8*/]), 0, 0, 1);
		func_172(&(Local_1693[0 /*8*/]), 0, 0, 1);
		func_172(&(Local_1693[4 /*8*/]), 0, 0, 1);
		func_111(0f, 0f, 0f, 0f, 1, func_167());
		Global_96866 = 1000;
		unk_0x8576657A629C4B0A(0.1f);
		func_110("JHP1A_STEAL_BSV", 7500, 1);
		bLocal_653 = true;
	}
	if (bLocal_653)
	{
		switch (iLocal_652)
		{
			case 0:
				if (func_105(1) == 0)
				{
					func_13(&uLocal_1668, 1, 0);
					func_23(0, -1);
					func_104(0, -1);
				}
				else if ((func_103() && unk_0xE5965CDF24F93A9F(Local_579[func_102() /*8*/])) && unk_0x55A0C756C4A8220C(Local_579[func_102() /*8*/], 0))
				{
					unk_0xBB35B4E1D532F811(0.5f);
					if (iLocal_2599 != func_102())
					{
						unk_0x2DA9F9D8E5530E75(5f, 10f, 4);
						func_23(Local_579[func_102() /*8*/], -1);
						func_104(Local_579[func_102() /*8*/], -1);
						iLocal_2599 = func_102();
					}
					if (func_100(&uLocal_1668, 692.8256f, -1012.544f, 21.722f, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_579[func_102() /*8*/], "", "", "", 1, 0, 1, -1))
					{
						iLocal_652++;
					}
				}
				else if (func_99())
				{
					unk_0xBB35B4E1D532F811(0.5f);
					func_55(&uLocal_1668, 692.8256f, -1012.544f, 21.722f, 0.1f, 0.1f, 0.1f, 1, iLocal_2600, "", "", "", 1, 0, 1, -1);
					if (unk_0xD132EDDA78FF4A51(Local_579[func_54() /*8*/], 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, 1, 0))
					{
						iLocal_652++;
					}
				}
				else
				{
					func_17(&uLocal_1668);
					func_23(0, -1);
					func_104(0, -1);
				}
				break;
			
			case 1:
				if (func_103())
				{
					if (func_52(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 5f, 1, 1056964608, 0, 1, 0))
					{
						bVar0 = true;
					}
				}
				else if (func_99())
				{
					if (func_52(iLocal_2600, 5f, 1, 1056964608, 0, 1, 0))
					{
						bVar0 = true;
					}
				}
				if (bVar0)
				{
					if (func_7(88))
					{
						unk_0x2DA9F9D8E5530E75(5f, 10f, 4);
						unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 1);
						func_51(1);
						func_50(1, 0);
						iLocal_652 = 1000;
					}
					else
					{
						unk_0x2DA9F9D8E5530E75(5f, 10f, 4);
						iLocal_652++;
					}
					if (func_103())
					{
						unk_0xF838539C61C30896(Local_579[iLocal_2599 /*8*/], 0);
					}
					else if (func_99())
					{
						unk_0xF838539C61C30896(Local_579[func_54() /*8*/], 0);
						unk_0x1B3814E11B085F5E(Local_579[func_54() /*8*/], 1);
						unk_0x3C5E540BABD9E8AA(Local_579[func_54() /*8*/]);
					}
					unk_0xAB7639D658BBCCEE(unk_0xE2D3D51028F0428A(), 0, 0);
				}
				break;
			
			case 2:
				if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
				{
					return 1;
				}
				break;
			
			case 1000:
				func_50(1, 0);
				if (!func_48())
				{
					func_46();
				}
				else
				{
					func_45(&uLocal_2383, 3, 0, "LESTER", 0, 1);
					if (func_28(&uLocal_2383, 12, "JHFAUD", "JHF_P10c", 8, 1, 0, 0, 0))
					{
						iLocal_652++;
					}
				}
				break;
			
			case 1001:
				func_50(1, 0);
				if (func_27())
				{
					unk_0x2DA9F9D8E5530E75(5f, 10f, 4);
					iLocal_652++;
				}
				break;
			
			case 1002:
				func_50(1, 0);
				if (!func_27())
				{
					func_26();
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_26()
{
	int iVar0;
	
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0xBED097BB6359F09C(unk_0xE2D3D51028F0428A(), 0, 0, 0, 0, 0, 0, 0, 0);
		unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 157, 1);
		unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xE5965CDF24F93A9F(Global_97810[iVar0]))
		{
			if (!unk_0x55B23FE400FCEA6B(Global_97810[iVar0], 0))
			{
				unk_0xBED097BB6359F09C(Global_97810[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0x9210F85E9CD785F1(Global_97810[iVar0], 0);
			}
		}
		iVar0++;
	}
	if ((Global_43052 != 0 && Global_43052 != 3) && Global_43052 != 2)
	{
		unk_0xC0F70A3CDEC87ECE(5);
		unk_0x8576657A629C4B0A(1f);
	}
}

int func_27()
{
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_28(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_44(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	if (iParam5 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	Global_2883585 = 0;
	return func_29(sParam3, iParam4, bParam8);
}

int func_29(char* sParam0, int iParam1, bool bParam2)
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
					func_43();
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
		if (func_42(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_41();
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
				func_39();
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
				if (func_38())
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
			if (func_37())
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
			func_36();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_35();
		func_30();
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
		func_43();
	}
	return 0;
}

void func_30()
{
	if (!func_31())
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

int func_31()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_34())
	{
		return 0;
	}
	if (func_32(unk_0x9E2D6C50374FCFA9()))
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

bool func_32(int iParam0)
{
	return func_33(iParam0, 20);
}

var func_33(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_34()
{
	return -1;
}

void func_35()
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

void func_36()
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

int func_37()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_38()
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

void func_39()
{
	if (func_40(14))
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
		Global_20266 = func_167();
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

bool func_40(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_41()
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

bool func_42(int iParam0, int iParam1)
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

void func_43()
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

void func_44(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = iParam5;
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

void func_45(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78319)
	{
		if (!unk_0xF68107C40359970C(iParam2))
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

void func_46()
{
	Global_20471 = 0;
	func_47();
}

void func_47()
{
	if (unk_0x2E5F8A288A954523())
	{
		unk_0x82B0661A78CC39CF();
		Global_22616 = 0;
		unk_0xD681CC2BC1084DB6(1);
		Global_21605 = 6;
		return;
	}
}

int func_48()
{
	if (func_49())
	{
		return 0;
	}
	if (unk_0x0038CA9239065BCA())
	{
		if (unk_0x559C03F53E6937FC())
		{
			return 0;
		}
	}
	return 1;
}

int func_49()
{
	if (Global_21605 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

void func_50(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		unk_0x7653D561C9574763(0, 21, 1);
	}
	unk_0x7653D561C9574763(0, 25, 1);
	unk_0x7653D561C9574763(0, 24, 1);
	unk_0x7653D561C9574763(0, 257, 1);
	unk_0x7653D561C9574763(0, 141, 1);
	unk_0x7653D561C9574763(0, 140, 1);
	unk_0x7653D561C9574763(0, 22, 1);
	unk_0x7653D561C9574763(0, 44, 1);
	unk_0x7653D561C9574763(0, 23, 1);
	unk_0x7653D561C9574763(0, 47, 1);
	unk_0x7653D561C9574763(0, 36, 1);
	if (bParam0)
	{
		unk_0x7653D561C9574763(0, 37, 1);
	}
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		if (bParam1)
		{
			unk_0xCAC4D1050F2E6899(unk_0xE2D3D51028F0428A(), 2f);
		}
		else
		{
			unk_0xCAC4D1050F2E6899(unk_0xE2D3D51028F0428A(), 1f);
		}
		unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 102, 1);
	}
	if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
	{
		unk_0xBA5D7196EACB9282(unk_0x9E2D6C50374FCFA9());
	}
}

void func_51(bool bParam0)
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0xBED097BB6359F09C(unk_0xE2D3D51028F0428A(), 1, 1, 1, 1, 1, 0, 0, 0);
		unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 157, 0);
		unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 1);
		unk_0x42A972967C73AB48(unk_0xE2D3D51028F0428A(), 0, 0);
		if (bParam0)
		{
			unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 0);
		}
		unk_0x706235CBF64DE7FA(unk_0xE2D3D51028F0428A(), 0);
	}
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		unk_0xBA5D7196EACB9282(unk_0x9E2D6C50374FCFA9());
	}
	unk_0xC0F70A3CDEC87ECE(0);
	unk_0x8576657A629C4B0A(0f);
}

int func_52(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x7653D561C9574763(0, 71, 1);
	unk_0x7653D561C9574763(0, 72, 1);
	unk_0x7653D561C9574763(0, 76, 1);
	unk_0x7653D561C9574763(0, 73, 1);
	unk_0x7653D561C9574763(0, 59, 1);
	unk_0x7653D561C9574763(0, 60, 1);
	if (bParam5)
	{
		unk_0x7653D561C9574763(0, 75, 1);
	}
	unk_0x7653D561C9574763(0, 80, 1);
	if (!bParam6)
	{
		unk_0x7653D561C9574763(0, 69, 1);
		unk_0x7653D561C9574763(0, 70, 1);
		unk_0x7653D561C9574763(0, 68, 1);
	}
	unk_0x7653D561C9574763(0, 74, 1);
	unk_0x7653D561C9574763(0, 86, 1);
	unk_0x7653D561C9574763(0, 81, 1);
	unk_0x7653D561C9574763(0, 82, 1);
	unk_0x7653D561C9574763(0, 138, 1);
	unk_0x7653D561C9574763(0, 136, 1);
	unk_0x7653D561C9574763(0, 114, 1);
	unk_0x7653D561C9574763(0, 107, 1);
	unk_0x7653D561C9574763(0, 110, 1);
	unk_0x7653D561C9574763(0, 89, 1);
	unk_0x7653D561C9574763(0, 89, 1);
	unk_0x7653D561C9574763(0, 87, 1);
	unk_0x7653D561C9574763(0, 88, 1);
	unk_0x7653D561C9574763(0, 113, 1);
	unk_0x7653D561C9574763(0, 115, 1);
	unk_0x7653D561C9574763(0, 116, 1);
	unk_0x7653D561C9574763(0, 117, 1);
	unk_0x7653D561C9574763(0, 118, 1);
	unk_0x7653D561C9574763(0, 119, 1);
	unk_0x7653D561C9574763(0, 352, 1);
	unk_0x7653D561C9574763(0, 131, 1);
	unk_0x7653D561C9574763(0, 132, 1);
	unk_0x7653D561C9574763(0, 123, 1);
	unk_0x7653D561C9574763(0, 126, 1);
	unk_0x7653D561C9574763(0, 129, 1);
	unk_0x7653D561C9574763(0, 130, 1);
	unk_0x7653D561C9574763(0, 133, 1);
	unk_0x7653D561C9574763(0, 134, 1);
	unk_0x5951E2E1DB653567();
	func_53(iParam0);
	if ((unk_0x320D1840B6DAA1CC() - Global_29) > 500)
	{
		unk_0xD28E3800883DED83(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x320D1840B6DAA1CC();
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x48053974ED6F63CE(unk_0x207D53F9E0190691(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_53(int iParam0)
{
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x4545AF649BD80692(iParam0))
		{
			if (unk_0xD377CBCD474FDCFA(iParam0))
			{
				unk_0x416220C999F84215(iParam0, 0);
			}
		}
	}
}

int func_54()
{
	int iVar0;
	
	if (func_99())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xE5965CDF24F93A9F(Local_579[iVar0 /*8*/]) && unk_0x55A0C756C4A8220C(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0x671CB92F637FDB33(iLocal_2600, Local_579[iVar0 /*8*/]))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_55(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)
{
	return func_56(uParam0, Param1, Param4, func_98(), func_98(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_97(), func_97(), func_97(), func_97(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

int func_56(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	uParam0->f_17[0] = iParam15;
	uParam0->f_17[1] = iParam16;
	uParam0->f_17[2] = iParam17;
	uParam0->f_16 = iParam15;
	func_96(uParam0);
	func_95(uParam0);
	func_94();
	if (func_78(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_77(sParam20);
		func_77(sParam21);
		func_77(sParam22);
		func_77(sParam23);
		if (unk_0xE9E8955A780DDA01())
		{
			bVar1 = false;
			if (unk_0x55A0C756C4A8220C(iParam18, 0))
			{
				if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iParam18, 0))
				{
					unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 3);
					if (!BitTest(uParam0->f_13, 9))
					{
						unk_0xB0550BC91B0159D6(&(uParam0->f_13), 4);
					}
					if (BitTest(uParam0->f_13, 23))
					{
						unk_0xB0550BC91B0159D6(&(uParam0->f_13), 23);
					}
					unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_75(uParam0, iParam29))
				{
					unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 3);
					if (!BitTest(uParam0->f_13, 9))
					{
						unk_0xB0550BC91B0159D6(&(uParam0->f_13), 4);
					}
					unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_77(sParam24);
				func_77(sParam27);
				func_77("MORE_SEATS");
				if (bParam26 && unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
				{
					if (unk_0x12DD4A0B247D9B4D(uParam0->f_5))
					{
						unk_0xFFD8EB5462B07B59(&(uParam0->f_5));
						func_77(sParam19);
					}
					if (unk_0x12DD4A0B247D9B4D(*uParam0))
					{
						unk_0xFFD8EB5462B07B59(uParam0);
					}
					if ((!func_72(uParam0, 1) && !func_71(uParam0)) && !BitTest(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_70(uParam0, "LOSE_WANTED", 0);
							if (!unk_0xF68107C40359970C(uParam0->f_17[0]))
							{
								func_68(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xCED9E32812D6C7C7(&(uParam0->f_13), false);
						unk_0xB0550BC91B0159D6(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (BitTest(uParam0->f_13, 0))
					{
						func_77("LOSE_WANTED");
						unk_0xB0550BC91B0159D6(&(uParam0->f_13), 0);
						unk_0xCED9E32812D6C7C7(&(uParam0->f_13), true);
					}
					if (BitTest(uParam0->f_13, 1))
					{
						if (!func_72(uParam0, 1))
						{
							if (!unk_0xF68107C40359970C(uParam0->f_17[0]))
							{
								func_68(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xB0550BC91B0159D6(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0x12DD4A0B247D9B4D(uParam0->f_5))
					{
						if (unk_0x12DD4A0B247D9B4D(*uParam0))
						{
							unk_0xFFD8EB5462B07B59(uParam0);
						}
						uParam0->f_5 = func_67(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0x1A5B5BA56167D412(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_66(uParam0->f_5, uParam0);
						}
					}
					else if (!func_65(Var3, unk_0x1A3931A61B3223A2(uParam0->f_5), 0.1f, 0))
					{
						unk_0xFB7ACC9D9D6401A8(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_66(uParam0->f_5, uParam0);
						}
					}
					if (!func_72(uParam0, 2))
					{
						if (!BitTest(uParam0->f_13, 2))
						{
							func_70(uParam0, sParam19, 0);
							unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (BitTest(uParam0->f_13, 13))
						{
							iParam13 = 0;
						}
					}
					bVar1 = false;
					iVar6 = 0;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						iVar6 = 1;
					}
					if (iParam14 == 2 || iParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5)
					{
						iVar7 = 2;
					}
					if (bParam28)
					{
						unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Param7, Param10, fParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0xF68107C40359970C(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
									if (!unk_0xF6F5D18EF8EAB859(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0xF6F5D18EF8EAB859(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x2F52E009BBC0AFCE(uParam0->f_17[iVar2], func_14()) || !func_63(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_60(uParam0))
							{
								func_77(sParam19);
								func_77(sParam24);
								func_77(sParam20);
								func_77(sParam21);
								func_77(sParam22);
								func_77(sParam23);
								func_77("LOSE_WANTED");
								func_77("MORE_SEATS");
								func_77(sParam27);
								func_13(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0xE5965CDF24F93A9F(iParam18))
			{
				if ((bParam26 && unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0)) && (!BitTest(uParam0->f_13, 9) && !BitTest(uParam0->f_13, 22)))
				{
					func_77(sParam24);
					func_77(sParam27);
					if (unk_0x12DD4A0B247D9B4D(uParam0->f_5) || unk_0x12DD4A0B247D9B4D(*uParam0))
					{
						unk_0xFFD8EB5462B07B59(&(uParam0->f_5));
						unk_0xFFD8EB5462B07B59(uParam0);
						func_77(sParam19);
					}
					if ((!func_72(uParam0, 1) && !func_71(uParam0)) && !BitTest(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_70(uParam0, "LOSE_WANTED", 0);
							if (!unk_0xF68107C40359970C(uParam0->f_17[0]))
							{
								func_68(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xCED9E32812D6C7C7(&(uParam0->f_13), false);
						unk_0xB0550BC91B0159D6(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (BitTest(uParam0->f_13, 0))
					{
						func_77("LOSE_WANTED");
						unk_0xB0550BC91B0159D6(&(uParam0->f_13), 0);
						unk_0xCED9E32812D6C7C7(&(uParam0->f_13), true);
					}
					if (BitTest(uParam0->f_13, 1))
					{
						if (!func_72(uParam0, 1))
						{
							if (!unk_0xF68107C40359970C(uParam0->f_17[0]))
							{
								func_68(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xB0550BC91B0159D6(&(uParam0->f_13), 1);
						}
					}
					if (unk_0x55A0C756C4A8220C(iParam18, 0))
					{
						if (!unk_0x12DD4A0B247D9B4D(*uParam0))
						{
							if (unk_0x12DD4A0B247D9B4D(uParam0->f_5))
							{
								unk_0xFFD8EB5462B07B59(&(uParam0->f_5));
								func_77(sParam19);
							}
							*uParam0 = func_57(iParam18, 0, 0);
							unk_0x94C2F928B167AA54(*uParam0, 2);
							if (!BitTest(uParam0->f_13, 4))
							{
								func_66(*uParam0, uParam0);
							}
						}
						if (!func_72(uParam0, 2))
						{
							if (!BitTest(uParam0->f_13, 3))
							{
								func_70(uParam0, sParam24, 0);
								unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 3);
								unk_0xB0550BC91B0159D6(&(uParam0->f_13), 4);
							}
							else if (BitTest(uParam0->f_13, 9))
							{
								if (!unk_0xE8F6C1F695B25B91(sParam27))
								{
									if (!BitTest(uParam0->f_13, 4))
									{
										func_70(uParam0, sParam27, 0);
										unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 4);
									}
								}
								else if (!BitTest(uParam0->f_13, 4))
								{
									func_70(uParam0, sParam24, 0);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 4);
								}
								if (!BitTest(uParam0->f_13, 23))
								{
									if (!unk_0xF68107C40359970C(uParam0->f_17[0]))
									{
										func_68(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x12DD4A0B247D9B4D(uParam0->f_5))
				{
					unk_0xFFD8EB5462B07B59(&(uParam0->f_5));
					func_77(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_72(uParam0, 2))
						{
							if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
							{
								if (!BitTest(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0xF68107C40359970C(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0x5853B15F78E1A265(0, iVar8);
									if (!unk_0xF68107C40359970C(uParam0->f_17[iVar9]))
									{
										func_68(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_70(uParam0, "MORE_SEATS", 0);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 13);
								}
							}
							else if (!BitTest(uParam0->f_13, 3))
							{
								func_70(uParam0, sParam24, 0);
								unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 3);
								unk_0xB0550BC91B0159D6(&(uParam0->f_13), 4);
							}
							else if (!BitTest(uParam0->f_13, 4))
							{
								if (BitTest(uParam0->f_13, 9))
								{
									func_70(uParam0, sParam27, 0);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_72(uParam0, 2))
					{
						if (!BitTest(uParam0->f_13, 3))
						{
							func_70(uParam0, sParam24, 0);
							unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 3);
							unk_0xB0550BC91B0159D6(&(uParam0->f_13), 4);
						}
						else if (BitTest(uParam0->f_13, 9))
						{
							if (!unk_0xE8F6C1F695B25B91(sParam27))
							{
								if (!BitTest(uParam0->f_13, 4))
								{
									func_70(uParam0, sParam27, 0);
									unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 4);
								}
							}
							else if (!BitTest(uParam0->f_13, 4))
							{
								func_70(uParam0, sParam24, 0);
								unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (BitTest(uParam0->f_13, 0))
		{
			unk_0xB0550BC91B0159D6(&(uParam0->f_13), 0);
		}
		func_77(sParam19);
		func_77(sParam24);
		func_77(sParam27);
		func_77(sParam24);
		func_77("LOSE_WANTED");
		if (unk_0x12DD4A0B247D9B4D(uParam0->f_5))
		{
			unk_0xFFD8EB5462B07B59(&(uParam0->f_5));
		}
		if (unk_0x12DD4A0B247D9B4D(*uParam0))
		{
			unk_0xFFD8EB5462B07B59(uParam0);
		}
	}
	unk_0xB0550BC91B0159D6(&(uParam0->f_13), 11);
	unk_0xB0550BC91B0159D6(&(uParam0->f_13), 12);
	return 0;
}

int func_57(int iParam0, bool bParam1, bool bParam2)
{
	return func_58(iParam0, !bParam1, bParam2);
}

int func_58(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xEFD6451BF0F3352F(iParam0);
	if (unk_0x04D9F44466CBF3CA(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_59(unk_0x9315DBF7D972F07A(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD809204F14EF9B68(uVar0, bParam1);
		}
		else
		{
			unk_0xA582EE8380437B1B(uVar0, 2);
		}
	}
	else if (unk_0x9044EDB8A7BF67B4(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_59(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
		unk_0xD809204F14EF9B68(uVar0, bParam1);
	}
	else if (unk_0x0086095F1731DE17(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_59(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_59(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_60(var uParam0)
{
	if (BitTest(uParam0->f_13, 12))
	{
		if (func_62(unk_0xE2D3D51028F0428A()))
		{
			if (func_61(1, 0, 1) || BitTest(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_61(1, 0, 1) || BitTest(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_61(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x410D46B709324B0F())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
		{
			return 0;
		}
		iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (bParam0)
		{
			if (unk_0x55B23FE400FCEA6B(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
			{
				if (unk_0xAB793EA186AB8DAA(iVar0, -1, 0) != unk_0xE2D3D51028F0428A())
				{
					return 0;
				}
			}
		}
		if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
		{
			if (unk_0x90544F2E01A178CD(iVar0) < 0.95f || unk_0x90544F2E01A178CD(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x682283641E48E60D(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (!unk_0x4965181A7DE78866(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	return 1;
}

int func_62(int iParam0)
{
	float fVar0;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		fVar0 = unk_0x207D53F9E0190691(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0, int iParam1)
{
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()) && iParam1)
		{
			if (func_64(unk_0xE2D3D51028F0428A(), iParam0))
			{
				unk_0x05FF7BCAAEF919B8(func_14(), 50f);
				return 1;
			}
		}
		else if (unk_0x2F52E009BBC0AFCE(iParam0, func_14()))
		{
			unk_0x05FF7BCAAEF919B8(func_14(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (unk_0x174B84F6B78D6CA7(iParam0))
		{
			iVar0 = unk_0xB3FF0049C1FD38EC(iParam0, 0);
			if (unk_0x55A0C756C4A8220C(iVar0, 0))
			{
				if (!unk_0xF68107C40359970C(iParam1))
				{
					if (unk_0x87B449F4C26E764A(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_65(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x48053974ED6F63CE((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x48053974ED6F63CE((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x48053974ED6F63CE((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_66(var uParam0, var uParam1)
{
	if (unk_0x12DD4A0B247D9B4D(uParam0))
	{
		if (unk_0x12DD4A0B247D9B4D(uParam1->f_6))
		{
			unk_0xAAD76B24A5282FDD(uParam1->f_6, 0);
		}
		unk_0xC5239B40CAD5176C(0);
		unk_0xB2C30AEAD64A860F();
		uParam1->f_6 = uParam0;
		unk_0xAAD76B24A5282FDD(uParam0, 1);
	}
}

var func_67(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xC5B823372B67998A(Param0);
	unk_0x293A9399E902A33B(uVar0, func_59(unk_0x9315DBF7D972F07A(), 1f, 1f));
	unk_0xAAD76B24A5282FDD(uVar0, iParam3);
	return uVar0;
}

void func_68(var uParam0, char* sParam1, int iParam2)
{
	unk_0xB0C559BD7D5D270D(uParam0, sParam1, func_69(iParam2), 1);
}

int func_69(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_70(var uParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0xE8F6C1F695B25B91(sParam1))
		{
			if (!unk_0x3C57C2F07FEE34D2(sParam1, ""))
			{
				func_110(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x320D1840B6DAA1CC();
}

int func_71(var uParam0)
{
	if (!unk_0xF68107C40359970C(uParam0->f_16))
	{
		if (unk_0xB6F46ABD140050F1(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_72(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0x0038CA9239065BCA())
	{
		if (unk_0x559C03F53E6937FC())
		{
			return 1;
		}
		if (func_74(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x0038CA9239065BCA())
	{
		if (func_49() && !func_73())
		{
			return 1;
		}
	}
	return 0;
}

int func_73()
{
	if (Global_22616 == 1)
	{
		return 1;
	}
	return 0;
}

int func_74(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x320D1840B6DAA1CC();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_75(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (func_76(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_76(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0xE5965CDF24F93A9F(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0xADD893BD545BE5FC(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0xE632C45F7E4013B9(iParam0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0xE632C45F7E4013B9(iParam0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_77(char* sParam0)
{
	if (!unk_0xE8F6C1F695B25B91(sParam0))
	{
		unk_0xE2EC74D02A707B37(sParam0);
	}
}

int func_78(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	var uVar15[3];
	var uVar19[3];
	bool bVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	struct<3> Var28;
	int iVar31;
	int iVar32;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar15[0] = uParam4;
	uVar15[1] = uParam5;
	uVar15[2] = uParam6;
	uVar19[0] = uParam13;
	uVar19[1] = uParam14;
	uVar19[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xF68107C40359970C(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
		{
			if (!BitTest(uParam0->f_13, 29) && !BitTest(uParam0->f_13, 28))
			{
				if (!unk_0xF68107C40359970C(uParam0->f_17[iVar0]))
				{
					unk_0xA091C233F9D0AB04(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!BitTest(uParam0->f_13, 29) && BitTest(uParam0->f_13, 28))
		{
			if (!unk_0xF68107C40359970C(uParam0->f_17[iVar0]))
			{
				unk_0xA091C233F9D0AB04(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0xB0550BC91B0159D6(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (BitTest(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0xE5965CDF24F93A9F(uParam0->f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			iVar24 = unk_0xFE15FEB341652241(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 50f, 0, iVar25);
			if (unk_0x55A0C756C4A8220C(iVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0x55A0C756C4A8220C(uParam0->f_21, 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), unk_0x6B62510F212526DC(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
				{
					if (!unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0) || !bParam17)
					{
						if (func_76(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0xF68107C40359970C(uParam0->f_17[iVar0]))
								{
									unk_0xCAC4D1050F2E6899(uParam0->f_17[iVar0], 1f);
									if (unk_0x2F52E009BBC0AFCE(uParam0->f_17[iVar0], func_14()))
									{
										unk_0x6221A52631154EF7(uParam0->f_17[iVar0]);
									}
									if (unk_0x174CED88B97C78D9(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle")) == 7 && !func_93(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x32DCDA1B2F8A0694(uParam0->f_17[iVar0]) && !unk_0x03454821A9ECF4AA(uParam0->f_17[iVar0]))
										{
											unk_0x50274A7EACA3133A(uParam0->f_17[iVar0], 1);
											unk_0xB486640392EC50BB(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0x950D2D7EA1BFF54C(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar23 = true;
						}
					}
					else
					{
						bVar23 = true;
					}
				}
				else
				{
					bVar23 = true;
				}
			}
			else
			{
				bVar23 = true;
			}
		}
		else
		{
			bVar23 = true;
		}
		if (bVar23)
		{
			unk_0xB0550BC91B0159D6(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0xF68107C40359970C(uParam0->f_17[iVar0]))
				{
					if (!unk_0xCEDE6233B8F49499(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0x03A927199A2DFE46(uParam0->f_17[iVar0]);
					}
					if (!unk_0x2F52E009BBC0AFCE(uParam0->f_17[iVar0], func_14()))
					{
						if (func_91(uParam0, uParam0->f_17[iVar0], uParam8, 1))
						{
							unk_0xF23E6F5690771F71(uParam0->f_17[iVar0], func_14());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!BitTest(uParam0->f_13, 26))
	{
		if ((!func_90(uParam0) && unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A())) && !unk_0xE5965CDF24F93A9F(iParam10))
		{
			iVar13 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (unk_0x55A0C756C4A8220C(iVar13, 0))
			{
				if (!BitTest(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_72(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0xF68107C40359970C(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0x5853B15F78E1A265(0, iVar26);
						if (!unk_0xF68107C40359970C(uParam0->f_17[iVar27]))
						{
							func_68(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_70(uParam0, "MORE_SEATS", 0);
						unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0xB0550BC91B0159D6(&(uParam0->f_13), 13);
			func_77("MORE_SEATS");
		}
		if (!unk_0xE5965CDF24F93A9F(iParam10))
		{
			if ((!unk_0xF68107C40359970C(uParam0->f_17[0]) || !unk_0xF68107C40359970C(uParam0->f_17[1])) || !unk_0xF68107C40359970C(uParam0->f_17[2]))
			{
				if (!BitTest(uParam0->f_13, 31))
				{
					if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()) && !func_72(uParam0, 2))
					{
						iVar13 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
						if (func_89(iVar13, uParam0))
						{
							func_70(uParam0, "CMN_VEHSUIT", 0);
							unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
				{
					unk_0xB0550BC91B0159D6(&(uParam0->f_13), 31);
					func_77("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0x55A0C756C4A8220C(iParam10, 0))
		{
			if (unk_0x87B449F4C26E764A(unk_0xE2D3D51028F0428A(), iParam10))
			{
				if (unk_0xF09A4F413B0D30EB(0, 75))
				{
					unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 21);
				}
			}
			else if (BitTest(uParam0->f_13, 21))
			{
				unk_0xB0550BC91B0159D6(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xE5965CDF24F93A9F(uParam0->f_17[iVar0]))
			{
				if (!unk_0xF68107C40359970C(uParam0->f_17[iVar0]))
				{
					if (!unk_0x2F52E009BBC0AFCE(uParam0->f_17[iVar0], func_14()))
					{
						unk_0x96C405257A1BD81B(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x96C405257A1BD81B(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
					{
						iVar13 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
						if (unk_0x55A0C756C4A8220C(iVar13, 0))
						{
							if (unk_0x2F52E009BBC0AFCE(uParam0->f_17[iVar0], func_14()))
							{
								if (!func_90(uParam0) && unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
								{
									if (!func_88(uParam0->f_17[iVar0]))
									{
										unk_0x6221A52631154EF7(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0x55B23FE400FCEA6B(iVar13, 0))
						{
							if (unk_0x87B449F4C26E764A(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0xD8F9DF94CD871327(iVar13) && !unk_0x78006D212FD7243E(iVar13))
								{
									Var28 = { unk_0x6B62510F212526DC(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0x02F1CAAC7CB77E47(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0x2F52E009BBC0AFCE(uParam0->f_17[iVar0], func_14()))
					{
						if (unk_0x174B84F6B78D6CA7(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0xB3FF0049C1FD38EC(uParam0->f_17[iVar0], 0);
							if (!unk_0x55B23FE400FCEA6B(iVar13, 0))
							{
								if (unk_0x55A0C756C4A8220C(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0x87B449F4C26E764A(unk_0xE2D3D51028F0428A(), iVar13))
										{
											if (unk_0x207D53F9E0190691(iVar13) > 5f)
											{
												unk_0x02F1CAAC7CB77E47(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x02F1CAAC7CB77E47(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
									{
										iVar31 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
									}
									if (unk_0x55A0C756C4A8220C(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0x207D53F9E0190691(iVar13) > 5f)
											{
												unk_0x02F1CAAC7CB77E47(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x02F1CAAC7CB77E47(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x2F52E009BBC0AFCE(uParam0->f_17[iVar0], func_14()))
					{
						iVar32 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
						if (unk_0xE5965CDF24F93A9F(iVar32))
						{
							if (func_76(iVar32, uParam0, 0))
							{
								if (func_87(iVar0, uParam0) || !BitTest(uParam0->f_13, 27))
								{
									unk_0x950D2D7EA1BFF54C(uParam0->f_17[iVar0], iVar0);
									func_15(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_87(iVar0, uParam0))
							{
								if (unk_0x15CAA6D7B11F1A7C(iVar32) == joaat("sentinel2"))
								{
									unk_0x950D2D7EA1BFF54C(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x950D2D7EA1BFF54C(uParam0->f_17[iVar0], 2);
								}
								func_86(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x2F52E009BBC0AFCE(uParam0->f_17[iVar0], func_14()) && !func_85(uParam0->f_17[iVar0], iParam10)) && !func_84(uParam0->f_17[iVar0], iParam10))
					{
						if (func_91(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
						{
							if (!unk_0x2F52E009BBC0AFCE(uParam0->f_17[iVar0], func_14()))
							{
								if (((!unk_0x32DCDA1B2F8A0694(uParam0->f_17[iVar0]) && !unk_0x03454821A9ECF4AA(uParam0->f_17[iVar0])) && !unk_0x679B82F98EF660A7(uParam0->f_17[iVar0])) && !unk_0xCEDE6233B8F49499(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0x174CED88B97C78D9(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
									if (iVar14 == 7)
									{
										unk_0x03A927199A2DFE46(uParam0->f_17[iVar0]);
									}
									unk_0xF23E6F5690771F71(uParam0->f_17[iVar0], func_14());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0x12DD4A0B247D9B4D(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x320D1840B6DAA1CC();
								uParam0->f_1[iVar0] = func_57(uParam0->f_17[iVar0], 0, 0);
								unk_0x94C2F928B167AA54(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_66(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0x12DD4A0B247D9B4D(uParam0->f_1[iVar0]))
					{
						if (((func_63(uParam0->f_17[iVar0], 1) || func_85(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0x55A0C756C4A8220C(iParam10, 0) && !unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iParam10, 0)))
						{
							if (unk_0x12DD4A0B247D9B4D(uParam0->f_1[iVar0]))
							{
								unk_0xFFD8EB5462B07B59(&(uParam0->f_1[iVar0]));
								func_77(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_66(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0x55A0C756C4A8220C(iParam10, 0))
					{
						if (!unk_0x87B449F4C26E764A(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x77A43AFA9AAEC041(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !BitTest(uParam0->f_13, 11)) && !((bParam17 && unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0)) && !unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iParam10, 0)))
							{
								if (unk_0x174B84F6B78D6CA7(uParam0->f_17[iVar0]))
								{
									if (!unk_0xF6F5D18EF8EAB859(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_63(uParam0->f_17[iVar0], 1))
										{
											if (func_62(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0x174CED88B97C78D9(uParam0->f_17[iVar0], joaat("script_task_leave_vehicle"));
												if (iVar14 == 7)
												{
													unk_0xAB7639D658BBCCEE(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x2F52E009BBC0AFCE(uParam0->f_17[iVar0], func_14()))
									{
										if ((((!unk_0x679B82F98EF660A7(uParam0->f_17[iVar0]) && !unk_0x32DCDA1B2F8A0694(uParam0->f_17[iVar0])) && !unk_0x03454821A9ECF4AA(uParam0->f_17[iVar0])) && !unk_0xCEDE6233B8F49499(uParam0->f_17[iVar0])) && !unk_0xEF9410C312F2B117(iParam10))
										{
											unk_0x6221A52631154EF7(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0x174CED88B97C78D9(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
									if (iVar14 == 7 && !func_93(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0x679B82F98EF660A7(uParam0->f_17[iVar0]) && !unk_0x679B82F98EF660A7(unk_0xE2D3D51028F0428A())) && !func_83(uParam0->f_17[iVar0], 2f)) && !unk_0x32DCDA1B2F8A0694(uParam0->f_17[iVar0])) && !unk_0x03454821A9ECF4AA(uParam0->f_17[iVar0])) && !unk_0xEF9410C312F2B117(iParam10))
										{
											unk_0x50274A7EACA3133A(uParam0->f_17[iVar0], 1);
											if (BitTest(uParam0->f_13, 10))
											{
												unk_0xCAC4D1050F2E6899(uParam0->f_17[iVar0], 1f);
											}
											unk_0xB486640392EC50BB(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0x5D1D64E01B76705C(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_57(uParam0->f_17[iVar0], 0, 0);
										unk_0x94C2F928B167AA54(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x2F52E009BBC0AFCE(uParam0->f_17[iVar0], func_14()))
							{
								if (func_91(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
								{
									if (!unk_0x32DCDA1B2F8A0694(uParam0->f_17[iVar0]) && !unk_0x03454821A9ECF4AA(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0x174CED88B97C78D9(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
										if (iVar14 == 7)
										{
											unk_0x03A927199A2DFE46(uParam0->f_17[iVar0]);
										}
										unk_0x50274A7EACA3133A(uParam0->f_17[iVar0], 0);
										unk_0xF23E6F5690771F71(uParam0->f_17[iVar0], func_14());
									}
								}
							}
						}
						else if (unk_0x87B449F4C26E764A(unk_0xE2D3D51028F0428A(), iParam10))
						{
							if (!unk_0x2F52E009BBC0AFCE(uParam0->f_17[iVar0], func_14()))
							{
								if (!BitTest(uParam0->f_13, 21))
								{
									unk_0xF23E6F5690771F71(uParam0->f_17[iVar0], func_14());
								}
							}
							else if (BitTest(uParam0->f_13, 21))
							{
								unk_0x6221A52631154EF7(uParam0->f_17[iVar0]);
								unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x2F52E009BBC0AFCE(uParam0->f_17[iVar0], func_14()) && !unk_0xEF9410C312F2B117(iParam10))
						{
							unk_0x6221A52631154EF7(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0x12DD4A0B247D9B4D(uParam0->f_1[iVar0]))
				{
					unk_0xFFD8EB5462B07B59(&(uParam0->f_1[iVar0]));
					func_77(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x12DD4A0B247D9B4D(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_72(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0xF68107C40359970C(uParam0->f_17[iVar0]))
						{
							if (func_88(uParam0->f_17[iVar0]) || unk_0x77A43AFA9AAEC041(uParam0->f_17[iVar0], unk_0xE2D3D51028F0428A(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0xF68107C40359970C(uParam0->f_17[iVar0]))
					{
						if (!unk_0x77A43AFA9AAEC041(uParam0->f_17[iVar0], unk_0xE2D3D51028F0428A(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_88(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x320D1840B6DAA1CC();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!BitTest(uParam0->f_13, 5))
							{
								func_70(uParam0, sParam7, 0);
								unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_82(iVar0, uParam0))
									{
										if (!unk_0xE8F6C1F695B25B91(uVar19[iVar0]))
										{
											if (!unk_0x3C57C2F07FEE34D2(uVar19[iVar0], ""))
											{
												func_80(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_79(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_82(iVar0, uParam0))
										{
											func_70(uParam0, uVar15[iVar0], 0);
											func_79(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		unk_0xB0550BC91B0159D6(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0x12DD4A0B247D9B4D(uParam0->f_1[iVar0]))
				{
					unk_0xFFD8EB5462B07B59(&(uParam0->f_1[iVar0]));
					func_77(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_77("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_79(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xCED9E32812D6C7C7(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xCED9E32812D6C7C7(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xCED9E32812D6C7C7(&(uParam1->f_13), 16);
			break;
	}
}

void func_80(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0xE8F6C1F695B25B91(uParam1))
		{
			if (!unk_0x3C57C2F07FEE34D2(sParam1, ""))
			{
				func_81(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x320D1840B6DAA1CC();
}

void func_81(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x38BD019DECCC5482(uParam0);
	unk_0x26C23BE14F66F202(uParam1);
	unk_0x23D3EE043DE19C4B(iParam2, 1);
}

int func_82(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 14);
		
		case 1:
			return BitTest(uParam1->f_13, 15);
		
		case 2:
			return BitTest(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_83(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(iParam0, 0))
	{
		iVar0 = unk_0xB3FF0049C1FD38EC(iParam0, 0);
		if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
		{
			if (unk_0x207D53F9E0190691(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_84(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (!unk_0x2F52E009BBC0AFCE(iParam0, func_14()))
		{
			iVar0 = unk_0x8DB5C2D06228DF32(iParam0);
			if (unk_0x55A0C756C4A8220C(iParam1, 0))
			{
				if (unk_0x77A43AFA9AAEC041(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_85(int iParam0, int iParam1)
{
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (unk_0xE5965CDF24F93A9F(iParam1))
		{
			if (unk_0x55A0C756C4A8220C(iParam1, 0))
			{
				if (unk_0x87B449F4C26E764A(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_86(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xCED9E32812D6C7C7(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xCED9E32812D6C7C7(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xCED9E32812D6C7C7(&(uParam1->f_13), 19);
			break;
	}
}

int func_87(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 17);
		
		case 1:
			return BitTest(uParam1->f_13, 18);
		
		case 2:
			return BitTest(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_88(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		iVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
		if (unk_0x55A0C756C4A8220C(iVar0, 0))
		{
			if (!unk_0xF68107C40359970C(iParam0))
			{
				iVar1 = unk_0xD9BD5965B9552645(iParam0);
				if (unk_0x55A0C756C4A8220C(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x77A43AFA9AAEC041(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_89(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if (unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("bus") || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0xF68107C40359970C(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0xAB793EA186AB8DAA(iParam0, 0, 0);
			if (!unk_0xF68107C40359970C(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0xAB793EA186AB8DAA(iParam0, 1, 0);
			if (!unk_0xF68107C40359970C(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0xAB793EA186AB8DAA(iParam0, 2, 0);
			if (!unk_0xF68107C40359970C(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_90(var uParam0)
{
	int iVar0;
	
	if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
	{
		iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (func_76(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_91(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xF68107C40359970C(iParam1))
	{
		if (unk_0x174B84F6B78D6CA7(iParam1))
		{
			iVar0 = unk_0xB3FF0049C1FD38EC(iParam1, 0);
			if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
			{
				if (unk_0x55A0C756C4A8220C(iVar0, 0))
				{
					if (unk_0x87B449F4C26E764A(unk_0xE2D3D51028F0428A(), iVar0))
					{
						if (func_90(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iParam1, uParam2, uParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x77A43AFA9AAEC041(unk_0xE2D3D51028F0428A(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xD9BD5965B9552645(unk_0xE2D3D51028F0428A());
				if (unk_0xE5965CDF24F93A9F(iVar0))
				{
					if (func_76(iVar0, uParam0, 0))
					{
						if (unk_0x55A0C756C4A8220C(iVar0, 0))
						{
							if (func_92(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_92(int iParam0)
{
	float fVar0;
	
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		fVar0 = unk_0x207D53F9E0190691(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_93(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (unk_0x55A0C756C4A8220C(iParam1, 0))
		{
			iVar0 = unk_0xD9BD5965B9552645(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_94()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
	{
		iVar0 = unk_0x8DB5C2D06228DF32(unk_0xE2D3D51028F0428A());
		if (unk_0x55A0C756C4A8220C(iVar0, 0))
		{
			iVar1 = unk_0xAB793EA186AB8DAA(iVar0, 0, 0);
			if (!unk_0xF68107C40359970C(iVar1))
			{
				if (iVar1 != unk_0xE2D3D51028F0428A())
				{
					if (unk_0xA6A089369417736E(iVar1))
					{
						if (!unk_0x60B3C5BE23BF3368(iVar1, unk_0xE2D3D51028F0428A()))
						{
							unk_0xF30F15F203736DE4(iVar1, unk_0xE2D3D51028F0428A(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_95(var uParam0)
{
	int iVar0;
	
	if (!BitTest(uParam0->f_13, 25))
	{
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xE5965CDF24F93A9F(uParam0->f_17[iVar0]))
			{
				if (!unk_0xF68107C40359970C(uParam0->f_17[iVar0]))
				{
					unk_0xD6A76BAB45A4B460(uParam0->f_17[iVar0], 32, 0);
					unk_0xD6A76BAB45A4B460(uParam0->f_17[iVar0], 305, 1);
					unk_0xD6A76BAB45A4B460(uParam0->f_17[iVar0], 268, 1);
					unk_0x5D1D64E01B76705C(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0xCED9E32812D6C7C7(&(uParam0->f_13), 25);
	}
}

void func_96(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xE5965CDF24F93A9F(uParam0->f_17[iVar0]))
		{
			if (!unk_0xF68107C40359970C(uParam0->f_17[iVar0]))
			{
				if (unk_0x174B84F6B78D6CA7(uParam0->f_17[iVar0]))
				{
					unk_0x2378080C93821600(uParam0->f_17[iVar0], 0);
					unk_0xA3400358EEE2B4A2(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A()))
			{
				unk_0x2378080C93821600(unk_0xE2D3D51028F0428A(), 0);
				unk_0xA3400358EEE2B4A2(unk_0xE2D3D51028F0428A(), 0);
			}
		}
	}
}

var func_97()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_98()
{
	struct<3> Var0;
	
	return Var0;
}

int func_99()
{
	if (unk_0xE5965CDF24F93A9F(iLocal_2600) && unk_0x55A0C756C4A8220C(iLocal_2600, 0))
	{
		return 1;
	}
	return 0;
}

bool func_100(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, float fParam10, int iParam11, int iParam12, char* sParam13, char* sParam14, char* sParam15, bool bParam16, int iParam17, bool bParam18, int iParam19)
{
	return func_56(uParam0, Param1, func_101(), Param4, Param7, iParam11, 5, 0, 0, 0, iParam12, sParam13, func_97(), func_97(), func_97(), func_97(), sParam14, 0, bParam16, sParam15, 1, iParam17, bParam18, iParam19, func_97(), func_97(), func_97(), 1, fParam10);
}

Vector3 func_101()
{
	return 0f, 0f, 2f;
}

int func_102()
{
	int iVar0;
	
	if (func_103())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xE5965CDF24F93A9F(Local_579[iVar0 /*8*/]) && unk_0x55A0C756C4A8220C(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), Local_579[iVar0 /*8*/], 1))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_103()
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xE5965CDF24F93A9F(Local_579[iVar0 /*8*/]) && unk_0x55A0C756C4A8220C(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), Local_579[iVar0 /*8*/], 0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_104(int iParam0, int iParam1)
{
	Global_63165 = iParam0;
	Global_63166 = iParam1;
}

int func_105(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (((unk_0xE5965CDF24F93A9F(Local_579[iVar1 /*8*/]) && unk_0x55A0C756C4A8220C(Local_579[iVar1 /*8*/], 0)) && !func_109(Local_579[iVar1 /*8*/])) && (!bParam0 || func_106(Local_579[iVar1 /*8*/])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_106(int iParam0)
{
	if (unk_0x6D7EE245AD1E10B0(iParam0) == iLocal_2552)
	{
		if (func_108(unk_0xE2D3D51028F0428A(), Local_642, 1) < 500f)
		{
			return 1;
		}
	}
	else if (func_107(iParam0, unk_0xE2D3D51028F0428A(), 1) < 300f)
	{
		return 1;
	}
	return 0;
}

float func_107(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	if (!unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
		Var3 = { unk_0x6B62510F212526DC(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x6B62510F212526DC(iParam1, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Var3, iParam2);
}

float func_108(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Param1, iParam4);
}

int func_109(int iParam0)
{
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if ((unk_0xF798DCF92C74B531(iParam0, 0, 7000) || unk_0xF798DCF92C74B531(iParam0, 1, 7000)) || unk_0xF798DCF92C74B531(iParam0, 2, 7000))
		{
			return 1;
		}
	}
	return 0;
}

void func_110(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x38BD019DECCC5482(sParam0);
	unk_0x23D3EE043DE19C4B(iParam1, 1);
}

void func_111(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0xE5965CDF24F93A9F(Global_103950.f_4))
	{
		if (unk_0x55A0C756C4A8220C(Global_103950.f_4, 0))
		{
			if (func_166(24) != Global_103950.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_163(unk_0x6B62510F212526DC(Global_103950.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_112(Global_103950.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_112(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0xE5965CDF24F93A9F(Global_77137.f_484[25]) && unk_0x55A0C756C4A8220C(Global_77137.f_484[25], 0))
			{
				if (Global_77137.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0xA94E098B1788A730(iParam0) || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("bus")) || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_162(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_157(iParam0, &Var0);
		if (func_156(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x6B62510F212526DC(iParam0, 1) };
			uParam4 = unk_0x82FE2343F8BDFF0B(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x2E87280918B16506(unk_0x05CBA41180F5D521()) != joaat("vehicle_gen_controller"))
			{
				Global_78125 = unk_0x2E87280918B16506(unk_0x05CBA41180F5D521());
			}
		}
		func_149(iParam5, &Var0, Param1, uParam4, func_155(iParam0));
		func_113(iParam5, iParam0, 0);
	}
}

void func_113(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_145(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_77137.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_77137.f_555[0 /*21*/].f_4 != unk_0x15CAA6D7B11F1A7C(iParam1))
		{
			return;
		}
	}
	if (Global_78044 != -1 && Global_78044 != iParam0)
	{
		return;
	}
	if (unk_0xE5965CDF24F93A9F(iParam1))
	{
		if (unk_0x55A0C756C4A8220C(iParam1, 0))
		{
			if (!unk_0xA6A089369417736E(iParam1))
			{
				unk_0x2D58A6131679D82C(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_113386.f_32749.f_4801 = func_134();
			}
			if (iParam1 != Global_77137.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_166(iParam0);
					if ((unk_0xE5965CDF24F93A9F(iVar0) && unk_0x55A0C756C4A8220C(iVar0, 0)) && iParam1 != iVar0)
					{
						func_114(iVar0, 145);
					}
				}
				Global_78043 = iParam1;
				Global_78044 = iParam0;
				Global_78045 = iParam2;
			}
		}
	}
}

void func_114(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_115(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xAB793EA186AB8DAA(iParam0, -1, 0);
		if (!unk_0xE5965CDF24F93A9F(iVar0))
		{
			iVar0 = unk_0x48512AC2C4218836(iParam0, -1);
		}
		if (unk_0xE5965CDF24F93A9F(iVar0) && !unk_0xF68107C40359970C(iVar0))
		{
			if (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113386.f_2363.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x15CAA6D7B11F1A7C(iParam0) == Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xACC32B78196FBC2A(&(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x3C57C2F07FEE34D2(unk_0x80D16DB58890B7BC(iParam0), &(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113386.f_32749.f_5592[iVar1] = iVar2;
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
		if (unk_0x15CAA6D7B11F1A7C(iParam0) == Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xACC32B78196FBC2A(&(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x3C57C2F07FEE34D2(unk_0x80D16DB58890B7BC(iParam0), &(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113386.f_32749.f_5590 = iParam1;
	Global_78042 = iParam0;
	Global_113386.f_32749.f_5588 = 1;
	func_157(iParam0, &(Global_113386.f_32749.f_5510));
}

int func_115(int iParam0)
{
	if ((((((((((!unk_0xE5965CDF24F93A9F(iParam0) || !unk_0x55A0C756C4A8220C(iParam0, 0)) || func_132(iParam0, 0, 0)) || func_132(iParam0, 1, 0)) || func_132(iParam0, 2, 0)) || func_155(iParam0) != 145) || func_131(iParam0)) || func_130(iParam0)) || func_129(iParam0)) || func_128(iParam0)) || !func_116(unk_0x15CAA6D7B11F1A7C(iParam0)))
	{
		if (func_130(iParam0))
		{
		}
		if (func_130(iParam0))
		{
		}
		if (func_132(iParam0, 0, 0))
		{
		}
		if (func_132(iParam0, 1, 0))
		{
		}
		if (func_132(iParam0, 2, 0))
		{
		}
		if (func_155(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_116(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_117(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xD2B5B1C8FC84FE0F(iParam0) || unk_0xD6F7D32A98E07F93(iParam0)) || unk_0x4262B4DCEADC2695(iParam0)) || unk_0xF4AD75B2D964D8AB(iParam0))
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

int func_117(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x2886B1BFE0896A9A(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x9315DBF7D972F07A()) || (iParam0 == joaat("buffalo3") && !unk_0x9315DBF7D972F07A())) || (iParam0 == joaat("gauntlet2") && !unk_0x9315DBF7D972F07A())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x9315DBF7D972F07A()))
	{
		if (!func_127())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x63913871ECC3707E())
		{
			if (unk_0xCD58DE0B13D04118(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x1B5C8EE302FC0D1E(Var1.f_0))
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
		if ((((!func_126() && !func_125()) && !func_124()) && !func_123()) && !func_127())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_122() || unk_0x8FE9914D4872D601()) || func_121())
		{
		}
		else if (!func_124())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_120(iParam0))
		{
			return 0;
		}
	}
	if (!func_118(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_118(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_119())
	{
		return 1;
	}
	unk_0x5D66DA471CACD32B(&iVar0, &uVar1);
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
	if (!unk_0x5B1B2A8FE51FDB2D(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_119()
{
	if (unk_0x8FE9914D4872D601())
	{
		return unk_0xA50CED7FB6E38751();
	}
	return 0;
}

int func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2787545)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x48352343BC5A41AE();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7058 && !Global_262145.f_13394) && iVar1 < Global_262145.f_13395)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14734 && iVar1 < Global_262145.f_14746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14730 && iVar1 < Global_262145.f_14742)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14731 && iVar1 < Global_262145.f_14743)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14732 && iVar1 < Global_262145.f_14744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14733 && iVar1 < Global_262145.f_14745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14735 && iVar1 < Global_262145.f_14747)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14736 && iVar1 < Global_262145.f_14739)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14737 && iVar1 < Global_262145.f_14740)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14738 && iVar1 < Global_262145.f_14741)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17368 && iVar1 < Global_262145.f_17333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17363 && iVar1 < Global_262145.f_17328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17367 && iVar1 < Global_262145.f_17332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17366 && iVar1 < Global_262145.f_17331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17360 && iVar1 < Global_262145.f_17325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17361 && iVar1 < Global_262145.f_17326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17364 && iVar1 < Global_262145.f_17329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17365 && iVar1 < Global_262145.f_17330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17362 && iVar1 < Global_262145.f_17327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17370 && iVar1 < Global_262145.f_17335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17371 && iVar1 < Global_262145.f_17336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17359 && iVar1 < Global_262145.f_17324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17358 && iVar1 < Global_262145.f_17323)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17357 && iVar1 < Global_262145.f_17322)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17369 && iVar1 < Global_262145.f_17334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17372 && iVar1 < Global_262145.f_17337)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17373 && iVar1 < Global_262145.f_17338)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17374 && iVar1 < Global_262145.f_17339)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17375 && iVar1 < Global_262145.f_17340)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17522 && iVar1 < Global_262145.f_17544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17523 && iVar1 < Global_262145.f_17545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17524 && iVar1 < Global_262145.f_17546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17525 && iVar1 < Global_262145.f_17547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17526 && iVar1 < Global_262145.f_17548)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17527 && iVar1 < Global_262145.f_17549)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17529 && iVar1 < Global_262145.f_17550)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17530 && iVar1 < Global_262145.f_17551)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17531 && iVar1 < Global_262145.f_17552)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17532 && iVar1 < Global_262145.f_17553)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17533 && iVar1 < Global_262145.f_17554)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17534 && iVar1 < Global_262145.f_17555)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17535 && iVar1 < Global_262145.f_17556)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17541 && iVar1 < Global_262145.f_17563)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17538 && iVar1 < Global_262145.f_17559)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17539 && iVar1 < Global_262145.f_17560)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17540 && iVar1 < Global_262145.f_17561)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17528 && iVar1 < Global_262145.f_17562)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17542 && iVar1 < Global_262145.f_17564)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17536 && iVar1 < Global_262145.f_17557)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17537 && iVar1 < Global_262145.f_17558)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17543 && iVar1 < Global_262145.f_17565)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19176 && iVar1 < Global_262145.f_19273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19177 && iVar1 < Global_262145.f_19274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19178 && iVar1 < Global_262145.f_19275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19179 && iVar1 < Global_262145.f_19276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19180 && iVar1 < Global_262145.f_19277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19181 && iVar1 < Global_262145.f_19278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19182 && iVar1 < Global_262145.f_19279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19183 && iVar1 < Global_262145.f_19280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19184 && iVar1 < Global_262145.f_19281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19185 && iVar1 < Global_262145.f_19282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19186 && iVar1 < Global_262145.f_19283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19187 && iVar1 < Global_262145.f_19284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19188 && iVar1 < Global_262145.f_19285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19189 && iVar1 < Global_262145.f_19286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19190 && iVar1 < Global_262145.f_19287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19191 && iVar1 < Global_262145.f_19288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19192 && iVar1 < Global_262145.f_19289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19193 && iVar1 < Global_262145.f_19290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19194 && iVar1 < Global_262145.f_19291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19195 && iVar1 < Global_262145.f_19292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19196 && iVar1 < Global_262145.f_19293)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19197 && iVar1 < Global_262145.f_19294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19198 && iVar1 < Global_262145.f_19295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19199 && iVar1 < Global_262145.f_19296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19200 && iVar1 < Global_262145.f_19297)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20257 && iVar1 < Global_262145.f_20253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20258 && iVar1 < Global_262145.f_20254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20259 && iVar1 < Global_262145.f_20255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20260 && iVar1 < Global_262145.f_20256)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21138 && iVar1 < Global_262145.f_21146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21139 && iVar1 < Global_262145.f_21147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21140 && iVar1 < Global_262145.f_21148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21141 && iVar1 < Global_262145.f_21149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21142 && iVar1 < Global_262145.f_21150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21143 && iVar1 < Global_262145.f_21151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21921 && iVar1 < Global_262145.f_21941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21933 && iVar1 < Global_262145.f_21953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21924 && iVar1 < Global_262145.f_21944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21934 && iVar1 < Global_262145.f_21954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21922 && iVar1 < Global_262145.f_21942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21938 && iVar1 < Global_262145.f_21958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21936 && iVar1 < Global_262145.f_21956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21937 && iVar1 < Global_262145.f_21957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21932 && iVar1 < Global_262145.f_21952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21939 && iVar1 < Global_262145.f_21959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21935 && iVar1 < Global_262145.f_21955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21931 && iVar1 < Global_262145.f_21951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21923 && iVar1 < Global_262145.f_21943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21925 && iVar1 < Global_262145.f_21945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21926 && iVar1 < Global_262145.f_21946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21927 && iVar1 < Global_262145.f_21947)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21928 && iVar1 < Global_262145.f_21948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21929 && iVar1 < Global_262145.f_21949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21930 && iVar1 < Global_262145.f_21950)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22889 && iVar1 < Global_262145.f_22917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22890 && iVar1 < Global_262145.f_22918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22891 && iVar1 < Global_262145.f_22919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22892 && iVar1 < Global_262145.f_22920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22893 && iVar1 < Global_262145.f_22921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22894 && iVar1 < Global_262145.f_22922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22895 && iVar1 < Global_262145.f_22923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22896 && iVar1 < Global_262145.f_22924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22897 && iVar1 < Global_262145.f_22925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22898 && iVar1 < Global_262145.f_22926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22899 && iVar1 < Global_262145.f_22927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22900 && iVar1 < Global_262145.f_22928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22901 && iVar1 < Global_262145.f_22929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22902 && iVar1 < Global_262145.f_22930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22903 && iVar1 < Global_262145.f_22931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22904 && iVar1 < Global_262145.f_22932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22905 && iVar1 < Global_262145.f_22933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22906 && iVar1 < Global_262145.f_22934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22907 && iVar1 < Global_262145.f_22935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22908 && iVar1 < Global_262145.f_22936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22909 && iVar1 < Global_262145.f_22937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22910 && iVar1 < Global_262145.f_22938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22911 && iVar1 < Global_262145.f_22939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22912 && iVar1 < Global_262145.f_22940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22913 && iVar1 < Global_262145.f_22941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22914 && iVar1 < Global_262145.f_22942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22915 && iVar1 < Global_262145.f_22943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22916 && iVar1 < Global_262145.f_22944)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24109 && iVar1 < Global_262145.f_24125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24110 && iVar1 < Global_262145.f_24126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24114 && iVar1 < Global_262145.f_24130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24117 && iVar1 < Global_262145.f_24133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24122 && iVar1 < Global_262145.f_24138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24116 && iVar1 < Global_262145.f_24132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24108 && iVar1 < Global_262145.f_24124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24115 && iVar1 < Global_262145.f_24131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24121 && iVar1 < Global_262145.f_24137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24120 && iVar1 < Global_262145.f_24136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24111 && iVar1 < Global_262145.f_24127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24113 && iVar1 < Global_262145.f_24129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24123 && iVar1 < Global_262145.f_24139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24119 && iVar1 < Global_262145.f_24135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24112 && iVar1 < Global_262145.f_24128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24118 && iVar1 < Global_262145.f_24134)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24199 && iVar1 < Global_262145.f_24186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24200 && iVar1 < Global_262145.f_24187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24205 && iVar1 < Global_262145.f_24192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24204 && iVar1 < Global_262145.f_24191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24202 && iVar1 < Global_262145.f_24189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24208 && iVar1 < Global_262145.f_24195)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24210 && iVar1 < Global_262145.f_24197)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24211 && iVar1 < Global_262145.f_24198)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24209 && iVar1 < Global_262145.f_24196)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24201 && iVar1 < Global_262145.f_24188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24203 && iVar1 < Global_262145.f_24190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24207 && iVar1 < Global_262145.f_24194)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24206 && iVar1 < Global_262145.f_24193)
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
		if (!Global_262145.f_26756 && iVar1 < Global_262145.f_26758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25769 && iVar1 < Global_262145.f_25762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25770 && iVar1 < Global_262145.f_25763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25771 && iVar1 < Global_262145.f_25764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25772 && iVar1 < Global_262145.f_25765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26757 && iVar1 < Global_262145.f_26759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25773 && iVar1 < Global_262145.f_25766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25774 && iVar1 < Global_262145.f_25767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25775 && iVar1 < Global_262145.f_25768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25780 && iVar1 < Global_262145.f_25801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25781 && iVar1 < Global_262145.f_25802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25782 && iVar1 < Global_262145.f_25803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25783 && iVar1 < Global_262145.f_25804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25784 && iVar1 < Global_262145.f_25805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25785 && iVar1 < Global_262145.f_25806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25786 && iVar1 < Global_262145.f_25807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25787 && iVar1 < Global_262145.f_25808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25788 && iVar1 < Global_262145.f_25809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25789 && iVar1 < Global_262145.f_25810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25790 && iVar1 < Global_262145.f_25811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25791 && iVar1 < Global_262145.f_25812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25792 && iVar1 < Global_262145.f_25813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25793 && iVar1 < Global_262145.f_25814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25794 && iVar1 < Global_262145.f_25815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25795 && iVar1 < Global_262145.f_25816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25796 && iVar1 < Global_262145.f_25817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25797 && iVar1 < Global_262145.f_25818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25798 && iVar1 < Global_262145.f_25819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25799 && iVar1 < Global_262145.f_25820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25800 && iVar1 < Global_262145.f_25821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28601 && iVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28602 && iVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28603 && iVar1 < Global_262145.f_28624)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28604 && iVar1 < Global_262145.f_28625)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28605 && iVar1 < Global_262145.f_28626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28606 && iVar1 < Global_262145.f_28627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28607 && iVar1 < Global_262145.f_28628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28608 && iVar1 < Global_262145.f_28629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28609 && iVar1 < Global_262145.f_28630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28610 && iVar1 < Global_262145.f_28631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28611 && iVar1 < Global_262145.f_28632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28612 && iVar1 < Global_262145.f_28633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28613 && iVar1 < Global_262145.f_28634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28614 && iVar1 < Global_262145.f_28635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28615 && iVar1 < Global_262145.f_28636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28616 && iVar1 < Global_262145.f_28637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28617 && iVar1 < Global_262145.f_28638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28618 && iVar1 < Global_262145.f_28639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28619 && iVar1 < Global_262145.f_28640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28620 && iVar1 < Global_262145.f_28641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28621 && iVar1 < Global_262145.f_28642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28644 && iVar1 < Global_262145.f_28645) && !Global_262145.f_28599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28647 && iVar1 < Global_262145.f_28648) && !Global_262145.f_28600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28652 && iVar1 < Global_262145.f_28655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28653 && iVar1 < Global_262145.f_28656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28654 && iVar1 < Global_262145.f_28657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29670 && iVar1 < Global_262145.f_29335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29321 && iVar1 < Global_262145.f_29342)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29322 && iVar1 < Global_262145.f_29328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29668 && iVar1 < Global_262145.f_29336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29669 && iVar1 < Global_262145.f_29337)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29315 && iVar1 < Global_262145.f_29334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29316 && iVar1 < Global_262145.f_29343)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29317 && iVar1 < Global_262145.f_29333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29318 && iVar1 < Global_262145.f_29331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29664 && iVar1 < Global_262145.f_29338)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29665 && iVar1 < Global_262145.f_29339)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29666 && iVar1 < Global_262145.f_29340)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29667 && iVar1 < Global_262145.f_29341)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29319 && iVar1 < Global_262145.f_29330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29320 && iVar1 < Global_262145.f_29332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30129 && iVar1 < Global_262145.f_30112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30130 && iVar1 < Global_262145.f_30113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30131 && iVar1 < Global_262145.f_30114)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30132 && iVar1 < Global_262145.f_30115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30133 && iVar1 < Global_262145.f_30116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30134 && iVar1 < Global_262145.f_30117)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30135 && iVar1 < Global_262145.f_30118)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30136 && iVar1 < Global_262145.f_30119)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30137 && iVar1 < Global_262145.f_30120)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30146)
		{
		}
		else if (!Global_262145.f_30138 && iVar1 < Global_262145.f_30121)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30139 && iVar1 < Global_262145.f_30122)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30140 && iVar1 < Global_262145.f_30123)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30141 && iVar1 < Global_262145.f_30124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30142 && iVar1 < Global_262145.f_30125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30147)
		{
		}
		else if (!Global_262145.f_30143 && iVar1 < Global_262145.f_30126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30144 && iVar1 < Global_262145.f_30127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30145 && iVar1 < Global_262145.f_30128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30997 && iVar1 < Global_262145.f_30980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30998 && iVar1 < Global_262145.f_30981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30999 && iVar1 < Global_262145.f_30982)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31000 && iVar1 < Global_262145.f_30983)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31001 && iVar1 < Global_262145.f_30984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31002 && iVar1 < Global_262145.f_30985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31003 && iVar1 < Global_262145.f_30986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31004 && iVar1 < Global_262145.f_30987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31005 && iVar1 < Global_262145.f_30988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31006 && iVar1 < Global_262145.f_30989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31007 && iVar1 < Global_262145.f_30990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31008 && iVar1 < Global_262145.f_30991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31009 && iVar1 < Global_262145.f_30992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31010 && iVar1 < Global_262145.f_30993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31011 && iVar1 < Global_262145.f_30994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31012 && iVar1 < Global_262145.f_30995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31013 && iVar1 < Global_262145.f_30996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31872 && iVar1 < Global_262145.f_31857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31873 && iVar1 < Global_262145.f_31858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31874 && iVar1 < Global_262145.f_31859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31875 && iVar1 < Global_262145.f_31860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31876 && iVar1 < Global_262145.f_31861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31877 && iVar1 < Global_262145.f_31862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31878 && iVar1 < Global_262145.f_31863)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31879 && iVar1 < Global_262145.f_31864)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31880 && iVar1 < Global_262145.f_31865)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31881 && iVar1 < Global_262145.f_31866)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31882 && iVar1 < Global_262145.f_31867)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31883 && iVar1 < Global_262145.f_31868)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31884 && iVar1 < Global_262145.f_31869)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31885 && iVar1 < Global_262145.f_31870)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31950)
		{
		}
		else if (!Global_262145.f_31886 && iVar1 < Global_262145.f_31871)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso3"))
	{
		if (!Global_262145.f_33037 && iVar1 < Global_262145.f_33018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("corsita"))
	{
		if (!Global_262145.f_33031 && iVar1 < Global_262145.f_33012)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("draugur"))
	{
		if (!Global_262145.f_33035 && iVar1 < Global_262145.f_33016)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("greenwood"))
	{
		if (!Global_262145.f_33029 && iVar1 < Global_262145.f_33010)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjosj"))
	{
		if (!Global_262145.f_33040 && iVar1 < Global_262145.f_33021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lm87"))
	{
		if (!Global_262145.f_33032 && iVar1 < Global_262145.f_33013)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("postlude"))
	{
		if (!Global_262145.f_33041 && iVar1 < Global_262145.f_33022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rhinehart"))
	{
		if (!Global_262145.f_33043 && iVar1 < Global_262145.f_33024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sm722"))
	{
		if (!Global_262145.f_33034 && iVar1 < Global_262145.f_33015)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf"))
	{
		if (!Global_262145.f_33042 && iVar1 < Global_262145.f_33023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf2"))
	{
		if (!Global_262145.f_33045 && iVar1 < Global_262145.f_33026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero2"))
	{
		if (!Global_262145.f_33030 && iVar1 < Global_262145.f_33011)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero2"))
	{
		if (!Global_262145.f_33038 && iVar1 < Global_262145.f_33019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil2"))
	{
		if (!Global_262145.f_33044 && iVar1 < Global_262145.f_33025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner4"))
	{
		if (!Global_262145.f_33036 && iVar1 < Global_262145.f_33017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel4"))
	{
		if (!Global_262145.f_33046 && iVar1 < Global_262145.f_33027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("conada"))
	{
		if (!Global_262145.f_33033 && iVar1 < Global_262145.f_33014)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnisegt"))
	{
		if (!Global_262145.f_33028 && iVar1 < Global_262145.f_33009)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_121()
{
	return (unk_0xA7384DAD7CF469DA() || unk_0x807ABE1AB65C24D2());
}

bool func_122()
{
	return (unk_0x3EBD3AF4E5D7A08C() || unk_0xC545AB1CF97ABB34());
}

int func_123()
{
	return 0;
}

int func_124()
{
	return 1;
}

int func_125()
{
	return 1;
}

int func_126()
{
	if (unk_0x014D8C5910A5B01B(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_127()
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
					uVar0 = unk_0x5D851A9195129CE9(866);
					unk_0xCED9E32812D6C7C7(&uVar0, false);
					unk_0x212EDDD868F364B5(uVar0);
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

int func_128(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x15CAA6D7B11F1A7C(iParam0);
	uVar1 = unk_0x80D16DB58890B7BC(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3C57C2F07FEE34D2(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_117(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xE5965CDF24F93A9F(Global_97802[iVar0]))
		{
			if (Global_97802[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_130(int iParam0)
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xE5965CDF24F93A9F(Global_97772[iVar0]) && unk_0x55A0C756C4A8220C(Global_97772[iVar0], 0))
			{
				if (Global_97772[iVar0] == iParam0 && unk_0x15CAA6D7B11F1A7C(Global_97772[iVar0]) == unk_0x15CAA6D7B11F1A7C(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_131(int iParam0)
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(Global_77137.f_484[24]))
	{
		if (iParam0 == Global_77137.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xE5965CDF24F93A9F(Global_77137.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_77137.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_132(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xE5965CDF24F93A9F(iParam0) || !unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_133(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_113386.f_7229[iVar9], 0))
		{
			if (unk_0xBEF939CD3AF0B8F0(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_133(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_134()
{
	var uVar0;
	
	func_144(&uVar0, unk_0xAA2844CAD88768B5());
	func_143(&uVar0, unk_0x80F97D7D29800A1A());
	func_142(&uVar0, unk_0x09FC827691DACE59());
	func_137(&uVar0, unk_0xD52BD97E61483713());
	func_136(&uVar0, unk_0x771485043FDC55DE());
	func_135(&uVar0, unk_0x1137FD08B8D3F874());
	return uVar0;
}

void func_135(var uParam0, int iParam1)
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

void func_136(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_137(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_141(*uParam0);
	iVar1 = func_139(*uParam0);
	if (iParam1 < 1 || iParam1 > func_138(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_138(int iParam0, int iParam1)
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

var func_139(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_140(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_140(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_141(var uParam0)
{
	return uParam0 & 15;
}

void func_142(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_143(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_144(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_145(var uParam0, int iParam1)
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
			uParam0->f_4 = func_146(0, 1);
			uParam0->f_12 = 0;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_146(0, 1);
			uParam0->f_12 = 0;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_146(1, 1);
			uParam0->f_12 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_146(1, 2);
			uParam0->f_12 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 19);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_146(1, 1);
			uParam0->f_12 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_146(1, 2);
			uParam0->f_12 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 19);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_146(2, 1);
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_146(2, 1);
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_146(2, 1);
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 22);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 22);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 22);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
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
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 27);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
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
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 27);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
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
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 27);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 11);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 11);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 9);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 9);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
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
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 2);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 30);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 2);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 22);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
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
			if (func_127())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 2);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), true);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_127())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 2);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), true);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 30);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 30);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113386.f_32749.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_156(Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113386.f_32749.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113386.f_32749.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_156(Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_156(Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_146(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_148(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_147(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_147(int iParam0, var uParam1, int iParam2)
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
			if (Global_113386.f_9085.f_99.f_58[128] && !Global_113386.f_9085.f_99.f_58[131])
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
					if (Global_113386.f_9085.f_99.f_58[119])
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
			else if (Global_113386.f_9085.f_99.f_58[118])
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

bool func_148(int iParam0)
{
	return iParam0 < 3;
}

void func_149(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_145(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
		{
			func_154(iParam0);
			func_153(uParam1, &(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 11))
			{
				Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_150(iParam0, 1);
		}
	}
}

void func_150(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_152(iParam0, 0))
		{
			func_151(iParam0, 1, 0);
			func_151(iParam0, 2, 0);
			func_151(iParam0, 3, 0);
			func_151(iParam0, 4, 0);
			func_151(iParam0, 0, 1);
			Global_77137[iParam0] = 1;
		}
	}
	else
	{
		func_151(iParam0, 0, 0);
	}
}

void func_151(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xCED9E32812D6C7C7(&(Global_113386.f_32749[iParam0]), iParam1);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_113386.f_32749[iParam0]), bParam1);
	}
}

int func_152(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_32749[iParam0], iParam1);
}

void func_153(var uParam0, var uParam1)
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

void func_154(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_145(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xE5965CDF24F93A9F(Global_77137.f_139[iParam0]))
		{
			unk_0x2D58A6131679D82C(Global_77137.f_139[iParam0], 1, 1);
			unk_0x3D81769BEC61BFF8(&(Global_77137.f_139[iParam0]));
			Global_77137.f_139[iParam0] = 0;
		}
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			func_150(iParam0, 0);
		}
	}
}

int func_155(int iParam0)
{
	int iVar0;
	
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 145;
	}
	if (!unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xE5965CDF24F93A9F(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == iParam0)
			{
				return Global_97782[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_156(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_157(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		func_161(uParam1);
		uParam1->f_66 = unk_0x15CAA6D7B11F1A7C(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x80D16DB58890B7BC(iParam0), 16);
		*uParam1 = unk_0xC264F708491D88D7(iParam0);
		unk_0xDCA20DBA52B32EEC(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x356C37F1AA6EA3AA(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x2EE88EB83AF61B18(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xF9D204D7598C0239(iParam0);
		uParam1->f_67 = unk_0x3A5087062A6DBAEF(iParam0);
		uParam1->f_69 = unk_0xD9B8AFE0DD1AD635(iParam0);
		uParam1->f_70 = unk_0xA09765D2ADE13CAE(iParam0);
		unk_0xFB61E9A85A29DDA7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xEDB21C30F1BAF83A(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x6CA60A8EE52231D2(iParam0, 2))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 28);
		}
		if (unk_0x6CA60A8EE52231D2(iParam0, 3))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 29);
		}
		if (unk_0x6CA60A8EE52231D2(iParam0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 30);
		}
		if (unk_0x6CA60A8EE52231D2(iParam0, 1))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_160(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x351E83123EFC0A15(iParam0, 0))
		{
			uParam1->f_68 = unk_0x0C2181485E5FB7C2(iParam0);
		}
		if (unk_0xD6F7D32A98E07F93(uParam1->f_66))
		{
			if (unk_0x333A68465EAB12B7(iParam0))
			{
				switch (unk_0xC56DEF5C90606858(iParam0))
				{
					case 3:
					case 0:
						unk_0xB0550BC91B0159D6(&(uParam1->f_77), 23);
						unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xB0550BC91B0159D6(&(uParam1->f_77), 23);
						unk_0xB0550BC91B0159D6(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xC8E55AEB1E2B047F(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 9);
		}
		if (unk_0x8B56DBBE237EDF1F(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 10);
		}
		if (unk_0xA4429F0196864BB8(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 13);
			unk_0x3D8BB85A33E13D09(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x21DB5182C34B6C0E(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 12);
		}
		func_159(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xC49329A4E58D025B(iParam0, iVar0 + 1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_158(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xA763B3F87DA3C316(iParam0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(uParam1->f_77), 11);
		}
		if (unk_0xF2549FF74D64B720(iParam0, "IgnoredByQuickSave") && unk_0x9A1E55620A6C250D(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(uParam1->f_77), 27);
		}
	}
}

int func_158(int iParam0)
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

int func_159(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x55A0C756C4A8220C(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x03AC3319D1B50189(*iParam0) == 0)
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
			if (unk_0x75B2C853CB0B3047(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x75B2C853CB0B3047(*iParam0, iVar1))
			{
				switch (unk_0xDB29312237512D99(*iParam0))
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
			(*uParam1)[iVar0] = unk_0x0DD0BC46C4CFD6AD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xCCEE7D38FC5D9FD6(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xCCEE7D38FC5D9FD6(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_160(int iParam0)
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

void func_161(var uParam0)
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

void func_162(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_154(iParam0);
	func_150(iParam0, 0);
}

int func_163(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_164(Param0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam4 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam5 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam4 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam5 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam4 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam5 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam4 = { -18.118f, -1455.126f, 29.5004f };
			*uParam5 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam5 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_164(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_95479[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_95479[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_165(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x987A5F1E1A67E3C0(Param0, Global_95479[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

var func_165(int iParam0)
{
	return BitTest(Global_113386.f_7229[iParam0], 0);
}

int func_166(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_77137.f_139[iParam0];
}

int func_167()
{
	func_168();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_168()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_170(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_169(unk_0xE2D3D51028F0428A());
			if (func_148(iVar0) && (!func_40(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_148(Global_113386.f_2363.f_539.f_4321))
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

int func_169(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_170(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_170(int iParam0)
{
	if (func_148(iParam0))
	{
		return func_171(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_171(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_172(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (*uParam0 == -1)
	{
		return 0;
	}
	else if (*uParam0 == 1)
	{
		return 1;
	}
	else if (*uParam0 == 0 || ((*uParam0 == 2 && uParam0->f_1 == 1) && iParam2))
	{
		if (iParam1 > 0)
		{
			*uParam0 = 2;
			uParam0->f_6 = iParam1;
		}
		else
		{
			*uParam0 = 1;
			uParam0->f_6 = 0;
		}
		uParam0->f_4 = unk_0x320D1840B6DAA1CC();
		uParam0->f_5 = unk_0x320D1840B6DAA1CC();
		uParam0->f_1 = iParam3;
		return 1;
	}
	return 0;
}

int func_173(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0xD69A0C3662175E68(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = unk_0x320D1840B6DAA1CC();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_174(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xACC32B78196FBC2A(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (unk_0x3C57C2F07FEE34D2(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_737[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_737[iVar0 /*5*/].f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x70F555A7CCF10659(sParam1, 0, -1);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = unk_0x320D1840B6DAA1CC();
		uParam0->f_737[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

void func_175(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		switch ((*uParam0)[iVar0 /*8*/])
		{
			case 1:
				Stack.Push(uParam0[iVar0 /*8*/]);
				Call_Loc((uParam0[iVar0 /*8*/])->f_7);
				break;
			
			case 2:
				if ((unk_0x320D1840B6DAA1CC() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6)
				{
					(*uParam0)[iVar0 /*8*/] = 1;
					(uParam0[iVar0 /*8*/])->f_6 = 0;
				}
				break;
		}
		iVar0++;
	}
}

void func_176()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	bVar2 = false;
	if (func_108(unk_0xE2D3D51028F0428A(), Local_642, 1) < 70f)
	{
		unk_0xCA69A1CC253D2D00();
	}
	if (iLocal_2598 == 9)
	{
		if (!iLocal_2597)
		{
			if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
			{
				unk_0x8BAE3B6695282DC0("SCRIPTED_SCANNER_REPORT_JSH_PREP_1A_01", 0f);
				iLocal_2597 = 1;
			}
		}
		if (unk_0xE5965CDF24F93A9F(Local_469.f_0))
		{
			if (func_107(Local_469.f_0, unk_0xE2D3D51028F0428A(), 1) > 300f)
			{
				unk_0xB3822DB3D538C8F3(&Local_469);
			}
		}
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_2600) && unk_0x55A0C756C4A8220C(iLocal_2600, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xE5965CDF24F93A9F(Local_579[iVar0 /*8*/]) && unk_0x55A0C756C4A8220C(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0x671CB92F637FDB33(iLocal_2600, Local_579[iVar0 /*8*/]))
				{
					bVar2 = true;
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iLocal_2600 = 0;
		}
	}
	if (func_186())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xE5965CDF24F93A9F(Local_579[iVar0 /*8*/]) && unk_0x55A0C756C4A8220C(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0x671CB92F637FDB33(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), Local_579[iVar0 /*8*/]))
				{
					iLocal_2600 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
				}
			}
			iVar0++;
		}
	}
	func_179();
	if (iLocal_651 == 0)
	{
		if (!unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), 182.9537f, -3119.884f, 101.9226f, 115f, 260f, 120f, 0, 1, 0))
		{
			bVar3 = true;
		}
		iVar1 = 0;
		while (iVar1 < Local_28.f_0)
		{
			if (unk_0xE5965CDF24F93A9F(Local_28[iVar1 /*110*/]))
			{
				if ((Local_28[iVar1 /*110*/].f_5 == 5 && func_107(unk_0xE2D3D51028F0428A(), Local_28[iVar1 /*110*/], 1) > 300f) && func_108(unk_0xE2D3D51028F0428A(), Local_642, 1) > 300f)
				{
					unk_0x05CB75C0837196F9(&(Local_28[iVar1 /*110*/]));
				}
			}
			iVar1++;
		}
		iVar4 = 6;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xE5965CDF24F93A9F(Local_579[iVar0 /*8*/]))
			{
				if (!unk_0x55A0C756C4A8220C(Local_579[iVar0 /*8*/], 0))
				{
					unk_0x3D81769BEC61BFF8(&(Local_579[iVar0 /*8*/]));
					if (unk_0x12DD4A0B247D9B4D(Local_579[iVar0 /*8*/].f_1))
					{
						unk_0xFFD8EB5462B07B59(&(Local_579[iVar0 /*8*/].f_1));
					}
					if (bVar3)
					{
						iVar4 = 1;
					}
					else
					{
						iVar4 = 2;
					}
				}
				else if (func_109(Local_579[iVar0 /*8*/]))
				{
					if (unk_0x12DD4A0B247D9B4D(Local_579[iVar0 /*8*/].f_1))
					{
						unk_0xFFD8EB5462B07B59(&(Local_579[iVar0 /*8*/].f_1));
					}
					iVar4 = 3;
				}
				else if (!func_106(Local_579[iVar0 /*8*/]))
				{
					if (unk_0x6D7EE245AD1E10B0(Local_579[iVar0 /*8*/]) == iLocal_2552)
					{
						if (iVar4 != 4)
						{
							iVar4 = 5;
						}
					}
					else
					{
						iVar4 = 4;
					}
				}
			}
			if (((((iLocal_2598 == 9 && func_102() != -1) && unk_0xE5965CDF24F93A9F(Local_579[func_102() /*8*/])) && unk_0x55A0C756C4A8220C(Local_579[func_102() /*8*/], 0)) && !func_109(Local_579[func_102() /*8*/])) || (((iLocal_2598 == 10 && func_54() != -1) && unk_0xE5965CDF24F93A9F(Local_579[func_54() /*8*/])) && unk_0x55A0C756C4A8220C(Local_579[func_54() /*8*/], 0)))
			{
				if (unk_0x12DD4A0B247D9B4D(Local_579[iVar0 /*8*/].f_1))
				{
					unk_0xFFD8EB5462B07B59(&(Local_579[iVar0 /*8*/].f_1));
				}
			}
			else if ((((unk_0xE5965CDF24F93A9F(Local_579[iVar0 /*8*/]) && unk_0x55A0C756C4A8220C(Local_579[iVar0 /*8*/], 0)) && !func_109(Local_579[iVar0 /*8*/])) && func_106(Local_579[iVar0 /*8*/])) && iLocal_652 == 0)
			{
				if (!unk_0x12DD4A0B247D9B4D(Local_579[iVar0 /*8*/].f_1))
				{
					Local_579[iVar0 /*8*/].f_1 = func_178(Local_579[iVar0 /*8*/], 0, 0);
					unk_0x7A610B2EC5DA34E7(Local_579[iVar0 /*8*/].f_1, 1);
				}
			}
			iVar0++;
		}
		if (iLocal_2598 == 9 || iLocal_2598 == 10)
		{
			if (func_177("JHP1A_BKIN", 0, 0) || func_177("JHP1A_BKINANY", 0, 0))
			{
				unk_0xBA6C3C5E9E5A9442();
			}
		}
		else if (iLocal_652 == 0)
		{
			if (!iLocal_2592)
			{
				if (func_105(1) == 1)
				{
					func_110("JHP1A_BKIN", 7500, 1);
				}
				iLocal_2592 = 1;
			}
		}
		if (func_105(1) == 0)
		{
			if (iVar4 != 6)
			{
				func_300(iVar4);
			}
		}
	}
}

var func_177(char* sParam0, int iParam1, int iParam2)
{
	unk_0x09684FD679B0E474(sParam0);
	if (iParam1 == 1)
	{
		unk_0x26C23BE14F66F202(iParam2);
	}
	return unk_0xD7AA4C82B5D00977();
}

int func_178(int iParam0, bool bParam1, bool bParam2)
{
	return func_58(iParam0, !bParam1, bParam2);
}

void func_179()
{
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), Local_579[3 /*8*/], 1))
		{
			iLocal_2598 = 11;
		}
		else if (func_185())
		{
			iLocal_2598 = 7;
		}
		else if (func_184())
		{
			iLocal_2598 = 6;
		}
		else if (func_103())
		{
			iLocal_2598 = 9;
			iLocal_2592 = 0;
		}
		else if (func_99())
		{
			iLocal_2598 = 10;
		}
		else if (func_183())
		{
			iLocal_2598 = 8;
		}
		else if (((unk_0xE5965CDF24F93A9F(iLocal_2601) && unk_0x55A0C756C4A8220C(iLocal_2601, 0)) && !unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_2601, 1)) && unk_0xD132EDDA78FF4A51(iLocal_2601, Local_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_2598 = 5;
		}
		else if (((!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) && unk_0xE5965CDF24F93A9F(unk_0x9993EF7FDBCDB632())) && !func_182()) && unk_0xD132EDDA78FF4A51(unk_0x9993EF7FDBCDB632(), Local_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_2601 = unk_0x9993EF7FDBCDB632();
			iLocal_2598 = 5;
		}
		else if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) && unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_2598 = 2;
		}
		else if (((unk_0xE5965CDF24F93A9F(iLocal_2601) && unk_0x55A0C756C4A8220C(iLocal_2601, 0)) && !unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_2601, 1)) && (unk_0xD132EDDA78FF4A51(iLocal_2601, 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, 1, 0) || unk_0x8F41785F110B0DA0(iLocal_2601, 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0)))
		{
			iLocal_2598 = 4;
		}
		else if (((!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) && unk_0xE5965CDF24F93A9F(unk_0x9993EF7FDBCDB632())) && !func_182()) && (unk_0xD132EDDA78FF4A51(unk_0x9993EF7FDBCDB632(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, 1, 0) || unk_0x8F41785F110B0DA0(unk_0x9993EF7FDBCDB632(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0)))
		{
			iLocal_2601 = unk_0x9993EF7FDBCDB632();
			iLocal_2598 = 4;
		}
		else if ((unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) && !func_182()) && unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_2601 = unk_0x9993EF7FDBCDB632();
			iLocal_2598 = 3;
		}
		else if ((unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) && !func_182()) && unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, 1, 0))
		{
			iLocal_2601 = unk_0x9993EF7FDBCDB632();
			iLocal_2598 = 1;
		}
		else if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) && unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0))
		{
			iLocal_2598 = 1;
		}
		else
		{
			iLocal_2601 = 0;
			if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) && unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), 159.688f, -3092.446f, 7.314032f, 4.9375f, 7.3125f, 2.3125f, 0, 1, 0))
			{
				iLocal_2598 = 0;
			}
			else if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) && unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0))
			{
				iLocal_2598 = 0;
			}
			else
			{
				iLocal_2598 = -1;
			}
		}
		if (iLocal_2598 == 1)
		{
			if (func_181(Local_28[0 /*110*/]))
			{
				func_180(Local_28[0 /*110*/], 120f, 20f, 120f, -90f, 90f);
			}
		}
		else if (func_181(Local_28[0 /*110*/]))
		{
			func_180(Local_28[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		}
		if (bLocal_2595)
		{
			unk_0x3E3D339BAD67F6F2(unk_0xE2D3D51028F0428A(), 155, 1);
		}
		if ((iLocal_2598 != -1 && unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0)) && unk_0x97D65C0968CFE3AF(Vector(101.9226f, -3119.884f, 182.9537f) - Vector(108.0625f, 239.75f, 94.25f), Vector(101.9226f, -3119.884f, 182.9537f) + Vector(108.0625f, 239.75f, 94.25f)))
		{
		}
	}
}

void func_180(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0xF68107C40359970C(uParam0))
	{
		unk_0xE014FF3C785EEFB5(iParam0, fParam1);
		unk_0x52EA1154D214BFB6(iParam0, fParam2);
		unk_0xED676E22A51C1922(iParam0, (fParam3 / 2f));
		unk_0xA4E1B9926DF4A312(iParam0, fParam4);
		unk_0xFCC8AE1090BA5929(iParam0, fParam5);
	}
}

int func_181(int iParam0)
{
	if (iParam0 != 0 && unk_0xE5965CDF24F93A9F(iParam0))
	{
		switch (unk_0x0FBF5AC4BA2F3447(iParam0))
		{
			case 1:
				if (!unk_0xF68107C40359970C(unk_0x28AA31872A651BC7(iParam0)))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x55A0C756C4A8220C(unk_0x31EB55FAEEE9C0F5(iParam0), 0))
				{
					return 1;
				}
				break;
			
			default:
				if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_182()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0xE5965CDF24F93A9F(Local_579[iVar0 /*8*/]) && unk_0x55A0C756C4A8220C(Local_579[iVar0 /*8*/], 0))
		{
			if (unk_0x9993EF7FDBCDB632() == Local_579[iVar0 /*8*/])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_183()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0xE5965CDF24F93A9F(Local_579[iVar0 /*8*/]) && unk_0x0747E45CFF1F74AA(Local_579[iVar0 /*8*/], unk_0xE2D3D51028F0428A(), 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_184()
{
	int iVar0;
	
	if (unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if ((unk_0xE5965CDF24F93A9F(Local_579[iVar0 /*8*/]) && unk_0x55A0C756C4A8220C(Local_579[iVar0 /*8*/], 0)) && unk_0x8DB5C2D06228DF32(unk_0xE2D3D51028F0428A()) == Local_579[iVar0 /*8*/])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_185()
{
	int iVar0;
	
	if ((unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) && !unk_0x174B84F6B78D6CA7(unk_0xE2D3D51028F0428A())) && !unk_0xCEDE6233B8F49499(unk_0xE2D3D51028F0428A()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xE5965CDF24F93A9F(Local_579[iVar0 /*8*/]) && unk_0x55A0C756C4A8220C(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), Local_579[iVar0 /*8*/], 1))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_186()
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		if (unk_0x55A0C756C4A8220C(iVar0, 0) && (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("towtruck") || unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("towtruck2")))
		{
			return 1;
		}
	}
	return 0;
}

void func_187()
{
	int iVar0;
	
	if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		func_300(6);
	}
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (unk_0xE5965CDF24F93A9F(Local_28[iVar0 /*110*/]))
		{
			if (Local_28[iVar0 /*110*/].f_93)
			{
				if (Local_28[iVar0 /*110*/].f_102)
				{
					func_188(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_94), 3, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
				}
				else
				{
					func_188(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_94), 2, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
				}
			}
			if (!func_181(Local_28[iVar0 /*110*/]))
			{
				if (Local_28[iVar0 /*110*/].f_103 == -1)
				{
					Local_28[iVar0 /*110*/].f_103 = unk_0x320D1840B6DAA1CC();
				}
				else if ((unk_0x320D1840B6DAA1CC() - Local_28[iVar0 /*110*/].f_103) >= 5000)
				{
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_579.f_0)
	{
		if (unk_0xE5965CDF24F93A9F(Local_579[iVar0 /*8*/]) && Local_579[iVar0 /*8*/].f_7)
		{
			if (!func_181(Local_579[iVar0 /*8*/]))
			{
				if (unk_0x12DD4A0B247D9B4D(Local_579[iVar0 /*8*/].f_1))
				{
					unk_0xFFD8EB5462B07B59(&(Local_579[iVar0 /*8*/].f_1));
				}
				unk_0x3D81769BEC61BFF8(&(Local_579[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
}

int func_188(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = unk_0xB6BA8B8E3D0B41C6();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (!unk_0x227D9DCE160DDA9D(iParam0))
		{
			bVar0 = true;
			if (unk_0x17FE501894ED2713(iParam0) && iParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					unk_0x0B69DCF6FE80E8EB(iParam0, 1);
				}
				else
				{
					unk_0xBFD785B1D608BC11(iParam0, 1, iParam8);
				}
				uParam1->f_7 = iParam0;
				unk_0xEEC8A34FF9213FE4(iParam0, iParam2);
				unk_0x7C87F71C68A9AF0B(iParam0, fParam6);
				if (unk_0x12DD4A0B247D9B4D(*uParam1))
				{
					unk_0x7A610B2EC5DA34E7(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x21D1ACE7CE56627C(iParam0, iParam9);
		}
		unk_0x0FB9B56364B11BC9(iParam0, iParam4);
		unk_0x922263C0FEA956C8(iParam0, iParam5);
		*uParam1 = unk_0xC6CEFB49E88BDD9B(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x12DD4A0B247D9B4D(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xA582EE8380437B1B(*uParam1, iParam8);
				}
				if (!unk_0xACC32B78196FBC2A(iParam7))
				{
					unk_0xB6AD9F9931D821CA("STRING");
					if (bParam10)
					{
						unk_0x76DB21247AE4E4E2(iParam7);
					}
					else
					{
						unk_0x26C23BE14F66F202(iParam7);
					}
					unk_0xA630BF119308F2F4(*uParam1);
				}
				unk_0x7A610B2EC5DA34E7(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (unk_0x12DD4A0B247D9B4D(*uParam1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xD5C6B5E3B93A5EDC(iParam0, 0))
		{
			uParam1->f_1 = unk_0xFEB99716362809A3(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (unk_0x12DD4A0B247D9B4D(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0xA582EE8380437B1B(uParam1->f_1, iParam8);
					}
					if (!unk_0xACC32B78196FBC2A(iParam7))
					{
						unk_0xB6AD9F9931D821CA("STRING");
						if (bParam10)
						{
							unk_0x76DB21247AE4E4E2(iParam7);
						}
						else
						{
							unk_0x26C23BE14F66F202(iParam7);
						}
						unk_0xA630BF119308F2F4(uParam1->f_1);
					}
					unk_0x7A610B2EC5DA34E7(uParam1->f_1, 7);
					unk_0xCED9E32812D6C7C7(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0x12DD4A0B247D9B4D(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0xB0550BC91B0159D6(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0x12DD4A0B247D9B4D(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xB0550BC91B0159D6(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_189()
{
	struct<3> Var0;
	var uVar3;
	
	if (bLocal_654 == 1)
	{
		if (!unk_0xA829C9A2767AC8EF())
		{
			if (!unk_0xCB1EF1E7B77ADF4C())
			{
				unk_0x859006DB870314C5(1000);
			}
		}
		else
		{
			if (unk_0x496531E41FCF5116())
			{
				unk_0xEDFEDFF9573687B1(0);
				unk_0x6D23F8C14190D353();
			}
			func_24(iLocal_655);
			unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
			unk_0xBA6C3C5E9E5A9442();
			unk_0x3410421C60BF7143(1);
			func_8(1);
			if (!func_246())
			{
				func_245(iLocal_651, &Var0, &uVar3);
				unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), Var0, 1, 0, 0, 1);
				unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), uVar3);
				unk_0x5C65DDDC219B3AA5(unk_0xE2D3D51028F0428A(), 1);
				func_243(&uLocal_658, Var0, 50f, 0);
			}
			func_242(&uLocal_658);
			switch (iLocal_651)
			{
				case 0:
					func_173(&uLocal_658, joaat("burrito2"));
					func_173(&uLocal_658, joaat("s_m_y_pestcont_01"));
					func_173(&uLocal_658, joaat("s_m_m_security_01"));
					func_173(&uLocal_658, joaat("dilettante2"));
					func_173(&uLocal_658, joaat("p_amb_clipboard_01"));
					func_241(&uLocal_658, &cLocal_645);
					func_240(&uLocal_658, "misslsdhsclipboard@base");
					func_240(&uLocal_658, "misslsdhsclipboard@idle_a");
					func_240(&uLocal_658, "misstrevor3");
					func_239(&uLocal_658, iLocal_2552);
					if (((func_238() && !unk_0xD2B5B1C8FC84FE0F(func_237())) && !unk_0xD6F7D32A98E07F93(func_237())) && !unk_0x4262B4DCEADC2695(func_237()))
					{
						func_173(&uLocal_658, func_237());
					}
					break;
				
				case 1:
					func_173(&uLocal_658, joaat("burrito2"));
					break;
			}
			while (!func_236(&uLocal_658))
			{
				unk_0x4EDE34FBADD967A6(0);
				func_187();
			}
			switch (iLocal_651)
			{
				case 0:
					if (((func_238() && !unk_0xD2B5B1C8FC84FE0F(func_237())) && !unk_0xD6F7D32A98E07F93(func_237())) && !unk_0x4262B4DCEADC2695(func_237()))
					{
						while (!func_235())
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						Local_579[4 /*8*/] = func_196(189.3979f, -2932.721f, 5.6127f, 180.5455f);
					}
					if (func_246())
					{
						if (unk_0xE5965CDF24F93A9F(Local_579[4 /*8*/]))
						{
							func_193(Local_579[4 /*8*/], -1, 1);
						}
						else
						{
							func_193(0, -1, 1);
						}
					}
					else
					{
						unk_0x5C65DDDC219B3AA5(unk_0xE2D3D51028F0428A(), 0);
						if (unk_0xE5965CDF24F93A9F(Local_579[4 /*8*/]))
						{
							unk_0xA9F390242F9EB2E1(unk_0xE2D3D51028F0428A(), Local_579[4 /*8*/], -1);
						}
					}
					while (!func_190(0))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					unk_0x94953C3FF0664F66(0f);
					unk_0x080C97B891E2F3AA(0f, 1065353216);
					break;
				
				case 1:
					if (!func_7(88))
					{
						Local_579[0 /*8*/] = unk_0xBA715A7BEBA5A1F9(joaat("burrito2"), 693.725f, -1006.302f, 21.8355f, 359.884f, 1, 1, 0);
						unk_0xF838539C61C30896(Local_579[0 /*8*/], 0);
						unk_0x9F65B3BAFA302A65(Local_579[0 /*8*/], 1084227584);
					}
					if (func_246())
					{
						func_193(0, -1, 1);
					}
					else
					{
						unk_0x5C65DDDC219B3AA5(unk_0xE2D3D51028F0428A(), 0);
					}
					unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), 692.067f, -1004.812f, 21.9059f, 1, 0, 0, 1);
					unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), 359.5735f);
					unk_0x94953C3FF0664F66(0f);
					unk_0x080C97B891E2F3AA(0f, 1065353216);
					break;
			}
			if (unk_0xA829C9A2767AC8EF() || !unk_0xECD40FEF3CF43BDB())
			{
				if (!func_7(88) || iLocal_651 != 1)
				{
					unk_0x5A7ACD1CDF509B0D(800);
				}
			}
			bLocal_654 = false;
		}
	}
}

int func_190(bool bParam0)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	iVar1 = 1;
	if (bParam0)
	{
		if (unk_0xE5965CDF24F93A9F(Global_96938[0]))
		{
			Local_579[0 /*8*/] = Global_96938[0];
			unk_0x2D58A6131679D82C(Local_579[0 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xE5965CDF24F93A9F(Global_96938[1]))
		{
			Local_579[1 /*8*/] = Global_96938[1];
			unk_0x2D58A6131679D82C(Local_579[1 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xE5965CDF24F93A9F(Global_96938[2]))
		{
			Local_579[2 /*8*/] = Global_96938[2];
			unk_0x2D58A6131679D82C(Local_579[2 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xE5965CDF24F93A9F(Global_96938.f_9[0]))
		{
			Local_28[1 /*110*/] = Global_96938.f_9[0];
			if (!unk_0xF68107C40359970C(Local_28[1 /*110*/]))
			{
				unk_0x006574E87E6F1942(Local_28[1 /*110*/], 0, 1);
			}
			unk_0x2D58A6131679D82C(Local_28[1 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xE5965CDF24F93A9F(Global_96938.f_28[0]))
		{
			Local_28[1 /*110*/].f_105 = Global_96938.f_28[0];
			unk_0x2D58A6131679D82C(Local_28[1 /*110*/].f_105, 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xE5965CDF24F93A9F(Global_96938.f_9[2]))
		{
			Local_28[0 /*110*/] = Global_96938.f_9[2];
			if (!unk_0xF68107C40359970C(Local_28[0 /*110*/]))
			{
				unk_0x006574E87E6F1942(Local_28[0 /*110*/], 0, 1);
			}
			unk_0x2D58A6131679D82C(Local_28[0 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xE5965CDF24F93A9F(Global_96938.f_9[3]))
		{
			Local_28[2 /*110*/] = Global_96938.f_9[3];
			if (!unk_0xF68107C40359970C(Local_28[3 /*110*/]))
			{
				unk_0x006574E87E6F1942(Local_28[2 /*110*/], 0, 1);
			}
			unk_0x2D58A6131679D82C(Local_28[2 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xE5965CDF24F93A9F(Global_96938.f_9[4]))
		{
			Local_28[3 /*110*/] = Global_96938.f_9[4];
			if (!unk_0xF68107C40359970C(Local_28[3 /*110*/]))
			{
				unk_0x006574E87E6F1942(Local_28[3 /*110*/], 0, 1);
			}
			unk_0x2D58A6131679D82C(Local_28[3 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xE5965CDF24F93A9F(Global_96938.f_9[5]))
		{
			Local_469.f_0 = Global_96938.f_9[5];
			if (!unk_0xF68107C40359970C(Local_469.f_0))
			{
				unk_0x006574E87E6F1942(Local_469.f_0, 0, 1);
			}
			unk_0x2D58A6131679D82C(Local_469.f_0, 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xE5965CDF24F93A9F(Global_96938[3]))
		{
			Local_579[3 /*8*/] = Global_96938[3];
			unk_0x2D58A6131679D82C(Local_579[3 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		if (!unk_0xE5965CDF24F93A9F(Local_579[0 /*8*/]))
		{
			Local_579[0 /*8*/] = unk_0xBA715A7BEBA5A1F9(joaat("burrito2"), 148.7243f, -3104.619f, 4.8962f, 179.6158f, 1, 1, 0);
		}
		if (!unk_0xE5965CDF24F93A9F(Local_579[1 /*8*/]))
		{
			Local_579[1 /*8*/] = unk_0xBA715A7BEBA5A1F9(joaat("burrito2"), 145.9856f, -3080f, 4.8962f, 269.0827f, 1, 1, 0);
		}
		if (!unk_0xE5965CDF24F93A9F(Local_579[2 /*8*/]))
		{
			Local_579[2 /*8*/] = unk_0xBA715A7BEBA5A1F9(joaat("burrito2"), 129.9696f, -3089.331f, 4.8796f, 269.9255f, 1, 1, 0);
		}
		if (!unk_0xE5965CDF24F93A9F(Local_28[1 /*110*/]))
		{
			Local_28[1 /*110*/] = unk_0xA8D58C3AADA2C41C(26, joaat("s_m_y_pestcont_01"), 126.2174f, -3089.383f, 4.9199f, 275.4068f, 1, 1);
			unk_0xF160248D9083ED0C(Local_28[1 /*110*/], 150, 0);
			unk_0xE3752B10DC995E95(Local_28[1 /*110*/], 8, 1, 0, 0);
			unk_0xE3752B10DC995E95(Local_28[1 /*110*/], 0, 0, 2, 0);
			unk_0xE3752B10DC995E95(Local_28[1 /*110*/], 3, 0, 1, 0);
			unk_0xE3752B10DC995E95(Local_28[1 /*110*/], 4, 0, 1, 0);
			unk_0xE3752B10DC995E95(Local_28[1 /*110*/], 8, 0, 0, 0);
			unk_0xE3752B10DC995E95(Local_28[1 /*110*/], 10, 1, 0, 0);
			unk_0xD9D122A54FFE62B8(Local_28[1 /*110*/], 0, 1, 0, 0);
			unk_0xD9D122A54FFE62B8(Local_28[1 /*110*/], 1, 0, 0, 0);
			unk_0x9D4D63EB83A103AD(Local_28[1 /*110*/], 2f);
		}
		if (!unk_0xE5965CDF24F93A9F(Local_28[1 /*110*/].f_105))
		{
			Local_28[1 /*110*/].f_105 = unk_0x0E536D72AB30F4C8(joaat("p_amb_clipboard_01"), unk_0x6EA486FF6D815B4B(Local_28[1 /*110*/], 60309, 0f, 0f, 0f), 1, 1, 0);
			unk_0x9A97DC6DBC7B223D(Local_28[1 /*110*/].f_105, Local_28[1 /*110*/], unk_0xB897FCFCFA664B38(Local_28[1 /*110*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1, 0);
		}
		if (!unk_0xE5965CDF24F93A9F(Local_28[0 /*110*/]))
		{
			Local_28[0 /*110*/] = unk_0xA8D58C3AADA2C41C(26, joaat("s_m_y_pestcont_01"), 155.74f, -3098.89f, 5.93f, 0f, 1, 1);
			unk_0xE3752B10DC995E95(Local_28[0 /*110*/], 0, 0, 0, 0);
			unk_0xE3752B10DC995E95(Local_28[0 /*110*/], 3, 0, 0, 0);
			unk_0xE3752B10DC995E95(Local_28[0 /*110*/], 4, 0, 0, 0);
			unk_0xE3752B10DC995E95(Local_28[0 /*110*/], 8, 1, 0, 0);
			unk_0xE3752B10DC995E95(Local_28[0 /*110*/], 10, 0, 0, 0);
			unk_0xD9D122A54FFE62B8(Local_28[0 /*110*/], 0, 0, 0, 0);
			unk_0x9D4D63EB83A103AD(Local_28[0 /*110*/], 2f);
		}
		if (!unk_0xE5965CDF24F93A9F(Local_28[2 /*110*/]))
		{
			Local_28[2 /*110*/] = unk_0xA8D58C3AADA2C41C(26, joaat("s_m_y_pestcont_01"), 159.8f, -3085.96f, 6f, 0f, 1, 1);
			unk_0xE3752B10DC995E95(Local_28[2 /*110*/], 0, 0, 1, 0);
			unk_0xE3752B10DC995E95(Local_28[2 /*110*/], 3, 0, 2, 0);
			unk_0xE3752B10DC995E95(Local_28[2 /*110*/], 4, 0, 2, 0);
			unk_0xE3752B10DC995E95(Local_28[2 /*110*/], 8, 1, 0, 0);
			unk_0xE3752B10DC995E95(Local_28[2 /*110*/], 10, 1, 0, 0);
			unk_0xD9D122A54FFE62B8(Local_28[2 /*110*/], 1, 0, 0, 0);
			unk_0x9D4D63EB83A103AD(Local_28[2 /*110*/], 2f);
		}
		if (!unk_0xE5965CDF24F93A9F(Local_28[3 /*110*/]))
		{
			Local_28[3 /*110*/] = unk_0xA8D58C3AADA2C41C(26, joaat("s_m_y_pestcont_01"), 159.06f, -3085f, 6.01f, 0f, 1, 1);
			unk_0xE3752B10DC995E95(Local_28[3 /*110*/], 0, 1, 1, 0);
			unk_0xE3752B10DC995E95(Local_28[3 /*110*/], 3, 0, 3, 0);
			unk_0xE3752B10DC995E95(Local_28[3 /*110*/], 4, 0, 3, 0);
			unk_0xE3752B10DC995E95(Local_28[3 /*110*/], 8, 1, 0, 0);
			unk_0xE3752B10DC995E95(Local_28[3 /*110*/], 10, 0, 0, 0);
			unk_0xD9D122A54FFE62B8(Local_28[3 /*110*/], 0, 0, 0, 0);
			unk_0x9D4D63EB83A103AD(Local_28[3 /*110*/], 2f);
		}
		if (!unk_0xE5965CDF24F93A9F(Local_469.f_0) && !unk_0xE5965CDF24F93A9F(Local_579[3 /*8*/]))
		{
			if (unk_0x09FC827691DACE59() >= 5 && unk_0x09FC827691DACE59() < 21)
			{
				Local_579[3 /*8*/] = unk_0xBA715A7BEBA5A1F9(joaat("dilettante2"), 144.84f, -2982.75f, 5.32f, 266.5972f, 1, 1, 0);
				Local_469.f_0 = unk_0x487C17B41938052C(Local_579[3 /*8*/], 26, joaat("s_m_m_security_01"), -1, 1, 1);
			}
			else
			{
				Local_579[3 /*8*/] = unk_0xBA715A7BEBA5A1F9(joaat("dilettante2"), 169.3554f, -3110.025f, 4.8228f, 88.4411f, 1, 1, 0);
				Local_469.f_0 = unk_0xA8D58C3AADA2C41C(26, joaat("s_m_m_security_01"), 161.7414f, -3117.074f, 4.9643f, 333.7041f, 1, 1);
			}
		}
	}
	if (unk_0xE5965CDF24F93A9F(Local_579[0 /*8*/]))
	{
		func_192(Local_579[0 /*8*/], 0);
		unk_0x3B2646B62E7BBE11(Local_579[0 /*8*/], 7);
		unk_0x909FF2867C7E0CAE(Local_579[0 /*8*/], 1);
		unk_0x05EAB38F5AC8DA1D(Local_579[0 /*8*/], 1);
		Local_579[0 /*8*/].f_7 = 0;
	}
	if (unk_0xE5965CDF24F93A9F(Local_579[1 /*8*/]))
	{
		func_192(Local_579[1 /*8*/], 1);
		unk_0x371D594409A68A18(Local_579[1 /*8*/], 1, 1, 0);
		unk_0x6D60ABBA76DB955A(Local_579[1 /*8*/], 4, 0);
		unk_0x2476BE9932670CAD(Local_579[1 /*8*/], 0, 1, 0);
		unk_0x2476BE9932670CAD(Local_579[1 /*8*/], 4, 0, 1);
		unk_0x05EAB38F5AC8DA1D(Local_579[1 /*8*/], 1);
		Local_579[1 /*8*/].f_7 = 0;
	}
	if (unk_0xE5965CDF24F93A9F(Local_579[2 /*8*/]))
	{
		func_192(Local_579[2 /*8*/], 2);
		unk_0x2476BE9932670CAD(Local_579[2 /*8*/], 2, 1, 0);
		unk_0x2476BE9932670CAD(Local_579[2 /*8*/], 3, 1, 0);
		unk_0x05EAB38F5AC8DA1D(Local_579[2 /*8*/], 1);
		Local_579[2 /*8*/].f_7 = 0;
	}
	if (unk_0xE5965CDF24F93A9F(Local_28[1 /*110*/]))
	{
		unk_0xD8B630F464FE1D6D(Local_28[1 /*110*/], &(Local_28[1 /*110*/].f_1));
		unk_0x50274A7EACA3133A(Local_28[1 /*110*/], 1);
		unk_0xFF4BEB6CFF55A013(Local_28[1 /*110*/], iLocal_2550);
		unk_0x059473086913178C(Local_28[1 /*110*/], 1);
		func_180(Local_28[1 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x5C9D9A4EA475F37E(Local_28[1 /*110*/], 50f);
		StringCopy(&(Local_28[1 /*110*/].f_1), "foreman2(rear)", 16);
		Local_28[1 /*110*/].f_42 = 20f;
		Local_28[1 /*110*/].f_86 = 1;
		Local_28[1 /*110*/].f_87 = 1;
		Local_28[1 /*110*/].f_107 = joaat("p_amb_clipboard_01");
		Local_28[1 /*110*/].f_106 = 60309;
		Local_28[1 /*110*/].f_108 = 0;
	}
	if (unk_0xE5965CDF24F93A9F(Local_28[0 /*110*/]))
	{
		unk_0xD8B630F464FE1D6D(Local_28[0 /*110*/], &(Local_28[0 /*110*/].f_1));
		unk_0x50274A7EACA3133A(Local_28[0 /*110*/], 1);
		unk_0xFF4BEB6CFF55A013(Local_28[0 /*110*/], iLocal_2550);
		unk_0x059473086913178C(Local_28[0 /*110*/], 1);
		func_180(Local_28[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		unk_0x5C9D9A4EA475F37E(Local_28[0 /*110*/], 50f);
		StringCopy(&(Local_28[0 /*110*/].f_1), "foreman1(front)", 16);
		Local_28[0 /*110*/].f_86 = 1;
		Local_28[0 /*110*/].f_87 = 1;
		Local_28[0 /*110*/].f_42 = 17.5f;
	}
	if (unk_0xE5965CDF24F93A9F(Local_28[2 /*110*/]))
	{
		unk_0xD8B630F464FE1D6D(Local_28[2 /*110*/], &(Local_28[2 /*110*/].f_1));
		unk_0x50274A7EACA3133A(Local_28[2 /*110*/], 1);
		unk_0xFF4BEB6CFF55A013(Local_28[2 /*110*/], iLocal_2550);
		func_180(Local_28[2 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x059473086913178C(Local_28[2 /*110*/], 1);
		unk_0x5C9D9A4EA475F37E(Local_28[2 /*110*/], 50f);
		StringCopy(&(Local_28[2 /*110*/].f_1), "front 1", 16);
		Local_28[2 /*110*/].f_86 = 0;
		Local_28[2 /*110*/].f_87 = 0;
		Local_28[2 /*110*/].f_42 = 17.5f;
	}
	if (unk_0xE5965CDF24F93A9F(Local_28[3 /*110*/]))
	{
		unk_0xD8B630F464FE1D6D(Local_28[3 /*110*/], &(Local_28[3 /*110*/].f_1));
		unk_0x50274A7EACA3133A(Local_28[3 /*110*/], 1);
		unk_0xFF4BEB6CFF55A013(Local_28[3 /*110*/], iLocal_2550);
		unk_0x5C9D9A4EA475F37E(Local_28[3 /*110*/], 50f);
		func_180(Local_28[3 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x059473086913178C(Local_28[3 /*110*/], 1);
		StringCopy(&(Local_28[3 /*110*/].f_1), "front 2", 16);
		Local_28[3 /*110*/].f_86 = 0;
		Local_28[3 /*110*/].f_87 = 0;
		Local_28[3 /*110*/].f_42 = 17.5f;
	}
	if (unk_0xE5965CDF24F93A9F(Local_469.f_0) && unk_0xE5965CDF24F93A9F(Local_579[3 /*8*/]))
	{
		unk_0xD8B630F464FE1D6D(Local_469.f_0, &(Local_469.f_1));
		unk_0x50274A7EACA3133A(Local_469.f_0, 1);
		unk_0xFF4BEB6CFF55A013(Local_469.f_0, iLocal_2550);
		unk_0x7DCB4594ACF18DA7(Local_469.f_0, 2);
		unk_0xBC12D08EE7559CCD(Local_469.f_0, 2, 0);
		unk_0x9521FB98DB6DDF50(Local_469.f_0, joaat("weapon_nightstick"), -1, 0, 1);
		unk_0x348A212511C78DBF(Local_469.f_0, 5);
		func_180(Local_469.f_0, 40f, 5f, 90f, -90f, 90f);
		StringCopy(&(Local_469.f_1), "sec", 16);
		Local_469.f_86 = 1;
		Local_469.f_87 = 1;
		Local_469.f_93 = 0;
		if (Global_96938.f_357 == 1)
		{
			if (!func_191(Local_469.f_0, joaat("script_task_perform_sequence"), 1))
			{
				if (unk_0x48D8C2729764DE01(203.68f, -3132.46f, 4.79f, "WORLD_HUMAN_SMOKING", 1f, 1))
				{
					iLocal_2602 = 0;
					unk_0xA888F8CC04F25CC8(&uVar2);
					unk_0xA24707688BA83CEA(0, Local_579[3 /*8*/], &cLocal_645, 786599, 0, 0, -1, -1082130432, 0, 1073741824);
					unk_0x02F1CAAC7CB77E47(0, Local_579[3 /*8*/], 0);
					unk_0x1D698ECDFF42AC58(0, 203.68f, -3132.46f, 4.79f, 1f, 0);
					unk_0xC963A45B50851768(uVar2);
					unk_0x8ACADA903FCAA42F(Local_469.f_0, uVar2);
					unk_0x7461D7C5BA953BC7(&uVar2);
				}
				else
				{
					iVar1 = 0;
				}
			}
		}
		else if (!func_191(Local_469.f_0, joaat("script_task_use_nearest_scenario_chain_to_pos"), 1))
		{
			if (unk_0x48D8C2729764DE01(162.69f, -3115.67f, 4.95f, "WORLD_HUMAN_SECURITY_SHINE_TORCH", 1f, 1))
			{
				iLocal_2602 = 1;
				unk_0x6D44636281842060(Local_469.f_0, 162.69f, -3115.67f, 4.95f, 1f, 0);
			}
			else
			{
				iVar1 = 0;
			}
		}
	}
	if (((((((((unk_0xE5965CDF24F93A9F(Local_579[0 /*8*/]) && unk_0xE5965CDF24F93A9F(Local_579[1 /*8*/])) && unk_0xE5965CDF24F93A9F(Local_579[2 /*8*/])) && unk_0xE5965CDF24F93A9F(Local_579[3 /*8*/])) && unk_0xE5965CDF24F93A9F(Local_28[1 /*110*/])) && unk_0xE5965CDF24F93A9F(Local_28[0 /*110*/])) && unk_0xE5965CDF24F93A9F(Local_28[2 /*110*/])) && unk_0xE5965CDF24F93A9F(Local_28[3 /*110*/])) && unk_0xE5965CDF24F93A9F(Local_469.f_0)) && iVar1)
	{
		return 1;
	}
	else if (bVar0)
	{
		return 0;
	}
	return 0;
}

int func_191(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x174CED88B97C78D9(uParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_192(var uParam0, int iParam1)
{
	Global_100441.f_22[iParam1] = uParam0;
}

void func_193(int iParam0, int iParam1, int iParam2)
{
	if (func_195() && func_246())
	{
		while (Global_100436 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x27F66B7FE7DB7C3A(0);
		if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				unk_0x3393D1B291D1BD1B(unk_0xE2D3D51028F0428A());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0xE5965CDF24F93A9F(iParam0))
				{
					if (unk_0x55A0C756C4A8220C(iParam0, 0))
					{
						if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iParam0, 0))
						{
							unk_0xA9F390242F9EB2E1(unk_0xE2D3D51028F0428A(), iParam0, iParam1);
							unk_0x080C97B891E2F3AA(0f, 1065353216);
							unk_0x94953C3FF0664F66(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
			}
		}
		unk_0xDE903AC1B5BBC358();
		func_194(0);
	}
}

void func_194(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&(Global_100441.f_20), 13);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_100441.f_20), 13);
	}
}

int func_195()
{
	if (Global_100441 == 10 || Global_100441 == 9)
	{
		return 1;
	}
	return 0;
}

int func_196(struct<3> Param0, float fParam3)
{
	return func_197(&(Global_106934.f_2890), Param0, fParam3, 0);
}

int func_197(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_234(uParam0))
	{
		if (func_156(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x5F8653E60ED2288E(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_233(uParam0))
		{
			unk_0x7A997A0A971D305F(Param1, 5f, 1, 0, 0, 0);
			func_232(Param1, 5f, 0);
			iVar0 = unk_0xBA715A7BEBA5A1F9(uParam0->f_12.f_66, Param1, fParam4, 1, 1, 0);
			if (unk_0xE5965CDF24F93A9F(iVar0))
			{
				Var1 = { unk_0x6B62510F212526DC(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0xA539EDE8DA5BBC22(iVar0, Param1, 0, 0, 1);
				}
				func_206(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0xD2B5B1C8FC84FE0F(uParam0->f_12.f_66) || unk_0x5C921200CA5CBF8E(uParam0->f_12.f_66))
				{
					if (!unk_0x7CBF98360C4B22E4(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0x9F65B3BAFA302A65(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0xCB09A834F0C86FBB(unk_0x15CAA6D7B11F1A7C(iVar0)))
						{
							func_205(uParam0->f_11, 1);
						}
						else if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(iVar0)))
						{
							func_205(uParam0->f_11, 2);
						}
					}
					unk_0xFA37094E2DF03E75(iVar0, 0);
					unk_0x0FCB0A306FF51ECA(iVar0, 0);
					unk_0x05EAB38F5AC8DA1D(iVar0, 1);
					func_204(iVar0, uParam0->f_11);
				}
				else if ((!func_202(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x3C57C2F07FEE34D2(unk_0x05CBA41180F5D521(), "startup_positioning"))
				{
					iVar8 = func_201(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_198(iVar8);
					}
				}
				if (((Global_100441 != 13 && Global_100441 != 10) && Global_100441 != 11) && Global_100441 != 12)
				{
					if (unk_0x2E87280918B16506(&(Global_100441.f_3)) == Global_78125)
					{
						if (uParam0->f_12.f_66 == Global_113386.f_32749.f_69[21 /*78*/].f_66)
						{
							func_150(24, 0);
							func_198(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_114(iVar0, uParam0->f_11);
				}
				unk_0xF1A23B343DFEDFD0(uParam0->f_12.f_66);
				Var1 = { unk_0x6B62510F212526DC(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_198(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_145(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xE5965CDF24F93A9F(Global_77137.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x55A0C756C4A8220C(Global_77137.f_139[iParam0], 0))
				{
					if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), Global_77137.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x2D58A6131679D82C(Global_77137.f_139[iParam0], 1, 1);
				unk_0xD59CC8123FD1A789(&(Global_77137.f_139[iParam0]));
			}
		}
		Global_77137[iParam0] = 1;
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_152(iParam0, 0)) && Global_78046.f_66 == 0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] != 0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] > 3) && (!func_199(0, Global_77137.f_555[0 /*21*/].f_12) || !func_199(1, Global_77137.f_555[0 /*21*/].f_12)))
			{
				func_153(&(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]), &Global_78046);
				Global_78124 = Global_113386.f_32749.f_5591;
			}
			func_150(iParam0, 0);
		}
	}
}

int func_199(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_200(&(Global_113386.f_32749.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_117(Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_200(var uParam0)
{
	return *uParam0;
}

int func_201(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0xE5965CDF24F93A9F(Global_77137.f_484[iVar0]) && !unk_0x55B23FE400FCEA6B(Global_77137.f_484[iVar0], 0)) && unk_0x55A0C756C4A8220C(Global_77137.f_484[iVar0], 0))
		{
			unk_0xDCA20DBA52B32EEC(iParam0, &iVar1, &iVar2);
			unk_0xDCA20DBA52B32EEC(Global_77137.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x15CAA6D7B11F1A7C(iParam0) == unk_0x15CAA6D7B11F1A7C(Global_77137.f_484[iVar0]) && unk_0x3A5087062A6DBAEF(iParam0) == unk_0x3A5087062A6DBAEF(Global_77137.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_202(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x15CAA6D7B11F1A7C(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_203(iParam0, Global_77137.f_139[38], 0))
			{
				func_198(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_203(iParam0, Global_77137.f_139[43], 1))
			{
				func_198(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0x9A39844D6003635C(unk_0xE2D3D51028F0428A(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_203(iParam0, uVar1[iVar6], 1) && func_65(unk_0x6B62510F212526DC(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_156(Param1, 0f, 0f, 0f, 0)) || unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(iParam0, 1), unk_0x6B62510F212526DC(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0xD59CC8123FD1A789(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar6++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0xE5965CDF24F93A9F(Global_77137.f_484[14]) && unk_0x55A0C756C4A8220C(iParam0, 0)) && unk_0x55A0C756C4A8220C(Global_77137.f_484[14], 0))
			{
				if (unk_0x15CAA6D7B11F1A7C(Global_77137.f_484[14]) == joaat("luxor2") && unk_0x3A5087062A6DBAEF(iParam0) == unk_0x3A5087062A6DBAEF(Global_77137.f_484[14]))
				{
					func_198(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0xE5965CDF24F93A9F(Global_77137.f_484[20]) && unk_0x55A0C756C4A8220C(iParam0, 0)) && unk_0x55A0C756C4A8220C(Global_77137.f_484[20], 0))
			{
				if (unk_0x15CAA6D7B11F1A7C(Global_77137.f_484[20]) == joaat("swift2") && unk_0x3A5087062A6DBAEF(iParam0) == unk_0x3A5087062A6DBAEF(Global_77137.f_484[20]))
				{
					func_198(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_203(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0xE5965CDF24F93A9F(iParam1) && !unk_0x55B23FE400FCEA6B(iParam1, 0)) && unk_0x55A0C756C4A8220C(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0xDCA20DBA52B32EEC(iParam0, &iVar0, &iVar1);
			unk_0xDCA20DBA52B32EEC(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_204(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xE5965CDF24F93A9F(Global_97772[iVar0]))
		{
			Global_97772[iVar0] = iParam0;
			Global_97782[iVar0] = iParam1;
			Global_97792[iVar0] = unk_0x15CAA6D7B11F1A7C(iParam0);
			if (unk_0xCB09A834F0C86FBB(Global_97792[iVar0]))
			{
				Global_97820[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_97820[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_205(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xE5965CDF24F93A9F(Global_97772[iVar0]))
		{
			if (iParam0 == 145 || Global_97782[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x15CAA6D7B11F1A7C(Global_97772[iVar0]) == func_146(iParam0, iParam1))
				{
					if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), Global_97772[iVar0], 0))
					{
						unk_0x2D58A6131679D82C(Global_97772[iVar0], 0, 1);
						unk_0xD59CC8123FD1A789(&(Global_97772[iVar0]));
						Global_97782[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_206(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_224(iParam0))
		{
			if (unk_0x2E87280918B16506(&(uParam1->f_1)) != 0)
			{
				unk_0x2C2F2F6BEE7AC7E7(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0xACF41D856B7CCB39())
			{
				unk_0xE56B65C6B89CFCF2(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, func_158(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_158(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_158(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_158(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_158(iVar2)))
				{
				}
				else
				{
					unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_158(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_158(iVar3)))
				{
				}
				else
				{
					unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_158(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, func_158(iVar4)))
					{
					}
					else
					{
						unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_158(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_158(4)))
			{
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_158(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (unk_0x0DD0BC46C4CFD6AD(iParam0, 10) != 0)
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), false);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_158(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_158(iVar5)))
				{
				}
				else
				{
					unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_158(iVar5));
				}
				iVar5++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0x077FDC1A202B9273(iParam0, 0);
			if (unk_0x0DD0BC46C4CFD6AD(iParam0, 5) != -1)
			{
				unk_0x077FDC1A202B9273(iParam0, 1);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			unk_0x401F3880D64CB7D9(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x812006F6C16BBEA2(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			unk_0x4A498F8F5DB5D526(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xD27CAD777BB60AE5(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_222(uParam1->f_5) || func_222(uParam1->f_6))
			{
			}
			else
			{
				unk_0x58DAFDEB2F46A5EA(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x952B5201CC721090(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || func_221(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_220())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0xFEF0C9A733C7B609(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_160(uParam1->f_66))
		{
			unk_0x2EB7787881686751(iParam0, 0);
		}
		else
		{
			unk_0x2EB7787881686751(iParam0, 0);
			unk_0x2EB7787881686751(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			unk_0xAFE1B52F0DE91595(iParam0, 0);
			unk_0x8C5DD298059D8BF8(iParam0, 0);
		}
		if (bParam2)
		{
			unk_0x3B2646B62E7BBE11(iParam0, uParam1->f_70);
		}
		unk_0x74FCADE93B81FD35(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xBE69E921963A86B7(iParam0, 2, BitTest(uParam1->f_77, 28));
		unk_0xBE69E921963A86B7(iParam0, 3, BitTest(uParam1->f_77, 29));
		unk_0xBE69E921963A86B7(iParam0, 0, BitTest(uParam1->f_77, 30));
		unk_0xBE69E921963A86B7(iParam0, 1, BitTest(uParam1->f_77, 31));
		unk_0x4FA753674D81BF2E(iParam0, BitTest(uParam1->f_77, 10));
		if (unk_0x8F0BC830FFCF7F2A(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xE1F8DBCF9A6E205E(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x532C99FAF70C652B(unk_0x15CAA6D7B11F1A7C(iParam0)))
			{
				if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_219(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_219(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x351E83123EFC0A15(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0xA36A3AB3D2350CCD(iParam0, 1);
			}
			else
			{
				unk_0x47B16F33DD2893CF(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_212(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x4262B4DCEADC2695(uParam1->f_66) && !unk_0xD2B5B1C8FC84FE0F(uParam1->f_66))
		{
			iVar6 = 0;
			while (iVar6 <= 11)
			{
				if (BitTest(uParam1->f_77, func_158(iVar6 + 1)))
				{
					if (!unk_0xC49329A4E58D025B(iParam0, iVar6 + 1))
					{
						unk_0x45A6EA15139A0C54(iParam0, iVar6 + 1, 0);
					}
				}
				else if (unk_0xC49329A4E58D025B(iParam0, iVar6 + 1))
				{
					unk_0x45A6EA15139A0C54(iParam0, iVar6 + 1, 1);
				}
				iVar6++;
			}
		}
		if ((unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("sheava") || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("omnis")) || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("le7b"))
		{
			if (unk_0x0DD0BC46C4CFD6AD(iParam0, 0) == -1)
			{
				unk_0x45A6EA15139A0C54(iParam0, 1, 0);
			}
		}
		if (((func_207() && unk_0xD6F7D32A98E07F93(uParam1->f_66)) && unk_0x03377F11051BC47F(iParam0)) && !unk_0x7010991FDA59D3F2(iParam0, joaat("avenger")))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (BitTest(uParam1->f_77, 22))
				{
					unk_0x3739DEED4A756E69(iParam0, 2);
				}
				else
				{
					unk_0x3739DEED4A756E69(iParam0, 3);
				}
			}
			else
			{
				unk_0x3739DEED4A756E69(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			unk_0x2C8C3211219C37BD(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x2C8C3211219C37BD(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_207()
{
	if ((((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_210(7))
	{
		if (func_209(Global_2703735.f_4.f_16) || func_208(Global_2703735.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_208(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1888862[iVar0 /*120*/].f_77.f_42 != 0;
	}
	return 0;
}

int func_209(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_33(iParam0, 9);
	}
	return 0;
}

bool func_210(int iParam0)
{
	return func_211(&(Global_2703735.f_169), iParam0);
}

var func_211(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_212(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x55A0C756C4A8220C(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x03AC3319D1B50189(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x3C1BCE3438ECBFC0(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0x6C6188D0F8AB739A(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0x6C6188D0F8AB739A(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x300BFAA8E2A36A8E(*iParam0, 255);
				}
				else
				{
					unk_0x300BFAA8E2A36A8E(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0x6C6188D0F8AB739A(*iParam0, iVar1, false);
			}
		}
		else if (unk_0x0DD0BC46C4CFD6AD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x0CF999545677298A(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					unk_0x0061B7C9351B41ED(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar1 == 24)
				{
					unk_0x0061B7C9351B41ED(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_217(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					unk_0x0061B7C9351B41ED(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_216(unk_0x15CAA6D7B11F1A7C(*iParam0), 1) && unk_0x0DD0BC46C4CFD6AD(*iParam0, 24) != func_215(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x0061B7C9351B41ED(*iParam0, 24, func_215(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_214(iParam0);
	if (func_213(*iParam0))
	{
		unk_0xFF74DEC3F62D3654(*iParam0, 1);
		unk_0x05EAB38F5AC8DA1D(*iParam0, 1);
	}
	return 1;
}

int func_213(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0)) && unk_0x03AC3319D1B50189(iParam0) > 0)
	{
		unk_0x3C1BCE3438ECBFC0(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x0DD0BC46C4CFD6AD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xAC1327F86AC1314A(iParam0, iVar1, unk_0x0DD0BC46C4CFD6AD(iParam0, iVar1)), 32);
				iVar2 = unk_0x2E87280918B16506(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x2E87280918B16506("MNU_CAGE") || iVar2 == unk_0x2E87280918B16506("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_214(var uParam0)
{
	switch (unk_0x15CAA6D7B11F1A7C(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x0DD0BC46C4CFD6AD(*uParam0, 4) == 0)
			{
				unk_0x0061B7C9351B41ED(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x0CF999545677298A(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			unk_0x0061B7C9351B41ED(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_215(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		switch (unk_0x15CAA6D7B11F1A7C(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x6B83F5AE0478286F(iParam0, 38);
		iVar1 = unk_0x6B83F5AE0478286F(iParam0, 24);
		fVar2 = (unk_0xBBDA792448DB5A89(iParam1 + 1) / unk_0xBBDA792448DB5A89(iVar0));
		iVar3 = (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_216(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14731)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14732)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14730)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14733)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14735)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14734)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_19186)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_19188)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_19192)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_19189)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_19196)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_19194)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_19199)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_21144)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_21145)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_217(int iParam0, int iParam1, int iParam2)
{
	if (!func_218() && unk_0x00834EAC4A96E010(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_218()
{
	return 0;
}

void func_219(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x03AC3319D1B50189(iParam0) > 0)
	{
		unk_0x3C1BCE3438ECBFC0(iParam0, 0);
		iVar0 = unk_0x0DD0BC46C4CFD6AD(iParam0, 24);
		iVar1 = unk_0xCCEE7D38FC5D9FD6(iParam0, 24);
		unk_0xE19D99912C7661C6(iParam0, uParam1);
		if (unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("tornado6") || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x0CF999545677298A(iParam0, 24);
		}
		else
		{
			unk_0x0061B7C9351B41ED(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_220()
{
	return unk_0x014D8C5910A5B01B(joaat("mpindependence"));
}

int func_221(int iParam0)
{
	var uVar0;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (unk_0x6BD06F4780EAC5DD("MPBitset", 3))
			{
				if (unk_0xF2549FF74D64B720(iParam0, "MPBitset"))
				{
					uVar0 = unk_0xC3B76795ECBDEF41(iParam0, "MPBitset");
				}
				return BitTest(uVar0, 4);
			}
		}
	}
	return 0;
}

int func_222(int iParam0)
{
	if (!func_218() && func_223(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return 1;
			break;
	}
	return 0;
}

int func_224(int iParam0)
{
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!func_230(unk_0x9E2D6C50374FCFA9(), -1))
		{
			iParam0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		}
	}
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	if (unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		return 0;
	}
	if (func_226(unk_0x9E2D6C50374FCFA9()) == 3)
	{
		if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (func_225(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_225(int iParam0)
{
	if (unk_0x6BD06F4780EAC5DD("FMDeliverableID", 3))
	{
		if (unk_0xF2549FF74D64B720(iParam0, "FMDeliverableID"))
		{
			return unk_0xC3B76795ECBDEF41(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_226(int iParam0)
{
	if (func_229(iParam0) == 233)
	{
		return func_227(iParam0);
	}
	return -1;
}

int func_227(int iParam0)
{
	if (func_228(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_228(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_229(int iParam0)
{
	if (func_228(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_230(var uParam0, int iParam1)
{
	var uVar0;
	
	if (func_231(uParam0, 1, 1))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0x407E03586628E458(uParam0), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(uParam0), 0);
			if (unk_0x55A0C756C4A8220C(uVar0, 0))
			{
				if (unk_0xE2D3D51028F0428A() == unk_0xAB793EA186AB8DAA(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_231(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x0D01086B38EC256F(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x3583A42587543334(uParam0))
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

void func_232(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_145(&(Global_77137.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x987A5F1E1A67E3C0(Param0, Global_77137.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_198(iVar0);
			}
		}
		iVar0++;
	}
}

int func_233(var uParam0)
{
	if (func_234(uParam0))
	{
		if (unk_0x0152AA00FA3130F1(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_234(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_117(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_65(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_235()
{
	return func_233(&(Global_106934.f_2890));
}

int func_236(var uParam0)
{
	if (func_247(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_237()
{
	return Global_106934.f_2890.f_12.f_66;
}

int func_238()
{
	return func_234(&(Global_106934.f_2890));
}

int func_239(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xBCC73B466E2B2350(iParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_763)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			if (uParam0->f_763[iVar0 /*5*/].f_4 == iParam1)
			{
				uParam0->f_763[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_763[iVar0 /*5*/].f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x62EB051F5ED6DD41(iParam1);
		uParam0->f_763[iVar1 /*5*/] = 1;
		uParam0->f_763[iVar1 /*5*/].f_3 = unk_0x320D1840B6DAA1CC();
		uParam0->f_763[iVar1 /*5*/].f_4 = iParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_240(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xACC32B78196FBC2A(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_273)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			if (unk_0x3C57C2F07FEE34D2(uParam0->f_273[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_273[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_273[iVar0 /*5*/].f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x8FB472886552D737(sParam1);
		uParam0->f_273[iVar1 /*5*/] = 1;
		uParam0->f_273[iVar1 /*5*/].f_3 = unk_0x320D1840B6DAA1CC();
		uParam0->f_273[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_241(var uParam0, char[4] cParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xACC32B78196FBC2A(cParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (unk_0x3C57C2F07FEE34D2(uParam0->f_374[iVar0 /*5*/].f_4, cParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x70F260358D1A42C4(cParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = unk_0x320D1840B6DAA1CC();
		uParam0->f_374[iVar1 /*5*/].f_4 = cParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

void func_242(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_151[iVar0 /*5*/])
		{
			uParam0->f_151[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_202[iVar0 /*7*/])
		{
			uParam0->f_202[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			uParam0->f_273[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			uParam0->f_374[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*6*/])
		{
			uParam0->f_475[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_656[iVar0 /*6*/])
		{
			uParam0->f_656[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_687[iVar0 /*7*/])
		{
			uParam0->f_687[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			uParam0->f_737[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			uParam0->f_763[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_904[iVar0 /*5*/])
		{
			uParam0->f_904[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_955[iVar0 /*5*/])
		{
			uParam0->f_955[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_893)
	{
		uParam0->f_893.f_2 = 1;
	}
	if (uParam0->f_885)
	{
		uParam0->f_885.f_2 = 1;
	}
	if (uParam0->f_889)
	{
		uParam0->f_889.f_2 = 1;
	}
}

int func_243(var uParam0, struct<3> Param1, float fParam4, int iParam5)
{
	if (func_244(Param1) || fParam4 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_893)
	{
		if (func_156(uParam0->f_893.f_4, Param1, 0) && uParam0->f_893.f_10 == fParam4)
		{
			uParam0->f_893.f_2 = 0;
			if (!uParam0->f_893.f_1)
			{
				uParam0->f_1007 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	unk_0xCA60DF1D01DBD440(Param1, fParam4, iParam5);
	uParam0->f_893 = 1;
	uParam0->f_893.f_3 = unk_0x320D1840B6DAA1CC();
	uParam0->f_893.f_4 = { Param1 };
	uParam0->f_893.f_7 = { 0f, 0f, 0f };
	uParam0->f_893.f_10 = fParam4;
	uParam0->f_1007 = 1;
	return 1;
}

int func_244(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_245(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 183.533f, -2946.199f, 5.5113f };
			*uParam2 = 177.8164f;
			break;
		
		case 1:
			*uParam1 = { 692.067f, -1004.812f, 21.9059f };
			*uParam2 = 359.5735f;
			break;
	}
}

bool func_246()
{
	return BitTest(Global_100441.f_20, 13);
}

int func_247(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_1007)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (unk_0x0152AA00FA3130F1((uParam0[iVar1 /*5*/])->f_4))
					{
						(uParam0[iVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[iVar1 /*5*/])->f_2)
				{
					if ((uParam0[iVar1 /*5*/])->f_1)
					{
						unk_0xF1A23B343DFEDFD0((uParam0[iVar1 /*5*/])->f_4);
						func_249(uParam0[iVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_273[iVar1 /*5*/])
			{
				if (!uParam0->f_273[iVar1 /*5*/].f_1)
				{
					if (unk_0x6F940C2636C076AD(uParam0->f_273[iVar1 /*5*/].f_4))
					{
						uParam0->f_273[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_273[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_273[iVar1 /*5*/].f_1)
					{
						unk_0xAFC1FBF3F6AE7B9A(uParam0->f_273[iVar1 /*5*/].f_4);
						func_249(&(uParam0->f_273[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_374[iVar1 /*5*/])
			{
				if (!uParam0->f_374[iVar1 /*5*/].f_1)
				{
					if (unk_0xBD3CEA9CD36E271E(uParam0->f_374[iVar1 /*5*/].f_4))
					{
						uParam0->f_374[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_374[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_374[iVar1 /*5*/].f_1)
					{
						unk_0x10F7BFE3A88CB99B(uParam0->f_374[iVar1 /*5*/].f_4);
						func_249(&(uParam0->f_374[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_656[iVar1 /*6*/])
			{
				if (!uParam0->f_656[iVar1 /*6*/].f_1)
				{
					if (unk_0x0347CCBD719C8ADC(uParam0->f_656[iVar1 /*6*/].f_5))
					{
						uParam0->f_656[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_656[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_656[iVar1 /*6*/].f_1)
					{
						unk_0x705B098546DEB18A(&(uParam0->f_656[iVar1 /*6*/].f_5));
						func_249(&(uParam0->f_656[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if (uParam0->f_475[iVar1 /*6*/])
			{
				if (!uParam0->f_475[iVar1 /*6*/].f_1)
				{
					if (unk_0xF777CAA43F4B281A(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4))
					{
						uParam0->f_475[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_475[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_475[iVar1 /*6*/].f_1)
					{
						unk_0xA72858C94E70296C(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
						func_249(&(uParam0->f_475[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_202[iVar1 /*7*/])
			{
				if (!uParam0->f_202[iVar1 /*7*/].f_1)
				{
					if (unk_0xC870CD3D6D40CB09(uParam0->f_202[iVar1 /*7*/].f_4))
					{
						uParam0->f_202[iVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_202[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_202[iVar1 /*7*/].f_1)
					{
						unk_0x315D54141149C1B6(uParam0->f_202[iVar1 /*7*/].f_4);
						func_249(&(uParam0->f_202[iVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_151[iVar1 /*5*/])
			{
				if (!uParam0->f_151[iVar1 /*5*/].f_1)
				{
					if (unk_0x08A9BDFE90D7CFE2(uParam0->f_151[iVar1 /*5*/].f_4))
					{
						uParam0->f_151[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_151[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_151[iVar1 /*5*/].f_1)
					{
						unk_0x72DBC5D8E674E2ED(uParam0->f_151[iVar1 /*5*/].f_4);
						func_249(&(uParam0->f_151[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_737[iVar1 /*5*/])
			{
				if (!uParam0->f_737[iVar1 /*5*/].f_1)
				{
					if (unk_0x70F555A7CCF10659(uParam0->f_737[iVar1 /*5*/].f_4, 0, -1))
					{
						uParam0->f_737[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_737[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_737[iVar1 /*5*/].f_1)
					{
						unk_0xE24865B69D79521B(uParam0->f_737[iVar1 /*5*/].f_4);
						func_249(&(uParam0->f_737[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (uParam0->f_763[iVar1 /*5*/])
			{
				if (!uParam0->f_763[iVar1 /*5*/].f_1)
				{
					if (unk_0xEA02B859DE237081(uParam0->f_763[iVar1 /*5*/].f_4))
					{
						uParam0->f_763[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_763[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_763[iVar1 /*5*/].f_1)
					{
						unk_0xAED5221F05DAE55E(uParam0->f_763[iVar1 /*5*/].f_4);
						func_249(&(uParam0->f_763[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!unk_0xACC32B78196FBC2A(uParam0->f_687[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[iVar1 /*7*/])
				{
					iVar2 = unk_0x1D4A4F0E81BE4F45(uParam0->f_687[iVar1 /*7*/].f_5);
					if (!uParam0->f_687[iVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_687[iVar1 /*7*/].f_1 = 1;
								break;
							
							case 0:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							
							case 3:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								func_249(&(uParam0->f_687[iVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								unk_0x553C3A3B08976718(uParam0->f_687[iVar1 /*7*/].f_5);
								uParam0->f_687[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (unk_0xEA02B859DE237081(uParam0->f_687[iVar1 /*7*/].f_6))
				{
					uParam0->f_687[iVar1 /*7*/].f_5 = unk_0xFD6CEE56513203FB(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = unk_0x320D1840B6DAA1CC();
					uParam0->f_687[iVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_687[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_687[iVar1 /*7*/])
					{
						if (uParam0->f_687[iVar1 /*7*/].f_1)
						{
							unk_0x553C3A3B08976718(uParam0->f_687[iVar1 /*7*/].f_5);
							func_249(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_249(&(uParam0->f_687[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_904[iVar1 /*5*/])
			{
				if (!uParam0->f_904[iVar1 /*5*/].f_1)
				{
					if (unk_0x632B7D3B9B85016A(uParam0->f_904[iVar1 /*5*/].f_4))
					{
						uParam0->f_904[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_904[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_904[iVar1 /*5*/].f_1)
					{
						unk_0xED4AF6B9266B55C9(uParam0->f_904[iVar1 /*5*/].f_4);
						func_249(&(uParam0->f_904[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_955[iVar1 /*5*/])
			{
				if (!uParam0->f_955[iVar1 /*5*/].f_1)
				{
					if (unk_0x3E3727CDACEE36AC(uParam0->f_955[iVar1 /*5*/].f_4))
					{
						uParam0->f_955[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_955[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_955[iVar1 /*5*/].f_1)
					{
						func_249(&(uParam0->f_955[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_779)
		{
			if (uParam0->f_779[iVar1 /*5*/])
			{
				if (!uParam0->f_779[iVar1 /*5*/].f_1)
				{
					if (unk_0x01896B71C5AC966E(iVar1))
					{
						uParam0->f_779[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_779[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_779[iVar1 /*5*/].f_1)
					{
						unk_0xC511E7C272201CF7(iVar1, 1);
						func_249(&(uParam0->f_779[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_885)
		{
			if (!uParam0->f_885.f_1)
			{
				if (unk_0x51B6C2EF8DBE2E1A())
				{
					uParam0->f_885.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_885.f_2)
			{
				if (uParam0->f_885.f_1)
				{
					unk_0xE6239CCB98B8AB66();
					func_249(&(uParam0->f_885));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_889)
		{
			if (!uParam0->f_889.f_1)
			{
				if (unk_0x7CAE494C630022D5())
				{
					uParam0->f_889.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_889.f_2)
			{
				if (uParam0->f_889.f_1)
				{
					unk_0xF45E94C02FE9AB19();
					func_249(&(uParam0->f_889));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_893 && unk_0x2981C54770E1D19C())
		{
			if (!uParam0->f_893.f_1)
			{
				if (unk_0x8A6AB093D1EE5368())
				{
					uParam0->f_893.f_1 = 1;
					if (uParam0->f_1008)
					{
						unk_0x5C65DDDC219B3AA5(unk_0xE2D3D51028F0428A(), 0);
						func_248(uParam0);
						uParam0->f_1008 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_893.f_2)
			{
				unk_0xEE3A19A84A10F8B9();
				func_249(&(uParam0->f_893));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_981[iVar1 /*5*/])
			{
				if (!uParam0->f_981[iVar1 /*5*/].f_1)
				{
					if (unk_0x9D4AFED2949F7082(uParam0->f_981[iVar1 /*5*/].f_4))
					{
						uParam0->f_981[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_981[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_981[iVar1 /*5*/].f_1)
					{
						func_249(&(uParam0->f_981[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1 = (iVar1 + 1);
		}
		if (bVar0)
		{
			uParam0->f_1007 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_248(var uParam0)
{
	if (unk_0x2981C54770E1D19C())
	{
		unk_0xEE3A19A84A10F8B9();
		func_249(&(uParam0->f_893));
	}
}

void func_249(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_250()
{
	if (func_251())
	{
		func_8(1);
		unk_0xAFBDF6A5E54114C1();
	}
}

int func_251()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_100441 == 7 || Global_100441 == 8)
	{
		return 1;
	}
	return 0;
}

void func_252()
{
	func_270(&(Local_1693[1 /*8*/]), 68936, "AI Controller");
	func_270(&(Local_1693[0 /*8*/]), 67301, "Dialogue");
	func_270(&(Local_1693[3 /*8*/]), 66328, "Alarms & Wanted Level");
	func_270(&(Local_1693[4 /*8*/]), 65776, "Music Manager");
}

void func_253(var uParam0)
{
	if (!func_256(uParam0))
	{
		if (uParam0->f_1 <= 4)
		{
			if ((unk_0x83565BF2F64AA92E(&cLocal_626) || unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0)) || func_22(&(Local_1693[3 /*8*/])))
			{
				unk_0x1CF3F44FC2EB9F99("JHP1A_ATTACK");
				func_255(uParam0, 5, 0);
			}
		}
		switch (uParam0->f_1)
		{
			case 1:
				if (func_108(unk_0xE2D3D51028F0428A(), 137.7f, -3092.81f, 4.9f, 1) < 60f)
				{
					unk_0x1CF3F44FC2EB9F99("JHP1A_START");
					func_255(uParam0, 2, 0);
				}
				break;
			
			case 2:
				if (iLocal_2598 == 3 || iLocal_2598 == 2)
				{
					unk_0x1CF3F44FC2EB9F99("JHP1A_WAREHOUSE");
					func_255(uParam0, 3, 0);
				}
				break;
			
			case 3:
				if (iLocal_2598 == 6 || iLocal_2598 == 9)
				{
					unk_0x1CF3F44FC2EB9F99("JHP1A_VAN");
					func_255(uParam0, 4, 0);
				}
				break;
			
			case 4:
				if (!unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
				{
					if (iLocal_2598 == 9 && func_108(unk_0xE2D3D51028F0428A(), 137.7f, -3092.81f, 4.9f, 1) >= 500f)
					{
						if (unk_0x63B063064DC08617("JHP1A_RADIO_1"))
						{
							unk_0x1CF3F44FC2EB9F99("JHP1A_RADIO_1");
							func_254(uParam0);
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0x83565BF2F64AA92E(&cLocal_626) && unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0)) && iLocal_2594)
				{
					func_255(uParam0, 6, 0);
				}
				break;
			
			case 6:
				if (!unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
				{
					if (unk_0x63B063064DC08617("JHP1A_RADIO_2"))
					{
						unk_0x1CF3F44FC2EB9F99("JHP1A_RADIO_2");
						func_255(uParam0, 6, 0);
						func_254(uParam0);
					}
				}
				break;
			}
	}
	if (func_256(uParam0))
	{
		unk_0x8576657A629C4B0A(1f);
	}
}

void func_254(var uParam0)
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = unk_0x320D1840B6DAA1CC();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

void func_255(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = unk_0x320D1840B6DAA1CC();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_256(var uParam0)
{
	if (*uParam0 == 4)
	{
		return 1;
	}
	return 0;
}

void func_257(var uParam0)
{
	if (!func_256(uParam0))
	{
		switch (uParam0->f_1)
		{
			case 1:
				func_255(uParam0, 2, 2000);
				break;
			
			case 2:
				if (unk_0x3E3727CDACEE36AC(&cLocal_626))
				{
					unk_0x0EB18A2EDD6957A4(&cLocal_626, 0);
					func_260(&cLocal_2375, Local_642, 30f, -1, 500, 1, 0);
					StringCopy(&cLocal_2375, "", 32);
					func_255(uParam0, 3, 5000);
				}
				break;
			
			case 3:
				func_258(&Local_469, 3, 1, "ALARM EVENT SET IT", 1, 0);
				unk_0x007D28B99DF625B1(unk_0x9E2D6C50374FCFA9(), 2, 0);
				unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
				unk_0xC0F70A3CDEC87ECE(2);
				unk_0xF0CA50AC5D6CFD41(unk_0x9E2D6C50374FCFA9(), 0);
				unk_0x3B8C20EF19A49C3E(0);
				unk_0xB2CC2A0592C4EFCF(unk_0x9E2D6C50374FCFA9());
				unk_0xEC1FA12F2050BD84(unk_0x9E2D6C50374FCFA9());
				uParam0->f_2 = unk_0x320D1840B6DAA1CC() + 15000;
				func_255(uParam0, 4, 0);
				break;
			
			case 4:
				if (unk_0x320D1840B6DAA1CC() > uParam0->f_2)
				{
					unk_0xF0CA50AC5D6CFD41(unk_0x9E2D6C50374FCFA9(), 1);
					unk_0x3B8C20EF19A49C3E(1);
					unk_0xC0F70A3CDEC87ECE(5);
					iLocal_2594 = 1;
					func_254(uParam0);
				}
				unk_0xB2CC2A0592C4EFCF(unk_0x9E2D6C50374FCFA9());
				unk_0xEC1FA12F2050BD84(unk_0x9E2D6C50374FCFA9());
				break;
			}
	}
}

int func_258(int iParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, bool bParam5)
{
	return func_259(iParam0, iParam1, sParam3, 0f, 0f, 0f, 0, bParam2, iParam4, bParam5);
}

int func_259(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (func_181(*uParam0))
	{
		if (!bParam7 || iParam1 >= uParam0->f_5)
		{
			uParam0->f_38 = unk_0x320D1840B6DAA1CC();
			if (iParam1 != uParam0->f_5 || !unk_0x3C57C2F07FEE34D2(&(uParam0->f_9), sParam2))
			{
				uParam0->f_6 = uParam0->f_5;
				uParam0->f_5 = iParam1;
				uParam0->f_17 = { uParam0->f_9 };
				StringCopy(&(uParam0->f_9), sParam2, 32);
				if (bParam9)
				{
					uParam0->f_36 = 1;
					uParam0->f_35 = 0;
				}
				else
				{
					uParam0->f_36 = 0;
					uParam0->f_35 = uParam8;
				}
				uParam0->f_47 = 0;
				uParam0->f_46 = 0;
				uParam0->f_48 = 0;
				uParam0->f_37 = unk_0x320D1840B6DAA1CC();
				if (!func_244(Param3))
				{
					uParam0->f_88 = { Param3 };
				}
				if (iParam6 != 0 && unk_0xE5965CDF24F93A9F(iParam6))
				{
					uParam0->f_91 = iParam6;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_260(char* sParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<32> Var0;
	
	Var0.f_0 = -1;
	StringCopy(&(Var0.f_1), sParam0, 64);
	StringCopy(&(Var0.f_17), "", 24);
	Var0.f_28 = iParam5;
	Var0.f_26 = fParam4;
	Var0.f_29 = iParam6;
	Var0.f_30 = iParam7;
	Var0.f_31 = iParam8;
	Var0.f_23 = { Param1 };
	func_261(&Var0, 0);
}

int func_261(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if ((unk_0xACC32B78196FBC2A(&(uParam0->f_1)) && *uParam0 != -1) && (!unk_0xE5965CDF24F93A9F(Local_28[*uParam0 /*110*/]) || unk_0xF68107C40359970C(Local_28[*uParam0 /*110*/])))
	{
		return 0;
	}
	while (iVar0 != -1 && !unk_0xACC32B78196FBC2A(&(Local_1734[iVar0 /*32*/].f_1)))
	{
		iVar0++;
		if (iVar0 > (Local_1734.f_0 - 1))
		{
			iVar0 = -1;
		}
	}
	if (iVar0 != -1)
	{
		if (*uParam0 == -1 || (unk_0xACC32B78196FBC2A(iParam1) || unk_0x3C57C2F07FEE34D2(iParam1, &(uParam0->f_17))))
		{
			Local_1734[iVar0 /*32*/] = *uParam0;
			Local_1734[iVar0 /*32*/].f_1 = { uParam0->f_1 };
			if (*uParam0 != -1)
			{
				Local_1734[iVar0 /*32*/].f_23 = { unk_0x6B62510F212526DC(Local_28[*uParam0 /*110*/], 1) };
			}
			else
			{
				Local_1734[iVar0 /*32*/].f_23 = { uParam0->f_23 };
			}
			Local_1734[iVar0 /*32*/].f_26 = uParam0->f_26;
			Local_1734[iVar0 /*32*/].f_28 = uParam0->f_28;
			Local_1734[iVar0 /*32*/].f_29 = uParam0->f_29;
			Local_1734[iVar0 /*32*/].f_27 = unk_0x320D1840B6DAA1CC();
			Local_1734[iVar0 /*32*/].f_30 = uParam0->f_30;
			Local_1734[iVar0 /*32*/].f_31 = uParam0->f_31;
			iVar1 = 1;
		}
		else
		{
			iVar1 = 0;
		}
		*uParam0 = -1;
		StringCopy(&(uParam0->f_1), "", 64);
		uParam0->f_23 = { 0f, 0f, 0f };
		uParam0->f_26 = 0f;
		uParam0->f_28 = 0;
		uParam0->f_29 = 0;
		uParam0->f_27 = 0;
		uParam0->f_30 = 0;
		uParam0->f_31 = 0;
		return iVar1;
	}
	return 0;
}

void func_262(var uParam0)
{
	char cVar0[24];
	bool bVar6;
	struct<3> Var7;
	
	if (!func_256(uParam0))
	{
		if (func_49())
		{
			iLocal_2549 = -1;
		}
		else if (iLocal_2549 == -1)
		{
			iLocal_2549 = unk_0x320D1840B6DAA1CC();
			iLocal_2575 = -1;
			iLocal_2576 = 1;
		}
		if (iLocal_2553 != -1 && !unk_0xACC32B78196FBC2A(&Local_2555))
		{
			if (((Local_28[iLocal_2553 /*110*/] != 0 && unk_0xE5965CDF24F93A9F(Local_28[iLocal_2553 /*110*/])) && !unk_0xF68107C40359970C(Local_28[iLocal_2553 /*110*/])) && !unk_0xB6F838C7E14CCB73(Local_28[iLocal_2553 /*110*/]))
			{
				if (!unk_0x32DCDA1B2F8A0694(Local_28[iLocal_2553 /*110*/]))
				{
					if (func_49())
					{
						if (iLocal_2565 && (iLocal_2576 || iLocal_2554 > iLocal_2575))
						{
							if (bLocal_2577)
							{
								iLocal_2580 = iLocal_2570;
								iLocal_2581 = iLocal_2575;
								MemCopy(&Local_2582, {func_269()}, 4);
								MemCopy(&Local_2586, {func_268()}, 4);
								iLocal_2590 = iLocal_2576;
								bLocal_2591 = iLocal_2578;
							}
							if (iLocal_2566)
							{
								func_11();
							}
							else
							{
								func_46();
							}
						}
					}
					if (func_48())
					{
						if ((unk_0x320D1840B6DAA1CC() - iLocal_2549) > iLocal_2563)
						{
							if (func_267(iLocal_2553))
							{
								MemCopy(&cVar0, {Local_622}, 6);
							}
							else
							{
								StringCopy(&cVar0, "SOL1AUD", 24);
							}
							switch (iLocal_2553)
							{
								case 0:
									func_45(&uLocal_2383, 4, Local_28[0 /*110*/], "JHP1A_FOREMAN", 0, 1);
									break;
								
								case 1:
									func_45(&uLocal_2383, 5, Local_28[1 /*110*/], "JHP1A_FOREMAN2", 0, 1);
									break;
								
								case 2:
									func_45(&uLocal_2383, 4, Local_28[2 /*110*/], "CONSTRUCTION1", 0, 1);
									break;
								
								case 3:
									func_45(&uLocal_2383, 3, Local_28[3 /*110*/], "CONSTRUCTION2", 0, 1);
									break;
							}
							if (unk_0xACC32B78196FBC2A(&cLocal_2559))
							{
								if (func_266(&uLocal_2383, &cVar0, &Local_2555, 8, 0, 0, 0))
								{
									bVar6 = true;
								}
							}
							else if (func_265(&uLocal_2383, &cVar0, &Local_2555, &cLocal_2559, 8, 0, 0))
							{
								bVar6 = true;
							}
							if (bVar6)
							{
								func_261(&(Local_28[iLocal_2553 /*110*/].f_50), &Local_2555);
								iLocal_2575 = iLocal_2554;
								iLocal_2576 = iLocal_2567;
								bLocal_2577 = iLocal_2569;
								iLocal_2578 = iLocal_2568;
								iLocal_2553 = -1;
								iLocal_2554 = -1;
								StringCopy(&Local_2555, "", 16);
								iLocal_2563 = 0;
								fLocal_2564 = 9999999f;
								iLocal_2565 = 0;
								iLocal_2566 = 0;
								iLocal_2567 = 1;
								iLocal_2569 = 0;
								iLocal_2568 = 0;
							}
						}
					}
				}
			}
			else
			{
				iLocal_2553 = -1;
				iLocal_2554 = -1;
				StringCopy(&Local_2555, "", 16);
				iLocal_2563 = 0;
				fLocal_2564 = 9999999f;
				iLocal_2565 = 0;
				iLocal_2566 = 0;
				iLocal_2567 = 1;
				iLocal_2568 = 0;
			}
		}
		if (((func_49() && iLocal_2570 != -1) && iLocal_2578) && !unk_0xACC32B78196FBC2A(&cLocal_2571))
		{
			Var7 = { unk_0x6B62510F212526DC(Local_28[iLocal_2570 /*110*/], 1) };
			if (func_108(unk_0xE2D3D51028F0428A(), Var7, 1) >= 25f)
			{
				iLocal_2580 = iLocal_2570;
				iLocal_2581 = iLocal_2575;
				MemCopy(&Local_2582, {func_269()}, 4);
				MemCopy(&Local_2586, {func_268()}, 4);
				iLocal_2590 = iLocal_2576;
				bLocal_2591 = iLocal_2578;
				func_11();
				iLocal_2570 = -1;
				iLocal_2575 = -1;
				StringCopy(&cLocal_2571, "", 16);
				iLocal_2576 = 0;
				iLocal_2578 = 0;
			}
		}
		if (iLocal_2580 != -1 && !unk_0xACC32B78196FBC2A(&Local_2582))
		{
			if (Local_28[iLocal_2580 /*110*/].f_5 > iLocal_2581)
			{
				iLocal_2580 = -1;
				iLocal_2581 = -1;
				StringCopy(&Local_2582, "", 16);
				StringCopy(&Local_2586, "", 16);
				iLocal_2590 = 1;
			}
		}
		if (iLocal_2553 == -1 && unk_0xACC32B78196FBC2A(&Local_2555))
		{
			if (func_48() && (unk_0x320D1840B6DAA1CC() - iLocal_2549) > 10000)
			{
				if (iLocal_2580 != -1 && !unk_0xACC32B78196FBC2A(&Local_2582))
				{
					func_264(iLocal_2580, &Local_2582, iLocal_2581, 0, 0, iLocal_2590, 0, 1, &Local_2586, bLocal_2591);
					iLocal_2580 = -1;
					iLocal_2581 = -1;
					StringCopy(&Local_2582, "", 16);
					StringCopy(&Local_2586, "", 16);
					iLocal_2590 = 1;
				}
			}
		}
	}
	func_263(bLocal_2591);
}

void func_263(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_264(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	float fVar0;
	bool bVar1;
	
	fVar0 = func_107(Local_28[iParam0 /*110*/], unk_0xE2D3D51028F0428A(), 1);
	if ((iParam2 > iLocal_2554 || iParam2 == 4) || ((iParam2 == iLocal_2554 && (fVar0 < fLocal_2564 || (func_267(iParam0) && !func_267(iLocal_2553)))) && iParam2 != 5))
	{
		switch (iParam2)
		{
			case 0:
				if (fVar0 < 20f)
				{
					bVar1 = true;
				}
				break;
			
			default:
				if (fVar0 < 40f)
				{
					bVar1 = true;
				}
				break;
		}
		if (bVar1)
		{
			iLocal_2553 = iParam0;
			iLocal_2554 = iParam2;
			StringCopy(&Local_2555, sParam1, 16);
			StringCopy(&cLocal_2559, sParam8, 16);
			fLocal_2564 = fVar0;
			iLocal_2565 = iParam3;
			iLocal_2566 = iParam4;
			iLocal_2563 = iParam6;
			iLocal_2567 = iParam5;
			iLocal_2569 = iParam7;
			iLocal_2568 = iParam9;
			return 1;
		}
	}
	return 0;
}

bool func_265(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_44(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 1;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_29(sParam2, iParam4, 0);
}

bool func_266(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_44(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_29(sParam2, iParam3, 0);
}

int func_267(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		return 1;
	}
	return 0;
}

struct<6> func_268()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		iVar6 = unk_0xBEE29398902B0435();
		iVar6 = (iVar6 + Global_22615);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xE73671E3D37CF79E(&(Global_20473[iVar7 /*6*/])))
			{
				return Global_20473[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xE73671E3D37CF79E(&(Global_20473[iVar8 /*6*/])))
					{
						return Global_20473[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_20473[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_269()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		return Global_21224;
	}
	return Var0;
}

int func_270(var uParam0, int iParam1, char* sParam2)
{
	if (*uParam0 != -1)
	{
		return 0;
	}
	*uParam0 = 0;
	uParam0->f_3 = sParam2;
	uParam0->f_7 = iParam1;
	return 1;
}

void func_271(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar5;
	bool bVar6;
	
	if (!func_256(uParam0))
	{
		bLocal_2595 = true;
		if (!iLocal_2593)
		{
			if (func_183())
			{
				iLocal_2593 = 1;
				iLocal_2596 = unk_0x320D1840B6DAA1CC();
			}
		}
		else if ((unk_0x320D1840B6DAA1CC() - iLocal_2596) > 3000)
		{
			iLocal_2593 = 0;
			iLocal_2596 = -1;
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (func_181(Local_28[iVar0 /*110*/]))
			{
				func_291(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_181(Local_469.f_0))
		{
			func_291(&Local_469);
		}
		iVar1 = 0;
		while (iVar1 < Local_1734.f_0)
		{
			if (!unk_0xACC32B78196FBC2A(&(Local_1734[iVar1 /*32*/].f_1)) && Local_1734[iVar1 /*32*/].f_27 != -1)
			{
				if (Local_1734[iVar1 /*32*/].f_28 == -1 || (unk_0x320D1840B6DAA1CC() - Local_1734[iVar1 /*32*/].f_27) < Local_1734[iVar1 /*32*/].f_28)
				{
					if (Local_1734[iVar1 /*32*/].f_29 <= 0 || (unk_0x320D1840B6DAA1CC() - Local_1734[iVar1 /*32*/].f_27) > Local_1734[iVar1 /*32*/].f_29)
					{
						if (Local_1734[iVar1 /*32*/] != -1 && func_181(Local_28[Local_1734[iVar1 /*32*/] /*110*/]))
						{
							Var2 = { unk_0x6B62510F212526DC(Local_28[Local_1734[iVar1 /*32*/] /*110*/], 1) };
							Local_1734[iVar1 /*32*/].f_23 = { Var2 };
						}
						else
						{
							Var2 = { Local_1734[iVar1 /*32*/].f_23 };
						}
						if (!func_22(&(Local_1693[3 /*8*/])))
						{
							if (Local_1734[iVar1 /*32*/].f_31 && unk_0x987A5F1E1A67E3C0(Var2, Local_642, 1) < 35f)
							{
								func_172(&(Local_1693[3 /*8*/]), 0, 0, 1);
							}
						}
						iVar0 = 0;
						while (iVar0 < Local_28.f_0)
						{
							if (Local_1734[iVar1 /*32*/] == -1 || (iVar0 != Local_1734[iVar1 /*32*/] && Local_28[Local_1734[iVar1 /*32*/] /*110*/].f_5 >= Local_28[iVar0 /*110*/].f_5))
							{
								if (unk_0xE5965CDF24F93A9F(Local_28[iVar0 /*110*/]) && !unk_0xF68107C40359970C(Local_28[iVar0 /*110*/]))
								{
									if (func_108(Local_28[iVar0 /*110*/], Var2, 1) < (Local_1734[iVar1 /*32*/].f_26 + Local_28[iVar0 /*110*/].f_42))
									{
										Local_28[iVar0 /*110*/].f_34 = iVar1;
										if (Local_1734[iVar1 /*32*/].f_30)
										{
											if (!func_22(&(Local_1693[3 /*8*/])))
											{
												func_172(&(Local_1693[3 /*8*/]), 0, 0, 1);
												MemCopy(&cLocal_2375, {Local_1734[iVar1 /*32*/].f_1}, 8);
											}
										}
									}
								}
							}
							iVar0++;
						}
					}
				}
				else if ((unk_0x320D1840B6DAA1CC() - Local_1734[iVar1 /*32*/].f_27) > Local_1734[iVar1 /*32*/].f_28 + 2000)
				{
					StringCopy(&(Local_1734[iVar1 /*32*/].f_1), "", 64);
					Local_1734[iVar1 /*32*/] = -1;
					Local_1734[iVar1 /*32*/].f_23 = { 0f, 0f, 0f };
					Local_1734[iVar1 /*32*/].f_26 = 0f;
					Local_1734[iVar1 /*32*/].f_27 = -1;
					Local_1734[iVar1 /*32*/].f_28 = -1;
					Local_1734[iVar1 /*32*/].f_29 = -1;
				}
			}
			iVar1++;
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (func_181(Local_28[iVar0 /*110*/]))
			{
				func_285(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_181(Local_469.f_0))
		{
			func_276(&Local_469);
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (func_181(Local_28[iVar0 /*110*/]))
			{
				func_275(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_181(Local_469.f_0))
		{
			func_273(&Local_469);
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (unk_0xE5965CDF24F93A9F(Local_28[iVar0 /*110*/].f_105))
			{
				if (((!unk_0xE5965CDF24F93A9F(Local_28[iVar0 /*110*/]) || unk_0xF68107C40359970C(Local_28[iVar0 /*110*/])) || unk_0x41FECC8DB00381BD(Local_28[iVar0 /*110*/])) || (Local_28[iVar0 /*110*/].f_108 && Local_28[iVar0 /*110*/].f_5 != 0))
				{
					bVar5 = true;
				}
				else if (Local_28[iVar0 /*110*/].f_5 != 0)
				{
					bVar6 = true;
				}
				if (bVar5 || bVar6)
				{
					if (unk_0x099CAD293190F449(Local_28[iVar0 /*110*/].f_105, Local_28[iVar0 /*110*/]))
					{
						unk_0xE6451C2F193342C7(Local_28[iVar0 /*110*/].f_105, 1, 1);
					}
					if (bVar5)
					{
						unk_0x59E393B344098656(&(Local_28[iVar0 /*110*/].f_105));
					}
					else if (bVar6)
					{
						unk_0x4BDA5AFD88C085EB(&(Local_28[iVar0 /*110*/].f_105));
					}
					Local_28[iVar0 /*110*/].f_109 = 0;
				}
			}
			else if (Local_28[iVar0 /*110*/].f_107 != 0 && Local_28[iVar0 /*110*/].f_106 != -1)
			{
				if (Local_28[iVar0 /*110*/].f_109 && unk_0x0152AA00FA3130F1(Local_28[iVar0 /*110*/].f_107))
				{
					Local_28[iVar0 /*110*/].f_105 = unk_0x0E536D72AB30F4C8(Local_28[iVar0 /*110*/].f_107, unk_0x6EA486FF6D815B4B(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_106, 0f, 0f, 0f), 1, 1, 0);
					unk_0x9A97DC6DBC7B223D(Local_28[iVar0 /*110*/].f_105, Local_28[iVar0 /*110*/], unk_0xB897FCFCFA664B38(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_106), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1, 0);
					Local_28[iVar0 /*110*/].f_109 = 0;
				}
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_28.f_0)
		{
			if (unk_0xE5965CDF24F93A9F(Local_28[iVar1 /*110*/]) && !unk_0xF68107C40359970C(Local_28[iVar1 /*110*/]))
			{
				unk_0xE68645525D451A8B(Local_28[iVar1 /*110*/]);
				unk_0x2AD4BD9956C8AAD7(Local_28[iVar1 /*110*/]);
			}
			iVar1++;
		}
		func_272();
	}
	if (func_256(uParam0))
	{
	}
}

void func_272()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_181(Local_579[iVar0 /*8*/]))
		{
			unk_0xE68645525D451A8B(Local_579[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

void func_273(int iParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0x41FBE02637A70478(*iParam0);
	if (func_274(*iParam0))
	{
		Local_469.f_46 = 0;
	}
	switch (iParam0->f_5)
	{
		case 0:
			if (unk_0x09FC827691DACE59() >= 5 && unk_0x09FC827691DACE59() < 21)
			{
				if ((!func_191(*iParam0, joaat("script_task_use_nearest_scenario_to_pos"), 1) && !func_191(*iParam0, joaat("script_task_perform_sequence"), 1)) || iLocal_2602)
				{
					if (unk_0x5B138084858689AC(203.68f, -3132.46f, 4.79f, 1f, 1))
					{
						unk_0x1D698ECDFF42AC58(*iParam0, 203.68f, -3132.46f, 4.79f, 1f, 0);
						iLocal_2602 = 0;
					}
				}
			}
			else if (!func_191(*iParam0, joaat("script_task_use_nearest_scenario_chain_to_pos"), 1) || !iLocal_2602)
			{
				if (unk_0x5B138084858689AC(162.69f, -3115.67f, 4.95f, 1f, 1))
				{
					unk_0xAF0492886BC6C105(*iParam0, 162.69f, -3115.67f, 4.95f, 1f, 0);
					iLocal_2602 = 1;
				}
			}
			break;
		
		case 3:
			unk_0xA091C233F9D0AB04(*iParam0, 1, -1, "DEFAULT_ACTION");
			switch (unk_0x2E87280918B16506(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
					if (unk_0x8FEA2E94638F9767(*iParam0, joaat("weapon_pistol"), 0))
					{
						unk_0xE002DFD518BF86A7(*iParam0, joaat("weapon_pistol"));
					}
					if (!unk_0x8FEA2E94638F9767(*iParam0, joaat("weapon_nightstick"), 0))
					{
						unk_0x9521FB98DB6DDF50(*iParam0, joaat("weapon_nightstick"), -1, 1, 1);
					}
					if (unk_0xA7E29842FA438ED6(*iParam0, &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_nightstick"))
						{
							unk_0x202B28FEABEC4034(*iParam0, joaat("weapon_nightstick"), 0);
						}
					}
					break;
				
				case joaat("killed"):
				case 1518302817:
				case -1298712083:
				case 185995093:
				case -1645534839:
				case 880647822:
				case joaat("gunshot"):
				case 1921975061:
				case 1682434916:
				case -924218668:
				case 600040296:
					if (unk_0x8FEA2E94638F9767(*iParam0, joaat("weapon_nightstick"), 0))
					{
						unk_0xE002DFD518BF86A7(*iParam0, joaat("weapon_nightstick"));
					}
					if (!unk_0x8FEA2E94638F9767(*iParam0, joaat("weapon_pistol"), 0))
					{
						unk_0x9521FB98DB6DDF50(*iParam0, joaat("weapon_pistol"), -1, 1, 1);
					}
					if (unk_0xA7E29842FA438ED6(*iParam0, &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_pistol"))
						{
							unk_0x202B28FEABEC4034(*iParam0, joaat("weapon_pistol"), 0);
						}
					}
					break;
			}
			if (!func_191(*iParam0, joaat("script_task_combat"), 1) || func_274(*iParam0))
			{
				unk_0xC1A74225341AA9FB(*iParam0, unk_0xE2D3D51028F0428A(), 0, 16);
				unk_0xF30F15F203736DE4(*iParam0, unk_0xE2D3D51028F0428A(), -1, 2048, 2);
			}
			break;
		
		case 1:
			switch (unk_0x2E87280918B16506(&(iParam0->f_9)))
			{
				case 686645495:
					if (unk_0xE5965CDF24F93A9F(iParam0->f_91))
					{
						if (!unk_0xC9CD8C710046A3DD(*iParam0, unk_0x6B62510F212526DC(iParam0->f_91, 1), 180f) && (unk_0x320D1840B6DAA1CC() - iParam0->f_37) < 5000)
						{
							if (!func_191(*iParam0, joaat("script_task_turn_ped_to_face_entity"), 1) || func_274(*iParam0))
							{
								unk_0x529D306014D3C29A(*iParam0, iParam0->f_91, -1);
								unk_0xF30F15F203736DE4(*iParam0, iParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!func_191(*iParam0, joaat("script_task_goto_entity_offset"), 1) || func_274(*iParam0))
						{
							unk_0xB17A6034B9F1BCC2(*iParam0, iParam0->f_91, -1, 2f, -1f, 2.5f, 1f, 1);
						}
					}
					break;
				
				case -1225951737:
					if (iParam0->f_41 && !func_65(iParam0->f_88, iParam0->f_43, 1f, 0))
					{
						iParam0->f_88 = { iParam0->f_43 };
						iVar1 = 1;
					}
					if (!func_244(iParam0->f_88))
					{
						if (!unk_0xC9CD8C710046A3DD(*iParam0, iParam0->f_88, 90f) && (unk_0x320D1840B6DAA1CC() - iParam0->f_37) < 5000)
						{
							if ((!func_191(*iParam0, joaat("script_task_turn_ped_to_face_coord"), 1) || func_274(*iParam0)) || iVar1)
							{
								unk_0x1A96B8B416BC07D0(*iParam0, iParam0->f_88, 0);
								unk_0xE1E1AF00CA06A2B7(*iParam0, iParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!func_191(*iParam0, joaat("script_task_follow_nav_mesh_to_coord"), 1) || func_274(*iParam0)) || iVar1)
						{
							unk_0x7D1424753688EE7A(*iParam0, iParam0->f_43, 1f, -1, 3f, 0, 40000f);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_244(iParam0->f_88))
					{
						if (!func_191(*iParam0, joaat("script_task_turn_ped_to_face_coord"), 1) || func_274(*iParam0))
						{
							unk_0x1A96B8B416BC07D0(*iParam0, iParam0->f_88, -1);
							unk_0xE1E1AF00CA06A2B7(*iParam0, iParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x83F5BCFFFBA26699(*iParam0, -1);
					}
					break;
				
				case 58299323:
					if (unk_0xE5965CDF24F93A9F(iParam0->f_91))
					{
						if (!func_191(*iParam0, joaat("script_task_turn_ped_to_face_entity"), 1) || func_274(*iParam0))
						{
							unk_0x529D306014D3C29A(*iParam0, iParam0->f_91, -1);
							unk_0xF30F15F203736DE4(*iParam0, iParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x83F5BCFFFBA26699(*iParam0, -1);
					}
					break;
			}
			break;
	}
}

int func_274(struct<26> Param0, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109)
{
	if (Param0.f_5 != Param0.f_7 || !unk_0x3C57C2F07FEE34D2(&(Param0.f_9), &(Param0.f_25)))
	{
		return 1;
	}
	return 0;
}

void func_275(var uParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[24];
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	int iVar14;
	
	unk_0x41FBE02637A70478(*uParam0);
	if (func_274(*uParam0))
	{
		uParam0->f_46 = 0;
	}
	switch (uParam0->f_5)
	{
		case 0:
			iVar1 = 0;
			while (iVar1 < Local_28.f_0)
			{
				if (Local_28[iVar1 /*110*/] == *uParam0)
				{
					iVar0 = iVar1;
				}
				iVar1++;
			}
			if (iVar0 != -1)
			{
				switch (iVar0)
				{
					case 0:
						if (!func_191(*uParam0, joaat("script_task_use_nearest_scenario_to_pos"), 1))
						{
							if (unk_0x5B138084858689AC(155.74f, -3098.89f, 4.93f, 0.5f, 1))
							{
								unk_0x1D698ECDFF42AC58(*uParam0, 155.74f, -3098.89f, 4.93f, 0.5f, -1);
							}
						}
						break;
					
					case 1:
						if ((!func_191(*uParam0, joaat("script_task_perform_sequence"), 1) || func_274(*uParam0)) && unk_0x6F940C2636C076AD("misslsdhsclipboard@base"))
						{
							if (!unk_0xFCF559C8631ABED7(*uParam0, "misslsdhsclipboard@base", "base", 3))
							{
								unk_0xA888F8CC04F25CC8(&uLocal_2551);
								if (!func_65(unk_0x6B62510F212526DC(*uParam0, 1), 126.8496f, -3089.249f, 4.9141f, 0.75f, 0))
								{
									unk_0x7D1424753688EE7A(0, 126.8496f, -3089.249f, 4.9141f, 1f, -1, 0.5f, 0, 264.2812f);
								}
								unk_0x30E00B59448AB97E(0, 264.2812f, 0);
								unk_0x49D97B076E3590AC(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
								unk_0xC963A45B50851768(uLocal_2551);
								unk_0x8ACADA903FCAA42F(*uParam0, uLocal_2551);
								unk_0x7461D7C5BA953BC7(&uLocal_2551);
							}
							if (unk_0xE5965CDF24F93A9F(Local_579[2 /*8*/]))
							{
								unk_0xE1E1AF00CA06A2B7(*uParam0, unk_0x96EDA732FD9DC0AF(Local_579[2 /*8*/], unk_0x7F0054A115D66F44(Local_579[2 /*8*/], "engine")), -1, 0, 2);
							}
							uParam0->f_46 = 0;
						}
						else if (unk_0x6F940C2636C076AD("misslsdhsclipboard@idle_a"))
						{
							switch (uParam0->f_46)
							{
								case 0:
								case 2:
									if (uParam0->f_46 == 0 && unk_0x0829092F169950AB(*uParam0) == 2)
									{
										uParam0->f_109 = 1;
									}
									if (((uParam0->f_46 == 0 && unk_0x0829092F169950AB(*uParam0) == 2) || uParam0->f_46 == 2) && unk_0x320D1840B6DAA1CC() > uParam0->f_37)
									{
										unk_0xA888F8CC04F25CC8(&uLocal_2551);
										switch (unk_0x5853B15F78E1A265(0, 3))
										{
											case 0:
												StringCopy(&cVar2, "idle_a", 24);
												break;
											
											case 1:
												StringCopy(&cVar2, "idle_b", 24);
												break;
											
											case 2:
												StringCopy(&cVar2, "idle_c", 24);
												break;
										}
										unk_0x49D97B076E3590AC(0, "misslsdhsclipboard@idle_a", &cVar2, 8f, -8f, -1, 0, 0, 0, 0, 0);
										unk_0x49D97B076E3590AC(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
										unk_0xC963A45B50851768(uLocal_2551);
										unk_0x8ACADA903FCAA42F(*uParam0, uLocal_2551);
										unk_0x7461D7C5BA953BC7(&uLocal_2551);
										uParam0->f_46 = 1;
									}
									break;
								
								case 1:
									if (unk_0x0829092F169950AB(*uParam0) == 1)
									{
										uParam0->f_46++;
									}
									break;
								}
						}
						break;
					
					case 2:
					case 3:
						if (!func_191(*uParam0, joaat("script_task_use_nearest_scenario_to_pos"), 1))
						{
							if (unk_0x5B138084858689AC(159.82f, -3085.93f, 5f, 0.1f, 1))
							{
								unk_0x1D698ECDFF42AC58(*uParam0, 159.82f, -3085.93f, 5f, 0.1f, -1);
							}
							else if (unk_0x5B138084858689AC(160.15f, -3084.79f, 4.99f, 0.1f, 1))
							{
								unk_0x1D698ECDFF42AC58(*uParam0, 160.15f, -3084.79f, 4.99f, 0.1f, -1);
							}
							else if (unk_0x5B138084858689AC(159.09f, -3085.02f, 5.01f, 0.1f, 1))
							{
								unk_0x1D698ECDFF42AC58(*uParam0, 159.09f, -3085.02f, 5.01f, 0.1f, -1);
							}
						}
						break;
					}
			}
			break;
		
		case 1:
			switch (unk_0x2E87280918B16506(&(uParam0->f_9)))
			{
				case 2074432461:
				case 356486511:
				case -414594135:
				case 1260350710:
					if (unk_0xE5965CDF24F93A9F(uParam0->f_91))
					{
						if (!unk_0xC9CD8C710046A3DD(*uParam0, unk_0x6B62510F212526DC(uParam0->f_91, 1), 180f) && (unk_0x320D1840B6DAA1CC() - uParam0->f_37) < 5000)
						{
							if (!func_191(*uParam0, joaat("script_task_turn_ped_to_face_entity"), 1) || func_274(*uParam0))
							{
								unk_0x529D306014D3C29A(*uParam0, uParam0->f_91, -1);
								unk_0xF30F15F203736DE4(*uParam0, uParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!func_191(*uParam0, joaat("script_task_goto_entity_offset"), 1) || func_274(*uParam0))
						{
							unk_0xB17A6034B9F1BCC2(*uParam0, uParam0->f_91, -1, 2f, -1f, 2.5f, 1f, 1);
						}
					}
					break;
				
				case -1225951737:
					if (uParam0->f_41 && !func_65(uParam0->f_88, uParam0->f_43, 1f, 0))
					{
						uParam0->f_88 = { uParam0->f_43 };
						iVar8 = 1;
					}
					if (!func_244(uParam0->f_88))
					{
						if (!unk_0xC9CD8C710046A3DD(*uParam0, uParam0->f_88, 90f) && (unk_0x320D1840B6DAA1CC() - uParam0->f_37) < 5000)
						{
							if ((!func_191(*uParam0, joaat("script_task_turn_ped_to_face_coord"), 1) || func_274(*uParam0)) || iVar8)
							{
								unk_0x1A96B8B416BC07D0(*uParam0, uParam0->f_88, 0);
								unk_0xE1E1AF00CA06A2B7(*uParam0, uParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!func_191(*uParam0, joaat("script_task_follow_nav_mesh_to_coord"), 1) || func_274(*uParam0)) || iVar8)
						{
							unk_0x7D1424753688EE7A(*uParam0, uParam0->f_43, 1f, -1, 3f, 0, 40000f);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_244(uParam0->f_88))
					{
						if (!func_191(*uParam0, joaat("script_task_turn_ped_to_face_coord"), 1) || func_274(*uParam0))
						{
							unk_0x1A96B8B416BC07D0(*uParam0, uParam0->f_88, -1);
							unk_0xE1E1AF00CA06A2B7(*uParam0, uParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x83F5BCFFFBA26699(*uParam0, -1);
					}
					break;
				
				case 58299323:
					if (unk_0xE5965CDF24F93A9F(uParam0->f_91))
					{
						if (!func_191(*uParam0, joaat("script_task_turn_ped_to_face_entity"), 1) || func_274(*uParam0))
						{
							unk_0x529D306014D3C29A(*uParam0, uParam0->f_91, -1);
							unk_0xF30F15F203736DE4(*uParam0, uParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x83F5BCFFFBA26699(*uParam0, -1);
					}
					break;
			}
			break;
		
		case 2:
			if (((unk_0x3C57C2F07FEE34D2(&(uParam0->f_9), "ENT_FOOT_LEAVE") || unk_0x3C57C2F07FEE34D2(&(uParam0->f_9), "ENT_VEH_LEAVE")) || unk_0x3C57C2F07FEE34D2(&(uParam0->f_9), "WH_FOOT_LEAVE")) || unk_0x3C57C2F07FEE34D2(&(uParam0->f_9), "WH_VEH_LEAVE"))
			{
				if ((!func_191(*uParam0, joaat("script_task_perform_sequence"), 1) || !unk_0x2E7F5417D4F4DD69(*uParam0, unk_0xE2D3D51028F0428A(), 90f)) || func_274(*uParam0))
				{
					unk_0xA888F8CC04F25CC8(&uLocal_2551);
					unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
					unk_0x83F5BCFFFBA26699(0, 2000);
					unk_0x3F2B528DF27C8A9F(uLocal_2551, 1);
					unk_0xC963A45B50851768(uLocal_2551);
					unk_0x8ACADA903FCAA42F(*uParam0, uLocal_2551);
					unk_0x7461D7C5BA953BC7(&uLocal_2551);
					unk_0xF30F15F203736DE4(*uParam0, unk_0xE2D3D51028F0428A(), -1, 2048, 2);
				}
			}
			else
			{
				if (unk_0xE5965CDF24F93A9F(iLocal_2601) && unk_0x55A0C756C4A8220C(iLocal_2601, 0))
				{
					fVar11 = func_107(unk_0xE2D3D51028F0428A(), iLocal_2601, 1);
				}
				if ((iLocal_2598 == 3 || iLocal_2598 == 2) || iLocal_2598 == 8)
				{
					iVar9 = unk_0xE2D3D51028F0428A();
					fVar12 = 2f;
				}
				else if (iLocal_2598 == 0 || iLocal_2598 == 1)
				{
					iVar9 = unk_0xE2D3D51028F0428A();
					fVar12 = 1f;
				}
				else if (iLocal_2598 == 5 && unk_0xE5965CDF24F93A9F(iLocal_2601))
				{
					if (fVar11 > 10f)
					{
						iVar9 = unk_0xE2D3D51028F0428A();
						fVar12 = 2f;
					}
					else
					{
						iVar9 = iLocal_2601;
						fVar12 = 2f;
					}
				}
				else if (iLocal_2598 == 4 && unk_0xE5965CDF24F93A9F(iLocal_2601))
				{
					iVar9 = iLocal_2601;
					fVar12 = 1f;
				}
				if (unk_0xE5965CDF24F93A9F(iVar9))
				{
					fVar10 = func_107(*uParam0, iVar9, 1);
				}
				if (fVar10 <= 7.5f)
				{
					if (((!func_191(*uParam0, joaat("script_task_perform_sequence"), 1) && !func_191(*uParam0, joaat("script_task_go_to_entity"), 1)) || !unk_0x2E7F5417D4F4DD69(*uParam0, unk_0xE2D3D51028F0428A(), 90f)) || func_274(*uParam0))
					{
						unk_0xA888F8CC04F25CC8(&uLocal_2551);
						unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
						unk_0x83F5BCFFFBA26699(0, 2000);
						unk_0x3F2B528DF27C8A9F(uLocal_2551, 1);
						unk_0xC963A45B50851768(uLocal_2551);
						unk_0x8ACADA903FCAA42F(*uParam0, uLocal_2551);
						unk_0x7461D7C5BA953BC7(&uLocal_2551);
						unk_0xF30F15F203736DE4(*uParam0, unk_0xE2D3D51028F0428A(), -1, 2048, 2);
					}
				}
				else if (!func_191(*uParam0, joaat("script_task_go_to_entity"), 1) || func_274(*uParam0))
				{
					if (fVar12 > 1f)
					{
						fVar13 = 6f;
					}
					else
					{
						fVar13 = 3f;
					}
					unk_0xC149E50FBB27DD70(*uParam0, iVar9, -1, fVar13, fVar12, 1073741824, 0);
					unk_0xF30F15F203736DE4(*uParam0, unk_0xE2D3D51028F0428A(), -1, 2048, 2);
				}
			}
			break;
		
		case 3:
			switch (unk_0x2E87280918B16506(&(uParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
				case 1568162790:
				case 1682434916:
				case -924218668:
				case 2056033185:
				case 185995093:
					if (unk_0xA7E29842FA438ED6(*uParam0, &iVar14, 1))
					{
						if (iVar14 != joaat("weapon_unarmed"))
						{
							unk_0x202B28FEABEC4034(*uParam0, joaat("weapon_unarmed"), 0);
						}
					}
					if (!func_191(*uParam0, joaat("script_task_combat"), 1))
					{
						unk_0xC1A74225341AA9FB(*uParam0, unk_0xE2D3D51028F0428A(), 0, 16);
					}
					break;
				
				case 1093888274:
					if ((!func_191(*uParam0, joaat("script_task_perform_sequence"), 1) || !unk_0x2E7F5417D4F4DD69(*uParam0, unk_0xE2D3D51028F0428A(), 90f)) || func_274(*uParam0))
					{
						unk_0xA888F8CC04F25CC8(&uLocal_2551);
						unk_0x529D306014D3C29A(0, unk_0xE2D3D51028F0428A(), 0);
						unk_0x83F5BCFFFBA26699(0, 2000);
						unk_0x3F2B528DF27C8A9F(uLocal_2551, 1);
						unk_0xC963A45B50851768(uLocal_2551);
						unk_0x8ACADA903FCAA42F(*uParam0, uLocal_2551);
						unk_0x7461D7C5BA953BC7(&uLocal_2551);
						unk_0xF30F15F203736DE4(*uParam0, unk_0xE2D3D51028F0428A(), -1, 2048, 2);
					}
					break;
			}
			break;
		
		case 5:
			if (func_108(*uParam0, 177.7484f, -3240.897f, 4.6079f, 1) < 15f)
			{
				if (!func_191(*uParam0, joaat("script_task_smart_flee_ped"), 1))
				{
					unk_0x7734082B0EDB0BE0(*uParam0, unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
				}
			}
			else if ((!func_191(*uParam0, joaat("script_task_smart_flee_ped"), 1) && !func_191(*uParam0, joaat("script_task_follow_nav_mesh_to_coord"), 1)) || func_274(*uParam0))
			{
				unk_0x7D1424753688EE7A(*uParam0, 177.7484f, -3240.897f, 4.6079f, 3f, -1, 0.25f, 1, 40000f);
			}
			break;
		
		case 4:
			switch (unk_0x2E87280918B16506(&(uParam0->f_9)))
			{
				case -1645534839:
					if (!func_191(*uParam0, joaat("script_task_hands_up"), 1) || func_274(*uParam0))
					{
						unk_0x3598F95A00026DD8(*uParam0, -1, unk_0xE2D3D51028F0428A(), 0, 1);
					}
					break;
			}
			break;
	}
}

void func_276(int iParam0)
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &uVar0, 1);
	fVar1 = func_107(unk_0xE2D3D51028F0428A(), *iParam0, 1);
	if (unk_0x344BB7BDBAB3823C(*iParam0))
	{
		iVar3 = 1;
	}
	if (unk_0x0747E45CFF1F74AA(*iParam0, unk_0xE2D3D51028F0428A(), 1))
	{
		if (unk_0xEEF1A3C0E56FC8FF(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar4 = func_283(*iParam0, &uVar5, &bVar6, &bVar7);
	if ((uVar4 && uVar5) && !bVar7)
	{
		if (bVar6)
		{
			func_258(iParam0, 3, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_258(iParam0, 3, 1, "KILLED", 1, 0);
		}
	}
	else if (((((unk_0xD16A3D24DF85C222(*iParam0, 124) || unk_0xD16A3D24DF85C222(*iParam0, 125)) || unk_0xD16A3D24DF85C222(*iParam0, 126)) || unk_0xD16A3D24DF85C222(*iParam0, 22)) || unk_0xD16A3D24DF85C222(*iParam0, 23)) || unk_0xD16A3D24DF85C222(*iParam0, 88))
	{
		func_258(iParam0, 3, 1, "GUNSHOT", 1, 0);
	}
	else if (iParam0->f_39 && func_282(4))
	{
		func_258(iParam0, 3, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_39 && func_281(*iParam0, 2))
	{
		func_258(iParam0, 3, 1, "PROJ_AIMED", 1, 0);
	}
	else if (((iParam0->f_39 && fVar1 < 8f) && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1)) && unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 5))
	{
		func_258(iParam0, 3, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2598 == 11)
	{
		if (iParam0->f_39)
		{
			func_258(iParam0, 3, 1, "STEALING_SEC_CAR", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_280(iParam0, 1, "HEARD_SEC_CAR", Local_579[3 /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2598 == 6)
	{
		if (iParam0->f_39)
		{
			func_258(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_280(iParam0, 1, "HEARD_VAN", Local_579[func_102() /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2598 == 10)
	{
		if (iParam0->f_39)
		{
			func_280(iParam0, 3, "STEALING_VAN", Local_579[func_54() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_280(iParam0, 1, "HEARD_VAN", Local_579[func_54() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || unk_0xD16A3D24DF85C222(*iParam0, 42)) || unk_0xD16A3D24DF85C222(*iParam0, 114)) || func_278(*iParam0, 0))
	{
		func_258(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || unk_0xD16A3D24DF85C222(*iParam0, 103)) || func_278(*iParam0, 1))
	{
		func_258(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_84) && (iParam0->f_39 || iParam0->f_41)) && (fVar1 < 8f || func_108(unk_0xE2D3D51028F0428A(), Local_642, 1) < 40f))
	{
		if (iParam0->f_39)
		{
			func_258(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_277(iParam0, 1, "HEARD_PLAYER", unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar4)
	{
		if ((uVar5 && bVar6) && bVar7)
		{
			func_258(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar6)
		{
			func_258(iParam0, 3, 1, "DEAD_BODY", 1, 0);
		}
	}
	if (iParam0->f_34 > -1 && iParam0->f_34 < (Local_1734.f_0 - 1))
	{
		bVar8 = Local_1734[iParam0->f_34 /*32*/].f_30;
		switch (unk_0x2E87280918B16506(&(Local_1734[iParam0->f_34 /*32*/].f_1)))
		{
			case joaat("killed"):
			case 1518302817:
			case -1298712083:
			case 185995093:
			case -1645534839:
			case 880647822:
			case 1921975061:
			case joaat("fight"):
			case 1681313069:
			case 1156217463:
			case 1682434916:
			case -924218668:
			case joaat("gunshot"):
			case 600040296:
				func_258(iParam0, 3, 1, &(Local_1734[iParam0->f_34 /*32*/].f_1), 0, bVar8);
				break;
			
			case -1225951737:
				func_277(iParam0, 1, &(Local_1734[iParam0->f_34 /*32*/].f_1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 1, 0, bVar8);
				break;
			
			case 2074432461:
			case 686645495:
				func_280(iParam0, 1, &(Local_1734[iParam0->f_34 /*32*/].f_1), Local_579[func_102() /*8*/], 1, 0, bVar8);
				break;
			}
	}
	iParam0->f_34 = -1;
	if (iParam0->f_7 != iParam0->f_5)
	{
		iParam0->f_8 = 1;
	}
	else
	{
		iParam0->f_8 = 0;
	}
	iParam0->f_7 = iParam0->f_5;
	if (!unk_0x3C57C2F07FEE34D2(&(iParam0->f_25), &(iParam0->f_9)))
	{
		iParam0->f_33 = 1;
	}
	else
	{
		iParam0->f_33 = 0;
	}
	iParam0->f_25 = { iParam0->f_9 };
	switch (iParam0->f_5)
	{
		case 0:
			break;
		
		case 1:
			switch (unk_0x2E87280918B16506(&(iParam0->f_9)))
			{
				case 58299323:
					if ((unk_0x320D1840B6DAA1CC() - iParam0->f_37) > 3000)
					{
						func_258(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case -1225951737:
					if (((unk_0x320D1840B6DAA1CC() - iParam0->f_37) > 4000 && func_108(*iParam0, iParam0->f_88, 1) < 3f) && unk_0x443C6AFB940B3C83(*iParam0))
					{
						func_258(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					break;
				
				case -927541383:
					if ((unk_0x320D1840B6DAA1CC() - iParam0->f_37) > 4000 && !unk_0x769CB0E209F11AD8(*iParam0))
					{
						func_258(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
			}
			break;
		
		case 3:
			switch (unk_0x2E87280918B16506(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
					if ((((unk_0x320D1840B6DAA1CC() - iParam0->f_38) > 8000 && func_108(unk_0xE2D3D51028F0428A(), Local_642, 1) > 65f) && (func_107(unk_0xE2D3D51028F0428A(), *iParam0, 1) > 10f || (unk_0x320D1840B6DAA1CC() - iParam0->f_38) > 16000)) && !unk_0x769CB0E209F11AD8(*iParam0))
					{
						func_258(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
				
				case joaat("killed"):
				case 1518302817:
				case -1298712083:
				case 185995093:
				case -1645534839:
				case 880647822:
				case joaat("gunshot"):
				case 1921975061:
				case 1682434916:
				case -924218668:
				case 600040296:
					if (func_108(unk_0xE2D3D51028F0428A(), Local_642, 1) > 300f && func_107(unk_0xE2D3D51028F0428A(), *iParam0, 1) > 150f)
					{
						func_258(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
			}
			break;
	}
}

int func_277(int iParam0, int iParam1, char* sParam2, struct<3> Param3, bool bParam6, int iParam7, bool bParam8)
{
	return func_259(iParam0, iParam1, sParam2, Param3, 0, bParam6, iParam7, bParam8);
}

int func_278(struct<110> Param0, int iParam110)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (func_279(Param0, Local_28[iVar0 /*110*/], iParam110))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_279(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, int iParam220)
{
	if (unk_0xE5965CDF24F93A9F(iParam110) && unk_0x0747E45CFF1F74AA(iParam110, unk_0xE2D3D51028F0428A(), iParam220))
	{
		if (func_107(iParam0, iParam110, 1) < 15f)
		{
			if (unk_0xD32EE22119FFF87D(iParam0, iParam110))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_280(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	return func_259(iParam0, iParam1, sParam2, 0f, 0f, 0f, iParam3, bParam4, iParam5, bParam6);
}

int func_281(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110)
{
	if ((iParam0 != 0 && unk_0xE5965CDF24F93A9F(iParam0)) && !unk_0xF68107C40359970C(iParam0))
	{
		if (unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), iParam110) && (unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iParam0) || unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iParam0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_282(int iParam0)
{
	if (unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), iParam0) && (unk_0x55E78B6AAFEF4EB8(unk_0x9E2D6C50374FCFA9()) || unk_0x20F5A2DB460AB9BB(unk_0x9E2D6C50374FCFA9())))
	{
		return 1;
	}
	return 0;
}

int func_283(struct<110> Param0, var uParam110, var uParam111, var uParam112)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (func_284(Param0, Local_28[iVar0 /*110*/], &bVar2, &bVar3, &bVar4))
		{
			if (bVar2 && bVar4)
			{
				Local_28[iVar0 /*110*/].f_85 = 1;
			}
			if (!bVar1)
			{
				bVar1 = true;
				*uParam110 = bVar2;
				*uParam111 = bVar3;
				*uParam112 = bVar4;
			}
			else
			{
				if (bVar2)
				{
					*uParam110 = 1;
				}
				if (bVar3)
				{
					*uParam111 = 1;
				}
				if (bVar4)
				{
					*uParam112 = 1;
				}
			}
			if (Local_28[iVar0 /*110*/].f_85)
			{
				*uParam111 = 1;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	*uParam110 = 0;
	*uParam111 = 0;
	*uParam112 = 0;
	return 0;
}

int func_284(struct<40> Param0, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, struct<104> Param110, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, var uParam220, var uParam221, var uParam222)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xE5965CDF24F93A9F(Param110.f_0) && unk_0xF68107C40359970C(Param110.f_0))
	{
		Var0 = { unk_0x6B62510F212526DC(Param110.f_0, 0) };
		if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(Param0.f_0, 1), Var0, 1) < 10f)
		{
			if (unk_0xD32EE22119FFF87D(Param0.f_0, Param110.f_0))
			{
				if ((unk_0x320D1840B6DAA1CC() - Param110.f_103) < 3000)
				{
					*uParam220 = 1;
				}
				else
				{
					*uParam220 = 0;
				}
				if (*uParam220)
				{
					iVar3 = unk_0xDB73C91F09BB8060(Param110.f_0);
					if (unk_0x9044EDB8A7BF67B4(iVar3))
					{
						iVar4 = unk_0x28AA31872A651BC7(iVar3);
						if ((iVar4 == unk_0xE2D3D51028F0428A() && !unk_0xF68107C40359970C(iVar4)) && Param0.f_39)
						{
							*uParam221 = 1;
						}
						else
						{
							*uParam221 = 0;
						}
					}
					else
					{
						*uParam221 = 0;
					}
				}
				else
				{
					*uParam221 = 0;
				}
				iVar5 = unk_0x91947ACF8B072BE2(Param110.f_0);
				if (iVar5 == joaat("weapon_unarmed") || (iVar5 != joaat("weapon_unarmed") && unk_0x963BC5E5049966D1(iVar5) == 2))
				{
					*uParam222 = 1;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_285(int iParam0)
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<8> Var4;
	var uVar20;
	var uVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	struct<6> Var27;
	bool bVar33;
	var uVar34;
	float fVar35;
	struct<3> Var36;
	struct<3> Var39;
	struct<4> Var42;
	
	unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &uVar0, 1);
	fVar1 = func_107(unk_0xE2D3D51028F0428A(), *iParam0, 1);
	if (unk_0x344BB7BDBAB3823C(*iParam0))
	{
		iVar3 = 1;
	}
	if (unk_0x0747E45CFF1F74AA(*iParam0, unk_0xE2D3D51028F0428A(), 1))
	{
		if (unk_0xEEF1A3C0E56FC8FF(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar20 = func_283(*iParam0, &uVar21, &bVar22, &bVar23);
	if (((iParam0->f_5 != 5 && uVar20) && uVar21) && !bVar23)
	{
		if (bVar22)
		{
			func_258(iParam0, 5, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_258(iParam0, 5, 1, "KILLED", 1, 0);
		}
	}
	else if (((((unk_0xD16A3D24DF85C222(*iParam0, 124) || unk_0xD16A3D24DF85C222(*iParam0, 125)) || unk_0xD16A3D24DF85C222(*iParam0, 126)) || unk_0xD16A3D24DF85C222(*iParam0, 22)) || unk_0xD16A3D24DF85C222(*iParam0, 23)) || unk_0xD16A3D24DF85C222(*iParam0, 88))
	{
		func_258(iParam0, 5, 1, "GUNSHOT", 1, 0);
	}
	else if ((iParam0->f_39 && iParam0->f_5 != 4) && func_282(4))
	{
		func_258(iParam0, 4, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_39 && func_281(*iParam0, 2))
	{
		func_258(iParam0, 5, 1, "PROJ_AIMED", 1, 0);
	}
	else if ((((iParam0->f_39 && fVar1 < 8f) && iParam0->f_5 != 4) && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1)) && unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 5))
	{
		func_258(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2598 == 7)
	{
		if (iParam0->f_39)
		{
			func_258(iParam0, 3, 1, "EXIT_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_277(iParam0, 1, "HEARD_PLAYER", unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2598 == 6)
	{
		if (iParam0->f_39)
		{
			func_258(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_277(iParam0, 1, "HEARD_PLAYER", unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2598 == 10)
	{
		if (iParam0->f_39)
		{
			func_280(iParam0, 3, "STEALING_VAN", Local_579[func_54() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_280(iParam0, 1, "HEARD_VAN", Local_579[func_54() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || unk_0xD16A3D24DF85C222(*iParam0, 42)) || unk_0xD16A3D24DF85C222(*iParam0, 114)) || func_278(*iParam0, 0))
	{
		func_258(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || unk_0xD16A3D24DF85C222(*iParam0, 103)) || func_278(*iParam0, 1))
	{
		func_258(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_84) && (iParam0->f_39 || iParam0->f_41)) && (fVar1 < 8f || func_108(unk_0xE2D3D51028F0428A(), Local_642, 1) < 40f))
	{
		if (iParam0->f_39)
		{
			func_258(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_277(iParam0, 1, "HEARD_PLAYER", unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar20)
	{
		if ((uVar21 && bVar22) && bVar23)
		{
			func_258(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar22)
		{
			func_258(iParam0, 5, 1, "DEAD_BODY", 1, 0);
		}
	}
	else if (((((((iParam0->f_39 || iParam0->f_41) && (iParam0->f_86 || iParam0->f_87)) && iLocal_2598 == 9) && !unk_0x3C57C2F07FEE34D2(&(iParam0->f_9), "SEE_VAN_LEAVING")) && !unk_0x3C57C2F07FEE34D2(&(iParam0->f_9), "SEE_VAN_LEAVING_1")) && !unk_0x3C57C2F07FEE34D2(&(iParam0->f_9), "CHECK_DRIVER")) && func_108(unk_0xE2D3D51028F0428A(), Local_642, 1) < 15f)
	{
		if (iParam0->f_39)
		{
			func_280(iParam0, 1, "SEE_VAN_LEAVING", Local_579[func_102() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_280(iParam0, 1, "HEARD_VAN", Local_579[func_102() /*8*/], 1, 1, 0);
		}
	}
	else if (iLocal_2598 != 9)
	{
		if ((iParam0->f_86 && (((iLocal_2598 == 0 || iLocal_2598 == 1) || iLocal_2598 == 4) || iParam0->f_5 == 1)) || (iParam0->f_87 && ((iLocal_2598 == 3 || iLocal_2598 == 2) || iLocal_2598 == 5)))
		{
			if ((iLocal_2598 == 5 || iLocal_2598 == 4) && unk_0xD936DBC1D824A1BE(*iParam0, iLocal_2601, 19))
			{
				switch (iLocal_2598)
				{
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
				}
				func_258(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_39)
			{
				switch (iLocal_2598)
				{
					case 0:
						StringCopy(&Var4, "ENT_FOOT", 64);
						break;
					
					case 1:
						StringCopy(&Var4, "ENT_VEH", 64);
						break;
					
					case 2:
						StringCopy(&Var4, "WH_FOOT", 64);
						break;
					
					case 3:
						StringCopy(&Var4, "WH_VEH", 64);
						break;
					
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
					
					case -1:
						if (iParam0->f_5 == 1)
						{
							StringCopy(&Var4, "ENT_FOOT", 64);
						}
						break;
				}
				func_258(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_41)
			{
				func_277(iParam0, 1, "HEARD_PLAYER", unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 1, 1, 0);
			}
		}
	}
	if (iParam0->f_34 > -1 && iParam0->f_34 < (Local_1734.f_0 - 1))
	{
		bVar24 = Local_1734[iParam0->f_34 /*32*/].f_30;
		switch (unk_0x2E87280918B16506(&(Local_1734[iParam0->f_34 /*32*/].f_1)))
		{
			case joaat("killed"):
			case 1518302817:
			case -1298712083:
				if (iParam0->f_5 != 4)
				{
					func_258(iParam0, 5, 1, &(Local_1734[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case 185995093:
				if (iParam0->f_5 != 4)
				{
					func_258(iParam0, 3, 1, &(Local_1734[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1645534839:
				if (iParam0->f_5 != 4)
				{
					if (func_108(*iParam0, Local_1734[iParam0->f_34 /*32*/].f_23, 1) < 5f)
					{
						func_258(iParam0, 4, 1, "GUN_AIMED_AT", 0, bVar24);
					}
					else
					{
						func_258(iParam0, 5, 1, "SEEN_WEAPON", 0, bVar24);
					}
				}
				break;
			
			case 880647822:
				if (iParam0->f_5 != 4)
				{
					func_258(iParam0, 5, 1, &(Local_1734[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case 1921975061:
				if (iParam0->f_5 != 4)
				{
					func_258(iParam0, 5, 1, &(Local_1734[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case joaat("fight"):
			case 1681313069:
			case 1156217463:
			case -419867425:
				if (iParam0->f_5 != 4)
				{
					func_258(iParam0, 3, 1, &(Local_1734[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case 1682434916:
			case -924218668:
			case 2056033185:
				if (((iParam0->f_5 != 4 && !unk_0x3C57C2F07FEE34D2(&(iParam0->f_9), "STEALING_VAN")) && !unk_0x3C57C2F07FEE34D2(&(iParam0->f_9), "GET_IN_VAN")) && !unk_0x3C57C2F07FEE34D2(&(iParam0->f_9), "EXIT_VAN"))
				{
					func_258(iParam0, 3, 1, &(Local_1734[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case joaat("gunshot"):
				if (iParam0->f_5 != 4)
				{
					func_258(iParam0, 5, 1, &(Local_1734[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -426892158:
				if (iParam0->f_86)
				{
					func_258(iParam0, 2, 1, &(Local_1734[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1461435341:
				if (iParam0->f_86)
				{
					func_258(iParam0, 2, 1, &(Local_1734[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -972653884:
				if (iParam0->f_87)
				{
					func_258(iParam0, 2, 1, &(Local_1734[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -520621538:
				if (iParam0->f_87)
				{
					func_258(iParam0, 2, 1, &(Local_1734[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1349994105:
				if (iParam0->f_87)
				{
					func_258(iParam0, 2, 1, &(Local_1734[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1225951737:
				if (iParam0->f_87)
				{
					func_277(iParam0, 1, &(Local_1734[iParam0->f_34 /*32*/].f_1), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 1, 0, bVar24);
				}
				break;
			
			case 2074432461:
				if (iParam0->f_87)
				{
					func_280(iParam0, 1, &(Local_1734[iParam0->f_34 /*32*/].f_1), Local_579[func_102() /*8*/], 1, 0, bVar24);
				}
				break;
			}
	}
	iParam0->f_34 = -1;
	if (iParam0->f_7 != iParam0->f_5)
	{
		iParam0->f_8 = 1;
	}
	else
	{
		iParam0->f_8 = 0;
	}
	iParam0->f_7 = iParam0->f_5;
	if (!unk_0x3C57C2F07FEE34D2(&(iParam0->f_25), &(iParam0->f_9)))
	{
		iParam0->f_33 = 1;
	}
	else
	{
		iParam0->f_33 = 0;
	}
	iParam0->f_25 = { iParam0->f_9 };
	iVar25 = 0;
	while (iVar25 < Local_28.f_0)
	{
		if (Local_28[iVar25 /*110*/] == *iParam0)
		{
			iVar26 = iVar25;
		}
		iVar25++;
	}
	switch (iParam0->f_5)
	{
		case 5:
			switch (unk_0x2E87280918B16506(&(iParam0->f_9)))
			{
				case joaat("gunshot"):
				case 1921975061:
				case 880647822:
				case joaat("killed"):
				case 1518302817:
				case -1298712083:
					if ((func_290(*iParam0) || (iParam0->f_48 % 2) == 0) || !func_181(Local_469.f_0))
					{
						if ((unk_0x2E87280918B16506(&(iParam0->f_9)) == joaat("gunshot") || unk_0x2E87280918B16506(&(iParam0->f_9)) == 1921975061) || unk_0x2E87280918B16506(&(iParam0->f_9)) == 880647822)
						{
							if (func_267(iVar26))
							{
								Var27 = { func_289(iVar26, "JS_GUN1") };
								if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_288(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_288(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else
							{
								switch (iVar26)
								{
									case 2:
										StringCopy(&Var27, "SOL1_ARM1", 24);
										break;
									
									case 3:
										StringCopy(&Var27, "SOL1_ARM2", 24);
										break;
								}
								if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_288(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_288(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
						}
						else if ((unk_0x2E87280918B16506(&(iParam0->f_9)) == joaat("killed") || unk_0x2E87280918B16506(&(iParam0->f_9)) == 1518302817) || unk_0x2E87280918B16506(&(iParam0->f_9)) == -1298712083)
						{
							if (func_267(iVar26))
							{
								Var27 = { func_289(iVar26, "JS_KILL") };
								if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
								{
									func_288(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_288(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else if (iParam0->f_48 == 0)
							{
								func_288(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					else
					{
						if (func_267(iVar26))
						{
							Var27 = { func_289(iVar26, "JS_GETSEC") };
							if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_48 == 0)
							{
								func_288(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_SECIN1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_SECIN2", 24);
									break;
							}
							if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_48 == 0)
							{
								func_288(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						iParam0->f_48++;
					}
					break;
			}
			break;
		
		case 4:
			switch (unk_0x2E87280918B16506(&(iParam0->f_9)))
			{
				case 1224761252:
					if (func_281(*iParam0, 4))
					{
						func_258(iParam0, 4, 0, "GUN_AIMED_AT", 1, 0);
					}
					else if ((unk_0x320D1840B6DAA1CC() - iParam0->f_37) > 1000)
					{
						func_258(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					break;
				
				case -1645534839:
					if (func_281(*iParam0, 4))
					{
						func_258(iParam0, 4, 1, "GUN_AIMED_AT", 1, 0);
					}
					if (((unk_0x320D1840B6DAA1CC() - iParam0->f_37) > 15000 || (unk_0x320D1840B6DAA1CC() - iParam0->f_38) > 3000) && !unk_0x769CB0E209F11AD8(*iParam0))
					{
						func_258(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					else if (func_290(*iParam0) || iParam0->f_48 == 0)
					{
						if (func_267(iVar26))
						{
							Var27 = { func_289(iVar26, "JS_HND1") };
							if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_SCAR1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_SCAR2", 24);
									break;
							}
							if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					else
					{
						if (func_267(iVar26))
						{
							Var27 = { func_289(iVar26, "JS_HND1") };
							if (func_264(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_SCAR1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_SCAR2", 24);
									break;
							}
							if (func_264(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					break;
			}
			break;
		
		case 0:
			switch (iVar26)
			{
				case 1:
					if (func_48() && (unk_0x320D1840B6DAA1CC() - iLocal_2549) > 5000)
					{
						switch (iLocal_2579)
						{
							case 0:
								func_264(iVar26, "JS_STOCK", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2579++;
								break;
							
							case 1:
								func_264(iVar26, "JS_STOCKb", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2579++;
								break;
							
							case 2:
								func_264(iVar26, "JS_STOCKc", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2579++;
								break;
							
							case 3:
								func_264(iVar26, "JS_STOCKd", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2579++;
								break;
							
							case 4:
								func_264(iVar26, "JS_STOCKe", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2579++;
								break;
							
							case 5:
								func_264(iVar26, "JS_STOCKf", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2579++;
								break;
							
							case 6:
								func_264(iVar26, "JS_STOCKg", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2579++;
								break;
							
							case 7:
								func_264(iVar26, "JS_STOCKh", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2579++;
								break;
							
							case 8:
								func_264(iVar26, "JS_STOCKi", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2579++;
								break;
							
							case 9:
								func_264(iVar26, "JS_STOCKj", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2579++;
								break;
							
							case 10:
								func_264(iVar26, "JS_STOCKk", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2579 = 0;
								break;
							}
					}
					break;
				
				case 2:
					if (!iParam0->f_49)
					{
						if (func_264(iVar26, "SOL1_AMB1", iParam0->f_5, 0, 0, 1, 0, 1, 0, 1))
						{
							func_45(&uLocal_2383, 4, Local_28[2 /*110*/], "CONSTRUCTION1", 0, 1);
							func_45(&uLocal_2383, 3, Local_28[3 /*110*/], "CONSTRUCTION2", 0, 1);
							iParam0->f_49 = 1;
						}
					}
					break;
			}
			break;
		
		case 1:
			if (unk_0x3C57C2F07FEE34D2(&(iParam0->f_9), "SEE_VAN_LEAVING") || unk_0x3C57C2F07FEE34D2(&(iParam0->f_9), "CHECK_DRIVER"))
			{
				Var36 = { func_287(unk_0xCACAD935C0BEE14F(unk_0xE2D3D51028F0428A(), 0f, 1f, 0f) - unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) };
				Var39 = { func_287(unk_0x6B62510F212526DC(Local_28[iVar26 /*110*/], 1) - unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) };
				uVar34 = func_286(Var36, Var39);
				fVar35 = unk_0x12528DC2778CB217(uVar34);
				if ((fVar35 < 90f && fVar1 < 8f) && unk_0x207D53F9E0190691(unk_0xE2D3D51028F0428A()) < 1f)
				{
					bVar33 = true;
				}
			}
			switch (unk_0x2E87280918B16506(&(iParam0->f_9)))
			{
				case -414594135:
				case 1260350710:
					if (func_290(*iParam0) && unk_0x3C57C2F07FEE34D2(&(iParam0->f_9), "SEE_VAN_LEAVING"))
					{
						if (func_267(iVar26))
						{
							Var27 = { func_289(iVar26, "JS_VAN_LVE1") };
							func_264(iVar26, &Var27, iParam0->f_5, 1, 0, 1, 1000, 0, 0, 0);
						}
					}
					else if (bVar33)
					{
						func_280(iParam0, 1, "CHECK_DRIVER", Local_579[func_102() /*8*/], 0, 1, 0);
					}
					else if (func_108(unk_0xE2D3D51028F0428A(), Local_642, 1) >= 20f)
					{
						if (fVar1 > 5f)
						{
							func_258(iParam0, 1, 0, "VAN_LOST", 1, 0);
						}
					}
					break;
				
				case 58299323:
					if (func_290(*iParam0))
					{
						Var27 = { func_289(iVar26, "JS_VAN_LVE2") };
						func_264(iVar26, &Var27, iParam0->f_5, 1, 0, 1, 0, 0, 0, 0);
					}
					else if ((unk_0x320D1840B6DAA1CC() - iParam0->f_37) > 3000)
					{
						func_258(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case 356486511:
					if (bVar33)
					{
						if ((unk_0x320D1840B6DAA1CC() - iParam0->f_37) > 2000 && !unk_0x769CB0E209F11AD8(*iParam0))
						{
							func_258(iParam0, 3, 1, "STEALING_VAN", 1, 0);
						}
					}
					else
					{
						func_280(iParam0, 1, "SEE_VAN_LEAVING_1", Local_579[func_102() /*8*/], 0, 1, 0);
					}
					break;
				
				case -1225951737:
					if (((unk_0x320D1840B6DAA1CC() - iParam0->f_37) > 4000 && func_108(*iParam0, iParam0->f_88, 1) < 3f) && unk_0x443C6AFB940B3C83(*iParam0))
					{
						func_258(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					else if (func_290(*iParam0))
					{
						if (func_267(iVar26))
						{
							Var27 = { func_289(iVar26, "JS_SND_INV") };
							if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 3f, 3000, 500, 0, 0, 0);
							}
						}
					}
					break;
				
				case -927541383:
					if ((unk_0x320D1840B6DAA1CC() - iParam0->f_37) > 4000 && !unk_0x769CB0E209F11AD8(*iParam0))
					{
						if (func_267(iVar26))
						{
							Var27 = { func_289(iVar26, "JS_SNDLOST2") };
							func_264(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
						func_258(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					else if (func_290(*iParam0))
					{
						if (func_267(iVar26))
						{
							Var27 = { func_289(iVar26, "JS_SNDLOST1") };
							func_264(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 3:
			switch (unk_0x2E87280918B16506(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
				case -419867425:
					if ((((unk_0x320D1840B6DAA1CC() - iParam0->f_38) > 8000 && func_108(unk_0xE2D3D51028F0428A(), Local_642, 1) > 65f) && (func_107(unk_0xE2D3D51028F0428A(), *iParam0, 1) > 10f || (unk_0x320D1840B6DAA1CC() - iParam0->f_38) > 16000)) && !unk_0x769CB0E209F11AD8(*iParam0))
					{
						func_258(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					else if (func_290(*iParam0) && iParam0->f_35)
					{
						if (!iParam0->f_84)
						{
							if (func_267(iVar26))
							{
								Var27 = { func_289(iVar26, "JS_MELE_1") };
								if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_288(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							else
							{
								switch (iVar26)
								{
									case 2:
										StringCopy(&Var27, "SOL1_FIGHT1", 24);
										break;
									
									case 3:
										StringCopy(&Var27, "SOL1_FIGHT2", 24);
										break;
								}
								if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_288(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							iParam0->f_84 = 1;
						}
						else if (func_267(iVar26))
						{
							Var27 = { func_289(iVar26, "JS_MELE_2") };
							if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_FIGHT1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_FIGHT2", 24);
									break;
							}
							if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
							}
						}
					}
					break;
				
				case 1093888274:
					if ((unk_0x320D1840B6DAA1CC() - iParam0->f_37) > 4000)
					{
						func_258(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					if (func_290(*iParam0))
					{
						if (func_267(iVar26))
						{
							Var27 = { func_289(iVar26, "JS_MELE_ESC") };
							func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
						}
					}
					break;
				
				case 1682434916:
					if (((((unk_0x320D1840B6DAA1CC() - iParam0->f_37) > 2000 && iParam0->f_39) && !unk_0x769CB0E209F11AD8(*iParam0)) && iLocal_2598 != 9) && iLocal_2598 != 10)
					{
						func_258(iParam0, 3, 0, "EXIT_VAN", 1, 0);
					}
					if (func_290(*iParam0))
					{
						if (func_267(iVar26))
						{
							Var27 = { func_289(iVar26, "JS_VAN_IN2") };
							if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_VAN2", 24);
									break;
							}
							if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_48() && (unk_0x320D1840B6DAA1CC() - iLocal_2549) > 2000)
					{
						if (func_267(iVar26))
						{
							Var27 = { func_289(iVar26, "JS_VAN_TK") };
							if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
						}
					}
					break;
				
				case -924218668:
					if (func_290(*iParam0))
					{
						if (func_267(iVar26))
						{
							Var27 = { func_289(iVar26, "JS_VAN_IN1") };
							if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_VAN2", 24);
									break;
							}
							if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_48() && (unk_0x320D1840B6DAA1CC() - iLocal_2549) > 2000)
					{
						if (func_267(iVar26))
						{
							Var27 = { func_289(iVar26, "JS_VAN_TK") };
							if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
				
				case 2056033185:
					if (func_290(*iParam0))
					{
						if (func_267(iVar26))
						{
							Var27 = { func_289(iVar26, "JS_VAN_IN2") };
							if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_VAN2", 24);
									break;
							}
							if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 2:
			if ((unk_0x320D1840B6DAA1CC() - iParam0->f_38) > 5000 && !unk_0x769CB0E209F11AD8(*iParam0))
			{
				if (iVar26 == 1)
				{
					func_264(iVar26, "JS_STOCK2", 0, 0, 0, 1, 1000, 0, 0, 0);
					iLocal_2579 = 0;
				}
				func_258(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
			}
			else
			{
				if (iParam0->f_39)
				{
					if ((unk_0x320D1840B6DAA1CC() - iParam0->f_38) > 1000 && !unk_0x769CB0E209F11AD8(*iParam0))
					{
						if (((unk_0x3C57C2F07FEE34D2(&(iParam0->f_9), "ENT_FOOT") || unk_0x3C57C2F07FEE34D2(&(iParam0->f_9), "ENT_VEH")) || unk_0x3C57C2F07FEE34D2(&(iParam0->f_9), "WH_FOOT")) || unk_0x3C57C2F07FEE34D2(&(iParam0->f_9), "WH_VEH"))
						{
							Var42 = { iParam0->f_9 };
							StringConCat(&Var42, "_LEAVE", 32);
							func_258(iParam0, 2, 0, &Var42, 1, 0);
						}
					}
					if ((unk_0x3C57C2F07FEE34D2(&(iParam0->f_9), "WH_FOOT") || unk_0x3C57C2F07FEE34D2(&(iParam0->f_9), "WH_VEH")) || (unk_0x3C57C2F07FEE34D2(&(iParam0->f_9), "WH_DITCH_VEH") && !unk_0x769CB0E209F11AD8(*iParam0)))
					{
						if (((iParam0->f_104 >= 6 && iLocal_2549 != -1) && (unk_0x320D1840B6DAA1CC() - iLocal_2549) > 7000) && (unk_0x320D1840B6DAA1CC() - iParam0->f_38) == 0)
						{
							func_258(iParam0, 3, 0, "WH_FAILED_LEAVE", 1, 0);
						}
					}
				}
				switch (unk_0x2E87280918B16506(&(iParam0->f_9)))
				{
					case -426892158:
						if (func_290(*iParam0))
						{
							if (!iParam0->f_82)
							{
								if (func_267(iVar26))
								{
									if (!iParam0->f_83)
									{
										Var27 = { func_289(iVar26, "JS_ENT_F1") };
										func_264(iVar26, &Var27, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
									else
									{
										Var27 = { func_289(iVar26, "JS_ENT_F1_P") };
										func_264(iVar26, &Var27, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
								}
							}
							else if (func_267(iVar26))
							{
								if (!iParam0->f_83)
								{
									Var27 = { func_289(iVar26, "JS_ENT_F2") };
									func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
								else
								{
									Var27 = { func_289(iVar26, "JS_ENT_F2_P") };
									func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
							}
							iParam0->f_82 = 1;
						}
						else if (func_48() && (unk_0x320D1840B6DAA1CC() - iLocal_2549) > 5000)
						{
							if (func_267(iVar26))
							{
								if (!iParam0->f_83)
								{
									Var27 = { func_289(iVar26, "JS_ENT_F") };
									func_264(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								else
								{
									Var27 = { func_289(iVar26, "JS_ENT_F_P") };
									func_264(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
							}
						}
						break;
					
					case -1461435341:
						if (func_290(*iParam0) || iParam0->f_48 == 0)
						{
							if (!iParam0->f_82)
							{
								if (func_267(iVar26))
								{
									Var27 = { func_289(iVar26, "JS_ENT_V1") };
									if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
									{
										iParam0->f_48++;
									}
								}
								iParam0->f_82 = 1;
							}
							else if (unk_0x3C57C2F07FEE34D2(&(iParam0->f_17), "WH_VEH"))
							{
								if (func_267(iVar26))
								{
									Var27 = { func_289(iVar26, "JS_ENT_V") };
									if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
									{
										iParam0->f_48++;
									}
								}
							}
							else if (func_267(iVar26))
							{
								Var27 = { func_289(iVar26, "JS_ENT_V3") };
								if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									iParam0->f_48++;
								}
							}
						}
						else if (func_48() && (unk_0x320D1840B6DAA1CC() - iLocal_2549) > 5000)
						{
							if (func_267(iVar26))
							{
								Var27 = { func_289(iVar26, "JS_ENT_V3") };
								func_264(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							}
						}
						break;
					
					case -972653884:
						if (func_290(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_267(iVar26))
								{
									Var27 = { func_289(iVar26, "JS_WH1") };
									if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_267(iVar26))
								{
									Var27 = { func_289(iVar26, "JS_WH2") };
									if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_48() && (unk_0x320D1840B6DAA1CC() - iLocal_2549) > 5000)
							{
								if (func_267(iVar26))
								{
									if (iParam0->f_104 < 5)
									{
										Var27 = { func_289(iVar26, "JS_WH") };
									}
									else
									{
										Var27 = { func_289(iVar26, "JS_WH_F") };
									}
									if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case -640827668:
						if (func_290(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_267(iVar26))
								{
									Var27 = { func_289(iVar26, "JS_WH1") };
									if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_267(iVar26))
								{
									Var27 = { func_289(iVar26, "JS_WH2") };
									if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_48() && (unk_0x320D1840B6DAA1CC() - iLocal_2549) > 5000)
							{
								if (func_267(iVar26))
								{
									if (iParam0->f_104 < 5)
									{
										if (((iParam0->f_104 - 1) % 2) == 0)
										{
											Var27 = { func_289(iVar26, "JS_ENT_V4") };
										}
										else
										{
											Var27 = { func_289(iVar26, "JS_ENT_V3") };
										}
									}
									else
									{
										Var27 = { func_289(iVar26, "JS_WH_F") };
									}
									if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case -520621538:
						if (func_290(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_267(iVar26))
								{
									Var27 = { func_289(iVar26, "JS_WH1") };
									if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_267(iVar26))
								{
									Var27 = { func_289(iVar26, "JS_WH2") };
									if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_48() && (unk_0x320D1840B6DAA1CC() - iLocal_2549) > 5000)
							{
								if (func_267(iVar26))
								{
									if (iParam0->f_104 < 5)
									{
										if (((iParam0->f_104 - 1) % 2) == 0)
										{
											Var27 = { func_289(iVar26, "JS_ENT_V3") };
										}
										else
										{
											Var27 = { func_289(iVar26, "JS_WH") };
										}
									}
									else
									{
										Var27 = { func_289(iVar26, "JS_WH_F") };
									}
									if (func_264(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case 778765338:
						if (iParam0->f_48 == 0)
						{
							if (func_48() && (unk_0x320D1840B6DAA1CC() - iLocal_2549) > 1000)
							{
								if (func_267(iVar26))
								{
									Var27 = { func_289(iVar26, "JS_ENT_V4") };
									func_264(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								iParam0->f_48++;
							}
						}
						else if (func_48() && (unk_0x320D1840B6DAA1CC() - iLocal_2549) > 5000)
						{
							if (((iParam0->f_48 - 1) % 3) == 0)
							{
								Var27 = { func_289(iVar26, "JS_ENT_V4") };
							}
							else
							{
								Var27 = { func_289(iVar26, "JS_ENT_V3") };
							}
							func_264(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							iParam0->f_48++;
						}
						break;
					
					case 1580556320:
						if (iParam0->f_48 == 0)
						{
							if (func_48() && (unk_0x320D1840B6DAA1CC() - iLocal_2549) > 1000)
							{
								if (func_267(iVar26))
								{
									if (!iParam0->f_83)
									{
										Var27 = { func_289(iVar26, "JS_ENT_F3") };
										func_264(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
									else
									{
										Var27 = { func_289(iVar26, "JS_ENT_F3_P") };
										func_264(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
								}
								iParam0->f_48++;
							}
						}
						break;
					
					case -1697689838:
					case -628260985:
					case -1891358342:
						if (iParam0->f_48 == 0)
						{
							if (func_48() && (unk_0x320D1840B6DAA1CC() - iLocal_2549) > 1000)
							{
								if (func_267(iVar26))
								{
									Var27 = { func_289(iVar26, "JS_ENT_V5") };
									func_264(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								iParam0->f_48++;
							}
						}
						break;
					}
			}
			break;
	}
}

float func_286(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_287(struct<3> Param0)
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

void func_288(int iParam0, char* sParam1, char* sParam2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (Local_28[iVar0 /*110*/] == *iParam0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	iParam0->f_50 = iVar1;
	StringCopy(&(iParam0->f_50.f_1), sParam1, 64);
	StringCopy(&(iParam0->f_50.f_17), sParam2, 24);
	iParam0->f_50.f_28 = iParam4;
	iParam0->f_50.f_26 = fParam3;
	iParam0->f_50.f_29 = iParam5;
	iParam0->f_50.f_30 = iParam7;
	iParam0->f_50.f_31 = iParam8;
	if (bParam6)
	{
		func_261(&(iParam0->f_50), 0);
	}
}

struct<6> func_289(int iParam0, char* sParam1)
{
	struct<6> Var0;
	
	StringCopy(&Var0, sParam1, 24);
	if (iParam0 == 1)
	{
		StringConCat(&Var0, "b", 24);
	}
	return Var0;
}

int func_290(struct<34> Param0, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109)
{
	if (Param0.f_8 || Param0.f_33)
	{
		return 1;
	}
	return 0;
}

void func_291(int iParam0)
{
	if (unk_0x7E006F2E24F03BB4(*iParam0, unk_0xE2D3D51028F0428A()))
	{
		iParam0->f_40 = unk_0x320D1840B6DAA1CC();
		iParam0->f_39 = 1;
	}
	else if ((unk_0x320D1840B6DAA1CC() - iParam0->f_40) > 2000 || !unk_0x2E7F5417D4F4DD69(*iParam0, unk_0xE2D3D51028F0428A(), 90f))
	{
		iParam0->f_40 = unk_0x320D1840B6DAA1CC();
		iParam0->f_39 = 0;
	}
	if (iParam0->f_39)
	{
		bLocal_2595 = false;
	}
	if (bLocal_2595)
	{
		unk_0x3E3D339BAD67F6F2(*iParam0, 188, 1);
	}
	if (!func_292())
	{
		iParam0->f_41 = unk_0x42A51C8E69566474(unk_0x9E2D6C50374FCFA9(), *iParam0);
		if (iParam0->f_41)
		{
			iParam0->f_43 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
		}
	}
	else
	{
		iParam0->f_41 = 0;
	}
	switch (iParam0->f_5)
	{
		case 5:
		case 4:
		case 3:
			iParam0->f_102 = 1;
			break;
		
		default:
			iParam0->f_102 = 0;
			break;
	}
}

int func_292()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0xE5965CDF24F93A9F(Local_579[iVar0 /*8*/]) && unk_0x55A0C756C4A8220C(Local_579[iVar0 /*8*/], 0))
		{
			if (unk_0xAA2961A9653C5853(Local_579[iVar0 /*8*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_293()
{
	struct<3> Var0;
	var uVar3;
	
	unk_0xD642E010A287ADFD("BUGSTAR", &iLocal_2550);
	unk_0x9972EFADA7A2A47D(3, joaat("player"), iLocal_2550);
	unk_0x9972EFADA7A2A47D(5, iLocal_2550, joaat("player"));
	unk_0x9972EFADA7A2A47D(1, joaat("COP"), iLocal_2550);
	unk_0x9972EFADA7A2A47D(1, iLocal_2550, joaat("COP"));
	unk_0x84A65E2E9CFB6A77(Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f), Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f), 0, 1);
	unk_0x06B8FBA220C6488C(Vector(7.27131f, -3092.467f, 138.4268f) - Vector(2.375f, 22.75f, 19.4375f), Vector(7.27131f, -3092.467f, 138.4268f) + Vector(2.375f, 22.75f, 19.4375f), 0);
	unk_0x7A997A0A971D305F(138.43f, -3092.47f, 4.9f, 28.375f, 1, 0, 0, 0);
	if (func_195() || func_6(0))
	{
		iLocal_655 = 0;
		if (func_195())
		{
			if (Global_94618)
			{
				iLocal_655++;
			}
		}
		if (func_195())
		{
			func_245(iLocal_655, &Var0, &uVar3);
			func_299(Var0, uVar3, 1, 0);
		}
		bLocal_654 = true;
	}
	else
	{
		while (!func_190(1))
		{
			unk_0x4EDE34FBADD967A6(0);
			func_298(&uLocal_658);
		}
	}
	func_297(&uLocal_658, "JHP1A", 0);
	func_240(&uLocal_658, "misslsdhsclipboard@base");
	func_240(&uLocal_658, "misslsdhsclipboard@idle_a");
	func_240(&uLocal_658, "misstrevor3");
	func_173(&uLocal_658, joaat("p_amb_clipboard_01"));
	func_239(&uLocal_658, iLocal_2552);
	func_241(&uLocal_658, &cLocal_645);
	unk_0xF3E520D4DDFE531B(unk_0x9E2D6C50374FCFA9(), 0.15f);
	func_295(87);
	func_45(&uLocal_2383, 0, unk_0xE2D3D51028F0428A(), "MICHAEL", 0, 1);
	func_45(&uLocal_2383, 3, 0, "LESTER", 0, 1);
	func_263(bLocal_2548);
	func_294();
	iLocal_2552 = unk_0x63AC7EFB770FCB6F(Local_642, "po1_08_warehouseint1");
	unk_0x3E3727CDACEE36AC(&cLocal_626);
	iLocal_2603 = unk_0x2915D98110F23A29(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	while (!unk_0x01896B71C5AC966E(0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_294()
{
	Global_94619 = 1;
}

void func_295(int iParam0)
{
	Global_96296 = 0;
	switch (iParam0)
	{
		case 72:
			func_296(2);
			func_296(4);
			break;
		
		case 73:
			func_296(0);
			func_296(1);
			func_296(7);
			break;
		
		case 92:
			func_296(10);
			func_296(9);
			func_296(13);
			func_296(6);
			break;
		
		case 68:
			func_296(11);
			break;
		
		case 78:
			func_296(14);
			break;
		
		case 79:
			func_296(3);
			break;
		
		default:
			break;
	}
}

void func_296(bool bParam0)
{
	unk_0xCED9E32812D6C7C7(&Global_96296, iParam0);
}

int func_297(var uParam0, char* sParam1, int iParam2)
{
	if (uParam0->f_779[iParam2 /*5*/].f_1 || uParam0->f_779[iParam2 /*5*/])
	{
		if (unk_0x3C57C2F07FEE34D2(uParam0->f_779[iParam2 /*5*/].f_4, sParam1))
		{
			uParam0->f_779[iParam2 /*5*/].f_2 = 0;
			uParam0->f_1007 = 1;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (iParam2 >= 11)
		{
			unk_0xC5BF49FEF70EBF12(sParam1, iParam2);
		}
		else
		{
			unk_0x249A0D3C5714BCF4(sParam1, iParam2);
		}
		uParam0->f_779[iParam2 /*5*/] = 1;
		uParam0->f_779[iParam2 /*5*/].f_3 = unk_0x320D1840B6DAA1CC();
		uParam0->f_779[iParam2 /*5*/].f_4 = sParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

void func_298(var uParam0)
{
	func_247(uParam0);
}

void func_299(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (func_195())
	{
		unk_0x2C07CBAFAC54A645(0);
		unk_0xB0550BC91B0159D6(&(Global_100441.f_20), 2);
		unk_0x27F66B7FE7DB7C3A(1);
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 0);
		}
		Global_100437 = { Param0 };
		Global_100440 = uParam3;
		Global_100436 = 1;
		if (iParam4 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_100441.f_20), 14);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(Global_100441.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_100441.f_20), 24);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(Global_100441.f_20), 24);
		}
		func_194(1);
	}
}

void func_300(int iParam0)
{
	struct<3> Var0;
	char[] cVar6[8];
	
	if (iParam0 == 6)
	{
		func_312();
		func_8(0);
		unk_0x1CF3F44FC2EB9F99("JHP1A_FAIL");
		unk_0xAFBDF6A5E54114C1();
	}
	else if (!bLocal_656)
	{
		bLocal_656 = true;
		iLocal_657 = iParam0;
		switch (iLocal_657)
		{
			case 1:
				StringCopy(&Var0, "JHP1A_VAN_DEAD", 24);
				break;
			
			case 3:
				StringCopy(&Var0, "JHP1A_VAN_STUCK", 24);
				break;
			
			case 2:
				StringCopy(&Var0, "JHP1A_VANS_DEAD", 24);
				break;
			
			case 4:
				StringCopy(&Var0, "JHP1A_VAN_ABAN", 24);
				break;
			
			case 5:
				StringCopy(&Var0, "JHP1A_ABAN", 24);
				break;
			
			case 0:
			default:
				StringCopy(&Var0, "JHP1A_FF", 24);
				break;
		}
		if (unk_0xACC32B78196FBC2A(&cVar6))
		{
			func_310(&Var0);
		}
		else
		{
			func_301(&Var0, &cVar6);
		}
		unk_0x1CF3F44FC2EB9F99("JHP1A_FAIL");
	}
}

void func_301(char* sParam0, char* sParam1)
{
	func_309(sParam0, sParam1);
	func_302(0);
}

void func_302(int iParam0)
{
	int iVar0;
	
	if (Global_113386.f_9085 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_303(iVar0))
		{
			return;
		}
		unk_0xCED9E32812D6C7C7(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_303(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_308();
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		unk_0x3B97C4414E778C45(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	func_307(iVar1, 1);
	unk_0xA131CC850DA50CF0(unk_0x9E2D6C50374FCFA9(), 0);
	unk_0xC204033758E4127F(unk_0x9E2D6C50374FCFA9(), 0);
	func_304(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x3E49EF84C421E367(0);
		}
	}
	Global_113386.f_9085.f_330[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085)
		{
		}
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_304(var uParam0, int iParam1)
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
		iVar1 = Global_113386.f_18533[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_306(Global_113386.f_18533[iVar0], &Var2, &fVar5))
			{
				Global_113386.f_18533[iVar0] = 318;
				func_305(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_97831[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_9 = 0f;
				Global_97831[iVar0 /*29*/].f_12 = 0f;
				Global_97831[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_10 = 0f;
				Global_97831[iVar0 /*29*/].f_13 = 0f;
				Global_97831[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_11 = 0f;
				Global_97831[iVar0 /*29*/].f_14 = 0f;
				Global_97831[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_26 = 0f;
				Global_97831[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_27 = 0f;
				Global_97831[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_305(var uParam0)
{
	*uParam0 = -15;
}

int func_306(int iParam0, var uParam1, float fParam2)
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
			return func_306(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_306(8, uParam1, fParam2);
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

void func_307(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94426[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94426[iParam0 /*2*/] = 0;
	}
}

void func_308()
{
	Global_100476 = 1;
	if (unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1))
	{
		if (unk_0xACC32B78196FBC2A(&Global_78551))
		{
			switch (func_167())
			{
				case 0:
					StringCopy(&Global_78551, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_78551, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_78551, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_78555, "", 16);
		}
		Global_100476 = 0;
	}
	else if (!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xACC32B78196FBC2A(&Global_78551))
		{
			switch (func_167())
			{
				case 0:
					StringCopy(&Global_78551, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_78551, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_78551, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_78555, "", 16);
		}
		Global_100476 = 0;
		unk_0xCED9E32812D6C7C7(&(Global_100441.f_20), 25);
	}
}

void func_309(char* sParam0, char* sParam1)
{
	if (!unk_0xACC32B78196FBC2A(sParam0))
	{
		if (unk_0xEE91150B7F06C500(sParam0) <= 16)
		{
			if (unk_0xEE91150B7F06C500(sParam1) <= 16)
			{
				StringCopy(&Global_78551, sParam0, 16);
				StringCopy(&Global_78555, sParam1, 16);
			}
		}
	}
}

void func_310(char* sParam0)
{
	func_311(sParam0);
	func_302(0);
}

void func_311(char* sParam0)
{
	if (!unk_0xACC32B78196FBC2A(sParam0))
	{
		if (unk_0xEE91150B7F06C500(sParam0) <= 16)
		{
			StringCopy(&Global_78551, sParam0, 16);
			StringCopy(&Global_78555, "", 16);
			if (unk_0x6C85295E4E1FB8B3())
			{
				unk_0x0FCCD6087693AA00();
			}
		}
	}
}

void func_312()
{
	int iVar0;
	
	if (unk_0xF79F112CE5999680("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || func_6(0))
	{
		if (!func_313())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_303(iVar0))
				{
					return;
				}
				unk_0xCED9E32812D6C7C7(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_308();
		}
	}
}

int func_313()
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

