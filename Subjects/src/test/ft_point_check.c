#include "../../include/libft.h"

void ft_point_check(void)
{
    ft_putstr("ft_point: ");
    if (0 == ft_point())
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}