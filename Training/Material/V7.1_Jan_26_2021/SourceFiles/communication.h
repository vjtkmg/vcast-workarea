#ifndef COMMUNICATION_H
#define COMMUNICATION_H

#define Pi (3.14159265)

/*
 *  Course Values: Floating point value in Radians
 *
 *  There are 2*Pi radians in 360 degrees:
 *    North = 0 Radians
 *    East  = Pi/2 Radians
 *    South = Pi   Radians
 *    West  = (3/2)*Pi Radians
 *    2*Pi is back to North again.
 *
 *    So, the range for the Course is between 0 & 2*Pi.
 */
#define MIN_COURSE 0
#define MAX_COURSE (2*Pi)

/*
 *  Altitude Values: Integer value between 10 & 40,000 ft.
 */
#define MIN_ALTITUDE 10
#define MAX_ALTITUDE 40000

#include "stdio.h"

enum Message { Change_Altitude, Change_Course, Text_Message, Invalid };
typedef enum Message MessageT;

enum Boolean { False, True };

struct AltCmd {
   unsigned newAltitude;
   int crc;
   };
typedef struct AltCmd AltCmdT;

struct CourseCmd {
   float newCourse;
   int crc;
   };
typedef struct CourseCmd CourseCmdT;


enum Boolean ProcessMessage ( MessageT messageCategory,
                      void *message );

void ChangeAltitude ( unsigned altitude );
void ChangeCourse ( float course );
void InvalidCommand ( MessageT messageCategory );

#endif
