#include "../../include/libft.h"

void ft_split_check(void)
{
    int i = 0;
    int output = 1;
    char *str = NULL;
    char **strs = NULL;

    str = ft_strdup("hello developers,peace");
    ft_putstr("ft_split: ");
    if (1 == output)
    {
        strs = ft_split(str, ", ");
        while(i < 3)
        {
            ft_putstr(strs[i++]);
            if (i < 3)
                ft_putstr(", ");
        }
        ft_putstr("\n");
    }
    else
        printf("%s\n", GREY("char array poiter"));
}