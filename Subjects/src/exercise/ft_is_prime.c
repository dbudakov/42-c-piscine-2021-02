#include "../../include/libft.h"

int ft_is_prime(int nb)
{
    int i = 2;
    if (0 == nb)
        return 0;
    if (0 > nb)
        return 0;
    if (1 == nb)
        return 1;
    while(nb % i != 0)
        i++;
    if (i != nb)
        return 0;
    return 1;
}