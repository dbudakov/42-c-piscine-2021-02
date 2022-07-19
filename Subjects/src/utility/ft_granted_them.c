#include "../../include/libft.h"

int ft_granted_them(int granted, int lower)
{
    if (lower > granted)
        return -1;
    if (lower == granted)
        return 0;
    return 1;
}