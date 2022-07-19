#include "../../include/libft.h"

void ft_is_prime_check(void)
{
    int result = 0;

    ft_putstr("ft_is_prime: ");

    if ( 1 != ft_is_prime(1))
        result = 1;
    if ( 0 != ft_is_prime(4))
        result = 1;
    if ( 0 != ft_is_prime(0))
        result = 1;
    if ( 1 != ft_is_prime(13))
        result = 1;
    if ( 0 != ft_is_prime(169))
        result = 1;
    if ( 0 != ft_is_prime(-1))
        result = 1;                                

    if (0 == result)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}