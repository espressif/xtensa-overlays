/* Customized table mapping between kernel xtregset and GDB register cache.

   Customer ID=15128; Build=0x88ef1; Copyright (c) 2007-2010 Tensilica Inc.

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


typedef struct {
  int   gdb_regnum;
  int   gdb_offset;
  int   ptrace_cp_offset;
  int   ptrace_offset;
  int   size;
  int   coproc;
  int   dbnum;
  char* name
;} xtensa_regtable_t;

#define XTENSA_ELF_XTREG_SIZE	256

const xtensa_regtable_t  xtensa_regmap_table[] = {
  /* gnum,gofs,cpofs,ofs,siz,cp, dbnum,  name */
  {   75, 300,   8,   8,  4, -1, 0x0204, "br" },
  {   76, 304,  12,  12,  4, -1, 0x020c, "scompare1" },
  {   77, 308,   0,   0,  4, -1, 0x0210, "acclo" },
  {   78, 312,   4,   4,  4, -1, 0x0211, "acchi" },
  {   79, 316,  16,  16,  4, -1, 0x0220, "m0" },
  {   80, 320,  20,  20,  4, -1, 0x0221, "m1" },
  {   81, 324,  24,  24,  4, -1, 0x0222, "m2" },
  {   82, 328,  28,  28,  4, -1, 0x0223, "m3" },
  {   84, 336,  32,  32,  4, -1, 0x030d, "sar_byte" },
  {   85, 340,   8,  44,  4,  0, 0x0030, "f0" },
  {   86, 344,  12,  48,  4,  0, 0x0031, "f1" },
  {   87, 348,  16,  52,  4,  0, 0x0032, "f2" },
  {   88, 352,  20,  56,  4,  0, 0x0033, "f3" },
  {   89, 356,  24,  60,  4,  0, 0x0034, "f4" },
  {   90, 360,  28,  64,  4,  0, 0x0035, "f5" },
  {   91, 364,  32,  68,  4,  0, 0x0036, "f6" },
  {   92, 368,  36,  72,  4,  0, 0x0037, "f7" },
  {   93, 372,  40,  76,  4,  0, 0x0038, "f8" },
  {   94, 376,  44,  80,  4,  0, 0x0039, "f9" },
  {   95, 380,  48,  84,  4,  0, 0x003a, "f10" },
  {   96, 384,  52,  88,  4,  0, 0x003b, "f11" },
  {   97, 388,  56,  92,  4,  0, 0x003c, "f12" },
  {   98, 392,  60,  96,  4,  0, 0x003d, "f13" },
  {   99, 396,  64, 100,  4,  0, 0x003e, "f14" },
  {  100, 400,  68, 104,  4,  0, 0x003f, "f15" },
  {  101, 404,   0,  36,  4,  0, 0x03e8, "fcr" },
  {  102, 408,   4,  40,  4,  0, 0x03e9, "fsr" },
  {  103, 412,   0, 112,  4,  3, 0x0300, "accx_0" },
  {  104, 416,   4, 116,  4,  3, 0x0301, "accx_1" },
  {  105, 420,   8, 120,  4,  3, 0x0302, "qacc_h_0" },
  {  106, 424,  12, 124,  4,  3, 0x0303, "qacc_h_1" },
  {  107, 428,  16, 128,  4,  3, 0x0304, "qacc_h_2" },
  {  108, 432,  20, 132,  4,  3, 0x0305, "qacc_h_3" },
  {  109, 436,  24, 136,  4,  3, 0x0306, "qacc_h_4" },
  {  110, 440,  28, 140,  4,  3, 0x0307, "qacc_l_0" },
  {  111, 444,  32, 144,  4,  3, 0x0308, "qacc_l_1" },
  {  112, 448,  36, 148,  4,  3, 0x0309, "qacc_l_2" },
  {  113, 452,  40, 152,  4,  3, 0x030a, "qacc_l_3" },
  {  114, 456,  44, 156,  4,  3, 0x030b, "qacc_l_4" },
  {  115, 460,  48, 160, 16,  3, 0x1008, "q0" },
  {  116, 476,  64, 176, 16,  3, 0x1009, "q1" },
  {  117, 492,  80, 192, 16,  3, 0x100a, "q2" },
  {  118, 508,  96, 208, 16,  3, 0x100b, "q3" },
  {  119, 524, 112, 224, 16,  3, 0x100c, "q4" },
  {  120, 540, 128, 240, 16,  3, 0x100d, "q5" },
  { 0 }
};

