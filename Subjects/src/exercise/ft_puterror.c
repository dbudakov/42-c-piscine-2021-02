#include "../../include/libft.h"

void ft_puterror(char *str)
{
    int i = 0;
    while(str[i] != '\0')
        write(2,&str[i++],1);
}