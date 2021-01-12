/*
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-29 18:56:45
 * @LastEditTime: 2020-10-29 19:28:53
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp;
    vector<int> max, maxi, maxj;
    cin >> n;
    int cnt = 0;
    int flag = 0;
    for (int i = 2; i <= int(sqrt(n)); i++)
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    if (flag)
    {
        for (int i = 2; i <= n / 2; i++)
        {
            cout << "***";
            temp = i;
            for (int j = i + 1; j <= n ; j++)
            {
                temp *= j;
                if (n % temp == 0)
                {
                    max.push_back(temp);
                    maxi.push_back(i);
                    maxj.push_back(j);
                    cnt++;
                }
            }
        }
    }
    else
    {
        cout << '1' << endl
             << n;
    }
    if (flag)
        cout << *(max_element(max.begin(), max.end()));
    cout << endl
         << "flag=" << flag << endl;
    return 0;
}