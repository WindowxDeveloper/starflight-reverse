// ====== OVERLAY 'GAME-OV' ======
// store offset = 0xde40
// overlay size   = 0x1720

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WDE56  codep:0x2214 wordp:0xde56 size:0x0002 C-string:'WDE56'
//           WDE5A  codep:0x2214 wordp:0xde5a size:0x0002 C-string:'WDE5A'
//           WDE5E  codep:0x2214 wordp:0xde5e size:0x0002 C-string:'WDE5E'
//           WDE62  codep:0x2214 wordp:0xde62 size:0x0002 C-string:'WDE62'
//           WDE66  codep:0x2214 wordp:0xde66 size:0x0002 C-string:'WDE66'
//           WDE6A  codep:0x2214 wordp:0xde6a size:0x0002 C-string:'WDE6A'
//           WDE6E  codep:0x2214 wordp:0xde6e size:0x0002 C-string:'WDE6E'
//           WDE72  codep:0x2214 wordp:0xde72 size:0x0002 C-string:'WDE72'
//           WDE76  codep:0x2214 wordp:0xde76 size:0x0002 C-string:'WDE76'
//           WDE7A  codep:0x2214 wordp:0xde7a size:0x0002 C-string:'WDE7A'
//           WDE7E  codep:0x2214 wordp:0xde7e size:0x0002 C-string:'WDE7E'
//          RESUME  codep:0x1d29 wordp:0xde82 size:0x0002 C-string:'RESUME'
//           WDE86  codep:0x1d29 wordp:0xde86 size:0x00e2 C-string:'WDE86'
//           CKSUM  codep:0x1d29 wordp:0xdf6a size:0x0002 C-string:'CKSUM'
//           WDF6E  codep:0x1d29 wordp:0xdf6e size:0x0002 C-string:'WDF6E'
//           WDF72  codep:0x1d29 wordp:0xdf72 size:0x0002 C-string:'WDF72'
//           WDF76  codep:0x1d29 wordp:0xdf76 size:0x0002 C-string:'WDF76'
//           WDF7A  codep:0x1d29 wordp:0xdf7a size:0x0002 C-string:'WDF7A'
//           WDF7E  codep:0x1d29 wordp:0xdf7e size:0x0002 C-string:'WDF7E'
//           WDF82  codep:0x1d29 wordp:0xdf82 size:0x0002 C-string:'WDF82'
//           WDF86  codep:0x1d29 wordp:0xdf86 size:0x0002 C-string:'WDF86'
//           WDF8A  codep:0x1d29 wordp:0xdf8a size:0x0002 C-string:'WDF8A'
//           WDF8E  codep:0x1d29 wordp:0xdf8e size:0x0002 C-string:'WDF8E'
//           $ADDR  codep:0x1d29 wordp:0xdf92 size:0x0002 C-string:'_do_ADDR'
//           WDF96  codep:0x1d29 wordp:0xdf96 size:0x0002 C-string:'WDF96'
//           WDF9A  codep:0x1d29 wordp:0xdf9a size:0x0002 C-string:'WDF9A'
//        SUB$ADDR  codep:0x1d29 wordp:0xdf9e size:0x0002 C-string:'SUB_do_ADDR'
//           WDFA2  codep:0x1d29 wordp:0xdfa2 size:0x0002 C-string:'WDFA2'
//           WDFA6  codep:0x1d29 wordp:0xdfa6 size:0x0002 C-string:'WDFA6'
//           WDFAA  codep:0x2214 wordp:0xdfaa size:0x0002 C-string:'WDFAA'
//           WDFAE  codep:0x2214 wordp:0xdfae size:0x0002 C-string:'WDFAE'
//            HOST  codep:0x5275 wordp:0xdfb9 size:0x0016 C-string:'HOST'
//    VECTORERRORS  codep:0x5275 wordp:0xdfda size:0x0024 C-string:'VECTORERRORS'
//           WE000  codep:0x1d29 wordp:0xe000 size:0x0010 C-string:'WE000'
//           WE012  codep:0x224c wordp:0xe012 size:0x0012 C-string:'WE012'
//           WE026  codep:0x224c wordp:0xe026 size:0x0034 C-string:'WE026'
//      SET.COLORS  codep:0x224c wordp:0xe05c size:0x000c C-string:'SET_dot_COLORS'
//           WE06A  codep:0x1d29 wordp:0xe06a size:0x0002 C-string:'WE06A'
//            $LEN  codep:0x1d29 wordp:0xe06e size:0x0002 C-string:'_do_LEN'
//           WE072  codep:0x224c wordp:0xe072 size:0x000a C-string:'WE072'
//           WE07E  codep:0x224c wordp:0xe07e size:0x0016 C-string:'WE07E'
//           WE096  codep:0x224c wordp:0xe096 size:0x0006 C-string:'WE096'
//           WE09E  codep:0x224c wordp:0xe09e size:0x0006 C-string:'WE09E'
//           WE0A6  codep:0x224c wordp:0xe0a6 size:0x0006 C-string:'WE0A6'
//           WE0AE  codep:0x224c wordp:0xe0ae size:0x0006 C-string:'WE0AE'
//           WE0B6  codep:0x224c wordp:0xe0b6 size:0x0042 C-string:'WE0B6'
//      OUTERSPACE  codep:0x224c wordp:0xe0fa size:0x000a C-string:'OUTERSPACE'
//           WE106  codep:0x1d29 wordp:0xe106 size:0x0002 C-string:'WE106'
//           WE10A  codep:0x1d29 wordp:0xe10a size:0x0002 C-string:'WE10A'
//            ?HUB  codep:0x224c wordp:0xe115 size:0x0018 C-string:'IsHUB'
//          SETHID  codep:0x224c wordp:0xe138 size:0x000a C-string:'SETHID'
//          SETDIS  codep:0x224c wordp:0xe14d size:0x0008 C-string:'SETDIS'
//          SCR>CG  codep:0x224c wordp:0xe160 size:0x0050 C-string:'SCR_gt_CG'
//              !$  codep:0x224c wordp:0xe1b2 size:0x000a C-string:'Store_do_'
//            #CPL  codep:0x224c wordp:0xe1be size:0x0016 C-string:'_n_CPL'
//            #LPS  codep:0x224c wordp:0xe1d6 size:0x001c C-string:'_n_LPS'
//           ?BL<-  codep:0x224c wordp:0xe1f4 size:0x0016 C-string:'IsBL_st__dash_'
//         ##LINES  codep:0x224c wordp:0xe20c size:0x0040 C-string:'_n__n_LINES'
//           #YBLT  codep:0x224c wordp:0xe24e size:0x0028 C-string:'_n_YBLT'
//           #XBLT  codep:0x224c wordp:0xe278 size:0x003c C-string:'_n_XBLT'
//            .SUB  codep:0x224c wordp:0xe2b6 size:0x000e C-string:'DrawSUB'
//         .#LINES  codep:0x224c wordp:0xe2c6 size:0x006c C-string:'Draw_n_LINES'
//           WE334  codep:0x224c wordp:0xe334 size:0x000a C-string:'WE334'
//    BORDERMARGIN  codep:0x224c wordp:0xe340 size:0x0034 C-string:'BORDERMARGIN'
//       ERASEWIND  codep:0x224c wordp:0xe376 size:0x001c C-string:'ERASEWIND'
//           WE394  codep:0x224c wordp:0xe394 size:0x001a C-string:'WE394'
//           .PAGE  codep:0x224c wordp:0xe3b0 size:0x000a C-string:'DrawPAGE'
//          BORDER  codep:0x224c wordp:0xe3bc size:0x00de C-string:'BORDER'
//           WE49C  codep:0x224c wordp:0xe49c size:0x0032 C-string:'WE49C'
//        .GAMEOPS  codep:0x224c wordp:0xe4d0 size:0x00c7 C-string:'DrawGAMEOPS'
//       .SAVEHEAD  codep:0x224c wordp:0xe599 size:0x0026 C-string:'DrawSAVEHEAD'
//       .LOADHEAD  codep:0x224c wordp:0xe5c1 size:0x0026 C-string:'DrawLOADHEAD'
//           WE5E9  codep:0x224c wordp:0xe5e9 size:0x0032 C-string:'WE5E9'
//           WE61D  codep:0x224c wordp:0xe61d size:0x0020 C-string:'WE61D'
//           WE63F  codep:0x224c wordp:0xe63f size:0x0006 C-string:'WE63F'
//           WE647  codep:0x224c wordp:0xe647 size:0x0006 C-string:'WE647'
//           WE64F  codep:0x224c wordp:0xe64f size:0x0008 C-string:'WE64F'
//           WE659  codep:0x224c wordp:0xe659 size:0x0014 C-string:'WE659'
//           WE66F  codep:0x224c wordp:0xe66f size:0x0016 C-string:'WE66F'
//           WE687  codep:0x224c wordp:0xe687 size:0x000c C-string:'WE687'
//           WE695  codep:0x224c wordp:0xe695 size:0x00a4 C-string:'WE695'
//           WE73B  codep:0x224c wordp:0xe73b size:0x004f C-string:'WE73B'
//           WE78C  codep:0x224c wordp:0xe78c size:0x0028 C-string:'WE78C'
//           WE7B6  codep:0x224c wordp:0xe7b6 size:0x0036 C-string:'WE7B6'
//     ?-writeable  codep:0x224c wordp:0xe7ee size:0x0034 C-string:'Is_dash_writeable'
//        nomaster  codep:0x224c wordp:0xe824 size:0x0047 C-string:'nomaster'
//             GDE  codep:0x224c wordp:0xe86d size:0x0012 C-string:'GDE'
//       .RESUMING  codep:0x224c wordp:0xe881 size:0x002d C-string:'DrawRESUMING'
//           WE8B0  codep:0x224c wordp:0xe8b0 size:0x0008 C-string:'WE8B0'
//          SCR>EG  codep:0x224c wordp:0xe8c3 size:0x0076 C-string:'SCR_gt_EG'
//  RESTOREDISPLAY  codep:0x224c wordp:0xe93b size:0x002a C-string:'RESTOREDISPLAY'
// PRESERVEDISPLAY  codep:0x224c wordp:0xe967 size:0x0028 C-string:'PRESERVEDISPLAY'
//      ESCDISABLE  codep:0x224c wordp:0xe991 size:0x0006 C-string:'ESCDISABLE'
//       ESCENABLE  codep:0x224c wordp:0xe999 size:0x0006 C-string:'ESCENABLE'
//        OFFCACHE  codep:0x224c wordp:0xe9a1 size:0x0008 C-string:'OFFCACHE'
//         ONCACHE  codep:0x224c wordp:0xe9ab size:0x000c C-string:'ONCACHE'
//        CHECKSUM  codep:0x224c wordp:0xe9b9 size:0x001a C-string:'CHECKSUM'
//      NEWDOSMSGS  codep:0x224c wordp:0xe9d5 size:0x0012 C-string:'NEWDOSMSGS'
//     ?INNERSPACE  codep:0x224c wordp:0xe9e9 size:0x0008 C-string:'IsINNERSPACE'
//           WE9F3  codep:0x224c wordp:0xe9f3 size:0x001c C-string:'WE9F3'
//           WEA11  codep:0x224c wordp:0xea11 size:0x0014 C-string:'WEA11'
//        PUSHVECT  codep:0x224c wordp:0xea27 size:0x0028 C-string:'PUSHVECT'
//         POPVECT  codep:0x224c wordp:0xea51 size:0x0034 C-string:'POPVECT'
//           WEA87  codep:0x224c wordp:0xea87 size:0x003e C-string:'WEA87'
//           WEAC7  codep:0x224c wordp:0xeac7 size:0x0025 C-string:'WEAC7'
//           WEAEE  codep:0x224c wordp:0xeaee size:0x0031 C-string:'WEAEE'
//           WEB21  codep:0x224c wordp:0xeb21 size:0x001e C-string:'WEB21'
//          PRMSAV  codep:0xeb4a wordp:0xeb4a size:0x001d C-string:'PRMSAV'
//          PRMLOD  codep:0xeb72 wordp:0xeb72 size:0x002d C-string:'PRMLOD'
//          RETSAV  codep:0xebaa wordp:0xebaa size:0x001d C-string:'RETSAV'
//          RETJMP  codep:0xebd2 wordp:0xebd2 size:0x0028 C-string:'RETJMP'
//           |DISK  codep:0x224c wordp:0xebfc size:0x0082 C-string:'_v_DISK'
//           <DISK  codep:0x224c wordp:0xec80 size:0x0006 C-string:'_st_DISK'
//           >DISK  codep:0x224c wordp:0xec88 size:0x0006 C-string:'_gt_DISK'
//             ARB  codep:0x224c wordp:0xec90 size:0x000c C-string:'ARB'
//      ARRAYSPACE  codep:0x224c wordp:0xec9e size:0x0014 C-string:'ARRAYSPACE'
//        ARR>DISK  codep:0x224c wordp:0xecb4 size:0x000c C-string:'ARR_gt_DISK'
//           WECC2  codep:0x224c wordp:0xecc2 size:0x000e C-string:'WECC2'
//           WECD2  codep:0x224c wordp:0xecd2 size:0x000c C-string:'WECD2'
//           WECE0  codep:0x224c wordp:0xece0 size:0x000c C-string:'WECE0'
//           WECEE  codep:0x224c wordp:0xecee size:0x000a C-string:'WECEE'
//           WECFA  codep:0x224c wordp:0xecfa size:0x000c C-string:'WECFA'
//           WED08  codep:0x224c wordp:0xed08 size:0x000c C-string:'WED08'
//           WED16  codep:0x224c wordp:0xed16 size:0x000a C-string:'WED16'
//           WED22  codep:0x224c wordp:0xed22 size:0x000e C-string:'WED22'
//           WED32  codep:0x224c wordp:0xed32 size:0x000a C-string:'WED32'
//           WED3E  codep:0x224c wordp:0xed3e size:0x0008 C-string:'WED3E'
//           WED48  codep:0x224c wordp:0xed48 size:0x0020 C-string:'WED48'
//           WED6A  codep:0x224c wordp:0xed6a size:0x0006 C-string:'WED6A'
//         SETSAVE  codep:0x224c wordp:0xed72 size:0x001e C-string:'SETSAVE'
//           WED92  codep:0x224c wordp:0xed92 size:0x000e C-string:'WED92'
//           WEDA2  codep:0x224c wordp:0xeda2 size:0x0014 C-string:'WEDA2'
//           WEDB8  codep:0x224c wordp:0xedb8 size:0x0022 C-string:'WEDB8'
//        DATALOAD  codep:0x224c wordp:0xeddc size:0x002e C-string:'DATALOAD'
//       LOAD.GAME  codep:0x224c wordp:0xee15 size:0x0022 C-string:'LOAD_dot_GAME'
//        SAVEGAME  codep:0x224c wordp:0xee39 size:0x0028 C-string:'SAVEGAME'
//           WEE63  codep:0x224c wordp:0xee63 size:0x0016 C-string:'WEE63'
//           WEE7B  codep:0x224c wordp:0xee7b size:0x001c C-string:'WEE7B'
//           WEE99  codep:0x224c wordp:0xee99 size:0x0016 C-string:'WEE99'
//             BOX  codep:0x224c wordp:0xeeb1 size:0x0032 C-string:'BOX'
// SET.DISPLAY.VECTORS  codep:0x224c wordp:0xeee5 size:0x006a C-string:'SET_dot_DISPLAY_dot_VECTORS'
// SET.DISPLAY.MODE  codep:0x224c wordp:0xef5a size:0x010d C-string:'SET_dot_DISPLAY_dot_MODE'
//           WF069  codep:0x224c wordp:0xf069 size:0x003a C-string:'WF069'
//  POLICE.WARNING  codep:0x224c wordp:0xf0ae size:0x03c4 C-string:'POLICE_dot_WARNING'
//          NEW.GA  codep:0x224c wordp:0xf47d size:0x0016 C-string:'NEW_dot_GA'
//     GET-OPTION#  codep:0x224c wordp:0xf495 size:0x0022 C-string:'GET_dash_OPTION_n_'
//           WF4B9  codep:0x224c wordp:0xf4b9 size:0x0006 C-string:'WF4B9'
//      GAMEOPCASE  codep:0x4a4f wordp:0xf4ca size:0x0010 C-string:'GAMEOPCASE'
//    >GAMEOPTIONS  codep:0x224c wordp:0xf4dc size:0x000e C-string:'_gt_GAMEOPTIONS'
//     GAMEOPTIONS  codep:0x224c wordp:0xf4ec size:0x0016 C-string:'GAMEOPTIONS'
//    <GAMEOPTIONS  codep:0x224c wordp:0xf504 size:0x000e C-string:'_st_GAMEOPTIONS'
//         GAMEOPS  codep:0x224c wordp:0xf51d size:0x0008 C-string:'GAMEOPS'
// ?GAME.IN.PROGRESS  codep:0x224c wordp:0xf527 size:0x0006 C-string:'IsGAME_dot_IN_dot_PROGRESS'
//      START.GAME  codep:0x224c wordp:0xf538 size:0x0000 C-string:'START_dot_GAME'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc_MUSSEG; // MUSSEG
extern const unsigned short int pp__n_CACHE; // #CACHE
extern const unsigned short int pp_DTA; // DTA
extern const unsigned short int pp_SYSK; // SYSK
extern const unsigned short int pp_OVA; // OVA
extern const unsigned short int pp_ASKMOUNT; // ASKMOUNT
extern const unsigned short int pp_XBUF_dash_SE; // XBUF-SE
extern const unsigned short int pp_TIMESTAMP; // TIMESTAMP
extern const unsigned short int pp_HBUF_dash_SEG; // HBUF-SEG
extern const unsigned short int pp_DBUF_dash_SEG; // DBUF-SEG
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_BUF_dash_SEG; // BUF-SEG
extern const unsigned short int pp_MONITOR; // MONITOR
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp_CONTEXT_dash_ID_n_; // CONTEXT-ID#
extern const unsigned short int pp_LFSEG; // LFSEG
extern const unsigned short int pp_LKEY; // LKEY
extern const unsigned short int pp__bo__n_CACHE_bc_; // [#CACHE]
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp_IsEGA; // ?EGA
extern const unsigned short int pp__3DSEG; // 3DSEG
extern const unsigned short int pp_DERROR; // DERROR
extern const unsigned short int pp__i_VERSIONERR; // 'VERSIONERR
extern const unsigned short int pp_IsTANDRG; // ?TANDRG
extern const unsigned short int user_TIB; // TIB
extern const unsigned short int user_ROW; // ROW
extern const unsigned short int user_COL; // COL
extern Color BLACK; // BLACK
extern Color WHITE; // WHITE
void _ro_RESTORE_rc_(); // (RESTORE)
void AUTO_dash_CACHE(); // AUTO-CACHE
void _ro_SETUP_rc_(); // (SETUP)
void MAX(); // MAX
void UMIN(); // UMIN
void PAD(); // PAD
void BEEP(); // BEEP
void _dash_TRAILING(); // -TRAILING
void SPACES(); // SPACES
void MS(); // MS
void UPDATE(); // UPDATE
void UNMOUNT(); // UNMOUNT
void EMITS(); // EMITS
void EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
void NOP(); // NOP
void PICK(); // PICK
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D_gt_(); // D>
void WITHIN(); // WITHIN
void DRV(); // DRV
void NAM(); // NAM
void TYP(); // TYP
void RECSIZE(); // RECSIZE
void RELREC(); // RELREC
void INIT(); // INIT
void DOS_dash_DTA(); // DOS-DTA
void READ_dash_RANDOM(); // READ-RANDOM
void WRITE_dash_RANDOM(); // WRITE-RANDOM
void KEY_2(); // KEY_2
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void _2_ex_(); // 2!
void ON_3(); // ON_3
void OFF(); // OFF
void CMOVE(); // CMOVE
void FILL_1(); // FILL_1
void BLOCK_2(); // BLOCK_2
void MOUNTA(); // MOUNTA
void MOUNTB(); // MOUNTB
void SET_dash_CURRENT(); // SET-CURRENT
void SAVE_dash_BUFFERS(); // SAVE-BUFFERS
void FLUSH_2(); // FLUSH_2
void StoreCOLOR(); // !COLOR
void BLD_dash_DIS(); // BLD-DIS
void BLD_dash_MV(); // BLD-MV
void _gt_DISPLAY(); // >DISPLAY
void _gt_HIDDEN(); // >HIDDEN
void _gt_ALPHA(); // >ALPHA
void _v_DISPLAY(); // |DISPLAY
void _gt_LORES_2(); // >LORES_2
void SCR_dash_RES(); // SCR-RES
void DARK(); // DARK
void BYE(); // BYE
void LOAD_dash_CO(); // LOAD-CO
void _gt_0FONT(); // >0FONT
void _gt_2FONT(); // >2FONT
void _gt_3FONT(); // >3FONT
void POS_dot_(); // POS.
void Draw1LOGO(); // .1LOGO
void POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void _i_KEY(); // 'KEY
void SETDBUF(); // SETDBUF
void CFIGARRAYS(); // CFIGARRAYS
void PORTM(); // PORTM
void _ro__ex_SET_rc_(); // (!SET)
void _ro__ex_OLD_rc_(); // (!OLD)
void _2_at_(); // 2@
void P_ex_(); // P!
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void U_slash_MOD(); // U/MOD
void _gt_(); // >
void U_st_(); // U<
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void L_at_(); // L@
void L_ex_(); // L!
void LC_at_(); // LC@
void LC_ex_(); // LC!
void LCMOVE(); // LCMOVE
void GetDS(); // @DS
void _st__ex__gt_(); // <!>
void C_gt_EGA(); // C>EGA
void E_gt_CGA(); // E>CGA
void LLINE(); // LLINE
void L_at_PIXEL(); // L@PIXEL
void PLOT(); // PLOT
void SETCOLO(); // SETCOLO
void PRMSAV(); // PRMSAV
void PRMLOD(); // PRMLOD
void RETSAV(); // RETSAV
void RETJMP(); // RETJMP


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_RESUME = 0xde82; // RESUME size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDE86 = 0xde86; // WDE86 size: 226
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x0c, 0x50, 0x0e, 0x6e, 0x0e, 0x32, 0x30, 0x37, 0x34, 0x92, 0x0c, 0xf0, 0x0d, 0x3d, 0x0f, 0x5c, 0x15, 0xe8, 0xff, 0x90, 0x0e, 0x32, 0x0e, 0xb4, 0x0d, 0xb4, 0x0d, 0x3d, 0x90, 0x3d, 0x90, 0x90, 0x0e, 0x90, 0x0e, 0x3d, 0x90, 0x83, 0x3b, 0xef, 0x2a, 0x90, 0x16, 0x4c, 0x22, 0x8b, 0x3b, 0x20, 0x35, 0x32, 0x30, 0x37, 0x35, 0x50, 0x0e, 0x72, 0x0f, 0x92, 0x0c, 0x7f, 0x0e, 0x50, 0x0e, 0x72, 0x0f, 0xc3, 0x4b, 0x72, 0x0f, 0x41, 0x0e, 0x50, 0x0e, 0x3d, 0x0f, 0x9f, 0x11, 0xfa, 0x15, 0x08, 0x00, 0x68, 0xde, 0x60, 0x16, 0x04, 0x00, 0x62, 0xde, 0x57, 0x40, 0x07, 0x13, 0xfa, 0x15, 0x3c, 0x00, 0x7f, 0x0e, 0x50, 0x0e, 0x72, 0x0f, 0x41, 0x0e, 0x92, 0x0c, 0xc6, 0x11, 0x41, 0x0e, 0xb3, 0x0e, 0x6a, 0x6d, 0x05, 0x10, 0x72, 0x0f, 0x20, 0x0f, 0x5d, 0x17, 0x64, 0x00, 0xd8, 0x4a, 0x5d, 0x17, 0x0a, 0x00, 0x46, 0x12, 0xfa, 0x15, 0x14, 0x00, 0x2e, 0x0f, 0x5d, 0x17, 0x10, 0x00, 0xd8, 0x4a, 0x41, 0x0e, 0x47, 0x49, 0x72, 0x0f, 0x6e, 0xde, 0x76, 0x6d, 0x73, 0x3b, 0xae, 0x3f, 0x50, 0x0e, 0x72, 0x0f, 0x6a, 0x6d, 0xd0, 0x15, 0x8c, 0xff, 0xde, 0x0d, 0x90, 0x16, 0x4c, 0x22, 0x8b, 0x3b, 0x20, 0x0f, 0xb8, 0x15, 0x00, 0x00, 0xc6, 0x4b, 0x45, 0x59, 0x49, 0x4e, 0xc3, 0xa0, 0x3c, 0x34, 0xe5, 0x46, 0xdf, 0xc5, 0x44, 0x58, 0x43, 0x52, 0xd3, 0xa0, 0x3c, 0x38, 0xe5, 0x53, 0xdf, 0xc5, 0x44, 0x59, 0x43, 0x52, 0x29, 0x1d, 0x3a, 0x20}

const unsigned short int pp_CKSUM = 0xdf6a; // CKSUM size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDF6E = 0xdf6e; // WDF6E size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDF72 = 0xdf72; // WDF72 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDF76 = 0xdf76; // WDF76 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDF7A = 0xdf7a; // WDF7A size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDF7E = 0xdf7e; // WDF7E size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDF82 = 0xdf82; // WDF82 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDF86 = 0xdf86; // WDF86 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDF8A = 0xdf8a; // WDF8A size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDF8E = 0xdf8e; // WDF8E size: 2
// {0x3a, 0x20}

const unsigned short int pp__do_ADDR = 0xdf92; // $ADDR size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDF96 = 0xdf96; // WDF96 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDF9A = 0xdf9a; // WDF9A size: 2
// {0x3a, 0x20}

const unsigned short int pp_SUB_do_ADDR = 0xdf9e; // SUB$ADDR size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDFA2 = 0xdfa2; // WDFA2 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDFA6 = 0xdfa6; // WDFA6 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE000 = 0xe000; // WE000 size: 16
// {0x00, 0x02, 0x01, 0x0b, 0x04, 0x08, 0x05, 0x09, 0x06, 0x0a, 0x07, 0x03, 0x0c, 0x0e, 0x0d, 0x0f}

const unsigned short int pp_WE06A = 0xe06a; // WE06A size: 2
// {0x3a, 0x20}

const unsigned short int pp__do_LEN = 0xe06e; // $LEN size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE106 = 0xe106; // WE106 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE10A = 0xe10a; // WE10A size: 2
// {0x3a, 0x20}


const unsigned short int cc_WDE56 = 0xde56; // WDE56
const unsigned short int cc_WDE5A = 0xde5a; // WDE5A
const unsigned short int cc_WDE5E = 0xde5e; // WDE5E
const unsigned short int cc_WDE62 = 0xde62; // WDE62
const unsigned short int cc_WDE66 = 0xde66; // WDE66
const unsigned short int cc_WDE6A = 0xde6a; // WDE6A
const unsigned short int cc_WDE6E = 0xde6e; // WDE6E
const unsigned short int cc_WDE72 = 0xde72; // WDE72
const unsigned short int cc_WDE76 = 0xde76; // WDE76
const unsigned short int cc_WDE7A = 0xde7a; // WDE7A
const unsigned short int cc_WDE7E = 0xde7e; // WDE7E
const unsigned short int cc_WDFAA = 0xdfaa; // WDFAA
const unsigned short int cc_WDFAE = 0xdfae; // WDFAE


// 0xde52: db 0x72 0x01 'r '

// ================================================
// 0xde54: WORD 'WDE56' codep=0x2214 wordp=0xde56
// ================================================
// orphan
// 0xde56: dw 0x003d

// ================================================
// 0xde58: WORD 'WDE5A' codep=0x2214 wordp=0xde5a
// ================================================
// 0xde5a: dw 0x003d

// ================================================
// 0xde5c: WORD 'WDE5E' codep=0x2214 wordp=0xde5e
// ================================================
// 0xde5e: dw 0x0070

// ================================================
// 0xde60: WORD 'WDE62' codep=0x2214 wordp=0xde62
// ================================================
// 0xde62: dw 0x0080

// ================================================
// 0xde64: WORD 'WDE66' codep=0x2214 wordp=0xde66
// ================================================
// 0xde66: dw 0x0081

// ================================================
// 0xde68: WORD 'WDE6A' codep=0x2214 wordp=0xde6a
// ================================================
// 0xde6a: dw 0x0082

// ================================================
// 0xde6c: WORD 'WDE6E' codep=0x2214 wordp=0xde6e
// ================================================
// orphan
// 0xde6e: dw 0x0004

// ================================================
// 0xde70: WORD 'WDE72' codep=0x2214 wordp=0xde72
// ================================================
// orphan
// 0xde72: dw 0x0000

// ================================================
// 0xde74: WORD 'WDE76' codep=0x2214 wordp=0xde76
// ================================================
// 0xde76: dw 0x4000

// ================================================
// 0xde78: WORD 'WDE7A' codep=0x2214 wordp=0xde7a
// ================================================
// 0xde7a: dw 0x0400

// ================================================
// 0xde7c: WORD 'WDE7E' codep=0x2214 wordp=0xde7e
// ================================================
// 0xde7e: dw 0x3a48

// ================================================
// 0xde80: WORD 'RESUME' codep=0x1d29 wordp=0xde82
// ================================================
// 0xde82: db 0x3a 0x20 ': '

// ================================================
// 0xde84: WORD 'WDE86' codep=0x1d29 wordp=0xde86
// ================================================
// 0xde86: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x0c 0x50 0x0e 0x6e 0x0e 0x32 0x30 0x37 0x34 0x92 0x0c 0xf0 0x0d 0x3d 0x0f 0x5c 0x15 0xe8 0xff 0x90 0x0e 0x32 0x0e 0xb4 0x0d 0xb4 0x0d 0x3d 0x90 0x3d 0x90 0x90 0x0e 0x90 0x0e 0x3d 0x90 0x83 0x3b 0xef 0x2a 0x90 0x16 0x4c 0x22 0x8b 0x3b 0x20 0x35 0x32 0x30 0x37 0x35 0x50 0x0e 0x72 0x0f 0x92 0x0c 0x7f 0x0e 0x50 0x0e 0x72 0x0f 0xc3 0x4b 0x72 0x0f 0x41 0x0e 0x50 0x0e 0x3d 0x0f 0x9f 0x11 0xfa 0x15 0x08 0x00 0x68 0xde 0x60 0x16 0x04 0x00 0x62 0xde 0x57 0x40 0x07 0x13 0xfa 0x15 0x3c 0x00 0x7f 0x0e 0x50 0x0e 0x72 0x0f 0x41 0x0e 0x92 0x0c 0xc6 0x11 0x41 0x0e 0xb3 0x0e 0x6a 0x6d 0x05 0x10 0x72 0x0f 0x20 0x0f 0x5d 0x17 0x64 0x00 0xd8 0x4a 0x5d 0x17 0x0a 0x00 0x46 0x12 0xfa 0x15 0x14 0x00 0x2e 0x0f 0x5d 0x17 0x10 0x00 0xd8 0x4a 0x41 0x0e 0x47 0x49 0x72 0x0f 0x6e 0xde 0x76 0x6d 0x73 0x3b 0xae 0x3f 0x50 0x0e 0x72 0x0f 0x6a 0x6d 0xd0 0x15 0x8c 0xff 0xde 0x0d 0x90 0x16 0x4c 0x22 0x8b 0x3b 0x20 0x0f 0xb8 0x15 0x00 0x00 0xc6 0x4b 0x45 0x59 0x49 0x4e 0xc3 0xa0 0x3c 0x34 0xe5 0x46 0xdf 0xc5 0x44 0x58 0x43 0x52 0xd3 0xa0 0x3c 0x38 0xe5 0x53 0xdf 0xc5 0x44 0x59 0x43 0x52 0x29 0x1d 0x3a 0x20 ':  ALLOT  P n 2074    = \     2     = =     =  ; *  L" ; 52075P r    P r  Kr A P =       h `   b W@    <  P r A     A   jm  r   ] d  J]   F     . ]    JA GIr n vms; ?P r jm        L" ;       KEYIN  <4 F  DXCR  <8 S  DYCR) : '

// ================================================
// 0xdf68: WORD 'CKSUM' codep=0x1d29 wordp=0xdf6a
// ================================================
// 0xdf6a: db 0x3a 0x20 ': '

// ================================================
// 0xdf6c: WORD 'WDF6E' codep=0x1d29 wordp=0xdf6e
// ================================================
// 0xdf6e: db 0x3a 0x20 ': '

// ================================================
// 0xdf70: WORD 'WDF72' codep=0x1d29 wordp=0xdf72
// ================================================
// 0xdf72: db 0x3a 0x20 ': '

// ================================================
// 0xdf74: WORD 'WDF76' codep=0x1d29 wordp=0xdf76
// ================================================
// 0xdf76: db 0x3a 0x20 ': '

// ================================================
// 0xdf78: WORD 'WDF7A' codep=0x1d29 wordp=0xdf7a
// ================================================
// 0xdf7a: db 0x3a 0x20 ': '

// ================================================
// 0xdf7c: WORD 'WDF7E' codep=0x1d29 wordp=0xdf7e
// ================================================
// 0xdf7e: db 0x3a 0x20 ': '

// ================================================
// 0xdf80: WORD 'WDF82' codep=0x1d29 wordp=0xdf82
// ================================================
// 0xdf82: db 0x3a 0x20 ': '

// ================================================
// 0xdf84: WORD 'WDF86' codep=0x1d29 wordp=0xdf86
// ================================================
// 0xdf86: db 0x3a 0x20 ': '

// ================================================
// 0xdf88: WORD 'WDF8A' codep=0x1d29 wordp=0xdf8a
// ================================================
// 0xdf8a: db 0x3a 0x20 ': '

// ================================================
// 0xdf8c: WORD 'WDF8E' codep=0x1d29 wordp=0xdf8e
// ================================================
// 0xdf8e: db 0x3a 0x20 ': '

// ================================================
// 0xdf90: WORD '$ADDR' codep=0x1d29 wordp=0xdf92
// ================================================
// 0xdf92: db 0x3a 0x20 ': '

// ================================================
// 0xdf94: WORD 'WDF96' codep=0x1d29 wordp=0xdf96
// ================================================
// orphan
// 0xdf96: db 0x3a 0x20 ': '

// ================================================
// 0xdf98: WORD 'WDF9A' codep=0x1d29 wordp=0xdf9a
// ================================================
// 0xdf9a: db 0x3a 0x20 ': '

// ================================================
// 0xdf9c: WORD 'SUB$ADDR' codep=0x1d29 wordp=0xdf9e
// ================================================
// 0xdf9e: db 0x3a 0x20 ': '

// ================================================
// 0xdfa0: WORD 'WDFA2' codep=0x1d29 wordp=0xdfa2
// ================================================
// 0xdfa2: db 0x3a 0x20 ': '

// ================================================
// 0xdfa4: WORD 'WDFA6' codep=0x1d29 wordp=0xdfa6
// ================================================
// 0xdfa6: db 0x3a 0x20 ': '

// ================================================
// 0xdfa8: WORD 'WDFAA' codep=0x2214 wordp=0xdfaa
// ================================================
// 0xdfaa: dw 0x000b

// ================================================
// 0xdfac: WORD 'WDFAE' codep=0x2214 wordp=0xdfae
// ================================================
// 0xdfae: dw 0x0012

// ================================================
// 0xdfb0: WORD 'HOST' codep=0x5275 wordp=0xdfb9
// ================================================
// 0xdfb9: db 0xa8 0x2c 0x67 0x45 0xef 0x09 0x31 0x5d 0xe6 0x55 0xd8 0x55 0x56 0x56 0x4a 0x58 0x45 0x52 0xec 0x84 0xa3 0x5d ' ,gE  1] U UVVJXER   ]'

// ================================================
// 0xdfcf: WORD 'VECTORERRORS' codep=0x5275 wordp=0xdfda
// ================================================
// 0xdfda: db 0xf2 0x55 0xff 0x55 0x9d 0x58 0x92 0x58 0x87 0x58 0x7c 0x58 0x6e 0x58 0x63 0x58 0x3a 0x56 0x58 0x46 0xe6 0x07 0xfa 0x07 0x62 0x6c 0x88 0x01 0x8a 0x01 0x01 0x62 0x03 0x62 0xaa 0x58 ' U U X X X|XnXcX:VXF    bl     b b X'

// ================================================
// 0xdffe: WORD 'WE000' codep=0x1d29 wordp=0xe000
// ================================================
// 0xe000: db 0x00 0x02 0x01 0x0b 0x04 0x08 0x05 0x09 0x06 0x0a 0x07 0x03 0x0c 0x0e 0x0d 0x0f '                '

// ================================================
// 0xe010: WORD 'WE012' codep=0x224c wordp=0xe012 params=0 returns=1
// ================================================

void WE012() // WE012
{
  Push(0xf000);
  Push(0xc000);
  LC_at_(); // LC@
  Push(Pop()==0x0021?1:0); //  0x0021 =
}


// ================================================
// 0xe024: WORD 'WE026' codep=0x224c wordp=0xe026 params=1 returns=0
// ================================================

void WE026() // WE026
{
  unsigned short int i, imax;

  i = 0;
  imax = 0x0010;
  do // (DO)
  {
    Push(0x0010 + i); // 0x0010 I +
    Push(0x03da);
    P_ex_(); // P!
    Push(i); // I
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    Push(Read16(Pop())&0xFF); //  C@
    Push(0x03de);
    P_ex_(); // P!
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  Push(3);
  Push(0x03da);
  P_ex_(); // P!
}


// ================================================
// 0xe05a: WORD 'SET.COLORS' codep=0x224c wordp=0xe05c params=0 returns=0
// ================================================

void SET_dot_COLORS() // SET.COLORS
{
  WE012(); // WE012
  if (Pop() == 0) return;
  Push(pp_WE000); // WE000
  WE026(); // WE026
}


// ================================================
// 0xe068: WORD 'WE06A' codep=0x1d29 wordp=0xe06a
// ================================================
// 0xe06a: db 0x3a 0x20 ': '

// ================================================
// 0xe06c: WORD '$LEN' codep=0x1d29 wordp=0xe06e
// ================================================
// 0xe06e: db 0x3a 0x20 ': '

// ================================================
// 0xe070: WORD 'WE072' codep=0x224c wordp=0xe072 params=1 returns=0
// ================================================

void WE072() // WE072
{
  Push(pp_WE06A); // WE06A
  Store_3(); // !_3
  Push(pp__do_LEN); // $LEN
  OFF(); // OFF
}


// ================================================
// 0xe07c: WORD 'WE07E' codep=0x224c wordp=0xe07e params=2 returns=0
// ================================================

void WE07E() // WE07E
{
  Push(Read16(pp_WE06A) + Read16(pp__do_LEN)); // WE06A @ $LEN @ +
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(pp__do_LEN); // $LEN
  _plus__ex__2(); // +!_2
  CMOVE(); // CMOVE
}


// ================================================
// 0xe094: WORD 'WE096' codep=0x224c wordp=0xe096 params=1 returns=2
// ================================================

void WE096() // WE096
{
  Push(Read16(cc_MUSSEG)); // MUSSEG
  SWAP(); // SWAP
}


// ================================================
// 0xe09c: WORD 'WE09E' codep=0x224c wordp=0xe09e params=2 returns=0
// ================================================

void WE09E() // WE09E
{
  WE096(); // WE096
  L_ex_(); // L!
}


// ================================================
// 0xe0a4: WORD 'WE0A6' codep=0x224c wordp=0xe0a6 params=1 returns=1
// ================================================

void WE0A6() // WE0A6
{
  WE096(); // WE096
  L_at_(); // L@
}


// ================================================
// 0xe0ac: WORD 'WE0AE' codep=0x224c wordp=0xe0ae params=2 returns=0
// ================================================

void WE0AE() // WE0AE
{
  WE096(); // WE096
  LC_ex_(); // LC!
}


// ================================================
// 0xe0b4: WORD 'WE0B6' codep=0x224c wordp=0xe0b6 params=0 returns=0
// ================================================

void WE0B6() // WE0B6
{
  unsigned short int a;
  Push(0x001c);
  _ro__ex_OLD_rc_(); // (!OLD)
  Push(Read16(regsp)); // DUP
  Push(0x000e);
  WE0A6(); // WE0A6
  Push((Pop()==Pop())?1:0); // =
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(0);
    Push(2);
    WE0AE(); // WE0AE
    Push(0);
    WE0A6(); // WE0A6
    a = Pop(); // >R
    Push(a); // I
    WE09E(); // WE09E
    Push(a + 2); // R> 2+
    WE09E(); // WE09E
    Push(Read16(cc_MUSSEG)); // MUSSEG
    Push(0x000e);
    WE0A6(); // WE0A6
    Push(0x001c);
    _ro__ex_SET_rc_(); // (!SET)
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe0f8: WORD 'OUTERSPACE' codep=0x224c wordp=0xe0fa params=0 returns=1
// ================================================

void OUTERSPACE() // OUTERSPACE
{
  GetDS(); // @DS
  Push(Pop() + 0x1000); //  0x1000 +
}


// ================================================
// 0xe104: WORD 'WE106' codep=0x1d29 wordp=0xe106
// ================================================
// 0xe106: db 0x3a 0x20 ': '

// ================================================
// 0xe108: WORD 'WE10A' codep=0x1d29 wordp=0xe10a
// ================================================
// 0xe10a: db 0x3a 0x20 ': '

// ================================================
// 0xe10c: WORD '?HUB' codep=0x224c wordp=0xe115 params=0 returns=0
// ================================================

void IsHUB() // ?HUB
{
  Push(pp_WE10A); // WE10A
  Push(Read16(pp_CONTEXT_dash_ID_n_)==5?1:0); // CONTEXT-ID# @ 5 =
  if (Pop() != 0)
  {
    ON_3(); // ON_3
    return;
  }
  OFF(); // OFF
}


// ================================================
// 0xe12d: WORD 'SETHID' codep=0x224c wordp=0xe138 params=0 returns=0
// ================================================

void SETHID() // SETHID
{
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(pp_WE106); // WE106
  Store_3(); // !_3
}


// ================================================
// 0xe142: WORD 'SETDIS' codep=0x224c wordp=0xe14d params=0 returns=0
// ================================================

void SETDIS() // SETDIS
{
  OUTERSPACE(); // OUTERSPACE
  Push(pp_WE106); // WE106
  Store_3(); // !_3
}


// ================================================
// 0xe155: WORD 'SCR>CG' codep=0x224c wordp=0xe160
// ================================================

void SCR_gt_CG() // SCR>CG
{
  unsigned short int i, imax, j, jmax;
  Push(-1);

  i = 0;
  imax = 0x00c8;
  do // (DO)
  {

    j = 0;
    jmax = 0x0050;
    do // (DO)
    {
      Push(Pop() + 1); //  1+
      Push(Read16(regsp)); // DUP
      Push(j * 2); // I 2*
      Push(i); // J
      L_at_PIXEL(); // L@PIXEL
      E_gt_CGA(); // E>CGA
      Push((Pop() & 0x000f) >> 4); //  0x000f AND 16*
      Push(j * 2 + 1); // I 2* 1+
      Push(i); // J
      L_at_PIXEL(); // L@PIXEL
      E_gt_CGA(); // E>CGA
      Push(Pop() & 0x000f); //  0x000f AND
      Push(Pop() + Pop()); // +
      Push(Read16(pp_WE106)); // WE106 @
      ROT(); // ROT
      LC_ex_(); // LC!
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xe1b0: WORD '!$' codep=0x224c wordp=0xe1b2 params=2 returns=0
// ================================================

void Store_do_() // !$
{
  Push(pp__do_LEN); // $LEN
  Store_3(); // !_3
  Push(pp__do_ADDR); // $ADDR
  Store_3(); // !_3
}


// ================================================
// 0xe1bc: WORD '#CPL' codep=0x224c wordp=0xe1be params=0 returns=1
// ================================================

void _n_CPL() // #CPL
{
  Push(Read16(pp_WDF72) - Read16(pp_WDF6E)); // WDF72 @ WDF6E @ -
  Push(Read16(pp_WDF82)); // WDF82 @
  _slash_(); // /
  Push(pp_WDF8A); // WDF8A
  Store_3(); // !_3
}


// ================================================
// 0xe1d4: WORD '#LPS' codep=0x224c wordp=0xe1d6 params=0 returns=1
// ================================================

void _n_LPS() // #LPS
{
  Push(Read16(pp_WDF76) - Read16(pp_WDF7A)); // WDF76 @ WDF7A @ -
  Push(Read16(pp_WDF7E) + Read16(pp_WDF86)); // WDF7E @ WDF86 @ +
  _slash_(); // /
  Push(pp_WDF8E); // WDF8E
  Store_3(); // !_3
}


// ================================================
// 0xe1f2: WORD '?BL<-' codep=0x224c wordp=0xe1f4 params=1 returns=1
// ================================================

void IsBL_st__dash_() // ?BL<-
{
  while(1)
  {
    Push(Read16(regsp)); // DUP
    Push(!((Read16(Pop())&0xFF)==Read16(cc_BL)?1:0)); //  C@ BL = NOT
    if (Pop() == 0) return;
    Push(Pop() - 1); //  1-
  }
}


// ================================================
// 0xe20a: WORD '##LINES' codep=0x224c wordp=0xe20c params=0 returns=0
// ================================================

void _n__n_LINES() // ##LINES
{
  Push(Read16(pp__do_ADDR)); // $ADDR @
  Push(pp_SUB_do_ADDR); // SUB$ADDR
  Store_3(); // !_3
  Push(1);
  Push(pp_WDF9A); // WDF9A
  Store_3(); // !_3
  while(1)
  {
    Push(Read16(pp_SUB_do_ADDR) + Read16(pp_WDF8A)); // SUB$ADDR @ WDF8A @ +
    Push(Read16(regsp)); // DUP
    Push(Read16(pp__do_ADDR) + Read16(pp__do_LEN)); // $ADDR @ $LEN @ +
    U_st_(); // U<
    if (Pop() == 0) break;

    IsBL_st__dash_(); // ?BL<-
    Push(Pop() + 1); //  1+
    Push(pp_SUB_do_ADDR); // SUB$ADDR
    Store_3(); // !_3
    Push(1);
    Push(pp_WDF9A); // WDF9A
    _plus__ex__2(); // +!_2
  }
  Pop(); // DROP
}


// ================================================
// 0xe24c: WORD '#YBLT' codep=0x224c wordp=0xe24e params=0 returns=0
// ================================================

void _n_YBLT() // #YBLT
{
  _n__n_LINES(); // ##LINES
  Push(-((Read16(pp_WDF8E) - Read16(pp_WDF9A) >> 1) * (Read16(pp_WDF7E) + Read16(pp_WDF86))) + Read16(pp_WDF76)); // WDF8E @ WDF9A @ - 2/ WDF7E @ WDF86 @ + * NEGATE WDF76 @ +
  Push(pp_YBLT); // YBLT
  Store_3(); // !_3
}


// ================================================
// 0xe276: WORD '#XBLT' codep=0x224c wordp=0xe278 params=0 returns=0
// ================================================

void _n_XBLT() // #XBLT
{
  Push(Read16(pp_YBLT)); // YBLT @
  Push(0x0384);
  Push(pp_YBLT); // YBLT
  Store_3(); // !_3
  Push(0);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  Push(Read16(pp_SUB_do_ADDR)); // SUB$ADDR @
  Push(Read16(pp_WDFA2)); // WDFA2 @
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(pp_YBLT); // YBLT
  Store_3(); // !_3
  Push((Read16(pp_WDF72) + Read16(pp_WDF6E) >> 1) + -(Read16(pp_XBLT) >> 1)); // WDF72 @ WDF6E @ + 2/ XBLT @ 2/ NEGATE +
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
}


// ================================================
// 0xe2b4: WORD '.SUB' codep=0x224c wordp=0xe2b6 params=0 returns=0
// ================================================

void DrawSUB() // .SUB
{
  _n_XBLT(); // #XBLT
  Push(Read16(pp_SUB_do_ADDR)); // SUB$ADDR @
  Push(Read16(pp_WDFA2)); // WDFA2 @
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe2c4: WORD '.#LINES' codep=0x224c wordp=0xe2c6 params=0 returns=0
// ================================================

void Draw_n_LINES() // .#LINES
{
  _n_YBLT(); // #YBLT
  Push(Read16(pp__do_ADDR)); // $ADDR @
  Push(pp_SUB_do_ADDR); // SUB$ADDR
  Store_3(); // !_3
  while(1)
  {
    Push(Read16(pp_SUB_do_ADDR) + Read16(pp_WDF8A)); // SUB$ADDR @ WDF8A @ +
    Push(Read16(regsp)); // DUP
    Push(Read16(pp__do_ADDR) + Read16(pp__do_LEN)); // $ADDR @ $LEN @ +
    U_st_(); // U<
    if (Pop() == 0) break;

    IsBL_st__dash_(); // ?BL<-
    Push(Pop() - Read16(pp_SUB_do_ADDR)); //  SUB$ADDR @ -
    Push(pp_WDFA2); // WDFA2
    Store_3(); // !_3
    DrawSUB(); // .SUB
    Push(-(Read16(pp_WDF7E) + Read16(pp_WDF86))); // WDF7E @ WDF86 @ + NEGATE
    Push(pp_YBLT); // YBLT
    _plus__ex__2(); // +!_2
    Push(Read16(pp_WDFA2) + 1); // WDFA2 @ 1+
    Push(pp_SUB_do_ADDR); // SUB$ADDR
    _plus__ex__2(); // +!_2
  }
  Pop(); // DROP
  Push((Read16(pp__do_ADDR) + Read16(pp__do_LEN)) - Read16(pp_SUB_do_ADDR)); // $ADDR @ $LEN @ + SUB$ADDR @ -
  Push(pp_WDFA2); // WDFA2
  Store_3(); // !_3
  DrawSUB(); // .SUB
}


// ================================================
// 0xe332: WORD 'WE334' codep=0x224c wordp=0xe334 params=2 returns=2
// ================================================

void WE334() // WE334
{
  Store_do_(); // !$
  _n_CPL(); // #CPL
  _n_LPS(); // #LPS
  Draw_n_LINES(); // .#LINES
}


// ================================================
// 0xe33e: WORD 'BORDERMARGIN' codep=0x224c wordp=0xe340 params=0 returns=0
// ================================================

void BORDERMARGIN() // BORDERMARGIN
{
  Push(0x0014);
  Push(pp_WDF6E); // WDF6E
  Store_3(); // !_3
  Push(0x008c);
  Push(pp_WDF72); // WDF72
  Store_3(); // !_3
  Push(0x0028);
  Push(pp_WDF7A); // WDF7A
  Store_3(); // !_3
  Push(0x0096);
  Push(pp_WDF76); // WDF76
  Store_3(); // !_3
  Push(3);
  Push(pp_WDF86); // WDF86
  Store_3(); // !_3
  Push(9);
  Push(pp_WDF7E); // WDF7E
  Store_3(); // !_3
  Push(6);
  Push(pp_WDF82); // WDF82
  Store_3(); // !_3
}


// ================================================
// 0xe374: WORD 'ERASEWIND' codep=0x224c wordp=0xe376 params=0 returns=0
// ================================================

void ERASEWIND() // ERASEWIND
{
  Push(Read16(pp_COLOR)); // COLOR @
  Push(0x0096);
  Push(0x0014);
  Push(0x0028);
  Push(0x0096);
  GetColor(BLACK);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe392: WORD 'WE394' codep=0x224c wordp=0xe394 params=0 returns=0
// ================================================

void WE394() // WE394
{
  Push(Read16(pp_COLOR)); // COLOR @
  Push(0x0011);
  Push(0x0014);
  Push(5);
  Push(0x009f);
  GetColor(BLACK);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe3ae: WORD '.PAGE' codep=0x224c wordp=0xe3b0 params=2 returns=2
// ================================================

void DrawPAGE() // .PAGE
{
  BORDERMARGIN(); // BORDERMARGIN
  ERASEWIND(); // ERASEWIND
  _gt_2FONT(); // >2FONT
  WE334(); // WE334
}


// ================================================
// 0xe3ba: WORD 'BORDER' codep=0x224c wordp=0xe3bc params=0 returns=0
// ================================================

void BORDER() // BORDER
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(5);
  Push(0x009b);
  Push(0x000a);
  Push(0x00a0);
  LLINE(); // LLINE
  Push(0x000a);
  Push(0x00a0);
  Push(0x0096);
  Push(0x00a0);
  LLINE(); // LLINE
  Push(0x0096);
  Push(0x00a0);
  Push(0x009b);
  Push(0x009b);
  LLINE(); // LLINE
  Push(0x009b);
  Push(0x009b);
  Push(0x009b);
  Push(0x0019);
  LLINE(); // LLINE
  Push(0x009b);
  Push(0x0019);
  Push(0x0096);
  Push(0x0014);
  LLINE(); // LLINE
  Push(0x0096);
  Push(0x0014);
  Push(0x0014);
  Push(0x0014);
  LLINE(); // LLINE
  Push(0x0014);
  Push(0x0014);
  Push(0x0011);
  Push(0x0017);
  LLINE(); // LLINE
  Push(0x0011);
  Push(0x0017);
  Push(0x0011);
  Push(0x001e);
  LLINE(); // LLINE
  Push(0x0011);
  Push(0x001e);
  Push(0x000e);
  Push(0x0021);
  LLINE(); // LLINE
  Push(0x000e);
  Push(0x0021);
  Push(8);
  Push(0x0021);
  LLINE(); // LLINE
  Push(8);
  Push(0x0021);
  Push(5);
  Push(0x0024);
  LLINE(); // LLINE
  Push(5);
  Push(0x0024);
  Push(5);
  Push(0x009b);
  LLINE(); // LLINE
  Push(5);
  Push(0x001d);
  Push(Read16(pp_COLOR)); // COLOR @
  Draw1LOGO(); // .1LOGO
}


// ================================================
// 0xe49a: WORD 'WE49C' codep=0x224c wordp=0xe49c params=0 returns=0
// ================================================

void WE49C() // WE49C
{
  _gt_2FONT(); // >2FONT
  Push(0x0014);
  Push(0x0011);
  POS_dot_(); // POS.
  WE394(); // WE394
  PRINT("PRESS ANY KEY TO CONTINUE", 25); // (.")
  _gt_0FONT(); // >0FONT
  KEY_2(); // KEY_2
  Pop(); // DROP
}


// ================================================
// 0xe4ce: WORD '.GAMEOPS' codep=0x224c wordp=0xe4d0 params=0 returns=0
// ================================================

void DrawGAMEOPS() // .GAMEOPS
{
  _gt_DISPLAY(); // >DISPLAY
  DARK(); // DARK
  BORDER(); // BORDER
  BEEPOFF(); // BEEPOFF
  _gt_3FONT(); // >3FONT
  Push(0x002e);
  Push(0x00ab);
  POS_dot_(); // POS.
  PRINT("GAME", 4); // (.")
  Push(0x000a);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  PRINT("OPTIONS", 7); // (.")
  _gt_2FONT(); // >2FONT
  Push(0x0027);
  Push(0x0011);
  POS_dot_(); // POS.
  PRINT("SELECT AN OPTION", 16); // (.")
  Push(0x0022);
  Push(0x0078);
  POS_dot_(); // POS.
  PRINT("1. SAVE GAME", 12); // (.")
  Push(0x0022);
  Push(0x0064);
  POS_dot_(); // POS.
  PRINT("2. RESUME GAME", 14); // (.")
  Push(0x0022);
  Push(0x0050);
  POS_dot_(); // POS.
  PRINT("3. CHANGE DISPLAY MODE", 22); // (.")
  Push(0x0022);
  Push(0x0037);
  POS_dot_(); // POS.
  PRINT("9. END GAME UNSAVED", 19); // (.")
  _gt_0FONT(); // >0FONT
}


// ================================================
// 0xe597: WORD '.SAVEHEAD' codep=0x224c wordp=0xe599 params=0 returns=0
// ================================================

void DrawSAVEHEAD() // .SAVEHEAD
{
  _gt_3FONT(); // >3FONT
  Push(0x0035);
  Push(0x00ab);
  POS_dot_(); // POS.
  PRINT("SAVE", 4); // (.")
  Push(0x000a);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  PRINT("GAME", 4); // (.")
  _gt_0FONT(); // >0FONT
}


// ================================================
// 0xe5bf: WORD '.LOADHEAD' codep=0x224c wordp=0xe5c1 params=0 returns=0
// ================================================

void DrawLOADHEAD() // .LOADHEAD
{
  _gt_3FONT(); // >3FONT
  Push(0x0035);
  Push(0x00ab);
  POS_dot_(); // POS.
  PRINT("LOAD", 4); // (.")
  Push(0x000a);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  PRINT("GAME", 4); // (.")
  _gt_0FONT(); // >0FONT
}


// ================================================
// 0xe5e7: WORD 'WE5E9' codep=0x224c wordp=0xe5e9 params=0 returns=0
// ================================================

void WE5E9() // WE5E9
{
  _gt_2FONT(); // >2FONT
  Push(0x001e);
  Push(0x0011);
  POS_dot_(); // POS.
  WE394(); // WE394
  PRINT("PRESS ANY KEY TO EXIT", 21); // (.")
  _gt_0FONT(); // >0FONT
  KEY_2(); // KEY_2
  Pop(); // DROP
  Exec("PAGE"); // call of word 0x274c '(PAGE)'
  BYE(); // BYE
}


// ================================================
// 0xe61b: WORD 'WE61D' codep=0x224c wordp=0xe61d
// ================================================

void WE61D() // WE61D
{
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  do
  {
    TIME(); // TIME
    _2_at_(); // 2@
    _2OVER(); // 2OVER
    D_gt_(); // D>
    _i_KEY(); // 'KEY
    Push(Read16(regsp)); // DUP
    Push(pp_WDFA6); // WDFA6
    Store_3(); // !_3
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe63d: WORD 'WE63F' codep=0x224c wordp=0xe63f params=1 returns=0
// ================================================

void WE63F() // WE63F
{
  Push(pp_TIMESTAMP); // TIMESTAMP
  Store_3(); // !_3
}


// ================================================
// 0xe645: WORD 'WE647' codep=0x224c wordp=0xe647 params=0 returns=1
// ================================================

void WE647() // WE647
{
  Push(Read16(pp_TIMESTAMP)); // TIMESTAMP @
}


// ================================================
// 0xe64d: WORD 'WE64F' codep=0x224c wordp=0xe64f params=1 returns=0
// ================================================

void WE64F() // WE64F
{
  Push(Read16(regsp)); // DUP
  SIGFLD(":TIMESTAMP");
  Store_3(); // !_3
}


// ================================================
// 0xe657: WORD 'WE659' codep=0x224c wordp=0xe659 params=1 returns=0
// ================================================

void WE659() // WE659
{
  TIME(); // TIME
  Push(Read16(Pop() + 2)); //  2+ @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(2);
  }
  WE63F(); // WE63F
}


// ================================================
// 0xe66d: WORD 'WE66F' codep=0x224c wordp=0xe66f
// ================================================

void WE66F() // WE66F
{
  WE647(); // WE647
  WE659(); // WE659
  WE647(); // WE647
  SWAP(); // SWAP
  WE63F(); // WE63F
  MOUNTA(); // MOUNTA
  WE64F(); // WE64F
  MOUNTB(); // MOUNTB
  WE64F(); // WE64F
  WE63F(); // WE63F
}


// ================================================
// 0xe685: WORD 'WE687' codep=0x224c wordp=0xe687 params=0 returns=1
// ================================================

void WE687() // WE687
{
  Push(Read16(pp_OVA) - 0x01f4); // OVA @ 0x01f4 -
}


// ================================================
// 0xe693: WORD 'WE695' codep=0x224c wordp=0xe695 params=0 returns=2
// ================================================

void WE695() // WE695
{
  WE687(); // WE687
  Push(Pop() + 0x0032); //  0x0032 +
  WE072(); // WE072
  DARK(); // DARK
  BORDER(); // BORDER
  SET_STR_AS_PARAM("PLACE DISK CONTAINING FILE ");
  WE07E(); // WE07E
  NAM(); // NAM
  Push(8);
  _dash_TRAILING(); // -TRAILING
  WE07E(); // WE07E
  Push(0x002e);
  WE687(); // WE687
  C_ex_(); // C!
  TYP(); // TYP
  WE687(); // WE687
  Push(Pop() + 1); //  1+
  Push(3);
  CMOVE(); // CMOVE
  WE687(); // WE687
  Push(4);
  WE07E(); // WE07E
  SET_STR_AS_PARAM(" INTO ");
  WE07E(); // WE07E
  DRV(); // DRV
  Push(Read16(Pop())&0xFF); //  C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("DRIVE ");
    WE687(); // WE687
    SWAP(); // SWAP
    CMOVE(); // CMOVE
    Push(Pop() + 0x0040); //  0x0040 +
    WE687(); // WE687
    Push(Pop() + 7); //  7 +
    C_ex_(); // C!
    WE687(); // WE687
    Push(7);
  } else
  {
    SET_STR_AS_PARAM("ANY DRIVE");
  }
  WE07E(); // WE07E
  Push(Read16(pp_WE06A)); // WE06A @
  Push(Read16(pp__do_LEN)); // $LEN @
  DrawPAGE(); // .PAGE
  WE49C(); // WE49C
}


// ================================================
// 0xe739: WORD 'WE73B' codep=0x224c wordp=0xe73b params=2 returns=2
// ================================================

void WE73B() // WE73B
{
  WE687(); // WE687
  Push(Pop() + 0x0032); //  0x0032 +
  WE072(); // WE072
  DARK(); // DARK
  BORDER(); // BORDER
  SET_STR_AS_PARAM("PLACE DISK CONTAINING THE CORRECT ");
  WE07E(); // WE07E
  WE07E(); // WE07E
  SET_STR_AS_PARAM(" FILE");
  WE07E(); // WE07E
  Push(Read16(pp_WE06A)); // WE06A @
  Push(Read16(pp__do_LEN)); // $LEN @
  DrawPAGE(); // .PAGE
  WE49C(); // WE49C
}


// ================================================
// 0xe78a: WORD 'WE78C' codep=0x224c wordp=0xe78c params=0 returns=2
// ================================================

void WE78C() // WE78C
{
  WE394(); // WE394
  BEEP(); // BEEP
  SET_STR_AS_PARAM("SAVED GAME INTEGRITY ERROR.");
  DrawPAGE(); // .PAGE
  WE5E9(); // WE5E9
}


// ================================================
// 0xe7b4: WORD 'WE7B6' codep=0x224c wordp=0xe7b6 params=1 returns=0
// ================================================

void WE7B6() // WE7B6
{
  SIGFLD(":SAVE");
  Push(!Read16(Pop())); //  @ NOT
  if (Pop() == 0) return;
  WE394(); // WE394
  BEEP(); // BEEP
  SET_STR_AS_PARAM("GAME IN PROGRESS BUT NOT SAVED.");
  DrawPAGE(); // .PAGE
  WE5E9(); // WE5E9
}


// ================================================
// 0xe7ec: WORD '?-writeable' codep=0x224c wordp=0xe7ee params=0 returns=1
// ================================================

void Is_dash_writeable() // ?-writeable
{
  Push(0x00ff);
  Push(pp_DERROR); // DERROR
  Store_3(); // !_3
  GetDS(); // @DS
  PAD(); // PAD
  Push(Pop() + 0x0032); //  0x0032 +
  Push(pp_DTA); // DTA
  _2_ex_(); // 2!
  DOS_dash_DTA(); // DOS-DTA
  Push(0);
  RELREC(); // RELREC
  Store_3(); // !_3
  Push(1);
  RECSIZE(); // RECSIZE
  Store_3(); // !_3
  READ_dash_RANDOM(); // READ-RANDOM
  WRITE_dash_RANDOM(); // WRITE-RANDOM
  Pop(); Pop(); // 2DROP
  INIT(); // INIT
  Push(Read16(pp_DERROR)==0?1:0); // DERROR @ 0=
}


// ================================================
// 0xe822: WORD 'nomaster' codep=0x224c wordp=0xe824 params=0 returns=0
// ================================================

void nomaster() // nomaster
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("MUST PLAY ON A WRITABLE COPY.");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("PRESS ANY KEY TO EXIT.");
  DrawTTY(); // .TTY
  KEY_2(); // KEY_2
  Pop(); // DROP
  BYE(); // BYE
}


// ================================================
// 0xe86b: WORD 'GDE' codep=0x224c wordp=0xe86d params=0 returns=0
// ================================================

void GDE() // GDE
{
  Push(0xae85); // '<CTASKMOUNT>'
  Push(pp_ASKMOUNT); // ASKMOUNT
  Store_3(); // !_3
  Push(0xae67); // '<CTVERSIONERROR>'
  Push(pp__i_VERSIONERR); // 'VERSIONERR
  Store_3(); // !_3
}


// ================================================
// 0xe87f: WORD '.RESUMING' codep=0x224c wordp=0xe881 params=0 returns=4
// ================================================

void DrawRESUMING() // .RESUMING
{
  SET_STR_AS_PARAM("RESUMING THE GAME IN PROGRESS...");
  DrawPAGE(); // .PAGE
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xe8ae: WORD 'WE8B0' codep=0x224c wordp=0xe8b0 params=1 returns=0
// ================================================

void WE8B0() // WE8B0
{
  if (Pop() == 0) return;
  _2SWAP(); // 2SWAP
}


// ================================================
// 0xe8b8: WORD 'SCR>EG' codep=0x224c wordp=0xe8c3
// ================================================

void SCR_gt_EG() // SCR>EG
{
  unsigned short int i, imax, j, jmax;
  _gt_HIDDEN(); // >HIDDEN
  DARK(); // DARK
  Push(Read16(pp_XORMODE)); // XORMODE @
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(-1);

  i = 0;
  imax = 0x00c8;
  do // (DO)
  {

    j = 0;
    jmax = 0x0050;
    do // (DO)
    {
      Push(Pop() + 1); //  1+
      Push(Read16(pp_WE106)); // WE106 @
      OVER(); // OVER
      LC_at_(); // LC@
      Push(Read16(regsp)); // DUP
      Push(Pop() >> 4 & 0x000f); //  16/ 0x000f AND
      C_gt_EGA(); // C>EGA
      if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
      if (Pop() != 0)
      {
        Push(pp_COLOR); // COLOR
        _st__ex__gt_(); // <!>
        SETCOLO(); // SETCOLO
        Push(j * 2); // I 2*
        Push(i); // J
        PLOT(); // PLOT
      }
      Push(Pop() & 0x000f); //  0x000f AND
      C_gt_EGA(); // C>EGA
      if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
      if (Pop() != 0)
      {
        Push(pp_COLOR); // COLOR
        _st__ex__gt_(); // <!>
        SETCOLO(); // SETCOLO
        Push(j * 2 + 1); // I 2* 1+
        Push(i); // J
        PLOT(); // PLOT
      }
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  Push(pp_XORMODE); // XORMODE
  Store_3(); // !_3
}


// ================================================
// 0xe939: WORD 'RESTOREDISPLAY' codep=0x224c wordp=0xe93b params=0 returns=0
// ================================================

void RESTOREDISPLAY() // RESTOREDISPLAY
{
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    SETDIS(); // SETDIS
    SCR_gt_EG(); // SCR>EG
    SCR_dash_RES(); // SCR-RES
    _gt_DISPLAY(); // >DISPLAY
    IsHUB(); // ?HUB
    Push(Read16(pp_WE10A)); // WE10A @
    if (Pop() != 0)
    {
      SETHID(); // SETHID
      SCR_gt_EG(); // SCR>EG
    }
    return;
  }
  OUTERSPACE(); // OUTERSPACE
  Push(1);
  _v_DISPLAY(); // |DISPLAY
}


// ================================================
// 0xe965: WORD 'PRESERVEDISPLAY' codep=0x224c wordp=0xe967 params=0 returns=0
// ================================================

void PRESERVEDISPLAY() // PRESERVEDISPLAY
{
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    SETDIS(); // SETDIS
    SCR_gt_CG(); // SCR>CG
    IsHUB(); // ?HUB
    Push(Read16(pp_WE10A)); // WE10A @
    if (Pop() != 0)
    {
      _gt_HIDDEN(); // >HIDDEN
      SETHID(); // SETHID
      SCR_gt_CG(); // SCR>CG
    }
    return;
  }
  OUTERSPACE(); // OUTERSPACE
  Push(0);
  _v_DISPLAY(); // |DISPLAY
}


// ================================================
// 0xe98f: WORD 'ESCDISABLE' codep=0x224c wordp=0xe991 params=0 returns=0
// ================================================

void ESCDISABLE() // ESCDISABLE
{
  Push(pp_ESC_dash_EN); // ESC-EN
  OFF(); // OFF
}


// ================================================
// 0xe997: WORD 'ESCENABLE' codep=0x224c wordp=0xe999 params=0 returns=0
// ================================================

void ESCENABLE() // ESCENABLE
{
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_3(); // ON_3
}


// ================================================
// 0xe99f: WORD 'OFFCACHE' codep=0x224c wordp=0xe9a1 params=0 returns=0
// ================================================

void OFFCACHE() // OFFCACHE
{
  Push(pp__n_CACHE); // #CACHE
  OFF(); // OFF
  AUTO_dash_CACHE(); // AUTO-CACHE
}


// ================================================
// 0xe9a9: WORD 'ONCACHE' codep=0x224c wordp=0xe9ab params=0 returns=0
// ================================================

void ONCACHE() // ONCACHE
{
  Push(Read16(pp__bo__n_CACHE_bc_)); // [#CACHE] @
  Push(pp__n_CACHE); // #CACHE
  Store_3(); // !_3
  AUTO_dash_CACHE(); // AUTO-CACHE
}


// ================================================
// 0xe9b7: WORD 'CHECKSUM' codep=0x224c wordp=0xe9b9 params=2 returns=0
// ================================================

void CHECKSUM() // CHECKSUM
{
  unsigned short int i, imax;

  i = 0;
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop() + i)&0xFF); //  I + C@
    Push(pp_CKSUM); // CKSUM
    _plus__ex__2(); // +!_2
    Push(1);
    i += Pop();
  } while(i<imax); // (/LOOP)

  Pop(); // DROP
}


// ================================================
// 0xe9d3: WORD 'NEWDOSMSGS' codep=0x224c wordp=0xe9d5 params=0 returns=0
// ================================================

void NEWDOSMSGS() // NEWDOSMSGS
{
  Push(0xe695); // 'WE695'
  Push(pp_ASKMOUNT); // ASKMOUNT
  Store_3(); // !_3
  Push(0xe73b); // 'WE73B'
  Push(pp__i_VERSIONERR); // 'VERSIONERR
  Store_3(); // !_3
}


// ================================================
// 0xe9e7: WORD '?INNERSPACE' codep=0x224c wordp=0xe9e9 params=1 returns=1
// ================================================

void IsINNERSPACE() // ?INNERSPACE
{
  OUTERSPACE(); // OUTERSPACE
  _gt_(); // >
  Push(!Pop()); //  NOT
}


// ================================================
// 0xe9f1: WORD 'WE9F3' codep=0x224c wordp=0xe9f3 params=1 returns=2
// ================================================

void WE9F3() // WE9F3
{
  Push(Read16(regsp)); // DUP
  IsINNERSPACE(); // ?INNERSPACE
  if (Pop() != 0)
  {
    GetDS(); // @DS
    _dash_(); // -
    Push(1);
    return;
  }
  Push(Pop() - Read16(pp_LFSEG)); //  LFSEG @ -
  Push(0);
}


// ================================================
// 0xea0f: WORD 'WEA11' codep=0x224c wordp=0xea11 params=2 returns=1
// ================================================

void WEA11() // WEA11
{
  if (Pop() != 0)
  {
    GetDS(); // @DS
    Push(Pop() + Pop()); // +
    return;
  }
  Push(Pop() + Read16(pp_LFSEG)); //  LFSEG @ +
}


// ================================================
// 0xea25: WORD 'PUSHVECT' codep=0x224c wordp=0xea27 params=0 returns=6
// ================================================

void PUSHVECT() // PUSHVECT
{
  unsigned short int i, imax;
  Push(Read16(pp_BUF_dash_SEG)==Read16(pp_DBUF_dash_SEG)?1:0); // BUF-SEG @ DBUF-SEG @ =
  Push(Read16(pp_BLTSEG)); // BLTSEG @
  WE9F3(); // WE9F3
  Push(Read16(pp__3DSEG)); // 3DSEG @
  WE9F3(); // WE9F3

  i = 0;
  imax = Read16(cc_WDFAE); // WDFAE
  do // (DO)
  {
    Push(i); // I
    GetTableEntry("VECTORERRORS");
    Push(Read16(Pop())); //  @
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xea4f: WORD 'POPVECT' codep=0x224c wordp=0xea51 params=6 returns=0
// ================================================

void POPVECT() // POPVECT
{
  unsigned short int i, imax;

  i = Read16(cc_WDFAE) - 1; // WDFAE 1-
  imax = 0;
  do // (DO)
  {
    Push(i); // I
    GetTableEntry("VECTORERRORS");
    Store_3(); // !_3
    Push(-1);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  WEA11(); // WEA11
  Push(pp__3DSEG); // 3DSEG
  Store_3(); // !_3
  WEA11(); // WEA11
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
  if (Pop() != 0)
  {
    Push(pp_DBUF_dash_SEG); // DBUF-SEG
  } else
  {
    Push(pp_HBUF_dash_SEG); // HBUF-SEG
  }
  Push(Read16(Pop())); //  @
  Push(pp_BUF_dash_SEG); // BUF-SEG
  Store_3(); // !_3
}


// ================================================
// 0xea85: WORD 'WEA87' codep=0x224c wordp=0xea87 params=0 returns=2
// ================================================

void WEA87() // WEA87
{
  WE394(); // WE394
  SET_STR_AS_PARAM("LOADING GAME IN PROGRESS...");
  DrawPAGE(); // .PAGE
  Push(0x0037);
  Push(0x0011);
  POS_dot_(); // POS.
  PRINT("PLEASE WAIT", 11); // (.")
  _gt_0FONT(); // >0FONT
}


// ================================================
// 0xeac5: WORD 'WEAC7' codep=0x224c wordp=0xeac7 params=0 returns=4
// ================================================

void WEAC7() // WEAC7
{
  WE394(); // WE394
  SET_STR_AS_PARAM("...GAME LOAD COMPLETE.");
  DrawPAGE(); // .PAGE
  Push(0x05dc);
  MS(); // MS
}


// ================================================
// 0xeaec: WORD 'WEAEE' codep=0x224c wordp=0xeaee params=0 returns=2
// ================================================

void WEAEE() // WEAEE
{
  WE394(); // WE394
  SET_STR_AS_PARAM("SAVING GAME...");
  DrawPAGE(); // .PAGE
  Push(0x0037);
  Push(0x0011);
  POS_dot_(); // POS.
  PRINT("PLEASE WAIT", 11); // (.")
  _gt_0FONT(); // >0FONT
}


// ================================================
// 0xeb1f: WORD 'WEB21' codep=0x224c wordp=0xeb21 params=0 returns=2
// ================================================

void WEB21() // WEB21
{
  WE394(); // WE394
  SET_STR_AS_PARAM("GAME SAVE COMPLETE.");
  DrawPAGE(); // .PAGE
  WE5E9(); // WE5E9
}


// ================================================
// 0xeb3f: WORD 'PRMSAV' codep=0xeb4a wordp=0xeb4a
// ================================================
// 0xeb4a: pop    bx
// 0xeb4b: mov    [bx],sp
// 0xeb4d: inc    bx
// 0xeb4e: inc    bx
// 0xeb4f: push   si
// 0xeb50: push   di
// 0xeb51: mov    di,bx
// 0xeb53: mov    si,[078C] // OPERATOR
// 0xeb57: sub    si,03E8
// 0xeb5b: mov    cx,03E8
// 0xeb5e: repz   
// 0xeb5f: movsb
// 0xeb60: pop    di
// 0xeb61: pop    si
// 0xeb62: lodsw
// 0xeb63: mov    bx,ax
// 0xeb65: jmp    word ptr [bx]

// ================================================
// 0xeb67: WORD 'PRMLOD' codep=0xeb72 wordp=0xeb72
// ================================================
// 0xeb72: pop    bx
// 0xeb73: mov    sp,[bx]
// 0xeb75: inc    bx
// 0xeb76: inc    bx
// 0xeb77: mov    [bp-02],si
// 0xeb7a: mov    [bp-04],di
// 0xeb7d: mov    si,bx
// 0xeb7f: cli    
// 0xeb80: push   ds
// 0xeb81: pop    es
// 0xeb82: mov    di,[078C] // OPERATOR
// 0xeb86: sub    di,03E8
// 0xeb8a: mov    cx,03E8
// 0xeb8d: repz   
// 0xeb8e: movsb
// 0xeb8f: add    sp,[DE72] // WDE72
// 0xeb93: mov    si,[bp-02]
// 0xeb96: mov    di,[bp-04]
// 0xeb99: sti    
// 0xeb9a: lodsw
// 0xeb9b: mov    bx,ax
// 0xeb9d: jmp    word ptr [bx]

// ================================================
// 0xeb9f: WORD 'RETSAV' codep=0xebaa wordp=0xebaa
// ================================================
// 0xebaa: pop    bx
// 0xebab: mov    [bx],bp
// 0xebad: inc    bx
// 0xebae: inc    bx
// 0xebaf: push   si
// 0xebb0: push   di
// 0xebb1: mov    di,bx
// 0xebb3: mov    si,[078E] // OPERATOR
// 0xebb7: sub    si,00DC
// 0xebbb: mov    cx,00DC
// 0xebbe: repz   
// 0xebbf: movsb
// 0xebc0: pop    di
// 0xebc1: pop    si
// 0xebc2: lodsw
// 0xebc3: mov    bx,ax
// 0xebc5: jmp    word ptr [bx]

// ================================================
// 0xebc7: WORD 'RETJMP' codep=0xebd2 wordp=0xebd2
// ================================================
// 0xebd2: cli    
// 0xebd3: push   ds
// 0xebd4: pop    es
// 0xebd5: pop    bx
// 0xebd6: mov    bp,[bx]
// 0xebd8: inc    bx
// 0xebd9: inc    bx
// 0xebda: mov    si,bx
// 0xebdc: push   di
// 0xebdd: mov    di,[078E] // OPERATOR
// 0xebe1: sub    di,00DC
// 0xebe5: mov    cx,00DC
// 0xebe8: repz   
// 0xebe9: movsb
// 0xebea: pop    di
// 0xebeb: add    bp,[DE6E] // WDE6E
// 0xebef: mov    si,[bp+00]
// 0xebf2: inc    bp
// 0xebf3: inc    bp
// 0xebf4: sti    
// 0xebf5: lodsw
// 0xebf6: mov    bx,ax
// 0xebf8: jmp    word ptr [bx]

// ================================================
// 0xebfa: WORD '|DISK' codep=0x224c wordp=0xebfc params=5 returns=0
// ================================================

void _v_DISK() // |DISK
{
  unsigned short int a, i, imax;
  a = Pop(); // >R
  Push(Read16(regsp)); // DUP
  Push(0);
  Push(0x0400);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  if (Pop() != 0)
  {
    Push(Pop() + 1); //  1+
  }
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {

    i = 0;
    imax = Pop();
    do // (DO)
    {
      Push(4);
      PICK(); // PICK
      Push(Pop() + i * 0x0040); //  I 0x0040 * +
      Push(4);
      PICK(); // PICK
      GetDS(); // @DS
      Push(5);
      PICK(); // PICK
      Push(Pop() + i); //  I +
      BLOCK_2(); // BLOCK_2
      _2OVER(); // 2OVER
      _2OVER(); // 2OVER
      Push(!a); // J NOT
      WE8B0(); // WE8B0
      Push(9);
      PICK(); // PICK
      Push(Read16(cc_WDE7A)); // WDE7A
      UMIN(); // UMIN
      LCMOVE(); // LCMOVE
      Push(a); // J
      if (Pop() != 0)
      {
        UPDATE(); // UPDATE
      }
      Push(5);
      PICK(); // PICK
      Push(Read16(cc_WDE7A)); // WDE7A
      UMIN(); // UMIN
      CHECKSUM(); // CHECKSUM
      Pop(); // DROP
      Pop(); Pop(); // 2DROP
      Push(Pop() - 0x0400); //  0x0400 -
      i++;
    } while(i<imax); // (LOOP)

    Push(a); // I
    if (Pop() != 0)
    {
      SAVE_dash_BUFFERS(); // SAVE-BUFFERS
    }
  }
  Push(a); // R>
  Pop(); // DROP
  Pop(); Pop(); // 2DROP
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xec7e: WORD '<DISK' codep=0x224c wordp=0xec80 params=4 returns=0
// ================================================

void _st_DISK() // <DISK
{
  Push(0);
  _v_DISK(); // |DISK
}


// ================================================
// 0xec86: WORD '>DISK' codep=0x224c wordp=0xec88 params=4 returns=0
// ================================================

void _gt_DISK() // >DISK
{
  Push(1);
  _v_DISK(); // |DISK
}


// ================================================
// 0xec8e: WORD 'ARB' codep=0x224c wordp=0xec90 params=0 returns=1
// ================================================

void ARB() // ARB
{
  Push(Read16(pp_LFSEG) + 0x0032); // LFSEG @ 0x0032 +
}


// ================================================
// 0xec9c: WORD 'ARRAYSPACE' codep=0x224c wordp=0xec9e params=0 returns=1
// ================================================

void ARRAYSPACE() // ARRAYSPACE
{
  Push(Read16(pp_SYSK) * 0x0040 - 1); // SYSK @ 0x0040 * 1-
  ARB(); // ARB
  _dash_(); // -
  Push(Pop() >> 4); //  16*
}


// ================================================
// 0xecb2: WORD 'ARR>DISK' codep=0x224c wordp=0xecb4 params=0 returns=0
// ================================================

void ARR_gt_DISK() // ARR>DISK
{
  ARB(); // ARB
  Push(0);
  Push(Read16(cc_WDE6A)); // WDE6A
  ARRAYSPACE(); // ARRAYSPACE
  _gt_DISK(); // >DISK
}


// ================================================
// 0xecc0: WORD 'WECC2' codep=0x224c wordp=0xecc2
// ================================================

void WECC2() // WECC2
{
  ARB(); // ARB
  Push(0);
  Push(Read16(cc_WDE6A)); // WDE6A
  ARRAYSPACE(); // ARRAYSPACE
  _st_DISK(); // <DISK
  LOAD_dash_CO(); // LOAD-CO
}


// ================================================
// 0xecd0: WORD 'WECD2' codep=0x224c wordp=0xecd2 params=0 returns=0
// ================================================

void WECD2() // WECD2
{
  OUTERSPACE(); // OUTERSPACE
  Push(0);
  Push(Read16(cc_WDE5E)); // WDE5E
  Push(Read16(cc_WDE76)); // WDE76
  _gt_DISK(); // >DISK
}


// ================================================
// 0xecde: WORD 'WECE0' codep=0x224c wordp=0xece0 params=0 returns=0
// ================================================

void WECE0() // WECE0
{
  OUTERSPACE(); // OUTERSPACE
  Push(0);
  Push(Read16(cc_WDE5E)); // WDE5E
  Push(Read16(cc_WDE76)); // WDE76
  _st_DISK(); // <DISK
}


// ================================================
// 0xecec: WORD 'WECEE' codep=0x224c wordp=0xecee params=0 returns=1
// ================================================

void WECEE() // WECEE
{
  Push(Read16(pp_OVA) - Read16(cc_WDE7E)); // OVA @ WDE7E -
}


// ================================================
// 0xecf8: WORD 'WECFA' codep=0x224c wordp=0xecfa params=0 returns=0
// ================================================

void WECFA() // WECFA
{
  GetDS(); // @DS
  Push(Read16(cc_WDE7E)); // WDE7E
  Push(Read16(cc_WDE5A)); // WDE5A
  WECEE(); // WECEE
  _st_DISK(); // <DISK
}


// ================================================
// 0xed06: WORD 'WED08' codep=0x224c wordp=0xed08 params=0 returns=0
// ================================================

void WED08() // WED08
{
  GetDS(); // @DS
  Push(Read16(cc_WDE7E)); // WDE7E
  Push(Read16(cc_WDE5A)); // WDE5A
  WECEE(); // WECEE
  _gt_DISK(); // >DISK
}


// ================================================
// 0xed14: WORD 'WED16' codep=0x224c wordp=0xed16
// ================================================

void WED16() // WED16
{
  Push(Read16(cc_WDE62)); // WDE62
  BLOCK_2(); // BLOCK_2
  RETSAV(); // RETSAV
  UPDATE(); // UPDATE
}


// ================================================
// 0xed20: WORD 'WED22' codep=0x224c wordp=0xed22 params=0 returns=1
// ================================================

void WED22() // WED22
{
  Push(Read16(cc_WDE62)); // WDE62
  BLOCK_2(); // BLOCK_2
  Push(pp_WDE86); // WDE86
  Push(0x00de);
  CMOVE(); // CMOVE
}


// ================================================
// 0xed30: WORD 'WED32' codep=0x224c wordp=0xed32
// ================================================

void WED32() // WED32
{
  Push(Read16(cc_WDE66)); // WDE66
  BLOCK_2(); // BLOCK_2
  PRMSAV(); // PRMSAV
  UPDATE(); // UPDATE
}


// ================================================
// 0xed3c: WORD 'WED3E' codep=0x224c wordp=0xed3e
// ================================================

void WED3E() // WED3E
{
  Push(Read16(cc_WDE66)); // WDE66
  BLOCK_2(); // BLOCK_2
  PRMLOD(); // PRMLOD
}


// ================================================
// 0xed46: WORD 'WED48' codep=0x224c wordp=0xed48
// ================================================

void WED48() // WED48
{
  WEAEE(); // WEAEE
  Push(pp_CKSUM); // CKSUM
  OFF(); // OFF
  _ro_RESTORE_rc_(); // (RESTORE)
  WED08(); // WED08
  WECD2(); // WECD2
  ARR_gt_DISK(); // ARR>DISK
  WED32(); // WED32
  WED16(); // WED16
  Push(Read16(pp_CKSUM)); // CKSUM @
  SIGFLD(":CKSUM");
  Store_3(); // !_3
  _ro_SETUP_rc_(); // (SETUP)
  SAVE_dash_BUFFERS(); // SAVE-BUFFERS
}


// ================================================
// 0xed68: WORD 'WED6A' codep=0x224c wordp=0xed6a params=2 returns=0
// ================================================

void WED6A() // WED6A
{
  SIGFLD(":SAVE");
  Store_3(); // !_3
}


// ================================================
// 0xed70: WORD 'SETSAVE' codep=0x224c wordp=0xed72
// ================================================

void SETSAVE() // SETSAVE
{
  WE647(); // WE647
  WE659(); // WE659
  WE647(); // WE647
  WE64F(); // WE64F
  Push(1);
  WED6A(); // WED6A
  SWAP(); // SWAP
  WE63F(); // WE63F
  MOUNTA(); // MOUNTA
  WE64F(); // WE64F
  Push(1);
  WED6A(); // WED6A
  WE63F(); // WE63F
  SAVE_dash_BUFFERS(); // SAVE-BUFFERS
}


// ================================================
// 0xed90: WORD 'WED92' codep=0x224c wordp=0xed92
// ================================================

void WED92() // WED92
{
  Push(0);
  WED6A(); // WED6A
  MOUNTB(); // MOUNTB
  Push(0);
  WED6A(); // WED6A
  SAVE_dash_BUFFERS(); // SAVE-BUFFERS
}


// ================================================
// 0xeda0: WORD 'WEDA2' codep=0x224c wordp=0xeda2 params=0 returns=1
// ================================================

void WEDA2() // WEDA2
{
  unsigned short int i, imax;

  i = 0;
  imax = Read16(cc_WDFAA); // WDFAA
  do // (DO)
  {
    Push(i); // I
    GetTableEntry("HOST");
    Push(Read16(Pop())); //  @
    i++;
  } while(i<imax); // (LOOP)

  _ro_RESTORE_rc_(); // (RESTORE)
}


// ================================================
// 0xedb6: WORD 'WEDB8' codep=0x224c wordp=0xedb8
// ================================================

void WEDB8() // WEDB8
{
  unsigned short int i, imax;

  i = Read16(cc_WDFAA) - 1; // WDFAA 1-
  imax = 0;
  do // (DO)
  {
    Push(i); // I
    GetTableEntry("HOST");
    Store_3(); // !_3
    Push(-1);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  CFIGARRAYS(); // CFIGARRAYS
  _ro_SETUP_rc_(); // (SETUP)
  WE0B6(); // WE0B6
  BLD_dash_DIS(); // BLD-DIS
  BLD_dash_MV(); // BLD-MV
  SETDBUF(); // SETDBUF
}


// ================================================
// 0xedda: WORD 'DATALOAD' codep=0x224c wordp=0xeddc
// ================================================

void DATALOAD() // DATALOAD
{
  WEA87(); // WEA87
  Push(pp_CKSUM); // CKSUM
  OFF(); // OFF
  EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
  WEDA2(); // WEDA2
  WECFA(); // WECFA
  WEDB8(); // WEDB8
  WECE0(); // WECE0
  WECC2(); // WECC2
  WED3E(); // WED3E
  WED22(); // WED22
  Push(Read16(pp_CKSUM)); // CKSUM @
  SIGFLD(":CKSUM");
  Push(Read16(Pop())); //  @
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    WEAC7(); // WEAC7
    return;
  }
  WE78C(); // WE78C
}


// ================================================
// 0xee0a: WORD 'LOAD.GAME' codep=0x224c wordp=0xee15
// ================================================

void LOAD_dot_GAME() // LOAD.GAME
{
  NEWDOSMSGS(); // NEWDOSMSGS
  _gt_DISPLAY(); // >DISPLAY
  DARK(); // DARK
  BORDER(); // BORDER
  DrawLOADHEAD(); // .LOADHEAD
  EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
  OFFCACHE(); // OFFCACHE
  WE7B6(); // WE7B6
  MOUNTA(); // MOUNTA
  DATALOAD(); // DATALOAD
  WED92(); // WED92
  _gt_LORES_2(); // >LORES_2
  Push(pp_RESUME); // RESUME
  ON_3(); // ON_3
  Push(pp_WDE86); // WDE86
  RETJMP(); // RETJMP
}


// ================================================
// 0xee37: WORD 'SAVEGAME' codep=0x224c wordp=0xee39
// ================================================

void SAVEGAME() // SAVEGAME
{
  _gt_DISPLAY(); // >DISPLAY
  DARK(); // DARK
  BORDER(); // BORDER
  DrawSAVEHEAD(); // .SAVEHEAD
  SETSAVE(); // SETSAVE
  WED48(); // WED48
  Push(3);
  UNMOUNT(); // UNMOUNT
  MOUNTB(); // MOUNTB
  Push(0);
  BLOCK_2(); // BLOCK_2
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  SWAP(); // SWAP
  C_ex_(); // C!
  SAVE_dash_BUFFERS(); // SAVE-BUFFERS
  Push(2);
  UNMOUNT(); // UNMOUNT
  WEB21(); // WEB21
}


// ================================================
// 0xee61: WORD 'WEE63' codep=0x224c wordp=0xee63 params=1 returns=0
// ================================================

void WEE63() // WEE63
{
  Push(0x00c9);
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
  Push(0x00cd);
  SWAP(); // SWAP
  EMITS(); // EMITS
  Push(0x00bb);
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
}


// ================================================
// 0xee79: WORD 'WEE7B' codep=0x224c wordp=0xee7b params=1 returns=0
// ================================================

void WEE7B() // WEE7B
{
  Push(0x00ba);
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
  Push(Read16(user_ROW)&0xFF); // ROW C@
  SWAP(); // SWAP
  Push(Pop() + (Read16(user_COL)&0xFF)); //  COL C@ +
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  Push(0x00ba);
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
}


// ================================================
// 0xee97: WORD 'WEE99' codep=0x224c wordp=0xee99 params=1 returns=0
// ================================================

void WEE99() // WEE99
{
  Push(0x00c8);
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
  Push(0x00cd);
  SWAP(); // SWAP
  EMITS(); // EMITS
  Push(0x00bc);
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
}


// ================================================
// 0xeeaf: WORD 'BOX' codep=0x224c wordp=0xeeb1 params=4 returns=0
// ================================================

void BOX() // BOX
{
  unsigned short int a, b, i, imax;
  a = Pop(); // >R
  b = Pop(); // >R
  _2DUP(); // 2DUP
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  Push(a); // I'
  WEE63(); // WEE63

  i = 0;
  imax = b; // R>
  do // (DO)
  {
    SWAP(); // SWAP
    Push(Pop() + 1); //  1+
    SWAP(); // SWAP
    _2DUP(); // 2DUP
    Exec("POSITION"); // call of word 0x2767 '(POSITION)'
    Push(a); // J
    WEE7B(); // WEE7B
    i++;
  } while(i<imax); // (LOOP)

  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  Push(a); // R>
  WEE99(); // WEE99
}


// ================================================
// 0xeee3: WORD 'SET.DISPLAY.VECTORS' codep=0x224c wordp=0xeee5 params=0 returns=1
// ================================================

void SET_dot_DISPLAY_dot_VECTORS() // SET.DISPLAY.VECTORS
{
  do
  {
    Push(0x0016);
    Push(0x0028);
    Exec("POSITION"); // call of word 0x2767 '(POSITION)'
    Push(2);
    SPACES(); // SPACES
    Push(0x0016);
    Push(0x0028);
    Exec("POSITION"); // call of word 0x2767 '(POSITION)'
    PAD(); // PAD
    Push(2);
    Exec("EXPECT"); // call of word 0x1d3e '(EXPECT)'
    PAD(); // PAD
    Push(Read16(Pop())&0xFF); //  C@
    Push(0x0031);
    Push(0x0036);
    WITHIN(); // WITHIN
  } while(Pop() == 0);
  PAD(); // PAD
  Push((Read16(Pop())&0xFF) - 0x0030); //  C@ 0x0030 -
  Push(pp_IsTANDRG); // ?TANDRG
  OFF(); // OFF
  WE012(); // WE012
  if (Pop() != 0)
  {
    Push(pp_IsTANDRG); // ?TANDRG
    ON_3(); // ON_3
    Push(Read16(regsp)); // DUP
    Push(Pop()==2?1:0); //  2 =
    if (Pop() != 0)
    {
      Push(Pop() + 1); //  1+
    }
  }
  Push(pp_IsEGA); // ?EGA
  OFF(); // OFF
  Push(Read16(regsp)); // DUP
  Push(Pop()==5?1:0); //  5 =
  if (Pop() == 0) return;
  Push(Pop() - 2); //  2-
  Push(pp_IsEGA); // ?EGA
  ON_3(); // ON_3
}


// ================================================
// 0xef4f: WORD 'SET.DISPLAY.MODE' codep=0x224c wordp=0xef5a
// ================================================

void SET_dot_DISPLAY_dot_MODE() // SET.DISPLAY.MODE
{
  _gt_ALPHA(); // >ALPHA
  Exec("PAGE"); // call of word 0x274c '(PAGE)'
  Push(6);
  Push(0x0015);
  Push(0x000b);
  Push(0x0028);
  BOX(); // BOX
  Push(8);
  Push(0x001c);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("1. Black/white", 14); // (.")
  Push(0x000a);
  Push(0x001c);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("2. RGB", 6); // (.")
  Push(0x000c);
  Push(0x001c);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("3. Color TV or Composite", 24); // (.")
  Push(0x000e);
  Push(0x001c);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("4. Hercules (monochrome)", 24); // (.")
  Push(0x0010);
  Push(0x001c);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("5. EGA", 6); // (.")
  Push(0x0013);
  Push(0x0016);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("S E L E C T   D I S P L A Y   M O D E", 37); // (.")
  Push(0x0014);
  Push(0x001a);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("A N D  P R E S S  R E T U R N", 29); // (.")
  SET_dot_DISPLAY_dot_VECTORS(); // SET.DISPLAY.VECTORS
  Push(pp_MONITOR); // MONITOR
  Store_3(); // !_3
  SET_dot_COLORS(); // SET.COLORS
  LOAD_dash_CO(); // LOAD-CO
  SETDBUF(); // SETDBUF
  _gt_DISPLAY(); // >DISPLAY
  _gt_LORES_2(); // >LORES_2
  DARK(); // DARK
}


// ================================================
// 0xf067: WORD 'WF069' codep=0x224c wordp=0xf069 params=0 returns=1
// ================================================

void WF069() // WF069
{
  unsigned short int i, imax, j, jmax;
  Push(0x1bee);
  TIME(); // TIME
  _2_at_(); // 2@

  i = 0;
  imax = 0x0064;
  do // (DO)
  {

    j = 0;
    jmax = 0x03e8;
    do // (DO)
    {
      NOP(); // NOP
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

  TIME(); // TIME
  _2_at_(); // 2@
  _2SWAP(); // 2SWAP
  D_dash_(); // D-
  Pop(); // DROP
  _slash_(); // /
  Push(1);
  MAX(); // MAX
  Push(0x5245); // 'MPS'
  Store_3(); // !_3
}


// ================================================
// 0xf0a3: WORD 'POLICE.WARNING' codep=0x224c wordp=0xf0ae
// ================================================

void POLICE_dot_WARNING() // POLICE.WARNING
{
  _gt_ALPHA(); // >ALPHA
  _gt_0FONT(); // >0FONT
  Exec("PAGE"); // call of word 0x274c '(PAGE)'
  Push(1);
  Push(7);
  Push(0x0012);
  Push(0x003e);
  BOX(); // BOX
  Push(2);
  Push(0x000f);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("I N T E R S T E L   P O L I C E   W A R N I N G", 47); // (.")
  Push(4);
  Push(0x000a);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("As provided by the Galactic Treaty of 4410, this  computer", 58); // (.")
  Push(5);
  Push(0x000a);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("software  product  is  hereby  declared  the  Intellectual", 58); // (.")
  Push(6);
  Push(0x000a);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("Property of the Human authors, Binary Systems.  All rights", 58); // (.")
  Push(7);
  Push(0x000a);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("are  henceforth  reserved  in  space and time.", 46); // (.")
  Push(9);
  Push(0x000a);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("Provision for the protection of  Intellectual Property  is", 58); // (.")
  Push(0x000a);
  Push(0x000a);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("covered under Section 8.9.1A-F of the  Intangible Property", 58); // (.")
  Push(0x000b);
  Push(0x000a);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("Act of 4506,  ratified by all beings except the Gazurtoid.", 58); // (.")
  Push(0x000d);
  Push(0x000a);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("Included  in   Section  8.9.1A-C   is  the  provision  for", 58); // (.")
  Push(0x000e);
  Push(0x000a);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("Interstel Corporate Police to enforce the Law.", 46); // (.")
  Push(0x0010);
  Push(0x000a);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("WARNING:  Any  being  caught with an unauthorized  copy or", 58); // (.")
  Push(0x0011);
  Push(0x000a);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("version  of  this  Software  Product  will  be punished by", 58); // (.")
  Push(0x0012);
  Push(0x000a);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("Interstel Corporate Police.  Punishment  may  include  the", 58); // (.")
  Push(0x0013);
  Push(0x000a);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("destruction of the offending being.", 35); // (.")
  WF069(); // WF069
  Push(0x9c40); Push(0x0000);
  WE61D(); // WE61D
  Exec("PAGE"); // call of word 0x274c '(PAGE)'
  SET_dot_COLORS(); // SET.COLORS
  _gt_LORES_2(); // >LORES_2
  DARK(); // DARK
}


// ================================================
// 0xf472: WORD 'NEW.GA' codep=0x224c wordp=0xf47d
// ================================================

void NEW_dot_GA() // NEW.GA
{
  GDE(); // GDE
  WE66F(); // WE66F
  ESCENABLE(); // ESCENABLE
  Push(Read16(user_TIB)); // TIB @
  Push(0x0050);
  Push(0);
  FILL_1(); // FILL_1
  PORTM(); // PORTM
}


// ================================================
// 0xf493: WORD 'GET-OPTION#' codep=0x224c wordp=0xf495
// ================================================

void GET_dash_OPTION_n_() // GET-OPTION#
{
  do
  {
    _i_KEY(); // 'KEY
    Push(0x0031);
    Push(0x0034);
    WITHIN(); // WITHIN
    Push(Pop() | (Read16(pp_LKEY)==0x0039?1:0)); //  LKEY @ 0x0039 = OR
  } while(Pop() == 0);
  Push(Read16(pp_LKEY)); // LKEY @
}


// ================================================
// 0xf4b7: WORD 'WF4B9' codep=0x224c wordp=0xf4b9 params=0 returns=0
// ================================================

void WF4B9() // WF4B9
{
  Push(pp_RESUME); // RESUME
  ON_3(); // ON_3
}


// ================================================
// 0xf4bf: WORD 'GAMEOPCASE' codep=0x4a4f wordp=0xf4ca
// ================================================

void GAMEOPCASE() // GAMEOPCASE
{
  switch(Pop()) // GAMEOPCASE
  {
  case 49:
    SAVEGAME(); // SAVEGAME
    break;
  case 50:
    WF4B9(); // WF4B9
    break;
  case 51:
    SET_dot_DISPLAY_dot_MODE(); // SET.DISPLAY.MODE
    break;
  default:
    BYE(); // BYE
    break;

  }
}

// ================================================
// 0xf4da: WORD '>GAMEOPTIONS' codep=0x224c wordp=0xf4dc params=0 returns=6
// ================================================

void _gt_GAMEOPTIONS() // >GAMEOPTIONS
{
  ESCDISABLE(); // ESCDISABLE
  FLUSH_2(); // FLUSH_2
  OFFCACHE(); // OFFCACHE
  PUSHVECT(); // PUSHVECT
  NEWDOSMSGS(); // NEWDOSMSGS
  PRESERVEDISPLAY(); // PRESERVEDISPLAY
}


// ================================================
// 0xf4ea: WORD 'GAMEOPTIONS' codep=0x224c wordp=0xf4ec
// ================================================

void GAMEOPTIONS() // GAMEOPTIONS
{
  Push(pp_RESUME); // RESUME
  OFF(); // OFF
  do
  {
    DrawGAMEOPS(); // .GAMEOPS
    GET_dash_OPTION_n_(); // GET-OPTION#
    GAMEOPCASE(); // GAMEOPCASE case
    Push(Read16(pp_RESUME)); // RESUME @
  } while(Pop() == 0);
  DrawRESUMING(); // .RESUMING
}


// ================================================
// 0xf502: WORD '<GAMEOPTIONS' codep=0x224c wordp=0xf504 params=6 returns=0
// ================================================

void _st_GAMEOPTIONS() // <GAMEOPTIONS
{
  RESTOREDISPLAY(); // RESTOREDISPLAY
  ONCACHE(); // ONCACHE
  POPVECT(); // POPVECT
  ESCENABLE(); // ESCENABLE
  GDE(); // GDE
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xf512: WORD 'GAMEOPS' codep=0x224c wordp=0xf51d
// ================================================
// entry

void GAMEOPS() // GAMEOPS
{
  _gt_GAMEOPTIONS(); // >GAMEOPTIONS
  GAMEOPTIONS(); // GAMEOPTIONS
  _st_GAMEOPTIONS(); // <GAMEOPTIONS
}


// ================================================
// 0xf525: WORD '?GAME.IN.PROGRESS' codep=0x224c wordp=0xf527 params=1 returns=1
// ================================================

void IsGAME_dot_IN_dot_PROGRESS() // ?GAME.IN.PROGRESS
{
  SIGFLD(":TIMESTAMP");
  Push(Read16(Pop())); //  @
}


// ================================================
// 0xf52d: WORD 'START.GAME' codep=0x224c wordp=0xf538
// ================================================
// entry

void START_dot_GAME() // START.GAME
{
  SET_dot_DISPLAY_dot_MODE(); // SET.DISPLAY.MODE
  GDE(); // GDE
  Is_dash_writeable(); // ?-writeable
  if (Pop() != 0)
  {
    nomaster(); // nomaster
  }
  Push(0xb5aa); // 'HIMUS'
  MODULE(); // MODULE
  POLICE_dot_WARNING(); // POLICE.WARNING
  IsGAME_dot_IN_dot_PROGRESS(); // ?GAME.IN.PROGRESS
  if (Pop() != 0)
  {
    LOAD_dot_GAME(); // LOAD.GAME
    return;
  }
  NEW_dot_GA(); // NEW.GA
}

// 0xf55c: db 0x47 0x41 0x4d 0x45 0x00 'GAME '

