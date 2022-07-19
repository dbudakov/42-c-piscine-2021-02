#include "../../include/libft.h"

void ft_swap_check()
{
    int a = 0, b = 1;
    ft_swap(&a,&b);
    ft_putstr("ft_swap: ");
    ft_putnbr(a);
    ft_putstr(", ");
    ft_putnbr(b);
    ft_putchar('\n');
}