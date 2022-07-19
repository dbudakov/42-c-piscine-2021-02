#include "../../include/libft.h"

void ft_strupcase_check(void)
{
    int result = 0;
    char s1[] = {'a', 'b', 'c', '\0'};
    char s2[] = {'A', 'B', 'C', '\0'};

    ft_putstr("ft_strupcase: ");
    if (ft_strcmp("ABC", ft_strupcase(s1)))
        result = 1;
    if (ft_strcmp("ABC", ft_strupcase(s2)))
        result = 1;
    if (0 == result)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}