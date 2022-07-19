#include "../../include/libft.h"

int ft_is_upper(char c)
{
    if (c > ('A' - 1) && c < ('Z' + 1))
        return 1;
    return 0;
}