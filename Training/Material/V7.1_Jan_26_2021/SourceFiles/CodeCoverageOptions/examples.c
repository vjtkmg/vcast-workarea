int functionCall ( int flag );

void examples ( int aaa, int bbb, int ccc, int ddd, char flag )
{
   int parameter;
   switch ( flag ) {
   case 'a':
      parameter = ( aaa > bbb ) || ( ccc > ddd );
      break;
   case 'b':
      parameter = functionCall ( (aaa > 0) && (bbb > 0) );
      break;
   case 'c':
      ;
      break;
   case 'd':
      parameter = 1;
   }
}

