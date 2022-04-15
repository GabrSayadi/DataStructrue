#include <stdio.h>
#include <stdlib.h>
#include "SqList.h"

int init_list(sq_list *L)
{
    L->data = (int *)malloc(LIST_INIT_SIZE * sizeof(int));
    if (!L->data)
        return -2;
    L->length = 0;
    L->list_size = LISTINCREMENT;
    return 1;
}

int insert_element(sq_list *L, int i, int e)
{
    if (i < 1 || i > L->length + 1)
        return -1;
    if (L->length >= L->list_size)
    {
        L->list_size += LISTINCREMENT;
        L->data = (int *)realloc(L->data, L->list_size * sizeof(int));
        if (!L->data)
            return -1;
    }
    int k = L->length - 1;
    for (; k >= i; k--)
        L->data[k + 1] = L->data[k];

    L->data[i - 1] = e;
    L->length++;
    return 1;
}

int delete_element(sq_list *L, int i, int *e)
{
    if (i < 0 || i > L->length - 1)
        return -1;
    int k = i - 1;
    for (; k < L->length - 1; k++)
        L->data[k] = L->data[k + 1];

    L->data[k + 1] = *e;
    L->length--;
    return *e;
}

int get_element(sq_list L, int i)
{
    if (i < 1 || i > L.length - 1)
        return -1;
    return L.data[i - 1];
}

int locate_element(sq_list L, int e)
{
    int i = 0;
    for (; i < L.length; i++)
        if (L.data[i] == e)
            return i + 1;
    return -1;
}

int length(sq_list L)
{
    return L.length;
}

void destoy_list(sq_list L)
{
    free(L.data);
    L.length = 0;
    L.list_size = 0;
    return;
}

int is_empty(sq_list L)
{
    if (L.length == 0)
        return 1;
    return 0;
}

void print_list(sq_list L)
{
    int i = 0;
    for (; i < L.length; i++)
        printf("%d ", L.data[i]);
    printf("\n");
    return;
}