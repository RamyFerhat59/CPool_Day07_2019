/*
** EPITECH PROJECT, 2019
** my_rev_params.c
** File description:
** my_rev_params
*/

int main(int argc, char const *argv[])
{
    char args[argc - 2];
    int i = argc;

    while (i > 0) {
        char *rev = argv[i--];
        my_putstr(argv[i]);
        my_putstr("\n");
    }
    return (0);
}
