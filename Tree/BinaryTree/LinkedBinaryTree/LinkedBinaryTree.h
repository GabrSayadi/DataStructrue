#ifndef _LINKEDBINARYTREE_H_
#define _LINKEDBINARYTREE_H_

typedef struct BinaryTreeNode {
    int value;
    struct BinaryTreeNode *left  , *right;
} BinaryTreeNode, *BinaryTree;

void createRoot(BinaryTree root, int value);
void init(BinaryTree *tree);
void insert(BinaryTree *tree, int value);
void delete(BinaryTree *tree, int value);
void PreOrder(BinaryTree tree);
void PreOrder(BinaryTree tree);
void PostOrder(BinaryTree tree);
int treeDepth(BinaryTree tree);


#endif // _LINKEDBINARYTREE_H_