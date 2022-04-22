#ifndef _QUEUE_
#define _QUEUE_

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define MAXSIZE 100


typedef struct {
    int *base;
    int front, rear;
}SqQueue;

void init(SqQueue Q);

int enqueue(SqQueue Q, int N);

int dequeue(SqQueue Q, int N);

int isEmpty(SqQueue Q);

int size(SqQueue Q);

int Head(SqQueue Q, int N);


#endif
