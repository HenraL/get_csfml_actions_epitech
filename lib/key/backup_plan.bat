color 0A
echo off

set MODULE_NAME=my
set NAME_MY=lib%MODULE_NAME%.a
set HEADER=-I..\..\include

echo "gcc -c append\\my_append_elem.c %HEADER%"
gcc -c append\my_append_elem.c %HEADER%
set OBJ=my_append_elem.o

echo "gcc -c append\\my_append_elem.c %HEADER%"
gcc -c append\my_append_elem.c %HEADER%
set OBJ=%OBJ% my_append_elem.o

echo "ar rc %NAME_MY% %OBJ%"
ar rc %NAME_MY% %OBJ%
echo "Done for %MODULE_NAME%"