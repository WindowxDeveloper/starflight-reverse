// ====== OVERLAY 'NAVIGATR' ======
// store offset = 0xf180
// overlay size   = 0x03e0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xf196  codep:0x7420 parp:0xf196 size:0x0003 C-string:'UNK_0xf196'
//      UNK_0xf19b  codep:0x7420 parp:0xf19b size:0x0003 C-string:'UNK_0xf19b'
//      UNK_0xf1a0  codep:0x7420 parp:0xf1a0 size:0x0003 C-string:'UNK_0xf1a0'
//      UNK_0xf1a5  codep:0x7420 parp:0xf1a5 size:0x0003 C-string:'UNK_0xf1a5'
//      UNK_0xf1aa  codep:0x7394 parp:0xf1aa size:0x0006 C-string:'UNK_0xf1aa'
//      UNK_0xf1b2  codep:0x7394 parp:0xf1b2 size:0x0006 C-string:'UNK_0xf1b2'
//      UNK_0xf1ba  codep:0x224c parp:0xf1ba size:0x0008 C-string:'UNK_0xf1ba'
//      UNK_0xf1c4  codep:0x224c parp:0xf1c4 size:0x0010 C-string:'UNK_0xf1c4'
//      UNK_0xf1d6  codep:0x224c parp:0xf1d6 size:0x0008 C-string:'UNK_0xf1d6'
//      UNK_0xf1e0  codep:0x224c parp:0xf1e0 size:0x0020 C-string:'UNK_0xf1e0'
//      UNK_0xf202  codep:0x224c parp:0xf202 size:0x0030 C-string:'UNK_0xf202'
//    >DOWN-SHIELD  codep:0x224c parp:0xf243 size:0x00bc C-string:'_gt_DOWN_dash_SHIELD'
//      UNK_0xf301  codep:0x224c parp:0xf301 size:0x000e C-string:'UNK_0xf301'
//      UNK_0xf311  codep:0x224c parp:0xf311 size:0x008c C-string:'UNK_0xf311'
//         >DISARM  codep:0x224c parp:0xf3a9 size:0x0044 C-string:'_gt_DISARM'
//      UNK_0xf3ef  codep:0x224c parp:0xf3ef size:0x00da C-string:'UNK_0xf3ef'
//     (/(DIS)ARM)  codep:0x224c parp:0xf4d9 size:0x0020 C-string:'_ro__slash__ro_DIS_rc_ARM_rc_'
//   (/(UD)SHIELD)  codep:0x224c parp:0xf50b size:0x0000 C-string:'_ro__slash__ro_UD_rc_SHIELD_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_Is3; // ?3
extern const unsigned short int pp_BTN_dash_REC; // BTN-REC
extern const unsigned short int pp_IsNEB; // ?NEB
extern const unsigned short int pp_IsSUP; // ?SUP
extern const unsigned short int pp_NLR; // NLR
extern const unsigned short int pp__10_star_END; // 10*END
void BEEP(); // BEEP
void _2OVER(); // 2OVER
void D0_eq_(); // D0=
void _gt_FLAG(); // >FLAG
void C_ex__2(); // C!_2
void Store_2(); // !_2
void ON_2(); // ON_2
void _099(); // 099
void CMOVE_2(); // CMOVE_2
void SET_dash_CUR(); // SET-CUR
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void _gt_SND(); // >SND
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void DrawABTN(); // .ABTN
void DrawSORD(); // .SORD
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void SWAP(); // SWAP


// =================================
// =========== VARIABLES ===========
// =================================



// 0xf192: db 0x3e 0x00 '> '

// ================================================
// 0xf194: WORD 'UNK_0xf196' codep=0x7420 parp=0xf196
// ================================================
IFieldType UNK_0xf196 = {SHIPIDX, 0x19, 0x02};

// ================================================
// 0xf199: WORD 'UNK_0xf19b' codep=0x7420 parp=0xf19b
// ================================================
IFieldType UNK_0xf19b = {SHIPIDX, 0x1b, 0x02};

// ================================================
// 0xf19e: WORD 'UNK_0xf1a0' codep=0x7420 parp=0xf1a0
// ================================================
IFieldType UNK_0xf1a0 = {SHIPIDX, 0x1d, 0x02};

// ================================================
// 0xf1a3: WORD 'UNK_0xf1a5' codep=0x7420 parp=0xf1a5
// ================================================
IFieldType UNK_0xf1a5 = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xf1a8: WORD 'UNK_0xf1aa' codep=0x7394 parp=0xf1aa
// ================================================
LoadDataType UNK_0xf1aa = {BUTTONSIDX, 0x18, 0x0c, 0x49, 0x6e57};

// ================================================
// 0xf1b0: WORD 'UNK_0xf1b2' codep=0x7394 parp=0xf1b2
// ================================================
LoadDataType UNK_0xf1b2 = {BUTTONSIDX, 0x24, 0x0c, 0x49, 0x6e57};

// ================================================
// 0xf1b8: WORD 'UNK_0xf1ba' codep=0x224c parp=0xf1ba
// ================================================

void UNK_0xf1ba() // UNK_0xf1ba
{
  Push(0xb77c); // probable 'OV?.EQ'
  MODULE(); // MODULE
}


// ================================================
// 0xf1c2: WORD 'UNK_0xf1c4' codep=0x224c parp=0xf1c4
// ================================================

void UNK_0xf1c4() // UNK_0xf1c4
{
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  Store_2(); // !_2
  Push(3);
  Push(pp_RECORD_n_); // RECORD#
  Store_2(); // !_2
}


// ================================================
// 0xf1d4: WORD 'UNK_0xf1d6' codep=0x224c parp=0xf1d6
// ================================================

void UNK_0xf1d6() // UNK_0xf1d6
{
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xf1de: WORD 'UNK_0xf1e0' codep=0x224c parp=0xf1e0
// ================================================

void UNK_0xf1e0() // UNK_0xf1e0
{
  Push(0x003c);
  Push(0x03e8);
  Push(0x000f);
  Push(3);
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  Push(0x003c);
  Push(0x01f4);
  Push(5);
  _gt_SND(); // >SND
}


// ================================================
// 0xf200: WORD 'UNK_0xf202' codep=0x224c parp=0xf202
// ================================================

void UNK_0xf202() // UNK_0xf202
{
  Push(0x0064);
  Push(3);
  Push(0x003c);
  Push(0x01f4);
  Push(0x000f);
  Push(3);
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  Push(0x003c);
  Push(0x03e8);
  _2OVER(); // 2OVER
  Push(0x003c);
  Push(0x01f4);
  Push(8);
  _gt_SND(); // >SND
}


// ================================================
// 0xf232: WORD '>DOWN-SHIELD' codep=0x224c parp=0xf243
// ================================================
// entry

void _gt_DOWN_dash_SHIELD() // >DOWN-SHIELD
{
  Push(pp_IsNEB); // ?NEB
  Push(Read16(Pop())); // @
  Push(pp_Is3); // ?3
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+UNK_0xf196.offset); // IFIELD
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  ICLOSE(); // ICLOSE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    UNK_0x3f09("MAGNETIC DISTURBANCES IN NEBULA");
    DrawTTY(); // .TTY
    UNK_0x3f09("CAUSING ENERGY FLUCTUATIONS");
    DrawTTY(); // .TTY
  }
  UNK_0xf1c4(); // UNK_0xf1c4
  UNK_0x3f09("RAISE SHIELD");
  LoadData(UNK_0xf1aa); // from 'BUTTONS'
  UNK_0xf1d6(); // UNK_0xf1d6
  Push(0x65e1+UNK_0xf1a5.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(0x00f7);
  Push(Pop() & Pop()); // AND
  Push(0x0010);
  Push(Pop() | Pop()); // OR
  Push(0x65e1+UNK_0xf1a5.offset); // IFIELD
  C_ex__2(); // C!_2
  UNK_0xf1e0(); // UNK_0xf1e0
  UNK_0x3f09("SHIELDS ARE DOWN");
  DrawTTY(); // .TTY
  Push(pp_BTN_dash_REC); // BTN-REC
  Push(Read16(Pop())); // @
  Push(3);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(3);
    Push(2);
    DrawABTN(); // .ABTN
  }
  Push(pp_IsSUP); // ?SUP
  _099(); // 099
}


// ================================================
// 0xf2ff: WORD 'UNK_0xf301' codep=0x224c parp=0xf301
// ================================================

void UNK_0xf301() // UNK_0xf301
{
  Push(pp_Is3); // ?3
  Push(Read16(Pop())); // @
  Push(pp_IsNEB); // ?NEB
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf30f: WORD 'UNK_0xf311' codep=0x224c parp=0xf311
// ================================================

void UNK_0xf311() // UNK_0xf311
{
  Push(6);
  UNK_0xf1ba(); // UNK_0xf1ba
  _gt_FLAG(); // >FLAG
  Push(pp_NLR); // NLR
  Push(Read16(Pop())); // @
  Push(-1);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  UNK_0xf301(); // UNK_0xf301
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    UNK_0xf1c4(); // UNK_0xf1c4
    UNK_0x3f09("DROP SHIELD ");
    LoadData(UNK_0xf1aa); // from 'BUTTONS'
    UNK_0xf1d6(); // UNK_0xf1d6
    Push(0x65e1+UNK_0xf1a5.offset); // IFIELD
    Push(Read8(Pop())&0xFF); // C@
    Push(0x0018);
    Push(Pop() | Pop()); // OR
    Push(0x65e1+UNK_0xf1a5.offset); // IFIELD
    C_ex__2(); // C!_2
    UNK_0xf1e0(); // UNK_0xf1e0
    UNK_0x3f09("SHIELDS ARE NOW UP");
    DrawTTY(); // .TTY
    Push(3);
    Push(2);
    DrawABTN(); // .ABTN
    Push(pp_IsSUP); // ?SUP
    ON_2(); // ON_2
    return;
  }
  Push(pp_NLR); // NLR
  Push(Read16(Pop())); // @
  Push(-1);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  UNK_0x3f09("SHIELDS INOPERATIVE");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf39d: WORD '>DISARM' codep=0x224c parp=0xf3a9
// ================================================
// entry

void _gt_DISARM() // >DISARM
{
  UNK_0xf1c4(); // UNK_0xf1c4
  UNK_0x3f09("ARM WEAPON");
  LoadData(UNK_0xf1b2); // from 'BUTTONS'
  UNK_0xf1d6(); // UNK_0xf1d6
  Push(0x65e1+UNK_0xf1a5.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(0x00fc);
  Push(Pop() & Pop()); // AND
  Push(0x0020);
  Push(Pop() | Pop()); // OR
  Push(0x65e1+UNK_0xf1a5.offset); // IFIELD
  C_ex__2(); // C!_2
  UNK_0xf202(); // UNK_0xf202
  UNK_0x3f09("WEAPONS ARE DISARMED");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf3ed: WORD 'UNK_0xf3ef' codep=0x224c parp=0xf3ef
// ================================================

void UNK_0xf3ef() // UNK_0xf3ef
{
  Push(0x65e1+UNK_0xf1a0.offset); // IFIELD
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(0x65e1+UNK_0xf19b.offset); // IFIELD
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    if (Pop() != 0)
    {
      Push(4);
      UNK_0xf1ba(); // UNK_0xf1ba
    } else
    {
      Push(0);
    }
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      UNK_0xf202(); // UNK_0xf202
      UNK_0x3f09("ARMING ");
      DrawTTY(); // .TTY
      Push(pp_Is3); // ?3
      Push(Read16(Pop())); // @
      if (Pop() != 0)
      {
        PRINT("PLASMA BOLTS", 12); // (.")
      } else
      {
        PRINT("MISSLES", 7); // (.")
      }
    }
    SWAP(); // SWAP
    if (Pop() != 0)
    {
      Push(3);
      UNK_0xf1ba(); // UNK_0xf1ba
    } else
    {
      Push(0);
    }
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      UNK_0xf202(); // UNK_0xf202
      UNK_0x3f09("ARMING LASERS");
      DrawTTY(); // .TTY
    }
    Push(Pop() + Pop()); // +
    if (Pop() != 0)
    {
      Push(0x65e1+UNK_0xf1a5.offset); // IFIELD
      Push(Read16(Pop())); // @
      Push(0x0023);
      Push(Pop() | Pop()); // OR
      Push(0x65e1+UNK_0xf1a5.offset); // IFIELD
      Store_2(); // !_2
      UNK_0xf1c4(); // UNK_0xf1c4
      UNK_0x3f09("DISARM    ");
      LoadData(UNK_0xf1b2); // from 'BUTTONS'
      UNK_0xf1d6(); // UNK_0xf1d6
    }
    return;
  }
  Pop(); Pop(); // 2DROP
  UNK_0x3f09("SHIP IS NOT EQUIPPED WITH WEAPONS");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf4c9: WORD '(/(DIS)ARM)' codep=0x224c parp=0xf4d9
// ================================================
// entry

void _ro__slash__ro_DIS_rc_ARM_rc_() // (/(DIS)ARM)
{
  CTINIT(); // CTINIT
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+UNK_0xf1a5.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(3);
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    _gt_DISARM(); // >DISARM
  } else
  {
    UNK_0xf3ef(); // UNK_0xf3ef
  }
  ICLOSE(); // ICLOSE
  DrawSORD(); // .SORD
}


// ================================================
// 0xf4f9: WORD '(/(UD)SHIELD)' codep=0x224c parp=0xf50b
// ================================================
// entry

void _ro__slash__ro_UD_rc_SHIELD_rc_() // (/(UD)SHIELD)
{
  CTINIT(); // CTINIT
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+UNK_0xf1a5.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(8);
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    _gt_DOWN_dash_SHIELD(); // >DOWN-SHIELD
  } else
  {
    UNK_0xf301(); // UNK_0xf301
    if (Pop() == 0) Push(1); else Push(0); // NOT
    Push(pp__10_star_END); // 10*END
    _2_at_(); // 2@
    D0_eq_(); // D0=
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      UNK_0x3f09("SHIELDS CAN'T BE RAISED");
      DrawTTY(); // .TTY
      BEEP(); // BEEP
    } else
    {
      UNK_0xf311(); // UNK_0xf311
    }
  }
  ICLOSE(); // ICLOSE
  DrawSORD(); // .SORD
}

// 0xf55d: db 0x4e 0x41 0x56 0x00 'NAV '

