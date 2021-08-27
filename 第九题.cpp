#include <stdio.h>

void zhuanzhi(int (*p)[3])
{
    for (int i = 0;i < 3;i++)
    {
        for (int j = 0;j <= i;j++)
        {
            int t = *(*(p + i) + j);
            *(*(p + i) + j) = *(*(p + j) + i);
            *(*(p + j) + i) = t;
        }
    }
}

void print(int (*p)[3])
{
    for (int i = 0;i < 3;i++)
    {
        for (int j = 0;j < 3;j++)
        {
            printf("%d\t",*(*(p + i) + j));
        }
        printf("\n");
    }
}


int main()
{
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int (*p)[3] = a;
    zhuanzhi(p);
    print(p);
    return 0;
}
