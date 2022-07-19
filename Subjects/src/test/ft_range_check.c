#include "../../include/libft.h"

void ft_range_check(void)
{
    int *arr;
    int i = 0;
    int output = 0;

    ft_putstr("ft_range: ");
    if (output)
    {
    arr = ft_range(5, 11);
    while(i < 10)
        ft_putnbr(arr[i++]);
        ft_putstr("\n");
    }
    else
        printf("%s\n", GREY("int array"));

}