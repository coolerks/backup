#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b;
    cin >> a >> b;
    int yu;
    int shang;
    shang = (a[0] - '0') / b;
    yu = (a[0] - '0') % b;
    int flag = 1;
    if (shang != 0 && a.size() > 1 || a.size() == 1)
    {
        cout << shang;
        flag = 0;
    }
    for (int i = 1; i < a.size(); i++)
    {
        shang = (10 * yu + a[i] - '0') / b;
        yu = (10 * yu + a[i] - '0') % b;
        if (shang != 0 && flag)
        {
            cout << shang;
            flag = 0;
        }
        else if(flag==0)
            cout << shang;
    }
    return 0;
}