// ====== OVERLAY 'DRONE' ======
// store offset = 0xebe0
// overlay size   = 0x0980

#include"cpu.h"
#include"starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0xad03 C-string:'UNK_0x3f09'
// 1870:      UNK_0xec0e  codep:0x7394 parp:0xec0e size:0x0006 C-string:'UNK_0xec0e'
// 1871:      UNK_0xec16  codep:0x224c parp:0xec16 size:0x0008 C-string:'UNK_0xec16'
// 1872:      UNK_0xec20  codep:0x1d29 parp:0xec20 size:0x0008 C-string:'UNK_0xec20'
// 1873:      UNK_0xec2a  codep:0x224c parp:0xec2a size:0x0022 C-string:'UNK_0xec2a'
// 1874:      UNK_0xec4e  codep:0x224c parp:0xec4e size:0x0010 C-string:'UNK_0xec4e'
// 1875:      UNK_0xec60  codep:0x224c parp:0xec60 size:0x002e C-string:'UNK_0xec60'
// 1876:      UNK_0xec90  codep:0x224c parp:0xec90 size:0x0010 C-string:'UNK_0xec90'
// 1877:      UNK_0xeca2  codep:0x224c parp:0xeca2 size:0x004d C-string:'UNK_0xeca2'
// 1878:      UNK_0xecf1  codep:0x224c parp:0xecf1 size:0x002c C-string:'UNK_0xecf1'
// 1879:      UNK_0xed1f  codep:0x224c parp:0xed1f size:0x0010 C-string:'UNK_0xed1f'
// 1880:      UNK_0xed31  codep:0x224c parp:0xed31 size:0x0032 C-string:'UNK_0xed31'
// 1881:      UNK_0xed65  codep:0x224c parp:0xed65 size:0x0008 C-string:'UNK_0xed65'
// 1882:      UNK_0xed6f  codep:0x1d29 parp:0xed6f size:0x0003 C-string:'UNK_0xed6f'
// 1883:      UNK_0xed74  codep:0x224c parp:0xed74 size:0x0008 C-string:'UNK_0xed74'
// 1884:      UNK_0xed7e  codep:0x224c parp:0xed7e size:0x0006 C-string:'UNK_0xed7e'
// 1885:      UNK_0xed86  codep:0x224c parp:0xed86 size:0x0008 C-string:'UNK_0xed86'
// 1886:      UNK_0xed90  codep:0x224c parp:0xed90 size:0x0012 C-string:'UNK_0xed90'
// 1887:      UNK_0xeda4  codep:0x224c parp:0xeda4 size:0x0012 C-string:'UNK_0xeda4'
// 1888:      UNK_0xedb8  codep:0x1d29 parp:0xedb8 size:0x0003 C-string:'UNK_0xedb8'
// 1889:      UNK_0xedbd  codep:0x224c parp:0xedbd size:0x0008 C-string:'UNK_0xedbd'
// 1890:      UNK_0xedc7  codep:0x224c parp:0xedc7 size:0x0006 C-string:'UNK_0xedc7'
// 1891:      UNK_0xedcf  codep:0x224c parp:0xedcf size:0x0012 C-string:'UNK_0xedcf'
// 1892:      UNK_0xede3  codep:0x224c parp:0xede3 size:0x0012 C-string:'UNK_0xede3'
// 1893:      UNK_0xedf7  codep:0x224c parp:0xedf7 size:0x0020 C-string:'UNK_0xedf7'
// 1894:      UNK_0xee19  codep:0x224c parp:0xee19 size:0x000a C-string:'UNK_0xee19'
// 1895:      UNK_0xee25  codep:0x224c parp:0xee25 size:0x0008 C-string:'UNK_0xee25'
// 1896:      UNK_0xee2f  codep:0x224c parp:0xee2f size:0x002a C-string:'UNK_0xee2f'
// 1897:      UNK_0xee5b  codep:0x224c parp:0xee5b size:0x0016 C-string:'UNK_0xee5b'
// 1898:      UNK_0xee73  codep:0x224c parp:0xee73 size:0x001c C-string:'UNK_0xee73'
// 1899:      UNK_0xee91  codep:0x224c parp:0xee91 size:0x000e C-string:'UNK_0xee91'
// 1900:      UNK_0xeea1  codep:0x224c parp:0xeea1 size:0x002a C-string:'UNK_0xeea1'
// 1901:      UNK_0xeecd  codep:0x224c parp:0xeecd size:0x000a C-string:'UNK_0xeecd'
// 1902:      UNK_0xeed9  codep:0x224c parp:0xeed9 size:0x000a C-string:'UNK_0xeed9'
// 1903:      UNK_0xeee5  codep:0x224c parp:0xeee5 size:0x0012 C-string:'UNK_0xeee5'
// 1904:      UNK_0xeef9  codep:0x224c parp:0xeef9 size:0x001a C-string:'UNK_0xeef9'
// 1905:      UNK_0xef15  codep:0x224c parp:0xef15 size:0x0016 C-string:'UNK_0xef15'
// 1906:      UNK_0xef2d  codep:0x224c parp:0xef2d size:0x0020 C-string:'UNK_0xef2d'
// 1907:         TD-SCRO  codep:0x4b3b parp:0xef59 size:0x000c C-string:'TD_dash_SCRO'
// 1908:      UNK_0xef67  codep:0x224c parp:0xef67 size:0x001c C-string:'UNK_0xef67'
// 1909:      UNK_0xef85  codep:0x224c parp:0xef85 size:0x0026 C-string:'UNK_0xef85'
// 1910:      UNK_0xefad  codep:0x224c parp:0xefad size:0x000c C-string:'UNK_0xefad'
// 1911:      UNK_0xefbb  codep:0x224c parp:0xefbb size:0x000c C-string:'UNK_0xefbb'
// 1912:      UNK_0xefc9  codep:0x224c parp:0xefc9 size:0x000c C-string:'UNK_0xefc9'
// 1913:      UNK_0xefd7  codep:0x224c parp:0xefd7 size:0x000c C-string:'UNK_0xefd7'
// 1914:            ACT#  codep:0x1d29 parp:0xefec size:0x0002 C-string:'ACT_n_'
// 1915:      UNK_0xeff0  codep:0x224c parp:0xeff0 size:0x000a C-string:'UNK_0xeff0'
// 1916:      UNK_0xeffc  codep:0x224c parp:0xeffc size:0x002c C-string:'UNK_0xeffc'
// 1917:      UNK_0xf02a  codep:0x224c parp:0xf02a size:0x0010 C-string:'UNK_0xf02a'
// 1918:      UNK_0xf03c  codep:0x224c parp:0xf03c size:0x000c C-string:'UNK_0xf03c'
// 1919:      UNK_0xf04a  codep:0x224c parp:0xf04a size:0x0016 C-string:'UNK_0xf04a'
// 1920:      UNK_0xf062  codep:0x224c parp:0xf062 size:0x0016 C-string:'UNK_0xf062'
// 1921:         ACT-SCR  codep:0x4b3b parp:0xf084 size:0x000c C-string:'ACT_dash_SCR'
// 1922:      UNK_0xf092  codep:0x224c parp:0xf092 size:0x0018 C-string:'UNK_0xf092'
// 1923:         ACTION?  codep:0x224c parp:0xf0b6 size:0x0006 C-string:'ACTION_ask_'
// 1924:      UNK_0xf0be  codep:0x224c parp:0xf0be size:0x0004 C-string:'UNK_0xf0be'
// 1925:      UNK_0xf0c4  codep:0x224c parp:0xf0c4 size:0x0004 C-string:'UNK_0xf0c4'
// 1926:         #>ACTIO  codep:0x4b3b parp:0xf0d4 size:0x0010 C-string:'_n__gt_ACTIO'
// 1927:      UNK_0xf0e6  codep:0x1d29 parp:0xf0e6 size:0x0052 C-string:'UNK_0xf0e6'
// 1928:      UNK_0xf13a  codep:0x1d29 parp:0xf13a size:0x0015 C-string:'UNK_0xf13a'
// 1929:         10!TIME  codep:0xf144 parp:0xf15b size:0x0001 C-string:'_10_ex_TIME'
// 1930:         20!TIME  codep:0xf144 parp:0xf168 size:0x0001 C-string:'_20_ex_TIME'
// 1931:         30!TIME  codep:0xf144 parp:0xf175 size:0x0001 C-string:'_30_ex_TIME'
// 1932:          5!TIME  codep:0xf144 parp:0xf181 size:0x0001 C-string:'_5_ex_TIME'
// 1933:          7!TIME  codep:0xf144 parp:0xf18d size:0x0001 C-string:'_7_ex_TIME'
// 1934:         13!TIME  codep:0xf144 parp:0xf19a size:0x0001 C-string:'_13_ex_TIME'
// 1935:          3!TIME  codep:0xf144 parp:0xf1a6 size:0x0001 C-string:'_3_ex_TIME'
// 1936:      UNK_0xf1a9  codep:0x224c parp:0xf1a9 size:0x0028 C-string:'UNK_0xf1a9'
// 1937:         (TIMER)  codep:0xaccc parp:0xf1dd size:0x0044 C-string:'_ro_TIMER_rc_'
// 1938:      UNK_0xf223  codep:0x224c parp:0xf223 size:0x0012 C-string:'UNK_0xf223'
// 1939:           TIMES  codep:0x1d29 parp:0xf23f size:0x0030 C-string:'TIMES'
// 1940:      UNK_0xf271  codep:0x224c parp:0xf271 size:0x000a C-string:'UNK_0xf271'
// 1941:      UNK_0xf27d  codep:0x224c parp:0xf27d size:0x000a C-string:'UNK_0xf27d'
// 1942:      UNK_0xf289  codep:0x224c parp:0xf289 size:0x0040 C-string:'UNK_0xf289'
// 1943:      UNK_0xf2cb  codep:0x224c parp:0xf2cb size:0x0020 C-string:'UNK_0xf2cb'
// 1944:      UNK_0xf2ed  codep:0x224c parp:0xf2ed size:0x002e C-string:'UNK_0xf2ed'
// 1945:      UNK_0xf31d  codep:0x224c parp:0xf31d size:0x001e C-string:'UNK_0xf31d'
// 1946:      UNK_0xf33d  codep:0x224c parp:0xf33d size:0x0012 C-string:'UNK_0xf33d'
// 1947:      UNK_0xf351  codep:0x224c parp:0xf351 size:0x0032 C-string:'UNK_0xf351'
// 1948:      UNK_0xf385  codep:0x224c parp:0xf385 size:0x0018 C-string:'UNK_0xf385'
// 1949:      UNK_0xf39f  codep:0x224c parp:0xf39f size:0x0008 C-string:'UNK_0xf39f'
// 1950:      UNK_0xf3a9  codep:0x224c parp:0xf3a9 size:0x001e C-string:'UNK_0xf3a9'
// 1951:      UNK_0xf3c9  codep:0x224c parp:0xf3c9 size:0x002e C-string:'UNK_0xf3c9'
// 1952:      UNK_0xf3f9  codep:0x224c parp:0xf3f9 size:0x0074 C-string:'UNK_0xf3f9'
// 1953:      UNK_0xf46f  codep:0x224c parp:0xf46f size:0x0020 C-string:'UNK_0xf46f'
// 1954:          RECALL  codep:0x224c parp:0xf49a size:0x002c C-string:'RECALL'
// 1955:           DRONE  codep:0x224c parp:0xf4d0 size:0x0000 C-string:'DRONE'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xec20[8] = {0x00, 0x00, 0x7e, 0xff, 0x5a, 0x3c, 0x42, 0xe7}; // UNK_0xec20
unsigned char UNK_0xed6f[3] = {0x3a, 0x20, 0x05}; // UNK_0xed6f
unsigned char UNK_0xedb8[3] = {0x3a, 0x20, 0x05}; // UNK_0xedb8
unsigned char ACT_n_[2] = {0x01, 0x00}; // ACT#
unsigned char UNK_0xf0e6[82] = {0x3a, 0x20, 0x4c, 0x22, 0xaf, 0x64, 0x2f, 0x7a, 0x90, 0x16, 0x4c, 0x22, 0xe8, 0xf0, 0xf4, 0xeb, 0x92, 0x0c, 0xdf, 0x79, 0x90, 0x16, 0x4c, 0x22, 0xe8, 0xf0, 0xfc, 0xeb, 0x92, 0x0c, 0xdf, 0x79, 0x90, 0x16, 0x4c, 0x22, 0xe8, 0xf0, 0x04, 0xec, 0x92, 0x0c, 0xdf, 0x79, 0x90, 0x16, 0x4c, 0x22, 0xe4, 0xf0, 0xae, 0x0b, 0xf0, 0xf0, 0x5f, 0x12, 0x90, 0x16, 0x4c, 0x22, 0xe4, 0xf0, 0xae, 0x0b, 0xfc, 0xf0, 0x5f, 0x12, 0x90, 0x16, 0x4c, 0x22, 0xe4, 0xf0, 0xae, 0x0b, 0x08, 0xf1, 0x5f, 0x12, 0x90, 0x16}; // UNK_0xf0e6
unsigned char UNK_0xf13a[21] = {0x3a, 0x20, 0x4c, 0x22, 0x4f, 0x06, 0xaf, 0x21, 0xfa, 0x1b, 0xe8, 0x02, 0x25, 0x92, 0x0c, 0x38, 0xf1, 0x16, 0x6d, 0x90, 0x16}; // UNK_0xf13a
unsigned char TIMES[48] = {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x4e, 0x54, 0x53, 0x20, 0x01, 0x00, 0x00, 0x1a, 0x06, 0x00, 0x00, 0x33, 0x07, 0x00, 0x00, 0x64, 0x08, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x1f, 0x02, 0x00, 0x00, 0x2e, 0x03, 0x00, 0x00, 0x3d, 0x04, 0x00, 0x00, 0x64, 0x05, 0x00, 0x00, 0x10, 0x06}; // TIMES



// 0xebf2: db 0x98 0x00 0x94 0x73 0x20 0x0c 0x01 0x17 0x49 0x6c 0x94 0x73 0x20 0x0d 0x01 0x17 0x49 0x6c 0x94 0x73 0x20 0x0e 0x01 0x17 0x49 0x6c '   s    Il s    Il s    Il'

// ================================================
// 0xec0c: WORD 'UNK_0xec0e' codep=0x7394 parp=0xec0e
// ================================================
// 0xec0e: db 0x20 0x09 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xec14: WORD 'UNK_0xec16' codep=0x224c parp=0xec16
// ================================================

void UNK_0xec16() // UNK_0xec16
{
  Push(0x0018);
  Push(1); // 1
}


// ================================================
// 0xec1e: WORD 'UNK_0xec20' codep=0x1d29 parp=0xec20
// ================================================
// 0xec20: db 0x00 0x00 0x7e 0xff 0x5a 0x3c 0x42 0xe7 '  ~ Z<B '

// ================================================
// 0xec28: WORD 'UNK_0xec2a' codep=0x224c parp=0xec2a
// ================================================

void UNK_0xec2a() // UNK_0xec2a
{
  Push(cc__8); // 8
  Push(pp_LBLT); // LBLT
  _st__ex__gt_(); // <!>
  Push(cc__8); // 8
  Push(pp_WBLT); // WBLT
  _st__ex__gt_(); // <!>
  Push(pp_UNK_0xec20); // UNK_0xec20
  Push(pp_ABLT); // ABLT
  _st__ex__gt_(); // <!>
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _st__ex__gt_(); // <!>
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
}


// ================================================
// 0xec4c: WORD 'UNK_0xec4e' codep=0x224c parp=0xec4e
// ================================================

void UNK_0xec4e() // UNK_0xec4e
{
  _gt_MAINVI(); // >MAINVI
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  _dot_BACKGR(); // .BACKGR
  _dot_LOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xec5e: WORD 'UNK_0xec60' codep=0x224c parp=0xec60
// ================================================

void UNK_0xec60() // UNK_0xec60
{
  _gt_MAINVI(); // >MAINVI
  _dot_BACKGR(); // .BACKGR
  UNK_0xec2a(); // UNK_0xec2a
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  WLD_gt_SCR(); // WLD>SCR
  Push(pp_YBLT); // YBLT
  _ex_(); // !
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  BLT(); // BLT
  _dot_LOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xec8e: WORD 'UNK_0xec90' codep=0x224c parp=0xec90
// ================================================

void UNK_0xec90() // UNK_0xec90
{
  Push(1); // 1
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xeca0: WORD 'UNK_0xeca2' codep=0x224c parp=0xeca2
// ================================================

void UNK_0xeca2() // UNK_0xeca2
{
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT

  UNK_0x3f09("(F2) OR LAUNCH TO RECALL DRONE");
  _dot_TTY(); // .TTY
  Push(0x07d0);
  MS(); // MS
  UNK_0xec90(); // UNK_0xec90
  UNK_0xec90(); // UNK_0xec90
  Push(cc__7); // 7
  Push(1); // 1

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(i); // I
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  UNK_0xec60(); // UNK_0xec60
  i++;
  } while(i<imax); // (LOOP) 0xfff0

  Pop(); Pop();// 2DROP
}


// ================================================
// 0xecef: WORD 'UNK_0xecf1' codep=0x224c parp=0xecf1
// ================================================

void UNK_0xecf1() // UNK_0xecf1
{
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xec90(); // UNK_0xec90
  UNK_0xec90(); // UNK_0xec90
  Push(0); // 0
  Push(cc__5); // 5

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(i); // I
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  UNK_0xec60(); // UNK_0xec60
  Push(cc__dash_1); // -1
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffee

  Pop(); Pop();// 2DROP
}


// ================================================
// 0xed1d: WORD 'UNK_0xed1f' codep=0x224c parp=0xed1f
// ================================================

void UNK_0xed1f() // UNK_0xed1f
{
  _gt_C_plus_S(); // >C+S
  Push(0x65ec); // IFIELD(PHRASE$)
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed2f: WORD 'UNK_0xed31' codep=0x224c parp=0xed31
// ================================================

void UNK_0xed31() // UNK_0xed31
{
  _gt_R(); // >R
  _at_CRS(); // @CRS
  Push(cc__3); // 3
  R_gt_(); // R>
  POS_dot_(); // POS.
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  _st__ex__gt_(); // <!>
  Push(cc__7); // 7
  Push(pp_LBLT); // LBLT
  _st__ex__gt_(); // <!>
  Push(0x0099);
  Push(pp_WBLT); // WBLT
  _st__ex__gt_(); // <!>
  SetColor("DK-BLUE");
  _ex_COLOR(); // !COLOR
  Push(1); // 1
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
  BLT(); // BLT
  _ex_CRS(); // !CRS
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
}


// ================================================
// 0xed63: WORD 'UNK_0xed65' codep=0x224c parp=0xed65
// ================================================

void UNK_0xed65() // UNK_0xed65
{
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  UNK_0xed31(); // UNK_0xed31
}


// ================================================
// 0xed6d: WORD 'UNK_0xed6f' codep=0x1d29 parp=0xed6f
// ================================================
// 0xed6f: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xed72: WORD 'UNK_0xed74' codep=0x224c parp=0xed74
// ================================================

void UNK_0xed74() // UNK_0xed74
{
  CI(); // CI
  Push(pp_UNK_0xed6f); // UNK_0xed6f
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xed7c: WORD 'UNK_0xed7e' codep=0x224c parp=0xed7e
// ================================================

void UNK_0xed7e() // UNK_0xed7e
{
  Push(pp_UNK_0xed6f); // UNK_0xed6f
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xed84: WORD 'UNK_0xed86' codep=0x224c parp=0xed86
// ================================================

void UNK_0xed86() // UNK_0xed86
{
  Push(pp__ro_ELIST_rc_); // (ELIST)
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
}


// ================================================
// 0xed8e: WORD 'UNK_0xed90' codep=0x224c parp=0xed90
// ================================================

void UNK_0xed90() // UNK_0xed90
{
  UNK_0xed86(); // UNK_0xed86
  CDROP(); // CDROP
  UNK_0xed7e(); // UNK_0xed7e
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  UNK_0xed74(); // UNK_0xed74
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xeda2: WORD 'UNK_0xeda4' codep=0x224c parp=0xeda4
// ================================================

void UNK_0xeda4() // UNK_0xeda4
{
  UNK_0xed86(); // UNK_0xed86
  CDROP(); // CDROP
  UNK_0xed7e(); // UNK_0xed7e
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  UNK_0xed74(); // UNK_0xed74
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xedb6: WORD 'UNK_0xedb8' codep=0x1d29 parp=0xedb8
// ================================================
// 0xedb8: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xedbb: WORD 'UNK_0xedbd' codep=0x224c parp=0xedbd
// ================================================

void UNK_0xedbd() // UNK_0xedbd
{
  CI(); // CI
  Push(pp_UNK_0xedb8); // UNK_0xedb8
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xedc5: WORD 'UNK_0xedc7' codep=0x224c parp=0xedc7
// ================================================

void UNK_0xedc7() // UNK_0xedc7
{
  Push(pp_UNK_0xedb8); // UNK_0xedb8
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xedcd: WORD 'UNK_0xedcf' codep=0x224c parp=0xedcf
// ================================================

void UNK_0xedcf() // UNK_0xedcf
{
  UNK_0xed86(); // UNK_0xed86
  CDROP(); // CDROP
  UNK_0xedc7(); // UNK_0xedc7
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  UNK_0xedbd(); // UNK_0xedbd
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xede1: WORD 'UNK_0xede3' codep=0x224c parp=0xede3
// ================================================

void UNK_0xede3() // UNK_0xede3
{
  UNK_0xed86(); // UNK_0xed86
  CDROP(); // CDROP
  UNK_0xedc7(); // UNK_0xedc7
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  UNK_0xedbd(); // UNK_0xedbd
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xedf5: WORD 'UNK_0xedf7' codep=0x224c parp=0xedf7
// ================================================

void UNK_0xedf7() // UNK_0xedf7
{
  Push(0x65ec); // IFIELD(TEXT-CO)
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  SetColor("WHITE");
  goto label2;

  label1:
  _ask_CGA(); // ?CGA
  if (Pop() == 0) goto label3;
  SetColor("RED");
  goto label2;

  label3:
  SetColor("GREY1");

  label2:
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xee17: WORD 'UNK_0xee19' codep=0x224c parp=0xee19
// ================================================

void UNK_0xee19() // UNK_0xee19
{
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xee23: WORD 'UNK_0xee25' codep=0x224c parp=0xee25
// ================================================

void UNK_0xee25() // UNK_0xee25
{
  UNK_0xedf7(); // UNK_0xedf7
  Push(0x65f2); // IFIELD(TEXT-TE)
  _do__dot_(); // $.
}


// ================================================
// 0xee2d: WORD 'UNK_0xee2f' codep=0x224c parp=0xee2f
// ================================================

void UNK_0xee2f() // UNK_0xee2f
{
  UNK_0xee19(); // UNK_0xee19
  Push(pp_WLINES); // WLINES
  Push(Read16(Pop())); // @
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(2); // 2
  _dash_(); // -
  Push(i); // I
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _dash_(); // -
  POS_dot_(); // POS.
  UNK_0xee25(); // UNK_0xee25
  INEXT(); // INEXT
  i++;
  } while(i<imax); // (LOOP) 0xffe4

}


// ================================================
// 0xee59: WORD 'UNK_0xee5b' codep=0x224c parp=0xee5b
// ================================================

void UNK_0xee5b() // UNK_0xee5b
{
  UNK_0xed86(); // UNK_0xed86
  UNK_0xed74(); // UNK_0xed74
  UNK_0xee2f(); // UNK_0xee2f
  IPREV(); // IPREV
  UNK_0xedbd(); // UNK_0xedbd
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  UNK_0xed86(); // UNK_0xed86
}


// ================================================
// 0xee71: WORD 'UNK_0xee73' codep=0x224c parp=0xee73
// ================================================

void UNK_0xee73() // UNK_0xee73
{
  UNK_0xed86(); // UNK_0xed86

  label2:
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(0); // 0
  Push(0x65ec); // IFIELD(TEXT-CO)
  _ex_(); // !
  goto label2;

  label1:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xee8f: WORD 'UNK_0xee91' codep=0x224c parp=0xee91
// ================================================

void UNK_0xee91() // UNK_0xee91
{
  UNK_0xed86(); // UNK_0xed86
  Push(0); // 0
  Push(0x65ec); // IFIELD(TEXT-CO)
  _ex_(); // !
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xee9f: WORD 'UNK_0xeea1' codep=0x224c parp=0xeea1
// ================================================

void UNK_0xeea1() // UNK_0xeea1
{
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) return;
  UNK_0xed7e(); // UNK_0xed7e
  _gt_C_plus_S(); // >C+S
  Push(0x65ec); // IFIELD(TEXT-CO)
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(0x65ec); // IFIELD(TEXT-CO)
  _ex_(); // !
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label1;
  UNK_0xee73(); // UNK_0xee73
  goto label2;

  label1:
  UNK_0xee91(); // UNK_0xee91

  label2:
  UNK_0xee2f(); // UNK_0xee2f
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xeecb: WORD 'UNK_0xeecd' codep=0x224c parp=0xeecd
// ================================================

void UNK_0xeecd() // UNK_0xeecd
{
  Push(0x6813); Pust(0x0002);
  UNK_0xed1f(); // UNK_0xed1f
}


// ================================================
// 0xeed7: WORD 'UNK_0xeed9' codep=0x224c parp=0xeed9
// ================================================

void UNK_0xeed9() // UNK_0xeed9
{
  Push(0x6830); Pust(0x0002);
  UNK_0xed1f(); // UNK_0xed1f
}


// ================================================
// 0xeee3: WORD 'UNK_0xeee5' codep=0x224c parp=0xeee5
// ================================================

void UNK_0xeee5() // UNK_0xeee5
{
  _gt_BOTT(); // >BOTT
  UNK_0xeed9(); // UNK_0xeed9
  Func14(TYPE); // call of word 0x2690 '(TYPE)'
  Push(cc__8); // 8
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  UNK_0xeecd(); // UNK_0xeecd
  Func14(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xeef7: WORD 'UNK_0xeef9' codep=0x224c parp=0xeef9
// ================================================

void UNK_0xeef9() // UNK_0xeef9
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  UNK_0xeee5(); // UNK_0xeee5
  Push(cc__dash_1); // -1
  Push(pp_WLINES); // WLINES
  _plus__ex_(); // +!
  Push(cc__7); // 7
  Push(pp_WBOTTOM); // WBOTTOM
  _plus__ex_(); // +!
  CTERASE(); // CTERASE
  UNK_0xee5b(); // UNK_0xee5b
}


// ================================================
// 0xef13: WORD 'UNK_0xef15' codep=0x224c parp=0xef15
// ================================================

void UNK_0xef15() // UNK_0xef15
{
  CLICK(); // CLICK
  UNK_0xed90(); // UNK_0xed90
  UNK_0xedcf(); // UNK_0xedcf
  UNK_0xedf7(); // UNK_0xedf7
  UNK_0xedc7(); // UNK_0xedc7
  _gt_C_plus_S(); // >C+S
  UNK_0xedf7(); // UNK_0xedf7
  Push(0x65f2); // IFIELD(TEXT-TE)
  WLINE_dash_U(); // WLINE-U
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef2b: WORD 'UNK_0xef2d' codep=0x224c parp=0xef2d
// ================================================

void UNK_0xef2d() // UNK_0xef2d
{
  CLICK(); // CLICK
  UNK_0xeda4(); // UNK_0xeda4
  UNK_0xede3(); // UNK_0xede3
  Push(cc__dash_2); // -2
  Push(pp_WTOP); // WTOP
  _plus__ex_(); // +!
  UNK_0xed7e(); // UNK_0xed7e
  _gt_C_plus_S(); // >C+S
  UNK_0xedf7(); // UNK_0xedf7
  Push(0x65f2); // IFIELD(TEXT-TE)
  WLINE_dash_D(); // WLINE-D
  ICLOSE(); // ICLOSE
  Push(2); // 2
  Push(pp_WTOP); // WTOP
  _plus__ex_(); // +!
}


// ================================================
// 0xef4d: WORD 'TD-SCRO' codep=0x4b3b parp=0xef59
// ================================================
// 0xef59: db 0x02 0x00 0xa1 0xee 0xff 0xff 0x2d 0xef 0x01 0x00 0x15 0xef '      -     '

// ================================================
// 0xef65: WORD 'UNK_0xef67' codep=0x224c parp=0xef67
// ================================================

void UNK_0xef67() // UNK_0xef67
{

  label3:
  XYSCAN(); // XYSCAN
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Pop();
  switch(Pop()) // TD-SCRO
  {
  case 65535:
    UNK_0xef2d(); // UNK_0xef2d
    break;
  case 1:
    UNK_0xef15(); // UNK_0xef15
    break;
  default:
    UNK_0xeea1(); // UNK_0xeea1
    break;

  }
  goto label2;

  label1:
  Pop(); // DROP

  label2:
  Push(pp_FQUIT); // FQUIT
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label3;
  Push(0); // 0
}


// ================================================
// 0xef83: WORD 'UNK_0xef85' codep=0x224c parp=0xef85
// ================================================

void UNK_0xef85() // UNK_0xef85
{
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  UNK_0xeed9(); // UNK_0xeed9
  _dot_TTY(); // .TTY
  Push(0x684f); Pust(0x0002);
  UNK_0xed1f(); // UNK_0xed1f
  _dot_TTY(); // .TTY
  UNK_0xeecd(); // UNK_0xeecd
  _dot_TTY(); // .TTY
  Push(0x6881); Pust(0x0002);
  UNK_0xed1f(); // UNK_0xed1f
  _dot_TTY(); // .TTY
  KEY(); // KEY
  Pop(); // DROP
}


// ================================================
// 0xefab: WORD 'UNK_0xefad' codep=0x224c parp=0xefad
// ================================================

void UNK_0xefad() // UNK_0xefad
{
  UNK_0xef85(); // UNK_0xef85
  UNK_0xeef9(); // UNK_0xeef9
  UNK_0xef67(); // UNK_0xef67
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xefb9: WORD 'UNK_0xefbb' codep=0x224c parp=0xefbb
// ================================================

void UNK_0xefbb() // UNK_0xefbb
{
  Push(0x68ac); Pust(0x0002);
  UNK_0xed1f(); // UNK_0xed1f
  Func14(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xefc7: WORD 'UNK_0xefc9' codep=0x224c parp=0xefc9
// ================================================

void UNK_0xefc9() // UNK_0xefc9
{
  Push(0x68df); Pust(0x0002);
  UNK_0xed1f(); // UNK_0xed1f
  Func14(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xefd5: WORD 'UNK_0xefd7' codep=0x224c parp=0xefd7
// ================================================

void UNK_0xefd7() // UNK_0xefd7
{
  Push(0x690e); Pust(0x0002);
  UNK_0xed1f(); // UNK_0xed1f
  Func14(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xefe3: WORD 'ACT#' codep=0x1d29 parp=0xefec
// ================================================
// 0xefec: db 0x01 0x00 '  '

// ================================================
// 0xefee: WORD 'UNK_0xeff0' codep=0x224c parp=0xeff0
// ================================================

void UNK_0xeff0() // UNK_0xeff0
{
  GCR(); // GCR
  Push(1); // 1
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
}


// ================================================
// 0xeffa: WORD 'UNK_0xeffc' codep=0x224c parp=0xeffc
// ================================================

void UNK_0xeffc() // UNK_0xeffc
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  UNK_0xefbb(); // UNK_0xefbb
  UNK_0xeff0(); // UNK_0xeff0
  UNK_0xefc9(); // UNK_0xefc9
  UNK_0xeff0(); // UNK_0xeff0
  UNK_0xefd7(); // UNK_0xefd7
  UNK_0xed65(); // UNK_0xed65
  Push(1); // 1
  Push(pp_ACT_n_); // ACT#
  _ex_(); // !
}

// 0xf016: db 0x4c 0x22 0x22 0x5e 0xae 0x0b 0x5d 0x17 0x3b 0x01 0x5d 0x17 0x45 0x01 0x25 0x40 0x90 0x16 'L""^  ] ; ] E %@  '

// ================================================
// 0xf028: WORD 'UNK_0xf02a' codep=0x224c parp=0xf02a
// ================================================

void UNK_0xf02a() // UNK_0xf02a
{
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(Pop()-1); // 1-
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _dash_(); // -
}


// ================================================
// 0xf03a: WORD 'UNK_0xf03c' codep=0x224c parp=0xf03c
// ================================================

void UNK_0xf03c() // UNK_0xf03c
{
  SWAP(); // SWAP
  UNK_0xf02a(); // UNK_0xf02a
  UNK_0xed31(); // UNK_0xed31
  UNK_0xf02a(); // UNK_0xf02a
  UNK_0xed31(); // UNK_0xed31
}


// ================================================
// 0xf048: WORD 'UNK_0xf04a' codep=0x224c parp=0xf04a
// ================================================

void UNK_0xf04a() // UNK_0xf04a
{
  Push(pp_ACT_n_); // ACT#
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(Pop()+1); // 1+
  Push(cc__3); // 3
  MIN(); // MIN
  Push(Read16(sp)); // DUP
  Push(pp_ACT_n_); // ACT#
  _ex_(); // !
  UNK_0xf03c(); // UNK_0xf03c
}


// ================================================
// 0xf060: WORD 'UNK_0xf062' codep=0x224c parp=0xf062
// ================================================

void UNK_0xf062() // UNK_0xf062
{
  Push(pp_ACT_n_); // ACT#
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(Pop()-1); // 1-
  Push(1); // 1
  MAX(); // MAX
  Push(Read16(sp)); // DUP
  Push(pp_ACT_n_); // ACT#
  _ex_(); // !
  UNK_0xf03c(); // UNK_0xf03c
}


// ================================================
// 0xf078: WORD 'ACT-SCR' codep=0x4b3b parp=0xf084
// ================================================
// 0xf084: db 0x02 0x00 0x48 0x3a 0xff 0xff 0x4a 0xf0 0x01 0x00 0x62 0xf0 '  H:  J   b '

// ================================================
// 0xf090: WORD 'UNK_0xf092' codep=0x224c parp=0xf092
// ================================================

void UNK_0xf092() // UNK_0xf092
{

  label3:
  XYSCAN(); // XYSCAN
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Pop();
  switch(Pop()) // ACT-SCR
  {
  case 65535:
    UNK_0xf04a(); // UNK_0xf04a
    break;
  case 1:
    UNK_0xf062(); // UNK_0xf062
    break;
  default:
    NOP(); // NOP
    break;

  }
  goto label2;

  label1:
  Pop(); // DROP

  label2:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label3;
}


// ================================================
// 0xf0aa: WORD 'ACTION?' codep=0x224c parp=0xf0b6
// ================================================

void ACTION_ask_() // ACTION?
{
  UNK_0xeffc(); // UNK_0xeffc
  UNK_0xf092(); // UNK_0xf092
}


// ================================================
// 0xf0bc: WORD 'UNK_0xf0be' codep=0x224c parp=0xf0be
// ================================================

void UNK_0xf0be() // UNK_0xf0be
{
  Push(1); // 1
}


// ================================================
// 0xf0c2: WORD 'UNK_0xf0c4' codep=0x224c parp=0xf0c4
// ================================================

void UNK_0xf0c4() // UNK_0xf0c4
{
  Push(2); // 2
}


// ================================================
// 0xf0c8: WORD '#>ACTIO' codep=0x4b3b parp=0xf0d4
// ================================================
// 0xf0d4: db 0x03 0x00 0x6b 0x26 0x01 0x00 0xbe 0xf0 0x02 0x00 0xad 0xef 0x03 0x00 0xc4 0xf0 '  k&            '

// ================================================
// 0xf0e4: WORD 'UNK_0xf0e6' codep=0x1d29 parp=0xf0e6
// ================================================
// 0xf0e6: db 0x3a 0x20 0x4c 0x22 0xaf 0x64 0x2f 0x7a 0x90 0x16 0x4c 0x22 0xe8 0xf0 0xf4 0xeb 0x92 0x0c 0xdf 0x79 0x90 0x16 0x4c 0x22 0xe8 0xf0 0xfc 0xeb 0x92 0x0c 0xdf 0x79 0x90 0x16 0x4c 0x22 0xe8 0xf0 0x04 0xec 0x92 0x0c 0xdf 0x79 0x90 0x16 0x4c 0x22 0xe4 0xf0 0xae 0x0b 0xf0 0xf0 0x5f 0x12 0x90 0x16 0x4c 0x22 0xe4 0xf0 0xae 0x0b 0xfc 0xf0 0x5f 0x12 0x90 0x16 0x4c 0x22 0xe4 0xf0 0xae 0x0b 0x08 0xf1 0x5f 0x12 0x90 0x16 ': L" d/z  L"       y  L"       y  L"       y  L"      _   L"      _   L"      _   '

// ================================================
// 0xf138: WORD 'UNK_0xf13a' codep=0x1d29 parp=0xf13a
// ================================================
// 0xf13a: db 0x3a 0x20 0x4c 0x22 0x4f 0x06 0xaf 0x21 0xfa 0x1b ': L"O  !  '
// 0xf144: call   1649
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xf13a); // UNK_0xf13a
  _ex_(); // !
}


// ================================================
// 0xf14f: WORD '10!TIME' codep=0xf144 parp=0xf15b
// ================================================
// 0xf15b: db 0x0a ' '

// ================================================
// 0xf15c: WORD '20!TIME' codep=0xf144 parp=0xf168
// ================================================
// 0xf168: db 0x14 ' '

// ================================================
// 0xf169: WORD '30!TIME' codep=0xf144 parp=0xf175
// ================================================
// 0xf175: db 0x1e ' '

// ================================================
// 0xf176: WORD '5!TIME' codep=0xf144 parp=0xf181
// ================================================
// 0xf181: db 0x05 ' '

// ================================================
// 0xf182: WORD '7!TIME' codep=0xf144 parp=0xf18d
// ================================================
// 0xf18d: db 0x07 ' '

// ================================================
// 0xf18e: WORD '13!TIME' codep=0xf144 parp=0xf19a
// ================================================
// 0xf19a: db 0x0d ' '

// ================================================
// 0xf19b: WORD '3!TIME' codep=0xf144 parp=0xf1a6
// ================================================
// 0xf1a6: db 0x03 ' '

// ================================================
// 0xf1a7: WORD 'UNK_0xf1a9' codep=0x224c parp=0xf1a9
// ================================================

void UNK_0xf1a9() // UNK_0xf1a9
{
  Push(0); // 0
  Push(0x0064);
  RRND(); // RRND
  Push(0x001e);
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(0x0032);
  Push(0x00c9);
  RRND(); // RRND
  goto label2;

  label1:
  Push(0); // 0

  label2:
  Push(pp_UNK_0xf13a); // UNK_0xf13a
  _ex_(); // !
}


// ================================================
// 0xf1d1: WORD '(TIMER)' codep=0xaccc parp=0xf1dd
// ================================================
// 0xf1dd: db 0x07 0x03 0x07 0xf7 0xf1 0xfd 0xf1 0x03 0xf2 0x09 0xf2 0x0f 0xf2 0x15 0xf2 0x1b 0xf2 0x16 0xf1 0x22 0xf1 0x2e 0xf1 0xca 0xf1 0xe7 0x03 0xa6 0xf1 0x80 0x81 0x82 0x03 0x81 0xf1 0x80 0x81 0x02 0x03 0x9a 0xf1 0x00 0x81 0x82 0x03 0x8d 0xf1 0x80 0x01 0x82 0x03 0x5b 0xf1 0x80 0x01 0x02 0x03 0x68 0xf1 0x00 0x81 0x02 0x03 0x75 0xf1 0x00 0x01 0x82 '                   " .                             [     h     u    '

// ================================================
// 0xf221: WORD 'UNK_0xf223' codep=0x224c parp=0xf223
// ================================================

void UNK_0xf223() // UNK_0xf223
{
  Push(0xf1dd);
  DISTRAC(); // DISTRAC
  Func13("(TIMER)");
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xf1a9(); // UNK_0xf1a9
}


// ================================================
// 0xf235: WORD 'TIMES' codep=0x1d29 parp=0xf23f
// ================================================
// 0xf23f: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x4e 0x54 0x53 0x20 0x01 0x00 0x00 0x1a 0x06 0x00 0x00 0x33 0x07 0x00 0x00 0x64 0x08 0x00 0x00 0x10 0x01 0x00 0x00 0x1f 0x02 0x00 0x00 0x2e 0x03 0x00 0x00 0x3d 0x04 0x00 0x00 0x64 0x05 0x00 0x00 0x10 0x06 ' ALLOT NTS        3   d           .   =   d     '

// ================================================
// 0xf26f: WORD 'UNK_0xf271' codep=0x224c parp=0xf271
// ================================================

void UNK_0xf271() // UNK_0xf271
{
  Push(Pop()*2); // 2*
  Push(pp_TIMES); // TIMES
  Push(Pop() + Pop()); // +
  _ex_(); // !
}


// ================================================
// 0xf27b: WORD 'UNK_0xf27d' codep=0x224c parp=0xf27d
// ================================================

void UNK_0xf27d() // UNK_0xf27d
{
  Push(Pop()*2); // 2*
  Push(pp_TIMES); // TIMES
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf287: WORD 'UNK_0xf289' codep=0x224c parp=0xf289
// ================================================

void UNK_0xf289() // UNK_0xf289
{
  Push(pp_TIMES); // TIMES
  UNK_0xec16(); // UNK_0xec16
  Pop(); // DROP
  Push(Pop()*2); // 2*
  Push(0); // 0
  FILL(); // FILL
  UNK_0xed86(); // UNK_0xed86
  Push(0x65ec); // IFIELD(TEXT-CO)
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xec16(); // UNK_0xec16

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(1); // 1
  Push(i); // I
  UNK_0xf271(); // UNK_0xf271
  i++;
  } while(i<imax); // (LOOP) 0xfff8

  goto label2;

  label1:
  UNK_0xec16(); // UNK_0xec16

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  INEXT(); // INEXT
  Push(0x65ec); // IFIELD(TEXT-CO)
  Push(Read16(Pop())); // @
  Push(j); // I
  UNK_0xf271(); // UNK_0xf271
  j++;
  } while(j<jmax); // (LOOP) 0xfff4


  label2:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf2c9: WORD 'UNK_0xf2cb' codep=0x224c parp=0xf2cb
// ================================================

void UNK_0xf2cb() // UNK_0xf2cb
{
  UNK_0xec16(); // UNK_0xec16

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(pp_UNK_0xf0e6); // UNK_0xf0e6
  _ex_(); // !
  UNK_0xf223(); // UNK_0xf223
  Push(pp_UNK_0xf13a); // UNK_0xf13a
  Push(Read16(Pop())); // @
  Push(i); // I
  UNK_0xf27d(); // UNK_0xf27d
  Push(Pop() * Pop()); // *
  Push(i); // I
  UNK_0xf271(); // UNK_0xf271
  i++;
  } while(i<imax); // (LOOP) 0xffe8

}


// ================================================
// 0xf2eb: WORD 'UNK_0xf2ed' codep=0x224c parp=0xf2ed
// ================================================

void UNK_0xf2ed() // UNK_0xf2ed
{
  Push(0x00ff);
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(0x6a82);
  SETLARR(); // SETLARR
  SWAP(); // SWAP
  Push(pp_XCON); // XCON
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  _dash_(); // -
  SWAP(); // SWAP
  Push(pp_YCON); // YCON
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  _dash_(); // -
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  _dash_(); // -
}


// ================================================
// 0xf31b: WORD 'UNK_0xf31d' codep=0x224c parp=0xf31d
// ================================================

void UNK_0xf31d() // UNK_0xf31d
{
  UNK_0xf2ed(); // UNK_0xf2ed
  UNK_0xec16(); // UNK_0xec16

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xf27d(); // UNK_0xf27d
  OVER(); // OVER
  Push(0x0064);
  _star__slash_(); // */
  Push(i); // I
  UNK_0xf271(); // UNK_0xf271
  i++;
  } while(i<imax); // (LOOP) 0xffee

  Pop(); // DROP
}


// ================================================
// 0xf33b: WORD 'UNK_0xf33d' codep=0x224c parp=0xf33d
// ================================================

void UNK_0xf33d() // UNK_0xf33d
{
  Push(Read16(sp)); // DUP
  if (Pop() == 0) goto label1;
  _slash_(); // /
  return;

  label1:
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf34f: WORD 'UNK_0xf351' codep=0x224c parp=0xf351
// ================================================

void UNK_0xf351() // UNK_0xf351
{
  Push(0x0065);
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  LoadData("UNK_0xec0e"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0064);
  Push(0x0100);
  _star__slash_(); // */
  _dash_(); // -
  UNK_0xec16(); // UNK_0xec16

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xf27d(); // UNK_0xf27d
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(i); // I
  UNK_0xf271(); // UNK_0xf271
  i++;
  } while(i<imax); // (LOOP) 0xfff2

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf383: WORD 'UNK_0xf385' codep=0x224c parp=0xf385
// ================================================

void UNK_0xf385() // UNK_0xf385
{
  UNK_0xec16(); // UNK_0xec16

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x1388);
  Push(i); // I
  UNK_0xf27d(); // UNK_0xf27d
  UNK_0xf33d(); // UNK_0xf33d
  Push(i); // I
  UNK_0xf271(); // UNK_0xf271
  i++;
  } while(i<imax); // (LOOP) 0xfff0

}


// ================================================
// 0xf39d: WORD 'UNK_0xf39f' codep=0x224c parp=0xf39f
// ================================================

void UNK_0xf39f() // UNK_0xf39f
{
  UNK_0xf31d(); // UNK_0xf31d
  UNK_0xf351(); // UNK_0xf351
  UNK_0xf385(); // UNK_0xf385
}


// ================================================
// 0xf3a7: WORD 'UNK_0xf3a9' codep=0x224c parp=0xf3a9
// ================================================

void UNK_0xf3a9() // UNK_0xf3a9
{
  Push(0); // 0
  UNK_0xec16(); // UNK_0xec16

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xf27d(); // UNK_0xf27d
  Push(Pop() + Pop()); // +
  i++;
  } while(i<imax); // (LOOP) 0xfff8

  Push(Read16(sp)); // DUP
  if (Pop() == 0) return;
  Push(0x0021);
  MIN(); // MIN
}


// ================================================
// 0xf3c7: WORD 'UNK_0xf3c9' codep=0x224c parp=0xf3c9
// ================================================

void UNK_0xf3c9() // UNK_0xf3c9
{
  Push(0x01f4);
  UNK_0xf2cb(); // UNK_0xf2cb
  UNK_0xf39f(); // UNK_0xf39f
  UNK_0xf3a9(); // UNK_0xf3a9
  SAVE_dash_OV(); // SAVE-OV
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  _slash_(); // /
  Push(0x0006);
  Push(Pop() * Pop()); // *
  Push(pp_ETIME); // ETIME
  _ex_(); // !
  goto label2;

  label1:
  Pop(); // DROP

  label2:
  Push(pp_ACT_n_); // ACT#
  Push(Read16(Pop())); // @
  UNK_0xf02a(); // UNK_0xf02a
  UNK_0xed31(); // UNK_0xed31
}


// ================================================
// 0xf3f7: WORD 'UNK_0xf3f9' codep=0x224c parp=0xf3f9
// ================================================

void UNK_0xf3f9() // UNK_0xf3f9
{
  Push(pp_THIS_dash_RE); // THIS-RE
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  UNK_0xec16(); // UNK_0xec16

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xf27d(); // UNK_0xf27d
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(Pop()-1); // 1-
  Push(pp_ETIME); // ETIME
  Push(Read16(Pop())); // @
  Push(0x0006);
  _slash_(); // /
  Push(Pop()-1); // 1-
  Push(Pop() * Pop()); // *
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0x001a);
  Push(i); // I
  Push(1); // 1
  _star_CREATE(); // *CREATE
  Push(0x01f4);
  MIN(); // MIN
  Push(0); // 0
  MAX(); // MAX
  Push(0x65ec); // IFIELD(INST-QT)
  _ex_(); // !
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(0x65ee); // IFIELD(INST-X)
  _ex_(); // !
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(0x65f0); // IFIELD(INST-Y)
  _ex_(); // !
  Push(0xba55);
  MODULE(); // MODULE
  _plus_ICON(); // +ICON

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffac

  Push(0xec78);
  Push(Read16(sp)); // DUP
  Push(pp_ANCHOR); // ANCHOR
  D_ex_(); // D!
  ORGLIST(); // ORGLIST
  UNK_0xec4e(); // UNK_0xec4e
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf46d: WORD 'UNK_0xf46f' codep=0x224c parp=0xf46f
// ================================================

void UNK_0xf46f() // UNK_0xf46f
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp__n_ETIME); // #ETIME
  _2_at_(); // 2@
  D_dash_(); // D-
  Push(0x03e8);
  M_slash_(); // M/
  SWAP(); // SWAP
  Pop(); // DROP
  Push(pp_ETIME); // ETIME
  Push(Read16(Pop())); // @
  MIN(); // MIN
  Push(pp_ETIME); // ETIME
  _ex_(); // !
}


// ================================================
// 0xf48f: WORD 'RECALL' codep=0x224c parp=0xf49a
// ================================================
// entry

void RECALL() // RECALL
{
  Push(pp_ETIME); // ETIME
  Push(Read16(Pop())); // @
  _gt_FLAG(); // >FLAG
  Push(pp_NOF); // NOF
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  UNK_0xecf1(); // UNK_0xecf1
  Push(pp_NOF); // NOF
  ON(); // ON
  UNK_0xf3f9(); // UNK_0xf3f9
  Push(pp_NOF); // NOF
  _099(); // 099
  Push(pp_ETIME); // ETIME
  _099(); // 099
  Func12("'F2");
  Pop(); Pop();// 2DROP

  label1:
  Push(pp_NOF); // NOF
  _099(); // 099
}


// ================================================
// 0xf4c6: WORD 'DRONE' codep=0x224c parp=0xf4d0
// ================================================
// entry

void DRONE() // DRONE
{
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(0x0034);
  Push(0xb78d);
  MODULE(); // MODULE
  Push(Pop() & Pop()); // AND
  Push(pp_NOF); // NOF
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(pp_ETIME); // ETIME
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  Push(pp_NOF); // NOF
  ON(); // ON
  Push(0); // 0
  Push(0); // 0
  UNK_0xec60(); // UNK_0xec60
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099

  label3:
  ACTION_ask_(); // ACTION?
  Push(pp_ACT_n_); // ACT#
  Push(Read16(Pop())); // @
  Pop();
  switch(Pop()) // #>ACTIO
  {
  case 1:
    UNK_0xf0be(); // UNK_0xf0be
    break;
  case 2:
    UNK_0xefad(); // UNK_0xefad
    break;
  case 3:
    UNK_0xf0c4(); // UNK_0xf0c4
    break;
  default:
    BEEP(); // BEEP
    break;

  }
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label3;
  Push(pp_ESC_dash_EN); // ESC-EN
  ON(); // ON
  Push(pp_NOF); // NOF
  _099(); // 099
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) goto label4;
  UNK_0xf289(); // UNK_0xf289
  UNK_0xf3c9(); // UNK_0xf3c9
  UNK_0xeca2(); // UNK_0xeca2
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp__n_ETIME); // #ETIME
  D_ex_(); // D!
  goto label5;

  label4:
  UNK_0xec4e(); // UNK_0xec4e

  label5:
  goto label6;

  label2:
  UNK_0xf46f(); // UNK_0xf46f
  RECALL(); // RECALL

  label6:
  Push(pp_NOF); // NOF
  _099(); // 099
  CTERASE(); // CTERASE
  goto label7;

  label1:
  Push(0xb7e7);
  MODULE(); // MODULE
  Push(0x07d0);
  MS(); // MS

  label7:
  Push2Words("NULL");
}

// 0xf55a: db 0x44 0x52 0x4f 0x4e 0x45 0x2d 0x00 'DRONE- '
  