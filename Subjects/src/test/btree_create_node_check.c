#include "../../include/libft.h"

void btree_create_node_check(void)
{
    int output = 0;
    t_btree *node = btree_create_node("hello developers!");

    ft_putstr("btree_create_node: ");
    if (1 == output)
    {
        ft_putstr(node->item);
        ft_putstr("\n");
    }
    else
        printf("%s\n", GREY("oversize output"));
}