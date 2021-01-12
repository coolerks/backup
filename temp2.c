/*
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-25 11:02:34
 * @LastEditTime: 2020-11-08 11:20:50
 */
#include <stdio.h>
int strlen(char *ch)
{
    int len;
    for (len = 0; ch[len] != 0; len++)
        ;
    return len;
}
int main()
{
    char *ch = "hello world";
    printf("%d\n",strlen(ch));
   *ch = "goole";
    printf("%d",strlen(ch));
    return 0;
}