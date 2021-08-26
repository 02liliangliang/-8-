#include <stdio.h>
#include <stdlib.h>

void move(int *p,int k,int n)
{
    for (int i = k;i < n;i++)
    {
        p[i] = p[i+1];
    }
}

void print(int *p,int n)
{
    for (int i = 1;i <= n;i++)
    {
        printf("%d \t",p[i]);
    }
}

int main()
{
    int n;
    int i,j;

    printf("输入个数：");
    scanf("%d",&n);

    int *p = (int *)malloc(n * sizeof(int));
    for ( i = 1;i <= n;i++)
    {
        p[i] = i;
    }
    i = 0;j = 0;
    while(n)
    {
        i++;
        j++;
        if ( j == 3)
        {
            printf("%d 出列\n",*(p + i));
            move(p,i,n);
            n--;
            j = 0;
            i--;
        }
        if (i == n)
        {
            i = 0;
        }

    }
    printf("最后剩下%d",*(p+1));
}
