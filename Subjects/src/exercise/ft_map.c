#include "../../include/libft.h"

int *ft_map(int *tab, int length, int(*f)(int))
{
    int i = 0;
    int *dest = NULL;

    dest = (int *)malloc(sizeof(int) * length);

    while (i < length)
    {
        dest[i] = f(tab[i]);
        i++;
    }
    return dest;
}