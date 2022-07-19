#include "../../include/libft.h"

void ft_strcapitalize_check(void)
{
    int result = 0;
    char *str;
    str = malloc(100);
    ft_strcat(str,"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un");
    ft_putstr("ft_strcapitalize: ");
    if (ft_strcmp("Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un",ft_strcapitalize(str)) != 0)
        result = 1;
    if (0 == result)
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);

}