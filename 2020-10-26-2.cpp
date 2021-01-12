/*
 * @本段代码使用: C语言
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-26 19:01:32
 * @LastEditTime: 2020-10-26 19:28:19
 */
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<vector<int>> a(n);
        int temp, flag = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> temp;
                a[i].push_back(temp);
            }
            for (int j = 0; j < i; j++)
            {
                if (a[i][j] != 0)
                    flag = 0;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}