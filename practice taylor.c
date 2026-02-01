#include <stdio.h>
#include <math.h>

double factorial (int i)
{
    if (i <= 1)
    {
        return 1;
    }
    return i * factorial(i - 1);
}

double taylor_sin (double x , int n)
{
    double result = 0.0;
    for (int i = 0; i < n; i = i + 1 )
    {
        int sign;
        if (i % 2 == 0)
        {
            sign = 1;
        }
        else 
        {
            sign = -1;
        }
        result = result + sign * pow(x , 2 * i + 1)/factorial(2 * i + 1);
    }
    return result;
}

int main()
{
    double x;
    int n;
    scanf ("%lf",&x);
    scanf ("%d",&n);
    double result = taylor_sin (x , n);
    printf("Result:%1f", result);
    return 0;
}