#include "communication.h"

/*
 *  Copy & paste these 3 lines into User Globals:

  #include "communication.h"
  VCAST_USER_GLOBALS_EXTERN AltCmdT AltCmd;
  VCAST_USER_GLOBALS_EXTERN CourseCmdT CourseCmd;

 */
 

enum Boolean ProcessMessage ( MessageT messageCategory, void *message )
{
 enum Boolean rc=True;

 switch ( messageCategory )
 {
   case Change_Altitude:
   {
      AltCmdT *cmd = (AltCmdT *)message;
      int altitude = cmd->newAltitude;

      if ( (altitude < MIN_ALTITUDE) || (altitude > MAX_ALTITUDE) )
      {
          printf("\nBad Altitude: %d\n", altitude);
          rc = False;
      }
      else
      {
         ChangeAltitude ( altitude );
         printf("\nNew Altitude: %d\n", altitude);
      }
      break;
   }

   case Change_Course:
   {
      CourseCmdT *cmd = (CourseCmdT *)message;
      float course = cmd->newCourse;

      if ( (course < MIN_COURSE) || (course > MAX_COURSE))
      {
         printf("\nBad Course: %f\n", course);
         rc = False;
      }
      else
      {
         printf ("\nNew Course: %f\n", course );
         ChangeCourse ( course );
      }
      break;
   }

   case Text_Message:
   {
      char *ascii_msg;
      ascii_msg = (char *)message;
      printf ("\n%s\n", ascii_msg );
      break;
   }

   default:  
       InvalidCommand( messageCategory );

 }

 return(rc);
}
