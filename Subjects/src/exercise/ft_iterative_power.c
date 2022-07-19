#include "../../include/libft.h"

int ft_iterative_power(int nb, int power)
{
    int i = 1;
    int result = 1;
    
    if (0 > nb)
        return 0;
    if (0 == nb)
        return 1;
    while(i < power + 1)
    {
        result = result * nb;
        i++;
    }
    return result;
}