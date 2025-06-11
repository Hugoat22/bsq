/*
** EPITECH PROJECT, 2025
** My_bsq
** File description:
** function bsq
*/

#include <stdio.h>

#include "../include/my.h"
int bsq(char *filename)
{
    char const *data_file = open_file(filename);
    printf("%s\n",data_file);
    if (data_file == NULL) return 84;
    char **map = my_str_to_word_array(data_file,NULL);
    for (int i = 0;i != 5;i++) {
        printf("%s\n",map[i]);
    }
    return 0;
}