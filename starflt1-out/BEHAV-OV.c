// ====== OVERLAY 'BEHAV-OV' ======
// store offset = 0xe070
// overlay size   = 0x14f0

#include"cpu.h"
#include"starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xa98d  codep:0x224c parp:0xa98d size:0x0006 C-string:'UNK_0xa98d'
// 1704:      UNK_0xa995  codep:0x224c parp:0xa995 size:0x0006 C-string:'UNK_0xa995'
// 1705:      UNK_0xa99d  codep:0x224c parp:0xa99d size:0x0006 C-string:'UNK_0xa99d'
// 1706:      UNK_0xa9a5  codep:0x224c parp:0xa9a5 size:0x000a C-string:'UNK_0xa9a5'
// 1707:      UNK_0xa9b1  codep:0x224c parp:0xa9b1 size:0x000a C-string:'UNK_0xa9b1'
// 1708:      UNK_0xa9bd  codep:0x224c parp:0xa9bd size:0x0006 C-string:'UNK_0xa9bd'
// 1709:      UNK_0xa9c5  codep:0x224c parp:0xa9c5 size:0x0006 C-string:'UNK_0xa9c5'
// 1710:      UNK_0xa9cd  codep:0x224c parp:0xa9cd size:0x0006 C-string:'UNK_0xa9cd'
// 1711:      UNK_0xa9d5  codep:0x224c parp:0xa9d5 size:0x0004 C-string:'UNK_0xa9d5'
// 1712:      UNK_0xa9db  codep:0x224c parp:0xa9db size:0x36d9 C-string:'UNK_0xa9db'
// 1713:      UNK_0xe0b6  codep:0x224c parp:0xe0b6 size:0x0020 C-string:'UNK_0xe0b6'
// 1714:      UNK_0xe0d8  codep:0x224c parp:0xe0d8 size:0x000a C-string:'UNK_0xe0d8'
// 1715:      UNK_0xe0e4  codep:0x224c parp:0xe0e4 size:0x0006 C-string:'UNK_0xe0e4'
// 1716:      UNK_0xe0ec  codep:0x224c parp:0xe0ec size:0x0012 C-string:'UNK_0xe0ec'
// 1717:      UNK_0xe100  codep:0x224c parp:0xe100 size:0x000a C-string:'UNK_0xe100'
// 1718:      UNK_0xe10c  codep:0x224c parp:0xe10c size:0x0032 C-string:'UNK_0xe10c'
// 1719:      UNK_0xe140  codep:0x73ea parp:0xe140 size:0x0006 C-string:'UNK_0xe140'
// 1720:      UNK_0xe148  codep:0x73ea parp:0xe148 size:0x000e C-string:'UNK_0xe148'
// 1721:      STUN.EFFEC  codep:0x73ea parp:0xe165 size:0x0016 C-string:'STUN_dot_EFFEC'
// 1722:            HITS  codep:0x744d parp:0xe184 size:0x0003 C-string:'HITS'
// 1723:           STUNS  codep:0x744d parp:0xe191 size:0x0003 C-string:'STUNS'
// 1724:      HIT.POINTS  codep:0x73ea parp:0xe1a3 size:0x0010 C-string:'HIT_dot_POINTS'
// 1725:      UNK_0xe1b5  codep:0x744d parp:0xe1b5 size:0x0008 C-string:'UNK_0xe1b5'
// 1726:          BEHAVE  codep:0x744d parp:0xe1c8 size:0x000b C-string:'BEHAVE'
// 1727:       TV-WEAPON  codep:0x744d parp:0xe1e1 size:0x0003 C-string:'TV_dash_WEAPON'
// 1728:      UNK_0xe1e6  codep:0x744d parp:0xe1e6 size:0x0003 C-string:'UNK_0xe1e6'
// 1729:      ATMO.ACTIV  codep:0x73ea parp:0xe1f8 size:0x0006 C-string:'ATMO_dot_ACTIV'
// 1730:      ?PLAYER-FI  codep:0x224c parp:0xe20d size:0x0016 C-string:'_ask_PLAYER_dash_FI'
// 1731:      ?ALIEN-CLO  codep:0x224c parp:0xe232 size:0x0024 C-string:'_ask_ALIEN_dash_CLO'
// 1732:      ?ALIEN-SMA  codep:0x224c parp:0xe265 size:0x0018 C-string:'_ask_ALIEN_dash_SMA'
// 1733:      ?RANDOM-SC  codep:0x224c parp:0xe28c size:0x000a C-string:'_ask_RANDOM_dash_SC'
// 1734: ?ALIEN-HIT-WITH-LASER  codep:0x224c parp:0xe2a5 size:0x003a C-string:'_ask_ALIEN_dash_HIT_dash_WITH_dash_LASER'
// 1735: ?ALIEN-HIT-WITH-STUNNER  codep:0x224c parp:0xe2ee size:0x0022 C-string:'_ask_ALIEN_dash_HIT_dash_WITH_dash_STUNNER'
// 1736:      ?NOTICE-PL  codep:0x224c parp:0xe31f size:0x003a C-string:'_ask_NOTICE_dash_PL'
// 1737:      ?NEXT-TO-P  codep:0x224c parp:0xe368 size:0x001e C-string:'_ask_NEXT_dash_TO_dash_P'
// 1738:      UNK_0xe388  codep:0x224c parp:0xe388 size:0x00c4 C-string:'UNK_0xe388'
// 1739:      UNK_0xe44e  codep:0x224c parp:0xe44e size:0x000c C-string:'UNK_0xe44e'
// 1740:      ?STUNS<STU  codep:0x224c parp:0xe469 size:0x000c C-string:'_ask_STUNS_st_STU'
// 1741:        ?STUNNED  codep:0x224c parp:0xe482 size:0x0048 C-string:'_ask_STUNNED'
// 1742:   ?WANTS-TO-FLY  codep:0x224c parp:0xe4d9 size:0x000a C-string:'_ask_WANTS_dash_TO_dash_FLY'
// 1743: ?WANTS-TO-FLOAT  codep:0x224c parp:0xe4f2 size:0x0070 C-string:'_ask_WANTS_dash_TO_dash_FLOAT'
// 1744:      UNK_0xe564  codep:0x224c parp:0xe564 size:0x004e C-string:'UNK_0xe564'
// 1745:      UNK_0xe5b4  codep:0x224c parp:0xe5b4 size:0x0012 C-string:'UNK_0xe5b4'
// 1746:      UNK_0xe5c8  codep:0x224c parp:0xe5c8 size:0x0032 C-string:'UNK_0xe5c8'
// 1747:      UNK_0xe5fc  codep:0x224c parp:0xe5fc size:0x003e C-string:'UNK_0xe5fc'
// 1748:      REDUCE-AGG  codep:0x224c parp:0xe649 size:0x0018 C-string:'REDUCE_dash_AGG'
// 1749:      INCREASES-  codep:0x224c parp:0xe670 size:0x003e C-string:'INCREASES_dash_'
// 1750:      UNK_0xe6b0  codep:0x224c parp:0xe6b0 size:0x000a C-string:'UNK_0xe6b0'
// 1751:      UNK_0xe6bc  codep:0x224c parp:0xe6bc size:0x005c C-string:'UNK_0xe6bc'
// 1752: ERASE-LIFEFORM-FROM-ARRAY  codep:0x224c parp:0xe727 size:0x0008 C-string:'ERASE_dash_LIFEFORM_dash_FROM_dash_ARRAY'
// 1753:      REDUCE-HIT  codep:0x224c parp:0xe73e size:0x001c C-string:'REDUCE_dash_HIT'
// 1754:      UNK_0xe75c  codep:0x224c parp:0xe75c size:0x000e C-string:'UNK_0xe75c'
// 1755:      REDUCE-STU  codep:0x224c parp:0xe779 size:0x0016 C-string:'REDUCE_dash_STU'
// 1756:      STUN-EFFEC  codep:0x224c parp:0xe79e size:0x0024 C-string:'STUN_dash_EFFEC'
// 1757:      INCREMENT-  codep:0x224c parp:0xe7d1 size:0x0014 C-string:'INCREMENT_dash_'
// 1758:      UNK_0xe7e7  codep:0x73ea parp:0xe7e7 size:0x0022 C-string:'UNK_0xe7e7'
// 1759:      UNK_0xe80b  codep:0x224c parp:0xe80b size:0x000c C-string:'UNK_0xe80b'
// 1760:             DIE  codep:0x224c parp:0xe81f size:0x001a C-string:'DIE'
// 1761:      UNK_0xe83b  codep:0x224c parp:0xe83b size:0x000e C-string:'UNK_0xe83b'
// 1762:      UNK_0xe84b  codep:0x224c parp:0xe84b size:0x0008 C-string:'UNK_0xe84b'
// 1763:      UNK_0xe855  codep:0x224c parp:0xe855 size:0x00c3 C-string:'UNK_0xe855'
// 1764:      UNK_0xe91a  codep:0x224c parp:0xe91a size:0x0111 C-string:'UNK_0xe91a'
// 1765:      AGGR-MODIF  codep:0xb869 parp:0xea3a size:0x0038 C-string:'AGGR_dash_MODIF'
// 1766:       VS.PLAYER  codep:0xb869 parp:0xea80 size:0x0037 C-string:'VS_dot_PLAYER'
// 1767:        LIFE-SIM  codep:0xb869 parp:0xeac4 size:0x0014 C-string:'LIFE_dash_SIM'
// 1768:      ERASE-LIFE  codep:0xb869 parp:0xeae7 size:0x0011 C-string:'ERASE_dash_LIFE'
// 1769:      ?REDUCE-PO  codep:0xb869 parp:0xeb07 size:0x0022 C-string:'_ask_REDUCE_dash_PO'
// 1770:      UNK_0xeb2b  codep:0x224c parp:0xeb2b size:0x0010 C-string:'UNK_0xeb2b'
// 1771:      EFFECT-LIF  codep:0xb869 parp:0xeb4a size:0x001d C-string:'EFFECT_dash_LIF'
// 1772:      UNK_0xeb69  codep:0x224c parp:0xeb69 size:0x000e C-string:'UNK_0xeb69'
// 1773:      GROUND>AIR  codep:0xb869 parp:0xeb86 size:0x0070 C-string:'GROUND_gt_AIR'
// 1774:      UNK_0xebf8  codep:0x224c parp:0xebf8 size:0x0056 C-string:'UNK_0xebf8'
// 1775:        SIMULATE  codep:0x224c parp:0xec5b size:0x005a C-string:'SIMULATE'
// 1776:      UNK_0xecb7  codep:0x224c parp:0xecb7 size:0x0076 C-string:'UNK_0xecb7'
// 1777:          %STORM  codep:0x1d29 parp:0xed38 size:0x000a C-string:'_pe_STORM'
// 1778:         ?.STORM  codep:0x224c parp:0xed4e size:0x001c C-string:'_ask__dot_STORM'
// 1779:          ?STORM  codep:0x224c parp:0xed75 size:0x0096 C-string:'_ask_STORM'
// 1780:      angle>text  codep:0x224c parp:0xee0d size:0x00e4 C-string:'angle_gt_text'
// 1781:      UNK_0xeef3  codep:0x224c parp:0xeef3 size:0x0014 C-string:'UNK_0xeef3'
// 1782:         ?EMBARK  codep:0x224c parp:0xef13 size:0x000e C-string:'_ask_EMBARK'
// 1783:      UNK_0xef23  codep:0x224c parp:0xef23 size:0x0012 C-string:'UNK_0xef23'
// 1784:      UNK_0xef37  codep:0x224c parp:0xef37 size:0x0026 C-string:'UNK_0xef37'
// 1785:       FUNCTIONS  codep:0x1d29 parp:0xef6b size:0x001d C-string:'FUNCTIONS'
// 1786:      UNK_0xef8a  codep:0x224c parp:0xef8a size:0x0012 C-string:'UNK_0xef8a'
// 1787:      UNK_0xef9e  codep:0x1d29 parp:0xef9e size:0x0002 C-string:'UNK_0xef9e'
// 1788:            MAPS  codep:0x224c parp:0xefa9 size:0x0008 C-string:'MAPS'
// 1789:       WALK&TALK  codep:0x224c parp:0xefbf size:0x0008 C-string:'WALK_and_TALK'
// 1790:          TVMOVE  codep:0x224c parp:0xefd2 size:0x000c C-string:'TVMOVE'
// 1791:      DO.WEAPONS  codep:0x224c parp:0xefed size:0x0018 C-string:'DO_dot_WEAPONS'
// 1792:          /ITEMS  codep:0x224c parp:0xf010 size:0x0008 C-string:'_slash_ITEMS'
// 1793:           ICONS  codep:0x224c parp:0xf022 size:0x001a C-string:'ICONS'
// 1794:        >BUTTONS  codep:0x4a4f parp:0xf049 size:0x0020 C-string:'_gt_BUTTONS'
// 1795:      UNK_0xf06b  codep:0x224c parp:0xf06b size:0x000a C-string:'UNK_0xf06b'
// 1796:      UNK_0xf077  codep:0x224c parp:0xf077 size:0x0068 C-string:'UNK_0xf077'
// 1797:           NAVIG  codep:0x744d parp:0xf0e9 size:0x0003 C-string:'NAVIG'
// 1798:            ^NAV  codep:0x744d parp:0xf0f5 size:0x0003 C-string:'_h_NAV'
// 1799:          -STORM  codep:0x224c parp:0xf103 size:0x0016 C-string:'_dash_STORM'
// 1800:            ?NAV  codep:0x224c parp:0xf122 size:0x0018 C-string:'_ask_NAV'
// 1801:       .DISTANCE  codep:0x224c parp:0xf148 size:0x006c C-string:'_dot_DISTANCE'
// 1802:          .CARGO  codep:0x224c parp:0xf1bf size:0x0057 C-string:'_dot_CARGO'
// 1803:         .ENERGY  codep:0x224c parp:0xf222 size:0x00a9 C-string:'_dot_ENERGY'
// 1804:      UNK_0xf2cd  codep:0x224c parp:0xf2cd size:0x0026 C-string:'UNK_0xf2cd'
// 1805:      UNK_0xf2f5  codep:0x224c parp:0xf2f5 size:0x0022 C-string:'UNK_0xf2f5'
// 1806:      UNK_0xf319  codep:0x224c parp:0xf319 size:0x0022 C-string:'UNK_0xf319'
// 1807:          .WHERE  codep:0x224c parp:0xf346 size:0x0048 C-string:'_dot_WHERE'
// 1808:          .STATS  codep:0x224c parp:0xf399 size:0x002a C-string:'_dot_STATS'
// 1809:        TV-TASKS  codep:0x224c parp:0xf3d0 size:0x0064 C-string:'TV_dash_TASKS'
// 1810:      UNK_0xf436  codep:0x224c parp:0xf436 size:0x0062 C-string:'UNK_0xf436'
// 1811:      UNK_0xf49a  codep:0x224c parp:0xf49a size:0x000a C-string:'UNK_0xf49a'
// 1812:      UNK_0xf4a6  codep:0x224c parp:0xf4a6 size:0x0008 C-string:'UNK_0xf4a6'
// 1813:      UNK_0xf4b0  codep:0x224c parp:0xf4b0 size:0x002e C-string:'UNK_0xf4b0'
// 1814:              TV  codep:0x224c parp:0xf4e5 size:0x0000 C-string:'TV'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char _pe_STORM[10] = {0x00, 0x00, 0x14, 0x00, 0x28, 0x00, 0x3c, 0x00, 0x55, 0x00}; // %STORM
unsigned char FUNCTIONS[29] = {0x06, 0x0c, 0x03, 0x0c, 0x13, 0x0c, 0x17, 0x0c, 0x13, 0x0c, 0x2b, 0x0c, 0x17, 0x0c, 0x43, 0x0c, 0x13, 0x0c, 0x57, 0x0c, 0x13, 0x0c, 0x6b, 0x0c, 0x1b, 0x0c, 0x87, 0x0c, 0x16}; // FUNCTIONS
unsigned char UNK_0xef9e[2] = {0x99, 0xf3}; // UNK_0xef9e



// 0xe082: db 0x49 0x01 0x4c 0x22 0xf0 0x0d 0x3e 0x13 0xfa 0x15 0x04 0x00 0xf0 0x0d 0x90 0x16 0x4c 0x22 0xf0 0x0d 0x12 0x7e 0x90 0x16 0x4c 0x22 0xed 0x22 0x73 0x3b 0x8c 0x21 0x92 0x6d 0x90 0x16 0x4c 0x22 0xd0 0x61 0x95 0x49 0xf2 0x79 0x12 0x7a 0xb5 0x7a 0x90 0x16 'I L"  >         L"   ~  L" "s; ! m  L" a I y z z  '

// ================================================
// 0xe0b4: WORD 'UNK_0xe0b6' codep=0x224c parp=0xe0b6
// ================================================

void UNK_0xe0b6() // UNK_0xe0b6
{
  Push(0x0040);
  Push(cc__3); // 3
  Push(cc__7); // 7
  Push(0x0026);
  WINDOW(); // WINDOW
  Push(cc__dash_1); // -1
  Push(pp_WBOTTOM); // WBOTTOM
  _plus__ex_(); // +!
}

// 0xe0cc: db 0x4c 0x22 0x20 0x0f 0x3d 0x0f 0xd8 0x4a 0x90 0x16 'L"  =  J  '

// ================================================
// 0xe0d6: WORD 'UNK_0xe0d8' codep=0x224c parp=0xe0d8
// ================================================

void UNK_0xe0d8() // UNK_0xe0d8
{
  Push(0); // 0
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xe0e2: WORD 'UNK_0xe0e4' codep=0x224c parp=0xe0e4
// ================================================

void UNK_0xe0e4() // UNK_0xe0e4
{
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xe0ea: WORD 'UNK_0xe0ec' codep=0x224c parp=0xe0ec
// ================================================

void UNK_0xe0ec() // UNK_0xe0ec
{
  Push(pp_TVEHICLE); // TVEHICLE
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  Push(0x63fc); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x63fe); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe0fe: WORD 'UNK_0xe100' codep=0x224c parp=0xe100
// ================================================

void UNK_0xe100() // UNK_0xe100
{
  Push(0x63fc); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x63fe); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
}


// ================================================
// 0xe10a: WORD 'UNK_0xe10c' codep=0x224c parp=0xe10c
// ================================================

void UNK_0xe10c() // UNK_0xe10c
{
  _at_IX(); // @IX
  _at_IY(); // @IY
}

// 0xe112: db 0x4c 0x22 0x5d 0x17 0xc1 0x6a 0x11 0x4e 0xb7 0x74 0xae 0x0b 0x14 0x59 0xae 0x0b 0xe7 0x0f 0x92 0x0f 0xc5 0x74 0xae 0x0b 0x1f 0x59 0xae 0x0b 0x92 0x0f 0xe7 0x0f 0x4e 0x4d 0x90 0x4d 0x5d 0x17 0x20 0x00 0x46 0x12 0x90 0x16 'L"]  j N t   Y       t   Y      NM M]   F   '

// ================================================
// 0xe13e: WORD 'UNK_0xe140' codep=0x73ea parp=0xe140
// ================================================
// 0xe140: db 0x44 0x36 0x01 0x9c 0xd8 0x69 'D6   i'

// ================================================
// 0xe146: WORD 'UNK_0xe148' codep=0x73ea parp=0xe148
// ================================================
// 0xe148: db 0x44 0x37 0x01 0x9c 0xd8 0x69 0xea 0x73 0x44 0x30 0x01 0x9c 0xd8 0x69 'D7   i sD0   i'

// ================================================
// 0xe156: WORD 'STUN.EFFEC' codep=0x73ea parp=0xe165
// ================================================
// 0xe165: db 0x44 0x33 0x01 0x9c 0xd8 0x69 0xea 0x73 0x44 0x0c 0x01 0x9c 0xd8 0x69 0xea 0x73 0x44 0x29 0x03 0x9c 0xd8 0x69 'D3   i sD    i sD)   i'

// ================================================
// 0xe17b: WORD 'HITS' codep=0x744d parp=0xe184
// ================================================
// 0xe184: db 0x44 0x11 0x01 'D  '

// ================================================
// 0xe187: WORD 'STUNS' codep=0x744d parp=0xe191
// ================================================
// 0xe191: db 0x44 0x12 0x01 'D  '

// ================================================
// 0xe194: WORD 'HIT.POINTS' codep=0x73ea parp=0xe1a3
// ================================================
// 0xe1a3: db 0x44 0x34 0x01 0x9c 0xd8 0x69 0x4d 0x74 0x44 0x18 0x03 0x4d 0x74 0x44 0x17 0x01 'D4   iMtD  MtD  '

// ================================================
// 0xe1b3: WORD 'UNK_0xe1b5' codep=0x744d parp=0xe1b5
// ================================================
// 0xe1b5: db 0x44 0x15 0x01 0x4d 0x74 0x44 0x13 0x01 'D  MtD  '

// ================================================
// 0xe1bd: WORD 'BEHAVE' codep=0x744d parp=0xe1c8
// ================================================
// 0xe1c8: db 0x44 0x1b 0x01 0xea 0x73 0x44 0x0b 0x01 0x9c 0xd8 0x69 'D   sD    i'

// ================================================
// 0xe1d3: WORD 'TV-WEAPON' codep=0x744d parp=0xe1e1
// ================================================
// 0xe1e1: db 0x2a 0x11 0x01 '*  '

// ================================================
// 0xe1e4: WORD 'UNK_0xe1e6' codep=0x744d parp=0xe1e6
// ================================================
// 0xe1e6: db 0x0b 0x11 0x02 '   '

// ================================================
// 0xe1e9: WORD 'ATMO.ACTIV' codep=0x73ea parp=0xe1f8
// ================================================
// 0xe1f8: db 0x20 0x11 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xe1fe: WORD '?PLAYER-FI' codep=0x224c parp=0xe20d
// ================================================

void _ask_PLAYER_dash_FI() // ?PLAYER-FI
{
  Push(pp_WEAPON_dash_); // WEAPON-
  Push(Read16(Pop())); // @
  Push(pp_TVEHICLE); // TVEHICLE
  _at__gt_C_plus_S(); // @>C+S
  Push(0x6400); // IFIELD(TV-WEAPON)
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  _eq_(); // =
  ICLOSE(); // ICLOSE
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe223: WORD '?ALIEN-CLO' codep=0x224c parp=0xe232
// ================================================

void _ask_ALIEN_dash_CLO() // ?ALIEN-CLO
{
  UNK_0xe10c(); // UNK_0xe10c
  Push(pp_WEAPXY); // WEAPXY
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  Push(cc__6); // 6
  _st_(); // <
  _gt_R(); // >R
  Push(pp_WEAPXY); // WEAPXY
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  Push(cc__6); // 6
  _st_(); // <
  R_gt_(); // R>
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe256: WORD '?ALIEN-SMA' codep=0x224c parp=0xe265
// ================================================

void _ask_ALIEN_dash_SMA() // ?ALIEN-SMA
{
  LoadData("UNK_0xe140"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0045);
  _gt_(); // >
}

// 0xe271: db 0x4c 0x22 0xb8 0xe1 0x5d 0x17 0x4f 0x00 0x2d 0x12 0x90 0x16 'L"  ] O -   '

// ================================================
// 0xe27d: WORD '?RANDOM-SC' codep=0x224c parp=0xe28c
// ================================================

void _ask_RANDOM_dash_SC() // ?RANDOM-SC
{
  UNK_0xe0d8(); // UNK_0xe0d8
  Push(0x000a);
  _st_(); // <
}


// ================================================
// 0xe296: WORD '?ALIEN-HIT-WITH-LASER' codep=0x224c parp=0xe2a5
// ================================================

void _ask_ALIEN_dash_HIT_dash_WITH_dash_LASER() // ?ALIEN-HIT-WITH-LASER
{
  UNK_0xe10c(); // UNK_0xe10c
  Push(pp_WEAPXY); // WEAPXY
  _2_at_(); // 2@
  D_eq_(); // D=
  Push(pp_TVEHICLE); // TVEHICLE
  _at__gt_C_plus_S(); // @>C+S
  Push(0x6400); // IFIELD(TV-WEAPON)
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  _eq_(); // =
  ICLOSE(); // ICLOSE
  Push(Pop() & Pop()); // AND
  Push(Read16(sp)); // DUP
  if (Pop() == 0) return;
  Push(0x0020);
  Push(0x640a); // IFIELD(BEHAVE)
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() | Pop()); // OR
  Push(0x640a); // IFIELD(BEHAVE)
  C_ex_(); // C!
}

// 0xe2d3: db 0x4c 0x22 0xd6 0xe0 0x5d 0x17 0x0a 0x00 0x46 0x12 0x90 0x16 'L"  ]   F   '

// ================================================
// 0xe2df: WORD '?ALIEN-HIT-WITH-STUNNER' codep=0x224c parp=0xe2ee
// ================================================

void _ask_ALIEN_dash_HIT_dash_WITH_dash_STUNNER() // ?ALIEN-HIT-WITH-STUNNER
{
  UNK_0xe10c(); // UNK_0xe10c
  Push(pp_WEAPXY); // WEAPXY
  _2_at_(); // 2@
  D_eq_(); // D=
  Push(pp_TVEHICLE); // TVEHICLE
  _at__gt_C_plus_S(); // @>C+S
  Push(0x6400); // IFIELD(TV-WEAPON)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  ICLOSE(); // ICLOSE
  Push(Pop() & Pop()); // AND
}

// 0xe306: db 0x4c 0x22 0x4e 0xe1 0x92 0x0c 0xe2 0xe0 0x90 0x16 'L"N       '

// ================================================
// 0xe310: WORD '?NOTICE-PL' codep=0x224c parp=0xe31f
// ================================================

void _ask_NOTICE_dash_PL() // ?NOTICE-PL
{
  Push(0x640a); // IFIELD(BEHAVE)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0040);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  UNK_0xe0d8(); // UNK_0xe0d8
  Push(0x000a);
  _st_(); // <
  if (Pop() == 0) goto label2;
  Push(0x640a); // IFIELD(BEHAVE)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0040);
  Push(Pop() | Pop()); // OR
  Push(0x640a); // IFIELD(BEHAVE)
  C_ex_(); // C!
  Push(1); // 1
  goto label3;

  label2:
  Push(0); // 0

  label3:
  return;

  label1:
  Push(1); // 1
}


// ================================================
// 0xe359: WORD '?NEXT-TO-P' codep=0x224c parp=0xe368
// ================================================

void _ask_NEXT_dash_TO_dash_P() // ?NEXT-TO-P
{
  UNK_0xe0ec(); // UNK_0xe0ec
  UNK_0xe10c(); // UNK_0xe10c
  ROT(); // ROT
  _dash_(); // -
  ABS(); // ABS
  Push(2); // 2
  _st_(); // <
  _gt_R(); // >R
  _dash_(); // -
  ABS(); // ABS
  Push(2); // 2
  _st_(); // <
  R_gt_(); // R>
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe386: WORD 'UNK_0xe388' codep=0x224c parp=0xe388
// ================================================

void UNK_0xe388() // UNK_0xe388
{
  Push(0x6400); // IFIELD(HITS)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x6401); // IFIELD(STUNS)
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() | Pop()); // OR
  UNK_0xe0e4(); // UNK_0xe0e4
}

// 0xe396: db 0x4c 0x22 0x6b 0xe1 0x92 0x0c 0x9b 0x3b 0xf5 0x12 0xe2 0xe0 0x90 0x16 0x4c 0x22 0x6b 0xe1 0x92 0x0c 0x7b 0x3b 0xf5 0x12 0xe2 0xe0 0x96 0xe3 0x07 0x13 0xf5 0x12 0x90 0x16 0x4c 0x22 0x6b 0xe1 0x92 0x0c 0x3d 0x0f 0xf5 0x12 0xe2 0xe0 0xa4 0xe3 0x07 0x13 0xf5 0x12 0x96 0xe3 0x07 0x13 0xf5 0x12 0x90 0x16 0x4c 0x22 0xa9 0xe1 0x02 0x7a 0x90 0x16 0x4c 0x22 0xcb 0xe1 0x92 0x0c 0xd2 0xe3 0xcb 0xe1 0xc9 0x79 0x92 0x0f 0x2e 0x0f 0x2d 0x12 0x90 0x16 0x4c 0x22 0xb8 0xe1 0x92 0x0c 0x5d 0x17 0x27 0x00 0x2d 0x12 0x90 0x16 0x4c 0x22 0xc6 0xe1 0x92 0x0c 0x5d 0x17 0x80 0x00 0xf5 0x12 0xe2 0xe0 0x90 0x16 0x4c 0x22 0xc6 0xe1 0x92 0x0c 0x2e 0x0f 0xf5 0x12 0x90 0x16 0x4c 0x22 0xa2 0xb6 0x90 0x16 0x4c 0x22 0xc6 0xe1 0x92 0x0c 0x9b 0x3b 0xf5 0x12 0xe2 0xe0 0x90 0x16 0x4c 0x22 0x82 0xe1 0x92 0x0c 0x9f 0x12 0x90 0x16 0x4c 0x22 0x8f 0xe1 0x92 0x0c 0x41 0x0e 0x9f 0x12 0xf2 0x0e 0x5d 0x17 0x80 0x00 0x46 0x12 0xf5 0x12 0x90 0x16 'L"k    ;      L"k   {;            L"k   =                   L"   z  L"         y  . -   L"    ] ' -   L"    ]         L"    .     L"    L"     ;      L"        L"    A     ]   F     '

// ================================================
// 0xe44c: WORD 'UNK_0xe44e' codep=0x224c parp=0xe44e
// ================================================

void UNK_0xe44e() // UNK_0xe44e
{
  Push(0x6401); // IFIELD(STUNS)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0080);
  _gt_(); // >
}


// ================================================
// 0xe45a: WORD '?STUNS<STU' codep=0x224c parp=0xe469
// ================================================

void _ask_STUNS_st_STU() // ?STUNS<STU
{
  Push(0x6401); // IFIELD(STUNS)
  Push(Read8(Pop())&0xFF); // C@
  LoadData("STUN.EFFEC"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  _st_(); // <
}


// ================================================
// 0xe475: WORD '?STUNNED' codep=0x224c parp=0xe482
// ================================================

void _ask_STUNNED() // ?STUNNED
{
  _ask_STUNS_st_STU(); // ?STUNS<STU
}

// 0xe486: db 0x4c 0x22 0x82 0xe1 0x92 0x0c 0x89 0x12 0x90 0x16 0x4c 0x22 0xc6 0xe1 0x92 0x0c 0x5d 0x17 0x10 0x00 0xf5 0x12 0xe2 0xe0 0x90 0x16 0x4c 0x22 0xb3 0xe1 0x92 0x0c 0x89 0x12 0x90 0x16 0x4c 0x22 0x73 0xe1 0x95 0x49 0x16 0x16 0xe8 0xe1 0x01 0x00 0x39 0x40 0x90 0x16 0x4c 0x22 0x73 0xe1 0x95 0x49 0x16 0x16 0xfb 0xe1 0x01 0x00 0x39 0x40 0x90 0x16 'L"        L"    ]         L"        L"s  I      9@  L"s  I      9@  '

// ================================================
// 0xe4ca: WORD '?WANTS-TO-FLY' codep=0x224c parp=0xe4d9
// ================================================

void _ask_WANTS_dash_TO_dash_FLY() // ?WANTS-TO-FLY
{
  UNK_0xe0d8(); // UNK_0xe0d8
  Push(0x0046);
  _st_(); // <
}


// ================================================
// 0xe4e3: WORD '?WANTS-TO-FLOAT' codep=0x224c parp=0xe4f2
// ================================================

void _ask_WANTS_dash_TO_dash_FLOAT() // ?WANTS-TO-FLOAT
{
  _ask_WANTS_dash_TO_dash_FLY(); // ?WANTS-TO-FLY
}

// 0xe4f6: db 0x4c 0x22 0xd6 0xe0 0x5d 0x17 0x1e 0x00 0x46 0x12 0x0c 0xe4 0x3e 0x13 0x90 0x16 0x4c 0x22 0xc6 0xe1 0x92 0x0c 0x3d 0x0f 0xf5 0x12 0xe2 0xe0 0x90 0x16 0x4c 0x22 0x5d 0x17 0xc1 0x6a 0x11 0x4e 0xfe 0xe0 0x14 0x59 0xae 0x0b 0x92 0x0f 0xf2 0x0e 0x1f 0x59 0xae 0x0b 0x92 0x0f 0x4e 0x4d 0x90 0x4d 0x5d 0x17 0x10 0x00 0x2d 0x12 0x90 0x16 0x4c 0x22 0x3e 0xe1 0x92 0x0c 0x5d 0x17 0x23 0x00 0x46 0x12 0x90 0x16 0x4c 0x22 0xb8 0xe1 0x92 0x0c 0x5d 0x17 0x41 0x00 0x2d 0x12 0x90 0x16 0x4c 0x22 0xb8 0xe1 0x92 0x0c 0x5d 0x17 0x32 0x00 0x46 0x12 0x90 0x16 'L"  ]   F   >   L"    =       L"]  j N   Y       Y    NM M]   -   L">   ] # F   L"    ] A -   L"    ] 2 F   '

// ================================================
// 0xe562: WORD 'UNK_0xe564' codep=0x224c parp=0xe564
// ================================================

void UNK_0xe564() // UNK_0xe564
{
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  Push(cc__dash_1); // -1
  Push(cc__dash_1); // -1
  return;

  label1:
  _2OVER(); // 2OVER
  ROT(); // ROT
  SWAP(); // SWAP
  _dash_(); // -
  Push(Read16(sp)); // DUP
  if (Pop() == 0) goto label2;
  Push(Read16(sp)); // DUP
  ABS(); // ABS
  _slash_(); // /

  label2:
  _gt_R(); // >R
  _dash_(); // -
  Push(Read16(sp)); // DUP
  if (Pop() == 0) goto label3;
  Push(Read16(sp)); // DUP
  ABS(); // ABS
  _slash_(); // /

  label3:
  R_gt_(); // R>
}

// 0xe5a0: db 0x4c 0x22 0xc6 0xe1 0x92 0x0c 0x5d 0x17 0x10 0x00 0x3e 0x13 0xc6 0xe1 0x6a 0x6d 0x90 0x16 'L"    ]   >   jm  '

// ================================================
// 0xe5b2: WORD 'UNK_0xe5b4' codep=0x224c parp=0xe5b4
// ================================================

void UNK_0xe5b4() // UNK_0xe5b4
{
  Push(0x640a); // IFIELD(BEHAVE)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0010);
  Push(-Pop()); // NEGATE
  Push(Pop() | Pop()); // OR
  Push(0x640a); // IFIELD(BEHAVE)
  C_ex_(); // C!
}


// ================================================
// 0xe5c6: WORD 'UNK_0xe5c8' codep=0x224c parp=0xe5c8
// ================================================

void UNK_0xe5c8() // UNK_0xe5c8
{
  Push(pp_XORMODE); // XORMODE
  Push(Read16(Pop())); // @
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  CI(); // CI
  _ask_ICON_eq_I(); // ?ICON=I
  if (Pop() == 0) goto label1;
  POINT_gt_ICON(); // POINT>ICON
  Push(0x63fc); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x63fe); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  _ex_IY(); // !IY
  _ex_IX(); // !IX

  label1:
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  _dot_BACKGR(); // .BACKGR
  _dot_LOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
  Push(pp_XORMODE); // XORMODE
  _ex__3(); // !_3
}


// ================================================
// 0xe5fa: WORD 'UNK_0xe5fc' codep=0x224c parp=0xe5fc
// ================================================

void UNK_0xe5fc() // UNK_0xe5fc
{
  Push(0xec78);
  Push(Read16(sp)); // DUP
  Push(pp_ANCHOR_dash_CONTOUR); // ANCHOR-CONTOUR
  _2_ex_(); // 2!
  ORGLIST(); // ORGLIST
}

// 0xe60a: db 0x4c 0x22 0x62 0xe5 0xb3 0x0e 0x72 0x0f 0xc5 0x74 0x76 0x6d 0x72 0x0f 0xb7 0x74 0x76 0x6d 0xc6 0xe5 0x90 0x16 0x4c 0x22 0x62 0xe5 0xc6 0x11 0xb3 0x0e 0x72 0x0f 0xc5 0x74 0x76 0x6d 0xc6 0x11 0x72 0x0f 0xb7 0x74 0x76 0x6d 0xc6 0xe5 0x90 0x16 'L"b   r  tvmr  tvm    L"b     r  tvm  r  tvm    '

// ================================================
// 0xe63a: WORD 'REDUCE-AGG' codep=0x224c parp=0xe649
// ================================================

void REDUCE_dash_AGG() // REDUCE-AGG
{
  LoadData("UNK_0xe148"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  Push(0x0033);
  RRND(); // RRND
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  LoadData("UNK_0xe148"); // from 'CREATURE    '
  C_ex_(); // C!
}


// ================================================
// 0xe661: WORD 'INCREASES-' codep=0x224c parp=0xe670
// ================================================

void INCREASES_dash_() // INCREASES-
{
  LoadData("UNK_0xe148"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  Push(0x0015);
  RRND(); // RRND
  Push(Pop() + Pop()); // +
  Push(0x0064);
  MIN(); // MIN
  LoadData("UNK_0xe148"); // from 'CREATURE    '
  C_ex_(); // C!
}

// 0xe68a: db 0x4c 0x22 0xc6 0xe1 0x92 0x0c 0x2e 0x0f 0x3e 0x13 0xc6 0xe1 0x6a 0x6d 0xfe 0xe0 0xea 0xe0 0x0a 0xe6 0xa0 0xe5 0x90 0x16 0x4c 0x22 0xfe 0xe0 0xea 0xe0 0x20 0xe6 0xa0 0xe5 0x90 0x16 'L"    . >   jm          L"          '

// ================================================
// 0xe6ae: WORD 'UNK_0xe6b0' codep=0x224c parp=0xe6b0
// ================================================

void UNK_0xe6b0() // UNK_0xe6b0
{
  CI(); // CI
  _ask_ICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_ICON(); // POINT>ICON
}


// ================================================
// 0xe6ba: WORD 'UNK_0xe6bc' codep=0x224c parp=0xe6bc
// ================================================

void UNK_0xe6bc() // UNK_0xe6bc
{
  Push(0x6400); // IFIELD(HITS)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xe6b0(); // UNK_0xe6b0
  Push(cc_DEAD_dash_IC); // DEAD-IC
  _ex_IC(); // !IC
}

// 0xe6ce: db 0x4c 0x22 0xc6 0xe1 0x92 0x0c 0x3d 0x0f 0x3e 0x13 0x5d 0x17 0xfe 0x00 0xf5 0x12 0xc6 0xe1 0x6a 0x6d 0xb7 0x74 0xae 0x0b 0xc5 0x74 0xae 0x0b 0xac 0x3b 0x3d 0x0f 0xd8 0x4a 0xb7 0x74 0x83 0x6d 0xac 0x3b 0x3d 0x0f 0xd8 0x4a 0xc5 0x74 0x83 0x6d 0x12 0xe1 0xfa 0x15 0x0e 0x00 0xc5 0x74 0x76 0x6d 0xb7 0x74 0x76 0x6d 0x60 0x16 0x04 0x00 0xde 0x0d 0xc6 0xe5 0xa0 0xe5 0x90 0x16 'L"    = > ]       jm t   t   ;=  J t m ;=  J t m       tvm tvm`           '

// ================================================
// 0xe718: WORD 'ERASE-LIFEFORM-FROM-ARRAY' codep=0x224c parp=0xe727
// ================================================

void ERASE_dash_LIFEFORM_dash_FROM_dash_ARRAY() // ERASE-LIFEFORM-FROM-ARRAY
{
  _dash_ICON(); // -ICON
  IDELETE(); // IDELETE
  UNK_0xe5fc(); // UNK_0xe5fc
}


// ================================================
// 0xe72f: WORD 'REDUCE-HIT' codep=0x224c parp=0xe73e
// ================================================

void REDUCE_dash_HIT() // REDUCE-HIT
{
  Push(0x6400); // IFIELD(HITS)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x000a);
  Push(0x0033);
  RRND(); // RRND
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  Push(0x6400); // IFIELD(HITS)
  C_ex_(); // C!
  UNK_0xe6bc(); // UNK_0xe6bc
}


// ================================================
// 0xe75a: WORD 'UNK_0xe75c' codep=0x224c parp=0xe75c
// ================================================

void UNK_0xe75c() // UNK_0xe75c
{
  _dash_ICON(); // -ICON
  Push(0xc437);
  MODULE(); // MODULE
  _plus_ICON(); // +ICON
  UNK_0xe5fc(); // UNK_0xe5fc
}


// ================================================
// 0xe76a: WORD 'REDUCE-STU' codep=0x224c parp=0xe779
// ================================================

void REDUCE_dash_STU() // REDUCE-STU
{
  Push(0x6401); // IFIELD(STUNS)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x000a);
  Push(0x001f);
  RRND(); // RRND
  _dash_(); // -
  Push(0x6401); // IFIELD(STUNS)
  C_ex_(); // C!
}


// ================================================
// 0xe78f: WORD 'STUN-EFFEC' codep=0x224c parp=0xe79e
// ================================================

void STUN_dash_EFFEC() // STUN-EFFEC
{
  Push(0x6400); // IFIELD(HITS)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0100);
  Push(0x6401); // IFIELD(STUNS)
  Push(Read8(Pop())&0xFF); // C@
  _dash_(); // -
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  Push(0x6400); // IFIELD(HITS)
  C_ex_(); // C!
  Push(0); // 0
  Push(0x6401); // IFIELD(STUNS)
  C_ex_(); // C!
}

// 0xe7be: db 0x4c 0x22 0x90 0x16 'L"  '

// ================================================
// 0xe7c2: WORD 'INCREMENT-' codep=0x224c parp=0xe7d1
// ================================================

void INCREMENT_dash_() // INCREMENT-
{
  Push(1); // 1
  Push(0x6401); // IFIELD(STUNS)
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  LoadData("STUN.EFFEC"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  MIN(); // MIN
  Push(0x6401); // IFIELD(STUNS)
  C_ex_(); // C!
}


// ================================================
// 0xe7e5: WORD 'UNK_0xe7e7' codep=0x73ea parp=0xe7e7
// ================================================
// 0xe7e7: db 0x44 0x90 0x02 0x9c 0xd8 0x69 0x4c 0x22 0x2e 0x0f 0xb3 0xe1 0x6a 0x6d 0x5a 0xe7 0xc6 0xe5 0x90 0x16 0x4c 0x22 0x3d 0x0f 0xb3 0xe1 0x6a 0x6d 0x5a 0xe7 0xc6 0xe5 0x90 0x16 'D    iL".   jmZ     L"=   jmZ     '

// ================================================
// 0xe809: WORD 'UNK_0xe80b' codep=0x224c parp=0xe80b
// ================================================

void UNK_0xe80b() // UNK_0xe80b
{
  Push(0); // 0
  Push(0x6404); // IFIELD(UNK_0xe1b5)
  C_ex_(); // C!
  UNK_0xe75c(); // UNK_0xe75c
  UNK_0xe5c8(); // UNK_0xe5c8
}


// ================================================
// 0xe817: WORD 'DIE' codep=0x224c parp=0xe81f
// ================================================

void DIE() // DIE
{
  UNK_0xe5b4(); // UNK_0xe5b4
  Push2Words("0.");
  Push(0x6400); // IFIELD(HITS)
  C_ex_(); // C!
  Push(0x6401); // IFIELD(STUNS)
  C_ex_(); // C!
  UNK_0xe6b0(); // UNK_0xe6b0
  LoadData("UNK_0xe7e7"); // from 'CREATURE    '
  Push(Read16(Pop())); // @
  _ex_ID(); // !ID
  UNK_0xe80b(); // UNK_0xe80b
  UNK_0xe6bc(); // UNK_0xe6bc
}


// ================================================
// 0xe839: WORD 'UNK_0xe83b' codep=0x224c parp=0xe83b
// ================================================

void UNK_0xe83b() // UNK_0xe83b
{
  Push(pp__h_CRIT); // ^CRIT
  Push(Read16(Pop())); // @
  POINT_gt_ICON(); // POINT>ICON
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xe849: WORD 'UNK_0xe84b' codep=0x224c parp=0xe84b
// ================================================

void UNK_0xe84b() // UNK_0xe84b
{
  Push(0); // 0
  Push(pp__h_CRIT); // ^CRIT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe853: WORD 'UNK_0xe855' codep=0x224c parp=0xe855
// ================================================

void UNK_0xe855() // UNK_0xe855
{
  Push2Words("*SHIP");
  _ask_ICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _st_(); // <
}

// 0xe863: db 0x4d 0x74 0x11 0x11 0x03 0x4d 0x74 0x10 0x1f 0x01 0x4c 0x22 0xd6 0xe0 0x41 0x0e 0x5d 0x17 0x47 0x00 0x46 0x12 0xfa 0x15 0x0a 0x00 0x32 0x0e 0x2e 0x0f 0x60 0x16 0x14 0x00 0x5d 0x17 0x5f 0x00 0x46 0x12 0xfa 0x15 0x08 0x00 0x3d 0x0f 0x60 0x16 0x04 0x00 0x73 0x3b 0x90 0x16 0x4c 0x22 0xb4 0x51 0xf2 0x79 0x63 0xe8 0x20 0x0f 0x8b 0x3b 0xd8 0x4a 0x73 0x3b 0xb3 0x0f 0x72 0x0f 0x95 0x49 0xc9 0x79 0x90 0x16 0x4d 0x74 0x10 0x0b 0x0f 0xea 0x73 0x10 0x13 0x01 0x14 0x89 0x64 0x4c 0x22 0xd6 0xe0 0x9c 0x5f 0xae 0x0b 0xfa 0x15 0x08 0x00 0x5d 0x17 0x0a 0x00 0xb3 0x0f 0xb8 0xe1 0x92 0x0c 0x3e 0xe1 0x92 0x0c 0x72 0x0f 0x35 0x10 0x46 0x12 0x90 0x16 0x4c 0x22 0xb8 0xe1 0x92 0x0c 0xa1 0xe1 0x92 0x0c 0x05 0x10 0x72 0x0f 0x73 0x3b 0x4c 0x0f 0x90 0x16 0x4c 0x22 0xf0 0x55 0xae 0x0b 0xc2 0x5b 0xae 0x0b 0xe9 0x5b 0xae 0x0b 0xd0 0x5b 0xae 0x0b 0xf6 0x0f 0xdd 0x5b 0xae 0x0b 0xe7 0x0f 0x0a 0x4f 0xee 0xa0 0x17 0x85 0x90 0x16 'Mt   Mt   L"  A ] G F     2 . `   ] _ F     = `   s;  L" Q yc    ; Js;  r  I y  Mt    s     dL"   _      ]         >   r 5 F   L"          r s;L   L" U   [   [   [     [     O      '

// ================================================
// 0xe918: WORD 'UNK_0xe91a' codep=0x224c parp=0xe91a
// ================================================

void UNK_0xe91a() // UNK_0xe91a
{
  Push(pp__n_STORM); // #STORM
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  Push(0x000b);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  Push(1); // 1
  Push(0x0064);
  RRND(); // RRND
  Push(0x001e);
  _st_(); // <
  if (Pop() == 0) return;
  Push(pp__i_INJURE); // 'INJURE
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
}

// 0xe944: db 0x4c 0x22 0xb4 0xe0 0xf6 0xe8 0xe9 0x5b 0xae 0x0b 0xc2 0x5b 0xae 0x0b 0x7b 0x3b 0x92 0x0f 0x2b 0xa0 0xb6 0x4f 0x17 0x85 0xdc 0x1b 0x04 0x54 0x48 0x45 0x20 0x47 0xad 0x95 0x49 0xf0 0x0d 0x3e 0x13 0x89 0x12 0xfa 0x15 0x08 0x00 0xde 0x0d 0x26 0xad 0x95 0x49 0xf2 0x79 0x16 0xae 0x08 0xae 0x92 0x0c 0xe6 0x06 0x91 0x75 0xc9 0x79 0xdc 0x1b 0x12 0x20 0x4c 0x49 0x46 0x45 0x46 0x4f 0x52 0x4d 0x20 0x41 0x54 0x54 0x41 0x43 0x4b 0x53 0x20 0xe9 0x5b 0xae 0x0b 0xc2 0x5b 0xae 0x0b 0x5d 0x17 0x0a 0x00 0x92 0x0f 0x2b 0xa0 0xf2 0x79 0xb3 0xe8 0x31 0xa3 0x90 0x16 0x4c 0x22 0xc6 0xe1 0x92 0x0c 0x2e 0x0f 0x3e 0x13 0xc6 0xe1 0x6a 0x6d 0x09 0xe8 0x6d 0xe8 0x2e 0x0f 0xb8 0x15 0x75 0x75 0xc0 0xe8 0xe2 0xe8 0x99 0xe8 0x44 0xe9 0xf2 0x0e 0xfa 0x15 0x26 0x00 0xb8 0xe8 0x92 0x0c 0x4c 0x0f 0x68 0xe8 0x92 0x0c 0xf2 0x0e 0x92 0x0f 0x20 0x0f 0x89 0x11 0x5d 0x17 0x64 0x00 0xad 0x11 0x68 0xe8 0x6a 0x6d 0x87 0x5b 0xb7 0x6d 0x60 0x16 0x13 0x00 0x32 0x0e 0xdc 0x1b 0x0c 0x2c 0x20 0x42 0x55 0x54 0x20 0x4d 0x49 0x53 0x53 0x45 0x53 0xdc 0x1b 0x01 0x2e 0xc9 0x79 0xf2 0x79 0x5d 0x17 0xf4 0x01 0xef 0x2a 0xd0 0x15 0xab 0xff 0xb2 0xe5 0xcf 0x5e 0x37 0x3a 0x15 0x5f 0x37 0x3a 0x90 0x16 'L"     [   [  {;  +  O     THE G  I  >         &  I y         u y    LIFEFORM ATTACKS  [   [  ]     +  y  1   L"    . >   jm  m .   uu      D     &     L h           ] d   h jm [ m`   2    , BUT MISSES   . y y]    *       ^7: _7:  '

// ================================================
// 0xea2b: WORD 'AGGR-MODIF' codep=0xb869 parp=0xea3a
// ================================================
// 0xea3a: db 0x03 0x09 0x03 0x5e 0xea 0x66 0xea 0x6c 0xea 0x0d 0xe2 0x32 0xe2 0x65 0xe2 0x73 0xe2 0x8c 0xe2 0xa5 0xe2 0xd5 0xe2 0xee 0xe2 0xae 0x0b 0xe7 0x0f 0x0a 0x4f 0xee 0xa0 0x20 0x0f 0x20 0x05 0x49 0xe6 0x80 0x81 0x82 0x03 0x84 0x03 0x70 0xe6 0x85 0x83 0x86 0x03 0x70 0xe6 0x87 0x83 0x86 '   ^ f l   2 e s              O      I       p     p    '

// ================================================
// 0xea72: WORD 'VS.PLAYER' codep=0xb869 parp=0xea80
// ================================================
// 0xea80: db 0x03 0x07 0x03 0x9e 0xea 0xa7 0xea 0xaf 0xea 0x08 0xe3 0x88 0xe3 0x82 0xe4 0x1f 0xe3 0x48 0xe5 0x68 0xe3 0x56 0xe5 0xe9 0x5b 0xae 0x0b 0x25 0x10 0x50 0x06 0x8c 0xe6 0x80 0x81 0x02 0x83 0x84 0x05 0x05 0xb4 0xe9 0x81 0x02 0x83 0x84 0x85 0x05 0xa4 0xe6 0x80 0x83 0x81 0x02 0x86 '                 H h V  [  % P                         '

// ================================================
// 0xeab7: WORD 'LIFE-SIM' codep=0xb869 parp=0xeac4
// ================================================
// 0xeac4: db 0x01 0x03 0x01 0xd2 0xea 0x88 0xe3 0x82 0xe4 0x08 0xe3 0xe9 0x5b 0xae 0x03 0xd0 0xe6 0x80 0x01 0x82 '            [       '

// ================================================
// 0xead8: WORD 'ERASE-LIFE' codep=0xb869 parp=0xeae7
// ================================================
// 0xeae7: db 0x02 0x02 0x01 0xf4 0xea 0x5b 0xae 0x1a 0xe4 0x0f 0xdd 0x5b 0xae 0x01 0x27 0xe7 0x80 '     [     [  '  '

// ================================================
// 0xeaf8: WORD '?REDUCE-PO' codep=0xb869 parp=0xeb07
// ================================================
// 0xeb07: db 0x03 0x05 0x02 0x1f 0xeb 0x24 0xeb 0x52 0x52 0xa5 0xe2 0x2e 0xe4 0xee 0xe2 0x38 0xe4 0x31 0x38 0x34 0x30 0x3b 0xac 0x3b 0x02 0x3e 0xe7 0x80 0x81 0x02 0x79 0xe7 0x82 0x83 '     $ RR  .   8 1840; ; >    y   '

// ================================================
// 0xeb29: WORD 'UNK_0xeb2b' codep=0x224c parp=0xeb2b
// ================================================

void UNK_0xeb2b() // UNK_0xeb2b
{
  UNK_0xe44e(); // UNK_0xe44e
  if (Pop() == 0) return;
  STUN_dash_EFFEC(); // STUN-EFFEC
  Push(1); // 1
  Push(0x6401); // IFIELD(STUNS)
  C_ex_(); // C!
}


// ================================================
// 0xeb3b: WORD 'EFFECT-LIF' codep=0xb869 parp=0xeb4a
// ================================================
// 0xeb4a: db 0x02 0x04 0x02 0x5d 0xeb 0x62 0xeb 0x88 0xe4 0x88 0xe3 0x38 0xe4 0x82 0xe4 0x20 0x20 0x3a 0x20 0x02 0x1f 0xe8 0x80 0x81 0x02 0xc0 0xe7 0x02 0x03 '   ] b     8     :           '

// ================================================
// 0xeb67: WORD 'UNK_0xeb69' codep=0x224c parp=0xeb69
// ================================================

void UNK_0xeb69() // UNK_0xeb69
{
  UNK_0xe388(); // UNK_0xe388
  _ask_STUNS_st_STU(); // ?STUNS<STU
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  INCREMENT_dash_(); // INCREMENT-
}


// ================================================
// 0xeb77: WORD 'GROUND>AIR' codep=0xb869 parp=0xeb86
// ================================================
// 0xeb86: db 0x07 0x0e 0x07 0xc1 0xeb 0xca 0xeb 0xd3 0xeb 0xdd 0xeb 0xe3 0xeb 0xe9 0xeb 0xf0 0xeb 0x92 0xe4 0xa2 0xe4 0xac 0xe4 0x88 0xe3 0x82 0xe4 0xd9 0xe4 0xbc 0xe4 0xba 0xe3 0xf2 0xe4 0x16 0xe5 0x08 0xe5 0xf8 0xe4 0x0e 0xe4 0xb6 0x4f 0x17 0x85 0x5d 0x17 0x31 0x38 0x34 0x33 0x11 0x4c 0x20 0x0f 0x20 0x0f 0x06 0xef 0xe7 0x80 0x81 0x82 0x83 0x04 0x85 0x06 0xfd 0xe7 0x80 0x81 0x86 0x83 0x04 0x87 0x07 0xfd 0xe7 0x80 0x81 0x86 0x07 0x88 0x83 0x04 0x03 0x0b 0xe8 0x03 0x01 0x89 0x03 0x0b 0xe8 0x84 0x01 0x89 0x04 0x0b 0xe8 0x01 0x8a 0x8b 0x89 0x03 0x0b 0xe8 0x01 0x8c 0x89 '                                            O  ] 1843 L                                                         '

// ================================================
// 0xebf6: WORD 'UNK_0xebf8' codep=0x224c parp=0xebf8
// ================================================

void UNK_0xebf8() // UNK_0xebf8
{
  Push(pp_WEAPON_dash_); // WEAPON-
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(0xeb07);
  DISTRACT(); // DISTRACT
  Func13("?REDUCE-PO");
  Pop(); // DROP

  label1:
  Push(0x6400); // IFIELD(HITS)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label2;
  Push(0xea3a);
  DISTRACT(); // DISTRACT
  Func13("AGGR-MODIF");
  Pop(); // DROP

  label2:
  Push(0xea80);
  DISTRACT(); // DISTRACT
  Func13("VS.PLAYER");
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label3;
  Push(0xeac4);
  DISTRACT(); // DISTRACT
  Func13("LIFE-SIM");
  Pop(); // DROP

  label3:
  UNK_0xeb2b(); // UNK_0xeb2b
  Push(0xeb4a);
  DISTRACT(); // DISTRACT
  Func13("EFFECT-LIF");
  Pop(); // DROP
  UNK_0xeb69(); // UNK_0xeb69
  Push(0xeb86);
  DISTRACT(); // DISTRACT
  Func13("GROUND>AIR");
  Pop(); // DROP
}


// ================================================
// 0xec4e: WORD 'SIMULATE' codep=0x224c parp=0xec5b
// ================================================
// entry

void SIMULATE() // SIMULATE
{
  Push(pp__ask_NEW); // ?NEW
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xe84b(); // UNK_0xe84b
  Push(pp__ask_NEW); // ?NEW
  OFF_2(); // OFF_2

  label1:
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  Push(1); // 1
  UNK_0xe855(); // UNK_0xe855
  Push(Pop() + Pop()); // +
  _gt_(); // >
  if (Pop() == 0) return;
  UNK_0xe83b(); // UNK_0xe83b
  _at_ID(); // @ID
  Push(0x0013);
  _st_(); // <
  if (Pop() == 0) goto label2;
  UNK_0xebf8(); // UNK_0xebf8
  Push(pp_WEAPON_dash_); // WEAPON-
  Push(Read16(sp)); // DUP
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label3;
  Push(cc__dash_1); // -1
  SWAP(); // SWAP
  _st__plus__ex__gt_(); // <+!>
  goto label2;

  label3:
  Pop(); // DROP

  label2:
  ICLOSE(); // ICLOSE
  Push(pp__h_CRIT); // ^CRIT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  MOD(); // MOD
  Push(pp__h_CRIT); // ^CRIT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xecb5: WORD 'UNK_0xecb7' codep=0x224c parp=0xecb7
// ================================================

void UNK_0xecb7() // UNK_0xecb7
{
  Push(pp_XORMODE); // XORMODE
  Push(Read16(Pop())); // @
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(0x0074);
  Push(0x00b2);
  POS_dot_(); // POS.
  Push(0x000a);
  SetColor("BLACK");
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Push(0x012c);
  _slash_MOD(); // /MOD
  Push(0x120c);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0x001e);
  _slash_MOD(); // /MOD
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  Push(Read16(sp)); // DUP
  Push(0x000a);
  _st_(); // <
  if (Pop() == 0) goto label1;
  PRINT("0", 1); // (.")

  label1:
  Push(0); // 0
  _dot_R(); // .R
  PRINT("-", 1); // (.")
  Push(Read16(sp)); // DUP
  Push(0x000a);
  _st_(); // <
  if (Pop() == 0) goto label2;
  PRINT("0", 1); // (.")

  label2:
  Push(0); // 0
  _dot_R(); // .R
  PRINT("-", 1); // (.")
  Push(0); // 0
  _dot_R(); // .R
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xed2d: WORD '%STORM' codep=0x1d29 parp=0xed38
// ================================================
// 0xed38: db 0x00 0x00 0x14 0x00 0x28 0x00 0x3c 0x00 0x55 0x00 '    ( < U '

// ================================================
// 0xed42: WORD '?.STORM' codep=0x224c parp=0xed4e
// ================================================

void _ask__dot_STORM() // ?.STORM
{
  Push(pp__n_STORM); // #STORM
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _gt_(); // >
  Push(pp_STORM); // STORM
  Push(Read16(Pop())); // @
  UNK_0xe0e4(); // UNK_0xe0e4
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(0xcdd8);
  MODULE(); // MODULE
}


// ================================================
// 0xed6a: WORD '?STORM' codep=0x224c parp=0xed75
// ================================================

void _ask_STORM() // ?STORM
{
  Push(pp_ATMO); // ATMO
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(pp_STORM); // STORM
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  Push(cc__dash_1); // -1
  Push(pp_STORM); // STORM
  _plus__ex_(); // +!
  _ask__dot_STORM(); // ?.STORM
  goto label3;

  label2:
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  LoadData("ATMO.ACTIV"); // from 'PLANET      '
  Push(Read16(Pop())); // @
  Push(pp__pe_STORM); // %STORM
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(1); // 1
  Push(0x0064);
  RRND(); // RRND
  _gt_(); // >
  if (Pop() == 0) goto label4;
  Push(pp__i_STORM); // 'STORM
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  goto label5;

  label4:
  Push(1); // 1
  Push(cc__4); // 4
  RRND(); // RRND
  Push(pp__n_STORM); // #STORM
  _ex__3(); // !_3
  Push(0xcdd8);
  MODULE(); // MODULE
  Push(1); // 1
  LoadData("ATMO.ACTIV"); // from 'PLANET      '
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  SWAP(); // SWAP
  _dash_(); // -
  _3_star_(); // 3*
  RRND(); // RRND
  Push(0x000c);
  MIN(); // MIN
  Push(0); // 0
  MAX(); // MAX
  Push(pp_STORM); // STORM
  _ex__3(); // !_3
  Push(0x0064);
  Push(pp__pe_EFF); // %EFF
  _st__ex__gt_(); // <!>

  label5:
  ICLOSE(); // ICLOSE

  label3:
  UNK_0xe91a(); // UNK_0xe91a
  return;

  label1:
  Push(pp__n_STORM); // #STORM
  OFF(); // OFF
  Push(pp_STORM); // STORM
  OFF(); // OFF
  Push(0x0064);
  Push(pp__pe_EFF); // %EFF
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xee0b: WORD 'angle>text' codep=0x224c parp=0xee0d
// ================================================

void angle_gt_text() // angle>text
{
  Push(0); // 0
  Push(1); // 1
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  PRINT("NORTH", 5); // (.")
  return;

  label1:
  Push(1); // 1
  Push(1); // 1
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label2;
  Pop(); Pop();// 2DROP
  PRINT("NORTHEAST", 9); // (.")
  return;

  label2:
  Push(1); // 1
  Push(0); // 0
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label3;
  Pop(); Pop();// 2DROP
  PRINT("EAST", 4); // (.")
  return;

  label3:
  Push(1); // 1
  Push(cc__dash_1); // -1
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label4;
  Pop(); Pop();// 2DROP
  PRINT("SOUTHEAST", 9); // (.")
  return;

  label4:
  Push(0); // 0
  Push(cc__dash_1); // -1
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label5;
  Pop(); Pop();// 2DROP
  PRINT("SOUTH", 5); // (.")
  return;

  label5:
  Push(cc__dash_1); // -1
  Push(cc__dash_1); // -1
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label6;
  Pop(); Pop();// 2DROP
  PRINT("SOUTHWEST", 9); // (.")
  return;

  label6:
  Push(cc__dash_1); // -1
  Push(0); // 0
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label7;
  Pop(); Pop();// 2DROP
  PRINT("WEST", 4); // (.")
  return;

  label7:
  Push(cc__dash_1); // -1
  Push(1); // 1
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label8;
  Pop(); Pop();// 2DROP
  PRINT("NORTHWEST", 9); // (.")
  return;

  label8:
  Pop(); // DROP
  Pop(); // DROP
}


// ================================================
// 0xeef1: WORD 'UNK_0xeef3' codep=0x224c parp=0xeef3
// ================================================

void UNK_0xeef3() // UNK_0xeef3
{
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  _dot_BACKGR(); // .BACKGR
  _dot_LOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
}


// ================================================
// 0xef07: WORD '?EMBARK' codep=0x224c parp=0xef13
// ================================================

void _ask_EMBARK() // ?EMBARK
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xe100(); // UNK_0xe100
  ICLOSE(); // ICLOSE
  UNK_0xe0ec(); // UNK_0xe0ec
  D_eq_(); // D=
}


// ================================================
// 0xef21: WORD 'UNK_0xef23' codep=0x224c parp=0xef23
// ================================================

void UNK_0xef23() // UNK_0xef23
{
  Push(0x1388);
  TONE(); // TONE
  BEEPON(); // BEEPON
  Push(0x003c);
  MS(); // MS
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xef35: WORD 'UNK_0xef37' codep=0x224c parp=0xef37
// ================================================

void UNK_0xef37() // UNK_0xef37
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xe0ec(); // UNK_0xe0ec
  Push(0x63fe); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  Push(Read16(sp)); // DUP
  U_star_(); // U*
  ROT(); // ROT
  Push(0x63fc); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  Push(Read16(sp)); // DUP
  U_star_(); // U*
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xef5d: WORD 'FUNCTIONS' codep=0x1d29 parp=0xef6b
// ================================================
// 0xef6b: db 0x06 0x0c 0x03 0x0c 0x13 0x0c 0x17 0x0c 0x13 0x0c 0x2b 0x0c 0x17 0x0c 0x43 0x0c 0x13 0x0c 0x57 0x0c 0x13 0x0c 0x6b 0x0c 0x1b 0x0c 0x87 0x0c 0x16 '          +   C   W   k      '

// ================================================
// 0xef88: WORD 'UNK_0xef8a' codep=0x224c parp=0xef8a
// ================================================

void UNK_0xef8a() // UNK_0xef8a
{
  UNK_0xe0b6(); // UNK_0xe0b6
  Push(pp_FUNCTIONS); // FUNCTIONS
  SET_dash_CRS(); // SET-CRS
  Pop(); // DROP
}

// 0xef94: db 0x4c 0x22 0xcf 0xa1 0x6c 0xd0 0x90 0x16 'L"  l   '

// ================================================
// 0xef9c: WORD 'UNK_0xef9e' codep=0x1d29 parp=0xef9e
// ================================================
// 0xef9e: db 0x99 0xf3 '  '

// ================================================
// 0xefa0: WORD 'MAPS' codep=0x224c parp=0xefa9
// ================================================

void MAPS() // MAPS
{
  Push(0xcdc8);
  MODULE(); // MODULE
}


// ================================================
// 0xefb1: WORD 'WALK&TALK' codep=0x224c parp=0xefbf
// ================================================

void WALK_and_TALK() // WALK&TALK
{
  Push(0xd05c);
  MODULE(); // MODULE
}


// ================================================
// 0xefc7: WORD 'TVMOVE' codep=0x224c parp=0xefd2
// ================================================

void TVMOVE() // TVMOVE
{
  Push(0xcf50);
  MODULE(); // MODULE
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  ON_3(); // ON_3
}


// ================================================
// 0xefde: WORD 'DO.WEAPONS' codep=0x224c parp=0xefed
// ================================================

void DO_dot_WEAPONS() // DO.WEAPONS
{
  Push(pp_TVEHICLE); // TVEHICLE
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  _0_gt_(); // 0>
  if (Pop() == 0) return;
  Push(0xd04b);
  MODULE(); // MODULE
}


// ================================================
// 0xf005: WORD '/ITEMS' codep=0x224c parp=0xf010
// ================================================

void _slash_ITEMS() // /ITEMS
{
  Push(0xcefe);
  MODULE(); // MODULE
}


// ================================================
// 0xf018: WORD 'ICONS' codep=0x224c parp=0xf022
// ================================================

void ICONS() // ICONS
{
  Push(0xcec0);
  MODULE(); // MODULE
  Push(0xd013);
  MODULE(); // MODULE
  UNK_0xecb7(); // UNK_0xecb7
  Push(pp_UNK_0xef9e); // UNK_0xef9e
  _at_EXECUTE(); // @EXECUTE
  Push(pp__i__dot_VITAL); // '.VITAL
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
}


// ================================================
// 0xf03c: WORD '>BUTTONS' codep=0x4a4f parp=0xf049
// ================================================
// 0xf049: db 0x07 0x00 0x48 0x3a 0x00 0x00 0xa9 0xef 0x01 0x00 0xd2 0xef 0x02 0x00 0x10 0xf0 0x03 0x00 0xbf 0xef 0x04 0x00 0xbf 0xef 0x05 0x00 0xed 0xef 0x06 0x00 0x22 0xf0 '  H:                          " '

// ================================================
// 0xf069: WORD 'UNK_0xf06b' codep=0x224c parp=0xf06b
// ================================================

void UNK_0xf06b() // UNK_0xf06b
{
  CLICK(); // CLICK
  Push(pp_NCRS); // NCRS
  _plus__ex_(); // +!
  UNK_0xef8a(); // UNK_0xef8a
}


// ================================================
// 0xf075: WORD 'UNK_0xf077' codep=0x224c parp=0xf077
// ================================================

void UNK_0xf077() // UNK_0xf077
{
  Pop();
  switch(Pop()) // (XYSCAN
  {
  case 327:
    UNK_0xa98d(); // UNK_0xa98d
    break;
  case 328:
    UNK_0xa995(); // UNK_0xa995
    break;
  case 329:
    UNK_0xa99d(); // UNK_0xa99d
    break;
  case 331:
    UNK_0xa9a5(); // UNK_0xa9a5
    break;
  case 333:
    UNK_0xa9b1(); // UNK_0xa9b1
    break;
  case 335:
    UNK_0xa9bd(); // UNK_0xa9bd
    break;
  case 336:
    UNK_0xa9c5(); // UNK_0xa9c5
    break;
  case 337:
    UNK_0xa9cd(); // UNK_0xa9cd
    break;
  case 0:
    UNK_0xa9d5(); // UNK_0xa9d5
    break;
  case 92:
    UNK_0xa98d(); // UNK_0xa98d
    break;
  case 126:
    UNK_0xa995(); // UNK_0xa995
    break;
  case 124:
    UNK_0xa9a5(); // UNK_0xa9a5
    break;
  case 500:
    UNK_0xa9b1(); // UNK_0xa9b1
    break;
  case 335:
    UNK_0xa9bd(); // UNK_0xa9bd
    break;
  case 96:
    UNK_0xa9c5(); // UNK_0xa9c5
    break;
  default:
    UNK_0xa9db(); // UNK_0xa9db
    break;

  }
  Push(0); // 0
  Push(1); // 1
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  Push(1); // 1
  UNK_0xf06b(); // UNK_0xf06b
  goto label2;

  label1:
  Push(0); // 0
  Push(cc__dash_1); // -1
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label3;
  Pop(); Pop();// 2DROP
  Push(cc__dash_1); // -1
  UNK_0xf06b(); // UNK_0xf06b
  goto label2;

  label3:
  Pop(); // DROP
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label4;
  UNK_0xef23(); // UNK_0xef23
  Push(pp_NCRS); // NCRS
  Push(Read16(Pop())); // @
  Pop();
  switch(Pop()) // >BUTTONS
  {
  case 0:
    MAPS(); // MAPS
    break;
  case 1:
    TVMOVE(); // TVMOVE
    break;
  case 2:
    _slash_ITEMS(); // /ITEMS
    break;
  case 3:
    WALK_and_TALK(); // WALK&TALK
    break;
  case 4:
    WALK_and_TALK(); // WALK&TALK
    break;
  case 5:
    DO_dot_WEAPONS(); // DO.WEAPONS
    break;
  case 6:
    ICONS(); // ICONS
    break;
  default:
    NOP(); // NOP
    break;

  }
  UNK_0xeef3(); // UNK_0xeef3

  label4:
  Pop(); // DROP

  label2:
  _ask_EMBARK(); // ?EMBARK
  if (Pop() == 0) return;
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(cc__dash_1); // -1
  Push(Read16(sp)); // DUP
  Push(pp_YVIS); // YVIS
  _st__plus__ex__gt_(); // <+!>
  Push(pp_YABS); // YABS
  _st__plus__ex__gt_(); // <+!>
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  OFF(); // OFF
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(cc__dash_1); // -1
  Push(0x63fe); // IFIELD(INST-Y)
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf0df: WORD 'NAVIG' codep=0x744d parp=0xf0e9
// ================================================
// 0xf0e9: db 0x11 0x17 0x03 '   '

// ================================================
// 0xf0ec: WORD '^NAV' codep=0x744d parp=0xf0f5
// ================================================
// 0xf0f5: db 0x10 0x1b 0x01 '   '

// ================================================
// 0xf0f8: WORD '-STORM' codep=0x224c parp=0xf103
// ================================================

void _dash_STORM() // -STORM
{
  Push(pp__n_STORM); // #STORM
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(cc__4); // 4
  _st_(); // <
  SWAP(); // SWAP
  Push(0x000b);
  _gt_(); // >
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf119: WORD '?NAV' codep=0x224c parp=0xf122
// ================================================

void _ask_NAV() // ?NAV
{
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x6406); // IFIELD(NAVIG)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x640a); // IFIELD(^NAV)
  Push(Read8(Pop())&0xFF); // C@
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(0x00c7);
  _gt_(); // >
}


// ================================================
// 0xf13a: WORD '.DISTANCE' codep=0x224c parp=0xf148
// ================================================

void _dot_DISTANCE() // .DISTANCE
{
  Push(0x0074);
  Push(0x0096);
  POS_dot_(); // POS.
  Push(cc__8); // 8
  SetColor("BLACK");
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  _dash_STORM(); // -STORM
  _ask_NAV(); // ?NAV
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNK_0xef37(); // UNK_0xef37
  Push(cc__5); // 5
  _dot_R(); // .R
  PRINT("KM.", 3); // (.")
  goto label2;

  label1:
  PRINT("LOST!", 5); // (.")

  label2:
  Push(0x0074);
  Push(0x008f);
  POS_dot_(); // POS.
  Push(0x0009);
  SetColor("BLACK");
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  _dash_STORM(); // -STORM
  _ask_NAV(); // ?NAV
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  UNK_0xe0ec(); // UNK_0xe0ec
  Push(0x63fc); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x63fe); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  UNK_0xe564(); // UNK_0xe564
  _2SWAP(); // 2SWAP
  Pop(); Pop();// 2DROP
  angle_gt_text(); // angle>text
}


// ================================================
// 0xf1b4: WORD '.CARGO' codep=0x224c parp=0xf1bf
// ================================================

void _dot_CARGO() // .CARGO
{
  Push(0x0074);
  Push(0x009d);
  POS_dot_(); // POS.
  Push(cc__3); // 3
  SetColor("BLACK");
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  Push(0x6400); // IFIELD(UNK_0xe1e6)
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  if (Pop() == 0) goto label1;
  Push(cc__5); // 5
  MAX(); // MAX
  Push(cc__5); // 5
  _slash_(); // /

  label1:
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(cc__3); // 3
  _dot_R(); // .R
  PRINT("% FULL", 6); // (.")
  ICLOSE(); // ICLOSE
}

// 0xf1fa: db 0x4c 0x22 0x69 0x54 0xae 0x0b 0x64 0x5e 0xae 0x0b 0x92 0x0f 0x41 0x0e 0xfa 0x15 0x0a 0x00 0x64 0x5e 0xae 0x0b 0x69 0x54 0x76 0x6d 0x90 0x16 'L"iT  d^    A     d^  iTvm  '

// ================================================
// 0xf216: WORD '.ENERGY' codep=0x224c parp=0xf222
// ================================================

void _dot_ENERGY() // .ENERGY
{
  Push(0x0074);
  Push(0x00ab);
  POS_dot_(); // POS.
  Push(cc__7); // 7
  SetColor("BLACK");
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  Push(pp_TVEHICLE); // TVEHICLE
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  Push(Read16(sp)); // DUP
  _0_gt_(); // 0>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  SetColor("YELLOW");
  _ex_COLOR(); // !COLOR
  PRINT("NONE", 4); // (.")
  return;

  label1:
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(0x07d0);
  _dash_(); // -
  Push(0x0064);
  Push(0x782f);
  _star__slash_(); // */
  Push(Read16(sp)); // DUP
  _0_gt_(); // 0>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  SetColor("PINK");
  _ex_COLOR(); // !COLOR
  PRINT("RESERVE", 7); // (.")
  _ex_COLOR(); // !COLOR
  goto label3;

  label2:
  Push(cc__3); // 3
  _dot_R(); // .R
  PRINT("%", 1); // (.")

  label3:
  Push(0x0074);
  Push(0x00a4);
  POS_dot_(); // POS.
  Push(cc__3); // 3
  SetColor("BLACK");
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  Push(pp__pe_EFF); // %EFF
  Push(Read16(Pop())); // @
  Push(0x0064);
  Push(pp_E_slash_M); // E/M
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(-Pop()); // NEGATE
  _star__slash_(); // */
  Push(0x0063);
  MIN(); // MIN
  Push(cc__3); // 3
  _dot_R(); // .R
  PRINT("%", 1); // (.")
}


// ================================================
// 0xf2cb: WORD 'UNK_0xf2cd' codep=0x224c parp=0xf2cd
// ================================================

void UNK_0xf2cd() // UNK_0xf2cd
{
  Push(0x01e0);
  _dash_(); // -
  Push(0x000a);
  Push(0x0035);
  _star__slash_(); // */
  SWAP(); // SWAP
  Push(0x0480);
  _dash_(); // -
  Push(0x000a);
  Push(0x0040);
  _star__slash_(); // */
  SWAP(); // SWAP
}


// ================================================
// 0xf2f3: WORD 'UNK_0xf2f5' codep=0x224c parp=0xf2f5
// ================================================

void UNK_0xf2f5() // UNK_0xf2f5
{
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  _0_st_(); // 0<
  if (Pop() == 0) goto label2;
  PRINT("W", 1); // (.")
  goto label3;

  label2:
  PRINT("E", 1); // (.")

  label3:
  return;

  label1:
  PRINT(" ", 1); // (.")
}


// ================================================
// 0xf317: WORD 'UNK_0xf319' codep=0x224c parp=0xf319
// ================================================

void UNK_0xf319() // UNK_0xf319
{
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  _0_st_(); // 0<
  if (Pop() == 0) goto label2;
  PRINT("S", 1); // (.")
  goto label3;

  label2:
  PRINT("N", 1); // (.")

  label3:
  return;

  label1:
  PRINT(" ", 1); // (.")
}


// ================================================
// 0xf33b: WORD '.WHERE' codep=0x224c parp=0xf346
// ================================================

void _dot_WHERE() // .WHERE
{
  _dash_STORM(); // -STORM
  _ask_NAV(); // ?NAV
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  UNK_0xe0ec(); // UNK_0xe0ec
  UNK_0xf2cd(); // UNK_0xf2cd
  Push(0x0010);
  Push(0x00c5);
  POS_dot_(); // POS.
  Push(Read16(sp)); // DUP
  Push(Read16(sp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label1;
  Push(-Pop()); // NEGATE

  label1:
  Push(cc__4); // 4
  _dot_R(); // .R
  UNK_0xf319(); // UNK_0xf319
  PRINT(" * ", 3); // (.")
  Push(Read16(sp)); // DUP
  Push(Read16(sp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label2;
  Push(-Pop()); // NEGATE

  label2:
  Push(0); // 0
  _dot_R(); // .R
  UNK_0xf2f5(); // UNK_0xf2f5
}


// ================================================
// 0xf38e: WORD '.STATS' codep=0x224c parp=0xf399
// ================================================

void _dot_STATS() // .STATS
{
  Push(pp_XORMODE); // XORMODE
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  _dot_WHERE(); // .WHERE
  _dot_ENERGY(); // .ENERGY
  _dot_CARGO(); // .CARGO
  _dot_DISTANCE(); // .DISTANCE
  R_gt_(); // R>
  Push(pp_XORMODE); // XORMODE
  _ex__3(); // !_3
}

// 0xf3b3: db 0x4c 0x22 0xfa 0xf1 0x8e 0x57 0xae 0x0b 0x3e 0x13 0x8e 0x57 0xc5 0x6d 0x90 0x16 'L"   W  >  W m  '

// ================================================
// 0xf3c3: WORD 'TV-TASKS' codep=0x224c parp=0xf3d0
// ================================================
// entry

void TV_dash_TASKS() // TV-TASKS
{
  Push(0xf3b5);
  Push(pp__i_VEHICLE_dash_CYCLE); // 'VEHICLE-CYCLE
  _st__ex__gt_(); // <!>
  Push(0xed75);
  Push(pp__i_REPAIR); // 'REPAIR
  _st__ex__gt_(); // <!>
  Push(0xf399);
  Push(pp__i__dot_VEHICLE_dash_STATUS); // '.VEHICLE-STATUS
  _st__ex__gt_(); // <!>
  Push(0xc04e);
  Push(pp__i_DEATH); // 'DEATH
  _st__ex__gt_(); // <!>
  Push(0xec5b);
  Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
  _st__ex__gt_(); // <!>
  Push(0x3a6e);
  Push(pp__i_ENDING); // 'ENDING
  _st__ex__gt_(); // <!>
  Push(0xc081);
  Push(pp__i_CREW_dash_C); // 'CREW-C
  _st__ex__gt_(); // <!>
  Push2Words("0.");
  Push(pp_LASTAP); // LASTAP
  _st_D_ex__gt_(); // <D!>
  Push(0xc070);
  Push(pp__i__dot_VITAL); // '.VITAL
  _st__ex__gt_(); // <!>
  Push(0xc05f);
  Push(pp__i_TREATM); // 'TREATM
  _st__ex__gt_(); // <!>
  Push(0xecb7);
  Push(pp__i__dot_DATE); // '.DATE
  _st__ex__gt_(); // <!>
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  ON_2(); // ON_2
  Push(0xd06e);
  Push(pp__i_THROW_dash_); // 'THROW-
  _ex__3(); // !_3
}


// ================================================
// 0xf434: WORD 'UNK_0xf436' codep=0x224c parp=0xf436
// ================================================

void UNK_0xf436() // UNK_0xf436
{
  Push(0xbf98);
  Push(pp__i_VEHICLE_dash_CYCLE); // 'VEHICLE-CYCLE
  _st__ex__gt_(); // <!>
  Push(0xc136);
  Push(pp__i_REPAIR); // 'REPAIR
  _st__ex__gt_(); // <!>
  Push(0xbf68);
  Push(pp__i__dot_VEHICLE_dash_STATUS); // '.VEHICLE-STATUS
  _st__ex__gt_(); // <!>
  Push(0xc04e);
  Push(pp__i_DEATH); // 'DEATH
  _st__ex__gt_(); // <!>
  Push(0x3a48);
  Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
  _st__ex__gt_(); // <!>
  Push(0xc081);
  Push(pp__i_CREW_dash_C); // 'CREW-C
  _st__ex__gt_(); // <!>
  Push(0x3a48);
  Push(pp__i__dot_VITAL); // '.VITAL
  _st__ex__gt_(); // <!>
  Push(0xc05f);
  Push(pp__i_TREATM); // 'TREATM
  _st__ex__gt_(); // <!>
  Push(0xbf56);
  Push(pp__i__dot_DATE); // '.DATE
  _st__ex__gt_(); // <!>
  Push(pp__ask_CRITIC); // ?CRITIC
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(0xd06e);
  goto label2;

  label1:
  Push(0x3a48);

  label2:
  Push(pp__i_THROW_dash_); // 'THROW-
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf498: WORD 'UNK_0xf49a' codep=0x224c parp=0xf49a
// ================================================

void UNK_0xf49a() // UNK_0xf49a
{
  Push(0xd025);
  MODULE(); // MODULE
  UNK_0xf436(); // UNK_0xf436
}


// ================================================
// 0xf4a4: WORD 'UNK_0xf4a6' codep=0x224c parp=0xf4a6
// ================================================

void UNK_0xf4a6() // UNK_0xf4a6
{
  Push(0xc03f);
  MODULE(); // MODULE
}


// ================================================
// 0xf4ae: WORD 'UNK_0xf4b0' codep=0x224c parp=0xf4b0
// ================================================

void UNK_0xf4b0() // UNK_0xf4b0
{
  Push(pp_WEAPON_dash_); // WEAPON-
  OFF(); // OFF
  Push(pp_STORM); // STORM
  OFF(); // OFF
  Push(0xd06e);
  Push(pp__i_THROW_dash_); // 'THROW-
  _ex__3(); // !_3
  Push(0xd001);
  MODULE(); // MODULE
  UNK_0xecb7(); // UNK_0xecb7
  UNK_0xf4a6(); // UNK_0xf4a6
  Push(0xcf71);
  MODULE(); // MODULE
  _dot_STATS(); // .STATS
  _dot_VIT(); // .VIT
  TV_dash_TASKS(); // TV-TASKS
  SetColor("BLACK");
  Push(pp_LCOLOR); // LCOLOR
  _ex__3(); // !_3
}


// ================================================
// 0xf4de: WORD 'TV' codep=0x224c parp=0xf4e5
// ================================================
// entry

void TV() // TV
{
  Push(0xf49a);
  Push(0xf077);
  Push(0xf4b0);
  DOTASKS(UNK_0xf4b0, UNK_0xf077, UNK_0xf49a);
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  ON_3(); // ON_3
}

// 0xf4f9: db 0x42 0x45 0x48 0x41 0x56 0x49 0x4f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x52 0x41 0x47 0x45 0x20 0x46 0x4f 0x52 0x20 0x46 0x55 0x4e 0x43 0x54 0x49 0x4f 0x4e 0x31 0x32 0x32 0x33 0x32 0x39 0xb3 0xe0 0x90 0x16 0x49 0x54 0x45 0x4d 0x53 0x31 0x36 0x37 0x32 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'BEHAVIO______________________________________RAGE FOR FUNCTION122329    ITEMS1672______________________ '
  