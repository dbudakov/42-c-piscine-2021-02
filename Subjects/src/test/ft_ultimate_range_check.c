#include "../../include/libft.h"

void ft_ultimate_range_check(void)
{
    ft_putstr("ft_ultimate_range: ");
    int *arr;
    int i = 0;
    int num = 0;
    int output = 0;

    if (output)
    {
        ft_putnbr(ft_ultimate_range(&arr, 0, 5));
        ft_putstr(": ");
        while(i < 10)
            ft_putnbr(arr[i++]);
        ft_putstr("\n");
    }
    else
        printf("%s\n", GREY("int array"));
}