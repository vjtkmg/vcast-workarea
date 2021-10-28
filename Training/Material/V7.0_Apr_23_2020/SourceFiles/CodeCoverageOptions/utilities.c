#include <stdlib.h>
#include "types.h"
#include "utilities.h"

STRING TextMonth ( MonthT theMonth ) {
   TRACE ( 3, "TextMonth" );
   switch ( theMonth ) {
      case  1 : return "January";
      case  2 : return "February";
      case  3 : return "March";
      case  4 : return "April";
      case  5 : return "May";
      case  6 : return "June";
      case  7 : return "July";
      case  8 : return "August";
      case  9 : return "September";
      case 10 : return "October";
      case 11 : return "November";
      case 12 : return "December";
   }
   return "";
}

DayT MaxDays ( MonthT theMonth, YearT theYear ) {

   TRACE (3, "MaxDays" );
   switch ( theMonth ) {
      case  1:
      case  3:
      case  5:
      case  7:
      case  8:
      case 10:
      case 12:
         return 31;
      case  4:
      case  6:
      case  9:
      case 11:
         return 30;
      case  2: {
         BOOL isLeapYear = FALSE;
         isLeapYear = ( ( theYear / 4 ) * 4 == theYear ) &&
		      !( ( theYear / 100 ) * 100 == theYear );
	 if ( !isLeapYear &&
	      ( ( theYear / 400 ) * 400 == theYear ) )
	    isLeapYear = TRUE;
	 return isLeapYear ? 29 : 28;
         }
   }
}

STRING ConcatenateStrings ( STRING str1, STRING str2 )
{
   STRING retVal;
   int length = strlen ( str1 ) + strlen ( str2 ) + 1;
   TRACE (3, "ConcatenateStrings" );
   retVal = (STRING)malloc ( length );
   sprintf ( retVal, "%s%s", str1, str2 );
   return retVal;
}

STRING IntegerToString ( int theInteger )
{
   STRING retVal;
   char temp[20];
   TRACE (3, "IntegerToString" );
   sprintf ( temp, "%d", theInteger );
   retVal = (STRING)malloc ( strlen(temp) );
   sprintf ( retVal, "%s", temp );
   return retVal;
}
