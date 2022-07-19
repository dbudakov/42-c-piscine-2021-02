#include "../../include/libft.h"

char ft_to_lower(char c)
{
    if (c > ('A' - 1) && c < ('Z' +1))
        return (c + ('a' - 'A'));
    return 0;
}