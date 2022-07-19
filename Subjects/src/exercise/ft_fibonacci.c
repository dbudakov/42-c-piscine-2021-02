#include "../../include/libft.h"

int ft_fib(int before, int current, int nb)
{
    if (nb > 1)
        current = ft_fib(current, current + before, nb - 1);
    return current;
}

int ft_fibonacci(int index)
{
    if (0 == index)
        return 0;
    if (0 > index)
        return -1;
    return ft_fib(0, 1, index - 1);
}