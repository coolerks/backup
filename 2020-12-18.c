#include <stdio.h>
#include <algorithm>
#include <vector>
#define N 100000 + 10
using namespace std;
int data[N];      // data用来存储输入的N个正整数
int left_flag[N]; // 用来标记数组中的每个元素是否大于它左边的所有元素
int righ_flag[N]; // 用来标记数组中的每个元素是否小于它右边的所有元素
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &data[i]);
    }
    int left_max = 0; // 由于输入的是N个不同的正整数，所以left_max初值设置为0即可
    for (int i = 0; i < n; ++i)
    {
        if (data[i] > left_max)
        {                       // 如果当前元素大于左边所有元素的最大值，也就是说当前元素大于它左边的所有元素
            left_max = data[i]; // 更新一下最大值
            left_flag[i] = 1;   // 标记一下这个元素
        }
    }
    int righ_min = 1000000000 + 1; // 由于输入的N个整数都不超过10^9，所以righ_min初值设置为10^9 + 1
    for (int i = n - 1; i >= 0; --i)
    {
        if (data[i] < righ_min)
        {                       // 如果当前元素小于右边所有元素的最小值，也就是说当前元素小于它右边的所有元素
            righ_min = data[i]; // 更新一下最大值
            righ_flag[i] = 1;   // 标记一下这个元素
        }
    }
    vector<int> answer;
    for (int i = 0; i < n; ++i)
    {
        if (left_flag[i] == 1 && righ_flag[i] == 1)
        { //如果它既大于左边的所有元素又小于右边的所有元素
            answer.push_back(data[i]);
        }
    }
    sort(answer.begin(), answer.end()); // 把所有可能的主元排一下序
    int count = answer.size();
    printf("%d\n", count); // 输出有多少个主元
    if (count == 1)
    {
        printf("%d\n", answer[answer.size() - 1]); // 如果只有一个，直接输出并且换行
    }
    else if (count > 1)
    {
        for (int i = 0; i < answer.size() - 1; ++i)
        {
            printf("%d ", answer[i]);
        }
        printf("%d\n", answer[answer.size() - 1]);
    }
    else
    {
        printf("\n"); // 本题的一个坑，没有主元的时候需要单独输出一个换行。
    }

    return 0;
}
