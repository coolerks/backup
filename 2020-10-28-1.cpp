/*
 * @本段代码使用: C语言
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-28 19:07:33
 * @LastEditTime: 2020-10-28 20:30:52
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string shuzi = "abcdefghij", danwei = "SBQWY", num;
    cin >> num;
    int cnt = num.size(), flag = 0;
    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] != '0')
        {
            cout << shuzi[num[i] - '0'];
            {
                switch (cnt)
                {
                case 9:
                    cout << 'Y';
                    break;
                case 8:
                    cout << 'Q';
                    break;
                case 7:
                    cout << 'B';
                    break;
                case 6:
                    cout << 'S';
                    break;
                case 5:
                    cout << 'W';
                    break;
                case 4:
                    cout << 'Q';
                    break;
                case 3:
                    cout << 'B';
                    break;
                case 2:
                    cout << 'S';
                    break;
                }
            }
        }
        else
        {
            if (cnt == 5)
                cout << 'W';
            if (num[i - 1] != '0' && i - 1 >= 0 && num[num.size() - 1] != '0')
            {
                cout << 'a';
            }
            if (num[i] != '0' && num[i + 1] != '0')
            {
                cout << 'a';
            }
            if (num.size() == 1)
                cout << shuzi[num[i] - '0'];
        }

        cnt--;
    }
    return 0;
}