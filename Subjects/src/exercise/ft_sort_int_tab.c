#include "../../include/libft.h"

void ft_sort_int_tab(int *tab, int size)
{
    int num = size - 1;
    int i = 0;
    int max;
    
    while(num != 0)
    {
        max = ft_max_int_tab(tab, num);
        if ( num != max)
            ft_swap(&tab[max], &tab[num]);
        num = num - 1;
    }
}