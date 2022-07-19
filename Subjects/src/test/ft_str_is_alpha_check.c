#include "../../include/libft.h"

void ft_str_is_alpha_check(void)
{
    int result = 0;
    ft_putstr("ft_str_is_alpha: ");
    if (0 == result)
        if (1 != ft_str_is_alpha("abc"))
            result = 1;
    if (0 == result)
        if (0 != ft_str_is_alpha("123"))
            result = 1;
    if (0 == result)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}