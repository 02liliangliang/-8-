#include<stdio.h>
int main()
{
    printf("将一个5*5的矩阵中最大的元素放在中心，四个角分别放四个最小的元素\n\n");
    void change(int *p);
    int a[5][5]={{35,34,33,32,31},{30,29,28,27,26},
    {25,24,23,22,21},{20,19,18,17,16},{15,14,13,12,11}};
    int *p;
    int i;
    int j;
    printf("   原矩阵为：\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    p=&a[0][0];
    change(p);
    printf("   处理后的矩阵为:\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void change(int *p)
{
    int i;
    int j;
    int temp;
    int *pmax;
    int *pmin;
    pmax=p;
    pmin=p;
    for(i=0;i<5;i++)
    {
        for(j=i;j<5;j++)
        {
            if(*pmax<*(p+5*i+j))
            {
                pmax=p+5*i+j;
            }
            if(*pmin>*(p+5*i+j))
            {
                pmin=p+5*i+j;
            }
        }
    }
    temp=*(p+12);
    *(p+12)=*pmax;
    *pmax=temp;
    temp=*p;
    *p=*pmin;
    *pmin=temp;
    pmin=p+1;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(((p+5*i+j)!=p)&&(*pmin>*(p+5*i+j)))
            {
                pmin=p+5*i+j;
            }
        }
    }
    temp=*pmin;
    *pmin=*(p+1);
    *(p+1)=temp;
    pmin=p+2;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(((p+5*i+j)!=p)&&((p+5*i+j)!=(p+1))&&(*pmin>*(p+5*i+j)))
            {
                pmin=p+5*i+j;
            }
        }
    }
    temp=*pmin;
    *pmin=*(p+2);
    *(p+2)=temp;
    pmin=p+3;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(((p+5*i+j)!=p)&&(p+5*i+j)!=(p+1)&&(p+5*i+j)!=(p+2)&&(*pmin>*(p+5*i+j)))
            {
                pmin=p+5*i+j;
            }
        }
    }
    temp=*pmin;
    *pmin=*(p+24);
    *(p+24)=temp;
    *(p+4)=*(p+1);*(p+20)=*(p+2);

}


