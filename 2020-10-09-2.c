/*
 * @本段代码使用: C语言
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-09 20:04:23
 * @LastEditTime: 2020-10-09 22:44:51
 */
#include <stdio.h>
#include <math.h>
double main()
{
    double L, N, n, yu, digit;
    scanf("%lf %lf", &L, &N);
    n = L - 1; // n 题目保证字符串是存在的
    N = N - 1; // 即 N 肯定是小于 pow(26, n)，所以直接从 n - 1算

    while (1)
    {
        digit = floor(N / (pow(26, n))); // 将整数商部分存入 digit，即为对应为的位置偏移，同时要向下取整
        char b = 'z';                    // 这里是将字符 b 赋值字符 z，写在表达式里的 'z' 是 z 的 ASCII 码值
        printf("%c", b - (int)digit);    // ASCII码的得转换是整型运算
        yu = pow(26, n);                 // 如果在这里用 int 定义 yu 会丢失精度产生计算偏差
        N = (int)N % (int)yu;            // % 两边必须是整型变量
        n--;                             // 注意 n = 0 是要参与运算的，所以判定是 n 是否小于0
        if (n < 0)
            break;
    }
    return 0;
}