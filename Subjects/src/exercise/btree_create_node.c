#include "../../include/libft.h"

t_btree *btree_create_node(void *item)
{
    t_btree *node = NULL;

    node = (t_btree *)malloc(sizeof(t_btree));
    node->left = NULL;
    node->right = NULL;
    node->item = ft_strdup(item);

    return node;
}