#include "../../include/libft.h"

char *ft_strdup(char *src)
{
    int i = 0;
    int len = 0;
    char *dest = NULL;

    len = strlen(src);
    dest = (char *)malloc(sizeof(char) * (len + 1));
    while(i < len)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}