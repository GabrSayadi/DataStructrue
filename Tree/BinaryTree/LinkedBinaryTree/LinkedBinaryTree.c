#include <stdio.h>
#include <stdlib.h>
#include "LinkedBinaryTree.h"

BinaryTree T;
void init(BinaryTree T) 
{
    T = NULL;
    return;
}

void createRoot(BinaryTree T, int value)
{
    T = (BinaryTree *)malloc(sizeof(BinaryTreeNode));
    T->value = 1;
    T->left = NULL;
    T->right = NULL;
    return;
}

void insert(BinaryTree T ,int value)
{
    BinaryTree p = T;
    p = (BinaryTree*)malloc(sizeof(BinaryTreeNode));
    p->value = value;
    p->left = NULL;
    p->right = NULL;
    root->left = p;
    return;
}


void PreOrder(BinaryTree T)
{
    if (T != NULL)
    {
        printf("%d ", T->value);
        PreOrder(T->left);
        PreOrder(T->right);
    }
    return;
}

void InOrder(BinaryTree T)
{
    if (T != NULL)
    {
        InOrder(T->left);
        printf("%d ", T->value);
        InOrder(T->right);
    }
    return;
}

void PostOrder(BinaryTree T)
{
    if (T != NULL)
    {
        PostOrder(T->left);
        PostOrder(T->right);
        printf("%d ", T->value);
    }
    return;
}

int treeDepth(BinaryTree T)
{
    if (T == NULL)
        return 0;
    int left = treeDepth(T->left);
    int right = treeDepth(T->right);
    return left > right ? left + 1 : right + 1;
}


int  countNodes(BinaryTree T)
{
    if (T == NULL)
        return 0;
    int left = countNodes(T->left);
    int right = countNodes(T->right);
    return left + right + 1;
}


int leafCount(BinaryTree T)
{
    if (T == NULL)
        return 0;
    if (T->left == NULL && T->right == NULL)
        return 1;
    return leafCount(T->left) + leafCount(T->right);
}

void revolute(BinaryTree T)
{
    BinaryTree temp  = T->left;
    T->left = T->right;
    T->right = temp;
    if (T->left)
        revolute(T->left);
    if (T->right)
        revolute(T->right);
    return;
}
