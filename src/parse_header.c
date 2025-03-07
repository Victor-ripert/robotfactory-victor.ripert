/*
** EPITECH PROJECT, 2024
** B-CPE-200-PAR-2-1-robotfactory-manoah.paye
** File description:
** parse_header.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

header_t *get_header(char *fp)
{
    header_t *new_struct = malloc(sizeof(header_t));

    c
}

void parse_file(char *filepath)
{
    char *line;
    size_t len;
    FILE *file = fopen(filepath, "r");
    char **nandc = malloc (sizeof(char *) * 2);

    while (getline(&line, &len, file) != -1) {
        my_str_to_word_array(line);
        if (line[0][0] == '#') {
            continue;
        }
        if (line[0][0] == '.' && my_strncmp(".name", line, 5) == 0) {
            get_header(line);
        }
        if (line[0][0] == '.' && my_strncmp(".comment", line, 8) == 0) {
            get_header(line);
        }
    }
}

int main(int ac, char **av)
{
    parse_file("test");
}
