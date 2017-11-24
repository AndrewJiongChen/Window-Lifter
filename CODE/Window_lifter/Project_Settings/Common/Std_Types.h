/*
 * Std_Types.h
 *
 *  Created on: 15/11/2017
 *      Author: uid87753
 */

#ifndef COMMON_STD_TYPES_H_
#define COMMON_STD_TYPES_H_

#include "stdint.h"

/*type used for callback function*/
typedef void  ( * tCallbackFunction )( void  );

#ifndef NULL
	#define    NULL    ( ( void * ) 0 )
#endif

typedef volatile unsigned char T_UBYTE;
typedef volatile unsigned short T_UWORD;
typedef volatile unsigned int T_ULONG;

typedef volatile signed char T_SBYTE;
typedef volatile signed short T_SWORD;
typedef volatile signed int T_SLONG;

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;

typedef signed char sint8_t;
typedef signed short sint16_t;
typedef signed int sint32_t;

#endif /* COMMON_STD_TYPES_H_ */
