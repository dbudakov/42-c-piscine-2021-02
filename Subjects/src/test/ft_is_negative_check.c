#include "../../include/libft.h"

void ft_is_negative_check(void)
{
    ft_putstr("ft_is_negative: ");
    ft_is_negative(0);
    ft_putchar('(');ft_putnbr(0);ft_putchar(')');
    ft_putstr(", ");
    ft_is_negative(1);
    ft_putchar('(');ft_putnbr(1);ft_putchar(')');
    ft_putstr(", ");
    ft_is_negative(INT_MAX);
    ft_putchar('(');ft_putnbr(INT_MAX);ft_putchar(')');
    ft_putstr(", ");
    ft_is_negative(-1);
    ft_putchar('(');ft_putnbr(-1);ft_putchar(')');
    ft_putstr(", ");
    ft_is_negative(INT_MIN);
    ft_putchar('(');ft_putnbr(INT_MIN);ft_putchar(')');
    ft_putchar('\n');
}