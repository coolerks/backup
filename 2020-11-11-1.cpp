/*
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-11-11 18:45:07
 * @LastEditTime: 2020-11-13 20:35:49
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, p;
    cin >> n >> p;
    vector<int> num;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        num.push_back(t);
    }
    sort(num.begin(), num.end());
    auto max = num.rbegin();
    int i;
    for (i = 0; i < num.end(); i++)
    {
        if (*max <= num[i] * p)
            break;
    }
    return 0;
}
