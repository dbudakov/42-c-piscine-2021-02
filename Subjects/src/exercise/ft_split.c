#include "../../include/libft.h"

int ft_split_num_word(char *str, char *charset)
{
    int i = 0;
    int num = 0;

    while(1 != ft_is_alpha(str[i]))
        i++;
    while(0 != ft_charstr(charset, str[i]))
        i++;
    while(str[i] != '\0')
    {
        if (0 != ft_charstr(charset, str[i]))
        {
            num++;
            while(0 == ft_charstr(charset, str[i]))
                i++;
        }
        i++;        
    }
    if ((0 == ft_charstr(charset, str[i-1])) && str[i] == '\0')
        num++;
    // ft_putnbr(num);
    return num;
}

char *ft_split_get_word(char *str, char *charset)
{
    int i = 0;
    while(str[i] == '\0')
        i++;
    while(str[i] != '\0')
    {
        if (0 == ft_charstr(charset, str[i]))
            return &str[i];
        i++;
    }
    return NULL;
}

void ft_split_set_sep(char *str, char *charset, int len)
{
    int i = 0;
    char *ptr;
    char **result = NULL;

    while(str[i] != '\0')
    {
        if (ft_charstr(charset, str[i]) == 1)
            str[i] = '\0';
        i++;
    }
}

char **ft_split_get_strs(char *str, char *charset, int len, int num)
{
    int i = 0;
    int j = 0;
    char **strs = NULL;

    strs = (char **)malloc(sizeof(char*) * (num + 1));
    // j = len;
    while (i < len)
    {
        strs[j] = ft_split_get_word(&str[i], charset);
        i += strlen(strs[j++]) + 1;
    }
    
    strs[j] = NULL;
    return strs;
}

char **ft_split(char *str, char *charset)
{
    int count_str = 0;
    char **strs = NULL;
    char *buff = NULL;
    int len = 0;

    buff = ft_strdup(str);
    len = ft_strlen(str);
    count_str = ft_split_num_word(str, charset);
    ft_split_set_sep(buff, charset, len);
    strs = ft_split_get_strs(buff, charset, len, count_str);
    return strs;
}