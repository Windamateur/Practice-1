#include <stdio.h>
int main()

{
    int n  ;
    int sum = 0 ;
    for (int i = 1;;i++)
    {
        sum += (i*i);
        if(sum + i*i>10000)
        {
            n=i-1;
            break;
        }
    }
    printf ("%d %d\n", n);
    return 0;
}