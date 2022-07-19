#include "../../include/libft.h"

void ft_list_add_before(t_list **begin_list, t_list *elem1, t_list *elem2)
{
    t_list *prev = *begin_list;

    if (*begin_list == elem1)
    {
        elem2->next = elem1;
        *begin_list = elem2;
    }
    else
    {
        while (prev -> next != elem1 && prev -> next != NULL)
            prev = prev -> next;
        elem2->next = elem1;
        prev ->next = elem2;
    }

}

void ft_list_add_after(t_list **begin_list, t_list *elem1, t_list *elem2)
{
    elem2->next = elem1->next;
    elem1->next = elem2;
}

void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
    t_list *prev = NULL;
    t_list *elem = NULL;
    t_list *list1 = *begin_list1;
    t_list *list2 = begin_list2;
    t_list *buff = NULL;
    
    while (list2 != NULL)
    {
        while(list2 != NULL && list1->next != NULL)
        {
            if (0 > cmp(list2->data, list1->data))
            {
                buff = list2;
                list2 = list2 -> next;
                ft_list_add_before(begin_list1, list1, buff);
            }
            list1 = list1 -> next;
        }
        if (list2 != NULL && 0 > cmp(list2->data, list1->data))
        {
            buff = list2;
            list2 = list2 -> next;
            ft_list_add_before(begin_list1, list1, buff);
        }
        if (list2 != NULL)
        {
            buff = list2;
            list2 = list2 -> next;
            ft_list_add_after(begin_list1, list1, buff);
        }
        list1 = *begin_list1;
    }
}