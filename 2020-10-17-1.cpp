/*
 * @本段代码使用: C语言
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-17 15:17:57
 * @LastEditTime: 2020-10-17 16:10:34
 */
#include<stdc++.h>
using namespace std;
int main()
{
    int n;
    char cht;
    cin >> cht >> n;
    getchar();
    string ch[100], ch2[100];
    for (int i = 0; i < n; i++)
    {
        getline(cin, ch[i]);
    }
    vector<vector<int>> a(n);
    vector<vector<int>> a2(n);
    int cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        for (char c : ch[i])
            if (c == ' ')
                a[cnt].push_back(0);
            else
            {
                a[cnt].push_back(1);
            }

        cnt++;
    }
    a2 = a;
    for (int i = 0; i < n; i++)
    {
        reverse(a[i].begin(), a[i].end());
    }
    if (a2 == a)
    {
        cout << "bu yong dao le" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < a[i].size(); j++)
            {
                if (a[i][j] == 0)
                    cout << " ";
                else
                {
                    cout << cht;
                }
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < a[i].size(); j++)
            {
                if (a[i][j] == 0)
                    cout << " ";
                else
                {
                    cout << cht;
                }
            }
            cout << endl;
        }
    }

    return 0;
}