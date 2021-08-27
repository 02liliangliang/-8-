#include <stdio.h>
#include <stdlib.h>

void copym(char *a,int m)
{

    char *b = (char *)malloc( (11 - m ) *sizeof(char));
    int j = 0;
    for ( int i = m;i < 10;i++)
    {
        b[j++] = a[i];
    }
    b[j] = '\0';
    printf("%s\n",b);
}

int main()
{
    int m;
    char *a = "1234567890";
    printf("a 字符串为 %s\n输入开始复制位置：\n",a);
    scanf("%d",&m);
    printf("复制之后的字符串b：\n");
    copym(a,m);
    return 0;
}
