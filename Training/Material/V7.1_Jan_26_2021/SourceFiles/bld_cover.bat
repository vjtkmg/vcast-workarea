set path=%VECTORCAST_DIR%\mingw\bin;%path%
rem
rem  This batch script builds the Manager POS system.
rem


gcc -g -c manager_driver.c manager.c database.c
gcc -o diner *.o
