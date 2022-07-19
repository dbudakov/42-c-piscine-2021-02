#include "../../include/libft.h"

void ft_readfile_err(char *file, int err)
{
    ft_puterror((char *)__func__);
    ft_puterror(": ");
    ft_puterror(file);
    ft_puterror(": ");
    ft_puterror(strerror(err));
    ft_puterror("\n");
}