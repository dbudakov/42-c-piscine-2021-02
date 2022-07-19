#include "../../include/libft.h"

char *ft_strcpy(char *dest, char *src)
{
    int j = 0;
    while (src[j] != '\0')
    {
        dest[j] = src[j];
        j++;
    }
    dest[j] = '\0';
    return dest;
}