#include "../../include/libft.h"

void ft_strcat_check()
{
    int i = 0;
    char *str1, *str2, *str3;

    ft_putstr("ft_strcat: ");
    str1 = malloc(100);
    str2 = malloc(100);
    while(i < 3)
    {
        str1[i] = '0';
        str2[i] = '0';
        i++;
    }
    str3 = "hello";
    if (ft_strcmp(strcat(str2, str3), ft_strcat(str1, str3)) == 0)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}