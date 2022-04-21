#include <stdio.h>
#include <stdlib.h>
#include "LinkedStack.h"

void init(LinkStack S)
{
    S = NULL;
    return;
}

int push(LinkStack S, int N)
{
    LinkStack p = (LinkStack*)malloc(sizeof(StackNode));
    if (!p)
        return OVERFLOW;
    p->data = N;
    p->next = S;
    S = p;
    return OK;
}

int pop(LinkStack S, int N)
{
    if (S == NULL)
        return ERROR;
    N = S->data;
    LinkStack p = S;
    S = S->next;
    free(p);
    return OK;
}

int top(LinkStack S, int N)
{
    if (!S)
        return ERROR;
    N = S->data;
    return N;
}

int isEmpty(LinkStack S)
{
    if (S == NULL)
        return TRUE;
    return FALSE;
}