#include "../../include/libft.h"

int ft_iterative_factorial(int nb)
{
    int i = 1;
    int result = 1;

    if (nb <= 0)
        return 0;
    while(i < (nb + 1))
        result = result * i++;
    return result;
}