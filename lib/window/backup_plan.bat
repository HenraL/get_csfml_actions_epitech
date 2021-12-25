echo off
color 0A

set MODULE_NAME=mywindow
set NAME_MY=lib%MODULE_NAME%.a
set HEADER=-I..\..\include

echo "gcc -c createWindow.c %HEADER%"
gcc -c createWindow.c %HEADER%
set OBJ=createWindow.o

echo "gcc -c create_framebuffer.c %HEADER%"
gcc -c create_framebuffer.c %HEADER%
set OBJ=%OBJ% create_framebuffer.o

echo "gcc -c destroy_framebuffer.c %HEADER%"
gcc -c destroy_framebuffer.c %HEADER%
set OBJ=%OBJ% destroy_framebuffer.o

echo "ar rc %NAME_MY% %OBJ%"
ar rc %NAME_MY% %OBJ%
echo "Done for %MODULE_NAME%"