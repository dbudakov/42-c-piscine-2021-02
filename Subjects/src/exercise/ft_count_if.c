#include "../../include/libft.h"

int ft_count_if(char **tab, int length, int(*f)(char*))
{
    int i = 0;
    int num = 0;

    while(i < length)
    {
        if (1 == f(tab[i]))
            num++;
        i++;
    }
    return num;
}