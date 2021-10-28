#include "vcast_time.h"

time_T time_add_seconds ( time_T start, int seconds )
{
    time_T ret ;
    int newseconds;

    if (invalid_time(start))
    {
        ret.secs=0;
        ret.mins=0;
        return ret;
    }
	
    newseconds = start.secs + seconds ;
    ret.mins = start.mins ;
    if ( newseconds >= 60 )
    {
        ret.mins++ ;
        newseconds -= 60 ;
    }
    ret.secs = newseconds ;
	
    return ret ;   
}