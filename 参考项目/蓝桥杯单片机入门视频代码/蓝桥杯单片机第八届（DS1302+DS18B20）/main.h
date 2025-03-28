#ifndef __MAIN_H_
#define __MAIN_H_
typedef unsigned char u8;
typedef unsigned int u16;

#include <STC15F2K60S2.H>
#include "sys.h"
#include "tube.h"
#include "key.h"
#include "onewire.h"
#include "ds1302.h"

#define Y4 P2 = (P2&0x1f) | 0x80
#define Y5 P2 = (P2&0x1f) | 0xa0
#define Y6 P2 = (P2&0x1f) | 0xc0
#define Y7 P2 = (P2&0x1f) | 0xe0
#define Y0 P2 = (P2&0x1f)



#endif