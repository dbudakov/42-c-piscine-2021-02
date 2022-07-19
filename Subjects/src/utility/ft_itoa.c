#include "../../include/libft.h"

char *ft_itoa(int nbr)
{
    int i = 0;
    int len = 0;
    int buff = 0;
    char *str = NULL;
    
    buff = nbr;
    while(buff / 10)
    {
        buff = buff / 10;
        len++;
    }
    str = (char *)malloc(sizeof(char) * (len + 1));
    buff = nbr;

    while(buff / 10)
    {
        str[len--] = (buff % 10) + 48;
        buff = buff / 10;
        i++;
    }
    str[len] = (buff % 10) + 48;
    str[++i] = '\0';
    return str;
}