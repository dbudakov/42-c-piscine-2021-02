#include "../../include/libft.h"

int ft_atoi(char *str)
{
    int i = 0;
    int negative = 0;
    int result = 0;

    if (str[0] == '-')
    {
        negative = 1;
        i++;
    }
    while(str[i] != '\0')
    {
        result = result * 10 + (str[i] - 48);
        i++;
    }
    if (negative)
        result = -result;
    return result;
}