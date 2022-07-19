#include "../../include/libft.h"

int ft_is_alpha(char c)
{
    if (c > ('A' - 1) && c < ('z' + 1))
        return 1;
    return 0;
}