#include <stdio.h>
int main()
{
        char str[3][32];
        char *p[3];
        printf("Please enter three strings:");
        for (int i = 0; i < 3; i++) {
                p[i] = str[i];
                scanf_s("%s", p[i], 32);
        }
        for (int i = 0; i < 2; i++) {
                for (int j = i + 1; j < 3; j++) {
                        if (strcmp(p[i], p[j]) > 0) {
                                char *tmp = p[i]; p[i] = p[j]; p[j] = tmp;
                        }
                }

        }
        printf("%s %s %s\n", p[0], p[1], p[2]);
        system("pause");
        return 0;
}
