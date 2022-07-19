#include "../../include/libft.h"

void ft_find_next_prime_check(void)
{
    int result = 0;

    ft_putstr("ft_find_next_prime: ");
    if (2 != ft_find_next_prime(1))
        result = 1;
    if (0 != ft_find_next_prime(0))
        result = 1;
    if (0 != ft_find_next_prime(-1))
        result = 1;
    if (79 != ft_find_next_prime(73))
        result = 1;
    if (97 != ft_find_next_prime(89))
        result = 1;                        
    if (0 == result)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}