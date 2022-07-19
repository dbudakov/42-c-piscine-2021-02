#include "../../include/libft.h"

int ft_any(char **tab, int(*f)(char*))
{
    int i = 0;

    while(tab[i] != NULL)
    {
        if (0 == f(tab[i]))
            return 0;
        i++;
    }
    return 1;
}