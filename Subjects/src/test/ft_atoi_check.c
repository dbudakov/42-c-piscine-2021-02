#include "../../include/libft.h"

void ft_atoi_check()
{
    int result = 0;
    ft_putstr("ft_atoi: ");
    if ((result == 0) && ft_atoi("0") != ft_atoi("0"))
        result = 1;
    if ((result == 0) && ft_atoi("18") != ft_atoi("18"))
        result = 1;
    if ((result == 0) && ft_atoi("-18") != ft_atoi("-18"))
        result = 1;
    if ((result == 0) && ft_atoi("2147483647") != ft_atoi("2147483647"))
        result = 1;
    if ((result == 0) && ft_atoi("-2147483648") != ft_atoi("-2147483648"))
        result = 1;
    if (result == 0)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}