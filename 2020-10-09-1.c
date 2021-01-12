/*
 * @本段代码使用: C语言
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-09 15:01:45
 * @LastEditTime: 2020-10-09 16:59:15
 */
#include <stdio.h>
#include <string.h>
int main()
{
    char num[12];
    int arr[10] = {0}, count = 0, index[11], arr2[11];
    gets(num);
    int i = 0;
    while (num[i] != 0)
    {
        arr[num[i++] - '0'] = 1;
    }
    printf("int[] arr = new int[]{");
    for (int i = 9; i >= 0; i--)
        if (arr[i] == 1 && num[i] >= '0' && num[i] <= '9')
        {
            arr2[count] = i;
            if (count == 0)
                printf("%d", i);
            else
            {
                printf(",%d", i);
            }
            count++;
        }
    printf("};\n");
    printf("int[] index = new int[]{");
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (num[i] == arr2[j] + '0')
            {
                index[i] = j;
                break;
            }
        }
        if(i==0)
        printf("%d",index[i]);
        else
        {
            printf(",%d",index[i]);
        }
    }
    printf("};");
    return 0;
}