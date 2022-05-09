#include <stdio.h>
#include <stdlib.h>
#include "StackSq.h"

void init(SqStack s)
{
    s.top = -1;
    return;
}

void push(SqStack s, int x)
{
    if (s.top == MAXSIZE - 1)
    {
        printf("Stack is full!\n");
        return;
    }
    ++s.top;
    s.data[s.top] = x;
    return;
}

int pop(SqStack s, int *x)
{
    if (s.top == -1)
    {
        printf("Stack is empty!\n");
        return 0;
    }
    *x = s.data[s.top];
    s.top--;
    return *x;
}

int getTop(SqStack s)
{
    if (s.top == -1)
    {
        printf("Stack is empty!\n");
        return 0;
    }
    return s.data[s.top];
}

int isEmpty(SqStack s)
{
    if (s.top == -1)
        return 1;
    return 0;
}

int isFull(SqStack s)
{
    if (s.top == MAXSIZE - 1)
        return 1;
    return 0;
}

int size(SqStack s)
{
    return s.top + 1;
}
void printStack(SqStack s)
{
    int i;
    for (i = 0; i < size(s); i++)
    {
        printf("%d ", s.data[i]);
    }
    printf("\n");
    return;
}