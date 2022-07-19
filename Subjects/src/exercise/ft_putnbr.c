#include "../../include/libft.h"

void putNumber(int num)
{
    int n;
    n = num + 48;
    write(1,&n,1);
}

int recursionNumber(long num)
{
    if (num / 10 != 0)
        recursionNumber(num / 10);
    putNumber(num % 10);
    return num % 10;
}

void ft_putnbr(int c)
{
    long num;
    num = c;
    if (num < 0)
    {
        ft_putchar('-');
        num = -num;
    }
    recursionNumber(num);
}