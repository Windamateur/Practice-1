#include <stdio.h>

int a;
int b;
int c;

int main()
{
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a<b)
{
    int d=a;
    a=b;
    b=d;
}
    if (b<c)
{
    int e=b;
    b=c;
    c=e;
}
    printf("%d %d %d\n",a,b,c);
    return 0;
}
