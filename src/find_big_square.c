/*
** EPITECH PROJECT, 2025
** My_bsq
** File description:
** function return coordonner and size big square
*/

#include <stdio.h>

#include "../include/bsq.h"

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int check_square()

int size_square(char **map,int *pos,int size)
{
    int size_map = my_getnbr(map[0]);
    int j = -1;
    if (map[pos[0]][pos[1]] == 'o') return 0;
    for (int i = 0;i != my_power(size,2);i++) {
        if (i % size == 0) j++;
        if (map[pos[0] + j][pos[1] + (i % size)] == 'o') {
            return size;
        }
    }
    if (size == min(size_map - pos[0], size_map - pos[1]) + 1) return size;
    return size_square(map,pos,size + 1);
}

void find_big_square(char **map, int *coord)
{
    int count = 0;
    int y = 0;
    int size_map = my_getnbr(map[0]);
    for (;count != my_power(size_map,2);count++) {
        if (count % size_map == 0) y++;
        int pos[] = {y,count % size_map};
        int size = size_square(map,pos,0);
        printf("size : %d, x : %d, y : %d\n",size,pos[0],pos[1]);
        if (coord[2] < size) {
            coord[0] = pos[0];
            coord[1] = pos[1];
            coord[2] = size;
        }
    }
}