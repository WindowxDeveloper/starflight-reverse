// ====== OVERLAY 'HEAL-OV' ======
// store offset = 0xf090
// overlay size   = 0x04d0

#include"cpu.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xf0a6  codep:0x224c parp:0xf0a6 size:0x0014 C-string:'UNK_0xf0a6'
// 1704:      UNK_0xf0bc  codep:0x224c parp:0xf0bc size:0x0010 C-string:'UNK_0xf0bc'
// 1705:      UNK_0xf0ce  codep:0x224c parp:0xf0ce size:0x0020 C-string:'UNK_0xf0ce'
// 1706:      UNK_0xf0f0  codep:0x744d parp:0xf0f0 size:0x0003 C-string:'UNK_0xf0f0'
// 1707:      UNK_0xf0f5  codep:0x744d parp:0xf0f5 size:0x0003 C-string:'UNK_0xf0f5'
// 1708:      UNK_0xf0fa  codep:0x744d parp:0xf0fa size:0x0003 C-string:'UNK_0xf0fa'
// 1709:      UNK_0xf0ff  codep:0x744d parp:0xf0ff size:0x0003 C-string:'UNK_0xf0ff'
// 1710:      UNK_0xf104  codep:0x744d parp:0xf104 size:0x0012 C-string:'UNK_0xf104'
// 1711:      UNK_0xf118  codep:0x744d parp:0xf118 size:0x0003 C-string:'UNK_0xf118'
// 1712:      UNK_0xf11d  codep:0x744d parp:0xf11d size:0x0003 C-string:'UNK_0xf11d'
// 1713:      UNK_0xf122  codep:0x744d parp:0xf122 size:0x000b C-string:'UNK_0xf122'
// 1714:      UNK_0xf12f  codep:0x224c parp:0xf12f size:0x0008 C-string:'UNK_0xf12f'
// 1715:      UNK_0xf139  codep:0x224c parp:0xf139 size:0x000c C-string:'UNK_0xf139'
// 1716:      UNK_0xf147  codep:0x224c parp:0xf147 size:0x003a C-string:'UNK_0xf147'
// 1717:      UNK_0xf183  codep:0x224c parp:0xf183 size:0x0074 C-string:'UNK_0xf183'
// 1718:          ROLE-C  codep:0x224c parp:0xf202 size:0x0038 C-string:'ROLE_dash_C'
// 1719:      UNK_0xf23c  codep:0x224c parp:0xf23c size:0x0042 C-string:'UNK_0xf23c'
// 1720:      UNK_0xf280  codep:0x224c parp:0xf280 size:0x0010 C-string:'UNK_0xf280'
// 1721:      UNK_0xf292  codep:0x224c parp:0xf292 size:0x0020 C-string:'UNK_0xf292'
// 1722:      UNK_0xf2b4  codep:0x224c parp:0xf2b4 size:0x0017 C-string:'UNK_0xf2b4'
// 1723:      UNK_0xf2cd  codep:0x224c parp:0xf2cd size:0x0086 C-string:'UNK_0xf2cd'
// 1724:           .VITS  codep:0x224c parp:0xf35d size:0x0094 C-string:'_dot_VITS'
// 1725:          >SKILL  codep:0x4a4f parp:0xf3fc size:0x0018 C-string:'_gt_SKILL'
// 1726:      UNK_0xf416  codep:0x224c parp:0xf416 size:0x000e C-string:'UNK_0xf416'
// 1727:      UNK_0xf426  codep:0x1d29 parp:0xf426 size:0x0002 C-string:'UNK_0xf426'
// 1728:      UNK_0xf42a  codep:0x1d29 parp:0xf42a size:0x0003 C-string:'UNK_0xf42a'
// 1729:      UNK_0xf42f  codep:0x224c parp:0xf42f size:0x0058 C-string:'UNK_0xf42f'
// 1730:      UNK_0xf489  codep:0x224c parp:0xf489 size:0x000c C-string:'UNK_0xf489'
// 1731:      UNK_0xf497  codep:0x224c parp:0xf497 size:0x0028 C-string:'UNK_0xf497'
// 1732:      UNK_0xf4c1  codep:0x224c parp:0xf4c1 size:0x004a C-string:'UNK_0xf4c1'
// 1733:           OBITS  codep:0x224c parp:0xf515 size:0x0006 C-string:'OBITS'
// 1734:            HEAL  codep:0x224c parp:0xf524 size:0x0000 C-string:'HEAL'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xf426[2] = {0x3a, 0x20}; // UNK_0xf426
unsigned char UNK_0xf42a[3] = {0x3a, 0x20, 0x05}; // UNK_0xf42a



// 0xf0a2: db 0x4a 0x00 'J '

// ================================================
// 0xf0a4: WORD 'UNK_0xf0a6' codep=0x224c parp=0xf0a6
// ================================================

void UNK_0xf0a6() // UNK_0xf0a6
{
  Push(0x0083);
  Push(0x0053);
  Push(0x0009);
  Push(0x0012);
  WINDOW(); // WINDOW
}


// ================================================
// 0xf0ba: WORD 'UNK_0xf0bc' codep=0x224c parp=0xf0bc
// ================================================

void UNK_0xf0bc() // UNK_0xf0bc
{
  Push(0x0040);
  Push(cc__3); // 3
  Push(cc__7); // 7
  Push(0x0026);
  WINDOW(); // WINDOW
}


// ================================================
// 0xf0cc: WORD 'UNK_0xf0ce' codep=0x224c parp=0xf0ce
// ================================================

void UNK_0xf0ce() // UNK_0xf0ce
{
  SWAP(); // SWAP
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  Push(Pop() + Pop()); // +
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  ROT(); // ROT
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xf0ee: WORD 'UNK_0xf0f0' codep=0x744d parp=0xf0f0
// ================================================
// 0xf0f0: db 0x11 0x11 0x03 '   '

// ================================================
// 0xf0f3: WORD 'UNK_0xf0f5' codep=0x744d parp=0xf0f5
// ================================================
// 0xf0f5: db 0x11 0x14 0x03 '   '

// ================================================
// 0xf0f8: WORD 'UNK_0xf0fa' codep=0x744d parp=0xf0fa
// ================================================
// 0xf0fa: db 0x11 0x20 0x03 '   '

// ================================================
// 0xf0fd: WORD 'UNK_0xf0ff' codep=0x744d parp=0xf0ff
// ================================================
// 0xf0ff: db 0x10 0x0b 0x0f '   '

// ================================================
// 0xf102: WORD 'UNK_0xf104' codep=0x744d parp=0xf104
// ================================================
// 0xf104: db 0x10 0x1a 0x01 0x4d 0x74 0x10 0x1b 0x01 0x4d 0x74 0x10 0x1c 0x01 0x4d 0x74 0x10 0x1d 0x01 '   Mt   Mt   Mt   '

// ================================================
// 0xf116: WORD 'UNK_0xf118' codep=0x744d parp=0xf118
// ================================================
// 0xf118: db 0x10 0x1e 0x01 '   '

// ================================================
// 0xf11b: WORD 'UNK_0xf11d' codep=0x744d parp=0xf11d
// ================================================
// 0xf11d: db 0x10 0x1f 0x01 '   '

// ================================================
// 0xf120: WORD 'UNK_0xf122' codep=0x744d parp=0xf122
// ================================================
// 0xf122: db 0x10 0x20 0x02 0xea 0x73 0x10 0x13 0x01 0x14 0x89 0x64 '    s     d'

// ================================================
// 0xf12d: WORD 'UNK_0xf12f' codep=0x224c parp=0xf12f
// ================================================

void UNK_0xf12f() // UNK_0xf12f
{
  _3_star_(); // 3*
  Push(pp_ROSTER); // ROSTER
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf137: WORD 'UNK_0xf139' codep=0x224c parp=0xf139
// ================================================

void UNK_0xf139() // UNK_0xf139
{
  Push(pp_ROSTER); // ROSTER
  Push(0x0012);
  Push(0); // 0
  FILL(); // FILL
}


// ================================================
// 0xf145: WORD 'UNK_0xf147' codep=0x224c parp=0xf147
// ================================================

void UNK_0xf147() // UNK_0xf147
{
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xf12f(); // UNK_0xf12f
  _1_dot_5_at_(); // 1.5@
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  LEAVE(); // LEAVE
  goto label2;

  label1:
  Push(i); // I
  UNK_0xf12f(); // UNK_0xf12f
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  _2DUP(); // 2DUP
  Push(i); // I
  UNK_0xf12f(); // UNK_0xf12f
  _st_1_dot_5_ex__gt_(); // <1.5!>
  LEAVE(); // LEAVE

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffd2

  Pop(); Pop();// 2DROP
}


// ================================================
// 0xf181: WORD 'UNK_0xf183' codep=0x224c parp=0xf183
// ================================================

void UNK_0xf183() // UNK_0xf183
{
  Push(pp_ROSTER); // ROSTER
  _1_dot_5_at_(); // 1.5@
  NULL(); // NULL
  D_eq_(); // D=
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  UNK_0xf0bc(); // UNK_0xf0bc
  _gt_DISPLA(); // >DISPLA
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_WBOTTOM); // WBOTTOM
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(pp_WRIGHT); // WRIGHT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  YELLOW(); // YELLOW
  POLY_dash_WI(); // POLY-WI
  RED(); // RED
  _ex_COLOR(); // !COLOR
  Push(1); // 1
  Push(1); // 1
  UNK_0xf0ce(); // UNK_0xf0ce
  GCR(); // GCR
  PRINT("!!CREW DECEASED!! ", 18); // (.")
  GCR(); // GCR
  PRINT("**GAME OVER** ", 14); // (.")
  Push(0x09c4);
  MS(); // MS
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY(); // KEY
  BYE(); // BYE
}


// ================================================
// 0xf1f7: WORD 'ROLE-C' codep=0x224c parp=0xf202
// ================================================
// entry

void ROLE_dash_C() // ROLE-C
{
  UNK_0xf139(); // UNK_0xf139
  _star_ASSIGN(); // *ASSIGN
  _gt_C_plus_S(); // >C+S
  INST_dash_SI(); // INST-SI
  Push(0x0011);
  Push(Pop() + Pop()); // +
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  _3_star_(); // 3*
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf11d(); // UNK_0xf11d
  C_at_(); // C@
  if (Pop() == 0) goto label1;
  CI(); // CI
  UNK_0xf147(); // UNK_0xf147

  label1:
  ICLOSE(); // ICLOSE
  i++;
  } while(i<imax); // (LOOP) 0xffe6

  Pop(); // DROP
  ICLOSE(); // ICLOSE
  UNK_0xf183(); // UNK_0xf183
}


// ================================================
// 0xf23a: WORD 'UNK_0xf23c' codep=0x224c parp=0xf23c
// ================================================

void UNK_0xf23c() // UNK_0xf23c
{
  _gt_R(); // >R
  Push(1); // 1
  Push(pp_ROSTER); // ROSTER
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  _3_star_(); // 3*
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  _gt_C_plus_S(); // >C+S
  UNK_0xf11d(); // UNK_0xf11d
  C_at_(); // C@
  ICLOSE(); // ICLOSE
  Push(h); // J
  _eq_(); // =
  goto label2;

  label1:
  Pop(); Pop();// 2DROP
  Push(1); // 1

  label2:
  ROT(); // ROT
  Push(Pop() & Pop()); // AND
  SWAP(); // SWAP
  i++;
  } while(i<imax); // (LOOP) 0xffd2

  R_gt_(); // R>
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xf27e: WORD 'UNK_0xf280' codep=0x224c parp=0xf280
// ================================================

void UNK_0xf280() // UNK_0xf280
{
  Push(0x0064);
  UNK_0xf23c(); // UNK_0xf23c
  DUP(); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(pp__ask_HEAL); // ?HEAL
  _ex_(); // !
}


// ================================================
// 0xf290: WORD 'UNK_0xf292' codep=0x224c parp=0xf292
// ================================================

void UNK_0xf292() // UNK_0xf292
{
  _star_ASSIGN(); // *ASSIGN
  _gt_C(); // >C
  SET_dash_CUR(); // SET-CUR
  UNK_0xf0fa(); // UNK_0xf0fa
  _at__gt_C_plus_S(); // @>C+S
  Push(0x0104);
  UNK_0xf118(); // UNK_0xf118
  C_at_(); // C@
  _dash_(); // -
  Push(0x00fa);
  Push(Pop() * Pop()); // *
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2b2: WORD 'UNK_0xf2b4' codep=0x224c parp=0xf2b4
// ================================================

void UNK_0xf2b4() // UNK_0xf2b4
{
  CTINIT(); // CTINIT
  UNK_0xf0ff(); // UNK_0xf0ff
  COUNT(); // COUNT
  _dot_TTY(); // .TTY
  PRINT(" IS HEALED", 10); // (.")
}


// ================================================
// 0xf2cb: WORD 'UNK_0xf2cd' codep=0x224c parp=0xf2cd
// ================================================

void UNK_0xf2cd() // UNK_0xf2cd
{
  ROLE_dash_C(); // ROLE-C
  UNK_0xf280(); // UNK_0xf280
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xf12f(); // UNK_0xf12f
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
  _gt_C_plus_S(); // >C+S
  UNK_0xf11d(); // UNK_0xf11d
  C_at_(); // C@
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label3;
  UNK_0xf122(); // UNK_0xf122
  C_at_(); // C@
  Push(cc__4); // 4
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label5;
  Push(Pop()+2); // 2+
  DUP(); // DUP
  Push(0x0064);
  _st_(); // <
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label6;
  UNK_0xf122(); // UNK_0xf122
  C_at_(); // C@
  Push(0x00fb);
  Push(Pop() & Pop()); // AND
  UNK_0xf122(); // UNK_0xf122
  C_ex_(); // C!
  UNK_0xf2b4(); // UNK_0xf2b4

  label6:
  goto label7;

  label5:
  Push(Pop()+1); // 1+

  label7:
  Push(0x0064);
  MIN(); // MIN
  UNK_0xf11d(); // UNK_0xf11d
  C_ex_(); // C!

  label3:
  ICLOSE(); // ICLOSE
  goto label4;

  label2:
  Pop(); Pop();// 2DROP

  label4:
  i++;
  } while(i<imax); // (LOOP) 0xff94


  label1:
  UNK_0xf292(); // UNK_0xf292
  Push(pp_HEALTI); // HEALTI
  _ex_(); // !
}


// ================================================
// 0xf353: WORD '.VITS' codep=0x224c parp=0xf35d
// ================================================
// entry

void _dot_VITS() // .VITS
{
  Push(pp_XORMODE); // XORMODE
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  UNK_0xf0a6(); // UNK_0xf0a6
  Push(0); // 0
  Push(1); // 1
  UNK_0xf0ce(); // UNK_0xf0ce
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  GCR(); // GCR
  Push(pp_WCHARS); // WCHARS
  Push(Read16(Pop())); // @
  BLACK(); // BLACK
  POLY_dash_ER(); // POLY-ER
  Push(i); // I
  UNK_0xf12f(); // UNK_0xf12f
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(1); // 1
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  UNK_0xf0ff(); // UNK_0xf0ff
  _do__dot_(); // $.
  Push(0x000e);
  UNK_0xf0ff(); // UNK_0xf0ff
  C_at_(); // C@
  _dash_(); // -
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label2;
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  PRINT(".", 1); // (.")
  j++;
  } while(j<jmax); // (LOOP) 0xfffa


  label2:
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(cc__dash_1); // -1
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  Push(cc__4); // 4
  BLACK(); // BLACK
  POLY_dash_ER(); // POLY-ER
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  UNK_0xf11d(); // UNK_0xf11d
  C_at_(); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  PRINT("%", 1); // (.")

  label1:
  ICLOSE(); // ICLOSE
  i++;
  } while(i<imax); // (LOOP) 0xff9c

  R_gt_(); // R>
  _ex_COLOR(); // !COLOR
  R_gt_(); // R>
  Push(pp_XORMODE); // XORMODE
  _ex_(); // !
}


// ================================================
// 0xf3f1: WORD '>SKILL' codep=0x4a4f parp=0xf3fc
// ================================================
// 0xf3fc: db 0x05 0x00 0x27 0x06 0x01 0x00 0x04 0xf1 0x02 0x00 0x09 0xf1 0x03 0x00 0x0e 0xf1 0x04 0x00 0x13 0xf1 0x05 0x00 0x18 0xf1 '  '                     '

// ================================================
// 0xf414: WORD 'UNK_0xf416' codep=0x224c parp=0xf416
// ================================================

void UNK_0xf416() // UNK_0xf416
{
  UNK_0xf122(); // UNK_0xf122
  Push(Read16(Pop())); // @
  Push(2); // 2
  Push(Pop() | Pop()); // OR
  UNK_0xf122(); // UNK_0xf122
  _ex_(); // !
}


// ================================================
// 0xf424: WORD 'UNK_0xf426' codep=0x1d29 parp=0xf426
// ================================================
// 0xf426: db 0x3a 0x20 ': '

// ================================================
// 0xf428: WORD 'UNK_0xf42a' codep=0x1d29 parp=0xf42a
// ================================================
// 0xf42a: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xf42d: WORD 'UNK_0xf42f' codep=0x224c parp=0xf42f
// ================================================

void UNK_0xf42f() // UNK_0xf42f
{
  Push(0); // 0
  Push(pp_UNK_0xf426); // UNK_0xf426
  _ex_(); // !
  _star_ASSIGN(); // *ASSIGN
  _gt_C_plus_S(); // >C+S
  UNK_0xf0f0(); // UNK_0xf0f0
  _1_dot_5_at_(); // 1.5@
  Push(pp_UNK_0xf42a); // UNK_0xf42a
  _1_dot_5_ex_(); // 1.5!
  INST_dash_SI(); // INST-SI
  Push(0x0011);
  Push(Pop() + Pop()); // +
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  _3_star_(); // 3*
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  OVER(); // OVER
  _gt_SKILL(); // >SKILL
  C_at_(); // C@
  DUP(); // DUP
  Push(pp_UNK_0xf426); // UNK_0xf426
  Push(Read16(Pop())); // @
  _gt_(); // >
  if (Pop() == 0) goto label1;
  CI(); // CI
  Push(pp_UNK_0xf42a); // UNK_0xf42a
  _st_1_dot_5_ex__gt_(); // <1.5!>
  Push(pp_UNK_0xf426); // UNK_0xf426
  _st__ex__gt_(); // <!>
  goto label2;

  label1:
  Pop(); // DROP

  label2:
  ICLOSE(); // ICLOSE
  i++;
  } while(i<imax); // (LOOP) 0xffd0

  Pop(); Pop();// 2DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf487: WORD 'UNK_0xf489' codep=0x224c parp=0xf489
// ================================================

void UNK_0xf489() // UNK_0xf489
{
  UNK_0xf104(); // UNK_0xf104
  Push(cc__6); // 6
  Push(0); // 0
  FILL(); // FILL
  UNK_0xf416(); // UNK_0xf416
}


// ================================================
// 0xf495: WORD 'UNK_0xf497' codep=0x224c parp=0xf497
// ================================================

void UNK_0xf497() // UNK_0xf497
{
  _star_ASSIGN(); // *ASSIGN
  _gt_C_plus_S(); // >C+S
  UNK_0xf0f0(); // UNK_0xf0f0
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf11d(); // UNK_0xf11d
  C_at_(); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  UNK_0xf489(); // UNK_0xf489
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  UNK_0xf0f5(); // UNK_0xf0f5
  _1_dot_5_at_(); // 1.5@
  UNK_0xf0f0(); // UNK_0xf0f0
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE

  label1:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4bf: WORD 'UNK_0xf4c1' codep=0x224c parp=0xf4c1
// ================================================

void UNK_0xf4c1() // UNK_0xf4c1
{
  _star_ASSIGN(); // *ASSIGN
  _gt_C(); // >C
  SET_dash_CUR(); // SET-CUR
  UNK_0xf0f0(); // UNK_0xf0f0
  Push(cc__6); // 6
  Push(1); // 1

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  _3_star_(); // 3*
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf11d(); // UNK_0xf11d
  C_at_(); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  UNK_0xf489(); // UNK_0xf489
  ICLOSE(); // ICLOSE
  Push(i); // I
  UNK_0xf42f(); // UNK_0xf42f
  Push(pp_UNK_0xf42a); // UNK_0xf42a
  _1_dot_5_at_(); // 1.5@
  Push(i); // I
  _3_star_(); // 3*
  Push(cc__4); // 4
  PICK(); // PICK
  Push(Pop() + Pop()); // +
  _1_dot_5_ex_(); // 1.5!
  goto label2;

  label1:
  ICLOSE(); // ICLOSE

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffcc

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf50b: WORD 'OBITS' codep=0x224c parp=0xf515
// ================================================
// entry

void OBITS() // OBITS
{
  UNK_0xf4c1(); // UNK_0xf4c1
  UNK_0xf497(); // UNK_0xf497
}


// ================================================
// 0xf51b: WORD 'HEAL' codep=0x224c parp=0xf524
// ================================================
// entry

void HEAL() // HEAL
{
  OBITS(); // OBITS
  UNK_0xf2cd(); // UNK_0xf2cd
}

// 0xf52a: db 0x48 0x45 0x41 0x4c 0x45 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x59 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x28 0x20 0x72 0x66 0x00 'HEALER__________________________Y ----------------( rf '
  