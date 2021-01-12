/*
 * @本段代码使用: C语言
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-15 14:45:10
 * @LastEditTime: 2020-10-15 15:21:22
 */
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int ra,ca,rb,cb;
    cin>>ra>>ca;
    vector<vector<int>>a(ra,vector<int>(ca));
    for(int i=0;i<ra;i++)
    {
        for(int j=0;j<ca;j++)
            cin>>a[i][j];
    }
    cin>>rb>>cb;
    vector<vector<int>>b(rb,vector<int>(cb));
    for(int i=0;i<rb;i++)
    {
        for(int j=0;j<cb;j++)
            cin>>b[i][j];
    }
    if(ca==rb)
    {
        
    }
    else
    {
        cout<<"Error: "<<ca<<" != "<<rb;
    }
    return 0;
}