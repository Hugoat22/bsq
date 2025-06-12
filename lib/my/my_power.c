/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** fonction power number
*/

int my_power(int nbr,int pow)
{
    if (pow == 0)
        return 1;
    if (pow == 1)
        return nbr;
    return nbr * my_power(nbr,pow - 1);
}