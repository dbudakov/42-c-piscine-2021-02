#include "../../include/libft.h"

int ft_is_symbol(char c)
{
    if (c == '!')
        return 1;
    if (c == '\'')
        return 1;
    if (c == '#')
        return 1;
    if (c == '$')
        return 1;
    if (c == '%')
        return 1;
    if (c == '&')
        return 1;
    if (c == '(')
        return 1;
    if (c == ')')
        return 1;
    if (c == '*')
        return 1;
    if (c == '+')
        return 1;
    if (c == ',')
        return 1;
    if (c == '-')
        return 1;
    if (c == '.')
        return 1;
    if (c == '/')
        return 1;
    if (c == '{')
        return 1;
    if (c == '|')
        return 1;
    if (c == '}')
        return 1;
    if (c == '~')
        return 1;
    return 0;
}

