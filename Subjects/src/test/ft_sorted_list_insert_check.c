#include "../../include/libft.h"

void ft_sorted_list_insert_check(void)
{
    int output = 0;
    t_list *list = NULL;

    list = ft_create_elem("001");
    ft_list_push_back(&list, "002");
    ft_list_push_back(&list, "004");
    ft_list_push_back(&list, "005");
    ft_list_push_back(&list, "006");
    ft_sorted_list_insert(&list, "000", &ft_strcmp);
    ft_sorted_list_insert(&list, "003", &ft_strcmp);
    ft_sorted_list_insert(&list, "007", &ft_strcmp);


    ft_putstr("ft_sorted_list_insert: ");
    if (1 == output)
    {
        while (list -> next != NULL)
        {
            ft_putstr(list->data);
            ft_putstr(", ");
            list = list->next;
        }
        ft_putstr(list->data);
        ft_putstr("\n");
    }
    else 
        printf("%s\n", GREY("oversize output"));
}