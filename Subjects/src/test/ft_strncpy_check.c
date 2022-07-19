#include "../../include/libft.h"

void ft_strncpy_check()
{
    ft_putstr("ft_strncpy: ");
    int result = 0;
    char *s1, *s2;
    s1 = malloc(100);
    s2 = malloc(100);
    if (result == 0)
        if (ft_strcmp(strncpy(s1, "hello develop", 4), ft_strncpy(s1, "hello develop", 4)) == 0)
            result = 0;
    if (result == 0)
        if (ft_strcmp(strncpy(s1, "", 4), ft_strncpy(s1, "", 4)) == 0)
                result = 0;
    if (0 == result)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}
