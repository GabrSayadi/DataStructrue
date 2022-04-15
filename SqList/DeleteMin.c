#include <stdio.h>
#include <stdlib.h>
#include "SqList.h"

int del_min(sq_list L , int data)
{
    if(L.length <= 0) 
        return 0;
    int min = 0 , i ;
    data = L.data[0];
    for(i = 0; i < L.length; i++)
        if(L.data[i] < data)
        {
            data = L.data[i];
            min = i;
        }
    
    delete_element(&L,min,&data);
}

int main()
{
    sq_list L;
    int data;
    init_list(&L);
    insert_element(&L,1,23);
    insert_element(&L,2,-2);
    insert_element(&L,3,233);
    insert_element(&L,4,124);
    int N = del_min(L,data);
    printf("%d ", N);
    return 0;
}