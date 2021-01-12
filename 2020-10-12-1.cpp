#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t;
    vector<int> num = {3, 5, 5, 3, 7, 7, 8, 8, 2, 5};
    sort(num.begin(), num.end());
    cout << "去重前:";
    for (int i = 0; i < num.size(); i++)
        cout << num[i] << ' ';
    cout << endl
         << "去重后：";
    unique(num.begin(),num.end());
    for (int i = 0; i < num.size(); i++)
        cout << num[i] << ' ';
    cout << len;
    return 0;
}