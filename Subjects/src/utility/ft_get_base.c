#include "../../include/libft.h"

int ft_get_base(char *base)
{
    if (ft_strcmp("0123456789", base) == 0)
        return 10;
    if (ft_strcmp("01", base) == 0)
        return 2;
    if (ft_strcmp("0123456789ABCDEF", base) == 0)
        return 16;
    if (ft_strcmp("poneyvif", base) == 0)
        return 8;\
    return 0;
}