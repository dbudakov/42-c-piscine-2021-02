#include "../../include/libft.h"

char *ft_strstr(char *str, char *to_find)
{   
    int i = 0;
    if (to_find[i] == '\0')
        return &str[i];
    while (str[i] != '\0' && ft_strncmp(&str[i], to_find, ft_strlen(to_find)) != 0)
        i++;
    if (str[i] == '\0')
        return NULL;
    return &str[i];
}