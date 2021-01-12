#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> ch(n), ch2;
    for (int i = 0; i < n; i++)
    {
        vector<int> ch2;
        cin >> ch[i];
    }
    for (int i = n - 1; i > n - 1 - m; i--)
    {
        ch2.push_back(ch[i]);
        ch.pop_back();
    }
    reverse(ch2.begin(),ch2.end());
    ch.insert(ch.begin(),ch2.begin(),ch2.end());
    int cnt=0;
    for (auto c : ch)
    {
        if (cnt == 0)
        {
            cout << c;
            cnt = 1;
        }
        else
        {
            cout << ' ' << c;
        }
    }
    return 0;
}