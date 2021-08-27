#include <stdio.h>
#include <string.h>

void sort(char *p[])
{
    char *t;
    for (int i = 0;i < 9;i++)
    {
        for (int j = 0;j < 9 - i;j++)
        {
            if ( strcmp(p[j],p[j+1]) > 0 )
            {
                t = p[j];
                p[j] = p[j+1];
                p[j+1] = t;
            }
        }
    }
}

int main()
{
    char c[10][10];
    char *p[10];
    for ( int i = 0;i < 10;i++)
    {
        gets(c[i]);
        p[i] = c[i];
    }

    sort(p);
    for ( int i = 0;i < 10;i++)
    {
        printf("%s\n",*(p+i));
    }
}
