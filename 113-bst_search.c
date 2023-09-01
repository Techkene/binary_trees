#include "binary_trees.h"

/**
  * binary_search_tree - Search for value
  * @node: Pointer to the node
  *
  *Return: Pointer to the node containing a value equals to value or null
  */
bst_t *bst_search(const bst_t *tree, int value) {
    if(tree == NULL) {
    return NULL;
    }
    if (tree->n == value) {
        return(bst_t *)tree;
    } else if (value < tree->n) {
        return bst_search(tree->left, value);
    } else {
    return bst_search(tree->right, value);
    }
}
