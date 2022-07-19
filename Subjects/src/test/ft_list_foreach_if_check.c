#include "../../include/libft.h"

static void ft_putstr_void(void *str)
{
    char *buff= (char *)str;
    ft_putstr(buff);
}

void ft_list_foreach_if_check(void)
{
    t_list *list;
    int output = 0;

    list = ft_create_elem("first");
    ft_list_push_back(&list, ", ");
    ft_list_push_back(&list, "second");
    ft_list_push_back(&list, ", ");
    ft_list_push_back(&list, "test_string");
    ft_list_push_back(&list, ", ");
    ft_list_push_back(&list, "fourth");
    ft_list_push_back(&list, ", ");
    ft_list_push_back(&list, "fifth");
    ft_list_push_back(&list, ", ");
    ft_list_push_back(&list, "test_string");
    ft_list_push_back(&list, ", ");
    ft_list_push_back(&list, "seventh");
    ft_putstr("ft_list_foreach_if: ");
    
    if (1 == output)
    {
        ft_list_foreach_if(list, &ft_putstr_void, "test_string", &ft_strcmp);
    }
    else
        printf("%s\n", GREY("oversize output"));    
}