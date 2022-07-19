#include "../../include/libft.h"

void ft_strlowcase_check(void)
{
    int result = 0;
    char s1[] = {'A', 'B', 'C', '\0'};
    char s2[] = {'a', 'b', 'c', '\0'};
    ft_putstr("ft_strlowcase: ");
    if (0 != ft_strcmp("abc", ft_strlowcase(s1)))
        result = 1;
    if (0 != ft_strcmp("abc", ft_strlowcase(s2)))
        result = 1;
    if (0 == result)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}