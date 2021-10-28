#include "types.h"
#include "utilities.h"

BOOL DateIsValid ( YearT  theYear,
		   MonthT theMonth,
		   DayT   theDay ) {
   TRACE ( 1, "DateIsValid" );
   if ( theYear > 1776 && theYear < 2999 )
      if ( theMonth >= 1 && theMonth <= 12 )
         if ( theDay >= 1 && theDay <= MaxDays ( theMonth, theYear ) )
	    return TRUE;
   return FALSE;
}

STRING DateString ( YearT  theYear,
		    MonthT theMonth,
		    DayT   theDay ) {
   TRACE (1, "DateString" );
   if ( DateIsValid ( theYear, theMonth, theDay ) ) {

      STRING yearStr  = IntegerToString ( theYear );
      STRING monthStr = TextMonth ( theMonth );
      STRING dayStr   = IntegerToString ( theDay );

      dayStr = ConcatenateStrings ( dayStr, ", " );
      monthStr = ConcatenateStrings ( monthStr, " " );

      return ConcatenateStrings ( monthStr,
		                  ConcatenateStrings ( dayStr, yearStr ) );
		                 
   }
   else
      return "<<invalid date>>";
}

