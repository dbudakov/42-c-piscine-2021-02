#include "../../include/libft.h"

void ft_str_is_lowercase_check()
{
    int result = 0;
    ft_putstr("ft_str_is_lowercase: ");
    if (1 != ft_str_is_lowercase("abc"))
        result = 1;
    if (0 != ft_str_is_lowercase("ABC"))
        result = 1;
    if (0 == result)
        ft_result_output(SUCCESS);
    else 
        ft_result_output(FALSE);
}