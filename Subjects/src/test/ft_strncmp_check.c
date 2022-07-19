#include "../../include/libft.h"

void ft_strncmp_check(void)
{
    ft_putstr("ft_strncmp: ");
    if (strncmp("hello0", "hello1", 3) == ft_strncmp("hello0", "hello1", 3))
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}