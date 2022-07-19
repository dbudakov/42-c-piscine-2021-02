#include "../../include/libft.h"

int ft_str_is_numeric(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] > ('0' - 1) && str[i] < ('9' + 1))
            return 1;
        i++;
    }
    return 0;
}