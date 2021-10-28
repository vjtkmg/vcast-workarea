rem
rem Set up environment variales for portability.
rem
SET SETUP_DIR=%~dp0
SET SETUP_DIR=%SETUP_DIR:~0,-1%
set TRAINING_DIR=%SETUP_DIR%\..

rem 
rem Convert relative path to absolute path.
rem 
FOR /D %%F IN (%TRAINING_DIR%) DO SET TRAINING_DIR=%%~fF

rem
rem  Make sure we pick up the temp license, instead of a permanent license
rem
set LM_APP_DISABLE_CACHE_READ=1
set LM_LICENSE_FILE=
set VECTOR_LICENSE_FILE=%TRAINING_DIR%\vector-DEMO.lic
rem set VECTORCAST_DIR=C:\VCAST


rem
rem  Launch VectorCAST from the default working directory.  Also, setting the path variable insures access to CLICAST, etc...
rem
cd %TRAINING_DIR%\MinGW_WorkDir
set path=%VECTORCAST_DIR%;%path%
start vcastqt.exe



