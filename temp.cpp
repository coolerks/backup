#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tao=1;
	int day;
	cin>>day;
	day-=1;
	while(day--)
	{
		tao=(tao+1)*2;
	}
	cout<<tao;
	return 0;
}