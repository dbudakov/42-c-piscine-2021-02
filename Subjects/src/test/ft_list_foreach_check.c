#include "../../include/libft.h"

static void ft_putstr_void(void *str)
{
    char *buff= (char *)str;
    ft_putstr(buff);
}

void ft_list_foreach_check(void)
{
    int output = 0;
    t_list *list = NULL;

    list = ft_create_elem("first");
    ft_list_push_back(&list, ", ");
    ft_list_push_back(&list, "second");
    ft_list_push_back(&list, ", ");
    ft_list_push_back(&list, "third");
    ft_list_push_back(&list, ", ");
    ft_list_push_back(&list, "fourth");
    ft_list_push_back(&list, ", ");
    ft_list_push_back(&list, "fifth");
    ft_list_push_back(&list, ", ");
    ft_list_push_back(&list, "sixth");
    ft_list_push_back(&list, ", ");
    ft_list_push_back(&list, "seventh");
    ft_putstr("ft_list_foreach: ");
    if (1 == output)
        ft_list_foreach(list, &ft_putstr_void);
    else
        printf("%s\n", GREY("oversize output"));
}