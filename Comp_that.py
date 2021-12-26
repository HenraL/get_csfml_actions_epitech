import os
os.system("color 0A")

MODULE_NAME = "my_runner.exe"
HEADER = "-Iinclude"
MY_LIB="-L lib\\my -lmy"# -L lib\\window -lmywindow -L lib\\key -lmykey"
IGNORED_LIBS = " -L lib\\dict\\ -lmydict-L lib\\convert -lmyconvert -L lib\\pixel -lmypixel -L lib\\maths -lmymaths -L lib\\help -lmyhelp"
FILES="test.c"
CSFML_LIBS="-lcsfml-graphics -lcsfml-system -lcsfml-audio"

choix = input("Compiler? [(o)ui/(n)on/(ld)lib déjà compilées/(lj) juste compiler les lib]")
if choix.lower() in ["o","ld","dl","lj","jl"]:
    print(f"choix.lower() = {choix.lower()}")
    if choix.lower() in ["o","lj","jl"]:
        print("cd lib")
        os.chdir("lib")
        print("cmd/c backup_plan.py")
        os.system("cmd/c backup_plan.py")
        print("..")
        os.chdir("..")
    if choix.lower() in ["o","ld","dl"]:
        comp_line = f"gcc -o {MODULE_NAME} {FILES}  {CSFML_LIBS} {MY_LIB} {HEADER}"
        print(comp_line)
        os.system(comp_line)
    print(f"Done for {MODULE_NAME}")
else:
    print("Au revoir\n(c) créé par Henry Letellier")