import random, sys

width = 1920 * 100
heigth = 1080 #//2

list_of_elements = ["nothing", "ice_wall", "ice_snow_block", "ice_cube", "only_snow"]
list_of_enemies = ["eggman","rocket","spike"]
list_of_all = []
dict_of_all =  {}
# level_name = "level1"
if (len(sys.argv) > 1):
    level_name = sys.argv[1]
    count = 0
    for i in range(len(list_of_elements)):
        # print(dict_of_all)
        dict_of_all[list_of_elements[i]] = count
        list_of_all.append(list_of_elements[i])
        count+=1

    for i in range(len(list_of_enemies)):
        # print(dict_of_all)
        dict_of_all[list_of_enemies[i]] = count
        list_of_all.append(list_of_enemies[i])
        count+=1
    count += -1
    # print(dict_of_all)
    # print(count)
    # print(len(dict_of_all))

    f = open(f"{level_name}.runner", "w")
    f.close()

    for i in range(heigth):
        print(i)
        for b in range(width):
            # print(b)
            character = random.randint(0,count-1)
            # print(f"character = {character}, list_of_all[int(character)] = {list_of_all[int(character)]}")
            f = open(f"{level_name}.runner", "a")
            f.write(f"{dict_of_all[list_of_all[int(character)]]}|")
            f.close()
        f = open(f"{level_name}.runner", "a")
        f.write("\n")
        f.close()
