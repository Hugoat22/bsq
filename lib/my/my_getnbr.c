/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** fonction get number in string
*/

#define ZERO 48
#define NINE 57
#include "my.h"
int my_getnbr(char const *str)
{
    int neg = 0;
    int long nbr = 0;
    for (int i = 0;i != my_strlen(str);i++) {
        if (!(ZERO <= str[i] && str[i] <= NINE) && nbr != 0) break;
        if (nbr > 2147483647) return 0;
        if ('-' == str[i-1] && (ZERO < str[i] && str[i] < NINE)) neg = 1;
        if (ZERO <= str[i] && str[i] <= NINE) nbr = (nbr * 10) + (str[i] - 48);
        
    }
    if (neg) nbr *= -1;
    return (int)nbr;
}