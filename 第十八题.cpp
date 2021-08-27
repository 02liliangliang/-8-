#include <stdio.h>

void month(int m);

int main()
{
    int mon, i;
    printf("Pleae enter month: ");
    scanf("%d",&mon);

    month(mon);

    return 0;
}
void month(int m)
{
    char *mm[12]={"January", "February", "March", "April", "May",
        "June", "July", "August", "September", "October", "November", "December"};
    int i;
    char **p;
    for (p=mm, i=0; i<12; p++, i++)
        if ( m == (i+1))
        {
            printf("%s",*p);
            break;
        }
}
