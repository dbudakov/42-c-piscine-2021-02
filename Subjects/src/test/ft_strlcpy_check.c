#include "../../include/libft.h"

void ft_strlcpy_check(void)
{
    int result = 0, i = 0;
    char *s1, *s2;
    s1 = malloc(100);
    s2 = malloc(100);
    ft_putstr("ft_strlcpy: ");
    while(i < 3)
    {
        s1[i] = '0';
        s2[i] = '0';
        i++;
    }
    if ((strlcpy(s1, "hello develop", 0) != ft_strlcpy(s2, "hello develop", 0)) || (0 != ft_strcmp(s1, s2)))
        result = 1;
    if ((strlcpy(s1, "", 0) != ft_strlcpy(s2, "", 0)) || (0 != ft_strcmp(s1, s2)))
        result = 1;
    if ((strlcpy(s1, "", 20) != ft_strlcpy(s2, "", 20)) || (0 != ft_strcmp(s1, s2)))
        result = 1;
    if ((strlcpy(s1, "hello develop", 1) != ft_strlcpy(s2, "hello develop", 1)) || (0 != ft_strcmp(s1, s2)))
        result = 1;
    if ((strlcpy(s1, "hello develop", 20) != ft_strlcpy(s2, "hello develop", 20)) || (0 != ft_strcmp(s1, s2)))
        result = 1;
    
    if (0 == result)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}