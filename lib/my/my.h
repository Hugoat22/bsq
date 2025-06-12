/*
** EPITECH PROJECT, 2025
**  My_lib
** File description:
** header lib
*/

#ifndef MY_H_
#define MY_H_

    #include <sys/stat.h>
    #include <stddef.h>
    #include <stdlib.h>
    #include <unistd.h>
    off_t file_size(char *filename);
    char *open_file(char *filename);
    char **my_str_to_word_array(char const *str, int (*func)(char c));
    char *my_strdup(char const *src);
    int my_strlen(char const *str);
    int my_getnbr(char const *str);
    void my_putstr(char const *str);
    void my_putchar(char c);
    int my_power(int nbr,int pow);

#endif /* !MY_H_ */
