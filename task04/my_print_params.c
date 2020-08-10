/*
** EPITECH PROJECT, 2019
** my_print_params.c
** File description:
** my_print_params
*/

int main(int argc, char const *argv[])
{
    for (int i = 0; i < argc; i++) {
        my_putstr(argv[i]);
        my_putstr("\n");
    }
    return (0);
}
