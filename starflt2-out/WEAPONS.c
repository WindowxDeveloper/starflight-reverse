// ====== OVERLAY 'WEAPONS' ======
// store offset = 0xec10
// overlay size   = 0x0950

#include"cpu.h"
#include"starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0xad2d C-string:'UNK_0x3f09'
// 1870:      UNK_0xec38  codep:0x224c parp:0xec38 size:0x000a C-string:'UNK_0xec38'
// 1871:      UNK_0xec44  codep:0x224c parp:0xec44 size:0x0006 C-string:'UNK_0xec44'
// 1872:      UNK_0xec4c  codep:0x224c parp:0xec4c size:0x0006 C-string:'UNK_0xec4c'
// 1873:      UNK_0xec54  codep:0x224c parp:0xec54 size:0x000c C-string:'UNK_0xec54'
// 1874:      UNK_0xec62  codep:0x7420 parp:0xec62 size:0x0008 C-string:'UNK_0xec62'
// 1875:      UNK_0xec6c  codep:0x7420 parp:0xec6c size:0x0008 C-string:'UNK_0xec6c'
// 1876:      UNK_0xec76  codep:0x7420 parp:0xec76 size:0x0003 C-string:'UNK_0xec76'
// 1877:      UNK_0xec7b  codep:0x224c parp:0xec7b size:0x002e C-string:'UNK_0xec7b'
// 1878:      UNK_0xecab  codep:0x224c parp:0xecab size:0x0006 C-string:'UNK_0xecab'
// 1879:      UNK_0xecb3  codep:0x224c parp:0xecb3 size:0x0006 C-string:'UNK_0xecb3'
// 1880:      UNK_0xecbb  codep:0x224c parp:0xecbb size:0x0044 C-string:'UNK_0xecbb'
// 1881:      UNK_0xed01  codep:0x224c parp:0xed01 size:0x000c C-string:'UNK_0xed01'
// 1882:      UNK_0xed0f  codep:0x224c parp:0xed0f size:0x000c C-string:'UNK_0xed0f'
// 1883:      UNK_0xed1d  codep:0x224c parp:0xed1d size:0x000c C-string:'UNK_0xed1d'
// 1884:      UNK_0xed2b  codep:0x224c parp:0xed2b size:0x000c C-string:'UNK_0xed2b'
// 1885:      UNK_0xed39  codep:0x224c parp:0xed39 size:0x000c C-string:'UNK_0xed39'
// 1886:      UNK_0xed47  codep:0x224c parp:0xed47 size:0x0014 C-string:'UNK_0xed47'
// 1887:      UNK_0xed5d  codep:0x1d29 parp:0xed5d size:0x0002 C-string:'UNK_0xed5d'
// 1888:      UNK_0xed61  codep:0x224c parp:0xed61 size:0x0046 C-string:'UNK_0xed61'
// 1889:      UNK_0xeda9  codep:0x224c parp:0xeda9 size:0x000a C-string:'UNK_0xeda9'
// 1890:      UNK_0xedb5  codep:0x224c parp:0xedb5 size:0x0024 C-string:'UNK_0xedb5'
// 1891:      UNK_0xeddb  codep:0x224c parp:0xeddb size:0x0008 C-string:'UNK_0xeddb'
// 1892:      UNK_0xede5  codep:0x224c parp:0xede5 size:0x0010 C-string:'UNK_0xede5'
// 1893:      UNK_0xedf7  codep:0x224c parp:0xedf7 size:0x0066 C-string:'UNK_0xedf7'
// 1894:      UNK_0xee5f  codep:0x224c parp:0xee5f size:0x004b C-string:'UNK_0xee5f'
// 1895:      UNK_0xeeac  codep:0x224c parp:0xeeac size:0x0032 C-string:'UNK_0xeeac'
// 1896:      UNK_0xeee0  codep:0x224c parp:0xeee0 size:0x0014 C-string:'UNK_0xeee0'
// 1897:      UNK_0xeef6  codep:0x224c parp:0xeef6 size:0x000a C-string:'UNK_0xeef6'
// 1898:      UNK_0xef02  codep:0x224c parp:0xef02 size:0x0008 C-string:'UNK_0xef02'
// 1899:      UNK_0xef0c  codep:0x224c parp:0xef0c size:0x0016 C-string:'UNK_0xef0c'
// 1900:      UNK_0xef24  codep:0x224c parp:0xef24 size:0x0006 C-string:'UNK_0xef24'
// 1901:      UNK_0xef2c  codep:0x224c parp:0xef2c size:0x001a C-string:'UNK_0xef2c'
// 1902:      UNK_0xef48  codep:0x224c parp:0xef48 size:0x000a C-string:'UNK_0xef48'
// 1903:      UNK_0xef54  codep:0x224c parp:0xef54 size:0x0030 C-string:'UNK_0xef54'
// 1904:      UNK_0xef86  codep:0x224c parp:0xef86 size:0x001c C-string:'UNK_0xef86'
// 1905:      UNK_0xefa4  codep:0x224c parp:0xefa4 size:0x002e C-string:'UNK_0xefa4'
// 1906:      UNK_0xefd4  codep:0x224c parp:0xefd4 size:0x0026 C-string:'UNK_0xefd4'
// 1907:      UNK_0xeffc  codep:0x224c parp:0xeffc size:0x0048 C-string:'UNK_0xeffc'
// 1908:      UNK_0xf046  codep:0x1d29 parp:0xf046 size:0x0004 C-string:'UNK_0xf046'
// 1909:      UNK_0xf04c  codep:0x1d29 parp:0xf04c size:0x0004 C-string:'UNK_0xf04c'
// 1910:      UNK_0xf052  codep:0x1d29 parp:0xf052 size:0x0004 C-string:'UNK_0xf052'
// 1911:      UNK_0xf058  codep:0x1d29 parp:0xf058 size:0x0004 C-string:'UNK_0xf058'
// 1912:      UNK_0xf05e  codep:0x1d29 parp:0xf05e size:0x0004 C-string:'UNK_0xf05e'
// 1913:      UNK_0xf064  codep:0x224c parp:0xf064 size:0x000e C-string:'UNK_0xf064'
// 1914:      UNK_0xf074  codep:0x224c parp:0xf074 size:0x001e C-string:'UNK_0xf074'
// 1915:      UNK_0xf094  codep:0x224c parp:0xf094 size:0x0052 C-string:'UNK_0xf094'
// 1916:      UNK_0xf0e8  codep:0x224c parp:0xf0e8 size:0x000a C-string:'UNK_0xf0e8'
// 1917:      UNK_0xf0f4  codep:0x224c parp:0xf0f4 size:0x0042 C-string:'UNK_0xf0f4'
// 1918:      UNK_0xf138  codep:0x224c parp:0xf138 size:0x001e C-string:'UNK_0xf138'
// 1919:      UNK_0xf158  codep:0x224c parp:0xf158 size:0x0018 C-string:'UNK_0xf158'
// 1920:      UNK_0xf172  codep:0x224c parp:0xf172 size:0x0098 C-string:'UNK_0xf172'
// 1921:      UNK_0xf20c  codep:0x224c parp:0xf20c size:0x003c C-string:'UNK_0xf20c'
// 1922:      UNK_0xf24a  codep:0x224c parp:0xf24a size:0x0008 C-string:'UNK_0xf24a'
// 1923:      UNK_0xf254  codep:0x1d29 parp:0xf254 size:0x0002 C-string:'UNK_0xf254'
// 1924:      UNK_0xf258  codep:0x224c parp:0xf258 size:0x0012 C-string:'UNK_0xf258'
// 1925:      UNK_0xf26c  codep:0x224c parp:0xf26c size:0x003c C-string:'UNK_0xf26c'
// 1926:      UNK_0xf2aa  codep:0x224c parp:0xf2aa size:0x0010 C-string:'UNK_0xf2aa'
// 1927:      UNK_0xf2bc  codep:0x224c parp:0xf2bc size:0x0016 C-string:'UNK_0xf2bc'
// 1928:      UNK_0xf2d4  codep:0x224c parp:0xf2d4 size:0x001e C-string:'UNK_0xf2d4'
// 1929:      UNK_0xf2f4  codep:0x224c parp:0xf2f4 size:0x0010 C-string:'UNK_0xf2f4'
// 1930:      UNK_0xf306  codep:0x224c parp:0xf306 size:0x003e C-string:'UNK_0xf306'
// 1931:       GNUNK>NUL  codep:0x224c parp:0xf352 size:0x0020 C-string:'GNUNK_gt_NUL'
// 1932:      UNK_0xf374  codep:0x224c parp:0xf374 size:0x0046 C-string:'UNK_0xf374'
// 1933:      UNK_0xf3bc  codep:0x224c parp:0xf3bc size:0x0032 C-string:'UNK_0xf3bc'
// 1934:      UNK_0xf3f0  codep:0x224c parp:0xf3f0 size:0x0056 C-string:'UNK_0xf3f0'
// 1935:      UNK_0xf448  codep:0x224c parp:0xf448 size:0x002c C-string:'UNK_0xf448'
// 1936:      UNK_0xf476  codep:0x224c parp:0xf476 size:0x0010 C-string:'UNK_0xf476'
// 1937:          DONULL  codep:0x224c parp:0xf491 size:0x0086 C-string:'DONULL'
// 1938:            TARG  codep:0x224c parp:0xf520 size:0x0000 C-string:'TARG'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xed5d[2] = {0x3a, 0x20}; // UNK_0xed5d
unsigned char UNK_0xf046[4] = {0x56, 0x3a, 0x20, 0x0a}; // UNK_0xf046
unsigned char UNK_0xf04c[4] = {0x56, 0x3a, 0x20, 0x5d}; // UNK_0xf04c
unsigned char UNK_0xf052[4] = {0x56, 0x3a, 0x20, 0x90}; // UNK_0xf052
unsigned char UNK_0xf058[4] = {0x56, 0x3a, 0x20, 0xc2}; // UNK_0xf058
unsigned char UNK_0xf05e[4] = {0x56, 0x3a, 0x20, 0x89}; // UNK_0xf05e
unsigned char UNK_0xf254[2] = {0x3a, 0x20}; // UNK_0xf254



// 0xec22: db 0x94 0x00 0x4c 0x22 0xef 0x64 0x2f 0x7a 0x34 0x75 0x5d 0x17 0x0a 0x00 0x5f 0x12 0xdf 0x79 0x90 0x16 '  L" d/z4u]   _  y  '

// ================================================
// 0xec36: WORD 'UNK_0xec38' codep=0x224c parp=0xec38
// ================================================

void UNK_0xec38() // UNK_0xec38
{
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
}


// ================================================
// 0xec42: WORD 'UNK_0xec44' codep=0x224c parp=0xec44
// ================================================

void UNK_0xec44() // UNK_0xec44
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xec4a: WORD 'UNK_0xec4c' codep=0x224c parp=0xec4c
// ================================================

void UNK_0xec4c() // UNK_0xec4c
{
  Push(pp_XWLD_c_XP); // XWLD:XP
  Push(Read16(Pop())); // @
}


// ================================================
// 0xec52: WORD 'UNK_0xec54' codep=0x224c parp=0xec54
// ================================================

void UNK_0xec54() // UNK_0xec54
{
  UNK_0xec44(); // UNK_0xec44
  UNK_0xec38(); // UNK_0xec38
  ICLOSE(); // ICLOSE
}

// 0xec5c: db 0x14 0x22 0x14 0x00 ' "  '

// ================================================
// 0xec60: WORD 'UNK_0xec62' codep=0x7420 parp=0xec62
// ================================================
// 0xec62: db 0x14 0x30 0x02 0x20 0x74 0x14 0x45 0x04 ' 0  t E '

// ================================================
// 0xec6a: WORD 'UNK_0xec6c' codep=0x7420 parp=0xec6c
// ================================================
// 0xec6c: db 0x14 0x32 0x02 0x20 0x74 0x14 0x49 0x01 ' 2  t I '

// ================================================
// 0xec74: WORD 'UNK_0xec76' codep=0x7420 parp=0xec76
// ================================================
// 0xec76: db 0x14 0x57 0x01 ' W '

// ================================================
// 0xec79: WORD 'UNK_0xec7b' codep=0x224c parp=0xec7b
// ================================================

void UNK_0xec7b() // UNK_0xec7b
{
  _gt_C_plus_S(); // >C+S
  Push(0x65ec); // IFIELD(PHRASE$)
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}

// 0xec8b: db 0x4c 0x22 0xb3 0x0e 0x92 0x0f 0x41 0x0e 0xb3 0x0f 0xb4 0x0d 0x92 0x0f 0x41 0x0e 0xb3 0x0f 0x20 0x0f 0x90 0x0e 0x20 0x0f 0x65 0x10 0x91 0x4c 0x90 0x16 'L"    A       A         e  L  '

// ================================================
// 0xeca9: WORD 'UNK_0xecab' codep=0x224c parp=0xecab
// ================================================

void UNK_0xecab() // UNK_0xecab
{
  _gt_MAINVI(); // >MAINVI
  VCLIPSE(); // VCLIPSE
}


// ================================================
// 0xecb1: WORD 'UNK_0xecb3' codep=0x224c parp=0xecb3
// ================================================

void UNK_0xecb3() // UNK_0xecb3
{
  _gt_DISPLA(); // >DISPLA
  DCLIPSE(); // DCLIPSE
}


// ================================================
// 0xecb9: WORD 'UNK_0xecbb' codep=0x224c parp=0xecbb
// ================================================

void UNK_0xecbb() // UNK_0xecbb
{

  UNK_0x3f09(" ");
  _dot_TTY(); // .TTY
}

// 0xecc3: db 0x4c 0x22 0xdb 0x3f 0xdb 0x3f 0x07 0x40 0xfa 0x15 0x0a 0x00 0xde 0x0d 0xc4 0x52 0x60 0x16 0x28 0x00 0xdb 0x3f 0xb3 0x0e 0xf2 0x0e 0x92 0x0f 0x41 0x0e 0xfa 0x15 0x08 0x00 0x41 0x0e 0x58 0x10 0x4c 0x0f 0xb4 0x0d 0x92 0x0f 0x41 0x0e 0xfa 0x15 0x08 0x00 0x41 0x0e 0x58 0x10 0x4c 0x0f 0x90 0x0e 0x90 0x16 'L" ? ? @       R` (  ?      A     A X L     A     A X L     '

// ================================================
// 0xecff: WORD 'UNK_0xed01' codep=0x224c parp=0xed01
// ================================================

void UNK_0xed01() // UNK_0xed01
{
  Push(0x6285); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  SetColor("RED");
}


// ================================================
// 0xed0d: WORD 'UNK_0xed0f' codep=0x224c parp=0xed0f
// ================================================

void UNK_0xed0f() // UNK_0xed0f
{
  Push(0x62a0); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  SetColor("RED");
}


// ================================================
// 0xed1b: WORD 'UNK_0xed1d' codep=0x224c parp=0xed1d
// ================================================

void UNK_0xed1d() // UNK_0xed1d
{
  Push(0x62c5); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  SetColor("YELLOW");
}


// ================================================
// 0xed29: WORD 'UNK_0xed2b' codep=0x224c parp=0xed2b
// ================================================

void UNK_0xed2b() // UNK_0xed2b
{
  Push(0x62e7); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  SetColor("YELLOW");
}


// ================================================
// 0xed37: WORD 'UNK_0xed39' codep=0x224c parp=0xed39
// ================================================

void UNK_0xed39() // UNK_0xed39
{
  Push(0x630c); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  SetColor("GREEN");
}


// ================================================
// 0xed45: WORD 'UNK_0xed47' codep=0x224c parp=0xed47
// ================================================

void UNK_0xed47() // UNK_0xed47
{
  CTERASE(); // CTERASE
  Push(0x6326); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  _dot_TTY(); // .TTY
  Push(0x07d0);
  MS(); // MS
}


// ================================================
// 0xed5b: WORD 'UNK_0xed5d' codep=0x1d29 parp=0xed5d
// ================================================
// 0xed5d: db 0x3a 0x20 ': '

// ================================================
// 0xed5f: WORD 'UNK_0xed61' codep=0x224c parp=0xed61
// ================================================

void UNK_0xed61() // UNK_0xed61
{
  Push(pp_UNK_0xed5d); // UNK_0xed5d
  _099(); // 099
  Push(0x000e);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  Push(i); // I
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash_(); // ?ICONS-
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  POINT_gt_I(); // POINT>I
  _at_ID(); // @ID
  Push(0x001b);
  Push(0x0023);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label2;
  Push(0x012c);
  Push(pp_UNK_0xed5d); // UNK_0xed5d
  _plus__ex_(); // +!

  label2:
  j++;
  } while(j<jmax); // (LOOP) 0xffe4


  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffca

}


// ================================================
// 0xeda7: WORD 'UNK_0xeda9' codep=0x224c parp=0xeda9
// ================================================

void UNK_0xeda9() // UNK_0xeda9
{
  UNK_0xec44(); // UNK_0xec44
  Push(0x6613); // IFIELD(UNK_0xec6c)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedb3: WORD 'UNK_0xedb5' codep=0x224c parp=0xedb5
// ================================================

void UNK_0xedb5() // UNK_0xedb5
{
  Push(pp__ask_SUP); // ?SUP
  Push(Read16(Pop())); // @
  Push(pp_NLR); // NLR
  Push(Read16(Pop())); // @
  Push(cc__dash_1); // -1
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  UNK_0xec44(); // UNK_0xec44
  Push(0x6611); // IFIELD(UNK_0xec62)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  return;

  label1:
  Push(0); // 0
}


// ================================================
// 0xedd9: WORD 'UNK_0xeddb' codep=0x224c parp=0xeddb
// ================================================

void UNK_0xeddb() // UNK_0xeddb
{
  UNK_0xeda9(); // UNK_0xeda9
  UNK_0xedb5(); // UNK_0xedb5
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xede3: WORD 'UNK_0xede5' codep=0x224c parp=0xede5
// ================================================

void UNK_0xede5() // UNK_0xede5
{
  Push(pp_UNK_0xed5d); // UNK_0xed5d
  Push(Read16(Pop())); // @
  UNK_0xeddb(); // UNK_0xeddb
  _dash_(); // -
  Push(0x00c8);
  _gt_(); // >
}


// ================================================
// 0xedf5: WORD 'UNK_0xedf7' codep=0x224c parp=0xedf7
// ================================================

void UNK_0xedf7() // UNK_0xedf7
{
  Push(0x003b);
  Push(0x0028);
  POS_dot_(); // POS.
  Push(0x0018);
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
  UNK_0xed61(); // UNK_0xed61
  Push(pp_UNK_0xed5d); // UNK_0xed5d
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  R_at_(); // R@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  UNK_0xed39(); // UNK_0xed39
  goto label2;

  label1:
  UNK_0xeddb(); // UNK_0xeddb
  R_at_(); // R@
  _dash_(); // -
  _0_st_(); // 0<
  if (Pop() == 0) goto label3;
  UNK_0xede5(); // UNK_0xede5
  if (Pop() == 0) goto label4;
  UNK_0xed01(); // UNK_0xed01
  goto label5;

  label4:
  UNK_0xed0f(); // UNK_0xed0f

  label5:
  goto label2;

  label3:
  UNK_0xedb5(); // UNK_0xedb5
  R_at_(); // R@
  _dash_(); // -
  _0_st_(); // 0<
  if (Pop() == 0) goto label6;
  UNK_0xed1d(); // UNK_0xed1d
  goto label2;

  label6:
  UNK_0xed2b(); // UNK_0xed2b

  label2:
  R_gt_(); // R>
  Pop(); // DROP
  _ex_COLOR(); // !COLOR
  _gt_1FONT(); // >1FONT
  Func14(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xee5d: WORD 'UNK_0xee5f' codep=0x224c parp=0xee5f
// ================================================

void UNK_0xee5f() // UNK_0xee5f
{
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  _gt_2FONT(); // >2FONT
  Push(cc__3); // 3
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  CTERASE(); // CTERASE
  Push(0x00fa);
  MS(); // MS
  PRINT("TARGETING", 9); // (.")
  Push(0x00fa);
  MS(); // MS
  i++;
  } while(i<imax); // (LOOP) 0xffe4

  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  _gt_1FONT(); // >1FONT
  Push(cc__3); // 3
  Push(0x0028);
  POS_dot_(); // POS.
  PRINT("SAFETY FACTOR:", 14); // (.")
}


// ================================================
// 0xeeaa: WORD 'UNK_0xeeac' codep=0x224c parp=0xeeac
// ================================================

void UNK_0xeeac() // UNK_0xeeac
{
  CTINIT(); // CTINIT

  UNK_0x3f09("YOU HAVE ");
  _dot_TTY(); // .TTY
  UNK_0xec44(); // UNK_0xec44
  Push(0x6638); // IFIELD(UNK_0xec76)
  Push(Read8(Pop())&0xFF); // C@
  _dot_(); // .
  SPACE(); // SPACE
  ICLOSE(); // ICLOSE
  Push(0x6356); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  Func14(TYPE); // call of word 0x2690 '(TYPE)'
  Push(0x6378); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  _dot_TTY(); // .TTY
}


// ================================================
// 0xeede: WORD 'UNK_0xeee0' codep=0x224c parp=0xeee0
// ================================================

void UNK_0xeee0() // UNK_0xeee0
{
  UNK_0xec44(); // UNK_0xec44
  Push(0x6638); // IFIELD(UNK_0xec76)
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()-1); // 1-
  Push(0); // 0
  MAX(); // MAX
  Push(0x6638); // IFIELD(UNK_0xec76)
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeef4: WORD 'UNK_0xeef6' codep=0x224c parp=0xeef6
// ================================================

void UNK_0xeef6() // UNK_0xeef6
{
  UNK_0xec44(); // UNK_0xec44
  Push(0x6638); // IFIELD(UNK_0xec76)
  Push(Read8(Pop())&0xFF); // C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef00: WORD 'UNK_0xef02' codep=0x224c parp=0xef02
// ================================================

void UNK_0xef02() // UNK_0xef02
{
  UNK_0xec54(); // UNK_0xec54
  Push(pp_EYEXY); // EYEXY
  D_ex_(); // D!
}


// ================================================
// 0xef0a: WORD 'UNK_0xef0c' codep=0x224c parp=0xef0c
// ================================================

void UNK_0xef0c() // UNK_0xef0c
{
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  NBCLR(); // NBCLR
  goto label2;

  label1:
  SetColor("BLACK");

  label2:
  _ex_COLOR(); // !COLOR
  BFILL(); // BFILL
}


// ================================================
// 0xef22: WORD 'UNK_0xef24' codep=0x224c parp=0xef24
// ================================================

void UNK_0xef24() // UNK_0xef24
{
  UNK_0xef0c(); // UNK_0xef0c
  _dot_LOCAL_dash_(); // .LOCAL-
}


// ================================================
// 0xef2a: WORD 'UNK_0xef2c' codep=0x224c parp=0xef2c
// ================================================

void UNK_0xef2c() // UNK_0xef2c
{
  _2DUP(); // 2DUP
  Push(pp_EYEXY); // EYEXY
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(pp_EYEXY); // EYEXY
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  R_gt_(); // R>
  SWAP(); // SWAP
  _ask_INVIS(); // ?INVIS
}


// ================================================
// 0xef46: WORD 'UNK_0xef48' codep=0x224c parp=0xef48
// ================================================

void UNK_0xef48() // UNK_0xef48
{
  UNK_0xec4c(); // UNK_0xec4c
  Push(Pop()>>1); // 2/
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
}


// ================================================
// 0xef52: WORD 'UNK_0xef54' codep=0x224c parp=0xef54
// ================================================

void UNK_0xef54() // UNK_0xef54
{
  UNK_0xecab(); // UNK_0xecab
  Push(1); // 1
  Push(cc__8); // 8
  UNK_0xec4c(); // UNK_0xec4c
  Push(Pop() * Pop()); // *

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  UNK_0xef24(); // UNK_0xef24
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  WLD_gt_SCR(); // WLD>SCR
  UNK_0xef48(); // UNK_0xef48
  UNK_0xef48(); // UNK_0xef48
  Push(i); // I
  _dot_CIRCLE(); // .CIRCLE
  V_gt_DISPL(); // V>DISPL
  UNK_0xec4c(); // UNK_0xec4c
  Push(-Pop()); // NEGATE
  Push(Pop()*2); // 2*
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffe2

  UNK_0xecb3(); // UNK_0xecb3
}


// ================================================
// 0xef84: WORD 'UNK_0xef86' codep=0x224c parp=0xef86
// ================================================

void UNK_0xef86() // UNK_0xef86
{
  Push(0x012c);
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_C(); // @INST-C
  Push(0x0014);
  _eq_(); // =
  Push(0xc6d9);
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xefa2: WORD 'UNK_0xefa4' codep=0x224c parp=0xefa4
// ================================================

void UNK_0xefa4() // UNK_0xefa4
{
  CTERASE(); // CTERASE
  Push(0x000e);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  Push(i); // I
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash_(); // ?ICONS-
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  POINT_gt_I(); // POINT>I
  UNK_0xef86(); // UNK_0xef86
  j++;
  } while(j<jmax); // (LOOP) 0xfffa


  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffe0

}


// ================================================
// 0xefd2: WORD 'UNK_0xefd4' codep=0x224c parp=0xefd4
// ================================================

void UNK_0xefd4() // UNK_0xefd4
{
  _ex_COLOR(); // !COLOR
  BFILL(); // BFILL
  V_gt_DISPL(); // V>DISPL
  Push(0x2710);
  Push(cc_MPS); // MPS
  _slash_(); // /
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0); // 0
  Push(i); // I
  Push(0x000a);
  _slash_(); // /
  RRND(); // RRND
  TONE(); // TONE
  i++;
  } while(i<imax); // (LOOP) 0xfff0

}


// ================================================
// 0xeffa: WORD 'UNK_0xeffc' codep=0x224c parp=0xeffc
// ================================================

void UNK_0xeffc() // UNK_0xeffc
{
  UNK_0xecab(); // UNK_0xecab
  UNK_0xef24(); // UNK_0xef24
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(0x001e);
  Push(2); // 2

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  WLD_gt_SCR(); // WLD>SCR
  UNK_0xef48(); // UNK_0xef48
  UNK_0xef48(); // UNK_0xef48
  Push(i); // I
  _dot_CIRCLE(); // .CIRCLE
  DISPLAY(); // DISPLAY
  V_gt_DISPL(); // V>DISPL
  i++;
  } while(i<imax); // (LOOP) 0xffec

  BEEPON(); // BEEPON
  SetColor("WHITE");
  UNK_0xefd4(); // UNK_0xefd4
  SetColor("BLUE");
  UNK_0xefd4(); // UNK_0xefd4
  SetColor("LT-BLUE");
  UNK_0xefd4(); // UNK_0xefd4
  SetColor("DK-BLUE");
  UNK_0xefd4(); // UNK_0xefd4
  BEEPOFF(); // BEEPOFF
  UNK_0xef24(); // UNK_0xef24
  V_gt_DISPL(); // V>DISPL
  UNK_0xecb3(); // UNK_0xecb3
  Push(0x003c);
  MS(); // MS
}


// ================================================
// 0xf044: WORD 'UNK_0xf046' codep=0x1d29 parp=0xf046
// ================================================
// 0xf046: db 0x56 0x3a 0x20 0x0a 'V:  '

// ================================================
// 0xf04a: WORD 'UNK_0xf04c' codep=0x1d29 parp=0xf04c
// ================================================
// 0xf04c: db 0x56 0x3a 0x20 0x5d 'V: ]'

// ================================================
// 0xf050: WORD 'UNK_0xf052' codep=0x1d29 parp=0xf052
// ================================================
// 0xf052: db 0x56 0x3a 0x20 0x90 'V:  '

// ================================================
// 0xf056: WORD 'UNK_0xf058' codep=0x1d29 parp=0xf058
// ================================================
// 0xf058: db 0x56 0x3a 0x20 0xc2 'V:  '

// ================================================
// 0xf05c: WORD 'UNK_0xf05e' codep=0x1d29 parp=0xf05e
// ================================================
// 0xf05e: db 0x56 0x3a 0x20 0x89 'V:  '

// ================================================
// 0xf062: WORD 'UNK_0xf064' codep=0x224c parp=0xf064
// ================================================

void UNK_0xf064() // UNK_0xf064
{
  _gt_R(); // >R
  Push(0); // 0
  SWAP(); // SWAP
  Push(1); // 1
  R_gt_(); // R>
  M_star__slash_(); // M*/
}


// ================================================
// 0xf072: WORD 'UNK_0xf074' codep=0x224c parp=0xf074
// ================================================

void UNK_0xf074() // UNK_0xf074
{
  Push(pp_UNK_0xf04c); // UNK_0xf04c
  _2_at_(); // 2@
  Push(pp_UNK_0xf058); // UNK_0xf058
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_UNK_0xf04c); // UNK_0xf04c
  D_ex_(); // D!
  Push(pp_UNK_0xf052); // UNK_0xf052
  _2_at_(); // 2@
  Push(pp_UNK_0xf05e); // UNK_0xf05e
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_UNK_0xf052); // UNK_0xf052
  D_ex_(); // D!
}


// ================================================
// 0xf092: WORD 'UNK_0xf094' codep=0x224c parp=0xf094
// ================================================

void UNK_0xf094() // UNK_0xf094
{
  UNK_0xec54(); // UNK_0xec54
  Push(pp_UNK_0xf04c); // UNK_0xf04c
  _ex_(); // !
  Push(pp_UNK_0xf052); // UNK_0xf052
  _ex_(); // !
  Push(pp_EYEXY); // EYEXY
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xf052); // UNK_0xf052
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(Read16(sp)); // DUP
  ABS(); // ABS
  Push(pp_EYEXY); // EYEXY
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xf04c); // UNK_0xf04c
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(Read16(sp)); // DUP
  ABS(); // ABS
  ROT(); // ROT
  MAX(); // MAX
  _gt_R(); // >R
  R_at_(); // R@
  UNK_0xf064(); // UNK_0xf064
  Push(pp_UNK_0xf058); // UNK_0xf058
  D_ex_(); // D!
  R_gt_(); // R>
  UNK_0xf064(); // UNK_0xf064
  Push(pp_UNK_0xf05e); // UNK_0xf05e
  D_ex_(); // D!
  Push(0x8000);
  Push(Read16(sp)); // DUP
  Push(pp_UNK_0xf052); // UNK_0xf052
  Push(Pop()+2); // 2+
  _ex_(); // !
  Push(pp_UNK_0xf04c); // UNK_0xf04c
  Push(Pop()+2); // 2+
  _ex_(); // !
}


// ================================================
// 0xf0e6: WORD 'UNK_0xf0e8' codep=0x224c parp=0xf0e8
// ================================================

void UNK_0xf0e8() // UNK_0xf0e8
{
  Push(pp_UNK_0xf052); // UNK_0xf052
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xf04c); // UNK_0xf04c
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf0f2: WORD 'UNK_0xf0f4' codep=0x224c parp=0xf0f4
// ================================================

void UNK_0xf0f4() // UNK_0xf0f4
{
  UNK_0xec54(); // UNK_0xec54
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  UNK_0xecab(); // UNK_0xecab
  WLD_gt_SCR(); // WLD>SCR
  LXPLOT(); // LXPLOT
  UNK_0xf094(); // UNK_0xf094

  label2:
  UNK_0xf0e8(); // UNK_0xf0e8
  Push(pp_UNK_0xf046); // UNK_0xf046
  D_ex_(); // D!
  UNK_0xf0e8(); // UNK_0xf0e8
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(pp_UNK_0xf046); // UNK_0xf046
  _2_at_(); // 2@
  WLD_gt_SCR(); // WLD>SCR
  LXPLOT(); // LXPLOT
  UNK_0xf074(); // UNK_0xf074
  UNK_0xf0e8(); // UNK_0xf0e8
  WLD_gt_SCR(); // WLD>SCR
  LXPLOT(); // LXPLOT
  V_gt_DISPL(); // V>DISPL
  Push(0x003c);
  MS(); // MS
  goto label2;

  label1:
  UNK_0xecb3(); // UNK_0xecb3
}


// ================================================
// 0xf136: WORD 'UNK_0xf138' codep=0x224c parp=0xf138
// ================================================

void UNK_0xf138() // UNK_0xf138
{
  Push2Words("*MISS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN

  label2:
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  IDELETE(); // IDELETE
  goto label2;

  label1:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  Push(pp__n_MISS); // #MISS
  _099(); // 099
}


// ================================================
// 0xf156: WORD 'UNK_0xf158' codep=0x224c parp=0xf158
// ================================================

void UNK_0xf158() // UNK_0xf158
{
  UNK_0xf0f4(); // UNK_0xf0f4
  UNK_0xeffc(); // UNK_0xeffc
  UNK_0xefa4(); // UNK_0xefa4
  UNK_0xf138(); // UNK_0xf138
  UNK_0xeee0(); // UNK_0xeee0
  _dot_SORD(); // .SORD
  Push(0x0064);
  Push(0xbf4a);
  MODULE(); // MODULE
}


// ================================================
// 0xf170: WORD 'UNK_0xf172' codep=0x224c parp=0xf172
// ================================================

void UNK_0xf172() // UNK_0xf172
{
  UNK_0xeef6(); // UNK_0xeef6
  if (Pop() == 0) goto label1;
  UNK_0xef02(); // UNK_0xef02
  UNK_0xeeac(); // UNK_0xeeac
  Y_slash_N(); // Y/N
  if (Pop() == 0) goto label2;
  UNK_0xee5f(); // UNK_0xee5f

  label6:
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_KEYTIME); // KEYTIME
  _2_at_(); // 2@
  D_dash_(); // D-
  Push(0x1388); Pust(0x0000);
  D_gt_(); // D>
  if (Pop() == 0) goto label3;
  Push(pp__i_WAX); // 'WAX
  _at_EXECUTE(); // @EXECUTE

  label3:
  XYSCAN(); // XYSCAN
  UNK_0xef2c(); // UNK_0xef2c
  if (Pop() == 0) goto label4;
  Push(pp_EYEXY); // EYEXY
  Push(Pop()+2); // 2+
  _plus__ex_(); // +!
  Push(pp_EYEXY); // EYEXY
  _plus__ex_(); // +!
  goto label5;

  label4:
  Pop(); Pop();// 2DROP

  label5:
  UNK_0xef54(); // UNK_0xef54
  UNK_0xedf7(); // UNK_0xedf7
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label6;
  UNK_0xede5(); // UNK_0xede5
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label7;
  UNK_0xf158(); // UNK_0xf158
  Push(pp_WEAPON_dash_); // WEAPON-
  ON(); // ON
  goto label8;

  label7:
  UNK_0xed47(); // UNK_0xed47

  label8:
  Push(0x03e8);
  MS(); // MS
  CTERASE(); // CTERASE
  goto label9;

  label2:

  UNK_0x3f09("CANCELLED");
  _dot_TTY(); // .TTY

  label9:
  goto label10;

  label1:
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Push(0x63a8); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  _dot_TTY(); // .TTY

  label10:
  UNK_0xecab(); // UNK_0xecab
  UNK_0xef24(); // UNK_0xef24
  V_gt_DISPL(); // V>DISPL
  UNK_0xecb3(); // UNK_0xecb3
}


// ================================================
// 0xf20a: WORD 'UNK_0xf20c' codep=0x224c parp=0xf20c
// ================================================

void UNK_0xf20c() // UNK_0xf20c
{
  Push(cc_TRUE); // TRUE
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1); // IFIELD(INST-SI)
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
  _at_INST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
  Push(cc__6); // 6
  _eq_(); // =
  if (Pop() == 0) goto label1;
  SWAP(); // SWAP
  if (Pop() == 0) Push(1); else Push(0); // NOT
  SWAP(); // SWAP
  LEAVE(); // LEAVE

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffe0

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf248: WORD 'UNK_0xf24a' codep=0x224c parp=0xf24a
// ================================================

void UNK_0xf24a() // UNK_0xf24a
{
  Push(0xb6ec);
  MODULE(); // MODULE
}


// ================================================
// 0xf252: WORD 'UNK_0xf254' codep=0x1d29 parp=0xf254
// ================================================
// 0xf254: db 0x3a 0x20 ': '

// ================================================
// 0xf256: WORD 'UNK_0xf258' codep=0x224c parp=0xf258
// ================================================

void UNK_0xf258() // UNK_0xf258
{
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
}


// ================================================
// 0xf26a: WORD 'UNK_0xf26c' codep=0x224c parp=0xf26c
// ================================================

void UNK_0xf26c() // UNK_0xf26c
{
  UNK_0xf258(); // UNK_0xf258
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  Push(0); // 0
  SWAP(); // SWAP
  IFIND(); // IFIND
  if (Pop() == 0) goto label2;
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(pp_UNK_0xf254); // UNK_0xf254
  _ex_(); // !
  SWAP(); // SWAP
  _dash_(); // -
  _0_st_(); // 0<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  goto label3;

  label2:
  Pop(); // DROP
  Push(0); // 0

  label3:
  ICLOSE(); // ICLOSE
  goto label4;

  label1:
  Pop(); Pop();// 2DROP
  Push(0); // 0

  label4:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2a8: WORD 'UNK_0xf2aa' codep=0x224c parp=0xf2aa
// ================================================

void UNK_0xf2aa() // UNK_0xf2aa
{
  UNK_0xf258(); // UNK_0xf258
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0); // 0
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
}


// ================================================
// 0xf2ba: WORD 'UNK_0xf2bc' codep=0x224c parp=0xf2bc
// ================================================

void UNK_0xf2bc() // UNK_0xf2bc
{

  label2:
  CI(); // CI
  Push2Words("*STARSH");
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  CDROP(); // CDROP
  goto label2;

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2d2: WORD 'UNK_0xf2d4' codep=0x224c parp=0xf2d4
// ================================================

void UNK_0xf2d4() // UNK_0xf2d4
{
  UNK_0xf2aa(); // UNK_0xf2aa
  Push(-Pop()); // NEGATE
  Push(0x65ec); // IFIELD(INST-QT)
  _plus__ex_(); // +!
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  IDELETE(); // IDELETE

  label1:
  UNK_0xf2bc(); // UNK_0xf2bc
  UNK_0xf24a(); // UNK_0xf24a
  _dot_SORD(); // .SORD
}


// ================================================
// 0xf2f2: WORD 'UNK_0xf2f4' codep=0x224c parp=0xf2f4
// ================================================

void UNK_0xf2f4() // UNK_0xf2f4
{
  WLD_gt_SCR(); // WLD>SCR
  UNK_0xef48(); // UNK_0xef48
  UNK_0xef48(); // UNK_0xef48
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  UNK_0xec4c(); // UNK_0xec4c
  FILLCIR(); // FILLCIR
}


// ================================================
// 0xf304: WORD 'UNK_0xf306' codep=0x224c parp=0xf306
// ================================================

void UNK_0xf306() // UNK_0xf306
{
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  UNK_0xecab(); // UNK_0xecab
  Push(cc__5); // 5
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  SetColor("VIOLET");
  _ex_COLOR(); // !COLOR
  BFILL(); // BFILL
  _2DUP(); // 2DUP
  UNK_0xf2f4(); // UNK_0xf2f4
  _dot_LOCAL_dash_(); // .LOCAL-
  DISPLAY(); // DISPLAY
  V_gt_DISPL(); // V>DISPL
  Push(0x0020);
  MS(); // MS
  UNK_0xef0c(); // UNK_0xef0c
  _dot_LOCAL_dash_(); // .LOCAL-
  DISPLAY(); // DISPLAY
  V_gt_DISPL(); // V>DISPL
  Push(0x0020);
  MS(); // MS
  i++;
  } while(i<imax); // (LOOP) 0xffda

  UNK_0xecb3(); // UNK_0xecb3
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xf344: WORD 'GNUNK>NUL' codep=0x224c parp=0xf352
// ================================================
// entry

void GNUNK_gt_NUL() // GNUNK>NUL
{
  UNK_0xf306(); // UNK_0xf306
  Push(cc__dash_1); // -1
  Push(pp_NLR); // NLR
  _ex_(); // !
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_NTIME); // NTIME
  D_ex_(); // D!
  Push(pp__ask_SUP); // ?SUP
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0xc636);
  MODULE(); // MODULE
}


// ================================================
// 0xf372: WORD 'UNK_0xf374' codep=0x224c parp=0xf374
// ================================================

void UNK_0xf374() // UNK_0xf374
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xf306(); // UNK_0xf306
  ICLOSE(); // ICLOSE
  Push(0x0096);
  Push(cc__4); // 4
  UNK_0xf2d4(); // UNK_0xf2d4
  Push(1); // 1
  Push(pp_NLR); // NLR
  _ex_(); // !
  Push(0x0032);
  Push(0xbf4a);
  MODULE(); // MODULE
  Push(1); // 1
  SONG(); // SONG
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_NTIME); // NTIME
  D_ex_(); // D!
  SetColor("YELLOW");
  _ex_COLOR(); // !COLOR
  Push(0x63c8); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  _dot_TTY(); // .TTY
  Push(0x6400); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf3ba: WORD 'UNK_0xf3bc' codep=0x224c parp=0xf3bc
// ================================================

void UNK_0xf3bc() // UNK_0xf3bc
{
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  UNK_0xecbb(); // UNK_0xecbb
  Push(0x6421); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  _dot_TTY(); // .TTY
  Push(0x644f); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  _dot_TTY(); // .TTY
  Push(0x647f); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  _dot_TTY(); // .TTY
  Push(0x649f); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  _dot_TTY(); // .TTY
  Y_slash_N(); // Y/N
}


// ================================================
// 0xf3ee: WORD 'UNK_0xf3f0' codep=0x224c parp=0xf3f0
// ================================================

void UNK_0xf3f0() // UNK_0xf3f0
{
  Push(0x64bf); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  _dot_TTY(); // .TTY
  Push(0x64ef); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  _dot_TTY(); // .TTY
  Push(0x07d0);
  MS(); // MS
  Push(0x651c); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  _dot_TTY(); // .TTY
  Push(0x0bb8);
  MS(); // MS
  BEEPON(); // BEEPON
  Push(0x0064);
  TONE(); // TONE
  Push(0x504a);
  Push(Read8(Pop())&0xFF); // C@
  Push(0x4fa9);
  C_ex_(); // C!
  CTERASE(); // CTERASE
  SetColor("RED");
  _ex_COLOR(); // !COLOR
  Push(0x653c); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  Func14(TYPE); // call of word 0x2690 '(TYPE)'
  KEY(); // KEY
  Pop(); // DROP
  BYE(); // BYE
}


// ================================================
// 0xf446: WORD 'UNK_0xf448' codep=0x224c parp=0xf448
// ================================================

void UNK_0xf448() // UNK_0xf448
{
  CTINIT(); // CTINIT
  UNK_0xecbb(); // UNK_0xecbb
  Push(0x6562); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  _dot_TTY(); // .TTY
  Push(0x6594); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  _dot_TTY(); // .TTY
  Push(0x65bf); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  _dot_TTY(); // .TTY
  Y_slash_N(); // Y/N
  if (Pop() == 0) return;
  UNK_0xf3f0(); // UNK_0xf3f0
}


// ================================================
// 0xf474: WORD 'UNK_0xf476' codep=0x224c parp=0xf476
// ================================================

void UNK_0xf476() // UNK_0xf476
{
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  Push(0x65ed); Pust(0x0002);
  UNK_0xec7b(); // UNK_0xec7b
  Func14(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf486: WORD 'DONULL' codep=0x224c parp=0xf491
// ================================================
// entry

void DONULL() // DONULL
{
  CTINIT(); // CTINIT
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  _eq_(); // =
  Push(pp_NOF); // NOF
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(pp_NOF); // NOF
  ON(); // ON
  Push(0x000d);
  Push(0xb76b);
  MODULE(); // MODULE
  if (Pop() == 0) goto label2;
  UNK_0xf3bc(); // UNK_0xf3bc
  if (Pop() == 0) goto label3;
  Push(0x00c8);
  Push(cc__4); // 4
  UNK_0xf26c(); // UNK_0xf26c
  if (Pop() == 0) goto label4;
  UNK_0xf20c(); // UNK_0xf20c
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label5;
  Push(pp_NOF); // NOF
  ON(); // ON
  UNK_0xf374(); // UNK_0xf374
  Push(pp_NOF); // NOF
  _099(); // 099
  goto label6;

  label5:
  UNK_0xf448(); // UNK_0xf448

  label6:
  goto label7;

  label4:
  UNK_0xf476(); // UNK_0xf476

  label7:
  goto label8;

  label3:

  UNK_0x3f09("CANCELLED");
  _dot_TTY(); // .TTY

  label8:
  goto label9;

  label2:
  Push(0xb7e7);
  MODULE(); // MODULE

  label9:
  goto label10;

  label1:
  Push(0xb7e7);
  MODULE(); // MODULE

  label10:
  Push2Words("NULL");
  Push(pp_NOF); // NOF
  _099(); // 099
}


// ================================================
// 0xf517: WORD 'TARG' codep=0x224c parp=0xf520
// ================================================
// entry

void TARG() // TARG
{
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  _eq_(); // =
  Push(pp_NOF); // NOF
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(pp_NOF); // NOF
  ON(); // ON
  UNK_0xf172(); // UNK_0xf172
  Push(pp_NOF); // NOF
  _099(); // 099
  goto label2;

  label1:
  Push(0xb7e7);
  MODULE(); // MODULE

  label2:
  Push2Words("NULL");
}

// 0xf54c: db 0x57 0x45 0x41 0x50 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'WEAP________________ '
  