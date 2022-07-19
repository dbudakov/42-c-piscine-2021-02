#include "../../include/libft.h"

int ft_recursive_factorial(int nb)
{
    if (0 > nb)
        return 0;
    if (0 == nb)
        return 1;
    if (nb > 1)
        nb = nb * ft_recursive_factorial(nb - 1);
    return nb;
}