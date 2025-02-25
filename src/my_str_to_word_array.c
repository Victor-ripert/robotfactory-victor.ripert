/*
** EPITECH PROJECT, 2024
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

static int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
    i++;
    }
    return i;
}

static int is_alphanum(char i)
{
    if (i != ' ') {
        return 1;
    } else {
        return 0;
    }
}

static int count_next_nonalphanum(int pos, char *str)
{
    int len = my_strlen(str);
    int total_special_char = 0;

    for (int i = pos; i < len && is_alphanum(str[i]) == 0; i++) {
        total_special_char++;
    }
    if (pos >= len) {
        return 0;
    }
    return total_special_char;
}

static int get_total_words(char *str)
{
    int total_words = 0;
    int can_add = 0;

    for (int i = 0; str[i] != '\0'; i++) {
            if (can_add == 0 && is_alphanum(str[i]) == 1) {
                total_words += 1;
                can_add = -1;
            }
            if (is_alphanum(str[i]) == 0) {
                can_add = 0;
            }
        }
    return total_words;
}

static char *get_next_word(int pos, char *str)
{
    int word_size = 0;
    char *new_str;
    int j = 0;

    for (int i = pos; str[i] != '\0' && is_alphanum(str[i]) == 0; i++) {
        pos++;
    }
    for (int i = pos; str[i] != '\0' && is_alphanum(str[i]) != 0; i++) {
        word_size += 1;
    }
    new_str = malloc((sizeof(char) * (word_size + 1)));
    for (int i = pos; str[i] != '\0' && is_alphanum(str[i]) != 0; i++) {
        new_str[j] = str[i];
            j++;
    }
    new_str[j] = '\0';
    return new_str;
}

char **my_str_to_word_array(char *str)
{
    char *current_word;
    int total_size = 0;
    int len = my_strlen(str);
    int current_size = 0;
    int cnt = 0;
    int cpt = 0;
    int total_words = get_total_words(str);
    char **final_tab = malloc(sizeof(char *) * (total_words + 1));

    for (int i = 0; str[i] != '\0' && i < len; cpt++) {
        current_word = get_next_word(total_size, str);
        final_tab[cpt] = current_word;
        current_size = my_strlen(current_word);
        total_size += current_size;
        cnt = count_next_nonalphanum(total_size, str);
        total_size += cnt;
        i += current_size + cnt;
    }
    final_tab[cpt] = NULL;
    return final_tab;
}
