#include <stdio.h>
#include <stdlib.h>
void fun()
{
    printf("输入10个数：\n");
    int *p = (int *)malloc(10 * sizeof(int));
    for (int i = 0;i < 10;i++)
    {
        scanf("%d",(p+i));
    }
    printf("逆序输出为:\n");
    for ( int i = 9;i >= 0;i--)
    {
        printf("%d\t",*(p+i));
    }
    free(p);
}

int main()
{
    fun();
    return 0;
}
