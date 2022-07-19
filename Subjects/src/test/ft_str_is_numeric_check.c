#include "../../include/libft.h"

void ft_str_is_numeric_check()
{
    int result = 0;

    ft_putstr("ft_str_is_numeric: ");
    if (1 != ft_str_is_numeric("123"))
        result = 1;
    if (0 != ft_str_is_numeric("abc"))
        result = 1;
    if (0 != ft_str_is_numeric(""))
        result = 1;
    if (0 == result)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}
