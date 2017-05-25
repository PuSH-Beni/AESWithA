//
//  AES.h
//  AES
//
//  Created by benny on 16/4/22.
//

#ifndef SM4_h
#define SM4_h


/* ---------------- MAY NOT CHANGE THE FOLLOWING SETTINGS -----------------
*/

#include "Fundamental.h"

#define AFFINE_MATRIX  {	0xD3, 0xE9, 0xF4, 0x7A, 0x3D, 0x9E, 0x4F, 0xA7	}
#define AFFINE_C       0xD3  //CB

#define FK	       { 0xA3, 0xB1, 0xBA, 0xC6, 0x56, 0xAA, 0x33, 0x50, 0x67, 0x7D, 0x91, 0x97, 0xB2, 0x70, 0x22, 0xDC }

#define SHIFT2BIT_TRANSMAT	{ 0x20, 0x00, 0x00, 0x00,  0x10, 0x00, 0x00, 0x00,  0x08, 0x00, 0x00, 0x00,  0x04, 0x00, 0x00, 0x00,\
							  0x02, 0x00, 0x00, 0x00,  0x01, 0x00, 0x00, 0x00,  0x00, 0x80, 0x00, 0x00,  0x00, 0x40, 0x00, 0x00,\
							  0x00, 0x20, 0x00, 0x00,  0x00, 0x10, 0x00, 0x00,  0x00, 0x08, 0x00, 0x00,  0x00, 0x04, 0x00, 0x00,\
							  0x00, 0x02, 0x00, 0x00,  0x00, 0x01, 0x00, 0x00,  0x00, 0x00, 0x80, 0x00,  0x00, 0x00, 0x40, 0x00,\
							  0x00, 0x00, 0x20, 0x00,  0x00, 0x00, 0x10, 0x00,  0x00, 0x00, 0x08, 0x00,  0x00, 0x00, 0x04, 0x00,\
							  0x00, 0x00, 0x02, 0x00,  0x00, 0x00, 0x01, 0x00,  0x00, 0x00, 0x00, 0x80,  0x00, 0x00, 0x00, 0x40,\
							  0x00, 0x00, 0x00, 0x20,  0x00, 0x00, 0x00, 0x10,  0x00, 0x00, 0x00, 0x08,  0x00, 0x00, 0x00, 0x04,\
							  0x00, 0x00, 0x00, 0x02,  0x00, 0x00, 0x00, 0x01,  0x80, 0x00, 0x00, 0x00,  0x40, 0x00, 0x00, 0x00 \
							}

#define INDEX(x,s) ((NK-1-x-s)&0x03) // mod 4

Res setupSM4();
Res encrypt(BYTE *cipherText, const BYTE *plainText, const BYTE *masterKey);
Res encrypt_fixed();
#endif