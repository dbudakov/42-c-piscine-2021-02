#include "../../include/libft.h"

void btree_apply_suffix(t_btree *root, void (*applyf)())
{
    if (NULL != root)
    {
        btree_apply_suffix(root->left, applyf);
        btree_apply_suffix(root->right, applyf);
        applyf(root->item);
    }
}