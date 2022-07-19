#include "../../include/libft.h"

unsigned int ft_strlen(char *s)
{
    unsigned int len;
    len = 0;
    while(s[len] != '\0')
        len++;
    return len;
}
