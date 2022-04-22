#include <stdio.h>
#include <stdlib.h>
#include "LinkedStack.h"

int main()
{
    LinkStack S;
    int N;
    init(S);
    push(S, 1);
    push(S, 4);
    push(S, 6);
    isEmpty(S);
    pop(S, N);
    top(S, N);
    return 0;
}
