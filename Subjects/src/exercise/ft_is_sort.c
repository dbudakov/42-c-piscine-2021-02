#include "../../include/libft.h"

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
    int i = 1;
    while (i < length)
    {
        if (0 > f(tab[i], tab[i - 1]))
            return 0;
        i++;
    }
    return 1;
}
