/*
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-03 13:52:50
 * @LastEditTime: 2020-11-25 20:46:43
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_sorted(int *a, int n)
{
    while (--n >= 1)
    {
        if (a[n] < a[n - 1])
            return false;
    }
    return true;
}

void shuffle(int *a, int n)
{
    int i, t, r;
    for (i = 0; i < n; i++)
    {
        t = a[i];
        r = rand() % n;
        a[i] = a[r];
        a[r] = t;
    }
}

void bogosort(int *a, int n)
{
    while (!is_sorted(a, n))
        shuffle(a, n);
}

int main()
{
    int numbers[] = {1, 10, 9, 7, 3, 100, 2, 56, 200, -52, 3, 99, 33, 177, -199, 0, 3, 100, 2, 56, 200, -52, 3, 99, 33, 177, -199, 0, 3, 100, 2, 56, 200, -52, 3, 99, 33, 177, -199, 0, 3, 100, 2, 56, 200, -52, 3, 99, 33, 177, -199, 0, 3, 100, 2, 56, 200, -52, 3, 99, 33, 177, -199, 0, 3, 100, 2, 56, 200, -52, 3, 99, 33, 177, -199, 0, 3, 100, 2, 56, 200, -52, 3, 99, 33, 177, -199, 0, 3, 100, 2, 56, 200, -52, 3, 99, 33, 177, -199, 0, 3, 100, 2, 56, 200, -52, 3, 99, 33, 177, -199, 0, 3, 100, 2, 56, 200, -52, 3, 99, 33, 177, -199, 0, 3, 100, 2, 56, 200, -52, 3, 99, 33, 177, -199, 0, 3, 100, 2, 56, 200, -52, 3, 99, 33, 177, -199, 0, 3, 100, 2, 56, 200, -52, 3, 99, 33, 177, -199, 0};
    int i;

    bogosort(numbers, sizeof(numbers) / sizeof(numbers[0]));
    for (i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
        printf("%d ", numbers[i]);
    printf("\n");
}
