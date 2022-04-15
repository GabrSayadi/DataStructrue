#include <stdio.h>
#include <stdlib.h>

typedef struct PNode
{
    float coef; // xi
    int expn;   // zhu
    struct PNode *next;
} PNode, *Polynomial;

void print_Pnode(Polynomial P);
void create_polyn(Polynomial P, int N)
{
    P = (Polynomial)malloc(sizeof(PNode));
    P->next = NULL;
    int count;
    for (count = 0; count <= N; count++)
    {
        Polynomial S = (Polynomial)malloc(sizeof(PNode));
        scanf("%f %d", &S->coef, &S->expn);
        Polynomial front = P;
        Polynomial q = P->next;
        while (q && q->expn < S->expn)
        {
            front = q;
            q = q->next;
        }
        S->next = q;
        front->next = S;
    }
}

void add_list(Polynomial P, Polynomial Q)
{
    Polynomial first = P->next;
    Polynomial last = Q->next;
    Polynomial res = first->next;

    while (first && last)
    {
        if (first->expn == last->expn)
            if (first->expn + last->expn != 0)
            {
                res->coef = first->coef + last->coef;
                Polynomial free_last = last;
                last = last->next;
                free(free_last);
            }
            else if (first->expn + last->expn == 0)
            {
                Polynomial free_node = first = last;
                first = first->next;
                last = last->next;
                free(free_node);
            }
            else if (first->expn < last->expn)
                res = first;
            else if (first->expn > last->expn)
                res = last;
    }
    res->next = first ? first : last;
    free(first);
    free(last);
    print_Pnode(res);
    return;
}

void print_Pnode(Polynomial P)
{
    Polynomial q = P;
    while (q)
    {
        printf("%d %f", q->expn, q->coef);
        q = q->next;
    }
    printf("\n");
    return;
}
