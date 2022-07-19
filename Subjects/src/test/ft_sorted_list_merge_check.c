#include "../../include/libft.h"

void ft_sorted_list_merge_check(void)
{
    int output = 0;
    t_list *list1 = NULL;
    t_list *list2 = NULL;

    list1 = ft_create_elem("001");
    ft_list_push_back(&list1, "002");
    ft_list_push_back(&list1, "004");
    ft_list_push_back(&list1, "005");
    ft_list_push_back(&list1, "006");
    list2 = ft_create_elem("000");
    ft_list_push_back(&list2, "003");
    // ft_list_push_back(&list2, "008");
    // ft_list_push_back(&list2, "007");
    ft_sorted_list_merge(&list1, list2, &ft_strcmp);
    ft_putstr("ft_sorted_list_merge: ");
    if (1 == output)
    {
        while (list1 -> next != NULL)
        {
            ft_putstr(list1->data);
            ft_putstr(", ");
            list1 = list1->next;
        }
        ft_putstr(list1->data);
        ft_putstr("\n");
    }
    else 
        printf("%s\n", GREY("oversize output"));    
}