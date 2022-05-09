#include <stdio.h> 
#include <stdlib.h>
#include "StackSq.h"


int main()
{
    SqStack s;
    int i , x;
    init(s);
    for (i = 1; i < 5; i++)
        push(s, i);
    printf("s : ");
    printStack(s);
    pop(s, &x);
    printf("s : ");
    printStack(s);
    printf("Top : %d \n",getTop(s));
    return 0;
}
