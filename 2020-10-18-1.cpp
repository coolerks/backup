/*
 * @本段代码使用: C语言
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-18 09:26:45
 * @LastEditTime: 2020-10-18 09:57:57
 */
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string ch;
    vector<int> a(4);
    string ch2="GPLT";
    getline(cin, ch);
    for (auto &c : ch)
    {
        if (c >= 'a' && c <= 'z')
            c -= 32;
        if(c=='G')
        {
            a[0]++;
        }
        if(c=='P')
        {
            a[1]++;
        }
        if(c=='L')
        {
            a[2]++;
        }
        if(c=='T')
        {
            a[3]++;
        }
    }
    
    while (a[0] || a[1] || a[2] || a[3])
    {
        for(int i=0;i<4;i++)
        {
            if(a[i]!=0)
            {
                cout<<ch2[i];
                a[i]--;
            }
                
        }
    }
    return 0;
}