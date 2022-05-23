#include <stdio.h>
#include <stdlib.h>
#include "LinkedBinaryTree.h"

int main() 
{
    BinaryTree root;
    init(&root);
    createRoot(&root, 1);
    for(int i = 0; i < 5; i++)
        insert(&root, i);
    printf("PreOrder: ");
    PreOrder(root);
    printf("\n");
    printf("InOrder: ");
    InOrder(root);
    printf("\n");
    printf("PostOrder: ");
    PostOrder(root);
    printf("\n");
    return 0;
}