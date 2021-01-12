/*
 * @本段代码使用: C语言
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-27 16:29:44
 * @LastEditTime: 2020-10-27 22:47:54
 */
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n, cnt = 0, flag = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<vector<int>> b(n);
    int max = *(max_element(a.begin(), a.end()));
    for (auto c : a)
        if (c == max)
            flag++;
    vector<int> aa(a);
    sort(aa.begin(), aa.end());
    // if (n == 1)
    // {
    //     cnt = 1;
    //     for (int i = 0; i < a[0] * 10; i++)
    //     {
    //         b[0].push_back(cnt);
    //         cnt += 2;
    //     }
    // }
    // else
    // {
    //     for (int i = 0; i < max; i++)
    //     {
    //         if (flag > 1)
    //             for (int k = 0; k < 10; k++)
    //                 for (int j = 0; j < n; j++)
    //                 {
    //                     if (a[j] - 1 >= i)
    //                     {
    //                         b[j].push_back(++cnt);
    //                     }
    //                 }
    //         else if (flag == 1)
    //         {
    //             for (int k = 0; k < 10; k++)
    //                 for (int j = 0; j < n; j++)
    //                 {
    //                     if (a[j] - 1 >= i && i != max - 1)
    //                     {
    //                         b[j].push_back(++cnt);
    //                     }
    //                     else if (i>aa[n-2])
    //                     {
    //                         cnt += 2;
    //                         b[j].push_back(cnt);
    //                     }
    //                 }
    //         }
    //     }
    // }
    for (int i = 0; i < max; i++)
    {
        for (int k = 0; k < 10; k++)
            for (int j = 0; j < n; j++)
            {
                if (a[j] - 1 >= i && i < aa[n - 2])
                {
                    b[j].push_back(++cnt);
                }
                else if (i > aa[n - 2])
                {
                    cnt += 2;
                    b[j].push_back(cnt);
                }
            }
    }

    cout << "-------------\n";
    for(auto c:);
    cout << "--------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << '#' << i + 1 << endl;
        for (int j = 1; j <= 10 * a[i]; j++)
        {
            if (j % 10 == 1)
                cout << b[i][j - 1];
            else
            {
                cout << ' ' << b[i][j - 1];
            }
            if (j % 10 == 0)
                cout << endl;
        }
    }
    return 0;
}