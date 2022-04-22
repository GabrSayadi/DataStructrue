#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

void init(SqQueue Q)
{
    Q.base = (int *)malloc(MAXSIZE * sizeof(int));
    if (!Q.base)
    {
        printf("OVERFLOW");
        return;
    }
    Q.front = Q.rear = 0;
    return;
}

int enqueue(SqQueue Q, int N)
{
    if ((Q.rear + 1) % MAXSIZE == Q.front)
        return ERROR;
    Q.base[Q.rear] = N;
    Q.rear = (Q.rear + 1) % MAXSIZE;
    return OK;
}

int dequeue(SqQueue Q, int N)
{
    if (Q.rear == Q.front)
        return ERROR;
    N = Q.base[Q.front];
    Q.front = (Q.front + 1) % MAXSIZE;
    return OK;
}

int isEmpty(SqQueue Q)
{
    if (Q.front == Q.rear)
        return TRUE;
    return FALSE;
}

int size(SqQueue Q)
{
    return (Q.front - Q.rear + MAXSIZE) % MAXSIZE;
}

int Head(SqQueue Q, int N) 
{
    if(Q.front != Q.rear)
        N = Q.base[Q.front];
    return N;
}
