#include "../../include/libft.h"

void ft_strstr_check()
{
    int result = 0;
    ft_putstr("ft_strstr: ");
    if (result == 0)
        result = ft_strcmp(strstr("hey hello world", "hello"), ft_strstr("hey hello world", "hello"));
    if (result == 0)
        if (strstr("", "hello") != ft_strstr("", "hello"))
            result = 1;
    if (result == 0)
        result = ft_strcmp(strstr("", ""), ft_strstr("", ""));
    if (result == 0)
        result = ft_strcmp(strstr("hello", ""), ft_strstr("hello", ""));
    if (result == 0)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}