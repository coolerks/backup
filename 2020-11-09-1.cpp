/*
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-11-09 18:40:10
 * @LastEditTime: 2020-11-09 20:58:14
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int len = 1;
    for (int i = 0; i < n; i++)
        len *= 2;
    vector<vector<int>> a(n);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
            a[i].push_back(1);
    }
    for (int i = 0; i < len; i++)
    {
        for (auto c : a[i])
            cout << c;
        cout << endl;
    }
    return 0;
}