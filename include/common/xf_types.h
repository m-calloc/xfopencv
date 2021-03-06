/***************************************************************************
Copyright (c) 2016, Xilinx, Inc.
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, 
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, 
this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, 
this list of conditions and the following disclaimer in the documentation 
and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors 
may be used to endorse or promote products derived from this software 
without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, 
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, 
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, 
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) 
HOWEVER CXFSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, 
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, 
EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

***************************************************************************/
#ifndef _XF_TYPES_H_
#define _XF_TYPES_H_

#ifndef __cplusplus
#error C++ is needed to use this file!
#endif

#include "ap_int.h"
#include "xf_params.h"
#include <stdint.h>

template<int T> struct StreamType      { };
template<> struct StreamType<XF_8UW>   { typedef ap_uint<8>   name; static const int bitdepth = 8;   };
template<> struct StreamType<XF_9UW>   { typedef ap_uint<9>   name; static const int bitdepth = 9;   };
template<> struct StreamType<XF_16UW>  { typedef ap_uint<16>  name; static const int bitdepth = 16;  };
template<> struct StreamType<XF_19SW>  { typedef ap_int<19>   name; static const int bitdepth = 19;  };
template<> struct StreamType<XF_22UW>  { typedef ap_uint<22>  name; static const int bitdepth = 22;  };
template<> struct StreamType<XF_24SW>  { typedef ap_int<24>   name; static const int bitdepth = 24;  };
template<> struct StreamType<XF_32UW>  { typedef ap_uint<32>  name; static const int bitdepth = 32;  };
template<> struct StreamType<XF_64UW>  { typedef ap_uint<64>  name; static const int bitdepth = 64;  };
template<> struct StreamType<XF_72UW>  { typedef ap_uint<72>  name; static const int bitdepth = 72;  };
template<> struct StreamType<XF_128UW> { typedef ap_uint<128> name; static const int bitdepth = 128; };
template<> struct StreamType<XF_144UW> { typedef ap_uint<144> name; static const int bitdepth = 144; };
template<> struct StreamType<XF_176UW> { typedef ap_uint<176> name; static const int bitdepth = 176; };
template<> struct StreamType<XF_256UW> { typedef ap_uint<256> name; static const int bitdepth = 256; };
template<> struct StreamType<XF_304SW> { typedef ap_int<304>  name; static const int bitdepth = 304; };
template<> struct StreamType<XF_352UW> { typedef ap_uint<352> name; static const int bitdepth = 352; };
template<> struct StreamType<XF_512UW> { typedef ap_uint<512> name; static const int bitdepth = 512; };
template<> struct StreamType<XF_152SW> { typedef ap_int<152>  name; static const int bitdepth = 152; };
template<> struct StreamType<XF_35SW>  { typedef ap_int<35>   name; static const int bitdepth = 35;  };
template<> struct StreamType<XF_280SW> { typedef ap_int<280>  name; static const int bitdepth = 280; };
template<> struct StreamType<XF_560SW> { typedef ap_int<560>  name; static const int bitdepth = 560; };
template<> struct StreamType<XF_192SW> { typedef ap_int<192>  name; static const int bitdepth = 192; };
template<> struct StreamType<XF_160SW> { typedef ap_int<160>  name; static const int bitdepth = 160; };
template<> struct StreamType<XF_576UW> { typedef ap_uint<576> name; static const int bitdepth = 576; };
template<> struct StreamType<XF_2UW> { typedef ap_uint<2> name; static const int bitdepth = 2; };
template<> struct StreamType<XF_32FW> { typedef float name; static const int bitdepth = 32; };
template<> struct StreamType<XF_24UW>  { typedef ap_uint<24>  name; static const int bitdepth = 24;  };
template<> struct StreamType<XF_48UW>  { typedef ap_uint<48>  name; static const int bitdepth = 48;  };


template<int T> struct PixelType      { };
template<> struct PixelType<XF_8UP>   { typedef ap_uint<8>  name; typedef ap_uint<8>   uname;typedef unsigned char name2; static const int bitdepth = 8;  };
template<> struct PixelType<XF_8SP>   { typedef ap_int<8>   name; typedef ap_uint<8>   uname;static const int bitdepth = 8;  };
template<> struct PixelType<XF_9UP>   { typedef ap_uint<9>  name; typedef ap_uint<9>  uname;static const int bitdepth = 9;  };
template<> struct PixelType<XF_9SP>   { typedef ap_int<9>   name; typedef ap_uint<9>  uname;static const int bitdepth = 9;  };
template<> struct PixelType<XF_16UP>  { typedef ap_uint<16> name; typedef ap_uint<16>  uname; static const int bitdepth = 16; };
template<> struct PixelType<XF_16SP>  { typedef ap_int<16>  name; typedef ap_uint<16>  uname; static const int bitdepth = 16; };
template<> struct PixelType<XF_32UP>  { typedef ap_uint<32> name; typedef ap_uint<32>  uname;static const int bitdepth = 32; };
template<> struct PixelType<XF_32SP>  { typedef ap_int<32>  name; typedef ap_uint<32>  uname;static const int bitdepth = 32; };
template<> struct PixelType<XF_19SP>  { typedef ap_int<19>  name; typedef ap_uint<19>  uname;static const int bitdepth = 19; };
template<> struct PixelType<XF_35SP>  { typedef ap_int<35>  name; typedef ap_uint<35>  uname;static const int bitdepth = 35; };
template<> struct PixelType<XF_32FP>  { typedef float       name; static const int bitdepth = 32; };
template<> struct PixelType<XF_24SP>  { typedef ap_int<24>  name; typedef ap_uint<24>  uname;static const int bitdepth = 24; };
template<> struct PixelType<XF_20SP>  { typedef ap_int<20>  name; typedef ap_uint<20>  uname;static const int bitdepth = 20; };
template<> struct PixelType<XF_48SP>  { typedef ap_int<48>  name; typedef ap_uint<48>  uname;static const int bitdepth = 48; };
template<> struct PixelType<XF_2UP>   { typedef ap_uint<2>  name; static const int bitdepth = 2; };
template<> struct PixelType<XF_24UP>  { typedef ap_uint<24>  name; typedef ap_uint<24>  uname;static const int bitdepth = 24; };




#define XF_NPIXPERCYCLE(flags)\
		xfNPixelsPerCycle<flags>::nppc

#define XF_BITSHIFT(flags)\
		xfNPixelsPerCycle<flags>::datashift

template<int T> struct xfNPixelsPerCycle       { };
template<> struct xfNPixelsPerCycle<XF_NPPC1>  { static const int datashift = 0; static const int nppc = 1;  };
template<> struct xfNPixelsPerCycle<XF_NPPC2>  { static const int datashift = 1; static const int nppc = 2;  };
template<> struct xfNPixelsPerCycle<XF_NPPC4>  { static const int datashift = 2; static const int nppc = 4;  };
template<> struct xfNPixelsPerCycle<XF_NPPC8>  { static const int datashift = 3; static const int nppc = 8;  };
template<> struct xfNPixelsPerCycle<XF_NPPC16> { static const int datashift = 4; static const int nppc = 16; };
template<> struct xfNPixelsPerCycle<XF_NPPC32> { static const int datashift = 5; static const int nppc = 32; };


template<int T,int M> struct DataType      { };

template<> struct DataType<XF_8UC1,XF_NPPC1>   { typedef ap_uint<8>      name; typedef ap_uint<8>  uname; typedef ap_uint<8>  cname; typedef unsigned char sname; typedef unsigned char wname; static const int bitdepth = 8; static const int pixeldepth = XF_8UP;static const int wordwidth = XF_8UW; static const int channel = 1;};
template<> struct DataType<XF_8UC1,XF_NPPC2>   { typedef ap_uint<16>     name; typedef ap_uint<8>  uname; typedef ap_uint<8>  cname; typedef unsigned char sname; typedef unsigned short  wname; static const int bitdepth = 8; static const int pixeldepth = XF_8UP;static const int wordwidth = XF_16UW; static const int channel = 1;};
template<> struct DataType<XF_8UC1,XF_NPPC8>   { typedef ap_uint<64>     name; typedef ap_uint<8>  uname; typedef ap_uint<8>  cname; typedef unsigned char sname; typedef unsigned long long wname; static const int bitdepth = 8; static const int pixeldepth = XF_8UP; static const int wordwidth = XF_64UW;static const int channel = 1;};
template<> struct DataType<XF_8UC4,XF_NPPC1>   { typedef ap_uint<32>      name; typedef ap_uint<32>  uname; typedef ap_uint<8>  cname; typedef unsigned char sname; typedef unsigned int wname; static const int bitdepth = 8; static const int pixeldepth = XF_32UP;static const int wordwidth = XF_32UW; static const int channel = 4;};
template<> struct DataType<XF_8UC4,XF_NPPC4>   { typedef ap_uint<128>      name; typedef ap_uint<32>  uname; typedef ap_uint<8>  cname; typedef unsigned char sname; static const int bitdepth = 8; static const int pixeldepth = XF_8UP;static const int wordwidth = XF_128UW; static const int channel = 4;};


template<> struct DataType<XF_16SC1,XF_NPPC1>   { typedef ap_uint<16>    name; typedef ap_uint<16>  uname; typedef ap_int<16>  cname; typedef  short sname; static const int bitdepth = 16; static const int pixeldepth = XF_16SP; static const int wordwidth = XF_16UW;  static const int channel = 1; };
template<> struct DataType<XF_16SC1,XF_NPPC8>   { typedef ap_uint<128>    name; typedef ap_uint<16>  uname; typedef ap_int<16>  cname; typedef  short sname; static const int bitdepth = 16; static const int pixeldepth = XF_16SP; static const int wordwidth = XF_128UW;  static const int channel = 1; };

template<> struct DataType<XF_16UC1,XF_NPPC1>   { typedef ap_uint<16>    name; typedef ap_uint<16>  uname; typedef ap_uint<16>  cname; typedef unsigned short sname; static const int bitdepth = 16; static const int pixeldepth = XF_16UP; static const int wordwidth = XF_16UW;  static const int channel = 1; };
template<> struct DataType<XF_16UC1,XF_NPPC2>   { typedef ap_uint<32>    name; typedef ap_uint<16>  uname; typedef ap_uint<16>  cname; typedef unsigned short sname; static const int bitdepth = 16; static const int pixeldepth = XF_16UP; static const int wordwidth = XF_32UW;  static const int channel = 1; };
template<> struct DataType<XF_16UC1,XF_NPPC8>   { typedef ap_uint<128>   name; typedef ap_uint<16>  uname; typedef ap_uint<16>  cname; typedef unsigned short sname; static const int bitdepth = 16; static const int pixeldepth = XF_16UP; static const int wordwidth = XF_128UW; static const int channel = 1; };

template<> struct DataType<XF_32UC1,XF_NPPC1>   { typedef ap_uint<32>    name; typedef ap_uint<32>  uname; typedef ap_uint<32>  cname; typedef unsigned int sname; typedef unsigned int wname; static const int bitdepth = 32; static const int pixeldepth = XF_32UP; static const int wordwidth = XF_32UW;  static const int channel = 1; };
template<> struct DataType<XF_32UC1,XF_NPPC2>   { typedef ap_uint<64>    name; typedef ap_uint<32>  uname; typedef ap_uint<32>  cname; typedef unsigned int sname; typedef unsigned long long wname; static const int bitdepth = 32; static const int pixeldepth = XF_32UP; static const int wordwidth = XF_64UW;  static const int channel = 1; };

template<> struct DataType<XF_32FC1,XF_NPPC1>   { typedef float          name; typedef float  uname; typedef float  cname; typedef float sname; static const int bitdepth = 32; static const int pixeldepth = XF_32FP; static const int wordwidth = XF_32FW;  static const int channel = 1;};
template<> struct DataType<XF_32FC1,XF_NPPC2>   { typedef ap_uint<64>    name; typedef float  uname; typedef float  cname; typedef float sname; static const int bitdepth = 32; static const int pixeldepth = XF_32FP; static const int wordwidth = XF_64UW;  static const int channel = 1;};

template<> struct DataType<XF_32SC1,XF_NPPC1>   { typedef ap_uint<32>   name; typedef ap_uint<32>  uname; typedef ap_int<32>  cname; typedef int sname; static const int bitdepth = 32; static const int pixeldepth = XF_32SP; static const int wordwidth = XF_32UW;  static const int channel = 1; };

template<> struct DataType<XF_8UC2,XF_NPPC1>   { typedef ap_uint<16>      name; typedef ap_uint<16>  uname; typedef ap_uint<8>  cname; typedef unsigned short int sname; typedef unsigned short int wname; static const int bitdepth = 16; static const int pixeldepth = XF_16UP;static const int wordwidth = XF_16UW;  static const int channel = 2; };
template<> struct DataType<XF_8UC2,XF_NPPC4>   { typedef ap_uint<64>      name; typedef ap_uint<64>  uname; typedef ap_uint<8>  cname; typedef unsigned short int sname; typedef unsigned long long int wname; static const int bitdepth = 16; static const int pixeldepth = XF_16UP;static const int wordwidth = XF_64UW;  static const int channel = 2; };

template<> struct DataType<XF_2UC1,XF_NPPC32>   { typedef ap_uint<64>      name; typedef ap_uint<2>  uname; typedef ap_uint<2>  cname; typedef unsigned char sname; static const int bitdepth = 2; static const int pixeldepth = XF_2UP;static const int wordwidth = XF_64UW;  static const int channel = 1;};
template<> struct DataType<XF_2UC1,XF_NPPC1>   { typedef ap_uint<2>      name; typedef ap_uint<2>  uname; typedef ap_uint<2>  cname; typedef unsigned char sname; static const int bitdepth = 2; static const int pixeldepth = XF_2UP;static const int wordwidth = XF_2UW;  static const int channel = 1;};

template<> struct DataType<XF_2UC1,XF_NPPC4>   { typedef ap_uint<8>      name; typedef ap_uint<2>  uname; typedef ap_uint<2>  cname; typedef unsigned char sname; static const int bitdepth = 2; static const int pixeldepth = XF_2UP;static const int wordwidth = XF_8UW;  static const int channel = 1;};

template<> struct DataType<XF_2UC1,XF_NPPC8>   { typedef ap_uint<16>      name; typedef ap_uint<2>  uname; typedef ap_uint<2>  cname; typedef unsigned char sname; static const int bitdepth = 2; static const int pixeldepth = XF_2UP;static const int wordwidth = XF_16UW;  static const int channel = 1;};
template<> struct DataType<XF_8UC3,XF_NPPC1>   { typedef ap_uint<24>      name; typedef ap_uint<24>  uname; typedef ap_uint<8>  cname; typedef unsigned char sname; typedef unsigned int wname; static const int bitdepth = 24; static const int pixeldepth = XF_24UP;static const int wordwidth = XF_24UW;static const int channel = 3; };
template<> struct DataType<XF_16UC3,XF_NPPC1>   { typedef ap_uint<48>      name; typedef ap_uint<24>  uname; typedef ap_uint<16>  cname; typedef unsigned char sname; typedef unsigned int wname; static const int bitdepth = 48; static const int pixeldepth = XF_16UP;static const int wordwidth = XF_48UW;static const int channel = 3; };


#define TC(TYPE) TC##TYPE


#define XF_TNAME(flags,npc)\
    typename DataType<flags,npc>::name

#define XF_DTUNAME(flags,npc)\
    typename DataType<flags,npc>::uname

#define XF_CTUNAME(flags,npc)\
    typename DataType<flags,npc>::cname

#define XF_PTSNAME(flags,npc)\
    typename DataType<flags,npc>::sname

#define XF_WTNAME(flags,npc)\
    typename DataType<flags,npc>::wname

#define XF_DTPIXELDEPTH(flags,npc)\
	DataType<flags,npc>::bitdepth

#define XF_DEPTH(flags,npc)\
	 DataType<flags,npc>::pixeldepth

#define XF_WORDWIDTH(flags,npc)\
	 DataType<flags,npc>::wordwidth

#define XF_CHANNELS(flags,npc)\
	 DataType<flags,npc>::channel




#define XF_PTNAME(flags)\
    typename PixelType<flags>::name

#define XF_PIXELDEPTH(flags)\
		PixelType<flags>::bitdepth

#define XF_PTUNAME(flags)\
    typename PixelType<flags>::uname

#define XF_PTNAME2(flags)\
    typename PixelType<flags>::name2



#define XF_SNAME(flags)\
    typename StreamType<flags>::name
#define XF_WORDDEPTH(flags)\
		StreamType<flags>::bitdepth

// find image width in terms of the number of words used to represent the data
//#define IM_WIDTH(W,S) ((W)>>(S))


// Xilinx headers
#include <ap_int.h>
#include <ap_fixed.h>
#include <stdint.h>
// Native types
//typedef unsigned long 	uint64_t;
typedef unsigned int 	uint32_t;
typedef unsigned short  uint16_t;
//typedef long int        int64_t;
typedef int             int32_t;
typedef short int       int16_t;
typedef unsigned char 	uchar_t;
typedef unsigned char 	uint8_t;
typedef signed char 	int8_t;

// Arbitrary Precision integer types
typedef ap_uint<1>      ap_uint1_t;
typedef ap_uint<2>      ap_uint2_t;
typedef ap_uint<4>      ap_uint4_t;
typedef ap_uint<5>      ap_uint5_t;
typedef ap_uint<8>      ap_uint8_t;
typedef ap_uint<9>      ap_uint9_t;
typedef ap_uint<16>     ap_uint16_t;
typedef ap_uint<17>     ap_uint17_t;
typedef ap_uint<18> 	ap_uint18_t;
typedef ap_uint<20> 	ap_uint20_t;
typedef ap_uint<22>     ap_uint22_t;
typedef ap_uint<23>     ap_uint23_t;
typedef ap_uint<24>     ap_uint24_t;
typedef ap_uint<32>     ap_uint32_t;
typedef ap_uint<33>     ap_uint33_t;
typedef ap_uint<34>     ap_uint34_t;
typedef ap_uint<35>     ap_uint35_t;
typedef ap_uint<38>     ap_uint38_t;
typedef ap_uint<45>     ap_uint45_t;
typedef ap_uint<48>     ap_uint48_t;
typedef ap_uint<51>     ap_uint51_t;
typedef ap_uint<64>     ap_uint64_t;
typedef ap_uint<66>     ap_uint66_t;
typedef ap_uint<72>     ap_uint72_t;
typedef ap_uint<97>     ap_uint97_t;
typedef ap_uint<101>    ap_uint101_t;
typedef ap_uint<128>    ap_uint128_t;
typedef ap_uint<144>    ap_uint144_t;
typedef ap_uint<176>    ap_uint176_t;
typedef ap_uint<192> 	ap_uint192_t;
typedef ap_uint<256>    ap_uint256_t;
typedef ap_uint<352>    ap_uint352_t;
typedef ap_uint<384>    ap_uint384_t;
typedef ap_uint<512>    ap_uint512_t;
typedef ap_uint<576>    ap_uint576_t;

typedef ap_int<8>   	ap_int8_t;
typedef ap_int<9>   	ap_int9_t;
typedef ap_int<12> 	ap_int12_t;
typedef ap_int<15>	ap_int15_t;
typedef ap_int<16>  	ap_int16_t;
typedef ap_int<18> 	ap_int18_t;
typedef ap_int<19> 	ap_int19_t;
typedef ap_int<20>	ap_int20_t;
typedef ap_int<24>	ap_int24_t;
typedef ap_int<32>      ap_int32_t;
typedef ap_int<35>  	ap_int35_t;
typedef ap_int<36>  	ap_int36_t;
typedef ap_int<42>  	ap_int42_t;
typedef ap_int<48>      ap_int48_t;
typedef ap_int<64>      ap_int64_t;
typedef ap_int<152> 	ap_int152_t;
typedef ap_int<304>   	ap_int304_t;
typedef ap_int<280>     ap_int280_t;
typedef ap_int<560>     ap_int560_t;

// Arbitrary Precision fixed-point types
typedef ap_ufixed<12,12>  uint12_q0;
typedef ap_ufixed<16,16>  uint16_q0; //16-bit unsigned with 0 fractional bits
typedef ap_ufixed<32,32>  uint32_q0; //32-bit unsigned with 0 fractional bits
typedef ap_ufixed<8,8>    uint8_q0;  //8-bit unsigned with 0 fractional bits

#endif//_XF_TYPES_H_

