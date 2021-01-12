/*
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-17 16:11:51
 * @LastEditTime: 2020-11-02 09:06:27
 */
#include <bits/stdc++.h>
using namespace std;
struct student
{
    string name;
    int score;
};
struct teacher
{
    string name;
    struct student arry[5];
};
void prinnt(struct teacher ci[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << ci[i].name << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "name:" << ci[i].arry[j].name << " "
                 << "score" << ci[i].arry[j].score << endl;
        }
    }
}
void shuru(struct teacher ci[3], int len)
{
    string ch = "ABCDEF";
    for (int i = 0; i < len; i++)
    {
        ci[i].name = "teacher_";
        
        ci[i].name += ch[i];
        cout<<ci[i].name;
        for (int j = 0; j < 5; j++)
        {
            ci[i].arry[j].name = "student";
            ci[i].arry[j].name += ch[j];
            ci[i].arry[j].score = 60;
        }
    }
}

int main()
{
    struct teacher a[3];
    int len = 3;
    shuru(a, len);
    prinnt(a, len);
    return 0;
}