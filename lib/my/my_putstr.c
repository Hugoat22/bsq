/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** fonction display string
*/

#include "my.h"

void my_putstr(char const *str)
{
    for (int i = 0;i != my_strlen(str);i++) my_putchar(str[i]);
}