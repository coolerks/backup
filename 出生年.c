#include <stdio.h>
int main()
{
    int year, n, year2, yearfen[4]={0}, cnt = 0, count[10] = {0}, flag = 0;//在模除的时候高位=0时，接收到的的数值也是0，用整形会更方便
    scanf("%d%d", &year, &n);
    while (1)
    {
        year2 = year;//用year2来分解，目的是不会破坏最后要输出的值
        flag = 0;//每轮重置为0
        for (int i = 3; i >= 0; i--)
        {
            yearfen[i] = year2 % 10;//获取每一位的数字，高位=0时，接收到的数值=0，要从个位算起
            year2 /= 10;
            count[yearfen[i]]++;//count用来存储0到9的个数，因为范围就是0-9，所以无需再减1！！！
        }
        for (int i = 0; i < 10; i++)
            if (count[i] > 0)
                flag++;//count用来存储0到9的个数，默认每个数字都是0，当其不为0时，就代表该数字就存在，所以就会有不同的数字出现
        if (flag == n)
        {
            printf("%d %04d", cnt, year);
            break;
        }
        else
        {
            cnt++;//这个用来存储过多少年
            year++;
            for (int i = 0; i < 10; i++)
                count[i] = 0;//count用来存储0到9的个数,故每轮重置为0
        }
    }
    return 0;
}
