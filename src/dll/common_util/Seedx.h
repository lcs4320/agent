/*
 * Copyright (C) 2020-2025 ASHINi corp. 
 * 
 * This library is free software; you can redistribute it and/or 
 * modify it under the terms of the GNU Lesser General Public 
 * License as published by the Free Software Foundation; either 
 * version 2.1 of the License, or (at your option) any later version. 
 * 
 * This library is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU 
 * Lesser General Public License for more details. 
 * 
 * You should have received a copy of the GNU Lesser General Public 
 * License along with this library; if not, write to the Free Software 
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA 
 * 
 */

#ifndef SEED_H
#define SEED_H

/********************** Include files ************************/

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#ifdef  __cplusplus
extern "C" {
#endif
/********************* Type Definitions **********************/

#ifndef TYPE_DEFINITION
    #define TYPE_DEFINITION
    #if defined(__alpha)
        typedef unsigned int        DWORD;
        typedef unsigned short      WORD;
    #else
        typedef unsigned int   		DWORD;
        typedef unsigned short 		WORD;
    #endif
    typedef unsigned char           BYTE;
#endif


/******************* Constant Definitions *********************/

#define NoRounds         16
#define NoRoundKeys      (NoRounds*2)
#define SeedBlockSize    16    /* in bytes */
#define SeedBlockLen     128   /* in bits */


/********************** Common Macros ************************/

#if defined(_MSC_VER)
    #define ROTL(x, n)     (_lrotl((x), (n)))
    #define ROTR(x, n)     (_lrotr((x), (n)))
#else
    #define ROTL(x, n)     (((x) << (n)) | ((x) >> (32-(n))))
    #define ROTR(x, n)     (((x) >> (n)) | ((x) << (32-(n))))
#endif


/**************** Function Prototype Declarations **************/

#ifndef PROTOTYPES
#define PROTOTYPES  1
#endif

#if PROTOTYPES
#define PROTO_LIST(list)    list
#else
#define PROTO_LIST(list)    ()
#endif

void SeedEncrypt 
    PROTO_LIST((BYTE *pbData, DWORD *pdwRoundKey));
void SeedDecrypt
    PROTO_LIST((BYTE *pbData, DWORD *pdwRoundKey));
void SeedEncRoundKey
    PROTO_LIST((DWORD *pdwRoundKey, BYTE *pbUserKey));

/******************************************************************/
#ifdef  __cplusplus
}
#endif
#endif
