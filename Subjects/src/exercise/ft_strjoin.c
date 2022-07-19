#include "../../include/libft.h"

char *ft_strjoin(int size, char **strs, char *sep)
{
    size_t i = 0;
    size_t len = 0;
    char *str;

    while(i< size)
        len += strlen(strs[i++]);
    // ft_putnbr(len);
    str = (char *)malloc(sizeof(char) * (len + 1));
    
    i = 0;
    while(i < size)
    {
        ft_strcat(str, strs[i++]);
        if (i < size)
            ft_strcat(str, sep);
    }
    return str;
}