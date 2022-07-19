#include "../../include/libft.h"

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i = 0, j = 0, len = 0;
    len = strlen(src);
    if (size != 0)
    {
        while ((src[j] != '\0') && (i < (size - 1)))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return len;
}