/*
 * @本段代码使用: C语言
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-19 19:02:44
 * @LastEditTime: 2020-10-19 20:46:36
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    struct
    {
        int bith;
        string phone, name;
    } txl[11];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> txl[i].name >> txl[i].bith >> txl[i].phone;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (txl[i].bith > txl[j].bith)
            {
                txl[10] = txl[i];
                txl[i] = txl[j];
                txl[j] = txl[10];
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << txl[i].name << ' ' << txl[i].bith << ' ' << txl[i].phone << endl;
    return 0;
}