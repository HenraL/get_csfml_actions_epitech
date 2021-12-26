echo off
color 0A
set FOLDER = backup_plan.bat
echo "cmd/c %FOLDER%"
cmd/c %FOLDER%
echo "cd .."
cd ..
echo "lib/backup_plan.bat, done"