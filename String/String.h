#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

#define MAXSIZE 300
typedef struct
{
    char *str;
    int length;
} String;

void initString(String *s);
int length(String s);
int compare(String s, String t);
void clearStr(String *s);
String concat(String s, String t);
int indexBF(String s, String t);
void getNext(String t, int next[]);
int indexKMP(String s, String t, int pos);

/*

    #define   BLOCKSIZE 100

    typedef struct StringNode
    {
        char str[BLOCKSIZE];
        struct StringNode *next;
    } StringNode , *LString;

    typedef struct
    {
        LString *head, *tail;
        int lenght;
    }String;


    _______  _________ __________
    a b c -> c d d ->   dhafda ->
    _______  _________ __________

*/

#endif 


