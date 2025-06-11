/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** function string copy
*/

#include "my.h"

char *my_strdup(char const *src)
{
    int size = my_strlen(src);
    char *cpy = malloc(sizeof(char) * size);
    int i = 0;

    for (;src[i] != '\0';i++) cpy[i] = src[i];
    cpy[i + 1] = '\0';
    return cpy;
}