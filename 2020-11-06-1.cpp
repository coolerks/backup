#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<long long, int> tongji;
    long long maxhao = 0, max = 0, cnt = 1, n;
    cin >> n;
    while (n--)
    {
        long long temp1, temp2;
        cin >> temp1 >> temp2;
        tongji[temp1]++;
        tongji[temp2]++;
        if (max < tongji[temp1])
            max = tongji[temp1];
        if (max < tongji[temp2])
            max = tongji[temp2];
    }
    for (auto c : tongji)
        if (c.second == max && maxhao == 0)
            maxhao = c.first;
        else if (c.second == max)
            cnt++;
    if (cnt == 1)
        cout << maxhao << ' ' << max;
    else
        cout << maxhao << ' ' << max << ' ' << cnt;

    return 0;
}