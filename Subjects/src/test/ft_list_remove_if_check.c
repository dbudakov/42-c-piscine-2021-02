#include "../../include/libft.h"

void ft_list_remove_if_check(void)
{
    t_list *list = NULL;
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

    ft_list_remove_if(&list, "test_string", &ft_strcmp, &free);

    ft_putstr("ft_list_remove_if: ");    
    if (1 == output)
    {
        while(list->next != NULL)
        {
            ft_putstr(list->data);
            list = list->next;
        }
        ft_putstr(list->data);
        ft_putstr("\n");
    }
    else
        printf("%s\n", GREY("oversize output"));
}