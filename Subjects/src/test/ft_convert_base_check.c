#include "../../include/libft.h"



void ft_convert_base_check(void)
{
    int result = 0;
    char *str = NULL;
    ft_putstr("ft_convert_base: ");
    
    if ( 0 != ft_strcmp("64", ft_convert_base("1100100","01","0123456789ABCDEF")))
        result = 1;
    if ( 0 != ft_strcmp("99999", ft_convert_base("303237","poneyvif","0123456789")))
        result = 1;
    if ( 0 != ft_strcmp("0", ft_convert_base("0","01","0123456789ABCDEF")))
        result = 1;
    if ( 0 != ft_strcmp("1111100111", ft_convert_base("999","0123456789","01")))
        result = 1;
    if (0 == result)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}