#include "../../include/libft.h"

void ft_recursive_factorial_check(void)
{
    int result = 0;

    ft_putstr("ft_recursive_factorial: ");
    if (1 != ft_recursive_factorial(0))
        result = 1;
    if (1 != ft_recursive_factorial(1))
        result = 1;
    if (3628800 != ft_recursive_factorial(10))
        result = 1;
    if (0 == result)
        ft_result_output(SUCCESS);
    else   
        ft_result_output(FALSE);
}