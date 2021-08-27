#include <stdio.h>
#include <math.h>

    float i = 1/50.0;

void fun(float (*p)());
float Cos();
float Sin();
float Exp();
int main()
{
    int n;
    scanf("%d",&n);
    if(n == 1)
        fun(Cos);
    if (n == 2)
        fun(Sin);
    if (n == 3)
        fun(Exp);
    return 0;
}

void fun(float (*p)())
{
    float result;
    result = (*p)();
    printf("%6.3f",result);
}

float Cos()
{
    float sum = 0;
    for ( float step = 0;step <= 1;step += 0.002)
    {
        sum += 0.002 * cos(step);
    }
    return sum;
}
float Sin()
{
    float sum = 0;
    for ( float step = 0;step <= 1;step += 0.002)
    {
        sum += 0.002 * sin(step);
    }
    return sum;
}
float Exp()
{
    float sum = 0;
    for ( float step = 0;step <= 1;step += 0.002)
    {
        sum += 0.002 * exp(step);
    }
    return sum;
}
