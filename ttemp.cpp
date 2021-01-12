/*
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-11-11 18:52:21
 * @LastEditTime: 2020-11-11 22:07:29
 */
#include<stdio.h>
#include<algorithm>
using namespace std;

bool cmp(int a, int b){
	return a > b; 
}

void to_array(int a,char b[])//数字转字符串数组
{
	for(int i=0;i<4;i++){
		b[i] = a % 10 +'0';
		a /= 10;
	}
}
int main()
{
	char num[5];
	int n;
	scanf("%d", &n);
	do{
		to_array(n, num);
		int max, min;
		
		sort( num, num+4 );
		sscanf( num, "%d", &min);
		sort( num, num+4, cmp );
		sscanf( num, "%d", &max);
		printf("%04d - %04d = %04d\n", max, min, max-min);
		n = max-min;
	}while( n!=6174 && n!=0);
	
	return 0;
 } 
