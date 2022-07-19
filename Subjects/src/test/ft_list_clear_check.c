#include "../../include/libft.h"

void free_fct(void *data);

void ft_list_clear_check(void)
{
    int i = 0;
    int size = 5;
    char *str = ft_strdup("other items");
    t_list *list = ft_create_elem(str);
    while(i++ < size)
        ft_list_push_front(&list, str);

    ft_list_clear(list, &free_fct);
    ft_putstr("ft_list_clear: ");
    printf("%s\n", GREY("clear operation"));
}