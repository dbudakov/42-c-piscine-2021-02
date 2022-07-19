#include "../../include/libft.h"

//33 126
void ft_str_is_printable_check()
{
    int result = 0;
    ft_putstr("ft_str_is_printable: ");
    if (1 != ft_str_is_printable("abc"))
        result = 1;
    if (0 != ft_str_is_printable(" "))
        result = 1;
    if (0 == result)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}