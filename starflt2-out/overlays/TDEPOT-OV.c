// ====== OVERLAY 'TDEPOT-OV' ======
// store offset = 0xe5d0
// overlay size   = 0x0f90

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe5e6  codep:0x1d29 parp:0xe5e6 size:0x0002 C-string:'UNK_0xe5e6'
//      UNK_0xe5ea  codep:0x1d29 parp:0xe5ea size:0x0002 C-string:'UNK_0xe5ea'
//      UNK_0xe5ee  codep:0x1d29 parp:0xe5ee size:0x0002 C-string:'UNK_0xe5ee'
//      UNK_0xe5f2  codep:0x224c parp:0xe5f2 size:0x0022 C-string:'UNK_0xe5f2'
//      UNK_0xe616  codep:0x224c parp:0xe616 size:0x0012 C-string:'UNK_0xe616'
//      UNK_0xe62a  codep:0x224c parp:0xe62a size:0x0008 C-string:'UNK_0xe62a'
//      UNK_0xe634  codep:0x224c parp:0xe634 size:0x000e C-string:'UNK_0xe634'
//      UNK_0xe644  codep:0x224c parp:0xe644 size:0x000e C-string:'UNK_0xe644'
//      UNK_0xe654  codep:0x224c parp:0xe654 size:0x0012 C-string:'UNK_0xe654'
//      UNK_0xe668  codep:0x224c parp:0xe668 size:0x0018 C-string:'UNK_0xe668'
//      UNK_0xe682  codep:0x224c parp:0xe682 size:0x0027 C-string:'UNK_0xe682'
//      UNK_0xe6ab  codep:0x224c parp:0xe6ab size:0x0012 C-string:'UNK_0xe6ab'
//      UNK_0xe6bf  codep:0x7420 parp:0xe6bf size:0x0003 C-string:'UNK_0xe6bf'
//      UNK_0xe6c4  codep:0x7394 parp:0xe6c4 size:0x0006 C-string:'UNK_0xe6c4'
//      UNK_0xe6cc  codep:0x224c parp:0xe6cc size:0x0006 C-string:'UNK_0xe6cc'
//      UNK_0xe6d4  codep:0x224c parp:0xe6d4 size:0x000a C-string:'UNK_0xe6d4'
//      UNK_0xe6e0  codep:0x224c parp:0xe6e0 size:0x000a C-string:'UNK_0xe6e0'
//      UNK_0xe6ec  codep:0x224c parp:0xe6ec size:0x001e C-string:'UNK_0xe6ec'
//      UNK_0xe70c  codep:0x224c parp:0xe70c size:0x0008 C-string:'UNK_0xe70c'
//      UNK_0xe716  codep:0x224c parp:0xe716 size:0x000e C-string:'UNK_0xe716'
//      UNK_0xe726  codep:0x224c parp:0xe726 size:0x000c C-string:'UNK_0xe726'
//      UNK_0xe734  codep:0x224c parp:0xe734 size:0x009c C-string:'UNK_0xe734'
//      UNK_0xe7d2  codep:0x1d29 parp:0xe7d2 size:0x000d C-string:'UNK_0xe7d2'
//      UNK_0xe7e1  codep:0x224c parp:0xe7e1 size:0x0032 C-string:'UNK_0xe7e1'
//      UNK_0xe815  codep:0x224c parp:0xe815 size:0x003a C-string:'UNK_0xe815'
//      UNK_0xe851  codep:0x224c parp:0xe851 size:0x00cd C-string:'UNK_0xe851'
//      UNK_0xe920  codep:0x224c parp:0xe920 size:0x0020 C-string:'UNK_0xe920'
//      UNK_0xe942  codep:0x224c parp:0xe942 size:0x0030 C-string:'UNK_0xe942'
//      UNK_0xe974  codep:0x224c parp:0xe974 size:0x0018 C-string:'UNK_0xe974'
//      UNK_0xe98e  codep:0x224c parp:0xe98e size:0x0028 C-string:'UNK_0xe98e'
//      UNK_0xe9b8  codep:0x224c parp:0xe9b8 size:0x004a C-string:'UNK_0xe9b8'
//      UNK_0xea04  codep:0x224c parp:0xea04 size:0x002a C-string:'UNK_0xea04'
//      UNK_0xea30  codep:0x224c parp:0xea30 size:0x0012 C-string:'UNK_0xea30'
//      UNK_0xea44  codep:0x224c parp:0xea44 size:0x0051 C-string:'UNK_0xea44'
//      UNK_0xea97  codep:0x224c parp:0xea97 size:0x0035 C-string:'UNK_0xea97'
//      UNK_0xeace  codep:0x224c parp:0xeace size:0x0013 C-string:'UNK_0xeace'
//      UNK_0xeae3  codep:0x224c parp:0xeae3 size:0x001a C-string:'UNK_0xeae3'
//      UNK_0xeaff  codep:0x224c parp:0xeaff size:0x0008 C-string:'UNK_0xeaff'
//      UNK_0xeb09  codep:0x224c parp:0xeb09 size:0x0006 C-string:'UNK_0xeb09'
//      UNK_0xeb11  codep:0x224c parp:0xeb11 size:0x0010 C-string:'UNK_0xeb11'
//      UNK_0xeb23  codep:0x224c parp:0xeb23 size:0x0010 C-string:'UNK_0xeb23'
//      UNK_0xeb35  codep:0x224c parp:0xeb35 size:0x007c C-string:'UNK_0xeb35'
//      UNK_0xebb3  codep:0x224c parp:0xebb3 size:0x002c C-string:'UNK_0xebb3'
//      UNK_0xebe1  codep:0x224c parp:0xebe1 size:0x0008 C-string:'UNK_0xebe1'
//      UNK_0xebeb  codep:0x224c parp:0xebeb size:0x0034 C-string:'UNK_0xebeb'
//      UNK_0xec21  codep:0x224c parp:0xec21 size:0x0040 C-string:'UNK_0xec21'
//      UNK_0xec63  codep:0x224c parp:0xec63 size:0x0032 C-string:'UNK_0xec63'
//      UNK_0xec97  codep:0x224c parp:0xec97 size:0x001c C-string:'UNK_0xec97'
//      UNK_0xecb5  codep:0x224c parp:0xecb5 size:0x002e C-string:'UNK_0xecb5'
//      UNK_0xece5  codep:0x224c parp:0xece5 size:0x001c C-string:'UNK_0xece5'
//       TD-SCROLL  codep:0x4b3b parp:0xed0f size:0x000c C-string:'TD_dash_SCROLL'
//      UNK_0xed1d  codep:0x224c parp:0xed1d size:0x002d C-string:'UNK_0xed1d'
//      UNK_0xed4c  codep:0x224c parp:0xed4c size:0x0014 C-string:'UNK_0xed4c'
//      UNK_0xed62  codep:0x224c parp:0xed62 size:0x0032 C-string:'UNK_0xed62'
//      UNK_0xed96  codep:0x224c parp:0xed96 size:0x0098 C-string:'UNK_0xed96'
//      UNK_0xee30  codep:0x224c parp:0xee30 size:0x0048 C-string:'UNK_0xee30'
//    KEY-ELEM-AMT  codep:0x224c parp:0xee89 size:0x00f3 C-string:'KEY_dash_ELEM_dash_AMT'
//      UNK_0xef7e  codep:0x224c parp:0xef7e size:0x0018 C-string:'UNK_0xef7e'
//      UNK_0xef98  codep:0x224c parp:0xef98 size:0x0044 C-string:'UNK_0xef98'
//      UNK_0xefde  codep:0x224c parp:0xefde size:0x000a C-string:'UNK_0xefde'
//      UNK_0xefea  codep:0x224c parp:0xefea size:0x0092 C-string:'UNK_0xefea'
//      UNK_0xf07e  codep:0x224c parp:0xf07e size:0x0072 C-string:'UNK_0xf07e'
//      UNK_0xf0f2  codep:0x224c parp:0xf0f2 size:0x0054 C-string:'UNK_0xf0f2'
//      UNK_0xf148  codep:0x224c parp:0xf148 size:0x0018 C-string:'UNK_0xf148'
//      UNK_0xf162  codep:0x224c parp:0xf162 size:0x0010 C-string:'UNK_0xf162'
//      UNK_0xf174  codep:0x224c parp:0xf174 size:0x0046 C-string:'UNK_0xf174'
//       SELL-WHAT  codep:0x4b3b parp:0xf1c8 size:0x0010 C-string:'SELL_dash_WHAT'
//         SELL-IT  codep:0x224c parp:0xf1e4 size:0x0042 C-string:'SELL_dash_IT'
//      UNK_0xf228  codep:0x224c parp:0xf228 size:0x0030 C-string:'UNK_0xf228'
//      UNK_0xf25a  codep:0x224c parp:0xf25a size:0x00b6 C-string:'UNK_0xf25a'
//      UNK_0xf312  codep:0x224c parp:0xf312 size:0x0048 C-string:'UNK_0xf312'
//      UNK_0xf35c  codep:0x224c parp:0xf35c size:0x0096 C-string:'UNK_0xf35c'
//        BUY-WHAT  codep:0x4b3b parp:0xf3ff size:0x000c C-string:'BUY_dash_WHAT'
//      UNK_0xf40d  codep:0x224c parp:0xf40d size:0x0042 C-string:'UNK_0xf40d'
//      UNK_0xf451  codep:0x224c parp:0xf451 size:0x005a C-string:'UNK_0xf451'
//  DEPOT-FUNCTION  codep:0x4b3b parp:0xf4be size:0x0010 C-string:'DEPOT_dash_FUNCTION'
//       (U-DEPOT)  codep:0x224c parp:0xf4dc size:0x0000 C-string:'_ro_U_dash_DEPOT_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__3; // 3
extern const unsigned short int cc__4; // 4
extern const unsigned short int cc__6; // 6
extern const unsigned short int cc__7; // 7
extern const unsigned short int cc__8; // 8
extern const unsigned short int cc__9; // 9
extern const unsigned short int cc__dash_1; // -1
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int pp_ELEM_dash_AM; // ELEM-AM
extern const unsigned short int pp__ask_TD; // ?TD
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_NCRS; // NCRS
extern const unsigned short int pp_OCRS; // OCRS
extern const unsigned short int pp_WTOP; // WTOP
extern const unsigned short int pp_WBOTTOM; // WBOTTOM
extern const unsigned short int pp_WRIGHT; // WRIGHT
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp_WLINES; // WLINES
extern const unsigned short int pp__dash_AIN; // -AIN
extern const unsigned short int pp_CRSCOLO; // CRSCOLO
extern const unsigned short int pp__pe_VAL; // %VAL
extern const unsigned short int pp_SCROLL_dash_; // SCROLL-
extern const unsigned short int pp__ro_SCROLL_1; // (SCROLL_1
extern const unsigned short int pp__ro_THIS_dash_I; // (THIS-I
void COUNT(); // COUNT
void ABS(); // ABS
void M_star_(); // M*
void MAX(); // MAX
void MIN(); // MIN
void PAD(); // PAD
void BEEP(); // BEEP
void _dot_R(); // .R
void D_dot_R(); // D.R
void NOP(); // NOP
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D0_eq_(); // D0=
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void _gt_FLAG(); // >FLAG
void C_ex__2(); // C!_2
void _ex__2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void ON_2(); // ON_2
void _099(); // 099
void CMOVE_2(); // CMOVE_2
void FILL_2(); // FILL_2
void _at_INST_dash_C(); // @INST-C
void _at_INST_dash_S(); // @INST-S
void CDROP(); // CDROP
void SET_dash_CUR(); // SET-CUR
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void _at__gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void _ask_LAST(); // ?LAST
void _ask_FIRST(); // ?FIRST
void _gt_C_plus_(); // >C+
void INEXT(); // INEXT
void IPREV(); // IPREV
void IFIND(); // IFIND
void _gt_INACTI(); // >INACTI
void IDELETE(); // IDELETE
void ICREATE(); // ICREATE
void _ex_COLOR(); // !COLOR
void _at_COLOR(); // @COLOR
void LLINE(); // LLINE
void _gt_1FONT(); // >1FONT
void _gt_2FONT(); // >2FONT
void _gt_3FONT(); // >3FONT
void _gt_DISPLA(); // >DISPLA
void _gt_HIDDEN(); // >HIDDEN
void SAVE_dash_SC(); // SAVE-SC
void SCR_dash_RES(); // SCR-RES
void SFILL(); // SFILL
void POS_dot_(); // POS.
void WINDOW(); // WINDOW
void _dot_1LOGO(); // .1LOGO
void POLY_dash_WI(); // POLY-WI
void _at_CRS(); // @CRS
void _ex_CRS(); // !CRS
void _do__dot_(); // $.
void POS_dot_PXT(); // POS.PXT
void WLINE_dash_U(); // WLINE-U
void WLINE_dash_D(); // WLINE-D
void WSHORTE(); // WSHORTE
void CTINIT(); // CTINIT
void _ask_MRC(); // ?MRC
void XYSCAN(); // XYSCAN
void _ask_TRIG(); // ?TRIG
void _ask_QUIT(); // ?QUIT
void Y_slash_N(); // Y/N
void CURSORS(); // CURSORS
void BLD_dash_CRS(); // BLD-CRS
void SET_dash_CRS(); // SET-CRS
void U_gt__do_(); // U>$
void TEXT_gt_PA(); // TEXT>PA
void CMESS(); // CMESS
void X0MESS(); // X0MESS
void BOX_gt_LIS(); // BOX>LIS
void GET_dash_BOX(); // GET-BOX
void MAKE_dash_SC(); // MAKE-SC
void DELETE_dash_(); // DELETE-
void BOX_gt_TOC(); // BOX>TOC
void _gt_BOX(); // >BOX
void BOX_gt_(); // BOX>
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _slash_MOD(); // /MOD
void _dash_(); // -
void DNEGATE(); // DNEGATE
void U_star_(); // U*
void U_slash_MOD(); // U/MOD
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TIME(); // TIME
void _1_dot_5_at_(); // 1.5@
void _gt_C(); // >C
void CI(); // CI
void CDEPTH(); // CDEPTH
void BLT(); // BLT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xe5e6 = 0xe5e6; // UNK_0xe5e6 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe5ea = 0xe5ea; // UNK_0xe5ea size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe5ee = 0xe5ee; // UNK_0xe5ee size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe7d2 = 0xe7d2; // UNK_0xe7d2 size: 13
// {0x02, 0x0a, 0x02, 0x09, 0x33, 0x0a, 0x36, 0x09, 0x34, 0x0a, 0x6b, 0x09, 0x33}




// 0xe5e2: db 0xf8 0x00 '  '

// ================================================
// 0xe5e4: WORD 'UNK_0xe5e6' codep=0x1d29 parp=0xe5e6
// ================================================
// 0xe5e6: db 0x3a 0x20 ': '

// ================================================
// 0xe5e8: WORD 'UNK_0xe5ea' codep=0x1d29 parp=0xe5ea
// ================================================
// 0xe5ea: db 0x3a 0x20 ': '

// ================================================
// 0xe5ec: WORD 'UNK_0xe5ee' codep=0x1d29 parp=0xe5ee
// ================================================
// 0xe5ee: db 0x3a 0x20 ': '

// ================================================
// 0xe5f0: WORD 'UNK_0xe5f2' codep=0x224c parp=0xe5f2
// ================================================

void UNK_0xe5f2() // UNK_0xe5f2
{
  LoadData("ELEM-VA"); // from 'ELEMENT     '
  Push(Read16(Pop())); // @
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  Push(0x2134);
  MIN(); // MIN
  Push(0x000a);
  Push(Pop() * Pop()); // *
}

// 0xe60a: db 0x4c 0x22 0x5d 0x17 0x61 0xc2 0xd9 0x84 0x90 0x16 'L"] a     '

// ================================================
// 0xe614: WORD 'UNK_0xe616' codep=0x224c parp=0xe616
// ================================================

void UNK_0xe616() // UNK_0xe616
{
  Push(0xc273); // probable 'OVTRANS'
  MODULE(); // MODULE
}

// 0xe61e: db 0x4c 0x22 0x5d 0x17 0xbb 0xc2 0xd9 0x84 0x90 0x16 'L"]       '

// ================================================
// 0xe628: WORD 'UNK_0xe62a' codep=0x224c parp=0xe62a
// ================================================

void UNK_0xe62a() // UNK_0xe62a
{
  Push(0xc2ed); // probable 'T+BALAN'
  MODULE(); // MODULE
}


// ================================================
// 0xe632: WORD 'UNK_0xe634' codep=0x224c parp=0xe634
// ================================================

void UNK_0xe634() // UNK_0xe634
{
  _gt_C_plus_S(); // >C+S
  Push2Words("*EOL");
  _gt_C_plus_S(); // >C+S
  BOX_gt_LIS(); // BOX>LIS
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe642: WORD 'UNK_0xe644' codep=0x224c parp=0xe644
// ================================================

void UNK_0xe644() // UNK_0xe644
{
  SetColor("BLUE");
}

// 0xe648: db 0x4c 0x22 0x5d 0x17 0x0e 0xb7 0xd9 0x84 0x90 0x16 'L"]       '

// ================================================
// 0xe652: WORD 'UNK_0xe654' codep=0x224c parp=0xe654
// ================================================

void UNK_0xe654() // UNK_0xe654
{
  Push(0xb71f); // probable 'OV.0$$'
  MODULE(); // MODULE
}

// 0xe65c: db 0x4c 0x22 0x5d 0x17 0x30 0xb7 0xd9 0x84 0x90 0x16 'L"] 0     '

// ================================================
// 0xe666: WORD 'UNK_0xe668' codep=0x224c parp=0xe668
// ================================================

void UNK_0xe668() // UNK_0xe668
{
  unsigned short int a;
  Push(pp__ask_TD); // ?TD
  Push(Read16(Pop())); // @
  SetColor("GREY2");
  Push(Pop() * Pop()); // *
  a = Pop(); // >R
  Push(0); // 0
  Push(a); // I
  X0MESS(); // X0MESS
  Push(1); // 1
  Push(a); // R>
  X0MESS(); // X0MESS
}


// ================================================
// 0xe680: WORD 'UNK_0xe682' codep=0x224c parp=0xe682
// ================================================

void UNK_0xe682() // UNK_0xe682
{
  _at_CRS(); // @CRS
  CTINIT(); // CTINIT
  Push(0x002c);
  Push(0x0064);
  POS_dot_(); // POS.
  PRINT("CHECKING INVENTORY", 18); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xe6a9: WORD 'UNK_0xe6ab' codep=0x224c parp=0xe6ab
// ================================================

void UNK_0xe6ab() // UNK_0xe6ab
{
  Push(0x0012);
  SetColor("GREY2");
  Push(0x0064);
  Push(0x002c);
  POS_dot_PXT(); // POS.PXT
}


// ================================================
// 0xe6bd: WORD 'UNK_0xe6bf' codep=0x7420 parp=0xe6bf
// ================================================
// 0xe6bf: db 0x14 0x43 0x02 ' C '

// ================================================
// 0xe6c2: WORD 'UNK_0xe6c4' codep=0x7394 parp=0xe6c4
// ================================================
// 0xe6c4: db 0x1c 0x1e 0x01 0x20 0xcd 0x6b '     k'

// ================================================
// 0xe6ca: WORD 'UNK_0xe6cc' codep=0x224c parp=0xe6cc
// ================================================

void UNK_0xe6cc() // UNK_0xe6cc
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xe6d2: WORD 'UNK_0xe6d4' codep=0x224c parp=0xe6d4
// ================================================

void UNK_0xe6d4() // UNK_0xe6d4
{
  UNK_0xe6cc(); // UNK_0xe6cc
  Push(0x6624); // IFIELD(UNK_0xe6bf)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe6de: WORD 'UNK_0xe6e0' codep=0x224c parp=0xe6e0
// ================================================

void UNK_0xe6e0() // UNK_0xe6e0
{
  UNK_0xe6cc(); // UNK_0xe6cc
  Push(0x6624); // IFIELD(UNK_0xe6bf)
  _ex__2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe6ea: WORD 'UNK_0xe6ec' codep=0x224c parp=0xe6ec
// ================================================

void UNK_0xe6ec() // UNK_0xe6ec
{
  UNK_0xe6d4(); // UNK_0xe6d4
  _gt_(); // >
  if (Pop() == 0) Push(1); else Push(0); // NOT
}

// 0xe6f4: db 0x4c 0x22 0xdb 0x23 0x9b 0xa8 0xdb 0x23 0xcd 0x0c 0x8e 0x27 0x7f 0x0e 0xf6 0x0f 0x0a 0x6d 0xf6 0x0f 0x90 0x16 'L" #   #   '    m    '

// ================================================
// 0xe70a: WORD 'UNK_0xe70c' codep=0x224c parp=0xe70c
// ================================================

void UNK_0xe70c() // UNK_0xe70c
{
  Push(Read16(cc__4)); // 4
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe714: WORD 'UNK_0xe716' codep=0x224c parp=0xe716
// ================================================

void UNK_0xe716() // UNK_0xe716
{
  U_star_(); // U*
  Push(0x0064);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xe724: WORD 'UNK_0xe726' codep=0x224c parp=0xe726
// ================================================

void UNK_0xe726() // UNK_0xe726
{
  SetColor("WHITE");
  SetColor("DK-BLUE");
  SetColor("LT-BLUE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe732: WORD 'UNK_0xe734' codep=0x224c parp=0xe734
// ================================================

void UNK_0xe734() // UNK_0xe734
{
  SetColor("GREY2");
  _ex_COLOR(); // !COLOR
  SFILL(); // SFILL
  UNK_0xe726(); // UNK_0xe726
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(2); // 2
  Push(1); // 1
  Push(0x009d);
  Push(1); // 1
  LLINE(); // LLINE
  Push(2); // 2
  Push(0x000b);
  Push(0x009d);
  Push(0x000b);
  LLINE(); // LLINE
  Push(2); // 2
  Push(0x00b9);
  Push(0x009d);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(1); // 1
  Push(0x00b9);
  Push(1); // 1
  Push(1); // 1
  LLINE(); // LLINE
  Push(0x009e);
  Push(0x00b9);
  OVER(); // OVER
  Push(1); // 1
  LLINE(); // LLINE
  Push(0x0035);
  Push(2); // 2
  OVER(); // OVER
  Push(0x000a);
  LLINE(); // LLINE
  Push(0x006a);
  Push(2); // 2
  OVER(); // OVER
  Push(0x000a);
  LLINE(); // LLINE
  _gt_3FONT(); // >3FONT
  Push(0x005c);
  Push(0x00c4);
  POS_dot_(); // POS.
  PRINT("TRADE", 5); // (.")
  Push(Read16(cc__6)); // 6
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  PRINT("DEPOT", 5); // (.")
  Push(0x004b);
  Push(0x00c5);
  _at_COLOR(); // @COLOR
  _dot_1LOGO(); // .1LOGO
}


// ================================================
// 0xe7d0: WORD 'UNK_0xe7d2' codep=0x1d29 parp=0xe7d2
// ================================================
// 0xe7d2: db 0x02 0x0a 0x02 0x09 0x33 0x0a 0x36 0x09 0x34 0x0a 0x6b 0x09 0x33 '    3 6 4 k 3'

// ================================================
// 0xe7df: WORD 'UNK_0xe7e1' codep=0x224c parp=0xe7e1
// ================================================

void UNK_0xe7e1() // UNK_0xe7e1
{
  Push(Read16(cc__7)); // 7
  SetColor("GREY2");
  Push(0x001d);
  Push(0x006e);
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  POS_dot_(); // POS.
  POS_dot_PXT(); // POS.PXT
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  _at_COLOR(); // @COLOR
  SetColor("BLACK");
  SetColor("DK-BLUE");
  SetColor("WHITE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(0xc285); // probable 'OVD@BAL'
  MODULE(); // MODULE
  Push(Read16(cc__7)); // 7
  D_dot_R(); // D.R
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe813: WORD 'UNK_0xe815' codep=0x224c parp=0xe815
// ================================================

void UNK_0xe815() // UNK_0xe815
{
  Push(Read16(cc__dash_1)); // -1
  Push(0x0023);
  CMESS(); // CMESS
  SetColor("BLACK");
  SetColor("DK-BLUE");
  SetColor("GREY1");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  PRINT("YOUR ACCOUNT BALANCE IS: ", 25); // (.")
  UNK_0xe7e1(); // UNK_0xe7e1
  PRINT(" SP", 3); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xe84f: WORD 'UNK_0xe851' codep=0x224c parp=0xe851
// ================================================

void UNK_0xe851() // UNK_0xe851
{
  _gt_2FONT(); // >2FONT
  UNK_0xe726(); // UNK_0xe726
  Push(0x002b);
  Push(0x00b3);
  POS_dot_(); // POS.
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  PRINT("WELCOME", 7); // (.")
  UNK_0xe70c(); // UNK_0xe70c
  PRINT("TO", 2); // (.")
  UNK_0xe70c(); // UNK_0xe70c
  PRINT("THE", 3); // (.")
  _gt_3FONT(); // >3FONT
  Push(0x0035);
  Push(0x00a5);
  POS_dot_(); // POS.
  PRINT("TRADE", 5); // (.")
  UNK_0xe70c(); // UNK_0xe70c
  PRINT("DEPOT", 5); // (.")
  CTINIT(); // CTINIT
  Push(0x0016);
  Push(0x0078);
  POS_dot_(); // POS.
  PRINT("WE OFFER THE WIDEST SELECTION", 29); // (.")
  Push(0x000d);
  Push(0x006e);
  POS_dot_(); // POS.
  PRINT("AND THE LOWEST PRICES IN STARPORT.", 34); // (.")
  Push(0x001b);
  Push(0x0064);
  POS_dot_(); // POS.
  PRINT("HOW MAY WE HELP YOU TODAY\?", 26); // (.")
}


// ================================================
// 0xe91e: WORD 'UNK_0xe920' codep=0x224c parp=0xe920
// ================================================

void UNK_0xe920() // UNK_0xe920
{
  TIME(); // TIME
  _2_at_(); // 2@

  label1:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_dash_(); // D-
  Push(0x0dac); Push(0x0000);
  D_gt_(); // D>
  Exec("?TERMINAL"); // call of word 0x25bc '(?TERMINAL)'
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe940: WORD 'UNK_0xe942' codep=0x224c parp=0xe942
// ================================================

void UNK_0xe942() // UNK_0xe942
{
  CTINIT(); // CTINIT
  Push(0x0016);
  Push(Read16(cc__8)); // 8
  POS_dot_(); // POS.
  PRINT("BUY", 3); // (.")
  Push(0x0048);
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  PRINT("SELL", 4); // (.")
  Push(0x007d);
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  PRINT("EXIT", 4); // (.")
}


// ================================================
// 0xe972: WORD 'UNK_0xe974' codep=0x224c parp=0xe974
// ================================================

void UNK_0xe974() // UNK_0xe974
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(0x00b8);
  Push(2); // 2
  Push(0x000c);
  Push(0x009d);
  SetColor("GREY2");
  POLY_dash_WI(); // POLY-WI
}


// ================================================
// 0xe98c: WORD 'UNK_0xe98e' codep=0x224c parp=0xe98e
// ================================================

void UNK_0xe98e() // UNK_0xe98e
{
  Push(0); // 0
  Push(0x001a);
  CMESS(); // CMESS
  PRINT("^ SCROLL INVENTORY LIST \\", 25); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xe9b6: WORD 'UNK_0xe9b8' codep=0x224c parp=0xe9b8
// ================================================

void UNK_0xe9b8() // UNK_0xe9b8
{
  UNK_0xe974(); // UNK_0xe974
  UNK_0xe726(); // UNK_0xe726
  _gt_1FONT(); // >1FONT
  Push(Read16(cc__4)); // 4
  Push(0x00a0);
  POS_dot_(); // POS.
  PRINT("ITEM", 4); // (.")
  Push(0x006c);
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  PRINT("VOLUME", 6); // (.")
  Push(Read16(cc__4)); // 4
  Push(0x009a);
  Push(0x0012);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(0x0082);
  Push(0x009a);
  Push(0x006c);
  OVER(); // OVER
  LLINE(); // LLINE
  UNK_0xe815(); // UNK_0xe815
  UNK_0xe98e(); // UNK_0xe98e
}


// ================================================
// 0xea02: WORD 'UNK_0xea04' codep=0x224c parp=0xea04
// ================================================

void UNK_0xea04() // UNK_0xea04
{
  PRINT("PRESS SPACEBAR TO ", 18); // (.")
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" OR [ QUIT ]", 12); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xea2e: WORD 'UNK_0xea30' codep=0x224c parp=0xea30
// ================================================

void UNK_0xea30() // UNK_0xea30
{
  Push(1); // 1
  Push(0x0022);
  CMESS(); // CMESS

  UNK_0x3f09("BUY");
  UNK_0xea04(); // UNK_0xea04
}


// ================================================
// 0xea42: WORD 'UNK_0xea44' codep=0x224c parp=0xea44
// ================================================

void UNK_0xea44() // UNK_0xea44
{
  UNK_0xe9b8(); // UNK_0xe9b8
  Push(0x008c);
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  PRINT("COST", 4); // (.")
  Push(0x008c);
  Push(0x00a7);
  POS_dot_(); // POS.
  PRINT("UNIT", 4); // (.")
  Push(0x008c);
  Push(0x009a);
  Push(0x009a);
  OVER(); // OVER
  LLINE(); // LLINE
  _gt_2FONT(); // >2FONT
  Push(0x003e);
  Push(0x00b3);
  POS_dot_(); // POS.
  PRINT("FOR", 3); // (.")
  UNK_0xe70c(); // UNK_0xe70c
  PRINT("SALE", 4); // (.")
  UNK_0xea30(); // UNK_0xea30
}


// ================================================
// 0xea95: WORD 'UNK_0xea97' codep=0x224c parp=0xea97
// ================================================

void UNK_0xea97() // UNK_0xea97
{
  UNK_0xe9b8(); // UNK_0xe9b8
  Push(0x0088);
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  PRINT("VALUE", 5); // (.")
  Push(0x008a);
  Push(0x00a7);
  POS_dot_(); // POS.
  PRINT("UNIT", 4); // (.")
  Push(0x0088);
  Push(0x009a);
  Push(0x009a);
  OVER(); // OVER
  LLINE(); // LLINE
}


// ================================================
// 0xeacc: WORD 'UNK_0xeace' codep=0x224c parp=0xeace
// ================================================

void UNK_0xeace() // UNK_0xeace
{
  Push(1); // 1
  Push(0x0021);
  CMESS(); // CMESS

  UNK_0x3f09("SELL");
  UNK_0xea04(); // UNK_0xea04
}


// ================================================
// 0xeae1: WORD 'UNK_0xeae3' codep=0x224c parp=0xeae3
// ================================================

void UNK_0xeae3() // UNK_0xeae3
{
  UNK_0xea97(); // UNK_0xea97
  _gt_2FONT(); // >2FONT
  Push(0x0042);
  Push(0x00b3);
  POS_dot_(); // POS.
  PRINT("CARGO", 5); // (.")
  UNK_0xeace(); // UNK_0xeace
}


// ================================================
// 0xeafd: WORD 'UNK_0xeaff' codep=0x224c parp=0xeaff
// ================================================

void UNK_0xeaff() // UNK_0xeaff
{
  UNK_0xe734(); // UNK_0xe734
  UNK_0xe942(); // UNK_0xe942
  UNK_0xe851(); // UNK_0xe851
}


// ================================================
// 0xeb07: WORD 'UNK_0xeb09' codep=0x224c parp=0xeb09
// ================================================

void UNK_0xeb09() // UNK_0xeb09
{
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xeb0f: WORD 'UNK_0xeb11' codep=0x224c parp=0xeb11
// ================================================

void UNK_0xeb11() // UNK_0xeb11
{
  UNK_0xeb09(); // UNK_0xeb09
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex__2(); // 1.5!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb21: WORD 'UNK_0xeb23' codep=0x224c parp=0xeb23
// ================================================

void UNK_0xeb23() // UNK_0xeb23
{
  UNK_0xeb09(); // UNK_0xeb09
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex__2(); // 1.5!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb33: WORD 'UNK_0xeb35' codep=0x224c parp=0xeb35
// ================================================

void UNK_0xeb35() // UNK_0xeb35
{
  UNK_0xeb09(); // UNK_0xeb09
  _gt_C_plus_S(); // >C+S
  Push(0x65ef); // IFIELD(TEXT-IN)
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
  _gt_C_plus_S(); // >C+S
}

// 0xeb43: db 0x4c 0x22 0xdb 0x23 0x8f 0x3b 0x98 0x09 0x9d 0x6d 0x33 0xeb 0x8c 0xa9 0xae 0x0b 0x20 0x0f 0xdf 0x79 0x3d 0x0f 0xeb 0x11 0xf2 0x0e 0x32 0x0e 0x20 0x0f 0x5d 0x14 0xb4 0x13 0x9f 0x13 0x8f 0x3b 0x7f 0x0e 0x92 0x0f 0xdb 0x23 0x72 0x0f 0xf2 0x0e 0x8a 0x6d 0xdb 0x23 0x07 0xeb 0x1f 0x7a 0x75 0xaa 0x5d 0x17 0x21 0x00 0x72 0x0f 0x8f 0x3b 0x8a 0x6d 0xdf 0x79 0x5d 0x17 0x88 0x00 0x5d 0x17 0x96 0x00 0x7b 0x9a 0x8f 0x3b 0x0c 0x50 0x00 0x9e 0x88 0x9d 0xd2 0x9f 0xec 0x4f 0xec 0x4f 0xa7 0x4f 0x1c 0xa2 0x9d 0x86 0xdb 0x23 0x8f 0x3b 0xe6 0x06 0xbd 0x9d 0x90 0x16 'L" # ;   m3        y=     2   ]      ;    #r    m #   zu ] ! r  ; m y]   ]   {  ; P       O O O     # ;      '

// ================================================
// 0xebb1: WORD 'UNK_0xebb3' codep=0x224c parp=0xebb3
// ================================================

void UNK_0xebb3() // UNK_0xebb3
{
  unsigned short int a;
  a = Pop(); // >R
  _at_CRS(); // @CRS
  Push(Read16(cc__3)); // 3
  Push(a); // R>
  POS_dot_(); // POS.
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  _ex__2(); // !_2
  Push(Read16(cc__7)); // 7
  Push(pp_LBLT); // LBLT
  _ex__2(); // !_2
  Push(0x009a);
  Push(pp_WBLT); // WBLT
  _ex__2(); // !_2
  UNK_0xe644(); // UNK_0xe644
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  BLT(); // BLT
  _ex_CRS(); // !CRS
}


// ================================================
// 0xebdf: WORD 'UNK_0xebe1' codep=0x224c parp=0xebe1
// ================================================

void UNK_0xebe1() // UNK_0xebe1
{
  Push(0x0097);
  UNK_0xebb3(); // UNK_0xebb3
}


// ================================================
// 0xebe9: WORD 'UNK_0xebeb' codep=0x224c parp=0xebeb
// ================================================

void UNK_0xebeb() // UNK_0xebeb
{
  signed short int i, imax;
  UNK_0xe6ab(); // UNK_0xe6ab
  SetColor("BLACK");
  SetColor("GREY1");
  UNK_0xe644(); // UNK_0xe644
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(pp_WLINES); // WLINES
  Push(Read16(Pop())); // @
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(i); // I
  Push(Read16(cc__7)); // 7
  Push(Pop() * Pop()); // *
  _dash_(); // -
  POS_dot_(); // POS.
  TEXT_gt_PA(); // TEXT>PA
  PAD(); // PAD
  _do__dot_(); // $.
  INEXT(); // INEXT
  i++;
  } while(i<imax); // (LOOP) 0xffe4

}


// ================================================
// 0xec1f: WORD 'UNK_0xec21' codep=0x224c parp=0xec21
// ================================================

void UNK_0xec21() // UNK_0xec21
{
  unsigned short int a;
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0); // 0

  label1:
  Push(Pop()+1); // 1+
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label1;
  a = Pop(); // >R
  _gt_1FONT(); // >1FONT
  Push(0x0096);
  Push(Read16(cc__4)); // 4
  Push(0x0010);
  Push(a); // R>
  MIN(); // MIN
  Push(0x0026);
  WINDOW(); // WINDOW
  UNK_0xebeb(); // UNK_0xebeb
  IPREV(); // IPREV
  UNK_0xebe1(); // UNK_0xebe1
  _ask_LAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_UNK_0xe5ea); // UNK_0xe5ea
  _ex__2(); // !_2
}


// ================================================
// 0xec61: WORD 'UNK_0xec63' codep=0x224c parp=0xec63
// ================================================

void UNK_0xec63() // UNK_0xec63
{
  INEXT(); // INEXT
  UNK_0xeb11(); // UNK_0xeb11
  Push(pp_UNK_0xe5ea); // UNK_0xe5ea
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  TEXT_gt_PA(); // TEXT>PA
  goto label2;

  label1:
  Push(0x2001);
  PAD(); // PAD
  _ex__2(); // !_2

  label2:
  PAD(); // PAD
  UNK_0xebe1(); // UNK_0xebe1
  WLINE_dash_U(); // WLINE-U
  UNK_0xebe1(); // UNK_0xebe1
  _ask_LAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_UNK_0xe5ea); // UNK_0xe5ea
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  Push(pp_UNK_0xe5ea); // UNK_0xe5ea
  _ex__2(); // !_2
}


// ================================================
// 0xec95: WORD 'UNK_0xec97' codep=0x224c parp=0xec97
// ================================================

void UNK_0xec97() // UNK_0xec97
{
  unsigned short int a;
  CI(); // CI
  CDROP(); // CDROP
  UNK_0xeb09(); // UNK_0xeb09
  _gt_C_plus_S(); // >C+S
  _ask_LAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  a = Pop(); // >R
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
  Push(a); // R>
  if (Pop() == 0) return;
  UNK_0xec63(); // UNK_0xec63
}


// ================================================
// 0xecb3: WORD 'UNK_0xecb5' codep=0x224c parp=0xecb5
// ================================================

void UNK_0xecb5() // UNK_0xecb5
{
  _ask_LAST(); // ?LAST
  Push(pp_UNK_0xe5ea); // UNK_0xe5ea
  Push(Read16(Pop())); // @
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(pp_WLINES); // WLINES
  Push(Read16(Pop())); // @
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(pp_UNK_0xe5ea); // UNK_0xe5ea
  _ex__2(); // !_2
  IPREV(); // IPREV
  UNK_0xeb23(); // UNK_0xeb23
  UNK_0xeb09(); // UNK_0xeb09
  _gt_C_plus_S(); // >C+S
  TEXT_gt_PA(); // TEXT>PA
  ICLOSE(); // ICLOSE
  PAD(); // PAD
  UNK_0xebe1(); // UNK_0xebe1
  WLINE_dash_D(); // WLINE-D
  UNK_0xebe1(); // UNK_0xebe1
}


// ================================================
// 0xece3: WORD 'UNK_0xece5' codep=0x224c parp=0xece5
// ================================================

void UNK_0xece5() // UNK_0xece5
{
  unsigned short int a;
  CI(); // CI
  CDROP(); // CDROP
  UNK_0xeb09(); // UNK_0xeb09
  _gt_C_plus_S(); // >C+S
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  a = Pop(); // >R
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
  Push(a); // R>
  if (Pop() == 0) return;
  UNK_0xecb5(); // UNK_0xecb5
}


// ================================================
// 0xed01: WORD 'TD-SCROLL' codep=0x4b3b parp=0xed0f
// ================================================

void TD_dash_SCROLL() // TD-SCROLL
{
  switch(Pop()) // TD-SCROLL
  {
  case 1:
    UNK_0xec97(); // UNK_0xec97
    break;
  case 65535:
    UNK_0xece5(); // UNK_0xece5
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xed1b: WORD 'UNK_0xed1d' codep=0x224c parp=0xed1d
// ================================================

void UNK_0xed1d() // UNK_0xed1d
{
  UNK_0xe668(); // UNK_0xe668
  Push(1); // 1
  Push(0x0018);
  CMESS(); // CMESS
  SetColor("BLUE");
  _ex_COLOR(); // !COLOR
  PRINT("INSUFFICIENT CARGO SPACE", 24); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xed4a: WORD 'UNK_0xed4c' codep=0x224c parp=0xed4c
// ================================================

void UNK_0xed4c() // UNK_0xed4c
{
  UNK_0xe668(); // UNK_0xe668
  Push(1); // 1
  Push(0x0012);
  CMESS(); // CMESS
  SetColor("BLUE");
  _ex_COLOR(); // !COLOR
  UNK_0xe654(); // UNK_0xe654
  _ex_CRS(); // !CRS
}


// ================================================
// 0xed60: WORD 'UNK_0xed62' codep=0x224c parp=0xed62
// ================================================

void UNK_0xed62() // UNK_0xed62
{
  SAVE_dash_SC(); // SAVE-SC
  Push(0); // 0
  Push(0xc2a9); // probable 'OV?BALA'
  MODULE(); // MODULE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xed4c(); // UNK_0xed4c
  BEEP(); // BEEP
  UNK_0xe920(); // UNK_0xe920
  Pop(); // DROP
  Push(0); // 0
  goto label2;

  label1:
  UNK_0xe6ec(); // UNK_0xe6ec
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  UNK_0xed1d(); // UNK_0xed1d
  BEEP(); // BEEP
  UNK_0xe920(); // UNK_0xe920

  label2:
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xed94: WORD 'UNK_0xed96' codep=0x224c parp=0xed96
// ================================================

void UNK_0xed96() // UNK_0xed96
{
  signed short int i, imax;
  Push(pp__ask_TD); // ?TD
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xe644(); // UNK_0xe644
  goto label2;

  label1:
  SetColor("BLUE");

  label2:
  _ex_COLOR(); // !COLOR
  Push(pp_UNK_0xe5ee); // UNK_0xe5ee
  ON_2(); // ON_2
  Push(0x002e);
  Push(pp__dash_AIN); // -AIN
  _ex__2(); // !_2
  Push(Read16(cc__6)); // 6
  Push(0xb6fd); // probable 'OV#IN$'
  MODULE(); // MODULE
  Push(0); // 0
  SWAP(); // SWAP
  COUNT(); // COUNT
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(0x002e);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label3;
  Push(i); // I
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0030);
  Push(0x003a);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label4;
  Push(pp_UNK_0xe5ee); // UNK_0xe5ee
  _099(); // 099

  label4:
  goto label5;

  label3:
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(i); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0030);
  _dash_(); // -
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xe5ee); // UNK_0xe5ee
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label5;
  imax = i; // LEAVE

  label5:
  i++;
  } while(i<imax); // (LOOP) 0xffb6

  Push(pp_UNK_0xe5ee); // UNK_0xe5ee
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label6;
  Push(0x000a);
  Push(Pop() * Pop()); // *

  label6:
  ABS(); // ABS
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  MIN(); // MIN
}


// ================================================
// 0xee2e: WORD 'UNK_0xee30' codep=0x224c parp=0xee30
// ================================================

void UNK_0xee30() // UNK_0xee30
{
  Push(0x65ee); // IFIELD(INST-X)
  _2_at_(); // 2@
  Push(0xffff); Push(0xffff);
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  MIN(); // MIN
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _ex__2(); // !_2
  return;

  label1:
  Push(0xc285); // probable 'OVD@BAL'
  MODULE(); // MODULE
  UNK_0xe5f2(); // UNK_0xe5f2
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  Push(0x2134);

  label2:
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  MIN(); // MIN
  Push(1); // 1
  MAX(); // MAX
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _ex__2(); // !_2
}


// ================================================
// 0xee78: WORD 'KEY-ELEM-AMT' codep=0x224c parp=0xee89
// ================================================
// entry

void KEY_dash_ELEM_dash_AMT() // KEY-ELEM-AMT
{
  Push(pp_UNK_0xe5e6); // UNK_0xe5e6
  Push(Read16(Pop())); // @
  Push(pp__ask_TD); // ?TD
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() | Pop()); // OR
  Push(0x65ee); // IFIELD(INST-X)
  _2_at_(); // 2@
  Push(0xffff); Push(0xffff);
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _ex__2(); // !_2
  goto label2;

  label1:
  UNK_0xe6d4(); // UNK_0xe6d4
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _ex__2(); // !_2
  UNK_0xee30(); // UNK_0xee30

  label2:
  UNK_0xe668(); // UNK_0xe668
  Push(0); // 0
  Push(0x001f);
  CMESS(); // CMESS
  Push(pp__ask_TD); // ?TD
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label3;
  PRINT("TRANSFER", 8); // (.")
  goto label4;

  label3:
  Push(0x65ee); // IFIELD(INST-X)
  _2_at_(); // 2@
  Push(0xffff); Push(0xffff);
  D_eq_(); // D=
  if (Pop() == 0) goto label6;
  PRINT("PICK UP", 7); // (.")
  goto label4;

  label6:
  PRINT("JETTISON", 8); // (.")

  label4:
  Push(0x65ee); // IFIELD(INST-X)
  _2_at_(); // 2@
  Push(0xffff); Push(0xffff);
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label5;
  PRINT(" HOW MANY CUBIC METERS\?", 23); // (.")
  _ex_CRS(); // !CRS
  Push(1); // 1
  Push(0x0016);
  CMESS(); // CMESS
  PRINT("ENTER VOLUME (0-", 16); // (.")
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(0); // 0
  _dot_R(); // .R
  PRINT(".", 1); // (.")
  Push(0); // 0
  _dot_R(); // .R
  PRINT(")", 1); // (.")
  UNK_0xed96(); // UNK_0xed96
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _ex__2(); // !_2
  _ex_CRS(); // !CRS
  UNK_0xe668(); // UNK_0xe668
  return;

  label5:
  _ex_CRS(); // !CRS
}


// ================================================
// 0xef7c: WORD 'UNK_0xef7e' codep=0x224c parp=0xef7e
// ================================================

void UNK_0xef7e() // UNK_0xef7e
{
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _ex__2(); // !_2
  UNK_0xe6d4(); // UNK_0xe6d4
  Push(Pop() + Pop()); // +
  UNK_0xe6e0(); // UNK_0xe6e0
  BOX_gt_(); // BOX>
  _gt_INACTI(); // >INACTI
  Push(Pop()+1); // 1+
}


// ================================================
// 0xef96: WORD 'UNK_0xef98' codep=0x224c parp=0xef98
// ================================================

void UNK_0xef98() // UNK_0xef98
{
  KEY_dash_ELEM_dash_AMT(); // KEY-ELEM-AMT
  Push(pp__ask_TD); // ?TD
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  LoadData("ELEM-VA"); // from 'ELEMENT     '
  Push(Read16(Pop())); // @
  Push(0x000a);
  _slash_(); // /
  Push(pp__pe_VAL); // %VAL
  Push(Read16(Pop())); // @
  UNK_0xe716(); // UNK_0xe716
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  MIN(); // MIN
  M_star_(); // M*
  UNK_0xe62a(); // UNK_0xe62a

  label1:
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  MIN(); // MIN
  UNK_0xe6d4(); // UNK_0xe6d4
  Push(Pop() + Pop()); // +
  UNK_0xe6e0(); // UNK_0xe6e0
  _0_st_(); // 0<
  BOX_gt_(); // BOX>
  _gt_INACTI(); // >INACTI
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xefdc: WORD 'UNK_0xefde' codep=0x224c parp=0xefde
// ================================================

void UNK_0xefde() // UNK_0xefde
{
  LoadData("UNK_0xe6c4"); // from 'ARTIFACT    '
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()-1); // 1-
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xefe8: WORD 'UNK_0xefea' codep=0x224c parp=0xefea
// ================================================

void UNK_0xefea() // UNK_0xefea
{
  Push(pp__ask_TD); // ?TD
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  LoadData("ART-VAL"); // from 'ARTIFACT    '
  Push(Read16(Pop())); // @
  Push(pp__pe_VAL); // %VAL
  Push(Read16(Pop())); // @
  UNK_0xe716(); // UNK_0xe716
  Push(0); // 0
  UNK_0xe62a(); // UNK_0xe62a
  Push(Read16(cc_TRUE)); // TRUE
  goto label2;

  label1:
  UNK_0xefde(); // UNK_0xefde
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label8;
  Push(0); // 0
  Push(0x0015);
  CMESS(); // CMESS
  PRINT("ARE YOU SURE [NO YES]", 21); // (.")
  _ex_CRS(); // !CRS
  Y_slash_N(); // Y/N
  goto label2;

  label8:
  Push(Read16(cc_TRUE)); // TRUE

  label2:
  if (Pop() == 0) goto label3;
  UNK_0xefde(); // UNK_0xefde
  if (Pop() == 0) goto label4;
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  goto label5;

  label4:
  LoadData("ART-VOL"); // from 'ARTIFACT    '
  Push(Read16(Pop())); // @

  label5:
  Push(Read16(regsp)); // DUP
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _ex__2(); // !_2
  UNK_0xe6d4(); // UNK_0xe6d4
  Push(Pop() + Pop()); // +
  UNK_0xe6e0(); // UNK_0xe6e0
  BOX_gt_(); // BOX>
  Push(pp__ask_TD); // ?TD
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label6;
  Push2Words("*ITEMS-");
  _gt_C_plus_S(); // >C+S
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE
  goto label7;

  label6:
  _gt_INACTI(); // >INACTI

  label7:
  Push(Pop()+1); // 1+
  return;

  label3:
  Push(0); // 0
}


// ================================================
// 0xf07c: WORD 'UNK_0xf07e' codep=0x224c parp=0xf07e
// ================================================

void UNK_0xf07e() // UNK_0xf07e
{
  SAVE_dash_SC(); // SAVE-SC
  _gt_HIDDEN(); // >HIDDEN
  UNK_0xeb35(); // UNK_0xeb35
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(0x000a);
  _slash_MOD(); // /MOD
  ICLOSE(); // ICLOSE
  UNK_0xeb09(); // UNK_0xeb09
  _gt_C_plus_S(); // >C+S
  Push(0x65f2); // IFIELD(TEXT-TE)
  Push(0x001a);
  Push(Pop() + Pop()); // +
  Push(Read16(cc__6)); // 6
  Push(0x002e);
  FILL_2(); // FILL_2
  U_gt__do_(); // U>$
  Push(0x65f2); // IFIELD(TEXT-TE)
  Push(0x001e);
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  U_gt__do_(); // U>$
  Pop(); // DROP
  Push(Read8(Pop())&0xFF); // C@
  Push(0x65f2); // IFIELD(TEXT-TE)
  Push(0x001f);
  Push(Pop() + Pop()); // +
  C_ex__2(); // C!_2
  UNK_0xebe1(); // UNK_0xebe1
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(0x0026);
  SetColor("GREY2");
  _2OVER(); // 2OVER
  POS_dot_PXT(); // POS.PXT
  SWAP(); // SWAP
  POS_dot_(); // POS.
  Push(0x65f2); // IFIELD(TEXT-TE)
  Push(0x0026);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  ICLOSE(); // ICLOSE
  UNK_0xebe1(); // UNK_0xebe1
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xf0f0: WORD 'UNK_0xf0f2' codep=0x224c parp=0xf0f2
// ================================================

void UNK_0xf0f2() // UNK_0xf0f2
{
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  Push(0x001a);
  OVER(); // OVER
  IFIND(); // IFIND
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(Pop() * Pop()); // *
  CDROP(); // CDROP
  goto label2;

  label1:
  Push(0); // 0

  label2:
  Push2Words("*ITEMS-");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x001a);
  BOX_gt_TOC(); // BOX>TOC
  IOPEN(); // IOPEN
  Push(0x001a);
  ROT(); // ROT
  IFIND(); // IFIND
  Pop(); // DROP
  Push(0x65ec); // IFIELD(INST-QT)
  _ex__2(); // !_2
  ICLOSE(); // ICLOSE
  CDROP(); // CDROP
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf146: WORD 'UNK_0xf148' codep=0x224c parp=0xf148
// ================================================

void UNK_0xf148() // UNK_0xf148
{
  unsigned short int a;
  _at_INST_dash_C(); // @INST-C
  Push(0x000b);
  Push((Pop()==Pop())?1:0); // =
  a = Pop(); // >R
  Push(a); // R>
  _at_INST_dash_S(); // @INST-S
  Push(0x000f);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf160: WORD 'UNK_0xf162' codep=0x224c parp=0xf162
// ================================================

void UNK_0xf162() // UNK_0xf162
{
  Push(0x0025);
  SetColor("GREY2");
  Push(0x0064);
  Push(2); // 2
  POS_dot_PXT(); // POS.PXT
}


// ================================================
// 0xf172: WORD 'UNK_0xf174' codep=0x224c parp=0xf174
// ================================================

void UNK_0xf174() // UNK_0xf174
{
  signed short int i, imax;
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  UNK_0xeb09(); // UNK_0xeb09
  UNK_0xeb23(); // UNK_0xeb23
  _gt_C_plus_S(); // >C+S
  IDELETE(); // IDELETE
  ICLOSE(); // ICLOSE
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(pp_WLINES); // WLINES
  Push(Read16(Pop())); // @
  _st_(); // <
  if (Pop() == 0) goto label2;
  IPREV(); // IPREV
  SetColor("GREY2");
  WSHORTE(); // WSHORTE

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffe0

  UNK_0xec97(); // UNK_0xec97
  return;

  label1:
  UNK_0xeb35(); // UNK_0xeb35
  _at_INST_dash_C(); // @INST-C
  ICLOSE(); // ICLOSE
  Push(0x001a);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) return;
  UNK_0xf07e(); // UNK_0xf07e
}


// ================================================
// 0xf1ba: WORD 'SELL-WHAT' codep=0x4b3b parp=0xf1c8
// ================================================

void SELL_dash_WHAT() // SELL-WHAT
{
  switch(Pop()) // SELL-WHAT
  {
  case 11:
    Push(0); // 0
    break;
  case 28:
    UNK_0xefea(); // UNK_0xefea
    break;
  case 26:
    UNK_0xef98(); // UNK_0xef98
    break;
  default:
    UNK_0xef7e(); // UNK_0xef7e
    break;

  }
}

// ================================================
// 0xf1d8: WORD 'SELL-IT' codep=0x224c parp=0xf1e4
// ================================================
// entry

void SELL_dash_IT() // SELL-IT
{
  unsigned short int a;
  CDEPTH(); // CDEPTH
  UNK_0xeb09(); // UNK_0xeb09
  _gt_C_plus_S(); // >C+S
  Push(0x65ef); // IFIELD(TEXT-IN)
  _1_dot_5_at_(); // 1.5@
  Push(0x65ec); // IFIELD(TEXT-CO)
  _1_dot_5_at_(); // 1.5@
  Push2Words("*STARSH");
  _gt_C(); // >C
  _gt_C(); // >C
  _gt_C_plus_(); // >C+
  SET_dash_CUR(); // SET-CUR
  _at_INST_dash_C(); // @INST-C
  SELL_dash_WHAT(); // SELL-WHAT case
  a = Pop(); // >R
  Push(a); // I
  Push(Read16(cc__dash_1)); // -1
  Push(Pop() * Pop()); // *
  Push(pp_SCROLL_dash_); // SCROLL-
  _plus__ex__2(); // +!_2

  label2:
  Push(Read16(regsp)); // DUP
  CDEPTH(); // CDEPTH
  _st_(); // <
  if (Pop() == 0) goto label1;
  ICLOSE(); // ICLOSE
  goto label2;

  label1:
  Pop(); // DROP
  Push(a); // R>
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf226: WORD 'UNK_0xf228' codep=0x224c parp=0xf228
// ================================================

void UNK_0xf228() // UNK_0xf228
{
  SELL_dash_IT(); // SELL-IT
  if (Pop() == 0) goto label1;
  UNK_0xf174(); // UNK_0xf174
  goto label2;

  label1:
  Pop(); // DROP
  UNK_0xebe1(); // UNK_0xebe1
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_WBOTTOM); // WBOTTOM
  Push(Read16(Pop())); // @
  Push(Read16(cc__8)); // 8
  _dash_(); // -
  Push(pp_WRIGHT); // WRIGHT
  Push(Read16(Pop())); // @
  SetColor("GREY2");
  POLY_dash_WI(); // POLY-WI
  UNK_0xebe1(); // UNK_0xebe1

  label2:
  UNK_0xe98e(); // UNK_0xe98e
  UNK_0xeace(); // UNK_0xeace
}


// ================================================
// 0xf258: WORD 'UNK_0xf25a' codep=0x224c parp=0xf25a
// ================================================

void UNK_0xf25a() // UNK_0xf25a
{
  Push(pp_UNK_0xe5e6); // UNK_0xe5e6
  ON_2(); // ON_2
  UNK_0xeae3(); // UNK_0xeae3
  MAKE_dash_SC(); // MAKE-SC
  Push(0x0032);
  Push(pp__pe_VAL); // %VAL
  _ex__2(); // !_2
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0); // 0
  CI(); // CI
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xe682(); // UNK_0xe682

  label3:
  UNK_0xf148(); // UNK_0xf148
  if (Pop() == 0) goto label2;
  BOX_gt_LIS(); // BOX>LIS
  Push(Pop()+1); // 1+

  label2:
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label3;

  label1:
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label4;
  Push2Words("*STARSH");
  UNK_0xe634(); // UNK_0xe634
  UNK_0xec21(); // UNK_0xec21

  label6:
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  TD_dash_SCROLL(); // TD-SCROLL case
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label5;
  UNK_0xf228(); // UNK_0xf228
  UNK_0xe7e1(); // UNK_0xe7e1

  label5:
  _ask_QUIT(); // ?QUIT
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(2); // 2
  _st_(); // <
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label6;
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  goto label7;

  label4:
  _at_CRS(); // @CRS
  CTINIT(); // CTINIT
  UNK_0xf162(); // UNK_0xf162
  Push(Read16(cc__9)); // 9
  Push(0x001d);
  CMESS(); // CMESS
  Push(0x0064);
  Push(pp_YBLT); // YBLT
  _ex__2(); // !_2
  PRINT("NO ARTIFACTS IN STARSHIP HOLD", 29); // (.")
  _ex_CRS(); // !CRS
  UNK_0xe920(); // UNK_0xe920
  _ex_CRS(); // !CRS
  UNK_0xf162(); // UNK_0xf162

  label7:
  DELETE_dash_(); // DELETE-
  if (Pop() == 0) return;
  UNK_0xebe1(); // UNK_0xebe1
}


// ================================================
// 0xf310: WORD 'UNK_0xf312' codep=0x224c parp=0xf312
// ================================================

void UNK_0xf312() // UNK_0xf312
{
  LoadData("ART-VOL"); // from 'ARTIFACT    '
  Push(Read16(Pop())); // @
  LoadData("ART-VAL"); // from 'ARTIFACT    '
  Push(Read16(Pop())); // @
  Push(pp__pe_VAL); // %VAL
  Push(Read16(Pop())); // @
  UNK_0xe716(); // UNK_0xe716
  UNK_0xed62(); // UNK_0xed62
  if (Pop() == 0) goto label1;
  LoadData("ART-VAL"); // from 'ARTIFACT    '
  Push(Read16(Pop())); // @
  Push(pp__pe_VAL); // %VAL
  Push(Read16(Pop())); // @
  UNK_0xe716(); // UNK_0xe716
  Push(0); // 0
  DNEGATE(); // DNEGATE
  UNK_0xe62a(); // UNK_0xe62a
  UNK_0xe6d4(); // UNK_0xe6d4
  LoadData("ART-VOL"); // from 'ARTIFACT    '
  Push(Read16(Pop())); // @
  Push(pp__pe_VAL); // %VAL
  Push(Read16(Pop())); // @
  UNK_0xe716(); // UNK_0xe716
  _dash_(); // -
  UNK_0xe6e0(); // UNK_0xe6e0
  BOX_gt_(); // BOX>
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE
  Push(Pop()+1); // 1+
  return;

  label1:
  Push(0); // 0
}


// ================================================
// 0xf35a: WORD 'UNK_0xf35c' codep=0x224c parp=0xf35c
// ================================================

void UNK_0xf35c() // UNK_0xf35c
{
  unsigned short int a;
  Push(1); // 1
  LoadData("ELEM-VA"); // from 'ELEMENT     '
  Push(Read16(Pop())); // @
  Push(0x000a);
  _slash_(); // /
  Push(pp__pe_VAL); // %VAL
  Push(Read16(Pop())); // @
  UNK_0xe716(); // UNK_0xe716
  UNK_0xed62(); // UNK_0xed62
  if (Pop() == 0) goto label1;
  KEY_dash_ELEM_dash_AMT(); // KEY-ELEM-AMT
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  LoadData("ELEM-VA"); // from 'ELEMENT     '
  Push(Read16(Pop())); // @
  Push(0x000a);
  _slash_(); // /
  Push(pp__pe_VAL); // %VAL
  Push(Read16(Pop())); // @
  UNK_0xe716(); // UNK_0xe716
  Push(Pop() * Pop()); // *
  UNK_0xed62(); // UNK_0xed62
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  a = Pop(); // >R
  LoadData("ELEM-VA"); // from 'ELEMENT     '
  Push(Read16(Pop())); // @
  Push(0x000a);
  _slash_(); // /
  Push(pp__pe_VAL); // %VAL
  Push(Read16(Pop())); // @
  UNK_0xe716(); // UNK_0xe716
  Push(a); // I
  U_star_(); // U*
  DNEGATE(); // DNEGATE
  UNK_0xe62a(); // UNK_0xe62a
  UNK_0xe6d4(); // UNK_0xe6d4
  Push(a); // I
  _dash_(); // -
  UNK_0xe6e0(); // UNK_0xe6e0
  Push(a); // I
  Push(0x65ec); // IFIELD(INST-QT)
  _plus__ex__2(); // +!_2
  Push(0x001a);
  _at_INST_dash_S(); // @INST-S
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  Push(a); // R>
  Push(0x65ec); // IFIELD(INST-QT)
  _ex__2(); // !_2
  CI(); // CI
  ICLOSE(); // ICLOSE
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE
  goto label3;

  label2:
  Pop(); // DROP

  label3:
  Push(0); // 0
  return;

  label1:
  Push(0); // 0
}


// ================================================
// 0xf3f2: WORD 'BUY-WHAT' codep=0x4b3b parp=0xf3ff
// ================================================

void BUY_dash_WHAT() // BUY-WHAT
{
  switch(Pop()) // BUY-WHAT
  {
  case 28:
    UNK_0xf312(); // UNK_0xf312
    break;
  case 26:
    UNK_0xf35c(); // UNK_0xf35c
    break;
  default:
    Push(0); // 0
    break;

  }
}

// ================================================
// 0xf40b: WORD 'UNK_0xf40d' codep=0x224c parp=0xf40d
// ================================================

void UNK_0xf40d() // UNK_0xf40d
{
  unsigned short int a;
  CDEPTH(); // CDEPTH
  UNK_0xeb09(); // UNK_0xeb09
  _gt_C_plus_S(); // >C+S
  Push(0x65ef); // IFIELD(TEXT-IN)
  _1_dot_5_at_(); // 1.5@
  Push(0x65ec); // IFIELD(TEXT-CO)
  _1_dot_5_at_(); // 1.5@
  Push2Words("*ITEMS-");
  _gt_C(); // >C
  _gt_C(); // >C
  _gt_C_plus_(); // >C+
  SET_dash_CUR(); // SET-CUR
  _at_INST_dash_C(); // @INST-C
  BUY_dash_WHAT(); // BUY-WHAT case
  a = Pop(); // >R
  Push(a); // I
  Push(-Pop()); // NEGATE
  Push(pp_SCROLL_dash_); // SCROLL-
  _plus__ex__2(); // +!_2

  label2:
  Push(Read16(regsp)); // DUP
  CDEPTH(); // CDEPTH
  _st_(); // <
  if (Pop() == 0) goto label1;
  ICLOSE(); // ICLOSE
  goto label2;

  label1:
  Pop(); // DROP
  Push(a); // R>
  UNK_0xf174(); // UNK_0xf174
  UNK_0xe98e(); // UNK_0xe98e
  UNK_0xea30(); // UNK_0xea30
}


// ================================================
// 0xf44f: WORD 'UNK_0xf451' codep=0x224c parp=0xf451
// ================================================

void UNK_0xf451() // UNK_0xf451
{
  Push(pp_UNK_0xe5e6); // UNK_0xe5e6
  _099(); // 099
  UNK_0xea44(); // UNK_0xea44
  UNK_0xe682(); // UNK_0xe682
  MAKE_dash_SC(); // MAKE-SC
  Push(0x00c8);
  Push(pp__pe_VAL); // %VAL
  _ex__2(); // !_2
  Push(Read16(cc__6)); // 6
  UNK_0xf0f2(); // UNK_0xf0f2
  Push(1); // 1
  UNK_0xf0f2(); // UNK_0xf0f2
  Push(Read16(cc__4)); // 4
  UNK_0xf0f2(); // UNK_0xf0f2
  Push(0x000c);
  UNK_0xf0f2(); // UNK_0xf0f2
  Push(0x0010);
  UNK_0xf0f2(); // UNK_0xf0f2
  Push(0x0014);
  UNK_0xf0f2(); // UNK_0xf0f2
  Push2Words("*ITEMS-");
  GET_dash_BOX(); // GET-BOX
  Push2Words("*ITEMS-");
  UNK_0xe634(); // UNK_0xe634
  UNK_0xec21(); // UNK_0xec21

  label2:
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  TD_dash_SCROLL(); // TD-SCROLL case
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label1;
  UNK_0xf40d(); // UNK_0xf40d
  UNK_0xe7e1(); // UNK_0xe7e1

  label1:
  _ask_QUIT(); // ?QUIT
  if (Pop() == 0) goto label2;
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  DELETE_dash_(); // DELETE-
  UNK_0xebe1(); // UNK_0xebe1
}


// ================================================
// 0xf4ab: WORD 'DEPOT-FUNCTION' codep=0x4b3b parp=0xf4be
// ================================================

void DEPOT_dash_FUNCTION() // DEPOT-FUNCTION
{
  switch(Pop()) // DEPOT-FUNCTION
  {
  case 0:
    UNK_0xf451(); // UNK_0xf451
    break;
  case 1:
    UNK_0xf25a(); // UNK_0xf25a
    break;
  case 2:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf4ce: WORD '(U-DEPOT)' codep=0x224c parp=0xf4dc
// ================================================
// entry

void _ro_U_dash_DEPOT_rc_() // (U-DEPOT)
{
  unsigned short int a;
  Push(pp__ask_TD); // ?TD
  ON_2(); // ON_2
  _gt_HIDDEN(); // >HIDDEN
  UNK_0xeaff(); // UNK_0xeaff
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
  Push(pp_NCRS); // NCRS
  _099(); // 099
  Push(pp_OCRS); // OCRS
  _099(); // 099
  SetColor("GREY2");
  SetColor("GREY1");
  UNK_0xe644(); // UNK_0xe644
  _ask_MRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  _ex__2(); // !_2
  Push(pp_UNK_0xe7d2); // UNK_0xe7d2
  BLD_dash_CRS(); // BLD-CRS

  label3:
  XYSCAN(); // XYSCAN
  Push(pp_NCRS); // NCRS
  _plus__ex__2(); // +!_2
  Push(pp_UNK_0xe7d2); // UNK_0xe7d2
  SET_dash_CRS(); // SET-CRS
  Pop(); Pop();// 2DROP
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label1;
  _at_CRS(); // @CRS
  Push(0); // 0
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  DEPOT_dash_FUNCTION(); // DEPOT-FUNCTION case
  a = Pop(); // >R
  Push(Read16(cc__dash_1)); // -1
  SetColor("GREY2");
  X0MESS(); // X0MESS
  UNK_0xe668(); // UNK_0xe668
  _ex_CRS(); // !CRS
  Push(a); // R>
  goto label2;

  label1:
  Push(0); // 0

  label2:
  if (Pop() == 0) goto label3;
  Push(2); // 2
  UNK_0xe616(); // UNK_0xe616
  Push(pp__ask_TD); // ?TD
  _099(); // 099
  Push(0x0064);
  Push(pp__pe_VAL); // %VAL
  _ex__2(); // !_2
}

// 0xf546: db 0x54 0x44 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'TD-VOC____________________ '
  