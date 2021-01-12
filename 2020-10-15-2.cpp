/*
 * @本段代码使用: C语言
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-15 14:45:10
 * @LastEditTime: 2020-10-15 21:40:32
 */
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int pa,pb;
    vector<int>p(3),flag(2);
    cin>>pa>>pb;
    for(int i=0;i<3;i++)
    {
        cin>>p[i];
        flag[p[i]]++;
    }
    if(pa>pb&&flag[0]>0)
    {
        cout<<"The winner is a: "<<pa<<" + "<<flag[0];
    }
    else //if(pa<pb&&flag[1]==3)
    {
        cout<<"The winner is b: "<<pb<<" + "<<flag[1];
    }
    return 0;
}