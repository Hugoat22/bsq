/*
** EPITECH PROJECT, 2025
** My_lib
** File description:
** function return size file
*/

#include "my.h"

off_t file_size(char *filename)
{
    struct stat buffer;

    if (stat(filename, &buffer) == -1) return -1;

    return buffer.st_size;
}