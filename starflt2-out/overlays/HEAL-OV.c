// ====== OVERLAY 'HEAL-OV' ======
// store offset = 0xf070
// overlay size   = 0x04f0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WF086  codep:0x224c wordp:0xf086 size:0x0014 C-string:'WF086'
//           WF09C  codep:0x224c wordp:0xf09c size:0x0020 C-string:'WF09C'
//           WF0BE  codep:0x7420 wordp:0xf0be size:0x0003 C-string:'WF0BE'
//           WF0C3  codep:0x7420 wordp:0xf0c3 size:0x0003 C-string:'WF0C3'
//           WF0C8  codep:0x7420 wordp:0xf0c8 size:0x0003 C-string:'WF0C8'
//           WF0CD  codep:0x7420 wordp:0xf0cd size:0x0003 C-string:'WF0CD'
//           WF0D2  codep:0x7420 wordp:0xf0d2 size:0x0003 C-string:'WF0D2'
//           WF0D7  codep:0x7420 wordp:0xf0d7 size:0x0003 C-string:'WF0D7'
//           WF0DC  codep:0x7420 wordp:0xf0dc size:0x0003 C-string:'WF0DC'
//           WF0E1  codep:0x7420 wordp:0xf0e1 size:0x0003 C-string:'WF0E1'
//           WF0E6  codep:0x7420 wordp:0xf0e6 size:0x0003 C-string:'WF0E6'
//           WF0EB  codep:0x7420 wordp:0xf0eb size:0x0003 C-string:'WF0EB'
//           WF0F0  codep:0x7420 wordp:0xf0f0 size:0x0003 C-string:'WF0F0'
//           WF0F5  codep:0x7394 wordp:0xf0f5 size:0x0006 C-string:'WF0F5'
//           WF0FD  codep:0x224c wordp:0xf0fd size:0x0008 C-string:'WF0FD'
//           WF107  codep:0x224c wordp:0xf107 size:0x000c C-string:'WF107'
//           WF115  codep:0x224c wordp:0xf115 size:0x003a C-string:'WF115'
//           WF151  codep:0x224c wordp:0xf151 size:0x006a C-string:'WF151'
//          ROLE-C  codep:0x224c wordp:0xf1c6 size:0x004a C-string:'ROLE_dash_C'
//           WF212  codep:0x224c wordp:0xf212 size:0x0042 C-string:'WF212'
//           WF256  codep:0x224c wordp:0xf256 size:0x0010 C-string:'WF256'
//           WF268  codep:0x224c wordp:0xf268 size:0x0020 C-string:'WF268'
//           WF28A  codep:0x224c wordp:0xf28a size:0x0017 C-string:'WF28A'
//           WF2A3  codep:0x224c wordp:0xf2a3 size:0x0084 C-string:'WF2A3'
//           .VITS  codep:0x224c wordp:0xf331 size:0x0096 C-string:'DrawVITS'
//          >SKILL  codep:0x4b3b wordp:0xf3d2 size:0x0018 C-string:'_gt_SKILL'
//           WF3EC  codep:0x224c wordp:0xf3ec size:0x001e C-string:'WF3EC'
//           WF40C  codep:0x224c wordp:0xf40c size:0x0012 C-string:'WF40C'
//           WF420  codep:0x1d29 wordp:0xf420 size:0x0002 C-string:'WF420'
//           WF424  codep:0x1d29 wordp:0xf424 size:0x0003 C-string:'WF424'
//           WF429  codep:0x224c wordp:0xf429 size:0x0058 C-string:'WF429'
//           WF483  codep:0x224c wordp:0xf483 size:0x001c C-string:'WF483'
//           WF4A1  codep:0x224c wordp:0xf4a1 size:0x000a C-string:'WF4A1'
//           WF4AD  codep:0x224c wordp:0xf4ad size:0x0024 C-string:'WF4AD'
//           WF4D3  codep:0x224c wordp:0xf4d3 size:0x0050 C-string:'WF4D3'
//           OBITS  codep:0x224c wordp:0xf52d size:0x0006 C-string:'OBITS'
//            KILL  codep:0x224c wordp:0xf53c size:0x000c C-string:'KILL'
//            HEAL  codep:0x224c wordp:0xf551 size:0x0000 C-string:'HEAL'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_IsHEAL; // ?HEAL
extern const unsigned short int pp_WTOP; // WTOP
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp_WCHARS; // WCHARS
extern const unsigned short int pp_IsON_dash_PLA; // ?ON-PLA
extern const unsigned short int pp_Is10; // ?10
extern const unsigned short int pp_HEALTI; // HEALTI
extern const unsigned short int pp_ROSTER; // ROSTER
extern Color BLACK; // BLACK
extern Color RED; // RED
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
extern IFieldType INST_dash_SI; // INST-SI
void COUNT(); // COUNT
void MIN(); // MIN
void DrawR(); // .R
void PICK(); // PICK
void _2OVER(); // 2OVER
void D_eq_(); // D=
void KEY_2(); // KEY_2
void _3_star_(); // 3*
void _gt_FLAG(); // >FLAG
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void _099(); // 099
void FILL_2(); // FILL_2
void _eq_SPECIE(); // =SPECIE
void CDROP(); // CDROP
void CI_i_(); // CI'
void SET_dash_CUR(); // SET-CUR
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void StoreCOLOR(); // !COLOR
void _gt_1FONT(); // >1FONT
void _gt_DISPLA(); // >DISPLA
void BYE_2(); // BYE_2
void POS_dot_(); // POS.
void WINDOW(); // WINDOW
void _gt_SSCT(); // >SSCT
void _gt_TVCT(); // >TVCT
void CTERASE(); // CTERASE
void _do__dot_(); // $.
void POLY_dash_ER(); // POLY-ER
void GCR(); // GCR
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void _i_KEY(); // 'KEY
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _dash_(); // -
void _gt_(); // >
void _st_(); // <
void _0_gt_(); // 0>
void _1_dot_5_at_(); // 1.5@
void _st__ex__gt_(); // <!>
void _st_1_dot_5_ex__gt_(); // <1.5!>
void _gt_C(); // >C
void CI(); // CI


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WF420 = 0xf420; // WF420 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF424 = 0xf424; // WF424 size: 3
// {0x3a, 0x20, 0x05}




// 0xf082: db 0x4f 0x00 'O '

// ================================================
// 0xf084: WORD 'WF086' codep=0x224c wordp=0xf086 params=0 returns=0
// ================================================

void WF086() // WF086
{
  Push(0x0083);
  Push(0x0053);
  Push(9);
  Push(0x0012);
  WINDOW(); // WINDOW
}


// ================================================
// 0xf09a: WORD 'WF09C' codep=0x224c wordp=0xf09c params=2 returns=0
// ================================================

void WF09C() // WF09C
{
  SWAP(); // SWAP
  Push(Pop() * 4 + (Read16(pp_WLEFT) + 2)); //  4 * WLEFT @ 2+ +
  Push(Read16(pp_WTOP) - 1); // WTOP @ 1-
  ROT(); // ROT
  Push(Pop() * 7); //  7 *
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xf0bc: WORD 'WF0BE' codep=0x7420 wordp=0xf0be
// ================================================
IFieldType WF0BE = {ASSIGN_CREWIDX, 0x11, 0x03};

// ================================================
// 0xf0c1: WORD 'WF0C3' codep=0x7420 wordp=0xf0c3
// ================================================
IFieldType WF0C3 = {ASSIGN_CREWIDX, 0x14, 0x03};

// ================================================
// 0xf0c6: WORD 'WF0C8' codep=0x7420 wordp=0xf0c8
// ================================================
IFieldType WF0C8 = {ASSIGN_CREWIDX, 0x20, 0x03};

// ================================================
// 0xf0cb: WORD 'WF0CD' codep=0x7420 wordp=0xf0cd
// ================================================
IFieldType WF0CD = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xf0d0: WORD 'WF0D2' codep=0x7420 wordp=0xf0d2
// ================================================
IFieldType WF0D2 = {CREWMEMBERIDX, 0x1a, 0x01};

// ================================================
// 0xf0d5: WORD 'WF0D7' codep=0x7420 wordp=0xf0d7
// ================================================
IFieldType WF0D7 = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xf0da: WORD 'WF0DC' codep=0x7420 wordp=0xf0dc
// ================================================
IFieldType WF0DC = {CREWMEMBERIDX, 0x1c, 0x01};

// ================================================
// 0xf0df: WORD 'WF0E1' codep=0x7420 wordp=0xf0e1
// ================================================
IFieldType WF0E1 = {CREWMEMBERIDX, 0x1d, 0x01};

// ================================================
// 0xf0e4: WORD 'WF0E6' codep=0x7420 wordp=0xf0e6
// ================================================
IFieldType WF0E6 = {CREWMEMBERIDX, 0x1e, 0x01};

// ================================================
// 0xf0e9: WORD 'WF0EB' codep=0x7420 wordp=0xf0eb
// ================================================
IFieldType WF0EB = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xf0ee: WORD 'WF0F0' codep=0x7420 wordp=0xf0f0
// ================================================
IFieldType WF0F0 = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xf0f3: WORD 'WF0F5' codep=0x7394 wordp=0xf0f5
// ================================================
// orphan
LoadDataType WF0F5 = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6ac8};

// ================================================
// 0xf0fb: WORD 'WF0FD' codep=0x224c wordp=0xf0fd params=1 returns=1
// ================================================

void WF0FD() // WF0FD
{
  _3_star_(); // 3*
  Push(Pop() + pp_ROSTER); //  ROSTER +
}


// ================================================
// 0xf105: WORD 'WF107' codep=0x224c wordp=0xf107 params=0 returns=0
// ================================================

void WF107() // WF107
{
  Push(pp_ROSTER); // ROSTER
  Push(0x0012);
  Push(0);
  FILL_2(); // FILL_2
}


// ================================================
// 0xf113: WORD 'WF115' codep=0x224c wordp=0xf115 params=2 returns=0
// ================================================

void WF115() // WF115
{
  unsigned short int i, imax;

  i = 0;
  imax = 6;
  do // (DO)
  {
    Push(i); // I
    WF0FD(); // WF0FD
    _1_dot_5_at_(); // 1.5@
    _2OVER(); // 2OVER
    D_eq_(); // D=
    if (Pop() != 0)
    {
      imax = i; // LEAVE
    } else
    {
      Push(i); // I
      WF0FD(); // WF0FD
      _1_dot_5_at_(); // 1.5@
      Push(Pop() | Pop()); // OR
      Push(Pop()==0?1:0); //  0=
      if (Pop() != 0)
      {
        _2DUP(); // 2DUP
        Push(i); // I
        WF0FD(); // WF0FD
        _st_1_dot_5_ex__gt_(); // <1.5!>
        imax = i; // LEAVE
      }
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf14f: WORD 'WF151' codep=0x224c wordp=0xf151 params=0 returns=0
// ================================================

void WF151() // WF151
{
  Push(pp_ROSTER); // ROSTER
  _1_dot_5_at_(); // 1.5@
  Push2Words("NULL");
  D_eq_(); // D=
  if (Pop() == 0) return;
  Push(Read16(pp_IsON_dash_PLA)); // ?ON-PLA @
  if (Pop() != 0)
  {
    _gt_TVCT(); // >TVCT
  } else
  {
    _gt_SSCT(); // >SSCT
  }
  _gt_DISPLA(); // >DISPLA
  GetColor(YELLOW);
  Push(0x4fa9); // 'BLACK'
  Store_2(); // !_2
  CTERASE(); // CTERASE
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  Push(1);
  Push(1);
  WF09C(); // WF09C
  _gt_1FONT(); // >1FONT
  GCR(); // GCR
  PRINT("!!CREW DECEASED!! ", 18); // (.")
  GCR(); // GCR
  PRINT("  **GAME OVER** ", 16); // (.")
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY_2(); // KEY_2
  BYE_2(); // BYE_2
}


// ================================================
// 0xf1bb: WORD 'ROLE-C' codep=0x224c wordp=0xf1c6 params=0 returns=0
// ================================================
// entry

void ROLE_dash_C() // ROLE-C
{
  unsigned short int i, imax;
  WF107(); // WF107
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push((0x65e1+INST_dash_SI.offset) + 0x0011); // INST-SI<IFIELD> 0x0011 +

  i = 0;
  imax = 6;
  do // (DO)
  {
    Push(i); // I
    _3_star_(); // 3*
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    Get_gt_C_plus_S(); // @>C+S
    Push(!((Read16(0x65e1+WF0EB.offset)&0xFF)==0?1:0) & !(Read16(0x65e1+WF0F0.offset) & 0x0010)); // WF0EB<IFIELD> C@ 0= NOT WF0F0<IFIELD> @ 0x0010 AND NOT AND
    if (Pop() != 0)
    {
      CI(); // CI
      WF115(); // WF115
    }
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  ICLOSE(); // ICLOSE
  WF151(); // WF151
}


// ================================================
// 0xf210: WORD 'WF212' codep=0x224c wordp=0xf212 params=1 returns=1
// ================================================

void WF212() // WF212
{
  unsigned short int a, i, imax;
  a = Pop(); // >R
  Push(1);
  Push(pp_ROSTER); // ROSTER

  i = 0;
  imax = 6;
  do // (DO)
  {
    Push(i); // I
    _3_star_(); // 3*
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    _1_dot_5_at_(); // 1.5@
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      _gt_C_plus_S(); // >C+S
      Push(Read16(0x65e1+WF0EB.offset)&0xFF); // WF0EB<IFIELD> C@
      ICLOSE(); // ICLOSE
      Push(Pop()==a?1:0); //  J =
    } else
    {
      Pop(); Pop(); // 2DROP
      Push(1);
    }
    ROT(); // ROT
    Push(Pop() & Pop()); // AND
    SWAP(); // SWAP
    i++;
  } while(i<imax); // (LOOP)

  Push(a); // R>
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf254: WORD 'WF256' codep=0x224c wordp=0xf256 params=0 returns=1
// ================================================

void WF256() // WF256
{
  Push(0x0064);
  WF212(); // WF212
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  Push(pp_IsHEAL); // ?HEAL
  Store_2(); // !_2
}


// ================================================
// 0xf266: WORD 'WF268' codep=0x224c wordp=0xf268 params=0 returns=1
// ================================================

void WF268() // WF268
{
  Push2Words("*ASSIGN");
  _gt_C(); // >C
  SET_dash_CUR(); // SET-CUR
  Push(0x65e1+WF0C8.offset); // WF0C8<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push((0x0104 - (Read16(0x65e1+WF0E6.offset)&0xFF)) * 0x00fa); // 0x0104 WF0E6<IFIELD> C@ - 0x00fa *
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf288: WORD 'WF28A' codep=0x224c wordp=0xf28a
// ================================================

void WF28A() // WF28A
{
  CTINIT(); // CTINIT
  Push(0x65e1+WF0CD.offset); // WF0CD<IFIELD>
  COUNT(); // COUNT
  DrawTTY(); // .TTY
  PRINT(" IS HEALED", 10); // (.")
}


// ================================================
// 0xf2a1: WORD 'WF2A3' codep=0x224c wordp=0xf2a3 params=0 returns=0
// ================================================

void WF2A3() // WF2A3
{
  unsigned short int i, imax;
  ROLE_dash_C(); // ROLE-C
  WF256(); // WF256
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {

    i = 0;
    imax = 6;
    do // (DO)
    {
      Push(i); // I
      WF0FD(); // WF0FD
      _1_dot_5_at_(); // 1.5@
      _2DUP(); // 2DUP
      Push(Pop() | Pop()); // OR
      if (Pop() != 0)
      {
        _gt_C_plus_S(); // >C+S
        Push(Read16(0x65e1+WF0EB.offset)&0xFF); // WF0EB<IFIELD> C@
        if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
        if (Pop() != 0)
        {
          Push(Read16(0x65e1+WF0F0.offset) & 4); // WF0F0<IFIELD> @ 4 AND
          _gt_FLAG(); // >FLAG
          Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
          _0_gt_(); // 0>
          Push(Pop() & Pop()); // AND
          if (Pop() != 0)
          {
            Push(Pop() + 2); //  2+
            Push(Read16(regsp)); // DUP
            Push(0x0064);
            _st_(); // <
            Push(!Pop()); //  NOT
            if (Pop() != 0)
            {
              Push(Read16(0x65e1+WF0F0.offset) & 0x00fb); // WF0F0<IFIELD> @ 0x00fb AND
              Push(0x65e1+WF0F0.offset); // WF0F0<IFIELD>
              C_ex__2(); // C!_2
              WF28A(); // WF28A
            }
          } else
          {
            Push(Pop() + 1); //  1+
          }
          Push(0x0064);
          MIN(); // MIN
          Push(0x65e1+WF0EB.offset); // WF0EB<IFIELD>
          C_ex__2(); // C!_2
        }
        ICLOSE(); // ICLOSE
      } else
      {
        Pop(); Pop(); // 2DROP
      }
      i++;
    } while(i<imax); // (LOOP)

  }
  WF268(); // WF268
  Push(pp_HEALTI); // HEALTI
  Store_2(); // !_2
}


// ================================================
// 0xf327: WORD '.VITS' codep=0x224c wordp=0xf331
// ================================================
// entry

void DrawVITS() // .VITS
{
  unsigned short int a, b, i, imax, j, jmax;
  Push(Read16(pp_XORMODE)); // XORMODE @
  a = Pop(); // >R
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(Read16(pp_COLOR)); // COLOR @
  b = Pop(); // >R
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WF086(); // WF086
  Push(0);
  Push(1);
  WF09C(); // WF09C

  i = 0;
  imax = 6;
  do // (DO)
  {
    GCR(); // GCR
    Push(Read16(pp_WCHARS)); // WCHARS @
    GetColor(BLACK);
    POLY_dash_ER(); // POLY-ER
    Push(i); // I
    WF0FD(); // WF0FD
    _1_dot_5_at_(); // 1.5@
    _2DUP(); // 2DUP
    _gt_C_plus_S(); // >C+S
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      Push(1);
      Push(pp_XBLT); // XBLT
      _plus__ex__2(); // +!_2
      Push(0x65e1+WF0CD.offset); // WF0CD<IFIELD>
      _do__dot_(); // $.
      Push(0x000e - (Read16(0x65e1+WF0CD.offset)&0xFF)); // 0x000e WF0CD<IFIELD> C@ -
      if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
      if (Pop() != 0)
      {

        j = 0;
        jmax = Pop();
        do // (DO)
        {
          PRINT(".", 1); // (.")
          j++;
        } while(j<jmax); // (LOOP)

      }
      Push(Read16(pp_XBLT)); // XBLT @
      Push(-1);
      Push(pp_XBLT); // XBLT
      _plus__ex__2(); // +!_2
      Push(4);
      GetColor(BLACK);
      POLY_dash_ER(); // POLY-ER
      Push(pp_XBLT); // XBLT
      Store_2(); // !_2
      Push(Read16(0x65e1+WF0EB.offset)&0xFF); // WF0EB<IFIELD> C@
      Push(3);
      DrawR(); // .R
      PRINT("%", 1); // (.")
    }
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

  Push(b); // R>
  StoreCOLOR(); // !COLOR
  Push(a); // R>
  Push(pp_XORMODE); // XORMODE
  Store_2(); // !_2
  _gt_TVCT(); // >TVCT
}


// ================================================
// 0xf3c7: WORD '>SKILL' codep=0x4b3b wordp=0xf3d2
// ================================================

void _gt_SKILL() // >SKILL
{
  switch(Pop()) // >SKILL
  {
  case 1:
    Push(0x65e1+WF0D2.offset); // IFIELD
    break;
  case 2:
    Push(0x65e1+WF0D7.offset); // IFIELD
    break;
  case 3:
    Push(0x65e1+WF0DC.offset); // IFIELD
    break;
  case 4:
    Push(0x65e1+WF0E1.offset); // IFIELD
    break;
  case 5:
    Push(0x65e1+WF0E6.offset); // IFIELD
    break;
  default:
    Exec("ABORT"); // call of word 0x1c45 '(ABORT)'
    break;

  }
}

// ================================================
// 0xf3ea: WORD 'WF3EC' codep=0x224c wordp=0xf3ec params=0 returns=0
// ================================================

void WF3EC() // WF3EC
{
  Push((Read16(0x65e1+WF0F0.offset) & 0x0010)==0?1:0); // WF0F0<IFIELD> @ 0x0010 AND 0=
  if (Pop() == 0) return;
  Push(Read16(0x65e1+WF0F0.offset) | 2); // WF0F0<IFIELD> @ 2 OR
  Push(0x65e1+WF0F0.offset); // WF0F0<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xf40a: WORD 'WF40C' codep=0x224c wordp=0xf40c params=0 returns=0
// ================================================

void WF40C() // WF40C
{
  Push(6);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) return;
  Push(0x000a);
  Push(pp_Is10); // ?10
  Store_2(); // !_2
}


// ================================================
// 0xf41e: WORD 'WF420' codep=0x1d29 wordp=0xf420
// ================================================
// 0xf420: db 0x3a 0x20 ': '

// ================================================
// 0xf422: WORD 'WF424' codep=0x1d29 wordp=0xf424
// ================================================
// 0xf424: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xf427: WORD 'WF429' codep=0x224c wordp=0xf429
// ================================================

void WF429() // WF429
{
  unsigned short int i, imax;
  Push(0);
  Push(pp_WF420); // WF420
  Store_2(); // !_2
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WF0BE.offset); // WF0BE<IFIELD>
  _1_dot_5_at_(); // 1.5@
  Push(pp_WF424); // WF424
  _1_dot_5_ex__2(); // 1.5!_2
  Push((0x65e1+INST_dash_SI.offset) + 0x0011); // INST-SI<IFIELD> 0x0011 +

  i = 0;
  imax = 6;
  do // (DO)
  {
    Push(i); // I
    _3_star_(); // 3*
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    Get_gt_C_plus_S(); // @>C+S
    OVER(); // OVER
    _gt_SKILL(); // >SKILL case
    Push(Read16(Pop())&0xFF); //  C@
    Push(Read16(regsp)); // DUP
    Push(Read16(pp_WF420)); // WF420 @
    _gt_(); // >
    if (Pop() != 0)
    {
      CI(); // CI
      Push(pp_WF424); // WF424
      _st_1_dot_5_ex__gt_(); // <1.5!>
      Push(pp_WF420); // WF420
      _st__ex__gt_(); // <!>
    } else
    {
      Pop(); // DROP
    }
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

  Pop(); Pop(); // 2DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf481: WORD 'WF483' codep=0x224c wordp=0xf483 params=0 returns=1
// ================================================

void WF483() // WF483
{
  Push(((Read16(0x65e1+WF0EB.offset)&0xFF)==0?1:0) | Read16(0x65e1+WF0F0.offset) & 0x0010); // WF0EB<IFIELD> C@ 0= WF0F0<IFIELD> @ 0x0010 AND OR
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  WF40C(); // WF40C
}


// ================================================
// 0xf49f: WORD 'WF4A1' codep=0x224c wordp=0xf4a1 params=0 returns=0
// ================================================

void WF4A1() // WF4A1
{
  Push(0x65e1+WF0D2.offset); // WF0D2<IFIELD>
  Push(6);
  Push(0);
  FILL_2(); // FILL_2
}


// ================================================
// 0xf4ab: WORD 'WF4AD' codep=0x224c wordp=0xf4ad params=0 returns=0
// ================================================

void WF4AD() // WF4AD
{
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WF0BE.offset); // WF0BE<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  WF483(); // WF483
  if (Pop() != 0)
  {
    WF4A1(); // WF4A1
    CI_i_(); // CI'
    _gt_C_plus_S(); // >C+S
    Push(0x65e1+WF0C3.offset); // WF0C3<IFIELD>
    _1_dot_5_at_(); // 1.5@
    Push(0x65e1+WF0BE.offset); // WF0BE<IFIELD>
    _1_dot_5_ex__2(); // 1.5!_2
    ICLOSE(); // ICLOSE
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4d1: WORD 'WF4D3' codep=0x224c wordp=0xf4d3 params=0 returns=0
// ================================================

void WF4D3() // WF4D3
{
  unsigned short int i, imax;
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WF0BE.offset); // WF0BE<IFIELD>

  i = 1;
  imax = 6;
  do // (DO)
  {
    Push(i); // I
    _3_star_(); // 3*
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    Get_gt_C_plus_S(); // @>C+S
    WF483(); // WF483
    if (Pop() != 0)
    {
      WF4A1(); // WF4A1
      Push((Read16(0x65e1+WF0EB.offset)&0xFF)==0?1:0); // WF0EB<IFIELD> C@ 0=
      if (Pop() != 0)
      {
        WF3EC(); // WF3EC
      }
      ICLOSE(); // ICLOSE
      Push(i); // I
      WF429(); // WF429
      Push(pp_WF424); // WF424
      _1_dot_5_at_(); // 1.5@
      Push(i); // I
      _3_star_(); // 3*
      Push(4);
      PICK(); // PICK
      Push(Pop() + Pop()); // +
      _1_dot_5_ex__2(); // 1.5!_2
    } else
    {
      ICLOSE(); // ICLOSE
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf523: WORD 'OBITS' codep=0x224c wordp=0xf52d params=0 returns=0
// ================================================
// entry

void OBITS() // OBITS
{
  WF4D3(); // WF4D3
  WF4AD(); // WF4AD
}


// ================================================
// 0xf533: WORD 'KILL' codep=0x224c wordp=0xf53c params=0 returns=0
// ================================================
// entry

void KILL() // KILL
{
  Push(0);
  Push(0x65e1+WF0EB.offset); // WF0EB<IFIELD>
  C_ex__2(); // C!_2
  OBITS(); // OBITS
  WF40C(); // WF40C
}


// ================================================
// 0xf548: WORD 'HEAL' codep=0x224c wordp=0xf551 params=0 returns=0
// ================================================
// entry

void HEAL() // HEAL
{
  OBITS(); // OBITS
  WF2A3(); // WF2A3
}

// 0xf557: db 0x48 0x45 0x41 0x4c 0x45 0x52 0x5f 0x5f 0x5f 0x00 'HEALER___ '

