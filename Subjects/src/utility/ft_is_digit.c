#include "../../include/libft.h"

int ft_is_digit(char c)
{
    if (c > ('0' - 1) && c < ('9' + 1))
        return 1;
    return 0;
} 