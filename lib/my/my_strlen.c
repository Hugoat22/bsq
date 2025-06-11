/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** fonction count lenght
*/

int my_strlen(char const *str)
{
    int size = 0;
    for (;str[size] != '\0';size++);
    return size;
}