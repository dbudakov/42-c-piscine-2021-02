#include "../../include/libft.h"

int ft_str_is_lowercase(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if (str[i] > ('a' - 1) && str[i] < ('z' + 1))
            return 1;
        i++;
    }
    return 0;
}
