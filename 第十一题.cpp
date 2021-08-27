#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sort(char p[10][10])
{
    char t[10] ;
    for (int i = 0;i < 9;i++)
    {
        for (int j = 0;j < 9 - i;j++)
        {
            if ( strcmp(p[j],p[j+1]) > 0 )
            {
                strcpy(t,p[j]);
                strcpy(p[j],p[j+1]);
                strcpy(p[j+1],t);
            }
        }
    }
}

int main()
{
    char c[10][10];
    for ( int i = 0;i < 10;i++)
    {
        gets(c[i]);
    }

    sort(c);
    for ( int i = 0;i < 10;i++)
    {
        printf("%s\n",*(c+i));
    }
}
