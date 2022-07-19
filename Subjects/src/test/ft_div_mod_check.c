#include "../../include/libft.h"

void ft_div_mod_check()
{
    int a = 12, b = 5;
    int div = 0, mod = 0;
    ft_div_mod(a, b, &div, &mod);
    ft_putstr("ft_div_mod: ");
    ft_putnbr(a);
    ft_putstr(" / ");
    ft_putnbr(b);
    ft_putstr(" = ");
    ft_putnbr(div);
    ft_putstr(" mod(");
    ft_putnbr(mod);
    ft_putstr(")");
    ft_putchar('\n');
}