#include "../../include/libft.h"

void ft_strcmp_check()
{
    ft_putstr("ft_strcmp: ");
    if (strcmp("123", "01") == ft_strcmp("123", "01"))
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}