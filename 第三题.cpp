#include <stdio.h>

void input(int *p)
{
    for (int i = 0;i < 10;i++)
    {
        scanf("%d",p + i);
    }
}

void output(int *p)
{
    for (int i = 0;i < 10;i++)
    {
        printf("%d \t",*(p + i));
    }
    printf("\n");
}

void change(int *p)
{
    int t1,t2;
    int max,min;
    int temp;
    t1 = t2 = 0;
    max = min = *p;
    for (int i = 0;i < 10;i++)
    {
        if ( max < *(p+i))
        {
            max = *(p+i);
            t1 = i;
        }
        if ( min > *(p+i))
        {
            min = *(p+i);
            t2 = i;
        }
    }
    if ( t1 != 9 )
    {
    temp = *(p + t1);
     *(p + t1) = *(p + 9);
     *(p + 9) = temp;
    }
    if ( t2 != 0 )
    {
        temp = *(p + t2);
        *(p + t2) = *p;
        *p = temp;
    }
}

int main()
{
    int a[10];
    int *p = a;
    input(p);
    output(p);
    change(p);
    output(p);
    return 0;
}
