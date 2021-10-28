struct MyStruct {
   char     field1[100];
   unsigned field2;
   };

unsigned Generate();

void Copy ( char source[], char dest[] )
{
   int i = 0;
   if ( source && dest ) {
      while ( source[i] != 0 )
         dest[i] = source[i++];
      dest[i] = 0;
   }
}


struct MyStruct InitializeRecord ( char StudentName[], unsigned StudentID)
{
   struct MyStruct retVal;

   Copy ( StudentName,retVal.field1 );
   retVal.field2 = StudentID;

   return retVal;
}
