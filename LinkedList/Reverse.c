#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"


int Reverse(link_list L)
{
    link_list p , q;
    p = L->next;
    L->next = NULL;
    while (p)
    {   
        q = p->next;
        p->next = L->next;
        L->next = p;
        p = q;
    }
    printf("Reverse List : ");
    print_list(L);
    return OK;
}


int main() 
{
    link_list L;
    int i;
    init_list(&L);
    for (i = 1; i < 5; i++)
        insert(L, i, i);
    printf("L : ");
    print_list(L);
    Reverse(L);
    return 0;
}
