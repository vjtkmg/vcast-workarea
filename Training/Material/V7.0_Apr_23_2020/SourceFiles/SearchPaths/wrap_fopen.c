#include "stdio.h"

FILE * my_fopen (const char * filename, const char * attribute)
{
    return fopen ( filename, attribute) ;
}