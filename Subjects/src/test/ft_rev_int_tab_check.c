#include "../../include/libft.h"

void ft_rev_int_tab_check()
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr = a;
    int i= 0;
    ft_putstr("ft_rev_int_tab: ");
    ft_rev_int_tab(ptr, sizeof(a)/sizeof(a[0]));
    while( i != sizeof(a)/sizeof(a[0]))
        ft_putnbr(a[i++]);
    ft_putstr("\n");
}