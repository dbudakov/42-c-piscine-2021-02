#include "../../include/libft.h"

void ft_sqrt_check(void)
{
    int result = 0;

    ft_putstr("ft_sqrt: ");

    if (2 != ft_sqrt(4))
        result = 1;
    if (10 != ft_sqrt(100))
        result = 1;
    if (5 != ft_sqrt(25))
        result = 1;
    if (13 != ft_sqrt(169))
        result = 1;
    if (0 != ft_sqrt(167))
        result = 1;    
    if (0 != ft_sqrt(-1))
        result = 1;                      
    if (0 == result)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}