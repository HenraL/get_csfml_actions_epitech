import os
os.system("echo off")
os.system("color 0A")
FOLDERS = ["key","my","window"]

for i in range(len(FOLDERS)):
    print(f"cmd/c {FOLDERS[i]}")
    os.chdir(FOLDERS[i])
    print("cmd/c backup_plan.bat")
    os.system("cmd/c backup_plan.bat")
    print("..")
    os.chdir("..")
print("lib/backup_plan.bat, done")
os.system("echo on")