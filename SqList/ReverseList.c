#include <stdio.h>
#include <stdlib.h>
#include "SqList.h"

void reverse(sq_list L)
{
    int i , temp;
    for(i = 0 ; i < L.length / 2 ; i++)
    {   
        temp = L.data[i];
        L.data[i] = L.data[L.length - i - 1];
        L.data[L.length - i - 1] = temp;
    }
    print_list(L);
    return;
}