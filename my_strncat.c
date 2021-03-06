/*
** EPITECH PROJECT, 2019
** my_strncat.c
** File description:
** my_strncat
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int c = 0;

    while (dest[i] != '\0')
        i++;
    while (src[c] != '\0' && c < nb){
        dest[i] = src[c];
        i++;
        c++;
    }
    dest[i] = '\0';
    return (dest);
}
