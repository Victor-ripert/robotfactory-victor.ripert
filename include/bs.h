/*
** EPITECH PROJECT, 2024
** B-CPE-200-PAR-2-1-bsrobotfactory-manoah.paye
** File description:
** bs.h
*/

#ifndef BS_H
    #define BS_H

typedef struct put_s {
    char instruction;
    int len;
    char *word;
} put_t;

typedef struct other_s {
    char instruction;
    int param1;
    int param2;
} other_t;

typedef struct instruction_s {
    put_t put;
    other_t other;
    struct instruction_s *prev;
    struct instruction_s *next;
} instruction_t;

#endif /* BS_H */
