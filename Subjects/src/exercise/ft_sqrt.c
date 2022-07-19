#include "../../include/libft.h"

int ft_sqrt(int nb)
{
    int i= 1;
    if (0 > nb)
        return 0;
    while(nb > (i * i))
        i++;
    if (nb % i == 0 )
        return i;
    return 0;
}