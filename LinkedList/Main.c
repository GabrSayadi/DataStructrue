#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

int main() 
{
    link_list L;
    int data , *j;
    init_list(&L);
    insert(L, 1, 1);
    insert(L, 2, 2);
    insert(L, 3, 3);
    insert(L, 4, 4);
    print_list(L);
    delete_data(L, 3, &data);
    printf("%d\n", data);
    print_list(L);
    printf("%d\n", get_data(L, 4));
    printf("%d\n", length(L));
    return 0;
}