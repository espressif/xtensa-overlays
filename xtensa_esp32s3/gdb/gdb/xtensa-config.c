/* Configuration for the Xtensa architecture for GDB, the GNU debugger.

   Customer ID=15128; Build=0x90f1f; Copyright (c) 2003-2021 Tensilica Inc.

   Permission is hereby granted, free of charge, to any person obtaining
   a copy of this software and associated documentation files (the
   "Software"), to deal in the Software without restriction, including
   without limitation the rights to use, copy, modify, merge, publish,
   distribute, sublicense, and/or sell copies of the Software, and to
   permit persons to whom the Software is furnished to do so, subject to
   the following conditions:

   The above copyright notice and this permission notice shall be included
   in all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
   IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
   CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
   TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
   SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.  */

#define XTENSA_CONFIG_VERSION 0x60

#include "xtensa-config.h"
#include "xtensa-tdep.h"



/* Masked registers.  */
xtensa_reg_mask_t xtensa_submask0[] = { { 75, 0, 1 } };
const xtensa_mask_t xtensa_mask0 = { 1, xtensa_submask0 };
xtensa_reg_mask_t xtensa_submask1[] = { { 75, 1, 1 } };
const xtensa_mask_t xtensa_mask1 = { 1, xtensa_submask1 };
xtensa_reg_mask_t xtensa_submask2[] = { { 75, 2, 1 } };
const xtensa_mask_t xtensa_mask2 = { 1, xtensa_submask2 };
xtensa_reg_mask_t xtensa_submask3[] = { { 75, 3, 1 } };
const xtensa_mask_t xtensa_mask3 = { 1, xtensa_submask3 };
xtensa_reg_mask_t xtensa_submask4[] = { { 75, 4, 1 } };
const xtensa_mask_t xtensa_mask4 = { 1, xtensa_submask4 };
xtensa_reg_mask_t xtensa_submask5[] = { { 75, 5, 1 } };
const xtensa_mask_t xtensa_mask5 = { 1, xtensa_submask5 };
xtensa_reg_mask_t xtensa_submask6[] = { { 75, 6, 1 } };
const xtensa_mask_t xtensa_mask6 = { 1, xtensa_submask6 };
xtensa_reg_mask_t xtensa_submask7[] = { { 75, 7, 1 } };
const xtensa_mask_t xtensa_mask7 = { 1, xtensa_submask7 };
xtensa_reg_mask_t xtensa_submask8[] = { { 75, 8, 1 } };
const xtensa_mask_t xtensa_mask8 = { 1, xtensa_submask8 };
xtensa_reg_mask_t xtensa_submask9[] = { { 75, 9, 1 } };
const xtensa_mask_t xtensa_mask9 = { 1, xtensa_submask9 };
xtensa_reg_mask_t xtensa_submask10[] = { { 75, 10, 1 } };
const xtensa_mask_t xtensa_mask10 = { 1, xtensa_submask10 };
xtensa_reg_mask_t xtensa_submask11[] = { { 75, 11, 1 } };
const xtensa_mask_t xtensa_mask11 = { 1, xtensa_submask11 };
xtensa_reg_mask_t xtensa_submask12[] = { { 75, 12, 1 } };
const xtensa_mask_t xtensa_mask12 = { 1, xtensa_submask12 };
xtensa_reg_mask_t xtensa_submask13[] = { { 75, 13, 1 } };
const xtensa_mask_t xtensa_mask13 = { 1, xtensa_submask13 };
xtensa_reg_mask_t xtensa_submask14[] = { { 75, 14, 1 } };
const xtensa_mask_t xtensa_mask14 = { 1, xtensa_submask14 };
xtensa_reg_mask_t xtensa_submask15[] = { { 75, 15, 1 } };
const xtensa_mask_t xtensa_mask15 = { 1, xtensa_submask15 };
xtensa_reg_mask_t xtensa_submask16[] = { { 73, 0, 4 } };
const xtensa_mask_t xtensa_mask16 = { 1, xtensa_submask16 };
xtensa_reg_mask_t xtensa_submask17[] = { { 73, 5, 1 } };
const xtensa_mask_t xtensa_mask17 = { 1, xtensa_submask17 };
xtensa_reg_mask_t xtensa_submask18[] = { { 73, 18, 1 } };
const xtensa_mask_t xtensa_mask18 = { 1, xtensa_submask18 };
xtensa_reg_mask_t xtensa_submask19[] = { { 73, 4, 1 } };
const xtensa_mask_t xtensa_mask19 = { 1, xtensa_submask19 };
xtensa_reg_mask_t xtensa_submask20[] = { { 73, 16, 2 } };
const xtensa_mask_t xtensa_mask20 = { 1, xtensa_submask20 };
xtensa_reg_mask_t xtensa_submask21[] = { { 73, 8, 4 } };
const xtensa_mask_t xtensa_mask21 = { 1, xtensa_submask21 };
xtensa_reg_mask_t xtensa_submask22[] = { { 77, 0, 32 }, { 78, 0, 8 } };
const xtensa_mask_t xtensa_mask22 = { 2, xtensa_submask22 };
xtensa_reg_mask_t xtensa_submask23[] = { { 167, 8, 4 } };
const xtensa_mask_t xtensa_mask23 = { 1, xtensa_submask23 };
xtensa_reg_mask_t xtensa_submask24[] = { { 100, 0, 2 } };
const xtensa_mask_t xtensa_mask24 = { 1, xtensa_submask24 };
xtensa_reg_mask_t xtensa_submask25[] = { { 100, 6, 1 } };
const xtensa_mask_t xtensa_mask25 = { 1, xtensa_submask25 };
xtensa_reg_mask_t xtensa_submask26[] = { { 100, 5, 1 } };
const xtensa_mask_t xtensa_mask26 = { 1, xtensa_submask26 };
xtensa_reg_mask_t xtensa_submask27[] = { { 100, 4, 1 } };
const xtensa_mask_t xtensa_mask27 = { 1, xtensa_submask27 };
xtensa_reg_mask_t xtensa_submask28[] = { { 100, 3, 1 } };
const xtensa_mask_t xtensa_mask28 = { 1, xtensa_submask28 };
xtensa_reg_mask_t xtensa_submask29[] = { { 100, 2, 1 } };
const xtensa_mask_t xtensa_mask29 = { 1, xtensa_submask29 };
xtensa_reg_mask_t xtensa_submask30[] = { { 101, 11, 1 } };
const xtensa_mask_t xtensa_mask30 = { 1, xtensa_submask30 };
xtensa_reg_mask_t xtensa_submask31[] = { { 101, 10, 1 } };
const xtensa_mask_t xtensa_mask31 = { 1, xtensa_submask31 };
xtensa_reg_mask_t xtensa_submask32[] = { { 101, 9, 1 } };
const xtensa_mask_t xtensa_mask32 = { 1, xtensa_submask32 };
xtensa_reg_mask_t xtensa_submask33[] = { { 101, 8, 1 } };
const xtensa_mask_t xtensa_mask33 = { 1, xtensa_submask33 };
xtensa_reg_mask_t xtensa_submask34[] = { { 101, 7, 1 } };
const xtensa_mask_t xtensa_mask34 = { 1, xtensa_submask34 };
xtensa_reg_mask_t xtensa_submask35[] = { { 100, 12, 20 } };
const xtensa_mask_t xtensa_mask35 = { 1, xtensa_submask35 };
xtensa_reg_mask_t xtensa_submask36[] = { { 101, 12, 20 } };
const xtensa_mask_t xtensa_mask36 = { 1, xtensa_submask36 };
xtensa_reg_mask_t xtensa_submask37[] = { { 100, 7, 5 } };
const xtensa_mask_t xtensa_mask37 = { 1, xtensa_submask37 };
xtensa_reg_mask_t xtensa_submask38[] = { { 101, 0, 7 } };
const xtensa_mask_t xtensa_mask38 = { 1, xtensa_submask38 };
xtensa_reg_mask_t xtensa_submask39[] = { { 102, 0, 32 }, { 103, 0, 8 } };
const xtensa_mask_t xtensa_mask39 = { 2, xtensa_submask39 };
xtensa_reg_mask_t xtensa_submask40[] = { { 104, 0, 32 }, { 105, 0, 32 }, { 106, 0, 32 }, { 107, 0, 32 }, { 108, 0, 32 } };
const xtensa_mask_t xtensa_mask40 = { 5, xtensa_submask40 };
xtensa_reg_mask_t xtensa_submask41[] = { { 109, 0, 32 }, { 110, 0, 32 }, { 111, 0, 32 }, { 112, 0, 32 }, { 113, 0, 32 } };
const xtensa_mask_t xtensa_mask41 = { 5, xtensa_submask41 };
xtensa_reg_mask_t xtensa_submask42[] = { { 116, 0, 32 }, { 117, 0, 32 }, { 118, 0, 32 }, { 119, 0, 32 } };
const xtensa_mask_t xtensa_mask42 = { 4, xtensa_submask42 };


/* Register map.  */
xtensa_register_t rmap[] = 
{
  /*    idx ofs bi sz al targno  flags cp typ group name  */
  XTREG(  0,  0,32, 4, 4,0x0020,0x0006,-2, 9,0x2100,pc,          0,0,0,0,0,0)
  XTREG(  1,  4,32, 4, 4,0x0100,0x0006,-2, 1,0x0002,ar0,         0,0,0,0,0,0)
  XTREG(  2,  8,32, 4, 4,0x0101,0x0006,-2, 1,0x0002,ar1,         0,0,0,0,0,0)
  XTREG(  3, 12,32, 4, 4,0x0102,0x0006,-2, 1,0x0002,ar2,         0,0,0,0,0,0)
  XTREG(  4, 16,32, 4, 4,0x0103,0x0006,-2, 1,0x0002,ar3,         0,0,0,0,0,0)
  XTREG(  5, 20,32, 4, 4,0x0104,0x0006,-2, 1,0x0002,ar4,         0,0,0,0,0,0)
  XTREG(  6, 24,32, 4, 4,0x0105,0x0006,-2, 1,0x0002,ar5,         0,0,0,0,0,0)
  XTREG(  7, 28,32, 4, 4,0x0106,0x0006,-2, 1,0x0002,ar6,         0,0,0,0,0,0)
  XTREG(  8, 32,32, 4, 4,0x0107,0x0006,-2, 1,0x0002,ar7,         0,0,0,0,0,0)
  XTREG(  9, 36,32, 4, 4,0x0108,0x0006,-2, 1,0x0002,ar8,         0,0,0,0,0,0)
  XTREG( 10, 40,32, 4, 4,0x0109,0x0006,-2, 1,0x0002,ar9,         0,0,0,0,0,0)
  XTREG( 11, 44,32, 4, 4,0x010a,0x0006,-2, 1,0x0002,ar10,        0,0,0,0,0,0)
  XTREG( 12, 48,32, 4, 4,0x010b,0x0006,-2, 1,0x0002,ar11,        0,0,0,0,0,0)
  XTREG( 13, 52,32, 4, 4,0x010c,0x0006,-2, 1,0x0002,ar12,        0,0,0,0,0,0)
  XTREG( 14, 56,32, 4, 4,0x010d,0x0006,-2, 1,0x0002,ar13,        0,0,0,0,0,0)
  XTREG( 15, 60,32, 4, 4,0x010e,0x0006,-2, 1,0x0002,ar14,        0,0,0,0,0,0)
  XTREG( 16, 64,32, 4, 4,0x010f,0x0006,-2, 1,0x0002,ar15,        0,0,0,0,0,0)
  XTREG( 17, 68,32, 4, 4,0x0110,0x0006,-2, 1,0x0002,ar16,        0,0,0,0,0,0)
  XTREG( 18, 72,32, 4, 4,0x0111,0x0006,-2, 1,0x0002,ar17,        0,0,0,0,0,0)
  XTREG( 19, 76,32, 4, 4,0x0112,0x0006,-2, 1,0x0002,ar18,        0,0,0,0,0,0)
  XTREG( 20, 80,32, 4, 4,0x0113,0x0006,-2, 1,0x0002,ar19,        0,0,0,0,0,0)
  XTREG( 21, 84,32, 4, 4,0x0114,0x0006,-2, 1,0x0002,ar20,        0,0,0,0,0,0)
  XTREG( 22, 88,32, 4, 4,0x0115,0x0006,-2, 1,0x0002,ar21,        0,0,0,0,0,0)
  XTREG( 23, 92,32, 4, 4,0x0116,0x0006,-2, 1,0x0002,ar22,        0,0,0,0,0,0)
  XTREG( 24, 96,32, 4, 4,0x0117,0x0006,-2, 1,0x0002,ar23,        0,0,0,0,0,0)
  XTREG( 25,100,32, 4, 4,0x0118,0x0006,-2, 1,0x0002,ar24,        0,0,0,0,0,0)
  XTREG( 26,104,32, 4, 4,0x0119,0x0006,-2, 1,0x0002,ar25,        0,0,0,0,0,0)
  XTREG( 27,108,32, 4, 4,0x011a,0x0006,-2, 1,0x0002,ar26,        0,0,0,0,0,0)
  XTREG( 28,112,32, 4, 4,0x011b,0x0006,-2, 1,0x0002,ar27,        0,0,0,0,0,0)
  XTREG( 29,116,32, 4, 4,0x011c,0x0006,-2, 1,0x0002,ar28,        0,0,0,0,0,0)
  XTREG( 30,120,32, 4, 4,0x011d,0x0006,-2, 1,0x0002,ar29,        0,0,0,0,0,0)
  XTREG( 31,124,32, 4, 4,0x011e,0x0006,-2, 1,0x0002,ar30,        0,0,0,0,0,0)
  XTREG( 32,128,32, 4, 4,0x011f,0x0006,-2, 1,0x0002,ar31,        0,0,0,0,0,0)
  XTREG( 33,132,32, 4, 4,0x0120,0x0006,-2, 1,0x0002,ar32,        0,0,0,0,0,0)
  XTREG( 34,136,32, 4, 4,0x0121,0x0006,-2, 1,0x0002,ar33,        0,0,0,0,0,0)
  XTREG( 35,140,32, 4, 4,0x0122,0x0006,-2, 1,0x0002,ar34,        0,0,0,0,0,0)
  XTREG( 36,144,32, 4, 4,0x0123,0x0006,-2, 1,0x0002,ar35,        0,0,0,0,0,0)
  XTREG( 37,148,32, 4, 4,0x0124,0x0006,-2, 1,0x0002,ar36,        0,0,0,0,0,0)
  XTREG( 38,152,32, 4, 4,0x0125,0x0006,-2, 1,0x0002,ar37,        0,0,0,0,0,0)
  XTREG( 39,156,32, 4, 4,0x0126,0x0006,-2, 1,0x0002,ar38,        0,0,0,0,0,0)
  XTREG( 40,160,32, 4, 4,0x0127,0x0006,-2, 1,0x0002,ar39,        0,0,0,0,0,0)
  XTREG( 41,164,32, 4, 4,0x0128,0x0006,-2, 1,0x0002,ar40,        0,0,0,0,0,0)
  XTREG( 42,168,32, 4, 4,0x0129,0x0006,-2, 1,0x0002,ar41,        0,0,0,0,0,0)
  XTREG( 43,172,32, 4, 4,0x012a,0x0006,-2, 1,0x0002,ar42,        0,0,0,0,0,0)
  XTREG( 44,176,32, 4, 4,0x012b,0x0006,-2, 1,0x0002,ar43,        0,0,0,0,0,0)
  XTREG( 45,180,32, 4, 4,0x012c,0x0006,-2, 1,0x0002,ar44,        0,0,0,0,0,0)
  XTREG( 46,184,32, 4, 4,0x012d,0x0006,-2, 1,0x0002,ar45,        0,0,0,0,0,0)
  XTREG( 47,188,32, 4, 4,0x012e,0x0006,-2, 1,0x0002,ar46,        0,0,0,0,0,0)
  XTREG( 48,192,32, 4, 4,0x012f,0x0006,-2, 1,0x0002,ar47,        0,0,0,0,0,0)
  XTREG( 49,196,32, 4, 4,0x0130,0x0006,-2, 1,0x0002,ar48,        0,0,0,0,0,0)
  XTREG( 50,200,32, 4, 4,0x0131,0x0006,-2, 1,0x0002,ar49,        0,0,0,0,0,0)
  XTREG( 51,204,32, 4, 4,0x0132,0x0006,-2, 1,0x0002,ar50,        0,0,0,0,0,0)
  XTREG( 52,208,32, 4, 4,0x0133,0x0006,-2, 1,0x0002,ar51,        0,0,0,0,0,0)
  XTREG( 53,212,32, 4, 4,0x0134,0x0006,-2, 1,0x0002,ar52,        0,0,0,0,0,0)
  XTREG( 54,216,32, 4, 4,0x0135,0x0006,-2, 1,0x0002,ar53,        0,0,0,0,0,0)
  XTREG( 55,220,32, 4, 4,0x0136,0x0006,-2, 1,0x0002,ar54,        0,0,0,0,0,0)
  XTREG( 56,224,32, 4, 4,0x0137,0x0006,-2, 1,0x0002,ar55,        0,0,0,0,0,0)
  XTREG( 57,228,32, 4, 4,0x0138,0x0006,-2, 1,0x0002,ar56,        0,0,0,0,0,0)
  XTREG( 58,232,32, 4, 4,0x0139,0x0006,-2, 1,0x0002,ar57,        0,0,0,0,0,0)
  XTREG( 59,236,32, 4, 4,0x013a,0x0006,-2, 1,0x0002,ar58,        0,0,0,0,0,0)
  XTREG( 60,240,32, 4, 4,0x013b,0x0006,-2, 1,0x0002,ar59,        0,0,0,0,0,0)
  XTREG( 61,244,32, 4, 4,0x013c,0x0006,-2, 1,0x0002,ar60,        0,0,0,0,0,0)
  XTREG( 62,248,32, 4, 4,0x013d,0x0006,-2, 1,0x0002,ar61,        0,0,0,0,0,0)
  XTREG( 63,252,32, 4, 4,0x013e,0x0006,-2, 1,0x0002,ar62,        0,0,0,0,0,0)
  XTREG( 64,256,32, 4, 4,0x013f,0x0006,-2, 1,0x0002,ar63,        0,0,0,0,0,0)
  XTREG( 65,260,32, 4, 4,0x0200,0x0006,-2, 2,0x1100,lbeg,        0,0,0,0,0,0)
  XTREG( 66,264,32, 4, 4,0x0201,0x0006,-2, 2,0x1100,lend,        0,0,0,0,0,0)
  XTREG( 67,268,32, 4, 4,0x0202,0x0006,-2, 2,0x1100,lcount,      0,0,0,0,0,0)
  XTREG( 68,272, 6, 4, 4,0x0203,0x0006,-2, 2,0x1100,sar,         0,0,0,0,0,0)
  XTREG( 69,276, 4, 4, 4,0x0248,0x0006,-2, 2,0x1002,windowbase,  0,0,0,0,0,0)
  XTREG( 70,280,16, 4, 4,0x0249,0x0006,-2, 2,0x1002,windowstart, 0,0,0,0,0,0)
  XTREG( 71,284,32, 4, 4,0x02b0,0x0002,-2, 2,0x1000,configid0,   0,0,0,0,0,0)
  XTREG( 72,288,32, 4, 4,0x02d0,0x0002,-2, 2,0x1000,configid1,   0,0,0,0,0,0)
  XTREG( 73,292,19, 4, 4,0x02e6,0x0006,-2, 2,0x1100,ps,          0,0,0,0,0,0)
  XTREG( 74,296,32, 4, 4,0x03e7,0x0006,-2, 3,0x0110,threadptr,   0,0,0,0,0,0)
  XTREG( 75,300,16, 4, 4,0x0204,0x0006,-1, 2,0x1100,br,          0,0,0,0,0,0)
  XTREG( 76,304,32, 4, 4,0x020c,0x0006,-1, 2,0x1100,scompare1,   0,0,0,0,0,0)
  XTREG( 77,308,32, 4, 4,0x0210,0x0006,-1, 2,0x1100,acclo,       0,0,0,0,0,0)
  XTREG( 78,312, 8, 4, 4,0x0211,0x0006,-1, 2,0x1100,acchi,       0,0,0,0,0,0)
  XTREG( 79,316,32, 4, 4,0x0220,0x0006,-1, 2,0x1100,m0,          0,0,0,0,0,0)
  XTREG( 80,320,32, 4, 4,0x0221,0x0006,-1, 2,0x1100,m1,          0,0,0,0,0,0)
  XTREG( 81,324,32, 4, 4,0x0222,0x0006,-1, 2,0x1100,m2,          0,0,0,0,0,0)
  XTREG( 82,328,32, 4, 4,0x0223,0x0006,-1, 2,0x1100,m3,          0,0,0,0,0,0)
  XTREG( 83,332, 8, 4, 4,0x030c,0x000e,-1, 3,0x0210,gpio_out,    0,0,0,0,0,0)
  XTREG( 84,336,32, 4, 4,0x0030,0x0006, 0, 4,0x0401,f0,
            "03:03:44:00","03:03:04:00",0,0,0,0)
  XTREG( 85,340,32, 4, 4,0x0031,0x0006, 0, 4,0x0401,f1,
            "03:13:44:00","03:13:04:00",0,0,0,0)
  XTREG( 86,344,32, 4, 4,0x0032,0x0006, 0, 4,0x0401,f2,
            "03:23:44:00","03:23:04:00",0,0,0,0)
  XTREG( 87,348,32, 4, 4,0x0033,0x0006, 0, 4,0x0401,f3,
            "03:33:44:00","03:33:04:00",0,0,0,0)
  XTREG( 88,352,32, 4, 4,0x0034,0x0006, 0, 4,0x0401,f4,
            "03:43:44:00","03:43:04:00",0,0,0,0)
  XTREG( 89,356,32, 4, 4,0x0035,0x0006, 0, 4,0x0401,f5,
            "03:53:44:00","03:53:04:00",0,0,0,0)
  XTREG( 90,360,32, 4, 4,0x0036,0x0006, 0, 4,0x0401,f6,
            "03:63:44:00","03:63:04:00",0,0,0,0)
  XTREG( 91,364,32, 4, 4,0x0037,0x0006, 0, 4,0x0401,f7,
            "03:73:44:00","03:73:04:00",0,0,0,0)
  XTREG( 92,368,32, 4, 4,0x0038,0x0006, 0, 4,0x0401,f8,
            "03:83:44:00","03:83:04:00",0,0,0,0)
  XTREG( 93,372,32, 4, 4,0x0039,0x0006, 0, 4,0x0401,f9,
            "03:93:44:00","03:93:04:00",0,0,0,0)
  XTREG( 94,376,32, 4, 4,0x003a,0x0006, 0, 4,0x0401,f10,
            "03:a3:44:00","03:a3:04:00",0,0,0,0)
  XTREG( 95,380,32, 4, 4,0x003b,0x0006, 0, 4,0x0401,f11,
            "03:b3:44:00","03:b3:04:00",0,0,0,0)
  XTREG( 96,384,32, 4, 4,0x003c,0x0006, 0, 4,0x0401,f12,
            "03:c3:44:00","03:c3:04:00",0,0,0,0)
  XTREG( 97,388,32, 4, 4,0x003d,0x0006, 0, 4,0x0401,f13,
            "03:d3:44:00","03:d3:04:00",0,0,0,0)
  XTREG( 98,392,32, 4, 4,0x003e,0x0006, 0, 4,0x0401,f14,
            "03:e3:44:00","03:e3:04:00",0,0,0,0)
  XTREG( 99,396,32, 4, 4,0x003f,0x0006, 0, 4,0x0401,f15,
            "03:f3:44:00","03:f3:04:00",0,0,0,0)
  XTREG(100,400,32, 4, 4,0x03e8,0x0006, 0, 3,0x0100,fcr,         0,0,0,0,0,0)
  XTREG(101,404,32, 4, 4,0x03e9,0x0006, 0, 3,0x0100,fsr,         0,0,0,0,0,0)
  XTREG(102,408,32, 4, 4,0x0300,0x0006, 3, 3,0x0200,accx_0,      0,0,0,0,0,0)
  XTREG(103,412, 8, 4, 4,0x0301,0x0006, 3, 3,0x0200,accx_1,      0,0,0,0,0,0)
  XTREG(104,416,32, 4, 4,0x0302,0x0006, 3, 3,0x0200,qacc_h_0,    0,0,0,0,0,0)
  XTREG(105,420,32, 4, 4,0x0303,0x0006, 3, 3,0x0200,qacc_h_1,    0,0,0,0,0,0)
  XTREG(106,424,32, 4, 4,0x0304,0x0006, 3, 3,0x0200,qacc_h_2,    0,0,0,0,0,0)
  XTREG(107,428,32, 4, 4,0x0305,0x0006, 3, 3,0x0200,qacc_h_3,    0,0,0,0,0,0)
  XTREG(108,432,32, 4, 4,0x0306,0x0006, 3, 3,0x0200,qacc_h_4,    0,0,0,0,0,0)
  XTREG(109,436,32, 4, 4,0x0307,0x0006, 3, 3,0x0200,qacc_l_0,    0,0,0,0,0,0)
  XTREG(110,440,32, 4, 4,0x0308,0x0006, 3, 3,0x0200,qacc_l_1,    0,0,0,0,0,0)
  XTREG(111,444,32, 4, 4,0x0309,0x0006, 3, 3,0x0200,qacc_l_2,    0,0,0,0,0,0)
  XTREG(112,448,32, 4, 4,0x030a,0x0006, 3, 3,0x0200,qacc_l_3,    0,0,0,0,0,0)
  XTREG(113,452,32, 4, 4,0x030b,0x0006, 3, 3,0x0200,qacc_l_4,    0,0,0,0,0,0)
  XTREG(114,456, 4, 4, 4,0x030d,0x0006, 3, 3,0x0210,sar_byte,    0,0,0,0,0,0)
  XTREG(115,460, 4, 4, 4,0x030e,0x0006, 3, 3,0x0210,fft_bit_width,0,0,0,0,0,0)
  XTREG(116,464,32, 4, 4,0x030f,0x0006, 3, 3,0x0200,ua_state_0,  0,0,0,0,0,0)
  XTREG(117,468,32, 4, 4,0x0310,0x0006, 3, 3,0x0200,ua_state_1,  0,0,0,0,0,0)
  XTREG(118,472,32, 4, 4,0x0311,0x0006, 3, 3,0x0200,ua_state_2,  0,0,0,0,0,0)
  XTREG(119,476,32, 4, 4,0x0312,0x0006, 3, 3,0x0200,ua_state_3,  0,0,0,0,0,0)
  XTREG(120,480,128,16,16,0x1008,0x0006, 3, 4,0x0201,q0,
            "03:44:60:cd","03:44:20:cd",0,0,0,0)
  XTREG(121,496,128,16,16,0x1009,0x0006, 3, 4,0x0201,q1,
            "03:44:e0:cd","03:44:a0:cd",0,0,0,0)
  XTREG(122,512,128,16,16,0x100a,0x0006, 3, 4,0x0201,q2,
            "03:44:60:dd","03:44:20:dd",0,0,0,0)
  XTREG(123,528,128,16,16,0x100b,0x0006, 3, 4,0x0201,q3,
            "03:44:e0:dd","03:44:a0:dd",0,0,0,0)
  XTREG(124,544,128,16,16,0x100c,0x0006, 3, 4,0x0201,q4,
            "03:44:60:ed","03:44:20:ed",0,0,0,0)
  XTREG(125,560,128,16,16,0x100d,0x0006, 3, 4,0x0201,q5,
            "03:44:e0:ed","03:44:a0:ed",0,0,0,0)
  XTREG(126,576,128,16,16,0x100e,0x0006, 3, 4,0x0201,q6,
            "03:44:60:fd","03:44:20:fd",0,0,0,0)
  XTREG(127,592,128,16,16,0x100f,0x0006, 3, 4,0x0201,q7,
            "03:44:e0:fd","03:44:a0:fd",0,0,0,0)
  XTREG(128,608,32, 4, 4,0x0259,0x000d,-2, 2,0x1000,mmid,        0,0,0,0,0,0)
  XTREG(129,612, 2, 4, 4,0x0260,0x0007,-2, 2,0x1000,ibreakenable,0,0,0,0,0,0)
  XTREG(130,616, 1, 4, 4,0x0261,0x0007,-2, 2,0x1000,memctl,      0,0,0,0,0,0)
  XTREG(131,620, 6, 4, 4,0x0263,0x0007,-2, 2,0x1000,atomctl,     0,0,0,0,0,0)
  XTREG(132,624,32, 4, 4,0x0268,0x0007,-2, 2,0x1000,ddr,         0,0,0,0,0,0)
  XTREG(133,628,32, 4, 4,0x0280,0x0007,-2, 2,0x1000,ibreaka0,    0,0,0,0,0,0)
  XTREG(134,632,32, 4, 4,0x0281,0x0007,-2, 2,0x1000,ibreaka1,    0,0,0,0,0,0)
  XTREG(135,636,32, 4, 4,0x0290,0x0007,-2, 2,0x1000,dbreaka0,    0,0,0,0,0,0)
  XTREG(136,640,32, 4, 4,0x0291,0x0007,-2, 2,0x1000,dbreaka1,    0,0,0,0,0,0)
  XTREG(137,644,32, 4, 4,0x02a0,0x0007,-2, 2,0x1000,dbreakc0,    0,0,0,0,0,0)
  XTREG(138,648,32, 4, 4,0x02a1,0x0007,-2, 2,0x1000,dbreakc1,    0,0,0,0,0,0)
  XTREG(139,652,32, 4, 4,0x02b1,0x0007,-2, 2,0x1000,epc1,        0,0,0,0,0,0)
  XTREG(140,656,32, 4, 4,0x02b2,0x0007,-2, 2,0x1000,epc2,        0,0,0,0,0,0)
  XTREG(141,660,32, 4, 4,0x02b3,0x0007,-2, 2,0x1000,epc3,        0,0,0,0,0,0)
  XTREG(142,664,32, 4, 4,0x02b4,0x0007,-2, 2,0x1000,epc4,        0,0,0,0,0,0)
  XTREG(143,668,32, 4, 4,0x02b5,0x0007,-2, 2,0x1000,epc5,        0,0,0,0,0,0)
  XTREG(144,672,32, 4, 4,0x02b6,0x0007,-2, 2,0x1000,epc6,        0,0,0,0,0,0)
  XTREG(145,676,32, 4, 4,0x02b7,0x0007,-2, 2,0x1000,epc7,        0,0,0,0,0,0)
  XTREG(146,680,32, 4, 4,0x02c0,0x0007,-2, 2,0x1000,depc,        0,0,0,0,0,0)
  XTREG(147,684,19, 4, 4,0x02c2,0x0007,-2, 2,0x1000,eps2,        0,0,0,0,0,0)
  XTREG(148,688,19, 4, 4,0x02c3,0x0007,-2, 2,0x1000,eps3,        0,0,0,0,0,0)
  XTREG(149,692,19, 4, 4,0x02c4,0x0007,-2, 2,0x1000,eps4,        0,0,0,0,0,0)
  XTREG(150,696,19, 4, 4,0x02c5,0x0007,-2, 2,0x1000,eps5,        0,0,0,0,0,0)
  XTREG(151,700,19, 4, 4,0x02c6,0x0007,-2, 2,0x1000,eps6,        0,0,0,0,0,0)
  XTREG(152,704,19, 4, 4,0x02c7,0x0007,-2, 2,0x1000,eps7,        0,0,0,0,0,0)
  XTREG(153,708,32, 4, 4,0x02d1,0x0007,-2, 2,0x1000,excsave1,    0,0,0,0,0,0)
  XTREG(154,712,32, 4, 4,0x02d2,0x0007,-2, 2,0x1000,excsave2,    0,0,0,0,0,0)
  XTREG(155,716,32, 4, 4,0x02d3,0x0007,-2, 2,0x1000,excsave3,    0,0,0,0,0,0)
  XTREG(156,720,32, 4, 4,0x02d4,0x0007,-2, 2,0x1000,excsave4,    0,0,0,0,0,0)
  XTREG(157,724,32, 4, 4,0x02d5,0x0007,-2, 2,0x1000,excsave5,    0,0,0,0,0,0)
  XTREG(158,728,32, 4, 4,0x02d6,0x0007,-2, 2,0x1000,excsave6,    0,0,0,0,0,0)
  XTREG(159,732,32, 4, 4,0x02d7,0x0007,-2, 2,0x1000,excsave7,    0,0,0,0,0,0)
  XTREG(160,736, 8, 4, 4,0x02e0,0x0007,-2, 2,0x1000,cpenable,    0,0,0,0,0,0)
  XTREG(161,740,32, 4, 4,0x02e2,0x000b,-2, 2,0x1000,interrupt,   0,0,0,0,0,0)
  XTREG(162,744,32, 4, 4,0x02e2,0x000d,-2, 2,0x1000,intset,      0,0,0,0,0,0)
  XTREG(163,748,32, 4, 4,0x02e3,0x000d,-2, 2,0x1000,intclear,    0,0,0,0,0,0)
  XTREG(164,752,32, 4, 4,0x02e4,0x0007,-2, 2,0x1000,intenable,   0,0,0,0,0,0)
  XTREG(165,756,32, 4, 4,0x02e7,0x0007,-2, 2,0x1000,vecbase,     0,0,0,0,0,0)
  XTREG(166,760, 6, 4, 4,0x02e8,0x0007,-2, 2,0x1000,exccause,    0,0,0,0,0,0)
  XTREG(167,764,12, 4, 4,0x02e9,0x0003,-2, 2,0x1000,debugcause,  0,0,0,0,0,0)
  XTREG(168,768,32, 4, 4,0x02ea,0x000f,-2, 2,0x1000,ccount,      0,0,0,0,0,0)
  XTREG(169,772,32, 4, 4,0x02eb,0x0003,-2, 2,0x1000,prid,        0,0,0,0,0,0)
  XTREG(170,776,32, 4, 4,0x02ec,0x000f,-2, 2,0x1000,icount,      0,0,0,0,0,0)
  XTREG(171,780, 4, 4, 4,0x02ed,0x0007,-2, 2,0x1000,icountlevel, 0,0,0,0,0,0)
  XTREG(172,784,32, 4, 4,0x02ee,0x0007,-2, 2,0x1000,excvaddr,    0,0,0,0,0,0)
  XTREG(173,788,32, 4, 4,0x02f0,0x000f,-2, 2,0x1000,ccompare0,   0,0,0,0,0,0)
  XTREG(174,792,32, 4, 4,0x02f1,0x000f,-2, 2,0x1000,ccompare1,   0,0,0,0,0,0)
  XTREG(175,796,32, 4, 4,0x02f2,0x000f,-2, 2,0x1000,ccompare2,   0,0,0,0,0,0)
  XTREG(176,800,32, 4, 4,0x02f4,0x0007,-2, 2,0x1000,misc0,       0,0,0,0,0,0)
  XTREG(177,804,32, 4, 4,0x02f5,0x0007,-2, 2,0x1000,misc1,       0,0,0,0,0,0)
  XTREG(178,808,32, 4, 4,0x02f6,0x0007,-2, 2,0x1000,misc2,       0,0,0,0,0,0)
  XTREG(179,812,32, 4, 4,0x02f7,0x0007,-2, 2,0x1000,misc3,       0,0,0,0,0,0)
  XTREG(180,816,32, 4, 4,0x2028,0x000f,-2, 4,0x0101,pwrctl,
            "03:52:64:01:03:62:64:02:03:52:a4:0c:03:60:55:11:03:52:c5:20:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:0c:03:60:55:11:03:52:c5:20:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(181,820,32, 4, 4,0x2029,0x000f,-2, 4,0x0101,pwrstat,
            "03:52:64:01:03:62:64:02:03:52:a4:0c:03:60:55:11:03:52:c5:24:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:0c:03:60:55:11:03:52:c5:24:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(182,824, 1, 4, 4,0x202a,0x000f,-2, 4,0x0101,eristat,
            "03:52:64:01:03:62:64:02:03:52:a4:0c:03:60:55:11:03:52:c5:28:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:0c:03:60:55:11:03:52:c5:28:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(183,828,32, 4, 4,0x202b,0x000f,-2, 4,0x0101,cs_itctrl,
            "03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:d5:03:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:d5:03:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(184,832,16, 4, 4,0x202c,0x000f,-2, 4,0x0101,cs_claimset,
            "03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:c5:a0:03:52:d5:04:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:c5:a0:03:52:d5:04:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(185,836,16, 4, 4,0x202d,0x000f,-2, 4,0x0101,cs_claimclr,
            "03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:c5:a4:03:52:d5:04:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:c5:a4:03:52:d5:04:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(186,840,32, 4, 4,0x202e,0x000d,-2, 4,0x0101,cs_lockaccess,
            "03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:c5:b0:03:52:d5:04:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:c5:b0:03:52:d5:04:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(187,844,32, 4, 4,0x202f,0x000b,-2, 4,0x0101,cs_lockstatus,
            "03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:c5:b4:03:52:d5:04:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:c5:b4:03:52:d5:04:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(188,848, 1, 4, 4,0x2030,0x000b,-2, 4,0x0101,cs_authstatus,
            "03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:c5:b8:03:52:d5:04:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:0f:03:60:55:11:03:52:c5:b8:03:52:d5:04:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(189,852,32, 4, 4,0x203f,0x000f,-2, 4,0x0101,fault_info,
            "03:52:64:01:03:62:64:02:03:52:a4:0c:03:60:55:11:03:52:c5:30:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:0c:03:60:55:11:03:52:c5:30:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(190,856,32, 4, 4,0x2040,0x0003,-2, 4,0x0101,trax_id,
            "03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(191,860,32, 4, 4,0x2041,0x000f,-2, 4,0x0101,trax_control,
            "03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:04:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:04:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(192,864,32, 4, 4,0x2042,0x000b,-2, 4,0x0101,trax_status,
            "03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:08:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:08:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(193,868,32, 4, 4,0x2043,0x000f,-2, 4,0x0101,trax_data,
            "03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:0c:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:0c:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(194,872,32, 4, 4,0x2044,0x000f,-2, 4,0x0101,trax_address,
            "03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:10:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:10:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(195,876,32, 4, 4,0x2045,0x000f,-2, 4,0x0101,trax_pctrigger,
            "03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:14:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:14:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(196,880,32, 4, 4,0x2046,0x000f,-2, 4,0x0101,trax_pcmatch,
            "03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:18:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:18:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(197,884,32, 4, 4,0x2047,0x000f,-2, 4,0x0101,trax_delay,
            "03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:1c:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:1c:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(198,888,32, 4, 4,0x2048,0x000f,-2, 4,0x0101,trax_memstart,
            "03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:20:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:20:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(199,892,32, 4, 4,0x2049,0x000f,-2, 4,0x0101,trax_memend,
            "03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:24:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:00:03:60:55:11:03:52:c5:24:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(200,896,32, 4, 4,0x2057,0x000f,-2, 4,0x0101,pmg,
            "03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(201,900,32, 4, 4,0x2058,0x000f,-2, 4,0x0101,pmpc,
            "03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:04:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:04:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(202,904,32, 4, 4,0x2059,0x000f,-2, 4,0x0101,pm0,
            "03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:01:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:01:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(203,908,32, 4, 4,0x205a,0x000f,-2, 4,0x0101,pm1,
            "03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:01:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:01:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(204,912,32, 4, 4,0x205b,0x000f,-2, 4,0x0101,pmctrl0,
            "03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:d5:01:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:d5:01:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(205,916,32, 4, 4,0x205c,0x000f,-2, 4,0x0101,pmctrl1,
            "03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:d5:01:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:d5:01:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(206,920,32, 4, 4,0x205d,0x000f,-2, 4,0x0101,pmstat0,
            "03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:02:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:02:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(207,924,32, 4, 4,0x205e,0x000f,-2, 4,0x0101,pmstat1,
            "03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:02:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:04:03:60:55:11:03:52:c5:80:03:52:d5:02:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(208,928,32, 4, 4,0x205f,0x0003,-2, 4,0x0101,ocdid,
            "03:52:64:01:03:62:64:02:03:52:a4:08:03:60:55:11:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:08:03:60:55:11:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(209,932,32, 4, 4,0x2060,0x000f,-2, 4,0x0101,ocd_dcrclr,
            "03:52:64:01:03:62:64:02:03:52:a4:08:03:60:55:11:03:52:c5:08:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:08:03:60:55:11:03:52:c5:08:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(210,936,32, 4, 4,0x2061,0x000f,-2, 4,0x0101,ocd_dcrset,
            "03:52:64:01:03:62:64:02:03:52:a4:08:03:60:55:11:03:52:c5:0c:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:08:03:60:55:11:03:52:c5:0c:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(211,940,32, 4, 4,0x2062,0x000f,-2, 4,0x0101,ocd_dsr,
            "03:52:64:01:03:62:64:02:03:52:a4:08:03:60:55:11:03:52:c5:10:03:60:65:40:03:62:64:00:03:52:24:01:03:62:24:02","03:52:64:01:03:62:64:02:03:52:a4:08:03:60:55:11:03:52:c5:10:03:62:24:00:03:60:75:40:03:52:24:01:03:62:24:02",0,0,0,0)
  XTREG(212,944,32, 4, 4,0x0000,0x0006,-2, 8,0x2100,a0,          0,0,0,0,0,0)
  XTREG(213,948,32, 4, 4,0x0001,0x0006,-2, 8,0x2100,a1,          0,0,0,0,0,0)
  XTREG(214,952,32, 4, 4,0x0002,0x0006,-2, 8,0x2100,a2,          0,0,0,0,0,0)
  XTREG(215,956,32, 4, 4,0x0003,0x0006,-2, 8,0x2100,a3,          0,0,0,0,0,0)
  XTREG(216,960,32, 4, 4,0x0004,0x0006,-2, 8,0x2100,a4,          0,0,0,0,0,0)
  XTREG(217,964,32, 4, 4,0x0005,0x0006,-2, 8,0x2100,a5,          0,0,0,0,0,0)
  XTREG(218,968,32, 4, 4,0x0006,0x0006,-2, 8,0x2100,a6,          0,0,0,0,0,0)
  XTREG(219,972,32, 4, 4,0x0007,0x0006,-2, 8,0x2100,a7,          0,0,0,0,0,0)
  XTREG(220,976,32, 4, 4,0x0008,0x0006,-2, 8,0x2100,a8,          0,0,0,0,0,0)
  XTREG(221,980,32, 4, 4,0x0009,0x0006,-2, 8,0x2100,a9,          0,0,0,0,0,0)
  XTREG(222,984,32, 4, 4,0x000a,0x0006,-2, 8,0x2100,a10,         0,0,0,0,0,0)
  XTREG(223,988,32, 4, 4,0x000b,0x0006,-2, 8,0x2100,a11,         0,0,0,0,0,0)
  XTREG(224,992,32, 4, 4,0x000c,0x0006,-2, 8,0x2100,a12,         0,0,0,0,0,0)
  XTREG(225,996,32, 4, 4,0x000d,0x0006,-2, 8,0x2100,a13,         0,0,0,0,0,0)
  XTREG(226,1000,32, 4, 4,0x000e,0x0006,-2, 8,0x2100,a14,         0,0,0,0,0,0)
  XTREG(227,1004,32, 4, 4,0x000f,0x0006,-2, 8,0x2100,a15,         0,0,0,0,0,0)
  XTREG(228,1008, 1, 1, 1,0x0010,0x0006,-2, 6,0x1010,b0,
            0,0,&xtensa_mask0,0,0,0)
  XTREG(229,1009, 1, 1, 1,0x0011,0x0006,-2, 6,0x1010,b1,
            0,0,&xtensa_mask1,0,0,0)
  XTREG(230,1010, 1, 1, 1,0x0012,0x0006,-2, 6,0x1010,b2,
            0,0,&xtensa_mask2,0,0,0)
  XTREG(231,1011, 1, 1, 1,0x0013,0x0006,-2, 6,0x1010,b3,
            0,0,&xtensa_mask3,0,0,0)
  XTREG(232,1012, 1, 1, 1,0x0014,0x0006,-2, 6,0x1010,b4,
            0,0,&xtensa_mask4,0,0,0)
  XTREG(233,1013, 1, 1, 1,0x0015,0x0006,-2, 6,0x1010,b5,
            0,0,&xtensa_mask5,0,0,0)
  XTREG(234,1014, 1, 1, 1,0x0016,0x0006,-2, 6,0x1010,b6,
            0,0,&xtensa_mask6,0,0,0)
  XTREG(235,1015, 1, 1, 1,0x0017,0x0006,-2, 6,0x1010,b7,
            0,0,&xtensa_mask7,0,0,0)
  XTREG(236,1016, 1, 1, 1,0x0018,0x0006,-2, 6,0x1010,b8,
            0,0,&xtensa_mask8,0,0,0)
  XTREG(237,1017, 1, 1, 1,0x0019,0x0006,-2, 6,0x1010,b9,
            0,0,&xtensa_mask9,0,0,0)
  XTREG(238,1018, 1, 1, 1,0x001a,0x0006,-2, 6,0x1010,b10,
            0,0,&xtensa_mask10,0,0,0)
  XTREG(239,1019, 1, 1, 1,0x001b,0x0006,-2, 6,0x1010,b11,
            0,0,&xtensa_mask11,0,0,0)
  XTREG(240,1020, 1, 1, 1,0x001c,0x0006,-2, 6,0x1010,b12,
            0,0,&xtensa_mask12,0,0,0)
  XTREG(241,1021, 1, 1, 1,0x001d,0x0006,-2, 6,0x1010,b13,
            0,0,&xtensa_mask13,0,0,0)
  XTREG(242,1022, 1, 1, 1,0x001e,0x0006,-2, 6,0x1010,b14,
            0,0,&xtensa_mask14,0,0,0)
  XTREG(243,1023, 1, 1, 1,0x001f,0x0006,-2, 6,0x1010,b15,
            0,0,&xtensa_mask15,0,0,0)
  XTREG(244,1024, 4, 4, 4,0x2008,0x0006,-2, 6,0x1010,psintlevel,
            0,0,&xtensa_mask16,0,0,0)
  XTREG(245,1028, 1, 4, 4,0x2009,0x0006,-2, 6,0x1010,psum,
            0,0,&xtensa_mask17,0,0,0)
  XTREG(246,1032, 1, 4, 4,0x200a,0x0006,-2, 6,0x1010,pswoe,
            0,0,&xtensa_mask18,0,0,0)
  XTREG(247,1036, 1, 4, 4,0x200b,0x0006,-2, 6,0x1010,psexcm,
            0,0,&xtensa_mask19,0,0,0)
  XTREG(248,1040, 2, 4, 4,0x200c,0x0006,-2, 6,0x1010,pscallinc,
            0,0,&xtensa_mask20,0,0,0)
  XTREG(249,1044, 4, 4, 4,0x200d,0x0006,-2, 6,0x1010,psowb,
            0,0,&xtensa_mask21,0,0,0)
  XTREG(250,1048,40, 8, 4,0x200e,0x0006,-2, 6,0x1010,acc,
            0,0,&xtensa_mask22,0,0,0)
  XTREG(251,1056, 4, 4, 4,0x2013,0x0006,-2, 6,0x1010,dbnum,
            0,0,&xtensa_mask23,0,0,0)
  XTREG(252,1060, 2, 4, 4,0x2015,0x0006, 0, 5,0x1010,roundmode,
            0,0,&xtensa_mask24,0,0,0)
  XTREG(253,1064, 1, 4, 4,0x2016,0x0006, 0, 5,0x1010,invalidenable,
            0,0,&xtensa_mask25,0,0,0)
  XTREG(254,1068, 1, 4, 4,0x2017,0x0006, 0, 5,0x1010,divzeroenable,
            0,0,&xtensa_mask26,0,0,0)
  XTREG(255,1072, 1, 4, 4,0x2018,0x0006, 0, 5,0x1010,overflowenable,
            0,0,&xtensa_mask27,0,0,0)
  XTREG(256,1076, 1, 4, 4,0x2019,0x0006, 0, 5,0x1010,underflowenable,
            0,0,&xtensa_mask28,0,0,0)
  XTREG(257,1080, 1, 4, 4,0x201a,0x0006, 0, 5,0x1010,inexactenable,
            0,0,&xtensa_mask29,0,0,0)
  XTREG(258,1084, 1, 4, 4,0x201b,0x0006, 0, 5,0x1010,invalidflag,
            0,0,&xtensa_mask30,0,0,0)
  XTREG(259,1088, 1, 4, 4,0x201c,0x0006, 0, 5,0x1010,divzeroflag,
            0,0,&xtensa_mask31,0,0,0)
  XTREG(260,1092, 1, 4, 4,0x201d,0x0006, 0, 5,0x1010,overflowflag,
            0,0,&xtensa_mask32,0,0,0)
  XTREG(261,1096, 1, 4, 4,0x201e,0x0006, 0, 5,0x1010,underflowflag,
            0,0,&xtensa_mask33,0,0,0)
  XTREG(262,1100, 1, 4, 4,0x201f,0x0006, 0, 5,0x1010,inexactflag,
            0,0,&xtensa_mask34,0,0,0)
  XTREG(263,1104,20, 4, 4,0x2020,0x0006, 0, 5,0x1010,fpreserved20,
            0,0,&xtensa_mask35,0,0,0)
  XTREG(264,1108,20, 4, 4,0x2021,0x0006, 0, 5,0x1010,fpreserved20a,
            0,0,&xtensa_mask36,0,0,0)
  XTREG(265,1112, 5, 4, 4,0x2022,0x0006, 0, 5,0x1010,fpreserved5,
            0,0,&xtensa_mask37,0,0,0)
  XTREG(266,1116, 7, 4, 4,0x2023,0x0006, 0, 5,0x1010,fpreserved7,
            0,0,&xtensa_mask38,0,0,0)
  XTREG(267,1120,40, 8, 4,0x2024,0x0006, 3, 5,0x0210,accx,
            0,0,&xtensa_mask39,0,0,0)
  XTREG(268,1128,160,20, 4,0x2025,0x0006, 3, 5,0x0210,qacc_h,
            0,0,&xtensa_mask40,0,0,0)
  XTREG(269,1148,160,20, 4,0x2026,0x0006, 3, 5,0x0210,qacc_l,
            0,0,&xtensa_mask41,0,0,0)
  XTREG_END
};



#ifdef XTENSA_CONFIG_INSTANTIATE
XTENSA_CONFIG_INSTANTIATE(rmap,16)
#endif

