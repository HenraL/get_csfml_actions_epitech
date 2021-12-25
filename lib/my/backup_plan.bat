echo off
color 0A

set MODULE_NAME=my
set NAME_MY=lib%MODULE_NAME%.a
set HEADER=-I..\..\include

echo "gcc -c append/my_append_elem.c %HEADER%"
gcc -c append/my_append_elem.c %HEADER%
set OBJ=append/my_append_elem.o
echo "gcc -c compute/my_compute_power_rec.c %HEADER%"
gcc -c compute/my_compute_power_rec.c %HEADER%
set OBJ=%OBJ% compute/my_compute_power_rec.o
echo "gcc -c compute/my_compute_square_root.c %HEADER%"
gcc -c compute/my_compute_square_root.c %HEADER%
set OBJ=%OBJ% compute/my_compute_square_root.o
echo "gcc -c find/my_find_prime_sup.c %HEADER%"
gcc -c find/my_find_prime_sup.c %HEADER%
set OBJ=%OBJ% find/my_find_prime_sup.o
echo "gcc -c get/my_get_content.c %HEADER%"
gcc -c get/my_get_content.c %HEADER%
set OBJ=%OBJ% get/my_get_content.o
echo "gcc -c get/my_getnbr.c %HEADER%"
gcc -c get/my_getnbr.c %HEADER%
set OBJ=%OBJ% get/my_getnbr.o
echo "gcc -c in/my_in.c %HEADER%"
gcc -c in/my_in.c %HEADER%
set OBJ=%OBJ% in/my_in.o
echo "gcc -c in/my_in_two.c %HEADER%"
gcc -c in/my_in_two.c %HEADER%
set OBJ=%OBJ% in/my_in_two.o
echo "gcc -c is/my_is_even.c %HEADER%"
gcc -c is/my_is_even.c %HEADER%
set OBJ=%OBJ% is/my_is_even.o
echo "gcc -c is/my_isneg.c %HEADER%"
gcc -c is/my_isneg.c %HEADER%
set OBJ=%OBJ% is/my_isneg.o
echo "gcc -c is/my_is_prime.c %HEADER%"
gcc -c is/my_is_prime.c %HEADER%
set OBJ=%OBJ% is/my_is_prime.o
echo "gcc -c is/my_str_isalpha.c %HEADER%"
gcc -c is/my_str_isalpha.c %HEADER%
set OBJ=%OBJ% is/my_str_isalpha.o
echo "gcc -c is/my_str_islower.c %HEADER%"
gcc -c is/my_str_islower.c %HEADER%
set OBJ=%OBJ% is/my_str_islower.o
echo "gcc -c is/my_str_isnum.c %HEADER%"
gcc -c is/my_str_isnum.c %HEADER%
set OBJ=%OBJ% is/my_str_isnum.o
echo "gcc -c is/my_str_isprintable.c %HEADER%"
gcc -c is/my_str_isprintable.c %HEADER%
set OBJ=%OBJ% is/my_str_isprintable.o
echo "gcc -c is/my_str_isupper.c %HEADER%"
gcc -c is/my_str_isupper.c %HEADER%
set OBJ=%OBJ% is/my_str_isupper.o
echo "gcc -c put/my_putchar.c %HEADER%"
gcc -c put/my_putchar.c %HEADER%
set OBJ=%OBJ% put/my_putchar.o
echo "gcc -c put/my_putnbr_base.c %HEADER%"
gcc -c put/my_putnbr_base.c %HEADER%
set OBJ=%OBJ% put/my_putnbr_base.o
echo "gcc -c put/my_put_nbr.c %HEADER%"
gcc -c put/my_put_nbr.c %HEADER%
set OBJ=%OBJ% put/my_put_nbr.o
echo "gcc -c put/my_putstr.c %HEADER%"
gcc -c put/my_putstr.c %HEADER%
set OBJ=%OBJ% put/my_putstr.o
echo "gcc -c str/my_revstr.c %HEADER%"
gcc -c str/my_revstr.c %HEADER%
set OBJ=%OBJ% str/my_revstr.o
echo "gcc -c str/my_showstr.c %HEADER%"
gcc -c str/my_showstr.c %HEADER%
set OBJ=%OBJ% str/my_showstr.o
echo "gcc -c str/my_strcapitalize.c %HEADER%"
gcc -c str/my_strcapitalize.c %HEADER%
set OBJ=%OBJ% str/my_strcapitalize.o
echo "gcc -c str/my_strcat.c %HEADER%"
gcc -c str/my_strcat.c %HEADER%
set OBJ=%OBJ% str/my_strcat.o
echo "gcc -c str/my_strcmp.c %HEADER%"
gcc -c str/my_strcmp.c %HEADER%
set OBJ=%OBJ% str/my_strcmp.o
echo "gcc -c str/my_strcpy.c %HEADER%"
gcc -c str/my_strcpy.c %HEADER%
set OBJ=%OBJ% str/my_strcpy.o
echo "gcc -c str/my_strlen.c %HEADER%"
gcc -c str/my_strlen.c %HEADER%
set OBJ=%OBJ% str/my_strlen.o
echo "gcc -c str/my_strlowcase.c %HEADER%"
gcc -c str/my_strlowcase.c %HEADER%
set OBJ=%OBJ% str/my_strlowcase.o
echo "gcc -c str/my_strncat.c %HEADER%"
gcc -c str/my_strncat.c %HEADER%
set OBJ=%OBJ% str/my_strncat.o
echo "gcc -c str/my_strncmp.c %HEADER%"
gcc -c str/my_strncmp.c %HEADER%
set OBJ=%OBJ% str/my_strcmp.o
echo "gcc -c str/my_strncpy.c %HEADER%"
gcc -c str/my_strncpy.c %HEADER%
set OBJ=%OBJ% str/my_strncpy.o
echo "gcc -c str/my_strstr.c %HEADER%"
gcc -c str/my_strstr.c %HEADER%
set OBJ=%OBJ% str/my_strstr.o
echo "gcc -c str/my_strupcase.c %HEADER%"
gcc -c str/my_strupcase.c %HEADER%
set OBJ=%OBJ% str/my_strupcase.o
echo "gcc -c my_showmem.c %HEADER%"
gcc -c my_showmem.c %HEADER%
set OBJ=%OBJ% my_showmem.o
echo "gcc -c my_sort_int_array.c %HEADER%"
gcc -c my_sort_int_array.c %HEADER%
set OBJ=%OBJ% my_sort_int_array.o
echo "gcc -c my_swap.c %HEADER%"
gcc -c my_swap.c %HEADER%
set OBJ=%OBJ% my_swap.o
@REM echo "ar rc %NAME_MY% append/my_append_elem.o compute/my_compute_power_rec.o compute/my_compute_square_root.o find/my_find_prime_sup.o get/my_get_content.o get/my_getnbr.o in/my_in.o in/my_in_two.o is/my_is_even.o is/my_isneg.o is/my_is_prime.o is/my_str_isalpha.o is/my_str_islower.o is/my_str_isnum.o is/my_str_isprintable.o is/my_str_isupper.o put/my_putchar.o put/my_putnbr_base.o put/my_put_nbr.o put/my_putstr.o str/my_revstr.o str/my_showstr.o str/my_strcapitalize.o str/my_strcat.o str/my_strcmp.o str/my_strcpy.c str/my_strlen.o str/my_strlowcase.o str/my_strncat.o str/my_strncmp.o str/my_strncpy.o str/my_strstr.o str/my_strupcase.o my_showmem.o my_sort_int_array.o my_swap.o"
@REM ar rc %NAME_MY% append/my_append_elem.o compute/my_compute_power_rec.o compute/my_compute_square_root.o find/my_find_prime_sup.o get/my_get_content.o get/my_getnbr.o in/my_in.o in/my_in_two.o is/my_is_even.o is/my_isneg.o is/my_is_prime.o is/my_str_isalpha.o is/my_str_islower.o is/my_str_isnum.o is/my_str_isprintable.o is/my_str_isupper.o put/my_putchar.o put/my_putnbr_base.o put/my_put_nbr.o put/my_putstr.o str/my_revstr.o str/my_showstr.o str/my_strcapitalize.o str/my_strcat.o str/my_strcmp.o str/my_strcpy.c str/my_strlen.o str/my_strlowcase.o str/my_strncat.o str/my_strncmp.o str/my_strncpy.o str/my_strstr.o str/my_strupcase.o my_showmem.o my_sort_int_array.o my_swap.o
echo "ar rc %NAME_MY% %OBJ%"
ar rc %NAME_MY% %OBJ%
echo "Done for %MODULE_NAME%"