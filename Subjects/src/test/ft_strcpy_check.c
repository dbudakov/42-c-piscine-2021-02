#include "../../include/libft.h"

void ft_strcpy_check(void)
{
    int result = 0, i = 0;
    char *s1, *s2;
    s1 = malloc(100);
    s2 = malloc(100);
    while (i < 3)
    {
        s1[i] = '0';
        s2[i] = '0';
        i++;
    }
    ft_putstr("ft_strcpy: ");
    ft_putstr(" ");
    if (result == 0)
        if (ft_strcmp(strcpy(s1, "hello world"), ft_strcpy(s2, "hello world")) != 0)
            result = 1;
    if (result == 0)
        if (ft_strcmp(strcpy(s1, ""), ft_strcpy(s2, "")) != 0)
            result = 1;
    if (result == 0)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}