#include "../../include/libft.h"

char *ft_strlowcase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] > ('A' - 1) && str[i] < ('Z' + 1))
            str[i] = ft_to_lower(str[i]);
        i++;
    }
    return str;
}