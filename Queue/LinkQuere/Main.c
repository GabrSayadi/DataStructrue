#include <stdio.h>
#include <stdlib.h>
#include "LinkedQueue.h"

int main()
{
    LinkQueue Q;
    init(&Q);
    int i;
    for(i = 0; i < 8; i++)
        enqueue(&Q,i);
    display(&Q);
    dequeue(&Q);
    dequeue(&Q);
    printf("Delete after:");
    display(&Q);
    printf("Head = %d \n", head(&Q));
    printf("Head = %d \n", isEmpty(&Q));
    printf("Head = %d \n", size(&Q));
    return 0;
}