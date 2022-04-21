#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

int initStack(SqStack s)
{
    s.base = (int *)malloc(MAXSIZE * sizeof(int));
    if (!s.base)
        return OVERFLOW;
    s.top = s.base;
    s.stackSize = MAXSIZE;
    return OK;
}

int push(SqStack s, int n)
{
    if (s.top - s.base >= s.stackSize)
        return ERROR;
    *s.top++ = n;
    return OK;
}

int pop(SqStack s, int n)
{
    if (s.top == s.base)
        return ERROR;
    n = *--s.top;
    return OK;
}

int top(SqStack s, int n)
{
    if (s.top == s.base)
        return ERROR;
    n = *(s.top - 1);
    return OK;
}

int isEmpty(SqStack s)
{
    if (s.top == s.base)
        return TRUE;
    return FALSE;
}

void destory(SqStack s)
{
    if (s.base)
    {
        s.top == s.base;
        free(s.base);
        s.stackSize = 0;
    }
    return;
}

int size(SqStack s)
{
    return s.top - s.base;
}

void clear(SqStack s)
{
    if (s.base)
        s.top = s.base;
    return;
}
