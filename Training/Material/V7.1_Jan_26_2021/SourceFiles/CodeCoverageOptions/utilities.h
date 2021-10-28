#ifndef UTILITES_H
#define UTILITIES_H

#include "types.h"

STRING TextMonth ( MonthT theMonth );
DayT MaxDays ( MonthT theMonth, YearT theYear );

STRING ConcatenateStrings ( STRING str1, STRING str2 );
STRING IntegerToString ( int theInteger );


static INLINE void TRACE ( int caller, char *s ) { if (caller==1) fprintf ( stderr, "1: %s\n", s ); else fprintf ( stderr, "1: %s\n", s ); }

#endif
