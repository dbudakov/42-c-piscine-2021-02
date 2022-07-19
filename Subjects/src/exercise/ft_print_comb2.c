#include "../../include/libft.h"

void printComb(int a, int b)
{
    ft_putnbr(a);
    if ( a < 10)
        ft_putchar('0');
    ft_putchar(' ');
    if ( b < 10)
        ft_putchar('0');
    ft_putnbr(b);
    ft_putchar(',');
    ft_putchar(' ');
}

void ft_print_comb2(void)
{
    int a = 0;
    int b = 0;


    while (a != (98 + 1))
    {
        b = a + 1;
        while ( b != (99 + 1))
        {
            printComb(a, b);
            b++;
        }
        a++;
    }
}