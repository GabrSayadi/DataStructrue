#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

void merge_list(link_list L, link_list M)
{
    link_list p, q, r, s;
    p = L->next;
    q = M->next;
    s = (link_list)malloc(sizeof(Node));
    r = s;
    while (p && q)
    {
        if (p->data <= q->data)
        {
            r->next = p;
            r = p;
            p = p->next;
        }
        else
        {
            r->next = q;
            r = q;
            q = q->next;
        }
    }
    r->next = p ? p : q;
    free(L);
    free(M);
    printf("L + M :");
    print_list(s);
    return;
}

int main()
{
    link_list L;
    link_list M;
    int i , j ;
    init_list(&L);
    init_list(&M);
    for (int  i = 1; i < 5; i++)
        insert(L, i, i);
    j = 1;
    for (i = 5; i < 10; i++)
        insert(M, j++, i);
    
    printf("L : ");
    print_list(L);
    printf("M : ");
    print_list(M);
    merge_list(L, M);
    return 0;
}