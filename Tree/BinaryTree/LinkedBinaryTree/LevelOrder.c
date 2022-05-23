#include <stdio.h>
#include <stdlib.h>
#include "LinkedBinaryTree.h"
#include "LinkedQueue.h"

void LevelOrder(BinaryTree T)
{
    LinkQueue Q;
    init(&Q);
    BinaryTree p;
    if (T != NULL)
        enqueue(&Q, T);
    while (!isEmpty(&Q))
    {
        p = dequeue(&Q);
        printf("%d ", p->value);
        if (p->left != NULL)
            enqueue(&Q, p->left);
        if (p->right != NULL)
            enqueue(&Q, p->right);
    }
    return; 
}

