#include "../../include/libft.h"

int ft_min_int_tab(int *tab, int num)
{
    int i = 0; 
    int max = 0;
    while (i < (num + 1))
    {
        if (tab[max] > tab[i])
            max = i;
        i++;
    }
    return max;
}