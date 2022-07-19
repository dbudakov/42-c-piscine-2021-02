#include "../../include/libft.h"

void ft_ultimate_div_mod_check()
{
    int a = 12, b = 5;
    ft_putstr("ft_ultimate_div: ");
    ft_putnbr(a);
    ft_putstr(" / ");
    ft_putnbr(b);
    ft_putstr(" = ");
    ft_ultimate_div_mod(&a, &b);
    ft_putnbr(a);
    ft_putstr(" mod( ");
    ft_putnbr(b);
    ft_putstr(")\n");
    
}