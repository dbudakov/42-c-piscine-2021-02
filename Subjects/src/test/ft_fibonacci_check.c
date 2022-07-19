#include "../../include/libft.h"

void ft_fibonacci_check(void)
{
    int result = 0;
    ft_putstr("ft_fibonacci: ");
    if (0 != ft_fibonacci(0))
        result = 1;
    if (3 != ft_fibonacci(5))
        result = 1;
    if (55 != ft_fibonacci(11))
        result = 1;        
    if (0 == result)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}