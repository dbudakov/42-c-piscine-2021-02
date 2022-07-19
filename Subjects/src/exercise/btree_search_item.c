#include "../../include/libft.h"



t_btree *btree_search_item(t_btree *root, void *data_ref, int (*cmpf)())
{
    t_btree *node;

    if (root != NULL)
    {
        btree_search_item(root->left, data_ref, cmpf);
        if (0 == cmpf(data_ref, root->item))
            node = root;
        btree_search_item(root->right, data_ref, cmpf);
    }
    return node;
}