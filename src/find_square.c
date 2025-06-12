/*
** EPITECH PROJECT, 2025
** My_bsq.c
** File description:
** functions get big square and display map
*/

#include "../include/bsq.h"

void find_square(char **map)
{
    int coord[3] = {1,0,0};
    find_big_square(map, coord);
    for (int i = 1;i != my_getnbr(map[0]) + 1;i++) {
        if (!(coord[0] <= i && i < coord[0] + coord[2])) {
            my_putstr(map[i]);
            my_putchar('\n');
            continue;
        }
        int j = 0;
        for (;j != coord[1];j++) my_putchar(map[i][j]);
        for (;j != coord[1] + coord[2];j++) my_putchar('x');
        for (;j != my_getnbr(map[0]);j++) my_putchar(map[i][j]);
        my_putchar('\n');
    }
}