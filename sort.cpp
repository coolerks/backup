/*
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-25 21:24:49
 * @LastEditTime: 2020-12-03 15:33:11
 */
#include <bits/stdc++.h>

using namespace std;
bool hefa(string num)
{
    if (num.find(".") != num.rfind("."))
        return false;
    if (num.find(".") != -1)
    {
        int temp = num.find(".");
        temp++;
        if (num.size() - temp > 2)
            return false;
    }
    if (num.find("-") != num.rfind("-") && num.rfind("-") != 0)
        return false;
    for (auto c : num)
    {
        if (!((c >= '0' && c <= '9') || c == '-' || c == '.'))
            return false;
    }
    double n = fabs((stod(num)));
    if (n > 1000)
        return false;
    return true;
}
int main()
{
    int n;
    int cnt = 0;
    double sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (hefa(s))
        {
            sum += stod(s);
            cnt++;
        }
        else
        {
            cout << "ERROR: " << s << " is not a legal number\n";
        }
    }
    if (cnt == 0)
        cout << "The average of 0 numbers is Undefined";
    else if(cnt==1)
    {
        printf("The average of %d number is %.2f", cnt, sum / cnt);
    }
    else
    {
        printf("The average of %d numbers is %.2f", cnt, sum / cnt);
    }
    
    return 0;
}