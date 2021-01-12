/*
 * @本段代码使用: C语言
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-23 15:14:37
 * @LastEditTime: 2020-10-23 23:01:05
 */
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(100);
    vector<int> ai;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        ai.push_back(t);
        sum += t;
    }
    sum *= 10;
    int cnt = 1;
    //sort(ai.begin(), ai.end());
    for (int k = 0; k < 10; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < ai[i]; j++)
            {
                a[j].push_back(cnt);
                cnt++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<'#'<<i+1<<endl;
        int pp = 1;
        for (auto c : a[i])
        {
            cout << c << ' ';
            if (pp % 10 == 0)
                cout << endl;
            pp++;
        }
    }
    return 0;
}