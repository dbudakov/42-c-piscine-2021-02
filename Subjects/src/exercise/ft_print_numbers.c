#include "../../include/libft.h"

void ft_print_numbers(void)
{
    char n;
    n = '0';
    while(n != '9')
        ft_putchar(n++);
    ft_putchar(n);
}