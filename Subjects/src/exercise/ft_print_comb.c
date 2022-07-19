#include "../../include/libft.h"

void printIteration(char a, char b, char c)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(c);
    if ( a != '7')
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void ft_print_comb(void)
{
    int a = '0';
    int b = '1';
    int c = '2';
    while (a != ('7' + 1))
    {
        while (b != ('8' + 1))
        {

            while(c != ('9' + 1))
            {
                printIteration(a, b, c);
                c++;
            }
            b++;
            c = b + 1;
        }
        a++;
        b = a;
    }
}