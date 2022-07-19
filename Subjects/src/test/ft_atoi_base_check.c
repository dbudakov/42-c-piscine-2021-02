#include "../../include/libft.h"

void ft_atoi_base_check()
{
    int result = 0;
    ft_putstr("ft_atoi_base: ");

    ft_putstr(" ");
    if (result == 0)
        if ( 1100100 != ft_atoi_base("100", "2"))
            result = 1;
    if (result == 0)
        if ( 10201 != ft_atoi_base("100", "3"))
            result = 1;
    if (result == 0)
        if ( 144 != ft_atoi_base("100", "8"))
            result = 1;
    if (result == 0)
        if ( 100 != ft_atoi_base("100", "10"))
            result = 1;                                                   
    if (0 == result)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}