#ifndef _SQLIST_
#define _SQLIST_

#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
#define ERROR 0

    typedef struct
    {
        int *data;
        int length;
        int list_size;
    } sq_list;

    int init_list(sq_list *L);
    int insert_element(sq_list *L, int i, int e);
    int delete_element(sq_list *L, int i, int *e);
    int get_element(sq_list L, int i);
    int locate_element(sq_list L,int e);
    int length(sq_list L);
    void destoy_list(sq_list L);
    int is_empty(sq_list L);
    void print_list(sq_list L);

#endif