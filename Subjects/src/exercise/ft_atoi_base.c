#include "../../include/libft.h"

int ft_atoi_base_reqursion(int nbr, int base)
{
    int result = 0;
    if (nbr / base != 0)
        result = ft_atoi_base_reqursion(nbr / base, base);
    return result * 10 + (nbr % base);
}

int ft_atoi_base(char *str, char *base)
{
    return ft_atoi_base_reqursion(ft_atoi(str), ft_get_base(base));
}