#include "../../include/libft.h"

void ft_strlcat_check(void)
{
    int i = 0;
    int result = 0;
    char *str1, *str2, *str3;
    
    ft_putstr("ft_strlcat: ");
    str1 = malloc(100);
    str2 = malloc(100);
    while (i < 3)
    {
        str1[i] = '0';
        str2[i] = '0';
        i++;
    }
    if (result == 0)
        if (strlcat(str1, "", 1) == ft_strlcat(str2, "", 1))
            if (ft_strcmp(str1, str2) != 0)
                result = 1;
    if (result == 0)
        if (strlcat(str1, "", 20) == ft_strlcat(str2, "", 20))
            if (ft_strcmp(str1, str2) != 0)
                result = 1;
    if (result == 0)
        if (strlcat(str1, "hello world", 0) == ft_strlcat(str2, "hello world", 0))
            if (ft_strcmp(str1, str2) != 0)
                result = 1;
    if (result == 0)
        if (strlcat(str1, "hello world", 1) == ft_strlcat(str2, "hello world", 1))
            if (ft_strcmp(str1, str2) != 0)
                result = 1;
    if (result == 0)
        if (strlcat(str1, "hello world", 5) == ft_strlcat(str2, "hello world", 5))
            if (ft_strcmp(str1, str2) != 0)
                result = 1;
    if (result == 0)
        if (strlcat(str1, "hello world", 20) == ft_strlcat(str2, "hello world", 20))
            if (ft_strcmp(str1, str2) != 0)
                result = 1;
    if (result == 0)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}