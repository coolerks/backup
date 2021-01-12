/*
 * @本段代码使用: C语言
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-14 20:27:17
 * @LastEditTime: 2020-10-14 20:58:54
 */
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    string ch, max, min;
    cout << "Enter word:";
    getline(cin, ch);
    min = max = ch;
    while (ch.size() != 4)
    {
        if (max < ch)
            max = ch;
        if (min > ch)
            min = ch;
        cout << "Enter word:";
        getline(cin, ch);
    }
    cout << "Smallest word:" << min<<endl;
    cout << "Largest word:" << max;
    return 0;
}