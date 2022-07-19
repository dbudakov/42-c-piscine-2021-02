#include "../../include/libft.h"

char *ft_strcapitalize(char *str)
{
    int i = 0;
    int flag = 0;
    while(str[i] != '\0')
    {
        if ((ft_is_space(str[i]) != 1) && (flag == 0))
        {
            if (ft_is_lower(str[i]))
                str[i] = ft_to_upper(str[i]);
            flag = 1;
        }
        if ((ft_is_space(str[i]) != 0) || (ft_is_symbol(str[i]) != 0))
            flag = 0;
        i++;
    }
    return str;
}

