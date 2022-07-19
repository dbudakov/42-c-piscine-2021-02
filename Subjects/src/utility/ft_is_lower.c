#include "../../include/libft.h"

int ft_is_lower(char c)
{
    if (c > ('a' - 1) && c < ('z' + 1))
        return 1;
    return 0;
}