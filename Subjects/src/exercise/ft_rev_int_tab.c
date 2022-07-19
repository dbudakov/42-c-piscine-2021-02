#include "../../include/libft.h"

void ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    int mid;
    mid = size / 2;
    while (i < mid)
    {
        ft_swap(&tab[i], &tab[(size - 1) - i]);
        i++;
    }
}