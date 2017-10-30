/*
 * lib_port.h
 *
 *  Created on: 26/10/2017
 *      Author: carlo
 */

#ifndef MAL_LIB_PORT_H_
#define MAL_LIB_PORT_H_

#include "S32K144.h"
#include "MAL/def_lib.h"

//void set_PORTA(T_ULONG PIN,T_ULONG DIR);
void set_PORTB(T_ULONG PIN,T_ULONG DIR);
void set_PORTC(T_ULONG PIN,T_ULONG DIR);
void set_PORTD(T_ULONG PIN,T_ULONG DIR);
void set_PORTE(T_ULONG PIN,T_ULONG DIR);

#endif /* MAL_LIB_PORT_H_ */
