#include "../../include/libft.h"

int ft_charstr(char *str, char c)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (c == str[i++])
            return 1;
    }
    return 0;
}