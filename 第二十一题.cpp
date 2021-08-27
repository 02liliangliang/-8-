#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

void swap(int*, int*);

void sort(int**, int);

int main(void)
{
    int i;
    int n;
    int array[MAXSIZE];
    int *pArray[MAXSIZE];
    printf("please enter n:\n");
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &array[i]);
        pArray[i] = &array[i];
    }
    sort(pArray, n);
    for (i = 0; i < n; ++i)
    {
        printf("%d\n", *pArray[i]);
    }
    return 0;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort(int **array, int n)
{
    int *p;
    int *q;
    for (p = *array; p < *array + n; ++p)
    {
        for (q = p + 1; q < *array + n; ++q)
        {
            if (*p > *q)
            {
                swap(p, q);
            }
        }
    }
}
