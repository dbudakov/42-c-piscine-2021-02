#include "../../include/libft.h"

void ft_strjoin_check(void)
{
    ft_putstr("ft_strjoin: ");
    char **strs = NULL;
    char *sep= NULL;
    int num = 0;
    int result = 0;

    strs = (char **)malloc(200);
    sep = (char *)malloc(10);

    num = 3;
    strs[0] = "hello";
    strs[1] = "good";
    strs[2] = "developer";
    sep = " ";

    if(0 != ft_strcmp("hello good developer", ft_strjoin(num, strs, sep)))
        result = 1;
    if (0 == result)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);
}