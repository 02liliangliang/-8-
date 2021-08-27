#include <stdio.h>

void count(char *p)
{
    int Character = 0,character = 0,space = 0,number = 0,other = 0;
    for (int i = 0;*p != '\0';i++,p++)
    {

        if ( *p >= 'A' && *p <= 'Z')
        {
            Character++;
        }
        else if (*p >= 'a' && *p <= 'z')
        {
            character++;
        }
        else if ( *p >= '0' && *p <= '9')
        {
            number++;
        }
        else if ( *p == ' ')
        {
            space++;
        }
        else
            other++;
    }
    printf("字母有 %d 个。\n",character);
    printf("数字有 %d 个。\n",number);
    printf("空格有 %d 个。\n",space);
    printf("其他有 %d 个。\n",other);
}

int main()
{
    char p[100];
    gets(p);
    count(p);
    return 0;
}


