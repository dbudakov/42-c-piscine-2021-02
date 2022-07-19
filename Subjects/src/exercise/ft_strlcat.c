#include "../../include/libft.h"


unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int i = 0, j = 0, flag = 0;
    unsigned len, dlen, slen;
    dlen = strlen(dest);
    slen = strlen(src);
    if (dlen > size)
        len =  size + slen;
    else
        len =  slen + dlen;
    while (dest[i] != '\0')
        i++;
    while(i < size && src[j] != '\0')
    { 
        dest[i++] = src[j++];
        flag = 1;
    }
    if (len > strlen(dest))
        dest[i - flag] = '\0';
    dest[i] = '\0';
    return len;
}