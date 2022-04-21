#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"


int main()
{
    SqStack S;
    int n;
    initStack(S);
    push(S, 1);
    push(S, 2);
    push(S, 5);
    push(S, 3);
    push(S, 6);
    pop(S, n);
    top(S, n);
    size(S);
    return 0;
}