#include "../../include/libft.h"

int ft_div_char(char a, char b)
{
    if (a > b)
        return 1;
    if (a < b)
        return -1;
    return 0;
}