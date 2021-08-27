#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][10],pt[10];
    char **q,*p[]={str[0],str[1],str[2],str[3],str[4]};
    int i,j;
    printf("输入5行字符串：\n");
    for(i=0;i<5;i++)
        gets(str[i]);
    q=p;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4-i;j++)
        {
            if(strcmp(*(q+j),*(q+j+1))>0)
            {
                strcpy(pt,*(q+j));
                strcpy(*(q+j),*(q+j+1));
                strcpy(*(q+j+1),pt);
            }
        }
    }
    printf("\n字符串小到大排序：\n");
    for(i=0;i<5;i++)
        printf("%s\n",*(q+i));
}

