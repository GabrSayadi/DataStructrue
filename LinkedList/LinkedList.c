#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"


int init_list(link_list *L)
{
    *L = (link_list)malloc(sizeof(Node));
    (*L)->next = NULL;
    return 0;
}


int insert(link_list L, int n, int data)
{
    int count = 0;
    link_list p = L;
    while (p && count < n - 1)
    {
        p = p->next;
        count++;
    }
    if (!p || count > n - 1)
        return ERROR;

    link_list q = (link_list)malloc(sizeof(Node));
    q->data = data;
    q->next = p->next;
    p->next = q;
    return OK;
}

int delete_data(link_list L, int n, int *data)
{
    int count = 0;
    link_list p = L;
    while (p && count < n - 1)
    {
        p = p->next;
        count++;
    }
    if (!p || count > n - 1)
        return ERROR;

    link_list q = p->next;
    p->next = q->next;
    *data = q->data;
    free(q);
    return *data;
}


int is_empty(link_list L)
{
    link_list p = L;
    if (p->next == NULL)
        return TRUE;
    return FALSE;
}

int length(link_list L)
{
    int count = 0;
    link_list p = L->next;
    while (p)
    {
        p = p->next;
        count++;
    }
    return count;
}

int get_data(link_list L, int index)
{
    int count = 1;
    link_list p = L->next;
    while (p->data != index)
    {
        p = p->next;
        count++;
    }
    if (!p || count > index)
        return ERROR;
    return index;
}

int locate(link_list L, int data, int (*compare)(int, int))
{
    int count = 0;
    link_list p = L->next;
    while (p)
    {
        if (compare(p->data, data))
            return count;
        p = p->next;
        count++;
    }
    return -1;
}

int compart(int a, int b)
{
    if (a > b)
        return TRUE;
    return FALSE;
}

void create_list_first(link_list L, int n)
{
    L = (link_list)malloc(sizeof(Node));
    L->next = NULL;
    int i;
    for (i = n; i > 0; i--)
    {
        link_list p = (link_list)malloc(sizeof(Node));
        printf("input a number:");
        scanf("%d", &p->data);
        p->next = L->next;
        L->next = p;
    }
    print_list(L);
    return;
}

void create_list_last(link_list L, int n)
{
    L = (link_list)malloc(sizeof(Node));
    L->next = NULL;
    int i;
    for (i = n; i > 0; i--)
    {
        link_list p = (link_list)malloc(sizeof(Node));
        printf("input a number:");
        scanf("%d", &p->data);
        p->next = NULL;
        link_list s = L;
        while (s->next)
            s = s->next;
        s->next = p;
    }
    return;
}
void print_list(link_list L)
{
    link_list p = L->next;
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

