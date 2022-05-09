#include <stdio.h>
#include <stdlib.h>
#include "String.h"

void initString(String *s)
{
    s->str = (char *)malloc(sizeof(char) * MAXSIZE);
    s->length = 0;
}

int length(String s)
{
    return s.length;
}

int compare(String s, String t)
{
    int i;
    if (length(s) < length(t))
        return -1;
    if (length(s) > length(t))
        return 1;
    return 0;
}

void clearStr(String *s)
{
    free(s->str);
    s->length = 0;
    return;
}

String concat(String s, String t)
{
    String res = {NULL, 0};
    int i, len = s.length + t.length;
    res.str = (char *)malloc(sizeof(char) * len);
    for (i = 0; i < s.length; i++)
        res.str[i] = s.str[i];
    for (i = 0; i < t.length; i++)
        res.str[i + s.length] = t.str[i];
    res.length = len;
    free(s.str);
    free(t.str);
    return res;
}

int indexBF(String s, String t)
{
    int i = 1, j = 1;
    while (i <= s.length && j <= t.length)
    {
        if (s.str[i] == t.str[j])
        {
            i++;
            j++;
        }
        else
        {
            i = i - j + 2;
            j = 1;
        }
    }
    if (j > t.length)
        return i - t.length;
    return 0;
}
void getNext(String t, int next[])
{
    int i = 1, j = 0;
    next[1] = 0;
    while (i < t.length)
    {
        if (t.str[i] == t.str[j])
        {
            next[++i] = ++j;
        }
        else if (j > 0)
        {
            j = next[j];
        }
        else
        {
            next[++i] = 0;
        }
    }
}

int indexKMP(String s, String t, int pos)
{
    int next[MAXSIZE];
    getNext(t, next);
    int i = pos, j = 1;

    while (i <= s.length && j <= t.length)
    {
        if (s.str[i] == t.str[j])
        {
            i++;
            j++;
        }
        else
        {
            j = next[j];
        }
    }
    if (j > t.length)
        return i - t.length;
    return 0;
}
