#include <stdio.h>
#include <stdlib.h>
#include "LinkedQueue.h"

void init(LinkQueue *q)
{
    q->front = q->rear = NULL;
}

int enqueue(LinkQueue *Q, int N)
{
    QNode *p = (QNode *)malloc(sizeof(QNode));
    if (!p)
        return OVERFLOW;
    p->data = N;
    p->next = NULL;
    if (Q->rear == NULL)
        Q->front = Q->rear = p;
    else
    {
        Q->rear->next = p;
        Q->rear = p;
    }
    return OK;
}

int dequeue(LinkQueue *Q)
{
    if (Q->front == Q->rear)
        return ERROR;

    int N;
    QNode *p = Q->front;
    Q->front = Q->front->next;
    if (Q->rear == p)
        Q->rear = Q->front;
    N = p->data;
    free(p);
    return N;
}

int isEmpty(LinkQueue *Q)
{
    if (Q->front == Q->rear)
        return TRUE;
    return FALSE;
}

int head(LinkQueue *Q)
{
    if (Q->front == Q->rear)
        return ERROR;
    return Q->front->data;
}

int size(LinkQueue *Q)
{
    int count = 0;
    while (Q->front)
    {
        Q->front = Q->front->next;
        count++;
    }
    return count;
}

void display(LinkQueue *Q)
{
    QNode *p = Q->front;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
    return;
}