#include <stdio.h>

int strcmp(char *p1,char *p2)
{
    int len_p1 = 0;
    int len_p2 = 0;
    int i;
    int flag = 0;
    for ( i = 0;*(p1 + i)!='\0';i++)
        len_p1 = i;
    for ( i = 0;*(p2 + i)!='\0';i++)
        len_p2 = i;

    int len = len_p1 > len_p2 ? len_p1 : len_p2;
    for (int i = 0;i<len;i++)
    {
        if ( *(p1+i) != *(p2 +i))
        {
            return flag = *(p1+i) - *(p2 +i);
        }
    }
    if ( flag == 0 )
    {
        if ( len_p1 > len_p2)
            return 1;
        else
            return -1;
    }
    return 0;
}

int main()
{
    char a[10],b[10];
    gets(a);
    gets(b);
    printf("%d",strcmp(a,b));
}

