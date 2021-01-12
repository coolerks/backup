/*
 * @本段代码使用: C语言
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-10 19:41:07
 * @LastEditTime: 2020-10-10 20:24:13
 */
#include <stdio.h>
#include <stdlib.h>
int count;
void get(int (*p)[20], int m, int n)
{

    if (p[m][n] == 2)
    {
        p[m][n] = 1;
    }
    else if (p[m][n] == 1)
    {
        count++;
        p[m][n] = 0;
    }
}

int main()
{
    int M, N, x, y, k, i, j;
    int p2[400];
    char ch;
    int p[20][20];
    scanf("%d%d", &M, &N);
    scanf("\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            ch = getchar();
            if (ch == '#')
                p[i][j] = 2;
            else if (ch == '0')
                p[i][j] = 0;
        }
        scanf("\n"); /*或者用getchar();*/
    }
    scanf("%d", &k);
    for (i = 0; i < k; i++)
    {
        count = 0;
        scanf("%d%d", &x, &y);
        if (p[x][y] != 0)
        {
            count++;
            p[x][y] = 0;
        }
        if (((x - 1) < M) && ((x - 1) >= 0))
            get(p, x - 1, y);
        if (((y - 1) < N) && ((y - 1) >= 0))
            get(p, x, y - 1);
        if (((x + 1) < M) && ((x + 1) >= 0))
            get(p, x + 1, y);
        if (((y + 1) < N) && ((y + 1) >= 0))
            get(p, x, y + 1);
        p2[i] = count;
    }
    for (i = 0; i < k; i++)
    {
        printf("%d\n", p2[i]);
    }
    return 0;
}
