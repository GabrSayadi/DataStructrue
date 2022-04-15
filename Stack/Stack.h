#ifndef _STACK_
#define _STACK_

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define MAXSIZE 100

typedef struct
{
    int *base;
    int *top;
    int stackSize;
} SqStack;

int initStack(SqStack S);

int push(SqStack S, int N);

int pop(SqStack S, int N);

int top(SqStack S, int N);

int isEmpty(SqStack S);

void destory(SqStack S);

int size(SqStack S);

void clear(SqStack S);


#endif