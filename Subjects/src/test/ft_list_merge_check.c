#include "../../include/libft.h"

void ft_list_merge_check(void)
{
    int output = 0;
    t_list *list1 = NULL;
    t_list *list2 = NULL;

    list1 = ft_create_elem("first");
    ft_list_push_back(&list1, ", ");
    ft_list_push_back(&list1, "second ");
    ft_list_push_back(&list1, ", ");
    
    list2 = ft_create_elem("third");
    ft_list_push_back(&list2, ", ");
    ft_list_push_back(&list2, "fourth");
    
    ft_list_merge(&list1, &list2);
    ft_putstr("ft_list_merge: ");
    
    if (1 == output)
    {
        while (list1 -> next != NULL)
        {
            ft_putstr(list1->data);
            list1 = list1->next;
        }
        ft_putstr(list1->data);
        ft_putstr("\n");
    }
    else
        printf("%s\n", GREY("oversize output"));
}