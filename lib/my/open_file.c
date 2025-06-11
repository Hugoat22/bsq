/*
** EPITECH PROJECT, 2025
** My_lib
** File description:
** function open file
*/

#include <fcntl.h>
#include <unistd.h>

#include "my.h"

char *open_file(char *filename)
{
    int fd = open(filename, O_RDONLY);

    if (fd == -1) return NULL;

    off_t size = file_size(filename);

    if (size == -1) return NULL;

    char *data = malloc(sizeof(char) * (size + 1));

    if (read(fd, data, size) == -1) return NULL;

    data[size] = '\0';

    return data;
}