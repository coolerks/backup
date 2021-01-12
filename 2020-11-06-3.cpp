/*
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-11-06 20:51:49
 * @LastEditTime: 2020-11-06 20:55:47
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "12345";
    string s1 = s.substr(3);
    string s2 = s.substr(2, 4);
    cout << s1 << ' ' << s2;
    return 0;
}