#include "../../include/libft.h"

int ft_non_printable(char c)
{
    if (c >= 0 && c < (32 + 1))
        return 1;
    if (c == 127)
        return 1;
    return 0;
}