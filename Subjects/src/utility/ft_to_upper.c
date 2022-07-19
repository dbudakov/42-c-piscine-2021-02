#include "../../include/libft.h"

char ft_to_upper(char c)
{
    if (c > ('a' - 1) && c < ('z' + 1))
        return (c - ('a' - 'A'));
    return 0;
}