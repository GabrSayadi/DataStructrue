#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

int concatList(link_list L, link_list p, link_list r)
{
    r = L;
    link_list q = L;
    while (q->next)
    {
        q = q->next;
    }
    q->next = p->next;
    printf("L + P List : ");
    print_list(r);
    return OK;
}

int main()
{
    link_list L, p , r;
    int i, j;
    init_list(&L);
    init_list(&p);
    init_list(&r);
    for (i = 1; i < 5; i++)
        insert(L, i, i);
    j = 1;
    for (i = 5; i < 10; i++)
        insert(p, j++, i);
    printf("L : ");
    print_list(L);
    printf("P : ");
    print_list(p);

    concatList(L, p, r);
    return 0;
}
