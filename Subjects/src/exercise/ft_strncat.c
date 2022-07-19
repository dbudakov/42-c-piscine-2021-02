#include "../../include/libft.h"

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i = 0, j = 0;
    while (dest[i] != '\0')
        i++;
    while((src[j] != '\0') && nb--)
        dest[i++] = src[j++];
    dest[i] = '\0';
    return dest;
}