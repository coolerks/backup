/*
 * @本段代码使用: C语言
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-16 22:29:01
 * @LastEditTime: 2020-10-16 23:28:20
 */
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    string ch;
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        getline(cin, ch);
        int flag1 = ch.find(",");
        int flag2 = ch.find(".");
        int flag3 = ch.find("ong");
        int flag4 = ch.rfind("ong");
        if (flag1 - 3 != flag3)
            flag = 0;
        if (flag2 - 3 != flag4)
            flag = 0;
        if (flag)
        {
            int j = flag4;
            string temp2;
            int cnt = 0;
            while (cnt != 3)
            {
                if (ch[j--] == ' ')
                    cnt++;
            }

            for (int k = j + 1; k <= flag2; k++)
                temp2.push_back(ch[k]);
            ch.replace(ch.find(temp2), temp2.size(), " qiao ben zhong.");
            cout << ch << endl;
        }
        else
        {
            cout << "Skipped" << endl;
        }
    }
    return 0;
}