#include "../../include/libft.h"

int ft_str_is_uppercase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] > ('A' - 1) && str[i] < ('Z' + 1))
            return 1;
        i++;
    }
    return 0;
}