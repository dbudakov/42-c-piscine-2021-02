#include "../../include/libft.h"

void ft_sort_int_tab_check()
{
    int i = 0;
    int a[] = {0, 2, 3, 5, 1, 4, 9, 6, 7, 8};
    ft_putstr("ft_sort_int_tab: ");
    ft_sort_int_tab(a, sizeof(a)/sizeof(a[0]));
    while (i < sizeof(a)/sizeof(a[0]))
        ft_putnbr(a[i++]);
    ft_putstr("\n");
}