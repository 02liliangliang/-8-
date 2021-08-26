#include <stdio.h>
#include <stdlib.h>

void fuc(int *p,int n,int m)
{
    int *q = (int *)malloc( n * sizeof(int));
    int i;

    for ( i = 0;i < n - m;i++)
    {
        *(q + m + i) = *(p + i);
    }
    for ( i = 0;i < m;i++)
    {
        *(q + i) = *(p + n - m +i);
    }

    for(i = 0;i < n;i++)
    {
        *( p + i ) = *(q + i);
    }
    free(q);
}

int main()
{
    int n,m;
    printf("需要多少个整数？");
    scanf("%d",&n);
    printf("请输入这 %d 个数：",n);
    int *p = (int *)malloc( n * sizeof(int));
    for (int i = 0;i < n;i++)
    {
        scanf("%d",p+i);
        printf("%d  ",*(p+i));
    }
    printf("从哪个位置调整？");
    scanf("%d",&m);
    fuc(p,n,n - m);
    for (int i = 0;i < n;i++)
    {
        printf("%d  ",*(p+i));
    }
}
