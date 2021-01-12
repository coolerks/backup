/*
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-10-11 20:13:15
 * @LastEditTime: 2020-11-09 19:22:01
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a1[65],a2[65],b1[65],b2[65];
    scanf("%s",a1);
    scanf("%s",a2);
    scanf("%s",b1);
    scanf("%s",b2);
    int l1=strlen(a1);
    int l2=strlen(a2);
    int l3=strlen(b1);
    int l4=strlen(b2);
    int i=0,n=0,h=0,m;
    for(i=0; i<l1&&i<l2; i++)
    {
 
        if(a1[i]==a2[i])
        {
 
            if(n==0)
            {
                if(a1[i]>='A'&&a1[i]<='G')
                {
 
                    switch(a1[i])
                    {
 
                    case'A':
                        printf("MON ");
                        break;
                    case'B':
                        printf("TUE ");
                        break;
                    case'C':
                        printf("WED ");
                        break;
                    case'D':
                        printf("THU ");
                        break;
                    case'E':
                        printf("FRI ");
                        break;
                    case'F':
                        printf("SAT ");
                        break;
                    case'G':
                        printf("SUN ");
                        break;
                    }
                    n++;
                }
            }
            else
            {
 
                if(a1[i]>='0'&&a1[i]<='9')
                {
                    h=a1[i]-'0';
                    break;
                }
                else if(a1[i]>='A'&&a1[i]<='N')
                {
                    h=a1[i]-'A'+10;
                    break;
                }
 
            }
        }
 
    }
    for(i=0; i<l3&&i<l4; i++)
    {
 
        if(b1[i]==b2[i]&&(b1[i]>='a'&&b1[i]<='z'||b2[i]>='A'&&b2[i]<='Z'))
           {
            n=i;
            break;
           }
    }
    printf("%02d:%02d",h,n);
    return 0;
}