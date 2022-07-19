#include "../../include/libft.h"

void ft_list_sort_check(void)
{
    int output = 0;
    t_list *list = NULL;

    list = ft_create_elem("002");
    ft_list_push_back(&list, "004");
    ft_list_push_back(&list, "001");
    ft_list_push_back(&list, "003");
    ft_list_push_back(&list, "001");
    ft_list_push_back(&list, "000");
    ft_list_sort(&list, &ft_strcmp);
    ft_putstr("ft_list_sort: ");
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