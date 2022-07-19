#include "../../include/libft.h"

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int result = 0;
    int i = 0; 
    while (result == 0 && i < n && (s1[i] != '\0' || s2[i] != '\0'))
    {
        result = ft_div_char(s1[i], s2[i]);
        i++;
    }
    return result;
}
