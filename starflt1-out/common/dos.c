
#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"

#include"../overlays/DPART-OV.h"
#include"../overlays/CHKFLIGHT-OV.h"
#include"../overlays/FRACT-OV.h"
#include"../overlays/ICONP-OV.h"
#include"../overlays/SITE-OV.h"
#include"../overlays/HYPERMSG-OV.h"
#include"../overlays/BLT-OV.h"
#include"../overlays/MISC-OV.h"
#include"../overlays/BANK-OV.h"
#include"../overlays/ASSCREW-OV.h"
#include"../overlays/PERSONNEL-OV.h"
#include"../overlays/SHIPGRPH-OV.h"
#include"../overlays/CONFIG-OV.h"
#include"../overlays/TDEPOT-OV.h"
#include"../overlays/PORTMENU-OV.h"
#include"../overlays/VITA-OV.h"
#include"../overlays/HP-OV.h"
#include"../overlays/LP-OV.h"
#include"../overlays/SENT-OV.h"
#include"../overlays/TV-OV.h"
#include"../overlays/COMM-OV.h"
#include"../overlays/COMMSPEC-OV.h"
#include"../overlays/SEED-OV.h"
#include"../overlays/LISTICONS.h"
#include"../overlays/MOVE-OV.h"
#include"../overlays/ENGINEER.h"
#include"../overlays/DOCTOR.h"
#include"../overlays/ORBIT-OV.h"
#include"../overlays/CAPTAIN.h"
#include"../overlays/SCIENCE.h"
#include"../overlays/NAVIGATR.h"
#include"../overlays/SHIPBUTTONS.h"
#include"../overlays/MAP-OV.h"
#include"../overlays/HYPER-OV.h"
#include"../overlays/ANALYZE-OV.h"
#include"../overlays/LAUNCH-OV.h"
#include"../overlays/FLUX-EFFECT.h"
#include"../overlays/OP-OV.h"
#include"../overlays/ITEMS-OV.h"
#include"../overlays/BEHAV-OV.h"
#include"../overlays/HEAL-OV.h"
#include"../overlays/REPAIR-OV.h"
#include"../overlays/GAME-OV.h"
#include"../overlays/PLSET-OV.h"
#include"../overlays/MAPS-OV.h"
#include"../overlays/STORM-OV.h"
#include"../overlays/IT-OV.h"
#include"../overlays/COMBAT-OV.h"
#include"../overlays/DAMAGE-OV.h"
#include"../overlays/LAND-OV.h"
#include"../overlays/MUSIC.h"
#include"../overlays/STP-OV.h"

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc_DOS_dash_FILE; // DOS-FILE
extern const unsigned short int cc_PSW; // PSW
extern const unsigned short int cc_AX; // AX
extern const unsigned short int cc_BX; // BX
extern const unsigned short int cc_DX; // DX
extern const unsigned short int cc_DI; // DI
extern const unsigned short int cc_SI; // SI
extern const unsigned short int cc_DS; // DS
extern const unsigned short int cc_ES; // ES
extern const unsigned short int pp__i_FCB; // 'FCB
extern const unsigned short int pp_DEFAULTDRV; // DEFAULTDRV
extern const unsigned short int pp_DISK_dash_ERROR; // DISK-ERROR
extern const unsigned short int pp_DTA; // DTA
extern const unsigned short int pp_FILE; // FILE
extern const unsigned short int pp_SYSK; // SYSK
extern const unsigned short int user__gt_IN; // >IN
extern const unsigned short int user_TIB; // TIB
void _ro_RESTORE_rc_(); // (RESTORE)
void FREEZE(); // FREEZE
void BYE_2(); // BYE_2
void _ro_SETUP_rc_(); // (SETUP)
void COUNT(); // COUNT
void M_slash_(); // M/
void MAX(); // MAX
void OFF_1(); // OFF_1
void HERE(); // HERE
void PAD(); // PAD
void _dash_TRAILING(); // -TRAILING
void MS(); // MS
void DRIVENUMBERS(); // DRIVENUMBERS
void FCBPFAS(); // FCBPFAS
void _st_MOUNT_gt_(); // <MOUNT>
void UNMOUNT(); // UNMOUNT
void BLOCK_1(); // BLOCK_1
void FLUSH(); // FLUSH
void IsUNRAVEL(); // ?UNRAVEL
void Store(); // !
void _ro_CS_ask__rc_(); // (CS?)
void _2_ex__2(); // 2!_2
void _2_at_(); // 2@
void C_ex__2(); // C!_2
void CMOVE_2(); // CMOVE_2
void FILL_2(); // FILL_2
void _2DUP(); // 2DUP
void OVER(); // OVER
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void U_slash_MOD(); // U/MOD
void _st_(); // <
void U_st_(); // U<
void INTERRUPT(); // INTERRUPT
void GetEXECUTE(); // @EXECUTE


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_MAXDRV = 0x4567; // MAXDRV size: 2
// {0x04, 0x00}

const unsigned short int pp_ASKMOUNT = 0x4658; // ASKMOUNT size: 2
// {0x69, 0x46}





// ================================================
// 0x40c6: WORD '>TIB' codep=0x224c wordp=0x40cf params=2 returns=0
// ================================================

void _gt_TIB() // >TIB
{
  Push(Read16(user_TIB)); // TIB @
  _2DUP(); // 2DUP
  Push(Pop() + Pop()); // +
  OFF_1(); // OFF_1
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  Push(user__gt_IN); // >IN
  OFF_1(); // OFF_1
}


// ================================================
// 0x40e3: WORD 'DOSPARM' codep=0x224c wordp=0x40ef
// ================================================

void DOSPARM() // DOSPARM
{
  Push(0x0080);
  COUNT(); // COUNT
  _gt_TIB(); // >TIB
  Exec("INTERPRET"); // call of word 0x1dd8 '(INTERPRET)'
}


// ================================================
// 0x40fb: WORD 'XFCB' codep=0x224c wordp=0x4104 params=0 returns=1
// ================================================

void XFCB() // XFCB
{
  Push(Read16(pp__i_FCB) - 7); // 'FCB @ 7 -
}


// ================================================
// 0x410e: WORD 'DRV' codep=0x224c wordp=0x4116 params=0 returns=1
// ================================================

void DRV() // DRV
{
  Push(Read16(pp__i_FCB)); // 'FCB @
}


// ================================================
// 0x411c: WORD 'NAM' codep=0x224c wordp=0x4124 params=0 returns=1
// ================================================

void NAM() // NAM
{
  Push(Read16(pp__i_FCB) + 1); // 'FCB @ 1+
}


// ================================================
// 0x412c: WORD 'TYP' codep=0x224c wordp=0x4134 params=0 returns=1
// ================================================

void TYP() // TYP
{
  Push(Read16(pp__i_FCB) + 9); // 'FCB @ 9 +
}


// ================================================
// 0x4140: WORD 'CURBLK' codep=0x224c wordp=0x414b params=0 returns=1
// ================================================

void CURBLK() // CURBLK
{
  Push(Read16(pp__i_FCB) + 0x000c); // 'FCB @ 0x000c +
}


// ================================================
// 0x4157: WORD 'RECSIZE' codep=0x224c wordp=0x4163 params=0 returns=1
// ================================================

void RECSIZE() // RECSIZE
{
  Push(Read16(pp__i_FCB) + 0x000e); // 'FCB @ 0x000e +
}


// ================================================
// 0x416f: WORD 'FILESIZE' codep=0x224c wordp=0x417c params=0 returns=1
// ================================================

void FILESIZE() // FILESIZE
{
  Push(Read16(pp__i_FCB) + 0x0010); // 'FCB @ 0x0010 +
}


// ================================================
// 0x4188: WORD 'CURREC' codep=0x224c wordp=0x4193 params=0 returns=1
// ================================================

void CURREC() // CURREC
{
  Push(Read16(pp__i_FCB) + 0x0020); // 'FCB @ 0x0020 +
}


// ================================================
// 0x419f: WORD 'RELREC' codep=0x224c wordp=0x41aa params=0 returns=1
// ================================================

void RELREC() // RELREC
{
  Push(Read16(pp__i_FCB) + 0x0021); // 'FCB @ 0x0021 +
}


// ================================================
// 0x41b6: WORD 'CLRFCB' codep=0x224c wordp=0x41c1 params=0 returns=0
// ================================================

void CLRFCB() // CLRFCB
{
  XFCB(); // XFCB
  Push(0x002c);
  Push(0);
  FILL_2(); // FILL_2
  NAM(); // NAM
  Push(0x000b);
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  Push(0);
  XFCB(); // XFCB
  C_ex__2(); // C!_2
}


// ================================================
// 0x41dd: WORD 'SYSTEM' codep=0x224c wordp=0x41e8 params=0 returns=0
// ================================================

void SYSTEM() // SYSTEM
{
  Push(0x2d97); // 'FCB'
  Push(Pop() + 7); //  7 +
  Push(pp__i_FCB); // 'FCB
  Store(); // !
}


// ================================================
// 0x41f6: WORD 'SYSUTIL' codep=0x224c wordp=0x4202 params=0 returns=0
// ================================================

void SYSUTIL() // SYSUTIL
{
  Push(0x2d97); // 'FCB'
  Push(Pop() + 0x0033); //  0x0033 +
  Push(pp__i_FCB); // 'FCB
  Store(); // !
}


// ================================================
// 0x4212: WORD 'DOSCALL' codep=0x224c wordp=0x421e params=1 returns=0
// ================================================

void DOSCALL() // DOSCALL
{
  Push(Read16(cc_AX) + 1); // AX 1+
  C_ex__2(); // C!_2
  Push(0x0021);
  INTERRUPT(); // INTERRUPT
}


// ================================================
// 0x422c: WORD 'SELDSK' codep=0x224c wordp=0x4237 params=1 returns=0
// ================================================

void SELDSK() // SELDSK
{
  Push(Read16(regsp)); // DUP
  Push(pp_DEFAULTDRV); // DEFAULTDRV
  Store(); // !
  Push(Pop() - 1); //  1-
  Push(Read16(cc_DX)); // DX
  Store(); // !
  Push(0x000e);
  DOSCALL(); // DOSCALL
}


// ================================================
// 0x424b: WORD 'A::' codep=0x224c wordp=0x4253 params=0 returns=0
// ================================================

void A_c__c_() // A::
{
  Push(1);
  SELDSK(); // SELDSK
}


// ================================================
// 0x4259: WORD 'B::' codep=0x224c wordp=0x4261 params=0 returns=0
// ================================================

void B_c__c_() // B::
{
  Push(2);
  SELDSK(); // SELDSK
}


// ================================================
// 0x4267: WORD 'C::' codep=0x224c wordp=0x426f params=0 returns=0
// ================================================

void C_c__c_() // C::
{
  Push(3);
  SELDSK(); // SELDSK
}


// ================================================
// 0x4275: WORD 'SETFCB' codep=0x224c wordp=0x4280 params=0 returns=1
// ================================================

void SETFCB() // SETFCB
{
  CLRFCB(); // CLRFCB
  Push(Read16(cc_BL)); // BL
  Exec("WORD"); // call of word 0x1f06 '(WORD)'
  Push(Pop() + 1); //  1+
  Push(Read16(cc_SI)); // SI
  Store(); // !
  Push(Read16(pp__i_FCB)); // 'FCB @
  Push(Read16(cc_DI)); // DI
  Store(); // !
  _ro_CS_ask__rc_(); // (CS?)
  Push(Read16(regsp)); // DUP
  Push(Read16(cc_DS)); // DS
  Store(); // !
  Push(Read16(cc_ES)); // ES
  Store(); // !
  Push(5);
  Push(Read16(cc_AX)); // AX
  Store(); // !
  Push(0x0029);
  DOSCALL(); // DOSCALL
  Push(((Read16(Read16(cc_AX))&0xFF)==0x00ff?1:0) | ((Read16(Read16(Read16(cc_DI)) + 1)&0xFF)==Read16(cc_BL)?1:0)); // AX C@ 0x00ff = DI @ 1+ C@ BL = OR
}


// ================================================
// 0x42c6: WORD 'INIT' codep=0x224c wordp=0x42cf params=0 returns=0
// ================================================

void INIT() // INIT
{
  Push(0x000d);
  DOSCALL(); // DOSCALL
}


// ================================================
// 0x42d7: WORD 'FCBCALL' codep=0x224c wordp=0x42e3 params=1 returns=1
// ================================================

void FCBCALL() // FCBCALL
{
  Push(Read16(pp__i_FCB)); // 'FCB @
  Push(Read16(cc_DX)); // DX
  Store(); // !
  _ro_CS_ask__rc_(); // (CS?)
  Push(Read16(cc_DS)); // DS
  Store(); // !
  DOSCALL(); // DOSCALL
  Push(Read16(Read16(cc_AX))&0xFF); // AX C@
}


// ================================================
// 0x42f9: WORD 'OPEN' codep=0x224c wordp=0x4302 params=0 returns=1
// ================================================

void OPEN() // OPEN
{
  Push(0x000f);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x430a: WORD 'CLOSE' codep=0x224c wordp=0x4314 params=0 returns=1
// ================================================

void CLOSE() // CLOSE
{
  Push(0x0010);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x431c: WORD 'SEARCH1ST' codep=0x224c wordp=0x432a params=0 returns=1
// ================================================

void SEARCH1ST() // SEARCH1ST
{
  Push(0x0011);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x4332: WORD 'READNEXT' codep=0x224c wordp=0x433f params=0 returns=1
// ================================================

void READNEXT() // READNEXT
{
  Push(0x0014);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x4347: WORD 'WRITENEXT' codep=0x224c wordp=0x4355 params=0 returns=1
// ================================================

void WRITENEXT() // WRITENEXT
{
  Push(0x0015);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x435d: WORD 'MAKE' codep=0x224c wordp=0x4366 params=0 returns=1
// ================================================

void MAKE() // MAKE
{
  Push(0x0016);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x436e: WORD 'DOS-DTA' codep=0x224c wordp=0x437a params=0 returns=0
// ================================================

void DOS_dash_DTA() // DOS-DTA
{
  Push(pp_DTA); // DTA
  _2_at_(); // 2@
  Push(Read16(cc_DX)); // DX
  Store(); // !
  Push(Read16(cc_DS)); // DS
  Store(); // !
  Push(0x001a);
  DOSCALL(); // DOSCALL
}


// ================================================
// 0x438e: WORD 'READ-RANDOM' codep=0x224c wordp=0x439e params=0 returns=1
// ================================================

void READ_dash_RANDOM() // READ-RANDOM
{
  Push(0x0021);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x43a6: WORD 'WRITE-RANDOM' codep=0x224c wordp=0x43b7 params=0 returns=1
// ================================================

void WRITE_dash_RANDOM() // WRITE-RANDOM
{
  Push(0x0022);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x43bf: WORD 'W43C1' codep=0x224c wordp=0x43c1 params=1 returns=0
// ================================================

void W43C1() // W43C1
{
  ABORT("Bad name", 8);// (ABORT")
}


// ================================================
// 0x43ce: WORD 'MAKE<NAME>' codep=0x224c wordp=0x43dd params=0 returns=0
// ================================================

void MAKE_st_NAME_gt_() // MAKE<NAME>
{
  SETFCB(); // SETFCB
  W43C1(); // W43C1
  MAKE(); // MAKE
  ABORT("Can't create.", 13);// (ABORT")
}


// ================================================
// 0x43f5: WORD 'OPEN<NAME>' codep=0x224c wordp=0x4404 params=0 returns=0
// ================================================

void OPEN_st_NAME_gt_() // OPEN<NAME>
{
  SETFCB(); // SETFCB
  W43C1(); // W43C1
  OPEN(); // OPEN
  ABORT("Can't open.", 11);// (ABORT")
}


// ================================================
// 0x441a: WORD '[FILE]' codep=0x224c wordp=0x4425 params=2 returns=0
// ================================================

void _bo_FILE_bc_() // [FILE]
{
  DOS_dash_DTA(); // DOS-DTA
  Push(Read16(pp_FILE)); // FILE @
  FCBPFAS(); // FCBPFAS
  Push(Read16(Pop())); //  @
  Push(pp__i_FCB); // 'FCB
  Store(); // !
  SWAP(); // SWAP
  RELREC(); // RELREC
  Store(); // !
  if (Pop() != 0)
  {
    READ_dash_RANDOM(); // READ-RANDOM
  } else
  {
    WRITE_dash_RANDOM(); // WRITE-RANDOM
  }
  Push(pp_DISK_dash_ERROR); // DISK-ERROR
  Store(); // !
}


// ================================================
// 0x444b: WORD 'SYSGEN' codep=0x224c wordp=0x4456 params=0 returns=0
// ================================================

void SYSGEN() // SYSGEN
{
  Exec("CR"); // call of word 0x26ee '(CR)'
  FREEZE(); // FREEZE
  _ro_RESTORE_rc_(); // (RESTORE)
  SYSUTIL(); // SYSUTIL
  INIT(); // INIT
  MAKE_st_NAME_gt_(); // MAKE<NAME>
  _ro_CS_ask__rc_(); // (CS?)
  Push(0x0100);
  Push(pp_DTA); // DTA
  _2_ex__2(); // 2!_2
  DOS_dash_DTA(); // DOS-DTA
  HERE(); // HERE
  Push(Pop() - 0x0100); //  0x0100 -
  RECSIZE(); // RECSIZE
  Store(); // !
  WRITENEXT(); // WRITENEXT
  _ro_SETUP_rc_(); // (SETUP)
  IsUNRAVEL(); // ?UNRAVEL
  CLOSE(); // CLOSE
  IsUNRAVEL(); // ?UNRAVEL
}


// ================================================
// 0x4486: WORD '4TH>DOS' codep=0x224c wordp=0x4492 params=2 returns=1
// ================================================

void _4TH_gt_DOS() // 4TH>DOS
{
  unsigned short int i, imax;
  SYSUTIL(); // SYSUTIL
  MAKE_st_NAME_gt_(); // MAKE<NAME>
  Push(0x0400);
  RECSIZE(); // RECSIZE
  Store(); // !
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    _ro_CS_ask__rc_(); // (CS?)
    Push(i); // I
    BLOCK_1(); // BLOCK_1
    Push(pp_DTA); // DTA
    _2_ex__2(); // 2!_2
    DOS_dash_DTA(); // DOS-DTA
    SYSUTIL(); // SYSUTIL
    WRITENEXT(); // WRITENEXT
    IsUNRAVEL(); // ?UNRAVEL
    i++;
  } while(i<imax); // (LOOP)

  CLOSE(); // CLOSE
  IsUNRAVEL(); // ?UNRAVEL
}


// ================================================
// 0x44c0: WORD 'W44C2' codep=0x224c wordp=0x44c2 params=0 returns=1
// ================================================

void W44C2() // W44C2
{
  unsigned short int a;
  Push(Read16(pp__i_FCB)); // 'FCB @
  a = Pop(); // >R
  Push(0);
  PAD(); // PAD
  C_ex__2(); // C!_2
  PAD(); // PAD
  Push(Pop() + 7); //  7 +
  Push(pp__i_FCB); // 'FCB
  Store(); // !
  CLRFCB(); // CLRFCB
  SET_STR_AS_PARAM("STARA   COM");
  NAM(); // NAM
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  _ro_CS_ask__rc_(); // (CS?)
  PAD(); // PAD
  Push(Pop() + 0x0032); //  0x0032 +
  Push(pp_DTA); // DTA
  _2_ex__2(); // 2!_2
  DOS_dash_DTA(); // DOS-DTA
  SEARCH1ST(); // SEARCH1ST
  Push(0x0042);
  NAM(); // NAM
  Push(Pop() + 4); //  4 +
  C_ex__2(); // C!_2
  SEARCH1ST(); // SEARCH1ST
  Push(Pop() | Pop()); // OR
  Push(a); // R>
  Push(pp__i_FCB); // 'FCB
  Store(); // !
}


// ================================================
// 0x4518: WORD 'W451A' codep=0x224c wordp=0x451a params=0 returns=2
// ================================================

void W451A() // W451A
{
  Push(0x0011);
  INTERRUPT(); // INTERRUPT
  Push(Read16(Read16(cc_AX)) & 0x00c0); // AX @ 0x00c0 AND
  Push(0x0040);
  _slash_(); // /
  Push(Pop() + 1); //  1+
}


// ================================================
// 0x4534: WORD 'W4536' codep=0x224c wordp=0x4536 params=1 returns=1
// ================================================

void W4536() // W4536
{
  Push(Read16(cc_DX)); // DX
  Store(); // !
  Push(0x0036);
  DOSCALL(); // DOSCALL
  Push(!(Read16(Read16(cc_AX))==-1?1:0)); // AX @ -1 = NOT
}


// ================================================
// 0x454c: WORD 'W454E' codep=0x224c wordp=0x454e params=0 returns=1
// ================================================

void W454E() // W454E
{
  Push(0x0019);
  DOSCALL(); // DOSCALL
  Push((Read16(Read16(cc_AX))&0xFF) + 1); // AX C@ 1+
}


// ================================================
// 0x455c: WORD 'MAXDRV' codep=0x1d29 wordp=0x4567
// ================================================
// 0x4567: db 0x04 0x00 '  '

// ================================================
// 0x4569: WORD 'SETMAXDRV' codep=0x224c wordp=0x4577 params=0 returns=1
// ================================================

void SETMAXDRV() // SETMAXDRV
{
  unsigned short int i, imax;
  W451A(); // W451A
  Push(2);
  MAX(); // MAX
  W454E(); // W454E
  MAX(); // MAX
  Push(pp_MAXDRV); // MAXDRV
  Store(); // !
  W44C2(); // W44C2
  if (Pop() == 0) return;

  i = Read16(pp_MAXDRV) + 1; // MAXDRV @ 1+
  imax = 7;
  do // (DO)
  {
    Push(i); // I
    W4536(); // W4536
    if (Pop() != 0)
    {
      Push(i); // I
      Push(pp_MAXDRV); // MAXDRV
      Store(); // !
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(pp_MAXDRV)==2?1:0); // MAXDRV @ 2 =
  W451A(); // W451A
  Push(Pop()==1?1:0); //  1 =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(1);
  Push(pp_MAXDRV); // MAXDRV
  Store(); // !
}


// ================================================
// 0x45c3: WORD 'W45C5' codep=0x224c wordp=0x45c5 params=0 returns=0
// ================================================

void W45C5() // W45C5
{
  DRV(); // DRV
  Push((Read16(Pop())&0xFF)==0?1:0); //  C@ 0=
  if (Pop() == 0) return;
  W454E(); // W454E
  DRV(); // DRV
  C_ex__2(); // C!_2
}


// ================================================
// 0x45d7: WORD 'W45D9' codep=0x224c wordp=0x45d9 params=1 returns=1
// ================================================

void W45D9() // W45D9
{
  Push(Pop() + 1); //  1+
  Push(Read16(pp_MAXDRV)); // MAXDRV @
  OVER(); // OVER
  _st_(); // <
  if (Pop() == 0) return;
  Pop(); // DROP
  Push(1);
}


// ================================================
// 0x45ed: WORD 'SMARTOPEN' codep=0x224c wordp=0x45fb params=0 returns=1
// ================================================

void SMARTOPEN() // SMARTOPEN
{
  unsigned short int a, b;
  OPEN(); // OPEN
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  DRV(); // DRV
  Push((Read16(Pop())&0xFF)==0?1:0); //  C@ 0=
  if (Pop() == 0) return;
  a = Pop(); // >R
  W45C5(); // W45C5
  DRV(); // DRV
  Push(Read16(Pop())&0xFF); //  C@
  while(1)
  {
    DRV(); // DRV
    Push(Read16(Pop())&0xFF); //  C@
    W45D9(); // W45D9
    _2DUP(); // 2DUP
    Push((Pop()==Pop())?1:0); // =
    Push(!Pop() & a); //  NOT I AND
    if (Pop() == 0) break;

    DRV(); // DRV
    C_ex__2(); // C!_2
    OPEN(); // OPEN
    Push(a); // R>
    Pop(); // DROP
    b = Pop(); // >R
  }
  Pop(); Pop(); // 2DROP
  Push(a); // R>
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(0);
  DRV(); // DRV
  C_ex__2(); // C!_2
}


// ================================================
// 0x464b: WORD 'ASKMOUNT' codep=0x1d29 wordp=0x4658
// ================================================
// 0x4658: db 0x69 0x46 'iF'

// ================================================
// 0x465a: WORD '<ASKMOUNT>' codep=0x224c wordp=0x4669 params=0 returns=0
// ================================================

void _st_ASKMOUNT_gt_() // <ASKMOUNT>
{
  Exec("CR"); // call of word 0x26ee '(CR)'
  PRINT("Place disk containing file", 26); // (.")
  Exec("CR"); // call of word 0x26ee '(CR)'
  NAM(); // NAM
  Push(8);
  _dash_TRAILING(); // -TRAILING
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(".", 1); // (.")
  TYP(); // TYP
  Push(3);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" into ", 6); // (.")
  DRV(); // DRV
  Push(Read16(Pop())&0xFF); //  C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    PRINT("drive ", 6); // (.")
    Push(Pop() + 0x0040); //  0x0040 +
    Exec("EMIT"); // call of word 0x2731 '(EMIT)'
  } else
  {
    PRINT("any drive", 9); // (.")
  }
  Exec("CR"); // call of word 0x26ee '(CR)'
  PRINT("and press any key when ready.", 29); // (.")
  Exec("KEY_1"); // call of word 0x25d7 '(KEY)'
  Pop(); // DROP
}


// ================================================
// 0x46f8: WORD 'DOSMOUNT' codep=0x224c wordp=0x4705 params=1 returns=2
// ================================================

void DOSMOUNT() // DOSMOUNT
{
  unsigned short int a;
  a = Pop(); // >R
  INIT(); // INIT
  while(1)
  {
    Push(a); // I
    FCBPFAS(); // FCBPFAS
    Push(Read16(Pop())); //  @
    Push(pp__i_FCB); // 'FCB
    Store(); // !
    SMARTOPEN(); // SMARTOPEN
    Push(Read16(regsp)); // DUP
    if (Pop() == 0) break;

    Pop(); // DROP
    FLUSH(); // FLUSH
    INIT(); // INIT
    Push(a); // I
    FCBPFAS(); // FCBPFAS
    Push(Read16(Pop())); //  @
    Push(pp__i_FCB); // 'FCB
    Store(); // !
    Push(pp_ASKMOUNT); // ASKMOUNT
    GetEXECUTE(); // @EXECUTE
  }
  Push(0x0400);
  RECSIZE(); // RECSIZE
  Store(); // !
  FILESIZE(); // FILESIZE
  _2_at_(); // 2@
  SWAP(); // SWAP
  Push(0x0400);
  M_slash_(); // M/
  SWAP(); // SWAP
  Pop(); // DROP
  DRV(); // DRV
  Push(Read16(Pop())&0xFF); //  C@
  Push(a); // R>
  DRIVENUMBERS(); // DRIVENUMBERS
  C_ex__2(); // C!_2
}


// ================================================
// 0x4757: WORD 'DOSUNMOUNT' codep=0x224c wordp=0x4766 params=1 returns=1
// ================================================

void DOSUNMOUNT() // DOSUNMOUNT
{
  FCBPFAS(); // FCBPFAS
  Push(Read16(Pop())); //  @
  Push(pp__i_FCB); // 'FCB
  Store(); // !
  CLOSE(); // CLOSE
  Pop(); // DROP
  Push(0);
}


// ================================================
// 0x4776: WORD 'DR2' codep=0x224c wordp=0x477e params=0 returns=0
// ================================================

void DR2() // DR2
{
  Push(0x4425); // '[FILE]'
  Push(0x02d0);
  SYSTEM(); // SYSTEM
  Push(Read16(pp__i_FCB)); // 'FCB @
  NAM(); // NAM
  DRV(); // DRV
  Push(Read16(Pop())&0xFF); //  C@
  Push(1);
  Push(Read16(cc_DOS_dash_FILE)); // DOS-FILE
  _st_MOUNT_gt_(); // <MOUNT>
  Pop(); // DROP
}


// ================================================
// 0x479c: WORD 'DR3' codep=0x224c wordp=0x47a4 params=0 returns=0
// ================================================

void DR3() // DR3
{
  Push(0x4425); // '[FILE]'
  Push(0x05dc);
  SYSUTIL(); // SYSUTIL
  Push(Read16(pp__i_FCB)); // 'FCB @
  NAM(); // NAM
  DRV(); // DRV
  Push(Read16(Pop())&0xFF); //  C@
  Push(1);
  Push(Read16(cc_DOS_dash_FILE) + 1); // DOS-FILE 1+
  _st_MOUNT_gt_(); // <MOUNT>
  Pop(); // DROP
}


// ================================================
// 0x47c4: WORD 'USING' codep=0x224c wordp=0x47ce params=0 returns=0
// ================================================

void USING() // USING
{
  Push(Read16(cc_DOS_dash_FILE)); // DOS-FILE
  UNMOUNT(); // UNMOUNT
  SYSTEM(); // SYSTEM
  SETFCB(); // SETFCB
  W43C1(); // W43C1
  DR2(); // DR2
}


// ================================================
// 0x47dc: WORD 'W47DE' codep=0x224c wordp=0x47de params=2 returns=2
// ================================================

void W47DE() // W47DE
{
  Push(Read16(cc_ES)); // ES
  Store(); // !
  Push(Read16(regsp)); // DUP
  Push(Read16(cc_BX)); // BX
  Store(); // !
  Push(0x004a);
  DOSCALL(); // DOSCALL
  Push(Read16(Read16(cc_PSW)) & 1); // PSW @ 1 AND
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(Read16(Read16(cc_BX))); // BX @
    Push(1);
  } else
  {
    Push(0);
  }
  _ro_CS_ask__rc_(); // (CS?)
  Push(Read16(cc_ES)); // ES
  Store(); // !
}


// ================================================
// 0x4810: WORD 'SETSYSK' codep=0x224c wordp=0x481c params=0 returns=0
// ================================================

void SETSYSK() // SETSYSK
{
  Push(0x8000);
  _ro_CS_ask__rc_(); // (CS?)
  W47DE(); // W47DE
  Pop(); // DROP
  Push(Read16(regsp)); // DUP
  _ro_CS_ask__rc_(); // (CS?)
  Push(Pop() + Pop()); // +
  Push(0);
  Push(0x0040);
  U_slash_MOD(); // U/MOD
  Push(pp_SYSK); // SYSK
  Store(); // !
  Pop(); // DROP
  _ro_CS_ask__rc_(); // (CS?)
  W47DE(); // W47DE
  Pop(); // DROP
  Push(0x2000);
  U_st_(); // U<
  if (Pop() == 0) return;
  PRINT("Out of memory", 13); // (.")
  Push(0x0bb8);
  MS(); // MS
  BYE_2(); // BYE_2
}


