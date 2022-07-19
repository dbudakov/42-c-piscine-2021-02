#include "../../include/libft.h"

void ft_strncat_check()
{
    int i = 0;
    char *str1, *str2, *str3;
    str1 = malloc(100);
    str2 = malloc(100);
    str3 = "hello";
    while (i < 3)
    {
        str1[i] = '0';
        str2[i] = '0';
        i++;
    }
    ft_putstr("ft_strncat: ");
    if (ft_strcmp(strncat(str1, str3, 3), ft_strncat(str1, str3, 3)) == 0)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}   