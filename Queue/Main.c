#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

int main()
{
    SqQueue Q;
    int N;
    init(Q);
    for (int i = 0; i < 5; i++)
    {
        enqueue(Q, i);
    }
    dequeue(Q, N);
    int x = Head(Q, N);
    printf("%d ", x);
    return 0;
}