#include "../../include/libft.h"

void ft_iterative_factorial_check(void)
{
    int result = 0;
    
    ft_putstr("ft_iterative_factorial: ");

    if (0 != ft_iterative_factorial(0))
        result = 1;
    if (720 != ft_iterative_factorial(6))
        result = 1;
    if (3628800 != ft_iterative_factorial(10))
        result = 1;
    if (0 == result)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}