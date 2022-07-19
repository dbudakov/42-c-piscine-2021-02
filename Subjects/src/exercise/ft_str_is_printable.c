#include "../../include/libft.h"

int ft_str_is_printable(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] > (33 - 1) && str[i] < (126 + 1))
            return 1;
        i++;
    }
    return 0;
}