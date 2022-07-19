#include "../../include/libft.h"

int ft_find_next_prime(int nb)
{
    int i = 2;


    if( 0 > nb)   
        return 0;
    if (0 == nb)
        return 0;
    nb++;
    while (nb)
    {
        while(nb > i)
        {
            if ( nb % i == 0)
                break;
            i++;
        }
        if (i == nb)
            break;
        nb++;
        i = 2;
    }
    return nb;
}