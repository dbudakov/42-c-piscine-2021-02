#include "../../include/libft.h"

void ft_list_reverse_check(void)
{
    t_list *list;
    int output = 0;

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
    ft_list_reverse(&list);
    ft_putstr("ft_list_reverse: ");
    
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