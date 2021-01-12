/*
 * @本段代码使用: C语言
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-21 18:54:42
 * @LastEditTime: 2020-10-21 20:14:40
 */
#include <iostream>
#include <vector>
using namespace std;
struct noname
{
    int a[1000][4] = {0};
    double ave = 0, sum = 0, cntt = 0;
} tian[10];
int main()
{
    int n, cnt = 0, flag = 0, temp;
    char ch;
    int hh, mm;
    cin >> n;
    while (cnt < n)
    {
        scanf("%d%*c%c%d:%d", &temp, &ch, &hh, &mm);
        if (tian[cnt].a[temp][0] == 0 && ch == 'S' && temp != 0)
        {
            tian[cnt].a[temp][1] = hh * 60 + mm;
            tian[cnt].a[temp][0]++;
        }
        else if (tian[cnt].a[temp][0] == 1 && ch == 'E' && temp != 0)
        {
            tian[cnt].a[temp][2] = hh * 60 + mm;
            tian[cnt].sum += tian[cnt].a[temp][2] - tian[cnt].a[temp][1];
            tian[cnt].a[temp][0] = tian[cnt].a[temp][1] = tian[cnt].a[temp][2] = 0;
            tian[cnt].cntt++;
        }
        else if (temp == 0)
        {
            if (tian[cnt].cntt == 0)
                cout << '0' << ' ' << '0' << endl;
            else
            {
                cout << tian[cnt].cntt << ' ';
                printf("%d", int(tian[cnt].sum / tian[cnt].cntt+.5));
                cout << endl;
            }
            cnt++;
        }
    }
    return 0;
}