#ifndef _SQ_STACK_H_
#define _SQ_STACK_H_

#define MAXSIZE 100

typedef struct
{
    int data[MAXSIZE];
    int top;
} SqStack;

void init(SqStack s);
void push(SqStack s, int x);
int pop(SqStack s, int *x);
int getTop(SqStack s);
int isEmpty(SqStack s);
int isFull(SqStack s);
int size(SqStack s);
void printStack(SqStack s);

#endif
