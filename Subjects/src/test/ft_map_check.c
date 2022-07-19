#include "../../include/libft.h"

void ft_map_check(void)
{
    int *result = NULL;
    int tab[] = {0, 1, 2, 3, 4};
    int length = 5;
    int i = 0;

    ft_putstr("ft_tab_check: ");
    result = ft_map(tab, length, &ft_is_prime);
    while(i < length)
        ft_putnbr(result[i++]);
    free(result);
    ft_putstr("\n");
}