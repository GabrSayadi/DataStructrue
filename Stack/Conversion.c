#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

void conversion()
{
    SqStack S;
    int N;
    initStack(S);
    scanf("%d ", &N);
    while (N)
    {
        push(S, N % 8);
        N = N / 8;
    }
    while (!isEmpty(S))
    {
        int e;
        pop(S, e);
        printf("%d ", e);
    }
    return;
}
