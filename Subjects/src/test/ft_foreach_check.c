#include "../../include/libft.h"

void ft_foreach_check(void)
{
    int tab[] = {0, 1, 2, 3, 4};
    int length = 5;

    ft_putstr("ft_foreach: ");
    ft_foreach(tab, length, &ft_putnbr);
    ft_putstr("\n");
}