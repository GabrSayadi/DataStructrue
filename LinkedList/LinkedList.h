
#ifndef _LINKED_LIST_
#define _LINKED_LIST_

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

    typedef struct Node 
    {
        int data;
        struct Node *next;
    }Node , *link_list;


    int init_list(link_list *L);
    int insert(link_list L, int n, int data);
    int delete_data(link_list L, int n, int *data);
    int is_empty(link_list L);
    int length(link_list L);
    int get_data(link_list L, int index);
    int locate(link_list L, int data, int (*compare)(int, int));
    int compart(int a , int b );
    void create_list_first(link_list L, int n);
    void create_list_last(link_list L, int n);
    void print_list(link_list L);

#endif