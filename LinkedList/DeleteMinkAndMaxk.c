#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

int deleteMinKAndMaxK(link_list L, int minK, int maxK)
{
    link_list p = L;
    link_list q;
    while (p->next->data <= minK)
    {
        p = p->next;
    }
    if (p->next)
    {
        q = p->next;
        while (q->data < maxK)
        {
            q = q->next;
        }
        p->next = q;
    }
    return 1;
}

int main()
{
    link_list L;
    int i, minK = 5, maxK = 9;
    init_list(&L);
    printf("minK = %d\n",minK);
    printf("maxK = %d\n",maxK);
    for (i = 1; i < 10; i++)
        insert(L, i, i);

    printf("Before: ");
    print_list(L);

    deleteMinKAndMaxK(L, minK, maxK);
    printf("After: ");
    print_list(L);
    return 0;
}