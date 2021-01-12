/*
 * @本段代码使用: C语言
 * @Created by : SongXiaoxu
 * @Copyright ? 2020年 b9y: 宋晓旭. All rights reserved
 * @Date: 2020-10-14 18:53:15
 * @LastEditTime: 2020-10-14 20:21:54
 */
struct sn
{
    char ch[20];
    int x, y;

} a = {"hello", .y = 1, .x = 2};
#include <stdio.h>
int main()
{
    struct sn *p;
    p=&a;
    printf("x=%d\ny=%d\nch=%s\n\n", a.x, a.y, a.ch);
    printf("x=%d\ny=%d\nch=%s",p->x,p->y,p->ch);
    return 0;
}