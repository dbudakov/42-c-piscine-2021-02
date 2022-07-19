#include "../../include/libft.h"

char *ft_strupcase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] > ('a' - 1) && str[i] < ('z' + 1))
            str[i] = ft_to_upper(str[i]);
        i++;
    }
    return str;
}