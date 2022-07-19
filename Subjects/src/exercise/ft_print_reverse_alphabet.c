#include "../../include/libft.h"

void ft_print_reverse_alphabet(void)
{
    char c;
    c = 'z';
    while (c != 'a')
    {
        ft_putchar(c);
        c = c - 1;
    }
    ft_putchar(c);
}