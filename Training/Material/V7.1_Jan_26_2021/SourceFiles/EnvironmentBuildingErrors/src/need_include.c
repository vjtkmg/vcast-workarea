#include "header1.h"
#include "header2.h"

FLOAT_RECORD functionToTest ( INT_RECORD parameter )
{
   FLOAT_RECORD retVal;

   retVal.field1 = (float)parameter.fieldb;
   retVal.field2 = (float)parameter.fielda;

   return retVal;
}
   
