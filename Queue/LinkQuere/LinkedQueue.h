#ifndef _LINKED_QUEUE_H_
#define _LINKED_QUEUE_H_


#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

typedef struct Node
{
    int data;
    struct node *next;
} QNode;

typedef struct Queue
{
    QNode *front;
    QNode *rear;
} LinkQueue;

void init(LinkQueue *q);
int enqueue(LinkQueue *q, int data);
int dequeue(LinkQueue *q);
int isEmpty(LinkQueue *q);
int head(LinkQueue *q);
int size(LinkQueue *q);
void display(LinkQueue *q);

#endif