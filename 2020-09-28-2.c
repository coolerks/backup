#include<stdio.h>
int main()
{
    int flag1=-1,flag2=-1,i,len,count=0,j;
    char ch[100],biaodian;
    gets(ch);
    for(len=0;ch[len]!=0;len++);
    for(i=len-1;i>=0;i--)
    {
        if((ch[i]==' '||ch[i]=='.'||ch[i]=='?')&&flag2==-1)
        {
            if(ch[i]=='.'||ch[i]=='?')
                biaodian=ch[i];
            flag2=i;
        }
       else if(ch[i]==' '&&flag1==-1&&flag2!=-1)
        {
            flag1=i;
        }
        if(flag2!=-1&&flag1!=-1)
        {
          // printf("\n\t||||flag1=%d-----flag2=%d|||||\n\t",flag1,flag2);
            for(j=flag1+1;j<=flag2;j++)
            {
                if(ch[i]=='.'||ch[i]=='?')
                    putchar(' ');
                else
                    putchar(ch[j]);
             //   printf("//%d//",j);
            }

            //putchar('\n');
            flag2=flag1;
            flag1=-1;
        }
        //printf("-%d-",i);
    }
    for(i=0;i<flag2;i++)
        putchar(ch[i]);
    putchar(biaodian);
    return 0;
}
