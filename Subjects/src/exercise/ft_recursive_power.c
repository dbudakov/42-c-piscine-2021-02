#include "../../include/libft.h"

int ft_recursive_power(int nb, int power)
{
    if (0 > nb)
        return 0;
    if (0 == nb)
        return 1;
    if (power > 1)
       nb = nb * ft_recursive_power(nb, power - 1);
    return nb;
}