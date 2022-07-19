#include "../../include/libft.h"

int ft_str_is_alpha(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] > 'A' && str[i] < 'z')
            return 1;
        i++;
    }
    return 0;
}