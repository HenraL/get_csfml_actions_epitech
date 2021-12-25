import os

MODULE_NAME = "my_runner.exe"
HEADER = "-Iinclude"
MY_LIB="-L lib\\my\\ -lmy -L lib\\dict\\ -lmydict -L lib\\convert -lmyconvert -L lib\\window -lmywindow -L lib\\pixel -lmypixel -L lib\\maths -lmymaths -L lib\\help -lmyhelp"
FILES="test.c"
CSFML_LIBS="-lcsfml-graphics -lcsfml-system -lcsfml-audio"


choix = input("Compile ? [(o)ui/(n)on]")
if choix.lower() == "o":
    os.system("color 0A")
    print("cd lib")
    os.chdir("lib")
    print("cmd/c backup_plan.bat")
    os.system("cmd/c backup_plan.bat")
    print("..")
    os.chdir("..")
    print(f"gcc {FILES} -o {MODULE_NAME} {CSFML_LIBS} {MY_LIB} {HEADER}")
    os.system(f"gcc {FILES} -o {MODULE_NAME} {CSFML_LIBS} {MY_LIB} {HEADER}")
    print(f"Done for {MODULE_NAME}")
else:
    print("Au revoir\n(c) créé par Henry Letellier")