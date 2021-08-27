#include <stdio.h>
#include <stdlib.h>

int *New(int n)
{
    int *p = (int *)malloc(n * sizeof(int));
    return p;
}

void Free(int *p)
{
    free(p);
}

int main()
{
    int *p = New(5);
    Free(p);
    return 0;
}
