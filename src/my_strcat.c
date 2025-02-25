/*
** EPITECH PROJECT, 2024
** my_strcat
** File description:
** cat
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int dest_len = 0;

    while (dest[dest_len] != '\0')
        dest_len++;
    while (src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return (dest);
}
