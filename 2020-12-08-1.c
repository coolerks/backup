/*
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-12-08 10:08:37
 * @LastEditTime: 2020-12-11 20:53:08
 */
#include <stdio.h>
#include <stdlib.h>
int *a()
{
    int *p = malloc(sizeof(int) * 10);
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &p[i]);
    }
    return p;
}
int main()
{
    int *p=a();
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n\n\n\n%d",sizeof(p)/sizeof(int));
    return 0;
}