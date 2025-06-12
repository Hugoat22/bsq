/*
** EPITECH PROJECT, 2025
** My_bsq
** File description:
** function check map
*/

#include "../include/bsq.h"

int check_map(char **map)
{
    int size_line = my_getnbr(map[0]);
    if (size_line == 0) return -84;
    int pred = 0;
    int col = 0;
    int line = 1;
    while (map[line] != NULL) {
        if (map[line][col] == '\0') {
            line++;
            if (pred != 0 && pred != col) return -84;
            pred = col;
            col = 0;
            continue;
        }
        if (!(map[line][col] == '.' || map[line][col] == 'o')) return -84;
        col++;
    }
    return 0;
}