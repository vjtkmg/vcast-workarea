#ifndef TYPES_H
#define TYPES_H

#include <stdio.h>

#ifdef _MSC_VER
#define INLINE __inline
#else
#define INLINE inline
#endif

typedef short MonthT;
typedef short DayT;
typedef short YearT;

typedef char * STRING;

typedef short BOOL;
static const BOOL TRUE  = ( 1 == 1 );
static const BOOL FALSE = ( 1 == 0 );

#endif
