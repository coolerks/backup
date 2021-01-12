#include <stdio.h>
int main()
{
    int n;
    char xingbie;
    double shengao;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%c%lf", &xingbie, &shengao);
        getchar();
        if (xingbie == 'F')
            printf("%.2f\n", shengao * 1.09);
        else if (xingbie == 'M')
            printf("%.2f\n", shengao / 1.09);
    }
    return 0;
}
