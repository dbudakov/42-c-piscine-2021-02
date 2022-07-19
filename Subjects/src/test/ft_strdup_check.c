#include "../../include/libft.h"

void ft_strdup_check(void)
{
    int result = 0;
    ft_putstr("ft_strdup: ");
    if (0 != ft_strcmp(strdup("hello, developer\n"), ft_strdup("hello, developer\n")))
        result = 1;

    if (0 == result)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);

}