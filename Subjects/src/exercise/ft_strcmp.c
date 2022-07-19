#include "../../include/libft.h"

int ft_eq_char(char a, char b)
{
    if (a == b)
        return 1;
    return 0;
}

int ft_div_char(char a, char b)
{
    if (a > b)
        return 1;
    if (a < b)
        return -1;
    return 0;
}

int ft_strcmp(char *s1, char *s2)
{
    int result = 0;
    int i = 0; 
    while (result == 0 && (s1[i] != '\0' || s2[i] != '\0'))
    {
        result = ft_div_char(s1[i], s2[i]);
        i++;
    }
    return result;
}