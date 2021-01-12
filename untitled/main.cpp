/*
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-12-18 22:24:06
 * @LastEditTime: 2021-01-01 09:40:47
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n;
    cin >> n;
    n *= 2;
    if (n <= 11500&&n>=0)
        cout << 10;
    else if (n <= 27500&&n>=0)
        cout << 9;
    else if (n <= 43500&&n>=0)
        cout << 8;
    else if (n <= 59500&&n>=0)
        cout << 7;
    else
    {
        n-=59500;
        int cnt = 7;
        int sum = 155500 - 59500;
        int flag = sum / 5;
        while (n >= 0&&cnt>=0)
        {
            n -= flag;
            cnt--;
        }
        if (cnt <= 0)
            cnt = 0;
        cout << cnt;
    }
    cout<<endl;
    return 0;
}
