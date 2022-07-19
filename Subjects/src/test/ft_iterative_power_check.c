#include "../../include/libft.h"

void ft_iterative_power_check(void)
{
    int result = 0;
    ft_putstr("ft_iterative_power: ");
    if (1 != ft_iterative_power(0, 2))
        result = 1;
    if (0 != ft_iterative_power(-100, 2))
        result = 1;
    if (1771561 != ft_iterative_power(121, 3))
        result = 1;
    if (0 == result)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}