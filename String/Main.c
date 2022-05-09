#include <stdio.h>
#include <stdlib.h>
#include "String.h"

int main()
{
    String s, t;
    initString(&s);
    initString(&t);
    scanf("%s", s.str);
    scanf("%s", t.str);
    printf("%d \n", indexBF(s, t));
    printf("%d \n", indexKMP(s, t, 1));
    return 0;
}
