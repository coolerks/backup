#include <stdio.h>
#include<stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char s[99];
    int len;
} string;

bool substr(string s, string *s2, int pos, int len)
{
    if (pos + len - 1 > s.len)
        return false;
    int cnt = 0;
    for (int i = pos; i < pos + len; i++)
        s2->s[cnt++] = s.s[i];
    s2->s[cnt] = 0;
    return true;
}

int strcmpp(string s, string s2)
{
    for (int i = 0; i < (s.len < s2.len ? s.len : s2.len); i++)
        if (s.s[i] != s2.s[i])
            return s.s[i] - s2.s[i];
    return s.len - s2.len;
}

bool find(string s, string sf, int *pos)
{
    string sf2;
    sf2.len=sf.len;
    for (int i = 0; i < s.len; i++)
    {
        if (substr(s, &sf2, i, sf.len))
        {
            if (strcmpp(sf, sf2) == 0)
            {
                *pos = i;
                return true;
            }
        }

    }
    return false;
}

int main()
{

    string str;
    strcpy(str.s, "admin1");
    str.len = 6;
    string poss;
    strcpy(poss.s, "dmin");
    poss.len = 4;
    int pos;
    if (find(str, poss, &pos))
        printf("%d", pos);
    else
        printf("Not find");
    return 0;
}