// ====== OVERLAY 'IT-OV' ======
// store offset = 0xee80
// overlay size   = 0x06e0

#include"cpu.h"
#include"starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0xaf93 C-string:'UNK_0x3f09'
// 1870:      UNK_0xee9e  codep:0x7394 parp:0xee9e size:0x0006 C-string:'UNK_0xee9e'
// 1871:      UNK_0xeea6  codep:0x7394 parp:0xeea6 size:0x0006 C-string:'UNK_0xeea6'
// 1872:      UNK_0xeeae  codep:0x7394 parp:0xeeae size:0x0006 C-string:'UNK_0xeeae'
// 1873:      UNK_0xeeb6  codep:0x2214 parp:0xeeb6 size:0x0002 C-string:'UNK_0xeeb6'
// 1874:      UNK_0xeeba  codep:0x2214 parp:0xeeba size:0x0002 C-string:'UNK_0xeeba'
// 1875:      UNK_0xeebe  codep:0x2214 parp:0xeebe size:0x0002 C-string:'UNK_0xeebe'
// 1876:      UNK_0xeec2  codep:0x2214 parp:0xeec2 size:0x0002 C-string:'UNK_0xeec2'
// 1877:      UNK_0xeec6  codep:0x2214 parp:0xeec6 size:0x0002 C-string:'UNK_0xeec6'
// 1878:      UNK_0xeeca  codep:0x2214 parp:0xeeca size:0x0002 C-string:'UNK_0xeeca'
// 1879:      UNK_0xeece  codep:0x2214 parp:0xeece size:0x0002 C-string:'UNK_0xeece'
// 1880:      UNK_0xeed2  codep:0x7394 parp:0xeed2 size:0x0006 C-string:'UNK_0xeed2'
// 1881:      UNK_0xeeda  codep:0x7394 parp:0xeeda size:0x000e C-string:'UNK_0xeeda'
// 1882:      UNK_0xeeea  codep:0x224c parp:0xeeea size:0x0010 C-string:'UNK_0xeeea'
// 1883:      UNK_0xeefc  codep:0x224c parp:0xeefc size:0x000e C-string:'UNK_0xeefc'
// 1884:      UNK_0xef0c  codep:0x224c parp:0xef0c size:0x0020 C-string:'UNK_0xef0c'
// 1885:      UNK_0xef2e  codep:0x224c parp:0xef2e size:0x0016 C-string:'UNK_0xef2e'
// 1886:      UNK_0xef46  codep:0x1d29 parp:0xef46 size:0x0002 C-string:'UNK_0xef46'
// 1887:      UNK_0xef4a  codep:0x224c parp:0xef4a size:0x00b3 C-string:'UNK_0xef4a'
// 1888:      UNK_0xefff  codep:0x224c parp:0xefff size:0x002c C-string:'UNK_0xefff'
// 1889:      UNK_0xf02d  codep:0x224c parp:0xf02d size:0x000e C-string:'UNK_0xf02d'
// 1890:      UNK_0xf03d  codep:0x224c parp:0xf03d size:0x000a C-string:'UNK_0xf03d'
// 1891:      UNK_0xf049  codep:0x224c parp:0xf049 size:0x001b C-string:'UNK_0xf049'
// 1892:      UNK_0xf066  codep:0x224c parp:0xf066 size:0x006a C-string:'UNK_0xf066'
// 1893:      UNK_0xf0d2  codep:0x224c parp:0xf0d2 size:0x0016 C-string:'UNK_0xf0d2'
// 1894:      UNK_0xf0ea  codep:0x224c parp:0xf0ea size:0x001a C-string:'UNK_0xf0ea'
// 1895:      UNK_0xf106  codep:0x224c parp:0xf106 size:0x0018 C-string:'UNK_0xf106'
// 1896:        DATE$>AD  codep:0x224c parp:0xf12b size:0x006d C-string:'DATE_do__gt_AD'
// 1897:      UNK_0xf19a  codep:0x224c parp:0xf19a size:0x000c C-string:'UNK_0xf19a'
// 1898:      UNK_0xf1a8  codep:0x224c parp:0xf1a8 size:0x002a C-string:'UNK_0xf1a8'
// 1899:      UNK_0xf1d4  codep:0x224c parp:0xf1d4 size:0x0016 C-string:'UNK_0xf1d4'
// 1900:        IDENT-IT  codep:0x4b3b parp:0xf1f7 size:0x001c C-string:'IDENT_dash_IT'
// 1901:        ITEM>PAD  codep:0x224c parp:0xf220 size:0x0024 C-string:'ITEM_gt_PAD'
// 1902:      UNK_0xf246  codep:0x224c parp:0xf246 size:0x000c C-string:'UNK_0xf246'
// 1903:      UNK_0xf254  codep:0x224c parp:0xf254 size:0x0006 C-string:'UNK_0xf254'
// 1904:      UNK_0xf25c  codep:0x224c parp:0xf25c size:0x0030 C-string:'UNK_0xf25c'
// 1905:      UNK_0xf28e  codep:0x224c parp:0xf28e size:0x005a C-string:'UNK_0xf28e'
// 1906:        BOX>LIST  codep:0x224c parp:0xf2f5 size:0x003c C-string:'BOX_gt_LIST'
// 1907:        GET-BOXE  codep:0x224c parp:0xf33e size:0x0016 C-string:'GET_dash_BOXE'
// 1908:        MAKE-SCR  codep:0x224c parp:0xf361 size:0x002c C-string:'MAKE_dash_SCR'
// 1909:        DELETE-S  codep:0x224c parp:0xf39a size:0x0016 C-string:'DELETE_dash_S'
// 1910:        CLASS>BO  codep:0x4b3b parp:0xf3bd size:0x001c C-string:'CLASS_gt_BO'
// 1911:      UNK_0xf3db  codep:0x224c parp:0xf3db size:0x000e C-string:'UNK_0xf3db'
// 1912:        BOX>TOCS  codep:0x224c parp:0xf3f6 size:0x000e C-string:'BOX_gt_TOCS'
// 1913:        ?ELEMENT  codep:0x224c parp:0xf411 size:0x002c C-string:'_ask_ELEMENT'
// 1914:            >BOX  codep:0x224c parp:0xf446 size:0x0082 C-string:'_gt_BOX'
// 1915:          (BOX>)  codep:0x224c parp:0xf4d3 size:0x0036 C-string:'_ro_BOX_gt__rc_'
// 1916:            BOX>  codep:0x224c parp:0xf512 size:0x0000 C-string:'BOX_gt_'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xef46[2] = {0x3a, 0x20}; // UNK_0xef46

const unsigned short int cc_UNK_0xeeb6 = 0x000a; // UNK_0xeeb6
const unsigned short int cc_UNK_0xeeba = 0x000f; // UNK_0xeeba
const unsigned short int cc_UNK_0xeebe = 0x0011; // UNK_0xeebe
const unsigned short int cc_UNK_0xeec2 = 0x000b; // UNK_0xeec2
const unsigned short int cc_UNK_0xeec6 = 0x0010; // UNK_0xeec6
const unsigned short int cc_UNK_0xeeca = 0x0037; // UNK_0xeeca
const unsigned short int cc_UNK_0xeece = 0x0036; // UNK_0xeece


// 0xee92: db 0x6d 0x00 0x94 0x73 0x1c 0x1d 0x01 0x20 0xcd 0x6b 'm  s     k'

// ================================================
// 0xee9c: WORD 'UNK_0xee9e' codep=0x7394 parp=0xee9e
// ================================================
// 0xee9e: db 0x1c 0x1e 0x01 0x20 0xcd 0x6b '     k'

// ================================================
// 0xeea4: WORD 'UNK_0xeea6' codep=0x7394 parp=0xeea6
// ================================================
// 0xeea6: db 0x09 0x00 0x20 0x1b 0x54 0x6a '    Tj'

// ================================================
// 0xeeac: WORD 'UNK_0xeeae' codep=0x7394 parp=0xeeae
// ================================================
// 0xeeae: db 0x09 0x18 0x02 0x1b 0x54 0x6a '    Tj'

// ================================================
// 0xeeb4: WORD 'UNK_0xeeb6' codep=0x2214 parp=0xeeb6
// ================================================
// 0xeeb6: db 0x0a 0x00 '  '

// ================================================
// 0xeeb8: WORD 'UNK_0xeeba' codep=0x2214 parp=0xeeba
// ================================================
// 0xeeba: db 0x0f 0x00 '  '

// ================================================
// 0xeebc: WORD 'UNK_0xeebe' codep=0x2214 parp=0xeebe
// ================================================
// 0xeebe: db 0x11 0x00 '  '

// ================================================
// 0xeec0: WORD 'UNK_0xeec2' codep=0x2214 parp=0xeec2
// ================================================
// 0xeec2: db 0x0b 0x00 '  '

// ================================================
// 0xeec4: WORD 'UNK_0xeec6' codep=0x2214 parp=0xeec6
// ================================================
// 0xeec6: db 0x10 0x00 '  '

// ================================================
// 0xeec8: WORD 'UNK_0xeeca' codep=0x2214 parp=0xeeca
// ================================================
// 0xeeca: db 0x37 0x00 '7 '

// ================================================
// 0xeecc: WORD 'UNK_0xeece' codep=0x2214 parp=0xeece
// ================================================
// 0xeece: db 0x36 0x00 '6 '

// ================================================
// 0xeed0: WORD 'UNK_0xeed2' codep=0x7394 parp=0xeed2
// ================================================
// 0xeed2: db 0x44 0x00 0x14 0x22 0x07 0x6f 'D  " o'

// ================================================
// 0xeed8: WORD 'UNK_0xeeda' codep=0x7394 parp=0xeeda
// ================================================
// 0xeeda: db 0x44 0x14 0x02 0x22 0x07 0x6f 0x94 0x73 0x44 0x1c 0x01 0x22 0x07 0x6f 'D  " o sD  " o'

// ================================================
// 0xeee8: WORD 'UNK_0xeeea' codep=0x224c parp=0xeeea
// ================================================

void UNK_0xeeea() // UNK_0xeeea
{
  SRDEPTH(); // SRDEPTH
  Push(0); // 0
  MAX(); // MAX
  Push(Pop()*2); // 2*
  PAD(); // PAD
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
}


// ================================================
// 0xeefa: WORD 'UNK_0xeefc' codep=0x224c parp=0xeefc
// ================================================

void UNK_0xeefc() // UNK_0xeefc
{
  PAD(); // PAD
  Push(Pop()+1); // 1+
  Push(0x0026);
  Push(cc_BL); // BL
  FILL(); // FILL
}


// ================================================
// 0xef0a: WORD 'UNK_0xef0c' codep=0x224c parp=0xef0c
// ================================================

void UNK_0xef0c() // UNK_0xef0c
{
  Push(pp_TIME_dash_PA); // TIME-PA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(pp_CTTOP); // CTTOP
  Push(Read16(Pop())); // @
  goto label2;

  label1:
  Push(0x0096);

  label2:
  Push(cc__7); // 7
  _dash_(); // -
  Push(cc__7); // 7
  SWAP(); // SWAP
  POS_dot_(); // POS.
}


// ================================================
// 0xef2c: WORD 'UNK_0xef2e' codep=0x224c parp=0xef2e
// ================================================

void UNK_0xef2e() // UNK_0xef2e
{
  Push(0x0025);
  OVER(); // OVER
  _dash_(); // -
  Push(Pop()*2); // 2*
  Push(cc__7); // 7
  Push(Pop() + Pop()); // +
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  Func14(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xef44: WORD 'UNK_0xef46' codep=0x1d29 parp=0xef46
// ================================================
// 0xef46: db 0x3a 0x20 ': '

// ================================================
// 0xef48: WORD 'UNK_0xef4a' codep=0x224c parp=0xef4a
// ================================================

void UNK_0xef4a() // UNK_0xef4a
{
  _at_CRS(); // @CRS
  CTERASE(); // CTERASE
  _gt_1FONT(); // >1FONT
  UNK_0xef0c(); // UNK_0xef0c
  Push(cc__3); // 3
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  PRINT("ATTENTION", 9); // (.")
  Push(cc__5); // 5
  SPACES(); // SPACES
  i++;
  } while(i<imax); // (LOOP) 0xffee

  GCR(); // GCR

  UNK_0x3f09("THE MANIFEST-COMPUTER CAPACITY HAS");
  UNK_0xef2e(); // UNK_0xef2e
  GCR(); // GCR

  UNK_0x3f09("BEEN EXCEEDED. SOME ITEMS MAY NOT");
  UNK_0xef2e(); // UNK_0xef2e
  GCR(); // GCR

  UNK_0x3f09("APPEAR IN THIS LIST.");
  UNK_0xef2e(); // UNK_0xef2e
  GCR(); // GCR

  UNK_0x3f09("PRESS SPACEBAR TO CONTINUE");
  UNK_0xef2e(); // UNK_0xef2e
  _ex_CRS(); // !CRS
}


// ================================================
// 0xeffd: WORD 'UNK_0xefff' codep=0x224c parp=0xefff
// ================================================

void UNK_0xefff() // UNK_0xefff
{
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(0x0031);
  _gt_(); // >
  if (Pop() == 0) return;
  Push(pp_UNK_0xef46); // UNK_0xef46
  ON(); // ON
  Push(0x03e8);
  MS(); // MS
  _i_KEY(); // 'KEY
  Pop(); // DROP
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  UNK_0xef4a(); // UNK_0xef4a
  KEY(); // KEY
  Pop(); // DROP
  CTERASE(); // CTERASE
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xf02b: WORD 'UNK_0xf02d' codep=0x224c parp=0xf02d
// ================================================

void UNK_0xf02d() // UNK_0xf02d
{
  UNK_0xeefc(); // UNK_0xeefc
  LoadData("BOX-NAM"); // from 'BOX         '
  UNK_0xeeea(); // UNK_0xeeea
  Push(0x0010);
  CMOVE(); // CMOVE
}


// ================================================
// 0xf03b: WORD 'UNK_0xf03d' codep=0x224c parp=0xf03d
// ================================================

void UNK_0xf03d() // UNK_0xf03d
{
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  _eq_(); // =
}


// ================================================
// 0xf047: WORD 'UNK_0xf049' codep=0x224c parp=0xf049
// ================================================

void UNK_0xf049() // UNK_0xf049
{
  SWAP(); // SWAP
  Pop(); // DROP

  UNK_0x3f09("??-??-????");
  Pop(); // DROP
  Push(Pop()-1); // 1-
  SWAP(); // SWAP
  _do__ex_(); // $!
}


// ================================================
// 0xf064: WORD 'UNK_0xf066' codep=0x224c parp=0xf066
// ================================================

void UNK_0xf066() // UNK_0xf066
{
  Push(0x000a);
  _slash_MOD(); // /MOD
  SWAP(); // SWAP
  U_gt__do_(); // U>$
  Pop(); // DROP
  Push(Read8(Pop())&0xFF); // C@
  PAD(); // PAD
  Push(0x0020);
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  Push(0x002e);
  PAD(); // PAD
  Push(0x001f);
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  U_gt__do_(); // U>$
  PAD(); // PAD
  Push(0x001f);
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  UNK_0xf03d(); // UNK_0xf03d
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(0x65f4); // IFIELD(ASKING)
  Push(Read16(Pop())); // @

  label1:
  Push(pp__pe_VAL); // %VAL
  Push(Read16(Pop())); // @
  U_star_(); // U*
  Push(0x0064);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  U_gt__do_(); // U>$
  PAD(); // PAD
  Push(0x0026);
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(Pop()-1); // 1-
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE(); // CMOVE
}


// ================================================
// 0xf0d0: WORD 'UNK_0xf0d2' codep=0x224c parp=0xf0d2
// ================================================

void UNK_0xf0d2() // UNK_0xf0d2
{
  LoadData("UNK_0xeed2"); // from 'CREATURE    '
  UNK_0xeeea(); // UNK_0xeeea
  Push(0x0014);
  CMOVE(); // CMOVE
  LoadData("UNK_0xeeda"); // from 'CREATURE    '
  Push(Read16(Pop())); // @
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  UNK_0xf066(); // UNK_0xf066
}


// ================================================
// 0xf0e8: WORD 'UNK_0xf0ea' codep=0x224c parp=0xf0ea
// ================================================

void UNK_0xf0ea() // UNK_0xf0ea
{
  Push(pp_ITEM); // ITEM
  _at__gt_C_plus_S(); // @>C+S
  LoadData("UNK_0xee9e"); // from 'ARTIFACT    '
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()-1); // 1-
  if (Pop() == 0) goto label1;
  Push(cc_UNK_0xeeca); // UNK_0xeeca
  goto label2;

  label1:
  Push(cc_UNK_0xeeba); // UNK_0xeeba

  label2:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf104: WORD 'UNK_0xf106' codep=0x224c parp=0xf106
// ================================================

void UNK_0xf106() // UNK_0xf106
{
  LoadData("ELEM-NA"); // from 'ELEMENT     '
  UNK_0xeeea(); // UNK_0xeeea
  Push(0x0010);
  CMOVE(); // CMOVE
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  LoadData("ELEM-VA"); // from 'ELEMENT     '
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  UNK_0xf066(); // UNK_0xf066
}


// ================================================
// 0xf11e: WORD 'DATE$>AD' codep=0x224c parp=0xf12b
// ================================================

void DATE_do__gt_AD() // DATE$>AD
{
  OVER(); // OVER
  Push(cc__dash_1); // -1
  _eq_(); // =
  if (Pop() == 0) goto label1;
  UNK_0xf049(); // UNK_0xf049
  return;

  label1:

  UNK_0x3f09("00-00-");
  Push(cc__3); // 3
  PICK(); // PICK
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  SWAP(); // SWAP
  Push(0x012c);
  _slash_MOD(); // /MOD
  Push(0x121f);
  Push(Pop() + Pop()); // +
  U_gt__do_(); // U>$
  Push(cc__4); // 4
  PICK(); // PICK
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  Push(0x001e);
  _slash_MOD(); // /MOD
  Push(Pop()+1); // 1+
  U_gt__do_(); // U>$
  Push(cc__4); // 4
  PICK(); // PICK
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(Pop()-1); // 1-
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  Push(Pop()+1); // 1+
  U_gt__do_(); // U>$
  ROT(); // ROT
  Push(Pop()+1); // 1+
  OVER(); // OVER
  Push(Pop()-1); // 1-
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE(); // CMOVE
}


// ================================================
// 0xf198: WORD 'UNK_0xf19a' codep=0x224c parp=0xf19a
// ================================================

void UNK_0xf19a() // UNK_0xf19a
{
  UNK_0xeefc(); // UNK_0xeefc
  Push(0x65f4); // IFIELD(INST-DA)
  Push(Read16(Pop())); // @
  UNK_0xeeea(); // UNK_0xeeea
  DATE_do__gt_AD(); // DATE$>AD
}


// ================================================
// 0xf1a6: WORD 'UNK_0xf1a8' codep=0x224c parp=0xf1a8
// ================================================

void UNK_0xf1a8() // UNK_0xf1a8
{
  LoadData("ART-NAM"); // from 'ARTIFACT    '
  UNK_0xeeea(); // UNK_0xeeea
  Push(0x0018);
  CMOVE(); // CMOVE
  LoadData("ART-VAL"); // from 'ARTIFACT    '
  Push(Read16(Pop())); // @
  LoadData("UNK_0xee9e"); // from 'ARTIFACT    '
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()-1); // 1-
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  LoadData("ART-VOL"); // from 'ARTIFACT    '
  Push(Read16(Pop())); // @
  goto label2;

  label1:
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @

  label2:
  UNK_0xf066(); // UNK_0xf066
}


// ================================================
// 0xf1d2: WORD 'UNK_0xf1d4' codep=0x224c parp=0xf1d4
// ================================================

void UNK_0xf1d4() // UNK_0xf1d4
{
  LoadData("UNK_0xeea6"); // from 'STIS        '
  UNK_0xeeea(); // UNK_0xeeea
  Push(0x0018);
  CMOVE(); // CMOVE
  LoadData("UNK_0xeeae"); // from 'STIS        '
  Push(Read16(Pop())); // @
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  UNK_0xf066(); // UNK_0xf066
}


// ================================================
// 0xf1ea: WORD 'IDENT-IT' codep=0x4b3b parp=0xf1f7
// ================================================
// 0xf1f7: db 0x06 0x00 0x6e 0x3a 0x0b 0x00 0x2d 0xf0 0x09 0x00 0xd4 0xf1 0x1a 0x00 0x06 0xf1 0x1b 0x00 0x9a 0xf1 0x1c 0x00 0xa8 0xf1 0x44 0x00 0xd2 0xf0 '  n:  -                 D   '

// ================================================
// 0xf213: WORD 'ITEM>PAD' codep=0x224c parp=0xf220
// ================================================

void ITEM_gt_PAD() // ITEM>PAD
{
  UNK_0xeefc(); // UNK_0xeefc
  UNK_0xeeea(); // UNK_0xeeea
  PAD(); // PAD
  Push(0x001e);
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  _dash_(); // -
  Push(0x002e);
  FILL(); // FILL
  Push(0x0026);
  PAD(); // PAD
  C_ex_(); // C!
  _at_INST_dash_C(); // @INST-C
  Pop();
  switch(Pop()) // IDENT-IT
  {
  case 11:
    UNK_0xf02d(); // UNK_0xf02d
    break;
  case 9:
    UNK_0xf1d4(); // UNK_0xf1d4
    break;
  case 26:
    UNK_0xf106(); // UNK_0xf106
    break;
  case 27:
    UNK_0xf19a(); // UNK_0xf19a
    break;
  case 28:
    UNK_0xf1a8(); // UNK_0xf1a8
    break;
  case 68:
    UNK_0xf0d2(); // UNK_0xf0d2
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}


// ================================================
// 0xf244: WORD 'UNK_0xf246' codep=0x224c parp=0xf246
// ================================================

void UNK_0xf246() // UNK_0xf246
{
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf252: WORD 'UNK_0xf254' codep=0x224c parp=0xf254
// ================================================

void UNK_0xf254() // UNK_0xf254
{
  _at_INST_dash_C(); // @INST-C
  _eq_(); // =
}


// ================================================
// 0xf25a: WORD 'UNK_0xf25c' codep=0x224c parp=0xf25c
// ================================================

void UNK_0xf25c() // UNK_0xf25c
{
  Push(0x000b);
  UNK_0xf254(); // UNK_0xf254
  if (Pop() == 0) goto label1;
  Push(cc_UNK_0xeebe); // UNK_0xeebe
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xf246(); // UNK_0xf246
  Push(Pop() | Pop()); // OR
  return;

  label1:
  Push(0x001b);
  UNK_0xf254(); // UNK_0xf254
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xf246(); // UNK_0xf246
  Push(Pop() | Pop()); // OR
  Push(0x0035);
  UNK_0xf254(); // UNK_0xf254
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf28c: WORD 'UNK_0xf28e' codep=0x224c parp=0xf28e
// ================================================

void UNK_0xf28e() // UNK_0xf28e
{
  Push(cc__3); // 3
  PICK(); // PICK
  Push(cc__3); // 3
  PICK(); // PICK
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_C(); // @INST-C
  Push(0x000b);
  _eq_(); // =
  ICLOSE(); // ICLOSE
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(0x0032);
  _st_(); // <
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(pp__ro_SCROLL); // (SCROLL
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x0038);
  Push(0); // 0
  Push(1); // 1
  _star_CREATE(); // *CREATE
  Push(0x65f2); // IFIELD(TEXT-TE)
  Push(0x0026);
  CMOVE(); // CMOVE
  Push(0x65ef); // IFIELD(TEXT-IN)
  _1_dot_5_ex_(); // 1.5!
  Push(0x65ec); // IFIELD(TEXT-CO)
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE
  Push(1); // 1
  Push(pp_SCROLL_dash_); // SCROLL-
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
  return;

  label1:
  Pop(); Pop();// 2DROP
  Pop(); Pop();// 2DROP
  Pop(); // DROP
}


// ================================================
// 0xf2e8: WORD 'BOX>LIST' codep=0x224c parp=0xf2f5
// ================================================

void BOX_gt_LIST() // BOX>LIST
{
  SUBROOT(); // SUBROOT
  CI(); // CI

  label2:
  UNK_0xf25c(); // UNK_0xf25c
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(0x0032);
  _st_(); // <
  _at_INST_dash_C(); // @INST-C
  Push(0x000b);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  CI_i_(); // CI'
  CI(); // CI
  ITEM_gt_PAD(); // ITEM>PAD
  PAD(); // PAD
  Push(Pop()+1); // 1+
  UNK_0xf28e(); // UNK_0xf28e

  label1:
  NEXT_dash_NO(); // NEXT-NO
  _2DUP(); // 2DUP
  CI(); // CI
  D_eq_(); // D=
  if (Pop() == 0) goto label2;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xf331: WORD 'GET-BOXE' codep=0x224c parp=0xf33e
// ================================================

void GET_dash_BOXE() // GET-BOXE
{
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN

  label1:
  BOX_gt_LIST(); // BOX>LIST
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label1;
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  UNK_0xefff(); // UNK_0xefff
}


// ================================================
// 0xf354: WORD 'MAKE-SCR' codep=0x224c parp=0xf361
// ================================================

void MAKE_dash_SCR() // MAKE-SCR
{
  Push(pp_UNK_0xef46); // UNK_0xef46
  _099(); // 099
  Push2Words("FRAGMEN");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x0038);
  Push(1); // 1
  _star_CREATE(); // *CREATE
  CI(); // CI
  Push(pp__ro_SCROLL); // (SCROLL
  _1_dot_5_ex_(); // 1.5!
  CI_i_(); // CI'
  Push(pp__ro_SCROLL); // (SCROLL
  _1_dot_5_ex_(); // 1.5!
  Push(pp_SCROLL_dash_); // SCROLL-
  _099(); // 099
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf38d: WORD 'DELETE-S' codep=0x224c parp=0xf39a
// ================================================

void DELETE_dash_S() // DELETE-S
{
  Push(pp__ro_SCROLL); // (SCROLL
  _1_dot_5_at_(); // 1.5@
  _gt_C(); // >C
  Push(pp__ro_SCROLL); // (SCROLL
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_(); // >C+
  SET_dash_CUR(); // SET-CUR
  IDELETE(); // IDELETE
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3b0: WORD 'CLASS>BO' codep=0x4b3b parp=0xf3bd
// ================================================
// 0xf3bd: db 0x06 0x00 0x6e 0x3a 0x09 0x00 0xce 0xee 0x1a 0x00 0xb6 0xee 0x1c 0x00 0xea 0xf0 0x29 0x00 0xc6 0xee 0x1b 0x00 0xbe 0xee 0x44 0x00 0xc2 0xee '  n:            )       D   '

// ================================================
// 0xf3d9: WORD 'UNK_0xf3db' codep=0x224c parp=0xf3db
// ================================================

void UNK_0xf3db() // UNK_0xf3db
{
  Pop();
  switch(Pop()) // CLASS>BO
  {
  case 9:
    UNK_0xeece(); // UNK_0xeece
    break;
  case 26:
    UNK_0xeeb6(); // UNK_0xeeb6
    break;
  case 28:
    UNK_0xf0ea(); // UNK_0xf0ea
    break;
  case 41:
    UNK_0xeec6(); // UNK_0xeec6
    break;
  case 27:
    UNK_0xeebe(); // UNK_0xeebe
    break;
  case 68:
    UNK_0xeec2(); // UNK_0xeec2
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
  Push(0x000b);
  SWAP(); // SWAP
  Push(1); // 1
  _star_CREATE(); // *CREATE
}


// ================================================
// 0xf3e9: WORD 'BOX>TOCS' codep=0x224c parp=0xf3f6
// ================================================

void BOX_gt_TOCS() // BOX>TOCS
{
  Pop();
  switch(Pop()) // CLASS>BO
  {
  case 9:
    UNK_0xeece(); // UNK_0xeece
    break;
  case 26:
    UNK_0xeeb6(); // UNK_0xeeb6
    break;
  case 28:
    UNK_0xf0ea(); // UNK_0xf0ea
    break;
  case 41:
    UNK_0xeec6(); // UNK_0xeec6
    break;
  case 27:
    UNK_0xeebe(); // UNK_0xeebe
    break;
  case 68:
    UNK_0xeec2(); // UNK_0xeec2
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
  Push(0x000b);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
}


// ================================================
// 0xf404: WORD '?ELEMENT' codep=0x224c parp=0xf411
// ================================================

void _ask_ELEMENT() // ?ELEMENT
{
  _at_INST_dash_C(); // @INST-C
  Push(0x001c);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  LoadData("UNK_0xee9e"); // from 'ARTIFACT    '
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()-1); // 1-
  return;

  label1:
  _at_INST_dash_C(); // @INST-C
  Push(0x001b);
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(cc_FALSE); // FALSE
  return;

  label2:
  Push(cc_TRUE); // TRUE
}


// ================================================
// 0xf43d: WORD '>BOX' codep=0x224c parp=0xf446
// ================================================

void _gt_BOX() // >BOX
{
  _2DUP(); // 2DUP
  Push(pp_ITEM); // ITEM
  _1_dot_5_ex_(); // 1.5!
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_C(); // @INST-C
  _gt_R(); // >R
  ICLOSE(); // ICLOSE
  IOPEN(); // IOPEN
  Push(h); // I
  Pop();
  switch(Pop()) // CLASS>BO
  {
  case 9:
    UNK_0xeece(); // UNK_0xeece
    break;
  case 26:
    UNK_0xeeb6(); // UNK_0xeeb6
    break;
  case 28:
    UNK_0xf0ea(); // UNK_0xf0ea
    break;
  case 41:
    UNK_0xeec6(); // UNK_0xeec6
    break;
  case 27:
    UNK_0xeebe(); // UNK_0xeebe
    break;
  case 68:
    UNK_0xeec2(); // UNK_0xeec2
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
  Push(0x000b);
  SWAP(); // SWAP
  IFIND(); // IFIND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(h); // I
  UNK_0xf3db(); // UNK_0xf3db

  label1:
  R_gt_(); // R>
  BOX_gt_TOCS(); // BOX>TOCS
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_S(); // @INST-S
  _at_INST_dash_C(); // @INST-C
  _ask_ELEMENT(); // ?ELEMENT
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label2;
  OVER(); // OVER
  IOPEN(); // IOPEN
  IFIND(); // IFIND
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label3;
  IOPEN(); // IOPEN

  label4:
  Push(Read16(sp)); // DUP
  INEXT(); // INEXT
  _at_INST_dash_S(); // @INST-S
  _eq_(); // =
  if (Pop() == 0) goto label4;
  Pop(); // DROP
  _gt_C_plus_S(); // >C+S
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  CI(); // CI
  ICLOSE(); // ICLOSE
  _gt_INACTI(); // >INACTI
  Push(0x65ec); // IFIELD(INST-QT)
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
  goto label5;

  label3:
  Pop(); // DROP
  CI(); // CI
  IINSERT(); // IINSERT

  label5:
  goto label6;

  label2:
  Pop(); Pop();// 2DROP
  CI(); // CI
  IINSERT(); // IINSERT

  label6:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4c8: WORD '(BOX>)' codep=0x224c parp=0xf4d3
// ================================================

void _ro_BOX_gt__rc_() // (BOX>)
{
  _ask_ELEMENT(); // ?ELEMENT
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  Push(-Pop()); // NEGATE
  Push(0x65ec); // IFIELD(INST-QT)
  _plus__ex_(); // +!
  _at_INST_dash_C(); // @INST-C
  _at_INST_dash_S(); // @INST-S
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  Push(0x65ec); // IFIELD(INST-QT)
  _ex_(); // !
  C_gt_(); // C>
  return;

  label1:
  IEXTRAC(); // IEXTRAC
}


// ================================================
// 0xf509: WORD 'BOX>' codep=0x224c parp=0xf512
// ================================================

void BOX_gt_() // BOX>
{
  _ro_BOX_gt__rc_(); // (BOX>)
  CI(); // CI
  D0_eq_(); // D0=
  if (Pop() == 0) goto label1;
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
  CI(); // CI
  D0_eq_(); // D0=
  if (Pop() == 0) goto label2;
  ICLOSE(); // ICLOSE

  label2:
  Push(1); // 1
  goto label3;

  label1:
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_C(); // @INST-C
  Push(0x001a);
  _eq_(); // =
  _at_INST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
  _at_INST_dash_S(); // @INST-S
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND

  label3:
  ROT(); // ROT
  ROT(); // ROT
}

// 0xf54e: db 0x49 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'IT-VOC____________ '
  