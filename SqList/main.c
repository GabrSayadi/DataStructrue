#include <stdio.h>
#include "SqList.h"

int main() 
{
    sq_list L;
    int e ;
    int loc_e = 4;
    init_list(&L);
    insert_element(&L , 1, 6);
    insert_element(&L , 2, 5);
    insert_element(&L , 3, 4);
    printf("%d " , length(L));
    printf("%d " , is_empty(L));
    printf("%d ", locate_element(L,loc_e));
    printf("%d ", get_element(L, 1));
    print_list(L);
    delete_element(&L, 1 ,&e);
    print_list(L);
    destoy_list(L);
    return 0;
}