#include "../../include/libft.h"

void ft_ultimate_div_mod(int *a, int*b)
{
    int mod;
    mod  = *a % *b;
    *a = *a / *b;
    *b  = mod;
}