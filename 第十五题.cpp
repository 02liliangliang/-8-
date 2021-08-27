#include <stdio.h>

float average(float score[4][5],int n);
float stu_ave(float score[4][5],int i);
void find1(float score[4][5]);
void find2(float score[4][5]);
void print(float score[4][5],int n);

int main()
{
    float score[4][5] = {{91,92,98,88,83},{52,51,66,33,77},{55,57,89,90,92},{77,88,99,66,76}};
    float (*p)[5] = score;
    printf("查哪门平均成绩：");
    int n;
    scanf("%d",&n);
    printf("%5.2f\n",average(p,n-1));
    printf("两门以上不及格学生：\n");
    find1(score);
    printf("成绩优秀同学：\n");
    find2(score);
    return 0;
}


float average(float score[4][5],int n)
{
    float sum = 0;
    for ( int i = 0;i < 4;i++)
    {
        sum += *(*(score+i)+n);
    }
    return sum/4.0;
}

float stu_ave(float score[4][5],int i)
{
    float sum = 0;
    for ( int j = 0;j < 5;j++)
    {
        sum += *(*(score + i) + j);
    }
    return sum/5.0;
}

void find1(float score[4][5])
{
    int flag = 0;
    for (int i = 0;i < 4;i++)
    {
        for (int j = 0;j < 5;j++)
        {
            if ( *(*(score + i) + j) < 60)
                flag++;
        }
        if (flag >= 2)
            print(score,i);
        flag = 0;
    }
}

void find2(float score[4][5])
{
    int flag = 0;
    for (int i = 0;i < 4;i++)
    {
        for ( int j = 0;j < 5;j++)
        {
            if ( *(*(score + i) + j) >= 85)
            {
                flag++;
            }
        }
        if ( flag == 5 || stu_ave(score,i) >= 90)
        {
            print(score,i);
        }
        flag = 0;
    }
}

void print(float score[4][5],int n)
{
    printf("No.%d 成绩：",n + 1);
    for (int i = 0;i < 5;i++)
    {
        printf("%5.2f  ",*(*(score + n)+i));
    }
    printf("\n");
}
