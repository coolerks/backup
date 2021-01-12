/*
 * @本段代码使用: C语言
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-18 10:00:35
 * @LastEditTime: 2020-10-18 11:05:30
 */
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    getchar();
    string ch;
    string ch2[100];
    getline(cin, ch);
    for (int i = 0; i < ch.size(); i++)
    {
        ch2[cnt++] += ch[i];
        if (cnt > n - 1)
            cnt = 0;
    }
    for(int i=cnt;i<n;i++)
    {
        ch2[i]+=' ';
    }
    for (int i = 0; i < n; i++)
        reverse(ch2[i].begin(), ch2[i].end());
    for (int i = 0; i < n; i++)
    {
        cout << ch2[i] << endl;
    }
    return 0;
}