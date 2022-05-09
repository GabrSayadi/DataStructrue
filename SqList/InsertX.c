#include <stdio.h>
#include <stdlib.h>
#include "SqList.h"

int insertX(sq_list L , int x)
{
    if (L.length + 1 > L.list_size)
        return ERROR;
    
    L.length++;
    int i;
    for (i = L.length - 1; L.data[i] > x && i >= 0; i--)
        L.data[i + 1] = L.data[i];
    L.data[i + 1] = x;
    return 1;
}

int main() 
{
    sq_list L;
    int x;
    init_list(&L);
    insert_element(&L, 1, 1);
    insert_element(&L, 2, 2);
    insert_element(&L, 3, 3);
    insert_element(&L, 4, 4);
    
    printf("List :");
    print_list(L);

    printf("Enter x:");
    scanf("%d",&x);
    insertX(L , x);

    printf("List :");
    print_list2(L);
    return 0;
}