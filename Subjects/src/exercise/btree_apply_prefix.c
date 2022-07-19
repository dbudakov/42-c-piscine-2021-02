#include "../../include/libft.h"

void btree_apply_prefix(t_btree *root, void (*applyf)())
{
    if (NULL != root)
    {
        applyf(root->item);
        btree_apply_prefix(root->left, applyf);
        btree_apply_prefix(root->right, applyf);
    }
}