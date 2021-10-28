

int *Memory;

void InitializeMemory()
{
   if ( Memory )
   {
      int i;
      for (i=0;i<MAXIMUM_MEMORY_SIZE;i++)
         Memory[i] = -1;
   }
}
