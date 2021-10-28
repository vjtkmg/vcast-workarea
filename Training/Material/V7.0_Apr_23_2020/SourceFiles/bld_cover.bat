set path=%VECTORCAST_DIR%\mingw\bin;%path%
rem
rem  This batch file builds an executable using the "c_cover_io.c" file from a Cover Environment
rem  Change WORK_DIR to point to your Working Env Directory, and then simply run this batch file.
rem
rem set WORK_DIR=../MinGW_WorkDir/vcast_qa
rem set QA_ENV=%WORK_DIR%/SYSCOVER

gcc -g -c manager_driver.c manager.c database.c
gcc -o diner *.o
