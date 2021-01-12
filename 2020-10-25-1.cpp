/*
 * @本段代码使用: C语言
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-25 10:42:03
 * @LastEditTime: 2020-10-25 10:42:39
 */
#include <iostream>
using namespace std;
#include <algorithm>
typedef struct Test
{
       int a;
       int b;
}t;
t test[100];

bool cmpare(const t &a, const t &b)            //const必须加，不然会错，目前不懂为啥。当return的是ture时，a先输出，所以示例中是升序
{
     return a.a < b.a;
}

int main()
{
    sort(test, test+ 100,cmpare);                      
    return 0;
}
