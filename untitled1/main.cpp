/*
 * @Created by : SongXiaoxu
 * @Copyright © 2021年 by: 宋晓旭. All rights reserved
 * @Date: 2021-01-05 12:29:37
 * @LastEditTime: 2021-01-10 20:13:35
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
//    char *c = (char *)malloc(1000001);
//    fgets(c,sizeof(c),stdin);
//    int flag = 1;
//    int len = strlen(c);
//    for (int i = 0; i < len/2; i++)
//    {
//        if (c[i] != c[len - 1 - i])
//        {
//            flag = 0;
//        }
//    }
    string s;
    getline(cin,s);
    int flag = 1;
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - 1 - i])
            flag = 0;
    }
    if (flag)
    {
        printf("%d", s.size() - 1);
    }
    连接
    else
    {
        printf("%d", s.size());
    }
    return 0;
}