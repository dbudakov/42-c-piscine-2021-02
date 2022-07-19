#include "../../include/libft.h"

void ft_list_find_check(void)
{
    t_list *list = NULL;
    t_list *find = NULL;
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
    ft_putstr("ft_list_find: ");
    find = ft_list_find(list, "test_string", &ft_strcmp);
    
    if (0 == ft_strcmp("test_string", find->data))
        ft_result_output(SUCCESS);
    else
        ft_result_output(FALSE);

}