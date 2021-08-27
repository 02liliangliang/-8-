#include <stdio.h>

void f(char *p);

int main()
{
    char c[100];
    gets(c);
    f(c);
    return 0;
}

void f(char *p)
{
    int a[10],i,j=0,b=0;
    for(i=0;*(p+i)!='\0';i++)
    {
        if(*(p+i)>='0'&&*(p+i)<='9')
        {
            b=*(p+i)-48+b*10;
            if(*(p+i+1)<'0'||*(p+i+1)>'9')
            {
                a[j]=b;j++;b=0;
            }
        }
    }
    printf("\n一共有%d个整数，分别为：\n",j);
    for(i=0;i<j;i++)
        printf("%4d",a[i]);
}

