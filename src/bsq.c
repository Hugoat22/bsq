/*
** EPITECH PROJECT, 2025
** My_bsq
** File description:
** function bsq
*/

#include "../include/bsq.h"

int sepa(char c)
{
    if (c != '\n') return 1;
    return 0;
}

int bsq(char *filename)
{
    char const *data_file = open_file(filename);
    if (data_file == NULL) return 84;
    char **map = my_str_to_word_array(data_file,sepa);
    find_square(map);
    return 0;
}