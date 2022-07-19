#include "../../include/libft.h"

void btree_insert_data(t_btree **root, void *item, int (*cmpf)())
{
    t_btree *parent = NULL;
    t_btree *current = NULL;
    t_btree *tmp_node = btree_create_node(item);

    if (*root == NULL)
        *root = tmp_node;
    else
    {
        current = *root;
        while(true)
        {
            parent = current;
            if (0 < cmpf(parent->item, tmp_node->item))
            {
                current = current->left;
                if (NULL == current)
                {
                    parent->left = tmp_node;
                    return;
                }
            }
            else
            {
                current = current -> right;
                if (NULL == current)
                {
                    parent->right = tmp_node;
                    return;
                }
            }
        }
    }
}