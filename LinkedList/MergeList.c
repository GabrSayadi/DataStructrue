#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

void merge_list(link_list l_one, link_list l_two)
{
    link_list p, q, r, s;
    p = l_one->next;
    q = l_two->next;
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
    free(l_one);
    free(l_two);
    print_list(s);
}

int main()
{
    link_list L;
    link_list M;
    link_list N;
    init_list(&L);
    init_list(&M);
    insert(L, 1, 1);
    insert(L, 2, 2);
    insert(L, 3, 3);
    insert(L, 4, 4);
    insert(M, 1, 5);
    insert(M, 2, 6);
    insert(M, 3, 7);
    merge_list(L, M);
    return 0;
}