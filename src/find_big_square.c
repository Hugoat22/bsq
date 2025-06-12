/*
** EPITECH PROJECT, 2025
** My_bsq
** File description:
** function return coordonner and size big square
*/

#include "../include/bsq.h"

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int size_square(char **map,int *pos,int size)
{
    int size_map = my_getnbr(map[0]);

    if (size >= min(size_map - (pos[0] - 1), size_map - pos[1])) return size;
    if (map[pos[0]][pos[1]] == 'o') return 0;
    for (int i = 0;i != size;i++)
        if (map[pos[0] + size][pos[1] + i] == 'o') return size;
    for (int j = 0;j != size;j++)
        if (map[pos[0] + j][pos[1] + size] == 'o') return size;
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
        if (coord[2] < size) {
            coord[0] = pos[0];
            coord[1] = pos[1];
            coord[2] = size;
        }
    }
}