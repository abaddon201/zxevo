#include "defs.h"
#include "tables.h"

const unsigned char incf[] =
{
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08
       ,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x10
       ,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08
       ,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x30
       ,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x28
       ,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x30
       ,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x28
       ,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x10
       ,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08
       ,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x10
       ,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08
       ,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x30
       ,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x28
       ,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x30
       ,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x28
       ,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x94
       ,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x88
       ,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x90
       ,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x88
       ,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0xb0
       ,0xa0,0xa0,0xa0,0xa0,0xa0,0xa0,0xa0,0xa8
       ,0xa8,0xa8,0xa8,0xa8,0xa8,0xa8,0xa8,0xb0
       ,0xa0,0xa0,0xa0,0xa0,0xa0,0xa0,0xa0,0xa8
       ,0xa8,0xa8,0xa8,0xa8,0xa8,0xa8,0xa8,0x90
       ,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x88
       ,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x90
       ,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x88
       ,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0xb0
       ,0xa0,0xa0,0xa0,0xa0,0xa0,0xa0,0xa0,0xa8
       ,0xa8,0xa8,0xa8,0xa8,0xa8,0xa8,0xa8,0xb0
       ,0xa0,0xa0,0xa0,0xa0,0xa0,0xa0,0xa0,0xa8
       ,0xa8,0xa8,0xa8,0xa8,0xa8,0xa8,0xa8,0x50
};

const unsigned char decf[] =
{
        0xba,0x42,0x02,0x02,0x02,0x02,0x02,0x02
       ,0x02,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a
       ,0x1a,0x02,0x02,0x02,0x02,0x02,0x02,0x02
       ,0x02,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a
       ,0x1a,0x22,0x22,0x22,0x22,0x22,0x22,0x22
       ,0x22,0x2a,0x2a,0x2a,0x2a,0x2a,0x2a,0x2a
       ,0x3a,0x22,0x22,0x22,0x22,0x22,0x22,0x22
       ,0x22,0x2a,0x2a,0x2a,0x2a,0x2a,0x2a,0x2a
       ,0x3a,0x02,0x02,0x02,0x02,0x02,0x02,0x02
       ,0x02,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a
       ,0x1a,0x02,0x02,0x02,0x02,0x02,0x02,0x02
       ,0x02,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a
       ,0x1a,0x22,0x22,0x22,0x22,0x22,0x22,0x22
       ,0x22,0x2a,0x2a,0x2a,0x2a,0x2a,0x2a,0x2a
       ,0x3a,0x22,0x22,0x22,0x22,0x22,0x22,0x22
       ,0x22,0x2a,0x2a,0x2a,0x2a,0x2a,0x2a,0x2a
       ,0x3e,0x82,0x82,0x82,0x82,0x82,0x82,0x82
       ,0x82,0x8a,0x8a,0x8a,0x8a,0x8a,0x8a,0x8a
       ,0x9a,0x82,0x82,0x82,0x82,0x82,0x82,0x82
       ,0x82,0x8a,0x8a,0x8a,0x8a,0x8a,0x8a,0x8a
       ,0x9a,0xa2,0xa2,0xa2,0xa2,0xa2,0xa2,0xa2
       ,0xa2,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa
       ,0xba,0xa2,0xa2,0xa2,0xa2,0xa2,0xa2,0xa2
       ,0xa2,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa
       ,0xba,0x82,0x82,0x82,0x82,0x82,0x82,0x82
       ,0x82,0x8a,0x8a,0x8a,0x8a,0x8a,0x8a,0x8a
       ,0x9a,0x82,0x82,0x82,0x82,0x82,0x82,0x82
       ,0x82,0x8a,0x8a,0x8a,0x8a,0x8a,0x8a,0x8a
       ,0x9a,0xa2,0xa2,0xa2,0xa2,0xa2,0xa2,0xa2
       ,0xa2,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa
       ,0xba,0xa2,0xa2,0xa2,0xa2,0xa2,0xa2,0xa2
       ,0xa2,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa
};

unsigned char adcf[0x20000]; // flags for adc and add

void make_adc()
{
   for (int c = 0; c < 2; c++)
      for (int x = 0; x < 0x100; x++)
         for (int y = 0; y < 0x100; y++) {

            unsigned res = x+y+c;
            unsigned char fl = 0;
            if (!(res & 0xFF)) fl |= ZF;
            fl |= (res & (F3|F5|SF));
            if (res >= 0x100) fl |= CF;
            if (((x&0x0F)+(y&0x0F)+c) & 0x10) fl |= HF;
            int ri = (signed char)x + (signed char)y + c;
            if (ri >= 0x80 || ri <= -0x81) fl |= PV;

            adcf[c*0x10000 + x*0x100 + y] = fl;
         }
}

unsigned char sbcf[0x20000]; // flags for sub and sbc
unsigned char cpf[0x10000];  // flags for cp
unsigned char cpf8b[0x10000]; // flags for CPD/CPI/CPDR/CPIR

void make_sbc()
{
   for (int c = 0; c < 2; c++)
   for (int x = 0; x < 0x100; x++)
   for (int y = 0; y < 0x100; y++) {
      int res = x - y - c;
      unsigned char fl = res & (F3|F5|SF);
      if (!(res&0xFF)) fl |= ZF;
      if (res & 0x10000) fl |= CF;
      int r = (signed char)x - (signed char)y - c;
      if (r >= 0x80 || r < -0x80) fl |= PV;
      if (((x&0x0F)-(res&0x0F)-c) & 0x10) fl |= HF;
      fl |= NF;
      sbcf[c*0x10000 + x*0x100 + y] = fl;
   }
   for (int i = 0; i < 0x10000; i++) {
      cpf[i] = (sbcf[i] & ~(F3|F5)) | (i & (F3|F5));
      unsigned char tempbyte = (i >> 8) - (i & 0xFF) - ((sbcf[i] & HF) >> 4);
      cpf8b[i] = (sbcf[i] & ~(F3|F5|PV|CF)) + (tempbyte & F3) + ((tempbyte << 4) & F5);
   }
}

unsigned char log_f[0x100];
void make_log()
{
   for (int x = 0; x < 0x100; x++) {
      unsigned char fl = x & (F3|F5|SF);
      unsigned char p = PV;
      for (int i = 0x80; i; i /= 2)
         if (x & i) p ^= PV;
      log_f[x] = fl | p;
   }
   log_f[0] |= ZF;
}

unsigned char rlcaf[0x100];
unsigned char rrcaf[0x100];
unsigned char rol[0x100];
unsigned char ror[0x100];
const unsigned char rlcf[0x100] = // for rlc r. may be for rlca (0x3B mask)
{
        0x44,0x00,0x00,0x04,0x08,0x0c,0x0c,0x08
       ,0x00,0x04,0x04,0x00,0x0c,0x08,0x08,0x0c
       ,0x20,0x24,0x24,0x20,0x2c,0x28,0x28,0x2c
       ,0x24,0x20,0x20,0x24,0x28,0x2c,0x2c,0x28
       ,0x00,0x04,0x04,0x00,0x0c,0x08,0x08,0x0c
       ,0x04,0x00,0x00,0x04,0x08,0x0c,0x0c,0x08
       ,0x24,0x20,0x20,0x24,0x28,0x2c,0x2c,0x28
       ,0x20,0x24,0x24,0x20,0x2c,0x28,0x28,0x2c
       ,0x80,0x84,0x84,0x80,0x8c,0x88,0x88,0x8c
       ,0x84,0x80,0x80,0x84,0x88,0x8c,0x8c,0x88
       ,0xa4,0xa0,0xa0,0xa4,0xa8,0xac,0xac,0xa8
       ,0xa0,0xa4,0xa4,0xa0,0xac,0xa8,0xa8,0xac
       ,0x84,0x80,0x80,0x84,0x88,0x8c,0x8c,0x88
       ,0x80,0x84,0x84,0x80,0x8c,0x88,0x88,0x8c
       ,0xa0,0xa4,0xa4,0xa0,0xac,0xa8,0xa8,0xac
       ,0xa4,0xa0,0xa0,0xa4,0xa8,0xac,0xac,0xa8
       ,0x01,0x05,0x05,0x01,0x0d,0x09,0x09,0x0d
       ,0x05,0x01,0x01,0x05,0x09,0x0d,0x0d,0x09
       ,0x25,0x21,0x21,0x25,0x29,0x2d,0x2d,0x29
       ,0x21,0x25,0x25,0x21,0x2d,0x29,0x29,0x2d
       ,0x05,0x01,0x01,0x05,0x09,0x0d,0x0d,0x09
       ,0x01,0x05,0x05,0x01,0x0d,0x09,0x09,0x0d
       ,0x21,0x25,0x25,0x21,0x2d,0x29,0x29,0x2d
       ,0x25,0x21,0x21,0x25,0x29,0x2d,0x2d,0x29
       ,0x85,0x81,0x81,0x85,0x89,0x8d,0x8d,0x89
       ,0x81,0x85,0x85,0x81,0x8d,0x89,0x89,0x8d
       ,0xa1,0xa5,0xa5,0xa1,0xad,0xa9,0xa9,0xad
       ,0xa5,0xa1,0xa1,0xa5,0xa9,0xad,0xad,0xa9
       ,0x81,0x85,0x85,0x81,0x8d,0x89,0x89,0x8d
       ,0x85,0x81,0x81,0x85,0x89,0x8d,0x8d,0x89
       ,0xa5,0xa1,0xa1,0xa5,0xa9,0xad,0xad,0xa9
       ,0xa1,0xa5,0xa5,0xa1,0xad,0xa9,0xa9,0xad
};

const unsigned char rrcf[] = // rrc r. may be for rlca (0x3B mask)
{
        0x44,0x81,0x00,0x85,0x00,0x85,0x04,0x81
       ,0x00,0x85,0x04,0x81,0x04,0x81,0x00,0x85
       ,0x08,0x8d,0x0c,0x89,0x0c,0x89,0x08,0x8d
       ,0x0c,0x89,0x08,0x8d,0x08,0x8d,0x0c,0x89
       ,0x00,0x85,0x04,0x81,0x04,0x81,0x00,0x85
       ,0x04,0x81,0x00,0x85,0x00,0x85,0x04,0x81
       ,0x0c,0x89,0x08,0x8d,0x08,0x8d,0x0c,0x89
       ,0x08,0x8d,0x0c,0x89,0x0c,0x89,0x08,0x8d
       ,0x20,0xa5,0x24,0xa1,0x24,0xa1,0x20,0xa5
       ,0x24,0xa1,0x20,0xa5,0x20,0xa5,0x24,0xa1
       ,0x2c,0xa9,0x28,0xad,0x28,0xad,0x2c,0xa9
       ,0x28,0xad,0x2c,0xa9,0x2c,0xa9,0x28,0xad
       ,0x24,0xa1,0x20,0xa5,0x20,0xa5,0x24,0xa1
       ,0x20,0xa5,0x24,0xa1,0x24,0xa1,0x20,0xa5
       ,0x28,0xad,0x2c,0xa9,0x2c,0xa9,0x28,0xad
       ,0x2c,0xa9,0x28,0xad,0x28,0xad,0x2c,0xa9
       ,0x00,0x85,0x04,0x81,0x04,0x81,0x00,0x85
       ,0x04,0x81,0x00,0x85,0x00,0x85,0x04,0x81
       ,0x0c,0x89,0x08,0x8d,0x08,0x8d,0x0c,0x89
       ,0x08,0x8d,0x0c,0x89,0x0c,0x89,0x08,0x8d
       ,0x04,0x81,0x00,0x85,0x00,0x85,0x04,0x81
       ,0x00,0x85,0x04,0x81,0x04,0x81,0x00,0x85
       ,0x08,0x8d,0x0c,0x89,0x0c,0x89,0x08,0x8d
       ,0x0c,0x89,0x08,0x8d,0x08,0x8d,0x0c,0x89
       ,0x24,0xa1,0x20,0xa5,0x20,0xa5,0x24,0xa1
       ,0x20,0xa5,0x24,0xa1,0x24,0xa1,0x20,0xa5
       ,0x28,0xad,0x2c,0xa9,0x2c,0xa9,0x28,0xad
       ,0x2c,0xa9,0x28,0xad,0x28,0xad,0x2c,0xa9
       ,0x20,0xa5,0x24,0xa1,0x24,0xa1,0x20,0xa5
       ,0x24,0xa1,0x20,0xa5,0x20,0xa5,0x24,0xa1
       ,0x2c,0xa9,0x28,0xad,0x28,0xad,0x2c,0xa9
       ,0x28,0xad,0x2c,0xa9,0x2c,0xa9,0x28,0xad
};

void make_rot()
{
   for (int i = 0; i < 0x100; i++) {
      rlcaf[i] = rlcf[i] & 0x3B;        // rra,rla uses same tables
      rrcaf[i] = rrcf[i] & 0x3B;
      rol[i] = (i<<1)+(i>>7), ror[i] = (i>>1)+(i<<7);
   }
}

const unsigned char rl0[] =
{
        0x44,0x00,0x00,0x04,0x08,0x0c,0x0c,0x08
       ,0x00,0x04,0x04,0x00,0x0c,0x08,0x08,0x0c
       ,0x20,0x24,0x24,0x20,0x2c,0x28,0x28,0x2c
       ,0x24,0x20,0x20,0x24,0x28,0x2c,0x2c,0x28
       ,0x00,0x04,0x04,0x00,0x0c,0x08,0x08,0x0c
       ,0x04,0x00,0x00,0x04,0x08,0x0c,0x0c,0x08
       ,0x24,0x20,0x20,0x24,0x28,0x2c,0x2c,0x28
       ,0x20,0x24,0x24,0x20,0x2c,0x28,0x28,0x2c
       ,0x80,0x84,0x84,0x80,0x8c,0x88,0x88,0x8c
       ,0x84,0x80,0x80,0x84,0x88,0x8c,0x8c,0x88
       ,0xa4,0xa0,0xa0,0xa4,0xa8,0xac,0xac,0xa8
       ,0xa0,0xa4,0xa4,0xa0,0xac,0xa8,0xa8,0xac
       ,0x84,0x80,0x80,0x84,0x88,0x8c,0x8c,0x88
       ,0x80,0x84,0x84,0x80,0x8c,0x88,0x88,0x8c
       ,0xa0,0xa4,0xa4,0xa0,0xac,0xa8,0xa8,0xac
       ,0xa4,0xa0,0xa0,0xa4,0xa8,0xac,0xac,0xa8
       ,0x45,0x01,0x01,0x05,0x09,0x0d,0x0d,0x09
       ,0x01,0x05,0x05,0x01,0x0d,0x09,0x09,0x0d
       ,0x21,0x25,0x25,0x21,0x2d,0x29,0x29,0x2d
       ,0x25,0x21,0x21,0x25,0x29,0x2d,0x2d,0x29
       ,0x01,0x05,0x05,0x01,0x0d,0x09,0x09,0x0d
       ,0x05,0x01,0x01,0x05,0x09,0x0d,0x0d,0x09
       ,0x25,0x21,0x21,0x25,0x29,0x2d,0x2d,0x29
       ,0x21,0x25,0x25,0x21,0x2d,0x29,0x29,0x2d
       ,0x81,0x85,0x85,0x81,0x8d,0x89,0x89,0x8d
       ,0x85,0x81,0x81,0x85,0x89,0x8d,0x8d,0x89
       ,0xa5,0xa1,0xa1,0xa5,0xa9,0xad,0xad,0xa9
       ,0xa1,0xa5,0xa5,0xa1,0xad,0xa9,0xa9,0xad
       ,0x85,0x81,0x81,0x85,0x89,0x8d,0x8d,0x89
       ,0x81,0x85,0x85,0x81,0x8d,0x89,0x89,0x8d
       ,0xa1,0xa5,0xa5,0xa1,0xad,0xa9,0xa9,0xad
       ,0xa5,0xa1,0xa1,0xa5,0xa9,0xad,0xad,0xa9
};

const unsigned char rl1[] =
{
        0x00,0x04,0x04,0x00,0x0c,0x08,0x08,0x0c
       ,0x04,0x00,0x00,0x04,0x08,0x0c,0x0c,0x08
       ,0x24,0x20,0x20,0x24,0x28,0x2c,0x2c,0x28
       ,0x20,0x24,0x24,0x20,0x2c,0x28,0x28,0x2c
       ,0x04,0x00,0x00,0x04,0x08,0x0c,0x0c,0x08
       ,0x00,0x04,0x04,0x00,0x0c,0x08,0x08,0x0c
       ,0x20,0x24,0x24,0x20,0x2c,0x28,0x28,0x2c
       ,0x24,0x20,0x20,0x24,0x28,0x2c,0x2c,0x28
       ,0x84,0x80,0x80,0x84,0x88,0x8c,0x8c,0x88
       ,0x80,0x84,0x84,0x80,0x8c,0x88,0x88,0x8c
       ,0xa0,0xa4,0xa4,0xa0,0xac,0xa8,0xa8,0xac
       ,0xa4,0xa0,0xa0,0xa4,0xa8,0xac,0xac,0xa8
       ,0x80,0x84,0x84,0x80,0x8c,0x88,0x88,0x8c
       ,0x84,0x80,0x80,0x84,0x88,0x8c,0x8c,0x88
       ,0xa4,0xa0,0xa0,0xa4,0xa8,0xac,0xac,0xa8
       ,0xa0,0xa4,0xa4,0xa0,0xac,0xa8,0xa8,0xac
       ,0x01,0x05,0x05,0x01,0x0d,0x09,0x09,0x0d
       ,0x05,0x01,0x01,0x05,0x09,0x0d,0x0d,0x09
       ,0x25,0x21,0x21,0x25,0x29,0x2d,0x2d,0x29
       ,0x21,0x25,0x25,0x21,0x2d,0x29,0x29,0x2d
       ,0x05,0x01,0x01,0x05,0x09,0x0d,0x0d,0x09
       ,0x01,0x05,0x05,0x01,0x0d,0x09,0x09,0x0d
       ,0x21,0x25,0x25,0x21,0x2d,0x29,0x29,0x2d
       ,0x25,0x21,0x21,0x25,0x29,0x2d,0x2d,0x29
       ,0x85,0x81,0x81,0x85,0x89,0x8d,0x8d,0x89
       ,0x81,0x85,0x85,0x81,0x8d,0x89,0x89,0x8d
       ,0xa1,0xa5,0xa5,0xa1,0xad,0xa9,0xa9,0xad
       ,0xa5,0xa1,0xa1,0xa5,0xa9,0xad,0xad,0xa9
       ,0x81,0x85,0x85,0x81,0x8d,0x89,0x89,0x8d
       ,0x85,0x81,0x81,0x85,0x89,0x8d,0x8d,0x89
       ,0xa5,0xa1,0xa1,0xa5,0xa9,0xad,0xad,0xa9
       ,0xa1,0xa5,0xa5,0xa1,0xad,0xa9,0xa9,0xad
};

const unsigned char rr0[] =
{
        0x44,0x45,0x00,0x01,0x00,0x01,0x04,0x05
       ,0x00,0x01,0x04,0x05,0x04,0x05,0x00,0x01
       ,0x08,0x09,0x0c,0x0d,0x0c,0x0d,0x08,0x09
       ,0x0c,0x0d,0x08,0x09,0x08,0x09,0x0c,0x0d
       ,0x00,0x01,0x04,0x05,0x04,0x05,0x00,0x01
       ,0x04,0x05,0x00,0x01,0x00,0x01,0x04,0x05
       ,0x0c,0x0d,0x08,0x09,0x08,0x09,0x0c,0x0d
       ,0x08,0x09,0x0c,0x0d,0x0c,0x0d,0x08,0x09
       ,0x20,0x21,0x24,0x25,0x24,0x25,0x20,0x21
       ,0x24,0x25,0x20,0x21,0x20,0x21,0x24,0x25
       ,0x2c,0x2d,0x28,0x29,0x28,0x29,0x2c,0x2d
       ,0x28,0x29,0x2c,0x2d,0x2c,0x2d,0x28,0x29
       ,0x24,0x25,0x20,0x21,0x20,0x21,0x24,0x25
       ,0x20,0x21,0x24,0x25,0x24,0x25,0x20,0x21
       ,0x28,0x29,0x2c,0x2d,0x2c,0x2d,0x28,0x29
       ,0x2c,0x2d,0x28,0x29,0x28,0x29,0x2c,0x2d
       ,0x00,0x01,0x04,0x05,0x04,0x05,0x00,0x01
       ,0x04,0x05,0x00,0x01,0x00,0x01,0x04,0x05
       ,0x0c,0x0d,0x08,0x09,0x08,0x09,0x0c,0x0d
       ,0x08,0x09,0x0c,0x0d,0x0c,0x0d,0x08,0x09
       ,0x04,0x05,0x00,0x01,0x00,0x01,0x04,0x05
       ,0x00,0x01,0x04,0x05,0x04,0x05,0x00,0x01
       ,0x08,0x09,0x0c,0x0d,0x0c,0x0d,0x08,0x09
       ,0x0c,0x0d,0x08,0x09,0x08,0x09,0x0c,0x0d
       ,0x24,0x25,0x20,0x21,0x20,0x21,0x24,0x25
       ,0x20,0x21,0x24,0x25,0x24,0x25,0x20,0x21
       ,0x28,0x29,0x2c,0x2d,0x2c,0x2d,0x28,0x29
       ,0x2c,0x2d,0x28,0x29,0x28,0x29,0x2c,0x2d
       ,0x20,0x21,0x24,0x25,0x24,0x25,0x20,0x21
       ,0x24,0x25,0x20,0x21,0x20,0x21,0x24,0x25
       ,0x2c,0x2d,0x28,0x29,0x28,0x29,0x2c,0x2d
       ,0x28,0x29,0x2c,0x2d,0x2c,0x2d,0x28,0x29
};

const unsigned char rr1[] =
{
        0x80,0x81,0x84,0x85,0x84,0x85,0x80,0x81
       ,0x84,0x85,0x80,0x81,0x80,0x81,0x84,0x85
       ,0x8c,0x8d,0x88,0x89,0x88,0x89,0x8c,0x8d
       ,0x88,0x89,0x8c,0x8d,0x8c,0x8d,0x88,0x89
       ,0x84,0x85,0x80,0x81,0x80,0x81,0x84,0x85
       ,0x80,0x81,0x84,0x85,0x84,0x85,0x80,0x81
       ,0x88,0x89,0x8c,0x8d,0x8c,0x8d,0x88,0x89
       ,0x8c,0x8d,0x88,0x89,0x88,0x89,0x8c,0x8d
       ,0xa4,0xa5,0xa0,0xa1,0xa0,0xa1,0xa4,0xa5
       ,0xa0,0xa1,0xa4,0xa5,0xa4,0xa5,0xa0,0xa1
       ,0xa8,0xa9,0xac,0xad,0xac,0xad,0xa8,0xa9
       ,0xac,0xad,0xa8,0xa9,0xa8,0xa9,0xac,0xad
       ,0xa0,0xa1,0xa4,0xa5,0xa4,0xa5,0xa0,0xa1
       ,0xa4,0xa5,0xa0,0xa1,0xa0,0xa1,0xa4,0xa5
       ,0xac,0xad,0xa8,0xa9,0xa8,0xa9,0xac,0xad
       ,0xa8,0xa9,0xac,0xad,0xac,0xad,0xa8,0xa9
       ,0x84,0x85,0x80,0x81,0x80,0x81,0x84,0x85
       ,0x80,0x81,0x84,0x85,0x84,0x85,0x80,0x81
       ,0x88,0x89,0x8c,0x8d,0x8c,0x8d,0x88,0x89
       ,0x8c,0x8d,0x88,0x89,0x88,0x89,0x8c,0x8d
       ,0x80,0x81,0x84,0x85,0x84,0x85,0x80,0x81
       ,0x84,0x85,0x80,0x81,0x80,0x81,0x84,0x85
       ,0x8c,0x8d,0x88,0x89,0x88,0x89,0x8c,0x8d
       ,0x88,0x89,0x8c,0x8d,0x8c,0x8d,0x88,0x89
       ,0xa0,0xa1,0xa4,0xa5,0xa4,0xa5,0xa0,0xa1
       ,0xa4,0xa5,0xa0,0xa1,0xa0,0xa1,0xa4,0xa5
       ,0xac,0xad,0xa8,0xa9,0xa8,0xa9,0xac,0xad
       ,0xa8,0xa9,0xac,0xad,0xac,0xad,0xa8,0xa9
       ,0xa4,0xa5,0xa0,0xa1,0xa0,0xa1,0xa4,0xa5
       ,0xa0,0xa1,0xa4,0xa5,0xa4,0xa5,0xa0,0xa1
       ,0xa8,0xa9,0xac,0xad,0xac,0xad,0xa8,0xa9
       ,0xac,0xad,0xa8,0xa9,0xa8,0xa9,0xac,0xad
};

const unsigned char sraf[] =
{
        0x44,0x45,0x00,0x01,0x00,0x01,0x04,0x05
       ,0x00,0x01,0x04,0x05,0x04,0x05,0x00,0x01
       ,0x08,0x09,0x0c,0x0d,0x0c,0x0d,0x08,0x09
       ,0x0c,0x0d,0x08,0x09,0x08,0x09,0x0c,0x0d
       ,0x00,0x01,0x04,0x05,0x04,0x05,0x00,0x01
       ,0x04,0x05,0x00,0x01,0x00,0x01,0x04,0x05
       ,0x0c,0x0d,0x08,0x09,0x08,0x09,0x0c,0x0d
       ,0x08,0x09,0x0c,0x0d,0x0c,0x0d,0x08,0x09
       ,0x20,0x21,0x24,0x25,0x24,0x25,0x20,0x21
       ,0x24,0x25,0x20,0x21,0x20,0x21,0x24,0x25
       ,0x2c,0x2d,0x28,0x29,0x28,0x29,0x2c,0x2d
       ,0x28,0x29,0x2c,0x2d,0x2c,0x2d,0x28,0x29
       ,0x24,0x25,0x20,0x21,0x20,0x21,0x24,0x25
       ,0x20,0x21,0x24,0x25,0x24,0x25,0x20,0x21
       ,0x28,0x29,0x2c,0x2d,0x2c,0x2d,0x28,0x29
       ,0x2c,0x2d,0x28,0x29,0x28,0x29,0x2c,0x2d
       ,0x84,0x85,0x80,0x81,0x80,0x81,0x84,0x85
       ,0x80,0x81,0x84,0x85,0x84,0x85,0x80,0x81
       ,0x88,0x89,0x8c,0x8d,0x8c,0x8d,0x88,0x89
       ,0x8c,0x8d,0x88,0x89,0x88,0x89,0x8c,0x8d
       ,0x80,0x81,0x84,0x85,0x84,0x85,0x80,0x81
       ,0x84,0x85,0x80,0x81,0x80,0x81,0x84,0x85
       ,0x8c,0x8d,0x88,0x89,0x88,0x89,0x8c,0x8d
       ,0x88,0x89,0x8c,0x8d,0x8c,0x8d,0x88,0x89
       ,0xa0,0xa1,0xa4,0xa5,0xa4,0xa5,0xa0,0xa1
       ,0xa4,0xa5,0xa0,0xa1,0xa0,0xa1,0xa4,0xa5
       ,0xac,0xad,0xa8,0xa9,0xa8,0xa9,0xac,0xad
       ,0xa8,0xa9,0xac,0xad,0xac,0xad,0xa8,0xa9
       ,0xa4,0xa5,0xa0,0xa1,0xa0,0xa1,0xa4,0xa5
       ,0xa0,0xa1,0xa4,0xa5,0xa4,0xa5,0xa0,0xa1
       ,0xa8,0xa9,0xac,0xad,0xac,0xad,0xa8,0xa9
       ,0xac,0xad,0xa8,0xa9,0xa8,0xa9,0xac,0xad
};

void init_z80tables()
{
   make_adc();
   make_sbc();
   make_log();
   make_rot();
}

