/*
 * @本段代码使用: C语言
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-16 16:00:43
 * @LastEditTime: 2020-10-16 22:23:15
 */
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string ch;
    int n, flag = 0;
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++)
    {
        getline(cin, ch);
        cout << ch << endl;
        for (auto &c : ch)
            if (c != 'I')
                c = tolower(c);
        if (ch[0] == ' ')
        {
            for (int j = 0; j < ch.size() - 1; j++)
                ch[j] = ch[j + 1];
            ch[ch.size() - 1] = 0;
        }
        int k = 0, p = 0, cnt = 0;
        while (k < ch.size())
        {
            if (ch[k] != ' ')
                ch[p++] = ch[k++];
            else
            {
                ch[p++] = ch[k++];
                while (ch[k] == ' ')
                    k++;
            }
        }
        ch.erase(p);
        if (ch.find(" me ") != -1)
            ch.replace(ch.find(" me "), 4, " I ");
        if (ch.find("can you ") != -1)
            ch.replace(ch.find("can you "), 8, "I can ");
        if (ch.find(" can you ") != -1)
            ch.replace(ch.find(" can you "), 9, " I can ");
        if (ch.find(" could you ") != -1)
           ch.replace(ch.find(" could you "), 11, " I could ");
        if (ch.find("could you") != -1)
           ch.replace(ch.find("could you"), 9, "I could");
        if (ch.find(" I ") != -1)
            ch.replace(ch.find(" I "), 3, " you ");
        if (ch.find(" I") != -1)
            ch.replace(ch.find(" I"), 2, " you ");
        if (ch.find("?") != -1)
            ch.replace(ch.find("?"), 1, "!");
        cout << "AI: " << ch << endl;
        //getchar();
    }
    return 0;
}