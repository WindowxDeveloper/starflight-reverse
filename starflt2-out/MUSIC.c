// ====== OVERLAY 'MUSIC' ======
// store offset = 0xeb60
// overlay size   = 0x0a00

#include"cpu.h"
#include"starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0xeb76  codep:0x2214 parp:0xeb76 size:0x0002 C-string:'UNK_0xeb76'
// 1870:      UNK_0xeb7a  codep:0x2214 parp:0xeb7a size:0x0002 C-string:'UNK_0xeb7a'
// 1871:      UNK_0xeb7e  codep:0x2214 parp:0xeb7e size:0x002a C-string:'UNK_0xeb7e'
// 1872:      UNK_0xebaa  codep:0x1d29 parp:0xebaa size:0x0002 C-string:'UNK_0xebaa'
// 1873:      UNK_0xebae  codep:0x224c parp:0xebae size:0x0006 C-string:'UNK_0xebae'
// 1874:      UNK_0xebb6  codep:0x224c parp:0xebb6 size:0x0006 C-string:'UNK_0xebb6'
// 1875:      UNK_0xebbe  codep:0x224c parp:0xebbe size:0x000e C-string:'UNK_0xebbe'
// 1876:      UNK_0xebce  codep:0x224c parp:0xebce size:0x01c9 C-string:'UNK_0xebce'
// 1877:            RND1  codep:0x1d29 parp:0xeda0 size:0x000a C-string:'RND1'
// 1878:            RND2  codep:0x1d29 parp:0xedb3 size:0x000a C-string:'RND2'
// 1879:            RND3  codep:0x1d29 parp:0xedc6 size:0x000a C-string:'RND3'
// 1880:              P6  codep:0x1d29 parp:0xedd7 size:0x0014 C-string:'P6'
// 1881:           GLISS  codep:0x1d29 parp:0xedf5 size:0x0016 C-string:'GLISS'
// 1882:              P1  codep:0x1d29 parp:0xee12 size:0x001a C-string:'P1'
// 1883:              R,  codep:0x224c parp:0xee33 size:0x000a C-string:'R_co_'
// 1884:           0SONG  codep:0x1d29 parp:0xee47 size:0x000e C-string:'_0SONG'
// 1885:              P9  codep:0x1d29 parp:0xee5c size:0x0006 C-string:'P9'
// 1886:           1SONG  codep:0x1d29 parp:0xee6c size:0x0005 C-string:'_1SONG'
// 1887:             P10  codep:0x1d29 parp:0xee79 size:0x0006 C-string:'P10'
// 1888:           2SONG  codep:0x1d29 parp:0xee89 size:0x001a C-string:'_2SONG'
// 1889:      UNK_0xeea5  codep:0x1d29 parp:0xeea5 size:0x0002 C-string:'UNK_0xeea5'
// 1890:      UNK_0xeea9  codep:0x224c parp:0xeea9 size:0x0016 C-string:'UNK_0xeea9'
// 1891:      UNK_0xeec1  codep:0x224c parp:0xeec1 size:0x0014 C-string:'UNK_0xeec1'
// 1892:      UNK_0xeed7  codep:0x224c parp:0xeed7 size:0x0020 C-string:'UNK_0xeed7'
// 1893:      UNK_0xeef9  codep:0x224c parp:0xeef9 size:0x0030 C-string:'UNK_0xeef9'
// 1894:      UNK_0xef2b  codep:0x224c parp:0xef2b size:0x002c C-string:'UNK_0xef2b'
// 1895:      UNK_0xef59  codep:0x224c parp:0xef59 size:0x0012 C-string:'UNK_0xef59'
// 1896:         INITMUS  codep:0x224c parp:0xef77 size:0x0032 C-string:'INITMUS'
// 1897:           HIMUS  codep:0x224c parp:0xefb3 size:0x001c C-string:'HIMUS'
// 1898:      UNK_0xefd1  codep:0x224c parp:0xefd1 size:0x0010 C-string:'UNK_0xefd1'
// 1899:      UNK_0xefe3  codep:0x224c parp:0xefe3 size:0x0026 C-string:'UNK_0xefe3'
// 1900:      UNK_0xf00b  codep:0x224c parp:0xf00b size:0x000e C-string:'UNK_0xf00b'
// 1901:      UNK_0xf01b  codep:0x224c parp:0xf01b size:0x0016 C-string:'UNK_0xf01b'
// 1902:      UNK_0xf033  codep:0x224c parp:0xf033 size:0x003c C-string:'UNK_0xf033'
// 1903:      UNK_0xf071  codep:0x224c parp:0xf071 size:0x0044 C-string:'UNK_0xf071'
// 1904:      UNK_0xf0b7  codep:0x224c parp:0xf0b7 size:0x0006 C-string:'UNK_0xf0b7'
// 1905:      UNK_0xf0bf  codep:0x224c parp:0xf0bf size:0x0014 C-string:'UNK_0xf0bf'
// 1906:      UNK_0xf0d5  codep:0x224c parp:0xf0d5 size:0x0088 C-string:'UNK_0xf0d5'
// 1907:           !VPAL  codep:0x224c parp:0xf167 size:0x001e C-string:'_ex_VPAL'
// 1908:         SETABLT  codep:0x224c parp:0xf191 size:0x002e C-string:'SETABLT'
// 1909:            EGAT  codep:0x2214 parp:0xf1c8 size:0x0010 C-string:'EGAT'
// 1910:            EGAB  codep:0x2214 parp:0xf1e1 size:0x0010 C-string:'EGAB'
// 1911:            VGAS  codep:0x2214 parp:0xf1fa size:0x000d C-string:'VGAS'
// 1912:      UNK_0xf209  codep:0x224c parp:0xf209 size:0x0012 C-string:'UNK_0xf209'
// 1913:      UNK_0xf21d  codep:0x224c parp:0xf21d size:0x003a C-string:'UNK_0xf21d'
// 1914:      UNK_0xf259  codep:0x1d29 parp:0xf259 size:0x0002 C-string:'UNK_0xf259'
// 1915:      UNK_0xf25d  codep:0x1d29 parp:0xf25d size:0x0002 C-string:'UNK_0xf25d'
// 1916:      UNK_0xf261  codep:0x1d29 parp:0xf261 size:0x000a C-string:'UNK_0xf261'
// 1917:           PARAS  codep:0x1d29 parp:0xf275 size:0x0008 C-string:'PARAS'
// 1918:      UNK_0xf27f  codep:0x224c parp:0xf27f size:0x0012 C-string:'UNK_0xf27f'
// 1919:              @K  codep:0xf298 parp:0xf298 size:0x0008 C-string:'_at_K'
// 1920:        ?ALREADY  codep:0xf2ad parp:0xf2ad size:0x0012 C-string:'_ask_ALREADY'
// 1921:      UNK_0xf2c1  codep:0x224c parp:0xf2c1 size:0x0023 C-string:'UNK_0xf2c1'
// 1922:      UNK_0xf2e6  codep:0x224c parp:0xf2e6 size:0x000c C-string:'UNK_0xf2e6'
// 1923:      UNK_0xf2f4  codep:0x224c parp:0xf2f4 size:0x0016 C-string:'UNK_0xf2f4'
// 1924:      UNK_0xf30c  codep:0x224c parp:0xf30c size:0x0012 C-string:'UNK_0xf30c'
// 1925:      UNK_0xf320  codep:0x224c parp:0xf320 size:0x0036 C-string:'UNK_0xf320'
// 1926:      UNK_0xf358  codep:0x224c parp:0xf358 size:0x002e C-string:'UNK_0xf358'
// 1927:      UNK_0xf388  codep:0x224c parp:0xf388 size:0x001c C-string:'UNK_0xf388'
// 1928:     TANDY-ALLOC  codep:0x224c parp:0xf3b4 size:0x003c C-string:'TANDY_dash_ALLOC'
// 1929:      UNK_0xf3f2  codep:0x224c parp:0xf3f2 size:0x001a C-string:'UNK_0xf3f2'
// 1930:      UNK_0xf40e  codep:0x224c parp:0xf40e size:0x0020 C-string:'UNK_0xf40e'
// 1931:      UNK_0xf430  codep:0x224c parp:0xf430 size:0x003a C-string:'UNK_0xf430'
// 1932:   SPLASH.SCREEN  codep:0x224c parp:0xf47c size:0x0054 C-string:'SPLASH_dot_SCREEN'
// 1933:          INTROS  codep:0x224c parp:0xf4db size:0x0000 C-string:'INTROS'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xebaa[2] = {0xe0, 0xeb}; // UNK_0xebaa
unsigned char RND1[10] = {0x01, 0x3d, 0x01, 0x15, 0x01, 0x2d, 0x01, 0x25, 0x00, 0x00}; // RND1
unsigned char RND2[10] = {0x01, 0x4d, 0x01, 0x15, 0x01, 0x25, 0x01, 0x05, 0x00, 0x00}; // RND2
unsigned char RND3[10] = {0x01, 0x3d, 0x01, 0x4d, 0x01, 0x2d, 0x01, 0x05, 0x00, 0x00}; // RND3
unsigned char P6[20] = {0x09, 0x3d, 0x03, 0x2d, 0x09, 0x1d, 0x03, 0x2d, 0x09, 0x15, 0x03, 0x1d, 0x09, 0x05, 0x03, 0x54, 0x70, 0x05, 0x00, 0x00}; // P6
unsigned char GLISS[22] = {0x01, 0x07, 0x01, 0x0f, 0x01, 0x27, 0x01, 0x2f, 0x01, 0x37, 0x01, 0x3f, 0x01, 0x47, 0x01, 0x4f, 0x01, 0x57, 0x01, 0x5f, 0x00, 0x00}; // GLISS
unsigned char P1[26] = {0x09, 0x3c, 0x03, 0x2c, 0x09, 0x24, 0x03, 0x2c, 0x09, 0x14, 0x03, 0x24, 0x09, 0x04, 0x03, 0x14, 0x09, 0x53, 0x03, 0x4b, 0x18, 0x3b, 0x0c, 0x3b, 0x00, 0x00}; // P1
unsigned char _0SONG[14] = {0x01, 0x15, 0x02, 0x03, 0xc0, 0x01, 0x01, 0x15, 0x02, 0x01, 0x32, 0x02, 0x00, 0x00}; // 0SONG
unsigned char P9[6] = {0x43, 0x06, 0x12, 0xff, 0x00, 0x00}; // P9
unsigned char _1SONG[5] = {0x0d, 0x7c, 0x02, 0x00, 0x00}; // 1SONG
unsigned char P10[6] = {0x43, 0x2c, 0x06, 0xff, 0x00, 0x00}; // P10
unsigned char _2SONG[26] = {0x02, 0xc0, 0x01, 0x02, 0xd3, 0x01, 0x02, 0xc0, 0x01, 0x02, 0xe6, 0x01, 0x02, 0xc0, 0x01, 0x02, 0xd3, 0x01, 0x02, 0xe6, 0x01, 0xff, 0x99, 0x02, 0x00, 0x00}; // 2SONG
unsigned char UNK_0xeea5[2] = {0x00, 0x00}; // UNK_0xeea5
unsigned char UNK_0xf259[2] = {0x3a, 0x20}; // UNK_0xf259
unsigned char UNK_0xf25d[2] = {0x3a, 0x20}; // UNK_0xf25d
unsigned char UNK_0xf261[10] = {0x3a, 0x20, 0x29, 0x1d, 0x3a, 0x20, 0x29, 0x1d, 0x3a, 0x20}; // UNK_0xf261
unsigned char PARAS[8] = {0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20}; // PARAS

const unsigned short int cc_UNK_0xeb76 = 0x0000; // UNK_0xeb76
const unsigned short int cc_UNK_0xeb7a = 0x0002; // UNK_0xeb7a
const unsigned short int cc_UNK_0xeb7e = 0x000e; // UNK_0xeb7e
const unsigned short int cc_EGAT = 0xf1cb; // EGAT
const unsigned short int cc_EGAB = 0xf1e4; // EGAB
const unsigned short int cc_VGAS = 0xf1fd; // VGAS


// 0xeb72: db 0x99 0x00 '  '

// ================================================
// 0xeb74: WORD 'UNK_0xeb76' codep=0x2214 parp=0xeb76
// ================================================
// 0xeb76: db 0x00 0x00 '  '

// ================================================
// 0xeb78: WORD 'UNK_0xeb7a' codep=0x2214 parp=0xeb7a
// ================================================
// 0xeb7a: db 0x02 0x00 '  '

// ================================================
// 0xeb7c: WORD 'UNK_0xeb7e' codep=0x2214 parp=0xeb7e
// ================================================
// 0xeb7e: db 0x0e 0x00 0x14 0x22 0x03 0x00 0x14 0x22 0x05 0x00 0x14 0x22 0x07 0x00 0x14 0x22 0x09 0x00 0x14 0x22 0x0a 0x00 0x14 0x22 0x0b 0x00 0x14 0x22 0x0c 0x00 0x14 0x22 0x0d 0x00 0x14 0x22 0x10 0x00 0x14 0x22 0x24 0x00 '   "   "   "   "   "   "   "   "   "   "$ '

// ================================================
// 0xeba8: WORD 'UNK_0xebaa' codep=0x1d29 parp=0xebaa
// ================================================
// 0xebaa: db 0xe0 0xeb '  '

// ================================================
// 0xebac: WORD 'UNK_0xebae' codep=0x224c parp=0xebae
// ================================================

void UNK_0xebae() // UNK_0xebae
{
  Push(cc_MUSSEG); // MUSSEG
  SWAP(); // SWAP
}


// ================================================
// 0xebb4: WORD 'UNK_0xebb6' codep=0x224c parp=0xebb6
// ================================================

void UNK_0xebb6() // UNK_0xebb6
{
  UNK_0xebae(); // UNK_0xebae
  L_ex_(); // L!
}


// ================================================
// 0xebbc: WORD 'UNK_0xebbe' codep=0x224c parp=0xebbe
// ================================================

void UNK_0xebbe() // UNK_0xebbe
{
  UNK_0xebae(); // UNK_0xebae
  L_at_(); // L@
}

// 0xebc4: db 0x4c 0x22 0xac 0xeb 0xcb 0x2e 0x90 0x16 'L"   .  '

// ================================================
// 0xebcc: WORD 'UNK_0xebce' codep=0x224c parp=0xebce
// ================================================

void UNK_0xebce() // UNK_0xebce
{
  UNK_0xebae(); // UNK_0xebae
  LC_ex_(); // LC!
}

// 0xebd4: db 0x01 0x21 0x20 0x20 0x20 0x41 0x44 0x44 0x52 0x20 0x31 0x30 0xb3 0x01 0x4c 0x4c 0x4f 0x54 0x20 0x52 0x20 0x20 0x20 0x20 0x20 0x34 0xff 0x00 0x67 0x02 0x8c 0x02 0xa9 0x02 0x43 0x52 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x32 0x30 0x44 0x31 0xf0 0xfd 0xf8 0x7e 0x7c 0x3f 0xbe 0x1f 0xfd 0x0f 0xef 0x07 0xf7 0x03 0xfb 0x01 0xb1 0xef 0xd8 0x77 0xec 0x3b 0xf6 0x1d 0xfb 0x0e 0x7d 0x07 0xbe 0x03 0xdf 0x01 0x3d 0xe2 0x1e 0x71 0x8f 0x38 0x47 0x1c 0x23 0x0e 0x11 0x07 0x88 0x03 0xc4 0x01 0x89 0xd5 0xc4 0x6a 0x62 0x35 0xb1 0x1a 0x58 0x0d 0xac 0x06 0x56 0x03 0xab 0x01 0x8e 0xc9 0xc7 0x64 0x63 0x32 0x31 0x19 0x98 0x0c 0x4c 0x06 0x26 0x03 0x93 0x01 0x3d 0xbe 0x1e 0x5f 0x8f 0x2f 0xc7 0x17 0xe3 0x0b 0xf1 0x05 0xf8 0x02 0x7c 0x01 0x90 0xb3 0xc8 0x59 0xe4 0x2c 0x72 0x16 0x39 0x0b 0x9c 0x05 0xce 0x02 0x67 0x01 0x7c 0xa9 0xbe 0x54 0x5f 0x2a 0x2f 0x15 0x97 0x0a 0x4b 0x05 0xa5 0x02 0x52 0x01 0xf8 0x9f 0xfc 0x4f 0xfe 0x27 0xff 0x13 0xff 0x09 0xff 0x04 0x7f 0x02 0x3f 0x01 0xff 0x96 0x7f 0x4b 0xbf 0x25 0xdf 0x12 0x6f 0x09 0xb7 0x04 0x5b 0x02 0x2d 0x01 0x84 0x8e 0x42 0x47 0xa1 0x23 0xd0 0x11 0xe8 0x08 0x74 0x04 0x3a 0x02 0x1d 0x01 0x85 0x86 0x42 0x43 0xa1 0x21 0xd0 0x10 0x68 0x08 0x34 0x04 0x1a 0x02 0x0d 0x01 0xb0 0xb6 0xe6 0x43 0x8a 0xc2 0xe6 0x42 0x8a 0xc6 0xe6 0x42 0xe4 0x61 0x0c 0x03 0xe6 0x61 0xc3 0xba 0x61 0x00 0xec 0x24 0xfc 0xee 0xc3 0x56 0x57 0x1e 0x52 0x51 0x53 0x50 0x0e 0x1f 0x8a 0x06 0x02 0x00 0x84 0xc0 0x75 0x03 0xe9 0x98 0x00 0x33 0xdb 0xfe 0x4f 0x0a 0x74 0x03 0xe9 0x8e 0x00 0x8a 0x47 0x0d 0x84 0xc0 0x75 0x13 0x8a 0x47 0x0c 0x84 0xc0 0x74 0x0c 0x88 0x47 0x0a 0xe8 0xc6 0xff 0xc6 0x47 0x0d 0x01 0xeb 0xe3 0x8b 0x77 0x07 0xfc 0xac 0x24 0x7f 0x74 0x3b 0x32 0xe4 0xa8 0x40 0x74 0x04 0x24 0x3f 0xfe 0xc4 0x88 0x47 0x0b 0x88 0x67 0x0c 0xac 0x89 0x77 0x07 0x3c 0xff 0x75 0x05 0x8a 0x47 0x0b 0xeb 0xce 0x8a 0x67 0x0b 0x2a 0x67 0x0c 0x88 0x67 0x0a 0x32 0xf6 0x8a 0xd0 0xd1 0xe2 0x8b 0xfa 0x8b 0x55 0x24 0xe8 0x70 0xff 0xc6 0x47 0x0d 0x00 0xe9 0x30 0x00 0x8b 0x77 0x05 0xfe 0x4f 0x09 0x75 0x18 0x83 0xc6 0x03 0x8a 0x04 0x84 0xc0 0x75 0x09 0x33 0xc0 0x89 0x06 0x02 0x00 0xe9 0x16 0x00 0x89 0x77 0x05 0x88 0x47 0x09 0x8b 0x44 0x01 0x89 0x47 0x07 0xc6 0x47 0x0a 0x01 0xc6 0x47 0x0d 0x01 0xeb 0x8c 0x58 0x5b 0x59 0x5a 0x1f 0x5f 0x5e 0xea 0x00 0x00 0x00 0x00 ' !   ADDR 10  LLOT R     4  g     CR        20D1   ~|?             w ;    }     =  q 8G #          jb5  X   V      dc21   L &   =  _ /        |    Y ,r 9     g |  T_*/   K   R    O '       ?   K %  o   [ -   BG #    t :     BC !  h 4        C   B   B a   a  a  $   VW RQSP        u    3  O t     G   u  G   t  G     G     w   $t;2  @t $?   G  g   w < u  G    g *g  g 2        U$ p  G   0  w  O u        u 3         w  G  D  G  G   G    X[YZ _^     '

// ================================================
// 0xed97: WORD 'RND1' codep=0x1d29 parp=0xeda0
// ================================================
// 0xeda0: db 0x01 0x3d 0x01 0x15 0x01 0x2d 0x01 0x25 0x00 0x00 ' =   - %  '

// ================================================
// 0xedaa: WORD 'RND2' codep=0x1d29 parp=0xedb3
// ================================================
// 0xedb3: db 0x01 0x4d 0x01 0x15 0x01 0x25 0x01 0x05 0x00 0x00 ' M   %    '

// ================================================
// 0xedbd: WORD 'RND3' codep=0x1d29 parp=0xedc6
// ================================================
// 0xedc6: db 0x01 0x3d 0x01 0x4d 0x01 0x2d 0x01 0x05 0x00 0x00 ' = M -    '

// ================================================
// 0xedd0: WORD 'P6' codep=0x1d29 parp=0xedd7
// ================================================
// 0xedd7: db 0x09 0x3d 0x03 0x2d 0x09 0x1d 0x03 0x2d 0x09 0x15 0x03 0x1d 0x09 0x05 0x03 0x54 0x70 0x05 0x00 0x00 ' = -   -       Tp   '

// ================================================
// 0xedeb: WORD 'GLISS' codep=0x1d29 parp=0xedf5
// ================================================
// 0xedf5: db 0x01 0x07 0x01 0x0f 0x01 0x27 0x01 0x2f 0x01 0x37 0x01 0x3f 0x01 0x47 0x01 0x4f 0x01 0x57 0x01 0x5f 0x00 0x00 '     ' / 7 ? G O W _  '

// ================================================
// 0xee0b: WORD 'P1' codep=0x1d29 parp=0xee12
// ================================================
// 0xee12: db 0x09 0x3c 0x03 0x2c 0x09 0x24 0x03 0x2c 0x09 0x14 0x03 0x24 0x09 0x04 0x03 0x14 0x09 0x53 0x03 0x4b 0x18 0x3b 0x0c 0x3b 0x00 0x00 ' < , $ ,   $     S K ; ;  '

// ================================================
// 0xee2c: WORD 'R,' codep=0x224c parp=0xee33
// ================================================

void R_co_() // R,
{
  Push(cc_MUSSEG); // MUSSEG
  SEG_gt_ADDR(); // SEG>ADDR
  _dash_(); // -
  _co_(); // ,
}


// ================================================
// 0xee3d: WORD '0SONG' codep=0x1d29 parp=0xee47
// ================================================
// 0xee47: db 0x01 0x15 0x02 0x03 0xc0 0x01 0x01 0x15 0x02 0x01 0x32 0x02 0x00 0x00 '          2   '

// ================================================
// 0xee55: WORD 'P9' codep=0x1d29 parp=0xee5c
// ================================================
// 0xee5c: db 0x43 0x06 0x12 0xff 0x00 0x00 'C     '

// ================================================
// 0xee62: WORD '1SONG' codep=0x1d29 parp=0xee6c
// ================================================
// 0xee6c: db 0x0d 0x7c 0x02 0x00 0x00 ' |   '

// ================================================
// 0xee71: WORD 'P10' codep=0x1d29 parp=0xee79
// ================================================
// 0xee79: db 0x43 0x2c 0x06 0xff 0x00 0x00 'C,    '

// ================================================
// 0xee7f: WORD '2SONG' codep=0x1d29 parp=0xee89
// ================================================
// 0xee89: db 0x02 0xc0 0x01 0x02 0xd3 0x01 0x02 0xc0 0x01 0x02 0xe6 0x01 0x02 0xc0 0x01 0x02 0xd3 0x01 0x02 0xe6 0x01 0xff 0x99 0x02 0x00 0x00 '                          '

// ================================================
// 0xeea3: WORD 'UNK_0xeea5' codep=0x1d29 parp=0xeea5
// ================================================
// 0xeea5: db 0x00 0x00 '  '

// ================================================
// 0xeea7: WORD 'UNK_0xeea9' codep=0x224c parp=0xeea9
// ================================================

void UNK_0xeea9() // UNK_0xeea9
{
  Push(pp_UNK_0xeea5); // UNK_0xeea5
  Push(Read16(sp)); // DUP
  _i_KEY(); // 'KEY
  if (Pop() == 0) goto label1;
  ON(); // ON
  goto label2;

  label1:
  Pop(); // DROP

  label2:
  Push(Read16(Pop())); // @
}


// ================================================
// 0xeebf: WORD 'UNK_0xeec1' codep=0x224c parp=0xeec1
// ================================================

void UNK_0xeec1() // UNK_0xeec1
{
  Push(0x001e);
  Push(cc_MPS); // MPS
  Push(Pop() * Pop()); // *
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  NOP(); // NOP
  i++;
  } while(i<imax); // (LOOP) 0xfffc

}


// ================================================
// 0xeed5: WORD 'UNK_0xeed7' codep=0x224c parp=0xeed7
// ================================================

void UNK_0xeed7() // UNK_0xeed7
{
  UNK_0xeea9(); // UNK_0xeea9
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(0); // 0
  Push(0x03e8);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  TONE(); // TONE
  UNK_0xeec1(); // UNK_0xeec1
  Push(0xffec);
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff4

}


// ================================================
// 0xeef7: WORD 'UNK_0xeef9' codep=0x224c parp=0xeef9
// ================================================

void UNK_0xeef9() // UNK_0xeef9
{
  UNK_0xeea9(); // UNK_0xeea9
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  BEEPON(); // BEEPON
  Push(0x07d0);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  UNK_0xeec1(); // UNK_0xeec1
  UNK_0xeea9(); // UNK_0xeea9
  if (Pop() == 0) goto label1;
  LEAVE(); // LEAVE

  label1:
  Push(i); // I
  Push(cc__5); // 5
  _slash_(); // /
  Push(0x0064);
  Push(Pop() + Pop()); // +
  TONE(); // TONE
  i++;
  } while(i<imax); // (LOOP) 0xffe6

}


// ================================================
// 0xef29: WORD 'UNK_0xef2b' codep=0x224c parp=0xef2b
// ================================================

void UNK_0xef2b() // UNK_0xef2b
{
  UNK_0xeea9(); // UNK_0xeea9
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(0x03e8);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x0064);
  Push(0x012c);
  RRND(); // RRND
  TONE(); // TONE
  UNK_0xeec1(); // UNK_0xeec1
  UNK_0xeea9(); // UNK_0xeea9
  if (Pop() == 0) goto label1;
  LEAVE(); // LEAVE

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffe8

}


// ================================================
// 0xef57: WORD 'UNK_0xef59' codep=0x224c parp=0xef59
// ================================================

void UNK_0xef59() // UNK_0xef59
{
  Push(0x001c);
  _ro__ex_OLD_rc_(); // (!OLD)
  Push(Read16(sp)); // DUP
  Push(cc_UNK_0xeb7e); // UNK_0xeb7e
  UNK_0xebbe(); // UNK_0xebbe
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xef6b: WORD 'INITMUS' codep=0x224c parp=0xef77
// ================================================

void INITMUS() // INITMUS
{
  UNK_0xef59(); // UNK_0xef59
  if (Pop() == 0) goto label1;
  Push(0); // 0
  Push(cc_UNK_0xeb7a); // UNK_0xeb7a
  UNK_0xebce(); // UNK_0xebce
  Push(cc_UNK_0xeb76); // UNK_0xeb76
  UNK_0xebbe(); // UNK_0xebbe
  _gt_R(); // >R
  Push(h); // I
  UNK_0xebb6(); // UNK_0xebb6
  R_gt_(); // R>
  Push(Pop()+2); // 2+
  UNK_0xebb6(); // UNK_0xebb6
  Push(cc_MUSSEG); // MUSSEG
  Push(cc_UNK_0xeb7e); // UNK_0xeb7e
  UNK_0xebbe(); // UNK_0xebbe
  Push(0x001c);
  _ro__ex_SET_rc_(); // (!SET)
  goto label2;

  label1:
  Pop(); Pop();// 2DROP

  label2:
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xefa9: WORD 'HIMUS' codep=0x224c parp=0xefb3
// ================================================
// entry

void HIMUS() // HIMUS
{
  UNK_0xef59(); // UNK_0xef59
  if (Pop() == 0) goto label1;
  _at_DS(); // @DS
  Push(pp_UNK_0xebaa); // UNK_0xebaa
  Push(Read16(Pop())); // @
  Push(cc_MUSSEG); // MUSSEG
  Push(0); // 0
  Push(0x0320);
  LCMOVE(); // LCMOVE
  INITMUS(); // INITMUS

  label1:
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xefcf: WORD 'UNK_0xefd1' codep=0x224c parp=0xefd1
// ================================================

void UNK_0xefd1() // UNK_0xefd1
{
  Push(pp_FONTSEG); // FONTSEG
  Push(Read16(Pop())); // @
  Push(0x008f);
  Func6("FILE-#R");
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xefe1: WORD 'UNK_0xefe3' codep=0x224c parp=0xefe3
// ================================================

void UNK_0xefe3() // UNK_0xefe3
{
  BMWIDE(); // BMWIDE
  Push(Read16(Pop())); // @
  Push(pp_P_slash_B); // P/B
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  _gt_R(); // >R
  Push(Pop()-1); // 1-
  Push(Pop() + Pop()); // +
  R_gt_(); // R>
  _slash_(); // /
  Push(Read16(sp)); // DUP
  BMBYTES(); // BMBYTES
  C_ex_(); // C!
  BMHIGH(); // BMHIGH
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() * Pop()); // *
  Push(pp_PLZ); // PLZ
  _ex_(); // !
}


// ================================================
// 0xf009: WORD 'UNK_0xf00b' codep=0x224c parp=0xf00b
// ================================================

void UNK_0xf00b() // UNK_0xf00b
{
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  L_at_(); // L@
  BMWIDE(); // BMWIDE
  _ex_(); // !
}


// ================================================
// 0xf019: WORD 'UNK_0xf01b' codep=0x224c parp=0xf01b
// ================================================

void UNK_0xf01b() // UNK_0xf01b
{
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(0x000a);
  LC_at_(); // LC@
  BMHIGH(); // BMHIGH
  C_ex_(); // C!
}

// 0xf02b: db 0x29 0x1d 0x3a 0x20 0x05 0x41 ') :  A'

// ================================================
// 0xf031: WORD 'UNK_0xf033' codep=0x224c parp=0xf033
// ================================================

void UNK_0xf033() // UNK_0xf033
{
  UNK_0xf00b(); // UNK_0xf00b
  UNK_0xf01b(); // UNK_0xf01b
  UNK_0xefe3(); // UNK_0xefe3
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(0x000d);
  Push(pp_SRC); // SRC
  _ex_(); // !
  Push(2); // 2
  Push(Read16(sp)); // DUP
  Push(pp_DST); // DST
  _ex_(); // !
  BMOFF(); // BMOFF
  _ex_(); // !
  UNK_0xefd1(); // UNK_0xefd1
  Push(pp_SEGME); // SEGME
  _ex_(); // !
  UNK_0xefd1(); // UNK_0xefd1
  BMSEG(); // BMSEG
  _ex_(); // !

  label1:
  Push(0); // 0
  Push(pp_BMAP); // BMAP
  Push(0x000c);
  Push(Pop() + Pop()); // +
  _ex_(); // !
}


// ================================================
// 0xf06f: WORD 'UNK_0xf071' codep=0x224c parp=0xf071
// ================================================

void UNK_0xf071() // UNK_0xf071
{
  BMHIGH(); // BMHIGH
  Push(Read8(Pop())&0xFF); // C@
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_SRC); // SRC
  Push(Read16(Pop())); // @
  Push(pp_DST); // DST
  Push(Read16(Pop())); // @
  BMBYTES(); // BMBYTES
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(sp)); // DUP
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  _gt_PLANES(); // >PLANES
  Push(cc__4); // 4
  Push(pp_SRC); // SRC
  _plus__ex_(); // +!
  Push(1); // 1
  Push(pp_DST); // DST
  _plus__ex_(); // +!
  j++;
  } while(j<jmax); // (LOOP) 0xfff0

  Push(Pop() + Pop()); // +
  Push(pp_DST); // DST
  _ex_(); // !
  BMWIDE(); // BMWIDE
  Push(Read16(Pop())); // @
  Push(Pop()>>1); // 2/
  Push(Pop() + Pop()); // +
  Push(pp_SRC); // SRC
  _ex_(); // !
  i++;
  } while(i<imax); // (LOOP) 0xffc8

}


// ================================================
// 0xf0b5: WORD 'UNK_0xf0b7' codep=0x224c parp=0xf0b7
// ================================================

void UNK_0xf0b7() // UNK_0xf0b7
{
  Push(cc__3); // 3
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf0bd: WORD 'UNK_0xf0bf' codep=0x224c parp=0xf0bf
// ================================================

void UNK_0xf0bf() // UNK_0xf0bf
{
  BMSEG(); // BMSEG
  Push(Read16(Pop())); // @
  Push(pp_SRC); // SRC
  Push(Read16(Pop())); // @
  LC_at_(); // LC@
  Push(Read16(sp)); // DUP
  Push(1); // 1
  Push(pp_SRC); // SRC
  _plus__ex_(); // +!
}


// ================================================
// 0xf0d3: WORD 'UNK_0xf0d5' codep=0x224c parp=0xf0d5
// ================================================

void UNK_0xf0d5() // UNK_0xf0d5
{
  BMOFF(); // BMOFF
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(pp_DST); // DST
  _ex_(); // !
  Push(pp_SRC); // SRC
  _ex_(); // !
  BMBYTES(); // BMBYTES
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(sp)); // DUP
  Push(Pop()+1); // 1+
  Push(Pop()>>1); // 2/
  BMBYTES(); // BMBYTES
  C_ex_(); // C!
  BMHIGH(); // BMHIGH
  Push(Read16(Pop())); // @
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(Read16(sp)); // DUP

  label3:
  UNK_0xf0bf(); // UNK_0xf0bf
  Push(Pop()>>4); // 16/
  UNK_0xf0b7(); // UNK_0xf0b7
  Push(0x0040);
  Push(Pop() * Pop()); // *
  _gt_R(); // >R
  UNK_0xf0b7(); // UNK_0xf0b7
  Push(Pop()<<4); // 16*
  _gt_R(); // >R
  Push(Pop()-1); // 1-
  Push(Read16(sp)); // DUP
  if (Pop() == 0) goto label1;
  UNK_0xf0bf(); // UNK_0xf0bf
  Push(Pop()>>4); // 16/
  UNK_0xf0b7(); // UNK_0xf0b7
  _4_star_(); // 4*
  _gt_R(); // >R
  UNK_0xf0b7(); // UNK_0xf0b7
  goto label2;

  label1:
  Push2Words("NULL");
  _gt_R(); // >R

  label2:
  R_gt_(); // R>
  Push(Pop() | Pop()); // OR
  R_gt_(); // R>
  Push(Pop() | Pop()); // OR
  R_gt_(); // R>
  Push(Pop() | Pop()); // OR
  BMSEG(); // BMSEG
  Push(Read16(Pop())); // @
  Push(pp_DST); // DST
  Push(Read16(Pop())); // @
  LC_ex_(); // LC!
  Push(1); // 1
  Push(pp_DST); // DST
  _plus__ex_(); // +!
  Push(Pop()-1); // 1-
  Push(0); // 0
  MAX(); // MAX
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label3;
  i++;
  } while(i<imax); // (LOOP) 0xffa2

  Pop(); // DROP
}


// ================================================
// 0xf15d: WORD '!VPAL' codep=0x224c parp=0xf167
// ================================================

void _ex_VPAL() // !VPAL
{
  PAD_gt_SEG(); // PAD>SEG
  Push(0x0036);
  FILE_st_(); // FILE<
  _at_DS(); // @DS
  Push(cc_DS); // DS
  _ex_(); // !
  PAD_v_16(); // PAD|16
  Push(cc_BX); // BX
  _ex_(); // !
  Push(cc__9); // 9
  Push(cc_AX); // AX
  _ex_(); // !
  GRCALL(); // GRCALL
}


// ================================================
// 0xf185: WORD 'SETABLT' codep=0x224c parp=0xf191
// ================================================
// entry

void SETABLT() // SETABLT
{
  UNK_0xf033(); // UNK_0xf033
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xf071(); // UNK_0xf071
  UNK_0xefd1(); // UNK_0xefd1
  Push(2); // 2
  goto label2;

  label1:
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(0x000d);

  label2:
  BMOFF(); // BMOFF
  _ex_(); // !
  BMSEG(); // BMSEG
  _ex_(); // !
  _ask_CGA(); // ?CGA
  if (Pop() == 0) return;
  UNK_0xf0d5(); // UNK_0xf0d5
}


// ================================================
// 0xf1bf: WORD 'EGAT' codep=0x2214 parp=0xf1c8
// ================================================
// 0xf1c8: db 0xcb 0xf1 0x00 0x73 0x70 0x6c 0x73 0x68 0x74 0x6f 0x70 0x2e 0x65 0x67 0x61 0x00 '   splshtop.ega '

// ================================================
// 0xf1d8: WORD 'EGAB' codep=0x2214 parp=0xf1e1
// ================================================
// 0xf1e1: db 0xe4 0xf1 0x00 0x73 0x70 0x6c 0x73 0x68 0x62 0x6f 0x74 0x2e 0x65 0x67 0x61 0x00 '   splshbot.ega '

// ================================================
// 0xf1f1: WORD 'VGAS' codep=0x2214 parp=0xf1fa
// ================================================
// 0xf1fa: db 0xfd 0xf1 0x00 0x73 0x70 0x6c 0x73 0x68 0x2e 0x76 0x67 0x61 0x00 '   splsh.vga '

// ================================================
// 0xf207: WORD 'UNK_0xf209' codep=0x224c parp=0xf209
// ================================================

void UNK_0xf209() // UNK_0xf209
{
  _ask_VGA(); // ?VGA
  if (Pop() == 0) goto label1;
  Push(cc_VGAS); // VGAS
  return;

  label1:
  Push(cc_EGAB); // EGAB
  Push(cc_EGAT); // EGAT
}


// ================================================
// 0xf21b: WORD 'UNK_0xf21d' codep=0x224c parp=0xf21d
// ================================================

void UNK_0xf21d() // UNK_0xf21d
{
  UNK_0xf209(); // UNK_0xf209
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  _ro_LDS_rc_(); // (LDS)
  SETABLT(); // SETABLT
  _ask_VGA(); // ?VGA
  if (Pop() == 0) goto label1;
  Push(1); // 1
  BMPAL(); // BMPAL
  C_ex_(); // C!

  label1:
  DARK(); // DARK
  Push(0); // 0
  Push(0x00c7);
  _dot_RAW(); // .RAW
  _ask_VGA(); // ?VGA
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  _ro_LDS_rc_(); // (LDS)
  SETABLT(); // SETABLT
  Push(0); // 0
  Push(0x0064);
  _dot_RAW(); // .RAW
}


// ================================================
// 0xf257: WORD 'UNK_0xf259' codep=0x1d29 parp=0xf259
// ================================================
// 0xf259: db 0x3a 0x20 ': '

// ================================================
// 0xf25b: WORD 'UNK_0xf25d' codep=0x1d29 parp=0xf25d
// ================================================
// 0xf25d: db 0x3a 0x20 ': '

// ================================================
// 0xf25f: WORD 'UNK_0xf261' codep=0x1d29 parp=0xf261
// ================================================
// 0xf261: db 0x3a 0x20 0x29 0x1d 0x3a 0x20 0x29 0x1d 0x3a 0x20 ': ) : ) : '

// ================================================
// 0xf26b: WORD 'PARAS' codep=0x1d29 parp=0xf275
// ================================================
// 0xf275: db 0x00 0x04 0x00 0x08 0x00 0x10 0x00 0x20 '        '

// ================================================
// 0xf27d: WORD 'UNK_0xf27f' codep=0x224c parp=0xf27f
// ================================================

void UNK_0xf27f() // UNK_0xf27f
{
  Push(0xf000);
  Push(0xc000);
  LC_at_(); // LC@
  Push(0x0021);
  _eq_(); // =
}


// ================================================
// 0xf291: WORD '@K' codep=0xf298 parp=0xf298
// ================================================
// 0xf298: int    12
// 0xf29a: push   ax
// 0xf29b: lodsw
// 0xf29c: mov    bx,ax
// 0xf29e: jmp    word ptr [bx]

// ================================================
// 0xf2a0: WORD '?ALREADY' codep=0xf2ad parp=0xf2ad
// ================================================
// 0xf2ad: mov    ax,7000
// 0xf2b0: mov    bx,0001
// 0xf2b3: int    15
// 0xf2b5: jae    F2B9
// 0xf2b7: xor    dx,dx
// 0xf2b9: push   dx
// 0xf2ba: lodsw
// 0xf2bb: mov    bx,ax
// 0xf2bd: jmp    word ptr [bx]

// ================================================
// 0xf2bf: WORD 'UNK_0xf2c1' codep=0x224c parp=0xf2c1
// ================================================

void UNK_0xf2c1() // UNK_0xf2c1
{
  _ask_ERR(); // ?ERR
  if (Pop() == 0) return;
  Push(cc_AX); // AX
  _ask_(); // ?
  PRINT("DOS call error !", 16); // (.")
  KEY(); // KEY
  QUIT(); // QUIT
}


// ================================================
// 0xf2e4: WORD 'UNK_0xf2e6' codep=0x224c parp=0xf2e6
// ================================================

void UNK_0xf2e6() // UNK_0xf2e6
{
  Push(cc__16K); // 16K
  Push(Pop()*2); // 2*
  Push(Pop()>>4); // 16/
  Push(pp_UNK_0xf25d); // UNK_0xf25d
  _ex_(); // !
}


// ================================================
// 0xf2f2: WORD 'UNK_0xf2f4' codep=0x224c parp=0xf2f4
// ================================================

void UNK_0xf2f4() // UNK_0xf2f4
{
  Push(0x0100);
  _slash_(); // /
  Push(cc__3); // 3
  Push(Pop() & Pop()); // AND
  Push(pp_PARAS); // PARAS
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xf259); // UNK_0xf259
  _ex_(); // !
}


// ================================================
// 0xf30a: WORD 'UNK_0xf30c' codep=0x224c parp=0xf30c
// ================================================

void UNK_0xf30c() // UNK_0xf30c
{
  Push(cc_BX); // BX
  _ex_(); // !
  Push(0x0048);
  DOSCALL(); // DOSCALL
  UNK_0xf2c1(); // UNK_0xf2c1
  Push(cc_AX); // AX
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf31e: WORD 'UNK_0xf320' codep=0x224c parp=0xf320
// ================================================

void UNK_0xf320() // UNK_0xf320
{
  Push(pp_SYSK); // SYSK
  Push(Read16(Pop())); // @
  Push(0x0160);
  _st_(); // <
  if (Pop() == 0) return;
  PRINT("384k memory minimum needed!", 27); // (.")
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY(); // KEY
  BYE(); // BYE
}


// ================================================
// 0xf356: WORD 'UNK_0xf358' codep=0x224c parp=0xf358
// ================================================

void UNK_0xf358() // UNK_0xf358
{
  Push(pp_SYSK); // SYSK
  Push(Read16(Pop())); // @
  Push(0x0040);
  Push(Pop() * Pop()); // *
  OVER(); // OVER
  _dash_(); // -
  Push(pp_UNK_0xf261); // UNK_0xf261
  _ex_(); // !
  Push(0xc350);
  _at_DS(); // @DS
  SETBLOC(); // SETBLOC
  Pop(); // DROP
  OVER(); // OVER
  _dash_(); // -
  Push(1); // 1
  _dash_(); // -
  _at_DS(); // @DS
  SETBLOC(); // SETBLOC
  Pop(); Pop();// 2DROP
  UNK_0xf30c(); // UNK_0xf30c
}


// ================================================
// 0xf386: WORD 'UNK_0xf388' codep=0x224c parp=0xf388
// ================================================

void UNK_0xf388() // UNK_0xf388
{
  Push(pp_UNK_0xf25d); // UNK_0xf25d
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xf259); // UNK_0xf259
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(Read16(sp)); // DUP
  _0_gt_(); // 0>
  Push(pp_UNK_0xf25d); // UNK_0xf25d
  Push(Read16(Pop())); // @
  Push(cc__16K); // 16K
  Push(Pop()>>4); // 16/
  _gt_(); // >
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf3a4: WORD 'TANDY-ALLOC' codep=0x224c parp=0xf3b4
// ================================================
// entry

void TANDY_dash_ALLOC() // TANDY-ALLOC
{
  Push(pp_TANDY); // TANDY
  _099(); // 099
  UNK_0xf27f(); // UNK_0xf27f
  if (Pop() == 0) goto label1;
  _at_K(); // @K
  Push(Read16(sp)); // DUP
  Push(pp_SYSK); // SYSK
  _ex_(); // !
  UNK_0xf320(); // UNK_0xf320
  Push(0x0280);
  _st_(); // <
  if (Pop() == 0) goto label1;
  _ask_ALREADY(); // ?ALREADY
  UNK_0xf2f4(); // UNK_0xf2f4
  UNK_0xf2e6(); // UNK_0xf2e6
  UNK_0xf388(); // UNK_0xf388
  if (Pop() == 0) goto label2;
  UNK_0xf358(); // UNK_0xf358
  goto label1;

  label2:
  Pop(); // DROP

  label1:
  Push(0x0010);
  Push(pp_TANDY); // TANDY
  _ex_(); // !
}


// ================================================
// 0xf3f0: WORD 'UNK_0xf3f2' codep=0x224c parp=0xf3f2
// ================================================

void UNK_0xf3f2() // UNK_0xf3f2
{
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+

  label1:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_gt_(); // D>
  _i_KEY(); // 'KEY
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xf40c: WORD 'UNK_0xf40e' codep=0x224c parp=0xf40e
// ================================================

void UNK_0xf40e() // UNK_0xf40e
{
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  _gt_HIDDEN(); // >HIDDEN
  goto label2;

  label1:
  _gt_DISPLA(); // >DISPLA

  label2:
  DARK(); // DARK
  UNK_0xf21d(); // UNK_0xf21d
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xf42e: WORD 'UNK_0xf430' codep=0x224c parp=0xf430
// ================================================

void UNK_0xf430() // UNK_0xf430
{
  Push(0x1bee);
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x0064);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x03e8);
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  NOP(); // NOP
  j++;
  } while(j<jmax); // (LOOP) 0xfffc

  i++;
  } while(i<imax); // (LOOP) 0xfff0

  TIME(); // TIME
  _2_at_(); // 2@
  _2SWAP(); // 2SWAP
  D_dash_(); // D-
  Pop(); // DROP
  _slash_(); // /
  Push(1); // 1
  MAX(); // MAX
  Push(0x53a9);
  _ex_(); // !
}


// ================================================
// 0xf46a: WORD 'SPLASH.SCREEN' codep=0x224c parp=0xf47c
// ================================================

void SPLASH_dot_SCREEN() // SPLASH.SCREEN
{
  UNK_0xf430(); // UNK_0xf430
  _gt_LORES(); // >LORES
  DARK(); // DARK
  CTINIT(); // CTINIT
  _ask_VGA(); // ?VGA
  if (Pop() == 0) goto label1;
  _ex_VPAL(); // !VPAL

  label1:
  UNK_0xeea9(); // UNK_0xeea9
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  UNK_0xf40e(); // UNK_0xf40e

  label2:
  UNK_0xeea9(); // UNK_0xeea9
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label3;
  BEEPON(); // BEEPON
  UNK_0xef2b(); // UNK_0xef2b
  UNK_0xeed7(); // UNK_0xeed7
  UNK_0xeed7(); // UNK_0xeed7
  UNK_0xeed7(); // UNK_0xeed7
  UNK_0xeed7(); // UNK_0xeed7
  UNK_0xeed7(); // UNK_0xeed7
  UNK_0xeef9(); // UNK_0xeef9
  Push(0); // 0
  Push(cc_MUSSEG); // MUSSEG
  Push(2); // 2
  LC_ex_(); // LC!
  BEEPOFF(); // BEEPOFF
  Push(0xafc8); Pust(0x0000);
  UNK_0xf3f2(); // UNK_0xf3f2
  DARK(); // DARK

  label3:
  Push(0); // 0
  Push(pp_BMAP); // BMAP
  Push(0x000d);
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
}


// ================================================
// 0xf4d0: WORD 'INTROS' codep=0x224c parp=0xf4db
// ================================================
// entry

void INTROS() // INTROS
{
  HIMUS(); // HIMUS
  SPLASH_dot_SCREEN(); // SPLASH.SCREEN
}

// 0xf4e1: db 0x4d 0x55 0x53 0x49 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 0xf5 0x00 0xf4 0x00 0xf3 0x00 0xf2 0x00 0xf1 0x00 0xf0 0x00 0xef 0x00 0xee 0x35 0x30 0x32 0xec 0x00 0xeb 0x00 0xea 0x00 0xe9 0x00 0xe8 0x00 0xe7 0x00 0xe6 0x31 0x31 0x35 0x37 0x00 0xe3 0x00 0xe2 0x00 0xe1 0x00 0xe0 0x00 0xdf 0x00 0xde 0x00 0xdd 0x00 0xdc 0x00 0xdb 0x00 0xda 0x00 0xd9 0x00 0xd8 0x00 0xd7 0x00 0xd6 0x00 0xd5 0x00 0xd4 0x00 0xd3 0x00 0xd2 0x00 0xd1 0x00 0xd0 0x00 0xcf 0x00 0xce 0x00 0xcd 0x00 0xcc 0x00 0xcb 0x00 0xca 0x00 0xc9 0x00 0xc8 0x00 0xc7 0x00 0x00 'MUSIC___________________________                502             1157                                                            '
  