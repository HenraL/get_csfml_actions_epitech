color 0A
echo off

set MODULE_NAME=my
set NAME_MY=lib%MODULE_NAME%.a
set HEADER=-I..\..\include

set FILENAME="get"
echo "gcc -c %FILENAME%.c %HEADER%"
gcc -c %FILENAME%.c %HEADER%
set OBJ=%FILENAME%.o

set FILENAME="display"
echo "gcc -c  %FILENAME%.c %HEADER%"
gcc -c %FILENAME%.c %HEADER%
set OBJ=%OBJ% %FILENAME%.o

@REM echo "ar rc %NAME_MY% %OBJ%"
@REM ar rc %NAME_MY% %OBJ%
@REM echo "Done for %MODULE_NAME%"