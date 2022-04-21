#ifndef _LINK_STACK_
#define _LINK_STACK_

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2


typedef struct StackNode
{
    int data;
    struct StackNode *next; 
}StackNode , *LinkStack;

void init(LinkStack S);

int push(LinkStack S , int N);

int pop(LinkStack S, int N);

int top(LinkStack S, int N);

int isEmpty(LinkStack S);

#endif