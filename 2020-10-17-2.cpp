/*
 * @本段代码使用: C语言
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-17 16:15:12
 * @LastEditTime: 2020-10-17 16:36:57
 */
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string ch;
    getline(cin, ch);
    int flag;
    int cnt = 0;
    flag = ch.find("6666666666");
    while (flag!= -1)
    {
        cnt = 0;
        if (flag != -1)
        {
            int i = flag;
            while (ch[i++] == '6')
                cnt++;
            ch.replace(flag, cnt, "27");
        }
        flag = ch.find("6666666666");
    }
    flag = ch.find("6666");
    while (flag!= -1)
    {
        cnt = 0;
        if (flag != -1)
        {
            int i = flag;
            while (ch[i++] == '6')
                cnt++;
            ch.replace(flag, cnt, "9");
        }
        flag = ch.find("6666");
    }
    cout << ch;
    return 0;
}