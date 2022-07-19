#include "../../include/libft.h"

void ft_putnbr_check()
{
    ft_putstr("ft_putnbr: ");
    ft_putnbr(0);ft_putchar(',');
    ft_putnbr(1);ft_putchar(',');
    ft_putnbr(-1);ft_putchar(',');
    ft_putnbr(-2147483648);ft_putchar('\n');
}