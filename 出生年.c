#include <stdio.h>
int main()
{
    int year, n, year2, yearfen[4]={0}, cnt = 0, count[10] = {0}, flag = 0;//��ģ����ʱ���λ=0ʱ�����յ��ĵ���ֵҲ��0�������λ������
    scanf("%d%d", &year, &n);
    while (1)
    {
        year2 = year;//��year2���ֽ⣬Ŀ���ǲ����ƻ����Ҫ�����ֵ
        flag = 0;//ÿ������Ϊ0
        for (int i = 3; i >= 0; i--)
        {
            yearfen[i] = year2 % 10;//��ȡÿһλ�����֣���λ=0ʱ�����յ�����ֵ=0��Ҫ�Ӹ�λ����
            year2 /= 10;
            count[yearfen[i]]++;//count�����洢0��9�ĸ�������Ϊ��Χ����0-9�����������ټ�1������
        }
        for (int i = 0; i < 10; i++)
            if (count[i] > 0)
                flag++;//count�����洢0��9�ĸ�����Ĭ��ÿ�����ֶ���0�����䲻Ϊ0ʱ���ʹ�������־ʹ��ڣ����Ծͻ��в�ͬ�����ֳ���
        if (flag == n)
        {
            printf("%d %04d", cnt, year);
            break;
        }
        else
        {
            cnt++;//��������洢��������
            year++;
            for (int i = 0; i < 10; i++)
                count[i] = 0;//count�����洢0��9�ĸ���,��ÿ������Ϊ0
        }
    }
    return 0;
}
